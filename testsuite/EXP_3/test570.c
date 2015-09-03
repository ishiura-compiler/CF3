#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
static uint16_t x27 = 4847U;
int32_t x32 = INT32_MAX;
int64_t t7 = 2131608796218465LL;
int32_t x38 = INT32_MAX;
static int64_t x39 = -1LL;
volatile uint32_t x40 = 16037U;
static volatile int64_t t8 = 10LL;
int64_t x46 = -1LL;
static int16_t x50 = -1;
int32_t x52 = -3305891;
static volatile uint32_t x57 = 229U;
static int16_t x58 = -1;
int32_t x59 = INT32_MIN;
int8_t x63 = 55;
static uint64_t x73 = UINT64_MAX;
volatile uint64_t t16 = 4418LLU;
uint64_t x81 = 4204276755615798906LLU;
int64_t x83 = -371006258996LL;
int64_t x84 = INT64_MAX;
static int32_t t20 = 1;
uint8_t x96 = 115U;
int64_t x104 = INT64_MIN;
volatile int64_t t23 = -61LL;
int64_t x112 = -1LL;
volatile uint16_t x115 = UINT16_MAX;
volatile int16_t x127 = 1;
uint8_t x128 = UINT8_MAX;
volatile int64_t t30 = -108377020502432LL;
int64_t x133 = -3957LL;
int16_t x136 = INT16_MAX;
uint32_t x140 = 714760484U;
int64_t t32 = -15694851446009621LL;
int64_t t33 = -28LL;
volatile uint8_t x150 = UINT8_MAX;
int8_t x157 = INT8_MIN;
static volatile uint8_t x159 = 6U;
int8_t x160 = INT8_MIN;
volatile int32_t t38 = 51;
int8_t x169 = -9;
int64_t x173 = INT64_MAX;
volatile int32_t x179 = INT32_MIN;
int16_t x182 = INT16_MIN;
volatile int16_t x184 = INT16_MIN;
int32_t t44 = -56459;
volatile int32_t x199 = -99684;
int64_t x205 = INT64_MIN;
volatile int16_t x207 = 4981;
int8_t x210 = -44;
int16_t x215 = 432;
volatile uint64_t x224 = 18577722765381525LLU;
static int16_t x230 = 1326;
int16_t x233 = -2706;
static uint16_t x236 = 35U;
uint64_t x241 = 8274138934LLU;
int64_t x242 = -1LL;
int8_t x246 = INT8_MIN;
int64_t x254 = -12LL;
uint8_t x256 = 15U;
uint16_t x258 = 258U;
volatile uint32_t t59 = 174467923U;
static int32_t x265 = -45137;
int16_t x271 = -1;
int32_t x275 = INT32_MIN;
static volatile int64_t t63 = -26068423LL;
uint16_t x280 = 29342U;
static volatile int32_t t64 = -376575;
static int64_t t65 = 114LL;
static volatile int64_t x293 = 17265214950535355LL;
uint64_t t68 = 81898495LLU;
int32_t t72 = -770315662;
int64_t x321 = -13LL;
uint64_t x322 = UINT64_MAX;
volatile int8_t x324 = -50;
int64_t x326 = -1LL;
static uint32_t x327 = UINT32_MAX;
uint32_t t79 = 1951540U;
static uint8_t x361 = 0U;
int32_t x370 = INT32_MIN;
uint32_t x375 = UINT32_MAX;
uint8_t x376 = UINT8_MAX;
uint32_t t85 = 181U;
uint16_t x378 = UINT16_MAX;
int16_t x396 = 211;
volatile int64_t t89 = -672631LL;
static volatile int16_t x399 = INT16_MAX;
int16_t x409 = INT16_MAX;
uint32_t t93 = 1299295U;
int8_t x417 = -1;
int32_t x419 = INT32_MAX;
static int8_t x420 = -1;
volatile int32_t t95 = 429039572;
int64_t x428 = INT64_MIN;
int32_t x433 = INT32_MAX;
int32_t x435 = -702104;
volatile int64_t t99 = -25259910LL;


