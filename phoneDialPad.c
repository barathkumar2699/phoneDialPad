#include <stdio.h>
#include<stdlib.h>
char dial[3][3][5]={
    {" ","abc","def"},
    {"ghi","jkl","mno"},
    {"pqrs","tuv","wxyz"}
};
void printNum(char s[],int v,char ch)
{

    for(int i=0;s[i];i++)
    {
            printf("%d",v);
            if(ch==s[i]){
            printf(" ");
                break;
        }
    }

}
char* getString(char ch)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;dial[i][j][k];k++)
            {
                if(dial[i][j][k]==ch)
                    return dial[i][j];
            }
        }
    }
}
int checkPresent(char ch)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
         for(int k=0;dial[i][j][k];k++)
         {
             if(ch==dial[i][j][k])
             {
                 if(ch>='a'&&ch<='c')
                    return 2;
                 if(ch>='d'&&ch<='f')
                    return 3;
                 if(ch>='g'&&ch<='i')
                    return 4;
                 if(ch>='j'&&ch<='l')
                    return 5;
                 if(ch>='m'&&ch<='o')
                    return 6;
                 if(ch>='p'&&ch<='s')
                    return 7;
                 if(ch>='t'&&ch<='v')
                    return 8;
                 if(ch>='w'&&ch<='z')
                    return 9;
                else if(ch==' ')
                    return 0;
             }
              //return 1;
         }
        }
    }
    return 0;
}
int main()
{
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        for(int k=0;dial[i][j][k];k++)
            printf("%c",dial[i][j][k]);
        printf(" ");
    }
    printf("\n");
}
char s[100];
int n;
scanf("%[^\n]%n",s,&n);
for(int i=0;i<n;i++)
{
        char *t;
        int v=checkPresent(s[i]);
        //printf("%d ",v);
        t=getString(s[i]);
        //printf("%s ",t);
        printNum(t,v,s[i]);
}

}
