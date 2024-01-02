// 1.) Binary to Decimal

// #include <stdio.h>

// int main(void)
// {
//     int binary, decimal, place;
//     binary = 0;
//     decimal = 0;
//     place = 1;
//     printf("Enter a binary number: ");
//     scanf("%d", &binary);
//     while (binary > 0)
//     {
//         decimal = decimal + (binary % 10) * place;
//         binary = binary / 10;
//         place = place * 2;
//     }
//     printf("The decimal equivalent is %d", decimal);
//     return 0;
// }

// 2.) check array rotation


// 2 methods

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int i;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int count = 1;
//     for (i = 0; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//             break;
//         count++;
//     }
//     if (count == n)
//         count = 0;
//     printf("%d", count);
// }

// 2nd Method

// #include <stdio.h>

//     int
//     main()
// {
//     int n;
//     scanf("%d", &n);
//     int i;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int count = 1;
//     for (i = 1; i < n; i++)
//     {
//         if (arr[i] < arr[i - 1])
//             break;
//         count++;
//     }
//     if (count == n)
//         count = 0;
//     printf("%d", count);
// }

// 3.)  summation

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int rem;
//     int sum;
//     while (n > 0)
//     {
//         rem = n % 10;
//         n /= 10;
//         sum += rem;
//     }
//     printf("%d", sum);
// }



// books in ascending order 


// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int i;
//     int arr[n];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int j;
//     int temp;
//     for (i = 0; i < n - 1; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// 33.) First and Last Digit

// #include <stdio.h>


// int main()

// {
//     int n;
//     scanf("%d", &n);
//     int first = n, last;
//     while (first >= 10)
//     {
//         first /= 10;
//     }
//     last = n % 10;
//     printf("%d %d", first, last);
//     return 0;
// }

// 34.) even multiplication

// #include <stdio.h>


// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int i;
//     int mul = 1;
//     int count;
//     for (i = 2; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             mul *= i;
//         }
//     }
//     printf("%d", mul);
// }



// 35.) reverse the number

// #include <stdio.h>

// int main()

// {
//     int n;
//     scanf("%d", &n);
//     int rev = 0;
//     while (n > 0)
//     {
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }
//     printf("%d", rev);

//     return 0;
// }

// 36.) Digit Count

// #include <stdio.h>
 
// int main()

// {
//     int n;
//     scanf("%d", &n);
//     int count;
//     int digit;
//     while (n > 0)
//     {
//         digit = n % 10;
//         n /= 10;
//         count++;
//     }

//     printf("%d", count);

//     return 0;
// }