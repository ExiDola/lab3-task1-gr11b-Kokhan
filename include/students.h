#ifndef STUDENT_H
#define STUDENT_H

struct STUD {
  char Name[50];
  char GROUP[20];
  float SES[4];
  float averageScore;
  int originalIndex;
};

void inputStudents(struct STUD students[], int size);
void sortStudents(struct STUD students[], int size);
void printHighScorers(struct STUD students[], int size);

#endif