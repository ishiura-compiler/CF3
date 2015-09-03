#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x5 = UINT32_MAX;
int8_t x13 = INT8_MAX;
int64_t x24 = INT64_MIN;
uint8_t x32 = 9U;
volatile uint64_t t8 = 32562LLU;
int8_t x38 = INT8_MIN;
volatile int32_t t9 = -536734;
volatile int32_t t10 = -1;
volatile uint64_t x45 = 3723986LLU;
int64_t x46 = INT64_MIN;
uint16_t x51 = UINT16_MAX;
uint64_t x56 = UINT64_MAX;
uint64_t x60 = UINT64_MAX;
volatile uint16_t x68 = UINT16_MAX;
static int32_t t17 = -7905414;
int8_t x73 = INT8_MIN;
int16_t x74 = -1;
volatile uint64_t t19 = UINT64_MAX;
static int16_t x81 = -3;
volatile int32_t x82 = -1;
int8_t x90 = INT8_MAX;
uint8_t x94 = 5U;
int32_t x103 = INT32_MIN;
int32_t x109 = 7;
int64_t x113 = 12327680243430LL;
uint8_t x114 = 7U;
static uint32_t t30 = 1U;
int32_t t33 = -396;
static volatile uint8_t x138 = 51U;
static uint16_t x142 = 1U;
int32_t x143 = -405369236;
int16_t x147 = 1;
static volatile uint8_t x149 = UINT8_MAX;
int64_t x150 = -1115187588174282LL;
int32_t x152 = INT32_MAX;
volatile int16_t x155 = INT16_MIN;
volatile uint32_t t38 = 8615U;
int8_t x165 = -10;
uint8_t x168 = 0U;
volatile int32_t t41 = -181228831;
int32_t x169 = -58799631;
int16_t x176 = -1;
int8_t x178 = -49;
int64_t x180 = INT64_MIN;
int8_t x184 = 1;
static int64_t x186 = -1LL;
int32_t x195 = INT32_MAX;
volatile uint8_t x199 = UINT8_MAX;
static int8_t x202 = INT8_MAX;
volatile int64_t x204 = INT64_MIN;
int64_t x209 = INT64_MAX;
volatile int64_t x213 = -3LL;
volatile int64_t x214 = -1LL;
static volatile uint32_t t53 = 2721U;
static volatile int64_t x217 = INT64_MAX;
static int8_t x219 = 1;
int64_t x226 = INT64_MIN;
int64_t x231 = INT64_MAX;
static int64_t x235 = INT64_MIN;
int32_t x237 = -1;
int64_t x239 = INT64_MIN;
int32_t t59 = 45;
int64_t x249 = INT64_MAX;
int16_t x257 = -1836;
volatile int64_t x259 = INT64_MIN;
uint16_t x265 = UINT16_MAX;
volatile uint64_t x270 = 384133LLU;
int8_t x274 = INT8_MAX;
int32_t x276 = -3236886;
volatile int32_t t66 = -3;
int32_t t68 = 4;
static int8_t x287 = INT8_MIN;
volatile int32_t x290 = -15189034;
int32_t t70 = 861347053;
uint16_t x296 = 690U;
volatile int64_t x299 = INT64_MIN;
uint32_t t72 = 532111950U;
uint32_t x310 = UINT32_MAX;
volatile uint8_t x311 = 18U;
int64_t x318 = 1542640989LL;
static volatile int32_t t77 = 5438;
static int16_t x322 = INT16_MIN;
uint8_t x325 = 84U;
int64_t x341 = -37LL;
uint16_t x344 = UINT16_MAX;
volatile int32_t t83 = -17075;
int16_t x348 = -1;
static int32_t t84 = 2;
uint64_t x364 = UINT64_MAX;
int16_t x377 = -1;
static volatile int32_t t93 = 1;
uint32_t x401 = UINT32_MAX;
static volatile uint64_t x403 = 235962354LLU;
int32_t x406 = INT32_MIN;
int8_t x412 = 0;
static int8_t x416 = INT8_MIN;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = -1719139;

	t0 = ((x1<(x2&x3))+x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = UINT32_MAX;
	uint64_t x7 = UINT64_MAX;
	static int32_t x8 = INT32_MIN;
	static int32_t t1 = INT32_MIN;

	t1 = ((x5<(x6&x7))+x8);

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static int64_t x10 = 15940LL;
	static int64_t x11 = INT64_MAX;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = -113719;

	t2 = ((x9<(x10&x11))+x12);

	if (t2 != 65536) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 7636U;
	int16_t x15 = INT16_MIN;
	int32_t x16 = -1;
	static volatile int32_t t3 = -718;

	t3 = ((x13<(x14&x15))+x16);

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int64_t x18 = 1495885808819489422LL;
	volatile int8_t x19 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -9758;

	t4 = ((x17<(x18&x19))+x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = INT64_MAX;
	static volatile uint32_t x23 = 1941922892U;
	int64_t t5 = -22346756LL;

	t5 = ((x21<(x22&x23))+x24);

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 124;
	int64_t x26 = -147LL;
	int16_t x27 = INT16_MIN;
	int32_t x28 = -1;
	static volatile int32_t t6 = -34;

	t6 = ((x25<(x26&x27))+x28);

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -59;
	int32_t x30 = INT32_MIN;
	int16_t x31 = INT16_MAX;
	static int32_t t7 = 0;

	t7 = ((x29<(x30&x31))+x32);

	if (t7 != 10) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	int32_t x34 = 236093;
	uint64_t x35 = 9081588384LLU;
	uint64_t x36 = 16011039406LLU;

	t8 = ((x33<(x34&x35))+x36);

	if (t8 != 16011039406LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	volatile uint8_t x39 = 0U;
	static int16_t x40 = -193;

	t9 = ((x37<(x38&x39))+x40);

	if (t9 != -192) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 186U;
	volatile int32_t x42 = INT32_MAX;
	uint32_t x43 = 927U;
	uint16_t x44 = 5405U;

	t10 = ((x41<(x42&x43))+x44);

	if (t10 != 5406) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = INT8_MIN;
	volatile int64_t x48 = INT64_MIN;
	int64_t t11 = 961072LL;

	t11 = ((x45<(x46&x47))+x48);

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MAX;
	int8_t x52 = INT8_MIN;
	int32_t t12 = 45808012;

	t12 = ((x49<(x50&x51))+x52);

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 474258918639990LLU;
	int64_t x54 = -21067LL;
	int32_t x55 = INT32_MAX;
	uint64_t t13 = UINT64_MAX;

	t13 = ((x53<(x54&x55))+x56);

	if (t13 != UINT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 1U;
	volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = -3;
	volatile uint64_t t14 = 355519LLU;

	t14 = ((x57<(x58&x59))+x60);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 22076LLU;
	volatile int32_t x62 = -5046084;
	int64_t x63 = -237589854802930LL;
	int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 13588;

	t15 = ((x61<(x62&x63))+x64);

	if (t15 != -32767) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	uint8_t x66 = 0U;
	int16_t x67 = 0;
	volatile int32_t t16 = -9743;

	t16 = ((x65<(x66&x67))+x68);

	if (t16 != 65536) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x69 = 39466549776153LLU;
	uint8_t x70 = 3U;
	static volatile int8_t x71 = INT8_MAX;
	int8_t x72 = INT8_MIN;

	t17 = ((x69<(x70&x71))+x72);

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	static volatile int32_t t18 = 6034;

	t18 = ((x73<(x74&x75))+x76);

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MAX;
	int8_t x78 = INT8_MIN;
	static uint32_t x79 = UINT32_MAX;
	static uint64_t x80 = UINT64_MAX;

	t19 = ((x77<(x78&x79))+x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x83 = INT16_MIN;
	volatile int16_t x84 = INT16_MIN;
	volatile int32_t t20 = 238;

	t20 = ((x81<(x82&x83))+x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 0U;
	uint8_t x86 = 0U;
	volatile int64_t x87 = -1267728023177LL;
	static int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 9;

	t21 = ((x85<(x86&x87))+x88);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	uint8_t x91 = 10U;
	volatile int64_t x92 = 7611388274548565LL;
	volatile int64_t t22 = 228LL;

	t22 = ((x89<(x90&x91))+x92);

	if (t22 != 7611388274548566LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x95 = INT32_MIN;
	int64_t x96 = INT64_MAX;
	static int64_t t23 = INT64_MAX;

	t23 = ((x93<(x94&x95))+x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x97 = INT64_MIN;
	int32_t x98 = -1;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 26413829817412LLU;
	uint64_t t24 = 365238LLU;

	t24 = ((x97<(x98&x99))+x100);

	if (t24 != 26413829817413LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	volatile int32_t x104 = 13972;
	int32_t t25 = 6358933;

	t25 = ((x101<(x102&x103))+x104);

	if (t25 != 13973) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -1;
	static volatile int8_t x106 = INT8_MIN;
	uint8_t x107 = 12U;
	uint8_t x108 = 38U;
	volatile int32_t t26 = -1;

	t26 = ((x105<(x106&x107))+x108);

	if (t26 != 39) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x110 = 2705179636860725510LLU;
	volatile int64_t x111 = INT64_MAX;
	volatile uint32_t x112 = UINT32_MAX;
	uint32_t t27 = 3U;

	t27 = ((x109<(x110&x111))+x112);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x115 = INT16_MIN;
	static volatile int64_t x116 = 294793481842780LL;
	volatile int64_t t28 = 823632688LL;

	t28 = ((x113<(x114&x115))+x116);

	if (t28 != 294793481842780LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = UINT8_MAX;
	int32_t x118 = 1;
	static int64_t x119 = 921930253909684504LL;
	int64_t x120 = -1LL;
	volatile int64_t t29 = 1112586LL;

	t29 = ((x117<(x118&x119))+x120);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MIN;
	static int64_t x122 = -1LL;
	volatile uint8_t x123 = 31U;
	uint32_t x124 = 136948U;

	t30 = ((x121<(x122&x123))+x124);

	if (t30 != 136949U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	volatile int64_t x126 = -1LL;
	int32_t x127 = INT32_MIN;
	uint64_t x128 = 3575LLU;
	uint64_t t31 = 10261552371LLU;

	t31 = ((x125<(x126&x127))+x128);

	if (t31 != 3575LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	int16_t x130 = INT16_MAX;
	static volatile int16_t x131 = INT16_MIN;
	int8_t x132 = INT8_MIN;
	static int32_t t32 = 170;

	t32 = ((x129<(x130&x131))+x132);

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	int32_t x136 = -1;

	t33 = ((x133<(x134&x135))+x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = 0;
	int32_t x139 = INT32_MAX;
	int32_t x140 = 4959270;
	int32_t t34 = -28617;

	t34 = ((x137<(x138&x139))+x140);

	if (t34 != 4959271) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 3372398U;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 520811120;

	t35 = ((x141<(x142&x143))+x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x146 = UINT8_MAX;
	int8_t x148 = -1;
	volatile int32_t t36 = -917;

	t36 = ((x145<(x146&x147))+x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x151 = 2;
	volatile int32_t t37 = INT32_MAX;

	t37 = ((x149<(x150&x151))+x152);

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -70;
	int8_t x154 = 2;
	uint32_t x156 = UINT32_MAX;

	t38 = ((x153<(x154&x155))+x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = INT8_MIN;
	int8_t x158 = -1;
	int32_t x159 = INT32_MAX;
	volatile int32_t x160 = INT32_MIN;
	volatile int32_t t39 = -1;

	t39 = ((x157<(x158&x159))+x160);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	int8_t x162 = 0;
	int32_t x163 = 0;
	static int16_t x164 = 5618;
	static volatile int32_t t40 = -406519;

	t40 = ((x161<(x162&x163))+x164);

	if (t40 != 5619) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MAX;
	volatile uint16_t x167 = 4193U;

	t41 = ((x165<(x166&x167))+x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	uint8_t x171 = UINT8_MAX;
	int64_t x172 = 85413243280989394LL;
	int64_t t42 = -522151325151512LL;

	t42 = ((x169<(x170&x171))+x172);

	if (t42 != 85413243280989395LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = UINT16_MAX;
	volatile int64_t x174 = -752131101696527LL;
	int8_t x175 = -1;
	volatile int32_t t43 = 17;

	t43 = ((x173<(x174&x175))+x176);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -13107685686LL;
	static int8_t x179 = -1;
	int64_t t44 = -460LL;

	t44 = ((x177<(x178&x179))+x180);

	if (t44 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 76651LLU;
	volatile int8_t x182 = -1;
	int8_t x183 = INT8_MAX;
	int32_t t45 = 0;

	t45 = ((x181<(x182&x183))+x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 21U;
	int8_t x187 = 18;
	static int32_t x188 = -1;
	int32_t t46 = 70790;

	t46 = ((x185<(x186&x187))+x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	volatile int16_t x190 = INT16_MAX;
	int32_t x191 = INT32_MIN;
	static volatile int16_t x192 = -1;
	int32_t t47 = -7537;

	t47 = ((x189<(x190&x191))+x192);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	int32_t x194 = -1;
	uint32_t x196 = 419891976U;
	uint32_t t48 = 32076444U;

	t48 = ((x193<(x194&x195))+x196);

	if (t48 != 419891977U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 1965337469LLU;
	int32_t x198 = INT32_MAX;
	int8_t x200 = INT8_MAX;
	int32_t t49 = 600526009;

	t49 = ((x197<(x198&x199))+x200);

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int64_t x203 = INT64_MAX;
	static int64_t t50 = -137320915805LL;

	t50 = ((x201<(x202&x203))+x204);

	if (t50 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 7U;
	uint8_t x206 = 18U;
	uint16_t x207 = 4681U;
	uint64_t x208 = 7505299848LLU;
	volatile uint64_t t51 = 118137378094LLU;

	t51 = ((x205<(x206&x207))+x208);

	if (t51 != 7505299848LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x210 = INT32_MIN;
	int8_t x211 = -1;
	volatile int32_t x212 = INT32_MIN;
	static int32_t t52 = INT32_MIN;

	t52 = ((x209<(x210&x211))+x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x215 = -6537;
	uint32_t x216 = 7359646U;

	t53 = ((x213<(x214&x215))+x216);

	if (t53 != 7359646U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x218 = INT8_MAX;
	uint8_t x220 = 38U;
	volatile int32_t t54 = 25;

	t54 = ((x217<(x218&x219))+x220);

	if (t54 != 38) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = 4;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = INT8_MIN;
	static int32_t t55 = 546098;

	t55 = ((x225<(x226&x227))+x228);

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x230 = 14747086396272565LLU;
	int64_t x232 = -338348410LL;
	int64_t t56 = -1LL;

	t56 = ((x229<(x230&x231))+x232);

	if (t56 != -338348410LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = 0;
	int32_t x234 = 30;
	static int64_t x236 = 457631448528LL;
	int64_t t57 = 15LL;

	t57 = ((x233<(x234&x235))+x236);

	if (t57 != 457631448528LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x238 = UINT64_MAX;
	int8_t x240 = -20;
	volatile int32_t t58 = -9135955;

	t58 = ((x237<(x238&x239))+x240);

	if (t58 != -20) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MIN;
	static int16_t x242 = 361;
	volatile uint32_t x243 = 369036U;
	volatile int32_t x244 = -75;

	t59 = ((x241<(x242&x243))+x244);

	if (t59 != -75) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t60 = -82487327;

	t60 = ((x249<(x250&x251))+x252);

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MAX;
	volatile uint8_t x255 = 0U;
	volatile uint32_t x256 = 1046U;
	volatile uint32_t t61 = 207U;

	t61 = ((x253<(x254&x255))+x256);

	if (t61 != 1047U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x258 = INT8_MIN;
	uint64_t x260 = 64962371973017260LLU;
	volatile uint64_t t62 = 4088LLU;

	t62 = ((x257<(x258&x259))+x260);

	if (t62 != 64962371973017260LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = -1692194;
	uint16_t x262 = 23950U;
	uint32_t x263 = 0U;
	static uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = -1;

	t63 = ((x261<(x262&x263))+x264);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x266 = 2;
	static uint8_t x267 = 21U;
	uint32_t x268 = 23U;
	uint32_t t64 = 20583U;

	t64 = ((x265<(x266&x267))+x268);

	if (t64 != 23U) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x269 = INT8_MAX;
	volatile int8_t x271 = 58;
	int32_t x272 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = ((x269<(x270&x271))+x272);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = UINT16_MAX;
	uint16_t x275 = 110U;

	t66 = ((x273<(x274&x275))+x276);

	if (t66 != -3236886) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	int16_t x278 = 1;
	int32_t x279 = INT32_MAX;
	static volatile int8_t x280 = INT8_MIN;
	volatile int32_t t67 = 50202;

	t67 = ((x277<(x278&x279))+x280);

	if (t67 != -127) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = -1LL;
	uint32_t x282 = 5U;
	int64_t x283 = INT64_MAX;
	volatile uint16_t x284 = 40U;

	t68 = ((x281<(x282&x283))+x284);

	if (t68 != 41) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = 6;
	int32_t x288 = 159;
	int32_t t69 = -51;

	t69 = ((x285<(x286&x287))+x288);

	if (t69 != 160) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = INT16_MAX;
	static int32_t x291 = -1;
	static int16_t x292 = -1060;

	t70 = ((x289<(x290&x291))+x292);

	if (t70 != -1060) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x293 = INT64_MAX;
	static int8_t x294 = INT8_MIN;
	uint32_t x295 = 802U;
	volatile int32_t t71 = 26;

	t71 = ((x293<(x294&x295))+x296);

	if (t71 != 690) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	static int32_t x298 = INT32_MAX;
	volatile uint32_t x300 = 2006U;

	t72 = ((x297<(x298&x299))+x300);

	if (t72 != 2007U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int8_t x303 = -3;
	volatile int32_t x304 = 16228;
	volatile int32_t t73 = -22;

	t73 = ((x301<(x302&x303))+x304);

	if (t73 != 16228) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x305 = -22;
	static int8_t x306 = 2;
	int64_t x307 = INT64_MIN;
	volatile uint64_t x308 = 1567086692922LLU;
	uint64_t t74 = 1411160189928LLU;

	t74 = ((x305<(x306&x307))+x308);

	if (t74 != 1567086692923LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 67LLU;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = ((x309<(x310&x311))+x312);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = 1242558319067421LL;
	int8_t x314 = INT8_MIN;
	volatile int64_t x315 = 350037151775935LL;
	volatile int8_t x316 = INT8_MIN;
	volatile int32_t t76 = 0;

	t76 = ((x313<(x314&x315))+x316);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x317 = -14875;
	int8_t x319 = 23;
	uint16_t x320 = UINT16_MAX;

	t77 = ((x317<(x318&x319))+x320);

	if (t77 != 65536) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x321 = 0U;
	int32_t x323 = INT32_MAX;
	uint32_t x324 = UINT32_MAX;
	uint32_t t78 = 155826U;

	t78 = ((x321<(x322&x323))+x324);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	int16_t x328 = INT16_MIN;
	volatile int32_t t79 = 22016862;

	t79 = ((x325<(x326&x327))+x328);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x330 = 25U;
	static int64_t x331 = INT64_MIN;
	volatile int64_t x332 = -106554326995452589LL;
	static int64_t t80 = 13LL;

	t80 = ((x329<(x330&x331))+x332);

	if (t80 != -106554326995452588LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = 48;
	int32_t x334 = INT32_MIN;
	int64_t x335 = 3260671487809134LL;
	static uint16_t x336 = 89U;
	volatile int32_t t81 = 0;

	t81 = ((x333<(x334&x335))+x336);

	if (t81 != 90) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MAX;
	static uint32_t x338 = 6506U;
	static int64_t x339 = INT64_MIN;
	uint64_t x340 = 97589774841379904LLU;
	volatile uint64_t t82 = 4LLU;

	t82 = ((x337<(x338&x339))+x340);

	if (t82 != 97589774841379904LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x342 = 11U;
	int64_t x343 = INT64_MIN;

	t83 = ((x341<(x342&x343))+x344);

	if (t83 != 65536) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MIN;
	int8_t x346 = INT8_MAX;
	volatile uint16_t x347 = 22831U;

	t84 = ((x345<(x346&x347))+x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x349 = 0;
	volatile int8_t x350 = -1;
	int64_t x351 = 1847412367741224708LL;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t85 = -380;

	t85 = ((x349<(x350&x351))+x352);

	if (t85 != 256) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x357 = 1LL;
	int32_t x358 = 39306;
	static int32_t x359 = 62227;
	volatile int32_t x360 = 1;
	volatile int32_t t86 = 1630365;

	t86 = ((x357<(x358&x359))+x360);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x361 = 10520812473508727LLU;
	int16_t x362 = -4702;
	volatile int32_t x363 = INT32_MIN;
	uint64_t t87 = 1155915199919578LLU;

	t87 = ((x361<(x362&x363))+x364);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x365 = 303860873LLU;
	int32_t x366 = -1;
	static uint8_t x367 = 1U;
	volatile int64_t x368 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = ((x365<(x366&x367))+x368);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x369 = 234;
	int32_t x370 = -119528210;
	static int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MAX;
	int32_t t89 = INT32_MAX;

	t89 = ((x369<(x370&x371))+x372);

	if (t89 != INT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x373 = INT64_MAX;
	int32_t x374 = 449868474;
	static volatile int8_t x375 = -8;
	int16_t x376 = -1;
	static volatile int32_t t90 = 3380865;

	t90 = ((x373<(x374&x375))+x376);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x378 = 0;
	static int64_t x379 = -1LL;
	uint32_t x380 = 177132221U;
	uint32_t t91 = 12564U;

	t91 = ((x377<(x378&x379))+x380);

	if (t91 != 177132222U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x381 = 39;
	int32_t x382 = -28;
	uint64_t x383 = 2016138957803396LLU;
	static int64_t x384 = INT64_MIN;
	int64_t t92 = 30273729LL;

	t92 = ((x381<(x382&x383))+x384);

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = -1LL;
	int64_t x386 = INT64_MIN;
	volatile uint8_t x387 = UINT8_MAX;
	int32_t x388 = 0;

	t93 = ((x385<(x386&x387))+x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x389 = INT8_MAX;
	int8_t x390 = INT8_MIN;
	volatile int8_t x391 = -5;
	int32_t x392 = -1;
	volatile int32_t t94 = -2676890;

	t94 = ((x389<(x390&x391))+x392);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = 131526326826425031LL;
	volatile int64_t x398 = -1LL;
	volatile int32_t x399 = 4;
	int64_t x400 = INT64_MIN;
	int64_t t95 = INT64_MIN;

	t95 = ((x397<(x398&x399))+x400);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x402 = 213U;
	volatile int16_t x404 = -1;
	volatile int32_t t96 = 517;

	t96 = ((x401<(x402&x403))+x404);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = UINT32_MAX;
	static int32_t x407 = 370212655;
	uint16_t x408 = UINT16_MAX;
	int32_t t97 = 70691;

	t97 = ((x405<(x406&x407))+x408);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x409 = -27;
	uint16_t x410 = 133U;
	int8_t x411 = 0;
	int32_t t98 = 169671421;

	t98 = ((x409<(x410&x411))+x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = -1LL;
	volatile int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MIN;
	volatile int32_t t99 = 40101987;

	t99 = ((x413<(x414&x415))+x416);

	if (t99 != -128) { NG(); } else { ; }
	
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

