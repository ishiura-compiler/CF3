#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = UINT16_MAX;
static volatile int64_t x4 = -1LL;
static int16_t x6 = INT16_MAX;
int64_t x7 = -97LL;
int8_t x9 = -1;
volatile uint32_t t2 = 9941U;
int8_t x15 = INT8_MIN;
int8_t x16 = -12;
uint64_t x22 = 7128885874229803LLU;
static int64_t x23 = INT64_MIN;
int32_t x26 = INT32_MIN;
static int32_t x27 = INT32_MIN;
int32_t t7 = -29;
int32_t x33 = INT32_MAX;
int32_t x38 = INT32_MIN;
static int8_t x39 = INT8_MIN;
static uint64_t t11 = 8317350862446LLU;
int32_t x49 = -1;
int32_t x51 = -1;
int8_t x52 = INT8_MAX;
uint64_t x56 = UINT64_MAX;
volatile uint64_t t14 = 2709185902540LLU;
static int16_t x65 = INT16_MIN;
int16_t x67 = -1;
int8_t x68 = INT8_MIN;
int64_t t18 = 27999LL;
volatile uint16_t x77 = UINT16_MAX;
int32_t x80 = INT32_MAX;
int16_t x83 = -1;
int32_t x86 = -74;
uint64_t x87 = 9042LLU;
uint16_t x88 = UINT16_MAX;
volatile int16_t x90 = -1;
int32_t x95 = INT32_MIN;
uint64_t x97 = 81060979LLU;
int8_t x98 = INT8_MAX;
int64_t x110 = 20491LL;
static uint16_t x115 = UINT16_MAX;
volatile int8_t x121 = INT8_MAX;
uint32_t x133 = 86U;
volatile int64_t x134 = -1LL;
volatile uint32_t x160 = UINT32_MAX;
uint16_t x163 = 222U;
uint64_t x164 = UINT64_MAX;
static int16_t x165 = -1;
static uint64_t x166 = UINT64_MAX;
int32_t x169 = INT32_MIN;
uint16_t x172 = 0U;
static int32_t t41 = -46;
int8_t x189 = INT8_MAX;
uint8_t x190 = UINT8_MAX;
int16_t x194 = INT16_MAX;
static uint32_t x206 = 235549U;
uint8_t x211 = UINT8_MAX;
volatile int8_t x214 = 1;
int32_t t51 = 62898;
uint32_t x217 = UINT32_MAX;
int8_t x218 = INT8_MAX;
int16_t x219 = 910;
volatile int64_t x221 = -1LL;
uint8_t x222 = 60U;
volatile uint64_t t54 = 605101108071279940LLU;
volatile int16_t x238 = -1;
uint32_t x240 = 1U;
static uint32_t t57 = UINT32_MAX;
volatile int32_t x241 = -427019813;
static uint32_t x246 = 100193286U;
int8_t x250 = 1;
int16_t x265 = 123;
int64_t x269 = -25980582713LL;
volatile uint64_t t65 = 12992625271LLU;
int64_t x273 = -162624507LL;
uint8_t x277 = UINT8_MAX;
volatile uint32_t t67 = 1601598522U;
static int64_t x286 = INT64_MIN;
static uint8_t x292 = UINT8_MAX;
int16_t x296 = INT16_MIN;
int32_t t71 = 0;
static int32_t x319 = -1;
volatile uint32_t x323 = UINT32_MAX;
int64_t x324 = -4936887168LL;
static int16_t x328 = -16090;
volatile int32_t t79 = -3762670;
volatile uint64_t t80 = 1942302698010LLU;
static volatile int64_t x337 = -875478418286416624LL;
uint8_t x346 = 90U;
int8_t x348 = INT8_MAX;
static volatile int32_t x354 = INT32_MAX;
int8_t x357 = 2;
int32_t t87 = -229714436;
uint64_t x361 = UINT64_MAX;
int64_t x362 = INT64_MIN;
uint64_t x363 = 683LLU;
static uint64_t t88 = 6542400LLU;
uint16_t x383 = 14U;
int16_t x385 = INT16_MIN;
static volatile int32_t x388 = -1;
int16_t x398 = 0;
int64_t x400 = INT64_MIN;
int32_t x406 = -15368;
int16_t x407 = INT16_MIN;
uint8_t x408 = UINT8_MAX;
static volatile int64_t t99 = 3573648LL;


