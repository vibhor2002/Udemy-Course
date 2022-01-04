#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        // int mid = (s + e) / 2;
        // in case of integer overflow as the value of s+e can be greater 
        // than int_max i.e 2^31-1 
        // so in order to avoid negative indexes 
        // this method is used
        int mid = s + (e - s) / 2;

        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int key;
    cout << "Enter Key: ";
    cin >> key;

    int pos = binarySearch(a, n, key);

    if (pos == -1)
    {
        cout << "Key Not Found!!";
    }
    else
    {
        cout << "Key Found At Index" << pos << endl;
    }

    return 0;
}