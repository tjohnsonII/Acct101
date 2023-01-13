#ifndef OWNERSEQUITY_H_INCLUDED
#define OWNERSEQUITY_H_INCLUDED

#include <iostream>

using namespace std;

class OwnersEquity
{
    private:
        string ownersEquityName;
        float ownersEquityAmount;
    public:
        OwnersEquity();
        void setOwnersEquityName(string pOEName);
        string getOwnersEquityName();
        void setOwnersEquityAmount(float pOEAmount);
        float getOwnersEquityAmount();
};

#endif
