#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint8_t x1 = 11U;
volatile uint32_t x4 = UINT32_MAX;
volatile int32_t t2 = -4;
int16_t x16 = -1;
int32_t x22 = -1;
uint64_t x24 = 88LLU;
volatile uint64_t x29 = UINT64_MAX;
int16_t x31 = INT16_MIN;
int32_t x34 = -1;
volatile int32_t t8 = 14034;
int64_t x40 = -1LL;
int32_t t9 = -853007;
int8_t x43 = INT8_MAX;
static uint64_t x46 = UINT64_MAX;
uint8_t x54 = UINT8_MAX;
static volatile int32_t t13 = -2502398;
volatile int8_t x61 = INT8_MIN;
int8_t x62 = 0;
volatile uint8_t x63 = UINT8_MAX;
static uint8_t x73 = 4U;
uint32_t x74 = UINT32_MAX;
int32_t x78 = INT32_MIN;
volatile int64_t x88 = INT64_MIN;
volatile int32_t t23 = 610136320;
volatile int32_t t25 = -238158590;
int16_t x106 = -22;
volatile int32_t t27 = 570653133;
int16_t x115 = INT16_MIN;
int8_t x116 = -1;
int32_t x119 = INT32_MIN;
uint32_t x121 = UINT32_MAX;
int8_t x122 = 37;
int8_t x125 = -18;
int16_t x126 = 261;
int64_t x130 = INT64_MIN;
static int32_t x131 = INT32_MIN;
volatile int32_t t32 = 1;
uint64_t x144 = 216935058LLU;
int32_t x150 = INT32_MAX;
static uint8_t x154 = 1U;
int32_t x160 = INT32_MIN;
int32_t t39 = 337364;
static uint16_t x172 = 18361U;
static int32_t t44 = 72;
volatile int64_t x182 = INT64_MIN;
int32_t x183 = 2050597;
volatile uint64_t x187 = 845LLU;
volatile int32_t t47 = -1;
int32_t t48 = -112514;
uint8_t x198 = 15U;
volatile uint32_t x199 = 3029735U;
int32_t x202 = -65;
int8_t x205 = 0;
int64_t x215 = 7103728905627LL;
uint16_t x225 = UINT16_MAX;
uint64_t x228 = 1040009LLU;
uint32_t x229 = 154U;
int16_t x232 = INT16_MIN;
volatile int32_t t57 = 31802961;
int64_t x235 = INT64_MAX;
static int32_t t59 = 2919032;
int64_t x241 = INT64_MIN;
int32_t x242 = -1;
volatile int32_t t60 = -3110;
int8_t x245 = INT8_MIN;
int8_t x248 = 35;
volatile int8_t x250 = 52;
int32_t t62 = -122;
uint8_t x255 = 33U;
static int16_t x274 = -1;
int32_t t67 = 17;
volatile uint8_t x282 = 107U;
uint8_t x285 = 9U;
static int8_t x287 = 1;
int8_t x291 = -12;
static int32_t x297 = INT32_MIN;
volatile int16_t x303 = INT16_MAX;
uint16_t x307 = UINT16_MAX;
int32_t t75 = -82938;
int32_t x309 = INT32_MAX;
int8_t x321 = INT8_MAX;
int32_t t79 = 9756526;
volatile int32_t t80 = -1876;
int16_t x339 = -1;
static volatile uint8_t x343 = 23U;
int32_t x347 = INT32_MIN;
int64_t x349 = 658410LL;
static volatile int32_t x353 = -1;
static int32_t x375 = INT32_MAX;
uint32_t x379 = UINT32_MAX;
int32_t x381 = 241995907;
int8_t x384 = INT8_MIN;
int16_t x388 = -1;
int16_t x389 = -2;
volatile int32_t t96 = -6661907;
int8_t x395 = -22;
int8_t x396 = -1;


