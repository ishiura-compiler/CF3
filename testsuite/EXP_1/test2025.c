#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x9 = INT16_MAX;
int32_t t2 = -95006067;
int32_t t3 = -7883;
int8_t x19 = INT8_MAX;
volatile int64_t x21 = 32401LL;
static int32_t x38 = INT32_MIN;
static uint64_t x40 = 23480LLU;
static int32_t t10 = 29;
static volatile int32_t x49 = -711422600;
int8_t x54 = -1;
volatile int32_t t13 = -8068;
uint16_t x58 = 4775U;
int32_t x59 = -19370035;
int64_t x66 = INT64_MIN;
volatile int8_t x67 = INT8_MIN;
static int64_t x73 = 170371384171LL;
volatile int16_t x74 = INT16_MAX;
uint32_t x86 = 183094914U;
int64_t x91 = INT64_MIN;
volatile int64_t x93 = 2938491117341LL;
int32_t x108 = INT32_MIN;
static int32_t t26 = -7062504;
uint8_t x121 = UINT8_MAX;
volatile int64_t x127 = -1LL;
static int16_t x128 = 1;
volatile int8_t x130 = -12;
static uint16_t x132 = 2U;
int32_t t32 = 7214;
uint16_t x155 = 24U;
int32_t x158 = INT32_MAX;
int8_t x160 = 1;
int64_t x162 = 7624483LL;
volatile int16_t x165 = -1;
uint8_t x174 = 0U;
int32_t x175 = INT32_MAX;
uint32_t x184 = 796U;
int64_t x185 = -8LL;
static int16_t x187 = INT16_MAX;
volatile int32_t t46 = 108125;
int16_t x193 = INT16_MIN;
uint16_t x198 = 1U;
static int32_t x199 = INT32_MIN;
volatile int64_t x203 = INT64_MIN;
int8_t x209 = INT8_MIN;
int16_t x220 = -1;
int32_t t54 = -577;
static int16_t x229 = -360;
int16_t x230 = INT16_MIN;
static int32_t x232 = INT32_MAX;
uint16_t x233 = UINT16_MAX;
static uint32_t x241 = 0U;
uint32_t x249 = 11U;
int16_t x260 = -1;
static int16_t x262 = INT16_MIN;
static int8_t x265 = 3;
int8_t x272 = -1;
int16_t x275 = INT16_MIN;
int32_t t69 = -988868940;
static uint32_t x286 = UINT32_MAX;
int64_t x292 = -1LL;
static volatile int16_t x295 = INT16_MIN;
int64_t x299 = -12842170509415901LL;
static uint64_t x308 = 51923133LLU;
int8_t x312 = 3;
volatile int32_t t77 = 1729;
uint64_t x313 = 147752256501814LLU;
int32_t x316 = INT32_MAX;
uint64_t x323 = 5538047676859608753LLU;
static uint32_t x336 = 5032U;
int16_t x339 = 1;
int32_t t84 = -616657953;
int64_t x343 = INT64_MIN;
int64_t x346 = INT64_MIN;
static volatile uint32_t x354 = 1298U;
int32_t x365 = 1;
int64_t x367 = INT64_MIN;
int64_t x368 = -1LL;
static volatile int64_t x374 = INT64_MIN;
int16_t x376 = INT16_MAX;
int32_t x381 = INT32_MIN;
volatile int8_t x382 = INT8_MAX;
int8_t x386 = INT8_MIN;
volatile int32_t x399 = INT32_MIN;
int32_t t99 = 0;


