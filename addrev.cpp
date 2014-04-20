/*
* Adding Reversed Numbers SPOJ solution.
*/
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;

unsigned long long reverse(unsigned long long a)
{
    unsigned long long ans = 0;
    while(a) {
        ans *= 10;
        ans += a % 10;
        a /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        cout << reverse(reverse(a) + reverse(b)) << endl;
    }
}
