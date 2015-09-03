#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x4 = UINT64_MAX;
volatile int32_t x6 = 29815324;
int64_t x8 = -1LL;
volatile uint64_t t1 = 13688912178LLU;
static int8_t x19 = 1;
static volatile int64_t x20 = INT64_MIN;
int8_t x21 = INT8_MIN;
int64_t t6 = -7LL;
volatile int64_t t7 = -1827805532579847LL;
int64_t x33 = 3390733LL;
int32_t x40 = INT32_MIN;
uint64_t t9 = 96008993480820384LLU;
int16_t x42 = INT16_MAX;
uint16_t x51 = 3262U;
volatile int64_t x53 = -1LL;
int8_t x56 = -4;
int32_t x57 = INT32_MIN;
int64_t x62 = -1LL;
int64_t x64 = INT64_MAX;
volatile int64_t x69 = INT64_MIN;
static volatile uint16_t x72 = 7U;
static volatile int8_t x78 = INT8_MIN;
volatile int64_t x79 = INT64_MAX;
volatile uint64_t x93 = UINT64_MAX;
static int32_t x101 = INT32_MIN;
static int8_t x104 = INT8_MIN;
int8_t x107 = INT8_MAX;
static int16_t x108 = INT16_MIN;
uint8_t x113 = 1U;
uint64_t x114 = 55LLU;
static int8_t x116 = 62;
static int16_t x126 = INT16_MAX;
int16_t x129 = INT16_MIN;
uint8_t x131 = 46U;
int16_t x132 = INT16_MAX;
static volatile int64_t t30 = -117044471882546LL;
volatile int32_t t31 = -2335808;
uint16_t x142 = UINT16_MAX;
volatile uint32_t t33 = 160U;
int8_t x150 = -44;
volatile int64_t t35 = 206994868LL;
static int64_t x156 = INT64_MIN;
int32_t x158 = INT32_MIN;
static volatile uint8_t x160 = 1U;
int8_t x161 = -1;
uint64_t x183 = 3025622186866824LLU;
int16_t x185 = 6811;
static int64_t t44 = -48725582LL;
volatile int16_t x190 = -1;
static int16_t x209 = -3210;
int32_t x216 = -1;
int64_t t51 = -1699626541753184360LL;
volatile int64_t x220 = INT64_MIN;
static volatile int8_t x244 = INT8_MAX;
volatile uint16_t x246 = 2554U;
int32_t x263 = INT32_MIN;
int16_t x264 = INT16_MIN;
int64_t x267 = -1LL;
int64_t x277 = -5643475LL;
uint16_t x278 = UINT16_MAX;
int8_t x280 = INT8_MAX;
int64_t t67 = -380948082265211LL;
int32_t x284 = -42971;
int64_t t68 = 33115409893393LL;
static uint16_t x292 = 170U;
int64_t t70 = -3537909721763693LL;
uint64_t x296 = 2990505083397163258LLU;
int64_t x297 = INT64_MIN;
int16_t x303 = -2;
volatile uint32_t t73 = 328949U;
static volatile int16_t x311 = -34;
volatile int64_t x317 = -1LL;
volatile int64_t x318 = -1LL;
uint16_t x326 = 27U;
uint32_t t79 = 2050145737U;
volatile int64_t x333 = -11042290954249618LL;
uint16_t x336 = 25U;
uint64_t x341 = 1204LLU;
uint16_t x343 = 14883U;
int8_t x348 = INT8_MIN;
int32_t t84 = -7;
static uint64_t x349 = 75303255246179799LLU;
static int16_t x360 = INT16_MAX;
int16_t x361 = -33;
int16_t x364 = INT16_MAX;
int64_t t87 = -5430616355LL;
int64_t t90 = -5404681LL;
uint16_t x404 = 5542U;
volatile int64_t x409 = INT64_MIN;
int16_t x412 = INT16_MIN;
static int64_t x413 = -1LL;
uint8_t x418 = 36U;


