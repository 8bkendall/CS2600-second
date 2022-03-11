//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);

    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char * phonenumberToFind); 

    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

 

    //defined in employeeTable.c 

    extern Employee EmployeeTable[];     

    extern const int EmployeeTableEntries;   

 

    PtrToEmployee matchPtr; //Declaration 

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

 

    //Example not found 

    if (matchPtr != NULL) 

        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee ID is NOT found in the record\n"); 

 

    //Example found 

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 

        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Tony Bobcat is NOT found in the record\n"); 

     

    //example salary NOT FOUND
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 3.50); 

    if (matchPtr != NULL) 

        printf("Employee Salary 3.50 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Salary is NOT found in the record\n"); 



    //example salary FOUND
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50); 

    if (matchPtr != NULL) 

        printf("Employee Salary 4.50 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Salary is NOT found in the record\n"); 



     //example phone number FOUND

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "909-555-2134"); 

    if (matchPtr != NULL) 

        printf("Employee Phone 909-555-2134 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Phone 909-555-2134 is NOT found in the record\n"); 

         //example phone number NOT FOUND

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "515-555-5555"); 

    if (matchPtr != NULL) 

        printf("Employee Phone 515-555-5555 is in record %d\n", matchPtr - EmployeeTable); 

    else 

        printf("Employee Phone 515-555-5555 is NOT found in the record\n"); 

    return EXIT_SUCCESS; 

} 