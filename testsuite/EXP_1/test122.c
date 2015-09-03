#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x10 = -310436295747719266LL;
static uint64_t x13 = UINT64_MAX;
int32_t x19 = -14465146;
volatile int64_t x25 = -8232282LL;
uint32_t x26 = 12U;
uint32_t x34 = UINT32_MAX;
volatile uint32_t x37 = 139U;
static int64_t x38 = -6704972782786LL;
static int8_t x39 = INT8_MIN;
volatile int32_t t10 = -170;
int64_t x54 = -1LL;
int8_t x90 = INT8_MIN;
volatile int64_t x91 = -529714388LL;
volatile int16_t x103 = -1;
static int16_t x107 = 5;
static volatile int8_t x117 = -1;
uint16_t x120 = 7478U;
int16_t x128 = INT16_MIN;
int16_t x131 = -1;
volatile int16_t x132 = INT16_MIN;
static int8_t x133 = -1;
uint16_t x134 = 1409U;
uint32_t x138 = 240U;
uint64_t x145 = 7524055987064090404LLU;
int8_t x149 = -4;
uint32_t x152 = 29146U;
uint32_t t30 = 62U;
int8_t x157 = -1;
int16_t x177 = -14156;
volatile uint32_t x178 = 421668236U;
volatile int32_t x182 = -1;
volatile int64_t t35 = -1061757855852830LL;
static uint32_t x202 = 169982225U;
int32_t t38 = -143691075;
int8_t x208 = -1;
static int32_t x210 = INT32_MAX;
uint64_t x212 = 7536230213357632043LLU;
int16_t x217 = INT16_MIN;
int16_t x219 = INT16_MIN;
volatile int32_t t44 = 0;
uint8_t x230 = 73U;
volatile int64_t t45 = 1863LL;
uint64_t x238 = 234766328586348977LLU;
int32_t x243 = -726;
static volatile uint16_t x244 = 27U;
volatile int16_t x250 = INT16_MAX;
int32_t t49 = -5788;
int16_t x261 = INT16_MAX;
int8_t x262 = INT8_MIN;
static volatile int32_t x263 = -3193;
uint16_t x267 = 13472U;
static int64_t x272 = INT64_MIN;
int64_t t52 = 96899053286992LL;
int8_t x275 = INT8_MIN;
volatile int64_t t54 = -1030493791405994229LL;
volatile uint32_t x281 = 695723627U;
static uint8_t x282 = 14U;
int32_t t55 = 1774;
int32_t x289 = INT32_MIN;
int16_t x292 = -1471;
int8_t x298 = -1;
int8_t x301 = INT8_MIN;
int16_t x306 = INT16_MIN;
int64_t t60 = 64284416LL;
uint32_t x310 = 32363378U;
static int16_t x312 = -1;
volatile int32_t t61 = -6003;
uint16_t x319 = UINT16_MAX;
int32_t x324 = -1;
uint8_t x346 = 12U;
uint32_t t74 = 3277570U;
int64_t x367 = INT64_MIN;
volatile int8_t x372 = INT8_MIN;
static int32_t t76 = 80431;
static int32_t x379 = -3789;
int32_t t79 = 3825680;
int16_t x385 = -7785;
uint64_t x389 = 53695650571942071LLU;
uint32_t x396 = 26010U;
volatile uint32_t t82 = 27U;
volatile uint8_t x421 = 4U;
volatile uint32_t x426 = 2445859U;
uint32_t x429 = UINT32_MAX;
int32_t x464 = INT32_MIN;
static int64_t x466 = INT64_MAX;
uint32_t x468 = 1597U;
volatile uint32_t t98 = 23372U;


