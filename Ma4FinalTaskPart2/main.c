#include <stdio.h>
int main()
{
    int i, n , count = 0;
    printf("Input any positive integers: ");
    scanf("%u", &n);

    while(n > 1){
    if(n % 2 == 0){
      n = n / 2;
      printf("Current given value is %d\n", n);
    }
    else{
      n = n * 3 + 1;
      printf("Current given value is %d\n", n);
      count +=1;
      i++;
    }
  }

    return 0;
}
