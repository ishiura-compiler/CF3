#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
int16_t x3 = INT16_MAX;
int64_t t0 = 89898577009782292LL;
static uint64_t x9 = UINT64_MAX;
int16_t x12 = -1;
int64_t x17 = INT64_MIN;
static volatile int8_t x21 = -1;
uint32_t x24 = 32757623U;
int64_t t6 = -916925213LL;
volatile int32_t x29 = 1;
static int16_t x35 = INT16_MIN;
int16_t x37 = -1;
uint64_t x59 = 10102569482861LLU;
static int8_t x62 = -1;
volatile int16_t x67 = -1537;
volatile int64_t x68 = INT64_MAX;
uint64_t x74 = 21005LLU;
uint32_t x79 = UINT32_MAX;
int8_t x80 = 34;
static int32_t t20 = 641;
int16_t x85 = -1;
uint16_t x88 = UINT16_MAX;
volatile uint8_t x90 = UINT8_MAX;
int64_t x94 = INT64_MIN;
uint64_t x95 = 4650654LLU;
int8_t x100 = INT8_MIN;
volatile int32_t t24 = -755852;
int8_t x101 = -1;
int64_t x111 = -5093269808825LL;
uint32_t x115 = 4U;
static volatile int32_t x116 = 8735996;
static volatile uint32_t t28 = 26U;
int64_t x118 = 1081199108250LL;
volatile int32_t x126 = -1;
uint64_t x129 = 85LLU;
static int16_t x139 = INT16_MAX;
int8_t x142 = INT8_MAX;
int8_t x143 = -1;
volatile uint8_t x144 = 105U;
static uint16_t x145 = 5639U;
static volatile int64_t t36 = -12664357198LL;
volatile uint8_t x156 = 1U;
volatile int32_t t37 = -7864455;
int8_t x161 = INT8_MIN;
volatile int32_t x162 = -3;
volatile int8_t x164 = -1;
volatile uint32_t x174 = 2U;
uint16_t x175 = 60U;
int32_t x177 = INT32_MIN;
uint16_t x180 = UINT16_MAX;
volatile uint64_t t46 = 60LLU;
int64_t x193 = -21LL;
int32_t x196 = -32235;
static int32_t x198 = -1;
int16_t x202 = -11;
static int64_t t49 = 6332LL;
int8_t x205 = INT8_MAX;
int32_t x206 = INT32_MAX;
int8_t x210 = -1;
uint32_t t51 = 518405234U;
int32_t t53 = 778;
int64_t t54 = -4288LL;
uint64_t x231 = 2088LLU;
uint16_t x232 = 3U;
int32_t x236 = -1;
int64_t x250 = INT64_MIN;
volatile int64_t x252 = INT64_MIN;
int8_t x257 = INT8_MIN;
uint8_t x264 = 7U;
int32_t x266 = INT32_MIN;
int8_t x274 = -2;
uint64_t x284 = 233745884LLU;
int16_t x289 = INT16_MIN;
int16_t x294 = INT16_MIN;
int32_t x295 = 0;
int16_t x299 = -31;
uint32_t x304 = UINT32_MAX;
static int8_t x308 = INT8_MIN;
volatile int16_t x310 = 3157;
int64_t x313 = INT64_MIN;
volatile uint64_t t75 = 200950LLU;
static int32_t x318 = INT32_MIN;
static int64_t t79 = -64307LL;
int16_t x336 = -1;
volatile int64_t t80 = 4324102471150439LL;
uint64_t x338 = 683635327992504LLU;
static volatile int16_t x341 = -1;
static volatile uint32_t x344 = UINT32_MAX;
static int64_t x345 = -1LL;
volatile int32_t x357 = -1;
int32_t x358 = -50247;
static uint8_t x368 = 1U;
static volatile uint32_t t87 = 2665U;
uint32_t x371 = 12U;
uint16_t x372 = 4155U;
volatile int64_t t89 = -3LL;
uint8_t x381 = UINT8_MAX;
volatile uint8_t x382 = UINT8_MAX;
uint16_t x390 = UINT16_MAX;
int16_t x393 = INT16_MIN;
volatile int64_t t93 = 8241571734LL;
volatile int64_t x399 = INT64_MAX;
volatile int64_t x400 = INT64_MAX;
int64_t x405 = -1LL;
int64_t x407 = -1LL;
volatile int8_t x409 = -1;
int8_t x413 = INT8_MIN;
uint16_t x416 = UINT16_MAX;
uint16_t x418 = 1898U;


