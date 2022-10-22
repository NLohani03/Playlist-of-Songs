#include <iostream> 

class Song{
    private:
       std::string name; 
       std::string artist; 

    public:
        //default constructors
        Song(); 
        Song(std::string nm, std::string a); 
        
        //setter functions
        std::string getName() const; 
        std::string getArtist() const; 

        //getter functions
        void setName(std::string nm); 
        void setArtist(std::string a); 

        ~Song();
};
