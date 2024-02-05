// Ques -1.Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA
// = 80%
// #include <stdio.h>
// int main()
// {
//     int basic_salary;
//     float gross_salary;
//     printf("Enter the basic salary of an employee: ");
//     scanf("%d", &basic_salary);
//     if(basic_salary <= 10000)
//     {
//         gross_salary = basic_salary + (basic_salary * 0.2) + (basic_salary * 0.8);
//     }
//     else if(basic_salary <= 20000)
//     {
//         gross_salary = basic_salary + (basic_salary * 0.25) + (basic_salary * 0.9);
//     }
//     else
//     {
//         gross_salary = basic_salary + (basic_salary * 0.3) + (basic_salary * 0.95);
//     }
//     printf("Gross Salary = %.2f", gross_salary);
//     return 0;
// }

// Ques- 2.Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.
//  #include <stdio.h>
//  int main()
//  {
//      int choice;
//      float area, radius, length, breadth, base, height;
//      printf("1. Area of Circle \t 2. Area of Rectangle \t 3. Area of Triangle \t 4. Exit \n");
//      printf("Enter your choice: ");
//      scanf("%d", &choice);
//      switch(choice)
//      {
//          case 1:
//              printf("Enter radius of circle: ");
//              scanf("%f", &radius);
//              area = 3.14 * radius * radius;
//              printf("Area of circle = %.2f", area);
//              break;
//          case 2:
//              printf("Enter length and breadth of rectangle: ");
//              scanf("%f %f", &length, &breadth);
//              area = length * breadth;
//              printf("Area of rectangle = %.2f", area);
//              break;
//          case 3:
//              printf("Enter base and height of triangle: ");
//              scanf("%f %f", &base, &height);
//              area = 0.5 * base * height;
//              printf("Area of triangle = %.2f", area);
//              break;

//         default:
//             printf("Invalid choice");
//     }
//     return 0;

// }

// Ques-3 Write a C program that takes n number of positive integers. Find the integer that appears the least number of times among the said integers. If there are multiple such integers, select the smallest one.
//  #include <stdio.h>
//  int main()
//  {
//      int n, i, j, count, min, min_count;
//      printf("Enter the number of elements: ");
//      scanf("%d", &n);
//      int arr[n];
//      printf("Enter the elements: ");
//      for(i=0; i<n; i++)
//      {
//          scanf("%d", &arr[i]);
//      }
//      min = arr[0];
//      min_count = 1;
//      for(i=0; i<n; i++)
//      {
//          count = 1;
//          for(j=i+1; j<n; j++)
//          {
//              if(arr[i] == arr[j])
//              {
//                  count++;
//              }
//          }
//          if(count < min_count)
//          {
//              min = arr[i];
//              min_count = count;
//          }
//          else if(count == min_count)
//          {
//              if(arr[i] < min)
//              {
//                  min = arr[i];
//              }
//          }
//      }
//      printf("The integer that appears the least number of times is %d", min);
//      return 0;
//  }

// 2nd method

// #include<stdio.h>

// int main(){
//     int n ;
//     scanf("%d" , &n);
//     int arr[n];
//     for(int i=0 ;i<n; i++){
//         scanf("%d"  , &arr[i]);
//     }
//     int min = arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     printf("Min element is: %d" , min);
//     return 0;
// }

// Ques-4 Write a C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters of the string between n1 and n2.
//  #include <stdio.h>
//  #include <string.h>
//  int main()
//  {
//      char str[100];
//      int n1, n2, i, j, temp;
//      printf("Enter the string: ");
//      scanf("%s", str);
//      printf("Enter the value of n1 and n2: ");
//      scanf("%d %d", &n1, &n2);
//      for(i=n1, j=n2; i<j; i++, j--)
//      {
//          temp = str[i];
//          str[i] = str[j];
//          str[j] = temp;
//      }
//      printf("The reversed string is %s", str);
//      return 0;
//  }

// Ques -5 Write a C program that accepts three integers from the user and find second largest number among these.

// #include <stdio.h>
// int main()
// {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if(a > b && a > c)
//     {
//         if(b > c)
//         {
//             printf("Second largest number is %d", b);
//         }
//         else
//         {
//             printf("Second largest number is %d", c);
//         }
//     }
//     else if(b > a && b > c)
//     {
//         if(a > c)
//         {
//             printf("Second largest number is %d", a);
//         }
//         else
//         {
//             printf("Second largest number is %d", c);
//         }
//     }
//     else
//     {
//         if(a > b)
//         {
//             printf("Second largest number is %d", a);
//         }
//         else
//         {
//             printf("Second largest number is %d", b);
//         }
//     }
//     return 0;
// }

// Ques-6 Write a C program in palindrome number

