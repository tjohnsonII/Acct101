#ifndef REVENUE_H_INCLUDED
#define REVENUE_H_INCLUDED

#include <iostream>


using namespace std;


class Revenue
{
    private:
        string revenueName;
        float revenueAmount;
    public:
        Revenue();
        void setRevenueName(string pRevenueName);
        string getRevenueName();
        void setRevenueAmount(float pRevenueAmount);
        float getRevenueAmount();
};

#endif
