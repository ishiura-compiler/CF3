#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = INT8_MIN;
int16_t x6 = INT16_MIN;
int64_t x14 = INT64_MIN;
static int32_t x20 = INT32_MIN;
uint32_t x28 = 31375U;
static uint32_t t6 = 432406U;
static int16_t x29 = INT16_MIN;
volatile uint32_t x37 = UINT32_MAX;
static int16_t x38 = 1153;
volatile int32_t t10 = 30999;
int64_t x50 = -1LL;
volatile uint32_t x57 = 65U;
static int8_t x59 = INT8_MIN;
volatile int16_t x60 = INT16_MAX;
int64_t x62 = INT64_MAX;
volatile int8_t x65 = -1;
volatile int32_t t15 = INT32_MAX;
volatile int32_t x70 = INT32_MAX;
uint8_t x71 = 101U;
uint32_t x72 = 14941287U;
volatile uint32_t t16 = 327301278U;
int8_t x76 = INT8_MIN;
static int8_t x77 = -1;
int16_t x80 = INT16_MAX;
int16_t x84 = INT16_MAX;
static uint32_t x90 = UINT32_MAX;
int64_t t21 = -121375026669598707LL;
int64_t x94 = -1078872149562936LL;
static uint64_t x97 = 212042952LLU;
static int32_t x99 = INT32_MIN;
int32_t x109 = INT32_MIN;
uint8_t x122 = 5U;
volatile int32_t t28 = -98024;
uint8_t x125 = UINT8_MAX;
int16_t x133 = -1;
static uint64_t x153 = UINT64_MAX;
uint64_t t35 = 8103969LLU;
uint32_t x158 = 30664U;
int8_t x159 = INT8_MIN;
uint8_t x161 = 0U;
int32_t x166 = INT32_MIN;
volatile int32_t t39 = -164;
static int8_t x182 = 0;
volatile uint32_t t41 = 106505695U;
int16_t x189 = -1;
volatile int64_t x191 = -1LL;
int64_t t43 = 1LL;
int64_t x203 = INT64_MAX;
static int8_t x220 = -1;
uint32_t t51 = 3U;
volatile uint32_t x235 = UINT32_MAX;
static uint64_t x238 = 137453LLU;
int16_t x242 = INT16_MIN;
uint32_t x253 = 50U;
static int16_t x256 = 0;
int64_t x265 = INT64_MIN;
volatile uint64_t t58 = 946963010440262LLU;
uint16_t x271 = 1U;
uint32_t x274 = UINT32_MAX;
int32_t x279 = INT32_MIN;
int16_t x280 = INT16_MIN;
int8_t x291 = INT8_MIN;
static volatile int64_t x296 = 144LL;
int16_t x299 = INT16_MIN;
int64_t x306 = -1LL;
static volatile int64_t x307 = INT64_MAX;
uint8_t x313 = UINT8_MAX;
int8_t x317 = -12;
static volatile uint16_t x319 = UINT16_MAX;
static volatile int8_t x321 = INT8_MIN;
int64_t x323 = -30632180LL;
uint32_t x328 = 1794447U;
uint16_t x333 = 1U;
int8_t x338 = 13;
int64_t t78 = 20681229848140754LL;
uint32_t x361 = UINT32_MAX;
uint16_t x362 = UINT16_MAX;
static int8_t x371 = INT8_MIN;
uint8_t x376 = UINT8_MAX;
uint16_t x379 = UINT16_MAX;
static uint8_t x402 = UINT8_MAX;
static uint16_t x413 = 0U;
int8_t x414 = -22;
static int32_t x417 = -1;


