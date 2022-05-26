#include<stdio.h>
int main()
{
      FILE *fp;
      char ch;
      int i,a;
      fp=fopen("newfile.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist");
      }
      fseek(fp,0,SEEK_END);
      a=ftell(fp);
      i=0;
      while(i<a)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}
