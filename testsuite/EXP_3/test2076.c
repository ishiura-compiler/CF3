#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x13 = INT32_MIN;
uint16_t x15 = 8143U;
int32_t x16 = INT32_MAX;
uint16_t x25 = 13748U;
int32_t t5 = 32431;
volatile uint64_t x29 = 3460867560111LLU;
static volatile uint64_t x38 = 273LLU;
int16_t x40 = -11371;
int32_t x43 = INT32_MAX;
int64_t x52 = INT64_MAX;
uint16_t x53 = 9U;
static uint8_t x57 = UINT8_MAX;
uint64_t x63 = UINT64_MAX;
int8_t x64 = 0;
volatile int32_t t15 = 55060;
int64_t x72 = -28LL;
int64_t x82 = 123148LL;
static int32_t x83 = INT32_MIN;
uint32_t x85 = 38668531U;
static int8_t x96 = -1;
int8_t x100 = INT8_MIN;
volatile int32_t x102 = INT32_MAX;
static volatile int32_t t23 = 72866361;
int32_t t24 = 99612520;
static int64_t x109 = -1LL;
volatile uint16_t x110 = 426U;
uint8_t x113 = UINT8_MAX;
volatile int32_t t26 = -19879962;
int8_t x119 = INT8_MIN;
int8_t x120 = INT8_MIN;
int32_t t28 = -179636;
uint64_t x126 = 269LLU;
static int16_t x128 = -3040;
static int32_t x129 = -1;
int32_t x130 = INT32_MIN;
int32_t x135 = -16066;
uint32_t x142 = 503767U;
uint64_t x144 = 724126LLU;
int32_t t33 = -138;
volatile int64_t x152 = INT64_MIN;
uint16_t x154 = 127U;
static int32_t t36 = -134022465;
int8_t x162 = INT8_MIN;
uint64_t x171 = UINT64_MAX;
int16_t x177 = 11061;
uint16_t x179 = 4008U;
int32_t t41 = 10679577;
static int8_t x182 = INT8_MIN;
volatile int32_t t42 = -4087018;
uint16_t x192 = UINT16_MAX;
volatile int32_t t45 = -288032724;
volatile int16_t x199 = INT16_MAX;
int32_t t46 = -618507;
int32_t x226 = -1;
int32_t x227 = -1;
int64_t x232 = -1LL;
int32_t t54 = 3483154;
uint64_t x237 = 3263LLU;
uint8_t x239 = UINT8_MAX;
static int32_t x240 = INT32_MIN;
uint16_t x248 = UINT16_MAX;
volatile int32_t t58 = 892;
int16_t x256 = -1;
static volatile uint32_t x258 = 1225510129U;
static volatile int32_t x260 = 0;
static uint32_t x262 = UINT32_MAX;
static int16_t x263 = INT16_MIN;
uint16_t x266 = UINT16_MAX;
volatile int16_t x269 = INT16_MIN;
static int16_t x270 = 11;
static int32_t t65 = 11;
int32_t t66 = 5;
int32_t x283 = INT32_MIN;
uint16_t x284 = 16070U;
uint8_t x294 = 18U;
static uint64_t x297 = UINT64_MAX;
volatile int16_t x305 = -1;
volatile int16_t x309 = INT16_MAX;
static uint32_t x310 = UINT32_MAX;
int8_t x313 = 37;
int8_t x314 = -1;
static int16_t x319 = -1;
int32_t t76 = 645019656;
uint16_t x324 = UINT16_MAX;
static volatile int32_t t77 = 591825;
int64_t x332 = -1842993664131793458LL;
uint64_t x338 = 725534103499252LLU;
int32_t x350 = -390150;
static volatile int32_t t83 = 108028;
int64_t x353 = INT64_MIN;
volatile uint64_t x356 = 1LLU;
volatile int32_t t85 = 1477821;
uint32_t x361 = 27690982U;
int32_t x364 = INT32_MIN;
static volatile int32_t t87 = 22246598;
static int32_t t91 = -19458;
volatile uint16_t x388 = 30U;
static int16_t x390 = 100;
uint8_t x391 = 0U;
static uint16_t x393 = UINT16_MAX;
static uint64_t x396 = 0LLU;
int8_t x397 = -1;
uint8_t x406 = 31U;
volatile int64_t x407 = INT64_MAX;
int64_t x410 = 6554357137351LL;


