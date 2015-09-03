#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 246795761077307969LLU;
int32_t x8 = INT32_MIN;
int16_t x12 = INT16_MAX;
int32_t x14 = -13;
int16_t x17 = 0;
uint64_t x22 = UINT64_MAX;
volatile int16_t x30 = INT16_MIN;
int16_t x33 = INT16_MIN;
int64_t x34 = 1354448751LL;
static int16_t x46 = 124;
static int32_t x48 = INT32_MAX;
volatile int32_t t10 = -75093;
int32_t x51 = 86255036;
static int16_t x54 = INT16_MIN;
uint64_t x57 = 21369LLU;
int16_t x60 = INT16_MAX;
int32_t x61 = 29;
volatile int64_t x63 = -7599241757310LL;
uint32_t x68 = UINT32_MAX;
volatile int64_t x69 = 33493241LL;
uint32_t x79 = UINT32_MAX;
volatile uint64_t x80 = 508858LLU;
int32_t x86 = INT32_MAX;
int64_t x97 = 25716LL;
volatile int32_t x98 = -1;
int32_t t22 = -3219024;
int64_t x101 = -413550LL;
volatile uint8_t x102 = UINT8_MAX;
static int32_t x112 = -44;
uint16_t x113 = 26330U;
volatile uint16_t x114 = UINT16_MAX;
int32_t x115 = 45;
static uint64_t x118 = 23882LLU;
int8_t x121 = INT8_MIN;
int16_t x122 = INT16_MIN;
static int32_t x125 = INT32_MAX;
int16_t x133 = -1;
int64_t x152 = INT64_MIN;
static int32_t x166 = INT32_MIN;
uint32_t x168 = 122U;
volatile int8_t x171 = INT8_MIN;
static int32_t x177 = INT32_MIN;
uint8_t x179 = 7U;
int8_t x181 = INT8_MAX;
int8_t x184 = -1;
volatile int32_t t41 = -383792373;
int64_t x188 = -1974022256015LL;
int8_t x198 = INT8_MIN;
int32_t t44 = -17500136;
int16_t x211 = INT16_MIN;
static int32_t x212 = INT32_MIN;
uint32_t x216 = 914898201U;
int64_t x219 = INT64_MIN;
int32_t x228 = -1;
int8_t x231 = INT8_MIN;
static volatile int32_t t53 = -183900635;
static uint64_t x237 = 3352362308397599751LLU;
volatile int64_t x244 = INT64_MIN;
int64_t t55 = -1567LL;
static volatile int64_t x247 = INT64_MIN;
volatile int64_t x250 = 29730876LL;
static volatile int32_t t57 = -1006269;
uint32_t x255 = 0U;
int32_t t58 = 26036266;
int16_t x257 = INT16_MAX;
uint8_t x260 = 2U;
volatile int32_t t59 = 8810083;
volatile int32_t t60 = -726809147;
int32_t x266 = -8048;
static int16_t x267 = -1;
static uint8_t x270 = UINT8_MAX;
int32_t x272 = -1;
int32_t t62 = -725492788;
volatile int64_t t63 = -51313284759510LL;
static uint8_t x278 = 2U;
static int32_t x280 = 26;
static volatile int64_t x292 = INT64_MIN;
static int64_t x301 = INT64_MAX;
int8_t x304 = -1;
int32_t x311 = -754;
volatile int64_t x312 = INT64_MAX;
uint8_t x315 = 5U;
volatile int64_t x325 = 383LL;
uint32_t x329 = UINT32_MAX;
int8_t x331 = INT8_MIN;
int32_t x333 = INT32_MIN;
uint64_t x335 = UINT64_MAX;
static int32_t x336 = -1;
volatile int32_t t77 = 56008469;
volatile uint16_t x363 = UINT16_MAX;
int32_t x364 = INT32_MIN;
volatile int32_t t81 = 30;
uint32_t x368 = 31655U;
uint32_t x372 = 2662U;
volatile uint32_t t84 = 251U;
int8_t x379 = -1;
uint16_t x382 = UINT16_MAX;
int16_t x387 = INT16_MAX;
static int16_t x399 = INT16_MAX;
volatile uint64_t t90 = 11301LLU;
int64_t x401 = INT64_MIN;
static int32_t x402 = INT32_MIN;
int32_t x404 = -1;
static int64_t x415 = INT64_MAX;
uint32_t t94 = 487250U;
static uint16_t x420 = 1U;
static int8_t x425 = -1;
volatile uint16_t x428 = 51U;
int8_t x429 = INT8_MIN;
int8_t x437 = -1;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = 0;
	volatile int32_t x3 = 1797580;
	volatile uint64_t t0 = 46711454LLU;

	t0 = (((x1-x2)<=x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 1830721688013LLU;
	volatile int8_t x6 = INT8_MAX;
	uint8_t x7 = UINT8_MAX;
	int32_t t1 = 301;

	t1 = (((x5-x6)<=x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int8_t x10 = INT8_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t t2 = 1803345;

	t2 = (((x9-x10)<=x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -704950330021360LL;
	int8_t x15 = INT8_MIN;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 3U;

	t3 = (((x13-x14)<=x15)/x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = 4U;
	static volatile uint64_t x19 = 4LLU;
	uint32_t x20 = 24U;
	uint32_t t4 = 9263U;

	t4 = (((x17-x18)<=x19)/x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MAX;
	int64_t x23 = INT64_MIN;
	static int8_t x24 = 48;
	int32_t t5 = 9194092;

	t5 = (((x21-x22)<=x23)/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	uint64_t x26 = 9120260880LLU;
	static int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = 129728832;

	t6 = (((x25-x26)<=x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x29 = UINT16_MAX;
	int64_t x31 = 1LL;
	static int8_t x32 = INT8_MIN;
	static int32_t t7 = 0;

	t7 = (((x29-x30)<=x31)/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x35 = INT16_MAX;
	static int32_t x36 = -1;
	int32_t t8 = -11232;

	t8 = (((x33-x34)<=x35)/x36);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 36U;
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MAX;
	int32_t x40 = -2;
	int32_t t9 = -308097469;

	t9 = (((x37-x38)<=x39)/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = INT8_MAX;
	int8_t x47 = INT8_MIN;

	t10 = (((x45-x46)<=x47)/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	volatile int64_t x50 = INT64_MIN;
	uint64_t x52 = 12509209LLU;
	volatile uint64_t t11 = 684175200768336LLU;

	t11 = (((x49-x50)<=x51)/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x53 = 794LLU;
	volatile int64_t x55 = INT64_MIN;
	int32_t x56 = 1002143655;
	int32_t t12 = -106;

	t12 = (((x53-x54)<=x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	int32_t t13 = 1619;

	t13 = (((x57-x58)<=x59)/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = -1LL;
	static int32_t x64 = INT32_MIN;
	static volatile int32_t t14 = -1;

	t14 = (((x61-x62)<=x63)/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = 24U;
	static int16_t x66 = INT16_MAX;
	volatile uint8_t x67 = 3U;
	volatile uint32_t t15 = 3153U;

	t15 = (((x65-x66)<=x67)/x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x70 = -1;
	int8_t x71 = -1;
	int32_t x72 = -410;
	volatile int32_t t16 = -16;

	t16 = (((x69-x70)<=x71)/x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = 173182310LL;
	volatile int32_t x76 = INT32_MIN;
	int32_t t17 = 6;

	t17 = (((x73-x74)<=x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -57;
	int32_t x78 = -48;
	uint64_t t18 = 1402685659LLU;

	t18 = (((x77-x78)<=x79)/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 74233LLU;
	volatile int16_t x82 = -1;
	uint64_t x83 = 468800174990LLU;
	int8_t x84 = -31;
	int32_t t19 = 588;

	t19 = (((x81-x82)<=x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = 14879;
	int8_t x87 = INT8_MAX;
	uint8_t x88 = 4U;
	int32_t t20 = -1538;

	t20 = (((x85-x86)<=x87)/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MAX;
	int32_t x95 = INT32_MIN;
	static int32_t x96 = INT32_MIN;
	int32_t t21 = 83;

	t21 = (((x93-x94)<=x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x99 = UINT16_MAX;
	volatile int32_t x100 = -1;

	t22 = (((x97-x98)<=x99)/x100);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x103 = 763;
	int32_t x104 = INT32_MAX;
	volatile int32_t t23 = -2;

	t23 = (((x101-x102)<=x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = 6377;
	uint16_t x110 = UINT16_MAX;
	static volatile uint16_t x111 = 2U;
	int32_t t24 = 11348913;

	t24 = (((x109-x110)<=x111)/x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x116 = UINT32_MAX;
	uint32_t t25 = 4U;

	t25 = (((x113-x114)<=x115)/x116);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = INT64_MIN;
	int64_t x119 = 27635661LL;
	uint64_t x120 = 497110LLU;
	static volatile uint64_t t26 = 9479LLU;

	t26 = (((x117-x118)<=x119)/x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x123 = INT32_MIN;
	volatile int64_t x124 = INT64_MIN;
	int64_t t27 = 394315873892LL;

	t27 = (((x121-x122)<=x123)/x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x126 = 81;
	static volatile int16_t x127 = 1077;
	uint16_t x128 = 1288U;
	int32_t t28 = 1572727;

	t28 = (((x125-x126)<=x127)/x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MAX;
	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MIN;
	volatile int64_t t29 = 5502709993LL;

	t29 = (((x129-x130)<=x131)/x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x134 = -1;
	int32_t x135 = 884;
	int64_t x136 = INT64_MIN;
	volatile int64_t t30 = -849656734LL;

	t30 = (((x133-x134)<=x135)/x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = 941;
	uint16_t x138 = 1557U;
	volatile uint64_t x139 = 5675040LLU;
	volatile int64_t x140 = INT64_MIN;
	int64_t t31 = -6621LL;

	t31 = (((x137-x138)<=x139)/x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x141 = UINT32_MAX;
	int64_t x142 = -1LL;
	int64_t x143 = -4952LL;
	volatile int16_t x144 = 2583;
	int32_t t32 = -2120;

	t32 = (((x141-x142)<=x143)/x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -5LL;
	volatile int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t33 = 2;

	t33 = (((x145-x146)<=x147)/x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = 23;
	int64_t x151 = 81096365LL;
	int64_t t34 = 102LL;

	t34 = (((x149-x150)<=x151)/x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	uint32_t x154 = 362951184U;
	int8_t x155 = 0;
	volatile uint16_t x156 = UINT16_MAX;
	static volatile int32_t t35 = 252620;

	t35 = (((x153-x154)<=x155)/x156);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	int8_t x158 = INT8_MAX;
	int8_t x159 = INT8_MIN;
	static int8_t x160 = INT8_MIN;
	int32_t t36 = -11;

	t36 = (((x157-x158)<=x159)/x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = -1;
	int32_t x167 = INT32_MAX;
	uint32_t t37 = 6U;

	t37 = (((x165-x166)<=x167)/x168);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = 1206361688502371986LL;
	int32_t x170 = 1518;
	int8_t x172 = 9;
	int32_t t38 = 959;

	t38 = (((x169-x170)<=x171)/x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	int64_t x176 = -13337460216504059LL;
	int64_t t39 = -50728LL;

	t39 = (((x173-x174)<=x175)/x176);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x178 = 1972535683U;
	volatile int16_t x180 = INT16_MAX;
	volatile int32_t t40 = 0;

	t40 = (((x177-x178)<=x179)/x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x182 = UINT64_MAX;
	int64_t x183 = -1LL;

	t41 = (((x181-x182)<=x183)/x184);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x185 = 8;
	int32_t x186 = INT32_MAX;
	uint16_t x187 = 29047U;
	static volatile int64_t t42 = 72293232629022LL;

	t42 = (((x185-x186)<=x187)/x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 5U;
	int16_t x194 = 8983;
	volatile int8_t x195 = -1;
	int16_t x196 = -1;
	static volatile int32_t t43 = -1;

	t43 = (((x193-x194)<=x195)/x196);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x197 = 548U;
	static int64_t x199 = INT64_MIN;
	int8_t x200 = 1;

	t44 = (((x197-x198)<=x199)/x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x201 = INT16_MIN;
	uint8_t x202 = 5U;
	int8_t x203 = -1;
	int16_t x204 = INT16_MIN;
	volatile int32_t t45 = -1;

	t45 = (((x201-x202)<=x203)/x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x205 = INT8_MIN;
	uint16_t x206 = 1U;
	int64_t x207 = 1LL;
	int32_t x208 = -3;
	volatile int32_t t46 = 14;

	t46 = (((x205-x206)<=x207)/x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x209 = -16239218;
	int32_t x210 = 1;
	volatile int32_t t47 = 24;

	t47 = (((x209-x210)<=x211)/x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = UINT32_MAX;
	uint8_t x214 = 3U;
	int8_t x215 = -1;
	uint32_t t48 = 44439933U;

	t48 = (((x213-x214)<=x215)/x216);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = -94;
	volatile int64_t x218 = 236964238557331LL;
	volatile int32_t x220 = 6059;
	int32_t t49 = 13369384;

	t49 = (((x217-x218)<=x219)/x220);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = 25284546;
	uint32_t x222 = 602027905U;
	uint64_t x223 = UINT64_MAX;
	volatile uint16_t x224 = UINT16_MAX;
	volatile int32_t t50 = -54;

	t50 = (((x221-x222)<=x223)/x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x225 = 0U;
	volatile int16_t x226 = 4;
	volatile int32_t x227 = INT32_MIN;
	int32_t t51 = 1;

	t51 = (((x225-x226)<=x227)/x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x229 = -35;
	int16_t x230 = INT16_MIN;
	static int16_t x232 = 240;
	volatile int32_t t52 = 1;

	t52 = (((x229-x230)<=x231)/x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x233 = INT8_MAX;
	volatile int16_t x234 = -5;
	volatile int8_t x235 = -3;
	int32_t x236 = -253538;

	t53 = (((x233-x234)<=x235)/x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	static int8_t x240 = INT8_MIN;
	int32_t t54 = -1454;

	t54 = (((x237-x238)<=x239)/x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MIN;
	static int64_t x242 = 206LL;
	volatile int8_t x243 = -1;

	t55 = (((x241-x242)<=x243)/x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	volatile uint8_t x248 = 2U;
	volatile int32_t t56 = -21269;

	t56 = (((x245-x246)<=x247)/x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x249 = 2LLU;
	static int64_t x251 = 101658234009LL;
	int16_t x252 = INT16_MIN;

	t57 = (((x249-x250)<=x251)/x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = -1LL;
	static volatile uint8_t x254 = UINT8_MAX;
	int16_t x256 = INT16_MAX;

	t58 = (((x253-x254)<=x255)/x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x258 = 7442873196886842LL;
	uint8_t x259 = 45U;

	t59 = (((x257-x258)<=x259)/x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x261 = UINT32_MAX;
	volatile int8_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	int16_t x264 = 3306;

	t60 = (((x261-x262)<=x263)/x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = 22033U;
	uint16_t x268 = 16U;
	int32_t t61 = -94853141;

	t61 = (((x265-x266)<=x267)/x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = -1249;
	int16_t x271 = -1405;

	t62 = (((x269-x270)<=x271)/x272);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x273 = INT32_MIN;
	volatile uint32_t x274 = 4598U;
	uint16_t x275 = 0U;
	int64_t x276 = 8462980LL;

	t63 = (((x273-x274)<=x275)/x276);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x277 = UINT64_MAX;
	static uint8_t x279 = UINT8_MAX;
	int32_t t64 = -216774883;

	t64 = (((x277-x278)<=x279)/x280);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = UINT16_MAX;
	int16_t x282 = -224;
	int16_t x283 = -1;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t65 = 507647;

	t65 = (((x281-x282)<=x283)/x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x289 = UINT16_MAX;
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MIN;
	int64_t t66 = 0LL;

	t66 = (((x289-x290)<=x291)/x292);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = INT32_MIN;
	uint32_t x298 = 375111333U;
	static uint8_t x299 = UINT8_MAX;
	uint16_t x300 = 4U;
	int32_t t67 = -51735;

	t67 = (((x297-x298)<=x299)/x300);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x302 = 162459479;
	uint32_t x303 = 824254205U;
	int32_t t68 = 601;

	t68 = (((x301-x302)<=x303)/x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 715524LLU;
	volatile int32_t x308 = 1212;
	volatile int32_t t69 = 2;

	t69 = (((x305-x306)<=x307)/x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x309 = UINT16_MAX;
	int8_t x310 = -1;
	volatile int64_t t70 = 80LL;

	t70 = (((x309-x310)<=x311)/x312);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = UINT16_MAX;
	static int8_t x314 = INT8_MIN;
	int32_t x316 = 362;
	int32_t t71 = 478486979;

	t71 = (((x313-x314)<=x315)/x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x317 = 903284LL;
	static volatile int32_t x318 = INT32_MIN;
	uint64_t x319 = 514436LLU;
	int8_t x320 = INT8_MAX;
	volatile int32_t t72 = -9246517;

	t72 = (((x317-x318)<=x319)/x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MIN;
	volatile int32_t x323 = INT32_MAX;
	int8_t x324 = -13;
	volatile int32_t t73 = -98;

	t73 = (((x321-x322)<=x323)/x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x326 = INT32_MIN;
	int8_t x327 = 2;
	int16_t x328 = INT16_MIN;
	static volatile int32_t t74 = -188788850;

	t74 = (((x325-x326)<=x327)/x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x330 = INT8_MIN;
	int64_t x332 = INT64_MAX;
	static volatile int64_t t75 = -2162807123423613275LL;

	t75 = (((x329-x330)<=x331)/x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x334 = INT16_MIN;
	static int32_t t76 = -675827;

	t76 = (((x333-x334)<=x335)/x336);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	uint16_t x343 = 1U;
	int16_t x344 = INT16_MIN;

	t77 = (((x341-x342)<=x343)/x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x349 = -1;
	int16_t x350 = INT16_MIN;
	volatile int32_t x351 = INT32_MIN;
	static uint32_t x352 = UINT32_MAX;
	uint32_t t78 = 1019U;

	t78 = (((x349-x350)<=x351)/x352);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x353 = 3998LLU;
	int32_t x354 = -76;
	uint64_t x355 = UINT64_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t79 = 598044753419758956LL;

	t79 = (((x353-x354)<=x355)/x356);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x357 = UINT64_MAX;
	int32_t x358 = INT32_MIN;
	static int8_t x359 = 2;
	uint64_t x360 = 13075LLU;
	volatile uint64_t t80 = 60550739LLU;

	t80 = (((x357-x358)<=x359)/x360);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = -58;
	uint64_t x362 = 16498595602498180LLU;

	t81 = (((x361-x362)<=x363)/x364);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x365 = -1;
	int16_t x366 = -1;
	int64_t x367 = 6LL;
	uint32_t t82 = 4797U;

	t82 = (((x365-x366)<=x367)/x368);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x369 = 317922LL;
	volatile int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MIN;
	uint32_t t83 = 2076475U;

	t83 = (((x369-x370)<=x371)/x372);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x373 = INT8_MIN;
	uint32_t x374 = 379036U;
	static int32_t x375 = -1;
	uint32_t x376 = 2080262U;

	t84 = (((x373-x374)<=x375)/x376);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x377 = 43842047LLU;
	uint64_t x378 = 18LLU;
	uint16_t x380 = 30308U;
	volatile int32_t t85 = -1;

	t85 = (((x377-x378)<=x379)/x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x381 = UINT32_MAX;
	volatile int16_t x383 = -1440;
	int32_t x384 = -6356784;
	volatile int32_t t86 = -5086452;

	t86 = (((x381-x382)<=x383)/x384);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = 34358043;
	int16_t x386 = INT16_MIN;
	int16_t x388 = 644;
	int32_t t87 = -65;

	t87 = (((x385-x386)<=x387)/x388);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x389 = -1;
	int32_t x390 = INT32_MAX;
	int16_t x391 = INT16_MIN;
	int8_t x392 = INT8_MIN;
	int32_t t88 = 426404;

	t88 = (((x389-x390)<=x391)/x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x393 = 55U;
	static int64_t x394 = INT64_MAX;
	uint64_t x395 = 1716516966155622471LLU;
	static int32_t x396 = -1657885;
	static int32_t t89 = -15800;

	t89 = (((x393-x394)<=x395)/x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MAX;
	volatile uint64_t x398 = UINT64_MAX;
	static uint64_t x400 = 73LLU;

	t90 = (((x397-x398)<=x399)/x400);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x403 = UINT16_MAX;
	volatile int32_t t91 = -4660323;

	t91 = (((x401-x402)<=x403)/x404);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x405 = 3283;
	int64_t x406 = 2830990244093LL;
	int64_t x407 = INT64_MAX;
	volatile int8_t x408 = INT8_MIN;
	static int32_t t92 = -1512;

	t92 = (((x405-x406)<=x407)/x408);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x409 = -1;
	int8_t x410 = -1;
	uint32_t x411 = 1275824730U;
	int64_t x412 = -1LL;
	int64_t t93 = 270226154LL;

	t93 = (((x409-x410)<=x411)/x412);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x413 = 338948457045LLU;
	static int32_t x414 = -1;
	uint32_t x416 = 1U;

	t94 = (((x413-x414)<=x415)/x416);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x417 = INT64_MAX;
	uint32_t x418 = 393213U;
	static volatile uint64_t x419 = UINT64_MAX;
	int32_t t95 = -123;

	t95 = (((x417-x418)<=x419)/x420);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x421 = -1LL;
	uint8_t x422 = 36U;
	int16_t x423 = INT16_MIN;
	volatile uint32_t x424 = 5570U;
	uint32_t t96 = 6382999U;

	t96 = (((x421-x422)<=x423)/x424);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x426 = 15U;
	int64_t x427 = -1LL;
	int32_t t97 = 51;

	t97 = (((x425-x426)<=x427)/x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x430 = INT16_MIN;
	uint64_t x431 = UINT64_MAX;
	int32_t x432 = INT32_MIN;
	int32_t t98 = 27786287;

	t98 = (((x429-x430)<=x431)/x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x438 = -1;
	static uint8_t x439 = 10U;
	int32_t x440 = -1;
	int32_t t99 = 26;

	t99 = (((x437-x438)<=x439)/x440);

	if (t99 != -1) { NG(); } else { ; }
	
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

