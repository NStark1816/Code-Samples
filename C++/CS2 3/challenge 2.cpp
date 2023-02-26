
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

    int i = 0;
    int x = 0;
    string unpause;
    string fileName;
    string line;
    ifstream userFile;

    //prompts the user for a file name
    cout << "Enter file name: ";
    cin >> fileName;

    //attempts to open the file
    userFile.open(fileName);

    //If the file opened successfully, the contents of the file are displayed
    // twenty-four lines at a time. Otherwise, an error message is displayed
    // and the program is ended
    if(userFile.is_open()){

        while(userFile.eof() == false){

            for(i = 0; i < 24 && userFile.eof() == false; i++){

                getline(userFile, line);
                cout << line << endl;
                if(userFile.eof() == true){
                    cout << endl << "End of file reached." << endl;
                    return 0;
                }
            }

            cin.ignore();

            do{

                cout << endl << "Press a key to continue: ";

            }while (cin.get() != '\n');

        }

    } else {

        cout << "File could not be accessed";
        return 0;

    }

    //closing the file
    userFile.close();

    return 0;

}
