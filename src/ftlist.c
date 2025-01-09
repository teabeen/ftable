#include <stdio.h>

void table(int start, int end, int step) {
  double fahr; // fahrenheit

  puts("\tCelsius - Fahrenheit conversion table\t");
  puts("\t original idea by Dennis Ritchie and Brian Kerninghan\t");
  puts("\t-----------------------------------------------------------------\t");

  if (start < end) {
    for (fahr = start; fahr <= end; fahr = fahr + step) {
      printf("\033[31m C: %3.1f \033[0m \033[44m \t F: %3.1f \033[0m\n",
             (5.0 / 9.0) * (fahr - 32.0), fahr);
    }
  } else if (start > end) {
    for (fahr = start; fahr >= end; fahr = fahr - step) {
      printf("\033[31m C: %3.1f \033[0m \033[44m \t F: %3.1f \033[0m\n",
             (5.0 / 9.0) * (fahr - 32), fahr);
    }
  }
}
