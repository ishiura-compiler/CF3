#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = INT64_MIN;
static int16_t x5 = INT16_MAX;
int64_t x8 = 837017594455LL;
volatile uint8_t x10 = 69U;
static uint64_t x12 = UINT64_MAX;
int16_t x17 = -44;
uint16_t x25 = UINT16_MAX;
int64_t x31 = INT64_MIN;
uint32_t x32 = 1902235410U;
static uint64_t x33 = UINT64_MAX;
int64_t x39 = INT64_MAX;
static int64_t x41 = INT64_MIN;
uint32_t x45 = 5532100U;
uint64_t x46 = 29931971769591224LLU;
uint8_t x50 = 4U;
static uint16_t x56 = UINT16_MAX;
int16_t x62 = -1;
volatile int16_t x63 = INT16_MIN;
static uint16_t x64 = 10U;
static uint32_t t14 = 22345U;
int64_t t15 = 17266660477532LL;
volatile int16_t x82 = 0;
uint32_t x83 = UINT32_MAX;
volatile uint8_t x84 = UINT8_MAX;
uint64_t x89 = UINT64_MAX;
volatile int16_t x94 = INT16_MAX;
int16_t x97 = INT16_MAX;
int64_t x100 = INT64_MIN;
int16_t x110 = INT16_MIN;
int32_t x128 = INT32_MAX;
int32_t x129 = -1;
static int8_t x142 = INT8_MIN;
int64_t x148 = -1LL;
int64_t x151 = INT64_MIN;
uint16_t x152 = UINT16_MAX;
int32_t x166 = -94465;
static volatile int64_t x188 = INT64_MIN;
int8_t x189 = 0;
volatile int32_t t39 = -697284761;
uint64_t x200 = 41392LLU;
volatile uint64_t x210 = 28LLU;
int64_t x217 = INT64_MIN;
static int64_t x220 = 415595LL;
volatile uint64_t t49 = 31397122126LLU;
volatile uint8_t x244 = 3U;
volatile int64_t t50 = 133310003LL;
int16_t x246 = 140;
static uint32_t x250 = UINT32_MAX;
uint32_t x252 = 3187U;
volatile int16_t x255 = INT16_MIN;
int64_t x267 = INT64_MAX;
int64_t t56 = -181874991019LL;
uint16_t x278 = 5231U;
int16_t x286 = INT16_MIN;
volatile uint8_t x291 = 3U;
volatile uint64_t t61 = 420567LLU;
int16_t x301 = INT16_MIN;
int64_t x303 = INT64_MAX;
int64_t x315 = INT64_MIN;
uint64_t x331 = UINT64_MAX;
volatile uint32_t x332 = 1614U;
volatile uint64_t x335 = UINT64_MAX;
volatile int32_t x337 = 1367;
int64_t x342 = -1LL;
int64_t x348 = -1LL;
volatile int64_t t72 = 165701306LL;
int64_t t73 = -593565396449580339LL;
int64_t t75 = -19LL;
uint64_t x369 = UINT64_MAX;
static int8_t x372 = -3;
uint64_t t77 = 835367707LLU;
static volatile int16_t x379 = INT16_MAX;
int32_t x381 = INT32_MIN;
uint64_t x382 = 2698076002LLU;
uint64_t t80 = 48958810342902LLU;
int8_t x386 = -1;
static int64_t x388 = INT64_MIN;
int64_t t81 = -42695714299746LL;
int16_t x390 = -2;
volatile uint16_t x397 = 4U;
static int64_t x399 = -1LL;
int8_t x403 = INT8_MIN;
static int64_t t84 = -158822LL;
int32_t t85 = 4;
static volatile int16_t x411 = 8;
uint64_t x415 = UINT64_MAX;
int32_t x418 = 9042;
uint32_t x420 = 654758123U;
uint32_t x426 = UINT32_MAX;
volatile int32_t t90 = 14;
int64_t x436 = -1LL;
uint32_t x443 = 168U;
int64_t t93 = 349LL;
int8_t x445 = -1;
uint8_t x446 = UINT8_MAX;
volatile uint64_t t94 = 16557775963LLU;
volatile uint64_t x456 = UINT64_MAX;
int32_t x461 = -766140264;
int8_t x462 = -1;
uint32_t x463 = 1287297350U;
static int16_t x467 = INT16_MIN;
uint64_t x472 = UINT64_MAX;


