#include <iostream>
#include<vector>
#include<iomanip>
#include"Account.h"
#include"Saving_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include "Account_util_h.h"
#include<string>
using namespace std;

int main()
{
    vector <Account> account;
    account.push_back (Account{});
    account.push_back (Account{"sufyan"});
    account.push_back  (Account{"sufyan",2000});
    account.push_back (Account{"sufyan", 5000});

    deposit(account,1000);
    withdraw(account,2000);

    vector <Saving_Account>sav_account;
    sav_account.push_back(Saving_Account{});
    sav_account.push_back(Saving_Account{"moiz"});
    sav_account.push_back(Saving_Account{"noman",1000});
    sav_account.push_back(Saving_Account{"farhan",2000});


    deposit(sav_account,1000.0);
    withdraw(sav_account,5000.0);

    vector<Checking_Account> check_account;
    check_account.push_back(Checking_Account{});
    check_account.push_back(Checking_Account{"moiz"});
    check_account.push_back(Checking_Account{"noman",1000});
    check_account.push_back(Checking_Account{"farhan",2000});

    deposit(check_account,1000);
    withdraw(check_account,2000);

    vector <Trust_Account>tru_account;
    tru_account.push_back(Trust_Account{});
    tru_account.push_back(Trust_Account{"moiz",1000,2.0});
    tru_account.push_back(Trust_Account{"farhan",2000,3.0});
    tru_account.push_back(Trust_Account{"sufyan",5000,4.0});
     tru_account.push_back(Trust_Account{"Hasan",10000,4.0});
    deposit(tru_account,1000);
    withdraw(tru_account,1000);


    return 0;
}
