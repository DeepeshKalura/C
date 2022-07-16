/*

3. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator. Go to the editor
Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z            
    

*/

#include <stdio.h>

int main()
{
    int m = 300, *n;
    float fx = 300.600006, *f;
    char cht = 'z', *c;
    
    printf("\nValue of m = %d", m);
    printf("\nValue of fx = %f", fx);
    printf("\nValue of cht = %c", cht);
    
    n = &m;
    f = &fx;
    c = &cht;
    
    printf("\nValue of address of m is %p", n);
    printf("\nvalue of address of fx is %p", f);
    printf("\nValue of address of c is %p", c);
    
    
    printf("\nValue of address of m is %d", *n);
    printf("\nValue of address of m is %f", *f);
    printf("\nValue of address of m is %c", *c);
    
    return 0;
}
