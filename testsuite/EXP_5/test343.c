#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x4 = UINT16_MAX;
volatile uint8_t x12 = 59U;
int16_t x14 = INT16_MIN;
static int32_t t4 = -80675272;
static int8_t x30 = 1;
uint8_t x37 = 9U;
uint32_t x42 = 1489459U;
volatile uint32_t t9 = 22169U;
int16_t x60 = 1;
int32_t x68 = -43455201;
int32_t x70 = 0;
int64_t x71 = INT64_MIN;
int32_t x75 = -638;
int16_t x78 = INT16_MAX;
int8_t x82 = -1;
volatile int32_t t16 = -179473;
int8_t x97 = INT8_MIN;
int16_t x103 = INT16_MAX;
int8_t x110 = 2;
int16_t x112 = -1;
uint64_t t22 = 1321LLU;
volatile int64_t t24 = 4056389231849090LL;
int64_t x158 = -1LL;
int64_t x159 = -1LL;
volatile uint8_t x170 = 5U;
volatile int16_t x172 = INT16_MIN;
uint64_t t33 = 3800884754LLU;
int16_t x191 = INT16_MIN;
int8_t x192 = -1;
uint64_t t34 = 67082979969LLU;
volatile int64_t x201 = -1LL;
int32_t x202 = -1;
volatile int64_t t36 = 3175157LL;
uint64_t t37 = 7213180469349279807LLU;
static int8_t x223 = -1;
static int8_t x224 = INT8_MIN;
int16_t x231 = INT16_MIN;
int8_t x233 = INT8_MAX;
int64_t t42 = 582346472051995340LL;
static uint16_t x242 = 1U;
volatile int16_t x245 = 50;
static int16_t x246 = INT16_MIN;
uint64_t t44 = 1443038318691640LLU;
volatile uint16_t x250 = 499U;
uint32_t x256 = 3391671U;
int64_t t46 = -399005LL;
int8_t x257 = INT8_MIN;
volatile uint64_t x258 = UINT64_MAX;
static volatile int16_t x263 = -1;
volatile uint32_t t49 = 6257U;
static int16_t x271 = INT16_MIN;
int32_t x277 = 206509469;
int16_t x296 = INT16_MIN;
volatile int32_t x325 = -1;
static volatile uint64_t t57 = 316LLU;
static uint16_t x339 = UINT16_MAX;
int32_t x341 = -1;
int8_t x344 = -1;
uint8_t x350 = 0U;
volatile uint32_t t60 = 236612U;
volatile int16_t x354 = INT16_MIN;
volatile uint64_t t61 = 2LLU;
static int32_t x394 = INT32_MAX;
volatile int64_t t65 = 1637571142570974LL;
int16_t x398 = INT16_MIN;
uint16_t x425 = 785U;
int64_t x427 = -997268437LL;
volatile int64_t x432 = -1LL;
int8_t x447 = INT8_MAX;
static int64_t x455 = 6088284353353LL;
uint64_t x467 = 30504LLU;
uint64_t t73 = 101109857195LLU;
static uint32_t x475 = 716734U;
int8_t x478 = 3;
int64_t t75 = 30216953079679860LL;
static uint32_t x488 = UINT32_MAX;
volatile int64_t t76 = -319388210LL;
int64_t x500 = INT64_MIN;
int32_t x504 = INT32_MAX;
uint64_t t79 = 7627LLU;
int8_t x506 = -32;
volatile int32_t t80 = 88928;
static uint32_t x513 = 3403439U;
uint8_t x515 = 2U;
volatile int8_t x518 = INT8_MIN;
volatile uint8_t x521 = 2U;
uint64_t x522 = 1072898LLU;
uint64_t t84 = 0LLU;
static int16_t x547 = -56;
volatile uint64_t x561 = UINT64_MAX;
uint32_t x563 = 12U;
static int32_t x564 = -35164;
int8_t x577 = INT8_MIN;
int8_t x580 = 14;
uint32_t x586 = UINT32_MAX;
int32_t x593 = -554859;
volatile uint32_t x594 = 2272019U;
static int8_t x595 = 27;
uint64_t x604 = 29780LLU;
static uint8_t x605 = UINT8_MAX;
volatile int8_t x607 = 34;
int8_t x617 = INT8_MAX;
static int32_t x618 = -1;


