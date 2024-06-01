// Take filename on command-line and display its contents with line numbers

#include<stdio.h>


void main(int argc, char * argv[])
{
  FILE * fp;
  int lineno = 1;
  char line[100], *p;

  if(argc < 2) {
     printf("Missing filename");
     exit(1);
  }

  fp = fopen(argv[1], "rt");
  if(fp == NULL)
  {
      printf("Sorry! File not found!");
      exit(2);
  }

  while(1)
  {
      p = fgets(line, 100, fp);
      if (p == NULL)
         break;
      printf("%4d: %s",lineno,line);
      lineno ++;
  }

  fclose(fp);
}
