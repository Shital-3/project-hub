#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n==0){
        cout<<"sum of digits is 0";
    }
    int sum=0;
    int LastDigit=0;
    while(n>0){
        LastDigit=n%10;
        sum =sum+LastDigit;
        n=n/10;

    }
    cout<<sum;
}