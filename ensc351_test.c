#include <linux/kernel.h>
#include <linux/string.h>


asmlinkage void sys_ensc351_test(const char *argument)
{

int result = 0; //represents count of char in string

result = strlen(argument);

printk("Total number of characters in string %d\n", result);

}
