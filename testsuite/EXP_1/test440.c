#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x15 = -9996421;
int32_t t2 = -18086;
uint8_t x17 = 57U;
static volatile uint16_t x21 = 12674U;
static int64_t x22 = -1LL;
int16_t x23 = INT16_MIN;
static int16_t x28 = 52;
volatile uint64_t x32 = 32891797518502LLU;
int64_t x37 = -1LL;
int64_t x46 = 158379348643291852LL;
static int8_t x55 = -25;
int64_t x56 = 9357LL;
uint64_t x57 = 179390487481019LLU;
int16_t x73 = INT16_MIN;
volatile uint16_t x77 = 286U;
int32_t t17 = -31;
static uint64_t x85 = UINT64_MAX;
volatile uint16_t x88 = UINT16_MAX;
int8_t x89 = INT8_MAX;
int32_t x92 = INT32_MIN;
int64_t x94 = -4119363932LL;
uint32_t x98 = 56711844U;
uint32_t x116 = 701452235U;
volatile uint32_t t25 = 13013U;
int16_t x119 = INT16_MIN;
static int16_t x122 = INT16_MIN;
int16_t x131 = 4;
int8_t x135 = 26;
int32_t x136 = -461937786;
volatile int32_t x140 = INT32_MIN;
volatile int32_t x146 = INT32_MAX;
static int16_t x152 = INT16_MIN;
int16_t x161 = INT16_MIN;
volatile int32_t x163 = INT32_MAX;
static int32_t x175 = -92;
uint32_t x176 = 227U;
volatile int8_t x181 = 10;
int16_t x184 = INT16_MIN;
int32_t t40 = 200;
volatile int16_t x199 = INT16_MIN;
static int32_t x200 = -1;
volatile int32_t t41 = 77;
int16_t x203 = INT16_MIN;
volatile uint64_t x206 = 2995789943259608172LLU;
int8_t x212 = -1;
int32_t t44 = 14;
uint16_t x215 = 7320U;
volatile int32_t t45 = 162;
int8_t x218 = -12;
volatile int32_t x219 = 3;
int32_t x220 = INT32_MIN;
int32_t x226 = -3511;
static int16_t x230 = INT16_MIN;
int8_t x237 = INT8_MIN;
volatile uint32_t t49 = 23094808U;
volatile uint16_t x242 = 128U;
uint8_t x245 = 0U;
int8_t x251 = -26;
int32_t x255 = INT32_MIN;
volatile int32_t x258 = -957861;
uint8_t x275 = 27U;
static int16_t x277 = INT16_MAX;
volatile int16_t x283 = INT16_MIN;
uint8_t x284 = 1U;
uint32_t x285 = 191789U;
uint16_t x286 = 3529U;
static uint32_t x290 = UINT32_MAX;
int8_t x291 = INT8_MAX;
int64_t x292 = INT64_MIN;
static volatile int64_t t59 = -21833068105LL;
static uint32_t x311 = UINT32_MAX;
static int16_t x318 = -1;
volatile int64_t t61 = 46LL;
static int16_t x329 = INT16_MIN;
int32_t x331 = -220989;
int64_t t64 = -13269LL;
volatile int32_t t65 = -1;
int8_t x340 = -7;
volatile int32_t t67 = 0;
uint32_t x354 = UINT32_MAX;
volatile uint8_t x355 = UINT8_MAX;
static uint64_t x360 = 3950997626666LLU;
uint64_t x369 = UINT64_MAX;
uint32_t x373 = 4976597U;
volatile int16_t x374 = INT16_MIN;
uint64_t x390 = UINT64_MAX;
int8_t x400 = INT8_MIN;
int16_t x419 = -1;
volatile uint8_t x420 = 0U;
uint32_t x435 = 849U;
int8_t x436 = INT8_MIN;
volatile int32_t t81 = -593;
volatile int32_t x437 = -1;
static int64_t x444 = INT64_MIN;
uint64_t x447 = UINT64_MAX;
int8_t x453 = -1;
static int32_t x459 = INT32_MIN;
int64_t t88 = 50763829LL;
uint32_t x474 = UINT32_MAX;
volatile uint64_t t90 = 6LLU;
static int16_t x485 = INT16_MIN;
int8_t x492 = INT8_MAX;
int32_t t92 = 760;
int32_t t94 = 19533014;
int8_t x502 = INT8_MAX;
static uint64_t x531 = UINT64_MAX;
int64_t x532 = INT64_MAX;
uint8_t x536 = UINT8_MAX;
volatile int32_t t99 = 21818;


