#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x4 = 425987491;
volatile int32_t t0 = -2;
int64_t x10 = 18340853966873LL;
int8_t x17 = 0;
int16_t x21 = -1;
uint16_t x25 = UINT16_MAX;
static volatile int32_t t5 = -890;
static int64_t x57 = INT64_MAX;
static volatile int32_t x62 = -57;
int16_t x74 = -1;
uint32_t x82 = 1663806975U;
uint32_t x94 = 1377856832U;
volatile int32_t t15 = -57874963;
uint64_t x105 = 11382614561534LLU;
volatile int32_t t16 = 975;
volatile int32_t x110 = 11374;
volatile int32_t t17 = -373963347;
static volatile int32_t t18 = 697538;
int64_t x128 = 5414901737331755LL;
int32_t t19 = 797;
uint16_t x132 = 16U;
int16_t x136 = INT16_MIN;
int16_t x146 = INT16_MAX;
static volatile int32_t x156 = INT32_MAX;
static int8_t x161 = 0;
int64_t x162 = -20274355688844LL;
int32_t t26 = -12610;
volatile int16_t x181 = INT16_MIN;
volatile int32_t x182 = -4249606;
static uint32_t x185 = 13U;
static int8_t x187 = INT8_MIN;
uint8_t x190 = 5U;
static volatile int32_t t31 = 710564;
volatile int32_t x203 = INT32_MAX;
int32_t x205 = -1;
volatile int64_t x208 = -1LL;
int32_t t34 = 35;
static uint64_t x216 = UINT64_MAX;
int32_t t35 = 1503;
uint8_t x228 = UINT8_MAX;
int32_t x229 = 33212945;
int8_t x234 = 1;
int8_t x237 = -1;
volatile int64_t x238 = INT64_MAX;
uint16_t x240 = 94U;
int16_t x247 = 9008;
volatile int32_t t41 = 0;
int32_t t42 = -31729951;
int64_t x260 = INT64_MAX;
int64_t x271 = INT64_MIN;
volatile int64_t x274 = INT64_MIN;
volatile int32_t t46 = -255831;
static int16_t x284 = -1;
uint8_t x294 = UINT8_MAX;
int8_t x296 = INT8_MIN;
static volatile int32_t t51 = -1;
int32_t x301 = INT32_MIN;
uint32_t x305 = UINT32_MAX;
volatile int32_t t54 = -3124090;
uint32_t x322 = 85510383U;
uint64_t x323 = UINT64_MAX;
int16_t x327 = -14;
static int32_t t58 = 13052;
volatile int32_t x329 = INT32_MIN;
uint8_t x335 = 33U;
uint32_t x346 = 6U;
int32_t x347 = INT32_MIN;
int32_t t64 = 406737;
static volatile uint32_t x355 = UINT32_MAX;
static int32_t t66 = -15328;
int8_t x365 = INT8_MIN;
int8_t x369 = INT8_MIN;
int32_t x370 = INT32_MAX;
volatile uint16_t x372 = UINT16_MAX;
volatile int32_t t68 = -24718;
volatile int16_t x373 = INT16_MIN;
static volatile int64_t x376 = 1044146207LL;
volatile int16_t x391 = INT16_MIN;
static uint16_t x392 = 21414U;
static uint8_t x402 = 51U;
int32_t x417 = -36;
int16_t x433 = INT16_MIN;
int32_t t77 = 29655;
int16_t x442 = -7811;
static uint8_t x443 = 10U;
int64_t x461 = -10288477643LL;
int8_t x475 = -27;
static int8_t x476 = INT8_MIN;
int8_t x477 = -1;
int32_t t83 = 452507159;
volatile int64_t x508 = INT64_MAX;
volatile int32_t t88 = 27708;
int32_t x518 = INT32_MAX;
volatile int16_t x519 = -65;
volatile uint8_t x520 = UINT8_MAX;
int8_t x527 = INT8_MAX;
int32_t x529 = -7742;
uint32_t x531 = 13U;
volatile int32_t x532 = 1;
int32_t t91 = -93048;
int8_t x536 = -1;
uint32_t x543 = 20U;
static int32_t x546 = 25;
uint8_t x548 = 88U;
int16_t x549 = INT16_MIN;
uint16_t x550 = 430U;
uint8_t x551 = 50U;
int16_t x563 = INT16_MIN;
uint64_t x569 = UINT64_MAX;
static volatile uint8_t x570 = 86U;
int32_t x577 = -1;


