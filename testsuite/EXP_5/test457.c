#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x12 = 0U;
uint32_t t2 = 1606233488U;
uint8_t x18 = 60U;
int32_t x22 = INT32_MAX;
int32_t x28 = INT32_MIN;
int32_t t6 = -30;
static int16_t x43 = 0;
int32_t x44 = INT32_MIN;
static volatile uint16_t x48 = UINT16_MAX;
static int8_t x49 = -1;
volatile int64_t x52 = INT64_MAX;
static int32_t t9 = 908;
int32_t t11 = 38437;
volatile int32_t t12 = -2;
uint16_t x89 = 3U;
int32_t t15 = 0;
volatile int8_t x95 = INT8_MIN;
uint64_t x96 = 1589944259427LLU;
static int32_t t16 = -4981;
int64_t x104 = INT64_MAX;
int16_t x110 = -218;
static int16_t x111 = -1321;
int32_t x113 = INT32_MIN;
int8_t x127 = INT8_MIN;
static int64_t x128 = -1LL;
uint8_t x141 = 125U;
int32_t t24 = 6;
int32_t x166 = 7;
static int64_t x167 = -1LL;
static uint32_t x169 = 463U;
static volatile uint64_t x177 = 2068668LLU;
static int32_t x178 = -1;
int16_t x190 = 620;
int32_t x192 = -2114;
volatile int32_t t31 = 595;
uint8_t x206 = UINT8_MAX;
int32_t x217 = INT32_MIN;
static int8_t x231 = INT8_MIN;
volatile uint64_t x254 = UINT64_MAX;
int8_t x255 = -55;
static uint16_t x256 = UINT16_MAX;
volatile int64_t t39 = 23141038293478LL;
static int8_t x257 = -1;
int32_t t41 = -175042;
volatile int32_t x268 = INT32_MIN;
int32_t t42 = -71;
static uint16_t x277 = 2533U;
int8_t x295 = 52;
static int32_t t47 = -5876428;
static int64_t x302 = -1807446668LL;
volatile int64_t x309 = -1LL;
int32_t t51 = 513240;
volatile int8_t x320 = -1;
volatile int32_t t52 = -180930;
int8_t x322 = INT8_MAX;
static volatile int32_t t53 = 1475337;
static volatile int16_t x328 = INT16_MIN;
static uint64_t x335 = 12334LLU;
static int32_t x342 = -1;
uint16_t x346 = UINT16_MAX;
uint8_t x348 = 15U;
int64_t t60 = -1LL;
int16_t x363 = INT16_MIN;
int64_t x375 = -471008007925266LL;
static int64_t x376 = -317LL;
int16_t x379 = INT16_MIN;
volatile int64_t t64 = -127444423819148LL;
int16_t x383 = INT16_MAX;
static int64_t x385 = -493LL;
volatile int64_t x388 = 2LL;
int8_t x416 = 6;
uint64_t x418 = 21565620LLU;
uint16_t x422 = 43U;
static int64_t x426 = -1LL;
volatile int32_t x430 = -30906;
volatile int32_t x433 = 95;
int32_t t74 = -558;
int32_t t75 = 2263130;
uint32_t x459 = 7468630U;
int16_t x460 = -8073;
int16_t x465 = -22;
static int32_t x467 = 47132;
int8_t x468 = 1;
int32_t t79 = 227;
int32_t x481 = -1;
volatile int8_t x504 = INT8_MAX;
int32_t t87 = -1619;
uint32_t x510 = UINT32_MAX;
volatile int16_t x513 = INT16_MIN;
uint32_t x517 = 53575053U;
volatile uint32_t x525 = UINT32_MAX;
int8_t x533 = -1;
volatile uint16_t x535 = 1811U;
volatile uint8_t x538 = 3U;
int8_t x541 = -2;
static uint8_t x551 = UINT8_MAX;
volatile int32_t t98 = 1;
uint16_t x560 = 460U;


