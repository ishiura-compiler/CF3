#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = 13;
int64_t x7 = -1LL;
uint16_t x10 = 7489U;
int32_t x11 = 387876;
int64_t t3 = -42264LL;
uint64_t t4 = 72177008506945LLU;
int8_t x30 = INT8_MAX;
uint64_t t5 = 403654525LLU;
uint32_t x33 = 442U;
uint8_t x35 = 25U;
int32_t x42 = INT32_MIN;
int16_t x43 = 7288;
static int16_t x61 = INT16_MAX;
volatile uint64_t x62 = 27191719748LLU;
volatile uint16_t x66 = 31U;
int16_t x67 = 1;
int32_t t14 = -96;
uint8_t x75 = 50U;
static volatile int16_t x76 = 28;
uint16_t x77 = UINT16_MAX;
uint64_t t16 = 899121718463129LLU;
int8_t x81 = -1;
int64_t x86 = INT64_MIN;
static uint64_t x88 = 18LLU;
int16_t x93 = INT16_MIN;
uint64_t x94 = 4348953707978LLU;
int16_t x122 = INT16_MIN;
volatile int32_t x126 = INT32_MAX;
uint64_t x132 = UINT64_MAX;
uint16_t x134 = UINT16_MAX;
int8_t x141 = 4;
int8_t x142 = INT8_MAX;
volatile int64_t t32 = 2900LL;
int16_t x145 = 270;
int8_t x154 = INT8_MIN;
uint64_t x168 = UINT64_MAX;
uint16_t x176 = 7830U;
volatile int32_t t38 = -16;
uint32_t x182 = 952260U;
static int64_t x189 = 16236021LL;
uint16_t x191 = 551U;
int64_t x193 = 611LL;
int16_t x194 = INT16_MAX;
int16_t x196 = INT16_MAX;
static uint32_t x197 = 761348357U;
int32_t x212 = -1;
volatile int8_t x214 = INT8_MAX;
volatile int64_t t47 = -2606554460447LL;
static volatile int32_t t48 = -37051;
volatile int8_t x234 = INT8_MIN;
int16_t x236 = -1;
int32_t x241 = 506;
static uint16_t x252 = 925U;
static uint8_t x254 = UINT8_MAX;
volatile uint32_t x259 = 5U;
volatile uint8_t x263 = 7U;
uint8_t x268 = UINT8_MAX;
static volatile int32_t t59 = 88418;
int32_t x274 = 114554;
uint8_t x276 = 0U;
int8_t x285 = INT8_MAX;
static volatile uint16_t x288 = 754U;
int8_t x296 = -1;
static int32_t x298 = INT32_MIN;
int16_t x299 = INT16_MAX;
volatile int64_t t66 = -39965LL;
int8_t x301 = INT8_MAX;
int64_t x306 = INT64_MIN;
int16_t x308 = INT16_MIN;
int32_t x310 = 7556361;
volatile int8_t x312 = 30;
int8_t x314 = INT8_MIN;
volatile int16_t x316 = -1226;
int64_t x317 = INT64_MIN;
volatile int32_t x320 = INT32_MIN;
uint64_t t74 = 526866674540793384LLU;
int64_t x347 = INT64_MIN;
int16_t x349 = INT16_MIN;
static volatile int64_t x358 = 125343569906LL;
uint32_t x373 = 284314984U;
static uint64_t x377 = UINT64_MAX;
volatile uint64_t t83 = 76LLU;
int8_t x387 = -18;
static int64_t x390 = -1LL;
volatile int64_t t85 = -4257164817908230517LL;
int64_t x397 = 13219550088740911LL;
uint8_t x398 = 2U;
volatile int16_t x408 = 3817;
volatile uint32_t x412 = 1U;
int64_t t89 = -121581531989630787LL;
volatile uint64_t x413 = 11591942LLU;
static int64_t x415 = 79LL;
int8_t x419 = INT8_MIN;
int32_t x422 = INT32_MIN;
uint8_t x429 = UINT8_MAX;
uint64_t x430 = 3925LLU;
static int64_t x431 = INT64_MIN;
static volatile uint8_t x432 = 123U;
int16_t x436 = -2;
static int32_t t95 = 15;
volatile int64_t x437 = INT64_MIN;
int16_t x438 = -1;
volatile uint64_t x441 = 240111514077347083LLU;
uint64_t x442 = UINT64_MAX;
uint64_t x444 = 28LLU;
uint64_t t97 = 35470993512237364LLU;
int64_t x449 = 173616595315883424LL;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	volatile int64_t x3 = INT64_MIN;
	int16_t x4 = INT16_MIN;
	int64_t t0 = 21LL;

	t0 = ((x1+(x2&x3))-x4);

	if (t0 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 3412U;
	int8_t x6 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -2293848267LL;

	t1 = ((x5+(x6&x7))-x8);

	if (t1 != 3412LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x12 = UINT64_MAX;
	static volatile uint64_t t2 = 74726710330236LLU;

	t2 = ((x9+(x10&x11))-x12);

	if (t2 != 18446744071562070273LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	volatile int8_t x14 = INT8_MAX;
	int64_t x15 = -2945765LL;
	static uint16_t x16 = UINT16_MAX;

	t3 = ((x13+(x14&x15))-x16);

	if (t3 != 2147418139LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	uint16_t x26 = 10114U;
	static int16_t x27 = INT16_MIN;
	static uint64_t x28 = 347323048360471LLU;

	t4 = ((x25+(x26&x27))-x28);

	if (t4 != 18446396750661191144LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 261LLU;
	volatile int8_t x31 = INT8_MIN;
	static uint32_t x32 = UINT32_MAX;

	t5 = ((x29+(x30&x31))-x32);

	if (t5 != 18446744069414584582LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MAX;
	uint64_t x36 = 1201LLU;
	volatile uint64_t t6 = 12LLU;

	t6 = ((x33+(x34&x35))-x36);

	if (t6 != 18446744073709550882LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 5856511LL;
	int8_t x38 = -1;
	uint8_t x39 = 12U;
	int16_t x40 = INT16_MIN;
	volatile int64_t t7 = -169783235888358LL;

	t7 = ((x37+(x38&x39))-x40);

	if (t7 != 5889291LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x41 = 1U;
	uint64_t x44 = 9484939572001LLU;
	static volatile uint64_t t8 = 1956288LLU;

	t8 = ((x41+(x42&x43))-x44);

	if (t8 != 18446734588769979616LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = 21672801LL;
	uint64_t x46 = UINT64_MAX;
	int32_t x47 = -21318062;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t9 = 2101283652LLU;

	t9 = ((x45+(x46&x47))-x48);

	if (t9 != 18446744069414939060LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = INT32_MAX;
	static volatile uint64_t x54 = 986LLU;
	int8_t x55 = INT8_MAX;
	volatile uint16_t x56 = UINT16_MAX;
	volatile uint64_t t10 = 333891551191104LLU;

	t10 = ((x53+(x54&x55))-x56);

	if (t10 != 2147418202LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 0U;
	int32_t x58 = INT32_MAX;
	int8_t x59 = 5;
	volatile int8_t x60 = -63;
	int32_t t11 = 1;

	t11 = ((x57+(x58&x59))-x60);

	if (t11 != 68) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x63 = 11057;
	int8_t x64 = 36;
	static volatile uint64_t t12 = 13LLU;

	t12 = ((x61+(x62&x63))-x64);

	if (t12 != 41691LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = 0;
	int64_t x68 = 3162LL;
	volatile int64_t t13 = -379706704021310972LL;

	t13 = ((x65+(x66&x67))-x68);

	if (t13 != -3161LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	static uint16_t x70 = 2739U;
	uint8_t x71 = 0U;
	uint16_t x72 = UINT16_MAX;

	t14 = ((x69+(x70&x71))-x72);

	if (t14 != -65663) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = INT16_MIN;
	static int32_t x74 = -188407;
	volatile int32_t t15 = 176344;

	t15 = ((x73+(x74&x75))-x76);

	if (t15 != -32796) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = -2011805;
	static int64_t x79 = INT64_MAX;
	uint64_t x80 = UINT64_MAX;

	t16 = ((x77+(x78&x79))-x80);

	if (t16 != 9223372036852829539LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x82 = INT16_MAX;
	static volatile int16_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	volatile uint32_t t17 = 61U;

	t17 = ((x81+(x82&x83))-x84);

	if (t17 != 32767U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	uint8_t x87 = 66U;
	uint64_t t18 = 24LLU;

	t18 = ((x85+(x86&x87))-x88);

	if (t18 != 18446744073709518830LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x89 = -1LL;
	uint64_t x90 = 4276059794041286LLU;
	uint8_t x91 = 0U;
	uint32_t x92 = UINT32_MAX;
	uint64_t t19 = 129967LLU;

	t19 = ((x89+(x90&x91))-x92);

	if (t19 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x95 = -1;
	volatile int16_t x96 = -3305;
	static volatile uint64_t t20 = 2LLU;

	t20 = ((x93+(x94&x95))-x96);

	if (t20 != 4348953678515LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 1;
	int32_t x98 = -6766791;
	uint64_t x99 = 26323736929303295LLU;
	static volatile int64_t x100 = -1LL;
	uint64_t t21 = 22212841068LLU;

	t21 = ((x97+(x98&x99))-x100);

	if (t21 != 26323736924830267LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = INT32_MAX;
	static int32_t x102 = -50104;
	int32_t x103 = INT32_MIN;
	static int16_t x104 = INT16_MAX;
	volatile int32_t t22 = 435;

	t22 = ((x101+(x102&x103))-x104);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x105 = -350;
	static int16_t x106 = -1;
	static int32_t x107 = -277;
	int16_t x108 = 7297;
	volatile int32_t t23 = 191;

	t23 = ((x105+(x106&x107))-x108);

	if (t23 != -7924) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x109 = INT64_MIN;
	volatile int16_t x110 = 11;
	volatile uint64_t x111 = 2152487LLU;
	static int16_t x112 = -231;
	static volatile uint64_t t24 = 36930686865763540LLU;

	t24 = ((x109+(x110&x111))-x112);

	if (t24 != 9223372036854776042LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 220851927501LLU;
	int32_t x114 = INT32_MIN;
	int64_t x115 = 42838248844366LL;
	int16_t x116 = 1;
	static uint64_t t25 = 75LLU;

	t25 = ((x113+(x114&x115))-x116);

	if (t25 != 43058855737804LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = UINT32_MAX;
	static uint16_t x118 = UINT16_MAX;
	uint8_t x119 = 5U;
	uint16_t x120 = 0U;
	uint32_t t26 = 231U;

	t26 = ((x117+(x118&x119))-x120);

	if (t26 != 4U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x123 = -12603523;
	static int32_t x124 = -7;
	volatile uint64_t t27 = 3246163LLU;

	t27 = ((x121+(x122&x123))-x124);

	if (t27 != 18446744073696935942LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x125 = UINT16_MAX;
	int64_t x127 = -6446810813758743LL;
	int16_t x128 = INT16_MIN;
	volatile int64_t t28 = -13LL;

	t28 = ((x125+(x126&x127))-x128);

	if (t28 != 1669628648LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -9;
	uint64_t x130 = UINT64_MAX;
	static volatile int8_t x131 = INT8_MIN;
	uint64_t t29 = 127682198306LLU;

	t29 = ((x129+(x130&x131))-x132);

	if (t29 != 18446744073709551480LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = 660211260;
	uint64_t x135 = 12424LLU;
	int32_t x136 = INT32_MIN;
	static volatile uint64_t t30 = 26734024LLU;

	t30 = ((x133+(x134&x135))-x136);

	if (t30 != 2807707332LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 19043U;
	uint8_t x138 = UINT8_MAX;
	static int8_t x139 = INT8_MIN;
	static int64_t x140 = -1444216399911LL;
	volatile int64_t t31 = -91304LL;

	t31 = ((x137+(x138&x139))-x140);

	if (t31 != 1444216419082LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x143 = INT16_MIN;
	int64_t x144 = INT64_MAX;

	t32 = ((x141+(x142&x143))-x144);

	if (t32 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x146 = UINT8_MAX;
	volatile int16_t x147 = 9435;
	static int32_t x148 = -1;
	volatile int32_t t33 = -3;

	t33 = ((x145+(x146&x147))-x148);

	if (t33 != 490) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x149 = UINT64_MAX;
	volatile int8_t x150 = 1;
	int32_t x151 = -1;
	volatile uint16_t x152 = 2U;
	static volatile uint64_t t34 = 6592137973LLU;

	t34 = ((x149+(x150&x151))-x152);

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MAX;
	uint16_t x155 = 0U;
	uint16_t x156 = 3U;
	volatile int32_t t35 = 104;

	t35 = ((x153+(x154&x155))-x156);

	if (t35 != 32764) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = -50LL;
	uint8_t x166 = 3U;
	static volatile int64_t x167 = INT64_MIN;
	volatile uint64_t t36 = 103857LLU;

	t36 = ((x165+(x166&x167))-x168);

	if (t36 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	uint64_t x170 = 520333369246LLU;
	static int16_t x171 = INT16_MIN;
	static int64_t x172 = -1LL;
	uint64_t t37 = 17985880687LLU;

	t37 = ((x169+(x170&x171))-x172);

	if (t37 != 9223372557188136961LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 0U;
	volatile uint8_t x174 = 90U;
	static volatile uint16_t x175 = 27U;

	t38 = ((x173+(x174&x175))-x176);

	if (t38 != -7804) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x177 = 824481U;
	uint32_t x178 = 6207717U;
	int8_t x179 = -1;
	static int16_t x180 = 1326;
	uint32_t t39 = 20839U;

	t39 = ((x177+(x178&x179))-x180);

	if (t39 != 7030872U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	int16_t x184 = INT16_MIN;
	uint64_t t40 = 511343667413814660LLU;

	t40 = ((x181+(x182&x183))-x184);

	if (t40 != 952260LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x185 = 11U;
	volatile int8_t x186 = INT8_MAX;
	static int64_t x187 = INT64_MIN;
	uint8_t x188 = 2U;
	static volatile int64_t t41 = -503014757759364LL;

	t41 = ((x185+(x186&x187))-x188);

	if (t41 != 9LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x190 = 472;
	static int8_t x192 = 5;
	int64_t t42 = 5LL;

	t42 = ((x189+(x190&x191))-x192);

	if (t42 != 16236016LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x195 = -1;
	int64_t t43 = -4730674199242LL;

	t43 = ((x193+(x194&x195))-x196);

	if (t43 != 611LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x198 = INT16_MIN;
	static int32_t x199 = INT32_MAX;
	volatile int16_t x200 = -24;
	uint32_t t44 = 30041652U;

	t44 = ((x197+(x198&x199))-x200);

	if (t44 != 2908799261U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = 62143084759503121LLU;
	int64_t x210 = 56045504786949125LL;
	static int8_t x211 = -6;
	uint64_t t45 = 1750886LLU;

	t45 = ((x209+(x210&x211))-x212);

	if (t45 != 118188589546452242LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = 797755348;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	static volatile int32_t t46 = -7;

	t46 = ((x213+(x214&x215))-x216);

	if (t46 != 797788243) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = 243556332LL;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	uint32_t x220 = 209015U;

	t47 = ((x217+(x218&x219))-x220);

	if (t47 != -9223372036611428491LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	uint8_t x226 = 1U;
	uint8_t x227 = 115U;
	int32_t x228 = -463945569;

	t48 = ((x225+(x226&x227))-x228);

	if (t48 != 463945442) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = UINT16_MAX;
	int32_t x230 = -2309408;
	int8_t x231 = INT8_MAX;
	uint8_t x232 = 111U;
	int32_t t49 = -4;

	t49 = ((x229+(x230&x231))-x232);

	if (t49 != 65520) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = -15141295LL;
	volatile uint64_t x235 = UINT64_MAX;
	uint64_t t50 = 22273957905LLU;

	t50 = ((x233+(x234&x235))-x236);

	if (t50 != 18446744073694410194LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 587LLU;
	static int32_t x238 = INT32_MIN;
	static volatile int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MIN;
	static uint64_t t51 = 421975402616LLU;

	t51 = ((x237+(x238&x239))-x240);

	if (t51 != 715LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x242 = 1354262444U;
	uint8_t x243 = 1U;
	volatile int16_t x244 = 1749;
	uint32_t t52 = 2421U;

	t52 = ((x241+(x242&x243))-x244);

	if (t52 != 4294966053U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x245 = INT8_MIN;
	int32_t x246 = 1527;
	int16_t x247 = 0;
	int64_t x248 = -1LL;
	int64_t t53 = -48938572719137383LL;

	t53 = ((x245+(x246&x247))-x248);

	if (t53 != -127LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x249 = UINT32_MAX;
	uint8_t x250 = 58U;
	static volatile int64_t x251 = INT64_MAX;
	static int64_t t54 = 24278LL;

	t54 = ((x249+(x250&x251))-x252);

	if (t54 != 4294966428LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x253 = UINT64_MAX;
	int64_t x255 = 8228309240LL;
	volatile int16_t x256 = 0;
	uint64_t t55 = 1329355LLU;

	t55 = ((x253+(x254&x255))-x256);

	if (t55 != 247LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x257 = INT8_MAX;
	int64_t x258 = INT64_MIN;
	uint16_t x260 = UINT16_MAX;
	static int64_t t56 = -1399LL;

	t56 = ((x257+(x258&x259))-x260);

	if (t56 != -65408LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 42374U;
	int16_t x262 = INT16_MIN;
	static volatile uint32_t x264 = UINT32_MAX;
	uint32_t t57 = 240147U;

	t57 = ((x261+(x262&x263))-x264);

	if (t57 != 42375U) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = 4U;
	uint8_t x266 = 10U;
	static uint16_t x267 = UINT16_MAX;
	volatile int32_t t58 = -314508746;

	t58 = ((x265+(x266&x267))-x268);

	if (t58 != -241) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x269 = -14319;
	static int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int8_t x272 = 0;

	t59 = ((x269+(x270&x271))-x272);

	if (t59 != -47087) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x273 = INT8_MAX;
	int16_t x275 = INT16_MIN;
	volatile int32_t t60 = -13;

	t60 = ((x273+(x274&x275))-x276);

	if (t60 != 98431) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x277 = 4363747LLU;
	int8_t x278 = -1;
	uint64_t x279 = 8LLU;
	int64_t x280 = INT64_MIN;
	static uint64_t t61 = 44592917208367LLU;

	t61 = ((x277+(x278&x279))-x280);

	if (t61 != 9223372036859139563LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = UINT8_MAX;
	static volatile uint64_t x282 = 37289503LLU;
	int16_t x283 = 16;
	static int16_t x284 = INT16_MAX;
	static volatile uint64_t t62 = 15787465575313LLU;

	t62 = ((x281+(x282&x283))-x284);

	if (t62 != 18446744073709519120LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x286 = -1LL;
	volatile uint8_t x287 = 12U;
	volatile int64_t t63 = -13442104131183LL;

	t63 = ((x285+(x286&x287))-x288);

	if (t63 != -615LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MIN;
	static int8_t x290 = INT8_MIN;
	volatile uint16_t x291 = 370U;
	int16_t x292 = INT16_MIN;
	int32_t t64 = 19524;

	t64 = ((x289+(x290&x291))-x292);

	if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = -51073088LL;
	uint8_t x294 = 0U;
	uint64_t x295 = UINT64_MAX;
	static uint64_t t65 = 824LLU;

	t65 = ((x293+(x294&x295))-x296);

	if (t65 != 18446744073658478529LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -580;
	int64_t x300 = INT64_MIN;

	t66 = ((x297+(x298&x299))-x300);

	if (t66 != 9223372036854775228LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x302 = INT32_MAX;
	volatile uint32_t x303 = 0U;
	volatile int32_t x304 = -1;
	uint32_t t67 = 1260332431U;

	t67 = ((x301+(x302&x303))-x304);

	if (t67 != 128U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int64_t x307 = -1LL;
	volatile int64_t t68 = -3LL;

	t68 = ((x305+(x306&x307))-x308);

	if (t68 != -9223372032559775745LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = INT16_MAX;
	int64_t x311 = INT64_MIN;
	volatile int64_t t69 = 1158LL;

	t69 = ((x309+(x310&x311))-x312);

	if (t69 != 32737LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = INT16_MIN;
	uint8_t x315 = 37U;
	static volatile int32_t t70 = -939487;

	t70 = ((x313+(x314&x315))-x316);

	if (t70 != -31542) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x318 = UINT16_MAX;
	volatile uint32_t x319 = UINT32_MAX;
	static volatile int64_t t71 = -2072555187619LL;

	t71 = ((x317+(x318&x319))-x320);

	if (t71 != -9223372034707226625LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = 15U;
	uint32_t x322 = 135U;
	static int32_t x323 = -1387188;
	int8_t x324 = INT8_MAX;
	uint32_t t72 = 365861U;

	t72 = ((x321+(x322&x323))-x324);

	if (t72 != 4294967188U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = INT8_MIN;
	int64_t x327 = -1LL;
	static int8_t x328 = -3;
	volatile int64_t t73 = -1614882666207712LL;

	t73 = ((x325+(x326&x327))-x328);

	if (t73 != -2147483773LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x333 = 10704U;
	uint64_t x334 = 9241777LLU;
	static int16_t x335 = INT16_MAX;
	volatile uint64_t x336 = UINT64_MAX;

	t74 = ((x333+(x334&x335))-x336);

	if (t74 != 11906LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x337 = -1;
	int8_t x338 = 0;
	static volatile uint64_t x339 = 27264529041LLU;
	int32_t x340 = 6;
	volatile uint64_t t75 = 0LLU;

	t75 = ((x337+(x338&x339))-x340);

	if (t75 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x341 = 5897U;
	int32_t x342 = INT32_MAX;
	uint64_t x343 = 80584906460426050LLU;
	int32_t x344 = 2;
	uint64_t t76 = 64LLU;

	t76 = ((x341+(x342&x343))-x344);

	if (t76 != 601163337LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x345 = 4;
	volatile uint8_t x346 = 1U;
	static uint8_t x348 = UINT8_MAX;
	volatile int64_t t77 = 590828LL;

	t77 = ((x345+(x346&x347))-x348);

	if (t77 != -251LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x350 = UINT8_MAX;
	volatile int64_t x351 = -1LL;
	uint8_t x352 = UINT8_MAX;
	volatile int64_t t78 = 106LL;

	t78 = ((x349+(x350&x351))-x352);

	if (t78 != -32768LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = -10;
	int64_t x354 = INT64_MAX;
	volatile int8_t x355 = INT8_MAX;
	int8_t x356 = INT8_MIN;
	volatile int64_t t79 = 10210979462LL;

	t79 = ((x353+(x354&x355))-x356);

	if (t79 != 245LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x357 = 1LL;
	volatile int16_t x359 = -1;
	static int32_t x360 = INT32_MAX;
	int64_t t80 = 58641568189501467LL;

	t80 = ((x357+(x358&x359))-x360);

	if (t80 != 123196086260LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x365 = 1U;
	volatile int32_t x366 = INT32_MAX;
	volatile int16_t x367 = -7323;
	int16_t x368 = INT16_MAX;
	volatile int32_t t81 = 44948183;

	t81 = ((x365+(x366&x367))-x368);

	if (t81 != 2147443559) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x374 = -1;
	int8_t x375 = 0;
	uint8_t x376 = 117U;
	static volatile uint32_t t82 = 223U;

	t82 = ((x373+(x374&x375))-x376);

	if (t82 != 284314867U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x378 = 6;
	uint8_t x379 = 3U;
	uint16_t x380 = 2033U;

	t83 = ((x377+(x378&x379))-x380);

	if (t83 != 18446744073709549584LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = 12364U;
	int16_t x386 = 149;
	int8_t x388 = INT8_MIN;
	static volatile int32_t t84 = 59;

	t84 = ((x385+(x386&x387))-x388);

	if (t84 != 12624) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x389 = 5U;
	volatile int8_t x391 = INT8_MIN;
	int64_t x392 = 98143LL;

	t85 = ((x389+(x390&x391))-x392);

	if (t85 != -98266LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x399 = 1;
	int8_t x400 = 11;
	int64_t t86 = -16170679218854LL;

	t86 = ((x397+(x398&x399))-x400);

	if (t86 != 13219550088740900LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x401 = -126;
	static uint8_t x402 = UINT8_MAX;
	static volatile int8_t x403 = -10;
	volatile int32_t x404 = -1;
	int32_t t87 = 325829919;

	t87 = ((x401+(x402&x403))-x404);

	if (t87 != 121) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x405 = INT16_MIN;
	volatile uint64_t x406 = UINT64_MAX;
	static int16_t x407 = INT16_MAX;
	volatile uint64_t t88 = 161LLU;

	t88 = ((x405+(x406&x407))-x408);

	if (t88 != 18446744073709547798LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = 1U;
	volatile uint8_t x410 = 127U;
	volatile int64_t x411 = -11883891715LL;

	t89 = ((x409+(x410&x411))-x412);

	if (t89 != 125LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x414 = -7;
	int16_t x416 = INT16_MIN;
	uint64_t t90 = 41987LLU;

	t90 = ((x413+(x414&x415))-x416);

	if (t90 != 11624783LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x417 = -1LL;
	volatile int32_t x418 = INT32_MAX;
	uint8_t x420 = 0U;
	volatile int64_t t91 = 490929621714470586LL;

	t91 = ((x417+(x418&x419))-x420);

	if (t91 != 2147483519LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = 31U;
	int16_t x423 = -1;
	uint32_t x424 = 2U;
	uint32_t t92 = 4414U;

	t92 = ((x421+(x422&x423))-x424);

	if (t92 != 2147483677U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = 36298019329LLU;
	int16_t x426 = -45;
	int64_t x427 = INT64_MAX;
	uint8_t x428 = UINT8_MAX;
	volatile uint64_t t93 = 275548155492148LLU;

	t93 = ((x425+(x426&x427))-x428);

	if (t93 != 9223372073152794837LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t t94 = 9LLU;

	t94 = ((x429+(x430&x431))-x432);

	if (t94 != 132LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x433 = UINT8_MAX;
	volatile int16_t x434 = -1;
	int8_t x435 = -1;

	t95 = ((x433+(x434&x435))-x436);

	if (t95 != 256) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x439 = UINT32_MAX;
	int64_t x440 = INT64_MIN;
	volatile int64_t t96 = -497449181LL;

	t96 = ((x437+(x438&x439))-x440);

	if (t96 != 4294967295LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x443 = INT8_MIN;

	t97 = ((x441+(x442&x443))-x444);

	if (t97 != 240111514077346927LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MAX;
	int16_t x446 = INT16_MAX;
	int32_t x447 = INT32_MIN;
	volatile int64_t x448 = 47224631714LL;
	volatile int64_t t98 = 1705619863483469456LL;

	t98 = ((x445+(x446&x447))-x448);

	if (t98 != -47224631587LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x450 = 187590846U;
	int16_t x451 = INT16_MAX;
	uint64_t x452 = 790163698062208391LLU;
	uint64_t t99 = 14087445013916861LLU;

	t99 = ((x449+(x450&x451))-x452);

	if (t99 != 17830196970963253463LLU) { NG(); } else { ; }
	
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

