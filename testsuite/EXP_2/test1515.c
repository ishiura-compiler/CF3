#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x178 = 143477;
uint64_t x313 = UINT64_MAX;
uint16_t x316 = 0U;
uint32_t x503 = UINT32_MAX;
int16_t x507 = 0;
static int64_t x513 = 24828LL;
volatile int64_t t10 = 82070979171LL;
uint8_t x531 = UINT8_MAX;
int32_t x713 = INT32_MAX;
static int32_t x715 = -1;
volatile int64_t x716 = 5LL;
uint16_t x721 = UINT16_MAX;
uint8_t x724 = 21U;
uint8_t x790 = 2U;
volatile uint16_t x821 = 1686U;
int16_t x822 = INT16_MIN;
int8_t x835 = INT8_MIN;
uint16_t x841 = 611U;
volatile int32_t t20 = -133396;
uint16_t x1074 = UINT16_MAX;
static int16_t x1090 = -1;
uint8_t x1091 = 27U;
static uint16_t x1092 = 28U;
volatile int32_t t22 = 104191545;
uint16_t x1397 = 494U;
static volatile int8_t x1531 = INT8_MIN;
int64_t x1690 = -11LL;
uint64_t x1691 = 116645532LLU;
static volatile uint8_t x1712 = 6U;
volatile int32_t t29 = -244788;
int16_t x1858 = -1;
int32_t x1859 = INT32_MAX;
static uint32_t x1895 = UINT32_MAX;
int32_t t35 = -305520650;
int64_t x2047 = INT64_MIN;
int16_t x2070 = -1;
volatile int32_t t38 = -14;
uint8_t x2229 = UINT8_MAX;
static uint8_t x2260 = 0U;
uint32_t t43 = 0U;
volatile uint16_t x2298 = UINT16_MAX;
int8_t x2368 = 7;
volatile uint32_t t46 = 198299082U;
static volatile uint64_t x2386 = 1964LLU;
int32_t x2434 = INT32_MAX;
int16_t x2435 = INT16_MIN;
volatile uint32_t t48 = 328U;
static volatile uint8_t x2464 = 10U;
int16_t x2499 = -104;
static uint16_t x2500 = 3U;
int8_t x2552 = 3;
int16_t x2561 = INT16_MAX;
int16_t x2562 = INT16_MIN;
int64_t x2590 = INT64_MIN;
uint8_t x2666 = UINT8_MAX;
int32_t x2670 = INT32_MIN;
int32_t t56 = 50211561;
int8_t x2733 = INT8_MAX;
int32_t t58 = -125965625;
uint64_t t60 = 362589468LLU;
static uint8_t x2986 = 122U;
int8_t x3014 = -1;
uint8_t x3099 = UINT8_MAX;
int32_t x3100 = 1;
static uint8_t x3364 = 1U;
uint64_t x3490 = 2LLU;
int16_t x3554 = 0;
uint32_t t76 = UINT32_MAX;
int64_t x3791 = INT64_MIN;
int64_t x3823 = INT64_MIN;
uint8_t x3824 = 7U;
volatile int32_t t78 = 1;
static int32_t x3869 = INT32_MAX;
uint8_t x3881 = 32U;
volatile uint8_t x3884 = 1U;
volatile uint16_t x3923 = 689U;
static uint16_t x3962 = UINT16_MAX;
uint8_t x3981 = UINT8_MAX;
uint8_t x4011 = 60U;
volatile uint32_t t87 = 182U;
volatile int8_t x4163 = -9;
uint8_t x4205 = 0U;
int16_t x4207 = INT16_MIN;
uint32_t x4277 = 1215U;
int64_t x4279 = -1LL;
volatile uint32_t t90 = 359401499U;
int64_t x4287 = INT64_MIN;
int8_t x4305 = 20;
uint64_t x4382 = UINT64_MAX;
int64_t x4383 = INT64_MIN;
int8_t x4444 = 3;
int32_t x4514 = INT32_MAX;
volatile uint64_t t96 = 2138312805677128750LLU;
int32_t t98 = -1149;
uint16_t x4664 = 21U;


