#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>
double accounts [w][y]={0};

int O(double amount){
    bool flag = false;
    int i;
for(i=0;i<w;i++){
    if(accounts[i][0]==0){
        accounts[i][1]=amount;
        accounts[i][0]=1;
        flag = true;
        return 901+i;
    }
}
if (flag == false) {
    printf("Unable to open a new account! \n");
}
}

double B(int num_account){
    if (accounts [num_account-901][0]==1){
        printf("yor account balance is :%.2lf", accounts[num_account-901][1]);
    }
    else printf("The bank account does not exist! ");
}

double D(int num_account, double amount){
    int index =num_account-901;
    if(accounts[index][0]==1){
        accounts[index][1]+=amount;
       return accounts[index][1];
    }
    else printf("The bank account does not exist! \n");
}

double W(int num_account, double amount){
    int index = num_account-901;
    if(accounts[index][0]==1 && accounts[index][1]>=amount){
        accounts[index][1]-=amount;
        printf("your account balance is: %.2lf.\n", accounts[index][1]);
    }
    else printf("The bank account does not exist / There is not enough balance \n");
}

void C (int num_account){
    if (accounts[num_account-901][0]==1){
        accounts[num_account-901][0]=0;
        accounts[num_account-901][1]=0;
    }
    else printf("The bank account does not exist! \n");
}

void L(double interest_rate){
    double x=interest_rate/100;
    int i=0;
    for (;i<w;i++){
        if (accounts[i][0]==1){
            accounts[i][1]*=(1+x);
        }
    }
}

void P (){
    int i;
    for(i=0;i<w;i++){
        if(accounts[i][0]==1){ 
        printf("account number: %d",901+i);
        printf("\n");
        printf("The balance of the accountant: %.2lf",accounts[i][1]);
        printf("\n");
        }
    }
}

void E (){
    int i=0;
    for(;i<w;i++){
        accounts[i][0]=0;
        accounts[i][1]=0;
    }
}    
