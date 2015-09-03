#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 20U;
int64_t x10 = -1LL;
static volatile int8_t x14 = -1;
uint16_t x29 = 1U;
volatile int16_t x39 = 1019;
int8_t x40 = 26;
uint64_t t7 = 6248011751512LLU;
volatile uint8_t x48 = 47U;
int8_t x53 = INT8_MIN;
int16_t x54 = 2;
volatile uint32_t x60 = 14951U;
uint16_t x61 = 0U;
uint64_t x67 = 73390364463228LLU;
int32_t x70 = -1;
int16_t x74 = 1;
volatile uint32_t x75 = 10307U;
static int32_t x96 = INT32_MAX;
uint16_t x101 = 255U;
int16_t x106 = INT16_MAX;
uint8_t x111 = 2U;
uint64_t x113 = 49258755202009488LLU;
int8_t x123 = INT8_MIN;
uint64_t x125 = UINT64_MAX;
uint64_t x135 = 48199854982266LLU;
volatile int16_t x138 = -289;
volatile uint64_t t32 = 5314401638LLU;
int16_t x153 = -1;
volatile int16_t x155 = INT16_MIN;
int32_t x171 = INT32_MAX;
static volatile int16_t x172 = INT16_MIN;
volatile int64_t t35 = -460904811615064LL;
uint32_t x175 = UINT32_MAX;
static int16_t x176 = INT16_MIN;
static int64_t x192 = -292011LL;
volatile int16_t x193 = INT16_MIN;
uint64_t t41 = 840340674110LLU;
volatile uint32_t x206 = 3U;
uint32_t t45 = UINT32_MAX;
int8_t x219 = INT8_MIN;
uint64_t x225 = UINT64_MAX;
int32_t x226 = -1;
volatile uint64_t t47 = UINT64_MAX;
uint8_t x236 = UINT8_MAX;
volatile uint64_t t49 = 5LLU;
uint16_t x241 = 2255U;
volatile uint64_t t50 = 552LLU;
int32_t t52 = -1868;
uint16_t x269 = UINT16_MAX;
uint64_t x270 = UINT64_MAX;
uint32_t x273 = 18U;
int64_t x275 = 9587409627358LL;
int16_t x279 = -114;
int8_t x293 = 1;
static volatile uint32_t x298 = 328172082U;
int16_t x299 = -1;
volatile int64_t t59 = -94333996182738314LL;
volatile uint8_t x310 = 123U;
volatile int8_t x311 = -2;
static int64_t x321 = INT64_MIN;
volatile uint64_t x323 = 92217235621139LLU;
int16_t x325 = INT16_MIN;
uint8_t x340 = 22U;
int32_t x356 = -1;
static int32_t t65 = 2201;
int64_t t66 = 1890269366LL;
static uint8_t x362 = 6U;
int8_t x363 = INT8_MIN;
static int64_t t67 = INT64_MIN;
uint16_t x365 = 3U;
static volatile uint32_t x366 = UINT32_MAX;
uint32_t x367 = 165U;
volatile int8_t x377 = -1;
static int32_t x378 = -1;
uint16_t x379 = 0U;
volatile int32_t t70 = -378;
int32_t x386 = INT32_MIN;
volatile uint8_t x389 = 0U;
uint32_t x392 = 3410U;
static int32_t t74 = -5618926;
uint32_t x412 = UINT32_MAX;
static volatile uint32_t t77 = UINT32_MAX;
uint8_t x423 = 0U;
static int16_t x424 = 5620;
int32_t t78 = -28755238;
int32_t t79 = -9;
int8_t x431 = 30;
uint64_t x432 = 3LLU;
static volatile uint32_t x434 = UINT32_MAX;
static uint16_t x438 = 17013U;
int64_t x449 = INT64_MAX;
int64_t x453 = -1LL;
int32_t x454 = 15;
int8_t x456 = 5;
volatile int64_t x467 = 7552752987LL;
static int64_t x469 = INT64_MIN;
uint64_t t89 = 25307180916LLU;
int32_t x473 = INT32_MIN;
volatile int64_t x486 = 115LL;
int64_t t91 = -366LL;
uint16_t x491 = 4088U;
int64_t x493 = INT64_MAX;
int64_t x494 = -34LL;
static uint64_t t93 = 656065258931LLU;
static int16_t x500 = INT16_MAX;
static int32_t t94 = -1362143;
volatile int64_t x503 = -1LL;
int16_t x507 = 9862;
uint8_t x512 = 0U;
uint8_t x514 = 0U;
int16_t x520 = INT16_MAX;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MAX;
	int32_t t0 = -298942194;

	t0 = ((x1&(x2*x3))|x4);

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x11 = 220441435315LLU;
	static int32_t x12 = INT32_MIN;
	uint64_t t1 = 3991245138498LLU;

	t1 = ((x9&(x10*x11))|x12);

	if (t1 != 18446744071562109773LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 14U;
	int8_t x15 = -1;
	uint64_t x16 = 1LLU;
	uint64_t t2 = 740676138754LLU;

	t2 = ((x13&(x14*x15))|x16);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = 50;
	static volatile int16_t x27 = INT16_MIN;
	int8_t x28 = 5;
	static int32_t t3 = 49;

	t3 = ((x25&(x26*x27))|x28);

	if (t3 != -1638395) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x30 = UINT64_MAX;
	static volatile uint8_t x31 = UINT8_MAX;
	uint16_t x32 = UINT16_MAX;
	uint64_t t4 = 806138904765509LLU;

	t4 = ((x29&(x30*x31))|x32);

	if (t4 != 65535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = 1047341606;
	static uint16_t x34 = UINT16_MAX;
	int64_t x35 = -629LL;
	int32_t x36 = INT32_MIN;
	volatile int64_t t5 = -192569116338LL;

	t5 = ((x33&(x34*x35))|x36);

	if (t5 != -1140260316LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x37 = 2375030819342LL;
	volatile int32_t x38 = -1;
	int64_t t6 = -20LL;

	t6 = ((x37&(x38*x39))|x40);

	if (t6 != 2375030818846LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = UINT64_MAX;
	static int32_t x42 = -1;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;

	t7 = ((x41&(x42*x43))|x44);

	if (t7 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = INT64_MIN;
	uint16_t x46 = UINT16_MAX;
	uint8_t x47 = 44U;
	int64_t t8 = -7665562LL;

	t8 = ((x45&(x46*x47))|x48);

	if (t8 != 47LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x55 = -1;
	int8_t x56 = INT8_MAX;
	int32_t t9 = 6803;

	t9 = ((x53&(x54*x55))|x56);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x57 = 35639U;
	static uint64_t x58 = 27294411167LLU;
	int16_t x59 = -1;
	volatile uint64_t t10 = 9009056089050LLU;

	t10 = ((x57&(x58*x59))|x60);

	if (t10 != 14951LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = -1;
	int16_t x63 = INT16_MAX;
	static uint8_t x64 = UINT8_MAX;
	volatile int32_t t11 = -689183622;

	t11 = ((x61&(x62*x63))|x64);

	if (t11 != 255) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = -1;
	static int64_t x66 = INT64_MAX;
	volatile uint8_t x68 = 3U;
	volatile uint64_t t12 = 17060902019083830LLU;

	t12 = ((x65&(x66*x67))|x68);

	if (t12 != 18446670683345088391LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -1;
	uint32_t x71 = 1593324U;
	static volatile int8_t x72 = INT8_MAX;
	static volatile uint32_t t13 = 1277U;

	t13 = ((x69&(x70*x71))|x72);

	if (t13 != 4293374079U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x73 = -1;
	int16_t x76 = -809;
	volatile uint32_t t14 = 3144U;

	t14 = ((x73&(x74*x75))|x76);

	if (t14 != 4294966487U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 4555843U;
	volatile int32_t x82 = -28432;
	int16_t x83 = INT16_MAX;
	uint8_t x84 = 2U;
	volatile uint32_t t15 = 31U;

	t15 = ((x81&(x82*x83))|x84);

	if (t15 != 4195330U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 717U;
	int8_t x86 = 12;
	int32_t x87 = -292684;
	int8_t x88 = INT8_MIN;
	int32_t t16 = 32;

	t16 = ((x85&(x86*x87))|x88);

	if (t16 != -64) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 119U;
	int8_t x91 = INT8_MIN;
	uint32_t x92 = 6516U;
	uint32_t t17 = 118941U;

	t17 = ((x89&(x90*x91))|x92);

	if (t17 != 4294958580U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = INT32_MIN;
	int8_t x94 = -1;
	uint16_t x95 = 246U;
	volatile int32_t t18 = 0;

	t18 = ((x93&(x94*x95))|x96);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x97 = 90546527LLU;
	static int16_t x98 = INT16_MAX;
	uint8_t x99 = 3U;
	static int8_t x100 = INT8_MIN;
	volatile uint64_t t19 = 1312164686LLU;

	t19 = ((x97&(x98*x99))|x100);

	if (t19 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x102 = -523;
	int8_t x103 = 1;
	int16_t x104 = 124;
	volatile int32_t t20 = -24423508;

	t20 = ((x101&(x102*x103))|x104);

	if (t20 != 253) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -55922464;
	volatile uint64_t t21 = 5948430715472LLU;

	t21 = ((x105&(x106*x107))|x108);

	if (t21 != 18446744073653629152LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -13;
	static volatile int8_t x110 = INT8_MAX;
	int64_t x112 = INT64_MIN;
	int64_t t22 = 1059111LL;

	t22 = ((x109&(x110*x111))|x112);

	if (t22 != -9223372036854775566LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x114 = -1LL;
	volatile uint64_t x115 = UINT64_MAX;
	uint8_t x116 = 109U;
	static volatile uint64_t t23 = 2047090900150LLU;

	t23 = ((x113&(x114*x115))|x116);

	if (t23 != 109LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x117 = 2U;
	volatile int8_t x118 = 26;
	int8_t x119 = 0;
	int64_t x120 = -688570222870978LL;
	volatile int64_t t24 = 468031118871186832LL;

	t24 = ((x117&(x118*x119))|x120);

	if (t24 != -688570222870978LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x121 = 40U;
	int16_t x122 = INT16_MIN;
	int64_t x124 = INT64_MIN;
	static volatile int64_t t25 = INT64_MIN;

	t25 = ((x121&(x122*x123))|x124);

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x126 = 3883150;
	uint64_t x127 = UINT64_MAX;
	int16_t x128 = 44;
	volatile uint64_t t26 = 15449LLU;

	t26 = ((x125&(x126*x127))|x128);

	if (t26 != 18446744073705668478LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MAX;
	static int64_t x130 = 2445856LL;
	uint64_t x131 = UINT64_MAX;
	static int16_t x132 = -1;
	uint64_t t27 = UINT64_MAX;

	t27 = ((x129&(x130*x131))|x132);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	static int32_t x134 = -1;
	int8_t x136 = INT8_MIN;
	uint64_t t28 = 483972276798809293LLU;

	t28 = ((x133&(x134*x135))|x136);

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 487983U;
	static uint8_t x139 = UINT8_MAX;
	int32_t x140 = -1;
	volatile uint32_t t29 = UINT32_MAX;

	t29 = ((x137&(x138*x139))|x140);

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1LL;
	int16_t x142 = -138;
	int16_t x143 = 0;
	static int32_t x144 = 0;
	int64_t t30 = -751LL;

	t30 = ((x141&(x142*x143))|x144);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x145 = 11575;
	static uint8_t x146 = 10U;
	uint8_t x147 = UINT8_MAX;
	volatile int8_t x148 = INT8_MIN;
	int32_t t31 = -2236074;

	t31 = ((x145&(x146*x147))|x148);

	if (t31 != -74) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = 15LLU;
	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = INT16_MIN;
	int8_t x152 = 0;

	t32 = ((x149&(x150*x151))|x152);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x154 = -1LL;
	uint16_t x156 = 2632U;
	volatile int64_t t33 = 117907411LL;

	t33 = ((x153&(x154*x155))|x156);

	if (t33 != 35400LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = 5;
	int16_t x166 = INT16_MIN;
	static int8_t x167 = 32;
	uint64_t x168 = 2883153LLU;
	volatile uint64_t t34 = 1236LLU;

	t34 = ((x165&(x166*x167))|x168);

	if (t34 != 2883153LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = -38;
	static volatile int64_t x170 = 1LL;

	t35 = ((x169&(x170*x171))|x172);

	if (t35 != -38LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x173 = 1U;
	int8_t x174 = -3;
	uint32_t t36 = 50846U;

	t36 = ((x173&(x174*x175))|x176);

	if (t36 != 4294934529U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = UINT8_MAX;
	int16_t x178 = INT16_MAX;
	int64_t x179 = 4581557347LL;
	uint32_t x180 = 38U;
	int64_t t37 = -69237LL;

	t37 = ((x177&(x178*x179))|x180);

	if (t37 != 191LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x181 = 1812U;
	int64_t x182 = -1LL;
	int8_t x183 = INT8_MAX;
	int32_t x184 = -1;
	int64_t t38 = 3376631200589597LL;

	t38 = ((x181&(x182*x183))|x184);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = UINT16_MAX;
	int16_t x186 = INT16_MAX;
	volatile int64_t x187 = -936062071LL;
	static volatile uint8_t x188 = UINT8_MAX;
	int64_t t39 = 269387110495LL;

	t39 = ((x185&(x186*x187))|x188);

	if (t39 != 44287LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x189 = 55671U;
	int64_t x190 = INT64_MAX;
	int8_t x191 = -1;
	int64_t t40 = 587LL;

	t40 = ((x189&(x190*x191))|x192);

	if (t40 != -292011LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x194 = 6983U;
	int16_t x195 = -5796;
	volatile uint64_t x196 = 845379467LLU;

	t41 = ((x193&(x194*x195))|x196);

	if (t41 != 18446744073708992395LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 53U;
	uint16_t x198 = 3U;
	int16_t x199 = -1;
	volatile int64_t x200 = 112LL;
	static int64_t t42 = 207985842321763LL;

	t42 = ((x197&(x198*x199))|x200);

	if (t42 != 117LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = INT16_MIN;
	uint64_t x203 = UINT64_MAX;
	static int8_t x204 = 62;
	volatile uint64_t t43 = 1344083886LLU;

	t43 = ((x201&(x202*x203))|x204);

	if (t43 != 62LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = INT16_MIN;
	volatile int8_t x207 = -1;
	int64_t x208 = INT64_MIN;
	static volatile int64_t t44 = -75443199176739657LL;

	t44 = ((x205&(x206*x207))|x208);

	if (t44 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = -54446887;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 38U;
	uint32_t x216 = UINT32_MAX;

	t45 = ((x213&(x214*x215))|x216);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = 234157;
	static uint8_t x218 = 11U;
	uint8_t x220 = 43U;
	volatile int32_t t46 = 20344;

	t46 = ((x217&(x218*x219))|x220);

	if (t46 != 234155) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x227 = 1LLU;
	int16_t x228 = -1;

	t47 = ((x225&(x226*x227))|x228);

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x233 = 51U;
	int32_t x234 = 0;
	int64_t x235 = INT64_MIN;
	int64_t t48 = 6985482620464LL;

	t48 = ((x233&(x234*x235))|x236);

	if (t48 != 255LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x237 = 1U;
	static uint64_t x238 = 981435LLU;
	static int8_t x239 = INT8_MIN;
	int32_t x240 = 43;

	t49 = ((x237&(x238*x239))|x240);

	if (t49 != 43LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x242 = -245;
	static int16_t x243 = 308;
	uint64_t x244 = 34369279192691008LLU;

	t50 = ((x241&(x242*x243))|x244);

	if (t50 != 34369279192693068LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x249 = 4U;
	uint64_t x250 = 138959463LLU;
	static int64_t x251 = INT64_MIN;
	static volatile int32_t x252 = INT32_MAX;
	uint64_t t51 = 377481LLU;

	t51 = ((x249&(x250*x251))|x252);

	if (t51 != 2147483647LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x261 = 0;
	int8_t x262 = -36;
	int16_t x263 = -1;
	uint8_t x264 = 112U;

	t52 = ((x261&(x262*x263))|x264);

	if (t52 != 112) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x265 = UINT8_MAX;
	uint64_t x266 = UINT64_MAX;
	static int32_t x267 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	volatile uint64_t t53 = 107LLU;

	t53 = ((x265&(x266*x267))|x268);

	if (t53 != 65535LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;
	volatile uint64_t t54 = 36506488817LLU;

	t54 = ((x269&(x270*x271))|x272);

	if (t54 != 65535LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x274 = 1448900731706245193LLU;
	static volatile int16_t x276 = -1;
	uint64_t t55 = UINT64_MAX;

	t55 = ((x273&(x274*x275))|x276);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x277 = 50U;
	volatile int16_t x278 = INT16_MAX;
	static int64_t x280 = 483632LL;
	int64_t t56 = 1060709170LL;

	t56 = ((x277&(x278*x279))|x280);

	if (t56 != 483634LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x289 = -7816;
	int8_t x290 = 0;
	volatile int64_t x291 = 853989207348495735LL;
	int64_t x292 = -84809981020LL;
	volatile int64_t t57 = 30LL;

	t57 = ((x289&(x290*x291))|x292);

	if (t57 != -84809981020LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x294 = INT16_MAX;
	int16_t x295 = -204;
	volatile int8_t x296 = -1;
	volatile int32_t t58 = 2982607;

	t58 = ((x293&(x294*x295))|x296);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = -1;
	int64_t x300 = -6060097864LL;

	t59 = ((x297&(x298*x299))|x300);

	if (t59 != -4312104962LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x309 = UINT64_MAX;
	uint32_t x312 = 1979U;
	volatile uint64_t t60 = 53780658258LLU;

	t60 = ((x309&(x310*x311))|x312);

	if (t60 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x313 = INT64_MAX;
	int64_t x314 = -6151LL;
	uint64_t x315 = 3990LLU;
	uint8_t x316 = 13U;
	uint64_t t61 = 2093755987101155LLU;

	t61 = ((x313&(x314*x315))|x316);

	if (t61 != 9223372036830233327LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x322 = -2431440623640LL;
	static uint32_t x324 = 1801577U;
	uint64_t t62 = 67650313665260855LLU;

	t62 = ((x321&(x322*x323))|x324);

	if (t62 != 9223372036856577385LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x326 = -1;
	uint64_t x327 = 596589223621LLU;
	int32_t x328 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = ((x325&(x326*x327))|x328);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x337 = -1;
	static int8_t x338 = -1;
	uint8_t x339 = 11U;
	static int32_t t64 = -17151;

	t64 = ((x337&(x338*x339))|x340);

	if (t64 != -9) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = INT16_MIN;
	static volatile uint8_t x354 = 1U;
	int8_t x355 = -1;

	t65 = ((x353&(x354*x355))|x356);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x357 = INT64_MIN;
	uint32_t x358 = 103989U;
	uint32_t x359 = 239606733U;
	volatile int32_t x360 = -7023493;

	t66 = ((x357&(x358*x359))|x360);

	if (t66 != -7023493LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x361 = 26;
	int64_t x364 = INT64_MIN;

	t67 = ((x361&(x362*x363))|x364);

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x368 = 123U;
	volatile uint32_t t68 = 21642U;

	t68 = ((x365&(x366*x367))|x368);

	if (t68 != 123U) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint8_t x369 = UINT8_MAX;
	int64_t x370 = -1LL;
	uint16_t x371 = UINT16_MAX;
	int32_t x372 = INT32_MIN;
	int64_t t69 = 5193485LL;

	t69 = ((x369&(x370*x371))|x372);

	if (t69 != -2147483647LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x380 = 15;

	t70 = ((x377&(x378*x379))|x380);

	if (t70 != 15) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x381 = INT8_MAX;
	int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MIN;
	volatile int16_t x384 = INT16_MIN;
	static volatile int32_t t71 = -4;

	t71 = ((x381&(x382*x383))|x384);

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x385 = 7U;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t72 = 60949308LLU;

	t72 = ((x385&(x386*x387))|x388);

	if (t72 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x390 = INT16_MAX;
	uint8_t x391 = 3U;
	volatile uint32_t t73 = 48666143U;

	t73 = ((x389&(x390*x391))|x392);

	if (t73 != 3410U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x393 = UINT16_MAX;
	uint8_t x394 = 21U;
	static int32_t x395 = -6;
	int32_t x396 = INT32_MIN;

	t74 = ((x393&(x394*x395))|x396);

	if (t74 != -2147418238) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x397 = INT16_MIN;
	uint32_t x398 = 2U;
	static volatile uint32_t x399 = UINT32_MAX;
	int64_t x400 = INT64_MAX;
	int64_t t75 = INT64_MAX;

	t75 = ((x397&(x398*x399))|x400);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = 41962;
	int16_t x402 = -13186;
	int16_t x403 = INT16_MIN;
	uint64_t x404 = 278623556341800LLU;
	uint64_t t76 = 415LLU;

	t76 = ((x401&(x402*x403))|x404);

	if (t76 != 278623556341800LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x409 = INT32_MIN;
	int16_t x410 = 1;
	uint32_t x411 = 716043671U;

	t77 = ((x409&(x410*x411))|x412);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x421 = UINT16_MAX;
	int16_t x422 = 3855;

	t78 = ((x421&(x422*x423))|x424);

	if (t78 != 5620) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x425 = INT8_MIN;
	static volatile uint16_t x426 = 22371U;
	int16_t x427 = -1;
	int16_t x428 = INT16_MAX;

	t79 = ((x425&(x426*x427))|x428);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x429 = 4481623514696LL;
	int64_t x430 = 19925765509322421LL;
	uint64_t t80 = 155LLU;

	t80 = ((x429&(x430*x431))|x432);

	if (t80 != 4467866175491LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x433 = UINT16_MAX;
	static int16_t x435 = INT16_MIN;
	static int16_t x436 = -1;
	static uint32_t t81 = UINT32_MAX;

	t81 = ((x433&(x434*x435))|x436);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x437 = -7378178784833388LL;
	int16_t x439 = INT16_MIN;
	int64_t x440 = INT64_MIN;
	volatile int64_t t82 = -39330945921LL;

	t82 = ((x437&(x438*x439))|x440);

	if (t82 != -7378179324870656LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x445 = -1;
	int8_t x446 = INT8_MIN;
	volatile int16_t x447 = -9;
	uint8_t x448 = 28U;
	volatile int32_t t83 = -220612828;

	t83 = ((x445&(x446*x447))|x448);

	if (t83 != 1180) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x450 = INT32_MIN;
	uint64_t x451 = UINT64_MAX;
	uint32_t x452 = UINT32_MAX;
	uint64_t t84 = 198745396616651347LLU;

	t84 = ((x449&(x450*x451))|x452);

	if (t84 != 4294967295LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x455 = UINT32_MAX;
	int64_t t85 = -10573LL;

	t85 = ((x453&(x454*x455))|x456);

	if (t85 != 4294967285LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x457 = 1U;
	int32_t x458 = -1;
	int32_t x459 = 314;
	static int8_t x460 = -22;
	volatile int32_t t86 = 6;

	t86 = ((x457&(x458*x459))|x460);

	if (t86 != -22) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x461 = 1;
	int8_t x462 = INT8_MIN;
	uint32_t x463 = 109707401U;
	int64_t x464 = INT64_MIN;
	int64_t t87 = INT64_MIN;

	t87 = ((x461&(x462*x463))|x464);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = INT32_MIN;
	int16_t x466 = 2;
	int64_t x468 = -1LL;
	volatile int64_t t88 = -1169753435612LL;

	t88 = ((x465&(x466*x467))|x468);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x470 = INT8_MIN;
	volatile uint64_t x471 = 25968314401LLU;
	volatile int16_t x472 = -767;

	t89 = ((x469&(x470*x471))|x472);

	if (t89 != 18446744073709550849LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x474 = -11781416530LL;
	int16_t x475 = 10711;
	static int32_t x476 = -137922;
	static volatile int64_t t90 = 133293575LL;

	t90 = ((x473&(x474*x475))|x476);

	if (t90 != -137922LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x485 = INT32_MIN;
	uint8_t x487 = 3U;
	static int16_t x488 = INT16_MIN;

	t91 = ((x485&(x486*x487))|x488);

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x489 = UINT8_MAX;
	volatile uint32_t x490 = UINT32_MAX;
	uint16_t x492 = UINT16_MAX;
	uint32_t t92 = 28U;

	t92 = ((x489&(x490*x491))|x492);

	if (t92 != 65535U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x495 = 1229;
	volatile uint64_t x496 = 118981808370460922LLU;

	t93 = ((x493&(x494*x495))|x496);

	if (t93 != 9223372036854775038LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x497 = INT8_MIN;
	int32_t x498 = -1;
	int8_t x499 = INT8_MIN;

	t94 = ((x497&(x498*x499))|x500);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x501 = 12267U;
	static uint32_t x502 = 6367681U;
	static int8_t x504 = 16;
	volatile int64_t t95 = 4342400013604529LL;

	t95 = ((x501&(x502*x503))|x504);

	if (t95 != 1595LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x505 = UINT64_MAX;
	static int16_t x506 = 15;
	int64_t x508 = -1LL;
	uint64_t t96 = UINT64_MAX;

	t96 = ((x505&(x506*x507))|x508);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x509 = 7099LLU;
	static int8_t x510 = 37;
	static int64_t x511 = -35722894535857466LL;
	volatile uint64_t t97 = 26250603LLU;

	t97 = ((x509&(x510*x511))|x512);

	if (t97 != 2714LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x513 = -1;
	int16_t x515 = INT16_MIN;
	int16_t x516 = INT16_MIN;
	int32_t t98 = 17;

	t98 = ((x513&(x514*x515))|x516);

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x517 = UINT16_MAX;
	static uint32_t x518 = UINT32_MAX;
	volatile int8_t x519 = -1;
	uint32_t t99 = 517916537U;

	t99 = ((x517&(x518*x519))|x520);

	if (t99 != 32767U) { NG(); } else { ; }
	
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

