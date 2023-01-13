#include "Expenses.h"

Expenses::Expenses()
{
    std::cout << "Running Expeses Program " << std::endl;
}

void Expenses::setExpenseName(string pExpenseName)
{
    expenseName = pExpenseName;
}

string Expenses::getExpenseName()
{
    return expenseName;
}

void Expenses::setExpenseAmount(float pExpenseAmount)
{
    expenseAmount = pExpenseAmount;
}


float Expenses::getExpenseAmount()
{
    return expenseAmount;
}
