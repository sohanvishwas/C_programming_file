// #include<stdio.h>
// int main () {
//    printf("Hello World");
// }



// #include<stdio.h>
// int main () {
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     int b;
//     printf("enter the value of b:-");
//     scanf("%d",&b);
//     int sum=a+b;
//     printf("sum:- %d",sum);

// return 0;    

// }



// #include<stdio.h>
// int main (){
//     int a,b;
//     printf("enter the value of a:-,b:-");
//     scanf("%d %d",&a,&b);
//     int sum=a+b;
//     printf("sum:-%d",sum);

// return 0;
// }

//Question-...Find the Reminder without Modulus.

// #include<stdio.h>
// int main(){
//     int a,b,integer_division,multiple,subtract;
//     printf("Enter the value of a,b:");
//     scanf("%d%d",&a,&b);
//     integer_division=a/b;
//     multiple=integer_division*b;
//     subtract=a-multiple;
//     printf("Reminder:%d\n",subtract);

// return 0;
// }

//Question-...Write a program to take positive or negative number as input, but output always positive.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number,no,square;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     no=pow(number,2);
//     square=pow(no,0.5);
//     printf("number:%d\n",square);
// return 0;
// }

//Question-... Take integer as input and print half of the number.
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter the integer number:");
//     scanf("%d",&number);
//     float half;
//     half=(float)number/2;
//     printf("Half of the number:%.2f\n",half);
// return 0;
// }

//Quesion-...Take float input and print the fractional part of the real number.

// #include<stdio.h>
// int main(){
//     float number;
//     printf("Enter the float number:");
//     scanf("%f",&number);
//     int no=number;
//     float fractional=number-no;
//     printf("Fractional part of the real number is:%.2f\n",fractional);
// return 0;
// }

//Question-...Hierarchy of operators

// #include<stdio.h>
// int main(){
//     int i=2*3/4+4/4+8-2+5/8; //Left to Right calculation
//     printf("%d\n",i);
// return 0;
// }

//Question-...Hierarchy

// #include<stdio.h>
// int main(){
//     int i=2,j=3,k,l;
//     float a,b;
//     k=i/j*j;
//     l=j/i*i;
//     a=i/j*j;
//     b=j/i*i;
//     printf("%d %d %f %f",k,l,a,b);
// return 0;
// }

//Question-... character data type

// #include<stdio.h>
// int main(){
//     char ch='a',chr='#';
//     printf("%c %c",ch,chr);
// return 0;
// }

//Question-..Find ASCII values

// #include<stdio.h>
// int main(){
//     char ch='a';
//     printf("%d",ch);
// return 0;
// }



//Operators Question-(Flowchart Perfomance)

//Question-01....Write a program to take three variables to store your birth date,birth month,and birth year,
//               respectively,and print them one by one in a specified order.

// #include<stdio.h>
//  int main (){
//     int date=22,year=2021;
//     char month[]="may";
//     printf("%d\n%s\n%d\n",date,month,year);
//  return 0;   
//  }



////Question-02....Write a program to take input from the user,and then print it to the output.

// #include<stdio.h>
// int main (){
//     int a;
//     printf("enter the value of a:-");
//     scanf("%d",&a);
//     printf("a:-%d\n",a);
// return 0;
// }


////Question-03....Write a program to take two valus from the user and swap them.

// #include<stdio.h>
// int main(){
//   int a,b,temp;
//   printf("Enter the first number :");
//   scanf("%d",&a);
//   printf("Enter the second number :");
//   scanf("%d",&b);
//   temp=b;
//   b=a;
//   a=temp;
//   printf("%d\n%d\n",a,b);
// return 0;
//  }


////Question-04....Write a program to take two number from the users and perform six basic operators (addition,
//                 subtraction,multiplication,division,integer division and modulus) on those.
                   

