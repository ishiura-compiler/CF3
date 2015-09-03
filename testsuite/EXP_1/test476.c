#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 209346456349LLU;
static int32_t t0 = -4;
volatile int16_t x7 = -17;
volatile int64_t x8 = INT64_MAX;
int8_t x18 = INT8_MAX;
volatile int16_t x20 = INT16_MIN;
volatile uint32_t x22 = 54U;
volatile int32_t t4 = -5901195;
int32_t x30 = -1;
static int64_t x45 = -237649257117436LL;
uint16_t x48 = UINT16_MAX;
volatile int64_t x49 = -1LL;
static uint32_t x53 = UINT32_MAX;
static int32_t x58 = -1;
static uint8_t x60 = UINT8_MAX;
uint16_t x64 = 11745U;
volatile int32_t x67 = -1;
volatile uint8_t x70 = UINT8_MAX;
int16_t x71 = -203;
int32_t t15 = -8950;
int8_t x86 = 1;
static int32_t x88 = 178007;
uint32_t x95 = 431U;
volatile uint64_t x97 = 88856927121664790LLU;
static volatile int32_t t19 = 1142686;
int8_t x114 = 19;
volatile int8_t x118 = -1;
int16_t x120 = -2380;
uint32_t x122 = 58748972U;
volatile uint32_t x123 = 3284U;
int16_t x127 = 6574;
uint16_t x130 = 1U;
volatile int8_t x132 = -1;
int32_t x139 = -1;
static int8_t x148 = -56;
int8_t x158 = INT8_MAX;
static uint32_t x159 = 1289U;
volatile int64_t x160 = -3362392396LL;
volatile int8_t x164 = INT8_MIN;
volatile uint16_t x168 = UINT16_MAX;
int32_t x175 = 2;
int16_t x178 = INT16_MIN;
uint64_t x184 = 73918923819172LLU;
int8_t x195 = INT8_MAX;
int64_t x198 = 1221LL;
static int16_t x200 = 1506;
uint32_t x201 = 129383U;
uint64_t x203 = UINT64_MAX;
static int64_t x204 = INT64_MIN;
int32_t t37 = -232438;
volatile int32_t t38 = -4310582;
int64_t x223 = -7443LL;
int64_t x233 = -500230LL;
uint16_t x235 = 1423U;
uint16_t x240 = UINT16_MAX;
static int32_t t43 = 0;
int16_t x245 = INT16_MAX;
int32_t t45 = 694;
static volatile int8_t x255 = INT8_MAX;
int16_t x262 = -847;
int16_t x263 = 1234;
int32_t x296 = INT32_MIN;
int8_t x297 = INT8_MIN;
int16_t x304 = INT16_MIN;
volatile uint8_t x311 = 28U;
int32_t x312 = INT32_MIN;
volatile int32_t t56 = -22;
volatile int32_t x314 = -1;
uint32_t x320 = 7333963U;
static int8_t x321 = -1;
static uint64_t x334 = UINT64_MAX;
static uint16_t x335 = UINT16_MAX;
int8_t x336 = INT8_MAX;
int32_t t60 = -417;
int64_t x340 = INT64_MIN;
uint16_t x345 = 13135U;
int32_t x347 = INT32_MAX;
volatile uint16_t x348 = 214U;
volatile int32_t t68 = -45485245;
int64_t x381 = 16393950201536LL;
uint16_t x383 = 9904U;
static volatile int32_t x384 = INT32_MIN;
uint32_t x386 = 1U;
int32_t t70 = -4;
int64_t x395 = -183817286932LL;
volatile int32_t t72 = -29890757;
int32_t x411 = INT32_MAX;
static volatile int64_t x416 = 4LL;
int32_t t77 = 446;
volatile int32_t t78 = -919;
int64_t x447 = INT64_MIN;
int64_t x448 = INT64_MIN;
int8_t x450 = 0;
static uint8_t x452 = UINT8_MAX;
volatile uint64_t x454 = UINT64_MAX;
uint64_t x457 = 1548LLU;
static int32_t x459 = INT32_MIN;
int32_t t84 = -3191433;
volatile uint16_t x469 = UINT16_MAX;
int64_t x472 = -1525829543196282LL;
uint8_t x482 = UINT8_MAX;
static int8_t x483 = INT8_MIN;
volatile uint8_t x485 = 1U;
int64_t x493 = -1LL;
int16_t x497 = -1;
volatile int64_t x499 = INT64_MAX;
volatile int8_t x506 = -1;
static int8_t x507 = 1;
uint64_t x529 = 893854744994216505LLU;
static int16_t x531 = -1;
volatile int8_t x532 = INT8_MAX;


