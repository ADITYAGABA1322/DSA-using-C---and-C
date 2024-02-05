// Looping - While loop, for loop in c problems

// 1.) Write a C program to print all natural numbers from 1 to n. – using while loop


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d\n", i);
//     }
    
    
    
//     return 0;
// }


// 2.) C program to print natural numbers in reverse from n to 1


//  #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     for(int i=n; i>=1 ; i--){
//         printf("%d\n" , i);
//     }
//     return 0;
// }


//3.) C program to print alphabets from a to z

// #include<stdio.h>

// int main(){
  
//     for (char c = 'a'; c <='z'; c++)
//     {
//         printf("%c\n" , c);
//     }
    
//     return 0;
// }


// 4.) C program to print all even numbers from 1 to n


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <= n; i++)
//     {
//         if(i%2 == 0){
//             printf("%d\n" , i);
//         }
        
//     }
    
//     return 0;
// }

// 5.) Write a C program to print all odd number between 1 to 100.


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     for (int i = 1; i <=n; i++)
//     {
//         if(!(i%2 == 0)){
//             printf("%d\n" , i);
//         }
//     }
    
//     return 0;
// }


// 6.) C program to find sum of natural numbers from 1 to n

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int sum = 0;
//     for (int  i = 1; i<=n; i++)
//     {
//        sum += i;
//     }
//     printf("%d\n" , sum);
    
    
    
    
//     return 0;
// }


// 7.) C program to print multiplication table of a given number

// #include<stdio.h>

// int main(){
//     int n = 0;
//     scanf("%d" , &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         int ans = i*n;
//         printf("%d * %d = %d\n" , n , i, ans);
//     }
    
//     return 0;
// }

// 8.) C program to count number of digits in an integer

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int count = 0;
//     while (n>0)
//     {
//         n = n/10;
//         count++;
//     }
//     printf("%d\n" , count);
    
//     return 0;
// }

// 9.) C program to find first and last digit 


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int first = n;
//     while(first>=10){
//         first /= 10;
//     }
//     int last = n %10;
//     printf("first : %d   last : %d" ,first , last);
//     return 0;
// }

//10.) C program to find sum of first and last digit of any number

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int first = n;
//     while(first >= 10){
//         first /= 10;
//     }
//     int last = n%10;
    
//     //printf("First: %d Last: %d\n" , first , last);
//     int sum = 0;
//     sum = first + last;
//     printf("Sum is %d\n" , sum);
//     return 0;
// }

// 11.) C program to swap first and last digit of a number

// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int first = n;
//     while (first >= 10)
//     {
//         first /=10;
//     }
//     int last = n%10;
//     int digit = log10(n);
//     int swapNum;
//     swapNum = last;
//     swapNum *= (int) pow(10 , digit);
//     swapNum += n % (int) pow(10 , digit);
//     swapNum -= last;
//     swapNum += first;

//     printf("%d\n" , swapNum);
//     return 0;
// }



//  12.) C program to find product of digits of a number


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int sum = 1 ;
//     while(n != 0){
    
//         sum *= n%10;
//         n /= 10;
//     }
    
//    printf("%d" , sum);
    
//     return 0;
// }


// 13.) C program to find reverse of a number

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int rev = 0;
//     while(n != 0){
//       rev = rev*10 + n%10;
//       n /= 10;
//     }
//     printf("%d" , rev);
//     return 0;
// }


// 14.) C program to check whether a number is palindrome or not


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int original;
//     original = n;

//     int rev = 0;
//     while(n != 0){
//       rev = rev*10 + n%10;
//       n /= 10;
//     }
//     if (original == rev)
//     {
//         printf("Yes %d" , original);
//     }
//     else
//     {
//         printf("No %d", original);
//     }
    
    
//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int ans[10] = {0};
//     while (n != 0)
//     {
//         int res = n %10;
//          ans[res]++;
//          n /= 10;
       
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("Frequency of %d = %d\n" , i , ans[i]);
//     }
    
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n = 0;
//     scanf("%d" , &n);
//     int num = 0;
//     while (n != 0)
//     {
//         num = num*10 + n%10;
//         n /= 10;
//     }
//     while (num != 0)
//     {
//         int res=num%10;
     
