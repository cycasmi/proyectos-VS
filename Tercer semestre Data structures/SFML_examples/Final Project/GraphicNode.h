#pragma once
#include <SFML/Graphics.hpp>
#include "TreeNode.h"

template <class T>
class GraphicNode : public TreeNode<T> {
private:
	sf::Image leaf; //Image that contains the texture
	sf::Texture leaf_texture; //it will contain the texture of the image with some modifications
	sf::Sprite leaf_sprite;

	sf::Text text;
	sf::Vector2f position;

public:
	GraphicNode() {}
	GraphicNode(const T & _data);
	GraphicNode(const T & _data, const sf::Font & _font, sf::Color _color = sf::Color::Yellow, int _radius = 50);
	void configure(const T & _data, const sf::Font & _font);
	void configure(const sf::Font & _font);
	void draw(sf::RenderWindow & _window);
	void drawRightLine(sf::RenderWindow & _window);
	void drawLeftLine(sf::RenderWindow & _window);
	void setPosition(const sf::Vector2f & _position);
	sf::Vector2f getPosition();
};

template <class T>
GraphicNode<T>::GraphicNode(const T & _data)
{
	// Store the data for the TreeNode
	this->setData(_data);
}

template <class T>
GraphicNode<T>::GraphicNode(const T & _data, const sf::Font & _font, sf::Color _color, int _radius)
{
	configure(_data, _font, _color, _radius);
}

template <class T>
void GraphicNode<T>::configure(const T & _data, const sf::Font & _font)
{
	// Store the data for the TreeNode
	this->setData(_data);
	// Configure the visual representation
	configure(_font);
}

template <class T>
void GraphicNode<T>::configure(const sf::Font & _font)
{
	// Load the image
	if (!leaf.loadFromFile("Leaf.png"))
	{
		std::cout << "Could not load image!\n" << std::endl;
	}

	leaf.createMaskFromColor(sf::Color(255, 255, 255, 255)); //Makes color white transparent
	leaf_texture.loadFromImage(leaf); //transform modificated image to a texture
	leaf_sprite.setTexture(leaf_texture); //sets texture to the leaf sprite

	leaf.createMaskFromColor(sf::Color(255, 255, 255, 255)); //Makes color white transparent
	leaf_texture.loadFromImage(leaf); //transform modificated image to a texture
	leaf_sprite.setTexture(leaf_texture); //sets texture to the leaf sprite
	leaf_sprite.setOrigin(leaf.getSize().x/2, leaf.getSize().y/2);

	// Configure the text object
	text.setFont(_font);
	text.setCharacterSize(24);
	text.setColor(sf::Color::White);
	// Center the origin of the text
	sf::FloatRect textRect = text.getLocalBounds();
	text.setOrigin(textRect.left + textRect.width / 2.0f, textRect.top + textRect.height / 2.0f);
	//text.setStyle(sf::Text::Bold | sf::Text::Underlined);

}

template <class T>
void GraphicNode<T>::draw(sf::RenderWindow & _window)
{
	_window.draw(leaf_sprite);
	// Set the string to be equal to the data
	text.setString(std::to_string(this->getData()));
	_window.draw(text);
}

template <class T>
void GraphicNode<T>::setPosition(const sf::Vector2f & _position)
{
	position = _position;
	leaf_sprite.setPosition(position);
	text.setPosition(position);
}

template <class T>
sf::Vector2f GraphicNode<T>::getPosition()
{
	return position;
}


template <class T>
void GraphicNode<T>::drawRightLine(sf::RenderWindow & _window)
{

	//Draw a white line with thiknes
	sf::Vertex rightLines[] =
	{
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x + 19, leaf_sprite.getPosition().y)),
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x - 19 + 68, leaf_sprite.getPosition().y-13)),
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x + 18, leaf_sprite.getPosition().y)),
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x - 20 + 68, leaf_sprite.getPosition().y-13))
	};

	_window.draw(rightLines, 4, sf::Lines);

}

template <class T>
void GraphicNode<T>::drawLeftLine(sf::RenderWindow & _window)
{

	//Draw a white line with thiknes
	sf::Vertex leftLines[] =
	{
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x - 19, leaf_sprite.getPosition().y)),
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x + 19 - 68, leaf_sprite.getPosition().y - 13)),
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x - 18, leaf_sprite.getPosition().y)),
		sf::Vertex(sf::Vector2f(leaf_sprite.getPosition().x + 20 - 68, leaf_sprite.getPosition().y - 13))
	};

	_window.draw(leftLines, 4, sf::Lines);

}