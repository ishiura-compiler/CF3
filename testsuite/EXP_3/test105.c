#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 13LLU;
static volatile int64_t x3 = 1637455296012506LL;
volatile int64_t t0 = 7561306LL;
int32_t x10 = INT32_MAX;
volatile int64_t x29 = INT64_MAX;
static volatile uint64_t x30 = UINT64_MAX;
uint32_t t5 = 28U;
int8_t x33 = INT8_MAX;
int8_t x37 = -1;
static uint64_t x41 = 10041117285LLU;
volatile uint32_t x47 = 2933U;
int16_t x49 = -1;
int8_t x52 = INT8_MIN;
int8_t x53 = INT8_MIN;
uint16_t x66 = 5483U;
int64_t t14 = INT64_MIN;
static uint64_t x85 = 4756267LLU;
int32_t x86 = -1;
uint8_t x88 = UINT8_MAX;
static int64_t t15 = 742587103710913204LL;
volatile uint16_t x92 = 14U;
uint64_t x96 = UINT64_MAX;
uint64_t t19 = 389928185LLU;
int32_t x115 = INT32_MAX;
volatile uint32_t t21 = 39992612U;
static uint32_t x117 = UINT32_MAX;
uint32_t x120 = 6346U;
static volatile int64_t x126 = INT64_MAX;
uint16_t x131 = 2091U;
int64_t x132 = 607138072484329460LL;
static uint32_t x135 = 22015U;
uint32_t t25 = 2U;
static int16_t x156 = -50;
int64_t x159 = INT64_MAX;
int8_t x162 = 0;
volatile int8_t x175 = INT8_MIN;
volatile uint32_t x177 = 2518U;
static int32_t x178 = INT32_MAX;
int8_t x180 = INT8_MIN;
static int32_t x184 = 16;
static uint32_t x192 = 16662U;
uint32_t x197 = UINT32_MAX;
volatile int8_t x205 = INT8_MAX;
int32_t t39 = 266904817;
uint8_t x209 = 127U;
volatile int16_t x210 = 3129;
volatile int32_t t41 = -213;
static int8_t x225 = -2;
uint64_t x227 = 9132220494528LLU;
uint32_t x235 = UINT32_MAX;
volatile uint32_t t43 = 2426U;
volatile int32_t x245 = -13;
uint64_t x262 = 541555034LLU;
static uint8_t x263 = 2U;
uint8_t x264 = 3U;
int32_t x270 = INT32_MIN;
int64_t x272 = INT64_MAX;
static uint16_t x275 = UINT16_MAX;
static int32_t t51 = -5745420;
int8_t x278 = -1;
volatile uint8_t x279 = 2U;
uint32_t x287 = UINT32_MAX;
int8_t x288 = INT8_MAX;
uint32_t t54 = 7506U;
int64_t x290 = 130581101102083LL;
volatile int8_t x293 = 0;
static uint64_t x296 = UINT64_MAX;
int32_t x304 = 6380774;
static uint16_t x308 = 29819U;
volatile int32_t t59 = 11544;
uint64_t x309 = 188958LLU;
int8_t x315 = -1;
static uint32_t x316 = 5624037U;
volatile int16_t x317 = INT16_MAX;
static volatile uint64_t t62 = 187178860LLU;
int32_t x322 = 1;
static int32_t t63 = -807315784;
int16_t x332 = 10824;
int16_t x337 = -8023;
int8_t x339 = INT8_MIN;
uint16_t x342 = 2U;
int8_t x344 = INT8_MIN;
uint64_t x345 = 2761385345841657LLU;
volatile int32_t x355 = -1;
int8_t x361 = INT8_MAX;
static int64_t x363 = -2104871396LL;
int64_t t73 = 2076713405223LL;
volatile int64_t t74 = 0LL;
static uint8_t x378 = 104U;
uint8_t x383 = 3U;
volatile int16_t x385 = INT16_MAX;
volatile uint64_t t78 = 40LLU;
static int8_t x389 = INT8_MIN;
uint64_t x392 = UINT64_MAX;
volatile uint64_t t79 = 145498695762LLU;
static int32_t t80 = -1797119;
int16_t x409 = -1;
int64_t x412 = 442LL;
volatile int64_t t83 = 2399150581LL;
uint32_t x416 = 41U;
static uint64_t x419 = 1195635LLU;
int32_t x423 = 0;
uint64_t x424 = UINT64_MAX;
int64_t x432 = INT64_MAX;
static int16_t x434 = -1;
int64_t x437 = INT64_MIN;
int64_t t89 = 12290931684635512LL;
volatile uint64_t t92 = 5LLU;
volatile int64_t t95 = 622522LL;
int8_t x468 = 7;
volatile uint64_t t96 = 1112LLU;
int16_t x469 = -1;
volatile uint16_t x471 = UINT16_MAX;
int64_t x473 = 3424561LL;
uint32_t x475 = 221430215U;


