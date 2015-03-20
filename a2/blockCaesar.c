#include <stdio.h>
#include <string.h>

char sentence[100];

char  *cipher(int first, int second, int third){   // first,second,third keys as input
	int length = strlen(sentence);
	int x = 0;  // counter for while loop as well as array position
	while (x < length){
		if (((sentence[x]>='a')&&(sentence[x]<='z')) || ((sentence[x]>='A')&&(sentence[x]<='Z'))){
			if ((x%3)==0){
				if (first < 0){
					if ((sentence[x]+first < 'a')||((sentence[x]+first)<'A')){
						if (first > -26){
							sentence[x]=sentence[x]+(first+26);
						}
						else{
							sentence[x]=sentence[x]-((-1*first)%26)+26;
						}
					}
					else{
						sentence[x]=sentence[x]+(first);
					}
				}
				else{
					if((sentence[x]+first > 'z')||(sentence[x]+first > 'Z')){
						if (first < 26){
							sentence[x]=sentence[x]+(first-26);
						}
						else{
							sentence[x]=sentence[x]+(first%26);
						}
					}
					else{
						sentence[x]=sentence[x]+first;
					}
				}
			}
			else if (((x-1)%3)==0){
				if (second < 0){
					if ((sentence[x]+second < 'a')||(sentence[x]+second < 'A')){
						if (second > -26){
							sentence[x]=sentence[x]+(second+26);
						}
						else{
							sentence[x]=sentence[x]-((-1*second)%26)+26;
						}
					}
					else{
						sentence[x]=sentence[x]+second;
					}
				}
				else{
					if((sentence[x]+second > 'z')||(sentence[x]+second > 'Z')){
						if (second < 26){
							sentence[x]=sentence[x]+second-26;
						}
						else{
							sentence[x]=sentence[x]+(second%26);
						}
					}
					else{
						sentence[x]=sentence[x]+second;
					}
				}
			}
			else{
				if (third < 0){
					if ((sentence[x]+third < 'a')||(sentence[x]+third < 'A')){
						if (third > -26){
							sentence[x]=sentence[x]+(third+26);
						}
						else{
							sentence[x]=sentence[x]-((-1*third)%26)+26;
						}
					}
					else{
						sentence[x]=sentence[x]+third;
					}
				}
				else{
					if((sentence[x]+third > 'z')||(sentence[x]+third > 'Z')){
						if (third < 26){
							sentence[x]=sentence[x]+third-26;
						}
						else{
							sentence[x]=sentence[x]+(third%26);
						}	
					}
					else{
						sentence[x]=sentence[x]+third;
					}
				}
			}
		}
		x++;
	}
	return sentence;
}


int main(void){
	printf("Sentence: ");
	scanf("%100[^\n]", sentence);
	int a,b,c;
	printf("Keys: ");
	scanf("%d %d %d", &a,&b,&c);	

	printf("%s", cipher(a,b,c));
}

