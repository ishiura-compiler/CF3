#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = -3928;
uint32_t x12 = 26938U;
int16_t x16 = INT16_MIN;
uint16_t x17 = 1424U;
static volatile int32_t x20 = -1;
static int8_t x42 = INT8_MAX;
static int8_t x57 = INT8_MIN;
int8_t x58 = -1;
uint32_t x61 = 12256U;
int64_t x62 = INT64_MIN;
int32_t x64 = -1;
int16_t x68 = -1;
uint32_t x69 = UINT32_MAX;
uint32_t x84 = UINT32_MAX;
int64_t x90 = -1LL;
volatile int16_t x102 = INT16_MIN;
static volatile int8_t x111 = -1;
static uint32_t t14 = 16198602U;
int32_t x122 = -241589137;
volatile uint64_t t16 = 5889284296LLU;
int64_t x125 = 1776742161081737075LL;
volatile int8_t x126 = INT8_MIN;
int8_t x128 = INT8_MIN;
int64_t x134 = INT64_MAX;
static uint64_t x149 = UINT64_MAX;
int8_t x151 = 3;
int8_t x153 = INT8_MIN;
int32_t t23 = -26811;
uint16_t x170 = UINT16_MAX;
int64_t x171 = 878444010704LL;
static uint32_t x184 = UINT32_MAX;
int16_t x191 = -1;
int8_t x194 = INT8_MAX;
volatile uint16_t x212 = 3U;
volatile int32_t t30 = 0;
volatile uint16_t x213 = 12U;
volatile uint32_t x222 = 15U;
int16_t x231 = -1;
volatile int32_t t35 = -23374727;
volatile int64_t t38 = 4204281LL;
int8_t x293 = INT8_MAX;
int64_t x298 = -1LL;
uint64_t x320 = 86650709628672LLU;
uint8_t x341 = 0U;
int32_t x357 = -1;
uint64_t t51 = 665578LLU;
uint16_t x455 = UINT16_MAX;
int64_t x456 = 17722859618120LL;
int32_t x466 = INT32_MAX;
int8_t x469 = INT8_MAX;
int16_t x470 = INT16_MIN;
volatile int64_t t58 = -30LL;
static uint32_t x484 = 9727749U;
int32_t x490 = INT32_MIN;
uint8_t x501 = 37U;
int8_t x503 = INT8_MAX;
int32_t t61 = -9389778;
static volatile int16_t x516 = INT16_MAX;
uint8_t x521 = 0U;
volatile uint32_t x542 = 903497U;
static volatile uint32_t t67 = 2127U;
uint32_t x546 = 13584773U;
uint64_t t68 = 67343790197363LLU;
int8_t x550 = INT8_MAX;
uint16_t x551 = UINT16_MAX;
volatile uint32_t t69 = 84516463U;
int8_t x561 = -1;
volatile uint8_t x562 = 83U;
uint16_t x565 = UINT16_MAX;
uint8_t x569 = 22U;
uint16_t x580 = UINT16_MAX;
uint32_t t73 = 1507783U;
volatile int64_t t74 = 1LL;
int16_t x597 = 45;
uint64_t x607 = UINT64_MAX;
int16_t x611 = INT16_MIN;
volatile int32_t t79 = 52696;
int16_t x625 = 1;
uint16_t x627 = 1U;
int32_t x630 = INT32_MIN;
int8_t x633 = INT8_MAX;
uint16_t x635 = 0U;
int16_t x650 = INT16_MIN;
int16_t x654 = -16139;
int64_t x655 = 1547888140LL;
int64_t t85 = 8483916774940239LL;
volatile uint32_t x667 = 1719580U;
volatile int64_t x673 = INT64_MIN;
uint32_t x674 = 1807262409U;
volatile uint64_t t87 = 63892LLU;
static uint8_t x691 = 1U;
static uint8_t x697 = 12U;
volatile uint64_t t93 = 67657983865700LLU;
volatile int64_t t95 = 3253768LL;
volatile uint64_t t96 = 91324845124894LLU;
volatile int64_t t97 = -636349974LL;
int64_t x756 = INT64_MIN;
int64_t t99 = 6745388LL;


