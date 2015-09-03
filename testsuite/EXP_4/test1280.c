#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = 196285780U;
static volatile int16_t x4 = INT16_MIN;
volatile uint32_t t0 = 558688445U;
int32_t x19 = INT32_MIN;
int16_t x21 = 12915;
static uint16_t x23 = 16944U;
uint8_t x32 = UINT8_MAX;
uint16_t x34 = 37U;
uint16_t x67 = UINT16_MAX;
int64_t x68 = INT64_MIN;
static volatile uint64_t x72 = 153LLU;
static int32_t t10 = -99949;
int16_t x73 = 107;
uint64_t x76 = 14775424248976LLU;
int16_t x78 = 613;
static uint16_t x101 = 52U;
int8_t x103 = INT8_MIN;
uint32_t x104 = 7566U;
int64_t x106 = INT64_MIN;
int8_t x111 = -1;
volatile int32_t x115 = 1374183;
uint64_t t19 = 6572305572184LLU;
static volatile uint16_t x127 = UINT16_MAX;
uint8_t x129 = 124U;
volatile uint64_t t24 = 3256263211750020472LLU;
uint64_t x145 = 52188006LLU;
static int64_t x146 = 726839LL;
int8_t x154 = INT8_MAX;
static volatile uint64_t x188 = 132LLU;
int16_t x208 = 296;
uint64_t x216 = UINT64_MAX;
volatile int32_t t30 = INT32_MAX;
int16_t x217 = 7655;
int32_t t31 = -346;
int8_t x259 = INT8_MIN;
uint16_t x262 = 12992U;
static int16_t x263 = INT16_MAX;
uint16_t x276 = 2318U;
int8_t x278 = -1;
static int32_t x280 = -1;
uint32_t t37 = 21U;
uint32_t x284 = 149216U;
static uint64_t x303 = 9611LLU;
volatile int16_t x323 = 1;
int8_t x324 = -1;
static uint16_t x325 = 13098U;
volatile int16_t x355 = 1621;
uint32_t x356 = 18850462U;
int32_t x366 = INT32_MAX;
uint16_t x367 = 7803U;
uint64_t x369 = 59827021195826334LLU;
int8_t x388 = -14;
uint32_t x389 = 3962097U;
uint8_t x390 = 8U;
uint16_t x395 = 599U;
int8_t x396 = INT8_MAX;
volatile int64_t t57 = -1709319999LL;
uint8_t x415 = 5U;
static uint8_t x434 = UINT8_MAX;
uint64_t x435 = 723550033696316056LLU;
uint64_t t61 = 3302907709788LLU;
uint64_t x437 = 1641069569344033030LLU;
int64_t x449 = INT64_MAX;
int32_t x450 = INT32_MIN;
volatile uint16_t x453 = 10392U;
int16_t x456 = INT16_MIN;
uint64_t x460 = UINT64_MAX;
volatile uint32_t t65 = 12734U;
static uint16_t x465 = 13U;
uint16_t x467 = 46U;
static int32_t x497 = INT32_MAX;
static int32_t t70 = INT32_MAX;
int64_t x507 = 3813123631LL;
int64_t x534 = 102174778484LL;
uint64_t x536 = 4002947812150LLU;
volatile int32_t t77 = 1356113;
int32_t x556 = INT32_MIN;
static uint16_t x560 = 18U;
int32_t x570 = INT32_MAX;
volatile int32_t x572 = -1;
int32_t x580 = -1;
int16_t x582 = INT16_MAX;
static volatile int32_t t87 = 95626967;
uint64_t x610 = UINT64_MAX;
int16_t x611 = -721;
int8_t x612 = 1;
uint16_t x640 = 13U;
uint16_t x647 = UINT16_MAX;
int32_t x648 = INT32_MIN;
uint16_t x663 = 690U;
uint64_t x664 = 223209044LLU;
int16_t x685 = 0;
int64_t x688 = INT64_MIN;
static volatile int32_t t96 = 109;
uint8_t x693 = 82U;
uint64_t x695 = 1752386453164765LLU;
static int32_t t98 = -82151;
int32_t x697 = INT32_MAX;


