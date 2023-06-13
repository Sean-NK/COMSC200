//
//  Account_app.cpp
//  Hyun_Namkoong_200_assign10
//
//  Created by Hyun Namkoong on 4/24/23.
//
#include <iostream>
#include <iomanip>
#include "Hyun_Namkoong_Account.h" // Account class definition
#include "Hyun_Namkoong_SavingsAccount.h" // SavingsAccount class definition
#include "Hyun_Namkoong_CheckingAccount.h" // CheckingAccount class definition
using namespace std;
int main()
{
Account account1( 600.0 ); // create Account object
SavingsAccount account2( 250.0, .04 ); // create SavingsAccount object
CheckingAccount account3( 150.0, 1.3 ); // create CheckingAccount object
cout << fixed << setprecision( 2 );
// display initial balance of each object
cout << "account1 balance: $" << account1.getBalance() << endl;
cout << "account2 balance: $" << account2.getBalance() << endl;
cout << "account3 balance: $" << account3.getBalance() << endl;
cout << "\nAttempting to debit $25.00 from account1." << endl;
account1.debit( 20.0 ); // try to debit $25.00 from account1
cout << "\nAttempting to debit $30.00 from account2." << endl;
account2.debit( 10.0 ); // try to debit $30.00 from account2
cout << "\nAttempting to debit $40.00 from account3." << endl;
account3.debit( 15.0 ); // try to debit $40.00 from account3
// display balances
cout << "\naccount1 balance: $" << account1.getBalance() << endl;
cout << "account2 balance: $" << account2.getBalance() << endl;
cout << "account3 balance: $" << account3.getBalance() << endl;
cout << "\nCrediting $40.00 to account1." << endl;
account1.credit( 430.0 ); // credit $40.00 to account1
cout << "\nCrediting $65.00 to account2." << endl;
account2.credit( 425.0 ); // credit $65.00 to account2
cout << "\nCrediting $20.00 to account3." << endl;
account3.credit( 420.0 ); // credit $20.00 to account3
// display balances
cout << "\naccount1 balance: $" << account1.getBalance() << endl;
cout << "account2 balance: $" << account2.getBalance() << endl;
cout << "account3 balance: $" << account3.getBalance() << endl;
// add interest to SavingsAccount object account2
double interestEarned = account2.calculateInterest();
cout << "\nAdding $" << interestEarned << " interest to account2."
<< endl;
account2.credit( interestEarned );
cout << "\nNew account2 balance: $" << account2.getBalance() << endl;
system("PAUSE");
return 0;
}

