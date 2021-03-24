#include <iostream>
#include "vector.h"
using namespace std;
int main()
{
    Vector v1; // creating a Vector class object
    // adding elements to Vector class
    v1.addToVector(803);
    v1.addToVector(220);
    v1.addToVector(903);
    v1.addToVector(601);
    v1.addToVector(509);

    v1.printValueInVector(); // printing values in Vector class object

    Vector v2; // creating a Vector class object
    // adding elements to Vector class object
    v2.addToVector(150);
    v2.addToVector(620);
    v2.addToVector(420);
    v2.addToVector(523);
    v2.addToVector(332);

    v2.printValueInVector(); // printing values in Vector class object
    
    Vector v3 = v1 + v2; //using overloading + operator
    cout << "First No.: \n" << v1 << "Second No.: \n" << v2 <<"=" << v3; // printing values using  << operator
    return 0;

}