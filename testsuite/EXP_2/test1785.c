#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int32_t x11 = INT32_MIN;
uint8_t x16 = 93U;
static volatile int8_t x19 = 6;
static volatile int32_t t3 = 121545;
uint64_t x21 = 478787189802LLU;
volatile uint8_t x28 = 9U;
int32_t t5 = -900133415;
volatile uint32_t x29 = 6U;
volatile uint16_t x41 = UINT16_MAX;
volatile int8_t x44 = INT8_MAX;
volatile int32_t t9 = -1911;
static int32_t x45 = INT32_MIN;
uint64_t x48 = 23641LLU;
volatile uint64_t t10 = 904287LLU;
static int64_t x56 = INT64_MIN;
uint32_t x57 = 21714U;
static int16_t x59 = INT16_MIN;
volatile int32_t t14 = 9441130;
static int32_t x71 = -1;
uint64_t x72 = UINT64_MAX;
volatile uint64_t t16 = 8255LLU;
volatile int8_t x74 = INT8_MIN;
volatile int32_t x75 = -1;
int64_t t17 = 0LL;
uint32_t x78 = 110435975U;
uint32_t x79 = UINT32_MAX;
int16_t x82 = INT16_MIN;
int64_t x84 = INT64_MIN;
int64_t t19 = 3699685739341170LL;
int16_t x93 = 9201;
static int16_t x98 = 13830;
volatile int8_t x103 = INT8_MIN;
static volatile int8_t x105 = -14;
int64_t t26 = 9LL;
int64_t x120 = INT64_MIN;
static volatile int64_t t29 = -16377897915698LL;
int8_t x131 = 1;
uint8_t x138 = 7U;
volatile uint64_t x139 = UINT64_MAX;
int16_t x145 = INT16_MAX;
uint8_t x147 = 6U;
volatile int64_t x148 = -1LL;
static int16_t x154 = INT16_MIN;
int64_t t38 = 14016377722555LL;
uint16_t x165 = 26937U;
int16_t x167 = 3809;
volatile int32_t x185 = -203961682;
int64_t x188 = -14LL;
uint32_t x193 = 14U;
volatile int32_t t46 = 41351;
int8_t x206 = INT8_MAX;
uint64_t x208 = 91828LLU;
int32_t t50 = -2;
volatile uint32_t t51 = 2948U;
int32_t x218 = 76;
static uint32_t x220 = 1U;
uint32_t x226 = 141U;
volatile int64_t t54 = -4LL;
volatile uint8_t x237 = 1U;
int64_t x239 = -104978640112413485LL;
uint64_t x241 = 4344029611997301LLU;
static int16_t x243 = -7;
static volatile int8_t x252 = -1;
volatile int32_t t61 = -10615794;
int32_t t62 = -225961;
uint64_t t63 = 11301176285LLU;
static volatile int32_t t64 = -114559;
uint8_t x273 = 2U;
int64_t x275 = 33552241LL;
volatile int32_t x276 = INT32_MIN;
volatile int64_t t66 = 96930LL;
int16_t x281 = INT16_MIN;
volatile int32_t x287 = 90;
int16_t x292 = INT16_MAX;
int64_t x300 = -1LL;
uint32_t x302 = UINT32_MAX;
int64_t x303 = -1LL;
int64_t x304 = INT64_MIN;
volatile int8_t x308 = -2;
volatile int32_t t73 = -4;
static int16_t x310 = 1001;
int64_t x312 = -244173LL;
int8_t x313 = INT8_MIN;
int64_t x316 = INT64_MIN;
int16_t x318 = INT16_MIN;
volatile uint16_t x320 = 1U;
uint64_t x322 = UINT64_MAX;
static int32_t x324 = 7642152;
int64_t x331 = INT64_MAX;
volatile uint64_t x335 = UINT64_MAX;
static uint16_t x336 = UINT16_MAX;
static int32_t t80 = -8169;
volatile uint8_t x343 = 21U;
int16_t x353 = 20;
int64_t x354 = -1LL;
int64_t x355 = INT64_MIN;
static volatile int32_t t85 = -628386743;
uint64_t x358 = 12LLU;
int16_t x365 = INT16_MIN;
volatile uint16_t x367 = 32163U;
int8_t x368 = -1;
static int32_t x371 = INT32_MIN;
int64_t t89 = -12916775552696530LL;
int8_t x373 = INT8_MIN;
int8_t x375 = 27;
volatile uint64_t t90 = 90204010LLU;
volatile int8_t x385 = INT8_MIN;
int64_t x391 = -1LL;
int64_t x399 = INT64_MIN;
volatile int32_t x403 = INT32_MIN;
int16_t x406 = 2494;
int32_t t98 = 0;
uint8_t x409 = UINT8_MAX;


