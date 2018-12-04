#include "student.h"
#include <string>

using namespace std;

string firstName;
string lastName;


void student::setName(string fName, string lName){
firstName = fName;
lastName = lName;
}

string student::fullName(){
        string fullName = firstName + " " + lastName;
        return fullName;
}
