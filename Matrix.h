#pragma once

#include <iostream>
#include <vector>

class Matrix
{
private:
	std::vector<std::vector<double>> vec;
public:
	//constructors
	Matrix() {};
	Matrix(int row, int col);
	Matrix(Matrix& rhs);
	Matrix(Matrix&& rhs);

	//setters
	void setRow(std::vector<double>& newRow);
	void setVal(double newVal);

	//overload
	friend std::ostream& operator<<(std::ostream& out, const Matrix& rhs);
};