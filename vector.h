#ifndef vector_H
#define vector_H
#pragma once
#include <vector>
#include <iostream>
using namespace std;
class Vector
{
private:
	// data members
	vector<int> v;
	int sizeOfVector;
public:
	Vector(); // default constructor
	Vector(int sizeOfvector); // parametrized constructor
  
	void addToVector(int value); // this method add elements to vector
	void printValueInVector(); // this method print elements of vector
	const int getSize(); // return current size of vector
	Vector operator+(Vector obj); // overloading + operator
	friend ostream& operator<<(ostream& output, const Vector& vec) // overloading << operator
	{
		// priting values of vector
		for (int i = 0; i < vec.v.size(); i++)
		{
			output << vec.v.at(i) << endl;
		}
		return output;
	}
};

#endif