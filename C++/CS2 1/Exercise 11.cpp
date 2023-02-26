
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

//function prototypes
void displayMissedQuestions(char[], char[], int);
int totalMissed(char[], char[], int);

int main(){

    //define the variables
    const int NUM_QUESTIONS = 20;
    int totalQuestionsMissed = 0;
    double score = 0;

    //define arrays
    char teacherAnswers[NUM_QUESTIONS] = {0};
    char studentAnswers[NUM_QUESTIONS] = {0};

    // define and open first file
    ifstream correctAnswers;
    correctAnswers.open("CorrectAnswers.txt");

    //populate teacherAnswers[] from CorrectAnswers.txt
    if(correctAnswers.is_open()){

        for(int i = 0; i < 20; i++){

            correctAnswers >> teacherAnswers[i];

        }

    } else {

        cout << "Unable to open CorrectAnswers.txt" << endl;
        return 0;

    }

    //close the first file
    correctAnswers.close();

    //define and open second file
    ifstream testingAnswers;
    testingAnswers.open("StudentAnswers.txt");

    //populate studentAnswers[] from StudentAnswers.txt
    if(testingAnswers.is_open()){

        for(int i = 0; i < 20; i++){

            testingAnswers >> studentAnswers[i];

        }

    } else {

        cout << "Unable to open StudentAnswers.txt" << endl;
        return 0;

    }

    //close second file
    testingAnswers.close();

    //function calls
    displayMissedQuestions(teacherAnswers, studentAnswers, NUM_QUESTIONS);
    totalQuestionsMissed = totalMissed(teacherAnswers, studentAnswers, NUM_QUESTIONS);

    //display total missed questions and set precision for next operation
    cout << "Total missed questions: " << totalQuestionsMissed << endl << endl;
    cout << fixed << setprecision(0);

    //calculate and display percent score
    score = ((20.0 - totalQuestionsMissed) / 20.0) * 100;
    cout <<"Your score is: " << score << endl;

    if(score >= 70){

        cout << "You passed!" << endl;

    } else {

        cout << "You failed." << endl;

    }

    return 0;
}


//function used to find and display missed questions
void displayMissedQuestions(char correct[], char student[], int questions){

    for(int i = 0; i < questions; i++){

        if(student[i] != correct[i]){

            cout << "Question " << i << " missed." << endl;
            cout << "Your answer: " << student[i] << endl;
            cout << "Correct answer: " << correct[i] << endl << endl;

        }

    }

}


//function used to get total questions missed
int totalMissed(char correct[], char student[], int questions){

    int total = 0;

    for(int i = 0; i < questions; i++){

        if(student[i] != correct[i]){

            total++;

        }

    }

    return total;
}


