#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -187;
static int16_t x6 = 973;
int32_t x7 = INT32_MIN;
int64_t x11 = 393941932793969382LL;
int32_t x13 = INT32_MIN;
int32_t t3 = -1267;
static int32_t x23 = INT32_MIN;
uint16_t x29 = 2388U;
int32_t x32 = -1;
int32_t t7 = 2058532;
volatile int16_t x35 = INT16_MIN;
int8_t x45 = INT8_MAX;
int8_t x46 = INT8_MAX;
int16_t x49 = INT16_MIN;
volatile int8_t x51 = -1;
int8_t x54 = -3;
static volatile int64_t t14 = INT64_MIN;
static int16_t x68 = INT16_MIN;
volatile uint64_t x75 = UINT64_MAX;
int64_t x77 = INT64_MAX;
uint64_t x79 = UINT64_MAX;
static volatile int32_t t19 = 1;
int32_t x86 = INT32_MIN;
volatile int32_t t21 = -1;
int64_t x94 = -1LL;
static volatile uint16_t x96 = UINT16_MAX;
volatile int32_t t23 = 746;
uint32_t t26 = 1574598292U;
uint8_t x112 = 8U;
static volatile int16_t x116 = -1;
uint32_t x119 = 4184U;
int8_t x120 = -5;
int16_t x131 = 205;
int32_t t32 = -931251;
int8_t x133 = INT8_MAX;
int32_t t35 = -1173;
uint64_t x148 = 61365280LLU;
int8_t x151 = INT8_MIN;
volatile uint32_t x156 = 88U;
uint64_t x159 = UINT64_MAX;
int32_t x161 = INT32_MAX;
volatile int16_t x169 = 584;
uint8_t x171 = UINT8_MAX;
int16_t x184 = -1;
int16_t x190 = INT16_MIN;
volatile int8_t x203 = -4;
uint64_t x204 = 207334LLU;
int8_t x205 = -13;
volatile int64_t x206 = 944625921196984LL;
int64_t x207 = INT64_MAX;
volatile int32_t t52 = -9;
int64_t x213 = INT64_MIN;
int64_t x215 = -43193745LL;
int32_t x220 = INT32_MIN;
int32_t t54 = 1568262;
uint64_t x221 = 933336LLU;
static volatile int8_t x223 = -1;
uint32_t x227 = 1930996424U;
uint8_t x228 = 3U;
static volatile int8_t x237 = -38;
static volatile int64_t t59 = -10597463916LL;
static volatile uint64_t x243 = 5060179LLU;
static int64_t x245 = -1LL;
volatile int32_t t61 = 51;
volatile uint8_t x254 = 5U;
static int8_t x259 = -1;
static uint64_t x260 = UINT64_MAX;
int8_t x267 = INT8_MIN;
volatile uint32_t t66 = 16575U;
uint32_t x271 = 99U;
volatile int8_t x276 = 3;
volatile int16_t x283 = INT16_MAX;
volatile int64_t x285 = INT64_MAX;
static int16_t x292 = INT16_MAX;
volatile int8_t x306 = -1;
int32_t x307 = -1;
volatile uint32_t t76 = UINT32_MAX;
volatile uint64_t x311 = UINT64_MAX;
volatile uint16_t x313 = 48U;
int32_t t78 = -15;
static uint16_t x318 = 468U;
uint16_t x325 = UINT16_MAX;
int32_t t82 = -606044;
uint32_t x345 = UINT32_MAX;
volatile int8_t x350 = INT8_MIN;
int32_t x356 = INT32_MIN;
int32_t t89 = 45757;
int64_t x368 = INT64_MIN;
uint32_t x372 = 352423217U;
volatile int32_t t93 = -671;
int16_t x379 = -1;
volatile int16_t x382 = INT16_MAX;
int32_t t96 = -50067;
uint8_t x389 = UINT8_MAX;
uint8_t x392 = 8U;
int32_t x396 = INT32_MIN;
volatile int32_t t98 = 4022;
volatile int32_t x397 = -165338075;


