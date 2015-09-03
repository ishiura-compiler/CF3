#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x4 = 0U;
int8_t x7 = INT8_MIN;
volatile uint8_t x11 = 111U;
int64_t x12 = INT64_MAX;
volatile uint32_t x16 = UINT32_MAX;
static int8_t x24 = 38;
int32_t x25 = 7;
static int16_t x27 = INT16_MIN;
volatile int32_t t7 = 3;
int64_t x44 = INT64_MIN;
static int16_t x51 = -12;
volatile int32_t t12 = INT32_MIN;
uint64_t x55 = 3333348851290131514LLU;
static uint32_t x57 = UINT32_MAX;
static int64_t x59 = 3579LL;
int16_t x61 = -5;
static uint64_t x63 = 1038131497425935870LLU;
int32_t x64 = INT32_MAX;
volatile int32_t t15 = -526110847;
static int32_t x66 = 63265;
volatile int32_t t16 = -3774;
volatile int64_t x74 = -1LL;
volatile uint8_t x78 = 3U;
static volatile int64_t x79 = INT64_MIN;
int64_t x81 = -1LL;
volatile int8_t x85 = INT8_MIN;
volatile int32_t t22 = -6377;
int64_t x105 = INT64_MIN;
static int64_t x111 = 25427933LL;
int16_t x117 = -63;
volatile uint64_t x119 = 43710816784789520LLU;
int8_t x126 = -3;
int64_t x128 = INT64_MIN;
int8_t x133 = INT8_MAX;
int64_t x137 = INT64_MAX;
static uint8_t x139 = 3U;
int16_t x159 = INT16_MIN;
int16_t x162 = INT16_MIN;
volatile int64_t t38 = -178LL;
volatile int32_t x170 = -896817843;
static volatile int16_t x177 = 346;
int8_t x179 = INT8_MIN;
uint64_t x180 = 20886516969142894LLU;
volatile int32_t x183 = 60;
volatile int8_t x191 = INT8_MAX;
uint32_t x192 = UINT32_MAX;
volatile uint64_t x195 = 12537689LLU;
int64_t t46 = -31786LL;
volatile int32_t t48 = -73955862;
volatile uint16_t x205 = UINT16_MAX;
int64_t x206 = -7599767145LL;
static volatile uint64_t t52 = 139459081LLU;
uint16_t x225 = 3056U;
int16_t x229 = INT16_MAX;
volatile int8_t x235 = INT8_MAX;
volatile uint32_t x247 = UINT32_MAX;
int32_t x254 = -315567;
int16_t x255 = -1;
int16_t x256 = -1;
uint64_t x263 = 16552721781249665LLU;
uint32_t x265 = 82479U;
int16_t x270 = 0;
int32_t x271 = -20;
uint32_t x272 = UINT32_MAX;
uint32_t x274 = UINT32_MAX;
int8_t x275 = INT8_MIN;
static uint8_t x277 = 78U;
uint8_t x283 = 68U;
static volatile int64_t x284 = -9453764490LL;
volatile uint16_t x285 = 21842U;
static volatile int32_t t68 = 7810;
static uint64_t x291 = 39LLU;
static int8_t x295 = INT8_MIN;
int32_t x296 = INT32_MIN;
int32_t t70 = INT32_MIN;
static uint64_t x300 = 6863572914791LLU;
int8_t x309 = -1;
int8_t x313 = -8;
static volatile int32_t t75 = 255300;
volatile int32_t x319 = INT32_MIN;
uint32_t t76 = 5542020U;
uint8_t x321 = UINT8_MAX;
int32_t t77 = 2887843;
volatile int32_t t78 = -1;
int16_t x330 = INT16_MIN;
volatile int64_t t79 = 1990930408121133051LL;
static int64_t x343 = 3171321289834641LL;
static int32_t x346 = -1;
static int16_t x349 = 15807;
int8_t x358 = 1;
volatile uint32_t x362 = 9U;
uint32_t x363 = 9U;
volatile int32_t t87 = -44;
volatile int32_t t88 = -260;
static int8_t x371 = INT8_MAX;
int64_t x374 = INT64_MIN;
int64_t x376 = -1LL;
static int16_t x377 = INT16_MAX;
uint8_t x379 = 2U;
int32_t t91 = -189;
int32_t t93 = -13032;
int16_t x389 = INT16_MIN;
static int8_t x392 = -1;
int32_t t94 = -141988;
int64_t x395 = INT64_MAX;
volatile int32_t t95 = -603;
int16_t x401 = -207;
int32_t x404 = INT32_MIN;
uint16_t x407 = 36U;
volatile uint64_t x410 = 4734312230734818LLU;


