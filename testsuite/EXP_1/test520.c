#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
uint32_t x4 = 8U;
uint32_t t0 = 810U;
static int8_t x14 = -1;
volatile int64_t t3 = 89774154919LL;
volatile uint64_t t5 = 239764439961670618LLU;
int64_t x26 = INT64_MAX;
int16_t x28 = INT16_MIN;
static int8_t x29 = 8;
uint64_t x32 = 80044LLU;
uint8_t x33 = UINT8_MAX;
static int64_t x35 = -1LL;
int64_t t8 = 153LL;
uint16_t x43 = 2886U;
static volatile int64_t t11 = 7LL;
int16_t x50 = -1;
uint16_t x52 = 277U;
volatile int32_t t13 = 21481;
static int64_t x59 = -97LL;
volatile int16_t x66 = -54;
volatile int32_t x68 = INT32_MAX;
volatile int64_t t16 = 16617618112455900LL;
volatile uint64_t t18 = 315882163609238LLU;
uint32_t x81 = 0U;
static int8_t x94 = INT8_MIN;
static uint64_t x104 = 151824794LLU;
int64_t x106 = INT64_MAX;
static uint16_t x113 = 1U;
static uint16_t x117 = 2956U;
uint16_t x122 = 612U;
volatile uint64_t x123 = 48791942LLU;
volatile int32_t x130 = INT32_MAX;
volatile uint64_t t30 = 257933690594LLU;
int8_t x136 = 23;
static int64_t x149 = 1LL;
volatile int32_t t36 = 42283;
int32_t x167 = INT32_MIN;
int32_t t40 = -26256;
int64_t x175 = -1LL;
static uint8_t x178 = UINT8_MAX;
static int8_t x184 = INT8_MIN;
int64_t t43 = 35355991849857LL;
int8_t x185 = 7;
int32_t x187 = 7;
static int8_t x190 = -1;
static uint32_t x195 = 62U;
int64_t t46 = 196573LL;
static int16_t x205 = INT16_MAX;
static int8_t x214 = INT8_MIN;
int32_t x218 = -1;
uint8_t x221 = UINT8_MAX;
static int16_t x222 = -1;
static int16_t x223 = INT16_MAX;
volatile int64_t x230 = -1LL;
uint16_t x237 = 14U;
uint16_t x257 = UINT16_MAX;
int16_t x258 = 2;
int16_t x262 = -25;
int8_t x273 = INT8_MIN;
int64_t x290 = INT64_MAX;
uint16_t x291 = 3U;
static volatile int16_t x293 = 1;
volatile uint32_t x296 = 495605U;
int16_t x299 = INT16_MIN;
int8_t x300 = -1;
uint8_t x302 = 60U;
volatile int64_t x304 = 3612LL;
static int32_t x306 = 2;
int64_t t74 = -50431928826LL;
volatile uint8_t x312 = 0U;
volatile int32_t x317 = -28;
static int16_t x321 = -13;
int8_t x325 = INT8_MIN;
volatile uint32_t x333 = 2U;
int8_t x334 = INT8_MIN;
int32_t x339 = -663;
volatile int64_t t82 = -35743591LL;
static volatile int32_t x341 = -43;
int16_t x343 = -7722;
volatile int64_t t84 = -1055LL;
volatile uint64_t t85 = UINT64_MAX;
int8_t x353 = -6;
int8_t x356 = 14;
volatile uint8_t x364 = UINT8_MAX;
int64_t x373 = INT64_MIN;
volatile int16_t x374 = -100;
int16_t x376 = INT16_MIN;
int64_t x380 = -1LL;
int16_t x382 = INT16_MIN;
int32_t t93 = 7;
volatile uint64_t x388 = UINT64_MAX;
static uint32_t t95 = 382181940U;
uint32_t x395 = UINT32_MAX;
uint32_t t96 = 776708U;
uint64_t x402 = 21374LLU;
uint64_t x404 = 5LLU;
volatile uint64_t t99 = 19458378140205LLU;


