#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
static int8_t x9 = INT8_MIN;
static uint8_t x12 = 2U;
volatile int32_t t3 = -237484;
int32_t x19 = -2716;
volatile uint16_t x20 = 127U;
volatile uint32_t x31 = 1U;
int32_t x36 = 1846646;
volatile int32_t t8 = 2519;
static volatile int8_t x37 = -1;
static int16_t x45 = INT16_MAX;
int32_t x48 = INT32_MAX;
volatile int8_t x50 = INT8_MIN;
int16_t x57 = INT16_MAX;
int32_t x60 = 14736;
int16_t x61 = INT16_MIN;
static volatile uint32_t x65 = 23U;
static int32_t x71 = INT32_MIN;
volatile int32_t t18 = -9782287;
volatile int64_t x78 = INT64_MIN;
volatile int16_t x81 = INT16_MAX;
static int64_t x83 = -1LL;
int32_t x89 = INT32_MIN;
int64_t t22 = -2LL;
volatile int8_t x96 = -1;
int32_t x101 = INT32_MAX;
volatile int32_t x115 = INT32_MAX;
static int8_t x116 = INT8_MIN;
volatile uint32_t x121 = UINT32_MAX;
volatile int32_t t30 = 1329498;
volatile uint16_t x127 = 0U;
uint16_t x129 = 0U;
int64_t x130 = -108LL;
uint32_t x131 = UINT32_MAX;
volatile int64_t t32 = INT64_MIN;
uint8_t x137 = 23U;
uint16_t x143 = 5U;
uint64_t x144 = 258495216870915736LLU;
static uint64_t x151 = 64445096537LLU;
uint64_t t37 = 492092694611LLU;
static int32_t x155 = 375045264;
volatile uint64_t t39 = UINT64_MAX;
uint32_t x162 = 22770705U;
int8_t x164 = 1;
static int16_t x167 = INT16_MIN;
uint8_t x169 = 3U;
int8_t x176 = -1;
uint16_t x184 = 28911U;
int8_t x188 = -1;
static uint32_t x193 = UINT32_MAX;
volatile int64_t x201 = -56643LL;
int64_t x207 = -7526741574LL;
uint32_t x208 = 1213878417U;
static int8_t x209 = INT8_MAX;
uint16_t x210 = 1U;
uint32_t x213 = 2116U;
int16_t x216 = INT16_MIN;
int32_t x223 = -14;
volatile int64_t x224 = 56650LL;
int64_t x225 = INT64_MAX;
int16_t x226 = -75;
static int16_t x229 = 0;
uint32_t x231 = UINT32_MAX;
volatile uint8_t x234 = 127U;
uint8_t x235 = 15U;
int16_t x247 = -1;
int64_t x253 = INT64_MIN;
uint16_t x260 = UINT16_MAX;
int32_t x269 = INT32_MAX;
static int64_t x270 = -821412737584830LL;
uint64_t x272 = 272967237318713LLU;
volatile int64_t t68 = INT64_MIN;
int32_t x279 = -52167315;
int8_t x286 = INT8_MAX;
volatile int8_t x288 = INT8_MIN;
volatile int64_t t71 = -11LL;
uint32_t x298 = UINT32_MAX;
static int32_t x299 = -1;
volatile uint32_t t76 = 0U;
int8_t x314 = -1;
static int64_t x316 = 107368149250LL;
int16_t x317 = INT16_MIN;
static volatile int64_t x324 = 0LL;
volatile int32_t t81 = -33058743;
volatile int64_t t82 = 15144792LL;
uint32_t t84 = 1085345U;
volatile uint16_t x344 = 72U;
uint8_t x346 = 0U;
int64_t x371 = INT64_MAX;
int64_t t92 = -11642LL;
uint64_t x379 = 120909LLU;
int64_t x384 = -3LL;
volatile int64_t t95 = 255LL;
int16_t x387 = INT16_MAX;
volatile uint64_t t99 = UINT64_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	uint64_t x2 = 250270LLU;
	uint32_t x3 = UINT32_MAX;
	static volatile uint32_t t0 = 14982U;

	t0 = (((x1<x2)*x3)^x4);

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -84923616052295105LL;
	int64_t x6 = -9596LL;
	volatile int32_t x7 = 67466543;
	uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 384787861986814967LLU;

	t1 = (((x5<x6)*x7)^x8);

	if (t1 != 18446744073642085072LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 50999U;
	volatile int16_t x11 = 488;
	int32_t t2 = -6;

	t2 = (((x9<x10)*x11)^x12);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	static int8_t x14 = INT8_MAX;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = -1;

	t3 = (((x13<x14)*x15)^x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint8_t x18 = 64U;
	static volatile int32_t t4 = 259;

	t4 = (((x17<x18)*x19)^x20);

	if (t4 != -2789) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	uint32_t x22 = UINT32_MAX;
	uint32_t x23 = UINT32_MAX;
	uint8_t x24 = UINT8_MAX;
	uint32_t t5 = 24757954U;

	t5 = (((x21<x22)*x23)^x24);

	if (t5 != 255U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 1831U;
	uint32_t x26 = 212156U;
	uint64_t x27 = 5LLU;
	static uint8_t x28 = UINT8_MAX;
	volatile uint64_t t6 = 283262601LLU;

	t6 = (((x25<x26)*x27)^x28);

	if (t6 != 250LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int8_t x30 = -1;
	static int8_t x32 = INT8_MIN;
	volatile uint32_t t7 = 333416428U;

	t7 = (((x29<x30)*x31)^x32);

	if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint64_t x34 = 22946558180884628LLU;
	int16_t x35 = INT16_MAX;

	t8 = (((x33<x34)*x35)^x36);

	if (t8 != 1846646) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = 4078;
	volatile uint32_t x39 = 3U;
	uint8_t x40 = 28U;
	uint32_t t9 = 2U;

	t9 = (((x37<x38)*x39)^x40);

	if (t9 != 31U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -9;
	volatile int64_t x42 = INT64_MIN;
	uint64_t x43 = 13404063954993LLU;
	int8_t x44 = -1;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = (((x41<x42)*x43)^x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = 169U;
	volatile int32_t x47 = INT32_MAX;
	volatile int32_t t11 = INT32_MAX;

	t11 = (((x45<x46)*x47)^x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int64_t x51 = INT64_MIN;
	volatile uint16_t x52 = UINT16_MAX;
	int64_t t12 = 6091703351LL;

	t12 = (((x49<x50)*x51)^x52);

	if (t12 != 65535LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = -1;
	uint16_t x55 = 0U;
	static uint8_t x56 = 17U;
	int32_t t13 = 3589424;

	t13 = (((x53<x54)*x55)^x56);

	if (t13 != 17) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = UINT16_MAX;
	volatile int32_t t14 = -8264390;

	t14 = (((x57<x58)*x59)^x60);

	if (t14 != 50799) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x62 = 854;
	volatile int32_t x63 = INT32_MIN;
	volatile int8_t x64 = INT8_MIN;
	int32_t t15 = -2;

	t15 = (((x61<x62)*x63)^x64);

	if (t15 != 2147483520) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	static volatile int64_t x67 = INT64_MIN;
	static volatile int32_t x68 = 435003344;
	int64_t t16 = 378334458867LL;

	t16 = (((x65<x66)*x67)^x68);

	if (t16 != -9223372036419772464LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = 793197U;
	static int8_t x70 = INT8_MAX;
	static int32_t x72 = -7686;
	volatile int32_t t17 = -1;

	t17 = (((x69<x70)*x71)^x72);

	if (t17 != -7686) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MAX;
	int16_t x76 = INT16_MIN;

	t18 = (((x73<x74)*x75)^x76);

	if (t18 != -32641) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x79 = INT64_MIN;
	int32_t x80 = -1;
	int64_t t19 = 57LL;

	t19 = (((x77<x78)*x79)^x80);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = INT8_MIN;
	uint8_t x84 = UINT8_MAX;
	int64_t t20 = -1LL;

	t20 = (((x81<x82)*x83)^x84);

	if (t20 != 255LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = -8986;
	uint64_t x87 = 458381529102LLU;
	static int16_t x88 = INT16_MIN;
	volatile uint64_t t21 = 2LLU;

	t21 = (((x85<x86)*x87)^x88);

	if (t21 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 23U;
	int16_t x91 = INT16_MIN;
	static volatile int64_t x92 = -383824570757660LL;

	t22 = (((x89<x90)*x91)^x92);

	if (t22 != 383824570764772LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x93 = -25;
	int32_t x94 = -1;
	volatile uint16_t x95 = 2U;
	volatile int32_t t23 = 75335595;

	t23 = (((x93<x94)*x95)^x96);

	if (t23 != -3) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	int64_t x98 = INT64_MAX;
	uint16_t x99 = 562U;
	volatile int16_t x100 = 494;
	int32_t t24 = 369433;

	t24 = (((x97<x98)*x99)^x100);

	if (t24 != 988) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = INT8_MIN;
	static int32_t x103 = 3;
	int16_t x104 = INT16_MAX;
	volatile int32_t t25 = 44622557;

	t25 = (((x101<x102)*x103)^x104);

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -4LL;
	volatile int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MAX;
	static int64_t x108 = -1LL;
	int64_t t26 = -104975LL;

	t26 = (((x105<x106)*x107)^x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 198339453601454LLU;
	volatile int16_t x110 = -33;
	int8_t x111 = INT8_MIN;
	int8_t x112 = INT8_MIN;
	volatile int32_t t27 = 774;

	t27 = (((x109<x110)*x111)^x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 1U;
	int16_t x114 = -75;
	volatile int32_t t28 = -5799;

	t28 = (((x113<x114)*x115)^x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x118 = -46915020;
	int32_t x119 = 155518;
	static int64_t x120 = INT64_MIN;
	int64_t t29 = 543199LL;

	t29 = (((x117<x118)*x119)^x120);

	if (t29 != -9223372036854620290LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	int8_t x123 = INT8_MIN;
	int32_t x124 = 89849;

	t30 = (((x121<x122)*x123)^x124);

	if (t30 != -89735) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	static uint16_t x126 = UINT16_MAX;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t31 = 0;

	t31 = (((x125<x126)*x127)^x128);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x132 = INT64_MIN;

	t32 = (((x129<x130)*x131)^x132);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x133 = 3096;
	static uint32_t x134 = 31445U;
	volatile int8_t x135 = INT8_MIN;
	volatile int16_t x136 = INT16_MAX;
	int32_t t33 = 10924;

	t33 = (((x133<x134)*x135)^x136);

	if (t33 != -32641) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MAX;
	volatile uint16_t x139 = 11529U;
	uint8_t x140 = 6U;
	static volatile int32_t t34 = 1;

	t34 = (((x137<x138)*x139)^x140);

	if (t34 != 11535) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int32_t x142 = -1;
	uint64_t t35 = 118022439793929257LLU;

	t35 = (((x141<x142)*x143)^x144);

	if (t35 != 258495216870915736LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x146 = -1;
	int64_t x147 = 1673173912398457LL;
	int64_t x148 = 1LL;
	volatile int64_t t36 = 9871951500582810LL;

	t36 = (((x145<x146)*x147)^x148);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	volatile int16_t x150 = -1;
	volatile uint32_t x152 = UINT32_MAX;

	t37 = (((x149<x150)*x151)^x152);

	if (t37 != 4294967295LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -2042908953990821LL;
	static volatile int16_t x154 = -1;
	int64_t x156 = INT64_MAX;
	int64_t t38 = 68152252LL;

	t38 = (((x153<x154)*x155)^x156);

	if (t38 != 9223372036479730543LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int32_t x158 = INT32_MIN;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = UINT64_MAX;

	t39 = (((x157<x158)*x159)^x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 33986364169982LLU;
	static int16_t x163 = -3544;
	static volatile int32_t t40 = 23237332;

	t40 = (((x161<x162)*x163)^x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x166 = UINT32_MAX;
	int8_t x168 = -1;
	int32_t t41 = -699036;

	t41 = (((x165<x166)*x167)^x168);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x170 = INT64_MAX;
	int8_t x171 = INT8_MIN;
	static volatile int64_t x172 = -1LL;
	int64_t t42 = -110875LL;

	t42 = (((x169<x170)*x171)^x172);

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -114308434;
	uint16_t x174 = 5201U;
	static int64_t x175 = -1LL;
	static int64_t t43 = -15764471584715269LL;

	t43 = (((x173<x174)*x175)^x176);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -1;
	static int16_t x178 = INT16_MAX;
	int8_t x179 = 7;
	int16_t x180 = INT16_MIN;
	int32_t t44 = -65;

	t44 = (((x177<x178)*x179)^x180);

	if (t44 != -32761) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = 239;
	volatile int64_t x183 = -13660213229381LL;
	int64_t t45 = -7691LL;

	t45 = (((x181<x182)*x183)^x184);

	if (t45 != -13660213233580LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = 7;
	int64_t x186 = INT64_MAX;
	uint64_t x187 = 1326254331881858LLU;
	volatile uint64_t t46 = 21LLU;

	t46 = (((x185<x186)*x187)^x188);

	if (t46 != 18445417819377669757LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint8_t x190 = UINT8_MAX;
	volatile uint8_t x191 = 10U;
	static uint8_t x192 = 0U;
	int32_t t47 = 4;

	t47 = (((x189<x190)*x191)^x192);

	if (t47 != 10) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	volatile uint64_t x196 = 14454311559LLU;
	uint64_t t48 = 500513LLU;

	t48 = (((x193<x194)*x195)^x196);

	if (t48 != 14454311559LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = -5;
	uint32_t x199 = 178U;
	int8_t x200 = INT8_MIN;
	uint32_t t49 = 13995830U;

	t49 = (((x197<x198)*x199)^x200);

	if (t49 != 4294967168U) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x202 = -8978172159526LL;
	static int8_t x203 = 14;
	volatile int16_t x204 = INT16_MAX;
	volatile int32_t t50 = -17836157;

	t50 = (((x201<x202)*x203)^x204);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 0;
	int8_t x206 = INT8_MIN;
	volatile int64_t t51 = 794298324LL;

	t51 = (((x205<x206)*x207)^x208);

	if (t51 != 1213878417LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x211 = INT32_MIN;
	uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = (((x209<x210)*x211)^x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 4U;
	uint64_t x215 = 19573801078836LLU;
	volatile uint64_t t53 = 7085065410552LLU;

	t53 = (((x213<x214)*x215)^x216);

	if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	volatile uint16_t x218 = 20U;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	int32_t t54 = -4419356;

	t54 = (((x217<x218)*x219)^x220);

	if (t54 != 2147483520) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	static int32_t x222 = -1;
	int64_t t55 = -149966LL;

	t55 = (((x221<x222)*x223)^x224);

	if (t55 != 56650LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MAX;
	static int32_t t56 = 1157748;

	t56 = (((x225<x226)*x227)^x228);

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = INT32_MIN;
	int64_t x232 = -22251239516LL;
	int64_t t57 = 162830815LL;

	t57 = (((x229<x230)*x231)^x232);

	if (t57 != -22251239516LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = INT8_MAX;
	uint64_t x236 = 7955284LLU;
	volatile uint64_t t58 = 3LLU;

	t58 = (((x233<x234)*x235)^x236);

	if (t58 != 7955284LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MAX;
	static int64_t x238 = INT64_MIN;
	volatile uint16_t x239 = 40U;
	uint32_t x240 = UINT32_MAX;
	volatile uint32_t t59 = UINT32_MAX;

	t59 = (((x237<x238)*x239)^x240);

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int8_t x242 = -1;
	int64_t x243 = 72428254493303LL;
	static volatile int16_t x244 = INT16_MIN;
	int64_t t60 = -7105589LL;

	t60 = (((x241<x242)*x243)^x244);

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = INT64_MIN;
	static uint8_t x248 = 0U;
	volatile int32_t t61 = 97945992;

	t61 = (((x245<x246)*x247)^x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 13U;
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MIN;
	uint16_t x252 = UINT16_MAX;
	volatile int64_t t62 = -11676261619872474LL;

	t62 = (((x249<x250)*x251)^x252);

	if (t62 != 65535LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = 95U;
	uint64_t x255 = 201652648283561LLU;
	int16_t x256 = INT16_MIN;
	uint64_t t63 = 119039159LLU;

	t63 = (((x253<x254)*x255)^x256);

	if (t63 != 18446542421061242281LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 38U;
	uint16_t x258 = 30089U;
	uint32_t x259 = 2044684U;
	uint32_t t64 = 7103U;

	t64 = (((x257<x258)*x259)^x260);

	if (t64 != 2084083U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x261 = 56542U;
	int8_t x262 = 3;
	static uint16_t x263 = 5U;
	int8_t x264 = -1;
	volatile int32_t t65 = 2128;

	t65 = (((x261<x262)*x263)^x264);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -3;
	int8_t x266 = INT8_MAX;
	volatile int32_t x267 = INT32_MIN;
	volatile int8_t x268 = INT8_MIN;
	static volatile int32_t t66 = -60327;

	t66 = (((x265<x266)*x267)^x268);

	if (t66 != 2147483520) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x271 = UINT16_MAX;
	volatile uint64_t t67 = 12984LLU;

	t67 = (((x269<x270)*x271)^x272);

	if (t67 != 272967237318713LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = UINT8_MAX;
	int8_t x274 = -7;
	uint16_t x275 = 10U;
	int64_t x276 = INT64_MIN;

	t68 = (((x273<x274)*x275)^x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	static uint64_t x278 = 8LLU;
	uint32_t x280 = 422903U;
	volatile uint32_t t69 = 6117U;

	t69 = (((x277<x278)*x279)^x280);

	if (t69 != 422903U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 97500900U;
	uint16_t x283 = 14U;
	volatile uint64_t x284 = UINT64_MAX;
	static uint64_t t70 = UINT64_MAX;

	t70 = (((x281<x282)*x283)^x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	int64_t x287 = 1182942203LL;

	t71 = (((x285<x286)*x287)^x288);

	if (t71 != -1182942085LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = 1710727746600LLU;
	volatile int32_t x291 = -1;
	int32_t x292 = 73;
	volatile int32_t t72 = 165;

	t72 = (((x289<x290)*x291)^x292);

	if (t72 != 73) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint8_t x294 = 36U;
	int16_t x295 = INT16_MAX;
	int16_t x296 = INT16_MAX;
	int32_t t73 = 15;

	t73 = (((x293<x294)*x295)^x296);

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 53370LLU;
	uint32_t x300 = 18U;
	volatile uint32_t t74 = 1123U;

	t74 = (((x297<x298)*x299)^x300);

	if (t74 != 4294967277U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int64_t x302 = -1LL;
	int8_t x303 = 40;
	volatile uint32_t x304 = 23U;
	volatile uint32_t t75 = 456497U;

	t75 = (((x301<x302)*x303)^x304);

	if (t75 != 23U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 59U;
	volatile int8_t x306 = -1;
	int16_t x307 = -1;
	static uint32_t x308 = 32101532U;

	t76 = (((x305<x306)*x307)^x308);

	if (t76 != 32101532U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x309 = 1454544648U;
	static volatile int16_t x310 = -12082;
	int8_t x311 = INT8_MIN;
	static int32_t x312 = INT32_MIN;
	int32_t t77 = 20261351;

	t77 = (((x309<x310)*x311)^x312);

	if (t77 != 2147483520) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = UINT8_MAX;
	static int64_t x315 = INT64_MIN;
	int64_t t78 = 227357806996316LL;

	t78 = (((x313<x314)*x315)^x316);

	if (t78 != 107368149250LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -1LL;
	int16_t x319 = INT16_MAX;
	int8_t x320 = -1;
	int32_t t79 = 482084673;

	t79 = (((x317<x318)*x319)^x320);

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	volatile int16_t x322 = INT16_MAX;
	int16_t x323 = -322;
	int64_t t80 = 385768395302937658LL;

	t80 = (((x321<x322)*x323)^x324);

	if (t80 != -322LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 222U;
	static uint32_t x326 = 489574U;
	volatile int16_t x327 = INT16_MIN;
	uint16_t x328 = UINT16_MAX;

	t81 = (((x325<x326)*x327)^x328);

	if (t81 != -32769) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 10497;
	int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MIN;
	static int64_t x332 = 1794048476619401LL;

	t82 = (((x329<x330)*x331)^x332);

	if (t82 != 1794048476619401LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 7858945773795596LL;
	volatile int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MAX;
	int8_t x336 = INT8_MIN;
	volatile int32_t t83 = -2014;

	t83 = (((x333<x334)*x335)^x336);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MAX;
	uint32_t x338 = 357484U;
	uint32_t x339 = 7U;
	int8_t x340 = -1;

	t84 = (((x337<x338)*x339)^x340);

	if (t84 != 4294967288U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x341 = INT32_MIN;
	static uint32_t x342 = UINT32_MAX;
	static int16_t x343 = -1985;
	static int32_t t85 = -13;

	t85 = (((x341<x342)*x343)^x344);

	if (t85 != -1929) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 2801566949953880LLU;
	int16_t x347 = INT16_MAX;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t86 = INT32_MAX;

	t86 = (((x345<x346)*x347)^x348);

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = UINT8_MAX;
	uint32_t x350 = 515U;
	volatile int32_t x351 = INT32_MAX;
	int64_t x352 = -7553519436642LL;
	int64_t t87 = -479747949405LL;

	t87 = (((x349<x350)*x351)^x352);

	if (t87 != -7554028027039LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -7238545;
	int8_t x354 = -1;
	static int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 15123;

	t88 = (((x353<x354)*x355)^x356);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t89 = -4805826LL;

	t89 = (((x357<x358)*x359)^x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x361 = 84U;
	int32_t x362 = -1;
	uint16_t x363 = 57U;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -1;

	t90 = (((x361<x362)*x363)^x364);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	static uint8_t x366 = 112U;
	static int8_t x367 = INT8_MIN;
	uint16_t x368 = 1008U;
	static volatile int32_t t91 = -29081332;

	t91 = (((x365<x366)*x367)^x368);

	if (t91 != -912) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = INT32_MIN;
	int8_t x370 = -1;
	int8_t x372 = INT8_MAX;

	t92 = (((x369<x370)*x371)^x372);

	if (t92 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 0LL;
	uint8_t x374 = 13U;
	static int8_t x375 = -1;
	static uint8_t x376 = 48U;
	int32_t t93 = 1107;

	t93 = (((x373<x374)*x375)^x376);

	if (t93 != -49) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	uint8_t x378 = 0U;
	int16_t x380 = INT16_MIN;
	static uint64_t t94 = 1167995915462705LLU;

	t94 = (((x377<x378)*x379)^x380);

	if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MIN;

	t95 = (((x381<x382)*x383)^x384);

	if (t95 != 32765LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -613;
	int32_t x386 = INT32_MIN;
	int32_t x388 = -29185046;
	int32_t t96 = 222934505;

	t96 = (((x385<x386)*x387)^x388);

	if (t96 != -29185046) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 64LLU;
	uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 19U;
	static uint32_t t97 = 27U;

	t97 = (((x389<x390)*x391)^x392);

	if (t97 != 4294967276U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 2012006U;
	int8_t x394 = 20;
	uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 6214493LLU;
	uint64_t t98 = 2403654273261098319LLU;

	t98 = (((x393<x394)*x395)^x396);

	if (t98 != 6214493LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 621828121LLU;
	uint32_t x398 = 287437U;
	int32_t x399 = INT32_MIN;
	static volatile uint64_t x400 = UINT64_MAX;

	t99 = (((x397<x398)*x399)^x400);

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

