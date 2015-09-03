#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x14 = UINT64_MAX;
volatile uint32_t x24 = 137502U;
volatile int32_t t2 = -2592232;
uint16_t x25 = 74U;
uint64_t x30 = UINT64_MAX;
int32_t x44 = INT32_MIN;
volatile int32_t t7 = -437275;
uint32_t x68 = UINT32_MAX;
volatile int32_t t11 = 77311;
static volatile int64_t x72 = 61764410LL;
int32_t t12 = -83;
uint64_t x85 = UINT64_MAX;
volatile int32_t x94 = INT32_MIN;
volatile int32_t t15 = -20101;
int64_t x105 = -1LL;
static int32_t x118 = -1;
int32_t t19 = -591491;
uint32_t x136 = 14053U;
int32_t t21 = -453265291;
static uint8_t x138 = UINT8_MAX;
int32_t t22 = 53429;
volatile int16_t x148 = -1;
volatile int8_t x150 = -3;
uint8_t x171 = UINT8_MAX;
uint16_t x172 = 395U;
int32_t x174 = -1;
uint16_t x175 = 28415U;
volatile uint32_t x176 = UINT32_MAX;
static int32_t x180 = -39715;
uint32_t x190 = 490946U;
int16_t x191 = INT16_MIN;
volatile int32_t t30 = 1082904;
static int8_t x199 = INT8_MIN;
volatile int8_t x208 = INT8_MAX;
volatile int32_t t36 = 575585687;
uint16_t x237 = 27U;
static int8_t x248 = 2;
static int32_t t41 = -1;
volatile uint8_t x262 = 19U;
int8_t x264 = INT8_MIN;
int16_t x266 = INT16_MIN;
static int64_t x272 = INT64_MAX;
int32_t x278 = -1;
int32_t t47 = 3199;
int64_t x304 = 19064174996747LL;
int32_t t49 = 13;
int32_t x315 = 339;
static volatile int32_t t51 = -4699;
volatile int8_t x323 = INT8_MIN;
int8_t x324 = 0;
volatile int32_t t55 = 22958;
uint32_t x334 = 79557U;
int32_t x339 = -1;
static int32_t t58 = -3892931;
int16_t x349 = 14180;
int32_t t59 = 2724346;
int16_t x371 = INT16_MAX;
static int8_t x372 = 1;
int8_t x379 = 54;
int16_t x387 = 6770;
static int8_t x395 = INT8_MIN;
int64_t x400 = -27988LL;
int16_t x410 = INT16_MAX;
int32_t t71 = 0;
static int64_t x413 = -1LL;
uint64_t x414 = UINT64_MAX;
volatile uint64_t x415 = UINT64_MAX;
int64_t x420 = -14LL;
int16_t x430 = -1;
int64_t x431 = -662LL;
volatile uint64_t x442 = 5706427LLU;
volatile uint8_t x443 = 1U;
volatile int32_t t77 = -44590;
volatile int64_t x447 = 2260LL;
volatile int32_t t78 = 81132;
int32_t x450 = -1;
uint32_t x470 = UINT32_MAX;
int16_t x479 = 36;
static uint16_t x480 = UINT16_MAX;
volatile int32_t t83 = 361823;
volatile int64_t x482 = 7LL;
static volatile uint32_t x490 = UINT32_MAX;
volatile int32_t t87 = 14727887;
uint8_t x498 = 15U;
int16_t x504 = INT16_MIN;
int64_t x506 = -167LL;
static uint64_t x517 = 3673LLU;
uint32_t x519 = 19037U;
uint64_t x529 = 352293047177028499LLU;
uint32_t x530 = UINT32_MAX;
int64_t x538 = INT64_MIN;


