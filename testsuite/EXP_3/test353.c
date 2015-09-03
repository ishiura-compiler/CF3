#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 871;
int8_t x10 = 0;
static volatile int16_t x27 = INT16_MIN;
volatile int8_t x36 = -4;
int32_t x37 = INT32_MIN;
volatile uint64_t x51 = 141667608LLU;
uint16_t x53 = 10881U;
volatile int32_t t10 = -6010516;
int8_t x59 = -11;
int64_t x62 = -175962LL;
uint16_t x65 = 11U;
int8_t x98 = INT8_MIN;
int8_t x102 = -11;
int32_t x103 = INT32_MIN;
uint64_t t18 = 67179309832LLU;
int8_t x105 = INT8_MAX;
int16_t x111 = INT16_MIN;
static int32_t x117 = -1;
volatile int32_t t21 = -5;
volatile uint64_t t22 = 23930442728LLU;
uint8_t x153 = UINT8_MAX;
volatile int64_t t25 = -28375767657LL;
int16_t x185 = 1;
static volatile uint32_t x189 = 9425164U;
uint16_t x203 = 13724U;
volatile uint64_t t30 = 56527440966091LLU;
uint16_t x215 = 6U;
uint64_t x220 = UINT64_MAX;
int8_t x234 = -1;
int16_t x238 = INT16_MIN;
int32_t x243 = INT32_MIN;
volatile uint32_t x244 = 436064245U;
uint32_t x248 = UINT32_MAX;
volatile uint64_t t38 = 1150745693714935717LLU;
int16_t x255 = INT16_MIN;
uint32_t x259 = 508U;
static int64_t x264 = 3642483734055LL;
volatile uint32_t t43 = 8870841U;
volatile int16_t x299 = -1;
uint32_t t48 = 59U;
volatile int64_t t51 = 445736121276LL;
int64_t t52 = -6900838LL;
volatile int8_t x334 = 29;
int8_t x342 = INT8_MIN;
int16_t x343 = INT16_MIN;
int8_t x345 = INT8_MIN;
int8_t x351 = INT8_MIN;
volatile uint16_t x352 = 13404U;
volatile int32_t x354 = -585;
int8_t x359 = 40;
int8_t x364 = INT8_MIN;
uint64_t t61 = 26430638913971478LLU;
static volatile int8_t x369 = INT8_MAX;
int16_t x383 = INT16_MIN;
static int64_t x386 = INT64_MIN;
int64_t x389 = -1LL;
int8_t x390 = 0;
uint32_t x404 = 21114466U;
uint32_t x407 = 1437U;
volatile int16_t x410 = INT16_MIN;
uint64_t x417 = 1084673LLU;
uint32_t t70 = 1U;
volatile int64_t t71 = -1938912075248590763LL;
static uint64_t x440 = UINT64_MAX;
uint64_t x448 = 6544189599966066124LLU;
uint64_t t73 = 194095LLU;
static volatile int32_t x479 = -1;
static uint32_t x503 = 841778U;
static uint64_t x528 = 10232622LLU;
static int64_t x550 = -796933732505620029LL;
volatile int64_t t87 = -24813795724320LL;
uint64_t x555 = UINT64_MAX;
volatile uint32_t x592 = 1047198250U;
uint32_t x596 = UINT32_MAX;
volatile uint64_t x615 = 189919832LLU;
static int8_t x638 = 3;
int16_t x639 = -34;


