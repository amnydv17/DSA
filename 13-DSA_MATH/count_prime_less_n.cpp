#include <iostream>
using namespace std;

bool isPrime(int n)
{   
    if(n<=1)
    return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter the value of n= ";
    cin >> n;

    int count=0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    cout<<"Number of prime number less than "<<n<<"->"<<count<<endl;
    return 0;
}