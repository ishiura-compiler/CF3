#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = -935614;
static int32_t t1 = -5;
volatile uint8_t x10 = UINT8_MAX;
volatile int16_t x17 = -1;
int8_t x20 = INT8_MIN;
static uint64_t x21 = 1569071755816849LLU;
volatile int32_t x22 = 46630774;
uint64_t x26 = UINT64_MAX;
static int16_t x27 = -3;
volatile uint64_t x28 = 2LLU;
int64_t x31 = INT64_MIN;
int32_t t7 = -1;
int32_t x42 = -1;
static volatile int32_t t11 = -3;
int16_t x50 = -1;
int16_t x56 = 51;
int32_t t14 = 1648;
volatile uint64_t x65 = UINT64_MAX;
static int32_t t16 = 83482;
static uint32_t x79 = 4824U;
int16_t x82 = 165;
uint16_t x84 = 24U;
static volatile int32_t t20 = 2;
int64_t x85 = -1LL;
static uint32_t x99 = UINT32_MAX;
int64_t x100 = INT64_MIN;
int16_t x102 = INT16_MIN;
int32_t x103 = -1;
uint16_t x106 = 504U;
int64_t x124 = -1LL;
int32_t t30 = 35;
int32_t x126 = -149214092;
static volatile int32_t t31 = 4302056;
int8_t x129 = -1;
int32_t x133 = INT32_MIN;
int16_t x140 = 5;
static volatile int16_t x141 = 7;
uint16_t x144 = 0U;
uint8_t x153 = 33U;
int64_t x158 = -1LL;
int32_t t40 = -1500;
uint32_t x171 = 741U;
int32_t x173 = INT32_MAX;
int32_t t43 = -1;
static int16_t x178 = INT16_MIN;
int32_t t45 = 1983;
int32_t x187 = INT32_MIN;
int32_t t46 = 71;
static int64_t x191 = -705645LL;
volatile int32_t x192 = -231641067;
int16_t x195 = INT16_MAX;
volatile int32_t t48 = 3;
int8_t x199 = -1;
int32_t x200 = INT32_MIN;
int8_t x205 = 20;
static volatile int64_t x208 = INT64_MIN;
static int16_t x217 = 23;
volatile int32_t t55 = -253;
static uint32_t x227 = 8U;
int8_t x229 = INT8_MAX;
static volatile int32_t t57 = -4514030;
uint32_t x235 = 1538845U;
int32_t t58 = 220761563;
int8_t x243 = INT8_MIN;
uint32_t x248 = UINT32_MAX;
static int32_t x254 = INT32_MAX;
uint8_t x255 = UINT8_MAX;
int16_t x267 = INT16_MIN;
static int64_t x272 = INT64_MIN;
static uint64_t x276 = UINT64_MAX;
int8_t x283 = -1;
int64_t x295 = INT64_MAX;
uint16_t x301 = 10U;
uint8_t x302 = 1U;
volatile uint8_t x307 = UINT8_MAX;
static int32_t t78 = 28345357;
uint8_t x321 = UINT8_MAX;
int64_t x326 = 4383027185683401176LL;
volatile uint16_t x328 = 32642U;
static int16_t x330 = 1393;
uint64_t x332 = 31548206LLU;
static int16_t x337 = -75;
static volatile int64_t x341 = -93226LL;
int32_t x345 = INT32_MAX;
uint16_t x348 = 846U;
int64_t x354 = INT64_MAX;
volatile int32_t t88 = -1;
static volatile int32_t t89 = 0;
volatile int32_t x362 = INT32_MIN;
int8_t x363 = INT8_MAX;
uint8_t x367 = 69U;
uint8_t x368 = UINT8_MAX;
volatile int16_t x371 = INT16_MIN;
int32_t x373 = -1;
static volatile uint32_t x374 = 2650993U;
int8_t x376 = INT8_MIN;
volatile uint8_t x382 = 46U;
static int64_t x384 = -1LL;
volatile int64_t x386 = INT64_MIN;
int64_t x388 = INT64_MIN;
int32_t x389 = INT32_MIN;
int64_t x394 = 74840624410216LL;
static uint32_t x397 = 8755610U;
volatile uint8_t x399 = UINT8_MAX;


