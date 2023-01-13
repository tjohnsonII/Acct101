#include "OwnersEquity.h"

OwnersEquity::OwnersEquity()
{
    std::cout << "Running Owners Equity Program " << std::endl;
}

void OwnersEquity::setOwnersEquityName(string pOEName)
{
    ownersEquityName = pOEName;
}

string OwnersEquity::getOwnersEquityName()
{
    return ownersEquityName;
}

void OwnersEquity::setOwnersEquityAmount(float pOEAmount)
{
    ownersEquityAmount = pOEAmount;
}

float OwnersEquity::getOwnersEquityAmount()
{
    return ownersEquityAmount;
}
