// Including required headerfiles
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
// main function
int main() {
    // Declaring the required variables
    string firstName, lastName;
    double salary, payIncrease;
    // File objects to read the file and write to file
    ifstream infile("SalaryData.txt");
    ofstream outfile("SalaryOutput.data");
    // using while loop to read each data from the file
    while (infile >> lastName >> firstName >> salary >> payIncrease) {
        // Calculating the updatedSalary
        double updatedSalary = salary + (salary * (payIncrease / 100));
        outfile << fixed << setprecision(2);
        // Writing the data to the file
        outfile << firstName << " " << lastName << " " << updatedSalary << endl;
    }
    // Closing the file
    infile.close();
    outfile.close();

}