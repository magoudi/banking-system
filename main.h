#ifndef main_h
#define main_h

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

typedef struct{
    int day;
    int month;
    int year;
}date;
typedef struct{
    int account_no;
    string bank_branch_name;
    int balance;
    date creation_date;
}account;

typedef struct{
    int age;
    string name;
    int account_no;
}user;

void scan(account *x, int n);
void sorta(account *x, int n);
void sv(account *x, int n);
void interest(account *x, int n);
void fileScanAcc(account *x, int n);
void fileScanUsr(user *u, int n);
void printAcc(account *x, int n);
void printUsr(user *u, int n);
void smouha();

#endif
//Print the name and age of all users that have a balance greater than $5000 and belong to the branch “Smouha”.
