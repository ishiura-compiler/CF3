#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = UINT8_MAX;
int8_t x3 = -1;
uint8_t x9 = UINT8_MAX;
uint64_t x12 = 70997LLU;
uint32_t x13 = 30543721U;
int64_t t4 = 502663642116LL;
int16_t x26 = INT16_MIN;
static volatile uint32_t x27 = 393637313U;
uint32_t t6 = 433231413U;
int8_t x35 = INT8_MIN;
static volatile uint32_t t9 = 433U;
volatile int32_t x41 = -876633;
static volatile int64_t t11 = 43188469365LL;
int32_t x60 = -46;
uint8_t x69 = UINT8_MAX;
static volatile uint8_t x74 = UINT8_MAX;
int32_t x78 = -2699387;
int32_t x83 = -17286307;
int8_t x84 = INT8_MIN;
int32_t x85 = -1;
int16_t x89 = INT16_MAX;
static volatile int32_t t20 = 1871;
volatile int8_t x98 = 0;
static uint64_t t21 = 0LLU;
int64_t x107 = 1LL;
volatile int64_t x111 = -1LL;
static uint8_t x113 = UINT8_MAX;
volatile int8_t x115 = INT8_MIN;
uint8_t x123 = 1U;
int32_t x125 = INT32_MIN;
int32_t x126 = -1;
static uint8_t x127 = 1U;
uint64_t t29 = 1089171433622240LLU;
static volatile uint8_t x164 = UINT8_MAX;
volatile int64_t t34 = 2394094LL;
int8_t x168 = INT8_MIN;
uint32_t x170 = 29991U;
int8_t x175 = 1;
static int64_t t37 = -96086537866644030LL;
uint64_t x179 = 415LLU;
volatile int16_t x181 = -26;
static uint8_t x187 = UINT8_MAX;
volatile uint64_t x196 = UINT64_MAX;
static int8_t x200 = INT8_MAX;
int16_t x206 = INT16_MAX;
static uint16_t x207 = UINT16_MAX;
static int32_t x215 = -1;
static int8_t x226 = INT8_MIN;
int8_t x229 = INT8_MIN;
int16_t x233 = 13654;
static int16_t x240 = INT16_MIN;
volatile uint64_t t51 = 1444459185LLU;
int8_t x242 = -1;
int64_t x244 = INT64_MIN;
volatile int32_t t53 = 2371;
volatile int16_t x251 = INT16_MIN;
int64_t x256 = INT64_MAX;
int64_t t55 = -2851366LL;
uint64_t t56 = 66307LLU;
volatile uint64_t t57 = 3131761LLU;
volatile uint16_t x273 = 17U;
uint32_t x275 = 770632U;
volatile uint64_t t59 = 347499534703755LLU;
int32_t t62 = 8035952;
static uint64_t x291 = 1LLU;
uint16_t x306 = 11U;
uint64_t x326 = UINT64_MAX;
uint64_t t70 = 805LLU;
int64_t x333 = INT64_MIN;
volatile uint64_t x335 = 673LLU;
static int8_t x339 = INT8_MAX;
volatile int16_t x343 = INT16_MIN;
volatile uint64_t t75 = 2954160040832075849LLU;
int32_t x356 = INT32_MIN;
int16_t x359 = INT16_MAX;
int64_t t77 = 22864LL;
int32_t x365 = -14924344;
volatile int32_t t80 = -98379121;
uint8_t x382 = 27U;
volatile int64_t t85 = -144925LL;
uint64_t t86 = 16746477110829LLU;
int64_t x418 = -1LL;
uint64_t x432 = UINT64_MAX;
int8_t x433 = 1;
int16_t x435 = 464;
int16_t x436 = INT16_MIN;
int16_t x449 = -1;
static int16_t x453 = INT16_MIN;
volatile int8_t x455 = INT8_MIN;
int64_t x458 = -1LL;
uint64_t x464 = UINT64_MAX;
int8_t x471 = -1;
volatile int32_t x472 = INT32_MIN;
static uint16_t x476 = 21U;
volatile int32_t t98 = 56036994;
static volatile int32_t x478 = INT32_MAX;
static uint64_t x480 = 62771000999687376LLU;


