#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x7 = 104791539;
uint8_t x13 = UINT8_MAX;
int8_t x16 = -1;
int16_t x37 = INT16_MIN;
int16_t x57 = 157;
int8_t x59 = 1;
int32_t x69 = INT32_MAX;
static int32_t x71 = 26;
int8_t x72 = INT8_MIN;
int64_t x73 = -320505641235791473LL;
int64_t x74 = INT64_MIN;
static int8_t x89 = INT8_MIN;
int8_t x116 = -1;
static volatile int32_t x120 = -27;
volatile uint16_t x135 = UINT16_MAX;
int32_t t12 = 693899073;
uint32_t x182 = 6U;
int32_t x198 = 20;
static int32_t t15 = -1;
static int16_t x202 = -1;
volatile int16_t x204 = -1;
static int32_t t16 = 931574789;
int8_t x234 = -1;
static int16_t x235 = 417;
int8_t x237 = 1;
uint16_t x257 = 31855U;
int64_t x260 = -1LL;
int32_t t23 = -2753173;
int8_t x264 = INT8_MAX;
int16_t x290 = -1;
int16_t x313 = INT16_MIN;
int32_t t30 = -201141759;
int16_t x343 = INT16_MAX;
int64_t x352 = -1LL;
int8_t x366 = INT8_MIN;
int32_t t34 = 78;
int64_t x375 = INT64_MAX;
volatile uint8_t x395 = UINT8_MAX;
uint8_t x419 = 27U;
volatile int32_t t42 = 0;
uint16_t x459 = 16U;
uint64_t x499 = 3LLU;
static int32_t x521 = INT32_MAX;
static volatile int32_t x522 = INT32_MIN;
uint32_t x523 = 0U;
int32_t x540 = INT32_MAX;
volatile int32_t t47 = -8646;
static uint32_t x547 = UINT32_MAX;
static int32_t x623 = INT32_MIN;
static volatile int32_t t52 = -1;
uint16_t x647 = UINT16_MAX;
volatile uint8_t x665 = 1U;
int8_t x666 = INT8_MIN;
volatile int64_t x706 = -9004LL;
volatile uint64_t x708 = 8986LLU;
int32_t t58 = 1238814;
static int32_t x725 = INT32_MIN;
int16_t x731 = 3;
uint32_t x754 = 631874345U;
int8_t x756 = -1;
uint64_t x757 = 13LLU;
volatile int32_t t63 = 1;
uint16_t x775 = UINT16_MAX;
int16_t x776 = -1;
int8_t x783 = INT8_MIN;
volatile int32_t t66 = -1;
static uint32_t x815 = UINT32_MAX;
volatile int32_t t70 = -1990965;
int8_t x822 = INT8_MIN;
uint16_t x828 = 58U;
static volatile int64_t x853 = INT64_MAX;
int32_t t74 = -146;
int64_t x889 = INT64_MIN;
uint32_t x892 = 7U;
int32_t x906 = 6956310;
int16_t x934 = INT16_MIN;
static uint8_t x935 = 14U;
volatile int32_t x939 = -1;
int64_t x943 = INT64_MIN;
static int8_t x944 = 1;
uint16_t x947 = UINT16_MAX;
int8_t x948 = 1;
int64_t x957 = -21761642080746LL;
static uint8_t x958 = 10U;
uint32_t x959 = 24557U;
int32_t x985 = 50266;
volatile int32_t t86 = -97;
static int64_t x1019 = INT64_MIN;
int64_t x1028 = -12831LL;
int32_t t91 = 69809905;
uint8_t x1038 = 8U;
uint8_t x1045 = 61U;
uint8_t x1046 = 13U;
int32_t x1047 = 51886;
uint16_t x1103 = 3U;
volatile int32_t t98 = 334851856;
uint32_t x1116 = 439U;


