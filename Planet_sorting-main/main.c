#include <stdio.h>
#include <string.h>

struct Planet {
    char name[20];
    float diameter;
};

int main() {
    struct Planet planets[20];
    int n, i, j;
    int choice;
    struct Planet temp;

    // Step 1: Input number of planets
    printf("Enter number of planets: ");
    scanf("%d", &n);

    // Step 2: Input planet details
    for(i = 0; i < n; i++) {
        printf("\nEnter name of planet %d: ", i + 1);
        scanf("%s", planets[i].name);
        printf("Enter diameter of %s (in km): ", planets[i].name);
        scanf("%f", &planets[i].diameter);
    }

    // Step 3: Ask user for sorting order
    printf("\nSort by diameter:\n");
    printf("1. Ascending (smallest to largest)\n");
    printf("2. Descending (largest to smallest)\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &choice);

    // Step 4: Sort using bubble sort
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if((choice == 1 && planets[j].diameter > planets[j + 1].diameter) ||
               (choice == 2 && planets[j].diameter < planets[j + 1].diameter)) {

                // Swap entire struct
                temp = planets[j];
                planets[j] = planets[j + 1];
                planets[j + 1] = temp;
            }
        }
    }

    // Step 5: Display sorted planets
    printf("\nPlanets sorted by diameter:\n");
    printf("-----------------------------\n");
    printf("%-15s %-10s\n", "Planet", "Diameter (km)");
    printf("-----------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-15s %.2f\n", planets[i].name, planets[i].diameter);
    }

    return 0;
}
