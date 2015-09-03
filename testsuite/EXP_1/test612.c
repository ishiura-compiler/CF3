#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = INT32_MAX;
int8_t x9 = INT8_MAX;
int8_t x12 = -15;
static volatile int32_t t4 = 41000970;
int32_t x24 = 1820;
uint16_t x28 = 15U;
int64_t x33 = INT64_MAX;
int32_t x34 = INT32_MIN;
static int16_t x45 = INT16_MIN;
int64_t x46 = INT64_MIN;
volatile uint32_t x47 = 6U;
int8_t x48 = -1;
volatile int32_t t11 = -106696315;
volatile int8_t x75 = -1;
int64_t x78 = INT64_MIN;
int16_t x81 = -1;
static volatile int16_t x82 = -12;
volatile uint64_t t22 = 283911984981068LLU;
int16_t x102 = INT16_MIN;
uint8_t x104 = 89U;
int16_t x112 = -1;
int8_t x117 = 0;
static uint16_t x119 = UINT16_MAX;
volatile int32_t t25 = 3;
static uint64_t x125 = 5291600205918192LLU;
volatile int32_t t27 = -1458;
volatile int8_t x134 = -51;
int16_t x149 = INT16_MAX;
volatile uint32_t x154 = 6U;
static int32_t x157 = INT32_MIN;
static int16_t x161 = INT16_MIN;
uint8_t x162 = 93U;
int8_t x163 = INT8_MAX;
uint16_t x164 = 141U;
uint16_t x165 = UINT16_MAX;
int32_t x168 = -3;
int8_t x177 = INT8_MAX;
static int16_t x179 = -1;
volatile int32_t t38 = -365;
volatile int64_t x181 = INT64_MIN;
static volatile uint32_t t40 = 47U;
static int8_t x193 = -1;
int64_t x198 = INT64_MIN;
static volatile int32_t t43 = -182;
int8_t x201 = -3;
int64_t x214 = INT64_MIN;
int8_t x219 = INT8_MIN;
int64_t x220 = INT64_MIN;
int32_t x225 = INT32_MAX;
uint16_t x232 = UINT16_MAX;
volatile int64_t t51 = 117163827521778887LL;
volatile uint16_t x240 = 552U;
int8_t x249 = INT8_MAX;
int64_t x253 = -4150750715258499LL;
uint32_t x257 = 102U;
static int16_t x258 = -1;
int32_t x259 = 1437055;
static int32_t x260 = 66375387;
int16_t x265 = INT16_MAX;
uint16_t x267 = 3U;
uint8_t x269 = UINT8_MAX;
volatile int16_t x270 = INT16_MAX;
static uint64_t x272 = 1442115585433LLU;
uint64_t t60 = 63596578LLU;
int16_t x274 = INT16_MIN;
volatile int8_t x275 = INT8_MAX;
uint32_t x279 = 3U;
volatile uint64_t x280 = 6154LLU;
uint64_t t62 = 53LLU;
volatile int16_t x288 = -1;
volatile int32_t t64 = 213498;
int16_t x290 = 850;
int32_t t65 = INT32_MAX;
int32_t x293 = 2309127;
int16_t x294 = -7108;
static volatile int32_t x295 = -1;
static volatile int16_t x298 = INT16_MIN;
int16_t x300 = INT16_MIN;
uint64_t x301 = UINT64_MAX;
volatile int16_t x303 = -1;
uint64_t x305 = 344393401635528LLU;
int64_t x308 = -1LL;
uint64_t x309 = 1521708870431643LLU;
int64_t x313 = INT64_MAX;
uint16_t x320 = 31388U;
volatile int32_t t72 = -34;
uint8_t x325 = 2U;
int8_t x333 = INT8_MAX;
int64_t x341 = 1015760410777632166LL;
int16_t x342 = -264;
int8_t x352 = INT8_MAX;
volatile int32_t t80 = 21039;
uint64_t x355 = 1251991848LLU;
static uint16_t x356 = 472U;
static uint16_t x364 = UINT16_MAX;
static int16_t x365 = -22;
static int64_t x368 = 2053073492760363529LL;
int64_t t84 = -15919LL;
static uint32_t x373 = 343U;
uint32_t x374 = 819609U;
static int64_t t86 = -226LL;
volatile uint32_t x393 = 108337U;
volatile int16_t x396 = -1350;
int16_t x398 = INT16_MIN;
uint8_t x399 = 1U;
int8_t x400 = INT8_MIN;
static volatile int32_t x405 = -32;
volatile int32_t t93 = INT32_MIN;
uint8_t x409 = 4U;
int16_t x412 = -1;
int32_t x416 = INT32_MIN;
int16_t x422 = INT16_MAX;
static int16_t x423 = INT16_MAX;
static volatile int32_t t97 = 665705;
int16_t x434 = INT16_MAX;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = UINT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 379;

	t0 = (((x1/x2)<x3)+x4);

	if (t0 != 65536) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 207U;
	int8_t x6 = INT8_MAX;
	int32_t x7 = -1774765;
	volatile int32_t t1 = INT32_MAX;

	t1 = (((x5/x6)<x7)+x8);

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	volatile int32_t t2 = -13;

	t2 = (((x9/x10)<x11)+x12);

	if (t2 != -15) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MIN;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = -126;

	t3 = (((x13/x14)<x15)+x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	static int16_t x18 = INT16_MIN;
	uint64_t x19 = 1123843085358188LLU;
	int32_t x20 = 9;

	t4 = (((x17/x18)<x19)+x20);

	if (t4 != 10) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint16_t x22 = 15110U;
	uint64_t x23 = UINT64_MAX;
	int32_t t5 = -1037549348;

	t5 = (((x21/x22)<x23)+x24);

	if (t5 != 1821) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 105044138842648162LL;
	static uint32_t x26 = 419U;
	volatile uint8_t x27 = 2U;
	volatile int32_t t6 = -31643;

	t6 = (((x25/x26)<x27)+x28);

	if (t6 != 15) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static uint16_t x30 = 28U;
	uint64_t x31 = 66695146095LLU;
	int8_t x32 = -1;
	int32_t t7 = 1;

	t7 = (((x29/x30)<x31)+x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x35 = INT8_MIN;
	int16_t x36 = -464;
	int32_t t8 = -289680426;

	t8 = (((x33/x34)<x35)+x36);

	if (t8 != -463) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 2983U;
	int64_t x38 = 2141953LL;
	volatile int32_t x39 = INT32_MAX;
	uint32_t x40 = 547U;
	uint32_t t9 = 983458U;

	t9 = (((x37/x38)<x39)+x40);

	if (t9 != 548U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 2U;
	int64_t x42 = INT64_MIN;
	uint16_t x43 = 1769U;
	static int8_t x44 = INT8_MIN;
	volatile int32_t t10 = 82;

	t10 = (((x41/x42)<x43)+x44);

	if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {


	t11 = (((x45/x46)<x47)+x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint16_t x50 = 703U;
	int16_t x51 = 64;
	int8_t x52 = 21;
	static volatile int32_t t12 = -5;

	t12 = (((x49/x50)<x51)+x52);

	if (t12 != 22) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -1;
	static int16_t x54 = INT16_MIN;
	int32_t x55 = -837153;
	volatile int16_t x56 = -1;
	int32_t t13 = 0;

	t13 = (((x53/x54)<x55)+x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 4860648663544426031LLU;
	uint32_t x60 = 476115U;
	uint32_t t14 = 941U;

	t14 = (((x57/x58)<x59)+x60);

	if (t14 != 476116U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -2242680;
	volatile int32_t x66 = 1877;
	volatile int16_t x67 = -1;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = -1;

	t15 = (((x65/x66)<x67)+x68);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 390;
	uint64_t x74 = 12968243160LLU;
	volatile uint32_t x76 = 554U;
	static uint32_t t16 = 45U;

	t16 = (((x73/x74)<x75)+x76);

	if (t16 != 555U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x77 = 3625U;
	volatile uint16_t x79 = 2362U;
	int64_t x80 = 491119LL;
	int64_t t17 = 30565604581486456LL;

	t17 = (((x77/x78)<x79)+x80);

	if (t17 != 491120LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x83 = INT32_MIN;
	int16_t x84 = INT16_MIN;
	volatile int32_t t18 = 73;

	t18 = (((x81/x82)<x83)+x84);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = -1;
	static uint16_t x86 = 26U;
	int8_t x87 = INT8_MIN;
	int8_t x88 = 13;
	static int32_t t19 = -302;

	t19 = (((x85/x86)<x87)+x88);

	if (t19 != 13) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -1LL;
	int32_t x90 = -1;
	volatile int32_t x91 = -272022;
	int8_t x92 = INT8_MAX;
	static int32_t t20 = -81459235;

	t20 = (((x89/x90)<x91)+x92);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = -1;
	volatile int16_t x94 = INT16_MIN;
	volatile int8_t x95 = INT8_MIN;
	int32_t x96 = -1;
	int32_t t21 = -68928;

	t21 = (((x93/x94)<x95)+x96);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = INT16_MIN;
	static int16_t x98 = INT16_MAX;
	static int64_t x99 = -1LL;
	uint64_t x100 = 247434291434LLU;

	t22 = (((x97/x98)<x99)+x100);

	if (t22 != 247434291434LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = -1LL;
	volatile uint8_t x103 = UINT8_MAX;
	volatile int32_t t23 = 392253530;

	t23 = (((x101/x102)<x103)+x104);

	if (t23 != 90) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 3367929856216171LL;
	int16_t x110 = 6;
	int64_t x111 = INT64_MAX;
	volatile int32_t t24 = -26341424;

	t24 = (((x109/x110)<x111)+x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = INT8_MIN;
	int32_t x120 = -165;

	t25 = (((x117/x118)<x119)+x120);

	if (t25 != -164) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x121 = 0;
	int64_t x122 = -1LL;
	uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 254U;
	volatile uint32_t t26 = 123U;

	t26 = (((x121/x122)<x123)+x124);

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x126 = 30010LLU;
	static int8_t x127 = INT8_MIN;
	static int32_t x128 = 263128;

	t27 = (((x125/x126)<x127)+x128);

	if (t27 != 263129) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 2665811749LLU;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -63817509;
	int32_t t28 = -16;

	t28 = (((x129/x130)<x131)+x132);

	if (t28 != -63817508) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x133 = INT16_MIN;
	uint8_t x135 = 22U;
	static int16_t x136 = INT16_MIN;
	int32_t t29 = -33522;

	t29 = (((x133/x134)<x135)+x136);

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = 1744499235LL;
	static uint64_t x138 = UINT64_MAX;
	uint8_t x139 = 66U;
	int16_t x140 = INT16_MAX;
	volatile int32_t t30 = 2;

	t30 = (((x137/x138)<x139)+x140);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = -693574807553202431LL;
	int64_t x142 = INT64_MIN;
	volatile int16_t x143 = 8112;
	int8_t x144 = -1;
	int32_t t31 = 1248765;

	t31 = (((x141/x142)<x143)+x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x150 = -201111;
	uint64_t x151 = 33276617936247134LLU;
	int32_t x152 = 48386141;
	int32_t t32 = 37;

	t32 = (((x149/x150)<x151)+x152);

	if (t32 != 48386142) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x155 = 28;
	static volatile uint8_t x156 = 24U;
	int32_t t33 = -65;

	t33 = (((x153/x154)<x155)+x156);

	if (t33 != 24) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x158 = 12U;
	int32_t x159 = INT32_MIN;
	int16_t x160 = INT16_MIN;
	int32_t t34 = -105;

	t34 = (((x157/x158)<x159)+x160);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t t35 = 985720;

	t35 = (((x161/x162)<x163)+x164);

	if (t35 != 142) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x166 = INT16_MIN;
	uint64_t x167 = 164887718LLU;
	volatile int32_t t36 = 1;

	t36 = (((x165/x166)<x167)+x168);

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x173 = -1;
	int16_t x174 = INT16_MAX;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = 1574512673LLU;
	uint64_t t37 = 13200761076LLU;

	t37 = (((x173/x174)<x175)+x176);

	if (t37 != 1574512673LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x178 = -1;
	int8_t x180 = INT8_MAX;

	t38 = (((x177/x178)<x179)+x180);

	if (t38 != 128) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x182 = 105U;
	uint64_t x183 = 3775147616LLU;
	int64_t x184 = 0LL;
	volatile int64_t t39 = 113058166789425034LL;

	t39 = (((x181/x182)<x183)+x184);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = UINT16_MAX;
	int8_t x186 = INT8_MAX;
	static int16_t x187 = 789;
	uint32_t x188 = UINT32_MAX;

	t40 = (((x185/x186)<x187)+x188);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MAX;
	int8_t x190 = 24;
	volatile int16_t x191 = INT16_MIN;
	int32_t x192 = -1;
	volatile int32_t t41 = -52542129;

	t41 = (((x189/x190)<x191)+x192);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x194 = INT8_MIN;
	uint16_t x195 = 1841U;
	static int16_t x196 = INT16_MIN;
	int32_t t42 = 205;

	t42 = (((x193/x194)<x195)+x196);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = -1990;
	uint64_t x199 = 100359340821LLU;
	static int8_t x200 = -1;

	t43 = (((x197/x198)<x199)+x200);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = -5;
	static int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	int32_t t44 = 1;

	t44 = (((x201/x202)<x203)+x204);

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x205 = 357U;
	volatile int8_t x206 = -9;
	int64_t x207 = -1LL;
	uint64_t x208 = 2112184613888362343LLU;
	volatile uint64_t t45 = 1829900389LLU;

	t45 = (((x205/x206)<x207)+x208);

	if (t45 != 2112184613888362344LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x209 = 28U;
	int64_t x210 = -3288729640LL;
	static int64_t x211 = 33LL;
	volatile uint8_t x212 = 97U;
	int32_t t46 = -795505077;

	t46 = (((x209/x210)<x211)+x212);

	if (t46 != 98) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x213 = -1;
	uint64_t x215 = UINT64_MAX;
	int8_t x216 = 0;
	static volatile int32_t t47 = -3;

	t47 = (((x213/x214)<x215)+x216);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x217 = -3;
	int16_t x218 = INT16_MIN;
	volatile int64_t t48 = INT64_MIN;

	t48 = (((x217/x218)<x219)+x220);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x226 = 959902U;
	int64_t x227 = -1LL;
	static int16_t x228 = INT16_MIN;
	static int32_t t49 = 0;

	t49 = (((x225/x226)<x227)+x228);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x229 = 1;
	static int32_t x230 = INT32_MIN;
	int32_t x231 = 0;
	static volatile int32_t t50 = -8579;

	t50 = (((x229/x230)<x231)+x232);

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x233 = 55U;
	static volatile int8_t x234 = INT8_MIN;
	volatile uint64_t x235 = UINT64_MAX;
	static int64_t x236 = INT64_MIN;

	t51 = (((x233/x234)<x235)+x236);

	if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 42986331U;
	static int32_t t52 = -9368;

	t52 = (((x237/x238)<x239)+x240);

	if (t52 != 553) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x241 = 0;
	static uint16_t x242 = 668U;
	static uint32_t x243 = UINT32_MAX;
	int32_t x244 = INT32_MIN;
	static volatile int32_t t53 = -41934;

	t53 = (((x241/x242)<x243)+x244);

	if (t53 != -2147483647) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 8U;
	int8_t x246 = -7;
	int16_t x247 = INT16_MIN;
	static int32_t x248 = INT32_MIN;
	int32_t t54 = INT32_MIN;

	t54 = (((x245/x246)<x247)+x248);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x250 = UINT8_MAX;
	uint64_t x251 = 18471878239LLU;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t55 = 152809LL;

	t55 = (((x249/x250)<x251)+x252);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x254 = 28017LLU;
	uint64_t x255 = 8380LLU;
	int32_t x256 = -1;
	int32_t t56 = 32922795;

	t56 = (((x253/x254)<x255)+x256);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t t57 = 11;

	t57 = (((x257/x258)<x259)+x260);

	if (t57 != 66375388) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	volatile int64_t x262 = -1470698948662LL;
	int8_t x263 = -1;
	int64_t x264 = INT64_MAX;
	volatile int64_t t58 = INT64_MAX;

	t58 = (((x261/x262)<x263)+x264);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x266 = -1;
	uint16_t x268 = 2U;
	static int32_t t59 = -14097;

	t59 = (((x265/x266)<x267)+x268);

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x271 = UINT8_MAX;

	t60 = (((x269/x270)<x271)+x272);

	if (t60 != 1442115585434LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = INT16_MAX;
	static uint32_t x276 = 133178U;
	uint32_t t61 = 372007U;

	t61 = (((x273/x274)<x275)+x276);

	if (t61 != 133179U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = -1;
	static uint16_t x278 = UINT16_MAX;

	t62 = (((x277/x278)<x279)+x280);

	if (t62 != 6155LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x281 = -1;
	uint32_t x282 = 111340U;
	static volatile int64_t x283 = -1LL;
	int64_t x284 = -1LL;
	int64_t t63 = 40609406LL;

	t63 = (((x281/x282)<x283)+x284);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x285 = INT32_MIN;
	int16_t x286 = 54;
	int32_t x287 = INT32_MIN;

	t64 = (((x285/x286)<x287)+x288);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x289 = 196246284U;
	uint8_t x291 = 10U;
	int32_t x292 = INT32_MAX;

	t65 = (((x289/x290)<x291)+x292);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x296 = INT16_MAX;
	static volatile int32_t t66 = 19;

	t66 = (((x293/x294)<x295)+x296);

	if (t66 != 32768) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x297 = 20548U;
	volatile int32_t x299 = INT32_MIN;
	int32_t t67 = 35825;

	t67 = (((x297/x298)<x299)+x300);

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x302 = INT64_MIN;
	uint64_t x304 = UINT64_MAX;
	uint64_t t68 = 12201270465081LLU;

	t68 = (((x301/x302)<x303)+x304);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x306 = 26652U;
	int8_t x307 = -1;
	volatile int64_t t69 = 113063214LL;

	t69 = (((x305/x306)<x307)+x308);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x310 = 73478802LLU;
	int32_t x311 = INT32_MIN;
	static int16_t x312 = INT16_MIN;
	int32_t t70 = 1400;

	t70 = (((x309/x310)<x311)+x312);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x314 = 4095582;
	volatile uint16_t x315 = 827U;
	volatile uint64_t x316 = 163068852388909282LLU;
	static volatile uint64_t t71 = 13LLU;

	t71 = (((x313/x314)<x315)+x316);

	if (t71 != 163068852388909282LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MAX;
	int16_t x318 = INT16_MIN;
	uint64_t x319 = 4880047155705LLU;

	t72 = (((x317/x318)<x319)+x320);

	if (t72 != 31389) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MIN;
	static int16_t x324 = -1;
	int32_t t73 = 0;

	t73 = (((x321/x322)<x323)+x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x326 = 79U;
	volatile int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t74 = 2;

	t74 = (((x325/x326)<x327)+x328);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x329 = 9U;
	static uint64_t x330 = 54037LLU;
	int8_t x331 = 21;
	int64_t x332 = 11335867900887865LL;
	volatile int64_t t75 = 49503LL;

	t75 = (((x329/x330)<x331)+x332);

	if (t75 != 11335867900887866LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x334 = 72U;
	int64_t x335 = INT64_MIN;
	uint16_t x336 = UINT16_MAX;
	volatile int32_t t76 = 67731;

	t76 = (((x333/x334)<x335)+x336);

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x337 = 7U;
	int32_t x338 = INT32_MAX;
	static int16_t x339 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t77 = -199;

	t77 = (((x337/x338)<x339)+x340);

	if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x343 = 51U;
	int32_t x344 = -1;
	static int32_t t78 = 86783;

	t78 = (((x341/x342)<x343)+x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x345 = 3U;
	volatile int16_t x346 = INT16_MIN;
	volatile int16_t x347 = -1;
	uint8_t x348 = UINT8_MAX;
	int32_t t79 = -8123;

	t79 = (((x345/x346)<x347)+x348);

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = UINT8_MAX;
	uint32_t x350 = 28941628U;
	static int32_t x351 = INT32_MIN;

	t80 = (((x349/x350)<x351)+x352);

	if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x353 = 59U;
	static uint64_t x354 = 561LLU;
	static volatile int32_t t81 = 187890;

	t81 = (((x353/x354)<x355)+x356);

	if (t81 != 473) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x357 = 42U;
	static volatile int16_t x358 = INT16_MIN;
	uint64_t x359 = 121232LLU;
	int64_t x360 = INT64_MIN;
	int64_t t82 = 14791LL;

	t82 = (((x357/x358)<x359)+x360);

	if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x361 = INT32_MIN;
	int32_t x362 = INT32_MIN;
	uint64_t x363 = UINT64_MAX;
	int32_t t83 = 39260969;

	t83 = (((x361/x362)<x363)+x364);

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x366 = INT16_MIN;
	static int8_t x367 = -2;

	t84 = (((x365/x366)<x367)+x368);

	if (t84 != 2053073492760363529LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x369 = 88430979376LLU;
	static int8_t x370 = 61;
	static int16_t x371 = INT16_MAX;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t85 = UINT32_MAX;

	t85 = (((x369/x370)<x371)+x372);

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x375 = INT16_MAX;
	int64_t x376 = -1LL;

	t86 = (((x373/x374)<x375)+x376);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x382 = 1711U;
	int8_t x383 = 5;
	uint64_t x384 = 2919804LLU;
	uint64_t t87 = 988LLU;

	t87 = (((x381/x382)<x383)+x384);

	if (t87 != 2919804LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = INT64_MAX;
	int8_t x386 = INT8_MIN;
	int32_t x387 = -120111;
	int64_t x388 = -1LL;
	int64_t t88 = 506628016864199LL;

	t88 = (((x385/x386)<x387)+x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x389 = INT16_MIN;
	int64_t x390 = -2LL;
	static uint32_t x391 = UINT32_MAX;
	uint8_t x392 = 87U;
	int32_t t89 = -22279249;

	t89 = (((x389/x390)<x391)+x392);

	if (t89 != 88) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x394 = 2U;
	int64_t x395 = INT64_MIN;
	volatile int32_t t90 = -20;

	t90 = (((x393/x394)<x395)+x396);

	if (t90 != -1350) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = 23;
	int32_t t91 = 9;

	t91 = (((x397/x398)<x399)+x400);

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 61242537176LLU;
	volatile int32_t x402 = -4;
	int16_t x403 = 2718;
	int8_t x404 = INT8_MIN;
	volatile int32_t t92 = -110451043;

	t92 = (((x401/x402)<x403)+x404);

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x406 = INT16_MIN;
	int8_t x407 = -7;
	int32_t x408 = INT32_MIN;

	t93 = (((x405/x406)<x407)+x408);

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x410 = 16669529886931LL;
	int32_t x411 = -6;
	int32_t t94 = 6;

	t94 = (((x409/x410)<x411)+x412);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x413 = 5U;
	int16_t x414 = -1;
	volatile int16_t x415 = INT16_MAX;
	int32_t t95 = -1040945;

	t95 = (((x413/x414)<x415)+x416);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x417 = 1985;
	int8_t x418 = INT8_MIN;
	volatile int64_t x419 = INT64_MIN;
	static volatile uint16_t x420 = 1U;
	int32_t t96 = -15607410;

	t96 = (((x417/x418)<x419)+x420);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x421 = INT8_MAX;
	static int8_t x424 = INT8_MIN;

	t97 = (((x421/x422)<x423)+x424);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x425 = 11LLU;
	uint64_t x426 = 1156731LLU;
	int8_t x427 = 1;
	uint32_t x428 = 1376591672U;
	static volatile uint32_t t98 = 23607U;

	t98 = (((x425/x426)<x427)+x428);

	if (t98 != 1376591673U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x433 = 1U;
	uint32_t x435 = 665252957U;
	int8_t x436 = 2;
	volatile int32_t t99 = -24;

	t99 = (((x433/x434)<x435)+x436);

	if (t99 != 3) { NG(); } else { ; }
	
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

