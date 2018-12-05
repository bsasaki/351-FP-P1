#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>

#define _ENSC351_TEST_ 332

int main(int argc, char *argv[])
{
char line[100];
printf("Enter a string: ");
fgets(line, 100, stdin);
printf("Your string is %s", line);

printf("\nDiving to kernel level\n\n");
int result = syscall(_ENSC351_TEST_, line);
printf("\nRising to user level w/ result = %d\n\n", result);

return 0;
}


