#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 28408U;
int32_t x5 = -36731;
uint8_t x6 = 43U;
uint8_t x15 = UINT8_MAX;
int16_t x19 = INT16_MIN;
int16_t x22 = INT16_MAX;
int64_t x26 = 3804385634LL;
int8_t x42 = 0;
int16_t x45 = -1;
int8_t x50 = INT8_MAX;
uint8_t x54 = 29U;
int16_t x58 = INT16_MIN;
int8_t x59 = -1;
int16_t x62 = INT16_MAX;
static int64_t t14 = -3741449804LL;
static volatile int8_t x71 = INT8_MIN;
volatile int16_t x73 = INT16_MIN;
static uint8_t x80 = 3U;
volatile int8_t x82 = INT8_MIN;
volatile uint64_t t20 = 2157LLU;
volatile uint32_t x89 = 101721280U;
int8_t x91 = INT8_MIN;
volatile int8_t x96 = INT8_MAX;
uint64_t x98 = UINT64_MAX;
int8_t x99 = INT8_MIN;
static int16_t x105 = -1;
uint16_t x107 = 5205U;
volatile int8_t x109 = INT8_MIN;
uint16_t x115 = UINT16_MAX;
int64_t x117 = INT64_MAX;
volatile uint16_t x122 = 0U;
int16_t x135 = -254;
static int32_t x140 = -7980;
int64_t x143 = -178915857150LL;
static volatile uint64_t x151 = 86910775746168LLU;
int16_t x158 = INT16_MAX;
uint8_t x159 = 5U;
int32_t t39 = 2243;
static volatile int32_t t40 = -9296872;
uint8_t x177 = 63U;
uint16_t x179 = UINT16_MAX;
volatile int32_t x180 = INT32_MIN;
int32_t t43 = INT32_MIN;
volatile int32_t x188 = INT32_MIN;
uint16_t x189 = 27334U;
static volatile int8_t x195 = INT8_MAX;
int32_t x202 = -1;
volatile uint32_t x209 = UINT32_MAX;
uint16_t x211 = UINT16_MAX;
volatile int32_t x213 = 257074319;
uint64_t x219 = 780840LLU;
int32_t t53 = 6;
static uint32_t x224 = 27U;
static uint32_t t54 = 18118922U;
int8_t x226 = -2;
int64_t x236 = INT64_MIN;
volatile int64_t t56 = INT64_MIN;
int16_t x237 = -71;
int16_t x239 = INT16_MAX;
uint64_t x243 = 942706184LLU;
int64_t t58 = -457545101083097770LL;
uint16_t x247 = UINT16_MAX;
volatile uint8_t x251 = 19U;
int32_t x257 = INT32_MIN;
int8_t x258 = -1;
uint16_t x264 = UINT16_MAX;
uint32_t x269 = 424U;
int64_t x279 = INT64_MIN;
static int8_t x282 = 3;
int64_t x299 = -1LL;
volatile int32_t t72 = 1006199193;
uint16_t x302 = 52U;
int32_t x304 = INT32_MIN;
int32_t t73 = INT32_MIN;
uint64_t x306 = 14796055238344LLU;
int64_t t74 = -2130LL;
int32_t t75 = -187;
uint32_t x328 = 6U;
int64_t x333 = -1LL;
static int32_t x335 = INT32_MAX;
int16_t x338 = INT16_MIN;
static int16_t x340 = -6;
volatile int32_t t82 = 67;
int64_t x345 = INT64_MIN;
static int16_t x346 = 3460;
volatile int32_t t83 = 7450;
int8_t x353 = -1;
int32_t x356 = -250;
static int32_t t85 = 55060715;
static volatile uint32_t t86 = 99U;
uint16_t x363 = UINT16_MAX;
int8_t x376 = 0;
volatile int32_t t90 = 0;
static int64_t x377 = -1LL;
int8_t x384 = 0;
volatile uint64_t x386 = 1114213170672276LLU;
int16_t x388 = INT16_MIN;
volatile uint16_t x390 = 304U;
static int32_t x391 = -99991;
volatile int16_t x395 = INT16_MIN;
static uint32_t x399 = 494U;
uint32_t x409 = 7U;


