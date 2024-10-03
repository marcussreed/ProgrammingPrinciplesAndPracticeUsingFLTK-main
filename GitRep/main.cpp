#include "Libraries/Window.h"
#include "Libraries/Graph.h"
#include "Libraries/Simple_window.h"

int main() {

	using namespace Graph_lib;
	Point t1{100, 100};

	Simple_window win{t1, 600, 400, "Canvas"};

    Graph_lib::Polygon poly;
    poly.add(Point(300,200));
    poly.add(Point(275,175));
    poly.add(Point(350,100));

	poly.set_color(Color::red);
	win.attach(poly);

	win.wait_for_button();

	return 0;
}