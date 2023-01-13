#include "Liabilities.h"

Liabilities::Liabilities()
{
    std::cout << "Starting Liabilities Program " << std::endl;
}


void Liabilities::setLiabilityName(string pLiabilityName)
{
    liabilityName = pLiabilityName;
}

string Liabilities::getLiabilityName()
{
    return liabilityName;
}

void Liabilities::setLiabilityAmount(float pLiabilityAmount)
{
    liabilityAmount = pLiabilityAmount;
}

float Liabilities::getLiabilityAmount()
{
    return liabilityAmount;
}
