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
	Matrix(Matrix&& rhs) noexcept;

	//setters
	void setRow(std::vector<double>& newRow, int oldRow);
	void setVal(double newVal, int row, int col);

	//overload
	friend std::ostream& operator<<(std::ostream& out, const Matrix& rhs);
};