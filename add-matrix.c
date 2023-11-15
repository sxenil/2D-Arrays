#include <stdio.h>
int main (){

    int r, c, i, j;

    printf ("Enter the number of rows: ");
    scanf ("%d", &r);

    printf ("Enter the number of columns: ");
    scanf ("%d", &c);

    int arr1[r][c];

    printf ("Enter matrix 1 elements: ");

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf ("%d", &arr1[i][j]);
        }
   }

   int arr2[r][c];

    printf ("Enter matrix 2 elements: ");

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf ("%d", &arr2[i][j]);
        }
   }

    printf ("Sum: ");

    int arr3[r][c];
    int sum=0;

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            printf ("%d ", arr3[i][j]);
            }
            printf ("\n");
    }
    return 0;
}