void f0(void) {
	volatile uint8_t x1 = 2U;
	static volatile int32_t x2 = -1;
	int64_t x3 = INT64_MIN;
	int16_t x4 = -1;
	volatile int32_t t0 = 2690;

	t0 = ((x1/x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int8_t x6 = INT8_MAX;
	static int32_t x7 = INT32_MIN;
	static uint32_t x8 = 15676U;
	volatile int32_t t1 = 1119;

	t1 = ((x5/x6)<(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 24U;
	int16_t x10 = INT16_MAX;
	uint8_t x11 = 26U;
	volatile int8_t x12 = INT8_MAX;
	int32_t t2 = -6;

	t2 = ((x9/x10)<(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	volatile int32_t t3 = -5;

	t3 = ((x13/x14)<(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1742081631U;
	int64_t x18 = INT64_MIN;
	int32_t x19 = INT32_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -351;

	t4 = ((x17/x18)<(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x26 = INT16_MAX;
	static uint32_t x27 = 3929446U;
	uint32_t x28 = 1U;

	t5 = ((x25/x26)<(x27^x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -1;
	uint16_t x31 = 61U;
	int16_t x32 = INT16_MIN;
	static volatile int32_t t6 = 9490;

	t6 = ((x29/x30)<(x31^x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 1U;
	int32_t x34 = -940302;
	int32_t x35 = -1;
	int16_t x36 = INT16_MIN;
	int32_t t7 = 2090;

	t7 = ((x33/x34)<(x35^x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x37 = INT64_MAX;
	uint32_t x39 = 42U;
	static int32_t t8 = 469028;

	t8 = ((x37/x38)<(x39^x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x41 = 1598U;
	int16_t x42 = INT16_MIN;
	int8_t x44 = INT8_MIN;
	int32_t t9 = 3783504;

	t9 = ((x41/x42)<(x43^x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 0;
	volatile int32_t x46 = INT32_MAX;
	static volatile uint16_t x47 = 30U;
	int32_t x48 = -1;
	static volatile int32_t t10 = -6;

	t10 = ((x45/x46)<(x47^x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	static volatile int64_t x50 = INT64_MIN;
	volatile uint16_t x51 = 87U;
	static volatile int32_t t11 = 753811;

	t11 = ((x49/x50)<(x51^x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x54 = 42U;
	static int64_t x55 = INT64_MAX;
	static int32_t x56 = INT32_MIN;
	int32_t t12 = 167534338;

	t12 = ((x53/x54)<(x55^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = INT64_MIN;
	int8_t x59 = -5;
	int32_t x60 = INT32_MAX;
	int32_t t13 = -583828;

	t13 = ((x57/x58)<(x59^x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	volatile int16_t x62 = -1;
	volatile int32_t t14 = 21;

	t14 = ((x61/x62)<(x63^x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = 182U;
	uint16_t x67 = 0U;
	int64_t x68 = INT64_MAX;

	t15 = ((x65/x66)<(x67^x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -1;
	static uint64_t x70 = 118851LLU;
	int32_t x71 = INT32_MIN;
	volatile int32_t t16 = 8262913;

	t16 = ((x69/x70)<(x71^x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 80582475U;
	int64_t x78 = INT64_MIN;
	uint16_t x79 = 14149U;
	static int64_t x80 = 133076696872LL;
	int32_t t17 = 34;

	t17 = ((x77/x78)<(x79^x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = -1;
	uint8_t x84 = UINT8_MAX;
	static int32_t t18 = -13;

	t18 = ((x81/x82)<(x83^x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x86 = INT16_MIN;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t19 = 29625059;

	t19 = ((x85/x86)<(x87^x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	int32_t x91 = -1869;
	uint64_t x92 = 3994161381375414LLU;
	volatile int32_t t20 = -945184;

	t20 = ((x89/x90)<(x91^x92));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = 2658168LL;
	static volatile int64_t x94 = INT64_MAX;
	int32_t x95 = -1;
	int32_t t21 = 32375857;

	t21 = ((x93/x94)<(x95^x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 3;
	uint64_t x98 = 676912LLU;
	uint16_t x99 = UINT16_MAX;
	static volatile int32_t t22 = 12;

	t22 = ((x97/x98)<(x99^x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x101 = INT16_MIN;
	volatile uint64_t x103 = 306187055099LLU;
	volatile int16_t x104 = 3;

	t23 = ((x101/x102)<(x103^x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 133476038894LL;
	volatile int8_t x106 = -17;
	int32_t x107 = -7;
	uint8_t x108 = 0U;

	t24 = ((x105/x106)<(x107^x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x111 = 6;
	int64_t x112 = INT64_MIN;
	int32_t t25 = 6474911;

	t25 = ((x109/x110)<(x111^x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = -1LL;
	volatile uint8_t x115 = 3U;
	uint64_t x116 = 221945137897264LLU;

	t26 = ((x113/x114)<(x115^x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = -1LL;
	uint64_t x118 = UINT64_MAX;
	int32_t t27 = -996087;

	t27 = ((x117/x118)<(x119^x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	uint32_t x122 = UINT32_MAX;
	int16_t x123 = 10516;
	uint64_t x124 = UINT64_MAX;

	t28 = ((x121/x122)<(x123^x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	uint8_t x127 = 1U;
	int32_t t29 = 3592001;

	t29 = ((x125/x126)<(x127^x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x131 = 1;
	static uint64_t x132 = 469596436570413692LLU;
	volatile int32_t t30 = 136755456;

	t30 = ((x129/x130)<(x131^x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x133 = INT8_MIN;
	uint32_t x134 = 241002155U;
	int8_t x136 = -1;
	volatile int32_t t31 = -37990;

	t31 = ((x133/x134)<(x135^x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 5U;
	uint8_t x138 = 97U;
	uint16_t x139 = 5U;
	static uint32_t x140 = UINT32_MAX;
	static int32_t t32 = -56167369;

	t32 = ((x137/x138)<(x139^x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int32_t x141 = INT32_MIN;
	uint8_t x143 = 5U;

	t33 = ((x141/x142)<(x143^x144));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	static uint32_t x150 = 2287U;
	uint32_t x151 = 761444U;
	int32_t t34 = -4666984;

	t34 = ((x149/x150)<(x151^x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x153 = 7858762LLU;
	int32_t x155 = -252;
	int8_t x156 = INT8_MAX;
	int32_t t35 = 483077783;

	t35 = ((x153/x154)<(x155^x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = UINT16_MAX;
	uint64_t x158 = UINT64_MAX;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MAX;

	t36 = ((x157/x158)<(x159^x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x161 = 5U;
	volatile int64_t x163 = INT64_MAX;
	volatile int16_t x164 = 48;
	int32_t t37 = -292333884;

	t37 = ((x161/x162)<(x163^x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	int64_t x167 = 303070968208627476LL;
	static int8_t x168 = -5;
	int32_t t38 = 568;

	t38 = ((x165/x166)<(x167^x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	uint32_t x170 = 449U;
	int64_t x172 = -7LL;
	static int32_t t39 = -1;

	t39 = ((x169/x170)<(x171^x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 57378905U;
	uint16_t x174 = 3448U;
	int8_t x175 = -1;
	uint8_t x176 = 20U;
	int32_t t40 = -150550;

	t40 = ((x173/x174)<(x175^x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x178 = INT16_MIN;
	int16_t x180 = -198;

	t41 = ((x177/x178)<(x179^x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 1;
	static int64_t x183 = -1453162023LL;
	int32_t x184 = 46471;

	t42 = ((x181/x182)<(x183^x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = INT16_MAX;
	int8_t x186 = INT8_MIN;
	int8_t x187 = -1;
	int32_t x188 = INT32_MIN;
	static volatile int32_t t43 = 1;

	t43 = ((x185/x186)<(x187^x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = 123U;
	volatile int16_t x190 = INT16_MIN;
	volatile int16_t x191 = INT16_MAX;
	volatile int32_t t44 = 1;

	t44 = ((x189/x190)<(x191^x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -1;
	volatile uint32_t x194 = 11U;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = 3U;

	t45 = ((x193/x194)<(x195^x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = 16067948LLU;
	uint32_t x198 = 1219721U;
	int32_t x200 = INT32_MIN;

	t46 = ((x197/x198)<(x199^x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = INT16_MIN;
	static uint8_t x202 = 90U;
	int16_t x203 = -1;
	static int16_t x204 = INT16_MAX;
	int32_t t47 = 364317;

	t47 = ((x201/x202)<(x203^x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x205 = 31523135976LLU;
	static int64_t x206 = -2063922263LL;
	uint32_t x207 = UINT32_MAX;
	volatile int64_t x208 = INT64_MIN;
	int32_t t48 = 1;

	t48 = ((x205/x206)<(x207^x208));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = 18U;
	int8_t x210 = INT8_MAX;
	uint8_t x211 = 22U;
	volatile int32_t x212 = -1;
	volatile int32_t t49 = 262479322;

	t49 = ((x209/x210)<(x211^x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MAX;
	volatile int64_t x214 = INT64_MIN;
	static int64_t x215 = INT64_MIN;
	int32_t x216 = -1;
	int32_t t50 = 993174;

	t50 = ((x213/x214)<(x215^x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x217 = INT64_MIN;
	int64_t x218 = INT64_MIN;
	static int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t51 = -1553300;

	t51 = ((x217/x218)<(x219^x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = INT64_MAX;
	int32_t x222 = 73688;
	int32_t x223 = INT32_MAX;
	uint64_t x224 = 3717256592229LLU;
	int32_t t52 = 171;

	t52 = ((x221/x222)<(x223^x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x225 = -2;
	uint64_t x228 = UINT64_MAX;
	static volatile int32_t t53 = 184157214;

	t53 = ((x225/x226)<(x227^x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = INT32_MAX;
	static int8_t x230 = -1;
	int32_t x231 = -1;

	t54 = ((x229/x230)<(x231^x232));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = INT32_MIN;
	uint32_t x234 = 127U;
	int16_t x235 = INT16_MAX;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t55 = 12696;

	t55 = ((x233/x234)<(x235^x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = INT64_MIN;
	int32_t t56 = -11352897;

	t56 = ((x237/x238)<(x239^x240));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = -1;
	volatile int16_t x242 = INT16_MAX;
	uint32_t x243 = UINT32_MAX;
	volatile int32_t x244 = INT32_MAX;
	volatile int32_t t57 = -282520;

	t57 = ((x241/x242)<(x243^x244));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x245 = INT32_MIN;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = INT32_MIN;

	t58 = ((x245/x246)<(x247^x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x249 = 8440;
	volatile uint32_t x250 = UINT32_MAX;
	static volatile int64_t x251 = -1LL;
	int16_t x252 = -3;
	volatile int32_t t59 = 83991295;

	t59 = ((x249/x250)<(x251^x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = 183U;
	int16_t x254 = INT16_MIN;
	int64_t x255 = INT64_MIN;
	volatile int32_t t60 = 1434;

	t60 = ((x253/x254)<(x255^x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x257 = INT32_MAX;
	uint8_t x259 = 5U;
	int32_t t61 = -2028620;

	t61 = ((x257/x258)<(x259^x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x261 = INT32_MIN;
	uint64_t x264 = UINT64_MAX;
	int32_t t62 = 4;

	t62 = ((x261/x262)<(x263^x264));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = UINT32_MAX;
	volatile int32_t x267 = 30;
	int16_t x268 = INT16_MAX;
	volatile int32_t t63 = -6437;

	t63 = ((x265/x266)<(x267^x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x271 = INT32_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t64 = -21443;

	t64 = ((x269/x270)<(x271^x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x273 = UINT16_MAX;
	volatile uint8_t x274 = 30U;
	int64_t x275 = 505915LL;
	int8_t x276 = INT8_MAX;

	t65 = ((x273/x274)<(x275^x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 26745U;
	int8_t x278 = 1;
	uint64_t x279 = UINT64_MAX;
	static int32_t x280 = INT32_MIN;

	t66 = ((x277/x278)<(x279^x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 4U;
	uint16_t x282 = 20144U;
	int32_t t67 = 0;

	t67 = ((x281/x282)<(x283^x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = UINT8_MAX;
	int32_t x286 = 422351126;
	uint8_t x287 = UINT8_MAX;
	volatile int64_t x288 = INT64_MIN;
	int32_t t68 = 7;

	t68 = ((x285/x286)<(x287^x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = INT64_MIN;
	static int8_t x290 = INT8_MIN;
	uint8_t x291 = 15U;
	int64_t x292 = -652794175320LL;
	int32_t t69 = 4126923;

	t69 = ((x289/x290)<(x291^x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x293 = 13498LLU;
	uint8_t x295 = 109U;
	int32_t x296 = -1;
	static int32_t t70 = 505407;

	t70 = ((x293/x294)<(x295^x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x298 = INT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static uint8_t x300 = UINT8_MAX;
	volatile int32_t t71 = -226440396;

	t71 = ((x297/x298)<(x299^x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x301 = 195436U;
	int32_t x302 = -900;
	uint8_t x303 = 2U;
	int8_t x304 = -1;
	volatile int32_t t72 = 46;

	t72 = ((x301/x302)<(x303^x304));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = INT16_MIN;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t73 = 0;

	t73 = ((x305/x306)<(x307^x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x311 = UINT16_MAX;
	uint8_t x312 = 20U;
	int32_t t74 = -2032;

	t74 = ((x309/x310)<(x311^x312));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x315 = INT64_MIN;
	static uint64_t x316 = 52473359LLU;
	int32_t t75 = 74498;

	t75 = ((x313/x314)<(x315^x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = 736815LL;
	static uint32_t x318 = 1063064981U;
	int8_t x320 = -22;

	t76 = ((x317/x318)<(x319^x320));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = INT16_MAX;
	int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MAX;

	t77 = ((x321/x322)<(x323^x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x325 = 45;
	int64_t x326 = INT64_MIN;
	volatile int8_t x327 = INT8_MIN;
	int64_t x328 = -1LL;
	volatile int32_t t78 = 742598996;

	t78 = ((x325/x326)<(x327^x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = INT32_MIN;
	static int8_t x330 = INT8_MIN;
	int16_t x331 = INT16_MIN;
	static volatile int32_t t79 = 62360035;

	t79 = ((x329/x330)<(x331^x332));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	uint8_t x339 = 13U;
	static volatile uint32_t x340 = 115U;
	volatile int32_t t80 = -12;

	t80 = ((x337/x338)<(x339^x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x341 = 430471LLU;
	int16_t x342 = INT16_MAX;
	int64_t x343 = INT64_MAX;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t81 = -241436;

	t81 = ((x341/x342)<(x343^x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x346 = -1728LL;
	int16_t x347 = INT16_MAX;
	uint32_t x348 = 199752U;
	int32_t t82 = -6056;

	t82 = ((x345/x346)<(x347^x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = UINT32_MAX;
	uint64_t x351 = UINT64_MAX;
	int8_t x352 = -1;

	t83 = ((x349/x350)<(x351^x352));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x354 = 95U;
	static int8_t x355 = INT8_MIN;
	static volatile int32_t t84 = -86314321;

	t84 = ((x353/x354)<(x355^x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = 127U;
	static int32_t x358 = -1;
	int16_t x359 = -5468;
	uint32_t x360 = 102767U;

	t85 = ((x357/x358)<(x359^x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x362 = 11986449LLU;
	int16_t x363 = INT16_MIN;
	int32_t t86 = 1;

	t86 = ((x361/x362)<(x363^x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x365 = 242U;
	uint64_t x366 = 52LLU;
	int8_t x367 = INT8_MAX;
	int8_t x368 = INT8_MIN;

	t87 = ((x365/x366)<(x367^x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x369 = 264069271;
	uint16_t x370 = 31U;
	static int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	static volatile int32_t t88 = -11;

	t88 = ((x369/x370)<(x371^x372));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MAX;
	uint32_t x375 = 82601257U;
	uint8_t x376 = 83U;
	static int32_t t89 = -99514;

	t89 = ((x373/x374)<(x375^x376));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x377 = INT8_MAX;
	static int32_t x378 = 24920166;
	uint64_t x379 = 11428LLU;
	static uint8_t x380 = 6U;
	int32_t t90 = -351556257;

	t90 = ((x377/x378)<(x379^x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = INT16_MIN;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	static int64_t x384 = -120619LL;

	t91 = ((x381/x382)<(x383^x384));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	uint64_t x386 = 214682669LLU;
	static uint16_t x387 = UINT16_MAX;
	static int32_t t92 = -175727;

	t92 = ((x385/x386)<(x387^x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = INT8_MAX;
	int8_t x392 = 0;
	static volatile int32_t t93 = -800203799;

	t93 = ((x389/x390)<(x391^x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x394 = INT8_MAX;
	volatile int8_t x395 = INT8_MIN;
	int32_t t94 = 6;

	t94 = ((x393/x394)<(x395^x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x398 = 2404U;
	uint16_t x399 = UINT16_MAX;
	volatile int64_t x400 = -951784LL;
	int32_t t95 = 83673081;

	t95 = ((x397/x398)<(x399^x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MAX;
	uint32_t x403 = UINT32_MAX;
	static volatile int64_t x404 = -1LL;
	int32_t t96 = -1864828;

	t96 = ((x401/x402)<(x403^x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = 1;
	int16_t x408 = INT16_MAX;
	volatile int32_t t97 = -1975;

	t97 = ((x405/x406)<(x407^x408));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x409 = -1;
	int8_t x411 = INT8_MIN;
	volatile int32_t x412 = -16;
	int32_t t98 = 11;

	t98 = ((x409/x410)<(x411^x412));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x413 = INT32_MIN;
	uint64_t x414 = 989417LLU;
	int32_t x415 = INT32_MIN;
	int8_t x416 = INT8_MIN;
	int32_t t99 = -1422566;

	t99 = ((x413/x414)<(x415^x416));

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

