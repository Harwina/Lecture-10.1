#include <stdio.h>


int calculateCube(float num) {
    return num * num * num;
}

int main() {
    int number, cube;
    
    printf("Enter any number: ");
    scanf("%d", &number);
    
    cube = calculateCube(number);
    
    printf("Cube is: %d\n", cube);

    return 0;
}
