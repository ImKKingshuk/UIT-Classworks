#include<stdio.h>
#include<string.h>

char data[20][20];
int n;

main(){
    
int i,j,ch;
char tmp[20][20];
printf("enter the number of frames\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
if(i!=0)
{
printf("frames %d ",i);
fflush(stdin);
scanf("%s",data[i]);
}
}
for(i=1;i<=n;i++)
{

tmp[i][0]=49+strlen(data[i]); 
tmp[i][1]='\0';
strcat(tmp[i],data[i]);
}

for(i=1;i<=n;i++)
{
printf("frames%d",i);
puts(tmp[i]);

}

printf("data transmitted \n");
for(i=1;i<=n;i++)
printf("%s",tmp[i]);
printf("\n\t\t at the reciever \n ");
printf("the data recieved \n");
for(i=1;i<=n;i++)
{
ch=(int)(tmp[i][0]-49);
for(j=1;j<=ch;j++)
data[i][j-1]=tmp[i][j];
data[i][j-1]='\0';
}
for( i=1;i<=n;i++)
printf("%s",data[i]);
printf("\n the data in the frame from\n ");
for(i=1;i<=n;i++)
{
printf("frames %d: ",i);
puts(data[i]);
}
}