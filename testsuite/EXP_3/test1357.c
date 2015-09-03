#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 154735;
volatile uint8_t x32 = UINT8_MAX;
int16_t x90 = 27;
static int16_t x92 = INT16_MAX;
volatile int32_t t5 = 2520753;
int64_t x95 = INT64_MIN;
static int32_t t6 = 154;
uint64_t x110 = 2396213360559921762LLU;
volatile uint64_t t7 = 8993LLU;
int16_t x114 = INT16_MIN;
volatile int32_t x116 = -26309212;
static int64_t x157 = -1LL;
int32_t x195 = -7530071;
int16_t x196 = -1;
static int8_t x198 = 35;
static int32_t t17 = -824451;
volatile int64_t x205 = INT64_MAX;
int64_t x225 = 168882524971LL;
int32_t x226 = -191228;
static uint64_t x229 = UINT64_MAX;
static uint16_t x230 = UINT16_MAX;
static uint8_t x237 = UINT8_MAX;
int8_t x239 = -12;
int32_t x242 = INT32_MIN;
int64_t x243 = -1LL;
int8_t x244 = INT8_MAX;
uint32_t t23 = 7270466U;
uint64_t x283 = 899292LLU;
int32_t x306 = 413426;
volatile int64_t x312 = 376227117LL;
static volatile int32_t t29 = 5;
int16_t x315 = INT16_MIN;
int64_t t32 = 1941328865793556552LL;
uint64_t x350 = 1035473146LLU;
uint64_t t33 = 235434LLU;
int32_t x358 = -24;
volatile int8_t x386 = INT8_MIN;
volatile int16_t x387 = INT16_MIN;
uint8_t x413 = UINT8_MAX;
static volatile int8_t x427 = INT8_MAX;
volatile uint64_t x474 = UINT64_MAX;
uint16_t x489 = 55U;
uint16_t x490 = 1U;
static int8_t x491 = INT8_MIN;
volatile uint32_t x493 = UINT32_MAX;
int16_t x518 = INT16_MIN;
int8_t x520 = 0;
uint32_t t50 = 1U;
static uint8_t x555 = 0U;
int64_t x556 = INT64_MAX;
int16_t x573 = INT16_MIN;
int16_t x594 = 0;
uint32_t x596 = UINT32_MAX;
volatile uint32_t t54 = 46074160U;
static uint64_t x601 = UINT64_MAX;
int64_t x613 = INT64_MIN;
uint16_t x621 = 28779U;
static int16_t x622 = INT16_MIN;
int64_t x623 = INT64_MIN;
static volatile int64_t t59 = 3462957133556LL;
volatile int16_t x643 = INT16_MIN;
volatile int32_t x651 = 0;
int32_t t62 = -219270;
int8_t x664 = 3;
volatile uint8_t x665 = 6U;
int32_t t64 = -12282;
uint16_t x677 = 670U;
int64_t x680 = INT64_MAX;
volatile int16_t x685 = -1;
int16_t x691 = -4260;
int64_t x692 = 3371155229329549823LL;
int8_t x702 = 1;
volatile int32_t x730 = -316290789;
int64_t x735 = INT64_MIN;
int64_t x738 = -1LL;
int64_t t76 = 5225132896411LL;
volatile int32_t t77 = -98691;
uint64_t x835 = 8216837LLU;
volatile int32_t t80 = -1701;
uint64_t x845 = 0LLU;
int8_t x848 = 0;
uint64_t t81 = 908731186LLU;
uint8_t x872 = 6U;
int64_t t84 = -204582LL;
uint32_t x873 = UINT32_MAX;
int32_t x879 = INT32_MIN;
static uint8_t x880 = 14U;
static int32_t t86 = -61914946;
int8_t x881 = INT8_MIN;
int64_t x884 = INT64_MAX;
volatile int32_t t87 = -1;
uint64_t x887 = 277442751685243LLU;
static int8_t x893 = 12;
volatile int32_t t89 = -22674;
int8_t x898 = 32;
int8_t x905 = -1;
volatile int32_t x907 = INT32_MIN;
uint64_t x921 = 1825800LLU;
int8_t x932 = -31;
static volatile int32_t t94 = -594;
uint32_t x934 = UINT32_MAX;
uint8_t x935 = 0U;
uint32_t t95 = 80U;
int32_t x968 = 2833;
static volatile uint8_t x977 = UINT8_MAX;
volatile int16_t x979 = -862;


