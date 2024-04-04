#include "main.h"
void smouha(){
    account *x , *y;
    x = (account *)malloc(sizeof(account));
    int size = 0, i = 0,size1 = 0;
    ifstream input1;
    input1.open("accounts2.txt");
    while(!input1.eof()){
        y = (account *)realloc(x, sizeof(account) * (++size));
        x = y;
        input1 >> x[i].account_no;
        getline(input1, x[i].bank_branch_name);
        input1 >> x[i].balance;
        input1 >> x[i].creation_date.day >> x[i].creation_date.month >> x[i].creation_date.year;
        i++;
    }
    input1.close();
    i = 0;
    user *w, *z;
    w = (user *)malloc(sizeof(user));
    ifstream input2;
    input2.open("users2.txt");
    while(!input2.eof()){
        z = (user *)realloc(w, sizeof(account) * (++size1));
        w = z;
        input2 >> w[i].age;
        getline(input2, w[i].name);
        input2 >> w[i].account_no;
        i++;
    }
    input2.close();
    for(i = 0; i < size; i++){
        if(x[i].bank_branch_name == "Smouha" && x[i].balance >= 5000){
            for(int j = 0; i < size1; j++){
                if(w[j].account_no == x[i].account_no){
                    cout << w[j].name << endl;
                    break;
                }
            }
        }
    }
    free(x);
    free(y);
    free(w);
    free(z);
    
}
