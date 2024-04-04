#include "main.h"

void sv(account *x, int n){
    for(int i = 0; i < n; i++){
        if(x[i].bank_branch_name == "Smart Village" ||x[i].bank_branch_name == "smart village"){
            cout << "account number: " << x[i].account_no << endl;
            cout << "balance: " << x[i].balance << endl;
            cout << "creation date: " << x[i].creation_date.day <<'/'<< x[i].creation_date.month <<'/'<< x[i].creation_date.year<< endl;
            cout << "--------------------------------------"<< endl;
        }
    }
}
