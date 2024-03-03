#ifndef COUNTRIES_H
#define COUNTRIES_H

struct Country {
  char name[50];
  char capital[50];
  char language[50];
  int population;
  double area;
  char currency[20];
  char government[50];
  char leader[50];
};

void printCountriesWithPopulationOver20M(struct Country countries[], int size);

#endif