void f0(void) {
	uint16_t x1 = 961U;
	int64_t x2 = 5912696729484LL;
	int8_t x3 = INT8_MIN;
	static int32_t t0 = 8136;

	t0 = (x1-((x2^x3)<=x4));

	if (t0 != 960) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 16393443432201LL;
	int64_t x6 = -1LL;
	static int16_t x8 = INT16_MIN;
	volatile int64_t t1 = 28493005456LL;

	t1 = (x5-((x6^x7)<=x8));

	if (t1 != 16393443432201LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	int32_t t2 = -661250749;

	t2 = (x9-((x10^x11)<=x12));

	if (t2 != -129) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 179U;
	int64_t x14 = 646729573LL;
	int64_t x15 = INT64_MAX;
	uint32_t t3 = 88U;

	t3 = (x13-((x14^x15)<=x16));

	if (t3 != 179U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -6759;
	volatile int64_t x18 = INT64_MIN;
	volatile int64_t x19 = INT64_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 69792;

	t4 = (x17-((x18^x19)<=x20));

	if (t4 != -6759) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile int64_t x22 = INT64_MIN;
	int16_t x23 = -6;
	volatile int64_t t5 = INT64_MAX;

	t5 = (x21-((x22^x23)<=x24));

	if (t5 != INT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MIN;
	static int64_t x28 = INT64_MAX;
	int32_t t6 = 509004;

	t6 = (x25-((x26^x27)<=x28));

	if (t6 != 6) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	static int64_t x30 = -19116463529984889LL;
	int8_t x31 = INT8_MIN;
	volatile uint8_t x32 = 9U;

	t7 = (x29-((x30^x31)<=x32));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	int8_t x34 = 34;
	int32_t x35 = INT32_MIN;
	uint32_t x36 = 6953U;
	volatile int32_t t8 = -7;

	t8 = (x33-((x34^x35)<=x36));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	int32_t x38 = INT32_MIN;
	volatile int32_t x39 = INT32_MIN;
	volatile uint64_t x40 = 8263521460240LLU;
	static uint32_t t9 = 439468191U;

	t9 = (x37-((x38^x39)<=x40));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -263339129641LL;
	int16_t x42 = -1197;
	static uint64_t x43 = 393LLU;
	volatile int64_t t10 = 19361LL;

	t10 = (x41-((x42^x43)<=x44));

	if (t10 != -263339129641LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 0U;
	uint16_t x46 = 16U;
	uint16_t x47 = UINT16_MAX;
	int16_t x48 = INT16_MIN;
	volatile uint32_t t11 = 752U;

	t11 = (x45-((x46^x47)<=x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	static int8_t x50 = INT8_MIN;
	int16_t x52 = INT16_MIN;

	t12 = (x49-((x50^x51)<=x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	static uint64_t x54 = UINT64_MAX;
	int16_t x56 = INT16_MAX;
	int64_t t13 = INT64_MIN;

	t13 = (x53-((x54^x55)<=x56));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x58 = UINT32_MAX;
	static volatile uint16_t x60 = UINT16_MAX;
	volatile uint32_t t14 = UINT32_MAX;

	t14 = (x57-((x58^x59)<=x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;

	t15 = (x61-((x62^x63)<=x64));

	if (t15 != -5) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 8;
	static uint32_t x67 = 1U;
	int64_t x68 = -569386456253725LL;

	t16 = (x65-((x66^x67)<=x68));

	if (t16 != 8) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MAX;
	static uint16_t x71 = UINT16_MAX;
	static int16_t x72 = -1;
	volatile int32_t t17 = INT32_MIN;

	t17 = (x69-((x70^x71)<=x72));

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 4U;
	uint16_t x75 = 1020U;
	int64_t x76 = INT64_MAX;
	int32_t t18 = -2;

	t18 = (x73-((x74^x75)<=x76));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	uint16_t x80 = 126U;
	volatile int32_t t19 = -2859;

	t19 = (x77-((x78^x79)<=x80));

	if (t19 != 126) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	volatile int16_t x83 = -1;
	int64_t x84 = 628788838521LL;
	static int64_t t20 = -13752880112LL;

	t20 = (x81-((x82^x83)<=x84));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x86 = -1;
	static int32_t x87 = -100;
	int64_t x88 = -120479LL;
	int32_t t21 = -23379;

	t21 = (x85-((x86^x87)<=x88));

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = 1U;
	uint16_t x92 = 1U;

	t22 = (x89-((x90^x91)<=x92));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int16_t x94 = INT16_MAX;
	static volatile int32_t x95 = -1;
	static int16_t x96 = 3;
	int32_t t23 = 3;

	t23 = (x93-((x94^x95)<=x96));

	if (t23 != -129) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int16_t x98 = -1;
	int16_t x99 = INT16_MAX;
	int16_t x100 = INT16_MIN;
	int64_t t24 = 141869495883LL;

	t24 = (x97-((x98^x99)<=x100));

	if (t24 != -2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	int16_t x102 = INT16_MAX;
	uint16_t x103 = 3U;
	volatile int8_t x104 = 0;
	volatile int32_t t25 = 55255;

	t25 = (x101-((x102^x103)<=x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = 2;
	uint16_t x107 = UINT16_MAX;
	int16_t x108 = -1;
	volatile int64_t t26 = INT64_MIN;

	t26 = (x105-((x106^x107)<=x108));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -1LL;
	volatile int16_t x110 = -40;
	uint8_t x112 = UINT8_MAX;
	volatile int64_t t27 = 109741794899LL;

	t27 = (x109-((x110^x111)<=x112));

	if (t27 != -2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x118 = -790;
	uint64_t x120 = 6175LLU;
	static int32_t t28 = 10746202;

	t28 = (x117-((x118^x119)<=x120));

	if (t28 != -63) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	static int8_t x122 = 17;
	volatile uint16_t x123 = UINT16_MAX;
	volatile uint64_t x124 = 16656LLU;
	volatile int32_t t29 = 379;

	t29 = (x121-((x122^x123)<=x124));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -23;
	uint16_t x127 = 63U;
	int32_t t30 = -911008163;

	t30 = (x125-((x126^x127)<=x128));

	if (t30 != -23) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = INT16_MIN;
	static int64_t x130 = INT64_MIN;
	int32_t x131 = -55655705;
	int8_t x132 = INT8_MIN;
	int32_t t31 = 258341;

	t31 = (x129-((x130^x131)<=x132));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x134 = INT16_MIN;
	static int32_t x135 = INT32_MIN;
	static int32_t x136 = INT32_MAX;
	volatile int32_t t32 = 33849;

	t32 = (x133-((x134^x135)<=x136));

	if (t32 != 126) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x138 = 18U;
	static int16_t x140 = INT16_MIN;
	static int64_t t33 = INT64_MAX;

	t33 = (x137-((x138^x139)<=x140));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = 22348032849LL;
	static uint8_t x142 = 87U;
	uint8_t x143 = 13U;
	uint8_t x144 = UINT8_MAX;
	volatile int64_t t34 = -108544LL;

	t34 = (x141-((x142^x143)<=x144));

	if (t34 != 22348032848LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	uint64_t x146 = 168LLU;
	int8_t x147 = INT8_MIN;
	static int16_t x148 = -465;
	volatile int32_t t35 = -13758;

	t35 = (x145-((x146^x147)<=x148));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 10993780U;
	int8_t x154 = INT8_MIN;
	uint8_t x155 = UINT8_MAX;
	static volatile int8_t x156 = INT8_MIN;
	static uint32_t t36 = 71U;

	t36 = (x153-((x154^x155)<=x156));

	if (t36 != 10993779U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x157 = INT16_MIN;
	int64_t x158 = INT64_MIN;
	volatile int8_t x160 = INT8_MIN;
	static int32_t t37 = -3;

	t37 = (x157-((x158^x159)<=x160));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x161 = -48760558477LL;
	volatile int32_t x163 = -1;
	int64_t x164 = INT64_MIN;

	t38 = (x161-((x162^x163)<=x164));

	if (t38 != -48760558477LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x165 = 31805245360209195LLU;
	int8_t x166 = -1;
	volatile int64_t x167 = 18208916246413796LL;
	static uint32_t x168 = 906957386U;
	uint64_t t39 = 2454558030008LLU;

	t39 = (x165-((x166^x167)<=x168));

	if (t39 != 31805245360209194LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 2U;
	uint16_t x171 = 3U;
	uint32_t x172 = 67210U;
	volatile uint32_t t40 = 5U;

	t40 = (x169-((x170^x171)<=x172));

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = UINT16_MAX;
	int64_t x174 = 984LL;
	volatile int32_t x175 = -4539594;
	int64_t x176 = -1LL;
	int32_t t41 = 4315;

	t41 = (x173-((x174^x175)<=x176));

	if (t41 != 65534) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = 11U;
	volatile int32_t t42 = 6839850;

	t42 = (x177-((x178^x179)<=x180));

	if (t42 != 345) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	int32_t x182 = -1;
	volatile int64_t x184 = 1294166LL;
	volatile int32_t t43 = 1;

	t43 = (x181-((x182^x183)<=x184));

	if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = INT32_MAX;
	volatile int64_t x188 = INT64_MIN;
	volatile int32_t t44 = -12544627;

	t44 = (x185-((x186^x187)<=x188));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x189 = -1;
	int32_t x190 = INT32_MIN;
	int32_t t45 = 4302;

	t45 = (x189-((x190^x191)<=x192));

	if (t45 != -2) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	static int64_t x194 = -14871844732LL;
	int64_t x196 = -4LL;

	t46 = (x193-((x194^x195)<=x196));

	if (t46 != -2LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MIN;
	int8_t x199 = -8;
	int16_t x200 = 15;
	int32_t t47 = 2274174;

	t47 = (x197-((x198^x199)<=x200));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = 17364;
	volatile uint64_t x202 = 364105LLU;
	int64_t x203 = INT64_MAX;
	uint8_t x204 = 2U;

	t48 = (x201-((x202^x203)<=x204));

	if (t48 != 17364) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x207 = -9226LL;
	int8_t x208 = INT8_MIN;
	static int32_t t49 = -1;

	t49 = (x205-((x206^x207)<=x208));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x213 = UINT32_MAX;
	uint16_t x214 = 83U;
	uint32_t x215 = 99U;
	volatile uint32_t x216 = 7886043U;
	uint32_t t50 = 1U;

	t50 = (x213-((x214^x215)<=x216));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	int16_t x219 = 9275;
	int64_t x220 = INT64_MIN;
	int32_t t51 = 3;

	t51 = (x217-((x218^x219)<=x220));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x221 = UINT64_MAX;
	volatile int32_t x222 = -566;
	int32_t x223 = INT32_MAX;
	int16_t x224 = INT16_MIN;

	t52 = (x221-((x222^x223)<=x224));

	if (t52 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MAX;
	int32_t x227 = -100;
	uint16_t x228 = UINT16_MAX;
	int32_t t53 = 1287035;

	t53 = (x225-((x226^x227)<=x228));

	if (t53 != 3055) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x230 = INT32_MAX;
	static int32_t x231 = INT32_MIN;
	volatile uint32_t x232 = 1178U;
	int32_t t54 = -21352;

	t54 = (x229-((x230^x231)<=x232));

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x233 = UINT16_MAX;
	volatile int32_t x234 = -1;
	int64_t x236 = 4LL;
	static volatile int32_t t55 = 2442;

	t55 = (x233-((x234^x235)<=x236));

	if (t55 != 65534) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 408675742LLU;
	uint16_t x238 = UINT16_MAX;
	static int64_t x239 = INT64_MIN;
	volatile int32_t x240 = INT32_MAX;
	uint64_t t56 = 14278164501803665LLU;

	t56 = (x237-((x238^x239)<=x240));

	if (t56 != 408675741LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = -1;
	static uint8_t x243 = 33U;
	uint64_t x244 = 4534540LLU;
	volatile int64_t t57 = INT64_MIN;

	t57 = (x241-((x242^x243)<=x244));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	static volatile int8_t x248 = 11;
	static int32_t t58 = -3702;

	t58 = (x245-((x246^x247)<=x248));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x249 = 187400848U;
	int16_t x250 = INT16_MAX;
	static int16_t x251 = INT16_MIN;
	static uint32_t x252 = UINT32_MAX;
	uint32_t t59 = 4U;

	t59 = (x249-((x250^x251)<=x252));

	if (t59 != 187400847U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MAX;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x253-((x254^x255)<=x256));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x257 = 0U;
	static volatile uint16_t x258 = 1274U;
	int8_t x259 = INT8_MAX;
	uint8_t x260 = 2U;
	static int32_t t61 = -215313953;

	t61 = (x257-((x258^x259)<=x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 86U;
	static int64_t x262 = INT64_MIN;
	volatile uint64_t x264 = 26101LLU;
	int32_t t62 = 67;

	t62 = (x261-((x262^x263)<=x264));

	if (t62 != 86) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = UINT32_MAX;
	int64_t x268 = -3100644817LL;
	static volatile uint32_t t63 = 1095440169U;

	t63 = (x265-((x266^x267)<=x268));

	if (t63 != 82478U) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x269 = 6U;
	volatile uint32_t t64 = 1431212U;

	t64 = (x269-((x270^x271)<=x272));

	if (t64 != 5U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = -5764536527386LL;
	int32_t x276 = -1;
	volatile int64_t t65 = 4628495546562135LL;

	t65 = (x273-((x274^x275)<=x276));

	if (t65 != -5764536527387LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x278 = 45;
	int16_t x279 = 1;
	int32_t x280 = INT32_MAX;
	volatile int32_t t66 = -104385753;

	t66 = (x277-((x278^x279)<=x280));

	if (t66 != 77) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x281 = UINT16_MAX;
	static int16_t x282 = -1456;
	int32_t t67 = -643;

	t67 = (x281-((x282^x283)<=x284));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x286 = 100U;
	int32_t x287 = -74443649;
	static int16_t x288 = INT16_MIN;

	t68 = (x285-((x286^x287)<=x288));

	if (t68 != 21841) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x289 = 708896655U;
	int8_t x290 = -1;
	int32_t x292 = 21962;
	volatile uint32_t t69 = 254842852U;

	t69 = (x289-((x290^x291)<=x292));

	if (t69 != 708896655U) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MIN;

	t70 = (x293-((x294^x295)<=x296));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	int64_t x299 = INT64_MIN;
	static int32_t t71 = 21661;

	t71 = (x297-((x298^x299)<=x300));

	if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x301 = INT64_MAX;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	static int16_t x304 = -1;
	int64_t t72 = INT64_MAX;

	t72 = (x301-((x302^x303)<=x304));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 1769U;
	static int32_t x306 = INT32_MIN;
	static int32_t x307 = -47299;
	volatile int8_t x308 = -1;
	static int32_t t73 = 46577;

	t73 = (x305-((x306^x307)<=x308));

	if (t73 != 1769) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x310 = INT16_MIN;
	volatile int32_t x311 = INT32_MIN;
	int64_t x312 = -7110388549414567LL;
	static volatile int32_t t74 = 0;

	t74 = (x309-((x310^x311)<=x312));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x314 = 106U;
	int32_t x315 = 195;
	static uint16_t x316 = 60U;

	t75 = (x313-((x314^x315)<=x316));

	if (t75 != -8) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x317 = 712105U;
	static uint64_t x318 = UINT64_MAX;
	static uint16_t x320 = 14634U;

	t76 = (x317-((x318^x319)<=x320));

	if (t76 != 712105U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = INT64_MAX;
	uint16_t x324 = 0U;

	t77 = (x321-((x322^x323)<=x324));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x325 = -1;
	int64_t x326 = INT64_MIN;
	int32_t x327 = -16;
	int32_t x328 = -2980964;

	t78 = (x325-((x326^x327)<=x328));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x329 = -4502625091987925485LL;
	volatile int32_t x331 = INT32_MIN;
	int32_t x332 = -1;

	t79 = (x329-((x330^x331)<=x332));

	if (t79 != -4502625091987925485LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = 2U;
	int32_t x334 = 21079;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MAX;
	int32_t t80 = -7176;

	t80 = (x333-((x334^x335)<=x336));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x337 = 7166114824801805900LLU;
	volatile uint8_t x338 = 33U;
	volatile uint32_t x339 = 229U;
	int8_t x340 = INT8_MAX;
	uint64_t t81 = 20976632768LLU;

	t81 = (x337-((x338^x339)<=x340));

	if (t81 != 7166114824801805900LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = 99777LL;
	static int16_t x342 = INT16_MAX;
	int16_t x344 = 2026;
	int64_t t82 = 11303211097LL;

	t82 = (x341-((x342^x343)<=x344));

	if (t82 != 99777LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = 280801372910742212LLU;
	volatile uint32_t x347 = 459U;
	uint64_t x348 = 1457371571LLU;
	uint64_t t83 = 8236492068979585LLU;

	t83 = (x345-((x346^x347)<=x348));

	if (t83 != 280801372910742212LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = 4;
	static int16_t x351 = -1;
	int64_t x352 = INT64_MAX;
	int32_t t84 = -1;

	t84 = (x349-((x350^x351)<=x352));

	if (t84 != 15806) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 13757U;
	int8_t x354 = INT8_MIN;
	volatile int8_t x355 = -1;
	static int64_t x356 = INT64_MAX;
	int32_t t85 = 194548;

	t85 = (x353-((x354^x355)<=x356));

	if (t85 != 13756) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x357 = 1U;
	int32_t x359 = -110242;
	static int8_t x360 = -48;
	static volatile uint32_t t86 = 36U;

	t86 = (x357-((x358^x359)<=x360));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = -1;
	int32_t x364 = -1;

	t87 = (x361-((x362^x363)<=x364));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MIN;
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MAX;

	t88 = (x365-((x366^x367)<=x368));

	if (t88 != -129) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = UINT32_MAX;
	static uint16_t x370 = 1991U;
	int32_t x372 = INT32_MAX;
	volatile uint32_t t89 = 47880411U;

	t89 = (x369-((x370^x371)<=x372));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = INT64_MAX;
	int8_t x375 = INT8_MIN;
	int64_t t90 = INT64_MAX;

	t90 = (x373-((x374^x375)<=x376));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x378 = 20;
	uint8_t x380 = 2U;

	t91 = (x377-((x378^x379)<=x380));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x381 = -1LL;
	int64_t x382 = INT64_MAX;
	volatile int8_t x383 = INT8_MIN;
	static int8_t x384 = -2;
	int64_t t92 = -614616LL;

	t92 = (x381-((x382^x383)<=x384));

	if (t92 != -2LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x385 = -3;
	int16_t x386 = -7993;
	uint64_t x387 = UINT64_MAX;
	int8_t x388 = 1;

	t93 = (x385-((x386^x387)<=x388));

	if (t93 != -3) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x390 = -1LL;
	volatile uint8_t x391 = 2U;

	t94 = (x389-((x390^x391)<=x392));

	if (t94 != -32769) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -1;
	int8_t x394 = INT8_MIN;
	volatile uint64_t x396 = 584375917LLU;

	t95 = (x393-((x394^x395)<=x396));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = 6;
	int32_t x398 = 531975;
	static int16_t x399 = 50;
	volatile int64_t x400 = 17313738372671217LL;
	volatile int32_t t96 = 72320;

	t96 = (x397-((x398^x399)<=x400));

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	volatile int32_t t97 = -2820;

	t97 = (x401-((x402^x403)<=x404));

	if (t97 != -207) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = -23LL;
	uint16_t x406 = 3U;
	uint8_t x408 = UINT8_MAX;
	int64_t t98 = 62028459051812LL;

	t98 = (x405-((x406^x407)<=x408));

	if (t98 != -24LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = UINT32_MAX;
	volatile int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	static uint32_t t99 = 189U;

	t99 = (x409-((x410^x411)<=x412));

	if (t99 != 4294967294U) { NG(); } else { ; }
	
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

