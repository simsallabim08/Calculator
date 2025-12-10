#include <stdio.h>
#include <math.h>

int addition();
int subtraction();
int multiplication();
int division();
int exponentialize();
int root();

int main() {

    //Main menu utskrift

    printf("Welcome to kalkoletor V1!\n");

        int run = 1;

        while(run == 1) {
            printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exponentialization\n6. Root\n\n : ");

            //Deklaration av deklaration och inmatning
            int userChoice;

            scanf("%d", &userChoice);

            switch (userChoice) {

                case 1: 
                    addition();
                    
                    printf("Run again? [1 - yes, 2 - no] : ");
                    scanf("%d", &run);

                    break;
                
                case 2:
                    subtraction();
                    printf("Run again? [1 - yes, 2 - no] : ");
                    scanf("%d", &run);
                    break;
                
                case 3:
                    multiplication();
                    printf("Run again? [1 - yes, 2 - no] : ");
                    scanf("%d", &run);
                    break;
                
                case 4:
                    division();
                    printf("Run again? [1 - yes, 2 - no] : ");
                    scanf("%d", &run);
                    break;

                case 5:
                    exponentialize();
                    printf("Run again? [1 - yes, 2 - no] : ");
                    scanf("%d", &run);
                    break;

                case 6:
                exponentialize();
                printf("Run again? [1 - yes, 2 - no] : ");
                scanf("%d", &run);
                break;
                
                default:
                    printf("Invalid input.\n : ");
                    break;
            }

       }


    return 0;
}



int addition() {

    int numberOne, numberTwo;

    printf("Enter 2 numbers to add with a space between.\n : ");
    scanf("%d %d", &numberOne, &numberTwo);

    printf("The result is %d.\n", (numberOne + numberTwo));

}


int subtraction() {

    int numberOne, numberTwo;

    printf("Enter 2 numbers to subtract with a space between.\n : ");
    scanf("%d %d", &numberOne, &numberTwo);

    printf("The result is %d.\n", (numberOne - numberTwo));

}

int multiplication() {

    int numberOne, numberTwo;

    printf("Enter 2 numbers to multiplu with a space between.\n : ");
    scanf("%d %d", &numberOne, &numberTwo);

    printf("The result is %d.\n", (numberOne * numberTwo));

}

int division() {

    int numberOne, numberTwo;

    printf("Enter 2 numbers to divide with a space between.\n : ");
    scanf("%d %d", &numberOne, &numberTwo);

    printf("The result is %d.\n", (numberOne / numberTwo));

}

int exponentialize() {

    int numberOne, numberTwo;
    int result;

    printf("Enter base and exponent with a space between.\n : ");
    scanf("%d %d", &numberOne, &numberTwo);

    

    printf("The result is %d.\n", (pow(numberOne, numberTwo)));

}
