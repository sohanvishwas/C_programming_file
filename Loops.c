// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:- ");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//         printf("%d\n",i);
//         i++;
//     }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int i;
//     for(i=1;i<=n;i++){
//         printf("%d\n",i);
//     }
    
// }

// Loops
// Question-23...Take the number N and the name from the user as inputs,and print the name N times.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     char name[100];
//     printf("enter the name:-");
//     scanf("%s",name);
//     int i=1;
//     while(i<=n){
//          printf("%s\n",name);;
//          i++;
//     }
    
// return 0;
// }

//Question-24...Take a number N from the user as input,and print even numbers up to N.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//         if(i%2==0){
//             printf("%d\n",i);
//         }
//             i++;
        
//     }
//     return 0;
// }


//Question-25...Write a program to print the sum of odd numbers up to N.

// #include<stdio.h>
// int main(){
//     int n,sum;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n){
//          if(i%2!=0){
//             sum+=i;
//          }
//          i++;
//     }
//     printf("%d\n",sum);

// return 0;
// }

//Question-26...write a program to take two integers M and N and print the sum of numbers in the range M To N.

// #include<stdio.h>
// int main(){
//     int m,n,sum;
//     printf("enter the value of m,n");
//     scanf("%d%d",&m,&n);
//     while(m<=n){
//         sum+=m;
//         m++;
//     }
//     printf("%d\n",sum);
// return 0;
// }

//Question-27...Write a program to calculate the sum of the following series where N is input 
//              from the user.1+1/2+1/3+1/4+1/5+......1/n
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     float sum=0.0;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     int i=1;
//     for (i=1;i<=n;i++){
//         sum+=1.0/i;
//     }
//     printf("%f\n",sum);
// return 0;
// }


//Question-28...Write a program to take a number from the user and print the number digit in
//              the given number.

// #include<stdio.h>
// int main(){
//     int n,count=0;
//     printf("enter the value of n:-");
//     scanf("%d",&n);
//     while(n>0){
//         count+=1;
//         n=n/10;
//     }
//     printf("%d\n",count);
// return 0;
// }


//Question-29...Write a program to take a number from the user and print the sum of the digits
//              of the given  number.

// #include<stdio.h>
// int main(){
//     int number,digit=0,sum=0;
//     printf("enter the number:-");
//     scanf("%d",&number);
//     while(number>0){
//         digit=number%10;
//         sum+=digit;
//         number=number/10;
//     }
//     printf("%d\n",sum);
// return 0;
// }

//Question-30...Write a program to input a number and check weather it is a perfect squre of not.
//              Note:A perfect square is the product of some integer with itself.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number:-");
//     scanf("%d",&number);
//     int i=1;
//     int f=0;
//     while(i<=number){
//         if(i*i==number){
//             printf("%s\n","Yes");
//             f=1;
//             break;
//         }
//         else{
//             i++;
//         }
//     }
//     if(f==0){
//     printf("%s\n","No");
//     }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number");
//     scanf("%d",&number);
//     int i;
//     int f=0;
//     for(i=1;i<=number;i++){
//         if(i*i==number){
//             printf("%s\n","Yes");
//             f=1;
//         }
//     }
//     if(f==0){
//         printf("%s\n","No");
//     }
// return 0;
// }

//Question-31...Write a program that takes a number from that user and prints the number that
//              is formed by reversing that digits of the number.

// #include<stdio.h>
// int main(){
//     int number,digit=0,revers=0;
//     printf("enter the number");
//     scanf("%d",&number);
//     while(number>0){
//         digit=number%10;
//         revers=revers*10+digit;
//         number=number/10;
//     }
//     printf("%d\n",revers);
// return 0;
// }

//Question-32...Write a program to take a number and if a number has exactly three positive
//              divisoror not.An integer m is a divisor of n if an integer k exists such
//              that n=k*m.

// #include<stdio.h>
// int main(){
//     int number,count=0;
//     printf("enter the number");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         if(number%i==0){
//             count+=1;
//         }
//         i++;
//     }
//     if(count==3){
//         printf("%s\n","Yes");
//     }
//     else{
//         printf("%s\n","No");
//     }
// return 0;
// }

//Question-33...Write a program to check whether a number is palindrome or not.
//              Note:A palindrome is a sequence of characters (or number) that reads the same
//              forwards as it does backwards.In other words,it remains unchanged when reversed.

