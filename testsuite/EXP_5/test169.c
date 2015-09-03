#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
uint64_t x3 = 16255877898LLU;
int16_t x19 = INT16_MIN;
static uint16_t x20 = UINT16_MAX;
uint16_t x35 = 11U;
int64_t x36 = INT64_MAX;
int64_t t8 = 85LL;
int8_t x42 = INT8_MIN;
static volatile uint64_t x50 = 19LLU;
uint64_t t11 = 68LLU;
int32_t x53 = INT32_MIN;
int64_t x55 = -1LL;
int64_t x56 = -1LL;
int32_t x61 = -1;
int64_t x63 = 272752633784LL;
int16_t x99 = 0;
volatile int64_t t19 = -16637044LL;
volatile uint64_t t20 = 635981LLU;
int16_t x116 = INT16_MAX;
volatile int64_t x118 = -1LL;
uint32_t x120 = UINT32_MAX;
int32_t x123 = INT32_MIN;
volatile int8_t x124 = 19;
int64_t x125 = 1835913559772LL;
volatile uint64_t x126 = 12989295845728LLU;
int64_t x127 = INT64_MIN;
volatile uint64_t t26 = 1LLU;
uint16_t x134 = 100U;
static volatile int64_t t28 = 103664068316893257LL;
static uint8_t x137 = 4U;
static int16_t x140 = INT16_MAX;
uint8_t x149 = 2U;
volatile int16_t x153 = INT16_MIN;
int32_t t33 = -27827;
int8_t x161 = INT8_MIN;
volatile int64_t t36 = -834309114472LL;
volatile int32_t x171 = INT32_MAX;
volatile int64_t t42 = 453091905LL;
int32_t x204 = -4839;
volatile int16_t x225 = -1;
int16_t x241 = INT16_MIN;
volatile int16_t x249 = INT16_MIN;
int8_t x264 = 27;
volatile int8_t x268 = 0;
int8_t x273 = -1;
int16_t x277 = INT16_MIN;
volatile int32_t t60 = -2;
int16_t x282 = INT16_MIN;
uint32_t t62 = 63239195U;
volatile int8_t x293 = INT8_MIN;
int8_t x294 = INT8_MIN;
int32_t x295 = -1;
volatile int32_t x296 = -1;
uint64_t x300 = 240069421829LLU;
volatile uint16_t x301 = 26U;
static int32_t x303 = 1;
uint64_t t66 = 36151164345704218LLU;
static uint64_t x309 = 1048023702210484785LLU;
int64_t x311 = -1LL;
int32_t t69 = 957371;
int16_t x324 = INT16_MAX;
uint8_t x329 = 1U;
static uint64_t x330 = UINT64_MAX;
int8_t x331 = INT8_MIN;
uint64_t t72 = 120LLU;
static volatile uint64_t t74 = 55LLU;
int32_t x346 = -1;
int8_t x347 = INT8_MIN;
static uint64_t t75 = 1613534989616LLU;
uint16_t x349 = 6423U;
static volatile int64_t x351 = -869154565LL;
static int64_t x364 = -1LL;
uint64_t t78 = 1625LLU;
static uint32_t x367 = UINT32_MAX;
int32_t x376 = INT32_MIN;
volatile uint64_t t81 = 5634LLU;
int16_t x382 = INT16_MAX;
static int32_t x383 = INT32_MIN;
uint64_t x391 = UINT64_MAX;
static int16_t x392 = INT16_MAX;
uint64_t t85 = 6102308827379546157LLU;
static int64_t x398 = -20725706120303431LL;
uint8_t x400 = 45U;
static int16_t x402 = -29;
volatile int64_t t87 = -93335LL;
uint64_t t90 = 60147LLU;
volatile int8_t x427 = -1;
int16_t x431 = -11;
volatile int16_t x432 = -1;
uint16_t x442 = 681U;
int32_t x444 = 0;
int8_t x446 = 31;
static volatile uint64_t t97 = 1230127365649455LLU;
int16_t x460 = -1;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	volatile int8_t x4 = INT8_MAX;
	static uint64_t t0 = 194LLU;

	t0 = (x1^((x2+x3)^x4));

	if (t0 != 9223372020598897801LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1LLU;
	static int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile uint64_t t1 = 139164241592755955LLU;

	t1 = (x5^((x6+x7)^x8));

	if (t1 != 32640LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	static int16_t x10 = INT16_MIN;
	int32_t x11 = -1;
	static int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = 133218797;

	t2 = (x9^((x10+x11)^x12));

	if (t2 != 32896) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = -1925034692LL;
	int32_t x15 = INT32_MIN;
	volatile int8_t x16 = INT8_MAX;
	volatile int64_t t3 = 27240627613864LL;

	t3 = (x13^((x14+x15)^x16));

	if (t3 != 9223372032782257475LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 4477928333757411LL;
	volatile int16_t x18 = 327;
	volatile int64_t t4 = 0LL;

	t4 = (x17^((x18+x19)^x20));

	if (t4 != -4477928333724325LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	static uint16_t x22 = 4890U;
	volatile int32_t x23 = -14;
	volatile uint16_t x24 = 1456U;
	int32_t t5 = -1;

	t5 = (x21^((x22+x23)^x24));

	if (t5 != 2147477827) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 6LLU;
	static int32_t x26 = -11654;
	int64_t x27 = -1LL;
	uint8_t x28 = UINT8_MAX;
	uint64_t t6 = 52818981228LLU;

	t6 = (x25^((x26+x27)^x28));

	if (t6 != 18446744073709539968LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = 0;
	int64_t x31 = INT64_MAX;
	uint64_t x32 = UINT64_MAX;
	uint64_t t7 = 15LLU;

	t7 = (x29^((x30+x31)^x32));

	if (t7 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	static uint32_t x34 = 304972512U;

	t8 = (x33^((x34+x35)^x36));

	if (t8 != 9223372036549772011LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = -1;
	int16_t x43 = -1;
	static volatile int64_t x44 = -1LL;
	volatile int64_t t9 = 294LL;

	t9 = (x41^((x42+x43)^x44));

	if (t9 != -129LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	static volatile int64_t x46 = -1LL;
	int64_t x47 = -543LL;
	int32_t x48 = INT32_MAX;
	volatile int64_t t10 = -8447405795010198LL;

	t10 = (x45^((x46+x47)^x48));

	if (t10 != -544LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x49 = INT64_MIN;
	static volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;

	t11 = (x49^((x50+x51)^x52));

	if (t11 != 9223372030412324882LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x54 = -28;
	int64_t t12 = 112742651101983LL;

	t12 = (x53^((x54+x55)^x56));

	if (t12 != -2147483620LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = -1;
	int16_t x64 = 763;
	static volatile int64_t t13 = 18422LL;

	t13 = (x61^((x62+x63)^x64));

	if (t13 != -272752633165LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	volatile int8_t x70 = 41;
	uint8_t x71 = 41U;
	static int64_t x72 = 35LL;
	int64_t t14 = -8897986605LL;

	t14 = (x69^((x70+x71)^x72));

	if (t14 != -32655LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	uint32_t x74 = 118U;
	static int16_t x75 = INT16_MIN;
	int8_t x76 = -41;
	uint32_t t15 = 124U;

	t15 = (x73^((x74+x75)^x76));

	if (t15 != 4294934622U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	uint16_t x78 = UINT16_MAX;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 10274U;
	volatile int64_t t16 = 9849008LL;

	t16 = (x77^((x78+x79)^x80));

	if (t16 != -9223372036854753315LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = INT8_MAX;
	uint16_t x82 = 450U;
	uint64_t x83 = UINT64_MAX;
	uint32_t x84 = 156367U;
	uint64_t t17 = 2005521120192LLU;

	t17 = (x81^((x82+x83)^x84));

	if (t17 != 156529LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x89 = UINT8_MAX;
	static volatile uint8_t x90 = UINT8_MAX;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 4LLU;
	uint64_t t18 = 76287LLU;

	t18 = (x89^((x90+x91)^x92));

	if (t18 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x97 = UINT16_MAX;
	int64_t x98 = -415LL;
	int16_t x100 = INT16_MIN;

	t19 = (x97^((x98+x99)^x100));

	if (t19 != 33182LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MAX;
	uint64_t x102 = 24029437866105LLU;
	uint8_t x103 = 8U;
	int32_t x104 = INT32_MIN;

	t20 = (x101^((x102+x103)^x104));

	if (t20 != 18446720044271685502LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	uint16_t x106 = 5U;
	volatile int8_t x107 = -1;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t21 = 191;

	t21 = (x105^((x106+x107)^x108));

	if (t21 != -65532) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -1LL;
	uint16_t x112 = 6928U;
	int64_t t22 = -23998699LL;

	t22 = (x109^((x110+x111)^x112));

	if (t22 != -7024LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x113 = -24465878232LL;
	int16_t x114 = 7873;
	static uint64_t x115 = UINT64_MAX;
	static uint64_t t23 = 188267260398LLU;

	t23 = (x113^((x114+x115)^x116));

	if (t23 != 18446744049243664919LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MAX;
	volatile int8_t x119 = 6;
	int64_t t24 = 21343057195LL;

	t24 = (x117^((x118+x119)^x120));

	if (t24 != 4294934533LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 121030701942457LLU;
	uint64_t x122 = 128780534482777LLU;
	uint64_t t25 = 1LLU;

	t25 = (x121^((x122+x123)^x124));

	if (t25 != 29739057938931LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x128 = 3041926U;

	t26 = (x125^((x126+x127)^x128));

	if (t26 != 9223383561234199866LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = -612147764LL;
	static volatile uint32_t x130 = 27984U;
	int32_t x131 = -1;
	uint32_t x132 = UINT32_MAX;
	volatile int64_t t27 = -3394392604LL;

	t27 = (x129^((x130+x131)^x132));

	if (t27 != -3682807940LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = INT32_MIN;
	int64_t x135 = INT64_MIN;
	static volatile int8_t x136 = -1;

	t28 = (x133^((x134+x135)^x136));

	if (t28 != -9223372034707292261LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x138 = 2LLU;
	volatile uint64_t x139 = 87451141173LLU;
	uint64_t t29 = 218240003225511628LLU;

	t29 = (x137^((x138+x139)^x140));

	if (t29 != 87451171788LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 13501U;
	int8_t x142 = -3;
	static uint16_t x143 = 0U;
	int16_t x144 = -2777;
	volatile int32_t t30 = 71320612;

	t30 = (x141^((x142+x143)^x144));

	if (t30 != 15975) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = -1LL;
	uint32_t x147 = 4031789U;
	uint8_t x148 = UINT8_MAX;
	int64_t t31 = -937LL;

	t31 = (x145^((x146+x147)^x148));

	if (t31 != -2143451693LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x150 = INT16_MAX;
	int16_t x151 = 1;
	static int64_t x152 = INT64_MIN;
	volatile int64_t t32 = 2536476LL;

	t32 = (x149^((x150+x151)^x152));

	if (t32 != -9223372036854743038LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x154 = 1U;
	static int16_t x155 = -57;
	volatile int16_t x156 = 684;

	t33 = (x153^((x154+x155)^x156));

	if (t33 != 32100) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	int16_t x159 = INT16_MAX;
	volatile uint32_t x160 = 10U;
	volatile int64_t t34 = 435253LL;

	t34 = (x157^((x158+x159)^x160));

	if (t34 != -2147450892LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x162 = -1LL;
	volatile int64_t x163 = -1LL;
	volatile int16_t x164 = 12;
	volatile int64_t t35 = 1270490929306LL;

	t35 = (x161^((x162+x163)^x164));

	if (t35 != 114LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = INT16_MIN;
	volatile uint32_t x166 = UINT32_MAX;
	static int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MIN;

	t36 = (x165^((x166+x167)^x168));

	if (t36 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x169 = INT32_MIN;
	uint64_t x170 = UINT64_MAX;
	uint64_t x172 = UINT64_MAX;
	uint64_t t37 = 1427358LLU;

	t37 = (x169^((x170+x171)^x172));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = -29;
	uint8_t x178 = 99U;
	uint32_t x179 = 1U;
	static volatile uint16_t x180 = 787U;
	static uint32_t t38 = 277914U;

	t38 = (x177^((x178+x179)^x180));

	if (t38 != 4294966420U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = -115596376883006421LL;
	uint8_t x186 = 0U;
	uint64_t x187 = 429064654897LLU;
	int16_t x188 = -122;
	uint64_t t39 = 2709078LLU;

	t39 = (x185^((x186+x187)^x188));

	if (t39 != 115596232429149084LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x189 = 1443;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = 0LLU;
	uint64_t x192 = 37564LLU;
	static uint64_t t40 = 510168LLU;

	t40 = (x189^((x190+x191)^x192));

	if (t40 != 18446744071562106655LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x193 = INT32_MIN;
	uint32_t x194 = 155052U;
	int32_t x195 = INT32_MAX;
	static uint32_t x196 = 14278412U;
	uint32_t t41 = 0U;

	t41 = (x193^((x194+x195)^x196));

	if (t41 != 14385831U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x197 = INT32_MAX;
	int16_t x198 = 6281;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = 140U;

	t42 = (x197^((x198+x199)^x200));

	if (t42 != -9223372034707298310LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x201 = 8U;
	uint16_t x202 = UINT16_MAX;
	volatile int16_t x203 = -1;
	int32_t t43 = 2149147;

	t43 = (x201^((x202+x203)^x204));

	if (t43 != -60689) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	volatile int32_t x207 = INT32_MIN;
	int8_t x208 = INT8_MAX;
	static volatile int32_t t44 = 4461;

	t44 = (x205^((x206+x207)^x208));

	if (t44 != 2147483520) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = INT16_MIN;
	int16_t x210 = INT16_MAX;
	volatile int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MAX;
	volatile int32_t t45 = 6;

	t45 = (x209^((x210+x211)^x212));

	if (t45 != -2147418239) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 13798996U;
	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = UINT32_MAX;
	uint16_t x216 = 8330U;
	uint32_t t46 = 2054853902U;

	t46 = (x213^((x214+x215)^x216));

	if (t46 != 13807136U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = 26U;
	uint16_t x219 = UINT16_MAX;
	volatile int32_t x220 = INT32_MAX;
	static int64_t t47 = -2421580623LL;

	t47 = (x217^((x218+x219)^x220));

	if (t47 != -9223372034707357722LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x221 = UINT64_MAX;
	volatile int8_t x222 = -1;
	uint8_t x223 = 23U;
	static uint64_t x224 = 7650LLU;
	volatile uint64_t t48 = 5230257627399LLU;

	t48 = (x221^((x222+x223)^x224));

	if (t48 != 18446744073709543947LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x226 = 252303689LLU;
	int32_t x227 = INT32_MIN;
	int64_t x228 = -1LL;
	uint64_t t49 = 0LLU;

	t49 = (x225^((x226+x227)^x228));

	if (t49 != 18446744071814371657LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x229 = 336535178U;
	int64_t x230 = INT64_MAX;
	uint64_t x231 = UINT64_MAX;
	int8_t x232 = INT8_MIN;
	uint64_t t50 = 59331LLU;

	t50 = (x229^((x230+x231)^x232));

	if (t50 != 9223372037191311092LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x237 = -3287;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -597;
	int64_t x240 = 24038517305445LL;
	int64_t t51 = -4149184662LL;

	t51 = (x237^((x238+x239)^x240));

	if (t51 != -9223347998337466650LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x242 = -1LL;
	volatile uint32_t x243 = 519731U;
	uint16_t x244 = 6U;
	int64_t t52 = 937035835591709LL;

	t52 = (x241^((x242+x243)^x244));

	if (t52 != -496076LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x250 = 1063434U;
	int32_t x251 = -1;
	static int64_t x252 = INT64_MIN;
	int64_t t53 = 0LL;

	t53 = (x249^((x250+x251)^x252));

	if (t53 != 9223372036853709321LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x253 = -765952;
	int8_t x254 = INT8_MIN;
	uint64_t x255 = 177416578LLU;
	static uint8_t x256 = UINT8_MAX;
	uint64_t t54 = 67678813384873122LLU;

	t54 = (x253^((x254+x255)^x256));

	if (t54 != 18446744073531783677LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x257 = UINT8_MAX;
	static uint16_t x258 = UINT16_MAX;
	uint32_t x259 = 158063U;
	static volatile uint16_t x260 = 785U;
	volatile uint32_t t55 = 309093U;

	t55 = (x257^((x258+x259)^x260));

	if (t55 != 223872U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 4U;
	static int64_t x263 = 256LL;
	volatile int64_t t56 = 0LL;

	t56 = (x261^((x262+x263)^x264));

	if (t56 != -32481LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = INT16_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	int64_t x267 = -1LL;
	static int64_t t57 = -1890374458LL;

	t57 = (x265^((x266+x267)^x268));

	if (t57 != -32770LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = 1;
	static uint32_t x270 = UINT32_MAX;
	int64_t x271 = -1LL;
	int8_t x272 = INT8_MIN;
	volatile int64_t t58 = -999LL;

	t58 = (x269^((x270+x271)^x272));

	if (t58 != -4294967169LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 42U;
	static int16_t x276 = -1;
	volatile uint32_t t59 = 1459937U;

	t59 = (x273^((x274+x275)^x276));

	if (t59 != 4294967210U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x278 = INT32_MIN;
	volatile int32_t x279 = INT32_MAX;
	int8_t x280 = -2;

	t60 = (x277^((x278+x279)^x280));

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x281 = 32012U;
	int8_t x283 = 5;
	volatile int64_t x284 = INT64_MIN;
	int64_t t61 = -1958LL;

	t61 = (x281^((x282+x283)^x284));

	if (t61 != 9223372036854775049LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = INT8_MIN;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MAX;
	int16_t x288 = 10911;

	t62 = (x285^((x286+x287)^x288));

	if (t62 != 2147494625U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x289 = -29;
	uint64_t x290 = 536LLU;
	volatile int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	uint64_t t63 = 64367697347686593LLU;

	t63 = (x289^((x290+x291)^x292));

	if (t63 != 9223372036854776443LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t t64 = -89433;

	t64 = (x293^((x294+x295)^x296));

	if (t64 != -256) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = INT32_MIN;
	int32_t x299 = 326051;
	static uint64_t t65 = 13LLU;

	t65 = (x297^((x298+x299)^x300));

	if (t65 != 238819192102LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x302 = 27634384LLU;
	static int64_t x304 = 5027486710955LL;

	t66 = (x301^((x302+x303)^x304));

	if (t66 != 5027463337568LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x310 = UINT16_MAX;
	uint8_t x312 = 58U;
	uint64_t t67 = 5791099881322LLU;

	t67 = (x309^((x310+x311)^x312));

	if (t67 != 1048023702210536949LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MAX;
	static int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MAX;
	volatile int64_t t68 = 39104LL;

	t68 = (x313^((x314+x315)^x316));

	if (t68 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;

	t69 = (x317^((x318+x319)^x320));

	if (t69 != -2147483521) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = -22;
	uint64_t x322 = 6065309623464320968LLU;
	int16_t x323 = INT16_MIN;
	volatile uint64_t t70 = 47653539137351372LLU;

	t70 = (x321^((x322+x323)^x324));

	if (t70 != 12381434450245279709LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MAX;
	static uint32_t x326 = 109209525U;
	volatile int32_t x327 = 662;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t71 = 6U;

	t71 = (x325^((x326+x327)^x328));

	if (t71 != 4185778763U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x332 = INT32_MIN;

	t72 = (x329^((x330+x331)^x332));

	if (t72 != 2147483518LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x333 = INT8_MAX;
	static uint32_t x334 = 84994427U;
	uint8_t x335 = 28U;
	uint64_t x336 = 1081780481136513LLU;
	volatile uint64_t t73 = 7999906111584924LLU;

	t73 = (x333^((x334+x335)^x336));

	if (t73 != 1081780398292585LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x341 = INT64_MAX;
	static int64_t x342 = -1LL;
	volatile uint16_t x343 = UINT16_MAX;
	uint64_t x344 = 30830165497125LLU;

	t74 = (x341^((x342+x343)^x344));

	if (t74 != 9223341206689223972LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x345 = 3U;
	uint64_t x348 = UINT64_MAX;

	t75 = (x345^((x346+x347)^x348));

	if (t75 != 131LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x350 = UINT8_MAX;
	uint8_t x352 = 1U;
	static volatile int64_t t76 = -5LL;

	t76 = (x349^((x350+x351)^x352));

	if (t76 != -869148436LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x353 = 19;
	uint64_t x354 = 1229630776261LLU;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	volatile uint64_t t77 = 964768052433173LLU;

	t77 = (x353^((x354+x355)^x356));

	if (t77 != 18446742844078760790LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x361 = INT8_MAX;
	uint64_t x362 = 15675LLU;
	volatile int32_t x363 = -1;

	t78 = (x361^((x362+x363)^x364));

	if (t78 != 18446744073709535930LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = 63;
	volatile int16_t x368 = INT16_MIN;
	volatile uint32_t t79 = 205U;

	t79 = (x365^((x366+x367)^x368));

	if (t79 != 2147450942U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x369 = -1;
	volatile uint64_t x370 = 165673259528LLU;
	static volatile int8_t x371 = -12;
	static int64_t x372 = INT64_MIN;
	volatile uint64_t t80 = 0LLU;

	t80 = (x369^((x370+x371)^x372));

	if (t80 != 9223371871181516291LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x373 = INT32_MIN;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MIN;

	t81 = (x373^((x374+x375)^x376));

	if (t81 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = -1;
	int64_t x378 = -1LL;
	int16_t x379 = -32;
	int32_t x380 = -49104325;
	int64_t t82 = 210580149461848392LL;

	t82 = (x377^((x378+x379)^x380));

	if (t82 != -49104357LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x381 = 26U;
	volatile int32_t x384 = INT32_MIN;
	int32_t t83 = 6;

	t83 = (x381^((x382+x383)^x384));

	if (t83 != 32741) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	volatile uint64_t x386 = UINT64_MAX;
	uint8_t x387 = UINT8_MAX;
	static uint64_t x388 = UINT64_MAX;
	static uint64_t t84 = 118LLU;

	t84 = (x385^((x386+x387)^x388));

	if (t84 != 129LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = -1;
	int8_t x390 = -1;

	t85 = (x389^((x390+x391)^x392));

	if (t85 != 32766LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x397 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile int64_t t86 = 222LL;

	t86 = (x397^((x398+x399)^x400));

	if (t86 != -20725706153159829LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = INT8_MAX;
	uint8_t x403 = UINT8_MAX;
	int64_t x404 = INT64_MAX;

	t87 = (x401^((x402+x403)^x404));

	if (t87 != 9223372036854775650LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x405 = 13;
	static int16_t x406 = 8136;
	volatile int16_t x407 = -1;
	volatile int8_t x408 = -1;
	volatile int32_t t88 = 3957;

	t88 = (x405^((x406+x407)^x408));

	if (t88 != -8139) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x409 = 40;
	int16_t x410 = INT16_MAX;
	static int16_t x411 = INT16_MIN;
	uint64_t x412 = 61380559999504687LLU;
	uint64_t t89 = 63569357271763LLU;

	t89 = (x409^((x410+x411)^x412));

	if (t89 != 18385363513710046968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x413 = 35U;
	uint64_t x414 = 1656465341626663030LLU;
	int64_t x415 = 3282731022971451LL;
	volatile uint32_t x416 = 1U;

	t90 = (x413^((x414+x415)^x416));

	if (t90 != 1659748072649634451LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x425 = -526129511;
	volatile uint8_t x426 = 0U;
	static int32_t x428 = -1252;
	int32_t t91 = -519;

	t91 = (x425^((x426+x427)^x428));

	if (t91 != -526130566) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x429 = 639U;
	uint64_t x430 = 358037LLU;
	uint64_t t92 = 1680557236272215835LLU;

	t92 = (x429^((x430+x431)^x432));

	if (t92 != 18446744073709193994LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x433 = INT8_MIN;
	int64_t x434 = -1LL;
	volatile int8_t x435 = -1;
	int16_t x436 = 16216;
	int64_t t93 = -28943LL;

	t93 = (x433^((x434+x435)^x436));

	if (t93 != 16166LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x437 = 252227054667730844LLU;
	volatile int16_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	volatile int8_t x440 = -1;
	uint64_t t94 = 28289100755LLU;

	t94 = (x437^((x438+x439)^x440));

	if (t94 != 252227054667730845LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = -1;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t t95 = -999309;

	t95 = (x441^((x442+x443)^x444));

	if (t95 != -937) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x445 = INT16_MIN;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = 50U;
	int32_t t96 = 37292097;

	t96 = (x445^((x446+x447)^x448));

	if (t96 != 32685) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x449 = 16U;
	uint8_t x450 = 1U;
	uint64_t x451 = 121437530LLU;
	int32_t x452 = 82129;

	t97 = (x449^((x450+x451)^x452));

	if (t97 != 121486746LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x457 = -1;
	static int8_t x458 = 0;
	uint64_t x459 = UINT64_MAX;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x457^((x458+x459)^x460));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = -1829636895433LL;
	static volatile int64_t x462 = -1LL;
	int32_t x463 = INT32_MAX;
	uint8_t x464 = 115U;
	volatile int64_t t99 = 1426LL;

	t99 = (x461^((x462+x463)^x464));

	if (t99 != -1827527757126LL) { NG(); } else { ; }
	
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

