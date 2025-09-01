#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
cout<<"Size of Vector 1:"<<v.size()<<endl;
cout<<"Capacity of Vector 1:"<<v.capacity()<<endl;
v.push_back(1);
cout<<"Size of Vector 1:"<<v.size()<<endl;
cout<<"Capacity of Vector 1:"<<v.capacity()<<endl;
v.push_back(3);
cout<<"Size of Vector 1:"<<v.size()<<endl;
cout<<"Capacity of Vector 1:"<<v.capacity()<<endl;
return 0;
}