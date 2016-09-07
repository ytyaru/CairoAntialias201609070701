#pragma once
#include <gtkmm/drawingarea.h>
#include <cairomm/cairomm.h>
class MyArea : public Gtk::DrawingArea
{
public:
	MyArea();
	virtual ~MyArea();
protected:
	bool on_expose_event( GdkEventExpose* event );
private:
	Pango::FontDescription m_font;
	Cairo::FontOptions m_fontOption;
};
