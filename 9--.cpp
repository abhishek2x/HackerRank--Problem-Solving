// Not yet solved
// Very Big Sum
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    unsigned long int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    unsigned long int sum = 0;
    
    for (int i = 0; i < n; i++){
        sum = sum + a[i];
    }
    
    cout << sum;

    return 0;
}