void f0(void) {
	static uint8_t x9 = UINT8_MAX;
	static int32_t x11 = INT32_MIN;
	static uint32_t t0 = 28426U;

	t0 = (x9-(x10*(x11+x12)));

	if (t0 != 105812719U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	static int16_t x14 = 1;
	volatile uint64_t x15 = 1808996281LLU;
	volatile uint64_t t1 = 12961618381784267LLU;

	t1 = (x13-(x14*(x15+x16)));

	if (t1 != 18446744071900588102LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x18 = INT8_MIN;
	static volatile uint64_t x19 = UINT64_MAX;
	volatile uint64_t t2 = 394891618988370LLU;

	t2 = (x17-(x18*(x19+x20)));

	if (t2 != 1168LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = -1501222028891667LL;
	static uint8_t x30 = 0U;
	int32_t x31 = -15527;
	volatile uint8_t x32 = 1U;
	volatile int64_t t3 = -999LL;

	t3 = (x29-(x30*(x31+x32)));

	if (t3 != -1501222028891667LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x41 = UINT8_MAX;
	uint32_t x43 = 1U;
	int64_t x44 = -8632833LL;
	static int64_t t4 = 9940279668LL;

	t4 = (x41-(x42*(x43+x44)));

	if (t4 != 1096369919LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int64_t x47 = 34945LL;
	int32_t x48 = -1;
	volatile int64_t t5 = -499135139970611LL;

	t5 = (x45-(x46*(x47+x48)));

	if (t5 != -4437889LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MIN;
	uint64_t t6 = 263129627LLU;

	t6 = (x49-(x50*(x51+x52)));

	if (t6 != 9223301668110565376LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x59 = INT8_MAX;
	int8_t x60 = INT8_MIN;
	static int32_t t7 = -29275794;

	t7 = (x57-(x58*(x59+x60)));

	if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x63 = 129328332570351735LLU;
	uint64_t t8 = 0LLU;

	t8 = (x61-(x62*(x63+x64)));

	if (t8 != 12256LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x65 = 1U;
	int64_t x66 = INT64_MAX;
	uint64_t x67 = 70310624444095LLU;
	uint64_t t9 = 168373LLU;

	t9 = (x65-(x66*(x67+x68)));

	if (t9 != 70310624444095LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x70 = 21353641531675LLU;
	uint16_t x71 = 15650U;
	int8_t x72 = 31;
	uint64_t t10 = 2058812886966756785LLU;

	t10 = (x69-(x70*(x71+x72)));

	if (t10 != 18111897625146323236LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x81 = INT8_MIN;
	static int64_t x82 = -360386622LL;
	static int16_t x83 = INT16_MAX;
	volatile int64_t t11 = -1320050499826LL;

	t11 = (x81-(x82*(x83+x84)));

	if (t11 != 11808428056324LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x89 = -1LL;
	static uint32_t x91 = 3U;
	volatile int8_t x92 = -7;
	volatile int64_t t12 = 646879661665310990LL;

	t12 = (x89-(x90*(x91+x92)));

	if (t12 != 4294967291LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x101 = -218;
	int64_t x103 = -114041865229LL;
	uint16_t x104 = 31035U;
	int64_t t13 = -29595357943903903LL;

	t13 = (x101-(x102*(x103+x104)));

	if (t13 != -3736922822869210LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = 13514637U;
	volatile uint8_t x112 = UINT8_MAX;

	t14 = (x109-(x110*(x111+x112)));

	if (t14 != 862216730U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x113 = 6;
	int16_t x114 = 6571;
	volatile int16_t x115 = INT16_MIN;
	static uint32_t x116 = UINT32_MAX;
	volatile uint32_t t15 = 236U;

	t15 = (x113-(x114*(x115+x116)));

	if (t15 != 215325105U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x121 = UINT64_MAX;
	static int16_t x123 = INT16_MAX;
	volatile int64_t x124 = -1LL;

	t16 = (x121-(x122*(x123+x124)));

	if (t16 != 7915909662941LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x127 = -1802;
	static volatile int64_t t17 = 426LL;

	t17 = (x125-(x126*(x127+x128)));

	if (t17 != 1776742161081490035LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x133 = INT16_MAX;
	uint32_t x135 = UINT32_MAX;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t18 = 947979248LLU;

	t18 = (x133-(x134*(x135+x136)));

	if (t18 != 4295000061LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x141 = INT8_MAX;
	static int8_t x142 = -25;
	int8_t x143 = 44;
	uint8_t x144 = UINT8_MAX;
	static volatile int32_t t19 = -9;

	t19 = (x141-(x142*(x143+x144)));

	if (t19 != 7602) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x145 = -765;
	uint16_t x146 = UINT16_MAX;
	int64_t x147 = 25LL;
	static int8_t x148 = INT8_MAX;
	volatile int64_t t20 = -384807851397975326LL;

	t20 = (x145-(x146*(x147+x148)));

	if (t20 != -9962085LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x150 = 11U;
	int8_t x152 = INT8_MAX;
	uint64_t t21 = 2LLU;

	t21 = (x149-(x150*(x151+x152)));

	if (t21 != 18446744073709550185LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x154 = -1;
	int8_t x155 = INT8_MIN;
	uint8_t x156 = 6U;
	int32_t t22 = -226706549;

	t22 = (x153-(x154*(x155+x156)));

	if (t22 != -250) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x157 = -869;
	uint8_t x158 = 20U;
	int16_t x159 = INT16_MIN;
	static int32_t x160 = -1;

	t23 = (x157-(x158*(x159+x160)));

	if (t23 != 654511) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x161 = 25076U;
	int32_t x162 = -1;
	volatile int16_t x163 = 7650;
	static int32_t x164 = 3356;
	volatile int32_t t24 = -924;

	t24 = (x161-(x162*(x163+x164)));

	if (t24 != 36082) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x172 = INT16_MIN;
	volatile int64_t t25 = -21220LL;

	t25 = (x169-(x170*(x171+x172)));

	if (t25 != -57568821799068465LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x181 = -502063;
	uint64_t x182 = 35386144238LLU;
	int16_t x183 = INT16_MIN;
	uint64_t t26 = 531654257931LLU;

	t26 = (x181-(x182*(x183+x184)));

	if (t26 != 14039523998197157055LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = INT32_MIN;
	static uint32_t x187 = 134020759U;
	uint16_t x188 = UINT16_MAX;
	uint32_t t27 = 13U;

	t27 = (x185-(x186*(x187+x188)));

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x189 = UINT16_MAX;
	uint64_t x190 = 253243854703654816LLU;
	volatile uint8_t x192 = UINT8_MAX;
	uint64_t t28 = 2LLU;

	t28 = (x189-(x190*(x191+x192)));

	if (t28 != 9463037200109948735LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x193 = INT64_MIN;
	volatile int32_t x195 = INT32_MIN;
	int64_t x196 = -1LL;
	int64_t t29 = -23956153296833LL;

	t29 = (x193-(x194*(x195+x196)));

	if (t29 != -9223371764124352385LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x209 = INT16_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = 0;

	t30 = (x209-(x210*(x211+x212)));

	if (t30 != 32002) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x214 = 801928424001785127LLU;
	static int16_t x215 = INT16_MIN;
	int32_t x216 = -363504947;
	volatile uint64_t t31 = 4788965LLU;

	t31 = (x213-(x214*(x215+x216)));

	if (t31 != 8765642863533949393LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x217 = 1U;
	static uint32_t x218 = UINT32_MAX;
	int32_t x219 = 2;
	uint64_t x220 = 136519506381LLU;
	volatile uint64_t t32 = 91LLU;

	t32 = (x217-(x218*(x219+x220)));

	if (t32 != 3948995314176907728LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x221 = UINT64_MAX;
	uint64_t x223 = UINT64_MAX;
	uint16_t x224 = 103U;
	static volatile uint64_t t33 = 4114452LLU;

	t33 = (x221-(x222*(x223+x224)));

	if (t33 != 18446744073709550085LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x225 = 3U;
	int16_t x226 = INT16_MAX;
	volatile int8_t x227 = 54;
	int8_t x228 = INT8_MIN;
	volatile int32_t t34 = -2;

	t34 = (x225-(x226*(x227+x228)));

	if (t34 != 2424761) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x229 = 8U;
	static int16_t x230 = -1;
	static uint16_t x232 = 895U;

	t35 = (x229-(x230*(x231+x232)));

	if (t35 != 902) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x241 = -2;
	static volatile int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	static int32_t t36 = -26;

	t36 = (x241-(x242*(x243+x244)));

	if (t36 != 1073676286) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x253 = INT32_MAX;
	volatile uint8_t x254 = 0U;
	uint8_t x255 = 36U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t37 = INT32_MAX;

	t37 = (x253-(x254*(x255+x256)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x257 = INT32_MIN;
	static int64_t x258 = -239LL;
	volatile int8_t x259 = INT8_MIN;
	volatile int8_t x260 = INT8_MIN;

	t38 = (x257-(x258*(x259+x260)));

	if (t38 != -2147544832LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x270 = 3U;
	int32_t x271 = 1;
	uint64_t x272 = 16904096872LLU;
	static uint64_t t39 = 496354LLU;

	t39 = (x269-(x270*(x271+x272)));

	if (t39 != 18446744022997260996LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x285 = INT32_MIN;
	static int16_t x286 = INT16_MAX;
	int8_t x287 = -1;
	int32_t x288 = -1;
	int32_t t40 = 174424;

	t40 = (x285-(x286*(x287+x288)));

	if (t40 != -2147418114) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x294 = UINT64_MAX;
	static int32_t x295 = INT32_MIN;
	int32_t x296 = 30798;
	volatile uint64_t t41 = 6915586442368091576LLU;

	t41 = (x293-(x294*(x295+x296)));

	if (t41 != 18446744071562098893LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x297 = INT8_MIN;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = -7145490999LL;
	volatile int64_t t42 = 3364LL;

	t42 = (x297-(x298*(x299+x300)));

	if (t42 != -2850523832LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x317 = INT16_MAX;
	uint8_t x318 = 57U;
	int8_t x319 = -1;
	volatile uint64_t t43 = 94038010297068LLU;

	t43 = (x317-(x318*(x319+x320)));

	if (t43 != 18441804983260750136LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x342 = INT16_MAX;
	volatile int8_t x343 = -1;
	int64_t x344 = -1LL;
	static volatile int64_t t44 = 63125130LL;

	t44 = (x341-(x342*(x343+x344)));

	if (t44 != 65534LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x345 = 5U;
	int64_t x346 = 4LL;
	uint32_t x347 = UINT32_MAX;
	volatile int16_t x348 = 11194;
	int64_t t45 = -126964693977221LL;

	t45 = (x345-(x346*(x347+x348)));

	if (t45 != -44767LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x349 = -25;
	uint32_t x350 = 58539596U;
	static int32_t x351 = -6218354;
	static int32_t x352 = INT32_MAX;
	volatile uint32_t t46 = 6587973U;

	t46 = (x349-(x350*(x351+x352)));

	if (t46 != 36312075U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x358 = 1U;
	volatile int8_t x359 = -1;
	static uint16_t x360 = UINT16_MAX;
	static int32_t t47 = -1347;

	t47 = (x357-(x358*(x359+x360)));

	if (t47 != -65535) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x361 = INT64_MIN;
	int32_t x362 = -1;
	int32_t x363 = 521395683;
	volatile int16_t x364 = 58;
	volatile int64_t t48 = 6LL;

	t48 = (x361-(x362*(x363+x364)));

	if (t48 != -9223372036333380067LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x369 = -1LL;
	int16_t x370 = -1;
	volatile uint32_t x371 = 131340U;
	int8_t x372 = INT8_MIN;
	static int64_t t49 = -40236LL;

	t49 = (x369-(x370*(x371+x372)));

	if (t49 != -4294836085LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x389 = INT16_MIN;
	uint32_t x390 = 572617509U;
	int8_t x391 = INT8_MAX;
	int16_t x392 = INT16_MAX;
	static uint32_t t50 = 62460U;

	t50 = (x389-(x390*(x391+x392)));

	if (t50 != 2046186442U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x417 = 6951U;
	volatile uint16_t x418 = 1U;
	volatile uint8_t x419 = UINT8_MAX;
	uint64_t x420 = 3499936420LLU;

	t51 = (x417-(x418*(x419+x420)));

	if (t51 != 18446744070209621892LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x429 = 2245U;
	static volatile int32_t x430 = INT32_MAX;
	int8_t x431 = INT8_MAX;
	volatile uint32_t x432 = 24081901U;
	uint32_t t52 = 26544U;

	t52 = (x429-(x430*(x431+x432)));

	if (t52 != 24084273U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x433 = INT64_MAX;
	int8_t x434 = 0;
	volatile int16_t x435 = -1;
	int16_t x436 = INT16_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x433-(x434*(x435+x436)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MAX;
	static uint32_t x439 = UINT32_MAX;
	volatile uint8_t x440 = UINT8_MAX;
	volatile uint32_t t54 = 12U;

	t54 = (x437-(x438*(x439+x440)));

	if (t54 != 2147483902U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x453 = INT8_MAX;
	static int8_t x454 = 3;
	volatile int64_t t55 = 26711206380718299LL;

	t55 = (x453-(x454*(x455+x456)));

	if (t55 != -53168579050838LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x461 = 8133202871076LLU;
	volatile uint32_t x462 = 111296U;
	int32_t x463 = -1;
	int8_t x464 = INT8_MIN;
	volatile uint64_t t56 = 8006060272941649130LLU;

	t56 = (x461-(x462*(x463+x464)));

	if (t56 != 8128922260964LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x465 = -1;
	int32_t x467 = 931658140;
	static uint32_t x468 = UINT32_MAX;
	uint32_t t57 = 155600U;

	t57 = (x465-(x466*(x467+x468)));

	if (t57 != 3079141786U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x471 = 253437230383LL;
	int16_t x472 = 1;

	t58 = (x469-(x470*(x471+x472)));

	if (t58 != 8304631165223039LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x481 = 31;
	static int32_t x482 = INT32_MIN;
	uint8_t x483 = 123U;
	static uint32_t t59 = 8642U;

	t59 = (x481-(x482*(x483+x484)));

	if (t59 != 31U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x489 = INT64_MIN;
	int64_t x491 = -19LL;
	volatile uint32_t x492 = UINT32_MAX;
	static int64_t t60 = -2329450701967353LL;

	t60 = (x489-(x490*(x491+x492)));

	if (t60 != -42949672960LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x502 = UINT8_MAX;
	static int8_t x504 = -15;

	t61 = (x501-(x502*(x503+x504)));

	if (t61 != -28523) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x513 = 69739286U;
	static uint64_t x514 = 24577171929396906LLU;
	int16_t x515 = INT16_MAX;
	uint64_t t62 = 414526062989LLU;

	t62 = (x513-(x514*(x515+x516)));

	if (t62 != 12673093265413443690LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x522 = 7230543975LLU;
	static uint32_t x523 = 21U;
	volatile uint8_t x524 = 50U;
	static uint64_t t63 = 5LLU;

	t63 = (x521-(x522*(x523+x524)));

	if (t63 != 18446743560340929391LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x525 = UINT64_MAX;
	int64_t x526 = 840750841LL;
	int16_t x527 = INT16_MAX;
	int32_t x528 = INT32_MIN;
	uint64_t t64 = 284LLU;

	t64 = (x525-(x526*(x527+x528)));

	if (t64 != 1805471134206940920LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x529 = 14907U;
	int8_t x530 = INT8_MIN;
	int16_t x531 = INT16_MAX;
	static uint64_t x532 = 23783039445LLU;
	uint64_t t65 = 196590277841750LLU;

	t65 = (x529-(x530*(x531+x532)));

	if (t65 != 3044233258043LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x533 = UINT8_MAX;
	uint8_t x534 = 0U;
	int16_t x535 = INT16_MAX;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t66 = 2868;

	t66 = (x533-(x534*(x535+x536)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x541 = UINT32_MAX;
	int32_t x543 = -930828;
	int32_t x544 = -9;

	t67 = (x541-(x542*(x543+x544)));

	if (t67 != 3489814268U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x545 = 80984797845LLU;
	static uint16_t x547 = 6U;
	int32_t x548 = INT32_MIN;

	t68 = (x545-(x546*(x547+x548)));

	if (t68 != 78755805559LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x549 = 162U;
	int8_t x552 = 6;

	t69 = (x549-(x550*(x551+x552)));

	if (t69 != 4286643751U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x563 = 57;
	uint32_t x564 = 17700854U;
	volatile uint32_t t70 = 119U;

	t70 = (x561-(x562*(x563+x564)));

	if (t70 != 2825791682U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x566 = 47930;
	int16_t x567 = 228;
	volatile uint16_t x568 = 221U;
	volatile int32_t t71 = 22947;

	t71 = (x565-(x566*(x567+x568)));

	if (t71 != -21455035) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x570 = 3U;
	volatile uint16_t x571 = UINT16_MAX;
	int8_t x572 = INT8_MIN;
	int32_t t72 = -1211229;

	t72 = (x569-(x570*(x571+x572)));

	if (t72 != -196199) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x577 = INT16_MIN;
	int32_t x578 = INT32_MIN;
	uint32_t x579 = 34460732U;

	t73 = (x577-(x578*(x579+x580)));

	if (t73 != 2147450880U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x581 = UINT16_MAX;
	int16_t x582 = 792;
	int64_t x583 = -1LL;
	static int32_t x584 = -1;

	t74 = (x581-(x582*(x583+x584)));

	if (t74 != 67119LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x593 = INT64_MIN;
	uint64_t x594 = UINT64_MAX;
	int8_t x595 = -62;
	uint16_t x596 = 7731U;
	static volatile uint64_t t75 = 14463059915624202LLU;

	t75 = (x593-(x594*(x595+x596)));

	if (t75 != 9223372036854783477LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x598 = 4U;
	int16_t x599 = INT16_MIN;
	int64_t x600 = 3594821256466633LL;
	volatile int64_t t76 = 122LL;

	t76 = (x597-(x598*(x599+x600)));

	if (t76 != -14379285025735415LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x601 = INT8_MIN;
	int64_t x602 = -898LL;
	int8_t x603 = 0;
	static volatile int16_t x604 = INT16_MIN;
	static int64_t t77 = 41467376851621LL;

	t77 = (x601-(x602*(x603+x604)));

	if (t77 != -29425792LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x605 = -12;
	int32_t x606 = -394075;
	volatile int64_t x608 = INT64_MIN;
	volatile uint64_t t78 = 0LLU;

	t78 = (x605-(x606*(x607+x608)));

	if (t78 != 9223372036854381721LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x609 = 0U;
	static uint8_t x610 = 17U;
	int32_t x612 = -1;

	t79 = (x609-(x610*(x611+x612)));

	if (t79 != 557073) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x626 = -1LL;
	int32_t x628 = INT32_MIN;
	static int64_t t80 = 928352222541LL;

	t80 = (x625-(x626*(x627+x628)));

	if (t80 != -2147483646LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x629 = 12U;
	volatile uint16_t x631 = UINT16_MAX;
	static uint64_t x632 = UINT64_MAX;
	uint64_t t81 = 16962LLU;

	t81 = (x629-(x630*(x631+x632)));

	if (t81 != 140733193388044LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x634 = 1394797470LLU;
	static int8_t x636 = INT8_MAX;
	uint64_t t82 = 387LLU;

	t82 = (x633-(x634*(x635+x636)));

	if (t82 != 18446743896570273053LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x641 = INT64_MIN;
	static int8_t x642 = 15;
	int16_t x643 = -1;
	volatile int16_t x644 = INT16_MIN;
	int64_t t83 = -295769019924LL;

	t83 = (x641-(x642*(x643+x644)));

	if (t83 != -9223372036854284273LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x649 = -6;
	volatile int16_t x651 = INT16_MIN;
	volatile int16_t x652 = -1;
	int32_t t84 = 1185840;

	t84 = (x649-(x650*(x651+x652)));

	if (t84 != -1073774598) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x653 = 527103468U;
	int32_t x656 = 1;

	t85 = (x653-(x654*(x655+x656)));

	if (t85 != 24981893811067LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x665 = -1LL;
	uint64_t x666 = 906867LLU;
	uint32_t x668 = 45270155U;
	static volatile uint64_t t86 = 836287856LLU;

	t86 = (x665-(x666*(x667+x668)));

	if (t86 != 18446701460269541370LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x675 = UINT64_MAX;
	static uint32_t x676 = UINT32_MAX;

	t87 = (x673-(x674*(x675+x676)));

	if (t87 != 1461239098524124562LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x685 = 18U;
	uint64_t x686 = 926010088LLU;
	volatile int64_t x687 = INT64_MIN;
	static int32_t x688 = 7075;
	volatile uint64_t t88 = 29LLU;

	t88 = (x685-(x686*(x687+x688)));

	if (t88 != 18446737522188179034LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x689 = -1;
	static int8_t x690 = INT8_MIN;
	int8_t x692 = INT8_MAX;
	volatile int32_t t89 = 1880584;

	t89 = (x689-(x690*(x691+x692)));

	if (t89 != 16383) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x693 = INT32_MIN;
	volatile uint64_t x694 = UINT64_MAX;
	int16_t x695 = INT16_MIN;
	static int32_t x696 = -1;
	uint64_t t90 = 7684062445LLU;

	t90 = (x693-(x694*(x695+x696)));

	if (t90 != 18446744071562035199LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x698 = -3101;
	int16_t x699 = -31;
	uint32_t x700 = 7073U;
	volatile uint32_t t91 = 8692418U;

	t91 = (x697-(x698*(x699+x700)));

	if (t91 != 21837254U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x705 = -1;
	int16_t x706 = INT16_MAX;
	static volatile int16_t x707 = 2;
	int64_t x708 = 265670620250938LL;
	volatile int64_t t92 = -124936412896048615LL;

	t92 = (x705-(x706*(x707+x708)));

	if (t92 != -8705229213762550981LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x709 = UINT16_MAX;
	volatile uint64_t x710 = UINT64_MAX;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = INT32_MIN;

	t93 = (x709-(x710*(x711+x712)));

	if (t93 != 18446744071562133758LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x717 = 7948;
	int64_t x718 = -328441055LL;
	int8_t x719 = 31;
	int64_t x720 = 7LL;
	int64_t t94 = -4017705277LL;

	t94 = (x717-(x718*(x719+x720)));

	if (t94 != 12480768038LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x729 = INT8_MIN;
	int64_t x730 = 55067966538LL;
	volatile int16_t x731 = INT16_MIN;
	static int16_t x732 = INT16_MIN;

	t95 = (x729-(x730*(x731+x732)));

	if (t95 != 3608934255034240LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x733 = 6U;
	int64_t x734 = INT64_MIN;
	uint64_t x735 = UINT64_MAX;
	uint64_t x736 = UINT64_MAX;

	t96 = (x733-(x734*(x735+x736)));

	if (t96 != 6LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x745 = 479U;
	uint8_t x746 = UINT8_MAX;
	static volatile int64_t x747 = -1LL;
	volatile int32_t x748 = -430034528;

	t97 = (x745-(x746*(x747+x748)));

	if (t97 != 109658805374LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x753 = -867;
	int64_t x754 = INT64_MIN;
	volatile uint64_t x755 = 28835620LLU;
	uint64_t t98 = 812LLU;

	t98 = (x753-(x754*(x755+x756)));

	if (t98 != 18446744073709550749LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x757 = 4189139U;
	uint8_t x758 = 75U;
	int64_t x759 = 32702LL;
	int8_t x760 = 2;

	t99 = (x757-(x758*(x759+x760)));

	if (t99 != 1736339LL) { NG(); } else { ; }
	
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

