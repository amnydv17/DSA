#include<iostream>
using namespace std;

void print(int n){
    if(n==0){//base case
        return ;
    }
    cout<<n<<endl;
    // recursive call
    print(n-1);
}
int main(){
    int n;
    cin>>n;

    cout<<endl;

    print(n);

return 0;
}