void f0(void) {
	volatile int32_t x5 = -1;
	uint16_t x6 = 659U;
	volatile int8_t x7 = 0;
	uint64_t x8 = 7LLU;
	uint64_t t0 = 347628050338LLU;

	t0 = (((x5+x6)<=x7)%x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MIN;
	int32_t x11 = INT32_MAX;
	int8_t x12 = INT8_MIN;
	volatile int32_t t1 = -8466989;

	t1 = (((x9+x10)<=x11)%x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x14 = UINT16_MAX;
	int16_t x15 = -1;
	uint32_t x16 = 6U;
	uint32_t t2 = 14965U;

	t2 = (((x13+x14)<=x15)%x16);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int32_t x18 = -1;
	uint64_t x20 = 1436395LLU;
	volatile uint64_t t3 = 5157085878314642LLU;

	t3 = (((x17+x18)<=x19)%x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 20854LLU;
	volatile int32_t x22 = INT32_MAX;
	static uint32_t x23 = UINT32_MAX;
	int16_t x24 = 1;
	static int32_t t4 = 0;

	t4 = (((x21+x22)<=x23)%x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x27 = -1;
	int32_t x28 = INT32_MIN;
	volatile int32_t t5 = 3;

	t5 = (((x25+x26)<=x27)%x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = 115635220;
	int8_t x30 = INT8_MAX;
	int8_t x31 = INT8_MIN;
	int16_t x32 = INT16_MIN;
	static int32_t t6 = 39434069;

	t6 = (((x29+x30)<=x31)%x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 56084526LLU;
	int32_t x35 = -28492;
	static int16_t x36 = INT16_MIN;
	int32_t t7 = -487474;

	t7 = (((x33+x34)<=x35)%x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x40 = INT8_MIN;
	int32_t t8 = 9782061;

	t8 = (((x37+x38)<=x39)%x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 6314;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MIN;
	int64_t x44 = INT64_MIN;
	int64_t t9 = -32LL;

	t9 = (((x41+x42)<=x43)%x44);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	volatile uint8_t x46 = UINT8_MAX;
	static int8_t x47 = INT8_MAX;
	uint8_t x48 = 45U;

	t10 = (((x45+x46)<=x47)%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = -1;
	int16_t x51 = 383;
	uint8_t x52 = UINT8_MAX;
	static int32_t t11 = 316771203;

	t11 = (((x49+x50)<=x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	volatile uint16_t x55 = 4U;
	volatile int64_t x56 = -51854651656LL;
	volatile int64_t t12 = -3914784743145838LL;

	t12 = (((x53+x54)<=x55)%x56);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = -1;
	int64_t x58 = INT64_MAX;
	int16_t x59 = -1;
	static uint16_t x60 = 13U;
	static volatile int32_t t13 = 4030;

	t13 = (((x57+x58)<=x59)%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;
	int32_t x63 = 21020688;
	uint8_t x64 = UINT8_MAX;
	static volatile int32_t t14 = -43141039;

	t14 = (((x61+x62)<=x63)%x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	uint64_t x74 = UINT64_MAX;
	int64_t x75 = -1LL;
	int32_t x76 = -21251;
	static volatile int32_t t15 = 1623196;

	t15 = (((x73+x74)<=x75)%x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x89 = 0LLU;
	static int16_t x92 = INT16_MIN;
	int32_t t16 = -121;

	t16 = (((x89+x90)<=x91)%x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x93 = 40U;
	static uint32_t x94 = 353958U;
	volatile int8_t x95 = -1;
	int64_t x96 = INT64_MIN;
	volatile int64_t t17 = -257383914825932477LL;

	t17 = (((x93+x94)<=x95)%x96);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x97 = UINT32_MAX;
	int16_t x98 = -1;
	int32_t x99 = INT32_MIN;
	int32_t x100 = INT32_MIN;
	static int32_t t18 = 6687;

	t18 = (((x97+x98)<=x99)%x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -310;
	int32_t x102 = INT32_MAX;
	int8_t x104 = -2;
	static int32_t t19 = 5292;

	t19 = (((x101+x102)<=x103)%x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x105 = -1;
	int8_t x106 = -2;
	int8_t x108 = 2;
	int32_t t20 = -2499;

	t20 = (((x105+x106)<=x107)%x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = -1;
	int8_t x114 = INT8_MAX;
	int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t21 = 198LL;

	t21 = (((x113+x114)<=x115)%x116);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x118 = INT8_MIN;
	volatile uint64_t x119 = 268LLU;
	int32_t t22 = -24041801;

	t22 = (((x117+x118)<=x119)%x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x121 = 274323145034414701LL;
	volatile int64_t x122 = INT64_MIN;
	uint16_t x123 = 14561U;
	int64_t x124 = INT64_MIN;
	int64_t t23 = 98622888656159112LL;

	t23 = (((x121+x122)<=x123)%x124);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x125 = UINT16_MAX;
	volatile uint32_t x126 = 8029282U;
	int16_t x127 = INT16_MAX;
	static int32_t t24 = -372;

	t24 = (((x125+x126)<=x127)%x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x129 = 63448086U;
	static uint32_t x130 = 15281U;
	volatile int32_t t25 = -217365;

	t25 = (((x129+x130)<=x131)%x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x135 = INT8_MIN;
	volatile int8_t x136 = INT8_MAX;
	volatile int32_t t26 = 856859956;

	t26 = (((x133+x134)<=x135)%x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	int8_t x139 = 6;
	int64_t x140 = -2LL;
	volatile int64_t t27 = 18LL;

	t27 = (((x137+x138)<=x139)%x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x141 = 115547962U;
	int8_t x142 = INT8_MAX;
	volatile uint32_t x143 = 1759477U;
	int8_t x144 = -1;
	int32_t t28 = 132829259;

	t28 = (((x141+x142)<=x143)%x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x146 = UINT8_MAX;
	int16_t x147 = -5;
	int8_t x148 = INT8_MIN;
	volatile int32_t t29 = 485;

	t29 = (((x145+x146)<=x147)%x148);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x150 = 3U;
	int32_t x151 = -1;

	t30 = (((x149+x150)<=x151)%x152);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x158 = -102065LL;
	uint16_t x159 = UINT16_MAX;
	int8_t x160 = INT8_MIN;
	volatile int32_t t31 = 2905;

	t31 = (((x157+x158)<=x159)%x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x161 = INT32_MAX;
	static volatile uint64_t x162 = 566LLU;
	static int64_t x163 = 1018185135077LL;
	static uint16_t x164 = UINT16_MAX;
	int32_t t32 = 140915211;

	t32 = (((x161+x162)<=x163)%x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x169 = INT8_MAX;
	static uint16_t x170 = 19357U;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = 4623U;
	int32_t t33 = 650903026;

	t33 = (((x169+x170)<=x171)%x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MAX;
	static int32_t t34 = 2022;

	t34 = (((x177+x178)<=x179)%x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x181 = INT8_MIN;
	static uint16_t x183 = UINT16_MAX;
	int64_t x184 = -1LL;

	t35 = (((x181+x182)<=x183)%x184);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t36 = 205823;

	t36 = (((x189+x190)<=x191)%x192);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x193 = -1;
	int8_t x194 = INT8_MIN;
	volatile int32_t x195 = INT32_MAX;
	int32_t x196 = -1;
	volatile int32_t t37 = -122644094;

	t37 = (((x193+x194)<=x195)%x196);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x201 = INT32_MAX;
	uint64_t x203 = 80LLU;
	int8_t x204 = INT8_MAX;

	t38 = (((x201+x202)<=x203)%x204);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x205 = -1;
	uint16_t x206 = UINT16_MAX;
	volatile int8_t x207 = INT8_MIN;
	int32_t t39 = 186;

	t39 = (((x205+x206)<=x207)%x208);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = -106LL;
	int32_t x211 = -110480726;
	volatile uint64_t t40 = 754261012944LLU;

	t40 = (((x209+x210)<=x211)%x212);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = INT64_MAX;
	static int8_t x215 = INT8_MAX;
	volatile uint8_t x216 = 7U;
	int32_t t41 = 54612897;

	t41 = (((x213+x214)<=x215)%x216);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x218 = INT64_MAX;
	int16_t x220 = 1;
	int32_t t42 = 6503;

	t42 = (((x217+x218)<=x219)%x220);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = -1;
	volatile int8_t x222 = -1;
	int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MIN;
	volatile int64_t t43 = -169549LL;

	t43 = (((x221+x222)<=x223)%x224);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = -1;
	uint16_t x226 = 642U;
	uint64_t x227 = 67061964LLU;
	int16_t x228 = INT16_MIN;

	t44 = (((x225+x226)<=x227)%x228);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x229 = 197;
	volatile int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;

	t45 = (((x229+x230)<=x231)%x232);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x237 = 741U;
	int32_t x239 = -165535;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t46 = 2;

	t46 = (((x237+x238)<=x239)%x240);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x241 = 4138154U;
	int16_t x242 = -26;
	volatile int32_t t47 = -2656;

	t47 = (((x241+x242)<=x243)%x244);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	volatile uint16_t x252 = 7U;
	static int32_t t48 = 10475;

	t48 = (((x249+x250)<=x251)%x252);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x257 = -22;
	uint8_t x258 = UINT8_MAX;
	static uint16_t x259 = UINT16_MAX;
	int16_t x260 = -58;

	t49 = (((x257+x258)<=x259)%x260);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x264 = INT8_MIN;
	int32_t t50 = -28;

	t50 = (((x261+x262)<=x263)%x264);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x265 = INT8_MIN;
	static uint32_t x266 = UINT32_MAX;
	uint8_t x268 = UINT8_MAX;
	int32_t t51 = -256;

	t51 = (((x265+x266)<=x267)%x268);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x269 = 54256392443057LLU;
	volatile int64_t x270 = INT64_MAX;
	int8_t x271 = INT8_MAX;

	t52 = (((x269+x270)<=x271)%x272);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x273 = INT32_MIN;
	uint8_t x274 = 2U;
	int64_t x276 = -1LL;
	static int64_t t53 = 88235255691478982LL;

	t53 = (((x273+x274)<=x275)%x276);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MIN;
	static int16_t x278 = -1;
	uint16_t x279 = UINT16_MAX;
	volatile int64_t x280 = 901LL;

	t54 = (((x277+x278)<=x279)%x280);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x283 = 4124;
	volatile uint8_t x284 = 28U;

	t55 = (((x281+x282)<=x283)%x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x290 = 0;
	int32_t x291 = 13;
	int32_t t56 = 1;

	t56 = (((x289+x290)<=x291)%x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x293 = UINT64_MAX;
	volatile int16_t x294 = -1;
	volatile int32_t x295 = -23288758;
	uint16_t x296 = UINT16_MAX;
	int32_t t57 = 384;

	t57 = (((x293+x294)<=x295)%x296);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x297 = 11U;
	uint8_t x299 = 112U;
	uint32_t x300 = UINT32_MAX;
	static uint32_t t58 = 1U;

	t58 = (((x297+x298)<=x299)%x300);

	if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x302 = INT16_MAX;
	int16_t x303 = -1;
	volatile int32_t x304 = INT32_MIN;
	volatile int32_t t59 = -123;

	t59 = (((x301+x302)<=x303)%x304);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x305 = UINT32_MAX;
	volatile int8_t x307 = INT8_MIN;
	static int64_t x308 = 136139497751973LL;

	t60 = (((x305+x306)<=x307)%x308);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x309 = 84LLU;
	int32_t x311 = -1;

	t61 = (((x309+x310)<=x311)%x312);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MAX;
	int64_t x315 = INT64_MIN;
	uint32_t x316 = 1704U;
	uint32_t t62 = 367516U;

	t62 = (((x313+x314)<=x315)%x316);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x317 = UINT8_MAX;
	uint16_t x318 = 49U;
	volatile uint8_t x320 = 15U;
	static int32_t t63 = -2018;

	t63 = (((x317+x318)<=x319)%x320);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x321 = UINT64_MAX;
	uint8_t x322 = 3U;
	static int8_t x323 = -4;
	int32_t t64 = -11;

	t64 = (((x321+x322)<=x323)%x324);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	int16_t x328 = INT16_MIN;
	int32_t t65 = -1;

	t65 = (((x325+x326)<=x327)%x328);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x329 = INT16_MIN;
	static int8_t x330 = -1;
	int64_t x331 = -1LL;
	int8_t x332 = INT8_MIN;
	static int32_t t66 = -480;

	t66 = (((x329+x330)<=x331)%x332);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x333 = 197U;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MAX;
	volatile int32_t t67 = -1;

	t67 = (((x333+x334)<=x335)%x336);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x337 = -1;
	uint32_t x338 = UINT32_MAX;
	int64_t x339 = INT64_MIN;
	static int16_t x340 = INT16_MIN;
	int32_t t68 = -232;

	t68 = (((x337+x338)<=x339)%x340);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = INT16_MAX;
	volatile int16_t x342 = INT16_MIN;
	static uint16_t x343 = 975U;
	int64_t x344 = -19082534483238LL;
	volatile int64_t t69 = -104724950306036LL;

	t69 = (((x341+x342)<=x343)%x344);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = -1;
	static int16_t x347 = -1;
	uint32_t x348 = UINT32_MAX;
	uint32_t t70 = 121U;

	t70 = (((x345+x346)<=x347)%x348);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -3938;
	uint32_t x351 = 17247U;
	static volatile int64_t x352 = -73LL;
	static volatile int64_t t71 = -116303942562832LL;

	t71 = (((x349+x350)<=x351)%x352);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -1LL;
	static int16_t x356 = INT16_MAX;
	volatile int32_t t72 = 1075507;

	t72 = (((x353+x354)<=x355)%x356);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MAX;
	int16_t x359 = INT16_MAX;
	volatile uint8_t x360 = UINT8_MAX;
	int32_t t73 = 239314346;

	t73 = (((x357+x358)<=x359)%x360);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x361 = 4104594795687336820LLU;
	static int64_t x362 = -175803101893LL;
	uint64_t x363 = UINT64_MAX;
	uint32_t x364 = 194889U;

	t74 = (((x361+x362)<=x363)%x364);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x365 = -1;
	int16_t x366 = INT16_MAX;
	volatile uint8_t x368 = 23U;
	int32_t t75 = -13222;

	t75 = (((x365+x366)<=x367)%x368);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x369 = -477789539;
	volatile int16_t x370 = -1;
	int16_t x371 = INT16_MIN;

	t76 = (((x369+x370)<=x371)%x372);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x373 = INT64_MIN;
	uint64_t x374 = UINT64_MAX;
	uint16_t x375 = 17U;
	static uint16_t x376 = UINT16_MAX;
	int32_t t77 = -221464;

	t77 = (((x373+x374)<=x375)%x376);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x377 = 236266LLU;
	volatile int16_t x378 = 1;
	uint16_t x380 = 93U;
	int32_t t78 = 93102119;

	t78 = (((x377+x378)<=x379)%x380);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x381 = 47300388626284LLU;
	uint8_t x382 = 13U;
	volatile int32_t x383 = -2487;
	uint8_t x384 = 1U;

	t79 = (((x381+x382)<=x383)%x384);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x386 = 4542810;
	uint16_t x387 = 1381U;
	int32_t x388 = -1;
	volatile int32_t t80 = -640;

	t80 = (((x385+x386)<=x387)%x388);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x390 = 33532U;
	int32_t x391 = -6;
	int16_t x392 = 476;
	volatile int32_t t81 = 31465104;

	t81 = (((x389+x390)<=x391)%x392);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x393 = 232;
	int16_t x394 = 9;
	uint8_t x395 = UINT8_MAX;

	t82 = (((x393+x394)<=x395)%x396);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x397 = 47043021655734LLU;
	uint8_t x398 = 2U;
	uint32_t x399 = 3939U;
	int16_t x400 = 3;
	volatile int32_t t83 = 839285;

	t83 = (((x397+x398)<=x399)%x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x401 = INT32_MAX;
	int16_t x402 = INT16_MIN;
	static int64_t x403 = -1LL;
	uint8_t x404 = UINT8_MAX;
	int32_t t84 = 1;

	t84 = (((x401+x402)<=x403)%x404);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x405 = -7;
	int8_t x406 = 1;
	int64_t x407 = INT64_MIN;
	uint64_t x408 = 161136241LLU;
	volatile uint64_t t85 = 98897LLU;

	t85 = (((x405+x406)<=x407)%x408);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x409 = 2;
	volatile int32_t x410 = INT32_MIN;
	int16_t x411 = INT16_MAX;
	int64_t x412 = INT64_MIN;
	int64_t t86 = 3235841199451396170LL;

	t86 = (((x409+x410)<=x411)%x412);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x413 = INT64_MIN;
	int16_t x414 = 1792;
	int32_t x415 = INT32_MIN;
	volatile uint32_t x416 = UINT32_MAX;
	volatile uint32_t t87 = 105860262U;

	t87 = (((x413+x414)<=x415)%x416);

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = INT16_MIN;
	static uint8_t x418 = 3U;
	uint16_t x419 = 0U;
	int64_t x420 = -1LL;
	static volatile int64_t t88 = -68320LL;

	t88 = (((x417+x418)<=x419)%x420);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x422 = -12817911379747LL;
	int16_t x423 = INT16_MAX;
	int8_t x424 = 2;
	static int32_t t89 = 432723;

	t89 = (((x421+x422)<=x423)%x424);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = INT64_MIN;
	volatile int32_t x427 = -7;
	int16_t x428 = INT16_MIN;
	int32_t t90 = -75674886;

	t90 = (((x425+x426)<=x427)%x428);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x430 = INT64_MIN;
	uint8_t x431 = UINT8_MAX;
	int8_t x432 = -1;
	static volatile int32_t t91 = 1;

	t91 = (((x429+x430)<=x431)%x432);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x433 = UINT32_MAX;
	volatile int64_t x434 = INT64_MIN;
	int64_t x435 = -1LL;
	uint32_t x436 = UINT32_MAX;
	volatile uint32_t t92 = 7523812U;

	t92 = (((x433+x434)<=x435)%x436);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x441 = INT32_MAX;
	int8_t x442 = -42;
	uint8_t x443 = 99U;
	volatile uint64_t x444 = 3301LLU;
	volatile uint64_t t93 = 73464628LLU;

	t93 = (((x441+x442)<=x443)%x444);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = INT8_MIN;
	int16_t x450 = -1;
	int64_t x451 = INT64_MIN;
	volatile int64_t x452 = INT64_MIN;
	int64_t t94 = -60456742897093LL;

	t94 = (((x449+x450)<=x451)%x452);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = -26;
	static int8_t x454 = 1;
	uint8_t x455 = UINT8_MAX;
	static uint32_t x456 = 37671U;
	volatile uint32_t t95 = 30U;

	t95 = (((x453+x454)<=x455)%x456);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x457 = INT16_MIN;
	int64_t x458 = 21521LL;
	int16_t x459 = INT16_MIN;
	uint8_t x460 = 58U;
	int32_t t96 = 44912487;

	t96 = (((x457+x458)<=x459)%x460);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x461 = -1;
	int64_t x462 = -1LL;
	volatile int32_t x463 = INT32_MIN;
	int32_t t97 = 262;

	t97 = (((x461+x462)<=x463)%x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x465 = -7;
	int64_t x467 = INT64_MIN;

	t98 = (((x465+x466)<=x467)%x468);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x469 = INT64_MIN;
	volatile int8_t x470 = 2;
	uint64_t x471 = 0LLU;
	volatile uint64_t x472 = 3108746276LLU;
	static uint64_t t99 = 307122013LLU;

	t99 = (((x469+x470)<=x471)%x472);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

