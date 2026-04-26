#include <stdio.h>

int main() {
    printf("-----Iron Grading System-----\n");
    int tensile_strength;
    printf("Enter tensile strength (Mpa) unit :- \n");
    scanf("%d",&tensile_strength);
    
    if(tensile_strength >= 10 && tensile_strength <140){
        printf("It is Pure, single-crystal iron ");
    }
    if(tensile_strength >= 140 && tensile_strength <340){
        printf("It is Carbon-containing iron");
    }
    if(tensile_strength >= 340 && tensile_strength <690){
        printf("It is Small-grain iron iron");
    }
    if(tensile_strength >= 690 && tensile_strength <1200){
        printf("It is Cold-worked iron");
    }
    if(tensile_strength >= 1200 && tensile_strength <1380){
        printf("It is Pearlitic steel");
    }
    if(tensile_strength >= 1380 && tensile_strength <2070){
        printf("It is Bainitic steel");
    }
    if(tensile_strength >= 2070 && tensile_strength <2930){
        printf("It is Martensitic steel");
    }
    if(tensile_strength >= 2930 && tensile_strength <11000){
        printf("It is Ausformed (hardened) steel");
    }
    else{
        printf("It is Iron whiskers");
    }
}
