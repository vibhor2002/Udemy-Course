#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// using vector
void saveAllPos(int a[], int n, int x, int i, vector<int> &ans)
{
    if (i == n)
    {
        return;
    }

    if (a[i] == x)
    {
        ans.push_back(i);
    }
    saveAllPos(a, n, x, i + 1, ans);
}

// using array
int saveAllPos2(int a[], int n, int x, int i, int out[], int j)
{
    if (i == n)
    {
        return 0;
    }

    if (a[i] == x)
    {
        out[j] = i;
        return 1 + saveAllPos2(a, n, x, i + 1, out, j + 1);
    }
    return 0 + saveAllPos2(a, n, x, i + 1, out, j);
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

    cout << endl;
    int x;
    cin >> x;

    vector<int> ans;

    //        VECTOR
    saveAllPos(a,n,x,0,ans);
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    //         ARRAY
    // int out[10];
    // int c = saveAllPos2(a, n, x, 0, out, 0);
    // for (int i = 0; i < c ; i++)
    // {
    //     cout << out[i] << " ";
    // }
    return 0;
}