#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = -2;
uint64_t x10 = UINT64_MAX;
uint64_t x17 = 3281144063245LLU;
int64_t x18 = INT64_MIN;
static uint16_t x22 = 18080U;
uint64_t x28 = 4386724016LLU;
int64_t x29 = -1LL;
volatile int32_t x30 = 47189;
volatile int32_t x38 = 78307;
int16_t x43 = INT16_MIN;
int8_t x44 = -1;
int8_t x45 = 0;
uint16_t x47 = 3U;
int8_t x48 = -46;
int32_t t15 = 410129085;
int64_t x70 = -1LL;
int32_t x72 = 4784944;
int64_t x73 = INT64_MIN;
uint16_t x75 = UINT16_MAX;
int8_t x79 = INT8_MIN;
uint8_t x82 = 62U;
static uint64_t x89 = 11372282861304LLU;
volatile int16_t x90 = 6;
int64_t x94 = INT64_MIN;
int32_t x97 = -19015;
int16_t x98 = -3;
uint32_t x100 = UINT32_MAX;
int32_t t23 = -5283;
int64_t x101 = INT64_MIN;
int16_t x108 = INT16_MAX;
uint64_t x112 = UINT64_MAX;
int8_t x117 = INT8_MIN;
uint8_t x122 = 22U;
int16_t x131 = -1;
int8_t x136 = 4;
int64_t x142 = 179LL;
int16_t x149 = INT16_MIN;
volatile int64_t x152 = -9695425LL;
uint32_t x153 = 1005614964U;
int8_t x156 = INT8_MIN;
uint8_t x158 = UINT8_MAX;
uint16_t x162 = 391U;
uint8_t x163 = 49U;
uint32_t x166 = 18360U;
int64_t x170 = -80544676720544403LL;
volatile int64_t x173 = -6843502315516123LL;
static volatile int32_t x179 = -3;
static volatile int32_t x180 = INT32_MIN;
int64_t x184 = INT64_MAX;
volatile int32_t t44 = 1;
int8_t x193 = -1;
uint8_t x194 = UINT8_MAX;
int8_t x196 = INT8_MIN;
int16_t x205 = -1;
uint32_t x210 = UINT32_MAX;
int16_t x213 = -1;
int32_t t50 = 20;
volatile int32_t t51 = -19;
int64_t x221 = INT64_MIN;
uint16_t x223 = 449U;
int8_t x227 = INT8_MAX;
int32_t t53 = -363;
volatile int8_t x242 = -1;
volatile int8_t x251 = 15;
int8_t x254 = 1;
volatile int64_t x255 = INT64_MIN;
static int16_t x256 = INT16_MIN;
volatile uint16_t x261 = 7U;
uint32_t x265 = 11U;
static int32_t t63 = 60702809;
static volatile int32_t t64 = 292;
int8_t x283 = INT8_MIN;
volatile int16_t x286 = -1;
volatile int32_t t67 = 3192;
int8_t x290 = INT8_MIN;
static int8_t x294 = INT8_MIN;
uint8_t x295 = 2U;
uint64_t x298 = 252965LLU;
uint64_t x306 = UINT64_MAX;
int32_t x307 = INT32_MIN;
uint64_t x313 = UINT64_MAX;
int32_t x316 = 293093782;
volatile int32_t t74 = 6849;
uint64_t x318 = 2959144749058172LLU;
uint32_t x320 = 949U;
int32_t x332 = INT32_MAX;
volatile int32_t x337 = INT32_MIN;
int32_t t80 = -24397;
int32_t x343 = INT32_MIN;
uint16_t x344 = UINT16_MAX;
static volatile int64_t x349 = -1LL;
int8_t x358 = INT8_MIN;
int32_t x360 = INT32_MIN;
volatile uint16_t x364 = UINT16_MAX;
int64_t x367 = INT64_MIN;
int16_t x368 = INT16_MIN;
volatile int32_t t87 = 660;
static int16_t x370 = -1;
int16_t x375 = -1;
int32_t x377 = 2653793;
int64_t x381 = 233542710417LL;
int16_t x383 = INT16_MAX;
int32_t x384 = -1;
int8_t x385 = INT8_MIN;
volatile uint64_t x386 = 10074182484014902LLU;
volatile int32_t t95 = 226195;
static volatile int32_t t96 = 3147;
uint16_t x405 = 4U;
static int64_t x408 = INT64_MIN;


