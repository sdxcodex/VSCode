#include <stdio.h>

typedef struct
{
    int roll;
    char name[50];
    int age;
    float marks[5];
} Student;

int main()
{
    Student s[10];

    float maxTotal = -1;
    int topRoll;

    int topSubject[5];

    for(int j=0;j<5;j++)
        topSubject[j] = 0;

    for(int i=0;i<10;i++)
    {
        printf("Student %d\n", i+1);

        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].age);

        float total = 0;

        for(int j=0;j<5;j++)
        {
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j];
        }

        if(total > maxTotal)
        {
            maxTotal = total;
            topRoll = s[i].roll;
        }
    }

    printf("Highest total marks Roll No = %d\n", topRoll);

    for(int sub=0; sub<5; sub++)
    {
        int bestRoll = s[0].roll;
        float bestMarks = s[0].marks[sub];

        for(int i=1; i<10; i++)
        {
            if(s[i].marks[sub] > bestMarks)
            {
                bestMarks = s[i].marks[sub];
                bestRoll = s[i].roll;
            }
        }

        printf("Subject %d Topper Roll No = %d\n",
               sub+1, bestRoll);
    }

    return 0;
}