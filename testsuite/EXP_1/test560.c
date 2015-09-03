#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = INT32_MAX;
uint64_t x13 = 8908564LLU;
int8_t x17 = -1;
uint16_t x21 = 2610U;
uint16_t x31 = 1U;
volatile int32_t t7 = -5;
int8_t x35 = INT8_MIN;
static int32_t x46 = INT32_MIN;
uint64_t t11 = UINT64_MAX;
int16_t x49 = 66;
int8_t x56 = INT8_MIN;
static uint8_t x59 = UINT8_MAX;
int32_t x66 = INT32_MAX;
static volatile int8_t x68 = INT8_MIN;
volatile int32_t x72 = INT32_MIN;
volatile int32_t t16 = INT32_MIN;
uint64_t t17 = 3855615LLU;
int64_t x84 = INT64_MIN;
volatile int64_t t20 = 19LL;
int64_t x93 = INT64_MAX;
volatile int16_t x95 = INT16_MIN;
int16_t x97 = INT16_MAX;
int64_t x100 = INT64_MIN;
int64_t x101 = INT64_MIN;
int64_t x103 = INT64_MIN;
int64_t t23 = -902840891330962LL;
uint16_t x109 = 0U;
uint16_t x115 = 31U;
volatile int32_t x118 = -204576134;
int8_t x119 = -36;
static uint8_t x120 = 6U;
static volatile int8_t x123 = INT8_MIN;
uint8_t x131 = 28U;
volatile int16_t x132 = INT16_MIN;
uint16_t x140 = 281U;
int16_t x144 = -78;
int8_t x150 = -1;
int64_t x151 = -1LL;
int16_t x152 = -46;
volatile int64_t t34 = -290252942LL;
uint16_t x166 = UINT16_MAX;
uint16_t x172 = 27U;
int64_t x177 = -87167411666LL;
int8_t x180 = INT8_MAX;
static volatile int64_t t41 = -16148LL;
int8_t x184 = -4;
uint32_t x201 = UINT32_MAX;
int32_t x204 = -8136;
volatile uint64_t t46 = 7672LLU;
static uint32_t x211 = 255151246U;
volatile int64_t t55 = 13412028LL;
static int8_t x252 = INT8_MIN;
static uint64_t t57 = 20870797282720LLU;
int32_t x257 = INT32_MIN;
uint32_t x264 = UINT32_MAX;
int8_t x271 = -1;
uint32_t t62 = 1028U;
int32_t x277 = -1;
uint32_t x281 = 505546810U;
int32_t x286 = -1;
int16_t x289 = 2;
int32_t x291 = -1;
int8_t x295 = INT8_MAX;
uint16_t x315 = UINT16_MAX;
int32_t x316 = INT32_MAX;
volatile uint32_t t71 = 36804U;
volatile uint32_t x320 = 33U;
volatile uint64_t x325 = UINT64_MAX;
volatile int32_t x327 = -1;
volatile uint16_t x328 = UINT16_MAX;
uint16_t x337 = 0U;
int8_t x339 = -14;
int8_t x343 = 16;
static volatile uint16_t x345 = UINT16_MAX;
int64_t x346 = 24LL;
volatile uint8_t x347 = 1U;
int32_t x352 = INT32_MAX;
uint64_t t80 = 242LLU;
static volatile uint64_t t81 = 2LLU;
static volatile int32_t x358 = INT32_MIN;
int16_t x359 = -1;
int32_t x362 = 24051;
int64_t x363 = -1LL;
int64_t x366 = -1LL;
int64_t t85 = INT64_MIN;
static int32_t x374 = INT32_MIN;
volatile uint64_t x377 = UINT64_MAX;
int32_t x380 = INT32_MIN;
uint64_t x385 = 267867337441924624LLU;
static int64_t x397 = -108271711871754LL;
uint16_t x404 = 22U;
int64_t x405 = 470054766797769922LL;
int64_t t93 = 34717LL;
volatile int32_t x415 = INT32_MIN;
int16_t x423 = -1;
volatile int64_t x425 = INT64_MIN;
int16_t x426 = INT16_MIN;