// #include <stdio.h>
// int main()
// {
//     int n, reversedInteger = 0, remainder, originalInteger;
//     printf("Enter an integer: ");
//     scanf("%d", &n);
//     originalInteger = n;
//     while( n!=0 )
//     {
//         remainder = n%10;
//         reversedInteger = reversedInteger*10 + remainder;
//         n /= 10;
//     }
//     if (originalInteger == reversedInteger)
//         printf("%d is a palindrome.", originalInteger);
//     else
//         printf("%d is not a palindrome.", originalInteger);
//     return 0;
// }

// Ques7 program to detrermine a candidate’s age is eligible for casting the vote or not

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     if(age >= 18)
//     {
//         printf("You are eligible for casting the vote");
//     }
//     else
//     {
//         printf("You are not eligible for casting the vote");
//     }
//     return 0;
// }

// Ques- 8 Given an array of n positive integers. Write a program to find the sum of maximum sum subsequence of the given array such that the integers in the subsequence are sorted in increasing order. For example, if input is {1, 101, 2, 3, 100, 4, 5}, then output should be 106 (1 + 2 + 3 + 100), if the input array is {3, 4, 5, 10}, then output should be 22 (3 + 4 + 5 + 10) and if the input array is {10, 5, 4, 3}, then output should be 10
//  #include <stdio.h>
//  int main()
//  {
//       int n, i, j, max;
//      printf("Enter the number of elements: ");
//      scanf("%d", &n);
//      int arr[n];
//      printf("Enter the elements: ");
//      for(i=0; i<n; i++)
//      {
//          scanf("%d", &arr[i]);
//      }
//      int sum[n];
//      for(i=0; i<n; i++)
//      {
//          sum[i] = arr[i];
//      }
//      for(i=1; i<n; i++)
//      {
//          for(j=0; j<i; j++)
//          {
//              if(arr[i] > arr[j] && sum[i] < sum[j] + arr[i])
//              {
//                  sum[i] = sum[j] + arr[i];
//              }
//          }
//      }
//      max = sum[0];
//      for(i=1; i<n; i++)
//      {
//          if(max < sum[i])
//          {
//              max = sum[i];
//          }
//      }
//      printf("The maximum sum of increasing subsequence is %d", max);
//      return 0;
//  }

// 2nd method

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%d" , &arr[i]);
//     }
//     int max = arr[0];
//     for(int i=1; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     int sum =0;

//     for(int i=0 ; i<n ; i++){
//         if(arr[i] != max){
//             sum += arr[i];
//         }
//     }
//     printf("Sum is %d" , sum);
//     return 0;
// }

// Next 21 question

// 1.) find  maximum between 2 numbers

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int arr[n];
//     for(int i=0; i<n; i++){
//        scanf("%d" , &arr[i]);
//     }
//     int max = arr[0];
//     for(int i=0 ; i<n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     printf("Max element is: %d" , max);

//     return 0;
// }

// 2.)Write a C program to find maximum between three numbers.
/**
 * C program to find maximum between three numbers using nested if
 */

// #include <stdio.h>

// int main()
// {
//     int num1, num2, num3, max;

//     /* Input three numbers from user */
//     printf("Enter three numbers: ");
//     scanf("%d%d%d", &num1, &num2, &num3);

//     if(num1 > num2)
//     {
//         if(num1 > num3)
//         {
//             /* If num1 > num2 and num1 > num3 */
//             max = num1;
//         }
//         else
//         {
//             /* If num1 > num2 but num1 > num3 is not true */
//             max = num3;
//         }
//     }
//     else
//     {
//         if(num2 > num3)
//         {
//             /* If num1 is not > num2 and num2 > num3 */
//             max = num2;
//         }
//         else
//         {
//             /* If num1 is not > num2 and num2 > num3 */
//             max = num3;
//         }
//     }

//     /* Print maximum value */
//     printf("Maximum among all three numbers = %d", max);

//     return 0;
// }

// 3.) Write a C program to check whether a number is negative, positive or zero.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n >=0){
//         printf("Positive" );
//     }
//     else if(n == 0){
//         printf("Zero ");
//     }
//     else{
//         printf("Negative " );
//     }
//     return 0;
// }

// 4.) Write a C program to check whether a number is divisible by 5 and 11 or not.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n % 5 == 0 && n%11 == 0){
//         printf("The number is divisible");
//     }
//     else{
//         printf("Not divisible");
//     }
//     return 0;
// }

// 5.) Write a C program to check whether a number is even or odd.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n%2 == 0){
//         printf("Even");
//     }
//     else{
//         printf("Odd");
//     }
//     return 0;
// }

// 6.) Write a C program to check whether a year is leap year or not.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n%4 == 0 &&  n%100 !=0 || n % 400 == 0){
//         printf("Leap year");
//     }
//     else{
//         printf("Not a leap year");
//     }
//     return 0;
// }

