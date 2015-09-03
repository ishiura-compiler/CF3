#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = 378;
volatile int32_t x5 = -1;
int32_t t2 = -114561556;
int64_t t4 = -15666LL;
volatile int16_t x22 = INT16_MAX;
int8_t x29 = -3;
uint32_t t6 = UINT32_MAX;
int16_t x40 = INT16_MIN;
int32_t t7 = -492802;
static int32_t x47 = INT32_MAX;
volatile int16_t x63 = -1614;
int32_t t11 = -82;
volatile int8_t x73 = -1;
static int32_t x87 = 327;
volatile int64_t x88 = 246555LL;
uint64_t x89 = 1392184558LLU;
volatile int64_t x106 = INT64_MIN;
uint16_t x107 = 20498U;
int8_t x109 = -1;
volatile int64_t x114 = 9029LL;
static volatile int64_t t21 = -782295LL;
int8_t x137 = INT8_MAX;
volatile int32_t x138 = -1;
volatile int16_t x169 = -1;
int32_t x173 = -1048928;
int8_t x181 = INT8_MIN;
uint32_t x194 = 463474U;
volatile int64_t t33 = -6290399775468LL;
int16_t x207 = INT16_MAX;
static int8_t x208 = INT8_MIN;
static volatile int64_t t35 = 375261LL;
volatile int8_t x220 = 0;
int16_t x227 = 109;
static int32_t x240 = INT32_MIN;
int64_t t42 = 19LL;
uint64_t t43 = UINT64_MAX;
volatile int8_t x274 = INT8_MIN;
int16_t x275 = INT16_MAX;
volatile uint32_t t46 = 6U;
volatile uint64_t x282 = 35431534999LLU;
uint16_t x284 = 113U;
static uint8_t x286 = 3U;
static volatile uint32_t x311 = 381U;
volatile int8_t x319 = INT8_MIN;
int16_t x331 = INT16_MAX;
static volatile int16_t x332 = INT16_MIN;
uint16_t x333 = UINT16_MAX;
static volatile int32_t x334 = -383629;
static uint8_t x336 = UINT8_MAX;
static int32_t x340 = -1;
uint64_t t56 = UINT64_MAX;
int16_t x345 = -1;
int64_t x350 = 1223LL;
uint16_t x352 = UINT16_MAX;
int32_t x369 = INT32_MIN;
uint32_t x370 = 12U;
int64_t t64 = 35129LL;
int32_t x391 = 13;
int16_t x404 = -3827;
static int16_t x412 = INT16_MIN;
uint64_t t71 = 2453LLU;
static uint8_t x437 = 2U;
uint16_t x444 = 14U;
static volatile int32_t t76 = -174093898;
int16_t x445 = 1;
static int32_t x451 = -91514;
int8_t x452 = INT8_MIN;
int64_t x454 = -1LL;
uint64_t x465 = 163038019009087939LLU;
int32_t x467 = INT32_MIN;
uint32_t x476 = 7203211U;
uint16_t x487 = UINT16_MAX;
int64_t x503 = 23728787181LL;
uint16_t x517 = 6U;
volatile int32_t t91 = -111748;
int8_t x534 = 26;
int32_t t93 = 132411735;
uint32_t x539 = 9380U;
static volatile uint32_t t94 = UINT32_MAX;
uint32_t x544 = 753U;
int64_t x562 = 614936307467LL;


