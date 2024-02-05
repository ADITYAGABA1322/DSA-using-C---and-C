// 1.) Write a C program to find cube of any number using function. in c

// #include<stdio.h>


// void cube(int n){
//     int c;
//     c = n*n*n;
//     printf("The cube of %d is %d", n, c);
// }

// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     cube(n);


//     return 0;
// }


// 2.) Write a C program to find diameter, circumference and area of circle using functions.


// #include<stdio.h>

// void diameter(int  r){
//     int d;
//     d = 2*r;
//     printf("The diameter of circle is %d\n", d);

// }

// void circumference(int r){
//     float c;
//     c = 2*3.14*r;
//     printf("The circumference of circle is %f\n", c);
// }
// void area(int r){
//     float a;
//     a = 3.14*r*r;
//     printf("The area of circle is %f", a);
// }

// int main(){
//     int r;
//     printf("Enter the radius of circle: ");
//     scanf("%d", &r);
//     diameter(r);
//     circumference(r);
//     area(r);

    
//     return 0;
// }

// 3.) Write a C program to find maximum and minimum between two numbers using functions.


// #include<stdio.h>

// void max(int a, int b){
//     if(a>b){
//         printf("The maximum number is %d\n", a);
//     }
//     else{
//         printf("The maximum number is %d\n", b);
//     }
// }

// void min(int a , int b){
//     if(a<b){
//         printf("The minimum number is %d\n", a);
//     }
//     else{
//         printf("The minimum number is %d\n", b);
//     }
// }

// int main(){
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     max(a, b);
//     min(a, b);
    
//     return 0;
// }



// 4.) C program to check even or odd using functions


// #include<stdio.h>

// void even(int n){
//     if(n%2==0){
//         printf("The number is even");
//     }
//     else{
//         printf("The number is odd");
//     }
// }


// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     even(n);

//     return 0;
// }


// 5.) C program to check prime, armstrong, perfect number using functions


// #include<stdio.h>

// void prime(int n){
//     int i, count=0;
//    for (int i = 0; i <= n ; i++)
//    {
//         if(n%i==0){
//             count++;
//         }
        
//    }
//     if(count==2){
//          printf("The number is prime\n");
//     }
//     else{
//          printf("The number is not prime\n");
//     }
   
// }

// void armstrong(int n){
//     int sum = 0 , ld , temp;
//     temp = n;
//     while(n>0){
//         ld = n%10;
//         sum = sum + (ld*ld*ld);
//         n = n/10;
//     }

//     if(sum==temp){
//         printf("The number is armstrong\n");
//     }
//     else{
//         printf("The number is not armstrong\n");
//     }

// }


// void perfect(int n){
//     int sum=0, i;
//     for (int i = 0; i < n; i++)
//     {
//         if(n%i==0){
//             sum = sum + i;
//         }
//     }
//     if(sum==n){
//         printf("The number is perfect\n");
//     }
//     else{
//         printf("The number is not perfect\n");
//     }
    
// }


// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     prime(n);
//     armstrong(n);
//     perfect(n);

//     return 0;
// }


// 6.) Write a C program to find all prime numbers between given interval using functions.

// #include<stdio.h>

// void prime(int lowerlimit , int upperlimit){
//    for (int i = lowerlimit; i <= upperlimit; i++)
//    {
//         int count  = 0;
//         for(int j=0; j<=i; j++){
//             if(i%j==0){
//                 count++;
//             }

//         }
//         if(count==2){
//             printf("%d ", i);
//         }

//    }
   
    
// }

// int main(){
    
//     int lowerlimit, upperlimit;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lowerlimit);
//     printf("Enter the upper limit: ");
//     scanf("%d", &upperlimit);
//     prime(lowerlimit, upperlimit);

//     return 0;
// }


//7.) C program to print all strong numbers between given interval using function



// #include<stdio.h>

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     return fact;
// }


// void strong(int lowerlimit , int upperlimit){
//     for(int i=lowerlimit; i<=upperlimit; i++){
//         int sum = 0, temp, ld;
//         temp = i;
//         while(temp >0){
//             ld = temp%10;
//             sum = sum + factorial(ld);
//             temp = temp/10;
//         }
//         if(sum==i){
//             printf("%d ", i);
//         }
//     }
    
// }

// int main(){
//     int lowerlimit, upperlimit;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lowerlimit);
//     printf("Enter the upper limit: ");
//     scanf("%d", &upperlimit);
//     strong(lowerlimit, upperlimit);

//     return 0;
// }



