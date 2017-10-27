#pragma once
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>
#include <string>


class Music_Player : public DoubleLinkedList<std::string>
{
private:

public:
	Music_Player() {}

	int getNames(std::string arraySongNames[]);
	void play_pause_music(std::string file_name, char op);
	void pause_music(std::string file_name);
	void previous_song(DoubleLinkedList playlist);
	void next_song(DoubleLinkedList playlist);
	
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


void Music_Player::play_pause_music(std::string file_name, char op)
{
	static sf::Music music;

	if (op == 'a')
	{
		if (!music.openFromFile(file_name)){}
		std::cout << "Playing " << file_name << std::endl;
		music.play();
	}

	if (op == 'b')
		music.pause();
}

void Music_Player::previous_song(DoubleLinkedList playlist)
{
	DoubleNode<std::string> *item;
	item = playlist.getCurrent()->getPrevious();

	if (item != nullptr)
	{
		Music_Player list;
		list.play_pause_music(item->getData(), 'a');
	}

	else
	{
		item = playlist.getTail();
		Music_Player list;
		list.play_pause_music(item->getData(), 'a');
	}

}

void Music_Player::next_song(DoubleLinkedList playlist)
{
	DoubleNode<std::string> *item;
	item = playlist.getCurrent()->getNext();

	if (item != nullptr)
	{
		Music_Player list;
		list.play_pause_music(item->getData(), 'a');
	}

	else
	{
		item = playlist.getHead();
		Music_Player list;
		list.play_pause_music(item->getData(), 'a');
	}

}



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


/*
void Music_Player::play_pause_music(std::string file_name, char op)
{
static sf::Music music;

if (op == 'a')
{
if (!music.openFromFile(file_name)){}
std::cout << "Playing " << file_name << std::endl;
music.play();
}

if (op == 'b')
music.pause();
}
*/