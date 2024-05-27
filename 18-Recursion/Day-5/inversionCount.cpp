#include <iostream>
using namespace std;

class InversionCount
{
public:
    // Function to count inversions in the array.
    static long inversionCount(long arr[], long N)
    {
        return count(arr, 0, N - 1);
    }

private:
    static long count(long arr[], long s, long e)
    {
        // base case
        if (s >= e)
            return 0;

        long mid = (s + e) / 2;

        // left part inversion
        long inv = count(arr, s, mid);
        inv += count(arr, mid + 1, e);
        inv += merge(arr, s, e);
        return inv;
    }

    static long merge(long arr[], long s, long e)
    {
        long ans = 0;

        long mid = (s + e) / 2;

        long l1 = mid - s + 1;
        long l2 = e - mid;

        long* a1 = new long[l1];
        long* a2 = new long[l2];

        long idx = s;

        // copy elements
        for (long i = 0; i < l1; i++)
        {
            a1[i] = arr[idx++];
        }

        for (long i = 0; i < l2; i++)
        {
            a2[i] = arr[idx++];
        }

        long idx1 = 0;
        long idx2 = 0;
        idx = s;
        while (idx1 < l1 && idx2 < l2)
        {
            // check for inversions
            if (a1[idx1] > a2[idx2])
            {
                ans += (l1 - idx1);
                arr[idx++] = a2[idx2++];
            }
            else
            {
                arr[idx++] = a1[idx1++];
            }
        }

        while (idx1 < l1)
        {
            arr[idx++] = a1[idx1++];
        }
        while (idx2 < l2)
        {
            arr[idx++] = a2[idx2++];
        }

        delete[] a1;
        delete[] a2;

        return ans;
    }
};

int main()
{
    long arr[] = {1, 20, 6, 4, 5};
    long N = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of inversions are: " << InversionCount::inversionCount(arr, N) << endl;
    return 0;
}
