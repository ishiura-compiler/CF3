#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
volatile int64_t x5 = -1889382275272LL;
uint8_t x6 = 0U;
static int8_t x14 = INT8_MIN;
static int64_t x20 = -31604LL;
uint64_t x21 = 5545LLU;
volatile int64_t x26 = INT64_MIN;
volatile int64_t x29 = -2097373703318434LL;
volatile int8_t x31 = -1;
static uint64_t x41 = UINT64_MAX;
int32_t t11 = -524442129;
static uint64_t x62 = 10166109938LLU;
volatile uint16_t x66 = 5965U;
static volatile int16_t x68 = INT16_MIN;
int8_t x73 = -1;
int32_t t24 = 29782742;
volatile uint8_t x101 = 7U;
static uint64_t x104 = 1777950811036LLU;
static int8_t x113 = -1;
int64_t x122 = 18LL;
volatile uint32_t x123 = 1913589847U;
static volatile int16_t x130 = INT16_MIN;
volatile int16_t x135 = INT16_MAX;
volatile int16_t x141 = INT16_MIN;
int32_t t35 = -301735;
int32_t x156 = 523046213;
volatile int32_t t36 = -109605;
static volatile int32_t t38 = 77951;
volatile int8_t x171 = INT8_MIN;
int8_t x172 = INT8_MAX;
int16_t x176 = INT16_MIN;
uint64_t x178 = 535788LLU;
int64_t x186 = 4379701538016507LL;
static int16_t x193 = -1;
static volatile int8_t x196 = INT8_MAX;
static int32_t t46 = 8;
static int8_t x197 = INT8_MIN;
uint32_t x198 = UINT32_MAX;
int16_t x207 = 18;
static int32_t x208 = INT32_MIN;
int8_t x215 = 58;
int32_t t51 = -221;
volatile int32_t t52 = 7909;
uint32_t x222 = 4899U;
volatile int64_t x225 = 523142658453709LL;
volatile int32_t t55 = -97;
int16_t x238 = INT16_MIN;
volatile int64_t x241 = INT64_MAX;
volatile int32_t t58 = 260508642;
int32_t t60 = -95;
volatile int32_t t62 = 81558;
static int32_t x263 = INT32_MIN;
static volatile int32_t t63 = -1926688;
int64_t x266 = 2104020032332265LL;
volatile int32_t x268 = INT32_MAX;
volatile int32_t t66 = -1526;
int64_t x285 = INT64_MAX;
uint64_t x291 = 558958LLU;
int16_t x294 = -1;
int8_t x296 = INT8_MIN;
int16_t x297 = INT16_MIN;
volatile uint8_t x301 = UINT8_MAX;
static uint16_t x305 = 7U;
static uint16_t x306 = 99U;
uint64_t x308 = UINT64_MAX;
uint16_t x310 = 1U;
uint8_t x312 = UINT8_MAX;
volatile int8_t x316 = -20;
int32_t t76 = -87046676;
int32_t t77 = -18916395;
volatile int8_t x321 = 14;
volatile int16_t x323 = -1;
static int32_t x336 = INT32_MAX;
static int64_t x338 = -1LL;
int32_t x340 = 672356742;
int32_t x344 = 3046;
int16_t x354 = 0;
volatile int32_t t85 = 300;
uint32_t x357 = UINT32_MAX;
volatile int32_t x359 = INT32_MIN;
uint64_t x362 = 1932LLU;
volatile int64_t x364 = -143LL;
int32_t x369 = INT32_MIN;
uint8_t x370 = 76U;
volatile uint32_t x379 = 99U;
int32_t t91 = 41;
uint16_t x383 = 7077U;
uint32_t x386 = UINT32_MAX;
volatile int8_t x387 = INT8_MIN;
volatile uint16_t x390 = 153U;
uint16_t x391 = 17872U;
volatile int8_t x392 = INT8_MIN;
int64_t x396 = INT64_MIN;
static int8_t x404 = -16;
static int32_t x408 = -1;
volatile int64_t x411 = -1939712482866LL;


