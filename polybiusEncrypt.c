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
	char message[128];
	fgets(message, sizeof(message), stdin);
	
	char encryptedMessage[256];
	
	int h;
	int i;
    int j;
    for (h = 0; h < strlen(message); h++){
        if(message[h] == 'j'){
            message[h] = 'i';
        }
        for( i = 0; i < 5; i++) {
            for( j = 0; j < 5; j++) {
                if (message[h] == square[i][j]){
                    encryptedMessage[2*h] = i + '0' ;
                    encryptedMessage[2*h+1] = j + '0';
                    //printf("%d%d",i,j);
                }
            }
        }
    }
    
    encryptedMessage[2 * strlen(message) - 2 ] = '\0';

	// Add code to encipher each letter of the message
	printf("%s\n",encryptedMessage);
	
	
	return 0;
}