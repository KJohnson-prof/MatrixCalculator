#include "Matrix.h"

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

std::ostream& Matrix::operator<<(std::ostream out)
{
	//TODO
}