// #include<stdio.h>
// int main(){
//     int number,no,digit,revers;
//     printf("enter the number");
//     scanf("%d",&number);
//     no=number;
//     while(number>0){
//           digit=number%10;
//           revers=revers*10+digit;
//           number=number/10;
//     }
//     if(no==revers){
//         printf("%s\n","Yes");
//     }
//     else{
//         printf("%s\n","No");
//     }
// return 0;
// }

//palindrome Number Range...M,N

// #include<stdio.h>
// int main(){
//     int M,N,no,digit,revers;
//     printf("enter the value of M,N:");
//     scanf("%d%d",&M,&N);

//     for(;M<=N;M++){
//       no=M,digit=0,revers=0;
//       while(no>0){
//         digit=no%10;
//         revers=revers*10+digit;
//         no=no/10;
//       }
//       if(M==revers){
//         printf("%d\n",M);
//       }
//     }
// return 0;
// }

//Question-34...Write a program to take a number from the user and print all the factors of
//              the given number.A factor is a number that can divide another number evenly
//              without leaving a remainder.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         if(number%i==0){
//             printf("%d\n",i);
//         }
//         i++;
//     }
// return 0;
// }

//Question-...find factors in range M,N

// #include<stdio.h>
// int main(){
//     int M,N;
//     printf("enter the M & N");
//     scanf("%d%d",&M,&N);
//     //int i=1;
//     while(M<=N){
//       printf("%d--",M);
//       for(int j=1;j<=M;j++){
//         if(M%j==0){
//           printf("%d",j);
//         }
        
//       }
//       printf("\n");
//       M++;
//     }
// return 0;
// }

//Question-35...write a program to check if a number is a spical type of number called a
//              'prime number'.A prime number is a number that is only divisble by 1 and 
//               itself.

// #include<stdio.h>
// int main(){
//     int number,count;
//     printf("enter the number");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         if(number%i==0){
//         count+=1;
//         }
//         i++;
//     }
//     if(count==2){
//         printf("%s\n","Yes");
//     }
//     else{
//         printf("%s\n","No");
//     }
// return 0;
// }

//Prime number Range...M,N

// #include<stdio.h>
// int main(){
//     int M,N,i,count;
//     printf("enter the value of M,N:");
//     scanf("%d%d",&M,&N);

//     for(;M<=N;M++){
//       i=1,count=0;
//       while(i<=M){
//         if(M%i==0){
//            count+=1;
//         }
//         i++;
//       }
//       if(count==2){
//         printf("%d\n",M);
//       }  
    
//     }
// return 0;
// }

//Question-36...Write a program to take numbers from the user as input and obtain the HCF and
//              LCM of the two numbers.

// #include<stdio.h>
// int main(){
//     int m,n,max,min,HCF=0,LCM=0;
//     printf("enter the number m,n");
//     scanf("%d%d",&m,&n);
//     int i=1;
//     if(m>n){
//         max=m;
//         min=n;
//     }
//     else{
//        max=n;
//        min=m;
//     }
//     while(i<=min){
//         if(m%i==0 && n%i==0){
//             HCF=i;
//         }
//         i++;
//     }
//     LCM=(m*n)/HCF;
//     printf("%d\n%d\n",HCF,LCM);
// return 0;
//     }


//Question-37...Write a program to take a number from the user and then determine if that number is
//              a spical type of number called a 'perfect number'.
//              A perfect number is a number where the sum of all its factors (excluding the 
//              number itself) is equal to the number itself.Print Yes if the number is a perfect
//              number else print No.

// #include<stdio.h>
// int main(){
//     int number,no,sum;
//     printf("Enter the number:-");
//     scanf("%d",&number);
//     no=number;
//     int i=1;
//     while(i<number){
//         if(number%i==0){
//             sum+=i;
//         }
//         i++;
//     }
//     if(no==sum){
//         printf("%s\n","Yes");
//     }
//     else{
//         printf("%s\n","No");
//     }
// return 0;
// }

//Perfect number Range...M,N

// #include<stdio.h>
// int main(){
//     int M,N,no,sum;
//     printf("Enter the value of M,N:");
//     scanf("%d%d",&M,&N);
    
