#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x6 = -2650660LL;
int8_t x7 = -32;
uint16_t x15 = 73U;
int8_t x19 = INT8_MIN;
int32_t x21 = 2911195;
int32_t t4 = 1087;
uint16_t x25 = 5999U;
int32_t t8 = 35;
uint64_t x49 = 1513215239433092157LLU;
static int32_t x50 = INT32_MIN;
volatile int64_t x52 = -1LL;
int8_t x55 = -1;
uint32_t x58 = UINT32_MAX;
static int16_t x62 = -1;
int64_t x66 = INT64_MIN;
int64_t x73 = INT64_MIN;
uint16_t x81 = 1265U;
volatile int32_t t17 = -1;
int8_t x85 = 2;
static int8_t x105 = INT8_MIN;
static uint32_t x108 = 123403U;
int16_t x119 = INT16_MAX;
static int16_t x122 = INT16_MAX;
uint8_t x123 = 10U;
uint16_t x133 = 1942U;
int32_t x134 = 249879;
static int32_t t29 = -322562;
volatile int32_t t31 = 71423495;
int16_t x148 = -1;
volatile int8_t x153 = INT8_MIN;
int32_t x163 = INT32_MIN;
static int32_t t35 = -81208700;
static uint64_t x167 = UINT64_MAX;
volatile int32_t x178 = 1;
volatile int32_t t38 = 124006;
volatile int32_t x184 = INT32_MIN;
static uint8_t x187 = 29U;
int32_t t40 = -1475579;
int16_t x191 = INT16_MIN;
uint8_t x192 = UINT8_MAX;
static uint16_t x194 = 25219U;
static volatile uint16_t x202 = 16150U;
uint32_t x203 = 1731092110U;
int32_t x204 = 4;
uint8_t x206 = 77U;
int32_t x210 = INT32_MAX;
uint16_t x213 = UINT16_MAX;
uint8_t x215 = UINT8_MAX;
volatile int32_t t46 = 95;
static uint64_t x220 = 4361690LLU;
static volatile uint32_t x230 = 4U;
int64_t x237 = 1172857436516539LL;
static int32_t x241 = -977;
volatile int32_t t52 = 73365;
volatile uint16_t x247 = 2020U;
static volatile int32_t t55 = 39;
volatile int32_t x270 = INT32_MIN;
static uint32_t x281 = UINT32_MAX;
uint64_t x282 = 3649417969131LLU;
int64_t x283 = INT64_MIN;
int16_t x285 = -1;
uint8_t x286 = 0U;
int64_t x291 = -1LL;
int16_t x292 = -1;
volatile int64_t x297 = INT64_MAX;
int8_t x298 = 0;
volatile int16_t x299 = INT16_MIN;
int8_t x309 = INT8_MAX;
uint8_t x313 = 1U;
int64_t x315 = INT64_MAX;
static volatile int32_t t71 = 28615678;
int8_t x333 = -1;
int16_t x339 = 8768;
int32_t t75 = -2250;
volatile int64_t x345 = -92LL;
int64_t x372 = INT64_MAX;
volatile int64_t x385 = 15052871110LL;
int16_t x388 = -245;
static int64_t x408 = INT64_MIN;
int8_t x409 = INT8_MAX;
volatile int64_t x415 = INT64_MAX;
int64_t x418 = -25750723299059256LL;
volatile uint8_t x423 = 38U;
static volatile int32_t t93 = 3937447;
int8_t x434 = INT8_MIN;
volatile int32_t t94 = -31744;
int8_t x440 = INT8_MAX;
int64_t x447 = 41474415137078LL;
uint32_t x449 = 871U;
volatile uint64_t x454 = 171LLU;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	static int16_t x2 = INT16_MAX;
	volatile uint16_t x3 = 0U;
	int32_t x4 = -1;
	int32_t t0 = 2656322;

	t0 = ((x1+x2)<=(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int32_t x8 = -392;
	volatile int32_t t1 = 249;

	t1 = ((x5+x6)<=(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = -15103;
	int8_t x14 = INT8_MAX;
	int16_t x16 = -1;
	int32_t t2 = 562879305;

	t2 = ((x13+x14)<=(x15/x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static uint32_t x18 = 91U;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = -9797600;

	t3 = ((x17+x18)<=(x19/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = UINT8_MAX;
	uint16_t x23 = 2U;
	volatile uint32_t x24 = 85U;

	t4 = ((x21+x22)<=(x23/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x26 = UINT8_MAX;
	uint16_t x27 = UINT16_MAX;
	volatile uint64_t x28 = 605LLU;
	int32_t t5 = -16163;

	t5 = ((x25+x26)<=(x27/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x33 = 332U;
	int32_t x34 = INT32_MIN;
	uint64_t x35 = 687937889230LLU;
	int16_t x36 = INT16_MIN;
	static volatile int32_t t6 = 18995;

	t6 = ((x33+x34)<=(x35/x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int8_t x38 = -26;
	int64_t x39 = INT64_MIN;
	uint64_t x40 = 772LLU;
	volatile int32_t t7 = -499700;

	t7 = ((x37+x38)<=(x39/x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	volatile uint32_t x42 = 130070398U;
	int64_t x43 = INT64_MIN;
	static volatile int32_t x44 = 2912063;

	t8 = ((x41+x42)<=(x43/x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x51 = UINT8_MAX;
	int32_t t9 = 0;

	t9 = ((x49+x50)<=(x51/x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = INT16_MAX;
	volatile uint8_t x54 = 0U;
	int16_t x56 = INT16_MAX;
	int32_t t10 = 6924;

	t10 = ((x53+x54)<=(x55/x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x57 = -1;
	uint8_t x59 = 91U;
	volatile int16_t x60 = INT16_MIN;
	static int32_t t11 = 4024;

	t11 = ((x57+x58)<=(x59/x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 3543U;
	int64_t x63 = INT64_MAX;
	volatile uint8_t x64 = 41U;
	volatile int32_t t12 = -16562725;

	t12 = ((x61+x62)<=(x63/x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint32_t x67 = 1337275470U;
	uint8_t x68 = UINT8_MAX;
	int32_t t13 = -17737691;

	t13 = ((x65+x66)<=(x67/x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = -1;
	uint8_t x70 = UINT8_MAX;
	uint64_t x71 = 26589384LLU;
	static int64_t x72 = 329786393030952LL;
	int32_t t14 = 1;

	t14 = ((x69+x70)<=(x71/x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x74 = 24992029428LLU;
	int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;
	int32_t t15 = -248156062;

	t15 = ((x73+x74)<=(x75/x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -173281LL;
	volatile int8_t x78 = -36;
	volatile uint8_t x79 = 6U;
	uint32_t x80 = 1524U;
	volatile int32_t t16 = -396814;

	t16 = ((x77+x78)<=(x79/x80));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x82 = -1;
	int16_t x83 = 3097;
	int8_t x84 = INT8_MAX;

	t17 = ((x81+x82)<=(x83/x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x86 = INT64_MIN;
	uint32_t x87 = 253047164U;
	uint64_t x88 = UINT64_MAX;
	static int32_t t18 = 1406;

	t18 = ((x85+x86)<=(x87/x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 7049453LL;
	volatile int32_t x90 = 1609600;
	static int16_t x91 = -1;
	int32_t x92 = 3050;
	static int32_t t19 = 308015;

	t19 = ((x89+x90)<=(x91/x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -1;
	int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	volatile int32_t x96 = INT32_MIN;
	int32_t t20 = 4761;

	t20 = ((x93+x94)<=(x95/x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = -1;
	static uint32_t x98 = 350219159U;
	int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MAX;
	volatile int32_t t21 = 262361110;

	t21 = ((x97+x98)<=(x99/x100));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MAX;
	static int8_t x102 = -1;
	uint8_t x103 = 7U;
	volatile int32_t x104 = -1;
	int32_t t22 = -533752;

	t22 = ((x101+x102)<=(x103/x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x106 = UINT32_MAX;
	int64_t x107 = -1LL;
	static int32_t t23 = -10903843;

	t23 = ((x105+x106)<=(x107/x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = UINT16_MAX;
	volatile uint64_t x110 = 13715157516336LLU;
	static uint32_t x111 = 0U;
	int16_t x112 = -1;
	int32_t t24 = -284402600;

	t24 = ((x109+x110)<=(x111/x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 0U;
	volatile int8_t x120 = INT8_MAX;
	volatile int32_t t25 = 1345509;

	t25 = ((x117+x118)<=(x119/x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = INT8_MIN;
	static int32_t x124 = -1;
	int32_t t26 = 66474976;

	t26 = ((x121+x122)<=(x123/x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 1039910U;
	volatile uint16_t x126 = UINT16_MAX;
	int16_t x127 = -1;
	int32_t x128 = INT32_MIN;
	int32_t t27 = 0;

	t27 = ((x125+x126)<=(x127/x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x129 = INT32_MAX;
	static int64_t x130 = INT64_MIN;
	int16_t x131 = -1;
	int16_t x132 = -1;
	volatile int32_t t28 = 107;

	t28 = ((x129+x130)<=(x131/x132));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x135 = UINT16_MAX;
	static volatile uint64_t x136 = UINT64_MAX;

	t29 = ((x133+x134)<=(x135/x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 517674641991LLU;
	static volatile uint8_t x138 = 49U;
	int16_t x139 = -2729;
	int16_t x140 = -1;
	static volatile int32_t t30 = -35949;

	t30 = ((x137+x138)<=(x139/x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x141 = -1LL;
	int32_t x142 = -15382540;
	static int16_t x143 = INT16_MIN;
	static uint16_t x144 = UINT16_MAX;

	t31 = ((x141+x142)<=(x143/x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	uint64_t x146 = 751358045758329090LLU;
	static uint32_t x147 = 43U;
	int32_t t32 = 344;

	t32 = ((x145+x146)<=(x147/x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = -27725144014432979LL;
	volatile int32_t x150 = -512967;
	uint32_t x151 = UINT32_MAX;
	volatile int64_t x152 = 34LL;
	volatile int32_t t33 = -729777;

	t33 = ((x149+x150)<=(x151/x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = -7160;
	int32_t x155 = INT32_MIN;
	int64_t x156 = -1LL;
	int32_t t34 = 2;

	t34 = ((x153+x154)<=(x155/x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 86U;
	int8_t x162 = -1;
	uint16_t x164 = 58U;

	t35 = ((x161+x162)<=(x163/x164));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x165 = 270LLU;
	uint32_t x166 = 2398527U;
	int32_t x168 = INT32_MIN;
	volatile int32_t t36 = 8251;

	t36 = ((x165+x166)<=(x167/x168));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = -428389LL;
	static int16_t x170 = INT16_MIN;
	int32_t x171 = INT32_MIN;
	volatile int32_t x172 = INT32_MIN;
	volatile int32_t t37 = -2;

	t37 = ((x169+x170)<=(x171/x172));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = 6774U;
	static int32_t x179 = 1838358;
	volatile int16_t x180 = 2433;

	t38 = ((x177+x178)<=(x179/x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -1;
	uint16_t x182 = 11483U;
	static volatile uint8_t x183 = 45U;
	static int32_t t39 = -8506355;

	t39 = ((x181+x182)<=(x183/x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = -1;
	static volatile int64_t x186 = INT64_MAX;
	uint8_t x188 = 125U;

	t40 = ((x185+x186)<=(x187/x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = 0;
	uint64_t x190 = UINT64_MAX;
	static int32_t t41 = 1;

	t41 = ((x189+x190)<=(x191/x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	static uint32_t x195 = 721042U;
	int32_t x196 = INT32_MAX;
	int32_t t42 = -29;

	t42 = ((x193+x194)<=(x195/x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MIN;
	int32_t t43 = -99896811;

	t43 = ((x201+x202)<=(x203/x204));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x205 = -9;
	static uint16_t x207 = 22U;
	volatile int16_t x208 = -1;
	int32_t t44 = 0;

	t44 = ((x205+x206)<=(x207/x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x209 = INT64_MIN;
	uint32_t x211 = 39493487U;
	volatile int64_t x212 = INT64_MAX;
	int32_t t45 = 306551;

	t45 = ((x209+x210)<=(x211/x212));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x214 = INT16_MIN;
	int8_t x216 = INT8_MAX;

	t46 = ((x213+x214)<=(x215/x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = UINT16_MAX;
	static int16_t x218 = INT16_MIN;
	uint8_t x219 = UINT8_MAX;
	volatile int32_t t47 = -31892871;

	t47 = ((x217+x218)<=(x219/x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MIN;
	int64_t x226 = 14328835LL;
	volatile uint8_t x227 = 2U;
	static uint64_t x228 = UINT64_MAX;
	volatile int32_t t48 = -2999298;

	t48 = ((x225+x226)<=(x227/x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x229 = 12145741U;
	volatile uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MIN;
	static int32_t t49 = 120;

	t49 = ((x229+x230)<=(x231/x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x233 = INT16_MIN;
	int16_t x234 = 1;
	int64_t x235 = -1LL;
	int16_t x236 = INT16_MAX;
	volatile int32_t t50 = -12267498;

	t50 = ((x233+x234)<=(x235/x236));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x238 = INT64_MIN;
	static int64_t x239 = -1LL;
	static volatile uint64_t x240 = 72LLU;
	int32_t t51 = 132562345;

	t51 = ((x237+x238)<=(x239/x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x242 = INT16_MIN;
	uint16_t x243 = UINT16_MAX;
	int16_t x244 = -1;

	t52 = ((x241+x242)<=(x243/x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = -1;
	int16_t x246 = -1;
	volatile int16_t x248 = INT16_MIN;
	int32_t t53 = 10429815;

	t53 = ((x245+x246)<=(x247/x248));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 0U;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = 411LL;
	int16_t x252 = INT16_MAX;
	volatile int32_t t54 = -4452521;

	t54 = ((x249+x250)<=(x251/x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile int8_t x258 = INT8_MIN;
	int16_t x259 = INT16_MAX;
	int32_t x260 = INT32_MAX;

	t55 = ((x257+x258)<=(x259/x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	uint16_t x264 = 1832U;
	volatile int32_t t56 = -12319058;

	t56 = ((x261+x262)<=(x263/x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = 0;
	static int64_t x266 = INT64_MAX;
	volatile int8_t x267 = INT8_MAX;
	volatile uint16_t x268 = 3504U;
	volatile int32_t t57 = 412872024;

	t57 = ((x265+x266)<=(x267/x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -1LL;
	static int16_t x271 = -1;
	int32_t x272 = INT32_MAX;
	int32_t t58 = 6;

	t58 = ((x269+x270)<=(x271/x272));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MAX;
	static uint64_t x275 = UINT64_MAX;
	uint16_t x276 = 959U;
	volatile int32_t t59 = -2525472;

	t59 = ((x273+x274)<=(x275/x276));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x277 = UINT16_MAX;
	int8_t x278 = INT8_MIN;
	static int16_t x279 = -44;
	uint16_t x280 = 415U;
	int32_t t60 = 1054;

	t60 = ((x277+x278)<=(x279/x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x284 = UINT64_MAX;
	static int32_t t61 = -26;

	t61 = ((x281+x282)<=(x283/x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x287 = INT64_MIN;
	static int16_t x288 = INT16_MAX;
	volatile int32_t t62 = 4301547;

	t62 = ((x285+x286)<=(x287/x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = -1LL;
	int32_t x290 = INT32_MAX;
	static int32_t t63 = -284;

	t63 = ((x289+x290)<=(x291/x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = INT16_MIN;
	volatile uint64_t x294 = UINT64_MAX;
	static uint32_t x295 = UINT32_MAX;
	static uint8_t x296 = 2U;
	int32_t t64 = -87306;

	t64 = ((x293+x294)<=(x295/x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x300 = INT32_MAX;
	volatile int32_t t65 = -21;

	t65 = ((x297+x298)<=(x299/x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x301 = INT8_MIN;
	uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MAX;
	static volatile int32_t t66 = 281714992;

	t66 = ((x301+x302)<=(x303/x304));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MIN;
	static uint32_t x307 = 765U;
	static uint32_t x308 = UINT32_MAX;
	int32_t t67 = 12820;

	t67 = ((x305+x306)<=(x307/x308));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x310 = 211;
	volatile int32_t x311 = INT32_MIN;
	uint16_t x312 = UINT16_MAX;
	int32_t t68 = -80790949;

	t68 = ((x309+x310)<=(x311/x312));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x314 = INT16_MIN;
	volatile uint16_t x316 = 160U;
	int32_t t69 = -14355;

	t69 = ((x313+x314)<=(x315/x316));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MIN;
	int8_t x319 = 62;
	uint64_t x320 = 2658108320LLU;
	volatile int32_t t70 = -29426658;

	t70 = ((x317+x318)<=(x319/x320));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x321 = 99918663U;
	static int16_t x322 = -1;
	int64_t x323 = INT64_MAX;
	uint64_t x324 = 12033LLU;

	t71 = ((x321+x322)<=(x323/x324));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x325 = INT64_MAX;
	int32_t x326 = INT32_MIN;
	int16_t x327 = -551;
	int64_t x328 = 425LL;
	int32_t t72 = 3786642;

	t72 = ((x325+x326)<=(x327/x328));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x334 = UINT32_MAX;
	static int8_t x335 = INT8_MAX;
	volatile int64_t x336 = -1LL;
	int32_t t73 = -448853642;

	t73 = ((x333+x334)<=(x335/x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x337 = 63U;
	int16_t x338 = INT16_MAX;
	int16_t x340 = INT16_MAX;
	int32_t t74 = -696338287;

	t74 = ((x337+x338)<=(x339/x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x341 = INT32_MAX;
	int64_t x342 = INT64_MIN;
	int64_t x343 = -1LL;
	int16_t x344 = -1;

	t75 = ((x341+x342)<=(x343/x344));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x346 = INT8_MIN;
	int16_t x347 = -1;
	volatile int64_t x348 = -4683614604LL;
	int32_t t76 = -165831;

	t76 = ((x345+x346)<=(x347/x348));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x349 = UINT32_MAX;
	static int64_t x350 = -6LL;
	uint8_t x351 = UINT8_MAX;
	static int32_t x352 = INT32_MIN;
	static int32_t t77 = -6;

	t77 = ((x349+x350)<=(x351/x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x365 = -11;
	static int32_t x366 = -9527559;
	volatile int8_t x367 = INT8_MIN;
	int8_t x368 = INT8_MIN;
	volatile int32_t t78 = 0;

	t78 = ((x365+x366)<=(x367/x368));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = 0LLU;
	uint16_t x370 = 13U;
	static volatile int32_t x371 = INT32_MIN;
	volatile int32_t t79 = 133;

	t79 = ((x369+x370)<=(x371/x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x373 = 9U;
	uint32_t x374 = 96U;
	int32_t x375 = INT32_MIN;
	uint64_t x376 = 55760458953550130LLU;
	int32_t t80 = 1;

	t80 = ((x373+x374)<=(x375/x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = 291152181;
	static int8_t x378 = INT8_MAX;
	int32_t x379 = 27713088;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t81 = 491;

	t81 = ((x377+x378)<=(x379/x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x381 = 66659604LLU;
	int16_t x382 = INT16_MAX;
	static int64_t x383 = INT64_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t82 = -1;

	t82 = ((x381+x382)<=(x383/x384));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x386 = INT64_MIN;
	volatile int16_t x387 = -9;
	int32_t t83 = 369;

	t83 = ((x385+x386)<=(x387/x388));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 5398840U;
	uint64_t x395 = UINT64_MAX;
	volatile int32_t x396 = 248773451;
	static volatile int32_t t84 = 6387;

	t84 = ((x393+x394)<=(x395/x396));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x397 = -1;
	static int32_t x398 = INT32_MAX;
	int64_t x399 = INT64_MAX;
	static int8_t x400 = -1;
	int32_t t85 = 499965227;

	t85 = ((x397+x398)<=(x399/x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x401 = 44;
	static volatile int64_t x402 = -1LL;
	uint16_t x403 = 108U;
	int32_t x404 = 198007480;
	static int32_t t86 = -256374;

	t86 = ((x401+x402)<=(x403/x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -18;
	int64_t x406 = -1LL;
	uint16_t x407 = 1909U;
	static volatile int32_t t87 = -1;

	t87 = ((x405+x406)<=(x407/x408));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x410 = INT16_MIN;
	int64_t x411 = INT64_MAX;
	int64_t x412 = 254LL;
	static volatile int32_t t88 = -5611;

	t88 = ((x409+x410)<=(x411/x412));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x413 = 151677792360949339LLU;
	int64_t x414 = -1850819742251310LL;
	uint8_t x416 = 78U;
	volatile int32_t t89 = 15;

	t89 = ((x413+x414)<=(x415/x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x417 = -1LL;
	int8_t x419 = 6;
	int16_t x420 = INT16_MIN;
	int32_t t90 = 3;

	t90 = ((x417+x418)<=(x419/x420));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -1LL;
	uint16_t x422 = UINT16_MAX;
	int64_t x424 = -2LL;
	static int32_t t91 = 174;

	t91 = ((x421+x422)<=(x423/x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x425 = 3475LL;
	uint32_t x426 = 0U;
	int8_t x427 = INT8_MIN;
	int16_t x428 = INT16_MIN;
	int32_t t92 = -1;

	t92 = ((x425+x426)<=(x427/x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = -52166;
	int16_t x430 = -9216;
	int8_t x431 = 2;
	int16_t x432 = INT16_MIN;

	t93 = ((x429+x430)<=(x431/x432));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x433 = 3U;
	int16_t x435 = INT16_MIN;
	static int8_t x436 = -1;

	t94 = ((x433+x434)<=(x435/x436));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x437 = INT32_MAX;
	int8_t x438 = 0;
	static volatile uint8_t x439 = 8U;
	int32_t t95 = 20285352;

	t95 = ((x437+x438)<=(x439/x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x441 = -1LL;
	volatile int32_t x442 = 11454104;
	int64_t x443 = -133818558LL;
	uint16_t x444 = 13449U;
	volatile int32_t t96 = -16;

	t96 = ((x441+x442)<=(x443/x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x445 = UINT16_MAX;
	uint64_t x446 = 9980021509329666LLU;
	int64_t x448 = -3339LL;
	static volatile int32_t t97 = 0;

	t97 = ((x445+x446)<=(x447/x448));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x450 = -5959;
	int16_t x451 = -12;
	int8_t x452 = 2;
	volatile int32_t t98 = -1;

	t98 = ((x449+x450)<=(x451/x452));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = -1;
	volatile uint8_t x455 = 18U;
	int16_t x456 = INT16_MAX;
	int32_t t99 = -3793921;

	t99 = ((x453+x454)<=(x455/x456));

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

