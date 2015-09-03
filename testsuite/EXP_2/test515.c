#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x3 = UINT8_MAX;
volatile int32_t t3 = 923717;
uint8_t x18 = 3U;
int64_t x20 = INT64_MAX;
static int32_t x21 = INT32_MIN;
uint8_t x22 = UINT8_MAX;
int32_t x24 = INT32_MIN;
uint32_t x25 = 12U;
volatile int32_t t7 = -1055087879;
uint32_t x34 = 3U;
int16_t x35 = -1;
int8_t x41 = INT8_MAX;
uint64_t x46 = 4627093182270625373LLU;
uint32_t x54 = 39066082U;
int64_t x60 = INT64_MAX;
volatile uint16_t x70 = 12750U;
volatile int16_t x73 = -1;
volatile uint16_t x74 = UINT16_MAX;
static int64_t x75 = -1LL;
static volatile int32_t t20 = -781;
int64_t x92 = INT64_MIN;
uint8_t x93 = 0U;
static int16_t x100 = INT16_MIN;
uint16_t x103 = 677U;
static int32_t x104 = INT32_MAX;
static int32_t x105 = 45;
uint32_t x106 = 8U;
int64_t x108 = 0LL;
volatile int32_t t26 = -3406625;
uint64_t x109 = UINT64_MAX;
static int64_t x116 = 3351749799725556LL;
int64_t x117 = INT64_MIN;
int16_t x118 = INT16_MIN;
static int64_t x119 = -1LL;
int32_t x120 = -1052904460;
volatile int32_t t29 = -954932;
int8_t x136 = 3;
uint64_t x144 = 2LLU;
int32_t x148 = -1;
int16_t x149 = -1657;
int64_t x151 = -4185143LL;
int8_t x152 = INT8_MAX;
uint16_t x163 = 1U;
uint32_t x178 = UINT32_MAX;
volatile int8_t x186 = -1;
static volatile int32_t t44 = -8823125;
int64_t x189 = -18943264368822LL;
volatile int32_t t46 = -35172;
static int8_t x199 = -1;
int64_t x200 = -21934053040731LL;
volatile int64_t x212 = -642958986384LL;
volatile uint16_t x223 = UINT16_MAX;
volatile int32_t t53 = 1;
uint16_t x225 = 448U;
int8_t x226 = -45;
int64_t x235 = INT64_MIN;
int32_t t55 = 54185;
uint16_t x239 = 674U;
static volatile int8_t x246 = 1;
int32_t t58 = 58;
int16_t x252 = INT16_MIN;
int32_t t59 = -4643312;
int32_t t62 = -270804;
int32_t x269 = 5;
int32_t x271 = INT32_MAX;
int8_t x273 = 29;
static volatile int32_t t66 = -2394372;
static int64_t x282 = 50047104511344372LL;
uint64_t x292 = 1798291LLU;
uint8_t x298 = 13U;
volatile int32_t x299 = INT32_MIN;
volatile int16_t x303 = -1;
int16_t x308 = INT16_MAX;
static int32_t t73 = -908104722;
int32_t x309 = -1;
uint16_t x312 = 1U;
int64_t x330 = 123604039LL;
int32_t x331 = INT32_MIN;
volatile int32_t t79 = 916720;
int32_t x333 = -349800;
int64_t x334 = INT64_MIN;
int16_t x339 = INT16_MIN;
int32_t x344 = INT32_MAX;
volatile int32_t t83 = 9034938;
volatile uint64_t x350 = 3697297634844174LLU;
int32_t x353 = -1;
int8_t x354 = -1;
int16_t x357 = 1;
volatile int32_t t87 = 16;
volatile int16_t x369 = -46;
volatile int32_t t89 = 1;
int32_t x378 = INT32_MIN;
volatile int8_t x389 = INT8_MAX;
volatile int32_t t93 = 28778;
static uint64_t x397 = 792297892328LLU;
int64_t x398 = INT64_MIN;
int64_t x399 = INT64_MIN;
int64_t x400 = INT64_MAX;
int16_t x401 = 3;
int32_t t96 = -130984509;
int32_t x406 = INT32_MAX;
volatile int8_t x409 = INT8_MIN;
volatile int64_t x410 = -3908790382280077023LL;
static uint16_t x414 = 14U;
int16_t x416 = -1;


