#include<stdio.h>

///////////////////QUESTION 1///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter %d element : ", i);
        scanf(" %d", &arr[i]);
    }
    int rev[n];
    for(int i=n-1; i>=0; i--){
        rev[n-1-i] = arr[i];
    }
    for(int i=0;i<n;i++) {
        printf("%d\t", rev[i]);
    }
    return 0;
}*/
///////////////////QUESTION 2///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n+1], index, val;
    for(int i=0; i<n; i++){
        printf("enter %d element : ", i+1);
        scanf(" %d", &a[i]);
    }
    printf("enter number to be inserted : ");
    scanf(" %d", &val);
    printf("enter index where you want to insert it : ");
    scanf(" %d", &index);
    for(int i=n-1; i>=index; i--){
        a[i+1] = a[i];  
    }
    a[index] = val;
    printf("array after insertion :\n");
    for(int i=0; i<n+1; i++){
        printf("%d\t", a[i]);
    }
   return 0;
}*/
///////////////////QUESTION 3///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n+1], index, val;
    for(int i=0; i<n; i++){
        printf("enter %d element : ", i);
        scanf(" %d", &a[i]);
    }
    printf("enter index you want to delete : ");
    scanf(" %d", &index);
    for(int i=index; i<=n-1; i++){
        a[i] = a[i+1];
    }
    printf("array after deletion : ");
    for(int i=0; i<n-1; i++){
        printf("%d\t", a[i]);
    }
   return 0;
}*/
///////////////////QUESTION 4///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n, num;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n], pos = -1;
    for(int i=0;i<n;i++){
        printf("enter %d element:", i+1);
        scanf(" %d", &arr[i]);
    }
    printf("eneter element you want to search:");
    scanf(" %d", &num);
    for(int i=0; i<n;i++){
        if(arr[i] == num){
            pos = i;
            break;
        } 
    }
    if(pos!=-1){
        printf("element found at position %d.", pos);
    } else{
        printf("element not found.");
    }
    return 0;
}*/
///////////////////QUESTION 5///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n, num, first, last, mid;
    printf("enter size of array:");
    scanf("%d", &n);
    int arr[n], index = -1;
    for(int i=0;i<n;i++){
        printf("enter %d element:", i+1);
        scanf(" %d", &arr[i]);
    }
    printf("eneter element you want to search:");
    scanf(" %d", &num);
    first = 0;
    last = n-1;
    while(first<=last) {
        mid = (first + last)/2;
        if(arr[mid]==num) {
            index = mid;
            printf("ELEMENT FOUND AT %d index", index);
            break;
        } else if(arr[mid] > num) {
            last = mid-1;
        } else {
            first = mid +1;
        }
    }
    return 0;
}*/
///////////////////QUESTION 6///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n, sum=0;
    float avg;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter %d element : ", i);
        scanf(" %d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    avg = sum/n;
    printf("sum and average of array is %d and %.3f", sum, avg);
    return 0;
}*/
///////////////////QUESTION 7///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n, n1, n2, j=0;
    printf("enter size of array1: ");
    scanf("%d", &n1);
    int arr1[n1];
    for(int i=0; i<n1; i++){
        printf("enter %d element of array 1 : ", i+1);
        scanf(" %d", &arr1[i]);
    }
    printf("enter size of array2: ");
    scanf(" %d", &n2);
    int arr2[n2];
    for(int i=0; i<n2; i++){
        printf("enter %d element of array 2 : ", i+1);
        scanf(" %d", &arr2[i]);
    }
    n = n1 + n2;
    int merg[n];
    for(int i=0; i<n1;i++){
        merg[j] = arr1[i];
        j++;
    }
    for(int i=0; i<n2;i++){
        merg[j] = arr2[i];
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d\t", merg[i]);
    }
    return 0;
}*/
///////////////////QUESTION 8///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n, max, min, i;
    printf("enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter %d element of array : ", i+1);
        scanf(" %d", &arr[i]);
    }
    max = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    min = arr[0];
    for(i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("maximum and minimum element of array are %d and %d", max, min);
    return 0;
}*/
///////////////////QUESTION 9///////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("enter %d element of array : ", i+1);
        scanf(" %d", &a[i]);
    }
    int i=0, k;
    while(i<n-1) {
        k = i+1;
        while(k<n) {
            if(a[i]==a[k]) {
                for(int j=k;j<n-1;j++) {
                    a[j] = a[j+1];
                }
                n--;
            } else {
                k++;
            }
        }
        i++;
    }
    printf("ARRAY AFTER REMOVAL:\n");
    for(int i=0;i<n;i++) {
        printf("%d\t", a[i]);
    }
    return 0;
}*/
///////////////////QUESTION 10//////////////////////////////////////////////////////////////////////////////
/*int main(){    //MULTIPLICATION//
    int m, n, sum=0;
    int a[3][4], b[4][2], result[3][2];
    printf("enter first matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("enter (%d)(%d) element: ", i, j);
            scanf(" %d", &a[i][j]);
        }
    }
    printf("enter second matrix:\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("enter (%d)(%d) element: ", i, j);
            scanf(" %d", &b[i][j]);
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            for(int k=0; k<4;k++){
               sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    for(int i=0; i<3;i++){
        for(int j=0; j<2; j++){
            printf("%d\t", result[i][j]);
       }
        printf("\n");
    }
    return 0;
}*/
/*int main() {   //TRANSPOSE//
    int a[3][4];
    printf("enter matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("enter (%d)(%d) element: ", i, j);
            scanf(" %d", &a[i][j]);
        }
    }
    printf("matrix before transpose:\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<4;j++){
          printf("%d\t ", a[i][j]);
        }
        printf("\n");   
    }
    int trans[4][3];
    printf("transpose of matrix is :\n");
    for(int i=0;i<4;i++) {
        for(int j=0;j<3;j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
/*int main() {   //ADDITION//
    int a[3][4], b[3][4], result[3][4];
    printf("enter first matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("enter (%d)(%d) element: ", i, j);
            scanf(" %d", &a[i][j]);
        }
    }
    printf("enter second matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("enter (%d)(%d) element: ", i, j);
            scanf(" %d", &b[i][j]);
        }
    }
    printf("RESULTANT MATRIX IS:\n");
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            result[i][j] = a[i][j] + b[i][j];
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
///////////////////QUESTION 11//////////////////////////////////////////////////////////////////////////////
/*int main(){
    int n, temp;
    printf("enter size of array: ");
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("enter %d element of array : ", i+1);
        scanf(" %d", &a[i]);
    }
    printf("ORIGINAL ARRAY IS:\n");
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nARRAY IN ASCENDING ORDER IS:\n");
    for(int i=0; i<n; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}*/
//END OF ASSIGNMENT//