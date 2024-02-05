// 1.) Write a C program to read and print elements of array. – using recursion.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// 2.) C program to print all negative elements in array

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<0)
//         {
//             printf("%d " , arr[i]);
//         }

//     }

//     return 0;
// }

// 3.) Write a C program to find sum of all array elements. – using recursion.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += arr[i];
//     }
//     printf("%d\n" , sum);

//     return 0;
// }

// 4.) Write a C program to find max and min

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int max = arr[0];
//     int min = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]>max)
//         {
//             max = arr[i];
//         }
//         if (arr[i]<min)
//         {
//             min = arr[i];
//         }

//     }
//     printf("max = %d  , min = %d " , max , min);
//     return 0;
// }

// 5.) Write a C program to find second largest element in an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int max = arr[0];
//     int secondMax;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]>max){
//             secondMax = max;
//             max = arr[i];
//         }
//         else if(max < secondMax){

//             secondMax = arr[i];
//         }
//     }
//     printf("max = %d  , secondMax = %d " , max , secondMax);

//     return 0;
// }

// 5.) Write a C program to find second smallest element in an array.

//  #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int min = arr[0];
//     int secondMin;
//     for (int i = 0; i < n; i++)
//     {
//         if(arr[i]<min){
//             secondMin = min;
//             min = arr[i];
//         }
//         else if(min > secondMin){

//             secondMin = arr[i];
//         }
//     }
//     printf("min = %d  , secondMin = %d " , min , secondMin);

//     return 0;
// }

// 6.) Write a C program to count total number of even and odd elements in an array.

//  #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int even = 0;
//     int odd = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]%2==0)
//         {
//             even++;
//         }
//         else{
//             odd++;
//         }

//     }
//     printf("even = %d  , odd = %d " , even , odd);

//     return 0;
// }

// 7.)Write a C program to count total number of negative elements in an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int negative = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]<0)
//         {
//             negative++;
//         }

//     }
//     printf("negative = %d " , negative);

//     return 0;
// }

// 8.) Write a C program to copy all elements from an array to another array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int arr2[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr2[i] = arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr2[i]);
//     }

//     return 0;
// }

// 9.) Write a C program to insert an element in an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int pos;
//     scanf("%d" , &pos);
//     int element;
//     scanf("%d" , &element);
//     for (int i = n-1; i >= pos; i--)
//     {
//         arr[i+1] = arr[i];
//     }
//     arr[pos] = element;
//     for (int i = 0; i < n+1; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// 10.) Write a C program to delete an element from an array at specified position.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//        scanf("%d" , &arr[i]);
//     }
//     int pos;
//     scanf("%d" , &pos);
//     for (int i = pos; i < n; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     for (int i = 0; i < n-1; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// 11.) Write a C program to count frequency of each element in an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int count = 0;
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         count  = 1;
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 count++;
//                 arr[j] = -1;
//             }

//         }
//         if (arr[i]!=-1)
//         {
//             printf("%d is present %d times\n" , arr[i] , count);
//         }

//     }

//     return 0;
// }

// 12.) Write a C program to print all unique elements in the array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 count++;
//             }

//         }
//         if (count==1)
//         {
//             printf("%d " , arr[i]);
//         }

//     }
//        return 0;

// }

// 13.) Write a C program to count total number of duplicate elements in an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 count++;
//                 arr[j] = -1;
//             }

//         }

//     }
//     printf("%d" , count);
//     return 0;
// }

// 14.)  Write a C program to delete all duplicate elements from an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int  i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]==arr[j])
//             {
//                 for (int k = j; k < n; k++)
//                 {
//                     arr[k] = arr[k+1];
//                 }
//                 n--;
//                 j--;
//             }

//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// 15.) Write a C program to merge two array to third array in ascending order

// #include<stdio.h>

// int main(){
//     int n1;
//     scanf("%d"  , &n1);
//     int arr1[n1];
//     for (int i = 0; i < n1; i++)
//     {
//         scanf("%d" , &arr1[i]);
//     }
//     int n2;
//     scanf("%d"  , &n2);
//     int arr2[n2];
//     for (int i = 0; i < n2; i++)
//     {
//         scanf("%d" , &arr2[i]);
//     }
//     int n3 = n1+n2;
//     int arr3[n3];
//     for (int i = 0; i < n1; i++)
//     {
//         arr3[i] = arr1[i];
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         arr3[n1+i] = arr2[i];
//     }
//     for (int i = 0; i < n3; i++)
//     {
//         for (int j = i+1; j < n3; j++)
//         {
//             if(arr3[i] > arr3[j]){
//                 int temp = arr3[i];
//                 arr3[i] = arr3[j];
//                 arr3[j] = temp;
//             }
//         }

