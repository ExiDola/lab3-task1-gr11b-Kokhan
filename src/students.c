#include "../include/students.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputStudents(struct STUD students[], int size) {
  for (int i = 0; i < size; i++) {
    printf("Enter data for student %d:\n", i + 1);

    printf("Name: ");
    if (scanf("%s", students[i].Name) != 1) {
      fprintf(stderr, "Error: Invalid input for name.\n");
      exit(EXIT_FAILURE);
    }

    printf("Group: ");
    if (scanf("%s", students[i].GROUP) != 1) {
      fprintf(stderr, "Error: Invalid input for group.\n");
      exit(EXIT_FAILURE);
    }

    printf("Grades (separated by spaces): ");
    if (scanf("%f %f %f %f", &students[i].SES[0], &students[i].SES[1],
              &students[i].SES[2], &students[i].SES[3]) != 4) {
      fprintf(stderr, "Error: Invalid input for grades.\n");
      exit(EXIT_FAILURE);
    }

    students[i].averageScore = (students[i].SES[0] + students[i].SES[1] +
                                students[i].SES[2] + students[i].SES[3]) /
                               4.0;
    students[i].originalIndex = i;

    printf("\n");
  }
}

int compareStudents(const void *a, const void *b) {
  return ((struct STUD *)a)->averageScore - ((struct STUD *)b)->averageScore;
}

void sortStudents(struct STUD students[], int size) {
  qsort(students, size, sizeof(struct STUD), compareStudents);
}

void printHighScorers(struct STUD students[], int size) {
  int found = 0;

  printf("\nStudents with an average score greater than 4.2:\n");

  for (int i = 0; i < size; i++) {
    if (students[i].averageScore > 4.2) {
      printf("%d. Name: %s, Group: %s, Average Score: %.2f\n", i + 1,
             students[i].Name, students[i].GROUP, students[i].averageScore);
      found = 1;
    }
  }

  if (!found) {
    printf("No students with an average score greater than 4.2.\n");
  }
}
