#include <linux/kernel.h>


asmlinkage int sys_ensc351_test(char argument)
{

int result = 0; //represents count of char in string

//printk("--syscall argument %s\n", argument);

//result = (unsigned)strlen(argument);

printk("Total number of characters in string %d", result);

return result;
}
