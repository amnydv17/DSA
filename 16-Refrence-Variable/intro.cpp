#include<iostream>
using namespace std;

// int& fun(int n)   Bad Practice
// {
//     int num=++n;
//     int& ans=num;
//     return ans;
// }
void update1(int n)
{
    n++;
}

void update2(int &n)
{
    n++;
}
int main(){
    // int i=7;

    // int &j=i;

    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n=7;
    cout<<"Before->"<<n<<endl;
    update2(n);
    cout<<"After->"<<n<<endl;

    // cout<<fun(n)<<endl; Bad Practice

    return 0;
}