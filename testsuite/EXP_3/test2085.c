#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = -39678;
int64_t x11 = -29LL;
int64_t x15 = INT64_MAX;
volatile int64_t x20 = INT64_MIN;
int64_t x21 = INT64_MIN;
int64_t t4 = -325409456460063521LL;
uint8_t x29 = UINT8_MAX;
volatile uint64_t x32 = 33815100224916440LLU;
int32_t x40 = INT32_MAX;
volatile int64_t t8 = -23LL;
uint8_t x43 = UINT8_MAX;
int8_t x48 = INT8_MIN;
int32_t x50 = 447385;
volatile int32_t x54 = INT32_MIN;
int16_t x57 = INT16_MIN;
int8_t x62 = INT8_MIN;
int16_t x71 = -1;
int32_t t16 = 167296;
int8_t x78 = INT8_MAX;
static volatile int64_t x84 = -430622855235146LL;
volatile int64_t t19 = -255LL;
int8_t x106 = INT8_MAX;
int64_t t25 = -4592964LL;
int64_t t27 = 215LL;
int32_t x122 = -1;
static volatile int16_t x124 = INT16_MIN;
uint64_t x127 = UINT64_MAX;
int16_t x131 = -7747;
int64_t x132 = INT64_MIN;
volatile int32_t t32 = -86808;
int8_t x144 = 2;
static int32_t x147 = 154;
volatile int16_t x148 = INT16_MIN;
static int32_t x152 = -1;
uint8_t x155 = UINT8_MAX;
volatile int64_t t36 = -85549100LL;
static uint64_t x161 = UINT64_MAX;
uint16_t x164 = 1238U;
volatile int16_t x165 = INT16_MAX;
static int32_t x170 = INT32_MAX;
int8_t x172 = INT8_MIN;
int8_t x177 = INT8_MIN;
volatile uint32_t t43 = 6526887U;
int64_t x192 = INT64_MAX;
int64_t x197 = -1LL;
uint32_t t47 = 4U;
int32_t x208 = -223190;
uint16_t x224 = 27U;
static int32_t t52 = 712;
static int8_t x229 = 0;
volatile int64_t t53 = -195LL;
volatile int64_t x233 = INT64_MIN;
static uint8_t x236 = 2U;
volatile int64_t x240 = -1LL;
uint64_t x241 = 286LLU;
int32_t x243 = 666949120;
int8_t x246 = -1;
uint8_t x247 = 78U;
int32_t x252 = -52858892;
volatile uint64_t x253 = UINT64_MAX;
int32_t x255 = -1;
static volatile int32_t x256 = INT32_MIN;
static int32_t x257 = 0;
volatile int8_t x264 = 46;
int64_t x265 = INT64_MIN;
static int8_t x266 = -5;
uint64_t x268 = 1012009LLU;
uint64_t x275 = 20LLU;
int64_t x277 = INT64_MIN;
int64_t x278 = -1LL;
int8_t x281 = INT8_MIN;
int64_t x291 = 203398LL;
int32_t x292 = 14987;
volatile int64_t x297 = INT64_MIN;
int32_t x303 = -65658473;
volatile int32_t t71 = 83;
static int16_t x306 = INT16_MIN;
int16_t x307 = 358;
volatile int32_t t73 = -7;
int8_t x322 = INT8_MAX;
uint8_t x323 = UINT8_MAX;
static int16_t x339 = INT16_MIN;
uint64_t t79 = 248606411441293LLU;
int32_t x346 = INT32_MIN;
uint16_t x355 = 7U;
static int64_t t84 = -1592183831160508870LL;
int16_t x362 = -3;
int32_t x365 = 11;
uint16_t x378 = 12986U;
volatile uint8_t x385 = 20U;
int8_t x387 = 4;
uint32_t x388 = 16441U;
static volatile int8_t x395 = INT8_MIN;
int32_t x397 = -1;
volatile int32_t t94 = 259;
int8_t x415 = INT8_MIN;
uint64_t t96 = 35LLU;
static int8_t x420 = INT8_MAX;
int32_t t97 = -946124599;
int64_t x421 = INT64_MIN;
uint16_t x426 = 1U;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x6 = INT32_MAX;
	uint16_t x7 = 167U;
	static int64_t x8 = -1LL;
	uint64_t t0 = 268121LLU;

	t0 = ((x5%x6)%(x7^x8));

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x9 = INT64_MIN;
	int8_t x12 = INT8_MAX;
	volatile int64_t t1 = -113LL;

	t1 = ((x9%x10)%(x11^x12));

	if (t1 != -42LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 88U;
	static uint16_t x14 = 252U;
	static uint32_t x16 = UINT32_MAX;
	volatile int64_t t2 = 41424858064193894LL;

	t2 = ((x13%x14)%(x15^x16));

	if (t2 != 88LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MIN;
	int32_t x19 = -2356426;
	static int64_t t3 = 34031833336860LL;

	t3 = ((x17%x18)%(x19^x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int8_t x24 = -1;

	t4 = ((x21%x22)%(x23^x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MAX;
	int32_t x26 = INT32_MAX;
	int64_t x27 = 3627478833LL;
	int8_t x28 = INT8_MIN;
	volatile int64_t t5 = 233309810690437470LL;

	t5 = ((x25%x26)%(x27^x28));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = 130;
	static int16_t x31 = INT16_MAX;
	uint64_t t6 = 530171340121024210LLU;

	t6 = ((x29%x30)%(x31^x32));

	if (t6 != 125LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 11880LL;
	volatile int8_t x34 = 62;
	volatile int16_t x35 = INT16_MIN;
	static uint8_t x36 = 2U;
	volatile int64_t t7 = 676069LL;

	t7 = ((x33%x34)%(x35^x36));

	if (t7 != 38LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = -59;
	int64_t x38 = INT64_MIN;
	int64_t x39 = -1LL;

	t8 = ((x37%x38)%(x39^x40));

	if (t8 != -59LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x41 = UINT64_MAX;
	static uint32_t x42 = 667339901U;
	int32_t x44 = INT32_MAX;
	volatile uint64_t t9 = 2LLU;

	t9 = ((x41%x42)%(x43^x44));

	if (t9 != 549569124LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = -1;
	uint32_t x47 = 1549909U;
	uint32_t t10 = 443965791U;

	t10 = ((x45%x46)%(x47^x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	volatile uint32_t x51 = UINT32_MAX;
	uint16_t x52 = 2389U;
	volatile int64_t t11 = 17067165170395LL;

	t11 = ((x49%x50)%(x51^x52));

	if (t11 != -413008LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x53 = 7LLU;
	int32_t x55 = -1;
	int32_t x56 = INT32_MAX;
	volatile uint64_t t12 = 105349020419317748LLU;

	t12 = ((x53%x54)%(x55^x56));

	if (t12 != 7LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x58 = -1LL;
	uint16_t x59 = 504U;
	int32_t x60 = INT32_MIN;
	int64_t t13 = 87982341059813LL;

	t13 = ((x57%x58)%(x59^x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 0LL;
	static int32_t x63 = 13005708;
	int16_t x64 = 32;
	int64_t t14 = -1066397604131LL;

	t14 = ((x61%x62)%(x63^x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MAX;
	volatile int16_t x68 = -650;
	volatile uint32_t t15 = 1452630854U;

	t15 = ((x65%x66)%(x67^x68));

	if (t15 != 2147483648U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x70 = 7980250;
	static int32_t x72 = INT32_MAX;

	t16 = ((x69%x70)%(x71^x72));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int16_t x79 = INT16_MAX;
	uint8_t x80 = 1U;
	volatile int64_t t17 = 76804LL;

	t17 = ((x77%x78)%(x79^x80));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = 26U;
	int32_t x83 = INT32_MIN;
	volatile int64_t t18 = 1816913LL;

	t18 = ((x81%x82)%(x83^x84));

	if (t18 != -24LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = INT64_MIN;
	int32_t x86 = -811;
	uint8_t x87 = 36U;
	static int8_t x88 = 3;

	t19 = ((x85%x86)%(x87^x88));

	if (t19 != -28LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x90 = 11;
	uint64_t x91 = 9790896LLU;
	static int64_t x92 = INT64_MIN;
	static uint64_t t20 = 17987545146549LLU;

	t20 = ((x89%x90)%(x91^x92));

	if (t20 != 9223372036844984905LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 0U;
	volatile int16_t x94 = -4;
	int8_t x95 = INT8_MIN;
	static uint16_t x96 = 278U;
	volatile int32_t t21 = -10;

	t21 = ((x93%x94)%(x95^x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = 29U;
	static int16_t x98 = 6;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = 191926LL;
	int64_t t22 = 215LL;

	t22 = ((x97%x98)%(x99^x100));

	if (t22 != 5LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x101 = 873278963803813LLU;
	int16_t x102 = -1;
	uint8_t x103 = UINT8_MAX;
	static int64_t x104 = INT64_MIN;
	static uint64_t t23 = 7798238705280LLU;

	t23 = ((x101%x102)%(x103^x104));

	if (t23 != 873278963803813LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 0U;
	uint8_t x107 = 1U;
	uint16_t x108 = UINT16_MAX;
	volatile uint32_t t24 = 2U;

	t24 = ((x105%x106)%(x107^x108));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = INT32_MIN;
	int32_t x110 = -1;
	int64_t x111 = INT64_MAX;
	int32_t x112 = -1;

	t25 = ((x109%x110)%(x111^x112));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x113 = INT16_MIN;
	static uint32_t x114 = 29075U;
	static uint16_t x115 = 55U;
	volatile int64_t x116 = -6270287584LL;
	static volatile int64_t t26 = -1655407LL;

	t26 = ((x113%x114)%(x115^x116));

	if (t26 != 4603LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	uint32_t x118 = UINT32_MAX;
	static int64_t x119 = INT64_MIN;
	int8_t x120 = 1;

	t27 = ((x117%x118)%(x119^x120));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = 104248445U;
	uint64_t x123 = 103891304LLU;
	uint64_t t28 = 33315056355937831LLU;

	t28 = ((x121%x122)%(x123^x124));

	if (t28 != 104248445LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x125 = -1;
	uint32_t x126 = 448473879U;
	int32_t x128 = 4396701;
	volatile uint64_t t29 = 554009899657LLU;

	t29 = ((x125%x126)%(x127^x128));

	if (t29 != 258702384LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	uint64_t x130 = UINT64_MAX;
	uint64_t t30 = 954LLU;

	t30 = ((x129%x130)%(x131^x132));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = -1LL;
	volatile int64_t x134 = -1378543197642754LL;
	int16_t x135 = INT16_MAX;
	volatile int8_t x136 = INT8_MIN;
	int64_t t31 = -30LL;

	t31 = ((x133%x134)%(x135^x136));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MAX;
	static uint16_t x138 = 10U;
	uint16_t x139 = UINT16_MAX;
	static uint16_t x140 = 12U;

	t32 = ((x137%x138)%(x139^x140));

	if (t32 != 7) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	int8_t x142 = INT8_MAX;
	volatile int32_t x143 = INT32_MAX;
	static volatile int64_t t33 = -22893574157LL;

	t33 = ((x141%x142)%(x143^x144));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = INT16_MIN;
	uint64_t x146 = 262079276046LLU;
	uint64_t t34 = 852157028022838582LLU;

	t34 = ((x145%x146)%(x147^x148));

	if (t34 != 176264085236LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -2489;
	int8_t x150 = -1;
	uint8_t x151 = 20U;
	static int32_t t35 = -14537613;

	t35 = ((x149%x150)%(x151^x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MIN;
	volatile uint8_t x154 = UINT8_MAX;
	int64_t x156 = INT64_MAX;

	t36 = ((x153%x154)%(x155^x156));

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x162 = 22051LLU;
	uint64_t x163 = UINT64_MAX;
	uint64_t t37 = 25LLU;

	t37 = ((x161%x162)%(x163^x164));

	if (t37 != 3296LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x166 = -1;
	static volatile int16_t x167 = 0;
	int32_t x168 = -1;
	int32_t t38 = 7788929;

	t38 = ((x165%x166)%(x167^x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	int64_t x171 = 16041542LL;
	volatile int64_t t39 = -987801670LL;

	t39 = ((x169%x170)%(x171^x172));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x173 = -1;
	int8_t x174 = INT8_MAX;
	uint8_t x175 = 53U;
	int8_t x176 = -1;
	static volatile int32_t t40 = -129612;

	t40 = ((x173%x174)%(x175^x176));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x178 = -1;
	int64_t x179 = 1495LL;
	volatile int8_t x180 = INT8_MAX;
	static volatile int64_t t41 = 22100LL;

	t41 = ((x177%x178)%(x179^x180));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -1LL;
	int32_t x182 = INT32_MIN;
	uint8_t x183 = 3U;
	int16_t x184 = 191;
	volatile int64_t t42 = 8961244911LL;

	t42 = ((x181%x182)%(x183^x184));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x185 = UINT32_MAX;
	volatile uint16_t x186 = 3568U;
	int32_t x187 = INT32_MAX;
	int8_t x188 = INT8_MAX;

	t43 = ((x185%x186)%(x187^x188));

	if (t43 != 1567U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MIN;
	int8_t x190 = -1;
	int32_t x191 = -1;
	volatile int64_t t44 = 500382526926LL;

	t44 = ((x189%x190)%(x191^x192));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x193 = -1;
	static int64_t x194 = 95720484988815902LL;
	int32_t x195 = 122265287;
	int8_t x196 = INT8_MIN;
	int64_t t45 = -18766262LL;

	t45 = ((x193%x194)%(x195^x196));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x198 = 594;
	int64_t x199 = INT64_MIN;
	uint16_t x200 = 421U;
	int64_t t46 = -274509846702966LL;

	t46 = ((x197%x198)%(x199^x200));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 104594761U;
	uint8_t x202 = 28U;
	uint8_t x203 = UINT8_MAX;
	uint16_t x204 = 1U;

	t47 = ((x201%x202)%(x203^x204));

	if (t47 != 5U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x205 = INT64_MIN;
	int64_t x206 = -1LL;
	static int64_t x207 = 238066776637404628LL;
	int64_t t48 = -168560323952LL;

	t48 = ((x205%x206)%(x207^x208));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	int8_t x214 = -1;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	volatile int64_t t49 = -406LL;

	t49 = ((x213%x214)%(x215^x216));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	static int8_t x218 = -27;
	volatile int32_t x219 = INT32_MIN;
	int32_t x220 = 2313;
	static int32_t t50 = -45506709;

	t50 = ((x217%x218)%(x219^x220));

	if (t50 != -17) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MIN;
	static int32_t x222 = -1;
	int32_t x223 = INT32_MIN;
	volatile int32_t t51 = -289847;

	t51 = ((x221%x222)%(x223^x224));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = -1;
	int8_t x226 = INT8_MAX;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = 0U;

	t52 = ((x225%x226)%(x227^x228));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x230 = INT64_MIN;
	static int64_t x231 = INT64_MIN;
	volatile int64_t x232 = 1151336LL;

	t53 = ((x229%x230)%(x231^x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x234 = INT64_MIN;
	int8_t x235 = INT8_MIN;
	volatile int64_t t54 = -49968LL;

	t54 = ((x233%x234)%(x235^x236));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x237 = 284865679LLU;
	int32_t x238 = 1;
	volatile uint64_t x239 = 389824824LLU;
	static uint64_t t55 = 164LLU;

	t55 = ((x237%x238)%(x239^x240));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x242 = 119U;
	uint32_t x244 = 3676458U;
	uint64_t t56 = 2LLU;

	t56 = ((x241%x242)%(x243^x244));

	if (t56 != 48LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MIN;
	int64_t x248 = 1964547LL;
	static int64_t t57 = 3LL;

	t57 = ((x245%x246)%(x247^x248));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = -1;
	uint64_t x250 = 740534455773LLU;
	uint8_t x251 = 1U;
	static volatile uint64_t t58 = 4869948172LLU;

	t58 = ((x249%x250)%(x251^x252));

	if (t58 != 418491434922LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x254 = INT16_MIN;
	volatile uint64_t t59 = 967246695LLU;

	t59 = ((x253%x254)%(x255^x256));

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x258 = 54533;
	uint8_t x259 = 31U;
	int16_t x260 = 6074;
	int32_t t60 = 84392432;

	t60 = ((x257%x258)%(x259^x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x261 = INT32_MIN;
	uint8_t x262 = 92U;
	static int16_t x263 = INT16_MIN;
	static volatile int32_t t61 = 0;

	t61 = ((x261%x262)%(x263^x264));

	if (t61 != -52) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x267 = INT64_MIN;
	uint64_t t62 = 34LLU;

	t62 = ((x265%x266)%(x267^x268));

	if (t62 != 9223372036853763796LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = INT16_MAX;
	static int64_t x271 = -87419LL;
	int8_t x272 = INT8_MIN;
	static volatile int64_t t63 = 1041313LL;

	t63 = ((x269%x270)%(x271^x272));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = 11400987;
	volatile int64_t x274 = INT64_MIN;
	static uint16_t x276 = 15U;
	uint64_t t64 = 34086LLU;

	t64 = ((x273%x274)%(x275^x276));

	if (t64 != 21LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x279 = INT16_MIN;
	static uint16_t x280 = 83U;
	int64_t t65 = -759805408237450LL;

	t65 = ((x277%x278)%(x279^x280));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x282 = INT16_MIN;
	static int64_t x283 = 6016857LL;
	static int32_t x284 = -144640;
	int64_t t66 = 20671099LL;

	t66 = ((x281%x282)%(x283^x284));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x285 = -1;
	volatile int8_t x286 = -1;
	int64_t x287 = INT64_MIN;
	int16_t x288 = INT16_MIN;
	volatile int64_t t67 = -10LL;

	t67 = ((x285%x286)%(x287^x288));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	volatile int64_t t68 = 633877LL;

	t68 = ((x289%x290)%(x291^x292));

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x293 = 0;
	uint32_t x294 = 1175527U;
	int64_t x295 = -1LL;
	static volatile int32_t x296 = INT32_MAX;
	int64_t t69 = 56LL;

	t69 = ((x293%x294)%(x295^x296));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x298 = 88LL;
	int16_t x299 = 15701;
	int32_t x300 = -4902175;
	volatile int64_t t70 = 808527266784LL;

	t70 = ((x297%x298)%(x299^x300));

	if (t70 != -8LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = -1;
	static int32_t x302 = -48448;
	static int16_t x304 = INT16_MAX;

	t71 = ((x301%x302)%(x303^x304));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x305 = INT16_MIN;
	uint32_t x308 = 74U;
	uint32_t t72 = 77U;

	t72 = ((x305%x306)%(x307^x308));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x313 = INT8_MIN;
	uint8_t x314 = 6U;
	volatile int8_t x315 = -62;
	int16_t x316 = INT16_MIN;

	t73 = ((x313%x314)%(x315^x316));

	if (t73 != -2) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x317 = -3490;
	volatile uint32_t x318 = 76043U;
	int64_t x319 = 483809300LL;
	int8_t x320 = INT8_MIN;
	static int64_t t74 = 4164LL;

	t74 = ((x317%x318)%(x319^x320));

	if (t74 != 55166LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x321 = 5U;
	int64_t x324 = -1LL;
	int64_t t75 = -1427494492577LL;

	t75 = ((x321%x322)%(x323^x324));

	if (t75 != 5LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 1100987557023LLU;
	int16_t x326 = -6;
	volatile uint8_t x327 = UINT8_MAX;
	int64_t x328 = -137521219143234775LL;
	static volatile uint64_t t76 = 978308005360LLU;

	t76 = ((x325%x326)%(x327^x328));

	if (t76 != 1100987557023LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x329 = UINT32_MAX;
	volatile int64_t x330 = INT64_MAX;
	int16_t x331 = -1;
	int64_t x332 = 200LL;
	volatile int64_t t77 = -917LL;

	t77 = ((x329%x330)%(x331^x332));

	if (t77 != 99LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int8_t x334 = INT8_MIN;
	uint32_t x335 = 6U;
	uint64_t x336 = UINT64_MAX;
	uint64_t t78 = 15142693062314265LLU;

	t78 = ((x333%x334)%(x335^x336));

	if (t78 != 127LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x338 = 5;
	volatile uint32_t x340 = 658734210U;

	t79 = ((x337%x338)%(x339^x340));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x342 = -1;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = 21U;
	volatile uint64_t t80 = 193929267076LLU;

	t80 = ((x341%x342)%(x343^x344));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x345 = INT16_MAX;
	uint16_t x347 = UINT16_MAX;
	static volatile uint8_t x348 = 2U;
	int32_t t81 = 27472636;

	t81 = ((x345%x346)%(x347^x348));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x349 = -5163380LL;
	int32_t x350 = -1;
	int16_t x351 = -1;
	int64_t x352 = INT64_MAX;
	int64_t t82 = 553759580379992LL;

	t82 = ((x349%x350)%(x351^x352));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = INT16_MAX;
	static volatile int16_t x354 = -9;
	static volatile uint16_t x356 = UINT16_MAX;
	int32_t t83 = -748970;

	t83 = ((x353%x354)%(x355^x356));

	if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	static volatile int32_t x359 = 2850274;
	int64_t x360 = INT64_MIN;

	t84 = ((x357%x358)%(x359^x360));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x361 = INT16_MAX;
	int8_t x363 = -1;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t85 = -243512;

	t85 = ((x361%x362)%(x363^x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x366 = INT32_MIN;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t86 = -6830935203556LL;

	t86 = ((x365%x366)%(x367^x368));

	if (t86 != 11LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x373 = 6LLU;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = -7;
	uint64_t t87 = 464284977331112363LLU;

	t87 = ((x373%x374)%(x375^x376));

	if (t87 != 6LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -1;
	static uint8_t x379 = 11U;
	int8_t x380 = 26;
	int32_t t88 = 1;

	t88 = ((x377%x378)%(x379^x380));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = 441;
	int16_t x383 = INT16_MIN;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t89 = 0;

	t89 = ((x381%x382)%(x383^x384));

	if (t89 != -134) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x386 = -6584;
	volatile uint32_t t90 = 998143594U;

	t90 = ((x385%x386)%(x387^x388));

	if (t90 != 20U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x389 = 0U;
	static uint64_t x390 = UINT64_MAX;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 156LLU;
	static uint64_t t91 = 100LLU;

	t91 = ((x389%x390)%(x391^x392));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x393 = -1;
	int16_t x394 = 61;
	volatile int8_t x396 = -1;
	static volatile int32_t t92 = 4;

	t92 = ((x393%x394)%(x395^x396));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x398 = INT32_MIN;
	uint8_t x399 = 3U;
	int32_t x400 = INT32_MIN;
	int32_t t93 = 791017014;

	t93 = ((x397%x398)%(x399^x400));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x405 = -1;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = 1;
	int8_t x408 = INT8_MIN;

	t94 = ((x405%x406)%(x407^x408));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x409 = INT16_MAX;
	uint16_t x410 = 112U;
	static uint16_t x411 = 0U;
	int8_t x412 = INT8_MIN;
	volatile int32_t t95 = -42410;

	t95 = ((x409%x410)%(x411^x412));

	if (t95 != 63) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x413 = 4354676U;
	uint64_t x414 = 268843004693LLU;
	uint32_t x416 = 1714U;

	t96 = ((x413%x414)%(x415^x416));

	if (t96 != 4354676LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x417 = 6430U;
	int16_t x418 = INT16_MIN;
	uint16_t x419 = 13461U;

	t97 = ((x417%x418)%(x419^x420));

	if (t97 != 6430) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x422 = 1;
	int8_t x423 = -18;
	static int16_t x424 = -1;
	volatile int64_t t98 = 136414685506LL;

	t98 = ((x421%x422)%(x423^x424));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x425 = INT8_MIN;
	uint8_t x427 = 19U;
	int16_t x428 = -107;
	volatile int32_t t99 = 696439;

	t99 = ((x425%x426)%(x427^x428));

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

