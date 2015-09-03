#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = INT8_MIN;
uint32_t x14 = UINT32_MAX;
int16_t x17 = -1;
int64_t x20 = -2432921799LL;
int32_t t2 = 9561;
uint64_t x22 = UINT64_MAX;
volatile int16_t x24 = -1;
int32_t x26 = 314;
volatile uint8_t x27 = 24U;
int64_t x37 = INT64_MAX;
uint64_t x45 = 297027LLU;
volatile int32_t t9 = -813;
int8_t x70 = INT8_MAX;
uint16_t x72 = UINT16_MAX;
int16_t x84 = -1;
int8_t x89 = INT8_MAX;
volatile uint32_t x90 = 1061086853U;
int64_t x91 = -40992LL;
volatile int32_t t12 = -4702;
int32_t x95 = 894480;
int16_t x108 = INT16_MAX;
volatile int8_t x135 = INT8_MIN;
int32_t t20 = 127;
int32_t x141 = 168469;
int16_t x147 = INT16_MIN;
static int64_t x159 = 3LL;
static volatile int8_t x161 = -1;
int8_t x166 = -1;
int64_t x171 = -33324526745472LL;
int16_t x198 = 1;
static uint32_t x199 = 5972U;
static int16_t x206 = INT16_MAX;
uint64_t x208 = 30LLU;
int8_t x209 = INT8_MAX;
volatile uint32_t x210 = 515U;
int16_t x211 = INT16_MAX;
int32_t t32 = 81;
volatile int64_t x213 = INT64_MIN;
int32_t x214 = 863;
volatile int32_t t33 = 8769;
uint8_t x221 = 3U;
static uint32_t x230 = 16837424U;
int32_t x249 = -1;
int32_t x264 = -1;
int8_t x270 = -34;
static uint32_t x271 = 45U;
int64_t x276 = -1LL;
int32_t x280 = -989512;
static int32_t x285 = INT32_MIN;
int32_t x288 = INT32_MAX;
volatile int32_t t48 = 364280;
int16_t x295 = INT16_MIN;
int64_t x313 = -952744LL;
int16_t x314 = 1;
static volatile uint8_t x323 = UINT8_MAX;
volatile int32_t t52 = -3;
int64_t x345 = INT64_MAX;
int16_t x346 = -1;
volatile int32_t t55 = -46804;
int16_t x365 = -2312;
static uint8_t x373 = UINT8_MAX;
uint16_t x375 = 555U;
int16_t x376 = 215;
volatile int8_t x378 = 0;
uint32_t x380 = UINT32_MAX;
int32_t x382 = 9670647;
int8_t x387 = -1;
static int64_t x389 = INT64_MAX;
static int32_t x393 = 1371853;
static int32_t x395 = -804;
uint64_t x396 = UINT64_MAX;
int32_t t64 = -1;
int8_t x397 = 23;
int16_t x398 = INT16_MIN;
static int32_t t66 = -4;
static int32_t x405 = -1;
int64_t x412 = INT64_MAX;
volatile int32_t t68 = -26;
static int8_t x432 = -30;
int64_t x452 = -1LL;
int32_t x463 = 506010;
int32_t t73 = 49899457;
int32_t x470 = -19051;
static int32_t t76 = -47011394;
int32_t t77 = -6;
int8_t x502 = 3;
int16_t x515 = INT16_MIN;
static int32_t t81 = -1734513;
int16_t x533 = 27;
uint16_t x540 = 269U;
volatile int64_t x542 = INT64_MIN;
uint32_t x543 = 14734430U;
static uint64_t x549 = UINT64_MAX;
int8_t x550 = 0;
int8_t x551 = -1;
uint32_t x552 = 9568U;
int16_t x555 = INT16_MIN;
int32_t t87 = 34721253;
static int8_t x561 = INT8_MAX;
int32_t t88 = 6424;
int32_t t89 = 1;
volatile int32_t t90 = -1;
int16_t x582 = INT16_MIN;
uint32_t x584 = 1U;
volatile int8_t x587 = INT8_MIN;
int32_t t93 = -4234;
uint64_t x594 = UINT64_MAX;
volatile int32_t t95 = 185;
uint8_t x603 = 15U;
static int8_t x612 = INT8_MIN;


