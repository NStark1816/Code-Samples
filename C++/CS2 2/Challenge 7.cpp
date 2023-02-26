
#include <iostream>
#include <string>

using namespace std;

int main(){

    //declares each of the needed strings
    string firstName;
    string middleName;
    string lastName;
    string fullName;

    //requests user input for the first 3 strings
    cout << "Enter your first name: " << endl;
    cin >> firstName;

    cout << "Enter your middle name: " << endl;
    cin >> middleName;

    cout << "Enter your last name: " << endl;
    cin >> lastName;

    //Concatenates the 3 string with spaces and a comma and then
    // displays the resultant string
    fullName = lastName + ", " + firstName + " " + middleName;

    cout << endl << "Your full name in formal notation is: " << fullName << endl;

    return 0;

}
