#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stud
{
      int rno;

      char name[20];
}s;
int main()
{
      FILE *fp;
      fp=fopen("student.txt","w");
      printf("Enter record of student:\n\n");
      printf("\nEnter student number : ");
      scanf("%d",&s.rno);
      printf("\nEnter name of student: ");
      scanf("%s",s.name);

      fprintf(fp,"%d\n%s\",s.rno,s.name);
      printf("\nRecord stored in file...");
      fclose(fp);
      return 0;
}