void f0(void) {
	int32_t x1 = -5395;
	volatile uint8_t x2 = 3U;
	int64_t x3 = INT64_MIN;
	int32_t t0 = 23;

	t0 = ((x1|(x2==x3))-x4);

	if (t0 != -5267) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = 50729U;
	int8_t x7 = INT8_MAX;
	uint16_t x8 = UINT16_MAX;
	uint32_t t1 = 9915659U;

	t1 = ((x5|(x6==x7))-x8);

	if (t1 != 4294952490U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 15372;
	volatile int64_t x10 = -1LL;
	int32_t x11 = 3771;
	int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 3;

	t2 = ((x9|(x10==x11))-x12);

	if (t2 != 15500) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	volatile int16_t x15 = INT16_MIN;
	static int8_t x16 = -13;
	volatile int32_t t3 = 261304253;

	t3 = ((x13|(x14==x15))-x16);

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int8_t x18 = INT8_MIN;
	int64_t x19 = 6283416212601LL;
	volatile uint64_t t4 = 35310357165752140LLU;

	t4 = ((x17|(x18==x19))-x20);

	if (t4 != 2147483647LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int8_t x22 = -56;
	volatile int32_t x23 = INT32_MIN;
	uint8_t x24 = 83U;
	int32_t t5 = 137293;

	t5 = ((x21|(x22==x23))-x24);

	if (t5 != -84) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	static int64_t x26 = -1LL;
	int16_t x27 = INT16_MIN;

	t6 = ((x25|(x26==x27))-x28);

	if (t6 != 4294935920U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MIN;
	uint8_t x31 = 125U;
	int8_t x32 = -12;
	int32_t t7 = -24;

	t7 = ((x29|(x30==x31))-x32);

	if (t7 != -32756) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -1;
	uint32_t x36 = 34U;
	static uint32_t t8 = 446U;

	t8 = ((x33|(x34==x35))-x36);

	if (t8 != 65501U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x39 = 1238093;
	uint32_t x40 = 8637U;
	uint32_t t9 = 34250714U;

	t9 = ((x37|(x38==x39))-x40);

	if (t9 != 4294958658U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 361U;
	int64_t x42 = INT64_MIN;
	int16_t x43 = -1;
	int8_t x44 = INT8_MIN;

	t10 = ((x41|(x42==x43))-x44);

	if (t10 != 489) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x45 = -1;
	uint16_t x46 = 1727U;
	int8_t x47 = -1;
	volatile uint32_t x48 = 435273U;
	static volatile uint32_t t11 = 125U;

	t11 = ((x45|(x46==x47))-x48);

	if (t11 != 4294532022U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = -4;
	static volatile int16_t x51 = 5843;
	int16_t x52 = -8936;
	int32_t t12 = -650177;

	t12 = ((x49|(x50==x51))-x52);

	if (t12 != 8932) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x58 = 29536061862LL;
	static uint32_t t13 = 9735570U;

	t13 = ((x57|(x58==x59))-x60);

	if (t13 != 4294934594U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 13U;
	int16_t x63 = -1;
	volatile uint16_t x64 = UINT16_MAX;
	uint32_t t14 = 25750537U;

	t14 = ((x61|(x62==x63))-x64);

	if (t14 != 4294901774U) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x66 = -1;
	int16_t x67 = -1;
	int32_t x68 = INT32_MIN;

	t15 = ((x65|(x66==x67))-x68);

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = INT8_MIN;

	t16 = ((x69|(x70==x71))-x72);

	if (t16 != 4280025881U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	int32_t t17 = 119772192;

	t17 = ((x73|(x74==x75))-x76);

	if (t17 != -32640) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = INT16_MIN;
	volatile int16_t x79 = INT16_MIN;
	volatile int32_t t18 = 52960;

	t18 = ((x77|(x78==x79))-x80);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x81 = INT8_MIN;
	uint8_t x82 = 13U;
	static int64_t x83 = -25371LL;
	int32_t t19 = 9;

	t19 = ((x81|(x82==x83))-x84);

	if (t19 != -32895) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	uint32_t x86 = UINT32_MAX;
	uint64_t x87 = 141058LLU;
	static uint32_t x88 = UINT32_MAX;
	uint32_t t20 = 196440326U;

	t20 = ((x85|(x86==x87))-x88);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 100U;
	int16_t x91 = -1;
	int64_t x92 = -232762180734188LL;

	t21 = ((x89|(x90==x91))-x92);

	if (t21 != 232762180734289LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	int8_t x95 = INT8_MAX;
	uint64_t x96 = 1647848LLU;
	uint64_t t22 = 12428896065024LLU;

	t22 = ((x93|(x94==x95))-x96);

	if (t22 != 18446744073707903767LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x98 = INT16_MIN;
	int32_t x100 = -1;
	static volatile uint64_t t23 = 653546022LLU;

	t23 = ((x97|(x98==x99))-x100);

	if (t23 != 212042953LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = -8;
	uint64_t x102 = 4LLU;
	int8_t x103 = INT8_MIN;
	static int64_t x104 = -1LL;
	static volatile int64_t t24 = 0LL;

	t24 = ((x101|(x102==x103))-x104);

	if (t24 != -7LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 1U;
	uint64_t x106 = 23574198841919991LLU;
	int8_t x107 = -1;
	volatile int8_t x108 = -1;
	uint32_t t25 = 522346U;

	t25 = ((x105|(x106==x107))-x108);

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = INT64_MIN;
	uint8_t x111 = 2U;
	uint32_t x112 = 0U;
	uint32_t t26 = 0U;

	t26 = ((x109|(x110==x111))-x112);

	if (t26 != 2147483648U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	int16_t x114 = INT16_MAX;
	static volatile int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;
	volatile int64_t t27 = -116672LL;

	t27 = ((x113|(x114==x115))-x116);

	if (t27 != -9223372036854775552LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	volatile int32_t x123 = INT32_MAX;
	int32_t x124 = 1;

	t28 = ((x121|(x122==x123))-x124);

	if (t28 != 65534) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x126 = 558U;
	uint8_t x127 = 16U;
	int64_t x128 = -116724759948LL;
	static int64_t t29 = -551936956726LL;

	t29 = ((x125|(x126==x127))-x128);

	if (t29 != 116724760203LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -3889;
	int32_t x130 = 326;
	volatile uint16_t x131 = UINT16_MAX;
	int32_t x132 = -1;
	static volatile int32_t t30 = 528881610;

	t30 = ((x129|(x130==x131))-x132);

	if (t30 != -3888) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x134 = INT64_MAX;
	static volatile int64_t x135 = INT64_MAX;
	int64_t x136 = 1162974337188LL;
	int64_t t31 = 6LL;

	t31 = ((x133|(x134==x135))-x136);

	if (t31 != -1162974337189LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x137 = 2231LLU;
	int64_t x138 = -4261940LL;
	int64_t x139 = -1LL;
	volatile int32_t x140 = -3394;
	volatile uint64_t t32 = 25781809123LLU;

	t32 = ((x137|(x138==x139))-x140);

	if (t32 != 5625LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 8U;
	uint64_t x143 = 242692011085428LLU;
	int32_t x144 = INT32_MIN;
	static volatile int32_t t33 = 22879;

	t33 = ((x141|(x142==x143))-x144);

	if (t33 != 2147450880) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = 5;
	int64_t x146 = INT64_MIN;
	int64_t x147 = -944042936955942051LL;
	uint16_t x148 = 14460U;
	volatile int32_t t34 = 55855194;

	t34 = ((x145|(x146==x147))-x148);

	if (t34 != -14455) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x154 = -346199714439LL;
	static int64_t x155 = INT64_MIN;
	static volatile int16_t x156 = -1;

	t35 = ((x153|(x154==x155))-x156);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = INT8_MIN;
	static volatile int8_t x160 = INT8_MAX;
	static int32_t t36 = -49;

	t36 = ((x157|(x158==x159))-x160);

	if (t36 != -255) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x162 = UINT16_MAX;
	static volatile int32_t x163 = -13082;
	static int8_t x164 = INT8_MIN;
	static int32_t t37 = -3;

	t37 = ((x161|(x162==x163))-x164);

	if (t37 != 128) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x165 = 15;
	int64_t x167 = 3649LL;
	int32_t x168 = -1;
	static volatile int32_t t38 = 1;

	t38 = ((x165|(x166==x167))-x168);

	if (t38 != 16) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MIN;
	static volatile int32_t x170 = INT32_MIN;
	uint8_t x171 = 1U;
	volatile int16_t x172 = -1;

	t39 = ((x169|(x170==x171))-x172);

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	volatile uint64_t x180 = 60323LLU;
	static uint64_t t40 = 60790LLU;

	t40 = ((x177|(x178==x179))-x180);

	if (t40 != 18446744073709491292LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x181 = 22313U;
	int16_t x183 = INT16_MIN;
	int16_t x184 = 1;

	t41 = ((x181|(x182==x183))-x184);

	if (t41 != 22312U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = -106773262LL;
	uint32_t x192 = UINT32_MAX;
	static uint32_t t42 = 13054826U;

	t42 = ((x189|(x190==x191))-x192);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MAX;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MAX;

	t43 = ((x193|(x194==x195))-x196);

	if (t43 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MIN;
	volatile int32_t t44 = 81;

	t44 = ((x197|(x198==x199))-x200);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = 4435;
	int8_t x202 = INT8_MIN;
	static uint8_t x204 = 7U;
	static int32_t t45 = 479222123;

	t45 = ((x201|(x202==x203))-x204);

	if (t45 != 4428) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = 638;
	int8_t x206 = -1;
	int64_t x207 = -1LL;
	int32_t x208 = 13;
	volatile int32_t t46 = 35968;

	t46 = ((x205|(x206==x207))-x208);

	if (t46 != 626) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x209 = -2;
	uint64_t x210 = 329575LLU;
	int64_t x211 = 17724669748LL;
	int64_t x212 = INT64_MIN;
	static int64_t t47 = -22LL;

	t47 = ((x209|(x210==x211))-x212);

	if (t47 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	uint16_t x215 = 107U;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t48 = 374LLU;

	t48 = ((x213|(x214==x215))-x216);

	if (t48 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 56720;
	volatile uint64_t x218 = 8953951024667270596LLU;
	int64_t x219 = INT64_MIN;
	static volatile int32_t t49 = -5;

	t49 = ((x217|(x218==x219))-x220);

	if (t49 != 56721) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x225 = -1;
	int32_t x226 = -275397452;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MIN;
	volatile int32_t t50 = 1;

	t50 = ((x225|(x226==x227))-x228);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x229 = INT8_MIN;
	static int64_t x230 = INT64_MIN;
	uint8_t x231 = 5U;
	static uint32_t x232 = UINT32_MAX;

	t51 = ((x229|(x230==x231))-x232);

	if (t51 != 4294967169U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x233 = -1;
	int16_t x234 = INT16_MAX;
	volatile int64_t x236 = -2474077723763LL;
	volatile int64_t t52 = 285920096622526814LL;

	t52 = ((x233|(x234==x235))-x236);

	if (t52 != 2474077723762LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 0;
	uint16_t x239 = 3347U;
	uint8_t x240 = 25U;
	int32_t t53 = -5;

	t53 = ((x237|(x238==x239))-x240);

	if (t53 != -25) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x241 = INT64_MIN;
	int64_t x243 = INT64_MIN;
	static int16_t x244 = INT16_MIN;
	int64_t t54 = 1LL;

	t54 = ((x241|(x242==x243))-x244);

	if (t54 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 33U;
	int16_t x247 = -1;
	int8_t x248 = INT8_MIN;
	int64_t t55 = -98183222LL;

	t55 = ((x245|(x246==x247))-x248);

	if (t55 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -1;
	static uint8_t x250 = 82U;
	int16_t x251 = INT16_MAX;
	int16_t x252 = -1;
	volatile int32_t t56 = 390;

	t56 = ((x249|(x250==x251))-x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x254 = 0;
	volatile int16_t x255 = -1;
	volatile uint32_t t57 = 2U;

	t57 = ((x253|(x254==x255))-x256);

	if (t57 != 50U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	uint64_t x268 = 9998138720592948LLU;

	t58 = ((x265|(x266==x267))-x268);

	if (t58 != 9213373898134182860LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = -35364350139633481LL;
	uint8_t x270 = 3U;
	uint8_t x272 = UINT8_MAX;
	static volatile int64_t t59 = -120087008533195LL;

	t59 = ((x269|(x270==x271))-x272);

	if (t59 != -35364350139633736LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x273 = INT64_MIN;
	static uint64_t x275 = 54582LLU;
	int16_t x276 = INT16_MIN;
	static int64_t t60 = -31176819LL;

	t60 = ((x273|(x274==x275))-x276);

	if (t60 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x277 = 75;
	uint16_t x278 = UINT16_MAX;
	volatile int32_t t61 = 360548;

	t61 = ((x277|(x278==x279))-x280);

	if (t61 != 32843) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x281 = 499070707LLU;
	int16_t x282 = INT16_MIN;
	static uint8_t x283 = UINT8_MAX;
	int16_t x284 = INT16_MAX;
	volatile uint64_t t62 = 103733978271LLU;

	t62 = ((x281|(x282==x283))-x284);

	if (t62 != 499037940LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = -1;
	volatile int64_t x286 = 3788544873821438639LL;
	int8_t x287 = 11;
	static volatile uint16_t x288 = 1U;
	volatile int32_t t63 = 27;

	t63 = ((x285|(x286==x287))-x288);

	if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x289 = -146612132982LL;
	uint16_t x290 = 1U;
	uint16_t x292 = UINT16_MAX;
	int64_t t64 = -49780549LL;

	t64 = ((x289|(x290==x291))-x292);

	if (t64 != -146612198517LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x293 = UINT64_MAX;
	int8_t x294 = 27;
	volatile int8_t x295 = 39;
	volatile uint64_t t65 = 42737305672LLU;

	t65 = ((x293|(x294==x295))-x296);

	if (t65 != 18446744073709551471LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = 106;
	volatile uint8_t x298 = 120U;
	volatile int8_t x300 = -1;
	int32_t t66 = 15848246;

	t66 = ((x297|(x298==x299))-x300);

	if (t66 != 107) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x301 = -196584LL;
	static volatile uint16_t x302 = 30U;
	int64_t x303 = -96483711LL;
	static int64_t x304 = -34154017936LL;
	int64_t t67 = 394LL;

	t67 = ((x301|(x302==x303))-x304);

	if (t67 != 34153821352LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x305 = INT8_MIN;
	int8_t x308 = INT8_MAX;
	volatile int32_t t68 = -5554870;

	t68 = ((x305|(x306==x307))-x308);

	if (t68 != -255) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MIN;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t69 = 39U;

	t69 = ((x309|(x310==x311))-x312);

	if (t69 != 2147483649U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = 0;
	int64_t x315 = 2892635171LL;
	int64_t x316 = -8785920119617273LL;
	volatile int64_t t70 = -92LL;

	t70 = ((x313|(x314==x315))-x316);

	if (t70 != 8785920119617528LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x318 = UINT8_MAX;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t71 = 45444671;

	t71 = ((x317|(x318==x319))-x320);

	if (t71 != 32756) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x322 = -1;
	volatile uint64_t x324 = UINT64_MAX;
	uint64_t t72 = 2342096289012962LLU;

	t72 = ((x321|(x322==x323))-x324);

	if (t72 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = 266022494230LLU;
	uint16_t x327 = 26232U;
	volatile uint32_t t73 = 830084479U;

	t73 = ((x325|(x326==x327))-x328);

	if (t73 != 4293172721U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x334 = INT16_MAX;
	static int64_t x335 = -1LL;
	volatile int8_t x336 = -1;
	int32_t t74 = -1847;

	t74 = ((x333|(x334==x335))-x336);

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x337 = 0U;
	uint32_t x339 = 131745508U;
	uint16_t x340 = 4332U;
	int32_t t75 = 2;

	t75 = ((x337|(x338==x339))-x340);

	if (t75 != -4332) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x341 = -1728;
	int64_t x342 = INT64_MIN;
	volatile uint8_t x343 = UINT8_MAX;
	static int64_t x344 = -1LL;
	int64_t t76 = -282401098LL;

	t76 = ((x341|(x342==x343))-x344);

	if (t76 != -1727LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x345 = 1612;
	uint16_t x346 = 1150U;
	int8_t x347 = -4;
	int16_t x348 = INT16_MAX;
	static int32_t t77 = -87782578;

	t77 = ((x345|(x346==x347))-x348);

	if (t77 != -31155) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x349 = 10LL;
	uint16_t x350 = UINT16_MAX;
	int64_t x351 = -13LL;
	uint8_t x352 = 16U;

	t78 = ((x349|(x350==x351))-x352);

	if (t78 != -6LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = -1LL;
	static uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MIN;
	volatile uint32_t x356 = UINT32_MAX;
	int64_t t79 = 6798LL;

	t79 = ((x353|(x354==x355))-x356);

	if (t79 != -4294967296LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x357 = -24521;
	volatile int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	int32_t x360 = -1;
	static int32_t t80 = 3175;

	t80 = ((x357|(x358==x359))-x360);

	if (t80 != -24520) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x363 = 338808490872057753LLU;
	int32_t x364 = -1;
	uint32_t t81 = 1200168426U;

	t81 = ((x361|(x362==x363))-x364);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = -8003;
	uint32_t x367 = 2U;
	int64_t x368 = -1LL;
	int64_t t82 = -1LL;

	t82 = ((x365|(x366==x367))-x368);

	if (t82 != 65536LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x369 = 5727U;
	static int64_t x370 = INT64_MIN;
	uint64_t x372 = UINT64_MAX;
	uint64_t t83 = 126301904LLU;

	t83 = ((x369|(x370==x371))-x372);

	if (t83 != 5728LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = -1;
	static int32_t x374 = INT32_MAX;
	uint64_t x375 = UINT64_MAX;
	static int32_t t84 = -1;

	t84 = ((x373|(x374==x375))-x376);

	if (t84 != -256) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = 3U;
	int64_t x378 = -16138507394079043LL;
	static int8_t x380 = INT8_MIN;
	static volatile int32_t t85 = -25443;

	t85 = ((x377|(x378==x379))-x380);

	if (t85 != 131) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x381 = INT32_MIN;
	int8_t x382 = INT8_MIN;
	int64_t x383 = -12LL;
	int8_t x384 = -30;
	int32_t t86 = 5417;

	t86 = ((x381|(x382==x383))-x384);

	if (t86 != -2147483618) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = -190546916;
	static int8_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	int16_t x388 = INT16_MAX;
	int32_t t87 = -24;

	t87 = ((x385|(x386==x387))-x388);

	if (t87 != -190579683) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x393 = -1LL;
	static int16_t x394 = 159;
	uint16_t x395 = 857U;
	static int8_t x396 = -1;
	int64_t t88 = -443997060759109LL;

	t88 = ((x393|(x394==x395))-x396);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = INT16_MIN;
	int32_t x398 = INT32_MIN;
	static int32_t x399 = -1;
	static volatile uint8_t x400 = 59U;
	volatile int32_t t89 = -108;

	t89 = ((x397|(x398==x399))-x400);

	if (t89 != -32827) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x401 = INT32_MAX;
	int32_t x403 = INT32_MIN;
	volatile uint64_t x404 = 5191LLU;
	static uint64_t t90 = 50418207LLU;

	t90 = ((x401|(x402==x403))-x404);

	if (t90 != 2147478456LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x405 = -1;
	int32_t x406 = 380760643;
	static int64_t x407 = INT64_MAX;
	volatile uint64_t x408 = 1083LLU;
	volatile uint64_t t91 = 746856720395138LLU;

	t91 = ((x405|(x406==x407))-x408);

	if (t91 != 18446744073709550532LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint8_t x409 = 5U;
	uint8_t x410 = 0U;
	uint32_t x411 = UINT32_MAX;
	uint8_t x412 = UINT8_MAX;
	int32_t t92 = -17587777;

	t92 = ((x409|(x410==x411))-x412);

	if (t92 != -250) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x415 = UINT8_MAX;
	int64_t x416 = INT64_MAX;
	volatile int64_t t93 = -1235005997LL;

	t93 = ((x413|(x414==x415))-x416);

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x418 = -1LL;
	int16_t x419 = INT16_MAX;
	int64_t x420 = INT64_MIN;
	static volatile int64_t t94 = INT64_MAX;

	t94 = ((x417|(x418==x419))-x420);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 18U;
	static uint8_t x422 = 2U;
	int64_t x423 = INT64_MAX;
	int32_t x424 = INT32_MIN;
	volatile uint32_t t95 = 12590U;

	t95 = ((x421|(x422==x423))-x424);

	if (t95 != 2147483666U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x425 = -1309690723985LL;
	volatile uint32_t x426 = UINT32_MAX;
	volatile uint8_t x427 = UINT8_MAX;
	int32_t x428 = -786;
	volatile int64_t t96 = 1041763LL;

	t96 = ((x425|(x426==x427))-x428);

	if (t96 != -1309690723199LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x429 = -3;
	int16_t x430 = INT16_MAX;
	static uint16_t x431 = 1U;
	int8_t x432 = INT8_MIN;
	static int32_t t97 = -6;

	t97 = ((x429|(x430==x431))-x432);

	if (t97 != 125) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 0;
	volatile int32_t x434 = INT32_MIN;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = UINT32_MAX;
	uint32_t t98 = 956309U;

	t98 = ((x433|(x434==x435))-x436);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = INT64_MIN;
	uint64_t x438 = 2LLU;
	int32_t x439 = -15893731;
	static int32_t x440 = INT32_MIN;
	static volatile int64_t t99 = -8088921385135896LL;

	t99 = ((x437|(x438==x439))-x440);

	if (t99 != -9223372034707292160LL) { NG(); } else { ; }
	
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

