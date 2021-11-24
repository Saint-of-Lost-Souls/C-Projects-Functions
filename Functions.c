#include <stdio.h>
#include <stdlib.h>

// return_type, function_name(oarameter list)
// Functions can be defined anywhere

int sum(int a, int b)
{
    int result = a + b;
    return result;
}
void printStudents(int students)
{
    printf("Students = %d\n", students);
}
int main()
{
    int students, girls = 12, boys = 9;
    students = sum(girls, boys);
    printStudents(students);
    
    printf("\n\n");
    return EXIT_SUCCESS;
}

/* int sum(int a, int b);
void printStudents(int studets);

int main()
{
    int students, girls = 12, boys = 9;
    students = sum(girls, boys);
    printStudents(students);
    return 0;
}
int sum( int a, int b)
{
    int result = a + b;
    return result;
}
void printStudents(int students)
{
    printf("Students = %d\n", students);
} */