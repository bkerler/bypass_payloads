#include "../common/common.h"

char SOC_NAME[] = "mt6735";

void (*send_usb_response)(int, int, int) = (void*)0x4293;

int (*usbdl_put_dword)() = (void*)0x9513;
// addr, sz
int (*usbdl_put_data)() = (void*)0x95DB;
// addr, sz, flags (=0)
int (*usbdl_get_data)() = (void*)0x9555;

volatile char *SLA_PASSED=(volatile char *)0x102794;
volatile uint32_t *SLA_PASSED1=(volatile uint32_t *)0x102714;
volatile uint32_t *SLA_CHECK=(volatile uint32_t *)0x1026D4;

volatile uint32_t *uart_reg0 = (volatile uint32_t*)0x11002014;
volatile uint32_t *uart_reg1 = (volatile uint32_t*)0x11002000;