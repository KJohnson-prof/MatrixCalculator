#include "Matrix.h"

int main()
{
	//regular constructor
	Matrix A = Matrix(2, 2);
	std::cout << A;

	//deep copy constructor
	Matrix B = Matrix(A);
	std::vector<double> newRow{ 5, 6 };
	A.setRow(newRow, 1);
	std::cout << B;

	//move constructor
	Matrix C = std::move(A);
	std::cout << A;
	std::cout << C;

	return 0;
}