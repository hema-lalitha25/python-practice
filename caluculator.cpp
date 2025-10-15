#include<iostream>
using namespace std;
/*Write a program to create a calculator that
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
.The calculator should input two =
numbers and an operator from user.*/


//without switch:
// int main(){
//     int n1;
//     cin>>n1;
//     char op;
//     cin>>op;
//     int n2;
//     cin>>n2;
//     if(op=='+')cout<<n1+n2;
//     if(op=='-')cout<<n1-n2;
//     if(op=='*')cout<<n1*n2;
//     if(op=='/')cout<<n1/n2;

// }

int main(){
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-' :
            cout<<n1-n2<<endl;
            break;
         case '*' :
            cout<<n1*n2<<endl;
            break;
         case '/' :
            cout<<n1/n2<<endl;
            break;
         default :
            cout<<"invalid"s<<endl;
            break;
            
            
            

            
    }

}