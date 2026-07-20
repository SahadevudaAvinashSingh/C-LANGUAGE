#include <stdio.h>
#include <string.h>

struct Record {
    int id;
    char name[50];
    int present;
} r[100];

int count = 0;

void add() {
    printf("Enter ID, Name, and Status (1=Present, 0=Absent) separated by spaces: ");
    scanf("%d %49s %d", &r[count].id, r[count].name, &r[count].present);
    count++;
}

void display() {
    printf("\nID\tName\tStatus\n-----------------------\n");
    for (int i = 0; i < count; i++)
        printf("%d\t%s\t\t%d\n", r[i].id, r[i].name, r[i].present);
}

void search() {
    int id;
    printf("Enter ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
        if (r[i].id == id) {
            printf("Found: %s (Status: %d)\n", r[i].name, r[i].present);
            return;
        }
    printf("Not found.\n");
}

void del() {
    int id;
    printf("Enter ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
        if (r[i].id == id) {
            for (int j = i; j < count - 1; j++) r[j] = r[j + 1];
            count--;
            printf("Deleted.\n");
            return;
        }
    printf("Not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("Attendance Monitoring System\n================================");
        printf("\n1.Add\n2.View\n3.Search\n4.Delete\n5.Exit\n================================\nChoose any option to get: ");
        scanf("%d", &choice);

        if (choice == 1) add();
        else if (choice == 2) display();
        else if (choice == 3) search();
        else if (choice == 4) del();
        else if (choice == 5) break;
        else printf("Invalid choice.\n");
    }
    return 0;
}
