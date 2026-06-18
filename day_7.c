#include<stdio.h>
void australia() {
printf("hello you are in astralia\n");
return;
}
void england (){
    printf("you are in england \n ");
    australia();
return;}
void india (){
    printf("you are in india\n");
india();
return;}

int amin(){
australia();
england();
india();
}

