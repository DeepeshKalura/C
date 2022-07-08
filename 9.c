#include <stdio.h>
#include <math.h>
int main(){
    int i, n;
    float *num;
    float sum = 0.0, mean, SD;
    
    // Asking for input
    printf("Enter total number of elements: ");
    scanf("%d", &n);
    printf("Enter the value of elements: \n");
    for (i = 0; i < n; i++ )
    scanf("%f",num+i);
    
    // Calculating Mean
    for (i = 0; i < n; i++){
        sum += *(num+i);
    }
    mean = sum / n;
    
    // Calculating Standard Deviation
    sum = 0.0;
    for (i = 0; i < n; i++){
        sum += (*(num+i) - mean) * (*(num+i) - mean);
    }
    SD = sqrt(sum / n);
    // printf("Mean: %6.3f \n", mean);
    printf("Standard Deviation: %.6f", SD);
    return 0;
   
   
}