#include <iostream> 
#include "Playlist.h"

//default constructor
Playlist::Playlist() { }

//copy constructor
Playlist::Playlist(int size_p) { 
    size = size_p; 
    num_of_songs = 0;
    playlist_array = new Song[size]; 
    std::cout << "success" << std::endl;
}

//inserts a song at the end of the list
void Playlist::add_song(std::string name, std::string artist) {

    //check if playlist is full
    if (num_of_songs == size) { 
        std::cout << "can not insert " << name << ";" << artist << std::endl;

    //check for restricted entry
    } else if ((name == "Muskrat Love" && artist == "Captain and Tennille") || (name == "My Heart Will Go On")) { 
        std::cout << "can not insert " << name << ";" << artist << std::endl;

    //check if the song is not already in the list
    } else if (song_in_playlist(name, artist)) { 
        std::cout << "can not insert " << name << ";" << artist << std::endl;

    } else {
        //set name and artist and increase total number of songs
        playlist_array[num_of_songs].setName(name); 
        playlist_array[num_of_songs].setArtist(artist); 
        num_of_songs++; //increment song total
        std::cout << "success" << std::endl;
    }
}


void Playlist::delete_song(int pos){

    //erases the song at a position by moving songs after the position up by 1
    if(num_of_songs > pos) {
        for (int i = pos; i < num_of_songs; i++) { 
            playlist_array[i] = playlist_array[i+1]; 
        }
        num_of_songs--; //decrement song total
        std::cout << "success" << std::endl;

    } else { 
        std::cout << "can not erase " << pos << std::endl;
    }
}

//play song at a position
void Playlist::play_song(int pos) { 

    //if available, retrieve the song at the position and play it
    if(num_of_songs > pos ) { 
        std::cout << "played " << pos << " "; 
        std::cout << playlist_array[pos].getName() << ";" << playlist_array[pos].getArtist()<< std::endl;

    } else { 
        std::cout << "can not play " << pos << std::endl;
    } 

}

//check if the song is already in list
bool Playlist::song_in_playlist(std::string name, std::string artist) const{ 
    bool in_playlist = false; 
    
    for (int i = 0; i < size; i++) { 
        if ((playlist_array[i].getName()).compare(name) == 0 && (playlist_array[i].getArtist().compare(artist) == 0)) { 
            in_playlist = true; 
        }
    }
    return in_playlist;
}

//destructor
Playlist::~Playlist() { 
    delete [] playlist_array; 
}