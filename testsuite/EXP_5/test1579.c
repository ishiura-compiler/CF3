#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x14 = -33970106;
static volatile uint32_t x21 = 1U;
uint64_t x37 = 368LLU;
static uint32_t x41 = 81199U;
uint64_t x65 = 1029072195496843727LLU;
uint8_t x66 = 12U;
uint8_t x76 = 99U;
volatile uint32_t x85 = 949265039U;
uint8_t x86 = UINT8_MAX;
static uint8_t x90 = 22U;
uint64_t x92 = 533336715572349LLU;
uint64_t x97 = 62496LLU;
int8_t x100 = INT8_MIN;
volatile int32_t t17 = INT32_MAX;
int64_t x135 = -92534694058LL;
static uint8_t x137 = UINT8_MAX;
int8_t x140 = INT8_MAX;
int8_t x141 = INT8_MAX;
uint16_t x149 = UINT16_MAX;
uint8_t x163 = 43U;
uint32_t t23 = 99516630U;
int16_t x166 = INT16_MIN;
volatile int32_t t24 = -999;
int16_t x169 = INT16_MAX;
int8_t x170 = -1;
volatile uint16_t x177 = 26313U;
volatile int32_t t26 = 0;
int32_t x184 = INT32_MIN;
int32_t x200 = -92664694;
volatile int32_t t30 = -2;
static uint16_t x205 = UINT16_MAX;
static uint8_t x221 = 4U;
volatile int16_t x254 = INT16_MAX;
int32_t t36 = -96036869;
static int64_t x271 = 4520843350587LL;
uint32_t x273 = 2999664U;
int64_t x276 = INT64_MAX;
int64_t x278 = INT64_MAX;
static int8_t x287 = INT8_MIN;
uint64_t t41 = 7671281789021LLU;
int64_t x292 = INT64_MIN;
uint32_t x295 = 9U;
int32_t t43 = 1100;
uint32_t t44 = 43U;
uint64_t x324 = 8488139894197192LLU;
static uint8_t x346 = 7U;
static int32_t x360 = INT32_MIN;
int16_t x362 = -1114;
volatile uint16_t x366 = 60U;
uint8_t x371 = 1U;
static int32_t t56 = -93313;
int32_t x388 = -1;
int32_t x401 = 7375369;
uint8_t x404 = 46U;
static int8_t x411 = INT8_MIN;
volatile int64_t x412 = INT64_MAX;
static volatile int32_t x415 = INT32_MIN;
uint16_t x421 = 39U;
volatile int8_t x423 = -7;
int8_t x445 = INT8_MAX;
int32_t x446 = -124457;
int64_t x454 = -1LL;
int16_t x479 = -1;
volatile uint32_t x493 = UINT32_MAX;
int16_t x495 = INT16_MIN;
volatile uint32_t x524 = 12U;
uint64_t x533 = 28463908LLU;
int64_t x536 = INT64_MIN;
int8_t x537 = INT8_MAX;
static int64_t x571 = INT64_MIN;
int64_t x572 = INT64_MIN;
volatile int16_t x579 = 12;
int32_t x603 = INT32_MIN;
int32_t t79 = -92;
int16_t x607 = INT16_MAX;
static int64_t x650 = -1LL;
volatile int32_t t85 = -1;
uint32_t x661 = 4U;
uint16_t x676 = 11957U;
uint16_t x677 = 3U;
static volatile int32_t t90 = 53801211;
uint64_t x689 = 150855548862LLU;
uint16_t x690 = UINT16_MAX;
int16_t x694 = -34;
volatile int32_t t92 = 26874;
static int8_t x718 = -58;
uint32_t x728 = 62U;
static volatile uint64_t x735 = 69LLU;
int32_t x755 = -1;


