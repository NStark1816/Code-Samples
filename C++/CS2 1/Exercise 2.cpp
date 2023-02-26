
#include <iostream>
#include <iomanip>

using namespace std;

//function prototypes
int* allocateArray(int);
void arraySortAscending(int*, int);
double averageScore(int*, int);

//main function
int main(){

    //variable definitions
    int length;
    int *scores = nullptr;

    //used to enter the desired array length
    cout << "How many scores will be entered?" << endl;
    cin >> length;

    /* gets the new dynamically allocated array
    from the allocateArray function and assigns
    it's address to the scores pointer */
    scores = allocateArray(length);
    arraySortAscending(scores, length);

    cout << endl <<"The scores, sorted in ascending order: " << endl;

    //displays the contents of the array after sorting
    for(int i = 0; i < length; i++){

        cout << *(scores + i) << " ";

    }

    //displays the average of the scores
    cout << fixed << setprecision(0);
    cout << endl << endl << "The average score is: " << averageScore(scores, length) << endl;

    delete scores;
    scores = 0;

    return 0;
}

//This function dynamically allocates an array based on user entered length.
//It then asks the user to enter the scores for the array.
//This is an edited version of the function from exercise 9 - 1
int* allocateArray(int length){

    int* arrayPtr = nullptr;

    arrayPtr = new int[length];

    for(int i = 0; i < length; i++){

        cout << "Enter score " << i + 1 << ":" << endl;
        cin >> *(arrayPtr + i);

    }

    return arrayPtr;
}

// This function takes the scores array as a pointer
//and sorts it in ascending order.
void arraySortAscending(int *scoreArray, int length){

    //declaring variables
    int temp = 0;
    int i = 0;
    int x = 0;

    //This nested loop continues swapping values until they are sorted
    for(i = 0; i < length; i++){

        for(x = 0; x < length; x++) {

            if(*(scoreArray + x) > *(scoreArray + i)){

                temp = *(scoreArray + i);
                *(scoreArray + i) = *(scoreArray + x);
                *(scoreArray + x) = temp;

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
