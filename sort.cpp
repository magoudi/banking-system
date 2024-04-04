#include "main.h"

void sorta(account *x, int n){
    account temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (x[j].creation_date.year > x[j + 1].creation_date.year) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }else if (x[j].creation_date.month == x[j + 1].creation_date.month){
                if (x[j].creation_date.month > x[j + 1].creation_date.month) {
                    temp = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = temp;
                }else if (x[j].creation_date.month == x[j + 1].creation_date.month){
                    if (x[j].creation_date.day > x[j + 1].creation_date.day) {
                        temp = x[j];
                        x[j] = x[j + 1];
                        x[j + 1] = temp;
                    }
                }
            }
        }
    }
}
