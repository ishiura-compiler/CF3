#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x14 = -5;
int8_t x15 = INT8_MIN;
static uint8_t x21 = 1U;
volatile int16_t x40 = -1;
uint16_t x53 = 3U;
int8_t x56 = INT8_MAX;
static int8_t x63 = INT8_MIN;
volatile int32_t x64 = INT32_MIN;
int8_t x88 = -18;
int8_t x90 = INT8_MIN;
int64_t x96 = INT64_MAX;
volatile int16_t x97 = 814;
uint32_t x99 = 8207433U;
static int64_t x100 = INT64_MIN;
volatile int32_t t15 = -30016;
int16_t x146 = INT16_MIN;
int8_t x148 = INT8_MAX;
uint64_t t16 = 10530775855LLU;
int64_t x152 = 80LL;
static volatile int32_t x154 = -1;
int8_t x174 = -6;
int32_t x178 = -1;
int16_t x182 = 1914;
uint16_t x196 = 10U;
int32_t t24 = 59;
int16_t x202 = INT16_MIN;
volatile int32_t t26 = INT32_MAX;
int8_t x228 = INT8_MIN;
static int64_t x254 = 1LL;
int64_t x255 = -39318917LL;
static int32_t t34 = -177605525;
static volatile int32_t x269 = INT32_MAX;
int32_t x308 = 120;
uint8_t x313 = 5U;
int8_t x316 = INT8_MIN;
int32_t t40 = 2682;
volatile int32_t t41 = 1370302;
uint8_t x331 = 4U;
static volatile int32_t t44 = -3;
int8_t x353 = INT8_MAX;
volatile int32_t t48 = 0;
static uint64_t x425 = 1675500837144478631LLU;
volatile uint32_t x431 = UINT32_MAX;
volatile int32_t t53 = -7471585;
uint32_t x445 = UINT32_MAX;
volatile uint32_t x447 = 314042820U;
static uint32_t x449 = 1663252U;
volatile int32_t t56 = -639412667;
uint32_t x460 = 0U;
int32_t x470 = INT32_MIN;
int64_t x471 = INT64_MIN;
volatile int16_t x472 = INT16_MAX;
volatile uint64_t x473 = 52LLU;
uint32_t x474 = 49U;
int32_t x475 = -1;
int64_t x518 = INT64_MAX;
int64_t x526 = INT64_MIN;
uint32_t t62 = UINT32_MAX;
volatile uint16_t x530 = 24755U;
uint8_t x531 = UINT8_MAX;
int32_t x533 = INT32_MAX;
volatile int32_t t66 = 1064439927;
volatile int32_t t67 = -17;
uint32_t x580 = 7762208U;
int64_t t68 = 178381016576LL;
uint32_t x581 = 50U;
uint32_t t69 = 487822U;
uint16_t x585 = UINT16_MAX;
int16_t x589 = 1;
uint32_t x590 = 4960759U;
int8_t x592 = -6;
uint8_t x605 = 106U;
volatile int32_t t74 = 11597;
static uint64_t x615 = 309994LLU;
static int8_t x620 = -1;
static volatile int32_t t78 = 18287078;
uint32_t x640 = UINT32_MAX;
static int8_t x642 = INT8_MIN;
int16_t x646 = INT16_MIN;
int8_t x658 = INT8_MIN;
volatile int64_t x662 = INT64_MIN;
int16_t x667 = 65;
int32_t t84 = -24;
static int32_t x677 = 602646;
int32_t x679 = -1;
volatile int32_t t87 = -230172948;
int32_t x695 = 109838;
int8_t x703 = -1;
volatile int8_t x708 = INT8_MIN;
volatile uint8_t x734 = 1U;
int64_t x736 = -1LL;
static int16_t x749 = 2347;
volatile int32_t t96 = 355;
uint16_t x753 = 52U;
volatile int32_t t97 = 1926731;


