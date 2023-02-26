
#include <iostream>

using namespace std;

//function prototypes
int* allocateArray(int);

//main function
int main(){

    //variable definitions
    int length;
    int *newArray = nullptr;

    //used to enter the desired array length
    cout << "How many elements should be allocated?" << endl;
    cin >> length;

    /* gets the new dynamically allocated array
    from the allocateArray function and assigns
    it's address to the newArray pointer */
    newArray = allocateArray(length);

    //displays the contents of the array for testing purposes
    for(int i = 0; i < length; i++){

        cout << *(newArray + i) << " ";

    }

    delete [] newArray;
    newArray = 0;

    return 0;
}

//This function dynamically allocates an array based on user entered length.
//This function also populates the array with 0s for testing purposes.
int* allocateArray(int length){

    int* arrayPtr = nullptr;

    arrayPtr = new int[length];

    for(int i = 0; i < length; i++){

        *(arrayPtr + i) = 0;

    }

    return arrayPtr;
}
