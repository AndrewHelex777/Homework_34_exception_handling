#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"

string intToStr(int num)
{
	if (num == 0)
	{
		return "0";
	}
	string res;
	while (num > 0)
	{
		char c = '0' + num % 10;
		res = c + res;
		num /= 10;
	}
	return res;
}

int ArrayValueCalculator::doCalc(string arr[][4], int rows, int cols)
{
	if (rows != 4 || cols != 4)
	{
		throw ArraySizeException("Array must have size 4x4");
	}
    int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			try
			{
				sum += stoi(arr[i][j]);
			}
			catch (...)
			{
				throw ArrayDataException("Invalid data at [" + intToStr(i) + "][" + intToStr(j) + "] = " + arr[i][j]);
			}
		}
	}
	return sum;
}