#include <stdio.h>
#include <string.h>

char square[5][5]  = {{'z', 'e', 'b', 'r', 'a'}, 
	                  {'s', 'c', 'd', 'f', 'g'},
	                  {'h', 'i', 'k', 'l', 'm'},
	                  {'n', 'o', 'p', 'q', 't'},
	                  {'u', 'v', 'w', 'x', 'y'}};
    
    int main() {
    
    
	// Read the plaintext from the terminal
	// You do not need to print a message before reading the input
	char message[256];
	fgets(message, sizeof(message), stdin);
	
	char decryptMessage[128];
	int i = 0;
	for (i = 0; i < strlen(message); i+=2){
	    decryptMessage[i/2]=square[message[i] - '0'][message[i+1] - '0'];
	    //printf("%c%d",square[(i-'0')][i+1 - '0'],i);
	}

    decryptMessage[(strlen(message) +2)/2 -1 ] = '\0';
	
	// Add code to encipher each letter of the message
	printf("%s\n",decryptMessage);
	
	
	return 0;
}