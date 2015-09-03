#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 17677861LL;
uint64_t t3 = 19637704652LLU;
int32_t x30 = 4576483;
uint32_t x32 = 3808U;
int8_t x37 = INT8_MAX;
static int8_t x42 = INT8_MIN;
int64_t x44 = -1LL;
uint16_t x46 = 18997U;
uint64_t x48 = UINT64_MAX;
uint16_t x49 = 25878U;
static int64_t t9 = 1859LL;
static int32_t x62 = INT32_MAX;
int32_t x74 = INT32_MIN;
volatile int64_t t12 = -3592032523134LL;
static int32_t x81 = INT32_MIN;
int32_t x92 = 249;
int32_t t15 = -78;
int64_t x93 = -102LL;
int32_t x100 = 5;
int32_t t17 = 616;
volatile int64_t x103 = INT64_MIN;
int64_t x108 = -3LL;
volatile int64_t t19 = 2677023895005LL;
uint16_t x110 = 1U;
uint64_t x111 = UINT64_MAX;
int16_t x116 = -6;
static int16_t x118 = 14;
volatile int32_t t23 = 146121048;
uint16_t x130 = 223U;
int16_t x132 = INT16_MAX;
int64_t t24 = -20LL;
int8_t x135 = INT8_MIN;
static uint32_t x136 = 216956U;
volatile int32_t x156 = INT32_MIN;
static volatile int64_t t29 = 1LL;
uint8_t x160 = UINT8_MAX;
uint32_t t30 = 5714U;
int16_t x164 = INT16_MAX;
static uint16_t x165 = UINT16_MAX;
volatile int64_t t34 = -6LL;
int8_t x177 = -1;
uint16_t x180 = 527U;
volatile int32_t t35 = 88665;
volatile uint8_t x184 = 2U;
static uint64_t t36 = 3639LLU;
int8_t x193 = 0;
int32_t t39 = -425;
int64_t x211 = -412229951LL;
uint8_t x228 = UINT8_MAX;
uint64_t x229 = 16829340271LLU;
uint16_t x231 = 499U;
volatile int32_t x234 = 269;
static uint16_t x235 = 3U;
static volatile int8_t x242 = -1;
int32_t x249 = -1;
uint64_t x250 = 2876LLU;
int64_t x252 = INT64_MAX;
uint32_t x254 = UINT32_MAX;
uint64_t x256 = UINT64_MAX;
int64_t x258 = INT64_MIN;
int32_t x263 = 1;
volatile int64_t t51 = -365090733857748583LL;
int16_t x266 = 1739;
int8_t x272 = INT8_MAX;
int64_t x279 = INT64_MIN;
int64_t t56 = 6641816361312LL;
uint16_t x286 = UINT16_MAX;
static int8_t x287 = -1;
int16_t x291 = 0;
int8_t x292 = INT8_MAX;
int64_t x299 = INT64_MIN;
uint8_t x318 = 6U;
static int64_t t65 = 113397079238122058LL;
int32_t x321 = INT32_MAX;
static int16_t x322 = -1;
volatile int32_t x323 = INT32_MIN;
static volatile int64_t x325 = -9499200368821690LL;
int64_t x333 = INT64_MAX;
int64_t x335 = -1LL;
int8_t x341 = INT8_MIN;
static uint8_t x344 = UINT8_MAX;
uint16_t x345 = 3845U;
int8_t x348 = 0;
int64_t x352 = INT64_MIN;
uint32_t x360 = 46U;
static volatile int64_t t75 = -102670197399024LL;
uint32_t x367 = 21689074U;
volatile uint64_t x370 = UINT64_MAX;
volatile int16_t x374 = -1;
int64_t t78 = -1LL;
static int32_t t79 = 58111108;
int8_t x381 = -1;
uint8_t x383 = UINT8_MAX;
volatile int32_t t80 = -17;
int32_t x386 = 329642;
uint32_t x399 = UINT32_MAX;
int8_t x400 = INT8_MIN;
static uint32_t x403 = 53061U;
static uint64_t t86 = 447922172645993882LLU;
int32_t t87 = 424837;
int32_t x417 = INT32_MIN;
volatile int64_t x419 = INT64_MIN;
volatile int32_t x422 = INT32_MAX;
int32_t x430 = INT32_MIN;
static int8_t x433 = -3;
uint16_t x446 = UINT16_MAX;
int32_t x456 = -1;
volatile uint64_t x462 = UINT64_MAX;
volatile int16_t x465 = -7;
int32_t x468 = 15313;


