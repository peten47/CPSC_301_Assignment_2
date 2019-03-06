#include "person.cpp"
#include "person.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;


void readData(Person employees[], int &n);
void writeData(Person employees[], int n);

int main() {

  int n = 0;
  Person employees[20];

  readData(employees, n);
  writeData(employees, n);

}

  void readData(Person employees[], int &n){

    string fName, lName;
    double hoursWorked, payRate;

    ifstream file;
    file.open("input.txt");


    if(!file)
    {
      cout << "Could not open file." << endl;
      exit(1);
    }

    while (file >> fName >> lName >> hoursWorked >> payRate)
    {
      Person P;
      P.setFirstName (fName);
      P.setLastName (lName);
      P.setHoursWorked (hoursWorked);
      P.setPayRate (payRate);
      employees[n] = P;
      n++;
    }
    file.close();
  }


void writeData(Person employees[], int n){
    ofstream file;
    file.open("output.txt");
    for (int i = 0; i < n; i++){
        file << employees[i].fullName() <<" "<< employees[i].totalPay() << endl;
      }
      file.close();
}
