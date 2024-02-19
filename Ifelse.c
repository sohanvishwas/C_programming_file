

//Question-...find the floor differents.

// #include<stdio.h>
// int main(){
//     int x,y,f1,f2,d;
//     printf("Enter the value of x,y:");
//     scanf("%d%d",&x,&y);
//     f1=((x-1)/10)+1;
//     f2=((y-1)/10)+1;
//     if(f1>f2){
//        d=f1-f2;
//     }
//     else{
//         d=f2-f1;
//     }
//     printf("%d\n",d);
// return 0;
// }

//Question-...Take integer input and print the absolute value of that integer.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n:");
//     scanf("%d",&n);
//     if(n<0){
//         n=n*(-1);
//     }
//     printf("The absolute value is :%d\n",n);
// return 0;
// }



//If-else
//Question-10....Write a program to take two numbers from user and determine the greater of those two given numbers.

// #include<stdio.h>
// int main (){
//     int a,b;
//     printf("enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     if (a>b){
//         printf("%d\n",a);
//     }else {
//     printf("%d\n",b);
//     }
//     return 0;
// }


//Question-11....Write a program to take a number from the user and print that number as Odd or Even.

// #include<stdio.h>
// int main (){
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     if (a%2==0) {
//         printf("%s\n","Even");
//     }else {
//         printf("%s\n","Odd");
//     }
// return 0;
// }


//Question-12....Write a program to take a number from the user and output whether that number is negative,positive or zero.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     if (a==0) {
//         printf("%s\n","zero");
//    }else if (a>0) {
//        printf("%s\n","positive");
//    }else {
//        printf("%s\n","negative");
//    }
// return 0;
// }


//Question-13....Write a program to take an integer as input and print the smallest positive integer 
//               that is a multiple of both 2 and n.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     if (a%2==0) {
//         printf("%d",a);
//     }else {
//         printf("%d",a*2);
//     }
// return 0;
// }


//Question-14....Write a program to take three number from the user and print the greast number of the three numbers.

// #include<stdio.h>
// int main (){
//     int a,b,c,max=0;
//     printf("enter the vlaue of a,b,c");
//     scanf("%d%d%d",&a,&b,&c);
//     if (a>b) {
//         max=a;
//     } 
//     else {
//         max=b;
//     }
//     if (max>c) {
//         max=max;
//     }
//     else {
//         max=c;
//     }
//     printf("%d\n",max);
// return 0;
// }


//Queston-15...Write a program to take four number from the user and print the greater number of the four number.

// #include<stdio.h>
// int main(){
//     int a,b,c,d,max=0;
//     printf("enter the value of a,b,c,d");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if (a>b) {
//         max=a;
//     }
//     else {
//         max=b;
//     }
//     if(max>c) {
//         max=max;
//     }
//     else {
//         max=c;
//     }
//     if (max>d) {
//         max=max;
//     } 
//     else {
//         max=d;
//     }
//     printf("%d\n",max);
// return 0;
// }


//Question-16...write a program to take a year from the user and output weather a given year is a leap year or not.
//              Note:A leap year is said to be a leap year if it is either divisible by 400 or it should be divisible
//                   by 4 and not by 100.

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the value of year:-");
//     scanf("%d",&year);
//     if (year%400==0) {
//         printf("%s\n","Yes");
//     }
//     else if (year%4==0 && year%100!=0){
//     printf("%s\n","Yes");
//     }
//     else {
//     printf("%s\n","No");
//     }
// return 0;
// }


//Question-17...Write a program to take 3 numbers from the user and output the second max of 3 numbers.

// #include<stdio.h>
// int main(){
//     int a,b,c,max=0,smax=0;
//     printf("enter the value  of a,b,c");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         max=a;
//         smax=b;
//     } 
//     else{
//         max=b;
//         smax=a;
//     }
//     if(max>c){
//         if(smax<c){
//            smax=c;
//         }
//     }
//     else {
//         smax=max;
//         max=c;
//     }
//     printf("%d\n",smax);
// return 0;
// }


//Question-18...Write a program to take the basic of an employee and calculate its Gross salary according to the following.
//              (Gross salary is the sum of basic salary,HRA and DRA)
//              Basic Salary <=10000 : HRA=20%,DA=80%
//              Basic Salary <=20000 : HRA=25%,DA=90%
//              Basic Salary >20000 : HRA=30%,DA=95%

// #include<stdio.h>
// int main(){
//     int Basic_Salary,HRA,DA,Gross_Salary;
//     printf("enter the value of Basic_Salary:-");
//     scanf("%d",&Basic_Salary);
//     if (Basic_Salary<=10000){
//         HRA=Basic_Salary*20/100;
//         DA=Basic_Salary*80/100;
//         Gross_Salary=Basic_Salary+HRA+DA;
//         printf("%d",Gross_Salary);
//     }
//     else if(Basic_Salary<=20000){
//         HRA=Basic_Salary*25/100;
//         DA=Basic_Salary*90/100;
//         Gross_Salary=Basic_Salary+HRA+DA;
//         printf("%d",Gross_Salary);
//     }
//     else {
//         HRA=Basic_Salary*30/100;
//         DA=Basic_Salary*90/100;
//         Gross_Salary=Basic_Salary+HRA+DA;
//         printf("%d",Gross_Salary);
//     }
// return 0; 
// }


//Question-19...Write a program to input electricity unit charges and calculate the total electricity bill according
//              to the given condition.
//              For the first 50 units Rs.0.50/unit
//              For the next 100 units Rs.0.75/unit
//              For the next 100 units Rs.1.20/unit
//              For units above 250 Rs.1.50/unit
//              An additional surcharge of 20% is added to the bill

// #include<stdio.h>
// int main(){
//     int Electricity_units,Unit_charges,Additional_charges,Total_bill;
//     printf("enter the Electricity_units:-");
//     scanf("%d",&Electricity_units);
//     if(Electricity_units<=50){
//         Unit_charges=Electricity_units*0.50;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d",Total_bill);
//     }else if(Electricity_units<=150){
//         Unit_charges=50*0.50 +(Electricity_units -50)*0.75;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d",Total_bill);
//     }else if(Electricity_units<=250){
//         Unit_charges=50*0.50+100*0.75+(Electricity_units-150)*1.20;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d",Total_bill);
//     }else {
//         Unit_charges=50*0.50+100*0.75+100*1.20+(Electricity_units-250)*1.50;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d",Total_bill);
//     }
//return 0;
//}

//Question-20...write a program to take 4 number from the user and output the second max of these 4 numbers.

// #include<stdio.h>
// int main(){
//     int a,b,c,d,max=0,smax=0;
//     printf("enter the value of a,b,c,d");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if(a>b){
//         max=a;
//         smax=b;
//     }
//     else{
//         max=b;
//         smax=a;
//     }
//     if(max>c){
//         if(smax<c){
//             smax=c;
//         }
//     }
//     else{
//         smax=max;
//         max=c;
//     }
//     if(max>d){
//         if(smax<d){
//             smax=d;
//         }
//     }
//     else{
//         smax=max;
//         max=d;
//     }
//     printf("%d\n",smax);
// return 0;
// }

//Question-21...Write a program to take 8 numbers from the user and output the second max of these 8 numbers.

// #include<stdio.h>
// int main(){
//     int a,b,c,d,e,f,g,h,max=0,smax=0;
//     printf("enter the value of a,b,c,d,e,f,g,h");
//     scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
//     if(a>b){
//         max=a;
//         smax=b;
//     }
//     else{
//         max=b;
//         smax=a;
//     }
//     if(max>c){
//         if(smax<c){
//             smax=c;
//         }
//     }
//     else{
//         smax=max;
//         max=c;
//     }
//     if(max>d){
//         if(smax<d){
//             smax=d;
//         }
//     }
//     else{
//         smax=max;
//         max=d;
//     }
//     if(max>e){
//         if(smax<e){
//             smax=e;
//         }
//     }
//     else{
//         smax=max;
//         max=e;
//     }
//     if(max>f){
//         if(smax<f){
//             smax=f;

//         }
//     }
//     else{
//         smax=max;
//         max=f;
//     }
//     if(max>g){
//         if(smax<g){
//             smax=g;
//         }
//     }
//     else{
//         smax=max;
//         max=g;
//     }
//     if(max>h){
//         if(smax<h){
//             smax=h;
//         }
//     }
//     else{
//         smax=max;
//         max=h;
//     }
//     printf("%d\n",smax);
// return 0;
// }

//Question-22...Write a program to take 5 numbers from the user and print the frequency of every number.


//Ifelse Question-(Flowchart Assignment) 200-question

//Question-...Take two numbers from user A and B. and check whether A is greater than B or A is less 
//            than B or A is equal to B.

// #include<stdio.h>
// int main (){
//     int A,B;
//     printf("Enter the value of A,B:");
//     scanf("%d%d",&A,&B);
//     if(A==B){
//         printf("A is equal to B\n");
//     }
//     else if(A>B){
//         printf("A is greater then B\n");
//       }
//       else{
//         printf("A is less then B\n");
//     }
// return 0;
// }

//Question-34...Write a program to show how to determine the greater of the three given numbers.

// #include<stdio.h>
// int main(){
//     int a,b,c,max=0;
//     printf("Enter the value of a,b,c:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         max=a;
//     }
//     else{
//         max=b;
//     }
//     if(max>c){
//         max=max;
//     }
//     else{
//       max=c;
//     }
//     printf("%d\n",max);
// return 0;
// }

//Question-39...Write a program to take two sides as input and check whether it is a rectangle or a square.

// #include<stdio.h>
// int main (){
//     int a,b;
//     printf("Enter the value of a,b:");
//     scanf("%d%d",&a,&b);
//     if(a==b){
//         printf("Square\n");
//     }
//     else{
//         printf("Rectangle\n");
//     }
// return 0;
// }

//Question-40...

// #include<stdio.h>
// int main(){
//     int cp,sp;
//     printf("Enter the cp,sp:");
//     scanf("%d%d",&cp,&sp);
//     if(cp==sp){
//         printf("No profit,No loss\n");
//     }
//     else if(cp>sp){
//             printf("Loss of %d\n",cp-sp);
//         }
//         else{
//             printf("Profit of %d\n",sp-cp);
//         }
// return 0;
// }

//Question-41...Write a program to check whether a number is the smallest 4 digit number.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     if(number==1000){
//         printf("Yes\n");
//     }else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-42...Write a program to check whether a number is the largest 3 digit number.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     if(number==999){
//         printf("Yes\n");
//     }else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-43...Write a program to check whether a number is divisible by 7 or not.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number:");
//     scanf("%d",&number);
//     if(number%7==0){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-44...Write a program to check whether a number is even or odd.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("even\n");
//     }
//     else{
//         printf("odd\n");
//     }
// return 0;
// }

//Question-45...Write a program to check whether the last digit of a number (entered by user) is divisible 
//              by 3 or not.

// #include<stdio.h>
// int main(){
//     int number,no;
//     printf("enter the number:");
//     scanf("%d",&number);
//     no=number%10;
//     if(no%3==0){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-46...Write a program to check whether a person is eligible for voting or not. Age for voting 
//              is 18 years.

// #include<stdio.h>
// int main(){
//     int Age;
//     printf("enter the Age:");
//     scanf("%d",&Age);
//     if(Age>=18){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-47...Write a program to display "Hello" if a number entered by the user is a multiple of 
//              five , otherwise print "Bye".

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number:");
//     scanf("%d",&number);
//     if(number%5==0){
//         printf("Hello\n");
//     }
//     else{
//         printf("Bye\n");
//     }
// return 0;
// }

//Question-49...Write a program to check whether a number entered is a three digit number or not.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number:");
//     scanf("%d",&number);
//     if(number>99 && number<1000){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-50...Write a program to check whether a person is a senior citizen or not(Senior citizen 
//              Age=60).

// #include<stdio.h>
// int main(){
//     int Age;
//     printf("enter the Age:");
//     scanf("%d",&Age);
//     if(Age>=60){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-51...Accept the temperature in degrees Celsius of water and check whether it is boiling
//              temperature or not (boiling point of water is 100 C)

// #include<stdio.h>
// int main(){
//     int temperature;
//     printf("enter the temperature:");
//     scanf("%d",&temperature);
//     if(temperature>=100){
//         printf("Yes\n");
//     }
//     else{
//         printf("No\n");
//     }
// return 0;
// }

//Question-53...A shop will give a discount of 10% if the cost of the purchased quantity is more than 
//              1000. Ask the user for quantity, Suppose,one unit will cost 100. Judge and print total 
//              cost for the user.

// #include<stdio.h>
// int main(){
//     int Quantity,purchased=0,discount=0;
//     printf("enter the Quantity:");
//     scanf("%d",&Quantity);
//     purchased=Quantity*100;
//     if(purchased>1000){
//         discount=purchased*10/100;
//         printf("%d\n",purchased-discount);
//     }
//     else{
//         printf("%d\n",purchased);
//     }
// return 0;
// }

//Question-54...A company decided to give a bonus of 5% of his salary to an employee if his/her year 
//              of service is more than 5 years. Ask users for their salary and year of service and 
//              print the bonus amount.

// #include<stdio.h>
// int main(){
//     int salary,year,bonus=0;
//     printf("enter the salary,year:");
//     scanf("%d%d",&salary,&year);
//     if(year>5){
//         bonus=salary*5/100;
//         printf("%d\n",bonus);
//     }
//     else{
//         printf("No bonus\n");
//     }
// return 0;
// }

//Question-55...A student will not be allowed to sit in an exam if his/her attendance is less than 75%.
//              Take following input from the user. Number of classes held. Number of classes attended. 
//              And print, percentage of class attended. Is the student allowed to sit in the exam or not.

// #include<stdio.h>
// int main(){
//     int classes_held,classes_attend,percentage=0;
//     printf("enter the classes_held,classes_attend:");
//     scanf("%d%d",&classes_held,&classes_attend);
//     percentage=100*classes_attend/classes_held;
//     if(percentage>=75){
//         printf("Allowed\n");
//     }
//     else{
//         printf("Not Allowed\n");
//     }
// return 0;
// }

//Question-....Write a program to check whether a number is the 4 digit number and it should be 
//              divisible by 7 and its quotient after dividing with 7 should be even.

// #include<stdio.h>
// int main(){
//     int number,quotient=0;
//     printf("Eneter the number:");
//     scanf("%d",&number);
//     if(number>999 && number<10000){
//            if(number%7==0){
//              quotient=number/7;
//                if(quotient%2==0){
//                   printf("Yes\n");
//                 }
//                 else{
//                     printf("No\n");
//                 }
//            }
//            else{
//             printf("Not divisible by 7\n");
//            }
        
//     }
//     else{
//         printf("Not 4 digit number\n");
//     }
// return 0;
// }

//Question-56...Take an integer N as input and check whether it ends with 3 or 7. If it ends with 3, 
//              print “ends with 3”, if it ends with 7, print “ends with 7”, otherwise print the 
//              number itself.

// #include<stdio.h>
// int main(){
//     int number,digit=0;
//     printf("Eneter the number:");
//     scanf("%d",&number);
//     digit=number%10;
//     if(digit==3){
//          printf("ends with 3\n");
//     }
//     else if(digit==7){
//            printf("ends with 7\n");
//         }
//         else{
//           printf("%d\n",number);
//         }
//  return 0;
// }

//Question-57...Write a program to take two numbers as input and print their difference if the first 
//              number is greater than the second number,otherwise print their sum.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Eneter the value a,b:");
//     scanf("%d%d",&a,&b);
//     if(a>b){
//          printf("Difference:%d\n",a-b);
//     }
//     else{
//        printf("sum:%d\n",a+b); 
//     }
// return 0;
// }

//Question-58...Write a program to obtain a number N and increment its value by 1 if the number is 
//              divisible by 4, otherwise, decrement its value by 1.

// #include<stdio.h>
// int main(){
//     int N;
//     printf("Eneter the value N:");
//     scanf("%d",&N);
//     if(N%4==0){
//          printf("%d\n",N+1);
//     }
//     else{
//        printf("%d\n",N-1); 
//     }
// return 0;
// }

//Question-59...Write a program to obtain 2 numbers (A and B) and an arithmetic operator (C) and then
//              design a calculator depending upon the operator entered by the user.

// #include<stdio.h>
// int main(){
//     int A,B;
//     printf("Eneter the value A,B:");
//     scanf("%d%d",&A,&B);
//     char C;
//     printf("Enter the arithmetic operators C:");
//     scanf(" %c",&C);
//         if(C=='+'){
//            printf("%d\n",A+B);
//         }
//         else if(C=='-'){
//            printf("%d\n",A-B); 
//         }
//         else if(C=='*'){
//             printf("%d\n",A*B);
//         }
//         else if(C=='/'){
//             printf("%d\n",A/B);
//         }
//         else if(C=='%'){
//             printf("%d\n",A%B);
//         }

// return 0;
// } 


//Question-60...Write a program to input the length (L) and breadth (B) of a rectangle and output 
//              whether its area is greater or perimeter is greater or both are equal.

// #include<stdio.h>
// int main(){
//     int L,B,area,perimeter;
//     printf("Enter the L,B:");
//     scanf("%d%d",&L,&B);
//     area=L*B;
//     perimeter=2*(L+B);
//     if(area==perimeter){
//          printf("both are equal\n");
//     }
//     else if(area>perimeter){
//             printf("Area is greater\n");
//         }else{
//             printf("Perimeter is greater\n");
//         }
// return 0;
// }

//Question-62...Write a program to input the month number and print the number of days in that month. 
//              Take an input from the user between 1 and 12 inclusive. (Output 28 days for the month 
//              of February)

// #include<stdio.h>
// int main(){
//     int month_number;
//     printf("Eneter the value month_number:");
//     scanf("%d",&month_number);
//     if(month_number>=1 && month_number<=12){
//         if(month_number==2){
//               printf("28 days\n");
//         }
//         else if(month_number==4||month_number==6||month_number==9||month_number==11){
//               printf("30 days\n"); 
//             }else{
//               printf("31 days\n");
//             }
//     }
//     else{
//         printf("The month_number is invalid\n");
//     }
// return 0;
// }

//Question-63...Write a program to input a number and output whether a number is negative, positive or zero.

// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     if(number==0){
//          printf("Zero\n");
//     }
//     else if(number>0){
//             printf("Positive\n");
//         }
//         else{
//             printf("Negative\n");
//         }
// return 0;
// }



//Question-64...Input any city from the user and display the monument of that city.
//              City Monument-
//                Delhi Red Fort
//                Agra Taj Mahal
//                Jaipur Jal Mahal
//              For any other city as an input, print "No monument in the database for this city".

// #include<stdio.h>
// #include<string.h>

// int main(){
//     char city[100];
//     printf("Enter the city:");
//     scanf("%s",city);
//     if(strcmp(city,"delhi") == 0)
//     {
//         printf("Red Ford\n");
//     }
//     else if(strcmp(city,"agra")==0)
//     {
//         printf("Taj Mahal\n");
//     }
//     else if(strcmp(city,"jaipur")==0)
//     {
//         printf("Jal Mahal\n");
//     }
//      else{
//         printf("No monument in the database for this city\n");
//     }
// return 0;
// }       

/*Question-65...Write a program to input marks of five subjects Physics, Chemistry, Biology, Mathematics 
                and Computer out of 100. Calculate percentage and grade according to following:
                Percentage >= 90% : Grade A
                Percentage >= 80% : Grade B
                Percentage >= 70% : Grade C
                Percentage >= 60% : Grade D
                Percentage >= 40% : Grade E
                Percentage < 40% : Grade F          */

// #include<stdio.h>
// int main(){
//     int Physics,Chemistry,Biology,Mathematics,Computer,Total_Marks=0,percentage=0;
//     printf("Enter the marks of Physics,Chemistry,Biology,Mathematics,Computer:");
//     scanf("%d%d%d%d%d",&Physics,&Chemistry,&Biology,&Mathematics,&Computer);
//     Total_Marks=Physics+Chemistry+Biology+Mathematics+Computer;
//     percentage = 100*Total_Marks/500;
//     if(percentage>=90){
//          printf("Grade A\n");
//     }
//     else if(percentage>=80){
//             printf("Grade B\n");
//         }
//         else if(percentage>=70){
//                 printf("Grade C\n");
//             }
//             else if(percentage>=60){
//                     printf("Grade D\n");
//                 }
//                 else if(percentage>=40){
//                         printf("Grade E\n");
//                     }
//                     else{
//                         printf("Grade F\n");
//                     }
// return 0;
// }      



/*Question-66...Write a program to input basic salary of an employee and calculate its Gross salary
                according to following: (Gross salary is the sum of basic salary, HRA, and DRA)
                Basic Salary <= 10000 : HRA = 20%, DA = 80%
                Basic Salary <= 20000 : HRA = 25%, DA = 90%
                Basic Salary > 20000 : HRA = 30%, DA = 95%     */


// #include<stdio.h>
// int main(){
//     int Basic_Salary,HRA,DA,Gross_Salary;
//     printf("enter the value of Basic_Salary:-");
//     scanf("%d",&Basic_Salary);
//     if (Basic_Salary<=10000){
//         HRA=Basic_Salary*20/100;
//         DA=Basic_Salary*80/100;
//         Gross_Salary=Basic_Salary+HRA+DA;
//         printf("Gross Salary:%d\n",Gross_Salary);
//     }
//     else if(Basic_Salary<=20000){
//         HRA=Basic_Salary*25/100;
//         DA=Basic_Salary*90/100;
//         Gross_Salary=Basic_Salary+HRA+DA;
//         printf("Gross Salary:%d\n",Gross_Salary);
//     }
//     else {
//         HRA=Basic_Salary*30/100;
//         DA=Basic_Salary*95/100;
//         Gross_Salary=Basic_Salary+HRA+DA;
//         printf("Gross Salary:%d\n",Gross_Salary);
//     }
// return 0; 
// }

//Question-68...Roller Coasters require children to have a minimum height of 5 feet. Any child below 
//              this height is generally not allowed on them. Write a program to accept a child’s 
//              height in inches and display if he or she will be allowed to ride or not.

// #include<stdio.h>
// int main(){
//     int height;
//     printf("Enter the height:");
//     scanf("%d",&height);
//     if(height>=60){
//         printf("Allowed\n");
//     }
//     else{
//        printf("Not Allowed\n");
//     }       
// return 0;
// }

//Question-69...Write a program to accept the cost price of a bike and display the road tax to be paid
//              according to the following criteria :
//              Cost price (in Rs) Tax
//               > 100000 15 %
//               > 50000 and <= 100000 10%
//               <= 50000 5%

// #include<stdio.h>
// int main(){
//     int Cost_Price;
//     printf("Enter the Cost_Price:");
//     scanf("%d",&Cost_Price);
//     if(Cost_Price<=100000){
//         if(Cost_Price<=50000){
//             printf("Road Tax:%d\n",Cost_Price*5/100);
//         }
//         else{
//           printf("Road Tax:%d\n",Cost_Price*10/100);
//         }      
//     }
//     else{
//        printf("Road Tax:%d\n",Cost_Price*15/100);
//     }       
// return 0;
// }

//Question-70...Write a program to find a maximum between three numbers. (Use minimum number of 
//              comparisons without using logical operators - and, or)

// #include<stdio.h>
// int main(){
//     int a,b,c,max=0;
//     printf("Enter the value of a,b,c:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         max=a;
//     }
//     else{
//         max=b;
//     }
//     if(max>c){
//         max=max;
//     }
//     else{
//       max=c;
//     }
//     printf("%d\n",max);
// return 0;
// }

//Question-71...Input a date in with day, month and year in different lines and output if it is valid.
//              If its valid, print valid, else print invalid.
//              (Hint: The year in the date must be greater than zero, the months must lie between 1 
//              and 12, and the days must lie between 1 and 31, depending on the month number. If the 
//              year is a leap year February will have 29 days as opposed to 28 in non leap years)


// #include<stdio.h>
// int main(){
//     int date,month,year;
//     printf("Enter the date:");
//     scanf("%d",&date);
//     printf("Enter the month:");
//     scanf("%d",&month);
//     printf("Enter the month:");
//     scanf("%d",&month);
//     if(year>=1800 && year<=2024);
//           if(month>=1 && month<=12){
//                if(month==2){
//                     if(year%400==0||year%4==0 && year%100!=0){
//                         if(date>=1 && date<=29){
//                            printf("Valid\n");
//                         }
//                         else{
//                         printf("Invalid\n");
//                     }
//                     else {
//                         if(date>=1 && date<=28){
//                           printf("valid\n");
//                         }
//                         else{
//                             printf("Invalid\n");
//                         }
//                     }
//                 }
//                 else if(month==4||month==6||month==9||month==11){
//                     if(date>=1 && date<=30){
//                         printf("valid\n"); 
//                     }
//                     else{
//                       printf("Invalid\n");
//                     }
//                 }
//                 else{
//                     if(date>=1 && date<=31){
//                         printf("valid\n");
//                     }
//                     else{
//                         printf("Invalid/n");
//                     }
//                 }
//             }
          
//     }
//  return 0;
// } Not correct

/*Question-72...Write a program to input electricity unit charges and calculate the total electricity
                bill according to the given condition:
                For the first 50 units Rs. 0.50/unit
                For next 100 units Rs. 0.75/unit
                For the next 100 units Rs. 1.20/unit
                For unit above 250 Rs. 1.50/unit
                An additional surcharge of 20% is added to the bill    */

// #include<stdio.h>
// int main(){
//     int Electricity_units,Unit_charges,Additional_charges,Total_bill;
//     printf("enter the Electricity_units:-");
//     scanf("%d",&Electricity_units);
//     if(Electricity_units<=50){
//         Unit_charges=Electricity_units*0.50;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d\n",Total_bill);
//     }else if(Electricity_units<=150){
//         Unit_charges=50*0.50 +(Electricity_units -50)*0.75;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d\n",Total_bill);
//     }else if(Electricity_units<=250){
//         Unit_charges=50*0.50+100*0.75+(Electricity_units-150)*1.20;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d\n",Total_bill);
//     }else {
//         Unit_charges=50*0.50+100*0.75+100*1.20+(Electricity_units-250)*1.50;
//         Additional_charges=Unit_charges*20/100;
//         Total_bill=Unit_charges+Additional_charges;
//         printf("%d\n",Total_bill);
//     }
// return 0;
// }

/*Question-73...Write a program to calculate the electricity bill (Accept the number of units from 
                the user) according to the following criteria: Unit Price
                First 100 units no charge
                Next 100 units Rs 5 per unit
                After 200 units Rs 10 per unit   */

// #include<stdio.h>
// int main(){
//     int Units;
//     printf("enter the Units:-");
//     scanf("%d",&Units);
//     if(Units<=100){
//         printf("Bill:%d\n",100*0);
//     }else if(Units<=200){
//         printf("Bill:%d\n",100*0+(Units-100)*5);
//     }else{
//         printf("Bill:%d\n",100*0+100*5+(Units-200)*10);
//     }
// return 0;
// }

/*Question-74...Accept the age, gender (‘M’, ‘F’), and the number of days and display the wages 
                accordingly If the age does not fall in any range then display the following message:
                “Enter appropriate age”
                Age: Gender Wage/day
                >=18 and <30 M 700 F 750
                >=30 and <=40 M 800 F 850    */

// #include<stdio.h>
// int main(){
//     int age,days;
//     printf("enter the age:");
//     scanf("%d",&age);
//     char gender;
//     printf("enter the gender:");
//     scanf("%c",&gender);
//     printf("enter the days:");
//     scanf("%d",&days);
//     if(age>=18 && age<30){
//         if(gender==male){
//             printf("Wages:%d\n",days*700);
//         }
//         else{
//            printf("Wages:%d\n",days*750);
//         }
//         printf("Bill:%d\n",100*0);
//     }else if(age>=30 && age<=40){
//         if(gender==male){
//             printf("Wages:%d\n",days*800);
//         }
//         else{
//            printf("Wages:%d\n",days*850);
//         }
//     }
//     else{
//       printf("Enter appropriate age\n");
//     }
// return 0;
// }

/*Question-75...Accept the number of days from the user and calculate the charge for the library 
                according to the following:
                First five days: Rs 2/day.
                Next 5 days: Rs 3/day.
                Next 5 days: Rs 4/day
                After 15 days: Rs 5/day   */

// #include<stdio.h>
// int main(){
//     int days;
//     printf("enter the days:");
//     scanf("%d",&days);
//     if(days<=5){
//         printf("Charge:%d\n",days*2);
//     }else if(days<=10){
//         printf("Charge:%d\n",5*2+(days-5)*3);
//     }else if(days<=15){
//         printf("Charge:%d\n",5*2+5*3+(days-10)*4);
//     }
//     else{
//         printf("Charge:%d\n",5*2+5*3+5*4+(days-15)*5);
//     }
// return 0;
// }

/*Question-77...Input four sides of a quadrilateral ABCD in the order AB, BC, CD, DA and an internal
                angle I and write a program to categorize the shape of a quadrilateral as either a 
                square, rhombus, rectangle, parallelogram, or irregular quadrilateral.   */

// #include<stdio.h>
// int main(){
//     int AB,BC,CD,DA,I;
//     printf("enter the side AB:");
//     scanf("%d",&AB);
//     printf("enter the side BC:");
//     scanf("%d",&BC);
//     printf("enter the side CD:");
//     scanf("%d",&CD);
//     printf("enter the side DA:");
//     scanf("%d",&DA);
//     printf("enter the internal angle I:");
//     scanf("%d",&I);
//     if(){
     
// return 0;
// }

/*Question-78...Write a program to input two numbers and sum them. However, if the sum is between 15 
                to 20 it will return 20.  */

// #include<stdio.h>
// int main(){
//     int a,b,sum=0;
//     printf("enter the a,b:");
//     scanf("%d%d",&a,&b);
//     sum=a+b;
//     if(sum>=15 && sum<=20){
//         printf("20\n");
//     }
//     else{
//         printf("%d\n",sum);
//     }
// return 0;
// }

/*Question-79...A certain steel is graded according to the following conditions:
               (i) Rockwell-hardness > 50
               (ii) Carbon content > 0.7
               (iii) Tensile strength > 5600 kg/cm2
               The steel is graded as follows:
               a. Grade 10, if all the conditions are satisfied
               b. Grade 9, if conditions (i) and (ii) are satisfied
               c. Grade 8, if conditions (ii) and (iii) are satisfied
               d. Grade 7, if conditions (i) and (iii) are satisfied
               e. Grade 0, otherwise
               Take three inputs from the user in the order of Rockwell-hardness, Carbon content, 
               Tensile strength and output the grade of the steel.    */

// #include<stdio.h>
// int main(){
//     float Rockwell,Carbon,Tensile;
//     printf("enter the Rockwell:");
//     scanf("%f",&Rockwell);
//     printf("enter the Carbon:");
//     scanf("%f",&Carbon);
//     printf("enter the Tensile:");
//     scanf("%f",&Tensile);
//     if(sum>=15 && sum<=20){
//         printf("20\n");
//     }
//     else{
//         printf("%d\n",sum);
//     }
// return 0;
// }

/*Question-80...Input an year from the user and output whether a given year is a leap year.
                (Hint. A year is said to be a leap year if it is either divisible by 4 but not by 
                100 or divisible by 400.)  */    

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the value of year:");
//     scanf("%d",&year);
//     if (year%4==0 && year%100!=0){
//     printf("%s\n","Yes");
//     }
//     else if (year%400==0) {
//         printf("%s\n","Yes");
//     }
//     else {
//     printf("%s\n","No");
//     }
// return 0;
// }

/*Question-81...In the above question take the first condition as divisibility of year by 100 and 
                write a program. Do the dry run for the same inputs.  */

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the value of year:-");
//     scanf("%d",&year);
//     if (year%100!=0 && year%4==0){
//     printf("%s\n","Yes");
//     }
//     else if (year%400==0) {
//         printf("%s\n","Yes");
//     }
//     else {
//     printf("%s\n","No");
//     }
// return 0;
// }

/*Question-82...In the above question take the first condition as divisibility of year by 400 and 
                write a program. Do the dry run for the same inputs.  */

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the value of year:-");
//     scanf("%d",&year);
//     if (year%400==0) {
//         printf("%s\n","Yes");
//     }
//     else if (year%4==0 && year%100!=0){
//     printf("%s\n","Yes");
//     }
//     else {
//     printf("%s\n","No");
//     }
// return 0;
// }

/*Question-83...Input three integers representing the angles of a triangle in degrees to determine 
                whether they form a valid set of angles of a triangle. If it is not a valid set, then 
                generate a message and terminate the process. If it is a valid set, then the process
                determines whether it is equiangular (all three angles are the same). It also 
                determines if the triangle is right-angled (has one angle with 90 degrees), obtuse-angled 
                (one angle above 90), or acute-angled (all three angles are below 90 degrees). Finally,
                it shows the conclusion about the triangle.    */



/*Question-84...Input the lengths of the three sides of a triangle to validate whether they can be 
                the sides of a triangle and then classify the triangle as equilateral (all three sides
                are equal), scalene (all three sides are different), or isosceles (exactly two sides 
                are equal),and then to see whether it is a right-angled triangle (the sum of the 
                squares of two sides is equal to the square of the third side.)
                (Hint: a triangle is possible to construct if sum of any two sides of the triangle is
                 greater than the third side).     */



/*Question-85...Write a program to check if the given number is divisible by 5, 11, both or none.
                If it is divisible by 5 then print 5
                If it is divisible by 11 then print 11
                If it is divisible by 5 and 11 then print “Both”
                If it is not divisible by 5 and 11 then print “None”     */

// #include<stdio.h>
// int main(){
//     int number;
//     printf("enter the number:");
//     scanf("%d",&number);
//     if(number%5==0 && number%11==0) {
//            printf("Both\n");
//     }
//     else if (number%5==0) {
//         printf("5\n");
//     }
//     else if (number%11==0){
//     printf("11\n");
//     }
//     else{
//         printf("None\n");
//     }
// return 0;
// }

/*Question-86...Input 3 numbers from the user and output the second max of 3 numbers.  */

// #include<stdio.h>
// int main(){
//     int a,b,c,max=0,smax=0;
//     printf("enter the value of a,b,c:");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b){
//         max=a;
//         smax=b;
//     }
//     else{
//         max=b;
//         smax=a;
//     }
//     if(max>c){
//         if(smax<c){
//             smax=c;
//         }
//     }
//     else{
//         smax=max;
//         max=c;
//     }
//     printf("%d\n",smax);
// return 0;
// }

/*Question-87...Input 4 numbers from the user and output the second max of 4 numbers.  */

// #include<stdio.h>
// int main(){
//     int a,b,c,d,max=0,smax=0;
//     printf("enter the value of a,b,c,d:");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if(a>b){
//         max=a;
//         smax=b;
//     }
//     else{
//         max=b;
//         smax=a;
//     }
//     if(max>c){
//         if(smax<c){
//             smax=c;
//         }
//     }
//     else{
//         smax=max;
//         max=c;
//     }
//     if(max>d){
//         if(smax<d){
//             smax=d;
//         }
//     }
//     else{
//         smax=max;
//         max=d;
//     }
//     printf("%d\n",smax);
// return 0;
// }

/*Question-88...Input 4 numbers from the user and output the third max of 4 numbers.   */

// #include<stdio.h>
// int main(){
//     int a,b,c,d,max=0,smax=0,tmax=0;
//     printf("enter the value of a,b,c,d:");
//     scanf("%d%d%d%d",&a,&b,&c,&d);
//     if(a>b){
//         max=a;
//         smax=b;
//     }
//     else{
//         max=b;
//         smax=a;
//     }
//     if(max>c){
//         if(smax>c){
//             tmax=c;
//         }
//         else{
//             tmax=smax;
//             smax=c;
//         }
//     }
//     else{
//         tmax=smax;
//         smax=max;
//         max=c;
//     }
//     if(max>d){
//         if(smax>d){
//             if(tmax>d){
//                 tmax=tmax;
//             }
//             else{
//                 tmax=d;
//             }
//         }
//         else{
//             tmax=smax;
//             smax=d;
//         }
//     }
//     else{
//         tmax=smax;
//         smax=max;
//         max=d;
//     }
//     printf("%d\n",tmax);
// return 0;
// }

/*Question-89...Input 5 numbers and output the maximum occurring number out of the given 5 numbers. */