void f0(void) {
	volatile int8_t x2 = INT8_MIN;
	volatile int16_t x3 = 52;

	t0 = (((x1/x2)+x3)^x4);

	if (t0 != 16777276U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 924U;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = -1LL;
	static int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -5988243603650LL;

	t1 = (((x5/x6)+x7)^x8);

	if (t1 != 2147483647LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int16_t x10 = -16;
	int8_t x11 = INT8_MAX;
	uint8_t x12 = 40U;
	int32_t t2 = -31183;

	t2 = (((x9/x10)+x11)^x12);

	if (t2 != 88) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -3636LL;
	int32_t x15 = INT32_MIN;
	int64_t x16 = -2LL;

	t3 = (((x13/x14)+x15)^x16);

	if (t3 != 2147480010LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static uint8_t x18 = UINT8_MAX;
	uint32_t x19 = UINT32_MAX;
	static uint64_t x20 = 1029579339154LLU;
	volatile uint64_t t4 = 3623127LLU;

	t4 = (((x17/x18)+x19)^x20);

	if (t4 != 1027709995629LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 11569;
	uint64_t x22 = 6152015596802581667LLU;
	int8_t x23 = 0;
	int32_t x24 = 453018;

	t5 = (((x21/x22)+x23)^x24);

	if (t5 != 453018LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int8_t x27 = INT8_MAX;
	volatile int64_t t6 = -4876272230LL;

	t6 = (((x25/x26)+x27)^x28);

	if (t6 != -32641LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x30 = 7660U;
	int64_t x31 = 1504772556803LL;
	uint64_t t7 = 17033388473714332LLU;

	t7 = (((x29/x30)+x31)^x32);

	if (t7 != 1504772501679LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x34 = INT8_MIN;
	volatile int16_t x36 = 88;

	t8 = (((x33/x34)+x35)^x36);

	if (t8 != -90LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -127899;
	static int16_t x38 = 386;
	int16_t x39 = -1;
	uint64_t x40 = 808445LLU;
	uint64_t t9 = 169899662022LLU;

	t9 = (((x37/x38)+x39)^x40);

	if (t9 != 18446744073708743497LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int64_t x42 = -12471431LL;
	uint32_t x44 = UINT32_MAX;
	static int64_t t10 = -13781488730LL;

	t10 = (((x41/x42)+x43)^x44);

	if (t10 != 4294964409LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = -1LL;
	int16_t x47 = -1;
	int64_t x48 = INT64_MAX;

	t11 = (((x45/x46)+x47)^x48);

	if (t11 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -2763899LL;
	volatile int32_t x51 = -1;
	int64_t t12 = 1488186LL;

	t12 = (((x49/x50)+x51)^x52);

	if (t12 != 2764143LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = 29;
	uint8_t x54 = 28U;
	int8_t x55 = INT8_MAX;
	int16_t x56 = -59;

	t13 = (((x53/x54)+x55)^x56);

	if (t13 != -187) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	int8_t x58 = INT8_MAX;
	int32_t x60 = INT32_MAX;
	int64_t t14 = 29477LL;

	t14 = (((x57/x58)+x59)^x60);

	if (t14 != -2147483554LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	static uint64_t x62 = UINT64_MAX;
	int16_t x63 = INT16_MIN;
	static uint8_t x64 = UINT8_MAX;
	static uint64_t t15 = 115168153414LLU;

	t15 = (((x61/x62)+x63)^x64);

	if (t15 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int64_t x67 = -1LL;

	t16 = (((x65/x66)+x67)^x68);

	if (t16 != 2147483042LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 2U;
	int16_t x70 = -1;
	volatile uint16_t x71 = UINT16_MAX;
	volatile int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -3;

	t17 = (((x69/x70)+x71)^x72);

	if (t17 != 2147418114) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x73 = 72LLU;
	static uint16_t x74 = 2407U;
	uint32_t x75 = 95U;
	static int32_t x76 = -21637;

	t18 = (((x73/x74)+x75)^x76);

	if (t18 != 18446744073709529892LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x82 = -287;
	int16_t x83 = 210;
	volatile uint8_t x84 = 0U;
	volatile uint32_t t19 = 421086U;

	t19 = (((x81/x82)+x83)^x84);

	if (t19 != 210U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 29;
	int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MIN;
	volatile int32_t x92 = 109301338;
	volatile int64_t t20 = 12401762LL;

	t20 = (((x89/x90)+x91)^x92);

	if (t20 != -9223372036745474470LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 20U;
	int8_t x95 = INT8_MAX;
	int8_t x96 = -1;
	uint32_t t21 = 0U;

	t21 = (((x93/x94)+x95)^x96);

	if (t21 != 4294967168U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x97 = UINT64_MAX;
	int64_t x98 = 33976392894384109LL;
	static int32_t x99 = 7;
	int16_t x100 = -4131;
	uint64_t t22 = 3846LLU;

	t22 = (((x97/x98)+x99)^x100);

	if (t22 != 18446744073709547000LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = 428;
	int32_t x102 = 20931476;
	int16_t x103 = INT16_MAX;
	volatile uint64_t t23 = 311075LLU;

	t23 = (((x101/x102)+x103)^x104);

	if (t23 != 151836261LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x105 = 4LLU;
	static int8_t x107 = -1;
	int8_t x108 = 0;
	uint64_t t24 = UINT64_MAX;

	t24 = (((x105/x106)+x107)^x108);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x109 = 249;
	volatile int8_t x110 = 6;
	uint64_t x111 = 4244732750285804LLU;
	int64_t x112 = INT64_MAX;
	static volatile uint64_t t25 = 181814LLU;

	t25 = (((x109/x110)+x111)^x112);

	if (t25 != 9219127304104489962LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x114 = 2LL;
	volatile int16_t x115 = 913;
	volatile int16_t x116 = INT16_MIN;
	volatile int64_t t26 = 45064615769847181LL;

	t26 = (((x113/x114)+x115)^x116);

	if (t26 != -31855LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = -1LL;
	static uint32_t x119 = 5U;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t27 = 16244900432833883LLU;

	t27 = (((x117/x118)+x119)^x120);

	if (t27 != 2950LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x121 = UINT8_MAX;
	int16_t x124 = -1;
	uint64_t t28 = 94904133361899375LLU;

	t28 = (((x121/x122)+x123)^x124);

	if (t28 != 18446744073660759673LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x125 = 1715534760879LLU;
	uint8_t x126 = UINT8_MAX;
	volatile int16_t x127 = INT16_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile uint64_t t29 = 3060380567950LLU;

	t29 = (((x125/x126)+x127)^x128);

	if (t29 != 18446744066981997153LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = 3;
	volatile uint8_t x131 = 1U;
	uint64_t x132 = 2LLU;

	t30 = (((x129/x130)+x131)^x132);

	if (t30 != 3LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MIN;
	static int64_t x135 = INT64_MIN;
	int64_t t31 = -51708LL;

	t31 = (((x133/x134)+x135)^x136);

	if (t31 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -1;
	volatile int8_t x138 = INT8_MIN;
	int16_t x139 = -1;
	volatile int8_t x140 = -1;
	int32_t t32 = -311110;

	t32 = (((x137/x138)+x139)^x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -11877173;
	int32_t x142 = INT32_MAX;
	volatile int64_t x143 = INT64_MAX;
	int8_t x144 = INT8_MIN;
	int64_t t33 = 84166593LL;

	t33 = (((x141/x142)+x143)^x144);

	if (t33 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	volatile int8_t x146 = INT8_MAX;
	uint8_t x147 = 108U;
	uint16_t x148 = 7462U;
	int32_t t34 = 7;

	t34 = (((x145/x146)+x147)^x148);

	if (t34 != -16916158) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x150 = INT64_MIN;
	static int32_t x151 = INT32_MIN;
	int64_t x152 = INT64_MIN;
	int64_t t35 = 4461652903389494LL;

	t35 = (((x149/x150)+x151)^x152);

	if (t35 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x153 = UINT8_MAX;
	uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = 3U;

	t36 = (((x153/x154)+x155)^x156);

	if (t36 != -2147483646) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -484690159985816LL;
	int32_t x158 = 715;
	static uint8_t x159 = 3U;
	int16_t x160 = INT16_MIN;
	int64_t t37 = -197LL;

	t37 = (((x157/x158)+x159)^x160);

	if (t37 != 677888352487LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MAX;
	int16_t x163 = INT16_MAX;
	static int8_t x164 = INT8_MAX;
	volatile int32_t t38 = 0;

	t38 = (((x161/x162)+x163)^x164);

	if (t38 != 32640) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x166 = 3867U;
	uint32_t x168 = 185851U;
	volatile uint32_t t39 = 282U;

	t39 = (((x165/x166)+x167)^x168);

	if (t39 != 2147669499U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	static int8_t x170 = INT8_MIN;
	volatile int32_t x171 = -1;
	int8_t x172 = INT8_MAX;

	t40 = (((x169/x170)+x171)^x172);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x173 = UINT16_MAX;
	int32_t x174 = INT32_MIN;
	volatile uint16_t x176 = 127U;
	int64_t t41 = 93453656868LL;

	t41 = (((x173/x174)+x175)^x176);

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MAX;
	int64_t x179 = -1LL;
	uint16_t x180 = UINT16_MAX;
	volatile int64_t t42 = 3717LL;

	t42 = (((x177/x178)+x179)^x180);

	if (t42 != 8421248LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x181 = INT64_MIN;
	uint32_t x182 = 1023070576U;
	uint32_t x183 = 1701318U;

	t43 = (((x181/x182)+x183)^x184);

	if (t43 != 9013680745LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x186 = 7749827678LLU;
	static int8_t x188 = INT8_MIN;
	uint64_t t44 = 6LLU;

	t44 = (((x185/x186)+x187)^x188);

	if (t44 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = INT16_MIN;
	uint32_t x191 = 3U;
	uint16_t x192 = 1U;
	volatile uint32_t t45 = 16308U;

	t45 = (((x189/x190)+x191)^x192);

	if (t45 != 32770U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = 0;
	static int64_t x194 = INT64_MAX;
	int16_t x196 = INT16_MIN;

	t46 = (((x193/x194)+x195)^x196);

	if (t46 != -32706LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = INT64_MIN;
	static int8_t x198 = INT8_MIN;
	int8_t x199 = -1;
	int8_t x200 = -59;
	int64_t t47 = -1130386985LL;

	t47 = (((x197/x198)+x199)^x200);

	if (t47 != -72057594037927878LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x201 = 11148050LLU;
	uint64_t x202 = UINT64_MAX;
	static uint8_t x203 = UINT8_MAX;
	volatile int64_t x204 = INT64_MIN;
	uint64_t t48 = 960LLU;

	t48 = (((x201/x202)+x203)^x204);

	if (t48 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x206 = INT64_MIN;
	volatile int32_t x207 = INT32_MAX;
	uint16_t x208 = 15U;
	int64_t t49 = -121565513LL;

	t49 = (((x205/x206)+x207)^x208);

	if (t49 != 2147483632LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x209 = UINT32_MAX;
	uint8_t x210 = UINT8_MAX;
	int16_t x211 = INT16_MIN;
	int64_t x212 = INT64_MIN;
	int64_t t50 = 13LL;

	t50 = (((x209/x210)+x211)^x212);

	if (t50 != -9223372036837965567LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x213 = -1;
	int16_t x215 = -235;
	int32_t x216 = -1;
	int32_t t51 = -507;

	t51 = (((x213/x214)+x215)^x216);

	if (t51 != 234) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	uint64_t x219 = 5827LLU;
	uint8_t x220 = 2U;
	uint64_t t52 = 656LLU;

	t52 = (((x217/x218)+x219)^x220);

	if (t52 != 18446744071562073798LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x224 = INT32_MIN;
	int32_t t53 = -22580882;

	t53 = (((x221/x222)+x223)^x224);

	if (t53 != -2147451136) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x225 = 4938U;
	uint16_t x226 = 3018U;
	static int64_t x227 = -62442549965614063LL;
	static volatile int32_t x228 = INT32_MIN;
	static volatile int64_t t54 = 1019858672720252296LL;

	t54 = (((x225/x226)+x227)^x228);

	if (t54 != 62442551255110674LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x229 = -3123816;
	static int16_t x231 = INT16_MIN;
	static int64_t x232 = -189LL;
	static int64_t t55 = 180410323458LL;

	t55 = (((x229/x230)+x231)^x232);

	if (t55 != -3091157LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 1U;
	int32_t x234 = 11611238;
	static volatile uint16_t x235 = 1999U;
	volatile int64_t x236 = INT64_MAX;
	volatile int64_t t56 = -3158569047659755LL;

	t56 = (((x233/x234)+x235)^x236);

	if (t56 != 9223372036854773808LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = INT32_MAX;
	volatile uint32_t x239 = 7357U;
	int64_t x240 = INT64_MIN;
	static int64_t t57 = -659684519LL;

	t57 = (((x237/x238)+x239)^x240);

	if (t57 != -9223372036854768451LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MAX;
	static int32_t x243 = -1;
	int8_t x244 = 0;
	int32_t t58 = -62215820;

	t58 = (((x241/x242)+x243)^x244);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x245 = 1U;
	static uint32_t x246 = 8352580U;
	int64_t x247 = INT64_MIN;
	int32_t x248 = -1;
	volatile int64_t t59 = INT64_MAX;

	t59 = (((x245/x246)+x247)^x248);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = INT16_MAX;
	uint32_t x250 = UINT32_MAX;
	static int64_t x251 = -676LL;
	static int16_t x252 = INT16_MIN;
	int64_t t60 = 505970038903186LL;

	t60 = (((x249/x250)+x251)^x252);

	if (t60 != 32092LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	int8_t x254 = INT8_MAX;
	int32_t x255 = -1;
	int8_t x256 = -1;
	int32_t t61 = 104961788;

	t61 = (((x253/x254)+x255)^x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x259 = UINT8_MAX;
	uint64_t x260 = 29187278019942385LLU;
	volatile uint64_t t62 = 887211LLU;

	t62 = (((x257/x258)+x259)^x260);

	if (t62 != 29187278019909391LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	int8_t x263 = 5;
	static int16_t x264 = INT16_MIN;
	int32_t t63 = -3998;

	t63 = (((x261/x262)+x263)^x264);

	if (t63 != -32763) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = 1;
	int64_t x266 = INT64_MIN;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MIN;
	volatile int64_t t64 = 1LL;

	t64 = (((x265/x266)+x267)^x268);

	if (t64 != 127LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = 7113835831006439971LLU;
	uint8_t x271 = UINT8_MAX;
	static int16_t x272 = INT16_MAX;
	uint64_t t65 = 8732190510976LLU;

	t65 = (((x269/x270)+x271)^x272);

	if (t65 != 32510LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x274 = -1;
	uint8_t x275 = 81U;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t66 = -2;

	t66 = (((x273/x274)+x275)^x276);

	if (t66 != 65326) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x277 = 14U;
	volatile int16_t x278 = 319;
	static int8_t x279 = INT8_MIN;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t67 = 28551413;

	t67 = (((x277/x278)+x279)^x280);

	if (t67 != 2147483520) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x281 = 4U;
	int64_t x282 = INT64_MIN;
	static int32_t x283 = INT32_MIN;
	volatile uint8_t x284 = UINT8_MAX;
	static int64_t t68 = -87LL;

	t68 = (((x281/x282)+x283)^x284);

	if (t68 != -2147483393LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x285 = UINT32_MAX;
	static uint8_t x286 = UINT8_MAX;
	int64_t x287 = -31329612146681469LL;
	uint16_t x288 = 2934U;
	volatile int64_t t69 = -139984228625259632LL;

	t69 = (((x285/x286)+x287)^x288);

	if (t69 != -31329612129840654LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x289 = 4163LL;
	int16_t x292 = -1;
	volatile int64_t t70 = -1925774544LL;

	t70 = (((x289/x290)+x291)^x292);

	if (t70 != -4LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x294 = INT32_MIN;
	int64_t x295 = INT64_MAX;
	volatile int64_t t71 = 0LL;

	t71 = (((x293/x294)+x295)^x296);

	if (t71 != 9223372036854280202LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1LL;
	int16_t x298 = -1;
	volatile int64_t t72 = -2034LL;

	t72 = (((x297/x298)+x299)^x300);

	if (t72 != 32766LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = INT32_MIN;
	volatile uint16_t x303 = 1U;
	static volatile int64_t t73 = -2635LL;

	t73 = (((x301/x302)+x303)^x304);

	if (t73 != -35793981LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = -1LL;
	int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;

	t74 = (((x305/x306)+x307)^x308);

	if (t74 != 32640LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = -1LL;
	int16_t x310 = INT16_MIN;
	static volatile uint16_t x311 = 13U;
	static int64_t t75 = -268LL;

	t75 = (((x309/x310)+x311)^x312);

	if (t75 != 13LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x313 = -2382;
	static volatile uint32_t x314 = 1283663837U;
	int8_t x315 = -1;
	int64_t x316 = INT64_MIN;
	int64_t t76 = 2705LL;

	t76 = (((x313/x314)+x315)^x316);

	if (t76 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x318 = 701546128LLU;
	static uint16_t x319 = 12U;
	static volatile int16_t x320 = 207;
	volatile uint64_t t77 = 208LLU;

	t77 = (((x317/x318)+x319)^x320);

	if (t77 != 26294413696LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = -1;
	int8_t x323 = INT8_MIN;
	static int16_t x324 = INT16_MIN;
	static int32_t t78 = -29985;

	t78 = (((x321/x322)+x323)^x324);

	if (t78 != 32653) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x326 = -1;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = 5U;
	volatile int64_t t79 = -2LL;

	t79 = (((x325/x326)+x327)^x328);

	if (t79 != -9223372036854775675LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MAX;
	uint16_t x331 = 1519U;
	int8_t x332 = INT8_MIN;
	int32_t t80 = -1926;

	t80 = (((x329/x330)+x331)^x332);

	if (t80 != -1425) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x335 = INT64_MIN;
	static uint8_t x336 = 11U;
	volatile int64_t t81 = -558731310600LL;

	t81 = (((x333/x334)+x335)^x336);

	if (t81 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = 10551392;
	int8_t x340 = -43;

	t82 = (((x337/x338)+x339)^x340);

	if (t82 != 874137937825LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x342 = UINT8_MAX;
	static uint16_t x344 = 2177U;
	static int32_t t83 = 183891772;

	t83 = (((x341/x342)+x343)^x344);

	if (t83 != -5801) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -1;
	int64_t x346 = -2559916440078LL;
	int8_t x347 = INT8_MIN;
	static int16_t x348 = -3022;

	t84 = (((x345/x346)+x347)^x348);

	if (t84 != 2994LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x349 = 15206LLU;
	int16_t x350 = INT16_MAX;
	static int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MAX;

	t85 = (((x349/x350)+x351)^x352);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x354 = -1962;
	static int32_t x355 = -653;
	static volatile int32_t t86 = -31;

	t86 = (((x353/x354)+x355)^x356);

	if (t86 != -643) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x357 = INT16_MIN;
	volatile int8_t x358 = 1;
	int16_t x359 = INT16_MIN;
	uint64_t x360 = 7637344877LLU;
	static uint64_t t87 = 821178553929870096LLU;

	t87 = (((x357/x358)+x359)^x360);

	if (t87 != 18446744066072224365LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x361 = -283229138;
	static int32_t x362 = -1;
	volatile int32_t x363 = -449192791;
	int32_t t88 = 685876;

	t88 = (((x361/x362)+x363)^x364);

	if (t88 != -165963644) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x365 = -1;
	uint64_t x366 = 1618LLU;
	int64_t x367 = INT64_MAX;
	static int8_t x368 = INT8_MIN;
	static uint64_t t89 = 9749655003837LLU;

	t89 = (((x365/x366)+x367)^x368);

	if (t89 != 9211971082544695747LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = INT64_MIN;
	static volatile int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	volatile int32_t x372 = INT32_MIN;
	static volatile int64_t t90 = 11041LL;

	t90 = (((x369/x370)+x371)^x372);

	if (t90 != -4294967296LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x375 = INT8_MAX;
	int64_t t91 = 26895617333LL;

	t91 = (((x373/x374)+x375)^x376);

	if (t91 != -92233720368543699LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x377 = -325406292490302LL;
	volatile uint8_t x378 = UINT8_MAX;
	int8_t x379 = 2;
	int64_t t92 = 132088626192346LL;

	t92 = (((x377/x378)+x379)^x380);

	if (t92 != 1276103107802LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x381 = -6402;
	static volatile int16_t x383 = INT16_MIN;
	int32_t x384 = -100;

	t93 = (((x381/x382)+x383)^x384);

	if (t93 != 32668) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = -4815LL;
	volatile int64_t x386 = 1949312LL;
	static int64_t x387 = -1LL;
	static uint64_t t94 = 59067649366705LLU;

	t94 = (((x385/x386)+x387)^x388);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x389 = UINT16_MAX;
	uint32_t x390 = 12335225U;
	int16_t x391 = INT16_MIN;
	volatile int16_t x392 = -1;

	t95 = (((x389/x390)+x391)^x392);

	if (t95 != 32767U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x393 = 734U;
	int8_t x394 = -1;
	static int16_t x396 = INT16_MIN;

	t96 = (((x393/x394)+x395)^x396);

	if (t96 != 32033U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = 0LLU;
	static int8_t x398 = -11;
	uint64_t x399 = 808444928797006613LLU;
	volatile int16_t x400 = 7571;
	volatile uint64_t t97 = 2279632979399LLU;

	t97 = (((x397/x398)+x399)^x400);

	if (t97 != 808444928797001350LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x401 = 2U;
	int32_t x403 = -2911;
	static volatile uint64_t t98 = 263827012149594LLU;

	t98 = (((x401/x402)+x403)^x404);

	if (t98 != 18446744073709548708LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x405 = 673265578LLU;
	int8_t x406 = INT8_MAX;
	int8_t x407 = -1;
	uint16_t x408 = 27708U;

	t99 = (((x405/x406)+x407)^x408);

	if (t99 != 5277706LLU) { NG(); } else { ; }
	
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

