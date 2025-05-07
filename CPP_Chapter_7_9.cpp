/*************************************************************
 * Payroll Calculator                                        *
 *                                                           *
 * This program calculates and displays the gross wages for  *
 * seven employees based on their hours worked and hourly    *
 * pay rate.                                                 *
 *                                                           *
 * The program performs the following tasks:                 *
 * 1. Prompts the user to enter hours worked for each        *
 *    employee, with input validation.                       *
 * 2. Prompts the user to enter the hourly pay rate, with    *
 *    input validation (minimum $15.00).                     *
 * 3. Calculates the gross wages for each employee.          *
 * 4. Displays each employee's ID and corresponding wages.   *
 *                                                           *
 * Developed by: Nikita Baiborodov                           *
 *************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    /*************************************************************
     * Constants and Array Declarations                          *
     *************************************************************/
    const int NUM_EMPLOYEES = 7; // Number of employees

    // Arrays to hold employee data
    long empId[NUM_EMPLOYEES] = { 5658845, 4520125, 7895122, 8777541,
                                  8451277, 1302850, 7580489 };
    int hours[NUM_EMPLOYEES];        // Hours worked by each employee
    double payRate[NUM_EMPLOYEES];   // Hourly pay rate for each employee
    double wages[NUM_EMPLOYEES];     // Gross wages for each employee

    /*************************************************************
     * Input: Get data for each employee                         *
     *************************************************************/
    for (int i = 0; i < NUM_EMPLOYEES; i++) {

        /*************************************************************
         * Input Hours Worked                                        *
         *************************************************************/
        cout << "Enter hours worked by employee " << empId[i] << ": ";
        cin >> hours[i];

        // Input validation for hours
        while (hours[i] < 0) {
            cout << "Error: Hours worked cannot be negative. Enter again: ";
            cin >> hours[i];
        }

        /*************************************************************
         * Input Hourly Pay Rate                                     *
         *************************************************************/
        cout << "Enter pay rate for employee " << empId[i]
            << " (minimum $15.00): ";
            cin >> payRate[i];

            // Input validation for pay rate
            while (payRate[i] < 15.00) {
                cout << "Error: Pay rate must be at least $15.00. Enter again: ";
                cin >> payRate[i];
            }

            /*************************************************************
             * Calculate Gross Wages                                     *
             *************************************************************/
            wages[i] = hours[i] * payRate[i];
    }

    /*************************************************************
     * Output: Display Employee Wages                            *
     *************************************************************/
    cout << fixed << setprecision(2);
    cout << "\nEmployee Wages:\n";
    cout << "--------------------------------------\n";

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Employee ID: " << empId[i]
            << " - Gross Wages: $" << wages[i] << endl;
    }

    /*************************************************************
     * Developer Signature                                       *
     *************************************************************/
    cout << "_____________________________" << endl;
    cout << "                             " << endl;
    cout << "Developed by: Nikita Baiborodov." << endl;

    /*************************************************************
     * End of Program                                            *
     *************************************************************/
    return 0;
}
