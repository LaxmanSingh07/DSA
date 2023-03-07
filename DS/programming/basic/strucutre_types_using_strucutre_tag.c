// // #include<stdio.h>


// // // This structure in the global scope, Hence, it is visible to all the fucntions 
// // struct 
// // {
// //     char *engine;
// //     char *fuel_type;
// //     int fule_tank_cap;
// //     int seating_cap;
// //     float city_mileage;
// // }car1,car2;


// // int main(){
// //     car1.engine="DDis 1190 Engine";
// //     car2.engine="1.2 L Kappa Dual VIVT";
// //     printf("%s\n",car1.engine);
// //     printf("%s",car2.engine);

// //     return 0; ;
// // }




// // strucutre in the local scope


// #include<stdio.h>
// struct 
// {
// char *name;
// int age;
// int salary;
// }emp1,emp2;

// int manager(){
//     struct 
//     {
//         char *name;
//         int age;
//         int salary;
//     }manager;
//     manager.age=27;

//     if(manager.age>30){
//         manager.salary=65000;
//     }
//     else{
//         manager.salary=15000;
//     }
//     return manager.salary;
// }


// int main(){
//     printf("Enter the salray of employee 1 ");
//     scanf("%d",&emp1.salary);
//     printf("Enter the salary of employee 2 ");
//     scanf("%d",&emp2.salary);
//     printf("emp1 salary is %d\n",emp1.salary);
//     printf("emp2 salary is %d\n",emp2.salary);

//     return 0;
// }



// #include<stdio.h>


// // This structure in the global scope, Hence, it is visible to all the fucntions 
// struct 
// {
//     char *engine;
//     char *fuel_type;
//     int fule_tank_cap;
//     int seating_cap;
//     float city_mileage;
// }car1,car2;


// int main(){
//     car1.engine="DDis 1190 Engine";
//     car2.engine="1.2 L Kappa Dual VIVT";
//     printf("%s\n",car1.engine);
//     printf("%s",car2.engine);

//     return 0; ;
// }




// strucutre in the local scope


#include<stdio.h>

// we can declare the type of the strucure tag
struct employee 
{
char *name;
int age;
int salary;
};

int manager(){
    struct  employee manager;
    manager.age=27;

    if(manager.age>30)  
        manager.salary=65000;

    else    
        manager.salary=55000;

        return manager.salary;
    
}


int main(){
    struct employee emp1;
    struct employee emp2;
    scanf("%d",&emp1.salary);
    scanf("%d",&emp2.salary);
    printf("%d\n",emp1.salary);
    printf("%d",emp2.salary);


    
    return 0;
}
