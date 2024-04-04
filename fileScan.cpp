#include "main.h"

void fileScanAcc(account *x, int n){
    ifstream input;
    input.open("accounts.txt");
    if(input.fail()){
        cout << "error openning file!"<< endl;
        return ;
    }
    for(int i = 0; i < n; i++){
        input >> x[i].account_no;
        getline(input, x[i].bank_branch_name);
        input >> x[i].balance;
        input >> x[i].creation_date.day >> x[i].creation_date.month >> x[i].creation_date.year;
    }
    input.close();
}