void f0(void) {
	int64_t x1 = -1LL;
	int32_t x3 = -13;
	int64_t x4 = -1LL;
	int32_t t0 = 152;

	t0 = ((x1^x2)<=(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = -1;
	static uint8_t x8 = 65U;
	volatile int32_t t1 = -102;

	t1 = ((x5^x6)<=(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int32_t x10 = -1;
	int32_t x11 = INT32_MIN;
	static int8_t x12 = 1;
	volatile int32_t t2 = -1849;

	t2 = ((x9^x10)<=(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 234U;
	static int64_t x15 = -1LL;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -1;

	t3 = ((x13^x14)<=(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int8_t x18 = -1;
	uint16_t x19 = UINT16_MAX;
	int32_t t4 = 4682;

	t4 = ((x17^x18)<=(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x22 = INT8_MIN;
	static int16_t x23 = INT16_MAX;
	static uint64_t x24 = 17456479LLU;
	static volatile int32_t t5 = -8319791;

	t5 = ((x21^x22)<=(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = INT64_MIN;
	int32_t x27 = INT32_MIN;
	uint8_t x28 = 10U;
	volatile int32_t t6 = -19249;

	t6 = ((x25^x26)<=(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	static int16_t x32 = 3291;
	static int32_t t7 = 1;

	t7 = ((x29^x30)<=(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	int16_t x34 = -1;
	int8_t x35 = -4;
	int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -218714360;

	t8 = ((x33^x34)<=(x35/x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = 43499LL;
	static uint16_t x38 = UINT16_MAX;
	int16_t x39 = INT16_MIN;
	uint64_t x40 = 4109897LLU;
	volatile int32_t t9 = 1564;

	t9 = ((x37^x38)<=(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x42 = INT16_MAX;
	int32_t x43 = INT32_MAX;
	uint64_t x44 = 4703663857216LLU;
	static volatile int32_t t10 = -17350;

	t10 = ((x41^x42)<=(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int32_t x46 = INT32_MIN;
	int32_t x47 = 0;
	static int8_t x48 = INT8_MIN;

	t11 = ((x45^x46)<=(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = INT32_MIN;
	volatile int8_t x50 = INT8_MAX;
	uint16_t x51 = 344U;
	int64_t x52 = INT64_MIN;
	volatile int32_t t12 = 0;

	t12 = ((x49^x50)<=(x51/x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int32_t x54 = 2653222;
	volatile uint64_t x55 = 257128502LLU;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 38404748;

	t13 = ((x53^x54)<=(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = -1;
	int16_t x58 = -428;
	int32_t x59 = -1;
	int16_t x60 = INT16_MIN;
	int32_t t14 = 839;

	t14 = ((x57^x58)<=(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint8_t x63 = 115U;
	static int16_t x64 = 7;
	volatile int32_t t15 = 7075;

	t15 = ((x61^x62)<=(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int32_t x67 = INT32_MIN;
	int32_t t16 = -1015;

	t16 = ((x65^x66)<=(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	volatile int16_t x70 = 132;
	volatile uint64_t x71 = 4880915105352LLU;
	volatile int16_t x72 = 3006;
	int32_t t17 = -1205064;

	t17 = ((x69^x70)<=(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	int16_t x75 = INT16_MIN;
	static uint32_t x76 = 64682U;
	int32_t t18 = 65;

	t18 = ((x73^x74)<=(x75/x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int16_t x78 = INT16_MIN;
	volatile uint64_t x79 = 1572659LLU;
	uint16_t x80 = 16301U;
	int32_t t19 = 7574;

	t19 = ((x77^x78)<=(x79/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 14910U;
	int16_t x82 = -1;
	int32_t x83 = -1;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 797;

	t20 = ((x81^x82)<=(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MAX;
	int8_t x87 = INT8_MIN;
	static int64_t x88 = 290861920173466405LL;
	int32_t t21 = -510;

	t21 = ((x85^x86)<=(x87/x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x89 = 565U;
	static volatile uint16_t x90 = 10693U;
	int16_t x91 = -1;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -389521;

	t22 = ((x89^x90)<=(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 2U;
	volatile uint32_t x94 = UINT32_MAX;
	static int16_t x95 = 1;
	uint32_t x96 = 3282262U;
	volatile int32_t t23 = -4796;

	t23 = ((x93^x94)<=(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = -1;
	int8_t x99 = -52;
	uint16_t x100 = UINT16_MAX;

	t24 = ((x97^x98)<=(x99/x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = -14LL;
	int16_t x103 = -7;
	volatile int32_t t25 = 1;

	t25 = ((x101^x102)<=(x103/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = UINT64_MAX;
	int8_t x106 = INT8_MIN;
	volatile int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	int32_t t26 = -3869;

	t26 = ((x105^x106)<=(x107/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x114 = INT64_MAX;
	static int64_t x115 = -370467LL;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t27 = 4;

	t27 = ((x113^x114)<=(x115/x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = 22U;
	uint32_t x118 = 10670030U;
	volatile int8_t x119 = INT8_MAX;
	static int16_t x120 = INT16_MIN;
	int32_t t28 = 7523365;

	t28 = ((x117^x118)<=(x119/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = 9U;
	int32_t x124 = -111076724;
	int32_t t29 = 26;

	t29 = ((x121^x122)<=(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -59LL;
	volatile int8_t x126 = INT8_MAX;
	int64_t x127 = INT64_MIN;
	static volatile int8_t x128 = INT8_MIN;
	int32_t t30 = 1920;

	t30 = ((x125^x126)<=(x127/x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x129 = -1;
	int32_t x131 = INT32_MIN;
	static int64_t x132 = INT64_MAX;
	volatile int32_t t31 = -14656;

	t31 = ((x129^x130)<=(x131/x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = UINT8_MAX;
	volatile int8_t x134 = -1;
	uint64_t x136 = 446LLU;
	static int32_t t32 = 418537;

	t32 = ((x133^x134)<=(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	uint32_t x138 = 1U;
	int16_t x139 = 203;
	volatile uint8_t x140 = 2U;
	static volatile int32_t t33 = 5514;

	t33 = ((x137^x138)<=(x139/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x142 = INT64_MAX;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 185U;
	int32_t t34 = 12;

	t34 = ((x141^x142)<=(x143/x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	uint8_t x146 = UINT8_MAX;
	static volatile int32_t x147 = 53;
	int32_t x148 = INT32_MAX;

	t35 = ((x145^x146)<=(x147/x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -28;
	volatile int8_t x154 = 13;
	int64_t x155 = INT64_MIN;

	t36 = ((x153^x154)<=(x155/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	volatile int16_t x158 = -1;
	uint8_t x159 = 33U;
	uint32_t x160 = UINT32_MAX;
	static volatile int32_t t37 = -376606;

	t37 = ((x157^x158)<=(x159/x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 69U;
	int64_t x162 = INT64_MIN;
	int64_t x163 = INT64_MIN;
	static int8_t x164 = INT8_MAX;

	t38 = ((x161^x162)<=(x163/x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	volatile uint16_t x166 = UINT16_MAX;
	uint8_t x167 = UINT8_MAX;
	static int8_t x168 = -1;
	int32_t t39 = 783809209;

	t39 = ((x165^x166)<=(x167/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x169 = 3404595857707LLU;
	static int8_t x170 = INT8_MAX;
	static volatile int32_t t40 = 14034984;

	t40 = ((x169^x170)<=(x171/x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x173 = UINT8_MAX;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = -338;
	volatile int32_t t41 = 47615207;

	t41 = ((x173^x174)<=(x175/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = -151713;
	uint32_t x179 = 264296U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t42 = 4;

	t42 = ((x177^x178)<=(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = INT64_MAX;
	int16_t x182 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	int32_t t43 = 26819;

	t43 = ((x181^x182)<=(x183/x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -268157275929889LL;
	int32_t x187 = -733;
	int16_t x188 = 960;
	static int32_t t44 = 747807;

	t44 = ((x185^x186)<=(x187/x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -10734626;
	volatile int32_t x190 = INT32_MAX;
	int32_t x191 = INT32_MAX;
	volatile int64_t x192 = -3869139164620386LL;
	static int32_t t45 = 11761;

	t45 = ((x189^x190)<=(x191/x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x194 = 10LLU;
	int64_t x195 = -1LL;

	t46 = ((x193^x194)<=(x195/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x199 = 1773737570681507445LL;
	static volatile uint64_t x200 = UINT64_MAX;
	int32_t t47 = 675791086;

	t47 = ((x197^x198)<=(x199/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = INT32_MIN;
	uint64_t x202 = UINT64_MAX;
	static uint32_t x203 = 5021U;
	int64_t x204 = -1LL;
	int32_t t48 = 0;

	t48 = ((x201^x202)<=(x203/x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = 0;
	int32_t x206 = INT32_MIN;
	volatile int32_t t49 = 35;

	t49 = ((x205^x206)<=(x207/x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = 891;
	volatile int16_t x210 = INT16_MAX;
	int8_t x211 = INT8_MIN;
	volatile int64_t x212 = INT64_MAX;
	int32_t t50 = 6;

	t50 = ((x209^x210)<=(x211/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = -1;
	int64_t x214 = -1LL;
	uint16_t x216 = 11U;

	t51 = ((x213^x214)<=(x215/x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x217 = 53;
	int8_t x218 = -1;
	static volatile uint16_t x219 = 207U;
	int8_t x220 = INT8_MIN;

	t52 = ((x217^x218)<=(x219/x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MIN;
	static volatile int8_t x223 = -1;
	static int8_t x224 = INT8_MAX;
	int32_t t53 = -480;

	t53 = ((x221^x222)<=(x223/x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x226 = 10U;
	uint32_t x227 = UINT32_MAX;
	static int8_t x228 = INT8_MAX;
	int32_t t54 = 588782;

	t54 = ((x225^x226)<=(x227/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = UINT64_MAX;
	static int32_t x230 = 2037825;
	int64_t x231 = 57844098LL;
	static int64_t x232 = INT64_MIN;

	t55 = ((x229^x230)<=(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = -1;
	volatile uint8_t x234 = 38U;
	int8_t x235 = 1;
	int64_t x236 = 3860611679LL;
	int32_t t56 = 3;

	t56 = ((x233^x234)<=(x235/x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x237 = UINT8_MAX;
	static int8_t x239 = INT8_MIN;
	int64_t x240 = 1888821272341LL;
	static volatile int32_t t57 = 0;

	t57 = ((x237^x238)<=(x239/x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x242 = UINT32_MAX;
	static int8_t x243 = INT8_MAX;
	int64_t x244 = INT64_MIN;

	t58 = ((x241^x242)<=(x243/x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	volatile int8_t x246 = -1;
	static volatile int32_t x247 = -489413;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t59 = 768495615;

	t59 = ((x245^x246)<=(x247/x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x249 = UINT8_MAX;
	static volatile uint16_t x250 = 711U;
	int64_t x251 = INT64_MIN;
	int64_t x252 = INT64_MAX;

	t60 = ((x249^x250)<=(x251/x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x253 = INT64_MAX;
	uint32_t x254 = 1U;
	int32_t x255 = INT32_MAX;
	int16_t x256 = -1;
	volatile int32_t t61 = 40576;

	t61 = ((x253^x254)<=(x255/x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -4;
	int32_t x258 = 3689825;
	uint64_t x259 = 1LLU;
	int64_t x260 = INT64_MIN;

	t62 = ((x257^x258)<=(x259/x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -9;
	int64_t x262 = INT64_MIN;
	int64_t x264 = INT64_MAX;

	t63 = ((x261^x262)<=(x263/x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = INT8_MIN;
	uint32_t x267 = 1761U;
	int32_t t64 = 176769935;

	t64 = ((x265^x266)<=(x267/x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 32U;
	static uint32_t x270 = 259U;
	int8_t x271 = 0;
	int8_t x272 = -1;
	int32_t t65 = 1078956;

	t65 = ((x269^x270)<=(x271/x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 4864U;
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = INT64_MIN;

	t66 = ((x273^x274)<=(x275/x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x277 = INT16_MIN;
	uint32_t x278 = 932548U;
	volatile uint32_t x279 = UINT32_MAX;
	int32_t x280 = 874;
	int32_t t67 = 2193;

	t67 = ((x277^x278)<=(x279/x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -737060050LL;
	volatile int16_t x282 = 277;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = UINT32_MAX;
	int32_t t68 = 1003741;

	t68 = ((x281^x282)<=(x283/x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x286 = INT8_MIN;
	uint8_t x287 = UINT8_MAX;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t69 = -1165;

	t69 = ((x285^x286)<=(x287/x288));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = 27;
	int64_t x292 = INT64_MIN;
	volatile int32_t t70 = -261865;

	t70 = ((x289^x290)<=(x291/x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 56777899LLU;
	int32_t x295 = INT32_MIN;
	int32_t t71 = 66;

	t71 = ((x293^x294)<=(x295/x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x298 = INT32_MIN;
	int64_t x299 = 20949762797121LL;
	int8_t x300 = INT8_MAX;
	static volatile int32_t t72 = -66264261;

	t72 = ((x297^x298)<=(x299/x300));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x302 = -1;
	uint32_t x303 = 7050U;
	static uint16_t x304 = UINT16_MAX;
	static volatile int32_t t73 = -1;

	t73 = ((x301^x302)<=(x303/x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x307 = -44;
	volatile int32_t t74 = -1959;

	t74 = ((x305^x306)<=(x307/x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x309 = -1;
	volatile int16_t x311 = -32;
	volatile int32_t t75 = 10286;

	t75 = ((x309^x310)<=(x311/x312));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x313 = 0;
	int16_t x314 = INT16_MIN;
	static uint8_t x315 = UINT8_MAX;

	t76 = ((x313^x314)<=(x315/x316));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MAX;
	int64_t x318 = INT64_MIN;
	volatile uint16_t x319 = 224U;
	uint16_t x320 = 11U;

	t77 = ((x317^x318)<=(x319/x320));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x322 = INT8_MIN;
	uint32_t x324 = 179407154U;
	int32_t t78 = -33855;

	t78 = ((x321^x322)<=(x323/x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x325 = -2361853;
	static int64_t x326 = 344332762639LL;
	int8_t x327 = 4;
	uint32_t x328 = 56152U;
	int32_t t79 = 8921;

	t79 = ((x325^x326)<=(x327/x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 7492943U;
	volatile uint8_t x330 = 4U;
	volatile uint16_t x331 = 35U;
	uint8_t x332 = 36U;
	int32_t t80 = 49;

	t80 = ((x329^x330)<=(x331/x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = -1;
	int16_t x334 = INT16_MIN;
	int32_t x335 = 1073141;
	volatile int32_t t81 = 162463373;

	t81 = ((x333^x334)<=(x335/x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = UINT32_MAX;
	uint32_t x339 = 118469U;
	int32_t t82 = 226634403;

	t82 = ((x337^x338)<=(x339/x340));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = -491;
	int64_t x342 = -122320LL;
	int8_t x343 = 10;
	static int32_t t83 = 7;

	t83 = ((x341^x342)<=(x343/x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 260883LLU;
	int32_t x346 = 291603317;
	int32_t x347 = -1;
	int64_t x348 = 61771LL;
	volatile int32_t t84 = -4090;

	t84 = ((x345^x346)<=(x347/x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x353 = INT8_MIN;
	int64_t x355 = -1LL;
	uint8_t x356 = UINT8_MAX;

	t85 = ((x353^x354)<=(x355/x356));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x358 = 1;
	uint8_t x360 = UINT8_MAX;
	int32_t t86 = 28;

	t86 = ((x357^x358)<=(x359/x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MAX;
	static volatile int32_t x363 = INT32_MIN;
	volatile int32_t t87 = 42674102;

	t87 = ((x361^x362)<=(x363/x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = 6;
	static volatile int16_t x366 = INT16_MIN;
	static uint64_t x367 = 1993336557LLU;
	int32_t x368 = INT32_MAX;
	volatile int32_t t88 = -67695;

	t88 = ((x365^x366)<=(x367/x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x371 = 23U;
	int64_t x372 = INT64_MAX;
	volatile int32_t t89 = -77209875;

	t89 = ((x369^x370)<=(x371/x372));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x373 = -15;
	uint64_t x374 = UINT64_MAX;
	volatile int16_t x375 = INT16_MIN;
	int8_t x376 = 1;
	int32_t t90 = -158;

	t90 = ((x373^x374)<=(x375/x376));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x377 = INT64_MAX;
	int64_t x378 = 214443933927610LL;
	static int64_t x380 = INT64_MIN;

	t91 = ((x377^x378)<=(x379/x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x381 = 1813082215LLU;
	int32_t x382 = -12;
	int64_t x384 = -48420971LL;
	volatile int32_t t92 = 790937354;

	t92 = ((x381^x382)<=(x383/x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = -16;
	int64_t x388 = INT64_MIN;
	int32_t t93 = 830396;

	t93 = ((x385^x386)<=(x387/x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x389 = -2700959880454032165LL;
	static volatile int32_t t94 = -16;

	t94 = ((x389^x390)<=(x391/x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -499698;
	static int64_t x394 = 8LL;
	static int64_t x395 = -87689849285LL;
	int32_t t95 = -37347;

	t95 = ((x393^x394)<=(x395/x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x397 = INT32_MIN;
	static int16_t x398 = INT16_MIN;
	uint32_t x399 = 15745U;
	static uint32_t x400 = UINT32_MAX;
	volatile int32_t t96 = 9028;

	t96 = ((x397^x398)<=(x399/x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x401 = INT64_MIN;
	int16_t x402 = -1;
	uint32_t x403 = 421523576U;
	volatile int32_t t97 = -1335269;

	t97 = ((x401^x402)<=(x403/x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = -421635LL;
	volatile uint32_t x406 = 33822188U;
	static uint64_t x407 = UINT64_MAX;
	volatile int32_t t98 = 115423;

	t98 = ((x405^x406)<=(x407/x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	uint16_t x410 = UINT16_MAX;
	int32_t x412 = INT32_MIN;
	int32_t t99 = -11557441;

	t99 = ((x409^x410)<=(x411/x412));

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