void f0(void) {
	int64_t x9 = -122601813807718LL;
	int16_t x10 = INT16_MIN;
	int64_t x11 = -6971953243425818LL;
	static volatile int32_t t0 = 132255;

	t0 = (x9<(x10%(x11*x12)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = -54231344;
	static volatile int64_t x15 = -58069713957672LL;
	volatile int8_t x16 = -1;
	static int32_t t1 = -23520971;

	t1 = (x13<(x14%(x15*x16)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = 24U;

	t2 = (x17<(x18%(x19*x20)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x21 = 1U;
	volatile uint16_t x23 = 2314U;
	volatile int32_t t3 = -6185673;

	t3 = (x21<(x22%(x23*x24)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t4 = -33405255;

	t4 = (x25<(x26%(x27*x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1;
	static int16_t x30 = INT16_MIN;
	int32_t x31 = 1;
	volatile uint32_t x32 = 2092129U;
	volatile int32_t t5 = -19;

	t5 = (x29<(x30%(x31*x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x38 = 0U;
	static int32_t x39 = -1964;
	int8_t x40 = -1;
	int32_t t6 = -597289580;

	t6 = (x37<(x38%(x39*x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x46 = 55371U;
	static int8_t x47 = -1;
	int64_t x48 = -10165275535290LL;
	volatile int32_t t7 = 188005;

	t7 = (x45<(x46%(x47*x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x57 = 2U;
	static volatile uint32_t x58 = 2433U;
	static volatile uint8_t x59 = 11U;
	static int8_t x60 = INT8_MAX;
	static volatile int32_t t8 = 0;

	t8 = (x57<(x58%(x59*x60)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = 803992U;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	static volatile int8_t x64 = 2;

	t9 = (x61<(x62%(x63*x64)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x69 = INT16_MIN;
	int32_t x71 = -1;
	int32_t t10 = -2765;

	t10 = (x69<(x70%(x71*x72)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x81 = INT64_MAX;
	int16_t x82 = -46;
	int8_t x83 = INT8_MIN;
	int32_t t11 = 4521078;

	t11 = (x81<(x82%(x83*x84)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x92 = INT16_MIN;

	t12 = (x89<(x90%(x91*x92)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x93 = -96287;
	volatile uint64_t x94 = 1756LLU;
	volatile int64_t x96 = 1LL;
	static int32_t t13 = 785;

	t13 = (x93<(x94%(x95*x96)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x101 = 683139851670845643LLU;
	int16_t x102 = INT16_MIN;
	int8_t x103 = -1;
	volatile int32_t x104 = INT32_MAX;
	int32_t t14 = -867;

	t14 = (x101<(x102%(x103*x104)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x105 = -3297;
	int8_t x106 = -19;
	volatile int16_t x107 = -1;
	int32_t t15 = -48954813;

	t15 = (x105<(x106%(x107*x108)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x109 = -1;
	volatile int32_t x110 = -1;
	static int32_t x111 = -33;
	static volatile int16_t x112 = -6;
	static volatile int32_t t16 = -42098;

	t16 = (x109<(x110%(x111*x112)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x121 = -9958;
	static int16_t x122 = INT16_MAX;
	int64_t x123 = INT64_MAX;
	uint64_t x124 = 16048725516230259LLU;
	volatile int32_t t17 = -724763812;

	t17 = (x121<(x122%(x123*x124)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x125 = 29344170LLU;
	uint32_t x126 = UINT32_MAX;
	int16_t x127 = -5;
	volatile int16_t x128 = 3912;
	int32_t t18 = 25994;

	t18 = (x125<(x126%(x127*x128)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x133 = 2866U;
	static int32_t x134 = INT32_MAX;
	static uint32_t x136 = 3U;
	int32_t t19 = 315;

	t19 = (x133<(x134%(x135*x136)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x137 = 19U;
	int16_t x138 = -11;
	uint64_t x139 = 11630LLU;
	int32_t x140 = INT32_MIN;

	t20 = (x137<(x138%(x139*x140)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x142 = 3581586462LLU;
	uint8_t x143 = 24U;
	int16_t x144 = INT16_MIN;
	static volatile int32_t t21 = -16;

	t21 = (x141<(x142%(x143*x144)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x145 = -1;
	static volatile int16_t x146 = -1;
	uint8_t x148 = 6U;
	int32_t t22 = 540918;

	t22 = (x145<(x146%(x147*x148)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x157 = 40762744428LLU;
	uint16_t x158 = UINT16_MAX;
	uint64_t x160 = 64896953LLU;
	volatile int32_t t23 = 3;

	t23 = (x157<(x158%(x159*x160)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x162 = INT64_MIN;
	int16_t x163 = -167;
	int32_t x164 = -1;
	static volatile int32_t t24 = 0;

	t24 = (x161<(x162%(x163*x164)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x165 = -1;
	uint8_t x167 = UINT8_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t25 = -4034023;

	t25 = (x165<(x166%(x167*x168)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x169 = 0;
	int32_t x170 = INT32_MIN;
	static int16_t x172 = -1;
	static volatile int32_t t26 = 36049;

	t26 = (x169<(x170%(x171*x172)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x173 = -1;
	int16_t x174 = INT16_MAX;
	uint16_t x175 = 843U;
	uint8_t x176 = 3U;
	static int32_t t27 = -85051110;

	t27 = (x173<(x174%(x175*x176)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MIN;
	volatile uint32_t x179 = UINT32_MAX;
	volatile uint32_t x180 = UINT32_MAX;
	int32_t t28 = -72794;

	t28 = (x177<(x178%(x179*x180)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x193 = INT8_MAX;
	int8_t x194 = 14;
	int32_t x195 = -1;
	volatile int16_t x196 = 3;
	volatile int32_t t29 = 145505;

	t29 = (x193<(x194%(x195*x196)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x197 = INT32_MAX;
	volatile int8_t x200 = 1;
	volatile int32_t t30 = -2786323;

	t30 = (x197<(x198%(x199*x200)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x205 = INT16_MIN;
	static uint16_t x207 = UINT16_MAX;
	int32_t t31 = -523990553;

	t31 = (x205<(x206%(x207*x208)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x212 = -90685981026746LL;

	t32 = (x209<(x210%(x211*x212)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x215 = 16U;
	int32_t x216 = -818768;

	t33 = (x213<(x214%(x215*x216)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x222 = INT16_MIN;
	volatile uint32_t x223 = 10462457U;
	uint16_t x224 = UINT16_MAX;
	static int32_t t34 = -257558;

	t34 = (x221<(x222%(x223*x224)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x225 = 564U;
	int64_t x226 = INT64_MIN;
	int16_t x227 = -13946;
	static int64_t x228 = 1LL;
	volatile int32_t t35 = 235631;

	t35 = (x225<(x226%(x227*x228)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x229 = UINT64_MAX;
	static int32_t x231 = -1;
	uint8_t x232 = 3U;
	int32_t t36 = 4671;

	t36 = (x229<(x230%(x231*x232)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x233 = UINT64_MAX;
	uint64_t x234 = 3794485LLU;
	volatile uint8_t x235 = 50U;
	static uint16_t x236 = 1821U;
	int32_t t37 = -259790970;

	t37 = (x233<(x234%(x235*x236)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x250 = 7;
	uint32_t x251 = UINT32_MAX;
	static int8_t x252 = INT8_MIN;
	static volatile int32_t t38 = 101;

	t38 = (x249<(x250%(x251*x252)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x253 = -1;
	static int16_t x254 = -1;
	int16_t x255 = -2710;
	volatile int16_t x256 = -1;
	int32_t t39 = 29;

	t39 = (x253<(x254%(x255*x256)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x257 = INT8_MIN;
	uint16_t x258 = 2U;
	uint64_t x259 = 4LLU;
	int8_t x260 = INT8_MIN;
	int32_t t40 = 294;

	t40 = (x257<(x258%(x259*x260)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x261 = INT64_MIN;
	static uint32_t x262 = 170576U;
	volatile int8_t x263 = 11;
	int32_t t41 = -236942039;

	t41 = (x261<(x262%(x263*x264)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MIN;
	int16_t x267 = INT16_MIN;
	volatile int8_t x268 = -1;
	int32_t t42 = 536461128;

	t42 = (x265<(x266%(x267*x268)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x269 = -35;
	int32_t x272 = -83;
	int32_t t43 = -29;

	t43 = (x269<(x270%(x271*x272)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x273 = 3U;
	static int64_t x274 = INT64_MAX;
	int64_t x275 = -1LL;
	volatile int32_t t44 = 97338503;

	t44 = (x273<(x274%(x275*x276)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = -5;
	int8_t x279 = INT8_MIN;
	volatile int32_t t45 = -326;

	t45 = (x277<(x278%(x279*x280)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x281 = INT8_MIN;
	volatile uint64_t x282 = UINT64_MAX;
	uint8_t x283 = 42U;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t46 = 52;

	t46 = (x281<(x282%(x283*x284)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x286 = INT16_MAX;
	uint64_t x287 = 3LLU;
	static int32_t t47 = 351345;

	t47 = (x285<(x286%(x287*x288)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x289 = 0U;
	uint16_t x290 = 2645U;
	int16_t x291 = -7;
	uint64_t x292 = 2692817LLU;

	t48 = (x289<(x290%(x291*x292)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t49 = 1;

	t49 = (x293<(x294%(x295*x296)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	int32_t t50 = -60981;

	t50 = (x313<(x314%(x315*x316)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x317 = -1;
	int32_t x318 = INT32_MIN;
	uint64_t x319 = 217552014465LLU;
	uint32_t x320 = UINT32_MAX;
	volatile int32_t t51 = 36;

	t51 = (x317<(x318%(x319*x320)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x321 = -45423;
	uint16_t x322 = 624U;
	static uint16_t x324 = 4U;

	t52 = (x321<(x322%(x323*x324)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x325 = 0;
	static int8_t x326 = 10;
	int32_t x327 = INT32_MIN;
	volatile int16_t x328 = 1;
	int32_t t53 = 165476345;

	t53 = (x325<(x326%(x327*x328)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x337 = -1;
	uint16_t x338 = UINT16_MAX;
	uint8_t x339 = 5U;
	int16_t x340 = 101;
	static volatile int32_t t54 = -2061;

	t54 = (x337<(x338%(x339*x340)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x347 = -1LL;
	uint64_t x348 = UINT64_MAX;

	t55 = (x345<(x346%(x347*x348)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x357 = -871732498097LL;
	int32_t x358 = INT32_MIN;
	static volatile int32_t x359 = -821855206;
	static int64_t x360 = 770520LL;
	int32_t t56 = 1;

	t56 = (x357<(x358%(x359*x360)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x366 = INT32_MIN;
	int32_t x367 = 267;
	static int16_t x368 = 15;
	int32_t t57 = -17068746;

	t57 = (x365<(x366%(x367*x368)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x369 = INT8_MIN;
	static int16_t x370 = INT16_MIN;
	volatile int8_t x371 = INT8_MIN;
	static int64_t x372 = -6LL;
	int32_t t58 = -2340016;

	t58 = (x369<(x370%(x371*x372)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x374 = INT64_MIN;
	int32_t t59 = -8637354;

	t59 = (x373<(x374%(x375*x376)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x377 = INT64_MIN;
	static uint32_t x379 = 1224787U;
	int32_t t60 = 2;

	t60 = (x377<(x378%(x379*x380)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x381 = UINT16_MAX;
	int16_t x383 = -3;
	static int64_t x384 = -643234874371342LL;
	volatile int32_t t61 = -1077;

	t61 = (x381<(x382%(x383*x384)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x385 = -1038057069083805649LL;
	int16_t x386 = 0;
	volatile int8_t x388 = 57;
	volatile int32_t t62 = -575;

	t62 = (x385<(x386%(x387*x388)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x390 = UINT8_MAX;
	static uint16_t x391 = 104U;
	int16_t x392 = INT16_MAX;
	volatile int32_t t63 = -17220;

	t63 = (x389<(x390%(x391*x392)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x394 = UINT16_MAX;

	t64 = (x393<(x394%(x395*x396)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int32_t t65 = 44545;

	t65 = (x397<(x398%(x399*x400)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = -22196607137LL;
	uint32_t x403 = UINT32_MAX;
	uint32_t x404 = 173U;

	t66 = (x401<(x402%(x403*x404)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x406 = 28U;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t67 = -8315043;

	t67 = (x405<(x406%(x407*x408)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int32_t x411 = -1;

	t68 = (x409<(x410%(x411*x412)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x429 = -1;
	static uint8_t x430 = 1U;
	int8_t x431 = -4;
	int32_t t69 = 26413;

	t69 = (x429<(x430%(x431*x432)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x433 = INT32_MIN;
	static int16_t x434 = -1;
	static int64_t x435 = INT64_MAX;
	uint64_t x436 = 1324860960LLU;
	static volatile int32_t t70 = 2;

	t70 = (x433<(x434%(x435*x436)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x445 = UINT16_MAX;
	uint16_t x446 = 121U;
	int16_t x447 = -15;
	int16_t x448 = -7;
	static volatile int32_t t71 = 1;

	t71 = (x445<(x446%(x447*x448)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x449 = INT8_MIN;
	static volatile int32_t x450 = 214279467;
	uint64_t x451 = UINT64_MAX;
	static volatile int32_t t72 = -30346834;

	t72 = (x449<(x450%(x451*x452)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x461 = 3LLU;
	static volatile int32_t x462 = 22;
	static int64_t x464 = -53342LL;

	t73 = (x461<(x462%(x463*x464)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x469 = -1741678132740198LL;
	uint32_t x471 = 296732U;
	uint32_t x472 = 2715271U;
	volatile int32_t t74 = 19961;

	t74 = (x469<(x470%(x471*x472)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x485 = UINT16_MAX;
	volatile uint16_t x486 = 25U;
	static int8_t x487 = -1;
	int8_t x488 = 9;
	int32_t t75 = 11963;

	t75 = (x485<(x486%(x487*x488)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x489 = INT8_MIN;
	uint32_t x490 = UINT32_MAX;
	volatile uint16_t x491 = 1236U;
	volatile int16_t x492 = -1448;

	t76 = (x489<(x490%(x491*x492)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x493 = INT64_MAX;
	int8_t x494 = -1;
	static int8_t x495 = INT8_MIN;
	volatile uint64_t x496 = 1174722LLU;

	t77 = (x493<(x494%(x495*x496)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x501 = INT64_MAX;
	static int8_t x503 = -1;
	uint8_t x504 = 6U;
	int32_t t78 = -2034358;

	t78 = (x501<(x502%(x503*x504)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x505 = -1;
	uint16_t x506 = 1188U;
	int16_t x507 = 28;
	int32_t x508 = -1;
	int32_t t79 = -2;

	t79 = (x505<(x506%(x507*x508)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x509 = 465;
	volatile int8_t x510 = -1;
	static volatile uint16_t x511 = 18594U;
	uint8_t x512 = 14U;
	volatile int32_t t80 = -3755521;

	t80 = (x509<(x510%(x511*x512)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x513 = UINT8_MAX;
	int16_t x514 = INT16_MIN;
	volatile int16_t x516 = INT16_MAX;

	t81 = (x513<(x514%(x515*x516)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x534 = INT64_MIN;
	static int8_t x535 = INT8_MAX;
	volatile int16_t x536 = -1;
	int32_t t82 = 1016;

	t82 = (x533<(x534%(x535*x536)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x537 = 3U;
	static volatile int64_t x538 = INT64_MAX;
	volatile uint8_t x539 = UINT8_MAX;
	int32_t t83 = -78;

	t83 = (x537<(x538%(x539*x540)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x541 = 2359;
	static int32_t x544 = 959336908;
	int32_t t84 = -39;

	t84 = (x541<(x542%(x543*x544)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x545 = INT16_MIN;
	int32_t x546 = INT32_MAX;
	int64_t x547 = INT64_MIN;
	uint64_t x548 = UINT64_MAX;
	int32_t t85 = -24093;

	t85 = (x545<(x546%(x547*x548)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t t86 = 56440;

	t86 = (x549<(x550%(x551*x552)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x553 = 8U;
	int16_t x554 = -1;
	static volatile int16_t x556 = 12;

	t87 = (x553<(x554%(x555*x556)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x562 = INT8_MAX;
	uint32_t x563 = UINT32_MAX;
	static uint8_t x564 = 60U;

	t88 = (x561<(x562%(x563*x564)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x565 = -1;
	int8_t x566 = 0;
	uint64_t x567 = UINT64_MAX;
	int32_t x568 = -1;

	t89 = (x565<(x566%(x567*x568)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x569 = -1;
	static int64_t x570 = -707536901017407953LL;
	static volatile int8_t x571 = 7;
	int32_t x572 = 124631145;

	t90 = (x569<(x570%(x571*x572)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x573 = -1195;
	static uint64_t x574 = UINT64_MAX;
	int16_t x575 = -14;
	int16_t x576 = INT16_MIN;
	volatile int32_t t91 = 8;

	t91 = (x573<(x574%(x575*x576)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x581 = UINT8_MAX;
	uint32_t x583 = UINT32_MAX;
	volatile int32_t t92 = 490483;

	t92 = (x581<(x582%(x583*x584)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x585 = INT16_MIN;
	uint16_t x586 = 2U;
	int8_t x588 = INT8_MIN;

	t93 = (x585<(x586%(x587*x588)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x589 = INT16_MIN;
	int64_t x590 = 1749343151022494LL;
	static int16_t x591 = INT16_MIN;
	static volatile uint8_t x592 = UINT8_MAX;
	volatile int32_t t94 = -6271;

	t94 = (x589<(x590%(x591*x592)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x593 = INT16_MAX;
	static volatile int64_t x595 = 2748273066425347LL;
	static volatile uint64_t x596 = UINT64_MAX;

	t95 = (x593<(x594%(x595*x596)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x597 = -1;
	uint64_t x598 = 7580085115LLU;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = INT16_MIN;
	volatile int32_t t96 = -8149625;

	t96 = (x597<(x598%(x599*x600)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x601 = -1LL;
	static volatile uint64_t x602 = 246831305195LLU;
	int64_t x604 = -1LL;
	int32_t t97 = 0;

	t97 = (x601<(x602%(x603*x604)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x605 = 0;
	int32_t x606 = INT32_MIN;
	volatile int8_t x607 = INT8_MIN;
	static int64_t x608 = -395206438419LL;
	int32_t t98 = -308640873;

	t98 = (x605<(x606%(x607*x608)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x609 = 5864;
	uint16_t x610 = 11601U;
	int8_t x611 = INT8_MIN;
	int32_t t99 = -55;

	t99 = (x609<(x610%(x611*x612)));

	if (t99 != 1) { NG(); } else { ; }
	
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

