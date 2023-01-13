#ifndef EXPENSES_H_INCLUDED
#define EXPENSES_H_INCLUDED


#include <iostream>

using namespace std;

class Expenses
{
    private:
        string expenseName;
        float expenseAmount;
    public:
        Expenses();
        void setExpenseName(string pExpenseName);
        string getExpenseName();
        void setExpenseAmount(float pExpenseAmount);
        float getExpenseAmount();
};

#endif
