#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x13 = 29U;
volatile int64_t x64 = INT64_MIN;
int64_t x78 = -1LL;
uint64_t x94 = 1LLU;
volatile int16_t x96 = 9595;
int8_t x121 = 43;
int32_t x122 = INT32_MAX;
int32_t x123 = INT32_MIN;
int8_t x151 = INT8_MIN;
int32_t x209 = 27199;
int16_t x210 = 1;
static int16_t x212 = INT16_MIN;
static int8_t x234 = INT8_MAX;
int8_t x248 = -1;
uint64_t x261 = UINT64_MAX;
uint16_t x262 = 16768U;
uint64_t x281 = UINT64_MAX;
static uint16_t x304 = UINT16_MAX;
volatile uint64_t t18 = UINT64_MAX;
int16_t x331 = 26;
volatile int32_t x369 = INT32_MAX;
static volatile int64_t x371 = INT64_MIN;
static uint8_t x396 = UINT8_MAX;
volatile int8_t x413 = 1;
uint32_t x425 = 16072532U;
volatile uint32_t t27 = 3U;
volatile uint32_t x457 = 51U;
uint8_t x461 = 0U;
int64_t x485 = 136071621667564LL;
uint32_t x486 = 245836U;
volatile int8_t x495 = -1;
int64_t x496 = 30562529543614LL;
volatile int64_t x532 = INT64_MAX;
uint64_t x550 = 6LLU;
int16_t x585 = INT16_MAX;
int64_t x607 = 10913LL;
uint32_t x639 = 2883189U;
volatile int32_t x642 = -24;
volatile int32_t x663 = INT32_MIN;
uint64_t x673 = UINT64_MAX;
int32_t x676 = -278;
int8_t x713 = 1;
int64_t x715 = INT64_MAX;
volatile int64_t t48 = 14LL;
static volatile uint32_t x741 = UINT32_MAX;
uint64_t x753 = 103277LLU;
static int64_t x755 = INT64_MAX;
int64_t t52 = 197735948LL;
static uint64_t x773 = UINT64_MAX;
volatile int8_t x790 = INT8_MAX;
uint8_t x793 = UINT8_MAX;
int8_t x800 = -1;
static volatile uint32_t t58 = UINT32_MAX;
volatile int8_t x834 = 7;
int32_t t59 = -137870;
static uint64_t x850 = UINT64_MAX;
uint64_t x873 = 1069998108238LLU;
uint16_t x874 = UINT16_MAX;
static int64_t x916 = -67960888LL;
static volatile int32_t t63 = -55647;
uint32_t x972 = UINT32_MAX;
uint8_t x989 = 0U;
static int8_t x992 = INT8_MIN;
int64_t x994 = -1LL;
uint32_t t69 = UINT32_MAX;
int64_t x1000 = -74988150LL;
volatile uint32_t x1027 = 994594111U;
int64_t x1029 = 2814381790828LL;
uint16_t x1070 = UINT16_MAX;
static uint64_t x1097 = UINT64_MAX;
uint64_t x1099 = UINT64_MAX;
int8_t x1107 = -2;
volatile int32_t t77 = 4935;
volatile int32_t t79 = -573619;
static int32_t x1176 = INT32_MAX;
volatile int32_t t80 = -122191;
static int8_t x1179 = -1;
uint32_t x1193 = 221587617U;
int8_t x1213 = INT8_MAX;
volatile int8_t x1215 = INT8_MIN;
uint32_t x1267 = 12287U;
int8_t x1301 = INT8_MAX;
uint32_t x1321 = UINT32_MAX;
static uint16_t x1330 = 6694U;
static int32_t t92 = 95311;
int32_t x1417 = INT32_MAX;
volatile int8_t x1418 = INT8_MAX;
volatile uint8_t x1419 = 4U;
volatile int32_t t93 = -25;
int32_t x1466 = -1;
static int16_t x1470 = INT16_MIN;