void f0(void) {
	volatile int64_t x1 = -147379676665LL;
	int8_t x2 = 18;
	uint8_t x4 = UINT8_MAX;
	static volatile int64_t t0 = 21949316290546168LL;

	t0 = ((x1-x2)-(x3%x4));

	if (t0 != -147379676555LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 12870;
	int64_t x7 = INT64_MAX;
	int64_t t1 = 31537172156900LL;

	t1 = ((x5-x6)-(x7%x8));

	if (t1 != -621784129670LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	uint32_t x11 = UINT32_MAX;
	volatile uint64_t t2 = 239482942LLU;

	t2 = ((x9-x10)-(x11%x12));

	if (t2 != 18446744069414584251LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MAX;
	uint8_t x14 = 1U;
	static uint64_t x15 = UINT64_MAX;
	uint8_t x16 = 17U;
	volatile uint64_t t3 = 1619839LLU;

	t3 = ((x13-x14)-(x15%x16));

	if (t3 != 126LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	uint32_t x19 = 174U;
	int64_t x20 = INT64_MIN;
	int64_t t4 = 1380LL;

	t4 = ((x17-x18)-(x19%x20));

	if (t4 != -65753LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x26 = -1;
	int8_t x27 = -1;
	int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 314;

	t5 = ((x25-x26)-(x27%x28));

	if (t5 != 65537) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	int16_t x30 = -1954;
	static volatile int64_t t6 = -10073LL;

	t6 = ((x29-x30)-(x31%x32));

	if (t6 != 1023412857LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = 2949U;
	static int16_t x35 = 1;
	int8_t x36 = 3;
	volatile uint64_t t7 = 35995076657498282LLU;

	t7 = ((x33-x34)-(x35%x36));

	if (t7 != 18446744073709548665LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = -995;
	int64_t x40 = -1LL;
	volatile int64_t t8 = 3046382149328LL;

	t8 = ((x37-x38)-(x39%x40));

	if (t8 != 66530LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	int64_t x43 = -1LL;
	static int8_t x44 = -1;
	volatile int64_t t9 = -6579740178861151LL;

	t9 = ((x41-x42)-(x43%x44));

	if (t9 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x47 = 2665;
	uint16_t x48 = UINT16_MAX;
	volatile uint64_t t10 = 0LLU;

	t10 = ((x45-x46)-(x47%x48));

	if (t10 != 18416812101945489827LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	uint16_t x51 = 105U;
	int8_t x52 = -10;
	volatile int32_t t11 = 42660;

	t11 = ((x49-x50)-(x51%x52));

	if (t11 != -137) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MAX;
	volatile int8_t x55 = INT8_MAX;
	int32_t t12 = 61;

	t12 = ((x53-x54)-(x55%x56));

	if (t12 != 32513) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x57 = 48911981078967781LLU;
	int16_t x58 = 3;
	uint8_t x59 = UINT8_MAX;
	volatile uint16_t x60 = 3913U;
	static uint64_t t13 = 9368353LLU;

	t13 = ((x57-x58)-(x59%x60));

	if (t13 != 48911981078967523LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x61 = 211579U;

	t14 = ((x61-x62)-(x63%x64));

	if (t14 != 211588U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 1008U;
	uint16_t x78 = 344U;
	int16_t x79 = INT16_MIN;
	static int64_t x80 = INT64_MAX;

	t15 = ((x77-x78)-(x79%x80));

	if (t15 != 33432LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	static volatile uint32_t t16 = 110U;

	t16 = ((x81-x82)-(x83%x84));

	if (t16 != 32767U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static int64_t x86 = 325307150340975768LL;
	volatile int64_t x87 = 2834158114864LL;
	uint8_t x88 = 1U;
	int64_t t17 = 367640933936LL;

	t17 = ((x85-x86)-(x87%x88));

	if (t17 != -325307150340910233LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x90 = 12U;
	volatile int32_t x91 = -1;
	uint32_t x92 = 104525U;
	volatile uint64_t t18 = 50LLU;

	t18 = ((x89-x90)-(x91%x92));

	if (t18 != 18446744073709516558LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = -33406543655097LL;
	int64_t x95 = 3489677715437377LL;
	int64_t x96 = 195076997821LL;
	volatile int64_t t19 = 24608955195421LL;

	t19 = ((x93-x94)-(x95%x96));

	if (t19 != -33546922103193LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x98 = UINT16_MAX;
	int32_t x99 = -1;
	static int64_t t20 = 204LL;

	t20 = ((x97-x98)-(x99%x100));

	if (t20 != -32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 5743LLU;
	uint8_t x102 = UINT8_MAX;
	volatile int16_t x103 = INT16_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	volatile uint64_t t21 = 1204907736961438907LLU;

	t21 = ((x101-x102)-(x103%x104));

	if (t21 != 5616LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x105 = -1;
	uint16_t x106 = 2176U;
	int8_t x107 = 20;
	int16_t x108 = INT16_MIN;
	volatile int32_t t22 = -3242991;

	t22 = ((x105-x106)-(x107%x108));

	if (t22 != -2197) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = 3U;
	uint64_t x111 = UINT64_MAX;
	int16_t x112 = -3;
	volatile uint64_t t23 = 93365LLU;

	t23 = ((x109-x110)-(x111%x112));

	if (t23 != 32769LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x113 = -115;
	uint8_t x114 = 112U;
	uint8_t x115 = 0U;
	static int16_t x116 = -7236;
	volatile int32_t t24 = 3942;

	t24 = ((x113-x114)-(x115%x116));

	if (t24 != -227) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = 4U;
	static uint16_t x118 = 16375U;
	volatile uint16_t x119 = UINT16_MAX;
	uint32_t x120 = UINT32_MAX;
	static uint32_t t25 = 1U;

	t25 = ((x117-x118)-(x119%x120));

	if (t25 != 4294885390U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	static int16_t x123 = -1;
	static volatile int16_t x124 = INT16_MIN;
	volatile int32_t t26 = -969137;

	t26 = ((x121-x122)-(x123%x124));

	if (t26 != 33024) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x125 = UINT32_MAX;
	volatile int64_t x126 = -158948022564157LL;
	int32_t x127 = INT32_MAX;
	int64_t t27 = -23LL;

	t27 = ((x125-x126)-(x127%x128));

	if (t27 != 158952317531452LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = INT8_MIN;
	static int8_t x131 = -21;
	static int64_t x132 = 26843553005LL;
	volatile int64_t t28 = 3205865144374LL;

	t28 = ((x129-x130)-(x131%x132));

	if (t28 != 148LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int8_t x134 = INT8_MAX;
	static int16_t x135 = INT16_MIN;
	volatile int16_t x136 = INT16_MIN;
	static int32_t t29 = -530482437;

	t29 = ((x133-x134)-(x135%x136));

	if (t29 != 65408) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	static volatile int8_t x138 = -1;
	int8_t x139 = INT8_MIN;
	volatile uint64_t x140 = 6332362165884979LLU;
	volatile uint64_t t30 = 13988LLU;

	t30 = ((x137-x138)-(x139%x140));

	if (t30 != 18446170987075460308LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	volatile uint64_t x143 = UINT64_MAX;
	int8_t x144 = INT8_MAX;
	volatile uint64_t t31 = 88884492078131541LLU;

	t31 = ((x141-x142)-(x143%x144));

	if (t31 != 126LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = 0;
	volatile uint8_t x146 = 6U;
	int8_t x147 = -9;
	volatile int64_t t32 = -87697LL;

	t32 = ((x145-x146)-(x147%x148));

	if (t32 != -6LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = 1660;
	int64_t t33 = -494042818LL;

	t33 = ((x149-x150)-(x151%x152));

	if (t33 != 63875LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x165 = 1;
	volatile int32_t x167 = INT32_MIN;
	uint32_t x168 = UINT32_MAX;
	static uint32_t t34 = 12923U;

	t34 = ((x165-x166)-(x167%x168));

	if (t34 != 2147578114U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x169 = INT16_MAX;
	int64_t x170 = -1LL;
	static uint64_t x171 = UINT64_MAX;
	volatile int32_t x172 = INT32_MIN;
	volatile uint64_t t35 = 249736085LLU;

	t35 = ((x169-x170)-(x171%x172));

	if (t35 != 18446744071562100737LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x173 = -17;
	int16_t x174 = INT16_MAX;
	uint8_t x175 = 13U;
	int32_t x176 = INT32_MAX;
	volatile int32_t t36 = -33;

	t36 = ((x173-x174)-(x175%x176));

	if (t36 != -32797) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	static int8_t x178 = 16;
	int64_t x179 = INT64_MAX;
	int32_t x180 = -1;
	int64_t t37 = -10586933140470LL;

	t37 = ((x177-x178)-(x179%x180));

	if (t37 != -144LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x185 = -390LL;
	volatile int32_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int64_t t38 = -16168132169647963LL;

	t38 = ((x185-x186)-(x187%x188));

	if (t38 != -261LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x190 = 461;
	volatile int8_t x191 = -4;
	volatile uint16_t x192 = 788U;

	t39 = ((x189-x190)-(x191%x192));

	if (t39 != -457) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -1;
	uint64_t x194 = 3016LLU;
	int32_t x195 = -1;
	volatile int32_t x196 = INT32_MIN;
	static uint64_t t40 = 25567795609415004LLU;

	t40 = ((x193-x194)-(x195%x196));

	if (t40 != 18446744073709548600LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x197 = -1LL;
	int64_t x198 = -105733LL;
	int8_t x199 = INT8_MIN;
	uint64_t t41 = 154185138LLU;

	t41 = ((x197-x198)-(x199%x200));

	if (t41 != 71108LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = -4457030852539529LL;
	static int32_t x202 = INT32_MAX;
	int64_t x203 = -6638548499034142LL;
	int32_t x204 = -1;
	volatile int64_t t42 = 4482957LL;

	t42 = ((x201-x202)-(x203%x204));

	if (t42 != -4457033000023176LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x209 = INT16_MIN;
	int16_t x211 = 862;
	volatile uint64_t x212 = UINT64_MAX;
	uint64_t t43 = 1130781667331093331LLU;

	t43 = ((x209-x210)-(x211%x212));

	if (t43 != 18446744073709517958LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x218 = 38784635095021699LLU;
	volatile uint64_t x219 = 6213632105239939LLU;
	uint64_t t44 = 4946749LLU;

	t44 = ((x217-x218)-(x219%x220));

	if (t44 != 9184587401759510845LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MAX;
	int64_t x223 = 3243427LL;
	volatile int32_t x224 = INT32_MIN;
	int64_t t45 = 2998137LL;

	t45 = ((x221-x222)-(x223%x224));

	if (t45 != -3276322LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -1LL;
	int8_t x226 = -1;
	int32_t x227 = INT32_MIN;
	int16_t x228 = INT16_MAX;
	int64_t t46 = 7650438492LL;

	t46 = ((x225-x226)-(x227%x228));

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x229 = -1LL;
	uint32_t x230 = UINT32_MAX;
	int64_t x231 = -4882125603372LL;
	uint8_t x232 = UINT8_MAX;
	static int64_t t47 = 11445815858058LL;

	t47 = ((x229-x230)-(x231%x232));

	if (t47 != -4294967179LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x233 = 58624U;
	uint32_t x234 = 121491393U;
	static int8_t x235 = -1;
	int16_t x236 = 9678;
	volatile uint32_t t48 = 499324U;

	t48 = ((x233-x234)-(x235%x236));

	if (t48 != 4173534528U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x237 = 7574765LL;
	uint64_t x238 = 704746639LLU;
	volatile int8_t x239 = -29;
	int32_t x240 = -1;

	t49 = ((x237-x238)-(x239%x240));

	if (t49 != 18446744073012379742LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x241 = -1;
	int16_t x242 = INT16_MAX;
	static int64_t x243 = INT64_MIN;

	t50 = ((x241-x242)-(x243%x244));

	if (t50 != -32766LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x245 = UINT32_MAX;
	static int32_t x247 = -76360;
	int32_t x248 = 1480;
	uint32_t t51 = 777629U;

	t51 = ((x245-x246)-(x247%x248));

	if (t51 != 739U) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x249 = INT16_MAX;
	uint32_t x251 = 442598568U;
	volatile uint32_t t52 = 849334U;

	t52 = ((x249-x250)-(x251%x252));

	if (t52 != 32012U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x253 = 141U;
	int32_t x254 = -123787378;
	uint16_t x256 = 1U;
	int32_t t53 = -445487;

	t53 = ((x253-x254)-(x255%x256));

	if (t53 != 123787519) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x257 = INT8_MAX;
	static int64_t x258 = -556LL;
	static int32_t x259 = INT32_MIN;
	volatile uint32_t x260 = 1266U;
	static volatile int64_t t54 = 4LL;

	t54 = ((x257-x258)-(x259%x260));

	if (t54 != -81LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = 1U;
	uint8_t x262 = UINT8_MAX;
	static volatile int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile int64_t t55 = 518LL;

	t55 = ((x261-x262)-(x263%x264));

	if (t55 != -381LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x265 = INT16_MAX;
	static volatile int64_t x266 = -1LL;
	int32_t x268 = -84735777;

	t56 = ((x265-x266)-(x267%x268));

	if (t56 != -57286676LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x277 = 278309U;
	int64_t x279 = INT64_MIN;
	static uint8_t x280 = UINT8_MAX;
	int64_t t57 = 2LL;

	t57 = ((x277-x278)-(x279%x280));

	if (t57 != 273206LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x281 = INT64_MIN;
	int16_t x282 = INT16_MIN;
	static int32_t x283 = -1;
	int32_t x284 = -1;
	volatile int64_t t58 = -2230443529LL;

	t58 = ((x281-x282)-(x283%x284));

	if (t58 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x285 = INT8_MIN;
	uint64_t x287 = 5LLU;
	int32_t x288 = INT32_MIN;
	volatile uint64_t t59 = 307312252687013786LLU;

	t59 = ((x285-x286)-(x287%x288));

	if (t59 != 32635LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = -1;
	int16_t x290 = INT16_MIN;
	int32_t x292 = -108981;
	volatile int32_t t60 = -3;

	t60 = ((x289-x290)-(x291%x292));

	if (t60 != 32764) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x297 = 649537807990255137LLU;
	static volatile uint16_t x298 = 2337U;
	uint64_t x299 = 997962974052LLU;
	static int64_t x300 = 424635541195LL;

	t61 = ((x297-x298)-(x299%x300));

	if (t61 != 649537659298361138LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x302 = -5;
	static int64_t x304 = -1LL;
	int64_t t62 = -5LL;

	t62 = ((x301-x302)-(x303%x304));

	if (t62 != -32763LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x305 = -15;
	volatile uint32_t x306 = 1717409U;
	uint64_t x307 = 20038513LLU;
	int64_t x308 = INT64_MAX;
	volatile uint64_t t63 = 711219938887161550LLU;

	t63 = ((x305-x306)-(x307%x308));

	if (t63 != 4273211359LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x309 = INT32_MAX;
	static uint64_t x310 = 253302447900250554LLU;
	int64_t x311 = INT64_MIN;
	static int64_t x312 = INT64_MAX;
	static uint64_t t64 = 553170264871724474LLU;

	t64 = ((x309-x310)-(x311%x312));

	if (t64 != 18193441627956784710LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x313 = -1;
	int64_t x314 = -1LL;
	volatile int32_t x316 = -2466074;
	int64_t t65 = -1LL;

	t65 = ((x313-x314)-(x315%x316));

	if (t65 != 1221696LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	uint16_t x318 = 0U;
	int8_t x319 = INT8_MAX;
	int8_t x320 = -13;
	uint32_t t66 = 65U;

	t66 = ((x317-x318)-(x319%x320));

	if (t66 != 4294967285U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x321 = -1;
	uint64_t x322 = 197498829451809LLU;
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MAX;
	static uint64_t t67 = 1411299041933LLU;

	t67 = ((x321-x322)-(x323%x324));

	if (t67 != 18446546574880099807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x329 = -1;
	uint8_t x330 = 5U;
	uint64_t t68 = 469248465LLU;

	t68 = ((x329-x330)-(x331%x332));

	if (t68 != 18446744073709550209LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x333 = 927979U;
	int8_t x334 = INT8_MIN;
	int64_t x336 = -1LL;
	uint64_t t69 = 157845357LLU;

	t69 = ((x333-x334)-(x335%x336));

	if (t69 != 928107LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x338 = 13U;
	int8_t x339 = INT8_MAX;
	int32_t x340 = 2760573;
	volatile int32_t t70 = 1947060;

	t70 = ((x337-x338)-(x339%x340));

	if (t70 != 1227) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = -124727066;
	int8_t x343 = INT8_MIN;
	int8_t x344 = INT8_MIN;
	static int64_t t71 = -814LL;

	t71 = ((x341-x342)-(x343%x344));

	if (t71 != -124727065LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x345 = INT16_MAX;
	volatile int32_t x346 = 260110406;
	uint32_t x347 = 7219U;

	t72 = ((x345-x346)-(x347%x348));

	if (t72 != -260077639LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x349 = 30;
	volatile int32_t x350 = -1;
	int64_t x351 = 6LL;
	volatile int64_t x352 = INT64_MIN;

	t73 = ((x349-x350)-(x351%x352));

	if (t73 != 25LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x353 = -1;
	int16_t x354 = 6750;
	uint16_t x355 = 80U;
	volatile int64_t x356 = 10LL;
	volatile int64_t t74 = -17596980573323LL;

	t74 = ((x353-x354)-(x355%x356));

	if (t74 != -6751LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = 7294148324180LL;
	uint16_t x358 = 533U;
	int8_t x359 = -1;
	static int64_t x360 = 4144374394LL;

	t75 = ((x357-x358)-(x359%x360));

	if (t75 != 7294148323648LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x365 = INT16_MIN;
	static uint8_t x366 = 3U;
	static int8_t x367 = INT8_MAX;
	int16_t x368 = INT16_MAX;
	volatile int32_t t76 = -14;

	t76 = ((x365-x366)-(x367%x368));

	if (t76 != -32898) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x370 = -1151;
	int16_t x371 = -1;

	t77 = ((x369-x370)-(x371%x372));

	if (t77 != 1151LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x373 = -9777721;
	uint32_t x374 = UINT32_MAX;
	volatile int8_t x375 = 3;
	int16_t x376 = 1;
	uint32_t t78 = 817U;

	t78 = ((x373-x374)-(x375%x376));

	if (t78 != 4285189576U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x377 = -55019;
	volatile int16_t x378 = INT16_MIN;
	static int64_t x380 = INT64_MIN;
	int64_t t79 = 33742437033436LL;

	t79 = ((x377-x378)-(x379%x380));

	if (t79 != -55018LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MAX;

	t80 = ((x381-x382)-(x383%x384));

	if (t80 != 18446744068863992094LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x385 = -1;
	int8_t x387 = -3;

	t81 = ((x385-x386)-(x387%x388));

	if (t81 != 3LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x389 = INT16_MAX;
	volatile uint64_t x391 = 1787174424130969LLU;
	uint8_t x392 = 3U;
	uint64_t t82 = 2124844265895776335LLU;

	t82 = ((x389-x390)-(x391%x392));

	if (t82 != 32768LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x398 = 0;
	int16_t x400 = 518;
	static int64_t t83 = 697574679564308700LL;

	t83 = ((x397-x398)-(x399%x400));

	if (t83 != 5LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x401 = 1;
	int64_t x402 = 516LL;
	int32_t x404 = 459554149;

	t84 = ((x401-x402)-(x403%x404));

	if (t84 != -387LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x405 = -1;
	volatile int16_t x406 = -1;
	int16_t x407 = INT16_MIN;
	uint16_t x408 = UINT16_MAX;

	t85 = ((x405-x406)-(x407%x408));

	if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = INT32_MIN;
	volatile int64_t x410 = INT64_MIN;
	int16_t x412 = INT16_MIN;
	volatile int64_t t86 = -2136627LL;

	t86 = ((x409-x410)-(x411%x412));

	if (t86 != 9223372034707292152LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x413 = INT32_MIN;
	volatile int64_t x414 = -1LL;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t87 = 46143142LLU;

	t87 = ((x413-x414)-(x415%x416));

	if (t87 != 18446744071562067966LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x417 = -1;
	int64_t x419 = 1463851978LL;
	volatile int64_t t88 = 1403267937533070LL;

	t88 = ((x417-x418)-(x419%x420));

	if (t88 != -154344775LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x425 = 488U;
	volatile uint64_t x427 = 5703705042LLU;
	int16_t x428 = INT16_MIN;
	volatile uint64_t t89 = 200664LLU;

	t89 = ((x425-x426)-(x427%x428));

	if (t89 != 18446744068005847063LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = -1;
	int16_t x430 = -1;
	volatile int32_t x431 = 50;
	int32_t x432 = INT32_MAX;

	t90 = ((x429-x430)-(x431%x432));

	if (t90 != -50) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x433 = 1;
	static uint32_t x434 = 1U;
	volatile int8_t x435 = 0;
	volatile int64_t t91 = -926524729815928798LL;

	t91 = ((x433-x434)-(x435%x436));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = -1LL;
	int8_t x438 = -18;
	uint64_t x439 = 9642LLU;
	uint16_t x440 = 112U;
	uint64_t t92 = 6932632744432959LLU;

	t92 = ((x437-x438)-(x439%x440));

	if (t92 != 7LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x441 = -1LL;
	static int32_t x442 = INT32_MAX;
	volatile int16_t x444 = INT16_MIN;

	t93 = ((x441-x442)-(x443%x444));

	if (t93 != -2147483816LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x447 = 193U;
	static uint64_t x448 = 1515098726459391805LLU;

	t94 = ((x445-x446)-(x447%x448));

	if (t94 != 18446744073709551167LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x453 = 364U;
	static int32_t x454 = INT32_MAX;
	uint16_t x455 = UINT16_MAX;
	uint64_t t95 = 27981026LLU;

	t95 = ((x453-x454)-(x455%x456));

	if (t95 != 18446744071562002798LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x457 = INT8_MIN;
	volatile int64_t x458 = 4LL;
	uint8_t x459 = UINT8_MAX;
	int64_t x460 = -1LL;
	static volatile int64_t t96 = -53LL;

	t96 = ((x457-x458)-(x459%x460));

	if (t96 != -132LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x464 = -1;
	uint32_t t97 = 56232U;

	t97 = ((x461-x462)-(x463%x464));

	if (t97 != 2241529683U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x465 = 0U;
	int32_t x466 = INT32_MIN;
	volatile uint8_t x468 = 51U;
	static uint32_t t98 = 192U;

	t98 = ((x465-x466)-(x467%x468));

	if (t98 != 2147483674U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x469 = INT32_MIN;
	int32_t x470 = INT32_MIN;
	static int64_t x471 = INT64_MIN;
	uint64_t t99 = 1LLU;

	t99 = ((x469-x470)-(x471%x472));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

