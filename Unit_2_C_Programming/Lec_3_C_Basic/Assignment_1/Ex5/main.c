/*
 * main.c
 *
 *  Created on: May 7, 2022
 *  Author: Mahmoud Fadel
 */

#include"stdio.h"
void main(){
	int ch;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII value of %c = %d",ch,ch);
}
