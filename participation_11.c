//Farhan Shahbaz

//New Martinsville



#include <stdio.h>


struct ingredient

{
    
	char name[100];
    	int quantity;

        char* measurement_type;

};



struct recipe
{

    char* recipe_name;

    struct ingredient ingredient;

};



int main()
{

    printf("Hello World\n\n");

    struct ingredient flour = {

        .name = "Flour",

        .quantity = 5,

        .measurement_type = "Cup"

};
    

printf("%s\n\n", flour.name);

    
    struct recipe tuna = {

        "Tuna Salad",
        
	{"Tuna, Celery, Apples, Oranges", 10, "Cup"}
};
    
    
	printf("Recipe for %s is %s. The quantity needed is %d.", tuna.recipe_name, tuna.ingredient.name, tuna.ingredient.quantity );

    

	return 0;


}
