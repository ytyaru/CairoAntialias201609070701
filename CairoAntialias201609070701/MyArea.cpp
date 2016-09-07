#include "MyArea.h"
#include <gtkmm.h>
#include <glibmm.h>
#include <string>
#include <pangomm.h>
#include <pangomm/fontdescription.h>
MyArea::MyArea(void)
{
	m_font.set_family("MS gothic");
	m_font.set_weight(Pango::WEIGHT_NORMAL);
	m_font.set_size(72 * Pango::SCALE);

	m_fontOption.set_antialias(Cairo::ANTIALIAS_SUBPIXEL); // ANTIALIAS_DEFAULT,ANTIALIAS_NONE,ANTIALIAS_GRAY,ANTIALIAS_SUBPIXEL
	m_fontOption.set_subpixel_order(Cairo::SUBPIXEL_ORDER_DEFAULT); // SUBPIXEL_ORDER_DEFAULT,SUBPIXEL_ORDER_RGB,SUBPIXEL_ORDER_BGR,SUBPIXEL_ORDER_VRGB,SUBPIXEL_ORDER_VBGR
	m_fontOption.set_hint_style(Cairo::HINT_STYLE_SLIGHT); // HINT_STYLE_DEFAULT,HINT_STYLE_NONE,HINT_STYLE_SLIGHT,HINT_STYLE_MEDIUM,HINT_STYLE_FULL
}
MyArea::~MyArea(void)
{
}
bool MyArea::on_expose_event( GdkEventExpose* event )
{
	const int width = this->get_width();
	const int height = this->get_height();

	Cairo::RefPtr< Cairo::Context > cr = get_window()->create_cairo_context();
	cr->set_source_rgb(0.0, 0.0, 0.0);
	cr->rectangle(0, 0, width, height);
	cr->fill();
	cr->set_source_rgb(1.0, 1.0, 1.0);
	//cr->set_font_options(m_fontOption);
	//cr->set_antialias(Cairo::ANTIALIAS_SUBPIXEL);

	Glib::RefPtr<Pango::Layout> layout = Pango::Layout::create(cr);
	
	Glib::RefPtr<Pango::Context> pangoCtx = layout->get_context();
	Pango::Language lang("ja");
	pangoCtx->set_language(lang);
	pangoCtx->set_cairo_font_options(m_fontOption);
	
	layout->set_text(Glib::locale_to_utf8("AntiAliasŠm”F"));
	layout->set_font_description(m_font);

	int text_width;
	int text_height;
	layout->get_pixel_size(text_width, text_height);
	cr->move_to(0, 0);

	layout->update_from_cairo_context(cr);
	layout->show_in_cairo_context(cr);
	
	return true;
}
