#include "account.h"
uint32_t Account::ID = 0;
Account::Account() : m_money(0), m_firstname("John"), m_lastname("Doe"), m_age(12) { ID++; }

Account::Account(double money, std::string firstname, std::string lastname, short age) { ID++; }

void Account::add_money(double addmoney)
{
    this->m_money += addmoney;
}

bool Account::withdraw_money(double wdmoney) // bool for confirm operation
{
    if (wdmoney > m_money)
    {
        std::cerr << "Not enough maney!" << std::endl;
        return false;
    }
    else
    {
        m_money -= wdmoney;
        return true;
    }
}

void Account::show_info()
{
    std::cout << "\tID: \t" << ID << std::endl;
    std::cout << "\tFirst name: \t" << m_firstname << std::endl;
    std::cout << "\tLast name: \t" << m_lastname << std::endl;
    std::cout << "\tAge: \t" << m_age << std::endl;
    std::cout << "\tMoney: " << m_money << std::endl;
}