void f0(void) {
	static int64_t x14 = -1LL;
	int8_t x15 = -1;
	int16_t x16 = INT16_MAX;
	int32_t t0 = -5378;

	t0 = (x13>>(x14/(x15&x16)));

	if (t0 != 29) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x49 = 10U;
	uint16_t x50 = 76U;
	int16_t x51 = INT16_MAX;
	int8_t x52 = -23;
	int32_t t1 = 16230;

	t1 = (x49>>(x50/(x51&x52)));

	if (t1 != 10) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x57 = 6;
	uint64_t x58 = 227261LLU;
	static uint64_t x59 = 76647849399165LLU;
	uint64_t x60 = UINT64_MAX;
	static int32_t t2 = 150288;

	t2 = (x57>>(x58/(x59&x60)));

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x61 = 23690431U;
	int16_t x62 = INT16_MAX;
	int64_t x63 = -1LL;
	uint32_t t3 = 5U;

	t3 = (x61>>(x62/(x63&x64)));

	if (t3 != 23690431U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x77 = 136749534356637LLU;
	int32_t x79 = -177044576;
	int32_t x80 = INT32_MIN;
	uint64_t t4 = 62191105272797LLU;

	t4 = (x77>>(x78/(x79&x80)));

	if (t4 != 136749534356637LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x89 = UINT64_MAX;
	uint16_t x90 = UINT16_MAX;
	volatile int64_t x91 = -1LL;
	volatile uint64_t x92 = 59501864106004LLU;
	uint64_t t5 = UINT64_MAX;

	t5 = (x89>>(x90/(x91&x92)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x93 = 2;
	uint8_t x95 = 53U;
	static int32_t t6 = 2332;

	t6 = (x93>>(x94/(x95&x96)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x124 = INT16_MIN;
	int32_t t7 = 868098229;

	t7 = (x121>>(x122/(x123&x124)));

	if (t7 != 43) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x149 = 196U;
	volatile int16_t x150 = INT16_MAX;
	uint64_t x152 = UINT64_MAX;
	static volatile uint32_t t8 = 1043250U;

	t8 = (x149>>(x150/(x151&x152)));

	if (t8 != 196U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x205 = 4671849534LLU;
	int16_t x206 = INT16_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	volatile uint16_t x208 = UINT16_MAX;
	volatile uint64_t t9 = 1105835LLU;

	t9 = (x205>>(x206/(x207&x208)));

	if (t9 != 4671849534LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x211 = -17;
	int32_t t10 = -426458;

	t10 = (x209>>(x210/(x211&x212)));

	if (t10 != 27199) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x213 = INT32_MAX;
	static int8_t x214 = -7;
	static int64_t x215 = -778823758LL;
	uint8_t x216 = 42U;
	volatile int32_t t11 = INT32_MAX;

	t11 = (x213>>(x214/(x215&x216)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x217 = 56;
	volatile int16_t x218 = 838;
	uint16_t x219 = UINT16_MAX;
	static uint16_t x220 = 15377U;
	int32_t t12 = -138626608;

	t12 = (x217>>(x218/(x219&x220)));

	if (t12 != 56) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x233 = 0U;
	uint16_t x235 = UINT16_MAX;
	static int16_t x236 = 4;
	static uint32_t t13 = 16136924U;

	t13 = (x233>>(x234/(x235&x236)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x245 = UINT32_MAX;
	uint64_t x246 = UINT64_MAX;
	static int32_t x247 = -1;
	uint32_t t14 = 487U;

	t14 = (x245>>(x246/(x247&x248)));

	if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x263 = INT16_MAX;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x261>>(x262/(x263&x264)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x282 = 6U;
	static int32_t x283 = INT32_MIN;
	int32_t x284 = -116;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (x281>>(x282/(x283&x284)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x301 = 107;
	uint16_t x302 = 4302U;
	static int64_t x303 = 2079343743681131LL;
	static volatile int32_t t17 = 24;

	t17 = (x301>>(x302/(x303&x304)));

	if (t17 != 107) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x305 = UINT64_MAX;
	static uint16_t x306 = 1U;
	static volatile int64_t x307 = INT64_MIN;
	int8_t x308 = -1;

	t18 = (x305>>(x306/(x307&x308)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x329 = UINT64_MAX;
	static volatile int8_t x330 = INT8_MAX;
	int32_t x332 = -3538577;
	uint64_t t19 = 2162429323103LLU;

	t19 = (x329>>(x330/(x331&x332)));

	if (t19 != 4503599627370495LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x349 = 1U;
	static uint32_t x350 = 4U;
	int64_t x351 = INT64_MIN;
	volatile int32_t x352 = -257378;
	int32_t t20 = -429;

	t20 = (x349>>(x350/(x351&x352)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x353 = 0U;
	uint8_t x354 = 99U;
	int16_t x355 = -4674;
	uint8_t x356 = UINT8_MAX;
	static int32_t t21 = -1;

	t21 = (x353>>(x354/(x355&x356)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x370 = 2U;
	int16_t x372 = -1;
	int32_t t22 = INT32_MAX;

	t22 = (x369>>(x370/(x371&x372)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MIN;
	static int16_t x391 = -1;
	int32_t x392 = INT32_MIN;
	uint64_t t23 = UINT64_MAX;

	t23 = (x389>>(x390/(x391&x392)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x393 = 24152U;
	int8_t x394 = 33;
	uint16_t x395 = 30U;
	static volatile uint32_t t24 = 2371U;

	t24 = (x393>>(x394/(x395&x396)));

	if (t24 != 12076U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x397 = UINT16_MAX;
	static volatile int8_t x398 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	int32_t x400 = -25161;
	volatile int32_t t25 = -140;

	t25 = (x397>>(x398/(x399&x400)));

	if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x414 = 7U;
	static volatile int32_t x415 = INT32_MIN;
	static int32_t x416 = INT32_MIN;
	static volatile int32_t t26 = 7604;

	t26 = (x413>>(x414/(x415&x416)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x426 = 28;
	static int8_t x427 = -1;
	volatile int8_t x428 = INT8_MAX;

	t27 = (x425>>(x426/(x427&x428)));

	if (t27 != 16072532U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x429 = 5LL;
	volatile uint8_t x430 = 8U;
	static int32_t x431 = INT32_MAX;
	int8_t x432 = INT8_MAX;
	volatile int64_t t28 = -1LL;

	t28 = (x429>>(x430/(x431&x432)));

	if (t28 != 5LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x441 = 3181;
	int16_t x442 = -32;
	int8_t x443 = INT8_MIN;
	int8_t x444 = -2;
	static volatile int32_t t29 = -7;

	t29 = (x441>>(x442/(x443&x444)));

	if (t29 != 3181) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x458 = INT8_MAX;
	static int64_t x459 = INT64_MAX;
	volatile int8_t x460 = INT8_MIN;
	volatile uint32_t t30 = 1107802569U;

	t30 = (x457>>(x458/(x459&x460)));

	if (t30 != 51U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x462 = 3938289094LLU;
	int32_t x463 = INT32_MIN;
	static int64_t x464 = INT64_MIN;
	static int32_t t31 = 0;

	t31 = (x461>>(x462/(x463&x464)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x487 = INT16_MAX;
	uint16_t x488 = UINT16_MAX;
	static volatile int64_t t32 = 86691983509811LL;

	t32 = (x485>>(x486/(x487&x488)));

	if (t32 != 1063059544277LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x493 = INT16_MAX;
	uint16_t x494 = 103U;
	static volatile int32_t t33 = 10;

	t33 = (x493>>(x494/(x495&x496)));

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x513 = 8;
	uint32_t x514 = 435399374U;
	static int32_t x515 = -28575919;
	volatile int64_t x516 = INT64_MAX;
	int32_t t34 = 56;

	t34 = (x513>>(x514/(x515&x516)));

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x517 = 3U;
	int16_t x518 = INT16_MIN;
	int8_t x519 = -30;
	int16_t x520 = -1644;
	volatile int32_t t35 = 1159;

	t35 = (x517>>(x518/(x519&x520)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x529 = UINT64_MAX;
	uint32_t x530 = UINT32_MAX;
	int64_t x531 = 9086456233141LL;
	uint64_t t36 = UINT64_MAX;

	t36 = (x529>>(x530/(x531&x532)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x549 = 20290502138734154LL;
	static uint64_t x551 = UINT64_MAX;
	int32_t x552 = INT32_MIN;
	volatile int64_t t37 = 12989515842LL;

	t37 = (x549>>(x550/(x551&x552)));

	if (t37 != 20290502138734154LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x586 = -12706LL;
	int16_t x587 = INT16_MIN;
	static volatile int64_t x588 = INT64_MIN;
	int32_t t38 = -1;

	t38 = (x585>>(x586/(x587&x588)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x605 = 2U;
	uint16_t x606 = 6U;
	volatile int64_t x608 = -1LL;
	volatile int32_t t39 = -49985;

	t39 = (x605>>(x606/(x607&x608)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x637 = 1860;
	volatile uint32_t x638 = 2U;
	int8_t x640 = INT8_MAX;
	int32_t t40 = -15;

	t40 = (x637>>(x638/(x639&x640)));

	if (t40 != 1860) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x641 = INT8_MAX;
	int32_t x643 = INT32_MAX;
	int64_t x644 = -1LL;
	volatile int32_t t41 = 127398354;

	t41 = (x641>>(x642/(x643&x644)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x649 = 0;
	int32_t x650 = -1;
	static volatile uint16_t x651 = 2U;
	int8_t x652 = INT8_MAX;
	int32_t t42 = -199580694;

	t42 = (x649>>(x650/(x651&x652)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x657 = 21109244;
	int32_t x658 = -1;
	static uint16_t x659 = UINT16_MAX;
	int16_t x660 = 1387;
	volatile int32_t t43 = -131;

	t43 = (x657>>(x658/(x659&x660)));

	if (t43 != 21109244) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x661 = INT64_MAX;
	int32_t x662 = -12946;
	int8_t x664 = -1;
	int64_t t44 = INT64_MAX;

	t44 = (x661>>(x662/(x663&x664)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x669 = UINT32_MAX;
	int8_t x670 = INT8_MIN;
	static volatile int8_t x671 = -1;
	static int16_t x672 = INT16_MAX;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x669>>(x670/(x671&x672)));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x674 = 93U;
	uint32_t x675 = UINT32_MAX;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = (x673>>(x674/(x675&x676)));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x714 = INT16_MIN;
	volatile uint16_t x716 = UINT16_MAX;
	int32_t t47 = -1;

	t47 = (x713>>(x714/(x715&x716)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x729 = INT64_MAX;
	int8_t x730 = 3;
	volatile uint64_t x731 = 1LLU;
	volatile int16_t x732 = INT16_MAX;

	t48 = (x729>>(x730/(x731&x732)));

	if (t48 != 1152921504606846975LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x742 = 0;
	int8_t x743 = -15;
	static uint32_t x744 = 457681081U;
	uint32_t t49 = UINT32_MAX;

	t49 = (x741>>(x742/(x743&x744)));

	if (t49 != UINT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x749 = UINT16_MAX;
	volatile int32_t x750 = -3;
	uint8_t x751 = 30U;
	static uint8_t x752 = UINT8_MAX;
	static int32_t t50 = 8433;

	t50 = (x749>>(x750/(x751&x752)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x754 = 32LLU;
	uint16_t x756 = UINT16_MAX;
	volatile uint64_t t51 = 704637597033273LLU;

	t51 = (x753>>(x754/(x755&x756)));

	if (t51 != 103277LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x757 = INT64_MAX;
	uint16_t x758 = 100U;
	uint8_t x759 = UINT8_MAX;
	uint64_t x760 = 1640060619674567519LLU;

	t52 = (x757>>(x758/(x759&x760)));

	if (t52 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x774 = -1;
	int8_t x775 = 58;
	volatile int32_t x776 = -15083546;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x773>>(x774/(x775&x776)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x789 = 23844U;
	volatile int32_t x791 = INT32_MIN;
	volatile int8_t x792 = INT8_MIN;
	static int32_t t54 = -2833;

	t54 = (x789>>(x790/(x791&x792)));

	if (t54 != 23844) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x794 = 670U;
	int32_t x795 = INT32_MAX;
	volatile int32_t x796 = INT32_MAX;
	volatile int32_t t55 = -3;

	t55 = (x793>>(x794/(x795&x796)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x797 = INT64_MAX;
	int16_t x798 = -1;
	int8_t x799 = -1;
	volatile int64_t t56 = 32297815LL;

	t56 = (x797>>(x798/(x799&x800)));

	if (t56 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x801 = UINT32_MAX;
	uint8_t x802 = UINT8_MAX;
	volatile int8_t x803 = INT8_MIN;
	uint32_t x804 = UINT32_MAX;
	uint32_t t57 = UINT32_MAX;

	t57 = (x801>>(x802/(x803&x804)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x829 = UINT32_MAX;
	int16_t x830 = -1;
	int8_t x831 = INT8_MAX;
	uint8_t x832 = 2U;

	t58 = (x829>>(x830/(x831&x832)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x833 = 22;
	int32_t x835 = INT32_MAX;
	static uint16_t x836 = 10U;

	t59 = (x833>>(x834/(x835&x836)));

	if (t59 != 22) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x845 = INT8_MAX;
	int16_t x846 = 3013;
	volatile uint8_t x847 = UINT8_MAX;
	static int32_t x848 = 61625;
	volatile int32_t t60 = 202;

	t60 = (x845>>(x846/(x847&x848)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x849 = 119912649952603749LLU;
	int8_t x851 = INT8_MIN;
	static volatile int64_t x852 = INT64_MIN;
	volatile uint64_t t61 = 92360529429550768LLU;

	t61 = (x849>>(x850/(x851&x852)));

	if (t61 != 59956324976301874LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x875 = INT32_MAX;
	uint64_t x876 = UINT64_MAX;
	volatile uint64_t t62 = 98637996315342LLU;

	t62 = (x873>>(x874/(x875&x876)));

	if (t62 != 1069998108238LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x913 = 686782;
	int64_t x914 = -1LL;
	int8_t x915 = INT8_MIN;

	t63 = (x913>>(x914/(x915&x916)));

	if (t63 != 686782) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x925 = 905824661U;
	static int32_t x926 = INT32_MAX;
	static volatile int32_t x927 = INT32_MIN;
	int8_t x928 = -2;
	uint32_t t64 = 3441114U;

	t64 = (x925>>(x926/(x927&x928)));

	if (t64 != 905824661U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x929 = UINT64_MAX;
	uint64_t x930 = 32LLU;
	int16_t x931 = 1135;
	volatile int16_t x932 = -11;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x929>>(x930/(x931&x932)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x969 = UINT16_MAX;
	int8_t x970 = INT8_MIN;
	static volatile int32_t x971 = -1;
	int32_t t66 = -4837706;

	t66 = (x969>>(x970/(x971&x972)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x985 = 1129U;
	int64_t x986 = -1LL;
	volatile uint16_t x987 = UINT16_MAX;
	int16_t x988 = -157;
	volatile int32_t t67 = 5;

	t67 = (x985>>(x986/(x987&x988)));

	if (t67 != 1129) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x990 = -1;
	static int64_t x991 = -1LL;
	volatile int32_t t68 = 7328101;

	t68 = (x989>>(x990/(x991&x992)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x993 = UINT32_MAX;
	volatile int64_t x995 = -1LL;
	volatile uint32_t x996 = 5690125U;

	t69 = (x993>>(x994/(x995&x996)));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x997 = UINT8_MAX;
	int64_t x998 = -1LL;
	uint64_t x999 = UINT64_MAX;
	int32_t t70 = 108414862;

	t70 = (x997>>(x998/(x999&x1000)));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x1009 = 41U;
	uint8_t x1010 = 20U;
	int8_t x1011 = INT8_MAX;
	int8_t x1012 = 1;
	int32_t t71 = -224584003;

	t71 = (x1009>>(x1010/(x1011&x1012)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1017 = INT8_MAX;
	uint16_t x1018 = 1U;
	int16_t x1019 = INT16_MIN;
	int16_t x1020 = -1;
	int32_t t72 = 18;

	t72 = (x1017>>(x1018/(x1019&x1020)));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x1025 = UINT64_MAX;
	volatile int16_t x1026 = INT16_MIN;
	uint32_t x1028 = UINT32_MAX;
	static volatile uint64_t t73 = 712LLU;

	t73 = (x1025>>(x1026/(x1027&x1028)));

	if (t73 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x1030 = 190;
	uint64_t x1031 = 55368LLU;
	volatile int8_t x1032 = INT8_MIN;
	volatile int64_t t74 = 1LL;

	t74 = (x1029>>(x1030/(x1031&x1032)));

	if (t74 != 2814381790828LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1069 = UINT64_MAX;
	volatile int16_t x1071 = 6062;
	volatile int64_t x1072 = -1LL;
	uint64_t t75 = 21674LLU;

	t75 = (x1069>>(x1070/(x1071&x1072)));

	if (t75 != 18014398509481983LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x1098 = 0;
	static volatile uint64_t x1100 = UINT64_MAX;
	static uint64_t t76 = UINT64_MAX;

	t76 = (x1097>>(x1098/(x1099&x1100)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x1105 = 0;
	static uint8_t x1106 = UINT8_MAX;
	int8_t x1108 = INT8_MAX;

	t77 = (x1105>>(x1106/(x1107&x1108)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x1137 = 17332677695654307LL;
	int16_t x1138 = 1;
	int32_t x1139 = -1;
	static int16_t x1140 = 1018;
	int64_t t78 = 17LL;

	t78 = (x1137>>(x1138/(x1139&x1140)));

	if (t78 != 17332677695654307LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x1157 = 1582U;
	uint8_t x1158 = UINT8_MAX;
	uint16_t x1159 = 813U;
	uint16_t x1160 = 31U;

	t79 = (x1157>>(x1158/(x1159&x1160)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x1173 = INT16_MAX;
	volatile int32_t x1174 = INT32_MAX;
	int16_t x1175 = INT16_MIN;

	t80 = (x1173>>(x1174/(x1175&x1176)));

	if (t80 != 16383) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x1177 = 236128030749LLU;
	uint8_t x1178 = 62U;
	int16_t x1180 = INT16_MIN;
	volatile uint64_t t81 = 528311755488775294LLU;

	t81 = (x1177>>(x1178/(x1179&x1180)));

	if (t81 != 236128030749LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x1194 = 146;
	uint16_t x1195 = 11585U;
	int16_t x1196 = 614;
	static uint32_t t82 = 64895U;

	t82 = (x1193>>(x1194/(x1195&x1196)));

	if (t82 != 55396904U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x1201 = 4116114643473761501LLU;
	uint8_t x1202 = 4U;
	int64_t x1203 = INT64_MIN;
	int8_t x1204 = INT8_MIN;
	uint64_t t83 = 1869546965312502224LLU;

	t83 = (x1201>>(x1202/(x1203&x1204)));

	if (t83 != 4116114643473761501LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x1214 = -1;
	int16_t x1216 = INT16_MAX;
	volatile int32_t t84 = -12;

	t84 = (x1213>>(x1214/(x1215&x1216)));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1229 = 30262861022658587LLU;
	int32_t x1230 = -357214168;
	int8_t x1231 = -4;
	int64_t x1232 = INT64_MIN;
	uint64_t t85 = 172008LLU;

	t85 = (x1229>>(x1230/(x1231&x1232)));

	if (t85 != 30262861022658587LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x1265 = UINT32_MAX;
	volatile uint16_t x1266 = UINT16_MAX;
	static volatile uint64_t x1268 = 10601625194021LLU;
	volatile uint32_t t86 = 0U;

	t86 = (x1265>>(x1266/(x1267&x1268)));

	if (t86 != 16383U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x1302 = -410;
	int64_t x1303 = 55227788899875LL;
	uint32_t x1304 = 6507309U;
	int32_t t87 = 7958;

	t87 = (x1301>>(x1302/(x1303&x1304)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x1322 = UINT8_MAX;
	volatile int64_t x1323 = INT64_MIN;
	static int16_t x1324 = INT16_MIN;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x1321>>(x1322/(x1323&x1324)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x1329 = 6226989627287329042LLU;
	int8_t x1331 = -1;
	volatile uint32_t x1332 = 15720U;
	uint64_t t89 = 204064160303986036LLU;

	t89 = (x1329>>(x1330/(x1331&x1332)));

	if (t89 != 6226989627287329042LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1365 = INT8_MAX;
	int16_t x1366 = -1;
	int32_t x1367 = INT32_MAX;
	static int16_t x1368 = 1116;
	int32_t t90 = 3101294;

	t90 = (x1365>>(x1366/(x1367&x1368)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1409 = UINT64_MAX;
	volatile int8_t x1410 = INT8_MAX;
	uint64_t x1411 = 8122060LLU;
	int16_t x1412 = -1;
	uint64_t t91 = UINT64_MAX;

	t91 = (x1409>>(x1410/(x1411&x1412)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x1413 = UINT16_MAX;
	int8_t x1414 = 3;
	int16_t x1415 = -1;
	int32_t x1416 = INT32_MAX;

	t92 = (x1413>>(x1414/(x1415&x1416)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x1420 = 459003847;

	t93 = (x1417>>(x1418/(x1419&x1420)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1429 = UINT32_MAX;
	static volatile int64_t x1430 = -12561722278LL;
	static int8_t x1431 = INT8_MIN;
	int64_t x1432 = INT64_MIN;
	volatile uint32_t t94 = UINT32_MAX;

	t94 = (x1429>>(x1430/(x1431&x1432)));

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x1433 = 1U;
	int16_t x1434 = INT16_MIN;
	int8_t x1435 = INT8_MIN;
	volatile int16_t x1436 = INT16_MIN;
	int32_t t95 = 1181;

	t95 = (x1433>>(x1434/(x1435&x1436)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1437 = 1U;
	static int16_t x1438 = -131;
	int64_t x1439 = INT64_MIN;
	int64_t x1440 = INT64_MIN;
	volatile uint32_t t96 = 5U;

	t96 = (x1437>>(x1438/(x1439&x1440)));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1449 = INT64_MAX;
	volatile int64_t x1450 = -1LL;
	int32_t x1451 = -1;
	uint16_t x1452 = UINT16_MAX;
	static volatile int64_t t97 = INT64_MAX;

	t97 = (x1449>>(x1450/(x1451&x1452)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x1465 = 3U;
	volatile int8_t x1467 = INT8_MIN;
	int32_t x1468 = 18545;
	static int32_t t98 = -360846849;

	t98 = (x1465>>(x1466/(x1467&x1468)));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x1469 = UINT64_MAX;
	int32_t x1471 = INT32_MAX;
	int16_t x1472 = -583;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x1469>>(x1470/(x1471&x1472)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

