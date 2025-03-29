#include<iostream>
using namespace std;
int main(){
    int principle,time;
    float rate;
    cout<<"enter the Principle ";
    cin>>principle;
    cout<<"enter the rate ";
    cin>>rate;
    cout<<"Enter the time";
    cin>>time;
    cout<<"this is your simple intrest ";
    cout<<(float)(principle*rate*time)/100;
} 