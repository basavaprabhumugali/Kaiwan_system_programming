#include"shell_header.h"
#include<sys/types.h>
#include<sys/wait.h>
void main()
{
	char *s1,s2[20];
	int i,j,k,cnt=1,com;
	FILE *fp=fopen(".log_myshell","a+");
	s1=(char*)malloc(strlen("ee211315@<Sumedha>")+1);
	strcpy(s1,"ee21135@<Sumedha>");
	system("clear");
	while(1)
	{
		com=0;
		printf("%s%d:",s1,cnt);
		scanf(" %[^\n]s",s2);
		//gets(s2);
		fprintf(fp,"%s\n",s2);

		if(strlen(s2)==0)
			continue;

		else if(strcmp(s2,"clear")==0)
		{
			cnt=1;system("clear");
		}
		else if(strcmp(s2,"exit")==0)
		{
			fprintf(fp,"%s\n",s2);
			return;
		}
		else
		{
			cnt++;
			for(i=0;s2[i];i++)
			{
				if(s2[i]==',')
					com++;
			}
			char **p;
			p=(char**)malloc(sizeof(char*)*(com+2));
			for(i=0;i<com+1;i++)
				p[i]=(char*)malloc(20);

			for(i=0,k=0,j=0;s2[i];i++)
			{
				if(s2[i]!=',')
					p[k][j++]=s2[i];
				else
				{
					k++; j=0;
				}
			}
			for(i=0,k=0;p[i];i++)
			{
				//system(p[i]);
				if(fork()==0)
					execvp(p[i],p);
				else{
					wait(0);	
					printf("------parent-----------\n");
			//		sleep(1);
				 }
			}
		}
	}
}
