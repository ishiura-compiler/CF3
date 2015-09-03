#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x30 = 53572LL;
uint8_t x32 = 1U;
int8_t x43 = -1;
static volatile int8_t x46 = -1;
static volatile int32_t t11 = 0;
uint32_t x51 = UINT32_MAX;
int16_t x57 = INT16_MIN;
int32_t x81 = -1;
uint16_t x83 = 3150U;
int64_t t20 = 50429633087956LL;
int32_t x90 = 71200;
uint32_t x93 = UINT32_MAX;
int16_t x95 = INT16_MAX;
volatile int32_t t23 = -394463;
int32_t x98 = -1;
volatile uint16_t x102 = UINT16_MAX;
volatile int64_t t25 = 90418LL;
int8_t x105 = 10;
volatile int32_t t26 = -10;
static int32_t t27 = 565940;
volatile uint16_t x113 = 651U;
static uint32_t x115 = UINT32_MAX;
volatile int16_t x119 = -1;
static int16_t x124 = -1;
static int8_t x125 = INT8_MIN;
int8_t x129 = INT8_MAX;
volatile int64_t x133 = -1LL;
uint64_t x137 = 6137810228482094LLU;
int32_t x139 = 54487;
int8_t x140 = -1;
uint64_t x144 = 143LLU;
volatile int32_t x146 = 41604766;
int8_t x154 = 1;
volatile uint8_t x160 = UINT8_MAX;
static uint64_t x162 = UINT64_MAX;
static uint16_t x177 = UINT16_MAX;
uint64_t x180 = 14489619285LLU;
int16_t x182 = INT16_MIN;
static int32_t x185 = -1;
int32_t t48 = 63566297;
int64_t x203 = -2216LL;
static volatile uint64_t t50 = 1008044366563LLU;
int64_t x205 = -1LL;
int64_t x210 = 687530701LL;
static uint64_t x224 = 304252310LLU;
volatile int32_t x225 = -1;
int32_t x229 = -32652258;
uint32_t x235 = UINT32_MAX;
static volatile int32_t x242 = 11833858;
uint8_t x245 = 18U;
int32_t x247 = -1;
uint32_t t61 = 15299555U;
static int32_t x255 = -1;
int16_t x260 = INT16_MAX;
int64_t t64 = 3409361476534046LL;
int64_t x265 = -1LL;
volatile int32_t t66 = -39027237;
volatile int64_t t67 = 395043155693LL;
static volatile uint16_t x276 = 120U;
volatile int64_t t68 = -683325305579213780LL;
int64_t x280 = INT64_MIN;
uint16_t x284 = UINT16_MAX;
volatile int32_t t70 = 507;
uint16_t x287 = 525U;
volatile uint32_t t71 = 1668873U;
int64_t x293 = INT64_MIN;
int32_t x316 = INT32_MIN;
int16_t x324 = INT16_MIN;
int16_t x335 = INT16_MIN;
int16_t x345 = -306;
uint32_t x354 = 31562U;
int64_t x360 = -1LL;
uint64_t x362 = 464837975745085LLU;
static volatile int16_t x371 = INT16_MIN;
int64_t x376 = -16659520023LL;
volatile int64_t t93 = -386794478254934LL;
static int64_t t94 = -15599049650155LL;
volatile int32_t t95 = 431;
uint32_t t96 = 62784328U;
uint32_t x390 = 19U;
int64_t x397 = INT64_MAX;
uint64_t x399 = 20057373981957044LLU;
uint64_t t99 = 8248815403268LLU;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	uint16_t x2 = 63U;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -1LL;
	int64_t t0 = 3888LL;

	t0 = ((x1<x2)|(x3^x4));

	if (t0 != 32767LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	int32_t x6 = -392653;
	static int64_t x7 = -2LL;
	int16_t x8 = INT16_MAX;
	volatile int64_t t1 = 3942332995LL;

	t1 = ((x5<x6)|(x7^x8));

	if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static uint32_t x10 = UINT32_MAX;
	uint8_t x11 = 2U;
	int32_t x12 = -1;
	int32_t t2 = 3468;

	t2 = ((x9<x10)|(x11^x12));

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 47;
	int8_t x14 = INT8_MAX;
	volatile int16_t x15 = 17;
	volatile int64_t x16 = -170170169LL;
	int64_t t3 = 15LL;

	t3 = ((x13<x14)|(x15^x16));

	if (t3 != -170170153LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	static uint8_t x20 = 45U;
	volatile int32_t t4 = -61;

	t4 = ((x17<x18)|(x19^x20));

	if (t4 != -2147483603) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int32_t x22 = -1500;
	static uint32_t x23 = UINT32_MAX;
	static int16_t x24 = -1722;
	volatile uint32_t t5 = 78697U;

	t5 = ((x21<x22)|(x23^x24));

	if (t5 != 1721U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = INT8_MIN;
	uint16_t x26 = 204U;
	static int8_t x27 = INT8_MAX;
	static int16_t x28 = INT16_MAX;
	static int32_t t6 = 33972;

	t6 = ((x25<x26)|(x27^x28));

	if (t6 != 32641) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static int16_t x31 = -195;
	int32_t t7 = -2030;

	t7 = ((x29<x30)|(x31^x32));

	if (t7 != -196) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 9384687;
	int8_t x34 = INT8_MIN;
	static uint8_t x35 = 33U;
	uint32_t x36 = 62619277U;
	volatile uint32_t t8 = 27284U;

	t8 = ((x33<x34)|(x35^x36));

	if (t8 != 62619308U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -2004080843477LL;
	int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	int16_t x40 = -1;
	static int32_t t9 = 45;

	t9 = ((x37<x38)|(x39^x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 8LLU;
	uint64_t x42 = UINT64_MAX;
	int64_t x44 = -4LL;
	volatile int64_t t10 = -5152LL;

	t10 = ((x41<x42)|(x43^x44));

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	volatile int8_t x47 = INT8_MAX;
	static volatile uint8_t x48 = 7U;

	t11 = ((x45<x46)|(x47^x48));

	if (t11 != 121) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	int64_t x50 = INT64_MAX;
	volatile int32_t x52 = -1;
	static volatile uint32_t t12 = 346U;

	t12 = ((x49<x50)|(x51^x52));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MIN;
	static uint64_t x55 = UINT64_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile uint64_t t13 = 559122191715537LLU;

	t13 = ((x53<x54)|(x55^x56));

	if (t13 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x58 = 12U;
	int8_t x59 = 7;
	int32_t x60 = INT32_MIN;
	static int32_t t14 = 8041759;

	t14 = ((x57<x58)|(x59^x60));

	if (t14 != -2147483641) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	int64_t x62 = INT64_MAX;
	static volatile int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -150205883982636LL;

	t15 = ((x61<x62)|(x63^x64));

	if (t15 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	static volatile int16_t x66 = -1188;
	uint8_t x67 = 10U;
	static uint32_t x68 = 39666U;
	uint32_t t16 = 123693U;

	t16 = ((x65<x66)|(x67^x68));

	if (t16 != 39672U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -330921751293725LL;
	int64_t x70 = INT64_MIN;
	uint32_t x71 = 10U;
	uint8_t x72 = UINT8_MAX;
	uint32_t t17 = 46U;

	t17 = ((x69<x70)|(x71^x72));

	if (t17 != 245U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	static int32_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t18 = 222744952LLU;

	t18 = ((x73<x74)|(x75^x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 1791918187860LL;
	int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MAX;
	int32_t x80 = -1582;
	int32_t t19 = 614621;

	t19 = ((x77<x78)|(x79^x80));

	if (t19 != -31187) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = 4U;
	int64_t x84 = -1LL;

	t20 = ((x81<x82)|(x83^x84));

	if (t20 != -3151LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 544431LLU;
	uint64_t x86 = 297LLU;
	int64_t x87 = 40LL;
	int32_t x88 = 6561;
	int64_t t21 = 641239757631043LL;

	t21 = ((x85<x86)|(x87^x88));

	if (t21 != 6537LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = 7148;
	int64_t x91 = -1981164LL;
	uint16_t x92 = UINT16_MAX;
	volatile int64_t t22 = -262844474302685LL;

	t22 = ((x89<x90)|(x91^x92));

	if (t22 != -2016533LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = UINT8_MAX;
	int8_t x96 = -1;

	t23 = ((x93<x94)|(x95^x96));

	if (t23 != -32768) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = 12465LL;
	static uint64_t x99 = 881731248775LLU;
	int16_t x100 = 16;
	volatile uint64_t t24 = 14170740LLU;

	t24 = ((x97<x98)|(x99^x100));

	if (t24 != 881731248791LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 62022LLU;
	int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MAX;

	t25 = ((x101<x102)|(x103^x104));

	if (t25 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x106 = 773747218;
	uint16_t x107 = 94U;
	int32_t x108 = INT32_MIN;

	t26 = ((x105<x106)|(x107^x108));

	if (t26 != -2147483553) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	uint8_t x110 = UINT8_MAX;
	int32_t x111 = 3421275;
	int8_t x112 = INT8_MIN;

	t27 = ((x109<x110)|(x111^x112));

	if (t27 != -3421221) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -397129LL;
	volatile int8_t x116 = 7;
	volatile uint32_t t28 = 6484656U;

	t28 = ((x113<x114)|(x115^x116));

	if (t28 != 4294967288U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MAX;
	volatile int16_t x118 = -1;
	volatile int64_t x120 = -1LL;
	static volatile int64_t t29 = -280877LL;

	t29 = ((x117<x118)|(x119^x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	static uint8_t x122 = 1U;
	int8_t x123 = INT8_MAX;
	int32_t t30 = -53555000;

	t30 = ((x121<x122)|(x123^x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = 331085U;
	static int16_t x127 = INT16_MIN;
	int32_t x128 = INT32_MIN;
	static int32_t t31 = 99386944;

	t31 = ((x125<x126)|(x127^x128));

	if (t31 != 2147450880) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x130 = 15682128057686824LLU;
	int32_t x131 = -95245042;
	static int8_t x132 = INT8_MIN;
	int32_t t32 = 1;

	t32 = ((x129<x130)|(x131^x132));

	if (t32 != 95244943) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = -1;
	volatile int8_t x135 = INT8_MIN;
	int8_t x136 = 2;
	int32_t t33 = 838086;

	t33 = ((x133<x134)|(x135^x136));

	if (t33 != -126) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x138 = 10434471628458LLU;
	static int32_t t34 = -356851;

	t34 = ((x137<x138)|(x139^x140));

	if (t34 != -54488) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 3828U;
	volatile uint64_t t35 = 25199355LLU;

	t35 = ((x141<x142)|(x143^x144));

	if (t35 != 3707LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	uint32_t x147 = 607U;
	uint64_t x148 = 370877403054953674LLU;
	volatile uint64_t t36 = 757096609316LLU;

	t36 = ((x145<x146)|(x147^x148));

	if (t36 != 370877403054954133LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint8_t x150 = 62U;
	static int8_t x151 = INT8_MAX;
	volatile int16_t x152 = INT16_MIN;
	int32_t t37 = 2539;

	t37 = ((x149<x150)|(x151^x152));

	if (t37 != -32641) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	volatile uint32_t x155 = 1285337U;
	uint32_t x156 = 1536329U;
	uint32_t t38 = 49753U;

	t38 = ((x153<x154)|(x155^x156));

	if (t38 != 322961U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	static int16_t x158 = -1;
	int32_t x159 = -1;
	int32_t t39 = 14883;

	t39 = ((x157<x158)|(x159^x160));

	if (t39 != -255) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 12311929LLU;
	static int8_t x163 = 2;
	uint8_t x164 = 2U;
	static int32_t t40 = -34297;

	t40 = ((x161<x162)|(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = 528088449;
	uint64_t x166 = 3205881726805186LLU;
	uint32_t x167 = 1117616U;
	volatile int8_t x168 = INT8_MIN;
	volatile uint32_t t41 = 16029397U;

	t41 = ((x165<x166)|(x167^x168));

	if (t41 != 4293849649U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MIN;
	uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MAX;
	volatile int8_t x172 = 4;
	int32_t t42 = -7;

	t42 = ((x169<x170)|(x171^x172));

	if (t42 != 123) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = INT8_MIN;
	volatile uint16_t x174 = 715U;
	static int8_t x175 = 1;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = ((x173<x174)|(x175^x176));

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	static uint64_t t44 = 3678289298137039LLU;

	t44 = ((x177<x178)|(x179^x180));

	if (t44 != 15575151786LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	volatile int64_t t45 = 218LL;

	t45 = ((x181<x182)|(x183^x184));

	if (t45 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x186 = INT8_MIN;
	uint8_t x187 = 4U;
	static int64_t x188 = 31366568056579LL;
	volatile int64_t t46 = 270474976214055317LL;

	t46 = ((x185<x186)|(x187^x188));

	if (t46 != 31366568056583LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 194744715980453165LLU;
	uint8_t x190 = 1U;
	uint8_t x191 = 15U;
	static volatile int32_t x192 = -462;
	int32_t t47 = 1411;

	t47 = ((x189<x190)|(x191^x192));

	if (t47 != -451) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x193 = 692198054499LLU;
	uint16_t x194 = 21U;
	int8_t x195 = INT8_MAX;
	volatile uint8_t x196 = 48U;

	t48 = ((x193<x194)|(x195^x196));

	if (t48 != 79) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 187180U;
	int16_t x198 = INT16_MAX;
	volatile int8_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	uint32_t t49 = 10204U;

	t49 = ((x197<x198)|(x199^x200));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = 0U;
	uint64_t x204 = 10308072LLU;

	t50 = ((x201<x202)|(x203^x204));

	if (t50 != 18446744073699245745LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = -1LL;
	uint8_t x207 = UINT8_MAX;
	volatile int16_t x208 = INT16_MIN;
	int32_t t51 = -26261;

	t51 = ((x205<x206)|(x207^x208));

	if (t51 != -32513) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int64_t x211 = INT64_MIN;
	volatile int64_t x212 = INT64_MIN;
	int64_t t52 = -459LL;

	t52 = ((x209<x210)|(x211^x212));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 3371U;
	volatile int64_t x215 = INT64_MAX;
	int64_t x216 = -4530840628LL;
	int64_t t53 = -3068499501LL;

	t53 = ((x213<x214)|(x215^x216));

	if (t53 != -9223372032323935181LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = INT64_MAX;
	int64_t x218 = 2029395069LL;
	static int64_t x219 = INT64_MAX;
	volatile int32_t x220 = INT32_MIN;
	static int64_t t54 = 1621680444321LL;

	t54 = ((x217<x218)|(x219^x220));

	if (t54 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = UINT8_MAX;
	uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = INT64_MIN;
	volatile uint64_t t55 = 19787707575861LLU;

	t55 = ((x221<x222)|(x223^x224));

	if (t55 != 9223372037159028119LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x226 = 31628711492LLU;
	int64_t x227 = -1LL;
	volatile uint32_t x228 = 5239U;
	volatile int64_t t56 = 1143116868264728663LL;

	t56 = ((x225<x226)|(x227^x228));

	if (t56 != -5240LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x230 = UINT16_MAX;
	int16_t x231 = INT16_MAX;
	volatile int8_t x232 = -6;
	volatile int32_t t57 = -32;

	t57 = ((x229<x230)|(x231^x232));

	if (t57 != -32763) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 6996U;
	int64_t x234 = 7821686067228LL;
	int64_t x236 = INT64_MAX;
	int64_t t58 = -46103LL;

	t58 = ((x233<x234)|(x235^x236));

	if (t58 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 2028841708209LLU;
	uint8_t x238 = UINT8_MAX;
	static int32_t x239 = -112;
	int64_t x240 = INT64_MIN;
	volatile int64_t t59 = 559LL;

	t59 = ((x237<x238)|(x239^x240));

	if (t59 != 9223372036854775696LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 5627U;
	volatile int64_t x243 = INT64_MIN;
	int16_t x244 = -1;
	int64_t t60 = INT64_MAX;

	t60 = ((x241<x242)|(x243^x244));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x246 = 216078;
	uint32_t x248 = 4445U;

	t61 = ((x245<x246)|(x247^x248));

	if (t61 != 4294962851U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -7652;
	int32_t x250 = 105359;
	uint64_t x251 = 1260053390867168242LLU;
	int64_t x252 = 0LL;
	uint64_t t62 = 1830023LLU;

	t62 = ((x249<x250)|(x251^x252));

	if (t62 != 1260053390867168243LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 29U;
	uint64_t x254 = 3224LLU;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t63 = 1U;

	t63 = ((x253<x254)|(x255^x256));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 7U;
	int32_t x258 = -1;
	volatile int64_t x259 = INT64_MIN;

	t64 = ((x257<x258)|(x259^x260));

	if (t64 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = -1LL;
	uint8_t x262 = 97U;
	uint8_t x263 = 6U;
	int8_t x264 = 0;
	static int32_t t65 = 19364;

	t65 = ((x261<x262)|(x263^x264));

	if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x266 = -1;
	uint8_t x267 = 0U;
	static int8_t x268 = INT8_MIN;

	t66 = ((x265<x266)|(x267^x268));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static int16_t x270 = 26;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;

	t67 = ((x269<x270)|(x271^x272));

	if (t67 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = 220444LLU;
	volatile uint64_t x274 = 4131377921481LLU;
	static volatile int64_t x275 = INT64_MIN;

	t68 = ((x273<x274)|(x275^x276));

	if (t68 != -9223372036854775687LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static uint64_t x278 = 131231954533439LLU;
	static uint16_t x279 = 57U;
	volatile int64_t t69 = 706362393293780177LL;

	t69 = ((x277<x278)|(x279^x280));

	if (t69 != -9223372036854775751LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	uint32_t x282 = UINT32_MAX;
	int8_t x283 = 6;

	t70 = ((x281<x282)|(x283^x284));

	if (t70 != 65529) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 2;
	uint16_t x286 = UINT16_MAX;
	uint32_t x288 = 1U;

	t71 = ((x285<x286)|(x287^x288));

	if (t71 != 525U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 1U;
	uint64_t x290 = 706532610268376LLU;
	int32_t x291 = 116;
	static int64_t x292 = INT64_MIN;
	int64_t t72 = 563133851060136LL;

	t72 = ((x289<x290)|(x291^x292));

	if (t72 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MIN;
	int32_t x295 = -1;
	int8_t x296 = INT8_MIN;
	int32_t t73 = 1;

	t73 = ((x293<x294)|(x295^x296));

	if (t73 != 127) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = -1;
	static int32_t x299 = 35029032;
	uint8_t x300 = UINT8_MAX;
	int32_t t74 = 10453661;

	t74 = ((x297<x298)|(x299^x300));

	if (t74 != 35029207) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -8590790275319799LL;
	int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MIN;
	volatile int64_t x304 = -17LL;
	volatile int64_t t75 = -2LL;

	t75 = ((x301<x302)|(x303^x304));

	if (t75 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -21;
	volatile int16_t x306 = -3;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = -4571679705974809LL;
	static uint64_t t76 = 52451LLU;

	t76 = ((x305<x306)|(x307^x308));

	if (t76 != 4571679705974809LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 26668U;
	static uint8_t x310 = 0U;
	int16_t x311 = -1;
	volatile int32_t x312 = 107;
	int32_t t77 = 1689230;

	t77 = ((x309<x310)|(x311^x312));

	if (t77 != -108) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	int32_t x314 = -1;
	int64_t x315 = 0LL;
	int64_t t78 = 142823171289614393LL;

	t78 = ((x313<x314)|(x315^x316));

	if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 1005405342965293972LLU;
	int32_t x318 = -200347;
	static int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 28;

	t79 = ((x317<x318)|(x319^x320));

	if (t79 != 2147450881) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MAX;
	static int32_t x323 = -2;
	static volatile int32_t t80 = 3;

	t80 = ((x321<x322)|(x323^x324));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 26065452LL;
	static int8_t x326 = INT8_MIN;
	volatile uint8_t x327 = 7U;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t81 = 8LL;

	t81 = ((x325<x326)|(x327^x328));

	if (t81 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = -1;
	int64_t x331 = -1LL;
	int32_t x332 = INT32_MAX;
	static int64_t t82 = 3072385624479810725LL;

	t82 = ((x329<x330)|(x331^x332));

	if (t82 != -2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MIN;
	volatile uint16_t x334 = 42U;
	int16_t x336 = INT16_MAX;
	int32_t t83 = -1;

	t83 = ((x333<x334)|(x335^x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int16_t x338 = -69;
	int32_t x339 = -24293;
	int32_t x340 = -1;
	int32_t t84 = 14013;

	t84 = ((x337<x338)|(x339^x340));

	if (t84 != 24292) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = 1;
	uint64_t x342 = 140044674058648869LLU;
	static int64_t x343 = -1450764LL;
	uint16_t x344 = 123U;
	static int64_t t85 = 33305LL;

	t85 = ((x341<x342)|(x343^x344));

	if (t85 != -1450865LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x346 = -76300351;
	int8_t x347 = INT8_MIN;
	static int8_t x348 = INT8_MAX;
	int32_t t86 = -4509;

	t86 = ((x345<x346)|(x347^x348));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int8_t x350 = -1;
	int8_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	static uint64_t t87 = 417LLU;

	t87 = ((x349<x350)|(x351^x352));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = -97LL;
	static int16_t x355 = 15609;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 1094;

	t88 = ((x353<x354)|(x355^x356));

	if (t88 != -2147468039) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	uint8_t x358 = UINT8_MAX;
	int16_t x359 = -1;
	int64_t t89 = -2077870735988LL;

	t89 = ((x357<x358)|(x359^x360));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MAX;
	int16_t x363 = INT16_MIN;
	uint32_t x364 = 330466429U;
	volatile uint32_t t90 = 2148158U;

	t90 = ((x361<x362)|(x363^x364));

	if (t90 != 3964470397U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = -1;
	int32_t x366 = 1870301;
	int32_t x367 = 199601994;
	static int8_t x368 = -1;
	volatile int32_t t91 = 34812347;

	t91 = ((x365<x366)|(x367^x368));

	if (t91 != -199601995) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	uint8_t x372 = 20U;
	int32_t t92 = 4;

	t92 = ((x369<x370)|(x371^x372));

	if (t92 != -32747) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 2580U;
	int64_t x375 = INT64_MAX;

	t93 = ((x373<x374)|(x375^x376));

	if (t93 != -9223372020195255786LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = 8U;
	static int8_t x378 = 1;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MIN;

	t94 = ((x377<x378)|(x379^x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	int64_t x382 = -1LL;
	int8_t x383 = 1;
	uint8_t x384 = 6U;

	t95 = ((x381<x382)|(x383^x384));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 227U;
	int16_t x386 = INT16_MAX;
	uint32_t x387 = 12144U;
	static uint8_t x388 = UINT8_MAX;

	t96 = ((x385<x386)|(x387^x388));

	if (t96 != 12175U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 49785U;
	int64_t x391 = 3LL;
	static uint32_t x392 = 1939U;
	volatile int64_t t97 = 904246LL;

	t97 = ((x389<x390)|(x391^x392));

	if (t97 != 1936LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	uint8_t x394 = 0U;
	int32_t x395 = -33903;
	volatile int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -214787712;

	t98 = ((x393<x394)|(x395^x396));

	if (t98 != 33809) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = 3LL;
	int16_t x400 = 0;

	t99 = ((x397<x398)|(x399^x400));

	if (t99 != 20057373981957044LLU) { NG(); } else { ; }
	
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

