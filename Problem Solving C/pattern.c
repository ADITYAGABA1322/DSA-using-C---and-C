//1.) C program to print square or rectangle star pattern

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 2.) C program to print hollow square or rectangle star pattern

// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if(i == 1 || i == n || j == 1 || j == n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// 3.) Hollow Square Star Pattern with Diagonal
  


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if(i == 1 || i == n || j == 1 || j == n || i == j || i + j == n + 1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//4.) Rhombus Star Pattern

// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// 5.) Hollow Rhombus Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             if(i == 1 || i == n || j == 1 || j == n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// 6.)  Mirrored Rhombus Star Pattern

//  *****
//  *****
//   *****
//    *****
//     *****


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }




//7.) Hollow Mirrored Rhombus Star Pattern

// *****
//  *   *
//   *   *
//    *   *
//     *****


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             if(i == 1 || i == n || j == 1 || j == n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

//8.) Right Triangle Star Pattern

// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 9.) Hollow Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if(i == n || j == 1 || j == i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 10.) Mirrored Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// 11.) Hollow Mirrored Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             if(i == n || j == 1 || j == i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
//}


// 12.) Inverted Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 13.) Hollow Inverted Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             if(i == 1 || j == 1 || j == n-i+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 14.) Inverted Mirrored Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 15.) Hollow Inverted Mirrored Right Triangle Star Pattern


//  #include<stdio.h>


//     int main(){
//         int n;
//         scanf("%d" , &n);
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 1; j <= i-1; j++)
//             {
//                 printf(" ");
//             }
//             for (int j = 1; j <= n-i+1; j++)
//             {
//                 if(i == 1 || j == 1 || j == n-i+1){
//                     printf("*");
//                 }
//                 else{
//                     printf(" ");
//                 }
//             }
//             printf("\n");
//         }
        
//         return 0;
//     }




// 16.) Pyramid Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 17.) Hollow Pyramid Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             if(i == n || j == 1 || j == 2*i-1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 18.) Inverted Pyramid Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*(n-i)+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// 19.) Hollow Inverted Pyramid Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*(n-i)+1; j++)
//         {
//             if(i == 1 || j == 1 || j == 2*(n-i)+1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 20.) Mirrored Right Triangle Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= n-1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 21.) Half Diamond Star Pattern


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= n-1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//Diamond Star Pattern

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= n-1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*(n-i)-1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// 22.) Hollow Diamond Star Pattern

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*i-1; j++)
//         {
//             if(i == n || j == 1 || j == 2*i-1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= n-1; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= 2*(n-i)-1; j++)
//         {
//             if(i == n-1 || j == 1 || j == 2*(n-i)-1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


//Right Arrow Star Pattern

// *****
//   ****
//     ***
//       **
//         *
//       **
//     ***
//   ****
// *****


// #include<stdio.h>


// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= n-i+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (int i = 1; i <= n-1; i++)
//     {
//         for (int j = 1; j <= n-i-1; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1; j <= i+1; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }



// print pattern

// For Input D

// A 

// B B

// C C C

// D D D D


// #include<stdio.h>

// int main(){
//     char c[100];
//     scanf("%s" , c);
//     int n = c[0]-64;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             printf("%c" , i+64);
//         }
//         printf("\n");
//     }
//     return 0;
// }





// print pattern 
//     1
//    232
//    34543
//     4567654


// #include<stdio.h>



// int main(){
//     int n;
//     scanf("%d" , &n);
    
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             printf(" ");
//         }
//         for (int j= 1; j <=i ; j++)
//         {
//             printf("%d" , i+j-1);
//         }
//         for (int j = i-1; j>=1; j--)
//         {
//             printf("%d" , i+j-1);
//         }
        
       
//         printf("\n");
        
//     }
    
//     return 0;
// }


#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    int i ,j ;
    for(i=1; i<=n; i++){
        for(j=1; j<=n-i;j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("*");
        }
        for(j=i-1; j>=1; j--){
            printf("*");
        }
        printf("\n");
    }

}