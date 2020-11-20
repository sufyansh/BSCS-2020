#include<vector>
#include<string>
#include"Checking_Account.h"
#include<iostream>

Checking_Account::Checking_Account(std:: string name  , double balance )
:Account{name , balance }
{
}
bool Checking_Account :: withdraw (double amount)
{
    amount += per_check_fee;
    return Account :: withdraw( amount );
}
std::ostream &operator << (std::ostream & os , const Checking_Account &account)
{
    os<<"[ checking_account :"<<account.name << ":"<<account.balance<<"]";
    return os;
}
