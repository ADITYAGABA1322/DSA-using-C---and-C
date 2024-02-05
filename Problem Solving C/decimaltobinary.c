// //convert decinal to binary
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// int main()
// {
//     int decimal, binary[100], i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
//     printf("Enter a decimal number: ");
//     scanf("%d", &decimal);
//     for (i = 0; decimal > 0; i++)
//     {
//         binary[i] = decimal % 2;
//         decimal = decimal / 2;
//     }
//     printf("Binary number is: ");
//     for (j = i - 1; j >= 0; j--)
//     {
//         printf("%d", binary[j]);
//     }
//     printf(" ");
//     return 0;
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ans[100];
    int i=0;
    while(n>0){
        ans[i]=n%2+'0';
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",ans[j]);
    }
    return 0;
}


//code for one's and two's complement 
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     char ans[100];
//     int i=0;
//     while(n>0){
//         ans[i]=n%2+'0';
//         n=n/2;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--){
//         printf("%c",ans[j]);
//     }
//     printf(" ");
//     for(int j=i-1;j>=0;j--){
//         if(ans[j]=='0'){
//             ans[j]='1';
//         }
//         else{
//             ans[j]='0';
//         }
//     }
//     for(int j=i-1;j>=0;j--){
//         printf("%c",ans[j]);
//     }
//     printf(" ");
//     for(int j=i-1;j>=0;j--){
//         if(ans[j]=='0'){
//             ans[j]='1';
//             break;
//         }
//         else{
//             ans[j]='0';
//         }
//     }
//     for(int j=i-1;j>=0;j--){
//         printf("%c",ans[j]);
//     }
//     return 0;
// }