void f0(void) {
	volatile uint64_t x2 = 5LLU;
	volatile int64_t x3 = INT64_MAX;
	int32_t t0 = 563132;

	t0 = ((x1==(x2%x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 0U;
	int32_t x6 = INT32_MAX;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -74;

	t1 = ((x5==(x6%x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	uint64_t x10 = 838358LLU;
	int32_t x11 = -1;
	static volatile int8_t x12 = INT8_MAX;

	t2 = ((x9==(x10%x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int8_t x14 = -1;
	static uint16_t x15 = 3769U;
	int32_t t3 = 34;

	t3 = ((x13==(x14%x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MAX;
	uint64_t x18 = 614LLU;
	uint64_t x19 = UINT64_MAX;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 36;

	t4 = ((x17==(x18%x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	int32_t x23 = -1;
	static int32_t t5 = -1286710;

	t5 = ((x21==(x22%x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -64;
	volatile int8_t x26 = INT8_MIN;
	int8_t x27 = -12;
	int8_t x28 = -1;
	static volatile int32_t t6 = -974;

	t6 = ((x25==(x26%x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = INT16_MAX;
	volatile int16_t x32 = -1;
	int32_t t7 = 1;

	t7 = ((x29==(x30%x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile uint8_t x35 = UINT8_MAX;
	static uint32_t x36 = 0U;

	t8 = ((x33==(x34%x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static uint16_t x38 = UINT16_MAX;
	volatile int8_t x39 = -4;

	t9 = ((x37==(x38%x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 2669387050768LL;
	volatile uint8_t x42 = 5U;
	int8_t x44 = -21;
	int32_t t10 = -199378;

	t10 = ((x41==(x42%x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint8_t x47 = 90U;
	int64_t x48 = 113356LL;
	int32_t t11 = 1;

	t11 = ((x45==(x46%x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -55118160;
	volatile uint16_t x50 = 84U;
	int16_t x51 = INT16_MIN;
	volatile int64_t x52 = INT64_MIN;
	int32_t t12 = -27;

	t12 = ((x49==(x50%x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 1;
	volatile int32_t x55 = -1;
	int8_t x56 = -1;

	t13 = ((x53==(x54%x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 463050500343128LLU;
	static int32_t x58 = 248012743;
	volatile int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MAX;
	int32_t t14 = 15;

	t14 = ((x57==(x58%x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x64 = -1;
	static int32_t t15 = -205;

	t15 = ((x61==(x62%x63))<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = -1LL;
	volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = -6201897;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 33620;

	t16 = ((x65==(x66%x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = UINT64_MAX;
	int32_t t17 = 4932;

	t17 = ((x69==(x70%x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = UINT8_MAX;
	static int8_t x76 = -3;
	int32_t t18 = -2194260;

	t18 = ((x73==(x74%x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x79 = -295540;
	int8_t x80 = -1;
	volatile int32_t t19 = 35;

	t19 = ((x77==(x78%x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	volatile uint32_t x82 = 6569U;
	static uint64_t x83 = 904LLU;
	uint8_t x84 = 17U;
	int32_t t20 = -345;

	t20 = ((x81==(x82%x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = 101U;
	static volatile int64_t x86 = -1274LL;
	int16_t x87 = -1;
	int32_t t21 = -765005;

	t21 = ((x85==(x86%x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	uint16_t x90 = 30U;
	static int64_t x91 = -1LL;
	volatile uint16_t x92 = 335U;
	volatile int32_t t22 = -54351046;

	t22 = ((x89==(x90%x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	uint16_t x94 = UINT16_MAX;
	static volatile int16_t x95 = -370;
	static uint64_t x96 = 2352070498LLU;

	t23 = ((x93==(x94%x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MAX;
	static volatile uint32_t x98 = UINT32_MAX;
	int16_t x99 = INT16_MAX;
	int32_t x100 = -70;
	volatile int32_t t24 = 607504954;

	t24 = ((x97==(x98%x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	volatile int64_t x103 = INT64_MAX;
	uint16_t x104 = 4175U;

	t25 = ((x101==(x102%x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 8;
	volatile uint8_t x107 = UINT8_MAX;
	uint32_t x108 = 13572086U;
	volatile int32_t t26 = -2;

	t26 = ((x105==(x106%x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = 0;
	uint8_t x110 = 0U;
	int64_t x111 = INT64_MAX;
	int16_t x112 = -1;

	t27 = ((x109==(x110%x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = 1047131966401006847LLU;
	int32_t t28 = 632498018;

	t28 = ((x113==(x114%x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	uint8_t x118 = UINT8_MAX;
	static int16_t x120 = INT16_MAX;
	volatile int32_t t29 = -386;

	t29 = ((x117==(x118%x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = INT8_MIN;
	int32_t t30 = 12130414;

	t30 = ((x121==(x122%x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x127 = 7LLU;
	uint8_t x128 = UINT8_MAX;
	static volatile int32_t t31 = -159685124;

	t31 = ((x125==(x126%x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -18246268;
	int16_t x132 = 6;

	t32 = ((x129==(x130%x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 24U;
	uint8_t x134 = 7U;
	uint8_t x135 = 24U;
	uint32_t x136 = UINT32_MAX;
	static int32_t t33 = -12;

	t33 = ((x133==(x134%x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = -1;
	uint16_t x139 = 1145U;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = -564243;

	t34 = ((x137==(x138%x139))<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static int32_t x142 = -2039;
	int64_t x143 = INT64_MIN;
	int32_t t35 = 180209053;

	t35 = ((x141==(x142%x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	volatile int64_t x146 = -1LL;
	uint64_t x147 = 8369698377108995688LLU;
	int32_t x148 = INT32_MIN;
	int32_t t36 = -13216022;

	t36 = ((x145==(x146%x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -2303;

	t37 = ((x149==(x150%x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 23U;
	int64_t x155 = -2991467333886LL;
	int32_t x156 = -111;
	int32_t t38 = -1363921;

	t38 = ((x153==(x154%x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 0;
	volatile int16_t x158 = -7563;
	uint64_t x159 = UINT64_MAX;

	t39 = ((x157==(x158%x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -118;
	static int32_t x162 = INT32_MAX;
	static uint32_t x163 = 1U;
	static uint8_t x164 = 7U;
	int32_t t40 = 1;

	t40 = ((x161==(x162%x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 8475;
	int32_t x166 = -25424919;
	int64_t x167 = INT64_MIN;
	static volatile uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = 265144866;

	t41 = ((x165==(x166%x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	uint16_t x170 = 2U;
	int32_t x171 = INT32_MIN;
	volatile int32_t t42 = -434;

	t42 = ((x169==(x170%x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x173 = 4U;
	uint64_t x174 = UINT64_MAX;
	static uint8_t x175 = 1U;
	static volatile uint64_t x176 = 440769457668404LLU;
	volatile int32_t t43 = 12063005;

	t43 = ((x173==(x174%x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	volatile uint32_t x178 = 8U;
	int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MAX;

	t44 = ((x177==(x178%x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint64_t x184 = 23296215577LLU;
	int32_t t45 = 113;

	t45 = ((x181==(x182%x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 39U;
	int16_t x186 = INT16_MIN;
	uint32_t x188 = UINT32_MAX;
	int32_t t46 = 2;

	t46 = ((x185==(x186%x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	volatile uint32_t x190 = 233U;
	static int16_t x191 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;

	t47 = ((x189==(x190%x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 2933U;
	int16_t x194 = -4252;
	volatile int8_t x195 = -1;
	int8_t x196 = -1;

	t48 = ((x193==(x194%x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x200 = 5;
	int32_t t49 = -646138;

	t49 = ((x197==(x198%x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 15447554LLU;
	volatile int16_t x203 = -144;
	static uint16_t x204 = 10574U;
	volatile int32_t t50 = -84040;

	t50 = ((x201==(x202%x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = 14;
	int32_t x207 = 142486;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = 0;

	t51 = ((x205==(x206%x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -1;
	int8_t x210 = INT8_MIN;
	int32_t x211 = -83997;
	int8_t x212 = -18;
	volatile int32_t t52 = 659;

	t52 = ((x209==(x210%x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = -4;
	int32_t x216 = INT32_MAX;
	volatile int32_t t53 = -30798;

	t53 = ((x213==(x214%x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -59;
	int16_t x218 = -53;
	int16_t x219 = INT16_MAX;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -4635785;

	t54 = ((x217==(x218%x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = 23312467064LL;
	int64_t x224 = INT64_MAX;
	volatile int32_t t55 = 3248;

	t55 = ((x221==(x222%x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x226 = UINT32_MAX;
	uint64_t x227 = 4027221999283582LLU;
	volatile int32_t t56 = 192;

	t56 = ((x225==(x226%x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x230 = UINT64_MAX;
	uint64_t x231 = UINT64_MAX;

	t57 = ((x229==(x230%x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 167597802035690LLU;
	int16_t x234 = INT16_MIN;
	int8_t x236 = 0;
	int32_t t58 = 2168601;

	t58 = ((x233==(x234%x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	uint64_t x238 = 3LLU;
	static int32_t x239 = -1;
	volatile int64_t x240 = -1LL;

	t59 = ((x237==(x238%x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x243 = 7U;
	uint32_t x244 = 7102264U;

	t60 = ((x241==(x242%x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MAX;
	volatile int32_t t61 = 40249578;

	t61 = ((x245==(x246%x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x249 = UINT32_MAX;
	uint8_t x251 = UINT8_MAX;
	static int32_t x252 = 8;

	t62 = ((x249==(x250%x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = INT16_MIN;
	static int8_t x254 = 20;
	int32_t x256 = INT32_MAX;
	int32_t t63 = 11523857;

	t63 = ((x253==(x254%x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 12347498U;
	volatile int16_t x258 = 585;
	uint32_t x259 = UINT32_MAX;
	static volatile int16_t x260 = -1;
	volatile int32_t t64 = -7355;

	t64 = ((x257==(x258%x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = 65U;
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = INT64_MIN;
	volatile int64_t x264 = INT64_MAX;
	volatile int32_t t65 = -16299606;

	t65 = ((x261==(x262%x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 3;
	uint16_t x266 = 101U;
	uint8_t x267 = UINT8_MAX;
	static int32_t x268 = -12038;
	static volatile int32_t t66 = -3635899;

	t66 = ((x265==(x266%x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x273 = 19946199834969786LLU;
	uint64_t x275 = 28296546669849856LLU;
	int8_t x276 = INT8_MIN;

	t67 = ((x273==(x274%x275))<x276);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x277 = 10;
	volatile int64_t x278 = INT64_MIN;
	static volatile uint32_t x279 = 100U;
	int32_t x280 = 24949;
	static volatile int32_t t68 = 489;

	t68 = ((x277==(x278%x279))<x280);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = -534;
	int8_t x283 = -1;
	uint64_t x284 = UINT64_MAX;
	static volatile int32_t t69 = -443453;

	t69 = ((x281==(x282%x283))<x284);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x286 = -1;
	static int16_t x288 = INT16_MIN;
	volatile int32_t t70 = 20539424;

	t70 = ((x285==(x286%x287))<x288);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = -30225LL;
	int8_t x290 = 1;
	volatile uint16_t x292 = UINT16_MAX;
	volatile int32_t t71 = 17;

	t71 = ((x289==(x290%x291))<x292);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = -1445;
	uint64_t x294 = 2580LLU;
	int16_t x295 = -2;
	int16_t x296 = -485;
	volatile int32_t t72 = 339194063;

	t72 = ((x293==(x294%x295))<x296);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x298 = INT64_MAX;
	static volatile int64_t x299 = -1LL;
	volatile int32_t x300 = 26482;
	volatile int32_t t73 = 206034089;

	t73 = ((x297==(x298%x299))<x300);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x301 = UINT32_MAX;
	uint8_t x302 = 1U;
	int32_t x304 = -76226;
	int32_t t74 = 1393322;

	t74 = ((x301==(x302%x303))<x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -4LL;
	static int8_t x306 = 5;
	static uint16_t x308 = 442U;

	t75 = ((x305==(x306%x307))<x308);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x310 = 0U;
	static int16_t x311 = 1;
	int32_t x312 = INT32_MIN;
	static int32_t t76 = 1;

	t76 = ((x309==(x310%x311))<x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x313 = 77527LL;
	static volatile int64_t x314 = -101LL;
	int32_t x315 = 1;
	int32_t x316 = INT32_MIN;
	volatile int32_t t77 = 9;

	t77 = ((x313==(x314%x315))<x316);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 94527459LLU;
	int16_t x318 = 3;
	int8_t x319 = INT8_MIN;
	volatile int16_t x320 = -1;
	volatile int32_t t78 = -1666154;

	t78 = ((x317==(x318%x319))<x320);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x322 = 178053U;
	int32_t x323 = 9;
	static int64_t x324 = -10363002456LL;

	t79 = ((x321==(x322%x323))<x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 34730770497427LLU;
	volatile int32_t x326 = -1;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -5432;

	t80 = ((x325==(x326%x327))<x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x329 = INT8_MIN;
	uint32_t x330 = 2U;
	static volatile int64_t x331 = -1LL;
	volatile uint64_t x332 = 7LLU;
	static volatile int32_t t81 = 470;

	t81 = ((x329==(x330%x331))<x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 42U;
	static volatile int16_t x334 = 1;
	int16_t x335 = INT16_MAX;
	static int8_t x336 = INT8_MAX;
	int32_t t82 = 5;

	t82 = ((x333==(x334%x335))<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x337 = -24080135707249926LL;
	int16_t x338 = -130;
	int16_t x340 = -50;
	volatile int32_t t83 = -1418561;

	t83 = ((x337==(x338%x339))<x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x341 = 1U;
	uint8_t x342 = UINT8_MAX;
	uint32_t x344 = 1443U;
	volatile int32_t t84 = 883091857;

	t84 = ((x341==(x342%x343))<x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = INT16_MAX;
	static uint16_t x346 = UINT16_MAX;
	int16_t x348 = -1;
	volatile int32_t t85 = 36802531;

	t85 = ((x345==(x346%x347))<x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = 4;
	volatile uint64_t x351 = UINT64_MAX;
	volatile int16_t x352 = INT16_MAX;
	int32_t t86 = -6320;

	t86 = ((x349==(x350%x351))<x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x354 = INT64_MIN;
	uint16_t x355 = 383U;
	int64_t x356 = -1LL;
	static int32_t t87 = 22418;

	t87 = ((x353==(x354%x355))<x356);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = -1;
	static int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MIN;
	int32_t x360 = -1;
	int32_t t88 = -50;

	t88 = ((x357==(x358%x359))<x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x361 = 21170290U;
	static int16_t x362 = INT16_MIN;
	uint16_t x363 = 496U;
	int32_t x364 = 143760;
	static volatile int32_t t89 = -1;

	t89 = ((x361==(x362%x363))<x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = -1;
	int64_t x366 = INT64_MAX;
	static uint64_t x367 = 825190241596049390LLU;
	int64_t x368 = INT64_MIN;
	static int32_t t90 = -5909718;

	t90 = ((x365==(x366%x367))<x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = INT16_MAX;
	static int64_t x370 = INT64_MIN;
	int16_t x371 = -72;
	int32_t x372 = INT32_MIN;
	int32_t t91 = -10;

	t91 = ((x369==(x370%x371))<x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x373 = -251694;
	volatile int16_t x374 = INT16_MIN;
	volatile int64_t x376 = 14793655LL;
	volatile int32_t t92 = 4166;

	t92 = ((x373==(x374%x375))<x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = -1;
	static int32_t x380 = -1;
	static int32_t t93 = -618709509;

	t93 = ((x377==(x378%x379))<x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x382 = INT8_MAX;
	int16_t x383 = INT16_MAX;
	static int32_t t94 = -486;

	t94 = ((x381==(x382%x383))<x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x385 = -2;
	int16_t x386 = INT16_MIN;
	int64_t x387 = INT64_MAX;
	int32_t t95 = 0;

	t95 = ((x385==(x386%x387))<x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x390 = -1;
	volatile uint16_t x391 = 123U;
	int16_t x392 = 4091;

	t96 = ((x389==(x390%x391))<x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x393 = 42U;
	static volatile int8_t x394 = -7;
	int32_t t97 = 1;

	t97 = ((x393==(x394%x395))<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x397 = INT32_MIN;
	int16_t x398 = -1;
	static uint32_t x399 = UINT32_MAX;
	int32_t x400 = INT32_MAX;
	volatile int32_t t98 = -7473;

	t98 = ((x397==(x398%x399))<x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x401 = 1U;
	volatile uint8_t x402 = UINT8_MAX;
	static volatile int32_t x403 = -1306;
	uint16_t x404 = 872U;
	int32_t t99 = 7160;

	t99 = ((x401==(x402%x403))<x404);

	if (t99 != 1) { NG(); } else { ; }
	
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

