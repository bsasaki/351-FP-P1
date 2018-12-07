#include <linux/init.h>
#include <stdlib.h>
#include <stdio.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init getptr(void) {
  printk(KERN_INFO "Entering getptr. Hello!\n");
  char *ptr = (char*)kmalloc(1025);
  char buffer [8];
  char *address = sprintf(buffer, "%s", ptr);
  printk("Address: %s\n", buffer);

  return atoi(buffer);
}

static void __exit getptr_exit(void) {
  printk(KERN_INFO "Leaving getptr. Goodbye\n");
}

module_init(getptr);
module_exit(getptr_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("RL");
MODULE_DESCRIPTION("A driver that retrives a pointer");