void f0(void) {
	int16_t x1 = -1;
	static volatile int64_t x2 = INT64_MAX;
	volatile uint16_t x3 = 1699U;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = 951335;

	t0 = ((x1|(x2&x3))==x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = -27;
	static int8_t x7 = 3;
	uint64_t x8 = UINT64_MAX;

	t1 = ((x5|(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -61;
	int16_t x11 = INT16_MIN;
	int8_t x12 = -2;
	int32_t t2 = -3;

	t2 = ((x9|(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -6;
	static volatile uint64_t x14 = 20414826LLU;
	static int32_t x15 = INT32_MIN;
	int16_t x16 = -1;
	volatile int32_t t3 = 928829;

	t3 = ((x13|(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint16_t x19 = 25979U;
	int32_t t4 = 19728;

	t4 = ((x17|(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = INT64_MAX;
	int32_t x24 = INT32_MAX;
	int32_t t5 = -3;

	t5 = ((x21|(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 2894U;
	static volatile int32_t t6 = 1;

	t6 = ((x25|(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int64_t x30 = 1645713293913506409LL;
	volatile int32_t x32 = -1;

	t7 = ((x29|(x30&x31))==x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -10;
	static volatile int16_t x34 = 1245;
	int32_t x35 = -1;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = -181060;

	t8 = ((x33|(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = INT64_MIN;
	int16_t x39 = -1;
	static int32_t x40 = INT32_MIN;
	volatile int32_t t9 = -73994071;

	t9 = ((x37|(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static volatile int16_t x43 = 61;
	volatile int64_t x44 = -1LL;
	volatile int32_t t10 = -4;

	t10 = ((x41|(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	static int32_t x46 = -139;
	int8_t x47 = INT8_MAX;
	volatile uint16_t x48 = UINT16_MAX;

	t11 = ((x45|(x46&x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -61957359009LL;
	volatile int64_t x51 = -537903LL;
	int64_t x52 = 26LL;
	int32_t t12 = -1358;

	t12 = ((x49|(x50&x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	volatile int32_t x54 = INT32_MAX;
	static int32_t x55 = -28;
	static int32_t t13 = 212009271;

	t13 = ((x53|(x54&x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x57 = 50;
	uint8_t x58 = 1U;
	volatile uint32_t x59 = 1144U;
	int8_t x60 = INT8_MAX;

	t14 = ((x57|(x58&x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = UINT64_MAX;
	static uint64_t x62 = UINT64_MAX;
	static int64_t x63 = 17088LL;
	int32_t x64 = 870;
	static volatile int32_t t15 = -2670;

	t15 = ((x61|(x62&x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x66 = INT8_MIN;
	static int64_t x67 = -16745140638LL;
	static uint32_t x68 = 732U;

	t16 = ((x65|(x66&x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 2505898U;
	uint64_t x70 = 1843034345042605191LLU;
	uint64_t x71 = UINT64_MAX;
	static int16_t x72 = INT16_MIN;
	int32_t t17 = 7178;

	t17 = ((x69|(x70&x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 1U;
	volatile uint32_t x74 = 367596U;
	static uint16_t x75 = 7U;
	int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 43391189;

	t18 = ((x73|(x74&x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	static int64_t x78 = -1LL;
	static volatile uint8_t x80 = UINT8_MAX;
	static int32_t t19 = 27699266;

	t19 = ((x77|(x78&x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static int64_t x83 = INT64_MIN;

	t20 = ((x81|(x82&x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MAX;
	static volatile int16_t x87 = -1;
	int8_t x88 = INT8_MAX;
	static volatile int32_t t21 = 406442;

	t21 = ((x85|(x86&x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = 273945518504739LL;
	volatile int8_t x90 = INT8_MAX;
	int32_t x91 = -1;
	int64_t x92 = -1LL;
	volatile int32_t t22 = 41167;

	t22 = ((x89|(x90&x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -30782422493892LL;
	uint16_t x94 = 9U;
	uint32_t x95 = 169740U;
	int8_t x96 = -6;
	int32_t t23 = 202;

	t23 = ((x93|(x94&x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 56609U;
	int16_t x98 = 6423;
	volatile int32_t t24 = 46;

	t24 = ((x97|(x98&x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = 0;
	uint8_t x104 = 23U;
	static volatile int32_t t25 = -1;

	t25 = ((x101|(x102&x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 7682;
	volatile uint32_t x107 = 217854U;
	uint64_t x108 = 4175551859LLU;
	static int32_t t26 = -1023071;

	t26 = ((x105|(x106&x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x109 = INT16_MIN;
	int32_t x110 = -342851171;
	int8_t x111 = INT8_MIN;
	int64_t x112 = -118816623524132069LL;
	volatile int32_t t27 = 7945;

	t27 = ((x109|(x110&x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 170485145U;
	volatile int16_t x114 = INT16_MIN;
	static int64_t x115 = INT64_MAX;
	int64_t x116 = 6806352LL;
	static volatile int32_t t28 = -168;

	t28 = ((x113|(x114&x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = INT32_MAX;
	uint32_t x120 = UINT32_MAX;
	int32_t t29 = 9;

	t29 = ((x117|(x118&x119))==x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -32;
	uint16_t x122 = 1U;
	int8_t x123 = INT8_MIN;

	t30 = ((x121|(x122&x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 370U;
	volatile int64_t x127 = INT64_MAX;
	int8_t x128 = -1;

	t31 = ((x125|(x126&x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = -1;
	volatile int8_t x132 = INT8_MIN;
	static int32_t t32 = -939;

	t32 = ((x129|(x130&x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x134 = -1;
	int64_t x135 = -1LL;
	int16_t x136 = -10457;
	static volatile int32_t t33 = 106;

	t33 = ((x133|(x134&x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	uint16_t x139 = 11U;
	volatile int32_t t34 = 45637717;

	t34 = ((x137|(x138&x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x142 = INT16_MAX;
	static int32_t x143 = -1;
	int32_t t35 = -240;

	t35 = ((x141|(x142&x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static volatile int8_t x146 = INT8_MIN;
	uint32_t x147 = 26U;
	int64_t x148 = -54LL;
	volatile int32_t t36 = 2;

	t36 = ((x145|(x146&x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 14278094U;
	static uint64_t x150 = 2LLU;
	int64_t x151 = -1LL;
	uint8_t x152 = UINT8_MAX;
	static int32_t t37 = 42548278;

	t37 = ((x149|(x150&x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = 26;
	uint8_t x155 = 5U;
	uint16_t x156 = 10671U;
	static int32_t t38 = -326;

	t38 = ((x153|(x154&x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static int16_t x159 = -1;
	static int16_t x160 = INT16_MAX;
	volatile int32_t t39 = -1564403;

	t39 = ((x157|(x158&x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x161 = UINT16_MAX;
	static int64_t x162 = -1LL;
	static uint8_t x163 = 4U;
	int8_t x164 = 1;

	t40 = ((x161|(x162&x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = UINT32_MAX;
	static int8_t x167 = INT8_MIN;
	int32_t x168 = INT32_MIN;
	volatile int32_t t41 = -42;

	t41 = ((x165|(x166&x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint16_t x170 = 1U;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -435548;

	t42 = ((x169|(x170&x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = 1;
	int8_t x175 = INT8_MAX;
	volatile uint32_t x176 = UINT32_MAX;

	t43 = ((x173|(x174&x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint64_t x179 = 31173499LLU;
	int8_t x180 = 0;
	int32_t t44 = 169391;

	t44 = ((x177|(x178&x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 11618U;
	int16_t x182 = -31;
	static int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MAX;

	t45 = ((x181|(x182&x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 3U;
	int8_t x186 = -1;
	uint32_t x188 = 3U;

	t46 = ((x185|(x186&x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 7U;
	volatile uint64_t x190 = 1344656543621195197LLU;
	volatile int32_t t47 = -1;

	t47 = ((x189|(x190&x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 260321U;
	static volatile int64_t x194 = INT64_MAX;
	static uint64_t x196 = UINT64_MAX;

	t48 = ((x193|(x194&x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int64_t x198 = -3840LL;
	static volatile int32_t t49 = -4;

	t49 = ((x197|(x198&x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = -14;
	int16_t x202 = 1277;
	uint8_t x203 = UINT8_MAX;
	uint32_t x204 = 1979U;
	static int32_t t50 = -564;

	t50 = ((x201|(x202&x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MAX;
	int64_t x207 = -1LL;
	static volatile int32_t t51 = -15903;

	t51 = ((x205|(x206&x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	volatile int8_t x210 = 1;
	uint8_t x211 = 96U;
	volatile int64_t x212 = -7830383562825561LL;
	int32_t t52 = 31707852;

	t52 = ((x209|(x210&x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = -21085046691132LL;
	int32_t x215 = 114;
	int64_t x216 = -6152985LL;
	volatile int32_t t53 = -783901983;

	t53 = ((x213|(x214&x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = -1;
	int64_t x219 = 243539058136LL;
	uint32_t x220 = UINT32_MAX;
	static int32_t t54 = -78299;

	t54 = ((x217|(x218&x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile int32_t x222 = -1;
	static int8_t x223 = INT8_MAX;
	int8_t x224 = -3;

	t55 = ((x221|(x222&x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x225 = -1;
	volatile int64_t x226 = 3021743742LL;
	static uint64_t x228 = UINT64_MAX;
	volatile int32_t t56 = -15;

	t56 = ((x225|(x226&x227))==x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MIN;
	static uint64_t x231 = UINT64_MAX;
	static volatile int32_t x232 = INT32_MIN;

	t57 = ((x229|(x230&x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = 39558;
	static int16_t x234 = -11004;
	volatile int16_t x236 = INT16_MAX;

	t58 = ((x233|(x234&x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 128469571LLU;
	int64_t x238 = INT64_MIN;
	volatile uint64_t x239 = 688542273411LLU;
	static int32_t x240 = -1;
	volatile int32_t t59 = -2848;

	t59 = ((x237|(x238&x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	volatile int64_t x242 = -1LL;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -15892265;

	t60 = ((x241|(x242&x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	uint64_t x246 = 888420031760833443LLU;
	int16_t x247 = -1;
	int32_t t61 = 100340582;

	t61 = ((x245|(x246&x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -13;
	volatile uint16_t x250 = 2U;
	int8_t x251 = -2;
	uint64_t x252 = UINT64_MAX;
	int32_t t62 = -58541;

	t62 = ((x249|(x250&x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 5675U;
	volatile uint64_t x256 = 2036810039816LLU;
	int32_t t63 = -33167703;

	t63 = ((x253|(x254&x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int64_t x258 = INT64_MAX;
	volatile uint8_t x259 = UINT8_MAX;
	volatile int32_t x260 = INT32_MAX;
	volatile int32_t t64 = -1379867;

	t64 = ((x257|(x258&x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MIN;
	static uint32_t x262 = 472298158U;
	int16_t x263 = INT16_MIN;
	static int32_t x264 = -1;
	static int32_t t65 = 2;

	t65 = ((x261|(x262&x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = 1;
	static volatile int32_t x266 = INT32_MAX;
	volatile int8_t x268 = -1;
	int32_t t66 = -67;

	t66 = ((x265|(x266&x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -943066766;
	volatile int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	static volatile int32_t t67 = -3;

	t67 = ((x269|(x270&x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int64_t x274 = INT64_MIN;
	uint32_t x275 = 139144470U;
	volatile int32_t t68 = -314799;

	t68 = ((x273|(x274&x275))==x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MAX;
	uint8_t x279 = 15U;
	int64_t x280 = -1LL;
	int32_t t69 = -117062169;

	t69 = ((x277|(x278&x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = UINT8_MAX;
	volatile int64_t x284 = 105955LL;
	int32_t t70 = 169;

	t70 = ((x281|(x282&x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 4U;
	static int64_t x286 = 11328677095LL;
	volatile uint8_t x287 = UINT8_MAX;
	static int64_t x288 = INT64_MAX;
	static int32_t t71 = 314852967;

	t71 = ((x285|(x286&x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x289 = 25U;
	int64_t x290 = INT64_MAX;
	int16_t x291 = -1;
	int32_t x292 = INT32_MAX;
	int32_t t72 = -1759227;

	t72 = ((x289|(x290&x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = INT64_MAX;
	int8_t x294 = 1;
	volatile int64_t x296 = INT64_MIN;
	int32_t t73 = 48;

	t73 = ((x293|(x294&x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 443041590311600LLU;
	static volatile int8_t x299 = -2;
	volatile int16_t x300 = -693;
	int32_t t74 = -356062903;

	t74 = ((x297|(x298&x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x303 = INT64_MIN;
	volatile uint32_t x304 = 0U;
	int32_t t75 = 0;

	t75 = ((x301|(x302&x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	int32_t x306 = -1;
	volatile int32_t x308 = -123441574;
	volatile int32_t t76 = -112631;

	t76 = ((x305|(x306&x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	int8_t x310 = INT8_MIN;
	static int64_t x311 = -1LL;
	volatile uint16_t x312 = UINT16_MAX;
	int32_t t77 = 1;

	t77 = ((x309|(x310&x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x313 = 55711032538LLU;
	int32_t x314 = -1;
	int64_t x315 = INT64_MIN;
	volatile int32_t x316 = INT32_MIN;

	t78 = ((x313|(x314&x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MAX;
	volatile int32_t x319 = 325929;
	uint64_t x320 = UINT64_MAX;
	int32_t t79 = 1015;

	t79 = ((x317|(x318&x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x322 = -8270981;
	int8_t x323 = -1;
	volatile int64_t x324 = INT64_MIN;
	static int32_t t80 = 14;

	t80 = ((x321|(x322&x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -3511074LL;
	int32_t x327 = INT32_MAX;
	volatile int32_t t81 = -35799070;

	t81 = ((x325|(x326&x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 2309U;
	volatile uint32_t x331 = 255U;
	static int32_t t82 = -96557228;

	t82 = ((x329|(x330&x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	volatile int64_t x334 = -1LL;
	uint32_t x335 = 130U;
	int16_t x336 = INT16_MIN;
	int32_t t83 = -259186;

	t83 = ((x333|(x334&x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MIN;
	static uint32_t x339 = 750517149U;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t84 = 15232785;

	t84 = ((x337|(x338&x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 59U;
	volatile int8_t x343 = INT8_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t85 = 15801362;

	t85 = ((x341|(x342&x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = -1;
	static int32_t t86 = -119136;

	t86 = ((x345|(x346&x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -1;
	int64_t x350 = INT64_MIN;
	volatile int32_t x351 = -45613;
	static int16_t x352 = -1;
	volatile int32_t t87 = -1177381;

	t87 = ((x349|(x350&x351))==x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = UINT64_MAX;
	static int32_t x355 = INT32_MIN;
	static uint64_t x356 = 223LLU;

	t88 = ((x353|(x354&x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = INT32_MIN;
	static int8_t x358 = -1;
	volatile uint8_t x359 = 49U;
	int64_t x360 = INT64_MAX;

	t89 = ((x357|(x358&x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t90 = 0;

	t90 = ((x361|(x362&x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	static int8_t x366 = INT8_MIN;
	volatile int32_t t91 = -72526911;

	t91 = ((x365|(x366&x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	uint64_t x370 = 179150343845LLU;
	uint8_t x372 = UINT8_MAX;
	int32_t t92 = -740;

	t92 = ((x369|(x370&x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x375 = INT8_MIN;
	static volatile int32_t t93 = 7;

	t93 = ((x373|(x374&x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	int16_t x378 = INT16_MAX;
	static uint64_t x379 = 8227LLU;
	static int16_t x380 = -1;
	volatile int32_t t94 = -161351;

	t94 = ((x377|(x378&x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x383 = 4746910221468939308LLU;
	volatile int32_t t95 = -500524;

	t95 = ((x381|(x382&x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = UINT8_MAX;
	volatile int32_t x387 = INT32_MIN;
	int32_t t96 = 91879260;

	t96 = ((x385|(x386&x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x390 = INT64_MIN;
	int16_t x391 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = -17;

	t97 = ((x389|(x390&x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint16_t x396 = 30U;
	volatile int32_t t98 = 0;

	t98 = ((x393|(x394&x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = 1;
	uint16_t x400 = 12645U;
	static volatile int32_t t99 = 1672952;

	t99 = ((x397|(x398&x399))==x400);

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

