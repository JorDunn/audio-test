/*
	Audio Test
	Jordan Dunn (c) 2012-2013
	dunnj@my.normandale.edu
*/

#include <iostream>
#include <string>

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

using namespace std;

void versionCheck() {
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

	versionCheck();

	if (argc != 2) {
		cout << "Audio Test 1.0.1" << endl;
		cout << "Usage is: audio_test <file>" << endl;
	}
	else {
		string song = argv[1];

		sf::Music music;
		if (!music.openFromFile(song)) {
			return -1;
		}
		music.play();

		cout << "Now playing " << song << endl;
		cout << "Hit [ENTER] to exit program" << endl;
		cin.ignore().get();
	}
	return 0;
}
