#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x26 = -1;
int32_t t1 = 26662179;
uint32_t x73 = 2958U;
volatile uint32_t t3 = 212961U;
static int16_t x91 = 98;
static int16_t x101 = 24;
int16_t x102 = -1;
static int32_t x103 = 984491;
uint64_t x112 = UINT64_MAX;
uint16_t x127 = 1U;
int64_t x130 = INT64_MIN;
int32_t x157 = 519940;
static int8_t x160 = INT8_MAX;
volatile int32_t x172 = INT32_MIN;
int16_t x189 = 0;
int32_t x192 = INT32_MIN;
volatile int32_t t16 = INT32_MAX;
static uint64_t x217 = 18869206409342LLU;
uint64_t t17 = 6839955846LLU;
static int32_t t18 = 3176198;
int16_t x233 = INT16_MAX;
uint16_t x275 = 7U;
int64_t x279 = INT64_MIN;
volatile uint32_t t26 = UINT32_MAX;
uint8_t x327 = UINT8_MAX;
uint32_t t28 = 0U;
int32_t x348 = INT32_MIN;
uint16_t x392 = UINT16_MAX;
int64_t x394 = INT64_MIN;
uint64_t x395 = UINT64_MAX;
int8_t x414 = INT8_MIN;
int32_t x416 = INT32_MIN;
static int8_t x441 = INT8_MAX;
volatile uint8_t x444 = 30U;
int64_t t40 = INT64_MAX;
uint8_t x485 = 29U;
static volatile int32_t t41 = -12656;
volatile int32_t t42 = 323;
uint32_t x499 = UINT32_MAX;
int8_t x511 = 4;
static uint64_t x517 = 127468421791693032LLU;
int8_t x519 = 0;
volatile uint64_t t48 = UINT64_MAX;
volatile int16_t x555 = 1;
int32_t t49 = 1;
int16_t x558 = 0;
int8_t x561 = 4;
int16_t x584 = -1;
uint64_t x607 = 64175236LLU;
uint8_t x608 = UINT8_MAX;
static int64_t x613 = INT64_MAX;
uint32_t x624 = UINT32_MAX;
int32_t t58 = 0;
int16_t x662 = 2;
static volatile uint64_t t61 = UINT64_MAX;
static volatile uint8_t x705 = 0U;
static int16_t x707 = -7;
int64_t x708 = -25626LL;
int32_t x733 = 1;
volatile int32_t t64 = 6;
uint16_t x757 = UINT16_MAX;
static volatile uint64_t x760 = UINT64_MAX;
int32_t x763 = -1;
uint64_t x773 = 756801266LLU;
int64_t x776 = -1LL;
volatile uint64_t t67 = 20565872LLU;
int16_t x808 = 1;
volatile uint64_t x850 = 1041325LLU;
int16_t x851 = -1;
static uint32_t x877 = UINT32_MAX;
uint8_t x878 = UINT8_MAX;
volatile uint8_t x879 = UINT8_MAX;
int64_t t73 = INT64_MAX;
uint16_t x897 = 57U;
volatile int64_t x904 = -1LL;
volatile int32_t x906 = INT32_MIN;
uint32_t t76 = 5752608U;
uint16_t x918 = 0U;
int32_t t79 = -40;
int8_t x937 = 55;
int32_t t80 = -1178156;
volatile uint8_t x964 = UINT8_MAX;
int16_t x978 = 0;
uint32_t x982 = UINT32_MAX;
int32_t x984 = -1;
volatile int32_t t84 = 3;
static int32_t x997 = 370841;
uint16_t x998 = 723U;
volatile int32_t x1002 = -62385660;
uint32_t t86 = 1918247223U;
int32_t x1007 = INT32_MIN;
uint32_t x1008 = 7U;
int32_t x1033 = 207;
int32_t x1089 = INT32_MAX;
int64_t x1090 = INT64_MIN;
static int64_t x1092 = 3734540801289LL;
volatile int16_t x1106 = -1;
static uint64_t x1125 = 115937158592750LLU;
volatile uint64_t x1128 = UINT64_MAX;
static volatile uint64_t t95 = 3196271652114LLU;
uint8_t x1135 = UINT8_MAX;
int16_t x1136 = INT16_MIN;
uint64_t x1192 = 70972927688515LLU;
uint32_t t99 = 411406U;


