// structure & UNION in C 
// A structuee is a user defined data type that can be used to group elemnets of different type into a single type.



/// declaring Structure 

// there must be a struct 


// this structure is decalred ouside the main function which means that it is in global scope 
#include<stdio.h>

struct 
{
    char *engine;
    char *fuel_type;
    int fule_tank_cap;
    int seating_cap;
    float city_mileage;
}car1,car2;


/// with the help of this . operator we can access the element 
int main(){
    car1.engine="DDis 1190 Engine";
    car2.engine="1.2 L Kappa Dual VIVT";
    printf("%s\n",car1.engine);
    printf("%s",car2.engine);

    return 0; ;
}
