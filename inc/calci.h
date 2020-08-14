/**
* @file calci.h
*
*/
#ifndef __CALCI_H__
#define __CALCI_H__

/**
* Calculator with addition and subtraction
* @param[in] choice 0- for addition, 1- for subtraction
* @param[in] num1
* @param[in] num2
* @return Returns either sum or difference of the two numbers based on user choice
* @note -1 returned if choice is invalid
*/
int calculator(int choice, int num1, int num2);


/**
* Addition of two numbers
* @param[in] num1
* @param[in] num2
* @return Returns sum of the two numbers
*/

int add(int num1, int num2);


/**
* Subtraction of two numbers
* @param[in] num1
* @param[in] num2
* @return Returns difference of the two numbers
*/

int sub(int num1, int num2);

#endif
