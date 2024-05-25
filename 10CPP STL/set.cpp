#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(9);
    s.insert(9);
    s.insert(9);

    cout << "Before Erase" << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    cout << "After Erase" << endl;
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    //count()
    cout<<"-5 is present or not->"<<s.count(-5)<<endl;

    //find()
    set<int>::iterator itr=s.find(3);

    for(auto it=itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    return 0;
}