void f0(void) {
	uint8_t x1 = 5U;
	int16_t x3 = -3;
	int8_t x4 = -1;
	static volatile int32_t t0 = -14073989;

	t0 = ((x1%x2)&(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int32_t x6 = 29124;
	int16_t x7 = INT16_MIN;
	int8_t x8 = 37;
	static int32_t t1 = -94;

	t1 = ((x5%x6)&(x7/x8));

	if (t1 != 7171) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = 0U;
	static uint16_t x12 = 1U;
	int64_t t2 = -700911403809383LL;

	t2 = ((x9%x10)&(x11/x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int64_t x14 = -2185256046183008430LL;
	uint64_t x15 = 3977154116085858LLU;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t3 = 1788395305824068733LLU;

	t3 = ((x13%x14)&(x15/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 52336028617916LL;
	uint8_t x18 = 110U;
	static int8_t x19 = 14;
	int16_t x20 = -205;
	int64_t t4 = 435560174LL;

	t4 = ((x17%x18)&(x19/x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 6U;
	int16_t x22 = INT16_MAX;
	static volatile uint64_t x23 = 1989754957LLU;
	int16_t x24 = 27;
	uint64_t t5 = 747912119835253LLU;

	t5 = ((x21%x22)&(x23/x24));

	if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 494985U;
	uint64_t x26 = 124LLU;
	int8_t x28 = -1;
	volatile uint64_t t6 = 0LLU;

	t6 = ((x25%x26)&(x27/x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 30;
	int64_t x30 = INT64_MIN;
	volatile uint16_t x31 = UINT16_MAX;

	t7 = ((x29%x30)&(x31/x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;

	t8 = ((x37%x38)&(x39/x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -95;
	int64_t x47 = INT64_MIN;
	int32_t x48 = 172737504;
	volatile int64_t t9 = 1LL;

	t9 = ((x45%x46)&(x47/x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -465700;
	int32_t x51 = INT32_MIN;
	int32_t t10 = -2045;

	t10 = ((x49%x50)&(x51/x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = 9782181992LLU;
	int16_t x54 = INT16_MAX;
	uint32_t x55 = 28U;
	int8_t x56 = 8;
	static uint64_t t11 = 970587LLU;

	t11 = ((x53%x54)&(x55/x56));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x60 = INT16_MIN;
	volatile uint32_t t12 = 169720867U;

	t12 = ((x57%x58)&(x59/x60));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = 3602;
	int8_t x62 = INT8_MIN;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = 1626935LL;

	t13 = ((x61%x62)&(x63/x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x65 = -1;
	int64_t x66 = -1960654052LL;
	int32_t x67 = -47260702;
	int32_t x68 = 26283;
	int64_t t14 = 32804LL;

	t14 = ((x65%x66)&(x67/x68));

	if (t14 != -1798LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	volatile uint64_t x70 = 439LLU;
	int32_t x71 = INT32_MIN;
	volatile int16_t x72 = 15;
	volatile uint64_t t15 = 0LLU;

	t15 = ((x69%x70)&(x71/x72));

	if (t15 != 256LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x74 = INT64_MIN;
	static volatile int8_t x75 = INT8_MIN;
	int64_t x76 = INT64_MIN;

	t16 = ((x73%x74)&(x75/x76));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 3040962725986LL;
	int32_t x78 = INT32_MIN;
	int16_t x79 = INT16_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t17 = -886LL;

	t17 = ((x77%x78)&(x79/x80));

	if (t17 != 125880320LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x82 = -1LL;
	volatile uint64_t t18 = 19LLU;

	t18 = ((x81%x82)&(x83/x84));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = 123808444;
	static int8_t x86 = 5;
	static int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;
	volatile int64_t t19 = 812LL;

	t19 = ((x85%x86)&(x87/x88));

	if (t19 != 4LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x89 = -204962;
	uint8_t x90 = UINT8_MAX;
	static int8_t x91 = -2;
	int16_t x92 = -1;

	t20 = ((x89%x90)&(x91/x92));

	if (t20 != 2) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = -1LL;
	volatile int64_t x94 = INT64_MIN;
	static int64_t x95 = INT64_MAX;
	volatile int64_t t21 = -126053LL;

	t21 = ((x93%x94)&(x95/x96));

	if (t21 != 80203235103085007LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = -1;
	volatile int64_t x98 = -1LL;
	static int32_t x99 = -84673091;
	int32_t x100 = -1;
	int64_t t22 = 169253345LL;

	t22 = ((x97%x98)&(x99/x100));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = UINT8_MAX;
	static int8_t x102 = INT8_MIN;
	int64_t x103 = INT64_MIN;

	t23 = ((x101%x102)&(x103/x104));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	int64_t x106 = -1803793LL;
	uint32_t x107 = 3363103U;
	static volatile int64_t x108 = INT64_MIN;
	volatile int64_t t24 = 2846951LL;

	t24 = ((x105%x106)&(x107/x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	static int8_t x110 = 7;
	int8_t x111 = -15;
	int64_t t25 = 548566960LL;

	t25 = ((x109%x110)&(x111/x112));

	if (t25 != 15LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = INT64_MIN;
	int8_t x114 = -1;
	static uint16_t x116 = 17333U;
	volatile int64_t t26 = 238334851892619050LL;

	t26 = ((x113%x114)&(x115/x116));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 3;
	int64_t x118 = INT64_MAX;
	volatile int16_t x119 = 25;
	int8_t x120 = 1;
	int64_t t27 = 709LL;

	t27 = ((x117%x118)&(x119/x120));

	if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x121 = 50308173745844LL;
	uint8_t x122 = 65U;
	int64_t x123 = 117165LL;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t28 = -1LL;

	t28 = ((x121%x122)&(x123/x124));

	if (t28 != 10LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = -1;
	int64_t x126 = 1LL;
	volatile int64_t t29 = 781LL;

	t29 = ((x125%x126)&(x127/x128));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -3;
	volatile int8_t x130 = INT8_MAX;
	int8_t x131 = 9;
	int64_t x132 = 3804132647851187LL;

	t30 = ((x129%x130)&(x131/x132));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x134 = 3U;
	static int16_t x135 = INT16_MIN;
	volatile int64_t t31 = 33657871227587LL;

	t31 = ((x133%x134)&(x135/x136));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x137 = INT64_MAX;
	static volatile uint16_t x138 = 3009U;
	int64_t x139 = INT64_MAX;

	t32 = ((x137%x138)&(x139/x140));

	if (t32 != 640LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	uint32_t x142 = 747U;
	uint32_t x143 = 267U;
	static int64_t x144 = INT64_MAX;

	t33 = ((x141%x142)&(x143/x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = -1;
	uint32_t x146 = 43U;
	volatile int32_t x147 = 7392;
	int8_t x148 = INT8_MAX;
	volatile uint32_t t34 = 394U;

	t34 = ((x145%x146)&(x147/x148));

	if (t34 != 10U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int8_t x151 = -1;
	static int8_t x152 = -1;
	int64_t t35 = -3334719140LL;

	t35 = ((x149%x150)&(x151/x152));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x153 = INT32_MIN;
	int16_t x154 = 5;
	int16_t x155 = INT16_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t36 = 799270893;

	t36 = ((x153%x154)&(x155/x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x158 = 68486660590821725LLU;
	volatile uint64_t t37 = 2053496670053LLU;

	t37 = ((x157%x158)&(x159/x160));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MAX;
	int8_t x162 = -1;
	int8_t x163 = INT8_MIN;
	static int8_t x164 = -1;

	t38 = ((x161%x162)&(x163/x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x170 = INT32_MIN;
	static uint64_t x171 = UINT64_MAX;
	uint32_t x172 = 8369U;
	static uint64_t t39 = 1LLU;

	t39 = ((x169%x170)&(x171/x172));

	if (t39 != 2204175418055859LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x174 = 14463337815874737LL;
	int64_t x175 = 100LL;
	int16_t x176 = -154;
	int64_t t40 = -1929060865326741876LL;

	t40 = ((x173%x174)&(x175/x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x177 = 7;
	int32_t x178 = 462978513;
	static int8_t x180 = INT8_MIN;
	int32_t t41 = -100;

	t41 = ((x177%x178)&(x179/x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = 10U;
	uint32_t x183 = 1U;
	uint32_t t42 = 740111272U;

	t42 = ((x181%x182)&(x183/x184));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	volatile int16_t x187 = INT16_MAX;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t43 = 635071LLU;

	t43 = ((x185%x186)&(x187/x188));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -54696615;
	int8_t x190 = -3;
	uint8_t x191 = UINT8_MAX;
	static int16_t x192 = -1;

	t44 = ((x189%x190)&(x191/x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x193 = -474;
	int16_t x194 = -47;
	int64_t x195 = INT64_MIN;
	uint32_t x196 = 22227U;
	volatile int64_t t45 = 971733164793LL;

	t45 = ((x193%x194)&(x195/x196));

	if (t45 != -414962524715652LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x197 = UINT64_MAX;
	int32_t x198 = INT32_MAX;
	uint16_t x200 = UINT16_MAX;
	uint64_t t46 = 579696482514333645LLU;

	t46 = ((x197%x198)&(x199/x200));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x206 = -1LL;
	int8_t x208 = INT8_MIN;
	int64_t t47 = 20LL;

	t47 = ((x205%x206)&(x207/x208));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = UINT8_MAX;
	static uint32_t x211 = 3906U;
	volatile int32_t x212 = INT32_MIN;
	uint32_t t48 = 1791925089U;

	t48 = ((x209%x210)&(x211/x212));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x214 = 1787583;
	int32_t x216 = INT32_MIN;
	static volatile int32_t t49 = 173457150;

	t49 = ((x213%x214)&(x215/x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = -29LL;
	uint64_t x222 = UINT64_MAX;
	static uint32_t x223 = 18062075U;
	static uint64_t t50 = 2218115688234156714LLU;

	t50 = ((x221%x222)&(x223/x224));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = -1;
	int16_t x226 = -2810;
	int16_t x227 = INT16_MIN;
	static uint32_t x228 = 32276U;
	static volatile uint32_t t51 = 0U;

	t51 = ((x225%x226)&(x227/x228));

	if (t51 != 133068U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x229 = 39LLU;
	int64_t x231 = -1LL;
	volatile uint8_t x232 = UINT8_MAX;
	volatile uint64_t t52 = 95279834180LLU;

	t52 = ((x229%x230)&(x231/x232));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x234 = 1;
	static int8_t x235 = -1;
	volatile int32_t t53 = -33952431;

	t53 = ((x233%x234)&(x235/x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x237 = 123;
	static int8_t x238 = -6;
	volatile int32_t x239 = INT32_MAX;
	int16_t x240 = INT16_MIN;
	int32_t t54 = 56;

	t54 = ((x237%x238)&(x239/x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x243 = UINT32_MAX;
	uint16_t x244 = 245U;
	uint64_t t55 = 13LLU;

	t55 = ((x241%x242)&(x243/x244));

	if (t55 != 17389094LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x247 = UINT8_MAX;
	int32_t x248 = INT32_MIN;
	static volatile int32_t t56 = -231050287;

	t56 = ((x245%x246)&(x247/x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = INT8_MAX;
	uint16_t x250 = UINT16_MAX;
	int8_t x251 = 12;
	int16_t x252 = 1;
	volatile int32_t t57 = 0;

	t57 = ((x249%x250)&(x251/x252));

	if (t57 != 12) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x253 = -1;
	uint8_t x255 = 18U;
	volatile int64_t t58 = 28801541702551555LL;

	t58 = ((x253%x254)&(x255/x256));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x257 = INT16_MIN;
	int8_t x259 = INT8_MIN;
	static uint32_t x260 = 631047U;

	t59 = ((x257%x258)&(x259/x260));

	if (t59 != 6806U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x262 = 14430U;
	volatile int64_t x263 = INT64_MAX;
	uint64_t x264 = UINT64_MAX;
	static uint64_t t60 = 333474347186LLU;

	t60 = ((x261%x262)&(x263/x264));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x266 = UINT16_MAX;
	volatile int8_t x267 = -1;
	static int16_t x268 = INT16_MIN;
	int32_t t61 = -6;

	t61 = ((x265%x266)&(x267/x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	int64_t x270 = INT64_MAX;
	int8_t x272 = -1;
	int64_t t62 = -3707145LL;

	t62 = ((x269%x270)&(x271/x272));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = INT64_MIN;
	uint16_t x274 = 61U;
	volatile uint8_t x276 = UINT8_MAX;

	t63 = ((x273%x274)&(x275/x276));

	if (t63 != -8421504LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x277 = INT32_MIN;
	uint8_t x278 = 19U;
	volatile uint8_t x279 = 12U;

	t64 = ((x277%x278)&(x279/x280));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = 1138312262U;
	int64_t x282 = INT64_MAX;
	int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MIN;

	t65 = ((x281%x282)&(x283/x284));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x285 = 13864016;
	volatile int16_t x286 = INT16_MAX;
	volatile int64_t x287 = INT64_MAX;
	volatile int64_t x288 = INT64_MIN;
	volatile int64_t t66 = 35953232258642251LL;

	t66 = ((x285%x286)&(x287/x288));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = 1038325002;
	volatile int64_t x290 = -33LL;
	int8_t x291 = 1;
	int32_t x292 = -293;
	int64_t t67 = 505LL;

	t67 = ((x289%x290)&(x291/x292));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x294 = 1276U;
	uint64_t x295 = 489LLU;
	int64_t x296 = INT64_MIN;

	t68 = ((x293%x294)&(x295/x296));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = 581069LL;
	volatile int64_t x298 = -1LL;
	int8_t x299 = INT8_MIN;
	volatile int16_t x300 = INT16_MIN;
	volatile int64_t t69 = -52786665180059403LL;

	t69 = ((x297%x298)&(x299/x300));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x301 = 6;
	static int64_t x302 = INT64_MIN;
	uint32_t x303 = 3245051U;
	static int8_t x304 = INT8_MIN;
	volatile int64_t t70 = -6534246500LL;

	t70 = ((x301%x302)&(x303/x304));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint16_t x305 = 5U;
	uint64_t x306 = 12426633010577LLU;
	static volatile int8_t x307 = -1;
	int64_t x308 = -1LL;
	volatile uint64_t t71 = 120606LLU;

	t71 = ((x305%x306)&(x307/x308));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = 0;
	int8_t x318 = INT8_MIN;
	volatile uint8_t x319 = 36U;
	static int16_t x320 = -6307;

	t72 = ((x317%x318)&(x319/x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x323 = 1;
	volatile uint64_t t73 = 15343420446LLU;

	t73 = ((x321%x322)&(x323/x324));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MAX;
	static int8_t x328 = INT8_MIN;
	volatile int64_t t74 = -1000294LL;

	t74 = ((x325%x326)&(x327/x328));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = -33329252LL;
	int64_t x331 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t75 = 0LL;

	t75 = ((x329%x330)&(x331/x332));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x333 = INT8_MIN;
	int8_t x334 = -3;
	static uint64_t x335 = UINT64_MAX;
	int64_t x336 = -226392LL;
	volatile uint64_t t76 = 4241052550937LLU;

	t76 = ((x333%x334)&(x335/x336));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x341 = UINT16_MAX;
	static int32_t x342 = -1;
	static int64_t x343 = 2LL;
	static uint16_t x344 = UINT16_MAX;
	int64_t t77 = -3814LL;

	t77 = ((x341%x342)&(x343/x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x345 = UINT32_MAX;
	int16_t x346 = INT16_MIN;
	static volatile int64_t x347 = -4633767934LL;
	int16_t x348 = INT16_MAX;
	volatile int64_t t78 = -116LL;

	t78 = ((x345%x346)&(x347/x348));

	if (t78 != 22425LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x349 = INT8_MIN;
	volatile uint32_t x350 = 64182U;
	static int8_t x351 = -1;
	volatile int32_t x352 = -1;

	t79 = ((x349%x350)&(x351/x352));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x353 = INT8_MIN;
	uint32_t x354 = 119U;
	volatile uint16_t x355 = 60U;
	int64_t x356 = -1LL;
	volatile int64_t t80 = 40416053LL;

	t80 = ((x353%x354)&(x355/x356));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = 5U;
	volatile int64_t x358 = 3316917391399847658LL;
	static uint16_t x359 = 7U;
	static int8_t x360 = INT8_MIN;
	static int64_t t81 = -1LL;

	t81 = ((x357%x358)&(x359/x360));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x362 = -1LL;
	int64_t x363 = 1018282511179385LL;
	int64_t x364 = INT64_MIN;
	int64_t t82 = -58089973627LL;

	t82 = ((x361%x362)&(x363/x364));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x365 = 5316;
	uint64_t x366 = 125407LLU;
	volatile uint16_t x367 = 39U;
	uint32_t x368 = UINT32_MAX;
	uint64_t t83 = 47053392LLU;

	t83 = ((x365%x366)&(x367/x368));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x369 = INT64_MIN;
	int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int64_t t84 = 39LL;

	t84 = ((x369%x370)&(x371/x372));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = -1;
	static uint32_t x374 = 2U;

	t85 = ((x373%x374)&(x375/x376));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x377 = 314U;
	uint32_t x379 = 2028449U;
	static uint8_t x380 = UINT8_MAX;
	uint32_t t86 = 3842U;

	t86 = ((x377%x378)&(x379/x380));

	if (t86 != 274U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile uint32_t x382 = 209110174U;
	uint16_t x383 = 0U;
	volatile uint32_t x384 = UINT32_MAX;
	volatile uint32_t t87 = 130U;

	t87 = ((x381%x382)&(x383/x384));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MAX;
	uint8_t x386 = 9U;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MAX;
	int32_t t88 = -2056245;

	t88 = ((x385%x386)&(x387/x388));

	if (t88 != 7) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = -29134930758LL;
	static int16_t x395 = INT16_MIN;

	t89 = ((x393%x394)&(x395/x396));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	int32_t x400 = -1;
	static volatile uint32_t t90 = 128U;

	t90 = ((x397%x398)&(x399/x400));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = 55;
	int32_t x402 = INT32_MIN;
	uint16_t x403 = 17410U;
	int8_t x404 = -1;
	volatile int32_t t91 = -68664;

	t91 = ((x401%x402)&(x403/x404));

	if (t91 != 54) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x405 = INT8_MAX;
	int32_t x406 = INT32_MIN;
	int16_t x407 = -4952;
	static uint8_t x408 = 4U;
	int32_t t92 = -2;

	t92 = ((x405%x406)&(x407/x408));

	if (t92 != 42) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x410 = -1;
	static uint32_t x411 = 14208600U;
	uint8_t x412 = UINT8_MAX;

	t93 = ((x409%x410)&(x411/x412));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = INT8_MAX;
	int8_t x414 = INT8_MIN;
	uint64_t x415 = 1340661328792857392LLU;
	int64_t x416 = -1LL;
	volatile uint64_t t94 = 33461209803LLU;

	t94 = ((x413%x414)&(x415/x416));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x418 = -1;

	t95 = ((x417%x418)&(x419/x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = 8324U;
	uint32_t x422 = UINT32_MAX;
	volatile int64_t x423 = INT64_MAX;
	uint32_t x424 = 29142U;
	int64_t t96 = 88965823050955689LL;

	t96 = ((x421%x422)&(x423/x424));

	if (t96 != 8324LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = INT16_MIN;
	int8_t x426 = 4;
	uint8_t x427 = 3U;
	int64_t t97 = -267042344304468LL;

	t97 = ((x425%x426)&(x427/x428));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = -1;
	volatile int64_t x430 = -1LL;
	uint32_t x431 = 194520087U;
	static int16_t x432 = INT16_MIN;
	volatile int64_t t98 = 99727LL;

	t98 = ((x429%x430)&(x431/x432));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x434 = 42U;
	int64_t x436 = INT64_MAX;

	t99 = ((x433%x434)&(x435/x436));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

