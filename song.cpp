#include <iostream>
#include "Song.h"

//default constructor
Song::Song() { } 

//copy constructor to set variables
Song::Song(std::string nm, std::string a) { 
    setName(nm); 
    setArtist(a);
}

//getter for name
std::string Song::getName() const{ 
    return name; 
}

//getter for artist
std::string Song::getArtist() const{ 
    return artist;
}

//setter for name
void Song::setName(std::string nm) { 
    name = nm; 
}

//setter for artist
void Song:: setArtist(std::string a) { 
    artist = a;
}

Song::~Song() { }
