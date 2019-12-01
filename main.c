/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include "myBank.h"
#include <stdbool.h>


int main(){
   char tran_type;
   double amount;
   double interest_rate;
   int num_account;
   while(tran_type!='E'){
        printf("Pleas choose an action type:\n ");
        scanf(" %c", &tran_type);
       if (tran_type=='O' || tran_type=='B' || tran_type=='D' || tran_type=='W' || tran_type=='C' || tran_type=='L' || tran_type=='P' || tran_type=='E'){
       if(tran_type=='O'){
           printf("what is amount of the deposit? \n");
           if(scanf("%lf",&amount)==1){
            printf("your account number: %d", O(amount));
            printf(".\n");
           }
           else {printf ("error\n");}
       }
       if(tran_type=='B'){
           printf("please enter your account number: \n");
           if(scanf("%d",&num_account)==1){
               if(num_account<=950 && num_account>=901){
            B(num_account);
           printf("\n");
               }
               else printf("Account number should be in the range of 901-950.\n");
           }
           else printf ("error\n");
       }
       if(tran_type=='D'){
           printf("please enter your account number and deposit amount: \n");
           if(scanf("%d%lf",&num_account,&amount)==2) {
               if(num_account<=950 && num_account>=901){
           printf("%.2lf", D(num_account, amount));
           printf("\n");
               }
               else printf("Account number should be in the range of 901-950.\n");
           }
           else printf ("error\n");
       }
       if(tran_type=='W'){
           printf("please enter your account number and withdrawal amount: \n");
           if(scanf("%d%lf",&num_account,&amount)==2){
               if(num_account<=950 && num_account>=901){
            W(num_account,amount);
           printf("\n");
               }
               else printf("Account number should be in the range of 901-950.\n");
           }
           else printf ("error\n");
       }
       if(tran_type=='C'){
           printf("please enter your account number: \n");
           if(scanf("%d",&num_account)==1){
                if(num_account<=950 && num_account>=901){
               C(num_account);
            printf("your account has bees closed.\n");
               }
               else printf("Account number should be in the range of 901-950.\n");
           }
           else printf ("error\n");
       }
       if(tran_type=='L'){
           printf("what is the interest rate? \n");
           if(scanf("%lf",&interest_rate)==1){
           L(interest_rate);
           }
       }
       if(tran_type=='P'){
               P();
        }
        if(tran_type=='E'){
            E();
            printf("bye bye..");
        }
   }
   else printf ("You have selected the wrong command! Please select again.\n");
   }
}