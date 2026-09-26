#include "ArrayDataException.h"

ArrayDataException::ArrayDataException(const string mes) : Exception(mes)
{
}

const string ArrayDataException::GetMessage() const
{
	return "ArrayDataException:" + m_message;
}