void f0(void) {
	int64_t x2 = INT64_MIN;
	int32_t x3 = INT32_MIN;
	int8_t x4 = -53;
	static int64_t t0 = 164557LL;

	t0 = ((x1%(x2^x3))+x4);

	if (t0 != 17677808LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MIN;
	static int16_t x14 = INT16_MIN;
	uint64_t x15 = 5054182374757LLU;
	int64_t x16 = -1LL;
	static volatile uint64_t t1 = 48007LLU;

	t1 = ((x13%(x14^x15))+x16);

	if (t1 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x21 = INT64_MIN;
	static int8_t x22 = 1;
	static uint16_t x23 = 1300U;
	int8_t x24 = INT8_MIN;
	int64_t t2 = 17257LL;

	t2 = ((x21%(x22^x23))+x24);

	if (t2 != -1395LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = UINT64_MAX;
	uint64_t x27 = 22013804LLU;
	int64_t x28 = 305LL;

	t3 = ((x25%(x26^x27))+x28);

	if (t3 != 9223372036854776113LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x29 = 15844782;
	int32_t x31 = -19;
	volatile uint32_t t4 = 64738909U;

	t4 = ((x29%(x30^x31))+x32);

	if (t4 != 2119096U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MIN;
	static int32_t x34 = 508;
	int32_t x35 = 355;
	int8_t x36 = -16;
	int32_t t5 = -657259087;

	t5 = ((x33%(x34^x35))+x36);

	if (t5 != -144) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x38 = 0U;
	uint64_t x39 = 1231LLU;
	static int32_t x40 = INT32_MIN;
	volatile uint64_t t6 = 600058280163360LLU;

	t6 = ((x37%(x38^x39))+x40);

	if (t6 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -29;
	volatile int8_t x43 = -1;
	int64_t t7 = -141991LL;

	t7 = ((x41%(x42^x43))+x44);

	if (t7 != -30LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MIN;
	int8_t x47 = INT8_MAX;
	uint64_t t8 = 67418932941047LLU;

	t8 = ((x45%(x46^x47))+x48);

	if (t8 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = 337;
	static int8_t x51 = 10;
	static int64_t x52 = -1LL;

	t9 = ((x49%(x50^x51))+x52);

	if (t9 != 199LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -1LL;
	static int8_t x58 = INT8_MIN;
	int64_t x59 = INT64_MIN;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int64_t t10 = -2053050LL;

	t10 = ((x57%(x58^x59))+x60);

	if (t10 != 254LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	uint16_t x63 = UINT16_MAX;
	uint32_t x64 = 69503207U;
	volatile uint32_t t11 = 3U;

	t11 = ((x61%(x62^x63))+x64);

	if (t11 != 69634278U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x73 = -3140823033914LL;
	int8_t x75 = 61;
	int8_t x76 = INT8_MIN;

	t12 = ((x73%(x74^x75))+x76);

	if (t12 != -1202029848LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x77 = INT16_MIN;
	int32_t x78 = -235619214;
	volatile uint8_t x79 = UINT8_MAX;
	uint64_t x80 = 99430995599952240LLU;
	static volatile uint64_t t13 = 102599LLU;

	t13 = ((x77%(x78^x79))+x80);

	if (t13 != 99430995599919472LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x82 = UINT16_MAX;
	int32_t x83 = -1;
	int16_t x84 = INT16_MIN;
	volatile int32_t t14 = 1;

	t14 = ((x81%(x82^x83))+x84);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = 2U;
	static volatile int32_t x90 = INT32_MAX;
	static int8_t x91 = 8;

	t15 = ((x89%(x90^x91))+x92);

	if (t15 != 251) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x94 = -1;
	static int32_t x95 = -55;
	uint16_t x96 = 49U;
	static volatile int64_t t16 = 1LL;

	t16 = ((x93%(x94^x95))+x96);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = -13;
	int16_t x99 = INT16_MIN;

	t17 = ((x97%(x98^x99))+x100);

	if (t17 != -123) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = 6;
	uint8_t x102 = UINT8_MAX;
	int32_t x104 = INT32_MIN;
	int64_t t18 = -41250753LL;

	t18 = ((x101%(x102^x103))+x104);

	if (t18 != -2147483642LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x105 = INT8_MIN;
	uint8_t x106 = 1U;
	uint16_t x107 = 9864U;

	t19 = ((x105%(x106^x107))+x108);

	if (t19 != -131LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = INT8_MIN;
	volatile int8_t x112 = -1;
	uint64_t t20 = 3580933354886852075LLU;

	t20 = ((x109%(x110^x111))+x112);

	if (t20 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = -2;
	static uint8_t x114 = 10U;
	volatile int8_t x115 = INT8_MIN;
	volatile int32_t t21 = 7194711;

	t21 = ((x113%(x114^x115))+x116);

	if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x117 = UINT32_MAX;
	int32_t x119 = -6710373;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t22 = 434U;

	t22 = ((x117%(x118^x119))+x120);

	if (t22 != 6710377U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = -51;
	int16_t x126 = INT16_MAX;
	static int32_t x127 = INT32_MIN;
	static int32_t x128 = INT32_MAX;

	t23 = ((x125%(x126^x127))+x128);

	if (t23 != 2147483596) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = UINT32_MAX;
	int64_t x131 = -1LL;

	t24 = ((x129%(x130^x131))+x132);

	if (t24 != 32798LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x133 = 0U;
	int64_t x134 = -4160093248836499930LL;
	int64_t t25 = 1930774582012800515LL;

	t25 = ((x133%(x134^x135))+x136);

	if (t25 != 216956LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x137 = UINT8_MAX;
	uint64_t x138 = 65958LLU;
	int64_t x139 = -1868839484894466LL;
	uint16_t x140 = 43U;
	volatile uint64_t t26 = 117081007LLU;

	t26 = ((x137%(x138^x139))+x140);

	if (t26 != 298LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x141 = -34;
	volatile int32_t x142 = INT32_MIN;
	volatile int8_t x143 = INT8_MIN;
	static int32_t x144 = -4995;
	volatile int32_t t27 = 15010597;

	t27 = ((x141%(x142^x143))+x144);

	if (t27 != -5029) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = -1;
	volatile uint16_t x146 = UINT16_MAX;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -2299205;
	volatile int32_t t28 = -1549398;

	t28 = ((x145%(x146^x147))+x148);

	if (t28 != -2299206) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x153 = -1;
	static int64_t x154 = 29874684282209906LL;
	static int8_t x155 = -1;

	t29 = ((x153%(x154^x155))+x156);

	if (t29 != -2147483649LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x157 = INT32_MIN;
	uint16_t x158 = 10U;
	uint32_t x159 = UINT32_MAX;

	t30 = ((x157%(x158^x159))+x160);

	if (t30 != 2147483903U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = -1;
	uint32_t x162 = 116U;
	static int8_t x163 = -1;
	volatile uint32_t t31 = 5883U;

	t31 = ((x161%(x162^x163))+x164);

	if (t31 != 32883U) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x166 = 423711LL;
	volatile uint64_t x167 = UINT64_MAX;
	int32_t x168 = -1;
	static uint64_t t32 = 15LLU;

	t32 = ((x165%(x166^x167))+x168);

	if (t32 != 65534LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x169 = INT64_MIN;
	static int64_t x170 = -1LL;
	int64_t x171 = 1LL;
	int16_t x172 = -12485;
	volatile int64_t t33 = -2342476221657LL;

	t33 = ((x169%(x170^x171))+x172);

	if (t33 != -12485LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = -182507960LL;
	volatile uint8_t x174 = 53U;
	uint16_t x175 = 30236U;
	int8_t x176 = INT8_MIN;

	t34 = ((x173%(x174^x175))+x176);

	if (t34 != -15871LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x178 = INT8_MAX;
	int8_t x179 = INT8_MIN;

	t35 = ((x177%(x178^x179))+x180);

	if (t35 != 527) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;

	t36 = ((x181%(x182^x183))+x184);

	if (t36 != 4294967297LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x185 = INT64_MIN;
	static int32_t x186 = 5252625;
	uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MIN;
	static volatile int64_t t37 = -6LL;

	t37 = ((x185%(x186^x187))+x188);

	if (t37 != -2375844LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x194 = 9097U;
	volatile int16_t x195 = -1;
	static uint16_t x196 = 23310U;
	int32_t t38 = 1;

	t38 = ((x193%(x194^x195))+x196);

	if (t38 != 23310) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x205 = 11U;
	volatile uint16_t x206 = UINT16_MAX;
	static int8_t x207 = INT8_MIN;
	static volatile int16_t x208 = -7281;

	t39 = ((x205%(x206^x207))+x208);

	if (t39 != -7270) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = INT32_MAX;
	volatile uint64_t x210 = 7LLU;
	uint32_t x212 = UINT32_MAX;
	uint64_t t40 = 2291951663LLU;

	t40 = ((x209%(x210^x211))+x212);

	if (t40 != 6442450942LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x213 = -222;
	volatile int64_t x214 = INT64_MIN;
	int16_t x215 = INT16_MIN;
	int16_t x216 = -1830;
	volatile int64_t t41 = -756086LL;

	t41 = ((x213%(x214^x215))+x216);

	if (t41 != -2052LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x217 = INT64_MAX;
	volatile int64_t x218 = INT64_MIN;
	volatile int8_t x219 = 14;
	static int64_t x220 = 10681144017031415LL;
	volatile int64_t t42 = 101291315LL;

	t42 = ((x217%(x218^x219))+x220);

	if (t42 != 10681144017031428LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x225 = 1U;
	int16_t x226 = 3;
	int16_t x227 = -11;
	volatile int32_t t43 = -1;

	t43 = ((x225%(x226^x227))+x228);

	if (t43 != 256) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x230 = -657;
	int16_t x232 = -10;
	volatile uint64_t t44 = 0LLU;

	t44 = ((x229%(x230^x231))+x232);

	if (t44 != 16829340261LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x233 = INT8_MIN;
	uint8_t x236 = 9U;
	volatile int32_t t45 = -1252979;

	t45 = ((x233%(x234^x235))+x236);

	if (t45 != -119) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x241 = INT8_MIN;
	volatile int32_t x243 = 1;
	uint16_t x244 = 2U;
	int32_t t46 = 105182;

	t46 = ((x241%(x242^x243))+x244);

	if (t46 != 2) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x245 = UINT32_MAX;
	volatile uint8_t x246 = UINT8_MAX;
	int64_t x247 = -16LL;
	static int32_t x248 = INT32_MAX;
	int64_t t47 = 25LL;

	t47 = ((x245%(x246^x247))+x248);

	if (t47 != 2147483661LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x251 = INT64_MIN;
	uint64_t t48 = 74592979083214LLU;

	t48 = ((x249%(x250^x251))+x252);

	if (t48 != 18446744073709548738LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x253 = INT32_MIN;
	int64_t x255 = -1LL;
	static uint64_t t49 = 4065LLU;

	t49 = ((x253%(x254^x255))+x256);

	if (t49 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x257 = INT16_MAX;
	int32_t x259 = INT32_MIN;
	uint8_t x260 = 7U;
	int64_t t50 = 0LL;

	t50 = ((x257%(x258^x259))+x260);

	if (t50 != 32774LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x261 = INT32_MAX;
	int32_t x262 = INT32_MIN;
	int64_t x264 = 30251713721LL;

	t51 = ((x261%(x262^x263))+x264);

	if (t51 != 30251713721LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x265 = 40U;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	uint32_t t52 = 126681294U;

	t52 = ((x265%(x266^x267))+x268);

	if (t52 != 4294934568U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = INT16_MIN;
	int8_t x270 = -3;
	int32_t x271 = INT32_MIN;
	volatile int32_t t53 = -105;

	t53 = ((x269%(x270^x271))+x272);

	if (t53 != -32641) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x273 = 675572593LLU;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	static int32_t x276 = INT32_MIN;
	static uint64_t t54 = 3LLU;

	t54 = ((x273%(x274^x275))+x276);

	if (t54 != 18446744072237640561LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MAX;
	uint64_t x280 = 21558LLU;
	uint64_t t55 = 24581560092466LLU;

	t55 = ((x277%(x278^x279))+x280);

	if (t55 != 18446744071562089526LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x281 = 95718372U;
	int64_t x282 = INT64_MIN;
	volatile uint16_t x283 = 229U;
	uint16_t x284 = 4U;

	t56 = ((x281%(x282^x283))+x284);

	if (t56 != 95718376LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x285 = 49;
	int32_t x288 = -1;
	int32_t t57 = -99;

	t57 = ((x285%(x286^x287))+x288);

	if (t57 != 48) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x289 = 12789851LL;
	static volatile int16_t x290 = INT16_MAX;
	volatile int64_t t58 = -11648787443449909LL;

	t58 = ((x289%(x290^x291))+x292);

	if (t58 != 10848LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x293 = UINT64_MAX;
	int64_t x294 = -1LL;
	int16_t x295 = INT16_MAX;
	static int8_t x296 = INT8_MIN;
	uint64_t t59 = 27513025112778LLU;

	t59 = ((x293%(x294^x295))+x296);

	if (t59 != 32639LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x297 = 42957LLU;
	int32_t x298 = INT32_MIN;
	volatile uint16_t x300 = 48U;
	volatile uint64_t t60 = 1114284043222220205LLU;

	t60 = ((x297%(x298^x299))+x300);

	if (t60 != 43005LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x301 = UINT32_MAX;
	int16_t x302 = INT16_MAX;
	volatile int64_t x303 = 1864950769843627902LL;
	int16_t x304 = INT16_MIN;
	volatile int64_t t61 = -9862LL;

	t61 = ((x301%(x302^x303))+x304);

	if (t61 != 4294934527LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x305 = -1;
	volatile int32_t x306 = INT32_MAX;
	int8_t x307 = INT8_MAX;
	static int16_t x308 = INT16_MAX;
	volatile int32_t t62 = -1745;

	t62 = ((x305%(x306^x307))+x308);

	if (t62 != 32766) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x309 = 5LL;
	static int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	int16_t x312 = INT16_MIN;
	int64_t t63 = 84LL;

	t63 = ((x309%(x310^x311))+x312);

	if (t63 != -32763LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x313 = -1;
	int64_t x314 = INT64_MAX;
	int8_t x315 = INT8_MIN;
	static uint8_t x316 = 0U;
	int64_t t64 = -258395377658834LL;

	t64 = ((x313%(x314^x315))+x316);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x317 = 7U;
	int32_t x319 = INT32_MAX;
	int64_t x320 = INT64_MIN;

	t65 = ((x317%(x318^x319))+x320);

	if (t65 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x324 = 52255U;
	volatile uint32_t t66 = 400U;

	t66 = ((x321%(x322^x323))+x324);

	if (t66 != 52255U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x326 = 1U;
	static int8_t x327 = -1;
	int16_t x328 = INT16_MIN;
	int64_t t67 = 1019458083LL;

	t67 = ((x325%(x326^x327))+x328);

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x329 = 1;
	int16_t x330 = INT16_MAX;
	volatile int32_t x331 = INT32_MAX;
	volatile int64_t x332 = INT64_MIN;
	volatile int64_t t68 = 78673LL;

	t68 = ((x329%(x330^x331))+x332);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x334 = -195570624LL;
	uint32_t x336 = UINT32_MAX;
	int64_t t69 = -688117825373573LL;

	t69 = ((x333%(x334^x335))+x336);

	if (t69 != 4450701878LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = -1;
	static int8_t x338 = INT8_MIN;
	int16_t x339 = INT16_MIN;
	int16_t x340 = -1;
	static int32_t t70 = -24;

	t70 = ((x337%(x338^x339))+x340);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x342 = INT16_MIN;
	int16_t x343 = 3;
	volatile int32_t t71 = 1560;

	t71 = ((x341%(x342^x343))+x344);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	int64_t t72 = 53494579205744414LL;

	t72 = ((x345%(x346^x347))+x348);

	if (t72 != 3845LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x349 = 21799630LLU;
	static int8_t x350 = INT8_MIN;
	int64_t x351 = -1LL;
	uint64_t t73 = 3098LLU;

	t73 = ((x349%(x350^x351))+x352);

	if (t73 != 9223372036854775888LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x357 = -899;
	volatile int16_t x358 = 183;
	int32_t x359 = INT32_MAX;
	volatile uint32_t t74 = 4079U;

	t74 = ((x357%(x358^x359))+x360);

	if (t74 != 4294966443U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x361 = 8;
	int8_t x362 = -1;
	int64_t x363 = INT64_MIN;
	volatile int32_t x364 = INT32_MIN;

	t75 = ((x361%(x362^x363))+x364);

	if (t75 != -2147483640LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = 13980;
	int16_t x366 = INT16_MIN;
	int16_t x368 = 153;
	volatile uint32_t t76 = 6771429U;

	t76 = ((x365%(x366^x367))+x368);

	if (t76 != 14133U) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x369 = INT64_MAX;
	int16_t x371 = INT16_MAX;
	volatile int32_t x372 = INT32_MIN;
	volatile uint64_t t77 = 3894459LLU;

	t77 = ((x369%(x370^x371))+x372);

	if (t77 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = INT64_MAX;
	int16_t x375 = INT16_MIN;
	int64_t x376 = -176510213489242LL;

	t78 = ((x373%(x374^x375))+x376);

	if (t78 != -176510213489235LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x377 = INT16_MAX;
	volatile int32_t x378 = INT32_MIN;
	int8_t x379 = INT8_MIN;
	static int8_t x380 = 5;

	t79 = ((x377%(x378^x379))+x380);

	if (t79 != 32772) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x382 = -1;
	int16_t x384 = INT16_MIN;

	t80 = ((x381%(x382^x383))+x384);

	if (t80 != -32769) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x385 = 2U;
	uint16_t x387 = 20U;
	uint32_t x388 = 1894743U;
	volatile uint32_t t81 = 51540939U;

	t81 = ((x385%(x386^x387))+x388);

	if (t81 != 1894745U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x389 = INT64_MAX;
	uint8_t x390 = 13U;
	static int32_t x391 = 0;
	int8_t x392 = INT8_MIN;
	int64_t t82 = 3029LL;

	t82 = ((x389%(x390^x391))+x392);

	if (t82 != -121LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x397 = INT64_MIN;
	volatile int64_t x398 = INT64_MIN;
	int64_t t83 = -736209165LL;

	t83 = ((x397%(x398^x399))+x400);

	if (t83 != -4294967423LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x401 = -1;
	volatile int8_t x402 = 3;
	volatile int64_t x404 = INT64_MIN;
	int64_t t84 = -264973302055756498LL;

	t84 = ((x401%(x402^x403))+x404);

	if (t84 != -9223372036854752917LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x405 = 5U;
	uint16_t x406 = UINT16_MAX;
	volatile uint32_t x407 = 8184562U;
	volatile uint64_t x408 = 685360LLU;
	uint64_t t85 = 61258091527LLU;

	t85 = ((x405%(x406^x407))+x408);

	if (t85 != 685365LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x409 = 7LLU;
	int8_t x410 = -1;
	int8_t x411 = -8;
	volatile uint8_t x412 = UINT8_MAX;

	t86 = ((x409%(x410^x411))+x412);

	if (t86 != 255LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = -188;
	int32_t x414 = 7;
	static int8_t x415 = -1;
	int8_t x416 = -1;

	t87 = ((x413%(x414^x415))+x416);

	if (t87 != -5) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x418 = -1;
	int32_t x420 = -6413811;
	static int64_t t88 = 31LL;

	t88 = ((x417%(x418^x419))+x420);

	if (t88 != -2153897459LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = INT8_MIN;
	volatile uint8_t x423 = 8U;
	volatile int64_t x424 = INT64_MAX;
	static volatile int64_t t89 = -745011411377LL;

	t89 = ((x421%(x422^x423))+x424);

	if (t89 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x429 = INT32_MIN;
	int16_t x431 = INT16_MIN;
	static volatile uint32_t x432 = 114878U;
	volatile uint32_t t90 = 50U;

	t90 = ((x429%(x430^x431))+x432);

	if (t90 != 82110U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x434 = 105LLU;
	int32_t x435 = -1;
	int16_t x436 = -1;
	volatile uint64_t t91 = 1470119LLU;

	t91 = ((x433%(x434^x435))+x436);

	if (t91 != 102LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x437 = -1;
	volatile int8_t x438 = -3;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MAX;
	static volatile int32_t t92 = 8;

	t92 = ((x437%(x438^x439))+x440);

	if (t92 != 2147483646) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x441 = UINT64_MAX;
	int32_t x442 = INT32_MIN;
	static uint32_t x443 = 6190U;
	volatile int32_t x444 = 27;
	static uint64_t t93 = 5404LLU;

	t93 = ((x441%(x442^x443))+x444);

	if (t93 != 153264426LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x445 = INT16_MIN;
	volatile int64_t x447 = -1LL;
	static int16_t x448 = INT16_MIN;
	volatile int64_t t94 = 95127394672143363LL;

	t94 = ((x445%(x446^x447))+x448);

	if (t94 != -65536LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = 35U;
	uint16_t x450 = UINT16_MAX;
	volatile int8_t x451 = INT8_MIN;
	int8_t x452 = -1;
	static int32_t t95 = 234616760;

	t95 = ((x449%(x450^x451))+x452);

	if (t95 != 34) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x453 = INT16_MIN;
	static int64_t x454 = INT64_MIN;
	volatile int64_t x455 = -1LL;
	static int64_t t96 = -1170LL;

	t96 = ((x453%(x454^x455))+x456);

	if (t96 != -32769LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = -1;
	uint8_t x458 = 12U;
	int8_t x459 = INT8_MIN;
	int32_t x460 = -1;
	volatile int32_t t97 = -3000;

	t97 = ((x457%(x458^x459))+x460);

	if (t97 != -2) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x461 = INT64_MIN;
	int32_t x463 = INT32_MIN;
	int8_t x464 = -1;
	uint64_t t98 = 4LLU;

	t98 = ((x461%(x462^x463))+x464);

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x466 = 1;
	int16_t x467 = INT16_MAX;
	static volatile int32_t t99 = 8;

	t99 = ((x465%(x466^x467))+x468);

	if (t99 != 15306) { NG(); } else { ; }
	
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

