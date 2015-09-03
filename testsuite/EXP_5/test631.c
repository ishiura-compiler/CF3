#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 2;
static int8_t x12 = INT8_MAX;
static uint16_t x27 = 906U;
volatile int32_t t3 = -515235;
int64_t x31 = INT64_MIN;
volatile int64_t t7 = 12440797896LL;
uint64_t x53 = UINT64_MAX;
uint32_t x58 = 491U;
int64_t x59 = INT64_MIN;
volatile uint64_t x60 = UINT64_MAX;
static volatile uint16_t x61 = 1557U;
volatile int16_t x72 = INT16_MAX;
static int32_t t12 = -323560734;
int16_t x80 = INT16_MIN;
volatile int32_t t14 = INT32_MAX;
uint32_t x89 = 419572984U;
volatile uint8_t x91 = 39U;
int64_t x106 = INT64_MAX;
int8_t x143 = INT8_MAX;
uint16_t x147 = UINT16_MAX;
int16_t x171 = INT16_MIN;
uint16_t x187 = 3462U;
static int8_t x188 = INT8_MIN;
volatile int32_t t26 = 177168;
volatile uint16_t x196 = 5432U;
volatile uint32_t t29 = UINT32_MAX;
static int64_t x208 = INT64_MIN;
uint64_t t30 = 476528335471088968LLU;
int32_t x219 = INT32_MAX;
uint16_t x237 = 11451U;
int16_t x252 = INT16_MIN;
static int16_t x257 = INT16_MAX;
volatile uint8_t x258 = UINT8_MAX;
volatile int8_t x264 = INT8_MIN;
int64_t x271 = 3LL;
static uint16_t x272 = 24883U;
volatile int16_t x293 = INT16_MAX;
uint32_t x294 = 1401U;
volatile int16_t x295 = -1;
static volatile int32_t t43 = 25601176;
uint32_t x297 = 3U;
volatile uint32_t t44 = 347305U;
uint16_t x313 = 1U;
int16_t x314 = INT16_MIN;
static int32_t x326 = INT32_MIN;
int64_t x327 = INT64_MAX;
uint8_t x328 = UINT8_MAX;
uint32_t x341 = 6159126U;
uint8_t x352 = 4U;
int32_t x392 = INT32_MAX;
int8_t x405 = INT8_MAX;
static uint16_t x408 = 68U;
volatile int32_t t60 = -154894;
uint8_t x415 = UINT8_MAX;
volatile int8_t x416 = -14;
int32_t t61 = 1;
static uint64_t x446 = UINT64_MAX;
static volatile uint8_t x448 = 10U;
uint16_t x465 = 1236U;
uint32_t x473 = 3124U;
static uint8_t x474 = 65U;
volatile int32_t x477 = 341827;
int64_t x484 = INT64_MAX;
int16_t x485 = 63;
uint8_t x499 = UINT8_MAX;
int8_t x512 = INT8_MAX;
uint8_t x524 = 6U;
int16_t x526 = 1799;
int16_t x528 = 607;
int32_t t77 = 0;
uint32_t x533 = 18614746U;
volatile uint32_t x536 = UINT32_MAX;
volatile uint32_t t78 = 461005055U;
static volatile uint64_t x542 = 5494LLU;
uint16_t x556 = 475U;
uint32_t x559 = 119804U;
uint32_t x563 = 241U;
int32_t x566 = -1;
volatile int64_t x576 = INT64_MAX;
int64_t x597 = INT64_MAX;
static uint32_t x601 = UINT32_MAX;
uint8_t x603 = 70U;
int64_t t90 = -973LL;
uint64_t x657 = 122146210LLU;
static int8_t x659 = -33;
volatile int8_t x667 = INT8_MIN;
uint16_t x669 = 0U;
volatile int64_t t97 = -27710563481743LL;
uint8_t x715 = UINT8_MAX;


