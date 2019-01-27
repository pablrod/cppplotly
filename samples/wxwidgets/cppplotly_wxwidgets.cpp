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

class PlotViewer : public wxPanel {
public:
    PlotViewer(wxWindow *parent, wxWindowID id, const wxSize &size = wxDefaultSize);

    void ShowPlot(const CppPlotly::Plot &plot) const;

    void ShowBoxPlot(const std::map<std::string, std::vector<std::string>> &data);

    void ShowBarPlot(const std::vector<std::pair<std::string, double>> &data);

    virtual ~PlotViewer() = default;

private:
    wxWebView *viewer;
};

class PlotViewerFrame : public wxFrame {
public:
    PlotViewerFrame(wxWindow *parent, wxWindowID id, const std::string &titulo_ventana,
                       const wxSize &size = wxDefaultSize);

    PlotViewer *GetPlotViewer();

    virtual ~PlotViewerFrame() = default;

private:
    PlotViewer *plot_viewer;
};


wxIMPLEMENT_APP(CppPlotlyApp);

bool CppPlotlyApp::OnInit() {
    if (!wxApp::OnInit())
        return false;

    auto frame = new PlotViewerFrame(NULL, wxID_ANY, "Bar Plot");
    std::vector<std::pair<std::string, double> > data = {{"A", 5},
                                                          {"B", 7}};

    frame->GetPlotViewer()->ShowBarPlot(data);
    frame->Show();

    return true;
}

PlotViewerFrame::PlotViewerFrame(wxWindow *parent, wxWindowID id, const std::string &titulo_ventana,
                                       const wxSize &size) :
        wxFrame(parent, id, titulo_ventana.c_str(), wxDefaultPosition, size), plot_viewer(new PlotViewer(
        this, id
)) {
}

PlotViewer *PlotViewerFrame::GetPlotViewer() {
    return plot_viewer;
}

PlotViewer::PlotViewer(wxWindow *parent, wxWindowID id, const wxSize &size) :
        wxPanel(parent, id, wxDefaultPosition, size) {
    viewer = wxWebView::New(this, wxID_ANY);
    viewer->SetPage(wxString("Please add at least one plot"), wxString());
    auto main_sizer = new wxBoxSizer(wxHORIZONTAL);
    main_sizer->Add(viewer, 1, wxEXPAND);
    SetSizer(main_sizer);
}

void PlotViewer::ShowBarPlot(const std::vector<std::pair<std::string, double>> &data) {

    std::vector<std::string> x;
    std::vector<double> y;

    for (const auto &par : data) {
        x.push_back(par.first);
        y.push_back(par.second);
    }

    auto bar = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Bar())->
            X(x).
            Y(y)));

    auto plot = CppPlotly::Plot().AddTrace(bar);

    ShowPlot(plot);
}

void PlotViewer::ShowPlot(const CppPlotly::Plot &plot) const {
    viewer->SetPage(
            plot.render_html().c_str(), // TODO Encoding
            wxString());
}


void PlotViewer::ShowBoxPlot(const std::map<std::string, std::vector<std::string>> &data) {
    auto plot = CppPlotly::Plot();
    auto layout = CppPlotly::Layout(json11::Json::object {
            {"xaxis",
                    json11::Json::object{{"type", "date"}}
            }
        } );
    //plot.Layout(layout);
    for (const auto &trace_data : data) {
        auto box = CppPlotly::BaseTrace::Pointer(&((new CppPlotly::Trace::Box())->
                X(trace_data.second).
                Name(trace_data.first)));
        plot.AddTrace(box);
    }

    ShowPlot(plot);
}

