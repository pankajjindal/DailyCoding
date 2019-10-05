//Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.

#include <iostream>

class PascalsTriangle{

public:
	PascalsTriangle(int rows):numRows(rows){}

	void PrintRows()
	{
		std::cout << "Number of Rows are "<< numRows;
	}

private:
	auto numRows;
};


void main()
{
	auto pt = std::make_shared<PascalsTriangle>(5);
}
