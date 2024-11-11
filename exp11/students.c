#include <stdio.h>

typedef struct {
    int roll_no;
    char name[20];
    char department[20];
    char course[20];
    unsigned int yoj;
} student;

void list(student ptr[5], unsigned int yoj);

int main() {
    student arr[5];
    unsigned int yoj;

    for (int i = 0; i < 5; i++) {
        printf("\nEnter Name: ");
        scanf("%19s", arr[i].name); 
        printf("Enter Roll No.: ");
        scanf("%d", &arr[i].roll_no);
        printf("Enter Department: ");
        scanf("%19s", arr[i].department); 
        printf("Enter Course: ");
        scanf("%19s", arr[i].course);
        printf("Enter Year of Joining: ");
        scanf("%u", &arr[i].yoj);
    }

    printf("\nEnter the year to list students: ");
    scanf("%u", &yoj);

    printf("\nStudents who joined in %u:\n", yoj);
    list(arr, yoj);

    return 0;
}

void list(student ptr[5], unsigned int yoj) {
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (yoj == ptr[i].yoj) {
            printf("Name: %s\n", ptr[i].name);
            found = 1;
        }
    }
    if (!found) {
        printf("No students found for the year %u\n", yoj);
    }
}
