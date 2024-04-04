#include "main.h"

void fileScanUsr(user *u, int n){
    ifstream input;
    input.open("users.txt");
    if(input.fail()){
        cout << "error openning file!"<< endl;
        return ;
    }
    for(int i = 0; i < n; i++){
        input >> u[i].age;
        getline(input, u[i].name);
        input >> u[i].account_no;
    }
    input.close();
}
