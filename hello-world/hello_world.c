/*
 * hello_world.c - "Hello World" Module for Eudyptula Challenge
 *
 * Original author: Jacob Colborn <jacob.colborn@hush.com>
 *
 * 03-08-17: Jacob Colborn <jacob.colborn@hush.com>
 *	Changed printk(KERN_INFO ... for pr_info to satisfy
 *	the checkpatch.pl script
 *
 * 03-20-17: Jacob Colborn <jcolborn@dropdeadgames.org>
 *	Changed the pr_info to pr_debug to output to the
 *	kernel debug instead of kernel info
 */

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

/*
 * Print Hello World to the kernel
 */
static int __init helloWorld_init(void)
{
	pr_debug("Hello World! The first module!\n");
	return 0;
}

/*
 * Print Goodbye World to the kernel
 */
static void __exit helloWorld_exit(void)
{
	pr_debug("Goodbye World!\n");
}

module_init(helloWorld_init);
module_exit(helloWorld_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jacob Colborn");
MODULE_DESCRIPTION("A Hello World module");
MODULE_VERSION("0.2");