//     for(;M<=N;M++){
//       no=M,sum=0;
//       int i=1;
//       while(i<M){
//         if(M%i==0){
//           sum+=i;
//         }
//         i++;
//       }
//       if(no==sum){
//         printf("%d\n",no);
//       }
//     }
    
// return 0;
// }


//Question-38...Write a program to check weather a number is Armstrong or not.(Armstrong number is 
//              a number that is equel to the sum of cubes of its digit,for example,
//              153=1^3+5^3+3^3).

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number,no,no1,Armstrong,digit,count;
//     printf("Enter the number:-");
//     scanf("%d",&number);
//     no=number;
//     no1=number;
//     while(no>0){
//           count+=1;
//           no=no/10;
//     }
//     while(no1>0){
//           digit=no1%10;
//          Armstrong+= pow(digit,count);
//           no1=no1/10;
//     }
//     if(number==Armstrong){
//         printf("%s\n","Yes");
//     }
//      else{
//         printf("%s\n","No");
//     }
// return 0;
// } 

//Question-39...Write a program to take N number from a user as input, and print the maximum and 
//              minimum values among the given set of N numbers.Also, take N from the user as input.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number,no,max=0,min=2^32;
//     printf("Enter the number:-");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         printf("enter the no:-");
//         scanf("%d",&no);
//         if(max>no){
//             max=max;
//         }
//         else{
//             max=no;
//         }
//         if(min<no){
//             min=min;
//         }
//         else{
//             min=no;
//         }
//         i++;
//     }
//     printf("%d\n%d\n",max,min);
// return 0;
// }

//Question-40...Write a program to take N number from a user as input, and print the second maximum
//              number among the given set of N numbers.Also, take N  from the user as input.

// #include<stdio.h>
// int main(){
//     int number,no,max=0,smax=0;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         printf("enter the no:");
//         scanf("%d",&no);
//         if(max>no){
//             if(smax<no){
//                 smax=no;
//             }
//         }else{
//             smax=max;
//             max=no;
//         }
//         i++;
//     }
//     printf("Smax:%d\n",smax);
// return 0;
// }

//Question-41...Write a program to take N number from a user as input,and print the third maximun
//              number among the given set of N numbers.Also,take N from the user as input.

// #include<stdio.h>
// int main(){
//     int number,no,max=0,smax=0,tmax=0;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         printf("enter the no:");
//         scanf("%d",&no);
//         if(max>no){
//             if(smax>no){
//                 if(tmax>no){
//                  tmax=tmax;
//                 }
//                 else{
//                  tmax=no;
//                 }
//             }
//             else{
//             tmax=smax;
//             smax=no;
//             }
//         }
//         else{
//         tmax=smax;
//         smax=max;
//         max=no;
//         }
//         i++;
//     }
//     printf("tmax:%d\n",tmax);
// return 0;
// }

//Question-42...Write a program to print the frist 'n' Fibonacci numbers.Take N from the user as input.
//              Fibonacci number are a series of number where each number is the sum of the two
//              preceding number.We start with the numbers 0 and 1,and then calculate and print.

// #include<stdio.h>
// int main(){
//     int number,x=0,y=1,z=0;
//     printf("enter the number:");
//     scanf("%d",&number);
//     while(number>0){
//         printf("%d",z);
//         x=y;
//         y=z;
//         z=x+y;
//         number=number-1;
//     }
// return 0;
// }

//Question-43...Write a program to print the sum of a given number of terms(N) for a given value of X
//              in the following mathematical series:(input X and N from the user)
// (i) X+(X^2)/2+(X^3)/3+(X^4)/4....upto N terms

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float X,N,sum;
//     printf("enter the value of X,N");
//     scanf("%f%f",&X,&N);
//     int i=1;
//     while(i<=N){
//          sum+=pow(X,i)/i;
//          i++;
//     }
//     printf("sum:%.2f\n",sum);
// return 0;
// }

// (ii) X-(X^3)/3+(X^5)/5-(X^7)/7+(X^9)/9....upto N terms

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float X,N,sum,sum1,sum2;
//     printf("enter the value of X,N");
//     scanf("%f%f",&X,&N);
//     int i=1,j=1;
//     while(i<=N*2){
//         if(j%2==0){
//             sum1-=pow(X,i)/i;
//         }
//         else{
//             sum2+=pow(X,i)/i;
//         }
//         i+=2,j+=1;
//     }
//     sum=sum1+sum2;
//     printf("sum:%.2f\n",sum);
// return 0;
// }

