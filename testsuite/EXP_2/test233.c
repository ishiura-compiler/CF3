#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = 2968847255878602430LL;
volatile int8_t x4 = INT8_MIN;
int64_t x6 = -28460092845LL;
int16_t x12 = INT16_MIN;
static int64_t x18 = 24653216371733024LL;
int64_t t4 = 1383787LL;
volatile int32_t t5 = -3231;
int8_t x30 = -11;
uint64_t t7 = UINT64_MAX;
int32_t x34 = -1;
uint16_t x35 = 117U;
int16_t x51 = INT16_MAX;
static volatile int64_t t14 = 163931256LL;
uint64_t x71 = 266660548LLU;
static uint64_t x75 = 3449324431627LLU;
uint64_t t16 = 445273672LLU;
volatile int32_t x82 = INT32_MIN;
uint64_t x89 = 917121372378LLU;
volatile int32_t x91 = INT32_MAX;
uint64_t x94 = 45754188513222449LLU;
volatile int8_t x97 = -1;
uint32_t x98 = UINT32_MAX;
volatile int32_t x100 = INT32_MIN;
uint8_t x104 = UINT8_MAX;
static volatile int64_t t21 = 8836LL;
volatile int8_t x106 = INT8_MAX;
volatile int8_t x113 = 8;
volatile uint64_t t24 = 12918043659LLU;
volatile int64_t x128 = INT64_MIN;
int32_t x139 = 486730357;
uint8_t x162 = 13U;
volatile uint16_t x163 = 185U;
int32_t t36 = -56299;
uint16_t x166 = UINT16_MAX;
volatile int32_t t37 = -7405799;
int64_t x172 = INT64_MAX;
uint16_t x175 = 730U;
uint32_t t40 = 17722527U;
int16_t x181 = 545;
volatile int32_t t41 = 0;
volatile int64_t x190 = -1LL;
uint64_t x194 = UINT64_MAX;
uint64_t t43 = 414697447114013070LLU;
int8_t x201 = 25;
uint8_t x210 = 2U;
int16_t x214 = -15068;
int16_t x215 = -1130;
volatile int64_t t49 = 7469537470LL;
int64_t x228 = INT64_MAX;
volatile int64_t x237 = -8445375515604491LL;
static uint64_t x241 = 3963597110830LLU;
static int32_t x245 = -1;
int64_t x250 = INT64_MIN;
int8_t x261 = 0;
static int16_t x263 = INT16_MAX;
uint64_t x266 = 1178LLU;
int16_t x268 = INT16_MIN;
volatile uint8_t x270 = UINT8_MAX;
int16_t x272 = 5800;
static int32_t x274 = INT32_MAX;
uint32_t x275 = UINT32_MAX;
uint64_t t59 = UINT64_MAX;
int16_t x279 = 146;
int64_t x280 = -1LL;
uint16_t x282 = 29883U;
volatile uint32_t x286 = 380855U;
static int16_t x288 = INT16_MAX;
uint32_t x292 = 83185U;
int32_t x294 = INT32_MAX;
int16_t x296 = INT16_MIN;
volatile uint64_t t64 = 34091863507LLU;
int64_t x298 = 961395529100LL;
static volatile int64_t x300 = -72365LL;
volatile int16_t x301 = -1;
volatile uint8_t x302 = 112U;
static int8_t x306 = INT8_MIN;
uint16_t x309 = 97U;
uint32_t x312 = UINT32_MAX;
int64_t t68 = 714139029LL;
int64_t x313 = 27LL;
static int8_t x315 = -2;
volatile int64_t t69 = -2010986090130LL;
int32_t x325 = 35169;
static int64_t t73 = 2580160935934926LL;
static int8_t x333 = INT8_MAX;
static uint32_t t74 = 119255644U;
static uint64_t x339 = UINT64_MAX;
int64_t x346 = INT64_MIN;
int64_t t77 = -14LL;
int16_t x350 = 4;
static uint64_t t78 = 2042889395613184929LLU;
static int16_t x357 = 7;
static volatile uint16_t x372 = 2U;
int16_t x374 = INT16_MIN;
int64_t x375 = 993412454292LL;
uint64_t x378 = UINT64_MAX;
volatile int64_t x382 = 922071LL;
static int64_t x384 = INT64_MIN;
volatile int64_t t84 = -21607967572363LL;
volatile uint64_t t85 = 57308955487LLU;
int32_t x392 = INT32_MIN;
volatile int32_t t86 = 1907;
uint8_t x397 = 44U;
static volatile uint32_t x402 = 2U;
int32_t x411 = -444223508;
int64_t t90 = -63345240469LL;
static int8_t x414 = INT8_MIN;
static int64_t x415 = -1LL;
int64_t t91 = 2613558533369937LL;
static uint16_t x418 = 3353U;
static int8_t x420 = INT8_MIN;
volatile int64_t x427 = -1LL;
uint64_t x428 = UINT64_MAX;
int8_t x443 = 1;
uint64_t x446 = 3148321LLU;
uint64_t t99 = 7LLU;