void f0(void) {
	static uint32_t x1 = 956U;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -15;
	int32_t x4 = 30;
	volatile uint32_t t0 = 39U;

	t0 = ((x1-x2)-(x3*x4));

	if (t0 != 34174U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int32_t x7 = -3;
	uint32_t x8 = 605413U;
	static uint32_t t1 = 189U;

	t1 = ((x5-x6)-(x7*x8));

	if (t1 != 1817111U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	uint64_t x11 = 7415LLU;
	uint16_t x12 = 173U;
	volatile uint64_t t2 = 341917LLU;

	t2 = ((x9-x10)-(x11*x12));

	if (t2 != 2146200852LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = 520929U;
	int16_t x15 = INT16_MIN;
	int32_t x16 = -84;
	volatile uint32_t t3 = 45882220U;

	t3 = ((x13-x14)-(x15*x16));

	if (t3 != 4291661087U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -28;
	volatile uint16_t x18 = 0U;
	uint64_t x19 = 17894966664527LLU;
	uint16_t x20 = 22U;
	volatile uint64_t t4 = 13826531LLU;

	t4 = ((x17-x18)-(x19*x20));

	if (t4 != 18446350384442931994LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 110543252;
	int32_t x22 = -1;
	volatile int16_t x23 = -244;
	static int16_t x24 = INT16_MAX;
	int32_t t5 = -1;

	t5 = ((x21-x22)-(x23*x24));

	if (t5 != 118538401) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -49;
	int8_t x26 = INT8_MAX;
	int8_t x28 = INT8_MAX;
	int32_t t6 = -1585;

	t6 = ((x25-x26)-(x27*x28));

	if (t6 != 4161360) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1LL;
	uint16_t x34 = UINT16_MAX;
	static volatile int8_t x35 = INT8_MAX;
	volatile int64_t t7 = 8252710975010609LL;

	t7 = ((x33-x34)-(x35*x36));

	if (t7 != -65028LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 25700196437LLU;
	static int8_t x39 = INT8_MIN;
	int64_t x40 = -221LL;
	volatile uint64_t t8 = 1332646814265349740LLU;

	t8 = ((x37-x38)-(x39*x40));

	if (t8 != 18446744045861843243LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 201U;
	int16_t x50 = -1;
	uint16_t x52 = UINT16_MAX;
	static uint64_t t9 = 1384192975375927LLU;

	t9 = ((x49-x50)-(x51*x52));

	if (t9 != 18446734789522861538LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x54 = -1;
	static int32_t x55 = 4;
	int16_t x56 = INT16_MIN;

	t10 = ((x53-x54)-(x55*x56));

	if (t10 != 141954) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 64636602426429131LLU;
	int32_t x58 = INT32_MIN;
	int8_t x60 = INT8_MIN;
	uint64_t t11 = 207766712724LLU;

	t11 = ((x57-x58)-(x59*x60));

	if (t11 != 64636604573911371LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = INT8_MIN;
	static int32_t x63 = 49650907;
	uint64_t x64 = 119839LLU;
	uint64_t t12 = 149515065787485962LLU;

	t12 = ((x61-x62)-(x63*x64));

	if (t12 != 18446738123594683477LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x66 = -23762;
	uint8_t x67 = UINT8_MAX;
	int16_t x68 = INT16_MAX;
	static volatile int32_t t13 = 752;

	t13 = ((x65-x66)-(x67*x68));

	if (t13 != -8331812) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = 10532;
	static uint64_t x70 = 4767LLU;
	int64_t x71 = 14171LL;
	int32_t x72 = INT32_MIN;
	uint64_t t14 = 229302LLU;

	t14 = ((x69-x70)-(x71*x72));

	if (t14 != 30431990781573LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x89 = 539LLU;
	int64_t x90 = 1LL;
	int16_t x91 = INT16_MIN;
	volatile uint8_t x92 = 15U;
	volatile uint64_t t15 = 44LLU;

	t15 = ((x89-x90)-(x91*x92));

	if (t15 != 492058LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x93 = -1;
	static int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	static volatile uint64_t x96 = 7882747458LLU;
	static uint64_t t16 = 210718210LLU;

	t16 = ((x93-x94)-(x95*x96));

	if (t16 != 1008991674496LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x97 = INT8_MIN;
	int32_t x99 = 3;
	volatile uint64_t x100 = UINT64_MAX;
	volatile uint64_t t17 = 633LLU;

	t17 = ((x97-x98)-(x99*x100));

	if (t17 != 3LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 401034135232LLU;
	int64_t x104 = -37LL;

	t18 = ((x101-x102)-(x103*x104));

	if (t18 != 321577240267LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x106 = 67U;
	int16_t x107 = INT16_MIN;
	static int16_t x108 = INT16_MIN;
	uint32_t t19 = 124313U;

	t19 = ((x105-x106)-(x107*x108));

	if (t19 != 3221225532U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -1;
	static int8_t x110 = -1;
	static uint32_t x112 = 460U;
	uint32_t t20 = 6441U;

	t20 = ((x109-x110)-(x111*x112));

	if (t20 != 15073280U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x118 = INT8_MIN;
	volatile int8_t x119 = INT8_MAX;
	int8_t x120 = -4;

	t21 = ((x117-x118)-(x119*x120));

	if (t21 != 635) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = -1;
	int8_t x127 = 0;
	uint64_t x128 = 2073799LLU;

	t22 = ((x125-x126)-(x127*x128));

	if (t22 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x154 = 385270;
	uint64_t x155 = 3203097471519224LLU;
	static int8_t x156 = INT8_MIN;
	volatile uint64_t t23 = 777LLU;

	t23 = ((x153-x154)-(x155*x156));

	if (t23 != 409996476354075657LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x161 = INT64_MIN;
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = INT32_MAX;
	static int8_t x164 = 1;
	uint64_t t24 = 4142473LLU;

	t24 = ((x161-x162)-(x163*x164));

	if (t24 != 9223372034707292162LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x169 = INT16_MAX;
	volatile int64_t x170 = -1LL;
	uint32_t x171 = UINT32_MAX;
	int8_t x172 = 0;

	t25 = ((x169-x170)-(x171*x172));

	if (t25 != 32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x173 = 20228LL;
	uint8_t x174 = UINT8_MAX;
	static int32_t x175 = -1;
	int32_t x176 = 107;
	int64_t t26 = -941810226312LL;

	t26 = ((x173-x174)-(x175*x176));

	if (t26 != 20080LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x186 = -1LL;
	volatile uint8_t x187 = UINT8_MAX;
	int8_t x188 = -1;
	int64_t t27 = -485960881583LL;

	t27 = ((x185-x186)-(x187*x188));

	if (t27 != 257LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x190 = 1U;
	volatile int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	volatile uint64_t t28 = 0LLU;

	t28 = ((x189-x190)-(x191*x192));

	if (t28 != 18446744071571493131LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x201 = 18U;
	int64_t x202 = -1LL;
	int8_t x204 = INT8_MAX;
	static volatile int64_t t29 = -6LL;

	t29 = ((x201-x202)-(x203*x204));

	if (t29 != -1742929LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x209 = -116;
	uint64_t x210 = 304739LLU;
	uint64_t x211 = 2LLU;
	int16_t x212 = INT16_MIN;

	t30 = ((x209-x210)-(x211*x212));

	if (t30 != 18446744073709312297LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x213 = INT16_MAX;
	uint16_t x214 = UINT16_MAX;
	int8_t x216 = INT8_MAX;
	int32_t t31 = 961396919;

	t31 = ((x213-x214)-(x215*x216));

	if (t31 != -33530) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x217 = UINT64_MAX;
	volatile int64_t x218 = -1LL;
	uint8_t x219 = 1U;
	volatile uint64_t t32 = 16441971892990079LLU;

	t32 = ((x217-x218)-(x219*x220));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x221 = -83;
	static int8_t x222 = INT8_MIN;
	uint8_t x223 = 23U;
	int16_t x224 = INT16_MIN;
	volatile int32_t t33 = 24381696;

	t33 = ((x221-x222)-(x223*x224));

	if (t33 != 753709) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x233 = UINT16_MAX;
	static uint64_t x235 = 294792LLU;
	uint8_t x236 = 3U;
	static uint64_t t34 = 57927252856LLU;

	t34 = ((x233-x234)-(x235*x236));

	if (t34 != 18446744073708732776LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x237 = INT64_MIN;
	volatile uint64_t x239 = 377LLU;
	static uint32_t x240 = 19586U;
	volatile uint64_t t35 = 6741923959LLU;

	t35 = ((x237-x238)-(x239*x240));

	if (t35 != 9223372036847424654LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x241 = INT8_MIN;
	uint8_t x242 = UINT8_MAX;
	volatile uint32_t t36 = 4113100U;

	t36 = ((x241-x242)-(x243*x244));

	if (t36 != 2147483265U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x245 = 1644798U;
	int32_t x246 = 3736651;
	int32_t x247 = INT32_MAX;
	uint32_t t37 = 281795U;

	t37 = ((x245-x246)-(x247*x248));

	if (t37 != 2145391794U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x249 = 8LLU;
	int64_t x250 = 5164LL;
	uint8_t x251 = 0U;
	int64_t x252 = INT64_MIN;

	t38 = ((x249-x250)-(x251*x252));

	if (t38 != 18446744073709546460LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x253 = INT32_MAX;
	int64_t x254 = INT64_MAX;
	int16_t x256 = 1511;
	int64_t t39 = -10999LL;

	t39 = ((x253-x254)-(x255*x256));

	if (t39 != -9223372034657779712LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x257 = 6975376U;
	int8_t x258 = INT8_MAX;
	volatile uint16_t x260 = 22238U;
	uint32_t t40 = 1044U;

	t40 = ((x257-x258)-(x259*x260));

	if (t40 != 4290645641U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x261 = INT8_MIN;
	volatile uint32_t x262 = 6U;
	static int32_t x263 = 3;
	int64_t t41 = -111905156LL;

	t41 = ((x261-x262)-(x263*x264));

	if (t41 != -10923156235003LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x269 = UINT16_MAX;
	volatile int32_t x270 = 13252412;
	int16_t x271 = -1;
	int8_t x272 = INT8_MAX;
	volatile int32_t t42 = 7;

	t42 = ((x269-x270)-(x271*x272));

	if (t42 != -13186750) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = UINT32_MAX;
	static int32_t x275 = -4006918;
	int32_t x276 = -1;

	t43 = ((x273-x274)-(x275*x276));

	if (t43 != 4290927611U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x277 = UINT64_MAX;
	uint64_t x278 = 391416736848LLU;
	static int64_t x279 = 3640316052LL;
	uint32_t x280 = 61328953U;
	volatile uint64_t t44 = 10LLU;

	t44 = ((x277-x278)-(x279*x280));

	if (t44 != 18223486910234561211LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x281 = INT16_MIN;
	static int64_t x282 = -1LL;
	uint64_t x283 = 1825959572LLU;
	int16_t x284 = INT16_MAX;
	uint64_t t45 = 611048LLU;

	t45 = ((x281-x282)-(x283*x284));

	if (t45 != 18446684242492223125LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x293 = 613;
	int32_t x294 = -149;
	static int16_t x295 = -396;
	int8_t x296 = INT8_MIN;
	int32_t t46 = -9466889;

	t46 = ((x293-x294)-(x295*x296));

	if (t46 != -49926) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x297 = 168U;
	int32_t x298 = INT32_MAX;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t47 = 77980112LLU;

	t47 = ((x297-x298)-(x299*x300));

	if (t47 != 18446744071562068136LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x305 = INT16_MIN;
	static int16_t x306 = INT16_MIN;
	static uint32_t x307 = 1134U;
	int32_t x308 = -1;

	t48 = ((x305-x306)-(x307*x308));

	if (t48 != 1134U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x313 = INT32_MAX;
	uint32_t x314 = UINT32_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	volatile uint32_t x316 = 412U;
	uint32_t t49 = 7U;

	t49 = ((x313-x314)-(x315*x316));

	if (t49 != 2147484060U) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x317 = 9U;
	volatile int8_t x318 = -1;
	int64_t x319 = -1LL;
	int16_t x320 = -13933;
	volatile int64_t t50 = 25315613715LL;

	t50 = ((x317-x318)-(x319*x320));

	if (t50 != -13923LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x321 = INT32_MIN;
	int64_t x322 = INT64_MIN;
	uint8_t x323 = 1U;
	uint32_t x324 = 213221196U;

	t51 = ((x321-x322)-(x323*x324));

	if (t51 != 9223372034494070964LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x325 = 8U;
	int64_t x326 = -22488LL;
	static volatile uint8_t x327 = UINT8_MAX;
	static uint16_t x328 = UINT16_MAX;

	t52 = ((x325-x326)-(x327*x328));

	if (t52 != -16688929LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = UINT32_MAX;
	volatile uint16_t x331 = 328U;
	int32_t x332 = 2;
	uint32_t t53 = 483519242U;

	t53 = ((x329-x330)-(x331*x332));

	if (t53 != 4294933873U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x333 = UINT32_MAX;
	static int8_t x335 = INT8_MAX;
	volatile int16_t x336 = INT16_MIN;
	uint32_t t54 = 8661U;

	t54 = ((x333-x334)-(x335*x336));

	if (t54 != 4161506U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x341 = UINT16_MAX;
	int8_t x344 = -1;
	volatile int32_t t55 = -54829400;

	t55 = ((x341-x342)-(x343*x344));

	if (t55 != 32895) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x346 = 1U;
	int64_t x347 = 571734032966978LL;
	int16_t x348 = -1;
	int64_t t56 = 634815733818530LL;

	t56 = ((x345-x346)-(x347*x348));

	if (t56 != 571734032966849LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x349 = INT64_MIN;
	int8_t x350 = 0;
	static volatile int64_t t57 = 2213353760LL;

	t57 = ((x349-x350)-(x351*x352));

	if (t57 != -9223372036853060096LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x355 = INT8_MIN;
	int8_t x356 = -1;
	volatile int32_t t58 = 2;

	t58 = ((x353-x354)-(x355*x356));

	if (t58 != 65992) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	int64_t x360 = -15201542147LL;
	int64_t t59 = 1353932812269508LL;

	t59 = ((x357-x358)-(x359*x360));

	if (t59 != 605914202233LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x361 = UINT64_MAX;
	int8_t x362 = -1;
	int16_t x363 = 46;
	static volatile uint64_t t60 = 5486657381323LLU;

	t60 = ((x361-x362)-(x363*x364));

	if (t60 != 5888LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x365 = -1;
	static volatile uint16_t x366 = 30623U;
	uint64_t x367 = 661234LLU;
	int64_t x368 = 11241LL;

	t61 = ((x365-x366)-(x367*x368));

	if (t61 != 18446744066276589598LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x370 = -1LL;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MAX;
	static int64_t t62 = 26474085878026581LL;

	t62 = ((x369-x370)-(x371*x372));

	if (t62 != 4161664LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x381 = 2U;
	volatile int64_t x382 = -250639506888LL;
	int32_t x384 = -1;
	int64_t t63 = -2702353LL;

	t63 = ((x381-x382)-(x383*x384));

	if (t63 != 250639474122LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x385 = -1;
	static uint64_t x387 = UINT64_MAX;
	volatile int32_t x388 = -1;
	uint64_t t64 = 19311903LLU;

	t64 = ((x385-x386)-(x387*x388));

	if (t64 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x391 = UINT8_MAX;
	static uint32_t x392 = 61393U;
	int64_t t65 = 1LL;

	t65 = ((x389-x390)-(x391*x392));

	if (t65 != -15655216LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 363U;
	int32_t x403 = -1;
	volatile uint32_t t66 = 15U;

	t66 = ((x401-x402)-(x403*x404));

	if (t66 != 21081335U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x405 = INT32_MIN;
	static volatile int16_t x406 = INT16_MIN;
	int16_t x408 = INT16_MIN;
	uint32_t t67 = 84U;

	t67 = ((x405-x406)-(x407*x408));

	if (t67 != 2194604032U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x409 = 0U;
	volatile int16_t x411 = 3384;
	volatile int16_t x412 = INT16_MAX;
	volatile int32_t t68 = 42938;

	t68 = ((x409-x410)-(x411*x412));

	if (t68 != -110850760) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x418 = INT8_MIN;
	volatile int8_t x419 = INT8_MAX;
	int8_t x420 = INT8_MAX;
	volatile uint64_t t69 = 34982093LLU;

	t69 = ((x417-x418)-(x419*x420));

	if (t69 != 1068672LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x421 = INT32_MIN;
	int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MAX;
	volatile uint32_t x424 = 75U;

	t70 = ((x421-x422)-(x423*x424));

	if (t70 != 2145058891U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x425 = UINT32_MAX;
	volatile int64_t x426 = INT64_MAX;
	int16_t x427 = INT16_MAX;
	static int8_t x428 = INT8_MIN;

	t71 = ((x425-x426)-(x427*x428));

	if (t71 != -9223372032555614336LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x437 = INT16_MIN;
	static int16_t x438 = INT16_MIN;
	int16_t x439 = INT16_MIN;
	static volatile uint64_t t72 = 1022LLU;

	t72 = ((x437-x438)-(x439*x440));

	if (t72 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x445 = INT32_MIN;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MIN;

	t73 = ((x445-x446)-(x447*x448));

	if (t73 != 7552785476579190272LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x449 = UINT16_MAX;
	uint8_t x450 = 3U;
	int16_t x451 = -2907;
	static uint64_t x452 = UINT64_MAX;
	uint64_t t74 = 240LLU;

	t74 = ((x449-x450)-(x451*x452));

	if (t74 != 62625LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x457 = INT32_MIN;
	volatile int64_t x458 = 358112167621340LL;
	static int32_t x459 = -1;
	uint16_t x460 = UINT16_MAX;
	volatile int64_t t75 = 3116769840150545LL;

	t75 = ((x457-x458)-(x459*x460));

	if (t75 != -358114315039453LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x461 = 13449U;
	uint16_t x462 = UINT16_MAX;
	int8_t x463 = 8;
	int16_t x464 = INT16_MIN;
	volatile int32_t t76 = -113;

	t76 = ((x461-x462)-(x463*x464));

	if (t76 != 210058) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x465 = -68;
	uint16_t x466 = 24U;
	uint16_t x467 = 16U;
	uint64_t x468 = UINT64_MAX;
	uint64_t t77 = 2012231LLU;

	t77 = ((x465-x466)-(x467*x468));

	if (t77 != 18446744073709551540LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x477 = INT8_MIN;
	int32_t x478 = 186474;
	int32_t x480 = -1;
	static volatile int32_t t78 = 17743;

	t78 = ((x477-x478)-(x479*x480));

	if (t78 != -186603) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x481 = UINT16_MAX;
	uint16_t x482 = UINT16_MAX;
	int64_t x483 = INT64_MAX;
	uint32_t x484 = 1U;
	volatile int64_t t79 = 2575835451LL;

	t79 = ((x481-x482)-(x483*x484));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x489 = 54154394368LLU;
	int8_t x490 = INT8_MAX;
	uint32_t x491 = UINT32_MAX;
	int8_t x492 = INT8_MAX;
	static uint64_t t80 = 20717073775586LLU;

	t80 = ((x489-x490)-(x491*x492));

	if (t80 != 49859427072LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x501 = -2214LL;
	int8_t x502 = 50;
	int16_t x504 = -1;
	volatile int64_t t81 = 1556011910LL;

	t81 = ((x501-x502)-(x503*x504));

	if (t81 != -4294127782LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x505 = 13U;
	int16_t x506 = 1745;
	int16_t x507 = 658;
	static int16_t x508 = INT16_MIN;
	static int32_t t82 = -18;

	t82 = ((x505-x506)-(x507*x508));

	if (t82 != 21559612) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x517 = INT32_MIN;
	int8_t x518 = INT8_MIN;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = UINT8_MAX;
	volatile int32_t t83 = 1;

	t83 = ((x517-x518)-(x519*x520));

	if (t83 != -2147450880) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x525 = -8;
	uint16_t x526 = UINT16_MAX;
	int32_t x527 = -1;
	static uint64_t t84 = 4076767LLU;

	t84 = ((x525-x526)-(x527*x528));

	if (t84 != 10167079LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x529 = INT64_MIN;
	static int16_t x530 = -1;
	static int8_t x531 = -5;
	static uint8_t x532 = UINT8_MAX;
	volatile int64_t t85 = 17380920740LL;

	t85 = ((x529-x530)-(x531*x532));

	if (t85 != -9223372036854774532LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x533 = INT16_MAX;
	volatile uint32_t x534 = UINT32_MAX;
	int16_t x535 = -97;
	uint16_t x536 = 3U;
	static uint32_t t86 = 10U;

	t86 = ((x533-x534)-(x535*x536));

	if (t86 != 33059U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x549 = 5343U;
	int16_t x551 = 964;
	int16_t x552 = 7886;

	t87 = ((x549-x550)-(x551*x552));

	if (t87 != 796933732498023268LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x553 = 1514278U;
	int8_t x554 = 15;
	int32_t x556 = INT32_MAX;
	volatile uint64_t t88 = 5541816281LLU;

	t88 = ((x553-x554)-(x555*x556));

	if (t88 != 2148997910LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x565 = 7;
	static int16_t x566 = 62;
	int8_t x567 = INT8_MIN;
	uint64_t x568 = 5LLU;
	static uint64_t t89 = 8010198862851425LLU;

	t89 = ((x565-x566)-(x567*x568));

	if (t89 != 585LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x569 = 14593755;
	volatile uint16_t x570 = UINT16_MAX;
	volatile uint16_t x571 = 1U;
	int8_t x572 = 1;
	int32_t t90 = -187513;

	t90 = ((x569-x570)-(x571*x572));

	if (t90 != 14528219) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x581 = 2;
	static uint32_t x582 = UINT32_MAX;
	int16_t x583 = INT16_MIN;
	int8_t x584 = -1;
	static volatile uint32_t t91 = 15153U;

	t91 = ((x581-x582)-(x583*x584));

	if (t91 != 4294934531U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x589 = UINT16_MAX;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = UINT32_MAX;
	static uint32_t t92 = 8407643U;

	t92 = ((x589-x590)-(x591*x592));

	if (t92 != 1047296553U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x593 = 1014727753U;
	uint32_t x594 = 49U;
	int32_t x595 = 2077;
	volatile uint32_t t93 = 66344961U;

	t93 = ((x593-x594)-(x595*x596));

	if (t93 != 1014729781U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x597 = INT16_MIN;
	static uint64_t x598 = UINT64_MAX;
	int16_t x599 = INT16_MIN;
	int32_t x600 = -29430;
	uint64_t t94 = 1367LLU;

	t94 = ((x597-x598)-(x599*x600));

	if (t94 != 18446744072745156609LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x609 = 1LL;
	int8_t x610 = -1;
	int16_t x611 = INT16_MIN;
	uint32_t x612 = 29552U;
	static int64_t t95 = 50827LL;

	t95 = ((x609-x610)-(x611*x612));

	if (t95 != -3326607358LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x613 = INT8_MIN;
	int32_t x614 = INT32_MIN;
	int16_t x616 = INT16_MIN;
	volatile uint64_t t96 = 5707709678220857090LLU;

	t96 = ((x613-x614)-(x615*x616));

	if (t96 != 6225440538496LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x621 = 18U;
	int32_t x622 = 79280705;
	uint8_t x623 = 2U;
	volatile uint8_t x624 = 72U;
	int32_t t97 = 24067;

	t97 = ((x621-x622)-(x623*x624));

	if (t97 != -79280831) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x633 = 12;
	static volatile uint16_t x634 = UINT16_MAX;
	uint16_t x635 = UINT16_MAX;
	int64_t x636 = 3776048LL;
	int64_t t98 = 1285888057LL;

	t98 = ((x633-x634)-(x635*x636));

	if (t98 != -247463371203LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x637 = INT16_MIN;
	int32_t x640 = 3884;
	int32_t t99 = -147074;

	t99 = ((x637-x638)-(x639*x640));

	if (t99 != 99285) { NG(); } else { ; }
	
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

