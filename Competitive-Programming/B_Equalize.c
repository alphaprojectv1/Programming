#include <stdio.h>
#include <stdlib.h>

int upperBound(int arr[], int size, int target) {
    int left = 0, right = size;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return left;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int v[n];
        int se[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &v[i]);
            se[i] = v[i];
        }
        int l[n];
        int k = n;
        n = sizeof(se) / sizeof(se[0]);
        int ans = 1;
        for (int i = 0; i < n; i++) {
            int en = se[i] + k - 1;
            int it = upperBound(se, n, en) - i;
            ans = (ans > it) ? ans : it;
        }
        printf("%d\n", ans);
    }
    return 0;
}
