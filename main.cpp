/*
    program: audio_test
    author: Jordan Dunn <jordan@nodetwo.net>
    copyright (c) 2012-2015
*/

#include <iostream>
#include <string.h>

#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

#include "audio_player.h"

#define VERSION "0.0.4alpha"

void argParser(int argc, char **argv);
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
        AudioPlayer ap(argv[2]);
        ap.play();
    }
    else {
        help();
        return;
    }
}

void help() {
    std::cout << "Audio Test " << VERSION << std::endl;
    std::cout << "Usage is: audio_test -f <file>" << std::endl;
}