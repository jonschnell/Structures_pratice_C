#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct pet {
    char breed[20];
    char name[20];
    char color[20];
    int num_legs;
} pet_type;

void main(){
   
    pet_type p={"breed", "name", "color", 4};
    printf("enter the breed of the pup:\n");
    scanf("%s", p.breed);
    printf("enter the name of the pup:\n");
    scanf("%s", p.name);
    printf("enter the color of the pup:\n");
    scanf("%s", p.color);
    printf("enter the number of legs the pup has:\n");
    scanf("%d", &p.num_legs);

    printf("%s is a %s with a %s coat and has %d legs\n", p.name, p.breed,  p.color, p.num_legs);



}
