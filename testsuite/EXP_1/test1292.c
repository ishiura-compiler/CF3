#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 1079U;
int32_t x12 = INT32_MAX;
volatile int32_t t3 = 182542530;
static int64_t x20 = -1LL;
int64_t t4 = 233730426397850LL;
volatile int16_t x23 = -1;
uint16_t x27 = 1U;
int16_t x45 = -1;
volatile int64_t x49 = INT64_MIN;
volatile int32_t t11 = 1041;
int32_t x58 = INT32_MIN;
uint16_t x63 = 14086U;
uint8_t x64 = 1U;
volatile int8_t x65 = -1;
int64_t x71 = -270983662758883151LL;
uint8_t x79 = 71U;
volatile int64_t t18 = 39691554664433LL;
volatile int32_t x83 = INT32_MAX;
uint16_t x87 = 1263U;
volatile uint64_t t20 = 67LLU;
uint32_t x91 = 11933271U;
uint16_t x105 = UINT16_MAX;
static volatile int8_t x118 = -1;
int32_t t27 = -8258572;
volatile int32_t x125 = INT32_MAX;
uint16_t x130 = UINT16_MAX;
int32_t t29 = 0;
int8_t x144 = INT8_MIN;
int32_t x152 = INT32_MAX;
int8_t x160 = INT8_MIN;
int32_t x161 = -16859852;
int64_t x168 = 131092791744181322LL;
int32_t t39 = 0;
static volatile int64_t x181 = INT64_MIN;
static int16_t x182 = -85;
int64_t x189 = -514482164290030LL;
uint16_t x190 = 131U;
static int64_t t44 = 431688568LL;
int8_t x193 = 1;
uint32_t x201 = 115620431U;
int16_t x205 = 8158;
uint32_t x206 = UINT32_MAX;
int32_t x210 = INT32_MIN;
static int16_t x211 = -5731;
int16_t x213 = INT16_MIN;
int32_t t50 = 0;
uint32_t x218 = 187142U;
int8_t x228 = 1;
int8_t x232 = 2;
int32_t x234 = INT32_MIN;
static int32_t x237 = -1;
volatile int32_t t58 = 408;
int64_t x251 = 1029278LL;
int16_t x254 = INT16_MIN;
int16_t x259 = INT16_MIN;
static uint32_t t62 = 1U;
int8_t x271 = -61;
volatile int8_t x272 = -2;
int32_t x276 = INT32_MIN;
int32_t x277 = INT32_MIN;
int32_t t69 = -619720772;
volatile int64_t x299 = INT64_MIN;
static int8_t x305 = -2;
uint32_t x320 = 119150U;
int64_t t77 = -297913597549947LL;
uint32_t x329 = 744295240U;
int64_t x330 = INT64_MIN;
volatile int32_t t79 = 226;
int64_t t82 = -459LL;
volatile uint64_t x350 = UINT64_MAX;
volatile int32_t t83 = 1;
int16_t x357 = INT16_MIN;
volatile int8_t x359 = 45;
int16_t x360 = 69;
static int64_t x361 = -1LL;
int16_t x365 = INT16_MAX;
int16_t x366 = INT16_MIN;
static volatile int8_t x373 = 2;
int32_t x379 = INT32_MIN;
int32_t x381 = -1;
int8_t x382 = INT8_MIN;
uint32_t x383 = 22U;
uint16_t x384 = UINT16_MAX;
int32_t x385 = -1;
static uint64_t x390 = 31LLU;
static int8_t x391 = 7;
volatile int64_t x393 = -7LL;
uint64_t x405 = UINT64_MAX;
int64_t x413 = 64210LL;
int64_t x414 = -1LL;
int8_t x418 = 1;
volatile int64_t x420 = -11332690000293456LL;
volatile int64_t t99 = 0LL;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int32_t x2 = -1;
	volatile int8_t x4 = INT8_MIN;
	int32_t t0 = -293906092;

	t0 = (((x1==x2)<x3)%x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -203;
	volatile uint8_t x6 = UINT8_MAX;
	static uint16_t x7 = 23U;
	uint8_t x8 = 31U;
	volatile int32_t t1 = -4156902;

	t1 = (((x5==x6)<x7)%x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 40U;
	static int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	volatile int32_t t2 = -25223;

	t2 = (((x9==x10)<x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	uint32_t x14 = 28609007U;
	static uint8_t x15 = 2U;
	static int8_t x16 = INT8_MAX;

	t3 = (((x13==x14)<x15)%x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x17 = INT32_MAX;
	uint16_t x18 = 1U;
	int32_t x19 = INT32_MIN;

	t4 = (((x17==x18)<x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	static int8_t x22 = INT8_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = -1;

	t5 = (((x21==x22)<x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -198603777356443LL;
	int8_t x26 = INT8_MIN;
	int32_t x28 = -22475;
	static volatile int32_t t6 = -22604909;

	t6 = (((x25==x26)<x27)%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1357441U;
	uint32_t x30 = 28963U;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = 28U;
	uint32_t t7 = 168512262U;

	t7 = (((x29==x30)<x31)%x32);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint8_t x34 = 11U;
	int16_t x35 = INT16_MAX;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -83127;

	t8 = (((x33==x34)<x35)%x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	int16_t x44 = -1;
	int32_t t9 = 235;

	t9 = (((x41==x42)<x43)%x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x46 = INT32_MIN;
	static int64_t x47 = -1LL;
	int8_t x48 = INT8_MAX;
	int32_t t10 = -129960;

	t10 = (((x45==x46)<x47)%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	static int32_t x51 = -1;
	int16_t x52 = INT16_MIN;

	t11 = (((x49==x50)<x51)%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = -229081LL;
	volatile int64_t x54 = -44408444LL;
	int64_t x55 = -1LL;
	int16_t x56 = INT16_MIN;
	static volatile int32_t t12 = -40173;

	t12 = (((x53==x54)<x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	uint16_t x59 = 17U;
	static int32_t x60 = 12553;
	int32_t t13 = -4847;

	t13 = (((x57==x58)<x59)%x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = INT16_MAX;
	int8_t x62 = INT8_MAX;
	int32_t t14 = -69;

	t14 = (((x61==x62)<x63)%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = 157;
	uint32_t x67 = 0U;
	int8_t x68 = 4;
	int32_t t15 = -993;

	t15 = (((x65==x66)<x67)%x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	int16_t x70 = -656;
	int64_t x72 = INT64_MAX;
	static volatile int64_t t16 = -28438439484LL;

	t16 = (((x69==x70)<x71)%x72);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 234U;
	static int16_t x74 = INT16_MIN;
	volatile int64_t x75 = INT64_MIN;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t17 = 19U;

	t17 = (((x73==x74)<x75)%x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -957;
	int64_t x78 = -10LL;
	static int64_t x80 = INT64_MIN;

	t18 = (((x77==x78)<x79)%x80);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x81 = 64;
	volatile int8_t x82 = INT8_MAX;
	int32_t x84 = -1;
	int32_t t19 = -152107;

	t19 = (((x81==x82)<x83)%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -62;
	int16_t x86 = INT16_MIN;
	static uint64_t x88 = UINT64_MAX;

	t20 = (((x85==x86)<x87)%x88);

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = -440633575;
	uint8_t x90 = UINT8_MAX;
	uint8_t x92 = 10U;
	int32_t t21 = 62537923;

	t21 = (((x89==x90)<x91)%x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = UINT32_MAX;
	int16_t x94 = 7637;
	volatile int8_t x95 = INT8_MIN;
	uint64_t x96 = 32452397388LLU;
	uint64_t t22 = 247841011360181LLU;

	t22 = (((x93==x94)<x95)%x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	uint32_t x98 = UINT32_MAX;
	uint64_t x99 = UINT64_MAX;
	static int64_t x100 = INT64_MIN;
	static volatile int64_t t23 = -2LL;

	t23 = (((x97==x98)<x99)%x100);

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x106 = UINT32_MAX;
	static volatile int8_t x107 = 13;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t24 = -85684486;

	t24 = (((x105==x106)<x107)%x108);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = -2;
	volatile int16_t x110 = 499;
	static uint16_t x111 = 2854U;
	int64_t x112 = -137LL;
	volatile int64_t t25 = 5491LL;

	t25 = (((x109==x110)<x111)%x112);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x117 = 110U;
	static int16_t x119 = -29;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t26 = 190773861U;

	t26 = (((x117==x118)<x119)%x120);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 15U;
	int16_t x122 = INT16_MIN;
	static volatile int16_t x123 = 52;
	uint8_t x124 = 12U;

	t27 = (((x121==x122)<x123)%x124);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x126 = -1;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = 866U;
	int32_t t28 = 125410971;

	t28 = (((x125==x126)<x127)%x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = 23715;
	static int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MAX;

	t29 = (((x129==x130)<x131)%x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 9U;
	volatile int8_t x134 = -1;
	int16_t x135 = INT16_MAX;
	int8_t x136 = 2;
	static volatile int32_t t30 = -1;

	t30 = (((x133==x134)<x135)%x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x137 = 0LLU;
	int16_t x138 = -1;
	static int8_t x139 = 1;
	int32_t x140 = -1;
	int32_t t31 = 2510;

	t31 = (((x137==x138)<x139)%x140);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x141 = INT16_MIN;
	uint8_t x142 = 25U;
	int16_t x143 = INT16_MIN;
	volatile int32_t t32 = 17261170;

	t32 = (((x141==x142)<x143)%x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x145 = 44U;
	int32_t x146 = INT32_MIN;
	static volatile int64_t x147 = -1LL;
	int16_t x148 = 4951;
	int32_t t33 = -855;

	t33 = (((x145==x146)<x147)%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x149 = 1330U;
	int16_t x150 = INT16_MIN;
	volatile int8_t x151 = -9;
	int32_t t34 = -28813274;

	t34 = (((x149==x150)<x151)%x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = 0;
	uint16_t x154 = UINT16_MAX;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t35 = 3;

	t35 = (((x153==x154)<x155)%x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x157 = -1;
	uint16_t x158 = 238U;
	volatile int16_t x159 = -1;
	static volatile int32_t t36 = 789319;

	t36 = (((x157==x158)<x159)%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x162 = -74513;
	uint8_t x163 = 1U;
	int16_t x164 = INT16_MIN;
	volatile int32_t t37 = 0;

	t37 = (((x161==x162)<x163)%x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = INT16_MIN;
	int32_t x166 = 9;
	int64_t x167 = INT64_MIN;
	int64_t t38 = 226397891648440513LL;

	t38 = (((x165==x166)<x167)%x168);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = -5;
	int64_t x170 = INT64_MIN;
	static int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MAX;

	t39 = (((x169==x170)<x171)%x172);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -3822783;
	int8_t x174 = -7;
	volatile uint64_t x175 = 4207945178061550819LLU;
	int32_t x176 = INT32_MIN;
	volatile int32_t t40 = 506;

	t40 = (((x173==x174)<x175)%x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MAX;
	static uint64_t x179 = 31953671636973LLU;
	int8_t x180 = -1;
	volatile int32_t t41 = -12;

	t41 = (((x177==x178)<x179)%x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x183 = INT64_MAX;
	uint16_t x184 = UINT16_MAX;
	volatile int32_t t42 = -412994452;

	t42 = (((x181==x182)<x183)%x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	int64_t x187 = -316037996158061LL;
	uint32_t x188 = UINT32_MAX;
	volatile uint32_t t43 = 804630056U;

	t43 = (((x185==x186)<x187)%x188);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x191 = INT64_MIN;
	volatile int64_t x192 = INT64_MAX;

	t44 = (((x189==x190)<x191)%x192);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 57U;
	uint32_t x196 = 104786383U;
	uint32_t t45 = 120155802U;

	t45 = (((x193==x194)<x195)%x196);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = UINT64_MAX;
	static volatile int16_t x198 = INT16_MIN;
	static volatile uint64_t x199 = 1798293LLU;
	int16_t x200 = -1;
	static int32_t t46 = -9459;

	t46 = (((x197==x198)<x199)%x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x202 = INT32_MIN;
	uint32_t x203 = 78520917U;
	volatile int8_t x204 = INT8_MIN;
	volatile int32_t t47 = 114;

	t47 = (((x201==x202)<x203)%x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x207 = INT32_MIN;
	int64_t x208 = -3452895125LL;
	volatile int64_t t48 = 25LL;

	t48 = (((x205==x206)<x207)%x208);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = -29548375;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t49 = 412230805U;

	t49 = (((x209==x210)<x211)%x212);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x214 = INT16_MIN;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = -1;

	t50 = (((x213==x214)<x215)%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = INT32_MIN;
	static uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = INT16_MIN;
	static volatile int32_t t51 = 1775;

	t51 = (((x217==x218)<x219)%x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -161392023;
	volatile int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 108U;
	int32_t t52 = -102972;

	t52 = (((x221==x222)<x223)%x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x225 = 2LLU;
	int32_t x226 = 92;
	int8_t x227 = INT8_MIN;
	static volatile int32_t t53 = 55;

	t53 = (((x225==x226)<x227)%x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x229 = 948555962588833LL;
	uint64_t x230 = UINT64_MAX;
	volatile int64_t x231 = INT64_MIN;
	int32_t t54 = 1939;

	t54 = (((x229==x230)<x231)%x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = 2321783LL;
	volatile int16_t x235 = INT16_MAX;
	uint64_t x236 = 6LLU;
	uint64_t t55 = 4950007197LLU;

	t55 = (((x233==x234)<x235)%x236);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x238 = -23LL;
	int32_t x239 = -25631;
	volatile int64_t x240 = -1LL;
	int64_t t56 = -379645651LL;

	t56 = (((x237==x238)<x239)%x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x241 = -36;
	uint16_t x242 = 68U;
	int8_t x243 = -5;
	static uint64_t x244 = 5081LLU;
	volatile uint64_t t57 = 12LLU;

	t57 = (((x241==x242)<x243)%x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 2124U;
	int8_t x246 = INT8_MIN;
	int32_t x247 = INT32_MAX;
	int32_t x248 = 27;

	t58 = (((x245==x246)<x247)%x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x249 = 160U;
	int64_t x250 = INT64_MAX;
	static volatile int16_t x252 = INT16_MAX;
	volatile int32_t t59 = 121;

	t59 = (((x249==x250)<x251)%x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = -7;
	static int16_t x255 = INT16_MIN;
	int64_t x256 = -3863227037685886660LL;
	static int64_t t60 = -8406881729132845LL;

	t60 = (((x253==x254)<x255)%x256);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 300077898055156LLU;
	volatile uint8_t x258 = 51U;
	static int32_t x260 = INT32_MIN;
	int32_t t61 = 350912;

	t61 = (((x257==x258)<x259)%x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	uint32_t x268 = UINT32_MAX;

	t62 = (((x265==x266)<x267)%x268);

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x269 = INT64_MIN;
	uint8_t x270 = UINT8_MAX;
	int32_t t63 = -27;

	t63 = (((x269==x270)<x271)%x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x273 = 409;
	int32_t x274 = 127499981;
	int32_t x275 = INT32_MIN;
	volatile int32_t t64 = -78265;

	t64 = (((x273==x274)<x275)%x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x278 = -1;
	uint32_t x279 = 2108367213U;
	int16_t x280 = INT16_MAX;
	static volatile int32_t t65 = 1;

	t65 = (((x277==x278)<x279)%x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 11789280U;
	uint32_t x283 = 48344021U;
	int16_t x284 = -1;
	int32_t t66 = -206389422;

	t66 = (((x281==x282)<x283)%x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x285 = -480;
	volatile int32_t x286 = INT32_MAX;
	volatile uint8_t x287 = UINT8_MAX;
	int16_t x288 = INT16_MIN;
	int32_t t67 = 2334;

	t67 = (((x285==x286)<x287)%x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x289 = UINT16_MAX;
	int32_t x290 = INT32_MIN;
	volatile int64_t x291 = 3LL;
	static int32_t x292 = 106;
	int32_t t68 = 530139108;

	t68 = (((x289==x290)<x291)%x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = 1075020777779LL;
	uint64_t x294 = 0LLU;
	int8_t x295 = -12;
	int16_t x296 = -1;

	t69 = (((x293==x294)<x295)%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x297 = 1577U;
	uint64_t x298 = 311084LLU;
	int8_t x300 = 4;
	int32_t t70 = 456627509;

	t70 = (((x297==x298)<x299)%x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x301 = UINT64_MAX;
	static uint64_t x302 = 5320255786567786LLU;
	int32_t x303 = -1;
	int32_t x304 = 8416;
	volatile int32_t t71 = -480;

	t71 = (((x301==x302)<x303)%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x306 = 1;
	volatile int32_t x307 = 813108;
	static int32_t x308 = INT32_MAX;
	volatile int32_t t72 = 2;

	t72 = (((x305==x306)<x307)%x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = -1;
	uint64_t x310 = 5LLU;
	uint16_t x311 = 7063U;
	int64_t x312 = -1LL;
	int64_t t73 = -33600824LL;

	t73 = (((x309==x310)<x311)%x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = INT8_MAX;
	int32_t x314 = 1;
	volatile int64_t x315 = INT64_MIN;
	int64_t x316 = -1LL;
	static int64_t t74 = 785484827LL;

	t74 = (((x313==x314)<x315)%x316);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = 74U;
	int32_t x318 = 16;
	static volatile int8_t x319 = 1;
	static uint32_t t75 = 168255U;

	t75 = (((x317==x318)<x319)%x320);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = 0;
	uint16_t x323 = 7U;
	int8_t x324 = INT8_MIN;
	volatile int32_t t76 = -15804124;

	t76 = (((x321==x322)<x323)%x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	int64_t x328 = -1LL;

	t77 = (((x325==x326)<x327)%x328);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	volatile int32_t t78 = -6113;

	t78 = (((x329==x330)<x331)%x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 19U;
	volatile uint32_t x334 = 1919U;
	int8_t x335 = INT8_MAX;
	static uint16_t x336 = 7U;

	t79 = (((x333==x334)<x335)%x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = 35;
	static uint32_t x338 = 13204U;
	static uint16_t x339 = 188U;
	static volatile int32_t x340 = -1;
	volatile int32_t t80 = -9;

	t80 = (((x337==x338)<x339)%x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = -27;
	int8_t x342 = INT8_MAX;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = -133;
	static volatile int32_t t81 = 5;

	t81 = (((x341==x342)<x343)%x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x345 = UINT16_MAX;
	volatile uint32_t x346 = UINT32_MAX;
	int64_t x347 = 1004544LL;
	static int64_t x348 = INT64_MAX;

	t82 = (((x345==x346)<x347)%x348);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MAX;
	int32_t x351 = -1;
	static volatile int16_t x352 = -1;

	t83 = (((x349==x350)<x351)%x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x353 = UINT8_MAX;
	volatile uint16_t x354 = 14689U;
	uint8_t x355 = 48U;
	int32_t x356 = 2;
	static int32_t t84 = 44075402;

	t84 = (((x353==x354)<x355)%x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x358 = 8100309;
	static int32_t t85 = -29397201;

	t85 = (((x357==x358)<x359)%x360);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = -844985;
	static int32_t x363 = INT32_MAX;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t86 = -1016328;

	t86 = (((x361==x362)<x363)%x364);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x367 = INT16_MIN;
	int8_t x368 = 13;
	int32_t t87 = 203629;

	t87 = (((x365==x366)<x367)%x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x369 = -23;
	int64_t x370 = INT64_MAX;
	int16_t x371 = -30;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t88 = 880276047U;

	t88 = (((x369==x370)<x371)%x372);

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	int32_t x376 = -1;
	static volatile int32_t t89 = -76249;

	t89 = (((x373==x374)<x375)%x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x377 = 51U;
	int64_t x378 = -1LL;
	uint32_t x380 = 1196U;
	volatile uint32_t t90 = 200713U;

	t90 = (((x377==x378)<x379)%x380);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t t91 = -13335;

	t91 = (((x381==x382)<x383)%x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x386 = -1297;
	int32_t x387 = 327456998;
	volatile int32_t x388 = INT32_MAX;
	volatile int32_t t92 = -341653;

	t92 = (((x385==x386)<x387)%x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x389 = -1LL;
	int32_t x392 = INT32_MAX;
	int32_t t93 = -251135;

	t93 = (((x389==x390)<x391)%x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x394 = 8;
	int8_t x395 = INT8_MAX;
	static int8_t x396 = -6;
	int32_t t94 = 11961173;

	t94 = (((x393==x394)<x395)%x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x397 = 48U;
	int16_t x398 = INT16_MIN;
	int16_t x399 = 0;
	int8_t x400 = -39;
	volatile int32_t t95 = -6164;

	t95 = (((x397==x398)<x399)%x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x406 = UINT64_MAX;
	int32_t x407 = INT32_MAX;
	uint64_t x408 = 684LLU;
	uint64_t t96 = 98158743LLU;

	t96 = (((x405==x406)<x407)%x408);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x409 = 83347LL;
	int16_t x410 = 1;
	volatile int64_t x411 = INT64_MIN;
	int64_t x412 = -48LL;
	volatile int64_t t97 = -17424505089155046LL;

	t97 = (((x409==x410)<x411)%x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x415 = -10;
	volatile int64_t x416 = INT64_MIN;
	static int64_t t98 = -551LL;

	t98 = (((x413==x414)<x415)%x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x417 = INT8_MAX;
	static uint32_t x419 = UINT32_MAX;

	t99 = (((x417==x418)<x419)%x420);

	if (t99 != 1LL) { NG(); } else { ; }
	
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