void f0(void) {
	static int16_t x1 = -1;
	static int16_t x2 = INT16_MAX;
	volatile int16_t x3 = INT16_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = -54LL;

	t0 = (((x1*x2)==x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 7032U;
	uint32_t x6 = UINT32_MAX;
	uint64_t x7 = UINT64_MAX;
	int16_t x8 = 2;
	int32_t t1 = 1;

	t1 = (((x5*x6)==x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 0;
	int64_t x14 = 6774326832965484LL;
	static int8_t x16 = 3;

	t2 = (((x13*x14)==x15)&x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = -2;
	int32_t x19 = -664;
	uint32_t x20 = UINT32_MAX;
	volatile uint32_t t3 = 248944U;

	t3 = (((x17*x18)==x19)&x20);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x24 = UINT16_MAX;
	volatile int32_t t4 = -12676;

	t4 = (((x21*x22)==x23)&x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static int32_t x26 = -1;
	int32_t x27 = -148093744;
	int32_t t5 = -1308;

	t5 = (((x25*x26)==x27)&x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 1197916LLU;
	uint32_t x30 = UINT32_MAX;
	static int64_t x31 = INT64_MIN;
	volatile uint64_t t6 = 1724601292616LLU;

	t6 = (((x29*x30)==x31)&x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x34 = -1LL;
	static int8_t x35 = -1;
	int8_t x36 = INT8_MIN;
	int32_t t7 = 4;

	t7 = (((x33*x34)==x35)&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -19583LL;
	static volatile int8_t x39 = INT8_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int32_t t8 = -311;

	t8 = (((x37*x38)==x39)&x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	uint64_t x42 = 590LLU;
	int64_t x43 = 1787LL;
	volatile int64_t x44 = INT64_MAX;
	int64_t t9 = 628025LL;

	t9 = (((x41*x42)==x43)&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 50U;
	int64_t x47 = -1LL;
	static int64_t x48 = -1LL;
	int64_t t10 = 1003416216239792292LL;

	t10 = (((x45*x46)==x47)&x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x49 = UINT64_MAX;
	static int64_t x50 = INT64_MIN;
	int16_t x51 = -1;
	static volatile int64_t x52 = 11LL;
	int64_t t11 = -57855781LL;

	t11 = (((x49*x50)==x51)&x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = -6018;
	uint64_t x54 = UINT64_MAX;
	int64_t t12 = -1732471720537185013LL;

	t12 = (((x53*x54)==x55)&x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = 5;
	int8_t x59 = 9;
	int8_t x60 = 0;
	volatile int32_t t13 = -1553;

	t13 = (((x57*x58)==x59)&x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x61 = 6LLU;
	static int32_t x62 = 326727;
	static int8_t x63 = -1;
	static volatile int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 774376;

	t14 = (((x61*x62)==x63)&x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = 0LL;
	int8_t x75 = -1;
	uint8_t x76 = 7U;
	int32_t t15 = 1;

	t15 = (((x73*x74)==x75)&x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x78 = 1039U;
	uint64_t x79 = 788019829LLU;
	int32_t x80 = INT32_MIN;
	volatile int32_t t16 = 582665;

	t16 = (((x77*x78)==x79)&x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 121639U;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MAX;
	static int16_t x84 = INT16_MIN;

	t17 = (((x81*x82)==x83)&x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x87 = -1;
	volatile int32_t t18 = 226;

	t18 = (((x85*x86)==x87)&x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x90 = 7U;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t t19 = 26;

	t19 = (((x89*x90)==x91)&x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = 1;
	int32_t x95 = INT32_MIN;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t20 = -721;

	t20 = (((x93*x94)==x95)&x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -7012230597LL;

	t21 = (((x97*x98)==x99)&x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 352020927955LLU;
	int16_t x102 = INT16_MAX;
	int64_t x103 = -654217LL;
	int64_t x104 = -948020309LL;
	int64_t t22 = 2LL;

	t22 = (((x101*x102)==x103)&x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	int32_t x107 = -1;
	int8_t x108 = INT8_MIN;
	volatile int32_t t23 = 3;

	t23 = (((x105*x106)==x107)&x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x109 = 47587432;
	uint32_t x110 = 1U;
	int32_t x111 = -38;
	int64_t x112 = 8640LL;
	static int64_t t24 = 577709116LL;

	t24 = (((x109*x110)==x111)&x112);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = 2U;
	uint32_t x114 = 38452U;
	int16_t x115 = 8;

	t25 = (((x113*x114)==x115)&x116);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = 0;
	static int8_t x118 = 6;
	int8_t x120 = INT8_MIN;
	int32_t t26 = -55;

	t26 = (((x117*x118)==x119)&x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MAX;
	uint16_t x123 = 2185U;
	volatile int8_t x124 = -12;
	volatile int32_t t27 = 30645;

	t27 = (((x121*x122)==x123)&x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x129 = -3;
	static uint8_t x130 = 1U;
	uint32_t x132 = 2411U;
	static uint32_t t28 = 57U;

	t28 = (((x129*x130)==x131)&x132);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x133 = 443U;
	uint8_t x134 = 27U;
	static volatile int32_t t29 = -169117;

	t29 = (((x133*x134)==x135)&x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x137 = UINT8_MAX;
	volatile int8_t x138 = INT8_MIN;
	volatile int64_t x139 = -23336135LL;
	int32_t t30 = 88;

	t30 = (((x137*x138)==x139)&x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x145 = 7179U;
	static int64_t x147 = INT64_MIN;
	int16_t x148 = -1;
	static int32_t t31 = -1;

	t31 = (((x145*x146)==x147)&x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x149 = 0U;
	static uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	static volatile int32_t t32 = 59;

	t32 = (((x149*x150)==x151)&x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x162 = -1LL;
	volatile int64_t x164 = -5141LL;
	volatile int64_t t33 = -2689813657767LL;

	t33 = (((x161*x162)==x163)&x164);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = INT16_MIN;
	static uint8_t x166 = 3U;
	volatile int16_t x167 = -2;
	volatile uint16_t x168 = 100U;
	volatile int32_t t34 = -51;

	t34 = (((x165*x166)==x167)&x168);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 238892706U;
	int16_t x170 = INT16_MIN;
	int8_t x171 = -2;
	int16_t x172 = -1;
	int32_t t35 = -659;

	t35 = (((x169*x170)==x171)&x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = INT16_MIN;
	int8_t x174 = INT8_MAX;
	volatile uint32_t t36 = 22454425U;

	t36 = (((x173*x174)==x175)&x176);

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 177048LLU;
	uint32_t x178 = 1367U;
	int16_t x179 = -1;
	uint8_t x180 = 1U;
	int32_t t37 = 923787706;

	t37 = (((x177*x178)==x179)&x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x182 = UINT16_MAX;
	static uint8_t x183 = 99U;
	static int32_t t38 = -70;

	t38 = (((x181*x182)==x183)&x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x185 = UINT32_MAX;
	uint32_t x186 = 2U;
	static int16_t x187 = -408;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t39 = 2658872;

	t39 = (((x185*x186)==x187)&x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x189 = INT8_MIN;
	volatile int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;

	t40 = (((x189*x190)==x191)&x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x197 = -1;
	uint64_t x198 = 2995LLU;

	t41 = (((x197*x198)==x199)&x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x201 = 0U;
	uint64_t x202 = 0LLU;
	int64_t x204 = 24033551708442171LL;
	volatile int64_t t42 = -16893869031927LL;

	t42 = (((x201*x202)==x203)&x204);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x205 = 652743;
	int64_t x207 = INT64_MIN;
	volatile int8_t x208 = 0;
	static int32_t t43 = 504;

	t43 = (((x205*x206)==x207)&x208);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MAX;
	uint64_t x210 = UINT64_MAX;
	volatile uint32_t x211 = UINT32_MAX;

	t44 = (((x209*x210)==x211)&x212);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = 39;
	uint64_t x214 = UINT64_MAX;
	uint8_t x216 = 3U;

	t45 = (((x213*x214)==x215)&x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x217 = 56U;
	int32_t t46 = -2;

	t46 = (((x217*x218)==x219)&x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x225 = 3U;
	uint64_t x227 = 3287LLU;
	int32_t x228 = INT32_MIN;
	static int32_t t47 = -3226919;

	t47 = (((x225*x226)==x227)&x228);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x229 = -1;
	int16_t x231 = 25;
	int64_t x232 = -2335854500264LL;
	int64_t t48 = -10905580987LL;

	t48 = (((x229*x230)==x231)&x232);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x238 = -10;
	int64_t x239 = 110098453321LL;
	uint32_t x240 = UINT32_MAX;

	t49 = (((x237*x238)==x239)&x240);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x241 = UINT64_MAX;
	static uint32_t x243 = 24U;
	volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t50 = 3LLU;

	t50 = (((x241*x242)==x243)&x244);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x246 = 1U;
	static uint32_t x247 = UINT32_MAX;
	int32_t x248 = INT32_MIN;
	int32_t t51 = -14798;

	t51 = (((x245*x246)==x247)&x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = INT16_MIN;
	uint8_t x250 = 37U;
	uint8_t x252 = 3U;
	volatile int32_t t52 = 11907636;

	t52 = (((x249*x250)==x251)&x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x253 = 115989U;
	volatile int64_t x254 = 246807583237LL;
	static uint64_t x256 = 197439LLU;
	uint64_t t53 = 804803787865LLU;

	t53 = (((x253*x254)==x255)&x256);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = 3U;
	static int8_t x259 = INT8_MIN;
	volatile int16_t x260 = INT16_MAX;
	volatile int32_t t54 = 10342;

	t54 = (((x257*x258)==x259)&x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x273 = 4046;
	int32_t x274 = -1;
	static volatile int16_t x276 = INT16_MIN;
	volatile int32_t t55 = -20789;

	t55 = (((x273*x274)==x275)&x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x278 = UINT64_MAX;
	int8_t x279 = -5;
	int16_t x280 = INT16_MIN;
	static int32_t t56 = -7885020;

	t56 = (((x277*x278)==x279)&x280);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x281 = 67273LLU;
	uint32_t x282 = 308249U;
	volatile int32_t t57 = -85;

	t57 = (((x281*x282)==x283)&x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x287 = 4U;
	static int64_t x288 = INT64_MIN;
	volatile int64_t t58 = 5LL;

	t58 = (((x285*x286)==x287)&x288);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = 4LL;

	t59 = (((x289*x290)==x291)&x292);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = 277983455613958LL;
	static uint32_t x310 = 31094U;
	volatile int8_t x312 = INT8_MIN;
	static int32_t t60 = -3781;

	t60 = (((x309*x310)==x311)&x312);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x317 = UINT16_MAX;
	uint16_t x319 = 18U;
	volatile int64_t x320 = -1LL;

	t61 = (((x317*x318)==x319)&x320);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x322 = 92546965264914LLU;
	int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MAX;
	static volatile int32_t t62 = 965426837;

	t62 = (((x321*x322)==x323)&x324);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x325 = 18277155LLU;
	int16_t x326 = 1;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = 54U;
	int32_t t63 = 1;

	t63 = (((x325*x326)==x327)&x328);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x330 = UINT8_MAX;
	static int64_t x332 = INT64_MIN;

	t64 = (((x329*x330)==x331)&x332);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x333 = INT64_MAX;
	int8_t x334 = -1;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = -1;

	t65 = (((x333*x334)==x335)&x336);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = 27;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = -11;
	static volatile int32_t t66 = -44;

	t66 = (((x337*x338)==x339)&x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x341 = 4736U;
	int8_t x342 = INT8_MIN;
	int32_t x343 = 5454;
	int8_t x344 = INT8_MAX;

	t67 = (((x341*x342)==x343)&x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x349 = 822LLU;
	int16_t x350 = -4;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 15775513LLU;
	volatile uint64_t t68 = 98301389586LLU;

	t68 = (((x349*x350)==x351)&x352);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x353 = 28;
	int32_t x356 = -1;
	volatile int32_t t69 = 118;

	t69 = (((x353*x354)==x355)&x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x357 = INT8_MAX;
	int32_t x358 = -32986;
	static int64_t x359 = INT64_MIN;
	volatile uint64_t t70 = 4496612LLU;

	t70 = (((x357*x358)==x359)&x360);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x370 = -1;
	int32_t x371 = INT32_MAX;
	volatile int64_t x372 = -1LL;
	volatile int64_t t71 = -56737439250587LL;

	t71 = (((x369*x370)==x371)&x372);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x375 = -5;
	volatile int64_t x376 = 877493087LL;
	volatile int64_t t72 = 30095484LL;

	t72 = (((x373*x374)==x375)&x376);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x381 = UINT8_MAX;
	uint8_t x382 = UINT8_MAX;
	volatile uint64_t x383 = 112585356815916760LLU;
	static volatile uint8_t x384 = UINT8_MAX;
	volatile int32_t t73 = 124213;

	t73 = (((x381*x382)==x383)&x384);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = -33;
	uint64_t x391 = 1604255LLU;
	int64_t x392 = INT64_MIN;
	volatile int64_t t74 = -1LL;

	t74 = (((x389*x390)==x391)&x392);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x397 = 27U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	int32_t t75 = -23;

	t75 = (((x397*x398)==x399)&x400);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = -907247837;
	static int8_t x402 = -1;
	int16_t x403 = -6;
	int64_t x404 = INT64_MAX;
	int64_t t76 = -19LL;

	t76 = (((x401*x402)==x403)&x404);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = -1;
	int32_t x406 = -1;
	static volatile int16_t x407 = 28;
	int16_t x408 = 1;
	static volatile int32_t t77 = -3;

	t77 = (((x405*x406)==x407)&x408);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x417 = 7;
	static volatile int16_t x418 = INT16_MAX;
	volatile int32_t t78 = 1770408;

	t78 = (((x417*x418)==x419)&x420);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x421 = UINT64_MAX;
	int16_t x422 = -1;
	int8_t x423 = 1;
	volatile uint32_t x424 = 87068U;
	volatile uint32_t t79 = 276329077U;

	t79 = (((x421*x422)==x423)&x424);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x429 = 831U;
	uint64_t x430 = UINT64_MAX;
	static uint16_t x431 = 30U;
	static volatile int64_t x432 = -559149786516370LL;
	volatile int64_t t80 = -18109106411LL;

	t80 = (((x429*x430)==x431)&x432);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x433 = UINT32_MAX;
	volatile int8_t x434 = 3;

	t81 = (((x433*x434)==x435)&x436);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x438 = INT8_MIN;
	static uint16_t x439 = UINT16_MAX;
	uint8_t x440 = 3U;
	volatile int32_t t82 = -3196107;

	t82 = (((x437*x438)==x439)&x440);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x441 = UINT64_MAX;
	uint32_t x442 = 7U;
	static uint32_t x443 = 168802963U;
	volatile int64_t t83 = -555104950317LL;

	t83 = (((x441*x442)==x443)&x444);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x445 = 5153030465056LL;
	static uint16_t x446 = 188U;
	int32_t x448 = -1;
	int32_t t84 = -3803;

	t84 = (((x445*x446)==x447)&x448);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x454 = INT64_MAX;
	uint16_t x455 = UINT16_MAX;
	int16_t x456 = 5094;
	volatile int32_t t85 = 87495;

	t85 = (((x453*x454)==x455)&x456);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x457 = 18U;
	int16_t x458 = INT16_MIN;
	uint8_t x460 = 4U;
	int32_t t86 = 22638452;

	t86 = (((x457*x458)==x459)&x460);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = 1;
	static uint16_t x466 = 0U;
	static int32_t x467 = INT32_MIN;
	int64_t x468 = 108827749LL;
	volatile int64_t t87 = -207901LL;

	t87 = (((x465*x466)==x467)&x468);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x469 = UINT32_MAX;
	volatile int16_t x470 = INT16_MIN;
	uint16_t x471 = UINT16_MAX;
	volatile int64_t x472 = -19030LL;

	t88 = (((x469*x470)==x471)&x472);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x473 = 327U;
	int8_t x475 = -2;
	static uint16_t x476 = 2021U;
	int32_t t89 = 119;

	t89 = (((x473*x474)==x475)&x476);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x477 = -1LL;
	uint64_t x478 = 341523966509395657LLU;
	int32_t x479 = INT32_MIN;
	uint64_t x480 = 4510636909LLU;

	t90 = (((x477*x478)==x479)&x480);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x486 = INT16_MAX;
	static int8_t x487 = -41;
	static uint64_t x488 = 783223414504LLU;
	volatile uint64_t t91 = 3810LLU;

	t91 = (((x485*x486)==x487)&x488);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x489 = INT16_MIN;
	int8_t x490 = INT8_MAX;
	static volatile int64_t x491 = INT64_MIN;

	t92 = (((x489*x490)==x491)&x492);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x493 = 0U;
	int32_t x494 = INT32_MAX;
	volatile int64_t x495 = 2987LL;
	uint8_t x496 = 3U;
	int32_t t93 = -46464;

	t93 = (((x493*x494)==x495)&x496);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x497 = 1023U;
	int8_t x498 = INT8_MIN;
	static volatile int16_t x499 = -4;
	int8_t x500 = INT8_MIN;

	t94 = (((x497*x498)==x499)&x500);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x501 = 7U;
	int32_t x503 = -2429191;
	static uint32_t x504 = 390124106U;
	uint32_t t95 = 1936408U;

	t95 = (((x501*x502)==x503)&x504);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x505 = INT16_MIN;
	static volatile uint16_t x506 = 1973U;
	int32_t x507 = INT32_MIN;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t96 = 6764;

	t96 = (((x505*x506)==x507)&x508);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x521 = INT32_MIN;
	uint64_t x522 = 13LLU;
	volatile int16_t x523 = -1;
	uint32_t x524 = 96191U;
	uint32_t t97 = 3707223U;

	t97 = (((x521*x522)==x523)&x524);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x529 = 0U;
	int64_t x530 = 12011568LL;
	static int64_t t98 = -142LL;

	t98 = (((x529*x530)==x531)&x532);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x533 = 0;
	uint32_t x534 = 31724U;
	int16_t x535 = INT16_MIN;

	t99 = (((x533*x534)==x535)&x536);

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

