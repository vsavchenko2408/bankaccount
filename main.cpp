#include <iostream>
#include <deque>
#include "account.h"

short hello();
Account &find_account();
int main()
{
    short choise;
    std::deque<Account> all_accounts;
    do
    {
        choise = hello();
        /*
        if (choise == 1)
        {
#ifdef WIN32
    system("cls");
#endif
            all_accounts.emplace_back(Account());
        }
        if (choise == 2)
        {
#ifdef WIN32
    system("cls");
#endif
            find_account(); // need realize
        }
        if (choise == 3)
        {
#ifdef WIN32
    system("cls");
#endif
            std::cout << all_accounts.size() << std::endl; // or maybe show last ID
        }
            */
        switch (choise)
        {
        case 1:
        {
#ifdef WIN32
            system("cls");
#endif
#ifdef unix
            system("clear");
#endif
            all_accounts.emplace_back(Account());
            break;
        }
        case 2:
        {
#ifdef WIN32
            system("cls");
#endif
#ifdef unix
            system("clear");
#endif
            find_account(); // need realize
            break;
        }
        case 3:
        {
#ifdef WIN32
            system("cls");
#endif
#ifdef unix
            system("clear");
#endif
            std::cout << all_accounts.size() << std::endl; // or maybe show last ID
            break;
        }
        }
    } while (choise != 0);

#ifdef WIN32
    system("pause");
#endif
    return 0;
}

short hello()
{
    short choise = 0;
    std::cout << "\t\t\tProgram Bank Account!\n\n"
              << std::endl;
    std::cout << "\tTo create account enter 1: \n";
    std::cout << "\tTo find account enter 2: \n";
    std::cout << "\tTo see amount accounts enter 3: \n";
    std::cout << "\tTo exit enter 0: \t";
    std::cin >> choise;

    return choise;
}
Account &find_account()
{
    // need realize
    // return ;
}