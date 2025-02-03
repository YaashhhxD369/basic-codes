#include<stdio.h>
int main(){
    int radius;
    float PI = 3.14, area, circumference; // Corrected spelling of 'circumference'
    
    printf("Enter the radius of circle:");
    scanf("%d", &radius);
    
    area = PI * radius * radius;
    printf("The Area of circle is: %f", area);
    
    circumference = 2 * PI * radius;
    printf("\nThe Area of circumference of circle is: %f",circumference);// Corrected the word 'Area' to 'Circumference'
    
    
	return 0;
}
