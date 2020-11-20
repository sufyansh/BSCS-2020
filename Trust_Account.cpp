#include<vector>
#include"Account.h"
#include"Saving_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include "Account_util_h.h"
#include<iostream>

Trust_Account::Trust_Account(std::string name , double balance , double int_rate)
:Saving_Account {name, balance, int_rate} , num_withdrawal {0}
{
    //ctor
}

bool Trust_Account :: deposit (double amount)
{
 if (amount >=bonus_threshold)
        amount+=bonus_amount;
 return Saving_Account::deposit(amount);
}
bool Trust_Account :: withdraw (double amount)
{
    if (num_withdrawal>=max_withdrawal ||amount>balance *max_withdrawal_percent)
        return false ;
        else {
         ++num_withdrawal;
         return Saving_Account :: withdraw(amount);
        }
}
std::ostream &operator <<(std::ostream &os , const Trust_Account &account)
{
    os<<"[trust_account "<< account.name<<":"<<account.balance<<":"<<account.int_rate <<"% with drawal :"<<account.num_withdrawal<<"]";
    return os;
}
