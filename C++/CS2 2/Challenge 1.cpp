

#include <iostream>
#include <string>

using namespace std;

int lengthOfString(string);

int main(){

    //variable declaration
    string userString;
    int stringLength;

    //gets string from user input and passes it to a function that
    //returns the length of the string
    cout << "Enter a String: " << endl;
    getline(cin, userString);
    stringLength = lengthOfString(userString);

    //displays the length of the string
    cout << "String length is: " << stringLength << endl;

    return 0;

}

//This function accepts a string as a parameter and returns
//the length of the string as an int
int lengthOfString(string inputString){

    int numChars = 0;
    numChars = inputString.length();
    return numChars;

}
