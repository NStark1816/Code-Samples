
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//function prototypes
void getArrayElements(string *, int *, int);
void arraySortAscending(string *, int*, int);
double averageScore(int*, int);

//main function
int main(){

    //variable definitions
    int length;
    int *scores = nullptr;
    string *names = nullptr;

    //used to enter the desired array length
    cout << "How many scores will be entered?" << endl;
    cin >> length;

    //dynamically allocates the arrays
    scores = new int[length];
    names = new string[length];

    //populates the arrays with user input
    getArrayElements(names, scores, length);

    //sorts the arrays
    arraySortAscending(names, scores, length);

    cout << endl <<"The scores, sorted in ascending order: " << endl;

    //displays the contents of the arrays after sorting
    for(int i = 0; i < length; i++){

        cout << *(names + i) << " "<< *(scores + i) << endl;

    }

    //displays the average of the scores
    cout << fixed << setprecision(0);
    cout << endl << "The average score is: " << averageScore(scores, length) << endl;

    delete scores;
    scores = nullptr;

    //attempted to delete dynamic string array, could not
    //manage to make it compile correctly. Program runs
    //fine without it, so process is omitted and further
    //research will be done at a later date

    //delete names;
    //names = nullptr;

    return 0;
}

//This function dynamically allocates an array based on user entered length.
//It then asks the user to enter the scores for the array.
//This is an edited version of the function from exercise 9 - 1
void getArrayElements(string *nameArray, int *scoreArray, int length){

    for(int i = 0; i < length; i++){

        cout << "Enter student " << i + 1 <<"'s name: " << endl;
        cin >> *(nameArray + i);
        cout << "Enter test score: " << endl;
        cin >> *(scoreArray + i);

    }
}

// This function takes the scores array as a pointer
//and sorts it in ascending order.
void arraySortAscending(string *nameArray, int *scoreArray, int length){

    //declaring variables
    int temp = 0;
    string tempString;
    int i = 0;
    int x = 0;

    //This nested loop continues swapping values until they are sorted
    for(i = 0; i < length; i++){

        for(x = 0; x < length; x++) {

            if(*(scoreArray + x) > *(scoreArray + i)){

                temp = *(scoreArray + i);
                *(scoreArray + i) = *(scoreArray + x);
                *(scoreArray + x) = temp;

                tempString = *(nameArray + i);
                *(nameArray + i) = *(nameArray + x);
                *(nameArray + x) = tempString;

            }

        }

    }

}

//This array gets the average of the array and returns it as an a double
double averageScore(int* scoreArray, int length){

    int total = 0;
    double average = 0;

    //Gets the total of the elements in the array
    for(int i = 0; i < length; i++){

        total += *(scoreArray + i);

    }

    //calculates average
    average = (1.0 * total) / length;

    return average;

}
