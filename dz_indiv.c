#include <stdlib.h>
#include <stdio.h>

int main() {
    int n, t, s, k;
    
    printf("Vvedite kol-vo vershin grafa: ");
    scanf("%d", &n);
    
    int **a = (int**)malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++)
        a[i] = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = -1;

    printf("Vvedite matritsu smejnosti\nX| ");
    for (int j = 0; j < n; j++) printf("%d ", j+1);
    printf("\n--");
    for (int j = 0; j < n; j++) printf("--");
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%d| ", i+1);
        for (int j = 0; j < n; j++) {
            if (j==i) a[i][j] = 0;
            if (a[i][j] == -1) {
                scanf("%d", &a[i][j]);
                a[j][i] = a[i][j];
            } else
                printf("%d ", a[i][j]);
        }
    }
    printf("\n");
    
    printf("Vvedite stepen? vershini s kotoroi hotite naiti: ");
    scanf("%d", &s);
    printf("Vershini s nuznoi stepeniu:\n");
    for (int i = 0; i < n; i++) {
        k = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) k++;
        }
        if (k == s) {
            printf("%d ", i+1);
        }
    }
    printf("\n");
}
