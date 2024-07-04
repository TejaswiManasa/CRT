#include <stdio.h>

void row(int n, int t, int i,int h, int m[h][t]);
void col(int n, int t, int j,int h, int m[h][t]);

void row(int n, int t, int i,int h, int m[h][t]) {
    int j;
    for (j = 0; j < t; j++) {
        if (m[i][j] == 0) {
            m[i][j] = n;
        }
    }
    if (n > 1) {
        col(n , t, i ,h, m);
    }
      
}

void col(int n, int t, int j,int h, int m[h][t]) {
    int i;
    for (i = 0; i <h; i++) {
        if (m[i][j] == 0) {
            m[i][j] = n;
            m[i][t - j -1] = n;
        }
    }
    if (n > 1) {
        row(n -1, t, j+1 ,h, m);
    }
      
}

int main() {
    int i, j, t, n,h;

    scanf("%d", &n);
    t = 2 * n - 1;
    int m[n][t];

    for (i = 0; i < n; i++) {
        for (j = 0; j < t; j++) {
            m[i][j] = 0;
        }
    }
	h=n;
    row(n, t, 0,h, m);
	printf("\n");
	printf("\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < t; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    for (i = n - 2; i >= 0; i--) {
        for (j = 0; j < t; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}

