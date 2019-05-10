#include "ProductionWorker.h"

#include <iomanip>
using std::setprecision;
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::left;
using std::right;
using std::fixed;

void getEmployeeData(ProductionWorker &);
void outputData(const ProductionWorker &);

int main()
{

    // Create ProductionWorker object
    ProductionWorker workerOne;

    // Get data for this worker
    getEmployeeData(workerOne);

    outputData(workerOne);
    
    cin.get();
    cin.ignore();
    return 0;
}

/* **********************************************************
            getEmployeeData() : obj &
    This function gets data for a production worker.
   ********************************************************** */

void getEmployeeData(ProductionWorker &worker)
{
    string name = " ";
    int    number = 0;
    string hireDate = " ";
    int    shift = 0;
    double payRate = 0.0;

    cout << "Enter employee name: ";
    getline(cin, name);
    worker.setEmpName(name);

    cout << "Enter employee Number: ";
    cin >> number;
    worker.setEmpID(number);

    cout << "Enter hire date (mm/dd/yyyy): ";
    cin >> hireDate;
    worker.setEmpHireDate(hireDate);

    cout << "\nEnter shift number: ";
    cin >> shift;
    worker.setShift(shift);

    cout << "Enter hourly pay rate: $ ";
    cin >> payRate;
    worker.setHourlyPayrate(payRate);
}

/* **********************************************************
            outputData() : const obj &
    This function outputs all data about a production worker.
   ********************************************************** */

void outputData(const ProductionWorker &worker)
{
    cout << left  << setw(12) << "Name: "
          << right << worker.getEmpName() << "\n"
          << left  << setw(12) << "ID-Number: "  
          << right << worker.getEmpID() << "\n"
          << left  << setw(11) << "Date Hired: " 
          << right << worker.getEmpDateHired() << "\n\n";

    worker.getShift() == 1 ? cout << "1" : 
                                     cout << "Assigned Shift: Night\n";
    
    cout << fixed << setprecision(2);
    cout << left << setw(12) << "Payrate: $ "
          << right << worker.getHourlyPayRate() << "\n\n";
}