void f0(void) {
	volatile int32_t x1 = 200602;
	static int16_t x2 = -2967;
	int32_t x3 = -154843;
	int32_t x4 = 487;

	t0 = (x1>>((x2/x3)<=x4));

	if (t0 != 100301) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x9 = 3612U;
	uint8_t x10 = UINT8_MAX;
	uint8_t x11 = UINT8_MAX;
	volatile int32_t t1 = 4754;

	t1 = (x9>>((x10/x11)<=x12));

	if (t1 != 1806) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = INT16_MAX;
	int64_t x18 = INT64_MIN;
	static int16_t x19 = INT16_MIN;
	int64_t x20 = 194005LL;
	volatile int32_t t2 = -238;

	t2 = (x17>>((x18/x19)<=x20));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = 0;
	int8_t x26 = INT8_MAX;
	uint64_t x28 = 5LLU;

	t3 = (x25>>((x26/x27)<=x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x29 = 0;
	static int16_t x30 = INT16_MAX;
	int8_t x32 = -1;
	volatile int32_t t4 = 1028667;

	t4 = (x29>>((x30/x31)<=x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x33 = INT32_MAX;
	int8_t x34 = INT8_MIN;
	int32_t x35 = 917938092;
	volatile int32_t x36 = -499548;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x33>>((x34/x35)<=x36));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = INT8_MAX;
	int16_t x38 = INT16_MIN;
	int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t6 = -82;

	t6 = (x37>>((x38/x39)<=x40));

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x41 = 215LL;
	int16_t x42 = -883;
	volatile int8_t x43 = -1;
	uint64_t x44 = 779680028960LLU;

	t7 = (x41>>((x42/x43)<=x44));

	if (t7 != 107LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = INT64_MAX;
	uint8_t x55 = 3U;
	volatile int16_t x56 = INT16_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (x53>>((x54/x55)<=x56));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = 18;
	volatile int32_t t9 = 77;

	t9 = (x57>>((x58/x59)<=x60));

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;
	volatile int8_t x64 = -7;
	int32_t t10 = 81234;

	t10 = (x61>>((x62/x63)<=x64));

	if (t10 != 1557) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x65 = 2;
	int64_t x66 = 2353789019LL;
	int16_t x67 = INT16_MIN;
	volatile uint32_t x68 = 3040U;
	static volatile int32_t t11 = -7187969;

	t11 = (x65>>((x66/x67)<=x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = 152;
	int64_t x70 = INT64_MAX;
	uint32_t x71 = 17U;

	t12 = (x69>>((x70/x71)<=x72));

	if (t12 != 152) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x77 = INT64_MAX;
	int16_t x78 = INT16_MAX;
	uint8_t x79 = 3U;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x77>>((x78/x79)<=x80));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MAX;
	uint64_t x82 = UINT64_MAX;
	uint32_t x83 = 9U;
	int8_t x84 = INT8_MAX;

	t14 = (x81>>((x82/x83)<=x84));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x85 = UINT64_MAX;
	int16_t x86 = -376;
	uint32_t x87 = 1691698900U;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t15 = 3254808440106LLU;

	t15 = (x85>>((x86/x87)<=x88));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x90 = INT8_MAX;
	int32_t x92 = INT32_MIN;
	static volatile uint32_t t16 = 186U;

	t16 = (x89>>((x90/x91)<=x92));

	if (t16 != 419572984U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = 0;
	uint64_t x98 = 8797054691363001181LLU;
	int64_t x99 = INT64_MIN;
	int16_t x100 = 10;
	int32_t t17 = 104676;

	t17 = (x97>>((x98/x99)<=x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x105 = 11;
	static int16_t x107 = INT16_MIN;
	uint32_t x108 = 68U;
	volatile int32_t t18 = -963;

	t18 = (x105>>((x106/x107)<=x108));

	if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x113 = 778903LL;
	uint64_t x114 = UINT64_MAX;
	static volatile int32_t x115 = -1;
	int64_t x116 = -8LL;
	volatile int64_t t19 = 1LL;

	t19 = (x113>>((x114/x115)<=x116));

	if (t19 != 389451LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = 4183313U;
	uint32_t x118 = 3350U;
	uint16_t x119 = UINT16_MAX;
	volatile uint8_t x120 = UINT8_MAX;
	uint32_t t20 = 122506U;

	t20 = (x117>>((x118/x119)<=x120));

	if (t20 != 2091656U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x125 = 475;
	int16_t x126 = -1;
	uint16_t x127 = 2792U;
	volatile int32_t x128 = 1035;
	int32_t t21 = 5;

	t21 = (x125>>((x126/x127)<=x128));

	if (t21 != 237) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x141 = 14U;
	uint64_t x142 = 92343696332415LLU;
	static volatile uint32_t x144 = 0U;
	int32_t t22 = -4957301;

	t22 = (x141>>((x142/x143)<=x144));

	if (t22 != 14) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x145 = 2U;
	uint8_t x146 = 32U;
	int16_t x148 = INT16_MAX;
	volatile uint32_t t23 = 3U;

	t23 = (x145>>((x146/x147)<=x148));

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x149 = 216415;
	uint64_t x150 = 7804881LLU;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = INT64_MAX;
	static volatile int32_t t24 = 8;

	t24 = (x149>>((x150/x151)<=x152));

	if (t24 != 108207) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x169 = 1414U;
	uint8_t x170 = 2U;
	uint16_t x172 = 2919U;
	int32_t t25 = -1;

	t25 = (x169>>((x170/x171)<=x172));

	if (t25 != 707) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x185 = 2U;
	int16_t x186 = -1;

	t26 = (x185>>((x186/x187)<=x188));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MAX;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = 1948219U;
	int32_t t27 = -28;

	t27 = (x189>>((x190/x191)<=x192));

	if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x193 = 1123971LLU;
	static int64_t x194 = -6131230LL;
	volatile int16_t x195 = INT16_MIN;
	volatile uint64_t t28 = 20984635LLU;

	t28 = (x193>>((x194/x195)<=x196));

	if (t28 != 561985LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MAX;
	uint32_t x203 = 1U;
	uint8_t x204 = 3U;

	t29 = (x201>>((x202/x203)<=x204));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x205 = 19LLU;
	static uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = -1;

	t30 = (x205>>((x206/x207)<=x208));

	if (t30 != 19LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x217 = 2603U;
	uint16_t x218 = UINT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	uint32_t t31 = 44U;

	t31 = (x217>>((x218/x219)<=x220));

	if (t31 != 2603U) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x225 = 11U;
	volatile int8_t x226 = INT8_MAX;
	uint32_t x227 = 109547878U;
	static volatile int16_t x228 = -1;
	static uint32_t t32 = 66555U;

	t32 = (x225>>((x226/x227)<=x228));

	if (t32 != 5U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x238 = INT16_MAX;
	int16_t x239 = 7744;
	uint32_t x240 = UINT32_MAX;
	static int32_t t33 = 13112;

	t33 = (x237>>((x238/x239)<=x240));

	if (t33 != 5725) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x245 = INT8_MAX;
	uint32_t x246 = 370996825U;
	int64_t x247 = INT64_MIN;
	static volatile uint16_t x248 = UINT16_MAX;
	static volatile int32_t t34 = 97844;

	t34 = (x245>>((x246/x247)<=x248));

	if (t34 != 63) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x249 = INT16_MAX;
	int64_t x250 = INT64_MIN;
	static int32_t x251 = INT32_MIN;
	int32_t t35 = 2778;

	t35 = (x249>>((x250/x251)<=x252));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x259 = -1;
	uint16_t x260 = 0U;
	int32_t t36 = -183253007;

	t36 = (x257>>((x258/x259)<=x260));

	if (t36 != 16383) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MIN;
	volatile uint8_t x263 = 99U;
	static volatile uint64_t t37 = UINT64_MAX;

	t37 = (x261>>((x262/x263)<=x264));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x265 = 2U;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	uint32_t t38 = 28U;

	t38 = (x265>>((x266/x267)<=x268));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x269 = 3113U;
	uint32_t x270 = 2289362U;
	int32_t t39 = 0;

	t39 = (x269>>((x270/x271)<=x272));

	if (t39 != 3113) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x273 = INT8_MAX;
	volatile int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	static uint16_t x276 = 56U;
	static int32_t t40 = 6308;

	t40 = (x273>>((x274/x275)<=x276));

	if (t40 != 127) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x281 = 7;
	int64_t x282 = INT64_MAX;
	static int64_t x283 = INT64_MIN;
	static uint32_t x284 = UINT32_MAX;
	volatile int32_t t41 = 26556;

	t41 = (x281>>((x282/x283)<=x284));

	if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x289 = UINT32_MAX;
	volatile uint8_t x290 = 3U;
	int64_t x291 = -4135LL;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t42 = 110354527U;

	t42 = (x289>>((x290/x291)<=x292));

	if (t42 != 2147483647U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x296 = UINT32_MAX;

	t43 = (x293>>((x294/x295)<=x296));

	if (t43 != 16383) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x298 = INT8_MAX;
	int16_t x299 = INT16_MIN;
	int8_t x300 = INT8_MAX;

	t44 = (x297>>((x298/x299)<=x300));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x315 = -1;
	uint16_t x316 = 1124U;
	static int32_t t45 = -79338794;

	t45 = (x313>>((x314/x315)<=x316));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x321 = 14U;
	static volatile int32_t x322 = INT32_MIN;
	static int16_t x323 = 7;
	static int8_t x324 = -1;
	volatile int32_t t46 = -253832;

	t46 = (x321>>((x322/x323)<=x324));

	if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x325 = 60;
	int32_t t47 = 927261;

	t47 = (x325>>((x326/x327)<=x328));

	if (t47 != 30) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x329 = INT16_MAX;
	int32_t x330 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	static uint8_t x332 = UINT8_MAX;
	volatile int32_t t48 = 462298;

	t48 = (x329>>((x330/x331)<=x332));

	if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x333 = INT32_MAX;
	int16_t x334 = INT16_MAX;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t49 = INT32_MAX;

	t49 = (x333>>((x334/x335)<=x336));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x342 = 25U;
	int16_t x343 = INT16_MIN;
	volatile int8_t x344 = INT8_MAX;
	static volatile uint32_t t50 = 208452U;

	t50 = (x341>>((x342/x343)<=x344));

	if (t50 != 3079563U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x349 = INT32_MAX;
	static int8_t x350 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	volatile int32_t t51 = -19481;

	t51 = (x349>>((x350/x351)<=x352));

	if (t51 != 1073741823) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x353 = 352U;
	volatile uint8_t x354 = UINT8_MAX;
	static uint64_t x355 = UINT64_MAX;
	static int32_t x356 = -1920;
	volatile int32_t t52 = 172408405;

	t52 = (x353>>((x354/x355)<=x356));

	if (t52 != 176) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x357 = 1245;
	uint64_t x358 = UINT64_MAX;
	volatile uint8_t x359 = UINT8_MAX;
	int64_t x360 = -902984410LL;
	int32_t t53 = -327970;

	t53 = (x357>>((x358/x359)<=x360));

	if (t53 != 622) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x361 = 73574657U;
	uint32_t x362 = 6808U;
	int8_t x363 = -1;
	uint64_t x364 = 11415155063816258LLU;
	static uint32_t t54 = 8U;

	t54 = (x361>>((x362/x363)<=x364));

	if (t54 != 36787328U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x365 = 19;
	volatile int16_t x366 = INT16_MAX;
	static int64_t x367 = INT64_MIN;
	volatile uint64_t x368 = 16136708272987228LLU;
	int32_t t55 = 48250;

	t55 = (x365>>((x366/x367)<=x368));

	if (t55 != 9) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x381 = 140;
	volatile uint8_t x382 = UINT8_MAX;
	uint8_t x383 = UINT8_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t56 = 123544;

	t56 = (x381>>((x382/x383)<=x384));

	if (t56 != 140) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x389 = 304U;
	static uint64_t x390 = 8051LLU;
	uint16_t x391 = 28185U;
	int32_t t57 = 21;

	t57 = (x389>>((x390/x391)<=x392));

	if (t57 != 152) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x393 = 0;
	static int64_t x394 = INT64_MAX;
	volatile uint16_t x395 = UINT16_MAX;
	int16_t x396 = -1;
	volatile int32_t t58 = 215762628;

	t58 = (x393>>((x394/x395)<=x396));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x397 = 3;
	static volatile uint32_t x398 = 15U;
	int8_t x399 = INT8_MIN;
	uint64_t x400 = UINT64_MAX;
	int32_t t59 = 186955970;

	t59 = (x397>>((x398/x399)<=x400));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x406 = -307350439;
	static int16_t x407 = -1000;

	t60 = (x405>>((x406/x407)<=x408));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x413 = INT8_MAX;
	int16_t x414 = INT16_MIN;

	t61 = (x413>>((x414/x415)<=x416));

	if (t61 != 63) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x417 = 480270036U;
	int8_t x418 = -1;
	int8_t x419 = INT8_MAX;
	uint16_t x420 = 26U;
	uint32_t t62 = 973820U;

	t62 = (x417>>((x418/x419)<=x420));

	if (t62 != 240135018U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x429 = INT8_MAX;
	uint32_t x430 = 11U;
	int32_t x431 = 1618533;
	int16_t x432 = INT16_MIN;
	volatile int32_t t63 = -3;

	t63 = (x429>>((x430/x431)<=x432));

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x445 = 1;
	int8_t x447 = INT8_MIN;
	static volatile int32_t t64 = 7;

	t64 = (x445>>((x446/x447)<=x448));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x466 = 3554U;
	uint8_t x467 = 77U;
	int32_t x468 = INT32_MIN;
	int32_t t65 = 24316;

	t65 = (x465>>((x466/x467)<=x468));

	if (t65 != 618) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x475 = INT32_MAX;
	int16_t x476 = INT16_MIN;
	volatile uint32_t t66 = 1U;

	t66 = (x473>>((x474/x475)<=x476));

	if (t66 != 3124U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x478 = -1;
	int64_t x479 = INT64_MIN;
	uint32_t x480 = 39U;
	volatile int32_t t67 = -1666;

	t67 = (x477>>((x478/x479)<=x480));

	if (t67 != 170913) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x481 = 7U;
	static int32_t x482 = INT32_MIN;
	int64_t x483 = INT64_MIN;
	volatile int32_t t68 = 3381;

	t68 = (x481>>((x482/x483)<=x484));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x486 = INT16_MAX;
	uint32_t x487 = 18717241U;
	int32_t x488 = INT32_MAX;
	int32_t t69 = -47694;

	t69 = (x485>>((x486/x487)<=x488));

	if (t69 != 31) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x489 = 30U;
	static int8_t x490 = -1;
	int64_t x491 = -1LL;
	volatile int8_t x492 = INT8_MIN;
	uint32_t t70 = 1411763630U;

	t70 = (x489>>((x490/x491)<=x492));

	if (t70 != 30U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x497 = 3666951363363LLU;
	volatile int16_t x498 = 5383;
	volatile uint16_t x500 = UINT16_MAX;
	static volatile uint64_t t71 = 185990703LLU;

	t71 = (x497>>((x498/x499)<=x500));

	if (t71 != 1833475681681LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x505 = UINT64_MAX;
	uint32_t x506 = UINT32_MAX;
	int32_t x507 = INT32_MIN;
	volatile uint16_t x508 = 80U;
	static uint64_t t72 = 53751LLU;

	t72 = (x505>>((x506/x507)<=x508));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x509 = 0U;
	uint64_t x510 = 6126608263LLU;
	static uint16_t x511 = 58U;
	int32_t t73 = -14;

	t73 = (x509>>((x510/x511)<=x512));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x513 = INT16_MAX;
	static volatile int64_t x514 = -1LL;
	uint8_t x515 = 93U;
	uint64_t x516 = 13338740901LLU;
	int32_t t74 = 170;

	t74 = (x513>>((x514/x515)<=x516));

	if (t74 != 16383) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x521 = INT16_MAX;
	int8_t x522 = INT8_MIN;
	int32_t x523 = INT32_MIN;
	int32_t t75 = -458666;

	t75 = (x521>>((x522/x523)<=x524));

	if (t75 != 16383) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x525 = INT8_MAX;
	int64_t x527 = 292357678818190943LL;
	volatile int32_t t76 = 45975;

	t76 = (x525>>((x526/x527)<=x528));

	if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x529 = UINT16_MAX;
	int32_t x530 = -1;
	uint8_t x531 = 36U;
	uint32_t x532 = UINT32_MAX;

	t77 = (x529>>((x530/x531)<=x532));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x534 = 1135LLU;
	volatile int8_t x535 = -1;

	t78 = (x533>>((x534/x535)<=x536));

	if (t78 != 9307373U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x537 = 122781685;
	int16_t x538 = -1;
	int16_t x539 = -923;
	static int8_t x540 = 17;
	static volatile int32_t t79 = 4;

	t79 = (x537>>((x538/x539)<=x540));

	if (t79 != 61390842) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x541 = UINT16_MAX;
	int32_t x543 = 1862;
	volatile uint8_t x544 = 4U;
	static volatile int32_t t80 = 110061660;

	t80 = (x541>>((x542/x543)<=x544));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x545 = 22991U;
	int16_t x546 = -1;
	int16_t x547 = INT16_MIN;
	volatile int64_t x548 = -12461874738LL;
	static uint32_t t81 = 17852U;

	t81 = (x545>>((x546/x547)<=x548));

	if (t81 != 22991U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x549 = 98;
	int8_t x550 = INT8_MAX;
	int8_t x551 = INT8_MAX;
	uint8_t x552 = 0U;
	volatile int32_t t82 = 8799090;

	t82 = (x549>>((x550/x551)<=x552));

	if (t82 != 98) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x553 = 3787;
	uint8_t x554 = 30U;
	volatile int32_t x555 = INT32_MIN;
	int32_t t83 = 5813;

	t83 = (x553>>((x554/x555)<=x556));

	if (t83 != 1893) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x557 = INT8_MAX;
	int32_t x558 = INT32_MIN;
	int32_t x560 = 1158493;
	int32_t t84 = 128909392;

	t84 = (x557>>((x558/x559)<=x560));

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x561 = INT8_MAX;
	volatile uint32_t x562 = UINT32_MAX;
	static uint64_t x564 = 396267587678118LLU;
	volatile int32_t t85 = 3929426;

	t85 = (x561>>((x562/x563)<=x564));

	if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x565 = 7U;
	static uint16_t x567 = 27301U;
	volatile uint32_t x568 = 278396999U;
	static int32_t t86 = 780122685;

	t86 = (x565>>((x566/x567)<=x568));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x573 = 1;
	int8_t x574 = INT8_MAX;
	int16_t x575 = INT16_MAX;
	int32_t t87 = -19041885;

	t87 = (x573>>((x574/x575)<=x576));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x598 = 3U;
	uint64_t x599 = UINT64_MAX;
	volatile int8_t x600 = INT8_MIN;
	volatile int64_t t88 = 2198416217LL;

	t88 = (x597>>((x598/x599)<=x600));

	if (t88 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x602 = -77328;
	int8_t x604 = 32;
	uint32_t t89 = 25104550U;

	t89 = (x601>>((x602/x603)<=x604));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x605 = 2086642LL;
	uint32_t x606 = UINT32_MAX;
	int64_t x607 = INT64_MIN;
	uint16_t x608 = UINT16_MAX;

	t90 = (x605>>((x606/x607)<=x608));

	if (t90 != 1043321LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x621 = 3243287;
	int16_t x622 = INT16_MIN;
	int8_t x623 = -1;
	static volatile uint16_t x624 = 7U;
	static int32_t t91 = -642;

	t91 = (x621>>((x622/x623)<=x624));

	if (t91 != 3243287) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x641 = INT16_MAX;
	uint16_t x642 = 87U;
	uint8_t x643 = 1U;
	int16_t x644 = INT16_MIN;
	volatile int32_t t92 = -63308;

	t92 = (x641>>((x642/x643)<=x644));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x645 = INT8_MAX;
	static uint32_t x646 = UINT32_MAX;
	volatile uint32_t x647 = 122U;
	int64_t x648 = INT64_MIN;
	volatile int32_t t93 = 21356;

	t93 = (x645>>((x646/x647)<=x648));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x658 = 0U;
	int16_t x660 = INT16_MIN;
	uint64_t t94 = 49656LLU;

	t94 = (x657>>((x658/x659)<=x660));

	if (t94 != 122146210LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x665 = 1U;
	static int8_t x666 = INT8_MIN;
	int16_t x668 = -101;
	volatile int32_t t95 = 3236358;

	t95 = (x665>>((x666/x667)<=x668));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x670 = UINT8_MAX;
	static int8_t x671 = INT8_MIN;
	static int32_t x672 = INT32_MIN;
	static int32_t t96 = -64703950;

	t96 = (x669>>((x670/x671)<=x672));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x693 = INT64_MAX;
	uint8_t x694 = 1U;
	uint64_t x695 = 1483984097765726LLU;
	int16_t x696 = -1;

	t97 = (x693>>((x694/x695)<=x696));

	if (t97 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x709 = 23;
	int64_t x710 = INT64_MIN;
	static uint8_t x711 = 4U;
	volatile uint64_t x712 = 54738314929LLU;
	volatile int32_t t98 = 1;

	t98 = (x709>>((x710/x711)<=x712));

	if (t98 != 23) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x713 = INT64_MAX;
	int32_t x714 = 54;
	volatile uint64_t x716 = 5971147716143LLU;
	int64_t t99 = -8543LL;

	t99 = (x713>>((x714/x715)<=x716));

	if (t99 != 4611686018427387903LL) { NG(); } else { ; }
	
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

