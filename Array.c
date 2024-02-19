// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the lenght of Array >")
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;n>i;i++){
//         scanf("%d",&ar[i]);
//     }
//     for (int i=0;i<n;i++){
//         printf("%d ",ar[i]);
//     }
//     return 0;
// }

//Array Question-(Flowchart Perfomance)


/*Question-52...Write a program to print all the numbers from the given array using a loop.
                L = {23, 45, 32, 25, 46,33, 71, 90}         */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%2d",ar[i]);
//     }
// return 0;
// }

/*Question-53...Write a program to create an array of natural numbers till 20 and print it.   */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\n",ar[i]);
//     }
// return 0;
// }

/*Question-54...Write a program to reverse the array and print the reversed array.   */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=n-1;i>=0;i--){
//       printf("%d\n",ar[i]);
//     }
// return 0;
// }

/*Question-55...Write a program to take size of array, array and target as input from the user and 
                check whether the target exists in this array or not.   */

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     int t;
//     printf("Enter the terget:");
//     scanf("%d",&t);
//     for(int i=1;i<n;i++){
//         if(ar[i]==t){
//             printf("Yes\n");
//             exit(0);
//         }
//     }
//     printf("No\n");
// return 0;
// }

/*Question-56...Write a program to print the sum of all the odd numbers and even numbers in the given array.
            Note: In the output, you should print odd numbers sum and even numbers sum in this order only.*/

// #include<stdio.h>
// int main(){
//     int n,Even_Sum=0,Odd_Sum=0;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(ar[i]%2==0){
//             Even_Sum+=ar[i];
//         }
//         else{
//             Odd_Sum+=ar[i];
//         }
//     }
//     printf("Odd Numbers Sum:%d\nEven Numbers Sum:%d\n",Odd_Sum,Even_Sum);
// return 0;
// }

/*Question-57...Write a program to take N numbers from a user as input and store them in an array and 
                then take another number from the user M, and delete the Mth element from the array. 
                Print the final array. Note - (Do not use another array)    */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     int m;
//     printf("Enter the delete element:");
//     scanf("%d",&m);
//     m=m-1;
//     for(int i=m;i<n;i++){
//         ar[i]=ar[i+1];
//     }
//     for(int i=0;i<n-1;i++){
//         printf("%d ",ar[i]);
//     }
// return 0;
// }

/*Question-58...Write a program to take N numbers from a user as input and then take another number 
                from the user M, and a number X from the user to be inserted at the Mth location in 
                the array. Print the final array. Note - (Do not use another array)    */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//         scanf("%d",&ar[i]);
//     }
//     n=n+1;
//     int m;
//     printf("Enter the location:");
//     scanf("%d",&m);
//     m=m-1;
//     int x,temp;
//     printf("Enter the New Elements:");
//     scanf("%d",&x);
//     for(int i=m;i<n;i++){
//          temp=ar[i];
//          ar[i]=x;
//          x=temp;
//      }
//     for(int i=0;i<n;i++){
//        printf("%d ",ar[i]);  
//     }
// return 0;
// }

/*Question-59...Write a program to take N numbers from a user as input and then print the duplicates 
                in those N numbers. Also, take N as an input from the user.   */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(ar[i]==ar[j]){
//                printf("Duplicates Number:%d\n",ar[i]);
//             }
//         }
//     }
// return 0;
// }

/*Question-60...Write a program to take input n from the user and print Pascal's triangle of n rows.
                N=4
                        1
                        121
                        1331
                        14641       */

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n,c=1,p=1;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     for(int i=0;i<n;i++){
//         if(i==0){
//             ar[i]=pow(c,p);
//             c=c*10+1;
//             p++;
//         }
//         else{
//             ar[i]=pow(c,p);
//             p++;
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d\n",ar[i]);
//     }
// return 0;
// }

/*Question-61...Write a program to take N numbers from the user and print the frequency of every number.*/

// #include<stdio.h>
// int main(){
//     int n,count=0,frequency=0;

//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];

//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++)
//     {
//       scanf("%d",&ar[i]);
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(ar[i]!=0){
//           frequency=ar[i];
//           count=1;
//             for(int j=i+1;j<n;j++){
//                if(ar[i]==ar[j]){
//                   ar[j]=0;
//                   count++;
                
//                 }
//             }
//             printf("%d%d\n",frequency,-count);
//         } 
//     }
// return 0;
// }




/*Question-62...Write a program that rotates the elements of a list so that the elements at the first 
                index move to the second elements at the second index move to the third and so on. The
                last element moves at the first index. (Take array and no_of_rotations from the user)*/

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     int m,temp;
//     printf("Enter the Number of Rotations:");
//     scanf("%d",&m);
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n-1;j++){
//            temp=ar[j];
//            ar[j]=ar[j+1];
//            ar[j+1]=temp;
//         }
//     }
//     for(int i=0;i<n;i++){
//        printf("%d ",ar[i]);  
//     }
// return 0;
// }

/*Question-63...Write a program to take a binary array which contains 0 and 1, and print the maximum 
                number of consecutive 1's in the array.   */

// #include<stdio.h>
// int main(){
//     int n,count=0,max=0;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<n;i++)
//     {
//       if(ar[i]==1)
//       {
//         count+=1;
//       }
//       else if(max<count)
//       {
//         max=count;
//         count=0;
//       }
//       else
//       {
//         count=0;
//       }
//     }
    
//     if(count>max)
//       printf("%d\n",count);
//     else
//       printf("%d",max);
// return 0;
// }

/*Question-64...Write a program to take two sorted arrays of size M, N from the user as input and 
                merge them into a single sorted array of size M+N (Do not use sorting) */

// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;

//     printf("Enter the first Array length:");
//     scanf("%d",&n);

//     int ar1[n];
//     printf("Enter the Elements:");
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&ar1[i]);
//     }

//     int m;
//     printf("Enter the second Array length:");
//     scanf("%d",&m);

//     int ar2[m];
//     printf("Enter the Elements:");
//     for(j=0;j<m;j++)
//     {
//         scanf("%d",&ar2[j]);
//     }

//     int ar3[m+n];
//     i=0,j=0;

   
   
   
//     // for(k=0;k<m+n;)
//     // {
//     //    while(i<n)
//     //    {
//     //        while(j<m)
//     //        {
//     //           if(ar1[i]>ar2[j])
//     //           {
//     //               ar3[k++]=ar2[j];
//     //               j++;
//     //            }
//     //           else
//     //           {
//     //             ar3[k++]=ar1[i];
//     //             i++;
//     //           }
//     //        }
//     //         for(;i<n;)
//     //         {
//     //             ar3[k++]=ar1[i];
//     //             i++;
//     //         }
            
//     //     }     
//     //     for(;j<m;)
//     //     {
//     //         ar3[k++]=ar2[j];
//     //         j++;
//     //     }   
        
//     // }

  
  
  
  
//   for(k=0;k<m+n;)
//   {
//        while(i<n && j<m)
//        {
//            if(ar1[i]<ar2[j])
//            {
//                ar3[k++] = ar1[i];
//                i++;
//            }
//            else
//            {
//               ar3[k++] = ar2[j];
//               j++;
//            }
//        }

//        if(i<n)
//        {
//           for(;i<n;i++){
//               ar3[k++] =ar1[i];
//           }
          
//         }
//        else
//        {
//           for(;j<m;j++){
//               ar3[k++] =ar2[j];
//             }
//        }
//     }

//     //printing the result

//     for(k=0;k<m+n;k++)
//     {
//        printf("%3d",ar3[k]);
//     }

// return 0;
// }




/*Question-65...Write a program, to take two sorted arrays of size M and N from the user as input 
                and return the median of the two sorted arrays.  */

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the first Array length:");
//     scanf("%d",&n);
//     int ar1[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar1[i]);
//     }
//     int m;
//     printf("Enter the second Array length:");
//     scanf("%d",&m);
//     int ar2[m];
//     printf("Enter the Elements:");
//     for(int j=0;j<m;j++){
//      scanf("%d",&ar2[j]);
//     }
    
//     int k=0,i=0,j=0,temp;
//     int ar3[m+n];
//     for(i=0;i<n;i++){
//       ar3[k]=ar1[i];
//       k++;
//     }
//     for(j=0;j<m;j++){
//       ar3[k]=ar2[j];
//       k++;
//     }
    
//     for(k=0;k<m+n;k++){
//       if(ar3[k]>ar3[k+1]){
//         temp=ar3[k];
//         ar3[k]=ar3[k+1];
//         ar3[k+1]=temp;
//       }
//     }
    
//     float c;
//     if(k%2==0){
//       c=(float)(ar3[k/2]+ar3[k/2+1])/2;
//       printf("%.2f",c);
//     }
//     else{
//       printf("%d",ar3[k/2]);
//     }
//      printf("\n");
//     // for(k=0;k<m+n;k++){
//     //   printf("%2d",ar3[k]);
//     // }
//  return 0;
// }

/*Question-66...Write a program to take two sorted arrays from the user as input and find the Union 
                and Intersection of the arrays.  */


// #include<stdio.h>
// int main()
//   {
//     int n,i,j,k,l,u=0,d=0;

//     printf("Enter the first Array length:");
//     scanf("%d",&n);

//     int ar1[n];
//     printf("Enter the Elements:");
//     for(i=0;i<n;i++)
//     {
//       scanf("%d",&ar1[i]);
//     }

//     int m;
//     printf("Enter the second Array length:");
//     scanf("%d",&m);

//     int ar2[m];
//     printf("Enter the Elements:");
//     for(j=0;j<m;j++)
//     {
//       scanf("%d",&ar2[j]);
//     }

//     int ar3[u];
//     int ar4[d];
//     i=0,j=0,k=0,l=0;

    
    
//       while(i<n || j<m)
//       {
//         if(ar1[i]==ar2[j])
//         {
//           d++;
//           ar4[l++]=ar2[j];
//           j++;
//         }
//         else if (ar1[i]<ar2[j])
//         {
//           u++;
//           ar3[k++]=ar1[i];
//           i++;
//         }
//         else
//         {
//           u++;
//           ar3[k++]=ar2[j];
//           j++;
//         }
//       }
      
//       if(i<n)
//       { 
//         for(;i<n;i++)
//         {
//           u++;
//           ar3[k++]=ar1[i];
  
//         }
//       }
//       else
//       { 
//         for(;j<m;j++)
//         {
//           u++;
//           ar3[k++]=ar2[j];
//         }
//       }


//     //print section  
//     for(k=0;k<u;k++)
//     {
//       printf("%3d",ar3[k]);
//     }
//     printf("\n");

//     for(l=0;l<d;l++){
//       printf("%3d",ar4[l]);
//     }
//     printf("\n");

// return 0;
// }


  


/*Question-67...ake N numbers from the user as input and print them in an ascending order.
                Use the following algorithms to sort the array -
                Selection Sort
                Insertion Sort
                Bubble Sort          */

//Selection Sort...

// #include<stdio.h>
// int main(){
//     int n,min,temp,i,j;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(i=0;i<n-1;i++){
//         min=i;
//        for(int j=i+1;j<n;j++){
//            if(ar[min]>ar[j]){
//               min=j;
//             } 
//            else{
//             min=min;
//            }
//         }
//         temp=ar[i];
//         ar[i]=ar[min];
//         ar[min]=temp;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",ar[i]);
//     }
// return 0;
// }

//Insertion Sort...

// #include<stdio.h>
// int main(){
//     int n,temp,i,j;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=1;i<n;i++){
//        for(int j=i;j>0;j--){
//            if(ar[j-1]>ar[j]){
//               temp=ar[j];
//               ar[j]=ar[j-1];
//               ar[j-1]=temp;
//             } 
//         }
//     }
//     for(int i=0;i<n;i++){
//            printf("%d ",ar[i]);
//     }
// return 0;
// }

//Bubble Sort...

// #include<stdio.h>
// int main(){
//     int n,temp,i,j;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     for(int i=0;i<n-1;i++){
//        for(int j=0;j<n-1;j++){
//            if(ar[j]>ar[j+1]){
//               temp=ar[j];
//               ar[j]=ar[j+1];
//               ar[j+1]=temp;
//             } 
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",ar[i]);
//     }
// return 0;
// }

/*Question-68...Write a program to take an unsorted array of size N that contains only non-negative 
                integers, and find a contiguous subarray that adds to a given number S. In case of 
                multiple subarrays, return the subarray which comes first on moving from left to right.
                Let us say the array is 3, 6, 7, 5, 10. And the value of S     */


// #include<stdio.h>
// int main(){
//     int n,i,j,k;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     int S,sum;
//     printf("Enter the value of S:");
//     scanf("%d",&S);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=ar[k];
//             }
//             if(sum==S){
//                for(int k=i;k<=j;k++){
//                 printf("%d ",ar[k]);
//                }
//             }
//         }
//     }
// return 0;
// }

/*Question-69...Write a program to take an array of size N and a number K from the user as input, and 
                print the elements of an array in a rotated manner with a gap of K. Eg, let us say the
                array is 3, 6, 7, 5, 10. And the value of k = 3. The output should be - 7, 3, 10, 6, 5. 
                If k = 2, the output should be 6, 5, 3, 10, 7   */

// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;

//     printf("Enter the Array length:");
//     scanf("%d",&n);

//     int ar1[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++)
//     {
//          scanf("%d",&ar1[i]);
//     }
       
//     int ar2[n];
//     int realcount = 0,count=0;

//     printf("Enter the value of k:");
//     scanf("%d",&k);

//          j = 0,i=0;

//          while(realcount<n)
//         {
//             if(ar1[i]!=0)
//             {
//              count++;
//             }
//             if(count==k)
//             {
//                ar2[j++]=ar1[i];
//                ar1[i]=0;
//                count = 0;
//                realcount++;
//             }
             
//              // increament of i to move in next element
//              i++;

//              if(i==n)
//             {
//                 i = 0;
//             }
            
            
//         }

//     //printing the result

//     for(int i=0;i<n;i++)
//      {
//         printf("%3d",ar2[i]);
//      }

//     return 0;
// }

/*Question-70...Write a program to take a sorted array from the user as input and find a number using 
                the Binary Search algorithm.   */

// #include<stdio.h>
// int main(){
//     int m,n,i,j,k,count;
//     printf("Enter the Array length:");
//     scanf("%d",&n);
//     int ar[n];
//     printf("Enter the Elements:");
//     for(int i=0;i<n;i++){
//     scanf("%d",&ar[i]);
//     }
//     int number;
//     printf("Enter the number:");
//     scanf("%d",&number);
//     int start=0,end=n-1,mid=0;
//     while(start<=end)
//     {
//         mid=(start+end)/2;
//         if(ar[mid]==number){
//             printf("Yes\n");
//             return 0;
//         }
//         else if(ar[mid]<number){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//     }
//     printf("No\n");
// return 0;
// }



//2D





/*Question-71...Write a program to add two matrices and store them in a separate matrix. */

// #include<stdio.h>
// int main(){
//   int row,column;
//   printf("Enter the first matrices row & column:");
//   scanf("%d%d",&row,&column);
//   int matrices1[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("Enter the value:");
//       scanf("%d",&matrices1[i][j]);
//     }
//   }
//   printf("Enter the second matrices row & column:");
//   scanf("%d%d",&row,&column);
//   int matrices2[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("Enter the value:");
//       scanf("%d",&matrices2[i][j]);
//     }
//   }
//   int matrices3[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       matrices3[i][j]=matrices1[i][j]+matrices2[i][j];
//     }
//   }
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("%3d",matrices3[i][j]);
      
//     }
//     printf("\n");
//   }
// return 0;
// }

/*Question-72...Write a program to subtract two matrices and store them in a separate matrix.  */

// #include<stdio.h>
// int main(){
//   int row,column;
//   printf("Enter the first matrices row & column:");
//   scanf("%d%d",&row,&column);
//   int matrices1[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("Enter the value:");
//       scanf("%d",&matrices1[i][j]);
//     }
//   }
//   printf("Enter the second matrices row & column:");
//   scanf("%d%d",&row,&column);
//   int matrices2[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("Enter the value:");
//       scanf("%d",&matrices2[i][j]);
//     }
//   }
//   int matrices3[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       matrices3[i][j]=matrices1[i][j]-matrices2[i][j];
//     }
//   }
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("%3d",matrices3[i][j]);
      
//     }
//     printf("\n");
//   }
// return 0;
// }

/*Question-73...Write a program to transpose matrix A. Store the result in a separate matrix. */

// #include<stdio.h>
// int main(){
//   int row,column;
//   printf("Enter the first matrices row & column:");
//   scanf("%d%d",&row,&column);
//   int matrices1[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("Enter the value:");
//       scanf("%d",&matrices1[i][j]);
//     }
//   }
//   int matrices2[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       matrices2[j][i]=matrices1[i][j];
//     }
//   }
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("%3d",matrices2[i][j]);
      
//     }
//     printf("\n");
//   }
// return 0;
// }

/*Question-74...Write a program to find the minimum element in the matrix.  */

// #include<stdio.h>
// int main(){
//   int row,column;
//   printf("Enter the first matrices row & column:");
//   scanf("%d%d",&row,&column);
//   int matrices[row][column];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       printf("Enter the value:");
//       scanf("%d",&matrices[i][j]);
//     }
//   }
//   int min=matrices[0][0];
//   for(int i=0;i<row;i++){
//     for(int j=0;j<column;j++){
//       if(min<matrices[i][j]){
//         min=min;
//       }
//       else{
//         min=matrices[i][j];
//       }
//     }
//   }
//   printf("%d\n",min);
  
// return 0;
// }

/*Question-75...Write a program to take an odd number N from the user and print a magic square of 
                N x N size filling it from 1 to N^2.   
                                                      8 1 6
                                                      3 5 7
                                                      4 9 2             */

// #include<stdio.h>
// int main(){
//   int N,count=0,i,j;
//   printf("Enter an odd value for N:");
//   scanf("%d",&N);
//   i=0,j=N/2;
//   while(count<=N*N)
//   {
//     while(i<N) 
//     {
      
//       while(j<N)
//       {
//         count++;
//         matrices[i][j]=count;

//       }
//     }
//   }

// }




/*Question-76...Write a program to take the input from the user and print the following pattern 
                according to the input.   
                1  2  3  4
                12 13 14 5
                11 16 15 6
                10 9  8  7      */

// #include<stdio.h>
// int main(){
//   int n,row,column,i,j;
//   printf("Enter the value of n:");
//   scanf("%d",&n);
//   row=n,column=n;
//   int matrices[row][column],count=0,min=0,max=n-1;
//   while(count<row*column){
//     i=min;
//     for(j=min;j<=max;j++){
//       count++;
//       matrices[i][j]=count;
        
//     }
//     j=max;
//     for(i=min+1;i<=max;i++){
//       count++;
//       matrices[i][j]=count;
        
//     }
//     i=max;
//     for(j=max-1;j>=min;j--){
//       count++;
//       matrices[i][j]=count;
        
//     }
//     j=min;
//     for(i=max-1;i>=min+1;i--){
//       count++;
//       matrices[i][j]=count;
//     }
//     min++,max--;
    
//   }
//   for(i=0;i<row;i++){
//     for(j=0;j<column;j++){
//       printf("%3d",matrices[i][j]);
      
//     }
//     printf("\n");
//   }

// return 0;
// }

/*Question-77...Write a program to take two numbers as input each in a different array. Each digit of
                the number should be in an element in the array. calculate their sum in another array
                such that each digit is stored as an array element and print the sum.  */

// #include<stdio.h>
// int main()
//   {
//     int n,i,j,k,u=0,d=0,sum=0,sum1=0,sum2=0,count=0,digit=0;

//     printf("Enter the first Array length:");
//     scanf("%d",&n);

//     int ar1[n];
//     printf("Enter the Elements:");
//     for(i=0;i<n;i++)
//     {
//       scanf("%d",&ar1[i]);
//       sum1=sum1*10+ar1[i];
//     }

//     int m;
//     printf("Enter the second Array length:");
//     scanf("%d",&m);

//     int ar2[m];
//     printf("Enter the Elements:");
//     for(j=0;j<m;j++)
//     {
//       scanf("%d",&ar2[j]);
//       sum2=sum2*10+ar2[j];
//     }
//     int ar3[count];
//     sum=sum1+sum2,k=0;
//     while(sum>0){
//       count++;
//       digit=sum%10;
//       for(;k<count;k++){
//         ar3[k]=digit;
//       }
//       sum=sum/10;

//     }
//     for(k=count-1;k>=0;k--){
//       printf("%d",ar3[k]);
//     }
//     printf("\n");
// return 0;
//  }

 /*Question-78...Write a program to take two numbers as input each in a different array. Each digit 
                 of the number should be in an element in the array. calculate their product in another 
                 array such that each digit is stored as an array element and print the product. */

// #include<stdio.h>
// int main()
//   {
//     int n,i,j,k,u=0,d=0,product=0,sum1=0,sum2=0,count=0,digit=0;

//     printf("Enter the first Array length:");
//     scanf("%d",&n);

//     int ar1[n];
//     printf("Enter the Elements:");
//     for(i=0;i<n;i++)
//     {
//       scanf("%d",&ar1[i]);
//       sum1=sum1*10+ar1[i];
//     }

//     int m;
//     printf("Enter the second Array length:");
//     scanf("%d",&m);

//     int ar2[m];
//     printf("Enter the Elements:");
//     for(j=0;j<m;j++)
//     {
//       scanf("%d",&ar2[j]);
//       sum2=sum2*10+ar2[j];
//     }
//     int ar3[count];
//     product=sum1*sum2,k=0;
//     while(product>0){
//       count++;
//       digit=product%10;
//       for(;k<count;k++){
//         ar3[k]=digit;
//       }
//       product=product/10;

//     }
//     for(k=count-1;k>=0;k--){
//       printf("%d",ar3[k]);
//     }
//     printf("\n");
// return 0;
//}

/*Question-...Write a program to take value N from the user and print the following pattern based on 
              the user input. array = [2, 3, 5, 2, 1]
>>                        
>>>                
>>>>>
>>                        
>         */     

// #include<stdio.h>
// int main(){
//     int n,i,j,k;

//     printf("Enter the Array length:");
//     scanf("%d",&n);

//     int ar[n];
//     printf("Enter the Elements:");
//     for(i=0;i<n;i++)
//     {
//       scanf("%d",&ar[i]);
//     }
//     for(i=0;i<n;i++){
//       for(j=1;j<=ar[i];j++){
//         if(j==ar[i]){
//           for(k=j;k>0;k--){
//             printf(">");
//           }
//         }
//       }
//       printf("\n");
//     }
// return 0;
// }





/*Question-...Write a program to take value N from the user and print the following pattern based on 
              the user input. array = [2, 3, 5, 2, 1]

                      *                
                      *                
                    * *                
                  * * * *        
                  * * * * *          */


// #include<stdio.h>
// int main(){
//   int n,i,j,max=0,index=0;

//     printf("Enter the Array length:");
//     scanf("%d",&n);

//     int ar[n];
//     printf("Enter the Elements:");
//     for(i=0;i<n;i++)
//     {
//       scanf("%d",&ar[i]);

//       if(max<ar[i])
//       {
//         max=ar[i];
//         index=i;
//       }
//     }
//     i=0;
//     for(i=0;i<max;i++)
//     {
//       j=0;
//       while(j<n)
//       {
//         if(i>=max-ar[j]||j==index)
//         {
//           printf(" * ");
//         }
//         else{
//           printf("   ");
//         }
//         j++;
//       }
//       printf("\n");
//     }
// return 0;
// }
