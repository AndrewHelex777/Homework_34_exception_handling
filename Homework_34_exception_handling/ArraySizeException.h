#pragma once
#include "Exception.h"

class ArraySizeException : public Exception
{
public:
	ArraySizeException(const string mes);
	virtual const string GetMessage() const;
};