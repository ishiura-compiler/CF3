#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = 362;
static int32_t t1 = -27293128;
uint64_t x12 = 78434499704467300LLU;
static int64_t x16 = INT64_MIN;
static uint16_t x18 = UINT16_MAX;
static volatile int32_t t6 = 136;
volatile uint32_t x33 = 5749881U;
int64_t x38 = INT64_MIN;
int64_t x42 = -105444639183874LL;
int16_t x57 = 678;
int32_t x63 = 0;
uint64_t x66 = UINT64_MAX;
int16_t x68 = -1;
int8_t x69 = INT8_MIN;
static int8_t x74 = INT8_MIN;
static int32_t t18 = 694971;
int32_t x101 = -1;
uint8_t x116 = 24U;
uint64_t x119 = 989443663164918LLU;
volatile int32_t t29 = 16658169;
int8_t x122 = -1;
volatile uint32_t x127 = 160U;
int16_t x129 = -12;
int16_t x130 = 11081;
int32_t x132 = -1;
volatile int32_t x133 = -19;
static int64_t x136 = -5376683LL;
int64_t t33 = 1435389582472LL;
uint16_t x138 = UINT16_MAX;
int32_t x140 = -1;
int64_t x142 = INT64_MIN;
volatile int64_t x143 = INT64_MIN;
int16_t x144 = INT16_MAX;
int32_t t36 = -103;
static int64_t x151 = -1LL;
uint64_t x153 = UINT64_MAX;
static volatile int64_t x157 = INT64_MIN;
uint64_t x158 = 49413LLU;
volatile int16_t x162 = INT16_MIN;
int16_t x167 = -1;
uint8_t x172 = 11U;
static volatile int32_t t42 = -4048;
int32_t x174 = INT32_MIN;
int8_t x176 = INT8_MAX;
volatile int32_t t43 = -191;
static uint64_t x183 = UINT64_MAX;
static volatile uint8_t x184 = 117U;
uint64_t x187 = UINT64_MAX;
int32_t x188 = INT32_MIN;
volatile int32_t t48 = 938265;
int32_t x199 = -1;
static int64_t x200 = INT64_MAX;
int32_t x205 = INT32_MAX;
volatile uint8_t x206 = 11U;
static int8_t x208 = -3;
int32_t t50 = -198;
volatile int64_t x212 = -1LL;
int64_t t51 = 8403928167012146LL;
static volatile uint32_t x214 = 1643674U;
uint8_t x217 = UINT8_MAX;
static int8_t x222 = INT8_MAX;
volatile int32_t t54 = -358111476;
uint8_t x226 = 10U;
static int32_t x229 = INT32_MIN;
uint64_t x230 = 473577715LLU;
int8_t x232 = INT8_MIN;
uint64_t t57 = 31176561493064LLU;
uint8_t x238 = 1U;
int16_t x243 = -206;
int16_t x244 = INT16_MAX;
uint16_t x249 = 10410U;
uint8_t x251 = UINT8_MAX;
int16_t x254 = INT16_MIN;
static volatile int8_t x258 = -1;
int64_t x260 = INT64_MIN;
int8_t x269 = INT8_MIN;
volatile uint8_t x272 = 42U;
static int64_t x278 = 99598023LL;
volatile int32_t x284 = INT32_MIN;
int32_t x285 = INT32_MIN;
int32_t x299 = INT32_MIN;
uint8_t x300 = UINT8_MAX;
int64_t x306 = -1LL;
uint32_t x310 = UINT32_MAX;
uint16_t x312 = 8U;
volatile int32_t t75 = -123198;
int16_t x323 = -1;
int64_t x334 = -1LL;
int8_t x337 = -34;
int8_t x339 = 1;
static int32_t x348 = -1210;
uint16_t x354 = UINT16_MAX;
static int8_t x357 = 0;
uint32_t x365 = UINT32_MAX;
int16_t x367 = -1;
volatile uint8_t x369 = UINT8_MAX;
int8_t x370 = INT8_MAX;
static uint8_t x371 = 1U;
int32_t x377 = 11;
volatile int32_t t91 = -38;
int32_t x384 = INT32_MAX;
int64_t x386 = INT64_MAX;
uint32_t x390 = 25U;
uint64_t x393 = UINT64_MAX;
volatile int16_t x397 = 0;
static int32_t x403 = -1;
int16_t x407 = INT16_MAX;
volatile int32_t t98 = 1;
uint16_t x411 = 12U;
static int16_t x412 = -1;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	static uint8_t x2 = UINT8_MAX;
	static int8_t x3 = INT8_MIN;
	uint32_t x4 = 4183U;
	volatile uint32_t t0 = 4338400U;

	t0 = (((x1/x2)==x3)&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static volatile int32_t x6 = INT32_MAX;
	uint8_t x8 = UINT8_MAX;

	t1 = (((x5/x6)==x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	int16_t x10 = INT16_MIN;
	volatile int32_t x11 = 1907614;
	static uint64_t t2 = 2416LLU;

	t2 = (((x9/x10)==x11)&x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -87;
	int32_t x14 = INT32_MIN;
	int64_t x15 = -1LL;
	volatile int64_t t3 = 16141126586052LL;

	t3 = (((x13/x14)==x15)&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int64_t x19 = -1LL;
	static int16_t x20 = INT16_MIN;
	volatile int32_t t4 = -55796998;

	t4 = (((x17/x18)==x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 292;
	volatile int16_t x22 = -1;
	static uint8_t x23 = 18U;
	int64_t x24 = -1LL;
	int64_t t5 = -1822079143222534390LL;

	t5 = (((x21/x22)==x23)&x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	uint32_t x27 = 124807U;
	static int8_t x28 = -1;

	t6 = (((x25/x26)==x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	int8_t x30 = 3;
	int16_t x31 = -93;
	static int64_t x32 = INT64_MIN;
	int64_t t7 = 11419940040LL;

	t7 = (((x29/x30)==x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	uint64_t x35 = 8575404722LLU;
	static int64_t x36 = -1LL;
	int64_t t8 = 7265901595549LL;

	t8 = (((x33/x34)==x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 5U;
	int16_t x39 = INT16_MIN;
	static int64_t x40 = INT64_MIN;
	static int64_t t9 = -2910793LL;

	t9 = (((x37/x38)==x39)&x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	int8_t x43 = INT8_MAX;
	uint32_t x44 = UINT32_MAX;
	static volatile uint32_t t10 = 17U;

	t10 = (((x41/x42)==x43)&x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	int32_t x46 = 12425;
	int16_t x47 = -19;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t11 = -59981656;

	t11 = (((x45/x46)==x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static int8_t x50 = 14;
	uint32_t x51 = 1U;
	int16_t x52 = -1;
	int32_t t12 = 277993659;

	t12 = (((x49/x50)==x51)&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int32_t x54 = INT32_MIN;
	static uint16_t x55 = 9039U;
	int8_t x56 = INT8_MIN;
	static volatile int32_t t13 = -40;

	t13 = (((x53/x54)==x55)&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -1;
	int8_t x59 = 2;
	int16_t x60 = -60;
	volatile int32_t t14 = -3795892;

	t14 = (((x57/x58)==x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	uint64_t x62 = UINT64_MAX;
	uint16_t x64 = 7813U;
	volatile int32_t t15 = 434671;

	t15 = (((x61/x62)==x63)&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	uint8_t x67 = 2U;
	int32_t t16 = -1;

	t16 = (((x65/x66)==x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = 15;
	static uint8_t x71 = 1U;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = -9328;

	t17 = (((x69/x70)==x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = INT8_MIN;
	int8_t x75 = -1;
	volatile int16_t x76 = INT16_MIN;

	t18 = (((x73/x74)==x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	volatile int32_t x78 = -207;
	int32_t x79 = INT32_MIN;
	uint16_t x80 = 1087U;
	int32_t t19 = -1466;

	t19 = (((x77/x78)==x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = UINT16_MAX;
	int64_t x82 = INT64_MAX;
	int64_t x83 = -25652652LL;
	volatile int8_t x84 = INT8_MIN;
	int32_t t20 = -322656;

	t20 = (((x81/x82)==x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 7U;
	uint16_t x86 = 8297U;
	uint8_t x87 = 38U;
	static int32_t x88 = -38468183;
	volatile int32_t t21 = -18156471;

	t21 = (((x85/x86)==x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	int8_t x90 = -59;
	volatile int8_t x91 = -1;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 2621475;

	t22 = (((x89/x90)==x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 28931U;
	uint64_t x94 = 8LLU;
	int16_t x95 = INT16_MIN;
	uint64_t x96 = 988227543837341LLU;
	static uint64_t t23 = 2007873530059LLU;

	t23 = (((x93/x94)==x95)&x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	static int64_t x98 = -1LL;
	int16_t x99 = 11512;
	int64_t x100 = 147405082312LL;
	volatile int64_t t24 = 21226136LL;

	t24 = (((x97/x98)==x99)&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = -1LL;
	int8_t x103 = 28;
	uint64_t x104 = UINT64_MAX;
	static uint64_t t25 = 1928676853LLU;

	t25 = (((x101/x102)==x103)&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -88;
	uint64_t x106 = UINT64_MAX;
	uint8_t x107 = 111U;
	int64_t x108 = INT64_MAX;
	int64_t t26 = 53985LL;

	t26 = (((x105/x106)==x107)&x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int32_t x110 = 407;
	static uint8_t x111 = UINT8_MAX;
	int8_t x112 = 1;
	static int32_t t27 = -1522;

	t27 = (((x109/x110)==x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = 1;
	int64_t x114 = 3LL;
	static int32_t x115 = -37088;
	static int32_t t28 = 15077355;

	t28 = (((x113/x114)==x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 60575850768840LLU;
	int16_t x118 = -1;
	uint16_t x120 = 116U;

	t29 = (((x117/x118)==x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 3483084203LL;
	volatile int16_t x123 = -15061;
	uint32_t x124 = 930U;
	volatile uint32_t t30 = 26907U;

	t30 = (((x121/x122)==x123)&x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile int64_t x126 = INT64_MIN;
	int8_t x128 = INT8_MIN;
	volatile int32_t t31 = -16502404;

	t31 = (((x125/x126)==x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x131 = -1LL;
	volatile int32_t t32 = -1467060;

	t32 = (((x129/x130)==x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MAX;
	int16_t x135 = -1;

	t33 = (((x133/x134)==x135)&x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 119839LL;
	int8_t x139 = -2;
	int32_t t34 = 1006;

	t34 = (((x137/x138)==x139)&x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	static int32_t t35 = -1;

	t35 = (((x141/x142)==x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1U;
	static uint16_t x146 = 1691U;
	int16_t x147 = INT16_MIN;
	static int16_t x148 = INT16_MAX;

	t36 = (((x145/x146)==x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -6;
	static volatile int8_t x150 = INT8_MIN;
	static int64_t x152 = INT64_MAX;
	volatile int64_t t37 = 3747LL;

	t37 = (((x149/x150)==x151)&x152);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = INT16_MIN;
	int8_t x155 = INT8_MAX;
	static int16_t x156 = -2902;
	volatile int32_t t38 = 6;

	t38 = (((x153/x154)==x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x159 = 5048;
	static int32_t x160 = -1;
	static int32_t t39 = 301;

	t39 = (((x157/x158)==x159)&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 236U;
	int64_t x163 = -2334336907524369LL;
	int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 47370;

	t40 = (((x161/x162)==x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = INT8_MIN;
	int64_t x166 = 30LL;
	uint16_t x168 = 1599U;
	volatile int32_t t41 = -30;

	t41 = (((x165/x166)==x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static volatile int64_t x170 = -3883065LL;
	int16_t x171 = INT16_MAX;

	t42 = (((x169/x170)==x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int16_t x175 = 1599;

	t43 = (((x173/x174)==x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	uint8_t x178 = 1U;
	int16_t x179 = -1;
	int64_t x180 = INT64_MAX;
	volatile int64_t t44 = 96LL;

	t44 = (((x177/x178)==x179)&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -5;
	volatile int64_t x182 = 202442311LL;
	int32_t t45 = -4451141;

	t45 = (((x181/x182)==x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = 18;
	int16_t x186 = INT16_MIN;
	volatile int32_t t46 = -99723;

	t46 = (((x185/x186)==x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = 88;
	int32_t x190 = INT32_MIN;
	static int32_t x191 = INT32_MAX;
	int8_t x192 = -1;
	static int32_t t47 = 494217;

	t47 = (((x189/x190)==x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	static volatile int8_t x194 = -1;
	uint8_t x195 = 1U;
	int32_t x196 = INT32_MAX;

	t48 = (((x193/x194)==x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 0LL;
	int32_t x198 = INT32_MAX;
	volatile int64_t t49 = 0LL;

	t49 = (((x197/x198)==x199)&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x207 = UINT16_MAX;

	t50 = (((x205/x206)==x207)&x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -1;
	static int32_t x210 = -1;
	int32_t x211 = -1;

	t51 = (((x209/x210)==x211)&x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = -53;
	uint8_t x215 = 20U;
	int8_t x216 = INT8_MIN;
	volatile int32_t t52 = -211;

	t52 = (((x213/x214)==x215)&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x218 = 4752466433824918LL;
	int64_t x219 = -1220942632LL;
	int8_t x220 = INT8_MAX;
	volatile int32_t t53 = -195259899;

	t53 = (((x217/x218)==x219)&x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x221 = INT64_MAX;
	int16_t x223 = -3;
	int16_t x224 = INT16_MIN;

	t54 = (((x221/x222)==x223)&x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = INT64_MAX;
	static uint32_t x227 = UINT32_MAX;
	static volatile int16_t x228 = INT16_MAX;
	int32_t t55 = 0;

	t55 = (((x225/x226)==x227)&x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x231 = INT16_MIN;
	static volatile int32_t t56 = -1;

	t56 = (((x229/x230)==x231)&x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -1;
	volatile int64_t x234 = INT64_MIN;
	int16_t x235 = 569;
	uint64_t x236 = 2191234664738122346LLU;

	t57 = (((x233/x234)==x235)&x236);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x237 = 2U;
	static int8_t x239 = INT8_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t58 = -23005;

	t58 = (((x237/x238)==x239)&x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -43;
	static int32_t x242 = -41;
	int32_t t59 = 91861817;

	t59 = (((x241/x242)==x243)&x244);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x245 = 1U;
	int16_t x246 = INT16_MAX;
	uint32_t x247 = 1666488326U;
	int64_t x248 = INT64_MAX;
	volatile int64_t t60 = 19329483182455LL;

	t60 = (((x245/x246)==x247)&x248);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x250 = 47299LLU;
	int16_t x252 = -1;
	static int32_t t61 = 24;

	t61 = (((x249/x250)==x251)&x252);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -30;
	static int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;
	int32_t t62 = -13956392;

	t62 = (((x253/x254)==x255)&x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 4471428749LLU;
	int32_t x259 = 35378;
	volatile int64_t t63 = -12LL;

	t63 = (((x257/x258)==x259)&x260);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int64_t x261 = -1LL;
	volatile int64_t x262 = -15LL;
	static int16_t x263 = 30;
	int32_t x264 = 32;
	volatile int32_t t64 = 7970;

	t64 = (((x261/x262)==x263)&x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = -1;
	int32_t x266 = 4035;
	uint64_t x267 = 4960688064LLU;
	static int32_t x268 = 860766397;
	static int32_t t65 = 3;

	t65 = (((x265/x266)==x267)&x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x270 = 2U;
	int64_t x271 = INT64_MIN;
	int32_t t66 = 479347;

	t66 = (((x269/x270)==x271)&x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -1;
	static int16_t x279 = -22;
	int16_t x280 = -992;
	volatile int32_t t67 = -219919405;

	t67 = (((x277/x278)==x279)&x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x281 = 8U;
	static volatile int64_t x282 = INT64_MIN;
	volatile int64_t x283 = -1LL;
	int32_t t68 = 148870;

	t68 = (((x281/x282)==x283)&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x286 = 1LLU;
	static int8_t x287 = -1;
	int8_t x288 = INT8_MAX;
	volatile int32_t t69 = -3203;

	t69 = (((x285/x286)==x287)&x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x289 = -1LL;
	volatile uint64_t x290 = 130LLU;
	uint64_t x291 = 776LLU;
	uint8_t x292 = UINT8_MAX;
	int32_t t70 = -49580806;

	t70 = (((x289/x290)==x291)&x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x293 = 821;
	uint64_t x294 = 210238048028LLU;
	static volatile uint8_t x295 = 5U;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t71 = -1895891;

	t71 = (((x293/x294)==x295)&x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x297 = 64020338263673LL;
	int16_t x298 = -1;
	int32_t t72 = 3;

	t72 = (((x297/x298)==x299)&x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x301 = 11363898518LLU;
	int64_t x302 = -16LL;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t73 = 1683;

	t73 = (((x301/x302)==x303)&x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	int32_t t74 = 73363;

	t74 = (((x305/x306)==x307)&x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x309 = INT64_MAX;
	volatile int16_t x311 = -1;

	t75 = (((x309/x310)==x311)&x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = -3248LL;
	static int16_t x318 = INT16_MAX;
	volatile int16_t x319 = INT16_MAX;
	volatile int32_t x320 = -1;
	int32_t t76 = 103;

	t76 = (((x317/x318)==x319)&x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x321 = -17;
	int8_t x322 = 6;
	static int16_t x324 = INT16_MAX;
	int32_t t77 = 3;

	t77 = (((x321/x322)==x323)&x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	int8_t x326 = INT8_MIN;
	int32_t x327 = 39418098;
	int32_t x328 = INT32_MAX;
	int32_t t78 = -10937;

	t78 = (((x325/x326)==x327)&x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = INT64_MIN;
	volatile uint16_t x330 = 10917U;
	int64_t x331 = INT64_MAX;
	static int16_t x332 = -1;
	int32_t t79 = -1;

	t79 = (((x329/x330)==x331)&x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x333 = 34138400528LLU;
	int64_t x335 = INT64_MAX;
	int64_t x336 = -382932948566246LL;
	int64_t t80 = -64898LL;

	t80 = (((x333/x334)==x335)&x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x338 = INT64_MIN;
	volatile int32_t x340 = -33249931;
	volatile int32_t t81 = -46;

	t81 = (((x337/x338)==x339)&x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = 141919024U;
	volatile int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	uint8_t x344 = 1U;
	int32_t t82 = 2081358;

	t82 = (((x341/x342)==x343)&x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = -1;
	volatile uint64_t x346 = 19526LLU;
	volatile int32_t x347 = INT32_MIN;
	int32_t t83 = -1;

	t83 = (((x345/x346)==x347)&x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x349 = -1LL;
	int32_t x350 = INT32_MAX;
	uint8_t x351 = UINT8_MAX;
	uint16_t x352 = 60U;
	int32_t t84 = -413254;

	t84 = (((x349/x350)==x351)&x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 1869U;
	volatile uint8_t x355 = 25U;
	static volatile int16_t x356 = -7849;
	int32_t t85 = 858335;

	t85 = (((x353/x354)==x355)&x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x358 = UINT8_MAX;
	uint8_t x359 = 82U;
	int64_t x360 = 9028182LL;
	volatile int64_t t86 = -31534LL;

	t86 = (((x357/x358)==x359)&x360);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x361 = 9;
	uint8_t x362 = 1U;
	int16_t x363 = 102;
	static int8_t x364 = INT8_MIN;
	volatile int32_t t87 = -237;

	t87 = (((x361/x362)==x363)&x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x366 = INT16_MIN;
	int8_t x368 = INT8_MAX;
	volatile int32_t t88 = 110539094;

	t88 = (((x365/x366)==x367)&x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x372 = 5;
	int32_t t89 = -1;

	t89 = (((x369/x370)==x371)&x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 24960323457557018LLU;
	static int64_t x374 = INT64_MIN;
	int8_t x375 = 1;
	volatile uint8_t x376 = 4U;
	volatile int32_t t90 = -600256660;

	t90 = (((x373/x374)==x375)&x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x378 = INT8_MIN;
	uint64_t x379 = 285340073096LLU;
	int16_t x380 = -1;

	t91 = (((x377/x378)==x379)&x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x381 = INT16_MIN;
	static uint16_t x382 = 3U;
	uint64_t x383 = 10942LLU;
	volatile int32_t t92 = 0;

	t92 = (((x381/x382)==x383)&x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 26892U;
	int16_t x387 = -1;
	int16_t x388 = INT16_MAX;
	volatile int32_t t93 = 23546;

	t93 = (((x385/x386)==x387)&x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x389 = 3395048008LLU;
	int16_t x391 = -1;
	static volatile uint8_t x392 = UINT8_MAX;
	int32_t t94 = 7019079;

	t94 = (((x389/x390)==x391)&x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x394 = 57183LLU;
	volatile int8_t x395 = INT8_MAX;
	static int8_t x396 = INT8_MAX;
	int32_t t95 = -82;

	t95 = (((x393/x394)==x395)&x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	volatile int8_t x400 = -1;
	int32_t t96 = -4;

	t96 = (((x397/x398)==x399)&x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = INT16_MAX;
	volatile int32_t x402 = INT32_MIN;
	int64_t x404 = -1LL;
	volatile int64_t t97 = 84332697241837869LL;

	t97 = (((x401/x402)==x403)&x404);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = -1;
	uint8_t x406 = 1U;
	static int32_t x408 = -37538601;

	t98 = (((x405/x406)==x407)&x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = 877973892;
	volatile uint64_t x410 = 23996236820613962LLU;
	volatile int32_t t99 = -1;

	t99 = (((x409/x410)==x411)&x412);

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

