#include "Account_util_h.h"
#include<iostream>
#include<vector>
#include"Account.h"
#include"Saving_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"

void display (std::vector<Account>& account )
{
   std::cout<<"\n===Account ========"<<std::endl;
    for ( auto &acc : account)
        std::cout<<acc<<std::endl;
}
void deposit (std::vector <Account> &account , double amount )
{
    std::cout<<"\n======deposit Account====:"<<std::endl;
    for( auto &acc : account ){
        if (acc.deposit(amount))
        std::cout<<"deposit"<<amount<<"to"<<acc<<std::endl;
        else
            std::cout<<"failed deposit"<<amount<<"to"<<acc<<std::endl;
}}
void withdraw (std::vector <Account>&account , double amount)
{
    std::cout<<"==========withdraw amount =========="<<std::endl;
    for(auto &acc : account ){
    if ( acc.withdraw(amount))
        std::cout<<"withdraw "<<amount<<"from"<<acc<<std::endl;
    else
        std::cout<<"failed withdrawal of "<<amount<<"from"<<acc<<std::endl;
    }
}
void display (std::vector<Saving_Account>& account )
{
   std::cout<<"\n===Account ========"<<std::endl;
    for(const auto &acc : account)
        std::cout<<acc<<std::endl;
}
void deposit (std::vector <Saving_Account> &account , double amount )
{
    std::cout<<"\n======deposit Account====:"<<std::endl;
    for( auto &acc : account ){
        if (acc.deposit(amount))
        std::cout<<"deposit"<<amount<<"to"<<acc<<std::endl;
        else
            std::cout<<"failed deposit"<<amount<<"to"<<acc<<std::endl;
}}
void withdraw (std::vector <Saving_Account>&account , double amount)
{
    std::cout<<"==========withdraw amount =========="<<std::endl;
    for( auto &acc : account ){
    if ( acc.withdraw(amount))
        std::cout<<"withdraw "<<amount<<"from"<<acc<<std::endl;
    else
        std::cout<<"failed withdrawal of "<<amount<<"from"<<acc<<std::endl;
    }
}

void display (std::vector<Checking_Account>& account )
{
   std::cout<<"\n===Account ========"<<std::endl;
    for(const auto &acc : account)
        std::cout<<acc<<std::endl;
}
void deposit (std::vector <Checking_Account> &account , double amount )
{
    std::cout<<"\n======deposit Account====:"<<std::endl;
    for( auto &acc : account ){
        if (acc.deposit(amount))
        std::cout<<"deposit"<<amount<<"to"<<acc<<std::endl;
        else
            std::cout<<"failed deposit"<<amount<<"to"<<acc<<std::endl;
}}
void withdraw (std::vector <Checking_Account>&account , double amount)
{
    std::cout<<"==========withdraw amount =========="<<std::endl;
    for( auto &acc : account ){
    if ( acc.withdraw(amount))
        std::cout<<"withdraw "<<amount<<"from"<<acc<<std::endl;
    else
        std::cout<<"failed withdrawal of "<<amount<<"from"<<acc<<std::endl;
    }
}

void display (std::vector<Trust_Account>& account )
{
   std::cout<<"\n===Account ========"<<std::endl;
    for(const auto &acc : account)
        std::cout<<acc<<std::endl;
}
void deposit (std::vector <Trust_Account> &account , double amount )
{
    std::cout<<"\n======deposit Account====:"<<std::endl;
    for( auto &acc : account ){
        if (acc.deposit(amount))
        std::cout<<"deposit"<<amount<<"to"<<acc<<std::endl;
        else
            std::cout<<"failed deposit"<<amount<<"to"<<acc<<std::endl;
}}
void withdraw (std::vector <Trust_Account>&account , double amount)
{
    std::cout<<"==========withdraw amount =========="<<std::endl;
    for( auto &acc : account ){
    if ( acc.withdraw(amount))
        std::cout<<"withdraw "<<amount<<"from"<<acc<<std::endl;
    else
        std::cout<<"failed withdrawal of "<<amount<<"from"<<acc<<std::endl;
    }
}
