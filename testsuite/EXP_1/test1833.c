#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 240840358541LLU;
volatile int16_t x10 = 5985;
static volatile int16_t x19 = INT16_MAX;
int8_t x23 = INT8_MIN;
static uint8_t x24 = 4U;
uint64_t t6 = 1070104559LLU;
volatile uint64_t t7 = 30LLU;
volatile int32_t x35 = INT32_MAX;
int8_t x40 = -1;
static volatile int32_t t9 = 25775421;
static int32_t x42 = INT32_MAX;
volatile int16_t x50 = -1;
static volatile int32_t x58 = 12011;
int32_t x60 = INT32_MIN;
uint8_t x61 = 104U;
static int8_t x67 = INT8_MIN;
uint8_t x77 = 0U;
volatile int8_t x80 = INT8_MIN;
static int64_t x82 = INT64_MIN;
int32_t x87 = -401;
int64_t x90 = INT64_MIN;
int32_t x97 = -1;
static int32_t x99 = -1;
uint16_t x103 = 3U;
int64_t t27 = -25421LL;
uint32_t x115 = UINT32_MAX;
volatile int16_t x120 = -1;
uint64_t t30 = 29809LLU;
volatile int32_t t31 = 211440364;
uint8_t x135 = UINT8_MAX;
int16_t x139 = -1;
volatile int64_t t35 = 12LL;
uint64_t x146 = UINT64_MAX;
int64_t x148 = INT64_MAX;
volatile int32_t x156 = INT32_MAX;
volatile uint64_t t39 = 326449LLU;
uint8_t x161 = UINT8_MAX;
int8_t x163 = -1;
volatile uint32_t t41 = 0U;
volatile int32_t x173 = -1;
uint32_t t43 = UINT32_MAX;
uint16_t x182 = UINT16_MAX;
uint64_t x187 = 6641655498LLU;
static int64_t x190 = INT64_MIN;
int64_t x192 = INT64_MAX;
static int16_t x194 = INT16_MAX;
uint32_t x195 = 1U;
int32_t x198 = INT32_MIN;
volatile int32_t x202 = INT32_MAX;
static volatile uint64_t x203 = UINT64_MAX;
int16_t x206 = INT16_MAX;
int64_t x208 = -1LL;
static volatile uint64_t t51 = 33076261LLU;
uint64_t x220 = UINT64_MAX;
int16_t x223 = -1;
int64_t t55 = -3099705LL;
int8_t x225 = INT8_MIN;
int8_t x226 = INT8_MIN;
uint16_t x231 = 479U;
int32_t t57 = 3;
static volatile int8_t x238 = -1;
int64_t t60 = 4847285224LL;
int32_t x245 = -545;
int16_t x248 = INT16_MAX;
volatile uint8_t x249 = 1U;
uint64_t x250 = 255LLU;
int8_t x254 = INT8_MIN;
volatile int8_t x257 = 48;
static int32_t x258 = INT32_MAX;
volatile int64_t x262 = -1LL;
volatile uint8_t x266 = 126U;
uint8_t x267 = UINT8_MAX;
volatile uint64_t t67 = 659233321734863145LLU;
uint32_t x280 = 198U;
uint64_t t70 = 1798225245358472852LLU;
int32_t t71 = -217873523;
static int8_t x291 = INT8_MIN;
uint16_t x292 = UINT16_MAX;
volatile int64_t x295 = -1LL;
static int64_t x302 = INT64_MIN;
uint32_t x307 = 287948806U;
int8_t x312 = INT8_MIN;
int8_t x314 = INT8_MAX;
static uint64_t x316 = 49551331784LLU;
uint16_t x325 = 3U;
static int32_t x328 = INT32_MIN;
int8_t x333 = -6;
static volatile uint64_t t84 = 1049394LLU;
uint64_t x342 = 3268215352846332LLU;
static uint16_t x344 = UINT16_MAX;
static uint64_t t85 = 85441141672LLU;
int64_t x346 = INT64_MIN;
static volatile int64_t t86 = 823208LL;
static volatile int16_t x351 = INT16_MIN;
volatile int32_t t87 = 7647482;
int64_t x355 = -3468LL;
static int64_t x363 = -364128438LL;
int8_t x367 = 21;
int16_t x370 = INT16_MAX;
volatile uint16_t x379 = UINT16_MAX;
int16_t x382 = INT16_MAX;
int64_t x383 = -817LL;
int32_t x384 = 26129610;
int64_t t95 = -146419LL;
static uint16_t x385 = 57U;
int32_t x387 = -1824;
volatile int32_t t96 = -14;
int32_t x393 = -1;
static int64_t x399 = -5346LL;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	static uint32_t x2 = UINT32_MAX;
	static uint16_t x3 = UINT16_MAX;
	uint8_t x4 = 44U;
	volatile uint64_t t0 = 26943LLU;

	t0 = (((x1&x2)&x3)^x4);

	if (t0 != 65491LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -29;
	int64_t x6 = 151537709LL;
	int64_t x7 = INT64_MIN;
	static uint64_t t1 = 86105536598764LLU;

	t1 = (((x5&x6)&x7)^x8);

	if (t1 != 240840358541LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -479454;
	volatile int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = (((x9&x10)&x11)^x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x14 = INT16_MIN;
	volatile int16_t x15 = -1;
	static int32_t x16 = -1;
	int32_t t3 = -49471434;

	t3 = (((x13&x14)&x15)^x16);

	if (t3 != -32769) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -26;
	int32_t x18 = INT32_MAX;
	int32_t x20 = 408075;
	volatile int32_t t4 = 5;

	t4 = (((x17&x18)&x19)^x20);

	if (t4 != 411117) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 123LLU;
	int8_t x22 = INT8_MAX;
	uint64_t t5 = 9776LLU;

	t5 = (((x21&x22)&x23)^x24);

	if (t5 != 4LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x26 = 0;
	int16_t x27 = 4;
	int64_t x28 = 3689119553615138473LL;

	t6 = (((x25&x26)&x27)^x28);

	if (t6 != 3689119553615138473LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 126715631498458611LLU;
	uint32_t x30 = 311U;
	int32_t x31 = INT32_MAX;
	int8_t x32 = -2;

	t7 = (((x29&x30)&x31)^x32);

	if (t7 != 18446744073709551309LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int64_t x34 = -3309LL;
	uint32_t x36 = UINT32_MAX;
	int64_t t8 = -328161349572LL;

	t8 = (((x33&x34)&x35)^x36);

	if (t8 != 2147486975LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	int32_t x38 = INT32_MAX;
	int16_t x39 = 4;

	t9 = (((x37&x38)&x39)^x40);

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x43 = -35;
	static int8_t x44 = INT8_MIN;
	uint32_t t10 = 1897709831U;

	t10 = (((x41&x42)&x43)^x44);

	if (t10 != 2147483741U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	int8_t x46 = -1;
	volatile int32_t x47 = -1;
	static uint64_t x48 = UINT64_MAX;
	uint64_t t11 = 3959393291887183LLU;

	t11 = (((x45&x46)&x47)^x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	static volatile uint64_t x51 = 5097LLU;
	int16_t x52 = INT16_MIN;
	volatile uint64_t t12 = 7125225105520896922LLU;

	t12 = (((x49&x50)&x51)^x52);

	if (t12 != 18446744073709523945LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 17;
	int32_t x54 = INT32_MAX;
	int16_t x55 = INT16_MIN;
	int8_t x56 = INT8_MAX;
	volatile int32_t t13 = 1813;

	t13 = (((x53&x54)&x55)^x56);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 0U;
	int32_t x59 = INT32_MAX;
	int32_t t14 = INT32_MIN;

	t14 = (((x57&x58)&x59)^x60);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x62 = 44U;
	int8_t x63 = 1;
	int16_t x64 = -40;
	volatile uint32_t t15 = 5201U;

	t15 = (((x61&x62)&x63)^x64);

	if (t15 != 4294967256U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile int16_t x66 = -1;
	uint32_t x68 = UINT32_MAX;
	uint32_t t16 = 13380U;

	t16 = (((x65&x66)&x67)^x68);

	if (t16 != 32767U) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 1U;
	int64_t x71 = -1LL;
	volatile int8_t x72 = -1;
	int64_t t17 = -39856948606445450LL;

	t17 = (((x69&x70)&x71)^x72);

	if (t17 != -2LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 5U;
	uint32_t x74 = UINT32_MAX;
	volatile int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MIN;
	volatile int64_t t18 = INT64_MIN;

	t18 = (((x73&x74)&x75)^x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x78 = 62U;
	volatile int8_t x79 = 1;
	uint32_t t19 = 104177U;

	t19 = (((x77&x78)&x79)^x80);

	if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -7;
	uint8_t x83 = UINT8_MAX;
	volatile uint16_t x84 = 0U;
	volatile int64_t t20 = 71504572LL;

	t20 = (((x81&x82)&x83)^x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 1;
	int8_t x86 = -2;
	volatile int32_t x88 = -1;
	volatile int32_t t21 = 28868;

	t21 = (((x85&x86)&x87)^x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 485U;
	static uint8_t x91 = 0U;
	uint16_t x92 = UINT16_MAX;
	static int64_t t22 = 1LL;

	t22 = (((x89&x90)&x91)^x92);

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	int16_t x94 = INT16_MAX;
	uint32_t x95 = 931834615U;
	int16_t x96 = 150;
	uint32_t t23 = 105132U;

	t23 = (((x93&x94)&x95)^x96);

	if (t23 != 10849U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x98 = UINT8_MAX;
	static uint8_t x100 = 22U;
	volatile int32_t t24 = -2977;

	t24 = (((x97&x98)&x99)^x100);

	if (t24 != 233) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	static int32_t x102 = INT32_MIN;
	volatile int64_t x104 = INT64_MIN;
	volatile uint64_t t25 = 1LLU;

	t25 = (((x101&x102)&x103)^x104);

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 1U;
	volatile int64_t x106 = INT64_MIN;
	static int64_t x107 = INT64_MIN;
	int32_t x108 = -1;
	volatile int64_t t26 = 1777004600311LL;

	t26 = (((x105&x106)&x107)^x108);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 6614672;
	int8_t x110 = 6;
	static int64_t x111 = INT64_MIN;
	uint8_t x112 = 14U;

	t27 = (((x109&x110)&x111)^x112);

	if (t27 != 14LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x113 = 1U;
	volatile int32_t x114 = INT32_MAX;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 5003LL;

	t28 = (((x113&x114)&x115)^x116);

	if (t28 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 7;
	static uint8_t x118 = UINT8_MAX;
	volatile uint16_t x119 = 5240U;
	int32_t t29 = 0;

	t29 = (((x117&x118)&x119)^x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -561;
	uint16_t x122 = 27018U;
	uint64_t x123 = 1248492673495694LLU;
	uint32_t x124 = UINT32_MAX;

	t30 = (((x121&x122)&x123)^x124);

	if (t30 != 4294942581LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	static int16_t x126 = 0;
	static volatile int8_t x127 = -3;
	int8_t x128 = INT8_MAX;

	t31 = (((x125&x126)&x127)^x128);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	int32_t x131 = -34031386;
	int32_t x132 = -1;
	volatile int32_t t32 = INT32_MAX;

	t32 = (((x129&x130)&x131)^x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 83806LLU;
	static int8_t x134 = -43;
	int8_t x136 = INT8_MAX;
	static volatile uint64_t t33 = 1394917240479LLU;

	t33 = (((x133&x134)&x135)^x136);

	if (t33 != 43LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	uint16_t x138 = 8049U;
	volatile int8_t x140 = -1;
	int32_t t34 = 855924;

	t34 = (((x137&x138)&x139)^x140);

	if (t34 != -8050) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	volatile int64_t x142 = INT64_MIN;
	static int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MAX;

	t35 = (((x141&x142)&x143)^x144);

	if (t35 != 32767LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int64_t x147 = 21954LL;
	volatile uint64_t t36 = 17LLU;

	t36 = (((x145&x146)&x147)^x148);

	if (t36 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int8_t x150 = INT8_MIN;
	volatile uint8_t x151 = UINT8_MAX;
	static uint16_t x152 = 13U;
	volatile uint32_t t37 = 861U;

	t37 = (((x149&x150)&x151)^x152);

	if (t37 != 141U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = -1;
	static int64_t x154 = 0LL;
	int32_t x155 = INT32_MIN;
	volatile int64_t t38 = 0LL;

	t38 = (((x153&x154)&x155)^x156);

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -364289LL;
	static uint16_t x158 = 105U;
	uint16_t x159 = UINT16_MAX;
	uint64_t x160 = 779884328258LLU;

	t39 = (((x157&x158)&x159)^x160);

	if (t39 != 779884328235LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x162 = 6197U;
	static volatile int16_t x164 = INT16_MAX;
	int32_t t40 = 619;

	t40 = (((x161&x162)&x163)^x164);

	if (t40 != 32714) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x166 = 1072932209;
	volatile int32_t x167 = 319620;
	uint32_t x168 = 3130U;

	t41 = (((x165&x166)&x167)^x168);

	if (t41 != 3130U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile uint16_t x170 = 1U;
	uint32_t x171 = 5716090U;
	static int32_t x172 = INT32_MIN;
	volatile int64_t t42 = -73136389084093LL;

	t42 = (((x169&x170)&x171)^x172);

	if (t42 != -2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 39307704U;
	uint16_t x175 = 0U;
	uint32_t x176 = UINT32_MAX;

	t43 = (((x173&x174)&x175)^x176);

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 62195292578LLU;
	volatile int8_t x178 = -7;
	int8_t x179 = INT8_MAX;
	static volatile int16_t x180 = 0;
	uint64_t t44 = 52626223819LLU;

	t44 = (((x177&x178)&x179)^x180);

	if (t44 != 32LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	static uint64_t x183 = 29995008LLU;
	uint16_t x184 = 0U;
	uint64_t t45 = 26355275LLU;

	t45 = (((x181&x182)&x183)^x184);

	if (t45 != 45056LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	int8_t x188 = INT8_MIN;
	volatile uint64_t t46 = 60770178013770465LLU;

	t46 = (((x185&x186)&x187)^x188);

	if (t46 != 18446744067067903872LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -13;
	int16_t x191 = INT16_MAX;
	int64_t t47 = INT64_MAX;

	t47 = (((x189&x190)&x191)^x192);

	if (t47 != INT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MAX;
	int16_t x196 = -14412;
	volatile uint32_t t48 = 192508738U;

	t48 = (((x193&x194)&x195)^x196);

	if (t48 != 4294952885U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	uint64_t x199 = UINT64_MAX;
	static int16_t x200 = -1;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (((x197&x198)&x199)^x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x201 = 637050804037961222LLU;
	int16_t x204 = INT16_MAX;
	static uint64_t t50 = 84368LLU;

	t50 = (((x201&x202)&x203)^x204);

	if (t50 != 1049573881LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 10829012309391LLU;
	static int16_t x207 = -884;

	t51 = (((x205&x206)&x207)^x208);

	if (t51 != 18446744073709546355LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = UINT8_MAX;
	uint16_t x210 = 32U;
	static volatile int64_t x211 = 207347731LL;
	int8_t x212 = INT8_MAX;
	static volatile int64_t t52 = 533251213215606304LL;

	t52 = (((x209&x210)&x211)^x212);

	if (t52 != 127LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	static uint64_t x215 = 3LLU;
	volatile int64_t x216 = INT64_MIN;
	uint64_t t53 = 1329LLU;

	t53 = (((x213&x214)&x215)^x216);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 2413443LLU;
	int8_t x218 = 5;
	int8_t x219 = -23;
	uint64_t t54 = 60564309LLU;

	t54 = (((x217&x218)&x219)^x220);

	if (t54 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	volatile int64_t x222 = -1LL;
	int32_t x224 = INT32_MIN;

	t55 = (((x221&x222)&x223)^x224);

	if (t55 != -2147450881LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x227 = INT16_MIN;
	int64_t x228 = -1LL;
	int64_t t56 = 232731325271LL;

	t56 = (((x225&x226)&x227)^x228);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 5U;
	static int32_t x230 = INT32_MAX;
	volatile uint16_t x232 = UINT16_MAX;

	t57 = (((x229&x230)&x231)^x232);

	if (t57 != 65530) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x233 = 0U;
	int32_t x234 = INT32_MAX;
	volatile uint32_t x235 = 313535U;
	volatile uint16_t x236 = UINT16_MAX;
	volatile uint32_t t58 = 105U;

	t58 = (((x233&x234)&x235)^x236);

	if (t58 != 65535U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	int64_t x239 = INT64_MAX;
	static int64_t x240 = INT64_MAX;
	volatile uint64_t t59 = 23899406LLU;

	t59 = (((x237&x238)&x239)^x240);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	int32_t x242 = INT32_MIN;
	int32_t x243 = -1;
	int64_t x244 = 649091545013LL;

	t60 = (((x241&x242)&x243)^x244);

	if (t60 != -650136062027LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x246 = 415020U;
	uint64_t x247 = 2205469161LLU;
	volatile uint64_t t61 = 0LLU;

	t61 = (((x245&x246)&x247)^x248);

	if (t61 != 278263LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x251 = 7U;
	volatile int8_t x252 = -19;
	volatile uint64_t t62 = 3108336008188LLU;

	t62 = (((x249&x250)&x251)^x252);

	if (t62 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	volatile uint64_t x255 = 22371653419LLU;
	uint64_t x256 = 33299219691LLU;
	static uint64_t t63 = 74884871007155304LLU;

	t63 = (((x253&x254)&x255)^x256);

	if (t63 != 12712776683LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x259 = INT32_MIN;
	volatile uint64_t x260 = 4734972053820LLU;
	volatile uint64_t t64 = 2016958LLU;

	t64 = (((x257&x258)&x259)^x260);

	if (t64 != 4734972053820LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x261 = 4U;
	static int64_t x263 = INT64_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = 57510331337LLU;

	t65 = (((x261&x262)&x263)^x264);

	if (t65 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x265 = -1LL;
	uint8_t x268 = UINT8_MAX;
	int64_t t66 = -5460939LL;

	t66 = (((x265&x266)&x267)^x268);

	if (t66 != 129LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = 5752869101380371LL;
	int64_t x270 = -1LL;
	volatile uint64_t x271 = 3585886829996345LLU;
	static int16_t x272 = INT16_MAX;

	t67 = (((x269&x270)&x271)^x272);

	if (t67 != 1178745556721390LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = 51433663140921LL;
	int8_t x274 = INT8_MAX;
	static int8_t x275 = -1;
	static uint32_t x276 = 837880726U;
	int64_t t68 = -27LL;

	t68 = (((x273&x274)&x275)^x276);

	if (t68 != 837880751LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	static int32_t x278 = 8482;
	int32_t x279 = INT32_MIN;
	uint32_t t69 = 575029326U;

	t69 = (((x277&x278)&x279)^x280);

	if (t69 != 198U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = 275398327561LLU;
	uint64_t x283 = 2LLU;
	int64_t x284 = -2762557685506316612LL;

	t70 = (((x281&x282)&x283)^x284);

	if (t70 != 15684186388203235004LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	volatile int16_t x286 = INT16_MIN;
	int8_t x287 = -1;
	int8_t x288 = -1;

	t71 = (((x285&x286)&x287)^x288);

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint32_t x290 = UINT32_MAX;
	uint32_t t72 = 1243467076U;

	t72 = (((x289&x290)&x291)^x292);

	if (t72 != 4294901887U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	static int32_t x294 = INT32_MAX;
	uint64_t x296 = 2389229980246LLU;
	uint64_t t73 = 0LLU;

	t73 = (((x293&x294)&x295)^x296);

	if (t73 != 2388921136553LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = 17;
	int16_t x298 = INT16_MAX;
	int32_t x299 = INT32_MAX;
	volatile int16_t x300 = INT16_MAX;
	int32_t t74 = -1038342650;

	t74 = (((x297&x298)&x299)^x300);

	if (t74 != 32750) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MIN;
	static volatile int8_t x303 = INT8_MIN;
	volatile int8_t x304 = -1;
	int64_t t75 = INT64_MAX;

	t75 = (((x301&x302)&x303)^x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int32_t x306 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	static uint32_t t76 = 0U;

	t76 = (((x305&x306)&x307)^x308);

	if (t76 != 4294934528U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 42;
	int64_t x310 = INT64_MIN;
	int16_t x311 = INT16_MIN;
	int64_t t77 = 55605801681014LL;

	t77 = (((x309&x310)&x311)^x312);

	if (t77 != -128LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int8_t x315 = -40;
	static volatile uint64_t t78 = 5LLU;

	t78 = (((x313&x314)&x315)^x316);

	if (t78 != 49551331728LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = 473;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = 129219067LLU;
	int8_t x320 = INT8_MIN;
	static volatile uint64_t t79 = 3827LLU;

	t79 = (((x317&x318)&x319)^x320);

	if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MAX;
	int32_t x322 = -28945054;
	int32_t x323 = -6579;
	int16_t x324 = -435;
	volatile int64_t t80 = 10073389LL;

	t80 = (((x321&x322)&x323)^x324);

	if (t80 != -9223372036825826803LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x326 = INT64_MIN;
	uint16_t x327 = 4U;
	volatile int64_t t81 = -4438220305820315614LL;

	t81 = (((x325&x326)&x327)^x328);

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int16_t x330 = INT16_MIN;
	static int32_t x331 = -1;
	int8_t x332 = -43;
	volatile int32_t t82 = 732;

	t82 = (((x329&x330)&x331)^x332);

	if (t82 != -2147450923) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = INT16_MAX;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = 518059541;
	int32_t t83 = 62;

	t83 = (((x333&x334)&x335)^x336);

	if (t83 != 518059759) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x337 = 439LLU;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 12U;
	int32_t x340 = 825;

	t84 = (((x337&x338)&x339)^x340);

	if (t84 != 825LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -3333403;
	uint32_t x343 = 28663U;

	t85 = (((x341&x342)&x343)^x344);

	if (t85 != 56603LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	int64_t x347 = INT64_MAX;
	int32_t x348 = INT32_MAX;

	t86 = (((x345&x346)&x347)^x348);

	if (t86 != 2147483647LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	uint8_t x350 = 7U;
	uint8_t x352 = 1U;

	t87 = (((x349&x350)&x351)^x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 14665U;
	int64_t x354 = -1LL;
	int8_t x356 = 9;
	int64_t t88 = -6322491904810LL;

	t88 = (((x353&x354)&x355)^x356);

	if (t88 != 12361LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = 24U;
	volatile int16_t x358 = 969;
	uint64_t x359 = 25023468LLU;
	int64_t x360 = -1LL;
	volatile uint64_t t89 = 201078016142033LLU;

	t89 = (((x357&x358)&x359)^x360);

	if (t89 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	int16_t x362 = INT16_MIN;
	int16_t x364 = 1282;
	volatile int64_t t90 = -553LL;

	t90 = (((x361&x362)&x363)^x364);

	if (t90 != -364149502LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MAX;
	volatile int64_t x366 = INT64_MIN;
	int32_t x368 = -1;
	volatile int64_t t91 = -109LL;

	t91 = (((x365&x366)&x367)^x368);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 44U;
	int32_t x371 = INT32_MAX;
	int32_t x372 = -1254;
	static volatile int32_t t92 = -3692703;

	t92 = (((x369&x370)&x371)^x372);

	if (t92 != -1226) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = -1792475LL;
	volatile int32_t x375 = INT32_MIN;
	int16_t x376 = -450;
	static volatile int64_t t93 = -1003043LL;

	t93 = (((x373&x374)&x375)^x376);

	if (t93 != 2147483198LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	uint32_t x378 = 993132048U;
	volatile int8_t x380 = INT8_MAX;
	uint32_t t94 = 744U;

	t94 = (((x377&x378)&x379)^x380);

	if (t94 != 111U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = -59609LL;

	t95 = (((x381&x382)&x383)^x384);

	if (t95 != 26124493LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x386 = INT32_MIN;
	uint16_t x388 = UINT16_MAX;

	t96 = (((x385&x386)&x387)^x388);

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int64_t x390 = 62LL;
	int64_t x391 = INT64_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t97 = 535587283LLU;

	t97 = (((x389&x390)&x391)^x392);

	if (t97 != 9223372036854775870LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x394 = 831603U;
	uint16_t x395 = 1762U;
	static int32_t x396 = -120;
	uint32_t t98 = 0U;

	t98 = (((x393&x394)&x395)^x396);

	if (t98 != 4294967274U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 1U;
	int8_t x398 = INT8_MAX;
	int16_t x400 = INT16_MIN;
	volatile int64_t t99 = -2842143036LL;

	t99 = (((x397&x398)&x399)^x400);

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

