#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t t0 = 545004U;
int64_t x162 = -1LL;
static int16_t x217 = 0;
int16_t x242 = -1;
int16_t x302 = INT16_MAX;
volatile int64_t t4 = 867780LL;
int8_t x305 = INT8_MAX;
static uint64_t x421 = UINT64_MAX;
uint32_t x422 = UINT32_MAX;
uint32_t x423 = UINT32_MAX;
int32_t x441 = INT32_MAX;
int32_t x443 = INT32_MIN;
uint16_t x444 = 0U;
volatile int32_t t9 = -62698094;
static int32_t x635 = 102915405;
static int16_t x679 = -1;
int64_t x680 = INT64_MAX;
volatile int32_t t15 = -890921;
volatile int32_t x978 = 108404;
static volatile int64_t t16 = INT64_MAX;
uint32_t x1078 = UINT32_MAX;
static int8_t x1467 = -1;
volatile int32_t t21 = -503;
volatile int32_t x1497 = INT32_MAX;
int32_t t22 = INT32_MAX;
uint32_t x1563 = 856242U;
static uint8_t x1565 = UINT8_MAX;
int8_t x1568 = -11;
volatile int32_t t24 = 797;
uint64_t x1602 = 287003983405199951LLU;
int32_t t26 = -21600816;
uint16_t x1748 = 0U;
uint32_t t29 = UINT32_MAX;
static uint16_t x1773 = 2081U;
int64_t x1834 = 2137LL;
int64_t x1930 = INT64_MAX;
volatile int32_t t34 = -7727127;
int64_t x2098 = INT64_MAX;
int16_t x2509 = INT16_MAX;
int64_t x2608 = INT64_MIN;
static uint64_t x2634 = UINT64_MAX;
uint64_t t42 = 53543661410123162LLU;
int16_t x2645 = 23;
static int32_t t43 = -1;
int8_t x2829 = 1;
static int64_t x2831 = INT64_MIN;
static int8_t x3023 = -1;
int16_t x3188 = 6027;
volatile uint32_t x3215 = UINT32_MAX;
int16_t x3299 = INT16_MIN;
int16_t x3431 = -1;
static uint16_t x3601 = 25U;
int32_t x3602 = INT32_MAX;
uint16_t x3705 = 11276U;
int16_t x3719 = -1;
int16_t x3751 = -1;
int64_t x3752 = INT64_MIN;
int8_t x3836 = INT8_MIN;
volatile int32_t t62 = INT32_MAX;
int64_t x4135 = -1LL;
int16_t x4250 = -1;
uint8_t x4269 = 97U;
uint32_t x4271 = 35378U;
int64_t x4277 = INT64_MAX;
int16_t x4438 = 4849;
uint64_t t67 = UINT64_MAX;
uint16_t x4556 = 320U;
int32_t x4790 = -1;
volatile int8_t x4846 = INT8_MIN;
static int16_t x4848 = 0;
static int32_t t72 = INT32_MAX;
uint8_t x4903 = 5U;
static uint16_t x4939 = UINT16_MAX;
int32_t x4940 = INT32_MIN;
volatile int32_t t75 = 32767;
volatile uint32_t x4983 = 18617U;
int8_t x5200 = 0;
static int32_t t77 = 0;
volatile int8_t x5271 = INT8_MIN;
uint64_t x5272 = 168734LLU;


