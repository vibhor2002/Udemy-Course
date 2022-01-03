#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> *vp = new vector<int>(); //dynamic
    vector<int> v; //static

    v.push_back(10);
    v.push_back(20);
    v.push_back(60);
    v.push_back(40);
    v.push_back(50);
    v.push_back(150);
    v.push_back(100);
    v[1]=40;

    // cout<<v[0]<<endl;
    // cout<<v[1]<<endl;
    // cout<<v[2]<<endl;
    // cout<<v.at(3)<<endl;
    // cout<<v.at(4)<<endl;
    // cout<<v.at(6)<<endl;
    sort(v.begin(),v.end());
    
    v.pop_back();
    

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<endl;
        cout<<"Size: "<<v.size()<<endl;
        cout<<"Capacity: "<<v.capacity()<<endl;
    }

    
    return 0;
}