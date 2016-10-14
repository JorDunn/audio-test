/*
    program: audio_test
    author: Jordan Dunn <jordan@nodetwo.net>
    copyright (c) 2012-2015
*/

#include <iostream>
#include <string.h>

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#define VERSION "0.0.3alpha"

void argParser(int argc, char **argv);
void playFile(std::string music_file);
void help();

int main(int argc, char *argv[]) {
    argParser(argc, argv);

    return 0;
}

void argParser(int argc, char *argv[]) {
    if(!strcmp(argv[1], "-h")) {
        help();
        return;
    }
    else if(!strcmp(argv[1], "-f")) {
        playFile(argv[2]);
    }
    else {
        help();
        return;
    }
}

void playFile(std::string music_file) {
    sf::Music music;
    if (!music.openFromFile(music_file)) {
        return;
    }
    music.play();

    std::cout << "Now playing " << music_file << std::endl;
    std::cout << "Hit [ENTER] to exit program" << std::endl;
    std::cin.ignore();
}

void help() {
    std::cout << "Audio Test " << VERSION << std::endl;
    std::cout << "Usage is: audio_test -f <file>" << std::endl;
}