#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int32_t main()
{
    int a;
    cin >> a;
    int d = sum(a);
    cout << d << endl;
    return 0;
}