void f0(void) {
	uint8_t x1 = 77U;
	volatile int64_t x2 = INT64_MIN;
	uint32_t x3 = UINT32_MAX;
	uint16_t x4 = 51U;
	volatile int32_t t0 = 65627;

	t0 = (((x1%x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -122;
	uint64_t x7 = UINT64_MAX;
	int32_t x8 = 804372560;
	static int32_t t1 = 5054;

	t1 = (((x5%x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	int16_t x12 = 47;
	static volatile int32_t t2 = -211247;

	t2 = (((x9%x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -28;
	static volatile int64_t x14 = INT64_MIN;
	static int64_t x15 = -1LL;
	static volatile uint8_t x16 = 1U;
	volatile int32_t t3 = 13;

	t3 = (((x13%x14)^x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x19 = INT64_MIN;
	int8_t x20 = -1;
	int32_t t4 = 942744174;

	t4 = (((x17%x18)^x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -369916;
	uint32_t x23 = 125U;
	uint64_t x24 = 118188096344209LLU;
	int32_t t5 = -1;

	t5 = (((x21%x22)^x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	int64_t x27 = -1LL;
	volatile int32_t t6 = -937039772;

	t6 = (((x25%x26)^x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int64_t x31 = INT64_MIN;
	static int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 31931859;

	t7 = (((x29%x30)^x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int8_t x34 = -1;
	uint32_t x35 = 2387949U;
	static int16_t x36 = INT16_MAX;
	volatile int32_t t8 = 0;

	t8 = (((x33%x34)^x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -10;
	int64_t x39 = INT64_MIN;
	volatile int8_t x40 = 0;
	volatile int32_t t9 = 126033;

	t9 = (((x37%x38)^x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	static int32_t t10 = 72257;

	t10 = (((x41%x42)^x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -57;
	volatile int32_t t11 = 85;

	t11 = (((x45%x46)^x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	uint64_t x51 = 413968186897200567LLU;
	volatile int64_t x52 = -1LL;
	volatile int32_t t12 = 0;

	t12 = (((x49%x50)^x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 1LLU;
	int32_t x54 = INT32_MIN;
	int32_t x55 = -64128130;
	static int16_t x56 = INT16_MIN;
	int32_t t13 = -510010058;

	t13 = (((x53%x54)^x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x57 = INT32_MIN;
	static uint32_t x58 = 501547022U;
	int32_t x59 = INT32_MIN;
	volatile int16_t x60 = INT16_MIN;
	volatile int32_t t14 = -4180610;

	t14 = (((x57%x58)^x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 9U;
	int8_t x66 = INT8_MIN;
	uint8_t x67 = 77U;
	volatile int32_t x68 = INT32_MIN;

	t15 = (((x65%x66)^x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static volatile uint8_t x71 = UINT8_MAX;
	int32_t t16 = -230765820;

	t16 = (((x69%x70)^x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MIN;
	uint8_t x76 = 2U;
	static volatile int32_t t17 = 344;

	t17 = (((x73%x74)^x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = -1;
	int16_t x80 = 2607;
	volatile int32_t t18 = -420;

	t18 = (((x77%x78)^x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	static uint16_t x83 = 3U;
	volatile int16_t x84 = -1;
	volatile int32_t t19 = 5707070;

	t19 = (((x81%x82)^x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = -1;
	static int64_t x86 = 101231574234850079LL;
	uint64_t x87 = 3421880521LLU;
	int8_t x88 = INT8_MAX;
	volatile int32_t t20 = -2045;

	t20 = (((x85%x86)^x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x91 = INT8_MIN;
	int16_t x92 = -318;
	volatile int32_t t21 = 16;

	t21 = (((x89%x90)^x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	uint32_t x95 = 928U;
	int8_t x96 = -1;
	volatile int32_t t22 = -1;

	t22 = (((x93%x94)^x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x99 = INT32_MAX;

	t23 = (((x97%x98)^x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x102 = INT16_MAX;
	static int16_t x103 = 106;
	int8_t x104 = -12;
	int32_t t24 = 2176790;

	t24 = (((x101%x102)^x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x106 = 3572526799LLU;
	int16_t x107 = -1;
	int32_t t25 = -51;

	t25 = (((x105%x106)^x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MIN;
	volatile int32_t x110 = INT32_MIN;
	static int8_t x111 = INT8_MIN;
	int32_t t26 = -5240;

	t26 = (((x109%x110)^x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x118 = 3509478LLU;
	int32_t x119 = -34;
	int8_t x120 = INT8_MIN;
	int32_t t27 = 36448140;

	t27 = (((x117%x118)^x119)==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 0U;
	uint32_t x123 = 22922728U;
	int8_t x124 = INT8_MIN;
	volatile int32_t t28 = 2;

	t28 = (((x121%x122)^x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile int8_t x126 = -1;
	static volatile int32_t x127 = -208889;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t29 = 7;

	t29 = (((x125%x126)^x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 54088291LLU;
	uint32_t x130 = 1253636U;
	static uint32_t x132 = 111315338U;
	int32_t t30 = -3130556;

	t30 = (((x129%x130)^x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = -19;
	uint8_t x134 = UINT8_MAX;
	uint32_t x135 = 229839U;
	volatile int32_t t31 = 15886;

	t31 = (((x133%x134)^x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x141 = INT8_MAX;
	uint64_t x143 = 85LLU;
	int16_t x144 = -11023;
	volatile int32_t t32 = -606013;

	t32 = (((x141%x142)^x143)==x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x146 = 2762046086603LLU;
	int8_t x147 = 1;
	uint16_t x148 = 0U;
	int32_t t33 = 332482985;

	t33 = (((x145%x146)^x147)==x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x150 = -9490;
	int32_t x151 = INT32_MIN;
	int32_t t34 = 119269;

	t34 = (((x149%x150)^x151)==x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x154 = 2U;
	static int32_t x155 = -1;
	volatile int32_t t35 = -764072520;

	t35 = (((x153%x154)^x155)==x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x157 = 0U;
	static volatile int32_t x159 = INT32_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t36 = 209358833;

	t36 = (((x157%x158)^x159)==x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x161 = 4718588LLU;
	int16_t x164 = 0;
	static int32_t t37 = -1;

	t37 = (((x161%x162)^x163)==x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x165 = -22454;
	uint64_t x167 = 6456177625925LLU;
	volatile uint32_t x168 = 7179U;
	int32_t t38 = 74;

	t38 = (((x165%x166)^x167)==x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x169 = 864850U;
	int64_t x171 = INT64_MIN;
	int8_t x172 = 1;
	volatile int32_t t39 = -2;

	t39 = (((x169%x170)^x171)==x172);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x174 = 1016104LL;
	volatile int64_t x175 = -1LL;
	volatile int32_t x176 = INT32_MAX;
	int32_t t40 = 1;

	t40 = (((x173%x174)^x175)==x176);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	int8_t x178 = INT8_MAX;
	int32_t t41 = 30372761;

	t41 = (((x177%x178)^x179)==x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	volatile int32_t t42 = -152192;

	t42 = (((x181%x182)^x183)==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -74781;
	int32_t x186 = INT32_MIN;
	uint8_t x187 = UINT8_MAX;
	volatile int16_t x188 = INT16_MIN;
	static volatile int32_t t43 = 1867;

	t43 = (((x185%x186)^x187)==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = -188259186291911LL;
	int32_t x190 = INT32_MIN;
	uint32_t x191 = 46371738U;
	int32_t x192 = INT32_MIN;

	t44 = (((x189%x190)^x191)==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x195 = 10U;
	static volatile int32_t t45 = -40;

	t45 = (((x193%x194)^x195)==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x197 = UINT8_MAX;
	static int16_t x198 = INT16_MIN;
	int64_t x199 = 30968LL;
	uint64_t x200 = 3637508687LLU;
	volatile int32_t t46 = 145;

	t46 = (((x197%x198)^x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = 931859LL;
	int32_t x202 = INT32_MAX;
	uint8_t x203 = 34U;
	int16_t x204 = INT16_MIN;
	int32_t t47 = 69472;

	t47 = (((x201%x202)^x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x206 = UINT32_MAX;
	uint64_t x207 = 3308904023874471562LLU;
	static int8_t x208 = -1;
	volatile int32_t t48 = -3016519;

	t48 = (((x205%x206)^x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x209 = UINT32_MAX;
	int64_t x211 = 106839906640069944LL;
	uint64_t x212 = 337012271732762557LLU;
	int32_t t49 = 856;

	t49 = (((x209%x210)^x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x214 = UINT16_MAX;
	static volatile uint16_t x215 = 428U;
	int64_t x216 = 1219397113767555116LL;

	t50 = (((x213%x214)^x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x217 = UINT32_MAX;
	uint64_t x218 = 23999830587947LLU;
	volatile int8_t x219 = INT8_MAX;
	volatile int64_t x220 = INT64_MAX;

	t51 = (((x217%x218)^x219)==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x222 = -1;
	int8_t x224 = INT8_MIN;
	int32_t t52 = -110330;

	t52 = (((x221%x222)^x223)==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MAX;
	uint64_t x226 = 32742420266LLU;
	uint64_t x228 = 239540986061292246LLU;

	t53 = (((x225%x226)^x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MIN;
	static volatile int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MAX;
	static int8_t x232 = -1;
	int32_t t54 = 66;

	t54 = (((x229%x230)^x231)==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x233 = -1LL;
	int8_t x234 = -2;
	uint32_t x235 = UINT32_MAX;
	uint64_t x236 = UINT64_MAX;
	int32_t t55 = 64;

	t55 = (((x233%x234)^x235)==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x237 = 5582407U;
	static int64_t x238 = -129987350LL;
	int8_t x239 = INT8_MAX;
	static uint32_t x240 = UINT32_MAX;
	static volatile int32_t t56 = -349655954;

	t56 = (((x237%x238)^x239)==x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 355U;
	int32_t x243 = INT32_MAX;
	static int8_t x244 = 13;
	int32_t t57 = -19683707;

	t57 = (((x241%x242)^x243)==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = 0;
	int32_t x246 = -1;
	uint8_t x247 = 27U;
	uint8_t x248 = 1U;
	volatile int32_t t58 = 546;

	t58 = (((x245%x246)^x247)==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int64_t x250 = INT64_MIN;
	volatile uint32_t x252 = 358474U;
	volatile int32_t t59 = -21;

	t59 = (((x249%x250)^x251)==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x253 = 53U;
	static int32_t t60 = -3;

	t60 = (((x253%x254)^x255)==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 0U;
	int32_t x258 = -195;
	uint32_t x259 = 22U;
	int8_t x260 = 1;
	static int32_t t61 = 57931466;

	t61 = (((x257%x258)^x259)==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = -1;
	int64_t x263 = -1LL;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t62 = -95;

	t62 = (((x261%x262)^x263)==x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x266 = INT8_MIN;
	volatile int32_t x267 = 219763;
	uint8_t x268 = 127U;

	t63 = (((x265%x266)^x267)==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	volatile int8_t x270 = INT8_MAX;
	int8_t x271 = -2;
	int8_t x272 = -1;

	t64 = (((x269%x270)^x271)==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x277 = -1;
	uint16_t x278 = UINT16_MAX;
	static volatile int32_t x279 = INT32_MAX;
	uint64_t x280 = 1621528574534LLU;
	int32_t t65 = -1628307;

	t65 = (((x277%x278)^x279)==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = -1LL;
	volatile int8_t x282 = INT8_MIN;
	uint16_t x284 = UINT16_MAX;
	volatile int32_t t66 = -14148;

	t66 = (((x281%x282)^x283)==x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x285 = 608U;
	volatile int16_t x287 = -1;
	volatile int8_t x288 = -3;

	t67 = (((x285%x286)^x287)==x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = UINT16_MAX;
	int64_t x291 = 93998LL;
	int8_t x292 = 20;
	int32_t t68 = -40;

	t68 = (((x289%x290)^x291)==x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = 18484340684915LL;
	uint64_t x296 = 1247LLU;
	volatile int32_t t69 = 105855;

	t69 = (((x293%x294)^x295)==x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MAX;
	int8_t x299 = -1;
	int64_t x300 = 1945716654000352LL;
	int32_t t70 = -37375;

	t70 = (((x297%x298)^x299)==x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = INT16_MIN;
	int32_t x303 = 16470635;
	volatile int64_t x304 = INT64_MIN;
	int32_t t71 = 69320;

	t71 = (((x301%x302)^x303)==x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	uint16_t x308 = 616U;
	volatile int32_t t72 = 26092;

	t72 = (((x305%x306)^x307)==x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x309 = UINT8_MAX;
	uint32_t x310 = 1338376741U;
	uint32_t x311 = 1U;
	int64_t x312 = -104236510180741353LL;
	static volatile int32_t t73 = 5102;

	t73 = (((x309%x310)^x311)==x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MIN;

	t74 = (((x313%x314)^x315)==x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = 186397845616965754LL;
	uint8_t x319 = 1U;
	volatile int32_t t75 = -52268560;

	t75 = (((x317%x318)^x319)==x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x321 = -1;
	int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MIN;
	static volatile int32_t x324 = INT32_MAX;
	volatile int32_t t76 = -158727967;

	t76 = (((x321%x322)^x323)==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MAX;
	int8_t x326 = INT8_MIN;
	int16_t x327 = 945;
	volatile uint32_t x328 = 91255U;
	volatile int32_t t77 = 30357211;

	t77 = (((x325%x326)^x327)==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x329 = 491U;
	int64_t x330 = -1LL;
	volatile int32_t x331 = INT32_MIN;
	volatile int32_t t78 = 137706;

	t78 = (((x329%x330)^x331)==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x333 = -1;
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;
	int32_t t79 = -635450;

	t79 = (((x333%x334)^x335)==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x338 = 28U;
	static uint16_t x339 = UINT16_MAX;
	int32_t x340 = INT32_MIN;

	t80 = (((x337%x338)^x339)==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -1;
	static int64_t x342 = -1LL;
	int32_t t81 = 510;

	t81 = (((x341%x342)^x343)==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -50;
	int32_t x346 = INT32_MIN;
	volatile int64_t x347 = -1LL;
	int16_t x348 = INT16_MIN;
	int32_t t82 = 23;

	t82 = (((x345%x346)^x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 0U;
	static int64_t x352 = INT64_MIN;
	volatile int32_t t83 = -487;

	t83 = (((x349%x350)^x351)==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x353 = -3255;
	static int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	static int64_t x356 = -1LL;
	int32_t t84 = 6106;

	t84 = (((x353%x354)^x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = UINT16_MAX;
	uint16_t x359 = UINT16_MAX;
	int32_t t85 = -14;

	t85 = (((x357%x358)^x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x361 = UINT16_MAX;
	int64_t x362 = -221461887LL;
	int8_t x363 = -1;
	int32_t t86 = 4778100;

	t86 = (((x361%x362)^x363)==x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = -25254966852LL;

	t87 = (((x365%x366)^x367)==x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = -1390;
	static int8_t x371 = INT8_MIN;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t88 = 5;

	t88 = (((x369%x370)^x371)==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 15U;
	volatile int32_t x376 = INT32_MIN;
	int32_t t89 = 185;

	t89 = (((x373%x374)^x375)==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x378 = 101003658;
	uint8_t x379 = 8U;
	uint32_t x380 = 3U;
	static int32_t t90 = -3485;

	t90 = (((x377%x378)^x379)==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x382 = INT64_MIN;
	volatile int32_t t91 = -230;

	t91 = (((x381%x382)^x383)==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x387 = -82LL;
	int8_t x388 = 45;
	int32_t t92 = -368326642;

	t92 = (((x385%x386)^x387)==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = 61240169;
	int8_t x390 = -1;
	int16_t x391 = 0;
	int16_t x392 = INT16_MIN;
	int32_t t93 = 10642;

	t93 = (((x389%x390)^x391)==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = 8U;
	volatile uint16_t x394 = 88U;
	uint16_t x395 = 4U;
	uint16_t x396 = 20U;
	volatile int32_t t94 = 24612;

	t94 = (((x393%x394)^x395)==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x397 = INT64_MIN;
	volatile uint32_t x398 = 1952452U;
	int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;

	t95 = (((x397%x398)^x399)==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x401 = 22U;
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MAX;
	int64_t x404 = 4123093LL;

	t96 = (((x401%x402)^x403)==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x406 = 58LLU;
	uint32_t x407 = UINT32_MAX;
	int32_t t97 = -516856;

	t97 = (((x405%x406)^x407)==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = INT16_MIN;
	volatile int64_t x410 = -1LL;
	volatile uint32_t x411 = UINT32_MAX;
	int16_t x412 = INT16_MIN;
	volatile int32_t t98 = 127126;

	t98 = (((x409%x410)^x411)==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x413 = 25765U;
	static int16_t x414 = INT16_MIN;
	int16_t x415 = -1;
	static uint32_t x416 = UINT32_MAX;
	static int32_t t99 = 280324;

	t99 = (((x413%x414)^x415)==x416);

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

