#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 2;
int16_t x5 = INT16_MIN;
int32_t x8 = INT32_MIN;
uint16_t x39 = 253U;
uint64_t x41 = 254902693920LLU;
int64_t x42 = INT64_MAX;
int8_t x46 = INT8_MIN;
int32_t t10 = -39;
int8_t x52 = -1;
int8_t x53 = -3;
static uint32_t x70 = 1698378580U;
volatile int8_t x76 = -1;
volatile int8_t x80 = INT8_MAX;
int16_t x82 = INT16_MIN;
int16_t x83 = INT16_MIN;
static uint64_t x84 = 89224795466775216LLU;
int32_t x85 = INT32_MAX;
int32_t t20 = -407;
static int8_t x94 = -1;
int32_t x97 = 190400614;
volatile int32_t t23 = 0;
int8_t x107 = -1;
volatile int64_t x114 = -539827770749632793LL;
static uint32_t x118 = 6806U;
static uint64_t x126 = 85LLU;
uint32_t x135 = UINT32_MAX;
int64_t x140 = INT64_MAX;
volatile int32_t t32 = 211693;
uint64_t x154 = 6LLU;
int8_t x156 = INT8_MIN;
static int32_t t36 = 0;
int16_t x166 = -1;
uint8_t x174 = UINT8_MAX;
int32_t x187 = INT32_MIN;
int32_t t44 = -3;
int8_t x190 = -20;
volatile int32_t t45 = 230;
static volatile int16_t x206 = 0;
volatile int32_t t48 = -485;
int8_t x211 = INT8_MIN;
uint16_t x215 = 21489U;
int32_t t50 = -19396;
static int8_t x217 = -5;
static int8_t x219 = INT8_MAX;
volatile int32_t t51 = -5973;
uint64_t x226 = 3606979021LLU;
uint32_t x227 = UINT32_MAX;
uint8_t x233 = 13U;
int8_t x234 = INT8_MIN;
static int32_t x239 = INT32_MIN;
uint64_t x241 = 23LLU;
static volatile uint64_t x245 = 283LLU;
int8_t x255 = -1;
int8_t x267 = INT8_MAX;
int64_t x269 = INT64_MIN;
int64_t x271 = 1571365448LL;
int16_t x275 = INT16_MIN;
int64_t x282 = -7LL;
int32_t x285 = INT32_MIN;
uint8_t x287 = 92U;
int32_t x289 = INT32_MAX;
int8_t x293 = INT8_MIN;
volatile int16_t x316 = -2;
volatile int32_t t74 = -65881867;
uint64_t x321 = 16LLU;
int16_t x324 = INT16_MIN;
int8_t x331 = INT8_MIN;
volatile int16_t x334 = INT16_MIN;
uint32_t x341 = 276U;
volatile uint16_t x342 = 235U;
int32_t x346 = -824135;
int64_t x349 = 5404490561536104LL;
static int16_t x354 = INT16_MIN;
static int64_t x355 = -1LL;
uint32_t x361 = 458229U;
int16_t x363 = INT16_MIN;
volatile int32_t t84 = 243654;
int16_t x366 = INT16_MIN;
int8_t x367 = 6;
volatile int32_t t86 = -142972;
uint8_t x373 = 1U;
uint8_t x377 = 42U;
static uint8_t x378 = 5U;
int8_t x384 = INT8_MIN;
uint32_t x385 = 682789U;
static volatile uint8_t x387 = 7U;
int32_t x388 = INT32_MIN;
int32_t t92 = -1;
volatile int64_t x407 = INT64_MIN;
int16_t x409 = INT16_MIN;
int64_t x410 = -1LL;
volatile uint64_t x412 = 176950295843381LLU;
volatile int8_t x414 = INT8_MIN;
volatile uint32_t x418 = 358U;
volatile uint8_t x419 = 51U;
static int32_t x421 = INT32_MIN;
volatile int32_t t97 = 217203870;
int32_t x425 = INT32_MIN;
int32_t x428 = INT32_MIN;
int32_t x432 = 22173;


