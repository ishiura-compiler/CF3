#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = INT32_MIN;
static uint64_t x14 = 109893964173802LLU;
int16_t x18 = -425;
volatile int8_t x19 = INT8_MIN;
volatile int16_t x35 = -1;
volatile int32_t t7 = -129499528;
int64_t x37 = -157700189LL;
static uint64_t x39 = 730LLU;
static int16_t x42 = INT16_MIN;
static volatile int32_t t10 = 21848;
uint16_t x57 = UINT16_MAX;
int32_t x62 = INT32_MIN;
static int16_t x68 = INT16_MIN;
uint16_t x69 = 17083U;
volatile uint64_t x71 = 319131983527756LLU;
volatile int32_t t16 = -3757221;
uint16_t x88 = 26653U;
int16_t x91 = 136;
int32_t t19 = -3608;
uint16_t x101 = 3593U;
int32_t x112 = -1;
static uint32_t x115 = 2950367U;
int64_t x117 = INT64_MIN;
int32_t x121 = -1;
static uint64_t x122 = UINT64_MAX;
int16_t x125 = INT16_MAX;
volatile int64_t x129 = -28063948409317163LL;
int64_t x136 = -1LL;
int64_t x137 = INT64_MIN;
volatile uint16_t x152 = 179U;
static uint32_t x153 = 108U;
int8_t x157 = INT8_MAX;
int64_t x159 = INT64_MIN;
int32_t x163 = -1;
volatile int32_t t36 = -1836;
int8_t x174 = -7;
uint32_t t38 = 1119U;
uint64_t x182 = UINT64_MAX;
volatile int8_t x184 = INT8_MIN;
int64_t t40 = -12429LL;
volatile uint32_t x190 = UINT32_MAX;
static volatile int16_t x211 = INT16_MIN;
static int8_t x214 = INT8_MAX;
static int8_t x217 = -1;
int64_t x220 = -1LL;
int32_t x222 = -8580;
int16_t x223 = INT16_MIN;
uint64_t x225 = 0LLU;
static int16_t x234 = 10;
static volatile uint64_t x236 = 209765575751LLU;
int32_t t52 = -3;
uint16_t x242 = 1334U;
volatile uint64_t x245 = 481182LLU;
static int16_t x247 = -1;
int16_t x250 = INT16_MIN;
int16_t x252 = -493;
volatile uint32_t t56 = 4U;
uint16_t x255 = UINT16_MAX;
volatile int64_t x258 = INT64_MIN;
volatile int32_t t59 = -1;
int64_t x273 = 7521057LL;
int32_t x275 = 172738452;
int16_t x281 = INT16_MIN;
int32_t t63 = -2240;
uint64_t x285 = 63LLU;
uint8_t x287 = 29U;
uint32_t t66 = 73U;
int16_t x302 = 108;
int32_t x303 = INT32_MIN;
int64_t x305 = INT64_MIN;
static uint32_t x312 = UINT32_MAX;
int8_t x314 = INT8_MIN;
volatile int8_t x324 = -1;
int64_t x325 = INT64_MIN;
uint64_t x342 = 777285076654719LLU;
int16_t x344 = INT16_MIN;
volatile int64_t t77 = -2837718859068LL;
volatile int64_t x349 = 168773263139LL;
static volatile uint64_t x353 = 8015934LLU;
uint64_t t79 = 52491516831125554LLU;
int8_t x372 = 6;
uint8_t x374 = UINT8_MAX;
volatile uint16_t x378 = 1U;
volatile uint16_t x380 = 233U;
uint32_t x386 = 0U;
int16_t x388 = -1;
volatile int32_t t88 = -4128;
int16_t x393 = INT16_MIN;
uint32_t x395 = 8995658U;
uint8_t x402 = 38U;
uint16_t x409 = UINT16_MAX;
volatile int32_t t92 = 398982733;
int8_t x420 = INT8_MIN;
int8_t x424 = -4;
volatile int32_t t94 = 1597749;
int64_t x426 = -9LL;
uint32_t x428 = 75U;
static volatile int32_t t95 = 109;
int8_t x429 = INT8_MAX;
int16_t x438 = INT16_MIN;
int32_t x440 = INT32_MAX;