// #include<stdio.h>
// int main(){
//   int a,b;
//   printf("enter the value of a:-,b:-");
//   scanf("%d %d",&a,&b);
//   int addition=a+b;
//   int subtraction=a-b;
//   int multiplication=a*b;
//   int division=a/b;
//   float integer_division=a/b;
//   int modulus=a%b;
//   printf("\n%d\n%d\n%d\n%d\n%f\n%d\n",addition,subtraction,multiplication,division,integer_division,modulus);
// return 0;  
// }  

////Question-04
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//   int a,b;
//   printf("enter the value of a:-,b:-");
//   scanf("%d %d",&a,&b);
//   printf("\n%d\n%d\n%d\n%d\n%f\n%d\n",a+b,a-b,a*b,a/b,(float)a/b,a%b);
// return 0;
// }


// Question-05....Write a program to take two numbers A and B from the users and calculate the quotient and reminder
//                when number A is divided by number B.

// #include<stdio.h>
// int main(){
//   int a,b;
//   printf("enter the value of a:-,b:-");
//   scanf("%d %d",&a,&b);
//   printf("%d\n%d\n",a/b,a%b);
// return 0;
// }



//Question-06....Write a program to take a positive number from the user and then display the last digit of that number.

// # include<stdio.h>
// int main (){
//     int a;
//     printf("enter the number of a:-");
//     scanf("%d",&a);
//     // int last_digit;
//     // last_digit=a%10;
//     // printf("%d\n",last_digit);
//     printf("%d\n",a%10);
// return 0;
// }


//Question-07....write a program to convert a temperature from Celsius to Fahrenheit using the formula c/5=(F-32)/9 .

// #include<stdio.h>
// int main (){
//     int C,F;
//     printf("enter the value of C");
//     scanf("%d",&C);
//     F=9*(C/5)+32;
//     printf("%d\n",F);
// return 0;
// }



//Question-08....Write a program to take two inputs from the user and swap them without using a temporary or third variable.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enrter the value of a,b");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d\n%d\n",a,b);
// return 0;
// }


//Question-09....Write a program to take two numbers,A and B from the user.Your task is to find the largest number that is
//               less than A and can divided evenly by B.

// #include<stdio.h>
// int main (){
//     int a,b,number;
//     printf("enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     number=a%b;
//     printf("%d\n",a-number);
// return 0;
// }



//Operators Question-(Flowchart Assignment) 200-question

//Question-01...Create a program that asks the user for two numbers,adds them together,and then display
//              the result.

// #include<stdio.h>
// int main(){
//     int a,b,add;
//     printf("enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     add=a+b;
//     printf("add:-%d\n",add);
// return 0;
// }

//Question-02...Create a program that takes two numbers from the user and calculates their average.

// #include<stdio.h>
// int main(){
//     int a,b,average;
//     printf("enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     average=(a+b)/2;
//     printf("average:-%d\n",average);
// return 0;
// }

//Question-04...Write a program to calculate the area of trangle based on its base and hight.You need
//              to create a program that takes the base and height of the triangle as input from the 
//              user and then calculate and display the area of the triangle.
//              Area of trangle=(base*hight)*1/2

// #include<stdio.h>
// int main(){
//     float base,hight;
//     printf("enter the base,hight");
//     scanf("%f%f",&base,&hight);
//     float area=0;
//     area=(base*hight)*1/2;
//     printf("area:%f\n",area);
// return 0;
// }

//Question-06...You have some money(let's call it "p") that you want to invest.You'll leave it invasted
//              for a certain number of the years (let's call it "N").Every year,the money you have 
//              invested will grow by a certain percentage of the orignial amount, which is determined
//              by the annual interest rate(let's call it "I").
//              The formula to calculate the total amount of money you'll have after "N" years is:
//              T=P*(1+I/100)^N

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float P,N,I,T;
//     printf("enter the value of P,N,I :");
//     scanf("%f%f%f",&P,&N,&I);
//     T=P*pow((1+I/100),N);
//     printf("T:%.2f\n",T);
// return 0;
// }

//Question-07...Write a program to show how to swap the values of two variables.

// #include<stdio.h>
// int main(){
//     int a,b,temp;
//     printf("Enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     temp=b;
//     b=a;
//     a=temp;
//     printf("%d\n%d\n",a,b);
// }

