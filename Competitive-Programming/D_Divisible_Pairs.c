#include <stdio.h>
#include <stdlib.h>

#define int long long

int complement(int p, int x) {
    return (x - (p % x)) % x;
}

int main() {
    int tt = 1;
    scanf("%lld", &tt);
    while (tt--) {
        int n, x, y;
        scanf("%lld %lld %lld", &n, &x, &y);
        int *a = (int*)malloc(n * sizeof(int));
        
        int **g = (int**)malloc(x * sizeof(int*));
        for (int i = 0; i < x; i++) {
            g[i] = (int*)malloc(y * sizeof(int));
            for (int j = 0; j < y; j++) {
                g[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            ++g[a[i] % x][a[i] % y];
        }

        int tot = 0;
        for (int i = 0; i < n; i++) {
            int comp_i = complement(a[i], x);
            tot += g[comp_i][a[i] % y] - (a[i] % x == comp_i);
        }

        printf("%lld\n", tot / 2);

        free(a);
        for (int i = 0; i < x; i++) {
            free(g[i]);
        }
        free(g);
    }

    return 0;
}
