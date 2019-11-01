#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sumb=0,sumg=0,ib,ig;
  if (gender=='b') {
   for(ib=0;ib<=number_of_students;ib+=2) {
       sumb+=marks[ib];
   }
  } 
  return sumb;

  if (gender=='g') {
    for(ig=0;ig<=number_of_students;ig+=2) {
        sumg+=marks[ig];
      }
  } 
  return sumg;

}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
