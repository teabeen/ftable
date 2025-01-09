#include "../include/ftlist.h"
#include "../include/helper.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int step;
  int start;
  int end;

  if (argc < 4) {
    puts("Please enter a start value (F): ");
    scanf("%d", &start);

    puts("Please enter an end value (F): ");
    scanf("%d", &end);

    puts("Please enter the incrementor (step): ");
    scanf("%d", &step);

    table(start, end, step);
  }

  if (argc == 4) {
    start = atoi(argv[2]);
    end = atoi(argv[3]);
    step = atoi(argv[4]);
    table(start, end, step);

  }

  return 0;
}
