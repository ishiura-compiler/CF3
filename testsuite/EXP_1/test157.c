#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 4374150265766LLU;
volatile int64_t x8 = 476748LL;
int16_t x16 = INT16_MAX;
volatile int64_t t3 = 406206304083LL;
volatile int64_t x20 = INT64_MAX;
static int8_t x22 = INT8_MIN;
int64_t x24 = -1LL;
uint64_t x28 = 4302LLU;
static int8_t x35 = INT8_MAX;
int64_t t8 = 34608862475LL;
volatile int8_t x51 = 0;
uint8_t x61 = 0U;
volatile int16_t x69 = 2;
int64_t t14 = 228505750LL;
uint32_t x77 = 12U;
uint32_t t16 = 53497U;
static int64_t x81 = -4079185870LL;
static volatile int32_t x84 = 12154;
volatile int32_t x91 = -1;
volatile int32_t x92 = -1391273;
static int64_t t19 = -1019061LL;
int64_t x97 = INT64_MAX;
int32_t x99 = INT32_MIN;
uint8_t x104 = UINT8_MAX;
uint32_t x106 = 7687U;
volatile uint64_t x109 = 3912LLU;
int64_t x114 = -3477475067068487LL;
volatile int64_t t24 = 1980522494545457LL;
int32_t x118 = -1;
int8_t x119 = INT8_MIN;
volatile int16_t x122 = -1;
volatile int32_t t26 = -1;
volatile uint32_t x134 = UINT32_MAX;
static int64_t x135 = 56844096LL;
int64_t t28 = 3593948527110814165LL;
int16_t x151 = INT16_MIN;
uint64_t t32 = 272662035355LLU;
int16_t x158 = INT16_MAX;
static int8_t x161 = 0;
volatile uint64_t t36 = 58LLU;
int32_t x178 = -214925;
uint32_t t38 = 262661927U;
uint64_t t39 = 224273612244811LLU;
volatile uint64_t t40 = 81588701082616594LLU;
volatile int16_t x190 = INT16_MAX;
volatile int32_t t41 = -185690811;
int64_t x194 = -1LL;
uint64_t x200 = 9643616358038LLU;
static int8_t x202 = INT8_MAX;
int64_t x207 = 7665LL;
int64_t x208 = INT64_MIN;
int8_t x210 = 0;
int16_t x211 = 0;
int64_t x212 = INT64_MIN;
int16_t x213 = INT16_MIN;
uint32_t t47 = 241570U;
volatile uint64_t t48 = 0LLU;
int8_t x222 = -1;
int16_t x227 = INT16_MAX;
static int8_t x229 = -10;
int32_t x230 = -2;
static uint32_t x231 = 120550U;
volatile int32_t x234 = -1;
int32_t x236 = INT32_MIN;
int64_t x237 = INT64_MIN;
int8_t x240 = INT8_MAX;
int16_t x242 = INT16_MAX;
volatile int64_t t55 = -84964LL;
volatile uint8_t x253 = 5U;
int16_t x256 = -1;
int64_t x258 = INT64_MIN;
static volatile int64_t x260 = 160716LL;
static int8_t x262 = INT8_MAX;
uint8_t x263 = UINT8_MAX;
int16_t x267 = INT16_MIN;
static volatile uint64_t t60 = 4602302115281LLU;
int64_t x278 = -1LL;
int64_t x280 = 559546638378548LL;
int16_t x281 = -1;
uint64_t t62 = 7615876835950LLU;
static int8_t x288 = -12;
int32_t x290 = INT32_MAX;
static int16_t x291 = -1;
uint16_t x292 = 143U;
int8_t x301 = INT8_MIN;
int64_t x312 = INT64_MIN;
int32_t x319 = INT32_MIN;
volatile int64_t x324 = 379625244251466LL;
int16_t x325 = -19;
volatile uint64_t t72 = 30802160853LLU;
int16_t x338 = INT16_MAX;
int32_t x339 = INT32_MIN;
volatile int32_t x342 = 69763;
int8_t x349 = INT8_MAX;
int32_t x352 = INT32_MIN;
int8_t x359 = -3;
static int64_t t77 = -1LL;
uint32_t x388 = 0U;
volatile uint64_t t87 = 1665008435526LLU;
volatile int32_t x406 = INT32_MIN;
uint32_t x418 = 332214176U;
int16_t x429 = 10;
int64_t x431 = -1LL;
uint8_t x435 = UINT8_MAX;
uint16_t x441 = 1U;
volatile int8_t x444 = -3;
static volatile int64_t t96 = -1LL;
int16_t x451 = -1;
uint8_t x458 = 79U;
uint64_t x459 = UINT64_MAX;
volatile int32_t x460 = 0;