void f0(void) {
	volatile uint16_t x5 = 5U;
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	uint8_t x8 = UINT8_MAX;
	int32_t t0 = 2;

	t0 = (x5>>(x6&(x7<=x8)));

	if (t0 != 5) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = 3520;
	int32_t x10 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	uint8_t x12 = 53U;
	volatile int32_t t1 = 829;

	t1 = (x9>>(x10&(x11<=x12)));

	if (t1 != 1760) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x13 = UINT64_MAX;
	static int8_t x16 = 1;
	uint64_t t2 = 2060LLU;

	t2 = (x13>>(x14&(x15<=x16)));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x22 = INT32_MIN;
	int32_t x23 = -20192;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t3 = 242304062;

	t3 = (x21>>(x22&(x23<=x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = UINT8_MAX;
	int64_t x38 = -1960262214521827LL;
	int8_t x39 = INT8_MIN;
	volatile int32_t t4 = -2951;

	t4 = (x37>>(x38&(x39<=x40)));

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x54 = 529U;
	int16_t x55 = INT16_MIN;
	volatile int32_t t5 = 301;

	t5 = (x53>>(x54&(x55<=x56)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x61 = 3957199463731LLU;
	int64_t x62 = -51468LL;
	volatile uint64_t t6 = 1LLU;

	t6 = (x61>>(x62&(x63<=x64)));

	if (t6 != 3957199463731LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x69 = 197574U;
	int32_t x70 = -17;
	uint8_t x71 = 63U;
	int64_t x72 = -5532281LL;
	static volatile uint32_t t7 = 62U;

	t7 = (x69>>(x70&(x71<=x72)));

	if (t7 != 197574U) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x81 = 13547319945778LL;
	int16_t x82 = INT16_MAX;
	uint64_t x83 = 4134LLU;
	volatile int8_t x84 = -30;
	int64_t t8 = -11547703818611LL;

	t8 = (x81>>(x82&(x83<=x84)));

	if (t8 != 6773659972889LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x85 = INT16_MAX;
	static int64_t x86 = INT64_MAX;
	int64_t x87 = 342576672194LL;
	int32_t t9 = 57;

	t9 = (x85>>(x86&(x87<=x88)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x89 = UINT16_MAX;
	int16_t x91 = -1;
	uint16_t x92 = UINT16_MAX;
	int32_t t10 = 10086;

	t10 = (x89>>(x90&(x91<=x92)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x93 = UINT16_MAX;
	int16_t x94 = -1;
	static int32_t x95 = INT32_MAX;
	volatile int32_t t11 = 5;

	t11 = (x93>>(x94&(x95<=x96)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x98 = -1;
	volatile int32_t t12 = -28;

	t12 = (x97>>(x98&(x99<=x100)));

	if (t12 != 814) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x113 = UINT8_MAX;
	static int32_t x114 = -231;
	static int8_t x115 = INT8_MAX;
	volatile int16_t x116 = 4126;
	int32_t t13 = -1;

	t13 = (x113>>(x114&(x115<=x116)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x117 = 202678LLU;
	volatile uint8_t x118 = 3U;
	int16_t x119 = INT16_MIN;
	int64_t x120 = 365569LL;
	volatile uint64_t t14 = 2009236034797054479LLU;

	t14 = (x117>>(x118&(x119<=x120)));

	if (t14 != 101339LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x125 = 24923;
	int32_t x126 = INT32_MIN;
	int64_t x127 = 5463903206334908LL;
	static int32_t x128 = INT32_MAX;

	t15 = (x125>>(x126&(x127<=x128)));

	if (t15 != 24923) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x145 = 1629LLU;
	uint32_t x147 = 40292U;

	t16 = (x145>>(x146&(x147<=x148)));

	if (t16 != 1629LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x149 = 5U;
	volatile uint64_t x150 = 2472LLU;
	uint8_t x151 = 3U;
	volatile int32_t t17 = 19;

	t17 = (x149>>(x150&(x151<=x152)));

	if (t17 != 5) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x153 = 1066915046474253LLU;
	static int8_t x155 = INT8_MAX;
	static uint32_t x156 = 2942325U;
	volatile uint64_t t18 = 6LLU;

	t18 = (x153>>(x154&(x155<=x156)));

	if (t18 != 533457523237126LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x157 = INT64_MAX;
	volatile uint16_t x158 = 1989U;
	uint32_t x159 = 2706U;
	static volatile uint16_t x160 = UINT16_MAX;
	int64_t t19 = 1208694580LL;

	t19 = (x157>>(x158&(x159<=x160)));

	if (t19 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x173 = 129740476LL;
	static int8_t x175 = 0;
	int16_t x176 = INT16_MAX;
	int64_t t20 = 26470LL;

	t20 = (x173>>(x174&(x175<=x176)));

	if (t20 != 129740476LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x177 = INT32_MAX;
	static int8_t x179 = -10;
	static uint32_t x180 = 883599U;
	static int32_t t21 = INT32_MAX;

	t21 = (x177>>(x178&(x179<=x180)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x181 = UINT8_MAX;
	volatile int32_t x183 = -261;
	int8_t x184 = INT8_MAX;
	volatile int32_t t22 = 192;

	t22 = (x181>>(x182&(x183<=x184)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x185 = 1U;
	static int32_t x186 = INT32_MAX;
	uint16_t x187 = 478U;
	int16_t x188 = INT16_MAX;
	static volatile int32_t t23 = 649852632;

	t23 = (x185>>(x186&(x187<=x188)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x193 = 19U;
	volatile int32_t x194 = INT32_MIN;
	int8_t x195 = INT8_MIN;

	t24 = (x193>>(x194&(x195<=x196)));

	if (t24 != 19) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x197 = INT64_MAX;
	int16_t x198 = 17;
	static int8_t x199 = -1;
	uint64_t x200 = 507417319167029LLU;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x197>>(x198&(x199<=x200)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x201 = INT32_MAX;
	static int64_t x203 = INT64_MIN;
	static int64_t x204 = -48944535756412043LL;

	t26 = (x201>>(x202&(x203<=x204)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x205 = 2600U;
	volatile int8_t x206 = INT8_MIN;
	volatile int64_t x207 = INT64_MIN;
	int64_t x208 = 19153155181LL;
	int32_t t27 = -29154;

	t27 = (x205>>(x206&(x207<=x208)));

	if (t27 != 2600) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MIN;
	volatile int16_t x215 = INT16_MIN;
	int64_t x216 = INT64_MIN;
	volatile int32_t t28 = 1019912;

	t28 = (x213>>(x214&(x215<=x216)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x217 = 34U;
	int16_t x218 = -2;
	volatile uint8_t x219 = 116U;
	volatile int64_t x220 = 391679037236LL;
	int32_t t29 = -54;

	t29 = (x217>>(x218&(x219<=x220)));

	if (t29 != 34) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = 34;
	uint32_t x227 = 2832215U;
	static volatile int32_t t30 = -355;

	t30 = (x225>>(x226&(x227<=x228)));

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x229 = 97U;
	uint32_t x230 = 9U;
	uint16_t x231 = 101U;
	int16_t x232 = 325;
	volatile int32_t t31 = -4624675;

	t31 = (x229>>(x230&(x231<=x232)));

	if (t31 != 48) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x245 = 52U;
	static uint64_t x246 = 325823752278127LLU;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -1;
	volatile int32_t t32 = -229326;

	t32 = (x245>>(x246&(x247<=x248)));

	if (t32 != 26) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x249 = 198779236LLU;
	volatile int8_t x250 = INT8_MIN;
	int32_t x251 = -3858810;
	int32_t x252 = 63679;
	volatile uint64_t t33 = 1622817121LLU;

	t33 = (x249>>(x250&(x251<=x252)));

	if (t33 != 198779236LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x253 = INT16_MAX;
	int8_t x256 = INT8_MIN;

	t34 = (x253>>(x254&(x255<=x256)));

	if (t34 != 16383) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x265 = 3U;
	static volatile int16_t x266 = INT16_MIN;
	static int32_t x267 = 365739741;
	int64_t x268 = 0LL;
	int32_t t35 = 6337614;

	t35 = (x265>>(x266&(x267<=x268)));

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x270 = 1;
	uint8_t x271 = UINT8_MAX;
	static volatile int8_t x272 = -1;
	volatile int32_t t36 = INT32_MAX;

	t36 = (x269>>(x270&(x271<=x272)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x285 = 114U;
	uint32_t x286 = 215U;
	int32_t x287 = 10;
	int16_t x288 = INT16_MAX;
	uint32_t t37 = 2531U;

	t37 = (x285>>(x286&(x287<=x288)));

	if (t37 != 57U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x305 = 8U;
	uint16_t x306 = 0U;
	uint32_t x307 = 120480U;
	int32_t t38 = -12260023;

	t38 = (x305>>(x306&(x307<=x308)));

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x309 = 2U;
	int8_t x310 = -1;
	volatile uint64_t x311 = 2476302LLU;
	int16_t x312 = INT16_MIN;
	volatile int32_t t39 = -23;

	t39 = (x309>>(x310&(x311<=x312)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x314 = INT8_MIN;
	volatile int16_t x315 = INT16_MIN;

	t40 = (x313>>(x314&(x315<=x316)));

	if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x321 = INT8_MAX;
	int16_t x322 = -1;
	static int32_t x323 = 95;
	int8_t x324 = INT8_MIN;

	t41 = (x321>>(x322&(x323<=x324)));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x325 = INT64_MAX;
	uint64_t x326 = 6075411500227788LLU;
	volatile int8_t x327 = INT8_MAX;
	static int64_t x328 = INT64_MIN;
	volatile int64_t t42 = INT64_MAX;

	t42 = (x325>>(x326&(x327<=x328)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x329 = 787938338942960371LLU;
	int64_t x330 = INT64_MAX;
	uint16_t x332 = 1U;
	volatile uint64_t t43 = 740520438LLU;

	t43 = (x329>>(x330&(x331<=x332)));

	if (t43 != 787938338942960371LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x333 = 37U;
	static uint64_t x334 = 61LLU;
	uint8_t x335 = UINT8_MAX;
	int64_t x336 = 185415073828LL;

	t44 = (x333>>(x334&(x335<=x336)));

	if (t44 != 18) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x337 = INT8_MAX;
	int16_t x338 = -3;
	int32_t x339 = -1;
	int32_t x340 = INT32_MAX;
	int32_t t45 = -1;

	t45 = (x337>>(x338&(x339<=x340)));

	if (t45 != 63) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x354 = UINT32_MAX;
	volatile int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;
	volatile int32_t t46 = -440;

	t46 = (x353>>(x354&(x355<=x356)));

	if (t46 != 63) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x357 = INT16_MAX;
	int32_t x358 = INT32_MAX;
	uint32_t x359 = 199U;
	volatile int16_t x360 = 100;
	static volatile int32_t t47 = -5502681;

	t47 = (x357>>(x358&(x359<=x360)));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x365 = 3588;
	volatile uint32_t x366 = 252759594U;
	volatile int32_t x367 = -1;
	int8_t x368 = 4;

	t48 = (x365>>(x366&(x367<=x368)));

	if (t48 != 3588) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x381 = INT64_MAX;
	volatile uint32_t x382 = 33U;
	volatile int32_t x383 = 59005217;
	uint8_t x384 = 1U;
	int64_t t49 = INT64_MAX;

	t49 = (x381>>(x382&(x383<=x384)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x405 = 158221067U;
	int8_t x406 = INT8_MIN;
	uint64_t x407 = UINT64_MAX;
	volatile int16_t x408 = INT16_MIN;
	uint32_t t50 = 851U;

	t50 = (x405>>(x406&(x407<=x408)));

	if (t50 != 158221067U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x421 = INT64_MAX;
	int16_t x422 = -2;
	volatile uint16_t x423 = 1U;
	volatile int64_t x424 = -1LL;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x421>>(x422&(x423<=x424)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x426 = INT8_MAX;
	volatile int16_t x427 = INT16_MAX;
	uint16_t x428 = UINT16_MAX;
	static volatile uint64_t t52 = 200686650467425791LLU;

	t52 = (x425>>(x426&(x427<=x428)));

	if (t52 != 837750418572239315LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x429 = 18U;
	uint32_t x430 = 24451U;
	int8_t x432 = INT8_MIN;

	t53 = (x429>>(x430&(x431<=x432)));

	if (t53 != 18) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x446 = -11303170LL;
	uint32_t x448 = 2U;
	volatile uint32_t t54 = UINT32_MAX;

	t54 = (x445>>(x446&(x447<=x448)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x450 = -1LL;
	int64_t x451 = INT64_MIN;
	uint8_t x452 = UINT8_MAX;
	volatile uint32_t t55 = 410163222U;

	t55 = (x449>>(x450&(x451<=x452)));

	if (t55 != 831626U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint16_t x453 = UINT16_MAX;
	volatile uint64_t x454 = 51LLU;
	int64_t x455 = INT64_MIN;
	int16_t x456 = -2;

	t56 = (x453>>(x454&(x455<=x456)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x457 = INT16_MAX;
	static int32_t x458 = INT32_MIN;
	volatile uint8_t x459 = 14U;
	volatile int32_t t57 = 3;

	t57 = (x457>>(x458&(x459<=x460)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x469 = 5972867;
	int32_t t58 = 1;

	t58 = (x469>>(x470&(x471<=x472)));

	if (t58 != 5972867) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x476 = INT64_MAX;
	uint64_t t59 = 315177327226LLU;

	t59 = (x473>>(x474&(x475<=x476)));

	if (t59 != 26LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x485 = 1753U;
	static volatile int16_t x486 = -1;
	int8_t x487 = -1;
	static int64_t x488 = INT64_MAX;
	int32_t t60 = -347;

	t60 = (x485>>(x486&(x487<=x488)));

	if (t60 != 876) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x517 = 1;
	int8_t x519 = 2;
	volatile int16_t x520 = -2;
	int32_t t61 = -95;

	t61 = (x517>>(x518&(x519<=x520)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x525 = UINT32_MAX;
	static volatile uint8_t x527 = UINT8_MAX;
	volatile int8_t x528 = -12;

	t62 = (x525>>(x526&(x527<=x528)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x529 = UINT16_MAX;
	int64_t x532 = INT64_MIN;
	volatile int32_t t63 = -79772;

	t63 = (x529>>(x530&(x531<=x532)));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x534 = 7U;
	volatile int8_t x535 = INT8_MIN;
	static int64_t x536 = -1LL;
	int32_t t64 = -15577074;

	t64 = (x533>>(x534&(x535<=x536)));

	if (t64 != 1073741823) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x537 = 119U;
	static volatile uint32_t x538 = 1227592U;
	int8_t x539 = INT8_MIN;
	uint8_t x540 = UINT8_MAX;
	int32_t t65 = 0;

	t65 = (x537>>(x538&(x539<=x540)));

	if (t65 != 119) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x541 = 1025576;
	static int8_t x542 = INT8_MIN;
	static int32_t x543 = INT32_MIN;
	int8_t x544 = INT8_MAX;

	t66 = (x541>>(x542&(x543<=x544)));

	if (t66 != 1025576) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x569 = 8U;
	int16_t x570 = INT16_MAX;
	static int8_t x571 = INT8_MAX;
	int64_t x572 = INT64_MIN;

	t67 = (x569>>(x570&(x571<=x572)));

	if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x577 = INT64_MAX;
	int8_t x578 = INT8_MAX;
	uint8_t x579 = UINT8_MAX;

	t68 = (x577>>(x578&(x579<=x580)));

	if (t68 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x582 = 2797149206601LLU;
	volatile uint64_t x583 = 169523997624LLU;
	static uint64_t x584 = UINT64_MAX;

	t69 = (x581>>(x582&(x583<=x584)));

	if (t69 != 25U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x586 = UINT32_MAX;
	int16_t x587 = INT16_MIN;
	uint32_t x588 = 50681849U;
	volatile int32_t t70 = 0;

	t70 = (x585>>(x586&(x587<=x588)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x591 = INT32_MIN;
	volatile int32_t t71 = 508946;

	t71 = (x589>>(x590&(x591<=x592)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x593 = 31913911U;
	int8_t x594 = 0;
	static uint8_t x595 = UINT8_MAX;
	int8_t x596 = INT8_MIN;
	static volatile uint32_t t72 = 11U;

	t72 = (x593>>(x594&(x595<=x596)));

	if (t72 != 31913911U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x601 = 317442427525970005LL;
	uint32_t x602 = 239U;
	static int16_t x603 = 268;
	volatile int16_t x604 = -1;
	volatile int64_t t73 = -229977LL;

	t73 = (x601>>(x602&(x603<=x604)));

	if (t73 != 317442427525970005LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x606 = 5871;
	int64_t x607 = INT64_MIN;
	int8_t x608 = 0;

	t74 = (x605>>(x606&(x607<=x608)));

	if (t74 != 53) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x609 = 6854870LL;
	int32_t x610 = INT32_MIN;
	static uint16_t x611 = 220U;
	int64_t x612 = 572LL;
	static int64_t t75 = 8542079367025LL;

	t75 = (x609>>(x610&(x611<=x612)));

	if (t75 != 6854870LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x613 = INT64_MAX;
	int16_t x614 = -1;
	static int16_t x616 = 0;
	int64_t t76 = INT64_MAX;

	t76 = (x613>>(x614&(x615<=x616)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x617 = 348967963869884695LLU;
	int8_t x618 = -1;
	static uint8_t x619 = UINT8_MAX;
	volatile uint64_t t77 = 14468337830929LLU;

	t77 = (x617>>(x618&(x619<=x620)));

	if (t77 != 348967963869884695LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x633 = UINT8_MAX;
	static uint16_t x634 = 6U;
	int32_t x635 = -70709505;
	int64_t x636 = INT64_MAX;

	t78 = (x633>>(x634&(x635<=x636)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x637 = 13262739423644273LLU;
	int32_t x638 = INT32_MAX;
	static volatile int64_t x639 = INT64_MIN;
	static volatile uint64_t t79 = 1227LLU;

	t79 = (x637>>(x638&(x639<=x640)));

	if (t79 != 6631369711822136LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x641 = 218008672;
	int8_t x643 = -1;
	uint8_t x644 = 3U;
	int32_t t80 = 1;

	t80 = (x641>>(x642&(x643<=x644)));

	if (t80 != 218008672) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x645 = 0U;
	int8_t x647 = INT8_MIN;
	int8_t x648 = -3;
	uint32_t t81 = 1U;

	t81 = (x645>>(x646&(x647<=x648)));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x657 = 21U;
	uint64_t x659 = 57LLU;
	int8_t x660 = 6;
	volatile int32_t t82 = -49939439;

	t82 = (x657>>(x658&(x659<=x660)));

	if (t82 != 21) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x661 = 212U;
	uint32_t x663 = UINT32_MAX;
	int16_t x664 = INT16_MAX;
	uint32_t t83 = 114U;

	t83 = (x661>>(x662&(x663<=x664)));

	if (t83 != 212U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x665 = 1U;
	int32_t x666 = INT32_MIN;
	static int8_t x668 = INT8_MIN;

	t84 = (x665>>(x666&(x667<=x668)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x678 = -47703269LL;
	volatile uint32_t x680 = UINT32_MAX;
	volatile int32_t t85 = -6;

	t85 = (x677>>(x678&(x679<=x680)));

	if (t85 != 301323) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x681 = 63;
	volatile int32_t x682 = INT32_MIN;
	int64_t x683 = -4071559756LL;
	uint8_t x684 = 61U;
	volatile int32_t t86 = -3232;

	t86 = (x681>>(x682&(x683<=x684)));

	if (t86 != 63) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x685 = UINT8_MAX;
	volatile int32_t x686 = INT32_MIN;
	uint8_t x687 = UINT8_MAX;
	volatile int16_t x688 = INT16_MIN;

	t87 = (x685>>(x686&(x687<=x688)));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x693 = 55U;
	static int64_t x694 = -1LL;
	int32_t x696 = -160;
	int32_t t88 = -8646;

	t88 = (x693>>(x694&(x695<=x696)));

	if (t88 != 55) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x701 = 203868922532030LL;
	uint32_t x702 = UINT32_MAX;
	volatile uint8_t x704 = 6U;
	volatile int64_t t89 = -168LL;

	t89 = (x701>>(x702&(x703<=x704)));

	if (t89 != 101934461266015LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x705 = 196528349315600LL;
	int32_t x706 = -1;
	int32_t x707 = -1;
	volatile int64_t t90 = -572857LL;

	t90 = (x705>>(x706&(x707<=x708)));

	if (t90 != 196528349315600LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x709 = 512U;
	volatile int64_t x710 = -18LL;
	volatile int16_t x711 = -197;
	volatile int64_t x712 = INT64_MIN;
	int32_t t91 = 0;

	t91 = (x709>>(x710&(x711<=x712)));

	if (t91 != 512) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x721 = UINT8_MAX;
	int8_t x722 = -59;
	int64_t x723 = 13549323820LL;
	static int8_t x724 = -1;
	static volatile int32_t t92 = 53905763;

	t92 = (x721>>(x722&(x723<=x724)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x725 = 5;
	volatile uint8_t x726 = 3U;
	volatile int8_t x727 = 28;
	volatile int64_t x728 = -2195918099LL;
	static int32_t t93 = 135752;

	t93 = (x725>>(x726&(x727<=x728)));

	if (t93 != 5) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x733 = 1U;
	static int64_t x735 = INT64_MIN;
	int32_t t94 = 53;

	t94 = (x733>>(x734&(x735<=x736)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x737 = 59;
	volatile uint64_t x738 = 2294849232015LLU;
	uint16_t x739 = UINT16_MAX;
	static int16_t x740 = -1;
	int32_t t95 = -789;

	t95 = (x737>>(x738&(x739<=x740)));

	if (t95 != 59) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x750 = -1;
	int8_t x751 = INT8_MIN;
	static int64_t x752 = -1LL;

	t96 = (x749>>(x750&(x751<=x752)));

	if (t96 != 1173) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x754 = 3976507;
	int8_t x755 = INT8_MIN;
	int64_t x756 = INT64_MAX;

	t97 = (x753>>(x754&(x755<=x756)));

	if (t97 != 26) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x757 = 94U;
	static volatile int8_t x758 = INT8_MIN;
	static volatile int8_t x759 = INT8_MAX;
	volatile int32_t x760 = INT32_MAX;
	volatile int32_t t98 = -11942522;

	t98 = (x757>>(x758&(x759<=x760)));

	if (t98 != 94) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x769 = 0U;
	static uint8_t x770 = UINT8_MAX;
	volatile uint8_t x771 = 7U;
	int32_t x772 = INT32_MAX;
	static uint32_t t99 = 1939U;

	t99 = (x769>>(x770&(x771<=x772)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

