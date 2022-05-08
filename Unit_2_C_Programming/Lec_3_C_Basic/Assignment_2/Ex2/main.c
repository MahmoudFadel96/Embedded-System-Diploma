/*
 * main.c
 *
 *  Created on: May 8, 2022
 *  Author: Mahmoud Fadel
 *  Description : Check alphabet is Vowel or Consonant
 *
 */

#include"stdio.h"
void main(){

	char alphabet;
	printf("Enter an alphabet : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alphabet);
	if(alphabet == 'a' || alphabet == 'e' || alphabet =='i' || alphabet =='o' || alphabet =='u' )
		printf("%c is Vowel",alphabet);
	else
		printf("%c is Consonant",alphabet);
}
