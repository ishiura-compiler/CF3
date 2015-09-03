#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 14U;
static int16_t x14 = INT16_MIN;
volatile int32_t x15 = INT32_MIN;
volatile int16_t x19 = INT16_MAX;
static int16_t x21 = INT16_MAX;
int64_t x24 = -517004LL;
int64_t t5 = -47LL;
volatile int16_t x27 = -1;
static uint16_t x34 = 0U;
static volatile int32_t t8 = -2865650;
uint16_t x43 = UINT16_MAX;
uint32_t x44 = 1U;
uint8_t x45 = UINT8_MAX;
volatile int32_t t11 = -2;
uint32_t x57 = 1061061028U;
static int64_t x58 = -5246LL;
static int32_t x59 = INT32_MAX;
int8_t x62 = -1;
uint32_t x66 = UINT32_MAX;
volatile int64_t t18 = 191213736LL;
int32_t x90 = INT32_MIN;
int16_t x96 = INT16_MAX;
volatile uint8_t x103 = 1U;
int64_t t24 = 144467LL;
volatile uint64_t t25 = 843712423LLU;
static uint8_t x117 = UINT8_MAX;
int64_t x119 = INT64_MIN;
volatile int8_t x121 = INT8_MAX;
int16_t x122 = -1;
int8_t x123 = INT8_MIN;
uint32_t x134 = 60U;
int8_t x136 = 1;
int64_t x147 = -1LL;
volatile int64_t t32 = -32037543625LL;
static volatile int16_t x152 = -1;
volatile int64_t t34 = -13LL;
uint64_t x170 = 89790246530LLU;
volatile uint64_t t36 = 36020845410310993LLU;
uint16_t x181 = 6272U;
uint16_t x182 = 12789U;
static int64_t x184 = -1LL;
uint8_t x190 = UINT8_MAX;
static uint8_t x198 = 1U;
int8_t x200 = -6;
volatile int8_t x208 = -1;
volatile uint32_t t44 = 5428U;
int32_t x214 = INT32_MAX;
int16_t x228 = INT16_MIN;
static int32_t t49 = INT32_MAX;
int16_t x234 = -190;
int16_t x235 = INT16_MAX;
volatile uint64_t t51 = 6145420744882716284LLU;
uint32_t x246 = UINT32_MAX;
volatile uint32_t t53 = 3799U;
volatile int32_t x252 = -1584602;
uint8_t x256 = UINT8_MAX;
static volatile uint32_t t55 = 23333U;
uint64_t x260 = UINT64_MAX;
int32_t x262 = -1;
int32_t x264 = INT32_MIN;
int32_t x270 = INT32_MIN;
static int32_t x286 = INT32_MIN;
int64_t x300 = INT64_MAX;
volatile int64_t x303 = 0LL;
volatile int64_t x304 = -1LL;
int8_t x314 = -24;
static int16_t x316 = INT16_MIN;
int8_t x323 = INT8_MIN;
int64_t t72 = 271658LL;
int16_t x343 = 22;
int32_t x344 = INT32_MIN;
static int64_t x347 = -1LL;
int64_t x362 = INT64_MIN;
volatile int8_t x363 = INT8_MIN;
volatile uint8_t x370 = 4U;
volatile uint32_t x372 = 7166U;
volatile uint32_t t80 = 65U;
int8_t x380 = INT8_MIN;
volatile int64_t t81 = -413032382038908LL;
volatile uint16_t x381 = 1U;
int8_t x382 = INT8_MIN;
int8_t x385 = INT8_MIN;
volatile uint32_t x391 = 2058354U;
static int32_t x392 = INT32_MIN;
volatile uint64_t x395 = UINT64_MAX;
uint64_t t85 = 717571993150LLU;
int16_t x398 = INT16_MAX;
uint64_t x406 = UINT64_MAX;
static int64_t x412 = INT64_MIN;
static int16_t x416 = -32;
int16_t x417 = 444;
int64_t x423 = INT64_MIN;
int64_t x431 = -1LL;
int64_t x433 = INT64_MIN;
volatile int16_t x434 = INT16_MIN;
int16_t x443 = -1;
int16_t x450 = -1;
volatile int32_t x451 = INT32_MIN;
int16_t x452 = INT16_MAX;


