#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>

class Account
{
    double m_money;
    std::string m_firstname;
    std::string m_lastname;
    int8_t m_age;
    static uint32_t ID;

public:
    Account() = delete;
    Account(double money, std::string firstname, std::string lastname, int8_t age);
    void add_money(double addmoney);
    bool withdraw_money(double wdmoney); // bool for confirm operation
    void show_info();
};

#endif