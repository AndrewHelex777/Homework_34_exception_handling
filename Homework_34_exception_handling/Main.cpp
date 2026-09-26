#include <iostream>
#include "ArrayValueCalculator.h"
#include "ArraySizeException.h"
#include "ArrayDataException.h"
using namespace std;

int main()
{
    ArrayValueCalculator calc;
    string array[4][4] = { { "1","2","h","4" }, { "5","6","7","8" }, {"9","10","11","12"}, {"13","14","15","16"} };

	try
	{
		int result = calc.doCalc(array, 4, 4);
		cout << "Result: " << result << endl;
	}
	catch (ArraySizeException exception)
	{
		cout << exception.GetMessage() << endl;
	}
	catch (ArrayDataException exception)
	{
		cout << exception.GetMessage() << endl;
	}
	catch (Exception exception)
	{
		cout << exception.GetMessage() << endl;
	}
}