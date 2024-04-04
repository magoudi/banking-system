#include "main.h"

void scan(account *x, int n){
    for(int i = 0; i < n; i++){
        cout << "what's the account number: ";
        cin >> x[i].account_no;
        cout << "what branch is this: ";
        cin.ignore();
        getline(cin, x[i].bank_branch_name);
        cout << "enter the ballance: ";
        cin >> x[i].balance;
        cout << "enter the date: d m y";
        cin >> x[i].creation_date.day >> x[i].creation_date.month >> x[i].creation_date.year;
    }
}