void f0(void) {
	int32_t x1 = 40028122;
	static int32_t x3 = INT32_MAX;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -31246;

	t0 = ((x1/(x2%x3))|x4);

	if (t0 != -2147377754) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 305U;
	static int8_t x7 = 39;
	int32_t x8 = -21204550;
	uint32_t t1 = UINT32_MAX;

	t1 = ((x5/(x6%x7))|x8);

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static int32_t x10 = INT32_MAX;
	static int32_t x11 = 2;
	int32_t x12 = -1;

	t2 = ((x9/(x10%x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 5626U;
	volatile uint8_t x14 = 32U;
	static volatile int64_t x15 = INT64_MAX;
	volatile uint16_t x16 = UINT16_MAX;
	volatile int64_t t3 = -383184LL;

	t3 = ((x13/(x14%x15))|x16);

	if (t3 != 65535LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint8_t x18 = 6U;
	int32_t x19 = INT32_MIN;
	int64_t x20 = 429318629567824LL;

	t4 = ((x17/(x18%x19))|x20);

	if (t4 != 429318983220565LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 45U;
	int16_t x23 = 324;
	static uint16_t x24 = 0U;
	volatile uint32_t t5 = 4U;

	t5 = ((x21/(x22%x23))|x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x30 = -50;
	int32_t x31 = INT32_MIN;
	uint32_t x32 = UINT32_MAX;

	t6 = ((x29/(x30%x31))|x32);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -34;
	volatile uint16_t x38 = 234U;
	uint8_t x39 = 69U;

	t7 = ((x37/(x38%x39))|x40);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	static int32_t x46 = -21756509;
	uint16_t x48 = 486U;
	static int32_t t8 = -2;

	t8 = ((x45/(x46%x47))|x48);

	if (t8 != 486) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x53 = -1;
	volatile int8_t x54 = 7;
	volatile uint32_t x55 = 3844568U;
	volatile uint64_t x56 = 1738089705232466647LLU;
	uint64_t t9 = 71427239LLU;

	t9 = ((x53/(x54%x55))|x56);

	if (t9 != 1738089705778924535LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -1;
	static uint64_t x58 = 1285933421133237172LLU;
	int8_t x59 = 5;
	static int8_t x60 = 61;
	volatile uint64_t t10 = 608871454545153LLU;

	t10 = ((x57/(x58%x59))|x60);

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x61 = 21U;
	volatile int16_t x62 = INT16_MIN;
	volatile int8_t x64 = 2;

	t11 = ((x61/(x62%x63))|x64);

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x74 = 247U;
	int64_t x75 = INT64_MIN;
	int16_t x76 = -219;
	int64_t t12 = 108063775831LL;

	t12 = ((x73/(x74%x75))|x76);

	if (t12 != -219LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = -1;
	uint16_t x78 = 6U;
	int8_t x79 = -18;
	int64_t x80 = 656760569630126LL;
	volatile int64_t t13 = -24596766844437LL;

	t13 = ((x77/(x78%x79))|x80);

	if (t13 != 656760569630126LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = -4571833LL;
	uint64_t x82 = 3LLU;
	uint16_t x83 = 20U;
	int64_t x84 = INT64_MIN;
	volatile uint64_t t14 = 1274972747LLU;

	t14 = ((x81/(x82%x83))|x84);

	if (t14 != 15372286728089769069LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -1;
	int32_t x86 = -119;
	volatile int64_t t15 = -31857772LL;

	t15 = ((x85/(x86%x87))|x88);

	if (t15 != 246555LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x90 = UINT8_MAX;
	volatile int64_t x91 = INT64_MIN;
	uint64_t x92 = UINT64_MAX;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = ((x89/(x90%x91))|x92);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -3599LL;
	int64_t x94 = INT64_MIN;
	static int8_t x95 = -15;
	uint64_t x96 = 488901863LLU;
	volatile uint64_t t17 = 453042LLU;

	t17 = ((x93/(x94%x95))|x96);

	if (t17 != 488902119LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MIN;
	uint8_t x98 = 1U;
	int64_t x99 = -207598762LL;
	volatile uint64_t x100 = 922624LLU;
	static volatile uint64_t t18 = 309LLU;

	t18 = ((x97/(x98%x99))|x100);

	if (t18 != 18446744071562990592LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x105 = 25752924150285LLU;
	uint16_t x108 = 8591U;
	static volatile uint64_t t19 = 753576028139LLU;

	t19 = ((x105/(x106%x107))|x108);

	if (t19 != 8591LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x110 = 1U;
	static int8_t x111 = -1;
	int32_t x112 = INT32_MIN;
	uint32_t t20 = UINT32_MAX;

	t20 = ((x109/(x110%x111))|x112);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x113 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	static int32_t x116 = 8214;

	t21 = ((x113/(x114%x115))|x116);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x117 = 16893075LLU;
	uint8_t x118 = 25U;
	uint32_t x119 = 174510U;
	volatile uint8_t x120 = 7U;
	uint64_t t22 = 6LLU;

	t22 = ((x117/(x118%x119))|x120);

	if (t22 != 675727LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = -9040444;
	static volatile uint16_t x130 = 13U;
	uint8_t x131 = 2U;
	static uint32_t x132 = UINT32_MAX;
	static volatile uint32_t t23 = UINT32_MAX;

	t23 = ((x129/(x130%x131))|x132);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x139 = -6810862405107LL;
	volatile uint32_t x140 = 462221391U;
	int64_t t24 = -136428378425LL;

	t24 = ((x137/(x138%x139))|x140);

	if (t24 != -49LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x141 = INT64_MAX;
	uint64_t x142 = 3345293508481LLU;
	uint16_t x143 = 757U;
	static int32_t x144 = 38687896;
	volatile uint64_t t25 = 111238LLU;

	t25 = ((x141/(x142%x143))|x144);

	if (t25 != 86199738667327486LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x153 = -1;
	int8_t x154 = -1;
	static int32_t x155 = -8320228;
	int16_t x156 = -3353;
	static volatile int32_t t26 = -432146599;

	t26 = ((x153/(x154%x155))|x156);

	if (t26 != -3353) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x165 = -83845;
	int8_t x166 = -1;
	int32_t x167 = 34499;
	int64_t x168 = INT64_MIN;
	int64_t t27 = 45256242LL;

	t27 = ((x165/(x166%x167))|x168);

	if (t27 != -9223372036854691963LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x170 = -1;
	int8_t x171 = INT8_MAX;
	int8_t x172 = 10;
	static int32_t t28 = 63815;

	t28 = ((x169/(x170%x171))|x172);

	if (t28 != 11) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x174 = INT16_MIN;
	int64_t x175 = 956207455473425LL;
	int64_t x176 = -1LL;
	int64_t t29 = -146035186301343315LL;

	t29 = ((x173/(x174%x175))|x176);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x182 = -1LL;
	int64_t x183 = INT64_MAX;
	static int16_t x184 = INT16_MAX;
	static int64_t t30 = -371051350LL;

	t30 = ((x181/(x182%x183))|x184);

	if (t30 != 32767LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x185 = INT64_MAX;
	int32_t x186 = INT32_MIN;
	uint32_t x187 = 663121162U;
	int32_t x188 = INT32_MIN;
	volatile int64_t t31 = -1744LL;

	t31 = ((x185/(x186%x187))|x188);

	if (t31 != -1798131904LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x189 = 2U;
	static int8_t x190 = -15;
	int32_t x191 = INT32_MIN;
	static int64_t x192 = 73903550865LL;
	volatile int64_t t32 = -111056175811533128LL;

	t32 = ((x189/(x190%x191))|x192);

	if (t32 != 73903550865LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x193 = 30920U;
	volatile int64_t x195 = -1357527672955561LL;
	volatile int64_t x196 = -806LL;

	t33 = ((x193/(x194%x195))|x196);

	if (t33 != -806LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x197 = 57;
	volatile int32_t x198 = 1093690;
	int8_t x199 = -3;
	int8_t x200 = INT8_MAX;
	volatile int32_t t34 = -3187109;

	t34 = ((x197/(x198%x199))|x200);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x205 = -1LL;
	int32_t x206 = INT32_MIN;

	t35 = ((x205/(x206%x207))|x208);

	if (t35 != -128LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x217 = INT64_MIN;
	volatile int64_t x218 = 90396066LL;
	int8_t x219 = INT8_MAX;
	int64_t t36 = -3772LL;

	t36 = ((x217/(x218%x219))|x220);

	if (t36 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x221 = 28U;
	int64_t x222 = INT64_MIN;
	uint32_t x223 = 1185U;
	int32_t x224 = -1;
	int64_t t37 = 78213728LL;

	t37 = ((x221/(x222%x223))|x224);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int32_t x226 = INT32_MAX;
	uint8_t x228 = 4U;
	static volatile int32_t t38 = 298812;

	t38 = ((x225/(x226%x227))|x228);

	if (t38 != 724) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x229 = -30499973;
	int8_t x230 = INT8_MIN;
	static volatile int32_t x231 = INT32_MIN;
	uint32_t x232 = 416U;
	volatile uint32_t t39 = 32U;

	t39 = ((x229/(x230%x231))|x232);

	if (t39 != 238569U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x237 = 0;
	volatile int8_t x238 = 2;
	int8_t x239 = INT8_MIN;
	volatile int32_t t40 = INT32_MIN;

	t40 = ((x237/(x238%x239))|x240);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x241 = UINT16_MAX;
	uint8_t x242 = 101U;
	volatile int8_t x243 = INT8_MAX;
	volatile int64_t x244 = INT64_MIN;
	volatile int64_t t41 = 2LL;

	t41 = ((x241/(x242%x243))|x244);

	if (t41 != -9223372036854775160LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x245 = -1;
	uint16_t x246 = UINT16_MAX;
	uint8_t x247 = 22U;
	volatile int64_t x248 = 82277107656LL;

	t42 = ((x245/(x246%x247))|x248);

	if (t42 != 82277107656LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x261 = 23384U;
	static int32_t x262 = INT32_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	int8_t x264 = -1;

	t43 = ((x261/(x262%x263))|x264);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x269 = 0;
	int32_t x270 = 69728;
	int64_t x271 = 274754871414LL;
	volatile uint8_t x272 = 55U;
	volatile int64_t t44 = -7783169030908684LL;

	t44 = ((x269/(x270%x271))|x272);

	if (t44 != 55LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x273 = 10LLU;
	volatile int32_t x276 = INT32_MAX;
	volatile uint64_t t45 = 43081124502790LLU;

	t45 = ((x273/(x274%x275))|x276);

	if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x277 = INT32_MIN;
	uint8_t x278 = 9U;
	uint8_t x279 = UINT8_MAX;
	uint32_t x280 = 41341316U;

	t46 = ((x277/(x278%x279))|x280);

	if (t46 != 4093107702U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x281 = INT32_MAX;
	uint64_t x283 = UINT64_MAX;
	static uint64_t t47 = 559982420822308LLU;

	t47 = ((x281/(x282%x283))|x284);

	if (t47 != 113LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x285 = INT32_MIN;
	static volatile uint32_t x287 = UINT32_MAX;
	int16_t x288 = -5144;
	volatile uint32_t t48 = 531U;

	t48 = ((x285/(x286%x287))|x288);

	if (t48 != 4294962154U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x305 = INT32_MAX;
	int32_t x306 = INT32_MIN;
	static uint16_t x307 = 54U;
	int64_t x308 = -1LL;
	int64_t t49 = -502321285183301056LL;

	t49 = ((x305/(x306%x307))|x308);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x309 = 73U;
	static int8_t x310 = INT8_MAX;
	volatile uint32_t x312 = 48929604U;
	uint32_t t50 = 66U;

	t50 = ((x309/(x310%x311))|x312);

	if (t50 != 48929604U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x317 = -1;
	uint64_t x318 = 102790LLU;
	int32_t x320 = INT32_MIN;
	uint64_t t51 = 42460500759161030LLU;

	t51 = ((x317/(x318%x319))|x320);

	if (t51 != 18446744073289038425LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x321 = 11061U;
	volatile int16_t x322 = -1;
	volatile int8_t x323 = INT8_MIN;
	uint64_t x324 = 258632269694575LLU;
	volatile uint64_t t52 = 103683855575LLU;

	t52 = ((x321/(x322%x323))|x324);

	if (t52 != 258632269694575LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x325 = 3U;
	uint32_t x326 = UINT32_MAX;
	static int32_t x327 = INT32_MAX;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t53 = -468704LL;

	t53 = ((x325/(x326%x327))|x328);

	if (t53 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x329 = -70540857647LL;
	int32_t x330 = INT32_MIN;
	static int64_t t54 = 397LL;

	t54 = ((x329/(x330%x331))|x332);

	if (t54 != -30569LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x335 = INT32_MAX;
	volatile int32_t t55 = 789092119;

	t55 = ((x333/(x334%x335))|x336);

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x337 = 14346404879748090LL;
	int32_t x338 = -1;
	uint64_t x339 = 155759LLU;

	t56 = ((x337/(x338%x339))|x340);

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x341 = -1;
	int64_t x342 = -2901LL;
	volatile uint32_t x343 = 750388U;
	static int8_t x344 = INT8_MAX;
	int64_t t57 = 36809467006342284LL;

	t57 = ((x341/(x342%x343))|x344);

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x346 = 364U;
	volatile uint32_t x347 = 10430U;
	uint32_t x348 = 1U;
	uint32_t t58 = 2U;

	t58 = ((x345/(x346%x347))|x348);

	if (t58 != 11799361U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x349 = INT16_MAX;
	int32_t x351 = INT32_MAX;
	volatile int64_t t59 = 101552303011567LL;

	t59 = ((x349/(x350%x351))|x352);

	if (t59 != 65535LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x353 = INT32_MIN;
	uint8_t x354 = 2U;
	int16_t x355 = INT16_MAX;
	int8_t x356 = -1;
	int32_t t60 = 15654246;

	t60 = ((x353/(x354%x355))|x356);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x365 = 7197798940732638870LLU;
	int16_t x366 = -1;
	volatile int64_t x367 = INT64_MAX;
	uint64_t x368 = 183LLU;
	uint64_t t61 = 1505234495789692LLU;

	t61 = ((x365/(x366%x367))|x368);

	if (t61 != 183LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x371 = 43U;
	static volatile int64_t x372 = INT64_MIN;
	volatile int64_t t62 = -83LL;

	t62 = ((x369/(x370%x371))|x372);

	if (t62 != -9223372036675818838LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = -227;
	int32_t x375 = 9144;
	int8_t x376 = -1;
	static int32_t t63 = 189;

	t63 = ((x373/(x374%x375))|x376);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x377 = INT64_MIN;
	volatile uint32_t x378 = UINT32_MAX;
	int8_t x379 = -7;
	int64_t x380 = INT64_MIN;

	t64 = ((x377/(x378%x379))|x380);

	if (t64 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x385 = -967;
	int16_t x386 = INT16_MIN;
	int8_t x387 = 30;
	int16_t x388 = 1;
	volatile int32_t t65 = 1284162;

	t65 = ((x385/(x386%x387))|x388);

	if (t65 != 121) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x389 = 809939U;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x392 = 27U;
	static volatile uint32_t t66 = 3474529U;

	t66 = ((x389/(x390%x391))|x392);

	if (t66 != 27U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x393 = INT8_MAX;
	volatile int16_t x394 = INT16_MIN;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	uint32_t t67 = 27U;

	t67 = ((x393/(x394%x395))|x396);

	if (t67 != 4294967168U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x401 = -1652;
	uint16_t x402 = UINT16_MAX;
	uint32_t x403 = UINT32_MAX;
	uint32_t t68 = 8088U;

	t68 = ((x401/(x402%x403))|x404);

	if (t68 != 4294963469U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x405 = -1;
	static uint16_t x406 = UINT16_MAX;
	static int64_t x407 = 181196LL;
	int32_t x408 = INT32_MIN;
	int64_t t69 = -27091737LL;

	t69 = ((x405/(x406%x407))|x408);

	if (t69 != -2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x409 = 21045LL;
	uint16_t x410 = UINT16_MAX;
	volatile int64_t x411 = INT64_MIN;
	volatile int64_t t70 = -28419LL;

	t70 = ((x409/(x410%x411))|x412);

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x417 = UINT64_MAX;
	int8_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = INT8_MIN;

	t71 = ((x417/(x418%x419))|x420);

	if (t71 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x425 = 2U;
	volatile uint16_t x426 = 9542U;
	volatile uint8_t x427 = 3U;
	uint8_t x428 = 3U;
	uint32_t t72 = 18U;

	t72 = ((x425/(x426%x427))|x428);

	if (t72 != 3U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x429 = -464205540655141723LL;
	static int8_t x430 = 33;
	int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MIN;
	static int64_t t73 = 2012594755384819214LL;

	t73 = ((x429/(x430%x431))|x432);

	if (t73 != -14066834565307324LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x433 = INT8_MIN;
	int32_t x434 = -1;
	uint16_t x435 = 829U;
	int8_t x436 = -1;
	int32_t t74 = 0;

	t74 = ((x433/(x434%x435))|x436);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x438 = 831618;
	volatile int64_t x439 = 26556468LL;
	static int16_t x440 = -1;
	static int64_t t75 = -84386LL;

	t75 = ((x437/(x438%x439))|x440);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x441 = -1;
	volatile int16_t x442 = 5269;
	volatile uint16_t x443 = UINT16_MAX;

	t76 = ((x441/(x442%x443))|x444);

	if (t76 != 14) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x446 = INT16_MIN;
	int16_t x447 = 109;
	uint8_t x448 = 1U;
	volatile int32_t t77 = 452;

	t77 = ((x445/(x446%x447))|x448);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x449 = -1;
	uint32_t x450 = 2U;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x449/(x450%x451))|x452);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x453 = INT16_MIN;
	static int64_t x455 = INT64_MAX;
	int32_t x456 = -1;
	int64_t t79 = 1LL;

	t79 = ((x453/(x454%x455))|x456);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x461 = UINT64_MAX;
	int32_t x462 = INT32_MIN;
	int32_t x463 = 257033;
	uint32_t x464 = 1964103U;
	static volatile uint64_t t80 = 3461612771341LLU;

	t80 = ((x461/(x462%x463))|x464);

	if (t80 != 1964103LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x466 = INT16_MIN;
	static uint64_t x468 = 26050LLU;
	volatile uint64_t t81 = 506252588LLU;

	t81 = ((x465/(x466%x467))|x468);

	if (t81 != 26050LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x473 = UINT16_MAX;
	static int16_t x474 = -1;
	static int16_t x475 = 27;
	volatile uint32_t t82 = 3U;

	t82 = ((x473/(x474%x475))|x476);

	if (t82 != 4294961547U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x477 = INT32_MIN;
	static uint8_t x478 = 1U;
	volatile uint64_t x479 = UINT64_MAX;
	uint64_t x480 = 15LLU;
	uint64_t t83 = 25LLU;

	t83 = ((x477/(x478%x479))|x480);

	if (t83 != 18446744071562067983LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x481 = -1;
	volatile int32_t x482 = -5;
	static volatile int8_t x483 = INT8_MIN;
	int8_t x484 = -1;
	int32_t t84 = 1;

	t84 = ((x481/(x482%x483))|x484);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x485 = INT8_MIN;
	int32_t x486 = INT32_MIN;
	int64_t x488 = INT64_MAX;
	int64_t t85 = INT64_MAX;

	t85 = ((x485/(x486%x487))|x488);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x489 = -10;
	int16_t x490 = -1;
	int8_t x491 = INT8_MIN;
	int32_t x492 = -1;
	static int32_t t86 = 2756;

	t86 = ((x489/(x490%x491))|x492);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x501 = -569896431LL;
	int8_t x502 = -1;
	uint8_t x504 = 0U;
	int64_t t87 = -1707539LL;

	t87 = ((x501/(x502%x503))|x504);

	if (t87 != 569896431LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x505 = 0U;
	int16_t x506 = INT16_MIN;
	static uint8_t x507 = 7U;
	volatile int64_t x508 = -7820937LL;
	volatile int64_t t88 = -6504613304690320LL;

	t88 = ((x505/(x506%x507))|x508);

	if (t88 != -7820937LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x509 = -5684;
	volatile int8_t x510 = -58;
	uint16_t x511 = UINT16_MAX;
	int8_t x512 = 1;
	volatile int32_t t89 = -1;

	t89 = ((x509/(x510%x511))|x512);

	if (t89 != 99) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x518 = INT16_MIN;
	uint64_t x519 = 22LLU;
	int32_t x520 = -1;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = ((x517/(x518%x519))|x520);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x521 = INT16_MAX;
	int8_t x522 = INT8_MAX;
	volatile uint8_t x523 = 6U;
	int16_t x524 = INT16_MIN;

	t91 = ((x521/(x522%x523))|x524);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x529 = -1;
	int8_t x530 = INT8_MIN;
	volatile uint64_t x531 = 41LLU;
	int64_t x532 = INT64_MAX;
	static uint64_t t92 = 35569LLU;

	t92 = ((x529/(x530%x531))|x532);

	if (t92 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x533 = 6;
	static int32_t x535 = INT32_MAX;
	uint8_t x536 = 0U;

	t93 = ((x533/(x534%x535))|x536);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x537 = INT32_MIN;
	volatile int16_t x538 = INT16_MIN;
	uint32_t x540 = UINT32_MAX;

	t94 = ((x537/(x538%x539))|x540);

	if (t94 != UINT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x541 = 168;
	uint32_t x542 = 15690557U;
	int32_t x543 = INT32_MIN;
	volatile uint32_t t95 = 1474U;

	t95 = ((x541/(x542%x543))|x544);

	if (t95 != 753U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x545 = 376690080U;
	static uint16_t x546 = 1U;
	volatile int16_t x547 = INT16_MIN;
	uint32_t x548 = UINT32_MAX;
	static volatile uint32_t t96 = UINT32_MAX;

	t96 = ((x545/(x546%x547))|x548);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x549 = 2U;
	static int8_t x550 = -1;
	uint8_t x551 = UINT8_MAX;
	volatile int8_t x552 = INT8_MIN;
	static uint32_t t97 = 857701U;

	t97 = ((x549/(x550%x551))|x552);

	if (t97 != 4294967168U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 9U;
	uint32_t x563 = 353U;
	int32_t x564 = INT32_MAX;
	static volatile int64_t t98 = -3LL;

	t98 = ((x561/(x562%x563))|x564);

	if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x569 = INT32_MAX;
	uint64_t x570 = 384767197994808LLU;
	int64_t x571 = -1LL;
	volatile int32_t x572 = INT32_MIN;
	volatile uint64_t t99 = 42882759583LLU;

	t99 = ((x569/(x570%x571))|x572);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

