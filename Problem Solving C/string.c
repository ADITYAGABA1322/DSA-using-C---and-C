// 1.)  Write a C program to find length of a string.

// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     while(str[i] != '\0'){
//         i++;
//     }
//     printf("%d\n" , i);
//     return 0;
// }


// 2.) Write a C program to copy one string to another string.

// #include<stdio.h>

// int main(){
//     char str1[100];
//     char str2[100];
//     scanf("%s" , str1);
//     int i = 0;
//     while(str1[i] != '\0'){
//         str2[i] = str1[i];
//         i++;
//     }
//     str2[i] = '\0';
//     printf("%s\n" , str2);
//     return 0;
// }


// 3.) Write a C program to concatenate two strings.

// #include<stdio.h>

// int main(){
//     char str1[100];
//     char str2[100];
//     scanf("%s" , str1);
//     scanf("%s" , str2);

//     int i = 0;
//     while (str1[i] != '\0')
//     {
//         i++;
//     }
//     int j = 0;
//     while (str2[j] != '\0')
//     {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }
//     str1[i] = '\0';
//     printf("%s" , str1);
    
    

//     return 0;

// }


// 4.) Write a C program to compare two strings.


// #include<stdio.h>

// int main(){
//     char str1[100];
//     char str2[100];
//     scanf("%s" , str1);
//     scanf("%s" , str2);
//     int i = 0;
//     while (str1[i] != '\0' && str2[i] != '\0')
//     {
//         if(str1[i] != str2[i]){
//             printf("Not Equal\n");
//             return 0;
//         }
//         i++;
//     }
//     if(str1[i] == '\0' && str2[i] == '\0'){
//         printf("Equal\n");
//     }
//     else{
//         printf("Not Equal\n");
//     }
//     return 0;
// }


// 5.)  Write a C program to convert lowercase string to uppercase.


//#include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] >= 'a' && str[i] <= 'z'){
//             str[i] = str[i] - 32;
//         }
//         i++;
//     }
//     printf("%s\n" , str);
//     return 0;
// }


//6.) Write a C program to convert uppercase string to lowercase.

//  #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] = str[i] + 32;
//         }
//         i++;
//     }
//     printf("%s\n" , str);
//     return 0;

// }


// 7.) Write a C program to toggle case of each character of a string.


// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] >= 'a' && str[i] <= 'z'){
//             str[i] = str[i] - 32;
//         }
//         else if(str[i] >= 'A' && str[i] <= 'Z'){
//             str[i] = str[i] + 32;
//         }
//         i++;
//     }
//     printf("%s\n" , str);
//     return 0;
// }


// 8.)  Write a C program to find total number of alphabets, digits or special character in a string.

//  #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     int alpha = 0;
//     int digit = 0;
//     int special = 0;
//     while (str[i] != '\0')
//     {
//         if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
//             alpha++;
//         }
//         else if(str[i] >= '0' && str[i] <= '9'){
//             digit++;
//         }
//         else{
//             special++;
//         }
//         i++;
//     }
//     printf("Alphabets = %d\n" , alpha);
//     printf("Digits = %d\n" , digit);
//     printf("Special Characters = %d\n" , special);
//     return 0;
// }


// 9.) Write a C program to count total number of vowels and consonants in a string.


// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     int vowel = 0;
//     int consonant = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
//             vowel++;
//         }
//         else{
//             consonant++;
//         }
//         i++;
//     }
//     printf("Vowels = %d\n" , vowel);
//     printf("Consonants = %d\n" , consonant);
//     return 0;
// }


//10.) C program to count total number of words in a string. another solution

// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     // gets(str);
//     int i = 0;
//     int count = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] == ' '){
//             count++;
//         }
//         i++;
//     }
//     printf("Total Words = %d\n" , count + 1);
//     return 0;
// }


//11.) Write a C program to find reverse of a string.


// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     int j = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     i--;
//     while (i > j)
//     {
//         char temp = str[i];
//         str[i] = str[j];
//         str[j] = temp;
//         i--;
//         j++;
//     }
//     printf("%s\n" , str);
//     return 0;
// }

//11.) Write a C program to find reverse of a string using pointer .

// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%s" , str);
//     char *ptr = str;
//     int count = 0;
//     while (*ptr != '\0')
//     {
//         count++;
//         ptr++;
//     }
//     printf("Reverse = ");
//     for (int i = count - 1; i >= 0; i--)
//     {
//         printf("%c" , str[i]);
//     }
//     printf("\n");
//     return 0;
// }


// 12.)  Write a C program to check whether a string is palindrome or not.



// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%s" , str);
//     int i = 0;
//     int j = 0;
//     while (str[i] != '\0')
//     {
//         i++;
//     }
//     i--;
//     while (i > j)
//     {
//         if(str[i] != str[j]){
//             printf("Not Palindrome\n");
//             return 0;
//         }
//         i--;
//         j++;
//     }
//     printf("Palindrome\n");
//     return 0;
// }


//Write a C program to check whether a string is palindrome or not. another method


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%s" , str);
//     char *ptr = str;
//     int count = 0;
//     while (*ptr != '\0')
//     {
//         count++;
//         ptr++;
//     }
//     int i = 0;
//     int j = count - 1;
//     while (i < j)
//     {
//         if(str[i] != str[j]){
//             printf("Not Palindrome\n");
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     printf("Palindrome\n");
//     return 0;
// }

// 13.) Write a C program to reverse order of words in a given string.


// Input string : I love learning programming at Codeforwin

// Output string : Codeforwin at programming learning love I


// code :


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char str[100] , reverse[100];
//     int len, i, index, wordStart, wordEnd;

//     printf("Enter any string: ");
//     scanf("%[^\n]", str);

//     len   = strlen(str);

//     index = 0;

//     wordStart = len - 1;
//     wordEnd   = len - 1;

//     while(wordStart > 0)
//     {
//         if(str[wordStart] == ' ')
//         {
//             i = wordStart + 1;
//             while(i <= wordEnd)
//             {
//                 reverse[index] = str[i];

//                 i++;
//                 index++;
//             }

//             reverse[index++] = ' ';

//             wordEnd = wordStart - 1;
//         }

//         wordStart--;
//     }

//     for(i=0; i<=wordEnd; i++)
//     {
//         reverse[index] = str[i];
//         index++;
//     }

//     reverse[index] = '\0';

//     printf("Original string \n%s\n", str);
//     printf("Reverse ordered words \n%s", reverse);

//     return 0;

// }
    



// #include<stdio.h>

// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     int i = 0;
//     int j = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] == ' '){
//             int k = i - 1;
//             while (k >= j)
//             {
//                 printf("%c" , str[k]);
//                 k--;
//             }
//             printf(" ");
//             j = i + 1;
//         }
//         i++;
//     }
//     int k = i - 1;
//     while (k >= j)
//     {
//         printf("%c" , str[k]);
//         k--;
//     }
//     printf("\n");
//     return 0;
// }




