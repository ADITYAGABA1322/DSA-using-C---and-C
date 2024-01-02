// //print hello world in c

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     printf("Hello World");   // print hello world
//     return 0;
// }

// // code for sum of 2 numbers in c

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     int a,b;  //  declare 2 variables
//     scanf("%d %d",&a,&b);  //  take input  2 numbers %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     printf("%d",a+b);  //  print sum
//     return 0;
// }

// // code for sum of floating point numbers in c

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     float a,b;  //  declare 2 variables  size of float is 4 bytes  how much digit it can store 6-7
//     scanf("%f %f",&a,&b);  //  take input  2 numbers %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     printf("%f",a+b);  //  print sum
//     return 0;
// }

// // code for sum of double floating point numbers in c

// #include <stdio.h>   // header file for input output


// int main()  //   main function
// {
//     double a,b;  //  declare 2 variables  size of double is 8 bytes  how much digit it can store 15-16
//     scanf("%lf %lf",&a,&b);  //  take input  2 numbers %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     printf("%lf",a+b);  //  print sum
//     return 0;
// }

// sum of 2 numbers in c in long long 

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     long long a,b;  //  declare 2 variables  size of long long is 8 bytes  how much digit it can store 19-20
//     scanf("%lld %lld",&a,&b);  //  take input  2 numbers %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     printf("%lld",a+b);  //  print sum
//     return 0;
// }



// calculator in c

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     int a,b;  //  declare 2 variables
//     char c;  //  declare 1 variable
//     scanf("%d %c %d",&a,&c,&b);  //  take input  2 numbers %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     if(c=='+')  //  if c is equal to + then
//     printf("%d",a+b);  //  print sum
//     else if(c=='-')  //  if c is equal to - then
//     printf("%d",a-b);  //  print difference
//     else if(c=='*')  //  if c is equal to * then
//     printf("%d",a*b);  //  print product
//     else if(c=='/')  //  if c is equal to / then
//     printf("%d",a/b);  //  print quotient
//     else if(c=='%')  //  if c is equal to % then
//     printf("%d",a%b);  //  print remainder
//     return 0;
// }



//increment and decrement operators

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     int a=10;  //  declare 1 variable
//     printf("%d\n",a++);  //  print a then increment a
//     printf("%d\n",a);  //  print a
//     printf("%d\n",++a);  //  increment a then print a
//     printf("%d\n",a);  //  print a
//     printf("%d\n",a--);  //  print a then decrement a
//     printf("%d\n",a);  //  print a
//     printf("%d\n",--a);  //  decrement a then print a
//     printf("%d\n",a);  //  print a
//     return 0;
// }

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     char c = 125; // declare 1 variable  size of char is 1 byte  range of char is -128 to 127
//       c = c+10; // increment c by 10
//     printf("%d",c);   // print c
//     return 0;
// }
// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     char ch1 = 'G' , ch2 = 10;
//     ch1  = ch1 +ch2 ;
//     printf("%d\n",ch1);   // print ch
//     printf("%c\n",ch1 - ch2 - 4);   // print ch

//     return 0;
// }

// greater out of 3 numbers in c using terminary operator
// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     int a = 10,b = 1,c = 13;  //  declare 3 variables
//     scanf("%d %d %d",&a,&b,&c);  //  take input  3 numbers %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     printf("%d\n",a>b?(a>c?a:c):(b>c?b:c));  //  print greater number
//     return 0;
// }

// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//    int i= 5;
//     // print the i value i++ 2 times
//     printf("%d %d %d" , i++, i++ , i++);  //  print i
//     return 0;
// }



//using nested if else and select the candidate whose having degree phd , PHD , ph.D  
// #include<stdio.h>
// int main()
// {
//     char deg[30];
//     int age,exp;
//     printf("Enter the degree: ");
//     scanf("%s",&deg);
//     printf("\nEnter your age and experience respectively: ");
//     scanf("%d%d",&age,&exp);
//     if((deg[0]=='P' && deg[1]=='H' && deg[2]=='.' && deg[3]=='D')|| (deg[0]=='p' && deg[1]=='h' && deg[2]=='d')||(deg[0]=='P' && deg[1]=='h' && deg[2]=='.' && deg[3]=='D')|| (deg[0]=='P'&&deg[1]=='H'&&deg[2]=='D')||(deg[0]=='P'&&deg[1]=='h'&&deg[2]=='.'&&deg[3]=='d')){
//         if(age>=20 && age<=40){
//             if(exp>2){
//                 printf("\nYou are Selected.");
//             }
//         }
//     }
//     else{
//         printf("\nYou are not selected.");
//     }
//     return 0;
// }

