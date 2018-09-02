#include "wx/wx.h"
#include "wx/frame.h"
#include "wx/panel.h"
#include "wx/dialog.h"
#include "wx/webview.h"

#include "CppPlotly/Trace/Bar.h"
#include "CppPlotly/Plot.h"

class CppPlotlyApp : public wxApp {
public:
    virtual bool OnInit() wxOVERRIDE;
};

class VisorGraficos : public wxPanel {
public:
    VisorGraficos(wxWindow *padre, wxWindowID id, const wxSize &size = wxDefaultSize);

    void MostrarGraficoBarras(const std::vector<std::pair<double, double>> &datos);

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
    std::vector<std::pair<double, double> > datos = {{1, 5},
                                                          {2, 7}};
    frame->GetVisorGraficos()->MostrarGraficoBarras(datos);
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

void VisorGraficos::MostrarGraficoBarras(const std::vector<std::pair<double, double>> &datos) {

    std::vector<double> x;
    std::vector<double> y;

    for (const auto &par : datos) {
        x.push_back(par.first);
        y.push_back(par.second);
    }

    auto bar = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Bar())->
            X(x).
            Y(y)));

    auto plot = CppPlotly::Plot().AddTrace(bar);

    this->visor->SetPage(
            plot.render_html().c_str(), // TODO Encoding
            wxString());
}



