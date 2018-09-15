#include "wx/wx.h"
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/dialog.h"
#include "wx/webview.h"

#include "CppPlotly/Trace/Bar.h"
#include "CppPlotly/Trace/Box.h"
#include "CppPlotly/Plot.h"

class CppPlotlyApp : public wxApp {
public:
    virtual bool OnInit() wxOVERRIDE;
};

class VisorGraficos : public wxPanel {
public:
    VisorGraficos(wxWindow *padre, wxWindowID id, const wxSize &size = wxDefaultSize);

    void MostrarGrafico(const CppPlotly::Plot &plot) const;

    void MostrarGraficoCajas(const std::map<std::string, std::vector<std::string>> &datos);

    void MostrarGraficoBarras(const std::vector<std::pair<std::string, double>> &datos);

    virtual ~VisorGraficos() = default;

private:
    wxWebView *visor;
};

class VisorGraficosFrame : public wxFrame {
public:
    VisorGraficosFrame(wxWindow *padre, wxWindowID id, const std::string &titulo_ventana,
                       const wxSize &size = wxDefaultSize);

    VisorGraficos *GetVisorGraficos();

    virtual ~VisorGraficosFrame() = default;

private:
    VisorGraficos *visor_graficos;
};


wxIMPLEMENT_APP(CppPlotlyApp);

bool CppPlotlyApp::OnInit() {
    if (!wxApp::OnInit())
        return false;

    auto frame = new VisorGraficosFrame(NULL, wxID_ANY, "Grafico Barras");
    std::vector<std::pair<std::string, double> > datos = {{"A", 5},
                                                          {"B", 7}};

    std::map<std::string, std::vector<std::string>> pasadas =
            {{"A 2018091100", {"2018-09-11 05:47:11.027671", "2018-09-11 08:30:15.771931"}},
             {"A 2018091200", {"2018-09-12 05:47:19.224671", "2018-09-12 08:30:17.014874"}},
             {"A 2018091300", {"2018-09-13 05:47:11.508111", "2018-09-13 07:12:02.441666"}},
             {"A 2018091112", {"2018-09-11 17:47:11.785961", "2018-09-11 19:36:26.556494"}},
             {"A 2018091212", {"2018-09-12 17:47:14.399287", "2018-09-12 19:35:18.330248"}},
             {"B 2018091100", {"2018-09-11 07:03:10.068321", "2018-09-11 11:53:21.868809"}},
             {"B 2018091200", {"2018-09-12 07:02:53.91888",  "2018-09-12 11:38:50.152389"}},
             {"B 2018091300", {"2018-09-13 07:03:48.382148", "2018-09-13 07:12:23.130923"}},
             {"B 2018091112", {"2018-09-11 19:02:56.062621", "2018-09-11 23:34:22.986288"}},
             {"B 2018091212", {"2018-09-12 19:02:30.388121", "2018-09-12 23:39:40.43355"}}};

    std::map<std::string, std::vector<std::string>> pasadas_varios_dias =
            {{"A 00", {"05.4711", "08.3015",
                                "05.4919", "08.3217",
                                "05.4819", "08.3317",
                                      "05.4519", "08.3817",
                                      "05.4619", "08.3917",
                                "05.4711", "07.1202"}},
             {"A 12", {"17.4711", "19.3626",
                               "17.4714", "19.3518"}},
             {"B 00", {"07.0310", "11.5321",
                               "07.0253",  "11.3850",
                               "07.0348", "07.1223"}},
             {"B 12", {"19.0256", "23.3422",
                                "19.0230", "23.3940"}}};



    //frame->GetVisorGraficos()->MostrarGraficoBarras(datos);
    frame->GetVisorGraficos()->MostrarGraficoCajas(pasadas_varios_dias);
    frame->Show();

    return true;
}

VisorGraficosFrame::VisorGraficosFrame(wxWindow *padre, wxWindowID id, const std::string &titulo_ventana,
                                       const wxSize &size) :
        wxFrame(padre, id, titulo_ventana.c_str(), wxDefaultPosition, size), visor_graficos(new VisorGraficos(
        this, id
)) {
}

VisorGraficos *VisorGraficosFrame::GetVisorGraficos() {
    return visor_graficos;
}

VisorGraficos::VisorGraficos(wxWindow *padre, wxWindowID id, const wxSize &size) :
        wxPanel(padre, id, wxDefaultPosition, size) {
    visor = wxWebView::New(this, wxID_ANY);
    visor->SetPage(wxString("Hola"), wxString());
    auto main_sizer = new wxBoxSizer(wxHORIZONTAL);
    main_sizer->Add(visor, 1, wxEXPAND);
    SetSizer(main_sizer);
}

void VisorGraficos::MostrarGraficoBarras(const std::vector<std::pair<std::string, double>> &datos) {

    std::vector<std::string> x;
    std::vector<double> y;

    for (const auto &par : datos) {
        x.push_back(par.first);
        y.push_back(par.second);
    }

    auto bar = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Bar())->
            X(x).
            Y(y)));

    auto plot = CppPlotly::Plot().AddTrace(bar);

    MostrarGrafico(plot);
}

void VisorGraficos::MostrarGrafico(const CppPlotly::Plot &plot) const {
    visor->SetPage(
            plot.render_html().c_str(), // TODO Encoding
            wxString());
}


void VisorGraficos::MostrarGraficoCajas(const std::map<std::string, std::vector<std::string>> &datos) {
    auto plot = CppPlotly::Plot();
    auto layout = CppPlotly::Layout(json11::Json::object {
            {"xaxis",
                    json11::Json::object{{"type", "date"}}
            }
        } );
    //plot.Layout(layout);
    for (const auto &dato : datos) {
        auto box = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Box())->
                X(dato.second).
                Name(dato.first)));
        plot.AddTrace(box);
    }

    MostrarGrafico(plot);
}

