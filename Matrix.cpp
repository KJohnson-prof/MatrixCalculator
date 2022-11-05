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

Matrix::Matrix(Matrix&& rhs) noexcept
{
	vec = rhs.vec;
	rhs.vec.clear();
}

//setters
void Matrix::setRow(std::vector<double>& newRow, int oldRow)
{
	if (oldRow - 1 >= this->vec.size() || oldRow - 1 < 0)
		return;

	std::swap(newRow, this->vec.at(oldRow - 1));
}

void Matrix::setVal(double newVal, int row, int col)
{
	if (row - 1 < 0 || row - 1 >= this->vec.size() || col - 1 < 0 || col - 1 >= this->vec.at(row).size())
		return;

	this->vec.at(row - 1).at(col - 1) = newVal;
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
	out << std::endl;

	return out;
}

Matrix& operator+(const Matrix& A, const Matrix& B)
{

	std::cout << "add entered" << std::endl;

	Matrix result = Matrix();
	if (A.vec.size() != B.vec.size() || A.vec.size() <= 0 || B.vec.size() <= 0)
		return result;

	std::cout << "first if statement" << std::endl;

	if (A.vec.at(0).size() != B.vec.at(0).size())
		return result;

	result.vec.resize(A.vec.size());

	std::cout << "preloop" << std::endl;

	for (size_t i = 0; i < A.vec.size(); i++)
	{

		std::cout << "first loop entered" << std::endl;

		result.vec.at(i).resize(A.vec.at(i).size());
		for (size_t j = 0; j < A.vec.at(i).size(); j++)
		{
			result.vec.at(i).at(j) = A.vec.at(i).at(j) + B.vec.at(i).at(j);
		}
	}

	std::cout << "add exitted" << std::endl;

	return result;
}