// 8.) C program to print all armstrong numbers between given interval using function


// #include<stdio.h>

// void armstrong(int lowerlimit , int upperlimit){
//     for(int i=lowerlimit; i<=upperlimit; i++){
//         int sum = 0 , ld , temp;
//         temp = i;
//         while(temp >0){
//             ld = temp%10;
//             sum = sum + (ld*ld*ld);
//             temp = temp/10;
//         }

//         if(sum==i){
//             printf("%d ", i);
//         }
//     }
    
// }



// int main(){
//     int lowerlimit, upperlimit;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lowerlimit);
//     printf("Enter the upper limit: ");
//     scanf("%d", &upperlimit);
//     armstrong(lowerlimit, upperlimit);
//     return 0;
// }


// 9.) Write a C program to print all perfect numbers between given interval using functions.


// #include<stdio.h>

// void perfect(int lowerlimit , int upperlimit){
//     for(int i=lowerlimit; i<=upperlimit; i++){
//         int sum=0;
//         for(int j=1; j<i; j++){
//             if(i%j==0){
//                 sum = sum + j;
//             }
//         }
//         if(sum==i){
//             printf("%d ", i);
//         }
//     }
    
// }

// int main(){
//     int lowerlimit, upperlimit;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lowerlimit);
//     printf("Enter the upper limit: ");
//     scanf("%d", &upperlimit);
//     perfect(lowerlimit, upperlimit);

//     return 0;
// }


// 10.) Write a C program to find power of any number using recursion.


// #include<stdio.h>

// int pow(int base, int power){
//     if(power!=0){
//         return (base*pow(base, power-1));
//     }
//     else{
//         return 1;
//     }
// }


// int main(){
//     int base, power;
//     printf("Enter the base: ");
//     scanf("%d", &base);
//     printf("Enter the power: ");
//     scanf("%d", &power);
//     int result = pow(base, power);
//     printf("The result is: %d", result);

//     return 0;
// }


