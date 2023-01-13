#include "Revenue.h"


Revenue::Revenue()
{
    std::cout << "Running Revenue Program " << std::endl;
}

void Revenue::setRevenueName(string pRevenueName)
{
    revenueName = pRevenueName;
}

string Revenue::getRevenueName()
{
    return revenueName;
}

void Revenue::setRevenueAmount(float pRevenueAmount)
{
    revenueAmount = pRevenueAmount;
}

float Revenue::getRevenueAmount()
{
    return revenueAmount;
}