void f0(void) {
	int16_t x13 = INT16_MAX;
	int8_t x14 = INT8_MIN;
	static uint64_t x15 = 24LLU;
	int32_t x16 = INT32_MIN;

	t0 = ((x13+x14)%(x15<x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x21 = UINT32_MAX;
	static int16_t x22 = -1;
	static int8_t x23 = -1;
	uint16_t x24 = UINT16_MAX;
	volatile uint32_t t1 = 3U;

	t1 = ((x21+x22)%(x23<x24));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x29 = INT32_MIN;
	static int64_t x30 = INT64_MAX;
	uint8_t x31 = 3U;
	int64_t t2 = 443981026946939829LL;

	t2 = ((x29+x30)%(x31<x32));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x65 = INT16_MIN;
	static int8_t x66 = -1;
	volatile int64_t x67 = -1LL;
	uint16_t x68 = 2495U;
	int32_t t3 = 2979970;

	t3 = ((x65+x66)%(x67<x68));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x81 = UINT64_MAX;
	int32_t x82 = 297745;
	volatile int8_t x83 = INT8_MIN;
	int64_t x84 = -5LL;
	static uint64_t t4 = 223257084353LLU;

	t4 = ((x81+x82)%(x83<x84));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x89 = INT32_MIN;
	int32_t x91 = 156;

	t5 = ((x89+x90)%(x91<x92));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x93 = INT32_MIN;
	static int16_t x94 = INT16_MAX;
	int16_t x96 = -915;

	t6 = ((x93+x94)%(x95<x96));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x109 = 1;
	int8_t x111 = INT8_MAX;
	static uint16_t x112 = UINT16_MAX;

	t7 = ((x109+x110)%(x111<x112));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x113 = INT16_MIN;
	int32_t x115 = INT32_MIN;
	volatile int32_t t8 = 17644;

	t8 = ((x113+x114)%(x115<x116));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x121 = 504LL;
	int32_t x122 = INT32_MIN;
	uint8_t x123 = UINT8_MAX;
	uint32_t x124 = 677U;
	volatile int64_t t9 = 131499662550502LL;

	t9 = ((x121+x122)%(x123<x124));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x125 = UINT8_MAX;
	int8_t x126 = -1;
	uint8_t x127 = 1U;
	int64_t x128 = 280018290741LL;
	volatile int32_t t10 = -13885;

	t10 = ((x125+x126)%(x127<x128));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	int32_t x136 = INT32_MAX;
	volatile int32_t t11 = 96;

	t11 = ((x133+x134)%(x135<x136));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x153 = 123U;
	int64_t x154 = 59163LL;
	uint8_t x155 = 13U;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t12 = 30501165LL;

	t12 = ((x153+x154)%(x155<x156));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x158 = UINT16_MAX;
	static uint64_t x159 = 2374696503LLU;
	static volatile int32_t x160 = INT32_MIN;
	int64_t t13 = 637LL;

	t13 = ((x157+x158)%(x159<x160));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MAX;
	static int64_t x175 = INT64_MIN;
	int64_t x176 = INT64_MAX;
	int32_t t14 = 51;

	t14 = ((x173+x174)%(x175<x176));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x189 = INT8_MIN;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -4738;
	volatile int16_t x192 = 116;
	volatile int32_t t15 = -100;

	t15 = ((x189+x190)%(x191<x192));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x193 = INT64_MAX;
	int32_t x194 = INT32_MIN;
	static int64_t t16 = 4123883403LL;

	t16 = ((x193+x194)%(x195<x196));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x197 = 2;
	static int64_t x199 = -7902493685LL;
	int32_t x200 = -88;

	t17 = ((x197+x198)%(x199<x200));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x206 = -11326151383948312LL;
	volatile int64_t x207 = -1LL;
	int32_t x208 = INT32_MAX;
	int64_t t18 = -1885656221LL;

	t18 = ((x205+x206)%(x207<x208));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x227 = INT16_MIN;
	uint16_t x228 = 8U;
	static volatile int64_t t19 = 2LL;

	t19 = ((x225+x226)%(x227<x228));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MAX;
	volatile uint64_t t20 = 10188LLU;

	t20 = ((x229+x230)%(x231<x232));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x238 = INT32_MIN;
	int8_t x240 = 16;
	static int32_t t21 = -1;

	t21 = ((x237+x238)%(x239<x240));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x241 = 350U;
	volatile int32_t t22 = -518150;

	t22 = ((x241+x242)%(x243<x244));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x265 = 18U;
	uint32_t x266 = 69500U;
	static int64_t x267 = -1LL;
	int32_t x268 = INT32_MAX;

	t23 = ((x265+x266)%(x267<x268));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x281 = INT16_MIN;
	static int8_t x282 = INT8_MIN;
	volatile int16_t x284 = INT16_MIN;
	static volatile int32_t t24 = 1022;

	t24 = ((x281+x282)%(x283<x284));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x289 = UINT32_MAX;
	int32_t x290 = -1;
	volatile int8_t x291 = INT8_MAX;
	uint32_t x292 = 1360999U;
	uint32_t t25 = 32452266U;

	t25 = ((x289+x290)%(x291<x292));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x297 = INT32_MAX;
	int64_t x298 = INT64_MIN;
	int8_t x299 = INT8_MIN;
	static volatile int16_t x300 = -1;
	volatile int64_t t26 = -9239983956053LL;

	t26 = ((x297+x298)%(x299<x300));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x301 = 139327590481471LLU;
	uint8_t x302 = 2U;
	uint64_t x303 = 1393069902496198LLU;
	static int32_t x304 = INT32_MIN;
	static volatile uint64_t t27 = 111566LLU;

	t27 = ((x301+x302)%(x303<x304));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x305 = 65964501575LLU;
	static volatile int32_t x307 = INT32_MIN;
	int8_t x308 = 0;
	volatile uint64_t t28 = 110627567LLU;

	t28 = ((x305+x306)%(x307<x308));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x309 = INT8_MAX;
	static int32_t x310 = INT32_MIN;
	static int64_t x311 = -532LL;

	t29 = ((x309+x310)%(x311<x312));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x313 = INT16_MIN;
	static int8_t x314 = INT8_MIN;
	static uint16_t x316 = UINT16_MAX;
	static volatile int32_t t30 = 486376388;

	t30 = ((x313+x314)%(x315<x316));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x317 = INT16_MIN;
	static int8_t x318 = -1;
	int8_t x319 = -7;
	uint8_t x320 = UINT8_MAX;
	static volatile int32_t t31 = -68961;

	t31 = ((x317+x318)%(x319<x320));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x341 = -1LL;
	static volatile int32_t x342 = INT32_MIN;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MAX;

	t32 = ((x341+x342)%(x343<x344));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x349 = 125U;
	uint32_t x351 = 38354123U;
	int64_t x352 = 3555812951113482LL;

	t33 = ((x349+x350)%(x351<x352));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x353 = UINT8_MAX;
	volatile int64_t x354 = INT64_MIN;
	int8_t x355 = INT8_MIN;
	static uint8_t x356 = 3U;
	volatile int64_t t34 = 11377LL;

	t34 = ((x353+x354)%(x355<x356));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x357 = 3852U;
	int32_t x359 = INT32_MIN;
	int32_t x360 = 113;
	int32_t t35 = -4;

	t35 = ((x357+x358)%(x359<x360));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x361 = -1;
	uint64_t x362 = UINT64_MAX;
	static uint8_t x363 = 85U;
	int8_t x364 = INT8_MAX;
	volatile uint64_t t36 = 62547606LLU;

	t36 = ((x361+x362)%(x363<x364));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x377 = 7649191LLU;
	static uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = INT32_MIN;
	uint8_t x380 = 4U;
	volatile uint64_t t37 = 4628050LLU;

	t37 = ((x377+x378)%(x379<x380));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x385 = -1;
	volatile uint8_t x388 = 98U;
	static volatile int32_t t38 = 4;

	t38 = ((x385+x386)%(x387<x388));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x414 = INT32_MIN;
	int64_t x415 = -8818654319LL;
	int32_t x416 = -1;
	volatile int32_t t39 = 0;

	t39 = ((x413+x414)%(x415<x416));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x425 = INT16_MAX;
	int8_t x426 = INT8_MIN;
	uint16_t x428 = 6188U;
	volatile int32_t t40 = -4751;

	t40 = ((x425+x426)%(x427<x428));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x461 = -1;
	uint8_t x462 = 6U;
	int32_t x463 = -1;
	int8_t x464 = 1;
	int32_t t41 = 29632637;

	t41 = ((x461+x462)%(x463<x464));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x469 = 33;
	volatile int16_t x470 = -143;
	int64_t x471 = INT64_MIN;
	uint32_t x472 = 10U;
	static volatile int32_t t42 = 10751325;

	t42 = ((x469+x470)%(x471<x472));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x473 = INT32_MIN;
	static int8_t x475 = INT8_MIN;
	static volatile int8_t x476 = -1;
	uint64_t t43 = 345526667LLU;

	t43 = ((x473+x474)%(x475<x476));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x477 = UINT8_MAX;
	static int8_t x478 = 1;
	int32_t x479 = INT32_MIN;
	static uint8_t x480 = UINT8_MAX;
	volatile int32_t t44 = -497633740;

	t44 = ((x477+x478)%(x479<x480));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x492 = INT8_MAX;
	int32_t t45 = -7792;

	t45 = ((x489+x490)%(x491<x492));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x494 = 285U;
	static int16_t x495 = INT16_MIN;
	int16_t x496 = INT16_MAX;
	uint32_t t46 = 11U;

	t46 = ((x493+x494)%(x495<x496));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x505 = 0U;
	uint8_t x506 = 2U;
	static int64_t x507 = INT64_MIN;
	int16_t x508 = INT16_MIN;
	volatile uint32_t t47 = 12344248U;

	t47 = ((x505+x506)%(x507<x508));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x513 = 26U;
	int8_t x514 = -9;
	uint32_t x515 = 16812U;
	volatile int32_t x516 = INT32_MAX;
	static volatile int32_t t48 = -8479;

	t48 = ((x513+x514)%(x515<x516));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x517 = 0U;
	static int8_t x519 = -1;
	volatile int32_t t49 = 3;

	t49 = ((x517+x518)%(x519<x520));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x537 = 39124;
	static uint32_t x538 = 2342U;
	uint64_t x539 = 992495227845552717LLU;
	static int64_t x540 = INT64_MAX;

	t50 = ((x537+x538)%(x539<x540));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x541 = 3389U;
	int16_t x542 = INT16_MIN;
	uint32_t x543 = 916695U;
	uint32_t x544 = 466215624U;
	static int32_t t51 = -4113;

	t51 = ((x541+x542)%(x543<x544));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x553 = UINT8_MAX;
	volatile uint16_t x554 = UINT16_MAX;
	volatile int32_t t52 = -15452493;

	t52 = ((x553+x554)%(x555<x556));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x574 = INT8_MIN;
	int32_t x575 = 1;
	int16_t x576 = 4465;
	volatile int32_t t53 = 2283500;

	t53 = ((x573+x574)%(x575<x576));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x593 = 300U;
	static volatile int8_t x595 = INT8_MAX;

	t54 = ((x593+x594)%(x595<x596));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x602 = 0;
	static volatile int8_t x603 = -7;
	static uint16_t x604 = 10U;
	uint64_t t55 = 1905LLU;

	t55 = ((x601+x602)%(x603<x604));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x614 = INT8_MAX;
	volatile int64_t x615 = INT64_MIN;
	int64_t x616 = -1LL;
	int64_t t56 = 10827788371573LL;

	t56 = ((x613+x614)%(x615<x616));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x617 = INT64_MAX;
	int8_t x618 = -25;
	int16_t x619 = -1713;
	static int16_t x620 = -1;
	volatile int64_t t57 = -13855326LL;

	t57 = ((x617+x618)%(x619<x620));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x624 = -4LL;
	volatile int32_t t58 = -15;

	t58 = ((x621+x622)%(x623<x624));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x637 = INT16_MIN;
	int64_t x638 = 4LL;
	uint64_t x639 = 16LLU;
	uint64_t x640 = 233729381343774006LLU;

	t59 = ((x637+x638)%(x639<x640));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x641 = UINT8_MAX;
	int32_t x642 = INT32_MIN;
	uint16_t x644 = UINT16_MAX;
	int32_t t60 = -1;

	t60 = ((x641+x642)%(x643<x644));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x649 = 34U;
	int8_t x650 = -1;
	int32_t x652 = 73677464;
	volatile uint32_t t61 = 7U;

	t61 = ((x649+x650)%(x651<x652));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x657 = UINT8_MAX;
	int32_t x658 = INT32_MIN;
	int64_t x659 = INT64_MIN;
	uint32_t x660 = 15536185U;

	t62 = ((x657+x658)%(x659<x660));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x661 = 204U;
	int16_t x662 = -303;
	static int64_t x663 = -1LL;
	volatile uint32_t t63 = 37081U;

	t63 = ((x661+x662)%(x663<x664));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x666 = UINT16_MAX;
	static int32_t x667 = INT32_MIN;
	static int64_t x668 = 43798576367757LL;

	t64 = ((x665+x666)%(x667<x668));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x678 = 1775931170694LL;
	uint16_t x679 = 2U;
	volatile int64_t t65 = -12LL;

	t65 = ((x677+x678)%(x679<x680));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x681 = INT16_MIN;
	volatile int16_t x682 = -1;
	static uint8_t x683 = 0U;
	uint16_t x684 = 2U;
	volatile int32_t t66 = -697330243;

	t66 = ((x681+x682)%(x683<x684));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x686 = 121U;
	int32_t x687 = -1925768;
	uint8_t x688 = 52U;
	static volatile int32_t t67 = -429314;

	t67 = ((x685+x686)%(x687<x688));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x689 = INT8_MAX;
	static uint32_t x690 = 1203903404U;
	static uint32_t t68 = 6U;

	t68 = ((x689+x690)%(x691<x692));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x701 = INT32_MIN;
	static int64_t x703 = -13436LL;
	volatile uint8_t x704 = UINT8_MAX;
	int32_t t69 = -723135;

	t69 = ((x701+x702)%(x703<x704));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x729 = UINT16_MAX;
	volatile int8_t x731 = 0;
	int64_t x732 = 355738737466951528LL;
	volatile int32_t t70 = 551;

	t70 = ((x729+x730)%(x731<x732));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x733 = UINT8_MAX;
	uint32_t x734 = 65U;
	int8_t x736 = INT8_MIN;
	volatile uint32_t t71 = 393U;

	t71 = ((x733+x734)%(x735<x736));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x737 = INT16_MAX;
	static volatile int16_t x739 = -1;
	int16_t x740 = INT16_MAX;
	volatile int64_t t72 = 1905255817914LL;

	t72 = ((x737+x738)%(x739<x740));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x741 = INT8_MIN;
	uint16_t x742 = 1413U;
	int8_t x743 = INT8_MIN;
	int8_t x744 = -1;
	volatile int32_t t73 = -558;

	t73 = ((x741+x742)%(x743<x744));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x745 = 1;
	uint32_t x746 = 1632490983U;
	int32_t x747 = INT32_MIN;
	volatile int8_t x748 = 4;
	static volatile uint32_t t74 = 779246U;

	t74 = ((x745+x746)%(x747<x748));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x749 = 1;
	uint32_t x750 = 6759U;
	static uint32_t x751 = 1247937U;
	volatile int32_t x752 = -6953;
	volatile uint32_t t75 = 1766622U;

	t75 = ((x749+x750)%(x751<x752));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x773 = UINT32_MAX;
	int64_t x774 = 1244LL;
	static uint8_t x775 = 14U;
	static int32_t x776 = INT32_MAX;

	t76 = ((x773+x774)%(x775<x776));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x777 = -565;
	uint8_t x778 = UINT8_MAX;
	int8_t x779 = 0;
	int32_t x780 = 1402;

	t77 = ((x777+x778)%(x779<x780));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x805 = 1466125;
	int8_t x806 = 0;
	int16_t x807 = -31;
	int64_t x808 = 1475937LL;
	volatile int32_t t78 = 48593821;

	t78 = ((x805+x806)%(x807<x808));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x825 = 29360886U;
	uint16_t x826 = 4252U;
	volatile uint8_t x827 = 1U;
	uint32_t x828 = 13U;
	volatile uint32_t t79 = 5U;

	t79 = ((x825+x826)%(x827<x828));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x833 = INT16_MAX;
	uint16_t x834 = 1U;
	static int8_t x836 = INT8_MIN;

	t80 = ((x833+x834)%(x835<x836));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x846 = 435787LLU;
	int16_t x847 = INT16_MIN;

	t81 = ((x845+x846)%(x847<x848));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x853 = 6U;
	uint16_t x854 = 205U;
	static uint64_t x855 = 1661760704772LLU;
	static int64_t x856 = INT64_MIN;
	int32_t t82 = 378263270;

	t82 = ((x853+x854)%(x855<x856));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x857 = -79945;
	int64_t x858 = 27837LL;
	uint32_t x859 = 332U;
	int16_t x860 = INT16_MIN;
	int64_t t83 = 8378364401LL;

	t83 = ((x857+x858)%(x859<x860));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x869 = INT8_MAX;
	int64_t x870 = 458978134785414LL;
	int64_t x871 = -1LL;

	t84 = ((x869+x870)%(x871<x872));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x874 = 68317186U;
	int64_t x875 = INT64_MIN;
	static int32_t x876 = INT32_MIN;
	static uint32_t t85 = 621269933U;

	t85 = ((x873+x874)%(x875<x876));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x877 = -1;
	int32_t x878 = 82802;

	t86 = ((x877+x878)%(x879<x880));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x882 = 1U;
	uint64_t x883 = 102523LLU;

	t87 = ((x881+x882)%(x883<x884));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x885 = -1;
	int8_t x886 = INT8_MIN;
	static int8_t x888 = -1;
	volatile int32_t t88 = -1736;

	t88 = ((x885+x886)%(x887<x888));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x894 = -1;
	int32_t x895 = INT32_MIN;
	volatile int16_t x896 = -1;

	t89 = ((x893+x894)%(x895<x896));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x897 = UINT16_MAX;
	static volatile uint64_t x899 = 10201119LLU;
	volatile int32_t x900 = -480205;
	static volatile int32_t t90 = 1;

	t90 = ((x897+x898)%(x899<x900));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x906 = 41U;
	uint16_t x908 = 1U;
	volatile uint32_t t91 = 532952714U;

	t91 = ((x905+x906)%(x907<x908));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x913 = INT64_MIN;
	static uint32_t x914 = 54244349U;
	int8_t x915 = INT8_MIN;
	static uint16_t x916 = UINT16_MAX;
	volatile int64_t t92 = 917864064656LL;

	t92 = ((x913+x914)%(x915<x916));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x922 = INT16_MIN;
	volatile int8_t x923 = INT8_MIN;
	int64_t x924 = 63LL;
	uint64_t t93 = 7887490443LLU;

	t93 = ((x921+x922)%(x923<x924));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x929 = 0;
	volatile int32_t x930 = 779923608;
	static uint32_t x931 = 3679986U;

	t94 = ((x929+x930)%(x931<x932));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x933 = UINT8_MAX;
	uint8_t x936 = 1U;

	t95 = ((x933+x934)%(x935<x936));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x949 = 2073702268LL;
	static volatile int64_t x950 = -3914381LL;
	uint64_t x951 = 29912322479LLU;
	volatile int64_t x952 = INT64_MIN;
	volatile int64_t t96 = -201378590LL;

	t96 = ((x949+x950)%(x951<x952));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x965 = 3U;
	static volatile int32_t x966 = -1;
	uint8_t x967 = 11U;
	static int32_t t97 = 49079555;

	t97 = ((x965+x966)%(x967<x968));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x969 = -4773384;
	static uint32_t x970 = 555U;
	int32_t x971 = -11657;
	int64_t x972 = INT64_MAX;
	uint32_t t98 = 5247193U;

	t98 = ((x969+x970)%(x971<x972));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x978 = INT16_MAX;
	int8_t x980 = -1;
	int32_t t99 = 6617;

	t99 = ((x977+x978)%(x979<x980));

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

