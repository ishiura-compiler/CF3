#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
volatile int32_t x9 = INT32_MIN;
int16_t x18 = INT16_MAX;
int64_t x21 = -1LL;
volatile int16_t x47 = INT16_MIN;
int16_t x49 = -115;
int32_t x51 = -1;
int16_t x53 = -4;
volatile int32_t t11 = -9;
int8_t x57 = INT8_MIN;
static volatile int16_t x68 = INT16_MIN;
static volatile uint16_t x71 = 7520U;
int32_t x74 = -162;
uint64_t x77 = 249LLU;
volatile uint8_t x87 = UINT8_MAX;
uint8_t x88 = UINT8_MAX;
int16_t x102 = INT16_MIN;
uint64_t x103 = 9875308665102LLU;
volatile int16_t x106 = INT16_MIN;
volatile int8_t x107 = -1;
uint32_t x111 = UINT32_MAX;
static volatile int16_t x113 = INT16_MAX;
int32_t x127 = 19422;
int16_t x140 = INT16_MIN;
int16_t x150 = -4021;
volatile int32_t t33 = 12;
int32_t x160 = -96371843;
static int16_t x168 = 14623;
volatile uint64_t t36 = UINT64_MAX;
int32_t t37 = -222531262;
int64_t t38 = -15659613LL;
int32_t x184 = -1;
uint16_t x186 = 103U;
int64_t x201 = INT64_MAX;
int64_t t44 = -105274LL;
static uint64_t x224 = 18672465LLU;
static int64_t x230 = INT64_MIN;
int32_t x231 = -1;
int32_t x237 = 3;
int8_t x238 = -1;
int32_t x239 = INT32_MIN;
static volatile int32_t t49 = 1;
int32_t t50 = 75888;
static uint8_t x251 = UINT8_MAX;
int64_t t52 = 31LL;
int16_t x256 = INT16_MIN;
int16_t x257 = 49;
volatile uint16_t x262 = 623U;
volatile uint16_t x269 = UINT16_MAX;
uint32_t x270 = 9326U;
int16_t x276 = INT16_MIN;
static int32_t x282 = INT32_MAX;
static volatile uint64_t x285 = UINT64_MAX;
static int16_t x295 = 4;
uint32_t x296 = 104017U;
uint16_t x304 = UINT16_MAX;
static uint32_t x305 = 468U;
int8_t x307 = INT8_MAX;
int8_t x318 = -1;
int16_t x319 = -1;
static int64_t t69 = 8948400491518464LL;
uint64_t x323 = 26207724346004659LLU;
static int8_t x326 = INT8_MIN;
int32_t x327 = 1;
int8_t x328 = INT8_MAX;
static volatile uint32_t t71 = 24930U;
int16_t x331 = 3;
static int64_t x341 = INT64_MIN;
volatile uint64_t x342 = 44LLU;
static int8_t x344 = -1;
uint32_t x351 = UINT32_MAX;
uint32_t x364 = UINT32_MAX;
uint16_t x366 = 3377U;
volatile int16_t x367 = INT16_MIN;
int32_t x373 = INT32_MAX;
static int64_t x376 = INT64_MIN;
volatile int32_t t82 = 60;
int16_t x387 = 4;
int32_t x396 = -1;
int32_t x401 = INT32_MAX;
static uint16_t x403 = 1854U;
static int16_t x404 = 6662;
uint32_t x413 = 841879U;
static int16_t x416 = 1;
volatile uint32_t t90 = 1072U;
uint8_t x418 = UINT8_MAX;
volatile uint64_t x419 = 29101838975297LLU;
volatile int32_t t91 = 73;
int64_t x423 = INT64_MIN;
static volatile int32_t x427 = -502097;
volatile int16_t x428 = INT16_MIN;
volatile uint32_t x444 = 1U;
int64_t x446 = -1LL;
volatile int32_t t98 = 21;
volatile int32_t t99 = INT32_MIN;