void f0(void) {
	volatile uint64_t x1 = 18LLU;
	static int8_t x2 = 2;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -24;

	t0 = ((x1+(x2/x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	int16_t x6 = -1;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 13624U;
	int32_t t1 = -3;

	t1 = ((x5+(x6/x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = UINT32_MAX;
	static uint32_t x12 = 475314U;
	int32_t t2 = -1749160;

	t2 = ((x9+(x10/x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MAX;
	int64_t x14 = -795582552834150LL;
	static int8_t x15 = -15;
	volatile uint64_t x16 = 188LLU;

	t3 = ((x13+(x14/x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = UINT8_MAX;
	volatile int32_t x19 = INT32_MAX;
	int32_t t4 = 292571678;

	t4 = ((x17+(x18/x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x23 = UINT32_MAX;
	static volatile int32_t t5 = 120830;

	t5 = ((x21+(x22/x23))==x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	int32_t x27 = -276988604;
	uint32_t x28 = 465623104U;
	static int32_t t6 = 781486939;

	t6 = ((x25+(x26/x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile uint64_t x30 = 505241059426427752LLU;
	int32_t x31 = INT32_MAX;
	int8_t x32 = -15;

	t7 = ((x29+(x30/x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int32_t x36 = INT32_MIN;
	volatile int32_t t8 = -14593;

	t8 = ((x33+(x34/x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int64_t x38 = 21LL;
	int16_t x39 = INT16_MIN;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = -458;

	t9 = ((x37+(x38/x39))==x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = -2;
	int16_t x43 = -58;
	int16_t x44 = -10;
	int32_t t10 = -149496427;

	t10 = ((x41+(x42/x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = 6483;
	volatile uint64_t x47 = UINT64_MAX;
	static volatile int64_t x48 = 305875100091LL;
	int32_t t11 = 65746281;

	t11 = ((x45+(x46/x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 0U;
	static int8_t x50 = 1;
	int32_t x51 = INT32_MIN;
	volatile int8_t x52 = INT8_MAX;
	int32_t t12 = 3053577;

	t12 = ((x49+(x50/x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 7566616715LLU;
	int8_t x55 = INT8_MIN;
	int16_t x56 = -2;
	static volatile int32_t t13 = 81862680;

	t13 = ((x53+(x54/x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	int8_t x58 = INT8_MIN;
	int16_t x59 = -1;
	int32_t t14 = 21989;

	t14 = ((x57+(x58/x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -32;
	static int8_t x62 = INT8_MAX;
	uint8_t x63 = 16U;
	int64_t x64 = INT64_MAX;
	static int32_t t15 = -99747158;

	t15 = ((x61+(x62/x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	static volatile int16_t x66 = INT16_MAX;
	static int64_t x67 = -7802991754LL;
	int8_t x68 = INT8_MIN;
	static int32_t t16 = 907;

	t16 = ((x65+(x66/x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile int64_t x71 = -1662172413528072386LL;
	int8_t x72 = -1;
	int32_t t17 = -108162;

	t17 = ((x69+(x70/x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x76 = INT32_MAX;
	int32_t t18 = 0;

	t18 = ((x73+(x74/x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 15935934LLU;
	int64_t x78 = -1LL;
	int8_t x79 = INT8_MIN;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -1;

	t19 = ((x77+(x78/x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -3594035929LL;
	static int8_t x82 = -1;
	int32_t x83 = INT32_MIN;
	int16_t x84 = -1;

	t20 = ((x81+(x82/x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = UINT16_MAX;
	int16_t x86 = 9036;
	int32_t x87 = 1375388;
	int8_t x88 = -1;
	int32_t t21 = 172611829;

	t21 = ((x85+(x86/x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	volatile int16_t x90 = -1;
	int32_t x91 = INT32_MIN;
	static int32_t t22 = 291733;

	t22 = ((x89+(x90/x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = 26937546U;
	static int8_t x95 = INT8_MIN;
	volatile int64_t x96 = -1LL;
	static volatile int32_t t23 = -94;

	t23 = ((x93+(x94/x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	uint8_t x98 = UINT8_MAX;
	int16_t x99 = 76;
	static int32_t t24 = 77958;

	t24 = ((x97+(x98/x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 2072U;
	uint64_t x102 = 26520072281297LLU;
	int32_t t25 = -1456;

	t25 = ((x101+(x102/x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x107 = INT64_MAX;

	t26 = ((x105+(x106/x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = -9;
	int16_t x111 = INT16_MIN;
	volatile int32_t x112 = INT32_MAX;
	int32_t t27 = 1652;

	t27 = ((x109+(x110/x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	volatile int8_t x114 = INT8_MIN;
	int8_t x115 = INT8_MIN;
	static int32_t t28 = -26;

	t28 = ((x113+(x114/x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {


	t29 = ((x117+(x118/x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int16_t x122 = -1;
	static uint16_t x123 = 209U;
	static int32_t x124 = 1;
	static int32_t t30 = 671978;

	t30 = ((x121+(x122/x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	uint16_t x126 = 2U;
	uint64_t x127 = UINT64_MAX;
	uint64_t x128 = 0LLU;
	int32_t t31 = 5;

	t31 = ((x125+(x126/x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MAX;
	uint8_t x131 = 49U;
	int32_t x132 = 31013;
	int32_t t32 = 1;

	t32 = ((x129+(x130/x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static uint64_t x134 = UINT64_MAX;
	int64_t x135 = INT64_MIN;
	int32_t t33 = -5243095;

	t33 = ((x133+(x134/x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	int16_t x138 = 24;
	int32_t x139 = INT32_MAX;
	int64_t x140 = -1LL;
	int32_t t34 = -35597;

	t34 = ((x137+(x138/x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 5U;
	static uint32_t x142 = 908261350U;
	static volatile uint8_t x143 = UINT8_MAX;
	volatile int32_t t35 = -954502642;

	t35 = ((x141+(x142/x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	static int64_t x146 = -1LL;
	static int8_t x147 = -1;
	volatile int32_t t36 = -56274555;

	t36 = ((x145+(x146/x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	int32_t t37 = -444;

	t37 = ((x149+(x150/x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	int8_t x154 = -3;
	volatile uint16_t x155 = 3U;
	uint16_t x156 = 119U;
	int32_t t38 = 2469093;

	t38 = ((x153+(x154/x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -434;
	uint8_t x162 = 14U;
	volatile uint32_t x164 = 1283U;
	volatile int32_t t39 = 121;

	t39 = ((x161+(x162/x163))==x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x165 = INT8_MIN;
	int16_t x166 = INT16_MIN;
	static int16_t x167 = INT16_MIN;
	uint8_t x168 = 5U;
	static int32_t t40 = -1;

	t40 = ((x165+(x166/x167))==x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = INT64_MIN;
	volatile uint8_t x170 = UINT8_MAX;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 26U;
	static int32_t t41 = 180292;

	t41 = ((x169+(x170/x171))==x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x177 = 2817U;
	int64_t x179 = -24500058648LL;
	int32_t x180 = 1787;
	static int32_t t42 = 42719684;

	t42 = ((x177+(x178/x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x181 = 828U;
	int16_t x182 = 2;
	uint32_t x183 = 8850637U;
	static int64_t x184 = INT64_MIN;
	int32_t t43 = -5269;

	t43 = ((x181+(x182/x183))==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = -1;
	static int16_t x187 = -1;
	int64_t x188 = -1LL;

	t44 = ((x185+(x186/x187))==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x190 = INT8_MIN;
	static int16_t x191 = -96;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t45 = 1;

	t45 = ((x189+(x190/x191))==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	int64_t x194 = -166LL;
	uint16_t x195 = 20582U;
	uint8_t x196 = 37U;

	t46 = ((x193+(x194/x195))==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x197 = -1;
	uint8_t x198 = 1U;
	static volatile int32_t t47 = 5;

	t47 = ((x197+(x198/x199))==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x201 = 252965U;
	int8_t x202 = INT8_MAX;
	int8_t x203 = INT8_MIN;
	static int8_t x204 = INT8_MAX;
	int32_t t48 = -8363447;

	t48 = ((x201+(x202/x203))==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = 274LLU;
	static volatile uint8_t x206 = UINT8_MAX;
	uint16_t x207 = 2U;
	int16_t x208 = -288;
	int32_t t49 = 434291397;

	t49 = ((x205+(x206/x207))==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -13;
	int32_t t50 = 8451793;

	t50 = ((x209+(x210/x211))==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = -1;
	int32_t x214 = 13838;
	int8_t x215 = 22;
	static int8_t x216 = INT8_MAX;
	static int32_t t51 = 252305496;

	t51 = ((x213+(x214/x215))==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = 5481479U;
	static int16_t x218 = 297;
	int32_t x219 = -249;
	static volatile int64_t x220 = INT64_MIN;
	static volatile int32_t t52 = -454594;

	t52 = ((x217+(x218/x219))==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MAX;
	uint64_t x222 = UINT64_MAX;
	int16_t x224 = -1;

	t53 = ((x221+(x222/x223))==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x227 = INT64_MAX;
	volatile int32_t x228 = 47;
	int32_t t54 = -7;

	t54 = ((x225+(x226/x227))==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x233 = 35U;
	uint8_t x234 = 1U;
	int16_t x236 = INT16_MIN;

	t55 = ((x233+(x234/x235))==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x237 = UINT8_MAX;
	int32_t x238 = -1;
	static int8_t x240 = INT8_MIN;
	int32_t t56 = -524341507;

	t56 = ((x237+(x238/x239))==x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 192U;
	int32_t x242 = -1;
	volatile int32_t x243 = -51;
	int64_t x244 = INT64_MAX;
	int32_t t57 = 118184;

	t57 = ((x241+(x242/x243))==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 132;
	int32_t x247 = 1700113;
	volatile uint16_t x248 = 1U;

	t58 = ((x245+(x246/x247))==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x249 = INT64_MIN;
	int8_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;

	t59 = ((x249+(x250/x251))==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MAX;
	int64_t x255 = INT64_MAX;
	static int64_t x256 = INT64_MIN;
	int32_t t60 = 130546;

	t60 = ((x253+(x254/x255))==x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 12U;
	int64_t x258 = INT64_MAX;
	int32_t x259 = 897040877;
	int32_t x260 = INT32_MIN;
	static volatile int32_t t61 = -219888;

	t61 = ((x257+(x258/x259))==x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x261 = -1;
	int32_t x262 = -14633188;
	int32_t x263 = INT32_MIN;
	int64_t x264 = -4344917142419710890LL;

	t62 = ((x261+(x262/x263))==x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	static uint64_t x266 = UINT64_MAX;
	uint16_t x267 = UINT16_MAX;
	uint16_t x268 = 3834U;
	volatile int32_t t63 = -202;

	t63 = ((x265+(x266/x267))==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x270 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t64 = -865077;

	t64 = ((x269+(x270/x271))==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x274 = 54U;
	volatile int32_t x275 = -649877221;
	uint32_t x276 = 924836U;
	volatile int32_t t65 = -5;

	t65 = ((x273+(x274/x275))==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x277 = 0U;
	uint32_t x278 = 9U;
	static int32_t x279 = 4771230;
	volatile uint64_t x280 = UINT64_MAX;

	t66 = ((x277+(x278/x279))==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	uint32_t x283 = 93U;
	volatile uint8_t x284 = UINT8_MAX;
	volatile int32_t t67 = -476007;

	t67 = ((x281+(x282/x283))==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x285 = -1;
	volatile int32_t x286 = INT32_MAX;
	int16_t x287 = -1;
	int64_t x288 = -1LL;
	static int32_t t68 = 13215;

	t68 = ((x285+(x286/x287))==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x289 = 1;
	int64_t x290 = INT64_MIN;
	static uint8_t x291 = 29U;
	volatile int32_t t69 = 167;

	t69 = ((x289+(x290/x291))==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = -1;
	static int64_t x294 = INT64_MIN;
	uint16_t x295 = 29591U;
	volatile int8_t x296 = -19;
	volatile int32_t t70 = -17967435;

	t70 = ((x293+(x294/x295))==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	int32_t x300 = -1;
	volatile int32_t t71 = -485332419;

	t71 = ((x297+(x298/x299))==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x301 = 2830005224769LL;
	static int16_t x302 = INT16_MAX;
	uint16_t x304 = 486U;
	int32_t t72 = -13063;

	t72 = ((x301+(x302/x303))==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = -2;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -1;

	t73 = ((x305+(x306/x307))==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x310 = INT32_MIN;
	volatile int64_t x311 = -1LL;
	static volatile int32_t t74 = 8;

	t74 = ((x309+(x310/x311))==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x313 = 11U;
	static uint16_t x314 = UINT16_MAX;
	static volatile int8_t x315 = INT8_MIN;
	static int32_t x316 = -1;
	volatile int32_t t75 = -7363108;

	t75 = ((x313+(x314/x315))==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x317 = INT8_MIN;
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	static volatile int8_t x320 = 0;
	int32_t t76 = 504593561;

	t76 = ((x317+(x318/x319))==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -1;
	static uint64_t x322 = 29665292000LLU;
	int8_t x323 = 24;
	int64_t x324 = INT64_MAX;
	int32_t t77 = 370170320;

	t77 = ((x321+(x322/x323))==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	static int16_t x326 = INT16_MAX;
	volatile uint16_t x327 = 2U;
	uint64_t x328 = 1080963LLU;
	volatile int32_t t78 = -13770;

	t78 = ((x325+(x326/x327))==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 47U;
	int64_t x332 = INT64_MAX;

	t79 = ((x329+(x330/x331))==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x335 = -107LL;
	uint8_t x336 = 27U;
	int32_t t80 = 347086;

	t80 = ((x333+(x334/x335))==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint16_t x337 = UINT16_MAX;
	volatile int16_t x338 = INT16_MIN;
	uint64_t x340 = 6929LLU;
	int32_t t81 = -196095;

	t81 = ((x337+(x338/x339))==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = 464969681;
	static int16_t x342 = INT16_MIN;
	static int8_t x343 = -1;
	volatile int32_t t82 = 0;

	t82 = ((x341+(x342/x343))==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = 0;
	volatile int8_t x347 = INT8_MIN;
	volatile int8_t x348 = INT8_MAX;

	t83 = ((x345+(x346/x347))==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x349 = INT16_MAX;
	uint16_t x351 = UINT16_MAX;
	static int64_t x352 = INT64_MAX;
	int32_t t84 = 124282;

	t84 = ((x349+(x350/x351))==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MIN;
	int32_t t85 = -8021217;

	t85 = ((x353+(x354/x355))==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x358 = -1LL;
	volatile int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t86 = 102444;

	t86 = ((x357+(x358/x359))==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MIN;
	uint8_t x366 = UINT8_MAX;
	static int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;

	t87 = ((x365+(x366/x367))==x368);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x370 = 4U;
	static int32_t x371 = INT32_MIN;
	static uint32_t x372 = 41U;
	int32_t t88 = -3736;

	t88 = ((x369+(x370/x371))==x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x373 = 3;
	int64_t x374 = INT64_MIN;
	static int16_t x375 = -49;
	int16_t x376 = INT16_MAX;

	t89 = ((x373+(x374/x375))==x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t90 = -864845948;

	t90 = ((x377+(x378/x379))==x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x381 = INT64_MAX;
	volatile int16_t x382 = 9;
	uint8_t x383 = 28U;
	int32_t x384 = INT32_MIN;
	volatile int32_t t91 = 14731575;

	t91 = ((x381+(x382/x383))==x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x385 = 3355U;
	int8_t x386 = 0;
	int32_t x387 = INT32_MIN;
	volatile int8_t x388 = INT8_MAX;
	int32_t t92 = -240;

	t92 = ((x385+(x386/x387))==x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x390 = UINT64_MAX;
	int16_t x391 = INT16_MIN;
	volatile uint8_t x392 = 28U;

	t93 = ((x389+(x390/x391))==x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x393 = INT64_MAX;
	uint64_t x394 = 24899984483669LLU;
	uint8_t x395 = UINT8_MAX;
	uint64_t x396 = 827457556858533061LLU;
	int32_t t94 = 99732;

	t94 = ((x393+(x394/x395))==x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t t95 = 809651143;

	t95 = ((x397+(x398/x399))==x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x402 = 6320220656LL;
	volatile int16_t x403 = -5259;
	static volatile int8_t x404 = INT8_MAX;

	t96 = ((x401+(x402/x403))==x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = 22;
	int16_t x407 = INT16_MIN;
	int32_t x408 = INT32_MIN;
	int32_t t97 = 1;

	t97 = ((x405+(x406/x407))==x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x411 = -1;
	int32_t x412 = INT32_MAX;
	int32_t t98 = -3647925;

	t98 = ((x409+(x410/x411))==x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	uint8_t x415 = UINT8_MAX;
	static volatile int32_t t99 = -38840658;

	t99 = ((x413+(x414/x415))==x416);

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

