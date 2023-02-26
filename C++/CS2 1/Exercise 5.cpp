

#include <iostream>

using namespace std;

int main(){

    // declaring variables
    const int ROWS = 3;
    const int COLUMNS = 5;

    int i = 0;
    int x = 0;
    int mostDay = 0;
    int leastDay = 0;
    int elements = ROWS * COLUMNS;
    double average = 0.0;
    double total = 0.0;
    double foodAmount[ROWS][COLUMNS] = {0.0};

    // obtains the values for the array
    for(i = 0; i < ROWS; i++){

        for(x = 0; x < COLUMNS; x++){

            cout << "Enter the amount of food monkey " << i + 1 << " ate on day " << x + 1 << ": " << endl;
            cin >> foodAmount[i][x];

            while(foodAmount[i][x] < 0){

                cout << "Invalid amount, try again: " << endl;
                cin >> foodAmount[i][x];

            }
        }
    }

    // sums the array elements together to get a total
    for(i = 0; i < ROWS; i++){

        for(x = 0; x < COLUMNS; x++){

            total += foodAmount[i][x];

        }
    }

    // gets the average of the array and displays it
    average = total / elements;
    cout << "The average amount of food eaten by the monkeys is " << average << " pounds." << endl;

    // displays the least amount of food eaten by each monkey
    for(i = 0; i < ROWS; i++){

        leastDay = 0;

        for(x = 0; x < COLUMNS; x++){

            if (foodAmount[i][x] < foodAmount[i][leastDay])
                leastDay = x;

        }

        cout << "Least amount eaten by monkey " << i + 1 << ": " << foodAmount[i][leastDay] << endl;

    }

    // displays the most amount of food eaten by each monkey
    for(i = 0; i < ROWS; i++){

        mostDay = 0;

        for(x = 0; x < COLUMNS; x++){

            if (foodAmount[i][x] > foodAmount[i][mostDay])
                mostDay = x;

        }

        cout << "Most amount eaten by monkey " << i + 1 << ": " << foodAmount[i][mostDay] << endl;

    }

    return 0;
}
