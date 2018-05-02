#include<stdio.h>
 
main()
{
int s;
char file_name[25];
printf("Enter file name to delete\n");
gets(file_name);
s = remove(file_name);
if (s == 0)
printf("%s file deleted successfully.\n", file_name);
 else
   {
printf("Unable to delete the file\n");
 perror("Error");
   }
return 0;
}