
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i; clrscr();
	char c[]="qwertyuiop";
	FILE *fp;
	fp=fopen("abc.txt","w");
	if(fp==NULL){

	printf("file not found");

}
	for(i=0;i<strlen(c);i++)
	fputc(c[i],fp);
    fclose(fp);
	getch();
}
