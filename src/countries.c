#include "../include/countries.h"
#include <stdio.h>

void printCountriesWithPopulationOver20M(struct Country countries[], int size) {
  printf("Countries with population over 20 million:\n");
  printf("%-20s%-20s%-20s%-20s%-20s%-20s%-20s%-20s\n", "Name", "Capital",
         "Language", "Population", "Area", "Currency", "Government", "Leader");

  for (int i = 0; i < size; i++) {
    if (countries[i].population > 20000000) {
      printf("%-20s%-20s%-20s%-20d%-20.2f%-20s%-20s%-20s\n", countries[i].name,
             countries[i].capital, countries[i].language,
             countries[i].population, countries[i].area, countries[i].currency,
             countries[i].government, countries[i].leader);
    }
  }
}
