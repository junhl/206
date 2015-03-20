#include <stdio.h>
#include <string.h>

char sentence[100];  // the global array sentence

int hash (int key){
	int x = 0; // cell position of sentence starting from 0
	int sum = 0; // sum of the letters of the sentence to update
	while (1 == ((x<strlen(sentence)) && (x<100))){   // the loop stops when one of them is false, whichever that comes first (ex. false AND true will be false. Then, the loop stops)
		sum = sum + sentence[x];
		x++;
	}
	int y = 0;  // counter for next while loop
	int powResult = 1;   // it will be updated to get the final number,sum of power of key to return
	if (key < 0){
		powResult = 0;   // (any int to power a negative int would be a fraction, which is 0 in int)
	}
	else if (key==0){
		powResult = 1;    // (any int to power 0 is 1)
	}
	else {
		while (y < key){
			powResult = powResult*sum;
			y++;
		}
	}
	return powResult;
	
}

int main(void){
	int key;  // the local variable key
	printf("Please enter a sentence. Keep it less than 100 characters: ");
	scanf("%[^\n]", sentence);

	printf("Please enter a key: ");
	scanf("%d", &key);

	int hashNumber = hash(key); // local variable hashNumber gets result from function hash
	printf("%d\n", hashNumber);
	printf("Done.\n");
	return 0;
}
