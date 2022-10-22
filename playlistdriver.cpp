#include <iostream> 
#include "Playlist.h"

//function declarations
void program();

//function declarations
int main() { 
    program();
    return 0; 
}

void program() { 
    std::string input = "a";
    std::string command; 
    int parameter;
    int pos;

    while(getline(std::cin, input)) { 
        command = input.at(0); //extract command

        Playlist *new_playlist;  

        if(command == "m") { 
            parameter = stoi(input.substr(2)); // extract the parameter 
            if(parameter > 0) { 
                new_playlist = new Playlist (parameter); //create a dynamically allocated array
            }
        } else if (command == "i") { 
            std::string name, artist;
            std::string delimiter = ";";
            name = input.substr(2, input.find(delimiter) - 2);
            artist = input.substr(input.find(delimiter) + 1);  

            new_playlist->add_song(name, artist); 
            
        } else if (command == "p")   { 
            pos = stoi(input.substr(2)); 
            new_playlist->play_song(pos); 

        } else if (command == "e") { 
            pos = stoi(input.substr(2));
            new_playlist->delete_song(pos); 

        } else if (input.empty()) { 
            break; //once user stops giving commands
        }
    }
}
