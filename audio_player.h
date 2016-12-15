#ifndef _H_AUDIO_PLAYER_
#define _H_AUDIO_PLAYER_

class AudioPlayer {
    public:
        std::string file;

        AudioPlayer(std::string file);

        void play();

        void displaySongInfo(std::string song);
}

#endif