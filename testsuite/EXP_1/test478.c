#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = 3180460321873356LL;
volatile int32_t t0 = -1;
int64_t x7 = INT64_MIN;
volatile int8_t x10 = 2;
int32_t t2 = 1253;
int16_t x22 = 14988;
static uint64_t x28 = 1982LLU;
volatile int32_t t6 = 588;
int32_t x31 = INT32_MIN;
uint32_t x34 = 8862U;
volatile int32_t t9 = 26;
static volatile int8_t x45 = 0;
uint32_t x46 = 187234U;
uint32_t x62 = UINT32_MAX;
volatile uint32_t x64 = 20254U;
uint64_t x71 = UINT64_MAX;
volatile uint16_t x86 = 14642U;
static volatile int16_t x103 = INT16_MIN;
uint64_t x106 = 55975LLU;
int16_t x119 = INT16_MIN;
volatile uint16_t x128 = 15114U;
static int16_t x135 = INT16_MAX;
static uint64_t x147 = 7367894550881LLU;
volatile uint16_t x148 = 31374U;
volatile int8_t x149 = -20;
static int16_t x152 = INT16_MIN;
static int32_t t25 = -78912;
uint16_t x171 = UINT16_MAX;
static uint64_t x178 = UINT64_MAX;
int8_t x188 = INT8_MAX;
static uint64_t x193 = 810LLU;
int32_t x194 = -6743;
uint16_t x195 = 4U;
int8_t x197 = INT8_MIN;
int8_t x214 = -5;
static volatile uint16_t x221 = 792U;
uint16_t x222 = 1724U;
volatile int32_t x224 = INT32_MAX;
static int32_t t37 = -41335;
int16_t x230 = -1;
uint16_t x231 = 22686U;
volatile int64_t x232 = -1LL;
int64_t x235 = -11861888964842LL;
volatile uint64_t x236 = UINT64_MAX;
int32_t t39 = 511;
static uint16_t x237 = 324U;
int32_t t42 = 2723;
int16_t x257 = INT16_MIN;
int64_t x261 = INT64_MAX;
uint32_t x264 = 17376U;
static int16_t x270 = INT16_MAX;
int64_t x273 = 30126904038712LL;
volatile int16_t x274 = -1;
uint64_t x279 = 387822822LLU;
int16_t x290 = INT16_MAX;
volatile int32_t x304 = INT32_MIN;
int64_t x309 = -1LL;
volatile int16_t x311 = -1;
uint64_t x314 = 20LLU;
uint16_t x323 = UINT16_MAX;
int32_t t58 = -59195;
static uint8_t x361 = 5U;
uint64_t x364 = UINT64_MAX;
static uint16_t x366 = 156U;
uint16_t x377 = 6076U;
static int32_t x379 = INT32_MAX;
uint8_t x393 = 88U;
static volatile int32_t t67 = 537;
uint64_t x403 = 38LLU;
uint64_t x409 = 240LLU;
int16_t x419 = INT16_MAX;
volatile uint32_t x422 = 751U;
uint8_t x423 = 12U;
uint64_t x426 = 1LLU;
uint64_t x428 = 0LLU;
volatile int64_t x429 = -13LL;
volatile int32_t x430 = 4075;
int64_t x432 = INT64_MAX;
int16_t x442 = 0;
uint8_t x457 = UINT8_MAX;
volatile int64_t x460 = -1LL;
volatile int64_t x465 = -84LL;
volatile int32_t t79 = 62709;
static uint32_t x476 = 57150244U;
volatile int16_t x482 = INT16_MIN;
int64_t x484 = INT64_MAX;
volatile int32_t t81 = -238934703;
int16_t x485 = INT16_MIN;
static int32_t x495 = -965;
static int8_t x505 = INT8_MAX;
volatile int64_t x508 = INT64_MIN;
int32_t x509 = -1;
int16_t x518 = INT16_MIN;
static int16_t x520 = INT16_MIN;
volatile uint64_t x528 = 9LLU;
int8_t x529 = INT8_MIN;
int16_t x531 = INT16_MIN;
int64_t x532 = INT64_MIN;
uint32_t x544 = 2358U;
volatile int32_t t92 = -7227;
int32_t x552 = INT32_MIN;
volatile uint16_t x555 = UINT16_MAX;
uint64_t x582 = UINT64_MAX;
static int32_t t99 = 1009859;


