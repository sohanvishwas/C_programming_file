// #include<stdio.h>
// int main(){
//     printf("Welcome To North India Restaurant\n");
//     printf("1.Monday\n2.Tuesday\n3.Wednesday\n4.Tursday\n5.Friday\n6.Saturday\n7.Sunday\n");
    
//     int day;
//     printf("Choose your day:"); 
//     scanf("%d",&day);
//     if(day==1){
//         printf("Thank you for choosing 'Monday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
    
//     }else if(day==2){
//         printf("Thank you for choosing 'Tuesday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
//     }
//     else if(day==3){
//         printf("Thank you for choosing 'Wednesday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
//     }
//     else if(day==4){
//         printf("Thank you for choosing 'Tursday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
//     }
//     else if(day==5){
//         printf("Thank you for choosing 'Friday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
//     }
//     else if(day==6){
//         printf("Thank you for choosing 'Saturday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
//     }
//     else if(day==7){
//         printf("Thank you for choosing 'Sunday'\n1.Breakfast\n2.Lunch\n3.Dinner\n");
//         int time;
//         printf("Choose your time:");
//         scanf("%d",&time);
//         if(time==1){
//             printf("Thank you for choosing 'Breakfast'\n1.Vage\n2.Non-Vage\n");
            
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                 printf("Thank you for choosing 'vage'\n1.Sandwich\n2.Poha\n3.Kheer\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Sandwich'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease Pay 40 for 'Half Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Sandwich'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Poha'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Poha'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Kheer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Kheer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Kheer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                printf("Thank you for choosing 'Non-Vage'\n1.Fish Fry\n2.Chicken Pakora\n3.Egg Omlates");
//                int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                   printf("Thank you for choosing 'Fish Fry'\n1.Half Plate\n2.Full Plate\n");
//                   int quentity;
//                   printf("choose food quentity:");
//                   scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nplease pay 40 for 'Half Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=40){
//                            refund=amount-40;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 80 for 'Full Plate Fish Fry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=80){
//                            refund=amount-80;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
                

//                 }
//                 else if(food==2){
//                    printf("Thank you for choosing 'Chicken Pakora'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Pakora'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     } 

//                 }else if(food==3){
//                    printf("Thank you for choosing 'Egg Omlate'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 45 for 'Half Plate Egg Omlate'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=45){
//                            refund=amount-45;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 90 for 'Full Plate Egg Omlate'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=90){
//                            refund=amount-90;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
            
                
//         }
//         else if(time==2){
//             printf("Thank you for choosing 'Lunch'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Dal with Rice\n2.Vage with Rice\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){
//                    printf("Thank you for choosing 'Dal with Rice'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Dal with Rice'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Dal with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Vage with Rice'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Vage with Rice'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Fish Curry\n2.Chicken Curry\n");
//                 int food;
//                 printf("Choose your food:");
//                 scanf("%d",&food);
//                 if(food==1){
//                     printf("Thank you for choosing 'Fish Curry'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 25 for 'Half Plate Fish Curry'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 50 for 'Full Plate Fish Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else if(food==2){
//                     printf("Thank you for choosing 'Chicken Curry'\n1.Half Plate\n2.Full Plate\n");
//                     int quentity;
//                     printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Chicken curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Chicken Curry'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//         }
//         else{
            
//             printf("Thank you for choosing 'Dinner'\n1.Vage\n2.Non-Vage\n");
//             int catagory;
//             printf("Choose your catagory:");
//             scanf("%d",&catagory);
//             if(catagory==1){
//                printf("Thank you for choosing 'Vage'\n1.Raajma Chawal\n2.Paneer\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Raajma Chawal'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Raajma Chawal'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Paneer'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                     scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Paneer'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                       printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Paneer'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }
//             }
//             else{
//                 printf("Thank you for choosing 'Non-Vage'\n1.Chicken Breani\n2.Mutton Breani\n");
           
//                int food;
//                printf("Choose your food:");
//                scanf("%d",&food);
//                if(food==1){   
//                    printf("Thank you for choosing 'Chicken Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                     if(quentity==1){
//                        printf("Thank you for choosing 'Half Plate'\n,Please pay 25 for 'Half Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=25){
//                            refund=amount-25;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\n,Please pay 50 for 'Full Plate Chicken Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=50){
//                            refund=amount-50;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }

//                 }
//                 else{
//                    printf("Thank you for choosing 'Mutton Breani'\n1.Half Plate\n2.Full Plate\n");
//                    int quentity;
//                    printf("choose food quentity:");
//                    scanf("%d",&quentity);
//                    if(quentity==1){
//                       printf("Thank you for choosing 'Half Plate'\nPlease pay 30 for 'Half Plate Mutton Breani'\n");
//                       int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=30){
//                            refund=amount-30;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                     else{
//                        printf("Thank you for choosing 'Full Plate'\nPlease pay 60 for 'Full Plate Mutton Breani'\n");
//                        int amount,refund;
//                       printf("Enter the amount:");
//                       scanf("%d",&amount);
//                       if(amount>=60){
//                            refund=amount-60;
//                            printf("Please receive your return Amount:%d & enjoy your food,Thank you\n",refund);
//                         }
//                         else{
//                             printf("Sorry,Please pay full Amount,Thank you\n");
//                         }
//                     }
//                 }

//             }
//         }
//     }
// return 0;
// }