void f0(void) {
	static int32_t x1 = -1;
	static int64_t x2 = 434673207997786LL;
	int8_t x3 = 3;

	t0 = ((x1/(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile uint64_t x6 = UINT64_MAX;
	int64_t x7 = INT64_MIN;
	static uint16_t x8 = 1641U;
	int32_t t1 = 61520;

	t1 = ((x5/(x6%x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 5896U;
	uint32_t x11 = 36439467U;
	int16_t x12 = -1;
	int32_t t2 = -642988;

	t2 = ((x9/(x10%x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = 643865141LLU;
	static int64_t x19 = INT64_MAX;
	uint64_t x20 = 7352453961909LLU;
	int32_t t3 = -21159;

	t3 = ((x17/(x18%x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x22 = INT32_MIN;
	uint32_t x23 = UINT32_MAX;
	static uint16_t x24 = 23U;
	int32_t t4 = -24;

	t4 = ((x21/(x22%x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = 24U;
	static int64_t x27 = -3843123LL;
	int64_t x28 = 6262LL;

	t5 = ((x25/(x26%x27))<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = -138LL;
	int64_t x31 = INT64_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	static volatile int32_t t6 = -2;

	t6 = ((x29/(x30%x31))<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 13682LLU;
	uint8_t x34 = UINT8_MAX;
	uint16_t x35 = 1093U;
	uint32_t x36 = 26U;
	int32_t t7 = -148890856;

	t7 = ((x33/(x34%x35))<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x58 = INT64_MAX;
	static uint32_t x59 = 13671U;
	int64_t x60 = INT64_MIN;
	volatile int32_t t8 = 290;

	t8 = ((x57/(x58%x59))<x60);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x61 = -458948LL;
	static int32_t x63 = INT32_MIN;
	int8_t x64 = 7;
	volatile int32_t t9 = 0;

	t9 = ((x61/(x62%x63))<x64);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x65 = -1;
	uint8_t x66 = 21U;
	static int32_t x67 = INT32_MIN;
	int8_t x68 = -26;
	int32_t t10 = 339336;

	t10 = ((x65/(x66%x67))<x68);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x75 = 2U;
	int64_t x76 = INT64_MIN;
	int32_t t11 = -12;

	t11 = ((x73/(x74%x75))<x76);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x81 = 275U;
	volatile int32_t x83 = -1;
	uint16_t x84 = 3U;
	int32_t t12 = 63179167;

	t12 = ((x81/(x82%x83))<x84);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x93 = 15U;
	volatile int16_t x95 = -1581;
	int64_t x96 = INT64_MIN;
	int32_t t13 = 6587;

	t13 = ((x93/(x94%x95))<x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	static int8_t x99 = -2;
	static int16_t x100 = -59;
	static volatile int32_t t14 = 9450860;

	t14 = ((x97/(x98%x99))<x100);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x101 = INT8_MIN;
	int16_t x102 = -13366;
	static uint64_t x103 = UINT64_MAX;
	int64_t x104 = -1LL;

	t15 = ((x101/(x102%x103))<x104);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x106 = 1064;
	uint32_t x107 = UINT32_MAX;
	static volatile int32_t x108 = 239187;

	t16 = ((x105/(x106%x107))<x108);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x109 = -1;
	int16_t x111 = -7416;
	uint32_t x112 = UINT32_MAX;

	t17 = ((x109/(x110%x111))<x112);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x121 = 51;
	volatile uint64_t x122 = UINT64_MAX;
	uint64_t x123 = 1273794365LLU;
	uint32_t x124 = UINT32_MAX;

	t18 = ((x121/(x122%x123))<x124);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x126 = 8049;
	int16_t x127 = INT16_MIN;

	t19 = ((x125/(x126%x127))<x128);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x129 = INT64_MAX;
	int8_t x130 = -2;
	volatile int8_t x131 = INT8_MIN;
	int32_t t20 = -1800;

	t20 = ((x129/(x130%x131))<x132);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x133 = 138158517632797LL;
	int8_t x134 = -30;
	static volatile int32_t x135 = 18526510;
	static volatile int32_t t21 = 11;

	t21 = ((x133/(x134%x135))<x136);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x141 = INT16_MAX;
	static uint64_t x142 = UINT64_MAX;
	volatile int16_t x143 = 205;
	int32_t x144 = INT32_MIN;
	int32_t t22 = 429;

	t22 = ((x141/(x142%x143))<x144);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x145 = 26960749U;
	int32_t x147 = -96051;
	static int64_t x148 = -1LL;
	static int32_t t23 = 293108;

	t23 = ((x145/(x146%x147))<x148);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = 0;
	int16_t x154 = INT16_MIN;
	uint8_t x155 = 51U;
	static volatile int32_t t24 = 51800;

	t24 = ((x153/(x154%x155))<x156);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x163 = INT64_MIN;
	int16_t x164 = -3210;
	static int32_t t25 = -755400;

	t25 = ((x161/(x162%x163))<x164);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x165 = 54U;
	int32_t x166 = 5871630;
	volatile uint64_t x167 = 84772LLU;
	uint16_t x168 = 1023U;

	t26 = ((x165/(x166%x167))<x168);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x169 = 14468U;
	static volatile int32_t x170 = INT32_MAX;
	uint8_t x171 = UINT8_MAX;
	uint64_t x172 = 503421839604659LLU;
	int32_t t27 = 3442751;

	t27 = ((x169/(x170%x171))<x172);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x183 = INT64_MIN;
	int8_t x184 = INT8_MIN;
	static volatile int32_t t28 = -7;

	t28 = ((x181/(x182%x183))<x184);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x186 = UINT64_MAX;
	uint16_t x188 = UINT16_MAX;
	int32_t t29 = -6176445;

	t29 = ((x185/(x186%x187))<x188);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x189 = -248;
	static uint64_t x191 = 75361505793691755LLU;
	static uint64_t x192 = UINT64_MAX;
	static int32_t t30 = 8185;

	t30 = ((x189/(x190%x191))<x192);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x193 = -10;
	static int32_t x194 = -3;
	volatile uint16_t x195 = 274U;
	uint8_t x196 = 2U;

	t31 = ((x193/(x194%x195))<x196);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x197 = 3U;
	int16_t x198 = INT16_MIN;
	uint16_t x199 = 115U;
	int16_t x200 = INT16_MIN;
	int32_t t32 = 230;

	t32 = ((x197/(x198%x199))<x200);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = 61U;
	static uint16_t x204 = UINT16_MAX;
	volatile int32_t t33 = -58476154;

	t33 = ((x201/(x202%x203))<x204);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x206 = INT16_MAX;
	static int16_t x207 = INT16_MIN;

	t34 = ((x205/(x206%x207))<x208);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = 253776U;
	uint16_t x215 = UINT16_MAX;

	t35 = ((x213/(x214%x215))<x216);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x221 = 917U;
	uint16_t x222 = UINT16_MAX;
	int16_t x223 = INT16_MAX;
	uint32_t x224 = 50502399U;
	int32_t t36 = 191280;

	t36 = ((x221/(x222%x223))<x224);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x225 = INT16_MIN;
	static int64_t x226 = INT64_MAX;
	int64_t x227 = 5910261030351LL;
	static int32_t t37 = -398;

	t37 = ((x225/(x226%x227))<x228);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x230 = 944395542616566LL;
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MAX;
	int32_t t38 = 479143;

	t38 = ((x229/(x230%x231))<x232);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x233 = INT32_MAX;
	volatile int8_t x235 = INT8_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t39 = -526498;

	t39 = ((x233/(x234%x235))<x236);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x239 = UINT8_MAX;
	volatile int32_t t40 = -438;

	t40 = ((x237/(x238%x239))<x240);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x245 = 3U;
	int16_t x246 = INT16_MAX;
	int16_t x248 = INT16_MAX;

	t41 = ((x245/(x246%x247))<x248);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x249 = 888506LL;
	uint64_t x250 = 223135188349LLU;
	int64_t x251 = INT64_MIN;
	static uint64_t x252 = UINT64_MAX;

	t42 = ((x249/(x250%x251))<x252);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x253 = 1;
	int8_t x254 = -3;
	uint64_t x255 = 9038889680LLU;
	uint16_t x256 = 21U;
	static int32_t t43 = -11;

	t43 = ((x253/(x254%x255))<x256);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x257 = 1;
	uint16_t x258 = 16U;
	volatile int32_t x259 = INT32_MAX;
	volatile int32_t t44 = 20186530;

	t44 = ((x257/(x258%x259))<x260);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MAX;
	int16_t x272 = INT16_MIN;
	static int32_t t45 = -62916301;

	t45 = ((x269/(x270%x271))<x272);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x273 = 25U;
	int32_t x275 = 65621;
	static int16_t x276 = INT16_MIN;

	t46 = ((x273/(x274%x275))<x276);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x277 = 3159;
	int8_t x278 = 5;
	uint8_t x279 = 14U;
	int32_t x280 = INT32_MIN;
	int32_t t47 = -24;

	t47 = ((x277/(x278%x279))<x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x281 = -1;
	uint32_t x282 = 22927995U;
	volatile int64_t x283 = INT64_MAX;
	int32_t t48 = -1;

	t48 = ((x281/(x282%x283))<x284);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x289 = 15441394U;
	static int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	int64_t x292 = 2673770085121869681LL;
	int32_t t49 = 5386109;

	t49 = ((x289/(x290%x291))<x292);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x293 = -1;
	int16_t x295 = 21;
	int32_t t50 = 252;

	t50 = ((x293/(x294%x295))<x296);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x297 = UINT32_MAX;
	uint16_t x298 = 991U;
	int32_t x299 = INT32_MIN;
	int64_t x300 = INT64_MIN;

	t51 = ((x297/(x298%x299))<x300);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x302 = 8772U;
	int64_t x303 = INT64_MAX;
	int64_t x304 = INT64_MIN;
	int32_t t52 = 0;

	t52 = ((x301/(x302%x303))<x304);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x306 = INT16_MIN;
	int64_t x307 = 1792753394443552LL;
	volatile int8_t x308 = INT8_MIN;
	volatile int32_t t53 = 198;

	t53 = ((x305/(x306%x307))<x308);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x309 = -1;
	int64_t x310 = -1LL;
	int64_t x311 = INT64_MAX;
	int32_t x312 = -1;

	t54 = ((x309/(x310%x311))<x312);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x313 = INT32_MIN;
	static int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MIN;
	volatile int8_t x316 = 11;
	volatile int32_t t55 = 99176433;

	t55 = ((x313/(x314%x315))<x316);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x317 = 375568891LLU;
	static uint32_t x318 = 2290638U;
	uint8_t x319 = 34U;
	int64_t x320 = INT64_MIN;
	static volatile int32_t t56 = -531027588;

	t56 = ((x317/(x318%x319))<x320);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x321 = -2;
	uint32_t x324 = 46U;
	int32_t t57 = -2283883;

	t57 = ((x321/(x322%x323))<x324);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x325 = 2407;
	int32_t x326 = INT32_MIN;
	uint16_t x328 = UINT16_MAX;

	t58 = ((x325/(x326%x327))<x328);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x330 = 236869622LLU;
	volatile int32_t x331 = 12;
	static int16_t x332 = INT16_MAX;
	static int32_t t59 = 802057;

	t59 = ((x329/(x330%x331))<x332);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x333 = -225;
	int32_t x334 = INT32_MIN;
	uint8_t x336 = UINT8_MAX;
	volatile int32_t t60 = -1687757;

	t60 = ((x333/(x334%x335))<x336);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x337 = INT32_MIN;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MIN;
	uint16_t x340 = 228U;
	volatile int32_t t61 = -5;

	t61 = ((x337/(x338%x339))<x340);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x341 = 502701746U;
	static int32_t x342 = INT32_MAX;
	volatile int8_t x343 = INT8_MAX;
	int64_t x344 = -62LL;
	volatile int32_t t62 = -287111562;

	t62 = ((x341/(x342%x343))<x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x345 = -1LL;
	volatile int64_t x348 = INT64_MAX;
	volatile int32_t t63 = -673;

	t63 = ((x345/(x346%x347))<x348);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x349 = -1;
	volatile int8_t x350 = INT8_MIN;
	static uint32_t x351 = UINT32_MAX;
	uint64_t x352 = UINT64_MAX;

	t64 = ((x349/(x350%x351))<x352);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x353 = -1;
	volatile int8_t x354 = -46;
	volatile uint64_t x356 = 40686242214LLU;
	int32_t t65 = -148;

	t65 = ((x353/(x354%x355))<x356);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x361 = 177944217U;
	int16_t x362 = INT16_MIN;
	uint16_t x363 = 88U;
	int16_t x364 = 1778;

	t66 = ((x361/(x362%x363))<x364);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x366 = 4U;
	int64_t x367 = -54241880756838LL;
	uint16_t x368 = 3563U;
	volatile int32_t t67 = 10001;

	t67 = ((x365/(x366%x367))<x368);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x371 = INT16_MIN;

	t68 = ((x369/(x370%x371))<x372);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x374 = INT32_MIN;
	volatile uint8_t x375 = 3U;
	volatile int32_t t69 = 0;

	t69 = ((x373/(x374%x375))<x376);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = 23;
	static uint64_t x383 = 6546LLU;
	volatile uint64_t x384 = UINT64_MAX;
	static int32_t t70 = 125;

	t70 = ((x381/(x382%x383))<x384);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x389 = INT16_MIN;
	uint32_t x390 = 24231395U;
	static volatile int32_t t71 = -43477;

	t71 = ((x389/(x390%x391))<x392);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x393 = 0U;
	volatile uint32_t x394 = 2720511U;
	volatile uint8_t x395 = UINT8_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t72 = 2518;

	t72 = ((x393/(x394%x395))<x396);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x401 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	static uint32_t x404 = 95175974U;
	volatile int32_t t73 = 51;

	t73 = ((x401/(x402%x403))<x404);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = 145433LL;
	volatile int8_t x410 = -1;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = -10128;
	int32_t t74 = 1;

	t74 = ((x409/(x410%x411))<x412);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x418 = INT64_MAX;
	volatile uint32_t x419 = 30951U;
	int64_t x420 = INT64_MAX;
	int32_t t75 = -15;

	t75 = ((x417/(x418%x419))<x420);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x434 = INT32_MAX;
	int32_t x435 = INT32_MIN;
	static uint64_t x436 = 1564078855653420LLU;
	volatile int32_t t76 = 19991149;

	t76 = ((x433/(x434%x435))<x436);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x437 = 477953U;
	static volatile uint32_t x438 = 60618035U;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MIN;

	t77 = ((x437/(x438%x439))<x440);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x441 = INT32_MAX;
	int16_t x444 = INT16_MAX;
	volatile int32_t t78 = 202522;

	t78 = ((x441/(x442%x443))<x444);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x445 = 21217521U;
	volatile int8_t x446 = -1;
	uint16_t x447 = 15U;
	volatile uint32_t x448 = 23U;
	volatile int32_t t79 = -1;

	t79 = ((x445/(x446%x447))<x448);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x453 = INT16_MAX;
	int32_t x454 = INT32_MAX;
	int16_t x455 = INT16_MIN;
	int8_t x456 = INT8_MAX;
	volatile int32_t t80 = 242;

	t80 = ((x453/(x454%x455))<x456);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x462 = UINT16_MAX;
	static int8_t x463 = INT8_MIN;
	uint16_t x464 = 7U;
	int32_t t81 = -3916830;

	t81 = ((x461/(x462%x463))<x464);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x473 = 9087U;
	uint16_t x474 = UINT16_MAX;
	static volatile int32_t t82 = -57503;

	t82 = ((x473/(x474%x475))<x476);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x478 = -1;
	uint32_t x479 = 99563222U;
	int64_t x480 = INT64_MAX;

	t83 = ((x477/(x478%x479))<x480);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x481 = INT16_MAX;
	uint8_t x482 = 28U;
	static volatile uint64_t x483 = 2699565170334LLU;
	static volatile uint32_t x484 = 4064049U;
	volatile int32_t t84 = 5;

	t84 = ((x481/(x482%x483))<x484);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x489 = INT8_MIN;
	static int16_t x490 = 763;
	uint64_t x491 = 40527723646LLU;
	int32_t x492 = INT32_MAX;
	volatile int32_t t85 = -615521;

	t85 = ((x489/(x490%x491))<x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x501 = 21493974908316LLU;
	int64_t x502 = 915424692870431LL;
	uint16_t x503 = 6U;
	uint8_t x504 = 111U;
	int32_t t86 = 1;

	t86 = ((x501/(x502%x503))<x504);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x505 = 53382038LLU;
	int64_t x506 = 57516607LL;
	volatile int64_t x507 = INT64_MIN;
	int32_t t87 = -4;

	t87 = ((x505/(x506%x507))<x508);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x509 = INT32_MIN;
	static int64_t x510 = -1809397876427LL;
	volatile int32_t x511 = 36;
	static volatile int16_t x512 = INT16_MIN;

	t88 = ((x509/(x510%x511))<x512);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x517 = 1U;
	volatile int32_t t89 = 105;

	t89 = ((x517/(x518%x519))<x520);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x525 = 0U;
	volatile int8_t x526 = INT8_MIN;
	static volatile uint32_t x528 = 15152U;
	int32_t t90 = -1;

	t90 = ((x525/(x526%x527))<x528);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x530 = 1U;

	t91 = ((x529/(x530%x531))<x532);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x533 = -66LL;
	int16_t x534 = -823;
	static uint64_t x535 = 385LLU;
	int32_t t92 = -2701;

	t92 = ((x533/(x534%x535))<x536);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x541 = -28;
	uint64_t x542 = 3733347927852LLU;
	volatile int64_t x544 = 246281482168LL;
	volatile int32_t t93 = -7783455;

	t93 = ((x541/(x542%x543))<x544);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x545 = 0U;
	int16_t x547 = INT16_MAX;
	static volatile int32_t t94 = -3952;

	t94 = ((x545/(x546%x547))<x548);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x552 = UINT32_MAX;
	static volatile int32_t t95 = -416;

	t95 = ((x549/(x550%x551))<x552);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x557 = 1;
	int32_t x558 = INT32_MAX;
	uint32_t x559 = UINT32_MAX;
	int16_t x560 = INT16_MIN;
	volatile int32_t t96 = -1618159;

	t96 = ((x557/(x558%x559))<x560);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x561 = 39U;
	volatile uint64_t x562 = 2406342060056549859LLU;
	static uint16_t x564 = 15768U;
	volatile int32_t t97 = 101;

	t97 = ((x561/(x562%x563))<x564);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x571 = UINT32_MAX;
	uint16_t x572 = UINT16_MAX;
	int32_t t98 = -280220398;

	t98 = ((x569/(x570%x571))<x572);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x578 = -708;
	volatile int16_t x579 = -79;
	static uint16_t x580 = 1932U;
	volatile int32_t t99 = 13;

	t99 = ((x577/(x578%x579))<x580);

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

