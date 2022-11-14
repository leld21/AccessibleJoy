#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x69cd84e, "hid_unregister_driver" },
	{ 0x7d95414a, "__hid_register_driver" },
	{ 0x5495392, "hid_debug" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xa061f9d2, "device_create_file" },
	{ 0xbbc7c123, "led_classdev_register_ext" },
	{ 0x754d539c, "strlen" },
	{ 0x98f7782, "hid_validate_values" },
	{ 0x122e1dbf, "input_ff_create_memless" },
	{ 0x27bd670a, "input_set_capability" },
	{ 0xf67d2037, "hid_hw_open" },
	{ 0x4deeba21, "power_supply_powers" },
	{ 0x8c85f61d, "power_supply_register" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x78b7dd6b, "input_mt_init_slots" },
	{ 0x764bb049, "device_remove_file" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x7bd0b5e5, "hid_hw_stop" },
	{ 0xffb7c514, "ida_free" },
	{ 0xfd103f05, "input_unregister_device" },
	{ 0x9814f0e7, "power_supply_unregister" },
	{ 0x923123fd, "hid_hw_close" },
	{ 0xcf6cc643, "__dynamic_dev_dbg" },
	{ 0xedb6c474, "__hid_request" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc8077e74, "input_free_device" },
	{ 0x5872033f, "input_alloc_absinfo" },
	{ 0x955efec7, "input_set_abs_params" },
	{ 0xe69867fe, "input_register_device" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa916b694, "strnlen" },
	{ 0x410d0bac, "input_allocate_device" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x9bec009e, "input_mt_report_slot_state" },
	{ 0xa6516ab5, "input_mt_sync_frame" },
	{ 0x6fc35596, "input_event" },
	{ 0x724c2e7d, "led_classdev_unregister" },
	{ 0xab5535af, "hid_hw_start" },
	{ 0x96cbeb36, "hid_open_report" },
	{ 0x9a6ca887, "devm_kmalloc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x7b22a974, "power_supply_get_drvdata" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xa495538e, "_dev_warn" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bd65ff4, "kmem_cache_alloc_trace" },
	{ 0xc83492ef, "kmalloc_caches" },
	{ 0xe2cf86c7, "_dev_info" },
	{ 0x72839fb4, "_dev_err" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,ff-memless");

MODULE_ALIAS("hid:b0003g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0005g*v0000054Cp0000042F");
MODULE_ALIAS("hid:b0003g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp000003D5");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000268");
MODULE_ALIAS("hid:b0003g*v0000054Cp0000024B");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000374");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000002");
MODULE_ALIAS("hid:b0003g*v0000054Cp00001000");
MODULE_ALIAS("hid:b0005g*v0000054Cp00000306");
MODULE_ALIAS("hid:b0005g*v0000046Dp00000306");
MODULE_ALIAS("hid:b0005g*v00000609p00000306");
MODULE_ALIAS("hid:b0003g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0005g*v0000054Cp000005C4");
MODULE_ALIAS("hid:b0003g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0005g*v0000054Cp000009CC");
MODULE_ALIAS("hid:b0003g*v0000054Cp00000BA0");
MODULE_ALIAS("hid:b0003g*v00001345p00003008");
MODULE_ALIAS("hid:b0005g*v00000609p00000368");
MODULE_ALIAS("hid:b0005g*v00000609p00000369");

MODULE_INFO(srcversion, "C8913EFC55C98FA6D397D63");
