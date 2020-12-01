#include<stdio.h>

int main(){
	char kalimat[105];
	
	scanf("%[^\n]",&kalimat);getchar();
	printf("#include <stdio.h>\n");
	printf("int main()\n");
	printf("{\n");
	printf("    printf(\"%%s\\n\",\"%s\");\n",kalimat);
	printf("    return 0;\n");
	printf("}\n");
}
