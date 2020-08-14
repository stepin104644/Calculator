#include "calci.h"

int add(int num1,int num2)
{
    return num1+num2;

}


int sub(int num1,int num2)
{
    return num1-num2;

}

int calculator(int choice, int num1, int num2)
{
    int result;

    int (*calci_ptr[2])(int,int) = {add,sub}; //< array of two function pointers

    if(choice==0)
      result = calci_ptr[0](num1,num2);
    else if(choice==1)
      result = calci_ptr[1](num1,num2);
    else
      result = -1;

      return result;

}


