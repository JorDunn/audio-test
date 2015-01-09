/*
	program: caudio_test
	author: Jordan Dunn <jordan@nodetwo.net>
	copyright (c) 2014-2015
*/

#include <stdio.h>
#include <string.h>

#include <SFML/System.h>
#include <SFML/Audio.h>

#define VERSION "0.0.2alpha"
#define MAX_LENGTH 100

void argParser(int, char **);
void playFile(char a[]);
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

void playFile(char music_file[]) {
	sfMusic_play(sfMusic_createFromFile(music_file));

	printf("Now playing %s\n", music_file);
	printf("Hit [ENTER] to exit program\n");
	getchar();
}

void help() {
		printf("Audio Test %s\n", VERSION);
		printf("Usage is: caudio_test -f <file>\n");
}