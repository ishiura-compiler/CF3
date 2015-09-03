#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 0U;
uint16_t x33 = UINT16_MAX;
uint16_t x42 = 79U;
static int8_t x44 = INT8_MIN;
int16_t x49 = -12904;
static int32_t x51 = 1;
volatile int32_t t12 = 1;
int8_t x57 = INT8_MIN;
volatile int64_t x58 = -11169035743226181LL;
volatile int64_t x64 = -1839188545LL;
uint8_t x65 = UINT8_MAX;
uint32_t x68 = UINT32_MAX;
uint8_t x69 = UINT8_MAX;
static volatile int8_t x75 = INT8_MIN;
volatile int32_t t19 = 623167344;
uint64_t x88 = UINT64_MAX;
volatile uint16_t x94 = 0U;
static int64_t t22 = 105304LL;
volatile int64_t x102 = INT64_MIN;
uint8_t x115 = 0U;
uint8_t x123 = 1U;
static uint64_t x126 = 107077992860LLU;
int16_t x134 = 232;
static int64_t x137 = 3179222LL;
static volatile uint32_t t33 = 3U;
static volatile int64_t t34 = -1049LL;
uint32_t x149 = 43269U;
uint16_t x151 = UINT16_MAX;
int16_t x159 = INT16_MAX;
uint16_t x161 = 0U;
volatile int64_t x162 = 194623099172119LL;
int8_t x164 = INT8_MIN;
uint16_t x165 = 6175U;
volatile int64_t t39 = 2373706212079099339LL;
int8_t x172 = -1;
int32_t t40 = 282932;
volatile int8_t x174 = INT8_MAX;
uint32_t x176 = 1082150687U;
uint16_t x184 = 13392U;
int32_t x186 = -1;
int64_t x189 = -4780LL;
static uint16_t x197 = 410U;
volatile int64_t t47 = -415631LL;
int64_t t48 = 1182845558349367133LL;
static int64_t x210 = -1LL;
uint16_t x222 = 69U;
static int8_t x229 = 0;
uint64_t t54 = 4364LLU;
int32_t x240 = INT32_MIN;
int64_t x242 = -5000622748LL;
static uint64_t x243 = 163879354254LLU;
uint8_t x252 = 49U;
volatile int8_t x258 = INT8_MAX;
volatile uint64_t t61 = 32862187458231921LLU;
uint64_t t63 = 704855830493832235LLU;
volatile int8_t x272 = -1;
int32_t t64 = -6;
int32_t x275 = INT32_MAX;
static int8_t x276 = -1;
static int32_t x277 = INT32_MIN;
int32_t x280 = -1;
static volatile int32_t t67 = 1;
uint32_t x289 = 73U;
int32_t x298 = -482;
int16_t x304 = -14;
static int32_t x305 = INT32_MAX;
int64_t x306 = 10LL;
int16_t x307 = INT16_MAX;
int32_t x310 = -1;
int32_t x311 = INT32_MAX;
int32_t x316 = -1;
uint64_t x320 = 2LLU;
volatile uint32_t x321 = 4405U;
volatile int32_t t78 = 16773142;
static int64_t x337 = 339169LL;
int8_t x345 = 9;
int32_t x346 = INT32_MIN;
volatile uint16_t x350 = 11441U;
static uint64_t t83 = 784LLU;
uint8_t x361 = 28U;
int32_t t86 = 1954220;
int64_t x367 = INT64_MIN;
int32_t t88 = -1;
int32_t x374 = INT32_MIN;
int16_t x389 = INT16_MAX;
int64_t x391 = 149130169848791LL;
int16_t x393 = -1;
int32_t x401 = 648136740;
int8_t x406 = -2;
int16_t x407 = INT16_MIN;
uint8_t x408 = 124U;
int32_t x412 = INT32_MIN;
int32_t t97 = -163083;
volatile uint32_t x423 = UINT32_MAX;
volatile uint32_t t99 = 103U;