void f0(void) {
	static uint16_t x1 = UINT16_MAX;
	static int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	uint8_t x4 = 5U;
	static volatile int32_t t0 = -12083;

	t0 = (x1-(x2^(x3%x4)));

	if (t0 != 65663) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int8_t x7 = INT8_MAX;
	volatile int16_t x8 = 13;
	static volatile int32_t t1 = -1324455;

	t1 = (x5-(x6^(x7%x8)));

	if (t1 != 65531) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 2;
	volatile int8_t x10 = 59;
	volatile int16_t x11 = INT16_MAX;
	static uint32_t x12 = 358187115U;
	static uint32_t t2 = 29U;

	t2 = (x9-(x10^(x11%x12)));

	if (t2 != 4294934590U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MAX;
	int8_t x16 = INT8_MAX;
	volatile int64_t t3 = -928575119LL;

	t3 = (x13-(x14^(x15%x16)));

	if (t3 != 9223372036854743047LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = INT32_MAX;
	volatile int64_t x20 = INT64_MIN;
	int64_t t4 = 889188LL;

	t4 = (x17-(x18^(x19%x20)));

	if (t4 != -2147418113LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MIN;
	int32_t x23 = -53448;

	t5 = (x21-(x22^(x23%x24)));

	if (t5 != -9223372036854689593LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -183505216727757LL;
	static volatile uint64_t x26 = UINT64_MAX;
	int16_t x28 = -57;
	volatile uint64_t t6 = 13977383LLU;

	t6 = (x25-(x26^(x27%x28)));

	if (t6 != 18446560568492823859LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x33 = UINT64_MAX;
	int8_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	static volatile uint64_t t7 = UINT64_MAX;

	t7 = (x33-(x34^(x35%x36)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x37 = -23;
	uint8_t x38 = 9U;
	static int32_t x39 = INT32_MIN;
	volatile int8_t x40 = INT8_MIN;

	t8 = (x37-(x38^(x39%x40)));

	if (t8 != -32) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	static int32_t x42 = INT32_MIN;
	static volatile uint64_t t9 = 794962LLU;

	t9 = (x41-(x42^(x43%x44)));

	if (t9 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -3;
	volatile int16_t x47 = INT16_MAX;
	volatile int64_t x48 = -1LL;
	int64_t t10 = 123029296065451LL;

	t10 = (x45-(x46^(x47%x48)));

	if (t10 != 258LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = -7;
	int32_t x54 = INT32_MIN;
	static int32_t x55 = INT32_MIN;
	static int16_t x56 = 1;

	t11 = (x53-(x54^(x55%x56)));

	if (t11 != 2147483641) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x60 = INT8_MIN;
	volatile int64_t t12 = 19964LL;

	t12 = (x57-(x58^(x59%x60)));

	if (t12 != 1061066151LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	uint64_t x63 = UINT64_MAX;
	static int32_t x64 = -992930554;
	static volatile uint64_t t13 = 7415712488LLU;

	t13 = (x61-(x62^(x63%x64)));

	if (t13 != 9223372037847706362LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x65 = 16912248769426LLU;
	int32_t x67 = INT32_MIN;
	uint16_t x68 = UINT16_MAX;
	uint64_t t14 = 1923833693LLU;

	t14 = (x65-(x66^(x67%x68)));

	if (t14 != 16912248736659LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MAX;
	uint8_t x70 = UINT8_MAX;
	volatile int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	static int64_t t15 = 35LL;

	t15 = (x69-(x70^(x71%x72)));

	if (t15 != 2147516160LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 3254511;
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = 37;
	volatile int32_t x80 = INT32_MIN;
	uint32_t t16 = 4U;

	t16 = (x77-(x78^(x79%x80)));

	if (t16 != 3254549U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MIN;
	volatile int64_t x82 = INT64_MIN;
	int32_t x83 = -922470199;
	uint32_t x84 = UINT32_MAX;
	volatile int64_t t17 = -1LL;

	t17 = (x81-(x82^(x83%x84)));

	if (t17 != 9223372033482245943LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MIN;
	int32_t x87 = 204;
	int16_t x88 = -26;

	t18 = (x85-(x86^(x87%x88)));

	if (t18 != 9223372036854775785LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint16_t x91 = 7U;
	static int64_t x92 = INT64_MIN;
	volatile int64_t t19 = -61550671LL;

	t19 = (x89-(x90^(x91%x92)));

	if (t19 != 6442450936LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = -1;
	volatile uint16_t x94 = 0U;
	int16_t x95 = -2;
	int32_t t20 = -666;

	t20 = (x93-(x94^(x95%x96)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 0U;
	static volatile int32_t x98 = 24;
	int16_t x99 = INT16_MIN;
	volatile int64_t x100 = -15LL;
	volatile int64_t t21 = 137348LL;

	t21 = (x97-(x98^(x99%x100)));

	if (t21 != 32LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MAX;
	static int16_t x102 = INT16_MAX;
	int64_t x104 = -1LL;
	static int64_t t22 = 190889LL;

	t22 = (x101-(x102^(x103%x104)));

	if (t22 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	static volatile int32_t x106 = -4;
	int16_t x107 = -1;
	int32_t x108 = INT32_MIN;
	static volatile int32_t t23 = 17;

	t23 = (x105-(x106^(x107%x108)));

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	int64_t x110 = -1LL;
	static int16_t x111 = 10;
	int64_t x112 = INT64_MIN;

	t24 = (x109-(x110^(x111%x112)));

	if (t24 != -32757LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x113 = INT32_MIN;
	volatile int16_t x114 = INT16_MIN;
	uint64_t x115 = 174128LLU;
	uint64_t x116 = UINT64_MAX;

	t25 = (x113-(x114^(x115%x116)));

	if (t25 != 18446744071562254288LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x118 = UINT16_MAX;
	volatile uint32_t x120 = 1822325421U;
	int64_t t26 = -2087288879201645089LL;

	t26 = (x117-(x118^(x119%x120)));

	if (t26 != 820510617LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x124 = 4;
	volatile int32_t t27 = 714962;

	t27 = (x121-(x122^(x123%x124)));

	if (t27 != 128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = -1LL;
	int8_t x126 = 1;
	static uint64_t x127 = 409116908778361752LLU;
	uint64_t x128 = 2000434018062149638LLU;
	static volatile uint64_t t28 = 4433671850LLU;

	t28 = (x125-(x126^(x127%x128)));

	if (t28 != 18037627164931189862LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x133 = 103U;
	uint16_t x135 = UINT16_MAX;
	uint32_t t29 = 366U;

	t29 = (x133-(x134^(x135%x136)));

	if (t29 != 43U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x137 = 346905U;
	static uint16_t x138 = 11478U;
	static uint64_t x139 = 10504LLU;
	volatile int16_t x140 = 1;
	uint64_t t30 = 8691LLU;

	t30 = (x137-(x138^(x139%x140)));

	if (t30 != 335427LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -1LL;
	static int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	static volatile int64_t t31 = INT64_MAX;

	t31 = (x141-(x142^(x143%x144)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MAX;
	uint32_t x146 = UINT32_MAX;
	volatile int32_t x148 = INT32_MIN;

	t32 = (x145-(x146^(x147%x148)));

	if (t32 != 4295000063LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = -1;
	int16_t x150 = -1;
	uint32_t x151 = 61U;
	uint32_t t33 = 1U;

	t33 = (x149-(x150^(x151%x152)));

	if (t33 != 61U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 22U;
	static int64_t x154 = INT64_MAX;
	volatile int64_t x155 = INT64_MIN;
	volatile int32_t x156 = INT32_MIN;

	t34 = (x153-(x154^(x155%x156)));

	if (t34 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x165 = INT64_MIN;
	uint32_t x166 = 37731U;
	volatile int32_t x167 = INT32_MIN;
	static int64_t x168 = INT64_MIN;
	int64_t t35 = -1LL;

	t35 = (x165-(x166^(x167%x168)));

	if (t35 != -9223372034707329891LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MIN;
	int16_t x171 = -1;
	int16_t x172 = -1312;

	t36 = (x169-(x170^(x171%x172)));

	if (t36 != 87642762883LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = 0;
	int8_t x174 = 1;
	volatile int8_t x175 = INT8_MIN;
	uint16_t x176 = 1U;
	volatile int32_t t37 = 178;

	t37 = (x173-(x174^(x175%x176)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x177 = INT16_MIN;
	static int16_t x178 = 178;
	static int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t38 = 19773;

	t38 = (x177-(x178^(x179%x180)));

	if (t38 != -32562) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x183 = 28U;
	int64_t t39 = -2760542LL;

	t39 = (x181-(x182^(x183%x184)));

	if (t39 != -6517LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -1;
	int64_t x186 = 97LL;
	int32_t x187 = 209478;
	static int64_t x188 = -1LL;
	volatile int64_t t40 = -70866274559694783LL;

	t40 = (x185-(x186^(x187%x188)));

	if (t40 != -98LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x189 = UINT64_MAX;
	uint8_t x191 = 55U;
	int8_t x192 = INT8_MAX;
	static volatile uint64_t t41 = 3780LLU;

	t41 = (x189-(x190^(x191%x192)));

	if (t41 != 18446744073709551415LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -1;
	static volatile uint32_t x199 = 34U;
	uint32_t t42 = 137U;

	t42 = (x197-(x198^(x199%x200)));

	if (t42 != 4294967260U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = INT32_MIN;
	uint8_t x206 = UINT8_MAX;
	uint64_t x207 = 3LLU;
	uint64_t t43 = 979263LLU;

	t43 = (x205-(x206^(x207%x208)));

	if (t43 != 18446744071562067716LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x209 = UINT8_MAX;
	uint16_t x210 = 74U;
	uint32_t x211 = 26U;
	static uint8_t x212 = 4U;

	t44 = (x209-(x210^(x211%x212)));

	if (t44 != 183U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x213 = 650771032933LL;
	int32_t x215 = -48334614;
	int32_t x216 = -10326389;
	int64_t t45 = 564397LL;

	t45 = (x213-(x214^(x215%x216)));

	if (t45 != 652911487524LL) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int32_t x219 = -197063191;
	uint16_t x220 = UINT16_MAX;
	int32_t t46 = 379;

	t46 = (x217-(x218^(x219%x220)));

	if (t46 != -2147418668) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x221 = INT16_MAX;
	static uint32_t x222 = 406U;
	uint64_t x223 = 1023LLU;
	volatile int64_t x224 = -1LL;
	uint64_t t47 = 918LLU;

	t47 = (x221-(x222^(x223%x224)));

	if (t47 != 32150LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = 564LL;
	int8_t x226 = -1;
	volatile int64_t x227 = INT64_MAX;
	static int64_t t48 = -263029357LL;

	t48 = (x225-(x226^(x227%x228)));

	if (t48 != 33332LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -1;
	int32_t x230 = INT32_MIN;
	int8_t x231 = -1;
	int16_t x232 = -1;

	t49 = (x229-(x230^(x231%x232)));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x233 = INT32_MIN;
	volatile int32_t x236 = INT32_MAX;
	static volatile int32_t t50 = 85;

	t50 = (x233-(x234^(x235%x236)));

	if (t50 != -2147451069) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = -2;
	int32_t x238 = -481426;
	int16_t x239 = INT16_MIN;
	volatile uint64_t x240 = 1041334585LLU;

	t51 = (x237-(x238^(x239%x240)));

	if (t51 != 965700511LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = -1LL;
	int8_t x243 = -15;
	int64_t x244 = -1LL;
	int64_t t52 = -84LL;

	t52 = (x241-(x242^(x243%x244)));

	if (t52 != -127LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = UINT32_MAX;
	static uint32_t x247 = 980796250U;
	int16_t x248 = INT16_MIN;

	t53 = (x245-(x246^(x247%x248)));

	if (t53 != 980796250U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MAX;
	volatile int64_t t54 = 95800969664762LL;

	t54 = (x249-(x250^(x251%x252)));

	if (t54 != 856751LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = 6U;
	int16_t x254 = INT16_MAX;
	uint32_t x255 = UINT32_MAX;

	t55 = (x253-(x254^(x255%x256)));

	if (t55 != 4294934535U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x257 = -1;
	int64_t x258 = INT64_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile uint64_t t56 = 116171LLU;

	t56 = (x257-(x258^(x259%x260)));

	if (t56 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x261 = INT8_MIN;
	int64_t x263 = -115656786122LL;
	volatile int64_t t57 = 28861780LL;

	t57 = (x261-(x262^(x263%x264)));

	if (t57 != -1840152905LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x265 = -1;
	static volatile int16_t x266 = 7934;
	int32_t x267 = 174938295;
	static uint8_t x268 = UINT8_MAX;
	volatile int32_t t58 = -246370441;

	t58 = (x265-(x266^(x267%x268)));

	if (t58 != -7802) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = INT64_MAX;
	int16_t x271 = -1;
	static volatile uint64_t x272 = 29375933479LLU;
	volatile uint64_t t59 = 4256LLU;

	t59 = (x269-(x270^(x271%x272)));

	if (t59 != 9223372041669920401LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 11U;
	uint64_t x274 = 754LLU;
	static volatile int16_t x275 = INT16_MAX;
	int8_t x276 = INT8_MAX;
	volatile uint64_t t60 = 477LLU;

	t60 = (x273-(x274^(x275%x276)));

	if (t60 != 18446744073709550872LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = UINT32_MAX;
	uint16_t x282 = 10U;
	int32_t x283 = 1;
	uint16_t x284 = 1U;
	volatile uint32_t t61 = 257934U;

	t61 = (x281-(x282^(x283%x284)));

	if (t61 != 4294967285U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x285 = 73558U;
	int16_t x287 = INT16_MAX;
	volatile int8_t x288 = 29;
	volatile uint32_t t62 = 1383631089U;

	t62 = (x285-(x286^(x287%x288)));

	if (t62 != 2147557180U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = -3;
	static volatile int64_t x290 = INT64_MAX;
	volatile int16_t x291 = INT16_MAX;
	static int64_t x292 = -284LL;
	int64_t t63 = 618709956144150LL;

	t63 = (x289-(x290^(x291%x292)));

	if (t63 != -9223372036854775703LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x293 = 1U;
	int64_t x294 = 57LL;
	int16_t x295 = -102;
	static uint64_t x296 = 51055781134182LLU;
	uint64_t t64 = 7455952058800LLU;

	t64 = (x293-(x294^(x295%x296)));

	if (t64 != 18446709002685627620LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	static uint8_t x298 = UINT8_MAX;
	int64_t x299 = INT64_MAX;
	volatile uint64_t t65 = 30374244LLU;

	t65 = (x297-(x298^(x299%x300)));

	if (t65 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MAX;
	static int8_t x302 = 4;
	static volatile int64_t t66 = 55989LL;

	t66 = (x301-(x302^(x303%x304)));

	if (t66 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x305 = 6U;
	int64_t x306 = INT64_MIN;
	static uint32_t x307 = UINT32_MAX;
	int64_t x308 = INT64_MAX;
	volatile int64_t t67 = -1561194008354906LL;

	t67 = (x305-(x306^(x307%x308)));

	if (t67 != 9223372032559808519LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 1U;
	int16_t x311 = INT16_MIN;
	static int32_t x312 = INT32_MAX;
	uint32_t t68 = 21U;

	t68 = (x309-(x310^(x311%x312)));

	if (t68 != 33022U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x313 = INT64_MIN;
	uint16_t x315 = 5U;
	static int64_t t69 = 112437181559LL;

	t69 = (x313-(x314^(x315%x316)));

	if (t69 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x317 = -1;
	int8_t x318 = INT8_MAX;
	int16_t x319 = -27;
	int16_t x320 = 1;
	volatile int32_t t70 = -155918;

	t70 = (x317-(x318^(x319%x320)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = INT32_MIN;
	int8_t x322 = 1;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t71 = 2LLU;

	t71 = (x321-(x322^(x323%x324)));

	if (t71 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x329 = -769841279111315LL;
	int16_t x330 = 1;
	int8_t x331 = INT8_MIN;
	volatile int64_t x332 = INT64_MIN;

	t72 = (x329-(x330^(x331%x332)));

	if (t72 != -769841279111188LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = -938;
	int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MIN;
	static int64_t t73 = -32955081946LL;

	t73 = (x337-(x338^(x339%x340)));

	if (t73 != 9223372036854774870LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint8_t x342 = UINT8_MAX;
	uint32_t t74 = 155122U;

	t74 = (x341-(x342^(x343%x344)));

	if (t74 != 4294967062U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = INT8_MAX;
	volatile int64_t x346 = 8LL;
	int64_t x348 = 26486703992820948LL;
	static volatile int64_t t75 = 473264LL;

	t75 = (x345-(x346^(x347%x348)));

	if (t75 != 136LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x349 = 220815LLU;
	uint8_t x350 = UINT8_MAX;
	int8_t x351 = INT8_MIN;
	int8_t x352 = 1;
	static volatile uint64_t t76 = 104748510838912LLU;

	t76 = (x349-(x350^(x351%x352)));

	if (t76 != 220560LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x357 = UINT32_MAX;
	int64_t x358 = -82013675289144LL;
	static int8_t x359 = -1;
	volatile int32_t x360 = INT32_MIN;
	volatile int64_t t77 = -1539LL;

	t77 = (x357-(x358^(x359%x360)));

	if (t77 != -82009380321848LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x361 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	volatile int64_t t78 = 12LL;

	t78 = (x361-(x362^(x363%x364)));

	if (t78 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = 55773000655LL;
	volatile uint64_t x366 = UINT64_MAX;
	int32_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	uint64_t t79 = 4922373LLU;

	t79 = (x365-(x366^(x367%x368)));

	if (t79 != 55773000655LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = 0U;
	int8_t x371 = 12;

	t80 = (x369-(x370^(x371%x372)));

	if (t80 != 4294967288U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MIN;

	t81 = (x377-(x378^(x379%x380)));

	if (t81 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x383 = -945;
	uint8_t x384 = UINT8_MAX;
	int32_t t82 = 80;

	t82 = (x381-(x382^(x383%x384)));

	if (t82 != -203) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x386 = 579289;
	uint8_t x387 = UINT8_MAX;
	static volatile int32_t x388 = -1;
	static volatile int32_t t83 = 31165;

	t83 = (x385-(x386^(x387%x388)));

	if (t83 != -579417) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = -1;
	int8_t x390 = INT8_MIN;
	volatile uint32_t t84 = 10847U;

	t84 = (x389-(x390^(x391%x392)));

	if (t84 != 2058253U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x393 = 15400;
	static int32_t x394 = INT32_MAX;
	volatile int8_t x396 = INT8_MIN;

	t85 = (x393-(x394^(x395%x396)));

	if (t85 != 18446744071562083496LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x397 = INT16_MIN;
	static uint64_t x399 = UINT64_MAX;
	int8_t x400 = -4;
	uint64_t t86 = 4723981LLU;

	t86 = (x397-(x398^(x399%x400)));

	if (t86 != 18446744073709486084LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = 598U;
	uint16_t x402 = 908U;
	volatile int16_t x403 = INT16_MIN;
	static uint8_t x404 = 1U;
	volatile uint32_t t87 = 2U;

	t87 = (x401-(x402^(x403%x404)));

	if (t87 != 4294966986U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x405 = 5;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = 63;
	volatile uint64_t t88 = 1780464340LLU;

	t88 = (x405-(x406^(x407%x408)));

	if (t88 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x409 = 0U;
	uint8_t x410 = 43U;
	uint32_t x411 = 4709906U;
	int64_t t89 = 127678LL;

	t89 = (x409-(x410^(x411%x412)));

	if (t89 != -4709945LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = INT64_MAX;
	volatile int64_t x414 = INT64_MAX;
	int16_t x415 = 3928;
	int64_t t90 = -58648676LL;

	t90 = (x413-(x414^(x415%x416)));

	if (t90 != 24LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x418 = UINT32_MAX;
	static uint64_t x419 = 57691LLU;
	int32_t x420 = INT32_MIN;
	uint64_t t91 = 9505921466745LLU;

	t91 = (x417-(x418^(x419%x420)));

	if (t91 != 18446744069414642456LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x421 = INT16_MAX;
	int16_t x422 = 1;
	static int32_t x424 = INT32_MAX;
	int64_t t92 = 4334LL;

	t92 = (x421-(x422^(x423%x424)));

	if (t92 != 32768LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x425 = 8U;
	int8_t x426 = 0;
	uint64_t x427 = 227825885736LLU;
	static int32_t x428 = 697;
	volatile uint64_t t93 = 29646444428213075LLU;

	t93 = (x425-(x426^(x427%x428)));

	if (t93 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -29;
	int64_t x430 = INT64_MAX;
	int64_t x432 = -1688323LL;
	static volatile int64_t t94 = 203374LL;

	t94 = (x429-(x430^(x431%x432)));

	if (t94 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x435 = 39U;
	uint16_t x436 = UINT16_MAX;
	volatile int64_t t95 = -4227780709LL;

	t95 = (x433-(x434^(x435%x436)));

	if (t95 != -9223372036854743079LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x437 = INT32_MIN;
	static uint16_t x438 = UINT16_MAX;
	static uint8_t x439 = UINT8_MAX;
	int64_t x440 = INT64_MIN;
	volatile int64_t t96 = -2351871534698473011LL;

	t96 = (x437-(x438^(x439%x440)));

	if (t96 != -2147548928LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = 32;
	uint32_t x442 = 558U;
	int32_t x444 = 13849162;
	volatile uint32_t t97 = 125U;

	t97 = (x441-(x442^(x443%x444)));

	if (t97 != 591U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1LL;
	static int32_t x446 = -1;
	int64_t x447 = INT64_MIN;
	volatile int64_t x448 = -30056594588LL;
	volatile int64_t t98 = -29167771080LL;

	t98 = (x445-(x446^(x447%x448)));

	if (t98 != -14813681416LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x449 = INT16_MAX;
	int32_t t99 = 1018355813;

	t99 = (x449-(x450^(x451%x452)));

	if (t99 != 32766) { NG(); } else { ; }
	
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

