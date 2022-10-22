#include <iostream>
#include "Song.h"

class Playlist {

    private:  //data members
       
        int size; 
        int num_of_songs; 
        Song *playlist_array;

        //helper function to check if song is already in the list
        bool song_in_playlist(std::string name, std::string artist) const;  
            
    public: //member functions
     
        //constructors
        Playlist();
        Playlist(int size_p); 

        //destructor
        ~Playlist();

        //insert song into the playlist
        void add_song(std::string name, std::string artist); 

        //play song at a position
        void play_song(int pos); 

        //delete song at a position
        void delete_song(int pos);   
};