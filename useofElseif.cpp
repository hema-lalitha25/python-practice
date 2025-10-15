#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter marks";
    cin>>n;
    // WITH ONLY IF NOT USING ELSE IF
    // if(n>=81 and n<=100){
    //     cout<<"very goood";
    // }
    //  if(n>=61 and n<=80){
    //     cout<<" goood";
    // }
    
    //  if(n>=41 and n<=60){
    //     cout<<"average";
    // }
    //  if(n<=40){
    //     cout<<"fail";
    // }

    // USING ELSE IF:

    if(n>=81 and n<=100)cout<<"very goood";
    
    else if(n>=61) cout<<" goood";

    else if(n>=41 )cout<<"average";
    
    else cout<<"fail";
     
}