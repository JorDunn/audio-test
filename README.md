[![Build Status](https://travis-ci.org/JorDunn/audio-test.svg?branch=master)](https://travis-ci.org/JorDunn/audio-test)

## Usage
Its pretty simple to use:

	./audio_test -f <file>

or, to see the help

	./audio_test -h

Requires [SFML 2.1](http://www.sfml-dev.org).

## Building the C++ version
To build:

	./configure
	make
	???
	profit!

This little program should compile just fine on OSX and Linux with SFML 2.1+ (Windows is untested). Enjoy!

## Notes
* This will not compile on _ANY_ system with a SFML/CSFML below 2.1!
* [SFML supported audio formats](https://github.com/LaurentGomila/SFML/wiki/FAQ#wiki-audio-formats)
