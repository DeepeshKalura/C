/*

2. Write a program in C to demonstrate how to handle the pointers in the program. Go to the editor
Expected Output :

Address of m : 0x7ffcc3ad291c
Value of m : 29                                                                                              
                                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
                                                        

*/

#include <stdio.h>

int main()
{
    int *ab, m = 29;
    ab = &m;
    printf("\nab stores the address of m = %p", ab);
    printf("\n*ab stores the value of m = %d", *ab);
    m =34;
    printf("\nthe address of ab = %p", ab);
    printf("\n*ab stores the value of m = %d", *ab);
    *ab = 7;
    printf("\nm is the address of m = %p", ab);
    printf("\n&n is the address of m = %d", m);

    return 0;
}
