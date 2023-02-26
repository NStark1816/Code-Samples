
#include <iostream>
#include <string>

using namespace std;

int wordCounter(string);

int main(){

    //declares and initializes the string
    string userString= "What's up dude";
    userString.push_back('\n');

    cout << "The string is: ";

    //prints the string using array method
    for(int i = 0; userString[i] != '\n'; i++){

        cout << userString[i];

    }

    //calls the function and displays the string's word count
    cout << endl << "There are " << wordCounter(userString) << " words in the string." << endl;

    return 0;
}

//This function returns the word count of a string that is passed to it.
int wordCounter(string inputString){

    int numWords = 1;

    //Counts the number of words in the string
    for(int x = 0; inputString[x] != '\n'; x++){

            if(inputString[x] == ' ' && inputString[x - 1] != ' '){

            numWords++;

        }

    }

    return numWords;

}