void f0(void) {
	static uint8_t x2 = 2U;
	int64_t x3 = INT64_MAX;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 52550830;

	t0 = ((x1==(x2&x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	volatile int16_t x10 = -1;
	volatile int32_t x12 = 2580;
	volatile int32_t t1 = 89;

	t1 = ((x9==(x10&x11))/x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 36U;
	int32_t x14 = -1;
	uint8_t x15 = 29U;
	int32_t t2 = -3469;

	t2 = ((x13==(x14&x15))/x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = INT64_MAX;
	int32_t x18 = INT32_MAX;
	int16_t x20 = INT16_MIN;

	t3 = ((x17==(x18&x19))/x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = -1LL;
	int64_t x23 = 3093804462LL;
	static int64_t x24 = INT64_MIN;
	int64_t t4 = -220877114607969563LL;

	t4 = ((x21==(x22&x23))/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint32_t x26 = 11801U;
	volatile int16_t x27 = 2;

	t5 = ((x25==(x26&x27))/x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = 191603;
	int16_t x31 = INT16_MIN;
	static int64_t x32 = INT64_MIN;
	static int64_t t6 = 79236LL;

	t6 = ((x29==(x30&x31))/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	int64_t x35 = -2207883LL;
	volatile int64_t x36 = -1LL;
	volatile int64_t t7 = -1LL;

	t7 = ((x33==(x34&x35))/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	uint32_t x38 = 17U;
	volatile int8_t x39 = -1;
	uint64_t x40 = 132065588697LLU;
	uint64_t t8 = 3412080LLU;

	t8 = ((x37==(x38&x39))/x40);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = 55480789LL;
	static int8_t x43 = INT8_MIN;

	t9 = ((x41==(x42&x43))/x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = INT32_MAX;
	volatile int64_t x47 = INT64_MAX;

	t10 = ((x45==(x46&x47))/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MAX;
	int8_t x50 = INT8_MAX;
	uint32_t x51 = UINT32_MAX;
	volatile int64_t x52 = -1LL;
	int64_t t11 = -245620790909LL;

	t11 = ((x49==(x50&x51))/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = 1963;
	uint8_t x54 = UINT8_MAX;
	int16_t x55 = -1;
	int64_t t12 = 93053LL;

	t12 = ((x53==(x54&x55))/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = UINT32_MAX;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t13 = 8534;

	t13 = ((x57==(x58&x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = 0;
	volatile uint64_t x62 = 34057539356LLU;
	int64_t x63 = INT64_MIN;
	uint8_t x64 = UINT8_MAX;

	t14 = ((x61==(x62&x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = UINT8_MAX;
	static uint8_t x66 = UINT8_MAX;
	uint16_t x67 = 1U;
	volatile int16_t x68 = -1;
	int32_t t15 = -707907089;

	t15 = ((x65==(x66&x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 51U;
	int8_t x70 = INT8_MIN;

	t16 = ((x69==(x70&x71))/x72);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = UINT16_MAX;
	int64_t x76 = 123517712903LL;

	t17 = ((x73==(x74&x75))/x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = INT64_MAX;
	volatile uint16_t x80 = UINT16_MAX;
	int32_t t18 = -9;

	t18 = ((x77==(x78&x79))/x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 2U;
	int8_t x83 = -28;

	t19 = ((x81==(x82&x83))/x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 17U;
	volatile int8_t x86 = INT8_MIN;
	int32_t x87 = -1;
	static int8_t x88 = -1;
	int32_t t20 = -298649391;

	t20 = ((x85==(x86&x87))/x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x89 = -11889717021844566LL;
	int8_t x90 = -6;
	int64_t x91 = -1LL;
	int16_t x92 = INT16_MAX;
	int32_t t21 = -1333239;

	t21 = ((x89==(x90&x91))/x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x94 = INT16_MIN;
	static int8_t x95 = 7;
	volatile int64_t x96 = INT64_MIN;
	static int64_t t22 = -1544LL;

	t22 = ((x93==(x94&x95))/x96);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = INT32_MIN;
	static uint32_t x99 = UINT32_MAX;
	uint16_t x100 = UINT16_MAX;
	static int32_t t23 = 5184;

	t23 = ((x97==(x98&x99))/x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -1;
	int8_t x102 = 30;
	uint64_t x104 = 19LLU;
	uint64_t t24 = 935609329100739972LLU;

	t24 = ((x101==(x102&x103))/x104);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x106 = 3757;
	static volatile uint32_t x107 = 1099556969U;
	int32_t x108 = -245454922;
	volatile int32_t t25 = 47543690;

	t25 = ((x105==(x106&x107))/x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	int16_t x110 = INT16_MIN;
	uint8_t x111 = 20U;
	int64_t x112 = 94399LL;

	t26 = ((x109==(x110&x111))/x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 1U;
	uint32_t x114 = 2U;
	static volatile int16_t x115 = -1;
	volatile int16_t x116 = INT16_MAX;
	static int32_t t27 = 20410;

	t27 = ((x113==(x114&x115))/x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MAX;
	volatile uint16_t x119 = UINT16_MAX;
	volatile int64_t t28 = 577701942907656124LL;

	t28 = ((x117==(x118&x119))/x120);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -809;
	static int64_t x124 = -1LL;

	t29 = ((x121==(x122&x123))/x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = -254;
	uint16_t x126 = UINT16_MAX;
	uint32_t x127 = 1U;
	int8_t x128 = INT8_MIN;
	volatile int32_t t30 = 4837197;

	t30 = ((x125==(x126&x127))/x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x129 = -391;
	int8_t x130 = -1;
	int8_t x132 = INT8_MIN;
	int32_t t31 = 4079;

	t31 = ((x129==(x130&x131))/x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x133 = UINT16_MAX;
	volatile uint64_t x134 = 118526145LLU;
	volatile uint32_t x135 = 511530U;
	uint64_t x136 = 8924312LLU;
	volatile uint64_t t32 = 61346898249556843LLU;

	t32 = ((x133==(x134&x135))/x136);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = -1;
	static uint32_t x140 = UINT32_MAX;
	volatile uint32_t t33 = 150775U;

	t33 = ((x137==(x138&x139))/x140);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x141 = 55109013U;
	uint32_t x142 = 12U;
	uint64_t x143 = UINT64_MAX;
	uint32_t x144 = 105U;
	volatile uint32_t t34 = 8U;

	t34 = ((x141==(x142&x143))/x144);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = INT64_MIN;
	static int64_t t35 = -11860244209030LL;

	t35 = ((x145==(x146&x147))/x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -170;
	int8_t x155 = -1;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t36 = -560780868;

	t36 = ((x153==(x154&x155))/x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	static uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 30U;
	int16_t x160 = -1;
	int32_t t37 = 335;

	t37 = ((x157==(x158&x159))/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = -1;
	uint32_t x162 = UINT32_MAX;
	int8_t x163 = -62;
	volatile int64_t x164 = INT64_MAX;

	t38 = ((x161==(x162&x163))/x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = INT64_MAX;
	int32_t x168 = -3;
	volatile int32_t t39 = 919673032;

	t39 = ((x165==(x166&x167))/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x169 = 237571720902402063LLU;
	int64_t x170 = INT64_MIN;
	uint8_t x171 = UINT8_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t40 = 3403441U;

	t40 = ((x169==(x170&x171))/x172);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = -1;
	static int32_t x174 = INT32_MIN;
	uint32_t x175 = 695315958U;
	int8_t x176 = -1;
	static volatile int32_t t41 = 56756;

	t41 = ((x173==(x174&x175))/x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x177 = INT8_MIN;
	uint32_t x178 = 240983U;
	static volatile uint32_t x179 = 24352U;
	static uint8_t x180 = 78U;
	int32_t t42 = -51;

	t42 = ((x177==(x178&x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = -5498046LL;
	volatile uint64_t x182 = 230749039622621LLU;
	volatile int16_t x183 = -20;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t43 = 47984;

	t43 = ((x181==(x182&x183))/x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x186 = 4U;
	uint8_t x187 = UINT8_MAX;
	int64_t t44 = 68916782032817LL;

	t44 = ((x185==(x186&x187))/x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = INT16_MIN;
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = UINT8_MAX;
	int64_t x192 = -10LL;
	static int64_t t45 = 177289221809LL;

	t45 = ((x189==(x190&x191))/x192);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;

	t46 = ((x193==(x194&x195))/x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	uint8_t x198 = 0U;
	int32_t x199 = INT32_MIN;
	uint16_t x200 = 18293U;
	int32_t t47 = -589669;

	t47 = ((x197==(x198&x199))/x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	static uint32_t x202 = 52772U;
	uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = 1;
	volatile int32_t t48 = 1688458;

	t48 = ((x201==(x202&x203))/x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = 3U;
	int64_t x207 = -49280312LL;
	uint64_t t49 = 17970LLU;

	t49 = ((x205==(x206&x207))/x208);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = -1;
	int16_t x211 = 0;
	uint16_t x212 = 191U;

	t50 = ((x209==(x210&x211))/x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = 3;
	int64_t x214 = 1262269764716LL;
	uint64_t x215 = 350507279659565LLU;
	uint32_t x216 = 331U;

	t51 = ((x213==(x214&x215))/x216);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	int16_t x219 = -8013;
	uint32_t t52 = 2800U;

	t52 = ((x217==(x218&x219))/x220);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x221 = -1;
	int32_t x222 = -3171797;
	int8_t x223 = INT8_MIN;
	int16_t x224 = -658;
	volatile int32_t t53 = -64726207;

	t53 = ((x221==(x222&x223))/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MAX;
	int32_t x227 = -1;
	int64_t x228 = -1LL;

	t54 = ((x225==(x226&x227))/x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = 1615702;
	volatile int32_t x230 = 7558;
	int8_t x231 = -2;
	int64_t x232 = INT64_MAX;
	volatile int64_t t55 = -1284817315917036817LL;

	t55 = ((x229==(x230&x231))/x232);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x238 = UINT64_MAX;
	int16_t x240 = 1;
	int32_t t56 = 3833;

	t56 = ((x237==(x238&x239))/x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x242 = -1;
	int16_t x244 = -1;
	volatile int32_t t57 = -6896;

	t57 = ((x241==(x242&x243))/x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 27412170LLU;
	uint8_t x246 = UINT8_MAX;
	uint8_t x247 = 13U;
	int64_t x248 = -1LL;
	static volatile int64_t t58 = -875142LL;

	t58 = ((x245==(x246&x247))/x248);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x249 = 3U;
	volatile int8_t x250 = -1;
	uint64_t x251 = 6990937698380LLU;
	volatile int32_t t59 = 0;

	t59 = ((x249==(x250&x251))/x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x253 = INT8_MAX;
	static int64_t x254 = INT64_MAX;
	static int16_t x255 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile uint32_t t60 = 1847712766U;

	t60 = ((x253==(x254&x255))/x256);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = INT8_MAX;
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	int32_t x260 = -4140;

	t61 = ((x257==(x258&x259))/x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x261 = 211U;
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = -1;
	int32_t x264 = INT32_MAX;

	t62 = ((x261==(x262&x263))/x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int16_t x266 = -7;
	uint32_t x267 = 108U;
	static uint64_t x268 = UINT64_MAX;

	t63 = ((x265==(x266&x267))/x268);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x269 = -1LL;
	int32_t x270 = 33;
	int32_t x271 = INT32_MIN;
	uint8_t x272 = 47U;

	t64 = ((x269==(x270&x271))/x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x274 = INT8_MAX;
	static int32_t t65 = -3;

	t65 = ((x273==(x274&x275))/x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = 4U;
	int8_t x278 = -7;
	volatile uint64_t x279 = 8595242679LLU;
	int64_t x280 = INT64_MAX;

	t66 = ((x277==(x278&x279))/x280);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x282 = -39;
	int32_t x283 = INT32_MIN;
	int32_t x284 = 320506;
	int32_t t67 = 8591;

	t67 = ((x281==(x282&x283))/x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x285 = UINT32_MAX;
	int64_t x286 = INT64_MAX;
	int64_t x288 = INT64_MAX;
	volatile int64_t t68 = -89154LL;

	t68 = ((x285==(x286&x287))/x288);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = UINT16_MAX;
	volatile uint8_t x290 = 8U;
	static uint64_t x291 = UINT64_MAX;
	static int32_t t69 = 429388323;

	t69 = ((x289==(x290&x291))/x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = 3U;
	int64_t x294 = INT64_MIN;
	static int32_t x295 = -6;
	uint16_t x296 = 2110U;
	volatile int32_t t70 = 9;

	t70 = ((x293==(x294&x295))/x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x297 = 3;
	static uint8_t x298 = 107U;
	static uint64_t x299 = 73356313409LLU;
	int64_t t71 = -9204LL;

	t71 = ((x297==(x298&x299))/x300);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x301 = 69U;
	int64_t t72 = -5892007912583LL;

	t72 = ((x301==(x302&x303))/x304);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x305 = INT32_MIN;
	int8_t x306 = -1;
	static int64_t x307 = -3700143LL;

	t73 = ((x305==(x306&x307))/x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x309 = 603U;
	int32_t x311 = INT32_MAX;
	static volatile int64_t t74 = 26LL;

	t74 = ((x309==(x310&x311))/x312);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x314 = INT32_MAX;
	int32_t x315 = -1;
	int64_t t75 = 31142785450LL;

	t75 = ((x313==(x314&x315))/x316);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = INT16_MAX;
	volatile int32_t t76 = 4;

	t76 = ((x317==(x318&x319))/x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x321 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	volatile int32_t t77 = -1022434500;

	t77 = ((x321==(x322&x323))/x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	uint32_t x326 = UINT32_MAX;
	int32_t x327 = INT32_MAX;
	volatile int64_t x328 = INT64_MIN;
	int64_t t78 = 79850986733LL;

	t78 = ((x325==(x326&x327))/x328);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	int16_t x330 = INT16_MIN;
	volatile int16_t x332 = -1;
	static volatile int32_t t79 = 261496;

	t79 = ((x329==(x330&x331))/x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	int64_t x334 = INT64_MIN;

	t80 = ((x333==(x334&x335))/x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x337 = -4;
	uint16_t x338 = UINT16_MAX;
	static volatile int16_t x339 = -348;
	static uint8_t x340 = 24U;
	volatile int32_t t81 = -2;

	t81 = ((x337==(x338&x339))/x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static int8_t x342 = INT8_MAX;
	int8_t x344 = -1;
	int32_t t82 = 1;

	t82 = ((x341==(x342&x343))/x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x345 = 8U;
	volatile int16_t x346 = -79;
	int16_t x347 = -1;
	static volatile uint8_t x348 = 11U;
	volatile int32_t t83 = -22;

	t83 = ((x345==(x346&x347))/x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x349 = -1LL;
	int16_t x350 = INT16_MAX;
	int32_t x351 = INT32_MIN;
	uint32_t x352 = 65124U;
	volatile uint32_t t84 = 2015396345U;

	t84 = ((x349==(x350&x351))/x352);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x356 = INT8_MIN;

	t85 = ((x353==(x354&x355))/x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 25627U;
	int32_t x359 = 2619;
	volatile int8_t x360 = 1;
	volatile int32_t t86 = -15;

	t86 = ((x357==(x358&x359))/x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = 0LL;
	static uint16_t x363 = 3U;
	uint16_t x364 = 5U;
	int32_t t87 = 61797;

	t87 = ((x361==(x362&x363))/x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x366 = INT8_MIN;
	static volatile int32_t t88 = 241;

	t88 = ((x365==(x366&x367))/x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x369 = 3895632LLU;
	int16_t x370 = INT16_MIN;
	int64_t x372 = INT64_MIN;

	t89 = ((x369==(x370&x371))/x372);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x374 = INT32_MIN;
	uint64_t x376 = UINT64_MAX;

	t90 = ((x373==(x374&x375))/x376);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x377 = INT64_MAX;
	uint16_t x378 = UINT16_MAX;
	volatile int8_t x379 = 35;
	volatile int8_t x380 = INT8_MIN;
	int32_t t91 = 31;

	t91 = ((x377==(x378&x379))/x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x381 = 160732LLU;
	int8_t x382 = INT8_MIN;
	uint32_t x383 = 3408552U;
	volatile int32_t x384 = -9580455;
	volatile int32_t t92 = 0;

	t92 = ((x381==(x382&x383))/x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x386 = 1U;
	uint64_t x387 = 253269748LLU;
	static uint32_t x388 = 1891299U;
	static uint32_t t93 = 175426U;

	t93 = ((x385==(x386&x387))/x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = -1527LL;
	int64_t x390 = -1LL;
	uint8_t x392 = 25U;
	volatile int32_t t94 = 40107419;

	t94 = ((x389==(x390&x391))/x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MIN;
	static int8_t x394 = 2;
	static uint64_t x395 = 93539993028114LLU;
	int8_t x396 = INT8_MAX;
	int32_t t95 = -3091045;

	t95 = ((x393==(x394&x395))/x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x397 = 10U;
	volatile uint64_t x398 = 2301548870534086187LLU;
	int16_t x400 = INT16_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x397==(x398&x399))/x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 173LLU;
	int8_t x402 = INT8_MIN;
	int16_t x404 = INT16_MAX;
	volatile int32_t t97 = -4;

	t97 = ((x401==(x402&x403))/x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = -1;
	volatile int8_t x407 = 0;
	uint16_t x408 = 10U;

	t98 = ((x405==(x406&x407))/x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x410 = INT16_MIN;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = INT32_MIN;
	static volatile int32_t t99 = 98411;

	t99 = ((x409==(x410&x411))/x412);

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

