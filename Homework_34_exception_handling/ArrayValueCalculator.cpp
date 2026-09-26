#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"

int strToInt(const string& str)
{
	if (str.length() == 0)
	{
		throw ArrayDataException("String is empty.");
	}

	int res = 0;
	int s = 0;

	if (str[0] == '-')
	{
		s = 1;
		if (str.length() == 1)
		{
			throw ArrayDataException("Invalid num");
		}
	}


	for (int i = s; i < str.length(); i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			throw ArrayDataException("Invalid num");
		}
		res = res * 10 + (str[i] - '0');
	}

	if (str[0] == '-')
	{
		res = -res;
	}

	return res;
}

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
				sum += strToInt(arr[i][j]);
			}
			catch (ArrayDataException exception)
			{
				throw ArrayDataException("Invalid data at [" + intToStr(i) + "][" + intToStr(j) + "] = " + arr[i][j] + " Reason: " + exception.GetMessage());
			}
		}
	}
	return sum;
}