//     }
//     for (int i = 0; i < n3; i++)
//     {
//         printf("%d ," , arr3[i]);
//     }

//     return 0;
// }

// 16.)  Write a C program to find reverse of an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = 0; i < n; i++){
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i] < arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }

//         }

//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     for (int i = n-1; i >=0 ; i--)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// 17) Write a C program to put even and odd elements of array in two separate array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int even[n];
//     int odd[n];
//     int even_count = 0;
//     int odd_count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]%2==0)
//         {
//             even[even_count] = arr[i];
//             even_count++;
//         }
//         else
//         {
//             odd[odd_count] = arr[i];
//             odd_count++;
//         }

//     }

//     for (int i = 0; i < even_count; i++)
//     {
//         printf("%d " , even[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < odd_count; i++)
//     {
//         printf("%d " , odd[i]);
//     }

//     return 0;
// }

// 18.) Write a C program to search an element in an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int search;
//     scanf("%d" , &search);
//     int flag = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==search)
//         {
//             flag = 1;
//             printf("Element found at %d index" , i);
//             break;
//         }

//     }
//     if (flag==0)
//     {
//         printf("Element not found");
//     }

//     return 0;
// }

// 19.)  Write a C program to sort array elements in ascending or descending order.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int choice;
//     scanf("%d" , &choice);
//     if (choice==1)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if (arr[i] > arr[j])
//                 {
//                     int temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }

//             }

//         }
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d " , arr[i]);
//         }

//     }
//     else if (choice==2)
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if (arr[i] < arr[j])
//                 {
//                     int temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                 }

//             }

//         }
//         for (int i = 0; i < n; i++)
//         {
//             printf("%d " , arr[i]);
//         }

//     }
//     else
//     {
//         printf("Invalid choice");
//     }

//     return 0;
// }

// 20.) C program to sort even and odd elements of array separately

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int even[n];
//     int odd[n];
//     int even_count = 0;
//     int odd_count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]%2==0)
//         {
//             even[even_count] = arr[i];
//             even_count++;
//         }
//         else
//         {
//             odd[odd_count] = arr[i];
//             odd_count++;
//         }

//     }
//     for (int i = 0; i < even_count; i++)
//     {
//         for (int j = i+1; j < even_count; j++)
//         {
//             if (even[i] > even[j])
//             {
//                 int temp = even[i];
//                 even[i] = even[j];
//                 even[j] = temp;
//             }

//         }

//     }
//     for (int i = 0; i < odd_count; i++)
//     {
//         for (int j = i+1; j < odd_count; j++)
//         {
//             if (odd[i] > odd[j])
//             {
//                 int temp = odd[i];
//                 odd[i] = odd[j];
//                 odd[j] = temp;
//             }

//         }

//     }
//     for (int i = 0; i < even_count; i++)
//     {
//         printf("%d " , even[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < odd_count; i++)
//     {
//         printf("%d " , odd[i]);
//     }

//     return 0;
// }

// 21.) Write a C program to left rotate an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     printf("Enter the number of rotations\n");
//     int rotations;
//     scanf("%d" , &rotations);
//     for (int i = 0; i < rotations; i++)
//     {
//         int temp = arr[0];
//         for (int j = 0; j < n-1; j++)
//         {
//             arr[j] = arr[j+1];
//         }
//         arr[n-1] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// 22.) Write a C program to right rotate an array.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     printf("Enter the number of rotations\n");
//     int rotations;
//     scanf("%d" , &rotations);
//     for (int i = 0; i < rotations; i++)
//     {
//         int temp = arr[n-1];
//         for (int j = n-1; j > 0; j--)
//         {
//             arr[j] = arr[j-1];
//         }
//         arr[0] = temp;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// Profit in confectionary using topology matrix  for a shopkeeper weekday and  choclate , cupkae , cake

// sort 0, 1 , 2

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d" , &arr[i]);
//     }
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i]==0)
//         {
//             count0++;
//         }
//         else if (arr[i]==1)
//         {
//             count1++;
//         }
//         else
//         {
//             count2++;
//         }

//     }
//     for (int i = 0; i < count0; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = count0; i < count0+count1; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = count0+count1; i < n; i++)
//     {
//         arr[i] = 2;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d " , arr[i]);
//     }

//     return 0;
// }

