#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#include "external_functions.h"

#define  DKMS_TEST_VER "1.0"

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("A Simple dkms test module");

static int __init dkms_test_init(void)
{
    some_init_fun();
    return 0;
}

static void __exit dkms_test_cleanup(void)
{
    some_exit_fun();
}

module_init(dkms_test_init);
module_exit(dkms_test_cleanup);
MODULE_VERSION(DKMS_TEST_VER);
