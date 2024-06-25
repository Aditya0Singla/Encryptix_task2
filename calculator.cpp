#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    int a,b,n;
    cout<<"Enter First Integer"<<endl;
    cin>>a;
    cout<<"Enter Second Integer"<<endl;
    cin>>b;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cout<<"Enter Your Choice"<<endl;
    cin>>n;
    switch(n){
        case 1:cout<<"a+b="<<a+b<<endl;
        break;
        case 2:cout<<"a-b="<<a-b<<endl;
        break;
        case 3:cout<<"a*b="<<a*b<<endl;
        break;
        case 4:cout<<"a/b="<<a/b<<endl;
        break;
        default:cout<<"Enter a choice 1-4"<<endl;
    }
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}