void f0(void) {
	uint32_t x2 = 16516U;
	int32_t x3 = 258597059;

	t0 = (x1<<(x2==(x3==x4)));

	if (t0 != 196285780U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 1613;
	volatile uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MIN;
	volatile uint32_t x8 = 9098569U;
	int32_t t1 = 16488;

	t1 = (x5<<(x6==(x7==x8)));

	if (t1 != 1613) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = -1LL;
	static uint32_t t2 = UINT32_MAX;

	t2 = (x13<<(x14==(x15==x16)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = 347;
	static int64_t x18 = 3281192095LL;
	static uint8_t x20 = 9U;
	static volatile int32_t t3 = 1972;

	t3 = (x17<<(x18==(x19==x20)));

	if (t3 != 347) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	static int64_t x24 = INT64_MIN;
	int32_t t4 = -4108141;

	t4 = (x21<<(x22==(x23==x24)));

	if (t4 != 12915) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x29 = INT64_MAX;
	volatile int32_t x30 = INT32_MIN;
	volatile uint32_t x31 = 3075U;
	static volatile int64_t t5 = INT64_MAX;

	t5 = (x29<<(x30==(x31==x32)));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x33 = 12U;
	int64_t x35 = -7203645227LL;
	uint8_t x36 = 2U;
	static uint32_t t6 = 0U;

	t6 = (x33<<(x34==(x35==x36)));

	if (t6 != 12U) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x41 = 4U;
	static int64_t x42 = INT64_MIN;
	int16_t x43 = INT16_MIN;
	volatile int32_t x44 = INT32_MAX;
	volatile int32_t t7 = 62;

	t7 = (x41<<(x42==(x43==x44)));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x61 = INT32_MAX;
	uint64_t x62 = 2LLU;
	int8_t x63 = -1;
	uint16_t x64 = 8085U;
	int32_t t8 = INT32_MAX;

	t8 = (x61<<(x62==(x63==x64)));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x65 = UINT64_MAX;
	int64_t x66 = INT64_MAX;
	uint64_t t9 = UINT64_MAX;

	t9 = (x65<<(x66==(x67==x68)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x69 = 23220U;
	static int16_t x70 = INT16_MIN;
	int32_t x71 = -4437854;

	t10 = (x69<<(x70==(x71==x72)));

	if (t10 != 23220) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x74 = 13094U;
	static int16_t x75 = -1;
	int32_t t11 = 11;

	t11 = (x73<<(x74==(x75==x76)));

	if (t11 != 107) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x77 = 4U;
	static int16_t x79 = 40;
	volatile int32_t x80 = INT32_MAX;
	static int32_t t12 = 160783;

	t12 = (x77<<(x78==(x79==x80)));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x85 = 2861;
	int64_t x86 = -1LL;
	int64_t x87 = -19009LL;
	int32_t x88 = INT32_MAX;
	volatile int32_t t13 = -8894401;

	t13 = (x85<<(x86==(x87==x88)));

	if (t13 != 2861) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x93 = 0U;
	int8_t x94 = INT8_MAX;
	int32_t x95 = 3;
	int8_t x96 = INT8_MIN;
	int32_t t14 = -1;

	t14 = (x93<<(x94==(x95==x96)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = 7397;
	static int64_t x99 = INT64_MIN;
	uint16_t x100 = 50U;
	int32_t t15 = INT32_MAX;

	t15 = (x97<<(x98==(x99==x100)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x102 = INT64_MIN;
	int32_t t16 = 264;

	t16 = (x101<<(x102==(x103==x104)));

	if (t16 != 52) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x105 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	static volatile uint64_t t17 = UINT64_MAX;

	t17 = (x105<<(x106==(x107==x108)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x109 = 1U;
	static int8_t x110 = 0;
	uint64_t x112 = 161148855791LLU;
	int32_t t18 = -287077;

	t18 = (x109<<(x110==(x111==x112)));

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x113 = 2071229612821202LLU;
	uint64_t x114 = UINT64_MAX;
	volatile int64_t x116 = 386LL;

	t19 = (x113<<(x114==(x115==x116)));

	if (t19 != 2071229612821202LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x117 = 24U;
	int32_t x118 = INT32_MIN;
	static uint8_t x119 = UINT8_MAX;
	static int64_t x120 = -1240685306LL;
	int32_t t20 = -1;

	t20 = (x117<<(x118==(x119==x120)));

	if (t20 != 24) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = 197791725;
	volatile int64_t x123 = INT64_MIN;
	static int16_t x124 = -1;
	int32_t t21 = -802638531;

	t21 = (x121<<(x122==(x123==x124)));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x125 = UINT8_MAX;
	static volatile int8_t x126 = -2;
	volatile uint64_t x128 = UINT64_MAX;
	static int32_t t22 = 716786366;

	t22 = (x125<<(x126==(x127==x128)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x130 = UINT16_MAX;
	static int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MAX;
	volatile int32_t t23 = -5824267;

	t23 = (x129<<(x130==(x131==x132)));

	if (t23 != 124) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x133 = 11232406002LLU;
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = INT64_MIN;
	int64_t x136 = 134096458LL;

	t24 = (x133<<(x134==(x135==x136)));

	if (t24 != 11232406002LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	uint64_t t25 = 930744585402LLU;

	t25 = (x145<<(x146==(x147==x148)));

	if (t25 != 52188006LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x153 = INT32_MAX;
	static int32_t x155 = 1480908;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile int32_t t26 = INT32_MAX;

	t26 = (x153<<(x154==(x155==x156)));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x185 = 161055LL;
	int64_t x186 = INT64_MIN;
	int16_t x187 = -1;
	int64_t t27 = -853420752070837187LL;

	t27 = (x185<<(x186==(x187==x188)));

	if (t27 != 161055LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x201 = 504U;
	int8_t x202 = INT8_MAX;
	int16_t x203 = -1;
	int16_t x204 = 0;
	static uint32_t t28 = 583207193U;

	t28 = (x201<<(x202==(x203==x204)));

	if (t28 != 504U) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x205 = INT64_MAX;
	static int8_t x206 = -29;
	static int32_t x207 = 17032;
	static int64_t t29 = INT64_MAX;

	t29 = (x205<<(x206==(x207==x208)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x213 = INT32_MAX;
	static int32_t x214 = INT32_MIN;
	uint32_t x215 = 1591U;

	t30 = (x213<<(x214==(x215==x216)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x218 = UINT32_MAX;
	int16_t x219 = -1;
	uint16_t x220 = 23225U;

	t31 = (x217<<(x218==(x219==x220)));

	if (t31 != 7655) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x233 = 3023U;
	int64_t x234 = 28764923716LL;
	uint16_t x235 = 31U;
	int16_t x236 = INT16_MAX;
	int32_t t32 = 84001;

	t32 = (x233<<(x234==(x235==x236)));

	if (t32 != 3023) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x249 = 9320369LLU;
	uint32_t x250 = 192264206U;
	int8_t x251 = 7;
	static uint16_t x252 = 15261U;
	uint64_t t33 = 87183563LLU;

	t33 = (x249<<(x250==(x251==x252)));

	if (t33 != 9320369LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x257 = 59637U;
	uint32_t x258 = 1442784U;
	int8_t x260 = INT8_MIN;
	volatile uint32_t t34 = 116U;

	t34 = (x257<<(x258==(x259==x260)));

	if (t34 != 59637U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int16_t x264 = INT16_MIN;
	uint32_t t35 = UINT32_MAX;

	t35 = (x261<<(x262==(x263==x264)));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x273 = INT32_MAX;
	uint8_t x274 = UINT8_MAX;
	volatile uint32_t x275 = 115U;
	int32_t t36 = INT32_MAX;

	t36 = (x273<<(x274==(x275==x276)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x277 = 4889U;
	uint16_t x279 = UINT16_MAX;

	t37 = (x277<<(x278==(x279==x280)));

	if (t37 != 4889U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x281 = 79887629LL;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = 12600LL;
	int64_t t38 = 11812029928509980LL;

	t38 = (x281<<(x282==(x283==x284)));

	if (t38 != 79887629LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x289 = 7U;
	static uint32_t x290 = UINT32_MAX;
	uint32_t x291 = 1926U;
	uint32_t x292 = 61945068U;
	int32_t t39 = 14756541;

	t39 = (x289<<(x290==(x291==x292)));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x297 = 23U;
	int32_t x298 = -1;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t40 = 3;

	t40 = (x297<<(x298==(x299==x300)));

	if (t40 != 23) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x301 = UINT64_MAX;
	volatile uint16_t x302 = 27705U;
	static int8_t x304 = 39;
	uint64_t t41 = UINT64_MAX;

	t41 = (x301<<(x302==(x303==x304)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	int64_t t42 = INT64_MAX;

	t42 = (x305<<(x306==(x307==x308)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x309 = 1564540909LL;
	uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MIN;
	uint8_t x312 = 114U;
	static volatile int64_t t43 = -1564078127205373662LL;

	t43 = (x309<<(x310==(x311==x312)));

	if (t43 != 1564540909LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x321 = 287208LL;
	static volatile uint64_t x322 = 2LLU;
	int64_t t44 = 9976LL;

	t44 = (x321<<(x322==(x323==x324)));

	if (t44 != 287208LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x326 = 1;
	static uint64_t x327 = 435585715067279101LLU;
	uint8_t x328 = 44U;
	volatile int32_t t45 = 975249745;

	t45 = (x325<<(x326==(x327==x328)));

	if (t45 != 13098) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x353 = UINT16_MAX;
	static volatile int16_t x354 = -1;
	volatile int32_t t46 = -6934;

	t46 = (x353<<(x354==(x355==x356)));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x357 = INT8_MAX;
	static uint32_t x358 = UINT32_MAX;
	static int8_t x359 = INT8_MIN;
	int8_t x360 = 41;
	volatile int32_t t47 = 0;

	t47 = (x357<<(x358==(x359==x360)));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x361 = 0;
	int32_t x362 = -166211;
	int16_t x363 = INT16_MIN;
	int64_t x364 = -1LL;
	static volatile int32_t t48 = 105424650;

	t48 = (x361<<(x362==(x363==x364)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x365 = 22;
	int32_t x368 = INT32_MAX;
	volatile int32_t t49 = 98;

	t49 = (x365<<(x366==(x367==x368)));

	if (t49 != 22) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x370 = INT8_MIN;
	static int64_t x371 = INT64_MAX;
	static int8_t x372 = 1;
	volatile uint64_t t50 = 438364103680LLU;

	t50 = (x369<<(x370==(x371==x372)));

	if (t50 != 59827021195826334LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x373 = 1U;
	static int64_t x374 = 1860432239906LL;
	static volatile int8_t x375 = INT8_MIN;
	int16_t x376 = INT16_MIN;
	volatile int32_t t51 = 913976967;

	t51 = (x373<<(x374==(x375==x376)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x377 = 63U;
	int64_t x378 = INT64_MIN;
	uint8_t x379 = 4U;
	int8_t x380 = 2;
	volatile uint32_t t52 = 3720U;

	t52 = (x377<<(x378==(x379==x380)));

	if (t52 != 63U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x381 = 16323416210420LLU;
	int64_t x382 = -243488269112833LL;
	uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;
	uint64_t t53 = 846891041651695LLU;

	t53 = (x381<<(x382==(x383==x384)));

	if (t53 != 16323416210420LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x385 = 484U;
	uint32_t x386 = 92244U;
	uint16_t x387 = UINT16_MAX;
	int32_t t54 = -942457336;

	t54 = (x385<<(x386==(x387==x388)));

	if (t54 != 484) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x391 = 4;
	int16_t x392 = -1;
	volatile uint32_t t55 = 1U;

	t55 = (x389<<(x390==(x391==x392)));

	if (t55 != 3962097U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x393 = 10339776413935LLU;
	int32_t x394 = -25571027;
	static uint64_t t56 = 2981032217LLU;

	t56 = (x393<<(x394==(x395==x396)));

	if (t56 != 10339776413935LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x397 = 728987099827LL;
	volatile uint16_t x398 = 0U;
	uint32_t x399 = UINT32_MAX;
	int64_t x400 = 1LL;

	t57 = (x397<<(x398==(x399==x400)));

	if (t57 != 1457974199654LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x405 = UINT64_MAX;
	static uint64_t x406 = 18LLU;
	static int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MIN;
	static volatile uint64_t t58 = UINT64_MAX;

	t58 = (x405<<(x406==(x407==x408)));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x413 = 371U;
	static int8_t x414 = -40;
	int32_t x416 = INT32_MIN;
	int32_t t59 = 1237087;

	t59 = (x413<<(x414==(x415==x416)));

	if (t59 != 371) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x421 = UINT16_MAX;
	int16_t x422 = -1;
	static int64_t x423 = INT64_MAX;
	static uint8_t x424 = 1U;
	int32_t t60 = 9530;

	t60 = (x421<<(x422==(x423==x424)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x433 = 693599LLU;
	int16_t x436 = -1;

	t61 = (x433<<(x434==(x435==x436)));

	if (t61 != 693599LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x438 = 10034934044751LLU;
	uint64_t x439 = 7LLU;
	volatile int16_t x440 = INT16_MIN;
	volatile uint64_t t62 = 0LLU;

	t62 = (x437<<(x438==(x439==x440)));

	if (t62 != 1641069569344033030LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x451 = UINT32_MAX;
	volatile int32_t x452 = INT32_MAX;
	static int64_t t63 = INT64_MAX;

	t63 = (x449<<(x450==(x451==x452)));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x454 = INT16_MAX;
	volatile int64_t x455 = -30LL;
	int32_t t64 = -68;

	t64 = (x453<<(x454==(x455==x456)));

	if (t64 != 10392) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x457 = 153U;
	uint16_t x458 = 1U;
	static volatile int8_t x459 = 0;

	t65 = (x457<<(x458==(x459==x460)));

	if (t65 != 153U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x461 = 287LLU;
	static int8_t x462 = INT8_MAX;
	uint64_t x463 = UINT64_MAX;
	int64_t x464 = -1LL;
	volatile uint64_t t66 = 17943502990210799LLU;

	t66 = (x461<<(x462==(x463==x464)));

	if (t66 != 287LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x466 = INT8_MAX;
	int32_t x468 = INT32_MIN;
	static volatile int32_t t67 = -9;

	t67 = (x465<<(x466==(x467==x468)));

	if (t67 != 13) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x473 = 204707793492537LLU;
	volatile int8_t x474 = INT8_MIN;
	int32_t x475 = INT32_MAX;
	int32_t x476 = INT32_MIN;
	uint64_t t68 = 1595LLU;

	t68 = (x473<<(x474==(x475==x476)));

	if (t68 != 204707793492537LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x493 = INT32_MAX;
	static volatile int8_t x494 = INT8_MAX;
	volatile int16_t x495 = 2470;
	int8_t x496 = -1;
	static volatile int32_t t69 = INT32_MAX;

	t69 = (x493<<(x494==(x495==x496)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x498 = -824177988;
	int64_t x499 = 36726720691LL;
	int16_t x500 = INT16_MIN;

	t70 = (x497<<(x498==(x499==x500)));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x505 = 22U;
	int8_t x506 = INT8_MIN;
	volatile int64_t x508 = 2091208279784LL;
	int32_t t71 = 2;

	t71 = (x505<<(x506==(x507==x508)));

	if (t71 != 22) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x521 = 146134U;
	volatile uint16_t x522 = 1487U;
	int16_t x523 = INT16_MAX;
	int8_t x524 = INT8_MAX;
	uint32_t t72 = 52U;

	t72 = (x521<<(x522==(x523==x524)));

	if (t72 != 146134U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x529 = 20U;
	int16_t x530 = INT16_MIN;
	int32_t x531 = -1;
	static uint64_t x532 = UINT64_MAX;
	static volatile int32_t t73 = 956;

	t73 = (x529<<(x530==(x531==x532)));

	if (t73 != 20) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x533 = 232U;
	int8_t x535 = INT8_MIN;
	volatile int32_t t74 = -496621217;

	t74 = (x533<<(x534==(x535==x536)));

	if (t74 != 232) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x537 = 12540427312LLU;
	volatile uint32_t x538 = 909665177U;
	int8_t x539 = INT8_MIN;
	uint16_t x540 = 21692U;
	uint64_t t75 = 6722129583LLU;

	t75 = (x537<<(x538==(x539==x540)));

	if (t75 != 12540427312LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	int64_t x547 = 1916LL;
	int64_t x548 = INT64_MIN;
	static uint32_t t76 = UINT32_MAX;

	t76 = (x545<<(x546==(x547==x548)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x549 = INT8_MAX;
	volatile int64_t x550 = INT64_MIN;
	uint8_t x551 = 3U;
	int64_t x552 = INT64_MAX;

	t77 = (x549<<(x550==(x551==x552)));

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x553 = 190810;
	volatile uint16_t x554 = 385U;
	int32_t x555 = INT32_MAX;
	int32_t t78 = -6;

	t78 = (x553<<(x554==(x555==x556)));

	if (t78 != 190810) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x557 = 2U;
	int32_t x558 = INT32_MIN;
	int16_t x559 = -1;
	uint32_t t79 = 2938U;

	t79 = (x557<<(x558==(x559==x560)));

	if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x561 = 864883667U;
	static int8_t x562 = INT8_MAX;
	int32_t x563 = 7;
	static uint8_t x564 = UINT8_MAX;
	volatile uint32_t t80 = 39U;

	t80 = (x561<<(x562==(x563==x564)));

	if (t80 != 864883667U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x565 = 1U;
	uint64_t x566 = 101508958722LLU;
	int8_t x567 = INT8_MAX;
	static int32_t x568 = INT32_MAX;
	static volatile int32_t t81 = 100958668;

	t81 = (x565<<(x566==(x567==x568)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x569 = UINT32_MAX;
	uint8_t x571 = 7U;
	uint32_t t82 = UINT32_MAX;

	t82 = (x569<<(x570==(x571==x572)));

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x573 = INT64_MAX;
	int64_t x574 = INT64_MIN;
	int32_t x575 = INT32_MAX;
	uint64_t x576 = 120895233212783LLU;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x573<<(x574==(x575==x576)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x577 = 360760502U;
	int8_t x578 = 9;
	static int16_t x579 = INT16_MIN;
	uint32_t t84 = 325248531U;

	t84 = (x577<<(x578==(x579==x580)));

	if (t84 != 360760502U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x581 = 1U;
	static int8_t x583 = 4;
	int16_t x584 = 4;
	volatile int32_t t85 = 11;

	t85 = (x581<<(x582==(x583==x584)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x585 = 1342U;
	uint16_t x586 = 54U;
	static uint8_t x587 = 1U;
	static int16_t x588 = INT16_MIN;
	static int32_t t86 = 245;

	t86 = (x585<<(x586==(x587==x588)));

	if (t86 != 1342) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x593 = 22U;
	int32_t x594 = 114;
	uint16_t x595 = 0U;
	volatile int32_t x596 = INT32_MIN;

	t87 = (x593<<(x594==(x595==x596)));

	if (t87 != 22) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x609 = 0;
	volatile int32_t t88 = -112942320;

	t88 = (x609<<(x610==(x611==x612)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x625 = 65866U;
	static volatile int16_t x626 = INT16_MIN;
	static int32_t x627 = 1;
	uint16_t x628 = 1421U;
	static volatile uint32_t t89 = 83160066U;

	t89 = (x625<<(x626==(x627==x628)));

	if (t89 != 65866U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x637 = 7U;
	int8_t x638 = INT8_MIN;
	int64_t x639 = -133061752283616013LL;
	volatile int32_t t90 = 137976384;

	t90 = (x637<<(x638==(x639==x640)));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x645 = INT32_MAX;
	int8_t x646 = 1;
	int32_t t91 = INT32_MAX;

	t91 = (x645<<(x646==(x647==x648)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x649 = UINT8_MAX;
	int64_t x650 = 4066997922268LL;
	uint16_t x651 = UINT16_MAX;
	static uint64_t x652 = 1068881569502LLU;
	int32_t t92 = 0;

	t92 = (x649<<(x650==(x651==x652)));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x661 = 28582LL;
	static int64_t x662 = -1LL;
	int64_t t93 = 726194179LL;

	t93 = (x661<<(x662==(x663==x664)));

	if (t93 != 28582LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x677 = UINT64_MAX;
	int8_t x678 = INT8_MAX;
	static uint8_t x679 = 12U;
	volatile uint32_t x680 = 6U;
	static uint64_t t94 = UINT64_MAX;

	t94 = (x677<<(x678==(x679==x680)));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x681 = UINT32_MAX;
	uint8_t x682 = UINT8_MAX;
	int16_t x683 = INT16_MIN;
	int16_t x684 = 1738;
	volatile uint32_t t95 = UINT32_MAX;

	t95 = (x681<<(x682==(x683==x684)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x686 = INT8_MIN;
	int8_t x687 = -3;

	t96 = (x685<<(x686==(x687==x688)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x689 = 58U;
	int16_t x690 = -3;
	int16_t x691 = INT16_MIN;
	volatile uint64_t x692 = 556188472LLU;
	uint32_t t97 = 1041729101U;

	t97 = (x689<<(x690==(x691==x692)));

	if (t97 != 58U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x694 = -1;
	int32_t x696 = 1;

	t98 = (x693<<(x694==(x695==x696)));

	if (t98 != 82) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x698 = INT16_MAX;
	volatile uint32_t x699 = 1875U;
	int32_t x700 = INT32_MAX;
	int32_t t99 = INT32_MAX;

	t99 = (x697<<(x698==(x699==x700)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

