#ifndef CHARTOFACCOUNTS_H_INCLUDED
#define CHARTOFACCOUNTS_H_INCLUDED

#include <iostream>
#include <fstream>

using namespace std;


class ChartOfAccounts
{
    private:
        ifstream readMode;
        int size;
        float amount;
        string line;
        string *AssetAccounts;
        string *LiabilityAccounts;
        string *ExpenseAccounts;
        string *RevenueAccounts;
        string *OEAccounts;

        float *AssetAmounts;
        float *LiabilityAmounts;
        float *ExpenseAmounts;
        float *RevenueAmounts;
        float *OEAmounts;

    public:
        ChartOfAccounts();
        ~ChartOfAccounts();
        void setAssetAccounts();
        void setLiabilityAccounts();
        void setExpenseAccounts();
        void setRevenueAccounts();
        void setOEAccounts();
        void printAccounts();

};

#endif
