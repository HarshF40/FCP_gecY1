#include <stdio.h>

typedef struct {
    int roll_no;
    char name[20];
    char department[20];
    char course[20];
    unsigned int yoj;
} student;

// Declare the function prototype only once before main
void list(student ptr[5], unsigned int yoj);

int main() {
    student arr[5];
    unsigned int yoj;

    for (int i = 0; i < 5; i++) {
        printf("\nEnter Name: ");
        scanf("%19s", arr[i].name); // Limit input to 19 characters
        printf("Enter Roll No.: ");
        scanf("%d", &arr[i].roll_no);
        printf("Enter Department: ");
        scanf("%19s", arr[i].department); // Limit input to 19 characters
        printf("Enter Course: ");
        scanf("%19s", arr[i].course); // Limit input to 19 characters
        printf("Enter Year of Joining: ");
        scanf("%u", &arr[i].yoj);
    }

    printf("\nEnter the year to list students: ");
    scanf("%u", &yoj);

    printf("\nStudents who joined in %u:\n", yoj);
    list(arr, yoj);

    return 0;
}

// Define the function only once
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
