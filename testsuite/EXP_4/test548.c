#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -1;
int16_t x6 = -4087;
static uint64_t x21 = 524249371744LLU;
int32_t x25 = 602118932;
volatile uint32_t x26 = 4765U;
int32_t x27 = INT32_MAX;
int32_t x40 = INT32_MIN;
uint64_t t4 = 62LLU;
int16_t x57 = INT16_MIN;
static volatile int32_t x59 = INT32_MAX;
static int8_t x70 = INT8_MAX;
volatile int64_t t8 = -138387699582890163LL;
int64_t x87 = INT64_MAX;
static int32_t x131 = 62;
int16_t x142 = -9;
volatile int32_t x144 = 1286;
int64_t x147 = 180795LL;
uint64_t x161 = UINT64_MAX;
int32_t x166 = -1;
int8_t x181 = INT8_MAX;
volatile uint8_t x182 = 0U;
static volatile uint64_t t23 = 4034LLU;
int32_t x185 = INT32_MAX;
int16_t x186 = -1;
static int64_t x187 = -1LL;
static volatile int32_t x206 = -4159323;
uint32_t x210 = 2435U;
int64_t x217 = 2107623167609LL;
volatile int32_t x220 = INT32_MIN;
volatile int8_t x236 = INT8_MIN;
volatile int32_t t30 = INT32_MIN;
static uint64_t x241 = UINT64_MAX;
uint32_t x247 = 2U;
volatile int64_t x252 = -1LL;
int16_t x263 = 2861;
uint32_t x269 = 5534126U;
volatile uint64_t t36 = 334793441076379LLU;
uint32_t x276 = UINT32_MAX;
uint64_t x290 = 3879950263912096LLU;
int32_t x291 = INT32_MIN;
uint8_t x294 = UINT8_MAX;
int16_t x296 = INT16_MIN;
int64_t t39 = 702769860789674812LL;
int64_t x299 = -30425689423LL;
int16_t x300 = -1;
static volatile uint64_t t40 = 6451645362443660LLU;
int64_t x313 = INT64_MAX;
int8_t x337 = INT8_MAX;
uint32_t x339 = UINT32_MAX;
volatile int16_t x353 = 1997;
uint64_t x355 = UINT64_MAX;
uint16_t x358 = UINT16_MAX;
int64_t x359 = 1047646210667LL;
int8_t x378 = -22;
static uint32_t x384 = 2U;
uint64_t x388 = 3286688983164627LLU;
uint16_t x404 = 16U;
static volatile int16_t x408 = INT16_MIN;
int16_t x417 = INT16_MAX;
static volatile int16_t x418 = 391;
int16_t x420 = -3780;
int64_t x424 = -1LL;
uint16_t x429 = 2516U;
int8_t x431 = INT8_MAX;
int32_t t54 = 14205;
int64_t x433 = 374338877650LL;
uint32_t x434 = 268361741U;
int32_t x436 = -1;
volatile int32_t x445 = 3802517;
static int64_t x447 = INT64_MAX;
uint64_t x454 = 5320LLU;
int64_t x462 = INT64_MIN;
int64_t x463 = INT64_MIN;
uint16_t x481 = 271U;
uint16_t x493 = UINT16_MAX;
uint32_t t62 = 1U;
static volatile int8_t x588 = -1;
int32_t x601 = 227039980;
uint16_t x606 = 31273U;
volatile int64_t t67 = -731642788LL;
int64_t t68 = 10LL;
static volatile int32_t x627 = INT32_MAX;
static volatile uint32_t x629 = UINT32_MAX;
static uint16_t x646 = 558U;
int64_t x648 = INT64_MIN;
static uint64_t t71 = 2089379290752426LLU;
volatile int64_t x658 = -1LL;
volatile int64_t t73 = -11LL;
static uint64_t t74 = 15833LLU;
uint64_t t75 = 32398LLU;
volatile int64_t t76 = 58243518576LL;
volatile int8_t x709 = INT8_MAX;
uint64_t x710 = UINT64_MAX;
uint8_t x718 = 0U;
static volatile uint16_t x722 = UINT16_MAX;
int64_t x737 = INT64_MAX;
int32_t x761 = INT32_MIN;
int16_t x765 = -1;
uint16_t x768 = 20U;
int8_t x774 = INT8_MAX;
int64_t x812 = -1LL;
uint64_t t89 = 226LLU;
int8_t x824 = 29;
int64_t t90 = INT64_MAX;
uint8_t x825 = UINT8_MAX;
int32_t x845 = -52;
static uint32_t x849 = UINT32_MAX;
int16_t x850 = INT16_MIN;
uint64_t t96 = UINT64_MAX;
int16_t x858 = INT16_MAX;
int32_t x862 = -1;
int64_t t99 = 1026331LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	static int64_t x3 = INT64_MIN;
	int16_t x4 = -42;
	static int64_t t0 = INT64_MIN;

	t0 = (x1-(x2/(x3/x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x7 = -434;
	volatile uint64_t x8 = 195529131LLU;
	volatile uint64_t t1 = 1LLU;

	t1 = (x5-(x6/(x7/x8)));

	if (t1 != 18446744073514022484LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x22 = UINT64_MAX;
	int64_t x23 = 75835089614223118LL;
	int8_t x24 = 20;
	uint64_t t2 = 57088643898LLU;

	t2 = (x21-(x22/(x23/x24)));

	if (t2 != 524249366880LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x28 = 9U;
	volatile uint32_t t3 = 116U;

	t3 = (x25-(x26/(x27/x28)));

	if (t3 != 602118932U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x37 = 393967;
	uint64_t x38 = 308701375421117326LLU;
	uint64_t x39 = UINT64_MAX;

	t4 = (x37-(x38/(x39/x40)));

	if (t4 != 18138042698288828257LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x58 = INT64_MAX;
	uint8_t x60 = 2U;
	static int64_t t5 = -1114519380377LL;

	t5 = (x57-(x58/(x59/x60)));

	if (t5 != -8589967368LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x65 = -31500LL;
	int16_t x66 = INT16_MAX;
	uint64_t x67 = 228703LLU;
	uint16_t x68 = 223U;
	volatile uint64_t t6 = 44044615743723LLU;

	t6 = (x65-(x66/(x67/x68)));

	if (t6 != 18446744073709520085LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x69 = INT16_MAX;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	static int64_t t7 = 6389534LL;

	t7 = (x69-(x70/(x71/x72)));

	if (t7 != 32767LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = INT16_MIN;
	static int64_t x74 = INT64_MIN;
	volatile uint16_t x75 = 31980U;
	uint8_t x76 = 89U;

	t8 = (x73-(x74/(x75/x76)));

	if (t8 != 25691844113768835LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x85 = 3178;
	int16_t x86 = 27;
	uint64_t x88 = 60LLU;
	uint64_t t9 = 929LLU;

	t9 = (x85-(x86/(x87/x88)));

	if (t9 != 3178LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x93 = -811LL;
	uint16_t x94 = UINT16_MAX;
	volatile int16_t x95 = INT16_MAX;
	volatile int8_t x96 = -1;
	volatile int64_t t10 = 97908LL;

	t10 = (x93-(x94/(x95/x96)));

	if (t10 != -809LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x101 = -1;
	int32_t x102 = -1;
	int8_t x103 = INT8_MIN;
	int8_t x104 = INT8_MIN;
	volatile int32_t t11 = 41;

	t11 = (x101-(x102/(x103/x104)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x113 = 0U;
	volatile uint8_t x114 = 11U;
	uint16_t x115 = 228U;
	int8_t x116 = -1;
	volatile int32_t t12 = 2720;

	t12 = (x113-(x114/(x115/x116)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x129 = INT64_MIN;
	uint64_t x130 = 1863857806LLU;
	uint16_t x132 = 12U;
	uint64_t t13 = 7578308685LLU;

	t13 = (x129-(x130/(x131/x132)));

	if (t13 != 9223372036482004247LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int64_t x134 = -1LL;
	int32_t x135 = -1;
	int8_t x136 = 1;
	int64_t t14 = 1LL;

	t14 = (x133-(x134/(x135/x136)));

	if (t14 != 65534LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x137 = 9258;
	int16_t x138 = -1;
	int8_t x139 = INT8_MAX;
	int64_t x140 = -1LL;
	volatile int64_t t15 = 22296155930254989LL;

	t15 = (x137-(x138/(x139/x140)));

	if (t15 != 9258LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x141 = INT64_MAX;
	static int64_t x143 = INT64_MIN;
	int64_t t16 = INT64_MAX;

	t16 = (x141-(x142/(x143/x144)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x145 = UINT64_MAX;
	uint16_t x146 = UINT16_MAX;
	static volatile int8_t x148 = INT8_MAX;
	uint64_t t17 = 94116617202LLU;

	t17 = (x145-(x146/(x147/x148)));

	if (t17 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint64_t x150 = 552784LLU;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MIN;
	static uint64_t t18 = 1LLU;

	t18 = (x149-(x150/(x151/x152)));

	if (t18 != 65535LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x157 = -1;
	int64_t x158 = INT64_MIN;
	int64_t x159 = 554755122LL;
	uint8_t x160 = UINT8_MAX;
	volatile int64_t t19 = 3LL;

	t19 = (x157-(x158/(x159/x160)));

	if (t19 != 4239636699832LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x162 = INT64_MIN;
	int32_t x163 = -5192436;
	static volatile int32_t x164 = -1;
	volatile uint64_t t20 = 54LLU;

	t20 = (x161-(x162/(x163/x164)));

	if (t20 != 1776309238447LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x165 = -8561;
	int64_t x167 = INT64_MAX;
	uint16_t x168 = UINT16_MAX;
	int64_t t21 = 9891879890181134LL;

	t21 = (x165-(x166/(x167/x168)));

	if (t21 != -8561LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x177 = 5902U;
	int8_t x178 = INT8_MIN;
	static volatile int16_t x179 = INT16_MIN;
	static int32_t x180 = -37;
	static int32_t t22 = -39;

	t22 = (x177-(x178/(x179/x180)));

	if (t22 != 5902) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x183 = -1;
	static uint64_t x184 = UINT64_MAX;

	t23 = (x181-(x182/(x183/x184)));

	if (t23 != 127LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x188 = 476500379LLU;
	volatile uint64_t t24 = 406003LLU;

	t24 = (x185-(x186/(x187/x188)));

	if (t24 != 1670983268LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x189 = INT64_MAX;
	static int32_t x190 = INT32_MAX;
	static int64_t x191 = INT64_MIN;
	static int8_t x192 = -22;
	static int64_t t25 = INT64_MAX;

	t25 = (x189-(x190/(x191/x192)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x205 = 9106;
	static int64_t x207 = 260986276298LL;
	int16_t x208 = 9;
	volatile int64_t t26 = 689LL;

	t26 = (x205-(x206/(x207/x208)));

	if (t26 != 9106LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x209 = INT8_MIN;
	int16_t x211 = -1;
	static volatile uint32_t x212 = 408926554U;
	uint32_t t27 = 9795594U;

	t27 = (x209-(x210/(x211/x212)));

	if (t27 != 4294966925U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x218 = INT64_MAX;
	volatile uint64_t x219 = UINT64_MAX;
	volatile uint64_t t28 = 1593451766LLU;

	t28 = (x217-(x218/(x219/x220)));

	if (t28 != 9223374144477943418LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x229 = INT32_MIN;
	uint64_t x230 = UINT64_MAX;
	static uint8_t x231 = UINT8_MAX;
	int32_t x232 = -1;
	volatile uint64_t t29 = 66949986953838126LLU;

	t29 = (x229-(x230/(x231/x232)));

	if (t29 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x233 = INT32_MIN;
	int16_t x234 = -1;
	int16_t x235 = 4459;

	t30 = (x233-(x234/(x235/x236)));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x242 = INT32_MAX;
	int64_t x243 = INT64_MIN;
	uint32_t x244 = UINT32_MAX;
	static uint64_t t31 = UINT64_MAX;

	t31 = (x241-(x242/(x243/x244)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x245 = UINT8_MAX;
	static uint32_t x246 = 2625869U;
	int64_t x248 = -1LL;
	volatile int64_t t32 = -1987563199836586448LL;

	t32 = (x245-(x246/(x247/x248)));

	if (t32 != 1313189LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	int16_t x251 = INT16_MIN;
	int64_t t33 = 245728286283550LL;

	t33 = (x249-(x250/(x251/x252)));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x253 = 0;
	int32_t x254 = -1;
	int8_t x255 = INT8_MIN;
	static int8_t x256 = -7;
	int32_t t34 = 459635;

	t34 = (x253-(x254/(x255/x256)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x261 = -1;
	int64_t x262 = INT64_MAX;
	int32_t x264 = -2563;
	volatile int64_t t35 = -922709752339376107LL;

	t35 = (x261-(x262/(x263/x264)));

	if (t35 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = INT32_MIN;
	int32_t x272 = -109;

	t36 = (x269-(x270/(x271/x272)));

	if (t36 != 18446743137412175102LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x273 = 7197717874720870LLU;
	uint8_t x274 = UINT8_MAX;
	int16_t x275 = -1;
	volatile uint64_t t37 = 268069671339LLU;

	t37 = (x273-(x274/(x275/x276)));

	if (t37 != 7197717874720615LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x289 = 11809545U;
	static volatile int32_t x292 = INT32_MIN;
	uint64_t t38 = 8126682942LLU;

	t38 = (x289-(x290/(x291/x292)));

	if (t38 != 18442864123457449065LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x293 = -714294485258222LL;
	volatile int64_t x295 = INT64_MIN;

	t39 = (x293-(x294/(x295/x296)));

	if (t39 != -714294485258222LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x297 = 6472836923100LLU;
	volatile uint16_t x298 = 5124U;

	t40 = (x297-(x298/(x299/x300)));

	if (t40 != 6472836923100LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x314 = -8479240;
	uint64_t x315 = UINT64_MAX;
	int16_t x316 = 13139;
	volatile uint64_t t41 = 7866935618148161467LLU;

	t41 = (x313-(x314/(x315/x316)));

	if (t41 != 9223372036854762669LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x317 = 0LLU;
	static int64_t x318 = -1551764211855556LL;
	volatile int16_t x319 = INT16_MIN;
	int16_t x320 = -1;
	volatile uint64_t t42 = 9942357559LLU;

	t42 = (x317-(x318/(x319/x320)));

	if (t42 != 47356085566LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x338 = UINT64_MAX;
	int8_t x340 = -1;
	volatile uint64_t t43 = 54899893062LLU;

	t43 = (x337-(x338/(x339/x340)));

	if (t43 != 128LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x354 = INT64_MAX;
	int8_t x356 = -9;
	uint64_t t44 = 269025LLU;

	t44 = (x353-(x354/(x355/x356)));

	if (t44 != 9223372036854777806LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x357 = INT32_MAX;
	uint32_t x360 = 34402U;
	static int64_t t45 = 36279522LL;

	t45 = (x357-(x358/(x359/x360)));

	if (t45 != 2147483647LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x369 = 1U;
	static int32_t x370 = INT32_MIN;
	int16_t x371 = -954;
	int8_t x372 = INT8_MIN;
	volatile int32_t t46 = -449139;

	t46 = (x369-(x370/(x371/x372)));

	if (t46 != 306783379) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x377 = INT8_MAX;
	volatile int8_t x379 = INT8_MIN;
	static int8_t x380 = INT8_MAX;
	static volatile int32_t t47 = 6;

	t47 = (x377-(x378/(x379/x380)));

	if (t47 != 105) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x381 = 0U;
	static int8_t x382 = -1;
	int16_t x383 = -516;
	uint32_t t48 = 1363053U;

	t48 = (x381-(x382/(x383/x384)));

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x385 = UINT8_MAX;
	volatile uint32_t x386 = 266659104U;
	volatile int32_t x387 = INT32_MIN;
	static volatile uint64_t t49 = 2750LLU;

	t49 = (x385-(x386/(x387/x388)));

	if (t49 != 18446744073709504356LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x401 = INT64_MIN;
	static int64_t x402 = -1LL;
	static volatile int8_t x403 = INT8_MAX;
	volatile int64_t t50 = INT64_MIN;

	t50 = (x401-(x402/(x403/x404)));

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x405 = 122U;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MAX;
	int32_t t51 = 48;

	t51 = (x405-(x406/(x407/x408)));

	if (t51 != 122) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x419 = UINT64_MAX;
	volatile uint64_t t52 = 5922762582296LLU;

	t52 = (x417-(x418/(x419/x420)));

	if (t52 != 32376LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x421 = -1;
	static uint32_t x422 = 1226958423U;
	static volatile int16_t x423 = 1;
	volatile int64_t t53 = -1618732348575176101LL;

	t53 = (x421-(x422/(x423/x424)));

	if (t53 != 1226958422LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x430 = -27;
	uint16_t x432 = 3U;

	t54 = (x429-(x430/(x431/x432)));

	if (t54 != 2516) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x435 = 1;
	static volatile int64_t t55 = 835416846LL;

	t55 = (x433-(x434/(x435/x436)));

	if (t55 != 374338877650LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x446 = UINT64_MAX;
	int32_t x448 = INT32_MIN;
	volatile uint64_t t56 = 19701828LLU;

	t56 = (x445-(x446/(x447/x448)));

	if (t56 != 3802516LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x453 = -1LL;
	uint64_t x455 = UINT64_MAX;
	int16_t x456 = INT16_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (x453-(x454/(x455/x456)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x461 = -1;
	uint16_t x464 = 520U;
	int64_t t58 = -209994872783351LL;

	t58 = (x461-(x462/(x463/x464)));

	if (t58 != -521LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x482 = -1;
	volatile int32_t x483 = -17055;
	uint16_t x484 = 5U;
	volatile int32_t t59 = -187204;

	t59 = (x481-(x482/(x483/x484)));

	if (t59 != 271) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x494 = 739170U;
	uint64_t x495 = UINT64_MAX;
	volatile uint32_t x496 = UINT32_MAX;
	volatile uint64_t t60 = 22267LLU;

	t60 = (x493-(x494/(x495/x496)));

	if (t60 != 65535LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x505 = -6;
	volatile uint64_t x506 = 4999568351119239301LLU;
	int16_t x507 = 777;
	volatile int8_t x508 = 7;
	volatile uint64_t t61 = 415925365LLU;

	t61 = (x505-(x506/(x507/x508)));

	if (t61 != 18401702917393162067LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x513 = INT8_MAX;
	uint32_t x514 = UINT32_MAX;
	volatile int32_t x515 = INT32_MIN;
	volatile int32_t x516 = 4041119;

	t62 = (x513-(x514/(x515/x516)));

	if (t62 != 126U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x529 = -1LL;
	int16_t x530 = -587;
	uint64_t x531 = 15754411166652950LLU;
	static volatile uint32_t x532 = UINT32_MAX;
	volatile uint64_t t63 = 1024472LLU;

	t63 = (x529-(x530/(x531/x532)));

	if (t63 != 18446739044757556539LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x557 = 0;
	int16_t x558 = INT16_MIN;
	int32_t x559 = -1;
	static uint64_t x560 = UINT64_MAX;
	volatile uint64_t t64 = 3917LLU;

	t64 = (x557-(x558/(x559/x560)));

	if (t64 != 32768LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x585 = INT16_MAX;
	int64_t x586 = INT64_MIN;
	int16_t x587 = -1722;
	volatile int64_t t65 = 65LL;

	t65 = (x585-(x586/(x587/x588)));

	if (t65 != 5356197466266667LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x602 = INT64_MAX;
	uint64_t x603 = 203089100352359LLU;
	uint8_t x604 = UINT8_MAX;
	uint64_t t66 = 34249468208169LLU;

	t66 = (x601-(x602/(x603/x604)));

	if (t66 != 215459054LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x605 = INT64_MIN;
	int8_t x607 = 34;
	volatile int8_t x608 = -17;

	t67 = (x605-(x606/(x607/x608)));

	if (t67 != -9223372036854760172LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x617 = 1U;
	int8_t x618 = 0;
	static int32_t x619 = INT32_MAX;
	int64_t x620 = -1LL;

	t68 = (x617-(x618/(x619/x620)));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x625 = 4U;
	int32_t x626 = -362;
	int8_t x628 = INT8_MIN;
	volatile int32_t t69 = 0;

	t69 = (x625-(x626/(x627/x628)));

	if (t69 != 4) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x630 = -1LL;
	static int16_t x631 = INT16_MIN;
	volatile int8_t x632 = INT8_MIN;
	volatile int64_t t70 = 25267631183610188LL;

	t70 = (x629-(x630/(x631/x632)));

	if (t70 != 4294967295LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x645 = -45155208403350897LL;
	uint64_t x647 = UINT64_MAX;

	t71 = (x645-(x646/(x647/x648)));

	if (t71 != 18401588865306200161LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x653 = INT8_MIN;
	int64_t x654 = INT64_MAX;
	uint64_t x655 = 836241453LLU;
	static uint64_t x656 = 355723LLU;
	uint64_t t72 = 13335604431015LLU;

	t72 = (x653-(x654/(x655/x656)));

	if (t72 != 18442819234544932435LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x657 = UINT8_MAX;
	int8_t x659 = -1;
	int32_t x660 = -1;

	t73 = (x657-(x658/(x659/x660)));

	if (t73 != 256LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x685 = 46U;
	int16_t x686 = -90;
	uint64_t x687 = 1675096383713879627LLU;
	volatile uint8_t x688 = 31U;

	t74 = (x685-(x686/(x687/x688)));

	if (t74 != 18446744073709551321LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x689 = 1U;
	uint64_t x690 = 236676LLU;
	static uint64_t x691 = UINT64_MAX;
	int32_t x692 = -1463;

	t75 = (x689-(x690/(x691/x692)));

	if (t75 != 18446744073709314941LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x697 = -2LL;
	int64_t x698 = INT64_MIN;
	volatile int16_t x699 = INT16_MAX;
	int32_t x700 = -1;

	t76 = (x697-(x698/(x699/x700)));

	if (t76 != -281483566907402LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x711 = INT8_MIN;
	uint8_t x712 = 3U;
	uint64_t t77 = 0LLU;

	t77 = (x709-(x710/(x711/x712)));

	if (t77 != 126LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x717 = 29589162046LL;
	int32_t x719 = 2272799;
	uint8_t x720 = 16U;
	volatile int64_t t78 = -35LL;

	t78 = (x717-(x718/(x719/x720)));

	if (t78 != 29589162046LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x721 = INT8_MIN;
	int16_t x723 = -1;
	volatile uint32_t x724 = 459732283U;
	static uint32_t t79 = 1279716U;

	t79 = (x721-(x722/(x723/x724)));

	if (t79 != 4294959887U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x729 = UINT16_MAX;
	volatile int16_t x730 = 0;
	volatile uint16_t x731 = 5U;
	int16_t x732 = -1;
	int32_t t80 = 1482;

	t80 = (x729-(x730/(x731/x732)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x738 = INT64_MAX;
	uint64_t x739 = UINT64_MAX;
	static int16_t x740 = INT16_MIN;
	uint64_t t81 = 43107526113781717LLU;

	t81 = (x737-(x738/(x739/x740)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x762 = INT16_MAX;
	uint64_t x763 = 122533407LLU;
	volatile int32_t x764 = 1562;
	volatile uint64_t t82 = 1742487937664109LLU;

	t82 = (x761-(x762/(x763/x764)));

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x766 = 59U;
	volatile uint32_t x767 = UINT32_MAX;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x765-(x766/(x767/x768)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MIN;
	uint8_t x771 = UINT8_MAX;
	int8_t x772 = INT8_MAX;
	volatile int64_t t84 = -217LL;

	t84 = (x769-(x770/(x771/x772)));

	if (t84 != -9223372036854759424LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x773 = 7908569LLU;
	uint16_t x775 = 2783U;
	int8_t x776 = -1;
	uint64_t t85 = 1648320513206850037LLU;

	t85 = (x773-(x774/(x775/x776)));

	if (t85 != 7908569LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x781 = UINT32_MAX;
	uint8_t x782 = UINT8_MAX;
	int32_t x783 = -1;
	uint64_t x784 = UINT64_MAX;
	volatile uint64_t t86 = 131721028105LLU;

	t86 = (x781-(x782/(x783/x784)));

	if (t86 != 4294967040LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x797 = UINT8_MAX;
	uint32_t x798 = 21927071U;
	int16_t x799 = INT16_MIN;
	int16_t x800 = 30;
	static volatile uint32_t t87 = 6195712U;

	t87 = (x797-(x798/(x799/x800)));

	if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x809 = INT16_MAX;
	int16_t x810 = -4057;
	volatile int16_t x811 = -7229;
	volatile int64_t t88 = 2670LL;

	t88 = (x809-(x810/(x811/x812)));

	if (t88 != 32767LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x817 = 50U;
	volatile uint16_t x818 = 874U;
	volatile uint64_t x819 = UINT64_MAX;
	volatile uint16_t x820 = 280U;

	t89 = (x817-(x818/(x819/x820)));

	if (t89 != 50LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x821 = INT64_MAX;
	static uint16_t x822 = 1U;
	uint16_t x823 = UINT16_MAX;

	t90 = (x821-(x822/(x823/x824)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x826 = UINT32_MAX;
	int32_t x827 = INT32_MAX;
	volatile int8_t x828 = -37;
	volatile uint32_t t91 = 46696U;

	t91 = (x825-(x826/(x827/x828)));

	if (t91 != 254U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x833 = 0;
	uint16_t x834 = 0U;
	uint32_t x835 = UINT32_MAX;
	static int32_t x836 = -1;
	uint32_t t92 = 31142U;

	t92 = (x833-(x834/(x835/x836)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x837 = 15U;
	static uint16_t x838 = UINT16_MAX;
	volatile uint64_t x839 = 549560755902890247LLU;
	uint8_t x840 = 1U;
	volatile uint64_t t93 = 235952162736187LLU;

	t93 = (x837-(x838/(x839/x840)));

	if (t93 != 15LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x846 = 124938217LLU;
	static int64_t x847 = INT64_MAX;
	volatile int8_t x848 = -57;
	static volatile uint64_t t94 = 54373303314LLU;

	t94 = (x845-(x846/(x847/x848)));

	if (t94 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x851 = 6015330639093760LL;
	int32_t x852 = 1;
	int64_t t95 = -9518812LL;

	t95 = (x849-(x850/(x851/x852)));

	if (t95 != 4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x853 = -1;
	uint64_t x854 = 1155280LLU;
	int64_t x855 = INT64_MIN;
	uint32_t x856 = UINT32_MAX;

	t96 = (x853-(x854/(x855/x856)));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x857 = -321871865LL;
	volatile uint64_t x859 = UINT64_MAX;
	int32_t x860 = -4611753;
	volatile uint64_t t97 = 3391223082180972691LLU;

	t97 = (x857-(x858/(x859/x860)));

	if (t97 != 18446744073387646984LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x861 = 745940094U;
	uint64_t x863 = UINT64_MAX;
	int16_t x864 = INT16_MIN;
	uint64_t t98 = 48627562LLU;

	t98 = (x861-(x862/(x863/x864)));

	if (t98 != 745940095LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x869 = -1;
	uint16_t x870 = UINT16_MAX;
	volatile int64_t x871 = INT64_MIN;
	volatile int16_t x872 = -1478;

	t99 = (x869-(x870/(x871/x872)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