void f0(void) {
	uint32_t x1 = 13U;
	uint64_t x2 = UINT64_MAX;
	static uint16_t x3 = 3U;
	int8_t x4 = INT8_MIN;

	t0 = (((x1<x2)<x3)^x4);

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	uint16_t x8 = 13U;
	int32_t t1 = -203306;

	t1 = (((x5<x6)<x7)^x8);

	if (t1 != 13) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint32_t x10 = 430182U;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 110237175LL;

	t2 = (((x9<x10)<x11)^x12);

	if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x14 = INT16_MIN;
	int8_t x15 = INT8_MIN;
	int32_t x16 = -1;

	t3 = (((x13<x14)<x15)^x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static int64_t x18 = INT64_MIN;
	int64_t x19 = -1LL;
	volatile uint64_t x20 = 1464572201917787788LLU;
	volatile uint64_t t4 = 14958LLU;

	t4 = (((x17<x18)<x19)^x20);

	if (t4 != 1464572201917787788LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -527;
	uint8_t x22 = 3U;
	uint64_t x24 = 2LLU;
	static volatile uint64_t t5 = 5078LLU;

	t5 = (((x21<x22)<x23)^x24);

	if (t5 != 2LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	int16_t x26 = INT16_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 1446LLU;
	uint64_t t6 = 41691LLU;

	t6 = (((x25<x26)<x27)^x28);

	if (t6 != 1447LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = 1792902774U;
	volatile int16_t x31 = -1;

	t7 = (((x29<x30)<x31)^x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = INT8_MIN;
	uint8_t x36 = 0U;
	static int32_t t8 = -486829;

	t8 = (((x33<x34)<x35)^x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 21U;
	uint8_t x38 = UINT8_MAX;
	uint32_t x39 = 164331U;
	uint64_t x40 = 23753LLU;
	volatile uint64_t t9 = 299573707449LLU;

	t9 = (((x37<x38)<x39)^x40);

	if (t9 != 23752LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 221LLU;
	static int16_t x42 = 122;
	volatile uint16_t x43 = UINT16_MAX;
	volatile uint64_t x44 = 15770LLU;
	volatile uint64_t t10 = 96850595LLU;

	t10 = (((x41<x42)<x43)^x44);

	if (t10 != 15771LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = -1LL;
	uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t11 = UINT64_MAX;

	t11 = (((x45<x46)<x47)^x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = INT16_MAX;
	uint32_t x52 = 16180U;
	uint32_t t12 = 10U;

	t12 = (((x49<x50)<x51)^x52);

	if (t12 != 16180U) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x53 = INT64_MAX;
	int64_t x55 = INT64_MAX;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -1;

	t13 = (((x53<x54)<x55)^x56);

	if (t13 != -2147483647) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	static volatile int16_t x58 = -1;
	int8_t x59 = -12;
	static int64_t x60 = INT64_MIN;

	t14 = (((x57<x58)<x59)^x60);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MAX;
	static volatile uint8_t x62 = 117U;
	uint16_t x63 = UINT16_MAX;
	static volatile int16_t x64 = -48;
	int32_t t15 = 1115821;

	t15 = (((x61<x62)<x63)^x64);

	if (t15 != -47) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	static volatile uint8_t x66 = UINT8_MAX;
	volatile int64_t x67 = INT64_MAX;
	static int32_t t16 = -819607598;

	t16 = (((x65<x66)<x67)^x68);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 28;
	int16_t x70 = -15365;
	int16_t x71 = -1;
	volatile int64_t x72 = 31821762122LL;
	int64_t t17 = -1524676298750548LL;

	t17 = (((x69<x70)<x71)^x72);

	if (t17 != 31821762122LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint64_t x74 = UINT64_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t18 = 3U;

	t18 = (((x73<x74)<x75)^x76);

	if (t18 != 4294967294U) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint64_t x78 = UINT64_MAX;
	static volatile int16_t x80 = -1;

	t19 = (((x77<x78)<x79)^x80);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x81 = UINT8_MAX;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = -41;
	int8_t x84 = -1;
	volatile int32_t t20 = -1360;

	t20 = (((x81<x82)<x83)^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int64_t x87 = -48164202440794032LL;
	int8_t x88 = INT8_MIN;

	t21 = (((x85<x86)<x87)^x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = -8551;
	int8_t x90 = INT8_MIN;
	int16_t x91 = -1;
	volatile uint64_t x92 = UINT64_MAX;
	uint64_t t22 = UINT64_MAX;

	t22 = (((x89<x90)<x91)^x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int16_t x95 = INT16_MIN;

	t23 = (((x93<x94)<x95)^x96);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x97 = UINT16_MAX;
	uint32_t x98 = 3245U;
	int64_t x99 = INT64_MIN;
	static int64_t x100 = INT64_MAX;
	int64_t t24 = INT64_MAX;

	t24 = (((x97<x98)<x99)^x100);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	uint16_t x102 = UINT16_MAX;
	uint8_t x103 = 0U;
	uint64_t x104 = 853290177164948542LLU;
	uint64_t t25 = 118692269372658469LLU;

	t25 = (((x101<x102)<x103)^x104);

	if (t25 != 853290177164948542LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 398783251240124520LL;
	int8_t x106 = -60;
	uint64_t x107 = 475606LLU;
	volatile uint32_t x108 = 749U;

	t26 = (((x105<x106)<x107)^x108);

	if (t26 != 748U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	volatile uint32_t x110 = 23720U;
	static uint8_t x111 = 1U;
	int32_t t27 = 6861668;

	t27 = (((x109<x110)<x111)^x112);

	if (t27 != 9) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	int32_t x114 = -7821097;
	static int64_t x115 = INT64_MAX;
	static int32_t t28 = 352312;

	t28 = (((x113<x114)<x115)^x116);

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -229;
	static volatile int8_t x118 = 1;
	volatile int32_t t29 = -130236901;

	t29 = (((x117<x118)<x119)^x120);

	if (t29 != -6) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x121 = 4046U;
	int64_t x122 = INT64_MIN;
	volatile int8_t x123 = INT8_MIN;
	volatile int16_t x124 = INT16_MAX;
	static int32_t t30 = -1019009961;

	t30 = (((x121<x122)<x123)^x124);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = 5U;
	static int16_t x127 = -1;
	int32_t x128 = INT32_MAX;
	int32_t t31 = INT32_MAX;

	t31 = (((x125<x126)<x127)^x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MAX;
	uint8_t x130 = 11U;
	volatile int32_t x132 = INT32_MAX;

	t32 = (((x129<x130)<x131)^x132);

	if (t32 != 2147483646) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = 1302LL;
	uint64_t x135 = 4319661748847143095LLU;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = -1365;

	t33 = (((x133<x134)<x135)^x136);

	if (t33 != 65534) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int8_t x138 = 2;
	int8_t x139 = 1;
	static int16_t x140 = -6;
	int32_t t34 = -94;

	t34 = (((x137<x138)<x139)^x140);

	if (t34 != -5) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 6;
	uint64_t x142 = 47LLU;
	uint32_t x143 = 623337U;
	int8_t x144 = -9;

	t35 = (((x141<x142)<x143)^x144);

	if (t35 != -10) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	volatile int8_t x146 = INT8_MIN;
	int64_t x147 = INT64_MIN;
	volatile uint64_t t36 = 3978497934024LLU;

	t36 = (((x145<x146)<x147)^x148);

	if (t36 != 61365280LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 99U;
	static volatile int64_t x150 = 3227LL;
	static uint8_t x152 = 0U;
	int32_t t37 = 117;

	t37 = (((x149<x150)<x151)^x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MAX;
	volatile int8_t x154 = INT8_MIN;
	static uint16_t x155 = 3U;
	volatile uint32_t t38 = 155052U;

	t38 = (((x153<x154)<x155)^x156);

	if (t38 != 89U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x158 = INT16_MAX;
	int64_t x160 = -4249243379LL;
	static volatile int64_t t39 = 4342494LL;

	t39 = (((x157<x158)<x159)^x160);

	if (t39 != -4249243380LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 2911LLU;
	uint16_t x163 = 511U;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t40 = 3U;

	t40 = (((x161<x162)<x163)^x164);

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = INT64_MIN;
	int8_t x168 = -1;
	int32_t t41 = 1027104125;

	t41 = (((x165<x166)<x167)^x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x170 = UINT32_MAX;
	uint16_t x172 = 0U;
	int32_t t42 = -8;

	t42 = (((x169<x170)<x171)^x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 14289294919LLU;
	uint8_t x174 = 1U;
	uint32_t x175 = 31162535U;
	int64_t x176 = INT64_MAX;
	int64_t t43 = -46396152483230046LL;

	t43 = (((x173<x174)<x175)^x176);

	if (t43 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	uint64_t x178 = 7LLU;
	int64_t x179 = INT64_MAX;
	int8_t x180 = 15;
	int32_t t44 = 60;

	t44 = (((x177<x178)<x179)^x180);

	if (t44 != 14) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int32_t x182 = INT32_MAX;
	int8_t x183 = 0;
	int32_t t45 = -91;

	t45 = (((x181<x182)<x183)^x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x185 = -1;
	uint16_t x186 = 8U;
	static volatile int64_t x187 = 6253951789LL;
	int64_t x188 = INT64_MAX;
	int64_t t46 = 7LL;

	t46 = (((x185<x186)<x187)^x188);

	if (t46 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 31360U;
	int8_t x191 = INT8_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t47 = INT64_MIN;

	t47 = (((x189<x190)<x191)^x192);

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile int32_t x194 = -3;
	uint64_t x195 = 6492997LLU;
	uint32_t x196 = UINT32_MAX;
	uint32_t t48 = 0U;

	t48 = (((x193<x194)<x195)^x196);

	if (t48 != 4294967294U) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = 51;
	int16_t x198 = INT16_MAX;
	uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -505;

	t49 = (((x197<x198)<x199)^x200);

	if (t49 != -2147483647) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -1;
	volatile int8_t x202 = INT8_MAX;
	uint64_t t50 = 7396LLU;

	t50 = (((x201<x202)<x203)^x204);

	if (t50 != 207334LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x208 = INT32_MIN;
	static volatile int32_t t51 = -510464;

	t51 = (((x205<x206)<x207)^x208);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	uint64_t x210 = 3LLU;
	uint64_t x211 = 8771LLU;
	int8_t x212 = INT8_MAX;

	t52 = (((x209<x210)<x211)^x212);

	if (t52 != 126) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x214 = INT64_MIN;
	uint8_t x216 = 2U;
	static volatile int32_t t53 = 1;

	t53 = (((x213<x214)<x215)^x216);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = 0U;
	int64_t x218 = INT64_MIN;
	volatile uint64_t x219 = UINT64_MAX;

	t54 = (((x217<x218)<x219)^x220);

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = INT64_MAX;
	static int64_t x224 = INT64_MAX;
	int64_t t55 = INT64_MAX;

	t55 = (((x221<x222)<x223)^x224);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	int32_t t56 = 0;

	t56 = (((x225<x226)<x227)^x228);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	volatile uint8_t x230 = 0U;
	uint8_t x231 = 41U;
	int32_t x232 = -1;
	volatile int32_t t57 = -3900065;

	t57 = (((x229<x230)<x231)^x232);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MAX;
	uint64_t x235 = 1750224213455675506LLU;
	volatile uint16_t x236 = 92U;
	static int32_t t58 = 23102008;

	t58 = (((x233<x234)<x235)^x236);

	if (t58 != 93) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x238 = UINT32_MAX;
	volatile int64_t x239 = 13827255LL;
	int64_t x240 = INT64_MIN;

	t59 = (((x237<x238)<x239)^x240);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MAX;
	int8_t x242 = INT8_MIN;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 234662;

	t60 = (((x241<x242)<x243)^x244);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x246 = -1;
	int32_t x247 = INT32_MIN;
	static int8_t x248 = INT8_MAX;

	t61 = (((x245<x246)<x247)^x248);

	if (t61 != 127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x249 = UINT64_MAX;
	int8_t x250 = -56;
	uint64_t x251 = UINT64_MAX;
	static uint8_t x252 = 72U;
	volatile int32_t t62 = -167986;

	t62 = (((x249<x250)<x251)^x252);

	if (t62 != 73) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x253 = -15566170407515LL;
	uint64_t x255 = 3069400803LLU;
	uint16_t x256 = 0U;
	static volatile int32_t t63 = 0;

	t63 = (((x253<x254)<x255)^x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int8_t x258 = INT8_MAX;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = (((x257<x258)<x259)^x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 2U;
	int32_t x262 = -1;
	volatile uint8_t x263 = UINT8_MAX;
	static volatile uint32_t x264 = 7U;
	static volatile uint32_t t65 = 1337U;

	t65 = (((x261<x262)<x263)^x264);

	if (t65 != 6U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 1;
	int8_t x266 = -1;
	static volatile uint32_t x268 = 155U;

	t66 = (((x265<x266)<x267)^x268);

	if (t66 != 155U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = 116482;
	int16_t x270 = INT16_MIN;
	static int64_t x272 = -1LL;
	int64_t t67 = -122514LL;

	t67 = (((x269<x270)<x271)^x272);

	if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = -242;
	int64_t x274 = -1LL;
	uint16_t x275 = 2348U;
	int32_t t68 = -25971;

	t68 = (((x273<x274)<x275)^x276);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	int32_t x278 = -28923296;
	volatile int64_t x279 = -5997505044095LL;
	int64_t x280 = 2719300404LL;
	int64_t t69 = -79409785LL;

	t69 = (((x277<x278)<x279)^x280);

	if (t69 != 2719300404LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = -158347;
	uint8_t x282 = 32U;
	int8_t x284 = 14;
	int32_t t70 = -57776450;

	t70 = (((x281<x282)<x283)^x284);

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = INT32_MIN;
	static int64_t x287 = -1LL;
	int32_t x288 = 859103;
	volatile int32_t t71 = -100270;

	t71 = (((x285<x286)<x287)^x288);

	if (t71 != 859103) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	int64_t x290 = INT64_MIN;
	uint64_t x291 = 749730842LLU;
	int32_t t72 = 0;

	t72 = (((x289<x290)<x291)^x292);

	if (t72 != 32766) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	int8_t x295 = 16;
	volatile int64_t x296 = INT64_MIN;
	int64_t t73 = 6481223LL;

	t73 = (((x293<x294)<x295)^x296);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 28073U;
	static int64_t x298 = INT64_MAX;
	int8_t x299 = -1;
	static int32_t x300 = -1832325;
	int32_t t74 = 12775938;

	t74 = (((x297<x298)<x299)^x300);

	if (t74 != -1832325) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x301 = INT64_MIN;
	volatile int16_t x302 = 6;
	static int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = INT32_MIN;

	t75 = (((x301<x302)<x303)^x304);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 5753;
	uint32_t x308 = UINT32_MAX;

	t76 = (((x305<x306)<x307)^x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	uint64_t x310 = 2428706454481359748LLU;
	int16_t x312 = -1857;
	volatile int32_t t77 = -233;

	t77 = (((x309<x310)<x311)^x312);

	if (t77 != -1858) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -1;
	int64_t x315 = INT64_MIN;
	int16_t x316 = -1;

	t78 = (((x313<x314)<x315)^x316);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 859LL;
	static volatile int64_t x319 = INT64_MIN;
	uint64_t x320 = 6730749522386LLU;
	uint64_t t79 = 44006154LLU;

	t79 = (((x317<x318)<x319)^x320);

	if (t79 != 6730749522386LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 252U;
	int16_t x322 = 0;
	uint8_t x323 = 42U;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = -15;

	t80 = (((x321<x322)<x323)^x324);

	if (t80 != 2147483646) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	int16_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = -3;

	t81 = (((x325<x326)<x327)^x328);

	if (t81 != 65535) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x329 = INT16_MIN;
	uint8_t x330 = 0U;
	static uint16_t x331 = 3U;
	uint8_t x332 = 44U;

	t82 = (((x329<x330)<x331)^x332);

	if (t82 != 45) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 7U;
	static volatile int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MAX;
	int32_t t83 = -36278;

	t83 = (((x333<x334)<x335)^x336);

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = UINT32_MAX;
	static uint64_t x338 = UINT64_MAX;
	int16_t x339 = -1;
	uint32_t x340 = 268U;
	volatile uint32_t t84 = 15291658U;

	t84 = (((x337<x338)<x339)^x340);

	if (t84 != 268U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -348;
	uint64_t x342 = 5LLU;
	int8_t x343 = INT8_MIN;
	uint64_t x344 = 382767420529LLU;
	uint64_t t85 = 311681516536LLU;

	t85 = (((x341<x342)<x343)^x344);

	if (t85 != 382767420529LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x346 = INT32_MAX;
	int32_t x347 = -50;
	volatile int16_t x348 = -253;
	int32_t t86 = -257217069;

	t86 = (((x345<x346)<x347)^x348);

	if (t86 != -253) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x351 = INT8_MAX;
	static int16_t x352 = -1;
	static volatile int32_t t87 = -1;

	t87 = (((x349<x350)<x351)^x352);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x353 = 27U;
	uint8_t x354 = 36U;
	volatile uint16_t x355 = UINT16_MAX;
	int32_t t88 = 1;

	t88 = (((x353<x354)<x355)^x356);

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 24011556U;
	static int16_t x358 = -16;
	volatile int8_t x359 = -1;
	volatile int16_t x360 = 4;

	t89 = (((x357<x358)<x359)^x360);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MAX;
	int8_t x363 = INT8_MAX;
	volatile int64_t x364 = INT64_MIN;
	int64_t t90 = -15947380545LL;

	t90 = (((x361<x362)<x363)^x364);

	if (t90 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -3;
	static int16_t x366 = INT16_MAX;
	uint16_t x367 = UINT16_MAX;
	int64_t t91 = 8306935141636LL;

	t91 = (((x365<x366)<x367)^x368);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = UINT16_MAX;
	static int8_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	uint32_t t92 = 35588U;

	t92 = (((x369<x370)<x371)^x372);

	if (t92 != 352423216U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = 1;
	static int32_t x375 = -1;
	int16_t x376 = INT16_MIN;

	t93 = (((x373<x374)<x375)^x376);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static volatile uint16_t x378 = 277U;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t94 = INT64_MIN;

	t94 = (((x377<x378)<x379)^x380);

	if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	volatile int16_t x383 = -111;
	int64_t x384 = 20567936642435LL;
	int64_t t95 = 97747717370174LL;

	t95 = (((x381<x382)<x383)^x384);

	if (t95 != 20567936642435LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 981124U;
	int64_t x386 = INT64_MIN;
	volatile uint64_t x387 = 128946691LLU;
	volatile int16_t x388 = INT16_MIN;

	t96 = (((x385<x386)<x387)^x388);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = -1LL;
	volatile int32_t x391 = INT32_MIN;
	volatile int32_t t97 = 168;

	t97 = (((x389<x390)<x391)^x392);

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 1;
	int64_t x394 = -1LL;
	uint32_t x395 = 42U;

	t98 = (((x393<x394)<x395)^x396);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = -1LL;
	volatile int32_t x400 = 4278257;
	volatile int32_t t99 = -2;

	t99 = (((x397<x398)<x399)^x400);

	if (t99 != 4278257) { NG(); } else { ; }
	
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

