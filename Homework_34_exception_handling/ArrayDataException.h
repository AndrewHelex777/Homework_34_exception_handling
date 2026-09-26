#pragma once
#include "Exception.h"

class ArrayDataException : public Exception
{
public:
	ArrayDataException(const string mes);
	virtual const string GetMessage() const;
};