void f0(void) {
	static uint32_t x1 = 11979633U;
	uint8_t x2 = 49U;
	static uint8_t x3 = 110U;

	t0 = (((x1*x2)&x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 14;
	static int16_t x6 = 0;
	volatile uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = -435295;

	t1 = (((x5*x6)&x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 1;
	int16_t x11 = -1;
	int16_t x12 = INT16_MAX;

	t2 = (((x9*x10)&x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static volatile int8_t x14 = INT8_MAX;
	static int64_t x15 = INT64_MAX;
	uint32_t x16 = 35U;
	static volatile int32_t t3 = -185358;

	t3 = (((x13*x14)&x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 4;
	volatile uint8_t x18 = 7U;
	uint32_t x19 = UINT32_MAX;
	int64_t x20 = INT64_MAX;
	int32_t t4 = -1;

	t4 = (((x17*x18)&x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -1;
	uint32_t x23 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	static volatile int32_t t5 = -93169;

	t5 = (((x21*x22)&x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = 1;
	int64_t x26 = -1LL;
	static uint8_t x27 = UINT8_MAX;

	t6 = (((x25*x26)&x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -24;

	t7 = (((x29*x30)&x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x35 = 4290U;
	int64_t x36 = -1988352LL;
	volatile int32_t t8 = 2;

	t8 = (((x33*x34)&x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -949131586LL;
	uint16_t x38 = 7697U;
	int32_t x39 = 142663;
	volatile int64_t x40 = INT64_MAX;

	t9 = (((x37*x38)&x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x47 = INT32_MIN;
	uint8_t x48 = UINT8_MAX;
	static int32_t t10 = 20;

	t10 = (((x45*x46)&x47)<=x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = INT16_MAX;
	uint64_t x63 = UINT64_MAX;
	static volatile int32_t t11 = -1;

	t11 = (((x61*x62)&x63)<=x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x69 = INT32_MIN;
	static uint32_t x70 = 7U;
	int16_t x72 = INT16_MIN;
	int32_t t12 = -1;

	t12 = (((x69*x70)&x71)<=x72);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = 1;
	uint8_t x78 = 0U;
	int8_t x79 = INT8_MIN;
	static uint64_t x80 = UINT64_MAX;
	volatile int32_t t13 = -6320287;

	t13 = (((x77*x78)&x79)<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = UINT32_MAX;
	static int8_t x82 = INT8_MAX;
	int32_t x83 = -165041739;
	static int8_t x84 = INT8_MAX;
	int32_t t14 = -119;

	t14 = (((x81*x82)&x83)<=x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = -1LL;
	static int64_t x87 = -1LL;
	volatile int16_t x88 = 1244;
	int32_t t15 = -9;

	t15 = (((x85*x86)&x87)<=x88);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = INT8_MAX;
	int8_t x98 = INT8_MAX;
	static int16_t x99 = INT16_MAX;
	int16_t x100 = INT16_MIN;
	volatile int32_t t16 = -1126;

	t16 = (((x97*x98)&x99)<=x100);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x101 = UINT32_MAX;
	uint8_t x102 = 19U;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t17 = 16527637;

	t17 = (((x101*x102)&x103)<=x104);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x105 = 1709593LLU;
	int32_t x107 = 1041309;
	int8_t x108 = INT8_MAX;
	int32_t t18 = -1508391;

	t18 = (((x105*x106)&x107)<=x108);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x113 = -1;
	int16_t x114 = -1;
	int32_t x115 = INT32_MAX;
	int16_t x116 = 4059;
	int32_t t19 = 12784;

	t19 = (((x113*x114)&x115)<=x116);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = INT16_MIN;
	uint16_t x120 = 915U;
	static int32_t t20 = -1848;

	t20 = (((x117*x118)&x119)<=x120);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x125 = 397U;
	static int32_t x126 = -1;
	uint8_t x127 = 18U;
	static volatile int32_t t21 = -39;

	t21 = (((x125*x126)&x127)<=x128);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x133 = 12LLU;
	uint64_t x134 = 2119043484LLU;
	int64_t x136 = INT64_MIN;
	int32_t t22 = 100376828;

	t22 = (((x133*x134)&x135)<=x136);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x137 = 1LLU;
	uint64_t x138 = 108001100857600000LLU;
	int64_t x139 = INT64_MAX;
	uint64_t x140 = UINT64_MAX;
	int32_t t23 = 1;

	t23 = (((x137*x138)&x139)<=x140);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x145 = 0U;
	static volatile uint32_t x146 = 6502201U;
	static volatile int32_t t24 = -549;

	t24 = (((x145*x146)&x147)<=x148);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x150 = 318465764LLU;
	int8_t x151 = INT8_MIN;

	t25 = (((x149*x150)&x151)<=x152);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x153 = 5915544;
	uint8_t x154 = UINT8_MAX;
	static int64_t x155 = INT64_MIN;
	static volatile int32_t x156 = -1;
	volatile int32_t t26 = -3;

	t26 = (((x153*x154)&x155)<=x156);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x158 = -1;
	volatile uint64_t x159 = 933LLU;
	int32_t x160 = INT32_MIN;
	volatile int32_t t27 = 220;

	t27 = (((x157*x158)&x159)<=x160);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x161 = INT16_MIN;
	uint8_t x162 = 1U;
	volatile uint8_t x163 = UINT8_MAX;
	uint8_t x164 = 1U;
	int32_t t28 = -98565;

	t28 = (((x161*x162)&x163)<=x164);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x169 = -1;
	int64_t x170 = -1LL;
	int16_t x172 = -1;
	int32_t t29 = 28;

	t29 = (((x169*x170)&x171)<=x172);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x177 = 0;
	int8_t x179 = -22;
	int32_t x180 = INT32_MIN;
	int32_t t30 = -29843783;

	t30 = (((x177*x178)&x179)<=x180);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x181 = 113U;
	int16_t x182 = -1;
	volatile int32_t x183 = INT32_MIN;
	volatile int16_t x184 = 2;
	int32_t t31 = 46;

	t31 = (((x181*x182)&x183)<=x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x185 = 5U;
	uint64_t x186 = UINT64_MAX;
	int64_t x187 = INT64_MAX;
	int32_t t32 = -71746460;

	t32 = (((x185*x186)&x187)<=x188);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x196 = INT32_MIN;
	static int32_t t33 = 5477258;

	t33 = (((x193*x194)&x195)<=x196);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x198 = 11563954880054LL;
	volatile uint16_t x199 = 3635U;
	int32_t x200 = INT32_MIN;
	int32_t t34 = 4;

	t34 = (((x197*x198)&x199)<=x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x201 = -1;
	uint32_t x202 = 1U;
	static int32_t x203 = -121481;
	volatile uint16_t x204 = 29U;
	int32_t t35 = 1006043366;

	t35 = (((x201*x202)&x203)<=x204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x213 = 22;
	int8_t x215 = -54;
	volatile uint8_t x216 = 6U;
	int32_t t36 = -7;

	t36 = (((x213*x214)&x215)<=x216);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x223 = 6;

	t37 = (((x221*x222)&x223)<=x224);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t t38 = -55;

	t38 = (((x229*x230)&x231)<=x232);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x233 = 27U;
	volatile uint32_t x234 = 42831U;

	t39 = (((x233*x234)&x235)<=x236);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x238 = -222042;
	volatile uint8_t x239 = UINT8_MAX;
	uint16_t x240 = 127U;
	int32_t t40 = -9;

	t40 = (((x237*x238)&x239)<=x240);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x249 = -1LL;
	uint8_t x250 = 1U;
	volatile uint64_t x251 = UINT64_MAX;
	uint64_t x252 = 1941LLU;
	int32_t t41 = -10623;

	t41 = (((x249*x250)&x251)<=x252);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x253 = 3;
	int8_t x254 = -1;
	uint16_t x255 = 9649U;
	volatile uint16_t x256 = 580U;

	t42 = (((x253*x254)&x255)<=x256);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x258 = INT8_MAX;
	uint32_t x259 = UINT32_MAX;
	int64_t x260 = 3619735376952320225LL;
	int32_t t43 = -703964488;

	t43 = (((x257*x258)&x259)<=x260);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x262 = 809248208799705283LLU;
	volatile int32_t x263 = INT32_MAX;
	int32_t t44 = 1;

	t44 = (((x261*x262)&x263)<=x264);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x269 = 3U;
	int16_t x271 = 2;
	int64_t x272 = INT64_MAX;
	volatile int32_t t45 = -494;

	t45 = (((x269*x270)&x271)<=x272);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MIN;
	int32_t t46 = 1224739;

	t46 = (((x273*x274)&x275)<=x276);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int16_t x278 = INT16_MAX;
	int8_t x280 = 5;
	int32_t t47 = -26106;

	t47 = (((x277*x278)&x279)<=x280);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x281 = UINT8_MAX;
	static int64_t x282 = -411LL;
	static uint64_t x283 = 3125268567213681LLU;
	int8_t x284 = INT8_MIN;
	static int32_t t48 = 1900913;

	t48 = (((x281*x282)&x283)<=x284);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x285 = -1;
	static uint8_t x286 = 38U;
	uint64_t x287 = 4939194020173LLU;
	int64_t x288 = -1LL;
	int32_t t49 = 2310;

	t49 = (((x285*x286)&x287)<=x288);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x289 = 10991;
	int32_t x291 = INT32_MAX;
	static int16_t x292 = INT16_MAX;
	volatile int32_t t50 = 16152468;

	t50 = (((x289*x290)&x291)<=x292);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x297 = -1LL;
	volatile int64_t x298 = -162088525209LL;
	static int8_t x299 = 0;
	volatile int16_t x300 = -357;
	volatile int32_t t51 = 523861011;

	t51 = (((x297*x298)&x299)<=x300);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x301 = 850108U;
	uint8_t x302 = 22U;
	int32_t x303 = INT32_MAX;
	volatile int32_t t52 = -1405488;

	t52 = (((x301*x302)&x303)<=x304);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x310 = 3341U;
	static int32_t x312 = INT32_MIN;
	volatile int32_t t53 = -337333;

	t53 = (((x309*x310)&x311)<=x312);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x313 = INT16_MAX;
	volatile int64_t x315 = INT64_MIN;
	volatile int8_t x316 = INT8_MIN;
	int32_t t54 = -24292;

	t54 = (((x313*x314)&x315)<=x316);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x321 = 0;
	static int32_t x322 = -113538289;
	volatile uint8_t x324 = 0U;
	int32_t t55 = -15982658;

	t55 = (((x321*x322)&x323)<=x324);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x325 = 1;
	uint64_t x326 = 12671LLU;
	volatile uint8_t x327 = 0U;
	volatile uint64_t x328 = UINT64_MAX;
	volatile int32_t t56 = -5800;

	t56 = (((x325*x326)&x327)<=x328);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x333 = 29376U;
	volatile int8_t x334 = INT8_MIN;
	static int64_t x335 = -1LL;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t57 = 17;

	t57 = (((x333*x334)&x335)<=x336);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x345 = UINT8_MAX;
	int16_t x346 = INT16_MIN;
	uint16_t x347 = 0U;
	volatile uint32_t x348 = UINT32_MAX;

	t58 = (((x345*x346)&x347)<=x348);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -1;
	static int32_t x351 = 47245;
	volatile int32_t x352 = 7;
	volatile int32_t t59 = -1;

	t59 = (((x349*x350)&x351)<=x352);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x353 = INT8_MAX;
	int64_t x354 = -10036506344LL;
	int8_t x355 = INT8_MAX;
	int16_t x356 = INT16_MAX;
	int32_t t60 = -68544015;

	t60 = (((x353*x354)&x355)<=x356);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x357 = -964;
	uint64_t x358 = 151945824689774LLU;
	static uint64_t x359 = 2049835134LLU;
	int32_t x360 = -71;
	volatile int32_t t61 = -1;

	t61 = (((x357*x358)&x359)<=x360);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x362 = 10;
	int32_t x363 = -7794805;
	volatile int32_t t62 = 275;

	t62 = (((x361*x362)&x363)<=x364);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x365 = INT8_MIN;
	uint16_t x367 = 7U;
	int8_t x368 = INT8_MAX;
	static int32_t t63 = -238095;

	t63 = (((x365*x366)&x367)<=x368);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x378 = -1LL;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t64 = 44707047;

	t64 = (((x377*x378)&x379)<=x380);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x385 = -1;
	int64_t x386 = INT64_MAX;
	uint32_t x387 = 0U;
	int32_t x388 = INT32_MAX;
	static int32_t t65 = 18;

	t65 = (((x385*x386)&x387)<=x388);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x394 = 3423868032860LLU;
	uint16_t x395 = 378U;
	int32_t x396 = INT32_MIN;
	int32_t t66 = 24102;

	t66 = (((x393*x394)&x395)<=x396);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x397 = -1LL;
	uint8_t x398 = UINT8_MAX;
	uint8_t x399 = UINT8_MAX;
	static volatile int64_t x400 = INT64_MIN;

	t67 = (((x397*x398)&x399)<=x400);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x401 = -1;
	volatile uint16_t x402 = 1190U;
	volatile int32_t x404 = 0;
	volatile int32_t t68 = 282972672;

	t68 = (((x401*x402)&x403)<=x404);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x405 = 113U;
	uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MAX;
	uint64_t x408 = 6289092443595812127LLU;
	volatile int32_t t69 = 37923;

	t69 = (((x405*x406)&x407)<=x408);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x410 = 12608U;
	volatile int64_t x411 = INT64_MIN;
	int32_t x412 = -1;
	int32_t t70 = 2;

	t70 = (((x409*x410)&x411)<=x412);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x417 = -21;
	int64_t x418 = -1LL;
	uint16_t x420 = 85U;
	volatile int32_t t71 = 1;

	t71 = (((x417*x418)&x419)<=x420);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x421 = INT32_MIN;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t72 = 2396;

	t72 = (((x421*x422)&x423)<=x424);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x425 = -1;
	int16_t x427 = INT16_MIN;
	int32_t t73 = 6;

	t73 = (((x425*x426)&x427)<=x428);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x431 = INT64_MAX;
	volatile int32_t t74 = -71794;

	t74 = (((x429*x430)&x431)<=x432);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x441 = UINT16_MAX;
	static uint32_t x443 = UINT32_MAX;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t75 = 249372;

	t75 = (((x441*x442)&x443)<=x444);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x445 = -146180735545LL;
	uint64_t x446 = 258270LLU;
	volatile int64_t x447 = INT64_MIN;
	int16_t x448 = INT16_MIN;
	volatile int32_t t76 = 277;

	t76 = (((x445*x446)&x447)<=x448);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x458 = UINT32_MAX;
	volatile uint32_t x459 = UINT32_MAX;
	volatile int32_t t77 = 486;

	t77 = (((x457*x458)&x459)<=x460);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x466 = INT16_MAX;
	int64_t x467 = -1LL;
	int64_t x468 = 6501459LL;
	int32_t t78 = 98627;

	t78 = (((x465*x466)&x467)<=x468);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x469 = -1LL;
	static uint32_t x470 = UINT32_MAX;
	int16_t x471 = INT16_MIN;
	static uint32_t x472 = UINT32_MAX;

	t79 = (((x469*x470)&x471)<=x472);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x473 = -1;
	uint8_t x474 = UINT8_MAX;
	volatile int16_t x475 = INT16_MIN;
	volatile int32_t t80 = -410;

	t80 = (((x473*x474)&x475)<=x476);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x481 = 6538U;
	static int64_t x483 = INT64_MIN;

	t81 = (((x481*x482)&x483)<=x484);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x486 = 35;
	static int16_t x487 = INT16_MIN;
	int64_t x488 = -4184896LL;
	static volatile int32_t t82 = -7259;

	t82 = (((x485*x486)&x487)<=x488);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x493 = 408428746702LL;
	static uint8_t x494 = 3U;
	int64_t x496 = -1LL;
	int32_t t83 = -61290;

	t83 = (((x493*x494)&x495)<=x496);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x501 = 20U;
	static int16_t x502 = INT16_MAX;
	int32_t x503 = 42926;
	uint8_t x504 = UINT8_MAX;
	volatile int32_t t84 = 2;

	t84 = (((x501*x502)&x503)<=x504);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x506 = INT16_MIN;
	static uint64_t x507 = UINT64_MAX;
	int32_t t85 = 186519645;

	t85 = (((x505*x506)&x507)<=x508);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x510 = -1;
	int64_t x511 = -1LL;
	int64_t x512 = -1LL;
	int32_t t86 = -63;

	t86 = (((x509*x510)&x511)<=x512);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x517 = INT8_MIN;
	int16_t x519 = INT16_MIN;
	volatile int32_t t87 = -1;

	t87 = (((x517*x518)&x519)<=x520);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x525 = 4U;
	volatile int8_t x526 = INT8_MIN;
	static uint32_t x527 = UINT32_MAX;
	int32_t t88 = 8;

	t88 = (((x525*x526)&x527)<=x528);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x530 = 128U;
	int32_t t89 = 31800;

	t89 = (((x529*x530)&x531)<=x532);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x537 = -1;
	int16_t x538 = INT16_MIN;
	static uint64_t x539 = UINT64_MAX;
	int64_t x540 = 24312493LL;
	volatile int32_t t90 = -125262257;

	t90 = (((x537*x538)&x539)<=x540);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x541 = 1;
	uint8_t x542 = UINT8_MAX;
	volatile int64_t x543 = INT64_MIN;
	static volatile int32_t t91 = -244;

	t91 = (((x541*x542)&x543)<=x544);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x545 = 37682U;
	int16_t x546 = INT16_MAX;
	int64_t x547 = 76LL;
	uint64_t x548 = UINT64_MAX;

	t92 = (((x545*x546)&x547)<=x548);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x549 = 0LLU;
	int16_t x550 = INT16_MAX;
	int16_t x551 = -1;
	volatile int32_t t93 = -1951313;

	t93 = (((x549*x550)&x551)<=x552);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x553 = INT16_MIN;
	uint16_t x554 = UINT16_MAX;
	uint8_t x556 = 2U;
	static volatile int32_t t94 = -62627327;

	t94 = (((x553*x554)&x555)<=x556);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x557 = INT16_MAX;
	int32_t x558 = -164;
	static uint8_t x559 = UINT8_MAX;
	static uint64_t x560 = 29641677360075LLU;
	int32_t t95 = -3;

	t95 = (((x557*x558)&x559)<=x560);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x561 = INT16_MAX;
	int32_t x562 = 0;
	uint64_t x563 = 50445513LLU;
	int16_t x564 = INT16_MAX;
	int32_t t96 = 67342;

	t96 = (((x561*x562)&x563)<=x564);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x565 = -1LL;
	int32_t x566 = INT32_MIN;
	int64_t x567 = INT64_MAX;
	int32_t x568 = INT32_MIN;
	volatile int32_t t97 = -157377164;

	t97 = (((x565*x566)&x567)<=x568);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x573 = 1;
	volatile uint16_t x574 = 15754U;
	uint8_t x575 = 14U;
	volatile int64_t x576 = INT64_MIN;
	int32_t t98 = -1236061;

	t98 = (((x573*x574)&x575)<=x576);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x581 = -1881;
	int64_t x583 = INT64_MIN;
	int64_t x584 = 214025LL;

	t99 = (((x581*x582)&x583)<=x584);

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

