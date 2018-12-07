#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <stdlib.h>
#include <stdio.h>

static int __init peek(char[8] *address_ptr) {
  printk(KERN_INFO "Entering peek. Hello!\n");

  char *data;
  memcpy(&data, *address, 2); //data should contain the byte needed
  copy_from_user(&data, address, 1);

  return 0;
}

static void __exit peek_exit(void) {
  printk(KERN_INFO "Leaving peek. Goodbye\n");
}

module_init(poke);
module_exit(peek);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("RL");
MODULE_DESCRIPTION("A driver that");
