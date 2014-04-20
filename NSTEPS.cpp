/*
*  Solution for problem 1112 Number Steps
*/
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        if(x >= 0 && y >= 0 && x % 2 == 0 && y % 2 == 0 && x >= y && x - y <= 2) {
            printf("%d\n", x + y);
        }
        else if(x >= 0 && y >= 0 && x % 2 != 0 && y % 2 != 0 && x >= y && x - y <= 2) {
            printf("%d\n", x + y - 1);
        }
        else {
            printf("No Number\n");
        }
    }
    return 0;
}

