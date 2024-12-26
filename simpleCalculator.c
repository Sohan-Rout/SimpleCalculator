#include<stdio.h>
#include<math.h>

void add(int a, int b){
    printf("The sum of %d and %d is %d\n", a, b, a+b);
}

void subtract(int a, int b){
    printf("The difference of %d and %d is %d\n", a, b, a-b);
}

void multiply(int a, int b){
    printf("The product of %d and %d is %d\n", a, b, a*b);
}

void divide(float a, float b){
    printf("The division of %.2f and %.2f is %.2f\n", a, b, a/b);
}

void reminder(int a, int b){
    printf("The reminder of %d and %d is %d\n", a, b, a%b);
}

int main(){
    int choice;

    do{
        printf("-------------------------------------------------------------\n");
        printf("Choose one of the following optionx to perform the operation:\n");
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Reminder\n");
        printf("6. Power\n");
        printf("7. Square Root\n");
        printf("8. Cube Root\n");
        printf("9. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        printf("-------------------------------------------------------------\n");

        if(choice == 1){
            int a,b;
            printf("enter the value of first number: ");
            scanf("%d", &a);
            printf("enter the value of second number: ");
            scanf("%d", &b);
            add(a,b);
        }

        else if(choice == 2){
            int a,b;
            printf("enter the value of first number: ");
            scanf("%d", &a);
            printf("enter the value of second number: ");
            scanf("%d", &b);
            subtract(a,b);
        }

        else if(choice == 3){
            int a,b;
            printf("enter the value of first number: ");
            scanf("%d", &a);
            printf("enter the value of second number: ");
            scanf("%d", &b);
            multiply(a,b);
        }

        else if(choice == 4){
            int a,b;
            printf("enter the value of first number: ");
            scanf("%d", &a);
            printf("enter the value of second number: ");
            scanf("%d", &b);
            if(a == 0 || b == 0){
                printf("Division by zero is not possible\n");
            }
            else{
                float x,y;
                x = (float)a;
                y = (float)b;
                divide(x,y);
            }
        }

        else if(choice == 5){
            int a,b;
            printf("enter the value of first number: ");
            scanf("%d", &a);
            printf("enter the value of second number: ");
            scanf("%d", &b);

            if(a == 0 || b == 0){
                printf("Division by zero is not possible\n");
            }
            else{
                reminder(a,b);
            }
        }

        else if(choice == 6){
            int a,b;
            printf("enter the value of the base: ");
            scanf("%d", &a);
            printf("enter the value of the power: ");
            scanf("%d", &b);
            printf("the value of %d raised to the power %d is %d\n", a, b, (int)pow(a,b));
        }

        else if(choice == 7){
            int a;
            printf("enter the value of the number: ");
            scanf("%d", &a);
            printf("the square root of %d is %.2f\n", a, sqrt(a));
        }

        else if(choice == 8){
            int a;
            printf("enter the value of the number: ");
            scanf("%d", &a);
            printf("the cube root of %d is %.2f\n", a, cbrt(a));
        }
        
        else if(choice == 9){
            printf("Exiting the program\n");
            printf("-------------------------------------------------------------\n");
        }

        else{
            printf("Invalid choice\n");
        }
    }while(choice != 9);

    return 0;
}