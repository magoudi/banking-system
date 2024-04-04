#include "main.h"

void printAcc(account *x, int n){
    ofstream output;
    output.open("accounts2", ios::app);
    if(output.fail()){
        cout << "error openning file!" << endl;
        return ;
    }
    for(int i = 0; i < n; i++){
        output << x[i].account_no << endl;
        output << x[i].bank_branch_name << endl;
        output << x[i].balance << endl;
        output << x[i].creation_date.day << " " << x[i].creation_date.month << " " << x[i].creation_date.year << " " << endl;
    }
    output.close();
}
