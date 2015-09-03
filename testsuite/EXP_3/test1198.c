#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = INT16_MIN;
uint16_t x9 = 1667U;
int32_t t2 = 5461;
uint32_t x16 = 1676U;
uint64_t x17 = 35674LLU;
static volatile int8_t x19 = -1;
int16_t x20 = -14264;
uint16_t x22 = UINT16_MAX;
int8_t x36 = INT8_MIN;
volatile uint64_t t8 = 29364035LLU;
volatile uint32_t x37 = 590836299U;
int8_t x47 = -1;
uint64_t x51 = 16LLU;
static int16_t x52 = -1800;
volatile int64_t x57 = -9668287721127889LL;
volatile int64_t x60 = -168LL;
int8_t x65 = INT8_MIN;
uint16_t x68 = UINT16_MAX;
int16_t x70 = INT16_MAX;
uint32_t t17 = 2U;
volatile uint64_t t18 = 38LLU;
uint64_t x77 = 348093570678LLU;
volatile uint64_t t19 = 11LLU;
int8_t x94 = INT8_MIN;
static uint16_t x103 = UINT16_MAX;
uint64_t x105 = UINT64_MAX;
int64_t x108 = INT64_MIN;
uint8_t x110 = 3U;
int32_t x124 = -113;
int16_t x126 = -13481;
volatile int32_t t29 = 284;
static uint32_t x131 = 0U;
static int8_t x132 = INT8_MAX;
static int32_t x139 = 23956456;
int32_t x143 = 16;
volatile int16_t x144 = INT16_MIN;
uint64_t t33 = 3883994668167908LLU;
static uint64_t x147 = 79LLU;
uint32_t x156 = UINT32_MAX;
int64_t t37 = 2LL;
uint8_t x185 = 25U;
volatile int32_t x186 = -228465867;
volatile uint8_t x190 = 76U;
int32_t t41 = -870;
volatile uint64_t x193 = 154723038651LLU;
int32_t x197 = INT32_MAX;
uint16_t x200 = UINT16_MAX;
static int16_t x209 = 629;
uint32_t x217 = UINT32_MAX;
volatile int8_t x224 = INT8_MAX;
int8_t x228 = INT8_MAX;
volatile int16_t x229 = -229;
int16_t x247 = INT16_MIN;
uint64_t x256 = 2735552LLU;
int64_t x260 = INT64_MIN;
volatile int32_t t54 = -1;
volatile uint64_t x261 = 84727477961780LLU;
volatile int32_t x263 = INT32_MAX;
int16_t x264 = INT16_MIN;
volatile uint64_t t55 = 692744181328543LLU;
uint32_t x265 = UINT32_MAX;
uint8_t x273 = 40U;
static volatile uint64_t t62 = 113907439LLU;
static int8_t x298 = INT8_MIN;
int16_t x299 = 0;
volatile int16_t x301 = 1;
int32_t x306 = -1;
int64_t x309 = 5713530LL;
int64_t t67 = 4878356980837329LL;
static int16_t x315 = 1;
static uint32_t x317 = 48U;
static int16_t x322 = -425;
volatile uint64_t x326 = UINT64_MAX;
uint8_t x329 = 1U;
int8_t x335 = 63;
int8_t x336 = INT8_MAX;
volatile uint32_t x339 = UINT32_MAX;
volatile int32_t t74 = -196;
static uint8_t x342 = 89U;
int8_t x343 = INT8_MAX;
int16_t x346 = -20;
int32_t x347 = 11;
static int64_t t76 = -3018593085LL;
uint8_t x351 = 121U;
uint64_t x354 = 457247778723520LLU;
static int16_t x360 = INT16_MIN;
int8_t x362 = -26;
uint32_t x363 = 404U;
int64_t t80 = -2194478820LL;
static int64_t x368 = -7656007LL;
int16_t x371 = INT16_MAX;
int64_t x377 = -475287193LL;
uint8_t x380 = UINT8_MAX;
volatile int64_t t84 = 502672728767326801LL;
int32_t x383 = -1;
uint16_t x384 = 4262U;
volatile uint16_t x387 = 38U;
int32_t x392 = -673379;
uint32_t x398 = 804529722U;
static int32_t x404 = INT32_MIN;
int8_t x406 = 1;
int64_t x421 = INT64_MIN;
int16_t x422 = INT16_MIN;
int8_t x427 = -1;
static volatile int32_t t96 = 1000;
static volatile uint16_t x435 = 41U;
int32_t x440 = 59582826;


