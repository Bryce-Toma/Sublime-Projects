#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//Defining Boolean
#define true 1
#define false 0


bool input (char string[]){

	printf("Input a character string you would like to convert: ");
		scanf("%s", &string);
	if(string != ""){
		return true;
	} else {
		return false; 
	}
}

void encrypt(char string[] ,int key){

	int index = 0; 
	while(string[index] != '\0'){
		string[index] = string[index + key];
		++index; 
	}
}
void decrypt(char string[], int key) {
	for (int index = 0; string[index] != '\0'; ++index) {
		string[index] = string[index - key];
	}
}


bool output(char string[]) {
	for (int index = 0; string[index] != '\0'; ++index) {
		printf(string[index]);
	}
	if (string != ""){
		return true;
	}
	else {
		return false;
	}
}

void main(){

	char string[120];
	int key = rand() % 120;
	bool input(string);
	//void encrypt(string, key);
	//void decrypt(string, key);
	//bool output(string);
}