void f0(void) {
	volatile uint32_t x5 = UINT32_MAX;
	volatile int8_t x6 = INT8_MAX;
	int8_t x7 = -50;
	static uint16_t x8 = UINT16_MAX;
	volatile uint32_t t0 = 10679U;

	t0 = (x5-((x6*x7)<=x8));

	if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x9 = 68072360496LLU;
	uint16_t x10 = UINT16_MAX;
	volatile uint64_t x11 = UINT64_MAX;
	static uint64_t t1 = 90LLU;

	t1 = (x9-((x10*x11)<=x12));

	if (t1 != 68072360496LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 7615U;
	volatile uint64_t x14 = 2701345LLU;
	static int64_t x15 = INT64_MAX;
	int64_t x16 = INT64_MIN;

	t2 = (x13-((x14*x15)<=x16));

	if (t2 != 7614U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int16_t x19 = INT16_MIN;
	int8_t x20 = -58;
	volatile int32_t t3 = 725;

	t3 = (x17-((x18*x19)<=x20));

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = UINT32_MAX;
	volatile int8_t x23 = -1;
	static int8_t x24 = INT8_MIN;
	uint32_t t4 = 2874658U;

	t4 = (x21-((x22*x23)<=x24));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int32_t t5 = -254;

	t5 = (x25-((x26*x27)<=x28));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x33 = -1;
	int8_t x34 = -1;
	uint64_t x35 = 8861476473526LLU;
	int64_t x36 = INT64_MAX;

	t6 = (x33-((x34*x35)<=x36));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	int32_t t7 = INT32_MIN;

	t7 = (x41-((x42*x43)<=x44));

	if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	uint16_t x47 = 1U;
	static int32_t t8 = -100225;

	t8 = (x45-((x46*x47)<=x48));

	if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x50 = 290166672649LLU;
	uint32_t x51 = UINT32_MAX;

	t9 = (x49-((x50*x51)<=x52));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = 2412617652133259LL;
	uint8_t x54 = 84U;
	int32_t x55 = -5425;
	uint8_t x56 = 3U;
	static int64_t t10 = 65032447LL;

	t10 = (x53-((x54*x55)<=x56));

	if (t10 != 2412617652133258LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x61 = 52U;
	int16_t x62 = INT16_MIN;
	int8_t x63 = -1;
	static volatile uint32_t x64 = 30809721U;

	t11 = (x61-((x62*x63)<=x64));

	if (t11 != 51) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x65 = 37;
	uint32_t x66 = 8U;
	int64_t x67 = -2984595057848LL;
	int16_t x68 = INT16_MIN;

	t12 = (x65-((x66*x67)<=x68));

	if (t12 != 36) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x73 = 1033U;
	int8_t x74 = 4;
	static volatile int16_t x75 = -1;
	static int8_t x76 = INT8_MAX;
	static int32_t t13 = -1379;

	t13 = (x73-((x74*x75)<=x76));

	if (t13 != 1032) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = 3983;
	static uint8_t x78 = 38U;
	int16_t x79 = INT16_MAX;
	int32_t x80 = -1;
	int32_t t14 = 7958;

	t14 = (x77-((x78*x79)<=x80));

	if (t14 != 3983) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x90 = INT64_MAX;
	static int16_t x91 = -1;
	static int32_t x92 = -1289;

	t15 = (x89-((x90*x91)<=x92));

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x93 = UINT8_MAX;
	uint8_t x94 = 2U;

	t16 = (x93-((x94*x95)<=x96));

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x97 = UINT32_MAX;
	uint16_t x98 = 0U;
	static int8_t x99 = 0;
	int8_t x100 = 2;
	static uint32_t t17 = 6U;

	t17 = (x97-((x98*x99)<=x100));

	if (t17 != 4294967294U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = INT64_MAX;
	volatile uint64_t x102 = UINT64_MAX;
	static volatile uint32_t x103 = 80U;
	int64_t t18 = INT64_MAX;

	t18 = (x101-((x102*x103)<=x104));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = -1;
	int8_t x106 = -1;
	int8_t x107 = -1;
	uint8_t x108 = 4U;
	int32_t t19 = -32;

	t19 = (x105-((x106*x107)<=x108));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x109 = -1;
	uint32_t x112 = 625U;
	int32_t t20 = -6261;

	t20 = (x109-((x110*x111)<=x112));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x114 = 4LL;
	uint8_t x115 = 33U;
	int32_t x116 = 2;
	static int32_t t21 = INT32_MIN;

	t21 = (x113-((x114*x115)<=x116));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = INT64_MAX;
	static int16_t x118 = INT16_MIN;
	volatile int8_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	int64_t t22 = INT64_MAX;

	t22 = (x117-((x118*x119)<=x120));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = -144;
	static uint64_t x126 = 344818888583LLU;
	static volatile int32_t t23 = 4339;

	t23 = (x125-((x126*x127)<=x128));

	if (t23 != -145) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x142 = 0;
	int16_t x143 = 100;
	int8_t x144 = INT8_MIN;

	t24 = (x141-((x142*x143)<=x144));

	if (t24 != 125) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x149 = 9163U;
	uint32_t x150 = 15U;
	volatile int16_t x151 = INT16_MIN;
	int32_t x152 = 1;
	int32_t t25 = 60649;

	t25 = (x149-((x150*x151)<=x152));

	if (t25 != 9163) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x165 = INT16_MIN;
	uint32_t x168 = 87021U;
	int32_t t26 = 218871323;

	t26 = (x165-((x166*x167)<=x168));

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x170 = 0;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 2U;
	volatile uint32_t t27 = 61374705U;

	t27 = (x169-((x170*x171)<=x172));

	if (t27 != 462U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MAX;
	uint64_t t28 = 24211898826845121LLU;

	t28 = (x177-((x178*x179)<=x180));

	if (t28 != 2068667LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	int64_t x183 = -1LL;
	int8_t x184 = INT8_MIN;
	volatile int32_t t29 = 1;

	t29 = (x181-((x182*x183)<=x184));

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x189 = 931321LL;
	static uint32_t x191 = 207U;
	int64_t t30 = 0LL;

	t30 = (x189-((x190*x191)<=x192));

	if (t30 != 931320LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x193 = 446U;
	uint32_t x194 = 349U;
	uint64_t x195 = 9132112670LLU;
	int64_t x196 = INT64_MIN;

	t31 = (x193-((x194*x195)<=x196));

	if (t31 != 445) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x205 = 102004008263213LL;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MAX;
	int64_t t32 = -3631LL;

	t32 = (x205-((x206*x207)<=x208));

	if (t32 != 102004008263212LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x218 = INT8_MIN;
	uint8_t x219 = 50U;
	int64_t x220 = INT64_MIN;
	volatile int32_t t33 = INT32_MIN;

	t33 = (x217-((x218*x219)<=x220));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x225 = UINT8_MAX;
	int8_t x226 = INT8_MIN;
	int8_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t34 = 16;

	t34 = (x225-((x226*x227)<=x228));

	if (t34 != 254) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x229 = INT64_MAX;
	uint32_t x230 = 94U;
	uint64_t x232 = 743178093LLU;
	int64_t t35 = INT64_MAX;

	t35 = (x229-((x230*x231)<=x232));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x233 = INT32_MIN;
	int16_t x234 = 0;
	int8_t x235 = INT8_MIN;
	static int16_t x236 = -1;
	int32_t t36 = INT32_MIN;

	t36 = (x233-((x234*x235)<=x236));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x237 = INT16_MAX;
	static uint64_t x238 = UINT64_MAX;
	static volatile uint32_t x239 = 439474U;
	volatile int64_t x240 = -1LL;
	int32_t t37 = -249;

	t37 = (x237-((x238*x239)<=x240));

	if (t37 != 32766) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x241 = -39;
	uint64_t x242 = UINT64_MAX;
	static uint16_t x243 = 0U;
	static uint8_t x244 = 73U;
	int32_t t38 = -154;

	t38 = (x241-((x242*x243)<=x244));

	if (t38 != -40) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x253 = INT64_MAX;

	t39 = (x253-((x254*x255)<=x256));

	if (t39 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x258 = INT16_MIN;
	int16_t x259 = INT16_MAX;
	int16_t x260 = -1;
	volatile int32_t t40 = -239217177;

	t40 = (x257-((x258*x259)<=x260));

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x261 = INT16_MIN;
	int16_t x262 = INT16_MAX;
	int8_t x263 = -18;
	int64_t x264 = INT64_MAX;

	t41 = (x261-((x262*x263)<=x264));

	if (t41 != -32769) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x265 = -1;
	int16_t x266 = -3;
	int64_t x267 = 10LL;

	t42 = (x265-((x266*x267)<=x268));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x269 = 44;
	volatile int16_t x270 = INT16_MIN;
	static int8_t x271 = INT8_MIN;
	uint16_t x272 = 148U;
	volatile int32_t t43 = -23288;

	t43 = (x269-((x270*x271)<=x272));

	if (t43 != 44) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x278 = -1;
	static int16_t x279 = INT16_MIN;
	volatile uint8_t x280 = UINT8_MAX;
	volatile int32_t t44 = -690699445;

	t44 = (x277-((x278*x279)<=x280));

	if (t44 != 2533) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x281 = UINT32_MAX;
	uint8_t x282 = UINT8_MAX;
	uint64_t x283 = 1003161010LLU;
	int64_t x284 = INT64_MIN;
	volatile uint32_t t45 = 94U;

	t45 = (x281-((x282*x283)<=x284));

	if (t45 != 4294967294U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x289 = 0U;
	int16_t x290 = INT16_MIN;
	volatile uint8_t x291 = 30U;
	uint8_t x292 = 0U;
	int32_t t46 = 508;

	t46 = (x289-((x290*x291)<=x292));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x293 = INT16_MAX;
	uint16_t x294 = 38U;
	static uint16_t x296 = 10U;

	t47 = (x293-((x294*x295)<=x296));

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x301 = UINT16_MAX;
	int32_t x303 = INT32_MIN;
	int32_t x304 = INT32_MIN;
	int32_t t48 = 7590911;

	t48 = (x301-((x302*x303)<=x304));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x305 = -1;
	volatile uint8_t x306 = 25U;
	static uint16_t x307 = 1U;
	volatile int8_t x308 = INT8_MIN;
	static volatile int32_t t49 = 6;

	t49 = (x305-((x306*x307)<=x308));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x310 = 2;
	int8_t x311 = -1;
	int32_t x312 = INT32_MAX;
	int64_t t50 = 4583LL;

	t50 = (x309-((x310*x311)<=x312));

	if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x313 = -1;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = 0;

	t51 = (x313-((x314*x315)<=x316));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x317 = INT8_MIN;
	uint64_t x318 = 277795002LLU;
	static volatile uint8_t x319 = 2U;

	t52 = (x317-((x318*x319)<=x320));

	if (t52 != -129) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x321 = -709955;
	uint8_t x323 = 54U;
	int8_t x324 = INT8_MIN;

	t53 = (x321-((x322*x323)<=x324));

	if (t53 != -709955) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x325 = 7332U;
	static int8_t x326 = INT8_MAX;
	uint16_t x327 = 2470U;
	int32_t t54 = 11379;

	t54 = (x325-((x326*x327)<=x328));

	if (t54 != 7332) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x333 = 2104575495172587885LLU;
	static int64_t x334 = INT64_MIN;
	int16_t x336 = -1;
	uint64_t t55 = 1702021212LLU;

	t55 = (x333-((x334*x335)<=x336));

	if (t55 != 2104575495172587884LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x341 = 14U;
	uint64_t x343 = 6967656LLU;
	int32_t x344 = INT32_MIN;
	int32_t t56 = -200738286;

	t56 = (x341-((x342*x343)<=x344));

	if (t56 != 14) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x345 = INT32_MAX;
	uint16_t x347 = 12U;
	volatile int32_t t57 = INT32_MAX;

	t57 = (x345-((x346*x347)<=x348));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x349 = INT32_MAX;
	uint16_t x350 = UINT16_MAX;
	int16_t x351 = -15;
	uint8_t x352 = 7U;
	volatile int32_t t58 = 1913;

	t58 = (x349-((x350*x351)<=x352));

	if (t58 != 2147483646) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x353 = INT8_MIN;
	uint8_t x354 = 6U;
	static int64_t x355 = -432605042LL;
	int16_t x356 = 894;
	volatile int32_t t59 = -28707;

	t59 = (x353-((x354*x355)<=x356));

	if (t59 != -129) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x357 = 53452738LL;
	static volatile int16_t x358 = INT16_MIN;
	uint16_t x359 = 2U;
	int8_t x360 = 1;

	t60 = (x357-((x358*x359)<=x360));

	if (t60 != 53452737LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x361 = 3U;
	int8_t x362 = INT8_MAX;
	int32_t x364 = -115517;
	static volatile int32_t t61 = 9;

	t61 = (x361-((x362*x363)<=x364));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x369 = INT16_MAX;
	static int32_t x370 = INT32_MIN;
	static uint32_t x371 = UINT32_MAX;
	static volatile int32_t x372 = INT32_MIN;
	int32_t t62 = -34443;

	t62 = (x369-((x370*x371)<=x372));

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x373 = -1;
	uint8_t x374 = UINT8_MAX;
	int32_t t63 = -443344350;

	t63 = (x373-((x374*x375)<=x376));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x377 = -1LL;
	uint32_t x378 = 257750704U;
	uint8_t x380 = 19U;

	t64 = (x377-((x378*x379)<=x380));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x381 = UINT64_MAX;
	volatile int32_t x382 = 31;
	static int64_t x384 = 702871994689LL;
	uint64_t t65 = 1089679558644258LLU;

	t65 = (x381-((x382*x383)<=x384));

	if (t65 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x386 = 3025U;
	static int64_t x387 = -1LL;
	volatile int64_t t66 = -19812998291813621LL;

	t66 = (x385-((x386*x387)<=x388));

	if (t66 != -494LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x389 = INT16_MIN;
	volatile int32_t x390 = -1;
	int32_t x391 = -4278580;
	static int8_t x392 = INT8_MIN;
	volatile int32_t t67 = 428352;

	t67 = (x389-((x390*x391)<=x392));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x393 = 5U;
	static volatile int16_t x394 = -1;
	int32_t x395 = -1;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t68 = 0;

	t68 = (x393-((x394*x395)<=x396));

	if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x413 = -1;
	int64_t x414 = -1LL;
	int8_t x415 = INT8_MIN;
	int32_t t69 = -765900;

	t69 = (x413-((x414*x415)<=x416));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x417 = 27U;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t70 = 427U;

	t70 = (x417-((x418*x419)<=x420));

	if (t70 != 26U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x421 = -105;
	uint64_t x423 = 96663237526LLU;
	volatile int64_t x424 = INT64_MIN;
	int32_t t71 = -23;

	t71 = (x421-((x422*x423)<=x424));

	if (t71 != -106) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x425 = UINT64_MAX;
	int32_t x427 = INT32_MIN;
	int64_t x428 = -137467938897638LL;
	uint64_t t72 = UINT64_MAX;

	t72 = (x425-((x426*x427)<=x428));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x429 = INT16_MIN;
	int8_t x431 = INT8_MIN;
	int64_t x432 = -5918726LL;
	int32_t t73 = -12082;

	t73 = (x429-((x430*x431)<=x432));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x434 = UINT64_MAX;
	uint64_t x435 = 6425101495400LLU;
	uint32_t x436 = 74U;

	t74 = (x433-((x434*x435)<=x436));

	if (t74 != 95) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x437 = INT16_MAX;
	uint32_t x438 = 1U;
	int8_t x439 = -1;
	int8_t x440 = 9;

	t75 = (x437-((x438*x439)<=x440));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x445 = UINT16_MAX;
	uint64_t x446 = UINT64_MAX;
	static volatile int8_t x447 = -1;
	int32_t x448 = -118636;
	static volatile int32_t t76 = -6;

	t76 = (x445-((x446*x447)<=x448));

	if (t76 != 65534) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x453 = INT64_MIN;
	uint32_t x454 = 2075U;
	static uint16_t x455 = 9U;
	uint8_t x456 = 3U;
	volatile int64_t t77 = INT64_MIN;

	t77 = (x453-((x454*x455)<=x456));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x457 = UINT8_MAX;
	int64_t x458 = 16747269710LL;
	volatile int32_t t78 = -24323304;

	t78 = (x457-((x458*x459)<=x460));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x466 = 1202LL;

	t79 = (x465-((x466*x467)<=x468));

	if (t79 != -22) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x469 = 33U;
	int64_t x470 = -3762LL;
	uint64_t x471 = UINT64_MAX;
	uint32_t x472 = 1304U;
	volatile int32_t t80 = 0;

	t80 = (x469-((x470*x471)<=x472));

	if (t80 != 33) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x473 = -1;
	int16_t x474 = 6;
	static int16_t x475 = INT16_MAX;
	static int8_t x476 = 0;
	int32_t t81 = -1328467;

	t81 = (x473-((x474*x475)<=x476));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x477 = 247000968U;
	int16_t x478 = -1;
	static uint8_t x479 = 4U;
	uint8_t x480 = 7U;
	static uint32_t t82 = 249824U;

	t82 = (x477-((x478*x479)<=x480));

	if (t82 != 247000967U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x482 = 180;
	uint16_t x483 = UINT16_MAX;
	int16_t x484 = 16;
	volatile int32_t t83 = -57861215;

	t83 = (x481-((x482*x483)<=x484));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x485 = 7U;
	static int8_t x486 = 1;
	int64_t x487 = INT64_MIN;
	int8_t x488 = INT8_MIN;
	volatile int32_t t84 = -945943;

	t84 = (x485-((x486*x487)<=x488));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x489 = INT8_MIN;
	static int16_t x490 = -224;
	uint64_t x491 = 3207946790759LLU;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t85 = -220325;

	t85 = (x489-((x490*x491)<=x492));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x501 = -1;
	int8_t x502 = INT8_MIN;
	uint32_t x503 = 120309U;
	static volatile int32_t t86 = -872532861;

	t86 = (x501-((x502*x503)<=x504));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x505 = 3U;
	int64_t x506 = INT64_MAX;
	uint64_t x507 = 18843914659LLU;
	int64_t x508 = -1LL;

	t87 = (x505-((x506*x507)<=x508));

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x509 = 226U;
	uint16_t x511 = 32U;
	int16_t x512 = -1;
	volatile int32_t t88 = -833947;

	t88 = (x509-((x510*x511)<=x512));

	if (t88 != 225) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x514 = 38673U;
	int16_t x515 = -1;
	uint32_t x516 = UINT32_MAX;
	int32_t t89 = -10955958;

	t89 = (x513-((x514*x515)<=x516));

	if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x518 = -1;
	static volatile int8_t x519 = INT8_MIN;
	int8_t x520 = INT8_MAX;
	uint32_t t90 = 117493U;

	t90 = (x517-((x518*x519)<=x520));

	if (t90 != 53575053U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x521 = -1724;
	static int16_t x522 = -8600;
	uint8_t x523 = UINT8_MAX;
	int64_t x524 = 1767807120022138507LL;
	static volatile int32_t t91 = 132816185;

	t91 = (x521-((x522*x523)<=x524));

	if (t91 != -1725) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x526 = INT8_MAX;
	uint8_t x527 = 6U;
	int64_t x528 = -1LL;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (x525-((x526*x527)<=x528));

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x529 = INT16_MIN;
	volatile uint32_t x530 = 1567120278U;
	int8_t x531 = INT8_MIN;
	uint8_t x532 = 3U;
	static int32_t t93 = 643029;

	t93 = (x529-((x530*x531)<=x532));

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x534 = 0;
	uint16_t x536 = 29U;
	static int32_t t94 = -219;

	t94 = (x533-((x534*x535)<=x536));

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x537 = -4063;
	static int8_t x539 = -1;
	int64_t x540 = -6LL;
	volatile int32_t t95 = -37;

	t95 = (x537-((x538*x539)<=x540));

	if (t95 != -4063) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x542 = 6916U;
	volatile uint16_t x543 = 1U;
	static int32_t x544 = 150;
	int32_t t96 = 610700809;

	t96 = (x541-((x542*x543)<=x544));

	if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x549 = -1;
	uint64_t x550 = UINT64_MAX;
	uint64_t x552 = 97680733295836589LLU;
	int32_t t97 = 4;

	t97 = (x549-((x550*x551)<=x552));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x553 = INT8_MAX;
	int32_t x554 = INT32_MIN;
	static int64_t x555 = -368545LL;
	volatile int16_t x556 = INT16_MIN;

	t98 = (x553-((x554*x555)<=x556));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x557 = -1;
	int64_t x558 = INT64_MIN;
	volatile uint64_t x559 = 552651LLU;
	int32_t t99 = -352796632;

	t99 = (x557-((x558*x559)<=x560));

	if (t99 != -1) { NG(); } else { ; }
	
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

