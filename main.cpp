#include <iostream>
#include "account.h"

size_t hello()
{
    size_t choise = 0;
    std::cout << "\t\t\tProgram Bank Account!\n\n"
              << std::endl;
    std::cout << "\tTo create account enter 1: \n";
    std::cout << "\tTo find account enter 2: \n";
    std::cout << "\tTo exit enter 0: \t";
    std::cin >> choise;

    return choise;
}
int main()
{
    size_t choise = hello();
    do
    {

        switch (choise)
        {
        case 1:
        {
            Account ac();
            break;
        }
        case 2:
        {
            Account find_acc();
            break;
        }
        case 0:
        {
            std::exit(0);
        }
        default:
        {
            std::cerr << "Wrong choise!";
            break;
        }
        }
    } while (choise != 0);

#ifdef WIN32
    system("pause");
#endif
    return 0;
}