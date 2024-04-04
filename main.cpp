#include "main.h"

int main() {
    bool run = true;
    account *x;
    user *u;
    int input, n = 0, nu = 0;
    while(run){
        cout << "1. Scan N accounts" << endl;
        cout << "2. Sort accounts by their date" << endl;
        cout << "3. List all accounts with branch name SmartVillage" << endl;
        cout << "4. Add 10% interest rate to accounts with balance more than $1000" << endl;
        cout << "5. Scan N accounts with their details from a text file"<< endl;
        cout << "6. Scan N users with all their details from a text file" << endl;
        cout << "7. Print all accounts from their array to a text file" << endl;
        cout << "8. Print all users that have even account number from their array to a text file" << endl;
        cout << "9. Print the name and age of all users that have a balance greater than $5000 and belong to the branch Smouha" << endl;
        cout << "10. End program" << endl;
        cin >> input;
        if(input == 1){
            cout << "How many accounts will you enter ";
            cin >> n;
            x = (account*)malloc(sizeof(x) * n);
            scan(x, n);
        }if(input == 2){
            sorta(x, n);
        }if(input == 3){
            sv(x, n);
        }if(input == 4){
            interest(x, n);
        }if(input == 5){
            cout << "How many accounts do u want to scan ";
            cin >> n;
            fileScanAcc(x, n);
        }if(input == 6){
            cout << "How many users do u want to scan ";
            cin >> nu;
            fileScanUsr(u, nu);
        }if(input == 7){
            printAcc(x, n);
        }if(input == 8){
            printUsr(u, nu);
        }if(input == 9){
            smouha();
        }if(input == 10){
            run = false;
        }
        
    }
    
}
