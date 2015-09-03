#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 52540520LLU;
int64_t x8 = INT64_MIN;
static uint64_t t4 = 1111590372928983436LLU;
int32_t x23 = INT32_MAX;
int32_t t5 = -198465351;
uint32_t x32 = 395625616U;
static volatile uint16_t x36 = 21618U;
int16_t x40 = 33;
static int64_t x46 = -268LL;
static volatile int16_t x47 = -1;
volatile int32_t x49 = INT32_MAX;
static volatile uint32_t x57 = 1656570U;
static uint64_t x63 = UINT64_MAX;
int8_t x67 = 8;
static int16_t x70 = INT16_MIN;
int32_t x71 = 55;
int64_t x74 = INT64_MIN;
static int16_t x75 = INT16_MAX;
int32_t x76 = INT32_MIN;
int32_t t18 = -6033572;
int32_t t20 = -1389210;
static int16_t x92 = INT16_MAX;
static uint8_t x95 = 18U;
volatile uint8_t x96 = UINT8_MAX;
static int32_t t24 = -247981;
int32_t x103 = -241;
int8_t x110 = INT8_MIN;
int16_t x116 = INT16_MAX;
volatile int8_t x118 = INT8_MIN;
volatile int32_t t29 = 12;
uint16_t x121 = 4U;
int32_t t30 = 76407;
int32_t x139 = INT32_MIN;
uint64_t x140 = 1460402376060LLU;
static volatile uint64_t t33 = 297671224744623LLU;
volatile int64_t x141 = -5084093105341538LL;
uint8_t x147 = 39U;
volatile int32_t t35 = -434113007;
int16_t x152 = INT16_MIN;
volatile int32_t t36 = -89;
static uint16_t x153 = 10U;
int64_t x160 = INT64_MAX;
static volatile int64_t t38 = 11641385LL;
static uint64_t x162 = 3210308505LLU;
int32_t x171 = INT32_MIN;
int32_t x173 = -12494;
static int8_t x176 = INT8_MIN;
int32_t t42 = 44;
volatile uint32_t x178 = 11095U;
uint64_t x180 = 1496142878148945LLU;
static int64_t x185 = INT64_MAX;
uint8_t x191 = UINT8_MAX;
int32_t x194 = -387673577;
int32_t x201 = 114646;
uint64_t x205 = 298251350LLU;
volatile uint8_t x206 = 11U;
volatile int32_t t50 = -60577902;
volatile int8_t x215 = INT8_MAX;
int8_t x227 = INT8_MIN;
int32_t x232 = INT32_MIN;
static uint32_t x233 = 822U;
static uint32_t x234 = 2917950U;
uint8_t x235 = UINT8_MAX;
static volatile uint32_t x238 = 33488U;
static int64_t x246 = 98802689342160491LL;
static int16_t x248 = -1;
volatile int16_t x249 = -1;
int8_t x253 = -12;
volatile int64_t x257 = 0LL;
int16_t x263 = INT16_MAX;
volatile uint64_t t67 = 1136775LLU;
int8_t x282 = INT8_MIN;
static int32_t x286 = INT32_MAX;
int64_t x288 = -1LL;
int64_t x293 = INT64_MIN;
static int32_t t72 = -12;
volatile int32_t t73 = -60;
int32_t x307 = INT32_MAX;
int32_t x310 = INT32_MIN;
int64_t x319 = INT64_MAX;
int64_t x320 = -3597498833LL;
int16_t x324 = -1;
int8_t x334 = -4;
volatile uint64_t x349 = 900766654LLU;
int8_t x353 = 0;
uint16_t x364 = UINT16_MAX;
static int64_t x367 = -422696934035884LL;
int16_t x371 = 120;
uint32_t t90 = 18614U;
int64_t x375 = INT64_MIN;
int64_t x378 = INT64_MIN;
int64_t x382 = -583340379LL;
static uint32_t x384 = 2U;
int64_t t94 = -11598908519358420LL;
int8_t x396 = INT8_MIN;
int32_t t96 = 876896;
volatile uint16_t x397 = 60U;
uint8_t x401 = UINT8_MAX;
static int64_t x403 = INT64_MAX;
uint8_t x404 = 17U;
int32_t x405 = INT32_MAX;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	volatile int64_t x2 = INT64_MIN;
	uint16_t x3 = 6U;
	uint64_t t0 = 7533LLU;

	t0 = (((x1%x2)<=x3)&x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 16LLU;
	static int64_t x6 = INT64_MAX;
	volatile int8_t x7 = INT8_MIN;
	static volatile int64_t t1 = 5263216027567LL;

	t1 = (((x5%x6)<=x7)&x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -252;
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = 1;
	volatile int32_t x12 = INT32_MAX;
	int32_t t2 = -4105274;

	t2 = (((x9%x10)<=x11)&x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = -1;
	int16_t x15 = -13975;
	uint32_t x16 = 21907U;
	volatile uint32_t t3 = 7534U;

	t3 = (((x13%x14)<=x15)&x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	uint16_t x18 = 39U;
	int16_t x19 = -1;
	static uint64_t x20 = 524LLU;

	t4 = (((x17%x18)<=x19)&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	int64_t x22 = INT64_MAX;
	int8_t x24 = INT8_MAX;

	t5 = (((x21%x22)<=x23)&x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	volatile uint8_t x26 = 97U;
	uint8_t x27 = 1U;
	int16_t x28 = 201;
	int32_t t6 = -6;

	t6 = (((x25%x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = INT64_MAX;
	static uint16_t x30 = 159U;
	static uint8_t x31 = UINT8_MAX;
	volatile uint32_t t7 = 1164445779U;

	t7 = (((x29%x30)<=x31)&x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 76;
	uint32_t x34 = 8U;
	volatile uint8_t x35 = UINT8_MAX;
	int32_t t8 = -2;

	t8 = (((x33%x34)<=x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	volatile int64_t x38 = 5222LL;
	volatile uint16_t x39 = 14U;
	static volatile int32_t t9 = -7191;

	t9 = (((x37%x38)<=x39)&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 458769321163015078LLU;
	uint16_t x42 = 24U;
	static uint8_t x43 = 6U;
	int16_t x44 = INT16_MIN;
	int32_t t10 = 4174;

	t10 = (((x41%x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MAX;
	int32_t x48 = INT32_MAX;
	int32_t t11 = -70473;

	t11 = (((x45%x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x50 = 209;
	uint8_t x51 = UINT8_MAX;
	uint16_t x52 = 491U;
	static volatile int32_t t12 = -254035;

	t12 = (((x49%x50)<=x51)&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = UINT8_MAX;
	int8_t x54 = 1;
	static uint8_t x55 = 33U;
	static volatile int64_t x56 = INT64_MIN;
	volatile int64_t t13 = 3318835146716910LL;

	t13 = (((x53%x54)<=x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 3U;
	int32_t x59 = -1;
	static int32_t x60 = INT32_MIN;
	int32_t t14 = 0;

	t14 = (((x57%x58)<=x59)&x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 29726U;
	int64_t x62 = INT64_MAX;
	int8_t x64 = -1;
	int32_t t15 = 215;

	t15 = (((x61%x62)<=x63)&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MAX;
	static uint8_t x66 = UINT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -1894705;

	t16 = (((x65%x66)<=x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int16_t x72 = 0;
	volatile int32_t t17 = -213;

	t17 = (((x69%x70)<=x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;

	t18 = (((x73%x74)<=x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	static int64_t x78 = -1LL;
	static int8_t x79 = -1;
	int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 940511599;

	t19 = (((x77%x78)<=x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = -1522958;
	int32_t x82 = INT32_MIN;
	int64_t x83 = 1LL;
	int32_t x84 = -1;

	t20 = (((x81%x82)<=x83)&x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	uint32_t x86 = UINT32_MAX;
	int32_t x87 = -1;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -3;

	t21 = (((x85%x86)<=x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -2950;
	int8_t x90 = INT8_MAX;
	int8_t x91 = -48;
	static int32_t t22 = -2;

	t22 = (((x89%x90)<=x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -11647;
	int64_t x94 = -1LL;
	static volatile int32_t t23 = -2;

	t23 = (((x93%x94)<=x95)&x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 13416U;
	int32_t x98 = -1;
	volatile int32_t x99 = INT32_MIN;
	int8_t x100 = -2;

	t24 = (((x97%x98)<=x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int32_t x102 = INT32_MAX;
	volatile int32_t x104 = INT32_MIN;
	int32_t t25 = -6;

	t25 = (((x101%x102)<=x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MAX;
	int16_t x106 = 305;
	volatile uint16_t x107 = 12U;
	int8_t x108 = 0;
	int32_t t26 = 15522795;

	t26 = (((x105%x106)<=x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	uint64_t x111 = 175073120LLU;
	volatile int8_t x112 = INT8_MIN;
	volatile int32_t t27 = -28;

	t27 = (((x109%x110)<=x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	int64_t x114 = -77562067LL;
	static volatile int32_t x115 = -785458;
	volatile int32_t t28 = -33;

	t28 = (((x113%x114)<=x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 15U;
	volatile int16_t x119 = -1;
	int8_t x120 = 26;

	t29 = (((x117%x118)<=x119)&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = 77859632;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MIN;

	t30 = (((x121%x122)<=x123)&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 42026124397204LLU;
	volatile int32_t x126 = -1;
	static uint32_t x127 = 7144U;
	volatile int8_t x128 = 51;
	volatile int32_t t31 = -72659951;

	t31 = (((x125%x126)<=x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = -82625;
	int8_t x134 = INT8_MAX;
	int32_t x135 = -1;
	int8_t x136 = -1;
	volatile int32_t t32 = -2613054;

	t32 = (((x133%x134)<=x135)&x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = INT64_MAX;
	int8_t x138 = -17;

	t33 = (((x137%x138)<=x139)&x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MAX;
	static uint32_t x144 = UINT32_MAX;
	uint32_t t34 = 30929863U;

	t34 = (((x141%x142)<=x143)&x144);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 0U;
	int32_t x146 = INT32_MIN;
	int16_t x148 = -5;

	t35 = (((x145%x146)<=x147)&x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 313;
	uint64_t x150 = UINT64_MAX;
	volatile uint32_t x151 = UINT32_MAX;

	t36 = (((x149%x150)<=x151)&x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x154 = INT8_MAX;
	int32_t x155 = INT32_MAX;
	static volatile int32_t x156 = -154426696;
	volatile int32_t t37 = 874042;

	t37 = (((x153%x154)<=x155)&x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MIN;
	int64_t x159 = INT64_MAX;

	t38 = (((x157%x158)<=x159)&x160);

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = INT64_MIN;
	static int8_t x163 = -1;
	int32_t x164 = INT32_MIN;
	int32_t t39 = 114584825;

	t39 = (((x161%x162)<=x163)&x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	static uint64_t x167 = 318LLU;
	volatile int16_t x168 = 909;
	static volatile int32_t t40 = -7030913;

	t40 = (((x165%x166)<=x167)&x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x169 = 3393LLU;
	int16_t x170 = -2182;
	volatile uint64_t x172 = 97999790LLU;
	volatile uint64_t t41 = 154327791395289LLU;

	t41 = (((x169%x170)<=x171)&x172);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x174 = -1;
	int16_t x175 = -1;

	t42 = (((x173%x174)<=x175)&x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = -62;
	static int8_t x179 = INT8_MIN;
	uint64_t t43 = 129096607LLU;

	t43 = (((x177%x178)<=x179)&x180);

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 513323U;
	int8_t x182 = INT8_MIN;
	uint16_t x183 = 2640U;
	uint64_t x184 = 791902434677LLU;
	static uint64_t t44 = 694145562635LLU;

	t44 = (((x181%x182)<=x183)&x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x186 = 2U;
	volatile uint8_t x187 = 0U;
	int64_t x188 = 913340508977729619LL;
	volatile int64_t t45 = -67075801169LL;

	t45 = (((x185%x186)<=x187)&x188);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 1U;
	uint8_t x190 = 57U;
	uint64_t x192 = 11520183LLU;
	uint64_t t46 = 367532239803472177LLU;

	t46 = (((x189%x190)<=x191)&x192);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -4624390813838700LL;
	static int8_t x195 = -23;
	uint64_t x196 = 52858LLU;
	volatile uint64_t t47 = 405511261425039359LLU;

	t47 = (((x193%x194)<=x195)&x196);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x197 = 2U;
	static uint16_t x198 = 20U;
	uint16_t x199 = 0U;
	int8_t x200 = -1;
	volatile int32_t t48 = 256;

	t48 = (((x197%x198)<=x199)&x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x202 = INT16_MIN;
	int64_t x203 = INT64_MAX;
	int32_t x204 = -1;
	static int32_t t49 = -3496577;

	t49 = (((x201%x202)<=x203)&x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x207 = -4715416LL;
	uint16_t x208 = 2705U;

	t50 = (((x205%x206)<=x207)&x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 3U;
	uint8_t x210 = UINT8_MAX;
	static int8_t x211 = INT8_MAX;
	int64_t x212 = 30350950784LL;
	volatile int64_t t51 = -412LL;

	t51 = (((x209%x210)<=x211)&x212);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	int16_t x214 = 45;
	volatile int16_t x216 = -3350;
	volatile int32_t t52 = -1074610;

	t52 = (((x213%x214)<=x215)&x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = INT64_MIN;
	volatile uint64_t x218 = 3043585077536LLU;
	int64_t x219 = INT64_MIN;
	volatile uint32_t x220 = 31489581U;
	volatile uint32_t t53 = 3U;

	t53 = (((x217%x218)<=x219)&x220);

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 33209714621LLU;
	static uint16_t x222 = 24U;
	int32_t x223 = INT32_MIN;
	static volatile int64_t x224 = INT64_MIN;
	volatile int64_t t54 = -487487LL;

	t54 = (((x221%x222)<=x223)&x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = 2141658037731458848LL;
	int8_t x226 = 1;
	static int32_t x228 = INT32_MAX;
	static volatile int32_t t55 = 1;

	t55 = (((x225%x226)<=x227)&x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = 9U;
	volatile int8_t x230 = INT8_MIN;
	volatile uint16_t x231 = 1U;
	int32_t t56 = -676045550;

	t56 = (((x229%x230)<=x231)&x232);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x236 = INT64_MIN;
	int64_t t57 = 409741721437988956LL;

	t57 = (((x233%x234)<=x235)&x236);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MIN;
	volatile uint32_t x239 = 10685U;
	int8_t x240 = -3;
	volatile int32_t t58 = 28;

	t58 = (((x237%x238)<=x239)&x240);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x241 = 1431;
	uint32_t x242 = 1515806843U;
	uint64_t x243 = UINT64_MAX;
	static int64_t x244 = -1LL;
	int64_t t59 = -128719303LL;

	t59 = (((x241%x242)<=x243)&x244);

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	volatile uint16_t x247 = UINT16_MAX;
	int32_t t60 = -12473;

	t60 = (((x245%x246)<=x247)&x248);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MAX;
	int32_t x252 = -1;
	volatile int32_t t61 = -10765;

	t61 = (((x249%x250)<=x251)&x252);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x254 = 18862242U;
	volatile int64_t x255 = -444304936LL;
	int8_t x256 = INT8_MIN;
	volatile int32_t t62 = -307;

	t62 = (((x253%x254)<=x255)&x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t63 = -23561;

	t63 = (((x257%x258)<=x259)&x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x261 = -1;
	uint32_t x262 = 63182031U;
	int8_t x264 = INT8_MIN;
	volatile int32_t t64 = -2;

	t64 = (((x261%x262)<=x263)&x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x265 = UINT64_MAX;
	static int32_t x266 = INT32_MIN;
	int64_t x267 = 4475230930663724944LL;
	int16_t x268 = -5;
	static int32_t t65 = 14108695;

	t65 = (((x265%x266)<=x267)&x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = -774;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t66 = 172;

	t66 = (((x269%x270)<=x271)&x272);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MAX;
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = 122858LL;
	uint64_t x276 = 6904LLU;

	t67 = (((x273%x274)<=x275)&x276);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	static int16_t x283 = -1;
	volatile int32_t x284 = 71;
	int32_t t68 = -11;

	t68 = (((x281%x282)<=x283)&x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -1;
	volatile uint16_t x287 = UINT16_MAX;
	volatile int64_t t69 = 0LL;

	t69 = (((x285%x286)<=x287)&x288);

	if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x289 = 413U;
	uint8_t x290 = 57U;
	volatile uint8_t x291 = 25U;
	volatile uint16_t x292 = 12U;
	volatile int32_t t70 = 2532647;

	t70 = (((x289%x290)<=x291)&x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x294 = UINT16_MAX;
	int32_t x295 = INT32_MIN;
	static int64_t x296 = INT64_MAX;
	int64_t t71 = -2LL;

	t71 = (((x293%x294)<=x295)&x296);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	int32_t x298 = 1007020427;
	uint16_t x299 = 3546U;
	int8_t x300 = 1;

	t72 = (((x297%x298)<=x299)&x300);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = INT16_MIN;
	static int64_t x302 = 6727480709044966LL;
	int16_t x303 = INT16_MAX;
	int8_t x304 = 0;

	t73 = (((x301%x302)<=x303)&x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -1LL;
	static int64_t x306 = INT64_MIN;
	static int8_t x308 = INT8_MAX;
	int32_t t74 = 0;

	t74 = (((x305%x306)<=x307)&x308);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x311 = INT32_MIN;
	uint8_t x312 = 3U;
	volatile int32_t t75 = 0;

	t75 = (((x309%x310)<=x311)&x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = -1;
	uint16_t x314 = 1U;
	static uint64_t x315 = UINT64_MAX;
	int8_t x316 = INT8_MIN;
	volatile int32_t t76 = -9;

	t76 = (((x313%x314)<=x315)&x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = 0;
	static int8_t x318 = INT8_MIN;
	static volatile int64_t t77 = 405103050223788LL;

	t77 = (((x317%x318)<=x319)&x320);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	static volatile int32_t x322 = INT32_MAX;
	int64_t x323 = 10364582LL;
	volatile int32_t t78 = -320280892;

	t78 = (((x321%x322)<=x323)&x324);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x325 = -6;
	int8_t x326 = 1;
	int8_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;
	static int32_t t79 = -68;

	t79 = (((x325%x326)<=x327)&x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = INT32_MIN;
	int32_t x330 = INT32_MIN;
	uint8_t x331 = 1U;
	int64_t x332 = 237LL;
	volatile int64_t t80 = 85798066116837LL;

	t80 = (((x329%x330)<=x331)&x332);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = INT32_MIN;
	static uint64_t x335 = 13277098LLU;
	volatile int32_t x336 = INT32_MAX;
	int32_t t81 = -335667;

	t81 = (((x333%x334)<=x335)&x336);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x337 = -1LL;
	volatile int64_t x338 = INT64_MIN;
	static volatile int8_t x339 = -1;
	int64_t x340 = -7LL;
	volatile int64_t t82 = -258730403131639373LL;

	t82 = (((x337%x338)<=x339)&x340);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x341 = 520LL;
	static int64_t x342 = INT64_MAX;
	int16_t x343 = -1;
	int16_t x344 = -1;
	static volatile int32_t t83 = 18079065;

	t83 = (((x341%x342)<=x343)&x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x345 = INT16_MIN;
	int8_t x346 = -1;
	static volatile int16_t x347 = INT16_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t84 = -358618481;

	t84 = (((x345%x346)<=x347)&x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x350 = UINT16_MAX;
	volatile uint32_t x351 = 641041688U;
	static uint16_t x352 = UINT16_MAX;
	static int32_t t85 = 960796677;

	t85 = (((x349%x350)<=x351)&x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x354 = -1;
	int32_t x355 = 9;
	int32_t x356 = INT32_MIN;
	volatile int32_t t86 = -101;

	t86 = (((x353%x354)<=x355)&x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 6U;
	int8_t x358 = -1;
	int8_t x359 = -26;
	int8_t x360 = INT8_MAX;
	volatile int32_t t87 = 3819;

	t87 = (((x357%x358)<=x359)&x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = INT32_MIN;
	int32_t x362 = -7;
	uint32_t x363 = 126289U;
	volatile int32_t t88 = -2;

	t88 = (((x361%x362)<=x363)&x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 2883LLU;
	int16_t x366 = -1;
	uint8_t x368 = 11U;
	volatile int32_t t89 = -983;

	t89 = (((x365%x366)<=x367)&x368);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = -1;
	int64_t x370 = -23918488LL;
	uint32_t x372 = 4012U;

	t90 = (((x369%x370)<=x371)&x372);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = 2U;
	int8_t x374 = 7;
	int32_t x376 = -1;
	volatile int32_t t91 = 19639;

	t91 = (((x373%x374)<=x375)&x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -1;
	uint64_t x379 = 6421949932667718LLU;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t92 = -36;

	t92 = (((x377%x378)<=x379)&x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x381 = 11022;
	uint8_t x383 = 0U;
	static volatile uint32_t t93 = 6597185U;

	t93 = (((x381%x382)<=x383)&x384);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x385 = 1LLU;
	int64_t x386 = INT64_MIN;
	uint64_t x387 = 2494445079853495207LLU;
	static int64_t x388 = 1126002460LL;

	t94 = (((x385%x386)<=x387)&x388);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = 3;
	static uint32_t x390 = 14925440U;
	uint32_t x391 = 472325408U;
	int16_t x392 = INT16_MIN;
	int32_t t95 = -273;

	t95 = (((x389%x390)<=x391)&x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x393 = INT16_MIN;
	int64_t x394 = -521404600LL;
	volatile uint16_t x395 = 4430U;

	t96 = (((x393%x394)<=x395)&x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x398 = UINT64_MAX;
	static int16_t x399 = INT16_MIN;
	uint64_t x400 = 49LLU;
	static uint64_t t97 = 5509617147381357325LLU;

	t97 = (((x397%x398)<=x399)&x400);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x402 = -42;
	int32_t t98 = -529309291;

	t98 = (((x401%x402)<=x403)&x404);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x406 = 1979U;
	int32_t x407 = INT32_MIN;
	volatile int16_t x408 = -1;
	int32_t t99 = 4;

	t99 = (((x405%x406)<=x407)&x408);

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

