#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = -96152;
uint8_t x8 = 1U;
volatile int16_t x13 = INT16_MIN;
int64_t x21 = -1LL;
int16_t x22 = -1;
int32_t x23 = -6;
int32_t t4 = 6;
int32_t x31 = INT32_MIN;
int16_t x32 = 1665;
int32_t t5 = 21761367;
static int32_t x33 = -1;
static int64_t x42 = INT64_MIN;
static int64_t x46 = 944LL;
static int64_t x51 = -272937733792LL;
volatile int32_t t10 = 12885;
int32_t x53 = -1;
uint8_t x54 = 13U;
volatile int32_t t11 = 5333266;
uint32_t x57 = UINT32_MAX;
volatile int32_t t13 = -1;
int32_t t14 = -13;
volatile int8_t x80 = INT8_MIN;
uint64_t x93 = 93459135586255345LLU;
int64_t x97 = INT64_MIN;
uint64_t x101 = 7LLU;
uint8_t x104 = 5U;
static volatile int32_t t22 = -623;
int16_t x105 = INT16_MIN;
int32_t t23 = 0;
volatile int8_t x109 = 1;
static int64_t x111 = INT64_MIN;
int8_t x114 = -60;
volatile uint64_t x115 = UINT64_MAX;
int16_t x117 = -8548;
volatile int16_t x123 = INT16_MIN;
int32_t t28 = 71;
int32_t x129 = INT32_MAX;
uint8_t x134 = 0U;
int16_t x135 = INT16_MAX;
int32_t x137 = INT32_MAX;
static int8_t x140 = INT8_MIN;
uint16_t x141 = UINT16_MAX;
static uint32_t x148 = UINT32_MAX;
volatile int32_t t33 = -84500207;
uint32_t x153 = 1139318859U;
int16_t x157 = 285;
uint64_t x158 = 3LLU;
int64_t x162 = 1LL;
static int64_t x183 = -1767908365795LL;
uint64_t x185 = UINT64_MAX;
volatile int64_t x188 = 16047LL;
volatile int32_t t42 = -1837;
uint8_t x190 = UINT8_MAX;
static int64_t x191 = INT64_MIN;
uint32_t x192 = UINT32_MAX;
uint32_t x196 = 387U;
int32_t x200 = INT32_MIN;
volatile int32_t x208 = INT32_MIN;
int32_t x216 = 1690740;
int8_t x232 = INT8_MIN;
uint8_t x235 = UINT8_MAX;
int32_t t52 = -319669994;
uint8_t x240 = 57U;
int32_t t53 = 74665;
int32_t t58 = 65203;
volatile int32_t x261 = INT32_MIN;
int64_t x264 = -1048068750837LL;
int16_t x267 = 6344;
int32_t t60 = -1;
int64_t x280 = INT64_MIN;
int8_t x286 = -1;
volatile int32_t t63 = -491;
int16_t x293 = -8324;
uint64_t x298 = 369289LLU;
static uint32_t x306 = 0U;
uint32_t x314 = 110770U;
volatile int8_t x315 = -1;
int16_t x316 = INT16_MAX;
static int32_t x337 = INT32_MIN;
int16_t x340 = 7;
int64_t x342 = INT64_MIN;
int64_t x354 = -1LL;
uint64_t x355 = 63350867422327LLU;
int16_t x359 = -1;
static int32_t x360 = 21;
static int8_t x361 = 1;
uint64_t x364 = 12LLU;
uint16_t x365 = 0U;
int8_t x373 = INT8_MIN;
int16_t x375 = 300;
int32_t t80 = -13299288;
uint8_t x380 = 106U;
int16_t x381 = INT16_MIN;
uint64_t x389 = 7459LLU;
static volatile int16_t x392 = INT16_MIN;
static uint64_t x393 = 24551464391996LLU;
int32_t x400 = 17;
volatile int32_t x407 = 324985941;
volatile int8_t x410 = -1;
uint16_t x412 = 2435U;
int16_t x418 = -1;
uint16_t x423 = UINT16_MAX;
static int8_t x424 = 15;
int16_t x426 = 1639;
static uint32_t x436 = UINT32_MAX;
uint16_t x439 = UINT16_MAX;
int32_t x444 = -1;
static volatile int32_t t96 = 10730;
static volatile int16_t x446 = 3769;
uint8_t x448 = UINT8_MAX;
int16_t x450 = INT16_MAX;
static volatile int64_t x457 = -22887192881141LL;
int8_t x458 = 1;
uint8_t x459 = 0U;
volatile int64_t x460 = INT64_MAX;