// 7) Write a C program to check whether a character is alphabet or not.

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c" , &c);
//     if((c>='a' && c<='z') || (c>='A' && c<='Z')){
//         printf("Alphabet");
//     }
//     else{
//         printf("Not Alphabet");
//     }
//     return 0;
// }

// 8.) Write a C program to input any alphabet and check whether it is vowel or consonant.

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c" , &c);
//     if( c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
//         printf("Vowel");
//     }
//     else if(c >='a' && c<='z' || c>='A' && c<='Z'){
//         printf("constant");
//     }
//     else{
//         printf("Not  a alphabet");
//     }

//     return 0;
// }

// 9.) Write a C program to input any character and check whether it is alphabet, digit or special character.

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c" , &c);
//     if( c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
//         printf("Vowel");
//     }
//     else if(c >='a' && c<='z' || c>='A' && c<='Z'){
//         printf("constant");
//     }
//     else if(c >= '0' && c <= '9'){
//         printf("Digit");
//     }
//     else{
//         printf("Special character");
//     }

//     return 0;
// }

// 10.) Write a C program to check whether a character is uppercase or lowercase alphabet.

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c" , &c);
//     if(c >= 'A' && c<='Z'){
//         printf("UpperCase");
//     }
//     else if(c >='a' && c<='z'){
//         printf("LowerCase");
//     }
//     else{
//         printf("Not a alphabet");
//     }
//     return 0;
// }

// 11.) Write a C program to input week number and print week day.
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     if (n == 1)
//     {
//         printf("Monday");
//     }
//     else if (n == 2)
//     {
//         printf("Tuesday");
//     }
//     else if (n == 3)
//     {
//         printf("Wednesday");
//     }
//     else if (n == 4)
//     {
//         printf("Thursday");
//     }
//     else if (n == 5)
//     {
//         printf("Friday");
//     }
//     else if (n == 6)
//     {
//         printf("Saturday");
//     }
//     else if (n == 7)
//     {
//         printf("Sunday");
//     }
//     else
//     {
//         printf("Not a day");
//     }

//     return 0;
// }

// 12.) Write a C program to input month number and print number of days in that month.

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
//         printf("Number of days is 31 ");
//     }
//     else if(n== 4 || n == 6 || n == 11){
//         printf("Number of days is 30");
//     }
//     else if(n == 2){
//         printf("Number of days id 28");
//     }
//     else{
//         printf("Not a correct number month");
//     }

//     return 0;
// }

// 13.) Write a C program to count total number of notes in given amount.

// #include<stdio.h>

// int main(){
//     int amt;
//     int note500, note100, note50, note20, note10, note5, note2, note1;
//     note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
//     printf("Enter amount: ");
//     scanf("%d"  , &amt);
//     if(amt >= 500){
//         note500 = amt/500;
//         amt -= note500 * 500;
//     }
//     if(amt >= 100){
//         note100  = amt/100;
//         amt -= note100*100;
//     }
//     if(amt >= 50){
//         note50 = amt/50;
//         amt -= note50*50;
//     }
//     if(amt >= 20){
//         note20  = amt/20;
//         amt -= note20*20;
//     }
//     if(amt >= 10){
//         note10  = amt/10;
//         amt -= note10*10;
//     }
//     if(amt >= 5){
//         note5  = amt/5;
//         amt -= note5*5;
//     }
//     if(amt >= 2){
//         note2  = amt/2;
//         amt -= note2*2;
//     }

//     if(amt >= 1){
//         note1  = amt;
//     }
//     printf("Total number of notes = \n");
//     printf("500 = %d\n", note500);
//     printf("100 = %d\n", note100);
//     printf("50 = %d\n", note50);
//     printf("20 = %d\n", note20);
//     printf("10 = %d\n", note10);
//     printf("5 = %d\n", note5);
//     printf("2 = %d\n", note2);
//     printf("1 = %d\n", note1);

//     return 0;
// }

// 14.) Write a C program to input angles of a triangle and check whether triangle is valid or not.
//  #include<stdio.h>

// int main(){
//     int n1 , n2 , n3;
//     scanf("%d %d %d" , &n1 , &n2  ,&n3);
//     int sum = n1 + n2 + n3;
//     if(sum == 180 && n1>0 && n2>0 && n3>0){
//         printf("Triangle is valid");
//     }
//     else{
//         printf("Not Valid");
//     }

//     return 0;
// }

// 15.) Write a C program to input all sides of a triangle and check whether triangle is valid or not.

// #include<stdio.h>

// int main(){
//     int n1 , n2 ,n3;
//     scanf("%d %d %d" , &n1 , &n2  ,&n3);
//     if(n1 + n2 > n3){
//         if(n1 + n3 > n2){
//             if(n2+ n3 > n1){
//                 printf("Triangle is Valid");
//             }
//         }
//     }
//     else
//     {
//         printf("Not Valid");
//     }

