#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -150709;
uint64_t x6 = UINT64_MAX;
static uint64_t x9 = 6700681187LLU;
int64_t x13 = -24752840662824LL;
int8_t x15 = 50;
volatile uint64_t t4 = 322LLU;
static volatile int32_t x27 = INT32_MAX;
int32_t x49 = INT32_MIN;
volatile int8_t x50 = -46;
static volatile int32_t x52 = INT32_MIN;
int64_t t10 = 4208LL;
volatile uint32_t x54 = 20804842U;
uint16_t x58 = UINT16_MAX;
static volatile int16_t x65 = -1;
static int16_t x70 = -1;
int64_t x71 = INT64_MIN;
int32_t t16 = -8405789;
int8_t x83 = -1;
int32_t x90 = INT32_MAX;
volatile uint64_t t20 = 47446902479LLU;
static int8_t x98 = INT8_MIN;
uint16_t x99 = UINT16_MAX;
uint8_t x102 = UINT8_MAX;
int16_t x110 = INT16_MAX;
int32_t x112 = -14101;
volatile int64_t x117 = -58LL;
static int32_t x119 = INT32_MIN;
int8_t x122 = INT8_MIN;
int32_t x124 = INT32_MAX;
int32_t t27 = -48;
static int64_t x125 = INT64_MIN;
int32_t x126 = INT32_MAX;
static uint32_t x140 = 582107855U;
uint64_t t30 = 1739428628095569510LLU;
volatile uint16_t x149 = 1633U;
static uint32_t x153 = UINT32_MAX;
static uint64_t x155 = 416018019173359LLU;
int64_t x156 = INT64_MAX;
volatile uint64_t t34 = 901292657486285771LLU;
uint8_t x162 = UINT8_MAX;
static volatile int16_t x166 = 1;
static int16_t x168 = -1;
volatile uint32_t x171 = 99U;
uint64_t x177 = 5LLU;
volatile int64_t x179 = -1093817099810LL;
static uint64_t t40 = 772LLU;
int64_t x183 = -86477809LL;
int32_t x185 = INT32_MIN;
static int8_t x193 = 2;
uint8_t x194 = 8U;
uint8_t x198 = 21U;
volatile int32_t x205 = -1;
int16_t x206 = -1;
int32_t x207 = INT32_MIN;
volatile int32_t x227 = 5;
int64_t x231 = 17942LL;
uint16_t x235 = UINT16_MAX;
int16_t x236 = INT16_MAX;
static int64_t x238 = INT64_MIN;
int16_t x251 = INT16_MIN;
static int64_t x254 = INT64_MIN;
volatile uint32_t t57 = 13318344U;
uint8_t x266 = UINT8_MAX;
int32_t x276 = -1;
static volatile int32_t t60 = -44674;
int16_t x278 = 1;
int32_t t62 = -557328;
volatile int8_t x287 = -1;
volatile uint8_t x291 = UINT8_MAX;
int32_t x297 = INT32_MIN;
volatile uint16_t x308 = UINT16_MAX;
int32_t x309 = -1;
int16_t x311 = -319;
volatile uint16_t x315 = 920U;
uint8_t x322 = UINT8_MAX;
int64_t x324 = -1LL;
int8_t x338 = INT8_MIN;
int32_t x340 = INT32_MAX;
int8_t x345 = -1;
int8_t x348 = INT8_MAX;
volatile int32_t t77 = -15;
int32_t x358 = 25751632;
uint32_t t80 = 7285153U;
static uint8_t x361 = 104U;
int16_t x367 = -1;
int64_t x368 = INT64_MIN;
int32_t x369 = INT32_MAX;
uint32_t x371 = 6595219U;
uint64_t x374 = 5LLU;
uint8_t x376 = 4U;
uint64_t t84 = 63LLU;
static uint64_t x383 = 854378850761249260LLU;
volatile int32_t x389 = 2996;
static uint16_t x390 = 1U;
uint8_t x406 = 94U;
uint16_t x414 = 2U;
int64_t x432 = -15403405134021436LL;
static int8_t x443 = -1;
uint64_t t98 = 1251292666326762LLU;


