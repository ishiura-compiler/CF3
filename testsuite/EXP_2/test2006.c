#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 3654111LLU;
int64_t t1 = 942LL;
int64_t x10 = -6761659077809LL;
uint32_t x20 = 339U;
int8_t x29 = -1;
volatile int16_t x30 = INT16_MIN;
uint8_t x32 = 2U;
volatile uint64_t x36 = UINT64_MAX;
int64_t x38 = INT64_MAX;
int32_t x39 = INT32_MIN;
int8_t x41 = INT8_MAX;
int32_t x59 = -1;
static int16_t x60 = 1;
int64_t x61 = INT64_MIN;
static volatile int64_t x68 = 3278LL;
uint8_t x69 = 0U;
static int64_t x71 = INT64_MAX;
int64_t t18 = 7193LL;
int64_t x81 = 811548627132651021LL;
int64_t x83 = INT64_MAX;
int8_t x90 = INT8_MIN;
int32_t t22 = 4220;
volatile uint32_t x93 = UINT32_MAX;
static uint8_t x95 = UINT8_MAX;
static int32_t x111 = 0;
uint32_t x115 = UINT32_MAX;
volatile int8_t x117 = INT8_MAX;
int64_t t29 = -5LL;
int32_t x122 = -39207;
int64_t x125 = -1LL;
int16_t x131 = INT16_MIN;
volatile int32_t t32 = 47314;
uint16_t x139 = UINT16_MAX;
static int64_t x140 = INT64_MIN;
uint32_t x153 = 409381834U;
volatile int64_t x154 = INT64_MIN;
uint32_t x160 = UINT32_MAX;
volatile int32_t x161 = -246874;
int8_t x171 = -1;
int32_t x176 = INT32_MIN;
volatile int64_t t43 = -322079921706LL;
int32_t x181 = -1;
uint32_t x186 = 27U;
uint32_t x188 = UINT32_MAX;
volatile uint32_t t46 = 132671U;
static int64_t t47 = -13640560851LL;
uint8_t x198 = UINT8_MAX;
volatile int64_t x206 = -1LL;
int8_t x207 = -20;
int8_t x209 = INT8_MIN;
volatile int16_t x210 = 880;
uint8_t x214 = 20U;
int16_t x216 = 20;
int16_t x217 = INT16_MIN;
int64_t x220 = INT64_MIN;
volatile int32_t x221 = INT32_MAX;
int32_t x223 = INT32_MAX;
uint32_t x225 = UINT32_MAX;
int32_t x231 = 461614;
int64_t x238 = INT64_MAX;
static int8_t x243 = -40;
uint16_t x245 = 14145U;
int64_t x249 = -1LL;
uint16_t x255 = 3148U;
uint32_t t63 = 0U;
int16_t x258 = -1;
static int64_t x259 = INT64_MAX;
int64_t t64 = 338LL;
volatile uint64_t t66 = 0LLU;
volatile int64_t x270 = -30788517325LL;
static volatile int64_t x283 = INT64_MIN;
int64_t t70 = 171815LL;
volatile int64_t x289 = INT64_MIN;
static volatile uint16_t x297 = 62U;
volatile int64_t t75 = -6LL;
int16_t x305 = INT16_MIN;
volatile int16_t x307 = 0;
uint32_t x316 = UINT32_MAX;
volatile uint16_t x320 = 13351U;
volatile uint32_t x325 = 8782U;
int32_t x329 = INT32_MIN;
int16_t x330 = INT16_MIN;
int8_t x331 = -1;
uint64_t t85 = 413564LLU;
int32_t x345 = INT32_MIN;
int32_t x349 = -1;
int32_t x351 = INT32_MAX;
int8_t x352 = INT8_MIN;
int8_t x355 = 46;
volatile int16_t x359 = -1;
static volatile uint64_t t89 = 16982888694LLU;
int16_t x362 = INT16_MIN;
volatile uint64_t x365 = UINT64_MAX;
static volatile uint16_t x371 = 224U;
int16_t x372 = INT16_MAX;
static volatile uint8_t x378 = 4U;
uint64_t x381 = UINT64_MAX;
volatile uint64_t t95 = 54939044051LLU;
int8_t x387 = INT8_MAX;
uint32_t x390 = UINT32_MAX;
uint64_t x394 = 113654LLU;
int8_t x395 = INT8_MAX;


