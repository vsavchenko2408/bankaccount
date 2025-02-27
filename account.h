#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    double m_money;
    std::string m_firstname;
    std::string m_lastname;
    short m_age;
    static uint32_t ID;

public:
    Account();
    Account(double money, std::string firstname, std::string lastname, short age);
    void add_money(double addmoney);
    bool withdraw_money(double wdmoney); // bool for confirm operation
    void show_info();
};

#endif