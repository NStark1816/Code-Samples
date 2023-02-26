
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    string fileName;
    string line;
    ifstream userFile;

    //prompts the user for a file name
    cout << "Enter file name: ";
    cin >> fileName;

    //attempts to open the file
    userFile.open(fileName);

    //If the file opened successfully, the first ten lines of
    // the file are displayed. Otherwise, and error message is displayed,
    // and the program ends
    if(userFile.is_open()){

        for(int i = 0; i < 10 && userFile.eof() == false; i++){

            getline(userFile, line);
            cout << line << endl;
            if(userFile.eof() == true)
                cout << endl << "End of file reached." << endl;

        }

    } else {

        cout << "File could not be accessed";
        return 0;

    }

    //closing the file
    userFile.close();

    return 0;

}
