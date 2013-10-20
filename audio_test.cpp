#include <iostream>
#include <string>
#include <fstream>

#include <SFML/Audio.hpp>

using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Audio Test 1.0" << endl;
		cout << "Usage is: audio_test <file>" << endl;
	} else {
		string song = argv[1];

		sf::Music Music;
		if (!Music.OpenFromFile(song)) {
			return EXIT_FAILURE;
		}
		Music.Play();

		cout << "Now playing " << song << endl;
		cout << "Hit [ENTER] to exit program" << endl;
		cin.ignore().get();
	}
	return (0);
}