//Question-08...write a program to show how to swap the values of two variables without using third
//              variable.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the value of a,b");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d\n%d\n",a,b);
// return 0;
// }

//Question-09...Write a program that asks the user for their name,then displays a welcome message
//              on the screen in the formate"Welcome [name]".

// #include<stdio.h>
// int main(){
//     char name[100];
//     printf("enter the name:");
//     scanf("%s",name);
//     printf("Welcome %s\n",name);
// return 0;
// 

//Question-10...Write a program that can perform four basic operations(addition,subtraction,division,and multiplication)on
//              two givin whole numbers,A and B.

// #include<stdio.h>
// int main (){
//     int A,B;
//     printf("enter the value of A,B:");
//     scanf("%d%d",&A,&B);
//     printf("Addition:%d\nSubtraction:%d\nDivision:%d\nMultiplication:%d\n",A+B,A-B,A/B,A*B);
// return 0;
// }

//Question-11...Write a program to calculate the area and perimeter of a rectangle.(Input length and breadth of the rectangle
//              from the user)
//              Area of Rectangle=length*breadth
//              Perimeter of Rectangle=2*(length+breadth)

// #include<stdio.h>
// int main(){
//     float length,breadth;
//     printf("Enter the length,breadth:");
//     scanf("%f%f",&length,&breadth);
//     printf("Area:%.2f\nPerimeter:%.2f\n",length*breadth,2*(length+breadth));
// return 0;
//}

//Question-12...Write a program to calculate the area and perimeter of a square.(input side length
//              of the square from the user)
//              Area of Square=side*side
//              Perimeter of Square=4*side

// #include<stdio.h>
// int main(){
//     int side;
//     printf("Enter the side:");
//     scanf("%d",&side);
//     printf("Area:%d\nPerimeter:%d\n",side*side,4*side);
// return 0;
// }

//Question-13...A triangle is a shape with three sides.There's a special number called the "semiperimeter"
//              that's helpful when working with triangles.To calculate the semiperimeter,you need
//              to know the lenghts of all three sides of the tringle.You can get these lenghths from
//              the person using the program.Once you have these three number,you perform a few 
//              calculations to find the semiperimeter of the triangle.
//              Semiperimeter of triangle=(a+b+c)/2

// #include<stdio.h>
// int main(){
//     float a,b,c;
//     printf("enter the value of a,b,c:");
//     scanf("%f%f%f",&a,&b,&c);
//     printf("Semiperimeter:%.1f\n",(a+b+c)/2);
// return 0;
// }

//Question-14...You want to find out how much space is inside a circle this space is also called as 
//              Area. To do this, you need to know the lengthfrom the center of the circle to its 
//              edge. This length is called the radius. Your task is to create a program that will 
//              print the area of circle. (take π = 3.14)
//              Area of circle= π * (radius)^2

// #include<stdio.h>
// #include<math.h>
// int main(){
//     float redius,pi=3.14;
//     printf("enter the redious:");
//     scanf("%f",&redius);
//     printf("Area:%.1f\n",pi*pow(redius,2));
// return 0;
// }

//Question-15...You want to find out the diameter of a circle when you know its circumference.The
//              diameter is the distance across the circlethrough its center. To do this, you need 
//              to create a program that takes the circumference of the circle as input from the 
//              user andthen calculates the diameter of the circle. (take π = 3.14)
//              Diameter of Circle = Circumference / π 

// #include<stdio.h>
// int main(){
//     float circumference,pi=3.14;
//     printf("Enter the circumference:");
//     scanf("%f",&circumference);
//     printf("Diameter:%.3f\n",circumference/pi);
// return 0;
// }

