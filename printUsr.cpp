#include "main.h"

void printUsr(user *u, int n){
    ofstream output;
    output.open("users2.txt", ios::app);
    if(output.fail()){
        cout << "error openning file!" << endl;
        return ;
    }
    for(int i = 0; i < n; i++){
        if(u[i].account_no % 2 == 0){
            output << u[i].age << endl;
            output << u[i].name << endl;
            output << u[i].account_no << endl;
        }
    }
    output.close();
}
