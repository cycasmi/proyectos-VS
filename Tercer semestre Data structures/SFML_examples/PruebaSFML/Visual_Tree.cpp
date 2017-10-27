/*
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 598
#define WINDOW_HEIGHT 400

int main()
{

	//Window for Tree
	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Tree");

	//Definition of Tree and leaf
	sf::Texture tree;
	sf::Sprite tree_sprite;

	sf::Image leaf; //Image that contains the texture
	sf::Texture leaf_texture; //it will contain the texture of the image with some modifications
	sf::Sprite leaf_sprite;

	// Load the images
	if (!tree.loadFromFile("Tree.png") || !leaf.loadFromFile("Leaf.png"))
	{
		std::cout << "Could not load image!\n" << std::endl;
	}

	tree_sprite.setTexture(tree); //set the texture to the tree sprite

	leaf.createMaskFromColor(sf::Color(255, 255, 255, 255)); //Makes color white transparent
	leaf_texture.loadFromImage(leaf); //transform modificated image to a texture
	leaf_sprite.setTexture(leaf_texture); //sets texture to the leaf sprite


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}


		window.draw(tree_sprite);
		window.draw(leaf_sprite);

		window.display();
	}
}
*/