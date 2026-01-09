#include<stdio.h>
#include<conio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    // Grade calculation
    if (score >= 85)
        grade = 'A';
    else if (score >= 70)
        grade = 'B';
    else if (score >= 55)
        grade = 'C';
    else if (score >= 40)
        grade = 'D';
    else
        grade = 'F';

    printf("Your grade is %c. ", grade);

    // Eligibility check
    if (grade >= 'A' && grade <= 'D') {
        printf("Congratulations! You are eligible for the next level.");
    } else {
        printf("Please try again next time.");
    }

    return 0;
}