void f0(void) {
	int32_t x1 = -48;
	uint8_t x2 = 59U;
	int16_t x3 = INT16_MIN;
	volatile int32_t x4 = INT32_MAX;

	t0 = (((x1/x2)%x3)+x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 0;
	uint8_t x6 = UINT8_MAX;
	static int8_t x7 = INT8_MIN;
	uint32_t x8 = 143933438U;
	uint32_t t1 = 252734U;

	t1 = (((x5/x6)%x7)+x8);

	if (t1 != 143933438U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile int64_t x10 = INT64_MAX;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = 493;
	static volatile int64_t t2 = -4LL;

	t2 = (((x9/x10)%x11)+x12);

	if (t2 != 493LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	uint8_t x16 = 101U;
	volatile uint64_t t3 = 3686623LLU;

	t3 = (((x13/x14)%x15)+x16);

	if (t3 != 101LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint64_t x19 = 396679LLU;
	uint32_t x20 = 9U;
	uint64_t t4 = 116446328297073LLU;

	t4 = (((x17/x18)%x19)+x20);

	if (t4 != 9LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = 1;
	int64_t x23 = -11054733540LL;
	static int16_t x24 = INT16_MIN;
	volatile int64_t t5 = 25677811547493LL;

	t5 = (((x21/x22)%x23)+x24);

	if (t5 != -30158LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 1;
	volatile int8_t x26 = INT8_MIN;
	volatile uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 756591LLU;
	volatile uint64_t t6 = 7615734700805617LLU;

	t6 = (((x25/x26)%x27)+x28);

	if (t6 != 756591LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	uint16_t x32 = 5720U;

	t7 = (((x29/x30)%x31)+x32);

	if (t7 != 5720) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 1;
	int32_t x34 = -85955;
	volatile int64_t x36 = -343374181LL;
	volatile int64_t t8 = -2LL;

	t8 = (((x33/x34)%x35)+x36);

	if (t8 != -343374181LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 40;
	volatile uint64_t x38 = UINT64_MAX;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 0U;
	volatile uint64_t t9 = 3662135935LLU;

	t9 = (((x37/x38)%x39)+x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 11607U;
	volatile int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MIN;
	volatile uint16_t x44 = UINT16_MAX;
	int64_t t10 = 0LL;

	t10 = (((x41/x42)%x43)+x44);

	if (t10 != 65535LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x45 = 0LLU;
	volatile uint16_t x47 = 6U;
	uint64_t x48 = UINT64_MAX;

	t11 = (((x45/x46)%x47)+x48);

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 15109101U;
	uint32_t x51 = 2026641332U;
	static uint16_t x52 = 327U;
	uint32_t t12 = 0U;

	t12 = (((x49/x50)%x51)+x52);

	if (t12 != 327U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	uint64_t x54 = 5609347255333058040LLU;
	uint32_t x55 = 2324U;
	volatile uint64_t t13 = 2299LLU;

	t13 = (((x53/x54)%x55)+x56);

	if (t13 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = -2393;

	t14 = (((x57/x58)%x59)+x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x65 = 24U;
	volatile int32_t x67 = INT32_MIN;
	int32_t t15 = -5152;

	t15 = (((x65/x66)%x67)+x68);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	static volatile int32_t x71 = INT32_MIN;

	t16 = (((x69/x70)%x71)+x72);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MAX;
	uint64_t x78 = 1LLU;
	static int64_t x79 = INT64_MIN;
	uint8_t x80 = 4U;

	t17 = (((x77/x78)%x79)+x80);

	if (t17 != 131LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = -1LL;
	volatile int8_t x82 = -1;
	volatile int8_t x83 = INT8_MIN;
	int64_t t18 = 79115364736119451LL;

	t18 = (((x81/x82)%x83)+x84);

	if (t18 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int8_t x86 = 3;
	uint32_t x87 = 521U;
	static int8_t x88 = -1;
	uint32_t t19 = 0U;

	t19 = (((x85/x86)%x87)+x88);

	if (t19 != 74U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MIN;
	int64_t x90 = INT64_MIN;
	int16_t x91 = -1;
	uint16_t x92 = UINT16_MAX;

	t20 = (((x89/x90)%x91)+x92);

	if (t20 != 65535LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = INT8_MIN;
	static uint64_t x96 = 341698LLU;
	volatile uint64_t t21 = 1287762174329239LLU;

	t21 = (((x93/x94)%x95)+x96);

	if (t21 != 308931LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x98 = UINT8_MAX;
	static int64_t x99 = INT64_MIN;
	int64_t t22 = 6151LL;

	t22 = (((x97/x98)%x99)+x100);

	if (t22 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x102 = UINT16_MAX;
	int16_t x104 = -1;

	t23 = (((x101/x102)%x103)+x104);

	if (t23 != -140739635871745LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	int32_t x106 = 196798;
	volatile uint8_t x107 = UINT8_MAX;
	volatile int16_t x108 = -56;
	static int32_t t24 = -3601;

	t24 = (((x105/x106)%x107)+x108);

	if (t24 != -56) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x110 = INT16_MIN;
	static uint16_t x111 = 5U;
	static int8_t x112 = -2;
	volatile int32_t t25 = -574637;

	t25 = (((x109/x110)%x111)+x112);

	if (t25 != -2) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 9;
	volatile uint32_t x114 = 8102U;
	static int32_t x116 = INT32_MIN;
	uint32_t t26 = 207U;

	t26 = (((x113/x114)%x115)+x116);

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = UINT32_MAX;
	uint32_t t27 = 6916U;

	t27 = (((x117/x118)%x119)+x120);

	if (t27 != 7U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	uint8_t x124 = UINT8_MAX;
	static volatile int32_t t28 = -5674497;

	t28 = (((x121/x122)%x123)+x124);

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 1;
	uint8_t x126 = 8U;
	static volatile int8_t x127 = 5;
	int16_t x128 = 16;
	volatile int32_t t29 = 28;

	t29 = (((x125/x126)%x127)+x128);

	if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	volatile uint16_t x130 = 1U;
	static int32_t t30 = 151840;

	t30 = (((x129/x130)%x131)+x132);

	if (t30 != -32765) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = -24310032LL;
	int16_t x134 = 25;
	int32_t x135 = -1;
	uint8_t x136 = 82U;
	volatile int64_t t31 = -21858892LL;

	t31 = (((x133/x134)%x135)+x136);

	if (t31 != 82LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x137 = 26071U;
	int32_t x138 = INT32_MIN;
	int32_t x139 = 129135;
	int32_t t32 = 124894662;

	t32 = (((x137/x138)%x139)+x140);

	if (t32 != 281) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = INT64_MIN;
	uint32_t x142 = UINT32_MAX;
	volatile uint16_t x143 = 443U;
	volatile int64_t t33 = 17566025728721LL;

	t33 = (((x141/x142)%x143)+x144);

	if (t33 != -470LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 1U;

	t34 = (((x149/x150)%x151)+x152);

	if (t34 != -46LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = 0U;
	uint64_t x154 = 210112223769580LLU;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	uint64_t t35 = 20613569LLU;

	t35 = (((x153/x154)%x155)+x156);

	if (t35 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x157 = 1U;
	volatile int8_t x158 = 49;
	int32_t x159 = INT32_MAX;
	volatile int32_t x160 = -254;
	volatile int32_t t36 = -9;

	t36 = (((x157/x158)%x159)+x160);

	if (t36 != -254) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MIN;
	static volatile int8_t x162 = INT8_MIN;
	static uint8_t x163 = 15U;
	static int64_t x164 = INT64_MIN;
	int64_t t37 = -3127LL;

	t37 = (((x161/x162)%x163)+x164);

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = 4086;
	int64_t x167 = INT64_MIN;
	volatile int8_t x168 = INT8_MIN;
	volatile int64_t t38 = 5299463506963LL;

	t38 = (((x165/x166)%x167)+x168);

	if (t38 != -128LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = INT8_MIN;
	uint16_t x171 = 8839U;
	volatile int64_t t39 = 2264834514359977114LL;

	t39 = (((x169/x170)%x171)+x172);

	if (t39 != 342LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -1;
	int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	volatile int32_t x176 = -1;
	int64_t t40 = 27186LL;

	t40 = (((x173/x174)%x175)+x176);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MAX;

	t41 = (((x177/x178)%x179)+x180);

	if (t41 != 6138LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MIN;
	uint8_t x182 = UINT8_MAX;
	uint64_t x183 = 428616LLU;
	volatile uint64_t t42 = 173248494276622428LLU;

	t42 = (((x181/x182)%x183)+x184);

	if (t42 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = 35;
	int8_t x191 = INT8_MIN;
	volatile int16_t x192 = INT16_MIN;
	int64_t t43 = 1070215970008702LL;

	t43 = (((x189/x190)%x191)+x192);

	if (t43 != -32808LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = 44U;
	volatile uint16_t x194 = 49U;
	int32_t x195 = -1;
	int32_t x196 = INT32_MIN;
	volatile int32_t t44 = INT32_MIN;

	t44 = (((x193/x194)%x195)+x196);

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	uint32_t t45 = 33152486U;

	t45 = (((x201/x202)%x203)+x204);

	if (t45 != 4294959161U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1;
	uint64_t x206 = 46689609372LLU;
	int64_t x207 = -897002787LL;
	uint8_t x208 = 97U;

	t46 = (((x205/x206)%x207)+x208);

	if (t46 != 395093230LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x209 = 22247685;
	uint32_t x210 = 38U;
	int16_t x212 = INT16_MIN;
	uint32_t t47 = 14517679U;

	t47 = (((x209/x210)%x211)+x212);

	if (t47 != 552697U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x213 = -1;
	volatile uint64_t x214 = 129572LLU;
	uint16_t x215 = 5U;
	uint16_t x216 = 4U;
	static uint64_t t48 = 46LLU;

	t48 = (((x213/x214)%x215)+x216);

	if (t48 != 5LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x217 = UINT16_MAX;
	int16_t x218 = 1;
	int8_t x219 = -1;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t49 = INT64_MAX;

	t49 = (((x217/x218)%x219)+x220);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x221 = 2154355987309LLU;
	int8_t x222 = 52;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = 926423631025LL;
	uint64_t t50 = 52030639140418686LLU;

	t50 = (((x221/x222)%x223)+x224);

	if (t50 != 926423637557LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = INT16_MIN;
	volatile int64_t x226 = 2442177LL;
	int16_t x227 = INT16_MIN;
	int16_t x228 = INT16_MAX;
	volatile int64_t t51 = -109993LL;

	t51 = (((x225/x226)%x227)+x228);

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x229 = UINT8_MAX;
	int16_t x230 = -249;
	volatile uint64_t x231 = 7359678412702436LLU;
	static int16_t x232 = -1;
	volatile uint64_t t52 = 4816433LLU;

	t52 = (((x229/x230)%x231)+x232);

	if (t52 != 3389971477246998LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = 117U;
	uint64_t x235 = 2356103564739551024LLU;
	uint8_t x236 = 0U;
	volatile uint64_t t53 = 1539100042LLU;

	t53 = (((x233/x234)%x235)+x236);

	if (t53 != 36708842LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = -40;
	volatile int16_t x238 = INT16_MIN;
	int16_t x239 = 2;
	volatile int64_t x240 = 14843674LL;
	static volatile int64_t t54 = 36919728919699LL;

	t54 = (((x237/x238)%x239)+x240);

	if (t54 != 14843674LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = -6602LL;
	static int32_t x243 = INT32_MIN;
	static uint32_t x244 = 11U;

	t55 = (((x241/x242)%x243)+x244);

	if (t55 != 11LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MAX;
	int32_t x247 = INT32_MAX;
	int64_t x248 = INT64_MIN;
	int64_t t56 = INT64_MIN;

	t56 = (((x245/x246)%x247)+x248);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = INT64_MIN;
	int16_t x250 = INT16_MIN;
	uint64_t x251 = UINT64_MAX;

	t57 = (((x249/x250)%x251)+x252);

	if (t57 != 281474976710528LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x253 = UINT16_MAX;
	uint64_t x254 = UINT64_MAX;
	static uint16_t x255 = UINT16_MAX;
	int64_t x256 = INT64_MIN;
	uint64_t t58 = 5525LLU;

	t58 = (((x253/x254)%x255)+x256);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x258 = INT16_MAX;
	uint8_t x259 = UINT8_MAX;
	uint16_t x260 = 26442U;
	int32_t t59 = -254228;

	t59 = (((x257/x258)%x259)+x260);

	if (t59 != 26439) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = INT32_MIN;
	volatile int8_t x262 = 2;
	int32_t x263 = INT32_MIN;
	static volatile uint32_t t60 = 1090898895U;

	t60 = (((x261/x262)%x263)+x264);

	if (t60 != 3221225471U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -1LL;
	static int16_t x266 = -685;
	int16_t x267 = -1623;
	int32_t x268 = INT32_MIN;
	static volatile int64_t t61 = 15LL;

	t61 = (((x265/x266)%x267)+x268);

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = -60467596;
	volatile uint32_t x270 = UINT32_MAX;
	int32_t x272 = 2;

	t62 = (((x269/x270)%x271)+x272);

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = 43673LL;
	uint32_t x274 = UINT32_MAX;
	static uint64_t x275 = UINT64_MAX;
	int32_t x276 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = (((x273/x274)%x275)+x276);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x278 = 607LLU;
	static uint32_t x279 = 13232U;
	static volatile int64_t x280 = INT64_MAX;
	volatile uint64_t t64 = 14595196541LLU;

	t64 = (((x277/x278)%x279)+x280);

	if (t64 != 9223372036854784086LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x282 = 20U;
	static int16_t x283 = INT16_MIN;
	uint16_t x284 = 17989U;
	volatile uint32_t t65 = 7411899U;

	t65 = (((x281/x282)%x283)+x284);

	if (t65 != 25295329U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = INT32_MAX;
	int8_t x287 = -1;
	int16_t x288 = INT16_MAX;
	static int32_t t66 = 4;

	t66 = (((x285/x286)%x287)+x288);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x290 = 5U;
	static int64_t x292 = INT64_MIN;
	int64_t t67 = INT64_MIN;

	t67 = (((x289/x290)%x291)+x292);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x293 = 23U;
	volatile int8_t x294 = 4;
	static int32_t x296 = -1;
	int32_t t68 = 89;

	t68 = (((x293/x294)%x295)+x296);

	if (t68 != 4) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x297 = 2;
	volatile int64_t x298 = -1LL;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = 54136944;
	uint64_t t69 = 492754136LLU;

	t69 = (((x297/x298)%x299)+x300);

	if (t69 != 54136942LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x309 = 1U;
	static int64_t x310 = 4LL;
	volatile uint16_t x311 = 7U;
	int32_t x312 = INT32_MAX;
	volatile int64_t t70 = 419LL;

	t70 = (((x309/x310)%x311)+x312);

	if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x313 = 47119371U;
	static volatile int8_t x314 = INT8_MAX;

	t71 = (((x313/x314)%x315)+x316);

	if (t71 != 2147526990U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x317 = UINT32_MAX;
	int8_t x318 = -38;
	int16_t x319 = INT16_MIN;
	uint32_t t72 = 3691U;

	t72 = (((x317/x318)%x319)+x320);

	if (t72 != 34U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x321 = INT16_MIN;
	int16_t x322 = -1;
	volatile int32_t x323 = -1;
	static int8_t x324 = -1;
	int32_t t73 = -134448;

	t73 = (((x321/x322)%x323)+x324);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x326 = 4;
	volatile uint64_t t74 = 0LLU;

	t74 = (((x325/x326)%x327)+x328);

	if (t74 != 4611686018427453438LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = -1;
	uint32_t x330 = 14197067U;
	int8_t x331 = INT8_MIN;
	static uint64_t x332 = UINT64_MAX;
	volatile uint64_t t75 = 197875294733LLU;

	t75 = (((x329/x330)%x331)+x332);

	if (t75 != 301LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = INT64_MIN;
	uint16_t x334 = UINT16_MAX;
	volatile uint32_t x335 = 1000763279U;
	int16_t x336 = INT16_MIN;
	volatile int64_t t76 = -22128712180774LL;

	t76 = (((x333/x334)%x335)+x336);

	if (t76 != -294452184LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x338 = UINT32_MAX;
	static volatile int64_t x340 = INT64_MAX;
	volatile int64_t t77 = INT64_MAX;

	t77 = (((x337/x338)%x339)+x340);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x341 = 51347401U;
	int64_t x342 = INT64_MIN;
	int64_t x344 = INT64_MIN;
	static volatile int64_t t78 = INT64_MIN;

	t78 = (((x341/x342)%x343)+x344);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x348 = UINT16_MAX;
	int64_t t79 = 71256043200079LL;

	t79 = (((x345/x346)%x347)+x348);

	if (t79 != 65535LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = 866141971148816LLU;
	static uint64_t x350 = 78238LLU;
	int64_t x351 = INT64_MIN;

	t80 = (((x349/x350)%x351)+x352);

	if (t80 != 13218088355LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x353 = UINT64_MAX;
	volatile int8_t x354 = INT8_MIN;
	uint8_t x355 = UINT8_MAX;
	static int32_t x356 = -1;

	t81 = (((x353/x354)%x355)+x356);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = -1;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t82 = -1444;

	t82 = (((x357/x358)%x359)+x360);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = -1;
	uint16_t x364 = 920U;
	int64_t t83 = 1843846LL;

	t83 = (((x361/x362)%x363)+x364);

	if (t83 != 920LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x365 = INT16_MIN;
	int8_t x367 = INT8_MAX;
	int16_t x368 = -1;
	static int64_t t84 = -1202201216LL;

	t84 = (((x365/x366)%x367)+x368);

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x369 = 18;
	int64_t x370 = INT64_MAX;
	volatile uint16_t x371 = 2U;
	int64_t x372 = INT64_MIN;

	t85 = (((x369/x370)%x371)+x372);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x373 = -1;
	static uint32_t x375 = UINT32_MAX;
	uint8_t x376 = UINT8_MAX;
	uint32_t t86 = 129601133U;

	t86 = (((x373/x374)%x375)+x376);

	if (t86 != 255U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x378 = INT16_MAX;
	static uint32_t x379 = 517942042U;
	volatile uint64_t t87 = 46204456447859759LLU;

	t87 = (((x377/x378)%x379)+x380);

	if (t87 != 18446744071952171708LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MAX;
	uint64_t x382 = UINT64_MAX;
	int64_t x383 = -5427LL;
	uint32_t x384 = UINT32_MAX;
	static uint64_t t88 = 23936242587LLU;

	t88 = (((x381/x382)%x383)+x384);

	if (t88 != 4294967295LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x386 = INT64_MAX;
	static volatile uint16_t x387 = 1U;
	int32_t x388 = -673563;
	volatile uint64_t t89 = 7LLU;

	t89 = (((x385/x386)%x387)+x388);

	if (t89 != 18446744073708878053LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 20U;
	int8_t x394 = -1;
	volatile int8_t x395 = INT8_MIN;
	uint64_t x396 = 2LLU;
	uint64_t t90 = 345LLU;

	t90 = (((x393/x394)%x395)+x396);

	if (t90 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x398 = INT32_MIN;
	static int8_t x399 = -9;
	volatile int32_t x400 = INT32_MAX;
	int64_t t91 = -16643412952279LL;

	t91 = (((x397/x398)%x399)+x400);

	if (t91 != 2147483655LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x401 = UINT8_MAX;
	uint32_t x402 = UINT32_MAX;
	volatile int64_t x403 = 7275496620106517LL;
	volatile int64_t t92 = 3097136182LL;

	t92 = (((x401/x402)%x403)+x404);

	if (t92 != 22LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x406 = 16061LL;
	int16_t x407 = -1;
	uint16_t x408 = 9091U;

	t93 = (((x405/x406)%x407)+x408);

	if (t93 != 9091LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 80U;
	static volatile int8_t x410 = -1;
	static int8_t x411 = INT8_MIN;
	static uint32_t x412 = 21U;
	uint32_t t94 = 0U;

	t94 = (((x409/x410)%x411)+x412);

	if (t94 != 4294967237U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x413 = 1U;
	int64_t x414 = 437754591061LL;
	int16_t x416 = INT16_MAX;
	volatile int64_t t95 = 51165263966LL;

	t95 = (((x413/x414)%x415)+x416);

	if (t95 != 32767LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x417 = INT16_MAX;
	int16_t x418 = INT16_MAX;
	static int8_t x419 = INT8_MIN;
	static int64_t x420 = INT64_MIN;
	static volatile int64_t t96 = -176LL;

	t96 = (((x417/x418)%x419)+x420);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	static int16_t x422 = -15391;
	volatile int32_t x424 = INT32_MIN;
	volatile int32_t t97 = INT32_MIN;

	t97 = (((x421/x422)%x423)+x424);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x427 = -1;
	static volatile int8_t x428 = INT8_MIN;
	static volatile int64_t t98 = 521188179LL;

	t98 = (((x425/x426)%x427)+x428);

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x429 = 1456214791990989LLU;
	int32_t x430 = INT32_MIN;
	volatile uint8_t x431 = 14U;
	static volatile int32_t x432 = INT32_MIN;
	volatile uint64_t t99 = 1577561542604LLU;

	t99 = (((x429/x430)%x431)+x432);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

