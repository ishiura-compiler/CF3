#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 3704LLU;
uint64_t t0 = 490926578952864LLU;
uint32_t x5 = 107733U;
int8_t x6 = INT8_MIN;
int64_t t2 = -164526254325LL;
int64_t t3 = -2677999664971921LL;
static uint8_t x25 = 10U;
int8_t x29 = -3;
uint16_t x32 = UINT16_MAX;
uint64_t t5 = 92091113LLU;
static uint16_t x35 = UINT16_MAX;
uint8_t x37 = 2U;
static uint64_t t8 = 97LLU;
volatile int64_t t9 = 7158063654LL;
static int64_t x64 = -712LL;
int64_t t11 = -25475LL;
int64_t x87 = -1LL;
int32_t x101 = 243;
static volatile uint16_t x103 = 23431U;
uint32_t x109 = 451079U;
volatile int64_t t17 = 1572410124183658983LL;
static int64_t x115 = -1LL;
volatile uint64_t t19 = 6877458958524LLU;
volatile int64_t x123 = -1LL;
static int32_t x127 = INT32_MIN;
int8_t x135 = -1;
int64_t x136 = 341785309LL;
static volatile int32_t x151 = -470439422;
static int8_t x169 = 1;
int8_t x179 = INT8_MIN;
static volatile int32_t x180 = -320;
int64_t x185 = INT64_MIN;
uint8_t x188 = UINT8_MAX;
volatile int64_t x201 = 1545LL;
int8_t x206 = INT8_MAX;
volatile int32_t x211 = 19316;
volatile int32_t x214 = -1;
static int32_t x215 = -445;
int8_t x216 = INT8_MIN;
volatile int32_t t37 = -1786607;
volatile uint64_t t40 = 83306519LLU;
int16_t x248 = INT16_MIN;
int16_t x266 = -1;
int32_t x274 = -32210;
int8_t x275 = -1;
static volatile int64_t t44 = 10922LL;
volatile int64_t x285 = -307109032810683LL;
static int8_t x299 = INT8_MIN;
int32_t t48 = -22382578;
static int8_t x305 = INT8_MIN;
int16_t x307 = -1;
static int64_t t49 = 4LL;
int16_t x322 = 6;
int8_t x323 = 3;
static int64_t t51 = -233619LL;
int32_t x334 = 3;
volatile int32_t t55 = 4919230;
uint32_t x354 = UINT32_MAX;
volatile uint64_t t56 = 5506578260061225LLU;
static volatile uint64_t t57 = 449052301228141LLU;
uint64_t x381 = 4994LLU;
uint16_t x385 = 13096U;
volatile uint16_t x391 = UINT16_MAX;
static volatile int64_t t63 = -12LL;
int64_t x403 = INT64_MIN;
uint64_t t64 = 15913676414838LLU;
int8_t x405 = -1;
volatile int32_t x421 = -1406;
int16_t x425 = 19;
static int64_t x429 = -2092981LL;
int32_t x445 = -520;
int8_t x460 = -1;
uint64_t x465 = 836650LLU;
uint64_t x471 = UINT64_MAX;
volatile uint64_t t78 = 17873965LLU;
static int8_t x474 = -1;
int64_t t79 = 1805950823LL;
static volatile int64_t x477 = 1013246023091731340LL;
int64_t x485 = -1LL;
int64_t x529 = INT64_MIN;
volatile int64_t t87 = -21240LL;
uint16_t x543 = 3433U;
int16_t x550 = INT16_MIN;
uint64_t x558 = UINT64_MAX;
uint64_t x565 = UINT64_MAX;
uint8_t x576 = 37U;
int16_t x583 = -1;
volatile int16_t x586 = INT16_MIN;
int64_t t99 = 731055335LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x2 = -2;
	int64_t x4 = INT64_MAX;

	t0 = ((x1-x2)%(x3&x4));

	if (t0 != 2450LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = UINT8_MAX;
	int8_t x8 = 53;
	volatile uint32_t t1 = 5471U;

	t1 = ((x5-x6)%(x7&x8));

	if (t1 != 6U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = INT8_MIN;
	volatile int8_t x15 = INT8_MAX;
	static int64_t x16 = 6LL;

	t2 = ((x13-x14)%(x15&x16));

	if (t2 != 5LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 164553971LL;
	int8_t x18 = 0;
	int32_t x19 = 127;
	int32_t x20 = -1;

	t3 = ((x17-x18)%(x19&x20));

	if (t3 != 71LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = -1;
	uint16_t x27 = 388U;
	int8_t x28 = -3;
	int32_t t4 = 1033219347;

	t4 = ((x25-x26)%(x27&x28));

	if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x30 = 5U;
	uint64_t x31 = 16LLU;

	t5 = ((x29-x30)%(x31&x32));

	if (t5 != 8LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x33 = 0;
	int16_t x34 = INT16_MIN;
	int32_t x36 = 50840;
	int32_t t6 = -65073741;

	t6 = ((x33-x34)%(x35&x36));

	if (t6 != 32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x38 = 26U;
	uint8_t x39 = 48U;
	int8_t x40 = -1;
	int32_t t7 = 3764;

	t7 = ((x37-x38)%(x39&x40));

	if (t7 != -24) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x49 = INT32_MIN;
	uint64_t x50 = 201503LLU;
	uint32_t x51 = 6490U;
	static uint16_t x52 = UINT16_MAX;

	t8 = ((x49-x50)%(x51&x52));

	if (t8 != 4475LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = -1;
	static int64_t x58 = -1LL;
	int8_t x59 = INT8_MIN;
	static volatile uint32_t x60 = 36276U;

	t9 = ((x57-x58)%(x59&x60));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x62 = 10U;
	volatile uint64_t x63 = 427140876452479311LLU;
	static volatile uint64_t t10 = 1793845605LLU;

	t10 = ((x61-x62)%(x63&x64));

	if (t10 != 79686386252911518LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x73 = -1LL;
	volatile int64_t x74 = 21511927787014LL;
	int64_t x75 = -1LL;
	volatile uint16_t x76 = 3905U;

	t11 = ((x73-x74)%(x75&x76));

	if (t11 != -2745LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x77 = INT8_MIN;
	uint64_t x78 = 1092866227439LLU;
	int8_t x79 = INT8_MAX;
	uint8_t x80 = 1U;
	static volatile uint64_t t12 = 4125363149LLU;

	t12 = ((x77-x78)%(x79&x80));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x85 = -33265780LL;
	int8_t x86 = INT8_MAX;
	int32_t x88 = INT32_MAX;
	int64_t t13 = -1LL;

	t13 = ((x85-x86)%(x87&x88));

	if (t13 != -33265907LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x97 = UINT8_MAX;
	static int8_t x98 = 18;
	int16_t x99 = INT16_MAX;
	int8_t x100 = -1;
	int32_t t14 = 110;

	t14 = ((x97-x98)%(x99&x100));

	if (t14 != 237) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x102 = 0U;
	static volatile int64_t x104 = -1LL;
	int64_t t15 = 60232820914091695LL;

	t15 = ((x101-x102)%(x103&x104));

	if (t15 != 243LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x105 = UINT16_MAX;
	int8_t x106 = -12;
	int16_t x107 = 30;
	static uint8_t x108 = 2U;
	volatile int32_t t16 = 3359;

	t16 = ((x105-x106)%(x107&x108));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x110 = -7;
	volatile int64_t x111 = 5203LL;
	int32_t x112 = -35759;

	t17 = ((x109-x110)%(x111&x112));

	if (t17 != 3800LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x113 = 0;
	uint8_t x114 = 113U;
	int32_t x116 = INT32_MIN;
	int64_t t18 = 15234LL;

	t18 = ((x113-x114)%(x115&x116));

	if (t18 != -113LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x117 = 40U;
	volatile uint32_t x118 = 4768461U;
	int64_t x119 = INT64_MIN;
	uint64_t x120 = UINT64_MAX;

	t19 = ((x117-x118)%(x119&x120));

	if (t19 != 4290198875LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = INT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	static volatile int64_t t20 = 14758593937279LL;

	t20 = ((x121-x122)%(x123&x124));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x125 = -5892190460881LL;
	static uint64_t x126 = UINT64_MAX;
	int32_t x128 = INT32_MIN;
	volatile uint64_t t21 = 529701224047776LLU;

	t21 = ((x125-x126)%(x127&x128));

	if (t21 != 18446738181519090736LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x133 = 112962U;
	int16_t x134 = INT16_MIN;
	volatile int64_t t22 = -326974080LL;

	t22 = ((x133-x134)%(x135&x136));

	if (t22 != 145730LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int8_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	static int64_t x140 = -4LL;
	volatile int64_t t23 = 4LL;

	t23 = ((x137-x138)%(x139&x140));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x141 = 29401LLU;
	int8_t x142 = 1;
	volatile int8_t x143 = -3;
	uint32_t x144 = 653087785U;
	static uint64_t t24 = 3075732337LLU;

	t24 = ((x141-x142)%(x143&x144));

	if (t24 != 29400LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x145 = -1078186;
	uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 203LLU;
	int64_t x148 = 361716LL;
	volatile uint64_t t25 = 1999LLU;

	t25 = ((x145-x146)%(x147&x148));

	if (t25 != 87LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x149 = UINT16_MAX;
	uint32_t x150 = 2U;
	volatile uint8_t x152 = UINT8_MAX;
	volatile uint32_t t26 = 14575U;

	t26 = ((x149-x150)%(x151&x152));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x153 = 6U;
	static uint8_t x154 = 32U;
	int32_t x155 = INT32_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t27 = 39267960;

	t27 = ((x153-x154)%(x155&x156));

	if (t27 != -26) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x161 = 1;
	uint16_t x162 = 5U;
	int16_t x163 = -1;
	int16_t x164 = INT16_MAX;
	static int32_t t28 = -315114482;

	t28 = ((x161-x162)%(x163&x164));

	if (t28 != -4) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x170 = 36220265;
	int16_t x171 = -1;
	int8_t x172 = 21;
	volatile int32_t t29 = 11920671;

	t29 = ((x169-x170)%(x171&x172));

	if (t29 != -10) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = INT8_MIN;
	uint8_t x174 = 93U;
	int8_t x175 = -2;
	uint16_t x176 = 6931U;
	volatile int32_t t30 = 822182365;

	t30 = ((x173-x174)%(x175&x176));

	if (t30 != -221) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x177 = UINT32_MAX;
	int8_t x178 = INT8_MAX;
	volatile uint32_t t31 = 46850U;

	t31 = ((x177-x178)%(x179&x180));

	if (t31 != 256U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x186 = -1;
	uint16_t x187 = UINT16_MAX;
	volatile int64_t t32 = -2056944974903571LL;

	t32 = ((x185-x186)%(x187&x188));

	if (t32 != -127LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x197 = 362U;
	int64_t x198 = -1LL;
	uint16_t x199 = 19309U;
	int32_t x200 = -1;
	int64_t t33 = 189835421728330LL;

	t33 = ((x197-x198)%(x199&x200));

	if (t33 != 363LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x202 = 885U;
	volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = INT64_MAX;
	int64_t t34 = -19708149186LL;

	t34 = ((x201-x202)%(x203&x204));

	if (t34 != 660LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x207 = -29;
	static volatile uint64_t x208 = 11085850LLU;
	static volatile uint64_t t35 = 6993LLU;

	t35 = ((x205-x206)%(x207&x208));

	if (t35 != 128LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x209 = 29815074U;
	static int32_t x210 = -304317;
	uint32_t x212 = 4U;
	uint32_t t36 = 48322114U;

	t36 = ((x209-x210)%(x211&x212));

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x213 = INT8_MAX;

	t37 = ((x213-x214)%(x215&x216));

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x217 = INT32_MIN;
	uint64_t x218 = 2953890LLU;
	int16_t x219 = 1040;
	int64_t x220 = -1991802263466004542LL;
	volatile uint64_t t38 = 6126LLU;

	t38 = ((x217-x218)%(x219&x220));

	if (t38 != 350LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x225 = 260418527590911453LL;
	volatile int32_t x226 = -26410004;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = 62;
	static int64_t t39 = 34486033649LL;

	t39 = ((x225-x226)%(x227&x228));

	if (t39 != 53LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x233 = 3U;
	static volatile int64_t x234 = -1LL;
	volatile uint16_t x235 = 10890U;
	uint64_t x236 = UINT64_MAX;

	t40 = ((x233-x234)%(x235&x236));

	if (t40 != 4LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x245 = -1;
	volatile int8_t x246 = INT8_MIN;
	volatile int16_t x247 = -1;
	int32_t t41 = 3808190;

	t41 = ((x245-x246)%(x247&x248));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x265 = 161256433970497196LLU;
	uint8_t x267 = 3U;
	int32_t x268 = -3;
	volatile uint64_t t42 = 89LLU;

	t42 = ((x265-x266)%(x267&x268));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x269 = INT8_MIN;
	static uint16_t x270 = 435U;
	int32_t x271 = -24331;
	uint8_t x272 = 3U;
	int32_t t43 = -3882112;

	t43 = ((x269-x270)%(x271&x272));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x273 = INT64_MIN;
	int16_t x276 = 8659;

	t44 = ((x273-x274)%(x275&x276));

	if (t44 != -7859LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x286 = -1;
	int16_t x287 = -342;
	int64_t x288 = 409604010274LL;
	int64_t t45 = 5581LL;

	t45 = ((x285-x286)%(x287&x288));

	if (t45 != -315629307200LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MIN;
	volatile int64_t x291 = 1263753453003830210LL;
	uint8_t x292 = 2U;
	int64_t t46 = -1995LL;

	t46 = ((x289-x290)%(x291&x292));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x297 = -1858270725141LL;
	volatile int32_t x298 = 2;
	int16_t x300 = INT16_MAX;
	volatile int64_t t47 = -162LL;

	t47 = ((x297-x298)%(x299&x300));

	if (t47 != -28823LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x301 = -1;
	static int16_t x302 = 2905;
	int16_t x303 = -1;
	int32_t x304 = INT32_MIN;

	t48 = ((x301-x302)%(x303&x304));

	if (t48 != -2906) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x306 = 324560U;
	int64_t x308 = INT64_MIN;

	t49 = ((x305-x306)%(x307&x308));

	if (t49 != 4294642608LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x321 = INT8_MIN;
	uint8_t x324 = 1U;
	int32_t t50 = -49;

	t50 = ((x321-x322)%(x323&x324));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x325 = UINT16_MAX;
	static uint16_t x326 = 7718U;
	int64_t x327 = -16304410126405777LL;
	static uint8_t x328 = 3U;

	t51 = ((x325-x326)%(x327&x328));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x333 = 3629993;
	volatile uint64_t x335 = UINT64_MAX;
	uint32_t x336 = 18870409U;
	volatile uint64_t t52 = 2LLU;

	t52 = ((x333-x334)%(x335&x336));

	if (t52 != 3629990LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x337 = 121551419144270LL;
	volatile int16_t x338 = -1;
	volatile int32_t x339 = -1;
	volatile uint64_t x340 = UINT64_MAX;
	volatile uint64_t t53 = 2LLU;

	t53 = ((x337-x338)%(x339&x340));

	if (t53 != 121551419144271LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x345 = INT32_MIN;
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MAX;
	int32_t x348 = -45503130;
	static volatile int32_t t54 = 759;

	t54 = ((x345-x346)%(x347&x348));

	if (t54 != -7452) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x349 = INT32_MIN;
	static int16_t x350 = INT16_MIN;
	static int32_t x351 = INT32_MIN;
	int8_t x352 = -1;

	t55 = ((x349-x350)%(x351&x352));

	if (t55 != -2147450880) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x353 = 6272973LLU;
	int64_t x355 = -7505437633657787LL;
	volatile int32_t x356 = INT32_MIN;

	t56 = ((x353-x354)%(x355&x356));

	if (t56 != 7505433881196494LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x357 = UINT64_MAX;
	uint8_t x358 = 49U;
	static int64_t x359 = -644362223086513LL;
	static uint16_t x360 = 1U;

	t57 = ((x357-x358)%(x359&x360));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x373 = 10U;
	uint64_t x374 = 73678577787LLU;
	static int16_t x375 = -127;
	int16_t x376 = INT16_MIN;
	volatile uint64_t t58 = 147631601701LLU;

	t58 = ((x373-x374)%(x375&x376));

	if (t58 != 18446744000030973839LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x377 = 1U;
	uint16_t x378 = 15600U;
	uint64_t x379 = 7711711140059986064LLU;
	uint16_t x380 = UINT16_MAX;
	volatile uint64_t t59 = 2LLU;

	t59 = ((x377-x378)%(x379&x380));

	if (t59 != 24737LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x382 = -1LL;
	int32_t x383 = INT32_MIN;
	volatile int64_t x384 = -858LL;
	uint64_t t60 = 8384132132982LLU;

	t60 = ((x381-x382)%(x383&x384));

	if (t60 != 4995LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x386 = UINT16_MAX;
	int16_t x387 = 68;
	static int64_t x388 = -1LL;
	volatile int64_t t61 = -272231285LL;

	t61 = ((x385-x386)%(x387&x388));

	if (t61 != -11LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x389 = INT8_MIN;
	int32_t x390 = -1;
	static int32_t x392 = -11;
	int32_t t62 = 5987907;

	t62 = ((x389-x390)%(x391&x392));

	if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x393 = UINT8_MAX;
	int64_t x394 = -1LL;
	volatile int64_t x395 = INT64_MIN;
	int32_t x396 = INT32_MIN;

	t63 = ((x393-x394)%(x395&x396));

	if (t63 != 256LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x401 = 2053813720202LLU;
	int8_t x402 = INT8_MAX;
	int32_t x404 = -1;

	t64 = ((x401-x402)%(x403&x404));

	if (t64 != 2053813720075LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x406 = 118808796162179LLU;
	int64_t x407 = INT64_MIN;
	static int64_t x408 = INT64_MIN;
	uint64_t t65 = 2180LLU;

	t65 = ((x405-x406)%(x407&x408));

	if (t65 != 9223253228058613628LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x413 = 3U;
	static volatile int16_t x414 = INT16_MIN;
	uint16_t x415 = UINT16_MAX;
	int32_t x416 = -1;
	volatile int32_t t66 = 1;

	t66 = ((x413-x414)%(x415&x416));

	if (t66 != 32771) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x422 = -535028720493LL;
	volatile int16_t x423 = -1;
	int64_t x424 = 2663LL;
	volatile int64_t t67 = 8345394415816060LL;

	t67 = ((x421-x422)%(x423&x424));

	if (t67 != 1838LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x426 = -11;
	int16_t x427 = INT16_MAX;
	volatile int64_t x428 = -3017037326198LL;
	volatile int64_t t68 = -8LL;

	t68 = ((x425-x426)%(x427&x428));

	if (t68 != 30LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x430 = 95U;
	int64_t x431 = INT64_MIN;
	int16_t x432 = -19;
	int64_t t69 = -1664093LL;

	t69 = ((x429-x430)%(x431&x432));

	if (t69 != -2093076LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x433 = 25;
	int8_t x434 = -1;
	int32_t x435 = INT32_MIN;
	volatile int32_t x436 = -355;
	int32_t t70 = -2631;

	t70 = ((x433-x434)%(x435&x436));

	if (t70 != 26) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x441 = -1;
	uint8_t x442 = UINT8_MAX;
	uint64_t x443 = 12929325864LLU;
	int32_t x444 = -1;
	static volatile uint64_t t71 = 1402526342436326LLU;

	t71 = ((x441-x442)%(x443&x444));

	if (t71 != 8189744232LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x446 = 117365007;
	int8_t x447 = -1;
	static volatile uint8_t x448 = UINT8_MAX;
	int32_t t72 = 31648037;

	t72 = ((x445-x446)%(x447&x448));

	if (t72 != -247) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x449 = 509678LLU;
	volatile int64_t x450 = 413797708520LL;
	int16_t x451 = -507;
	int64_t x452 = 6679LL;
	volatile uint64_t t73 = 44LLU;

	t73 = ((x449-x450)%(x451&x452));

	if (t73 != 3182LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x453 = 24U;
	int64_t x454 = -3516LL;
	uint8_t x455 = 72U;
	int8_t x456 = -21;
	volatile int64_t t74 = -153239LL;

	t74 = ((x453-x454)%(x455&x456));

	if (t74 != 12LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x457 = -1LL;
	uint16_t x458 = 1190U;
	static int8_t x459 = -7;
	volatile int64_t t75 = 13286541911487874LL;

	t75 = ((x457-x458)%(x459&x460));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x461 = UINT8_MAX;
	uint8_t x462 = 111U;
	uint16_t x463 = 3965U;
	static uint16_t x464 = UINT16_MAX;
	int32_t t76 = -1;

	t76 = ((x461-x462)%(x463&x464));

	if (t76 != 144) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x466 = 14000;
	volatile int32_t x467 = INT32_MIN;
	static int8_t x468 = INT8_MIN;
	volatile uint64_t t77 = 1782141753022223487LLU;

	t77 = ((x465-x466)%(x467&x468));

	if (t77 != 822650LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x469 = INT16_MAX;
	int64_t x470 = INT64_MAX;
	volatile int8_t x472 = -1;

	t78 = ((x469-x470)%(x471&x472));

	if (t78 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x473 = INT16_MIN;
	int64_t x475 = -1618LL;
	static volatile int16_t x476 = -1;

	t79 = ((x473-x474)%(x475&x476));

	if (t79 != -407LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x478 = INT32_MIN;
	int64_t x479 = -1798273LL;
	static uint8_t x480 = UINT8_MAX;
	static int64_t t80 = 1706032054023LL;

	t80 = ((x477-x478)%(x479&x480));

	if (t80 != 69LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x481 = 8U;
	static int8_t x482 = 1;
	static int32_t x483 = INT32_MIN;
	int32_t x484 = -1800;
	int32_t t81 = -6417650;

	t81 = ((x481-x482)%(x483&x484));

	if (t81 != 7) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x486 = -1LL;
	int8_t x487 = -1;
	uint16_t x488 = 2361U;
	volatile int64_t t82 = 611597LL;

	t82 = ((x485-x486)%(x487&x488));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x493 = 98777512;
	int16_t x494 = INT16_MAX;
	volatile uint8_t x495 = 89U;
	static uint8_t x496 = UINT8_MAX;
	static volatile int32_t t83 = 1683;

	t83 = ((x493-x494)%(x495&x496));

	if (t83 != 46) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x501 = INT32_MIN;
	uint32_t x502 = 0U;
	int64_t x503 = -194716565900888060LL;
	int32_t x504 = -1;
	volatile int64_t t84 = -53416023LL;

	t84 = ((x501-x502)%(x503&x504));

	if (t84 != 2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x513 = -1;
	int32_t x514 = INT32_MIN;
	uint32_t x515 = 3U;
	int8_t x516 = INT8_MAX;
	uint32_t t85 = 4U;

	t85 = ((x513-x514)%(x515&x516));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x517 = INT16_MAX;
	volatile uint32_t x518 = 19U;
	uint8_t x519 = 23U;
	static uint8_t x520 = 56U;
	uint32_t t86 = 1341529U;

	t86 = ((x517-x518)%(x519&x520));

	if (t86 != 12U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x530 = -33670995;
	int32_t x531 = -810;
	int64_t x532 = INT64_MIN;

	t87 = ((x529-x530)%(x531&x532));

	if (t87 != -9223372036821104813LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x533 = -1;
	int16_t x534 = -1;
	int16_t x535 = -1;
	static int16_t x536 = INT16_MIN;
	volatile int32_t t88 = 1;

	t88 = ((x533-x534)%(x535&x536));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x537 = -1;
	uint32_t x538 = 6U;
	static volatile uint64_t x539 = UINT64_MAX;
	int64_t x540 = -2500LL;
	static uint64_t t89 = 75580271LLU;

	t89 = ((x537-x538)%(x539&x540));

	if (t89 != 4294967289LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x541 = 1959886019710LLU;
	static volatile uint64_t x542 = 1536858589953603LLU;
	int16_t x544 = INT16_MAX;
	static volatile uint64_t t90 = 61772LLU;

	t90 = ((x541-x542)%(x543&x544));

	if (t90 != 2388LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x549 = INT32_MIN;
	int8_t x551 = INT8_MAX;
	static uint64_t x552 = 477020LLU;
	static uint64_t t91 = 1LLU;

	t91 = ((x549-x550)%(x551&x552));

	if (t91 != 16LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x553 = 26245;
	int64_t x554 = 1LL;
	int32_t x555 = INT32_MIN;
	int64_t x556 = INT64_MIN;
	int64_t t92 = 141974108LL;

	t92 = ((x553-x554)%(x555&x556));

	if (t92 != 26244LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x557 = 0U;
	int64_t x559 = INT64_MAX;
	volatile int32_t x560 = -3284;
	volatile uint64_t t93 = 2104234424603526LLU;

	t93 = ((x557-x558)%(x559&x560));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x561 = -1;
	int8_t x562 = 0;
	uint32_t x563 = UINT32_MAX;
	int32_t x564 = -1;
	volatile uint32_t t94 = 108U;

	t94 = ((x561-x562)%(x563&x564));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x566 = INT32_MAX;
	int64_t x567 = -1LL;
	static uint64_t x568 = 8766523209348LLU;
	uint64_t t95 = 4031181830855LLU;

	t95 = ((x565-x566)%(x567&x568));

	if (t95 != 6771371772668LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x573 = INT16_MIN;
	static uint64_t x574 = 791636357979099418LLU;
	int8_t x575 = INT8_MAX;
	volatile uint64_t t96 = 1081708180967335LLU;

	t96 = ((x573-x574)%(x575&x576));

	if (t96 != 2LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x577 = INT8_MIN;
	int64_t x578 = -1LL;
	int64_t x579 = INT64_MIN;
	int64_t x580 = -1LL;
	volatile int64_t t97 = 864LL;

	t97 = ((x577-x578)%(x579&x580));

	if (t97 != -127LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x581 = -123146810896558171LL;
	static int8_t x582 = -1;
	int8_t x584 = -1;
	volatile int64_t t98 = 12178456LL;

	t98 = ((x581-x582)%(x583&x584));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x585 = 104895;
	uint16_t x587 = UINT16_MAX;
	static int64_t x588 = -20551LL;

	t99 = ((x585-x586)%(x587&x588));

	if (t99 != 2708LL) { NG(); } else { ; }
	
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

