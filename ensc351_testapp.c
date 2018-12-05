#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/syscall.h>

#define _ENSC351_TEST_ 332

int main(int argc, char *argv[])
{
const char* line = "test";
printf("\nDiving to kernel level\n\n");
syscall(_ENSC351_TEST_, line);

return 0;
}


