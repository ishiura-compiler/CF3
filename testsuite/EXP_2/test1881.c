#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
int32_t t2 = 389;
volatile uint16_t x16 = UINT16_MAX;
volatile int32_t t3 = 1;
volatile uint64_t x24 = 17809130817952524LLU;
uint16_t x29 = UINT16_MAX;
int8_t x32 = INT8_MAX;
uint16_t x34 = UINT16_MAX;
static volatile int32_t x35 = 1041;
static int32_t t8 = 0;
int32_t t9 = 8116497;
volatile int64_t x44 = INT64_MAX;
volatile int8_t x48 = -1;
volatile int32_t x54 = -96714705;
volatile uint8_t x58 = 1U;
uint32_t x65 = 16031842U;
uint64_t x67 = 2384242284LLU;
int8_t x68 = INT8_MAX;
static volatile int64_t x72 = 8LL;
int32_t t17 = 508;
static int8_t x84 = INT8_MAX;
static uint16_t x96 = 1202U;
int64_t x98 = -1LL;
int8_t x107 = INT8_MIN;
volatile int64_t x112 = INT64_MIN;
int16_t x113 = INT16_MIN;
int64_t x121 = -69545421171LL;
static int64_t x122 = INT64_MIN;
static volatile uint32_t x134 = 13014U;
static int64_t x137 = -1718989798070381417LL;
volatile int32_t t33 = -59;
int32_t x153 = INT32_MIN;
uint8_t x154 = 2U;
static int8_t x156 = INT8_MIN;
int32_t t36 = -873879;
static volatile uint64_t x163 = 972035LLU;
uint64_t x165 = 151232816633804589LLU;
int64_t x167 = INT64_MAX;
int32_t t40 = -27280374;
volatile uint8_t x173 = 5U;
volatile int32_t t41 = 0;
static uint8_t x188 = UINT8_MAX;
volatile int64_t x191 = 8303198855914LL;
volatile int64_t x194 = INT64_MAX;
int64_t x196 = INT64_MAX;
int32_t t45 = -138787;
int16_t x201 = 225;
static int16_t x203 = INT16_MIN;
int8_t x212 = -1;
int64_t x217 = INT64_MIN;
int32_t x223 = -1;
volatile int32_t t50 = 0;
volatile int32_t t52 = 439;
int32_t x235 = -25976431;
int16_t x236 = INT16_MAX;
volatile int32_t t53 = -151;
static volatile int32_t t55 = -1167;
int64_t x263 = INT64_MIN;
static volatile int32_t t58 = -77;
uint16_t x271 = 56U;
int16_t x273 = INT16_MIN;
int32_t x276 = INT32_MIN;
static uint64_t x281 = UINT64_MAX;
int32_t x293 = -15;
uint8_t x297 = UINT8_MAX;
int8_t x298 = 52;
int32_t x304 = INT32_MAX;
volatile int32_t t67 = -167506849;
int32_t t68 = 1683323;
static uint16_t x309 = UINT16_MAX;
int32_t t69 = -1432474;
int32_t t70 = -691;
int32_t x317 = -1;
volatile int8_t x319 = -1;
uint64_t x324 = 32525249956516407LLU;
int16_t x326 = -6;
int32_t x330 = -1;
int8_t x337 = INT8_MAX;
int64_t x339 = 60037LL;
volatile int32_t t77 = -10;
static int16_t x349 = INT16_MIN;
int32_t x353 = -1;
uint16_t x358 = UINT16_MAX;
static uint32_t x368 = 46442447U;
volatile int32_t t82 = -521570095;
static uint8_t x378 = 9U;
uint64_t x391 = UINT64_MAX;
int16_t x392 = 15;
static int32_t x393 = -860;
uint64_t x396 = 36245077767269406LLU;
int16_t x397 = -99;
static uint8_t x403 = 1U;
int32_t t92 = 8465911;
volatile int16_t x410 = 25;
int32_t x411 = -1;
int8_t x416 = INT8_MIN;
uint16_t x420 = 8346U;
int64_t x425 = -33017083LL;
int64_t x427 = -1LL;
volatile uint64_t x430 = UINT64_MAX;
int8_t x434 = INT8_MAX;
int32_t x437 = INT32_MIN;
int16_t x439 = INT16_MIN;


