#include <stdio.h>

int main() {
  int num1, num2;
  char op, exit;

  do {
    printf("Enter the operation to perform(+, -, *, /, x to exit): ");
    scanf(" %c", &op);

    if (op != 'x') {
      printf("Enter two numbers: ");
      scanf("%d %d", &num1, &num2);

      switch(op) {
        case '+':
          printf("%d + %d = %d\n", num1, num2, num1 + num2);
          break;
        case '-':
          printf("%d - %d = %d\n", num1, num2, num1 - num2);
          break;
        case '*':
          printf("%d * %d = %d\n", num1, num2, num1 * num2);
          break;
        case '/':
          if (num2 != 0)
            printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
          else
            printf("Error! Division by zero is not allowed.\n");
          break;
        default:
          printf("Error! Invalid operator. Please enter a valid operator.\n");
      }
    }

    printf("Do you want to continue(y/n)? ");
    scanf(" %c", &exit);

  } while(op != 'x' && exit == 'y');

  return 0;
}