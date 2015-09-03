#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -5912137;
int16_t x2 = INT16_MIN;
uint64_t x7 = UINT64_MAX;
static int32_t t1 = -3950;
volatile int16_t x10 = INT16_MIN;
int64_t x11 = INT64_MIN;
uint16_t x24 = UINT16_MAX;
int64_t x25 = -1LL;
static int32_t t6 = -10949229;
int32_t t7 = 34610928;
int32_t t8 = -112328;
uint8_t x51 = 84U;
uint8_t x53 = 34U;
int64_t x59 = -1LL;
volatile uint16_t x61 = 1299U;
int32_t t14 = 3356100;
static int8_t x71 = INT8_MAX;
int32_t x88 = INT32_MAX;
int64_t x98 = INT64_MIN;
volatile int32_t t22 = 18;
uint64_t x115 = UINT64_MAX;
uint16_t x116 = UINT16_MAX;
volatile int8_t x117 = INT8_MIN;
uint16_t x119 = 42U;
int32_t t24 = 2438;
int64_t x125 = INT64_MIN;
int16_t x130 = -53;
int16_t x138 = -10689;
volatile int32_t x161 = 18988571;
int8_t x163 = -1;
volatile int64_t x164 = INT64_MIN;
volatile int32_t t33 = -1827;
uint8_t x167 = UINT8_MAX;
static int8_t x180 = 1;
int32_t x181 = INT32_MIN;
int32_t x184 = -351265;
int32_t t37 = 253132886;
uint16_t x189 = UINT16_MAX;
static int16_t x192 = INT16_MAX;
int16_t x195 = INT16_MIN;
volatile int32_t x197 = 27362581;
int32_t x198 = INT32_MIN;
int32_t x206 = 36917189;
int16_t x214 = -1;
static volatile int32_t x216 = INT32_MIN;
int32_t x218 = INT32_MAX;
static int32_t t44 = 1091;
uint8_t x222 = UINT8_MAX;
int64_t x230 = INT64_MAX;
volatile int32_t t50 = -837;
uint64_t x262 = 279075967324231LLU;
volatile int16_t x266 = 3;
int16_t x277 = -1;
volatile uint8_t x278 = 4U;
int8_t x280 = 1;
static uint16_t x282 = 7673U;
int8_t x283 = INT8_MIN;
int16_t x289 = INT16_MIN;
uint32_t x299 = 274U;
int16_t x304 = -3123;
static volatile int32_t t64 = 1;
int16_t x309 = -55;
static uint32_t x313 = UINT32_MAX;
int32_t t66 = -30;
uint16_t x319 = 13219U;
int32_t t67 = 57894223;
int64_t x322 = 161031783069740LL;
int32_t x328 = 689011;
int32_t x337 = INT32_MAX;
int16_t x340 = INT16_MIN;
static uint32_t x346 = 29843331U;
int8_t x348 = INT8_MAX;
int32_t t73 = -5526878;
int64_t x365 = INT64_MIN;
static uint32_t x371 = UINT32_MAX;
uint64_t x372 = UINT64_MAX;
int16_t x384 = INT16_MIN;
uint8_t x385 = 0U;
int64_t x391 = INT64_MIN;
volatile int8_t x392 = -3;
int32_t t84 = -96187;
int32_t t86 = 88;
static uint16_t x401 = 7U;
uint8_t x408 = 7U;
uint16_t x418 = 0U;
int64_t x424 = 123766549532LL;
int16_t x428 = -3376;
static int32_t t93 = -1590344;
volatile int64_t x431 = INT64_MIN;
uint32_t x435 = 8851300U;
int32_t t95 = 1974315;
uint32_t x438 = UINT32_MAX;


