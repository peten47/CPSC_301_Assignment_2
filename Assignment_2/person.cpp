#include "person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {
  
}

string Person::getFirstName() {
  return firstName;
}

void Person::setFirstName(string fName) {
    firstName=fName;
}

string Person::getLastName(){
  return lastName;
}

void Person::setLastName(string lName){
  lastName=lName;
}

float Person::getPayRate(){
  return payRate;
}

void Person::setPayRate(float rate){
  payRate=rate;
}

float Person::getHoursWorked(){
  return hoursWorked;
}

void Person::setHoursWorked(float hours){
  hoursWorked=hours;
}


float Person::totalPay(){
  return hoursWorked * payRate;
}

string Person::fullName(){
  return firstName + " " + lastName;
}