void f0(void) {
	volatile uint8_t x1 = UINT8_MAX;
	int16_t x3 = INT16_MIN;
	uint32_t x4 = 166U;

	t0 = (((x1*x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -1;
	int16_t x6 = INT16_MAX;
	int32_t t1 = -1959;

	t1 = (((x5*x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = INT16_MAX;
	static volatile int32_t x19 = INT32_MIN;
	volatile int32_t t2 = 1;

	t2 = (((x17*x18)&x19)==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x21 = 31U;
	int64_t x23 = INT64_MIN;
	int16_t x24 = -2351;
	volatile int32_t t3 = -6074506;

	t3 = (((x21*x22)&x23)==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x25 = 2U;
	int16_t x26 = INT16_MIN;
	static uint8_t x27 = 23U;
	volatile int32_t x28 = INT32_MAX;

	t4 = (((x25*x26)&x27)==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1;
	int8_t x31 = -1;
	int16_t x32 = 32;
	int32_t t5 = 15;

	t5 = (((x29*x30)&x31)==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x33 = -1;
	uint64_t x34 = UINT64_MAX;
	static int64_t x35 = -335764399948429713LL;
	int32_t x36 = INT32_MIN;
	int32_t t6 = 30;

	t6 = (((x33*x34)&x35)==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x46 = INT8_MAX;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t t7 = -12172;

	t7 = (((x45*x46)&x47)==x48);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x50 = -1;
	uint8_t x51 = 10U;
	int8_t x52 = INT8_MIN;
	volatile int32_t t8 = -32493;

	t8 = (((x49*x50)&x51)==x52);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x54 = 44U;
	int32_t x55 = -1;
	volatile int32_t x56 = -1095;
	volatile int32_t t9 = 0;

	t9 = (((x53*x54)&x55)==x56);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 725;
	volatile int8_t x59 = 0;
	static volatile int32_t t10 = 121366834;

	t10 = (((x57*x58)&x59)==x60);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	int8_t x62 = -1;
	static int32_t x63 = INT32_MAX;
	volatile int32_t t11 = 791355057;

	t11 = (((x61*x62)&x63)==x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = 33;
	static int32_t x66 = -1;
	uint16_t x68 = 52U;
	volatile int32_t t12 = 11;

	t12 = (((x65*x66)&x67)==x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x69 = 4906LLU;
	int16_t x72 = INT16_MIN;
	int32_t t13 = 208231;

	t13 = (((x69*x70)&x71)==x72);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x77 = 3608U;
	int8_t x78 = 35;
	int16_t x79 = 92;
	uint16_t x80 = 36U;
	static int32_t t14 = 557181311;

	t14 = (((x77*x78)&x79)==x80);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = UINT16_MAX;
	volatile int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;

	t15 = (((x81*x82)&x83)==x84);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x85 = INT32_MIN;
	volatile uint16_t x87 = UINT16_MAX;
	volatile int32_t t16 = -54;

	t16 = (((x85*x86)&x87)==x88);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x93 = 0;
	uint16_t x94 = UINT16_MAX;
	int64_t x96 = -1690911294120LL;
	int32_t t17 = 2;

	t17 = (((x93*x94)&x95)==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x98 = 15566008LLU;
	static volatile uint8_t x99 = 54U;
	uint64_t x100 = 1343644938125804067LLU;
	volatile int32_t t18 = -91584840;

	t18 = (((x97*x98)&x99)==x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -5;
	static uint32_t x106 = UINT32_MAX;
	static volatile int16_t x107 = 9435;
	int8_t x108 = INT8_MIN;

	t19 = (((x105*x106)&x107)==x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x113 = 11U;
	volatile int64_t x115 = INT64_MIN;
	volatile int32_t x116 = -1;
	volatile int32_t t20 = 9095;

	t20 = (((x113*x114)&x115)==x116);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MAX;
	int8_t x119 = INT8_MIN;
	int32_t t21 = -808841326;

	t21 = (((x117*x118)&x119)==x120);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = -1966463488LL;
	uint64_t x124 = 4596047226655297677LLU;
	volatile int32_t t22 = 1;

	t22 = (((x121*x122)&x123)==x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = UINT32_MAX;
	static int16_t x126 = 0;
	uint32_t x128 = 254U;
	volatile int32_t t23 = 1;

	t23 = (((x125*x126)&x127)==x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = -4444;
	int64_t x131 = INT64_MAX;
	static volatile int32_t t24 = -1630;

	t24 = (((x129*x130)&x131)==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = UINT64_MAX;
	int32_t x134 = -17282;
	int16_t x135 = -5706;
	uint8_t x136 = 1U;
	volatile int32_t t25 = -209036913;

	t25 = (((x133*x134)&x135)==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = -10625;
	uint64_t x138 = 742120LLU;
	int16_t x140 = -8017;
	int32_t t26 = -24885377;

	t26 = (((x137*x138)&x139)==x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x145 = UINT64_MAX;
	int32_t x146 = INT32_MAX;
	int8_t x147 = -1;
	int32_t t27 = 1;

	t27 = (((x145*x146)&x147)==x148);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x157 = UINT8_MAX;
	int32_t t28 = -1050354;

	t28 = (((x157*x158)&x159)==x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x161 = 771596731709649581LLU;
	int64_t x162 = -1LL;
	static int8_t x163 = INT8_MAX;
	volatile int32_t t29 = 1;

	t29 = (((x161*x162)&x163)==x164);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = INT16_MAX;
	int8_t x167 = -1;
	static volatile int32_t t30 = 0;

	t30 = (((x165*x166)&x167)==x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x173 = INT16_MIN;
	static uint16_t x174 = 2694U;
	static volatile int16_t x176 = INT16_MIN;
	volatile int32_t t31 = 568259;

	t31 = (((x173*x174)&x175)==x176);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x177 = -1;
	int8_t x179 = INT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t32 = -2379;

	t32 = (((x177*x178)&x179)==x180);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x181 = 1060453992846207381LLU;
	uint32_t x182 = 66405783U;
	uint16_t x183 = 10899U;
	volatile int32_t t33 = -38532;

	t33 = (((x181*x182)&x183)==x184);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x189 = 381560LLU;
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = INT64_MIN;
	static int32_t x192 = 2676460;
	volatile int32_t t34 = -3839;

	t34 = (((x189*x190)&x191)==x192);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x193 = UINT64_MAX;
	static uint8_t x194 = UINT8_MAX;
	uint8_t x196 = 0U;
	volatile int32_t t35 = -1911;

	t35 = (((x193*x194)&x195)==x196);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = 15;
	volatile uint32_t x199 = UINT32_MAX;
	int32_t t36 = 82;

	t36 = (((x197*x198)&x199)==x200);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x202 = -1;

	t37 = (((x201*x202)&x203)==x204);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x209 = 7U;
	volatile int32_t x210 = 312750;
	int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MAX;

	t38 = (((x209*x210)&x211)==x212);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x213 = -1;
	volatile uint8_t x214 = 35U;
	int32_t x215 = INT32_MIN;
	volatile uint8_t x216 = 102U;
	volatile int32_t t39 = 84;

	t39 = (((x213*x214)&x215)==x216);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = -1;
	uint8_t x222 = 50U;
	int16_t x224 = -23;
	int32_t t40 = -307011943;

	t40 = (((x221*x222)&x223)==x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x229 = 0;
	static volatile int32_t x230 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	int8_t x232 = -31;
	int32_t t41 = -1;

	t41 = (((x229*x230)&x231)==x232);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x234 = -1;
	int64_t x236 = -1781945085622375230LL;
	volatile int32_t t42 = -305985;

	t42 = (((x233*x234)&x235)==x236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x237 = 1827542U;
	static uint16_t x238 = 54U;
	uint32_t x239 = 27961U;

	t43 = (((x237*x238)&x239)==x240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x241 = 2;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 2;
	int64_t x244 = INT64_MAX;
	volatile int32_t t44 = -1;

	t44 = (((x241*x242)&x243)==x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x246 = 2U;
	volatile int8_t x247 = INT8_MIN;
	static uint16_t x248 = UINT16_MAX;

	t45 = (((x245*x246)&x247)==x248);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t46 = 1;

	t46 = (((x253*x254)&x255)==x256);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x261 = 9;
	static int32_t x264 = -1;
	int32_t t47 = -1703;

	t47 = (((x261*x262)&x263)==x264);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x269 = 1U;
	static volatile int16_t x270 = -1;
	int16_t x271 = INT16_MAX;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t48 = -11;

	t48 = (((x269*x270)&x271)==x272);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x277 = INT32_MIN;
	uint64_t x278 = 205437968389613LLU;
	volatile uint8_t x279 = UINT8_MAX;
	int16_t x280 = -3346;
	int32_t t49 = -36945994;

	t49 = (((x277*x278)&x279)==x280);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x281 = 1U;
	static volatile int32_t x282 = 8;
	static uint64_t x283 = 27115684LLU;
	int32_t x284 = -1;
	static int32_t t50 = 11;

	t50 = (((x281*x282)&x283)==x284);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x289 = -1LL;
	static int16_t x290 = -6;
	uint8_t x291 = UINT8_MAX;
	uint64_t x292 = 252911836324LLU;
	volatile int32_t t51 = 4048960;

	t51 = (((x289*x290)&x291)==x292);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x293 = 982577LLU;
	int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = 98643U;
	int32_t t52 = 9;

	t52 = (((x293*x294)&x295)==x296);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x298 = INT16_MIN;
	int32_t x299 = -25629;
	int16_t x300 = 261;
	volatile int32_t t53 = 435288;

	t53 = (((x297*x298)&x299)==x300);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x301 = INT16_MAX;
	static int64_t x302 = -1LL;
	volatile int8_t x303 = INT8_MIN;
	int32_t t54 = -50956286;

	t54 = (((x301*x302)&x303)==x304);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x305 = -1;
	uint64_t x306 = 20630628419332421LLU;
	uint32_t x307 = 5029934U;
	uint16_t x308 = 4061U;
	int32_t t55 = -27;

	t55 = (((x305*x306)&x307)==x308);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MAX;

	t56 = (((x309*x310)&x311)==x312);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x313 = 832U;
	int32_t x315 = INT32_MAX;
	volatile int8_t x316 = -1;
	volatile int32_t t57 = 4011721;

	t57 = (((x313*x314)&x315)==x316);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MIN;
	volatile uint64_t x319 = UINT64_MAX;
	volatile int32_t t58 = 54142123;

	t58 = (((x317*x318)&x319)==x320);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x322 = INT16_MAX;
	static uint8_t x323 = UINT8_MAX;
	static int32_t x324 = -7;
	volatile int32_t t59 = -112;

	t59 = (((x321*x322)&x323)==x324);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x333 = 699U;

	t60 = (((x333*x334)&x335)==x336);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x337 = 3U;
	static int16_t x338 = INT16_MAX;
	int8_t x339 = 16;
	int32_t t61 = -120;

	t61 = (((x337*x338)&x339)==x340);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x341 = -37;
	uint32_t x342 = 829U;
	int32_t x343 = INT32_MIN;
	int32_t x344 = INT32_MAX;
	volatile int32_t t62 = -25;

	t62 = (((x341*x342)&x343)==x344);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x346 = 650057089753290LLU;
	int32_t t63 = 46610;

	t63 = (((x345*x346)&x347)==x348);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x349 = -1LL;
	static uint32_t x350 = 260174U;
	static int64_t x351 = 1LL;
	int32_t x352 = -428309497;
	volatile int32_t t64 = 1;

	t64 = (((x349*x350)&x351)==x352);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x353 = 71U;
	volatile int16_t x354 = INT16_MAX;
	volatile int64_t x355 = INT64_MIN;
	uint16_t x356 = 20U;
	static int32_t t65 = 2;

	t65 = (((x353*x354)&x355)==x356);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x365 = UINT32_MAX;
	int16_t x366 = -1;
	int64_t x367 = 1LL;
	int64_t x368 = -3LL;
	volatile int32_t t66 = 59489;

	t66 = (((x365*x366)&x367)==x368);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = 8435346908050LL;
	uint8_t x374 = 105U;
	static volatile int8_t x375 = INT8_MIN;
	int64_t x376 = 8LL;
	int32_t t67 = -93;

	t67 = (((x373*x374)&x375)==x376);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x378 = 31U;
	static uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MIN;

	t68 = (((x377*x378)&x379)==x380);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x382 = 47U;
	int32_t t69 = -1;

	t69 = (((x381*x382)&x383)==x384);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x385 = -744;
	uint64_t x387 = 257131917719110LLU;
	volatile int64_t x388 = INT64_MAX;

	t70 = (((x385*x386)&x387)==x388);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x389 = UINT16_MAX;
	static int16_t x390 = -1;
	uint64_t x391 = UINT64_MAX;
	uint8_t x392 = 2U;
	static volatile int32_t t71 = -440;

	t71 = (((x389*x390)&x391)==x392);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x393 = 2148U;
	int8_t x394 = -1;
	int16_t x396 = 48;

	t72 = (((x393*x394)&x395)==x396);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x397 = -10141231LL;
	int64_t x398 = 4627197LL;
	static int32_t x399 = -969420;
	int32_t x400 = 0;
	volatile int32_t t73 = 134;

	t73 = (((x397*x398)&x399)==x400);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = 1U;
	uint32_t x406 = 14758U;
	int64_t x407 = -1592471288740LL;
	volatile uint16_t x408 = 1714U;
	static int32_t t74 = 0;

	t74 = (((x405*x406)&x407)==x408);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = -5787541371LL;
	int16_t x410 = INT16_MIN;
	uint16_t x412 = UINT16_MAX;
	volatile int32_t t75 = 1560;

	t75 = (((x409*x410)&x411)==x412);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x414 = 61U;
	static int8_t x415 = -1;
	int32_t t76 = -5936;

	t76 = (((x413*x414)&x415)==x416);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x417 = 5U;
	int16_t x418 = INT16_MAX;
	static int8_t x419 = INT8_MAX;
	int16_t x420 = -2;

	t77 = (((x417*x418)&x419)==x420);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x433 = UINT8_MAX;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MAX;
	static int64_t x436 = INT64_MIN;

	t78 = (((x433*x434)&x435)==x436);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x437 = INT16_MIN;
	int64_t x438 = -254925466LL;
	int64_t x439 = INT64_MIN;
	int8_t x440 = 5;
	int32_t t79 = -3649;

	t79 = (((x437*x438)&x439)==x440);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x445 = -859209LL;
	int32_t x446 = -1;
	volatile int32_t t80 = 0;

	t80 = (((x445*x446)&x447)==x448);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x449 = INT8_MAX;
	uint16_t x451 = UINT16_MAX;
	volatile int32_t t81 = -3;

	t81 = (((x449*x450)&x451)==x452);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x453 = 4U;
	static uint32_t x455 = 1U;
	static int16_t x456 = INT16_MIN;
	volatile int32_t t82 = -2916572;

	t82 = (((x453*x454)&x455)==x456);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint32_t x458 = 6260U;
	volatile uint16_t x460 = UINT16_MAX;
	static int32_t t83 = 97;

	t83 = (((x457*x458)&x459)==x460);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x465 = 14225;
	uint16_t x466 = 1U;
	int32_t x467 = -11106;
	uint32_t x468 = 353903936U;

	t84 = (((x465*x466)&x467)==x468);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x470 = 254112184807677622LLU;
	uint64_t x471 = 66786094080LLU;
	volatile int32_t t85 = 96809455;

	t85 = (((x469*x470)&x471)==x472);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x473 = 12;
	static uint8_t x474 = UINT8_MAX;
	static volatile int32_t x475 = -1;
	int16_t x476 = 13;
	static int32_t t86 = -495535;

	t86 = (((x473*x474)&x475)==x476);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x481 = 13;
	uint32_t x484 = 11U;
	int32_t t87 = -60;

	t87 = (((x481*x482)&x483)==x484);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x486 = 23U;
	int16_t x487 = -514;
	static int8_t x488 = INT8_MIN;
	static volatile int32_t t88 = -81;

	t88 = (((x485*x486)&x487)==x488);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x489 = INT32_MIN;
	static uint64_t x490 = UINT64_MAX;
	int8_t x491 = 0;
	uint64_t x492 = 26520756065LLU;
	int32_t t89 = -7214;

	t89 = (((x489*x490)&x491)==x492);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x494 = 3;
	int32_t x495 = 204832092;
	uint64_t x496 = 236321062426950LLU;
	static int32_t t90 = -12808;

	t90 = (((x493*x494)&x495)==x496);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x498 = -1LL;
	int8_t x500 = INT8_MIN;
	volatile int32_t t91 = 145670;

	t91 = (((x497*x498)&x499)==x500);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x505 = 7U;
	uint64_t x508 = 81256875939273LLU;
	volatile int32_t t92 = 0;

	t92 = (((x505*x506)&x507)==x508);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x509 = INT8_MIN;
	volatile int16_t x510 = 3451;
	volatile uint16_t x511 = UINT16_MAX;
	static int16_t x512 = INT16_MAX;
	volatile int32_t t93 = 1;

	t93 = (((x509*x510)&x511)==x512);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x513 = -168118;
	int8_t x514 = INT8_MIN;
	int8_t x515 = 0;
	int64_t x516 = INT64_MAX;
	int32_t t94 = -52;

	t94 = (((x513*x514)&x515)==x516);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x517 = 262U;
	uint16_t x518 = 192U;
	int32_t x519 = INT32_MIN;
	uint32_t x520 = 19186012U;
	int32_t t95 = -2546;

	t95 = (((x517*x518)&x519)==x520);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x521 = 0;
	int64_t x522 = INT64_MIN;
	int8_t x523 = INT8_MAX;
	static int64_t x524 = INT64_MIN;
	volatile int32_t t96 = -1019;

	t96 = (((x521*x522)&x523)==x524);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x525 = 22353U;
	int16_t x526 = INT16_MIN;
	int8_t x527 = 0;
	int16_t x528 = INT16_MIN;
	volatile int32_t t97 = -1;

	t97 = (((x525*x526)&x527)==x528);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x530 = -3;
	static volatile int32_t t98 = 90021144;

	t98 = (((x529*x530)&x531)==x532);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x533 = UINT8_MAX;
	int8_t x534 = 0;
	volatile int16_t x535 = INT16_MIN;
	int8_t x536 = INT8_MAX;
	int32_t t99 = 893;

	t99 = (((x533*x534)&x535)==x536);

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