//     return 0;
// }

// 16.) Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

// #include<stdio.h>

// int main(){
//     int n1 , n2 ,n3;
//     scanf("%d %d %d" , &n1 , &n2  ,&n3);
//     // int sum = n1 + n2 + n3;
//     if(n1 == n2 && n2 == n3 && n1 == n3){
//         printf("Equilateral");
//     }
//     else if(n1 == n2 || n2 == n3 || n1 == n3){
//         printf("Isosceles");
//     }
//     else{
//         printf("Scalene");
//     }
//     return 0;
// }

// 17.) Write a C program to find all roots of a quadratic equation.

// #include<stdio.h>
// #include<math.h>

// int main(){
//     float a,b,c;
//     float root1 , root2 , imaginary;
//     float discriminant;
//     printf("Enter values of a,b,c of quadratic equation aX2+bX+c: ");
//     scanf("%f %f %f" , &a , &b ,&c);
//     discriminant = (b*b) - (4*a*c);
//     if(discriminant >0){
//         root1 = (-b + sqrt(discriminant)) / (2*a);
//         root2 = (-b - sqrt(discriminant)) / (2*a);
//         printf("Two distinct and real roots: %.2f and %.2f " , root1 , root2);
//     }
//     else if(discriminant == 0){
//         root1 = root2 = -b / (2*a);
//         printf("Two equal and real roots:  %.2f and %.2f  " , root1 , root2);
//     }
//     else{
//         root1 = root2 = -b / (2*a);;
//         imaginary = sqrt(-discriminant) / (2*a);
//         printf("Two distinct complex equa; roots: %.2f + i%.2f and %.2f + i%.2f " , root1 , imaginary , root2 , imaginary);

//     }
//     return 0;

// }

// 18.) C program to calculate profit or loss

// #include<stdio.h>

// int main(){
//     int cp;
//     int sp;
//     int sum ;
//     printf("Enter the selling price: ");
//     scanf("%d" , &sp);
//     printf("Enter the cost price: ");
//     scanf("%d" , &cp);
//     if(sp>cp){
//         sum = sp - cp;
//         printf("Profit: %d" , sum);
//     }
//     else{
//         sum  = sp - cp;
//         printf("Loss: %d" , sum);
//     }

//     return 0;
// }

// 19.)Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

// #include<stdio.h>

// int main(){
//     int P , C , B , M , Co;
//     float Percentage;
//     printf("Input marks of five subjects: ");
//     scanf("%d%d%d%d%d" , &P , &C , &B  , &M , &Co);
//     scanf("%f" , &Percentage);
//     Percentage = (P + C + B + M + Co) / 5.0;
//     if(Percentage >= 90){
//         printf("Grade A");
//     }
//     else if(Percentage >= 80){
//         printf("Grade B");
//     }
//     else if(Percentage >= 70){
//         printf("Grade C");
//     }
//     else if(Percentage >= 60){
//         printf("Grade D");
//     }
//     else if(Percentage >= 40){
//         printf("Grade E");
//     }
//     else if(Percentage < 40){
//         printf("Grade F");
//     }
//     else{
//         printf("Failed");
//     }

//     return 0;
// }

// 20.) Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// #include<stdio.h>

// int main(){
//     int basic_salary;
//     float gross_salary;
//     printf("Input basic salary of an employee: ");
//     scanf("%d" , &basic_salary);
//     if(basic_salary <= 10000){
//         gross_salary = basic_salary + (basic_salary*0.2) + (basic_salary*0.8);
//     }
//     else if(basic_salary >= 10001 && basic_salary <= 20000){
//         gross_salary = basic_salary + (basic_salary*0.25) + (basic_salary*0.9);
//     }
//     else if(basic_salary >= 20001){
//           gross_salary = basic_salary + (basic_salary*0.25) + (basic_salary*0.9);
//     }
//     else{
//         printf("Invalid");
//     }
//     printf("Gross Salary %.2f" , gross_salary);

//     return 0;
// }

// print pattern
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

// #include <stdio.h>

// int main()
// {

//     int n;
//     scanf("%d", &n);
//     int len = n*2 - 1;
//     for(int i=0;i<len;i++){
//         for(int j=0;j<len;j++){
//             int min = i < j ? i : j;
//             min = min < len-i ? min : len-i-1;
//             min = min < len-j-1 ? min : len-j-1;
//             printf("%d ", n-min);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Another solution for
// print pattern
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

// swap 2 numbers using bitwise operator

// #include<stdio.h>

// int main(){
//     int a = 5;
//     int b = 10;
//     a = a^b;
//     b = a^b;
//     a = a^b;
//     printf("a = %d and b = %d" , a , b);
//     return 0;
// }