//Question-16...write a program to calculate the surface area of a cube. A cube is a box-like shape
//              where all sides are the same length. There are NFC14two types of surface areas we can 
//              calculate: the lateral surface area and the total surface area.
//              1. Lateral Surface Area: This is the sum of the areas of the four sides (faces) of the
//                 cube that don't include the top and bottom.It's like the wrapping paper you would
//                 need to cover the sides of the cube.Lateral Surface Area= 4*(side)^2
//              2. Total Surface Area: This is the sum of the areas of all six sides (faces) of the 
//                 cube. It includes both the lateral sides, top, andbottom. Imagine covering the 
//                 entire cube with wrapping paper.Total Surface Area=6*(side)^2

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int side;
//     printf("enter the side:");
//     scanf("%d",&side);
//     printf("Lateral Surface Area:%.2lf\nTotal surface Area:%.2lf\n",4*pow(side,2),6*pow(side,2));
// return 0;
// }

//Question-17...You have a cube, which is a 3D shape with all sides of equal length. Your task is to 
//              write a program that can find the volume of this cube. To do that, you need to know 
//              the length of one side of the cube.
//              Volume of Cube= side^3

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int side;
//     printf("enter the side:");
//     scanf("%d",&side);
//     printf("Volume of Cube:%.2lf\n",pow(side,3));
// return 0;
// }

//Question-18...Imagine a rectangular box, like a shoebox, which is called a cuboid. It has three 
//              different lengths: length, width, and height. The problem is about finding two things:
//              1. Lateral Surface Area: This is the total area of the four sides of the cuboid, 
//                 excluding the top and bottom faces.
//                 Lateral surface area of cuboid = 2 * height * (length + width)
//              2. Total Surface Area: This includes the area of all six sides of the cuboid.
//                 Total surface area of cuboid= 2*(length * width + width * height + height * length)
//              You need to write a program that takes the three side lengths (length, width, and 
//              height) of the cuboid from the user as input and calculates both the lateral surface 
//              area and the total surface area.

// #include<stdio.h>
// int main(){
//     int length,width,height;
//     printf("Enter the length,width,height:");
//     scanf("%d%d%d",&length,&width,&height);
//     printf("Lateral Surface Area:%d\n",2*height*(length + width));
//     printf("Total Surface Area:%d\n",2*(length*width + width*height + height*length));
// return 0;
// }

//Question-19...Write a program to calculate the volume of a cuboid.(Input the side lengths of the
//              cuboid from the user) formula for volume of cuboid = Length × Width × Height

// #include<stdio.h>
// int main(){
//     int length,width,height;
//     printf("Enter the length,width,height:");
//     scanf("%d%d%d",&length,&width,&height);
//     printf("Volume of Cuboid:%d\n",length*width*height);
// return 0;
// }

//Question-20...You need to create a program that takes a positive number as input from the user and 
//              then displays the last digit of that number.

// #include<stdio.h>
// int main(){
//     int number,digit;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     digit=number%10;
//     printf("Last digit:%d\n",digit);
// return 0;
// }

//Question-21...Write a program to calculate remainder when a is divided by b.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the value of a,b:");
//     scanf("%d%d",&a,&b);
//     printf("Reminder:%d\n",a%b);
// return 0;
// }

//Question-22...Write a program to calculate the quotient when a is divided by b.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the value of a,b:");
//     scanf("%d%d",&a,&b);
//     printf("Quotient:%d\n",a/b);
// return 0;
// }

//Question-23...You want to create a program that calculates the selling price of a product when you 
//              know the Maximum Retail Price (MRP) andthe discount percentage. The program should 
//              take inputs from the user, the MRP, and the discount percentage, and then itshould 
//              calculate and display the selling price of the product after applying the discount.
//              Selling Price = MRP - (Discount / 100) * MRP

// #include<stdio.h>
// int main(){
//     float MRP,discount;
//     printf("Enter the MRP,discount:");
//     scanf("%f%f",&MRP,&discount);
//     printf("Selling Price:%.2f\n",MRP-(discount/100)*MRP);
// return 0;
// }

//Question-24...Write a program to calculate the square of a number.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     printf("Square:%.0lf\n",pow(number,2));
// return 0;
// }

//Question-25...Write a program to calculate the cube of a number.

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int number;
//     printf("Enter tne number:");
//     scanf("%d",&number);
//     printf("Cube:%.0lf\n",pow(number,3));
// return 0;
// }