void f0(void) {
	static uint32_t x1 = 6612U;
	static volatile int16_t x2 = 9716;
	int64_t t0 = 205530274818LL;

	t0 = (x1/((x2<=x3)^x4));

	if (t0 != -3306LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 1020LL;

	t1 = (x5/((x6<=x7)^x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 22;
	int16_t x11 = INT16_MAX;
	uint32_t x12 = 10998U;

	t2 = (x9/((x10<=x11)^x12));

	if (t2 != 390487U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint8_t x14 = 4U;
	volatile int32_t t3 = 50748697;

	t3 = (x13/((x14<=x15)^x16));

	if (t3 != -5461) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 42631U;
	volatile int32_t x18 = 1044701;
	static uint32_t x19 = UINT32_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = -46LL;

	t4 = (x17/((x18<=x19)^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int8_t x24 = INT8_MIN;
	volatile uint64_t t5 = 269LLU;

	t5 = (x21/((x22<=x23)^x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	volatile int16_t x28 = -1;
	int32_t t6 = -44616277;

	t6 = (x25/((x26<=x27)^x28));

	if (t6 != -1073741823) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 2U;
	int64_t x30 = INT64_MIN;
	static int8_t x31 = -1;
	static int16_t x32 = -1;

	t7 = (x29/((x30<=x31)^x32));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	uint32_t x35 = 1499746927U;
	int64_t x36 = 1799960340437LL;
	volatile int64_t t8 = -2034LL;

	t8 = (x33/((x34<=x35)^x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int16_t x40 = 9;
	int32_t t9 = 140963751;

	t9 = (x37/((x38<=x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 311;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MAX;
	int32_t x44 = INT32_MAX;
	int32_t t10 = -73356758;

	t10 = (x41/((x42<=x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 3101994579LLU;
	uint32_t x46 = UINT32_MAX;
	static uint16_t x47 = 9401U;
	volatile int32_t x48 = -1;

	t11 = (x45/((x46<=x47)^x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -6153LL;
	int32_t t12 = 26;

	t12 = (x49/((x50<=x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 27466U;
	int64_t x55 = INT64_MIN;
	volatile uint64_t t13 = 3556170916242LLU;

	t13 = (x53/((x54<=x55)^x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 663290LLU;
	uint64_t x58 = 11305622LLU;
	int16_t x59 = INT16_MIN;
	static uint16_t x60 = 256U;

	t14 = (x57/((x58<=x59)^x60));

	if (t14 != 2580LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	int8_t x63 = -1;
	int64_t x64 = INT64_MAX;
	int64_t t15 = 556195458175LL;

	t15 = (x61/((x62<=x63)^x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 214558465624271LLU;
	volatile int32_t t16 = -484;

	t16 = (x65/((x66<=x67)^x68));

	if (t16 != 258) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	static uint64_t x70 = 3805368LLU;
	volatile int64_t x71 = INT64_MIN;
	int64_t x72 = INT64_MAX;
	volatile int64_t t17 = -317102780497039903LL;

	t17 = (x69/((x70<=x71)^x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MIN;
	static int16_t x75 = -1;
	volatile int64_t x76 = 1875341238268583LL;

	t18 = (x73/((x74<=x75)^x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x78 = INT64_MIN;
	static uint32_t x79 = UINT32_MAX;
	volatile int32_t t19 = 199;

	t19 = (x77/((x78<=x79)^x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int16_t x82 = -16;
	int32_t x84 = -1;
	int32_t t20 = -875;

	t20 = (x81/((x82<=x83)^x84));

	if (t20 != 1073741824) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 15790U;
	volatile uint32_t t21 = 252980U;

	t21 = (x85/((x86<=x87)^x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 2U;
	int64_t x91 = INT64_MIN;
	int32_t x92 = 78833;
	volatile int32_t t22 = -129491456;

	t22 = (x89/((x90<=x91)^x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	volatile int64_t x94 = INT64_MAX;
	int64_t x96 = INT64_MIN;
	int64_t t23 = -206312LL;

	t23 = (x93/((x94<=x95)^x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x99 = -1;
	static uint32_t x100 = UINT32_MAX;
	volatile uint64_t t24 = 51069225080324555LLU;

	t24 = (x97/((x98<=x99)^x100));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 7U;
	uint8_t x102 = UINT8_MAX;
	int8_t x103 = INT8_MIN;
	static int32_t x104 = INT32_MAX;
	static uint32_t t25 = 1232860728U;

	t25 = (x101/((x102<=x103)^x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -521691235722195LL;
	int16_t x106 = INT16_MIN;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = INT16_MIN;
	int64_t t26 = -23164797LL;

	t26 = (x105/((x106<=x107)^x108));

	if (t26 != 15921238920LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 605;
	int16_t x111 = 65;
	static int16_t x112 = -1;
	int32_t t27 = -1030693;

	t27 = (x109/((x110<=x111)^x112));

	if (t27 != -605) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 29;
	static int64_t x114 = -12632815243LL;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = -2;

	t28 = (x113/((x114<=x115)^x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	volatile int16_t x118 = INT16_MIN;
	int32_t x119 = -543602;
	int32_t x120 = 1157550;
	volatile int64_t t29 = 131792700047034LL;

	t29 = (x117/((x118<=x119)^x120));

	if (t29 != -7968011780791LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = -1;
	static uint32_t x123 = 533755726U;
	static volatile int16_t x124 = INT16_MAX;
	static volatile int32_t t30 = -4;

	t30 = (x121/((x122<=x123)^x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 7307900450873LL;
	static int8_t x126 = INT8_MIN;
	static int32_t x127 = 358347;
	int16_t x128 = -1;
	volatile int64_t t31 = -639690874216885016LL;

	t31 = (x125/((x126<=x127)^x128));

	if (t31 != -3653950225436LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = -1;
	volatile int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MIN;
	static int64_t t32 = 206729114028233LL;

	t32 = (x129/((x130<=x131)^x132));

	if (t32 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x135 = 112U;
	int32_t x136 = INT32_MAX;
	volatile uint32_t t33 = 479824918U;

	t33 = (x133/((x134<=x135)^x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 4949U;
	int16_t x138 = 146;
	volatile uint16_t x139 = 15U;
	static int64_t x140 = INT64_MAX;
	int64_t t34 = 66162158747LL;

	t34 = (x137/((x138<=x139)^x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 1264307U;
	volatile uint8_t x142 = UINT8_MAX;
	uint8_t x143 = 3U;
	uint16_t x144 = 471U;
	uint32_t t35 = 1307U;

	t35 = (x141/((x142<=x143)^x144));

	if (t35 != 2684U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x149 = INT64_MIN;
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = -1LL;
	volatile int64_t t36 = 511033150712189LL;

	t36 = (x149/((x150<=x151)^x152));

	if (t36 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = INT64_MAX;
	uint8_t x158 = UINT8_MAX;
	volatile int8_t x159 = 0;
	int64_t t37 = 128839899450502LL;

	t37 = (x157/((x158<=x159)^x160));

	if (t37 != 2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MIN;
	uint8_t x162 = 31U;
	volatile uint64_t t38 = 2289253352540LLU;

	t38 = (x161/((x162<=x163)^x164));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x167 = UINT8_MAX;
	volatile int64_t x168 = 1408064721513381771LL;
	static int64_t t39 = 1414228952977LL;

	t39 = (x165/((x166<=x167)^x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x170 = UINT8_MAX;
	int16_t x171 = INT16_MAX;
	volatile int32_t t40 = INT32_MIN;

	t40 = (x169/((x170<=x171)^x172));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = -254;
	static int8_t x175 = INT8_MIN;
	volatile int32_t x176 = -1;

	t41 = (x173/((x174<=x175)^x176));

	if (t41 != 64) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	volatile uint16_t x178 = 1396U;
	int8_t x179 = 35;
	int8_t x180 = -1;
	volatile int32_t t42 = 19713;

	t42 = (x177/((x178<=x179)^x180));

	if (t42 != 32768) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 212U;
	int32_t x183 = INT32_MIN;
	static uint16_t x184 = UINT16_MAX;
	volatile int32_t t43 = -3996565;

	t43 = (x181/((x182<=x183)^x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	static int64_t x187 = INT64_MIN;
	volatile int64_t x188 = 16LL;
	int64_t t44 = -14898652405920LL;

	t44 = (x185/((x186<=x187)^x188));

	if (t44 != 268435455LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x191 = 75;
	int16_t x192 = 1;
	int32_t t45 = -7468863;

	t45 = (x189/((x190<=x191)^x192));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = -805601002;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	static int32_t t46 = 20493178;

	t46 = (x193/((x194<=x195)^x196));

	if (t46 != 6293757) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	uint16_t x198 = 2U;
	int32_t x199 = 9300;
	int16_t x200 = INT16_MIN;
	int32_t t47 = -5401;

	t47 = (x197/((x198<=x199)^x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = 1;
	int16_t x203 = -1;
	int8_t x204 = INT8_MIN;
	int32_t t48 = -2;

	t48 = (x201/((x202<=x203)^x204));

	if (t48 != 256) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x205 = INT64_MAX;
	static int64_t x207 = -1LL;
	int16_t x208 = INT16_MIN;
	static int64_t t49 = 7294443217588875LL;

	t49 = (x205/((x206<=x207)^x208));

	if (t49 != -281474976710655LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -1676585;
	int16_t x210 = 0;
	uint64_t x212 = 8371LLU;
	static uint64_t t50 = 2459LLU;

	t50 = (x209/((x210<=x211)^x212));

	if (t50 != 2203912075711813LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x213 = 11270;
	static uint64_t x215 = 0LLU;
	int16_t x216 = 1;

	t51 = (x213/((x214<=x215)^x216));

	if (t51 != 11270) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x220 = INT16_MAX;
	volatile uint32_t t52 = 142033U;

	t52 = (x217/((x218<=x219)^x220));

	if (t52 != 131080U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x223 = 49U;
	static volatile uint16_t x224 = UINT16_MAX;
	volatile int64_t t53 = 2523621157LL;

	t53 = (x221/((x222<=x223)^x224));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 8045U;
	uint32_t x226 = 896U;
	volatile uint16_t x227 = 335U;
	volatile uint64_t x228 = UINT64_MAX;

	t54 = (x225/((x226<=x227)^x228));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = 30;
	static int16_t x230 = 6;
	int32_t x231 = -1;
	static uint64_t x232 = 1LLU;
	volatile uint64_t t55 = 43697829967821LLU;

	t55 = (x229/((x230<=x231)^x232));

	if (t55 != 30LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x233 = 5U;
	uint16_t x234 = UINT16_MAX;
	int32_t x235 = -3753727;
	uint64_t x236 = 11469428362110243LLU;
	uint64_t t56 = 3862880211LLU;

	t56 = (x233/((x234<=x235)^x236));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = -1;
	int8_t x239 = INT8_MIN;

	t57 = (x237/((x238<=x239)^x240));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x242 = 13991471U;
	int8_t x243 = INT8_MAX;
	static uint64_t x244 = 136679115LLU;
	uint64_t t58 = 971139722543LLU;

	t58 = (x241/((x242<=x243)^x244));

	if (t58 != 134963882911LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = -8;
	static int16_t x247 = INT16_MIN;
	static int64_t x248 = -115073LL;
	volatile int64_t t59 = 182551762496LL;

	t59 = (x245/((x246<=x247)^x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = -98LL;
	volatile int64_t x251 = INT64_MIN;
	int8_t x252 = INT8_MIN;
	volatile int64_t t60 = 3245989660LL;

	t60 = (x249/((x250<=x251)^x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = INT64_MIN;
	int64_t x254 = -67453268628637032LL;
	int32_t x255 = INT32_MIN;
	uint64_t x256 = UINT64_MAX;
	uint64_t t61 = 62912148LLU;

	t61 = (x253/((x254<=x255)^x256));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = 10;
	static volatile int16_t x258 = INT16_MIN;
	int8_t x259 = 62;
	volatile uint32_t x260 = 43396U;
	volatile uint32_t t62 = 20882839U;

	t62 = (x257/((x258<=x259)^x260));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = INT8_MAX;
	static volatile int8_t x262 = INT8_MIN;
	volatile int32_t x263 = INT32_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t63 = -756;

	t63 = (x261/((x262<=x263)^x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x266 = 3400U;
	volatile int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t64 = -439344;

	t64 = (x265/((x266<=x267)^x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x270 = INT32_MAX;
	static int16_t x271 = INT16_MIN;
	static uint64_t x272 = 495745461LLU;

	t65 = (x269/((x270<=x271)^x272));

	if (t65 != 37210111839LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x274 = 16LLU;
	int32_t x275 = -5288;
	static int16_t x276 = INT16_MAX;
	static int64_t t66 = -217434825LL;

	t66 = (x273/((x274<=x275)^x276));

	if (t66 != -4963LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x278 = UINT16_MAX;
	int8_t x279 = INT8_MIN;
	static volatile uint32_t x280 = UINT32_MAX;

	t67 = (x277/((x278<=x279)^x280));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = -6944LL;
	uint32_t x282 = 6880632U;
	int16_t x283 = 0;
	int8_t x284 = INT8_MAX;
	int64_t t68 = 1208177632915220LL;

	t68 = (x281/((x282<=x283)^x284));

	if (t68 != -54LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = -1;
	int8_t x287 = INT8_MIN;
	int8_t x288 = -31;
	int32_t t69 = -2;

	t69 = (x285/((x286<=x287)^x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = 1;
	int16_t x290 = -62;
	static int64_t x291 = INT64_MIN;
	volatile int32_t t70 = 21974;

	t70 = (x289/((x290<=x291)^x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 2U;
	uint32_t x294 = 16U;
	int16_t x295 = INT16_MIN;

	t71 = (x293/((x294<=x295)^x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x297 = INT16_MAX;
	uint16_t x298 = 11285U;
	int16_t x299 = -1;
	static int64_t x300 = -5030138138935007LL;
	int64_t t72 = 134674907476352617LL;

	t72 = (x297/((x298<=x299)^x300));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x301 = 24LL;
	uint16_t x302 = 1U;
	uint8_t x303 = 27U;
	uint16_t x304 = 3U;
	int64_t t73 = 1989611750LL;

	t73 = (x301/((x302<=x303)^x304));

	if (t73 != 12LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 24035U;
	uint8_t x307 = UINT8_MAX;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t74 = 34719;

	t74 = (x305/((x306<=x307)^x308));

	if (t74 != -511) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 92U;
	uint8_t x310 = 0U;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	volatile int32_t t75 = 55993;

	t75 = (x309/((x310<=x311)^x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x313 = 5461U;
	int16_t x314 = INT16_MIN;
	static int16_t x315 = -1;
	int32_t x316 = -1;
	int32_t t76 = 24682809;

	t76 = (x313/((x314<=x315)^x316));

	if (t76 != -2730) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = 0U;
	volatile int64_t x318 = INT64_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t77 = 1997LLU;

	t77 = (x317/((x318<=x319)^x320));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = INT32_MIN;
	uint32_t x322 = 51994U;
	static volatile int64_t t78 = 19184LL;

	t78 = (x321/((x322<=x323)^x324));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	static int8_t x326 = INT8_MIN;
	static int16_t x327 = 6;

	t79 = (x325/((x326<=x327)^x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 236LLU;
	uint32_t x330 = 111295U;
	int64_t x331 = -1LL;
	int16_t x332 = INT16_MAX;

	t80 = (x329/((x330<=x331)^x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MAX;
	int8_t x334 = -18;
	volatile uint16_t x335 = UINT16_MAX;
	static int16_t x336 = 121;
	volatile int32_t t81 = -5;

	t81 = (x333/((x334<=x335)^x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x338 = -1;
	int16_t x339 = 6;
	volatile uint32_t x340 = 723626739U;
	int64_t t82 = -227842719LL;

	t82 = (x337/((x338<=x339)^x340));

	if (t82 != -1209848078LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MAX;
	uint32_t x344 = 160718U;
	volatile int64_t t83 = 7856467213LL;

	t83 = (x341/((x342<=x343)^x344));

	if (t83 != -57388187064720LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x345 = INT32_MIN;
	uint64_t x347 = 1427LLU;
	volatile int32_t t84 = 13559;

	t84 = (x345/((x346<=x347)^x348));

	if (t84 != -17043521) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x349 = INT16_MAX;
	uint64_t x350 = UINT64_MAX;
	volatile uint32_t x351 = UINT32_MAX;
	uint64_t x352 = 39618660436782972LLU;
	volatile uint64_t t85 = 1161066282029858371LLU;

	t85 = (x349/((x350<=x351)^x352));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x353 = 2U;
	static int32_t x355 = -2761307;
	int8_t x356 = INT8_MIN;
	uint32_t t86 = 223U;

	t86 = (x353/((x354<=x355)^x356));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x358 = UINT8_MAX;
	int64_t x359 = 1LL;
	static int16_t x360 = 488;

	t87 = (x357/((x358<=x359)^x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x364 = 8238U;

	t88 = (x361/((x362<=x363)^x364));

	if (t88 != 2239226034681907LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x365 = 139U;
	volatile uint32_t x366 = 122902U;
	int16_t x367 = -76;
	uint16_t x368 = 0U;
	static volatile int32_t t89 = 214862335;

	t89 = (x365/((x366<=x367)^x368));

	if (t89 != 139) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = -1;
	uint64_t x370 = 2152116955528861086LLU;
	volatile int8_t x371 = 1;
	uint32_t x372 = UINT32_MAX;
	static volatile uint32_t t90 = 286810936U;

	t90 = (x369/((x370<=x371)^x372));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x373 = 2035U;
	static volatile int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = 7LLU;
	volatile uint64_t t91 = 3807LLU;

	t91 = (x373/((x374<=x375)^x376));

	if (t91 != 290LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x377 = 1055466891U;
	uint32_t x378 = 0U;
	uint8_t x379 = 0U;
	int32_t x380 = -1;
	uint32_t t92 = 14885237U;

	t92 = (x377/((x378<=x379)^x380));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x381 = INT8_MIN;
	int8_t x382 = -29;
	int64_t x384 = INT64_MIN;
	static int64_t t93 = -139198782965142356LL;

	t93 = (x381/((x382<=x383)^x384));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x386 = 13U;
	volatile int8_t x387 = -9;
	int32_t t94 = 118182;

	t94 = (x385/((x386<=x387)^x388));

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x389 = 453U;
	volatile int16_t x390 = 197;
	int16_t x391 = -3485;
	int16_t x392 = INT16_MAX;
	volatile int32_t t95 = 0;

	t95 = (x389/((x390<=x391)^x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x397 = 433537686LLU;
	volatile int16_t x399 = INT16_MIN;
	volatile uint64_t t96 = 11496LLU;

	t96 = (x397/((x398<=x399)^x400));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x401 = INT32_MIN;
	int16_t x402 = -8;
	int64_t x403 = INT64_MIN;
	volatile uint16_t x404 = 29887U;
	int32_t t97 = -670010;

	t97 = (x401/((x402<=x403)^x404));

	if (t97 != -71853) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 492U;
	static volatile uint32_t t98 = 94888U;

	t98 = (x405/((x406<=x407)^x408));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = -1LL;
	uint8_t x410 = 55U;
	int32_t x411 = 117;
	uint8_t x412 = UINT8_MAX;

	t99 = (x409/((x410<=x411)^x412));

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