void f0(void) {
	int64_t x2 = -1LL;
	int16_t x4 = INT16_MAX;

	t0 = (((x1%x2)&x3)%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 94U;
	static uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 16564805096LLU;
	int32_t x8 = -21;
	volatile uint64_t t1 = 20LLU;

	t1 = (((x5%x6)&x7)%x8);

	if (t1 != 72LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	int8_t x11 = INT8_MIN;
	uint64_t t2 = 16160273329214227LLU;

	t2 = (((x9%x10)&x11)%x12);

	if (t2 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1942178672623388714LL;
	static int32_t x14 = 177837;
	int32_t x15 = INT32_MIN;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 47042101232LL;

	t3 = (((x13%x14)&x15)%x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint32_t x19 = 130592703U;
	static uint32_t x20 = UINT32_MAX;
	int64_t t4 = -1383454710481LL;

	t4 = (((x17%x18)&x19)%x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	static int16_t x23 = INT16_MIN;
	volatile uint32_t t5 = 14313U;

	t5 = (((x21%x22)&x23)%x24);

	if (t5 != 3685915U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 3U;
	int16_t x26 = INT16_MIN;
	uint32_t x27 = 4096746U;
	int64_t x28 = -1LL;

	t6 = (((x25%x26)&x27)%x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -374731;
	uint16_t x31 = 27396U;
	volatile int16_t x32 = INT16_MAX;
	int32_t t7 = -508;

	t7 = (((x29%x30)&x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -30339805;
	volatile int8_t x34 = -1;
	volatile int32_t x36 = -1;
	int32_t t8 = 16962917;

	t8 = (((x33%x34)&x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	static uint32_t x39 = UINT32_MAX;
	volatile int64_t x40 = INT64_MAX;
	int64_t t9 = -7366587546LL;

	t9 = (((x37%x38)&x39)%x40);

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 1;
	int32_t x42 = INT32_MIN;
	volatile int8_t x43 = INT8_MAX;
	uint32_t x44 = 17U;
	uint32_t t10 = 252906U;

	t10 = (((x41%x42)&x43)%x44);

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int16_t x46 = -27;
	int16_t x47 = -1;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = -14LL;

	t11 = (((x45%x46)&x47)%x48);

	if (t11 != 10LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	int64_t t12 = 895076707LL;

	t12 = (((x49%x50)&x51)%x52);

	if (t12 != -128LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	static int16_t x54 = INT16_MIN;
	int64_t x55 = INT64_MIN;
	static int8_t x56 = INT8_MAX;
	int64_t t13 = 376247LL;

	t13 = (((x53%x54)&x55)%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 0;
	int8_t x58 = INT8_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t14 = 142922297787851618LLU;

	t14 = (((x57%x58)&x59)%x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x61 = 5U;
	volatile int16_t x63 = INT16_MIN;
	int8_t x64 = INT8_MIN;
	volatile int32_t t15 = 1;

	t15 = (((x61%x62)&x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1684234;
	int16_t x66 = INT16_MIN;
	int64_t t16 = -4024795LL;

	t16 = (((x65%x66)&x67)%x68);

	if (t16 != -14090LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x69 = 4;
	int16_t x70 = INT16_MIN;
	int32_t x71 = 1;
	int8_t x72 = -12;
	volatile int32_t t17 = 3;

	t17 = (((x69%x70)&x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 6426864943LLU;
	int64_t x75 = INT64_MIN;
	int32_t x76 = 14;
	uint64_t t18 = 5452491522199883592LLU;

	t18 = (((x73%x74)&x75)%x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 1672U;
	int64_t x78 = 1119402326507368LL;
	volatile int64_t t19 = -78LL;

	t19 = (((x77%x78)&x79)%x80);

	if (t19 != 6LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -3149;
	static int32_t x82 = INT32_MIN;
	static int32_t x83 = -1;
	int8_t x84 = 35;

	t20 = (((x81%x82)&x83)%x84);

	if (t20 != -34) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x86 = 246363073706LLU;
	int16_t x87 = INT16_MIN;
	uint64_t t21 = 195300939286329756LLU;

	t21 = (((x85%x86)&x87)%x88);

	if (t21 != 12540LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = 15511LLU;
	int64_t x91 = INT64_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile uint64_t t22 = 2518108860LLU;

	t22 = (((x89%x90)&x91)%x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 468742360079284LLU;
	static int32_t x96 = 759854503;
	uint64_t t23 = 544315163341997LLU;

	t23 = (((x93%x94)&x95)%x96);

	if (t23 != 4461204LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	volatile int16_t x98 = -2365;
	volatile uint16_t x99 = UINT16_MAX;

	t24 = (((x97%x98)&x99)%x100);

	if (t24 != 16) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = 1LL;
	int32_t x103 = INT32_MAX;
	int64_t x104 = -1LL;
	static int64_t t25 = -902833519640538LL;

	t25 = (((x101%x102)&x103)%x104);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 2;
	volatile int32_t x106 = -1;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 3945965LL;

	t26 = (((x105%x106)&x107)%x108);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	volatile int32_t x110 = -70175;
	int16_t x112 = INT16_MAX;
	static volatile int64_t t27 = -100339961488951LL;

	t27 = (((x109%x110)&x111)%x112);

	if (t27 != -13972LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 125222093;
	int32_t x114 = -2;

	t28 = (((x113%x114)&x115)%x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x119 = INT64_MIN;
	int32_t x120 = INT32_MAX;
	volatile int64_t t29 = 2288013430218451332LL;

	t29 = (((x117%x118)&x119)%x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = INT32_MAX;
	uint8_t x127 = UINT8_MAX;
	int64_t x128 = -1LL;
	volatile int64_t t30 = 2127645LL;

	t30 = (((x125%x126)&x127)%x128);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = INT64_MIN;
	int32_t x131 = 95979965;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t31 = 1890414124LLU;

	t31 = (((x129%x130)&x131)%x132);

	if (t31 != 21LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -1;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = 40LLU;
	int32_t x136 = -1;
	volatile uint64_t t32 = 398585LLU;

	t32 = (((x133%x134)&x135)%x136);

	if (t32 != 40LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t33 = -1005890;

	t33 = (((x137%x138)&x139)%x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x141 = 1800372LLU;
	static uint64_t t34 = 217223638609870LLU;

	t34 = (((x141%x142)&x143)%x144);

	if (t34 != 20LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;
	volatile uint16_t x148 = 24U;
	int32_t t35 = 11819;

	t35 = (((x145%x146)&x147)%x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x149 = UINT8_MAX;
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	volatile uint8_t x152 = 2U;

	t36 = (((x149%x150)&x151)%x152);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -570666;
	volatile int8_t x154 = INT8_MIN;
	static int8_t x155 = INT8_MIN;

	t37 = (((x153%x154)&x155)%x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MIN;
	int64_t x158 = -1LL;
	volatile int16_t x159 = 87;
	int8_t x160 = 5;
	static volatile int64_t t38 = 3154214241862184802LL;

	t38 = (((x157%x158)&x159)%x160);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x163 = 57U;
	static int32_t t39 = 6903;

	t39 = (((x161%x162)&x163)%x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 599;
	int16_t x166 = INT16_MIN;
	static int32_t x167 = INT32_MIN;
	int32_t x168 = INT32_MAX;
	int32_t t40 = 11840683;

	t40 = (((x165%x166)&x167)%x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = -8352;
	int16_t x171 = INT16_MIN;
	int32_t x172 = -19660184;
	int32_t t41 = 10;

	t41 = (((x169%x170)&x171)%x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x173 = 109;
	volatile int64_t x176 = -53573145002857910LL;
	int64_t t42 = -377LL;

	t42 = (((x173%x174)&x175)%x176);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x178 = UINT64_MAX;
	static uint32_t x179 = UINT32_MAX;
	uint64_t t43 = 13991028LLU;

	t43 = (((x177%x178)&x179)%x180);

	if (t43 != 32768LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	uint64_t x182 = 7821LLU;
	uint8_t x183 = 0U;
	volatile int16_t x184 = INT16_MAX;
	static volatile uint64_t t44 = 1848989529LLU;

	t44 = (((x181%x182)&x183)%x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int64_t x186 = 89754532189655687LL;
	static int16_t x187 = INT16_MIN;
	int8_t x188 = -1;
	volatile int64_t t45 = 563853526LL;

	t45 = (((x185%x186)&x187)%x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x189 = 196898895U;
	uint32_t x190 = UINT32_MAX;
	uint64_t x191 = 40630244485LLU;
	static uint16_t x192 = 9292U;

	t46 = (((x189%x190)&x191)%x192);

	if (t46 != 4989LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x194 = 5U;
	int8_t x195 = INT8_MIN;
	volatile int64_t t47 = -4511LL;

	t47 = (((x193%x194)&x195)%x196);

	if (t47 != -128LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	volatile uint8_t x199 = 110U;
	int16_t x200 = 148;
	static volatile int32_t t48 = 70661;

	t48 = (((x197%x198)&x199)%x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = 13U;
	static int64_t x203 = INT64_MAX;
	int64_t x204 = 790700471792779803LL;

	t49 = (((x201%x202)&x203)%x204);

	if (t49 != 13LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x207 = INT8_MIN;
	int32_t x208 = -1;
	int32_t t50 = 131877422;

	t50 = (((x205%x206)&x207)%x208);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x209 = 156U;
	static int8_t x211 = INT8_MIN;
	uint32_t x212 = UINT32_MAX;

	t51 = (((x209%x210)&x211)%x212);

	if (t51 != 128U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MAX;
	uint8_t x214 = 29U;
	int8_t x215 = INT8_MIN;
	static volatile uint64_t x216 = 571LLU;
	uint64_t t52 = 6714860201867969475LLU;

	t52 = (((x213%x214)&x215)%x216);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MIN;
	static int8_t x222 = 1;
	int32_t x223 = INT32_MAX;
	uint16_t x224 = 1676U;

	t53 = (((x221%x222)&x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x225 = -449;
	int64_t x226 = INT64_MIN;
	volatile uint32_t x227 = 16341904U;
	int64_t x228 = INT64_MAX;

	t54 = (((x225%x226)&x227)%x228);

	if (t54 != 16341520LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x229 = INT8_MAX;
	int8_t x230 = 31;
	uint64_t t55 = 8856453408680621269LLU;

	t55 = (((x229%x230)&x231)%x232);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = UINT16_MAX;
	static int64_t t56 = 51121LL;

	t56 = (((x233%x234)&x235)%x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = INT16_MIN;
	static int16_t x238 = 1303;
	int32_t x239 = -1767;
	static int8_t x240 = INT8_MAX;
	volatile int32_t t57 = -220;

	t57 = (((x237%x238)&x239)%x240);

	if (t57 != -116) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 585504960991LLU;
	uint16_t x242 = UINT16_MAX;
	static uint32_t x243 = 6U;
	int16_t x244 = -1;
	volatile uint64_t t58 = 6158901037754416LLU;

	t58 = (((x241%x242)&x243)%x244);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MIN;
	uint16_t x247 = 7281U;
	int64_t x248 = INT64_MAX;
	volatile int64_t t59 = 668266306482495LL;

	t59 = (((x245%x246)&x247)%x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = -1;
	int64_t x251 = INT64_MIN;
	int64_t t60 = 4296795344606063294LL;

	t60 = (((x249%x250)&x251)%x252);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	uint16_t x254 = 2496U;
	static volatile int32_t x255 = INT32_MIN;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t61 = -31349;

	t61 = (((x253%x254)&x255)%x256);

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x258 = 19U;
	uint32_t x259 = 578U;
	volatile int64_t x260 = 447740LL;
	volatile int64_t t62 = 276001151193337100LL;

	t62 = (((x257%x258)&x259)%x260);

	if (t62 != 578LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = -1LL;
	int16_t x262 = 107;
	uint8_t x263 = UINT8_MAX;
	static volatile int64_t t63 = -33930LL;

	t63 = (((x261%x262)&x263)%x264);

	if (t63 != 3LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = 14736;
	int8_t x267 = INT8_MAX;
	int32_t x268 = -39;
	volatile int32_t t64 = 9;

	t64 = (((x265%x266)&x267)%x268);

	if (t64 != 16) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;
	volatile uint32_t x275 = 285661U;
	int8_t x276 = -61;
	volatile uint32_t t65 = 42504U;

	t65 = (((x273%x274)&x275)%x276);

	if (t65 != 1U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x277 = -1;
	volatile int16_t x278 = -300;
	static int64_t x279 = 11837614LL;
	int32_t x280 = INT32_MIN;
	int64_t t66 = 128981LL;

	t66 = (((x277%x278)&x279)%x280);

	if (t66 != 11837614LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = -1;
	int32_t x282 = INT32_MAX;
	static uint64_t x283 = 1770946LLU;
	volatile uint64_t t67 = 1179433LLU;

	t67 = (((x281%x282)&x283)%x284);

	if (t67 != 1770946LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = 1285;
	static uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 2708U;
	static int32_t x288 = -56082038;
	int32_t t68 = -14523;

	t68 = (((x285%x286)&x287)%x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x290 = UINT64_MAX;
	int8_t x291 = -1;
	static volatile int64_t x292 = INT64_MIN;
	volatile uint64_t t69 = 855LLU;

	t69 = (((x289%x290)&x291)%x292);

	if (t69 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x293 = UINT16_MAX;
	int32_t x296 = INT32_MIN;
	int32_t t70 = 3363;

	t70 = (((x293%x294)&x295)%x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	uint16_t x298 = 47U;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t71 = 0;

	t71 = (((x297%x298)&x299)%x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x301 = 4662U;
	int32_t x302 = INT32_MAX;
	int32_t x303 = -1;
	uint32_t t72 = 7636U;

	t72 = (((x301%x302)&x303)%x304);

	if (t72 != 4662U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = -189LL;
	uint16_t x307 = 2U;
	int64_t t73 = -69LL;

	t73 = (((x305%x306)&x307)%x308);

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x309 = -1;
	volatile int16_t x311 = INT16_MIN;
	volatile int64_t x312 = INT64_MIN;
	int64_t t74 = 152LL;

	t74 = (((x309%x310)&x311)%x312);

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x314 = INT16_MIN;
	static uint32_t x315 = 8U;
	static uint64_t x316 = 1875517453839503LLU;

	t75 = (((x313%x314)&x315)%x316);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = -1;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t76 = 0;

	t76 = (((x317%x318)&x319)%x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x321 = 2U;
	uint8_t x322 = 11U;
	volatile uint32_t x323 = UINT32_MAX;
	volatile uint32_t x324 = 3U;
	uint32_t t77 = 34U;

	t77 = (((x321%x322)&x323)%x324);

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = 301U;
	int32_t x326 = -1;
	uint16_t x327 = 1169U;
	int32_t x328 = -1;
	int32_t t78 = 6092939;

	t78 = (((x325%x326)&x327)%x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x329 = 940563329772961335LL;
	int16_t x330 = INT16_MAX;
	volatile int32_t x331 = -1;
	volatile int16_t x332 = -1;

	t79 = (((x329%x330)&x331)%x332);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x333 = 561486242U;
	int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;

	t80 = (((x333%x334)&x335)%x336);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -1;
	static int64_t x339 = INT64_MIN;
	volatile int32_t x340 = -1;
	volatile uint64_t t81 = 112941592944230LLU;

	t81 = (((x337%x338)&x339)%x340);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x342 = -11309301691LL;
	volatile int32_t x343 = INT32_MIN;
	volatile int64_t t82 = -211923LL;

	t82 = (((x341%x342)&x343)%x344);

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x346 = UINT8_MAX;
	static int16_t x347 = -1;
	uint32_t x348 = UINT32_MAX;
	volatile int64_t t83 = -36LL;

	t83 = (((x345%x346)&x347)%x348);

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x353 = UINT16_MAX;
	int16_t x354 = INT16_MIN;
	static volatile int64_t x355 = -3730549612977075LL;
	int32_t x356 = INT32_MIN;
	int64_t t84 = 39LL;

	t84 = (((x353%x354)&x355)%x356);

	if (t84 != 25677LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x359 = INT8_MAX;
	static uint32_t x360 = UINT32_MAX;
	volatile uint32_t t85 = 2616U;

	t85 = (((x357%x358)&x359)%x360);

	if (t85 != 127U) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = 315855262LL;
	int64_t x362 = -7309351285LL;
	int16_t x363 = INT16_MIN;
	uint64_t x364 = 11777103834057LLU;
	uint64_t t86 = 6274375220115LLU;

	t86 = (((x361%x362)&x363)%x364);

	if (t86 != 315850752LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = -1;
	uint32_t x366 = 2561466U;
	volatile int16_t x367 = INT16_MIN;

	t87 = (((x365%x366)&x367)%x368);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x369 = -3067;
	int64_t x370 = INT64_MIN;
	volatile int64_t t88 = 3345LL;

	t88 = (((x369%x370)&x371)%x372);

	if (t88 != 4LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x373 = INT16_MAX;
	static int64_t x374 = INT64_MIN;
	static volatile int8_t x375 = -20;
	int16_t x376 = -1;

	t89 = (((x373%x374)&x375)%x376);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x377 = -875;
	static uint64_t x378 = 76925424679041504LLU;
	int8_t x379 = -1;
	int64_t x380 = INT64_MIN;
	static uint64_t t90 = 3919731633599723LLU;

	t90 = (((x377%x378)&x379)%x380);

	if (t90 != 61567575418631285LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x383 = INT16_MIN;
	int64_t x384 = -1LL;
	int64_t t91 = 13182LL;

	t91 = (((x381%x382)&x383)%x384);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x389 = -15531;
	static int16_t x391 = -1;
	int16_t x392 = -2;
	volatile int32_t t92 = 6;

	t92 = (((x389%x390)&x391)%x392);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x394 = INT64_MIN;
	static int16_t x395 = INT16_MIN;
	uint8_t x396 = 2U;

	t93 = (((x393%x394)&x395)%x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x397 = INT32_MIN;
	int8_t x398 = 10;
	volatile int64_t t94 = -2762043096751583690LL;

	t94 = (((x397%x398)&x399)%x400);

	if (t94 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = -2;
	int8_t x402 = INT8_MAX;
	int16_t x403 = 1486;
	volatile int32_t x404 = INT32_MIN;
	volatile int32_t t95 = 536;

	t95 = (((x401%x402)&x403)%x404);

	if (t95 != 1486) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x406 = 7U;
	static int16_t x408 = -1;
	static int64_t t96 = -49261683812117983LL;

	t96 = (((x405%x406)&x407)%x408);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x410 = 1634844865290697342LLU;
	int32_t x411 = -4148406;
	volatile int64_t x412 = -1LL;
	uint64_t t97 = 3894327857579LLU;

	t97 = (((x409%x410)&x411)%x412);

	if (t97 != 463450555507814400LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x414 = INT32_MIN;
	volatile int8_t x415 = INT8_MAX;
	volatile int32_t t98 = 1;

	t98 = (((x413%x414)&x415)%x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x417 = 2733;
	volatile uint32_t x419 = 1925853U;
	int16_t x420 = INT16_MIN;
	volatile uint32_t t99 = 304354U;

	t99 = (((x417%x418)&x419)%x420);

	if (t99 != 577U) { NG(); } else { ; }
	
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

