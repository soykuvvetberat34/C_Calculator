#include <stdio.h>
#include <math.h>

int main(){
    int process,d;
    double num1,num2,result;
    printf("\n");
    printf("                           CALCULATOR");
    printf("\n");
    printf("\n");
    printf("OPERATIONS");
    printf("\n");
    printf("\n");
    printf("----------------  --------------  -----------------   -------------------      --------------");
    printf("\n");
    printf(" |");
    printf("(1)square root");
    printf("|");
    printf(" |");
    printf("(2)addition");
    printf(" |");
    printf("   |");
    printf("(3)subtraction");
    printf(" |");
    printf("   |");
    printf("(4)multiplication");
    printf(" |");
    printf("   |");
    printf("(5)division");
    printf(" |");
    printf("\n");
    printf("---------------  ---------------  ------------------   ------------------      --------------");


    printf("\n");
    printf("\n");
    while(d!=-1){
    printf("\n");
    printf("Select the operation:");
    scanf("%d",&process);


    switch(process)
    {
    case 1:
        printf("Enter the number want you square root of:");
        scanf("%lf",&num1);
        result=sqrt(num1);
        printf("square root process=%.2lf",result);
        break;
    case 2:

        printf("Enter the first number want you addition of:");
        scanf("%lf",&num1);
        printf("Enter the second number want you addition of:");
        scanf("%lf",&num2);
        result=num1+num2;
        printf("Addition process:%.lf",result);
        break;
    case 3:

        printf("Enter the first number want you subtraction of:");
        scanf("%lf",&num1);
        printf("Enter the second number want you subtraction of:");
        scanf("%lf",&num2);
        result=num1-num2;
        printf("subtraction process:%.lf",result);
        break;
    case 4:

        printf("Enter the first number want you multiplication of:");
        scanf("%lf",&num1);
        printf("Enter the second number want you multiplication of:");
        scanf("%lf",&num2);
        result=num1*num2;
        printf("multiplication process:%.lf",result);
        break;
    case 5:

        printf("Enter the first number want you divison of:");
        scanf("%lf",&num1);
        printf("Enter the second number want you divison of:");
        scanf("%lf",&num2);
        result=num1/num2;
        printf("divison process:%.1lf",result);
        break;
    default:
        printf("Your selected process is wrong");
        printf("\n");
        printf("\n");

    }
    printf("\n");
    printf("\n");
    printf("if you want exist the program press(-1) else(0):");
    scanf("%d",&d);







    }

    printf("\n");


    printf("program finished");







    printf("\n");
    printf("\n");




}