void f0(void) {
	int8_t x2 = INT8_MAX;
	uint32_t x3 = 4916U;
	uint64_t x4 = 19128319074330363LLU;
	static volatile int32_t t0 = -2056606;

	t0 = (x1<=((x2+x3)&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	uint64_t x7 = 378144LLU;
	volatile int32_t t1 = 63;

	t1 = (x5<=((x6+x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static int32_t x10 = INT32_MIN;
	static volatile uint64_t x11 = UINT64_MAX;
	int64_t x12 = 18LL;
	volatile int32_t t2 = 69508;

	t2 = (x9<=((x10+x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	volatile uint8_t x14 = UINT8_MAX;
	int8_t x15 = 44;
	int32_t x16 = -1;
	int32_t t3 = 414392;

	t3 = (x13<=((x14+x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = -8340400479323LL;
	volatile uint8_t x22 = UINT8_MAX;
	int64_t x23 = -1LL;
	volatile int16_t x24 = -1;
	volatile int32_t t4 = 477;

	t4 = (x21<=((x22+x23)&x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int64_t x27 = -109LL;
	int64_t x28 = 3769788009604LL;
	volatile int32_t t5 = 219025342;

	t5 = (x25<=((x26+x27)&x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MAX;
	int8_t x30 = -1;
	static uint32_t x31 = 114730U;
	int16_t x32 = -1;
	static volatile int32_t t6 = 4396199;

	t6 = (x29<=((x30+x31)&x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 1693367861U;
	int8_t x35 = -1;
	int64_t x36 = INT64_MIN;
	int32_t t7 = -116;

	t7 = (x33<=((x34+x35)&x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 3674098414LLU;
	volatile uint32_t x38 = UINT32_MAX;
	int16_t x40 = -27;
	volatile int32_t t8 = -1889535;

	t8 = (x37<=((x38+x39)&x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x43 = -1;
	volatile int8_t x44 = INT8_MAX;
	volatile int32_t t9 = 0;

	t9 = (x41<=((x42+x43)&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = UINT32_MAX;
	uint64_t x47 = UINT64_MAX;
	int16_t x48 = -421;

	t10 = (x45<=((x46+x47)&x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x49 = UINT32_MAX;
	uint64_t x50 = 50099982204619475LLU;
	static int64_t x51 = INT64_MIN;
	static int32_t t11 = -118;

	t11 = (x49<=((x50+x51)&x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x54 = INT8_MIN;
	static int16_t x55 = -1330;
	int32_t x56 = INT32_MAX;
	volatile int32_t t12 = 155859;

	t12 = (x53<=((x54+x55)&x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -33704LL;
	uint32_t x58 = 713U;
	volatile int32_t x59 = INT32_MAX;
	int16_t x60 = -7544;
	static volatile int32_t t13 = 195786521;

	t13 = (x57<=((x58+x59)&x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = -1;
	uint16_t x63 = UINT16_MAX;
	int16_t x64 = -464;
	int32_t t14 = 2703;

	t14 = (x61<=((x62+x63)&x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	int64_t x66 = -1LL;
	static volatile int16_t x67 = INT16_MIN;
	volatile int64_t x68 = INT64_MIN;
	int32_t t15 = 415896;

	t15 = (x65<=((x66+x67)&x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int32_t x71 = 43605804;
	volatile int16_t x72 = INT16_MIN;
	int32_t t16 = -3787;

	t16 = (x69<=((x70+x71)&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MIN;
	volatile int16_t x74 = -1;
	static int64_t x75 = -5010597501LL;
	int32_t t17 = 93;

	t17 = (x73<=((x74+x75)&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MIN;
	int32_t x79 = 62669;
	volatile int32_t t18 = -24591;

	t18 = (x77<=((x78+x79)&x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	static int32_t t19 = -124;

	t19 = (x81<=((x82+x83)&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x86 = -89;
	static volatile uint64_t x87 = 6515059787LLU;
	int64_t x88 = INT64_MIN;

	t20 = (x85<=((x86+x87)&x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint32_t x89 = 5U;
	static volatile int32_t x90 = -1;
	static uint16_t x91 = UINT16_MAX;
	static volatile int32_t x92 = INT32_MAX;
	int32_t t21 = -19;

	t21 = (x89<=((x90+x91)&x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x93 = INT16_MIN;
	int64_t x95 = -1LL;
	int64_t x96 = -1LL;
	static int32_t t22 = -79632492;

	t22 = (x93<=((x94+x95)&x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x98 = -1LL;
	volatile int16_t x99 = INT16_MIN;
	volatile int16_t x100 = -1;

	t23 = (x97<=((x98+x99)&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 1U;
	volatile int64_t x102 = -1LL;
	static int16_t x103 = 65;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t24 = -745738;

	t24 = (x101<=((x102+x103)&x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 122002326239242207LLU;
	static uint32_t x106 = 320U;
	volatile int16_t x108 = -382;
	volatile int32_t t25 = 2;

	t25 = (x105<=((x106+x107)&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 3855U;
	int32_t x110 = INT32_MIN;
	volatile uint32_t x111 = 20U;
	static int32_t x112 = 26444;
	static volatile int32_t t26 = -235715;

	t26 = (x109<=((x110+x111)&x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -775;
	static volatile int16_t x115 = INT16_MIN;
	int64_t x116 = -1LL;
	int32_t t27 = 44;

	t27 = (x113<=((x114+x115)&x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = -1;
	volatile int32_t t28 = -1;

	t28 = (x117<=((x118+x119)&x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	int32_t x127 = INT32_MIN;
	int64_t x128 = 15912LL;
	volatile int32_t t29 = -1;

	t29 = (x125<=((x126+x127)&x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = INT8_MIN;
	uint64_t x130 = UINT64_MAX;
	uint32_t x131 = 1018707U;
	uint64_t x132 = UINT64_MAX;
	static volatile int32_t t30 = 112571658;

	t30 = (x129<=((x130+x131)&x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = -5090034016LL;
	int8_t x134 = INT8_MIN;
	int16_t x136 = INT16_MIN;
	int32_t t31 = 5669277;

	t31 = (x133<=((x134+x135)&x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = -1;
	static int64_t x138 = 7896LL;
	volatile int32_t x139 = -1;

	t32 = (x137<=((x138+x139)&x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x141 = 3U;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 3U;
	volatile int32_t t33 = 53;

	t33 = (x141<=((x142+x143)&x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x145 = INT8_MAX;
	static int8_t x146 = -2;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = -1;
	volatile int32_t t34 = -944;

	t34 = (x145<=((x146+x147)&x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x149 = INT32_MIN;
	static volatile int8_t x150 = INT8_MAX;
	int64_t x151 = INT64_MIN;
	static int32_t x152 = -1;
	volatile int32_t t35 = 14241;

	t35 = (x149<=((x150+x151)&x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	static uint64_t x155 = 355826267667LLU;

	t36 = (x153<=((x154+x155)&x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = UINT64_MAX;
	volatile int64_t x159 = -3597620711078LL;
	int64_t x160 = 105715173862227LL;
	volatile int32_t t37 = 5474;

	t37 = (x157<=((x158+x159)&x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 11U;
	static uint8_t x162 = 7U;
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MAX;
	static int32_t t38 = -203807;

	t38 = (x161<=((x162+x163)&x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 11U;
	int64_t x167 = 141522467LL;
	int32_t x168 = -22569275;
	volatile int32_t t39 = 825;

	t39 = (x165<=((x166+x167)&x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	int64_t x170 = 6352LL;
	int16_t x171 = -1;
	static uint32_t x172 = UINT32_MAX;
	volatile int32_t t40 = 1377142;

	t40 = (x169<=((x170+x171)&x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint8_t x173 = 11U;
	int16_t x175 = -1;
	int64_t x176 = -1833061325496LL;
	static int32_t t41 = -91559734;

	t41 = (x173<=((x174+x175)&x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x177 = 6541U;
	static uint64_t x178 = 12893385971770LLU;
	volatile int8_t x179 = INT8_MIN;
	int8_t x180 = -1;
	static volatile int32_t t42 = 361;

	t42 = (x177<=((x178+x179)&x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = INT16_MAX;
	int32_t x182 = -1;
	static int8_t x183 = -20;
	volatile int64_t x184 = INT64_MAX;
	static int32_t t43 = 1;

	t43 = (x181<=((x182+x183)&x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 6U;
	uint8_t x186 = 4U;
	int32_t x188 = 158;

	t44 = (x185<=((x186+x187)&x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = 12772196543478468LLU;
	uint64_t x191 = UINT64_MAX;
	volatile uint16_t x192 = 10410U;

	t45 = (x189<=((x190+x191)&x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = 24972U;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = 0;
	volatile int32_t x200 = INT32_MIN;
	int32_t t46 = -62309;

	t46 = (x197<=((x198+x199)&x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	static uint64_t x202 = 29948132553192950LLU;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t47 = -449202676;

	t47 = (x201<=((x202+x203)&x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 0U;
	static uint16_t x207 = UINT16_MAX;
	static uint16_t x208 = 1U;

	t48 = (x205<=((x206+x207)&x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -203695020LL;
	int32_t x210 = INT32_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t49 = 5;

	t49 = (x209<=((x210+x211)&x212));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x213 = 35U;
	int64_t x214 = -993918942368160LL;
	int32_t x216 = -3;

	t50 = (x213<=((x214+x215)&x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = 68230LL;
	volatile int16_t x220 = -1;

	t51 = (x217<=((x218+x219)&x220));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = 241574412215LLU;
	volatile uint32_t x222 = 734U;
	int8_t x223 = INT8_MIN;
	volatile int8_t x224 = INT8_MIN;
	int32_t t52 = 12970875;

	t52 = (x221<=((x222+x223)&x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = INT64_MAX;
	int64_t x228 = INT64_MIN;
	int32_t t53 = 3;

	t53 = (x225<=((x226+x227)&x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = 902U;
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = 4;
	volatile int32_t x232 = 224179;
	static volatile int32_t t54 = 465498;

	t54 = (x229<=((x230+x231)&x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x235 = 3375674275LLU;
	int32_t x236 = INT32_MIN;
	int32_t t55 = -4107573;

	t55 = (x233<=((x234+x235)&x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x237 = INT64_MIN;
	static volatile uint32_t x238 = 627337U;
	volatile int8_t x240 = INT8_MIN;
	volatile int32_t t56 = -3461;

	t56 = (x237<=((x238+x239)&x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 0U;
	int8_t x244 = INT8_MAX;
	int32_t t57 = 420;

	t57 = (x241<=((x242+x243)&x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x246 = 522231226533LL;
	uint32_t x247 = 32557510U;
	int16_t x248 = INT16_MIN;
	int32_t t58 = -31;

	t58 = (x245<=((x246+x247)&x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MIN;
	uint32_t x250 = 2U;
	uint64_t x251 = UINT64_MAX;
	int8_t x252 = 0;
	volatile int32_t t59 = -13449790;

	t59 = (x249<=((x250+x251)&x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 1U;
	uint8_t x254 = 25U;
	int16_t x256 = -1;
	volatile int32_t t60 = -10622031;

	t60 = (x253<=((x254+x255)&x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = -41838453;
	static uint16_t x258 = UINT16_MAX;
	static int32_t x259 = 117158652;
	uint64_t x260 = 1735LLU;
	volatile int32_t t61 = 10815302;

	t61 = (x257<=((x258+x259)&x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x261 = UINT16_MAX;
	int16_t x262 = INT16_MIN;
	static uint64_t x263 = 28LLU;
	int16_t x264 = -1;
	volatile int32_t t62 = 55;

	t62 = (x261<=((x262+x263)&x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x265 = INT32_MAX;
	uint8_t x266 = 4U;
	int64_t x268 = 107483552975262LL;
	volatile int32_t t63 = 2379303;

	t63 = (x265<=((x266+x267)&x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x270 = 0;
	static int16_t x272 = INT16_MIN;
	int32_t t64 = -4138;

	t64 = (x269<=((x270+x271)&x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = 16596632U;
	int32_t x276 = INT32_MIN;
	int32_t t65 = -1;

	t65 = (x273<=((x274+x275)&x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x277 = UINT8_MAX;
	static uint16_t x278 = UINT16_MAX;
	int16_t x279 = -20;
	int8_t x280 = -17;
	static int32_t t66 = -25;

	t66 = (x277<=((x278+x279)&x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = -107821431;
	static int16_t x283 = 417;
	int64_t x284 = -1LL;
	int32_t t67 = -53776;

	t67 = (x281<=((x282+x283)&x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x286 = INT16_MIN;
	uint32_t x288 = 89U;
	static int32_t t68 = 32018;

	t68 = (x285<=((x286+x287)&x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = INT8_MAX;
	int16_t x291 = -1;
	int64_t x292 = INT64_MIN;
	int32_t t69 = 213984305;

	t69 = (x289<=((x290+x291)&x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x294 = 2986U;
	volatile uint16_t x295 = 619U;
	int64_t x296 = 1LL;
	int32_t t70 = 613;

	t70 = (x293<=((x294+x295)&x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x297 = -2105801938646763307LL;
	int16_t x298 = 1;
	static int32_t x299 = 0;
	uint64_t x300 = 4585540461LLU;
	volatile int32_t t71 = 4;

	t71 = (x297<=((x298+x299)&x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MAX;
	static int16_t x306 = -2;
	int32_t x307 = -46853;
	static volatile uint16_t x308 = UINT16_MAX;
	volatile int32_t t72 = -3;

	t72 = (x305<=((x306+x307)&x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 0U;
	int64_t x310 = -1LL;
	uint8_t x311 = 28U;
	uint8_t x312 = 8U;
	static int32_t t73 = 1;

	t73 = (x309<=((x310+x311)&x312));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = 1011360;
	volatile uint32_t x314 = 0U;
	int8_t x315 = INT8_MAX;

	t74 = (x313<=((x314+x315)&x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MAX;
	static int32_t t75 = -1663202;

	t75 = (x321<=((x322+x323)&x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x325 = INT32_MAX;
	static int32_t x326 = INT32_MIN;
	uint32_t x327 = 14U;
	int16_t x328 = INT16_MIN;
	volatile int32_t t76 = -409634640;

	t76 = (x325<=((x326+x327)&x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 2627733120974691LLU;
	uint16_t x330 = UINT16_MAX;
	static uint16_t x332 = UINT16_MAX;
	int32_t t77 = -154;

	t77 = (x329<=((x330+x331)&x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int8_t x335 = 4;
	volatile int64_t x336 = INT64_MIN;
	int32_t t78 = -107961842;

	t78 = (x333<=((x334+x335)&x336));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x343 = UINT32_MAX;
	int32_t x344 = INT32_MIN;
	static volatile int32_t t79 = -13657;

	t79 = (x341<=((x342+x343)&x344));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x345 = -7765104;
	uint8_t x347 = 93U;
	uint8_t x348 = 0U;
	int32_t t80 = 29;

	t80 = (x345<=((x346+x347)&x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x350 = 29356982U;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MIN;
	int32_t t81 = 160192;

	t81 = (x349<=((x350+x351)&x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 654U;
	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t82 = -634573802;

	t82 = (x353<=((x354+x355)&x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x357 = -27;
	volatile int64_t x358 = 194756234355704LL;
	int32_t x359 = -1;
	volatile int8_t x360 = INT8_MAX;
	int32_t t83 = -1;

	t83 = (x357<=((x358+x359)&x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x362 = INT8_MIN;
	int64_t x364 = 623625275LL;

	t84 = (x361<=((x362+x363)&x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = -1;
	int32_t x368 = INT32_MAX;
	volatile int32_t t85 = -677951165;

	t85 = (x365<=((x366+x367)&x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = 28U;
	int32_t x371 = -1;
	static volatile int32_t x372 = -1;

	t86 = (x369<=((x370+x371)&x372));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x374 = -1;
	volatile int16_t x375 = INT16_MAX;
	int8_t x376 = -6;
	int32_t t87 = 18556630;

	t87 = (x373<=((x374+x375)&x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x379 = 41U;
	volatile int8_t x380 = -1;
	volatile int32_t t88 = -5097;

	t88 = (x377<=((x378+x379)&x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x381 = -14500;
	int64_t x382 = -1LL;
	static int64_t x383 = -115LL;
	int32_t t89 = 246032;

	t89 = (x381<=((x382+x383)&x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x386 = 102852U;
	volatile int32_t t90 = 0;

	t90 = (x385<=((x386+x387)&x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -1LL;
	uint32_t x390 = 24977U;
	int16_t x391 = 2460;
	int16_t x392 = -1;
	static volatile int32_t t91 = 219;

	t91 = (x389<=((x390+x391)&x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 1340922807193989LLU;
	uint8_t x402 = 2U;
	int32_t x403 = -51033;
	uint64_t x404 = 72LLU;

	t92 = (x401<=((x402+x403)&x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = 2;
	uint64_t x406 = 234284LLU;
	volatile int32_t x408 = INT32_MIN;
	volatile int32_t t93 = -45813681;

	t93 = (x405<=((x406+x407)&x408));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x411 = -1;
	static volatile int32_t t94 = -4;

	t94 = (x409<=((x410+x411)&x412));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = 59;
	uint8_t x415 = UINT8_MAX;
	int8_t x416 = 0;
	int32_t t95 = 212547;

	t95 = (x413<=((x414+x415)&x416));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x417 = UINT64_MAX;
	int16_t x420 = INT16_MAX;
	volatile int32_t t96 = 38903;

	t96 = (x417<=((x418+x419)&x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x422 = -44089662;
	static int64_t x423 = -1LL;
	volatile int16_t x424 = INT16_MAX;

	t97 = (x421<=((x422+x423)&x424));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x426 = 69013428735LLU;
	uint64_t x427 = 11343LLU;
	volatile int32_t t98 = -513512;

	t98 = (x425<=((x426+x427)&x428));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x429 = INT8_MAX;
	int8_t x430 = INT8_MAX;
	volatile uint16_t x431 = 0U;
	volatile int32_t t99 = 189032;

	t99 = (x429<=((x430+x431)&x432));

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

