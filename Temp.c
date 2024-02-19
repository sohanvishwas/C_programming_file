// #include <stdio.h>
// #include <math.h>

// int main() {
//     // Declare variables for principal (P), number of years (N), interest rate (I), and total amount (T)
//     float P, N, I, T;

//     // Prompt user to enter values for principal, number of years, and interest rate
//     printf("Enter the principal amount (P): ");
//     scanf("%f", &P);

//     printf("Enter the number of years (N): ");
//     scanf("%f", &N);

//     printf("Enter the annual interest rate (I): ");
//     scanf("%f", &I);

//     // Calculate the total amount using the formula
//     T = P * pow((1 + I / 100), N);

//     // Display the total amount
//     printf("Total Amount (T): %f\n", T);

//     return 0;
// }


//Armstrong numbber-
// #include<stdio.h>
// int main(){
//     int n,count=0,sum=0;
//     printf("Enter a number :");
//     scanf("%d",&n);
//     int z=n;
//     int t=z;
//     for(;n>0;){
//         count++;
//         n=n/10;
//     }
//     for(;z>0;z=z/10){
//         int q=z%10;
//         int k=1;
//         for(int a=0;a<count;a++){
//             k*=q;
//         }
//         sum+=k;
//     }if(sum==t){
//         printf("\nIt is a armstrong number.\n");
//     }else{
//         printf("\nIt is not a armstrong number.\n");
//     }
//     return 0;
// }


//Question.....N=5
//                             *
//                             *
//                           *****
//                             *
//                             *

// #include<stdio.h>
// int main() {
//     int N,n;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     n=(N+1)/2;
//     int i=1,j;
//     while(i<=N){
//         for(j=1;j<=N;j++){
//             if(i==n||j==n){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

// N=4
//                   0
//                 1 0 1
//               2 1 0 1 2
//             3 2 1 0 1 2 3


// #include<stdio.h>
// int main() {
//     int N,n;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     n=N-1;
//     int i=N,j,k,l;
//     while(i>=1){
//         for(j=1;j<=i-1;j++){
//              printf(" ");
//         }
//         for(k=N-i;k>=0;k--){
//             printf("%d",k);
//         }
//         for(l=1;l<=N-i;l++){
//             printf("%d",l);
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

/*N=4
               1
             3 2 1
           5 4 3 2 1
         7 6 5 4 3 2 1      */

// #include<stdio.h>
// int main() {
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//              printf(" ");
//         }
//         for(k=2*i-1;k>=1;k--){
//             printf("%d",k);
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*Question-...N=*/

// #include<stdio.h>
// int main(){
//   printf("nn\n\nnn\n");
//   printf("nn/n/nnn/n");

  
// return 0;
// }



/*Question-...
             N= 4                       
                                      *
                                     *1*
                                    *123*
                                   *12345*
                                    *123*
                                     *1*
                                      *      */


// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k,l,count=0;
//     while(i<=N){
//       l=1;
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//           if(k==1||k==2*i-1){
//             printf("*");
//           }
//           else {
//            printf("%d",l++);
//           }
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1,count=N;
//     while(i>=1){
//       l=1;
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//           if(k==1||k==2*i-1){
//             printf("*");
//           }
//           else {
//             printf("%d",l++);
//           }
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }                              
