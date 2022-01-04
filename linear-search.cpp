#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
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

    int key;
    cout << "Enter Key: ";
    cin >> key;

    int pos = linearSearch(a, n, key);

    if (pos == -1)
    {
        cout << "Key Not Found!!";
    }
    else
    {
        cout << "Key Found At Index: " << pos << endl;
    }

    return 0;
}