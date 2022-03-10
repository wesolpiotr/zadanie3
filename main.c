#include <stdio.h>

int main(void) {
  int a;
  
  printf("Podaj liczbę: ");
  scanf("%d", &a);

  if(a%2) {
    printf("Podana liczba NIE jest parzysta");
  } else {
    printf("Podana liczba jest parzysta");
  }

  return 0;
}