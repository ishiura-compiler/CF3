#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = 38898721LL;
int32_t x11 = 2002270;
int8_t x15 = -1;
int16_t x16 = -1;
volatile uint32_t x19 = 28614405U;
volatile int32_t x28 = INT32_MIN;
volatile int16_t x32 = 1795;
int8_t x35 = INT8_MAX;
int8_t x38 = INT8_MIN;
int64_t x41 = -1LL;
uint8_t x47 = 38U;
int16_t x51 = -1436;
int64_t x54 = 24576808LL;
static int8_t x56 = -1;
int16_t x58 = 10;
int32_t x64 = -4;
int8_t x65 = -7;
uint32_t x67 = 159025134U;
int8_t x75 = 0;
volatile int32_t t18 = -122;
int16_t x86 = 3573;
volatile int8_t x91 = INT8_MIN;
int16_t x92 = 0;
static int32_t x93 = -1;
uint64_t x98 = 3730899767LLU;
int32_t t24 = -948;
int64_t x102 = 93459LL;
volatile int64_t x105 = -1LL;
static volatile int16_t x119 = 0;
static int8_t x120 = INT8_MIN;
int8_t x124 = INT8_MIN;
int16_t x132 = 4;
static int16_t x135 = INT16_MAX;
volatile int32_t t33 = 0;
int16_t x138 = INT16_MIN;
int32_t x139 = INT32_MIN;
static uint16_t x143 = 4447U;
int32_t t36 = -12523;
int32_t x164 = 78808;
int32_t t41 = 97086;
int64_t x169 = INT64_MIN;
static int32_t t43 = 46018;
uint64_t x177 = 3475060806448610213LLU;
static int16_t x185 = -158;
int8_t x192 = INT8_MIN;
int32_t t47 = 317388655;
static volatile int32_t x194 = -8882617;
int16_t x197 = INT16_MAX;
static uint32_t x198 = UINT32_MAX;
volatile int16_t x199 = -7674;
uint16_t x200 = UINT16_MAX;
int32_t t49 = -1987;
int32_t t51 = 4;
static volatile uint16_t x210 = 8U;
uint32_t x215 = UINT32_MAX;
volatile int32_t t54 = -2148;
uint32_t x222 = 15863U;
int16_t x237 = 7376;
volatile int32_t x238 = INT32_MIN;
int32_t t59 = 0;
uint64_t x249 = UINT64_MAX;
volatile int32_t t62 = 1;
int16_t x272 = -14324;
int16_t x274 = -221;
uint8_t x280 = 0U;
int32_t x291 = INT32_MIN;
volatile int32_t x294 = INT32_MIN;
uint8_t x302 = 0U;
uint32_t x312 = UINT32_MAX;
volatile int16_t x313 = INT16_MAX;
static uint64_t x315 = 383978LLU;
volatile int32_t t78 = 45971862;
int32_t x317 = -1;
static volatile uint16_t x321 = 1316U;
volatile int32_t x322 = -1;
int32_t x332 = INT32_MIN;
uint32_t x339 = 1557991U;
static int64_t x344 = INT64_MAX;
int32_t x350 = INT32_MIN;
int8_t x351 = INT8_MIN;
int16_t x352 = 155;
int8_t x354 = -1;
int32_t t88 = -165802016;
int16_t x357 = 0;
volatile int32_t t90 = -467;
int32_t x365 = -1;
uint8_t x367 = 26U;
volatile int32_t x368 = INT32_MIN;
volatile uint32_t x369 = 89U;
volatile uint64_t x376 = 3999LLU;
static int32_t t93 = 918309;
int32_t x383 = -1;
volatile int16_t x386 = INT16_MAX;
int8_t x388 = INT8_MAX;
int64_t x395 = INT64_MAX;
volatile int32_t t98 = -135159;
int32_t x399 = -13354147;


