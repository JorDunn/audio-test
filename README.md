[![Build Status](https://travis-ci.org/JorDunn/Audio-Test.png?branch=master)](https://travis-ci.org/JorDunn/Audio-Test)

## Usage
Its pretty simple to use:

	./audio_test <file>

Requires [SFML 2.1](http://www.sfml-dev.org).

## Compiling
To compile, just type:

	g++ -o audio_test audio_test.cpp -lsfml-system -lsfml-audio -lsfml-network

or if using OSX:

	g++ -o audio_test audio_test.cpp -framework SFML -lsfml-audio -lsfml-network -lsfml-system

This little program should compile just fine on OSX and Linux. Enjoy!

## Notes
* [SFML supported audio formats](https://github.com/LaurentGomila/SFML/wiki/FAQ#wiki-audio-formats)
* Don't panic if you see it say "Could not reach update server..."! The version checking code does not currently work completely. I'll be finishing it up over the course of winter break.
