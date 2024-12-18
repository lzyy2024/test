#include <bits/stdc++.h>
#include <cstdio>
using namespace std; 

void re() {
    *(int *)0 = 0;
    cout << '?';
}

int n;
char s[5010];
int ne[5010];
// string s;

signed main() {
    freopen("sp2.in", "r", stdin);
    freopen("sp2.out", "w", stdout); 

    scanf("%d %s", &n, s);

    if (n <= 0 || n > 5000) re();
    // if (s.size() != n) re();

    for (int i = 0; i < n; i++) if(!isalpha(s[i])) re();

    // vector<int> ne(s.size() + 1);
    for (int i = 1, j = 0; i < n; i++) {
        while (j && s[i] != s[j]) j = ne[j - 1];
        if (s[i] == s[j]) j++;
        ne[i] = j;
    }

    printf("%d", n - ne[n - 1]);
    // cout << n - ne[n - 1];


    // the following is o(n * n)
    // int mx = 0;
    // for (int i = 1; i < n; i++) {
    //     int flag = 1;
    //     for (int j = 0; j < i; j++) {
    //         if(s[j] != s[n - i + j]) {
    //             flag = 0;
    //             break;
    //         }
    //     }
    //     if(flag) mx = i;
    // }
    // cout << n - mx;
    return 0;
}