void f0(void) {
	uint64_t x69 = 2551879377029056340LLU;
	uint64_t x70 = 3406158828LLU;
	int32_t x71 = 359086;
	uint8_t x72 = 1U;
	volatile uint64_t t0 = 437823706185922899LLU;

	t0 = ((x69^(x70<x71))>>x72);

	if (t0 != 1275939688514528170LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x117 = 965U;
	int64_t x118 = -1LL;
	static int16_t x119 = -1;
	uint8_t x120 = 7U;
	int32_t t1 = -789809;

	t1 = ((x117^(x118<x119))>>x120);

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x177 = UINT32_MAX;
	int8_t x179 = INT8_MIN;
	uint8_t x180 = 0U;
	uint32_t t2 = UINT32_MAX;

	t2 = ((x177^(x178<x179))>>x180);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x314 = INT8_MIN;
	static int8_t x315 = 1;
	static uint64_t t3 = 2668071660253503247LLU;

	t3 = ((x313^(x314<x315))>>x316);

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x349 = 0;
	int8_t x350 = INT8_MIN;
	static volatile int8_t x351 = INT8_MIN;
	int8_t x352 = 0;
	int32_t t4 = -28348250;

	t4 = ((x349^(x350<x351))>>x352);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x393 = 61898;
	int16_t x394 = 3;
	int32_t x395 = -1;
	uint16_t x396 = 0U;
	int32_t t5 = 2;

	t5 = ((x393^(x394<x395))>>x396);

	if (t5 != 61898) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x457 = 2875U;
	int32_t x458 = INT32_MAX;
	int8_t x459 = INT8_MIN;
	static volatile uint16_t x460 = 1U;
	volatile int32_t t6 = 5;

	t6 = ((x457^(x458<x459))>>x460);

	if (t6 != 1437) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x485 = 91U;
	int16_t x486 = INT16_MIN;
	int64_t x487 = -449954099129634LL;
	int32_t x488 = 8;
	int32_t t7 = -340787865;

	t7 = ((x485^(x486<x487))>>x488);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x501 = 403;
	int64_t x502 = INT64_MIN;
	int32_t x504 = 0;
	static int32_t t8 = 35944978;

	t8 = ((x501^(x502<x503))>>x504);

	if (t8 != 402) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x505 = INT8_MAX;
	int16_t x506 = INT16_MIN;
	volatile int16_t x508 = 21;
	volatile int32_t t9 = -19;

	t9 = ((x505^(x506<x507))>>x508);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x514 = INT16_MAX;
	int16_t x515 = -1;
	uint8_t x516 = 2U;

	t10 = ((x513^(x514<x515))>>x516);

	if (t10 != 6207LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x529 = 5U;
	int16_t x530 = 378;
	static int8_t x532 = 0;
	int32_t t11 = -1;

	t11 = ((x529^(x530<x531))>>x532);

	if (t11 != 5) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x537 = UINT32_MAX;
	int16_t x538 = INT16_MIN;
	int32_t x539 = INT32_MIN;
	volatile int32_t x540 = 1;
	static volatile uint32_t t12 = 18U;

	t12 = ((x537^(x538<x539))>>x540);

	if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x577 = 1062989U;
	int16_t x578 = -1;
	int32_t x579 = 0;
	uint32_t x580 = 1U;
	uint32_t t13 = 267005U;

	t13 = ((x577^(x578<x579))>>x580);

	if (t13 != 531494U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x714 = 207104715438048LLU;
	static int32_t t14 = 20302190;

	t14 = ((x713^(x714<x715))>>x716);

	if (t14 != 67108863) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x722 = -1LL;
	int32_t x723 = 483346227;
	volatile int32_t t15 = 3150722;

	t15 = ((x721^(x722<x723))>>x724);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x789 = 12389243U;
	static int8_t x791 = -30;
	static uint32_t x792 = 7U;
	volatile uint32_t t16 = 54636U;

	t16 = ((x789^(x790<x791))>>x792);

	if (t16 != 96790U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x823 = -1LL;
	static volatile uint8_t x824 = 0U;
	int32_t t17 = -676600270;

	t17 = ((x821^(x822<x823))>>x824);

	if (t17 != 1687) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x833 = 1U;
	int64_t x834 = INT64_MIN;
	volatile uint8_t x836 = 3U;
	int32_t t18 = 0;

	t18 = ((x833^(x834<x835))>>x836);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x842 = UINT16_MAX;
	static uint8_t x843 = 1U;
	static int16_t x844 = 0;
	static volatile int32_t t19 = -1;

	t19 = ((x841^(x842<x843))>>x844);

	if (t19 != 611) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x857 = INT32_MAX;
	int64_t x858 = INT64_MAX;
	static volatile uint64_t x859 = UINT64_MAX;
	static int16_t x860 = 0;

	t20 = ((x857^(x858<x859))>>x860);

	if (t20 != 2147483646) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x1073 = 6LL;
	int64_t x1075 = -1LL;
	uint16_t x1076 = 5U;
	volatile int64_t t21 = -21943396LL;

	t21 = ((x1073^(x1074<x1075))>>x1076);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x1089 = INT32_MAX;

	t22 = ((x1089^(x1090<x1091))>>x1092);

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1169 = 609075932U;
	static int16_t x1170 = -448;
	static int32_t x1171 = -1;
	static uint16_t x1172 = 3U;
	static volatile uint32_t t23 = 1U;

	t23 = ((x1169^(x1170<x1171))>>x1172);

	if (t23 != 76134491U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x1341 = UINT32_MAX;
	volatile uint8_t x1342 = UINT8_MAX;
	uint16_t x1343 = 7219U;
	uint8_t x1344 = 24U;
	volatile uint32_t t24 = 7320U;

	t24 = ((x1341^(x1342<x1343))>>x1344);

	if (t24 != 255U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1398 = 9;
	int32_t x1399 = INT32_MIN;
	uint32_t x1400 = 0U;
	int32_t t25 = -254235;

	t25 = ((x1397^(x1398<x1399))>>x1400);

	if (t25 != 494) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x1529 = UINT16_MAX;
	uint32_t x1530 = 5148777U;
	int32_t x1532 = 17;
	int32_t t26 = 0;

	t26 = ((x1529^(x1530<x1531))>>x1532);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1649 = INT16_MAX;
	volatile uint64_t x1650 = UINT64_MAX;
	uint8_t x1651 = UINT8_MAX;
	uint8_t x1652 = 7U;
	volatile int32_t t27 = -59807858;

	t27 = ((x1649^(x1650<x1651))>>x1652);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x1689 = 3548752;
	uint8_t x1692 = 1U;
	volatile int32_t t28 = 277244;

	t28 = ((x1689^(x1690<x1691))>>x1692);

	if (t28 != 1774376) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x1709 = UINT8_MAX;
	volatile int16_t x1710 = INT16_MIN;
	int8_t x1711 = -1;

	t29 = ((x1709^(x1710<x1711))>>x1712);

	if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x1757 = UINT64_MAX;
	int32_t x1758 = INT32_MIN;
	uint8_t x1759 = 15U;
	uint16_t x1760 = 7U;
	volatile uint64_t t30 = 573914684482828568LLU;

	t30 = ((x1757^(x1758<x1759))>>x1760);

	if (t30 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1813 = 20U;
	int16_t x1814 = INT16_MIN;
	uint32_t x1815 = 3285111U;
	volatile int16_t x1816 = 1;
	volatile int32_t t31 = 5497491;

	t31 = ((x1813^(x1814<x1815))>>x1816);

	if (t31 != 10) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1857 = UINT16_MAX;
	uint16_t x1860 = 22U;
	volatile int32_t t32 = 493111;

	t32 = ((x1857^(x1858<x1859))>>x1860);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1893 = 0;
	uint8_t x1894 = 0U;
	volatile int8_t x1896 = 0;
	int32_t t33 = 8959;

	t33 = ((x1893^(x1894<x1895))>>x1896);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1993 = UINT64_MAX;
	int8_t x1994 = -1;
	int32_t x1995 = INT32_MAX;
	int8_t x1996 = 26;
	static volatile uint64_t t34 = 6632429207575199LLU;

	t34 = ((x1993^(x1994<x1995))>>x1996);

	if (t34 != 274877906943LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x2009 = 14;
	int8_t x2010 = -1;
	int64_t x2011 = INT64_MIN;
	static uint16_t x2012 = 0U;

	t35 = ((x2009^(x2010<x2011))>>x2012);

	if (t35 != 14) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x2045 = 1501201787411887LLU;
	volatile int32_t x2046 = -4604;
	uint32_t x2048 = 14U;
	uint64_t t36 = 9461940635878905LLU;

	t36 = ((x2045^(x2046<x2047))>>x2048);

	if (t36 != 91626085657LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x2049 = INT64_MAX;
	volatile int64_t x2050 = -1LL;
	int32_t x2051 = -1;
	uint8_t x2052 = 13U;
	volatile int64_t t37 = 4368343473888651943LL;

	t37 = ((x2049^(x2050<x2051))>>x2052);

	if (t37 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x2069 = 13961;
	volatile int16_t x2071 = INT16_MAX;
	static volatile uint8_t x2072 = 6U;

	t38 = ((x2069^(x2070<x2071))>>x2072);

	if (t38 != 218) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x2117 = UINT32_MAX;
	int64_t x2118 = INT64_MIN;
	volatile int8_t x2119 = INT8_MAX;
	volatile uint8_t x2120 = 19U;
	uint32_t t39 = 105109U;

	t39 = ((x2117^(x2118<x2119))>>x2120);

	if (t39 != 8191U) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x2193 = INT32_MAX;
	uint8_t x2194 = UINT8_MAX;
	int32_t x2195 = INT32_MIN;
	int8_t x2196 = 2;
	volatile int32_t t40 = -285;

	t40 = ((x2193^(x2194<x2195))>>x2196);

	if (t40 != 536870911) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x2225 = UINT32_MAX;
	int8_t x2226 = INT8_MIN;
	static uint8_t x2227 = 3U;
	static volatile uint8_t x2228 = 22U;
	volatile uint32_t t41 = 0U;

	t41 = ((x2225^(x2226<x2227))>>x2228);

	if (t41 != 1023U) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x2230 = 8LL;
	static int64_t x2231 = INT64_MIN;
	volatile int8_t x2232 = 0;
	int32_t t42 = -111;

	t42 = ((x2229^(x2230<x2231))>>x2232);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2257 = 343352U;
	volatile int16_t x2258 = 3231;
	uint16_t x2259 = UINT16_MAX;

	t43 = ((x2257^(x2258<x2259))>>x2260);

	if (t43 != 343353U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x2297 = INT8_MAX;
	static uint32_t x2299 = 108438U;
	static uint32_t x2300 = 1U;
	volatile int32_t t44 = -8968;

	t44 = ((x2297^(x2298<x2299))>>x2300);

	if (t44 != 63) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2365 = 823U;
	int8_t x2366 = INT8_MIN;
	static volatile int16_t x2367 = INT16_MIN;
	volatile int32_t t45 = 517435;

	t45 = ((x2365^(x2366<x2367))>>x2368);

	if (t45 != 6) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x2377 = UINT32_MAX;
	int8_t x2378 = INT8_MAX;
	uint64_t x2379 = UINT64_MAX;
	volatile uint16_t x2380 = 5U;

	t46 = ((x2377^(x2378<x2379))>>x2380);

	if (t46 != 134217727U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x2385 = 1025747LLU;
	uint8_t x2387 = 57U;
	volatile int8_t x2388 = 46;
	uint64_t t47 = 10296464332851813LLU;

	t47 = ((x2385^(x2386<x2387))>>x2388);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x2433 = 328495U;
	volatile int16_t x2436 = 14;

	t48 = ((x2433^(x2434<x2435))>>x2436);

	if (t48 != 20U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2461 = INT16_MAX;
	int16_t x2462 = 15011;
	int8_t x2463 = INT8_MIN;
	int32_t t49 = -9930658;

	t49 = ((x2461^(x2462<x2463))>>x2464);

	if (t49 != 31) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x2497 = 11LL;
	int16_t x2498 = 5633;
	int64_t t50 = 1572766729118613LL;

	t50 = ((x2497^(x2498<x2499))>>x2500);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x2525 = 121U;
	int32_t x2526 = -292628502;
	uint32_t x2527 = 1U;
	uint64_t x2528 = 7LLU;
	volatile int32_t t51 = 0;

	t51 = ((x2525^(x2526<x2527))>>x2528);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x2549 = INT8_MAX;
	int32_t x2550 = INT32_MIN;
	static int64_t x2551 = INT64_MIN;
	static int32_t t52 = -2051510;

	t52 = ((x2549^(x2550<x2551))>>x2552);

	if (t52 != 15) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x2563 = INT32_MAX;
	int16_t x2564 = 1;
	int32_t t53 = 0;

	t53 = ((x2561^(x2562<x2563))>>x2564);

	if (t53 != 16383) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x2589 = UINT64_MAX;
	uint16_t x2591 = 95U;
	volatile uint8_t x2592 = 30U;
	static uint64_t t54 = 1682043675954LLU;

	t54 = ((x2589^(x2590<x2591))>>x2592);

	if (t54 != 17179869183LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x2665 = 2448993650LLU;
	uint32_t x2667 = 358966U;
	uint16_t x2668 = 1U;
	volatile uint64_t t55 = 1LLU;

	t55 = ((x2665^(x2666<x2667))>>x2668);

	if (t55 != 1224496825LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x2669 = 1;
	int8_t x2671 = INT8_MIN;
	uint8_t x2672 = 0U;

	t56 = ((x2669^(x2670<x2671))>>x2672);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x2734 = 0;
	int8_t x2735 = INT8_MIN;
	int8_t x2736 = 23;
	volatile int32_t t57 = 220858;

	t57 = ((x2733^(x2734<x2735))>>x2736);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x2829 = INT32_MAX;
	volatile uint8_t x2830 = 0U;
	uint64_t x2831 = 245579488717865LLU;
	volatile int16_t x2832 = 1;

	t58 = ((x2829^(x2830<x2831))>>x2832);

	if (t58 != 1073741823) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x2969 = 1543540241U;
	int16_t x2970 = INT16_MIN;
	volatile int16_t x2971 = INT16_MIN;
	int8_t x2972 = 4;
	static volatile uint32_t t59 = 3U;

	t59 = ((x2969^(x2970<x2971))>>x2972);

	if (t59 != 96471265U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x2973 = 6265595LLU;
	volatile int8_t x2974 = INT8_MAX;
	uint32_t x2975 = 196146200U;
	uint16_t x2976 = 1U;

	t60 = ((x2973^(x2974<x2975))>>x2976);

	if (t60 != 3132797LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x2985 = 3955967U;
	int64_t x2987 = 52883LL;
	static uint8_t x2988 = 6U;
	uint32_t t61 = 1426734776U;

	t61 = ((x2985^(x2986<x2987))>>x2988);

	if (t61 != 61811U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x3013 = 7U;
	volatile int16_t x3015 = INT16_MIN;
	volatile int8_t x3016 = 11;
	uint32_t t62 = 61767U;

	t62 = ((x3013^(x3014<x3015))>>x3016);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x3017 = INT32_MAX;
	volatile int32_t x3018 = INT32_MIN;
	int32_t x3019 = -3031766;
	volatile uint32_t x3020 = 2U;
	static int32_t t63 = -118097;

	t63 = ((x3017^(x3018<x3019))>>x3020);

	if (t63 != 536870911) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3057 = UINT8_MAX;
	int64_t x3058 = INT64_MAX;
	int64_t x3059 = -26756095LL;
	volatile uint16_t x3060 = 5U;
	volatile int32_t t64 = -5425;

	t64 = ((x3057^(x3058<x3059))>>x3060);

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x3065 = 0U;
	int64_t x3066 = INT64_MIN;
	uint32_t x3067 = 343U;
	static volatile uint16_t x3068 = 0U;
	volatile int32_t t65 = -510;

	t65 = ((x3065^(x3066<x3067))>>x3068);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3077 = UINT32_MAX;
	volatile uint8_t x3078 = 77U;
	static uint16_t x3079 = 409U;
	uint8_t x3080 = 0U;
	volatile uint32_t t66 = 318594U;

	t66 = ((x3077^(x3078<x3079))>>x3080);

	if (t66 != 4294967294U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x3097 = INT8_MAX;
	uint64_t x3098 = 703623486LLU;
	volatile int32_t t67 = -1030;

	t67 = ((x3097^(x3098<x3099))>>x3100);

	if (t67 != 63) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x3189 = UINT16_MAX;
	uint32_t x3190 = 1535372526U;
	volatile int32_t x3191 = INT32_MIN;
	static uint32_t x3192 = 29U;
	volatile int32_t t68 = 1336;

	t68 = ((x3189^(x3190<x3191))>>x3192);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x3273 = 568U;
	uint64_t x3274 = 10064168382464892LLU;
	int8_t x3275 = INT8_MIN;
	int8_t x3276 = 0;
	static volatile uint32_t t69 = 781U;

	t69 = ((x3273^(x3274<x3275))>>x3276);

	if (t69 != 569U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x3345 = UINT16_MAX;
	int64_t x3346 = INT64_MIN;
	uint32_t x3347 = 1940U;
	uint8_t x3348 = 1U;
	static int32_t t70 = 21718622;

	t70 = ((x3345^(x3346<x3347))>>x3348);

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x3361 = 0;
	volatile int16_t x3362 = INT16_MIN;
	int8_t x3363 = 7;
	int32_t t71 = -200611;

	t71 = ((x3361^(x3362<x3363))>>x3364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x3489 = 23451U;
	int8_t x3491 = INT8_MIN;
	uint8_t x3492 = 13U;
	static volatile int32_t t72 = 30739;

	t72 = ((x3489^(x3490<x3491))>>x3492);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3525 = 7;
	uint64_t x3526 = 5LLU;
	uint8_t x3527 = 26U;
	uint8_t x3528 = 3U;
	static int32_t t73 = 0;

	t73 = ((x3525^(x3526<x3527))>>x3528);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x3529 = INT64_MAX;
	volatile uint64_t x3530 = 0LLU;
	uint8_t x3531 = 11U;
	int8_t x3532 = 2;
	static int64_t t74 = 4049LL;

	t74 = ((x3529^(x3530<x3531))>>x3532);

	if (t74 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x3553 = 84173LLU;
	static uint64_t x3555 = 415061326LLU;
	static int64_t x3556 = 7LL;
	static uint64_t t75 = 540469LLU;

	t75 = ((x3553^(x3554<x3555))>>x3556);

	if (t75 != 657LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x3717 = UINT32_MAX;
	static int32_t x3718 = -1;
	int32_t x3719 = INT32_MIN;
	int64_t x3720 = 0LL;

	t76 = ((x3717^(x3718<x3719))>>x3720);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x3789 = 54U;
	int64_t x3790 = INT64_MIN;
	uint16_t x3792 = 0U;
	static volatile int32_t t77 = -8312;

	t77 = ((x3789^(x3790<x3791))>>x3792);

	if (t77 != 54) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x3821 = INT32_MAX;
	static volatile uint8_t x3822 = 93U;

	t78 = ((x3821^(x3822<x3823))>>x3824);

	if (t78 != 16777215) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x3870 = -27391299376825LL;
	uint16_t x3871 = 8992U;
	volatile int32_t x3872 = 0;
	volatile int32_t t79 = 857;

	t79 = ((x3869^(x3870<x3871))>>x3872);

	if (t79 != 2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x3882 = 1;
	int8_t x3883 = -1;
	int32_t t80 = -498511;

	t80 = ((x3881^(x3882<x3883))>>x3884);

	if (t80 != 16) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x3921 = UINT64_MAX;
	uint32_t x3922 = 34U;
	volatile int16_t x3924 = 17;
	static volatile uint64_t t81 = 2372733457LLU;

	t81 = ((x3921^(x3922<x3923))>>x3924);

	if (t81 != 140737488355327LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x3961 = 2660LLU;
	int64_t x3963 = INT64_MAX;
	uint8_t x3964 = 2U;
	static volatile uint64_t t82 = 877183025LLU;

	t82 = ((x3961^(x3962<x3963))>>x3964);

	if (t82 != 665LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x3982 = 0U;
	int8_t x3983 = INT8_MIN;
	uint8_t x3984 = 2U;
	static volatile int32_t t83 = 16865856;

	t83 = ((x3981^(x3982<x3983))>>x3984);

	if (t83 != 63) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x4009 = 61977034U;
	int64_t x4010 = INT64_MIN;
	static uint64_t x4012 = 0LLU;
	uint32_t t84 = 72022U;

	t84 = ((x4009^(x4010<x4011))>>x4012);

	if (t84 != 61977035U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4085 = INT8_MAX;
	int16_t x4086 = INT16_MIN;
	static int8_t x4087 = INT8_MAX;
	uint16_t x4088 = 13U;
	int32_t t85 = -3999451;

	t85 = ((x4085^(x4086<x4087))>>x4088);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x4129 = INT64_MAX;
	int16_t x4130 = INT16_MAX;
	static int64_t x4131 = -1LL;
	uint8_t x4132 = 2U;
	int64_t t86 = 1196LL;

	t86 = ((x4129^(x4130<x4131))>>x4132);

	if (t86 != 2305843009213693951LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x4133 = UINT32_MAX;
	uint8_t x4134 = 2U;
	int32_t x4135 = -1;
	uint64_t x4136 = 1LLU;

	t87 = ((x4133^(x4134<x4135))>>x4136);

	if (t87 != 2147483647U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x4161 = UINT32_MAX;
	static int32_t x4162 = INT32_MAX;
	static uint8_t x4164 = 3U;
	volatile uint32_t t88 = 4474215U;

	t88 = ((x4161^(x4162<x4163))>>x4164);

	if (t88 != 536870911U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x4206 = -8;
	volatile uint8_t x4208 = 11U;
	static volatile int32_t t89 = -144;

	t89 = ((x4205^(x4206<x4207))>>x4208);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4278 = 968;
	int64_t x4280 = 17LL;

	t90 = ((x4277^(x4278<x4279))>>x4280);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4285 = UINT64_MAX;
	static int16_t x4286 = -1571;
	volatile uint32_t x4288 = 32U;
	static uint64_t t91 = 5LLU;

	t91 = ((x4285^(x4286<x4287))>>x4288);

	if (t91 != 4294967295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x4306 = 0;
	static volatile int8_t x4307 = -1;
	int32_t x4308 = 6;
	volatile int32_t t92 = -14466563;

	t92 = ((x4305^(x4306<x4307))>>x4308);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4333 = INT8_MAX;
	volatile uint64_t x4334 = 101LLU;
	static volatile int64_t x4335 = -1LL;
	uint8_t x4336 = 0U;
	volatile int32_t t93 = -909483;

	t93 = ((x4333^(x4334<x4335))>>x4336);

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x4381 = 1222U;
	uint8_t x4384 = 15U;
	static volatile int32_t t94 = 7786;

	t94 = ((x4381^(x4382<x4383))>>x4384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x4441 = INT64_MAX;
	int32_t x4442 = -1;
	int16_t x4443 = INT16_MIN;
	volatile int64_t t95 = 449580857066LL;

	t95 = ((x4441^(x4442<x4443))>>x4444);

	if (t95 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4513 = 58961LLU;
	int32_t x4515 = INT32_MIN;
	int64_t x4516 = 3LL;

	t96 = ((x4513^(x4514<x4515))>>x4516);

	if (t96 != 7370LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x4541 = UINT32_MAX;
	static int64_t x4542 = INT64_MIN;
	static int16_t x4543 = -12921;
	int64_t x4544 = 0LL;
	volatile uint32_t t97 = 159608U;

	t97 = ((x4541^(x4542<x4543))>>x4544);

	if (t97 != 4294967294U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x4641 = UINT16_MAX;
	int8_t x4642 = 0;
	static volatile int32_t x4643 = INT32_MAX;
	uint8_t x4644 = 1U;

	t98 = ((x4641^(x4642<x4643))>>x4644);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x4661 = 20U;
	uint64_t x4662 = 1364508LLU;
	int32_t x4663 = -1;
	volatile int32_t t99 = 6689608;

	t99 = ((x4661^(x4662<x4663))>>x4664);

	if (t99 != 0) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

