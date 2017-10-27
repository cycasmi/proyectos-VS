#include <iostream>
/*#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "GraphicNode.h"

int display();

int main()
{
	return display();
}

int display()
{
	// Create the window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Test application");
	// Create a font
	sf::Font font;
	// Load the font
	if (!font.loadFromFile("Akashi.ttf"))
		//if (!font.loadFromFile("heavy_data.ttf"))
	{
		std::cout << "Could not load font!\n" << std::endl;
	}

	GraphicNode nodes[4];

	for (int i = 0; i<4; i++)
	{
		nodes[i].configure(std::to_string(i), font, sf::Color::Red, 30);
		nodes[i].setPosition(sf::Vector2f(100 * i + 50, 100));
	}

	// Test some nodes
	GraphicNode node_1("Hello", font, sf::Color::Green);
	node_1.setPosition(sf::Vector2f(200, 400));
	GraphicNode node_2("World", font, sf::Color::Cyan);
	node_2.setPosition(sf::Vector2f(400, 300));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color::White);
		node_1.draw(window);
		node_2.draw(window);
		for (int i = 0; i<4; i++)
		{
			nodes[i].draw(window);
		}
		window.display();
	}

	return 0;
}
*/