void f0(void) {
	uint8_t x1 = 119U;
	uint8_t x2 = 3U;
	int32_t x3 = 272;
	int8_t x4 = -1;
	int32_t t0 = -1035;

	t0 = (((x1<x2)&x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -2;
	int64_t x6 = 131429643831LL;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 3;

	t1 = (((x5<x6)&x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -1;
	uint8_t x10 = 0U;
	static volatile int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	static int32_t t2 = -195;

	t2 = (((x9<x10)&x11)/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = 2085U;
	int32_t x16 = INT32_MAX;
	volatile int32_t t3 = 153;

	t3 = (((x13<x14)&x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = -3632624;
	int32_t x22 = 271109843;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -454;

	t4 = (((x21<x22)&x23)/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x26 = 57U;
	static volatile int32_t x27 = -1;
	static int32_t x28 = INT32_MAX;
	static volatile int32_t t5 = 7111102;

	t5 = (((x25<x26)&x27)/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x29 = 75973U;
	uint64_t x30 = 8743867068216849LLU;
	volatile int32_t x31 = INT32_MAX;
	int64_t x32 = -1LL;
	static int64_t t6 = -5416443371643231LL;

	t6 = (((x29<x30)&x31)/x32);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = INT32_MAX;
	uint64_t x35 = 7LLU;
	static int64_t x36 = INT64_MIN;
	volatile uint64_t t7 = 44202LLU;

	t7 = (((x33<x34)&x35)/x36);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 1234661;
	int32_t x38 = INT32_MIN;
	uint32_t x39 = 6U;
	int8_t x40 = INT8_MAX;
	volatile uint32_t t8 = 22995241U;

	t8 = (((x37<x38)&x39)/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 30500U;
	volatile int8_t x43 = INT8_MIN;
	static int32_t t9 = -5;

	t9 = (((x41<x42)&x43)/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 1;
	uint16_t x46 = 5U;
	static int16_t x47 = INT16_MIN;
	uint64_t x48 = UINT64_MAX;
	uint64_t t10 = 3749826801393301LLU;

	t10 = (((x45<x46)&x47)/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x50 = 5578LLU;
	static volatile int32_t x52 = INT32_MIN;
	static volatile int32_t t11 = 0;

	t11 = (((x49<x50)&x51)/x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 11U;
	volatile uint8_t x54 = 0U;
	volatile int16_t x55 = -1;
	static int32_t x56 = INT32_MIN;

	t12 = (((x53<x54)&x55)/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x59 = INT32_MAX;
	static int64_t x60 = INT64_MIN;
	int64_t t13 = -7719701152099LL;

	t13 = (((x57<x58)&x59)/x60);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x61 = INT8_MIN;
	int8_t x62 = 0;
	static int64_t x63 = 21445LL;
	volatile int64_t t14 = 415LL;

	t14 = (((x61<x62)&x63)/x64);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = INT64_MAX;
	uint64_t x67 = UINT64_MAX;
	uint64_t t15 = 70083628282270LLU;

	t15 = (((x65<x66)&x67)/x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x70 = UINT16_MAX;
	int64_t x71 = -1LL;
	static uint32_t x72 = 576733338U;
	static volatile int64_t t16 = 2LL;

	t16 = (((x69<x70)&x71)/x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 359681U;
	int32_t x74 = INT32_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = 55045;

	t17 = (((x73<x74)&x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = UINT8_MAX;
	volatile int32_t x78 = -5971;
	static int64_t x79 = INT64_MIN;
	volatile int32_t x80 = 149;
	static int64_t t18 = -27063095663LL;

	t18 = (((x77<x78)&x79)/x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MAX;
	int16_t x82 = 4;
	uint8_t x83 = UINT8_MAX;
	static int16_t x84 = INT16_MIN;

	t19 = (((x81<x82)&x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	uint16_t x86 = 6U;
	int64_t x87 = INT64_MIN;
	volatile uint64_t t20 = 58299096281468348LLU;

	t20 = (((x85<x86)&x87)/x88);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x89 = INT32_MAX;
	int16_t x90 = INT16_MAX;
	uint64_t x91 = UINT64_MAX;
	static int32_t x92 = INT32_MIN;
	static volatile uint64_t t21 = 6LLU;

	t21 = (((x89<x90)&x91)/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	volatile int8_t x95 = 6;
	int64_t x96 = INT64_MAX;

	t22 = (((x93<x94)&x95)/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MIN;
	uint64_t x98 = 257768LLU;
	int16_t x99 = -4;
	volatile int64_t x100 = INT64_MAX;
	int64_t t23 = 12894991059634LL;

	t23 = (((x97<x98)&x99)/x100);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = -49287234LL;
	volatile uint64_t x103 = 4102912220655084LLU;
	uint64_t x104 = UINT64_MAX;
	uint64_t t24 = 381733607726LLU;

	t24 = (((x101<x102)&x103)/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	int64_t x106 = -1LL;
	int8_t x107 = -1;
	uint32_t x108 = 118490U;
	static volatile uint32_t t25 = 76U;

	t25 = (((x105<x106)&x107)/x108);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = 219620462;
	uint16_t x110 = 33U;
	uint64_t x111 = 146413280663061LLU;
	volatile uint16_t x112 = UINT16_MAX;
	uint64_t t26 = 2708198739LLU;

	t26 = (((x109<x110)&x111)/x112);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x113 = UINT16_MAX;
	int32_t x114 = 2840589;
	int32_t x116 = 259098;
	int32_t t27 = 332;

	t27 = (((x113<x114)&x115)/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	static int16_t x119 = 256;
	static volatile uint16_t x120 = 159U;
	static volatile int32_t t28 = 954727813;

	t28 = (((x117<x118)&x119)/x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -1826926324LL;
	int8_t x122 = INT8_MAX;
	volatile int16_t x124 = 4072;
	volatile int32_t t29 = 4154430;

	t29 = (((x121<x122)&x123)/x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 11U;
	static uint16_t x127 = 244U;
	static int64_t x128 = INT64_MAX;
	volatile int64_t t30 = -504370625179089LL;

	t30 = (((x125<x126)&x127)/x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = -459330;
	int8_t x130 = 10;
	volatile int64_t x131 = INT64_MIN;
	int32_t x132 = -1;
	static int64_t t31 = -1646629967494LL;

	t31 = (((x129<x130)&x131)/x132);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x133 = UINT8_MAX;
	int8_t x135 = -49;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t32 = 111293895422LLU;

	t32 = (((x133<x134)&x135)/x136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x138 = UINT8_MAX;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = -1;

	t33 = (((x137<x138)&x139)/x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile uint8_t x142 = 1U;
	int64_t x143 = INT64_MIN;
	uint16_t x144 = UINT16_MAX;

	t34 = (((x141<x142)&x143)/x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	volatile int64_t x146 = INT64_MIN;
	int8_t x147 = -33;
	int32_t x148 = INT32_MAX;
	static volatile int32_t t35 = 190017885;

	t35 = (((x145<x146)&x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x150 = UINT64_MAX;
	static int64_t x152 = INT64_MAX;
	int64_t t36 = -97127280149283LL;

	t36 = (((x149<x150)&x151)/x152);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MIN;
	static int8_t x160 = INT8_MIN;
	int32_t t37 = -3326;

	t37 = (((x157<x158)&x159)/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x163 = 0LLU;
	volatile uint64_t t38 = 9049589LLU;

	t38 = (((x161<x162)&x163)/x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x166 = -1;
	int8_t x167 = -1;
	static int64_t x168 = -1LL;

	t39 = (((x165<x166)&x167)/x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	volatile int8_t x170 = 0;
	int8_t x171 = 7;

	t40 = (((x169<x170)&x171)/x172);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x173 = -1;
	volatile int32_t x175 = INT32_MIN;
	volatile uint32_t t41 = 3102U;

	t41 = (((x173<x174)&x175)/x176);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	static uint32_t x178 = 509629016U;
	uint16_t x179 = 6U;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t42 = 179833435LLU;

	t42 = (((x177<x178)&x179)/x180);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = INT64_MAX;
	int32_t x183 = INT32_MIN;
	static int32_t t43 = 32506359;

	t43 = (((x181<x182)&x183)/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MIN;
	volatile int64_t x187 = INT64_MIN;
	uint8_t x188 = UINT8_MAX;
	volatile int64_t t44 = -2015922506465382422LL;

	t44 = (((x185<x186)&x187)/x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x190 = -1;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = 28;
	static volatile int32_t t45 = 2;

	t45 = (((x189<x190)&x191)/x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x193 = 3150604U;
	uint16_t x194 = 1U;
	volatile int16_t x195 = -12;
	uint8_t x196 = 1U;
	int32_t t46 = 91;

	t46 = (((x193<x194)&x195)/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x198 = 14904006U;
	int16_t x199 = -1;
	int64_t x200 = 218LL;

	t47 = (((x197<x198)&x199)/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x202 = INT32_MAX;
	int64_t x203 = 1564825752424068LL;
	volatile int8_t x204 = INT8_MIN;

	t48 = (((x201<x202)&x203)/x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x209 = UINT64_MAX;
	volatile int8_t x211 = -3;
	int16_t x212 = -1139;
	int32_t t49 = -30955191;

	t49 = (((x209<x210)&x211)/x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x213 = 1U;
	uint64_t x214 = 1330689216878LLU;
	int16_t x215 = INT16_MAX;
	volatile int64_t x216 = -258350267589837LL;
	int64_t t50 = -166842326659241084LL;

	t50 = (((x213<x214)&x215)/x216);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x217 = INT64_MIN;
	int32_t x218 = 165873;
	volatile uint32_t x219 = 3U;
	volatile int16_t x220 = -1;
	uint32_t t51 = 346U;

	t51 = (((x217<x218)&x219)/x220);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x221 = INT64_MIN;
	uint64_t x223 = 1886608647371574LLU;
	int64_t x224 = INT64_MAX;
	volatile uint64_t t52 = 11LLU;

	t52 = (((x221<x222)&x223)/x224);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -1;
	int8_t x226 = 1;
	int16_t x227 = INT16_MIN;
	volatile int64_t x228 = INT64_MAX;
	volatile int64_t t53 = -10LL;

	t53 = (((x225<x226)&x227)/x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x230 = 17582215564LL;
	int16_t x231 = -5;
	volatile uint64_t x232 = 20880LLU;

	t54 = (((x229<x230)&x231)/x232);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = 110764711U;
	int8_t x234 = 3;
	static int16_t x235 = INT16_MIN;
	static int32_t x236 = INT32_MAX;
	static volatile int32_t t55 = -416877121;

	t55 = (((x233<x234)&x235)/x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -115;
	volatile int8_t x238 = -3;
	int64_t x239 = INT64_MIN;
	volatile int64_t t56 = 1959LL;

	t56 = (((x237<x238)&x239)/x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = 0LL;
	int32_t x244 = INT32_MAX;
	uint64_t t57 = 0LLU;

	t57 = (((x241<x242)&x243)/x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x245 = -1LL;
	static int8_t x246 = INT8_MAX;
	uint64_t x247 = 267484656913966LLU;
	static uint16_t x248 = 1U;
	static volatile uint64_t t58 = 4600LLU;

	t58 = (((x245<x246)&x247)/x248);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int32_t x250 = -1;
	uint32_t x251 = 0U;
	static uint32_t t59 = 885U;

	t59 = (((x249<x250)&x251)/x252);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = 276U;
	int64_t x254 = -28LL;
	uint64_t x255 = UINT64_MAX;
	int8_t x256 = -41;
	uint64_t t60 = 1929LLU;

	t60 = (((x253<x254)&x255)/x256);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MIN;
	int32_t x259 = INT32_MAX;
	uint64_t x260 = 58653105LLU;

	t61 = (((x257<x258)&x259)/x260);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x261 = UINT8_MAX;
	uint16_t x262 = 7002U;
	int16_t x263 = INT16_MIN;
	volatile uint16_t x264 = 314U;
	volatile int32_t t62 = -589040125;

	t62 = (((x261<x262)&x263)/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x265 = 7U;
	volatile int32_t x266 = 163336307;
	int64_t x267 = INT64_MAX;
	volatile uint64_t x268 = UINT64_MAX;

	t63 = (((x265<x266)&x267)/x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int16_t x271 = -8;

	t64 = (((x269<x270)&x271)/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x273 = UINT64_MAX;
	int16_t x274 = -1;
	static int32_t t65 = -426;

	t65 = (((x273<x274)&x275)/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x278 = -1LL;
	uint16_t x279 = 29963U;
	static int32_t t66 = 2423;

	t66 = (((x277<x278)&x279)/x280);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = -1LL;
	static volatile uint32_t x282 = 794713U;
	volatile int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;

	t67 = (((x281<x282)&x283)/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x285 = 5164U;
	int64_t x286 = -2690426LL;
	int32_t x287 = 1;
	int64_t x288 = -3953671038278LL;
	volatile int64_t t68 = -2073891492685LL;

	t68 = (((x285<x286)&x287)/x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x290 = UINT64_MAX;
	static uint8_t x291 = 10U;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t69 = 262294002;

	t69 = (((x289<x290)&x291)/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = -2563;
	static uint32_t x294 = 430636184U;
	int32_t x295 = INT32_MAX;
	volatile int32_t x296 = 1;
	int32_t t70 = 715499;

	t70 = (((x293<x294)&x295)/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x297 = INT64_MIN;
	int64_t x299 = -1129674623314627LL;
	uint32_t x300 = 65U;
	volatile int64_t t71 = -12055002405475396LL;

	t71 = (((x297<x298)&x299)/x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x301 = 42;
	int32_t x302 = INT32_MAX;
	static uint16_t x303 = 0U;
	volatile int32_t t72 = -31249;

	t72 = (((x301<x302)&x303)/x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x308 = -1;
	volatile int32_t t73 = 1;

	t73 = (((x305<x306)&x307)/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = INT32_MIN;
	volatile int64_t x312 = INT64_MAX;
	static int64_t t74 = -205270LL;

	t74 = (((x309<x310)&x311)/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x313 = UINT64_MAX;
	volatile int32_t x314 = INT32_MAX;
	uint64_t x315 = UINT64_MAX;
	static uint64_t t75 = 1361LLU;

	t75 = (((x313<x314)&x315)/x316);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x317 = 0U;
	int64_t x318 = -1LL;
	volatile uint64_t x319 = 0LLU;
	uint64_t t76 = 2558442460926322LLU;

	t76 = (((x317<x318)&x319)/x320);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x322 = INT16_MIN;
	static int64_t x323 = -1LL;
	static uint8_t x324 = 1U;
	int64_t t77 = -52822186963066LL;

	t77 = (((x321<x322)&x323)/x324);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = -1;
	int8_t x330 = INT8_MIN;
	int8_t x331 = -6;
	uint8_t x332 = UINT8_MAX;

	t78 = (((x329<x330)&x331)/x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = -1649450327791380LL;
	int16_t x334 = INT16_MAX;
	int32_t x335 = -29459;
	uint8_t x336 = 3U;
	int32_t t79 = 31257873;

	t79 = (((x333<x334)&x335)/x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x338 = 0;
	volatile int64_t x339 = -63LL;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t80 = 435141397329199004LLU;

	t80 = (((x337<x338)&x339)/x340);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MAX;
	uint32_t x342 = UINT32_MAX;
	int32_t x343 = -2;
	static uint16_t x344 = UINT16_MAX;
	static volatile int32_t t81 = 44;

	t81 = (((x341<x342)&x343)/x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x347 = INT64_MIN;
	static int16_t x348 = INT16_MIN;
	volatile int64_t t82 = -4127176133LL;

	t82 = (((x345<x346)&x347)/x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = INT8_MAX;
	uint64_t x351 = 1821358187097839LLU;
	volatile uint16_t x352 = 5U;

	t83 = (((x349<x350)&x351)/x352);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x353 = 12U;
	int16_t x354 = -1;
	int8_t x355 = INT8_MAX;
	static volatile int8_t x356 = -1;
	int32_t t84 = 1;

	t84 = (((x353<x354)&x355)/x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = 14701LLU;
	uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = INT64_MIN;
	int64_t x360 = 3604682LL;
	volatile int64_t t85 = 4517650164779LL;

	t85 = (((x357<x358)&x359)/x360);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x362 = INT8_MIN;
	uint16_t x363 = UINT16_MAX;
	volatile int16_t x364 = INT16_MAX;

	t86 = (((x361<x362)&x363)/x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = 1;
	int64_t x366 = INT64_MAX;
	uint8_t x368 = 94U;
	int64_t t87 = -1881791LL;

	t87 = (((x365<x366)&x367)/x368);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x369 = INT64_MAX;
	int32_t x370 = INT32_MIN;
	volatile int8_t x371 = -14;
	int32_t x372 = INT32_MIN;

	t88 = (((x369<x370)&x371)/x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x373 = -1;
	static int64_t x375 = 620251501562493752LL;
	static uint64_t x376 = UINT64_MAX;
	volatile uint64_t t89 = 465145LLU;

	t89 = (((x373<x374)&x375)/x376);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x377 = 7U;
	uint64_t x378 = UINT64_MAX;
	volatile uint64_t x379 = 41912LLU;
	int32_t x380 = INT32_MIN;
	uint64_t t90 = 2487700LLU;

	t90 = (((x377<x378)&x379)/x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x381 = 3558148755541882847LLU;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MIN;
	static volatile int32_t t91 = -118;

	t91 = (((x381<x382)&x383)/x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x385 = 474801371751LLU;
	uint16_t x386 = 0U;
	int32_t x387 = INT32_MIN;
	int8_t x388 = -1;
	static int32_t t92 = -2;

	t92 = (((x385<x386)&x387)/x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x390 = 2;
	volatile int8_t x392 = 1;
	int64_t t93 = -177906000161559322LL;

	t93 = (((x389<x390)&x391)/x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x394 = 2098168431200360552LLU;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = UINT64_MAX;
	static uint64_t t94 = 6799725990180302626LLU;

	t94 = (((x393<x394)&x395)/x396);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x402 = INT8_MAX;
	int8_t x403 = -53;
	uint64_t x404 = UINT64_MAX;
	uint64_t t95 = 5336LLU;

	t95 = (((x401<x402)&x403)/x404);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x405 = -1;
	volatile int32_t t96 = 0;

	t96 = (((x405<x406)&x407)/x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x409 = 955U;
	volatile int8_t x410 = -1;
	int16_t x411 = -1;

	t97 = (((x409<x410)&x411)/x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 0U;
	volatile uint16_t x414 = UINT16_MAX;
	int64_t x415 = INT64_MIN;
	volatile uint16_t x416 = UINT16_MAX;
	int64_t t98 = 58802LL;

	t98 = (((x413<x414)&x415)/x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = INT32_MAX;
	int8_t x422 = -53;
	uint32_t x424 = 6U;

	t99 = (((x421<x422)&x423)/x424);

	if (t99 != 0U) { NG(); } else { ; }
	
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

