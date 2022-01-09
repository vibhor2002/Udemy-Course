#include <iostream>
using namespace std;

void count(int a[], int n, int x, int i, int &ans)
{
    if (i == n)
    {
        return;
    }

    if (a[i] == x)
    {
        ans++;
    }
    count(a, n, x, i + 1, ans);
}

int count2(int a[], int n, int x, int i)
{
    if (i == n)
    {
        return 0;
    }

    if (a[i] == x)
    {
        return 1 + count2(a, n, x, i + 1);
    }
    else
    {
        return 0 + count2(a, n, x, i + 1);
    }
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

    int x;
    cin >> x;

    int ans = 0;
    cout<<count2(a, n, x, 0);
    // cout << ans;

    return 0;
}