#include "main.h"

void interest(account *x, int n){
    for(int i = 0; i < n; i++){
        if(x[i].balance > 1000){
            x[i].balance = x[i].balance * 1.1;
        }
    }
}
