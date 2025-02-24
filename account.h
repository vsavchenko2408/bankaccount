#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    double m_money;
    std::string m_firstname;
    std::string m_lastname;
    int8_t m_age;
#ifdef WIN32
    static uint32_t ID;
#endif
#ifdef unix
    static unsigned long int ID;
#endif

public:
    Account();
    Account(double money, std::string firstname, std::string lastname, int8_t age);
    void add_money(double addmoney);
    bool withdraw_money(double wdmoney); // bool for confirm operation
    void show_info();
    friend std::ostream &operator<<(std::ostream &os, const Account &acc)
    {
        os << acc.ID << " " << acc.m_firstname << " " << acc.m_lastname << " " << acc.m_age << " " << acc.m_money << std::endl;
        return os;
    }
};

#endif