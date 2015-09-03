#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 4U;
uint64_t t1 = 350763LLU;
static int16_t x16 = INT16_MIN;
static volatile int32_t t3 = -5;
int16_t x23 = INT16_MIN;
int8_t x24 = 1;
volatile int32_t t5 = -359416027;
int64_t x25 = INT64_MAX;
int32_t t6 = 529325959;
volatile uint64_t x31 = 193582203664199LLU;
static uint16_t x35 = UINT16_MAX;
static volatile uint8_t x39 = 0U;
static volatile int64_t t9 = INT64_MAX;
int64_t x56 = INT64_MIN;
int8_t x57 = INT8_MIN;
int32_t x59 = 29593;
int64_t x64 = -1657226099LL;
volatile int8_t x70 = -1;
int8_t x73 = INT8_MIN;
int32_t t18 = 163;
int32_t x79 = -1;
int32_t t19 = 13;
uint8_t x83 = UINT8_MAX;
static int32_t x87 = 15479;
int32_t t21 = 3;
int16_t x93 = INT16_MIN;
volatile int8_t x104 = -1;
int32_t t25 = 16179;
int8_t x107 = INT8_MIN;
volatile uint64_t x116 = 3315LLU;
static uint64_t t28 = 5818292220749359LLU;
int8_t x118 = INT8_MAX;
volatile int64_t t29 = -59587291LL;
int16_t x123 = INT16_MIN;
int64_t x127 = -326044LL;
static volatile int64_t t34 = -1448908LL;
int16_t x142 = 200;
int16_t x145 = -812;
volatile int16_t x154 = -29;
int32_t x158 = INT32_MIN;
uint16_t x159 = 126U;
int32_t t39 = 31579;
int64_t x163 = -1LL;
volatile int8_t x176 = INT8_MIN;
uint32_t t44 = 862U;
int32_t x181 = -1;
volatile int16_t x182 = -1;
int16_t x183 = -1;
int16_t x187 = -1;
uint8_t x190 = UINT8_MAX;
static int8_t x203 = INT8_MAX;
int16_t x206 = INT16_MIN;
volatile int32_t x212 = INT32_MIN;
int8_t x215 = INT8_MIN;
int64_t t54 = 94995LL;
int64_t x221 = 11153755513LL;
int16_t x222 = INT16_MAX;
static int64_t t55 = 910135601572953LL;
volatile int8_t x226 = 0;
uint32_t t57 = UINT32_MAX;
int32_t x235 = 18;
static uint16_t x239 = 1910U;
int32_t x244 = -6891;
static int32_t x253 = -112;
static int8_t x254 = INT8_MIN;
static volatile uint32_t x261 = 12709U;
static uint16_t x263 = 30U;
int32_t x264 = INT32_MAX;
int16_t x265 = INT16_MIN;
volatile uint64_t t66 = 875LLU;
int32_t t67 = -3823;
int64_t x273 = 3LL;
volatile uint64_t x281 = 4160431316LLU;
uint16_t x288 = 11U;
volatile uint64_t x291 = 80735082988766LLU;
uint64_t t72 = 547001810095573980LLU;
static uint64_t x295 = 717237LLU;
volatile uint64_t t73 = 19428LLU;
int16_t x298 = INT16_MIN;
int32_t x301 = -1;
volatile int64_t t75 = -991LL;
int64_t x305 = INT64_MAX;
int16_t x308 = 2;
static volatile int32_t t76 = 24917692;
volatile int32_t t77 = -102669;
uint16_t x314 = 2879U;
uint8_t x316 = 0U;
volatile int32_t t78 = 357354;
int64_t x328 = INT64_MAX;
volatile int64_t t81 = INT64_MAX;
int16_t x333 = -1;
int32_t x335 = -23;
uint32_t x340 = 78853297U;
static int8_t x344 = 1;
int16_t x348 = INT16_MIN;
int64_t x355 = INT64_MAX;
static uint32_t x360 = 1U;
uint32_t x368 = 14U;
volatile uint32_t t91 = 10U;
int8_t x373 = INT8_MIN;
uint16_t x374 = UINT16_MAX;
volatile uint64_t t93 = 23526114956LLU;
static int32_t x382 = INT32_MAX;
int32_t x390 = -5347591;
volatile int32_t t98 = 1795909;
uint32_t x401 = UINT32_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x3 = 0;
	static volatile int32_t x4 = INT32_MIN;
	int32_t t0 = INT32_MIN;

	t0 = (((x1<x2)&x3)+x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int64_t x6 = INT64_MIN;
	uint64_t x7 = 32046645859874LLU;
	int8_t x8 = 0;

	t1 = (((x5<x6)&x7)+x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 517132U;
	int64_t x10 = 4960315946LL;
	int8_t x11 = INT8_MIN;
	static uint32_t x12 = UINT32_MAX;
	static uint32_t t2 = UINT32_MAX;

	t2 = (((x9<x10)&x11)+x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int8_t x14 = -12;
	int32_t x15 = INT32_MIN;

	t3 = (((x13<x14)&x15)+x16);

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1578910053207219462LL;
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MIN;
	int64_t x20 = -1LL;
	volatile int64_t t4 = -7027709LL;

	t4 = (((x17<x18)&x19)+x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -1;
	int16_t x22 = 1;

	t5 = (((x21<x22)&x23)+x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MAX;
	uint16_t x28 = 15U;

	t6 = (((x25<x26)&x27)+x28);

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1502129U;
	static int64_t x30 = 12157LL;
	int32_t x32 = -1;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x29<x30)&x31)+x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int8_t x34 = 1;
	int64_t x36 = INT64_MIN;
	int64_t t8 = -1383964LL;

	t8 = (((x33<x34)&x35)+x36);

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MAX;
	int64_t x40 = INT64_MAX;

	t9 = (((x37<x38)&x39)+x40);

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 1U;
	volatile int32_t x42 = -1;
	int16_t x43 = INT16_MAX;
	uint32_t x44 = UINT32_MAX;
	uint32_t t10 = 1981854455U;

	t10 = (((x41<x42)&x43)+x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int64_t x46 = INT64_MIN;
	int32_t x47 = 7;
	volatile uint16_t x48 = UINT16_MAX;
	int32_t t11 = 8059507;

	t11 = (((x45<x46)&x47)+x48);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -11;
	uint16_t x50 = 6U;
	uint64_t x51 = UINT64_MAX;
	volatile int32_t x52 = INT32_MIN;
	static uint64_t t12 = 9LLU;

	t12 = (((x49<x50)&x51)+x52);

	if (t12 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = UINT32_MAX;
	volatile uint32_t x54 = 395606U;
	uint32_t x55 = UINT32_MAX;
	int64_t t13 = INT64_MIN;

	t13 = (((x53<x54)&x55)+x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MAX;
	uint16_t x60 = UINT16_MAX;
	static int32_t t14 = -747520615;

	t14 = (((x57<x58)&x59)+x60);

	if (t14 != 65536) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 7856LLU;
	uint64_t x62 = 34446973764101925LLU;
	int16_t x63 = -170;
	int64_t t15 = -137030436LL;

	t15 = (((x61<x62)&x63)+x64);

	if (t15 != -1657226099LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = UINT32_MAX;
	int8_t x66 = INT8_MAX;
	int64_t x67 = -1LL;
	static int64_t x68 = INT64_MAX;
	volatile int64_t t16 = INT64_MAX;

	t16 = (((x65<x66)&x67)+x68);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	static volatile uint32_t x71 = UINT32_MAX;
	static uint8_t x72 = 12U;
	volatile uint32_t t17 = 1461U;

	t17 = (((x69<x70)&x71)+x72);

	if (t17 != 12U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x74 = 1;
	int32_t x75 = -1;
	volatile uint8_t x76 = 10U;

	t18 = (((x73<x74)&x75)+x76);

	if (t18 != 11) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 0;
	int16_t x78 = INT16_MIN;
	int8_t x80 = INT8_MIN;

	t19 = (((x77<x78)&x79)+x80);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = UINT64_MAX;
	static uint32_t x84 = UINT32_MAX;
	uint32_t t20 = 1013194U;

	t20 = (((x81<x82)&x83)+x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -799660346569725370LL;
	int16_t x86 = -12;
	int8_t x88 = -1;

	t21 = (((x85<x86)&x87)+x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	int8_t x90 = 28;
	uint64_t x91 = 1918LLU;
	int16_t x92 = -1;
	uint64_t t22 = UINT64_MAX;

	t22 = (((x89<x90)&x91)+x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = INT64_MIN;
	static volatile int16_t x95 = 0;
	static uint64_t x96 = 624501402LLU;
	volatile uint64_t t23 = 14255038538LLU;

	t23 = (((x93<x94)&x95)+x96);

	if (t23 != 624501402LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	uint8_t x98 = 118U;
	uint64_t x99 = UINT64_MAX;
	uint8_t x100 = UINT8_MAX;
	static volatile uint64_t t24 = 65077087247LLU;

	t24 = (((x97<x98)&x99)+x100);

	if (t24 != 256LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int8_t x102 = -1;
	int16_t x103 = -1;

	t25 = (((x101<x102)&x103)+x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -1LL;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = -13536;

	t26 = (((x105<x106)&x107)+x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	uint16_t x110 = 2297U;
	int16_t x111 = -195;
	volatile uint8_t x112 = 45U;
	static volatile int32_t t27 = 9;

	t27 = (((x109<x110)&x111)+x112);

	if (t27 != 45) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -13202;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MAX;

	t28 = (((x113<x114)&x115)+x116);

	if (t28 != 3316LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 1;
	int64_t x119 = INT64_MIN;
	volatile int16_t x120 = -1;

	t29 = (((x117<x118)&x119)+x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = -36;
	volatile uint8_t x122 = 1U;
	static int32_t x124 = -1;
	volatile int32_t t30 = -5751;

	t30 = (((x121<x122)&x123)+x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int16_t x126 = INT16_MIN;
	static int8_t x128 = INT8_MIN;
	int64_t t31 = 134378996LL;

	t31 = (((x125<x126)&x127)+x128);

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x129 = UINT32_MAX;
	static int32_t x130 = -19;
	static int8_t x131 = 2;
	int32_t x132 = -1;
	int32_t t32 = 1367;

	t32 = (((x129<x130)&x131)+x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	int32_t x134 = INT32_MAX;
	uint8_t x135 = 0U;
	uint64_t x136 = UINT64_MAX;
	uint64_t t33 = UINT64_MAX;

	t33 = (((x133<x134)&x135)+x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x137 = 1U;
	static volatile int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 92U;

	t34 = (((x137<x138)&x139)+x140);

	if (t34 != 92LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 485199404LLU;
	static int32_t x143 = INT32_MIN;
	int32_t x144 = -1;
	static volatile int32_t t35 = -1;

	t35 = (((x141<x142)&x143)+x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = 253976894478LL;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = INT32_MIN;
	int32_t t36 = 18083;

	t36 = (((x145<x146)&x147)+x148);

	if (t36 != -2147483647) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	uint32_t x151 = 265U;
	int16_t x152 = -1;
	uint32_t t37 = UINT32_MAX;

	t37 = (((x149<x150)&x151)+x152);

	if (t37 != UINT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 579167667232013770LLU;
	static int32_t x155 = 54;
	int8_t x156 = INT8_MAX;
	int32_t t38 = 517702;

	t38 = (((x153<x154)&x155)+x156);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x157 = 1U;
	uint16_t x160 = UINT16_MAX;

	t39 = (((x157<x158)&x159)+x160);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	uint16_t x164 = 25230U;
	int64_t t40 = 42221LL;

	t40 = (((x161<x162)&x163)+x164);

	if (t40 != 25230LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	uint16_t x166 = 31224U;
	static volatile int32_t x167 = -10;
	uint8_t x168 = 11U;
	int32_t t41 = 31953;

	t41 = (((x165<x166)&x167)+x168);

	if (t41 != 11) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = 324;
	volatile int16_t x171 = -1;
	int16_t x172 = -329;
	static int32_t t42 = 1754792;

	t42 = (((x169<x170)&x171)+x172);

	if (t42 != -329) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	int8_t x174 = -1;
	volatile int16_t x175 = INT16_MAX;
	volatile int32_t t43 = 4511;

	t43 = (((x173<x174)&x175)+x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int32_t x178 = -1;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 7699289U;

	t44 = (((x177<x178)&x179)+x180);

	if (t44 != 7699289U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -6;

	t45 = (((x181<x182)&x183)+x184);

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = 1319656393700LL;
	static int64_t x188 = -21257218LL;
	volatile int64_t t46 = -14LL;

	t46 = (((x185<x186)&x187)+x188);

	if (t46 != -21257217LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = INT32_MIN;
	static int32_t x191 = -438852199;
	uint8_t x192 = UINT8_MAX;
	volatile int32_t t47 = -87755053;

	t47 = (((x189<x190)&x191)+x192);

	if (t47 != 256) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	volatile int16_t x194 = -49;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -1LL;
	static volatile int64_t t48 = 151090086920505LL;

	t48 = (((x193<x194)&x195)+x196);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -3561381835307269LL;
	volatile int16_t x198 = INT16_MIN;
	uint32_t x199 = UINT32_MAX;
	static int8_t x200 = INT8_MIN;
	static uint32_t t49 = 115U;

	t49 = (((x197<x198)&x199)+x200);

	if (t49 != 4294967169U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x201 = 15U;
	int32_t x202 = 447;
	uint32_t x204 = 251909U;
	uint32_t t50 = 247010U;

	t50 = (((x201<x202)&x203)+x204);

	if (t50 != 251910U) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = INT32_MIN;
	static int8_t x207 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x205<x206)&x207)+x208);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = INT64_MAX;
	int16_t x210 = 6;
	static volatile int32_t x211 = INT32_MAX;
	int32_t t52 = INT32_MIN;

	t52 = (((x209<x210)&x211)+x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -3;
	int8_t x214 = -5;
	int8_t x216 = INT8_MIN;
	static volatile int32_t t53 = -253;

	t53 = (((x213<x214)&x215)+x216);

	if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 8120U;
	volatile int32_t x218 = INT32_MIN;
	static int8_t x219 = INT8_MIN;
	int64_t x220 = 14917705471086827LL;

	t54 = (((x217<x218)&x219)+x220);

	if (t54 != 14917705471086827LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = INT64_MAX;
	int32_t x224 = INT32_MAX;

	t55 = (((x221<x222)&x223)+x224);

	if (t55 != 2147483647LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x225 = INT64_MAX;
	volatile int8_t x227 = -1;
	int8_t x228 = -1;
	volatile int32_t t56 = -183788;

	t56 = (((x225<x226)&x227)+x228);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -655;
	volatile int32_t x230 = -1;
	int16_t x231 = INT16_MIN;
	uint32_t x232 = UINT32_MAX;

	t57 = (((x229<x230)&x231)+x232);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	uint32_t x234 = 38053U;
	volatile int8_t x236 = INT8_MIN;
	int32_t t58 = 283;

	t58 = (((x233<x234)&x235)+x236);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = INT32_MIN;
	static volatile int32_t x238 = INT32_MAX;
	static volatile int64_t x240 = 113209LL;
	int64_t t59 = -37785887LL;

	t59 = (((x237<x238)&x239)+x240);

	if (t59 != 113209LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -1LL;
	static uint64_t x242 = UINT64_MAX;
	volatile int32_t x243 = -184;
	static volatile int32_t t60 = -366598966;

	t60 = (((x241<x242)&x243)+x244);

	if (t60 != -6891) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 479;
	uint8_t x246 = 6U;
	int64_t x247 = -61373462696LL;
	volatile uint8_t x248 = 5U;
	int64_t t61 = -32385LL;

	t61 = (((x245<x246)&x247)+x248);

	if (t61 != 5LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = UINT16_MAX;
	uint32_t x250 = UINT32_MAX;
	static uint8_t x251 = 3U;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t62 = 4;

	t62 = (((x249<x250)&x251)+x252);

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x255 = -122564;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (((x253<x254)&x255)+x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MAX;
	static int16_t x259 = INT16_MIN;
	int32_t x260 = -3649;
	int32_t t64 = -475641;

	t64 = (((x257<x258)&x259)+x260);

	if (t64 != -3649) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MIN;
	volatile int32_t t65 = INT32_MAX;

	t65 = (((x261<x262)&x263)+x264);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = INT16_MIN;
	volatile int64_t x267 = 831480992529788134LL;
	volatile uint64_t x268 = 3199165732LLU;

	t66 = (((x265<x266)&x267)+x268);

	if (t66 != 3199165732LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1036442;
	int8_t x270 = 0;
	int8_t x271 = 1;
	int8_t x272 = -1;

	t67 = (((x269<x270)&x271)+x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x274 = 86U;
	static volatile int32_t x275 = 9;
	static uint64_t x276 = UINT64_MAX;
	static volatile uint64_t t68 = 2LLU;

	t68 = (((x273<x274)&x275)+x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = 5635648735LL;
	uint64_t x278 = 347981282906745LLU;
	volatile uint32_t x279 = UINT32_MAX;
	int8_t x280 = -3;
	uint32_t t69 = 10659772U;

	t69 = (((x277<x278)&x279)+x280);

	if (t69 != 4294967294U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x282 = 46802;
	uint64_t x283 = UINT64_MAX;
	uint8_t x284 = 8U;
	uint64_t t70 = 79654833333931LLU;

	t70 = (((x281<x282)&x283)+x284);

	if (t70 != 8LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 76U;
	int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MIN;
	volatile int32_t t71 = 303351;

	t71 = (((x285<x286)&x287)+x288);

	if (t71 != 11) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -5352LL;
	static int64_t x290 = INT64_MIN;
	int64_t x292 = INT64_MIN;

	t72 = (((x289<x290)&x291)+x292);

	if (t72 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MAX;
	uint16_t x296 = 15124U;

	t73 = (((x293<x294)&x295)+x296);

	if (t73 != 15125LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 0U;
	int64_t x299 = INT64_MIN;
	volatile int64_t x300 = -5009943177317LL;
	int64_t t74 = -168971801029628LL;

	t74 = (((x297<x298)&x299)+x300);

	if (t74 != -5009943177317LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MIN;
	static volatile int64_t x303 = 3LL;
	int8_t x304 = INT8_MIN;

	t75 = (((x301<x302)&x303)+x304);

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MAX;
	volatile uint8_t x307 = 33U;

	t76 = (((x305<x306)&x307)+x308);

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static uint8_t x310 = 0U;
	static int16_t x311 = -1;
	static int32_t x312 = 77;

	t77 = (((x309<x310)&x311)+x312);

	if (t77 != 77) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = 1;
	int32_t x315 = INT32_MIN;

	t78 = (((x313<x314)&x315)+x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = -1LL;
	int8_t x318 = INT8_MAX;
	int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MAX;
	volatile int32_t t79 = INT32_MAX;

	t79 = (((x317<x318)&x319)+x320);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	int8_t x322 = 7;
	int16_t x323 = INT16_MIN;
	int16_t x324 = -1;
	volatile int32_t t80 = 670723;

	t80 = (((x321<x322)&x323)+x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 945096892476528LLU;
	int8_t x326 = 0;
	int64_t x327 = -5635663625198151LL;

	t81 = (((x325<x326)&x327)+x328);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	volatile int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MAX;
	uint64_t x332 = UINT64_MAX;
	uint64_t t82 = UINT64_MAX;

	t82 = (((x329<x330)&x331)+x332);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t83 = 54463;

	t83 = (((x333<x334)&x335)+x336);

	if (t83 != 65535) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	int32_t x338 = -267255329;
	uint8_t x339 = UINT8_MAX;
	uint32_t t84 = 209218369U;

	t84 = (((x337<x338)&x339)+x340);

	if (t84 != 78853297U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -1;
	volatile int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MAX;
	volatile int32_t t85 = -89;

	t85 = (((x341<x342)&x343)+x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MAX;
	static int32_t t86 = 4834599;

	t86 = (((x345<x346)&x347)+x348);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 32U;
	int8_t x350 = -1;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = 22970U;
	volatile int32_t t87 = 216;

	t87 = (((x349<x350)&x351)+x352);

	if (t87 != 22970) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	uint32_t x354 = 17441764U;
	uint64_t x356 = UINT64_MAX;
	static volatile uint64_t t88 = UINT64_MAX;

	t88 = (((x353<x354)&x355)+x356);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int16_t x358 = -253;
	int16_t x359 = INT16_MIN;
	uint32_t t89 = 5U;

	t89 = (((x357<x358)&x359)+x360);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	static int64_t x362 = -1LL;
	volatile uint32_t x363 = 15803U;
	volatile int16_t x364 = INT16_MIN;
	volatile uint32_t t90 = 106U;

	t90 = (((x361<x362)&x363)+x364);

	if (t90 != 4294934529U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x365 = UINT8_MAX;
	static uint8_t x366 = 17U;
	int32_t x367 = -1;

	t91 = (((x365<x366)&x367)+x368);

	if (t91 != 14U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = -1;
	int16_t x370 = -1;
	volatile uint32_t x371 = UINT32_MAX;
	volatile int8_t x372 = -1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (((x369<x370)&x371)+x372);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = INT32_MIN;

	t93 = (((x373<x374)&x375)+x376);

	if (t93 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 67159685U;
	volatile int64_t x378 = INT64_MAX;
	uint16_t x379 = 169U;
	int8_t x380 = -1;
	int32_t t94 = 6;

	t94 = (((x377<x378)&x379)+x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = UINT8_MAX;
	volatile uint8_t x383 = 0U;
	volatile int16_t x384 = 0;
	int32_t t95 = 5230;

	t95 = (((x381<x382)&x383)+x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -1;
	int16_t x386 = INT16_MAX;
	static int32_t x387 = INT32_MAX;
	volatile uint32_t x388 = 27435339U;
	uint32_t t96 = 7148028U;

	t96 = (((x385<x386)&x387)+x388);

	if (t96 != 27435340U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = -1;
	int32_t x391 = -19;
	uint8_t x392 = 35U;
	int32_t t97 = 3426850;

	t97 = (((x389<x390)&x391)+x392);

	if (t97 != 35) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x393 = 65836779255317LLU;
	int8_t x394 = INT8_MIN;
	uint8_t x395 = UINT8_MAX;
	uint16_t x396 = 207U;

	t98 = (((x393<x394)&x395)+x396);

	if (t98 != 208) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x402 = INT64_MIN;
	static int32_t x403 = INT32_MAX;
	uint8_t x404 = UINT8_MAX;
	int32_t t99 = -12097;

	t99 = (((x401<x402)&x403)+x404);

	if (t99 != 255) { NG(); } else { ; }
	
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

