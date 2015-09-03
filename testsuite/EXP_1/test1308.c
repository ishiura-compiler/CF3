#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = INT8_MIN;
int8_t x5 = INT8_MIN;
int16_t x7 = INT16_MAX;
uint64_t x14 = 240343LLU;
uint32_t x16 = UINT32_MAX;
uint64_t x18 = UINT64_MAX;
int16_t x20 = -1;
uint16_t x21 = UINT16_MAX;
int16_t x22 = -1;
static int32_t t5 = -4082;
static int32_t x27 = -874264851;
int64_t x30 = INT64_MIN;
int32_t t8 = -5094962;
uint16_t x39 = 55U;
int32_t t10 = -186;
volatile int32_t x46 = -15983583;
int32_t x49 = -3;
int64_t x52 = -1LL;
static uint8_t x60 = 126U;
int32_t x62 = INT32_MAX;
static int8_t x63 = INT8_MAX;
int64_t x76 = -17LL;
static int32_t t18 = 30346033;
volatile int8_t x79 = 3;
static int16_t x88 = -1;
uint8_t x92 = 1U;
int32_t x93 = INT32_MIN;
int16_t x100 = INT16_MIN;
int64_t x103 = INT64_MIN;
volatile uint64_t x106 = 253071LLU;
int32_t t26 = -19;
int8_t x109 = 3;
uint32_t x113 = 138U;
int64_t x133 = -45218916LL;
volatile uint32_t x141 = UINT32_MAX;
int32_t t35 = 14;
volatile int32_t x145 = INT32_MAX;
static int16_t x146 = -1;
uint16_t x147 = UINT16_MAX;
uint16_t x150 = 0U;
static int8_t x152 = -1;
static int32_t x160 = 218182;
volatile int32_t t39 = 3879880;
uint64_t x163 = 7LLU;
static int8_t x166 = -51;
int64_t x176 = INT64_MIN;
static uint8_t x178 = 0U;
int64_t x195 = INT64_MIN;
int32_t x198 = -85473;
volatile uint16_t x210 = UINT16_MAX;
int8_t x215 = INT8_MAX;
int8_t x218 = INT8_MIN;
int32_t x220 = INT32_MIN;
int8_t x233 = INT8_MAX;
uint32_t x234 = 813U;
uint16_t x235 = 593U;
int32_t t58 = 1601;
static volatile int32_t t60 = 178;
static int32_t x251 = 796;
static uint8_t x252 = UINT8_MAX;
volatile int16_t x253 = INT16_MIN;
int16_t x255 = INT16_MIN;
int8_t x257 = INT8_MIN;
int64_t x259 = -233255982787219LL;
volatile int32_t t64 = 1;
int8_t x266 = -1;
uint64_t x267 = UINT64_MAX;
int8_t x284 = INT8_MIN;
volatile int8_t x294 = -3;
uint8_t x302 = UINT8_MAX;
volatile int16_t x304 = 76;
int8_t x309 = 0;
static int32_t x311 = INT32_MIN;
int64_t x323 = -5542LL;
uint32_t x329 = 0U;
int64_t x336 = -12566107755814028LL;
int64_t x337 = INT64_MAX;
static int64_t x338 = INT64_MIN;
uint64_t x343 = 4451262794975289220LLU;
int8_t x347 = INT8_MIN;
int8_t x348 = INT8_MAX;
int32_t t86 = 1830595;
static int16_t x352 = 1638;
static int32_t t87 = 7123758;
static uint64_t x354 = UINT64_MAX;
int64_t x364 = INT64_MIN;
int32_t t90 = -24541742;
uint8_t x385 = UINT8_MAX;
volatile int16_t x389 = INT16_MAX;
static int64_t x397 = INT64_MAX;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	int32_t x2 = -1;
	int16_t x3 = -18;
	volatile int32_t t0 = 19128;

	t0 = (((x1==x2)<=x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MIN;
	int8_t x8 = -1;
	int32_t t1 = -27;

	t1 = (((x5==x6)<=x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int32_t x10 = 11;
	uint32_t x11 = UINT32_MAX;
	uint8_t x12 = 18U;
	int32_t t2 = 771;

	t2 = (((x9==x10)<=x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t t3 = 6632;

	t3 = (((x13==x14)<=x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 7424858LLU;
	int8_t x19 = 0;
	int32_t t4 = 1;

	t4 = (((x17==x18)<=x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x23 = 1U;
	static int32_t x24 = -107342975;

	t5 = (((x21==x22)<=x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int32_t x26 = INT32_MIN;
	uint8_t x28 = UINT8_MAX;
	static volatile int32_t t6 = 58;

	t6 = (((x25==x26)<=x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 5;
	static int8_t x31 = 42;
	uint64_t x32 = 954420LLU;
	volatile int32_t t7 = -9789690;

	t7 = (((x29==x30)<=x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 1;
	volatile int32_t x34 = INT32_MIN;
	int8_t x35 = 15;
	int16_t x36 = INT16_MIN;

	t8 = (((x33==x34)<=x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	volatile int64_t x38 = -1LL;
	static int32_t x40 = INT32_MIN;
	int32_t t9 = -252416474;

	t9 = (((x37==x38)<=x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	static int32_t x42 = -1;
	int16_t x43 = 1;
	static int16_t x44 = 22;

	t10 = (((x41==x42)<=x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 304LLU;
	int8_t x47 = 57;
	uint8_t x48 = 4U;
	static int32_t t11 = 4528;

	t11 = (((x45==x46)<=x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 17212LLU;
	int64_t x51 = -1LL;
	static int32_t t12 = 5;

	t12 = (((x49==x50)<=x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	volatile int32_t x54 = -1;
	static int16_t x55 = INT16_MAX;
	int64_t x56 = -3LL;
	volatile int32_t t13 = 236;

	t13 = (((x53==x54)<=x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	volatile uint64_t x59 = 933408787159566LLU;
	volatile int32_t t14 = -3;

	t14 = (((x57==x58)<=x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = 416LL;
	static uint8_t x64 = UINT8_MAX;
	int32_t t15 = 54;

	t15 = (((x61==x62)<=x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -5;
	volatile uint32_t x66 = 3U;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MAX;
	int32_t t16 = 4011139;

	t16 = (((x65==x66)<=x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 138U;
	int8_t x71 = -12;
	volatile int64_t x72 = 26894831909277172LL;
	int32_t t17 = -4140;

	t17 = (((x69==x70)<=x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 846649;
	uint64_t x74 = UINT64_MAX;
	uint64_t x75 = UINT64_MAX;

	t18 = (((x73==x74)<=x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 671;
	int32_t x78 = 7;
	int8_t x80 = -1;
	static int32_t t19 = -3081546;

	t19 = (((x77==x78)<=x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -15;
	uint64_t x82 = 548374069112LLU;
	int32_t x83 = -8260551;
	volatile uint32_t x84 = 1090023U;
	volatile int32_t t20 = -731;

	t20 = (((x81==x82)<=x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 447729;
	uint64_t x86 = UINT64_MAX;
	int16_t x87 = 8066;
	volatile int32_t t21 = 51145093;

	t21 = (((x85==x86)<=x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = -5LL;
	uint16_t x90 = UINT16_MAX;
	uint64_t x91 = UINT64_MAX;
	int32_t t22 = -7437;

	t22 = (((x89==x90)<=x91)==x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = -1;
	int64_t x95 = 35293572699LL;
	volatile int16_t x96 = INT16_MIN;
	int32_t t23 = -57458;

	t23 = (((x93==x94)<=x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -3433934LL;
	uint64_t x98 = 38224656222LLU;
	int16_t x99 = -1;
	int32_t t24 = -59550;

	t24 = (((x97==x98)<=x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	volatile uint8_t x102 = 1U;
	int16_t x104 = 8;
	int32_t t25 = 229;

	t25 = (((x101==x102)<=x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = UINT8_MAX;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = UINT64_MAX;

	t26 = (((x105==x106)<=x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x110 = INT16_MIN;
	volatile int32_t x111 = -563674;
	volatile int32_t x112 = INT32_MAX;
	volatile int32_t t27 = -358637;

	t27 = (((x109==x110)<=x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x114 = 11230637586578LLU;
	int64_t x115 = -1LL;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = -135849008;

	t28 = (((x113==x114)<=x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = -4390401;
	volatile int64_t x118 = INT64_MIN;
	int64_t x119 = -1LL;
	int16_t x120 = -1;
	int32_t t29 = 63636;

	t29 = (((x117==x118)<=x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	static int8_t x122 = 20;
	int64_t x123 = INT64_MIN;
	uint64_t x124 = UINT64_MAX;
	static int32_t t30 = -13675;

	t30 = (((x121==x122)<=x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 8676203U;
	volatile uint8_t x126 = UINT8_MAX;
	int32_t x127 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 682050;

	t31 = (((x125==x126)<=x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 22U;
	uint32_t x130 = 15704883U;
	int32_t x131 = INT32_MAX;
	volatile int64_t x132 = INT64_MAX;
	int32_t t32 = -21;

	t32 = (((x129==x130)<=x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x134 = 707255;
	int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MAX;
	volatile int32_t t33 = 141;

	t33 = (((x133==x134)<=x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile uint8_t x138 = 4U;
	int32_t x139 = INT32_MAX;
	int64_t x140 = -1LL;
	volatile int32_t t34 = 5;

	t34 = (((x137==x138)<=x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 12773U;
	static volatile int32_t x143 = INT32_MIN;
	int8_t x144 = 0;

	t35 = (((x141==x142)<=x143)==x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x148 = -2;
	static int32_t t36 = 7542669;

	t36 = (((x145==x146)<=x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 167477U;
	int16_t x151 = INT16_MIN;
	volatile int32_t t37 = 1;

	t37 = (((x149==x150)<=x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -29;
	uint16_t x154 = UINT16_MAX;
	volatile int16_t x155 = -1;
	static uint8_t x156 = UINT8_MAX;
	int32_t t38 = -67523364;

	t38 = (((x153==x154)<=x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int16_t x159 = INT16_MIN;

	t39 = (((x157==x158)<=x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int8_t x162 = INT8_MIN;
	uint8_t x164 = UINT8_MAX;
	volatile int32_t t40 = 240;

	t40 = (((x161==x162)<=x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	int32_t x167 = INT32_MIN;
	int64_t x168 = -1LL;
	volatile int32_t t41 = 318;

	t41 = (((x165==x166)<=x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -6;
	int16_t x170 = 2617;
	int32_t x171 = 102361022;
	int32_t x172 = INT32_MIN;
	int32_t t42 = -51;

	t42 = (((x169==x170)<=x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -8301;
	int8_t x174 = 0;
	int16_t x175 = INT16_MIN;
	static int32_t t43 = -2075737;

	t43 = (((x173==x174)<=x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 38U;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -1;
	static volatile int32_t t44 = 917168;

	t44 = (((x177==x178)<=x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MIN;
	uint32_t x183 = UINT32_MAX;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -33730;

	t45 = (((x181==x182)<=x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint16_t x186 = UINT16_MAX;
	volatile int8_t x187 = -1;
	uint64_t x188 = UINT64_MAX;
	int32_t t46 = 63688351;

	t46 = (((x185==x186)<=x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 4665770513699444LLU;
	static int32_t x190 = INT32_MAX;
	static volatile int64_t x191 = INT64_MIN;
	static uint16_t x192 = 0U;
	int32_t t47 = 10434117;

	t47 = (((x189==x190)<=x191)==x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = INT64_MIN;
	int16_t x196 = INT16_MAX;
	int32_t t48 = 1;

	t48 = (((x193==x194)<=x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -3064;
	int32_t x199 = INT32_MAX;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 76;

	t49 = (((x197==x198)<=x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static int32_t x202 = INT32_MIN;
	static volatile int64_t x203 = INT64_MIN;
	uint16_t x204 = 438U;
	static volatile int32_t t50 = 127131700;

	t50 = (((x201==x202)<=x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = 10;
	int8_t x206 = INT8_MIN;
	static volatile int32_t x207 = -472269325;
	volatile uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = -7368022;

	t51 = (((x205==x206)<=x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 28541443986669978LL;
	static volatile int32_t x211 = INT32_MAX;
	volatile int16_t x212 = INT16_MIN;
	int32_t t52 = -18;

	t52 = (((x209==x210)<=x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	static uint64_t x214 = 6LLU;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = 533745962;

	t53 = (((x213==x214)<=x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	uint16_t x219 = 23390U;
	int32_t t54 = 220;

	t54 = (((x217==x218)<=x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 13820U;
	static uint16_t x222 = 17U;
	int64_t x223 = -1LL;
	volatile uint8_t x224 = 7U;
	static int32_t t55 = -78;

	t55 = (((x221==x222)<=x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint8_t x226 = UINT8_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	volatile uint16_t x228 = 7U;
	static int32_t t56 = -33;

	t56 = (((x225==x226)<=x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = -1;
	static int64_t x231 = 16534019305817903LL;
	volatile int8_t x232 = 25;
	static int32_t t57 = 92747;

	t57 = (((x229==x230)<=x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x236 = 28304080LLU;

	t58 = (((x233==x234)<=x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 9665;
	static int32_t x238 = -1;
	int8_t x239 = -1;
	int32_t x240 = INT32_MIN;
	int32_t t59 = 6;

	t59 = (((x237==x238)<=x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 283LLU;
	uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 643LLU;
	int64_t x244 = -38LL;

	t60 = (((x241==x242)<=x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MAX;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 9LLU;
	volatile int32_t t61 = -23;

	t61 = (((x245==x246)<=x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MAX;
	static volatile int32_t x250 = INT32_MIN;
	int32_t t62 = -3275954;

	t62 = (((x249==x250)<=x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x254 = 203625154119305LLU;
	static uint32_t x256 = UINT32_MAX;
	static volatile int32_t t63 = 6;

	t63 = (((x253==x254)<=x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x258 = UINT32_MAX;
	int8_t x260 = INT8_MIN;

	t64 = (((x257==x258)<=x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x261 = -1;
	int32_t x262 = -225325;
	static uint32_t x263 = 43196U;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t65 = -1;

	t65 = (((x261==x262)<=x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 6883510583LLU;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 15618281;

	t66 = (((x265==x266)<=x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 5U;
	static uint32_t x270 = 117950U;
	uint8_t x271 = UINT8_MAX;
	volatile int32_t x272 = 2;
	volatile int32_t t67 = -170975;

	t67 = (((x269==x270)<=x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 3;
	static int64_t x274 = INT64_MAX;
	int64_t x275 = INT64_MIN;
	int32_t x276 = 111273;
	int32_t t68 = -10;

	t68 = (((x273==x274)<=x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MAX;
	int16_t x278 = 7;
	int64_t x279 = INT64_MAX;
	int64_t x280 = INT64_MIN;
	volatile int32_t t69 = -2;

	t69 = (((x277==x278)<=x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 49156301820632311LLU;
	int64_t x282 = INT64_MAX;
	uint64_t x283 = 345183LLU;
	int32_t t70 = -7;

	t70 = (((x281==x282)<=x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = UINT8_MAX;
	int8_t x286 = INT8_MIN;
	uint64_t x287 = 611586103223653329LLU;
	uint16_t x288 = UINT16_MAX;
	int32_t t71 = 63792;

	t71 = (((x285==x286)<=x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 1U;
	int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	uint16_t x292 = 41U;
	int32_t t72 = 14;

	t72 = (((x289==x290)<=x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x293 = INT32_MIN;
	volatile int16_t x295 = -486;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -1401;

	t73 = (((x293==x294)<=x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 39U;
	static uint16_t x298 = 10U;
	static volatile int8_t x299 = -1;
	static int32_t x300 = -13659834;
	volatile int32_t t74 = -57939961;

	t74 = (((x297==x298)<=x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 15U;
	int8_t x303 = 5;
	int32_t t75 = 48842289;

	t75 = (((x301==x302)<=x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int32_t x306 = 1;
	int16_t x307 = 145;
	int8_t x308 = 12;
	int32_t t76 = -1444;

	t76 = (((x305==x306)<=x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = 5U;
	uint64_t x312 = UINT64_MAX;
	static volatile int32_t t77 = 49527860;

	t77 = (((x309==x310)<=x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 935U;
	uint32_t x314 = 1575775670U;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -67413291;

	t78 = (((x313==x314)<=x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x317 = 33U;
	uint32_t x318 = UINT32_MAX;
	volatile uint16_t x319 = 11183U;
	static uint16_t x320 = 9923U;
	int32_t t79 = 1324;

	t79 = (((x317==x318)<=x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	uint16_t x322 = 1U;
	uint16_t x324 = 3U;
	volatile int32_t t80 = 2624;

	t80 = (((x321==x322)<=x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = -21;
	uint16_t x328 = 226U;
	int32_t t81 = 3120371;

	t81 = (((x325==x326)<=x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = -829118209;
	int16_t x331 = 60;
	volatile int64_t x332 = INT64_MIN;
	int32_t t82 = 5266;

	t82 = (((x329==x330)<=x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -1;
	int16_t x334 = -3092;
	volatile int64_t x335 = INT64_MIN;
	static int32_t t83 = 12262599;

	t83 = (((x333==x334)<=x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x339 = INT16_MAX;
	volatile int64_t x340 = -1LL;
	static int32_t t84 = -7;

	t84 = (((x337==x338)<=x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	int8_t x342 = -1;
	volatile int16_t x344 = 1051;
	int32_t t85 = -3718940;

	t85 = (((x341==x342)<=x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	int8_t x346 = INT8_MAX;

	t86 = (((x345==x346)<=x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MIN;

	t87 = (((x349==x350)<=x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int64_t x355 = INT64_MAX;
	uint32_t x356 = 863891U;
	volatile int32_t t88 = 14175;

	t88 = (((x353==x354)<=x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 23U;
	volatile int8_t x358 = -1;
	volatile int16_t x359 = INT16_MAX;
	int64_t x360 = 1LL;
	volatile int32_t t89 = -126006359;

	t89 = (((x357==x358)<=x359)==x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 1;
	int16_t x362 = 6;
	static int16_t x363 = -2696;

	t90 = (((x361==x362)<=x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	uint8_t x366 = 1U;
	static int64_t x367 = INT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile int32_t t91 = -1756822;

	t91 = (((x365==x366)<=x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = 2U;
	uint64_t x370 = 1224300103592LLU;
	static int8_t x371 = INT8_MAX;
	uint8_t x372 = 32U;
	int32_t t92 = -3630679;

	t92 = (((x369==x370)<=x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 2012U;
	volatile int64_t x374 = INT64_MIN;
	uint16_t x375 = 4U;
	int32_t x376 = -395;
	int32_t t93 = -373001887;

	t93 = (((x373==x374)<=x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -1;
	static int8_t x378 = INT8_MAX;
	int8_t x379 = INT8_MAX;
	static volatile int16_t x380 = 28;
	volatile int32_t t94 = 84352597;

	t94 = (((x377==x378)<=x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	uint8_t x382 = 22U;
	int16_t x383 = 0;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 601;

	t95 = (((x381==x382)<=x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x386 = 3971522U;
	int8_t x387 = INT8_MIN;
	volatile int32_t x388 = 243044302;
	static volatile int32_t t96 = -4328476;

	t96 = (((x385==x386)<=x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 0U;
	int16_t x391 = 74;
	static int32_t x392 = INT32_MIN;
	static int32_t t97 = -57;

	t97 = (((x389==x390)<=x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	int16_t x396 = -2;
	volatile int32_t t98 = 126;

	t98 = (((x393==x394)<=x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x398 = 67616;
	int16_t x399 = INT16_MIN;
	int32_t x400 = -188;
	volatile int32_t t99 = 768254949;

	t99 = (((x397==x398)<=x399)==x400);

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

