// Counting sort 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int f[100];

    for (int i = 0; i < 100; i++){
        f[i] = 0;
    }
    
    for (int i = 0; i < n; i++){
        f[a[i]]++;
    }

    for (int i = 0; i < 100; i++){
        cout << f[i] << " ";
    }
    
    return 0;
    
}