void f0(void) {
	uint64_t x1 = 7096LLU;
	int64_t x2 = INT64_MIN;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = -1;

	t0 = ((x1|(x2|x3))/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 1003269LL;
	uint8_t x6 = 50U;
	static int16_t x7 = INT16_MAX;
	static int64_t x8 = 497857651253393LL;

	t1 = ((x5|(x6|x7))/x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	static uint64_t x11 = 3211897771LLU;
	static int8_t x12 = INT8_MIN;
	uint64_t t2 = 14852400LLU;

	t2 = ((x9|(x10|x11))/x12);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = -1;
	static int32_t x15 = INT32_MIN;
	volatile int32_t x16 = INT32_MAX;
	int32_t t3 = -910494404;

	t3 = ((x13|(x14|x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;
	int32_t x19 = INT32_MIN;
	volatile int64_t t4 = -6LL;

	t4 = ((x17|(x18|x19))/x20);

	if (t4 != -96LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x21 = -1LL;
	int16_t x22 = 0;
	int8_t x23 = INT8_MIN;
	uint32_t x24 = UINT32_MAX;
	volatile int64_t t5 = 150498908LL;

	t5 = ((x21|(x22|x23))/x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	int16_t x26 = -1;
	int8_t x27 = INT8_MAX;
	volatile int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 2;

	t6 = ((x25|(x26|x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x31 = -1;
	int32_t t7 = 2474;

	t7 = ((x29|(x30|x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	volatile uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 7U;
	volatile uint64_t t8 = 571357266974469132LLU;

	t8 = ((x33|(x34|x35))/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	volatile int16_t x40 = -95;
	volatile int64_t t9 = 63871204589055021LL;

	t9 = ((x37|(x38|x39))/x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x42 = 0;
	int64_t x43 = INT64_MAX;
	uint32_t x44 = 347620U;
	int64_t t10 = -18482053LL;

	t10 = ((x41|(x42|x43))/x44);

	if (t10 != 26532915358307LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 1012LL;
	uint16_t x46 = 2U;
	int16_t x47 = -14580;
	uint32_t x48 = 14422674U;
	volatile int64_t t11 = 116LL;

	t11 = ((x45|(x46|x47))/x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 1293;
	uint32_t x50 = UINT32_MAX;
	uint8_t x51 = UINT8_MAX;
	int32_t x52 = INT32_MIN;
	static volatile uint32_t t12 = 18U;

	t12 = ((x49|(x50|x51))/x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MAX;
	int16_t x55 = -1;
	int8_t x56 = -26;
	volatile int32_t t13 = 841;

	t13 = ((x53|(x54|x55))/x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -47;
	int8_t x58 = -6;
	volatile int32_t t14 = -1;

	t14 = ((x57|(x58|x59))/x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = UINT64_MAX;
	static int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MAX;
	uint64_t t15 = 82116257955LLU;

	t15 = ((x61|(x62|x63))/x64);

	if (t15 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	int16_t x66 = 7;
	uint32_t x67 = 259564132U;
	volatile int64_t t16 = -63150LL;

	t16 = ((x65|(x66|x67))/x68);

	if (t16 != -2813719352225506LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = -52LL;
	int32_t x72 = 1;
	static volatile int64_t t17 = 7825509778351370LL;

	t17 = ((x69|(x70|x71))/x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = UINT16_MAX;
	uint8_t x75 = 46U;
	int16_t x76 = -80;

	t18 = ((x73|(x74|x75))/x76);

	if (t18 != 115292150460683878LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = 23374U;
	int8_t x78 = -10;
	int8_t x79 = -1;
	static int32_t x80 = -1;
	static int32_t t19 = -11;

	t19 = ((x77|(x78|x79))/x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x82 = 18652U;
	int16_t x84 = -1;
	int64_t t20 = 5605829302343302LL;

	t20 = ((x81|(x82|x83))/x84);

	if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 3U;
	int16_t x86 = 1;
	uint8_t x87 = 62U;
	int8_t x88 = 6;
	int32_t t21 = -351416;

	t21 = ((x85|(x86|x87))/x88);

	if (t21 != 10) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	volatile int16_t x91 = 4112;
	int8_t x92 = INT8_MIN;

	t22 = ((x89|(x90|x91))/x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x94 = INT8_MIN;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t23 = 1033534801U;

	t23 = ((x93|(x94|x95))/x96);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 231528LLU;
	int8_t x98 = -1;
	int8_t x99 = -1;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t24 = 19150LLU;

	t24 = ((x97|(x98|x99))/x100);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 49U;
	volatile int32_t x102 = -1;
	int16_t x103 = -1;
	static volatile uint16_t x104 = 77U;
	static int32_t t25 = 3281;

	t25 = ((x101|(x102|x103))/x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -390183347218604LL;
	static uint64_t x106 = 29298308369860668LLU;
	int64_t x107 = -1LL;
	int32_t x108 = INT32_MAX;
	volatile uint64_t t26 = 485644870LLU;

	t26 = ((x105|(x106|x107))/x108);

	if (t26 != 8589934596LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	int16_t x110 = -5;
	volatile uint8_t x112 = 1U;
	int64_t t27 = -1137279314482056578LL;

	t27 = ((x109|(x110|x111))/x112);

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -155;
	uint32_t x114 = 2607U;
	uint32_t x116 = UINT32_MAX;
	uint32_t t28 = 224610U;

	t28 = ((x113|(x114|x115))/x116);

	if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x118 = INT16_MIN;
	uint8_t x119 = 2U;
	int64_t x120 = INT64_MIN;

	t29 = ((x117|(x118|x119))/x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 60LLU;
	uint32_t x123 = UINT32_MAX;
	static int64_t x124 = 2121518790437LL;
	uint64_t t30 = 3065058870127746235LLU;

	t30 = ((x121|(x122|x123))/x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = 460;
	int32_t x127 = -1;
	volatile int8_t x128 = INT8_MAX;
	volatile int64_t t31 = 8968323722033161LL;

	t31 = ((x125|(x126|x127))/x128);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MIN;
	uint16_t x132 = 1911U;

	t32 = ((x129|(x130|x131))/x132);

	if (t32 != -17) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int8_t x134 = -1;
	int64_t x135 = -560163448255295LL;
	uint8_t x136 = 23U;
	int64_t t33 = 2689331750716836916LL;

	t33 = ((x133|(x134|x135))/x136);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 3700017025746635LLU;
	uint64_t x138 = 442221983249LLU;
	static volatile uint64_t t34 = 1842LLU;

	t34 = ((x137|(x138|x139))/x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	static int16_t x142 = -12;
	int32_t x143 = INT32_MAX;
	volatile int16_t x144 = -1;
	volatile int64_t t35 = -339200024764944LL;

	t35 = ((x141|(x142|x143))/x144);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = -33052934LL;
	int8_t x147 = INT8_MIN;
	volatile int64_t x148 = INT64_MIN;
	int64_t t36 = 8419513LL;

	t36 = ((x145|(x146|x147))/x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = UINT32_MAX;
	volatile uint64_t x150 = 10800057274LLU;
	static uint64_t x151 = UINT64_MAX;
	int64_t x152 = INT64_MIN;
	uint64_t t37 = 1302826LLU;

	t37 = ((x149|(x150|x151))/x152);

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x155 = 9042360875150406084LLU;
	uint8_t x156 = UINT8_MAX;
	uint64_t t38 = 196516218904363107LLU;

	t38 = ((x153|(x154|x155))/x156);

	if (t38 != 71630325145662190LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = -15;
	volatile int64_t x159 = -963782975078345962LL;
	volatile int64_t t39 = -21253990273LL;

	t39 = ((x157|(x158|x159))/x160);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -144;
	static int32_t x163 = -44846;
	int32_t x164 = -116492241;
	int32_t t40 = -59;

	t40 = ((x161|(x162|x163))/x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -5884LL;
	static uint16_t x167 = UINT16_MAX;
	int8_t x168 = -1;
	volatile int64_t t41 = 9852911899736444LL;

	t41 = ((x165|(x166|x167))/x168);

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int16_t x170 = -1107;
	volatile uint8_t x172 = 8U;
	uint32_t t42 = 25U;

	t42 = ((x169|(x170|x171))/x172);

	if (t42 != 536870911U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 232977;
	uint16_t x174 = UINT16_MAX;
	static int64_t x175 = INT64_MIN;

	t43 = ((x173|(x174|x175))/x176);

	if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	static int8_t x178 = -1;
	uint64_t x179 = 16669874867LLU;
	uint16_t x180 = UINT16_MAX;
	volatile uint64_t t44 = 10LLU;

	t44 = ((x177|(x178|x179))/x180);

	if (t44 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x182 = 17262352U;
	volatile int16_t x183 = INT16_MIN;
	static uint16_t x184 = UINT16_MAX;
	uint32_t t45 = 504178985U;

	t45 = ((x181|(x182|x183))/x184);

	if (t45 != 65537U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 49U;
	uint8_t x187 = 24U;

	t46 = ((x185|(x186|x187))/x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = INT16_MAX;
	volatile int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;

	t47 = ((x189|(x190|x191))/x192);

	if (t47 != 72057594004373504LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MIN;
	static int32_t x194 = 6239395;
	int8_t x195 = INT8_MAX;
	static volatile uint8_t x196 = 3U;
	int32_t t48 = -40;

	t48 = ((x193|(x194|x195))/x196);

	if (t48 != -6400) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -179785059;
	static volatile uint64_t x199 = 492LLU;
	int16_t x200 = INT16_MAX;
	uint64_t t49 = 1777698478434636441LLU;

	t49 = ((x197|(x198|x199))/x200);

	if (t49 != 562967133809313LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = -6852;
	int64_t x202 = -15460LL;
	int64_t x203 = -29LL;
	int64_t x204 = 951965023570LL;
	int64_t t50 = 881LL;

	t50 = ((x201|(x202|x203))/x204);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 2174607U;
	int32_t x208 = INT32_MIN;
	static volatile int64_t t51 = -27352369LL;

	t51 = ((x205|(x206|x207))/x208);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	int32_t t52 = 20849464;

	t52 = ((x209|(x210|x211))/x212);

	if (t52 != 16) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	int64_t x215 = -43473690086549002LL;
	volatile int64_t t53 = 6001LL;

	t53 = ((x213|(x214|x215))/x216);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -1;
	volatile int16_t x219 = INT16_MIN;
	static int64_t t54 = -852211411938LL;

	t54 = ((x217|(x218|x219))/x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x222 = -3252471;
	uint8_t x224 = 21U;
	int32_t t55 = 1032264;

	t55 = ((x221|(x222|x223))/x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = INT64_MIN;
	volatile int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MAX;
	volatile int64_t t56 = 49369279LL;

	t56 = ((x225|(x226|x227))/x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 17U;
	int64_t x230 = INT64_MIN;
	uint16_t x232 = 1529U;
	volatile int64_t t57 = 0LL;

	t57 = ((x229|(x230|x231))/x232);

	if (t57 != -6032290409976660LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -27;
	static int8_t x234 = -1;
	int16_t x235 = -1;
	int32_t x236 = -62692;
	volatile int32_t t58 = 513448178;

	t58 = ((x233|(x234|x235))/x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 247533885477562069LLU;
	static uint32_t x239 = 10674709U;
	int16_t x240 = 1;
	static uint64_t t59 = 13910600465793LLU;

	t59 = ((x237|(x238|x239))/x240);

	if (t59 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int8_t x241 = INT8_MAX;
	static int64_t x242 = 1LL;
	static int8_t x244 = 2;
	int64_t t60 = -9761560400195LL;

	t60 = ((x241|(x242|x243))/x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = -5947354712LL;
	uint32_t x247 = 58231U;
	static volatile int16_t x248 = 1980;
	static volatile int64_t t61 = -13879557657934LL;

	t61 = ((x245|(x246|x247))/x248);

	if (t61 != -3003701LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x250 = 1488U;
	int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	int64_t t62 = 4LL;

	t62 = ((x249|(x250|x251))/x252);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = INT8_MIN;
	static uint32_t x254 = 69U;
	int32_t x256 = INT32_MIN;

	t63 = ((x253|(x254|x255))/x256);

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int32_t x260 = 38636;

	t64 = ((x257|(x258|x259))/x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = 10550754913LL;
	static volatile int32_t x262 = INT32_MAX;
	uint64_t x263 = 125233298824LLU;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t65 = 125517714071035559LLU;

	t65 = ((x261|(x262|x263))/x264);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = UINT32_MAX;
	static int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MAX;
	uint64_t x268 = UINT64_MAX;

	t66 = ((x265|(x266|x267))/x268);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	volatile int8_t x271 = -1;
	volatile uint8_t x272 = 2U;
	int64_t t67 = -1259LL;

	t67 = ((x269|(x270|x271))/x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = 888250147LLU;
	volatile int8_t x274 = INT8_MAX;
	static uint32_t x275 = UINT32_MAX;
	int32_t x276 = 205193;
	uint64_t t68 = 49084LLU;

	t68 = ((x273|(x274|x275))/x276);

	if (t68 != 20931LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = 15;
	uint64_t x279 = 14441618191LLU;
	volatile int32_t x280 = INT32_MAX;
	volatile uint64_t t69 = 804292LLU;

	t69 = ((x277|(x278|x279))/x280);

	if (t69 != 8589934596LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 553626319U;
	int32_t x282 = -1171;
	int16_t x284 = -1;

	t70 = ((x281|(x282|x283))/x284);

	if (t70 != 1041LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = 5668;
	static int16_t x287 = 0;
	static volatile int64_t x288 = INT64_MAX;
	int64_t t71 = 25661LL;

	t71 = ((x285|(x286|x287))/x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	int64_t x291 = 3387LL;
	uint64_t x292 = UINT64_MAX;
	uint64_t t72 = 1131LLU;

	t72 = ((x289|(x290|x291))/x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	static int64_t x294 = INT64_MAX;
	static int64_t x295 = INT64_MIN;
	int8_t x296 = 1;
	volatile int64_t t73 = 1856962337LL;

	t73 = ((x293|(x294|x295))/x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x298 = 5557U;
	int32_t x299 = 3964;
	int32_t x300 = -191171849;
	volatile int32_t t74 = -376043188;

	t74 = ((x297|(x298|x299))/x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 13051649582LL;
	int16_t x302 = INT16_MIN;
	static volatile int16_t x303 = INT16_MAX;
	int32_t x304 = -1;

	t75 = ((x301|(x302|x303))/x304);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x306 = 22542508021998344LL;
	uint64_t x308 = UINT64_MAX;
	static volatile uint64_t t76 = 2084904572749355LLU;

	t76 = ((x305|(x306|x307))/x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x310 = -1;
	int64_t x311 = INT64_MAX;
	int8_t x312 = INT8_MAX;
	static int64_t t77 = 104524672780420841LL;

	t77 = ((x309|(x310|x311))/x312);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	uint8_t x315 = 88U;
	static volatile uint32_t t78 = 5438990U;

	t78 = ((x313|(x314|x315))/x316);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 25U;
	static volatile int16_t x318 = -1;
	static uint64_t x319 = 52311LLU;
	static volatile uint64_t t79 = 2LLU;

	t79 = ((x317|(x318|x319))/x320);

	if (t79 != 1381675086039214LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x321 = UINT16_MAX;
	uint8_t x322 = UINT8_MAX;
	int8_t x323 = -5;
	volatile uint8_t x324 = 1U;
	volatile int32_t t80 = -1777;

	t80 = ((x321|(x322|x323))/x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = 4976;
	uint32_t t81 = 3285U;

	t81 = ((x325|(x326|x327))/x328);

	if (t81 != 863136U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x332 = -1;
	int32_t t82 = -55;

	t82 = ((x329|(x330|x331))/x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x333 = 17303U;
	int8_t x334 = INT8_MIN;
	static int8_t x335 = 6;
	int16_t x336 = -1;
	static volatile int32_t t83 = -33438;

	t83 = ((x333|(x334|x335))/x336);

	if (t83 != 105) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 8U;
	int16_t x338 = INT16_MIN;
	volatile int64_t x339 = INT64_MIN;
	static volatile int64_t x340 = INT64_MIN;
	int64_t t84 = 92507736LL;

	t84 = ((x337|(x338|x339))/x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint8_t x342 = UINT8_MAX;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = INT32_MIN;

	t85 = ((x341|(x342|x343))/x344);

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = -1;
	int16_t x347 = INT16_MIN;
	static int32_t x348 = 24373;
	int32_t t86 = 1;

	t86 = ((x345|(x346|x347))/x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -1;
	volatile int32_t t87 = 0;

	t87 = ((x349|(x350|x351))/x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = 30;
	uint64_t x354 = 9641431223493LLU;
	static volatile int32_t x356 = INT32_MIN;
	static volatile uint64_t t88 = 67070273LLU;

	t88 = ((x353|(x354|x355))/x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = UINT8_MAX;
	volatile int64_t x358 = INT64_MAX;
	uint64_t x360 = 538466326718027LLU;

	t89 = ((x357|(x358|x359))/x360);

	if (t89 != 34257LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x361 = 2U;
	int16_t x363 = INT16_MIN;
	volatile int32_t x364 = INT32_MIN;
	static volatile int32_t t90 = 20;

	t90 = ((x361|(x362|x363))/x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x366 = INT32_MIN;
	int8_t x367 = -1;
	volatile uint64_t x368 = 225489499057199726LLU;
	volatile uint64_t t91 = 1LLU;

	t91 = ((x365|(x366|x367))/x368);

	if (t91 != 81LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = UINT32_MAX;
	int8_t x370 = 5;
	volatile uint32_t t92 = 7U;

	t92 = ((x369|(x370|x371))/x372);

	if (t92 != 131076U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 3268U;
	volatile uint32_t x374 = 59U;
	volatile int8_t x375 = INT8_MIN;
	volatile int64_t x376 = INT64_MIN;
	int64_t t93 = -102100528LL;

	t93 = ((x373|(x374|x375))/x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	uint32_t x379 = UINT32_MAX;
	int8_t x380 = -7;
	uint32_t t94 = 6757845U;

	t94 = ((x377|(x378|x379))/x380);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = UINT64_MAX;
	int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MAX;

	t95 = ((x381|(x382|x383))/x384);

	if (t95 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	uint8_t x386 = 13U;
	static int32_t x388 = -1707585;
	volatile int32_t t96 = 1502;

	t96 = ((x385|(x386|x387))/x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x389 = UINT8_MAX;
	volatile int8_t x391 = INT8_MIN;
	static volatile int16_t x392 = -1;
	static volatile uint32_t t97 = 25U;

	t97 = ((x389|(x390|x391))/x392);

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int32_t x396 = 5322;
	static uint64_t t98 = 19553311LLU;

	t98 = ((x393|(x394|x395))/x396);

	if (t98 != 3466130040155868LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 439088205U;
	static int64_t t99 = -12686527385LL;

	t99 = ((x397|(x398|x399))/x400);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