//print even index and odd index sum in c
// #include <stdio.h>   // header file for input output
// int main()  //   main function
// {
//     int n , i , even = 0 , odd = 0;  //  declare 3 variables
//     scanf("%d",&n);  //  take input  1 number %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     int a[n];  //  declare array of size n
//     for(i=0;i<n;i++)  //  loop from 0 to n-1
//     scanf("%d",&a[i]);  //  take input  1 number %d for integer %c for character %f for float %lf for double  &a for address of a &b for address of b
//     for(i=0;i<n;i++)  //  loop from 0 to n-1
//     {
//         if(i%2==0)  //  if i is even then
//         even+=a[i];  //  add a[i] to even
//         else  //  else
//         odd+=a[i];  //  add a[i] to odd
//     }
//     printf("%d %d",even,odd);  //  print even and odd
//     return 0;
// }

//write a program using switch and take choice according to user  and print price of russian is 150000 and american 200000 and indian 100000 and chinese 50000
#include <stdio.h>   // header file for input output
int main()  //   main function
{
   char ch[100];
   int choice;
    printf("Enter the choice: ");
    printf("1.Russian\n2.American\n3.Indian\n4.Chinese\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Price of Russian is 150000");
            break;
        case 2:
            printf("Price of American is 200000");
            break;
        case 3:
            printf("Price of Indian is 100000");
            break;
        case 4:
            printf("Price of Chinese is 50000");
            break;
        default:
            printf("Invalid choice");
    }
    


    return 0;
}

// #include<stdio.h>
// int main () 
// { 
//   int x, y = 5, z = 5; 
//   x = y == z; 
//   printf("%d", x); 
//   getchar(); 
//   return 0; 
// }


 
// #include <stdio.h>
// // Assume base address of "Geeks Quiz" to be 1000
// int main ()
// {
// printf (5 + "GeeksQuiz");
// return 0;
// }



// #include <stdio.h>
// int main()
// {
// 	int i = 5;
// 	printf("%d %d %d", i++, i++, i++);
// 	return 0;
// }


// What is the maximum number of arguments that can be passed in a single function? in c  256
// . In which order do the following gets evaluated   
// 1. Relational
// 2. Arithmetic
// 3. Logical
// 4. Assignment


// What is the correct value to return to the operating system upon the successful completion of a program?
// 0

// In which stage the following code #include<stdio.h>gets replaced by the contents of the file stdio.h
// Preprocessing

// In C, parameters are always
// Passed by value

// How will you print \n on the screen?
// #include<stdio.h>

// int main(){
// printf("\\n");
//     return 0;
// }




//  Which of the following are unary operators in C?
// 1. sizeof
// 2. &
// 3. *
// 4. ~
// 5. ++
// 6. --
// 1,2,3,4,5,6

// C variable cannot start with
// 1. _
// 2. $
// 3. 0
// 4. 1
// 5. a
// 6. A

// Find the output of the following program.
// #include<stdio.h>
// int main()
// {
// int i=01289;
// printf("%d", i);
// }

// // 1289


// The binary equivalent of 5.375 is
// 1. 101.011
// 2. 101.0111
// 3. 101.01111
// 4. 101.011111
// 5. 101.0111111
// 6. 101.01111111

// // 101.011

// In C, two integers can be swapped using minimum
// 1. 1 statement
// 2. 2 statements
// 3. 3 statements
// 4. 4 statements
// 5. 5 statements
// 6. 6 statements

// // 2 statements


// #include <stdio.h>

// int main ()
// {
//     int i = (1, 2, 3);
//     
//     printf ("%d", i);
//     
//     return 0;
// }

// // 3

// int main()
// {
//     char st[] = "CODING";
//  
//     printf("While printing ");
//     printf (", the value returned by printf() is : %d")
//     printf ("%s", st));
//  
//     return 0;
// }

