//Lab4_Lucky ticket
// #include<stdio.h>
// int main(){
// int number,result1=0,result2=0,last_3digits,first_3digit,i=0,j=0;
//     scanf("%d",&number);
//     while(i<3){
//     last_3digits=number%10;
//     number=number/10;
//     result1=result1+last_3digits;
//         i++;
//     }
    
//     while(j<3){
//     first_3digit=number%10;
//     number=number/10;
//     result2=result2+first_3digit;
//     j++;
//     }

//     if(result1==result2){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }




//Lab4_Treat
// #include<stdio.h>
// int main(){
// long long int std_A,std_B,result1,result2,last_2digits1,last_2digits2,i=0,j=0;
// scanf("%lld",&std_A);
// scanf("%lld",&std_B);

// result1=std_A/10000000;
// result2=std_B/10000000;

// if(result1<result2){
//     last_2digits1=std_A%100;
//     last_2digits2=std_B%100;

//     if(last_2digits1==last_2digits2){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
// }
// else{
//     printf("NO");
// }
//     return 0;
// }



//Lab5_task1
// #include<stdio.h>
// int main(){
// int numb1,numb2,result=0;
//     printf("Enter two numbers: ");
//     scanf("%d  %d",&numb1,&numb2);

//     for(int i=numb1+1;i<numb2;i++){
//         if(i%2!=0 && i%5==0){
//        result=result+i;
//         }
//     }
//     printf("%d",result);
//     return 0;
// }





//lab5_task2
// #include<stdio.h>
// int main(){
// float number,smallest;
//     printf("Enter a number: ");
//     scanf("%f",&number);
//     smallest=number;

//     if(number<0){
//         printf("NONE\n");
//     }
//     else{
//     while(number>0){
//         printf("Enter a number: ");
//       scanf("%f",&number);
//      if(number==0){
//         break;
//       }
//       if(number<smallest){
//         smallest=number;
//       }
//     }
//     printf("The smallest number is %.2f",smallest);
//     }
//     return 0;
// }





//lab5_prime number
// #include<stdio.h>
// int main(){
// int number,temp,count=0;
// printf("Enter a number: ");
// scanf("%d",&number);
//     for(int i=1;i<=number;i++){
//         temp=number%i;
//         if(temp==0){
//         count++;
//         }
//     }
//       if(count>2){
//             printf("%d is not a prime number",number);
//         }
//         else{
//             printf("%d is a prime number",number);
//         }
//     return 0;
// }





//Lab-6_fibonacci series
// #include<stdio.h>
// int main(){
// int numb,numb1=0,numb2=1,next;
//     printf("Enter the sequence number: ");
//     scanf("%d",&numb);
//     printf("%d %d",numb1,numb2);
//     for(int i=0;i<=numb;i++){
//         next=numb1+numb2;
//         numb1=numb2;
//         numb2=next;  
//          printf(" %lld",next);  
//     }
//     return 0;
// }





//Lab_6 - Task 2
// #include<stdio.h>
// int main(){
// int marks,result;
//     printf("Enter marks: ");
//     scanf("%d",&marks);
//     marks= ((marks/10)*10+(marks%10))-(marks%10);
//     switch (marks)
//     {
//     case 90:
//         printf("Grade-A");
//         printf("GPA-4.00");
//         break;
//      case 80:
//        printf("Grade-A\n");
//         printf("GPA-4.00");
//         break;
//       case 70:
//         printf("Grade-B\n");
//         printf("GPA-3.5");
//         break;
//        case 60:
//          printf("Grade-C\n");
//         printf("GPA-3.00");
//         break;
//         case 50:
//           printf("Grade-D\n");
//         printf("GPA-2.5");
//         break;
      
//     default:
//     printf("Grade-F\n");
//     printf("GPA-0.00");
//         break;
//     }
//     return 0;
// }




//     1                                                                                                         
//    121                                                                                                        
//   12321                                                                                                       
//  1234321                                                                                                      
// 123454321
// #include <stdio.h>                                       // Include the standard input/output header file.
// void main()
// {
//    int i, j, n;                                           // Declare variables for loop counters and the number of rows.

//    printf("Input number of rows : ");                      // Prompt the user to input the number of rows.
//    scanf("%d", &n);                                      // Read the input from the user.

//    for(i = 0; i <= n; i++)                               // Loop to generate each row of the pattern.
//    {
//      /* Print blank spaces */
//      for(j = 1; j <= n - i; j++)                         // Loop to print spaces before the numbers.
//        printf(" ");

//      /* Display numbers in ascending order up to the middle */
//      for(j = 1; j <= i; j++)                             // Loop to print numbers in ascending order.
//        printf("%d", j);

//      /* Display numbers in reverse order after the middle */
//      for(j = i - 1; j >= 1; j--)                           // Loop to print numbers in descending order.
//        printf("%d", j);

//      printf("\n"); // Move to the next line after printing a row.
//    }
// }







// Lab_8- Hero
// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int N;
//     printf("Enter the number of heroes: ");
//     scanf("%d", &N);
//     int levels[N];
//     printf("Enter the levels of the heroes: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &levels[i]);
//     }
//     int first = INT_MIN, second = INT_MIN, third = INT_MIN;
//     for (int i = 0; i < N; i++) {
//         if (levels[i] > first) {
//             third = second;
//             second = first;
//             first = levels[i];
//         } else if (levels[i] > second && levels[i] < first) {
//             third = second;
//             second = levels[i];
//         } else if (levels[i] > third && levels[i] < second) {
//             third = levels[i];
//         }
//     }
//     if (second == INT_MIN) {
//         printf("No second largest level.\n");
//     } else {
//         printf("Second largest level: %d\n", second);
//     }

//     if (third == INT_MIN) {
//         printf("No third largest level.\n");
//     } else {
//         printf("Third largest level: %d\n", third);
//     }

//     return 0;
// }







//Lab_8-task-2
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int N;
//     double mean, mean_deviation = 0.0, std_dev = 0.0;
//     printf("Enter the number of heroes: ");
//     scanf("%d", &N);
//     int levels[N];
//     printf("Enter the levels of heroes: ");
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &levels[i]);
//     }
//     int sum = 0;
//     for (int i = 0; i < N; i++) {
//         sum += levels[i];
//     }

//     mean = (double)sum / N;
//     for (int i = 0; i < N; i++) {
//         std_dev += (levels[i] - mean) * (levels[i] - mean);
//     }
//     mean_deviation /= N;
//     std_dev = sqrt(std_dev / N);
//     printf("\nMean level: %.2f\n", mean);
//     printf("Standard Deviation: %.2f\n", std_dev);

//     printf("Outliers: ");
//     for (int i = 0; i < N; i++) {
//         if (levels[i] > mean + 2 * std_dev || levels[i] < mean - 2 * std_dev) {
//             printf("%d ", levels[i]);
//         }
//     }
//     printf("\n");
//     return 0;
// }



#include<stdio.h>
int main(){
int a=4;
//int *p = &a;
int *p;
p=&a;
printf("%d\n",a);
printf("%d\n",*p);
printf("%d\n",p);
printf("%d\n",&a);
printf("%d\n",&p);
printf("%d\n",*(&a));
printf("%d\n",*(&p));
printf("%d\n",*(&a));
printf("%d\n",*(&p));
return 0;
}
