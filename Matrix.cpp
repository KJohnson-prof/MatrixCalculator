#include "Matrix.h"

//constructors
Matrix::Matrix(int row, int col)
{
	vec.resize(row);
	for (int i = 0; i < row; i++)
	{
		vec.at(i).resize(col, 0);
		for (int j = 0; j < col; j++)
		{
			std::cout << "Enter value " << i + 1 << ", " << j + 1 << std::endl;
			std::cin >> vec.at(i).at(j);
		}
	}
}

Matrix::Matrix(Matrix& rhs)
{
	for (auto i : rhs.vec)
		vec.push_back(i);
}

std::ostream& operator<<(std::ostream& out, const Matrix& rhs)
{
	for (auto i : rhs.vec)
	{ 
		out << "( ";
		for (auto j : i)
			out << j << " ";
		out << ")" << std::endl;
	}

	return out;
}