void f0(void) {
	uint64_t x1 = 2009907827987000828LLU;
	uint64_t x2 = 15628497137894964LLU;
	static volatile uint32_t x3 = UINT32_MAX;
	volatile uint64_t t0 = 259112329209521LLU;

	t0 = ((x1+(x2/x3))^x4);

	if (t0 != 16436836245718911994LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static uint32_t x7 = 10U;

	t1 = ((x5+(x6/x7))^x8);

	if (t1 != 18446744073706570084LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	static int8_t x10 = INT8_MAX;
	volatile int16_t x11 = INT16_MAX;
	uint32_t x12 = 4U;
	static uint64_t t2 = 0LLU;

	t2 = ((x9+(x10/x11))^x12);

	if (t2 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint8_t x14 = UINT8_MAX;
	volatile int8_t x15 = INT8_MIN;
	int16_t x16 = -1;
	int32_t t3 = -189;

	t3 = ((x13+(x14/x15))^x16);

	if (t3 != -127) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -39LL;
	static int16_t x18 = -1;
	volatile int64_t t4 = 24079412472LL;

	t4 = ((x17+(x18/x19))^x20);

	if (t4 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int8_t x23 = -1;
	int32_t x24 = INT32_MAX;
	volatile int32_t t5 = -231;

	t5 = ((x21+(x22/x23))^x24);

	if (t5 != 2147451007) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	static uint16_t x26 = 385U;
	int64_t x27 = -1LL;
	uint8_t x28 = 18U;

	t6 = ((x25+(x26/x27))^x28);

	if (t6 != -404LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -4022241392393772LL;
	static uint16_t x30 = UINT16_MAX;
	volatile int16_t x31 = -1;
	static volatile uint16_t x32 = UINT16_MAX;

	t7 = ((x29+(x30/x31))^x32);

	if (t7 != -4022241392394710LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 7U;
	int16_t x35 = -468;
	volatile int32_t x36 = INT32_MAX;
	int64_t t8 = 29676182LL;

	t8 = ((x33+(x34/x35))^x36);

	if (t8 != 2144092914LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1484;
	int8_t x38 = -29;
	uint64_t x39 = 3773165486LLU;

	t9 = ((x37+(x38/x39))^x40);

	if (t9 != 18446744067861062457LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 23U;
	int16_t x43 = INT16_MIN;
	int64_t x44 = INT64_MIN;
	volatile int64_t t10 = -183467928111356267LL;

	t10 = ((x41+(x42/x43))^x44);

	if (t10 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = 13;
	int64_t x47 = -3212LL;
	static volatile int64_t x48 = -1LL;
	int64_t t11 = -5971318685995LL;

	t11 = ((x45+(x46/x47))^x48);

	if (t11 != 32767LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = INT8_MIN;
	int32_t x52 = -1;
	volatile int32_t t12 = INT32_MIN;

	t12 = ((x49+(x50/x51))^x52);

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = -1;
	int64_t x55 = INT64_MAX;
	static int64_t t13 = 1997263605186LL;

	t13 = ((x53+(x54/x55))^x56);

	if (t13 != 3LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = INT16_MIN;
	uint16_t x59 = UINT16_MAX;
	int16_t x60 = INT16_MIN;
	int32_t t14 = -232744597;

	t14 = ((x57+(x58/x59))^x60);

	if (t14 != 2147450880) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int64_t x63 = 12LL;
	static volatile int64_t t15 = -7140353LL;

	t15 = ((x61+(x62/x63))^x64);

	if (t15 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	static volatile int32_t x66 = INT32_MIN;
	int32_t x67 = -470;
	static volatile int64_t x68 = INT64_MIN;
	volatile int64_t t16 = 426LL;

	t16 = ((x65+(x66/x67))^x68);

	if (t16 != -9223372036850239462LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x70 = INT64_MAX;
	int8_t x71 = 1;
	int64_t t17 = -86LL;

	t17 = ((x69+(x70/x71))^x72);

	if (t17 != -8LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -4LL;
	uint8_t x80 = UINT8_MAX;
	static volatile int64_t t18 = -15039000060304147LL;

	t18 = ((x77+(x78/x79))^x80);

	if (t18 != -253LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x81 = 336225101590LLU;
	static volatile uint8_t x82 = UINT8_MAX;
	int32_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	uint64_t t19 = 451238305028LLU;

	t19 = ((x81+(x82/x83))^x84);

	if (t19 != 336225049064LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 77U;
	static int64_t x86 = 7885040LL;
	uint16_t x87 = 26U;
	volatile int8_t x88 = 1;
	int64_t t20 = -24456LL;

	t20 = ((x85+(x86/x87))^x88);

	if (t20 != 303346LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint8_t x90 = UINT8_MAX;
	static uint16_t x91 = UINT16_MAX;
	static int16_t x92 = -7;
	int32_t t21 = -21;

	t21 = ((x89+(x90/x91))^x92);

	if (t21 != 121) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	int16_t x96 = INT16_MIN;
	volatile uint64_t t22 = 5428975LLU;

	t22 = ((x93+(x94/x95))^x96);

	if (t22 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x102 = INT64_MIN;
	int8_t x103 = INT8_MIN;
	volatile int64_t t23 = 1007079042659750320LL;

	t23 = ((x101+(x102/x103))^x104);

	if (t23 != -72057591890444416LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	int8_t x106 = 0;
	int32_t t24 = -851803375;

	t24 = ((x105+(x106/x107))^x108);

	if (t24 != 2147450880) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x109 = 12;
	volatile int8_t x110 = INT8_MIN;
	int8_t x111 = INT8_MIN;
	int8_t x112 = 0;
	int32_t t25 = -9032;

	t25 = ((x109+(x110/x111))^x112);

	if (t25 != 13) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x115 = -1;
	volatile uint64_t t26 = 379006931166271627LLU;

	t26 = ((x113+(x114/x115))^x116);

	if (t26 != 63LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x117 = INT64_MAX;
	int8_t x118 = INT8_MIN;
	volatile int64_t x119 = -1276319185624654491LL;
	static int32_t x120 = -1;
	static int64_t t27 = INT64_MIN;

	t27 = ((x117+(x118/x119))^x120);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int64_t x122 = INT64_MAX;
	int8_t x123 = -51;
	int64_t x124 = -1LL;
	volatile int64_t t28 = 0LL;

	t28 = ((x121+(x122/x123))^x124);

	if (t28 != 180850432095191426LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	int64_t x127 = -1LL;
	int16_t x128 = 2924;
	volatile int64_t t29 = -1392549139010LL;

	t29 = ((x125+(x126/x127))^x128);

	if (t29 != -62611LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x130 = -1LL;

	t30 = ((x129+(x130/x131))^x132);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 4U;
	volatile int16_t x134 = INT16_MIN;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = 10U;

	t31 = ((x133+(x134/x135))^x136);

	if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -97;
	int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = UINT16_MAX;
	int16_t x140 = INT16_MIN;
	int64_t t32 = 762320175LL;

	t32 = ((x137+(x138/x139))^x140);

	if (t32 != 140739635904415LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 3U;
	int16_t x143 = INT16_MAX;
	uint8_t x144 = 45U;

	t33 = ((x141+(x142/x143))^x144);

	if (t33 != 40U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = 675950508U;
	int16_t x146 = 11721;
	int64_t x147 = -1LL;
	volatile int16_t x148 = INT16_MAX;
	volatile int64_t t34 = -2LL;

	t34 = ((x145+(x146/x147))^x148);

	if (t34 != 675970588LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int64_t x151 = INT64_MAX;
	int32_t x152 = 87790432;

	t35 = ((x149+(x150/x151))^x152);

	if (t35 != 87780511LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 204311813U;
	int64_t x154 = INT64_MIN;
	volatile int32_t x155 = 157884;
	static volatile int64_t t36 = 1751501228450LL;

	t36 = ((x153+(x154/x155))^x156);

	if (t36 != 9223313618397051856LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x157 = 38996070749588879LLU;
	int64_t x159 = -102620148834063449LL;
	volatile uint64_t t37 = 15654LLU;

	t37 = ((x157+(x158/x159))^x160);

	if (t37 != 38996070749588878LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x162 = UINT16_MAX;
	uint16_t x163 = UINT16_MAX;
	static volatile uint32_t x164 = 152517688U;
	volatile uint32_t t38 = 31359003U;

	t38 = ((x161+(x162/x163))^x164);

	if (t38 != 152517688U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MIN;
	int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int64_t t39 = -847563132974835533LL;

	t39 = ((x165+(x166/x167))^x168);

	if (t39 != -9223372036854742785LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x169 = -55965;
	int16_t x170 = INT16_MAX;
	int64_t x171 = 55900241LL;
	uint64_t x172 = 18988209LLU;
	volatile uint64_t t40 = 468LLU;

	t40 = ((x169+(x170/x171))^x172);

	if (t40 != 18446744073690585554LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MAX;
	int32_t x175 = -1;
	int8_t x176 = -1;
	int64_t t41 = 36031902648615LL;

	t41 = ((x173+(x174/x175))^x176);

	if (t41 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x177 = 3U;
	volatile uint32_t x178 = 22U;
	uint64_t x179 = UINT64_MAX;
	int64_t x180 = 1566736842LL;
	volatile uint64_t t42 = 1717557707327LLU;

	t42 = ((x177+(x178/x179))^x180);

	if (t42 != 1566736841LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = 1U;
	int64_t x182 = INT64_MIN;
	volatile uint16_t x184 = 23830U;
	volatile uint64_t t43 = 359516090505976509LLU;

	t43 = ((x181+(x182/x183))^x184);

	if (t43 != 22271LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x186 = -1LL;
	uint16_t x187 = 3697U;
	static int8_t x188 = INT8_MIN;

	t44 = ((x185+(x186/x187))^x188);

	if (t44 != -6885LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x189 = INT8_MIN;
	int8_t x191 = -1;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t45 = 13322005;

	t45 = ((x189+(x190/x191))^x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x193 = INT8_MAX;
	int32_t x194 = 1;
	volatile uint8_t x195 = UINT8_MAX;
	static int32_t x196 = INT32_MIN;
	int32_t t46 = -334;

	t46 = ((x193+(x194/x195))^x196);

	if (t46 != -2147483521) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x197 = INT16_MAX;
	int16_t x198 = INT16_MIN;
	static int32_t x199 = 39;
	volatile uint32_t x200 = 49143U;
	volatile uint32_t t47 = 19281094U;

	t47 = ((x197+(x198/x199))^x200);

	if (t47 != 49984U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MAX;
	static int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MIN;
	volatile int64_t t48 = 31256713314944LL;

	t48 = ((x201+(x202/x203))^x204);

	if (t48 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x205 = 11928;
	volatile uint8_t x206 = 6U;
	uint8_t x207 = 3U;
	int32_t x208 = -1;
	volatile int32_t t49 = -1;

	t49 = ((x205+(x206/x207))^x208);

	if (t49 != -11931) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x210 = INT64_MIN;
	volatile int8_t x211 = INT8_MIN;
	uint32_t x212 = 3709U;
	volatile int64_t t50 = 402154LL;

	t50 = ((x209+(x210/x211))^x212);

	if (t50 != 72057594037927179LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MAX;
	int64_t x214 = INT64_MAX;
	int32_t x215 = INT32_MIN;

	t51 = ((x213+(x214/x215))^x216);

	if (t51 != 4294967167LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MAX;
	static uint64_t x219 = UINT64_MAX;
	uint64_t t52 = 4093667025665332733LLU;

	t52 = ((x217+(x218/x219))^x220);

	if (t52 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	volatile int16_t x222 = INT16_MAX;
	volatile int8_t x223 = -1;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t53 = -1;

	t53 = ((x221+(x222/x223))^x224);

	if (t53 != 32769) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MIN;
	int16_t x227 = -211;
	volatile int16_t x228 = INT16_MIN;
	static volatile int32_t t54 = 475;

	t54 = ((x225+(x226/x227))^x228);

	if (t54 != 2147451035) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = INT8_MIN;
	int8_t x230 = -1;
	static int32_t x231 = -45943;
	int16_t x232 = -1143;
	int32_t t55 = 3671;

	t55 = ((x229+(x230/x231))^x232);

	if (t55 != 1033) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	volatile uint32_t x236 = 4572360U;
	int64_t t56 = -1LL;

	t56 = ((x233+(x234/x235))^x236);

	if (t56 != -2142911288LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = -9217;
	uint8_t x238 = UINT8_MAX;
	int8_t x239 = -1;
	int32_t x240 = -14;
	static int32_t t57 = -16512934;

	t57 = ((x237+(x238/x239))^x240);

	if (t57 != 9458) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	uint64_t x242 = 22357790LLU;
	int16_t x243 = -14114;
	volatile uint64_t t58 = 4496518394203998073LLU;

	t58 = ((x241+(x242/x243))^x244);

	if (t58 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x245 = 2U;
	int32_t x247 = 15;
	int8_t x248 = 5;
	int32_t t59 = 68;

	t59 = ((x245+(x246/x247))^x248);

	if (t59 != 169) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MIN;
	int32_t x252 = INT32_MAX;
	volatile int32_t t60 = 158;

	t60 = ((x249+(x250/x251))^x252);

	if (t60 != 2147483519) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x253 = 0U;
	static int32_t x254 = -127180;
	uint8_t x255 = 9U;
	uint16_t x256 = 10818U;
	static uint32_t t61 = 8637U;

	t61 = ((x253+(x254/x255))^x256);

	if (t61 != 4294959759U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x257 = 20U;
	int64_t x258 = INT64_MIN;
	int16_t x259 = INT16_MIN;
	uint16_t x260 = 3U;
	static int64_t t62 = 324092LL;

	t62 = ((x257+(x258/x259))^x260);

	if (t62 != 281474976710679LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 2551748;
	int8_t x262 = 0;
	static int32_t t63 = -6;

	t63 = ((x261+(x262/x263))^x264);

	if (t63 != -2527292) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = 0;
	uint16_t x266 = 6U;
	static int16_t x268 = 20;
	int64_t t64 = -9558720104709097LL;

	t64 = ((x265+(x266/x267))^x268);

	if (t64 != -18LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	volatile uint16_t x270 = 11U;
	int8_t x271 = INT8_MAX;
	int16_t x272 = -17;
	static int32_t t65 = 142;

	t65 = ((x269+(x270/x271))^x272);

	if (t65 != 32751) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x274 = INT8_MAX;
	static int8_t x275 = INT8_MAX;
	static uint16_t x276 = UINT16_MAX;
	volatile int64_t t66 = 1391978302693034256LL;

	t66 = ((x273+(x274/x275))^x276);

	if (t66 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x279 = -151700969;

	t67 = ((x277+(x278/x279))^x280);

	if (t67 != -5643438LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x281 = 86U;
	volatile int32_t x282 = 268815;
	volatile int64_t x283 = 184LL;

	t68 = ((x281+(x282/x283))^x284);

	if (t68 != -41425LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = -1;
	uint8_t x286 = 7U;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MAX;
	static int64_t t69 = 8717LL;

	t69 = ((x285+(x286/x287))^x288);

	if (t69 != -32768LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	int64_t x290 = -1LL;
	static int16_t x291 = INT16_MIN;

	t70 = ((x289+(x290/x291))^x292);

	if (t70 != 32597LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x293 = 11;
	int32_t x294 = 0;
	volatile int8_t x295 = 5;
	volatile uint64_t t71 = 530409681005105LLU;

	t71 = ((x293+(x294/x295))^x296);

	if (t71 != 2990505083397163249LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	volatile uint32_t x300 = UINT32_MAX;
	int64_t t72 = 62740406669LL;

	t72 = ((x297+(x298/x299))^x300);

	if (t72 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x301 = 0U;
	int8_t x302 = INT8_MIN;
	static uint32_t x304 = 66U;

	t73 = ((x301+(x302/x303))^x304);

	if (t73 != 2U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x305 = 120U;
	uint64_t x306 = UINT64_MAX;
	uint16_t x307 = 10U;
	int32_t x308 = 22;
	uint64_t t74 = 858LLU;

	t74 = ((x305+(x306/x307))^x308);

	if (t74 != 1844674407370955271LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 356188214LLU;
	int16_t x310 = -17;
	static volatile int32_t x312 = 2;
	uint64_t t75 = 159026564LLU;

	t75 = ((x309+(x310/x311))^x312);

	if (t75 != 356188212LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = INT64_MIN;
	int64_t x314 = -1LL;
	int16_t x315 = -12206;
	uint16_t x316 = 6840U;
	volatile int64_t t76 = 214396601849LL;

	t76 = ((x313+(x314/x315))^x316);

	if (t76 != -9223372036854768968LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x319 = 804200461U;
	int8_t x320 = 0;
	int64_t t77 = 5558820022484830LL;

	t77 = ((x317+(x318/x319))^x320);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = 4;
	volatile int64_t x322 = -29170281568LL;
	int16_t x323 = -1;
	int64_t x324 = INT64_MIN;
	int64_t t78 = 26619084LL;

	t78 = ((x321+(x322/x323))^x324);

	if (t78 != -9223372007684494236LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = UINT32_MAX;
	static uint32_t x327 = 215U;
	uint16_t x328 = UINT16_MAX;

	t79 = ((x325+(x326/x327))^x328);

	if (t79 != 4294901760U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	int16_t x330 = -1;
	int32_t x331 = INT32_MIN;
	static int8_t x332 = INT8_MIN;
	volatile int64_t t80 = -507822061483446LL;

	t80 = ((x329+(x330/x331))^x332);

	if (t80 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x334 = -106564156055LL;
	volatile int16_t x335 = INT16_MIN;
	static int64_t t81 = 859046233862284LL;

	t81 = ((x333+(x334/x335))^x336);

	if (t81 != -11042290950997564LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -371997004089005179LL;
	uint64_t x338 = 7232009665734LLU;
	int32_t x339 = INT32_MAX;
	int16_t x340 = INT16_MIN;
	uint64_t t82 = 24001615076080LLU;

	t82 = ((x337+(x338/x339))^x340);

	if (t82 != 371997004089030828LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x342 = UINT64_MAX;
	int8_t x344 = -3;
	static volatile uint64_t t83 = 6872LLU;

	t83 = ((x341+(x342/x343))^x344);

	if (t83 != 18445504623056207028LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x345 = 5022137;
	static int8_t x346 = INT8_MIN;
	volatile int8_t x347 = INT8_MAX;

	t84 = ((x345+(x346/x347))^x348);

	if (t84 != -5022152) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x350 = -2;
	int32_t x351 = 359;
	uint32_t x352 = 296U;
	volatile uint64_t t85 = 47LLU;

	t85 = ((x349+(x350/x351))^x352);

	if (t85 != 75303255246179583LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = -1;
	uint8_t x358 = 6U;
	volatile uint16_t x359 = UINT16_MAX;
	static volatile int32_t t86 = -1;

	t86 = ((x357+(x358/x359))^x360);

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x362 = -1LL;
	volatile int8_t x363 = INT8_MAX;

	t87 = ((x361+(x362/x363))^x364);

	if (t87 != -32736LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MAX;
	int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MAX;
	int64_t t88 = -29414049625LL;

	t88 = ((x369+(x370/x371))^x372);

	if (t88 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x373 = -49137947LL;
	static int32_t x374 = INT32_MAX;
	static uint32_t x375 = 70187579U;
	static int16_t x376 = -11987;
	volatile int64_t t89 = 95908205339799LL;

	t89 = ((x373+(x374/x375))^x376);

	if (t89 != 49145390LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x377 = INT32_MAX;
	static volatile uint16_t x378 = UINT16_MAX;
	static int8_t x379 = INT8_MIN;
	int64_t x380 = INT64_MIN;

	t90 = ((x377+(x378/x379))^x380);

	if (t90 != -9223372034707292672LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = UINT64_MAX;
	static volatile int16_t x382 = -1;
	static int32_t x383 = -1;
	volatile uint32_t x384 = 917649U;
	volatile uint64_t t91 = 143LLU;

	t91 = ((x381+(x382/x383))^x384);

	if (t91 != 917649LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	int16_t x386 = 671;
	int32_t x387 = -1;
	int64_t x388 = 1854126265000820660LL;
	int64_t t92 = -58590580210LL;

	t92 = ((x385+(x386/x387))^x388);

	if (t92 != 1854126265467372244LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = -1;
	volatile int32_t x394 = INT32_MAX;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 5U;
	volatile uint32_t t93 = 10286426U;

	t93 = ((x393+(x394/x395))^x396);

	if (t93 != 16909314U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x397 = INT8_MIN;
	int8_t x398 = INT8_MIN;
	int32_t x399 = INT32_MAX;
	uint8_t x400 = UINT8_MAX;
	int32_t t94 = 336;

	t94 = ((x397+(x398/x399))^x400);

	if (t94 != -129) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x401 = 63U;
	int32_t x402 = INT32_MIN;
	int32_t x403 = -3;
	volatile int32_t t95 = 4015;

	t95 = ((x401+(x402/x403))^x404);

	if (t95 != 715833167) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	static int8_t x407 = 13;
	static uint64_t x408 = UINT64_MAX;
	static uint64_t t96 = 6728404726004LLU;

	t96 = ((x405+(x406/x407))^x408);

	if (t96 != 2520LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x410 = -6671;
	int32_t x411 = INT32_MIN;
	int64_t t97 = -15835LL;

	t97 = ((x409+(x410/x411))^x412);

	if (t97 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x414 = INT16_MIN;
	static volatile int32_t x415 = INT32_MAX;
	uint16_t x416 = 501U;
	static int64_t t98 = 220475LL;

	t98 = ((x413+(x414/x415))^x416);

	if (t98 != -502LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MIN;
	int8_t x419 = -22;
	static volatile uint64_t x420 = 29955999996257201LLU;
	static volatile uint64_t t99 = 87991137337LLU;

	t99 = ((x417+(x418/x419))^x420);

	if (t99 != 18416788073713294542LLU) { NG(); } else { ; }
	
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