void f0(void) {
	uint32_t x1 = 333788U;
	static int8_t x2 = INT8_MIN;
	int64_t t0 = -581519985319168401LL;

	t0 = ((x1%(x2-x3))|x4);

	if (t0 != -36LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int16_t x7 = INT16_MIN;
	int64_t x8 = -1219727237990LL;
	int64_t t1 = 28477096052080815LL;

	t1 = ((x5%(x6-x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MAX;
	int8_t x10 = -1;
	int16_t x11 = -12;
	static volatile int64_t t2 = 726LL;

	t2 = ((x9%(x10-x11))|x12);

	if (t2 != -32761LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint32_t x13 = 64734425U;
	static int32_t x14 = INT32_MIN;
	int16_t x15 = -9945;
	uint64_t x16 = 22001398767LLU;
	static volatile uint64_t t3 = 8LLU;

	t3 = ((x13%(x14-x15))|x16);

	if (t3 != 22011443199LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	volatile uint32_t x19 = 11539U;
	uint8_t x20 = UINT8_MAX;

	t4 = ((x17%(x18-x19))|x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -1;
	static volatile int16_t x23 = INT16_MIN;
	volatile int32_t x24 = 8231805;

	t5 = ((x21%(x22-x23))|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint16_t x26 = 1190U;
	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = 1;
	int32_t t6 = 17297;

	t6 = ((x25%(x26-x27))|x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 145277LLU;
	int8_t x31 = -3;
	int8_t x32 = -5;

	t7 = ((x29%(x30-x31))|x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	uint16_t x36 = 1U;
	static volatile int32_t t8 = -919;

	t8 = ((x33%(x34-x35))|x36);

	if (t8 != -113) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = INT16_MIN;
	uint64_t x38 = 1121608LLU;
	volatile uint64_t x39 = UINT64_MAX;
	volatile int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = 45946611LLU;

	t9 = ((x37%(x38-x39))|x40);

	if (t9 != 18446744071562259771LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 20535917819LLU;
	uint64_t x42 = UINT64_MAX;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = 1899075526LL;
	volatile uint64_t t10 = 459042773346LLU;

	t10 = ((x41%(x42-x43))|x44);

	if (t10 != 21361180671LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 652673961U;
	uint64_t x46 = 34683879647860000LLU;
	volatile uint8_t x47 = UINT8_MAX;
	volatile uint8_t x48 = 0U;
	volatile uint64_t t11 = 7415993284333953LLU;

	t11 = ((x45%(x46-x47))|x48);

	if (t11 != 652673961LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 26U;
	uint64_t x50 = 361559920249LLU;
	static int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = 13180602967542114LLU;

	t12 = ((x49%(x50-x51))|x52);

	if (t12 != 18446744073709518874LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MAX;
	int64_t x58 = 1076LL;
	volatile int8_t x59 = -1;
	static volatile uint16_t x60 = 7339U;
	int64_t t13 = -1852731768565078714LL;

	t13 = ((x57%(x58-x59))|x60);

	if (t13 != 7423LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	uint16_t x62 = 811U;
	uint8_t x63 = UINT8_MAX;
	uint32_t x64 = 10876443U;

	t14 = ((x61%(x62-x63))|x64);

	if (t14 != -65LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = -1;
	volatile uint8_t x70 = 17U;
	int8_t x72 = 13;
	volatile uint64_t t15 = 11903773LLU;

	t15 = ((x69%(x70-x71))|x72);

	if (t15 != 266660543LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MIN;
	uint64_t x74 = 35441200694855696LLU;
	uint16_t x76 = 225U;

	t16 = ((x73%(x74-x75))|x76);

	if (t16 != 9556680544517869LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x81 = 13457002766349426LL;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = 77486U;
	int64_t t17 = -1728079979LL;

	t17 = ((x81%(x82-x83))|x84);

	if (t17 != 1826832126LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x90 = -1;
	int64_t x92 = -1LL;
	uint64_t t18 = UINT64_MAX;

	t18 = ((x89%(x90-x91))|x92);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x93 = 414U;
	int16_t x95 = -1;
	static uint64_t x96 = 3351021537662599137LLU;
	uint64_t t19 = 303388418309942LLU;

	t19 = ((x93%(x94-x95))|x96);

	if (t19 != 3351021537662599167LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x99 = INT32_MIN;
	volatile uint32_t t20 = 1772139U;

	t20 = ((x97%(x98-x99))|x100);

	if (t20 != 2147483649U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x101 = 15814991;
	int64_t x102 = INT64_MAX;
	int16_t x103 = 20;

	t21 = ((x101%(x102-x103))|x104);

	if (t21 != 15815167LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	uint64_t x107 = 920117381929LLU;
	int16_t x108 = 3;
	volatile uint64_t t22 = 1966919690784248LLU;

	t22 = ((x105%(x106-x107))|x108);

	if (t22 != 920117349035LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x109 = INT64_MAX;
	int8_t x110 = -4;
	volatile int16_t x111 = -1;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = ((x109%(x110-x111))|x112);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x114 = 93509697009645160LLU;
	static int16_t x115 = INT16_MAX;
	static int64_t x116 = -39904538258898LL;

	t24 = ((x113%(x114-x115))|x116);

	if (t24 != 18446704169171292718LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x117 = 80572489407525LLU;
	int16_t x118 = INT16_MAX;
	static volatile int8_t x119 = INT8_MIN;
	int64_t x120 = INT64_MAX;
	uint64_t t25 = 201390702LLU;

	t25 = ((x117%(x118-x119))|x120);

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -117820918LL;
	uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 2117098425LLU;
	volatile uint8_t x124 = 2U;
	uint64_t t26 = 1971LLU;

	t26 = ((x121%(x122-x123))|x124);

	if (t26 != 1999211974LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MAX;
	uint32_t x126 = 111U;
	static volatile int16_t x127 = INT16_MAX;
	volatile int64_t t27 = -52667284569295940LL;

	t27 = ((x125%(x126-x127))|x128);

	if (t27 != -9223372036321568641LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int64_t x130 = -1LL;
	volatile uint16_t x131 = UINT16_MAX;
	uint64_t x132 = 150297874626791595LLU;
	volatile uint64_t t28 = 62784LLU;

	t28 = ((x129%(x130-x131))|x132);

	if (t28 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x133 = 0;
	uint16_t x134 = 82U;
	volatile int16_t x135 = -1;
	static int8_t x136 = 0;
	volatile int32_t t29 = 5114006;

	t29 = ((x133%(x134-x135))|x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = 1;
	uint16_t x138 = UINT16_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t30 = 28869LL;

	t30 = ((x137%(x138-x139))|x140);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = 4294LLU;
	int16_t x142 = INT16_MAX;
	static int8_t x143 = -11;
	volatile int64_t x144 = INT64_MIN;
	volatile uint64_t t31 = 614LLU;

	t31 = ((x141%(x142-x143))|x144);

	if (t31 != 9223372036854780102LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	volatile int16_t x146 = 6893;
	volatile uint16_t x147 = UINT16_MAX;
	int32_t x148 = -93;
	volatile int32_t t32 = -22220128;

	t32 = ((x145%(x146-x147))|x148);

	if (t32 != -93) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x149 = UINT8_MAX;
	static int16_t x150 = INT16_MIN;
	volatile int32_t x151 = INT32_MIN;
	int32_t x152 = 457;
	volatile int32_t t33 = 90;

	t33 = ((x149%(x150-x151))|x152);

	if (t33 != 511) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x153 = INT8_MIN;
	uint8_t x154 = 0U;
	static uint16_t x155 = UINT16_MAX;
	static uint16_t x156 = 2U;
	volatile int32_t t34 = -15206310;

	t34 = ((x153%(x154-x155))|x156);

	if (t34 != -126) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 4U;
	volatile int32_t x158 = INT32_MAX;
	uint64_t x159 = UINT64_MAX;
	static uint16_t x160 = 4129U;
	static volatile uint64_t t35 = 507364816894LLU;

	t35 = ((x157%(x158-x159))|x160);

	if (t35 != 4133LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	int16_t x164 = 12730;

	t36 = ((x161%(x162-x163))|x164);

	if (t36 != -70) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	int8_t x167 = INT8_MIN;
	static int8_t x168 = 3;

	t37 = ((x165%(x166-x167))|x168);

	if (t37 != 40895) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = UINT8_MAX;
	volatile uint32_t x170 = 8U;
	int16_t x171 = INT16_MIN;
	int64_t t38 = INT64_MAX;

	t38 = ((x169%(x170-x171))|x172);

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x173 = UINT32_MAX;
	uint32_t x174 = UINT32_MAX;
	static int8_t x176 = INT8_MIN;
	uint32_t t39 = 382622850U;

	t39 = ((x173%(x174-x175))|x176);

	if (t39 != 4294967258U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	static int32_t x179 = INT32_MAX;
	static uint16_t x180 = 7626U;

	t40 = ((x177%(x178-x179))|x180);

	if (t40 != 7626U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = INT8_MIN;
	static int32_t x183 = -1159748;
	int32_t x184 = -10;

	t41 = ((x181%(x182-x183))|x184);

	if (t41 != -9) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	static int16_t x191 = INT16_MIN;
	static volatile int32_t x192 = -1;
	static volatile int64_t t42 = 1590LL;

	t42 = ((x189%(x190-x191))|x192);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = -1LL;
	volatile int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;

	t43 = ((x193%(x194-x195))|x196);

	if (t43 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 13LLU;
	volatile uint8_t x198 = 55U;
	static int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	uint64_t t44 = UINT64_MAX;

	t44 = ((x197%(x198-x199))|x200);

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x202 = 3707;
	static int64_t x203 = -39LL;
	int8_t x204 = INT8_MAX;
	int64_t t45 = -1183LL;

	t45 = ((x201%(x202-x203))|x204);

	if (t45 != 127LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x205 = INT16_MIN;
	int16_t x206 = -42;
	uint32_t x207 = 450U;
	static int64_t x208 = INT64_MAX;
	static volatile int64_t t46 = INT64_MAX;

	t46 = ((x205%(x206-x207))|x208);

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	static int64_t x211 = INT64_MAX;
	volatile int16_t x212 = 1;
	static volatile int64_t t47 = 278548390098448636LL;

	t47 = ((x209%(x210-x211))|x212);

	if (t47 != 2147483647LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = INT16_MAX;
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t48 = 434509;

	t48 = ((x213%(x214-x215))|x216);

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = 14U;
	int16_t x219 = INT16_MIN;
	int64_t x220 = INT64_MIN;

	t49 = ((x217%(x218-x219))|x220);

	if (t49 != -12290LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x225 = -115062LL;
	uint64_t x226 = 2530698825013904624LLU;
	int16_t x227 = INT16_MIN;
	volatile uint64_t t50 = 681585602081354LLU;

	t50 = ((x225%(x226-x227))|x228);

	if (t50 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x229 = -5558063;
	static int16_t x230 = 1;
	static int8_t x231 = INT8_MIN;
	static volatile uint32_t x232 = 22834081U;
	uint32_t t51 = 188369050U;

	t51 = ((x229%(x230-x231))|x232);

	if (t51 != 4294967231U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x238 = 29050U;
	int32_t x239 = INT32_MAX;
	uint8_t x240 = 7U;
	static int64_t t52 = -1596311089511009878LL;

	t52 = ((x237%(x238-x239))|x240);

	if (t52 != -502623417LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x242 = INT16_MIN;
	static int64_t x243 = -316551LL;
	int64_t x244 = INT64_MIN;
	volatile uint64_t t53 = 143522303LLU;

	t53 = ((x241%(x242-x243))|x244);

	if (t53 != 9223372036855009421LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x246 = 1056936991167747375LLU;
	uint16_t x247 = UINT16_MAX;
	uint32_t x248 = 2U;
	uint64_t t54 = 7821068LLU;

	t54 = ((x245%(x246-x247))|x248);

	if (t54 != 478815223858960335LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 227319344202LLU;
	static int8_t x251 = INT8_MIN;
	volatile int16_t x252 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x249%(x250-x251))|x252);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x262 = INT64_MAX;
	int32_t x264 = INT32_MIN;
	volatile int64_t t56 = 26039632146958LL;

	t56 = ((x261%(x262-x263))|x264);

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x265 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	uint64_t t57 = 200596650840225LLU;

	t57 = ((x265%(x266-x267))|x268);

	if (t57 != 18446744073709550437LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x269 = INT32_MIN;
	int64_t x271 = 3309072600722991LL;
	volatile int64_t t58 = -30926503897507LL;

	t58 = ((x269%(x270-x271))|x272);

	if (t58 != -2147477848LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = -3723643LL;
	volatile uint64_t x276 = UINT64_MAX;

	t59 = ((x273%(x274-x275))|x276);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x277 = 64;
	static uint16_t x278 = 35U;
	static int64_t t60 = 177176919820LL;

	t60 = ((x277%(x278-x279))|x280);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	int64_t x283 = INT64_MAX;
	uint8_t x284 = 4U;
	int64_t t61 = 642LL;

	t61 = ((x281%(x282-x283))|x284);

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x285 = UINT8_MAX;
	static volatile uint64_t x287 = 319682207LLU;
	volatile uint64_t t62 = 1LLU;

	t62 = ((x285%(x286-x287))|x288);

	if (t62 != 32767LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = -1;
	int16_t x291 = -434;
	int64_t t63 = -181LL;

	t63 = ((x289%(x290-x291))|x292);

	if (t63 != 83187LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MIN;
	uint64_t x295 = 752577660492274230LLU;

	t64 = ((x293%(x294-x295))|x296);

	if (t64 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x299 = 2;
	volatile int64_t t65 = -6265190017997869LL;

	t65 = ((x297%(x298-x299))|x300);

	if (t65 != -65537LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x303 = -183824873885LL;
	int32_t x304 = -1;
	int64_t t66 = -104LL;

	t66 = ((x301%(x302-x303))|x304);

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x305 = INT16_MAX;
	static uint16_t x307 = 250U;
	volatile uint64_t x308 = 91904436419LLU;
	volatile uint64_t t67 = 18LLU;

	t67 = ((x305%(x306-x307))|x308);

	if (t67 != 91904436675LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x310 = 5;
	int64_t x311 = 18167351721LL;

	t68 = ((x309%(x310-x311))|x312);

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x314 = -456518;
	static int64_t x316 = INT64_MIN;

	t69 = ((x313%(x314-x315))|x316);

	if (t69 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = -1LL;
	static int16_t x319 = INT16_MAX;
	static volatile int16_t x320 = -23;
	int64_t t70 = 174070340LL;

	t70 = ((x317%(x318-x319))|x320);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x321 = UINT8_MAX;
	static int64_t x322 = INT64_MAX;
	uint32_t x323 = 42U;
	int32_t x324 = -1;
	volatile int64_t t71 = -113LL;

	t71 = ((x321%(x322-x323))|x324);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x326 = 343;
	static int32_t x327 = -1;
	uint64_t x328 = 1227800LLU;
	volatile uint64_t t72 = 69LLU;

	t72 = ((x325%(x326-x327))|x328);

	if (t72 != 1227865LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MAX;
	int32_t x330 = -1;
	uint16_t x331 = 100U;
	static int16_t x332 = INT16_MIN;

	t73 = ((x329%(x330-x331))|x332);

	if (t73 != -32679LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x334 = INT32_MAX;
	uint32_t x335 = UINT32_MAX;
	static int32_t x336 = -11966255;

	t74 = ((x333%(x334-x335))|x336);

	if (t74 != 4283001087U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x337 = 0U;
	int8_t x338 = INT8_MAX;
	uint16_t x340 = 173U;
	uint64_t t75 = 3658766151208327LLU;

	t75 = ((x337%(x338-x339))|x340);

	if (t75 != 173LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x341 = INT32_MIN;
	volatile int64_t x342 = -2LL;
	int32_t x343 = -63;
	uint16_t x344 = 5U;
	int64_t t76 = -23549401704LL;

	t76 = ((x341%(x342-x343))|x344);

	if (t76 != -59LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = -11236;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 644U;

	t77 = ((x345%(x346-x347))|x348);

	if (t77 != -10596LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = INT32_MAX;
	uint16_t x351 = 14584U;
	uint64_t x352 = 226668902LLU;

	t78 = ((x349%(x350-x351))|x352);

	if (t78 != 226670447LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x358 = INT64_MAX;
	uint8_t x359 = 8U;
	int16_t x360 = -1;
	int64_t t79 = -4LL;

	t79 = ((x357%(x358-x359))|x360);

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = 116218U;
	int16_t x362 = INT16_MAX;
	static int16_t x363 = INT16_MIN;
	static uint16_t x364 = 182U;
	volatile uint32_t t80 = 26617426U;

	t80 = ((x361%(x362-x363))|x364);

	if (t80 != 50687U) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x369 = -1LL;
	static int32_t x370 = INT32_MAX;
	int8_t x371 = 4;
	volatile int64_t t81 = 837LL;

	t81 = ((x369%(x370-x371))|x372);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = INT32_MIN;
	volatile int16_t x376 = -1;
	volatile int64_t t82 = -10116LL;

	t82 = ((x373%(x374-x375))|x376);

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x377 = 2576865LLU;
	int32_t x379 = INT32_MIN;
	int32_t x380 = -1;
	uint64_t t83 = UINT64_MAX;

	t83 = ((x377%(x378-x379))|x380);

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x383 = UINT16_MAX;

	t84 = ((x381%(x382-x383))|x384);

	if (t84 != -9223372036854185305LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MAX;
	static int16_t x386 = -3905;
	static volatile uint64_t x387 = 384872052133LLU;
	int64_t x388 = INT64_MAX;

	t85 = ((x385%(x386-x387))|x388);

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = 2;
	static int32_t x390 = INT32_MAX;
	volatile uint16_t x391 = 2U;

	t86 = ((x389%(x390-x391))|x392);

	if (t86 != -2147483646) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x393 = -1;
	static uint8_t x394 = 3U;
	volatile uint8_t x395 = UINT8_MAX;
	volatile int32_t x396 = 47677;
	static volatile int32_t t87 = 966581867;

	t87 = ((x393%(x394-x395))|x396);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x398 = 237U;
	uint8_t x399 = 1U;
	static uint32_t x400 = 44567U;
	static uint32_t t88 = 1U;

	t88 = ((x397%(x398-x399))|x400);

	if (t88 != 44607U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x401 = 5LL;
	static volatile int8_t x403 = INT8_MAX;
	int32_t x404 = INT32_MIN;
	int64_t t89 = -21682711LL;

	t89 = ((x401%(x402-x403))|x404);

	if (t89 != -2147483643LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = -1LL;
	uint8_t x410 = 36U;
	int32_t x412 = -1;

	t90 = ((x409%(x410-x411))|x412);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = INT64_MIN;
	int64_t x416 = INT64_MIN;

	t91 = ((x413%(x414-x415))|x416);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = -1202177817351032LL;
	int16_t x419 = INT16_MIN;
	int64_t t92 = -1254LL;

	t92 = ((x417%(x418-x419))|x420);

	if (t92 != -55LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	int32_t x424 = INT32_MIN;
	static int64_t t93 = 11876038779000844LL;

	t93 = ((x421%(x422-x423))|x424);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x425 = INT64_MAX;
	int8_t x426 = -3;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = ((x425%(x426-x427))|x428);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x433 = 6U;
	static volatile uint64_t x434 = UINT64_MAX;
	uint32_t x435 = 8545835U;
	int64_t x436 = INT64_MAX;
	uint64_t t95 = 651847430736LLU;

	t95 = ((x433%(x434-x435))|x436);

	if (t95 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = 7U;
	uint32_t x440 = UINT32_MAX;
	uint64_t t96 = 6LLU;

	t96 = ((x437%(x438-x439))|x440);

	if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = INT16_MIN;
	static int16_t x442 = -1728;
	int8_t x444 = -1;
	static volatile int32_t t97 = -1213;

	t97 = ((x441%(x442-x443))|x444);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x445 = -1LL;
	int64_t x447 = INT64_MIN;
	volatile int64_t x448 = INT64_MIN;
	volatile uint64_t t98 = 1399358159723128LLU;

	t98 = ((x445%(x446-x447))|x448);

	if (t98 != 18446744073706403294LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = INT16_MIN;
	static uint64_t x450 = UINT64_MAX;
	static uint16_t x451 = UINT16_MAX;
	int8_t x452 = -26;

	t99 = ((x449%(x450-x451))|x452);

	if (t99 != 18446744073709551590LLU) { NG(); } else { ; }
	
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