void f0(void) {
	volatile int64_t x5 = -387892856LL;
	static int64_t x7 = INT64_MAX;
	volatile int32_t t0 = -92;

	t0 = ((x5+x6)<=(x7%x8));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = 11;
	static uint32_t x10 = 4114189U;
	uint8_t x11 = 3U;
	uint64_t x12 = UINT64_MAX;
	volatile int32_t t1 = 3748792;

	t1 = ((x9+x10)<=(x11%x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x14 = INT8_MIN;
	int64_t x15 = 51616437003638LL;
	int32_t x16 = -1;
	volatile int32_t t2 = 645;

	t2 = ((x13+x14)<=(x15%x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = INT8_MIN;
	volatile int8_t x18 = 0;
	uint8_t x19 = 5U;
	volatile int8_t x20 = INT8_MAX;
	int32_t t3 = -94661;

	t3 = ((x17+x18)<=(x19%x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x24 = INT16_MIN;

	t4 = ((x21+x22)<=(x23%x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = 2;
	int64_t x30 = -226262617305LL;

	t5 = ((x29+x30)<=(x31%x32));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x34 = -1;
	volatile int8_t x35 = -1;
	int32_t x36 = INT32_MIN;
	int32_t t6 = -6303;

	t6 = ((x33+x34)<=(x35%x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	uint16_t x38 = 7298U;
	volatile int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	volatile int32_t t7 = 3;

	t7 = ((x37+x38)<=(x39%x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = UINT32_MAX;
	uint64_t x43 = 559877345468010LLU;
	int8_t x44 = 13;
	static volatile int32_t t8 = -27027;

	t8 = ((x41+x42)<=(x43%x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x45 = -1;
	static uint16_t x47 = 13417U;
	static int64_t x48 = -52LL;
	int32_t t9 = -180313721;

	t9 = ((x45+x46)<=(x47%x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 110295078725544609LLU;
	static uint64_t x50 = 6103768168080186LLU;
	uint8_t x52 = UINT8_MAX;

	t10 = ((x49+x50)<=(x51%x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x55 = UINT8_MAX;
	uint32_t x56 = 129U;

	t11 = ((x53+x54)<=(x55%x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x58 = 3409017294433LLU;
	uint16_t x59 = 1622U;
	static int8_t x60 = 47;
	volatile int32_t t12 = -1;

	t12 = ((x57+x58)<=(x59%x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = 393661LL;
	volatile uint16_t x66 = UINT16_MAX;
	static uint16_t x67 = 0U;
	int16_t x68 = INT16_MIN;

	t13 = ((x65+x66)<=(x67%x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x69 = 22829U;
	uint16_t x70 = 266U;
	uint64_t x71 = 99817956LLU;
	int16_t x72 = -14;

	t14 = ((x69+x70)<=(x71%x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	int8_t x74 = INT8_MIN;
	int16_t x75 = 118;
	volatile int8_t x76 = -1;
	int32_t t15 = 0;

	t15 = ((x73+x74)<=(x75%x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x77 = 10U;
	uint64_t x78 = 11054004224LLU;
	int8_t x79 = INT8_MIN;
	int32_t t16 = 56343948;

	t16 = ((x77+x78)<=(x79%x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MAX;
	int64_t x82 = INT64_MIN;
	int64_t x83 = 211625406734359LL;
	volatile int16_t x84 = 323;
	volatile int32_t t17 = 209548;

	t17 = ((x81+x82)<=(x83%x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	static int32_t x86 = -1;
	static int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t18 = 1235;

	t18 = ((x85+x86)<=(x87%x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	static volatile int32_t x90 = INT32_MAX;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = UINT16_MAX;
	int32_t t19 = -2;

	t19 = ((x89+x90)<=(x91%x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x94 = 13689U;
	int32_t x95 = INT32_MAX;
	int64_t x96 = INT64_MIN;
	static int32_t t20 = 386686251;

	t20 = ((x93+x94)<=(x95%x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x98 = UINT64_MAX;
	uint64_t x99 = 49158499LLU;
	volatile int64_t x100 = INT64_MIN;
	volatile int32_t t21 = -59023;

	t21 = ((x97+x98)<=(x99%x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x102 = INT64_MIN;
	int16_t x103 = 3424;

	t22 = ((x101+x102)<=(x103%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x106 = 0;
	int16_t x107 = INT16_MIN;
	int16_t x108 = INT16_MIN;

	t23 = ((x105+x106)<=(x107%x108));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = INT32_MIN;
	static volatile uint8_t x112 = UINT8_MAX;
	static volatile int32_t t24 = 492746;

	t24 = ((x109+x110)<=(x111%x112));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint64_t x116 = 5LLU;
	volatile int32_t t25 = -1917657;

	t25 = ((x113+x114)<=(x115%x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x118 = 0U;
	uint32_t x119 = 1225U;
	int8_t x120 = INT8_MAX;
	int32_t t26 = -3576058;

	t26 = ((x117+x118)<=(x119%x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = 998709602275362LL;
	int64_t x122 = INT64_MIN;
	volatile int8_t x124 = INT8_MAX;
	static volatile int32_t t27 = -2536;

	t27 = ((x121+x122)<=(x123%x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x125 = 1;
	int32_t x126 = -1;
	static int64_t x127 = INT64_MAX;
	uint32_t x128 = UINT32_MAX;

	t28 = ((x125+x126)<=(x127%x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x130 = 43LLU;
	static int8_t x131 = 1;
	static int32_t x132 = INT32_MIN;
	volatile int32_t t29 = 2;

	t29 = ((x129+x130)<=(x131%x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	uint32_t x136 = 37413795U;
	static int32_t t30 = -1;

	t30 = ((x133+x134)<=(x135%x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x138 = INT32_MIN;
	volatile uint16_t x139 = 1U;
	int32_t t31 = 600;

	t31 = ((x137+x138)<=(x139%x140));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = INT16_MIN;
	static uint16_t x143 = 52U;
	int8_t x144 = 9;
	static volatile int32_t t32 = 15173;

	t32 = ((x141+x142)<=(x143%x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = -323;
	int8_t x146 = -1;
	uint32_t x147 = 13U;

	t33 = ((x145+x146)<=(x147%x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x154 = -1;
	int32_t x155 = 1846166;
	volatile int16_t x156 = INT16_MAX;
	int32_t t34 = 439769638;

	t34 = ((x153+x154)<=(x155%x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x159 = UINT32_MAX;
	uint32_t x160 = UINT32_MAX;
	int32_t t35 = 9094;

	t35 = ((x157+x158)<=(x159%x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	static volatile int16_t x163 = INT16_MAX;
	static uint8_t x164 = UINT8_MAX;
	int32_t t36 = 161747200;

	t36 = ((x161+x162)<=(x163%x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x165 = 0;
	static volatile uint32_t x166 = 4563U;
	int8_t x167 = -1;
	static uint8_t x168 = UINT8_MAX;
	int32_t t37 = -77;

	t37 = ((x165+x166)<=(x167%x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x170 = 92953U;
	int32_t x171 = INT32_MAX;
	int64_t x172 = 1813267957477LL;
	volatile int32_t t38 = 11725;

	t38 = ((x169+x170)<=(x171%x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = 7;
	int16_t x175 = -1;
	int8_t x176 = INT8_MAX;
	static volatile int32_t t39 = -170533;

	t39 = ((x173+x174)<=(x175%x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -3980;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MIN;
	int32_t x180 = -1;
	int32_t t40 = -4677;

	t40 = ((x177+x178)<=(x179%x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MIN;
	int64_t x184 = -1LL;
	int32_t t41 = -4759352;

	t41 = ((x181+x182)<=(x183%x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x186 = 227LLU;
	static uint32_t x187 = UINT32_MAX;

	t42 = ((x185+x186)<=(x187%x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x189 = INT16_MIN;
	volatile int32_t t43 = -1;

	t43 = ((x189+x190)<=(x191%x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x193 = UINT64_MAX;
	int8_t x194 = -5;
	int8_t x195 = INT8_MIN;
	int32_t t44 = 92357047;

	t44 = ((x193+x194)<=(x195%x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -1LL;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MAX;
	int32_t t45 = -66;

	t45 = ((x197+x198)<=(x199%x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	static int8_t x202 = -7;
	int8_t x203 = 3;
	int16_t x204 = 1;
	int32_t t46 = 1791146;

	t46 = ((x201+x202)<=(x203%x204));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x205 = INT64_MAX;
	uint64_t x206 = 190669997116376LLU;
	uint16_t x207 = UINT16_MAX;
	int32_t t47 = -3647098;

	t47 = ((x205+x206)<=(x207%x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x213 = INT8_MAX;
	static int64_t x214 = INT64_MIN;
	volatile uint8_t x215 = UINT8_MAX;
	int32_t t48 = 84;

	t48 = ((x213+x214)<=(x215%x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = 530133U;
	int16_t x218 = INT16_MIN;
	int64_t x219 = INT64_MAX;
	volatile int8_t x220 = 2;
	static volatile int32_t t49 = -23;

	t49 = ((x217+x218)<=(x219%x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 1155866471U;
	int8_t x226 = INT8_MIN;
	static uint8_t x227 = 44U;
	uint32_t x228 = 1U;
	volatile int32_t t50 = -3;

	t50 = ((x225+x226)<=(x227%x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x229 = -1;
	int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	volatile int32_t t51 = -857584707;

	t51 = ((x229+x230)<=(x231%x232));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x233 = -2;
	uint64_t x234 = UINT64_MAX;
	int16_t x236 = INT16_MIN;

	t52 = ((x233+x234)<=(x235%x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x237 = INT8_MIN;
	uint16_t x238 = 1161U;
	uint8_t x239 = UINT8_MAX;

	t53 = ((x237+x238)<=(x239%x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x241 = 1796U;
	volatile int64_t x242 = 2884773133LL;
	int8_t x243 = 1;
	int16_t x244 = INT16_MAX;
	volatile int32_t t54 = 125;

	t54 = ((x241+x242)<=(x243%x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x245 = 47272533;
	static int32_t x246 = 51264;
	int16_t x247 = INT16_MIN;
	int8_t x248 = -6;
	volatile int32_t t55 = 933;

	t55 = ((x245+x246)<=(x247%x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 97844062613865LLU;
	volatile int16_t x251 = -80;
	static int16_t x252 = -1;
	static int32_t t56 = -8701171;

	t56 = ((x249+x250)<=(x251%x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x253 = 310759800U;
	int8_t x254 = 0;
	uint64_t x255 = 5177937879459754LLU;
	int16_t x256 = -1;
	volatile int32_t t57 = 312454734;

	t57 = ((x253+x254)<=(x255%x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x257 = 218553;
	uint32_t x258 = UINT32_MAX;
	int8_t x259 = -1;
	int16_t x260 = 772;

	t58 = ((x257+x258)<=(x259%x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MAX;
	static volatile int32_t t59 = -16406200;

	t59 = ((x261+x262)<=(x263%x264));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x265 = 24138398306982737LLU;
	static int32_t x266 = 0;
	int16_t x268 = INT16_MIN;

	t60 = ((x265+x266)<=(x267%x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x277 = 884292679U;
	volatile int16_t x278 = INT16_MIN;
	static uint8_t x279 = 3U;
	int32_t t61 = 50659199;

	t61 = ((x277+x278)<=(x279%x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x281 = UINT32_MAX;
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	static int32_t x284 = INT32_MAX;
	int32_t t62 = -657762118;

	t62 = ((x281+x282)<=(x283%x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x285 = INT8_MIN;
	int32_t x287 = -1;
	uint32_t x288 = 478827U;

	t63 = ((x285+x286)<=(x287%x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x289 = 3;
	uint32_t x290 = 22547U;
	uint8_t x291 = 24U;
	int32_t x292 = -1;
	int32_t t64 = -1;

	t64 = ((x289+x290)<=(x291%x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x294 = 7U;
	uint8_t x295 = 12U;
	int16_t x296 = 133;
	static int32_t t65 = 12520;

	t65 = ((x293+x294)<=(x295%x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x297 = 58U;
	uint64_t x299 = 143084021LLU;
	int8_t x300 = -1;
	volatile int32_t t66 = 623539630;

	t66 = ((x297+x298)<=(x299%x300));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x305 = -1;
	uint16_t x307 = 1844U;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t67 = -1;

	t67 = ((x305+x306)<=(x307%x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = 1U;
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = -52093;
	volatile int32_t x312 = -1;
	volatile int32_t t68 = 0;

	t68 = ((x309+x310)<=(x311%x312));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x313 = UINT32_MAX;
	static volatile int32_t t69 = 1;

	t69 = ((x313+x314)<=(x315%x316));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x317 = 20U;
	volatile uint8_t x318 = 4U;
	uint32_t x319 = 1U;
	static uint8_t x320 = 2U;
	int32_t t70 = 1;

	t70 = ((x317+x318)<=(x319%x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MIN;
	static volatile int8_t x326 = 60;
	int32_t x327 = 73947658;
	int32_t x328 = INT32_MIN;
	volatile int32_t t71 = -1;

	t71 = ((x325+x326)<=(x327%x328));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	volatile int32_t t72 = 47831;

	t72 = ((x337+x338)<=(x339%x340));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x341 = 251679025850054LLU;
	int16_t x343 = INT16_MIN;
	int8_t x344 = -1;
	volatile int32_t t73 = 6539402;

	t73 = ((x341+x342)<=(x343%x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x345 = UINT16_MAX;
	int16_t x346 = 20;
	uint64_t x347 = 253378575LLU;
	int8_t x348 = 1;
	int32_t t74 = -15;

	t74 = ((x345+x346)<=(x347%x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x353 = 0U;
	static uint8_t x356 = UINT8_MAX;
	int32_t t75 = 3660871;

	t75 = ((x353+x354)<=(x355%x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x357 = 21U;
	uint32_t x358 = 906125721U;
	volatile int32_t t76 = -25;

	t76 = ((x357+x358)<=(x359%x360));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x362 = 3174LL;
	volatile int64_t x363 = INT64_MIN;
	volatile int32_t t77 = 3;

	t77 = ((x361+x362)<=(x363%x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x366 = 3;
	static int32_t x367 = 59269381;
	static int64_t x368 = INT64_MIN;
	volatile int32_t t78 = 31368675;

	t78 = ((x365+x366)<=(x367%x368));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = -9912269;
	static int32_t x370 = -1;
	uint8_t x371 = 0U;
	int64_t x372 = 352LL;
	volatile int32_t t79 = -120;

	t79 = ((x369+x370)<=(x371%x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x374 = INT16_MAX;
	uint8_t x376 = 26U;

	t80 = ((x373+x374)<=(x375%x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x377 = 2U;
	int16_t x378 = INT16_MIN;
	int8_t x379 = -1;
	volatile int32_t t81 = 59314514;

	t81 = ((x377+x378)<=(x379%x380));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x382 = 15295647892LLU;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 336U;
	volatile int32_t t82 = -125924298;

	t82 = ((x381+x382)<=(x383%x384));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x385 = 200308475414197LLU;
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 978U;
	int8_t x388 = INT8_MIN;
	int32_t t83 = 383901965;

	t83 = ((x385+x386)<=(x387%x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x390 = -9461757LL;
	int32_t x391 = INT32_MIN;
	volatile int32_t t84 = 1898901;

	t84 = ((x389+x390)<=(x391%x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x394 = -408420343895297LL;
	int32_t x395 = INT32_MAX;
	uint64_t x396 = 11878299LLU;
	int32_t t85 = 10328739;

	t85 = ((x393+x394)<=(x395%x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x397 = 0;
	int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	volatile int32_t t86 = -42868;

	t86 = ((x397+x398)<=(x399%x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x401 = 477200256663305649LLU;
	int64_t x402 = INT64_MAX;
	static uint8_t x403 = UINT8_MAX;
	int64_t x404 = 54272575LL;
	volatile int32_t t87 = -1;

	t87 = ((x401+x402)<=(x403%x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x405 = INT64_MAX;
	volatile int64_t x406 = -1LL;
	uint8_t x408 = UINT8_MAX;
	int32_t t88 = -696;

	t88 = ((x405+x406)<=(x407%x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x409 = UINT16_MAX;
	static volatile uint64_t x411 = UINT64_MAX;
	int32_t t89 = -41;

	t89 = ((x409+x410)<=(x411%x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = 1476;
	int8_t x414 = 1;
	volatile int8_t x415 = 12;
	uint64_t x416 = 415LLU;
	volatile int32_t t90 = -1;

	t90 = ((x413+x414)<=(x415%x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x417 = INT8_MAX;
	volatile int64_t x419 = INT64_MIN;
	uint64_t x420 = 26364276294248LLU;
	volatile int32_t t91 = -1559760;

	t91 = ((x417+x418)<=(x419%x420));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x421 = 3291081012729746LLU;
	volatile int32_t x422 = INT32_MIN;
	static volatile int32_t t92 = 3886190;

	t92 = ((x421+x422)<=(x423%x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x425 = UINT8_MAX;
	int32_t x427 = 4482812;
	int64_t x428 = INT64_MIN;
	static int32_t t93 = 1;

	t93 = ((x425+x426)<=(x427%x428));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -1;
	static uint8_t x434 = UINT8_MAX;
	static int32_t x435 = -1;
	volatile int32_t t94 = 25;

	t94 = ((x433+x434)<=(x435%x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x437 = INT16_MIN;
	uint32_t x438 = 38478U;
	uint32_t x440 = UINT32_MAX;
	volatile int32_t t95 = -416419650;

	t95 = ((x437+x438)<=(x439%x440));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x441 = INT8_MIN;
	int64_t x442 = INT64_MAX;
	uint8_t x443 = 9U;

	t96 = ((x441+x442)<=(x443%x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x445 = 3U;
	int8_t x447 = 1;
	int32_t t97 = -239121;

	t97 = ((x445+x446)<=(x447%x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x451 = INT16_MAX;
	int16_t x452 = INT16_MAX;
	volatile int32_t t98 = -6276;

	t98 = ((x449+x450)<=(x451%x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t t99 = -1677250;

	t99 = ((x457+x458)<=(x459%x460));

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

