#include <stdio.h>

int compare(char a[], char b[]) {
  	int i = 0;
   	while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

void concat(char result[], char s1[], char s2[]) {
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        result[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0') {
        result[i] = s2[j];
        i++;
        j++;
    }

    result[i] = '\0';  
}

int main() {
    char regName[50], regPass[50];
    char loginName[50], loginPass[50];
    char greeting[100];
    char hello[] = "Welcome to MMCOE! ";

    printf("-----Registration-----\n");
    printf("Username: ");
    scanf("%s", regName);

    printf("Password: ");
    scanf("%s", regPass);

    FILE *fp = fopen("users.csv", "a");  
    if (fp == NULL) {
        printf("File error!\n");
        return 1;
    }
    fprintf(fp, "username - %s\npassword - %s\n", regName, regPass);
    fclose(fp);
    printf("\nLogin Username: ");
    scanf("%s", loginName);

    printf("Login Password: ");
    scanf("%s", loginPass);

    if (compare(regName, loginName) && compare(regPass, loginPass)) {
        concat(greeting, hello, loginName);
        printf("\n%s\n", greeting);
    } else {
        printf("\nError: Wrong username or password!\n");
    }

    return 0;
}
