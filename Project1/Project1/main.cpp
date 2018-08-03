#include "main.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main()
{
	int x = 0;
	int y = 150;

	RenderWindow frame(VideoMode(1190, 790), "Spiel");

	CircleShape shape(25.f);
	shape.setFillColor(Color::Red);
	shape.setPosition(0,0);

	CircleShape shape2(25.f);
	shape2.setFillColor(Color::Green);
	shape2.setPosition(0, 50);

	CircleShape shape3(25.f);
	shape3.setFillColor(Color::Blue);
	shape3.setPosition(0, 100);

	RectangleShape shape4(Vector2f(50, 50));
	shape4.setFillColor(Color::Yellow);
	shape4.setPosition(x,y);

	while (frame.isOpen())
	{
		if (Keyboard::isKeyPressed(Keyboard::Space))
		{
			cout << "Space pressed" << endl;
		}

		Event event;
		while (frame.pollEvent(event))
		{
			if (event.type == Event::Closed)
				frame.close();

			if (event.type == Event::EventType::KeyPressed) {
				if (event.key.code == Keyboard::W) {
					cout << "W pressed" << endl;
					y - 50;
					frame.draw(shape4);
				}
				if (event.key.code == Keyboard::A) {
					cout << "A pressed" << endl;
					x - 50;
					frame.draw(shape4);
				}
				if (event.key.code == Keyboard::S) {
					cout << "S pressed" << endl;
					y + 50;
					frame.draw(shape4);
				}
				if (event.key.code == Keyboard::D) {
					cout << "D pressed" << endl;
					x + 50;
					frame.draw(shape4);
				}
			}
		}
		frame.setKeyRepeatEnabled(false);
		frame.clear();

		frame.draw(shape);
		frame.draw(shape2);
		frame.draw(shape3);
		frame.draw(shape4);
		
		frame.display();
	}

	return 0;
}