#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x18 = 2866163465552890LLU;
uint32_t x32 = 137U;
int8_t x41 = -1;
int32_t x49 = -1;
int8_t x51 = INT8_MIN;
volatile int32_t t10 = 1;
int8_t x62 = -1;
int64_t x64 = -391LL;
int32_t x71 = INT32_MIN;
volatile uint16_t x81 = 223U;
static volatile int16_t x83 = INT16_MIN;
int32_t x85 = INT32_MIN;
static volatile int8_t x87 = 0;
int16_t x90 = 50;
uint32_t x95 = UINT32_MAX;
int32_t x96 = INT32_MAX;
int16_t x102 = INT16_MIN;
static int64_t x105 = 21LL;
int64_t x131 = -1059085529015636592LL;
int16_t x133 = 0;
uint16_t x137 = 3U;
int16_t x140 = INT16_MIN;
int64_t x144 = INT64_MAX;
uint32_t x145 = 11U;
volatile int16_t x155 = INT16_MIN;
volatile int32_t t31 = -55049;
volatile int16_t x158 = -1;
int8_t x165 = -1;
static uint32_t x167 = UINT32_MAX;
volatile int32_t t35 = 2159654;
uint32_t x175 = 1133548U;
int16_t x179 = -1;
volatile int32_t x198 = INT32_MAX;
int32_t t40 = 7193093;
int64_t x205 = 576064322916606668LL;
uint32_t x213 = UINT32_MAX;
volatile int32_t t44 = 39485111;
int8_t x218 = 44;
volatile int64_t x225 = INT64_MIN;
int32_t t49 = 514998194;
static int64_t x239 = INT64_MAX;
static int8_t x244 = 1;
static volatile int32_t t51 = -1040377149;
int32_t x246 = 42604;
int64_t x248 = INT64_MIN;
volatile int32_t t52 = -43657;
int32_t x252 = 104;
uint16_t x253 = UINT16_MAX;
uint64_t x256 = UINT64_MAX;
static uint32_t x263 = 409625U;
static int16_t x267 = INT16_MIN;
int64_t x270 = INT64_MAX;
static uint8_t x281 = 39U;
uint16_t x284 = 108U;
uint64_t x289 = 234706128895265784LLU;
volatile int32_t t61 = 729613;
int64_t x302 = -1LL;
int8_t x303 = INT8_MAX;
int8_t x304 = 5;
int32_t t63 = -106966504;
static int8_t x309 = 0;
int8_t x311 = 3;
int64_t x316 = INT64_MAX;
static int32_t t66 = 2;
int8_t x320 = -1;
uint64_t x333 = 33993960179LLU;
int64_t x335 = -1LL;
uint64_t x339 = UINT64_MAX;
volatile uint32_t x341 = 597804917U;
static volatile int16_t x342 = INT16_MIN;
int16_t x344 = INT16_MIN;
volatile int16_t x349 = -1;
int8_t x352 = -31;
int8_t x357 = INT8_MAX;
int64_t x363 = -1LL;
int32_t t77 = -4115348;
int8_t x376 = INT8_MIN;
int64_t x377 = -1LL;
uint64_t x382 = 3070256987LLU;
static int16_t x383 = INT16_MIN;
int64_t x387 = INT64_MIN;
volatile int32_t t83 = 0;
static int16_t x389 = -111;
int8_t x406 = -1;
static uint8_t x408 = 2U;
volatile int32_t t87 = 1274;
uint32_t x414 = UINT32_MAX;
int32_t x415 = 2353157;
int8_t x430 = INT8_MIN;
int16_t x442 = INT16_MIN;
volatile uint64_t x445 = 688LLU;
static int8_t x449 = 11;
volatile uint64_t x450 = UINT64_MAX;
int16_t x451 = 26;
int64_t x470 = INT64_MIN;
int16_t x480 = 3;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	static volatile int16_t x3 = INT16_MAX;
	uint32_t x4 = 962031U;
	volatile int32_t t0 = -111;

	t0 = ((x1-x2)==(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x9 = 402U;
	int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	int32_t x12 = -1;
	static int32_t t1 = -294;

	t1 = ((x9-x10)==(x11/x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x13 = INT64_MAX;
	uint16_t x14 = 0U;
	int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MIN;
	volatile int32_t t2 = -1810;

	t2 = ((x13-x14)==(x15/x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	int32_t x19 = INT32_MIN;
	int32_t x20 = INT32_MAX;
	volatile int32_t t3 = 4;

	t3 = ((x17-x18)==(x19/x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = 5;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = 1270438170U;
	volatile uint64_t x24 = 69920536836LLU;
	int32_t t4 = -66039;

	t4 = ((x21-x22)==(x23/x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 5U;
	int8_t x26 = INT8_MAX;
	int64_t x27 = INT64_MIN;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t5 = 152370;

	t5 = ((x25-x26)==(x27/x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	static volatile int32_t t6 = 31;

	t6 = ((x29-x30)==(x31/x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	static volatile int8_t x34 = INT8_MIN;
	static int8_t x35 = 41;
	int64_t x36 = -1LL;
	volatile int32_t t7 = -1;

	t7 = ((x33-x34)==(x35/x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	static volatile uint8_t x38 = UINT8_MAX;
	volatile int64_t x39 = -2972243094090435232LL;
	int8_t x40 = -4;
	int32_t t8 = -68;

	t8 = ((x37-x38)==(x39/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = -1;
	static int16_t x43 = INT16_MIN;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t9 = 1;

	t9 = ((x41-x42)==(x43/x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x50 = INT16_MIN;
	int32_t x52 = INT32_MAX;

	t10 = ((x49-x50)==(x51/x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x61 = -1LL;
	int32_t x63 = INT32_MIN;
	static volatile int32_t t11 = -61318;

	t11 = ((x61-x62)==(x63/x64));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x69 = INT32_MAX;
	uint8_t x70 = UINT8_MAX;
	volatile uint16_t x72 = UINT16_MAX;
	static int32_t t12 = -67;

	t12 = ((x69-x70)==(x71/x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x77 = 1011U;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = -1;
	int64_t x80 = INT64_MIN;
	volatile int32_t t13 = 475241;

	t13 = ((x77-x78)==(x79/x80));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = -1;
	static int32_t x84 = 1;
	volatile int32_t t14 = 945813;

	t14 = ((x81-x82)==(x83/x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x86 = 7687470892LL;
	int32_t x88 = INT32_MAX;
	volatile int32_t t15 = 14121;

	t15 = ((x85-x86)==(x87/x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = -1LL;
	uint16_t x91 = 3675U;
	int32_t x92 = 8176;
	static int32_t t16 = 255882;

	t16 = ((x89-x90)==(x91/x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	volatile int32_t t17 = -19593337;

	t17 = ((x93-x94)==(x95/x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MAX;
	uint16_t x98 = 177U;
	int16_t x99 = INT16_MIN;
	int16_t x100 = -5596;
	volatile int32_t t18 = -68760924;

	t18 = ((x97-x98)==(x99/x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 27LLU;
	int32_t x103 = INT32_MIN;
	volatile int32_t x104 = INT32_MIN;
	int32_t t19 = 798;

	t19 = ((x101-x102)==(x103/x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 746392649U;
	volatile int8_t x108 = INT8_MIN;
	int32_t t20 = 0;

	t20 = ((x105-x106)==(x107/x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = -1;
	static int32_t x110 = -1;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t21 = -62549;

	t21 = ((x109-x110)==(x111/x112));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x113 = 45158448588LLU;
	int32_t x114 = INT32_MIN;
	volatile int64_t x115 = 88629998662034LL;
	int8_t x116 = INT8_MIN;
	volatile int32_t t22 = 54654;

	t22 = ((x113-x114)==(x115/x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = -1;
	volatile uint32_t x119 = 28069106U;
	int64_t x120 = INT64_MIN;
	volatile int32_t t23 = 46;

	t23 = ((x117-x118)==(x119/x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x125 = INT8_MAX;
	volatile int64_t x126 = 203414593008519LL;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t24 = -1;

	t24 = ((x125-x126)==(x127/x128));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x129 = INT32_MIN;
	volatile int32_t x130 = INT32_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t25 = -115393;

	t25 = ((x129-x130)==(x131/x132));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x134 = -1;
	uint32_t x135 = 544U;
	int16_t x136 = INT16_MIN;
	int32_t t26 = 0;

	t26 = ((x133-x134)==(x135/x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x138 = 316972304;
	uint8_t x139 = 11U;
	volatile int32_t t27 = -1;

	t27 = ((x137-x138)==(x139/x140));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = 101;
	int16_t x143 = INT16_MIN;
	int32_t t28 = -116;

	t28 = ((x141-x142)==(x143/x144));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x146 = 1LL;
	uint8_t x147 = UINT8_MAX;
	int8_t x148 = INT8_MIN;
	int32_t t29 = 32;

	t29 = ((x145-x146)==(x147/x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = 0;
	int8_t x150 = INT8_MAX;
	static volatile uint16_t x151 = 351U;
	volatile uint16_t x152 = UINT16_MAX;
	volatile int32_t t30 = 3025;

	t30 = ((x149-x150)==(x151/x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = 4248529099LLU;
	static volatile int8_t x154 = -1;
	static int64_t x156 = INT64_MIN;

	t31 = ((x153-x154)==(x155/x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x157 = INT32_MIN;
	int8_t x159 = -1;
	int32_t x160 = -1;
	int32_t t32 = 22798298;

	t32 = ((x157-x158)==(x159/x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MAX;
	int64_t x162 = 12298885173555LL;
	volatile int16_t x163 = -1;
	volatile int8_t x164 = -1;
	int32_t t33 = 1369648;

	t33 = ((x161-x162)==(x163/x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x166 = -1;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t34 = -75759;

	t34 = ((x165-x166)==(x167/x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = 0U;
	int32_t x172 = 19;

	t35 = ((x169-x170)==(x171/x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x173 = -39LL;
	static uint8_t x174 = 28U;
	int32_t x176 = -40659904;
	volatile int32_t t36 = 74;

	t36 = ((x173-x174)==(x175/x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = 5046002842059658LLU;
	static volatile uint64_t x178 = 2LLU;
	uint64_t x180 = 1797056LLU;
	int32_t t37 = -2;

	t37 = ((x177-x178)==(x179/x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x189 = 2129U;
	int16_t x190 = INT16_MIN;
	volatile int8_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t38 = -12375699;

	t38 = ((x189-x190)==(x191/x192));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x193 = 7U;
	static int8_t x194 = INT8_MAX;
	volatile uint32_t x195 = 820157U;
	volatile int8_t x196 = -36;
	static volatile int32_t t39 = 78;

	t39 = ((x193-x194)==(x195/x196));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x197 = INT64_MAX;
	static int64_t x199 = -7257048666877794LL;
	int8_t x200 = -1;

	t40 = ((x197-x198)==(x199/x200));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x201 = -2889LL;
	int32_t x202 = INT32_MIN;
	static int8_t x203 = INT8_MIN;
	static volatile uint8_t x204 = 42U;
	volatile int32_t t41 = -15685;

	t41 = ((x201-x202)==(x203/x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x206 = 1U;
	int32_t x207 = -1;
	static int64_t x208 = INT64_MAX;
	int32_t t42 = 2606244;

	t42 = ((x205-x206)==(x207/x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x209 = 15672744U;
	static uint8_t x210 = UINT8_MAX;
	int64_t x211 = INT64_MAX;
	uint8_t x212 = 70U;
	static volatile int32_t t43 = -898083006;

	t43 = ((x209-x210)==(x211/x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MAX;
	uint16_t x216 = UINT16_MAX;

	t44 = ((x213-x214)==(x215/x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x217 = 13U;
	uint16_t x219 = 3622U;
	uint8_t x220 = 18U;
	int32_t t45 = 321;

	t45 = ((x217-x218)==(x219/x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x221 = 185U;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = 33U;
	uint8_t x224 = 57U;
	static volatile int32_t t46 = -856;

	t46 = ((x221-x222)==(x223/x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x226 = 1160502LLU;
	uint16_t x227 = 109U;
	uint8_t x228 = 1U;
	int32_t t47 = 655546589;

	t47 = ((x225-x226)==(x227/x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	int64_t x231 = -1LL;
	int32_t x232 = 783;
	int32_t t48 = 3650884;

	t48 = ((x229-x230)==(x231/x232));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x233 = 234057466450LLU;
	static uint8_t x234 = UINT8_MAX;
	volatile int16_t x235 = 1;
	static int8_t x236 = -1;

	t49 = ((x233-x234)==(x235/x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x237 = 1U;
	uint64_t x238 = UINT64_MAX;
	uint16_t x240 = UINT16_MAX;
	static int32_t t50 = 184;

	t50 = ((x237-x238)==(x239/x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	static volatile int64_t x242 = -8623843515LL;
	uint8_t x243 = 1U;

	t51 = ((x241-x242)==(x243/x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x247 = 1U;

	t52 = ((x245-x246)==(x247/x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x249 = 1U;
	uint8_t x250 = 2U;
	uint8_t x251 = 5U;
	volatile int32_t t53 = 6;

	t53 = ((x249-x250)==(x251/x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x254 = 47U;
	uint32_t x255 = 33569U;
	volatile int32_t t54 = 2357;

	t54 = ((x253-x254)==(x255/x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x261 = UINT16_MAX;
	uint16_t x262 = 9U;
	int16_t x264 = 3737;
	volatile int32_t t55 = 1460;

	t55 = ((x261-x262)==(x263/x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x265 = 12338U;
	int8_t x266 = -44;
	volatile int64_t x268 = INT64_MIN;
	int32_t t56 = 165983423;

	t56 = ((x265-x266)==(x267/x268));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = -1;
	int32_t x271 = -1;
	uint64_t x272 = 3979568223374LLU;
	volatile int32_t t57 = 0;

	t57 = ((x269-x270)==(x271/x272));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	int8_t x275 = -13;
	int16_t x276 = INT16_MAX;
	int32_t t58 = 26;

	t58 = ((x273-x274)==(x275/x276));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x282 = 9U;
	volatile int8_t x283 = INT8_MIN;
	int32_t t59 = -6112064;

	t59 = ((x281-x282)==(x283/x284));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x290 = 1;
	static uint32_t x291 = 137220U;
	int64_t x292 = INT64_MIN;
	volatile int32_t t60 = -31511;

	t60 = ((x289-x290)==(x291/x292));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x293 = INT16_MIN;
	static uint16_t x294 = 486U;
	static int8_t x295 = INT8_MIN;
	static int8_t x296 = INT8_MIN;

	t61 = ((x293-x294)==(x295/x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x297 = -212;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = -1LL;
	int16_t x300 = INT16_MIN;
	int32_t t62 = -16203030;

	t62 = ((x297-x298)==(x299/x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x301 = UINT8_MAX;

	t63 = ((x301-x302)==(x303/x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x305 = -780591;
	int8_t x306 = 0;
	int8_t x307 = -1;
	uint8_t x308 = UINT8_MAX;
	int32_t t64 = -168810;

	t64 = ((x305-x306)==(x307/x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x310 = -3;
	int16_t x312 = INT16_MIN;
	volatile int32_t t65 = 435862158;

	t65 = ((x309-x310)==(x311/x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x313 = 1U;
	int8_t x314 = INT8_MIN;
	int32_t x315 = -4085;

	t66 = ((x313-x314)==(x315/x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x317 = 127806U;
	int32_t x318 = INT32_MAX;
	uint16_t x319 = 20575U;
	int32_t t67 = 4;

	t67 = ((x317-x318)==(x319/x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = INT8_MAX;
	int64_t x322 = INT64_MAX;
	int32_t x323 = INT32_MIN;
	uint16_t x324 = 466U;
	volatile int32_t t68 = 0;

	t68 = ((x321-x322)==(x323/x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x325 = 73780287257311LLU;
	volatile uint8_t x326 = UINT8_MAX;
	static int8_t x327 = -1;
	int32_t x328 = -1;
	volatile int32_t t69 = 15;

	t69 = ((x325-x326)==(x327/x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x334 = -1;
	uint8_t x336 = 3U;
	int32_t t70 = 1;

	t70 = ((x333-x334)==(x335/x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x337 = INT64_MIN;
	static uint64_t x338 = UINT64_MAX;
	volatile uint32_t x340 = 2682U;
	int32_t t71 = -457033;

	t71 = ((x337-x338)==(x339/x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x343 = 18945244663055LLU;
	int32_t t72 = 11;

	t72 = ((x341-x342)==(x343/x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	static uint32_t x347 = 233878649U;
	int32_t x348 = INT32_MAX;
	int32_t t73 = 57;

	t73 = ((x345-x346)==(x347/x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x350 = INT32_MIN;
	uint16_t x351 = 5U;
	volatile int32_t t74 = -1;

	t74 = ((x349-x350)==(x351/x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x353 = 112010321248LL;
	static volatile uint8_t x354 = 86U;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = 94U;
	volatile int32_t t75 = 0;

	t75 = ((x353-x354)==(x355/x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x358 = UINT8_MAX;
	int8_t x359 = INT8_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int32_t t76 = -199;

	t76 = ((x357-x358)==(x359/x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x361 = 53712LLU;
	static int32_t x362 = INT32_MIN;
	volatile int16_t x364 = INT16_MIN;

	t77 = ((x361-x362)==(x363/x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = -5;
	volatile int64_t x366 = INT64_MIN;
	uint8_t x367 = 63U;
	volatile int32_t x368 = INT32_MAX;
	int32_t t78 = 440;

	t78 = ((x365-x366)==(x367/x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x369 = 128U;
	volatile int32_t x370 = 1289339;
	volatile int32_t x371 = -2231758;
	uint8_t x372 = UINT8_MAX;
	static int32_t t79 = 293;

	t79 = ((x369-x370)==(x371/x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x373 = 101137888LLU;
	int32_t x374 = INT32_MIN;
	int8_t x375 = 0;
	int32_t t80 = -2302;

	t80 = ((x373-x374)==(x375/x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x378 = 25U;
	static volatile uint8_t x379 = 1U;
	int32_t x380 = INT32_MIN;
	int32_t t81 = -1;

	t81 = ((x377-x378)==(x379/x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = 1028;
	int8_t x384 = INT8_MAX;
	int32_t t82 = -17586255;

	t82 = ((x381-x382)==(x383/x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x385 = 3178693433LLU;
	static uint16_t x386 = UINT16_MAX;
	static int32_t x388 = INT32_MIN;

	t83 = ((x385-x386)==(x387/x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x390 = 2;
	uint64_t x391 = 4631896295579664104LLU;
	static int64_t x392 = -3087579722137LL;
	volatile int32_t t84 = 3537955;

	t84 = ((x389-x390)==(x391/x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x401 = INT64_MAX;
	uint32_t x402 = 108842U;
	static uint8_t x403 = 44U;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t85 = 419944;

	t85 = ((x401-x402)==(x403/x404));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x405 = 253119464;
	int64_t x407 = INT64_MIN;
	static volatile int32_t t86 = -213636818;

	t86 = ((x405-x406)==(x407/x408));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = -13;
	static uint32_t x410 = 18U;
	static int32_t x411 = INT32_MIN;
	static int32_t x412 = INT32_MIN;

	t87 = ((x409-x410)==(x411/x412));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x413 = INT32_MIN;
	int32_t x416 = -1;
	int32_t t88 = 523302805;

	t88 = ((x413-x414)==(x415/x416));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = 2;
	uint8_t x418 = 0U;
	static int32_t x419 = INT32_MAX;
	uint8_t x420 = 1U;
	volatile int32_t t89 = 1;

	t89 = ((x417-x418)==(x419/x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x429 = 100260137624327671LLU;
	int8_t x431 = -1;
	int64_t x432 = INT64_MAX;
	int32_t t90 = -7037592;

	t90 = ((x429-x430)==(x431/x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x433 = INT8_MAX;
	int16_t x434 = -66;
	static volatile int16_t x435 = 15;
	int64_t x436 = INT64_MIN;
	volatile int32_t t91 = -8832346;

	t91 = ((x433-x434)==(x435/x436));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x437 = UINT8_MAX;
	uint32_t x438 = 10U;
	volatile int32_t x439 = INT32_MIN;
	uint8_t x440 = 7U;
	volatile int32_t t92 = 2930;

	t92 = ((x437-x438)==(x439/x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x441 = INT32_MIN;
	uint16_t x443 = UINT16_MAX;
	static int64_t x444 = -1LL;
	int32_t t93 = -116910548;

	t93 = ((x441-x442)==(x443/x444));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x446 = 120U;
	int32_t x447 = -533515168;
	volatile uint8_t x448 = 88U;
	int32_t t94 = 5047284;

	t94 = ((x445-x446)==(x447/x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x452 = -1LL;
	volatile int32_t t95 = -590004;

	t95 = ((x449-x450)==(x451/x452));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x457 = INT32_MIN;
	uint64_t x458 = 7257651LLU;
	static int64_t x459 = -654LL;
	int32_t x460 = 138175919;
	int32_t t96 = -909587;

	t96 = ((x457-x458)==(x459/x460));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x469 = -1;
	uint32_t x471 = 1U;
	uint16_t x472 = UINT16_MAX;
	int32_t t97 = 6689;

	t97 = ((x469-x470)==(x471/x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x473 = 2U;
	int64_t x474 = 454248660LL;
	int8_t x475 = -1;
	int8_t x476 = INT8_MIN;
	volatile int32_t t98 = 2962;

	t98 = ((x473-x474)==(x475/x476));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x477 = 140681307U;
	int64_t x478 = INT64_MAX;
	uint16_t x479 = UINT16_MAX;
	volatile int32_t t99 = -451;

	t99 = ((x477-x478)==(x479/x480));

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