void f0(void) {
	static int64_t x1 = -261270897LL;
	uint64_t x2 = 9381380LLU;
	int8_t x3 = -1;
	volatile int32_t x4 = INT32_MIN;

	t0 = (((x1+x2)^x3)+x4);

	if (t0 != 18446744071813957484LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 21U;
	uint16_t x6 = 3174U;
	int16_t x7 = -2351;
	volatile int64_t t1 = -3LL;

	t1 = (((x5+x6)^x7)+x8);

	if (t1 != 475382LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = 45U;
	static volatile int16_t x11 = INT16_MIN;
	uint16_t x12 = 418U;
	uint32_t t2 = 22683428U;

	t2 = (((x9+x10)^x11)+x12);

	if (t2 != 33103U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = -1LL;
	int32_t x15 = 31;

	t3 = (((x13+x14)^x15)+x16);

	if (t3 != 32607LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	int8_t x18 = 3;
	uint64_t x19 = 18813LLU;
	volatile uint64_t t4 = 4422616LLU;

	t4 = (((x17+x18)^x19)+x20);

	if (t4 != 9223372036854761853LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int16_t x23 = -345;
	volatile int64_t t5 = 5524662937491614LL;

	t5 = (((x21+x22)^x23)+x24);

	if (t5 != 422LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 51;
	int8_t x26 = 1;
	int8_t x27 = INT8_MAX;
	volatile uint64_t t6 = 295530866389163443LLU;

	t6 = (((x25+x26)^x27)+x28);

	if (t6 != 4377LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = INT64_MIN;
	int16_t x31 = 189;
	volatile uint32_t x32 = UINT32_MAX;
	volatile int64_t t7 = -1LL;

	t7 = (((x29+x30)^x31)+x32);

	if (t7 != -9223372032559808319LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 98;
	int64_t x34 = INT64_MIN;
	volatile int64_t x36 = 410581135025842431LL;

	t8 = (((x33+x34)^x35)+x36);

	if (t8 != -8812790901828933348LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 8U;
	static int16_t x38 = -24;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = 0U;
	int32_t t9 = 165312;

	t9 = (((x37+x38)^x39)+x40);

	if (t9 != 32752) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 39U;
	static int16_t x50 = -1;
	int8_t x52 = 1;
	volatile int32_t t10 = -16545041;

	t10 = (((x49+x50)^x51)+x52);

	if (t10 != 39) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = INT8_MIN;
	int16_t x55 = INT16_MIN;
	uint64_t x56 = 7393534718LLU;
	volatile uint64_t t11 = 464980973687LLU;

	t11 = (((x53+x54)^x55)+x56);

	if (t11 != 7393600126LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 621791;
	volatile uint16_t x58 = 29U;
	static int32_t x59 = INT32_MIN;
	int16_t x60 = -1034;
	int32_t t12 = -1;

	t12 = (((x57+x58)^x59)+x60);

	if (t12 != -2146862862) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MAX;
	int8_t x64 = -1;
	static int32_t t13 = 476;

	t13 = (((x61+x62)^x63)+x64);

	if (t13 != -2147450882) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -1LL;

	t14 = (((x69+x70)^x71)+x72);

	if (t14 != 32641LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x73 = INT8_MIN;
	int8_t x74 = 7;
	static int16_t x75 = -15991;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t15 = 12404777;

	t15 = (((x73+x74)^x75)+x76);

	if (t15 != 16141) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x78 = -1;
	static uint8_t x79 = UINT8_MAX;
	uint32_t x80 = 162U;

	t16 = (((x77+x78)^x79)+x80);

	if (t16 != 406U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x82 = INT16_MAX;
	volatile int64_t x83 = -1LL;
	static int64_t t17 = -1LL;

	t17 = (((x81+x82)^x83)+x84);

	if (t17 != 4079165256LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x89 = 680U;
	int32_t x90 = INT32_MIN;
	static int32_t t18 = 655;

	t18 = (((x89+x90)^x91)+x92);

	if (t18 != 2146091694) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x93 = 15U;
	int16_t x94 = -1;
	uint8_t x95 = 69U;
	int64_t x96 = INT64_MIN;

	t19 = (((x93+x94)^x95)+x96);

	if (t19 != -9223372036854775733LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x98 = INT8_MIN;
	static int16_t x100 = -4912;
	volatile int64_t t20 = 1556695LL;

	t20 = (((x97+x98)^x99)+x100);

	if (t20 != -9223372034707297201LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MAX;
	static volatile int8_t x102 = INT8_MIN;
	volatile int8_t x103 = INT8_MIN;
	volatile int64_t t21 = -149075233381050LL;

	t21 = (((x101+x102)^x103)+x104);

	if (t21 != -9223372036854775298LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x105 = INT32_MIN;
	int8_t x107 = INT8_MAX;
	uint16_t x108 = 13U;
	volatile uint32_t t22 = 668033864U;

	t22 = (((x105+x106)^x107)+x108);

	if (t22 != 2147491461U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = -1LL;
	uint8_t x111 = 91U;
	volatile int32_t x112 = INT32_MAX;
	volatile uint64_t t23 = 19981222LLU;

	t23 = (((x109+x110)^x111)+x112);

	if (t23 != 2147487515LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x113 = UINT8_MAX;
	int8_t x115 = -5;
	int64_t x116 = 204198LL;

	t24 = (((x113+x114)^x115)+x116);

	if (t24 != 3477475067272425LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = INT16_MAX;
	int16_t x120 = 187;
	volatile int32_t t25 = -1791;

	t25 = (((x117+x118)^x119)+x120);

	if (t25 != -32455) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x121 = UINT16_MAX;
	volatile int16_t x123 = -1;
	int8_t x124 = INT8_MIN;

	t26 = (((x121+x122)^x123)+x124);

	if (t26 != -65663) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x125 = 0U;
	static uint16_t x126 = 6U;
	volatile int64_t x127 = 274LL;
	uint32_t x128 = 57U;
	static volatile int64_t t27 = -14596775715LL;

	t27 = (((x125+x126)^x127)+x128);

	if (t27 != 333LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = 14U;
	uint8_t x136 = 15U;

	t28 = (((x133+x134)^x135)+x136);

	if (t28 != 56844124LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -5;
	int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	int32_t x140 = -434100539;
	static int64_t t29 = 58LL;

	t29 = (((x137+x138)^x139)+x140);

	if (t29 != 9223372036420675136LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MIN;
	volatile uint32_t x142 = UINT32_MAX;
	uint16_t x143 = 702U;
	uint16_t x144 = 12U;
	volatile int64_t t30 = 1526037123246691217LL;

	t30 = (((x141+x142)^x143)+x144);

	if (t30 != -9223372032559809203LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x145 = 13097U;
	static volatile int64_t x146 = -1LL;
	int8_t x147 = INT8_MAX;
	static int8_t x148 = 0;
	int64_t t31 = -258715223LL;

	t31 = (((x145+x146)^x147)+x148);

	if (t31 != 13143LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x149 = UINT32_MAX;
	volatile uint16_t x150 = 3054U;
	uint64_t x152 = UINT64_MAX;

	t32 = (((x149+x150)^x151)+x152);

	if (t32 != 4294937580LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 52701019LLU;
	static int64_t x159 = -169975LL;
	int64_t x160 = -1LL;
	volatile uint64_t t33 = 44734LLU;

	t33 = (((x157+x158)^x159)+x160);

	if (t33 != 18446744073656717138LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x162 = 4179820U;
	static int8_t x163 = INT8_MIN;
	uint64_t x164 = 8301035317028LLU;
	volatile uint64_t t34 = 25998326LLU;

	t34 = (((x161+x162)^x163)+x164);

	if (t34 != 8305326104592LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x165 = -6;
	int32_t x166 = INT32_MAX;
	int32_t x167 = INT32_MAX;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t35 = 403110;

	t35 = (((x165+x166)^x167)+x168);

	if (t35 != 32773) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = -1;
	static volatile uint64_t x170 = 601LLU;
	uint8_t x171 = 64U;
	static volatile int16_t x172 = INT16_MIN;

	t36 = (((x169+x170)^x171)+x172);

	if (t36 != 18446744073709519384LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 223628134U;
	static int64_t x174 = INT64_MIN;
	uint16_t x175 = 5U;
	int64_t x176 = -52189LL;
	static int64_t t37 = -7274354078121LL;

	t37 = (((x173+x174)^x175)+x176);

	if (t37 != -9223372036631199866LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x177 = UINT32_MAX;
	volatile int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;

	t38 = (((x177+x178)^x179)+x180);

	if (t38 != 214924U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint64_t x181 = 795241956642LLU;
	int16_t x182 = -13990;
	static int16_t x183 = 2194;
	int8_t x184 = INT8_MIN;

	t39 = (((x181+x182)^x183)+x184);

	if (t39 != 795241940590LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = 1500421LLU;
	static int8_t x187 = INT8_MIN;
	uint64_t x188 = 6LLU;

	t40 = (((x185+x186)^x187)+x188);

	if (t40 != 9223372036853275275LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = INT16_MIN;
	volatile int16_t x191 = INT16_MIN;
	int16_t x192 = -1;

	t41 = (((x189+x190)^x191)+x192);

	if (t41 != 32766) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = 65U;
	uint16_t x195 = UINT16_MAX;
	volatile int32_t x196 = INT32_MAX;
	static int64_t t42 = 497194477528LL;

	t42 = (((x193+x194)^x195)+x196);

	if (t42 != 2147549118LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 2LLU;
	uint16_t x198 = 48U;
	int32_t x199 = -127;
	uint64_t t43 = 55LLU;

	t43 = (((x197+x198)^x199)+x200);

	if (t43 != 9643616357961LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = INT32_MIN;
	int32_t x203 = INT32_MIN;
	uint8_t x204 = UINT8_MAX;
	int32_t t44 = -500768;

	t44 = (((x201+x202)^x203)+x204);

	if (t44 != 382) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MAX;
	int8_t x206 = -1;
	volatile int64_t t45 = 102002LL;

	t45 = (((x205+x206)^x207)+x208);

	if (t45 != -9223372034707299825LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = 7U;
	volatile int64_t t46 = -4148950701LL;

	t46 = (((x209+x210)^x211)+x212);

	if (t46 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x214 = 2;
	static uint32_t x215 = 1U;
	uint8_t x216 = 49U;

	t47 = (((x213+x214)^x215)+x216);

	if (t47 != 4294934580U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = 4U;
	static uint64_t x218 = 158293LLU;
	volatile int32_t x219 = INT32_MIN;
	uint64_t x220 = 175738057592LLU;

	t48 = (((x217+x218)^x219)+x220);

	if (t48 != 173590732241LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x221 = 463558U;
	int64_t x223 = -32312429126213619LL;
	volatile int16_t x224 = INT16_MAX;
	volatile int64_t t49 = 169583498118LL;

	t49 = (((x221+x222)^x223)+x224);

	if (t49 != -32312429125979449LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x225 = UINT16_MAX;
	int32_t x226 = -28259;
	int8_t x228 = INT8_MIN;
	int32_t t50 = 60836;

	t50 = (((x225+x226)^x227)+x228);

	if (t50 != 60899) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x232 = 1824264LL;
	volatile int64_t t51 = 262397195946LL;

	t51 = (((x229+x230)^x231)+x232);

	if (t51 != 4296671002LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x233 = UINT16_MAX;
	int64_t x235 = -889420086LL;
	volatile int64_t t52 = 17152749825LL;

	t52 = (((x233+x234)^x235)+x236);

	if (t52 != -3036907212LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x238 = 4175664U;
	int16_t x239 = -11;
	static volatile int64_t t53 = 58LL;

	t53 = (((x237+x238)^x239)+x240);

	if (t53 != 9223372036850600260LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MIN;
	static int8_t x243 = -27;
	int32_t x244 = -1;
	int32_t t54 = 1;

	t54 = (((x241+x242)^x243)+x244);

	if (t54 != 2147450905) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = INT8_MAX;
	static int64_t x247 = INT64_MAX;
	uint16_t x248 = 16525U;

	t55 = (((x245+x246)^x247)+x248);

	if (t55 != 16397LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = INT64_MIN;
	int16_t x255 = -1916;
	volatile int64_t t56 = -3843578184918LL;

	t56 = (((x253+x254)^x255)+x256);

	if (t56 != 9223372036854773888LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x257 = 48U;
	int16_t x259 = INT16_MAX;
	volatile int64_t t57 = 227434LL;

	t57 = (((x257+x258)^x259)+x260);

	if (t57 != -9223372036854582373LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x261 = 6U;
	int64_t x264 = -573419LL;
	int64_t t58 = 16183826030LL;

	t58 = (((x261+x262)^x263)+x264);

	if (t58 != -573297LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MIN;
	static int16_t x266 = INT16_MAX;
	static uint8_t x268 = 1U;
	int32_t t59 = -1447450;

	t59 = (((x265+x266)^x267)+x268);

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = UINT16_MAX;
	uint64_t x274 = 71263983735379LLU;
	volatile uint8_t x275 = 32U;
	uint16_t x276 = 3U;

	t60 = (((x273+x274)^x275)+x276);

	if (t60 != 71263983800949LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = -6093LL;
	uint32_t x279 = 95385903U;
	static volatile int64_t t61 = -72324980927363814LL;

	t61 = (((x277+x278)^x279)+x280);

	if (t61 != 559546542995281LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x282 = 110185357953LLU;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;

	t62 = (((x281+x282)^x283)+x284);

	if (t62 != 18446743963524178559LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = 1841U;
	int32_t x286 = 16;
	int64_t x287 = -31LL;
	int64_t t63 = 112876LL;

	t63 = (((x285+x286)^x287)+x288);

	if (t63 != -1900LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = 0;
	int32_t t64 = -482;

	t64 = (((x289+x290)^x291)+x292);

	if (t64 != -2147483505) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MIN;
	static uint32_t x295 = 282038508U;
	int32_t x296 = 15447;
	volatile uint32_t t65 = 76U;

	t65 = (((x293+x294)^x295)+x296);

	if (t65 != 4012944234U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = INT32_MAX;
	int16_t x298 = INT16_MIN;
	static int8_t x299 = INT8_MIN;
	static int32_t x300 = INT32_MAX;
	volatile int32_t t66 = 7;

	t66 = (((x297+x298)^x299)+x300);

	if (t66 != 32894) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x302 = UINT64_MAX;
	int32_t x303 = 685;
	int8_t x304 = INT8_MIN;
	volatile uint64_t t67 = 1198931440714LLU;

	t67 = (((x301+x302)^x303)+x304);

	if (t67 != 18446744073709550930LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = -1;
	uint64_t x306 = 260462143LLU;
	uint8_t x307 = UINT8_MAX;
	static int32_t x308 = INT32_MIN;
	uint64_t t68 = 110LLU;

	t68 = (((x305+x306)^x307)+x308);

	if (t68 != 18446744071822530241LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = INT32_MIN;
	int16_t x310 = 90;
	static volatile uint32_t x311 = 251654U;
	volatile int64_t t69 = 345459744923LL;

	t69 = (((x309+x310)^x311)+x312);

	if (t69 != -9223372034707040420LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x317 = 3769;
	uint64_t x318 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	uint64_t t70 = 58016LLU;

	t70 = (((x317+x318)^x319)+x320);

	if (t70 != 18446744071562071608LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x321 = 374400U;
	int16_t x322 = 4;
	static int64_t x323 = INT64_MIN;
	int64_t t71 = 156LL;

	t71 = (((x321+x322)^x323)+x324);

	if (t71 != -9222992411610149938LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x326 = 19666752899493294LLU;
	volatile int64_t x327 = 55020LL;
	int8_t x328 = INT8_MIN;

	t72 = (((x325+x326)^x327)+x328);

	if (t72 != 19666752899480311LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x333 = 227;
	volatile int8_t x334 = INT8_MIN;
	volatile int64_t x335 = INT64_MIN;
	static uint64_t x336 = 31189228225609098LLU;
	uint64_t t73 = 259LLU;

	t73 = (((x333+x334)^x335)+x336);

	if (t73 != 9254561265080385005LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x337 = 1845377398U;
	uint32_t x340 = 7689459U;
	uint32_t t74 = 3U;

	t74 = (((x337+x338)^x339)+x340);

	if (t74 != 4000583272U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = INT32_MIN;
	int8_t x343 = 5;
	int8_t x344 = INT8_MIN;
	int32_t t75 = -24;

	t75 = (((x341+x342)^x343)+x344);

	if (t75 != -2147414010) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x350 = 122714U;
	uint64_t x351 = UINT64_MAX;
	volatile uint64_t t76 = 84235621LLU;

	t76 = (((x349+x350)^x351)+x352);

	if (t76 != 18446744071561945126LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint8_t x357 = UINT8_MAX;
	int64_t x358 = -3702LL;
	volatile int32_t x360 = INT32_MAX;

	t77 = (((x357+x358)^x359)+x360);

	if (t77 != 2147487091LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = -1;
	int8_t x362 = INT8_MIN;
	uint32_t x363 = UINT32_MAX;
	int16_t x364 = -15689;
	volatile uint32_t t78 = 6986U;

	t78 = (((x361+x362)^x363)+x364);

	if (t78 != 4294951735U) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x365 = UINT16_MAX;
	uint16_t x366 = UINT16_MAX;
	static int16_t x367 = -2;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t79 = 2U;

	t79 = (((x365+x366)^x367)+x368);

	if (t79 != 4294836223U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = -1;
	uint16_t x370 = UINT16_MAX;
	uint16_t x371 = 9U;
	int8_t x372 = -7;
	volatile int32_t t80 = 18;

	t80 = (((x369+x370)^x371)+x372);

	if (t80 != 65520) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x373 = -7972276;
	uint8_t x374 = UINT8_MAX;
	uint8_t x375 = 1U;
	int8_t x376 = -1;
	int32_t t81 = 3534;

	t81 = (((x373+x374)^x375)+x376);

	if (t81 != -7972023) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MIN;
	static uint32_t x378 = UINT32_MAX;
	volatile int32_t x379 = -4;
	uint8_t x380 = 84U;
	volatile int64_t t82 = 497154449819LL;

	t82 = (((x377+x378)^x379)+x380);

	if (t82 != 9223372032559808599LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x381 = INT32_MIN;
	uint64_t x382 = 2684278498720268239LLU;
	int64_t x383 = 135579308LL;
	int64_t x384 = INT64_MIN;
	volatile uint64_t t83 = 665274771449355934LLU;

	t83 = (((x381+x382)^x383)+x384);

	if (t83 != 11907650533292538211LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x385 = 1184;
	uint16_t x386 = UINT16_MAX;
	uint16_t x387 = 128U;
	volatile uint32_t t84 = 958U;

	t84 = (((x385+x386)^x387)+x388);

	if (t84 != 66591U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x389 = -2859;
	int16_t x390 = INT16_MAX;
	static int64_t x391 = INT64_MIN;
	uint16_t x392 = 59U;
	int64_t t85 = 6761981147104LL;

	t85 = (((x389+x390)^x391)+x392);

	if (t85 != -9223372036854745841LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = -9;
	int64_t x394 = -1LL;
	volatile int16_t x395 = INT16_MIN;
	uint32_t x396 = 14844U;
	int64_t t86 = -13LL;

	t86 = (((x393+x394)^x395)+x396);

	if (t86 != 47602LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = 0LL;
	uint32_t x398 = 3U;
	uint64_t x399 = 50195LLU;
	int32_t x400 = INT32_MAX;

	t87 = (((x397+x398)^x399)+x400);

	if (t87 != 2147533839LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x405 = 30U;
	uint8_t x407 = 10U;
	uint64_t x408 = 2822146786821619486LLU;
	uint64_t t88 = 328389403924283306LLU;

	t88 = (((x405+x406)^x407)+x408);

	if (t88 != 2822146784674135858LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x409 = -1LL;
	uint8_t x410 = UINT8_MAX;
	int64_t x411 = INT64_MIN;
	volatile uint8_t x412 = UINT8_MAX;
	volatile int64_t t89 = -242150202457791LL;

	t89 = (((x409+x410)^x411)+x412);

	if (t89 != -9223372036854775299LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x413 = INT8_MIN;
	uint16_t x414 = UINT16_MAX;
	int8_t x415 = 24;
	int64_t x416 = -559703613LL;
	volatile int64_t t90 = 0LL;

	t90 = (((x413+x414)^x415)+x416);

	if (t90 != -559638230LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MIN;
	static int8_t x419 = INT8_MIN;
	int32_t x420 = -205;
	volatile uint32_t t91 = 41992U;

	t91 = (((x417+x418)^x419)+x420);

	if (t91 != 1815269203U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x430 = UINT8_MAX;
	uint16_t x432 = UINT16_MAX;
	static volatile int64_t t92 = -7285498590822LL;

	t92 = (((x429+x430)^x431)+x432);

	if (t92 != 65269LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x433 = 13178246U;
	static uint32_t x434 = UINT32_MAX;
	int64_t x436 = -24LL;
	volatile int64_t t93 = 639LL;

	t93 = (((x433+x434)^x435)+x436);

	if (t93 != 13178210LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x437 = 22888930U;
	int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = 231U;
	volatile uint32_t t94 = 111932694U;

	t94 = (((x437+x438)^x439)+x440);

	if (t94 != 4272045896U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x442 = 127279008LL;
	uint32_t x443 = UINT32_MAX;
	volatile int64_t t95 = -519016538003427LL;

	t95 = (((x441+x442)^x443)+x444);

	if (t95 != 4167688283LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x445 = INT32_MAX;
	int64_t x446 = INT64_MIN;
	static int16_t x447 = -1;
	static int64_t x448 = 211584LL;

	t96 = (((x445+x446)^x447)+x448);

	if (t96 != 9223372034707503744LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x449 = INT16_MIN;
	int8_t x450 = INT8_MIN;
	static volatile int16_t x452 = INT16_MIN;
	int32_t t97 = -26;

	t97 = (((x449+x450)^x451)+x452);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x457 = 5766U;
	volatile uint64_t t98 = 20403595543755772LLU;

	t98 = (((x457+x458)^x459)+x460);

	if (t98 != 18446744073709545770LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x465 = 0U;
	int16_t x466 = INT16_MAX;
	int8_t x467 = INT8_MIN;
	uint32_t x468 = UINT32_MAX;
	static volatile uint32_t t99 = 3855U;

	t99 = (((x465+x466)^x467)+x468);

	if (t99 != 4294934654U) { NG(); } else { ; }
	
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

