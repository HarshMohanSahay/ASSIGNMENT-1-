#include<iostream>
using namespace std;
int main(){
    float a;
    cout<<"enter a float number ";
    cin>>a;
    cout<<"This is without typecast ";
    cout<<a<<endl;
    cout<<"This is with typecast ";
    cout<<(int)a;
}