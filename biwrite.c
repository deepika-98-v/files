#include<stdio.h>
#include<string.h>
struct node
{
int data;
char name[10];
};
int main()
{
struct node n1;
FILE *fp;
n1.data=222;
fp=fopen("binfile","wb");
if(fp==NULL)
{
printf("File error\n");
return;
}
strcpy(n1.name,"Raj");
fwrite(&n1,1,sizeof(n1),fp);
fclose(fp);
}