//Question-26...Write a program to calculate how many books we can buy if we have x Rs . (Cost of a 
//              book = Rs. y)(input x,y from user)

// #include<stdio.h>
// int main(){
//     int x,y;
//     printf("Enter the value of x,y:");
//     scanf("%d%d",&x,&y);
//     printf("Books:%d\n",x/y);
// return 0;
// }

//Question-27..write a program to find out how many Pens can be bought if one pen costs Rs. 5 take 
//             the money from the user.

// #include<stdio.h>
// int main(){
//     int money,cost=5;
//     printf("Enter the money:");
//     scanf("%d",&money);
//     printf("Pens:%d\n",money/cost);
// return 0;
// }

//Question-28...Write a program to calculate the total marks obtained by a student in examination. 
//              (Subjects : - Hindi, Maths, English, Science,Computer)
//              (Input marks of all 5 subjects from the user)

// #include<stdio.h>
// int main(){
//     int Hindi,Maths,English,Science,Computer;
//     printf("Enter the marks of Hindi,Maths,English,Science,Computer:");
//     scanf("%d%d%d%d%d",&Hindi,&Maths,&English,&Science,&Computer);
//     printf("Total Marks:%d\n",Hindi+Maths+English+Science+Computer);
// return 0;
// }

//Question-29...Write a program to calculate the percentage of each subject in the above question.

// #include<stdio.h>
// int main(){
//     double Hindi,Maths,English,Science,Computer;
//     printf("Enter the marks of Hindi,Maths,English,Science,Computer");
//     scanf("%lf%lf%lf%lf%lf",&Hindi,&Maths,&English,&Science,&Computer);
//     printf("Hindi:%.1lf\nMaths:%.1lf\nEnglish:%.1lf\nScience:%.1lf\nComputer:%.1lf\n",100*Hindi/500,100*Maths/500,100*English/500,100*Science/500,100*Computer/500);
// return 0;
// }

//Question-30...Write a program to determine the acceleration due to gravity (g), where g can be 
//              obtained from the following formula:
//              T = 2π(l/g)^(1/2)
//              where T = Time period of a simple pendulum
//              And l = Effective length of the simple pendulum (Input T and l from user)

// #include<stdio.h>
// #include<math.h>
// int main(){
//     double T,l,pi=3.14,g;
//     printf("enter the value of T,l:");
//     scanf("%lf%lf",&T,&l);
//     g=(4*pow(pi,2)*l)/pow(T,2);
//     printf("g:%.2lf\n",g);
// return 0;
// }

//Question-31...A store sells Vadapavs & Samosas. They want a system where they enter the number of 
//              Vadapavs (V) and Samosas (S) acustomer buys and a bill with the final price is 
//              automatically calculated and displayed.A Vadapav costs 12₹, while a Samosas costs 15₹.
//              Write a program to create such a system.

// #include<stdio.h>
// int main (){
//     int vadapavs,samosas,Vcosts=12,Scosts=15;
//     printf("Enter the number of vadapavs,samosas:");
//     scanf("%d%d",&vadapavs,&samosas);
//     printf("Final Price:%d\n",vadapavs*Vcosts + samosas*Scosts);
// return 0;
// }

//Question-32...Write a program to obtain the Fahrenheit equivalent of a temperature given in Celsius 
//              where the relationship between the two scales of temperature is C/5 = (F-32)/9

// #include<stdio.h>
// int main(){
//     int C,F;
//     printf("enter the value of C:");
//     scanf("%d",&C);
//     F=9*(C/5)+32;
//     printf("F:%d\n",F);
// return 0;
// }

//Question-33...You have two numbers, A and B. Your task is to find the largest number that is less 
//              than A and can be divided evenly by B. Can you figure out that number?

// #include<stdio.h>
// int main(){
//     int A,B,Number;
//     printf("Enter the value of A,B:");
//     scanf("%d%d",&A,&B);
//     Number=A/B;
//     printf("%d\n",B*Number);
// return 0;
// }