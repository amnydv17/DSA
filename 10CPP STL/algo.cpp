#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>v;

    v.push_back(2);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(9);

    cout<<"Finding 6 ->"<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"Lower Bound ->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound ->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=5;
    int b=7;

    cout<<"Max of a and b is ->"<<max(a,b);
    cout<<endl;
    cout<<"Min of a and b is ->"<<min(a,b);
    cout<<endl;


    swap(a,b);
    cout<<"a is->"<<a<<" and b is->"<<b<<endl;

    string ab="abcdef";
    cout<<"String is before reverse->"<<ab<<endl;
    reverse(ab.begin(),ab.end());
    cout<<"String is after reverse->"<<ab<<endl;

    cout<<"Vector before rotate"<<endl;
    for(int i:v)
    cout<<i<<" ";

    rotate(v.begin(),v.begin()+3,v.end());

    cout<<endl;
    cout<<"Vector after rotate and before sort"<<endl;
    for(int i:v)
    cout<<i<<" ";

    sort(v.begin(),v.end());

    cout<<endl;
    cout<<"Vector after sort"<<endl;
    for(int i:v)
    cout<<i<<" ";
    return 0;
}