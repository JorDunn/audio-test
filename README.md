[![Build Status](https://travis-ci.org/JorDunn/Audio-Test.png?branch=master)](https://travis-ci.org/JorDunn/Audio-Test)

## Usage
Its pretty simple to use:

	./audio_test <file>

Requires [SFML 2.1](http://www.sfml-dev.org).

## Building
To build:

	./configure
	make
	???
	profit!

This little program should compile just fine on OSX and Linux with SFML 2.1+. Enjoy!

## Notes
* This will not compile on _ANY_ system with a SFML below 2.1!
* [SFML supported audio formats](https://github.com/LaurentGomila/SFML/wiki/FAQ#wiki-audio-formats)
* Don't panic if you see it say "Could not reach update server..."! The version checking code does not currently work completely. I'll be finishing it up over the course of winter break.
