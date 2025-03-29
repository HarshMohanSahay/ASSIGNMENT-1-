#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int x1,x2,y1,y2;
    cout<<"enter the cordinate x1 ";
    cin>>x1;
    cout<<"enter the cordinate x2  ";
    cin>>x2;
    cout<<"enter the cordinate y1 ";
    cin>>y1;
    cout<<"enter the cordinate y4 ";
    cin>>y2;
 
    cout<<"this is eculidin distance ";
    cout<<sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}