#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
int64_t x12 = INT64_MAX;
int64_t x18 = INT64_MIN;
int32_t t4 = 1274;
uint64_t x27 = 548184LLU;
static volatile int32_t t7 = 13730237;
uint64_t x36 = UINT64_MAX;
static uint32_t x40 = 60U;
static int32_t t9 = 435729562;
volatile uint32_t x44 = 297872668U;
int32_t t10 = -458784800;
volatile int32_t t11 = -3;
int32_t x52 = -1;
uint16_t x56 = 217U;
volatile int64_t x62 = -1LL;
int8_t x64 = INT8_MIN;
int16_t x65 = INT16_MAX;
static volatile int16_t x68 = -1324;
static volatile int32_t t15 = 142;
int8_t x70 = INT8_MAX;
uint64_t x71 = UINT64_MAX;
static volatile int32_t x88 = INT32_MIN;
int8_t x89 = 14;
int16_t x93 = INT16_MIN;
int16_t x94 = INT16_MAX;
int16_t x95 = INT16_MIN;
volatile int32_t t22 = -54870113;
static uint16_t x98 = 369U;
uint32_t x103 = 12781U;
int32_t x115 = INT32_MIN;
volatile int64_t x125 = -3163215152LL;
int64_t x129 = INT64_MIN;
volatile int64_t x130 = -6395366115431395LL;
int32_t x131 = 3656745;
int32_t x135 = INT32_MAX;
volatile uint8_t x138 = UINT8_MAX;
volatile int32_t t32 = -7589;
int8_t x146 = 2;
static volatile int32_t t34 = -6515170;
volatile int32_t t36 = -6899;
uint8_t x162 = UINT8_MAX;
uint32_t x165 = 48623U;
uint16_t x167 = 63U;
static uint16_t x173 = UINT16_MAX;
uint16_t x191 = 8U;
int32_t t45 = -1000987;
int64_t x203 = INT64_MIN;
volatile uint16_t x209 = UINT16_MAX;
static uint64_t x210 = 376LLU;
static int8_t x212 = INT8_MAX;
volatile int32_t t48 = 12;
volatile uint64_t x220 = 1343056LLU;
volatile uint8_t x221 = 0U;
volatile int32_t t51 = -110825974;
int32_t x238 = -1;
static int32_t x240 = INT32_MAX;
int32_t t56 = 184;
static uint64_t x246 = 1809250779LLU;
int8_t x247 = -25;
int32_t t57 = 230;
int16_t x251 = INT16_MIN;
uint8_t x254 = 15U;
volatile int32_t x257 = -1;
volatile int32_t t60 = -475822184;
int8_t x273 = INT8_MIN;
int32_t t63 = 16;
uint64_t x279 = 4552633234298288284LLU;
volatile int32_t t65 = -9;
static int64_t x290 = INT64_MAX;
uint32_t x305 = UINT32_MAX;
uint8_t x322 = UINT8_MAX;
static volatile int32_t t74 = -1;
int64_t x328 = 29828744402995945LL;
uint64_t x339 = 37780LLU;
volatile int8_t x344 = INT8_MIN;
int32_t x351 = INT32_MIN;
static int8_t x356 = 14;
volatile int32_t t82 = -14275577;
int64_t x358 = INT64_MIN;
volatile int16_t x364 = -1;
volatile int32_t t85 = 0;
uint64_t x372 = 442529648738351LLU;
int16_t x375 = 12400;
static volatile int32_t x379 = INT32_MIN;
volatile int32_t x383 = INT32_MIN;
int16_t x390 = -1;
static volatile int32_t t91 = 17746144;
int32_t x395 = -1;
static int16_t x398 = INT16_MIN;
int64_t x403 = 502344346LL;
static int32_t t94 = 263234625;
int32_t x407 = -611;
static int32_t t96 = -1368;
uint8_t x416 = 4U;
int16_t x418 = -669;
volatile int64_t x419 = -5180705012579LL;
volatile int32_t t98 = -1;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int8_t x2 = -1;
	int64_t x3 = -2744115327LL;
	static volatile int16_t x4 = -1;
	int32_t t0 = -21036225;

	t0 = ((x1/x2)<(x3|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = -892537712LL;
	static volatile int32_t x7 = -1;
	static int8_t x8 = -15;
	int32_t t1 = -81657566;

	t1 = ((x5/x6)<(x7|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 27;
	int16_t x10 = 3;
	uint8_t x11 = 0U;
	int32_t t2 = 127269764;

	t2 = ((x9/x10)<(x11|x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = 221048067249052LL;
	int32_t x15 = INT32_MIN;
	volatile uint8_t x16 = UINT8_MAX;
	static int32_t t3 = -1;

	t3 = ((x13/x14)<(x15|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;

	t4 = ((x17/x18)<(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = UINT64_MAX;
	volatile uint8_t x22 = 3U;
	int8_t x23 = INT8_MIN;
	int16_t x24 = -3474;
	int32_t t5 = -38243486;

	t5 = ((x21/x22)<(x23|x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	static int32_t x28 = 6;
	volatile int32_t t6 = -108631;

	t6 = ((x25/x26)<(x27|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MIN;
	uint8_t x31 = 6U;
	uint32_t x32 = 32111256U;

	t7 = ((x29/x30)<(x31|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	static uint64_t x35 = 1LLU;
	int32_t t8 = -1745;

	t8 = ((x33/x34)<(x35|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = 83U;
	uint16_t x39 = 1000U;

	t9 = ((x37/x38)<(x39|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	uint16_t x42 = 3392U;
	static uint32_t x43 = 96U;

	t10 = ((x41/x42)<(x43|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = 3U;
	volatile int16_t x46 = 1;
	uint8_t x47 = UINT8_MAX;
	volatile int32_t x48 = -40523047;

	t11 = ((x45/x46)<(x47|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MAX;
	volatile int32_t x50 = -1;
	int64_t x51 = -1LL;
	int32_t t12 = 153843;

	t12 = ((x49/x50)<(x51|x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 560499787769LLU;
	volatile int8_t x54 = INT8_MIN;
	int64_t x55 = -1LL;
	volatile int32_t t13 = -85368393;

	t13 = ((x53/x54)<(x55|x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int32_t x63 = INT32_MIN;
	int32_t t14 = 7;

	t14 = ((x61/x62)<(x63|x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x66 = 17973717LLU;
	int8_t x67 = -1;

	t15 = ((x65/x66)<(x67|x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = 529360;
	static volatile int64_t x72 = INT64_MIN;
	static int32_t t16 = -813783;

	t16 = ((x69/x70)<(x71|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = -1;
	static int64_t x74 = INT64_MIN;
	int64_t x75 = INT64_MIN;
	int32_t x76 = INT32_MAX;
	volatile int32_t t17 = 10;

	t17 = ((x73/x74)<(x75|x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = -48;
	uint8_t x78 = 14U;
	volatile uint8_t x79 = UINT8_MAX;
	static int16_t x80 = INT16_MIN;
	int32_t t18 = 15;

	t18 = ((x77/x78)<(x79|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 94553231U;
	int8_t x82 = -1;
	int16_t x83 = INT16_MIN;
	int16_t x84 = -3686;
	static int32_t t19 = 113;

	t19 = ((x81/x82)<(x83|x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -1LL;
	int32_t x86 = -98253757;
	uint16_t x87 = 8U;
	volatile int32_t t20 = -430510;

	t20 = ((x85/x86)<(x87|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	volatile uint32_t x91 = UINT32_MAX;
	static int64_t x92 = INT64_MIN;
	static int32_t t21 = 2048725;

	t21 = ((x89/x90)<(x91|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x96 = 39;

	t22 = ((x93/x94)<(x95|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	static int32_t x99 = INT32_MAX;
	volatile int64_t x100 = -3615LL;
	volatile int32_t t23 = 2009;

	t23 = ((x97/x98)<(x99|x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x101 = 22U;
	uint8_t x102 = UINT8_MAX;
	static uint32_t x104 = UINT32_MAX;
	volatile int32_t t24 = 123304893;

	t24 = ((x101/x102)<(x103|x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 234U;
	int32_t x106 = -532721;
	static int32_t x107 = INT32_MIN;
	int32_t x108 = -5;
	volatile int32_t t25 = 0;

	t25 = ((x105/x106)<(x107|x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MAX;
	volatile int16_t x110 = -64;
	int32_t x111 = INT32_MIN;
	int16_t x112 = -16257;
	volatile int32_t t26 = 153147702;

	t26 = ((x109/x110)<(x111|x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -7;
	int64_t x114 = INT64_MIN;
	static int64_t x116 = -1LL;
	int32_t t27 = -10;

	t27 = ((x113/x114)<(x115|x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MAX;
	static uint16_t x118 = UINT16_MAX;
	static int64_t x119 = INT64_MIN;
	static int8_t x120 = 0;
	volatile int32_t t28 = -539142;

	t28 = ((x117/x118)<(x119|x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x126 = INT32_MIN;
	int64_t x127 = -3355263546703261038LL;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t29 = 50761;

	t29 = ((x125/x126)<(x127|x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x132 = -1;
	static volatile int32_t t30 = 3306390;

	t30 = ((x129/x130)<(x131|x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	uint8_t x136 = 9U;
	static volatile int32_t t31 = 27;

	t31 = ((x133/x134)<(x135|x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -31;
	uint16_t x139 = UINT16_MAX;
	static volatile int64_t x140 = INT64_MAX;

	t32 = ((x137/x138)<(x139|x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -5837;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 6104607U;
	int32_t t33 = 1;

	t33 = ((x141/x142)<(x143|x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = -1;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 213U;

	t34 = ((x145/x146)<(x147|x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	static volatile int64_t x150 = -1LL;
	uint8_t x151 = UINT8_MAX;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t35 = -3843;

	t35 = ((x149/x150)<(x151|x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = INT8_MAX;
	static uint32_t x158 = UINT32_MAX;
	volatile uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MIN;

	t36 = ((x157/x158)<(x159|x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = INT32_MAX;
	uint64_t x163 = UINT64_MAX;
	static int16_t x164 = INT16_MIN;
	int32_t t37 = 101646867;

	t37 = ((x161/x162)<(x163|x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x166 = 66709712U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t38 = -918671;

	t38 = ((x165/x166)<(x167|x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x169 = 8173617686LLU;
	int8_t x170 = 49;
	uint8_t x171 = 125U;
	static int8_t x172 = -23;
	int32_t t39 = -135514451;

	t39 = ((x169/x170)<(x171|x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x174 = 489U;
	static int32_t x175 = INT32_MAX;
	int8_t x176 = -6;
	volatile int32_t t40 = 5352442;

	t40 = ((x173/x174)<(x175|x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x177 = 4854628U;
	static int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	static volatile uint64_t x180 = 487079762LLU;
	volatile int32_t t41 = -8;

	t41 = ((x177/x178)<(x179|x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = 0U;
	static uint8_t x182 = 3U;
	static volatile int32_t x183 = INT32_MIN;
	int64_t x184 = INT64_MIN;
	int32_t t42 = 139517;

	t42 = ((x181/x182)<(x183|x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x185 = INT16_MAX;
	int8_t x186 = 1;
	volatile uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MIN;
	int32_t t43 = -93;

	t43 = ((x185/x186)<(x187|x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x189 = 14027U;
	static uint16_t x190 = 3885U;
	uint64_t x192 = UINT64_MAX;
	int32_t t44 = 30777844;

	t44 = ((x189/x190)<(x191|x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = 1;
	uint32_t x194 = 1010449089U;
	int64_t x195 = INT64_MIN;
	static int32_t x196 = INT32_MIN;

	t45 = ((x193/x194)<(x195|x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	volatile int8_t x198 = 6;
	int64_t x199 = -101LL;
	static uint16_t x200 = 12279U;
	volatile int32_t t46 = -435034;

	t46 = ((x197/x198)<(x199|x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	int64_t x202 = INT64_MIN;
	static int8_t x204 = -1;
	volatile int32_t t47 = 378918382;

	t47 = ((x201/x202)<(x203|x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x211 = UINT16_MAX;

	t48 = ((x209/x210)<(x211|x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x213 = -1;
	static int16_t x214 = INT16_MIN;
	int64_t x215 = 7454975876LL;
	int64_t x216 = -374LL;
	int32_t t49 = -73286;

	t49 = ((x213/x214)<(x215|x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x217 = INT8_MIN;
	int64_t x218 = -1LL;
	int32_t x219 = -1;
	volatile int32_t t50 = -32552257;

	t50 = ((x217/x218)<(x219|x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x222 = 5U;
	uint64_t x223 = 274586548425823449LLU;
	static int8_t x224 = -1;

	t51 = ((x221/x222)<(x223|x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MIN;
	static int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = 713079LLU;
	int8_t x228 = INT8_MIN;
	volatile int32_t t52 = -884888;

	t52 = ((x225/x226)<(x227|x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = 699232256;
	volatile int16_t x230 = INT16_MIN;
	static int32_t x231 = INT32_MAX;
	int8_t x232 = -1;
	static volatile int32_t t53 = -100;

	t53 = ((x229/x230)<(x231|x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -1;
	int16_t x234 = -1;
	volatile int64_t x235 = -4685389LL;
	int64_t x236 = INT64_MIN;
	volatile int32_t t54 = 362008;

	t54 = ((x233/x234)<(x235|x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x237 = INT8_MIN;
	int32_t x239 = 1;
	int32_t t55 = 230847711;

	t55 = ((x237/x238)<(x239|x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x241 = 0;
	volatile int64_t x242 = -873LL;
	static int16_t x243 = -1;
	int16_t x244 = INT16_MIN;

	t56 = ((x241/x242)<(x243|x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 10349U;
	static int8_t x248 = 1;

	t57 = ((x245/x246)<(x247|x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int64_t x249 = INT64_MIN;
	int64_t x250 = 469176834LL;
	int16_t x252 = -1;
	static volatile int32_t t58 = 3538;

	t58 = ((x249/x250)<(x251|x252));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x253 = -4920223235670LL;
	uint64_t x255 = 369171410146LLU;
	static volatile int64_t x256 = -1LL;
	int32_t t59 = -166758;

	t59 = ((x253/x254)<(x255|x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	volatile int16_t x260 = INT16_MAX;

	t60 = ((x257/x258)<(x259|x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = 37786U;
	static volatile int32_t x262 = INT32_MAX;
	int32_t x263 = INT32_MIN;
	volatile int16_t x264 = -1;
	static int32_t t61 = -2487703;

	t61 = ((x261/x262)<(x263|x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = INT16_MIN;
	int16_t x266 = -5;
	volatile uint32_t x267 = UINT32_MAX;
	int64_t x268 = -95484986LL;
	volatile int32_t t62 = -30;

	t62 = ((x265/x266)<(x267|x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x274 = INT32_MAX;
	volatile int16_t x275 = -1;
	static volatile uint64_t x276 = 704150607232514LLU;

	t63 = ((x273/x274)<(x275|x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x277 = INT64_MIN;
	uint32_t x278 = 43849330U;
	int16_t x280 = INT16_MIN;
	int32_t t64 = -58781;

	t64 = ((x277/x278)<(x279|x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x281 = 1069293766;
	static int32_t x282 = -455697;
	volatile int8_t x283 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;

	t65 = ((x281/x282)<(x283|x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = 715863239709256LL;
	int64_t x287 = 130782135613LL;
	static uint64_t x288 = 42868004563954LLU;
	volatile int32_t t66 = -8;

	t66 = ((x285/x286)<(x287|x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x289 = 1;
	static int8_t x291 = 0;
	static uint32_t x292 = 90U;
	volatile int32_t t67 = 263414465;

	t67 = ((x289/x290)<(x291|x292));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x293 = INT32_MIN;
	int8_t x294 = INT8_MIN;
	static int8_t x295 = -1;
	volatile int16_t x296 = 1513;
	int32_t t68 = -10141803;

	t68 = ((x293/x294)<(x295|x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = 15;
	static volatile int64_t x298 = INT64_MAX;
	int16_t x299 = -1;
	static int16_t x300 = INT16_MAX;
	volatile int32_t t69 = 23;

	t69 = ((x297/x298)<(x299|x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x301 = -1411;
	uint64_t x302 = UINT64_MAX;
	volatile int64_t x303 = INT64_MIN;
	volatile int8_t x304 = -1;
	volatile int32_t t70 = 48106538;

	t70 = ((x301/x302)<(x303|x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x306 = 72778;
	uint16_t x307 = 1U;
	volatile int64_t x308 = -1LL;
	static volatile int32_t t71 = -19186255;

	t71 = ((x305/x306)<(x307|x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = 8554;
	int64_t x314 = -517099752779927LL;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t72 = 8;

	t72 = ((x313/x314)<(x315|x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	static uint64_t x319 = 338427270021058LLU;
	int32_t x320 = -1036154;
	volatile int32_t t73 = -7515;

	t73 = ((x317/x318)<(x319|x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x321 = 0U;
	static int32_t x323 = INT32_MIN;
	int32_t x324 = INT32_MIN;

	t74 = ((x321/x322)<(x323|x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = 4U;
	static volatile int64_t x326 = -95261938051273538LL;
	volatile int8_t x327 = INT8_MIN;
	int32_t t75 = 114;

	t75 = ((x325/x326)<(x327|x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x329 = 86LLU;
	static volatile int16_t x330 = INT16_MAX;
	uint64_t x331 = 20810LLU;
	static int8_t x332 = INT8_MIN;
	int32_t t76 = 7;

	t76 = ((x329/x330)<(x331|x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x333 = INT8_MIN;
	int64_t x334 = INT64_MAX;
	uint8_t x335 = UINT8_MAX;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t77 = 52;

	t77 = ((x333/x334)<(x335|x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = INT32_MIN;
	static uint64_t x340 = UINT64_MAX;
	volatile int32_t t78 = -18;

	t78 = ((x337/x338)<(x339|x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x341 = UINT8_MAX;
	volatile uint32_t x342 = 104500U;
	static volatile int8_t x343 = -1;
	int32_t t79 = 7046273;

	t79 = ((x341/x342)<(x343|x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x345 = INT16_MAX;
	static int16_t x346 = -1;
	static int32_t x347 = -971;
	static int64_t x348 = INT64_MIN;
	int32_t t80 = -1218;

	t80 = ((x345/x346)<(x347|x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x349 = UINT64_MAX;
	volatile uint8_t x350 = 53U;
	uint32_t x352 = UINT32_MAX;
	int32_t t81 = -3835429;

	t81 = ((x349/x350)<(x351|x352));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x353 = 4088;
	int32_t x354 = -3104719;
	volatile int8_t x355 = -27;

	t82 = ((x353/x354)<(x355|x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x357 = INT8_MIN;
	static uint8_t x359 = 3U;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t83 = 1882;

	t83 = ((x357/x358)<(x359|x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = INT8_MIN;
	static int16_t x362 = INT16_MAX;
	int8_t x363 = 5;
	volatile int32_t t84 = 321;

	t84 = ((x361/x362)<(x363|x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = 0;
	uint32_t x366 = UINT32_MAX;
	static volatile int32_t x367 = -1;
	int32_t x368 = INT32_MAX;

	t85 = ((x365/x366)<(x367|x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x369 = 14;
	int32_t x370 = INT32_MAX;
	volatile int64_t x371 = -1LL;
	int32_t t86 = 177;

	t86 = ((x369/x370)<(x371|x372));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x373 = 17;
	static uint16_t x374 = 105U;
	int16_t x376 = INT16_MIN;
	volatile int32_t t87 = 23640;

	t87 = ((x373/x374)<(x375|x376));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x377 = 0U;
	static int16_t x378 = -1;
	uint16_t x380 = 0U;
	volatile int32_t t88 = -41922;

	t88 = ((x377/x378)<(x379|x380));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x381 = 6329440835506LLU;
	uint16_t x382 = UINT16_MAX;
	uint64_t x384 = 3754480236628LLU;
	volatile int32_t t89 = -13;

	t89 = ((x381/x382)<(x383|x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x386 = UINT64_MAX;
	static int64_t x387 = -1LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t90 = -989;

	t90 = ((x385/x386)<(x387|x388));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x389 = 1415464U;
	uint16_t x391 = 12850U;
	int64_t x392 = INT64_MIN;

	t91 = ((x389/x390)<(x391|x392));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = -40;
	volatile int64_t x394 = INT64_MIN;
	int64_t x396 = -1LL;
	volatile int32_t t92 = -3;

	t92 = ((x393/x394)<(x395|x396));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x397 = 22U;
	int64_t x399 = INT64_MAX;
	volatile int8_t x400 = 14;
	volatile int32_t t93 = 25418;

	t93 = ((x397/x398)<(x399|x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = INT16_MIN;
	int64_t x404 = -3802856783562315LL;

	t94 = ((x401/x402)<(x403|x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = 57790U;
	uint16_t x406 = 4470U;
	volatile uint16_t x408 = 7471U;
	int32_t t95 = 1618;

	t95 = ((x405/x406)<(x407|x408));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x409 = 2U;
	static int64_t x410 = -1LL;
	int8_t x411 = -1;
	int32_t x412 = INT32_MAX;

	t96 = ((x409/x410)<(x411|x412));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x413 = INT32_MAX;
	static int8_t x414 = -1;
	volatile uint32_t x415 = 4406196U;
	int32_t t97 = 14;

	t97 = ((x413/x414)<(x415|x416));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x417 = 6245181436607074LLU;
	uint64_t x420 = 18064848278787LLU;

	t98 = ((x417/x418)<(x419|x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x421 = 1466164U;
	int32_t x422 = 8287936;
	static volatile int16_t x423 = INT16_MIN;
	volatile int32_t x424 = INT32_MIN;
	int32_t t99 = 2870;

	t99 = ((x421/x422)<(x423|x424));

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