void f0(void) {
	int64_t x5 = 24644LL;
	static int8_t x6 = 0;
	static volatile int16_t x8 = -1;
	volatile int32_t t0 = 1121578;

	t0 = ((x5<x6)<<(x7%x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x14 = -42466276256685342LL;
	volatile int32_t x15 = 1;
	int32_t t1 = 21370406;

	t1 = ((x13<x14)<<(x15%x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x38 = 27301LLU;
	int8_t x39 = -9;
	uint8_t x40 = 1U;
	volatile int32_t t2 = 229273560;

	t2 = ((x37<x38)<<(x39%x40));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x58 = -21647855LL;
	uint64_t x60 = 437053239LLU;
	volatile int32_t t3 = -536134409;

	t3 = ((x57<x58)<<(x59%x60));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x70 = -1;
	int32_t t4 = 110;

	t4 = ((x69<x70)<<(x71%x72));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x75 = UINT16_MAX;
	static uint8_t x76 = UINT8_MAX;
	int32_t t5 = 10851888;

	t5 = ((x73<x74)<<(x75%x76));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x85 = INT8_MIN;
	uint32_t x86 = 8709U;
	static volatile uint8_t x87 = 1U;
	uint16_t x88 = 194U;
	volatile int32_t t6 = -29;

	t6 = ((x85<x86)<<(x87%x88));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x90 = UINT16_MAX;
	volatile uint16_t x91 = 4U;
	volatile int16_t x92 = INT16_MIN;
	int32_t t7 = -25352456;

	t7 = ((x89<x90)<<(x91%x92));

	if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x113 = UINT64_MAX;
	static uint64_t x114 = 6946329LLU;
	uint32_t x115 = 2U;
	volatile int32_t t8 = 14;

	t8 = ((x113<x114)<<(x115%x116));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x117 = 3;
	uint16_t x118 = 15U;
	volatile int16_t x119 = INT16_MAX;
	int32_t t9 = -4603602;

	t9 = ((x117<x118)<<(x119%x120));

	if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x129 = -1;
	int16_t x130 = -1;
	int8_t x131 = 4;
	static volatile uint16_t x132 = 75U;
	volatile int32_t t10 = -6;

	t10 = ((x129<x130)<<(x131%x132));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x133 = INT64_MAX;
	static int16_t x134 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	static volatile int32_t t11 = 21759;

	t11 = ((x133<x134)<<(x135%x136));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = -49LL;
	static volatile uint16_t x163 = 27U;
	uint32_t x164 = 483290U;

	t12 = ((x161<x162)<<(x163%x164));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x173 = -1114;
	int32_t x174 = INT32_MIN;
	volatile uint16_t x175 = 31U;
	int16_t x176 = 3;
	int32_t t13 = 0;

	t13 = ((x173<x174)<<(x175%x176));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x181 = 0U;
	int16_t x183 = 1;
	uint16_t x184 = UINT16_MAX;
	int32_t t14 = 3771;

	t14 = ((x181<x182)<<(x183%x184));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x197 = 31U;
	volatile uint64_t x199 = 3LLU;
	uint8_t x200 = 16U;

	t15 = ((x197<x198)<<(x199%x200));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x203 = 26LLU;

	t16 = ((x201<x202)<<(x203%x204));

	if (t16 != 67108864) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int64_t x211 = INT64_MIN;
	volatile int16_t x212 = INT16_MIN;
	static int32_t t17 = -18;

	t17 = ((x209<x210)<<(x211%x212));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MAX;
	uint32_t x223 = 6U;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t18 = 707103;

	t18 = ((x221<x222)<<(x223%x224));

	if (t18 != 64) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x229 = -2;
	static int64_t x230 = 37708536LL;
	int8_t x231 = 0;
	int64_t x232 = 127356LL;
	int32_t t19 = 1;

	t19 = ((x229<x230)<<(x231%x232));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x233 = 126906U;
	uint16_t x236 = 1U;
	int32_t t20 = -24928;

	t20 = ((x233<x234)<<(x235%x236));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = 1U;
	volatile int32_t t21 = 1092454;

	t21 = ((x237<x238)<<(x239%x240));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x241 = INT32_MAX;
	volatile int8_t x242 = 43;
	int32_t x243 = INT32_MIN;
	volatile int8_t x244 = INT8_MIN;
	volatile int32_t t22 = -448;

	t22 = ((x241<x242)<<(x243%x244));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x258 = UINT16_MAX;
	uint8_t x259 = UINT8_MAX;

	t23 = ((x257<x258)<<(x259%x260));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x261 = INT8_MAX;
	static uint16_t x262 = 20U;
	static uint8_t x263 = UINT8_MAX;
	int32_t t24 = 75;

	t24 = ((x261<x262)<<(x263%x264));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x289 = -2769463;
	int16_t x291 = 1;
	int32_t x292 = 154997599;
	volatile int32_t t25 = 657;

	t25 = ((x289<x290)<<(x291%x292));

	if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x297 = INT8_MIN;
	uint64_t x298 = 276659922035810LLU;
	static uint64_t x299 = UINT64_MAX;
	int8_t x300 = -4;
	volatile int32_t t26 = -357750643;

	t26 = ((x297<x298)<<(x299%x300));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x305 = 30699U;
	int16_t x306 = 0;
	uint64_t x307 = 28LLU;
	volatile int8_t x308 = INT8_MAX;
	int32_t t27 = -414;

	t27 = ((x305<x306)<<(x307%x308));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x314 = INT64_MAX;
	uint16_t x315 = 7U;
	static int8_t x316 = INT8_MAX;
	volatile int32_t t28 = 152117646;

	t28 = ((x313<x314)<<(x315%x316));

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = 1568U;
	static uint64_t x319 = 1720281129LLU;
	int8_t x320 = 6;
	static int32_t t29 = -252018913;

	t29 = ((x317<x318)<<(x319%x320));

	if (t29 != 8) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x325 = UINT8_MAX;
	static uint64_t x326 = 35348706305587349LLU;
	uint16_t x327 = 4U;
	uint32_t x328 = 20U;

	t30 = ((x325<x326)<<(x327%x328));

	if (t30 != 16) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x341 = -1;
	static int32_t x342 = INT32_MIN;
	uint8_t x344 = 41U;
	volatile int32_t t31 = -1862;

	t31 = ((x341<x342)<<(x343%x344));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x345 = INT64_MAX;
	uint8_t x346 = 61U;
	int16_t x347 = INT16_MIN;
	int64_t x348 = -1LL;
	volatile int32_t t32 = 891379640;

	t32 = ((x345<x346)<<(x347%x348));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x349 = INT16_MIN;
	int32_t x350 = -1;
	int16_t x351 = -1562;
	volatile int32_t t33 = 1;

	t33 = ((x349<x350)<<(x351%x352));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x365 = INT64_MIN;
	static int8_t x367 = 31;
	uint8_t x368 = 1U;

	t34 = ((x365<x366)<<(x367%x368));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x373 = 30U;
	uint8_t x374 = UINT8_MAX;
	uint32_t x376 = 38U;
	int32_t t35 = -482714;

	t35 = ((x373<x374)<<(x375%x376));

	if (t35 != 131072) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x381 = 9LL;
	int32_t x382 = -1;
	uint16_t x383 = 2U;
	uint32_t x384 = 1893667718U;
	volatile int32_t t36 = 6;

	t36 = ((x381<x382)<<(x383%x384));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x393 = INT16_MIN;
	volatile int64_t x394 = INT64_MIN;
	uint8_t x396 = 20U;
	int32_t t37 = 10;

	t37 = ((x393<x394)<<(x395%x396));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x397 = 48616LLU;
	uint32_t x398 = UINT32_MAX;
	static uint8_t x399 = 0U;
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t38 = 1371082;

	t38 = ((x397<x398)<<(x399%x400));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x413 = INT64_MAX;
	int16_t x414 = 3;
	int64_t x415 = 0LL;
	int8_t x416 = 5;
	volatile int32_t t39 = -2958;

	t39 = ((x413<x414)<<(x415%x416));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x417 = 0U;
	uint32_t x418 = UINT32_MAX;
	uint16_t x420 = 13433U;
	static int32_t t40 = -238740763;

	t40 = ((x417<x418)<<(x419%x420));

	if (t40 != 134217728) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x421 = 115U;
	uint16_t x422 = UINT16_MAX;
	volatile uint64_t x423 = 459013585529LLU;
	uint8_t x424 = 1U;
	int32_t t41 = 144825;

	t41 = ((x421<x422)<<(x423%x424));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x449 = 3;
	int8_t x450 = 1;
	int8_t x451 = 26;
	int64_t x452 = INT64_MIN;

	t42 = ((x449<x450)<<(x451%x452));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x457 = -1385875447LL;
	int64_t x458 = INT64_MIN;
	int32_t x460 = -1;
	volatile int32_t t43 = 0;

	t43 = ((x457<x458)<<(x459%x460));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x497 = -1;
	uint64_t x498 = 41973367164LLU;
	volatile int16_t x500 = -15011;
	int32_t t44 = 22;

	t44 = ((x497<x498)<<(x499%x500));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x524 = -1;
	volatile int32_t t45 = -46;

	t45 = ((x521<x522)<<(x523%x524));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x533 = -4;
	uint32_t x534 = 15249U;
	static uint8_t x535 = 27U;
	static int64_t x536 = -1LL;
	volatile int32_t t46 = 183;

	t46 = ((x533<x534)<<(x535%x536));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x537 = UINT8_MAX;
	int64_t x538 = INT64_MAX;
	static volatile int8_t x539 = 15;

	t47 = ((x537<x538)<<(x539%x540));

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x545 = INT64_MAX;
	static int64_t x546 = 205014LL;
	uint8_t x548 = 54U;
	static volatile int32_t t48 = 293040765;

	t48 = ((x545<x546)<<(x547%x548));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x569 = 9U;
	uint16_t x570 = 7U;
	static uint8_t x571 = 11U;
	uint64_t x572 = 115654842322313235LLU;
	static volatile int32_t t49 = -527;

	t49 = ((x569<x570)<<(x571%x572));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x585 = UINT16_MAX;
	static int64_t x586 = 24406705LL;
	uint8_t x587 = 14U;
	static int64_t x588 = -1888178LL;
	static volatile int32_t t50 = -7460;

	t50 = ((x585<x586)<<(x587%x588));

	if (t50 != 16384) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x597 = 0LLU;
	volatile int32_t x598 = INT32_MIN;
	uint32_t x599 = 14898477U;
	static uint64_t x600 = 23LLU;
	int32_t t51 = 92873;

	t51 = ((x597<x598)<<(x599%x600));

	if (t51 != 1048576) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x621 = -1;
	int8_t x622 = -5;
	int8_t x624 = -1;

	t52 = ((x621<x622)<<(x623%x624));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x645 = 27664601091592LL;
	static volatile uint8_t x646 = UINT8_MAX;
	uint16_t x648 = UINT16_MAX;
	volatile int32_t t53 = 5974925;

	t53 = ((x645<x646)<<(x647%x648));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x649 = -6;
	int8_t x650 = -59;
	uint16_t x651 = 4U;
	int64_t x652 = 2231132871758950LL;
	volatile int32_t t54 = 0;

	t54 = ((x649<x650)<<(x651%x652));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x661 = INT16_MIN;
	static int64_t x662 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	int64_t x664 = INT64_MIN;
	volatile int32_t t55 = 6;

	t55 = ((x661<x662)<<(x663%x664));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x667 = INT64_MIN;
	static int8_t x668 = INT8_MIN;
	int32_t t56 = -341238;

	t56 = ((x665<x666)<<(x667%x668));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x685 = 29675U;
	static volatile uint16_t x686 = UINT16_MAX;
	uint8_t x687 = 0U;
	uint16_t x688 = 11U;
	int32_t t57 = 0;

	t57 = ((x685<x686)<<(x687%x688));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x705 = -106;
	int8_t x707 = 31;

	t58 = ((x705<x706)<<(x707%x708));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x726 = INT64_MIN;
	uint64_t x727 = UINT64_MAX;
	uint32_t x728 = 16U;
	int32_t t59 = 10957;

	t59 = ((x725<x726)<<(x727%x728));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x729 = UINT32_MAX;
	int16_t x730 = 1;
	static int64_t x732 = 54914671LL;
	volatile int32_t t60 = -1;

	t60 = ((x729<x730)<<(x731%x732));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x733 = -1LL;
	int16_t x734 = -23;
	int32_t x735 = 397296;
	static uint8_t x736 = UINT8_MAX;
	volatile int32_t t61 = -3201018;

	t61 = ((x733<x734)<<(x735%x736));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x753 = 123727519688648507LL;
	static uint16_t x755 = UINT16_MAX;
	int32_t t62 = 3;

	t62 = ((x753<x754)<<(x755%x756));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x758 = INT64_MAX;
	static uint32_t x759 = 59661U;
	uint8_t x760 = 8U;

	t63 = ((x757<x758)<<(x759%x760));

	if (t63 != 32) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x773 = 1990801LLU;
	static int8_t x774 = -1;
	static volatile int32_t t64 = 333713721;

	t64 = ((x773<x774)<<(x775%x776));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x777 = INT8_MIN;
	int8_t x778 = INT8_MIN;
	int32_t x779 = -1;
	int8_t x780 = -1;
	static int32_t t65 = 7;

	t65 = ((x777<x778)<<(x779%x780));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x781 = INT64_MIN;
	uint8_t x782 = UINT8_MAX;
	int16_t x784 = -1;

	t66 = ((x781<x782)<<(x783%x784));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x785 = INT8_MIN;
	static volatile int16_t x786 = -1;
	uint8_t x787 = 1U;
	uint16_t x788 = 916U;
	int32_t t67 = -1566406;

	t67 = ((x785<x786)<<(x787%x788));

	if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x793 = INT64_MAX;
	volatile int32_t x794 = 134100;
	volatile int8_t x795 = INT8_MIN;
	int8_t x796 = INT8_MIN;
	int32_t t68 = -20;

	t68 = ((x793<x794)<<(x795%x796));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x797 = INT16_MIN;
	uint32_t x798 = UINT32_MAX;
	static volatile int8_t x799 = 63;
	volatile uint8_t x800 = 13U;
	int32_t t69 = 18732;

	t69 = ((x797<x798)<<(x799%x800));

	if (t69 != 2048) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x813 = INT16_MAX;
	static int8_t x814 = 4;
	volatile int8_t x816 = INT8_MAX;

	t70 = ((x813<x814)<<(x815%x816));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x821 = 0U;
	uint64_t x823 = UINT64_MAX;
	uint16_t x824 = UINT16_MAX;
	int32_t t71 = -11217;

	t71 = ((x821<x822)<<(x823%x824));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x825 = INT16_MAX;
	int64_t x826 = -1557125LL;
	int32_t x827 = 830;
	volatile int32_t t72 = -62;

	t72 = ((x825<x826)<<(x827%x828));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x854 = -1;
	volatile uint8_t x855 = 1U;
	volatile uint32_t x856 = 125930U;
	int32_t t73 = 17;

	t73 = ((x853<x854)<<(x855%x856));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x869 = 631638626LL;
	uint64_t x870 = 113433LLU;
	uint64_t x871 = UINT64_MAX;
	static uint32_t x872 = 3U;

	t74 = ((x869<x870)<<(x871%x872));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x890 = INT32_MIN;
	int16_t x891 = INT16_MIN;
	int32_t t75 = -21490736;

	t75 = ((x889<x890)<<(x891%x892));

	if (t75 != 8) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x905 = INT8_MIN;
	static int64_t x907 = INT64_MIN;
	int8_t x908 = -1;
	int32_t t76 = -1226;

	t76 = ((x905<x906)<<(x907%x908));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x917 = -7359153;
	int8_t x918 = -1;
	volatile uint16_t x919 = 30U;
	uint8_t x920 = UINT8_MAX;
	int32_t t77 = -38;

	t77 = ((x917<x918)<<(x919%x920));

	if (t77 != 1073741824) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x933 = INT16_MIN;
	int16_t x936 = INT16_MIN;
	int32_t t78 = -2591;

	t78 = ((x933<x934)<<(x935%x936));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x937 = 4688380277746791LL;
	static volatile uint8_t x938 = 29U;
	uint64_t x940 = UINT64_MAX;
	volatile int32_t t79 = 8298930;

	t79 = ((x937<x938)<<(x939%x940));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x941 = 1;
	uint16_t x942 = 85U;
	volatile int32_t t80 = -9;

	t80 = ((x941<x942)<<(x943%x944));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x945 = INT32_MIN;
	int32_t x946 = 2237609;
	int32_t t81 = -1;

	t81 = ((x945<x946)<<(x947%x948));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x960 = 26;
	volatile int32_t t82 = 115360;

	t82 = ((x957<x958)<<(x959%x960));

	if (t82 != 8192) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x973 = UINT32_MAX;
	int64_t x974 = 1995995LL;
	int8_t x975 = 0;
	int8_t x976 = INT8_MIN;
	int32_t t83 = -20497789;

	t83 = ((x973<x974)<<(x975%x976));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x981 = 1;
	int32_t x982 = -1;
	static int32_t x983 = INT32_MIN;
	int16_t x984 = -1;
	int32_t t84 = 205279179;

	t84 = ((x981<x982)<<(x983%x984));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x986 = 11;
	uint32_t x987 = UINT32_MAX;
	volatile uint8_t x988 = UINT8_MAX;
	int32_t t85 = -30701;

	t85 = ((x985<x986)<<(x987%x988));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x989 = 304;
	int8_t x990 = -2;
	int16_t x991 = INT16_MIN;
	int16_t x992 = INT16_MIN;

	t86 = ((x989<x990)<<(x991%x992));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x997 = 9902U;
	static int16_t x998 = 8172;
	uint64_t x999 = UINT64_MAX;
	uint64_t x1000 = UINT64_MAX;
	int32_t t87 = 2;

	t87 = ((x997<x998)<<(x999%x1000));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x1001 = -1;
	static volatile int8_t x1002 = INT8_MIN;
	static uint64_t x1003 = 11LLU;
	int64_t x1004 = INT64_MAX;
	static int32_t t88 = 10180035;

	t88 = ((x1001<x1002)<<(x1003%x1004));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1017 = UINT32_MAX;
	volatile int8_t x1018 = INT8_MIN;
	int16_t x1020 = INT16_MIN;
	volatile int32_t t89 = -359005970;

	t89 = ((x1017<x1018)<<(x1019%x1020));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x1021 = 12558U;
	static uint32_t x1022 = 2473U;
	volatile int64_t x1023 = INT64_MIN;
	volatile int32_t x1024 = -1;
	int32_t t90 = 364035760;

	t90 = ((x1021<x1022)<<(x1023%x1024));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x1025 = 439;
	int32_t x1026 = INT32_MAX;
	uint16_t x1027 = 0U;

	t91 = ((x1025<x1026)<<(x1027%x1028));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x1037 = -57549082693693LL;
	int8_t x1039 = INT8_MAX;
	static uint8_t x1040 = 7U;
	volatile int32_t t92 = 1;

	t92 = ((x1037<x1038)<<(x1039%x1040));

	if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1041 = INT8_MIN;
	int32_t x1042 = -1;
	volatile uint8_t x1043 = 24U;
	volatile uint8_t x1044 = 1U;
	int32_t t93 = -796;

	t93 = ((x1041<x1042)<<(x1043%x1044));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1048 = -1LL;
	int32_t t94 = 15023111;

	t94 = ((x1045<x1046)<<(x1047%x1048));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x1049 = INT32_MIN;
	int8_t x1050 = INT8_MIN;
	uint8_t x1051 = 7U;
	volatile int64_t x1052 = INT64_MAX;
	volatile int32_t t95 = -12909896;

	t95 = ((x1049<x1050)<<(x1051%x1052));

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x1057 = INT16_MIN;
	static int64_t x1058 = INT64_MAX;
	uint16_t x1059 = 13U;
	static int32_t x1060 = -209276;
	volatile int32_t t96 = -26052;

	t96 = ((x1057<x1058)<<(x1059%x1060));

	if (t96 != 8192) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x1085 = INT8_MIN;
	static uint32_t x1086 = 24U;
	int8_t x1087 = INT8_MAX;
	int8_t x1088 = INT8_MAX;
	int32_t t97 = 62775;

	t97 = ((x1085<x1086)<<(x1087%x1088));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x1101 = 475U;
	int8_t x1102 = 9;
	int32_t x1104 = 6730;

	t98 = ((x1101<x1102)<<(x1103%x1104));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1113 = UINT8_MAX;
	uint32_t x1114 = UINT32_MAX;
	uint8_t x1115 = 3U;
	volatile int32_t t99 = 2312;

	t99 = ((x1113<x1114)<<(x1115%x1116));

	if (t99 != 8) { NG(); } else { ; }
	
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

