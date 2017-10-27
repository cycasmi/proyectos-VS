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
	void play_music(std::string file_name);
	void pause_music(std::string file_name);
	void next_song(std::string file_name);
	
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


void Music_Player::play_music(std::string file_name)
{
	static sf::Music music;

	if (!music.openFromFile(file_name)){}
	std::cout << "Playing " << file_name << std::endl;
	music.play();
}

void Music_Player::pause_music(std::string file_name)
{
	static sf::Music music;

	if (!music.openFromFile(file_name)){}
	std::cout << "Pause " << file_name << std::endl;
	music.pause();
}

void Music_Player::next_song(std::string file_name)
{
	
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