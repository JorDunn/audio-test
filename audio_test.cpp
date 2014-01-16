/*
	Audio Test
	Jordan Dunn (c) 2012-2014
	dunnj@my.normandale.edu
*/

#include <iostream>
#include <string>

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;

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

	if ((argc == 1) || (strcmp(argv[1], "-h") == 0)) {
		cout << "Audio Test 1.0.1" << endl;
		cout << "Usage is: audio_test <file>" << endl;
	}
	else if (strcmp(argv[1], "-f") == 0) {
		string song_file = argv[2];

		sf::Music music;
		if (!music.openFromFile(song_file)) {
			return -1;
		}
		music.play();

		cout << "Now playing " << song_file << endl;
		cout << "Hit [ENTER] to exit program" << endl;
		cin.ignore();
	}
	else if (strcmp(argv[1], "-u") == 0) {
		updateCheck();
	}
	return 0;
}
