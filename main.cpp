#include <iostream>
#include <deque>
#include "account.h"

size_t hello()
{
    size_t choise = 0;
    std::cout << "\t\t\tProgram Bank Account!\n\n"
              << std::endl;
    std::cout << "\tTo create account enter 1: \n";
    std::cout << "\tTo find account enter 2: \n";
    std::cout << "\tTo see amount accounts enter 3: \n";
    std::cout << "\tTo exit enter 0: \t";
    std::cin >> choise;

    return choise;
}

int main()
{
    size_t choise = hello();
    std::deque<Account> all_accounts;
    while (choise != 0)
    {
        switch (choise)
        {
        case 1:
        {
            all_accounts.emplace_back(Account());
            hello();
            break;
        }
        case 2:
        {
            // Account find_acc();
            hello();
            break;
        }
        case 0:
        {
            hello();
        }
        default:
        {
            std::cerr << "Wrong choise!";
            hello();
            break;
        }
        }
    }

#ifdef WIN32
    system("pause");
#endif
    return 0;
}