#include <stdio.h>

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if((a+b+c) != 180) printf("Error");
    else {
        if(a==b){
            if(b==c) printf("Equilateral");
            else printf("Isosceles");
        }
        else {
            if(b==c) printf("Isosceles");
            else {
                if(a==c) printf("Isosceles");
                else printf("Scalene");
            }
        }
        }
    
    return 0;
}