#include <stdio.h>

int main() {
    char Name[50], Student_Number[20], Parallel_Class[20], Place_Time_Of_Birth[50], Adress[100], Hobby[50], Phone_Number[20];

    printf("Nama\t\t\t: ");
    scanf(" %[^\n]", Name);
    printf("NIM\t\t\t: ");
    scanf(" %[^\n]", Student_Number);
    printf("Kelas Paralel\t\t: ");
    scanf(" %[^\n]", Parallel_Class);
    printf("Tempat/Tanggal Lahir\t: ");
    scanf(" %[^\n]", Place_Time_Of_Birth);
    printf("Alamat\t\t\t: ");
    scanf(" %[^\n]", Adress);
    printf("Hobby\t\t\t: ");
    scanf(" %[^\n]", Hobby);
    printf("No. HP\t\t\t: ");
    scanf(" %[^\n]", Phone_Number);
    printf("\n");
    printf("Nama\t\t\t: %s\n", Name);
    printf("NIM\t\t\t: %s\n", Student_Number);
    printf("Kelas Paralel\t\t: %s\n", Parallel_Class);
    printf("Tempat/Tanggal Lahir\t: %s\n", Place_Time_Of_Birth);
    printf("Alamat\t\t\t: %s\n", Adress);
    printf("Hobby\t\t\t: %s\n", Hobby);
    printf("No. HP\t\t\t: %s\n", Phone_Number);
    return 0;
}