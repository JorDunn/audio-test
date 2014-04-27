/*
	Audio Test
	Jordan Dunn (c) 2012-2014
	jordan@nodetwo.net
*/

#include <iostream>
#include <string.h>

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;

void argParser(int argc, char *argv);
void playFile(string music_file);
void updateCheck();

void argParser(int argc, char *argv[]) {
	if(strcmp(argv[1], "-h") == 0) {
		cout << "Audio Test 0.0.1alpha" << endl;
		cout << "Usage is: audio_test <file>" << endl;
		return;
	}
	else if(strcmp(argv[1], "-u") == 0) {
		updateCheck();
	}
	else if(strcmp(argv[1], "-f") == 0) {
		playFile(argv[2]);
	}
	else {
		cout << "Audio Test 0.0.1alpha" << endl;
		cout << "Usage is: audio_test <file>" << endl;
		return;
	}
}

void playFile(string music_file) {
	sf::Music music;
	if (!music.openFromFile(music_file)) {
		return;
	}
	music.play();

	cout << "Now playing " << music_file << endl;
	cout << "Hit [ENTER] to exit program" << endl;
	cin.ignore();
}

void updateCheck() {
	sf::Http http;
	http.setHost("http://nodetwo.com/");

	sf::Http::Request request;
	request.setMethod(sf::Http::Request::Get);
	request.setUri("version/audio_test.json");
	
	sf::Http::Response response = http.sendRequest(request);

	if(response.getStatus() != 200) {
		cout << "Could not reach update server..." << endl;
	}
}

int main(int argc, char *argv[]) {

	argParser(argc, argv);

	return 0;
}
