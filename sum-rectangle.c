#include <stdio.h>
int main (){

    int r, c, i, j;

    printf ("Enter the number of rows: ");
    scanf ("%d", &r);

    printf ("Enter the number of columns: ");
    scanf ("%d", &c);

    int arr1[r][c];

    printf ("Enter matrix 1 elements: \n");

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            scanf ("%d", &arr1[i][j]);
        }
   }

    printf ("Sum: ");

    int sum=0;

    for (int i=0; i<=2; i++){
        for (int j=1; j<=4; j++){
            sum=sum+arr1[i][j];
            }
    }
    
    printf ("%d ", sum);
            
    return 0;
}