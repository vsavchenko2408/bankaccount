#include <iostream>
#include "account.h"
int main()
{
    Account ac(1000, "John", "Doe", 21);
    ac.show_info();

#ifdef WIN32
    system("pause");
#endif
    return 0;
}