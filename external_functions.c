//////////////////////////////////////////////////////////////////////////////
/// Some external function definitions here, will be linked into one *.ko  ///
//////////////////////////////////////////////////////////////////////////////

#include <linux/module.h>

void some_init_fun(void)
{
    printk(KERN_INFO "DKMS Test Module - Loaded - from ext fun.\n");
}

void some_exit_fun(void)
{
    printk(KERN_INFO "Cleaning up after dkms test module - from ext fun.\n");
}