void f0(void) {
	uint16_t x9 = UINT16_MAX;
	static uint32_t x10 = 15U;
	int32_t x11 = INT32_MIN;
	static int8_t x12 = -24;
	int32_t t0 = 3645999;

	t0 = (x9<<((x10<=x11)%x12));

	if (t0 != 131070) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	uint64_t x15 = 466830909039133134LLU;
	int32_t x16 = -1;
	static volatile int32_t t1 = INT32_MAX;

	t1 = (x13<<((x14<=x15)%x16));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x22 = 14975U;
	int64_t x23 = INT64_MIN;
	static volatile int32_t x24 = INT32_MIN;
	uint32_t t2 = 80762376U;

	t2 = (x21<<((x22<=x23)%x24));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x33 = UINT32_MAX;
	volatile int32_t x34 = INT32_MAX;
	volatile int64_t x35 = INT64_MAX;
	volatile int64_t x36 = -1LL;
	uint32_t t3 = UINT32_MAX;

	t3 = (x33<<((x34<=x35)%x36));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x38 = INT16_MIN;
	volatile uint16_t x39 = 177U;
	static volatile uint64_t x40 = 107119LLU;
	uint64_t t4 = 3LLU;

	t4 = (x37<<((x38<=x39)%x40));

	if (t4 != 736LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x42 = INT64_MAX;
	static uint16_t x43 = 3504U;
	static int8_t x44 = INT8_MIN;
	uint32_t t5 = 3522768U;

	t5 = (x41<<((x42<=x43)%x44));

	if (t5 != 81199U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x49 = UINT8_MAX;
	static uint8_t x50 = UINT8_MAX;
	uint64_t x51 = 2011301874308889LLU;
	int16_t x52 = -14827;
	volatile int32_t t6 = -567762690;

	t6 = (x49<<((x50<=x51)%x52));

	if (t6 != 510) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x67 = INT8_MIN;
	static int16_t x68 = INT16_MAX;
	volatile uint64_t t7 = 340407LLU;

	t7 = (x65<<((x66<=x67)%x68));

	if (t7 != 1029072195496843727LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x69 = INT16_MAX;
	int16_t x70 = 115;
	uint32_t x71 = 6404U;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t8 = -4198;

	t8 = (x69<<((x70<=x71)%x72));

	if (t8 != 65534) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x73 = INT16_MAX;
	static int8_t x74 = -1;
	uint8_t x75 = UINT8_MAX;
	int32_t t9 = 8882629;

	t9 = (x73<<((x74<=x75)%x76));

	if (t9 != 65534) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x81 = 3U;
	uint32_t x82 = 7698U;
	volatile int64_t x83 = -104786303091114968LL;
	int32_t x84 = -562586;
	int32_t t10 = 542424511;

	t10 = (x81<<((x82<=x83)%x84));

	if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MAX;
	static uint32_t t11 = 52482339U;

	t11 = (x85<<((x86<=x87)%x88));

	if (t11 != 1898530078U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x89 = 11626U;
	uint16_t x91 = UINT16_MAX;
	uint32_t t12 = 259219U;

	t12 = (x89<<((x90<=x91)%x92));

	if (t12 != 23252U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x98 = UINT8_MAX;
	int32_t x99 = INT32_MIN;
	static volatile uint64_t t13 = 125LLU;

	t13 = (x97<<((x98<=x99)%x100));

	if (t13 != 62496LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x101 = 0;
	uint64_t x102 = 10LLU;
	int8_t x103 = INT8_MIN;
	int32_t x104 = -973;
	static volatile int32_t t14 = 118564364;

	t14 = (x101<<((x102<=x103)%x104));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x105 = 139830LLU;
	int32_t x106 = INT32_MAX;
	int16_t x107 = 0;
	int64_t x108 = INT64_MAX;
	static volatile uint64_t t15 = 411LLU;

	t15 = (x105<<((x106<=x107)%x108));

	if (t15 != 139830LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x113 = 20U;
	int64_t x114 = INT64_MAX;
	static int8_t x115 = INT8_MIN;
	volatile uint16_t x116 = 453U;
	int32_t t16 = 28134;

	t16 = (x113<<((x114<=x115)%x116));

	if (t16 != 20) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x125 = INT32_MAX;
	static uint8_t x126 = UINT8_MAX;
	volatile int8_t x127 = INT8_MIN;
	int8_t x128 = 1;

	t17 = (x125<<((x126<=x127)%x128));

	if (t17 != INT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x133 = 0U;
	int32_t x134 = 0;
	static volatile int64_t x136 = -11692LL;
	volatile int32_t t18 = -2;

	t18 = (x133<<((x134<=x135)%x136));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x138 = INT16_MIN;
	volatile int64_t x139 = -44039345234957982LL;
	int32_t t19 = 1;

	t19 = (x137<<((x138<=x139)%x140));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x142 = INT8_MIN;
	uint32_t x143 = 22U;
	volatile int8_t x144 = -1;
	static int32_t t20 = 103860;

	t20 = (x141<<((x142<=x143)%x144));

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MAX;
	int16_t x152 = -1;
	int32_t t21 = -86481825;

	t21 = (x149<<((x150<=x151)%x152));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x157 = 28;
	int64_t x158 = -1LL;
	int64_t x159 = INT64_MAX;
	volatile int16_t x160 = INT16_MIN;
	static volatile int32_t t22 = 924;

	t22 = (x157<<((x158<=x159)%x160));

	if (t22 != 56) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x161 = 31U;
	static int32_t x162 = INT32_MIN;
	volatile uint64_t x164 = 2LLU;

	t23 = (x161<<((x162<=x163)%x164));

	if (t23 != 62U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x165 = 1U;
	static int32_t x167 = -1;
	uint32_t x168 = 82420311U;

	t24 = (x165<<((x166<=x167)%x168));

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x171 = INT32_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t25 = -639604592;

	t25 = (x169<<((x170<=x171)%x172));

	if (t25 != 65534) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x178 = 1;
	int8_t x179 = -1;
	static volatile uint32_t x180 = UINT32_MAX;

	t26 = (x177<<((x178<=x179)%x180));

	if (t26 != 26313) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x181 = 1U;
	volatile uint64_t x182 = UINT64_MAX;
	int32_t x183 = INT32_MAX;
	int32_t t27 = 1928;

	t27 = (x181<<((x182<=x183)%x184));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x185 = UINT32_MAX;
	uint8_t x186 = UINT8_MAX;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MAX;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (x185<<((x186<=x187)%x188));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x189 = 323417005U;
	int8_t x190 = -1;
	static int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t29 = 1U;

	t29 = (x189<<((x190<=x191)%x192));

	if (t29 != 323417005U) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x197 = UINT16_MAX;
	uint16_t x198 = 30645U;
	volatile uint16_t x199 = 490U;

	t30 = (x197<<((x198<=x199)%x200));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x206 = 1;
	uint16_t x207 = UINT16_MAX;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t31 = 168956418;

	t31 = (x205<<((x206<=x207)%x208));

	if (t31 != 131070) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x217 = 1U;
	static int16_t x218 = INT16_MIN;
	int32_t x219 = -141800944;
	volatile uint16_t x220 = UINT16_MAX;
	int32_t t32 = -10684;

	t32 = (x217<<((x218<=x219)%x220));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x222 = INT16_MAX;
	int32_t x223 = INT32_MAX;
	volatile int64_t x224 = -242LL;
	static volatile int32_t t33 = -7604248;

	t33 = (x221<<((x222<=x223)%x224));

	if (t33 != 8) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x225 = UINT64_MAX;
	int64_t x226 = 1685LL;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 40995207;
	uint64_t t34 = UINT64_MAX;

	t34 = (x225<<((x226<=x227)%x228));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x253 = 125998U;
	uint32_t x255 = UINT32_MAX;
	int32_t x256 = -187;
	static volatile uint32_t t35 = 136U;

	t35 = (x253<<((x254<=x255)%x256));

	if (t35 != 251996U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x265 = 9U;
	uint8_t x266 = 45U;
	int8_t x267 = 1;
	static int16_t x268 = 29;

	t36 = (x265<<((x266<=x267)%x268));

	if (t36 != 9) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x269 = UINT16_MAX;
	uint16_t x270 = 13U;
	int16_t x272 = 1520;
	static volatile int32_t t37 = 1;

	t37 = (x269<<((x270<=x271)%x272));

	if (t37 != 131070) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x274 = -208713600LL;
	int16_t x275 = -1;
	volatile uint32_t t38 = 425U;

	t38 = (x273<<((x274<=x275)%x276));

	if (t38 != 5999328U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x277 = 56U;
	volatile uint8_t x279 = UINT8_MAX;
	volatile uint8_t x280 = 1U;
	static volatile int32_t t39 = -16683120;

	t39 = (x277<<((x278<=x279)%x280));

	if (t39 != 56) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x281 = 4U;
	uint16_t x282 = 170U;
	volatile int8_t x283 = INT8_MAX;
	volatile int8_t x284 = 12;
	int32_t t40 = -1;

	t40 = (x281<<((x282<=x283)%x284));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x285 = 117594247738230LLU;
	int16_t x286 = 0;
	volatile int64_t x288 = INT64_MIN;

	t41 = (x285<<((x286<=x287)%x288));

	if (t41 != 117594247738230LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x289 = 962;
	static int8_t x290 = INT8_MIN;
	uint64_t x291 = 57210920094227693LLU;
	static volatile int32_t t42 = -626735909;

	t42 = (x289<<((x290<=x291)%x292));

	if (t42 != 962) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x293 = 1;
	uint16_t x294 = 68U;
	volatile int64_t x296 = 19397LL;

	t43 = (x293<<((x294<=x295)%x296));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x301 = 3U;
	int64_t x302 = INT64_MAX;
	static volatile uint64_t x303 = UINT64_MAX;
	uint32_t x304 = 1594342U;

	t44 = (x301<<((x302<=x303)%x304));

	if (t44 != 6U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x309 = 31U;
	int8_t x310 = INT8_MIN;
	static int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;
	volatile int32_t t45 = 228214;

	t45 = (x309<<((x310<=x311)%x312));

	if (t45 != 62) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x321 = 1463U;
	int64_t x322 = -1966664032696LL;
	int8_t x323 = INT8_MAX;
	volatile int32_t t46 = 181735;

	t46 = (x321<<((x322<=x323)%x324));

	if (t46 != 2926) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x325 = INT8_MAX;
	int64_t x326 = INT64_MIN;
	static int16_t x327 = 1;
	static int64_t x328 = -1LL;
	volatile int32_t t47 = -209645853;

	t47 = (x325<<((x326<=x327)%x328));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x329 = INT8_MAX;
	int64_t x330 = 1LL;
	int32_t x331 = 41386510;
	static uint16_t x332 = 29U;
	volatile int32_t t48 = -1;

	t48 = (x329<<((x330<=x331)%x332));

	if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x345 = 31674;
	static volatile uint16_t x347 = 24U;
	int8_t x348 = INT8_MAX;
	volatile int32_t t49 = 56;

	t49 = (x345<<((x346<=x347)%x348));

	if (t49 != 63348) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x349 = UINT16_MAX;
	static uint32_t x350 = UINT32_MAX;
	static int64_t x351 = -1LL;
	static int8_t x352 = INT8_MAX;
	static volatile int32_t t50 = 3955;

	t50 = (x349<<((x350<=x351)%x352));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x353 = UINT32_MAX;
	int8_t x354 = -1;
	int32_t x355 = -126;
	int32_t x356 = INT32_MIN;
	static uint32_t t51 = UINT32_MAX;

	t51 = (x353<<((x354<=x355)%x356));

	if (t51 != UINT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x357 = 356069018U;
	uint64_t x358 = 1418105206945138LLU;
	uint64_t x359 = 3177378021LLU;
	volatile uint32_t t52 = 46U;

	t52 = (x357<<((x358<=x359)%x360));

	if (t52 != 356069018U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x361 = 33U;
	int16_t x363 = INT16_MIN;
	int16_t x364 = 1;
	uint32_t t53 = 366337U;

	t53 = (x361<<((x362<=x363)%x364));

	if (t53 != 33U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x365 = INT64_MAX;
	static int32_t x367 = INT32_MIN;
	uint64_t x368 = 70880292299378920LLU;
	volatile int64_t t54 = INT64_MAX;

	t54 = (x365<<((x366<=x367)%x368));

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x369 = 10U;
	static int32_t x370 = INT32_MAX;
	uint8_t x372 = UINT8_MAX;
	int32_t t55 = -681;

	t55 = (x369<<((x370<=x371)%x372));

	if (t55 != 10) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x377 = 11;
	volatile int32_t x378 = -1;
	uint64_t x379 = 25256520507LLU;
	int32_t x380 = INT32_MAX;

	t56 = (x377<<((x378<=x379)%x380));

	if (t56 != 11) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x386 = INT8_MIN;
	int16_t x387 = 368;
	int32_t t57 = 1;

	t57 = (x385<<((x386<=x387)%x388));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x389 = INT8_MAX;
	uint64_t x390 = 1022354LLU;
	static int32_t x391 = INT32_MAX;
	volatile int64_t x392 = INT64_MAX;
	volatile int32_t t58 = 112942;

	t58 = (x389<<((x390<=x391)%x392));

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x397 = 11;
	uint32_t x398 = 63412154U;
	static uint64_t x399 = 98845987LLU;
	volatile int64_t x400 = INT64_MIN;
	volatile int32_t t59 = 94845650;

	t59 = (x397<<((x398<=x399)%x400));

	if (t59 != 22) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x402 = -1;
	int8_t x403 = -1;
	volatile int32_t t60 = -1164;

	t60 = (x401<<((x402<=x403)%x404));

	if (t60 != 14750738) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x409 = 1;
	static int8_t x410 = INT8_MIN;
	int32_t t61 = 95601849;

	t61 = (x409<<((x410<=x411)%x412));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x413 = 4U;
	volatile int8_t x414 = INT8_MIN;
	static uint16_t x416 = UINT16_MAX;
	volatile uint32_t t62 = 0U;

	t62 = (x413<<((x414<=x415)%x416));

	if (t62 != 4U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x422 = -1;
	static int64_t x424 = -1LL;
	int32_t t63 = 20822;

	t63 = (x421<<((x422<=x423)%x424));

	if (t63 != 39) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x425 = UINT16_MAX;
	volatile int8_t x426 = -1;
	int8_t x427 = -4;
	int64_t x428 = -16115213LL;
	static int32_t t64 = 2604;

	t64 = (x425<<((x426<=x427)%x428));

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x447 = 5859749849582LL;
	int16_t x448 = INT16_MIN;
	int32_t t65 = -59;

	t65 = (x445<<((x446<=x447)%x448));

	if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x453 = 189860941LL;
	int16_t x455 = 249;
	static volatile int8_t x456 = INT8_MAX;
	volatile int64_t t66 = 140322385945959663LL;

	t66 = (x453<<((x454<=x455)%x456));

	if (t66 != 379721882LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x457 = UINT16_MAX;
	uint16_t x458 = 1284U;
	int64_t x459 = INT64_MIN;
	volatile uint64_t x460 = 426LLU;
	volatile int32_t t67 = 7;

	t67 = (x457<<((x458<=x459)%x460));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x477 = 6338;
	uint32_t x478 = UINT32_MAX;
	int32_t x480 = 764192;
	int32_t t68 = 1446630;

	t68 = (x477<<((x478<=x479)%x480));

	if (t68 != 12676) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x489 = 52016U;
	uint16_t x490 = UINT16_MAX;
	volatile uint16_t x491 = 610U;
	uint8_t x492 = 68U;
	static volatile uint32_t t69 = 2U;

	t69 = (x489<<((x490<=x491)%x492));

	if (t69 != 52016U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x494 = 3;
	int64_t x496 = INT64_MIN;
	static uint32_t t70 = UINT32_MAX;

	t70 = (x493<<((x494<=x495)%x496));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x521 = 795311903655874226LL;
	volatile uint64_t x522 = 1LLU;
	volatile uint8_t x523 = 23U;
	int64_t t71 = -105LL;

	t71 = (x521<<((x522<=x523)%x524));

	if (t71 != 1590623807311748452LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x529 = 35452LL;
	int64_t x530 = -1LL;
	int32_t x531 = 102034;
	static uint16_t x532 = 9U;
	volatile int64_t t72 = -46445180542LL;

	t72 = (x529<<((x530<=x531)%x532));

	if (t72 != 70904LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x534 = INT32_MIN;
	int8_t x535 = -1;
	volatile uint64_t t73 = 1634521LLU;

	t73 = (x533<<((x534<=x535)%x536));

	if (t73 != 56927816LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x538 = -1;
	volatile int32_t x539 = 0;
	volatile int64_t x540 = 257903352085299402LL;
	int32_t t74 = 388668197;

	t74 = (x537<<((x538<=x539)%x540));

	if (t74 != 254) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x565 = 272;
	int8_t x566 = -1;
	int64_t x567 = INT64_MIN;
	int32_t x568 = -31637;
	static volatile int32_t t75 = -5665552;

	t75 = (x565<<((x566<=x567)%x568));

	if (t75 != 272) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x569 = INT16_MAX;
	int64_t x570 = INT64_MAX;
	volatile int32_t t76 = 1568;

	t76 = (x569<<((x570<=x571)%x572));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x577 = INT64_MAX;
	int32_t x578 = INT32_MAX;
	int8_t x580 = -5;
	int64_t t77 = INT64_MAX;

	t77 = (x577<<((x578<=x579)%x580));

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x597 = UINT8_MAX;
	int32_t x598 = INT32_MIN;
	int8_t x599 = INT8_MIN;
	int16_t x600 = 129;
	int32_t t78 = -172257;

	t78 = (x597<<((x598<=x599)%x600));

	if (t78 != 510) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x601 = 0;
	static int32_t x602 = INT32_MIN;
	int32_t x604 = INT32_MAX;

	t79 = (x601<<((x602<=x603)%x604));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x605 = 519LL;
	uint64_t x606 = 898157692LLU;
	uint64_t x608 = 1LLU;
	static volatile int64_t t80 = -2LL;

	t80 = (x605<<((x606<=x607)%x608));

	if (t80 != 519LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x609 = INT8_MAX;
	static uint32_t x610 = UINT32_MAX;
	static uint64_t x611 = 397111261LLU;
	int8_t x612 = INT8_MAX;
	int32_t t81 = -138;

	t81 = (x609<<((x610<=x611)%x612));

	if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x621 = INT8_MAX;
	int16_t x622 = INT16_MIN;
	int32_t x623 = -1;
	int8_t x624 = INT8_MIN;
	volatile int32_t t82 = 249031644;

	t82 = (x621<<((x622<=x623)%x624));

	if (t82 != 254) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x625 = INT8_MAX;
	uint32_t x626 = 10434136U;
	int8_t x627 = -1;
	int8_t x628 = 18;
	volatile int32_t t83 = -28061;

	t83 = (x625<<((x626<=x627)%x628));

	if (t83 != 254) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x641 = INT8_MAX;
	int32_t x642 = -1;
	static int32_t x643 = INT32_MAX;
	int8_t x644 = INT8_MIN;
	int32_t t84 = 1;

	t84 = (x641<<((x642<=x643)%x644));

	if (t84 != 254) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x649 = 86;
	int32_t x651 = -1;
	int32_t x652 = INT32_MIN;

	t85 = (x649<<((x650<=x651)%x652));

	if (t85 != 172) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x662 = INT8_MIN;
	static int16_t x663 = 293;
	static int32_t x664 = INT32_MIN;
	uint32_t t86 = 237021613U;

	t86 = (x661<<((x662<=x663)%x664));

	if (t86 != 8U) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x673 = 188;
	uint32_t x674 = UINT32_MAX;
	int8_t x675 = INT8_MIN;
	volatile int32_t t87 = 117971879;

	t87 = (x673<<((x674<=x675)%x676));

	if (t87 != 188) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x678 = INT32_MIN;
	int32_t x679 = 93295;
	volatile int8_t x680 = INT8_MIN;
	volatile int32_t t88 = 1;

	t88 = (x677<<((x678<=x679)%x680));

	if (t88 != 6) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x681 = UINT8_MAX;
	int32_t x682 = -205748892;
	static int16_t x683 = INT16_MIN;
	int32_t x684 = -1;
	volatile int32_t t89 = -11416;

	t89 = (x681<<((x682<=x683)%x684));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x685 = 14651;
	uint32_t x686 = UINT32_MAX;
	uint16_t x687 = 2259U;
	uint64_t x688 = UINT64_MAX;

	t90 = (x685<<((x686<=x687)%x688));

	if (t90 != 14651) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x691 = INT64_MIN;
	static volatile int8_t x692 = INT8_MIN;
	volatile uint64_t t91 = 30LLU;

	t91 = (x689<<((x690<=x691)%x692));

	if (t91 != 150855548862LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x693 = 78U;
	static int8_t x695 = INT8_MIN;
	int64_t x696 = INT64_MAX;

	t92 = (x693<<((x694<=x695)%x696));

	if (t92 != 78) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x709 = 33U;
	static int64_t x710 = INT64_MIN;
	static uint32_t x711 = 95581860U;
	int32_t x712 = INT32_MIN;
	volatile int32_t t93 = -8551;

	t93 = (x709<<((x710<=x711)%x712));

	if (t93 != 66) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x717 = UINT64_MAX;
	uint64_t x719 = UINT64_MAX;
	uint8_t x720 = UINT8_MAX;
	uint64_t t94 = 185535LLU;

	t94 = (x717<<((x718<=x719)%x720));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x725 = 221;
	volatile int16_t x726 = INT16_MIN;
	volatile uint32_t x727 = 55032U;
	int32_t t95 = 0;

	t95 = (x725<<((x726<=x727)%x728));

	if (t95 != 221) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x733 = INT32_MAX;
	volatile int64_t x734 = -1LL;
	int8_t x736 = -5;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x733<<((x734<=x735)%x736));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x745 = INT32_MAX;
	static int64_t x746 = -7432LL;
	static volatile uint32_t x747 = 373543131U;
	uint16_t x748 = 1U;
	volatile int32_t t97 = INT32_MAX;

	t97 = (x745<<((x746<=x747)%x748));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x749 = 382U;
	static int64_t x750 = INT64_MIN;
	int64_t x751 = 5LL;
	uint32_t x752 = UINT32_MAX;
	int32_t t98 = 9;

	t98 = (x749<<((x750<=x751)%x752));

	if (t98 != 764) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x753 = 436777319U;
	int16_t x754 = INT16_MIN;
	int64_t x756 = INT64_MIN;
	uint32_t t99 = 1415U;

	t99 = (x753<<((x754<=x755)%x756));

	if (t99 != 873554638U) { NG(); } else { ; }
	
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

