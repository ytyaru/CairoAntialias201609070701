#include "MyWindow.h"
MyWindow::MyWindow(void)
{
	set_default_size(625,120);
	add(m_drawarea);
	show_all_children();
}
MyWindow::~MyWindow(void)
{
}