void f0(void) {
	int8_t x2 = INT8_MIN;
	volatile uint8_t x3 = UINT8_MAX;
	static uint32_t x4 = 487386U;
	volatile uint32_t t0 = 4411U;

	t0 = ((x1/x2)|(x3/x4));

	if (t0 != 1177U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MAX;
	uint64_t t1 = 26980208051732217LLU;

	t1 = ((x5/x6)|(x7/x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	int32_t x12 = INT32_MAX;
	volatile uint64_t t2 = 2016LLU;

	t2 = ((x9/x10)|(x11/x12));

	if (t2 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -14;
	int16_t x16 = INT16_MIN;
	volatile int64_t t3 = -79LL;

	t3 = ((x13/x14)|(x15/x16));

	if (t3 != 1768060047344LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	volatile int8_t x18 = 2;
	uint64_t x19 = UINT64_MAX;
	uint64_t x20 = UINT64_MAX;

	t4 = ((x17/x18)|(x19/x20));

	if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = 105723448;
	volatile int16_t x26 = -598;
	int32_t x28 = 267869378;
	volatile int32_t t5 = -1090970;

	t5 = ((x25/x26)|(x27/x28));

	if (t5 != -176787) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x29 = -54;
	static uint16_t x30 = 24059U;
	static int32_t x31 = INT32_MAX;
	uint16_t x32 = 87U;
	int32_t t6 = 382726;

	t6 = ((x29/x30)|(x31/x32));

	if (t6 != 24683720) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = UINT64_MAX;
	uint64_t x34 = UINT64_MAX;
	static uint64_t x35 = 1876612948753221LLU;
	static int64_t x36 = 222164983LL;
	volatile uint64_t t7 = 199194362294LLU;

	t7 = ((x33/x34)|(x35/x36));

	if (t7 != 8446935LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 558;
	volatile uint32_t x38 = 1043446U;
	uint64_t x39 = 89113201052LLU;
	uint32_t x40 = UINT32_MAX;
	uint64_t t8 = 120LLU;

	t8 = ((x37/x38)|(x39/x40));

	if (t8 != 20LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x41 = 0U;
	int64_t x42 = INT64_MAX;
	volatile int16_t x43 = INT16_MAX;
	static int16_t x44 = INT16_MAX;
	int64_t t9 = -8629991877907LL;

	t9 = ((x41/x42)|(x43/x44));

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x51 = INT64_MIN;

	t10 = ((x49/x50)|(x51/x52));

	if (t10 != 4341651723LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -196268497;
	volatile int64_t x55 = INT64_MIN;
	volatile int16_t x56 = INT16_MIN;
	volatile int64_t t11 = -88382936LL;

	t11 = ((x53/x54)|(x55/x56));

	if (t11 != 281474976710853LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = 14;
	int64_t x59 = -11LL;
	uint16_t x60 = 112U;
	volatile int64_t t12 = 1LL;

	t12 = ((x57/x58)|(x59/x60));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	static uint16_t x62 = UINT16_MAX;
	static volatile int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MIN;
	volatile int64_t t13 = -101204LL;

	t13 = ((x61/x62)|(x63/x64));

	if (t13 != -140739635871744LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x66 = 24;
	int16_t x67 = -6;
	volatile int16_t x68 = INT16_MIN;
	static int32_t t14 = 518;

	t14 = ((x65/x66)|(x67/x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = 4646340U;
	volatile int8_t x72 = INT8_MIN;
	volatile int64_t t15 = -344761LL;

	t15 = ((x69/x70)|(x71/x72));

	if (t15 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x73 = 3U;
	volatile int8_t x74 = INT8_MAX;
	volatile uint16_t x75 = 1U;
	int32_t x76 = -1;

	t16 = ((x73/x74)|(x75/x76));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -42;
	static int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	volatile int8_t x80 = 1;
	static volatile int32_t t17 = -3;

	t17 = ((x77/x78)|(x79/x80));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x81 = UINT64_MAX;
	uint8_t x82 = 9U;
	uint16_t x84 = 396U;
	volatile uint64_t t18 = 34292597725178763LLU;

	t18 = ((x81/x82)|(x83/x84));

	if (t18 != 2049638230412172401LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 341U;
	static uint64_t x91 = UINT64_MAX;
	uint16_t x92 = UINT16_MAX;
	volatile uint64_t t19 = 96457370023LLU;

	t19 = ((x89/x90)|(x91/x92));

	if (t19 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = 4762425;
	volatile uint32_t x94 = 95666975U;
	static uint64_t x95 = 1LLU;
	static int8_t x96 = INT8_MIN;

	t20 = ((x93/x94)|(x95/x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	uint32_t x100 = 580728U;
	uint32_t t21 = 276365U;

	t21 = ((x97/x98)|(x99/x100));

	if (t21 != 256U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x101 = 3U;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = UINT16_MAX;
	static int32_t t22 = 216;

	t22 = ((x101/x102)|(x103/x104));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x105 = 20U;
	uint32_t x106 = 480443558U;
	int32_t x107 = INT32_MIN;
	int32_t x108 = INT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = ((x105/x106)|(x107/x108));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 14U;
	static int16_t x111 = -2587;
	static int32_t t24 = 7617;

	t24 = ((x109/x110)|(x111/x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x113 = 5U;
	static uint32_t x114 = 2859U;
	static volatile uint16_t x115 = 8925U;
	int16_t x116 = INT16_MIN;
	volatile uint32_t t25 = 562U;

	t25 = ((x113/x114)|(x115/x116));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x118 = INT8_MIN;
	static uint16_t x120 = UINT16_MAX;
	int64_t t26 = -1681304829LL;

	t26 = ((x117/x118)|(x119/x120));

	if (t26 != -32768LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x121 = 1U;
	int8_t x123 = -7;

	t27 = ((x121/x122)|(x123/x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x127 = INT8_MAX;
	int16_t x128 = INT16_MIN;
	int64_t t28 = 461456LL;

	t28 = ((x125/x126)|(x127/x128));

	if (t28 != -4294967298LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MAX;
	static volatile int64_t x134 = 104747LL;
	static int16_t x135 = 2827;
	int16_t x136 = INT16_MAX;
	static int64_t t29 = 32466LL;

	t29 = ((x133/x134)|(x135/x136));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 357568302489290LLU;
	int16_t x138 = INT16_MIN;
	int16_t x139 = 0;

	t30 = ((x137/x138)|(x139/x140));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x141 = 766578372U;
	int8_t x142 = 3;
	static int8_t x143 = -1;
	static volatile int64_t x144 = -1LL;
	volatile int64_t t31 = 968LL;

	t31 = ((x141/x142)|(x143/x144));

	if (t31 != 255526125LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MAX;
	static uint8_t x147 = 114U;
	volatile int8_t x148 = -1;
	volatile int64_t t32 = -60216LL;

	t32 = ((x145/x146)|(x147/x148));

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x150 = 506479935108LLU;
	static int32_t x151 = INT32_MIN;
	static int8_t x152 = 16;
	uint64_t t33 = 50101LLU;

	t33 = ((x149/x150)|(x151/x152));

	if (t33 != 18446744073575333888LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x154 = -1;

	t34 = ((x153/x154)|(x155/x156));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = -1;
	int16_t x158 = -1;
	uint8_t x159 = 46U;
	static int64_t x160 = INT64_MIN;
	int64_t t35 = -6LL;

	t35 = ((x157/x158)|(x159/x160));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x161 = -89;
	int32_t x163 = 36834;
	int16_t x164 = INT16_MIN;
	int32_t t36 = 10;

	t36 = ((x161/x162)|(x163/x164));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MIN;
	int64_t x167 = 7672141LL;
	volatile int64_t t37 = 46319338LL;

	t37 = ((x165/x166)|(x167/x168));

	if (t37 != -7672141LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = INT16_MAX;
	int32_t x172 = INT32_MAX;
	volatile uint32_t t38 = 1U;

	t38 = ((x169/x170)|(x171/x172));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = UINT32_MAX;
	volatile int8_t x174 = -1;
	int32_t x175 = INT32_MAX;
	uint64_t x176 = 2927138337391597998LLU;
	static volatile uint64_t t39 = 25205LLU;

	t39 = ((x173/x174)|(x175/x176));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x178 = INT32_MIN;
	static int32_t x180 = -1;

	t40 = ((x177/x178)|(x179/x180));

	if (t40 != 1093817099810LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MAX;
	uint64_t x182 = UINT64_MAX;
	int32_t x184 = -44711;
	static uint64_t t41 = 28075154657LLU;

	t41 = ((x181/x182)|(x183/x184));

	if (t41 != 1934LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x186 = 419436LLU;
	int8_t x187 = 8;
	int8_t x188 = INT8_MIN;
	uint64_t t42 = 7354LLU;

	t42 = ((x185/x186)|(x187/x188));

	if (t42 != 43979877911199LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x195 = -47;
	uint64_t x196 = 1074LLU;
	volatile uint64_t t43 = 8941652LLU;

	t43 = ((x193/x194)|(x195/x196));

	if (t43 != 17175739360995858LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x197 = 15U;
	int64_t x199 = -1LL;
	uint64_t x200 = UINT64_MAX;
	uint64_t t44 = 796LLU;

	t44 = ((x197/x198)|(x199/x200));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = 814603;
	volatile int8_t x202 = -5;
	uint16_t x203 = 18U;
	volatile int8_t x204 = INT8_MIN;
	int32_t t45 = -15783892;

	t45 = ((x201/x202)|(x203/x204));

	if (t45 != -162920) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x208 = 42523U;
	uint32_t t46 = 104U;

	t46 = ((x205/x206)|(x207/x208));

	if (t46 != 50501U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x213 = 3U;
	int16_t x214 = -214;
	uint8_t x215 = 11U;
	int16_t x216 = INT16_MIN;
	int32_t t47 = -118;

	t47 = ((x213/x214)|(x215/x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MAX;
	int16_t x218 = INT16_MIN;
	uint64_t x219 = 56LLU;
	int16_t x220 = 34;
	uint64_t t48 = 408457055578622LLU;

	t48 = ((x217/x218)|(x219/x220));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = -46193561;
	uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	int32_t x224 = -288880170;
	uint64_t t49 = 18356LLU;

	t49 = ((x221/x222)|(x223/x224));

	if (t49 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x225 = INT32_MAX;
	int8_t x226 = -1;
	int16_t x228 = -1;
	int32_t t50 = -5;

	t50 = ((x225/x226)|(x227/x228));

	if (t50 != -5) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	int8_t x232 = -1;
	volatile int64_t t51 = -177323421500047906LL;

	t51 = ((x229/x230)|(x231/x232));

	if (t51 != -17942LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = INT64_MIN;
	volatile int64_t t52 = 431773LL;

	t52 = ((x233/x234)|(x235/x236));

	if (t52 != 3LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x237 = INT16_MIN;
	volatile int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MIN;
	static int64_t t53 = 0LL;

	t53 = ((x237/x238)|(x239/x240));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x241 = 1004LLU;
	static uint16_t x242 = UINT16_MAX;
	uint32_t x243 = 1988742844U;
	volatile int64_t x244 = INT64_MAX;
	volatile uint64_t t54 = 131138602637LLU;

	t54 = ((x241/x242)|(x243/x244));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x249 = 27U;
	uint8_t x250 = 9U;
	volatile int8_t x252 = INT8_MIN;
	static int32_t t55 = 239478129;

	t55 = ((x249/x250)|(x251/x252));

	if (t55 != 259) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x253 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int64_t t56 = -1350372619988LL;

	t56 = ((x253/x254)|(x255/x256));

	if (t56 != -32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 58546U;
	volatile int32_t x258 = -7866571;
	int32_t x259 = -1;
	int16_t x260 = INT16_MAX;

	t57 = ((x257/x258)|(x259/x260));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = UINT8_MAX;
	int32_t x262 = INT32_MIN;
	int16_t x263 = 4;
	uint8_t x264 = 78U;
	int32_t t58 = 294011;

	t58 = ((x261/x262)|(x263/x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = 229248394321853339LL;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;
	volatile int64_t t59 = 772104LL;

	t59 = ((x265/x266)|(x267/x268));

	if (t59 != 899013311066091LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = -3;
	static volatile uint8_t x274 = 41U;
	uint16_t x275 = UINT16_MAX;

	t60 = ((x273/x274)|(x275/x276));

	if (t60 != -65535) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint8_t x277 = 1U;
	static int8_t x279 = INT8_MAX;
	uint64_t x280 = 4408629558037285LLU;
	static volatile uint64_t t61 = 0LLU;

	t61 = ((x277/x278)|(x279/x280));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = 677;

	t62 = ((x281/x282)|(x283/x284));

	if (t62 != 96) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x285 = 9106;
	volatile uint64_t x286 = UINT64_MAX;
	int64_t x288 = 2570366124364731413LL;
	static uint64_t t63 = 125103LLU;

	t63 = ((x285/x286)|(x287/x288));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = 0;
	int16_t x290 = INT16_MIN;
	int64_t x292 = -1LL;
	static int64_t t64 = 1407442527885268234LL;

	t64 = ((x289/x290)|(x291/x292));

	if (t64 != -255LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x293 = INT64_MIN;
	int32_t x294 = INT32_MAX;
	int64_t x295 = -1998932045969LL;
	uint32_t x296 = 14109U;
	volatile int64_t t65 = 1481771977658735851LL;

	t65 = ((x293/x294)|(x295/x296));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x298 = UINT16_MAX;
	static int8_t x299 = INT8_MIN;
	volatile int64_t x300 = INT64_MIN;
	static volatile int64_t t66 = 0LL;

	t66 = ((x297/x298)|(x299/x300));

	if (t66 != -32768LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	static uint8_t x302 = UINT8_MAX;
	static int32_t x303 = INT32_MIN;
	static int64_t x304 = -1LL;
	volatile int64_t t67 = -6593341865285LL;

	t67 = ((x301/x302)|(x303/x304));

	if (t67 != 2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = -189;
	int32_t x307 = -1;
	volatile int32_t t68 = -3;

	t68 = ((x305/x306)|(x307/x308));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x310 = -1;
	static uint64_t x312 = 265LLU;
	uint64_t t69 = 8LLU;

	t69 = ((x309/x310)|(x311/x312));

	if (t69 != 69610354995130383LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x313 = -10908004LL;
	int64_t x314 = INT64_MIN;
	uint32_t x316 = 24245U;
	int64_t t70 = -4300LL;

	t70 = ((x313/x314)|(x315/x316));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x317 = 139LLU;
	int32_t x318 = INT32_MIN;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t71 = 6015155629194LLU;

	t71 = ((x317/x318)|(x319/x320));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = 13U;
	uint16_t x323 = UINT16_MAX;
	volatile int64_t t72 = -34672343453012135LL;

	t72 = ((x321/x322)|(x323/x324));

	if (t72 != -65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = INT64_MAX;
	static int32_t x326 = INT32_MIN;
	int32_t x327 = -2;
	static uint64_t x328 = UINT64_MAX;
	uint64_t t73 = 1233317LLU;

	t73 = ((x325/x326)|(x327/x328));

	if (t73 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = 1;
	int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MAX;
	static volatile int64_t x332 = 4782139793389LL;
	volatile int64_t t74 = -2515699030172901699LL;

	t74 = ((x329/x330)|(x331/x332));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = 12669;
	uint64_t x334 = UINT64_MAX;
	static int16_t x335 = -1;
	uint64_t x336 = 100495964245792LLU;
	uint64_t t75 = 425LLU;

	t75 = ((x333/x334)|(x335/x336));

	if (t75 != 183557LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x337 = UINT16_MAX;
	uint8_t x339 = UINT8_MAX;
	static int32_t t76 = 4574;

	t76 = ((x337/x338)|(x339/x340));

	if (t76 != -511) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x346 = INT32_MIN;
	int8_t x347 = -1;

	t77 = ((x345/x346)|(x347/x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = -1LL;
	int64_t x350 = INT64_MIN;
	int8_t x351 = INT8_MAX;
	static uint8_t x352 = 6U;
	volatile int64_t t78 = 2148655LL;

	t78 = ((x349/x350)|(x351/x352));

	if (t78 != 21LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MIN;
	uint16_t x355 = UINT16_MAX;
	static int64_t x356 = 358912LL;
	volatile int64_t t79 = -29167290648993LL;

	t79 = ((x353/x354)|(x355/x356));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x357 = UINT8_MAX;
	volatile uint32_t x359 = UINT32_MAX;
	volatile int32_t x360 = INT32_MIN;

	t80 = ((x357/x358)|(x359/x360));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x362 = INT8_MIN;
	static volatile int16_t x363 = -1;
	uint32_t x364 = 2497613U;
	uint32_t t81 = 15U;

	t81 = ((x361/x362)|(x363/x364));

	if (t81 != 1719U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x365 = 12978LL;
	int64_t x366 = INT64_MAX;
	volatile int64_t t82 = 16534929LL;

	t82 = ((x365/x366)|(x367/x368));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x370 = UINT64_MAX;
	int64_t x372 = INT64_MAX;
	uint64_t t83 = 201160527LLU;

	t83 = ((x369/x370)|(x371/x372));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x373 = INT32_MIN;
	int64_t x375 = INT64_MIN;

	t84 = ((x373/x374)|(x375/x376));

	if (t84 != 17524406869594577305LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x377 = INT8_MIN;
	int32_t x378 = -6;
	uint32_t x379 = 53U;
	volatile int8_t x380 = 1;
	uint32_t t85 = 5576219U;

	t85 = ((x377/x378)|(x379/x380));

	if (t85 != 53U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x381 = -235559589LL;
	static volatile int8_t x382 = -1;
	int32_t x384 = INT32_MIN;
	volatile uint64_t t86 = 739467483590LLU;

	t86 = ((x381/x382)|(x383/x384));

	if (t86 != 235559589LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x391 = -1;
	int64_t x392 = -1098559282094LL;
	int64_t t87 = -412931LL;

	t87 = ((x389/x390)|(x391/x392));

	if (t87 != 2996LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x393 = INT16_MAX;
	uint8_t x394 = 26U;
	uint64_t x395 = UINT64_MAX;
	int64_t x396 = 7302349LL;
	volatile uint64_t t88 = 1LLU;

	t88 = ((x393/x394)|(x395/x396));

	if (t88 != 2526138380285LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x401 = INT32_MIN;
	uint64_t x402 = 1021069071LLU;
	volatile uint32_t x403 = 9228U;
	int32_t x404 = INT32_MAX;
	volatile uint64_t t89 = 365518LLU;

	t89 = ((x401/x402)|(x403/x404));

	if (t89 != 18066107960LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x405 = INT64_MIN;
	int32_t x407 = INT32_MIN;
	static uint16_t x408 = 12389U;
	int64_t t90 = 203LL;

	t90 = ((x405/x406)|(x407/x408));

	if (t90 != -1297LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x409 = 11U;
	int8_t x410 = -1;
	volatile int32_t x411 = -15171758;
	uint64_t x412 = 4451302371265745LLU;
	uint64_t t91 = 53447104LLU;

	t91 = ((x409/x410)|(x411/x412));

	if (t91 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x413 = -1415053139751LL;
	static uint32_t x415 = 4158U;
	uint32_t x416 = UINT32_MAX;
	volatile int64_t t92 = -71161479LL;

	t92 = ((x413/x414)|(x415/x416));

	if (t92 != -707526569875LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = -1;
	static int8_t x418 = INT8_MIN;
	uint64_t x419 = 104889242LLU;
	uint64_t x420 = 63LLU;
	volatile uint64_t t93 = 10819198LLU;

	t93 = ((x417/x418)|(x419/x420));

	if (t93 != 1664908LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = UINT64_MAX;
	uint16_t x422 = 13U;
	int16_t x423 = 36;
	int64_t x424 = -1LL;
	uint64_t t94 = 229LLU;

	t94 = ((x421/x422)|(x423/x424));

	if (t94 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint32_t x425 = 1860653U;
	int8_t x426 = -1;
	int64_t x427 = -184568661185LL;
	uint64_t x428 = UINT64_MAX;
	volatile uint64_t t95 = 3225583681LLU;

	t95 = ((x425/x426)|(x427/x428));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MIN;
	static volatile uint32_t x431 = 73U;
	int64_t t96 = 1LL;

	t96 = ((x429/x430)|(x431/x432));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x433 = INT32_MAX;
	int64_t x434 = INT64_MIN;
	int16_t x435 = INT16_MAX;
	static volatile int32_t x436 = -1;
	volatile int64_t t97 = 1569816794754114LL;

	t97 = ((x433/x434)|(x435/x436));

	if (t97 != -32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x441 = 18242LLU;
	int32_t x442 = INT32_MIN;
	uint8_t x444 = UINT8_MAX;

	t98 = ((x441/x442)|(x443/x444));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x445 = 1408U;
	volatile uint32_t x446 = 20543U;
	static volatile int16_t x447 = -1;
	uint32_t x448 = 1133492137U;
	static volatile uint32_t t99 = 230094894U;

	t99 = ((x445/x446)|(x447/x448));

	if (t99 != 3U) { NG(); } else { ; }
	
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

