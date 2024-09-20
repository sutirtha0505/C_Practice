    #include <stdio.h>
    #include <string.h>

    struct student
    {
        int roll;
        char name[50];
        float marks;
    };
    typedef struct student Student;

    int main(){
        Student s[50];
        int n, max = 0, flag = 0, searchIndex = 0;
        char name[50];

        printf("Enter the number of students: ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            printf("---Student Details ---\n");
            printf("Enter roll number: ");
            scanf("%d", &s[i].roll);
            printf("\nEnter name: ");
            scanf("%s", s[i].name);
            printf("\nEnter marks: ");
            scanf("%f", &s[i].marks);
        }

        printf("\n---Student Details ---\n");
        printf("Roll\tName\tMarks\n");
        for(int i = 0; i <n ; i++){
            printf("%d\t%-10s\t%.2f\n", s[i].roll, s[i].name, s[i].marks);
        }

        printf("\n---Finding maximum value scoring student---\n");
        for(int i = 0; i < n; i++){
            if(s[i].marks > s[max].marks){
                max = i;
            }
        }
        printf("Student with highest marks: %s\n", s[max].name);

        printf("\n---Searching for a student by name---\n");
        printf("Enter name to search: ");
        scanf("%s", name);
        for(int i = 0; i < n; i++){
            if(strcmp(s[i].name, name) == 0){
                flag = 1;
                searchIndex = i;
                break;
            }
        }
        if(flag){
            printf("%d\t%-10s\t%.2f\n", s[searchIndex].roll, s[searchIndex].name, s[searchIndex].marks);
        }
        else{
            printf("Student not found!\n");
        }
    }
