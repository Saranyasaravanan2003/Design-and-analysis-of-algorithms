#include <stdio.h>
int main() {
    int n = 4; 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  "); 
        }
        for (int j = 1; j <= i; j++) {
            printf("%2d  ", j);
        }
        printf("\n");
    }
    return 0;
}
