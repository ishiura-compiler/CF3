#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = INT16_MIN;
volatile int32_t t2 = -3;
int32_t t3 = 1012462615;
int32_t x37 = -1;
int8_t x42 = 1;
volatile uint32_t x43 = UINT32_MAX;
static volatile uint64_t t6 = 1990495LLU;
volatile int32_t t7 = -1;
static int8_t x73 = INT8_MIN;
static volatile int16_t x78 = INT16_MIN;
int32_t t10 = -1803;
uint8_t x97 = 8U;
static int32_t t12 = 934;
int16_t x105 = INT16_MIN;
volatile int8_t x106 = INT8_MAX;
static volatile int8_t x107 = -3;
uint32_t x109 = 1304066U;
static int16_t x112 = 3212;
int64_t x148 = INT64_MAX;
uint16_t x156 = UINT16_MAX;
int16_t x161 = INT16_MIN;
int8_t x165 = -1;
int64_t x168 = 142LL;
uint32_t x187 = 70392893U;
volatile uint32_t t24 = 446657U;
int32_t x198 = INT32_MIN;
volatile uint64_t x201 = 1832825LLU;
int32_t x209 = 11897;
int32_t t27 = -390050;
volatile int64_t x218 = INT64_MIN;
uint32_t x220 = 3152886U;
int32_t t28 = 14597730;
volatile uint64_t x232 = 1923409713LLU;
volatile int32_t x244 = -1;
int32_t t31 = 308442965;
static int8_t x245 = 2;
volatile int32_t t32 = 6;
int8_t x257 = 0;
uint16_t x259 = UINT16_MAX;
uint16_t x274 = 1822U;
int16_t x282 = -5;
int64_t x293 = INT64_MIN;
int8_t x313 = INT8_MIN;
int8_t x369 = INT8_MAX;
uint64_t x371 = UINT64_MAX;
static int64_t x387 = -1LL;
static uint32_t x388 = 15968787U;
int32_t t45 = 825612;
int64_t x426 = INT64_MIN;
volatile int32_t t46 = 121;
static volatile uint8_t x433 = UINT8_MAX;
int16_t x434 = INT16_MIN;
volatile int64_t x451 = -2LL;
static int16_t x459 = -1;
int8_t x468 = INT8_MAX;
int64_t x478 = -1260594136005686446LL;
volatile int32_t t54 = 89;
int32_t x518 = 4340;
static int64_t t57 = 537032148626511LL;
int32_t x522 = -120;
int16_t x531 = 6;
int8_t x557 = 0;
int8_t x558 = -1;
int32_t x585 = INT32_MIN;
int64_t x586 = -1LL;
int16_t x599 = 1374;
volatile uint16_t x609 = 846U;
int32_t t67 = -31;
int64_t x614 = INT64_MIN;
uint32_t x616 = UINT32_MAX;
int8_t x618 = 0;
uint64_t x644 = UINT64_MAX;
volatile int32_t t71 = 59;
int8_t x658 = 1;
int8_t x660 = INT8_MIN;
int8_t x673 = INT8_MIN;
int64_t x674 = INT64_MIN;
int16_t x675 = INT16_MIN;
static int32_t t73 = -17747;
int32_t x681 = -21;
int16_t x690 = -403;
static volatile int32_t x691 = 194;
int8_t x692 = INT8_MIN;
int32_t x716 = INT32_MIN;
static volatile int64_t t79 = 304245725574LL;
uint8_t x731 = 2U;
int8_t x737 = INT8_MIN;
int16_t x738 = INT16_MIN;
volatile int32_t t83 = -627162;
uint8_t x743 = UINT8_MAX;
static uint16_t x745 = 8U;
static int8_t x746 = -2;
volatile int8_t x758 = -1;
volatile int32_t x771 = INT32_MIN;
int32_t x789 = INT32_MAX;
volatile uint16_t x811 = UINT16_MAX;
static volatile int64_t x828 = -1LL;
uint64_t t94 = 5207676398380595002LLU;
static int8_t x834 = INT8_MIN;
static int32_t t95 = -805021;
static int16_t x845 = -1;
volatile int16_t x850 = INT16_MIN;
int16_t x851 = INT16_MAX;
uint8_t x861 = UINT8_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int32_t x2 = -26;
	uint16_t x3 = 160U;
	volatile int32_t t0 = 0;

	t0 = (x1%(x2<(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x21 = 918240024LLU;
	int64_t x22 = INT64_MIN;
	uint16_t x23 = 231U;
	int64_t x24 = INT64_MAX;
	volatile uint64_t t1 = 18307LLU;

	t1 = (x21%(x22<(x23&x24)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x25 = INT32_MAX;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MAX;
	volatile int16_t x28 = 40;

	t2 = (x25%(x26<(x27&x28)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x33 = INT32_MAX;
	volatile int64_t x34 = -1LL;
	uint32_t x35 = 534943U;
	int16_t x36 = INT16_MAX;

	t3 = (x33%(x34<(x35&x36)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x38 = INT64_MIN;
	static volatile int16_t x39 = 10;
	int8_t x40 = 3;
	int32_t t4 = 198529;

	t4 = (x37%(x38<(x39&x40)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x41 = -1;
	int16_t x44 = 8549;
	int32_t t5 = 228;

	t5 = (x41%(x42<(x43&x44)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x53 = 152LLU;
	int8_t x54 = 0;
	int16_t x55 = INT16_MAX;
	uint16_t x56 = UINT16_MAX;

	t6 = (x53%(x54<(x55&x56)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x61 = INT16_MIN;
	uint32_t x62 = 270U;
	int32_t x63 = INT32_MIN;
	int16_t x64 = -241;

	t7 = (x61%(x62<(x63&x64)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x69 = 30302U;
	int64_t x70 = INT64_MIN;
	static int16_t x71 = -119;
	int32_t x72 = INT32_MAX;
	static volatile int32_t t8 = 211508582;

	t8 = (x69%(x70<(x71&x72)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x74 = 12269U;
	volatile int8_t x75 = -3;
	int32_t x76 = 251724;
	volatile int32_t t9 = 8573;

	t9 = (x73%(x74<(x75&x76)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x77 = INT8_MIN;
	int32_t x79 = INT32_MAX;
	volatile int16_t x80 = 734;

	t10 = (x77%(x78<(x79&x80)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x81 = -1;
	static int64_t x82 = INT64_MIN;
	int32_t x83 = -10594;
	uint16_t x84 = 127U;
	int32_t t11 = 52834;

	t11 = (x81%(x82<(x83&x84)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x98 = -1;
	volatile int32_t x99 = 248473;
	uint16_t x100 = UINT16_MAX;

	t12 = (x97%(x98<(x99&x100)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x108 = UINT8_MAX;
	static int32_t t13 = -1725576;

	t13 = (x105%(x106<(x107&x108)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x110 = -2156834356777420LL;
	int32_t x111 = INT32_MAX;
	volatile uint32_t t14 = 821U;

	t14 = (x109%(x110<(x111&x112)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x117 = -1;
	int16_t x118 = 179;
	volatile uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MIN;
	int32_t t15 = 12;

	t15 = (x117%(x118<(x119&x120)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x129 = -2600;
	int8_t x130 = -15;
	volatile uint16_t x131 = UINT16_MAX;
	static int16_t x132 = INT16_MIN;
	int32_t t16 = 127644339;

	t16 = (x129%(x130<(x131&x132)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x133 = -1LL;
	int32_t x134 = INT32_MIN;
	static int32_t x135 = -18841252;
	uint16_t x136 = 5U;
	volatile int64_t t17 = 203258594380133LL;

	t17 = (x133%(x134<(x135&x136)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = INT32_MIN;
	uint16_t x147 = UINT16_MAX;
	static int32_t t18 = -23;

	t18 = (x145%(x146<(x147&x148)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x153 = 67U;
	static int32_t x154 = 325;
	static int16_t x155 = INT16_MIN;
	int32_t t19 = 11;

	t19 = (x153%(x154<(x155&x156)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x162 = 2U;
	int32_t x163 = INT32_MAX;
	int16_t x164 = -9;
	int32_t t20 = 12514;

	t20 = (x161%(x162<(x163&x164)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x166 = 0;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t t21 = -7205;

	t21 = (x165%(x166<(x167&x168)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x173 = -1754;
	volatile int8_t x174 = 0;
	int8_t x175 = -1;
	int16_t x176 = 2;
	int32_t t22 = 11855;

	t22 = (x173%(x174<(x175&x176)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x181 = 7;
	int64_t x182 = -5040LL;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t23 = -390496886;

	t23 = (x181%(x182<(x183&x184)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x185 = 6787893U;
	uint8_t x186 = 26U;
	static uint8_t x188 = UINT8_MAX;

	t24 = (x185%(x186<(x187&x188)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x197 = 272670609980LLU;
	int8_t x199 = 0;
	static int32_t x200 = INT32_MAX;
	uint64_t t25 = 430921369960LLU;

	t25 = (x197%(x198<(x199&x200)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x202 = INT64_MIN;
	static int16_t x203 = 0;
	volatile uint32_t x204 = 15U;
	volatile uint64_t t26 = 32188230849616LLU;

	t26 = (x201%(x202<(x203&x204)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x210 = 141U;
	int16_t x211 = INT16_MIN;
	int16_t x212 = INT16_MIN;

	t27 = (x209%(x210<(x211&x212)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x217 = 3U;
	volatile int16_t x219 = -12;

	t28 = (x217%(x218<(x219&x220)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x229 = UINT16_MAX;
	volatile uint32_t x230 = 42078697U;
	int32_t x231 = INT32_MAX;
	int32_t t29 = 130;

	t29 = (x229%(x230<(x231&x232)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x233 = INT16_MIN;
	int16_t x234 = 8;
	int32_t x235 = -198;
	int64_t x236 = INT64_MAX;
	static volatile int32_t t30 = -353025;

	t30 = (x233%(x234<(x235&x236)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x241 = 1;
	static uint8_t x242 = UINT8_MAX;
	static uint16_t x243 = 298U;

	t31 = (x241%(x242<(x243&x244)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x246 = INT16_MAX;
	int8_t x247 = -1;
	int32_t x248 = INT32_MAX;

	t32 = (x245%(x246<(x247&x248)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x249 = 10U;
	static volatile int32_t x250 = INT32_MIN;
	volatile int8_t x251 = -1;
	static int8_t x252 = -1;
	int32_t t33 = -1572;

	t33 = (x249%(x250<(x251&x252)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -1;
	int32_t x256 = 20893;
	static volatile int32_t t34 = 10;

	t34 = (x253%(x254<(x255&x256)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x258 = INT8_MIN;
	int64_t x260 = 269990998937675334LL;
	int32_t t35 = 0;

	t35 = (x257%(x258<(x259&x260)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x273 = 110;
	volatile int8_t x275 = INT8_MIN;
	static volatile int16_t x276 = INT16_MAX;
	static int32_t t36 = 257925050;

	t36 = (x273%(x274<(x275&x276)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x281 = -1LL;
	int16_t x283 = -1;
	uint32_t x284 = UINT32_MAX;
	int64_t t37 = -2855374LL;

	t37 = (x281%(x282<(x283&x284)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x294 = -1LL;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = INT8_MAX;
	volatile int64_t t38 = 13481113616LL;

	t38 = (x293%(x294<(x295&x296)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x314 = -13783267544LL;
	volatile int8_t x315 = -3;
	int64_t x316 = -1LL;
	int32_t t39 = 27015756;

	t39 = (x313%(x314<(x315&x316)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x325 = UINT16_MAX;
	int16_t x326 = 3;
	static uint32_t x327 = UINT32_MAX;
	uint64_t x328 = 1171242964886535456LLU;
	int32_t t40 = 256524;

	t40 = (x325%(x326<(x327&x328)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x329 = 0;
	static int16_t x330 = INT16_MIN;
	int16_t x331 = -1;
	volatile int32_t x332 = INT32_MAX;
	static volatile int32_t t41 = 7;

	t41 = (x329%(x330<(x331&x332)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x333 = 192U;
	int32_t x334 = INT32_MIN;
	uint8_t x335 = 0U;
	int16_t x336 = INT16_MAX;
	volatile int32_t t42 = -58;

	t42 = (x333%(x334<(x335&x336)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x370 = 31LLU;
	int8_t x372 = INT8_MAX;
	volatile int32_t t43 = 0;

	t43 = (x369%(x370<(x371&x372)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x381 = 720829U;
	static volatile uint8_t x382 = UINT8_MAX;
	static int32_t x383 = -1;
	volatile int32_t x384 = INT32_MAX;
	uint32_t t44 = 1U;

	t44 = (x381%(x382<(x383&x384)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x385 = INT32_MIN;
	int8_t x386 = -10;

	t45 = (x385%(x386<(x387&x388)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x425 = INT16_MIN;
	static int8_t x427 = INT8_MAX;
	static int16_t x428 = -1;

	t46 = (x425%(x426<(x427&x428)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x435 = -1;
	static int8_t x436 = INT8_MIN;
	int32_t t47 = 61414;

	t47 = (x433%(x434<(x435&x436)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x449 = -7152;
	uint64_t x450 = 3796909454LLU;
	uint32_t x452 = UINT32_MAX;
	int32_t t48 = 2757;

	t48 = (x449%(x450<(x451&x452)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x457 = -1;
	volatile uint64_t x458 = 6LLU;
	int8_t x460 = -1;
	volatile int32_t t49 = -11;

	t49 = (x457%(x458<(x459&x460)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x461 = -13;
	int32_t x462 = 3;
	uint8_t x463 = UINT8_MAX;
	volatile uint16_t x464 = 2009U;
	int32_t t50 = -1770;

	t50 = (x461%(x462<(x463&x464)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x465 = 37;
	volatile int16_t x466 = 0;
	uint64_t x467 = UINT64_MAX;
	volatile int32_t t51 = 21;

	t51 = (x465%(x466<(x467&x468)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x477 = -38;
	volatile int16_t x479 = 1;
	int16_t x480 = INT16_MAX;
	volatile int32_t t52 = 402;

	t52 = (x477%(x478<(x479&x480)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x481 = 2U;
	static int8_t x482 = -43;
	static int32_t x483 = 13;
	int64_t x484 = INT64_MIN;
	volatile int32_t t53 = -221656014;

	t53 = (x481%(x482<(x483&x484)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x489 = INT16_MAX;
	int8_t x490 = -1;
	int32_t x491 = INT32_MAX;
	volatile uint16_t x492 = 3961U;

	t54 = (x489%(x490<(x491&x492)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x501 = 17;
	uint64_t x502 = 109430297LLU;
	static volatile int32_t x503 = INT32_MIN;
	static int32_t x504 = INT32_MIN;
	static volatile int32_t t55 = -1560361;

	t55 = (x501%(x502<(x503&x504)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x505 = INT16_MIN;
	int16_t x506 = 2;
	static int32_t x507 = INT32_MAX;
	volatile int8_t x508 = 4;
	int32_t t56 = 3;

	t56 = (x505%(x506<(x507&x508)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x517 = -6297847950582LL;
	volatile uint32_t x519 = UINT32_MAX;
	volatile uint64_t x520 = UINT64_MAX;

	t57 = (x517%(x518<(x519&x520)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x521 = UINT16_MAX;
	uint16_t x523 = UINT16_MAX;
	int64_t x524 = -1LL;
	int32_t t58 = -31812;

	t58 = (x521%(x522<(x523&x524)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x529 = INT16_MAX;
	int8_t x530 = -3;
	int8_t x532 = INT8_MAX;
	volatile int32_t t59 = 1;

	t59 = (x529%(x530<(x531&x532)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x549 = INT8_MIN;
	int8_t x550 = 11;
	uint32_t x551 = UINT32_MAX;
	volatile int32_t x552 = INT32_MIN;
	int32_t t60 = 1210604;

	t60 = (x549%(x550<(x551&x552)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x553 = 28771075U;
	uint32_t x554 = UINT32_MAX;
	int16_t x555 = -1;
	int64_t x556 = INT64_MAX;
	volatile uint32_t t61 = 1635023U;

	t61 = (x553%(x554<(x555&x556)));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x559 = -1;
	int16_t x560 = INT16_MAX;
	int32_t t62 = 25;

	t62 = (x557%(x558<(x559&x560)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x565 = 1588U;
	static int32_t x566 = INT32_MIN;
	volatile int64_t x567 = INT64_MAX;
	static volatile uint8_t x568 = 78U;
	volatile int32_t t63 = -1183;

	t63 = (x565%(x566<(x567&x568)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x587 = INT32_MAX;
	int64_t x588 = -1LL;
	int32_t t64 = 4039;

	t64 = (x585%(x586<(x587&x588)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x597 = INT64_MAX;
	uint32_t x598 = 1U;
	uint64_t x600 = 1735447611191LLU;
	static int64_t t65 = -8LL;

	t65 = (x597%(x598<(x599&x600)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x601 = INT64_MIN;
	static int64_t x602 = -1LL;
	volatile int16_t x603 = INT16_MIN;
	uint16_t x604 = 1U;
	volatile int64_t t66 = 10692108LL;

	t66 = (x601%(x602<(x603&x604)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x610 = 296230U;
	volatile int32_t x611 = -13904;
	int32_t x612 = -22;

	t67 = (x609%(x610<(x611&x612)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x613 = -4;
	int8_t x615 = INT8_MIN;
	volatile int32_t t68 = -261;

	t68 = (x613%(x614<(x615&x616)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x617 = 45;
	static uint8_t x619 = 12U;
	uint64_t x620 = 1043622156683LLU;
	static volatile int32_t t69 = 255;

	t69 = (x617%(x618<(x619&x620)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x629 = -1;
	volatile int64_t x630 = -255678192290034LL;
	int8_t x631 = INT8_MAX;
	int32_t x632 = INT32_MIN;
	volatile int32_t t70 = 232820548;

	t70 = (x629%(x630<(x631&x632)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x641 = 57U;
	uint8_t x642 = UINT8_MAX;
	volatile int32_t x643 = INT32_MIN;

	t71 = (x641%(x642<(x643&x644)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x657 = -1;
	uint16_t x659 = UINT16_MAX;
	int32_t t72 = -921129;

	t72 = (x657%(x658<(x659&x660)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x676 = 29;

	t73 = (x673%(x674<(x675&x676)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x682 = 16;
	uint32_t x683 = 43U;
	int64_t x684 = INT64_MAX;
	volatile int32_t t74 = 48;

	t74 = (x681%(x682<(x683&x684)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x689 = INT32_MIN;
	volatile int32_t t75 = -26537;

	t75 = (x689%(x690<(x691&x692)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x693 = 2333;
	int32_t x694 = -60;
	static int16_t x695 = -1;
	int64_t x696 = 582171993960941LL;
	static volatile int32_t t76 = -473;

	t76 = (x693%(x694<(x695&x696)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x701 = INT32_MIN;
	int8_t x702 = -1;
	uint16_t x703 = UINT16_MAX;
	int64_t x704 = INT64_MIN;
	volatile int32_t t77 = 116572289;

	t77 = (x701%(x702<(x703&x704)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x709 = UINT32_MAX;
	static volatile int8_t x710 = -6;
	static int16_t x711 = 0;
	uint8_t x712 = UINT8_MAX;
	volatile uint32_t t78 = 273025636U;

	t78 = (x709%(x710<(x711&x712)));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x713 = -1LL;
	uint8_t x714 = UINT8_MAX;
	static uint64_t x715 = 4557833946512LLU;

	t79 = (x713%(x714<(x715&x716)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x721 = 44015574LLU;
	static int16_t x722 = -59;
	int64_t x723 = -1LL;
	static int8_t x724 = -1;
	uint64_t t80 = 4460534202640LLU;

	t80 = (x721%(x722<(x723&x724)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x729 = INT64_MIN;
	static uint8_t x730 = 0U;
	volatile uint8_t x732 = 14U;
	static volatile int64_t t81 = 543645310492LL;

	t81 = (x729%(x730<(x731&x732)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x733 = INT64_MIN;
	uint8_t x734 = 1U;
	int16_t x735 = INT16_MIN;
	uint64_t x736 = 35004737147442LLU;
	volatile int64_t t82 = 2234LL;

	t82 = (x733%(x734<(x735&x736)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x739 = 1;
	int32_t x740 = INT32_MAX;

	t83 = (x737%(x738<(x739&x740)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x741 = -312;
	int64_t x742 = INT64_MIN;
	uint32_t x744 = UINT32_MAX;
	volatile int32_t t84 = -15348;

	t84 = (x741%(x742<(x743&x744)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x747 = INT64_MIN;
	uint32_t x748 = 0U;
	volatile int32_t t85 = 237827;

	t85 = (x745%(x746<(x747&x748)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x757 = 8506;
	int16_t x759 = INT16_MIN;
	static volatile int16_t x760 = INT16_MAX;
	volatile int32_t t86 = 306350;

	t86 = (x757%(x758<(x759&x760)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x765 = INT16_MIN;
	int32_t x766 = INT32_MIN;
	int16_t x767 = 1;
	static int16_t x768 = INT16_MAX;
	int32_t t87 = -83279311;

	t87 = (x765%(x766<(x767&x768)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x769 = 26;
	int64_t x770 = -551040524133317358LL;
	uint16_t x772 = 1167U;
	int32_t t88 = -160;

	t88 = (x769%(x770<(x771&x772)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x790 = -18;
	static int16_t x791 = -90;
	int8_t x792 = 0;
	volatile int32_t t89 = -18865396;

	t89 = (x789%(x790<(x791&x792)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x793 = 1U;
	volatile int16_t x794 = -1;
	int64_t x795 = -1LL;
	int32_t x796 = INT32_MAX;
	volatile int32_t t90 = 229;

	t90 = (x793%(x794<(x795&x796)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x809 = -185;
	volatile uint8_t x810 = 108U;
	uint16_t x812 = 5078U;
	int32_t t91 = 1734624;

	t91 = (x809%(x810<(x811&x812)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x813 = 9498401356695LLU;
	uint64_t x814 = 167135LLU;
	volatile uint64_t x815 = UINT64_MAX;
	int64_t x816 = INT64_MIN;
	volatile uint64_t t92 = 241391270LLU;

	t92 = (x813%(x814<(x815&x816)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x821 = UINT32_MAX;
	int16_t x822 = -3;
	volatile int64_t x823 = INT64_MIN;
	uint8_t x824 = UINT8_MAX;
	volatile uint32_t t93 = 1010U;

	t93 = (x821%(x822<(x823&x824)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x825 = UINT64_MAX;
	volatile int32_t x826 = -1;
	volatile int32_t x827 = INT32_MAX;

	t94 = (x825%(x826<(x827&x828)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x833 = 127U;
	int8_t x835 = -8;
	static int64_t x836 = -1LL;

	t95 = (x833%(x834<(x835&x836)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x846 = 1;
	volatile uint8_t x847 = 7U;
	int64_t x848 = -1LL;
	volatile int32_t t96 = 137;

	t96 = (x845%(x846<(x847&x848)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x849 = INT32_MAX;
	int64_t x852 = 4731267826946LL;
	int32_t t97 = -50;

	t97 = (x849%(x850<(x851&x852)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x853 = UINT8_MAX;
	int16_t x854 = INT16_MIN;
	volatile uint16_t x855 = UINT16_MAX;
	int16_t x856 = -31;
	volatile int32_t t98 = 15904;

	t98 = (x853%(x854<(x855&x856)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x862 = -270508652;
	static int8_t x863 = INT8_MAX;
	uint8_t x864 = 0U;
	int32_t t99 = 1;

	t99 = (x861%(x862<(x863&x864)));

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

