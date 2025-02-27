#include <iostream>
#include <deque>
#include "account.h"
#include <fstream>
bool record_to_file(Account &obj);
short hello();
Account &find_account();
int main()
{
    short choise;
    std::deque<Account> all_accounts;
    do
    {
        choise = hello();
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
            Account obj = Account();
            all_accounts.emplace_back(obj);
            record_to_file(obj);
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
#ifdef WIN32
    system("cls");
#endif
#ifdef unix
    system("clear");
#endif
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

bool record_to_file(Account &obj)
{
    std::fstream fs("Accounts.txt", std::ios_base::app);

    if (fs.is_open())
    {
        fs << obj;
    }
    else
    {
        std::cerr << "File didn't open!" << std::endl;
    }
    fs.close();
}