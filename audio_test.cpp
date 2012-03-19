#include <iostream>
#include <string>
#include <fstream>

// Load SFML Audio header
#include <SFML/Audio.hpp>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Audio Test 1.0" << std::endl;
		std::cout << "Usage is: audio_test <file>" << std::endl;
	} else {
		std::string song = argv[1];

		sf::Music Music;
		if (!Music.OpenFromFile(song))
		{
			return (-1);
		}
		Music.Play();

		std::cout << "Now playing " << song << std::endl;
		std::cout << "Hit [ENTER] to exit program" << std::endl;
		std::cin.ignore().get();
	}

	return (0);
}
