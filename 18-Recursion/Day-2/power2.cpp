#include<iostream>
using namespace std;

int power(int n){
    if(n==0){//base case
        return 1;
    }
    // recursive call
return 2*power(n-1);
}
int main(){
    int n;
    cin>>n;

    int ans = power(n);
    cout<<ans<<endl;

    return 0;
}