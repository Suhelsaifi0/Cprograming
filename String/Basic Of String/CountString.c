#include <stdio.h>  
#include <string.h>  
   
int main()  
{  
    // char string[] = "The best of both worlds";  
    int count = 0;  

    char str[100]; // Buffer for storing the string
    printf("Enter a string (no spaces): ");
    scanf("%s", str); // Reads input until a whitespace
    printf("You entered: %s\n", str);
      
    //Counts each character except space  
    for(int i = 0; i < strlen(str); i++) {  
        if(str[i] != ' ')  
            count++;  
    }  
      
    //Displays the total number of characters present in the given string  
    printf("Total number of characters in a string: %d", count);  
   
    return 0;  
}  