void f0(void) {
	int16_t x9 = INT16_MAX;
	volatile int32_t x10 = INT32_MIN;
	static uint32_t x11 = UINT32_MAX;
	uint8_t x12 = UINT8_MAX;
	int32_t t0 = 225706;

	t0 = ((x9==(x10*x11))==x12);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	int8_t x15 = -1;
	int32_t x16 = -169477;
	volatile int32_t t1 = 155312753;

	t1 = ((x13==(x14*x15))==x16);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = INT16_MIN;
	uint32_t x22 = 21883U;
	uint16_t x23 = UINT16_MAX;

	t2 = ((x21==(x22*x23))==x24);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x26 = -1LL;
	volatile int16_t x27 = INT16_MIN;
	int16_t x28 = -6;
	int32_t t3 = -469;

	t3 = ((x25==(x26*x27))==x28);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = -1LL;
	int16_t x31 = -585;
	int16_t x32 = 1;
	volatile int32_t t4 = 10534396;

	t4 = ((x29==(x30*x31))==x32);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MIN;
	static int16_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t5 = -52301;

	t5 = ((x33==(x34*x35))==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = 23;
	int8_t x42 = INT8_MAX;
	int64_t x43 = -1445983865020293LL;
	int32_t t6 = -2912002;

	t6 = ((x41==(x42*x43))==x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x45 = INT8_MIN;
	volatile int8_t x46 = 1;
	int8_t x47 = -1;
	uint8_t x48 = UINT8_MAX;

	t7 = ((x45==(x46*x47))==x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = 675917LL;
	uint8_t x51 = 0U;
	int64_t x52 = INT64_MAX;
	volatile int32_t t8 = -182;

	t8 = ((x49==(x50*x51))==x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x53 = INT32_MIN;
	volatile uint32_t x54 = 10U;
	volatile uint64_t x55 = 3561474LLU;
	static volatile int64_t x56 = INT64_MAX;
	volatile int32_t t9 = -334177570;

	t9 = ((x53==(x54*x55))==x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x61 = INT16_MAX;
	int64_t x62 = INT64_MIN;
	static volatile uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t10 = -100494439;

	t10 = ((x61==(x62*x63))==x64);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 9569U;
	static int16_t x66 = INT16_MIN;
	uint16_t x67 = 3925U;

	t11 = ((x65==(x66*x67))==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x69 = 418235097397957LL;
	static volatile int32_t x70 = -1;
	uint16_t x71 = 116U;

	t12 = ((x69==(x70*x71))==x72);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x77 = UINT32_MAX;
	uint16_t x78 = UINT16_MAX;
	volatile int32_t x79 = 13;
	static uint8_t x80 = 14U;
	int32_t t13 = -6;

	t13 = ((x77==(x78*x79))==x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x86 = -1;
	int32_t x87 = -1;
	uint64_t x88 = 92328805251283956LLU;
	volatile int32_t t14 = 446976967;

	t14 = ((x85==(x86*x87))==x88);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = UINT32_MAX;
	int64_t x95 = 124LL;
	int32_t x96 = INT32_MIN;

	t15 = ((x93==(x94*x95))==x96);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = -369332029;
	volatile uint64_t x102 = 4290LLU;
	int32_t x103 = 1;
	static int16_t x104 = -180;
	volatile int32_t t16 = -9012229;

	t16 = ((x101==(x102*x103))==x104);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x106 = 7684U;
	uint32_t x107 = 853U;
	int64_t x108 = INT64_MIN;
	volatile int32_t t17 = -10;

	t17 = ((x105==(x106*x107))==x108);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x113 = INT8_MAX;
	int16_t x114 = -1;
	static volatile int8_t x115 = -2;
	static volatile uint32_t x116 = 535U;
	volatile int32_t t18 = 162;

	t18 = ((x113==(x114*x115))==x116);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x117 = 8U;
	uint32_t x119 = 4083U;
	volatile int8_t x120 = 31;

	t19 = ((x117==(x118*x119))==x120);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x121 = INT64_MIN;
	static volatile int32_t x122 = 1;
	int64_t x123 = INT64_MIN;
	uint16_t x124 = 7553U;
	volatile int32_t t20 = 920;

	t20 = ((x121==(x122*x123))==x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 216606616156199LLU;
	volatile uint16_t x135 = 1013U;

	t21 = ((x133==(x134*x135))==x136);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x137 = 57U;
	int16_t x139 = INT16_MAX;
	uint8_t x140 = UINT8_MAX;

	t22 = ((x137==(x138*x139))==x140);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x145 = 3U;
	static int64_t x146 = INT64_MIN;
	uint64_t x147 = UINT64_MAX;
	int32_t t23 = 113717582;

	t23 = ((x145==(x146*x147))==x148);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x149 = INT8_MIN;
	volatile int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t24 = 52303055;

	t24 = ((x149==(x150*x151))==x152);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = INT8_MIN;
	volatile int8_t x167 = 0;
	int8_t x168 = INT8_MAX;
	int32_t t25 = 18262012;

	t25 = ((x165==(x166*x167))==x168);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x169 = INT32_MAX;
	int16_t x170 = INT16_MIN;
	int32_t t26 = 10;

	t26 = ((x169==(x170*x171))==x172);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x173 = 1U;
	int32_t t27 = 1;

	t27 = ((x173==(x174*x175))==x176);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x177 = 27401U;
	int8_t x178 = INT8_MAX;
	int32_t x179 = -26;
	int32_t t28 = 17;

	t28 = ((x177==(x178*x179))==x180);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x189 = INT64_MIN;
	int32_t x192 = 40;
	volatile int32_t t29 = -1;

	t29 = ((x189==(x190*x191))==x192);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = 0;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	volatile int32_t x196 = -59857095;

	t30 = ((x193==(x194*x195))==x196);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = 1LL;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t31 = 51207525;

	t31 = ((x197==(x198*x199))==x200);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x201 = 0LLU;
	volatile int16_t x202 = INT16_MAX;
	uint64_t x203 = 21385426396LLU;
	volatile uint8_t x204 = 12U;
	volatile int32_t t32 = 49;

	t32 = ((x201==(x202*x203))==x204);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x205 = 18534889671865LLU;
	int64_t x206 = INT64_MAX;
	volatile uint64_t x207 = UINT64_MAX;
	static volatile int32_t t33 = -22;

	t33 = ((x205==(x206*x207))==x208);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x209 = 4U;
	volatile uint16_t x210 = 0U;
	int16_t x211 = 11573;
	static int32_t x212 = -1;
	volatile int32_t t34 = -1;

	t34 = ((x209==(x210*x211))==x212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x213 = -1;
	static uint32_t x214 = UINT32_MAX;
	int16_t x215 = -50;
	uint32_t x216 = 2U;
	int32_t t35 = 281;

	t35 = ((x213==(x214*x215))==x216);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = 27;
	uint16_t x219 = 502U;
	uint16_t x220 = 266U;

	t36 = ((x217==(x218*x219))==x220);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x225 = INT64_MIN;
	int8_t x226 = 29;
	int16_t x227 = -1;
	int64_t x228 = 155619478LL;
	static volatile int32_t t37 = 46610;

	t37 = ((x225==(x226*x227))==x228);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x238 = INT8_MIN;
	volatile int16_t x239 = 213;
	int32_t x240 = 432;
	static volatile int32_t t38 = -10648;

	t38 = ((x237==(x238*x239))==x240);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x241 = INT8_MIN;
	int32_t x242 = -3735;
	int8_t x243 = -1;
	int32_t x244 = INT32_MAX;
	volatile int32_t t39 = 151101;

	t39 = ((x241==(x242*x243))==x244);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x245 = UINT8_MAX;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MAX;
	int32_t t40 = 230;

	t40 = ((x245==(x246*x247))==x248);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x249 = 5U;
	volatile int64_t x250 = -155639963802LL;
	int64_t x251 = -1LL;
	volatile int32_t x252 = -11693333;

	t41 = ((x249==(x250*x251))==x252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x253 = 71283321399510154LL;
	uint8_t x254 = 5U;
	uint16_t x255 = 9U;
	volatile int8_t x256 = -1;
	int32_t t42 = 468;

	t42 = ((x253==(x254*x255))==x256);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x261 = 3639U;
	uint8_t x263 = 0U;
	int32_t t43 = -55628994;

	t43 = ((x261==(x262*x263))==x264);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x265 = -1;
	static int16_t x267 = -1;
	int16_t x268 = INT16_MIN;
	static int32_t t44 = -247532;

	t44 = ((x265==(x266*x267))==x268);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = 129219754U;
	int8_t x271 = INT8_MIN;
	int32_t t45 = 9;

	t45 = ((x269==(x270*x271))==x272);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x277 = 22U;
	static volatile int16_t x279 = 12737;
	uint32_t x280 = 3U;
	volatile int32_t t46 = 438124;

	t46 = ((x277==(x278*x279))==x280);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x289 = 30813U;
	volatile int32_t x290 = -5470352;
	volatile int64_t x291 = -2997392LL;
	static uint64_t x292 = 279LLU;

	t47 = ((x289==(x290*x291))==x292);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x293 = -1;
	volatile int8_t x294 = -1;
	int16_t x295 = 408;
	static uint16_t x296 = UINT16_MAX;
	volatile int32_t t48 = 36;

	t48 = ((x293==(x294*x295))==x296);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x301 = 3;
	volatile uint8_t x302 = 3U;
	static int16_t x303 = INT16_MIN;

	t49 = ((x301==(x302*x303))==x304);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x309 = 2U;
	int64_t x310 = -1LL;
	int8_t x311 = INT8_MIN;
	int32_t x312 = INT32_MAX;
	static int32_t t50 = 1;

	t50 = ((x309==(x310*x311))==x312);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x313 = INT8_MIN;
	static uint16_t x314 = 11823U;
	static int16_t x316 = -164;

	t51 = ((x313==(x314*x315))==x316);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x317 = 25U;
	static int32_t x318 = 527;
	int8_t x319 = -1;
	int8_t x320 = INT8_MAX;
	static volatile int32_t t52 = 22;

	t52 = ((x317==(x318*x319))==x320);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = 2;
	volatile int32_t t53 = -276814474;

	t53 = ((x321==(x322*x323))==x324);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x325 = -1LL;
	int8_t x326 = 11;
	uint16_t x327 = 87U;
	int32_t x328 = INT32_MIN;
	int32_t t54 = -112;

	t54 = ((x325==(x326*x327))==x328);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x329 = INT8_MAX;
	uint16_t x330 = UINT16_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	uint32_t x332 = UINT32_MAX;

	t55 = ((x329==(x330*x331))==x332);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x333 = -1;
	int16_t x335 = INT16_MIN;
	static int8_t x336 = -18;
	int32_t t56 = 366365450;

	t56 = ((x333==(x334*x335))==x336);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x337 = 0LL;
	int16_t x338 = INT16_MAX;
	volatile int32_t x340 = -1;
	static volatile int32_t t57 = 236;

	t57 = ((x337==(x338*x339))==x340);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x341 = INT32_MAX;
	volatile int16_t x342 = INT16_MIN;
	int32_t x343 = -1;
	uint64_t x344 = 5924266816101LLU;

	t58 = ((x341==(x342*x343))==x344);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x350 = -1;
	static int8_t x351 = INT8_MIN;
	volatile uint16_t x352 = 2702U;

	t59 = ((x349==(x350*x351))==x352);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x353 = -1;
	int64_t x354 = -1LL;
	int32_t x355 = INT32_MIN;
	volatile int64_t x356 = INT64_MAX;
	volatile int32_t t60 = -254;

	t60 = ((x353==(x354*x355))==x356);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x357 = 0U;
	volatile uint32_t x358 = 137U;
	static uint16_t x359 = 45U;
	volatile uint32_t x360 = 843489152U;
	volatile int32_t t61 = 4605;

	t61 = ((x357==(x358*x359))==x360);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x369 = 7320176U;
	volatile uint64_t x370 = 120604839470LLU;
	int32_t t62 = -6178396;

	t62 = ((x369==(x370*x371))==x372);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x377 = -1;
	volatile int8_t x378 = INT8_MAX;
	static int8_t x380 = -1;
	volatile int32_t t63 = 238;

	t63 = ((x377==(x378*x379))==x380);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = -9;
	int32_t t64 = 797;

	t64 = ((x381==(x382*x383))==x384);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x385 = INT64_MAX;
	int64_t x386 = -100LL;
	int32_t x388 = -1;
	int32_t t65 = -164;

	t65 = ((x385==(x386*x387))==x388);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x389 = 16442309096368131LLU;
	uint16_t x390 = 845U;
	int16_t x391 = -52;
	int64_t x392 = INT64_MAX;
	static volatile int32_t t66 = -94464982;

	t66 = ((x389==(x390*x391))==x392);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x393 = INT64_MIN;
	volatile int32_t x394 = -14;
	uint16_t x396 = 4U;
	int32_t t67 = -2368;

	t67 = ((x393==(x394*x395))==x396);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x397 = -1;
	int8_t x398 = INT8_MAX;
	int8_t x399 = -8;
	static int32_t t68 = -149194169;

	t68 = ((x397==(x398*x399))==x400);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x401 = UINT32_MAX;
	uint64_t x402 = 466502361LLU;
	uint32_t x403 = UINT32_MAX;
	static volatile int8_t x404 = INT8_MAX;
	int32_t t69 = -7550869;

	t69 = ((x401==(x402*x403))==x404);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x405 = INT16_MAX;
	static uint16_t x406 = 2839U;
	uint32_t x407 = UINT32_MAX;
	volatile uint32_t x408 = 312U;
	static volatile int32_t t70 = 355;

	t70 = ((x405==(x406*x407))==x408);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x409 = 308219083242LL;
	uint16_t x411 = UINT16_MAX;
	static int64_t x412 = INT64_MIN;

	t71 = ((x409==(x410*x411))==x412);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x416 = 126U;
	int32_t t72 = 927197756;

	t72 = ((x413==(x414*x415))==x416);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x417 = -250;
	static int16_t x418 = -1;
	int64_t x419 = -26535895794957982LL;
	volatile int32_t t73 = -33387172;

	t73 = ((x417==(x418*x419))==x420);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x425 = -13137;
	static int32_t x426 = INT32_MAX;
	uint8_t x427 = 1U;
	uint32_t x428 = 494U;
	volatile int32_t t74 = 177;

	t74 = ((x425==(x426*x427))==x428);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x429 = INT16_MIN;
	static int16_t x432 = 47;
	volatile int32_t t75 = -3;

	t75 = ((x429==(x430*x431))==x432);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x437 = 470;
	static volatile int8_t x438 = -1;
	int8_t x439 = INT8_MIN;
	int64_t x440 = -1LL;
	int32_t t76 = 0;

	t76 = ((x437==(x438*x439))==x440);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x441 = UINT64_MAX;
	uint64_t x444 = 4506960526240091186LLU;

	t77 = ((x441==(x442*x443))==x444);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x445 = -1;
	int16_t x446 = -1;
	static uint64_t x448 = 16608432197LLU;

	t78 = ((x445==(x446*x447))==x448);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x449 = 6;
	uint8_t x451 = 3U;
	int8_t x452 = INT8_MIN;
	volatile int32_t t79 = -1316;

	t79 = ((x449==(x450*x451))==x452);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x453 = 933156;
	volatile uint32_t x454 = UINT32_MAX;
	uint16_t x455 = UINT16_MAX;
	static volatile int64_t x456 = -137412LL;
	int32_t t80 = 353;

	t80 = ((x453==(x454*x455))==x456);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x457 = INT16_MIN;
	volatile uint8_t x458 = 11U;
	int32_t x459 = 29062;
	uint64_t x460 = 1LLU;
	volatile int32_t t81 = -174836782;

	t81 = ((x457==(x458*x459))==x460);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x469 = 3;
	uint16_t x471 = 28204U;
	uint64_t x472 = UINT64_MAX;
	int32_t t82 = 156;

	t82 = ((x469==(x470*x471))==x472);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x477 = INT32_MIN;
	uint64_t x478 = 35LLU;

	t83 = ((x477==(x478*x479))==x480);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x481 = UINT64_MAX;
	uint8_t x483 = 5U;
	int64_t x484 = INT64_MAX;
	volatile int32_t t84 = -969875191;

	t84 = ((x481==(x482*x483))==x484);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x485 = -341;
	int64_t x486 = -327649149LL;
	int32_t x487 = -32018;
	int32_t x488 = INT32_MAX;
	volatile int32_t t85 = 442804636;

	t85 = ((x485==(x486*x487))==x488);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x489 = 29LLU;
	uint8_t x491 = UINT8_MAX;
	volatile int8_t x492 = -1;
	volatile int32_t t86 = -29;

	t86 = ((x489==(x490*x491))==x492);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x493 = -1;
	int8_t x494 = -1;
	int8_t x495 = -36;
	int16_t x496 = INT16_MIN;

	t87 = ((x493==(x494*x495))==x496);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x497 = UINT32_MAX;
	int8_t x499 = -1;
	volatile int16_t x500 = INT16_MIN;
	int32_t t88 = 369526;

	t88 = ((x497==(x498*x499))==x500);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x501 = -1LL;
	int64_t x502 = -1LL;
	uint8_t x503 = 14U;
	int32_t t89 = 28987345;

	t89 = ((x501==(x502*x503))==x504);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x505 = UINT8_MAX;
	uint16_t x507 = UINT16_MAX;
	volatile int16_t x508 = INT16_MAX;
	volatile int32_t t90 = -37;

	t90 = ((x505==(x506*x507))==x508);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x509 = INT32_MIN;
	int64_t x510 = 77519590976LL;
	volatile int64_t x511 = -1LL;
	int8_t x512 = INT8_MIN;
	int32_t t91 = -201112645;

	t91 = ((x509==(x510*x511))==x512);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x513 = INT32_MIN;
	uint64_t x514 = 24272LLU;
	int8_t x515 = 0;
	uint16_t x516 = UINT16_MAX;
	int32_t t92 = 20303911;

	t92 = ((x513==(x514*x515))==x516);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x518 = -1;
	uint64_t x520 = UINT64_MAX;
	static volatile int32_t t93 = 942;

	t93 = ((x517==(x518*x519))==x520);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x521 = 4514251831636942LL;
	uint32_t x522 = 520705U;
	uint16_t x523 = UINT16_MAX;
	int8_t x524 = 0;
	int32_t t94 = 723;

	t94 = ((x521==(x522*x523))==x524);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x525 = INT32_MIN;
	uint64_t x526 = 817757749821422LLU;
	volatile uint64_t x527 = 517LLU;
	static uint8_t x528 = 38U;
	volatile int32_t t95 = -100474932;

	t95 = ((x525==(x526*x527))==x528);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x531 = -1;
	uint16_t x532 = UINT16_MAX;
	static int32_t t96 = -182920507;

	t96 = ((x529==(x530*x531))==x532);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x533 = INT8_MIN;
	int64_t x534 = -153101LL;
	int64_t x535 = 42038LL;
	uint64_t x536 = 12970LLU;
	int32_t t97 = 4;

	t97 = ((x533==(x534*x535))==x536);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x537 = 5U;
	static uint64_t x539 = 28545876663980051LLU;
	int32_t x540 = INT32_MAX;
	int32_t t98 = 268234242;

	t98 = ((x537==(x538*x539))==x540);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint16_t x545 = 3266U;
	uint32_t x546 = UINT32_MAX;
	uint8_t x547 = 0U;
	int8_t x548 = -7;
	volatile int32_t t99 = -1;

	t99 = ((x545==(x546*x547))==x548);

	if (t99 != 0) { NG(); } else { ; }
	
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

