#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t1 = 7908641594611591078LLU;
uint16_t x13 = 15965U;
int64_t x25 = INT64_MIN;
int8_t x26 = 0;
volatile int8_t x45 = INT8_MIN;
int64_t x47 = 509525502LL;
volatile int16_t x70 = 21;
volatile int32_t x78 = -1;
uint16_t x81 = UINT16_MAX;
int16_t x94 = INT16_MAX;
volatile uint64_t t13 = 176045LLU;
static int8_t x102 = INT8_MIN;
uint32_t x120 = 12917U;
uint64_t x126 = UINT64_MAX;
int16_t x132 = INT16_MIN;
int8_t x134 = INT8_MIN;
int16_t x135 = INT16_MAX;
int8_t x149 = 3;
volatile int8_t x154 = INT8_MIN;
uint16_t x169 = UINT16_MAX;
volatile uint32_t t24 = 645024128U;
uint8_t x182 = 120U;
static int16_t x184 = 3873;
static volatile int32_t t26 = -89;
int8_t x191 = -7;
uint64_t x197 = 27807637948372LLU;
uint8_t x206 = 11U;
volatile int64_t t32 = INT64_MAX;
uint64_t x211 = UINT64_MAX;
int64_t x214 = -1LL;
int32_t x215 = 1327179;
uint8_t x216 = 3U;
static volatile int64_t t34 = 3761825784LL;
int64_t x220 = INT64_MAX;
volatile int64_t t39 = -171563765LL;
static uint8_t x246 = 20U;
uint32_t x247 = 391614637U;
int8_t x248 = -1;
volatile int64_t t42 = -234205615673926340LL;
int64_t x257 = -1440955LL;
uint64_t x272 = 31373480024LLU;
int8_t x279 = INT8_MIN;
int64_t x288 = -20344875523562LL;
volatile uint64_t t46 = 959905623901LLU;
uint32_t x290 = 2576889U;
int32_t x308 = 437;
volatile uint64_t t51 = 2808406080027912LLU;
volatile uint32_t x326 = 1843U;
uint64_t x331 = UINT64_MAX;
uint32_t x340 = UINT32_MAX;
volatile uint64_t t56 = 1012214193765LLU;
static int32_t t57 = 248800729;
static int8_t x368 = -1;
volatile uint8_t x369 = UINT8_MAX;
volatile uint64_t x375 = 50LLU;
volatile uint64_t x386 = 3573LLU;
uint32_t x401 = 1177591U;
int32_t x402 = INT32_MAX;
uint64_t x423 = 2241373305039886480LLU;
int32_t x424 = INT32_MIN;
volatile uint8_t x430 = UINT8_MAX;
static int32_t x432 = INT32_MIN;
uint64_t t70 = 118438773993991LLU;
uint64_t x437 = 4LLU;
uint16_t x440 = UINT16_MAX;
uint32_t x441 = 12397945U;
int32_t x451 = INT32_MIN;
volatile int32_t x455 = INT32_MAX;
int8_t x456 = 3;
uint8_t x458 = 23U;
static int8_t x459 = INT8_MIN;
uint64_t x460 = 0LLU;
static int8_t x467 = INT8_MIN;
volatile int8_t x468 = -1;
int32_t x473 = INT32_MIN;
int8_t x486 = INT8_MIN;
uint64_t t83 = 3837LLU;
int16_t x493 = INT16_MIN;
int64_t t86 = 0LL;
uint8_t x518 = 0U;
uint32_t x519 = UINT32_MAX;
static uint32_t t88 = 66547U;
uint32_t x524 = UINT32_MAX;
static int8_t x528 = INT8_MIN;
uint32_t x554 = UINT32_MAX;
static int16_t x560 = INT16_MAX;
static volatile uint16_t x563 = UINT16_MAX;
int8_t x581 = INT8_MIN;
static volatile uint32_t t96 = 13651137U;
uint32_t t98 = 1663U;
int64_t x596 = -1LL;


