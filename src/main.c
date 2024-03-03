#include "countries.c"
#include "firstTask.c"
#include "students.c"
#include <stdio.h>

int main(void) {

  printf("Введите число a:\n");
  int a;
  if (scanf("%d", &a) != 1) {
    fprintf(stderr, "Error: Invalid input for a.\n");
    exit(EXIT_FAILURE);
  }
  firstTaskFunc(a);

  int size = 10;
  struct STUD students[size];

  inputStudents(students, size);

  for (int i = 0; i < size; i++) {
    printf("%d. Name: %s, Group: %s, Average Score: %.2f\n", i + 1,
           students[i].Name, students[i].GROUP, students[i].averageScore);
  }

  sortStudents(students, size);
  printHighScorers(students, size);

  struct Country countries[] = {
      {"Russia", "Moscow", "Russian", 146599183, 17098242.0, "Russian Ruble",
       "Federal Semi-Presidential Republic", "Vladimir Putin"},
      {"China", "Beijing", "Mandarin", 1444216107, 9596960.0, "Renminbi",
       "Single-Party Socialist Republic", "Xi Jinping"},
      {"United States", "Washington, D.C.", "English", 331002651, 9833517.0,
       "United States Dollar", "Federal Presidential Republic", "Joe Biden"},
      {"India", "New Delhi", "Hindi", 1380004385, 3287263.0, "Indian Rupee",
       "Federal Parliamentary Democratic Republic", "Narendra Modi"},
      {"Indonesia", "Jakarta", "Indonesian", 273523615, 1904569.0,
       "Indonesian Rupiah", "Unitary Presidential Republic", "Joko Widodo"},
      {"Pakistan", "Islamabad", "Urdu", 220892340, 881913.0, "Pakistani Rupee",
       "Federal Parliamentary Republic", "Arif Alvi"},
      {"Brazil", "Brasília", "Portuguese", 212559417, 8515767.0,
       "Brazilian Real", "Federal Presidential Republic", "Jair Bolsonaro"},
      {"Nigeria", "Abuja", "English", 206139589, 923768.0, "Nigerian Naira",
       "Federal Presidential Republic", "Muhammadu Buhari"},
      {"Bangladesh", "Dhaka", "Bengali", 164689383, 147570.0,
       "Bangladeshi Taka", "Unitary Parliamentary Republic", "Abdul Hamid"},
      {"Russia", "Moscow", "Russian", 146599183, 17098242.0, "Russian Ruble",
       "Federal Semi-Presidential Republic", "Vladimir Putin"},
  };

  int size2 = sizeof(countries) / sizeof(countries[0]);

  printCountriesWithPopulationOver20M(countries, size);

  return 0;
}
