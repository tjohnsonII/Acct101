#ifndef LIABILITIES_H_INCLUDED
#define LIABILITIES_H_INCLUDED

#include <iostream>

using namespace std;

class Liabilities{

    private:
        string liabilityName;
        float liabilityAmount;


    public:
        Liabilities();
        void setLiabilityName(string pLiabilityName);
        string getLiabilityName();
        void setLiabilityAmount(float pLiabilityAmount);
        float getLiabilityAmount();
};

#endif