//         if(res == 0){
//             printf("Zero");
//         }
//         else if(res == 1){
//             printf("One ");
//         }
//         else if(res == 2){
//             printf("Two ");
//         }
//         else if(res == 3){
//             printf("Three ");
//         }
//         else if(res == 4){
//             printf("Four ");
//         }
//         else if(res == 5){
//             printf("Five ");
//         }
//         else if(res == 6){
//             printf("Six ");
//         }
//         else if(res == 7){
//             printf("Seven ");
//         }
//         else if(res == 8){
//             printf("Eight ");
//         }
//         else if(res == 9){
//             printf("Nine ");
//         }
//         else
//         {
//             break;
//         }
        
       
      
//       num /= 10;
//     }
   
    
    

//     return 0;
// }



// #include<stdio.h>

// int main(){

//     for (int i = 0; i <= 255; i++)
//     {
//         printf("ASCII value of character %c = %d\n", i, i);
//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int prime;
//     int sum = 0;
//     for (int  i = 2; i <= n; i++)
//     {
//         prime = 1;
//       for (int j = 2;  j<=i/2; j++)
//       {
//         if(i%j == 0){
//         prime = 0;
//         break;
//       }

//       }
      
//       if (prime == 1)
//       {
//            sum += i;
//       }

      
   
    
    

//     }
   
//     printf("Sum is : %d\n" , sum);
    
    
    

//     return 0;
// }

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int prime;
  
//     for (int  i = 2; i <= n; i++)
//     {
//        if(n%i == 0){
//          prime = 1;
//       for (int j = 2;  j<=i/2; j++)
//       {
//         if(i%j == 0){
//         prime = 0;
//         break;
//       }
//        }
//         if (prime == 1)
//       {
//            printf("%d\n" , i);
//       }


//       }
      
     
      
   
    
    

//     }
   
  
    
    
    

//     return 0;
// }


// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int num , digit,  last , sum = 0;
//     num = n;
//     digit = (int) log10(n) + 1;
//     while (n != 0)
//     {
//         last = n%10;
//         sum += round(pow(last , digit));
//         n /= 10;
//     }
//     if(num == sum){
//         printf("%d is ARMSTRONG NUMBER", num);
//     }
//      else
//     {
//         printf("%d is NOT ARMSTRONG NUMBER", num);
//     }

    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int sum ;
//     for(int i=1; i<=n; i++)
//     {
//         sum = 0;

//         /* Check whether the current number i is Perfect number or not */
//         for(int  j=1; j<i; j++)
//         {
//             if(i % j == 0)
//             {
//                 sum += j;
//             }
//         }
 
//         /* If the current number i is Perfect number */
//         if(sum == i)
//         {
//             printf("%d, ", i);
//         }
//     }
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int num , sum , last ;
//     long fact;
//     num = n;
//     sum = 0;
//     while (n != 0)
//     {
//         last = n%10;
//         fact = 1;
//         for (int i = 1; i <= last; i++)
//         {
//            fact = fact *i;
//         }
//         sum += fact;
        

//         n /= 10;
//     }
//     if(sum == num)
//     {
//              printf("%d is STRONG NUMBER", num);
//     }
//     else
//     {
//         printf("%d is NOT STRONG NUMBER", num);
//     }

//     return 0;
    

    
    
//     return 0;
// }
// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int  last , num ;
//     long long fact , sum;
//     for (int  i = 1; i <= n; i++)
//     {
//         num = i;
//         sum = 0;
//         while (num != 0)
//         {
//             fact = 1;
//             last = num%10;
//             for (int j = 1; j <= last; j++)
//             {
//                 fact = fact * j;
//             }
//             sum += fact;
//             num /= 10;
//         }
//         if (sum == i)
//         {
//             printf("%d, ", i);
//         }
        
        
//     }
    
    
    

    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int a , b , c;
//     a = 0;
//     b = 1;
//     c = 0;
//     for (int  i = 1; i <= n; i++)
//     {
//         printf("%d, ",  c);
//         a= b;
//         b = c ;
//         c = a+b;

//     }
    
//     return 0;
// }


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int sum = 0;
//     while (n != 0)
//     {
//         sum += n%10;
//         n /= 10;
//     }
//     sum += n;
//     printf("%d\n" , sum);
    
    
    
    
//     return 0;
// }





//fibonacci using recursion



// #include<stdio.h>

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1) + fib(n-2);
// }

// int main(){
//     int n;
//     scanf("%d", &n);
//     printf("%d" , fib(n));
//     return 0;
// }



 //multiplication  of even number



//  #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d" , &n);
//     int sum = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         if(i%2 == 0){
//             sum *= i;
//         }
//     }
//     printf("%d\n" , sum);
//     return 0;
// }





#include<stdio.h>

int main(){
    int n;
    scanf("%d" , &n);
    
    
    return 0;
}