void f0(void) {
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 11;

	t0 = (x1<(x2&(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int32_t x6 = 357772;
	int8_t x8 = INT8_MIN;

	t1 = (x5<(x6&(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -19;
	volatile int16_t x12 = -1;
	static volatile int32_t t2 = -1;

	t2 = (x9<(x10&(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint8_t x14 = 3U;
	static uint16_t x15 = UINT16_MAX;
	uint16_t x16 = 59U;
	static volatile int32_t t3 = 37256375;

	t3 = (x13<(x14&(x15-x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x21 = 0U;
	int32_t x22 = INT32_MAX;
	static volatile int16_t x23 = -7;
	int32_t t4 = 41;

	t4 = (x21<(x22&(x23-x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x26 = 19880;
	static uint8_t x27 = 2U;
	static int8_t x28 = INT8_MIN;
	int32_t t5 = 633064827;

	t5 = (x25<(x26&(x27-x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 34491452LLU;
	uint64_t x30 = 7280080771467637LLU;
	uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MIN;

	t6 = (x29<(x30&(x31-x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MAX;
	volatile uint8_t x34 = UINT8_MAX;
	static uint64_t x35 = UINT64_MAX;
	uint32_t x36 = 55799U;

	t7 = (x33<(x34&(x35-x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = 570;
	int16_t x38 = -460;
	volatile int8_t x39 = 0;
	static volatile uint32_t x40 = 1U;

	t8 = (x37<(x38&(x39-x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 553U;
	static volatile int8_t x42 = -61;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -1LL;
	int32_t t9 = -1555;

	t9 = (x41<(x42&(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	static volatile int16_t x46 = -1;
	static volatile int32_t x47 = 15619;
	volatile int16_t x48 = 27;
	volatile int32_t t10 = 118753634;

	t10 = (x45<(x46&(x47-x48)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 206U;
	int64_t x50 = INT64_MIN;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t11 = -208969432;

	t11 = (x49<(x50&(x51-x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x54 = 11042LLU;
	static int32_t x55 = 116507683;
	volatile int32_t x56 = INT32_MAX;
	int32_t t12 = -426026;

	t12 = (x53<(x54&(x55-x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = 33128286;
	static int32_t x58 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	int32_t t13 = 1380;

	t13 = (x57<(x58&(x59-x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = -1;
	volatile int8_t x63 = -1;
	int64_t x64 = -1LL;

	t14 = (x61<(x62&(x63-x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x65 = UINT16_MAX;
	static int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MAX;
	int64_t x68 = 16309181292396287LL;
	int32_t t15 = -100001427;

	t15 = (x65<(x66&(x67-x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1036163221;
	int32_t x70 = INT32_MIN;
	uint64_t x72 = UINT64_MAX;
	int32_t t16 = 366276148;

	t16 = (x69<(x70&(x71-x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = INT32_MIN;
	int8_t x74 = INT8_MAX;
	int64_t x75 = 16422212LL;
	static uint64_t x76 = 7157412581189181LLU;
	volatile int32_t t17 = -480676079;

	t17 = (x73<(x74&(x75-x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	int32_t x83 = INT32_MIN;
	volatile uint8_t x84 = 0U;
	volatile int32_t t18 = 616;

	t18 = (x81<(x82&(x83-x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MIN;
	uint64_t x87 = UINT64_MAX;
	static int32_t t19 = -2285;

	t19 = (x85<(x86&(x87-x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MAX;
	int64_t x90 = -1LL;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MAX;
	int32_t t20 = 14;

	t20 = (x89<(x90&(x91-x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = 437272211;
	uint16_t x99 = 3U;
	int16_t x100 = 1;
	int32_t t21 = -1;

	t21 = (x97<(x98&(x99-x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MAX;
	int16_t x106 = -245;
	uint8_t x107 = 5U;
	static uint8_t x108 = UINT8_MAX;

	t22 = (x105<(x106&(x107-x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x113 = INT64_MAX;
	volatile int32_t x114 = -1;
	volatile int32_t t23 = -47459;

	t23 = (x113<(x114&(x115-x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x118 = INT8_MAX;
	uint32_t x120 = 66688163U;

	t24 = (x117<(x118&(x119-x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x121 = INT16_MAX;
	int8_t x122 = -1;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t25 = 506927;

	t25 = (x121<(x122&(x123-x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x126 = INT16_MIN;
	int32_t x127 = INT32_MIN;
	volatile uint32_t x128 = 128U;
	int32_t t26 = 11340;

	t26 = (x125<(x126&(x127-x128)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x129 = -492735;
	uint64_t x131 = 955990245436245554LLU;
	int16_t x132 = INT16_MIN;
	volatile int32_t t27 = 1087;

	t27 = (x129<(x130&(x131-x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = INT32_MIN;
	uint32_t x139 = 97028U;
	volatile uint8_t x140 = 0U;
	volatile int32_t t28 = 2;

	t28 = (x137<(x138&(x139-x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	uint64_t x144 = 331157LLU;
	volatile int32_t t29 = -7;

	t29 = (x141<(x142&(x143-x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = -1;
	static int16_t x146 = INT16_MAX;
	int32_t x147 = INT32_MAX;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t30 = -93;

	t30 = (x145<(x146&(x147-x148)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	volatile int8_t x151 = 0;
	int8_t x152 = -1;
	volatile int32_t t31 = 85188;

	t31 = (x149<(x150&(x151-x152)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x157 = 899817398426692973LL;
	volatile uint8_t x158 = 36U;
	volatile uint64_t x159 = 208225632069LLU;
	int32_t x160 = 2151663;
	int32_t t32 = 0;

	t32 = (x157<(x158&(x159-x160)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x162 = UINT32_MAX;

	t33 = (x161<(x162&(x163-x164)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x165 = UINT8_MAX;
	volatile int8_t x166 = 0;
	static int32_t x168 = 19006161;
	int32_t t34 = -752246;

	t34 = (x165<(x166&(x167-x168)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = 1262774933LL;
	int16_t x170 = -15307;
	static uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MIN;
	int32_t t35 = 192;

	t35 = (x169<(x170&(x171-x172)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x177 = 3U;
	volatile uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	static volatile int32_t t36 = -5;

	t36 = (x177<(x178&(x179-x180)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x182 = INT64_MIN;
	static volatile uint8_t x183 = UINT8_MAX;

	t37 = (x181<(x182&(x183-x184)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x190 = 4U;
	int16_t x191 = -13208;
	int32_t t38 = 191;

	t38 = (x189<(x190&(x191-x192)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t39 = -178;

	t39 = (x193<(x194&(x195-x196)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x199 = INT8_MIN;
	uint16_t x200 = 112U;
	static volatile int32_t t40 = 1;

	t40 = (x197<(x198&(x199-x200)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = -1;
	volatile int8_t x207 = INT8_MIN;
	static int64_t x208 = 9LL;
	int32_t t41 = 125499;

	t41 = (x205<(x206&(x207-x208)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = -1;
	static uint16_t x210 = UINT16_MAX;
	int64_t x211 = -131342642054880LL;
	volatile uint64_t x212 = 3707126319245488LLU;
	static int32_t t42 = 1;

	t42 = (x209<(x210&(x211-x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x213 = 59177597;
	int32_t x215 = INT32_MIN;
	volatile int32_t t43 = 1;

	t43 = (x213<(x214&(x215-x216)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x217 = 512;
	int16_t x219 = INT16_MIN;
	static int64_t x220 = INT64_MIN;

	t44 = (x217<(x218&(x219-x220)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 0U;
	static int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MAX;
	int32_t t45 = -6683;

	t45 = (x221<(x222&(x223-x224)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = UINT32_MAX;
	uint64_t x226 = 5LLU;
	static volatile int16_t x227 = -5;
	uint8_t x228 = 13U;
	static int32_t t46 = 74723732;

	t46 = (x225<(x226&(x227-x228)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x229 = INT64_MIN;
	int16_t x231 = INT16_MAX;
	uint64_t x232 = UINT64_MAX;
	volatile int32_t t47 = -599;

	t47 = (x229<(x230&(x231-x232)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x233 = -2;
	volatile int8_t x234 = 0;
	int16_t x235 = INT16_MIN;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t48 = -287013;

	t48 = (x233<(x234&(x235-x236)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = -1;
	volatile int64_t x243 = INT64_MAX;
	uint32_t x244 = 265271811U;
	volatile int32_t t49 = 32;

	t49 = (x241<(x242&(x243-x244)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x245 = -1;
	int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;

	t50 = (x245<(x246&(x247-x248)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = 3585LL;
	int16_t x250 = INT16_MAX;
	volatile int64_t x251 = INT64_MAX;
	int16_t x252 = 44;
	int32_t t51 = -16513;

	t51 = (x249<(x250&(x251-x252)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = -1;
	uint64_t x254 = 11239640LLU;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t52 = -428847285;

	t52 = (x253<(x254&(x255-x256)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -538924;
	int64_t x258 = INT64_MIN;
	int64_t x259 = INT64_MAX;
	uint8_t x260 = 1U;
	int32_t t53 = 1128359;

	t53 = (x257<(x258&(x259-x260)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = -1LL;
	volatile int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MIN;
	int32_t t54 = -259713639;

	t54 = (x261<(x262&(x263-x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = INT8_MIN;
	int32_t x267 = -3;
	int8_t x268 = INT8_MIN;
	volatile int32_t t55 = 0;

	t55 = (x265<(x266&(x267-x268)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MAX;
	static int16_t x275 = -277;
	int32_t x276 = 3;
	volatile int32_t t56 = -20492964;

	t56 = (x273<(x274&(x275-x276)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x279 = -2393;
	int32_t t57 = 463992149;

	t57 = (x277<(x278&(x279-x280)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x281 = INT32_MAX;
	static int8_t x284 = INT8_MAX;
	int32_t t58 = -445;

	t58 = (x281<(x282&(x283-x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x285 = 418608672690LLU;
	int16_t x286 = -4;
	uint64_t x287 = 7LLU;
	int64_t x288 = -1LL;
	static volatile int32_t t59 = -136021525;

	t59 = (x285<(x286&(x287-x288)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x290 = 12;
	static int64_t x291 = 0LL;
	static uint8_t x292 = 1U;
	int32_t t60 = -1668688;

	t60 = (x289<(x290&(x291-x292)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x293 = 19U;
	static int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int32_t x296 = -1;
	volatile int32_t t61 = 9136;

	t61 = (x293<(x294&(x295-x296)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x297 = -11840920;
	uint32_t x298 = 175465460U;
	uint32_t x300 = UINT32_MAX;
	int32_t t62 = 322676;

	t62 = (x297<(x298&(x299-x300)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MAX;
	uint64_t x302 = 7817313283858LLU;
	static volatile uint8_t x303 = 19U;
	volatile int32_t t63 = -555;

	t63 = (x301<(x302&(x303-x304)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = 1;
	int64_t x306 = 35321LL;
	static int32_t x307 = 8033406;
	volatile uint8_t x308 = UINT8_MAX;

	t64 = (x305<(x306&(x307-x308)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x310 = 2228U;
	uint16_t x311 = UINT16_MAX;
	uint8_t x312 = 3U;
	volatile int32_t t65 = -55;

	t65 = (x309<(x310&(x311-x312)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x314 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	static volatile int64_t x316 = -2320153278LL;

	t66 = (x313<(x314&(x315-x316)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x317 = INT16_MIN;
	uint16_t x318 = 12343U;
	int32_t x320 = 3032;

	t67 = (x317<(x318&(x319-x320)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x321 = -1;
	uint64_t x323 = 115291667LLU;
	volatile uint64_t x324 = UINT64_MAX;
	volatile int32_t t68 = -2902024;

	t68 = (x321<(x322&(x323-x324)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = 10U;
	int32_t x326 = -1;
	volatile uint32_t x327 = 52513287U;
	volatile int32_t t69 = -156110;

	t69 = (x325<(x326&(x327-x328)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x329 = -8082490059028413LL;
	int8_t x330 = INT8_MAX;
	volatile int16_t x331 = -1;
	volatile int64_t x332 = INT64_MAX;
	static volatile int32_t t70 = 508688;

	t70 = (x329<(x330&(x331-x332)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = 26351U;
	volatile uint64_t x334 = 6106367267407152920LLU;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = -1;
	volatile int32_t t71 = 631;

	t71 = (x333<(x334&(x335-x336)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x338 = UINT64_MAX;
	volatile uint32_t x339 = UINT32_MAX;
	volatile int32_t t72 = 1;

	t72 = (x337<(x338&(x339-x340)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = 1117U;
	volatile int32_t x347 = -1;

	t73 = (x345<(x346&(x347-x348)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x349 = 4U;
	int8_t x350 = INT8_MIN;
	static int8_t x351 = INT8_MIN;
	uint32_t x352 = 3266046U;
	volatile int32_t t74 = -217108;

	t74 = (x349<(x350&(x351-x352)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x353 = -1LL;
	volatile int8_t x354 = INT8_MAX;
	static int16_t x355 = -34;
	uint32_t x356 = UINT32_MAX;
	static volatile int32_t t75 = -5464;

	t75 = (x353<(x354&(x355-x356)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = 280242591;
	int8_t x359 = -1;
	uint16_t x360 = UINT16_MAX;
	int32_t t76 = 348682;

	t76 = (x357<(x358&(x359-x360)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MAX;
	uint64_t x362 = 36LLU;
	static volatile uint64_t x363 = 2796055606444975205LLU;
	volatile int64_t x364 = INT64_MIN;
	int32_t t77 = 79797797;

	t77 = (x361<(x362&(x363-x364)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x366 = 18745U;
	volatile uint8_t x367 = 4U;
	static volatile int8_t x368 = INT8_MIN;
	int32_t t78 = -248;

	t78 = (x365<(x366&(x367-x368)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = 834;
	int32_t x370 = 53716;
	volatile int32_t t79 = -3913114;

	t79 = (x369<(x370&(x371-x372)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x373 = 28106U;
	static uint32_t x374 = UINT32_MAX;
	uint64_t x375 = UINT64_MAX;
	static int32_t x376 = 2;
	volatile int32_t t80 = 1;

	t80 = (x373<(x374&(x375-x376)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x377 = 0U;
	static int16_t x378 = INT16_MIN;
	static uint16_t x379 = 609U;
	volatile int64_t x380 = -1LL;
	static volatile int32_t t81 = -3619757;

	t81 = (x377<(x378&(x379-x380)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x381 = 0;
	static int32_t x382 = -1;
	uint64_t x383 = 255490194LLU;
	volatile int32_t t82 = -51946764;

	t82 = (x381<(x382&(x383-x384)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x386 = -63932;
	uint64_t x387 = 2487LLU;
	volatile uint16_t x388 = 5U;
	volatile int32_t t83 = -118;

	t83 = (x385<(x386&(x387-x388)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x389 = -102;
	static uint32_t x390 = UINT32_MAX;

	t84 = (x389<(x390&(x391-x392)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x393 = INT16_MAX;
	static volatile uint16_t x394 = UINT16_MAX;
	int16_t x395 = -780;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t85 = -232444536;

	t85 = (x393<(x394&(x395-x396)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = -8704LL;
	int32_t x398 = INT32_MIN;
	uint32_t x399 = 68091769U;
	uint16_t x400 = UINT16_MAX;

	t86 = (x397<(x398&(x399-x400)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x402 = 1613373900095632LLU;
	uint16_t x403 = 1U;
	int32_t x404 = -1;
	int32_t t87 = -25;

	t87 = (x401<(x402&(x403-x404)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x405 = 171U;
	volatile int32_t x406 = INT32_MIN;
	uint16_t x407 = 3347U;
	volatile int32_t t88 = -214067759;

	t88 = (x405<(x406&(x407-x408)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x409 = 28;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = UINT32_MAX;
	uint16_t x412 = 17688U;
	static int32_t t89 = 683833;

	t89 = (x409<(x410&(x411-x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x413 = UINT8_MAX;
	uint16_t x414 = 1798U;
	static int64_t x415 = INT64_MIN;
	uint64_t x416 = 62671253LLU;
	volatile int32_t t90 = 2287;

	t90 = (x413<(x414&(x415-x416)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x417 = 41940799LLU;
	uint32_t x419 = UINT32_MAX;
	volatile uint64_t x420 = UINT64_MAX;
	volatile int32_t t91 = -8183;

	t91 = (x417<(x418&(x419-x420)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x421 = INT32_MAX;
	int8_t x422 = INT8_MIN;
	int8_t x423 = -2;
	volatile int32_t t92 = 673;

	t92 = (x421<(x422&(x423-x424)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x425 = 13;
	uint16_t x426 = 30U;
	int16_t x427 = 0;

	t93 = (x425<(x426&(x427-x428)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x429 = UINT64_MAX;
	volatile uint64_t x430 = 119643011216LLU;
	static int16_t x432 = INT16_MIN;
	int32_t t94 = -5226886;

	t94 = (x429<(x430&(x431-x432)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x433 = -1LL;
	int16_t x434 = -1;
	volatile int64_t x436 = -1LL;

	t95 = (x433<(x434&(x435-x436)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x437 = 488397760LLU;
	int32_t x439 = INT32_MAX;
	uint32_t x440 = UINT32_MAX;
	int32_t t96 = -20;

	t96 = (x437<(x438&(x439-x440)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = INT32_MIN;
	int32_t x442 = INT32_MIN;
	int8_t x443 = INT8_MAX;
	int16_t x444 = 11948;
	int32_t t97 = -983224;

	t97 = (x441<(x442&(x443-x444)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = 31;
	uint32_t x446 = UINT32_MAX;
	int16_t x447 = INT16_MAX;
	int16_t x448 = INT16_MIN;
	int32_t t98 = 225;

	t98 = (x445<(x446&(x447-x448)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = 0;
	int64_t x450 = 187742LL;
	volatile int8_t x451 = INT8_MAX;
	uint64_t x452 = 139677934151LLU;
	volatile int32_t t99 = 516441026;

	t99 = (x449<(x450&(x451-x452)));

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

