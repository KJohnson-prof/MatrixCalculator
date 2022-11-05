#include "Matrix.h"

int main()
{
	//regular constructor
	Matrix A = Matrix(2, 2);
	std::cout << "A" << std::endl << A;

	//deep copy constructor
	Matrix B = Matrix(A);
	std::vector<double> newRow{ 5, 6 };
	A.setRow(newRow, 1);
	std::cout << "B" << std::endl << B;

	//move constructor
	Matrix C = std::move(A);
	std::cout << "A" << std::endl << A;
	std::cout << "C" << std::endl << C;

	//addition
	Matrix D = A + B;

	std::cout << "add exited" << std::endl;

	std::cout << "D" << std::endl << D;

	return 0;
}