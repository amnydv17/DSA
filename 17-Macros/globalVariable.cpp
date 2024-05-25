#include<iostream>
using namespace std;
int Score = 17;
void a()
{
    cout<<Score<<" is in a"<<endl;
    Score++;
}

void b()
{
    cout<<Score<<" is in b"<<endl;
}
int main(){
    cout<<Score<<" is in main"<<endl;
    a();
    b();
    return 0;
}