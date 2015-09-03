#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 54;
int16_t x14 = INT16_MAX;
uint32_t x15 = 5147050U;
int8_t x33 = INT8_MAX;
uint64_t t6 = 54252LLU;
static int64_t x48 = INT64_MIN;
int64_t x55 = INT64_MIN;
uint8_t x56 = 1U;
int64_t x63 = -1LL;
int16_t x65 = 0;
int32_t t13 = 4;
volatile int16_t x70 = -1;
static int16_t x76 = -6;
uint64_t t16 = 304599804171LLU;
int32_t x98 = -1;
volatile uint32_t x103 = UINT32_MAX;
static volatile uint64_t t21 = 157646311166866147LLU;
volatile int16_t x111 = INT16_MIN;
static int8_t x112 = INT8_MIN;
int32_t t22 = 27063;
volatile uint8_t x113 = 0U;
uint8_t x116 = UINT8_MAX;
static uint8_t x121 = 6U;
int16_t x122 = INT16_MIN;
volatile int64_t t24 = 2713568061364628457LL;
static int32_t x125 = INT32_MAX;
int32_t x126 = 767248;
volatile int64_t x137 = INT64_MAX;
int64_t x142 = -5LL;
int64_t x150 = 40155026LL;
int16_t x152 = INT16_MIN;
int64_t x158 = -1LL;
static volatile int64_t t31 = -9649220487326LL;
int16_t x167 = INT16_MAX;
int32_t t33 = -149220;
int16_t x181 = -1;
uint32_t x183 = 471U;
int32_t t36 = 754;
volatile int32_t x191 = 8272524;
static int64_t x197 = 118194LL;
int64_t x200 = INT64_MAX;
int8_t x202 = -1;
int64_t x211 = INT64_MAX;
int32_t x216 = -1;
uint64_t t44 = 38703369689562605LLU;
int32_t x229 = -1;
uint16_t x236 = UINT16_MAX;
int16_t x238 = INT16_MIN;
int32_t x240 = INT32_MIN;
int8_t x241 = -1;
int32_t t53 = 0;
uint64_t x271 = 57687633825LLU;
int64_t x273 = INT64_MIN;
int8_t x278 = -18;
uint8_t x280 = 1U;
volatile uint8_t x288 = 0U;
uint8_t x289 = UINT8_MAX;
int32_t t58 = 0;
volatile uint64_t t59 = 2010710366640300LLU;
int64_t t60 = 54670224559LL;
static int32_t x301 = -1;
int32_t t62 = 207421;
uint32_t x331 = 64372877U;
uint64_t x337 = 56499LLU;
static uint64_t x338 = 11878123044LLU;
int8_t x339 = -1;
volatile uint16_t x355 = UINT16_MAX;
int8_t x360 = -1;
static uint64_t x367 = UINT64_MAX;
int8_t x371 = INT8_MAX;
int64_t x378 = INT64_MIN;
uint16_t x380 = 27U;
int64_t x381 = INT64_MIN;
int64_t x386 = -6412209642LL;
int64_t t80 = -5872989LL;
uint32_t t82 = 563U;
uint8_t x414 = 7U;
volatile int16_t x415 = -3066;
static int32_t x417 = INT32_MIN;
uint64_t x420 = 34103LLU;
volatile uint16_t x433 = 2332U;
static volatile uint64_t x436 = 9029LLU;
static uint64_t t88 = 62658382039LLU;
int8_t x440 = INT8_MIN;
int16_t x442 = INT16_MIN;
int8_t x443 = -6;
static volatile uint64_t t91 = 23466110493705LLU;
static int32_t x450 = INT32_MIN;
int8_t x452 = INT8_MAX;
int16_t x458 = INT16_MAX;
int32_t x470 = 80;
int32_t t96 = 6;
static volatile int32_t x479 = 1;
uint32_t x480 = 143U;
static uint16_t x482 = 20851U;


