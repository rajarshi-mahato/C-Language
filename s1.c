#include <stdio.h>
struct EmpDataBase
{
    int id_number;
    int age;
    float salary;
};
int main()
{
   struct EmpDataBase employee;
    employee.age=22;
    employee.id_number=1234;
    employee.salary=12000.32;
    printf("Age : %d\n",employee.age);
    printf("Id Number : %d\n",employee.id_number);
    printf("Salary: %f\n",employee.salary);
    return 0;

}
