#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    char prn[20];
};

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\n***** MMCOE STUDENT DATABASE *****\n");
        printf("1. Add Student\n");
        printf("2. Sort Students by PRN\n");
        printf("3. Search Student by PRN\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 
        if (choice == 1) {
            printf("\nEnter student name: ");
            fgets(students[count].name, sizeof(students[count].name), stdin);
            students[count].name[strcspn(students[count].name, "\n")] = '\0';

            printf("Enter roll number: ");
            scanf("%d", &students[count].roll_no);
            getchar(); 
            printf("Enter PRN: ");
            fgets(students[count].prn, sizeof(students[count].prn), stdin);
            students[count].prn[strcspn(students[count].prn, "\n")] = '\0';

            count++;
            printf("\nStudent added successfully!\n");
        }

        else if (choice == 2) {
            if (count == 0) {
                printf("\nNo students to sort!\n");
                continue;
            }

            int order;
            printf("\n1. Ascending Order\n2. Descending Order\nEnter your choice: ");
            scanf("%d", &order);
            getchar(); // clear buffer

            // Simple bubble sort
            for (int i = 0; i < count - 1; i++) {
                for (int j = 0; j < count - i - 1; j++) {
                    int cmp = strcmp(students[j].prn, students[j + 1].prn);
                    if ((order == 1 && cmp > 0) || (order == 2 && cmp < 0)) {
                        struct Student temp = students[j];
                        students[j] = students[j + 1];
                        students[j + 1] = temp;
                    }
                }
            }

            printf("\nStudents sorted successfully!\n");
            for (int i = 0; i < count; i++) {
                printf("%d. Name: %s | Roll No: %d | PRN: %s\n",
                       i + 1, students[i].name, students[i].roll_no, students[i].prn);
            }
        }

        else if (choice == 3) {
            if (count == 0) {
                printf("\nNo students to search!\n");
                continue;
            }

            char search_prn[20];
            printf("\nEnter PRN to search: ");
            fgets(search_prn, sizeof(search_prn), stdin);
            search_prn[strcspn(search_prn, "\n")] = '\0';

            int found = 0;
            for (int i = 0; i < count; i++) {
                if (strcmp(students[i].prn, search_prn) == 0) {
                    printf("\n--- Student Found ---\n");
                    printf("Name: %s\n", students[i].name);
                    printf("Roll No: %d\n", students[i].roll_no);
                    printf("PRN: %s\n", students[i].prn);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("\n Student with PRN '%s' not found!\n", search_prn);
            }
        }
        else if (choice == 4) {
            printf("\nExiting program. Goodbye!\n");
            break;
        }
        else {
            printf("\nInvalid choice! Please try again.\n");
        }
    }
    return 0;
}
