// Take source and target files and copy source to target

#include<stdio.h>


void main(int argc, char * argv[])
{
  FILE *sfp, *tfp;
  int ch;

  if(argc < 3)
  {
     printf("copyfile <source> <target>");
     exit(1);
  }

  sfp = fopen(argv[1], "rt");
  if(sfp == NULL)
  {
      printf("File %s could not be opened!", argv[1]);
      exit(2);
  }


  tfp = fopen(argv[2], "wt");
  if(tfp == NULL)
  {
      printf("File %s could not be created!", argv[2]);
      exit(3);
  }

  while(1)
  {
      ch = fgetc(sfp);
      if(ch == EOF)
         break;
      fputc(ch, tfp);
  }

  fclose(sfp);
  fclose(tfp);

}
