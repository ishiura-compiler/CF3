#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MAX;
int64_t x12 = INT64_MAX;
int32_t x19 = INT32_MAX;
int64_t x20 = INT64_MIN;
int64_t x21 = INT64_MIN;
int8_t x23 = INT8_MIN;
int32_t x31 = INT32_MIN;
static uint64_t x33 = UINT64_MAX;
int64_t x41 = INT64_MAX;
static int64_t x42 = INT64_MIN;
volatile uint64_t x43 = UINT64_MAX;
int32_t x48 = INT32_MAX;
volatile int32_t t11 = -13007;
volatile int16_t x51 = INT16_MAX;
volatile int64_t x56 = INT64_MIN;
static uint64_t x57 = 129725LLU;
static int64_t x58 = INT64_MIN;
int8_t x65 = INT8_MIN;
uint64_t x69 = 59919030444LLU;
int16_t x78 = INT16_MAX;
volatile int64_t x80 = 3333655333LL;
volatile int32_t t18 = 22493379;
int8_t x81 = -33;
static int32_t t19 = -77;
int64_t x86 = -1LL;
volatile int8_t x88 = INT8_MAX;
int32_t t20 = 63589;
int8_t x91 = INT8_MIN;
volatile int32_t t22 = 8;
volatile int8_t x103 = 9;
volatile int64_t x109 = 10LL;
uint32_t x111 = UINT32_MAX;
volatile int64_t x115 = 2770349522LL;
int64_t x118 = INT64_MIN;
uint64_t x121 = 1532907442LLU;
uint8_t x126 = UINT8_MAX;
static int64_t x130 = -1LL;
int64_t x134 = 1862231575174LL;
static int16_t x145 = -1;
uint64_t x147 = UINT64_MAX;
int64_t x158 = 1726989048LL;
volatile int32_t t37 = 293;
static uint64_t x166 = 192576692003235498LLU;
uint16_t x168 = 106U;
static volatile uint8_t x174 = 1U;
int32_t t41 = 11;
uint64_t x182 = 1933858LLU;
static volatile int32_t t43 = -260499;
int64_t x189 = INT64_MIN;
uint32_t x192 = 95719545U;
int16_t x194 = -1;
static uint32_t x204 = 3898568U;
volatile int32_t t47 = -6343;
volatile int32_t t49 = 4;
static uint8_t x217 = 1U;
static int32_t x224 = INT32_MIN;
static int32_t t53 = 417973;
static uint64_t x229 = 335875LLU;
uint16_t x231 = UINT16_MAX;
volatile int16_t x232 = 24;
int32_t t55 = -141;
static int32_t x237 = INT32_MIN;
int32_t x242 = INT32_MIN;
static int32_t t57 = -824018678;
int64_t x250 = INT64_MIN;
volatile int32_t t59 = 11;
int64_t x259 = 4LL;
volatile uint32_t x261 = 113584U;
int16_t x263 = INT16_MIN;
int8_t x264 = 0;
uint64_t x266 = 258101026380LLU;
uint32_t x267 = 348259U;
int32_t t62 = 53452;
uint8_t x271 = UINT8_MAX;
int32_t t63 = -109;
uint8_t x275 = 6U;
uint32_t x278 = 80622819U;
int64_t x281 = -1LL;
int64_t x285 = INT64_MAX;
int16_t x293 = 6390;
volatile uint8_t x294 = 56U;
volatile int64_t x295 = -1LL;
static int64_t x298 = INT64_MIN;
uint64_t x299 = UINT64_MAX;
uint32_t x302 = 2329693U;
int32_t t73 = -76691;
uint64_t x315 = 885696117LLU;
volatile int32_t x320 = INT32_MIN;
static volatile int32_t x323 = 41934273;
int16_t x327 = -342;
static uint16_t x332 = 1368U;
int16_t x333 = INT16_MIN;
int8_t x334 = 2;
volatile int16_t x336 = -1;
static uint16_t x339 = 1U;
volatile int32_t x343 = INT32_MIN;
int8_t x348 = INT8_MIN;
int32_t t82 = 2841489;
static volatile int32_t t85 = 2341395;
volatile int8_t x366 = 60;
static uint32_t x371 = UINT32_MAX;
int16_t x397 = -332;
int64_t x402 = -1972942465794LL;
uint8_t x408 = 90U;
int8_t x410 = 2;
static int8_t x412 = INT8_MIN;
int64_t x413 = 1058LL;
int16_t x415 = INT16_MIN;
volatile int32_t t97 = 1;
static int32_t x425 = 35;
int16_t x427 = INT16_MIN;
int64_t x428 = INT64_MIN;


