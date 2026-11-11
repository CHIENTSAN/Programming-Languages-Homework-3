#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);

// 找出所有學生在本學期中的最低成績
int minimum(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    int lowGrade = 100;

    for (i = 0; i < pupils; i++)
    {
        for (j = 0; j < tests; j++)
        {
            if (grades[i][j] < lowGrade)
            {
                lowGrade = grades[i][j];
            }
        }
    }
    return lowGrade;
}

// 找出所有學生在本學期中的最高成績
int maximum(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    int highGrade = 0;

    for (i = 0; i < pupils; i++)
    {
        for (j = 0; j < tests; j++)
        {
            if (grades[i][j] > highGrade)
            {
                highGrade = grades[i][j];
            }
        }
    }
    return highGrade;
}

// 主程式 (讓編譯器找到進入點)
int main(void)
{
    const int studentGrades[STUDENTS][EXAMS] = 
    {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}
    };

    printf("Lowest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS));
    printf("Highest grade: %d\n", maximum(studentGrades, STUDENTS, EXAMS));

    system("pause");
    return 0;
}