// (iii) X-(X^3)/3!+(2^5)/5!-(X^7)/7!+...upto N terms

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float X,N,sum,sum1,sum2,factor=1;
//     printf("enter the value of X,N");
//     scanf("%f%f",&X,&N);
//     int i=1,j=1;
//     while(i<=N){
//         if(i>=1){
//             factor*=i;
//             i--;
//         }
//         if(j%2==0){
//             sum1-=pow(X,i)/factor;
//         }
//         else{
//             sum2+=pow(X,i)/factor;
//         }
//         i+=2,j++;

//     }
//     sum=sum1+sum2;
//     printf("sum:%.4f\n",sum);
// return 0;
// } Not correct answer

//Question-44...Write a program to take value N from the user and print the following pattern
//              based on the user input.
//  (1)N=5
//           *
//           **
//           ***
//           ****
//           *****  
        
// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=1;i<=N;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// return 0;
// }

//  (2)N=5 
//                        *
//                       **
//                      ***
//                     ****
//                    *****

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j,k;
//     for(i=1;i<=N;i++){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// return 0;
// }

//  (3)N=5
//         *****
//         ****
//         ***
//         **
//         *

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=0;i<N;i++){
//         for(j=1;j<=N-i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=5      *****
                  ****
                   ***
                    **
                     *                */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j,k;
//     for(i=1;i<=N;i++){
//         for(j=1;j<i;j++){
//             printf(" ");
//         }
//         for(k=i;k<=N;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// return 0;
// }


//  (4)N=4
//          1
//          2 3
//          4 5 6
//          7 8 9 10

// #include<stdio.h>
// int main(){
//     int N,count=1;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=1;i<=N;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",count);
//             count++;
//         }
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=5      1
                 1 2
                 1 2 3
                 1 2 3 4
                 1 2 3 4 5     */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=1;i<=N;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// return 0;
// }

/*  (#)N=5    1 1 1 1 1
              2 2 2 2
              3 3 3
              4 4
              5            */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=0;i<N;i++){
//         for(j=1;j<=N-i;j++){
//             printf("%d",i+1);
//         }
//         printf("\n");
//     }
// return 0;
// }

/*    (#)N=5     1 2 3 4 5
                 1 2 3 4
                 1 2 3
                 1 2
                 1              */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=N;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=5    5 5 5 5 5
               4 4 4 4
               3 3 3
               2 2
               1            */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=N;i>=1;i--){
//         for(j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// return 0;
// }


/*   (#)N=5      1
                 2 2
                 3 3 3
                 4 4 4 4
                 5 5 5 5 5       */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=1;i<=N;i++){
//         for(j=1;j<=i;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=5        1
                   1 0
                   1 0 1
                   1 0 1 0
                   1 0 1 0 1  */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=1;i<=N;i++){
//         for(j=1;j<=i;j++){
//             if(j%2==0){
//                printf("0");
//             }
//             else{
//                 printf("1");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }

/*    (#)N=5     1
                 0 1
                 1 0 1
                 0 1 0 1
                 1 0 1 0 1    */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i,j;
//     for(i=1;i<=N;i++){
//         for(j=i;j>=1;j--){
//             if(j%2==0){
//                printf("0");
//             }
//             else{
//                 printf("1");
//             }
//         }
//         printf("\n");
//     }
// return 0;
// }


//  (5)N=4 
//          0
//          2  4
//          4  8  8
//          8 16 16 16

// #include<stdio.h>
// #include<math.h>                                                                                       
// int main(){
//     int N,a=0,b=1;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=i;j++){
//             if(j==1){
//                printf("%d",a);
//             }else{
//                 k=pow(2,b);
//                 printf("%d",k);
//             }  
//         }
//         a=pow(2,i);
//         b++;
//         i++;
//         printf("\n");
//     }
// return 0;
// }

//  (6)N=5
//          1
//          121
//          12321
//          1234321
//          123454321

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         for(k=j-2;k>=1;k--){
//             printf("%d",k);
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

//Question-45...Write a program to take a number N from the user and print the following pattern
//              with the input given by the user.
//   (1)N=4
//                          *
//                         ***
//                        *****
//                       *******

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=4      *******
                  *****
                   ***
                    *            */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=N,j,k;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=4                *
                          **
                         ***
                        ****
                         ***
                          **
                           *              */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("*");
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("*");
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

/*   (3)N=4     *
                **
                ***
                ****
                ***
                **
                *        */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j;
//     while(i<=N){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }


/*   (#)N=5                 1
                          1 2 1
                        1 2 3 2 1
                      1 2 3 4 3 2 1
                    1 2 3 4 5 4 3 2 1           */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k,l;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%d",k);
//         }
//         for(l=k-2;l>=1;l--){
//             printf("%d",l);
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
//}


/*   (#)N=4            1
                     1 2 1
                   1 2 3 2 1
                 1 2 3 4 3 2 1
                   1 2 3 2 1
                     1 2 1
                       1             */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k,l;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%d",k);
//         }
//         for(l=k-2;l>=1;l--){
//             printf("%d",l);
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             printf("%d",k);
//         }
//         for(l=k-2;l>=1;l--){
//             printf("%d",l);
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }


//  (2)N=4
//                           *
//                          ***
//                         *****
//                        *******
//                         *****
//                          ***
//                           *

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

/*  (#)N=4
                            *
                          * 1 *
                        * 2   3 *
                      * 4   5   6 *
                        * 3   2 *
                          * 1 *
                            *          */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k,count=0;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//           if(k==1||k==2*i-1){
//             printf("*");
//           }
//           else if(k%2==0){
//              count++;
//              printf("%d",count);
//           }
//           else{
//             printf(" ");
//           }
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1,count=N;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//            if(k==1||k==2*i-1){
//             printf("*");
//           }
//           else if(k%2==0){
//              count--;
//              printf("%d",count);
//           }
//           else{
//             printf(" ");
//           } 
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }                              