// 14.) Write a C program to find first occurrence of a character in a given string.


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     char ch;
//     scanf(" %c" , &ch);
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] == ch){
//             printf("First Occurrence = %d\n" , i);
//             return 0;
//         }
//         i++;
//     }
//     printf("Not Found\n");
//     return 0;
// }


// 15.) Write a C program to find last occurrence of a character in a given string.


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     char ch;
//     scanf(" %c" , &ch);
//     int i = 0;
//     int index = -1;
//     while (str[i] != '\0')
//     {
//         if(str[i] == ch){
//             index = i;
//         }
//         i++;
//     }
//     if(index == -1){
//         printf("Not Found\n");
//     }
//     else{
//         printf("Last Occurrence = %d\n" , index);
//     }
//     return 0;
// }


// 16.) Write a C program to search all occurrences of a character in given string.


// #include<stdio.h>


// int main(){
//     char str[100];
//     char toSearch;
//     scanf("%[^\n]" , str);
//     scanf(" %c" , &toSearch);
//     int i = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] == toSearch){
//             printf("Found at %d\n" , i);
//         }
//         i++;
//     }

//     return 0;
// }


// 17.) Write a C program to count occurrences of a character in given string.


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     char toSearch;
//     scanf(" %c" , &toSearch);
//     int i = 0;
//     int count = 0;
//     while (str[i] != '\0')
//     {
//         if(str[i] == toSearch){
//             count++;
//         }
//         i++;
//     }
//     if(count == 0){
//         printf("Not Found\n");
//     }
//     else{
//         printf("Found %d times\n" , count);
//     }
//     return 0;
// }

// 18.) Write a C program to find highest frequency character in a string.


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     int i = 0;
//     int count[256] = {0};
//     while (str[i] != '\0')
//     {
//         count[str[i]]++;
//         i++;
//     }
//     int max = 0;
//     char maxChar;
//     for (int i = 0; i < 256; i++)
//     {
//         if(count[i] > max){
//             max = count[i];
//             maxChar = i;
//         }
//     }
//     printf("Max Occurrence = %c\n" , maxChar);
//     return 0;
// }


// 19.) Write a C program to find lowest frequency character in a string.


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     int i = 0;
//     int count[256] = {0};
//     while (str[i] != '\0')
//     {
//         count[str[i]]++;
//         i++;
//     }
//     int min = 100000;
//     char minChar;
//     for (int i = 0; i < 256; i++)
//     {
//         if(count[i] < min && count[i] != 0){
//             min = count[i];
//             minChar = i;
//         }
//     }
//     printf("Min Occurrence = %c\n" , minChar);
//     return 0;
// }


// 20.)  C program to count frequency of each character in a string


// #include<stdio.h>


// int main(){
//     char str[100];
//     scanf("%[^\n]" , str);
//     int i = 0;
//     int count[256] = {0};
//     while (str[i] != '\0')
//     {
//         count[str[i]]++;
//         i++;
//     }
//     for (int i = 0; i < 256; i++)
//     {
//         if(count[i] != 0){
//             printf("%c = %d\n" , i , count[i]);
//         }
//     }
//     return 0;
// }


//sort an array of string 


// #include<stdio.h>



// int main(){
//     char str[100][100];
//     int n;
//     scanf("%d" , &n);
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%s" , str[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             int k = 0;
//             while (str[j][k] != '\0' && str[j + 1][k] != '\0')
//             {
//                 if(str[j][k] > str[j + 1][k]){
//                     char temp[100];
//                     strcpy(temp , str[j]);
//                     strcpy(str[j] , str[j + 1]);
//                     strcpy(str[j + 1] , temp);
//                     break;
//                 }
//                 else if(str[j][k] < str[j + 1][k]){
//                     break;
//                 }
//                 k++;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%s\n" , str[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// // #include<malloc.h>




// int main(){
//     int n;
//     scanf("%d" , &n);
//     int i , j;
//     char s[100][100];
//     for (i = 0; i < n; i++)
//     {
//         scanf("%s" , s[i]);
//     }
//    for (i = 0; i < n; i++)
//         {
//             char c1=s[i][0];
            
            
            
//             for (j = i+1; j < n; j++)
//             {
//                 char c2=s[j][0];
            
                
//                 if (c1 > c2)
//                 {
//                     char temp [100];
//                     strcpy(temp,s[i]);
//                     strcpy(s[i],s[j]);
//                      strcpy(s[j],temp);
//                 }
                
//             }
            
//         }
//         printf("The sorted array of strings is: ");
//         for(i=0;i<n;i++){
//             printf("\n%s" , s[i]);
//         }
      
    
// }