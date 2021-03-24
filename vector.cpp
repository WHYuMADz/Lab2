#include "vector.h"

Vector::Vector()
{
	cout << "Calling default constructor" << endl;
	sizeOfVector = 0; // setting the size of the vector to 0
}

Vector::Vector(int sizeOfvector)
{
	cout << "Calling parametrized constructor" << endl;
	this->sizeOfVector = sizeOfvector;
}

void Vector::addToVector(int value)
{
	if (sizeOfVector == 0) 
	{
		v.push_back(value);
	}
	else 
	{
		if (v.size() < sizeOfVector) 
		{
			v.push_back(value);
		}
	}
	
}

void Vector::printValueInVector()
{
	cout << "Printing vector elements" << endl;
	for (int i = 0; i < v.size();i++)  // using for loop for each value of vector elements
	{
		cout << v.at(i) << endl;  // printing vector elements
	}
}

const int Vector::getSize()
{
	return v.size();
}

Vector Vector::operator+(Vector obj)
{
	Vector newVector;
	if (this->v.size() > obj.v.size())  // checking which of the vector in bigger in size
	{
		int counter = 0;
		for (int i =0;i< obj.v.size();i++)
		{
			int element = this->v.at(i) + obj.v.at(i); // adding elemnts of two vector
			newVector.addToVector(element); // adding element to thrid vector
			counter++;
		}

		for (int j = counter; j < v.size();j++)
		{
			newVector.addToVector(v.at(j));
		}
	}
	else 
	{
		int counter = 0;
		for (int i = 0; i < v.size(); i++)
		{
			int element = this->v.at(i) + obj.v.at(i); // adding elemnts of two vector
			newVector.addToVector(element); // adding element to third vector
			counter++;
		}

		for (int j = counter; j < obj.v.size(); j++)
		{
			newVector.addToVector(obj.v.at(j));
		}
	}
	return newVector;
}