void f0(void) {
	static uint16_t x2 = 372U;
	uint16_t x4 = 1U;
	int32_t t0 = -4717;

	t0 = ((x1|(x2/x3))*x4);

	if (t0 != -257) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = UINT64_MAX;
	volatile uint8_t x6 = 0U;
	int16_t x7 = INT16_MIN;
	uint16_t x8 = 5541U;
	volatile uint64_t t1 = 331854982664925062LLU;

	t1 = ((x5|(x6/x7))*x8);

	if (t1 != 18446744073709546075LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = UINT64_MAX;
	int16_t x11 = 12;
	uint64_t t2 = 12LLU;

	t2 = ((x9|(x10/x11))*x12);

	if (t2 != 7686143364057692331LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = -1LL;
	volatile int32_t x15 = -22;
	int32_t x16 = 82033;
	int64_t t3 = 0LL;

	t3 = ((x13|(x14/x15))*x16);

	if (t3 != 2505593064793LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int64_t x18 = -170LL;
	int8_t x19 = 22;
	uint8_t x20 = 4U;

	t4 = ((x17|(x18/x19))*x20);

	if (t4 != -4LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 1U;
	volatile int64_t x22 = 9596239572816LL;
	uint32_t x23 = UINT32_MAX;
	uint16_t x24 = 11421U;
	volatile int64_t t5 = -78253LL;

	t5 = ((x21|(x22/x23))*x24);

	if (t5 != 25525935LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 2975U;
	int32_t x28 = -1569;

	t6 = ((x25|(x26/x27))*x28);

	if (t6 != 4290299521U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	uint32_t x30 = 44U;
	int32_t x31 = INT32_MIN;
	static int16_t x32 = 0;
	uint32_t t7 = 1U;

	t7 = ((x29|(x30/x31))*x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static uint32_t x34 = 28U;
	int8_t x36 = INT8_MAX;
	volatile uint32_t t8 = 0U;

	t8 = ((x33|(x34/x35))*x36);

	if (t8 != 2147483521U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	volatile int16_t x38 = 1065;
	uint32_t x39 = UINT32_MAX;
	volatile int8_t x40 = INT8_MAX;

	t9 = ((x37|(x38/x39))*x40);

	if (t9 != 32385U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 40749U;
	static int32_t x43 = INT32_MIN;
	volatile int32_t x44 = -908;
	static uint32_t t10 = 1U;

	t10 = ((x41|(x42/x43))*x44);

	if (t10 != 795982764U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	static int8_t x50 = 0;
	int8_t x51 = -1;
	int32_t x52 = INT32_MIN;

	t11 = ((x49|(x50/x51))*x52);

	if (t11 != 2147483648LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	int64_t x58 = -1LL;
	int64_t x59 = -7622636602312324LL;
	static int64_t t12 = 8615112912912160LL;

	t12 = ((x57|(x58/x59))*x60);

	if (t12 != 46LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = 120740U;
	int8_t x63 = -37;
	int8_t x64 = 27;
	static uint32_t t13 = 1197U;

	t13 = ((x61|(x62/x63))*x64);

	if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = INT32_MIN;
	volatile int64_t x71 = 13LL;
	volatile int32_t x72 = -16993;
	volatile int64_t t14 = -59897439454357258LL;

	t14 = ((x69|(x70/x71))*x72);

	if (t14 != 2807089184609LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static volatile int32_t x75 = INT32_MAX;
	uint8_t x76 = UINT8_MAX;
	int32_t t15 = -8;

	t15 = ((x73|(x74/x75))*x76);

	if (t15 != 16711425) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x77 = -1LL;
	int32_t x79 = INT32_MIN;
	volatile int8_t x80 = -1;
	volatile int64_t t16 = 326LL;

	t16 = ((x77|(x78/x79))*x80);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = 0U;
	uint32_t x82 = UINT32_MAX;
	volatile uint32_t t17 = 871785798U;

	t17 = ((x81|(x82/x83))*x84);

	if (t17 != 4294967168U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x86 = -1;
	static uint8_t x87 = 2U;
	volatile int32_t x88 = 0;
	volatile int32_t t18 = 16873507;

	t18 = ((x85|(x86/x87))*x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x90 = INT8_MAX;
	volatile uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;
	int32_t t19 = 26;

	t19 = ((x89|(x90/x91))*x92);

	if (t19 != 8355585) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = 0;
	static int8_t x94 = INT8_MAX;
	int32_t x95 = -4;
	int8_t x96 = 25;

	t20 = ((x93|(x94/x95))*x96);

	if (t20 != -775) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x97 = 109LL;
	uint64_t x99 = 16803633403LLU;
	static int32_t x100 = -1;

	t21 = ((x97|(x98/x99))*x100);

	if (t21 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int16_t x103 = INT16_MIN;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t22 = -121;

	t22 = ((x101|(x102/x103))*x104);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x105 = INT8_MIN;
	uint8_t x106 = 12U;
	uint8_t x108 = 24U;
	static int64_t t23 = 178248329882477708LL;

	t23 = ((x105|(x106/x107))*x108);

	if (t23 != -2784LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x109 = INT16_MIN;
	volatile int32_t x110 = INT32_MAX;
	static int64_t x112 = -1LL;
	static int64_t t24 = 75LL;

	t24 = ((x109|(x110/x111))*x112);

	if (t24 != 32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x114 = UINT16_MAX;
	static uint32_t x116 = 452U;
	uint32_t t25 = 6843520U;

	t25 = ((x113|(x114/x115))*x116);

	if (t25 != 4294851132U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	volatile uint64_t x122 = 33483710LLU;
	uint8_t x124 = UINT8_MAX;
	uint64_t t26 = 28LLU;

	t26 = ((x121|(x122/x123))*x124);

	if (t26 != 9223372045393121858LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x128 = 14;
	static volatile int32_t t27 = -406216261;

	t27 = ((x125|(x126/x127))*x128);

	if (t27 != -14) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = 152884882;
	volatile uint16_t x135 = UINT16_MAX;
	volatile uint64_t x136 = UINT64_MAX;
	uint64_t t28 = 19LLU;

	t28 = ((x133|(x134/x135))*x136);

	if (t28 != 100LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	static uint16_t x138 = 3137U;
	static uint64_t x139 = UINT64_MAX;
	uint8_t x140 = 0U;

	t29 = ((x137|(x138/x139))*x140);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x141 = 5454U;
	uint32_t x142 = UINT32_MAX;
	uint32_t x143 = 1218U;
	int32_t x144 = INT32_MAX;
	volatile uint32_t t30 = 109U;

	t30 = ((x141|(x142/x143))*x144);

	if (t30 != 2143953041U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	static int64_t x147 = -1LL;
	int16_t x148 = INT16_MIN;
	volatile int64_t t31 = -17585767256725LL;

	t31 = ((x145|(x146/x147))*x148);

	if (t31 != 4161536LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = INT32_MIN;
	int8_t x150 = 0;
	int16_t x151 = -1;
	int16_t x152 = 1;
	volatile int32_t t32 = INT32_MIN;

	t32 = ((x149|(x150/x151))*x152);

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x157 = 21U;
	volatile int8_t x158 = INT8_MIN;
	static uint16_t x159 = 24U;
	uint32_t x160 = 29365U;
	static volatile uint32_t t33 = 1U;

	t33 = ((x157|(x158/x159))*x160);

	if (t33 != 4294937931U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = -1LL;
	int8_t x162 = INT8_MIN;
	static int16_t x163 = INT16_MIN;

	t34 = ((x161|(x162/x163))*x164);

	if (t34 != -255LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = -1;
	int64_t x166 = 120357LL;
	uint64_t x167 = UINT64_MAX;
	volatile uint64_t t35 = 422LLU;

	t35 = ((x165|(x166/x167))*x168);

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x169 = 64U;
	int64_t x171 = INT64_MIN;
	static uint32_t x172 = UINT32_MAX;
	volatile int64_t t36 = -192415458822434702LL;

	t36 = ((x169|(x170/x171))*x172);

	if (t36 != 274877906880LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x173 = 21006266234412LL;
	volatile uint8_t x174 = UINT8_MAX;
	uint16_t x176 = UINT16_MAX;

	t37 = ((x173|(x174/x175))*x176);

	if (t37 != 1376645657686018305LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	uint64_t x180 = 274604336LLU;
	static uint64_t t38 = 64411707423LLU;

	t38 = ((x177|(x178/x179))*x180);

	if (t38 != 17859877720077096736LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = UINT16_MAX;
	int64_t x184 = -1LL;
	int64_t t39 = 7669475LL;

	t39 = ((x181|(x182/x183))*x184);

	if (t39 != 26LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x185 = INT32_MAX;
	int64_t x186 = -1LL;
	int8_t x188 = -1;
	int64_t t40 = 15843902179LL;

	t40 = ((x185|(x186/x187))*x188);

	if (t40 != -2147483647LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x189 = -37LL;
	int16_t x190 = INT16_MIN;
	int32_t x191 = 1057747561;
	int16_t x192 = 9;
	volatile int64_t t41 = 7332LL;

	t41 = ((x189|(x190/x191))*x192);

	if (t41 != -333LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = -1;
	uint8_t x194 = 5U;
	int16_t x195 = 3294;
	volatile uint64_t t42 = 82943126LLU;

	t42 = ((x193|(x194/x195))*x196);

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x197 = 67U;
	uint32_t x198 = 15252U;
	int64_t x199 = -1LL;
	static int64_t t43 = -15905833500590059LL;

	t43 = ((x197|(x198/x199))*x200);

	if (t43 != -1936623LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = -1;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = 781290452949108090LLU;
	int64_t x204 = 499618LL;
	uint64_t t44 = 7865310639643034254LLU;

	t44 = ((x201|(x202/x203))*x204);

	if (t44 != 18446744073709051998LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x205 = 166U;
	uint8_t x208 = 81U;
	volatile uint32_t t45 = 44U;

	t45 = ((x205|(x206/x207))*x208);

	if (t45 != 13446U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x209 = INT32_MIN;
	int64_t x210 = -248507910989840959LL;
	volatile int8_t x211 = 42;
	int8_t x212 = 0;
	int64_t t46 = -2885973LL;

	t46 = ((x209|(x210/x211))*x212);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MAX;
	static int16_t x216 = INT16_MAX;
	volatile int32_t t47 = 439376;

	t47 = ((x213|(x214/x215))*x216);

	if (t47 != -4161409) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MAX;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = UINT16_MAX;
	int64_t t48 = 3374612LL;

	t48 = ((x225|(x226/x227))*x228);

	if (t48 != -65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = INT16_MIN;
	int16_t x231 = -10;
	static int8_t x232 = INT8_MAX;
	int32_t t49 = -28;

	t49 = ((x229|(x230/x231))*x232);

	if (t49 != -6604) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x234 = 0U;
	int32_t x235 = INT32_MIN;
	int8_t x236 = 3;
	int32_t t50 = 26;

	t50 = ((x233|(x234/x235))*x236);

	if (t50 != 40962) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = 1;
	static uint64_t x238 = 897LLU;
	static int64_t x239 = INT64_MAX;

	t51 = ((x237|(x238/x239))*x240);

	if (t51 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x241 = 119421531201181326LLU;
	volatile uint32_t x243 = UINT32_MAX;
	volatile uint64_t t52 = 4LLU;

	t52 = ((x241|(x242/x243))*x244);

	if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = 85;
	volatile int32_t x246 = INT32_MAX;
	int32_t x247 = INT32_MIN;
	volatile int16_t x248 = INT16_MIN;

	t53 = ((x245|(x246/x247))*x248);

	if (t53 != -2785280) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x249 = 10U;
	int64_t x250 = INT64_MIN;
	int16_t x252 = 3186;
	int64_t t54 = -53111548464LL;

	t54 = ((x249|(x250/x251))*x252);

	if (t54 != 896779275800181876LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MIN;
	int16_t x255 = 3264;

	t55 = ((x253|(x254/x255))*x256);

	if (t55 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x261 = 367001973947167040LLU;
	int64_t x262 = 642773LL;
	int32_t x263 = -1;
	uint32_t x264 = 33346U;

	t56 = ((x261|(x262/x263))*x264);

	if (t56 != 18446744071399707542LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x265 = 144422546719LLU;
	int32_t x266 = INT32_MAX;
	volatile int32_t x267 = INT32_MAX;
	uint32_t x268 = UINT32_MAX;

	t57 = ((x265|(x266/x267))*x268);

	if (t57 != 11547560386299351777LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = -26;
	static int8_t x270 = -1;
	static volatile uint64_t x271 = 20962586036LLU;
	int64_t x272 = 53939LL;
	static uint64_t t58 = 22LLU;

	t58 = ((x269|(x270/x271))*x272);

	if (t58 != 18446744073709066165LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x274 = 2048543LLU;
	int64_t x276 = INT64_MAX;

	t59 = ((x273|(x274/x275))*x276);

	if (t59 != 9223372036854775789LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int32_t x278 = 1231731;
	int16_t x279 = INT16_MAX;
	static uint64_t x280 = 343689205LLU;
	static volatile uint64_t t60 = 3LLU;

	t60 = ((x277|(x278/x279))*x280);

	if (t60 != 87640747275LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -1929512LL;
	uint16_t x283 = 151U;
	int16_t x284 = 44;
	static int64_t t61 = -2LL;

	t61 = ((x281|(x282/x283))*x284);

	if (t61 != -4664LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x285 = 62U;
	int16_t x286 = INT16_MIN;
	int32_t x287 = 433210413;
	static int16_t x288 = INT16_MIN;

	t62 = ((x285|(x286/x287))*x288);

	if (t62 != -2031616) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x289 = UINT32_MAX;
	static int8_t x290 = INT8_MAX;
	int64_t x292 = -3583754486LL;
	uint64_t t63 = 17672209LLU;

	t63 = ((x289|(x290/x291))*x292);

	if (t63 != 3054635763030016246LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x293 = UINT32_MAX;
	static int16_t x294 = INT16_MIN;
	int8_t x295 = -58;
	volatile int16_t x296 = -1;
	volatile uint32_t t64 = 11U;

	t64 = ((x293|(x294/x295))*x296);

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x297 = 47;
	int8_t x298 = INT8_MAX;
	static int8_t x299 = INT8_MIN;
	uint64_t x300 = 543478651LLU;
	volatile uint64_t t65 = 7LLU;

	t65 = ((x297|(x298/x299))*x300);

	if (t65 != 25543496597LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x305 = 4;
	uint32_t x307 = 213830094U;
	int64_t x308 = -1LL;
	int64_t t66 = -9080LL;

	t66 = ((x305|(x306/x307))*x308);

	if (t66 != -4LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -28;
	volatile int16_t x310 = INT16_MAX;
	static int64_t x311 = -1LL;
	int32_t x312 = INT32_MIN;
	int64_t t67 = 2340811051516LL;

	t67 = ((x309|(x310/x311))*x312);

	if (t67 != 57982058496LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 6U;
	volatile uint32_t x314 = 8181215U;
	volatile int64_t x315 = 91104685135857416LL;
	static int16_t x316 = 577;
	int64_t t68 = 894154836244021387LL;

	t68 = ((x313|(x314/x315))*x316);

	if (t68 != 3462LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	uint32_t x319 = 11003173U;
	static uint32_t x320 = 16206037U;
	volatile uint64_t t69 = 23356846LLU;

	t69 = ((x317|(x318/x319))*x320);

	if (t69 != 18446744073693345579LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x325 = -1;
	volatile int32_t x327 = INT32_MIN;
	static int16_t x328 = INT16_MIN;

	t70 = ((x325|(x326/x327))*x328);

	if (t70 != 32768LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x334 = INT64_MIN;
	int8_t x336 = -1;
	uint64_t t71 = 11013633LLU;

	t71 = ((x333|(x334/x335))*x336);

	if (t71 != 9209667174987235280LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = -1;
	uint8_t x338 = 0U;
	int32_t x340 = 3;
	int32_t t72 = 453767;

	t72 = ((x337|(x338/x339))*x340);

	if (t72 != -3) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x341 = 7048621LLU;
	uint32_t x342 = 1075384U;
	volatile uint32_t x344 = UINT32_MAX;
	volatile uint64_t t73 = 23800585569775715LLU;

	t73 = ((x341|(x342/x343))*x344);

	if (t73 != 30273596669850195LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = -29;
	int32_t x346 = -1;
	int64_t x347 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t74 = -1541339LL;

	t74 = ((x345|(x346/x347))*x348);

	if (t74 != -124554051555LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 111685657171453LLU;
	volatile int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;

	t75 = ((x349|(x350/x351))*x352);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MIN;
	volatile uint64_t x354 = 6840977203413LLU;
	int8_t x355 = -1;
	uint64_t t76 = 2110540757274462LLU;

	t76 = ((x353|(x354/x355))*x356);

	if (t76 != 70368744177664LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x357 = -1LL;
	volatile int64_t x358 = INT64_MAX;
	int64_t x360 = 13818629695LL;

	t77 = ((x357|(x358/x359))*x360);

	if (t77 != -13818629695LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x366 = -1LL;
	uint16_t x367 = 251U;
	uint64_t x368 = 215293711603623LLU;
	volatile uint64_t t78 = 6372944LLU;

	t78 = ((x365|(x366/x367))*x368);

	if (t78 != 15062799889910234488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x369 = INT32_MAX;
	int16_t x370 = -1;
	uint64_t x371 = 2LLU;
	uint64_t x372 = 3LLU;
	static uint64_t t79 = 12132982604LLU;

	t79 = ((x369|(x370/x371))*x372);

	if (t79 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = -1;
	int16_t x374 = 4;
	volatile int16_t x375 = INT16_MAX;
	uint8_t x376 = 0U;

	t80 = ((x373|(x374/x375))*x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = INT16_MIN;
	static volatile int8_t x378 = 6;
	int64_t x379 = INT64_MIN;
	uint16_t x380 = UINT16_MAX;
	int64_t t81 = -9165540668417LL;

	t81 = ((x377|(x378/x379))*x380);

	if (t81 != -2147450880LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x381 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	uint8_t x384 = 0U;
	volatile int32_t t82 = -1;

	t82 = ((x381|(x382/x383))*x384);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = INT32_MIN;
	int64_t x386 = -1581280LL;
	volatile uint64_t x387 = UINT64_MAX;
	static uint8_t x388 = 0U;
	uint64_t t83 = 22250285LLU;

	t83 = ((x385|(x386/x387))*x388);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x393 = 1544651822768058433LLU;
	uint16_t x394 = 1U;
	volatile uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MAX;
	volatile uint64_t t84 = 26426513254LLU;

	t84 = ((x393|(x394/x395))*x396);

	if (t84 != 7678720214086717375LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x405 = 1;
	int64_t x406 = INT64_MAX;
	uint32_t x407 = 8U;
	int8_t x408 = -1;

	t85 = ((x405|(x406/x407))*x408);

	if (t85 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x409 = 162386LL;
	int32_t x410 = INT32_MAX;
	uint32_t x411 = UINT32_MAX;
	uint64_t x412 = 32645802710LLU;

	t86 = ((x409|(x410/x411))*x412);

	if (t86 != 5301221318866060LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x413 = 47U;
	static volatile uint16_t x414 = 2452U;
	volatile int16_t x415 = -2858;
	uint64_t x416 = 45682696871826112LLU;
	volatile uint64_t t87 = 71348488795836497LLU;

	t87 = ((x413|(x414/x415))*x416);

	if (t87 != 2147086752975827264LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x417 = UINT16_MAX;
	static int64_t x419 = -89778948274LL;
	volatile uint8_t x420 = 6U;
	int64_t t88 = 3871505LL;

	t88 = ((x417|(x418/x419))*x420);

	if (t88 != 393210LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = INT64_MIN;
	int8_t x426 = INT8_MIN;
	volatile int64_t x427 = INT64_MAX;
	uint64_t x428 = 12970639LLU;
	uint64_t t89 = 267LLU;

	t89 = ((x425|(x426/x427))*x428);

	if (t89 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x429 = -1;
	int32_t x430 = 52518357;
	int8_t x431 = INT8_MAX;
	uint64_t t90 = 6379016437306574221LLU;

	t90 = ((x429|(x430/x431))*x432);

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x434 = 2690174;
	int32_t t91 = -10722;

	t91 = ((x433|(x434/x435))*x436);

	if (t91 != -189956096) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x437 = -1;
	static int32_t x438 = INT32_MIN;
	int64_t x439 = INT64_MIN;
	uint16_t x440 = 95U;
	int64_t t92 = 5812672LL;

	t92 = ((x437|(x438/x439))*x440);

	if (t92 != -95LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x450 = INT16_MIN;
	static int64_t x451 = -79614861306636137LL;
	static volatile int16_t x452 = INT16_MIN;
	volatile int64_t t93 = -1909561049LL;

	t93 = ((x449|(x450/x451))*x452);

	if (t93 != 32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x454 = 25276654U;
	int16_t x456 = -1;
	uint32_t t94 = 3141U;

	t94 = ((x453|(x454/x455))*x456);

	if (t94 != 32768U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x457 = -8;
	uint8_t x459 = 6U;
	int64_t x460 = -53LL;
	volatile int64_t t95 = 98553183067481595LL;

	t95 = ((x457|(x458/x459))*x460);

	if (t95 != 424LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = INT8_MAX;
	int64_t x462 = -66144647LL;
	static int64_t x463 = -5931926LL;
	uint64_t t96 = 32564208287745606LLU;

	t96 = ((x461|(x462/x463))*x464);

	if (t96 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x469 = 467771812;
	uint32_t x470 = UINT32_MAX;
	volatile uint32_t t97 = 8U;

	t97 = ((x469|(x470/x471))*x472);

	if (t97 != 2147483648U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x473 = -1;
	int16_t x474 = INT16_MAX;
	static volatile int16_t x475 = -1;

	t98 = ((x473|(x474/x475))*x476);

	if (t98 != -21) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	static int8_t x479 = 26;
	volatile uint64_t t99 = 286158723409006342LLU;

	t99 = ((x477|(x478/x479))*x480);

	if (t99 != 17170449117208366912LLU) { NG(); } else { ; }
	
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

