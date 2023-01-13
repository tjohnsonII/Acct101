#include "ChartOfAccounts.h"

ChartOfAccounts::ChartOfAccounts()
{
    std::cout << "Running Chart of Accounts Program " << std::endl;
}

ChartOfAccounts::~ChartOfAccounts()
{
    delete [] AssetAccounts;
    delete [] AssetAmounts;
    delete [] LiabilityAccounts;
    delete [] LiabilityAmounts;
    delete [] ExpenseAccounts;
    delete [] ExpenseAmounts;
    delete [] RevenueAccounts;
    delete [] RevenueAmounts;
    delete [] OEAccounts;
    delete [] OEAmounts;
}

void ChartOfAccounts::setAssetAccounts()
{
    size = 0;
    readMode.open("Assets.txt");
    if(readMode.is_open())
    {
        while(getline(readMode, line))
        {
            size++;
        }
    }
    readMode.close();
    AssetAccounts = new string[size];
    AssetAmounts = new float[size];
    readMode.open("Assets.txt");
    if(readMode.is_open())
    {
        for(int i = 0;i < size; i++)
        {

            getline(readMode, AssetAccounts[i]);
            std::cout << line << std::endl;
            std::cout << "Enter the amount for this account" << std::endl;
            std::cin >> amount;
        }
    }
    readMode.close();
    size = 0;
}

void ChartOfAccounts::setLiabilityAccounts()
{
    size = 0;
    readMode.open("Liabilities.txt");
    if(readMode.is_open())
    {
        while(getline(readMode, line))
        {
            size++;
        }
    }
    readMode.close();
    LiabilityAccounts = new string[size];
    LiabilityAmounts = new float[size];
    readMode.open("Liabilities.txt");
    if(readMode.is_open())
    {
        for(int i = 0;i < size; i++)
        {
            getline(readMode, LiabilityAccounts[i]);
            std::cout << line << std::endl;
            std::cout << "Enter the amount for this account" << std::endl;
            std::cin >> amount;
        }
    }
    readMode.close();
    size = 0;
}

void ChartOfAccounts::setExpenseAccounts()
{
    size = 0;
    readMode.open("Expenses.txt");
    if(readMode.is_open())
    {
        while(getline(readMode, line))
        {
            size++;
        }
    }
    readMode.close();
    ExpenseAccounts = new string[size];
    ExpenseAmounts = new float[size];
    readMode.open("Expenses.txt");
    if(readMode.is_open())
    {
        for(int i = 0;i < size; i++)
        {
            getline(readMode, ExpenseAccounts[i]);
            std::cout << line << std::endl;
            std::cout << "Enter the amount for this account" << std::endl;
            std::cin >> amount;
        }
    }
    readMode.close();
    size = 0;
}

void ChartOfAccounts::setRevenueAccounts()
{
    size = 0;
    readMode.open("Revenue.txt");
    if(readMode.is_open())
    {
        while(getline(readMode, line))
        {
            size++;
        }
    }
    readMode.close();
    RevenueAccounts = new string[size];
    RevenueAmounts = new float[size];
    readMode.open("Revenue.txt");
    if(readMode.is_open())
    {
        for(int i = 0;i < size; i++)
        {
            getline(readMode, RevenueAccounts[i]);
            std::cout << line << std::endl;
            std::cout << "Enter the amount for this account" << std::endl;
            std::cin >> amount;
        }
    }
    readMode.close();
    size = 0;
}

void ChartOfAccounts::setOEAccounts()
{
    size = 0;
    readMode.open("OwnersEquity.txt");
    if(readMode.is_open())
    {
        while(getline(readMode, line))
        {
            size++;
        }
    }
    readMode.close();
    OEAccounts = new string[size];
    OEAmounts = new float[size];
    readMode.open("OwnersEquity.txt");
    if(readMode.is_open())
    {
        for(int i = 0;i < size; i++)
        {
            getline(readMode, OEAccounts[i]);
            std::cout << line << std::endl;
            std::cout << "Enter the amount for this account" << std::endl;
            std::cin >> amount;
        }
    }
    readMode.close();
    size = 0;
}

void ChartOfAccounts::printAccounts()
{
    for(int i = 0;i < AssetAccounts->length();i++)
    {
        std::cout << AssetAccounts[i] << "   :   " << AssetAmounts[i] << std::endl;
    }

    for(int j = 0;j < LiabilityAccounts->length();j++)
    {
        std::cout << LiabilityAccounts[j] << "   :   " << LiabilityAmounts[j] << std::endl;
    }

    for(int k = 0;k < ExpenseAccounts->length();k++)
    {
        std::cout << ExpenseAccounts[k] << "   :   " << ExpenseAmounts[k] << std::endl;
    }

    for(int l = 0;l < RevenueAccounts->length();l++)
    {
        std::cout << RevenueAccounts[l] << "   :   " << RevenueAmounts[l] << std::endl;
    }

    for(int m = 0;m < OEAccounts->length();m++)
    {
        std::cout << OEAccounts[m] << "   :   " << OEAccounts[m] << std::endl;
    }
}