void f0(void) {
	int16_t x1 = -1;
	volatile int64_t x2 = INT64_MAX;
	static int8_t x3 = INT8_MAX;
	volatile uint32_t x4 = 1400567118U;

	t0 = ((x1<(x2/x3))|x4);

	if (t0 != 1400567119U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = 913540875904738LL;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -8976753;

	t1 = ((x5<(x6/x7))|x8);

	if (t1 != -127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint16_t x10 = 24U;
	int8_t x11 = INT8_MAX;
	int32_t x12 = -120;
	volatile int32_t t2 = -6212670;

	t2 = ((x9<(x10/x11))|x12);

	if (t2 != -119) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1548LL;
	volatile uint32_t x14 = UINT32_MAX;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = UINT64_MAX;

	t3 = ((x13<(x14/x15))|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int64_t x18 = INT64_MIN;
	uint64_t x20 = 3202145388LLU;
	volatile uint64_t t4 = 7899332LLU;

	t4 = ((x17<(x18/x19))|x20);

	if (t4 != 3202145388LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 2688U;
	int64_t x23 = INT64_MAX;
	static volatile int32_t x24 = INT32_MIN;
	volatile int32_t t5 = INT32_MIN;

	t5 = ((x21<(x22/x23))|x24);

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = UINT16_MAX;
	volatile uint32_t x27 = 501853U;
	static uint16_t x28 = 2U;
	volatile int32_t t6 = 1;

	t6 = ((x25<(x26/x27))|x28);

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MAX;
	static uint32_t x31 = 7124U;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -1;

	t7 = ((x29<(x30/x31))|x32);

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = -1;
	static int8_t x39 = -1;
	uint64_t x40 = UINT64_MAX;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x37<(x38/x39))|x40);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = INT16_MIN;
	volatile uint16_t x43 = 20079U;
	int8_t x44 = INT8_MIN;
	static int32_t t9 = 4;

	t9 = ((x41<(x42/x43))|x44);

	if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x46 = 5;
	int8_t x47 = INT8_MIN;
	uint32_t x48 = 209736073U;
	volatile uint32_t t10 = 11542U;

	t10 = ((x45<(x46/x47))|x48);

	if (t10 != 209736073U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1772;
	int32_t x51 = INT32_MIN;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t11 = -1;

	t11 = ((x49<(x50/x51))|x52);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 2U;
	uint32_t x55 = 97U;
	int8_t x56 = 0;
	volatile int32_t t12 = 44010;

	t12 = ((x53<(x54/x55))|x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	volatile int16_t x60 = -35;
	static int32_t t13 = 1427918;

	t13 = ((x57<(x58/x59))|x60);

	if (t13 != -35) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	static uint16_t x63 = UINT16_MAX;
	int64_t x64 = 31114458438LL;

	t14 = ((x61<(x62/x63))|x64);

	if (t14 != 31114458439LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	volatile uint8_t x66 = 1U;
	uint32_t x67 = 4448911U;
	uint16_t x68 = 2682U;
	volatile int32_t t15 = -289222;

	t15 = ((x65<(x66/x67))|x68);

	if (t15 != 2682) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x69 = 7206394940666213LL;
	int16_t x70 = 3;
	int8_t x72 = 62;
	volatile int32_t t16 = -6199962;

	t16 = ((x69<(x70/x71))|x72);

	if (t16 != 62) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x74 = UINT64_MAX;
	int64_t x75 = 719708565746142LL;
	static uint32_t x76 = UINT32_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = ((x73<(x74/x75))|x76);

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = -101672LL;
	uint8_t x78 = 1U;
	int8_t x79 = INT8_MAX;
	int32_t t18 = 0;

	t18 = ((x77<(x78/x79))|x80);

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = -1;
	int32_t t19 = 0;

	t19 = ((x81<(x82/x83))|x84);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	volatile int8_t x86 = INT8_MIN;
	volatile int64_t x87 = INT64_MIN;
	uint64_t x88 = 251983LLU;

	t20 = ((x85<(x86/x87))|x88);

	if (t20 != 251983LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = 1;
	int64_t x92 = -16614249565043214LL;
	static volatile int64_t t21 = 341947036531LL;

	t21 = ((x89<(x90/x91))|x92);

	if (t21 != -16614249565043214LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 5705686LL;
	int16_t x94 = INT16_MIN;
	static uint16_t x95 = 27062U;
	volatile int32_t t22 = 6905;

	t22 = ((x93<(x94/x95))|x96);

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -1;
	int64_t x100 = 25931293876939LL;
	int64_t t23 = -3LL;

	t23 = ((x97<(x98/x99))|x100);

	if (t23 != 25931293876939LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -1;
	volatile int32_t x102 = INT32_MIN;
	uint32_t x103 = 559189578U;
	uint8_t x104 = 25U;
	volatile int32_t t24 = 107;

	t24 = ((x101<(x102/x103))|x104);

	if (t24 != 25) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x106 = 494815281LLU;
	static volatile uint64_t x108 = UINT64_MAX;
	uint64_t t25 = UINT64_MAX;

	t25 = ((x105<(x106/x107))|x108);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = 1100U;
	uint32_t x111 = 12733040U;
	volatile int32_t x112 = -1;
	volatile int32_t t26 = 0;

	t26 = ((x109<(x110/x111))|x112);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 1130LL;
	volatile uint32_t x114 = 503997U;
	volatile int32_t x116 = 107796876;
	volatile int32_t t27 = -16;

	t27 = ((x113<(x114/x115))|x116);

	if (t27 != 107796876) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -1;
	static int64_t x119 = INT64_MIN;
	static int8_t x120 = -1;
	int32_t t28 = 32052;

	t28 = ((x117<(x118/x119))|x120);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x121 = INT8_MIN;
	int32_t x123 = -5588;
	int16_t x124 = INT16_MAX;
	static volatile int32_t t29 = -11380;

	t29 = ((x121<(x122/x123))|x124);

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = 0;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MIN;
	static int16_t x128 = INT16_MIN;
	int32_t t30 = -49024;

	t30 = ((x125<(x126/x127))|x128);

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MAX;
	uint16_t x130 = 14U;
	uint8_t x131 = UINT8_MAX;
	static int16_t x132 = INT16_MIN;
	int32_t t31 = -116589236;

	t31 = ((x129<(x130/x131))|x132);

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	volatile uint8_t x134 = 3U;
	int32_t x136 = INT32_MIN;
	volatile int32_t t32 = -39;

	t32 = ((x133<(x134/x135))|x136);

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 48U;
	uint16_t x138 = 168U;
	uint8_t x139 = UINT8_MAX;
	int32_t t33 = -341939638;

	t33 = ((x137<(x138/x139))|x140);

	if (t33 != -7980) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MAX;
	uint64_t x142 = UINT64_MAX;
	int16_t x144 = -1;
	int32_t t34 = 5;

	t34 = ((x141<(x142/x143))|x144);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x145 = 102U;
	int32_t x146 = -1;
	int64_t x147 = INT64_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x145<(x146/x147))|x148);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MAX;
	int64_t x152 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = ((x149<(x150/x151))|x152);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 1649U;
	int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t37 = -794;

	t37 = ((x153<(x154/x155))|x156);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t38 = -25185;

	t38 = ((x157<(x158/x159))|x160);

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	static uint16_t x162 = 5031U;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = INT16_MAX;

	t39 = ((x161<(x162/x163))|x164);

	if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = UINT32_MAX;
	volatile uint8_t x166 = 4U;
	uint16_t x167 = 1U;
	volatile int16_t x168 = 306;

	t40 = ((x165<(x166/x167))|x168);

	if (t40 != 306) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x169 = 1339129959U;
	int8_t x170 = -60;
	static volatile int64_t x171 = INT64_MAX;
	uint32_t x172 = 713508U;
	static volatile uint32_t t41 = 172U;

	t41 = ((x169<(x170/x171))|x172);

	if (t41 != 713508U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x173 = -1LL;
	uint64_t x174 = 53101077160772LLU;
	int16_t x175 = INT16_MIN;
	int64_t x176 = INT64_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = ((x173<(x174/x175))|x176);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x178 = -1LL;

	t43 = ((x177<(x178/x179))|x180);

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 817U;
	uint8_t x182 = 3U;
	int64_t x183 = INT64_MAX;
	static int64_t x184 = -1LL;
	volatile int64_t t44 = 1576600584070553844LL;

	t44 = ((x181<(x182/x183))|x184);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 1677;
	uint16_t x186 = 14U;
	static volatile int32_t x187 = INT32_MIN;
	volatile int32_t t45 = INT32_MIN;

	t45 = ((x185<(x186/x187))|x188);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x190 = 21173U;
	int16_t x191 = -1;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t46 = UINT64_MAX;

	t46 = ((x189<(x190/x191))|x192);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x193 = UINT64_MAX;
	int16_t x194 = 1818;
	int32_t x196 = INT32_MIN;
	static int32_t t47 = INT32_MIN;

	t47 = ((x193<(x194/x195))|x196);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = -23090379365LL;
	int8_t x198 = -1;
	int8_t x199 = -1;
	int8_t x200 = 1;
	static int32_t t48 = 977;

	t48 = ((x197<(x198/x199))|x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = INT32_MIN;
	int32_t x203 = 1;
	uint16_t x204 = 1U;
	volatile int32_t t49 = 731635852;

	t49 = ((x201<(x202/x203))|x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x205 = -1;
	int32_t x206 = 114;
	int8_t x207 = -1;
	volatile int16_t x208 = INT16_MIN;
	int32_t t50 = 809704426;

	t50 = ((x205<(x206/x207))|x208);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x210 = -504;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t51 = INT32_MIN;

	t51 = ((x209<(x210/x211))|x212);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x214 = INT16_MIN;
	static int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t52 = INT32_MAX;

	t52 = ((x213<(x214/x215))|x216);

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 0U;
	static uint64_t x218 = UINT64_MAX;
	int8_t x220 = -27;

	t53 = ((x217<(x218/x219))|x220);

	if (t53 != -27) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x221 = 87703798;
	volatile uint64_t x222 = 15490251877LLU;
	static volatile uint8_t x223 = 55U;

	t54 = ((x221<(x222/x223))|x224);

	if (t54 != 27U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x225 = UINT32_MAX;
	static int8_t x227 = INT8_MIN;
	volatile int64_t x228 = INT64_MIN;
	int64_t t55 = INT64_MIN;

	t55 = ((x225<(x226/x227))|x228);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x233 = INT16_MIN;
	static uint32_t x234 = 479387957U;
	uint64_t x235 = UINT64_MAX;

	t56 = ((x233<(x234/x235))|x236);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x238 = -5;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = ((x237<(x238/x239))|x240);

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x241 = INT16_MIN;
	volatile int32_t x242 = 229354;
	int64_t x244 = -75536148363LL;

	t58 = ((x241<(x242/x243))|x244);

	if (t58 != -75536148363LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = 8LLU;
	volatile int32_t x246 = -1;
	int8_t x248 = -13;
	static volatile int32_t t59 = -394916204;

	t59 = ((x245<(x246/x247))|x248);

	if (t59 != -13) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = 91659403;
	int32_t x250 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t60 = 2647;

	t60 = ((x249<(x250/x251))|x252);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x253 = 31LL;
	volatile int8_t x254 = INT8_MIN;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	int32_t t61 = -1017;

	t61 = ((x253<(x254/x255))|x256);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x259 = -1LL;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t62 = 36;

	t62 = ((x257<(x258/x259))|x260);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -9;
	int64_t x262 = 31855720760697276LL;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t63 = -8388;

	t63 = ((x261<(x262/x263))|x264);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = INT16_MIN;
	int8_t x266 = 1;
	static int64_t x267 = -1LL;
	uint16_t x268 = UINT16_MAX;
	int32_t t64 = 3899;

	t64 = ((x265<(x266/x267))|x268);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x270 = 211U;
	int16_t x271 = 14;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t65 = 2;

	t65 = ((x269<(x270/x271))|x272);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1;
	uint16_t x274 = UINT16_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	static int32_t x276 = INT32_MIN;
	volatile int32_t t66 = 58851;

	t66 = ((x273<(x274/x275))|x276);

	if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = -1LL;
	int8_t x278 = 13;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t67 = 103;

	t67 = ((x277<(x278/x279))|x280);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x281 = 0U;
	volatile uint32_t x283 = UINT32_MAX;
	int32_t x284 = -172490416;
	int32_t t68 = -11808;

	t68 = ((x281<(x282/x283))|x284);

	if (t68 != -172490416) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x285 = 40LLU;
	uint64_t x286 = 112524880454LLU;
	volatile int64_t x287 = 7094916030109LL;
	static uint8_t x288 = 66U;
	int32_t t69 = 482;

	t69 = ((x285<(x286/x287))|x288);

	if (t69 != 66) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = 2996185474LLU;
	static uint16_t x290 = UINT16_MAX;
	uint64_t x291 = 2418717645LLU;
	volatile int32_t x292 = INT32_MAX;
	int32_t t70 = INT32_MAX;

	t70 = ((x289<(x290/x291))|x292);

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x293 = 119;
	int64_t x294 = -80091995369LL;
	int16_t x295 = INT16_MIN;
	uint64_t x296 = 13506244440LLU;
	volatile uint64_t t71 = 42998842LLU;

	t71 = ((x293<(x294/x295))|x296);

	if (t71 != 13506244441LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x297 = 6U;
	static int64_t x298 = INT64_MAX;
	static int16_t x300 = 3;

	t72 = ((x297<(x298/x299))|x300);

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;
	volatile uint32_t x303 = 2U;

	t73 = ((x301<(x302/x303))|x304);

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = INT64_MAX;
	uint8_t x307 = 71U;
	static int64_t x308 = 0LL;

	t74 = ((x305<(x306/x307))|x308);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	static int16_t x310 = INT16_MIN;
	static uint64_t x311 = 397701LLU;
	volatile int8_t x312 = INT8_MIN;

	t75 = ((x309<(x310/x311))|x312);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = 15;
	int8_t x314 = INT8_MIN;
	static int64_t x315 = -1LL;
	int32_t x316 = -1;
	volatile int32_t t76 = 18999134;

	t76 = ((x313<(x314/x315))|x316);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x321 = 36U;
	int16_t x322 = 1;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = -338;
	static volatile int32_t t77 = -442977951;

	t77 = ((x321<(x322/x323))|x324);

	if (t77 != -338) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x325 = -1;
	uint32_t x326 = 25U;
	int16_t x327 = -1;
	static uint32_t t78 = 519213189U;

	t78 = ((x325<(x326/x327))|x328);

	if (t78 != 6U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x329 = 58U;
	int64_t x330 = -41144004194384726LL;
	static volatile int64_t x331 = 980876096653LL;
	static int64_t x332 = -1LL;
	volatile int64_t t79 = -553LL;

	t79 = ((x329<(x330/x331))|x332);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x334 = -7;
	volatile int32_t x336 = -5763448;
	static int32_t t80 = -7678118;

	t80 = ((x333<(x334/x335))|x336);

	if (t80 != -5763447) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = INT16_MIN;
	static volatile uint16_t x339 = 267U;
	static volatile int32_t t81 = -346807;

	t81 = ((x337<(x338/x339))|x340);

	if (t81 != -5) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int8_t x342 = 10;
	static int16_t x343 = -1;
	static uint16_t x344 = UINT16_MAX;

	t82 = ((x341<(x342/x343))|x344);

	if (t82 != 65535) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x347 = 86U;
	uint16_t x348 = 1897U;

	t83 = ((x345<(x346/x347))|x348);

	if (t83 != 1897) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x349 = 62;
	uint16_t x350 = 72U;
	uint64_t x351 = 1300122783150833751LLU;
	uint64_t x352 = UINT64_MAX;
	uint64_t t84 = UINT64_MAX;

	t84 = ((x349<(x350/x351))|x352);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x354 = INT32_MIN;
	volatile int16_t x355 = INT16_MIN;

	t85 = ((x353<(x354/x355))|x356);

	if (t85 != -249) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -1;
	int32_t x358 = 430332674;
	int64_t x359 = 415636230157693LL;
	static uint32_t x360 = 5336780U;

	t86 = ((x357<(x358/x359))|x360);

	if (t86 != 5336781U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = 7U;
	int16_t x362 = INT16_MIN;
	static uint16_t x364 = 1U;
	volatile int32_t t87 = 48195;

	t87 = ((x361<(x362/x363))|x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MIN;
	static uint8_t x366 = 7U;
	static int32_t x367 = -23144;
	static uint32_t x368 = UINT32_MAX;
	uint32_t t88 = UINT32_MAX;

	t88 = ((x365<(x366/x367))|x368);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	volatile uint16_t x370 = UINT16_MAX;
	int32_t x371 = INT32_MIN;
	static int8_t x372 = 1;
	volatile int32_t t89 = 8269838;

	t89 = ((x369<(x370/x371))|x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x373 = INT16_MIN;
	volatile int32_t x374 = 8103;
	volatile int16_t x375 = 1;

	t90 = ((x373<(x374/x375))|x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x378 = 10U;
	volatile int32_t x379 = -15;
	uint32_t x380 = UINT32_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = ((x377<(x378/x379))|x380);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x381 = 10;
	int8_t x382 = -1;
	uint32_t x383 = 11237U;
	volatile int32_t t92 = -4050;

	t92 = ((x381<(x382/x383))|x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = 34;
	uint32_t x387 = 292U;
	volatile int32_t t93 = -492296;

	t93 = ((x385<(x386/x387))|x388);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MIN;
	int16_t x392 = -2;
	volatile int32_t t94 = -1481140;

	t94 = ((x389<(x390/x391))|x392);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = -1;
	int32_t x394 = 50;
	static int32_t x396 = INT32_MIN;
	volatile int32_t t95 = 1;

	t95 = ((x393<(x394/x395))|x396);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	uint64_t x398 = 73289LLU;
	int32_t x400 = INT32_MIN;
	volatile int32_t t96 = INT32_MIN;

	t96 = ((x397<(x398/x399))|x400);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x401 = -29;
	uint8_t x402 = 15U;
	int32_t x403 = INT32_MIN;
	uint16_t x404 = 0U;
	int32_t t97 = -206522473;

	t97 = ((x401<(x402/x403))|x404);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = 808025LL;
	int16_t x406 = 0;
	int64_t x407 = 4455LL;
	static int64_t x408 = 12052LL;
	int64_t t98 = -2LL;

	t98 = ((x405<(x406/x407))|x408);

	if (t98 != 12052LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x410 = 1688LLU;
	int8_t x411 = -1;
	volatile int16_t x412 = INT16_MIN;
	static int32_t t99 = 0;

	t99 = ((x409<(x410/x411))|x412);

	if (t99 != -32768) { NG(); } else { ; }
	
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

