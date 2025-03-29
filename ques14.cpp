#include<iostream>
using namespace std;
int main(){
    int head,leg,chicken;
    cout<<"enter the value of head";
    cin>>head;
    cout<<"enter the value of legs";
    cin>>leg;
    cout<<"this is number of chicken ";
    chicken = 2*head-leg/2;
    cout<<chicken<<endl;
    cout<<"this is number of dog ";
    cout<<head-chicken;
}