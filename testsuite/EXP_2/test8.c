#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x10 = -36;
static uint8_t x32 = UINT8_MAX;
int16_t x33 = -1;
int32_t t6 = -1;
volatile int64_t x41 = INT64_MIN;
uint8_t x44 = 2U;
uint16_t x45 = 1U;
int8_t x52 = -1;
static int32_t x59 = 100;
uint16_t x60 = UINT16_MAX;
static int32_t x64 = INT32_MIN;
int32_t t12 = 364;
volatile int32_t t13 = 2618;
volatile int32_t t14 = -1;
int16_t x77 = 5;
int8_t x83 = 0;
int16_t x90 = -145;
volatile int16_t x92 = INT16_MIN;
static int64_t x97 = INT64_MIN;
int8_t x104 = 5;
uint32_t x113 = 5038798U;
static int8_t x115 = -1;
int32_t t25 = 31;
volatile int8_t x127 = 3;
int8_t x129 = -1;
uint64_t x137 = 1379928LLU;
uint16_t x138 = 0U;
static int32_t x139 = 124610;
int32_t x145 = INT32_MIN;
int32_t x147 = -1;
static int64_t x155 = -144234592LL;
int8_t x156 = INT8_MIN;
static int32_t x158 = 173490589;
uint16_t x178 = 457U;
volatile int64_t x187 = -1LL;
int16_t x188 = -32;
int8_t x192 = 53;
volatile int32_t x193 = 3402417;
int32_t x196 = -896926;
int8_t x206 = INT8_MAX;
static uint16_t x211 = 6U;
int32_t x212 = INT32_MIN;
static int64_t x219 = -4511014846074433LL;
static volatile int32_t x225 = -840586654;
static volatile uint32_t x228 = 6U;
volatile uint16_t x229 = 1695U;
static uint8_t x230 = UINT8_MAX;
uint16_t x235 = 27U;
int64_t x243 = INT64_MIN;
int16_t x247 = INT16_MIN;
uint8_t x251 = 4U;
static volatile int32_t t52 = -54732194;
volatile int32_t t54 = 153;
uint8_t x266 = 0U;
int64_t x268 = 2956LL;
static volatile uint32_t x270 = UINT32_MAX;
volatile int16_t x271 = 0;
static int32_t t56 = 42982862;
uint16_t x281 = UINT16_MAX;
int32_t x282 = INT32_MIN;
static int16_t x293 = INT16_MAX;
volatile int16_t x294 = INT16_MAX;
uint16_t x302 = 6U;
uint16_t x304 = UINT16_MAX;
uint16_t x311 = 1070U;
int32_t x318 = 62;
int32_t t63 = -1928;
static uint64_t x322 = UINT64_MAX;
static int64_t x323 = 70LL;
int32_t x328 = INT32_MIN;
volatile int16_t x334 = INT16_MIN;
volatile int64_t x336 = INT64_MIN;
int32_t x348 = -3;
volatile int32_t t68 = 89379;
int16_t x363 = -1;
int32_t t72 = -90450;
uint16_t x373 = UINT16_MAX;
volatile int8_t x387 = INT8_MIN;
static int8_t x394 = INT8_MAX;
volatile int32_t t79 = 1;
static volatile int32_t t80 = -17068639;
int64_t x413 = INT64_MAX;
volatile int32_t t83 = 316478017;
volatile uint16_t x421 = 2U;
volatile int32_t t84 = -1;
int8_t x436 = INT8_MAX;
volatile int32_t t86 = 442369023;
static uint16_t x447 = UINT16_MAX;
static int8_t x449 = -1;
volatile int32_t t91 = 31977798;
static int32_t t93 = -45383734;
uint64_t x472 = UINT64_MAX;
static uint8_t x478 = 0U;
int16_t x484 = -1;
int8_t x492 = 1;
volatile int32_t t99 = -1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile uint64_t x2 = UINT64_MAX;
	static int64_t x3 = -1LL;
	uint32_t x4 = 94U;
	int32_t t0 = 60;

	t0 = ((x1+(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 357476U;
	int16_t x6 = INT16_MIN;
	int64_t x7 = -1LL;
	volatile int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = 0;

	t1 = ((x5+(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	volatile int64_t x11 = INT64_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = 15;

	t2 = ((x9+(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 234U;
	uint16_t x22 = 49U;
	uint16_t x23 = 29820U;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t3 = 90898660;

	t3 = ((x21+(x22+x23))==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 20713U;
	volatile int8_t x26 = INT8_MIN;
	static volatile uint8_t x27 = UINT8_MAX;
	int64_t x28 = -56078860835178956LL;
	int32_t t4 = 1756874;

	t4 = ((x25+(x26+x27))==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x29 = 94081261377010358LLU;
	static int16_t x30 = INT16_MAX;
	volatile int32_t x31 = 92299238;
	volatile int32_t t5 = 1134007;

	t5 = ((x29+(x30+x31))==x32);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x34 = -1LL;
	uint64_t x35 = UINT64_MAX;
	volatile int8_t x36 = INT8_MIN;

	t6 = ((x33+(x34+x35))==x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = 6;
	int16_t x43 = -1;
	volatile int32_t t7 = -47;

	t7 = ((x41+(x42+x43))==x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x46 = -6009;
	int16_t x47 = -1;
	static int16_t x48 = INT16_MAX;
	volatile int32_t t8 = 28332653;

	t8 = ((x45+(x46+x47))==x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = 44;
	int8_t x50 = INT8_MIN;
	int32_t x51 = INT32_MAX;
	volatile int32_t t9 = 1443;

	t9 = ((x49+(x50+x51))==x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = -848702271LL;
	uint16_t x54 = UINT16_MAX;
	static int8_t x55 = 1;
	int8_t x56 = -26;
	int32_t t10 = -4;

	t10 = ((x53+(x54+x55))==x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x57 = 15185576U;
	int32_t x58 = 3335;
	int32_t t11 = 1;

	t11 = ((x57+(x58+x59))==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 61924039456LLU;
	int16_t x62 = INT16_MAX;
	uint64_t x63 = 60240880999661LLU;

	t12 = ((x61+(x62+x63))==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 94U;
	static int16_t x66 = -1;
	int32_t x67 = -1;
	uint16_t x68 = UINT16_MAX;

	t13 = ((x65+(x66+x67))==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = -23LL;
	volatile int16_t x70 = -1;
	static int16_t x71 = INT16_MIN;
	int32_t x72 = -622779;

	t14 = ((x69+(x70+x71))==x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MAX;
	int32_t x74 = INT32_MAX;
	uint32_t x75 = 1350U;
	static int32_t x76 = 734;
	volatile int32_t t15 = -292893127;

	t15 = ((x73+(x74+x75))==x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x78 = -6577;
	static int32_t x79 = -1;
	static int8_t x80 = 13;
	static int32_t t16 = -69231786;

	t16 = ((x77+(x78+x79))==x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = 0;
	int64_t x84 = INT64_MIN;
	int32_t t17 = 1927497;

	t17 = ((x81+(x82+x83))==x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -88660;
	static uint8_t x91 = 0U;
	static int32_t t18 = -1960315;

	t18 = ((x89+(x90+x91))==x92);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = 5907824LL;
	int64_t x94 = -2LL;
	volatile uint64_t x95 = 1203783LLU;
	static volatile uint32_t x96 = 1999201120U;
	int32_t t19 = 52568;

	t19 = ((x93+(x94+x95))==x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x98 = 3372U;
	uint64_t x99 = 5350171923LLU;
	int8_t x100 = 2;
	static int32_t t20 = 3566;

	t20 = ((x97+(x98+x99))==x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	uint64_t x103 = 3653LLU;
	int32_t t21 = -1;

	t21 = ((x101+(x102+x103))==x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 6U;
	uint8_t x106 = 42U;
	static volatile int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t22 = -3451024;

	t22 = ((x105+(x106+x107))==x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint8_t x110 = 32U;
	uint64_t x111 = 839451838371LLU;
	uint32_t x112 = UINT32_MAX;
	int32_t t23 = 1039;

	t23 = ((x109+(x110+x111))==x112);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x114 = -1LL;
	uint32_t x116 = 1U;
	int32_t t24 = -31;

	t24 = ((x113+(x114+x115))==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x121 = UINT8_MAX;
	static volatile int16_t x122 = 26;
	volatile int16_t x123 = -1;
	int16_t x124 = INT16_MIN;

	t25 = ((x121+(x122+x123))==x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	int32_t x126 = -47361;
	int64_t x128 = 4410774870559LL;
	int32_t t26 = -197695;

	t26 = ((x125+(x126+x127))==x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x130 = INT8_MAX;
	int8_t x131 = INT8_MIN;
	volatile int64_t x132 = -144607861682783LL;
	volatile int32_t t27 = -14729;

	t27 = ((x129+(x130+x131))==x132);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x133 = 2734148LLU;
	static volatile uint16_t x134 = UINT16_MAX;
	int16_t x135 = -46;
	int16_t x136 = -1;
	volatile int32_t t28 = 28708;

	t28 = ((x133+(x134+x135))==x136);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x140 = -1LL;
	int32_t t29 = -1710422;

	t29 = ((x137+(x138+x139))==x140);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = UINT64_MAX;
	int16_t x142 = -6;
	int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MAX;
	int32_t t30 = -3952;

	t30 = ((x141+(x142+x143))==x144);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x146 = 6744;
	uint32_t x148 = UINT32_MAX;
	volatile int32_t t31 = -6;

	t31 = ((x145+(x146+x147))==x148);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -1;
	int8_t x150 = INT8_MIN;
	int32_t x151 = 13;
	int32_t x152 = -1;
	static volatile int32_t t32 = -954565270;

	t32 = ((x149+(x150+x151))==x152);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	uint16_t x154 = 54U;
	static int32_t t33 = 52;

	t33 = ((x153+(x154+x155))==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = INT16_MIN;
	int8_t x159 = 7;
	int16_t x160 = -1;
	volatile int32_t t34 = -442;

	t34 = ((x157+(x158+x159))==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x165 = -1;
	volatile uint8_t x166 = 21U;
	int32_t x167 = -1;
	volatile uint8_t x168 = 0U;
	int32_t t35 = -7223;

	t35 = ((x165+(x166+x167))==x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 121U;
	uint16_t x170 = 1U;
	uint16_t x171 = UINT16_MAX;
	volatile int16_t x172 = INT16_MAX;
	static int32_t t36 = -505023641;

	t36 = ((x169+(x170+x171))==x172);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 0U;
	static int32_t x179 = INT32_MIN;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t37 = 7805;

	t37 = ((x177+(x178+x179))==x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -388952;
	int8_t x182 = INT8_MIN;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t38 = -1362;

	t38 = ((x181+(x182+x183))==x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x185 = -1;
	static int32_t x186 = INT32_MIN;
	int32_t t39 = 114517960;

	t39 = ((x185+(x186+x187))==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	static int16_t x190 = 5;
	static uint64_t x191 = 41938494717097291LLU;
	volatile int32_t t40 = -114;

	t40 = ((x189+(x190+x191))==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x194 = UINT32_MAX;
	static int8_t x195 = 31;
	int32_t t41 = 0;

	t41 = ((x193+(x194+x195))==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MAX;
	uint16_t x207 = UINT16_MAX;
	int32_t x208 = INT32_MIN;
	int32_t t42 = 10017;

	t42 = ((x205+(x206+x207))==x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = 0;
	int16_t x210 = -1;
	volatile int32_t t43 = 2;

	t43 = ((x209+(x210+x211))==x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x218 = 19U;
	int16_t x220 = -1;
	volatile int32_t t44 = 305555664;

	t44 = ((x217+(x218+x219))==x220);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x221 = 74U;
	int16_t x222 = INT16_MIN;
	int32_t x223 = -3205;
	volatile int32_t x224 = INT32_MIN;
	volatile int32_t t45 = -1;

	t45 = ((x221+(x222+x223))==x224);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x226 = INT16_MIN;
	volatile int32_t x227 = -1;
	int32_t t46 = -5;

	t46 = ((x225+(x226+x227))==x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x231 = 29;
	volatile int32_t x232 = INT32_MAX;
	static volatile int32_t t47 = -120876873;

	t47 = ((x229+(x230+x231))==x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x233 = INT64_MAX;
	uint64_t x234 = 0LLU;
	volatile uint16_t x236 = 2U;
	static int32_t t48 = -42295;

	t48 = ((x233+(x234+x235))==x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x237 = 18U;
	uint16_t x238 = 6U;
	static uint16_t x239 = 9U;
	int32_t x240 = -6943774;
	int32_t t49 = 0;

	t49 = ((x237+(x238+x239))==x240);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x241 = 1U;
	int8_t x242 = INT8_MAX;
	int64_t x244 = INT64_MIN;
	volatile int32_t t50 = 1901822;

	t50 = ((x241+(x242+x243))==x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t51 = -230722;

	t51 = ((x245+(x246+x247))==x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MIN;
	static int8_t x250 = -1;
	int16_t x252 = -3;

	t52 = ((x249+(x250+x251))==x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x257 = INT16_MIN;
	volatile int16_t x258 = INT16_MAX;
	int16_t x259 = 6217;
	uint64_t x260 = 67LLU;
	static int32_t t53 = -147;

	t53 = ((x257+(x258+x259))==x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = 1;
	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = INT32_MAX;

	t54 = ((x261+(x262+x263))==x264);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x265 = INT32_MIN;
	volatile int64_t x267 = INT64_MAX;
	int32_t t55 = -220;

	t55 = ((x265+(x266+x267))==x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x269 = -1;
	int32_t x272 = INT32_MAX;

	t56 = ((x269+(x270+x271))==x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x283 = 39018U;
	volatile int16_t x284 = INT16_MIN;
	volatile int32_t t57 = 4136670;

	t57 = ((x281+(x282+x283))==x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x289 = INT64_MAX;
	static volatile int64_t x290 = INT64_MIN;
	uint16_t x291 = 3072U;
	int16_t x292 = 0;
	volatile int32_t t58 = -14956;

	t58 = ((x289+(x290+x291))==x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x295 = -1;
	volatile int8_t x296 = 0;
	volatile int32_t t59 = -1;

	t59 = ((x293+(x294+x295))==x296);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x297 = -1LL;
	int32_t x298 = -1;
	static uint32_t x299 = 25U;
	static uint32_t x300 = 60976794U;
	int32_t t60 = 1620;

	t60 = ((x297+(x298+x299))==x300);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x301 = INT64_MIN;
	int8_t x303 = INT8_MAX;
	int32_t t61 = -14990066;

	t61 = ((x301+(x302+x303))==x304);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = INT64_MIN;
	volatile int32_t x310 = -1;
	int16_t x312 = INT16_MIN;
	volatile int32_t t62 = 6335947;

	t62 = ((x309+(x310+x311))==x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint16_t x317 = 6932U;
	int8_t x319 = INT8_MIN;
	int64_t x320 = -1LL;

	t63 = ((x317+(x318+x319))==x320);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x321 = UINT64_MAX;
	static int8_t x324 = INT8_MAX;
	volatile int32_t t64 = 5579137;

	t64 = ((x321+(x322+x323))==x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = 0;
	int16_t x327 = -400;
	int32_t t65 = -1656674;

	t65 = ((x325+(x326+x327))==x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x333 = INT32_MIN;
	uint64_t x335 = 1997270389597LLU;
	int32_t t66 = 0;

	t66 = ((x333+(x334+x335))==x336);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = -1LL;
	int32_t x342 = -6139;
	static int8_t x343 = INT8_MAX;
	uint8_t x344 = 44U;
	int32_t t67 = -16075;

	t67 = ((x341+(x342+x343))==x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x345 = UINT64_MAX;
	uint16_t x346 = UINT16_MAX;
	static volatile int16_t x347 = -8346;

	t68 = ((x345+(x346+x347))==x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x353 = -17325255;
	int8_t x354 = -4;
	static uint8_t x355 = 0U;
	int8_t x356 = INT8_MIN;
	volatile int32_t t69 = -1;

	t69 = ((x353+(x354+x355))==x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x361 = INT32_MAX;
	static volatile uint64_t x362 = 820592072LLU;
	uint64_t x364 = 152108916094LLU;
	volatile int32_t t70 = 376167603;

	t70 = ((x361+(x362+x363))==x364);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x365 = 949U;
	int16_t x366 = INT16_MIN;
	uint32_t x367 = UINT32_MAX;
	int32_t x368 = -1;
	volatile int32_t t71 = -13;

	t71 = ((x365+(x366+x367))==x368);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x369 = 0;
	uint8_t x370 = 59U;
	int16_t x371 = -1;
	static uint16_t x372 = 3377U;

	t72 = ((x369+(x370+x371))==x372);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x374 = INT16_MIN;
	volatile int16_t x375 = -8;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t73 = 1819231;

	t73 = ((x373+(x374+x375))==x376);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x377 = -1;
	static int8_t x378 = -1;
	static uint8_t x379 = UINT8_MAX;
	int8_t x380 = -1;
	static volatile int32_t t74 = 81580326;

	t74 = ((x377+(x378+x379))==x380);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile int16_t x382 = 0;
	int16_t x383 = INT16_MIN;
	static uint32_t x384 = 0U;
	volatile int32_t t75 = -469543;

	t75 = ((x381+(x382+x383))==x384);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x385 = 23;
	uint32_t x386 = 24U;
	static int8_t x388 = INT8_MIN;
	int32_t t76 = -239133596;

	t76 = ((x385+(x386+x387))==x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x389 = INT16_MIN;
	int16_t x390 = 9;
	int64_t x391 = -3945640007453LL;
	uint8_t x392 = 8U;
	int32_t t77 = 0;

	t77 = ((x389+(x390+x391))==x392);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x393 = -1;
	volatile int32_t x395 = -4;
	static uint16_t x396 = 491U;
	static volatile int32_t t78 = 2;

	t78 = ((x393+(x394+x395))==x396);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = 374690358920LL;
	volatile int16_t x398 = -1;
	static int64_t x399 = 23677640647500LL;
	int8_t x400 = 4;

	t79 = ((x397+(x398+x399))==x400);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x405 = 39LL;
	int8_t x406 = INT8_MIN;
	static volatile int16_t x407 = -7;
	uint64_t x408 = 116LLU;

	t80 = ((x405+(x406+x407))==x408);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x409 = -420826;
	int64_t x410 = -1LL;
	int64_t x411 = -814932483695LL;
	volatile int32_t x412 = INT32_MIN;
	int32_t t81 = 0;

	t81 = ((x409+(x410+x411))==x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x414 = UINT64_MAX;
	uint32_t x415 = 3991U;
	int32_t x416 = INT32_MIN;
	volatile int32_t t82 = 41;

	t82 = ((x413+(x414+x415))==x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x417 = INT32_MIN;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = -56;
	int16_t x420 = -9;

	t83 = ((x417+(x418+x419))==x420);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x422 = 0LL;
	static uint8_t x423 = 7U;
	int64_t x424 = INT64_MIN;

	t84 = ((x421+(x422+x423))==x424);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x429 = 8950U;
	static int64_t x430 = 88137LL;
	int16_t x431 = INT16_MIN;
	int8_t x432 = 1;
	static volatile int32_t t85 = 269173924;

	t85 = ((x429+(x430+x431))==x432);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x433 = 3U;
	int32_t x434 = -1;
	uint64_t x435 = UINT64_MAX;

	t86 = ((x433+(x434+x435))==x436);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x437 = -1LL;
	static int8_t x438 = INT8_MIN;
	uint8_t x439 = UINT8_MAX;
	int32_t x440 = 0;
	int32_t t87 = 2;

	t87 = ((x437+(x438+x439))==x440);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x445 = 1;
	int8_t x446 = INT8_MAX;
	uint16_t x448 = UINT16_MAX;
	volatile int32_t t88 = 734031708;

	t88 = ((x445+(x446+x447))==x448);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MAX;
	int16_t x452 = -481;
	int32_t t89 = -1788405;

	t89 = ((x449+(x450+x451))==x452);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x453 = 1905623364142339496LLU;
	volatile int64_t x454 = 244101877289519505LL;
	volatile int64_t x455 = -1LL;
	volatile int16_t x456 = -1;
	int32_t t90 = 6;

	t90 = ((x453+(x454+x455))==x456);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = 16457842539493814LL;
	volatile uint16_t x459 = 0U;
	uint32_t x460 = 1U;

	t91 = ((x457+(x458+x459))==x460);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x461 = -1LL;
	uint8_t x462 = 2U;
	int8_t x463 = -38;
	static uint64_t x464 = UINT64_MAX;
	int32_t t92 = -33841038;

	t92 = ((x461+(x462+x463))==x464);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x465 = UINT16_MAX;
	int8_t x466 = INT8_MAX;
	int64_t x467 = INT64_MIN;
	volatile int8_t x468 = INT8_MIN;

	t93 = ((x465+(x466+x467))==x468);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x469 = -1;
	int16_t x470 = INT16_MIN;
	int32_t x471 = INT32_MAX;
	volatile int32_t t94 = 2706;

	t94 = ((x469+(x470+x471))==x472);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x473 = 983587LL;
	int8_t x474 = INT8_MAX;
	volatile int16_t x475 = -1;
	static int8_t x476 = INT8_MIN;
	int32_t t95 = -3348241;

	t95 = ((x473+(x474+x475))==x476);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x477 = -1LL;
	uint32_t x479 = 2U;
	uint16_t x480 = 0U;
	volatile int32_t t96 = -7;

	t96 = ((x477+(x478+x479))==x480);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x481 = -1LL;
	static volatile uint64_t x482 = 37182281LLU;
	static int8_t x483 = INT8_MAX;
	int32_t t97 = 1542197;

	t97 = ((x481+(x482+x483))==x484);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x485 = 16359482;
	int64_t x486 = -8478238582LL;
	int8_t x487 = INT8_MIN;
	int16_t x488 = INT16_MIN;
	int32_t t98 = -5995514;

	t98 = ((x485+(x486+x487))==x488);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x489 = UINT16_MAX;
	int16_t x490 = 411;
	static int16_t x491 = INT16_MIN;

	t99 = ((x489+(x490+x491))==x492);

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

