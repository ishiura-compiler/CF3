#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = INT64_MIN;
volatile uint64_t t3 = UINT64_MAX;
int16_t x18 = INT16_MAX;
uint64_t x28 = UINT64_MAX;
volatile int32_t t7 = -73247;
int8_t x36 = -1;
int16_t x43 = -1;
int32_t x46 = INT32_MIN;
int64_t x49 = INT64_MIN;
uint64_t t12 = 143387331235LLU;
volatile int8_t x53 = 0;
uint16_t x54 = UINT16_MAX;
volatile int32_t x56 = -1483023;
static int64_t x59 = -10612564LL;
int32_t x71 = INT32_MAX;
volatile uint64_t t17 = UINT64_MAX;
volatile int16_t x73 = -464;
int16_t x80 = INT16_MIN;
uint8_t x85 = 1U;
static uint32_t x95 = 2943718U;
static int32_t x98 = 55105317;
static int32_t t25 = 169;
int64_t x108 = INT64_MIN;
int8_t x114 = INT8_MIN;
static volatile int32_t t28 = 805300525;
static uint16_t x117 = UINT16_MAX;
int32_t x123 = INT32_MIN;
static uint64_t t31 = UINT64_MAX;
static int16_t x135 = 21;
uint64_t x137 = UINT64_MAX;
uint32_t x138 = 461312865U;
int32_t x140 = -4;
uint8_t x141 = 5U;
volatile uint64_t t35 = 1848915LLU;
volatile int8_t x145 = 48;
int8_t x146 = INT8_MIN;
static int8_t x149 = INT8_MIN;
int64_t x152 = INT64_MIN;
int64_t t37 = 1993LL;
int16_t x155 = 3;
int64_t t38 = -182LL;
static uint64_t x159 = 1015107823125100LLU;
static uint64_t t39 = 9932507935LLU;
int32_t x162 = INT32_MIN;
int16_t x183 = -1;
volatile int64_t t46 = -138120LL;
uint32_t t47 = 6826611U;
int8_t x194 = INT8_MIN;
uint16_t x198 = UINT16_MAX;
int8_t x199 = -1;
volatile int8_t x200 = INT8_MAX;
uint8_t x202 = 1U;
uint16_t x203 = 13U;
uint8_t x213 = 15U;
int64_t x214 = -3830695804799069LL;
volatile uint8_t x217 = 3U;
volatile uint16_t x221 = UINT16_MAX;
uint32_t t55 = UINT32_MAX;
uint64_t t57 = 3241596LLU;
volatile int8_t x233 = -5;
uint8_t x244 = 1U;
volatile int64_t t61 = 15354LL;
int16_t x257 = -225;
int8_t x258 = INT8_MIN;
static volatile uint16_t x259 = UINT16_MAX;
int16_t x267 = -1;
static uint16_t x268 = UINT16_MAX;
int8_t x269 = -3;
int16_t x270 = -1;
volatile int32_t x276 = -202;
volatile int64_t t68 = 209LL;
static int64_t x280 = -1LL;
int16_t x287 = -1;
int8_t x288 = -1;
uint16_t x291 = 701U;
static volatile uint64_t t73 = 1024091102862LLU;
volatile int32_t x297 = -1;
uint64_t x299 = 43462498095317LLU;
static int32_t x303 = INT32_MIN;
static int64_t x307 = INT64_MAX;
uint32_t x311 = UINT32_MAX;
int8_t x321 = 1;
uint64_t x325 = 70188517843097LLU;
uint16_t x328 = 152U;
volatile uint64_t t81 = 52073483360LLU;
int32_t x341 = INT32_MIN;
int16_t x350 = -1;
int16_t x352 = INT16_MIN;
int64_t x356 = 2101512936LL;
int8_t x357 = INT8_MIN;
int64_t x358 = -908LL;
volatile int64_t t89 = -5599539LL;
static volatile int16_t x366 = INT16_MIN;
int64_t x367 = 144571LL;
int16_t x369 = INT16_MIN;
int64_t x375 = INT64_MIN;
int8_t x382 = -1;
int16_t x383 = INT16_MIN;
uint32_t x385 = 2U;
int32_t x392 = INT32_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MIN;
	static volatile int64_t x3 = INT64_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = -2596288257209425LL;

	t0 = (x1|(x2|(x3^x4)));

	if (t0 != -128LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 0;
	int8_t x6 = INT8_MIN;
	int16_t x8 = -1;
	static volatile int64_t t1 = -1444371LL;

	t1 = (x5|(x6|(x7^x8)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 0;
	int64_t x10 = INT64_MAX;
	static int16_t x11 = INT16_MAX;
	int32_t x12 = INT32_MIN;
	int64_t t2 = 42761647589LL;

	t2 = (x9|(x10|(x11^x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x14 = UINT64_MAX;
	int8_t x15 = INT8_MIN;
	int16_t x16 = INT16_MIN;

	t3 = (x13|(x14|(x15^x16)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 126070823;
	static int32_t x19 = 437752934;
	int8_t x20 = -1;
	int32_t t4 = 11;

	t4 = (x17|(x18|(x19^x20)));

	if (t4 != -403963905) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = UINT16_MAX;
	int16_t x22 = 14;
	volatile int32_t x23 = INT32_MIN;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = 116;

	t5 = (x21|(x22|(x23^x24)));

	if (t5 != -2147418113) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 27234189;
	int16_t x26 = INT16_MIN;
	uint16_t x27 = 3267U;
	uint64_t t6 = 15503193677263LLU;

	t6 = (x25|(x26|(x27^x28)));

	if (t6 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	volatile int8_t x30 = 3;
	int8_t x31 = -1;
	uint8_t x32 = 0U;

	t7 = (x29|(x30|(x31^x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x34 = -2788;
	int64_t x35 = INT64_MIN;
	volatile int64_t t8 = 77926757LL;

	t8 = (x33|(x34|(x35^x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint64_t x37 = UINT64_MAX;
	int64_t x38 = INT64_MAX;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = -316LL;
	uint64_t t9 = UINT64_MAX;

	t9 = (x37|(x38|(x39^x40)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x41 = INT64_MAX;
	static int16_t x42 = 15;
	volatile uint32_t x44 = 1U;
	volatile int64_t t10 = INT64_MAX;

	t10 = (x41|(x42|(x43^x44)));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = 2LL;
	static volatile uint32_t x47 = 4507017U;
	volatile int64_t x48 = 9756560LL;
	int64_t t11 = 369813996499051088LL;

	t11 = (x45|(x46|(x47^x48)));

	if (t11 != -2133845477LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	volatile uint32_t x52 = UINT32_MAX;

	t12 = (x49|(x50|(x51^x52)));

	if (t12 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x55 = UINT8_MAX;
	static volatile int32_t t13 = -1009;

	t13 = (x53|(x54|(x55^x56)));

	if (t13 != -1441793) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 253U;
	int32_t x58 = INT32_MAX;
	volatile int64_t x60 = 947572LL;
	volatile int64_t t14 = 484673LL;

	t14 = (x57|(x58|(x59^x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int8_t x62 = -1;
	int64_t x63 = -1LL;
	volatile int16_t x64 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = (x61|(x62|(x63^x64)));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3486U;
	volatile uint16_t x66 = 875U;
	static volatile int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MIN;
	int32_t t16 = -1540373;

	t16 = (x65|(x66|(x67^x68)));

	if (t16 != 2147454975) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -7;
	static int16_t x70 = INT16_MAX;
	uint64_t x72 = 612512979674LLU;

	t17 = (x69|(x70|(x71^x72)));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	volatile uint16_t x75 = 571U;
	volatile uint16_t x76 = 399U;
	int32_t t18 = -28259;

	t18 = (x73|(x74|(x75^x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 21U;
	volatile int16_t x78 = 36;
	int32_t x79 = INT32_MIN;
	volatile int32_t t19 = -61456189;

	t19 = (x77|(x78|(x79^x80)));

	if (t19 != 2147450933) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 1;
	int8_t x82 = INT8_MAX;
	int32_t x83 = 7433859;
	volatile int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = -1;

	t20 = (x81|(x82|(x83^x84)));

	if (t20 != -7409921) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x86 = 1U;
	volatile int16_t x87 = -11331;
	volatile uint32_t x88 = 53677U;
	static volatile uint32_t t21 = 559146415U;

	t21 = (x85|(x86|(x87^x88)));

	if (t21 != 4294902289U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = 48U;
	uint64_t t22 = UINT64_MAX;

	t22 = (x89|(x90|(x91^x92)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = 7;
	static int8_t x94 = INT8_MIN;
	uint64_t x96 = 646189742198544LLU;
	volatile uint64_t t23 = 399292502823734LLU;

	t23 = (x93|(x94|(x95^x96)));

	if (t23 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x99 = -1;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t24 = 7508;

	t24 = (x97|(x98|(x99^x100)));

	if (t24 != -91) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	static int8_t x102 = -20;
	volatile uint8_t x103 = 7U;
	uint16_t x104 = UINT16_MAX;

	t25 = (x101|(x102|(x103^x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int32_t x106 = -1;
	int64_t x107 = INT64_MIN;
	static volatile int64_t t26 = -11LL;

	t26 = (x105|(x106|(x107^x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 15439U;
	static int64_t x110 = -1LL;
	int32_t x111 = INT32_MAX;
	static int8_t x112 = -1;
	volatile int64_t t27 = -7LL;

	t27 = (x109|(x110|(x111^x112)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = UINT8_MAX;

	t28 = (x113|(x114|(x115^x116)));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 0U;
	int32_t x119 = INT32_MIN;
	int8_t x120 = -4;
	int32_t t29 = INT32_MAX;

	t29 = (x117|(x118|(x119^x120)));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static int16_t x122 = -1;
	int64_t x124 = 50LL;
	int64_t t30 = 28431040441177254LL;

	t30 = (x121|(x122|(x123^x124)));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 7252200388LLU;
	volatile int32_t x126 = -1;
	volatile int16_t x127 = -1;
	uint8_t x128 = 105U;

	t31 = (x125|(x126|(x127^x128)));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = 91;
	int64_t x130 = -1LL;
	uint64_t x131 = 2LLU;
	static int16_t x132 = -74;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x129|(x130|(x131^x132)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = UINT32_MAX;
	int8_t x134 = INT8_MIN;
	uint16_t x136 = 0U;
	volatile uint32_t t33 = UINT32_MAX;

	t33 = (x133|(x134|(x135^x136)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x139 = INT64_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x137|(x138|(x139^x140)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = 934677677041287LLU;
	static int32_t x143 = -1;
	static int16_t x144 = INT16_MAX;

	t35 = (x141|(x142|(x143^x144)));

	if (t35 != 18446744073709545095LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x147 = -585;
	static int64_t x148 = 355812321489LL;
	int64_t t36 = 274264585892992LL;

	t36 = (x145|(x146|(x147^x148)));

	if (t36 != -10LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = UINT8_MAX;
	int64_t x151 = INT64_MAX;

	t37 = (x149|(x150|(x151^x152)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = -1;
	int64_t x154 = -1LL;
	int64_t x156 = -16755864930807777LL;

	t38 = (x153|(x154|(x155^x156)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint16_t x158 = 6U;
	uint32_t x160 = 5U;

	t39 = (x157|(x158|(x159^x160)));

	if (t39 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x161 = 92905U;
	uint16_t x163 = 0U;
	int64_t x164 = INT64_MIN;
	volatile int64_t t40 = 34098792482074360LL;

	t40 = (x161|(x162|(x163^x164)));

	if (t40 != -2147390743LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = 24;
	uint32_t x168 = UINT32_MAX;
	uint64_t t41 = UINT64_MAX;

	t41 = (x165|(x166|(x167^x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -28466569159LL;
	uint64_t x170 = UINT64_MAX;
	volatile int8_t x171 = -1;
	uint32_t x172 = UINT32_MAX;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x169|(x170|(x171^x172)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint32_t x174 = 92565073U;
	uint32_t x175 = UINT32_MAX;
	uint8_t x176 = 5U;
	volatile uint32_t t43 = UINT32_MAX;

	t43 = (x173|(x174|(x175^x176)));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 25447LLU;
	int8_t x178 = -63;
	uint64_t x179 = 12864507716LLU;
	int32_t x180 = 1706;
	static uint64_t t44 = 3925LLU;

	t44 = (x177|(x178|(x179^x180)));

	if (t44 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 7181U;
	int32_t x182 = INT32_MAX;
	static uint64_t x184 = 48788347280003562LLU;
	static uint64_t t45 = 463LLU;

	t45 = (x181|(x182|(x183^x184)));

	if (t45 != 18397955727718088703LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -5585LL;
	volatile int8_t x186 = -5;
	static int64_t x187 = INT64_MIN;
	volatile int32_t x188 = -1;

	t46 = (x185|(x186|(x187^x188)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = 1874U;
	uint32_t x191 = 10576U;
	int8_t x192 = -15;

	t47 = (x189|(x190|(x191^x192)));

	if (t47 != 4294957043U) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MAX;
	int8_t x195 = -14;
	static uint16_t x196 = UINT16_MAX;
	static int32_t t48 = -128610;

	t48 = (x193|(x194|(x195^x196)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	int32_t t49 = 2986;

	t49 = (x197|(x198|(x199^x200)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 1U;
	int64_t x204 = INT64_MAX;
	volatile int64_t t50 = -107380789255605LL;

	t50 = (x201|(x202|(x203^x204)));

	if (t50 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	uint64_t x206 = 353682753LLU;
	int8_t x207 = INT8_MIN;
	volatile int8_t x208 = INT8_MIN;
	uint64_t t51 = 8334326909461LLU;

	t51 = (x205|(x206|(x207^x208)));

	if (t51 != 9223372037208458561LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 83U;
	int16_t x210 = INT16_MAX;
	volatile int32_t x211 = INT32_MAX;
	uint8_t x212 = UINT8_MAX;
	uint32_t t52 = 42U;

	t52 = (x209|(x210|(x211^x212)));

	if (t52 != 2147483647U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x215 = INT32_MIN;
	uint32_t x216 = 956142397U;
	volatile int64_t t53 = 1LL;

	t53 = (x213|(x214|(x215^x216)));

	if (t53 != -3830695390611521LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = INT8_MIN;
	static volatile int32_t t54 = 760;

	t54 = (x217|(x218|(x219^x220)));

	if (t54 != -125) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = -1;
	volatile int16_t x224 = 1;

	t55 = (x221|(x222|(x223^x224)));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 11U;
	int32_t x226 = 222;
	int64_t x227 = INT64_MIN;
	int16_t x228 = -1;
	int64_t t56 = INT64_MAX;

	t56 = (x225|(x226|(x227^x228)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 1361U;
	static int32_t x230 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = 2976158440356LLU;

	t57 = (x229|(x230|(x231^x232)));

	if (t57 != 18446744071815964021LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x234 = 1073;
	static volatile int8_t x235 = INT8_MIN;
	static uint32_t x236 = 43950408U;
	uint32_t t58 = 3U;

	t58 = (x233|(x234|(x235^x236)));

	if (t58 != 4294967291U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 56;
	static int16_t x238 = INT16_MAX;
	static volatile int32_t x239 = -1;
	int16_t x240 = 0;
	int32_t t59 = 21583347;

	t59 = (x237|(x238|(x239^x240)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint8_t x242 = 38U;
	uint32_t x243 = UINT32_MAX;
	uint32_t t60 = UINT32_MAX;

	t60 = (x241|(x242|(x243^x244)));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	static uint32_t x246 = UINT32_MAX;
	static uint32_t x247 = 212841U;
	uint8_t x248 = UINT8_MAX;

	t61 = (x245|(x246|(x247^x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static int32_t x250 = INT32_MIN;
	volatile int32_t x251 = -1;
	uint8_t x252 = 1U;
	volatile int64_t t62 = 459165230664784LL;

	t62 = (x249|(x250|(x251^x252)));

	if (t62 != -2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -15;
	uint64_t x254 = UINT64_MAX;
	static int8_t x255 = INT8_MIN;
	int64_t x256 = 54840755868LL;
	uint64_t t63 = UINT64_MAX;

	t63 = (x253|(x254|(x255^x256)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x260 = INT32_MAX;
	int32_t t64 = -21021414;

	t64 = (x257|(x258|(x259^x260)));

	if (t64 != -97) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 21;
	int64_t x262 = INT64_MIN;
	int16_t x263 = 19;
	static uint16_t x264 = UINT16_MAX;
	volatile int64_t t65 = 1102357335896479912LL;

	t65 = (x261|(x262|(x263^x264)));

	if (t65 != -9223372036854710275LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x265 = INT16_MIN;
	volatile int8_t x266 = INT8_MIN;
	volatile int32_t t66 = 1258;

	t66 = (x265|(x266|(x267^x268)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = -1;
	int16_t x272 = -1;
	int32_t t67 = -2289385;

	t67 = (x269|(x270|(x271^x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 2U;
	volatile int64_t x274 = -3287008691553071698LL;
	uint8_t x275 = 15U;

	t68 = (x273|(x274|(x275^x276)));

	if (t68 != -65LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 707195916984346LLU;
	int32_t x278 = -1;
	int16_t x279 = -1;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (x277|(x278|(x279^x280)));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	uint16_t x282 = 361U;
	int64_t x283 = -783917350LL;
	uint32_t x284 = 81753U;
	int64_t t70 = -2064063912469LL;

	t70 = (x281|(x282|(x283^x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 0;
	static uint8_t x286 = 4U;
	volatile int32_t t71 = -29;

	t71 = (x285|(x286|(x287^x288)));

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = -1;
	uint32_t x290 = 857U;
	int16_t x292 = INT16_MIN;
	static volatile uint32_t t72 = UINT32_MAX;

	t72 = (x289|(x290|(x291^x292)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 21LLU;
	uint32_t x294 = UINT32_MAX;
	int32_t x295 = INT32_MIN;
	static int64_t x296 = INT64_MAX;

	t73 = (x293|(x294|(x295^x296)));

	if (t73 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = -1;
	uint8_t x300 = UINT8_MAX;
	static volatile uint64_t t74 = UINT64_MAX;

	t74 = (x297|(x298|(x299^x300)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = -1;
	static uint16_t x304 = 1177U;
	static volatile int32_t t75 = -1;

	t75 = (x301|(x302|(x303^x304)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 10U;
	static int64_t x306 = -198610700429676LL;
	int16_t x308 = INT16_MAX;
	int64_t t76 = -179058609LL;

	t76 = (x305|(x306|(x307^x308)));

	if (t76 != -26978LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	uint8_t x310 = 16U;
	uint16_t x312 = 274U;
	volatile uint32_t t77 = UINT32_MAX;

	t77 = (x309|(x310|(x311^x312)));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = INT8_MIN;
	int32_t x315 = 514;
	int8_t x316 = -1;
	static volatile int32_t t78 = 2069;

	t78 = (x313|(x314|(x315^x316)));

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 81U;
	int8_t x318 = INT8_MAX;
	int8_t x319 = -1;
	uint8_t x320 = 15U;
	int32_t t79 = -252;

	t79 = (x317|(x318|(x319^x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = INT16_MIN;
	int16_t x323 = -1;
	int32_t x324 = INT32_MAX;
	volatile int32_t t80 = 4703967;

	t80 = (x321|(x322|(x323^x324)));

	if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x326 = 7U;
	static int64_t x327 = INT64_MIN;

	t81 = (x325|(x326|(x327^x328)));

	if (t81 != 9223442225372618911LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	int32_t x330 = -265199978;
	int32_t x331 = INT32_MIN;
	int32_t x332 = 24;
	static volatile int64_t t82 = -32830188776109LL;

	t82 = (x329|(x330|(x331^x332)));

	if (t82 != -265199970LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	volatile int32_t x334 = INT32_MIN;
	int16_t x335 = -2619;
	static uint32_t x336 = 364794U;
	volatile uint32_t t83 = 0U;

	t83 = (x333|(x334|(x335^x336)));

	if (t83 != 4294606847U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -441;
	int16_t x338 = INT16_MIN;
	static volatile int64_t x339 = 0LL;
	int16_t x340 = INT16_MAX;
	volatile int64_t t84 = 296LL;

	t84 = (x337|(x338|(x339^x340)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x342 = 4U;
	static int64_t x343 = 277452133978363LL;
	static int16_t x344 = -24;
	int64_t t85 = 1LL;

	t85 = (x341|(x342|(x343^x344)));

	if (t85 != -1541624041LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int16_t x346 = 5;
	int32_t x347 = INT32_MIN;
	static int8_t x348 = INT8_MIN;
	int64_t t86 = INT64_MAX;

	t86 = (x345|(x346|(x347^x348)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x349 = 40290899U;
	volatile int64_t x351 = -1LL;
	volatile int64_t t87 = -18177LL;

	t87 = (x349|(x350|(x351^x352)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 11U;
	int32_t x354 = -371547517;
	int16_t x355 = INT16_MIN;
	static volatile int64_t t88 = -221232542LL;

	t88 = (x353|(x354|(x355^x356)));

	if (t88 != -335566101LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;

	t89 = (x357|(x358|(x359^x360)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = INT64_MAX;
	static uint64_t x362 = 258087028785015906LLU;
	int8_t x363 = 0;
	int64_t x364 = INT64_MAX;
	uint64_t t90 = 938LLU;

	t90 = (x361|(x362|(x363^x364)));

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 7U;
	static volatile uint32_t x368 = 39149U;
	volatile int64_t t91 = 17774867747484424LL;

	t91 = (x365|(x366|(x367^x368)));

	if (t91 != -21417LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x370 = -15453709;
	uint32_t x371 = 4U;
	static int32_t x372 = 19;
	volatile uint32_t t92 = 23U;

	t92 = (x369|(x370|(x371^x372)));

	if (t92 != 4294947319U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	static int32_t x374 = INT32_MIN;
	int32_t x376 = 5517017;
	int64_t t93 = 27846LL;

	t93 = (x373|(x374|(x375^x376)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 19458910LLU;
	volatile int16_t x378 = 746;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 18596209132133864LLU;
	uint64_t t94 = 0LLU;

	t94 = (x377|(x378|(x379^x380)));

	if (t94 != 9241968245986951166LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = UINT16_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t95 = -30567954;

	t95 = (x381|(x382|(x383^x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x386 = -1;
	static volatile int8_t x387 = -1;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (x385|(x386|(x387^x388)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -7938069;
	uint8_t x390 = UINT8_MAX;
	volatile uint64_t x391 = 4354763LLU;
	volatile uint64_t t97 = 559363398794819984LLU;

	t97 = (x389|(x390|(x391^x392)));

	if (t97 != 18446744073705816063LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	static int16_t x394 = -1;
	volatile int32_t x395 = -1;
	volatile int8_t x396 = -25;
	volatile int32_t t98 = 8456739;

	t98 = (x393|(x394|(x395^x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -7;
	int32_t x398 = -46936;
	int32_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int32_t t99 = 27246122;

	t99 = (x397|(x398|(x399^x400)));

	if (t99 != -1) { NG(); } else { ; }
	
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

