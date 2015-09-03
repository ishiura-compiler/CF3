#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = -3276;
static int64_t x10 = -1LL;
int32_t x11 = INT32_MIN;
uint32_t t1 = 2214007U;
static int8_t x30 = -1;
int64_t x50 = INT64_MIN;
int16_t x54 = 1;
int32_t x63 = 39733;
int16_t x74 = -1;
int64_t x86 = 193380564466893LL;
int32_t x87 = 616;
static int16_t x88 = INT16_MIN;
volatile uint32_t t14 = 348U;
uint8_t x115 = UINT8_MAX;
int8_t x124 = 0;
volatile int32_t t18 = 6;
volatile int32_t t19 = -546379;
volatile int8_t x145 = 3;
int32_t t21 = 1140570;
volatile int32_t t22 = -594;
uint8_t x161 = UINT8_MAX;
static int32_t t23 = -223190;
int8_t x165 = 0;
volatile int32_t x166 = INT32_MIN;
uint64_t x168 = 508579518950LLU;
static uint8_t x171 = UINT8_MAX;
int32_t t26 = -476564257;
static uint64_t t28 = 7LLU;
static volatile int32_t x245 = 1122993;
volatile uint32_t x251 = 296U;
uint16_t x253 = UINT16_MAX;
volatile int8_t x255 = 3;
int32_t t33 = -22;
uint16_t x258 = 290U;
static int8_t x273 = 1;
static uint16_t x275 = 133U;
static int32_t x276 = INT32_MIN;
static uint32_t x277 = 562423U;
int16_t x290 = INT16_MIN;
static volatile uint64_t x293 = 2666036279602LLU;
static uint8_t x295 = 28U;
int64_t t40 = -35205047822433LL;
int8_t x306 = 6;
volatile int32_t x307 = INT32_MAX;
int32_t x328 = 12;
volatile int32_t t45 = -1807;
uint64_t t47 = 138LLU;
uint8_t x356 = 33U;
uint16_t x360 = 2865U;
static uint8_t x363 = 1U;
uint64_t x369 = 708860183227LLU;
int64_t x371 = INT64_MAX;
volatile uint64_t t51 = 1639703LLU;
uint32_t x373 = 867534380U;
volatile int64_t t53 = 29849168878414LL;
uint32_t x385 = 8U;
int16_t x392 = INT16_MAX;
uint64_t x393 = 122921LLU;
static int32_t x419 = INT32_MIN;
static int32_t t60 = 111;
uint8_t x433 = 107U;
int8_t x435 = 28;
static int64_t x436 = -1538890659LL;
int16_t x439 = -60;
int32_t x451 = INT32_MAX;
int64_t x478 = 0LL;
int32_t x480 = 231088122;
int32_t t70 = 6;
int64_t x511 = INT64_MAX;
int32_t x512 = INT32_MIN;
static uint8_t x513 = UINT8_MAX;
uint32_t x525 = 39619061U;
uint16_t x526 = 0U;
uint64_t x533 = 30842014LLU;
static uint32_t x569 = 1584128920U;
uint64_t x573 = UINT64_MAX;
static int32_t x574 = INT32_MIN;
uint8_t x579 = 31U;
int8_t x583 = INT8_MIN;
uint32_t x592 = UINT32_MAX;
int8_t x597 = 1;
static int64_t x598 = -1LL;
static volatile int32_t t84 = 28987023;
uint64_t x617 = 6263370073873LLU;
uint64_t t91 = UINT64_MAX;
static volatile int32_t x657 = 37;
int64_t x666 = INT64_MIN;
uint16_t x673 = 12315U;
int8_t x674 = INT8_MAX;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int16_t x6 = INT16_MAX;
	uint8_t x7 = 12U;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (x5>>((x6/x7)==x8));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 197870U;
	uint16_t x12 = UINT16_MAX;

	t1 = (x9>>((x10/x11)==x12));

	if (t1 != 197870U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	int32_t x18 = -17;
	volatile int32_t x19 = -2199263;
	int16_t x20 = -1;
	int32_t t2 = 3767734;

	t2 = (x17>>((x18/x19)==x20));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x29 = UINT8_MAX;
	int32_t x31 = 25249536;
	int8_t x32 = 1;
	volatile int32_t t3 = -6758208;

	t3 = (x29>>((x30/x31)==x32));

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 1U;
	int8_t x38 = 0;
	int16_t x39 = INT16_MAX;
	uint16_t x40 = 5U;
	volatile int32_t t4 = 5037108;

	t4 = (x37>>((x38/x39)==x40));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x49 = 590;
	int64_t x51 = INT64_MIN;
	uint16_t x52 = UINT16_MAX;
	volatile int32_t t5 = 21230107;

	t5 = (x49>>((x50/x51)==x52));

	if (t5 != 590) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x53 = 120461069U;
	int32_t x55 = INT32_MAX;
	volatile int64_t x56 = -22219363086608LL;
	volatile uint32_t t6 = 10632371U;

	t6 = (x53>>((x54/x55)==x56));

	if (t6 != 120461069U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x57 = 37;
	uint64_t x58 = UINT64_MAX;
	static volatile int16_t x59 = INT16_MIN;
	uint32_t x60 = 117330U;
	int32_t t7 = -1;

	t7 = (x57>>((x58/x59)==x60));

	if (t7 != 37) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = 717809314U;
	int32_t x62 = INT32_MAX;
	int32_t x64 = INT32_MIN;
	volatile uint32_t t8 = 3U;

	t8 = (x61>>((x62/x63)==x64));

	if (t8 != 717809314U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint8_t x65 = 15U;
	static int16_t x66 = INT16_MIN;
	int16_t x67 = 963;
	static int8_t x68 = -2;
	int32_t t9 = 1;

	t9 = (x65>>((x66/x67)==x68));

	if (t9 != 15) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = 15;
	int64_t x70 = -1LL;
	uint32_t x71 = 14133904U;
	static int64_t x72 = 27642308792336320LL;
	volatile int32_t t10 = 387137003;

	t10 = (x69>>((x70/x71)==x72));

	if (t10 != 15) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x73 = INT32_MAX;
	int8_t x75 = -1;
	static volatile int8_t x76 = -1;
	int32_t t11 = INT32_MAX;

	t11 = (x73>>((x74/x75)==x76));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = 34540561495LLU;
	int32_t x78 = -1;
	int16_t x79 = INT16_MIN;
	volatile uint32_t x80 = UINT32_MAX;
	volatile uint64_t t12 = 63865002LLU;

	t12 = (x77>>((x78/x79)==x80));

	if (t12 != 34540561495LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = INT64_MAX;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x85>>((x86/x87)==x88));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x97 = 27524726U;
	int16_t x98 = INT16_MAX;
	int16_t x99 = -1;
	int8_t x100 = INT8_MIN;

	t14 = (x97>>((x98/x99)==x100));

	if (t14 != 27524726U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x105 = 1551294007606LL;
	volatile uint64_t x106 = UINT64_MAX;
	int64_t x107 = -1LL;
	uint8_t x108 = 111U;
	volatile int64_t t15 = 1647420692521457158LL;

	t15 = (x105>>((x106/x107)==x108));

	if (t15 != 1551294007606LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x113 = 0U;
	int32_t x114 = -1;
	int32_t x116 = -1;
	volatile int32_t t16 = -317463;

	t16 = (x113>>((x114/x115)==x116));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x117 = 16U;
	static uint32_t x118 = 193U;
	uint16_t x119 = UINT16_MAX;
	static int16_t x120 = INT16_MIN;
	int32_t t17 = 0;

	t17 = (x117>>((x118/x119)==x120));

	if (t17 != 16) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = -8993;
	int8_t x123 = -31;

	t18 = (x121>>((x122/x123)==x124));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x141 = UINT16_MAX;
	uint16_t x142 = 1156U;
	static int8_t x143 = -1;
	int64_t x144 = INT64_MIN;

	t19 = (x141>>((x142/x143)==x144));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x146 = INT16_MIN;
	volatile int16_t x147 = -1;
	volatile int8_t x148 = -31;
	volatile int32_t t20 = 74;

	t20 = (x145>>((x146/x147)==x148));

	if (t20 != 3) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x149 = INT8_MAX;
	uint16_t x150 = 0U;
	int8_t x151 = INT8_MAX;
	int64_t x152 = INT64_MAX;

	t21 = (x149>>((x150/x151)==x152));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x157 = 5U;
	int32_t x158 = 44058;
	uint64_t x159 = UINT64_MAX;
	int32_t x160 = INT32_MIN;

	t22 = (x157>>((x158/x159)==x160));

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x162 = 8U;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = INT8_MIN;

	t23 = (x161>>((x162/x163)==x164));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x167 = INT32_MAX;
	static volatile int32_t t24 = -516901211;

	t24 = (x165>>((x166/x167)==x168));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x169 = INT64_MAX;
	int32_t x170 = 1589;
	static int64_t x172 = INT64_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x169>>((x170/x171)==x172));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x173 = 112U;
	int32_t x174 = -1783278;
	int8_t x175 = -1;
	static volatile int64_t x176 = 1075219514686542658LL;

	t26 = (x173>>((x174/x175)==x176));

	if (t26 != 112) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x177 = 12;
	volatile int64_t x178 = INT64_MAX;
	int16_t x179 = INT16_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t27 = 3890066;

	t27 = (x177>>((x178/x179)==x180));

	if (t27 != 12) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x185 = 16345LLU;
	volatile uint8_t x186 = 0U;
	static int16_t x187 = INT16_MAX;
	static uint8_t x188 = 26U;

	t28 = (x185>>((x186/x187)==x188));

	if (t28 != 16345LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x205 = 108550879LLU;
	int32_t x206 = 2047;
	volatile uint32_t x207 = 176U;
	static volatile uint32_t x208 = UINT32_MAX;
	static volatile uint64_t t29 = 5925013250LLU;

	t29 = (x205>>((x206/x207)==x208));

	if (t29 != 108550879LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x221 = 0U;
	volatile int16_t x222 = -1;
	static uint64_t x223 = 48098702631361229LLU;
	int8_t x224 = 0;
	volatile int32_t t30 = -44193;

	t30 = (x221>>((x222/x223)==x224));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x246 = INT32_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int64_t x248 = INT64_MAX;
	int32_t t31 = -14432;

	t31 = (x245>>((x246/x247)==x248));

	if (t31 != 1122993) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MAX;
	uint16_t x252 = UINT16_MAX;
	static volatile int32_t t32 = 3622795;

	t32 = (x249>>((x250/x251)==x252));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x254 = 30LL;
	volatile int64_t x256 = INT64_MIN;

	t33 = (x253>>((x254/x255)==x256));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x257 = 60815LLU;
	static uint16_t x259 = UINT16_MAX;
	volatile uint64_t x260 = 169511LLU;
	volatile uint64_t t34 = 9611902515929758LLU;

	t34 = (x257>>((x258/x259)==x260));

	if (t34 != 60815LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x274 = 13391U;
	static int32_t t35 = 25399;

	t35 = (x273>>((x274/x275)==x276));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x278 = 648U;
	static uint16_t x279 = 24U;
	volatile int64_t x280 = INT64_MAX;
	volatile uint32_t t36 = 50703U;

	t36 = (x277>>((x278/x279)==x280));

	if (t36 != 562423U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x281 = 1U;
	int64_t x282 = INT64_MIN;
	uint8_t x283 = 10U;
	volatile uint64_t x284 = UINT64_MAX;
	volatile int32_t t37 = 483;

	t37 = (x281>>((x282/x283)==x284));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x289 = 18U;
	uint16_t x291 = 96U;
	int8_t x292 = INT8_MIN;
	volatile int32_t t38 = 319361;

	t38 = (x289>>((x290/x291)==x292));

	if (t38 != 18) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x294 = INT64_MAX;
	int32_t x296 = 242;
	uint64_t t39 = 422703LLU;

	t39 = (x293>>((x294/x295)==x296));

	if (t39 != 2666036279602LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x301 = 5466908607LL;
	static volatile int64_t x302 = INT64_MAX;
	int64_t x303 = 17LL;
	static int16_t x304 = -20;

	t40 = (x301>>((x302/x303)==x304));

	if (t40 != 5466908607LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x305 = 1097U;
	volatile int16_t x308 = -1;
	volatile int32_t t41 = 5542;

	t41 = (x305>>((x306/x307)==x308));

	if (t41 != 1097) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x309 = UINT64_MAX;
	static volatile int8_t x310 = INT8_MAX;
	int64_t x311 = 1LL;
	int16_t x312 = -13;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x309>>((x310/x311)==x312));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x313 = 8143U;
	int32_t x314 = INT32_MIN;
	volatile int32_t x315 = INT32_MIN;
	int8_t x316 = 0;
	static volatile int32_t t43 = -710937;

	t43 = (x313>>((x314/x315)==x316));

	if (t43 != 8143) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x325 = 854307LLU;
	uint64_t x326 = UINT64_MAX;
	int8_t x327 = 1;
	uint64_t t44 = 978126549281867534LLU;

	t44 = (x325>>((x326/x327)==x328));

	if (t44 != 854307LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x341 = 13U;
	int8_t x342 = -1;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MAX;

	t45 = (x341>>((x342/x343)==x344));

	if (t45 != 13) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x345 = INT64_MAX;
	uint16_t x346 = UINT16_MAX;
	int8_t x347 = -1;
	int64_t x348 = INT64_MIN;
	int64_t t46 = INT64_MAX;

	t46 = (x345>>((x346/x347)==x348));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x349 = 1514419LLU;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -18;

	t47 = (x349>>((x350/x351)==x352));

	if (t47 != 1514419LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x353 = 96575829LL;
	volatile int8_t x354 = -1;
	uint64_t x355 = 1842LLU;
	int64_t t48 = 587753LL;

	t48 = (x353>>((x354/x355)==x356));

	if (t48 != 96575829LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x357 = 3;
	int16_t x358 = -1;
	int32_t x359 = INT32_MIN;
	volatile int32_t t49 = 0;

	t49 = (x357>>((x358/x359)==x360));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x361 = 281U;
	int64_t x362 = -258LL;
	int16_t x364 = INT16_MAX;
	volatile int32_t t50 = 230103073;

	t50 = (x361>>((x362/x363)==x364));

	if (t50 != 281) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MIN;

	t51 = (x369>>((x370/x371)==x372));

	if (t51 != 708860183227LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x374 = 5573U;
	volatile uint32_t x375 = 14169U;
	int8_t x376 = INT8_MAX;
	uint32_t t52 = 179770U;

	t52 = (x373>>((x374/x375)==x376));

	if (t52 != 867534380U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x377 = 1802102152404364LL;
	uint8_t x378 = 0U;
	volatile int64_t x379 = INT64_MAX;
	uint32_t x380 = UINT32_MAX;

	t53 = (x377>>((x378/x379)==x380));

	if (t53 != 1802102152404364LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	static int8_t x388 = INT8_MIN;
	static volatile uint32_t t54 = 3177U;

	t54 = (x385>>((x386/x387)==x388));

	if (t54 != 8U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x389 = 3U;
	static volatile int64_t x390 = INT64_MIN;
	int64_t x391 = 24763055962796LL;
	volatile int32_t t55 = 3;

	t55 = (x389>>((x390/x391)==x392));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x394 = 1;
	int64_t x395 = INT64_MAX;
	int64_t x396 = 17LL;
	static volatile uint64_t t56 = 42700LLU;

	t56 = (x393>>((x394/x395)==x396));

	if (t56 != 122921LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x405 = INT64_MAX;
	static volatile int32_t x406 = INT32_MIN;
	int64_t x407 = INT64_MAX;
	static volatile int8_t x408 = -1;
	volatile int64_t t57 = INT64_MAX;

	t57 = (x405>>((x406/x407)==x408));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x409 = 57U;
	int16_t x410 = -13;
	int32_t x411 = -1;
	int32_t x412 = INT32_MIN;
	static int32_t t58 = 1382336;

	t58 = (x409>>((x410/x411)==x412));

	if (t58 != 57) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x417 = 10974320;
	volatile uint16_t x418 = 12U;
	static volatile int8_t x420 = INT8_MIN;
	volatile int32_t t59 = 4;

	t59 = (x417>>((x418/x419)==x420));

	if (t59 != 10974320) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = INT16_MAX;
	int32_t x423 = -1;
	int32_t x424 = -1;

	t60 = (x421>>((x422/x423)==x424));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x434 = 10599;
	volatile int32_t t61 = 41;

	t61 = (x433>>((x434/x435)==x436));

	if (t61 != 107) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x437 = 1299U;
	uint64_t x438 = 6LLU;
	int8_t x440 = -11;
	static int32_t t62 = 269;

	t62 = (x437>>((x438/x439)==x440));

	if (t62 != 1299) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x445 = INT16_MAX;
	uint8_t x446 = 10U;
	int16_t x447 = INT16_MIN;
	int16_t x448 = INT16_MIN;
	int32_t t63 = 0;

	t63 = (x445>>((x446/x447)==x448));

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x449 = 2589LLU;
	uint8_t x450 = 53U;
	uint64_t x452 = UINT64_MAX;
	uint64_t t64 = 32120428017676148LLU;

	t64 = (x449>>((x450/x451)==x452));

	if (t64 != 2589LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x453 = UINT8_MAX;
	int16_t x454 = INT16_MAX;
	volatile int16_t x455 = 5613;
	static int64_t x456 = 3429976LL;
	int32_t t65 = -2054;

	t65 = (x453>>((x454/x455)==x456));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x461 = 7;
	int16_t x462 = 997;
	static uint16_t x463 = 1U;
	uint16_t x464 = 1079U;
	volatile int32_t t66 = -1299218;

	t66 = (x461>>((x462/x463)==x464));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x469 = INT16_MAX;
	static uint64_t x470 = 305399304421363727LLU;
	int64_t x471 = INT64_MIN;
	int32_t x472 = 53860;
	int32_t t67 = -37625;

	t67 = (x469>>((x470/x471)==x472));

	if (t67 != 32767) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x473 = 15;
	volatile uint64_t x474 = UINT64_MAX;
	uint32_t x475 = 706296148U;
	int64_t x476 = INT64_MIN;
	int32_t t68 = 2398443;

	t68 = (x473>>((x474/x475)==x476));

	if (t68 != 15) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x477 = 626073850358441LL;
	volatile uint16_t x479 = 5U;
	int64_t t69 = -5798LL;

	t69 = (x477>>((x478/x479)==x480));

	if (t69 != 626073850358441LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x493 = UINT16_MAX;
	uint64_t x494 = UINT64_MAX;
	int64_t x495 = -1LL;
	int32_t x496 = INT32_MIN;

	t70 = (x493>>((x494/x495)==x496));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x497 = 60178044U;
	int32_t x498 = INT32_MAX;
	int32_t x499 = 5970;
	int16_t x500 = INT16_MAX;
	uint32_t t71 = 53759708U;

	t71 = (x497>>((x498/x499)==x500));

	if (t71 != 60178044U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x509 = 18;
	static volatile int32_t x510 = -1;
	int32_t t72 = -1;

	t72 = (x509>>((x510/x511)==x512));

	if (t72 != 18) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x514 = 207064279U;
	volatile int16_t x515 = 1;
	static int8_t x516 = 8;
	int32_t t73 = -323;

	t73 = (x513>>((x514/x515)==x516));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x527 = INT16_MAX;
	static volatile int8_t x528 = 0;
	uint32_t t74 = 851731493U;

	t74 = (x525>>((x526/x527)==x528));

	if (t74 != 19809530U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x534 = 3;
	int8_t x535 = 2;
	int64_t x536 = INT64_MIN;
	uint64_t t75 = 9LLU;

	t75 = (x533>>((x534/x535)==x536));

	if (t75 != 30842014LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x553 = UINT32_MAX;
	static int64_t x554 = INT64_MIN;
	int32_t x555 = -60594;
	int32_t x556 = -1;
	uint32_t t76 = UINT32_MAX;

	t76 = (x553>>((x554/x555)==x556));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x561 = 6382U;
	uint8_t x562 = 15U;
	static int64_t x563 = -69312030025278LL;
	int32_t x564 = -1;
	uint32_t t77 = 2220214U;

	t77 = (x561>>((x562/x563)==x564));

	if (t77 != 6382U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x570 = 297825380;
	int64_t x571 = -20LL;
	volatile int8_t x572 = INT8_MAX;
	uint32_t t78 = 825537U;

	t78 = (x569>>((x570/x571)==x572));

	if (t78 != 1584128920U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x575 = 60U;
	static int8_t x576 = 1;
	volatile uint64_t t79 = UINT64_MAX;

	t79 = (x573>>((x574/x575)==x576));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x577 = UINT64_MAX;
	static uint32_t x578 = UINT32_MAX;
	int8_t x580 = INT8_MAX;
	static uint64_t t80 = UINT64_MAX;

	t80 = (x577>>((x578/x579)==x580));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x581 = 0LLU;
	uint16_t x582 = 85U;
	int64_t x584 = -1LL;
	volatile uint64_t t81 = 110098088119366LLU;

	t81 = (x581>>((x582/x583)==x584));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x585 = 1U;
	uint8_t x586 = UINT8_MAX;
	volatile uint16_t x587 = 2298U;
	int64_t x588 = 1188491378000392714LL;
	int32_t t82 = -45;

	t82 = (x585>>((x586/x587)==x588));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x589 = 11U;
	int16_t x590 = -6427;
	static uint16_t x591 = 2537U;
	volatile int32_t t83 = -98638;

	t83 = (x589>>((x590/x591)==x592));

	if (t83 != 11) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x599 = INT8_MAX;
	volatile int8_t x600 = -1;

	t84 = (x597>>((x598/x599)==x600));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x601 = 31U;
	uint64_t x602 = 80LLU;
	volatile int16_t x603 = 4537;
	int8_t x604 = INT8_MAX;
	volatile int32_t t85 = -976150;

	t85 = (x601>>((x602/x603)==x604));

	if (t85 != 31) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x613 = 17691LL;
	volatile uint8_t x614 = 88U;
	uint16_t x615 = UINT16_MAX;
	int32_t x616 = 328;
	volatile int64_t t86 = 278154259092736790LL;

	t86 = (x613>>((x614/x615)==x616));

	if (t86 != 17691LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x618 = INT64_MIN;
	int8_t x619 = INT8_MIN;
	int8_t x620 = INT8_MAX;
	static uint64_t t87 = 177616LLU;

	t87 = (x617>>((x618/x619)==x620));

	if (t87 != 6263370073873LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x621 = 1496417017U;
	static int32_t x622 = INT32_MAX;
	uint64_t x623 = UINT64_MAX;
	int32_t x624 = INT32_MIN;
	uint32_t t88 = 15123U;

	t88 = (x621>>((x622/x623)==x624));

	if (t88 != 1496417017U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x629 = 4U;
	int8_t x630 = -1;
	volatile uint32_t x631 = 1U;
	volatile int16_t x632 = -4;
	int32_t t89 = -65231177;

	t89 = (x629>>((x630/x631)==x632));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x641 = INT64_MAX;
	static int64_t x642 = -1LL;
	int16_t x643 = -6610;
	int64_t x644 = -204134998284050LL;
	static volatile int64_t t90 = INT64_MAX;

	t90 = (x641>>((x642/x643)==x644));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x649 = UINT64_MAX;
	int16_t x650 = 4;
	uint8_t x651 = 2U;
	uint64_t x652 = 1719675629038801LLU;

	t91 = (x649>>((x650/x651)==x652));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x658 = INT32_MIN;
	int8_t x659 = INT8_MIN;
	static uint32_t x660 = 243U;
	int32_t t92 = -28533;

	t92 = (x657>>((x658/x659)==x660));

	if (t92 != 37) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x661 = 1LL;
	volatile int16_t x662 = INT16_MAX;
	int32_t x663 = -363;
	int16_t x664 = INT16_MIN;
	int64_t t93 = -110369547752LL;

	t93 = (x661>>((x662/x663)==x664));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x665 = INT64_MAX;
	volatile int32_t x667 = INT32_MIN;
	static int64_t x668 = INT64_MIN;
	static volatile int64_t t94 = INT64_MAX;

	t94 = (x665>>((x666/x667)==x668));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x675 = 1U;
	uint16_t x676 = UINT16_MAX;
	volatile int32_t t95 = 3;

	t95 = (x673>>((x674/x675)==x676));

	if (t95 != 12315) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x677 = 68617495LLU;
	uint8_t x678 = UINT8_MAX;
	static uint16_t x679 = UINT16_MAX;
	int8_t x680 = INT8_MIN;
	static uint64_t t96 = 3649LLU;

	t96 = (x677>>((x678/x679)==x680));

	if (t96 != 68617495LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x681 = 1U;
	volatile int16_t x682 = -15200;
	uint8_t x683 = 26U;
	int32_t x684 = -188403;
	volatile int32_t t97 = -2664;

	t97 = (x681>>((x682/x683)==x684));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x693 = UINT8_MAX;
	static int64_t x694 = INT64_MAX;
	int64_t x695 = -1LL;
	uint16_t x696 = UINT16_MAX;
	int32_t t98 = 1;

	t98 = (x693>>((x694/x695)==x696));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x697 = INT8_MAX;
	int32_t x698 = INT32_MAX;
	int8_t x699 = INT8_MAX;
	uint16_t x700 = UINT16_MAX;
	volatile int32_t t99 = -61688;

	t99 = (x697>>((x698/x699)==x700));

	if (t99 != 127) { NG(); } else { ; }
	
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

