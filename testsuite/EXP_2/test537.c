#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 7U;
uint32_t x5 = 6U;
int64_t x6 = 2532048LL;
int16_t x17 = INT16_MIN;
volatile uint16_t x23 = 7U;
static int8_t x36 = INT8_MIN;
uint32_t x40 = 35091158U;
uint8_t x49 = 54U;
uint16_t x58 = 38U;
int64_t x59 = -193825340LL;
uint16_t x68 = 86U;
int16_t x71 = 1;
uint64_t x72 = UINT64_MAX;
static uint16_t x73 = 2365U;
int32_t x74 = INT32_MAX;
int64_t x75 = -1LL;
static uint32_t x82 = 14663434U;
volatile uint8_t x87 = 1U;
uint64_t t19 = 31LLU;
int32_t t22 = 1955675;
static int32_t t23 = 6;
uint64_t x115 = 23597141319277938LLU;
int32_t x132 = 1038;
int16_t x136 = -1;
static volatile int64_t t29 = -130224135LL;
uint64_t t30 = 13980396571472LLU;
int64_t x143 = INT64_MIN;
int16_t x157 = -14;
uint32_t x158 = UINT32_MAX;
int8_t x161 = INT8_MIN;
volatile int16_t x166 = -1;
int32_t t36 = -113564;
uint64_t x174 = 19LLU;
uint64_t x179 = 16066440624LLU;
volatile int64_t t40 = -18104582LL;
static int8_t x194 = INT8_MIN;
static volatile int64_t x198 = INT64_MIN;
volatile int64_t t43 = -25LL;
int16_t x203 = INT16_MIN;
int32_t x209 = INT32_MIN;
int8_t x224 = -1;
uint32_t x233 = 337U;
int64_t t50 = 1931646LL;
volatile int32_t t51 = 6432;
int64_t x254 = INT64_MIN;
volatile uint32_t x259 = 2761U;
uint8_t x266 = UINT8_MAX;
volatile int8_t x270 = INT8_MIN;
volatile uint32_t x272 = UINT32_MAX;
volatile uint64_t x273 = 189250LLU;
int32_t x278 = INT32_MAX;
int8_t x281 = INT8_MIN;
uint64_t x288 = 59977904306529LLU;
volatile int64_t x292 = INT64_MIN;
int64_t x316 = 4246305653LL;
volatile int8_t x321 = -1;
int8_t x336 = INT8_MIN;
uint32_t x341 = UINT32_MAX;
int8_t x346 = INT8_MIN;
uint32_t x371 = 97135924U;
uint32_t x373 = UINT32_MAX;
uint32_t t76 = 531737177U;
volatile int64_t x377 = -6LL;
volatile int32_t x380 = 33783;
volatile uint64_t t77 = 107796234006869174LLU;
static int32_t x381 = INT32_MAX;
volatile uint32_t x382 = 525642019U;
uint64_t x384 = 98LLU;
uint8_t x385 = 4U;
volatile uint64_t x396 = 106964036208472LLU;
int8_t x397 = 7;
volatile uint64_t t83 = 77886162LLU;
int64_t t85 = -440LL;
int16_t x420 = -2373;
volatile int32_t t86 = 908;
int32_t x424 = -31911;
uint64_t x426 = UINT64_MAX;
uint64_t t88 = 40940LLU;
volatile int32_t x430 = 0;
int64_t t89 = 3892427719870LL;
int8_t x434 = 4;
uint32_t x438 = UINT32_MAX;
int64_t x440 = INT64_MIN;
int64_t x451 = INT64_MAX;
static int8_t x452 = -1;
volatile int64_t x459 = INT64_MIN;
uint16_t x461 = UINT16_MAX;
int8_t x466 = INT8_MIN;
int16_t x469 = -292;
volatile int8_t x473 = -38;
int32_t x480 = -1;


