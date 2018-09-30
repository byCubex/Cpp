#include "main.h"
#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main()
{


	RenderWindow frame(VideoMode(1190, 790), "Spiel");


	RectangleShape Back(Vector2f(950, 550));
	Back.setFillColor(Color::White);
	Back.setPosition(0, 0);

	CircleShape shape(25.f);
	shape.setFillColor(Color::Red);
	shape.setPosition(0,0);

	CircleShape shape2(25.f);
	shape2.setFillColor(Color::Green);
	shape2.setPosition(0, 50);

	CircleShape shape3(25.f);
	shape3.setFillColor(Color::Blue);
	shape3.setPosition(0, 100);

	RectangleShape Player(Vector2f(50, 50));
	Player.setFillColor(Color::Yellow);
	int x = 0;
	int y = 150;
	Player.setPosition(x,y);

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
					Player.move(0, -50);
					y -= 50;
					if (y == -50) {
						Player.move(0, 50);
						y = 0;
					}
				}
				if (event.key.code == Keyboard::F3) {
					cout << "Debug :" << endl;
					cout <<"X:" <<x<<endl<<"Y:" << y<<endl;
				}
				if (event.key.code == Keyboard::A) {
					cout << "A pressed" << endl;
					Player.move(-50, 0);
					x -= 50;
					if (x == -50) {
						Player.move(50, 0);
						x = 0;
					}
				}
				if (event.key.code == Keyboard::S) {
					cout << "S pressed" << endl;
					Player.move(0, +50);
					y += 50;
					if (y == 550) {
						Player.move(0,- 50);
						y = 500;
					}
				}
				if (event.key.code == Keyboard::D) {
					cout << "D pressed" << endl;
					Player.move(+50, 0);
					x += 50;
					if (x == 950) {
						Player.move(-50, 0);
						x = 900;
					}
				}
			}

		}
		frame.setKeyRepeatEnabled(false);
		frame.clear();
		frame.setFramerateLimit(60);
		frame.draw(Back);
		frame.draw(shape);
		frame.draw(shape2);
		frame.draw(shape3);
		frame.draw(Player);
		
		
		frame.display();
	}

	return 0;
}