void f0(void) {
	int32_t x25 = 1052257;
	int16_t x27 = INT16_MIN;
	volatile int16_t x28 = INT16_MIN;
	volatile int32_t t0 = 4056359;

	t0 = (x25>>(x26&(x27%x28)));

	if (t0 != 1052257) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x37 = 34U;
	volatile uint8_t x38 = 12U;
	int64_t x39 = INT64_MIN;
	volatile int16_t x40 = INT16_MAX;

	t1 = (x37>>(x38&(x39%x40)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x45 = 1U;
	static uint16_t x46 = 8U;
	volatile int8_t x47 = 7;
	int64_t x48 = INT64_MAX;
	volatile int32_t t2 = 274;

	t2 = (x45>>(x46&(x47%x48)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x74 = 0;
	uint16_t x75 = 13U;
	uint16_t x76 = UINT16_MAX;

	t3 = (x73>>(x74&(x75%x76)));

	if (t3 != 2958U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x77 = INT8_MAX;
	static volatile int8_t x78 = -1;
	static uint16_t x79 = 12U;
	uint64_t x80 = 9647LLU;
	int32_t t4 = 446538;

	t4 = (x77>>(x78&(x79%x80)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x89 = INT32_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x92 = 433125U;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x89>>(x90&(x91%x92)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x104 = -14;
	static volatile int32_t t6 = -704;

	t6 = (x101>>(x102&(x103%x104)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x105 = 3792U;
	int8_t x106 = INT8_MIN;
	uint16_t x107 = 3U;
	int16_t x108 = 8224;
	uint32_t t7 = 112U;

	t7 = (x105>>(x106&(x107%x108)));

	if (t7 != 3792U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x109 = UINT64_MAX;
	volatile uint32_t x110 = 109048515U;
	static uint16_t x111 = 0U;
	uint64_t t8 = UINT64_MAX;

	t8 = (x109>>(x110&(x111%x112)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x125 = 31550640U;
	volatile int8_t x126 = INT8_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint32_t t9 = 1825790180U;

	t9 = (x125>>(x126&(x127%x128)));

	if (t9 != 31550640U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile uint8_t x131 = 61U;
	uint32_t x132 = UINT32_MAX;
	static volatile uint64_t t10 = UINT64_MAX;

	t10 = (x129>>(x130&(x131%x132)));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x141 = 1;
	int16_t x142 = 0;
	static uint8_t x143 = 33U;
	int32_t x144 = INT32_MIN;
	volatile int32_t t11 = -99131;

	t11 = (x141>>(x142&(x143%x144)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x158 = 1;
	static int64_t x159 = -1LL;
	volatile int32_t t12 = -1;

	t12 = (x157>>(x158&(x159%x160)));

	if (t12 != 259970) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x161 = 0U;
	int32_t x162 = 40;
	static uint8_t x163 = 14U;
	int64_t x164 = INT64_MIN;
	volatile uint32_t t13 = 15U;

	t13 = (x161>>(x162&(x163%x164)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x169 = 233U;
	uint32_t x170 = 233750U;
	uint16_t x171 = 42U;
	volatile int32_t t14 = 10008509;

	t14 = (x169>>(x170&(x171%x172)));

	if (t14 != 58) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x190 = -6364;
	volatile int16_t x191 = 29;
	volatile int32_t t15 = 28;

	t15 = (x189>>(x190&(x191%x192)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x197 = INT32_MAX;
	uint16_t x198 = 212U;
	uint8_t x199 = 0U;
	int8_t x200 = INT8_MIN;

	t16 = (x197>>(x198&(x199%x200)));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x218 = 2346U;
	static uint16_t x219 = 27U;
	int8_t x220 = INT8_MAX;

	t17 = (x217>>(x218&(x219%x220)));

	if (t17 != 18426959384LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x221 = 104002;
	int32_t x222 = INT32_MIN;
	volatile int32_t x223 = 990220;
	static int32_t x224 = -109538;

	t18 = (x221>>(x222&(x223%x224)));

	if (t18 != 104002) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x226 = -119;
	uint16_t x227 = UINT16_MAX;
	uint8_t x228 = 2U;
	volatile int32_t t19 = 19943;

	t19 = (x225>>(x226&(x227%x228)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x234 = -777;
	static uint8_t x235 = 4U;
	int8_t x236 = -1;
	int32_t t20 = -941014475;

	t20 = (x233>>(x234&(x235%x236)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x241 = UINT16_MAX;
	volatile uint8_t x242 = 0U;
	int16_t x243 = INT16_MAX;
	int64_t x244 = INT64_MIN;
	int32_t t21 = -53;

	t21 = (x241>>(x242&(x243%x244)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x273 = 21U;
	volatile int8_t x274 = INT8_MIN;
	int32_t x276 = -203;
	volatile uint32_t t22 = 1019733284U;

	t22 = (x273>>(x274&(x275%x276)));

	if (t22 != 21U) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x277 = INT16_MAX;
	static uint8_t x278 = 3U;
	static uint64_t x280 = 60LLU;
	volatile int32_t t23 = -427462;

	t23 = (x277>>(x278&(x279%x280)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x285 = 885340154232LLU;
	volatile uint32_t x286 = 12352U;
	uint32_t x287 = 2U;
	static int8_t x288 = -2;
	volatile uint64_t t24 = 1381010LLU;

	t24 = (x285>>(x286&(x287%x288)));

	if (t24 != 885340154232LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x297 = INT8_MAX;
	static int32_t x298 = 149294862;
	static uint32_t x299 = UINT32_MAX;
	static int8_t x300 = -1;
	int32_t t25 = -217236;

	t25 = (x297>>(x298&(x299%x300)));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MIN;
	int64_t x308 = -1LL;

	t26 = (x305>>(x306&(x307%x308)));

	if (t26 != UINT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x317 = 473832U;
	static int8_t x318 = 1;
	static uint8_t x319 = 30U;
	uint64_t x320 = 1055050LLU;
	static volatile uint32_t t27 = 209U;

	t27 = (x317>>(x318&(x319%x320)));

	if (t27 != 473832U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x325 = 0U;
	int32_t x326 = -883943;
	volatile int16_t x328 = 6087;

	t28 = (x325>>(x326&(x327%x328)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x329 = 1261LLU;
	volatile uint64_t x330 = UINT64_MAX;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -1;
	uint64_t t29 = 38916451260LLU;

	t29 = (x329>>(x330&(x331%x332)));

	if (t29 != 1261LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int8_t x334 = -1;
	uint8_t x335 = 11U;
	uint8_t x336 = 41U;
	static volatile uint64_t t30 = 6483524564313870824LLU;

	t30 = (x333>>(x334&(x335%x336)));

	if (t30 != 9007199254740991LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x345 = 925711997LLU;
	static int8_t x346 = -1;
	int32_t x347 = INT32_MIN;
	volatile uint64_t t31 = 13187748978LLU;

	t31 = (x345>>(x346&(x347%x348)));

	if (t31 != 925711997LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x369 = 5746526288740470680LLU;
	uint16_t x370 = 3U;
	int64_t x371 = -1708LL;
	int8_t x372 = INT8_MAX;
	volatile uint64_t t32 = 20LLU;

	t32 = (x369>>(x370&(x371%x372)));

	if (t32 != 718315786092558835LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x381 = 1588964596067601LLU;
	static int8_t x382 = -2;
	int8_t x383 = INT8_MAX;
	uint8_t x384 = 84U;
	static volatile uint64_t t33 = 682564752662059900LLU;

	t33 = (x381>>(x382&(x383%x384)));

	if (t33 != 361LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x389 = UINT64_MAX;
	static uint64_t x390 = 78191695LLU;
	uint16_t x391 = 0U;
	static uint64_t t34 = UINT64_MAX;

	t34 = (x389>>(x390&(x391%x392)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x393 = INT16_MAX;
	volatile uint8_t x396 = UINT8_MAX;
	volatile int32_t t35 = -2116;

	t35 = (x393>>(x394&(x395%x396)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x413 = 4464470U;
	uint8_t x415 = 0U;
	volatile uint32_t t36 = 16885U;

	t36 = (x413>>(x414&(x415%x416)));

	if (t36 != 4464470U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x425 = 16083071162LL;
	volatile int8_t x426 = -2;
	int16_t x427 = -8725;
	int8_t x428 = 1;
	static int64_t t37 = -183572LL;

	t37 = (x425>>(x426&(x427%x428)));

	if (t37 != 16083071162LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x442 = 4LL;
	volatile int32_t x443 = -1;
	int32_t t38 = 30;

	t38 = (x441>>(x442&(x443%x444)));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x449 = INT8_MAX;
	volatile int8_t x450 = INT8_MIN;
	int8_t x451 = 20;
	volatile int8_t x452 = INT8_MAX;
	int32_t t39 = 329113;

	t39 = (x449>>(x450&(x451%x452)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x457 = INT64_MAX;
	volatile uint16_t x458 = 525U;
	volatile int64_t x459 = INT64_MAX;
	static int8_t x460 = INT8_MAX;

	t40 = (x457>>(x458&(x459%x460)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x486 = INT64_MIN;
	int16_t x487 = -2;
	uint64_t x488 = 632894263246740464LLU;

	t41 = (x485>>(x486&(x487%x488)));

	if (t41 != 29) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x493 = 6;
	int64_t x494 = INT64_MAX;
	uint32_t x495 = 1683511664U;
	volatile int8_t x496 = 1;

	t42 = (x493>>(x494&(x495%x496)));

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x497 = 6U;
	static int8_t x498 = 30;
	volatile uint16_t x500 = UINT16_MAX;
	volatile int32_t t43 = 1;

	t43 = (x497>>(x498&(x499%x500)));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x509 = 121U;
	volatile int8_t x510 = INT8_MAX;
	int32_t x512 = INT32_MAX;
	static volatile int32_t t44 = -149145768;

	t44 = (x509>>(x510&(x511%x512)));

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x513 = 0;
	volatile uint8_t x514 = UINT8_MAX;
	volatile uint64_t x515 = UINT64_MAX;
	static int32_t x516 = INT32_MAX;
	volatile int32_t t45 = -479607333;

	t45 = (x513>>(x514&(x515%x516)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x518 = INT16_MIN;
	int16_t x520 = 103;
	uint64_t t46 = 135754142911158287LLU;

	t46 = (x517>>(x518&(x519%x520)));

	if (t46 != 127468421791693032LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x525 = 23U;
	uint64_t x526 = 310909909477LLU;
	uint8_t x527 = 0U;
	static int16_t x528 = INT16_MIN;
	static volatile int32_t t47 = 475525;

	t47 = (x525>>(x526&(x527%x528)));

	if (t47 != 23) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x529 = UINT64_MAX;
	int64_t x530 = INT64_MIN;
	int16_t x531 = 105;
	int16_t x532 = INT16_MAX;

	t48 = (x529>>(x530&(x531%x532)));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x553 = 7U;
	uint64_t x554 = 0LLU;
	static volatile int32_t x556 = -6;

	t49 = (x553>>(x554&(x555%x556)));

	if (t49 != 7) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x557 = UINT64_MAX;
	int64_t x559 = INT64_MIN;
	int16_t x560 = INT16_MAX;
	uint64_t t50 = UINT64_MAX;

	t50 = (x557>>(x558&(x559%x560)));

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x562 = 42U;
	volatile uint8_t x563 = 15U;
	volatile int64_t x564 = INT64_MIN;
	volatile int32_t t51 = -1;

	t51 = (x561>>(x562&(x563%x564)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x577 = 1;
	int16_t x578 = -2;
	volatile int64_t x579 = INT64_MIN;
	static volatile int64_t x580 = INT64_MIN;
	static int32_t t52 = -282824;

	t52 = (x577>>(x578&(x579%x580)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x581 = 320U;
	int8_t x582 = INT8_MAX;
	int16_t x583 = INT16_MAX;
	static volatile uint32_t t53 = 23U;

	t53 = (x581>>(x582&(x583%x584)));

	if (t53 != 320U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x593 = 32;
	uint8_t x594 = UINT8_MAX;
	uint16_t x595 = UINT16_MAX;
	int8_t x596 = -1;
	volatile int32_t t54 = -24884868;

	t54 = (x593>>(x594&(x595%x596)));

	if (t54 != 32) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x605 = INT16_MAX;
	int64_t x606 = INT64_MIN;
	static volatile int32_t t55 = 1257347;

	t55 = (x605>>(x606&(x607%x608)));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x614 = -363786220;
	volatile int16_t x615 = 3622;
	static uint16_t x616 = UINT16_MAX;
	volatile int64_t t56 = 25292503520LL;

	t56 = (x613>>(x614&(x615%x616)));

	if (t56 != 576460752303423487LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x621 = INT16_MAX;
	int64_t x622 = INT64_MIN;
	int8_t x623 = -1;
	volatile int32_t t57 = 783;

	t57 = (x621>>(x622&(x623%x624)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x641 = 6U;
	uint32_t x642 = 17U;
	uint8_t x643 = 1U;
	int32_t x644 = INT32_MAX;

	t58 = (x641>>(x642&(x643%x644)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x661 = INT32_MAX;
	static int32_t x663 = INT32_MAX;
	uint8_t x664 = 2U;
	volatile int32_t t59 = INT32_MAX;

	t59 = (x661>>(x662&(x663%x664)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x681 = 27U;
	static int32_t x682 = -6;
	static int16_t x683 = INT16_MAX;
	int16_t x684 = -26;
	static volatile int32_t t60 = -10;

	t60 = (x681>>(x682&(x683%x684)));

	if (t60 != 6) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x685 = UINT64_MAX;
	volatile int16_t x686 = INT16_MAX;
	volatile int8_t x687 = -1;
	uint32_t x688 = 1U;

	t61 = (x685>>(x686&(x687%x688)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x706 = 12;
	int32_t t62 = -2074209;

	t62 = (x705>>(x706&(x707%x708)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x721 = 1;
	static volatile int64_t x722 = -10575172967LL;
	int32_t x723 = 35635;
	int32_t x724 = -1;
	volatile int32_t t63 = -23953;

	t63 = (x721>>(x722&(x723%x724)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x734 = UINT32_MAX;
	volatile uint8_t x735 = UINT8_MAX;
	static int16_t x736 = -1;

	t64 = (x733>>(x734&(x735%x736)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x758 = 7U;
	int8_t x759 = -13;
	static volatile int32_t t65 = 127088486;

	t65 = (x757>>(x758&(x759%x760)));

	if (t65 != 8191) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x761 = 2U;
	int16_t x762 = 1;
	static volatile int8_t x764 = INT8_MIN;
	volatile int32_t t66 = 189323;

	t66 = (x761>>(x762&(x763%x764)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x774 = INT64_MIN;
	int32_t x775 = INT32_MIN;

	t67 = (x773>>(x774&(x775%x776)));

	if (t67 != 756801266LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x805 = UINT16_MAX;
	static volatile int8_t x806 = -1;
	int16_t x807 = -28;
	int32_t t68 = -6376;

	t68 = (x805>>(x806&(x807%x808)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x809 = 0U;
	volatile int8_t x810 = 61;
	static int32_t x811 = 1;
	volatile int8_t x812 = INT8_MIN;
	volatile int32_t t69 = -28;

	t69 = (x809>>(x810&(x811%x812)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x833 = INT32_MAX;
	int32_t x834 = -1;
	uint8_t x835 = 30U;
	int32_t x836 = INT32_MIN;
	int32_t t70 = 6;

	t70 = (x833>>(x834&(x835%x836)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x849 = 73U;
	int16_t x852 = -1;
	volatile int32_t t71 = 29515;

	t71 = (x849>>(x850&(x851%x852)));

	if (t71 != 73) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x880 = 236;
	static volatile uint32_t t72 = 13U;

	t72 = (x877>>(x878&(x879%x880)));

	if (t72 != 8191U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x885 = INT64_MAX;
	uint8_t x886 = 1U;
	int8_t x887 = INT8_MIN;
	int16_t x888 = -1;

	t73 = (x885>>(x886&(x887%x888)));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x898 = UINT16_MAX;
	volatile int32_t x899 = INT32_MAX;
	static int8_t x900 = -2;
	int32_t t74 = -16;

	t74 = (x897>>(x898&(x899%x900)));

	if (t74 != 28) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x901 = 1075U;
	static int32_t x902 = -1;
	uint8_t x903 = 24U;
	int32_t t75 = -979;

	t75 = (x901>>(x902&(x903%x904)));

	if (t75 != 1075) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x905 = 56973641U;
	int32_t x907 = -41;
	uint64_t x908 = 968796654LLU;

	t76 = (x905>>(x906&(x907%x908)));

	if (t76 != 56973641U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x909 = UINT32_MAX;
	static int64_t x910 = -1LL;
	static uint8_t x911 = 9U;
	uint64_t x912 = UINT64_MAX;
	volatile uint32_t t77 = 1440024U;

	t77 = (x909>>(x910&(x911%x912)));

	if (t77 != 8388607U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x917 = 3780722LLU;
	static uint64_t x919 = UINT64_MAX;
	int16_t x920 = INT16_MIN;
	uint64_t t78 = 27845682899276LLU;

	t78 = (x917>>(x918&(x919%x920)));

	if (t78 != 3780722LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x933 = 37U;
	int8_t x934 = INT8_MIN;
	int32_t x935 = 1;
	uint8_t x936 = 6U;

	t79 = (x933>>(x934&(x935%x936)));

	if (t79 != 37) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x938 = INT8_MIN;
	static uint16_t x939 = UINT16_MAX;
	volatile int32_t x940 = -1;

	t80 = (x937>>(x938&(x939%x940)));

	if (t80 != 55) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x941 = 0LLU;
	int32_t x942 = INT32_MIN;
	uint32_t x943 = 14U;
	int16_t x944 = 1;
	uint64_t t81 = 342324623407137LLU;

	t81 = (x941>>(x942&(x943%x944)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x961 = 2U;
	int64_t x962 = INT64_MIN;
	uint8_t x963 = 51U;
	int32_t t82 = -1;

	t82 = (x961>>(x962&(x963%x964)));

	if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x977 = 5266U;
	int32_t x979 = 60198;
	uint32_t x980 = 3U;
	volatile int32_t t83 = 1244;

	t83 = (x977>>(x978&(x979%x980)));

	if (t83 != 5266) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x981 = 21U;
	int16_t x983 = -4038;

	t84 = (x981>>(x982&(x983%x984)));

	if (t84 != 21) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x999 = 139115LL;
	int8_t x1000 = 1;
	int32_t t85 = 658885;

	t85 = (x997>>(x998&(x999%x1000)));

	if (t85 != 370841) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1001 = 1859U;
	uint16_t x1003 = 4U;
	int32_t x1004 = INT32_MIN;

	t86 = (x1001>>(x1002&(x1003%x1004)));

	if (t86 != 116U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x1005 = 12137U;
	volatile uint32_t x1006 = 3310U;
	volatile int32_t t87 = -34887;

	t87 = (x1005>>(x1006&(x1007%x1008)));

	if (t87 != 3034) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x1034 = -2632324705846LL;
	uint16_t x1035 = 25U;
	static uint64_t x1036 = 27930661LLU;
	int32_t t88 = 976;

	t88 = (x1033>>(x1034&(x1035%x1036)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x1053 = UINT16_MAX;
	int32_t x1054 = -1;
	static int32_t x1055 = -55070985;
	int16_t x1056 = 3;
	static int32_t t89 = -87;

	t89 = (x1053>>(x1054&(x1055%x1056)));

	if (t89 != 65535) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x1077 = 3U;
	int16_t x1078 = INT16_MIN;
	int32_t x1079 = 24202425;
	int8_t x1080 = -1;
	int32_t t90 = 2967;

	t90 = (x1077>>(x1078&(x1079%x1080)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1085 = 4U;
	uint8_t x1086 = 17U;
	int16_t x1087 = -1;
	static volatile uint64_t x1088 = UINT64_MAX;
	volatile int32_t t91 = -347199102;

	t91 = (x1085>>(x1086&(x1087%x1088)));

	if (t91 != 4) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x1091 = 100727LLU;
	int32_t t92 = INT32_MAX;

	t92 = (x1089>>(x1090&(x1091%x1092)));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1105 = 15724U;
	int64_t x1107 = INT64_MAX;
	int8_t x1108 = -22;
	static volatile int32_t t93 = 28408;

	t93 = (x1105>>(x1106&(x1107%x1108)));

	if (t93 != 122) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x1113 = INT8_MAX;
	int32_t x1114 = INT32_MAX;
	uint16_t x1115 = UINT16_MAX;
	int32_t x1116 = -1;
	int32_t t94 = 6225;

	t94 = (x1113>>(x1114&(x1115%x1116)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x1126 = -1985;
	uint8_t x1127 = UINT8_MAX;

	t95 = (x1125>>(x1126&(x1127%x1128)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x1129 = 3484U;
	volatile uint32_t x1130 = 514U;
	uint16_t x1131 = 10872U;
	volatile uint8_t x1132 = 1U;
	volatile uint32_t t96 = 13278480U;

	t96 = (x1129>>(x1130&(x1131%x1132)));

	if (t96 != 3484U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x1133 = 60U;
	int64_t x1134 = INT64_MIN;
	volatile int32_t t97 = 0;

	t97 = (x1133>>(x1134&(x1135%x1136)));

	if (t97 != 60) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x1185 = UINT8_MAX;
	uint16_t x1186 = 957U;
	static volatile int32_t x1187 = INT32_MAX;
	uint8_t x1188 = 26U;
	volatile int32_t t98 = 7977;

	t98 = (x1185>>(x1186&(x1187%x1188)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x1189 = UINT32_MAX;
	volatile uint8_t x1190 = 1U;
	int32_t x1191 = -1;

	t99 = (x1189>>(x1190&(x1191%x1192)));

	if (t99 != 2147483647U) { NG(); } else { ; }
	
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

