obj-m += dkms_test_mod.o
dkms_test_mod-objs := dkms_test.o external_functions.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
