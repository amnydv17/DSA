#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity->" << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity->" << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl;

    // Size of vector
    cout << "Size ->" << v.size() << endl;

    // Element at any endex
    cout << "Element at 1st Index ->" << v.at(1) << endl;

    // Print First element STL vector
    cout << endl
         << "First Element is->" << v.front() << endl;

    // Print Last Element of STL vector
    cout << endl
         << "Last Element is->" << v.back() << endl;

    // Loop in vector
    cout << "Before Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "After Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear Size->" << v.size() << endl;

    v.clear();

    cout << "After Clear Size->" << v.size() << endl;

    // Other Initialition with size and value
    vector<int> a(5, 2);

    //Copt vector a in last vector
    vector<int> last(a);

    cout<<"Print a"<<endl;
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    cout<<"Print Last"<<endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}