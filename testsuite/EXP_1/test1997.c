#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 339477;
int64_t x6 = INT64_MAX;
int16_t x13 = INT16_MAX;
uint64_t x22 = 12749478963841313LLU;
int16_t x24 = INT16_MIN;
uint16_t x31 = UINT16_MAX;
volatile int32_t t7 = 37912;
uint16_t x36 = UINT16_MAX;
int16_t x37 = INT16_MIN;
volatile int32_t x41 = -1;
int32_t t12 = -1;
uint64_t x53 = 535745451847556LLU;
int8_t x54 = -1;
volatile int32_t t13 = -8;
uint8_t x59 = 30U;
uint16_t x62 = UINT16_MAX;
volatile int32_t t16 = -929;
static uint8_t x69 = 36U;
int64_t x71 = -1LL;
static int16_t x74 = INT16_MIN;
volatile int64_t x75 = -1LL;
uint32_t x80 = 30128U;
static int16_t x85 = 0;
static volatile uint8_t x95 = 21U;
volatile int32_t x97 = INT32_MIN;
int32_t x98 = -97383;
int32_t t25 = -4957;
int8_t x105 = 1;
int16_t x119 = -1;
static uint64_t x121 = 3LLU;
int64_t x123 = INT64_MAX;
int8_t x132 = INT8_MIN;
static volatile int32_t t33 = 14465;
int32_t x138 = INT32_MIN;
uint64_t x139 = UINT64_MAX;
int32_t t35 = -356;
int8_t x145 = -1;
volatile int32_t t36 = 1;
int64_t x152 = -12930LL;
volatile uint64_t x157 = UINT64_MAX;
volatile int32_t t39 = 5931937;
int64_t x161 = 21849LL;
uint64_t x164 = UINT64_MAX;
uint8_t x166 = UINT8_MAX;
static int8_t x180 = INT8_MIN;
int32_t t44 = -72954976;
int64_t x181 = 6LL;
uint32_t x185 = UINT32_MAX;
static int16_t x189 = INT16_MIN;
volatile int16_t x191 = -1;
int16_t x196 = INT16_MAX;
volatile int32_t t48 = -439;
static int32_t t52 = -7970;
int16_t x225 = INT16_MIN;
int32_t t57 = 41;
int32_t x240 = INT32_MIN;
int32_t x243 = INT32_MIN;
int64_t x244 = INT64_MIN;
volatile uint32_t x245 = 3993U;
int32_t x260 = INT32_MIN;
volatile uint8_t x261 = UINT8_MAX;
int64_t x262 = INT64_MIN;
int8_t x271 = -9;
int8_t x273 = 62;
volatile int64_t x279 = INT64_MIN;
static volatile uint16_t x288 = 248U;
uint64_t x289 = 237295LLU;
uint32_t x300 = UINT32_MAX;
volatile uint32_t x302 = 0U;
int32_t t75 = -22;
int32_t x305 = INT32_MAX;
int32_t t76 = 10;
volatile int8_t x312 = -11;
uint16_t x316 = UINT16_MAX;
int64_t x317 = INT64_MIN;
static uint16_t x319 = 11569U;
static volatile uint8_t x321 = UINT8_MAX;
volatile int32_t t81 = -804542247;
volatile int32_t x354 = 0;
uint8_t x355 = UINT8_MAX;
static int32_t x356 = 4;
volatile int32_t t88 = 258926;
static volatile uint16_t x358 = UINT16_MAX;
int16_t x363 = INT16_MIN;
int64_t x365 = -13870066155LL;
uint16_t x370 = 160U;
static volatile int32_t t94 = -326067058;
int32_t t95 = 14026062;
int32_t t96 = 100792097;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int64_t x2 = INT64_MIN;
	int16_t x3 = -15374;
	int32_t x4 = INT32_MIN;

	t0 = (((x1|x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile uint8_t x7 = 0U;
	int8_t x8 = 11;
	int32_t t1 = -193377279;

	t1 = (((x5|x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint64_t x10 = 1060353186328857LLU;
	volatile uint16_t x11 = UINT16_MAX;
	static int32_t x12 = -936221;
	volatile int32_t t2 = -771823;

	t2 = (((x9|x10)&x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;
	uint64_t x15 = UINT64_MAX;
	volatile int64_t x16 = INT64_MIN;
	static int32_t t3 = -2333;

	t3 = (((x13|x14)&x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MAX;
	int8_t x18 = INT8_MAX;
	int8_t x19 = INT8_MIN;
	volatile int16_t x20 = INT16_MIN;
	static int32_t t4 = -842;

	t4 = (((x17|x18)&x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	uint8_t x23 = UINT8_MAX;
	static volatile int32_t t5 = -652515914;

	t5 = (((x21|x22)&x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int16_t x26 = -1;
	static int64_t x27 = INT64_MAX;
	uint32_t x28 = 1440972U;
	int32_t t6 = -249462;

	t6 = (((x25|x26)&x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = INT16_MAX;
	static int8_t x30 = INT8_MAX;
	volatile int8_t x32 = INT8_MIN;

	t7 = (((x29|x30)&x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -8997152008110834LL;
	static int32_t x34 = -1347;
	int64_t x35 = 4067741LL;
	volatile int32_t t8 = -115187867;

	t8 = (((x33|x34)&x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = 8;
	volatile int32_t x39 = INT32_MAX;
	uint64_t x40 = 121242141LLU;
	int32_t t9 = -153131661;

	t9 = (((x37|x38)&x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = -1;
	int64_t x44 = INT64_MAX;
	volatile int32_t t10 = -3886477;

	t10 = (((x41|x42)&x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 216;
	int8_t x46 = -1;
	int64_t x47 = -3664LL;
	static uint8_t x48 = UINT8_MAX;
	int32_t t11 = -18;

	t11 = (((x45|x46)&x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 0;
	int64_t x50 = -474190068LL;
	int32_t x51 = INT32_MAX;
	volatile int64_t x52 = INT64_MAX;

	t12 = (((x49|x50)&x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = INT16_MAX;
	static int32_t x56 = INT32_MAX;

	t13 = (((x53|x54)&x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -7560328140202775LL;
	int8_t x58 = INT8_MIN;
	uint8_t x60 = 0U;
	volatile int32_t t14 = -74167;

	t14 = (((x57|x58)&x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x63 = 3U;
	static uint64_t x64 = 2LLU;
	int32_t t15 = 19050;

	t15 = (((x61|x62)&x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MAX;
	int8_t x66 = INT8_MAX;
	volatile int8_t x67 = -27;
	volatile uint32_t x68 = UINT32_MAX;

	t16 = (((x65|x66)&x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = 105531433815LL;
	uint64_t x72 = 1082LLU;
	volatile int32_t t17 = -20983125;

	t17 = (((x69|x70)&x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = 815368167767LL;
	volatile int64_t x76 = -1LL;
	int32_t t18 = -1736;

	t18 = (((x73|x74)&x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = -1;
	int8_t x78 = INT8_MIN;
	int16_t x79 = -75;
	volatile int32_t t19 = 6832;

	t19 = (((x77|x78)&x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 4235U;
	static int8_t x82 = -1;
	int16_t x83 = -1;
	static uint32_t x84 = UINT32_MAX;
	int32_t t20 = 1;

	t20 = (((x81|x82)&x83)==x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x86 = 2440246248699646065LLU;
	static int32_t x87 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	int32_t t21 = -2168;

	t21 = (((x85|x86)&x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static uint8_t x90 = 2U;
	static uint16_t x91 = 1U;
	volatile uint32_t x92 = 3704376U;
	volatile int32_t t22 = -3;

	t22 = (((x89|x90)&x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int16_t x94 = -1;
	static int64_t x96 = INT64_MIN;
	int32_t t23 = -392786356;

	t23 = (((x93|x94)&x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x99 = INT16_MIN;
	int32_t x100 = -1;
	int32_t t24 = -379832;

	t24 = (((x97|x98)&x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = INT8_MAX;
	volatile int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	int8_t x104 = INT8_MIN;

	t25 = (((x101|x102)&x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	int32_t x108 = INT32_MIN;
	int32_t t26 = 532479875;

	t26 = (((x105|x106)&x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -13960;
	static int64_t x110 = INT64_MIN;
	static int8_t x111 = 22;
	volatile int16_t x112 = -1;
	volatile int32_t t27 = -1522;

	t27 = (((x109|x110)&x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -11;
	uint8_t x114 = 0U;
	volatile uint64_t x115 = 1080506223482672447LLU;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 20;

	t28 = (((x113|x114)&x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x117 = INT16_MIN;
	int32_t x118 = 20;
	static uint8_t x120 = 99U;
	static volatile int32_t t29 = -629973572;

	t29 = (((x117|x118)&x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x122 = -1;
	int16_t x124 = 582;
	volatile int32_t t30 = 4;

	t30 = (((x121|x122)&x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 41;
	int16_t x126 = INT16_MAX;
	int16_t x127 = 0;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t31 = 782323488;

	t31 = (((x125|x126)&x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MAX;
	volatile uint32_t x130 = 2091193U;
	int32_t x131 = -1;
	int32_t t32 = -24;

	t32 = (((x129|x130)&x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 6245U;
	uint8_t x134 = 6U;
	volatile int32_t x135 = INT32_MAX;
	uint32_t x136 = UINT32_MAX;

	t33 = (((x133|x134)&x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	int64_t x140 = -192448780764194476LL;
	int32_t t34 = 13049706;

	t34 = (((x137|x138)&x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MAX;
	int16_t x142 = INT16_MIN;
	static uint8_t x143 = 11U;
	uint64_t x144 = 685041020LLU;

	t35 = (((x141|x142)&x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = INT32_MAX;
	volatile uint8_t x147 = UINT8_MAX;
	volatile int64_t x148 = INT64_MIN;

	t36 = (((x145|x146)&x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x149 = -1;
	int32_t x150 = INT32_MIN;
	uint16_t x151 = 18581U;
	int32_t t37 = -1;

	t37 = (((x149|x150)&x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int16_t x154 = 27;
	static volatile uint32_t x155 = 10U;
	volatile uint32_t x156 = 0U;
	static int32_t t38 = -403157945;

	t38 = (((x153|x154)&x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x158 = 6225576619LLU;
	static uint64_t x159 = 7776909LLU;
	static uint64_t x160 = 861454380539LLU;

	t39 = (((x157|x158)&x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = 18;
	static int64_t x163 = -1LL;
	volatile int32_t t40 = -41;

	t40 = (((x161|x162)&x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 3355U;
	int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t41 = -24541;

	t41 = (((x165|x166)&x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = 294;
	volatile int16_t x170 = 1;
	uint64_t x171 = UINT64_MAX;
	volatile uint8_t x172 = UINT8_MAX;
	static int32_t t42 = 118;

	t42 = (((x169|x170)&x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = INT32_MIN;
	int8_t x174 = -1;
	volatile int32_t x175 = INT32_MAX;
	int16_t x176 = -1;
	int32_t t43 = 0;

	t43 = (((x173|x174)&x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = UINT8_MAX;
	int64_t x178 = 1022637183LL;
	static int32_t x179 = INT32_MIN;

	t44 = (((x177|x178)&x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = UINT32_MAX;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t45 = 13;

	t45 = (((x181|x182)&x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x186 = -21LL;
	static volatile int64_t x187 = -1LL;
	uint32_t x188 = 574U;
	int32_t t46 = 918932621;

	t46 = (((x185|x186)&x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x190 = -1;
	static uint8_t x192 = UINT8_MAX;
	int32_t t47 = -2770803;

	t47 = (((x189|x190)&x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;

	t48 = (((x193|x194)&x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 217U;
	volatile uint8_t x198 = 42U;
	volatile int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	static int32_t t49 = 2;

	t49 = (((x197|x198)&x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 0U;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = -119854989883LL;
	int64_t x204 = -204873LL;
	volatile int32_t t50 = -6;

	t50 = (((x201|x202)&x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	volatile uint32_t x206 = 8329U;
	int16_t x207 = INT16_MIN;
	int16_t x208 = 1613;
	volatile int32_t t51 = -1265;

	t51 = (((x205|x206)&x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x209 = 1U;
	static uint32_t x210 = UINT32_MAX;
	volatile uint64_t x211 = 71127541205876830LLU;
	volatile int8_t x212 = INT8_MIN;

	t52 = (((x209|x210)&x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MAX;
	uint16_t x214 = UINT16_MAX;
	uint8_t x215 = 6U;
	int16_t x216 = -58;
	volatile int32_t t53 = 11225;

	t53 = (((x213|x214)&x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	volatile int16_t x218 = -1;
	int8_t x219 = 2;
	int8_t x220 = -1;
	int32_t t54 = 1130364;

	t54 = (((x217|x218)&x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	volatile uint32_t x222 = UINT32_MAX;
	int8_t x223 = -1;
	static int16_t x224 = INT16_MIN;
	int32_t t55 = 315;

	t55 = (((x221|x222)&x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x226 = INT8_MAX;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -488800296;

	t56 = (((x225|x226)&x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 1766;
	int16_t x230 = -3;
	int8_t x231 = INT8_MAX;
	int64_t x232 = INT64_MAX;

	t57 = (((x229|x230)&x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = -3867;
	uint16_t x235 = 1U;
	static volatile int64_t x236 = -504383793568714LL;
	volatile int32_t t58 = 10738;

	t58 = (((x233|x234)&x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	uint64_t x238 = 101855935LLU;
	static int64_t x239 = INT64_MIN;
	int32_t t59 = 1058615353;

	t59 = (((x237|x238)&x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	volatile int64_t x242 = -1LL;
	int32_t t60 = -5332;

	t60 = (((x241|x242)&x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x246 = INT64_MIN;
	static int32_t x247 = -1;
	static volatile int8_t x248 = -1;
	int32_t t61 = -16;

	t61 = (((x245|x246)&x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -8307;
	static int8_t x250 = INT8_MAX;
	uint8_t x251 = UINT8_MAX;
	uint64_t x252 = UINT64_MAX;
	static volatile int32_t t62 = 237294753;

	t62 = (((x249|x250)&x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = INT32_MIN;
	static int16_t x254 = -1;
	uint16_t x255 = 258U;
	volatile int64_t x256 = -594252816164512625LL;
	volatile int32_t t63 = 16;

	t63 = (((x253|x254)&x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = -18143835825203LL;
	int32_t t64 = -10875624;

	t64 = (((x257|x258)&x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = INT16_MAX;
	static int64_t x264 = INT64_MAX;
	static int32_t t65 = -426;

	t65 = (((x261|x262)&x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 0U;
	static int8_t x266 = INT8_MAX;
	static uint32_t x267 = 1U;
	uint64_t x268 = 895194754377418894LLU;
	volatile int32_t t66 = -126187582;

	t66 = (((x265|x266)&x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = UINT32_MAX;
	int32_t x270 = -9;
	uint8_t x272 = 6U;
	volatile int32_t t67 = 1111;

	t67 = (((x269|x270)&x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x274 = INT16_MIN;
	int64_t x275 = -1LL;
	int32_t x276 = 4820323;
	int32_t t68 = 9789466;

	t68 = (((x273|x274)&x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = 27298358;
	static volatile int16_t x280 = INT16_MIN;
	int32_t t69 = 32819705;

	t69 = (((x277|x278)&x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x281 = 3U;
	int32_t x282 = 224126;
	int64_t x283 = -154888292625186LL;
	int32_t x284 = INT32_MIN;
	int32_t t70 = 101357;

	t70 = (((x281|x282)&x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x285 = 12136555U;
	static uint16_t x286 = 511U;
	int16_t x287 = 1;
	volatile int32_t t71 = 0;

	t71 = (((x285|x286)&x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MAX;
	int32_t x291 = -2963006;
	int8_t x292 = 51;
	volatile int32_t t72 = -5115;

	t72 = (((x289|x290)&x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	uint32_t x294 = 754440U;
	int8_t x295 = INT8_MIN;
	uint8_t x296 = 0U;
	volatile int32_t t73 = -108939528;

	t73 = (((x293|x294)&x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -75;
	uint32_t x298 = UINT32_MAX;
	volatile int8_t x299 = INT8_MIN;
	volatile int32_t t74 = -147351;

	t74 = (((x297|x298)&x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 23U;
	uint8_t x303 = UINT8_MAX;
	int8_t x304 = 0;

	t75 = (((x301|x302)&x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = -1;
	int32_t x307 = -1;
	int32_t x308 = -1;

	t76 = (((x305|x306)&x307)==x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	int8_t x310 = INT8_MAX;
	uint16_t x311 = 3163U;
	int32_t t77 = -245941897;

	t77 = (((x309|x310)&x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 78774U;
	volatile int64_t x314 = INT64_MAX;
	int16_t x315 = INT16_MAX;
	int32_t t78 = -790781507;

	t78 = (((x313|x314)&x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MIN;
	uint64_t x320 = 43270830LLU;
	int32_t t79 = -1;

	t79 = (((x317|x318)&x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = 41;
	int32_t x323 = -8771412;
	uint16_t x324 = 12378U;
	int32_t t80 = -361282997;

	t80 = (((x321|x322)&x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = 122U;
	int32_t x328 = INT32_MIN;

	t81 = (((x325|x326)&x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int32_t x330 = INT32_MIN;
	int16_t x331 = -4;
	volatile int64_t x332 = INT64_MIN;
	volatile int32_t t82 = 3041583;

	t82 = (((x329|x330)&x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MAX;
	static int16_t x334 = INT16_MAX;
	int32_t x335 = -11;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -9170563;

	t83 = (((x333|x334)&x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 296;
	int16_t x338 = INT16_MIN;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = -1;
	static int32_t t84 = -6;

	t84 = (((x337|x338)&x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -576LL;
	int32_t t85 = -787146;

	t85 = (((x341|x342)&x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = 193536972U;
	static uint16_t x348 = 12U;
	static volatile int32_t t86 = 984421393;

	t86 = (((x345|x346)&x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = 2062779;
	volatile uint8_t x350 = UINT8_MAX;
	static int64_t x351 = -127046LL;
	static int64_t x352 = -1LL;
	volatile int32_t t87 = -14929;

	t87 = (((x349|x350)&x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;

	t88 = (((x353|x354)&x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	uint32_t x359 = UINT32_MAX;
	volatile int16_t x360 = -1;
	volatile int32_t t89 = -18439974;

	t89 = (((x357|x358)&x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int32_t x362 = -1;
	int64_t x364 = -1LL;
	volatile int32_t t90 = 60471;

	t90 = (((x361|x362)&x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = 7;
	int16_t x367 = -701;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t91 = -3;

	t91 = (((x365|x366)&x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -59;
	int64_t x371 = INT64_MIN;
	int8_t x372 = 0;
	volatile int32_t t92 = -246094911;

	t92 = (((x369|x370)&x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 10512736267686689LL;
	volatile uint16_t x374 = 22101U;
	int8_t x375 = -6;
	int8_t x376 = -2;
	volatile int32_t t93 = -156652185;

	t93 = (((x373|x374)&x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = INT64_MIN;
	uint8_t x378 = 0U;
	int64_t x379 = 5783120224752738LL;
	volatile int64_t x380 = INT64_MAX;

	t94 = (((x377|x378)&x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	uint8_t x384 = 5U;

	t95 = (((x381|x382)&x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -1;
	volatile uint16_t x386 = UINT16_MAX;
	volatile uint16_t x387 = 6U;
	uint16_t x388 = UINT16_MAX;

	t96 = (((x385|x386)&x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	static int16_t x390 = INT16_MIN;
	volatile int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	static int32_t t97 = -39;

	t97 = (((x389|x390)&x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 7U;
	uint8_t x394 = 4U;
	volatile int64_t x395 = INT64_MAX;
	volatile uint64_t x396 = 34137LLU;
	int32_t t98 = 15412855;

	t98 = (((x393|x394)&x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	uint16_t x398 = 18U;
	int32_t x399 = INT32_MIN;
	static int8_t x400 = INT8_MAX;
	int32_t t99 = 395;

	t99 = (((x397|x398)&x399)==x400);

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

