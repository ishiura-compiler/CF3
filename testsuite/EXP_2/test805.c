#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = 22;
volatile int8_t x10 = -1;
uint64_t x11 = 856556030LLU;
static volatile int16_t x19 = INT16_MIN;
int32_t t4 = -4657;
int8_t x21 = -1;
volatile int8_t x25 = -1;
static int8_t x34 = INT8_MIN;
int32_t t8 = 65048;
uint64_t x42 = UINT64_MAX;
uint8_t x43 = 14U;
volatile int32_t t10 = -46;
static volatile int16_t x54 = -1;
int32_t t13 = INT32_MAX;
volatile int8_t x57 = -1;
static int64_t x58 = -2192431731731013LL;
volatile int32_t x60 = INT32_MAX;
int16_t x64 = INT16_MIN;
volatile int32_t t15 = 1;
uint8_t x69 = 0U;
static volatile uint64_t x75 = UINT64_MAX;
static uint8_t x80 = UINT8_MAX;
static int32_t t19 = -5;
int16_t x82 = INT16_MAX;
int32_t x85 = INT32_MIN;
volatile int32_t t22 = -185759469;
int16_t x93 = INT16_MIN;
int8_t x105 = INT8_MIN;
int32_t t26 = -71;
volatile uint8_t x114 = 3U;
static volatile int16_t x115 = -239;
static int32_t t28 = 12791;
int64_t x117 = INT64_MAX;
uint64_t x119 = 53305578818391645LLU;
int64_t x123 = -1289156106884LL;
int16_t x125 = -6;
uint64_t x128 = 3373LLU;
volatile uint32_t x131 = 1U;
static uint32_t x141 = UINT32_MAX;
int8_t x143 = INT8_MIN;
int64_t x144 = INT64_MIN;
int32_t x149 = 923;
int16_t x160 = INT16_MIN;
static int32_t t39 = -143162570;
uint32_t x164 = 232U;
uint64_t x176 = UINT64_MAX;
int32_t x179 = -5;
uint32_t t46 = UINT32_MAX;
int16_t x192 = 7303;
volatile int32_t t49 = -2;
int64_t x208 = INT64_MIN;
volatile int16_t x212 = -214;
int8_t x213 = 0;
static int32_t x218 = -1;
int16_t x219 = -47;
uint32_t x220 = UINT32_MAX;
volatile uint32_t t54 = UINT32_MAX;
static int16_t x221 = INT16_MAX;
static int32_t x224 = INT32_MIN;
volatile uint16_t x227 = UINT16_MAX;
int64_t x229 = -1LL;
uint8_t x232 = UINT8_MAX;
int8_t x236 = INT8_MAX;
int32_t x245 = INT32_MAX;
int16_t x253 = -1;
volatile uint8_t x258 = UINT8_MAX;
volatile int32_t t64 = -2344633;
uint32_t x273 = 286199063U;
uint8_t x278 = 81U;
volatile int32_t t69 = 7136;
int64_t x281 = INT64_MIN;
volatile int8_t x282 = -54;
uint8_t x283 = UINT8_MAX;
volatile int64_t x289 = -1LL;
static int16_t x290 = 89;
uint64_t x296 = 2LLU;
int32_t x299 = -7;
static int32_t x302 = INT32_MIN;
volatile int32_t x305 = -1;
volatile int16_t x317 = -1;
volatile int32_t t79 = -18898318;
volatile int8_t x321 = INT8_MIN;
uint64_t x323 = 14802607LLU;
volatile int32_t t83 = 890345935;
int32_t x345 = -1;
int8_t x350 = INT8_MIN;
int8_t x354 = INT8_MAX;
int64_t x356 = 4130096069034975687LL;
volatile int16_t x364 = INT16_MIN;
volatile int32_t x365 = -352675999;
uint32_t x369 = 25U;
static int32_t x371 = -1;
volatile int32_t x379 = INT32_MIN;
int8_t x380 = INT8_MIN;
static int16_t x388 = INT16_MIN;
uint64_t t97 = UINT64_MAX;
int16_t x393 = INT16_MAX;
int64_t x398 = INT64_MIN;
int8_t x400 = -1;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	uint8_t x2 = 6U;
	static uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = ((x1<=(x2%x3))|x4);

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static int16_t x6 = -1;
	uint64_t x7 = 5361330LLU;
	int32_t t1 = -22066;

	t1 = ((x5<=(x6%x7))|x8);

	if (t1 != 22) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = 2030LL;
	int32_t x12 = INT32_MAX;
	static int32_t t2 = INT32_MAX;

	t2 = ((x9<=(x10%x11))|x12);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 75U;
	static int16_t x14 = INT16_MIN;
	uint8_t x15 = 1U;
	int32_t x16 = 4789764;
	static volatile int32_t t3 = -1952;

	t3 = ((x13<=(x14%x15))|x16);

	if (t3 != 4789764) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -108;
	volatile uint16_t x18 = 116U;
	int8_t x20 = INT8_MAX;

	t4 = ((x17<=(x18%x19))|x20);

	if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -1LL;
	int64_t t5 = 4583675LL;

	t5 = ((x21<=(x22%x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -15769040;
	int8_t x27 = INT8_MIN;
	volatile int16_t x28 = 4710;
	volatile int32_t t6 = -239;

	t6 = ((x25<=(x26%x27))|x28);

	if (t6 != 4710) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -4235572;
	uint16_t x30 = 102U;
	static uint8_t x31 = 20U;
	volatile int32_t x32 = INT32_MAX;
	volatile int32_t t7 = INT32_MAX;

	t7 = ((x29<=(x30%x31))|x32);

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MAX;
	static int8_t x35 = 14;
	static int8_t x36 = INT8_MIN;

	t8 = ((x33<=(x34%x35))|x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 3076U;
	volatile int32_t x38 = INT32_MIN;
	int8_t x39 = -1;
	int32_t x40 = -1;
	static int32_t t9 = 248255;

	t9 = ((x37<=(x38%x39))|x40);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	static int32_t x44 = -1;

	t10 = ((x41<=(x42%x43))|x44);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	static uint16_t x47 = UINT16_MAX;
	int8_t x48 = -1;
	volatile int32_t t11 = 639919978;

	t11 = ((x45<=(x46%x47))|x48);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 31U;
	int32_t x50 = -7606;
	int8_t x51 = -1;
	static uint64_t x52 = 60542LLU;
	uint64_t t12 = 584446606598LLU;

	t12 = ((x49<=(x50%x51))|x52);

	if (t12 != 60542LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -2;
	int16_t x55 = INT16_MIN;
	volatile int32_t x56 = INT32_MAX;

	t13 = ((x53<=(x54%x55))|x56);

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x59 = -18642;
	int32_t t14 = INT32_MAX;

	t14 = ((x57<=(x58%x59))|x60);

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	volatile int16_t x62 = -1;
	int8_t x63 = INT8_MIN;

	t15 = ((x61<=(x62%x63))|x64);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	uint32_t x66 = UINT32_MAX;
	int32_t x67 = INT32_MIN;
	int16_t x68 = 433;
	int32_t t16 = -264905;

	t16 = ((x65<=(x66%x67))|x68);

	if (t16 != 433) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x70 = 1098180448675LLU;
	int64_t x71 = 157LL;
	volatile uint32_t x72 = 90060U;
	volatile uint32_t t17 = 6196U;

	t17 = ((x69<=(x70%x71))|x72);

	if (t17 != 90061U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	volatile uint64_t x74 = 237675123674687LLU;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = ((x73<=(x74%x75))|x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = 450578355321LL;
	volatile int8_t x78 = INT8_MIN;
	int64_t x79 = -1LL;

	t19 = ((x77<=(x78%x79))|x80);

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 106;
	static int64_t x83 = INT64_MIN;
	int64_t x84 = INT64_MIN;
	static int64_t t20 = -416LL;

	t20 = ((x81<=(x82%x83))|x84);

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = INT32_MAX;
	int64_t x87 = -29071LL;
	static uint64_t x88 = 7971553LLU;
	volatile uint64_t t21 = 5284688322606165LLU;

	t21 = ((x85<=(x86%x87))|x88);

	if (t21 != 7971553LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = INT32_MAX;
	static volatile int32_t x91 = -41234;
	static int8_t x92 = -1;

	t22 = ((x89<=(x90%x91))|x92);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 5072U;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t23 = -625287;

	t23 = ((x93<=(x94%x95))|x96);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 1U;
	volatile int16_t x98 = -10;
	static int8_t x99 = INT8_MIN;
	static volatile uint64_t x100 = 46027188007335LLU;
	uint64_t t24 = 28LLU;

	t24 = ((x97<=(x98%x99))|x100);

	if (t24 != 46027188007335LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MIN;
	volatile int8_t x102 = -1;
	int16_t x103 = INT16_MAX;
	int16_t x104 = 10854;
	static volatile int32_t t25 = -1;

	t25 = ((x101<=(x102%x103))|x104);

	if (t25 != 10855) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = -20576215;
	static int64_t x107 = INT64_MIN;
	static int16_t x108 = INT16_MIN;

	t26 = ((x105<=(x106%x107))|x108);

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static uint64_t x110 = 1740603218380582946LLU;
	volatile uint8_t x111 = UINT8_MAX;
	int8_t x112 = INT8_MIN;
	static int32_t t27 = 11537147;

	t27 = ((x109<=(x110%x111))|x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 6LLU;
	int8_t x116 = -46;

	t28 = ((x113<=(x114%x115))|x116);

	if (t28 != -46) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MAX;
	int32_t x120 = INT32_MAX;
	volatile int32_t t29 = INT32_MAX;

	t29 = ((x117<=(x118%x119))|x120);

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x121 = 1U;
	uint64_t x122 = 0LLU;
	uint8_t x124 = UINT8_MAX;
	static int32_t t30 = -16544;

	t30 = ((x121<=(x122%x123))|x124);

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x126 = -1;
	int32_t x127 = INT32_MAX;
	static uint64_t t31 = 30999485624828904LLU;

	t31 = ((x125<=(x126%x127))|x128);

	if (t31 != 3373LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 34U;
	int64_t x130 = INT64_MIN;
	int16_t x132 = -1;
	volatile int32_t t32 = 249628;

	t32 = ((x129<=(x130%x131))|x132);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 3U;
	volatile int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MIN;
	int64_t t33 = INT64_MIN;

	t33 = ((x133<=(x134%x135))|x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	int16_t x138 = -1;
	int32_t x139 = INT32_MAX;
	int32_t x140 = -1;
	static int32_t t34 = -405748;

	t34 = ((x137<=(x138%x139))|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MAX;
	static volatile int64_t t35 = INT64_MIN;

	t35 = ((x141<=(x142%x143))|x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = 118663249LL;
	int16_t x146 = INT16_MIN;
	static int64_t x147 = 11775452LL;
	uint16_t x148 = UINT16_MAX;
	static int32_t t36 = -113;

	t36 = ((x145<=(x146%x147))|x148);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x150 = -14985;
	uint8_t x151 = 7U;
	int8_t x152 = -1;
	volatile int32_t t37 = 289;

	t37 = ((x149<=(x150%x151))|x152);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -1LL;
	uint8_t x154 = 0U;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -19052;
	int32_t t38 = 103837838;

	t38 = ((x153<=(x154%x155))|x156);

	if (t38 != -19051) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	static uint8_t x158 = 6U;
	int32_t x159 = -40686589;

	t39 = ((x157<=(x158%x159))|x160);

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	static int32_t x162 = INT32_MIN;
	int8_t x163 = -1;
	volatile uint32_t t40 = 202738U;

	t40 = ((x161<=(x162%x163))|x164);

	if (t40 != 232U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -51104034LL;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -10;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 1;

	t41 = ((x165<=(x166%x167))|x168);

	if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -17LL;
	uint8_t x170 = UINT8_MAX;
	int64_t x171 = INT64_MIN;
	int64_t x172 = -4LL;
	static volatile int64_t t42 = -35037786371806664LL;

	t42 = ((x169<=(x170%x171))|x172);

	if (t42 != -3LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 1;
	volatile int64_t x174 = INT64_MAX;
	int64_t x175 = INT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x173<=(x174%x175))|x176);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = -1;
	volatile uint64_t x178 = UINT64_MAX;
	static int64_t x180 = 1431360956LL;
	int64_t t44 = -4LL;

	t44 = ((x177<=(x178%x179))|x180);

	if (t44 != 1431360956LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MAX;
	volatile int64_t x182 = -1LL;
	uint16_t x183 = 329U;
	int16_t x184 = -63;
	static int32_t t45 = -69;

	t45 = ((x181<=(x182%x183))|x184);

	if (t45 != -63) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 145721146057653LLU;
	static uint16_t x186 = 28U;
	volatile uint64_t x187 = 136851170706403946LLU;
	uint32_t x188 = UINT32_MAX;

	t46 = ((x185<=(x186%x187))|x188);

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = 283;
	int32_t x191 = -1;
	int32_t t47 = -487;

	t47 = ((x189<=(x190%x191))|x192);

	if (t47 != 7303) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MIN;
	uint64_t x194 = UINT64_MAX;
	static uint32_t x195 = 268424820U;
	int8_t x196 = INT8_MIN;
	static volatile int32_t t48 = -331978105;

	t48 = ((x193<=(x194%x195))|x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MAX;
	int8_t x198 = INT8_MIN;
	int16_t x199 = 7077;
	volatile uint8_t x200 = 4U;

	t49 = ((x197<=(x198%x199))|x200);

	if (t49 != 4) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	static int64_t x202 = INT64_MIN;
	uint16_t x203 = 1651U;
	static int64_t x204 = INT64_MIN;
	static volatile int64_t t50 = INT64_MIN;

	t50 = ((x201<=(x202%x203))|x204);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MAX;
	static uint8_t x206 = UINT8_MAX;
	volatile int32_t x207 = INT32_MAX;
	int64_t t51 = INT64_MIN;

	t51 = ((x205<=(x206%x207))|x208);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = 5U;
	static uint8_t x210 = 4U;
	static uint64_t x211 = 13628LLU;
	int32_t t52 = 1932113;

	t52 = ((x209<=(x210%x211))|x212);

	if (t52 != -214) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	volatile uint32_t x216 = 11409U;
	static uint32_t t53 = 201999598U;

	t53 = ((x213<=(x214%x215))|x216);

	if (t53 != 11409U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = 16328288U;

	t54 = ((x217<=(x218%x219))|x220);

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x222 = INT8_MIN;
	static volatile uint32_t x223 = 105177973U;
	volatile int32_t t55 = -89768;

	t55 = ((x221<=(x222%x223))|x224);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = 207;
	uint8_t x226 = UINT8_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 4;

	t56 = ((x225<=(x226%x227))|x228);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = INT64_MIN;
	volatile int32_t x231 = 132469651;
	static volatile int32_t t57 = 2552;

	t57 = ((x229<=(x230%x231))|x232);

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 30866U;
	int64_t x234 = -1LL;
	int8_t x235 = 2;
	volatile int32_t t58 = 2068911;

	t58 = ((x233<=(x234%x235))|x236);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x237 = -1;
	int16_t x238 = -1;
	volatile uint64_t x239 = UINT64_MAX;
	int16_t x240 = 230;
	volatile int32_t t59 = 571140;

	t59 = ((x237<=(x238%x239))|x240);

	if (t59 != 230) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x241 = -10737298469019LL;
	static uint16_t x242 = 23759U;
	int64_t x243 = -3713773994LL;
	volatile uint8_t x244 = UINT8_MAX;
	int32_t t60 = 20796;

	t60 = ((x241<=(x242%x243))|x244);

	if (t60 != 255) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x246 = INT8_MIN;
	volatile uint16_t x247 = 13U;
	uint8_t x248 = 12U;
	volatile int32_t t61 = 492755;

	t61 = ((x245<=(x246%x247))|x248);

	if (t61 != 12) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	static int32_t x250 = INT32_MIN;
	volatile int64_t x251 = INT64_MIN;
	int8_t x252 = 0;
	volatile int32_t t62 = -1833;

	t62 = ((x249<=(x250%x251))|x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = 438470476535508LLU;
	uint32_t x255 = 280U;
	static uint64_t x256 = UINT64_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x253<=(x254%x255))|x256);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x259 = INT16_MIN;
	int32_t x260 = 0;

	t64 = ((x257<=(x258%x259))|x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 2U;
	int8_t x263 = -43;
	int8_t x264 = -13;
	volatile int32_t t65 = -781;

	t65 = ((x261<=(x262%x263))|x264);

	if (t65 != -13) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 32804245814LLU;
	uint8_t x266 = 68U;
	volatile int32_t x267 = 1894993;
	uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x265<=(x266%x267))|x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 12U;
	volatile int64_t x270 = -1LL;
	uint64_t x271 = 10796LLU;
	uint64_t x272 = 15LLU;
	volatile uint64_t t67 = 10LLU;

	t67 = ((x269<=(x270%x271))|x272);

	if (t67 != 15LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x274 = 1761U;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 48U;
	int32_t t68 = -9431;

	t68 = ((x273<=(x274%x275))|x276);

	if (t68 != 48) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 32U;
	int16_t x279 = INT16_MAX;
	int8_t x280 = 0;

	t69 = ((x277<=(x278%x279))|x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x284 = -638;
	volatile int32_t t70 = -49283;

	t70 = ((x281<=(x282%x283))|x284);

	if (t70 != -637) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint32_t x286 = 2111365302U;
	int16_t x287 = INT16_MAX;
	int64_t x288 = 1724687LL;
	int64_t t71 = -81LL;

	t71 = ((x285<=(x286%x287))|x288);

	if (t71 != 1724687LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x291 = INT8_MIN;
	static volatile int8_t x292 = INT8_MIN;
	int32_t t72 = 675;

	t72 = ((x289<=(x290%x291))|x292);

	if (t72 != -127) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1;
	uint16_t x294 = 38U;
	int64_t x295 = -5183316169LL;
	uint64_t t73 = 3394LLU;

	t73 = ((x293<=(x294%x295))|x296);

	if (t73 != 3LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	uint64_t x298 = 1323126259029356LLU;
	int64_t x300 = 24537LL;
	static int64_t t74 = -18941931275LL;

	t74 = ((x297<=(x298%x299))|x300);

	if (t74 != 24537LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	int32_t x303 = INT32_MAX;
	uint16_t x304 = 1569U;
	int32_t t75 = 244644;

	t75 = ((x301<=(x302%x303))|x304);

	if (t75 != 1569) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	uint16_t x307 = 3U;
	int16_t x308 = INT16_MAX;
	static int32_t t76 = 6046872;

	t76 = ((x305<=(x306%x307))|x308);

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	uint8_t x310 = 1U;
	int16_t x311 = -1;
	int32_t x312 = INT32_MAX;
	volatile int32_t t77 = INT32_MAX;

	t77 = ((x309<=(x310%x311))|x312);

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	uint32_t x314 = 36061616U;
	static int8_t x315 = -1;
	static int64_t x316 = INT64_MAX;
	int64_t t78 = INT64_MAX;

	t78 = ((x313<=(x314%x315))|x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x318 = -1;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = INT8_MIN;

	t79 = ((x317<=(x318%x319))|x320);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x322 = 1U;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = INT64_MIN;

	t80 = ((x321<=(x322%x323))|x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x325 = UINT64_MAX;
	static int8_t x326 = INT8_MIN;
	static int16_t x327 = INT16_MIN;
	static uint32_t x328 = 1U;
	volatile uint32_t t81 = 34563U;

	t81 = ((x325<=(x326%x327))|x328);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint8_t x330 = UINT8_MAX;
	int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -1448971;

	t82 = ((x329<=(x330%x331))|x332);

	if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	static int8_t x334 = -1;
	static uint8_t x335 = UINT8_MAX;
	int8_t x336 = INT8_MAX;

	t83 = ((x333<=(x334%x335))|x336);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x337 = 8351U;
	int16_t x338 = 12;
	int8_t x339 = -1;
	int64_t x340 = -1119467204359439LL;
	volatile int64_t t84 = 4325845111531963LL;

	t84 = ((x337<=(x338%x339))|x340);

	if (t84 != -1119467204359439LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x341 = UINT8_MAX;
	static volatile uint32_t x342 = 3069389U;
	int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MIN;
	int32_t t85 = 65;

	t85 = ((x341<=(x342%x343))|x344);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = INT64_MAX;
	int16_t x348 = INT16_MIN;
	static int32_t t86 = 2;

	t86 = ((x345<=(x346%x347))|x348);

	if (t86 != -32767) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int8_t x351 = -1;
	volatile int8_t x352 = 1;
	static int32_t t87 = 14;

	t87 = ((x349<=(x350%x351))|x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = UINT64_MAX;
	uint16_t x355 = UINT16_MAX;
	int64_t t88 = -791622471LL;

	t88 = ((x353<=(x354%x355))|x356);

	if (t88 != 4130096069034975687LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 0U;
	uint8_t x358 = UINT8_MAX;
	volatile int64_t x359 = 4LL;
	int16_t x360 = -1;
	volatile int32_t t89 = 41661;

	t89 = ((x357<=(x358%x359))|x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1;
	int8_t x362 = -39;
	uint64_t x363 = 61LLU;
	volatile int32_t t90 = 0;

	t90 = ((x361<=(x362%x363))|x364);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x366 = -647;
	uint16_t x367 = UINT16_MAX;
	uint8_t x368 = 56U;
	static int32_t t91 = 13;

	t91 = ((x365<=(x366%x367))|x368);

	if (t91 != 57) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = -1;
	int8_t x372 = -44;
	int32_t t92 = 657032;

	t92 = ((x369<=(x370%x371))|x372);

	if (t92 != -44) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -5840;
	int64_t x374 = INT64_MAX;
	static int8_t x375 = 2;
	uint64_t x376 = 41885820488LLU;
	uint64_t t93 = 950588164120082LLU;

	t93 = ((x373<=(x374%x375))|x376);

	if (t93 != 41885820489LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 30LLU;
	int32_t x378 = INT32_MIN;
	static int32_t t94 = -2265131;

	t94 = ((x377<=(x378%x379))|x380);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	uint8_t x383 = 2U;
	volatile int64_t x384 = -1LL;
	static volatile int64_t t95 = -606698235246LL;

	t95 = ((x381<=(x382%x383))|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile int32_t x386 = INT32_MAX;
	uint8_t x387 = UINT8_MAX;
	int32_t t96 = -56383575;

	t96 = ((x385<=(x386%x387))|x388);

	if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -219386;
	int16_t x390 = INT16_MIN;
	volatile uint64_t x391 = 123745627152181LLU;
	volatile uint64_t x392 = UINT64_MAX;

	t97 = ((x389<=(x390%x391))|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	volatile int64_t x395 = -140241320728956913LL;
	int8_t x396 = -1;
	int32_t t98 = -6;

	t98 = ((x393<=(x394%x395))|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MAX;
	int64_t x399 = -1LL;
	int32_t t99 = 13519;

	t99 = ((x397<=(x398%x399))|x400);

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

