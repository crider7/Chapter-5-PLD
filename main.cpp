#include <iostream>
using namespace std;

// Pseudocode PLD Chapter 5 #10a, pg. 223
//
// Start
// Declarations
// number currentTuition
// number futureTuition
// number interestRate
// number numYears
// number year
//
// output "Please enter current tuition: "
// input currentTuition
// output "Please enter interest rate (e.g. 9.0 for 9 percent): "
// input interestRate
// output "Please number of years for tuition: "
// input numYears
// output ?Tuition at year 1 is ?, currentTuition
//
// futureTuition = currentTuition
// for year = 2 to numYears
// futureTuition = futureTuition * (1 + interestRate/100)
// output ?Tuition at year ?, year ,?is ?, futureTuition
// endfor
// Stop

int main() {
    int currentTuition;
    int futureTuition;
    double interestRate;
    int numYears;
    int year = 1;

    cout << "Please enter current tuition: " << endl;
    cin >> currentTuition;

    cout << "Please enter interest rate (e.g. 9.0 for 9 percent): " << endl;
    cin >> interestRate;

    cout << "Please enter number of years for tuition: " << endl;
    cin >> numYears;

    cout << "Tuition at year " << year << " is " << currentTuition << endl;

    futureTuition = currentTuition;
    for (year = 2; year < 11; year++){
        futureTuition = futureTuition * (1 + interestRate / 100);
        cout << "Tuition at year " << year << " is " << futureTuition << endl;
    }

    return 0;
}