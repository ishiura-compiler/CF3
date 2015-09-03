#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x5 = -1;
uint64_t x9 = UINT64_MAX;
int64_t x11 = INT64_MIN;
int8_t x15 = 0;
int64_t t3 = 15LL;
int32_t t5 = 31989;
volatile uint32_t x29 = UINT32_MAX;
int8_t x31 = INT8_MAX;
uint8_t x34 = UINT8_MAX;
static int32_t t8 = 112884234;
static uint8_t x37 = 5U;
volatile int32_t t9 = -128847;
uint8_t x43 = UINT8_MAX;
int8_t x44 = 3;
volatile int32_t t12 = -4303;
int64_t x55 = 6732LL;
int32_t t13 = 1;
static int8_t x58 = INT8_MIN;
int64_t x60 = INT64_MIN;
static int8_t x63 = INT8_MIN;
int32_t x68 = 168758872;
int8_t x69 = INT8_MIN;
int32_t x70 = INT32_MIN;
int64_t x71 = -1LL;
int32_t x73 = INT32_MAX;
volatile uint16_t x75 = UINT16_MAX;
volatile int16_t x77 = -126;
int32_t x80 = -13575650;
volatile int32_t t19 = -1;
volatile uint64_t t21 = 1729158699980740LLU;
int16_t x89 = INT16_MIN;
volatile int8_t x96 = INT8_MAX;
volatile uint32_t x97 = 866023641U;
static volatile int32_t t24 = -2;
int64_t x103 = 298306738549971LL;
uint64_t t25 = 15178808375LLU;
static int16_t x106 = 0;
int16_t x107 = INT16_MIN;
int32_t t26 = -53;
uint32_t x109 = UINT32_MAX;
static int32_t t27 = -3674;
int32_t x116 = -29974551;
int64_t x126 = -7764919344571491LL;
int64_t x132 = 485368024718LL;
volatile uint16_t x140 = 4U;
static int32_t x152 = INT32_MAX;
int8_t x156 = 1;
volatile int32_t t37 = -2378;
int8_t x159 = INT8_MIN;
int16_t x161 = 393;
volatile int32_t t39 = -4145784;
static int32_t x169 = INT32_MIN;
static int32_t x176 = -1;
volatile int32_t t42 = -810888;
int32_t t43 = -336;
int8_t x188 = 1;
uint8_t x192 = 2U;
volatile uint32_t x194 = 197U;
int32_t x199 = -1;
int16_t x200 = -22;
int64_t t48 = -2811281940LL;
int16_t x209 = INT16_MIN;
uint8_t x212 = 3U;
int64_t t51 = -6217395869LL;
uint64_t x217 = 213LLU;
uint32_t x219 = 29376U;
int8_t x220 = -1;
volatile int32_t t52 = -647;
volatile int32_t t53 = -104982;
static int32_t x229 = -114;
int32_t x234 = INT32_MIN;
int64_t x237 = INT64_MIN;
volatile uint32_t x243 = 95U;
static volatile int32_t t58 = 7741;
volatile int64_t x250 = INT64_MIN;
volatile uint64_t x258 = 3885LLU;
int8_t x264 = -1;
static volatile int32_t t63 = 45559498;
static uint32_t x265 = 6U;
volatile int16_t x268 = INT16_MIN;
int8_t x270 = INT8_MIN;
int32_t x272 = INT32_MIN;
volatile uint8_t x277 = 123U;
uint64_t t67 = 0LLU;
volatile uint32_t t68 = 114139U;
static uint16_t x286 = 9U;
int32_t t69 = 304;
static uint32_t t70 = 69U;
int32_t x294 = INT32_MIN;
int16_t x296 = -1;
int8_t x300 = INT8_MIN;
volatile int32_t t73 = -4497;
uint32_t x308 = UINT32_MAX;
int64_t t75 = -84169418180LL;
int16_t x317 = INT16_MAX;
int64_t t77 = -387LL;
int32_t x325 = INT32_MIN;
int16_t x330 = -8808;
int16_t x333 = -1;
int16_t x334 = -1;
uint32_t t81 = 52U;
volatile int32_t t82 = 7;
static int64_t x341 = 603LL;
volatile int32_t t83 = -6246;
volatile int64_t x346 = INT64_MIN;
static uint32_t x354 = 1U;
int16_t x357 = -29;
volatile int32_t t87 = -28176445;
volatile int32_t t88 = 139973044;
int16_t x369 = INT16_MIN;
static uint64_t x371 = 1339749528379474993LLU;
int64_t x374 = INT64_MIN;
volatile uint16_t x375 = 3U;
volatile int8_t x377 = INT8_MIN;
int64_t x378 = INT64_MAX;
volatile int32_t t92 = -952127182;
int8_t x381 = INT8_MIN;
int8_t x383 = INT8_MIN;
int16_t x389 = 1;
volatile uint32_t x404 = 29263891U;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x2 = 517771;
	int8_t x3 = INT8_MIN;
	static int32_t x4 = INT32_MAX;
	int32_t t0 = -130243;

	t0 = ((x1<=(x2^x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	int16_t x7 = 5;
	int64_t x8 = INT64_MIN;
	static volatile int64_t t1 = 98LL;

	t1 = ((x5<=(x6^x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t2 = -4073;

	t2 = ((x9<=(x10^x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	int8_t x14 = 1;
	static int64_t x16 = -3692LL;

	t3 = ((x13<=(x14^x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	static int64_t x18 = INT64_MIN;
	int64_t x19 = INT64_MIN;
	uint8_t x20 = 1U;
	static volatile int32_t t4 = -10;

	t4 = ((x17<=(x18^x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int64_t x22 = INT64_MIN;
	uint8_t x23 = 10U;
	static int32_t x24 = INT32_MAX;

	t5 = ((x21<=(x22^x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int64_t x25 = -1LL;
	uint32_t x26 = 17446249U;
	int32_t x27 = 105;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -92;

	t6 = ((x25<=(x26^x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	static int64_t x32 = -1LL;
	volatile int64_t t7 = -33210945585500LL;

	t7 = ((x29<=(x30^x31))/x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 0;
	int64_t x35 = INT64_MIN;
	int16_t x36 = INT16_MAX;

	t8 = ((x33<=(x34^x35))/x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = -6;
	volatile int8_t x39 = INT8_MIN;
	volatile int16_t x40 = 118;

	t9 = ((x37<=(x38^x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	uint32_t x42 = 3612U;
	static volatile int32_t t10 = -11146514;

	t10 = ((x41<=(x42^x43))/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MIN;
	uint8_t x47 = 2U;
	int64_t x48 = -70250583LL;
	volatile int64_t t11 = -914778763LL;

	t11 = ((x45<=(x46^x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = 172670730;
	static int32_t x51 = -213360620;
	uint16_t x52 = 29240U;

	t12 = ((x49<=(x50^x51))/x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 2;
	int8_t x54 = -1;
	uint8_t x56 = 87U;

	t13 = ((x53<=(x54^x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -6647104;
	int64_t x59 = -1LL;
	int64_t t14 = 15LL;

	t14 = ((x57<=(x58^x59))/x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 616485LLU;
	int16_t x62 = -1;
	static int64_t x64 = INT64_MIN;
	int64_t t15 = 1153167972145212LL;

	t15 = ((x61<=(x62^x63))/x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = 0;
	static uint8_t x66 = UINT8_MAX;
	int16_t x67 = INT16_MAX;
	int32_t t16 = 376;

	t16 = ((x65<=(x66^x67))/x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x72 = INT8_MIN;
	int32_t t17 = 199494755;

	t17 = ((x69<=(x70^x71))/x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x74 = -58457918414841683LL;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = 3519692LL;

	t18 = ((x73<=(x74^x75))/x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MIN;

	t19 = ((x77<=(x78^x79))/x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = INT32_MIN;
	volatile int16_t x83 = 8;
	int32_t x84 = -1;
	static int32_t t20 = 1503137;

	t20 = ((x81<=(x82^x83))/x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MIN;
	uint64_t x88 = 39124437LLU;

	t21 = ((x85<=(x86^x87))/x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	volatile int64_t x91 = INT64_MIN;
	volatile uint32_t x92 = 2782U;
	volatile uint32_t t22 = 195637345U;

	t22 = ((x89<=(x90^x91))/x92);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -2;
	volatile int8_t x94 = -1;
	int8_t x95 = -2;
	static int32_t t23 = 321360;

	t23 = ((x93<=(x94^x95))/x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = 76;
	volatile int32_t x99 = -1;
	volatile uint16_t x100 = 64U;

	t24 = ((x97<=(x98^x99))/x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x101 = 14U;
	uint32_t x102 = 33U;
	uint64_t x104 = UINT64_MAX;

	t25 = ((x101<=(x102^x103))/x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 122U;
	volatile uint8_t x108 = 51U;

	t26 = ((x105<=(x106^x107))/x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = -4431550472655277LL;
	volatile int64_t x111 = INT64_MAX;
	int32_t x112 = -1;

	t27 = ((x109<=(x110^x111))/x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = 7;
	volatile int16_t x114 = INT16_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	static int32_t t28 = 23;

	t28 = ((x113<=(x114^x115))/x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x117 = -1LL;
	uint64_t x118 = 29111LLU;
	static int16_t x119 = INT16_MIN;
	volatile uint64_t x120 = 197LLU;
	volatile uint64_t t29 = 32106286568LLU;

	t29 = ((x117<=(x118^x119))/x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 7U;
	static int32_t x127 = INT32_MAX;
	int64_t x128 = -1LL;
	int64_t t30 = 585940487116369LL;

	t30 = ((x125<=(x126^x127))/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = 16U;
	static int32_t x130 = INT32_MIN;
	int64_t x131 = 2150046033992136282LL;
	volatile int64_t t31 = -871339831472503197LL;

	t31 = ((x129<=(x130^x131))/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = UINT8_MAX;
	int16_t x134 = 90;
	uint32_t x135 = 51U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = -4;

	t32 = ((x133<=(x134^x135))/x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = INT16_MAX;
	static int64_t x138 = 41289889901481LL;
	static uint8_t x139 = 61U;
	int32_t t33 = -5249;

	t33 = ((x137<=(x138^x139))/x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	int16_t x143 = -1;
	static int32_t x144 = INT32_MIN;
	static volatile int32_t t34 = 9;

	t34 = ((x141<=(x142^x143))/x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = INT8_MIN;
	static int32_t x146 = 993744638;
	uint64_t x147 = 96903505505469LLU;
	static uint16_t x148 = 1602U;
	int32_t t35 = -3569587;

	t35 = ((x145<=(x146^x147))/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = 62U;
	int32_t t36 = -7861;

	t36 = ((x149<=(x150^x151))/x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = 1U;

	t37 = ((x153<=(x154^x155))/x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = -3;
	int16_t x158 = INT16_MIN;
	int64_t x160 = -1LL;
	static int64_t t38 = -460969017104605701LL;

	t38 = ((x157<=(x158^x159))/x160);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x162 = INT16_MAX;
	uint16_t x163 = 232U;
	int8_t x164 = -13;

	t39 = ((x161<=(x162^x163))/x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x165 = 7U;
	uint32_t x166 = 89100178U;
	int8_t x167 = INT8_MAX;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t40 = 1846751942890274380LLU;

	t40 = ((x165<=(x166^x167))/x168);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MAX;
	static int8_t x172 = -1;
	volatile int32_t t41 = -341315806;

	t41 = ((x169<=(x170^x171))/x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x173 = INT32_MIN;
	int16_t x174 = -74;
	int8_t x175 = 0;

	t42 = ((x173<=(x174^x175))/x176);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = -12791;
	static volatile uint64_t x178 = 0LLU;
	static int32_t x179 = INT32_MIN;
	static uint16_t x180 = 1U;

	t43 = ((x177<=(x178^x179))/x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x185 = 697U;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	int32_t t44 = -6918;

	t44 = ((x185<=(x186^x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	volatile int16_t x190 = -25;
	uint32_t x191 = 2U;
	int32_t t45 = 5;

	t45 = ((x189<=(x190^x191))/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -37643LL;
	volatile int64_t x195 = 28309124LL;
	uint32_t x196 = 30080899U;
	uint32_t t46 = 21185U;

	t46 = ((x193<=(x194^x195))/x196);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	uint8_t x198 = 5U;
	volatile int32_t t47 = -354347;

	t47 = ((x197<=(x198^x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	int8_t x202 = INT8_MAX;
	int8_t x203 = 44;
	int64_t x204 = INT64_MIN;

	t48 = ((x201<=(x202^x203))/x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -5306;
	int32_t x206 = -616;
	volatile uint16_t x207 = 8137U;
	volatile int32_t x208 = INT32_MAX;
	volatile int32_t t49 = -95;

	t49 = ((x205<=(x206^x207))/x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = 1;
	static uint32_t x211 = 527U;
	static int32_t t50 = 0;

	t50 = ((x209<=(x210^x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = INT32_MIN;
	static volatile uint64_t x214 = UINT64_MAX;
	int8_t x215 = INT8_MAX;
	int64_t x216 = INT64_MIN;

	t51 = ((x213<=(x214^x215))/x216);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x218 = 19U;

	t52 = ((x217<=(x218^x219))/x220);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = -1;
	static uint32_t x222 = 528U;
	int32_t x223 = -12175;
	volatile int8_t x224 = 23;

	t53 = ((x221<=(x222^x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = 0;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	volatile int8_t x228 = INT8_MAX;
	int32_t t54 = -7367184;

	t54 = ((x225<=(x226^x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x230 = INT8_MIN;
	uint64_t x231 = 5290147LLU;
	uint64_t x232 = 7751LLU;
	static volatile uint64_t t55 = 6955695356536LLU;

	t55 = ((x229<=(x230^x231))/x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x233 = 5969934533471LL;
	static volatile int16_t x235 = INT16_MAX;
	int8_t x236 = INT8_MAX;
	int32_t t56 = 1029;

	t56 = ((x233<=(x234^x235))/x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x238 = 22740968247LLU;
	uint64_t x239 = UINT64_MAX;
	volatile uint8_t x240 = 2U;
	volatile int32_t t57 = -86171807;

	t57 = ((x237<=(x238^x239))/x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x241 = 1U;
	int32_t x242 = INT32_MAX;
	int32_t x244 = INT32_MAX;

	t58 = ((x241<=(x242^x243))/x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x245 = INT32_MIN;
	static int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	int64_t x248 = -1LL;
	int64_t t59 = 0LL;

	t59 = ((x245<=(x246^x247))/x248);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x249 = 313U;
	uint8_t x251 = 2U;
	int64_t x252 = 9064907791250LL;
	volatile int64_t t60 = -1905LL;

	t60 = ((x249<=(x250^x251))/x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	int64_t x254 = -989969307009LL;
	static int32_t x255 = 10;
	int16_t x256 = -7;
	volatile int32_t t61 = -391;

	t61 = ((x253<=(x254^x255))/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = 29464705U;
	uint32_t x259 = 1U;
	int8_t x260 = -5;
	static int32_t t62 = -130645;

	t62 = ((x257<=(x258^x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 252LLU;
	int64_t x262 = INT64_MIN;
	static int64_t x263 = -1261968428822663LL;

	t63 = ((x261<=(x262^x263))/x264);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x266 = 0U;
	int32_t x267 = INT32_MAX;
	static volatile int32_t t64 = -555;

	t64 = ((x265<=(x266^x267))/x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x269 = INT32_MAX;
	int16_t x271 = INT16_MIN;
	static int32_t t65 = 53043;

	t65 = ((x269<=(x270^x271))/x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x273 = INT16_MAX;
	volatile uint32_t x274 = 2390U;
	int16_t x275 = -198;
	int8_t x276 = INT8_MIN;
	volatile int32_t t66 = -151545;

	t66 = ((x273<=(x274^x275))/x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x278 = INT8_MIN;
	uint64_t x279 = 5197LLU;
	static volatile uint64_t x280 = 180980LLU;

	t67 = ((x277<=(x278^x279))/x280);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -5;
	int32_t x282 = INT32_MAX;
	static int8_t x283 = 10;
	volatile uint32_t x284 = UINT32_MAX;

	t68 = ((x281<=(x282^x283))/x284);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x285 = 1U;
	static int16_t x287 = 1;
	static volatile int16_t x288 = 768;

	t69 = ((x285<=(x286^x287))/x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x289 = INT64_MAX;
	int64_t x290 = 17564532319504386LL;
	uint32_t x291 = UINT32_MAX;
	uint32_t x292 = 141614U;

	t70 = ((x289<=(x290^x291))/x292);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x293 = -1;
	static int16_t x295 = -8;
	static volatile int32_t t71 = 11433738;

	t71 = ((x293<=(x294^x295))/x296);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x297 = INT32_MIN;
	int64_t x298 = INT64_MIN;
	uint16_t x299 = UINT16_MAX;
	static int32_t t72 = -1970;

	t72 = ((x297<=(x298^x299))/x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 227;
	int64_t x302 = INT64_MIN;
	int64_t x303 = 102156359022LL;
	uint16_t x304 = UINT16_MAX;

	t73 = ((x301<=(x302^x303))/x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x305 = 63U;
	int8_t x306 = 0;
	static volatile int32_t x307 = INT32_MIN;
	volatile uint32_t t74 = 15852U;

	t74 = ((x305<=(x306^x307))/x308);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = 117893796547086LL;
	static uint32_t x310 = 5515291U;
	static uint32_t x311 = UINT32_MAX;
	int64_t x312 = -1LL;

	t75 = ((x309<=(x310^x311))/x312);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x313 = -1;
	uint64_t x314 = 3LLU;
	uint32_t x315 = UINT32_MAX;
	static int8_t x316 = -8;
	static volatile int32_t t76 = -13506;

	t76 = ((x313<=(x314^x315))/x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x318 = -7653761086199255LL;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MAX;

	t77 = ((x317<=(x318^x319))/x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x321 = -1;
	int8_t x322 = -4;
	static int64_t x323 = INT64_MIN;
	volatile uint32_t x324 = 214076905U;
	uint32_t t78 = 2U;

	t78 = ((x321<=(x322^x323))/x324);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x326 = 43568U;
	int8_t x327 = -54;
	uint64_t x328 = 2LLU;
	uint64_t t79 = 117195971917584LLU;

	t79 = ((x325<=(x326^x327))/x328);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -7;
	int32_t x331 = 58;
	static volatile int64_t x332 = 205666132356341LL;
	int64_t t80 = -21LL;

	t80 = ((x329<=(x330^x331))/x332);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x335 = 68U;
	volatile uint32_t x336 = 11027516U;

	t81 = ((x333<=(x334^x335))/x336);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = -1;
	int64_t x338 = 22341183210197476LL;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -1574;

	t82 = ((x337<=(x338^x339))/x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x342 = -1;
	volatile uint64_t x343 = 99428LLU;
	int8_t x344 = -43;

	t83 = ((x341<=(x342^x343))/x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x345 = INT64_MIN;
	static int32_t x347 = -1;
	volatile int64_t x348 = 150879929208143473LL;
	static int64_t t84 = 0LL;

	t84 = ((x345<=(x346^x347))/x348);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = 12;
	static int32_t x350 = INT32_MIN;
	int32_t x351 = 33632;
	int16_t x352 = -5632;
	volatile int32_t t85 = 1409;

	t85 = ((x349<=(x350^x351))/x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MIN;
	static volatile int8_t x355 = 5;
	int64_t x356 = -14LL;
	volatile int64_t t86 = 18007703427670LL;

	t86 = ((x353<=(x354^x355))/x356);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x358 = 22475U;
	uint16_t x359 = 11U;
	static int32_t x360 = -1676;

	t87 = ((x357<=(x358^x359))/x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x361 = 9U;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = 1;
	int8_t x364 = -3;

	t88 = ((x361<=(x362^x363))/x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x365 = 1560U;
	uint8_t x366 = 2U;
	volatile int8_t x367 = INT8_MIN;
	volatile int64_t x368 = INT64_MIN;
	int64_t t89 = -24024749643003LL;

	t89 = ((x365<=(x366^x367))/x368);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x370 = INT64_MAX;
	static int16_t x372 = -1;
	int32_t t90 = 21884;

	t90 = ((x369<=(x370^x371))/x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x373 = 254LL;
	int8_t x376 = -1;
	static int32_t t91 = 232437;

	t91 = ((x373<=(x374^x375))/x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x379 = 6U;
	int16_t x380 = INT16_MIN;

	t92 = ((x377<=(x378^x379))/x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x382 = UINT16_MAX;
	int64_t x384 = -1LL;
	int64_t t93 = -5904445LL;

	t93 = ((x381<=(x382^x383))/x384);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 3U;
	static int8_t x386 = INT8_MIN;
	uint16_t x387 = 5U;
	uint32_t x388 = 6238U;
	static uint32_t t94 = 2U;

	t94 = ((x385<=(x386^x387))/x388);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x390 = -16;
	int8_t x391 = -1;
	static volatile uint64_t x392 = UINT64_MAX;
	volatile uint64_t t95 = 5535LLU;

	t95 = ((x389<=(x390^x391))/x392);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = 1538;
	static int16_t x394 = 1;
	uint8_t x395 = 2U;
	volatile int8_t x396 = INT8_MIN;
	static volatile int32_t t96 = 5905;

	t96 = ((x393<=(x394^x395))/x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x397 = -1;
	int32_t x398 = INT32_MIN;
	int16_t x399 = INT16_MIN;
	static uint32_t x400 = 355U;
	static uint32_t t97 = 50458U;

	t97 = ((x397<=(x398^x399))/x400);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x401 = 245U;
	static uint16_t x402 = UINT16_MAX;
	volatile int32_t x403 = -3;
	uint32_t t98 = 116U;

	t98 = ((x401<=(x402^x403))/x404);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = -2;
	int32_t x406 = -1751;
	uint64_t x407 = 22415380067LLU;
	int16_t x408 = INT16_MIN;
	volatile int32_t t99 = 5050;

	t99 = ((x405<=(x406^x407))/x408);

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

