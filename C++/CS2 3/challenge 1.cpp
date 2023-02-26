
#include <iostream>
#include <string>

using namespace std;

//This structure holds data about movies
struct MovieData{

    string title;
    string director;
    int yearReleased;
    int runningTime;

};

void displayMovieData(MovieData);

int main(){

    MovieData theShining;
    MovieData texasChainsaw;

    //assigns values to the first MovieData object
    theShining.title = "The Shining";
    theShining.director = "Stanley Kubrick";
    theShining.yearReleased = 1980;
    theShining.runningTime = 146;

    //assigns values to the second MovieData object
    texasChainsaw.title = "The Texas Chainsaw Massacre";
    texasChainsaw.director = "Tobe Hooper";
    texasChainsaw.yearReleased = 1974;
    texasChainsaw.runningTime = 83;

    displayMovieData(theShining);
    displayMovieData(texasChainsaw);

    return 0;
}

//This function prints the data stored within a MovieData
//object that is passed to it (with some formatting)
void displayMovieData(MovieData movie){

    cout << "-----------------------------------------" << endl << endl;
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year released: " << movie.yearReleased << endl;
    cout << "Run time: " << movie.runningTime << " minutes" << endl << endl;
    cout << "-----------------------------------------" << endl << endl;

}
