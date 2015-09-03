#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x18 = -1984;
static int16_t x21 = 38;
uint8_t x25 = UINT8_MAX;
static int32_t x32 = INT32_MAX;
int16_t x33 = -1;
uint64_t x39 = UINT64_MAX;
int64_t t11 = 5LL;
int16_t x54 = INT16_MIN;
volatile int16_t x55 = 108;
uint32_t t13 = 1545709359U;
static int64_t x57 = -100LL;
static volatile uint64_t x81 = 84994971428884048LLU;
uint64_t t18 = 16497500344204LLU;
uint16_t x86 = 6338U;
volatile uint64_t t19 = 51071375LLU;
int16_t x90 = -1;
uint32_t x96 = 1U;
static uint32_t x97 = UINT32_MAX;
static volatile int64_t x98 = INT64_MIN;
static int32_t x110 = -1;
uint32_t x111 = 400U;
volatile uint32_t t24 = 44559479U;
volatile int8_t x115 = 51;
int16_t x134 = INT16_MIN;
uint16_t x135 = 0U;
int64_t x140 = -619406LL;
volatile int32_t x144 = -1;
uint64_t x149 = UINT64_MAX;
volatile uint32_t x150 = 481235U;
volatile uint64_t t32 = 14674980LLU;
uint16_t x160 = UINT16_MAX;
static int16_t x165 = 1906;
int8_t x167 = -1;
int32_t x183 = -1;
int16_t x184 = INT16_MAX;
int64_t t40 = 3715746LL;
int32_t x185 = 1669;
int8_t x195 = -1;
volatile uint32_t t43 = 57620784U;
uint8_t x204 = 96U;
static int64_t x210 = INT64_MIN;
uint8_t x213 = 20U;
static int8_t x216 = -7;
uint64_t t46 = 6401293456269789030LLU;
static int8_t x223 = INT8_MIN;
uint8_t x225 = UINT8_MAX;
uint64_t x231 = UINT64_MAX;
int64_t x232 = -1LL;
int8_t x234 = INT8_MAX;
uint8_t x235 = UINT8_MAX;
int16_t x238 = 3471;
int32_t x241 = -1;
volatile uint64_t x260 = UINT64_MAX;
int8_t x262 = INT8_MAX;
int64_t x267 = -2025022621611222LL;
int8_t x270 = INT8_MIN;
int32_t x271 = 1043144418;
uint64_t t60 = 36LLU;
volatile int16_t x313 = -1;
int8_t x323 = 0;
volatile uint32_t t65 = 114671U;
static int32_t x333 = -1;
int16_t x334 = INT16_MIN;
volatile int64_t t66 = 2903LL;
static int64_t x338 = 944602763628277LL;
uint16_t x353 = 12U;
volatile int32_t t69 = 41430468;
int8_t x362 = 0;
int64_t x363 = -262746438LL;
int16_t x364 = 538;
int16_t x365 = INT16_MAX;
volatile uint64_t t72 = 126LLU;
int32_t x375 = 151768848;
int64_t x378 = -1LL;
int16_t x379 = INT16_MIN;
volatile int16_t x381 = INT16_MIN;
static volatile uint64_t t79 = 1065734049898189355LLU;
static int8_t x406 = INT8_MIN;
static int64_t x413 = 87635940LL;
static uint64_t x422 = 171686492LLU;
int16_t x426 = -1;
int16_t x427 = INT16_MIN;
int16_t x436 = INT16_MIN;
static int32_t x439 = -4252390;
int16_t x440 = -1;
uint32_t x446 = UINT32_MAX;
int64_t x458 = INT64_MAX;
volatile int64_t x459 = INT64_MIN;
uint64_t x473 = 24327449120874LLU;
int32_t x476 = -54;
volatile uint64_t t95 = 14430168143432LLU;
uint16_t x485 = UINT16_MAX;
volatile int32_t t98 = 4109;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = -1;
	int32_t x3 = 5288993;
	volatile int8_t x4 = 0;
	int32_t t0 = -107664992;

	t0 = ((x1-(x2+x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	static uint64_t x6 = 167339587152LLU;
	uint8_t x7 = 0U;
	static uint16_t x8 = 530U;
	volatile uint64_t t1 = 6092322847801LLU;

	t1 = ((x5-(x6+x7))&x8);

	if (t1 != 514LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -1;
	int64_t x10 = 2021LL;
	uint64_t x11 = 4197971868322632LLU;
	static volatile int16_t x12 = INT16_MIN;
	uint64_t t2 = 51307717753694845LLU;

	t2 = ((x9-(x10+x11))&x12);

	if (t2 != 18442546101841199104LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -4;
	uint8_t x14 = 2U;
	int16_t x15 = INT16_MIN;
	int64_t x16 = 1LL;
	volatile int64_t t3 = 7765LL;

	t3 = ((x13-(x14+x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x19 = -2380LL;
	uint64_t x20 = 21001388LLU;
	static volatile uint64_t t4 = 24186121848952226LLU;

	t4 = ((x17-(x18+x19))&x20);

	if (t4 != 4104LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x22 = -62983LL;
	int8_t x23 = INT8_MIN;
	int16_t x24 = -1;
	static int64_t t5 = -2438218857475LL;

	t5 = ((x21-(x22+x23))&x24);

	if (t5 != 63149LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x26 = 449LLU;
	int32_t x27 = 4663;
	static volatile uint8_t x28 = 0U;
	uint64_t t6 = 742616675698949LLU;

	t6 = ((x25-(x26+x27))&x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int32_t x30 = 29397;
	uint32_t x31 = 13873U;
	uint32_t t7 = 1750662363U;

	t7 = ((x29-(x30+x31))&x32);

	if (t7 != 2147473145U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 111438U;
	uint64_t x35 = 5473959590652045LLU;
	int8_t x36 = -1;
	volatile uint64_t t8 = 48236325LLU;

	t8 = ((x33-(x34+x35))&x36);

	if (t8 != 18441270114118788132LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	uint32_t x40 = 0U;
	static uint64_t t9 = 2122376689LLU;

	t9 = ((x37-(x38+x39))&x40);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = UINT32_MAX;
	uint32_t x44 = 647U;
	volatile uint32_t t10 = 111830U;

	t10 = ((x41-(x42+x43))&x44);

	if (t10 != 643U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 16779562344LL;
	int16_t x46 = 3753;
	volatile int16_t x47 = INT16_MAX;
	int64_t x48 = -1LL;

	t11 = ((x45-(x46+x47))&x48);

	if (t11 != 16779525824LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 1;
	volatile uint16_t x50 = 1U;
	static volatile uint64_t x51 = 1312998731349845941LLU;
	volatile int16_t x52 = INT16_MAX;
	volatile uint64_t t12 = 97439LLU;

	t12 = ((x49-(x50+x51))&x52);

	if (t12 != 6219LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	uint32_t x56 = 5U;

	t13 = ((x53-(x54+x55))&x56);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = INT16_MIN;
	static volatile int16_t x59 = -14612;
	int16_t x60 = INT16_MAX;
	int64_t t14 = 2407628954096079LL;

	t14 = ((x57-(x58+x59))&x60);

	if (t14 != 14512LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x65 = 30;
	uint64_t x66 = 141LLU;
	volatile int16_t x67 = -1;
	static int8_t x68 = INT8_MAX;
	volatile uint64_t t15 = 92651768267LLU;

	t15 = ((x65-(x66+x67))&x68);

	if (t15 != 18LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = INT64_MAX;
	volatile int16_t x74 = 11;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	int64_t t16 = -957697974758247485LL;

	t16 = ((x73-(x74+x75))&x76);

	if (t16 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x77 = 3U;
	static uint64_t x78 = 70884882313133LLU;
	uint8_t x79 = 0U;
	int32_t x80 = INT32_MAX;
	volatile uint64_t t17 = 380012LLU;

	t17 = ((x77-(x78+x79))&x80);

	if (t17 != 1405423702LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x82 = 234709;
	uint8_t x83 = UINT8_MAX;
	int64_t x84 = -1LL;

	t18 = ((x81-(x82+x83))&x84);

	if (t18 != 84994971428649084LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	int16_t x87 = -37;
	uint64_t x88 = 294913LLU;

	t19 = ((x85-(x86+x87))&x88);

	if (t19 != 294912LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x89 = -1LL;
	uint16_t x91 = 32010U;
	int64_t x92 = -1LL;
	volatile int64_t t20 = 3252396291474346759LL;

	t20 = ((x89-(x90+x91))&x92);

	if (t20 != -32010LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = 38U;
	uint32_t x94 = 337573635U;
	int64_t x95 = -478108982125LL;
	static volatile int64_t t21 = 37813979039271788LL;

	t21 = ((x93-(x94+x95))&x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x99 = INT64_MAX;
	int8_t x100 = -43;
	volatile int64_t t22 = -112235LL;

	t22 = ((x97-(x98+x99))&x100);

	if (t22 != 4294967296LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	static uint32_t x102 = 1U;
	uint16_t x103 = 7066U;
	int32_t x104 = 1861358;
	uint32_t t23 = 1081U;

	t23 = ((x101-(x102+x103))&x104);

	if (t23 != 25700U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = -1;
	int16_t x112 = INT16_MIN;

	t24 = ((x109-(x110+x111))&x112);

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -861888445834LL;
	static int64_t x114 = 538820119LL;
	volatile int64_t x116 = -1LL;
	int64_t t25 = 462728863LL;

	t25 = ((x113-(x114+x115))&x116);

	if (t25 != -862427266004LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MAX;
	uint64_t x122 = 41LLU;
	static int32_t x123 = INT32_MIN;
	int32_t x124 = -193056;
	volatile uint64_t t26 = 1855934874484719451LLU;

	t26 = ((x121-(x122+x123))&x124);

	if (t26 != 2147483712LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MAX;
	volatile uint16_t x126 = 3U;
	static int8_t x127 = INT8_MIN;
	int32_t x128 = -60;
	volatile int32_t t27 = -5;

	t27 = ((x125-(x126+x127))&x128);

	if (t27 != 32836) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x133 = INT16_MAX;
	int64_t x136 = -888113255244LL;
	static int64_t t28 = -18320242560970224LL;

	t28 = ((x133-(x134+x135))&x136);

	if (t28 != 11444LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	static int32_t x138 = INT32_MIN;
	uint32_t x139 = 28798U;
	int64_t t29 = 0LL;

	t29 = ((x137-(x138+x139))&x140);

	if (t29 != 2146864128LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x141 = -1383;
	uint16_t x142 = 1240U;
	volatile uint16_t x143 = 0U;
	volatile int32_t t30 = -164;

	t30 = ((x141-(x142+x143))&x144);

	if (t30 != -2623) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x145 = 0U;
	static int8_t x146 = INT8_MIN;
	static volatile int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	volatile int32_t t31 = 147;

	t31 = ((x145-(x146+x147))&x148);

	if (t31 != 32896) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x151 = INT32_MIN;
	static int16_t x152 = 1;

	t32 = ((x149-(x150+x151))&x152);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -1LL;
	uint32_t x154 = 187672560U;
	volatile int8_t x155 = -8;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t33 = -31505201113LL;

	t33 = ((x153-(x154+x155))&x156);

	if (t33 != 23LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = 311;
	int64_t x158 = INT64_MAX;
	int8_t x159 = INT8_MIN;
	static int64_t t34 = -460499859610LL;

	t34 = ((x157-(x158+x159))&x160);

	if (t34 != 440LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 2975U;
	volatile int16_t x162 = -1;
	static uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MAX;
	uint64_t t35 = 2LLU;

	t35 = ((x161-(x162+x163))&x164);

	if (t35 != 2977LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x166 = 26641089U;
	uint8_t x168 = UINT8_MAX;
	volatile uint32_t t36 = 125831U;

	t36 = ((x165-(x166+x167))&x168);

	if (t36 != 178U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	int32_t x170 = -1;
	static volatile int8_t x171 = INT8_MIN;
	static int8_t x172 = INT8_MAX;
	int32_t t37 = -2258930;

	t37 = ((x169-(x170+x171))&x172);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x173 = 1988U;
	int64_t x174 = INT64_MAX;
	volatile uint64_t x175 = 2031LLU;
	int8_t x176 = -1;
	volatile uint64_t t38 = 240LLU;

	t38 = ((x173-(x174+x175))&x176);

	if (t38 != 9223372036854775766LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = -3372800LL;
	int16_t x178 = INT16_MIN;
	int16_t x179 = INT16_MAX;
	int8_t x180 = INT8_MIN;
	int64_t t39 = -199542983959LL;

	t39 = ((x177-(x178+x179))&x180);

	if (t39 != -3372800LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x181 = -1;
	int64_t x182 = -241483LL;

	t40 = ((x181-(x182+x183))&x184);

	if (t40 != 12107LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x186 = INT8_MIN;
	uint32_t x187 = UINT32_MAX;
	static uint16_t x188 = UINT16_MAX;
	uint32_t t41 = 116U;

	t41 = ((x185-(x186+x187))&x188);

	if (t41 != 1798U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = UINT16_MAX;
	uint64_t x190 = UINT64_MAX;
	int64_t x191 = INT64_MAX;
	int8_t x192 = INT8_MIN;
	uint64_t t42 = 2293568845325303899LLU;

	t42 = ((x189-(x190+x191))&x192);

	if (t42 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x193 = 13U;
	uint32_t x194 = 1771U;
	int32_t x196 = INT32_MAX;

	t43 = ((x193-(x194+x195))&x196);

	if (t43 != 2147481891U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x201 = 3732796U;
	volatile int8_t x202 = INT8_MAX;
	static uint64_t x203 = UINT64_MAX;
	volatile uint64_t t44 = 11LLU;

	t44 = ((x201-(x202+x203))&x204);

	if (t44 != 32LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x209 = 115695LLU;
	int8_t x211 = INT8_MAX;
	static int64_t x212 = INT64_MIN;
	static volatile uint64_t t45 = 12445LLU;

	t45 = ((x209-(x210+x211))&x212);

	if (t45 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x214 = -1;
	volatile uint64_t x215 = UINT64_MAX;

	t46 = ((x213-(x214+x215))&x216);

	if (t46 != 16LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint64_t x217 = 11057042907LLU;
	static volatile uint8_t x218 = 28U;
	int8_t x219 = 10;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t47 = 1LLU;

	t47 = ((x217-(x218+x219))&x220);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 0U;
	static uint16_t x222 = 1U;
	int16_t x224 = -1;
	volatile int32_t t48 = -1076;

	t48 = ((x221-(x222+x223))&x224);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = UINT64_MAX;
	static int64_t x228 = INT64_MIN;
	volatile uint64_t t49 = 16894511492894989LLU;

	t49 = ((x225-(x226+x227))&x228);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = -684740830;
	uint64_t x230 = UINT64_MAX;
	uint64_t t50 = 475LLU;

	t50 = ((x229-(x230+x231))&x232);

	if (t50 != 18446744073024810788LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -18183806;
	uint8_t x236 = 9U;
	int32_t t51 = -4543;

	t51 = ((x233-(x234+x235))&x236);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x237 = UINT64_MAX;
	static volatile int16_t x239 = -9;
	volatile int16_t x240 = INT16_MIN;
	volatile uint64_t t52 = 250742LLU;

	t52 = ((x237-(x238+x239))&x240);

	if (t52 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x242 = INT32_MIN;
	uint8_t x243 = UINT8_MAX;
	uint16_t x244 = UINT16_MAX;
	int32_t t53 = -763449;

	t53 = ((x241-(x242+x243))&x244);

	if (t53 != 65280) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x245 = 3409U;
	int8_t x246 = INT8_MIN;
	int8_t x247 = 1;
	int8_t x248 = INT8_MIN;
	volatile uint32_t t54 = 30880U;

	t54 = ((x245-(x246+x247))&x248);

	if (t54 != 3456U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = UINT8_MAX;
	static uint32_t x254 = 2398958U;
	int8_t x255 = INT8_MAX;
	int32_t x256 = INT32_MAX;
	uint32_t t55 = 3730U;

	t55 = ((x253-(x254+x255))&x256);

	if (t55 != 2145084818U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x257 = -1LL;
	volatile int16_t x258 = -1;
	uint32_t x259 = 78001U;
	uint64_t t56 = 107LLU;

	t56 = ((x257-(x258+x259))&x260);

	if (t56 != 18446744073709473615LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x261 = 9U;
	int16_t x263 = INT16_MIN;
	static uint64_t x264 = UINT64_MAX;
	uint64_t t57 = 54107850641LLU;

	t57 = ((x261-(x262+x263))&x264);

	if (t57 != 32650LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = 124LL;
	int8_t x266 = INT8_MIN;
	uint64_t x268 = 3703329131580374647LLU;
	volatile uint64_t t58 = 0LLU;

	t58 = ((x265-(x266+x267))&x268);

	if (t58 != 1143738282030162LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = -1LL;
	volatile int32_t x272 = -1;
	int64_t t59 = -104804230994943703LL;

	t59 = ((x269-(x270+x271))&x272);

	if (t59 != -1043144291LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x281 = UINT64_MAX;
	uint8_t x282 = 31U;
	static int32_t x283 = 495486431;
	static int16_t x284 = -29;

	t60 = ((x281-(x282+x283))&x284);

	if (t60 != 18446744073214065153LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x285 = INT16_MAX;
	uint16_t x286 = 1U;
	int16_t x287 = INT16_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	static int32_t t61 = -249;

	t61 = ((x285-(x286+x287))&x288);

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = INT64_MIN;
	uint32_t x310 = 48755U;
	uint64_t x311 = 482072616476508348LLU;
	static int64_t x312 = -20643426824395547LL;
	static volatile uint64_t t62 = 46931489LLU;

	t62 = ((x309-(x310+x311))&x312);

	if (t62 != 8720658278744867009LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x314 = INT8_MIN;
	static int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	int32_t t63 = -425;

	t63 = ((x313-(x314+x315))&x316);

	if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x321 = -1;
	uint16_t x322 = 0U;
	volatile int64_t x324 = INT64_MIN;
	int64_t t64 = INT64_MIN;

	t64 = ((x321-(x322+x323))&x324);

	if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x329 = 79698316U;
	volatile uint32_t x330 = 232861U;
	static int8_t x331 = INT8_MIN;
	int32_t x332 = INT32_MIN;

	t65 = ((x329-(x330+x331))&x332);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x335 = INT8_MIN;
	volatile int64_t x336 = -18156057025LL;

	t66 = ((x333-(x334+x335))&x336);

	if (t66 != 32831LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = INT32_MAX;
	uint64_t x339 = 36022049389LLU;
	static int64_t x340 = -1LL;
	volatile uint64_t t67 = 193150080441075LLU;

	t67 = ((x337-(x338+x339))&x340);

	if (t67 != 18445799437071357597LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x345 = 130291U;
	uint16_t x346 = 103U;
	uint64_t x347 = UINT64_MAX;
	static int8_t x348 = INT8_MIN;
	volatile uint64_t t68 = 48254785393973LLU;

	t68 = ((x345-(x346+x347))&x348);

	if (t68 != 130176LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x354 = -1;
	int16_t x355 = -1;
	uint16_t x356 = 1631U;

	t69 = ((x353-(x354+x355))&x356);

	if (t69 != 14) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x357 = INT8_MAX;
	static volatile uint8_t x358 = 1U;
	int16_t x359 = INT16_MIN;
	int64_t x360 = INT64_MAX;
	volatile int64_t t70 = -42712251605LL;

	t70 = ((x357-(x358+x359))&x360);

	if (t70 != 32894LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x361 = -1;
	volatile int64_t t71 = -85978LL;

	t71 = ((x361-(x362+x363))&x364);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x366 = 201703381558808LLU;
	static int64_t x367 = 90612661LL;
	static uint8_t x368 = UINT8_MAX;

	t72 = ((x365-(x366+x367))&x368);

	if (t72 != 50LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x369 = INT32_MAX;
	int64_t x370 = 245091901309LL;
	int8_t x371 = INT8_MAX;
	int64_t x372 = -1301221193682431951LL;
	static int64_t t73 = -2LL;

	t73 = ((x369-(x370+x371))&x372);

	if (t73 != -1301221402258423807LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = INT16_MIN;
	uint32_t x374 = 102120U;
	static uint32_t x376 = 27U;
	uint32_t t74 = 10145U;

	t74 = ((x373-(x374+x375))&x376);

	if (t74 != 8U) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x380 = -61;
	int64_t t75 = -48LL;

	t75 = ((x377-(x378+x379))&x380);

	if (t75 != 98304LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x382 = 10224390U;
	int8_t x383 = 2;
	int8_t x384 = INT8_MIN;
	uint32_t t76 = 228816U;

	t76 = ((x381-(x382+x383))&x384);

	if (t76 != 4284710016U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x385 = 1577LLU;
	uint8_t x386 = 2U;
	volatile uint8_t x387 = UINT8_MAX;
	static volatile int8_t x388 = -1;
	static volatile uint64_t t77 = 6322618403LLU;

	t77 = ((x385-(x386+x387))&x388);

	if (t77 != 1320LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x393 = INT32_MAX;
	uint8_t x394 = 22U;
	static uint32_t x395 = 92U;
	static int8_t x396 = INT8_MIN;
	volatile uint32_t t78 = 268237U;

	t78 = ((x393-(x394+x395))&x396);

	if (t78 != 2147483520U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x398 = 206321;
	static int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MIN;

	t79 = ((x397-(x398+x399))&x400);

	if (t79 != 18446744073709322240LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x401 = INT16_MAX;
	volatile uint64_t x402 = UINT64_MAX;
	static uint16_t x403 = 1576U;
	static volatile int16_t x404 = INT16_MAX;
	volatile uint64_t t80 = 0LLU;

	t80 = ((x401-(x402+x403))&x404);

	if (t80 != 31192LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x405 = UINT64_MAX;
	int16_t x407 = 31;
	uint16_t x408 = 4913U;
	static uint64_t t81 = 770595272756597090LLU;

	t81 = ((x405-(x406+x407))&x408);

	if (t81 != 32LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x409 = INT16_MAX;
	volatile uint64_t x410 = UINT64_MAX;
	int16_t x411 = -1;
	int64_t x412 = 94LL;
	uint64_t t82 = 266061LLU;

	t82 = ((x409-(x410+x411))&x412);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x414 = -24701682;
	volatile int64_t x415 = 9397043LL;
	static int32_t x416 = INT32_MIN;
	int64_t t83 = 860733LL;

	t83 = ((x413-(x414+x415))&x416);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	int8_t x419 = INT8_MIN;
	static int16_t x420 = INT16_MAX;
	volatile int64_t t84 = 0LL;

	t84 = ((x417-(x418+x419))&x420);

	if (t84 != 129LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x421 = -1;
	static int32_t x423 = INT32_MAX;
	volatile uint16_t x424 = 5036U;
	volatile uint64_t t85 = 1LLU;

	t85 = ((x421-(x422+x423))&x424);

	if (t85 != 420LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x425 = INT32_MIN;
	volatile int16_t x428 = 247;
	int32_t t86 = 322648;

	t86 = ((x425-(x426+x427))&x428);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x429 = 10655246634391LLU;
	int8_t x430 = 1;
	int16_t x431 = INT16_MIN;
	int64_t x432 = 72LL;
	volatile uint64_t t87 = 190775207224LLU;

	t87 = ((x429-(x430+x431))&x432);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MAX;
	int16_t x435 = -1;
	int32_t t88 = -26;

	t88 = ((x433-(x434+x435))&x436);

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x437 = 1537LLU;
	static uint64_t x438 = 24519LLU;
	static volatile uint64_t t89 = 5300635670LLU;

	t89 = ((x437-(x438+x439))&x440);

	if (t89 != 4229408LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x445 = 8;
	uint64_t x447 = 151790LLU;
	uint8_t x448 = UINT8_MAX;
	static uint64_t t90 = 2776LLU;

	t90 = ((x445-(x446+x447))&x448);

	if (t90 != 27LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x453 = -1;
	int64_t x454 = 97718549259LL;
	uint64_t x455 = 183LLU;
	int16_t x456 = INT16_MIN;
	uint64_t t91 = 398159834169842LLU;

	t91 = ((x453-(x454+x455))&x456);

	if (t91 != 18446743975990984704LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x457 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	int64_t t92 = 11257105LL;

	t92 = ((x457-(x458+x459))&x460);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x465 = -1;
	uint64_t x466 = 139212502859246LLU;
	int64_t x467 = INT64_MIN;
	uint16_t x468 = 14U;
	volatile uint64_t t93 = 123705781193518949LLU;

	t93 = ((x465-(x466+x467))&x468);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x469 = INT64_MAX;
	volatile uint64_t x470 = 3547351616219982213LLU;
	static int32_t x471 = INT32_MIN;
	uint64_t x472 = UINT64_MAX;
	uint64_t t94 = 126089544725551510LLU;

	t94 = ((x469-(x470+x471))&x472);

	if (t94 != 5676020422782277242LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x474 = UINT64_MAX;
	int64_t x475 = INT64_MIN;

	t95 = ((x473-(x474+x475))&x476);

	if (t95 != 9223396364303896650LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x477 = 14U;
	uint32_t x478 = 717319U;
	int8_t x479 = -13;
	static uint64_t x480 = 469LLU;
	uint64_t t96 = 214162398LLU;

	t96 = ((x477-(x478+x479))&x480);

	if (t96 != 20LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x481 = -328515130125666LL;
	int64_t x482 = INT64_MIN;
	int64_t x483 = 9332216LL;
	uint64_t x484 = 1111520LLU;
	uint64_t t97 = 92353213876115605LLU;

	t97 = ((x481-(x482+x483))&x484);

	if (t97 != 9376LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x486 = -170838636;
	static int8_t x487 = INT8_MAX;
	int32_t x488 = INT32_MIN;

	t98 = ((x485-(x486+x487))&x488);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x493 = 1U;
	int64_t x494 = 1175206LL;
	volatile uint8_t x495 = UINT8_MAX;
	uint16_t x496 = UINT16_MAX;
	int64_t t99 = -10245226679813LL;

	t99 = ((x493-(x494+x495))&x496);

	if (t99 != 4188LL) { NG(); } else { ; }
	
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

