
#include <iostream>
#include <string>

using namespace std;

//This structure holds data company divisions
struct CompanyDivision{

    string name;
    double q1sales;
    double q2sales;
    double q3sales;
    double q4sales;
    double totalSales;
    double averageSales;

};

void divisionDataInput(CompanyDivision&);
void salesCalculator(CompanyDivision&);

int main(){

    //declares each structure variable needed
    CompanyDivision east;
    CompanyDivision west;
    CompanyDivision north;
    CompanyDivision south;

    //initializes the name variables within each structure variable
    east.name = "East";
    west.name = "West";
    north.name = "North";
    south.name = "South";

    //gets data input for the east division and
    //calculates total and average sales.
    cout << endl << "--------------------------------" << endl;
    cout << "Enter data for the East division" << endl;
    cout << "--------------------------------" << endl << endl;
    divisionDataInput(east);
    salesCalculator(east);

    //gets data input for the west division and
    //calculates total and average sales.
    cout << endl << "--------------------------------" << endl;
    cout << "Enter data for the West division" << endl;
    cout << "--------------------------------" << endl << endl;
    divisionDataInput(west);
    salesCalculator(west);

    //gets data input for the north division and
    //calculates total and average sales.
    cout << endl << "--------------------------------" << endl;
    cout << "Enter data for the North division" << endl;
    cout << "--------------------------------" << endl << endl;
    divisionDataInput(north);
    salesCalculator(north);

    //gets data input for the south division and
    //calculates total and average sales.
    cout << endl << "--------------------------------" << endl;
    cout << "Enter data for the South division" << endl;
    cout << "--------------------------------" << endl << endl;
    divisionDataInput(south);
    salesCalculator(south);

    //Displays the total and average of each division
    cout << endl << "--------------------------------" << endl << endl;
    cout << "East total sales: " << east.totalSales << endl;
    cout << "East average sales: " << east.averageSales << endl;
    cout << "West total sales: " << west.totalSales << endl;
    cout << "West average sales: " << west.averageSales << endl;
    cout << "North total sales: " << north.totalSales << endl;
    cout << "North average sales: " << north.averageSales << endl;
    cout << "South total sales: " << south.totalSales << endl;
    cout << "South average sales: " << south.averageSales << endl;

    return 0;
}

//This function gets input from the user to
//populate CompanyDivision variables
void divisionDataInput(CompanyDivision &division){

    cout << "Enter quarter 1 sales: " << endl;
    cin >> division.q1sales;
    while(division.q1sales < 0){

        cout << "That is not valid input. Please try again: " << endl;
        cin >> division.q1sales;

    }

    cout << "Enter quarter 2 sales: " << endl;
    cin >> division.q2sales;
    while(division.q2sales < 0){

        cout << "That is not valid input. Please try again: " << endl;
        cin >> division.q2sales;

    }

    cout << "Enter quarter 3 sales: " << endl;
    cin >> division.q3sales;
    while(division.q3sales < 0){

        cout << "That is not valid input. Please try again: " << endl;
        cin >> division.q3sales;

    }

    cout << "Enter quarter 4 sales: " << endl;
    cin >> division.q4sales;
    while(division.q4sales < 0){

        cout << "That is not valid input. Please try again: " << endl;
        cin >> division.q4sales;

    }

}

void salesCalculator(CompanyDivision &division){

    division.totalSales = division.q1sales + division.q2sales
                          + division.q3sales + division.q4sales;

    division.averageSales = division.totalSales / 4;

}