void f0(void) {
	int64_t x1 = -1LL;
	uint8_t x2 = 9U;
	int64_t x3 = -219LL;
	static int64_t t0 = 4013703859597LL;

	t0 = (x1%((x2*x3)+x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = 7;
	uint32_t x7 = 697U;
	volatile int16_t x8 = INT16_MIN;
	volatile uint32_t t1 = 257373851U;

	t1 = (x5%((x6*x7)+x8));

	if (t1 != 27888U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int32_t x10 = INT32_MIN;
	uint32_t x11 = 287526422U;
	uint32_t t2 = 96U;

	t2 = (x9%((x10*x11)+x12));

	if (t2 != 28U) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	int16_t x15 = INT16_MAX;
	int8_t x16 = 0;
	int64_t t3 = -53763576LL;

	t3 = (x13%((x14*x15)+x16));

	if (t3 != -262144LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	static int32_t x26 = -1;
	int16_t x27 = 1939;
	volatile int32_t x28 = -1;

	t4 = (x25%((x26*x27)+x28));

	if (t4 != 1515) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x29 = UINT16_MAX;
	static uint8_t x31 = 20U;
	static int32_t x32 = INT32_MIN;
	int32_t t5 = 134;

	t5 = (x29%((x30*x31)+x32));

	if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	uint8_t x34 = 0U;
	static int64_t x35 = INT64_MIN;
	static int64_t x36 = INT64_MIN;
	volatile int64_t t6 = 65067120555086563LL;

	t6 = (x33%((x34*x35)+x36));

	if (t6 != 127LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x38 = -1;
	static int16_t x39 = INT16_MAX;
	int64_t x40 = 10986391195533LL;
	volatile int64_t t7 = -70983189087868LL;

	t7 = (x37%((x38*x39)+x40));

	if (t7 != 9LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MAX;
	static int8_t x43 = -1;
	uint16_t x44 = 4U;
	volatile uint32_t t8 = 115511933U;

	t8 = (x41%((x42*x43)+x44));

	if (t8 != 32767U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = 2534;
	uint8_t x50 = 0U;
	int16_t x51 = 272;
	static volatile uint32_t x52 = 179246608U;

	t9 = (x49%((x50*x51)+x52));

	if (t9 != 2534U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x57 = INT16_MIN;
	int8_t x58 = 1;
	int16_t x59 = INT16_MIN;
	volatile int32_t t10 = 15316;

	t10 = (x57%((x58*x59)+x60));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 4U;
	static int32_t x66 = -1;
	volatile uint32_t x67 = 133846224U;
	static volatile uint32_t t11 = 979U;

	t11 = (x65%((x66*x67)+x68));

	if (t11 != 4U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x69 = -1;
	uint64_t x72 = UINT64_MAX;
	uint64_t t12 = 140450368LLU;

	t12 = (x69%((x70*x71)+x72));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = -1LL;
	int8_t x76 = INT8_MIN;
	static int64_t t13 = 3LL;

	t13 = (x73%((x74*x75)+x76));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = 11623471;
	int64_t x79 = -1LL;
	static uint16_t x80 = 6386U;
	int64_t t14 = -311988883503LL;

	t14 = (x77%((x78*x79)+x80));

	if (t14 != 15831LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x81 = 0;
	uint64_t x83 = 21473838LLU;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t15 = 217718550279649LLU;

	t15 = (x81%((x82*x83)+x84));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x89 = 1289;
	static int16_t x90 = INT16_MIN;
	int8_t x91 = -1;
	uint8_t x92 = UINT8_MAX;

	t16 = (x89%((x90*x91)+x92));

	if (t16 != 1289) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x93 = INT16_MIN;
	int64_t x94 = -66044350373LL;
	int32_t x95 = 0;
	static int8_t x96 = -63;
	int64_t t17 = 350006245185399734LL;

	t17 = (x93%((x94*x95)+x96));

	if (t17 != -8LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x98 = 2U;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -1LL;
	volatile int64_t t18 = 28342863LL;

	t18 = (x97%((x98*x99)+x100));

	if (t18 != -128LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 339992103017065LLU;
	uint16_t x102 = 0U;
	static int32_t x104 = INT32_MIN;
	uint64_t t19 = 17637854172LLU;

	t19 = (x101%((x102*x103)+x104));

	if (t19 != 339992103017065LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x105 = 1363U;
	uint32_t x106 = 1563846981U;
	static int32_t x107 = -664;
	int32_t x108 = INT32_MIN;
	static volatile uint32_t t20 = 36831U;

	t20 = (x105%((x106*x107)+x108));

	if (t20 != 1363U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	int64_t x111 = 217139LL;
	volatile int64_t t21 = -11879052326LL;

	t21 = (x109%((x110*x111)+x112));

	if (t21 != -120086LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x113 = 3U;
	uint8_t x114 = 1U;
	static int16_t x115 = INT16_MIN;
	static uint64_t x116 = 77625609270604031LLU;

	t22 = (x113%((x114*x115)+x116));

	if (t22 != 3LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x121 = INT32_MAX;
	static int64_t x122 = -16LL;
	int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;
	volatile int64_t t23 = 1LL;

	t23 = (x121%((x122*x123)+x124));

	if (t23 != 2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x125 = -2LL;
	uint8_t x126 = UINT8_MAX;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = UINT8_MAX;

	t24 = (x125%((x126*x127)+x128));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x129 = -1LL;
	static volatile int32_t x130 = INT32_MAX;
	static int64_t x131 = -1LL;
	int8_t x132 = INT8_MIN;
	static volatile int64_t t25 = 26LL;

	t25 = (x129%((x130*x131)+x132));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x145 = 2U;
	int32_t x146 = -1;
	static int32_t x147 = -43713227;
	static volatile int8_t x148 = INT8_MIN;
	volatile int32_t t26 = -2371532;

	t26 = (x145%((x146*x147)+x148));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = INT8_MIN;
	static int16_t x150 = -1;
	uint16_t x151 = 111U;
	int8_t x152 = 7;
	int32_t t27 = 49817;

	t27 = (x149%((x150*x151)+x152));

	if (t27 != -24) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x153 = -7;
	static int32_t x154 = -1;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = 13U;
	volatile int32_t t28 = 76;

	t28 = (x153%((x154*x155)+x156));

	if (t28 != -7) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = 13706;
	int8_t x160 = INT8_MAX;
	int64_t t29 = 46947175987199LL;

	t29 = (x157%((x158*x159)+x160));

	if (t29 != 10LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = INT8_MAX;
	volatile uint64_t x162 = 442751LLU;
	volatile int16_t x163 = -400;
	int32_t x164 = INT32_MIN;
	static uint64_t t30 = 1101001761402171680LLU;

	t30 = (x161%((x162*x163)+x164));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x169 = 2U;
	int8_t x171 = INT8_MIN;
	static int32_t t31 = -4894683;

	t31 = (x169%((x170*x171)+x172));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x177 = INT16_MAX;
	int16_t x178 = -1;
	static int8_t x179 = -1;
	static volatile uint32_t x180 = 1632U;
	uint32_t t32 = 606U;

	t32 = (x177%((x178*x179)+x180));

	if (t32 != 107U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x181 = 1080422143951374168LLU;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = 24U;

	t33 = (x181%((x182*x183)+x184));

	if (t33 != 3643332808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x189 = 497602549485LLU;
	uint16_t x190 = 3077U;

	t34 = (x189%((x190*x191)+x192));

	if (t34 != 497602549485LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x197 = UINT64_MAX;
	int32_t x198 = 20;
	static int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MAX;
	volatile uint64_t t35 = 840LLU;

	t35 = (x197%((x198*x199)+x200));

	if (t35 != 1779LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MAX;

	t36 = (x201%((x202*x203)+x204));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x209 = INT32_MAX;
	int8_t x210 = -1;
	static volatile uint8_t x211 = 0U;
	static volatile uint64_t x212 = UINT64_MAX;

	t37 = (x209%((x210*x211)+x212));

	if (t37 != 2147483647LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x217 = 0U;
	uint8_t x218 = UINT8_MAX;
	static uint32_t x219 = UINT32_MAX;
	static int32_t x220 = -1;
	uint32_t t38 = 223049U;

	t38 = (x217%((x218*x219)+x220));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x221 = 3;
	volatile uint64_t x222 = UINT64_MAX;
	volatile uint64_t t39 = 3070LLU;

	t39 = (x221%((x222*x223)+x224));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x229 = 9210U;
	uint16_t x230 = 21U;
	uint64_t x232 = 17348104LLU;
	static volatile uint64_t t40 = 44LLU;

	t40 = (x229%((x230*x231)+x232));

	if (t40 != 9210LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x234 = 4184620U;
	static volatile int32_t x235 = 40075;
	int16_t x236 = -622;
	volatile uint32_t t41 = 660893082U;

	t41 = (x233%((x234*x235)+x236));

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x237 = 97U;
	static int64_t x238 = -1LL;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = -1;

	t42 = (x237%((x238*x239)+x240));

	if (t42 != 97LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x241 = -1;
	int16_t x243 = 1;
	static uint8_t x244 = 0U;
	int32_t t43 = 711794;

	t43 = (x241%((x242*x243)+x244));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x247 = 1671LLU;
	int8_t x248 = INT8_MIN;

	t44 = (x245%((x246*x247)+x248));

	if (t44 != 50LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x249 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	uint64_t x252 = 3666LLU;
	uint64_t t45 = 7684435164096814LLU;

	t45 = (x249%((x250*x251)+x252));

	if (t45 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = INT8_MIN;
	static int16_t x254 = 7;
	int64_t x255 = -57279575494889357LL;

	t46 = (x253%((x254*x255)+x256));

	if (t46 != -128LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x259 = 14U;
	static uint16_t x260 = 7521U;
	uint64_t t47 = 486LLU;

	t47 = (x257%((x258*x259)+x260));

	if (t47 != 2003LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x261 = INT16_MAX;
	volatile int16_t x262 = INT16_MIN;
	int64_t x264 = -1LL;
	volatile int64_t t48 = -2LL;

	t48 = (x261%((x262*x263)+x264));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x265 = 3U;
	uint16_t x266 = 152U;
	volatile uint32_t x267 = 22558228U;
	volatile uint32_t x268 = 3296719U;

	t49 = (x265%((x266*x267)+x268));

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x269 = -1;
	int64_t x270 = -1LL;
	static uint8_t x272 = 110U;
	static int64_t t50 = 157897588495LL;

	t50 = (x269%((x270*x271)+x272));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x273 = INT64_MAX;
	static int16_t x274 = -16;
	static int32_t x275 = -38;
	int8_t x276 = -20;
	volatile int64_t t51 = -6LL;

	t51 = (x273%((x274*x275)+x276));

	if (t51 != 343LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x278 = INT8_MAX;
	int64_t x279 = 204091251LL;
	static volatile int64_t x280 = -14271364412728LL;
	volatile int64_t t52 = 466782463006783811LL;

	t52 = (x277%((x278*x279)+x280));

	if (t52 != 206509469LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x293 = -1;
	uint8_t x294 = UINT8_MAX;
	int16_t x295 = INT16_MIN;
	volatile int32_t t53 = 7244;

	t53 = (x293%((x294*x295)+x296));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x301 = INT16_MIN;
	int16_t x302 = 7428;
	static int16_t x303 = INT16_MAX;
	int32_t x304 = 194;
	static int32_t t54 = -326;

	t54 = (x301%((x302*x303)+x304));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MAX;
	static uint16_t x307 = 0U;
	static int64_t x308 = INT64_MIN;
	volatile int64_t t55 = -24792890LL;

	t55 = (x305%((x306*x307)+x308));

	if (t55 != 127LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x309 = 31488U;
	static int16_t x310 = 13;
	volatile uint16_t x311 = 8790U;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t56 = -1346;

	t56 = (x309%((x310*x311)+x312));

	if (t56 != 31488) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x326 = UINT8_MAX;
	uint64_t x327 = 1LLU;
	uint8_t x328 = 112U;

	t57 = (x325%((x326*x327)+x328));

	if (t57 != 296LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x337 = 5616427LL;
	int8_t x338 = 9;
	int64_t x340 = -1LL;
	volatile int64_t t58 = -110424415290LL;

	t58 = (x337%((x338*x339)+x340));

	if (t58 != 308101LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x342 = 28610U;
	uint64_t x343 = UINT64_MAX;
	volatile uint64_t t59 = 4263091028276LLU;

	t59 = (x341%((x342*x343)+x344));

	if (t59 != 28610LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x349 = 12U;
	int8_t x351 = 6;
	static uint32_t x352 = 102662231U;

	t60 = (x349%((x350*x351)+x352));

	if (t60 != 12U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x353 = INT64_MAX;
	int32_t x355 = -1;
	uint64_t x356 = 24LLU;

	t61 = (x353%((x354*x355)+x356));

	if (t61 != 30847LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x361 = 10U;
	uint16_t x362 = 13U;
	uint64_t x363 = UINT64_MAX;
	uint8_t x364 = 105U;
	uint64_t t62 = 130664488LLU;

	t62 = (x361%((x362*x363)+x364));

	if (t62 != 10LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x381 = UINT32_MAX;
	int8_t x382 = -1;
	int8_t x383 = INT8_MIN;
	volatile int64_t x384 = -1LL;
	volatile int64_t t63 = 131339814372596641LL;

	t63 = (x381%((x382*x383)+x384));

	if (t63 != 15LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x389 = INT64_MIN;
	uint16_t x390 = 1U;
	static int32_t x391 = -133;
	static int64_t x392 = -3748LL;
	volatile int64_t t64 = 9628801568505LL;

	t64 = (x389%((x390*x391)+x392));

	if (t64 != -1677LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x393 = INT64_MIN;
	static int16_t x395 = -1;
	static volatile uint32_t x396 = 7U;

	t65 = (x393%((x394*x395)+x396));

	if (t65 != -128LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x397 = INT8_MIN;
	static int32_t x399 = -1;
	uint64_t x400 = 1873323521590LLU;
	static volatile uint64_t t66 = 10398LLU;

	t66 = (x397%((x398*x399)+x400));

	if (t66 != 1521268183502LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x405 = INT8_MAX;
	static int16_t x406 = INT16_MIN;
	static uint16_t x407 = 27U;
	int16_t x408 = INT16_MAX;
	static int32_t t67 = 61879;

	t67 = (x405%((x406*x407)+x408));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x426 = INT16_MIN;
	int8_t x428 = INT8_MIN;
	volatile int64_t t68 = 1LL;

	t68 = (x425%((x426*x427)+x428));

	if (t68 != 785LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x429 = -1LL;
	static uint32_t x430 = 1U;
	uint64_t x431 = 6581704729169LLU;
	uint64_t t69 = 1LLU;

	t69 = (x429%((x430*x431)+x432));

	if (t69 != 2778128522975LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x441 = 752986LL;
	int8_t x442 = INT8_MIN;
	static int64_t x443 = -206464686702125LL;
	volatile int64_t x444 = -1LL;
	volatile int64_t t70 = 0LL;

	t70 = (x441%((x442*x443)+x444));

	if (t70 != 752986LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x445 = -221538274;
	int16_t x446 = -1;
	uint32_t x448 = 113U;
	static uint32_t t71 = 6736865U;

	t71 = (x445%((x446*x447)+x448));

	if (t71 != 4073429022U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x453 = INT64_MAX;
	static int8_t x454 = INT8_MIN;
	uint64_t x456 = 3160794325173LLU;
	volatile uint64_t t72 = 1904141210LLU;

	t72 = (x453%((x454*x455)+x456));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x465 = 14728U;
	volatile int64_t x466 = -1LL;
	static int32_t x468 = INT32_MIN;

	t73 = (x465%((x466*x467)+x468));

	if (t73 != 14728LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x473 = 10197U;
	static int16_t x474 = INT16_MAX;
	uint32_t x476 = UINT32_MAX;
	uint32_t t74 = 790453U;

	t74 = (x473%((x474*x475)+x476));

	if (t74 != 10197U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x477 = INT64_MAX;
	int16_t x479 = -4;
	int32_t x480 = INT32_MAX;

	t75 = (x477%((x478*x479)+x480));

	if (t75 != 337LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x485 = 5;
	static int64_t x486 = 105325LL;
	uint32_t x487 = 9371374U;

	t76 = (x485%((x486*x487)+x488));

	if (t76 != 5LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x489 = -1413877LL;
	int16_t x490 = INT16_MAX;
	int16_t x491 = INT16_MIN;
	int32_t x492 = INT32_MAX;
	volatile int64_t t77 = 42422LL;

	t77 = (x489%((x490*x491)+x492));

	if (t77 != -1413877LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x497 = INT64_MIN;
	static volatile int64_t x498 = INT64_MAX;
	uint64_t x499 = 908205132442LLU;
	volatile uint64_t t78 = 267291419925LLU;

	t78 = (x497%((x498*x499)+x500));

	if (t78 != 908205132442LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x501 = INT8_MIN;
	uint64_t x502 = 1208059253800177LLU;
	static uint64_t x503 = 3017139352332026LLU;

	t79 = (x501%((x502*x503)+x504));

	if (t79 != 5963860991784154663LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x505 = INT32_MIN;
	static int16_t x507 = INT16_MIN;
	int16_t x508 = INT16_MIN;

	t80 = (x505%((x506*x507)+x508));

	if (t80 != -65536) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x509 = UINT8_MAX;
	volatile uint16_t x510 = 46U;
	volatile int64_t x511 = -6LL;
	static uint32_t x512 = UINT32_MAX;
	int64_t t81 = -113143113470702LL;

	t81 = (x509%((x510*x511)+x512));

	if (t81 != 255LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x514 = 2016306560U;
	static uint32_t x516 = 59U;
	uint32_t t82 = 28747457U;

	t82 = (x513%((x514*x515)+x516));

	if (t82 != 3403439U) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x517 = 397U;
	static int16_t x519 = INT16_MIN;
	int64_t x520 = INT64_MIN;
	volatile int64_t t83 = -22762418786260LL;

	t83 = (x517%((x518*x519)+x520));

	if (t83 != 397LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x523 = -1;
	volatile uint64_t x524 = 5270803560LLU;

	t84 = (x521%((x522*x523)+x524));

	if (t84 != 2LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x525 = 1;
	uint16_t x526 = 4U;
	static int8_t x527 = INT8_MAX;
	static int32_t x528 = INT32_MIN;
	volatile int32_t t85 = 9;

	t85 = (x525%((x526*x527)+x528));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x537 = 1U;
	volatile int32_t x538 = 1;
	uint16_t x539 = UINT16_MAX;
	static int8_t x540 = INT8_MIN;
	int32_t t86 = -1;

	t86 = (x537%((x538*x539)+x540));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x545 = -6441975;
	static int64_t x546 = -1LL;
	uint32_t x548 = UINT32_MAX;
	static int64_t t87 = 2452852LL;

	t87 = (x545%((x546*x547)+x548));

	if (t87 != -6441975LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x549 = INT8_MIN;
	volatile uint32_t x550 = 0U;
	volatile int16_t x551 = INT16_MIN;
	static uint8_t x552 = 49U;
	volatile uint32_t t88 = 121543651U;

	t88 = (x549%((x550*x551)+x552));

	if (t88 != 9U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x557 = -1;
	int32_t x558 = -2000726;
	static uint64_t x559 = UINT64_MAX;
	int16_t x560 = INT16_MAX;
	static volatile uint64_t t89 = 6810946725843601717LLU;

	t89 = (x557%((x558*x559)+x560));

	if (t89 != 916623LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x562 = -37803559;
	volatile uint64_t t90 = 418LLU;

	t90 = (x561%((x562*x563)+x564));

	if (t90 != 2706886239LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x578 = INT8_MIN;
	uint16_t x579 = UINT16_MAX;
	int32_t t91 = 31;

	t91 = (x577%((x578*x579)+x580));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x581 = 0U;
	int32_t x582 = 1;
	int16_t x583 = INT16_MIN;
	uint32_t x584 = 335368U;
	volatile uint32_t t92 = 10109486U;

	t92 = (x581%((x582*x583)+x584));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x585 = -1855;
	volatile int64_t x587 = 0LL;
	int8_t x588 = INT8_MIN;
	volatile int64_t t93 = -13929LL;

	t93 = (x585%((x586*x587)+x588));

	if (t93 != -63LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x589 = INT32_MIN;
	uint8_t x590 = 3U;
	uint64_t x591 = 907LLU;
	int8_t x592 = INT8_MIN;
	volatile uint64_t t94 = 2024LLU;

	t94 = (x589%((x590*x591)+x592));

	if (t94 != 88LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x596 = INT16_MIN;
	static uint32_t t95 = 4U;

	t95 = (x593%((x594*x595)+x596));

	if (t95 != 2590287U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x601 = -256;
	uint32_t x602 = 6833338U;
	uint32_t x603 = UINT32_MAX;
	volatile uint64_t t96 = 2861402229686LLU;

	t96 = (x601%((x602*x603)+x604));

	if (t96 != 1962071136LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x606 = 0U;
	int16_t x608 = -745;
	volatile int32_t t97 = 171609680;

	t97 = (x605%((x606*x607)+x608));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x619 = -7394;
	static int8_t x620 = -1;
	volatile int32_t t98 = -7218;

	t98 = (x617%((x618*x619)+x620));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x621 = INT32_MIN;
	int16_t x622 = 1812;
	uint64_t x623 = 98118LLU;
	int64_t x624 = 7905LL;
	static uint64_t t99 = 104718753LLU;

	t99 = (x621%((x622*x623)+x624));

	if (t99 != 44230211LLU) { NG(); } else { ; }
	
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

