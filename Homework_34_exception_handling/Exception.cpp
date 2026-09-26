#include "Exception.h"

Exception::Exception(const string mes)
{
	m_message = mes;
}

const string Exception::GetMessage() const
{
	return m_message;
}
