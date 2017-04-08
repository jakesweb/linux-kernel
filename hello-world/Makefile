#
# Makefile for hello world Module
#
# Author: Jacob Colborn <jacob.colborn@hush.com>
# Credit: https://www.kernel.org/doc/Documentation/kbuild/modules.txt

ifneq ($(KERNELRELEASE),)
	#kbuild part of makefile
	obj-m := hello_world.o
else
	#normal makefile
	KDIR ?= /lib/modules/`uname -r`/build
	
default:
	$(MAKE) -C $(KDIR) M=$$PWD

endif

CFLAGS_hello_world.o := -DDEBUG
