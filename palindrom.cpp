/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()

{
    char a[100],b[100];
    printf("Enter the string to check if it is a palindrome:");
      gets(a);
      
    strcpy(b,a);
    strrev(b);
    
    if(strcmp(a,b)==0)
    printf("Entered string is a palindrome.\n");
    else
    printf("Entered string is not a palindrome.\n");
    
}
    

    return 0;
}



