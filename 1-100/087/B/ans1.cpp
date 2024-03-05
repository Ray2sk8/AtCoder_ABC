#include <cstdio>
 
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
 
    int x;
    scanf("%d", &x);
 
    int count = 0;
    int sum = 0;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (500*i + 100*j + 50*k == x)
                    count++;
            }
        }
    }
 
    printf("%d\n", count);
 
    return 0;
}