void f0(void) {
	volatile int16_t x1 = -1;
	volatile int32_t x2 = -8049741;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = -15;
	volatile int32_t t0 = -1820323;

	t0 = (x1/((x2-x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	static int32_t x6 = 20552262;
	volatile uint16_t x7 = 399U;
	int32_t x8 = -1;

	t1 = (x5/((x6-x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 29420U;
	int16_t x16 = -2503;
	uint32_t t2 = 245U;

	t2 = (x13/((x14-x15)+x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = 119U;
	uint16_t x18 = 692U;
	uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MIN;
	uint32_t t3 = 115147U;

	t3 = (x17/((x18-x19)+x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	volatile uint8_t x27 = UINT8_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t4 = -12284;

	t4 = (x25/((x26-x27)+x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x29 = UINT8_MAX;
	static uint64_t x30 = UINT64_MAX;
	static int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MAX;
	uint64_t t5 = 4250549602906199615LLU;

	t5 = (x29/((x30-x31)+x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x34 = 1993919LLU;
	uint64_t x35 = 203435831264389LLU;
	static uint32_t x36 = 6653890U;

	t6 = (x33/((x34-x35)+x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = UINT16_MAX;
	volatile int8_t x42 = 1;
	static uint8_t x43 = 1U;
	int16_t x44 = INT16_MIN;
	static volatile int32_t t7 = 6;

	t7 = (x41/((x42-x43)+x44));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = -7;
	uint64_t x46 = 24935176446023LLU;
	static int8_t x47 = 2;
	volatile uint64_t t8 = 505033422LLU;

	t8 = (x45/((x46-x47)+x48));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = INT8_MIN;
	uint32_t x50 = 210U;
	int8_t x51 = INT8_MIN;
	int8_t x52 = -1;
	static uint32_t t9 = 4888726U;

	t9 = (x49/((x50-x51)+x52));

	if (t9 != 12744709U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -1009721;
	volatile uint64_t x54 = 1485339584307548LLU;
	uint64_t t10 = 60988558782220LLU;

	t10 = (x53/((x54-x55)+x56));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x57 = 2U;
	int64_t x58 = 23155LL;
	int16_t x59 = 1;
	int64_t x60 = INT64_MIN;
	volatile int64_t t11 = -728136LL;

	t11 = (x57/((x58-x59)+x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 470470592785572LLU;
	int8_t x62 = -1;
	volatile uint64_t x64 = 1604150239137993071LLU;
	static uint64_t t12 = 330990419444LLU;

	t12 = (x61/((x62-x63)+x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x66 = 9;
	volatile int8_t x67 = -1;
	static int32_t x68 = 3839939;

	t13 = (x65/((x66-x67)+x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = 60LLU;
	uint16_t x71 = UINT16_MAX;
	uint16_t x72 = 22257U;
	volatile uint64_t t14 = 71016731966766733LLU;

	t14 = (x69/((x70-x71)+x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 28834U;
	volatile int64_t x74 = -64056796660351169LL;
	int16_t x75 = INT16_MAX;
	static int64_t t15 = 47647245LL;

	t15 = (x73/((x74-x75)+x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x77 = 111U;
	uint64_t x78 = 1043578888LLU;
	volatile uint32_t x79 = UINT32_MAX;
	int64_t x80 = 127937LL;

	t16 = (x77/((x78-x79)+x80));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = INT16_MAX;
	uint16_t x82 = 6395U;
	volatile uint16_t x83 = 20567U;
	static uint32_t x84 = 317U;
	volatile uint32_t t17 = 1032012U;

	t17 = (x81/((x82-x83)+x84));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = -15514;
	int64_t x86 = INT64_MAX;
	int32_t x87 = 3;
	uint16_t x88 = 2U;
	static volatile int64_t t18 = 1865LL;

	t18 = (x85/((x86-x87)+x88));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x97 = 3767U;
	int32_t x99 = -1;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t19 = 375951825U;

	t19 = (x97/((x98-x99)+x100));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x101 = INT64_MAX;
	int8_t x102 = -1;
	int32_t x104 = INT32_MAX;
	volatile int64_t t20 = 95884627LL;

	t20 = (x101/((x102-x103)+x104));

	if (t20 != 4294967298LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 250968718LL;
	uint64_t x106 = 56975852034842LLU;
	uint8_t x107 = 3U;
	static volatile uint32_t x108 = UINT32_MAX;

	t21 = (x105/((x106-x107)+x108));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -10;
	int32_t x110 = INT32_MIN;

	t22 = (x109/((x110-x111)+x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = INT32_MIN;
	static int8_t x115 = INT8_MIN;
	static volatile int32_t t23 = -4;

	t23 = (x113/((x114-x115)+x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x123 = INT8_MIN;
	static int64_t x124 = INT64_MAX;

	t24 = (x121/((x122-x123)+x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int32_t t25 = 13;

	t25 = (x125/((x126-x127)+x128));

	if (t25 != 2923) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x138 = INT8_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile int32_t x140 = 0;
	volatile uint64_t t26 = 8964947909392985LLU;

	t26 = (x137/((x138-x139)+x140));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x141 = -1727625;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	int64_t t27 = 15411LL;

	t27 = (x141/((x142-x143)+x144));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = UINT64_MAX;
	static uint8_t x146 = UINT8_MAX;
	static int8_t x147 = -1;
	static volatile int64_t x148 = INT64_MIN;
	static uint64_t t28 = 109LLU;

	t28 = (x145/((x146-x147)+x148));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x149 = -9;
	volatile int32_t x151 = -1;
	volatile int64_t t29 = -17184398LL;

	t29 = (x149/((x150-x151)+x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = 403208;
	uint8_t x154 = 84U;
	uint8_t x155 = 2U;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t30 = 0;

	t30 = (x153/((x154-x155)+x156));

	if (t30 != -12) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x157 = INT32_MAX;
	static int32_t x159 = INT32_MAX;
	int16_t x160 = -6;

	t31 = (x157/((x158-x159)+x160));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x161 = 700559687U;
	int32_t x162 = -3;
	uint16_t x163 = 7U;
	static int8_t x164 = INT8_MIN;
	volatile uint32_t t32 = 1U;

	t32 = (x161/((x162-x163)+x164));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MIN;
	uint8_t x166 = 9U;
	int16_t x168 = -1;

	t33 = (x165/((x166-x167)+x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	uint8_t x178 = 1U;
	uint64_t x179 = 312733524481168LLU;
	static int64_t x180 = 582948LL;
	static uint64_t t34 = 2359813419177LLU;

	t34 = (x177/((x178-x179)+x180));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x182 = INT8_MIN;
	int16_t x184 = INT16_MAX;
	static uint32_t t35 = 5729U;

	t35 = (x181/((x182-x183)+x184));

	if (t35 != 133516U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MIN;
	volatile uint16_t x186 = 7898U;
	int16_t x187 = INT16_MIN;
	int16_t x188 = INT16_MIN;

	t36 = (x185/((x186-x187)+x188));

	if (t36 != -4) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = 12417370023329LL;
	uint64_t x190 = UINT64_MAX;
	int8_t x192 = INT8_MAX;
	static volatile uint64_t t37 = 325470089LLU;

	t37 = (x189/((x190-x191)+x192));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x193 = INT32_MIN;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 9789319LLU;
	int32_t x196 = 412;
	volatile uint64_t t38 = 1116490686463331LLU;

	t38 = (x193/((x194-x195)+x196));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x198 = 6559667392LLU;
	uint8_t x199 = 91U;
	volatile uint64_t t39 = 1804122524367252LLU;

	t39 = (x197/((x198-x199)+x200));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x201 = -1;
	static int8_t x203 = INT8_MAX;
	static int8_t x204 = INT8_MAX;
	int32_t t40 = 15094;

	t40 = (x201/((x202-x203)+x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MIN;
	int8_t x210 = INT8_MAX;
	int64_t x212 = INT64_MAX;
	int64_t t41 = 2454LL;

	t41 = (x209/((x210-x211)+x212));

	if (t41 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = -130;
	uint32_t x214 = 2082877643U;
	int32_t x215 = INT32_MIN;
	volatile uint32_t t42 = 314U;

	t42 = (x213/((x214-x215)+x216));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x217 = INT8_MIN;
	static int32_t x218 = 7661;
	volatile int16_t x219 = INT16_MAX;
	int8_t x220 = 1;
	int32_t t43 = 27;

	t43 = (x217/((x218-x219)+x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x221 = INT8_MAX;
	uint64_t x222 = UINT64_MAX;
	static int16_t x223 = INT16_MIN;
	int64_t x224 = -1LL;

	t44 = (x221/((x222-x223)+x224));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x225 = -1;
	int8_t x226 = -4;
	static int8_t x227 = -50;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t45 = 17;

	t45 = (x225/((x226-x227)+x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x230 = 11;
	static int8_t x231 = 1;
	uint64_t x232 = 17534627206LLU;
	volatile uint64_t t46 = 1013084802468747LLU;

	t46 = (x229/((x230-x231)+x232));

	if (t46 != 1052018035LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = 4U;
	int64_t x235 = -143549505629LL;
	int64_t t47 = -3LL;

	t47 = (x233/((x234-x235)+x236));

	if (t47 != -64252174LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x237 = INT8_MAX;
	uint64_t x239 = UINT64_MAX;
	uint64_t t48 = 963244187LLU;

	t48 = (x237/((x238-x239)+x240));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x242 = 73U;
	volatile uint64_t x243 = 83427679052LLU;
	int8_t x244 = INT8_MIN;
	uint64_t t49 = 81646LLU;

	t49 = (x241/((x242-x243)+x244));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x245 = UINT16_MAX;
	int16_t x246 = INT16_MIN;
	volatile int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t50 = -4975763;

	t50 = (x245/((x246-x247)+x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x249 = 3;
	volatile int8_t x250 = INT8_MAX;
	int8_t x251 = INT8_MAX;
	int16_t x252 = -1;
	volatile int32_t t51 = 1123;

	t51 = (x249/((x250-x251)+x252));

	if (t51 != -3) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x261 = 790U;
	int8_t x262 = -1;
	static int16_t x263 = INT16_MIN;
	uint16_t x264 = 250U;
	volatile uint32_t t52 = 21U;

	t52 = (x261/((x262-x263)+x264));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x265 = -12;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MAX;

	t53 = (x265/((x266-x267)+x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int16_t x270 = -1;
	volatile int8_t x272 = -8;
	uint64_t t54 = 1774359766954LLU;

	t54 = (x269/((x270-x271)+x272));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x274 = 23U;
	int8_t x275 = INT8_MAX;
	uint8_t x276 = 6U;
	static int64_t t55 = 29237LL;

	t55 = (x273/((x274-x275)+x276));

	if (t55 != -2147483697LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x277 = 1U;
	volatile int32_t x279 = -421;
	volatile uint32_t t56 = 5U;

	t56 = (x277/((x278-x279)+x280));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x285 = 0U;
	int64_t x286 = INT64_MAX;
	uint16_t x287 = UINT16_MAX;
	volatile int64_t t57 = -4180LL;

	t57 = (x285/((x286-x287)+x288));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x290 = -3;
	int8_t x291 = -12;
	int32_t x292 = -2171892;

	t58 = (x289/((x290-x291)+x292));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x293 = -5;
	static uint64_t x294 = 10604757932289LLU;
	static int64_t x295 = -159LL;
	static int16_t x296 = INT16_MIN;

	t59 = (x293/((x294-x295)+x296));

	if (t59 != 1739478LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MAX;
	int64_t x299 = -1LL;
	int8_t x300 = -1;

	t60 = (x297/((x298-x299)+x300));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x302 = -1;
	static volatile int16_t x303 = -1;
	int8_t x304 = -28;
	int32_t t61 = -190366;

	t61 = (x301/((x302-x303)+x304));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x309 = -1;
	static int16_t x310 = INT16_MIN;
	int16_t x311 = -8555;
	static uint8_t x312 = UINT8_MAX;

	t62 = (x309/((x310-x311)+x312));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = -1;
	int32_t x319 = INT32_MIN;
	int16_t x320 = -1;
	volatile int32_t t63 = 147;

	t63 = (x317/((x318-x319)+x320));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = INT8_MAX;
	int8_t x322 = INT8_MIN;
	static uint32_t x323 = 26U;
	int8_t x324 = INT8_MIN;
	uint32_t t64 = 1505U;

	t64 = (x321/((x322-x323)+x324));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = -7562;
	uint64_t x326 = 272650054LLU;
	uint32_t x327 = 7241352U;
	uint8_t x328 = 22U;
	static volatile uint64_t t65 = 2539601955383109LLU;

	t65 = (x325/((x326-x327)+x328));

	if (t65 != 69503156473LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = -47;
	static int8_t x330 = -3;
	int32_t x332 = INT32_MIN;
	uint32_t t66 = 56U;

	t66 = (x329/((x330-x331)+x332));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = INT64_MAX;
	int64_t x336 = INT64_MAX;
	volatile int64_t t67 = 108430211701LL;

	t67 = (x333/((x334-x335)+x336));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x340 = INT32_MAX;
	volatile uint64_t t68 = 84516822LLU;

	t68 = (x337/((x338-x339)+x340));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x341 = 52LL;
	int64_t x342 = 2037254664303864LL;
	int64_t x343 = -3062922LL;
	int8_t x344 = INT8_MIN;
	static int64_t t69 = -449784778517LL;

	t69 = (x341/((x342-x343)+x344));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = 174;
	int8_t x346 = -61;
	static volatile uint32_t x347 = UINT32_MAX;
	uint32_t x348 = 3U;
	volatile uint32_t t70 = 337730591U;

	t70 = (x345/((x346-x347)+x348));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x349 = INT64_MIN;
	static int8_t x350 = -1;
	static int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	int64_t t71 = 1845LL;

	t71 = (x349/((x350-x351)+x352));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x353 = -1LL;
	int8_t x354 = -1;
	int32_t x356 = -1;
	volatile int64_t t72 = 670465052035LL;

	t72 = (x353/((x354-x355)+x356));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int8_t x358 = INT8_MIN;
	static int16_t x359 = INT16_MAX;
	uint32_t t73 = 995U;

	t73 = (x357/((x358-x359)+x360));

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x361 = UINT16_MAX;
	uint32_t x362 = UINT32_MAX;
	static int64_t x363 = INT64_MAX;
	int32_t x364 = -14;
	int64_t t74 = -85LL;

	t74 = (x361/((x362-x363)+x364));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x365 = 6;
	int32_t x366 = -1;
	static uint64_t x368 = 134385075403LLU;
	static uint64_t t75 = 21002159800298451LLU;

	t75 = (x365/((x366-x367)+x368));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x369 = 31;
	uint32_t x370 = 25U;
	int32_t x372 = INT32_MIN;
	static volatile uint32_t t76 = 48U;

	t76 = (x369/((x370-x371)+x372));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = 120;
	static int16_t x379 = -1142;
	static int64_t t77 = -16410576693660LL;

	t77 = (x377/((x378-x379)+x380));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x382 = UINT64_MAX;
	uint64_t x383 = 2118882635374477LLU;
	static uint32_t x384 = UINT32_MAX;
	uint64_t t78 = 214581LLU;

	t78 = (x381/((x382-x383)+x384));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x385 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	volatile int64_t x388 = -1LL;
	int64_t t79 = -102LL;

	t79 = (x385/((x386-x387)+x388));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = 3;
	volatile uint8_t x395 = UINT8_MAX;
	int64_t x396 = 1571315559800LL;

	t80 = (x393/((x394-x395)+x396));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = 1716745LL;
	int32_t x398 = -1;
	uint64_t x399 = 584525003780916329LLU;
	int64_t x400 = INT64_MIN;
	uint64_t t81 = 17LLU;

	t81 = (x397/((x398-x399)+x400));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = INT32_MAX;
	static uint32_t x402 = UINT32_MAX;
	volatile int8_t x403 = INT8_MIN;
	static volatile uint8_t x404 = 3U;

	t82 = (x401/((x402-x403)+x404));

	if (t82 != 16519104U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x405 = 1309009688656887341LLU;
	int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MIN;
	static int16_t x408 = -1854;
	uint64_t t83 = 518142953883LLU;

	t83 = (x405/((x406-x407)+x408));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x413 = INT32_MIN;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t84 = 79423860951LLU;

	t84 = (x413/((x414-x415)+x416));

	if (t84 != 6004799502461610LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x418 = UINT32_MAX;
	int8_t x419 = 1;
	volatile uint64_t t85 = 6933306650998434LLU;

	t85 = (x417/((x418-x419)+x420));

	if (t85 != 4294933194LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = -1;
	volatile int64_t x422 = -8508455902989LL;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MAX;
	static volatile int64_t t86 = -193LL;

	t86 = (x421/((x422-x423)+x424));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x429 = -5892;
	int32_t x430 = INT32_MAX;
	uint8_t x431 = UINT8_MAX;
	uint64_t x432 = 35656LLU;
	volatile uint64_t t87 = 553412988433024LLU;

	t87 = (x429/((x430-x431)+x432));

	if (t87 != 8589792994LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x434 = INT8_MIN;
	static volatile uint64_t x435 = UINT64_MAX;

	t88 = (x433/((x434-x435)+x436));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = INT64_MIN;
	static volatile int32_t x438 = -1;
	volatile int16_t x439 = INT16_MIN;
	volatile int64_t t89 = -7921LL;

	t89 = (x437/((x438-x439)+x440));

	if (t89 != -282587457852715LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = 20558999;
	int64_t x444 = INT64_MAX;
	int64_t t90 = -124344LL;

	t90 = (x441/((x442-x443)+x444));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x445 = UINT16_MAX;
	uint64_t x446 = 3918159501148LLU;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = UINT16_MAX;

	t91 = (x445/((x446-x447)+x448));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x449 = INT16_MAX;
	uint64_t x451 = 487630760853LLU;
	static uint64_t t92 = 1950LLU;

	t92 = (x449/((x450-x451)+x452));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x453 = INT8_MAX;
	static uint16_t x454 = 7238U;
	int8_t x455 = INT8_MIN;
	static int32_t x456 = INT32_MIN;
	volatile int32_t t93 = 183;

	t93 = (x453/((x454-x455)+x456));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x457 = 191;
	uint32_t x459 = 823U;
	uint32_t x460 = UINT32_MAX;
	static volatile uint32_t t94 = 219258621U;

	t94 = (x457/((x458-x459)+x460));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x465 = 759319407;
	static int16_t x466 = -1;
	static int32_t x467 = 3380;
	static int64_t x468 = -18177325791439LL;
	volatile int64_t t95 = -6LL;

	t95 = (x465/((x466-x467)+x468));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x469 = -1;
	int32_t x471 = -81292887;
	int16_t x472 = INT16_MIN;

	t96 = (x469/((x470-x471)+x472));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x473 = INT32_MIN;
	int16_t x474 = 1;
	uint32_t x475 = UINT32_MAX;
	volatile int32_t x476 = INT32_MAX;
	volatile uint32_t t97 = 80481U;

	t97 = (x473/((x474-x475)+x476));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x477 = INT8_MAX;
	int8_t x478 = 19;
	static volatile uint32_t t98 = 481292194U;

	t98 = (x477/((x478-x479)+x480));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x481 = -7;
	static uint64_t x483 = 1LLU;
	int16_t x484 = INT16_MIN;
	volatile uint64_t t99 = 10436547LLU;

	t99 = (x481/((x482-x483)+x484));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

