#include <SFML/Graphics.hpp>
#include <iostream>

using  namespace  sf;
using  namespace  std;


void  Load() {
}

void  Update(RenderWindow &window) {

	// Reset  clock , recalculate  deltatime
	static  Clock  clock;
	float  dt = clock.restart().asSeconds ();

	// Check and consume events
	Event  event;

	while (window.pollEvent(event)) {
		if (event.type == Event::Closed) {
			window.close();
			return;
		}
	}

	// Quit via ESC Key
	if (Keyboard::isKeyPressed(Keyboard::Escape)) {
		window.close();
	}
}

void  Render(RenderWindow &window) {
}

int  main() {
	
	RenderWindow window(VideoMode(800, 600), "Shoot2Kill");
	Load();

	while (window.isOpen()) {
		window.clear();
		Update(window);
		Render(window);
		window.display();
	}
	
	return  0;
}