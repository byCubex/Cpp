#include "Circles.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

/*int main()
{
	RenderWindow w(VideoMode(800, 600), "Button test");

	Vertex rectangle[] = {
		Vector2f(300, 300),
		Vector2f(100, 300),
		Vector2f(100, 100),
		Vector2f(300, 100)
	};

	while (w.isOpen())
	{
		Event e;
		w.pollEvent(e);

		if (e.type == Event::Closed)
		{
			return 0;
		}

		if (e.type == Event::MouseButtonPressed &&
			Mouse::getPosition(w).x >= 100 && Mouse::getPosition(w).x <= 300 && // Testing if  100 < x < 300
			Mouse::getPosition(w).y >= 100 && Mouse::getPosition(w).y <= 300) // Testing if 100 < y < 300
		{
			std::cout << "" << std::endl;
			
		}
		else
		{
			std::cout << "Mouse Position:  X: " << Mouse::getPosition(w).x << " Y: " << Mouse::getPosition(w).y << std::endl;
		}

		w.draw(rectangle, 4, sf::Quads);

		w.display();
		w.clear();
	}
}*/
