/*
#include <iostream>
#include <SFML/Graphics.hpp>
#include <math.h>

int main()
{
	sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
	sf::CircleShape circle(50);
	circle.setOrigin(-150, -150);
	circle.setFillColor(sf::Color::Green);

	sf::CircleShape octagon(200, 8);
	octagon.setOrigin(0, 0);
	octagon.setFillColor(sf::Color::Magenta);

	sf::RectangleShape line(sf::Vector2f(150, 5));
	line.setFillColor(sf::Color::Cyan);
	line.setOrigin(-200, circle.getOrigin().y-50);
	//line.setRotation(0);
	//line.rotate(45);

	double a = (int)(282.84 * cos(3.14/4));

	int x = ceil(a);
	int y = ceil(282.84 * sin(3.14/4));

	std::cout << x << std::endl;
	std::cout << y;


	sf::Vertex thinLines[] =
	{
		sf::Vertex(sf::Vector2f(200, 200)),
		sf::Vertex(sf::Vector2f(300, 300)),
		sf::Vertex(sf::Vector2f(x , y)),
		sf::Vertex(sf::Vector2f(x + 100, y + 100))
	};

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(octagon);
		window.draw(circle);

		//line.setRotation(0);
		//line.setFillColor(sf::Color::White);
		//window.draw(line);

		line.setFillColor(sf::Color::Blue);
		line.setRotation(45);
		window.draw(line);

		window.draw(thinLines, 4, sf::Lines);
		
		window.display();
	}
	
	return 0;
}
*/