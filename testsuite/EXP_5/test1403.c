#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x8 = 282849LLU;
static uint8_t x9 = 115U;
volatile int64_t x16 = -1LL;
int16_t x19 = INT16_MIN;
volatile int32_t t4 = -356;
uint64_t x24 = 5062010192761LLU;
volatile int64_t x25 = INT64_MIN;
int16_t x35 = -1;
int32_t t10 = 3033;
volatile int64_t t11 = INT64_MIN;
int16_t x52 = INT16_MIN;
static int16_t x55 = INT16_MIN;
int8_t x57 = INT8_MIN;
int8_t x67 = -14;
int8_t x70 = INT8_MIN;
int16_t x71 = 1535;
volatile uint64_t x77 = 1910LLU;
int16_t x81 = -1;
static int32_t x83 = INT32_MIN;
volatile int32_t x85 = 3359827;
volatile int64_t t21 = INT64_MAX;
int32_t x94 = INT32_MIN;
int16_t x95 = 405;
int32_t x96 = -17078;
uint64_t t24 = 62327406799858LLU;
int16_t x106 = INT16_MIN;
int64_t x108 = -1LL;
static volatile int8_t x109 = -1;
static int32_t x110 = INT32_MIN;
int32_t t26 = 0;
uint32_t t27 = 2492U;
volatile int16_t x119 = 20;
volatile int16_t x122 = INT16_MAX;
static uint64_t t29 = 8561607004440602942LLU;
int8_t x128 = -49;
volatile int64_t t32 = 4594004519718348LL;
int16_t x138 = INT16_MIN;
volatile uint32_t t34 = 176703964U;
int32_t x146 = 3557;
uint64_t x151 = 3736LLU;
uint32_t x160 = 12602U;
uint64_t x161 = 6274LLU;
static uint64_t x165 = UINT64_MAX;
int16_t x168 = INT16_MAX;
int8_t x169 = INT8_MAX;
int32_t x170 = -3;
int64_t x178 = INT64_MIN;
uint16_t x179 = 1056U;
uint8_t x181 = UINT8_MAX;
int32_t x184 = INT32_MAX;
volatile int32_t t44 = -4;
static int32_t x187 = -1;
int32_t x196 = -1;
static int32_t t47 = -4;
int8_t x197 = INT8_MIN;
int16_t x201 = -1;
uint8_t x202 = 15U;
static int32_t x203 = INT32_MIN;
int8_t x204 = -1;
int32_t t49 = -2;
volatile int8_t x206 = INT8_MIN;
int32_t x209 = -4669936;
uint32_t x213 = 164755U;
static uint64_t x214 = 79933727131604268LLU;
int64_t x224 = INT64_MIN;
uint64_t x227 = UINT64_MAX;
static volatile uint64_t x229 = 6470942249182290LLU;
int16_t x230 = 21;
volatile uint64_t t56 = 448366LLU;
static int64_t x249 = INT64_MIN;
static volatile int64_t t61 = INT64_MIN;
volatile uint64_t t62 = 4560996470130069LLU;
static int32_t t64 = -94867917;
static volatile int8_t x267 = INT8_MIN;
static uint32_t x268 = UINT32_MAX;
int8_t x276 = INT8_MIN;
int32_t x282 = -1;
int16_t x287 = INT16_MIN;
static uint64_t t70 = 2LLU;
static volatile uint32_t x305 = 8128143U;
uint16_t x306 = 5812U;
volatile int32_t x321 = INT32_MIN;
volatile int32_t t78 = INT32_MIN;
uint32_t x325 = 772659U;
int16_t x329 = -15749;
static int8_t x334 = -1;
static volatile uint64_t t81 = 2549927278047LLU;
int64_t x338 = 0LL;
int32_t x339 = INT32_MAX;
int16_t x342 = -135;
static int8_t x347 = INT8_MAX;
int32_t t84 = 906329;
int32_t x354 = -1;
int32_t x358 = -1;
static volatile int16_t x359 = INT16_MAX;
static int16_t x361 = -1;
uint32_t x362 = 110U;
uint8_t x363 = UINT8_MAX;
int32_t t88 = 777200350;
volatile int16_t x370 = -4;
static uint64_t x371 = UINT64_MAX;
static uint16_t x372 = 438U;
int32_t x375 = -1;
volatile int32_t t91 = 28051;
int64_t x383 = -50178212185367LL;
static int64_t x386 = INT64_MIN;
uint32_t x390 = 6U;
static volatile uint64_t t97 = 514LLU;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = UINT16_MAX;
	static int32_t x4 = INT32_MIN;
	int32_t t0 = 1356;

	t0 = (x1|((x2<x3)/x4));

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 276036588LLU;
	volatile int64_t x6 = -2987719LL;
	uint16_t x7 = 56U;
	uint64_t t1 = 1LLU;

	t1 = (x5|((x6<x7)/x8));

	if (t1 != 276036588LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = INT8_MAX;
	static int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 266647534;

	t2 = (x9|((x10<x11)/x12));

	if (t2 != 115) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 14U;
	int64_t x14 = INT64_MIN;
	static uint16_t x15 = UINT16_MAX;
	volatile int64_t t3 = 194432LL;

	t3 = (x13|((x14<x15)/x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MIN;
	int8_t x18 = -8;
	static uint16_t x20 = UINT16_MAX;

	t4 = (x17|((x18<x19)/x20));

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	uint8_t x22 = 5U;
	volatile int64_t x23 = INT64_MAX;
	uint64_t t5 = 216LLU;

	t5 = (x21|((x22<x23)/x24));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x26 = INT32_MIN;
	static volatile int32_t x27 = 537882;
	volatile uint64_t x28 = UINT64_MAX;
	static uint64_t t6 = 210LLU;

	t6 = (x25|((x26<x27)/x28));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	int8_t x30 = -5;
	uint8_t x31 = 0U;
	volatile uint32_t x32 = 20963U;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29|((x30<x31)/x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x33 = 3U;
	volatile uint16_t x34 = 26600U;
	uint32_t x36 = 358848688U;
	volatile uint32_t t8 = 1513U;

	t8 = (x33|((x34<x35)/x36));

	if (t8 != 3U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 34;
	int8_t x38 = -2;
	uint64_t x39 = 102211942LLU;
	uint32_t x40 = 2225336U;
	volatile uint32_t t9 = 141354U;

	t9 = (x37|((x38<x39)/x40));

	if (t9 != 34U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int64_t x42 = -1LL;
	int8_t x43 = 1;
	int32_t x44 = -198;

	t10 = (x41|((x42<x43)/x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	volatile int8_t x46 = INT8_MAX;
	static uint8_t x47 = UINT8_MAX;
	int64_t x48 = -27140797877LL;

	t11 = (x45|((x46<x47)/x48));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 123LL;
	static volatile int16_t x50 = INT16_MIN;
	static volatile int8_t x51 = 0;
	int64_t t12 = -2024717565236524LL;

	t12 = (x49|((x50<x51)/x52));

	if (t12 != 123LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MAX;
	int8_t x54 = -1;
	static int32_t x56 = INT32_MIN;
	static int32_t t13 = INT32_MAX;

	t13 = (x53|((x54<x55)/x56));

	if (t13 != INT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = UINT8_MAX;
	int32_t x59 = 60481;
	int64_t x60 = 955145672023LL;
	volatile int64_t t14 = -692177283146LL;

	t14 = (x57|((x58<x59)/x60));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -411;
	uint16_t x66 = UINT16_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 13289;

	t15 = (x65|((x66<x67)/x68));

	if (t15 != -411) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = -1;
	static int8_t x72 = INT8_MIN;
	int32_t t16 = 176274984;

	t16 = (x69|((x70<x71)/x72));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 14LLU;
	int16_t x74 = -1;
	int8_t x75 = INT8_MAX;
	static int64_t x76 = -1LL;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = (x73|((x74<x75)/x76));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x78 = 23563U;
	volatile int32_t x79 = INT32_MIN;
	uint8_t x80 = 17U;
	volatile uint64_t t18 = 8122821141LLU;

	t18 = (x77|((x78<x79)/x80));

	if (t18 != 1910LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = INT16_MIN;
	uint32_t x84 = 733U;
	static uint32_t t19 = UINT32_MAX;

	t19 = (x81|((x82<x83)/x84));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MIN;
	int32_t x88 = INT32_MIN;
	int32_t t20 = 4579026;

	t20 = (x85|((x86<x87)/x88));

	if (t20 != 3359827) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x89 = INT64_MAX;
	int64_t x90 = 52067040210LL;
	uint16_t x91 = 146U;
	static int16_t x92 = INT16_MIN;

	t21 = (x89|((x90<x91)/x92));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = -1;
	static volatile int32_t t22 = 467;

	t22 = (x93|((x94<x95)/x96));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x97 = 35U;
	volatile uint8_t x98 = UINT8_MAX;
	int32_t x99 = 679498;
	static uint16_t x100 = UINT16_MAX;
	volatile int32_t t23 = -119629388;

	t23 = (x97|((x98<x99)/x100));

	if (t23 != 35) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 0U;
	uint32_t x102 = 15253U;
	volatile uint64_t x103 = 2020034008LLU;
	uint64_t x104 = UINT64_MAX;

	t24 = (x101|((x102<x103)/x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	static volatile uint32_t x107 = UINT32_MAX;
	static int64_t t25 = 5849519LL;

	t25 = (x105|((x106<x107)/x108));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x111 = 41;
	int16_t x112 = INT16_MAX;

	t26 = (x109|((x110<x111)/x112));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 393;
	static volatile uint16_t x114 = 1777U;
	volatile int16_t x115 = INT16_MIN;
	volatile uint32_t x116 = 3166337U;

	t27 = (x113|((x114<x115)/x116));

	if (t27 != 393U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = 0U;
	uint32_t x118 = 129969U;
	volatile int32_t x120 = 811;
	volatile int32_t t28 = 7998;

	t28 = (x117|((x118<x119)/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 405388379648265LLU;
	int64_t x123 = INT64_MAX;
	int16_t x124 = -6;

	t29 = (x121|((x122<x123)/x124));

	if (t29 != 405388379648265LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	static int8_t x126 = 2;
	int8_t x127 = INT8_MAX;
	volatile int32_t t30 = -282870378;

	t30 = (x125|((x126<x127)/x128));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 7237LLU;
	static volatile uint64_t x130 = UINT64_MAX;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 2353253634028512LLU;

	t31 = (x129|((x130<x131)/x132));

	if (t31 != 7237LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -4898250338165222LL;
	int64_t x134 = -60273156LL;
	volatile int8_t x135 = INT8_MIN;
	uint16_t x136 = 21743U;

	t32 = (x133|((x134<x135)/x136));

	if (t32 != -4898250338165222LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	int8_t x139 = 31;
	int64_t x140 = 1550135LL;
	volatile int64_t t33 = -14072180LL;

	t33 = (x137|((x138<x139)/x140));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = -11;
	static int8_t x142 = INT8_MIN;
	volatile uint8_t x143 = UINT8_MAX;
	static uint32_t x144 = 7069799U;

	t34 = (x141|((x142<x143)/x144));

	if (t34 != 4294967285U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MIN;
	volatile uint16_t x147 = 14U;
	int8_t x148 = -1;
	int32_t t35 = 8;

	t35 = (x145|((x146<x147)/x148));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = -1;
	static uint16_t x150 = 8200U;
	uint8_t x152 = 29U;
	int32_t t36 = -6450;

	t36 = (x149|((x150<x151)/x152));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -491342;
	int64_t x154 = INT64_MAX;
	volatile int32_t x155 = INT32_MIN;
	static int16_t x156 = 4004;
	volatile int32_t t37 = -366;

	t37 = (x153|((x154<x155)/x156));

	if (t37 != -491342) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MAX;
	volatile int32_t x158 = -244;
	volatile int32_t x159 = -2691436;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x157|((x158<x159)/x160));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x162 = 6U;
	int8_t x163 = -1;
	static int8_t x164 = INT8_MIN;
	uint64_t t39 = 1272469926949450904LLU;

	t39 = (x161|((x162<x163)/x164));

	if (t39 != 6274LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = -1;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x165|((x166<x167)/x168));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x171 = INT16_MAX;
	int16_t x172 = -1;
	volatile int32_t t41 = 28881;

	t41 = (x169|((x170<x171)/x172));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = -1;
	volatile int8_t x174 = INT8_MIN;
	static volatile int32_t x175 = INT32_MIN;
	static int16_t x176 = INT16_MAX;
	int32_t t42 = 1824;

	t42 = (x173|((x174<x175)/x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 1533531451LLU;
	uint64_t x180 = UINT64_MAX;
	uint64_t t43 = 11280258116597LLU;

	t43 = (x177|((x178<x179)/x180));

	if (t43 != 1533531451LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x182 = INT8_MIN;
	uint16_t x183 = 0U;

	t44 = (x181|((x182<x183)/x184));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x185 = INT16_MIN;
	uint32_t x186 = 22829704U;
	int32_t x188 = 58;
	volatile int32_t t45 = -1459;

	t45 = (x185|((x186<x187)/x188));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = -1;
	volatile int32_t x190 = 7;
	static volatile uint8_t x191 = 9U;
	int64_t x192 = INT64_MIN;
	volatile int64_t t46 = -274502874358099907LL;

	t46 = (x189|((x190<x191)/x192));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 15616U;
	volatile int8_t x194 = 0;
	int16_t x195 = -1;

	t47 = (x193|((x194<x195)/x196));

	if (t47 != 15616) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x198 = INT32_MAX;
	uint8_t x199 = 28U;
	uint16_t x200 = 162U;
	int32_t t48 = -239204;

	t48 = (x197|((x198<x199)/x200));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {


	t49 = (x201|((x202<x203)/x204));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 2766U;
	int64_t x207 = -442901774523LL;
	uint8_t x208 = 1U;
	volatile int32_t t50 = 0;

	t50 = (x205|((x206<x207)/x208));

	if (t50 != 2766) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x210 = 3010U;
	int32_t x211 = -1;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t51 = -2362085LL;

	t51 = (x209|((x210<x211)/x212));

	if (t51 != -4669936LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x215 = UINT64_MAX;
	int16_t x216 = -1;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x213|((x214<x215)/x216));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x217 = 150089991U;
	int8_t x218 = 27;
	uint64_t x219 = 603464LLU;
	int16_t x220 = INT16_MIN;
	uint32_t t53 = 248U;

	t53 = (x217|((x218<x219)/x220));

	if (t53 != 150089991U) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x221 = 159U;
	static uint16_t x222 = UINT16_MAX;
	volatile uint8_t x223 = 19U;
	int64_t t54 = 0LL;

	t54 = (x221|((x222<x223)/x224));

	if (t54 != 159LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;
	volatile uint64_t x226 = 164843176LLU;
	int8_t x228 = -1;
	volatile int32_t t55 = -475784;

	t55 = (x225|((x226<x227)/x228));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x231 = 59U;
	int16_t x232 = -2;

	t56 = (x229|((x230<x231)/x232));

	if (t56 != 6470942249182290LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	int8_t x234 = 2;
	static volatile int8_t x235 = -1;
	uint8_t x236 = 2U;
	int32_t t57 = -7636581;

	t57 = (x233|((x234<x235)/x236));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x237 = -1823;
	static int64_t x238 = INT64_MIN;
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = 830402LLU;
	volatile uint64_t t58 = 68LLU;

	t58 = (x237|((x238<x239)/x240));

	if (t58 != 18446744073709549793LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -1;
	static volatile int64_t x242 = INT64_MIN;
	uint64_t x243 = UINT64_MAX;
	int16_t x244 = INT16_MIN;
	static int32_t t59 = 86490167;

	t59 = (x241|((x242<x243)/x244));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -1;
	uint16_t x246 = UINT16_MAX;
	uint64_t x247 = 5096823546987307LLU;
	volatile int64_t x248 = INT64_MIN;
	int64_t t60 = 1LL;

	t60 = (x245|((x246<x247)/x248));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x250 = INT64_MIN;
	uint16_t x251 = 15U;
	volatile int32_t x252 = INT32_MIN;

	t61 = (x249|((x250<x251)/x252));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x253 = 680207LLU;
	uint16_t x254 = 4U;
	static uint8_t x255 = 61U;
	uint8_t x256 = UINT8_MAX;

	t62 = (x253|((x254<x255)/x256));

	if (t62 != 680207LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = 291U;
	int64_t x258 = INT64_MIN;
	static int64_t x259 = -1LL;
	int8_t x260 = INT8_MAX;
	int32_t t63 = -1;

	t63 = (x257|((x258<x259)/x260));

	if (t63 != 291) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x261 = -1;
	uint16_t x262 = 90U;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = 47579;

	t64 = (x261|((x262<x263)/x264));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x265 = -1;
	static uint16_t x266 = UINT16_MAX;
	uint32_t t65 = UINT32_MAX;

	t65 = (x265|((x266<x267)/x268));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x269 = 887927591U;
	uint32_t x270 = 24U;
	int8_t x271 = INT8_MIN;
	static volatile uint64_t x272 = UINT64_MAX;
	uint64_t t66 = 1202LLU;

	t66 = (x269|((x270<x271)/x272));

	if (t66 != 887927591LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = INT8_MIN;
	volatile uint8_t x274 = 1U;
	uint32_t x275 = 24U;
	int32_t t67 = -244;

	t67 = (x273|((x274<x275)/x276));

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = -1;
	volatile uint64_t x278 = 12047876008LLU;
	volatile int16_t x279 = -1;
	volatile int16_t x280 = INT16_MIN;
	static volatile int32_t t68 = -44;

	t68 = (x277|((x278<x279)/x280));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = INT32_MAX;
	int16_t x283 = 2;
	static int8_t x284 = -34;
	int32_t t69 = INT32_MAX;

	t69 = (x281|((x282<x283)/x284));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 22706U;
	int8_t x286 = INT8_MAX;
	static uint64_t x288 = 614594665787842LLU;

	t70 = (x285|((x286<x287)/x288));

	if (t70 != 22706LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x289 = INT64_MAX;
	static int8_t x290 = INT8_MIN;
	static uint16_t x291 = 2U;
	int16_t x292 = 2;
	int64_t t71 = INT64_MAX;

	t71 = (x289|((x290<x291)/x292));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	int32_t x295 = INT32_MIN;
	int16_t x296 = INT16_MAX;
	static int32_t t72 = 1007557;

	t72 = (x293|((x294<x295)/x296));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = -969704306;
	static int8_t x298 = INT8_MIN;
	uint32_t x299 = 1049U;
	int64_t x300 = -1LL;
	static int64_t t73 = 75LL;

	t73 = (x297|((x298<x299)/x300));

	if (t73 != -969704306LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = INT64_MIN;
	volatile int16_t x302 = 3;
	static uint32_t x303 = 3796879U;
	int64_t x304 = 11894183LL;
	volatile int64_t t74 = INT64_MIN;

	t74 = (x301|((x302<x303)/x304));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x307 = -1;
	int64_t x308 = -7205448LL;
	int64_t t75 = -6877LL;

	t75 = (x305|((x306<x307)/x308));

	if (t75 != 8128143LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x313 = 4872U;
	volatile int16_t x314 = 3497;
	static int64_t x315 = INT64_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t76 = -1;

	t76 = (x313|((x314<x315)/x316));

	if (t76 != 4872) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = 0;
	static uint16_t x318 = UINT16_MAX;
	int32_t x319 = INT32_MAX;
	static uint8_t x320 = 7U;
	int32_t t77 = 34;

	t77 = (x317|((x318<x319)/x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x322 = UINT32_MAX;
	uint16_t x323 = 6589U;
	int32_t x324 = -1;

	t78 = (x321|((x322<x323)/x324));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x326 = INT16_MIN;
	static volatile int64_t x327 = INT64_MIN;
	int16_t x328 = INT16_MIN;
	volatile uint32_t t79 = 40U;

	t79 = (x325|((x326<x327)/x328));

	if (t79 != 772659U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x330 = -1;
	int64_t x331 = INT64_MAX;
	static int64_t x332 = INT64_MIN;
	int64_t t80 = -1768840484691LL;

	t80 = (x329|((x330<x331)/x332));

	if (t80 != -15749LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MAX;
	int8_t x335 = INT8_MAX;
	static uint64_t x336 = 2LLU;

	t81 = (x333|((x334<x335)/x336));

	if (t81 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x337 = INT8_MAX;
	static int8_t x340 = -60;
	static volatile int32_t t82 = 46;

	t82 = (x337|((x338<x339)/x340));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = 221;
	volatile uint32_t x343 = 1233315822U;
	int16_t x344 = -1;
	volatile int32_t t83 = -264;

	t83 = (x341|((x342<x343)/x344));

	if (t83 != 221) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 1234U;
	static int64_t x346 = INT64_MIN;
	int8_t x348 = INT8_MIN;

	t84 = (x345|((x346<x347)/x348));

	if (t84 != 1234) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x349 = UINT64_MAX;
	int32_t x350 = -1;
	uint64_t x351 = 18507950388LLU;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x349|((x350<x351)/x352));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	uint8_t x355 = 5U;
	int8_t x356 = -1;
	int32_t t86 = 508;

	t86 = (x353|((x354<x355)/x356));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 15U;
	volatile uint32_t x360 = 6095073U;
	uint32_t t87 = 3927U;

	t87 = (x357|((x358<x359)/x360));

	if (t87 != 15U) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x364 = -1;

	t88 = (x361|((x362<x363)/x364));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MIN;
	int8_t x367 = -9;
	static volatile int64_t x368 = -182LL;
	volatile int64_t t89 = 130799030877722202LL;

	t89 = (x365|((x366<x367)/x368));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = 53125LL;
	static int64_t t90 = 6003113LL;

	t90 = (x369|((x370<x371)/x372));

	if (t90 != 53125LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 47;
	volatile uint32_t x374 = 164049U;
	static int8_t x376 = -19;

	t91 = (x373|((x374<x375)/x376));

	if (t91 != 47) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x377 = 0U;
	static uint8_t x378 = UINT8_MAX;
	int16_t x379 = 20;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t92 = 381484;

	t92 = (x377|((x378<x379)/x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = INT32_MIN;
	uint32_t x384 = UINT32_MAX;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x381|((x382<x383)/x384));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = -468972053LL;
	int32_t x387 = -376694;
	static uint64_t x388 = 1041531842LLU;
	uint64_t t94 = 932LLU;

	t94 = (x385|((x386<x387)/x388));

	if (t94 != 18446744073240579563LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = INT32_MIN;
	uint64_t x391 = 649297780908LLU;
	int64_t x392 = 6171LL;
	volatile int64_t t95 = 19624861LL;

	t95 = (x389|((x390<x391)/x392));

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x393 = 48U;
	int8_t x394 = INT8_MIN;
	volatile int64_t x395 = -1LL;
	int16_t x396 = -1;
	volatile uint32_t t96 = UINT32_MAX;

	t96 = (x393|((x394<x395)/x396));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = INT8_MAX;
	uint64_t x398 = 0LLU;
	uint16_t x399 = UINT16_MAX;
	volatile uint64_t x400 = UINT64_MAX;

	t97 = (x397|((x398<x399)/x400));

	if (t97 != 127LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x401 = UINT8_MAX;
	int16_t x402 = INT16_MAX;
	static int16_t x403 = 3091;
	volatile uint16_t x404 = 7U;
	int32_t t98 = -783;

	t98 = (x401|((x402<x403)/x404));

	if (t98 != 255) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x405 = INT64_MIN;
	uint64_t x406 = UINT64_MAX;
	static uint8_t x407 = UINT8_MAX;
	int16_t x408 = INT16_MIN;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x405|((x406<x407)/x408));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

