/*#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
	// Create the window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Test application");
	// Create drawable elements
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	sf::CircleShape ring(120.f);
	ring.setFillColor(sf::Color::Yellow);
	sf::Texture icon;
	sf::Sprite sprite;
	sf::Font font;
	sf::Text text;

	sf::CircleShape node_shape(100.f, 16);
	node_shape.setFillColor(sf::Color::Red);
	node_shape.setOutlineThickness(20.f);
	node_shape.setOutlineColor(sf::Color::Black);
	node_shape.setOrigin(shape.getRadius(), shape.getRadius());
	node_shape.setPosition(sf::Vector2f(200, 200));

	// Load the image
	if (!icon.loadFromFile("SpaceMegaforce_Icon.png"))
	{
		std::cout << "Could not load image!\n" << std::endl;
	}
	// Load the font
	if (!font.loadFromFile("Akashi.ttf"))
		//if (!font.loadFromFile("heavy_data.ttf"))
		//if (!font.loadFromFile("arial.ttf"))
	{
		std::cout << "Could not load font!\n" << std::endl;
	}

	sprite.setTexture(icon);
	// Set the center of the sprite to the center of the image
	sprite.setOrigin(icon.getSize().x / 2, icon.getSize().y / 2);
	// Position the sprite
	sprite.setPosition(sf::Vector2f(400, 300));
	// Position the circles
	shape.setOrigin(shape.getRadius(), shape.getRadius());
	shape.setPosition(sf::Vector2f(400, 300));
	ring.setOrigin(ring.getRadius(), ring.getRadius());
	ring.setPosition(sf::Vector2f(400, 300));
	// Configure the text object
	text.setFont(font);
	text.setString("Node 234");
	text.setCharacterSize(24);
	text.setColor(sf::Color::Blue);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			
		}

		window.clear(sf::Color::White);
		window.draw(ring);
		window.draw(shape);
		window.draw(sprite);
		window.draw(text);
		window.draw(node_shape);
		window.display();
	}

	return 0;
}*/