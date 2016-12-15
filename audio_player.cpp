
#include <iostream>
#include <string>
#include <exception>

AudioPlayer::AudioPlayer(std::string file) {
    this->file = file;
}

void AudioPlayer::play() {
    sf::Music player;
    try {
        player.openFromFile(this->file);
        displaySongInfo(this->file);
    }
    catch (std::exception e) {
        std::cout << "ERROR: " << e.what() << std::endl;
        exit(1);
    }
}

void AudioPlayer::displaySongInfo(std::string song) {
    // I could just cout this in the other function, but I want to expand on this later
    // with actual song info pulled from the metadata.
    std::cout << "Now playing " << song << std::endl;
}