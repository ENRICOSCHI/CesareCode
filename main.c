#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	//char Alfabeto[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
	char input[50];
	//char lettera;
	int chiave,lungh,i;
int main(int argc, char *argv[]) {
	
	printf("inserire la parola\n");
	scanf("%s",&input);
	
	printf("Inserire la chiave = \n");
	scanf("%d",&chiave);

	lungh=strlen(input);//lenght di input
	
	for(i=0;i<lungh;i++){
		if (input[i]+chiave>122)
		 input[i]=input[i]+chiave-26;
		else
		 input[i]=input[i]+chiave;
	}	
	printf("%s",input);	
	return 0;
}