void f0(void) {
	static int32_t x1 = -1;
	int64_t x2 = 92900LL;
	int64_t x3 = INT64_MIN;
	volatile uint32_t x4 = UINT32_MAX;
	int64_t t0 = -42598LL;

	t0 = ((x1-x2)-(x3==x4));

	if (t0 != -92901LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 90U;
	int16_t x6 = INT16_MAX;
	static volatile int8_t x7 = INT8_MAX;
	static int32_t t1 = 1;

	t1 = ((x5-x6)-(x7==x8));

	if (t1 != -32677) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 5;
	static int64_t x11 = 10LL;
	int32_t x12 = -1;

	t2 = ((x9-x10)-(x11==x12));

	if (t2 != 1662) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x14 = -1;
	uint16_t x15 = 30U;
	int32_t t3 = -1;

	t3 = ((x13-x14)-(x15==x16));

	if (t3 != 65536) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 751445382U;
	static volatile uint64_t t4 = 707162768651LLU;

	t4 = ((x17-x18)-(x19==x20));

	if (t4 != 18446744072958141908LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x23 = 251U;
	static volatile int64_t x24 = -1LL;
	static int32_t t5 = 1026878;

	t5 = ((x21-x22)-(x23==x24));

	if (t5 != -65663) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 140261804197236632LLU;
	volatile uint16_t x26 = UINT16_MAX;
	static uint16_t x27 = UINT16_MAX;
	uint64_t x28 = 25948103431LLU;
	volatile uint64_t t6 = 18LLU;

	t6 = ((x25-x26)-(x27==x28));

	if (t6 != 140261804197171097LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -23644375879LL;
	int32_t x30 = INT32_MIN;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = INT8_MIN;
	static int64_t t7 = -1LL;

	t7 = ((x29-x30)-(x31==x32));

	if (t7 != -21496892231LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 545902541332909395LLU;
	int32_t x34 = -116;
	volatile int16_t x35 = INT16_MIN;

	t8 = ((x33-x34)-(x35==x36));

	if (t8 != 545902541332909511LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = 27;
	int32_t x39 = -99857;
	int32_t x40 = -1806;
	uint32_t t9 = 111209U;

	t9 = ((x37-x38)-(x39==x40));

	if (t9 != 590836272U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = UINT16_MAX;
	volatile uint16_t x42 = 775U;
	uint16_t x43 = UINT16_MAX;
	uint8_t x44 = UINT8_MAX;
	static volatile int32_t t10 = -3053;

	t10 = ((x41-x42)-(x43==x44));

	if (t10 != 64760) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 52430;
	uint16_t x46 = UINT16_MAX;
	static volatile int16_t x48 = -3456;
	int32_t t11 = 105;

	t11 = ((x45-x46)-(x47==x48));

	if (t11 != -13105) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 0;
	int16_t x50 = 768;
	static int32_t t12 = -108461180;

	t12 = ((x49-x50)-(x51==x52));

	if (t12 != -768) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 3U;
	int16_t x54 = INT16_MIN;
	int8_t x55 = INT8_MIN;
	volatile int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 273374057;

	t13 = ((x53-x54)-(x55==x56));

	if (t13 != 32771) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -4595709LL;
	int64_t x59 = INT64_MIN;
	static volatile int64_t t14 = -62154132LL;

	t14 = ((x57-x58)-(x59==x60));

	if (t14 != -9668287716532180LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int8_t x62 = -1;
	uint16_t x63 = 44U;
	int64_t x64 = INT64_MIN;
	volatile uint64_t t15 = 7311856348647275LLU;

	t15 = ((x61-x62)-(x63==x64));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x66 = 41U;
	uint32_t x67 = UINT32_MAX;
	volatile int32_t t16 = 741392;

	t16 = ((x65-x66)-(x67==x68));

	if (t16 != -169) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	static volatile uint16_t x72 = 15U;

	t17 = ((x69-x70)-(x71==x72));

	if (t17 != 4294934528U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	static volatile int8_t x75 = INT8_MAX;
	int32_t x76 = INT32_MAX;

	t18 = ((x73-x74)-(x75==x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	static uint64_t x79 = 1729787439LLU;
	int64_t x80 = INT64_MAX;

	t19 = ((x77-x78)-(x79==x80));

	if (t19 != 348093570679LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	uint64_t x82 = 17922671785591022LLU;
	static int8_t x83 = 0;
	int32_t x84 = INT32_MAX;
	volatile uint64_t t20 = 1610726LLU;

	t20 = ((x81-x82)-(x83==x84));

	if (t20 != 9205449365069184785LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = -1;
	static int8_t x86 = 0;
	uint32_t x87 = 353848167U;
	volatile uint16_t x88 = 118U;
	volatile int32_t t21 = -53599;

	t21 = ((x85-x86)-(x87==x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = -1;
	uint8_t x95 = 3U;
	int64_t x96 = -1LL;
	volatile int32_t t22 = -904;

	t22 = ((x93-x94)-(x95==x96));

	if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	int32_t x99 = -1;
	volatile int32_t x100 = -424;
	static volatile int32_t t23 = 25743;

	t23 = ((x97-x98)-(x99==x100));

	if (t23 != -32640) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MAX;
	static uint32_t x104 = UINT32_MAX;
	static int64_t t24 = -1370615112LL;

	t24 = ((x101-x102)-(x103==x104));

	if (t24 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x106 = INT64_MAX;
	static int8_t x107 = -26;
	uint64_t t25 = 33081946975027104LLU;

	t25 = ((x105-x106)-(x107==x108));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 4129U;
	int64_t x111 = INT64_MIN;
	volatile int32_t x112 = 13153739;
	static volatile int32_t t26 = -17556;

	t26 = ((x109-x110)-(x111==x112));

	if (t26 != 4126) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = -16297874146961LL;
	uint16_t x114 = UINT16_MAX;
	static int32_t x115 = INT32_MIN;
	int8_t x116 = -1;
	int64_t t27 = 290448LL;

	t27 = ((x113-x114)-(x115==x116));

	if (t27 != -16297874212496LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = 1;
	volatile int16_t x122 = -1;
	uint64_t x123 = 5977808084758876LLU;
	volatile int32_t t28 = -673;

	t28 = ((x121-x122)-(x123==x124));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MIN;
	int32_t x127 = 415589;
	static volatile int8_t x128 = INT8_MIN;

	t29 = ((x125-x126)-(x127==x128));

	if (t29 != -2147470167) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x129 = 1580U;
	static int16_t x130 = -3197;
	static volatile uint32_t t30 = 594U;

	t30 = ((x129-x130)-(x131==x132));

	if (t30 != 4777U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = 0LL;
	static uint64_t x134 = 13313824LLU;
	uint16_t x135 = 0U;
	int64_t x136 = INT64_MAX;
	static uint64_t t31 = 1LLU;

	t31 = ((x133-x134)-(x135==x136));

	if (t31 != 18446744073696237792LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x137 = 49U;
	static volatile int8_t x138 = -1;
	volatile int8_t x140 = 3;
	volatile int32_t t32 = 21778737;

	t32 = ((x137-x138)-(x139==x140));

	if (t32 != 50) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x141 = INT8_MIN;
	static uint64_t x142 = 1630383LLU;

	t33 = ((x141-x142)-(x143==x144));

	if (t33 != 18446744073707921105LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	static int8_t x146 = 0;
	static int8_t x148 = INT8_MAX;
	int32_t t34 = INT32_MIN;

	t34 = ((x145-x146)-(x147==x148));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	int64_t x155 = INT64_MIN;
	uint32_t t35 = 18560U;

	t35 = ((x153-x154)-(x155==x156));

	if (t35 != 4294967040U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x161 = INT64_MAX;
	uint64_t x162 = 1023581974LLU;
	int16_t x163 = INT16_MIN;
	volatile uint8_t x164 = 1U;
	volatile uint64_t t36 = 5833942726381548632LLU;

	t36 = ((x161-x162)-(x163==x164));

	if (t36 != 9223372035831193833LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x165 = -1LL;
	uint8_t x166 = 0U;
	uint64_t x167 = 1124113034763189LLU;
	int64_t x168 = INT64_MIN;

	t37 = ((x165-x166)-(x167==x168));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int16_t x175 = INT16_MAX;
	int16_t x176 = 2826;
	int32_t t38 = INT32_MAX;

	t38 = ((x173-x174)-(x175==x176));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = INT64_MIN;
	static int16_t x178 = INT16_MIN;
	int8_t x179 = -1;
	uint64_t x180 = 123984LLU;
	int64_t t39 = -69406826394LL;

	t39 = ((x177-x178)-(x179==x180));

	if (t39 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x187 = 268;
	int16_t x188 = INT16_MAX;
	volatile int32_t t40 = -203445;

	t40 = ((x185-x186)-(x187==x188));

	if (t40 != 228465892) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x189 = INT8_MIN;
	uint32_t x191 = UINT32_MAX;
	int64_t x192 = -1LL;

	t41 = ((x189-x190)-(x191==x192));

	if (t41 != -204) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MIN;
	static uint32_t x196 = 0U;
	static volatile uint64_t t42 = 39LLU;

	t42 = ((x193-x194)-(x195==x196));

	if (t42 != 150428071356LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x198 = -418924733757LL;
	static int32_t x199 = -63;
	volatile int64_t t43 = -1LL;

	t43 = ((x197-x198)-(x199==x200));

	if (t43 != 421072217404LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x201 = -3275;
	static int64_t x202 = -1LL;
	static int8_t x203 = -5;
	int64_t x204 = INT64_MIN;
	int64_t t44 = -463LL;

	t44 = ((x201-x202)-(x203==x204));

	if (t44 != -3274LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x210 = INT16_MIN;
	int16_t x211 = -18;
	static int16_t x212 = -28;
	int32_t t45 = 208284;

	t45 = ((x209-x210)-(x211==x212));

	if (t45 != 33397) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x218 = 381029665U;
	int64_t x219 = 1278633753LL;
	uint16_t x220 = 16249U;
	uint32_t t46 = 1872384433U;

	t46 = ((x217-x218)-(x219==x220));

	if (t46 != 3913937630U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -1;
	int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MIN;
	int32_t t47 = -4396072;

	t47 = ((x221-x222)-(x223==x224));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x226 = UINT64_MAX;
	volatile int16_t x227 = INT16_MIN;
	volatile uint64_t t48 = 81605517677435977LLU;

	t48 = ((x225-x226)-(x227==x228));

	if (t48 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x230 = INT16_MIN;
	uint32_t x231 = UINT32_MAX;
	static int32_t x232 = -960837;
	int32_t t49 = -3;

	t49 = ((x229-x230)-(x231==x232));

	if (t49 != 32539) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x233 = -2267;
	uint16_t x234 = 1U;
	volatile int16_t x235 = 85;
	int64_t x236 = INT64_MIN;
	volatile int32_t t50 = -4;

	t50 = ((x233-x234)-(x235==x236));

	if (t50 != -2268) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = UINT8_MAX;
	uint8_t x238 = UINT8_MAX;
	volatile int64_t x239 = INT64_MAX;
	int64_t x240 = INT64_MIN;
	volatile int32_t t51 = 49;

	t51 = ((x237-x238)-(x239==x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = 0;
	int32_t x246 = 23409;
	volatile uint16_t x248 = UINT16_MAX;
	static int32_t t52 = -1;

	t52 = ((x245-x246)-(x247==x248));

	if (t52 != -23409) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x253 = -1LL;
	int32_t x254 = INT32_MAX;
	static uint64_t x255 = 18781LLU;
	volatile int64_t t53 = 51758431899LL;

	t53 = ((x253-x254)-(x255==x256));

	if (t53 != -2147483648LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x257 = 1U;
	int32_t x258 = INT32_MAX;
	int64_t x259 = INT64_MIN;

	t54 = ((x257-x258)-(x259==x260));

	if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x262 = INT16_MAX;

	t55 = ((x261-x262)-(x263==x264));

	if (t55 != 84727477929013LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x266 = -1;
	int16_t x267 = -1;
	uint32_t x268 = 547U;
	volatile uint32_t t56 = 169857U;

	t56 = ((x265-x266)-(x267==x268));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x269 = UINT64_MAX;
	int8_t x270 = 0;
	uint16_t x271 = 2346U;
	volatile int16_t x272 = -1;
	uint64_t t57 = UINT64_MAX;

	t57 = ((x269-x270)-(x271==x272));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x274 = INT16_MIN;
	static int16_t x275 = INT16_MIN;
	static int32_t x276 = INT32_MAX;
	volatile int32_t t58 = 112307;

	t58 = ((x273-x274)-(x275==x276));

	if (t58 != 32808) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x277 = INT8_MIN;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = 5;
	static int32_t x280 = INT32_MIN;
	volatile int32_t t59 = 20;

	t59 = ((x277-x278)-(x279==x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -30LL;
	uint8_t x283 = 69U;
	volatile int32_t x284 = -1;
	volatile int64_t t60 = -2113400078326LL;

	t60 = ((x281-x282)-(x283==x284));

	if (t60 != -98LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MAX;
	volatile int32_t x286 = -1;
	int64_t x287 = 10732LL;
	volatile int16_t x288 = INT16_MIN;
	static volatile int32_t t61 = -2300517;

	t61 = ((x285-x286)-(x287==x288));

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x289 = 13219954545405563LLU;
	volatile uint32_t x290 = 23084U;
	int16_t x291 = -446;
	uint8_t x292 = 29U;

	t62 = ((x289-x290)-(x291==x292));

	if (t62 != 13219954545382479LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = -1;
	uint64_t x294 = 715LLU;
	uint16_t x295 = 10056U;
	int64_t x296 = 209512934016346681LL;
	static volatile uint64_t t63 = 263LLU;

	t63 = ((x293-x294)-(x295==x296));

	if (t63 != 18446744073709550900LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x297 = UINT32_MAX;
	static int64_t x300 = -12961394148280960LL;
	uint32_t t64 = 14873U;

	t64 = ((x297-x298)-(x299==x300));

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x302 = -195500730;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -956;
	volatile int32_t t65 = -369934;

	t65 = ((x301-x302)-(x303==x304));

	if (t65 != 195500731) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x305 = UINT16_MAX;
	volatile int8_t x307 = INT8_MIN;
	volatile int16_t x308 = 959;
	int32_t t66 = 8;

	t66 = ((x305-x306)-(x307==x308));

	if (t66 != 65536) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x310 = -1LL;
	uint8_t x311 = 1U;
	static uint64_t x312 = 31472LLU;

	t67 = ((x309-x310)-(x311==x312));

	if (t67 != 5713531LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x313 = INT8_MAX;
	int8_t x314 = 2;
	uint64_t x316 = 2214708691570398254LLU;
	int32_t t68 = -1985423;

	t68 = ((x313-x314)-(x315==x316));

	if (t68 != 125) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MIN;
	uint64_t x320 = 127897940LLU;
	uint32_t t69 = 62U;

	t69 = ((x317-x318)-(x319==x320));

	if (t69 != 2147483696U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x321 = UINT8_MAX;
	volatile int16_t x323 = INT16_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t70 = 8233518;

	t70 = ((x321-x322)-(x323==x324));

	if (t70 != 680) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x325 = INT64_MIN;
	volatile int64_t x327 = 6677790736446398LL;
	volatile int8_t x328 = -1;
	static uint64_t t71 = 836LLU;

	t71 = ((x325-x326)-(x327==x328));

	if (t71 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x330 = 1U;
	uint64_t x331 = UINT64_MAX;
	int8_t x332 = 7;
	volatile int32_t t72 = -475294432;

	t72 = ((x329-x330)-(x331==x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 14799885LLU;
	int8_t x334 = INT8_MIN;
	uint64_t t73 = 9986007LLU;

	t73 = ((x333-x334)-(x335==x336));

	if (t73 != 14800013LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x337 = -1;
	int8_t x338 = 0;
	uint16_t x340 = 2072U;

	t74 = ((x337-x338)-(x339==x340));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x341 = INT64_MAX;
	int8_t x344 = -1;
	int64_t t75 = 14695145180460LL;

	t75 = ((x341-x342)-(x343==x344));

	if (t75 != 9223372036854775718LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x345 = -74563205287LL;
	int16_t x348 = -1121;

	t76 = ((x345-x346)-(x347==x348));

	if (t76 != -74563205267LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = -1;
	int8_t x352 = -1;
	volatile int64_t t77 = 41159301004156997LL;

	t77 = ((x349-x350)-(x351==x352));

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = INT16_MAX;
	volatile int32_t x355 = INT32_MIN;
	int8_t x356 = INT8_MAX;
	volatile uint64_t t78 = 194LLU;

	t78 = ((x353-x354)-(x355==x356));

	if (t78 != 18446286825930860863LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x357 = 46164U;
	volatile int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	uint32_t t79 = 62342681U;

	t79 = ((x357-x358)-(x359==x360));

	if (t79 != 46291U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x361 = -48541551LL;
	static uint32_t x364 = UINT32_MAX;

	t80 = ((x361-x362)-(x363==x364));

	if (t80 != -48541525LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = -3;
	int8_t x367 = -1;
	volatile int32_t t81 = 798;

	t81 = ((x365-x366)-(x367==x368));

	if (t81 != -125) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x369 = 1438426LL;
	int32_t x370 = INT32_MIN;
	static int64_t x372 = -1LL;
	int64_t t82 = 257845131430711LL;

	t82 = ((x369-x370)-(x371==x372));

	if (t82 != 2148922074LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = 126;
	int8_t x374 = INT8_MAX;
	uint8_t x375 = 9U;
	volatile uint64_t x376 = 117039LLU;
	volatile int32_t t83 = 414638041;

	t83 = ((x373-x374)-(x375==x376));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x378 = -1;
	uint32_t x379 = 413442U;

	t84 = ((x377-x378)-(x379==x380));

	if (t84 != -475287192LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x381 = 1LL;
	static int64_t x382 = -1LL;
	volatile int64_t t85 = -5077LL;

	t85 = ((x381-x382)-(x383==x384));

	if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x385 = UINT64_MAX;
	int32_t x386 = 4673;
	static uint64_t x388 = 96LLU;
	uint64_t t86 = 2818LLU;

	t86 = ((x385-x386)-(x387==x388));

	if (t86 != 18446744073709546942LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x389 = UINT16_MAX;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	static volatile uint64_t t87 = 10821LLU;

	t87 = ((x389-x390)-(x391==x392));

	if (t87 != 65536LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x393 = -1;
	static int8_t x394 = INT8_MIN;
	uint16_t x395 = 7U;
	static uint16_t x396 = 5614U;
	int32_t t88 = -58197;

	t88 = ((x393-x394)-(x395==x396));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x397 = -6;
	volatile int8_t x399 = -2;
	int32_t x400 = -1;
	uint32_t t89 = 2051535974U;

	t89 = ((x397-x398)-(x399==x400));

	if (t89 != 3490437568U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x401 = 2713U;
	static volatile uint32_t x402 = 18957793U;
	uint32_t x403 = UINT32_MAX;
	uint32_t t90 = 1083876651U;

	t90 = ((x401-x402)-(x403==x404));

	if (t90 != 4276012216U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x405 = 1434254146205595546LLU;
	uint8_t x407 = UINT8_MAX;
	static int8_t x408 = -36;
	uint64_t t91 = 929LLU;

	t91 = ((x405-x406)-(x407==x408));

	if (t91 != 1434254146205595545LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x409 = 18U;
	int16_t x410 = INT16_MIN;
	uint16_t x411 = 8683U;
	uint64_t x412 = UINT64_MAX;
	uint32_t t92 = 0U;

	t92 = ((x409-x410)-(x411==x412));

	if (t92 != 32786U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x413 = -1;
	uint32_t x414 = 696538U;
	int8_t x415 = INT8_MIN;
	int32_t x416 = INT32_MIN;
	volatile uint32_t t93 = 267208275U;

	t93 = ((x413-x414)-(x415==x416));

	if (t93 != 4294270757U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = INT64_MIN;
	int32_t x418 = -1;
	static int16_t x419 = -1217;
	volatile uint32_t x420 = UINT32_MAX;
	int64_t t94 = 15940040LL;

	t94 = ((x417-x418)-(x419==x420));

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x423 = 5U;
	static int32_t x424 = -1;
	volatile int64_t t95 = -33360286216435LL;

	t95 = ((x421-x422)-(x423==x424));

	if (t95 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = 6U;
	uint8_t x426 = 4U;
	volatile int16_t x428 = -1;

	t96 = ((x425-x426)-(x427==x428));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 5047842LLU;
	uint32_t x430 = 340185069U;
	int32_t x431 = -257376;
	int32_t x432 = 117842995;
	static volatile uint64_t t97 = 961502LLU;

	t97 = ((x429-x430)-(x431==x432));

	if (t97 != 18446744073374414389LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = -256002LL;
	uint8_t x434 = UINT8_MAX;
	uint32_t x436 = 401710812U;
	volatile int64_t t98 = 39LL;

	t98 = ((x433-x434)-(x435==x436));

	if (t98 != -256257LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = -1;
	int64_t x438 = INT64_MAX;
	int16_t x439 = -9446;
	int64_t t99 = INT64_MIN;

	t99 = ((x437-x438)-(x439==x440));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