void f0(void) {
	static volatile int8_t x1 = -1;
	int16_t x2 = INT16_MAX;
	static uint16_t x3 = 41U;
	uint8_t x4 = 6U;
	int32_t t0 = -403746;

	t0 = (((x1|x2)^x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 130796U;
	int16_t x6 = 4681;
	int8_t x7 = 2;
	int64_t x8 = INT64_MAX;
	static int32_t t1 = 76260076;

	t1 = (((x5|x6)^x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MIN;
	uint64_t x11 = 132357549759LLU;
	uint8_t x12 = UINT8_MAX;

	t2 = (((x9|x10)^x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	uint64_t x16 = 11793LLU;

	t3 = (((x13|x14)^x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -1;
	int64_t x18 = INT64_MIN;
	static int16_t x20 = 12397;
	volatile int32_t t4 = 0;

	t4 = (((x17|x18)^x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	int8_t x23 = -59;
	volatile uint32_t x24 = 93U;
	int32_t t5 = 0;

	t5 = (((x21|x22)^x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 51U;
	static int64_t x26 = INT64_MIN;
	volatile uint32_t x27 = 2973U;
	volatile int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -2;

	t6 = (((x25|x26)^x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 0;
	static int64_t x30 = -1LL;
	int32_t x31 = INT32_MIN;
	uint64_t x32 = 50LLU;
	int32_t t7 = 734235346;

	t7 = (((x29|x30)^x31)<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static int16_t x34 = INT16_MAX;
	static uint8_t x35 = UINT8_MAX;
	static int8_t x36 = INT8_MIN;
	int32_t t8 = -665635;

	t8 = (((x33|x34)^x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x39 = 45606;
	int32_t t9 = 22;

	t9 = (((x37|x38)^x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 2;
	int32_t x42 = INT32_MAX;
	uint8_t x43 = UINT8_MAX;
	volatile int32_t x44 = INT32_MAX;

	t10 = (((x41|x42)^x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static int64_t x46 = -64130LL;
	int32_t x47 = INT32_MAX;
	int16_t x48 = -7262;
	volatile int32_t t11 = 178;

	t11 = (((x45|x46)^x47)<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 320U;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MIN;
	int32_t t12 = 2;

	t12 = (((x49|x50)^x51)<=x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	uint64_t x55 = 386808294800LLU;
	uint64_t x56 = 1798656470919119LLU;

	t13 = (((x53|x54)^x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2136395981578620284LLU;
	volatile int64_t x60 = INT64_MAX;
	static volatile int32_t t14 = -165810;

	t14 = (((x57|x58)^x59)<=x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = 407;

	t15 = (((x61|x62)^x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int16_t x68 = -58;
	volatile int32_t t16 = 29464823;

	t16 = (((x65|x66)^x67)<=x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MAX;
	static volatile int64_t x70 = INT64_MIN;
	int8_t x71 = 32;
	int16_t x72 = INT16_MIN;
	int32_t t17 = 192;

	t17 = (((x69|x70)^x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x75 = INT32_MIN;
	volatile int8_t x76 = INT8_MAX;
	volatile int32_t t18 = 641;

	t18 = (((x73|x74)^x75)<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 388522937LLU;
	int32_t x78 = INT32_MIN;
	int32_t x79 = 230077258;
	int64_t x80 = -6153740LL;
	volatile int32_t t19 = -4;

	t19 = (((x77|x78)^x79)<=x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 0;
	uint16_t x82 = UINT16_MAX;
	volatile int64_t x83 = -1LL;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 1;

	t20 = (((x81|x82)^x83)<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x85 = INT64_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = -1;
	int32_t t21 = 658;

	t21 = (((x85|x86)^x87)<=x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = 7;
	int32_t x90 = INT32_MAX;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t22 = 18961;

	t22 = (((x89|x90)^x91)<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x94 = 2U;
	static int16_t x95 = 2;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = -19;

	t23 = (((x93|x94)^x95)<=x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = UINT8_MAX;
	uint8_t x98 = 0U;
	int64_t x99 = INT64_MAX;
	int16_t x100 = -292;
	int32_t t24 = 14060810;

	t24 = (((x97|x98)^x99)<=x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = UINT8_MAX;
	static uint64_t x102 = UINT64_MAX;
	uint16_t x103 = 159U;
	int16_t x104 = 1375;
	int32_t t25 = -96461;

	t25 = (((x101|x102)^x103)<=x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	int16_t x106 = INT16_MAX;
	int16_t x107 = 82;

	t26 = (((x105|x106)^x107)<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 2;
	uint8_t x110 = UINT8_MAX;
	volatile uint64_t x111 = UINT64_MAX;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = -230100;

	t27 = (((x109|x110)^x111)<=x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	uint8_t x114 = 4U;
	int16_t x115 = INT16_MAX;
	int8_t x116 = 0;
	int32_t t28 = 3083286;

	t28 = (((x113|x114)^x115)<=x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	int64_t x118 = INT64_MIN;
	static uint32_t x119 = UINT32_MAX;
	volatile int8_t x120 = INT8_MIN;
	int32_t t29 = -6942933;

	t29 = (((x117|x118)^x119)<=x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MIN;
	int64_t x123 = 8710835259373LL;
	int32_t x124 = INT32_MAX;
	static volatile int32_t t30 = 0;

	t30 = (((x121|x122)^x123)<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	uint8_t x126 = UINT8_MAX;
	int32_t t31 = 1;

	t31 = (((x125|x126)^x127)<=x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MAX;
	uint8_t x131 = UINT8_MAX;

	t32 = (((x129|x130)^x131)<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 105U;
	uint8_t x134 = 48U;
	volatile uint64_t x135 = UINT64_MAX;
	int16_t x136 = 0;
	int32_t t33 = -31;

	t33 = (((x133|x134)^x135)<=x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 14044U;
	uint64_t x138 = 956771127250LLU;
	volatile int16_t x139 = -1;
	uint32_t x140 = 480169U;
	volatile int32_t t34 = 94571105;

	t34 = (((x137|x138)^x139)<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int64_t x142 = INT64_MAX;
	volatile int8_t x143 = INT8_MIN;
	static volatile int16_t x144 = INT16_MAX;
	volatile int32_t t35 = 1197345;

	t35 = (((x141|x142)^x143)<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = 46U;
	uint64_t x146 = UINT64_MAX;
	int32_t x147 = -3709;
	int64_t x148 = INT64_MIN;
	int32_t t36 = -2;

	t36 = (((x145|x146)^x147)<=x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 94U;
	static int16_t x150 = -1;
	static uint32_t x151 = 56U;
	int64_t x152 = -4798894496095400LL;
	volatile int32_t t37 = 10808;

	t37 = (((x149|x150)^x151)<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MIN;
	int8_t x154 = -1;
	int8_t x156 = INT8_MAX;
	int32_t t38 = -1501;

	t38 = (((x153|x154)^x155)<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -607;
	uint16_t x159 = 29U;
	int32_t t39 = 14;

	t39 = (((x157|x158)^x159)<=x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x163 = UINT32_MAX;
	volatile int8_t x164 = 0;
	volatile int32_t t40 = 1164;

	t40 = (((x161|x162)^x163)<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = -16612018550LL;
	volatile uint32_t x168 = 5570U;
	int32_t t41 = 29513295;

	t41 = (((x165|x166)^x167)<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = INT32_MAX;
	uint16_t x170 = UINT16_MAX;
	static uint32_t x171 = UINT32_MAX;
	uint8_t x172 = UINT8_MAX;
	volatile int32_t t42 = 24;

	t42 = (((x169|x170)^x171)<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MAX;
	static volatile int64_t x176 = -1LL;
	int32_t t43 = 4;

	t43 = (((x173|x174)^x175)<=x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -1;
	static uint8_t x178 = 6U;
	uint32_t x179 = 108460713U;
	uint32_t x180 = UINT32_MAX;
	int32_t t44 = -378;

	t44 = (((x177|x178)^x179)<=x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int16_t x182 = INT16_MIN;
	static int32_t x183 = INT32_MAX;
	volatile int32_t t45 = -698;

	t45 = (((x181|x182)^x183)<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = 7U;
	int8_t x188 = INT8_MIN;

	t46 = (((x185|x186)^x187)<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x189 = -1;
	uint32_t x190 = 599U;
	uint8_t x191 = 5U;
	uint16_t x192 = 493U;
	int32_t t47 = 1419;

	t47 = (((x189|x190)^x191)<=x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x194 = 2312U;
	static int8_t x195 = INT8_MIN;
	int8_t x196 = 36;
	volatile int32_t t48 = 232717394;

	t48 = (((x193|x194)^x195)<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	uint8_t x200 = 73U;
	volatile int32_t t49 = 48565702;

	t49 = (((x197|x198)^x199)<=x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -384540587;
	int64_t x202 = 23045302436835LL;
	int64_t x204 = INT64_MAX;
	volatile int32_t t50 = -92109467;

	t50 = (((x201|x202)^x203)<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static uint16_t x206 = UINT16_MAX;
	int16_t x207 = -1;
	uint64_t x208 = 2968276528347LLU;
	static int32_t t51 = -4957;

	t51 = (((x205|x206)^x207)<=x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x210 = UINT64_MAX;
	volatile int64_t x211 = -796167512695LL;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 0;

	t52 = (((x209|x210)^x211)<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = 1;
	static volatile uint8_t x214 = 14U;
	uint32_t x215 = 600U;
	uint64_t x216 = 257579722847667724LLU;
	volatile int32_t t53 = -63108787;

	t53 = (((x213|x214)^x215)<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = -11131;
	uint16_t x218 = 6215U;
	static int8_t x219 = 24;

	t54 = (((x217|x218)^x219)<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	int8_t x222 = 3;
	uint32_t x223 = 581U;
	volatile uint16_t x224 = 7024U;
	static int32_t t55 = 56659611;

	t55 = (((x221|x222)^x223)<=x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int32_t x226 = INT32_MIN;
	uint8_t x227 = 0U;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 5020;

	t56 = (((x225|x226)^x227)<=x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x231 = 2947474;
	int32_t t57 = -54;

	t57 = (((x229|x230)^x231)<=x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x234 = INT64_MIN;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	static volatile int32_t t58 = -702572;

	t58 = (((x233|x234)^x235)<=x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = 0;
	uint64_t x238 = 2066061803122800441LLU;
	int16_t x239 = -1;
	uint16_t x240 = UINT16_MAX;
	int32_t t59 = -335;

	t59 = (((x237|x238)^x239)<=x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x242 = -11;
	int32_t x243 = -1;
	volatile uint32_t x244 = 3U;
	int32_t t60 = -7583677;

	t60 = (((x241|x242)^x243)<=x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	static int8_t x246 = INT8_MIN;
	static uint8_t x247 = 0U;
	static uint8_t x248 = 4U;
	volatile int32_t t61 = 807106959;

	t61 = (((x245|x246)^x247)<=x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 12513710LL;
	static int64_t x251 = -3024990482468LL;
	int64_t x252 = INT64_MIN;
	static int32_t t62 = -1069169650;

	t62 = (((x249|x250)^x251)<=x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = 10;
	uint64_t x254 = 25544650615LLU;
	int32_t x255 = INT32_MAX;
	volatile uint16_t x256 = 1U;
	volatile int32_t t63 = -227393;

	t63 = (((x253|x254)^x255)<=x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 3U;
	int64_t x259 = -1LL;
	static int32_t t64 = 2813;

	t64 = (((x257|x258)^x259)<=x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	int32_t x263 = INT32_MIN;
	int32_t x264 = -1;
	int32_t t65 = 1;

	t65 = (((x261|x262)^x263)<=x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = -5;
	int32_t x267 = -1;
	int16_t x268 = INT16_MAX;
	int32_t t66 = 8;

	t66 = (((x265|x266)^x267)<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 736301U;
	volatile int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	static int32_t t67 = -302205;

	t67 = (((x269|x270)^x271)<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 1498360088U;
	uint32_t x274 = UINT32_MAX;
	static volatile int32_t x276 = -1;
	int32_t t68 = 15832;

	t68 = (((x273|x274)^x275)<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	uint8_t x278 = UINT8_MAX;
	static volatile int64_t x279 = INT64_MAX;
	uint8_t x280 = 28U;

	t69 = (((x277|x278)^x279)<=x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	static uint32_t x282 = 144455U;
	int64_t x283 = INT64_MIN;
	int16_t x284 = INT16_MAX;
	int32_t t70 = -249528;

	t70 = (((x281|x282)^x283)<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int8_t x287 = INT8_MIN;
	int16_t x288 = -280;
	static int32_t t71 = 87205;

	t71 = (((x285|x286)^x287)<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -14;
	static int64_t x290 = INT64_MIN;
	int8_t x291 = -41;
	int32_t t72 = 19;

	t72 = (((x289|x290)^x291)<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	volatile int64_t x294 = 2167810382983428LL;
	uint64_t x296 = 1336905575969LLU;
	static int32_t t73 = -214595;

	t73 = (((x293|x294)^x295)<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x297 = 19;
	int32_t x298 = -8319985;
	int64_t x300 = 70LL;
	volatile int32_t t74 = -510983;

	t74 = (((x297|x298)^x299)<=x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x301 = 17U;
	uint64_t x302 = UINT64_MAX;
	uint32_t x303 = UINT32_MAX;
	volatile int8_t x304 = -1;
	int32_t t75 = -1;

	t75 = (((x301|x302)^x303)<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x305 = -1;
	volatile int16_t x306 = -1;
	int64_t x307 = -1LL;
	static int32_t t76 = 4;

	t76 = (((x305|x306)^x307)<=x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	int64_t x310 = INT64_MIN;
	uint8_t x311 = 1U;

	t77 = (((x309|x310)^x311)<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x314 = INT16_MIN;
	int32_t x315 = -2;
	volatile int32_t t78 = -3496337;

	t78 = (((x313|x314)^x315)<=x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	static uint8_t x318 = 22U;
	int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MAX;
	int32_t t79 = 504;

	t79 = (((x317|x318)^x319)<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -1;
	int16_t x322 = -1;
	uint32_t x324 = 1U;
	static volatile int32_t t80 = -6430;

	t80 = (((x321|x322)^x323)<=x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	volatile int8_t x326 = INT8_MAX;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = -35969837;

	t81 = (((x325|x326)^x327)<=x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 28794U;
	int32_t x330 = INT32_MIN;
	static uint16_t x331 = UINT16_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = -203;

	t82 = (((x329|x330)^x331)<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 30;
	volatile uint32_t x334 = UINT32_MAX;
	volatile int32_t x335 = -1;
	int32_t t83 = 9905;

	t83 = (((x333|x334)^x335)<=x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 0;
	int16_t x338 = INT16_MAX;
	int32_t x340 = INT32_MAX;

	t84 = (((x337|x338)^x339)<=x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	uint32_t x342 = 85792U;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = -115283;

	t85 = (((x341|x342)^x343)<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 5;
	uint32_t x347 = UINT32_MAX;
	static int16_t x348 = INT16_MAX;
	static volatile int32_t t86 = 1963;

	t86 = (((x345|x346)^x347)<=x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = 1;
	volatile int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = -130572914;

	t87 = (((x349|x350)^x351)<=x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x353 = 163313230U;
	uint64_t x355 = 54812285097697014LLU;
	uint32_t x356 = 943449304U;
	int32_t t88 = 3;

	t88 = (((x353|x354)^x355)<=x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -7;
	volatile int32_t t89 = 496396;

	t89 = (((x357|x358)^x359)<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MAX;
	uint32_t x363 = UINT32_MAX;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 13850802;

	t90 = (((x361|x362)^x363)<=x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	volatile int32_t t91 = 11454;

	t91 = (((x365|x366)^x367)<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x369 = 4U;
	uint8_t x370 = UINT8_MAX;
	volatile int32_t x371 = 272961731;
	int32_t x372 = INT32_MAX;
	int32_t t92 = 3;

	t92 = (((x369|x370)^x371)<=x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 48U;
	uint64_t x375 = 12034LLU;
	volatile int32_t t93 = -18;

	t93 = (((x373|x374)^x375)<=x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -783;
	static int32_t x378 = -1;
	int16_t x379 = INT16_MAX;
	volatile uint8_t x380 = UINT8_MAX;
	int32_t t94 = -92778598;

	t94 = (((x377|x378)^x379)<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x383 = 34790U;
	static uint16_t x384 = UINT16_MAX;
	int32_t t95 = -148571230;

	t95 = (((x381|x382)^x383)<=x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	int64_t x388 = INT64_MIN;
	static int32_t t96 = -3;

	t96 = (((x385|x386)^x387)<=x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	volatile int16_t x390 = INT16_MIN;
	uint32_t x391 = 32356U;
	uint16_t x392 = 62U;
	int32_t t97 = -1681613;

	t97 = (((x389|x390)^x391)<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	volatile int16_t x394 = INT16_MAX;
	static volatile int8_t x395 = INT8_MAX;
	int32_t x396 = -6325740;
	int32_t t98 = 0;

	t98 = (((x393|x394)^x395)<=x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = -2;
	volatile int16_t x398 = 1874;
	static int32_t x400 = INT32_MAX;

	t99 = (((x397|x398)^x399)<=x400);

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

