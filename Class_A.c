#include <stdio.h>

int main()
{
    int Marks[3][4]; // 3 subjects, 4 tests each
    int Sum[3] = {0}; // Sum of marks for each subject
    float avg[3]; // Average of marks for each subject
    int i, j;
    char Subjects[3][20] = {"Physics", "Chemistry", "Math"};
    char tests[4][20] = {"Assignment", "Course work", "Mid term", "End of term"};

    // Input marks for each subject and each test
    for (i = 0; i < 3; i++)
    {
        printf("Enter marks for %s:\n", Subjects[i]);
        for (j = 0; j < 4; j++)
        {
            printf("Enter marks for %s: ", tests[j]);
            scanf("%d", &Marks[i][j]);
        }
    }

    // Calculate the sum of marks for each subject
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            Sum[i] += Marks[i][j]; // Sum marks for the subject
        }
        printf("The sum of marks in %s is %d\n", Subjects[i], Sum[i]);
    }

    // Calculate the average for each subject
    for (i = 0; i < 3; i++)
    {
        avg[i] = Sum[i] / 4.0; // Calculate average (divide by 4.0 for floating point division)
        printf("The average of marks in %s is %.2f\n", Subjects[i], avg[i]);
    }

    return 0;
}
