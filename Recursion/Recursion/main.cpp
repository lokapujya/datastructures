//
//  main.cpp
//  Recursion
//
//  Created by Fallon, James on 12/12/20.
//  Copyright © 2020 Fallon, James. All rights reserved.
//

#include <stdio.h>
double e(int x, int n)
{
    static double p=1,f=1;
    double r;
    
    if(n==0)
        return 1;
    r=e(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}
int main()
{
    printf("%lf \n",e(4,15));
    return 0;
}