void f0(void) {
	uint16_t x1 = 2U;
	uint32_t x2 = 253848343U;
	static int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MIN;

	t0 = ((x1*(x2/x3))/x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MIN;
	int16_t x8 = -1;
	volatile int64_t t1 = 402646LL;

	t1 = ((x5*(x6/x7))/x8);

	if (t1 != 462LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 14U;
	volatile uint16_t x14 = 1U;
	static int16_t x15 = INT16_MAX;
	uint16_t x16 = 124U;
	volatile int32_t t2 = 418903032;

	t2 = ((x13*(x14/x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x18 = INT32_MIN;
	uint64_t x19 = UINT64_MAX;
	volatile uint32_t x20 = 115U;
	static volatile uint64_t t3 = 1809116LLU;

	t3 = ((x17*(x18/x19))/x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MIN;
	volatile uint16_t x22 = 0U;
	int16_t x24 = INT16_MIN;
	static int32_t t4 = -35860477;

	t4 = ((x21*(x22/x23))/x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	static int64_t x26 = 7777593522126LL;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;
	int64_t t5 = 0LL;

	t5 = ((x25*(x26/x27))/x28);

	if (t5 != -232588LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x30 = -262335;
	volatile uint16_t x31 = 321U;
	int64_t x32 = -13LL;
	volatile int64_t t6 = -653638030LL;

	t6 = ((x29*(x30/x31))/x32);

	if (t6 != -62LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MAX;
	volatile int8_t x34 = 29;
	int8_t x35 = INT8_MIN;
	volatile int32_t t7 = -960277;

	t7 = ((x33*(x34/x35))/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int16_t x38 = -1;
	int8_t x39 = 17;
	volatile uint32_t t8 = 2177747U;

	t8 = ((x37*(x38/x39))/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = UINT32_MAX;
	int16_t x42 = -16;
	volatile uint8_t x43 = 49U;
	int64_t x44 = INT64_MIN;
	static volatile int64_t t9 = -54786LL;

	t9 = ((x41*(x42/x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x50 = INT64_MAX;
	uint32_t x51 = UINT32_MAX;
	int16_t x52 = INT16_MIN;
	int64_t t10 = -14811LL;

	t10 = ((x49*(x50/x51))/x52);

	if (t10 != -3538944LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MAX;
	int8_t x54 = -12;
	static volatile int32_t x55 = INT32_MIN;
	uint64_t x56 = 12LLU;
	uint64_t t11 = 2662441256672566LLU;

	t11 = ((x53*(x54/x55))/x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	uint64_t x60 = 84312364058LLU;
	uint64_t t12 = 133528095LLU;

	t12 = ((x57*(x58/x59))/x60);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = -1;
	int64_t x62 = INT64_MIN;
	int16_t x63 = INT16_MIN;
	int32_t x64 = INT32_MIN;
	volatile int64_t t13 = -3728375337LL;

	t13 = ((x61*(x62/x63))/x64);

	if (t13 != 131072LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x65 = 1;
	uint32_t x66 = 1U;
	int32_t x67 = INT32_MAX;
	static volatile uint32_t t14 = 311089U;

	t14 = ((x65*(x66/x67))/x68);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x69 = 834LLU;
	uint16_t x70 = 19746U;
	volatile uint64_t t15 = 19230572713423LLU;

	t15 = ((x69*(x70/x71))/x72);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x76 = 54161100282LLU;
	uint64_t t16 = 13505821054247LLU;

	t16 = ((x73*(x74/x75))/x76);

	if (t16 != 340590181LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	uint32_t t17 = 804561U;

	t17 = ((x77*(x78/x79))/x80);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 27262LLU;
	volatile uint8_t x83 = 57U;
	static int16_t x84 = INT16_MIN;
	uint64_t t18 = 206951LLU;

	t18 = ((x81*(x82/x83))/x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x85 = INT64_MIN;
	uint64_t x86 = 331013576419690261LLU;
	int32_t x88 = 74;

	t19 = ((x85*(x86/x87))/x88);

	if (t19 != 124640162660199673LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	int32_t x91 = -1;
	static uint8_t x92 = 72U;
	volatile int32_t t20 = -598263;

	t20 = ((x89*(x90/x91))/x92);

	if (t20 != 910) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int64_t x98 = -1LL;
	volatile int16_t x99 = INT16_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = 53891LL;

	t21 = ((x97*(x98/x99))/x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	uint16_t x106 = 4509U;
	volatile int32_t x107 = -1;
	int16_t x108 = -17;

	t22 = ((x105*(x106/x107))/x108);

	if (t22 != -8691230) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = UINT8_MAX;
	int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = 73U;
	int8_t x112 = -1;

	t23 = ((x109*(x110/x111))/x112);

	if (t23 != 114240) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = 0U;
	uint32_t x114 = 413U;
	static uint32_t x116 = UINT32_MAX;
	volatile uint64_t t24 = 29LLU;

	t24 = ((x113*(x114/x115))/x116);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 0U;
	static uint32_t x118 = UINT32_MAX;
	int16_t x119 = -1;
	int16_t x120 = INT16_MAX;
	volatile uint32_t t25 = 22803U;

	t25 = ((x117*(x118/x119))/x120);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = INT16_MAX;
	uint16_t x122 = 147U;
	uint16_t x123 = UINT16_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t26 = 52;

	t26 = ((x121*(x122/x123))/x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = -4LL;
	uint8_t x126 = UINT8_MAX;
	static uint8_t x127 = 40U;
	static int64_t x128 = INT64_MIN;
	static int64_t t27 = 840LL;

	t27 = ((x125*(x126/x127))/x128);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = 405;
	static int8_t x130 = INT8_MAX;
	static int64_t x131 = INT64_MIN;
	static int64_t t28 = -63346496557LL;

	t28 = ((x129*(x130/x131))/x132);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	static volatile int64_t x135 = -1LL;

	t29 = ((x133*(x134/x135))/x136);

	if (t29 != 1073741824LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = -1;
	uint64_t x138 = 27589015652998672LLU;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;

	t30 = ((x137*(x138/x139))/x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x141 = 42U;
	static uint8_t x142 = 1U;
	uint32_t x144 = 10480U;
	volatile int64_t t31 = -263405601297800060LL;

	t31 = ((x141*(x142/x143))/x144);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	int8_t x146 = INT8_MAX;
	volatile int32_t x147 = INT32_MIN;
	int64_t x148 = -1LL;
	int64_t t32 = 389LL;

	t32 = ((x145*(x146/x147))/x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x149 = 225539;
	uint64_t x150 = 63403046652513339LLU;
	int32_t x151 = INT32_MIN;
	volatile uint8_t x152 = 10U;
	static uint64_t t33 = 568814LLU;

	t33 = ((x149*(x150/x151))/x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x159 = -1LL;
	volatile uint32_t x160 = UINT32_MAX;
	static volatile int64_t t34 = 3074LL;

	t34 = ((x157*(x158/x159))/x160);

	if (t34 != 14LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x162 = 1;
	volatile int64_t x163 = 2276973423302254511LL;
	int16_t x164 = INT16_MAX;
	static int64_t t35 = 571474478LL;

	t35 = ((x161*(x162/x163))/x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x165 = 25U;
	int8_t x167 = 1;
	int32_t x168 = -1;

	t36 = ((x165*(x166/x167))/x168);

	if (t36 != 25) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 1045288U;
	static uint64_t x170 = 5442293372910610038LLU;
	volatile int32_t x171 = INT32_MIN;
	volatile int8_t x172 = INT8_MIN;
	volatile uint64_t t37 = 8LLU;

	t37 = ((x169*(x170/x171))/x172);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x173 = UINT64_MAX;
	uint16_t x175 = 11U;
	int16_t x176 = INT16_MAX;
	static uint64_t t38 = 1744348450LLU;

	t38 = ((x173*(x174/x175))/x176);

	if (t38 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MAX;
	int64_t x178 = -1006LL;
	volatile int64_t x180 = 764284642537LL;
	static uint64_t t39 = 5LLU;

	t39 = ((x177*(x178/x179))/x180);

	if (t39 != 49LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x181 = INT16_MAX;
	int32_t x182 = INT32_MIN;
	static volatile uint32_t x183 = 268120503U;
	int64_t x184 = -4548582897LL;

	t40 = ((x181*(x182/x183))/x184);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x189 = 193U;
	int32_t x190 = INT32_MAX;
	volatile int16_t x191 = 6;
	int16_t x192 = -80;
	static uint32_t t41 = 74U;

	t41 = ((x189*(x190/x191))/x192);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = UINT32_MAX;
	int8_t x195 = INT8_MAX;
	static uint32_t x196 = 6084U;
	uint32_t t42 = 6U;

	t42 = ((x193*(x194/x195))/x196);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint16_t x197 = 10U;
	volatile uint32_t x199 = 503U;
	int32_t x200 = INT32_MAX;

	t43 = ((x197*(x198/x199))/x200);

	if (t43 != -85387023LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = 217U;
	int16_t x202 = INT16_MIN;
	int16_t x204 = 2;
	volatile uint32_t t44 = 15U;

	t44 = ((x201*(x202/x203))/x204);

	if (t44 != 108U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x210 = 0;
	static volatile uint64_t x211 = 11995634135LLU;
	static int8_t x212 = INT8_MIN;
	volatile uint64_t t45 = 4263906684LLU;

	t45 = ((x209*(x210/x211))/x212);

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x213 = UINT64_MAX;
	int32_t x214 = -1;
	uint8_t x215 = 26U;
	uint32_t x216 = UINT32_MAX;
	volatile uint64_t t46 = 410282936345374220LLU;

	t46 = ((x213*(x214/x215))/x216);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x221 = -15;
	volatile int64_t x222 = -1LL;
	uint64_t x223 = UINT64_MAX;
	uint64_t t47 = 1LLU;

	t47 = ((x221*(x222/x223))/x224);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x225 = 25LLU;
	volatile uint64_t x226 = UINT64_MAX;
	volatile int32_t x227 = INT32_MAX;
	static int64_t x228 = INT64_MIN;
	volatile uint64_t t48 = 1756304065763LLU;

	t48 = ((x225*(x226/x227))/x228);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x234 = 114U;
	uint32_t x235 = UINT32_MAX;
	int32_t x236 = INT32_MIN;
	uint32_t t49 = 3926U;

	t49 = ((x233*(x234/x235))/x236);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x241 = INT32_MIN;
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = -1LL;
	int32_t x244 = INT32_MIN;

	t50 = ((x241*(x242/x243))/x244);

	if (t50 != -65535LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = -1;
	static int8_t x246 = INT8_MAX;
	int16_t x247 = 16;
	volatile uint8_t x248 = 9U;

	t51 = ((x245*(x246/x247))/x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x249 = UINT8_MAX;
	static int8_t x250 = -1;
	int64_t x251 = 24801224631573LL;
	int64_t x252 = -1LL;
	static volatile int64_t t52 = -174554LL;

	t52 = ((x249*(x250/x251))/x252);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x253 = -1;
	static volatile uint16_t x255 = 246U;
	int32_t x256 = -1;
	int64_t t53 = -3422906401LL;

	t53 = ((x253*(x254/x255))/x256);

	if (t53 != -37493382263637300LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x257 = 3347941168564385LL;
	int8_t x258 = 0;
	static int8_t x260 = INT8_MAX;
	static volatile int64_t t54 = 12244LL;

	t54 = ((x257*(x258/x259))/x260);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x265 = 337U;
	uint32_t x267 = 1U;
	int8_t x268 = -1;
	static uint32_t t55 = 1123759U;

	t55 = ((x265*(x266/x267))/x268);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = -715315926465351LL;
	static uint8_t x271 = 11U;
	volatile int64_t t56 = -490720217104LL;

	t56 = ((x269*(x270/x271))/x272);

	if (t56 != 1832022LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x274 = -1;
	uint32_t x275 = UINT32_MAX;
	uint8_t x276 = UINT8_MAX;
	uint64_t t57 = 6123715645LLU;

	t57 = ((x273*(x274/x275))/x276);

	if (t57 != 742LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x277 = -1LL;
	int64_t x279 = 2599LL;
	uint8_t x280 = 4U;
	volatile int64_t t58 = -103800665LL;

	t58 = ((x277*(x278/x279))/x280);

	if (t58 != -206568LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x282 = INT32_MIN;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = 3934;
	uint64_t t59 = 20828935LLU;

	t59 = ((x281*(x282/x283))/x284);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x285 = -1;
	int32_t x286 = -1;
	uint8_t x287 = UINT8_MAX;
	uint64_t t60 = 16228553684546LLU;

	t60 = ((x285*(x286/x287))/x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x289 = INT16_MIN;
	static volatile int16_t x290 = -47;
	volatile int32_t x291 = -201;
	int64_t t61 = -501435341LL;

	t61 = ((x289*(x290/x291))/x292);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x293 = 1914U;
	volatile uint32_t x294 = 947857U;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = UINT32_MAX;
	static uint32_t t62 = 14U;

	t62 = ((x293*(x294/x295))/x296);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = 14;
	volatile int32_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = INT32_MIN;
	volatile int32_t t63 = 166;

	t63 = ((x301*(x302/x303))/x304);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x313 = -1LL;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = 26071417772697146LLU;
	static uint64_t t64 = 20580LLU;

	t64 = ((x313*(x314/x315))/x316);

	if (t64 != 4344186589LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x317 = 11U;
	int8_t x318 = -7;
	static int32_t x319 = INT32_MAX;
	static volatile int64_t x320 = INT64_MIN;
	int64_t t65 = -154711758LL;

	t65 = ((x317*(x318/x319))/x320);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x322 = -1;
	static int64_t x323 = INT64_MIN;
	volatile int64_t x324 = 1LL;
	volatile int64_t t66 = 4909LL;

	t66 = ((x321*(x322/x323))/x324);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = 167121LL;
	static int32_t x334 = -1;
	static int16_t x335 = 244;
	volatile int64_t t67 = 392812876665464766LL;

	t67 = ((x333*(x334/x335))/x336);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x337 = INT16_MAX;
	volatile uint8_t x338 = 2U;
	uint32_t x339 = UINT32_MAX;
	int64_t x340 = INT64_MAX;
	static int64_t t68 = 36389986252564LL;

	t68 = ((x337*(x338/x339))/x340);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x342 = 1LL;
	static int64_t x343 = -2583LL;
	static uint32_t x344 = 61978U;
	volatile int64_t t69 = 164825049LL;

	t69 = ((x341*(x342/x343))/x344);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x345 = -1;
	static int8_t x347 = -1;
	static int32_t x348 = INT32_MAX;
	volatile int32_t t70 = 7950411;

	t70 = ((x345*(x346/x347))/x348);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x349 = 1LLU;
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MIN;
	uint16_t x352 = 358U;
	static volatile uint64_t t71 = 347368836LLU;

	t71 = ((x349*(x350/x351))/x352);

	if (t71 != 11997115LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x353 = UINT64_MAX;
	static int8_t x354 = 0;
	int16_t x355 = -1;
	int16_t x356 = -3;
	uint64_t t72 = 739103346973141LLU;

	t72 = ((x353*(x354/x355))/x356);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x357 = UINT16_MAX;
	int32_t x358 = 1882674;
	int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MIN;
	static int32_t t73 = -6850879;

	t73 = ((x357*(x358/x359))/x360);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x365 = INT64_MAX;
	int16_t x366 = INT16_MIN;
	int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MIN;
	int64_t t74 = -260LL;

	t74 = ((x365*(x366/x367))/x368);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x369 = 31U;
	uint64_t x370 = UINT64_MAX;
	int8_t x372 = INT8_MAX;
	uint64_t t75 = 110910925283679LLU;

	t75 = ((x369*(x370/x371))/x372);

	if (t75 != 46355131737LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MAX;
	int16_t x376 = INT16_MAX;

	t76 = ((x373*(x374/x375))/x376);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x378 = 14248132376125389LLU;
	int64_t x379 = -2934336242717LL;

	t77 = ((x377*(x378/x379))/x380);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x383 = INT32_MAX;
	static uint64_t t78 = 13LLU;

	t78 = ((x381*(x382/x383))/x384);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x386 = INT32_MIN;
	int16_t x387 = -9;
	int32_t x388 = INT32_MIN;
	int32_t t79 = 12004;

	t79 = ((x385*(x386/x387))/x388);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x389 = 412402LLU;
	int8_t x390 = -62;
	int16_t x391 = INT16_MAX;
	static int8_t x392 = INT8_MIN;
	static volatile uint64_t t80 = 728LLU;

	t80 = ((x389*(x390/x391))/x392);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MAX;
	static volatile int16_t x395 = INT16_MIN;
	uint64_t t81 = 239LLU;

	t81 = ((x393*(x394/x395))/x396);

	if (t81 != 336LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x398 = INT16_MIN;
	static volatile int32_t x399 = INT32_MIN;
	int32_t x400 = 8032904;
	int32_t t82 = -6;

	t82 = ((x397*(x398/x399))/x400);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = 24;
	uint32_t x402 = 2U;
	uint64_t x403 = 6749LLU;
	int16_t x404 = INT16_MAX;

	t83 = ((x401*(x402/x403))/x404);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x405 = INT8_MAX;
	uint64_t x406 = 63232270266LLU;
	static int8_t x407 = INT8_MIN;
	static int16_t x408 = -3;
	uint64_t t84 = 4LLU;

	t84 = ((x405*(x406/x407))/x408);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = -6098284712LL;
	int16_t x410 = INT16_MIN;
	static uint8_t x411 = 35U;
	uint16_t x412 = UINT16_MAX;

	t85 = ((x409*(x410/x411))/x412);

	if (t85 != 87098412LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x417 = 0U;
	uint16_t x418 = UINT16_MAX;
	int32_t x419 = -1;

	t86 = ((x417*(x418/x419))/x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x421 = UINT64_MAX;
	int32_t x422 = INT32_MIN;
	static int64_t x423 = INT64_MIN;
	volatile uint64_t t87 = 352644649644946740LLU;

	t87 = ((x421*(x422/x423))/x424);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x425 = 819070462U;
	int16_t x427 = INT16_MAX;
	int64_t x428 = INT64_MIN;

	t88 = ((x425*(x426/x427))/x428);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x429 = INT64_MIN;
	uint32_t x431 = UINT32_MAX;
	volatile int8_t x432 = INT8_MIN;

	t89 = ((x429*(x430/x431))/x432);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x433 = -1;
	volatile int16_t x435 = -1;
	volatile int64_t x436 = -1LL;
	static volatile int64_t t90 = -239942712LL;

	t90 = ((x433*(x434/x435))/x436);

	if (t90 != -4LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x437 = 61932466579587221LLU;
	static int16_t x439 = INT16_MIN;
	uint64_t t91 = 11432751590956208LLU;

	t91 = ((x437*(x438/x439))/x440);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x445 = -1;
	static uint32_t x446 = 261665U;
	int32_t x447 = -1;
	static int64_t x448 = INT64_MAX;
	int64_t t92 = -6555LL;

	t92 = ((x445*(x446/x447))/x448);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x449 = -2463016431106478LL;
	volatile int16_t x450 = INT16_MAX;
	int64_t t93 = 124420850896849321LL;

	t93 = ((x449*(x450/x451))/x452);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x457 = 2U;
	uint32_t x458 = UINT32_MAX;
	int8_t x460 = -1;
	volatile int64_t t94 = 10870756493622LL;

	t94 = ((x457*(x458/x459))/x460);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x462 = 0U;
	volatile int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MAX;
	static int32_t t95 = 212200702;

	t95 = ((x461*(x462/x463))/x464);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x465 = UINT64_MAX;
	int16_t x467 = 170;
	int32_t x468 = INT32_MIN;
	uint64_t t96 = 1LLU;

	t96 = ((x465*(x466/x467))/x468);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x470 = 71994LLU;
	uint8_t x471 = 1U;
	int32_t x472 = INT32_MIN;
	volatile uint64_t t97 = 221452291708008785LLU;

	t97 = ((x469*(x470/x471))/x472);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x474 = -1LL;
	volatile int64_t x475 = INT64_MAX;
	int32_t x476 = INT32_MAX;
	int64_t t98 = -1398680720265845LL;

	t98 = ((x473*(x474/x475))/x476);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x477 = 1;
	uint16_t x478 = 290U;
	int32_t x479 = INT32_MAX;
	volatile int32_t t99 = -2162;

	t99 = ((x477*(x478/x479))/x480);

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

