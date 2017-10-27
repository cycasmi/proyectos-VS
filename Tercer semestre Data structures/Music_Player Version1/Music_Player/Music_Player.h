#pragma once
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>
#include <string>
//#include "DoubleLinkedList.h"


class Music_Player// : public DoubleLinkedList<std::string>
{
private:

public:
	Music_Player() {}

	int getNames(std::string arraySongNames[]);
	/*void play_music();
	void pause_music(std::string file_name);
	void next_song(std::string file_name);*/
	
};

int Music_Player::getNames(std::string arraySongNames[])
{
	int i = 0;
	std::string filename = "ASOIF_names.txt";
	std::string line;

	std::ifstream txtfile(filename.c_str());
	if (txtfile.is_open())
	{
		while (getline(txtfile, arraySongNames[i]))
			i++;

		txtfile.close();
	}
	else std::cout << "Unable to open file: " << filename << std::endl;

	return i;
}

/*
void Music_Player::play_music()
{
	/*
	DoubleNode<std::string> * item;
	int counter = 0;

	static sf::Music music;
	music.stop();
	item = this->head;
		//duration = music.getDuration();
		//std::cout << "Music Duration: " << duration.asSeconds() << std::endl;
		//sf::Time elapsed = sf::milliseconds(0);

	while (item != nullptr)
	{
		if (!music.openFromFile(item->getData())){}
		std::cout << "Playing " << item->getData() << std::endl;
		music.play();
		item = static_cast<DoubleNode<std::string>*>(item->getNext());
	}
	
}

void Music_Player::pause_music(std::string file_name)
{
	static sf::Music music;
	//static sf::Clock clock;
	//static sf::Time duration;

	music.stop();
	if (!music.openFromFile(file_name))

		//duration = music.getDuration();
		//std::cout << "Music Duration: " << duration.asSeconds() << std::endl;
		//sf::Time elapsed = sf::milliseconds(0);
		std::cout << "Playing music: " << file_name << std::endl;
	music.play();
}

void Music_Player::next_song(std::string file_name)
{
	static sf::Music music;
	//static sf::Clock clock;
	//static sf::Time duration;

	music.stop();
	if (!music.openFromFile(file_name))

		//duration = music.getDuration();
		//std::cout << "Music Duration: " << duration.asSeconds() << std::endl;
		//sf::Time elapsed = sf::milliseconds(0);
		std::cout << "Playing music: " << file_name << std::endl;
	music.play();
}
*/


/*
int Music_Player::getNames(std::string arrayNames[])
{
int i = 0;
std::string filename = "ASOIF_names.txt";
std::string line;

std::ifstream txtfile(filename.c_str());
if (txtfile.is_open())
{
while (getline(txtfile, arrayNames[i]))
i++;

txtfile.close();
}
else std::cout << "Unable to open file: " << filename << std::endl;

return i;
}
*/

/*string songs[50];
Music_Player gato;
for (int i = 0; i < gato.getNames(songs); i++)
{
cout << i << " = " << names[i] << endl;
}*/