void f0(void) {
	int32_t x5 = INT32_MIN;
	static uint64_t x6 = 29035LLU;
	static int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	volatile uint64_t t0 = 11246163106050391LLU;

	t0 = ((x5*x6)|(x7-x8));

	if (t0 != 18446681721521831936LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = -37;
	int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;

	t1 = ((x9*x10)|(x11-x12));

	if (t1 != 37LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = INT16_MIN;
	volatile int8_t x15 = -1;
	int32_t x16 = INT32_MIN;
	int32_t t2 = -116436532;

	t2 = ((x13*x14)|(x15-x16));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 123353U;
	static uint32_t t3 = 5642U;

	t3 = ((x21*x22)|(x23-x24));

	if (t3 != 4294844198U) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x27 = INT16_MAX;
	int64_t x28 = -1LL;
	volatile int64_t t4 = 52191350LL;

	t4 = ((x25*x26)|(x27-x28));

	if (t4 != 32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int8_t x30 = 0;
	static int16_t x31 = INT16_MIN;
	volatile int16_t x32 = INT16_MIN;
	int32_t t5 = 1;

	t5 = ((x29*x30)|(x31-x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x46 = 7;
	static uint16_t x48 = 806U;
	int64_t t6 = -14LL;

	t6 = ((x45*x46)|(x47-x48));

	if (t6 != -296LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x49 = INT8_MIN;
	int8_t x50 = -28;
	static volatile int16_t x51 = -3;
	static uint8_t x52 = 22U;
	volatile int32_t t7 = 1;

	t7 = ((x49*x50)|(x51-x52));

	if (t7 != -25) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x57 = 0;
	volatile int16_t x58 = 25;
	int16_t x59 = INT16_MIN;
	volatile int8_t x60 = -1;
	volatile int32_t t8 = 502;

	t8 = ((x57*x58)|(x59-x60));

	if (t8 != -32767) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x69 = 35987978;
	volatile uint64_t x71 = UINT64_MAX;
	uint16_t x72 = 9U;
	uint64_t t9 = 19001969518668LLU;

	t9 = ((x69*x70)|(x71-x72));

	if (t9 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x73 = UINT32_MAX;
	static int64_t x74 = -5171545LL;
	int64_t x75 = -1LL;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int64_t t10 = -34128133852908LL;

	t10 = ((x73*x74)|(x75-x76));

	if (t10 != -5799LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = -11;
	int16_t x79 = 15;
	volatile uint32_t x80 = UINT32_MAX;
	volatile uint32_t t11 = 69319444U;

	t11 = ((x77*x78)|(x79-x80));

	if (t11 != 27U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x82 = 212;
	uint8_t x83 = 0U;
	static volatile int32_t x84 = INT32_MAX;
	volatile int32_t t12 = 761449;

	t12 = ((x81*x82)|(x83-x84));

	if (t12 != -2133590227) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x93 = 1730515821649972539LLU;
	uint8_t x95 = 14U;
	volatile uint8_t x96 = UINT8_MAX;

	t13 = ((x93*x94)|(x95-x96));

	if (t13 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x101 = INT8_MIN;
	static int16_t x103 = -1;
	int8_t x104 = INT8_MAX;
	int32_t t14 = -1404086;

	t14 = ((x101*x102)|(x103-x104));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x117 = -630;
	static volatile int16_t x118 = 3447;
	int64_t x119 = INT64_MAX;
	volatile int64_t t15 = 12265839320315LL;

	t15 = ((x117*x118)|(x119-x120));

	if (t15 != -8786LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x121 = 1LLU;
	int64_t x122 = 7070949428443146LL;
	uint8_t x123 = 0U;
	int16_t x124 = 36;
	static uint64_t t16 = 72341101813LLU;

	t16 = ((x121*x122)|(x123-x124));

	if (t16 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x125 = INT64_MAX;
	uint64_t x127 = UINT64_MAX;
	volatile uint8_t x128 = 65U;
	volatile uint64_t t17 = 19LLU;

	t17 = ((x125*x126)|(x127-x128));

	if (t17 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x129 = 15U;
	uint32_t x130 = 1076449U;
	static volatile uint16_t x131 = 615U;
	volatile uint32_t t18 = 2493U;

	t18 = ((x129*x130)|(x131-x132));

	if (t18 != 16180079U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x133 = 11;
	int32_t x136 = 526979653;
	static int32_t t19 = -752778057;

	t19 = ((x133*x134)|(x135-x136));

	if (t19 != -70) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x141 = INT8_MIN;
	volatile uint64_t x142 = 20077770594709739LLU;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	static uint64_t t20 = 219919419210991430LLU;

	t20 = ((x141*x142)|(x143-x144));

	if (t20 != 18446744073324169856LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x150 = 3895034355453LL;
	volatile int8_t x151 = 5;
	uint64_t x152 = 344LLU;
	volatile uint64_t t21 = 19082902606LLU;

	t21 = ((x149*x150)|(x151-x152));

	if (t21 != 18446744073709551359LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x153 = INT16_MIN;
	int8_t x155 = INT8_MIN;
	uint32_t x156 = UINT32_MAX;
	uint32_t t22 = 3143802U;

	t22 = ((x153*x154)|(x155-x156));

	if (t22 != 4294967169U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint32_t x158 = UINT32_MAX;
	uint64_t x159 = UINT64_MAX;
	volatile int16_t x160 = INT16_MAX;
	static volatile uint64_t t23 = 2949639414LLU;

	t23 = ((x157*x158)|(x159-x160));

	if (t23 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x170 = 23U;
	static int16_t x171 = INT16_MIN;
	uint32_t x172 = UINT32_MAX;

	t24 = ((x169*x170)|(x171-x172));

	if (t24 != 4294967273U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x177 = 5;
	uint64_t x178 = UINT64_MAX;
	uint32_t x179 = 619U;
	volatile uint8_t x180 = 98U;
	uint64_t t25 = 1328889599206LLU;

	t25 = ((x177*x178)|(x179-x180));

	if (t25 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x181 = -1;
	static uint16_t x183 = 182U;

	t26 = ((x181*x182)|(x183-x184));

	if (t26 != -99) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint16_t x186 = 24842U;
	static int64_t x187 = 2732807LL;
	uint16_t x188 = UINT16_MAX;
	int64_t t27 = 0LL;

	t27 = ((x185*x186)|(x187-x188));

	if (t27 != 4294950910LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x189 = -18644698LL;
	volatile uint8_t x190 = UINT8_MAX;
	int64_t x192 = -2LL;
	static int64_t t28 = 29314LL;

	t28 = ((x189*x190)|(x191-x192));

	if (t28 != -5LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x193 = -6;
	volatile int8_t x194 = -1;
	volatile int16_t x195 = -355;
	int8_t x196 = -58;
	volatile int32_t t29 = 109;

	t29 = ((x193*x194)|(x195-x196));

	if (t29 != -297) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x198 = INT32_MIN;
	static int16_t x199 = -1;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t30 = 1090345920590LLU;

	t30 = ((x197*x198)|(x199-x200));

	if (t30 != 14109527038389911679LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x201 = INT8_MIN;
	volatile uint16_t x202 = 26U;
	static int8_t x203 = INT8_MAX;
	static volatile uint8_t x204 = 20U;
	static int32_t t31 = 42628;

	t31 = ((x201*x202)|(x203-x204));

	if (t31 != -3221) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x205 = UINT32_MAX;
	volatile int32_t x207 = -5233122;
	static volatile int64_t x208 = INT64_MIN;

	t32 = ((x205*x206)|(x207-x208));

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x209 = UINT8_MAX;
	static volatile int64_t x210 = -1LL;
	int16_t x212 = 13108;
	uint64_t t33 = 938912LLU;

	t33 = ((x209*x210)|(x211-x212));

	if (t33 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x213 = INT8_MIN;

	t34 = ((x213*x214)|(x215-x216));

	if (t34 != 1327304LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MIN;
	static int64_t x219 = 469326508LL;
	volatile int64_t t35 = 187830035116LL;

	t35 = ((x217*x218)|(x219-x220));

	if (t35 != -402771LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t36 = -251551307937212LL;

	t36 = ((x225*x226)|(x227-x228));

	if (t36 != -65535LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x229 = 2U;
	uint16_t x230 = 26U;
	static int32_t x231 = -1;
	int8_t x232 = INT8_MAX;
	volatile int32_t t37 = 0;

	t37 = ((x229*x230)|(x231-x232));

	if (t37 != -76) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x233 = -1;
	volatile uint64_t x234 = 5573LLU;
	int32_t x235 = -23857;
	uint8_t x236 = 7U;
	static volatile uint64_t t38 = 7477LLU;

	t38 = ((x233*x234)|(x235-x236));

	if (t38 != 18446744073709546235LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x237 = INT16_MAX;
	uint16_t x238 = UINT16_MAX;
	int64_t x239 = INT64_MAX;
	uint32_t x240 = 67812897U;

	t39 = ((x237*x238)|(x239-x240));

	if (t39 != 9223372036854759903LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x245 = -101LL;
	int64_t t40 = -11417928299LL;

	t40 = ((x245*x246)|(x247-x248));

	if (t40 != -1858LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x249 = 48LL;
	static uint64_t x250 = 6119543079735826LLU;
	uint16_t x251 = 2U;
	uint32_t x252 = UINT32_MAX;
	uint64_t t41 = 41LLU;

	t41 = ((x249*x250)|(x251-x252));

	if (t41 != 293738067827319651LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x253 = -1;
	static volatile int8_t x254 = INT8_MIN;
	static int32_t x255 = 25;
	static int64_t x256 = -5LL;

	t42 = ((x253*x254)|(x255-x256));

	if (t42 != 158LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x258 = -9;
	int32_t x259 = INT32_MIN;
	int8_t x260 = INT8_MIN;
	int64_t t43 = -1861697LL;

	t43 = ((x257*x258)|(x259-x260));

	if (t43 != -2134515053LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x269 = UINT64_MAX;
	volatile int64_t x270 = 33256135697931LL;
	static int64_t x271 = -1LL;
	volatile uint64_t t44 = 8633565624LLU;

	t44 = ((x269*x270)|(x271-x272));

	if (t44 != 18446744043443388407LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x277 = -1;
	int16_t x278 = -1;
	int32_t x280 = INT32_MIN;
	static int32_t t45 = 228602878;

	t45 = ((x277*x278)|(x279-x280));

	if (t45 != 2147483521) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x285 = -14835;
	uint8_t x286 = 27U;
	uint64_t x287 = 25191LLU;

	t46 = ((x285*x286)|(x287-x288));

	if (t46 != 18446744073709413215LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x289 = -7896921;
	int8_t x291 = -58;
	uint16_t x292 = 2149U;
	uint32_t t47 = 722845046U;

	t47 = ((x289*x290)|(x291-x292));

	if (t47 != 4294967151U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x297 = INT8_MIN;
	uint32_t x298 = 20550U;
	int64_t x299 = 79LL;
	volatile int8_t x300 = INT8_MAX;
	volatile int64_t t48 = 2406555603614796LL;

	t48 = ((x297*x298)|(x299-x300));

	if (t48 != -48LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x306 = 3U;
	uint16_t x307 = 7U;
	volatile uint32_t t49 = 27613U;

	t49 = ((x305*x306)|(x307-x308));

	if (t49 != 4294966866U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x309 = -29;
	int64_t x310 = 709905973469472LL;
	int16_t x311 = -1;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t50 = 268481631756LL;

	t50 = ((x309*x310)|(x311-x312));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x317 = UINT32_MAX;
	int8_t x318 = INT8_MAX;
	volatile uint64_t x319 = UINT64_MAX;
	int64_t x320 = 26019403LL;

	t51 = ((x317*x318)|(x319-x320));

	if (t51 != 18446744073709551541LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x321 = -1;
	static volatile uint32_t x322 = UINT32_MAX;
	static uint8_t x323 = 0U;
	int64_t x324 = 411183LL;
	volatile int64_t t52 = -1449466010149715707LL;

	t52 = ((x321*x322)|(x323-x324));

	if (t52 != -411183LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x325 = 0;
	int64_t x327 = INT64_MIN;
	int32_t x328 = -1;
	static int64_t t53 = 2301000335830LL;

	t53 = ((x325*x326)|(x327-x328));

	if (t53 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x329 = 28;
	uint64_t x330 = 2942508LLU;
	volatile uint8_t x332 = 30U;
	volatile uint64_t t54 = 875LLU;

	t54 = ((x329*x330)|(x331-x332));

	if (t54 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x337 = -1;
	int16_t x338 = INT16_MAX;
	int32_t x339 = INT32_MAX;
	volatile uint32_t t55 = 4U;

	t55 = ((x337*x338)|(x339-x340));

	if (t55 != 4294934529U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x341 = -1;
	uint64_t x342 = 227LLU;
	volatile int64_t x343 = -1LL;
	uint32_t x344 = 186586U;

	t56 = ((x341*x342)|(x343-x344));

	if (t56 != 18446744073709551421LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	static volatile int16_t x347 = INT16_MIN;
	int32_t x348 = 8571788;

	t57 = ((x345*x346)|(x347-x348));

	if (t57 != -8604428) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x353 = -1LL;
	static uint8_t x354 = 0U;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = 408U;
	int64_t t58 = -689LL;

	t58 = ((x353*x354)|(x355-x356));

	if (t58 != 2147483240LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x365 = INT16_MIN;
	static uint16_t x366 = 5277U;
	int64_t x367 = INT64_MIN;
	int64_t t59 = -5575LL;

	t59 = ((x365*x366)|(x367-x368));

	if (t59 != -172916735LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x370 = 0U;
	uint16_t x371 = UINT16_MAX;
	static int32_t x372 = 740356623;
	volatile int32_t t60 = 54;

	t60 = ((x369*x370)|(x371-x372));

	if (t60 != -740291088) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x373 = -28;
	int8_t x374 = -1;
	static uint16_t x376 = 1U;
	static volatile uint64_t t61 = 24646633528425461LLU;

	t61 = ((x373*x374)|(x375-x376));

	if (t61 != 61LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x385 = 2350U;
	int32_t x387 = -1;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x385*x386)|(x387-x388));

	if (t62 != 8396671LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x393 = 1450866U;
	volatile int16_t x394 = 46;
	int16_t x395 = -85;
	volatile uint64_t x396 = 515504652LLU;
	static uint64_t t63 = 345591440911LLU;

	t63 = ((x393*x394)|(x395-x396));

	if (t63 != 18446744073239683071LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x397 = 1149U;
	volatile int64_t x398 = 1LL;
	int32_t x399 = 9;
	int16_t x400 = 0;
	int64_t t64 = -30516LL;

	t64 = ((x397*x398)|(x399-x400));

	if (t64 != 1149LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x403 = -15903960708006015LL;
	int64_t x404 = 5453045114146LL;
	int64_t t65 = -8350985752LL;

	t65 = ((x401*x402)|(x403-x404));

	if (t65 != -15909413563983265LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x405 = -1LL;
	int32_t x406 = -1;
	uint64_t x407 = 542058852805047412LLU;
	static uint16_t x408 = 11152U;
	uint64_t t66 = 427043LLU;

	t66 = ((x405*x406)|(x407-x408));

	if (t66 != 542058852805036261LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x413 = 2U;
	int64_t x414 = -1LL;
	static int64_t x415 = 2403154LL;
	static uint16_t x416 = 50U;
	int64_t t67 = -1275655131705876LL;

	t67 = ((x413*x414)|(x415-x416));

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x417 = 509971545273404407LLU;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 1U;
	uint16_t x420 = UINT16_MAX;
	uint64_t t68 = 1389329321393854195LLU;

	t68 = ((x417*x418)|(x419-x420));

	if (t68 != 8013586011357380610LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x421 = INT32_MIN;
	volatile uint64_t x422 = UINT64_MAX;
	volatile uint64_t t69 = 26LLU;

	t69 = ((x421*x422)|(x423-x424));

	if (t69 != 2241373307187370128LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x429 = UINT64_MAX;
	int64_t x431 = 4LL;

	t70 = ((x429*x430)|(x431-x432));

	if (t70 != 18446744073709551365LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x438 = UINT8_MAX;
	uint8_t x439 = 1U;
	volatile uint64_t t71 = 212664849919322932LLU;

	t71 = ((x437*x438)|(x439-x440));

	if (t71 != 18446744073709487102LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x442 = 8504U;
	int8_t x443 = 1;
	volatile int8_t x444 = 1;
	static volatile uint32_t t72 = 419565766U;

	t72 = ((x441*x442)|(x443-x444));

	if (t72 != 2352909176U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x445 = INT8_MAX;
	uint8_t x446 = UINT8_MAX;
	int8_t x447 = INT8_MIN;
	static int8_t x448 = INT8_MAX;
	int32_t t73 = -347744;

	t73 = ((x445*x446)|(x447-x448));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	int16_t x452 = INT16_MIN;
	int32_t t74 = -113406;

	t74 = ((x449*x450)|(x451-x452));

	if (t74 != -2143256576) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x453 = UINT64_MAX;
	int32_t x454 = INT32_MIN;
	uint64_t t75 = 795439765200LLU;

	t75 = ((x453*x454)|(x455-x456));

	if (t75 != 4294967292LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x457 = -1;
	static volatile uint64_t t76 = 216992607LLU;

	t76 = ((x457*x458)|(x459-x460));

	if (t76 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x465 = 107111209U;
	static int64_t x466 = 1712535447LL;
	volatile int64_t t77 = -974LL;

	t77 = ((x465*x466)|(x467-x468));

	if (t77 != -81LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x469 = 73U;
	int32_t x470 = INT32_MIN;
	static uint8_t x471 = UINT8_MAX;
	static volatile int32_t x472 = 10386;
	uint32_t t78 = 235322929U;

	t78 = ((x469*x470)|(x471-x472));

	if (t78 != 4294957165U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x474 = 5555093LLU;
	int8_t x475 = INT8_MIN;
	int32_t x476 = INT32_MIN;
	static volatile uint64_t t79 = 18707706193757954LLU;

	t79 = ((x473*x474)|(x475-x476));

	if (t79 != 18434814604476415872LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x477 = -7;
	uint8_t x478 = 1U;
	uint16_t x479 = 3331U;
	static uint8_t x480 = 83U;
	volatile int32_t t80 = 47;

	t80 = ((x477*x478)|(x479-x480));

	if (t80 != -7) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x481 = INT16_MAX;
	static int16_t x482 = -1;
	int16_t x483 = INT16_MIN;
	int64_t x484 = 865LL;
	static int64_t t81 = 15275865205LL;

	t81 = ((x481*x482)|(x483-x484));

	if (t81 != -865LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x485 = UINT64_MAX;
	uint64_t x487 = 23475748224633LLU;
	volatile uint8_t x488 = 7U;
	volatile uint64_t t82 = 16508293LLU;

	t82 = ((x485*x486)|(x487-x488));

	if (t82 != 23475748224754LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x489 = UINT16_MAX;
	int16_t x490 = INT16_MIN;
	int16_t x491 = -1;
	uint64_t x492 = 213321973749008LLU;

	t83 = ((x489*x490)|(x491-x492));

	if (t83 != 18446744072024009455LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x494 = 17U;
	int16_t x495 = -7;
	int8_t x496 = INT8_MIN;
	int32_t t84 = -2304;

	t84 = ((x493*x494)|(x495-x496));

	if (t84 != -556935) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x501 = UINT64_MAX;
	static int64_t x502 = INT64_MIN;
	static int16_t x503 = 3605;
	int8_t x504 = -27;
	volatile uint64_t t85 = 2606107143386LLU;

	t85 = ((x501*x502)|(x503-x504));

	if (t85 != 9223372036854779440LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x505 = 511914001LL;
	uint16_t x506 = 92U;
	int16_t x507 = -3;
	uint8_t x508 = 1U;

	t86 = ((x505*x506)|(x507-x508));

	if (t86 != -4LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x509 = 89449U;
	static volatile int32_t x510 = 822154105;
	volatile int64_t x511 = 1320635283478033992LL;
	int64_t x512 = -1LL;
	static int64_t t87 = -23943271664118LL;

	t87 = ((x509*x510)|(x511-x512));

	if (t87 != 1320635285632907241LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x517 = UINT32_MAX;
	static int32_t x520 = -3438;

	t88 = ((x517*x518)|(x519-x520));

	if (t88 != 3437U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x521 = 2192477251767849LLU;
	int16_t x522 = 24;
	uint32_t x523 = UINT32_MAX;
	static volatile uint64_t t89 = 144877LLU;

	t89 = ((x521*x522)|(x523-x524));

	if (t89 != 52619454042428376LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x525 = 512193083393143470LL;
	int16_t x526 = -1;
	static int32_t x527 = -409693869;
	int64_t t90 = 2814448018350843LL;

	t90 = ((x525*x526)|(x527-x528));

	if (t90 != -134963757LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x549 = 3;
	uint16_t x550 = UINT16_MAX;
	int32_t x551 = INT32_MAX;
	uint64_t x552 = UINT64_MAX;
	volatile uint64_t t91 = 5126LLU;

	t91 = ((x549*x550)|(x551-x552));

	if (t91 != 2147680253LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x553 = 215894073U;
	int16_t x555 = -10;
	uint32_t x556 = UINT32_MAX;
	volatile uint32_t t92 = 2139161909U;

	t92 = ((x553*x554)|(x555-x556));

	if (t92 != 4294967287U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x557 = -1LL;
	volatile int16_t x558 = INT16_MAX;
	volatile int16_t x559 = -7847;
	volatile int64_t t93 = 18LL;

	t93 = ((x557*x558)|(x559-x560));

	if (t93 != -7845LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x561 = -126;
	int64_t x562 = -12901024LL;
	static uint8_t x564 = UINT8_MAX;
	static int64_t t94 = 12721343000LL;

	t94 = ((x561*x562)|(x563-x564));

	if (t94 != 1625554880LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x569 = INT16_MIN;
	static int16_t x570 = INT16_MIN;
	static int16_t x571 = INT16_MIN;
	uint16_t x572 = 3U;
	volatile int32_t t95 = 244514;

	t95 = ((x569*x570)|(x571-x572));

	if (t95 != -32771) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x582 = 7313;
	static uint32_t x583 = UINT32_MAX;
	int8_t x584 = 2;

	t96 = ((x581*x582)|(x583-x584));

	if (t96 != 4294967293U) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x585 = INT16_MIN;
	uint16_t x586 = 49U;
	int32_t x587 = -31;
	static uint16_t x588 = 28U;
	volatile int32_t t97 = 5;

	t97 = ((x585*x586)|(x587-x588));

	if (t97 != -59) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x589 = 962464U;
	uint8_t x590 = UINT8_MAX;
	uint8_t x591 = 71U;
	uint32_t x592 = 1842855812U;

	t98 = ((x589*x590)|(x591-x592));

	if (t98 != 2661871843U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x593 = -1;
	int32_t x594 = -1;
	int32_t x595 = -116555;
	int64_t t99 = 26700748985259989LL;

	t99 = ((x593*x594)|(x595-x596));

	if (t99 != -116553LL) { NG(); } else { ; }
	
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