//  (3)N=4
//             *      *
//             **    **
//             ***  ***
//             ********
//             ***  ***
//             **    **
//             *      *

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k,l;
//     while(i<=N){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         for(k=1;k<=2*N-2*i;k++){
//             printf(" ");
//         }
//         for(l=1;l<=i;l++){
//             printf("*");
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         for(k=1;k<=2*N-2*i;k++){
//             printf(" ");
//         }
//         for(l=1;l<=i;l++){
//             printf("*");
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=4         ****
                     ****
                      ****
                       ****             */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//                 printf("*");
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=4                 ****
                           ****
                          ****
                         ****          */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//                 printf("*");
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=4                 ****
                             ****
                              ****
                               ****
                               ****
                              ****
                             ****
                            ****
                            ****
                             ****
                              ****
                               ****                */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int M=1,i,j,k;

//     for(;M<=N;M++){
//       i=1;
//      while(i<=N){
//         for(j=1;j<=i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//           printf("*");
//         }
//         i++;
//         printf("\n");
//       }
//       i=1;
//       while(i<=N){
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//           printf("*");
//         }
//         i++;
//         printf("\n");
//       }
//     }
// return 0;
// }#include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int M=1,i,j,k;

//     for(;M<=N;M++){
//       i=1;
//      while(i<=N){
//         for(j=1;j<=i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//           printf("*");
//         }
//         i++;
//         printf("\n");
//       }
//       i=1;
//       while(i<=N){
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//           printf("*");
//         }
//         i++;
//         printf("\n");
//       }
//     }
// return 0;
// }



//  (4)N=4
//                         4
//                       4 3 4
//                     4 3 2 3 4
//                   4 3 2 1 2 3 4
//                     4 3 2 3 4
//                       4 3 4
//                         4

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k,l;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=N;k>N-i;k--){
//             printf("%d",k);
//         }
//         for(l=k+2;l<=N;l++){
//             printf("%d",l);
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=N;k>N-i;k--){
//             printf("%d",k);
//         }
//         for(l=k+2;l<=N;l++){
//             printf("%d",l);
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

//Question-46...Write a program to take a number N from the user and print the following with the
//              input given by the user.
//  (1)N=5
//           *
//           **
//           * *
//           *  *
//           *****

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j;
//     while(i<=N){
//         for(j=1;j<=i;j++){
//             if(i==N||j==1||j==i){
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

/*    (#)N=5             *
                        **
                       * *
                      *  *
                     *****   */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             if(i==N||k==1||k==i){
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

/*   (#)N=5       *****
                  *  *
                  * *
                  **
                  *            */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=N,j;
//     while(i>=1){
//         for(j=1;j<=N;j++){
//             if(i==N||j==1||j==i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=5       *****
                   *  *
                    * *
                     **
                      *        */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=N,j,k;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=i;k++){
//           if(i==N||k==1||k==i){
//                 printf("*");
//         }
//             else{
//                 printf(" ");
//             }
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
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

//  (2)N=6
//            ******
//            *    *
//            *    *
//            *    *
//            *    *
//            ******

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j;
//     while(i<=N){
//          for(j=1;j<=N;j++){
//             if(i==1||i==N||j==1||j==N){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//          }
//          i++;
//          printf("\n");
//     }
// return 0;
// }

/*   (#)N=3     ******
                *    *
                ******              */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j;
//     while(i<=N){
//          for(j=1;j<=N+2;j++){
//             if(i==1||i==N||j==1||j==N+2){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//          }
//          i++;
//          printf("\n");
//     }
// return 0;
// }  

/*   (#)N=4     ****
                 *  *
                  *  *
                   ****            */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//           if(i==1||i==N||k==1||k==N){
//                 printf("*");
//           }
//           else{
//             printf(" ");
//           }
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*    (#)N=4            ****
                       *  *
                      *  *
                     ****              */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//           printf(" ");
//         }
//         for(k=1;k<=N;k++){
//           if(i==1||i==N||k==1||k==N){
//                 printf("*");
//           }
//           else{
//             printf(" ");
//           }
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*   (#)N=4          *
                    * *
                   *   *
                  *******      */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//           if(i==N||k==1||k==2*i-1){
//             printf("*");
//           }
//           else{
//             printf(" ");
//           }
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
// }

/*  (#)N=4            *******
                       *   *
                        * *
                         *          */

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=N,j,k;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//           if(i==N||k==1||k==2*i-1){
//             printf("*");
//           }
//           else{
//             printf(" ");
//           }
//         }
//         i--;
//         printf("\n");
//     }
// return 0;
// }

//   (3)N=4
//                       *
//                      * *
//                     *   *
//                    *     *
//                     *   *
//                      * *
//                       *

// #include<stdio.h>
// int main(){
//     int N;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j,k;
//     while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//             if(k==1||k==2*i-1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         i++;
//         printf("\n");
//     }
//     i=N-1;
//     while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=2*i-1;k++){
//             if(k==1||k==2*i-1){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         i--;
//        printf("\n");
//     }
// return 0;
// }

//   (4)N=4
//             * * * *
//              *   *
//               * *
//                *
//               * *
//              *   *
//             * * * *
 
//  #include<stdio.h>
//  int main(){
//      int N;
//      printf("enter the value of N:");
//      scanf("%d",&N);
//      int i=N,j,k;
//      while(i>=1){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             if(i==N||k==1||k==i){
//                 printf(" *");
//             }
//             else{
//                printf("  ");
//             }
//         }
//         i--;
//         printf("\n");
//      }
//      i=2;
//      while(i<=N){
//         for(j=1;j<=N-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=i;k++){
//             if(i==N||k==1||k==i){
//                 printf(" *");
//             }
//             else{
//                printf("  ");
//             }
//         }
//         i++;
//         printf("\n");
//     }
// return 0;
//  }

/*    (#)N=5       1  2  3  4  5
                   10 9  8  7  6
                   11 12 13 14 15
                   20 19 18 17 16
                   21 22 23 24 25        */

// #include<stdio.h>
// int main (){
//   int N;
//   printf("Enter the value of N:");
//   scanf("%d",&N);
//   int i=1,k,j,count=0,c;
//   while(i<=N){
//     if(i%2==0){
//       c=count;
//       k=count+N;
//       for(;k>c;k--){
//         count++;
//         printf("%3d",k);
//       }
//     }
//     else{
//       for(j=1;j<=N;j++){
//         count++;
//         printf("%3d",count);
//       }
//     }
//     printf("\n");
//     i++;
//   }
// return 0;
// }


/*   (#)N=4        4 4 4 4 4 4 4
                   4 3 3 3 3 3 4
                   4 3 2 2 2 3 4
                   4 3 2 1 2 3 4
                   4 3 2 2 2 3 4
                   4 3 3 3 3 3 4
                   4 4 4 4 4 4 4          */

// #include<stdio.h>
// int main (){
//   int N;
//   printf("Enter the value of N:");
//   scanf("%d",&N);
//   int s=1,k=2*N-1;
//   while(N>0){
//     for(int i=s;i<=k;i++){
//       printf("\n");
//       for(int j=i;j<=k;j++){
//         if(i==s||i==k||j==s||j==k){
//           printf("%d",N);
//         }
        
//       }
  
//     }
//     N--,k--,s++;
//   }
// return 0;
// }


//Question-47...write a program to take N number from the user and print the Highest Common Factor
//              (HCF) of the given set of numbers.Take N from the user as input.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int N,no,min=2^32,HCF=0;
//     printf("Enter the value of N:");
//     scanf("%d",&N);
//     int i=1,j;
//     while(i<=N){
//         printf("Enter the no:");
//         scanf("%d",&no);
//         if(min<no){
//             min=min;
//         }
//         else{
//           min=no;
//         }

//         i++;
//     }
//     j=1;
//     while(j<=min){
//         for(i=1;i<=N;j++){
//             if(no%j==0){
//             }
//             HCF=j;
//         }
//         j++;
//     }
//     printf("%d",HCF);

// return 0;    
// }

//Question-48...Write a program to print all Armstrong number in a given range of M to N.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int M,N,number=0,no=0,Armstrong=0,digit=0,count=0;
    
//     printf("enter the value of M,N:");
//     scanf("%d%d",&M,&N);
    
//     for(;M<=N;M++){
//         number=M,no=M,Armstrong=0,digit=0,count=0;
//          while(number>0){
//             count+=1;
//             number=number/10;
//          }
//          while(no>0){
//             digit=no%10;
//             Armstrong+=pow(digit,count);
//             no=no/10;
//          }
//          if(M==Armstrong){
//             printf("%d ",M);
//          }
//     }
// return 0;
// }

//Question-..Factorial

// #include<stdio.h>
// int main(){
//   int number;
//   printf("Enter the number:");
//   scanf("%d",&number);

//   int i=1,factorial=1;
//   while(i<=number){
//     factorial*=i;
//     i++;
//   }
//   printf("%d",factorial);
// return 0;
// }

//Factorial Range...M,N

// #include<stdio.h>
// int main(){
//   int M,N;
//   printf("Enter the value of M,N:");
//   scanf("%d%d",&M,&N);

//   for(;M<=N;M++){
//     int i=1,factorial=1;
//     while(i<=M){
//       factorial*=i;
//       i++;
    
//     }
//     printf("%d%d\n",M,-factorial);
//   }
// return 0;
// }                       




//Question-49...Write a program to take a number and print the count of the prime numbers that are 
//              strictly less than a number.

// #include<stdio.h>
// int main(){
//     int number,count=0,prime=0;
//     printf("enter the value of number:");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         count=0;
//         for(int j=1;j<=i;j++){
//             if(i%j==0){
//                 count+=1;
//             }
//         }
//         if(count==2){
//             prime+=1;
//         }
//         i++;
//     }
//     printf("Prime Numbers:%d\n",prime);
// return 0;
// }

/*Question-50...Write a program to print only the prime factors of a given number 'N'. Take N from 
                the user as input.
                Prime factors are the prime numbers that divide a given number without leaving a 
                remainder.   */

// #include<stdio.h>
// int main(){
//     int number,count=0,prime=0;
//     printf("enter the value of number:");
//     scanf("%d",&number);
//     int i=1;
//     while(i<=number){
//         if(number%i==0){
//             count=0;
//             for(int j=1;j<=i;j++){
//                 if(i%j==0){
//                 count+=1;
//                 }
//             }
//             if(count==2){
//                printf("Prime Factors:%d\n",i);  
//              }
//         }
//         i++;
//     }
// return 0;
// }

/*Question-51...Take a number N from the user as input and repeatedly find the sum of the digits of 
                the number till you get a single digit. Print that digit. 
                Example: 678 -> 6+7+8 = 21 -> 2+1 = 3       */

// #include<stdio.h>
// int main(){
//     int N,count,sum,digit;
//     printf("enter the value of N:");
//     scanf("%d",&N);
//     while(N>0){
//         digit=N%10;
//         sum+=digit;
//         N=N/10;
//     }
//     while(sum>0){
//         digit=sum%10;
//         count+=digit;
//         sum=sum/10;
//     }
//     printf("%d\n",count);
// return 0;
// }



