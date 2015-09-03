#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
volatile int32_t x8 = INT32_MIN;
volatile uint64_t x11 = 3LLU;
static uint64_t x12 = 34617249877194059LLU;
uint64_t t2 = 19LLU;
uint32_t x28 = UINT32_MAX;
static volatile int8_t x29 = INT8_MIN;
static int32_t x30 = INT32_MAX;
int8_t x32 = INT8_MAX;
int8_t x42 = INT8_MIN;
int64_t x55 = INT64_MIN;
volatile int16_t x61 = INT16_MAX;
int16_t x62 = INT16_MIN;
static int32_t x64 = INT32_MAX;
uint8_t x71 = 23U;
uint32_t x78 = UINT32_MAX;
int64_t t19 = 1095395669453LL;
static int64_t x82 = INT64_MAX;
volatile int32_t t20 = 193768;
uint16_t x87 = 2387U;
int64_t x101 = INT64_MIN;
int32_t x105 = 3154;
int64_t x106 = INT64_MAX;
volatile int8_t x110 = 1;
uint64_t x115 = UINT64_MAX;
int32_t x122 = -1;
int16_t x126 = -720;
static int32_t x127 = INT32_MIN;
volatile int64_t t31 = 17832LL;
int32_t t32 = 99899158;
static int16_t x134 = INT16_MAX;
int32_t t34 = 8;
int32_t x147 = INT32_MIN;
volatile int32_t t36 = -1007;
volatile int32_t t37 = -271122034;
static int16_t x156 = -1;
volatile int64_t x159 = INT64_MAX;
int64_t t40 = -397810371702LL;
uint8_t x174 = 4U;
int32_t x177 = INT32_MAX;
uint16_t x180 = 9534U;
volatile int64_t x182 = -39135069LL;
int64_t x185 = INT64_MIN;
int8_t x188 = -7;
volatile int32_t t46 = 50;
uint32_t x191 = 473176038U;
volatile int32_t t47 = 2399;
int8_t x193 = INT8_MIN;
uint64_t x196 = 9541470383424LLU;
volatile uint64_t t48 = 187919048252974LLU;
uint32_t x200 = UINT32_MAX;
int32_t x201 = INT32_MIN;
volatile int16_t x203 = -1;
uint8_t x207 = UINT8_MAX;
uint32_t x208 = 268905U;
static volatile uint32_t t51 = 80702U;
int32_t x210 = INT32_MIN;
volatile uint32_t x213 = UINT32_MAX;
int32_t x214 = 6;
uint8_t x215 = UINT8_MAX;
volatile uint64_t x223 = 85600LLU;
volatile int32_t t56 = 15585;
int64_t x229 = 1647LL;
int32_t t57 = 313226;
uint8_t x235 = 12U;
int32_t x241 = -288982;
volatile int32_t x246 = -6064395;
int16_t x255 = 21;
uint32_t x258 = UINT32_MAX;
int64_t x262 = INT64_MAX;
int32_t t66 = 344485;
volatile int32_t t69 = 259;
uint16_t x283 = 1U;
int64_t x288 = INT64_MIN;
int16_t x301 = INT16_MIN;
static int64_t x302 = INT64_MIN;
uint16_t x303 = UINT16_MAX;
volatile uint64_t x308 = UINT64_MAX;
volatile int64_t x311 = INT64_MIN;
static int64_t x317 = INT64_MAX;
volatile int32_t x320 = -1;
uint32_t x322 = 212475377U;
uint32_t x323 = 99544492U;
int64_t x326 = -58758430744433683LL;
static uint64_t x327 = 228568030948LLU;
volatile uint64_t x336 = UINT64_MAX;
volatile uint8_t x339 = 102U;
static int16_t x343 = INT16_MIN;
static int64_t x348 = INT64_MIN;
static int8_t x352 = INT8_MIN;
int32_t x353 = -1;
int32_t x356 = -51454;
volatile int32_t t88 = -10;
int32_t x361 = INT32_MIN;
int8_t x366 = -33;
int16_t x367 = INT16_MIN;
uint16_t x368 = 1U;
static int32_t t91 = -9232;
int32_t t92 = 917049;
static int16_t x374 = INT16_MIN;
static int64_t x380 = -59390LL;
uint8_t x387 = 1U;
static int32_t t96 = 223;
volatile uint32_t x399 = UINT32_MAX;
volatile int8_t x400 = -1;


