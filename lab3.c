#include<stdio.h>

int c;
int l;
int strLength(char[]);
int checkCase(char);
char toUpper(char);
char* getString();
char* capitalize(char[]);
void reverse(char[]);
void printOutput();

int main(){
	//printf("%s", capitalize(getString()));
	printOutput();
	
	
}

int strLength(char str[]){
	int count_c = 0;
	for(int i = 0; str[i] != '\n'; i++){
		count_c++;
		//printf("%c\n", str[i]);
	}
	return count_c;

}

int checkCase(char c){
	if(c >= 'a' && c<= 'z' )
		return 1;
	else
		return 0;
}

char toUpper(char c){
	return c-32;
}

char* getString(){
	static char str[50];
	printf("Enter a string:\n");
	fgets(str, 50, stdin);
	l = strLength(str);
	//printf("%s", str);
	return str;
}

void reverse(char str[]){
	for(int i = strLength(str)-1; i >=0; i--){
		printf("%c\n", str[i]);
		
	}
}

char* capitalize(char str[]){
	
	for(int i = 0; i < strLength(str); i++){
		if(checkCase(str[i])==1){
			str[i] = toUpper(str[i]);
			c++;
		}
	}
	return str;
}

void printOutput(){
	reverse(capitalize(getString()));
	printf("The string is %d chars and %d chars were capitalized.\n", l, c);
}




