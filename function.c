#include <stdio.h>
#include <stdlib.h>
int main(){
    sayHi("Mike", 5);
    return 0;
}
void sayHi(char name[], int age){
    
    printf("Hi %s %d\n", name, age);
}

