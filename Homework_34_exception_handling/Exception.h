#pragma once
#include <string>
using namespace std;

class Exception
{
protected:

    string m_message;

public:

    Exception(const string mes);
    const virtual string GetMessage() const;
};