void f0(void) {
	int32_t x1 = 74;
	int32_t x3 = 245158808;
	static int32_t x4 = 1356;
	volatile int32_t t0 = 0;

	t0 = ((x1%(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = 53U;
	int8_t x8 = -1;
	static int32_t t1 = 606;

	t1 = ((x5%(x6^x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 4;
	int16_t x10 = INT16_MIN;
	static int8_t x11 = 0;
	int32_t t2 = 6719;

	t2 = ((x9%(x10^x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MAX;
	volatile int64_t x15 = 43148000796503657LL;
	uint64_t x16 = 19686669069LLU;
	volatile int32_t t3 = 3;

	t3 = ((x13%(x14^x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x18 = INT16_MIN;
	volatile int32_t t4 = -2;

	t4 = ((x17%(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = 8619509508545330LLU;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -6;

	t5 = ((x21%(x22^x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = INT8_MIN;
	static volatile int16_t x27 = INT16_MIN;
	uint32_t x28 = 9490U;
	int32_t t6 = 27480253;

	t6 = ((x25%(x26^x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 61;
	volatile int64_t x30 = -1LL;
	static int8_t x32 = INT8_MIN;
	int32_t t7 = -127306;

	t7 = ((x29%(x30^x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x34 = 37465661603725LL;
	uint32_t x35 = UINT32_MAX;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -11906;

	t8 = ((x33%(x34^x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static int16_t x38 = 8;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	volatile int32_t t9 = 70435721;

	t9 = ((x37%(x38^x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x44 = INT32_MIN;
	static int32_t t10 = -37984804;

	t10 = ((x41%(x42^x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int32_t x46 = 218054782;
	int64_t x47 = INT64_MIN;

	t11 = ((x45%(x46^x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 0;
	volatile uint16_t x50 = 1850U;
	uint64_t x52 = 154LLU;
	volatile int32_t t12 = 0;

	t12 = ((x49%(x50^x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	uint64_t x54 = 468936107970583LLU;
	volatile int16_t x55 = -1;
	int32_t t13 = -5;

	t13 = ((x53%(x54^x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x59 = INT16_MIN;
	int8_t x60 = -9;
	int32_t t14 = 7267013;

	t14 = ((x57%(x58^x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x66 = 3;
	uint16_t x67 = 173U;
	int32_t x68 = -1;
	int32_t t15 = 36;

	t15 = ((x65%(x66^x67))<x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = INT32_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t16 = -325889059;

	t16 = ((x69%(x70^x71))<x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	static int8_t x74 = 0;
	static int8_t x75 = -25;
	int64_t x76 = 152643519LL;
	int32_t t17 = 1;

	t17 = ((x73%(x74^x75))<x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x77 = INT16_MAX;
	volatile int32_t x79 = INT32_MAX;

	t18 = ((x77%(x78^x79))<x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x82 = UINT16_MAX;
	int32_t x83 = -27683415;
	int64_t x84 = INT64_MIN;

	t19 = ((x81%(x82^x83))<x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	static int16_t x87 = INT16_MIN;

	t20 = ((x85%(x86^x87))<x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = -1;
	volatile int16_t x90 = -1;
	int8_t x92 = 1;
	int32_t t21 = -3220610;

	t21 = ((x89%(x90^x91))<x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 5U;
	int64_t x94 = 55814262010625LL;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -1;

	t22 = ((x93%(x94^x95))<x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MAX;
	volatile uint64_t x102 = 3710049962LLU;
	int16_t x104 = INT16_MIN;
	volatile int32_t t23 = 2;

	t23 = ((x101%(x102^x103))<x104);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -105115611LL;
	uint16_t x106 = UINT16_MAX;
	volatile int16_t x107 = 13;
	volatile int64_t x108 = -1LL;
	int32_t t24 = 1590;

	t24 = ((x105%(x106^x107))<x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 0;
	static int16_t x112 = INT16_MIN;
	int32_t t25 = -75;

	t25 = ((x109%(x110^x111))<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = UINT16_MAX;
	uint8_t x114 = UINT8_MAX;
	volatile int16_t x116 = INT16_MIN;
	static volatile int32_t t26 = 106;

	t26 = ((x113%(x114^x115))<x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x117 = 47U;
	static int16_t x119 = -1;
	uint16_t x120 = 4U;
	int32_t t27 = -7088;

	t27 = ((x117%(x118^x119))<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x122 = 24253U;
	volatile int32_t x123 = INT32_MIN;
	int32_t x124 = INT32_MIN;
	int32_t t28 = 0;

	t28 = ((x121%(x122^x123))<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = -1;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = -11;
	volatile int32_t t29 = 246463;

	t29 = ((x125%(x126^x127))<x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = 745;
	volatile uint8_t x131 = 0U;
	uint32_t x132 = 878U;
	int32_t t30 = -14;

	t30 = ((x129%(x130^x131))<x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	int32_t x135 = -1;
	int8_t x136 = INT8_MIN;
	int32_t t31 = -291506;

	t31 = ((x133%(x134^x135))<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x137 = INT8_MIN;
	static volatile uint64_t x138 = 3049765283454LLU;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MAX;
	int32_t t32 = 9864165;

	t32 = ((x137%(x138^x139))<x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	volatile uint8_t x143 = UINT8_MAX;
	static volatile int32_t x144 = INT32_MIN;
	volatile int32_t t33 = 13175;

	t33 = ((x141%(x142^x143))<x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = 216;
	int16_t x148 = -1;
	volatile int32_t t34 = 91;

	t34 = ((x145%(x146^x147))<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	volatile int64_t x151 = INT64_MIN;
	static uint16_t x152 = 1760U;
	volatile int32_t t35 = -169781411;

	t35 = ((x149%(x150^x151))<x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	static int16_t x154 = -1;
	volatile uint8_t x155 = UINT8_MAX;
	static int8_t x156 = INT8_MAX;
	volatile int32_t t36 = 1337375;

	t36 = ((x153%(x154^x155))<x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = 2222048;
	uint16_t x159 = 4498U;
	uint64_t x160 = 2031424662004805864LLU;

	t37 = ((x157%(x158^x159))<x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MAX;
	uint32_t x162 = 2126251U;
	volatile int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	static int32_t t38 = 0;

	t38 = ((x161%(x162^x163))<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = INT8_MIN;
	volatile int32_t x167 = -182910746;
	static volatile int32_t t39 = 43;

	t39 = ((x165%(x166^x167))<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 2945U;
	uint16_t x170 = 7U;
	int16_t x171 = INT16_MIN;
	volatile int16_t x172 = -679;
	volatile int32_t t40 = -1;

	t40 = ((x169%(x170^x171))<x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -74;

	t41 = ((x173%(x174^x175))<x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	int8_t x180 = INT8_MIN;
	static int32_t t42 = 1959552;

	t42 = ((x177%(x178^x179))<x180);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -1;

	t43 = ((x181%(x182^x183))<x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	static volatile int16_t x186 = -23;
	int64_t x187 = INT64_MIN;
	static volatile uint64_t x188 = 29735344LLU;
	int32_t t44 = -1;

	t44 = ((x185%(x186^x187))<x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x190 = INT8_MAX;
	int32_t x191 = INT32_MIN;
	static volatile int32_t t45 = -1;

	t45 = ((x189%(x190^x191))<x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = -29;
	uint8_t x195 = 14U;
	static uint32_t x196 = 34796225U;
	int32_t t46 = -6954;

	t46 = ((x193%(x194^x195))<x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = -3423411;
	int8_t x202 = INT8_MIN;
	static volatile int16_t x203 = 134;

	t47 = ((x201%(x202^x203))<x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -1LL;
	static int8_t x206 = 1;
	uint8_t x207 = UINT8_MAX;
	uint64_t x208 = 152395336815203538LLU;
	volatile int32_t t48 = -22983134;

	t48 = ((x205%(x206^x207))<x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = 1599407900LLU;
	volatile uint32_t x210 = 733594U;
	int32_t x211 = -1;
	int16_t x212 = INT16_MIN;

	t49 = ((x209%(x210^x211))<x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = 14422021U;
	volatile uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = 1799;
	int32_t x216 = -1;
	int32_t t50 = 1;

	t50 = ((x213%(x214^x215))<x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x218 = 10U;
	uint64_t x219 = 88488LLU;
	volatile int16_t x220 = INT16_MAX;
	int32_t t51 = -167;

	t51 = ((x217%(x218^x219))<x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = -1;
	static volatile int16_t x223 = INT16_MIN;
	static volatile int32_t t52 = 2516;

	t52 = ((x221%(x222^x223))<x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x225 = INT32_MIN;
	uint8_t x226 = 80U;
	uint32_t x227 = UINT32_MAX;
	volatile int8_t x228 = INT8_MIN;

	t53 = ((x225%(x226^x227))<x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x230 = UINT8_MAX;
	int32_t t54 = -14611;

	t54 = ((x229%(x230^x231))<x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x233 = 1312U;
	uint64_t x234 = 2114675053LLU;
	static uint32_t x235 = UINT32_MAX;
	int64_t x236 = INT64_MIN;

	t55 = ((x233%(x234^x235))<x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x238 = 7515;
	volatile int32_t x239 = INT32_MIN;
	int16_t x240 = -1;
	int32_t t56 = -6;

	t56 = ((x237%(x238^x239))<x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 516289248U;
	static volatile int64_t x243 = -1LL;
	int32_t x244 = INT32_MIN;

	t57 = ((x241%(x242^x243))<x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x249 = 312234962U;
	static int16_t x251 = 522;
	uint32_t x252 = UINT32_MAX;
	static volatile int32_t t58 = 0;

	t58 = ((x249%(x250^x251))<x252);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = 30919238;
	int64_t x254 = 356748428LL;
	static uint32_t x255 = UINT32_MAX;
	volatile uint64_t x256 = 806946830735654250LLU;

	t59 = ((x253%(x254^x255))<x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = -470861013318628LL;
	uint16_t x258 = 6U;
	int16_t x260 = 1389;
	volatile int32_t t60 = 41528;

	t60 = ((x257%(x258^x259))<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x262 = 3U;
	volatile int32_t t61 = 212812128;

	t61 = ((x261%(x262^x263))<x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x265 = 56U;
	int32_t x268 = -1;

	t62 = ((x265%(x266^x267))<x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -1LL;
	int32_t x270 = -1;
	int64_t x272 = -1LL;

	t63 = ((x269%(x270^x271))<x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -1LL;
	volatile uint32_t x274 = 31U;
	int64_t x276 = INT64_MIN;
	int32_t t64 = 92166172;

	t64 = ((x273%(x274^x275))<x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 6U;
	int16_t x279 = INT16_MIN;
	static int32_t x280 = INT32_MAX;
	volatile int32_t t65 = -26482756;

	t65 = ((x277%(x278^x279))<x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x282 = INT32_MAX;
	volatile int32_t x283 = -1;
	static int64_t x284 = -5LL;
	int32_t t66 = -155113;

	t66 = ((x281%(x282^x283))<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x286 = -9;
	uint64_t x287 = UINT64_MAX;
	uint8_t x288 = 3U;
	int32_t t67 = 24006426;

	t67 = ((x285%(x286^x287))<x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 32237U;
	int32_t x291 = INT32_MIN;
	int16_t x292 = 15201;
	static int32_t t68 = -529323056;

	t68 = ((x289%(x290^x291))<x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x296 = INT8_MIN;
	int32_t t69 = -695324;

	t69 = ((x293%(x294^x295))<x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	static int64_t x300 = -1LL;
	volatile int32_t t70 = 0;

	t70 = ((x297%(x298^x299))<x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = 536948222;
	int8_t x303 = -24;
	static int8_t x304 = 27;
	static int32_t t71 = -1256;

	t71 = ((x301%(x302^x303))<x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = -2063907;
	int32_t x306 = 1;
	int64_t x307 = INT64_MAX;
	static uint32_t x308 = UINT32_MAX;
	int32_t t72 = -89495;

	t72 = ((x305%(x306^x307))<x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x309 = INT16_MIN;
	uint64_t x310 = 7150LLU;
	int32_t x311 = -1;
	int16_t x312 = INT16_MIN;

	t73 = ((x309%(x310^x311))<x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x313 = 30271U;
	static int8_t x314 = -18;
	uint16_t x316 = 21U;
	static volatile int32_t t74 = -751;

	t74 = ((x313%(x314^x315))<x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x317 = 3252LL;
	uint16_t x318 = 29U;
	int16_t x319 = INT16_MIN;
	static volatile int32_t t75 = 535126283;

	t75 = ((x317%(x318^x319))<x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = 2U;
	uint8_t x322 = 112U;
	uint32_t x324 = UINT32_MAX;
	volatile int32_t t76 = -36303124;

	t76 = ((x321%(x322^x323))<x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x325 = -1;
	int64_t x326 = INT64_MIN;
	uint32_t x328 = 238523211U;
	static int32_t t77 = -2528;

	t77 = ((x325%(x326^x327))<x328);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = 4106597;
	static uint16_t x330 = 27857U;
	static volatile int16_t x331 = INT16_MIN;
	volatile int32_t t78 = -152998;

	t78 = ((x329%(x330^x331))<x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x335 = UINT64_MAX;
	int32_t t79 = -405673;

	t79 = ((x333%(x334^x335))<x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MAX;
	static int8_t x338 = -1;
	int32_t x340 = 0;
	int32_t t80 = 96757768;

	t80 = ((x337%(x338^x339))<x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 8U;
	volatile int64_t x342 = INT64_MIN;
	int16_t x344 = INT16_MAX;
	static int32_t t81 = 0;

	t81 = ((x341%(x342^x343))<x344);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 6U;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 64U;

	t82 = ((x345%(x346^x347))<x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = 0;
	uint16_t x354 = 15555U;
	int32_t x355 = -1;
	static int32_t x356 = -3698;
	int32_t t83 = -4;

	t83 = ((x353%(x354^x355))<x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = UINT16_MAX;
	static uint16_t x358 = 2882U;
	int16_t x359 = INT16_MIN;
	int8_t x360 = -41;
	static volatile int32_t t84 = 1;

	t84 = ((x357%(x358^x359))<x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MAX;
	int32_t x362 = 6;
	uint8_t x363 = 15U;
	int16_t x364 = INT16_MIN;

	t85 = ((x361%(x362^x363))<x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x365 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	int64_t x368 = -1LL;
	volatile int32_t t86 = -224691;

	t86 = ((x365%(x366^x367))<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -3755125077090921LL;
	int64_t x370 = -55LL;
	uint64_t x372 = 24LLU;
	int32_t t87 = -742222;

	t87 = ((x369%(x370^x371))<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x373 = -1;
	int64_t x374 = INT64_MIN;
	volatile uint64_t x375 = 666156069111392108LLU;
	int32_t x376 = -139070955;
	volatile int32_t t88 = 116;

	t88 = ((x373%(x374^x375))<x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x377 = -1;
	int8_t x378 = 12;
	static int8_t x379 = -1;
	int32_t x380 = -1;
	static volatile int32_t t89 = 23717;

	t89 = ((x377%(x378^x379))<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x381 = INT16_MIN;
	static uint8_t x382 = 30U;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = 37701673;
	volatile int32_t t90 = 4169;

	t90 = ((x381%(x382^x383))<x384);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x385 = INT64_MIN;
	volatile uint8_t x386 = UINT8_MAX;
	volatile uint32_t x387 = 66U;
	volatile uint16_t x388 = UINT16_MAX;
	int32_t t91 = 714;

	t91 = ((x385%(x386^x387))<x388);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x389 = 102LLU;
	static int16_t x390 = -2501;
	int8_t x391 = 7;
	static int8_t x392 = 29;
	int32_t t92 = -1;

	t92 = ((x389%(x390^x391))<x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x398 = INT64_MAX;
	volatile uint16_t x399 = 130U;
	uint64_t x400 = 3734043012836521LLU;
	volatile int32_t t93 = -53274868;

	t93 = ((x397%(x398^x399))<x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = INT16_MIN;
	static int32_t x403 = -499839047;
	int8_t x404 = 0;
	static int32_t t94 = -153237745;

	t94 = ((x401%(x402^x403))<x404);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x405 = UINT16_MAX;
	int32_t x406 = INT32_MIN;
	uint16_t x407 = UINT16_MAX;
	volatile int32_t t95 = -8;

	t95 = ((x405%(x406^x407))<x408);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x409 = -18;
	uint64_t x411 = 48957680515LLU;
	static int32_t t96 = -12146;

	t96 = ((x409%(x410^x411))<x412);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x414 = 904194139700237LL;
	uint64_t x416 = 53565390LLU;

	t97 = ((x413%(x414^x415))<x416);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x417 = INT16_MAX;
	int16_t x418 = -63;
	int16_t x419 = INT16_MAX;
	int16_t x420 = -315;
	volatile int32_t t98 = 6327702;

	t98 = ((x417%(x418^x419))<x420);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x426 = INT8_MAX;
	int32_t t99 = -39;

	t99 = ((x425%(x426^x427))<x428);

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

