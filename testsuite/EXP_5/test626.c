#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x20 = INT16_MIN;
static int16_t x28 = -722;
volatile int32_t t8 = -56305954;
int64_t x41 = -1LL;
static int16_t x46 = -1;
volatile int32_t t11 = 322;
volatile int16_t x50 = INT16_MIN;
int32_t t13 = 1529140;
uint64_t x60 = UINT64_MAX;
volatile int32_t t14 = 221685;
static volatile int16_t x63 = INT16_MIN;
uint32_t x64 = 803609628U;
int16_t x72 = 2;
volatile uint64_t t19 = 12167LLU;
volatile int8_t x82 = INT8_MAX;
int32_t t20 = -3397;
static volatile int16_t x85 = 5;
int32_t t21 = 1287178;
int8_t x92 = INT8_MIN;
uint32_t x114 = UINT32_MAX;
volatile int8_t x122 = -1;
uint8_t x123 = UINT8_MAX;
int16_t x132 = -120;
static int64_t x138 = -1LL;
uint32_t t31 = UINT32_MAX;
int64_t x144 = -17660LL;
volatile int8_t x149 = INT8_MIN;
uint16_t x152 = 2U;
static volatile int64_t t35 = -807818847LL;
int16_t x160 = -1002;
uint64_t x171 = UINT64_MAX;
static volatile int16_t x173 = INT16_MAX;
uint8_t x177 = UINT8_MAX;
int32_t t41 = 122900474;
int32_t x183 = -1;
uint32_t t43 = 85276251U;
volatile int16_t x194 = INT16_MAX;
int8_t x203 = -1;
int64_t x207 = INT64_MAX;
volatile int8_t x208 = -1;
volatile int16_t x211 = 60;
int32_t x226 = INT32_MIN;
volatile int32_t t52 = 6124;
static int64_t x238 = INT64_MIN;
uint8_t x243 = 5U;
volatile int8_t x245 = 5;
int64_t x248 = -1LL;
volatile int16_t x252 = -538;
int32_t t57 = 1872301;
uint16_t x265 = UINT16_MAX;
uint16_t x268 = 9807U;
static volatile int8_t x271 = -1;
static int16_t x272 = INT16_MIN;
static int16_t x283 = -4;
uint16_t x291 = 73U;
int16_t x307 = 372;
static volatile int32_t t67 = -5;
uint16_t x317 = UINT16_MAX;
uint8_t x321 = 13U;
static int16_t x324 = INT16_MIN;
int32_t t70 = -182907;
static volatile uint16_t x331 = 16000U;
int8_t x334 = -1;
int32_t x342 = INT32_MAX;
static volatile uint16_t x344 = 3U;
static uint16_t x347 = 7U;
int64_t x356 = INT64_MIN;
int32_t t78 = -2522624;
int16_t x366 = -1;
uint64_t t80 = 235160896053LLU;
uint8_t x378 = 76U;
volatile uint32_t x382 = UINT32_MAX;
int32_t x384 = -1;
uint16_t x390 = UINT16_MAX;
uint64_t t86 = 235032698779LLU;
volatile int64_t t87 = -8948643202016LL;
int16_t x399 = INT16_MIN;
uint32_t x400 = UINT32_MAX;
int16_t x404 = INT16_MIN;
int64_t x410 = 64247383753589LL;
static volatile int64_t x411 = INT64_MIN;
static volatile uint8_t x412 = 1U;
uint16_t x416 = 24278U;
int32_t x444 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MAX;
	uint16_t x2 = UINT16_MAX;
	int8_t x3 = INT8_MIN;
	int8_t x4 = 17;
	int32_t t0 = -1;

	t0 = (x1-((x2/x3)<=x4));

	if (t0 != 126) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int8_t x6 = INT8_MAX;
	int32_t x7 = INT32_MIN;
	uint16_t x8 = UINT16_MAX;
	static volatile uint32_t t1 = 8165393U;

	t1 = (x5-((x6/x7)<=x8));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	int8_t x10 = -1;
	static uint32_t x11 = 103422565U;
	static uint64_t x12 = 841LLU;
	int32_t t2 = -1824787;

	t2 = (x9-((x10/x11)<=x12));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1082;
	static int8_t x14 = 14;
	static uint8_t x15 = 1U;
	static volatile int8_t x16 = INT8_MIN;
	volatile int32_t t3 = 5049456;

	t3 = (x13-((x14/x15)<=x16));

	if (t3 != -1082) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int8_t x18 = -1;
	static uint32_t x19 = 2140286919U;
	volatile int32_t t4 = -18546627;

	t4 = (x17-((x18/x19)<=x20));

	if (t4 != -2) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -155;
	uint32_t x23 = 8011603U;
	uint8_t x24 = 24U;
	int32_t t5 = INT32_MIN;

	t5 = (x21-((x22/x23)<=x24));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = 4020;
	volatile uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 2761327U;
	volatile int32_t t6 = 932433;

	t6 = (x25-((x26/x27)<=x28));

	if (t6 != 4019) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = 8;
	uint16_t x30 = UINT16_MAX;
	static volatile int8_t x31 = INT8_MIN;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = 11658;

	t7 = (x29-((x30/x31)<=x32));

	if (t7 != 8) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = 1U;

	t8 = (x33-((x34/x35)<=x36));

	if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = -1LL;
	int8_t x38 = INT8_MIN;
	static int32_t x39 = -908823;
	uint8_t x40 = 124U;
	static volatile int64_t t9 = -3148366434833816914LL;

	t9 = (x37-((x38/x39)<=x40));

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MAX;
	uint16_t x44 = 1U;
	static volatile int64_t t10 = -1793072LL;

	t10 = (x41-((x42/x43)<=x44));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = INT8_MIN;
	static uint64_t x47 = 319852071101286073LLU;
	volatile int64_t x48 = -1LL;

	t11 = (x45-((x46/x47)<=x48));

	if (t11 != -129) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	uint32_t x51 = 40826U;
	static volatile int16_t x52 = -479;
	static volatile int32_t t12 = 91318;

	t12 = (x49-((x50/x51)<=x52));

	if (t12 != -129) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 23;
	static volatile int32_t x54 = INT32_MAX;
	int32_t x55 = 154;
	static volatile int16_t x56 = 124;

	t13 = (x53-((x54/x55)<=x56));

	if (t13 != 23) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -1;
	int8_t x58 = INT8_MAX;
	static int8_t x59 = INT8_MIN;

	t14 = (x57-((x58/x59)<=x60));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 858;
	int16_t x62 = INT16_MIN;
	volatile int32_t t15 = 47282;

	t15 = (x61-((x62/x63)<=x64));

	if (t15 != 857) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -99;
	int32_t x66 = INT32_MIN;
	static int32_t x67 = 977;
	int64_t x68 = INT64_MAX;
	int32_t t16 = -3110957;

	t16 = (x65-((x66/x67)<=x68));

	if (t16 != -100) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = 16U;
	uint64_t x70 = UINT64_MAX;
	static int16_t x71 = -1;
	static volatile int32_t t17 = -125;

	t17 = (x69-((x70/x71)<=x72));

	if (t17 != 15) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 134788083158038LLU;
	uint32_t x74 = UINT32_MAX;
	static int32_t x75 = 1015;
	int16_t x76 = INT16_MAX;
	uint64_t t18 = 999998567151LLU;

	t18 = (x73-((x74/x75)<=x76));

	if (t18 != 134788083158038LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 1271899393LLU;
	int8_t x78 = -1;
	int32_t x79 = -384276;
	volatile int8_t x80 = INT8_MAX;

	t19 = (x77-((x78/x79)<=x80));

	if (t19 != 1271899392LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	uint16_t x83 = UINT16_MAX;
	uint16_t x84 = 1796U;

	t20 = (x81-((x82/x83)<=x84));

	if (t20 != 126) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -1970590LL;
	static volatile int64_t x87 = 37416012952LL;
	int64_t x88 = INT64_MIN;

	t21 = (x85-((x86/x87)<=x88));

	if (t21 != 5) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -41393310;
	static int16_t x91 = INT16_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = (x89-((x90/x91)<=x92));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MAX;
	volatile int8_t x94 = -1;
	static int32_t x95 = INT32_MIN;
	uint64_t x96 = 162125196620LLU;
	int32_t t23 = 4;

	t23 = (x93-((x94/x95)<=x96));

	if (t23 != 2147483646) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MIN;
	uint16_t x107 = 62U;
	uint16_t x108 = 25U;
	volatile uint32_t t24 = 6U;

	t24 = (x105-((x106/x107)<=x108));

	if (t24 != 4294967294U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MIN;
	static int32_t x110 = INT32_MIN;
	int16_t x111 = 1;
	int16_t x112 = -1;
	int32_t t25 = 927860;

	t25 = (x109-((x110/x111)<=x112));

	if (t25 != -32769) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = INT32_MAX;
	volatile int8_t x115 = -5;
	volatile int64_t x116 = INT64_MIN;
	static volatile int32_t t26 = INT32_MAX;

	t26 = (x113-((x114/x115)<=x116));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 11486869U;
	int32_t x118 = INT32_MIN;
	static int16_t x119 = 6;
	int8_t x120 = -1;
	static uint32_t t27 = 1641757576U;

	t27 = (x117-((x118/x119)<=x120));

	if (t27 != 11486868U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 3LLU;
	int32_t x124 = -1860;
	volatile uint64_t t28 = 770001105336403485LLU;

	t28 = (x121-((x122/x123)<=x124));

	if (t28 != 3LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	volatile int16_t x130 = -10;
	int32_t x131 = 1652500;
	int64_t t29 = INT64_MAX;

	t29 = (x129-((x130/x131)<=x132));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 4U;
	uint32_t x134 = UINT32_MAX;
	uint8_t x135 = 16U;
	int16_t x136 = INT16_MAX;
	volatile int32_t t30 = -403700;

	t30 = (x133-((x134/x135)<=x136));

	if (t30 != 4) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	int8_t x139 = -1;
	int64_t x140 = INT64_MIN;

	t31 = (x137-((x138/x139)<=x140));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = INT8_MIN;
	int8_t x142 = INT8_MIN;
	volatile uint8_t x143 = 6U;
	static volatile int32_t t32 = 414335870;

	t32 = (x141-((x142/x143)<=x144));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x145 = 1;
	int64_t x146 = -1LL;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = 8319017405430LLU;
	int32_t t33 = -13;

	t33 = (x145-((x146/x147)<=x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x150 = INT16_MAX;
	static int16_t x151 = 2;
	volatile int32_t t34 = -115;

	t34 = (x149-((x150/x151)<=x152));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = 2225533532498826LL;
	int16_t x154 = -1;
	static int64_t x155 = -1LL;
	int16_t x156 = INT16_MAX;

	t35 = (x153-((x154/x155)<=x156));

	if (t35 != 2225533532498825LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 3667561439LL;
	uint32_t x158 = 0U;
	int64_t x159 = INT64_MAX;
	volatile int64_t t36 = -982LL;

	t36 = (x157-((x158/x159)<=x160));

	if (t36 != 3667561439LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	static int8_t x162 = -1;
	int64_t x163 = INT64_MAX;
	int8_t x164 = 1;
	int32_t t37 = -6974;

	t37 = (x161-((x162/x163)<=x164));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -3;
	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = INT16_MIN;
	uint8_t x168 = 14U;
	volatile int32_t t38 = 16231;

	t38 = (x165-((x166/x167)<=x168));

	if (t38 != -3) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = -7;
	int16_t x172 = 29;
	static volatile int32_t t39 = -13639497;

	t39 = (x169-((x170/x171)<=x172));

	if (t39 != -129) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x174 = 31700U;
	static volatile int8_t x175 = 3;
	static int8_t x176 = 2;
	volatile int32_t t40 = -455732625;

	t40 = (x173-((x174/x175)<=x176));

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x178 = -1;
	volatile uint32_t x179 = 13256U;
	static uint8_t x180 = 7U;

	t41 = (x177-((x178/x179)<=x180));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = 3275;
	uint8_t x182 = 8U;
	volatile int32_t x184 = INT32_MIN;
	int32_t t42 = -1;

	t42 = (x181-((x182/x183)<=x184));

	if (t42 != 3275) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 1908742U;
	int32_t x186 = -1;
	static volatile int64_t x187 = INT64_MAX;
	volatile uint32_t x188 = 1U;

	t43 = (x185-((x186/x187)<=x188));

	if (t43 != 1908741U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = INT8_MAX;
	static uint32_t x195 = UINT32_MAX;
	static int8_t x196 = -1;
	int32_t t44 = -39203646;

	t44 = (x193-((x194/x195)<=x196));

	if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MIN;
	int8_t x200 = 13;
	volatile int32_t t45 = 37085;

	t45 = (x197-((x198/x199)<=x200));

	if (t45 != -32769) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	uint64_t x202 = 328117707361899LLU;
	int64_t x204 = INT64_MIN;
	static volatile int32_t t46 = 10958;

	t46 = (x201-((x202/x203)<=x204));

	if (t46 != -32769) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = 866;
	int8_t x206 = INT8_MIN;
	volatile int32_t t47 = -30833324;

	t47 = (x205-((x206/x207)<=x208));

	if (t47 != 866) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = 6;
	static int32_t x210 = INT32_MAX;
	static volatile int64_t x212 = -1LL;
	static volatile int32_t t48 = 12077580;

	t48 = (x209-((x210/x211)<=x212));

	if (t48 != 6) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	volatile uint16_t x214 = 1U;
	int64_t x215 = -7803623134153LL;
	volatile int8_t x216 = INT8_MIN;
	volatile int32_t t49 = 7;

	t49 = (x213-((x214/x215)<=x216));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x221 = 5U;
	volatile int16_t x222 = INT16_MAX;
	static uint16_t x223 = 8U;
	uint16_t x224 = 179U;
	volatile int32_t t50 = 0;

	t50 = (x221-((x222/x223)<=x224));

	if (t50 != 5) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x225 = 44U;
	static int16_t x227 = -1433;
	static uint8_t x228 = 113U;
	int32_t t51 = 800;

	t51 = (x225-((x226/x227)<=x228));

	if (t51 != 44) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x229 = -1;
	int8_t x230 = INT8_MIN;
	static uint16_t x231 = UINT16_MAX;
	int64_t x232 = -1LL;

	t52 = (x229-((x230/x231)<=x232));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = INT8_MAX;
	uint64_t x239 = UINT64_MAX;
	int32_t x240 = 0;
	int32_t t53 = -253;

	t53 = (x237-((x238/x239)<=x240));

	if (t53 != 126) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x241 = 3759U;
	volatile int64_t x242 = -702LL;
	static uint32_t x244 = 1218595U;
	uint32_t t54 = 1589391U;

	t54 = (x241-((x242/x243)<=x244));

	if (t54 != 3758U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x246 = INT64_MIN;
	static uint8_t x247 = UINT8_MAX;
	volatile int32_t t55 = 6557706;

	t55 = (x245-((x246/x247)<=x248));

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = -1;
	int16_t x251 = INT16_MIN;
	static volatile int64_t t56 = INT64_MIN;

	t56 = (x249-((x250/x251)<=x252));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x253 = 1U;
	uint16_t x254 = 3949U;
	int8_t x255 = -5;
	static int32_t x256 = INT32_MIN;

	t57 = (x253-((x254/x255)<=x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x261 = UINT8_MAX;
	volatile int64_t x262 = 13542803944182856LL;
	uint8_t x263 = UINT8_MAX;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t58 = -234493;

	t58 = (x261-((x262/x263)<=x264));

	if (t58 != 254) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x266 = -1;
	int8_t x267 = INT8_MIN;
	int32_t t59 = -19637;

	t59 = (x265-((x266/x267)<=x268));

	if (t59 != 65534) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MAX;
	uint8_t x270 = 8U;
	int32_t t60 = 1;

	t60 = (x269-((x270/x271)<=x272));

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	int64_t x274 = INT64_MIN;
	int64_t x275 = INT64_MIN;
	int16_t x276 = INT16_MIN;
	volatile int64_t t61 = 1027LL;

	t61 = (x273-((x274/x275)<=x276));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MAX;
	int32_t t62 = INT32_MIN;

	t62 = (x277-((x278/x279)<=x280));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -1;
	int8_t x282 = 7;
	int64_t x284 = -1LL;
	static volatile int32_t t63 = 595473;

	t63 = (x281-((x282/x283)<=x284));

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x289 = 206962;
	uint32_t x290 = UINT32_MAX;
	volatile uint8_t x292 = UINT8_MAX;
	volatile int32_t t64 = -10;

	t64 = (x289-((x290/x291)<=x292));

	if (t64 != 206962) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int8_t x298 = INT8_MAX;
	int8_t x299 = 2;
	volatile int16_t x300 = -1;
	int32_t t65 = 13;

	t65 = (x297-((x298/x299)<=x300));

	if (t65 != 65535) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x305 = INT16_MIN;
	volatile uint16_t x306 = 241U;
	uint16_t x308 = 4U;
	static volatile int32_t t66 = -3958035;

	t66 = (x305-((x306/x307)<=x308));

	if (t66 != -32769) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x309 = 59;
	int8_t x310 = INT8_MIN;
	volatile uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 123U;

	t67 = (x309-((x310/x311)<=x312));

	if (t67 != 58) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = 287;
	int32_t x315 = INT32_MAX;
	int8_t x316 = -1;
	volatile int32_t t68 = 1;

	t68 = (x313-((x314/x315)<=x316));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x318 = 280107921664LLU;
	int8_t x319 = -3;
	volatile int8_t x320 = INT8_MAX;
	volatile int32_t t69 = 5054022;

	t69 = (x317-((x318/x319)<=x320));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x322 = INT64_MAX;
	int64_t x323 = -1LL;

	t70 = (x321-((x322/x323)<=x324));

	if (t70 != 12) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x325 = 84105424U;
	volatile int8_t x326 = -5;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = 3;
	static uint32_t t71 = 234U;

	t71 = (x325-((x326/x327)<=x328));

	if (t71 != 84105423U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x329 = UINT64_MAX;
	volatile int16_t x330 = INT16_MAX;
	int64_t x332 = INT64_MAX;
	static uint64_t t72 = 58050047068LLU;

	t72 = (x329-((x330/x331)<=x332));

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x333 = UINT8_MAX;
	uint32_t x335 = 1U;
	static uint64_t x336 = 54824LLU;
	volatile int32_t t73 = -17921;

	t73 = (x333-((x334/x335)<=x336));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x337 = -12;
	volatile int32_t x338 = -1;
	static uint16_t x339 = UINT16_MAX;
	volatile uint8_t x340 = UINT8_MAX;
	int32_t t74 = -3;

	t74 = (x337-((x338/x339)<=x340));

	if (t74 != -13) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = -4144;
	uint64_t x343 = UINT64_MAX;
	static volatile int32_t t75 = 49;

	t75 = (x341-((x342/x343)<=x344));

	if (t75 != -4145) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = 9;
	int32_t x346 = -1;
	volatile uint64_t x348 = 16316114291377250LLU;
	static int32_t t76 = 382;

	t76 = (x345-((x346/x347)<=x348));

	if (t76 != 8) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x349 = 9302U;
	uint16_t x350 = 40U;
	int32_t x351 = INT32_MAX;
	int32_t x352 = 0;
	static uint32_t t77 = 576136U;

	t77 = (x349-((x350/x351)<=x352));

	if (t77 != 9301U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x353 = 14568U;
	static uint8_t x354 = 16U;
	uint32_t x355 = UINT32_MAX;

	t78 = (x353-((x354/x355)<=x356));

	if (t78 != 14568) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = -1;
	static int8_t x358 = -1;
	int16_t x359 = -1;
	int64_t x360 = INT64_MIN;
	int32_t t79 = -982;

	t79 = (x357-((x358/x359)<=x360));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x365 = 2LLU;
	static uint8_t x367 = 3U;
	uint8_t x368 = 2U;

	t80 = (x365-((x366/x367)<=x368));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = -1;
	volatile int32_t x370 = INT32_MIN;
	volatile int32_t x371 = INT32_MIN;
	static int32_t x372 = 783031;
	int32_t t81 = 243472;

	t81 = (x369-((x370/x371)<=x372));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x373 = 528326471LLU;
	uint64_t x374 = 470427358789257882LLU;
	static int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MIN;
	static uint64_t t82 = 16977682199006956LLU;

	t82 = (x373-((x374/x375)<=x376));

	if (t82 != 528326470LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x377 = -1;
	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t83 = 0;

	t83 = (x377-((x378/x379)<=x380));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x381 = 5305U;
	static int64_t x383 = -1LL;
	volatile uint32_t t84 = 170U;

	t84 = (x381-((x382/x383)<=x384));

	if (t84 != 5304U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x385 = 0U;
	int16_t x386 = INT16_MAX;
	volatile uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 6611U;
	static volatile int32_t t85 = 2797;

	t85 = (x385-((x386/x387)<=x388));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = UINT64_MAX;
	static uint32_t x391 = UINT32_MAX;
	volatile uint8_t x392 = 14U;

	t86 = (x389-((x390/x391)<=x392));

	if (t86 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MIN;
	int16_t x395 = INT16_MIN;
	uint32_t x396 = UINT32_MAX;

	t87 = (x393-((x394/x395)<=x396));

	if (t87 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x397 = 4497983994318873LL;
	int16_t x398 = -50;
	int64_t t88 = -1LL;

	t88 = (x397-((x398/x399)<=x400));

	if (t88 != 4497983994318872LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x401 = UINT32_MAX;
	int16_t x402 = -4024;
	static uint16_t x403 = 114U;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x401-((x402/x403)<=x404));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x405 = 204311U;
	uint8_t x406 = 81U;
	volatile int64_t x407 = -1LL;
	int16_t x408 = INT16_MIN;
	uint32_t t90 = 0U;

	t90 = (x405-((x406/x407)<=x408));

	if (t90 != 204311U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x409 = INT16_MIN;
	volatile int32_t t91 = 60890743;

	t91 = (x409-((x410/x411)<=x412));

	if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x413 = 0;
	int32_t x414 = INT32_MAX;
	int8_t x415 = INT8_MAX;
	static int32_t t92 = 1;

	t92 = (x413-((x414/x415)<=x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x417 = 1942U;
	int16_t x418 = 0;
	int32_t x419 = INT32_MAX;
	int16_t x420 = -1;
	volatile uint32_t t93 = 10U;

	t93 = (x417-((x418/x419)<=x420));

	if (t93 != 1942U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = -3;
	static uint16_t x422 = 969U;
	static uint16_t x423 = UINT16_MAX;
	static uint16_t x424 = UINT16_MAX;
	volatile int32_t t94 = 292782049;

	t94 = (x421-((x422/x423)<=x424));

	if (t94 != -4) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x425 = 441802LL;
	int16_t x426 = INT16_MIN;
	uint16_t x427 = 445U;
	volatile int64_t x428 = -276582561LL;
	int64_t t95 = 4412011947LL;

	t95 = (x425-((x426/x427)<=x428));

	if (t95 != 441802LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = INT16_MIN;
	static volatile int32_t x430 = -16027;
	int64_t x431 = -4873067321LL;
	int16_t x432 = 14;
	volatile int32_t t96 = -25738;

	t96 = (x429-((x430/x431)<=x432));

	if (t96 != -32769) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x433 = INT16_MIN;
	int8_t x434 = INT8_MIN;
	int64_t x435 = -2994581369306LL;
	int32_t x436 = INT32_MAX;
	static int32_t t97 = -1244;

	t97 = (x433-((x434/x435)<=x436));

	if (t97 != -32769) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x437 = UINT64_MAX;
	static int64_t x438 = INT64_MAX;
	static volatile uint32_t x439 = 1383478518U;
	volatile int64_t x440 = INT64_MIN;
	uint64_t t98 = UINT64_MAX;

	t98 = (x437-((x438/x439)<=x440));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = 2;
	static volatile int16_t x443 = 20;
	int32_t t99 = -9036;

	t99 = (x441-((x442/x443)<=x444));

	if (t99 != -32769) { NG(); } else { ; }
	
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