void f0(void) {
	static int64_t x2 = -254957413LL;
	static int64_t x4 = 195762521LL;

	t0 = ((x1<x2)+(x3+x4));

	if (t0 != 1637455491775028LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 11U;
	uint64_t t1 = 56LLU;

	t1 = ((x9<x10)+(x11+x12));

	if (t1 != 11LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int8_t x14 = 0;
	int8_t x15 = 11;
	static volatile int16_t x16 = -1;
	int32_t t2 = -1392;

	t2 = ((x13<x14)+(x15+x16));

	if (t2 != 11) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 31U;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = -62297777;
	static int32_t x20 = INT32_MAX;
	static volatile int32_t t3 = -748277;

	t3 = ((x17<x18)+(x19+x20));

	if (t3 != 2085185871) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	static uint8_t x22 = 0U;
	static uint8_t x23 = 0U;
	int16_t x24 = INT16_MAX;
	volatile int32_t t4 = -191690;

	t4 = ((x21<x22)+(x23+x24));

	if (t4 != 32768) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x31 = UINT32_MAX;
	static int8_t x32 = 0;

	t5 = ((x29<x30)+(x31+x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = INT16_MAX;
	int8_t x35 = -41;
	uint16_t x36 = 581U;
	volatile int32_t t6 = 3;

	t6 = ((x33<x34)+(x35+x36));

	if (t6 != 541) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MAX;
	static volatile int8_t x40 = INT8_MAX;
	static volatile int32_t t7 = -443065;

	t7 = ((x37<x38)+(x39+x40));

	if (t7 != 32895) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	static int16_t x44 = INT16_MAX;
	int32_t t8 = 41;

	t8 = ((x41<x42)+(x43+x44));

	if (t8 != 98302) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = 1377;
	uint32_t x46 = UINT32_MAX;
	int8_t x48 = INT8_MAX;
	volatile uint32_t t9 = 4860U;

	t9 = ((x45<x46)+(x47+x48));

	if (t9 != 3061U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x50 = 632880;
	static int16_t x51 = -3997;
	volatile int32_t t10 = 1819244;

	t10 = ((x49<x50)+(x51+x52));

	if (t10 != -4124) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 1U;
	int16_t x55 = INT16_MIN;
	int16_t x56 = 16;
	int32_t t11 = -283827572;

	t11 = ((x53<x54)+(x55+x56));

	if (t11 != -32751) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 63406581371LLU;
	volatile int16_t x67 = -1;
	volatile uint32_t x68 = 2191U;
	uint32_t t12 = 0U;

	t12 = ((x65<x66)+(x67+x68));

	if (t12 != 2190U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x77 = UINT8_MAX;
	static int64_t x78 = 472LL;
	static int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;
	int32_t t13 = -19856673;

	t13 = ((x77<x78)+(x79+x80));

	if (t13 != 128) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 155309144621112LLU;
	uint32_t x83 = 0U;
	int64_t x84 = INT64_MIN;

	t14 = ((x81<x82)+(x83+x84));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x87 = -12144580350190LL;

	t15 = ((x85<x86)+(x87+x88));

	if (t15 != -12144580349934LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 2954077178204804LLU;
	int8_t x90 = -30;
	uint8_t x91 = UINT8_MAX;
	static int32_t t16 = 354;

	t16 = ((x89<x90)+(x91+x92));

	if (t16 != 270) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x93 = -1;
	int64_t x94 = INT64_MIN;
	uint32_t x95 = UINT32_MAX;
	static uint64_t t17 = 6166572460806097033LLU;

	t17 = ((x93<x94)+(x95+x96));

	if (t17 != 4294967294LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = 6;
	volatile int16_t x98 = -1;
	uint32_t x99 = UINT32_MAX;
	uint8_t x100 = UINT8_MAX;
	uint32_t t18 = 75565444U;

	t18 = ((x97<x98)+(x99+x100));

	if (t18 != 254U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x101 = 2819266LLU;
	uint32_t x102 = 2341U;
	uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = 2;

	t19 = ((x101<x102)+(x103+x104));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = INT16_MIN;
	int64_t x108 = 0LL;
	volatile int64_t t20 = -7723964LL;

	t20 = ((x105<x106)+(x107+x108));

	if (t20 != -32768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x113 = 1359;
	uint16_t x114 = 3U;
	uint32_t x116 = 204U;

	t21 = ((x113<x114)+(x115+x116));

	if (t21 != 2147483851U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x118 = UINT32_MAX;
	int32_t x119 = -1;
	volatile uint32_t t22 = 267738435U;

	t22 = ((x117<x118)+(x119+x120));

	if (t22 != 6345U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x125 = 1297141U;
	static int8_t x127 = -1;
	int64_t x128 = -1LL;
	volatile int64_t t23 = -35371988600175503LL;

	t23 = ((x125<x126)+(x127+x128));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 1U;
	volatile int32_t x130 = INT32_MIN;
	static int64_t t24 = -108519242LL;

	t24 = ((x129<x130)+(x131+x132));

	if (t24 != 607138072484331551LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x133 = INT16_MIN;
	int64_t x134 = -8507172220726LL;
	int8_t x136 = 2;

	t25 = ((x133<x134)+(x135+x136));

	if (t25 != 22017U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x137 = INT64_MIN;
	static volatile int64_t x138 = -48982487LL;
	uint32_t x139 = 1714448158U;
	uint8_t x140 = 2U;
	uint32_t t26 = 2U;

	t26 = ((x137<x138)+(x139+x140));

	if (t26 != 1714448161U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x145 = INT8_MIN;
	static int8_t x146 = INT8_MIN;
	uint16_t x147 = 585U;
	static int8_t x148 = INT8_MIN;
	volatile int32_t t27 = 51472;

	t27 = ((x145<x146)+(x147+x148));

	if (t27 != 457) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x149 = 95216LLU;
	uint32_t x150 = UINT32_MAX;
	volatile int32_t x151 = 586;
	int16_t x152 = INT16_MAX;
	volatile int32_t t28 = 6;

	t28 = ((x149<x150)+(x151+x152));

	if (t28 != 33354) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x153 = 21U;
	volatile int8_t x154 = -1;
	uint32_t x155 = UINT32_MAX;
	uint32_t t29 = 38082U;

	t29 = ((x153<x154)+(x155+x156));

	if (t29 != 4294967245U) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x157 = INT64_MAX;
	int8_t x158 = -1;
	int32_t x160 = INT32_MIN;
	volatile int64_t t30 = -8LL;

	t30 = ((x157<x158)+(x159+x160));

	if (t30 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MIN;
	static int64_t x163 = 3475809222LL;
	int64_t x164 = -14488LL;
	static volatile int64_t t31 = 19161171LL;

	t31 = ((x161<x162)+(x163+x164));

	if (t31 != 3475794735LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = 206833648232494LLU;
	uint32_t x167 = 1828897188U;
	static int16_t x168 = -1;
	uint32_t t32 = 10694727U;

	t32 = ((x165<x166)+(x167+x168));

	if (t32 != 1828897187U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x173 = 27;
	volatile int32_t x174 = INT32_MAX;
	volatile uint64_t x176 = 208095138LLU;
	uint64_t t33 = 3957LLU;

	t33 = ((x173<x174)+(x175+x176));

	if (t33 != 208095011LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x179 = 908U;
	static int32_t t34 = -145311;

	t34 = ((x177<x178)+(x179+x180));

	if (t34 != 781) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	volatile int8_t x182 = 0;
	uint32_t x183 = 22525676U;
	uint32_t t35 = 3475832U;

	t35 = ((x181<x182)+(x183+x184));

	if (t35 != 22525692U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = -1;
	uint8_t x190 = 1U;
	int8_t x191 = -61;
	static uint32_t t36 = 12274U;

	t36 = ((x189<x190)+(x191+x192));

	if (t36 != 16602U) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x193 = INT32_MIN;
	uint16_t x194 = 498U;
	int32_t x195 = -35027;
	int32_t x196 = -48;
	volatile int32_t t37 = 61960;

	t37 = ((x193<x194)+(x195+x196));

	if (t37 != -35074) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x198 = INT64_MIN;
	int8_t x199 = 1;
	static int8_t x200 = INT8_MIN;
	volatile int32_t t38 = 27043992;

	t38 = ((x197<x198)+(x199+x200));

	if (t38 != -127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x206 = 11U;
	int8_t x207 = INT8_MIN;
	static volatile int16_t x208 = INT16_MAX;

	t39 = ((x205<x206)+(x207+x208));

	if (t39 != 32639) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x211 = -102701378LL;
	volatile uint16_t x212 = 36U;
	volatile int64_t t40 = 3219572805LL;

	t40 = ((x209<x210)+(x211+x212));

	if (t40 != -102701341LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x221 = INT32_MAX;
	int64_t x222 = 2257064111302233126LL;
	static int16_t x223 = INT16_MAX;
	int32_t x224 = 469132430;

	t41 = ((x221<x222)+(x223+x224));

	if (t41 != 469165198) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x226 = -1;
	uint16_t x228 = 8051U;
	volatile uint64_t t42 = 7437960193282LLU;

	t42 = ((x225<x226)+(x227+x228));

	if (t42 != 9132220502580LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	static int32_t x236 = -31428619;

	t43 = ((x233<x234)+(x235+x236));

	if (t43 != 4263538676U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x237 = -3;
	int64_t x238 = -1LL;
	volatile int8_t x239 = -1;
	static int16_t x240 = -1;
	volatile int32_t t44 = -10009271;

	t44 = ((x237<x238)+(x239+x240));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x246 = INT8_MIN;
	int16_t x247 = 4;
	uint8_t x248 = UINT8_MAX;
	int32_t t45 = 6;

	t45 = ((x245<x246)+(x247+x248));

	if (t45 != 259) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x249 = -1;
	static int16_t x250 = INT16_MIN;
	volatile int8_t x251 = 1;
	uint8_t x252 = 12U;
	int32_t t46 = -245;

	t46 = ((x249<x250)+(x251+x252));

	if (t46 != 13) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x253 = 32;
	volatile int32_t x254 = 6;
	uint16_t x255 = 2022U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t47 = -32444100;

	t47 = ((x253<x254)+(x255+x256));

	if (t47 != 2277) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x257 = -1;
	volatile uint64_t x258 = 51484LLU;
	static volatile uint8_t x259 = 0U;
	static uint64_t x260 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x257<x258)+(x259+x260));

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x261 = -1LL;
	volatile int32_t t49 = -145769;

	t49 = ((x261<x262)+(x263+x264));

	if (t49 != 5) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x269 = 51U;
	uint8_t x271 = 0U;
	int64_t t50 = INT64_MAX;

	t50 = ((x269<x270)+(x271+x272));

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = INT16_MIN;
	uint8_t x276 = 0U;

	t51 = ((x273<x274)+(x275+x276));

	if (t51 != 65536) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x277 = 1U;
	int8_t x280 = INT8_MAX;
	volatile int32_t t52 = -91993258;

	t52 = ((x277<x278)+(x279+x280));

	if (t52 != 129) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = 6460;
	uint8_t x282 = 1U;
	int32_t x283 = -1;
	uint32_t x284 = 40493373U;
	volatile uint32_t t53 = 282U;

	t53 = ((x281<x282)+(x283+x284));

	if (t53 != 40493372U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = -996639914355LL;
	uint64_t x286 = UINT64_MAX;

	t54 = ((x285<x286)+(x287+x288));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x289 = -1;
	int64_t x291 = -1LL;
	volatile uint8_t x292 = 75U;
	volatile int64_t t55 = -122605LL;

	t55 = ((x289<x290)+(x291+x292));

	if (t55 != 75LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x294 = INT32_MIN;
	int8_t x295 = INT8_MIN;
	uint64_t t56 = 17724463536LLU;

	t56 = ((x293<x294)+(x295+x296));

	if (t56 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x297 = -1;
	volatile uint32_t x298 = 0U;
	int8_t x299 = -1;
	int32_t x300 = -1;
	int32_t t57 = -3;

	t57 = ((x297<x298)+(x299+x300));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x301 = 63851311U;
	int64_t x302 = -1LL;
	int64_t x303 = -93008391096319LL;
	int64_t t58 = -31201358344792777LL;

	t58 = ((x301<x302)+(x303+x304));

	if (t58 != -93008384715545LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x305 = INT16_MAX;
	static int32_t x306 = INT32_MAX;
	int16_t x307 = INT16_MAX;

	t59 = ((x305<x306)+(x307+x308));

	if (t59 != 62587) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x310 = INT8_MAX;
	static volatile int32_t x311 = INT32_MAX;
	int8_t x312 = INT8_MIN;
	static int32_t t60 = 1544949;

	t60 = ((x309<x310)+(x311+x312));

	if (t60 != 2147483519) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x313 = -1;
	static int16_t x314 = 9982;
	volatile uint32_t t61 = 125U;

	t61 = ((x313<x314)+(x315+x316));

	if (t61 != 5624037U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x318 = 2104U;
	uint64_t x319 = 72338LLU;
	int64_t x320 = INT64_MIN;

	t62 = ((x317<x318)+(x319+x320));

	if (t62 != 9223372036854848146LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x321 = 46265838LL;
	int8_t x323 = -1;
	int8_t x324 = -9;

	t63 = ((x321<x322)+(x323+x324));

	if (t63 != -10) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = INT8_MAX;
	uint8_t x326 = 2U;
	int8_t x327 = INT8_MAX;
	uint16_t x328 = 6U;
	int32_t t64 = 3097213;

	t64 = ((x325<x326)+(x327+x328));

	if (t64 != 133) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x330 = -420;
	volatile int64_t x331 = -3207205363470687813LL;
	int64_t t65 = -130823LL;

	t65 = ((x329<x330)+(x331+x332));

	if (t65 != -3207205363470676989LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x333 = 1U;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	uint64_t x336 = 14146438589286264LLU;
	volatile uint64_t t66 = 4781231262410021606LLU;

	t66 = ((x333<x334)+(x335+x336));

	if (t66 != 14146438589253497LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x338 = INT8_MIN;
	static int64_t x340 = -16497593339880LL;
	volatile int64_t t67 = 62LL;

	t67 = ((x337<x338)+(x339+x340));

	if (t67 != -16497593340007LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x341 = INT32_MIN;
	uint8_t x343 = UINT8_MAX;
	volatile int32_t t68 = -2805;

	t68 = ((x341<x342)+(x343+x344));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x346 = -1;
	volatile uint16_t x347 = 13843U;
	uint16_t x348 = 906U;
	volatile int32_t t69 = 325;

	t69 = ((x345<x346)+(x347+x348));

	if (t69 != 14750) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x349 = INT16_MAX;
	volatile uint8_t x350 = 60U;
	volatile int64_t x351 = -364LL;
	volatile int16_t x352 = INT16_MAX;
	volatile int64_t t70 = 562487033LL;

	t70 = ((x349<x350)+(x351+x352));

	if (t70 != 32403LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x353 = -2;
	uint8_t x354 = 18U;
	int32_t x356 = INT32_MAX;
	volatile int32_t t71 = INT32_MAX;

	t71 = ((x353<x354)+(x355+x356));

	if (t71 != INT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = 139;
	int16_t x358 = -2372;
	int8_t x359 = -1;
	int64_t x360 = -1LL;
	int64_t t72 = 2044531866LL;

	t72 = ((x357<x358)+(x359+x360));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x362 = 1996607267265LLU;
	int32_t x364 = -21067268;

	t73 = ((x361<x362)+(x363+x364));

	if (t73 != -2125938663LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x365 = 70713241;
	int64_t x366 = -115LL;
	int64_t x367 = -1LL;
	int8_t x368 = -1;

	t74 = ((x365<x366)+(x367+x368));

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x373 = 6U;
	uint32_t x374 = 6643903U;
	static volatile uint8_t x375 = 1U;
	static volatile int16_t x376 = INT16_MAX;
	int32_t t75 = -1039479227;

	t75 = ((x373<x374)+(x375+x376));

	if (t75 != 32769) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x377 = 770U;
	uint32_t x379 = 2U;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t76 = 36LL;

	t76 = ((x377<x378)+(x379+x380));

	if (t76 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x381 = 6LLU;
	volatile int64_t x382 = INT64_MIN;
	int16_t x384 = -284;
	volatile int32_t t77 = 1835;

	t77 = ((x381<x382)+(x383+x384));

	if (t77 != -280) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x386 = -1;
	volatile uint64_t x387 = UINT64_MAX;
	uint16_t x388 = 2U;

	t78 = ((x385<x386)+(x387+x388));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x390 = -1;
	int32_t x391 = INT32_MIN;

	t79 = ((x389<x390)+(x391+x392));

	if (t79 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x393 = INT64_MIN;
	uint8_t x394 = UINT8_MAX;
	volatile uint8_t x395 = 32U;
	static int32_t x396 = INT32_MIN;

	t80 = ((x393<x394)+(x395+x396));

	if (t80 != -2147483615) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x397 = 62U;
	static int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MIN;
	volatile int64_t t81 = -253625021LL;

	t81 = ((x397<x398)+(x399+x400));

	if (t81 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x405 = -56209731266LL;
	static int16_t x406 = INT16_MIN;
	static int32_t x407 = INT32_MIN;
	uint8_t x408 = 11U;
	static int32_t t82 = -14882;

	t82 = ((x405<x406)+(x407+x408));

	if (t82 != -2147483636) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x410 = 54;
	int16_t x411 = INT16_MAX;

	t83 = ((x409<x410)+(x411+x412));

	if (t83 != 33210LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x413 = 14U;
	volatile uint16_t x414 = 1194U;
	uint64_t x415 = 6678174760215LLU;
	volatile uint64_t t84 = 1031LLU;

	t84 = ((x413<x414)+(x415+x416));

	if (t84 != 6678174760257LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x417 = UINT16_MAX;
	int64_t x418 = -22LL;
	int32_t x420 = -122266983;
	uint64_t t85 = 4142922440699736439LLU;

	t85 = ((x417<x418)+(x419+x420));

	if (t85 != 18446744073588480268LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x421 = 179;
	int32_t x422 = INT32_MAX;
	volatile uint64_t t86 = 15057981829763LLU;

	t86 = ((x421<x422)+(x423+x424));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x429 = 25376LL;
	volatile int8_t x430 = 14;
	static int64_t x431 = INT64_MIN;
	volatile int64_t t87 = 162885565528413LL;

	t87 = ((x429<x430)+(x431+x432));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = INT8_MIN;
	static int32_t x435 = -181059319;
	int8_t x436 = INT8_MIN;
	int32_t t88 = -2370100;

	t88 = ((x433<x434)+(x435+x436));

	if (t88 != -181059446) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x438 = INT64_MIN;
	volatile uint8_t x439 = 68U;
	int64_t x440 = INT64_MIN;

	t89 = ((x437<x438)+(x439+x440));

	if (t89 != -9223372036854775740LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x441 = INT32_MIN;
	static volatile int8_t x442 = INT8_MIN;
	int32_t x443 = -1;
	int32_t x444 = -1;
	static int32_t t90 = 36751086;

	t90 = ((x441<x442)+(x443+x444));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x445 = INT64_MIN;
	static volatile int32_t x446 = 0;
	int16_t x447 = INT16_MIN;
	int8_t x448 = INT8_MIN;
	volatile int32_t t91 = 12236354;

	t91 = ((x445<x446)+(x447+x448));

	if (t91 != -32895) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x449 = -24;
	volatile uint32_t x450 = UINT32_MAX;
	uint64_t x451 = 933333332452LLU;
	uint32_t x452 = 5245768U;

	t92 = ((x449<x450)+(x451+x452));

	if (t92 != 933338578221LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x453 = 246U;
	uint16_t x454 = 4202U;
	volatile int8_t x455 = -1;
	volatile int64_t x456 = -3898952262019095LL;
	int64_t t93 = 603816491LL;

	t93 = ((x453<x454)+(x455+x456));

	if (t93 != -3898952262019095LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x457 = 80439LLU;
	uint64_t x458 = 210LLU;
	int64_t x459 = -1LL;
	static volatile uint8_t x460 = UINT8_MAX;
	volatile int64_t t94 = 346174LL;

	t94 = ((x457<x458)+(x459+x460));

	if (t94 != 254LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x461 = INT32_MAX;
	int8_t x462 = -1;
	int32_t x463 = -907171207;
	int64_t x464 = -150902728597588853LL;

	t95 = ((x461<x462)+(x463+x464));

	if (t95 != -150902729504760060LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x465 = 1176105U;
	int32_t x466 = INT32_MAX;
	uint64_t x467 = 4754945368LLU;

	t96 = ((x465<x466)+(x467+x468));

	if (t96 != 4754945376LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x470 = 6U;
	static uint16_t x472 = 97U;
	int32_t t97 = -8133624;

	t97 = ((x469<x470)+(x471+x472));

	if (t97 != 65633) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x474 = UINT8_MAX;
	volatile int32_t x476 = INT32_MAX;
	uint32_t t98 = 22U;

	t98 = ((x473<x474)+(x475+x476));

	if (t98 != 2368913862U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x477 = INT16_MAX;
	static int16_t x478 = -1;
	int8_t x479 = -1;
	int8_t x480 = -1;
	int32_t t99 = 477;

	t99 = ((x477<x478)+(x479+x480));

	if (t99 != -2) { NG(); } else { ; }
	
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

