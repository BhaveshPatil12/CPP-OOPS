#include<iostream>
using namespace std;
class Account{
public:
    double balance;
    Account(){
        balance = 0;
    }
    Account(int bal){
        balance = bal;
    }
    void withdraw(double amt){
        balance -= amt;
        cout << amt<<" Withdraw Successful \n";
    }
    void deposit(double amt){
        balance += amt;
        cout << amt<<" Deposit Successful \n";
    }
    void display_balance(){
        cout << "Current Balance: "<<balance<<endl;
    }
};
class Saving_Account : public Account{
public:
    double interest_rate;
 
    Saving_Account(){
        interest_rate = 4.5;
    }
    Saving_Account(double bal){
        balance = bal;
        interest_rate = 4.5;
    }
    Saving_Account(double bal,double rate){
        balance = bal;
        interest_rate = rate;
    }
 
    void calculate_interest(int years){
        balance += (balance * interest_rate/100 *years);
    }
};
class Monthly_Average_Saving_Account: public Saving_Account{
public:
    double average_balance, fine;
    Monthly_Average_Saving_Account(){
        average_balance = 99;
        fine = 10;
    }
    Monthly_Average_Saving_Account(double bal){
        balance = bal;
        fine = 10;
    }
    Monthly_Average_Saving_Account(double bal,double avg){
        balance = bal;
        average_balance = avg;
        fine = 10;
    }
    void check_average(){
        if(balance < average_balance){
            cout << "Balance is Low \n";
            balance -= fine;
        } else{
            cout <<"Balance Above Average \n";
        }
    }
};
int main()
{
    Monthly_Average_Saving_Account account(900);
    account.display_balance();
    account.deposit(100);
    account.display_balance();
    account.withdraw(700);
    account.display_balance();
    account.check_average();
    return 0;
}