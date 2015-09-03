#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x3 = INT64_MIN;
static int32_t t5 = 1812445;
int32_t x32 = 8148;
int16_t x36 = INT16_MIN;
volatile int64_t t7 = 1210218367525LL;
volatile uint16_t x38 = UINT16_MAX;
int64_t x40 = INT64_MIN;
uint8_t x44 = 16U;
static volatile uint16_t x47 = 1904U;
volatile int16_t x51 = 39;
volatile uint64_t t13 = 21505109082508LLU;
volatile int64_t x61 = 72516184729328LL;
int64_t x64 = 2LL;
int64_t x70 = 8157LL;
static volatile int16_t x75 = -167;
volatile int8_t x77 = -1;
uint64_t x78 = UINT64_MAX;
int8_t x79 = INT8_MIN;
volatile uint16_t x85 = 29351U;
static int16_t x89 = INT16_MAX;
int16_t x90 = INT16_MIN;
uint64_t t21 = 3282808993LLU;
uint32_t x103 = 646U;
volatile int64_t t24 = 3533389424LL;
volatile uint32_t x107 = 77U;
uint32_t x112 = 10208673U;
volatile int32_t t29 = 1;
volatile uint64_t x128 = 1528415351441LLU;
static volatile int64_t x129 = 25528168LL;
static uint16_t x135 = 463U;
int64_t x140 = INT64_MIN;
int32_t x145 = 43708;
volatile uint16_t x147 = UINT16_MAX;
int32_t t35 = -1;
static int64_t x149 = INT64_MAX;
int32_t x158 = INT32_MAX;
int64_t x159 = -786LL;
int32_t x166 = INT32_MIN;
int64_t x168 = INT64_MIN;
static int64_t t40 = INT64_MIN;
uint64_t x172 = UINT64_MAX;
volatile uint64_t t41 = UINT64_MAX;
static uint64_t x177 = 152687806534738LLU;
static int32_t x178 = -1;
int16_t x185 = -1;
int32_t t46 = 240;
volatile uint8_t x201 = 6U;
static volatile uint64_t t50 = 16872LLU;
uint64_t x209 = 1176LLU;
int16_t x221 = INT16_MIN;
uint64_t x224 = 141735295198257947LLU;
volatile int32_t x236 = INT32_MIN;
volatile int64_t t58 = 6823127149737116LL;
int8_t x241 = INT8_MIN;
uint16_t x242 = UINT16_MAX;
static uint16_t x246 = 2355U;
int64_t x250 = INT64_MIN;
int64_t x252 = -13033258LL;
static int16_t x259 = INT16_MIN;
volatile int32_t t63 = -525044;
static uint32_t x261 = UINT32_MAX;
int16_t x264 = -1;
volatile int32_t t64 = 2;
static volatile int16_t x265 = -9643;
int64_t t67 = -4136378LL;
static int16_t x277 = INT16_MIN;
static uint64_t x281 = UINT64_MAX;
volatile uint32_t t71 = 103874U;
int64_t x293 = INT64_MAX;
static int8_t x294 = 2;
volatile int32_t x296 = INT32_MIN;
static uint32_t t72 = 358084796U;
int16_t x302 = INT16_MAX;
uint16_t x306 = 498U;
int8_t x308 = INT8_MIN;
int8_t x311 = INT8_MAX;
static uint8_t x315 = 41U;
static volatile uint16_t x316 = 47U;
volatile int64_t x317 = INT64_MAX;
volatile int64_t x318 = -1LL;
static volatile uint32_t t79 = 191140U;
uint8_t x331 = UINT8_MAX;
volatile int32_t x332 = INT32_MAX;
volatile int8_t x339 = -1;
volatile int16_t x340 = -1;
int32_t x347 = -2719933;
uint64_t x353 = 1702939900843LLU;
static int32_t x356 = 65356;
uint8_t x365 = 1U;
volatile int8_t x374 = INT8_MIN;
int8_t x376 = INT8_MAX;
static uint8_t x379 = 6U;
static int32_t x388 = INT32_MAX;
volatile int32_t t95 = INT32_MAX;
static int64_t x389 = INT64_MAX;
volatile int32_t t96 = -4900;
int8_t x393 = 0;
volatile int64_t t97 = INT64_MIN;
uint8_t x402 = UINT8_MAX;
volatile int64_t t99 = -41961LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int64_t x2 = INT64_MAX;
	int64_t x4 = -69145765118222LL;
	volatile int64_t t0 = -1886258LL;

	t0 = (((x1<x2)%x3)^x4);

	if (t0 != -69145765118221LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 3U;
	int32_t x8 = INT32_MAX;
	int32_t t1 = INT32_MAX;

	t1 = (((x5<x6)%x7)^x8);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	volatile uint16_t x10 = 1U;
	static int32_t x11 = INT32_MIN;
	uint32_t x12 = 13U;
	uint32_t t2 = 32472683U;

	t2 = (((x9<x10)%x11)^x12);

	if (t2 != 13U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 7080675422004LLU;
	static int16_t x18 = 0;
	int64_t x19 = 126LL;
	static uint64_t x20 = 49LLU;
	uint64_t t3 = 198424370LLU;

	t3 = (((x17<x18)%x19)^x20);

	if (t3 != 49LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -316831883;
	volatile int8_t x22 = INT8_MAX;
	int16_t x23 = -1;
	static int32_t x24 = INT32_MIN;
	static int32_t t4 = INT32_MIN;

	t4 = (((x21<x22)%x23)^x24);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = INT32_MAX;
	int16_t x26 = -579;
	int32_t x27 = -1;
	uint8_t x28 = UINT8_MAX;

	t5 = (((x25<x26)%x27)^x28);

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MIN;
	int64_t x31 = -1LL;
	int64_t t6 = 14578919306LL;

	t6 = (((x29<x30)%x31)^x32);

	if (t6 != 8148LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 2U;
	int16_t x34 = 1;
	int64_t x35 = -1LL;

	t7 = (((x33<x34)%x35)^x36);

	if (t7 != -32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int32_t x39 = -812;
	volatile int64_t t8 = 503412269506589397LL;

	t8 = (((x37<x38)%x39)^x40);

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = INT8_MAX;
	int64_t x42 = -7654361LL;
	int8_t x43 = 1;
	volatile int32_t t9 = -1007;

	t9 = (((x41<x42)%x43)^x44);

	if (t9 != 16) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = 14;
	volatile int64_t x46 = 1122605LL;
	int32_t x48 = INT32_MAX;
	static volatile int32_t t10 = 512556;

	t10 = (((x45<x46)%x47)^x48);

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	uint8_t x50 = 15U;
	static int64_t x52 = -24105110LL;
	volatile int64_t t11 = 53659LL;

	t11 = (((x49<x50)%x51)^x52);

	if (t11 != -24105110LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -4;
	static uint64_t x54 = 10748LLU;
	int32_t x55 = 2;
	volatile int8_t x56 = -1;
	volatile int32_t t12 = 854;

	t12 = (((x53<x54)%x55)^x56);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	int32_t x58 = INT32_MAX;
	uint64_t x59 = UINT64_MAX;
	static volatile int64_t x60 = INT64_MIN;

	t13 = (((x57<x58)%x59)^x60);

	if (t13 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MAX;
	volatile uint64_t x63 = UINT64_MAX;
	volatile uint64_t t14 = 33359990LLU;

	t14 = (((x61<x62)%x63)^x64);

	if (t14 != 2LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	int64_t x66 = 4158118516547158LL;
	static volatile int32_t x67 = 54747927;
	static int64_t x68 = -773867022354515LL;
	volatile int64_t t15 = 79LL;

	t15 = (((x65<x66)%x67)^x68);

	if (t15 != -773867022354516LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x69 = 152U;
	int64_t x71 = INT64_MIN;
	uint8_t x72 = 60U;
	volatile int64_t t16 = -5684671014140774LL;

	t16 = (((x69<x70)%x71)^x72);

	if (t16 != 61LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = UINT16_MAX;
	int16_t x76 = -1;
	static int32_t t17 = 0;

	t17 = (((x73<x74)%x75)^x76);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x80 = 3LLU;
	volatile uint64_t t18 = 0LLU;

	t18 = (((x77<x78)%x79)^x80);

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	uint8_t x82 = 2U;
	static uint8_t x83 = 11U;
	static uint8_t x84 = UINT8_MAX;
	int32_t t19 = -2;

	t19 = (((x81<x82)%x83)^x84);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x86 = 6;
	uint64_t x87 = 485086895LLU;
	int32_t x88 = 12;
	uint64_t t20 = 53876918403225020LLU;

	t20 = (((x85<x86)%x87)^x88);

	if (t20 != 12LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x91 = INT64_MAX;
	volatile uint64_t x92 = 64066LLU;

	t21 = (((x89<x90)%x91)^x92);

	if (t21 != 64066LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 56U;
	volatile int32_t x94 = -1;
	volatile int16_t x95 = INT16_MIN;
	int8_t x96 = -1;
	volatile int32_t t22 = 3914450;

	t22 = (((x93<x94)%x95)^x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = 92U;
	uint8_t x100 = 0U;
	int32_t t23 = -70477;

	t23 = (((x97<x98)%x99)^x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 1477639067U;
	int16_t x102 = -7;
	volatile int64_t x104 = 261787LL;

	t24 = (((x101<x102)%x103)^x104);

	if (t24 != 261786LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	int8_t x106 = INT8_MIN;
	uint16_t x108 = UINT16_MAX;
	uint32_t t25 = 3969962U;

	t25 = (((x105<x106)%x107)^x108);

	if (t25 != 65535U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	static volatile int32_t x110 = INT32_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile uint32_t t26 = 296700360U;

	t26 = (((x109<x110)%x111)^x112);

	if (t26 != 10208672U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x113 = UINT32_MAX;
	volatile uint64_t x114 = 3LLU;
	static int32_t x115 = -1;
	int8_t x116 = INT8_MIN;
	int32_t t27 = 1;

	t27 = (((x113<x114)%x115)^x116);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = INT8_MIN;
	volatile uint32_t x118 = 1794525990U;
	int64_t x119 = -1LL;
	int32_t x120 = INT32_MIN;
	static int64_t t28 = -37LL;

	t28 = (((x117<x118)%x119)^x120);

	if (t28 != -2147483648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -2;
	volatile uint32_t x122 = 12247U;
	int8_t x123 = -1;
	int8_t x124 = INT8_MIN;

	t29 = (((x121<x122)%x123)^x124);

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = 0;
	volatile uint8_t x126 = 55U;
	volatile uint32_t x127 = UINT32_MAX;
	uint64_t t30 = 1527516801705985790LLU;

	t30 = (((x125<x126)%x127)^x128);

	if (t30 != 1528415351440LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = 2775991138389LL;
	static int8_t x131 = -23;
	uint8_t x132 = 7U;
	volatile int32_t t31 = 4;

	t31 = (((x129<x130)%x131)^x132);

	if (t31 != 6) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -5;
	int8_t x134 = -1;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = -37437;

	t32 = (((x133<x134)%x135)^x136);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x137 = 38993LLU;
	int16_t x138 = INT16_MIN;
	uint32_t x139 = 28030U;
	int64_t t33 = 988LL;

	t33 = (((x137<x138)%x139)^x140);

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -39;
	uint64_t x142 = 1651283LLU;
	volatile int64_t x143 = 15824342118406466LL;
	static volatile int16_t x144 = INT16_MIN;
	int64_t t34 = 2LL;

	t34 = (((x141<x142)%x143)^x144);

	if (t34 != -32768LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x146 = 18294942LLU;
	int8_t x148 = INT8_MIN;

	t35 = (((x145<x146)%x147)^x148);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x150 = -1;
	int8_t x151 = -1;
	int8_t x152 = INT8_MIN;
	volatile int32_t t36 = -307532451;

	t36 = (((x149<x150)%x151)^x152);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MIN;
	int16_t x154 = -1;
	int8_t x155 = -1;
	static volatile uint32_t x156 = 49723630U;
	volatile uint32_t t37 = 0U;

	t37 = (((x153<x154)%x155)^x156);

	if (t37 != 49723630U) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	static volatile int16_t x160 = INT16_MIN;
	volatile int64_t t38 = 1129079197974888669LL;

	t38 = (((x157<x158)%x159)^x160);

	if (t38 != -32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x161 = UINT64_MAX;
	volatile int8_t x162 = INT8_MAX;
	volatile int8_t x163 = -11;
	static uint16_t x164 = 7U;
	int32_t t39 = -14;

	t39 = (((x161<x162)%x163)^x164);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = -1;
	static volatile int32_t x167 = 4432167;

	t40 = (((x165<x166)%x167)^x168);

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	static uint8_t x170 = 2U;
	uint16_t x171 = 166U;

	t41 = (((x169<x170)%x171)^x172);

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -91;
	int8_t x174 = INT8_MIN;
	int64_t x175 = -121367846902LL;
	static uint8_t x176 = UINT8_MAX;
	int64_t t42 = 5871634195563542LL;

	t42 = (((x173<x174)%x175)^x176);

	if (t42 != 255LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x179 = INT64_MIN;
	volatile uint32_t x180 = UINT32_MAX;
	int64_t t43 = 7LL;

	t43 = (((x177<x178)%x179)^x180);

	if (t43 != 4294967294LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x181 = 22;
	static int16_t x182 = 199;
	int16_t x183 = -1;
	int16_t x184 = 1;
	volatile int32_t t44 = 96246211;

	t44 = (((x181<x182)%x183)^x184);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x186 = 3U;
	int64_t x187 = INT64_MAX;
	int8_t x188 = 1;
	int64_t t45 = -116395605173236685LL;

	t45 = (((x185<x186)%x187)^x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 15020940U;
	int64_t x190 = 39133060772184065LL;
	int8_t x191 = -43;
	int16_t x192 = 3030;

	t46 = (((x189<x190)%x191)^x192);

	if (t46 != 3031) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = -172634153;
	int8_t x194 = 60;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = -29171LL;
	volatile int64_t t47 = 44051LL;

	t47 = (((x193<x194)%x195)^x196);

	if (t47 != -29172LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = -1;
	uint16_t x198 = 3U;
	uint16_t x199 = UINT16_MAX;
	uint32_t x200 = 3042723U;
	static volatile uint32_t t48 = 2698U;

	t48 = (((x197<x198)%x199)^x200);

	if (t48 != 3042722U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x202 = UINT8_MAX;
	volatile int8_t x203 = INT8_MAX;
	int32_t x204 = -1;
	volatile int32_t t49 = 1;

	t49 = (((x201<x202)%x203)^x204);

	if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -138823874017662560LL;
	int32_t x206 = INT32_MIN;
	uint64_t x207 = 911045352035LLU;
	uint64_t x208 = 625LLU;

	t50 = (((x205<x206)%x207)^x208);

	if (t50 != 624LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x210 = 22U;
	int32_t x211 = -451253450;
	int16_t x212 = INT16_MIN;
	volatile int32_t t51 = -535;

	t51 = (((x209<x210)%x211)^x212);

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t52 = 3264715;

	t52 = (((x213<x214)%x215)^x216);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = UINT64_MAX;
	int16_t x218 = -1;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 4LLU;
	uint64_t t53 = 70313LLU;

	t53 = (((x217<x218)%x219)^x220);

	if (t53 != 4LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x222 = -1;
	uint32_t x223 = 42592295U;
	volatile uint64_t t54 = 82635096LLU;

	t54 = (((x221<x222)%x223)^x224);

	if (t54 != 141735295198257946LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = -4571326824354557387LL;
	int64_t x227 = INT64_MIN;
	int8_t x228 = -62;
	int64_t t55 = -52462525519LL;

	t55 = (((x225<x226)%x227)^x228);

	if (t55 != -62LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MIN;
	static int16_t x230 = INT16_MIN;
	int64_t x231 = INT64_MAX;
	uint8_t x232 = 4U;
	volatile int64_t t56 = 197529431885LL;

	t56 = (((x229<x230)%x231)^x232);

	if (t56 != 4LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x233 = INT64_MIN;
	static volatile int32_t x234 = INT32_MAX;
	int32_t x235 = -7;
	volatile int32_t t57 = 0;

	t57 = (((x233<x234)%x235)^x236);

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x237 = 98U;
	uint64_t x238 = 1635792LLU;
	int64_t x239 = INT64_MIN;
	int8_t x240 = -1;

	t58 = (((x237<x238)%x239)^x240);

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x243 = 25;
	int8_t x244 = -1;
	volatile int32_t t59 = 29;

	t59 = (((x241<x242)%x243)^x244);

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x245 = 7014117104683928LLU;
	uint32_t x247 = 2338537U;
	static volatile int16_t x248 = -2;
	uint32_t t60 = 190205984U;

	t60 = (((x245<x246)%x247)^x248);

	if (t60 != 4294967294U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x249 = 1;
	uint16_t x251 = 67U;
	volatile int64_t t61 = -52206LL;

	t61 = (((x249<x250)%x251)^x252);

	if (t61 != -13033258LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MAX;
	uint16_t x254 = 60U;
	uint16_t x255 = UINT16_MAX;
	volatile int16_t x256 = INT16_MIN;
	volatile int32_t t62 = 95;

	t62 = (((x253<x254)%x255)^x256);

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	uint16_t x258 = UINT16_MAX;
	int32_t x260 = INT32_MIN;

	t63 = (((x257<x258)%x259)^x260);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x262 = 4;
	volatile int32_t x263 = INT32_MIN;

	t64 = (((x261<x262)%x263)^x264);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x266 = 945689344U;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (((x265<x266)%x267)^x268);

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x269 = -1;
	static int8_t x270 = 50;
	uint8_t x271 = 4U;
	int32_t x272 = 11790;
	volatile int32_t t66 = 0;

	t66 = (((x269<x270)%x271)^x272);

	if (t66 != 11791) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 31;
	static int64_t x274 = -1LL;
	int64_t x275 = -11LL;
	static uint32_t x276 = 57165726U;

	t67 = (((x273<x274)%x275)^x276);

	if (t67 != 57165726LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x278 = UINT32_MAX;
	int32_t x279 = 142209;
	static uint64_t x280 = 3561593625LLU;
	volatile uint64_t t68 = 1043283493357021654LLU;

	t68 = (((x277<x278)%x279)^x280);

	if (t68 != 3561593624LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x282 = INT64_MIN;
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = -7663721LL;
	int64_t t69 = 331835398LL;

	t69 = (((x281<x282)%x283)^x284);

	if (t69 != -7663721LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MAX;
	uint32_t x286 = 39369U;
	static int32_t x287 = INT32_MIN;
	int16_t x288 = 3173;
	static volatile int32_t t70 = 21097;

	t70 = (((x285<x286)%x287)^x288);

	if (t70 != 3172) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = INT64_MAX;
	int16_t x291 = INT16_MIN;
	uint32_t x292 = 211263U;

	t71 = (((x289<x290)%x291)^x292);

	if (t71 != 211262U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x295 = 3094623U;

	t72 = (((x293<x294)%x295)^x296);

	if (t72 != 2147483648U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x297 = 414886U;
	int32_t x298 = 11;
	int64_t x299 = -1LL;
	volatile int64_t x300 = 14327213LL;
	volatile int64_t t73 = 111667927LL;

	t73 = (((x297<x298)%x299)^x300);

	if (t73 != 14327213LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = 53609941LLU;
	static int8_t x303 = 1;
	uint32_t x304 = UINT32_MAX;
	uint32_t t74 = UINT32_MAX;

	t74 = (((x301<x302)%x303)^x304);

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x305 = INT16_MAX;
	uint64_t x307 = 23344592LLU;
	uint64_t t75 = 1925LLU;

	t75 = (((x305<x306)%x307)^x308);

	if (t75 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x309 = 370U;
	int16_t x310 = -1;
	int16_t x312 = INT16_MAX;
	volatile int32_t t76 = 12;

	t76 = (((x309<x310)%x311)^x312);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = 31;
	volatile uint32_t x314 = UINT32_MAX;
	volatile int32_t t77 = 9;

	t77 = (((x313<x314)%x315)^x316);

	if (t77 != 46) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x319 = INT32_MIN;
	int32_t x320 = -290961;
	volatile int32_t t78 = -1;

	t78 = (((x317<x318)%x319)^x320);

	if (t78 != -290961) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	static int64_t x322 = -1LL;
	static uint32_t x323 = 265641U;
	int8_t x324 = INT8_MIN;

	t79 = (((x321<x322)%x323)^x324);

	if (t79 != 4294967169U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x325 = -1;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	static int8_t x328 = 3;
	volatile int32_t t80 = 245031;

	t80 = (((x325<x326)%x327)^x328);

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x329 = -3570;
	uint64_t x330 = 897909808372448307LLU;
	volatile int32_t t81 = INT32_MAX;

	t81 = (((x329<x330)%x331)^x332);

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 98U;
	int16_t x334 = INT16_MIN;
	volatile int8_t x335 = -1;
	static volatile int64_t x336 = INT64_MAX;
	volatile int64_t t82 = INT64_MAX;

	t82 = (((x333<x334)%x335)^x336);

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MIN;
	int16_t x338 = INT16_MAX;
	volatile int32_t t83 = 75203685;

	t83 = (((x337<x338)%x339)^x340);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -1;
	int16_t x342 = 5;
	uint8_t x343 = UINT8_MAX;
	int32_t x344 = -1;
	static int32_t t84 = 93602705;

	t84 = (((x341<x342)%x343)^x344);

	if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = -1;
	volatile int8_t x346 = INT8_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t85 = 344570;

	t85 = (((x345<x346)%x347)^x348);

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x349 = 9;
	int32_t x350 = -4868;
	int16_t x351 = -1;
	int8_t x352 = -1;
	int32_t t86 = -143;

	t86 = (((x349<x350)%x351)^x352);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x354 = 174LL;
	int64_t x355 = -893LL;
	int64_t t87 = -12573183465090464LL;

	t87 = (((x353<x354)%x355)^x356);

	if (t87 != 65356LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 56508191253261253LLU;
	static volatile int64_t x358 = 53029982615LL;
	static int8_t x359 = -3;
	volatile uint64_t x360 = 751385494463678123LLU;
	static volatile uint64_t t88 = 105289LLU;

	t88 = (((x357<x358)%x359)^x360);

	if (t88 != 751385494463678123LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x361 = INT16_MAX;
	uint64_t x362 = UINT64_MAX;
	int32_t x363 = 5675122;
	volatile int8_t x364 = 1;
	static volatile int32_t t89 = -31843;

	t89 = (((x361<x362)%x363)^x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x366 = INT8_MAX;
	uint16_t x367 = 435U;
	int8_t x368 = INT8_MIN;
	int32_t t90 = -30649;

	t90 = (((x365<x366)%x367)^x368);

	if (t90 != -127) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int32_t x370 = INT32_MIN;
	volatile int8_t x371 = INT8_MIN;
	volatile uint16_t x372 = 10743U;
	int32_t t91 = 1;

	t91 = (((x369<x370)%x371)^x372);

	if (t91 != 10743) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x373 = 43U;
	int32_t x375 = INT32_MIN;
	static volatile int32_t t92 = 424994;

	t92 = (((x373<x374)%x375)^x376);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = INT64_MAX;
	static int8_t x380 = INT8_MAX;
	volatile int32_t t93 = 23;

	t93 = (((x377<x378)%x379)^x380);

	if (t93 != 126) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x381 = 4346LLU;
	int8_t x382 = INT8_MIN;
	int16_t x383 = -5;
	volatile int64_t x384 = INT64_MIN;
	static volatile int64_t t94 = -17075876881435203LL;

	t94 = (((x381<x382)%x383)^x384);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = UINT16_MAX;
	int32_t x386 = -1;
	static volatile int8_t x387 = 29;

	t95 = (((x385<x386)%x387)^x388);

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x390 = INT8_MIN;
	int32_t x391 = -3;
	uint16_t x392 = UINT16_MAX;

	t96 = (((x389<x390)%x391)^x392);

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x394 = INT8_MIN;
	int64_t x395 = -386301435679162611LL;
	volatile int64_t x396 = INT64_MIN;

	t97 = (((x393<x394)%x395)^x396);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x397 = INT64_MAX;
	static int16_t x398 = 35;
	int64_t x399 = 12988296883LL;
	volatile int8_t x400 = -1;
	volatile int64_t t98 = 1196175058LL;

	t98 = (((x397<x398)%x399)^x400);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x401 = 55U;
	uint32_t x403 = 38871U;
	static int64_t x404 = INT64_MIN;

	t99 = (((x401<x402)%x403)^x404);

	if (t99 != -9223372036854775807LL) { NG(); } else { ; }
	
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