void f0(void) {
	static int8_t x1 = -1;
	int64_t x2 = INT64_MIN;
	volatile int8_t x4 = -14;
	int32_t t0 = -284262461;

	t0 = ((x1-(x2|x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 5069U;
	int32_t x6 = INT32_MAX;
	int16_t x7 = -1;
	uint64_t x8 = 1261499830LLU;
	int32_t t1 = 3032060;

	t1 = ((x5-(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;
	uint32_t x12 = 187369U;

	t2 = ((x9-(x10|x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint16_t x14 = 1U;
	volatile uint8_t x15 = 4U;

	t3 = ((x13-(x14|x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int64_t x18 = 11552LL;
	int16_t x19 = INT16_MAX;
	volatile uint16_t x20 = UINT16_MAX;
	int32_t t4 = -85384;

	t4 = ((x17-(x18|x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int32_t x22 = -3236;
	uint32_t x23 = 24U;
	volatile int32_t t5 = -761279356;

	t5 = ((x21-(x22|x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 4;
	volatile int64_t x26 = 8434757788329404LL;
	static int16_t x27 = -1;
	int16_t x28 = 8424;
	volatile int32_t t6 = -42;

	t6 = ((x25-(x26|x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MIN;
	int16_t x31 = 1795;
	static int32_t t7 = -1;

	t7 = ((x29-(x30|x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 185U;
	int16_t x36 = INT16_MIN;

	t8 = ((x33-(x34|x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	uint16_t x38 = 0U;
	int32_t x39 = INT32_MAX;
	int64_t x40 = 65630LL;

	t9 = ((x37-(x38|x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x42 = 3771;
	uint32_t x43 = 29400342U;
	int32_t t10 = -102128197;

	t10 = ((x41-(x42|x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 215U;
	volatile int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	volatile int32_t t11 = 57689899;

	t11 = ((x45-(x46|x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	static int64_t x55 = INT64_MIN;
	static volatile int8_t x56 = INT8_MAX;
	volatile int32_t t12 = -97;

	t12 = ((x53-(x54|x55))<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	static int64_t x59 = -1LL;
	volatile int8_t x60 = -1;
	int32_t t13 = -83823;

	t13 = ((x57-(x58|x59))<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = 491847946LL;
	volatile int32_t t14 = 37;

	t14 = ((x65-(x66|x67))<x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 3LLU;
	uint64_t x70 = 753395994982LLU;
	int8_t x71 = -1;
	int32_t t15 = 4398762;

	t15 = ((x69-(x70|x71))<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 96637LLU;
	int16_t x74 = -31;
	uint16_t x75 = 26U;
	int8_t x76 = INT8_MIN;
	int32_t t16 = -1;

	t16 = ((x73-(x74|x75))<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 167U;
	uint32_t x78 = 4952U;
	int8_t x79 = 2;
	int8_t x80 = INT8_MAX;

	t17 = ((x77-(x78|x79))<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -18;
	volatile int32_t x82 = INT32_MIN;
	uint64_t x83 = 20838LLU;
	volatile int32_t t18 = 0;

	t18 = ((x81-(x82|x83))<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = INT8_MIN;
	int32_t x86 = -48440357;
	uint64_t x87 = UINT64_MAX;
	uint64_t x88 = 1395285429520LLU;
	int32_t t19 = -486193165;

	t19 = ((x85-(x86|x87))<x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	int8_t x90 = INT8_MIN;
	int32_t x91 = INT32_MIN;
	int16_t x92 = -560;
	static volatile int32_t t20 = 1;

	t20 = ((x89-(x90|x91))<x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	static int32_t x94 = -11336980;
	uint16_t x95 = 31441U;
	static volatile int32_t t21 = -11934741;

	t21 = ((x93-(x94|x95))<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = 14489153635LL;
	int16_t x99 = -9;
	volatile uint32_t x100 = 183138U;
	int32_t t22 = -163;

	t22 = ((x97-(x98|x99))<x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = 3916274135LL;
	int16_t x102 = INT16_MIN;
	volatile uint16_t x103 = 235U;
	static uint8_t x104 = 73U;
	volatile int32_t t23 = -916986379;

	t23 = ((x101-(x102|x103))<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 2014712LL;
	int64_t x106 = INT64_MAX;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t24 = 6407;

	t24 = ((x105-(x106|x107))<x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = -15314498LL;
	volatile uint64_t x110 = 398826375402011766LLU;
	static uint8_t x111 = UINT8_MAX;
	int32_t t25 = -89;

	t25 = ((x109-(x110|x111))<x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x114 = -36;
	uint16_t x115 = 2297U;
	int16_t x116 = -1;
	volatile int32_t t26 = 795826246;

	t26 = ((x113-(x114|x115))<x116);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MIN;
	volatile int16_t x118 = -1;
	static uint8_t x119 = 1U;
	volatile uint32_t x120 = 35645721U;
	static int32_t t27 = -1628;

	t27 = ((x117-(x118|x119))<x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x123 = -13174978LL;
	int64_t x124 = -1LL;
	int32_t t28 = -321527;

	t28 = ((x121-(x122|x123))<x124);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 46522910441LLU;
	static uint64_t x126 = UINT64_MAX;
	int32_t x127 = INT32_MAX;
	static int32_t x128 = INT32_MAX;
	int32_t t29 = -3;

	t29 = ((x125-(x126|x127))<x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x129 = 293590U;
	volatile int16_t x130 = -1;
	int16_t x131 = 0;
	uint8_t x132 = 0U;
	static volatile int32_t t30 = -11;

	t30 = ((x129-(x130|x131))<x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MIN;
	uint64_t x135 = UINT64_MAX;
	static uint32_t x136 = 4U;
	volatile int32_t t31 = 1;

	t31 = ((x133-(x134|x135))<x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = INT8_MAX;
	int16_t x139 = -27;
	static uint16_t x140 = UINT16_MAX;
	volatile int32_t t32 = -43414219;

	t32 = ((x137-(x138|x139))<x140);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	uint64_t x143 = 1036LLU;
	static volatile uint32_t x144 = 41630977U;

	t33 = ((x141-(x142|x143))<x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x145 = -2697;
	int32_t x146 = INT32_MIN;
	int16_t x147 = INT16_MIN;
	int16_t x148 = 374;
	static volatile int32_t t34 = -398;

	t34 = ((x145-(x146|x147))<x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = -1;
	static uint32_t x150 = UINT32_MAX;
	uint64_t x151 = 264774628892LLU;
	int64_t x152 = -187310LL;
	static int32_t t35 = -1;

	t35 = ((x149-(x150|x151))<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x155 = INT64_MIN;

	t36 = ((x153-(x154|x155))<x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 7U;
	volatile int8_t x158 = -11;
	int8_t x159 = 1;
	int8_t x160 = INT8_MIN;
	static int32_t t37 = -1913;

	t37 = ((x157-(x158|x159))<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = -17662879797080139LL;
	int32_t x162 = -1;
	int16_t x164 = INT16_MIN;
	int32_t t38 = 33167047;

	t38 = ((x161-(x162|x163))<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x166 = INT32_MIN;
	int32_t x168 = -1;
	volatile int32_t t39 = 6;

	t39 = ((x165-(x166|x167))<x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = UINT32_MAX;
	int8_t x170 = -25;
	uint64_t x171 = 56499794086388024LLU;
	volatile int16_t x172 = INT16_MIN;

	t40 = ((x169-(x170|x171))<x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = INT32_MAX;
	static int32_t x175 = INT32_MAX;
	static int16_t x176 = INT16_MIN;

	t41 = ((x173-(x174|x175))<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 21472LLU;
	int64_t x182 = INT64_MIN;
	uint64_t x183 = 92501679LLU;
	static uint8_t x184 = 115U;
	volatile int32_t t42 = 258653;

	t42 = ((x181-(x182|x183))<x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 8U;
	volatile int32_t x186 = INT32_MAX;
	static int8_t x187 = -1;
	int32_t t43 = 2727205;

	t43 = ((x185-(x186|x187))<x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = INT32_MAX;
	static int16_t x190 = -501;
	uint16_t x192 = 1U;
	volatile int32_t t44 = -3;

	t44 = ((x189-(x190|x191))<x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	uint64_t x195 = 1088267922489LLU;

	t45 = ((x193-(x194|x195))<x196);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	int64_t x198 = INT64_MAX;
	uint8_t x199 = UINT8_MAX;
	static int8_t x200 = INT8_MIN;
	static volatile int32_t t46 = -2053191;

	t46 = ((x197-(x198|x199))<x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x202 = INT32_MIN;
	static volatile uint32_t x204 = UINT32_MAX;
	volatile int32_t t47 = 666138;

	t47 = ((x201-(x202|x203))<x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x209 = UINT16_MAX;
	int64_t x210 = 7215984738LL;
	static int8_t x211 = -1;
	int32_t t48 = -15625539;

	t48 = ((x209-(x210|x211))<x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x218 = -351;
	int16_t x219 = INT16_MAX;
	volatile uint16_t x220 = UINT16_MAX;
	static int32_t t49 = -77494819;

	t49 = ((x217-(x218|x219))<x220);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	uint64_t x222 = 4073182616336LLU;
	int64_t x224 = INT64_MIN;

	t50 = ((x221-(x222|x223))<x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 13U;
	static uint64_t x226 = UINT64_MAX;
	int32_t x227 = INT32_MIN;
	volatile int32_t x228 = 0;
	int32_t t51 = -7274148;

	t51 = ((x225-(x226|x227))<x228);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x229 = INT16_MAX;
	static int32_t x230 = -529745;
	uint32_t x231 = 1018478201U;
	int8_t x232 = 0;

	t52 = ((x229-(x230|x231))<x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x233 = -7;
	uint32_t x234 = 10040606U;

	t53 = ((x233-(x234|x235))<x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x237 = 33016512LLU;
	static volatile int32_t x238 = -795424;
	static uint32_t x239 = UINT32_MAX;
	int64_t x240 = INT64_MIN;
	int32_t t54 = 272;

	t54 = ((x237-(x238|x239))<x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = -1;
	static volatile uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 0LLU;
	uint64_t x244 = 73583844LLU;

	t55 = ((x241-(x242|x243))<x244);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = 1;
	int16_t x246 = 5261;
	static int8_t x247 = 6;
	int32_t x248 = INT32_MIN;
	int32_t t56 = -177729256;

	t56 = ((x245-(x246|x247))<x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = -20;
	int16_t x258 = -42;
	int16_t x259 = INT16_MAX;
	volatile uint32_t x260 = 101828368U;
	volatile int32_t t57 = 2698;

	t57 = ((x257-(x258|x259))<x260);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -1860867LL;
	static int16_t x262 = INT16_MIN;
	int8_t x264 = 48;

	t58 = ((x261-(x262|x263))<x264);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = 0;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t59 = -45413;

	t59 = ((x265-(x266|x267))<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x269 = INT32_MIN;
	volatile int64_t x270 = -166LL;
	int8_t x272 = INT8_MAX;
	int32_t t60 = 4726;

	t60 = ((x269-(x270|x271))<x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x274 = 7LLU;
	int16_t x275 = -14256;
	int32_t t61 = 3958051;

	t61 = ((x273-(x274|x275))<x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile int32_t x278 = 1038;
	volatile int16_t x279 = INT16_MIN;
	uint16_t x280 = 359U;
	int32_t t62 = 38542661;

	t62 = ((x277-(x278|x279))<x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x282 = INT16_MIN;
	static uint16_t x283 = UINT16_MAX;
	int32_t x284 = -1;
	volatile int32_t t63 = 14731;

	t63 = ((x281-(x282|x283))<x284);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x285 = -1LL;
	int8_t x286 = INT8_MIN;
	int64_t x287 = -1LL;
	volatile int64_t x288 = INT64_MAX;
	volatile int32_t t64 = 312994;

	t64 = ((x285-(x286|x287))<x288);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x294 = INT64_MIN;
	int64_t x295 = -7603LL;
	static int32_t x296 = INT32_MAX;
	int32_t t65 = -166438423;

	t65 = ((x293-(x294|x295))<x296);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x299 = -228071;
	static int64_t x300 = INT64_MAX;
	int32_t t66 = 40;

	t66 = ((x297-(x298|x299))<x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	static int8_t x302 = 35;
	uint8_t x303 = UINT8_MAX;

	t67 = ((x301-(x302|x303))<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = 1U;
	static volatile int8_t x306 = INT8_MIN;
	static uint32_t x307 = 3U;
	uint32_t x308 = 6U;

	t68 = ((x305-(x306|x307))<x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x310 = INT64_MAX;
	int16_t x311 = INT16_MAX;
	static int32_t x312 = INT32_MIN;

	t69 = ((x309-(x310|x311))<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = -1LL;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 14LLU;
	int64_t x316 = INT64_MIN;

	t70 = ((x313-(x314|x315))<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x318 = 390731U;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t71 = 3496;

	t71 = ((x317-(x318|x319))<x320);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = UINT16_MAX;
	volatile int16_t x322 = INT16_MIN;
	static uint16_t x323 = 0U;
	static volatile int32_t t72 = -10728742;

	t72 = ((x321-(x322|x323))<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 7U;
	int32_t x327 = 1775152;
	int32_t x328 = -150;
	int32_t t73 = -462146914;

	t73 = ((x325-(x326|x327))<x328);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x329 = INT32_MIN;
	volatile uint32_t x331 = UINT32_MAX;
	uint32_t x332 = 41U;
	int32_t t74 = -3;

	t74 = ((x329-(x330|x331))<x332);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x333 = -1;
	volatile int64_t x334 = 21067306LL;
	static int32_t x335 = INT32_MAX;
	static volatile uint32_t x336 = 13794U;
	static int32_t t75 = -1566;

	t75 = ((x333-(x334|x335))<x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x338 = INT64_MIN;
	uint64_t x340 = 713336568LLU;
	volatile int32_t t76 = -66423;

	t76 = ((x337-(x338|x339))<x340);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x341 = 16550872385LLU;
	int8_t x342 = -4;
	int8_t x343 = -11;
	uint64_t x344 = 5608859LLU;

	t77 = ((x341-(x342|x343))<x344);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x345 = 4825U;
	int16_t x346 = INT16_MIN;
	int32_t x347 = -809588;
	int64_t x348 = -801423LL;
	static volatile int32_t t78 = 4522;

	t78 = ((x345-(x346|x347))<x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x350 = INT32_MIN;
	volatile int64_t x351 = -1LL;
	int32_t x352 = -2;
	static volatile int32_t t79 = 15;

	t79 = ((x349-(x350|x351))<x352);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x354 = 2020U;
	uint8_t x355 = 1U;
	uint16_t x356 = 3754U;
	int32_t t80 = -32108;

	t80 = ((x353-(x354|x355))<x356);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x357 = 0U;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t81 = -6218351;

	t81 = ((x357-(x358|x359))<x360);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x365 = INT16_MIN;
	int16_t x366 = 741;
	uint8_t x367 = 0U;

	t82 = ((x365-(x366|x367))<x368);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x369 = UINT8_MAX;
	uint64_t x370 = UINT64_MAX;
	uint16_t x371 = 32U;
	volatile int16_t x372 = 0;
	volatile int32_t t83 = -483;

	t83 = ((x369-(x370|x371))<x372);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -246917LL;
	uint16_t x375 = UINT16_MAX;
	int8_t x376 = INT8_MAX;
	volatile int32_t t84 = -158948304;

	t84 = ((x373-(x374|x375))<x376);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x377 = 4489U;
	uint8_t x379 = 12U;
	volatile int8_t x380 = INT8_MIN;
	int32_t t85 = 0;

	t85 = ((x377-(x378|x379))<x380);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x381 = INT8_MIN;
	volatile int16_t x382 = INT16_MIN;
	int8_t x383 = -1;
	static uint8_t x384 = UINT8_MAX;
	static int32_t t86 = 0;

	t86 = ((x381-(x382|x383))<x384);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MAX;
	uint64_t x388 = 495277660971LLU;
	static int32_t t87 = 71;

	t87 = ((x385-(x386|x387))<x388);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MAX;
	static uint8_t x390 = 26U;
	static volatile int32_t t88 = 463995853;

	t88 = ((x389-(x390|x391))<x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x394 = 1LLU;
	volatile int16_t x395 = 1820;
	volatile int32_t t89 = -18472;

	t89 = ((x393-(x394|x395))<x396);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x398 = 11;
	static uint8_t x399 = 0U;
	volatile uint16_t x400 = 0U;
	int32_t t90 = 52396615;

	t90 = ((x397-(x398|x399))<x400);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x401 = 10737678LL;
	uint32_t x402 = UINT32_MAX;
	int32_t x404 = INT32_MIN;
	static int32_t t91 = 8;

	t91 = ((x401-(x402|x403))<x404);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	int64_t x407 = INT64_MAX;
	int8_t x408 = INT8_MIN;

	t92 = ((x405-(x406|x407))<x408);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x409 = 1U;
	int16_t x412 = INT16_MAX;
	int32_t t93 = 12114;

	t93 = ((x409-(x410|x411))<x412);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1;
	static int8_t x414 = -47;
	volatile int8_t x415 = INT8_MIN;
	static volatile int32_t t94 = -42;

	t94 = ((x413-(x414|x415))<x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MIN;
	volatile int64_t x418 = 66LL;
	volatile int16_t x419 = INT16_MAX;
	volatile int32_t t95 = 276;

	t95 = ((x417-(x418|x419))<x420);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x426 = INT8_MIN;
	int32_t x428 = -36730;
	int32_t t96 = 1;

	t96 = ((x425-(x426|x427))<x428);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x429 = INT64_MIN;
	volatile int64_t x431 = INT64_MIN;
	int64_t x432 = -13LL;
	int32_t t97 = -154243;

	t97 = ((x429-(x430|x431))<x432);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = INT16_MAX;
	static uint16_t x435 = 9141U;
	static int8_t x436 = INT8_MIN;
	int32_t t98 = -1882;

	t98 = ((x433-(x434|x435))<x436);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x438 = 40U;
	int32_t x440 = 34;
	int32_t t99 = -7;

	t99 = ((x437-(x438|x439))<x440);

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

