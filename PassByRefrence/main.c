//
//  main.c
//  PassByRefrence
//
//  Created by ammar falmban on 3/18/14.
//  Copyright (c) 2014 SDKaizen.com. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{
    // Define
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    // Pass the Address of integer part as an argument
    fractionPart = modf(pi, &integerPart);
    
    // Find the value stored in intergerPart
    printf("integer part = %0.f ,  fractionPart = %.2f\n",integerPart,fractionPart);
   
    return 0;
}