void f0(void) {
	uint32_t x73 = 271U;
	volatile uint32_t x74 = UINT32_MAX;
	int32_t x75 = -1;
	static volatile uint32_t x76 = UINT32_MAX;

	t0 = (x73>>((x74-x75)*x76));

	if (t0 != 271U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x161 = 867359191;
	int32_t x163 = -1;
	uint16_t x164 = 1U;
	volatile int32_t t1 = 3266;

	t1 = (x161>>((x162-x163)*x164));

	if (t1 != 867359191) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x218 = -1;
	volatile int16_t x219 = -1;
	static int16_t x220 = INT16_MIN;
	int32_t t2 = 907211;

	t2 = (x217>>((x218-x219)*x220));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x241 = 38U;
	volatile int64_t x243 = -1LL;
	static int16_t x244 = 3524;
	volatile int32_t t3 = 1;

	t3 = (x241>>((x242-x243)*x244));

	if (t3 != 38) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x301 = 165422LL;
	volatile int16_t x303 = INT16_MAX;
	static int32_t x304 = INT32_MAX;

	t4 = (x301>>((x302-x303)*x304));

	if (t4 != 165422LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x306 = INT64_MIN;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MAX;
	volatile int32_t t5 = -1844;

	t5 = (x305>>((x306-x307)*x308));

	if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x361 = 2;
	static int16_t x362 = 85;
	uint64_t x363 = UINT64_MAX;
	uint8_t x364 = 0U;
	int32_t t6 = 53;

	t6 = (x361>>((x362-x363)*x364));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x424 = 2481157250182330LL;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = (x421>>((x422-x423)*x424));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x442 = 615330809340LLU;
	volatile int32_t t8 = INT32_MAX;

	t8 = (x441>>((x442-x443)*x444));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x473 = 117U;
	static volatile int8_t x474 = INT8_MIN;
	int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MAX;

	t9 = (x473>>((x474-x475)*x476));

	if (t9 != 117) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x501 = UINT64_MAX;
	uint64_t x502 = UINT64_MAX;
	static uint64_t x503 = UINT64_MAX;
	int32_t x504 = 15;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (x501>>((x502-x503)*x504));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x521 = 1;
	int8_t x522 = 4;
	uint32_t x523 = UINT32_MAX;
	uint32_t x524 = 1U;
	volatile int32_t t11 = -4044;

	t11 = (x521>>((x522-x523)*x524));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x613 = 7228U;
	volatile int8_t x614 = -1;
	int8_t x615 = -1;
	int32_t x616 = INT32_MAX;
	static volatile uint32_t t12 = 84298U;

	t12 = (x613>>((x614-x615)*x616));

	if (t12 != 7228U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x633 = 436883974U;
	int64_t x634 = INT64_MAX;
	uint32_t x636 = 0U;
	volatile uint32_t t13 = 681889926U;

	t13 = (x633>>((x634-x635)*x636));

	if (t13 != 436883974U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x677 = 591;
	static int8_t x678 = -1;
	int32_t t14 = 26224312;

	t14 = (x677>>((x678-x679)*x680));

	if (t14 != 591) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x729 = 16314U;
	static int8_t x730 = -1;
	static int16_t x731 = -1;
	int8_t x732 = INT8_MIN;

	t15 = (x729>>((x730-x731)*x732));

	if (t15 != 16314) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x977 = INT64_MAX;
	static uint64_t x979 = 2LLU;
	volatile int64_t x980 = INT64_MIN;

	t16 = (x977>>((x978-x979)*x980));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1077 = 79551752397022902LLU;
	int8_t x1079 = -1;
	static volatile int32_t x1080 = INT32_MAX;
	volatile uint64_t t17 = 447295508165341LLU;

	t17 = (x1077>>((x1078-x1079)*x1080));

	if (t17 != 79551752397022902LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x1245 = 23LL;
	static uint32_t x1246 = UINT32_MAX;
	int8_t x1247 = 1;
	int16_t x1248 = -1;
	volatile int64_t t18 = 11LL;

	t18 = (x1245>>((x1246-x1247)*x1248));

	if (t18 != 5LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x1337 = UINT16_MAX;
	volatile uint64_t x1338 = UINT64_MAX;
	int32_t x1339 = INT32_MAX;
	int64_t x1340 = INT64_MIN;
	volatile int32_t t19 = 451;

	t19 = (x1337>>((x1338-x1339)*x1340));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x1425 = 39967548U;
	int16_t x1426 = -29;
	int8_t x1427 = 1;
	int8_t x1428 = 0;
	uint32_t t20 = 25986U;

	t20 = (x1425>>((x1426-x1427)*x1428));

	if (t20 != 39967548U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x1465 = 21045178;
	int64_t x1466 = INT64_MIN;
	uint8_t x1468 = 0U;

	t21 = (x1465>>((x1466-x1467)*x1468));

	if (t21 != 21045178) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x1498 = 0;
	static int8_t x1499 = 0;
	int32_t x1500 = INT32_MIN;

	t22 = (x1497>>((x1498-x1499)*x1500));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x1561 = 5U;
	static uint8_t x1562 = 2U;
	int8_t x1564 = 0;
	int32_t t23 = 65097;

	t23 = (x1561>>((x1562-x1563)*x1564));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1566 = UINT16_MAX;
	uint16_t x1567 = UINT16_MAX;

	t24 = (x1565>>((x1566-x1567)*x1568));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x1601 = 1799586LL;
	int32_t x1603 = -1;
	static int64_t x1604 = INT64_MIN;
	volatile int64_t t25 = -404657243498LL;

	t25 = (x1601>>((x1602-x1603)*x1604));

	if (t25 != 1799586LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1657 = INT8_MAX;
	int32_t x1658 = INT32_MAX;
	static int32_t x1659 = INT32_MAX;
	static int32_t x1660 = -1;

	t26 = (x1657>>((x1658-x1659)*x1660));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x1669 = 4393310538945LL;
	int16_t x1670 = -1;
	int32_t x1671 = -1;
	volatile int8_t x1672 = INT8_MIN;
	static volatile int64_t t27 = 5114646LL;

	t27 = (x1669>>((x1670-x1671)*x1672));

	if (t27 != 4393310538945LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x1725 = INT8_MAX;
	static int16_t x1726 = INT16_MIN;
	int16_t x1727 = INT16_MIN;
	int8_t x1728 = 27;
	int32_t t28 = 633465802;

	t28 = (x1725>>((x1726-x1727)*x1728));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x1745 = UINT32_MAX;
	volatile uint16_t x1746 = UINT16_MAX;
	static uint16_t x1747 = 32454U;

	t29 = (x1745>>((x1746-x1747)*x1748));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x1774 = 5;
	uint16_t x1775 = 28107U;
	int16_t x1776 = 0;
	static int32_t t30 = -79717;

	t30 = (x1773>>((x1774-x1775)*x1776));

	if (t30 != 2081) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x1833 = INT64_MAX;
	int64_t x1835 = -60821264797994LL;
	uint8_t x1836 = 0U;
	volatile int64_t t31 = INT64_MAX;

	t31 = (x1833>>((x1834-x1835)*x1836));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1865 = UINT64_MAX;
	volatile int8_t x1866 = INT8_MIN;
	int8_t x1867 = INT8_MIN;
	int16_t x1868 = INT16_MIN;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x1865>>((x1866-x1867)*x1868));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1929 = 2640U;
	uint64_t x1931 = UINT64_MAX;
	static volatile int32_t x1932 = INT32_MIN;
	int32_t t33 = 75172335;

	t33 = (x1929>>((x1930-x1931)*x1932));

	if (t33 != 2640) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x2001 = 27052;
	int8_t x2002 = -1;
	uint32_t x2003 = 0U;
	uint32_t x2004 = UINT32_MAX;

	t34 = (x2001>>((x2002-x2003)*x2004));

	if (t34 != 13526) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x2097 = 29289137;
	int64_t x2099 = INT64_MAX;
	static volatile int64_t x2100 = INT64_MIN;
	static int32_t t35 = 1913069;

	t35 = (x2097>>((x2098-x2099)*x2100));

	if (t35 != 29289137) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x2301 = 1LL;
	int64_t x2302 = -1LL;
	int8_t x2303 = -1;
	int16_t x2304 = 2;
	volatile int64_t t36 = -260446621868971LL;

	t36 = (x2301>>((x2302-x2303)*x2304));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2441 = 687U;
	int16_t x2442 = 0;
	uint8_t x2443 = 0U;
	int32_t x2444 = -1;
	int32_t t37 = -1;

	t37 = (x2441>>((x2442-x2443)*x2444));

	if (t37 != 687) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x2510 = INT64_MIN;
	int64_t x2511 = INT64_MIN;
	volatile int64_t x2512 = INT64_MAX;
	volatile int32_t t38 = 23089;

	t38 = (x2509>>((x2510-x2511)*x2512));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x2589 = INT64_MAX;
	int8_t x2590 = -1;
	int64_t x2591 = -1LL;
	int64_t x2592 = -1LL;
	int64_t t39 = INT64_MAX;

	t39 = (x2589>>((x2590-x2591)*x2592));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x2593 = INT16_MAX;
	int64_t x2594 = INT64_MAX;
	uint8_t x2595 = 0U;
	static int8_t x2596 = 0;
	int32_t t40 = 19;

	t40 = (x2593>>((x2594-x2595)*x2596));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x2605 = 0U;
	uint64_t x2606 = UINT64_MAX;
	int32_t x2607 = -1;
	volatile uint32_t t41 = 768004942U;

	t41 = (x2605>>((x2606-x2607)*x2608));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x2633 = 10197193196LLU;
	int32_t x2635 = INT32_MIN;
	uint8_t x2636 = 0U;

	t42 = (x2633>>((x2634-x2635)*x2636));

	if (t42 != 10197193196LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x2646 = -1;
	uint8_t x2647 = 1U;
	int8_t x2648 = -7;

	t43 = (x2645>>((x2646-x2647)*x2648));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2725 = UINT8_MAX;
	static int32_t x2726 = -1;
	volatile int32_t x2727 = -1;
	uint32_t x2728 = 1691636U;
	static volatile int32_t t44 = -7;

	t44 = (x2725>>((x2726-x2727)*x2728));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x2830 = INT64_MIN;
	volatile int8_t x2832 = -1;
	int32_t t45 = 106;

	t45 = (x2829>>((x2830-x2831)*x2832));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x3013 = 1095701156LLU;
	static volatile int8_t x3014 = -1;
	static int64_t x3015 = -1LL;
	uint32_t x3016 = 457U;
	volatile uint64_t t46 = 10725413LLU;

	t46 = (x3013>>((x3014-x3015)*x3016));

	if (t46 != 1095701156LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x3021 = 124U;
	volatile int8_t x3022 = INT8_MIN;
	uint8_t x3024 = 0U;
	volatile int32_t t47 = -2;

	t47 = (x3021>>((x3022-x3023)*x3024));

	if (t47 != 124) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x3105 = 85U;
	uint32_t x3106 = UINT32_MAX;
	int32_t x3107 = -1;
	int16_t x3108 = INT16_MIN;
	int32_t t48 = 967875602;

	t48 = (x3105>>((x3106-x3107)*x3108));

	if (t48 != 85) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x3185 = 22891930537451547LLU;
	int16_t x3186 = INT16_MIN;
	volatile int16_t x3187 = INT16_MIN;
	uint64_t t49 = 77856180103920LLU;

	t49 = (x3185>>((x3186-x3187)*x3188));

	if (t49 != 22891930537451547LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x3213 = 803237LLU;
	int8_t x3214 = -1;
	volatile uint32_t x3216 = 1710858168U;
	uint64_t t50 = 63384LLU;

	t50 = (x3213>>((x3214-x3215)*x3216));

	if (t50 != 803237LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x3297 = INT8_MAX;
	int16_t x3298 = INT16_MIN;
	uint16_t x3300 = 1565U;
	int32_t t51 = -41415141;

	t51 = (x3297>>((x3298-x3299)*x3300));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x3329 = 231U;
	volatile int16_t x3330 = -1;
	int64_t x3331 = -1LL;
	int64_t x3332 = -2768512868704LL;
	uint32_t t52 = 2956U;

	t52 = (x3329>>((x3330-x3331)*x3332));

	if (t52 != 231U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x3333 = 1374958;
	volatile int8_t x3334 = INT8_MIN;
	int32_t x3335 = 2;
	int64_t x3336 = 0LL;
	static int32_t t53 = -13974;

	t53 = (x3333>>((x3334-x3335)*x3336));

	if (t53 != 1374958) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x3429 = UINT8_MAX;
	uint64_t x3430 = UINT64_MAX;
	volatile int64_t x3432 = -4LL;
	int32_t t54 = 315507601;

	t54 = (x3429>>((x3430-x3431)*x3432));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x3541 = 12;
	int8_t x3542 = -1;
	int32_t x3543 = -1;
	int8_t x3544 = INT8_MIN;
	volatile int32_t t55 = -11768910;

	t55 = (x3541>>((x3542-x3543)*x3544));

	if (t55 != 12) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x3603 = INT32_MAX;
	uint64_t x3604 = UINT64_MAX;
	static int32_t t56 = 17310;

	t56 = (x3601>>((x3602-x3603)*x3604));

	if (t56 != 25) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x3706 = INT32_MAX;
	uint32_t x3707 = UINT32_MAX;
	int8_t x3708 = INT8_MIN;
	int32_t t57 = -2;

	t57 = (x3705>>((x3706-x3707)*x3708));

	if (t57 != 11276) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x3717 = 1;
	int16_t x3718 = -1;
	uint16_t x3720 = UINT16_MAX;
	volatile int32_t t58 = 4944;

	t58 = (x3717>>((x3718-x3719)*x3720));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x3749 = 41;
	static volatile int16_t x3750 = -1;
	volatile int32_t t59 = -939905489;

	t59 = (x3749>>((x3750-x3751)*x3752));

	if (t59 != 41) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x3833 = 56803LLU;
	int8_t x3834 = -1;
	static int32_t x3835 = -1;
	volatile uint64_t t60 = 133317383LLU;

	t60 = (x3833>>((x3834-x3835)*x3836));

	if (t60 != 56803LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x3849 = INT64_MAX;
	int64_t x3850 = INT64_MIN;
	int64_t x3851 = INT64_MIN;
	volatile int64_t x3852 = INT64_MIN;
	int64_t t61 = INT64_MAX;

	t61 = (x3849>>((x3850-x3851)*x3852));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x4053 = INT32_MAX;
	int8_t x4054 = -1;
	int64_t x4055 = -1LL;
	uint32_t x4056 = UINT32_MAX;

	t62 = (x4053>>((x4054-x4055)*x4056));

	if (t62 != INT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x4133 = 8U;
	int16_t x4134 = -1;
	int32_t x4136 = -2312;
	int32_t t63 = 3044;

	t63 = (x4133>>((x4134-x4135)*x4136));

	if (t63 != 8) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x4249 = UINT8_MAX;
	static volatile int64_t x4251 = -1LL;
	uint8_t x4252 = 1U;
	static volatile int32_t t64 = 546;

	t64 = (x4249>>((x4250-x4251)*x4252));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x4270 = -34236876LL;
	int8_t x4272 = 0;
	int32_t t65 = 3903865;

	t65 = (x4269>>((x4270-x4271)*x4272));

	if (t65 != 97) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x4278 = INT32_MIN;
	static int32_t x4279 = INT32_MIN;
	volatile int8_t x4280 = -1;
	int64_t t66 = INT64_MAX;

	t66 = (x4277>>((x4278-x4279)*x4280));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x4437 = UINT64_MAX;
	int32_t x4439 = -1;
	int64_t x4440 = 0LL;

	t67 = (x4437>>((x4438-x4439)*x4440));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4553 = 2911077081057LLU;
	int8_t x4554 = -1;
	static int16_t x4555 = -1;
	volatile uint64_t t68 = 22648915728113LLU;

	t68 = (x4553>>((x4554-x4555)*x4556));

	if (t68 != 2911077081057LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x4581 = 7084324028LL;
	uint16_t x4582 = UINT16_MAX;
	volatile uint32_t x4583 = 80243341U;
	int32_t x4584 = INT32_MIN;
	static volatile int64_t t69 = 38517LL;

	t69 = (x4581>>((x4582-x4583)*x4584));

	if (t69 != 7084324028LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x4661 = 1U;
	int32_t x4662 = -1;
	static int64_t x4663 = -1LL;
	int16_t x4664 = 1;
	int32_t t70 = -2;

	t70 = (x4661>>((x4662-x4663)*x4664));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x4789 = INT32_MAX;
	volatile int8_t x4791 = -1;
	int32_t x4792 = -1;
	int32_t t71 = INT32_MAX;

	t71 = (x4789>>((x4790-x4791)*x4792));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x4845 = INT32_MAX;
	int16_t x4847 = 4;

	t72 = (x4845>>((x4846-x4847)*x4848));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x4901 = 2639834326789916558LLU;
	int16_t x4902 = 156;
	int16_t x4904 = 0;
	uint64_t t73 = 129184770LLU;

	t73 = (x4901>>((x4902-x4903)*x4904));

	if (t73 != 2639834326789916558LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x4921 = 8791094111960372LLU;
	int8_t x4922 = INT8_MIN;
	volatile int8_t x4923 = INT8_MIN;
	uint64_t x4924 = 28989573881LLU;
	uint64_t t74 = 210LLU;

	t74 = (x4921>>((x4922-x4923)*x4924));

	if (t74 != 8791094111960372LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x4937 = 31;
	volatile uint32_t x4938 = 64530799U;

	t75 = (x4937>>((x4938-x4939)*x4940));

	if (t75 != 31) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x4981 = 92U;
	int16_t x4982 = -1;
	int8_t x4984 = 0;
	static int32_t t76 = -8198;

	t76 = (x4981>>((x4982-x4983)*x4984));

	if (t76 != 92) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5197 = 53U;
	int64_t x5198 = 2292LL;
	int16_t x5199 = INT16_MIN;

	t77 = (x5197>>((x5198-x5199)*x5200));

	if (t77 != 53) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x5269 = 1U;
	static volatile int8_t x5270 = INT8_MIN;
	static int32_t t78 = -1187124;

	t78 = (x5269>>((x5270-x5271)*x5272));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x5421 = 675873776LL;
	volatile int16_t x5422 = -1;
	int8_t x5423 = -1;
	uint8_t x5424 = 116U;
	static volatile int64_t t79 = -26952LL;

	t79 = (x5421>>((x5422-x5423)*x5424));

	if (t79 != 675873776LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x5517 = 12018723U;
	uint64_t x5518 = 9559747553835LLU;
	int16_t x5519 = -60;
	uint8_t x5520 = 0U;
	volatile uint32_t t80 = 109U;

	t80 = (x5517>>((x5518-x5519)*x5520));

	if (t80 != 12018723U) { NG(); } else { ; }
	
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


    return 0;
}