// file handling

// write a c program  to read numbers from a file and write even  , odd and prime from a different file do not using array

// #include<stdio.h>

// int main(){
//     FILE *fptr;
//     fptr = fopen("numbers.txt" , "r");
//     FILE *fptr1;
//     fptr1 = fopen("even.txt" , "w");
//     FILE *fptr2;
//     fptr2 = fopen("odd.txt" , "w");
//     FILE *fptr3;
//     fptr3 = fopen("prime.txt" , "w");
//     int num;
//     while (fscanf(fptr , "%d" , &num)!=EOF)
//     {
//         if (num%2==0)
//         {
//             fprintf(fptr1 , "%d " , num);
//         }
//         else
//         {
//             fprintf(fptr2 , "%d " , num);
//         }
//         int count = 0;
//         for (int i = 1; i <= num; i++)
//         {
//             if (num%i==0)
//             {
//                 count++;
//             }

//         }
//         if (count==2)
//         {
//             fprintf(fptr3 , "%d " , num);
//         }

//     }
//     fclose(fptr);
//     fclose(fptr1);
//     fclose(fptr2);
//     fclose(fptr3);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *file;
//     char filename[100];
//     char ch;
//     int chars, words, lines;

//     printf("Enter the filename: ");
//     scanf("%s", filename);

//     file = fopen(filename, "r");

//     if (file == NULL) {
//         printf("File does not exist.\n");
//         return 0;
//     }

//     chars = words = lines = 0;
//     while ((ch = fgetc(file)) != EOF) {
//         chars++;

//         if (ch == '\n')
//             lines++;

//         if (ch == ' ' || ch == '\t' || ch == '\n')
//             words++;
//     }

//     if (chars > 0) {
//         words++;
//         lines++;
//     }

//     printf("Total characters: %d\n", chars);
//     printf("Total words: %d\n", words);
//     printf("Total lines: %d\n", lines);

//     fclose(file);

//     return 0;
// }

// #include <stdio.h>

// int sheet(int sheets[7], int currRoll, int max)
// {
//     int i;
//     // search for the sheet with the roll number of the current student
//     for (i = 0; i < max; i++) {
//         if (sheets[i] == currRoll) {
//             // if found, shift all other sheets left and return the index
//             for (int j = i; j < max - 1; j++) {
//                 sheets[j] = sheets[j+1];
//             }
//             return i;
//         }
//     }
//     // if not found, return -1
//     return -1;
// }

// int main()
// {
//     int i;
//     int sheets[7];
//     // read the sequence of sheets from input
//     for (i = 0; i < 7; i++) {
//         scanf("%1d", &sheets[i]);
//     }
//     int rolls[7] = {1, 2, 3, 4, 5, 6, 7};
//     int indices[7];
//     // find the index of sheet for each student recursively
//     for (i = 0; i < 7; i++) {
//         indices[i] = sheet(sheets, rolls[i], 7 - i);
//     }
//     // print the indices
//     for (i = 0; i < 7; i++) {
//         printf("%d ", indices[i]);
//     }
//     return 0;
// }

// //2nd Method

// #include<stdio.h>
// void sheet(int sheets[7], int currRoll, int max)
// {int i,j,z;
// for(z=0;z<7;z++){
//     for( i=0;i<7;i++){
//         if(currRoll==sheets[i]){
//             printf("%d ",i);
//             for( j=i;j<max-1;j++){
//                 sheets[j]=sheets[j+1];
//             }
//             break;

//         }

//     }
//          currRoll++;
// }
// }
// int main(){
//     int i;
//     int a[7];
//     for(i=0;i<7;i++){
//         scanf("%d",&a[i]);
//     }

//            sheet(a,1,7);

// }


// #include <stdio.h>

// int find_duplicate(int arr[], int n) {
//     int i, j;
//     // check each element of the array against every other element
//     for (i = 0; i < n; i++) {
//         for (j = i + 1; j < n; j++) {
//             // if a duplicate is found, return it
//             if (arr[i] == arr[j]) {
//                 return arr[i];
//             }
//         }
//     }
//     // if no duplicate is found, return -1 (or any other suitable value)
//     return -1;
// }


// int main() {
//     int t;
//     scanf("%d", &t);
//     while (t--) {
//         int n;
//         scanf("%d", &n);
//         int arr[n];
//         for (int i = 0; i < n; i++) {
//             scanf("%d", &arr[i]);
//         }
//         printf("%d", find_duplicate(arr, n));
//     }
//     return 0;
// }

