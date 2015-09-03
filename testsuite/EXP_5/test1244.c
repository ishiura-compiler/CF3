#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x13 = -1;
int16_t x17 = INT16_MIN;
volatile uint8_t x19 = 94U;
volatile int8_t x25 = 2;
int8_t x30 = INT8_MIN;
int8_t x38 = 52;
volatile int32_t x51 = -4871545;
volatile int64_t x52 = -1LL;
volatile uint32_t x53 = UINT32_MAX;
volatile uint8_t x55 = 39U;
uint16_t x59 = 955U;
static int32_t x62 = -1;
volatile uint32_t x63 = 1438U;
volatile int32_t t18 = -198119;
uint8_t x80 = 3U;
int16_t x84 = INT16_MIN;
volatile int32_t t22 = 90942688;
uint64_t x111 = UINT64_MAX;
volatile uint8_t x117 = 17U;
volatile int16_t x128 = -1;
uint16_t x129 = 765U;
volatile int32_t t31 = -151895203;
uint64_t x136 = 20632419976966039LLU;
static int64_t x140 = 21547510772803453LL;
static volatile int8_t x143 = -3;
int64_t x152 = INT64_MIN;
int8_t x161 = INT8_MIN;
uint32_t x162 = 8608061U;
int32_t t39 = -123;
volatile int64_t x169 = 0LL;
uint32_t x172 = 14435U;
static int8_t x173 = INT8_MIN;
volatile int64_t x186 = INT64_MIN;
volatile int64_t x187 = INT64_MIN;
int32_t t45 = -184624817;
static int32_t x191 = -1;
static volatile int32_t x193 = INT32_MAX;
static int64_t x206 = INT64_MIN;
uint16_t x207 = UINT16_MAX;
static int8_t x215 = 2;
int32_t x216 = INT32_MAX;
int32_t t53 = -74;
int32_t x223 = INT32_MIN;
uint16_t x227 = 57U;
volatile int64_t x230 = -18099653661509LL;
uint8_t x233 = 7U;
volatile int32_t t61 = -1179165;
uint8_t x263 = UINT8_MAX;
volatile uint16_t x268 = 1U;
volatile int32_t t65 = -3775632;
int32_t t68 = 114;
int32_t x289 = -61810;
volatile int32_t x301 = INT32_MIN;
volatile uint8_t x303 = 0U;
static int8_t x304 = 3;
uint8_t x310 = UINT8_MAX;
int64_t x311 = INT64_MAX;
static int32_t t76 = -846977154;
int16_t x313 = INT16_MAX;
volatile uint16_t x314 = 14092U;
uint64_t x315 = 137323837795LLU;
int64_t x319 = INT64_MAX;
static volatile int32_t t79 = -78713;
uint16_t x327 = UINT16_MAX;
int32_t t80 = 25729323;
int8_t x329 = INT8_MIN;
volatile int16_t x333 = 11105;
int8_t x342 = INT8_MIN;
int8_t x345 = -1;
volatile int32_t t85 = -100;
int16_t x352 = 7258;
static volatile int32_t t87 = -145189307;
uint16_t x357 = 2532U;
int64_t x358 = 0LL;
volatile int32_t t88 = 23750;
int8_t x363 = INT8_MIN;
int32_t t90 = -31913120;
int32_t x369 = INT32_MIN;
uint8_t x372 = 11U;
int16_t x375 = -1;
uint32_t x377 = UINT32_MAX;
volatile int8_t x378 = INT8_MIN;
int16_t x379 = INT16_MAX;
volatile int32_t t93 = -14984852;
uint8_t x385 = 84U;
int32_t t95 = 2331;
volatile int32_t t97 = 1;
static int64_t x397 = -9LL;


