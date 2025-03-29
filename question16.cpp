#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int x1,x2,y1,y2;
    cout<<"enter the first numerator x1 ";
    cin>>x1;
    cout<<"enter the first dinominator x2  ";
    cin>>x2;
    cout<<"enter the second numerator y1 ";
    cin>>y1;
    cout<<"enter the second denomrator y2 ";
    cin>>y2;
 
    cout<<"this is answer sum ";
    cout<<((x1*y2)+(x2*y1))/(x2*y2);
}