// 6



// 1.C preprocessors can have compiler specific features.  
// 2. C preprocessors can have platform specific features.
// 3. C preprocessors can have machine specific features.
// 4. C preprocessors can have operating system specific features.
// 5. C preprocessors can have hardware specific features.
// 6. C preprocessors can have language specific features.

// // 1,2,3,4,5,6



// #pragma exit is primarily used for?
// 1. To define a function to be called when the program terminates.
// 2. To define a function to be called when the program starts.
// 3. To define a function to be called when the program is interrupted.
// 4. To define a function to be called when the program is resumed.
// 5. To define a function to be called when the program is suspended.
// 6. To define a function to be called when the program is aborted.

// // 1


// 3.If #include is used with file name in angular brackets.
// 1. The compiler searches for the file in the current directory.
// 2. The compiler searches for the file in the directory specified by the environment variable INCLUDE.
// 3. The compiler searches for the file in the directory specified by the environment variable LIB.
// 4. The compiler searches for the file in the directory specified by the environment variable PATH.
// 5. The compiler searches for the file in the directory specified by the environment variable TEMP.
// 6. The compiler searches for the file in the directory specified by the environment variable TMP.


// // 2


// 4.What is the output of this C code?

//     int main()
//     {
//         int i = -5;
//         int k = i %4;
//         printf("%d\n", k);
//     }

// // -1


// 5.What is the use of getchar()?

// 1. To read a character from the keyboard.
// 2. To read a character from the screen. 
// 3. To read a character from the printer.
// 4. To read a character from the file.
// 5. To read a character from the disk.
// 6. To read a character from the tape.

// // 1


// 6.The format identifier '%i' is also used for _____ data type?
// 1. int
// 2. long
// 3. float
// 4. double
// 5. char
// 6. void

// // 1


// 7.Which data type is most suitable for storing a number 65000 in a 32-bit system?

// 1. int
// 2. long
// 3. float
// 4. double
// 5. char
// 6. void

// // 2


// D. double
// 8.What is the output of given code?
// int main()
//     {
//        char chr;
//        chr = 128;
//        printf("%d\n", chr);
//        return 0;
//     }

// // -128


// 9.Which is correct with respect to size of the datatypes?

// 1. int is 2 bytes
// 2. long is 4 bytes
// 3. float is 4 bytes
// 4. double is 8 bytes
// 5. char is 1 byte

// // 1,2,3,4,5


// 10. What is the output of this C code?

//     int main()
//     {
//         float x = 'a';
//         printf("%f", x);
//         return 0;
//     }

// // 97.000000


// 1.Comment on the output of this C code?

//     int main()
//     {
//         float f1 = 0.1;
//         if (f1 == 0.1)
//             printf("equal\n");
//         else
//             printf("not equal\n");
//     }

// // equal

// 2.What is the output of this C code?

//     int main()
//     {
//         float a = 5.477777777777;
//         printf("%f", a);
//     }

// // 5.477778

// 3.Predict the data type of the following mathematical operation?
//      12 * 7 + 5 / 2 . 0

// // int


// 4.void main()
//     {
//         float x = 0.1;
//         printf("%d, ", x);
//         printf("%f", x);
//     }

// // 0, 0.100000 

// 5.What is the output of this C code?

//    int main()
//     {
//         int i = 23;
//         char c = -23;
//         if (i < c)
//             printf("Yes\n");
//         else
//             printf("No\n");
//     }

// // Yes


// Program for analysis of people of certain age groups who are eligible for getting a suitable job if their condition and norms get satisfied using nested if statement.
// If the age is below 18 than person is considered minor and not fit for work
// If age is between 18-50 than the person is fit for work and proceed with other documentations.
// Persons above the age of 50 are also considered not fit for job and they can claim for pension.

// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("Enter your age")
//     scanf("%d", &age);
//     if(age<18)
//     {
//         printf("You are minor and not fit for work");
//     }
//     else if(age>=18 && age<=50)
//     {
//         printf("You are fit for work");
//     }
//     else
//     {
//         printf("You are not fit for work and can claim for pension");
//     }
//     return 0;
// }


