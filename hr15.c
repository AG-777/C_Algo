#include <stdio.h>
#include <string.h>
#include <math.h>
//calculate total marks for odd places in case of girls and even in case of boys.
#include <stdlib.h>

// Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender)
{
    int target = gender == 'b' ? 0 : 1;
    int total = 0;
    while (target <= number_of_students)
    {
        total += marks[target];
        target += 2;
    }
    return total;
}

int main()
{
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++)
    {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d\n", sum);
    free(marks);

    return 0;
}