void f0(void) {
	int8_t x1 = -1;
	static uint32_t x2 = 314U;
	int16_t x3 = INT16_MAX;
	int32_t x4 = -12108;
	int32_t t0 = 2758;

	t0 = (x1*((x2-x3)<=x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	volatile uint32_t x8 = 13281856U;
	int32_t t1 = -112742863;

	t1 = (x5*((x6-x7)<=x8));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x10 = 126U;
	static volatile int8_t x11 = -1;
	static uint16_t x12 = 50U;
	volatile int32_t t2 = -28116413;

	t2 = (x9*((x10-x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 8230061656347768LLU;
	uint16_t x19 = 2625U;
	static uint16_t x20 = 0U;
	volatile uint64_t t3 = 10130790LLU;

	t3 = (x17*((x18-x19)<=x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 20U;
	static uint16_t x23 = 6884U;
	int64_t x24 = INT64_MAX;
	int64_t t4 = 29787227LL;

	t4 = (x21*((x22-x23)<=x24));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -3;
	int16_t x26 = INT16_MIN;
	uint16_t x27 = 36U;
	int64_t x28 = INT64_MIN;
	volatile int32_t t5 = -1;

	t5 = (x25*((x26-x27)<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int64_t x30 = 18928363052466430LL;
	int32_t x31 = INT32_MIN;
	int64_t x32 = -1152002725662204656LL;
	int32_t t6 = 1;

	t6 = (x29*((x30-x31)<=x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = -1;
	static uint8_t x35 = 1U;
	int16_t x36 = -420;
	static volatile uint32_t t7 = 164U;

	t7 = (x33*((x34-x35)<=x36));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = 9U;
	uint8_t x42 = 6U;
	int8_t x43 = -18;
	int16_t x44 = 1;
	volatile int32_t t8 = 42758838;

	t8 = (x41*((x42-x43)<=x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MAX;
	volatile int64_t x46 = INT64_MIN;
	static volatile uint64_t x48 = 44244887001574385LLU;
	int32_t t9 = -3567;

	t9 = (x45*((x46-x47)<=x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = -1;
	int64_t x52 = INT64_MIN;
	volatile int32_t t10 = -153327036;

	t10 = (x49*((x50-x51)<=x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x54 = INT16_MIN;
	static volatile int16_t x55 = INT16_MAX;
	static int16_t x56 = INT16_MIN;

	t11 = (x53*((x54-x55)<=x56));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x58 = -1;
	static volatile int32_t x59 = INT32_MIN;
	static int64_t x60 = 1744739LL;
	static volatile int32_t t12 = 2000493;

	t12 = (x57*((x58-x59)<=x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x61 = 171035778;
	uint32_t x62 = UINT32_MAX;
	static int16_t x63 = 12379;
	int32_t x64 = 1813;
	int32_t t13 = 9809734;

	t13 = (x61*((x62-x63)<=x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x65 = 108819941U;
	uint16_t x66 = 149U;
	uint8_t x67 = UINT8_MAX;
	static volatile uint32_t t14 = 4504737U;

	t14 = (x65*((x66-x67)<=x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = UINT64_MAX;
	static uint32_t x70 = 14227788U;
	static int8_t x72 = -1;
	uint64_t t15 = UINT64_MAX;

	t15 = (x69*((x70-x71)<=x72));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = 1;
	uint16_t x75 = 18U;
	int16_t x76 = INT16_MIN;
	static volatile int32_t t16 = 15;

	t16 = (x73*((x74-x75)<=x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = INT8_MAX;
	static uint64_t x79 = 320642463208LLU;
	int8_t x80 = -7;
	uint64_t t17 = 2836044828607568LLU;

	t17 = (x77*((x78-x79)<=x80));

	if (t17 != 249LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = -15;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = UINT32_MAX;
	static int16_t x84 = INT16_MIN;
	static int32_t t18 = -2805946;

	t18 = (x81*((x82-x83)<=x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	volatile uint64_t x86 = UINT64_MAX;
	volatile int32_t t19 = -942468525;

	t19 = (x85*((x86-x87)<=x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = 1LLU;
	uint8_t x90 = UINT8_MAX;
	int64_t x91 = -1LL;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t20 = 229569963396LLU;

	t20 = (x89*((x90-x91)<=x92));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	static int16_t x94 = -1;
	volatile uint8_t x95 = 40U;
	int32_t x96 = 4;
	volatile int64_t t21 = INT64_MIN;

	t21 = (x93*((x94-x95)<=x96));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = INT32_MIN;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t22 = -546698757;

	t22 = (x101*((x102-x103)<=x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 0U;
	static int32_t x108 = 975948;
	int32_t t23 = 102640;

	t23 = (x105*((x106-x107)<=x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 25113881U;
	int32_t x110 = 67558400;
	int64_t x112 = INT64_MIN;
	uint32_t t24 = 36U;

	t24 = (x109*((x110-x111)<=x112));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x114 = INT16_MAX;
	uint8_t x115 = 52U;
	static int32_t x116 = -21014;
	volatile int32_t t25 = 2225;

	t25 = (x113*((x114-x115)<=x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = INT8_MAX;
	volatile int32_t x122 = 81184635;
	static volatile int32_t x123 = 4;
	int8_t x124 = 3;
	volatile int32_t t26 = -7;

	t26 = (x121*((x122-x123)<=x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = 60743U;
	int64_t x126 = INT64_MAX;
	int32_t x128 = -30980721;
	volatile uint32_t t27 = 19U;

	t27 = (x125*((x126-x127)<=x128));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	static volatile uint32_t x130 = UINT32_MAX;
	int8_t x131 = INT8_MIN;
	uint8_t x132 = 2U;
	static volatile int32_t t28 = 28825727;

	t28 = (x129*((x130-x131)<=x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = 25342743988880LLU;
	int8_t x134 = INT8_MIN;
	int32_t x135 = -1;
	uint32_t x136 = 222186274U;
	static uint64_t t29 = 0LLU;

	t29 = (x133*((x134-x135)<=x136));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = -22;
	volatile int32_t x138 = INT32_MAX;
	uint8_t x139 = 10U;
	volatile int32_t t30 = 0;

	t30 = (x137*((x138-x139)<=x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = 21472769;
	uint16_t x142 = 74U;
	uint8_t x143 = 37U;
	static int64_t x144 = 15LL;
	int32_t t31 = -1432918;

	t31 = (x141*((x142-x143)<=x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x145 = 7U;
	volatile int32_t x146 = 2470;
	uint32_t x147 = 1395861983U;
	int8_t x148 = -1;
	static int32_t t32 = -1;

	t32 = (x145*((x146-x147)<=x148));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x149 = 50U;
	int32_t x151 = -1;
	uint64_t x152 = 63LLU;

	t33 = (x149*((x150-x151)<=x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x157 = 9474391LLU;
	int16_t x158 = INT16_MIN;
	volatile int16_t x159 = INT16_MIN;
	static uint64_t t34 = 22204002045748831LLU;

	t34 = (x157*((x158-x159)<=x160));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x161 = INT8_MIN;
	uint64_t x162 = 33595751478054LLU;
	static volatile int64_t x163 = -1LL;
	int16_t x164 = -104;
	static int32_t t35 = -1;

	t35 = (x161*((x162-x163)<=x164));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = 1;
	int8_t x167 = INT8_MIN;

	t36 = (x165*((x166-x167)<=x168));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x169 = INT8_MAX;
	int16_t x170 = INT16_MIN;
	static int16_t x171 = -1;
	int32_t x172 = -1;

	t37 = (x169*((x170-x171)<=x172));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x173 = 17229033967200884LL;
	volatile uint64_t x174 = 103861049036327980LLU;
	uint32_t x175 = 5080697U;
	volatile int64_t x176 = INT64_MIN;

	t38 = (x173*((x174-x175)<=x176));

	if (t38 != 17229033967200884LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = 14601140123831982LL;
	uint32_t x178 = 1665784925U;
	int8_t x179 = 0;
	static int64_t x180 = -1LL;
	static int64_t t39 = 518664985LL;

	t39 = (x177*((x178-x179)<=x180));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 2091377;
	volatile int64_t x182 = -1LL;
	volatile int32_t x183 = INT32_MIN;
	static volatile int32_t t40 = -145004993;

	t40 = (x181*((x182-x183)<=x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x187 = UINT64_MAX;
	int64_t x188 = INT64_MAX;
	static uint32_t t41 = UINT32_MAX;

	t41 = (x185*((x186-x187)<=x188));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MIN;
	int64_t x191 = -188250889674116905LL;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t42 = -12;

	t42 = (x189*((x190-x191)<=x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	volatile uint32_t x199 = 1U;
	uint8_t x200 = UINT8_MAX;
	uint64_t t43 = 87929512454732303LLU;

	t43 = (x197*((x198-x199)<=x200));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x202 = 13U;
	static uint8_t x203 = 14U;
	uint64_t x204 = 172820619536872918LLU;

	t44 = (x201*((x202-x203)<=x204));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x213 = UINT32_MAX;
	volatile int32_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	uint64_t x216 = 3288178479597503LLU;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (x213*((x214-x215)<=x216));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MIN;
	static uint32_t x223 = UINT32_MAX;
	int64_t t46 = 0LL;

	t46 = (x221*((x222-x223)<=x224));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x225 = INT64_MAX;
	static int8_t x226 = INT8_MAX;
	uint64_t x227 = 172864250516LLU;
	uint16_t x228 = 8U;
	volatile int64_t t47 = -306661647995136443LL;

	t47 = (x225*((x226-x227)<=x228));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x229 = 0U;
	int64_t x232 = -6910963674339094LL;
	volatile int32_t t48 = 6468617;

	t48 = (x229*((x230-x231)<=x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x240 = INT32_MAX;

	t49 = (x237*((x238-x239)<=x240));

	if (t49 != 3) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = 0;
	uint16_t x243 = 2U;
	static uint16_t x244 = 4796U;

	t50 = (x241*((x242-x243)<=x244));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x245 = UINT32_MAX;
	static int32_t x246 = -1;
	int32_t x247 = -1;
	int64_t x248 = -255411460220LL;
	uint32_t t51 = 8085U;

	t51 = (x245*((x246-x247)<=x248));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = 11553316685930LL;
	int32_t x250 = INT32_MAX;
	static int64_t x252 = INT64_MAX;

	t52 = (x249*((x250-x251)<=x252));

	if (t52 != 11553316685930LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x253 = INT32_MIN;
	uint8_t x254 = UINT8_MAX;
	static volatile int64_t x255 = -1LL;
	volatile int32_t t53 = -636761;

	t53 = (x253*((x254-x255)<=x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x258 = UINT8_MAX;
	uint32_t x259 = 15728U;
	int64_t x260 = -27037644290LL;
	volatile int32_t t54 = -2745;

	t54 = (x257*((x258-x259)<=x260));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x261 = 30343U;
	int16_t x263 = INT16_MIN;
	volatile uint8_t x264 = 28U;
	int32_t t55 = 789;

	t55 = (x261*((x262-x263)<=x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MAX;
	volatile uint16_t x266 = UINT16_MAX;
	static uint64_t x267 = 30746580098308162LLU;
	uint16_t x268 = UINT16_MAX;
	volatile int64_t t56 = -713071936462994764LL;

	t56 = (x265*((x266-x267)<=x268));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x271 = 1;
	static uint64_t x272 = 27106945613224LLU;
	int32_t t57 = 0;

	t57 = (x269*((x270-x271)<=x272));

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x273 = -16;
	volatile int64_t x274 = 13856797LL;
	volatile int8_t x275 = INT8_MIN;
	static volatile int32_t t58 = 14329048;

	t58 = (x273*((x274-x275)<=x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	volatile int64_t x279 = 253677768673683354LL;
	int32_t x280 = 9562;
	volatile int32_t t59 = -395691374;

	t59 = (x277*((x278-x279)<=x280));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = -1;
	uint16_t x283 = 850U;
	int32_t x284 = INT32_MIN;
	volatile int32_t t60 = 0;

	t60 = (x281*((x282-x283)<=x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x286 = INT64_MIN;
	uint64_t x287 = 427LLU;
	static int8_t x288 = INT8_MIN;
	static volatile uint64_t t61 = UINT64_MAX;

	t61 = (x285*((x286-x287)<=x288));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x289 = 15695U;
	int8_t x290 = 1;
	uint64_t x291 = 20949743860211LLU;
	int32_t x292 = INT32_MIN;
	static volatile uint32_t t62 = 4226150U;

	t62 = (x289*((x290-x291)<=x292));

	if (t62 != 15695U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	static int32_t t63 = -6369;

	t63 = (x293*((x294-x295)<=x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x297 = INT64_MAX;
	static volatile int8_t x298 = INT8_MAX;
	uint16_t x299 = 6074U;
	uint32_t x300 = UINT32_MAX;
	static volatile int64_t t64 = INT64_MAX;

	t64 = (x297*((x298-x299)<=x300));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x301 = -1LL;
	int32_t x302 = 11;
	volatile uint8_t x303 = UINT8_MAX;
	int64_t t65 = 336983279435LL;

	t65 = (x301*((x302-x303)<=x304));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x306 = 63;
	int32_t x308 = INT32_MIN;
	volatile uint32_t t66 = 1782579365U;

	t66 = (x305*((x306-x307)<=x308));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x310 = INT64_MAX;
	uint32_t x311 = 3762318U;
	int64_t x312 = 62689LL;
	int32_t t67 = -9025;

	t67 = (x309*((x310-x311)<=x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 477555646U;
	int8_t x314 = INT8_MIN;
	int16_t x315 = 172;
	int8_t x316 = INT8_MAX;
	volatile uint32_t t68 = 11U;

	t68 = (x313*((x314-x315)<=x316));

	if (t68 != 477555646U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x317 = -1LL;
	volatile int8_t x320 = INT8_MAX;

	t69 = (x317*((x318-x319)<=x320));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = -1;
	int8_t x322 = INT8_MIN;
	volatile int64_t x324 = INT64_MAX;
	volatile int32_t t70 = 18497338;

	t70 = (x321*((x322-x323)<=x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x325 = 687U;

	t71 = (x325*((x326-x327)<=x328));

	if (t71 != 687U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x329 = INT8_MIN;
	uint8_t x330 = 101U;
	int8_t x332 = 8;
	volatile int32_t t72 = 1355072;

	t72 = (x329*((x330-x331)<=x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x337 = 16071287121LLU;
	volatile int8_t x338 = INT8_MAX;
	static int16_t x339 = -56;
	int64_t x340 = INT64_MIN;
	uint64_t t73 = 3868520399LLU;

	t73 = (x337*((x338-x339)<=x340));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x343 = INT32_MAX;
	int64_t t74 = INT64_MIN;

	t74 = (x341*((x342-x343)<=x344));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x345 = INT8_MAX;
	int32_t x346 = -4393;
	volatile int64_t x347 = -1LL;
	int8_t x348 = 6;
	int32_t t75 = -163148943;

	t75 = (x345*((x346-x347)<=x348));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	uint32_t x352 = 0U;
	int32_t t76 = -1699068;

	t76 = (x349*((x350-x351)<=x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x353 = INT32_MIN;
	static uint8_t x354 = UINT8_MAX;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	static int32_t t77 = -7;

	t77 = (x353*((x354-x355)<=x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = -1;
	static uint64_t x363 = 4401797541538106LLU;
	static int32_t t78 = 0;

	t78 = (x361*((x362-x363)<=x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = 69315;
	static uint8_t x368 = 0U;
	int32_t t79 = 68220;

	t79 = (x365*((x366-x367)<=x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = 75947012;
	uint8_t x370 = 46U;
	int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MIN;
	volatile int32_t t80 = 56426;

	t80 = (x369*((x370-x371)<=x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x374 = -1LL;
	volatile int8_t x375 = 6;
	int32_t t81 = 367403;

	t81 = (x373*((x374-x375)<=x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = -887;
	uint8_t x379 = UINT8_MAX;
	uint16_t x380 = 1U;

	t82 = (x377*((x378-x379)<=x380));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = -1;
	static int32_t x382 = 111;
	int16_t x383 = INT16_MAX;
	uint32_t x384 = 899835U;
	int32_t t83 = 76040914;

	t83 = (x381*((x382-x383)<=x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = 0;
	static uint8_t x386 = 3U;
	int16_t x388 = INT16_MIN;
	volatile int32_t t84 = 573121618;

	t84 = (x385*((x386-x387)<=x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x389 = 2;
	uint64_t x390 = 3LLU;
	volatile uint8_t x391 = 1U;
	uint32_t x392 = 86U;
	int32_t t85 = 79;

	t85 = (x389*((x390-x391)<=x392));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = INT8_MIN;
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = 9013LLU;
	int32_t t86 = 15213;

	t86 = (x393*((x394-x395)<=x396));

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x397 = 1202;
	uint32_t x398 = 1583500975U;
	uint16_t x399 = UINT16_MAX;
	volatile int8_t x400 = INT8_MAX;
	int32_t t87 = 115179181;

	t87 = (x397*((x398-x399)<=x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x402 = 5LL;
	static volatile int32_t t88 = INT32_MAX;

	t88 = (x401*((x402-x403)<=x404));

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x405 = INT16_MAX;
	int32_t x406 = -108506;
	int32_t x407 = -1;
	static uint8_t x408 = 5U;
	int32_t t89 = 28557;

	t89 = (x405*((x406-x407)<=x408));

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x414 = 0U;
	uint64_t x415 = 168987LLU;

	t90 = (x413*((x414-x415)<=x416));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x417 = -3;
	static int64_t x420 = INT64_MIN;

	t91 = (x417*((x418-x419)<=x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int32_t x422 = INT32_MIN;
	volatile int64_t x424 = -1LL;
	volatile uint32_t t92 = 2U;

	t92 = (x421*((x422-x423)<=x424));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x425 = -1;
	uint64_t x426 = 4014926776356LLU;
	int32_t t93 = -3483407;

	t93 = (x425*((x426-x427)<=x428));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x433 = 7575;
	int16_t x434 = INT16_MAX;
	int32_t x435 = 10;
	int16_t x436 = 300;
	static volatile int32_t t94 = -22751135;

	t94 = (x433*((x434-x435)<=x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint16_t x437 = 2U;
	uint64_t x438 = UINT64_MAX;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MAX;
	int32_t t95 = -1816;

	t95 = (x437*((x438-x439)<=x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = -1;
	volatile uint8_t x442 = 1U;
	int8_t x443 = 0;
	int32_t t96 = 9981;

	t96 = (x441*((x442-x443)<=x444));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = INT32_MIN;
	int8_t x447 = 8;
	static int8_t x448 = 4;
	static int32_t t97 = INT32_MIN;

	t97 = (x445*((x446-x447)<=x448));

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = INT8_MAX;
	int16_t x450 = 7;
	uint8_t x451 = 6U;
	volatile int64_t x452 = -189688105785002LL;

	t98 = (x449*((x450-x451)<=x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x453 = INT32_MIN;
	int8_t x454 = -1;
	int64_t x455 = INT64_MAX;
	uint8_t x456 = UINT8_MAX;

	t99 = (x453*((x454-x455)<=x456));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