void f0(void) {
	volatile uint8_t x1 = 44U;
	volatile int8_t x2 = INT8_MIN;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -7852;

	t0 = (((x1&x2)<=x3)&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 11972U;
	uint32_t x6 = UINT32_MAX;
	static uint16_t x7 = 30472U;
	volatile int32_t t1 = -49;

	t1 = (((x5&x6)<=x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 1U;
	int8_t x10 = -1;

	t2 = (((x9&x10)<=x11)&x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 218U;
	uint8_t x14 = 3U;
	int64_t x15 = 920534111747140LL;
	uint64_t x16 = 533519411199LLU;
	uint64_t t3 = 1093LLU;

	t3 = (((x13&x14)<=x15)&x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = -15;
	volatile uint16_t x19 = UINT16_MAX;
	volatile uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = -86559741;

	t4 = (((x17&x18)<=x19)&x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -38;
	int64_t x22 = INT64_MAX;
	volatile int8_t x23 = 25;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -53;

	t5 = (((x21&x22)<=x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -5;
	uint16_t x26 = 3986U;
	int32_t x27 = INT32_MAX;
	volatile uint32_t t6 = 21709U;

	t6 = (((x25&x26)<=x27)&x28);

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x31 = INT32_MIN;
	volatile int32_t t7 = 7124164;

	t7 = (((x29&x30)<=x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 0;
	int16_t x34 = -1;
	uint8_t x35 = 30U;
	uint16_t x36 = 2224U;
	volatile int32_t t8 = -16540;

	t8 = (((x33&x34)<=x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 109777U;
	int32_t x38 = -1;
	uint32_t x39 = 366U;
	int32_t x40 = -15090909;
	static volatile int32_t t9 = -63320;

	t9 = (((x37&x38)<=x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	uint8_t x43 = 44U;
	static int8_t x44 = INT8_MIN;
	int32_t t10 = -315;

	t10 = (((x41&x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 850523494U;
	uint64_t x46 = 26482637428395LLU;
	static volatile int32_t x47 = INT32_MAX;
	volatile int64_t x48 = INT64_MIN;
	int64_t t11 = -1490898LL;

	t11 = (((x45&x46)<=x47)&x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 12978047347597LLU;
	volatile int64_t x50 = INT64_MIN;
	static int8_t x51 = -1;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = -4435;

	t12 = (((x49&x50)<=x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	int64_t x54 = INT64_MIN;
	static volatile int32_t x56 = 1;
	static volatile int32_t t13 = -66080;

	t13 = (((x53&x54)<=x55)&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	volatile int8_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	static volatile uint8_t x60 = 3U;
	volatile int32_t t14 = -159940226;

	t14 = (((x57&x58)<=x59)&x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = INT64_MIN;
	volatile int32_t t15 = -5250;

	t15 = (((x61&x62)<=x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	int8_t x66 = -3;
	volatile uint16_t x67 = UINT16_MAX;
	int32_t x68 = 6317;
	volatile int32_t t16 = -368797;

	t16 = (((x65&x66)<=x67)&x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 466U;
	uint8_t x70 = UINT8_MAX;
	volatile int8_t x72 = 1;
	volatile int32_t t17 = -847;

	t17 = (((x69&x70)<=x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 259672;
	uint16_t x74 = 6107U;
	int64_t x75 = 15339LL;
	volatile int64_t x76 = 43395671LL;
	static int64_t t18 = 37LL;

	t18 = (((x73&x74)<=x75)&x76);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = INT64_MIN;
	static int64_t x79 = -84068054483260249LL;
	volatile int64_t x80 = -157222732613770LL;

	t19 = (((x77&x78)<=x79)&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 1576LLU;
	volatile uint16_t x83 = UINT16_MAX;
	volatile int16_t x84 = 14924;

	t20 = (((x81&x82)<=x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = INT64_MAX;
	volatile uint16_t x86 = UINT16_MAX;
	int32_t x88 = INT32_MIN;
	static volatile int32_t t21 = -1;

	t21 = (((x85&x86)<=x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t x90 = -161394;
	volatile uint8_t x91 = UINT8_MAX;
	static uint16_t x92 = 6922U;
	int32_t t22 = -309079;

	t22 = (((x89&x90)<=x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = -1;
	static uint16_t x94 = 13U;
	volatile int64_t x95 = INT64_MIN;
	int32_t x96 = INT32_MAX;
	volatile int32_t t23 = 5;

	t23 = (((x93&x94)<=x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	static uint64_t x98 = 129728417275572165LLU;
	uint8_t x99 = 13U;
	int8_t x100 = -1;
	volatile int32_t t24 = 10;

	t24 = (((x97&x98)<=x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MAX;
	volatile int8_t x104 = -1;
	volatile int32_t t25 = -1743;

	t25 = (((x101&x102)<=x103)&x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x107 = 982;
	int16_t x108 = -1;
	static volatile int32_t t26 = 1502;

	t26 = (((x105&x106)<=x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	int64_t x111 = INT64_MAX;
	volatile int8_t x112 = INT8_MIN;
	int32_t t27 = -127946;

	t27 = (((x109&x110)<=x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x114 = 32214U;
	uint32_t x116 = UINT32_MAX;
	uint32_t t28 = 34650116U;

	t28 = (((x113&x114)<=x115)&x116);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 113;
	int8_t x118 = -1;
	uint8_t x119 = 0U;
	uint8_t x120 = 114U;
	static volatile int32_t t29 = 2376;

	t29 = (((x117&x118)<=x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 35U;
	int64_t x123 = 3664704LL;
	int8_t x124 = INT8_MAX;
	volatile int32_t t30 = -144748;

	t30 = (((x121&x122)<=x123)&x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	volatile int64_t x128 = 8101094LL;

	t31 = (((x125&x126)<=x127)&x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	volatile uint64_t x130 = UINT64_MAX;
	volatile uint32_t x131 = 3091871U;
	int32_t x132 = -100527;

	t32 = (((x129&x130)<=x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x133 = 20633782911LLU;
	uint16_t x135 = 9U;
	int16_t x136 = INT16_MAX;
	int32_t t33 = 102280075;

	t33 = (((x133&x134)<=x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int32_t x138 = -1;
	int64_t x139 = -1LL;
	static int16_t x140 = INT16_MAX;

	t34 = (((x137&x138)<=x139)&x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 1;
	uint32_t x142 = UINT32_MAX;
	uint32_t x143 = 742U;
	int8_t x144 = INT8_MIN;
	static volatile int32_t t35 = 9336407;

	t35 = (((x141&x142)<=x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	volatile int8_t x146 = 1;
	int16_t x148 = -1;

	t36 = (((x145&x146)<=x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	uint32_t x150 = 431U;
	uint16_t x151 = 5476U;
	int8_t x152 = INT8_MAX;

	t37 = (((x149&x150)<=x151)&x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 1049;
	uint64_t x154 = UINT64_MAX;
	int8_t x155 = -1;
	volatile int32_t t38 = 31820459;

	t38 = (((x153&x154)<=x155)&x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 4U;
	static volatile uint64_t x158 = UINT64_MAX;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 717;

	t39 = (((x157&x158)<=x159)&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	static uint8_t x162 = 6U;
	uint8_t x163 = 7U;
	int64_t x164 = INT64_MIN;

	t40 = (((x161&x162)<=x163)&x164);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int8_t x166 = INT8_MIN;
	int16_t x167 = 117;
	volatile int8_t x168 = 40;
	static volatile int32_t t41 = -59993;

	t41 = (((x165&x166)<=x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 847729332U;
	uint16_t x170 = 2U;
	int16_t x171 = -1;
	int8_t x172 = -1;
	static volatile int32_t t42 = 18169879;

	t42 = (((x169&x170)<=x171)&x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int32_t x175 = -1;
	uint64_t x176 = 3LLU;
	uint64_t t43 = 1LLU;

	t43 = (((x173&x174)<=x175)&x176);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	volatile int16_t x179 = 0;
	volatile int32_t t44 = 44424708;

	t44 = (((x177&x178)<=x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 13U;
	uint16_t x183 = 6U;
	int8_t x184 = INT8_MIN;
	static int32_t t45 = -121796;

	t45 = (((x181&x182)<=x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MAX;
	int32_t x187 = -3431;

	t46 = (((x185&x186)<=x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = -1;
	int32_t x192 = INT32_MIN;

	t47 = (((x189&x190)<=x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x194 = 50363LLU;
	int8_t x195 = INT8_MIN;

	t48 = (((x193&x194)<=x195)&x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MAX;
	volatile int32_t x198 = INT32_MIN;
	static int32_t x199 = -1;
	uint32_t t49 = 4749136U;

	t49 = (((x197&x198)<=x199)&x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x202 = INT32_MAX;
	static uint16_t x204 = 454U;
	int32_t t50 = -1051765;

	t50 = (((x201&x202)<=x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = UINT8_MAX;
	static int16_t x206 = 16;

	t51 = (((x205&x206)<=x207)&x208);

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -2;
	int32_t x211 = INT32_MAX;
	int16_t x212 = INT16_MAX;
	int32_t t52 = -57036;

	t52 = (((x209&x210)<=x211)&x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x216 = 117686081;
	volatile int32_t t53 = -572984;

	t53 = (((x213&x214)<=x215)&x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 7215U;
	uint32_t x218 = 12U;
	static uint64_t x219 = 8858501245LLU;
	uint16_t x220 = UINT16_MAX;
	volatile int32_t t54 = 156976;

	t54 = (((x217&x218)<=x219)&x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = -5;
	int8_t x222 = -1;
	uint8_t x224 = 4U;
	volatile int32_t t55 = -250744;

	t55 = (((x221&x222)<=x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = 108;
	int16_t x226 = -3502;
	uint8_t x227 = UINT8_MAX;
	static uint8_t x228 = UINT8_MAX;

	t56 = (((x225&x226)<=x227)&x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = UINT32_MAX;
	uint64_t x231 = UINT64_MAX;
	static volatile int8_t x232 = -35;

	t57 = (((x229&x230)<=x231)&x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -1259;
	int16_t x234 = -1;
	uint8_t x236 = 3U;
	int32_t t58 = -10;

	t58 = (((x233&x234)<=x235)&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = 25;
	int64_t x238 = INT64_MIN;
	int8_t x239 = INT8_MIN;
	int64_t x240 = 7235947LL;
	volatile int64_t t59 = -4727704LL;

	t59 = (((x237&x238)<=x239)&x240);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MAX;
	static volatile int32_t t60 = 1;

	t60 = (((x241&x242)<=x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x245 = 5;
	int8_t x247 = INT8_MIN;
	uint32_t x248 = 11960132U;
	static volatile uint32_t t61 = 25292U;

	t61 = (((x245&x246)<=x247)&x248);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MIN;
	static volatile uint8_t x251 = UINT8_MAX;
	volatile int16_t x252 = -78;
	static int32_t t62 = 247214;

	t62 = (((x249&x250)<=x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static int16_t x254 = INT16_MAX;
	uint64_t x256 = 7505633991860LLU;
	uint64_t t63 = 13LLU;

	t63 = (((x253&x254)<=x255)&x256);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	uint16_t x259 = 76U;
	int32_t x260 = -62959525;
	volatile int32_t t64 = 207;

	t64 = (((x257&x258)<=x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int8_t x263 = -51;
	volatile uint16_t x264 = 1U;
	int32_t t65 = -1894;

	t65 = (((x261&x262)<=x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -192;
	static uint16_t x266 = 3163U;
	static volatile int64_t x267 = -2586509128LL;
	int8_t x268 = 1;

	t66 = (((x265&x266)<=x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 94U;
	volatile int32_t x270 = -1;
	int16_t x271 = INT16_MAX;
	uint16_t x272 = UINT16_MAX;
	int32_t t67 = -1934;

	t67 = (((x269&x270)<=x271)&x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	volatile uint8_t x274 = UINT8_MAX;
	volatile uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MIN;
	volatile int64_t t68 = -3381108468168LL;

	t68 = (((x273&x274)<=x275)&x276);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	int32_t x278 = -5768530;
	uint64_t x279 = 3761321LLU;
	uint8_t x280 = 1U;

	t69 = (((x277&x278)<=x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint32_t x281 = 273747506U;
	static uint32_t x282 = 48010U;
	uint32_t x284 = 31348U;
	static volatile uint32_t t70 = 3798431U;

	t70 = (((x281&x282)<=x283)&x284);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	volatile int64_t x286 = INT64_MAX;
	uint32_t x287 = UINT32_MAX;
	static volatile int64_t t71 = 15945871LL;

	t71 = (((x285&x286)<=x287)&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -38;
	int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MAX;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t72 = 16516594385515LLU;

	t72 = (((x289&x290)<=x291)&x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = UINT64_MAX;
	static int8_t x294 = INT8_MIN;
	static uint64_t x295 = UINT64_MAX;
	int32_t x296 = -1;
	volatile int32_t t73 = -11;

	t73 = (((x293&x294)<=x295)&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = 70U;
	int64_t x298 = 3955LL;
	int16_t x299 = INT16_MIN;
	uint16_t x300 = 135U;
	static volatile int32_t t74 = 410790989;

	t74 = (((x297&x298)<=x299)&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x304 = 128U;
	volatile uint32_t t75 = 9U;

	t75 = (((x301&x302)<=x303)&x304);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int32_t x306 = -3848000;
	volatile int16_t x307 = 806;
	uint64_t t76 = 4401658286023783LLU;

	t76 = (((x305&x306)<=x307)&x308);

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int64_t x310 = INT64_MIN;
	static int64_t x312 = -1LL;
	int64_t t77 = -1044010956387157LL;

	t77 = (((x309&x310)<=x311)&x312);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 17;
	int64_t x314 = -250511987595LL;
	int8_t x315 = -7;
	uint16_t x316 = UINT16_MAX;
	int32_t t78 = 41;

	t78 = (((x313&x314)<=x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -3;
	int16_t x319 = -1;
	int32_t t79 = 59034909;

	t79 = (((x317&x318)<=x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	static volatile int16_t x324 = -1;
	int32_t t80 = 722146;

	t80 = (((x321&x322)<=x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = 3026081LLU;
	int16_t x328 = -1;
	static volatile int32_t t81 = -46;

	t81 = (((x325&x326)<=x327)&x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int8_t x330 = -1;
	static int32_t x331 = INT32_MIN;
	int8_t x332 = INT8_MIN;
	int32_t t82 = -20262867;

	t82 = (((x329&x330)<=x331)&x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	uint32_t x334 = UINT32_MAX;
	uint8_t x335 = UINT8_MAX;
	uint64_t t83 = 259480LLU;

	t83 = (((x333&x334)<=x335)&x336);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	static int8_t x340 = INT8_MIN;
	int32_t t84 = -917;

	t84 = (((x337&x338)<=x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x341 = 12U;
	volatile int64_t x342 = 243722653LL;
	volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = -86933;

	t85 = (((x341&x342)<=x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = UINT64_MAX;
	int16_t x346 = 201;
	uint8_t x347 = 2U;
	int64_t t86 = -1713039LL;

	t86 = (((x345&x346)<=x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int64_t x350 = INT64_MIN;
	static int32_t x351 = 6362;
	volatile int32_t t87 = -46256402;

	t87 = (((x349&x350)<=x351)&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = 4U;
	static int64_t x355 = INT64_MAX;

	t88 = (((x353&x354)<=x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -4;
	volatile int32_t x358 = -90728188;
	static int8_t x359 = INT8_MAX;
	int64_t x360 = INT64_MIN;
	int64_t t89 = 223596026528LL;

	t89 = (((x357&x358)<=x359)&x360);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = -10;
	volatile int8_t x363 = INT8_MAX;
	int32_t x364 = -15829;
	static volatile int32_t t90 = 14551;

	t90 = (((x361&x362)<=x363)&x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 47LLU;

	t91 = (((x365&x366)<=x367)&x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int64_t x370 = -30LL;
	int64_t x371 = 2LL;
	static uint8_t x372 = UINT8_MAX;

	t92 = (((x369&x370)<=x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MAX;
	static int8_t x375 = INT8_MIN;
	volatile int8_t x376 = INT8_MAX;
	volatile int32_t t93 = 24;

	t93 = (((x373&x374)<=x375)&x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	int16_t x378 = -1;
	uint32_t x379 = UINT32_MAX;
	int64_t t94 = 1146993065LL;

	t94 = (((x377&x378)<=x379)&x380);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -13549113711594993LL;
	int64_t x384 = INT64_MIN;
	volatile int64_t t95 = -626760717552518233LL;

	t95 = (((x381&x382)<=x383)&x384);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x385 = 7;
	int8_t x386 = -34;
	int32_t x388 = INT32_MIN;

	t96 = (((x385&x386)<=x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	volatile uint8_t x391 = 34U;
	volatile int32_t x392 = 200;
	static volatile int32_t t97 = 74;

	t97 = (((x389&x390)<=x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int64_t x394 = INT64_MIN;
	int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t98 = 206447;

	t98 = (((x393&x394)<=x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -1;
	static volatile uint32_t x398 = 109987042U;
	volatile int32_t t99 = 4;

	t99 = (((x397&x398)<=x399)&x400);

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