// 11.) Write a C program to print all natural numbers between 1 to n using recursion.


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     for(int i=1; i<=n; i++){
//         printf("%d ", i);
//     }

//     return 0;
// }


// 12.) Write a C program to print all even or odd numbers in given range using recursion.


// #include<stdio.h>

// void even(int lowerlimit, int upperlimit){
//     if(lowerlimit<=upperlimit){
//         if(lowerlimit%2==0){
//             printf("%d ", lowerlimit);
//         }
//         even(lowerlimit+1, upperlimit);
//     }
// }

// void odd(int lowerlimit, int upperlimit){
//     if(lowerlimit<=upperlimit){
//         if(lowerlimit%2!=0){
//             printf("%d ", lowerlimit);
//         }
//         odd(lowerlimit+1, upperlimit);
//     }
// }


// int main(){
//     int lowerlimit, upperlimit;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lowerlimit);
//     printf("Enter the upper limit: ");
//     scanf("%d", &upperlimit);
//     even(lowerlimit, upperlimit);
//     odd(lowerlimit, upperlimit);

//     return 0;
// }



// 13.) Write a C program to find sum of all natural numbers between 1 to n using recursion.


// #include<stdio.h>


// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     printf("The sum is %d" , sum);

//     return 0;
// }

// 14.) Write a C program to find sum of all even or odd numbers in given range using recursion.



// #include<stdio.h>

// int main(){
//     int lowerlimit, upperlimit;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lowerlimit);
//     printf("Enter the upper limit: ");
//     scanf("%d", &upperlimit);
//     int sum = 0;
//     for(int i=lowerlimit; i<=upperlimit; i++){
//         if(i%2==0){
//             sum = sum + i;
//         }
//     }
//     printf("The sum is %d" , sum);



//     return 0;
// }



// 15.) Write a C program to find reverse of any number using recursion.

// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int reverse = 0;
//     while(n>0){
//         int ld = n%10;
//         reverse = reverse*10 + ld;
//         n = n/10;
//     }
//     printf("The reverse is %d" , reverse);

//     return 0;
// }



// 16.) Write a C program to check whether a number is palindrome or not using recursion.



// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int reverse = 0;
//     int temp = n;
//     while(temp>0){
//         int ld = temp%10;
//         reverse = reverse*10 + ld;
//         temp = temp/10;
//     }
//     if(reverse==n){
//         printf("The number is palindrome");
//     }
//     else{
//         printf("The number is not palindrome");
//     }

//     return 0;
// }



// 17.) Write a C program to find sum of digits of a number using recursion.


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int sum = 0;
//     while(n>0){
//         int ld = n%10;
//         sum = sum + ld;
//         n = n/10;
//     }
//     printf("The sum is %d" , sum);

//     return 0;
// }



// 18.) Write a C program to find factorial of any number using recursion.


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact*i;
//     }
//     printf("The factorial is %d" , fact);
//     return 0;
// }




// 19.) Write a C program to generate nth Fibonacci term using recursion.


// #include<stdio.h>

// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);
//     int a = 0;
//     int b = 1;
//     int c;
//     for(int i=1; i<=n; i++){
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     printf("The fibonacci number is %d" , a);
//     return 0;
// }



// 20.)Write a C program to find GCD (HCF) of two numbers using recursion.


// #include<stdio.h>

// int main(){
//     int a, b;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     int gcd;
//     for(int i=1; i<=a && i<=b; i++){
//         if(a%i==0 && b%i==0){
//             gcd = i;
//         }
//     }
//     printf("The gcd is %d" , gcd);


//     return 0;
// }


// 21.)  Write a C program to find LCM of two numbers using recursion.



// #include<stdio.h>

// int main(){
//     int a, b;
//     printf("Enter the first number: ");
//     scanf("%d", &a);
//     printf("Enter the second number: ");
//     scanf("%d", &b);
//     int lcm;
//     for(int i=1; i<=a && i<=b; i++){
//         if(a%i==0 && b%i==0){
//             lcm = (a*b)/i;
//         }
//     }
//     printf("The lcm is %d" , lcm);
//     return 0;
// }



// 22.) Write a C program to display all array elements using recursion.


// #include<stdio.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     for(int i=0; i<n; i++){
//         printf("%d " , arr[i]);
//     }


//     return 0;
// }


// 23.) Write a C program to find sum of elements of array using recursion.


// #include<stdio.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum + arr[i];
//     }
//     printf("The sum is %d" , sum);

//     return 0;
// }

//24.) Write a C program to find maximum and minimum elements in array using recursion.


// #include<stdio.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n = 5;
//     int max = arr[0];
//     int min = arr[0];
//     for(int i=0; i<n; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//         if(arr[i]<min){
//             min = arr[i];
//         }
//     }
//     printf("The maximum is %d\n" , max);
//     printf("The minimum is %d\n" , min);
//     return 0;
// }





// 25.) Write a C program Wap to shift all 0's first and then all 1's in an unsorted array of 0's and 1's




// #include<stdio.h>

// int main(){
//     int arr[5] = {1, 0, 1, 0, 1};
//     int n = 5;
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i]==0){
//             count++;
//         }
//     }
//     for(int i=0; i<count; i++){
//         arr[i] = 0;
//     }
//     for(int i=count; i<n; i++){
//         arr[i] = 1;
//     }
//     for(int i=0; i<n; i++){
//         printf("%d " , arr[i]);
//     }
    

//     return 0;
// }





// #include<stdio.h>

// int main(){
//     int n1, n2, n3, n4;
//     scanf("%d.%d.%d.%d" ,&n1 ,&n2 , &n3, &n4);
//     int ip = n1;
    
//     if(ip>=0 && ip<=127){
//         printf("Class A IP Address");
//     }
//     else if(ip>=128 && ip<=191){
//         printf("Class B IP Address");
//     }
//     else if(ip>=192 && ip<=223){
//         printf("Class C IP Address");
//     }
//     else if(ip>=224 && ip<=239){
//         printf("Class D IP Address");
//     }
//     else if(ip>=240 && ip<=255){
//         printf("Class E IP Address");
//     }
//     else{
//         printf("Invalid IP Address");
//     }
    
//     return 0;
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     int num;
//     scanf("%d", &num);
//     int sum = 0;

//     // Convert num to a string so we can loop through each digit
//     char num_str[20];
//     sprintf(num_str, "%d", num);

//     // Skip over any leading zeros
//     int i = 0;
//     while (num_str[i] == '0') {
//         i++;
//     }

//     // Loop through each digit of the number
//     for (; i < strlen(num_str); i++) {
//         int digit = num_str[i] - '0';
//         // If i is even, add the digit to the sum
//         if (i % 2 == 0) {
//             sum += digit;
//         }
//         // If i is odd, subtract the digit from the sum
//         else {
//             sum -= digit;
//         }
//     }

//     // If the input number is negative, flip the sign of the sum
//     if (num < 0) {
//         sum = -sum;
//     }

//     // Print the final sum
//     printf("%d\n", sum);

//     return 0;
// }