// Pattern
// 7 7 7 7 7 7 7
// 7 6       2 7
// 7   5   3   7
// 7     4     7
// 7   5   3   7
// 7 6       2 7
// 7 7 7 7 7 7 7

// #include<stdio.h>

// int main(){
//     int n = 7;
//     int i , j;
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n; j++){
//             if(i==1 || i==n || j==1 || j==n){
//                 printf("%d " , n);
//             }
//             else if(i==j){
//                 printf("%d " , n-i+1);
//             }
//             else if(i+j==n+1){
//                 printf("%d " , n-j+1);
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//C is a high level or Low level Language ? High level
// C is a procedural or object oriented Language
// C is a structured or unstructured Language
// C is a compiled or interpreted Language
// C is a case sensitive or case insensitive Language
// C is a static or dynamic Language
// C is a general purpose or special purpose Language
// C is a portable or non portable Language
// C is a single threaded or multi threaded Language

// C is a single user or multi user Language

// How many keywords are there in Standard C programming language ? 32

// Process in which source code is combined with object code is termed as :
// Linking

// For 32 bits environment, size of ‘int’ data type is :
// 4 bytes

// In C, the names of variables, functions, labels, and various other user-defined items are :
// Identifiers

// . Variables that are declared inside a function are :
// Local variables

// Variables with ____ keyword are only declared not defined.
// extern

// . Which operator is used to return the length of the variables in bytes ?
// sizeof

// Which header file can be used to define i/o function prototypes and macros?
// stdio.h

// #include <stdio.h>
// int main ()
// {
//   int x, y = 5, z = 5;
//   x = y == z;
//   printf("%d", x);
//   getchar();
//   return 0;
// }

//  #include <stdio.h>
// // Assume base address of "Geeks Quiz" to be 1000
// int main ()
// {
// printf (5 + "GeeksQuiz");
// return 0;
// }

//  #include <stdio.h>
// #if X == 3
// 	#define Y 3
// #else
// 	#define Y 5
// #endif

// int main ()
// {	printf ("%d", Y);
// 	return 0;
// }

// #include <stdio.h>
// int main()
// {
// 	int i = 5;
// 	printf("%d %d %d", i++, i++, i++);
// 	return 0;
// }

// #include<stdio.h> 
// int main()
// {
//      char ch1 = 'G', ch2 = 10;
//     int i = ch1 - 'A';
//     printf("%d\n", i);
//     return 0;
// }



//5 Marks :

// Question 1:
// BMI Categorizing

// The Body Mass Index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height ( in feet). Write a program that receives weight and height, calculates the BMI, and reports the BMI category as per the following table:

// BMI Category	BMI
	
// Starvation	< 15
// Anorexic	15.1 to 17.5
// Underweight	17.6 to 18.
// Ideal	18.6 to 24.9
// Overweight	25 to 25.9
// Obese	30 to 30.9
// Morbidly Obese	>= 40



// #include<stdio.h>

// int main(){
//     float weight , height ; 
//     printf("Enter weight and height: ");
//     scanf("%f %f" , &weight , &height);
//     float bmi = weight/height*2;
//     printf("BMI = %f" , bmi);
//     if(bmi < 15){
//         printf("\nStarvation");
//     }
//     else if(bmi >= 15.1 && bmi <= 17.5){
//         printf("\nAnorexic");
//     }
//     else if(bmi >= 17.6 && bmi <= 18.5){
//         printf("\nUnderweight");
//     }
//     else if(bmi >= 18.6 && bmi <= 24.9){
//         printf("\nIdeal");
//     }
//     else if(bmi >= 25 && bmi <= 25.9){
//         printf("\nOverweight");
//     }
//     else if(bmi >= 30 && bmi <= 30.9){
//         printf("\nObese");
//     }
//     else if(bmi >= 40){
//         printf("\nMorbidly Obese");
//     }
//     return 0;
    
// }

//#include<stdio.h>
//function to calculate BMI index
// float BMI(float weight, float height) {
//    return weight/height*2;
// }
// int main() {
//    float weight=75;
//    float height=5.9;
//    float bmi = BMI(weight,height);
//    printf("BMI index is : %.2f ",bmi);
//    return 0;
// }


// Question 2:
// Swapping Without Variable

// Write a program to swap two numbers without using a third variable.


// #include<stdio.h>

// int main(){
//     int a = 25 , b = 50 , c = 75;
//     printf("Before Swap : a = %d, b =%d and c = %d\n" , a , b , c);
//     a = a+b+c;
//     b = a-(b+c);
//     c = a-(b+c);
//     a = a-(b+c);
//     printf("After Swap: a = %d, b = %d and c = %d" , a , b , c);
//     return 0;
// }



// Question 1:
// Gift Coupon Check

// Write a program to check whether a person is eligible for gift coupon or not. The person is eligible for gift coupon if the sum of digits of his/her mobile number is divisible by 5.

// #include<stdio.h>

// int main(){
//     int num;
//     scanf("%d" , &num);
//     int sum = 0 ;
//     int n=num;
//     while(n != 0){
//         int x = n % 10;
//         sum = sum + x;
//         n = n / 10;
//     }
//     //printf("Sum is %d" , sum);
//     if(sum % 5 == 0){
//         printf("Bill Number %d is Eligible For Gift Coupon " , num);
//     }
//     else{
//         printf("Bill Number %d Not Eligible For Gift Coupon ",  num);
//     }


//     return 0;
// }



// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int sum = 0 ;
//     for(int i=0; i<n; i++){
//         int x;
//         scanf("%d" , &x);
//         sum = sum + x;
//     }
//     printf("Sum is %d" , sum);
//     if(sum % 5 == 0){
//         printf("\nEligible For Gift Coupon ");
//     }
//     else{
//         printf("\nNot Eligible For Gift Coupon ");
//     }
    
// }

// Question 2:
// Subject Grading


// #include<stdio.h>

// int main(){
//     int P , C , B , M , Co;
//     float Percentage;
//     printf("Input marks of five subjects: ");
//     scanf("%d%d%d%d%d" , &P , &C , &B  , &M , &Co);
//     scanf("%f" , &Percentage);
//     Percentage = (P + C + B + M + Co) / 5.0;
//     if(Percentage >= 90){
//         printf("Grade A");
//     }
//     else if(Percentage >= 80){
//         printf("Grade B");
//     }
//     else if(Percentage >= 70){
//         printf("Grade C");
//     }
//     else if(Percentage >= 60){
//         printf("Grade D");
//     }
//     else if(Percentage >= 40){
//         printf("Grade E");
//     }
//     else if(Percentage < 40){
//         printf("Grade F");
//     }
//     else{
//         printf("Failed");
//     }

//     return 0;
// }


// Question 1:

// Write a C program to input a character from user and check whether the given character is alphabet or not.

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c" , &c);
//     if(c >= 'a' && c<='z' || c >='A' && c<='Z'){
//         printf("Alphabet");
//     }
//     else{
//         printf("Not a Alphabet");
//     }

//     return 0;
// }


// Question 2:

// Write a C program to input any number from user and check whether the given number is positive, negative or zero

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n >=0){
//         printf("Positive" );
//     }
//     else if(n == 0){
//         printf("Zero ");
//     }
//     else{
//         printf("Negative " );
//     }
//     return 0;
// }


// Question 3:
// Write a C program to input character from user and check whether character is uppercase or lowercase alphabet

// #include<stdio.h>

// int main(){
//     char c;
//     scanf("%c" , &c);
//     if( c >='A' && c<='Z'){
//         printf("UpperCase");
//     }
//     else if(c >= 'a' && c<='z'){
//         printf("Lowecase");
//     }
//     else{
//         printf("Not a Alphabet");
//     }

//     return 0;
// }

// Question 4:
// Write a C program to enter month number between (1-12) and print number of days in month

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     if(n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12){
//         printf("Number of days is 31 ");
//     }
//     else if(n== 4 || n == 6 || n == 11){
//         printf("Number of days is 30");
//     }
//     else if(n == 2){
//         printf("Number of days id 28");
//     }
//     else{
//         printf("Not a correct number month");
//     }

//     return 0;
// }



// Coding: 10 Marks
//  Question 1:

// Write a C program to input basic salary of an employee and calculate gross salary according to given conditions.
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%

// #include <stdio.h>
// int main()
// {
//     int basic_salary;
//     float gross_salary;
//     printf("Enter the basic salary of an employee: ");
//     scanf("%d", &basic_salary);
//     if(basic_salary <= 10000)
//     {
//         gross_salary = basic_salary + (basic_salary * 0.2) + (basic_salary * 0.8);
//     }
//     else if(basic_salary <= 20000)
//     {
//         gross_salary = basic_salary + (basic_salary * 0.25) + (basic_salary * 0.9);
//     }
//     else
//     {
//         gross_salary = basic_salary + (basic_salary * 0.3) + (basic_salary * 0.95);
//     }
//     printf("Gross Salary = %.2f", gross_salary);
//     return 0;
// }

// Question 2:

// Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.


// #include<stdio.h>

// int main(){
//     //int n;
//     int unit;
//    // float rs;
//     float totalCost , Cost , subcharge;
//     printf("Input total units consumed: ");
//     scanf("%d" , &unit);
//     if(unit <= 50){
//       Cost = unit*0.50;
//     }
//     else if(unit<=150){
//         Cost = 25+ (unit-50)*0.75;
//     }
//     else if(unit<=250){
//         Cost = 100+ (unit-150)*1.20;
//     }
//     else{
//         Cost = 220+ (unit-250)*1.50;
//     }
//     subcharge = Cost*0.20;
//     totalCost = Cost + subcharge;
//     printf("Electricity Bill = Rs. %.2f" , totalCost);

//     return 0;
// }


// Q3. Write a program to accept customer name and sale details. Sale detail is accepted as quantity of sale and rate of each quantity (the rate of each product can be set as per your choice). Amount of each sale is calculated. Sale detail of three products need to be accepted. Final sale amount has to be calculated. Based on the final sale amount discount is given and the final bill amount has to be printed after applying discount. Discount details are:
// 	Sale amount greater than 2500, then 20% discount
// 	Sale amount less than 2500, then 5% discount

    


// #include<stdio.h>
// #include<string.h>
// #define SHIRT_PRICE 500
// #define PANTS_PRICE 800
// #define SOCKS_PRICE 300
// #define BELTS_PRICE 1000



// // void price(){
// //     printf("Rate of Products -> Shirts: Rs.%d,  Pants: Rs. %d , Socks: Rs. %d,  Belts: Rs. %d" , SHIRT_PRICE , PANTS_PRICE , SOCKS_PRICE , BELTS_PRICE);
// // }
// int  calculation(int a , int b , int c , int d){
//     int ans;
//     ans = a*SHIRT_PRICE + b*PANTS_PRICE + c*SOCKS_PRICE + d*BELTS_PRICE;
//     return ans;
// }


// void discount(int a , int b , int c , int d){
// int items = a+b+c+d;
// int price = calculation(a,b,c,d);
// if(items<3){
// printf("Total Discount : NONE\n");
// printf("Final sale amount %d\n", price);
// return;
// } 
    
//     int discount;
//     if(price > 2500){
//         price  =  price*0.80;
//         discount=20;
//     }
//     else if(price < 2500){
//         price  = price*0.95;
//         discount=5;
//     }

// }

// int main(){ 
//    char First_name[100];
//     int shirts , pants , socks ,belts;
//     printf("Enter the name: ");
//     scanf("%s" , First_name);
//     printf("Enter the number of shirt, pant, sock and belt: ");
//     scanf("%d %d %d %d" ,&shirts,&pants,&socks,&belts);
//     printf("Rate of Products -> Shirts: Rs.%d,  Pants: Rs. %d , Socks: Rs. %d,  Belts: Rs. %d\n" , SHIRT_PRICE , PANTS_PRICE , SOCKS_PRICE , BELTS_PRICE);
//     printf("Number of Products -> %d Shirts, %d Pants, %d Socks, %d Belts\n" ,  shirts , pants , socks , belts );
//     printf("Name:  %s\n" , First_name);
//     int p=calculation(shirts , pants , socks , belts);
//     printf("Toatl price : %d\n", p);

//     discount(shirts,pants,socks,belts);

    

//     return 0;
// }

// Question 4:
// A mirror manufacturing company which is creating under 10000 mirrors a day, has the serial number which is printed on the mirrors itself is written backwards. A Serial number reader is used to scan such mirrors which in turn reverses the number itself.
// Valid Number
// Write a Program for the Serial No. reader to input a number, output it’s reversed number and check whether it is valid or not. 
// Note: A valid number is a number whose reversed number is not exactly divisible by input no. For example 9599, 2456 are all valid numbers whereas 999, 66, 2002, 7007 are not valid numbers.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d" , &n);
//     int temp = n;
//     int rev = 0;
//     while(temp>0){
//         int last = temp%10;
//         rev = rev*10 + last;
//         temp = temp/10;
//     }
//     printf("Reversed number is %d\n" , rev);
//     if(rev%n == 0){
//         printf("Not a valid number\n");
//     }
//     else{
//         printf("Valid number\n");
//     }
//     return 0;
// }



// 1.What will be the output of the following C code?

// #include <stdio.h>
// void main()
// {
// int x = 5;
// if (x < 1)
// {
// printf("hello");
// }
// if (x == 5)
// {
// printf("hi");
// }
// else
// {
// printf("no");
// }
// }

// output 
// hi

// 2.What will be the output of the following C code?
// #include <stdio.h>
// void main()
// {
// int x = 5;
// if (x);
// printf("hello");   
// }

// output
// hello


// 3.What will be the output of the following C code?

// #include <stdio.h>
// void main()
// {
// int x = 0;
// if (x == 0)
// printf("hi");
// else
// printf("how are u");
// printf("hello");
// }

// output
// hi


// 4.What will be the output of the following C code?
// #include <stdio.h>
// void main()
// {
// int x = 5;
// if (true);
// printf("hello");
// }

// output
// hello

// 5.What will be the output of the following C code?

// #include <stdio.h>
// void main()
// {
// int x = 5;
// if (x < 1);
// printf("Hello");
// }

// output
// nothing



// 6.What will be the output of the following C code? (Assuming that we have entered the value 1 in the standard input)

// #include <stdio.h>
// void main()
// {
// double ch;
// printf("enter a value between 1 to 2:");
// scanf("%lf", &ch);
// switch (ch)
// {
// case 1:
// printf("1");
// break;
// case 2:
// printf("2");
// break;
// }
// }

// output
// 1


// 7.What will be the output of the following C code? (Assuming that we have entered the value 1 in the standard input)

// #include <stdio.h>
// void main()
// {
// char *ch;
// printf("enter a value between 1 to 3:");
// scanf("%s", ch);
// switch (ch)
// {
// case "1":
// printf("1");
// break;
// case "2":
// printf("2");
// break;
// }
// }

// output
// error


// 8. What will be the output of the following C code? (Assuming that we have entered the value 1 in the standard input)

// #include <stdio.h>
// void main()
// {
// int ch;
// printf("enter a value between 1 to 2:");
// scanf("%d", &ch);
// switch (ch)
// {
// case 1:
// printf("1\n");
// default:
// printf("2\n");
// }
// }

// output
// 1
// 2


// 9. What will be the output of the following C code? (Assuming that we have entered the value 1 in the standard input)

// #include <stdio.h>
// void main()
// {
// int ch;
// printf("enter a value between 1 to 2:");
// scanf("%d", &ch);
// switch (ch, ch + 1)
// {
// case 1:
// printf("1\n");
// break;
// case 2:
// printf("2");
// break;
// }
// }

// output
// error


// 10.what will be the output of the following C code? 
// #include<stdio.h>
// int main()
// {
// signed char chr;
// chr = 128;
// printf("%d\n",chr);
// return 0;
// }

// output
// -128

//  In which numbering system can the binary number 1011011111000101 be easily converted to?

// decimal


// What is the operator used to make 1's / One's compliment ?

// ~ 
// . What is the result of 0110 & 1100 ?

// 0100

//  What is the output of Bitwise OR operation | on (0110 | 1100) ?

// 1110


//  How are String represented in memory in C?

// as an array of characters

// What is the size of int data type (in bytes) in C?

// 4

// What will be the output of the following code:
// int a = 3;
//     int res = a++ + ++a + a++ + ++a;
//     printf("%d", res);

// output
// 16

//  What will be the output of the following code:
// int a = -10 ;
// printf( "%d", a >> 4 );

// output
// -1


// 1.C preprocessor is conceptually the first step during compilation.
// 2.C preprocessor is a program that is run before the compiler.
// 3.C preprocessor is a program that is run after the compiler.
// 4.C preprocessor is a program that is run during the compilation.

// 2


// The preprocessor provides the ability for 
// 1.conditional compilation
// 2.include files
// 3.macros
// 4.all of the above

// 4

// 3.Which among the following is odd one out?
// 1.#include
// 2.#define
// 3.#undef
// 4.#ifdef

// 3


// 4.What is the output of this C code?

//     int main()
//     {
//         int i = 5;
//         int l = i / -4;
//         int k = i % -4;
//         printf("%d %d\n", l, k);
//         return 0;
//     }

// output
// -1 -3


// 5.Which of the following is a User-defined data type?
// 1.int
// 2.float
// 3.char
// 4.struct

// 4


//Infinite loop for while and do while

// 1.while(1)



// 2.do
// {
// }while(1)

// 1
// #include<stdio.h>

// int main(){
//     while(1){
//         printf("Hello World ");
//     };
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     do{
//         printf("Hello");
//     }
//     while(1);
//     return 0;
// }




// print pattern
// *
// * *
// * * *
// * * * *


// #include<stdio.h>

// int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

//print pyramid pattern


// #include<stdio.h>

// int main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }






//Check String is Palindrome 

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     int i,j;
//     printf("Enter a string: ");
//     gets(str);
//     j=strlen(str)-1;
//     for(i=0;i<j;i++,j--){
//         if(str[i]!=str[j]){
//             printf("Not Palindrome");
//             break;
//         }
//     }
//     if(i>=j){
//         printf("Palindrome");
//     }
//     return 0;
// }

//convert string into uppercase using pointer  another method 


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     int i;
//     printf("Enter a string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         if(str[i]>=97 && str[i]<=122){
//             str[i]=str[i]-32;
//         }
//     }
//     printf("Uppercase string is: %s",str);
//     return 0;
// }


// Input welcome 
// Output ewclmoe

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100];
//     int i,j;
//     printf("Enter a string: ");
//     gets(str);
//     for(i=0,j=strlen(str)-1;i<j;i++,j--){
//         char temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//     }
//     printf("Reverse string is: %s",str);
//     return 0;
// }




