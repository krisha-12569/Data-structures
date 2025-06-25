// WAP to print Armstrong number from 1 to 1000.
#include<stdio.h>
#include<math.h>

void main(){
      int num, originalNum, remainder, result, n;
      printf("Armstrong number between 1 to 1000");
      for (num = 1; num <= 1000; num++) {
        originalNum = num;
        result = 0;
        n = 0;
        // Calculate the number of digits
        while (originalNum != 0) {
            originalNum /= 10;
            n++;
          }
        originalNum = num;
        // Calculate the sum of the powers of the digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }
        // Check if the number is an Armstrong number
        if (result == num) {
            printf("%d\n", num);
        }
    }
}
