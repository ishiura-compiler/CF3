#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = INT16_MIN;
volatile uint32_t x6 = 603094018U;
static int32_t t1 = -82313287;
uint64_t x9 = 291184141489369903LLU;
int64_t x10 = INT64_MIN;
static int16_t x11 = -1;
static int32_t x15 = INT32_MIN;
uint8_t x21 = 20U;
int8_t x22 = INT8_MAX;
int32_t t5 = 60;
int32_t t6 = 61430;
int64_t x36 = -1LL;
int16_t x53 = INT16_MIN;
uint32_t x54 = 34306U;
int32_t t12 = 5;
int16_t x57 = INT16_MIN;
int32_t x69 = INT32_MAX;
uint8_t x72 = 120U;
int16_t x85 = 0;
int64_t x90 = INT64_MAX;
int32_t x91 = -3817498;
uint64_t t21 = 1963791LLU;
static uint64_t x97 = 686685702LLU;
int8_t x102 = INT8_MIN;
uint16_t x110 = UINT16_MAX;
int64_t x111 = -1LL;
uint8_t x115 = 6U;
volatile int32_t t29 = 9338595;
int32_t x125 = -1;
uint32_t x126 = 353778U;
uint8_t x133 = 37U;
static uint32_t x139 = UINT32_MAX;
int32_t x141 = -1;
uint64_t x145 = 90LLU;
static int16_t x148 = -3;
int64_t x154 = INT64_MAX;
int32_t x156 = INT32_MIN;
volatile int8_t x161 = INT8_MIN;
volatile int32_t t39 = -35155;
static int8_t x165 = INT8_MIN;
int32_t t41 = -396478;
volatile int16_t x176 = -1;
int16_t x186 = -1;
uint8_t x189 = 1U;
int8_t x196 = 61;
static int8_t x198 = INT8_MAX;
volatile uint8_t x199 = 7U;
volatile int32_t t48 = 63115951;
static uint8_t x210 = 1U;
volatile int8_t x214 = INT8_MIN;
static volatile int64_t x216 = 274894709606149LL;
static volatile uint64_t t52 = 673LLU;
static uint32_t x218 = 3U;
static int16_t x220 = -2;
uint32_t x222 = 3888U;
volatile int16_t x225 = 4;
int32_t x226 = INT32_MAX;
int32_t x229 = INT32_MIN;
int32_t x230 = INT32_MAX;
int16_t x233 = INT16_MIN;
int8_t x235 = 0;
int64_t t58 = INT64_MAX;
volatile int32_t t59 = 45;
int32_t x249 = -1;
static int8_t x256 = 14;
static int32_t t63 = 1423433;
volatile int64_t x278 = -2LL;
static int16_t x279 = INT16_MIN;
volatile uint64_t x285 = 1LLU;
volatile int32_t x320 = INT32_MAX;
uint16_t x321 = 1344U;
int32_t x327 = -1;
int64_t x362 = -1LL;
int32_t x364 = -99018242;
static uint32_t x368 = 81634U;
volatile int8_t x369 = INT8_MAX;
static volatile int32_t x370 = -1;
volatile int32_t x371 = -1;
volatile int32_t t89 = 285928;
int16_t x377 = INT16_MIN;
uint8_t x388 = 1U;
volatile int32_t x391 = INT32_MIN;
static int64_t t94 = -959818LL;
volatile uint32_t x399 = 5299U;
volatile int32_t t96 = 106;
volatile uint64_t x401 = 54717615LLU;
int16_t x402 = INT16_MIN;
int8_t x404 = INT8_MIN;
static volatile int64_t t98 = -2888113LL;
static volatile int16_t x412 = INT16_MAX;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	volatile uint16_t x2 = 79U;
	static int64_t x3 = -1LL;
	uint32_t x4 = 68U;
	volatile int32_t t0 = 3;

	t0 = (x1+((x2&x3)<x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile uint8_t x7 = 1U;
	volatile int64_t x8 = -22LL;

	t1 = (x5+((x6&x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x12 = 715564318;
	volatile uint64_t t2 = 764003276LLU;

	t2 = (x9+((x10&x11)<x12));

	if (t2 != 291184141489369904LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int8_t x14 = -38;
	static int8_t x16 = -1;
	volatile int32_t t3 = 1667313;

	t3 = (x13+((x14&x15)<x16));

	if (t3 != -2147483647) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int8_t x18 = 1;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = -1;
	volatile int32_t t4 = 33;

	t4 = (x17+((x18&x19)<x20));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x23 = 6;
	uint64_t x24 = 778070587289708903LLU;

	t5 = (x21+((x22&x23)<x24));

	if (t5 != 21) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x30 = UINT16_MAX;
	static int32_t x31 = -1;
	int16_t x32 = INT16_MIN;

	t6 = (x29+((x30&x31)<x32));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile uint32_t x34 = UINT32_MAX;
	static uint32_t x35 = 157U;
	volatile int32_t t7 = -63951553;

	t7 = (x33+((x34&x35)<x36));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = 48;
	static int64_t x38 = INT64_MAX;
	static volatile int32_t x39 = INT32_MIN;
	uint32_t x40 = 26U;
	int32_t t8 = -1970;

	t8 = (x37+((x38&x39)<x40));

	if (t8 != 48) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	static uint16_t x42 = 4841U;
	int32_t x43 = 16147;
	uint64_t x44 = 4307488198896LLU;
	int32_t t9 = -955;

	t9 = (x41+((x42&x43)<x44));

	if (t9 != 65536) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = 139077511882474243LL;
	int8_t x46 = 1;
	int16_t x47 = INT16_MAX;
	int8_t x48 = -3;
	volatile int64_t t10 = -290398755906937937LL;

	t10 = (x45+((x46&x47)<x48));

	if (t10 != 139077511882474243LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x49 = -3;
	uint32_t x50 = UINT32_MAX;
	volatile int32_t x51 = INT32_MIN;
	uint8_t x52 = UINT8_MAX;
	int32_t t11 = 12;

	t11 = (x49+((x50&x51)<x52));

	if (t11 != -3) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x55 = -2;
	int32_t x56 = INT32_MAX;

	t12 = (x53+((x54&x55)<x56));

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x58 = 23586U;
	int8_t x59 = INT8_MIN;
	int16_t x60 = INT16_MAX;
	int32_t t13 = 546839;

	t13 = (x57+((x58&x59)<x60));

	if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 8LLU;
	static int64_t x62 = -1770597954530339LL;
	static int16_t x63 = INT16_MIN;
	int16_t x64 = INT16_MIN;
	volatile uint64_t t14 = 630156666326147LLU;

	t14 = (x61+((x62&x63)<x64));

	if (t14 != 9LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 6U;
	static uint8_t x66 = 67U;
	static uint64_t x67 = UINT64_MAX;
	volatile uint32_t x68 = 19741418U;
	static int32_t t15 = 783444162;

	t15 = (x65+((x66&x67)<x68));

	if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = -1LL;
	int16_t x71 = INT16_MAX;
	int32_t t16 = INT32_MAX;

	t16 = (x69+((x70&x71)<x72));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = 1LL;
	volatile int64_t x74 = -13211LL;
	int16_t x75 = INT16_MAX;
	volatile int32_t x76 = -421383999;
	volatile int64_t t17 = 85968701LL;

	t17 = (x73+((x74&x75)<x76));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MAX;
	static int8_t x79 = INT8_MAX;
	int16_t x80 = 13843;
	volatile int32_t t18 = 65;

	t18 = (x77+((x78&x79)<x80));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 1604087231423199154LLU;
	int8_t x83 = 61;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t19 = 7067207;

	t19 = (x81+((x82&x83)<x84));

	if (t19 != 256) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x86 = INT32_MIN;
	static uint8_t x87 = 4U;
	int64_t x88 = -1LL;
	int32_t t20 = -126;

	t20 = (x85+((x86&x87)<x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x89 = 838LLU;
	uint16_t x92 = 971U;

	t21 = (x89+((x90&x91)<x92));

	if (t21 != 838LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 4U;
	volatile int16_t x94 = INT16_MAX;
	int64_t x95 = -1LL;
	uint8_t x96 = UINT8_MAX;
	int32_t t22 = 78;

	t22 = (x93+((x94&x95)<x96));

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x98 = INT16_MIN;
	uint8_t x99 = 0U;
	int16_t x100 = INT16_MAX;
	volatile uint64_t t23 = 8077860201449118774LLU;

	t23 = (x97+((x98&x99)<x100));

	if (t23 != 686685703LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x101 = INT64_MIN;
	static volatile int16_t x103 = INT16_MIN;
	static uint64_t x104 = UINT64_MAX;
	volatile int64_t t24 = -1028978051238589080LL;

	t24 = (x101+((x102&x103)<x104));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = 4739642792812416LL;
	volatile int64_t x106 = INT64_MIN;
	int64_t x107 = 929942865367LL;
	int16_t x108 = INT16_MIN;
	int64_t t25 = 107606786394755LL;

	t25 = (x105+((x106&x107)<x108));

	if (t25 != 4739642792812416LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x109 = 3U;
	int32_t x112 = INT32_MIN;
	volatile uint32_t t26 = 5889U;

	t26 = (x109+((x110&x111)<x112));

	if (t26 != 3U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	volatile int8_t x114 = INT8_MAX;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t27 = -104203;

	t27 = (x113+((x114&x115)<x116));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	int64_t x119 = -1LL;
	uint16_t x120 = 0U;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (x117+((x118&x119)<x120));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -6;
	uint64_t x122 = 42376890935LLU;
	uint8_t x123 = 5U;
	uint32_t x124 = 25762799U;

	t29 = (x121+((x122&x123)<x124));

	if (t29 != -5) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x127 = 2LL;
	uint32_t x128 = 2169U;
	volatile int32_t t30 = 116826;

	t30 = (x125+((x126&x127)<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 750333655263873401LLU;
	static int16_t x130 = INT16_MIN;
	volatile int64_t x131 = INT64_MIN;
	static int32_t x132 = INT32_MAX;
	uint64_t t31 = 1467037374257687504LLU;

	t31 = (x129+((x130&x131)<x132));

	if (t31 != 750333655263873402LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x134 = INT8_MIN;
	uint32_t x135 = 6U;
	int32_t x136 = -1;
	volatile int32_t t32 = 436424714;

	t32 = (x133+((x134&x135)<x136));

	if (t32 != 38) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x137 = INT16_MAX;
	uint64_t x138 = UINT64_MAX;
	static int8_t x140 = INT8_MIN;
	volatile int32_t t33 = -53970;

	t33 = (x137+((x138&x139)<x140));

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x142 = 1181U;
	volatile int16_t x143 = INT16_MAX;
	static int8_t x144 = INT8_MIN;
	int32_t t34 = 50323;

	t34 = (x141+((x142&x143)<x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x146 = UINT64_MAX;
	uint32_t x147 = UINT32_MAX;
	volatile uint64_t t35 = 3423087030LLU;

	t35 = (x145+((x146&x147)<x148));

	if (t35 != 91LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = 52U;
	int16_t x150 = INT16_MIN;
	int64_t x151 = -30199568596222LL;
	int64_t x152 = INT64_MIN;
	int32_t t36 = -63744596;

	t36 = (x149+((x150&x151)<x152));

	if (t36 != 52) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x153 = 3U;
	static int32_t x155 = INT32_MAX;
	int32_t t37 = -30;

	t37 = (x153+((x154&x155)<x156));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x157 = -1;
	volatile int16_t x158 = INT16_MAX;
	static int32_t x159 = -1;
	int16_t x160 = 14154;
	volatile int32_t t38 = 66386254;

	t38 = (x157+((x158&x159)<x160));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x162 = INT16_MAX;
	int16_t x163 = -91;
	int64_t x164 = INT64_MIN;

	t39 = (x161+((x162&x163)<x164));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x166 = 492U;
	static volatile int32_t x167 = -12358117;
	volatile int16_t x168 = INT16_MAX;
	static int32_t t40 = 311764941;

	t40 = (x165+((x166&x167)<x168));

	if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x169 = INT16_MAX;
	static int64_t x170 = 384LL;
	int64_t x171 = -1LL;
	static uint32_t x172 = 1U;

	t41 = (x169+((x170&x171)<x172));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = -1;
	int16_t x174 = -1;
	int16_t x175 = INT16_MAX;
	volatile int32_t t42 = -1;

	t42 = (x173+((x174&x175)<x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = 3680706;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MAX;
	int64_t x180 = INT64_MIN;
	int32_t t43 = 77;

	t43 = (x177+((x178&x179)<x180));

	if (t43 != 3680706) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x182 = INT8_MIN;
	static int8_t x183 = -7;
	static uint16_t x184 = 65U;
	volatile uint64_t t44 = 10276635896079LLU;

	t44 = (x181+((x182&x183)<x184));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x185 = 1803309U;
	static int64_t x187 = -1LL;
	int16_t x188 = -1;
	uint32_t t45 = 1494U;

	t45 = (x185+((x186&x187)<x188));

	if (t45 != 1803309U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x190 = UINT32_MAX;
	static volatile uint8_t x191 = 62U;
	static int64_t x192 = INT64_MIN;
	static int32_t t46 = -1;

	t46 = (x189+((x190&x191)<x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 2280461LLU;
	int64_t x194 = INT64_MIN;
	int16_t x195 = INT16_MAX;
	volatile uint64_t t47 = 14083342499946825LLU;

	t47 = (x193+((x194&x195)<x196));

	if (t47 != 2280462LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = INT16_MAX;
	int64_t x200 = -66878647LL;

	t48 = (x197+((x198&x199)<x200));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 152646433837220LLU;
	volatile uint32_t x202 = 12997U;
	static int8_t x203 = 33;
	static int32_t x204 = -1;
	uint64_t t49 = 326455116085062LLU;

	t49 = (x201+((x202&x203)<x204));

	if (t49 != 152646433837221LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	int32_t x206 = -1;
	int8_t x207 = INT8_MAX;
	volatile int64_t x208 = -1LL;
	static int32_t t50 = 1;

	t50 = (x205+((x206&x207)<x208));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x211 = 2U;
	int32_t x212 = -671813511;
	volatile int32_t t51 = -81364;

	t51 = (x209+((x210&x211)<x212));

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x213 = 452753540LLU;
	int8_t x215 = -10;

	t52 = (x213+((x214&x215)<x216));

	if (t52 != 452753541LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = -1;
	int64_t x219 = INT64_MIN;
	int32_t t53 = -391;

	t53 = (x217+((x218&x219)<x220));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 50354365875819LLU;
	int16_t x223 = -8628;
	volatile int8_t x224 = INT8_MIN;
	volatile uint64_t t54 = 93926LLU;

	t54 = (x221+((x222&x223)<x224));

	if (t54 != 50354365875820LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t55 = -3659813;

	t55 = (x225+((x226&x227)<x228));

	if (t55 != 4) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x231 = 136632823925LL;
	int64_t x232 = -10197688439LL;
	int32_t t56 = INT32_MIN;

	t56 = (x229+((x230&x231)<x232));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = 335513791468497324LL;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t57 = 3862066;

	t57 = (x233+((x234&x235)<x236));

	if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x237 = INT64_MAX;
	int64_t x238 = -10945LL;
	int8_t x239 = -1;
	int64_t x240 = INT64_MIN;

	t58 = (x237+((x238&x239)<x240));

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	int64_t x242 = -74524563734659159LL;
	int32_t x243 = INT32_MAX;
	volatile uint16_t x244 = 2980U;

	t59 = (x241+((x242&x243)<x244));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x245 = -380;
	uint32_t x246 = UINT32_MAX;
	uint32_t x247 = 3U;
	static volatile uint32_t x248 = 12758U;
	int32_t t60 = 22160674;

	t60 = (x245+((x246&x247)<x248));

	if (t60 != -379) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x250 = INT64_MIN;
	int32_t x251 = -172054;
	int32_t x252 = INT32_MAX;
	volatile int32_t t61 = 7;

	t61 = (x249+((x250&x251)<x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x253 = INT32_MIN;
	static int64_t x254 = INT64_MIN;
	int32_t x255 = INT32_MIN;
	volatile int32_t t62 = 1530046;

	t62 = (x253+((x254&x255)<x256));

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = -1;
	uint8_t x258 = 14U;
	static volatile uint64_t x259 = 3801492863LLU;
	volatile int64_t x260 = INT64_MAX;

	t63 = (x257+((x258&x259)<x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x265 = UINT64_MAX;
	int16_t x266 = 1661;
	int64_t x267 = 356061846LL;
	int8_t x268 = -1;
	uint64_t t64 = UINT64_MAX;

	t64 = (x265+((x266&x267)<x268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = 47991803618684LLU;
	static volatile int16_t x270 = -1;
	volatile int64_t x271 = 564183494247594LL;
	int16_t x272 = INT16_MAX;
	volatile uint64_t t65 = 2593008083103LLU;

	t65 = (x269+((x270&x271)<x272));

	if (t65 != 47991803618684LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x273 = 309;
	uint64_t x274 = 24159656LLU;
	static volatile uint16_t x275 = 2426U;
	int8_t x276 = -1;
	static volatile int32_t t66 = 3204;

	t66 = (x273+((x274&x275)<x276));

	if (t66 != 310) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = -2;
	volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t67 = -5;

	t67 = (x277+((x278&x279)<x280));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x281 = -1;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	int16_t x284 = -1;
	volatile int32_t t68 = 161354;

	t68 = (x281+((x282&x283)<x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x286 = 1147LLU;
	volatile int64_t x287 = -1LL;
	static int32_t x288 = INT32_MIN;
	volatile uint64_t t69 = 72323775940LLU;

	t69 = (x285+((x286&x287)<x288));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = -1;
	int8_t x290 = -8;
	static volatile int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;
	int32_t t70 = 250157562;

	t70 = (x289+((x290&x291)<x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = -6;
	volatile int16_t x294 = -1;
	int16_t x295 = 290;
	uint64_t x296 = 40412032279LLU;
	int32_t t71 = 3025667;

	t71 = (x293+((x294&x295)<x296));

	if (t71 != -5) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = 1171LL;
	static int16_t x298 = INT16_MAX;
	int64_t x299 = -6413621LL;
	int8_t x300 = 5;
	volatile int64_t t72 = -88852LL;

	t72 = (x297+((x298&x299)<x300));

	if (t72 != 1171LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = 144440655;
	int16_t x302 = -1;
	int32_t x303 = INT32_MIN;
	static int64_t x304 = INT64_MAX;
	volatile int32_t t73 = 30378555;

	t73 = (x301+((x302&x303)<x304));

	if (t73 != 144440656) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -1;
	int8_t x306 = INT8_MAX;
	int8_t x307 = INT8_MIN;
	int8_t x308 = -3;
	volatile int32_t t74 = -5;

	t74 = (x305+((x306&x307)<x308));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x309 = INT64_MAX;
	int32_t x310 = INT32_MAX;
	int64_t x311 = INT64_MIN;
	int8_t x312 = INT8_MIN;
	int64_t t75 = INT64_MAX;

	t75 = (x309+((x310&x311)<x312));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x313 = -14182;
	uint8_t x314 = 19U;
	int8_t x315 = INT8_MIN;
	volatile uint8_t x316 = 6U;
	volatile int32_t t76 = -4527;

	t76 = (x313+((x314&x315)<x316));

	if (t76 != -14181) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int32_t t77 = -24012;

	t77 = (x317+((x318&x319)<x320));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 473979519436814LLU;
	int8_t x323 = -1;
	static uint8_t x324 = 0U;
	volatile int32_t t78 = -534965;

	t78 = (x321+((x322&x323)<x324));

	if (t78 != 1344) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x325 = INT64_MIN;
	volatile int8_t x326 = -8;
	uint8_t x328 = 7U;
	volatile int64_t t79 = -1355657736058142311LL;

	t79 = (x325+((x326&x327)<x328));

	if (t79 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 53182314937728LLU;
	int32_t x330 = -21345;
	volatile int32_t x331 = INT32_MIN;
	uint8_t x332 = 3U;
	volatile uint64_t t80 = 3LLU;

	t80 = (x329+((x330&x331)<x332));

	if (t80 != 53182314937729LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x333 = 0;
	static int8_t x334 = 2;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MAX;
	int32_t t81 = 1479880;

	t81 = (x333+((x334&x335)<x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = 1LL;
	int64_t x338 = -129102029466LL;
	int16_t x339 = -14;
	static int64_t x340 = INT64_MAX;
	volatile int64_t t82 = 3641975054907312LL;

	t82 = (x337+((x338&x339)<x340));

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x345 = -1;
	volatile int8_t x346 = 5;
	uint32_t x347 = 1U;
	int64_t x348 = -11035504775LL;
	int32_t t83 = -418144614;

	t83 = (x345+((x346&x347)<x348));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = UINT16_MAX;
	int64_t x350 = INT64_MIN;
	int32_t x351 = INT32_MAX;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t84 = 12;

	t84 = (x349+((x350&x351)<x352));

	if (t84 != 65536) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -5;
	static uint32_t x354 = UINT32_MAX;
	int16_t x355 = 0;
	static volatile int32_t x356 = INT32_MAX;
	int32_t t85 = -13;

	t85 = (x353+((x354&x355)<x356));

	if (t85 != -4) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x357 = INT8_MAX;
	volatile uint32_t x358 = 710U;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = -1;
	volatile int32_t t86 = -26;

	t86 = (x357+((x358&x359)<x360));

	if (t86 != 128) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	volatile int32_t x363 = -21991;
	int32_t t87 = 391116;

	t87 = (x361+((x362&x363)<x364));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x365 = UINT16_MAX;
	int8_t x366 = 12;
	int16_t x367 = INT16_MIN;
	int32_t t88 = -215802;

	t88 = (x365+((x366&x367)<x368));

	if (t88 != 65536) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x372 = 1U;

	t89 = (x369+((x370&x371)<x372));

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = -1;
	static int32_t x374 = -197189;
	uint16_t x375 = UINT16_MAX;
	int64_t x376 = INT64_MIN;
	volatile int32_t t90 = -14;

	t90 = (x373+((x374&x375)<x376));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x378 = INT64_MAX;
	static int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MAX;
	volatile int32_t t91 = 5;

	t91 = (x377+((x378&x379)<x380));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x381 = 1U;
	volatile uint16_t x382 = UINT16_MAX;
	int8_t x383 = -5;
	volatile uint8_t x384 = 4U;
	static int32_t t92 = 610360134;

	t92 = (x381+((x382&x383)<x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	uint32_t x387 = UINT32_MAX;
	static int32_t t93 = 67199;

	t93 = (x385+((x386&x387)<x388));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = -83304502951932LL;
	int16_t x390 = INT16_MIN;
	volatile int16_t x392 = INT16_MIN;

	t94 = (x389+((x390&x391)<x392));

	if (t94 != -83304502951931LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -6;
	int16_t x394 = INT16_MIN;
	int64_t x395 = -57LL;
	uint64_t x396 = 211940LLU;
	int32_t t95 = 26503376;

	t95 = (x393+((x394&x395)<x396));

	if (t95 != -6) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x397 = INT8_MAX;
	static int64_t x398 = -1LL;
	int64_t x400 = -1LL;

	t96 = (x397+((x398&x399)<x400));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x403 = INT8_MIN;
	static volatile uint64_t t97 = 973971332954LLU;

	t97 = (x401+((x402&x403)<x404));

	if (t97 != 54717616LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x405 = -1LL;
	int32_t x406 = 4;
	static volatile int64_t x407 = INT64_MAX;
	uint32_t x408 = 1U;

	t98 = (x405+((x406&x407)<x408));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = UINT32_MAX;
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MAX;

	t99 = (x409+((x410&x411)<x412));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

