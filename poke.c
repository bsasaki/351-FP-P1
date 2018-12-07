#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <stdlib.h>
#include <stdio.h>

static int __init poke(char[9] *str_ptr) {
  printk(KERN_INFO "Entering poke. Hello!\n");
  char[8] *addressp;
  char *data;

  memcpy(&addressp, str_ptr, 8);
  memcpy(&data, str_ptr + 8, 1);

  copy_to_user(address, *data, 1);
  printk(KERN_INFO "Written data is: %s", &data);
  return 0;
}

static void __exit poke_exit(void) {
  printk(KERN_INFO "Leaving poke. Goodbye\n");
}

module_init(poke);
module_exit(poke_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("RL");
MODULE_DESCRIPTION("A driver that writes to an address");