void f0(void) {
	int32_t x1 = -1;
	volatile int16_t x2 = 10;
	int16_t x3 = -1;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -10;

	t0 = (((x1|x2)<=x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int8_t x6 = -1;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -3236;

	t1 = (((x5|x6)<=x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 0;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = 303;

	t2 = (((x9|x10)<=x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 7;
	int32_t x14 = INT32_MIN;
	volatile int32_t t3 = 383302964;

	t3 = (((x13|x14)<=x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -1;
	uint8_t x18 = 13U;
	static volatile int32_t x20 = INT32_MAX;
	int32_t t4 = -91667;

	t4 = (((x17|x18)<=x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 29;
	static int64_t x22 = INT64_MIN;
	uint32_t x23 = 1255832U;
	int16_t x24 = -8881;
	int32_t t5 = 86813607;

	t5 = (((x21|x22)<=x23)<=x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	uint64_t x26 = 23961919LLU;
	int16_t x27 = -1;
	int32_t t6 = 484867072;

	t6 = (((x25|x26)<=x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint64_t x30 = 15801154553LLU;
	int32_t x31 = INT32_MIN;
	int32_t t7 = -5773;

	t7 = (((x29|x30)<=x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 25042;
	int8_t x34 = INT8_MIN;
	volatile uint64_t x36 = 34LLU;
	int32_t t8 = 170701;

	t8 = (((x33|x34)<=x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	uint64_t x39 = UINT64_MAX;
	int64_t x40 = -1LL;
	int32_t t9 = 986552;

	t9 = (((x37|x38)<=x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x42 = -1;
	volatile int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	static int32_t t10 = 9071363;

	t10 = (((x41|x42)<=x43)<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 3202587304LLU;
	int64_t x46 = 832256651LL;
	volatile uint32_t x48 = UINT32_MAX;
	static int32_t t11 = 13;

	t11 = (((x45|x46)<=x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	volatile int32_t x50 = INT32_MIN;
	static int32_t x52 = -1932866;
	int32_t t12 = -2668;

	t12 = (((x49|x50)<=x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 29U;
	uint16_t x55 = UINT16_MAX;
	volatile int32_t t13 = -13845779;

	t13 = (((x53|x54)<=x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1;
	int32_t t14 = 3;

	t14 = (((x57|x58)<=x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = -390;
	int32_t x62 = INT32_MAX;
	int32_t x63 = INT32_MIN;
	static volatile int32_t t15 = -722226;

	t15 = (((x61|x62)<=x63)<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x66 = 2231542185684803LLU;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 170905;

	t16 = (((x65|x66)<=x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -2324;
	uint64_t x70 = 3748117821881LLU;
	int8_t x71 = -1;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = 18;

	t17 = (((x69|x70)<=x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 5;
	int8_t x74 = INT8_MIN;
	uint8_t x76 = 12U;

	t18 = (((x73|x74)<=x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	volatile int32_t x78 = -1;
	int8_t x79 = -1;
	volatile uint16_t x80 = 858U;
	static int32_t t19 = -20;

	t19 = (((x77|x78)<=x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = -1;
	int16_t x83 = INT16_MIN;
	volatile int16_t x84 = INT16_MIN;
	static volatile int32_t t20 = 1;

	t20 = (((x81|x82)<=x83)<=x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint8_t x87 = 3U;
	uint16_t x88 = UINT16_MAX;
	static volatile int32_t t21 = -7484;

	t21 = (((x85|x86)<=x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x89 = 63027LLU;
	int16_t x90 = INT16_MIN;
	int32_t t22 = 1417;

	t22 = (((x89|x90)<=x91)<=x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x94 = INT64_MIN;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 304;

	t23 = (((x93|x94)<=x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	static volatile int32_t x99 = 1;
	volatile int16_t x100 = 54;

	t24 = (((x97|x98)<=x99)<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MAX;
	int8_t x103 = 15;
	int16_t x104 = -1777;
	int32_t t25 = -906105184;

	t25 = (((x101|x102)<=x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = -1;
	int32_t x107 = 581990;
	volatile int32_t x108 = 47719;
	int32_t t26 = 1747;

	t26 = (((x105|x106)<=x107)<=x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	int8_t x110 = -1;
	uint8_t x111 = 61U;
	int64_t x112 = -66336284LL;
	volatile int32_t t27 = 128235;

	t27 = (((x109|x110)<=x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = -1;
	volatile int64_t x114 = 14256218242277LL;
	uint16_t x115 = UINT16_MAX;
	uint8_t x116 = 0U;
	volatile int32_t t28 = 54204031;

	t28 = (((x113|x114)<=x115)<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 999LLU;
	int32_t x118 = INT32_MIN;
	static int32_t t29 = -4;

	t29 = (((x117|x118)<=x119)<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 3U;
	int64_t x122 = 10LL;
	static int16_t x123 = 1000;
	static int32_t t30 = -1;

	t30 = (((x121|x122)<=x123)<=x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile int16_t x126 = -1;
	int32_t x127 = -1;
	volatile uint32_t x128 = 2U;
	int32_t t31 = -160;

	t31 = (((x125|x126)<=x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = 25926502213LL;
	uint8_t x130 = 29U;
	int64_t x131 = INT64_MIN;
	volatile int32_t t32 = 835567183;

	t32 = (((x129|x130)<=x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 62U;
	volatile int32_t x134 = INT32_MAX;
	volatile int8_t x136 = INT8_MIN;

	t33 = (((x133|x134)<=x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint64_t x140 = 1973566921LLU;
	volatile int32_t t34 = 41089;

	t34 = (((x137|x138)<=x139)<=x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile uint32_t x142 = 470145U;
	int32_t x144 = -41280;
	volatile int32_t t35 = 461197801;

	t35 = (((x141|x142)<=x143)<=x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = INT16_MIN;
	uint32_t x148 = 223U;

	t36 = (((x145|x146)<=x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 115U;
	int16_t x150 = 2598;
	volatile int32_t x151 = -1;
	int32_t x152 = -1;
	int32_t t37 = -2652727;

	t37 = (((x149|x150)<=x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 7366232U;
	int64_t x154 = INT64_MIN;
	volatile int64_t x155 = INT64_MAX;
	int8_t x156 = INT8_MIN;
	int32_t t38 = 22387282;

	t38 = (((x153|x154)<=x155)<=x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 1U;
	volatile int16_t x158 = -1;
	int32_t x159 = INT32_MIN;
	int64_t x160 = 1616736352905545106LL;
	int32_t t39 = -7504592;

	t39 = (((x157|x158)<=x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 1U;
	int16_t x162 = INT16_MIN;
	uint32_t x163 = 39727U;
	int32_t t40 = 464;

	t40 = (((x161|x162)<=x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -113055;
	static volatile int64_t x166 = INT64_MIN;
	uint32_t x167 = 208U;
	static volatile uint32_t x168 = 4U;

	t41 = (((x165|x166)<=x167)<=x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x170 = -1;
	int16_t x171 = INT16_MAX;
	int16_t x172 = -1;
	volatile int32_t t42 = 1;

	t42 = (((x169|x170)<=x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 39480889U;
	uint64_t x174 = UINT64_MAX;
	volatile int32_t x175 = INT32_MIN;
	volatile int8_t x176 = -7;

	t43 = (((x173|x174)<=x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x178 = -1;
	int8_t x179 = INT8_MIN;
	static int32_t x180 = INT32_MIN;
	static int32_t t44 = -352968760;

	t44 = (((x177|x178)<=x179)<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = 4;
	int8_t x183 = INT8_MIN;
	static volatile int8_t x184 = INT8_MIN;
	static volatile int32_t t45 = -7757;

	t45 = (((x181|x182)<=x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = -3455;
	uint16_t x187 = 73U;
	int8_t x188 = INT8_MAX;
	volatile int32_t t46 = 7;

	t46 = (((x185|x186)<=x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	static int16_t x190 = -1;
	int32_t x191 = 4716;

	t47 = (((x189|x190)<=x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 3982172237LLU;
	static uint16_t x195 = UINT16_MAX;
	int64_t x196 = INT64_MAX;
	static volatile int32_t t48 = 32659;

	t48 = (((x193|x194)<=x195)<=x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {


	t49 = (((x197|x198)<=x199)<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 0U;
	volatile int64_t x202 = -1LL;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = UINT64_MAX;
	int32_t t50 = 107;

	t50 = (((x201|x202)<=x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	uint64_t x206 = 14LLU;
	uint32_t x207 = UINT32_MAX;
	static uint32_t x208 = UINT32_MAX;

	t51 = (((x205|x206)<=x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	volatile uint8_t x211 = 0U;
	static volatile uint8_t x212 = 6U;
	volatile int32_t t52 = -376;

	t52 = (((x209|x210)<=x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	volatile int64_t x214 = INT64_MIN;
	static uint32_t x216 = 1600429U;
	int32_t t53 = -3158303;

	t53 = (((x213|x214)<=x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	int16_t x218 = INT16_MAX;
	static uint8_t x219 = 29U;
	int8_t x220 = 0;

	t54 = (((x217|x218)<=x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 21U;
	uint64_t x223 = 3120LLU;
	volatile int32_t x224 = INT32_MIN;
	static int32_t t55 = -6616;

	t55 = (((x221|x222)<=x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x225 = UINT8_MAX;
	static int64_t x226 = -101269731LL;
	int16_t x227 = -1;
	int64_t x228 = 141364510LL;
	int32_t t56 = 343;

	t56 = (((x225|x226)<=x227)<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 4249U;
	volatile uint16_t x230 = 7706U;
	uint16_t x231 = UINT16_MAX;
	static uint64_t x232 = 67549879499615LLU;
	static volatile int32_t t57 = 49;

	t57 = (((x229|x230)<=x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = 45346122273853090LLU;
	static int16_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = -26;

	t58 = (((x233|x234)<=x235)<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x239 = 16905U;
	uint8_t x240 = 13U;

	t59 = (((x237|x238)<=x239)<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 78U;
	volatile uint16_t x242 = 12U;
	int32_t x243 = -400;
	uint32_t x244 = 43U;
	static volatile int32_t t60 = -242273;

	t60 = (((x241|x242)<=x243)<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 5607U;
	int64_t x246 = INT64_MIN;
	volatile uint32_t x247 = 2537988U;
	uint32_t x248 = 833U;
	int32_t t61 = 1553;

	t61 = (((x245|x246)<=x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = 93;
	int8_t x251 = 14;
	int16_t x252 = 0;

	t62 = (((x249|x250)<=x251)<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	volatile uint32_t x256 = 5U;
	volatile int32_t t63 = 836675334;

	t63 = (((x253|x254)<=x255)<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = UINT64_MAX;
	int16_t x258 = INT16_MAX;
	int64_t x259 = INT64_MIN;
	int64_t x260 = -1457242827000410LL;
	static int32_t t64 = -2141768;

	t64 = (((x257|x258)<=x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static uint16_t x263 = 23622U;
	uint16_t x264 = UINT16_MAX;
	static int32_t t65 = 2;

	t65 = (((x261|x262)<=x263)<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 130146;
	int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t66 = 44;

	t66 = (((x265|x266)<=x267)<=x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = -27;
	int32_t x270 = -36552;
	volatile int16_t x271 = -1;
	int32_t t67 = -582;

	t67 = (((x269|x270)<=x271)<=x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x275 = -53;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 2586;

	t68 = (((x273|x274)<=x275)<=x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x279 = -1;
	volatile int32_t t69 = -11;

	t69 = (((x277|x278)<=x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	static int32_t x282 = -1;
	int16_t x283 = INT16_MIN;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t70 = -887;

	t70 = (((x281|x282)<=x283)<=x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = 28U;
	int32_t x286 = -1;
	int64_t x287 = -1LL;
	uint32_t x288 = UINT32_MAX;
	int32_t t71 = 1;

	t71 = (((x285|x286)<=x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = INT64_MAX;
	uint64_t x290 = UINT64_MAX;
	int16_t x292 = -1;
	volatile int32_t t72 = 20;

	t72 = (((x289|x290)<=x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = 6273;
	int64_t x295 = -15333180976647LL;
	int32_t x296 = INT32_MIN;
	int32_t t73 = 0;

	t73 = (((x293|x294)<=x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = -40;
	uint64_t x299 = 20514367957636LLU;
	uint16_t x300 = 4U;
	int32_t t74 = -254393509;

	t74 = (((x297|x298)<=x299)<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -58960LL;
	uint8_t x303 = 46U;
	static uint64_t x304 = UINT64_MAX;
	static volatile int32_t t75 = 26759221;

	t75 = (((x301|x302)<=x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 2U;
	volatile int64_t x306 = INT64_MAX;
	int16_t x307 = INT16_MIN;
	static uint16_t x308 = UINT16_MAX;
	int32_t t76 = 171631;

	t76 = (((x305|x306)<=x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = -1;
	uint16_t x310 = 987U;
	static int64_t x311 = -1LL;
	volatile int32_t t77 = 50268;

	t77 = (((x309|x310)<=x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = INT8_MIN;
	int8_t x316 = INT8_MIN;

	t78 = (((x313|x314)<=x315)<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x318 = 1U;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = 83U;
	int32_t t79 = 647599;

	t79 = (((x317|x318)<=x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MIN;
	int64_t x324 = INT64_MIN;
	int32_t t80 = 1013142;

	t80 = (((x321|x322)<=x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x325 = -1;
	int8_t x326 = 30;
	uint32_t x327 = 29700786U;
	uint32_t x328 = 27867U;
	int32_t t81 = -5859442;

	t81 = (((x325|x326)<=x327)<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -1LL;
	static int8_t x330 = INT8_MAX;
	int16_t x331 = -1;
	int32_t t82 = -2657;

	t82 = (((x329|x330)<=x331)<=x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int32_t x334 = INT32_MIN;
	static volatile int64_t x335 = -1080964891970341LL;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = 1;

	t83 = (((x333|x334)<=x335)<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = 1LL;
	volatile uint32_t x338 = 8830824U;
	int32_t x340 = INT32_MIN;
	int32_t t84 = -159;

	t84 = (((x337|x338)<=x339)<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = 4202;

	t85 = (((x341|x342)<=x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -1;
	int32_t x346 = -1;
	int64_t x347 = -1LL;
	volatile int16_t x348 = INT16_MIN;
	static volatile int32_t t86 = 5874;

	t86 = (((x345|x346)<=x347)<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 110U;
	int32_t t87 = -106828;

	t87 = (((x349|x350)<=x351)<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MIN;
	static int64_t x355 = 3291196592464037LL;
	static int8_t x356 = -1;

	t88 = (((x353|x354)<=x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	int64_t x359 = 121LL;
	uint8_t x360 = 12U;
	static int32_t t89 = 955553169;

	t89 = (((x357|x358)<=x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 3U;
	static volatile uint32_t x362 = 6U;
	volatile uint64_t x363 = 666923137491011945LLU;
	int64_t x364 = INT64_MIN;

	t90 = (((x361|x362)<=x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MAX;
	int32_t t91 = -93732797;

	t91 = (((x365|x366)<=x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x370 = 191849586U;
	uint8_t x371 = UINT8_MAX;
	volatile uint64_t x372 = 51367LLU;
	volatile int32_t t92 = -1;

	t92 = (((x369|x370)<=x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	uint16_t x374 = 177U;
	static int32_t x375 = INT32_MIN;

	t93 = (((x373|x374)<=x375)<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int8_t x378 = INT8_MIN;
	static int16_t x379 = -1;
	uint32_t x380 = 493532427U;
	volatile int32_t t94 = 261613593;

	t94 = (((x377|x378)<=x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int8_t x382 = 0;
	uint16_t x384 = UINT16_MAX;
	int32_t t95 = 783419;

	t95 = (((x381|x382)<=x383)<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MIN;
	volatile uint16_t x387 = 6U;
	static int32_t t96 = -10448;

	t96 = (((x385|x386)<=x387)<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 381072LL;
	static uint32_t x390 = 32189U;
	int32_t x391 = 84;
	int8_t x392 = -41;
	int32_t t97 = -236117173;

	t97 = (((x389|x390)<=x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = 28;
	int16_t x394 = INT16_MAX;
	int64_t x396 = 5093513935LL;

	t98 = (((x393|x394)<=x395)<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 0;
	uint16_t x398 = 7167U;
	int64_t x400 = 8155096LL;
	int32_t t99 = 44424351;

	t99 = (((x397|x398)<=x399)<=x400);

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

