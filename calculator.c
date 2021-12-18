#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
    while(1){
    float x,y,result;
    int choice,i;
    printf("***SCIENTIFIC CALCULATOR***\n");
    printf("  ==================\n\n");
    printf("Enter your choice:\n ");
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Square root\n");
    printf(" 6.x^y\n 7.x^2\n 8.x^3\n 9.1/x\n 10.x^(1/y)\n 11.10^x\n 12.x!\n");
    printf(" 13.log10(x)\n 14.Sin(x)\n 15.Cos(x)\n 16.Tan(x)\n 17.Cosec(x)\n 18.Cot(x)\n 19.Sec(x)\n 20.exit\n\n ------>>");

    scanf("%d",&choice);

    if (choice>20){
        printf("Please select within the range!");
    }
    else{
    
    switch(choice)
    {
        case 1:
               printf("Enter two numbers:\n");
               scanf("%f %f",&x,&y);
               printf("Result: %.2f\n\n",(x+y));
               break;
        case 2:
               printf("Enter two numbers:\n");
               scanf("%f %f",&x,&y);
               printf("Result: %.2f\n\n",(x-y));
               break;       
        case 3:
               printf("Enter two numbers:\n");
               scanf("%f %f",&x,&y);
               printf("Result: %.2f\n\n",(x*y));
               break;

        case 4:if(y!=0){
                printf("Enter two numbers:\n");
                scanf("%f %f",&x,&y);
                printf("Result: %.2f\n\n",(x/y));
               } 
                printf("Number can't be divided by 0\n\n");
               
               break;
        case 5:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = sqrt(x);
               printf("Result: %.2f\n\n",result);
               break;
        case 6:
              printf("Enter the value of x: \n");
              scanf("%f",&x);
              printf("Enter the value of y:\n");
              scanf("%f",&y);
              result = pow(x, y);
              printf("Result: %.2f\n\n",result);
              break;
        case 7:
               printf("Enter the value of x: \n");
               scanf("%f",&x);   
               result = pow(x, 2);
               printf("Result: %.2f\n\n",result);
               break;
        case 8:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = pow(x, 3);
               printf("Result: %.2f\n\n",result);
               break;  
        case 9:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = pow(x, -1);
               printf("Result: %.2f\n\n",result);
               break; 
        case 10:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               printf("Enter the value of y:\n");
               scanf("%f",&y);
               result = pow(x, (1/y));
               printf("Result: %.2f\n\n",result);
               break;
        case 11:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = pow(10, x);
               printf("Result: %.2f\n\n",result);
               break;
        case 12:
              
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = 1;
               for(i = 1; i <= x; i++) {
                      result = result * i;
               }
                printf("Result: %.2f\n\n",result);
                break;
        case 13:
                printf("Enter the value of x: \n");
                scanf("%f",&x);
                result = log10(x);
                printf("Result: %.2f\n\n",result);
                break;
        case 14:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = sin(x * 3.14159 / 180);
               printf("Result : %.2f\n\n",result);
               break;
        case 15:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = cos(x * 3.14159 / 180);
               printf("Result : %.2f\n\n",result);
               break;
        case 16:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = tan(x * 3.14159 / 180);
               printf("Result : %.2f\n\n",result);
               break;
        case 17:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = 1 / (sin(x * 3.14159 / 180));
               printf("Result : %.2f\n\n",result);
               break;
        case 18:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = 1 / tan(x * 3.14159 / 180);
               printf("Result : %.2f\n\n",result);
               break;
        case 19:
               printf("Enter the value of x: \n");
               scanf("%f",&x);
               result = 1 / cos(x * 3.14159 / 180);
               printf("Result : %.2f\n\n",result);
               break;
        case 20:
              exit(0);     
        
        default:
               printf("You entered wrong choice!\n");
               break;

    }
     
    } 
    }   

   return 0;

}
      