void f0(void) {
	uint32_t x5 = UINT32_MAX;
	volatile int64_t x6 = 308630LL;
	int16_t x7 = -1;
	static int8_t x8 = INT8_MAX;
	uint32_t t0 = 407554811U;

	t0 = (x5*((x6+x7)==x8));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = INT64_MIN;
	uint64_t x11 = UINT64_MAX;
	static volatile uint8_t x12 = UINT8_MAX;
	int64_t t1 = 1379825220675LL;

	t1 = (x9*((x10+x11)==x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static int8_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = -6051;

	t2 = (x13*((x14+x15)==x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	int64_t x20 = INT64_MAX;
	volatile int32_t t3 = -7481791;

	t3 = (x17*((x18+x19)==x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = 98754439054283379LL;
	uint8_t x22 = UINT8_MAX;
	static int64_t x23 = -1LL;
	static int64_t x24 = 25526891098198LL;
	volatile int64_t t4 = -691081706774LL;

	t4 = (x21*((x22+x23)==x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	volatile uint8_t x26 = 1U;
	int16_t x27 = -884;
	int16_t x28 = INT16_MIN;
	int32_t t5 = -2058326;

	t5 = (x25*((x26+x27)==x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static int16_t x30 = -15133;
	static int8_t x31 = -1;
	int16_t x32 = -6767;
	int32_t t6 = -1236269;

	t6 = (x29*((x30+x31)==x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x33 = 1;
	volatile int16_t x34 = -14;
	int8_t x36 = INT8_MIN;

	t7 = (x33*((x34+x35)==x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x38 = 598459039LLU;
	uint16_t x40 = UINT16_MAX;
	volatile int64_t t8 = 0LL;

	t8 = (x37*((x38+x39)==x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	int16_t x43 = 4;
	int16_t x44 = -9;
	int32_t t9 = 1;

	t9 = (x41*((x42+x43)==x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 2U;
	static uint32_t x46 = 257U;
	static int8_t x47 = -1;
	uint64_t x48 = 34563228691729LLU;

	t10 = (x45*((x46+x47)==x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = -234;
	static uint16_t x50 = UINT16_MAX;
	uint16_t x51 = 287U;
	static int64_t x52 = -149058673733LL;
	int32_t t11 = -777159687;

	t11 = (x49*((x50+x51)==x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = 1U;
	volatile uint64_t x60 = 642464LLU;
	static int32_t t12 = -13;

	t12 = (x57*((x58+x59)==x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	int64_t x63 = -430308132221LL;
	int16_t x64 = INT16_MAX;
	volatile int64_t t13 = -338098269LL;

	t13 = (x61*((x62+x63)==x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	volatile int64_t x66 = -1LL;
	int16_t x67 = INT16_MIN;
	int64_t t14 = -82151LL;

	t14 = (x65*((x66+x67)==x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = 29U;
	uint16_t x72 = 3U;
	static int32_t t15 = -261;

	t15 = (x69*((x70+x71)==x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	uint8_t x75 = UINT8_MAX;
	int8_t x76 = -1;

	t16 = (x73*((x74+x75)==x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x85 = INT64_MAX;
	int16_t x86 = -3464;
	int16_t x87 = 4;
	static int64_t t17 = -63LL;

	t17 = (x85*((x86+x87)==x88));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = INT64_MAX;
	static uint8_t x90 = 1U;
	volatile uint32_t x92 = 2U;
	static volatile int64_t t18 = -17104662527LL;

	t18 = (x89*((x90+x91)==x92));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = -4;
	static uint32_t x94 = 5137U;
	uint16_t x95 = 333U;
	volatile int64_t x96 = INT64_MIN;

	t19 = (x93*((x94+x95)==x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MAX;
	int16_t x98 = -2;
	uint32_t x99 = 8U;
	static volatile uint32_t x100 = UINT32_MAX;
	volatile int32_t t20 = 1;

	t20 = (x97*((x98+x99)==x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x102 = INT16_MAX;
	uint16_t x103 = 20U;
	int64_t x104 = INT64_MAX;
	volatile int32_t t21 = -308131;

	t21 = (x101*((x102+x103)==x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x105 = 820U;
	uint32_t x106 = UINT32_MAX;
	volatile int8_t x107 = INT8_MIN;
	volatile uint64_t x108 = UINT64_MAX;
	volatile uint32_t t22 = 127458487U;

	t22 = (x105*((x106+x107)==x108));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	int64_t x110 = 80456LL;
	volatile uint64_t x111 = 12584891LLU;
	int32_t t23 = -4415077;

	t23 = (x109*((x110+x111)==x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	static int64_t x114 = 4821142668426746LL;
	static int32_t x116 = INT32_MAX;
	volatile int64_t t24 = 706078LL;

	t24 = (x113*((x114+x115)==x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x118 = 0LLU;
	static volatile int32_t x119 = 1559;
	int64_t x120 = 2714414LL;
	int64_t t25 = -59132LL;

	t25 = (x117*((x118+x119)==x120));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x123 = -1;
	uint32_t x124 = 56U;
	volatile int32_t t26 = -31;

	t26 = (x121*((x122+x123)==x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x126 = -1441126306LL;
	volatile int16_t x127 = INT16_MAX;
	int8_t x128 = INT8_MIN;
	volatile int32_t t27 = 2066371;

	t27 = (x125*((x126+x127)==x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = 0;
	int32_t x131 = 2;
	int64_t x132 = INT64_MIN;
	static int64_t t28 = 59446LL;

	t28 = (x129*((x130+x131)==x132));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x133 = INT32_MAX;
	uint8_t x134 = UINT8_MAX;
	static volatile uint32_t x135 = 16664099U;
	static volatile int32_t t29 = -20199;

	t29 = (x133*((x134+x135)==x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x138 = INT16_MAX;
	volatile int16_t x139 = 64;
	static int8_t x140 = INT8_MIN;
	volatile int64_t t30 = 169654132221576379LL;

	t30 = (x137*((x138+x139)==x140));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x141 = 19;
	uint64_t x142 = UINT64_MAX;
	uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t31 = -3677602;

	t31 = (x141*((x142+x143)==x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x149 = INT64_MIN;
	static uint8_t x150 = UINT8_MAX;
	static int8_t x151 = INT8_MAX;
	volatile int64_t t32 = -1585610602LL;

	t32 = (x149*((x150+x151)==x152));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MAX;
	static uint32_t t33 = 7666107U;

	t33 = (x153*((x154+x155)==x156));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = 3699188766175LL;
	int8_t x160 = 6;
	volatile int32_t t34 = 457714895;

	t34 = (x157*((x158+x159)==x160));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 255753406511380LLU;
	static uint32_t x162 = UINT32_MAX;
	int8_t x164 = INT8_MIN;
	static uint64_t t35 = 51LLU;

	t35 = (x161*((x162+x163)==x164));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = INT32_MIN;
	volatile int64_t x166 = 381677814401LL;
	volatile uint64_t x167 = 8412680181LLU;
	uint64_t x168 = 6673724622544121374LLU;

	t36 = (x165*((x166+x167)==x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x169 = 0U;
	int32_t x170 = INT32_MAX;
	int16_t x171 = -5781;
	static int32_t x172 = INT32_MIN;
	int32_t t37 = 9711;

	t37 = (x169*((x170+x171)==x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x173 = 42606998U;
	static volatile uint64_t x175 = 954823782160715LLU;
	uint8_t x176 = UINT8_MAX;

	t38 = (x173*((x174+x175)==x176));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x177 = INT16_MAX;
	uint32_t x178 = UINT32_MAX;
	volatile int8_t x179 = -1;
	uint16_t x180 = UINT16_MAX;
	int32_t t39 = -2;

	t39 = (x177*((x178+x179)==x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x181 = INT64_MAX;
	int32_t x183 = -56;

	t40 = (x181*((x182+x183)==x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 138U;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 50U;
	static volatile int32_t x188 = INT32_MAX;
	volatile uint32_t t41 = 3853252U;

	t41 = (x185*((x186+x187)==x188));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 4040396653421667LLU;
	volatile int16_t x191 = -2512;
	static uint16_t x192 = UINT16_MAX;
	static volatile uint64_t t42 = 2595589438LLU;

	t42 = (x189*((x190+x191)==x192));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = UINT32_MAX;
	volatile int8_t x194 = INT8_MIN;
	uint64_t x195 = UINT64_MAX;
	static int32_t x196 = INT32_MAX;
	volatile uint32_t t43 = 410011378U;

	t43 = (x193*((x194+x195)==x196));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint8_t x197 = UINT8_MAX;
	int8_t x198 = INT8_MIN;
	static int64_t x199 = INT64_MAX;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t44 = 14526;

	t44 = (x197*((x198+x199)==x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x201 = 29U;
	volatile int64_t x202 = -1LL;
	uint8_t x203 = 0U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t45 = -25;

	t45 = (x201*((x202+x203)==x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x209 = UINT64_MAX;
	static int8_t x210 = -1;
	int32_t x212 = INT32_MIN;
	uint64_t t46 = 3499895357305195LLU;

	t46 = (x209*((x210+x211)==x212));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x213 = -1LL;
	int32_t x215 = -7;
	int32_t x216 = -33600;
	int64_t t47 = 75LL;

	t47 = (x213*((x214+x215)==x216));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x218 = -18;
	static int8_t x219 = -1;
	volatile int32_t t48 = -1247;

	t48 = (x217*((x218+x219)==x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x221 = INT16_MIN;
	int32_t x224 = 0;
	int32_t t49 = -245336;

	t49 = (x221*((x222+x223)==x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x226 = 1620U;
	static int64_t x227 = 324447913080531646LL;
	static uint8_t x228 = 1U;
	static uint64_t t50 = 2372094LLU;

	t50 = (x225*((x226+x227)==x228));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x229 = -1LL;
	int8_t x230 = -1;
	volatile uint8_t x231 = 4U;
	int16_t x232 = -1;
	volatile int64_t t51 = -685671210LL;

	t51 = (x229*((x230+x231)==x232));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = INT8_MIN;
	static uint64_t x235 = UINT64_MAX;

	t52 = (x233*((x234+x235)==x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = 11387;
	int8_t x238 = INT8_MAX;
	static volatile int8_t x239 = INT8_MIN;
	static int32_t x240 = 9;
	static volatile int32_t t53 = 11;

	t53 = (x237*((x238+x239)==x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x241 = 1U;
	static uint64_t x243 = 35347439LLU;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t54 = -25953974;

	t54 = (x241*((x242+x243)==x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x246 = 36U;
	int8_t x248 = 19;
	uint64_t t55 = 247LLU;

	t55 = (x245*((x246+x247)==x248));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 319625U;
	static int8_t x251 = -1;

	t56 = (x249*((x250+x251)==x252));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x253 = 485;
	uint16_t x254 = 23191U;
	volatile int64_t x256 = INT64_MAX;
	int32_t t57 = 34630;

	t57 = (x253*((x254+x255)==x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x257 = 1;
	int32_t x259 = 3713;
	int32_t x260 = INT32_MIN;
	volatile int32_t t58 = 7501914;

	t58 = (x257*((x258+x259)==x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x261 = -5;
	int8_t x262 = INT8_MAX;
	int64_t x263 = 750LL;
	static uint16_t x264 = 3540U;

	t59 = (x261*((x262+x263)==x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x265 = 656;
	volatile int8_t x266 = INT8_MAX;
	int32_t x267 = 996;
	volatile uint32_t x268 = UINT32_MAX;
	int32_t t60 = 1212520;

	t60 = (x265*((x266+x267)==x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x274 = 113U;
	volatile uint8_t x276 = UINT8_MAX;
	int64_t t61 = -996176LL;

	t61 = (x273*((x274+x275)==x276));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 28U;
	uint64_t x278 = UINT64_MAX;
	volatile int64_t x279 = -881574LL;
	static volatile int8_t x280 = 14;
	uint32_t t62 = 32405U;

	t62 = (x277*((x278+x279)==x280));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x282 = 3096U;
	uint8_t x283 = 2U;
	volatile uint32_t x284 = 367U;

	t63 = (x281*((x282+x283)==x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x286 = 206541946LL;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t64 = 1720491LLU;

	t64 = (x285*((x286+x287)==x288));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = 1614;
	uint16_t x290 = 36U;
	static volatile int8_t x291 = INT8_MAX;
	int16_t x292 = -1;
	int32_t t65 = 4849;

	t65 = (x289*((x290+x291)==x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x297 = 389207U;
	volatile int64_t x298 = -1677682747973LL;
	int32_t x299 = -1;
	int32_t x300 = -1;

	t66 = (x297*((x298+x299)==x300));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x301 = INT64_MIN;
	int64_t x304 = INT64_MIN;
	static int64_t t67 = 275582762513819057LL;

	t67 = (x301*((x302+x303)==x304));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x306 = 0U;
	int8_t x307 = INT8_MAX;
	int64_t x308 = 4928206862614LL;
	int64_t t68 = -510444748001197095LL;

	t68 = (x305*((x306+x307)==x308));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x309 = -860;
	static volatile uint32_t x310 = 3892U;
	static uint64_t x311 = UINT64_MAX;
	int32_t t69 = -3;

	t69 = (x309*((x310+x311)==x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = -1LL;
	int16_t x315 = INT16_MIN;
	static volatile int32_t x316 = INT32_MAX;
	int64_t t70 = -61LL;

	t70 = (x313*((x314+x315)==x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	int8_t x319 = -1;
	static uint64_t x320 = 379950LLU;
	int32_t t71 = 251;

	t71 = (x317*((x318+x319)==x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x321 = INT16_MIN;
	int32_t x322 = -2450047;
	static int64_t x323 = -1LL;
	volatile int32_t t72 = -5;

	t72 = (x321*((x322+x323)==x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x326 = INT16_MAX;
	volatile int64_t x327 = 543562819939LL;
	volatile int16_t x328 = -3;
	volatile int64_t t73 = -4590LL;

	t73 = (x325*((x326+x327)==x328));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = INT8_MAX;
	static volatile uint8_t x330 = UINT8_MAX;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = -13;
	volatile int32_t t74 = 1;

	t74 = (x329*((x330+x331)==x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x337 = 224;
	int16_t x338 = INT16_MAX;
	volatile int8_t x339 = -5;
	static int32_t x340 = -383;
	int32_t t75 = -136;

	t75 = (x337*((x338+x339)==x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x341 = INT8_MAX;
	int16_t x343 = INT16_MIN;
	static volatile int32_t t76 = -14993752;

	t76 = (x341*((x342+x343)==x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = 415726;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = INT32_MIN;

	t77 = (x345*((x346+x347)==x348));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x350 = -26;
	uint8_t x351 = UINT8_MAX;
	int64_t x352 = 1LL;
	volatile int64_t t78 = -15329108158LL;

	t78 = (x349*((x350+x351)==x352));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x354 = 1U;
	int16_t x355 = INT16_MIN;
	int8_t x356 = 38;

	t79 = (x353*((x354+x355)==x356));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int64_t x358 = 1452625LL;
	int64_t x359 = 241577784751402LL;
	static volatile uint32_t x360 = UINT32_MAX;
	uint64_t t80 = 7380058319186LLU;

	t80 = (x357*((x358+x359)==x360));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x361 = INT32_MIN;
	int8_t x362 = -10;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t81 = -944114274;

	t81 = (x361*((x362+x363)==x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x365 = INT64_MAX;
	volatile int8_t x366 = INT8_MAX;
	static int64_t x367 = -1LL;
	int8_t x368 = INT8_MIN;
	volatile int64_t t82 = 1046741LL;

	t82 = (x365*((x366+x367)==x368));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MIN;
	volatile int32_t t83 = 499801;

	t83 = (x369*((x370+x371)==x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x373 = -1LL;
	uint16_t x375 = 0U;
	volatile uint16_t x376 = 51U;
	int64_t t84 = 30875183409780LL;

	t84 = (x373*((x374+x375)==x376));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x377 = 7607325582241691603LLU;
	static int8_t x379 = INT8_MIN;
	uint64_t t85 = 170829LLU;

	t85 = (x377*((x378+x379)==x380));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = INT16_MIN;
	uint64_t x382 = 758798020165131605LLU;
	uint8_t x383 = 28U;
	int8_t x384 = -1;
	volatile int32_t t86 = -15537667;

	t86 = (x381*((x382+x383)==x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x385 = 3U;
	uint64_t x387 = 28467107269LLU;
	volatile int32_t t87 = 237936691;

	t87 = (x385*((x386+x387)==x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = 21LLU;
	int64_t x391 = INT64_MAX;
	int64_t x392 = INT64_MAX;

	t88 = (x389*((x390+x391)==x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x394 = 333198983LLU;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t89 = -163;

	t89 = (x393*((x394+x395)==x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MIN;
	uint16_t x403 = 11U;
	static volatile int64_t x404 = -3264598641LL;
	volatile int32_t t90 = -47676686;

	t90 = (x401*((x402+x403)==x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = INT16_MAX;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	static uint8_t x408 = UINT8_MAX;
	volatile int32_t t91 = -23;

	t91 = (x405*((x406+x407)==x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x410 = UINT64_MAX;
	uint64_t x411 = UINT64_MAX;
	uint16_t x412 = 6U;

	t92 = (x409*((x410+x411)==x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x417 = 2275484245155376122LLU;
	int16_t x418 = INT16_MAX;
	static uint8_t x419 = 1U;
	uint64_t t93 = 970499546LLU;

	t93 = (x417*((x418+x419)==x420));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x421 = 323;
	int8_t x422 = 1;
	volatile uint64_t x423 = UINT64_MAX;

	t94 = (x421*((x422+x423)==x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = INT16_MIN;
	volatile uint64_t x427 = 39389447991LLU;

	t95 = (x425*((x426+x427)==x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x430 = 136937557966757441LLU;
	int8_t x431 = INT8_MIN;
	int32_t x432 = -129816;
	volatile int32_t t96 = 86767;

	t96 = (x429*((x430+x431)==x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MIN;
	int16_t x434 = INT16_MIN;
	static uint16_t x435 = 2U;
	int16_t x436 = -1;
	static volatile int32_t t97 = 1284;

	t97 = (x433*((x434+x435)==x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x437 = INT16_MIN;
	uint16_t x439 = UINT16_MAX;
	volatile int32_t t98 = 511382270;

	t98 = (x437*((x438+x439)==x440));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x445 = 96766624;
	int64_t x446 = INT64_MIN;
	int8_t x447 = 0;
	static int64_t x448 = INT64_MAX;
	static int32_t t99 = 266836797;

	t99 = (x445*((x446+x447)==x448));

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