void f0(void) {
	uint32_t x1 = 23U;
	int64_t x2 = -1LL;
	volatile int64_t x3 = -1LL;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -49716;

	t0 = (x1<((x2==x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -4669;
	uint64_t x6 = UINT64_MAX;
	uint16_t x7 = 9576U;
	static int8_t x8 = INT8_MIN;
	static int32_t t1 = 51051;

	t1 = (x5<((x6==x7)%x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 43U;
	int64_t x10 = -30896283965391520LL;
	static int32_t x11 = -1;
	static int32_t x12 = -14;
	volatile int32_t t2 = 15555;

	t2 = (x9<((x10==x11)%x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MIN;
	volatile int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int32_t t3 = -5;

	t3 = (x13<((x14==x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = INT64_MIN;
	volatile uint32_t x20 = 121858283U;
	int32_t t4 = 0;

	t4 = (x17<((x18==x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int16_t x22 = -3977;
	int16_t x23 = INT16_MAX;
	int16_t x24 = -24;
	int32_t t5 = -122;

	t5 = (x21<((x22==x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = 1;
	int16_t x27 = INT16_MIN;
	volatile uint64_t x28 = 11830648361738LLU;
	volatile int32_t t6 = 400602;

	t6 = (x25<((x26==x27)%x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static int16_t x31 = -1;
	static int64_t x32 = 5618831LL;
	volatile int32_t t7 = 6031;

	t7 = (x29<((x30==x31)%x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	volatile int64_t x34 = 650303LL;
	static int64_t x35 = -1LL;
	int64_t x36 = 1866730775265LL;
	static int32_t t8 = -26;

	t8 = (x33<((x34==x35)%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -197;
	static int32_t x39 = INT32_MIN;
	uint32_t x40 = UINT32_MAX;
	volatile int32_t t9 = -651807;

	t9 = (x37<((x38==x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 0;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = 67214526;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -41392968;

	t10 = (x41<((x42==x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int16_t x46 = INT16_MAX;
	static int32_t x47 = -1;
	static uint16_t x48 = 17979U;
	int32_t t11 = 3;

	t11 = (x45<((x46==x47)%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	static uint64_t x50 = 13343138296LLU;
	int32_t t12 = 95804073;

	t12 = (x49<((x50==x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = UINT64_MAX;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t13 = -10052050;

	t13 = (x53<((x54==x55)%x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 1U;
	uint16_t x60 = 2U;
	int32_t t14 = -92;

	t14 = (x57<((x58==x59)%x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x64 = INT32_MIN;
	static volatile int32_t t15 = -2081761;

	t15 = (x61<((x62==x63)%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1255349LL;
	int64_t x66 = 34890012778925LL;
	volatile int8_t x67 = INT8_MAX;
	static int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 3;

	t16 = (x65<((x66==x67)%x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 12U;
	int32_t x70 = -521218;
	uint32_t x71 = 1474339U;
	static uint32_t x72 = 79U;
	static int32_t t17 = 3;

	t17 = (x69<((x70==x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = UINT16_MAX;
	volatile int16_t x74 = INT16_MIN;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MAX;

	t18 = (x73<((x74==x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 0;
	int32_t x78 = -409380;
	int64_t x79 = -1LL;
	volatile int32_t t19 = -168;

	t19 = (x77<((x78==x79)%x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	uint32_t x82 = UINT32_MAX;
	int16_t x83 = INT16_MIN;
	volatile int32_t t20 = -42293820;

	t20 = (x81<((x82==x83)%x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -32278567887509540LL;
	int64_t x86 = -1LL;
	volatile int64_t x87 = -18938LL;
	volatile int16_t x88 = INT16_MAX;
	int32_t t21 = -15;

	t21 = (x85<((x86==x87)%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 4;
	int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;

	t22 = (x89<((x90==x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 95U;
	int32_t x94 = INT32_MAX;
	volatile int64_t x95 = -540404329090184490LL;
	int16_t x96 = INT16_MIN;
	int32_t t23 = 964069;

	t23 = (x93<((x94==x95)%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x98 = -15;
	static uint16_t x99 = UINT16_MAX;
	uint8_t x100 = 12U;
	volatile int32_t t24 = 28268804;

	t24 = (x97<((x98==x99)%x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = 151446LL;
	int64_t x102 = INT64_MAX;
	uint32_t x103 = 10545581U;
	static int64_t x104 = -33349LL;
	static int32_t t25 = 0;

	t25 = (x101<((x102==x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 30;
	uint32_t x106 = 10U;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	static int32_t t26 = 99134;

	t26 = (x105<((x106==x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = -6328LL;
	static uint16_t x110 = 0U;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = -741;

	t27 = (x109<((x110==x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = 20;
	static uint16_t x114 = 12572U;
	uint64_t x115 = UINT64_MAX;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = 47697;

	t28 = (x113<((x114==x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = 397158LL;
	int64_t x119 = INT64_MAX;
	int32_t x120 = -1;
	volatile int32_t t29 = -114125899;

	t29 = (x117<((x118==x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x125 = 3738U;
	volatile uint32_t x126 = UINT32_MAX;
	static int16_t x127 = -1;
	volatile int32_t t30 = 516535947;

	t30 = (x125<((x126==x127)%x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x130 = 45;
	int64_t x131 = -1LL;
	int64_t x132 = INT64_MAX;

	t31 = (x129<((x130==x131)%x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 21378881858684LLU;
	int64_t x134 = INT64_MIN;
	uint16_t x135 = 1828U;
	static int32_t t32 = -15;

	t32 = (x133<((x134==x135)%x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	int64_t x138 = -30138161531LL;
	int32_t x139 = 127061;
	static volatile int32_t t33 = 757977;

	t33 = (x137<((x138==x139)%x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = 420;
	int64_t x142 = -1LL;
	volatile int16_t x144 = INT16_MAX;
	static volatile int32_t t34 = -7;

	t34 = (x141<((x142==x143)%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MAX;
	int16_t x147 = -1;
	volatile uint64_t x148 = 10LLU;
	int32_t t35 = 61290208;

	t35 = (x145<((x146==x147)%x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 71551U;
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	static volatile int32_t t36 = 187;

	t36 = (x149<((x150==x151)%x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 1745U;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	int32_t x156 = INT32_MAX;
	volatile int32_t t37 = -1333;

	t37 = (x153<((x154==x155)%x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x157 = 30645222861LL;
	int64_t x158 = INT64_MIN;
	int64_t x159 = INT64_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t38 = -31;

	t38 = (x157<((x158==x159)%x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x163 = INT16_MIN;
	int8_t x164 = INT8_MIN;

	t39 = (x161<((x162==x163)%x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = 1049617960438LL;
	static int32_t x166 = -1;
	uint32_t x167 = UINT32_MAX;
	uint32_t x168 = 634U;
	int32_t t40 = 19267670;

	t40 = (x165<((x166==x167)%x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x170 = INT8_MAX;
	static volatile int32_t x171 = 2788940;
	volatile int32_t t41 = 93;

	t41 = (x169<((x170==x171)%x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x174 = -188;
	volatile int8_t x175 = INT8_MIN;
	uint16_t x176 = 2296U;
	volatile int32_t t42 = 58;

	t42 = (x173<((x174==x175)%x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x177 = INT8_MAX;
	uint32_t x178 = 497U;
	uint32_t x179 = 15390434U;
	int64_t x180 = -382361696930258757LL;
	static int32_t t43 = -513031;

	t43 = (x177<((x178==x179)%x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	int16_t x182 = -1;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -36209LL;
	int32_t t44 = 1481;

	t44 = (x181<((x182==x183)%x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = 44;
	volatile int8_t x188 = INT8_MAX;

	t45 = (x185<((x186==x187)%x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	uint32_t x192 = UINT32_MAX;
	static int32_t t46 = -6188;

	t46 = (x189<((x190==x191)%x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x194 = INT16_MAX;
	int32_t x195 = 1;
	int64_t x196 = -1LL;
	int32_t t47 = 0;

	t47 = (x193<((x194==x195)%x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	volatile int8_t x198 = 0;
	uint32_t x199 = 348720U;
	static int16_t x200 = INT16_MIN;
	volatile int32_t t48 = -631981;

	t48 = (x197<((x198==x199)%x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x201 = 1U;
	int8_t x202 = INT8_MIN;
	static uint64_t x203 = UINT64_MAX;
	int64_t x204 = -1LL;
	static int32_t t49 = -366565;

	t49 = (x201<((x202==x203)%x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = 4130138LL;
	uint32_t x208 = 544U;
	volatile int32_t t50 = 1588240;

	t50 = (x205<((x206==x207)%x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 2U;
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = -10LL;
	static uint8_t x212 = 1U;
	static int32_t t51 = -374;

	t51 = (x209<((x210==x211)%x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = -1;
	static uint64_t x214 = UINT64_MAX;
	int32_t t52 = -4;

	t52 = (x213<((x214==x215)%x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MAX;
	uint8_t x218 = 27U;
	int32_t x219 = -4;
	static uint8_t x220 = 67U;

	t53 = (x217<((x218==x219)%x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -593;
	uint64_t x222 = UINT64_MAX;
	static volatile int32_t x224 = -1;
	volatile int32_t t54 = -99122;

	t54 = (x221<((x222==x223)%x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = 3;
	int64_t x226 = -1LL;
	volatile int64_t x228 = -6LL;
	volatile int32_t t55 = 1400142;

	t55 = (x225<((x226==x227)%x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x229 = -7845734;
	int16_t x231 = -1;
	int8_t x232 = -1;
	int32_t t56 = -763690039;

	t56 = (x229<((x230==x231)%x232));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = -1LL;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t57 = 385;

	t57 = (x233<((x234==x235)%x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x237 = INT64_MIN;
	uint64_t x238 = UINT64_MAX;
	int16_t x239 = 2056;
	uint32_t x240 = 5525U;
	int32_t t58 = 2;

	t58 = (x237<((x238==x239)%x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x241 = 533LLU;
	uint16_t x242 = UINT16_MAX;
	int32_t x243 = -1;
	int16_t x244 = 20;
	int32_t t59 = -63987417;

	t59 = (x241<((x242==x243)%x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint8_t x245 = UINT8_MAX;
	volatile uint8_t x246 = 1U;
	int8_t x247 = -57;
	volatile uint64_t x248 = 1214249024203869LLU;
	volatile int32_t t60 = 98;

	t60 = (x245<((x246==x247)%x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = 4U;
	static int8_t x250 = INT8_MAX;
	static volatile uint64_t x251 = UINT64_MAX;
	int32_t x252 = INT32_MIN;

	t61 = (x249<((x250==x251)%x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = 21U;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	volatile int32_t t62 = -90;

	t62 = (x253<((x254==x255)%x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	int64_t x258 = INT64_MIN;
	volatile int16_t x259 = 5046;
	uint16_t x260 = 2369U;
	int32_t t63 = -25;

	t63 = (x257<((x258==x259)%x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x261 = 12612;
	uint64_t x262 = UINT64_MAX;
	int64_t x264 = 74271833817606161LL;
	int32_t t64 = -2737;

	t64 = (x261<((x262==x263)%x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile int32_t x266 = INT32_MAX;
	int64_t x267 = -1LL;

	t65 = (x265<((x266==x267)%x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = -14;
	static int64_t x270 = -1LL;
	int8_t x271 = -1;
	int8_t x272 = -1;
	volatile int32_t t66 = 66;

	t66 = (x269<((x270==x271)%x272));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x273 = UINT16_MAX;
	volatile int32_t x274 = 58479;
	int64_t x275 = -1LL;
	volatile uint8_t x276 = UINT8_MAX;
	int32_t t67 = -31221815;

	t67 = (x273<((x274==x275)%x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = 1;
	static int64_t x278 = INT64_MAX;
	uint8_t x279 = 52U;
	volatile uint32_t x280 = 3U;

	t68 = (x277<((x278==x279)%x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MAX;
	uint32_t x283 = 348U;
	volatile int64_t x284 = INT64_MIN;
	static volatile int32_t t69 = -1;

	t69 = (x281<((x282==x283)%x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = INT64_MIN;
	static volatile uint8_t x286 = 0U;
	volatile int8_t x287 = -60;
	volatile int16_t x288 = INT16_MAX;
	int32_t t70 = 41044;

	t70 = (x285<((x286==x287)%x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = INT8_MAX;
	int8_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	volatile int32_t t71 = 1;

	t71 = (x289<((x290==x291)%x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	volatile int64_t x294 = INT64_MIN;
	static int8_t x295 = INT8_MIN;
	static int64_t x296 = -1LL;
	static int32_t t72 = -400;

	t72 = (x293<((x294==x295)%x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MAX;
	static volatile uint32_t x299 = 2059586U;
	volatile int8_t x300 = INT8_MAX;
	volatile int32_t t73 = 0;

	t73 = (x297<((x298==x299)%x300));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x302 = INT8_MIN;
	static int32_t t74 = 1;

	t74 = (x301<((x302==x303)%x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -1LL;
	static int8_t x306 = 1;
	static int8_t x307 = INT8_MIN;
	int16_t x308 = 1;
	static volatile int32_t t75 = 1269;

	t75 = (x305<((x306==x307)%x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	uint8_t x312 = 1U;

	t76 = (x309<((x310==x311)%x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x316 = INT16_MIN;
	volatile int32_t t77 = 9963;

	t77 = (x313<((x314==x315)%x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 46019099LLU;
	static int64_t x320 = 8856222169LL;
	volatile int32_t t78 = -306108879;

	t78 = (x317<((x318==x319)%x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	uint32_t x323 = 816086U;
	int16_t x324 = 3;

	t79 = (x321<((x322==x323)%x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x325 = 6393450812779960LLU;
	int8_t x326 = -1;
	static int16_t x328 = INT16_MIN;

	t80 = (x325<((x326==x327)%x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x330 = 44U;
	static volatile int16_t x331 = INT16_MIN;
	int32_t x332 = -1683885;
	static int32_t t81 = 1880;

	t81 = (x329<((x330==x331)%x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x334 = INT16_MIN;
	uint8_t x335 = 3U;
	int64_t x336 = -1LL;
	static int32_t t82 = -2727;

	t82 = (x333<((x334==x335)%x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x337 = 408336298U;
	static int8_t x338 = INT8_MAX;
	int32_t x339 = INT32_MAX;
	static uint32_t x340 = UINT32_MAX;
	volatile int32_t t83 = -11618783;

	t83 = (x337<((x338==x339)%x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -1;
	static uint64_t x343 = UINT64_MAX;
	int32_t x344 = -290237498;
	static volatile int32_t t84 = 409510803;

	t84 = (x341<((x342==x343)%x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	int64_t x348 = 3630993LL;

	t85 = (x345<((x346==x347)%x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MAX;
	int16_t x350 = INT16_MIN;
	int8_t x351 = 30;
	static volatile int32_t t86 = 74855;

	t86 = (x349<((x350==x351)%x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x353 = 32979453625106LLU;
	uint16_t x354 = 2546U;
	uint32_t x355 = UINT32_MAX;
	int32_t x356 = -1;

	t87 = (x353<((x354==x355)%x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x359 = INT32_MAX;
	volatile int64_t x360 = 1239307LL;

	t88 = (x357<((x358==x359)%x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x361 = 50U;
	volatile int16_t x362 = -1;
	uint64_t x364 = 96568LLU;
	volatile int32_t t89 = -2;

	t89 = (x361<((x362==x363)%x364));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x365 = 14332U;
	volatile int64_t x366 = INT64_MIN;
	int16_t x367 = 1;
	int8_t x368 = INT8_MIN;

	t90 = (x365<((x366==x367)%x368));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x370 = UINT16_MAX;
	int16_t x371 = -22;
	static volatile int32_t t91 = 1323349;

	t91 = (x369<((x370==x371)%x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MAX;
	int16_t x376 = INT16_MIN;
	volatile int32_t t92 = 0;

	t92 = (x373<((x374==x375)%x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x380 = INT64_MAX;

	t93 = (x377<((x378==x379)%x380));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	static volatile int8_t x382 = INT8_MIN;
	int16_t x383 = -129;
	int64_t x384 = -1LL;
	volatile int32_t t94 = -3067886;

	t94 = (x381<((x382==x383)%x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x386 = INT32_MIN;
	uint8_t x387 = UINT8_MAX;
	int8_t x388 = -1;

	t95 = (x385<((x386==x387)%x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = 2U;
	volatile int8_t x390 = INT8_MIN;
	static volatile uint8_t x391 = 55U;
	int8_t x392 = -24;
	int32_t t96 = 127;

	t96 = (x389<((x390==x391)%x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x393 = 3082U;
	uint16_t x394 = UINT16_MAX;
	int64_t x395 = INT64_MAX;
	volatile int8_t x396 = INT8_MIN;

	t97 = (x393<((x394==x395)%x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x398 = INT8_MIN;
	uint8_t x399 = 114U;
	uint16_t x400 = 734U;
	static volatile int32_t t98 = -30679977;

	t98 = (x397<((x398==x399)%x400));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = UINT64_MAX;
	uint64_t x402 = UINT64_MAX;
	int64_t x403 = INT64_MAX;
	int8_t x404 = INT8_MAX;
	static volatile int32_t t99 = -78;

	t99 = (x401<((x402==x403)%x404));

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

