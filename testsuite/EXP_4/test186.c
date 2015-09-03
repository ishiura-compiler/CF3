#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x19 = -1;
volatile int32_t t3 = 100;
uint32_t x26 = 11237U;
volatile uint64_t x33 = 42LLU;
uint16_t x34 = 13081U;
volatile uint8_t x36 = 1U;
static uint64_t t5 = 169910LLU;
uint32_t x44 = 6U;
volatile int64_t x47 = INT64_MIN;
static int8_t x48 = INT8_MIN;
static int64_t t8 = 12346307476LL;
uint64_t x54 = 2LLU;
volatile int16_t x60 = INT16_MIN;
int64_t x77 = INT64_MIN;
static uint64_t t17 = 45LLU;
static uint64_t t18 = 1784689922410153538LLU;
int16_t x97 = INT16_MIN;
static volatile int16_t x114 = INT16_MIN;
int16_t x115 = INT16_MIN;
int8_t x121 = -19;
int64_t x122 = 31322134387LL;
uint64_t x124 = 886154597098252LLU;
int16_t x125 = -1;
uint8_t x140 = 86U;
int64_t x149 = -143146145519187LL;
int32_t x152 = -1;
int64_t t30 = 77986617LL;
uint64_t x153 = 7418833492227129939LLU;
int64_t x156 = 5002380233978321LL;
static volatile uint64_t t31 = 4729723848541244LLU;
int32_t x165 = INT32_MAX;
uint32_t x168 = 7719120U;
static volatile uint32_t t33 = 1557130106U;
uint32_t x174 = 6163U;
static int16_t x177 = INT16_MIN;
uint16_t x181 = 5576U;
volatile uint32_t x182 = 1677319657U;
volatile int16_t x183 = -1;
int16_t x188 = INT16_MAX;
int64_t x211 = 1348649180LL;
int64_t x214 = INT64_MIN;
uint8_t x217 = 3U;
int32_t x234 = -28517;
uint32_t x239 = 87U;
int16_t x243 = 13;
static int32_t x244 = -10;
int16_t x249 = INT16_MAX;
uint64_t x259 = UINT64_MAX;
volatile int8_t x264 = INT8_MIN;
volatile int32_t t55 = -29;
volatile int8_t x279 = -1;
uint8_t x290 = 1U;
int16_t x291 = -1;
static volatile uint8_t x302 = 1U;
int16_t x312 = -1;
int32_t t64 = 7;
int16_t x314 = INT16_MAX;
volatile uint64_t x317 = 95061203517476LLU;
volatile uint8_t x319 = 14U;
uint64_t x325 = UINT64_MAX;
int32_t x334 = -1;
int32_t x339 = 0;
int16_t x350 = 12489;
static int16_t x354 = INT16_MAX;
static int64_t x359 = 605205618528689954LL;
int64_t t74 = -1856619228LL;
static uint64_t x361 = 883887LLU;
int32_t x365 = INT32_MIN;
int8_t x366 = 0;
int16_t x369 = 3;
volatile uint32_t t77 = 1904680414U;
uint64_t x376 = UINT64_MAX;
int64_t x395 = -61942188LL;
static uint64_t x399 = UINT64_MAX;
volatile int32_t t82 = -71202104;
volatile uint64_t t83 = 23265849587870786LLU;
volatile int8_t x410 = INT8_MIN;
static uint32_t x421 = 1887143U;
int64_t x422 = -59598669099721669LL;
uint64_t x424 = 914369242LLU;
static int8_t x426 = INT8_MIN;
int64_t x434 = 1070203497288175LL;
static volatile int32_t x450 = 0;
uint16_t x456 = UINT16_MAX;
int32_t x459 = -103076;
static uint16_t x472 = UINT16_MAX;
int64_t t95 = 1764358837658885LL;
static int16_t x473 = -1;
volatile int32_t x474 = INT32_MIN;
volatile int16_t x475 = -1;
int32_t t96 = 258704846;
volatile uint16_t x485 = 25U;
int64_t x488 = INT64_MIN;
volatile int64_t t98 = -40319LL;
int32_t x489 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = INT32_MIN;
	static int32_t x3 = -412;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 1760606LLU;

	t0 = (x1/(x2-(x3-x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 0;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = 6U;
	volatile int64_t x8 = INT64_MAX;
	int64_t t1 = 20212483526114LL;

	t1 = (x5/(x6-(x7-x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MAX;
	static int32_t x10 = INT32_MIN;
	uint32_t x11 = 244402U;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 2190387U;

	t2 = (x9/(x10-(x11-x12)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 0U;
	int16_t x18 = -1;
	int16_t x20 = INT16_MAX;

	t3 = (x17/(x18-(x19-x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = -107;
	volatile uint8_t x27 = UINT8_MAX;
	volatile uint16_t x28 = 8U;
	static volatile uint32_t t4 = 85731039U;

	t4 = (x25/(x26-(x27-x28)));

	if (t4 != 390806U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x35 = 14U;

	t5 = (x33/(x34-(x35-x36)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x37 = 33832444;
	volatile int16_t x38 = INT16_MIN;
	static uint32_t x39 = UINT32_MAX;
	uint16_t x40 = 9462U;
	volatile uint32_t t6 = 2088383U;

	t6 = (x37/(x38-(x39-x40)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	uint16_t x42 = 2U;
	int8_t x43 = -1;
	volatile uint32_t t7 = 152U;

	t7 = (x41/(x42-(x43-x44)));

	if (t7 != 477218588U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	static int32_t x46 = -1;

	t8 = (x45/(x46-(x47-x48)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = -1;
	volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = 295;
	volatile uint32_t t9 = 252578U;

	t9 = (x49/(x50-(x51-x52)));

	if (t9 != 7279605U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = 18394U;
	volatile int8_t x55 = -1;
	int8_t x56 = 1;
	uint64_t t10 = 410236619602297191LLU;

	t10 = (x53/(x54-(x55-x56)));

	if (t10 != 4598LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 0U;
	static int8_t x58 = -1;
	volatile uint32_t x59 = 108U;
	uint32_t t11 = 409446U;

	t11 = (x57/(x58-(x59-x60)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	uint16_t x62 = 22U;
	int64_t x63 = -1621535LL;
	volatile int32_t x64 = -19;
	int64_t t12 = 959860357487826470LL;

	t12 = (x61/(x62-(x63-x64)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x70 = 5U;
	uint32_t x71 = 612585U;
	static uint16_t x72 = 0U;
	volatile int64_t t13 = -37LL;

	t13 = (x69/(x70-(x71-x72)));

	if (t13 != -2147789981LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x78 = -1;
	int8_t x79 = INT8_MIN;
	volatile int64_t x80 = -6679015361LL;
	int64_t t14 = -6804133730LL;

	t14 = (x77/(x78-(x79-x80)));

	if (t14 != 1380947896LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = 5848U;
	int64_t x83 = 97LL;
	int32_t x84 = 332147989;
	volatile int64_t t15 = 25548359LL;

	t15 = (x81/(x82-(x83-x84)));

	if (t15 != -6LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x85 = 7312U;
	int16_t x86 = 84;
	int64_t x87 = -42560LL;
	int16_t x88 = INT16_MIN;
	int64_t t16 = -274LL;

	t16 = (x85/(x86-(x87-x88)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = 1U;
	uint32_t x90 = 18425U;
	uint64_t x91 = UINT64_MAX;
	volatile uint64_t x92 = 1379121LLU;

	t17 = (x89/(x90-(x91-x92)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x93 = -72LL;
	static uint32_t x94 = UINT32_MAX;
	volatile uint64_t x95 = UINT64_MAX;
	int32_t x96 = -1;

	t18 = (x93/(x94-(x95-x96)));

	if (t18 != 4294967296LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x98 = INT8_MAX;
	static volatile uint32_t x99 = 187756315U;
	static int8_t x100 = -1;
	volatile uint32_t t19 = 848992310U;

	t19 = (x97/(x98-(x99-x100)));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x105 = INT8_MIN;
	uint32_t x106 = UINT32_MAX;
	uint8_t x107 = 108U;
	volatile int64_t x108 = -1LL;
	volatile int64_t t20 = 4065977407960339LL;

	t20 = (x105/(x106-(x107-x108)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x109 = -10;
	uint32_t x110 = 12494U;
	int16_t x111 = INT16_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t21 = 61546999930LLU;

	t21 = (x109/(x110-(x111-x112)));

	if (t21 != 407563776180587LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x113 = 32U;
	int16_t x116 = INT16_MAX;
	volatile int32_t t22 = -944938516;

	t22 = (x113/(x114-(x115-x116)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = 23;
	volatile uint64_t x118 = UINT64_MAX;
	int8_t x119 = INT8_MIN;
	int32_t x120 = INT32_MIN;
	uint64_t t23 = 7715712038062397LLU;

	t23 = (x117/(x118-(x119-x120)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x123 = INT64_MAX;
	volatile uint64_t t24 = 865875086277412559LLU;

	t24 = (x121/(x122-(x123-x124)));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x126 = INT32_MIN;
	uint32_t x127 = 48691921U;
	volatile int8_t x128 = INT8_MIN;
	uint32_t t25 = 7U;

	t25 = (x125/(x126-(x127-x128)));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MAX;
	uint32_t x135 = 1894157825U;
	int8_t x136 = INT8_MIN;
	volatile uint32_t t26 = 256U;

	t26 = (x133/(x134-(x135-x136)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x137 = INT64_MIN;
	uint64_t x138 = 1488953315LLU;
	static int16_t x139 = -716;
	volatile uint64_t t27 = 15317314509LLU;

	t27 = (x137/(x138-(x139-x140)));

	if (t27 != 6194530732LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x141 = -1;
	int32_t x142 = -1;
	int16_t x143 = INT16_MAX;
	int64_t x144 = -132372940402478940LL;
	volatile int64_t t28 = -1LL;

	t28 = (x141/(x142-(x143-x144)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = INT32_MIN;
	volatile int32_t x146 = -54092;
	uint16_t x147 = 20762U;
	uint8_t x148 = 1U;
	int32_t t29 = -208;

	t29 = (x145/(x146-(x147-x148)));

	if (t29 != 28689) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x150 = -1;
	static volatile int32_t x151 = -1;

	t30 = (x149/(x150-(x151-x152)));

	if (t30 != 143146145519187LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x154 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;

	t31 = (x153/(x154-(x155-x156)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = 43LL;
	int16_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	volatile int64_t x160 = INT64_MAX;
	uint64_t t32 = 10126764988470536LLU;

	t32 = (x157/(x158-(x159-x160)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MIN;

	t33 = (x165/(x166-(x167-x168)));

	if (t33 != 274U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = -1LL;
	int32_t x170 = 3663439;
	volatile uint32_t x171 = UINT32_MAX;
	int64_t x172 = -1LL;
	volatile int64_t t34 = 16123415LL;

	t34 = (x169/(x170-(x171-x172)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = 1U;
	int64_t x175 = 83LL;
	static int32_t x176 = INT32_MIN;
	int64_t t35 = 0LL;

	t35 = (x173/(x174-(x175-x176)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x178 = -15;
	static uint32_t x179 = 383778976U;
	volatile uint8_t x180 = UINT8_MAX;
	volatile uint32_t t36 = 37346752U;

	t36 = (x177/(x178-(x179-x180)));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x184 = UINT16_MAX;
	uint32_t t37 = 774U;

	t37 = (x181/(x182-(x183-x184)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x185 = -56664046617712LL;
	static uint16_t x186 = UINT16_MAX;
	uint32_t x187 = UINT32_MAX;
	int64_t t38 = -936016217401331LL;

	t38 = (x185/(x186-(x187-x188)));

	if (t38 != -576422353LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x189 = 743041LL;
	int64_t x190 = -1LL;
	int16_t x191 = INT16_MIN;
	int8_t x192 = -5;
	int64_t t39 = 92LL;

	t39 = (x189/(x190-(x191-x192)));

	if (t39 != 22LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	static uint64_t x199 = 30181285702129576LLU;
	uint16_t x200 = UINT16_MAX;
	volatile uint64_t t40 = 84804322247738303LLU;

	t40 = (x197/(x198-(x199-x200)));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x201 = INT8_MAX;
	int32_t x202 = -1;
	uint32_t x203 = UINT32_MAX;
	int32_t x204 = -1;
	uint32_t t41 = 155336U;

	t41 = (x201/(x202-(x203-x204)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = -1;
	int64_t x210 = -1LL;
	int32_t x212 = INT32_MIN;
	volatile int64_t t42 = -303194065880LL;

	t42 = (x209/(x210-(x211-x212)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x213 = 1345919607266338565LL;
	static int16_t x215 = -1;
	int64_t x216 = 93480187LL;
	int64_t t43 = 81157431LL;

	t43 = (x213/(x214-(x215-x216)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x218 = 51U;
	int64_t x219 = INT64_MIN;
	int8_t x220 = INT8_MIN;
	static volatile int64_t t44 = -447442LL;

	t44 = (x217/(x218-(x219-x220)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x221 = 318183341U;
	int8_t x222 = -1;
	uint32_t x223 = 105913U;
	uint64_t x224 = 102622837894161LLU;
	volatile uint64_t t45 = 1LLU;

	t45 = (x221/(x222-(x223-x224)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = -1;
	static int64_t x230 = -10328457395575LL;
	static int8_t x231 = 0;
	volatile int8_t x232 = INT8_MAX;
	int64_t t46 = 32374008155LL;

	t46 = (x229/(x230-(x231-x232)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = -5;
	static int64_t x235 = INT64_MIN;
	static int8_t x236 = -1;
	volatile int64_t t47 = -27897809LL;

	t47 = (x233/(x234-(x235-x236)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x237 = -1;
	int16_t x238 = INT16_MIN;
	static int64_t x240 = INT64_MAX;
	int64_t t48 = 209957222829LL;

	t48 = (x237/(x238-(x239-x240)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x241 = UINT8_MAX;
	uint8_t x242 = 1U;
	static volatile int32_t t49 = -739;

	t49 = (x241/(x242-(x243-x244)));

	if (t49 != -11) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x245 = UINT8_MAX;
	static volatile int8_t x246 = INT8_MIN;
	volatile int16_t x247 = -1;
	int64_t x248 = 342245104750792521LL;
	volatile int64_t t50 = 35009070343412905LL;

	t50 = (x245/(x246-(x247-x248)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x250 = INT64_MIN;
	volatile int8_t x251 = -1;
	static int16_t x252 = INT16_MAX;
	static volatile int64_t t51 = -263004834592LL;

	t51 = (x249/(x250-(x251-x252)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MAX;
	int64_t x254 = -97563LL;
	uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MIN;
	int64_t t52 = 44085456676LL;

	t52 = (x253/(x254-(x255-x256)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x257 = 45011018LLU;
	static int8_t x258 = INT8_MIN;
	volatile uint32_t x260 = UINT32_MAX;
	volatile uint64_t t53 = 11357923223LLU;

	t53 = (x257/(x258-(x259-x260)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x261 = -222549LL;
	uint32_t x262 = UINT32_MAX;
	static uint32_t x263 = 0U;
	volatile int64_t t54 = -8551294082455700LL;

	t54 = (x261/(x262-(x263-x264)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x269 = -59;
	static uint16_t x270 = 2836U;
	volatile int8_t x271 = -13;
	int8_t x272 = INT8_MAX;

	t55 = (x269/(x270-(x271-x272)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x273 = INT64_MIN;
	static int16_t x274 = -1;
	static int8_t x275 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	volatile int64_t t56 = -231090486947307863LL;

	t56 = (x273/(x274-(x275-x276)));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = UINT64_MAX;
	uint64_t x278 = UINT64_MAX;
	volatile int64_t x280 = 179LL;
	static volatile uint64_t t57 = 160251141643187LLU;

	t57 = (x277/(x278-(x279-x280)));

	if (t57 != 103054436165975148LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = INT16_MIN;
	uint16_t x282 = 1350U;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = 0U;
	int32_t t58 = 574550;

	t58 = (x281/(x282-(x283-x284)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x285 = INT64_MAX;
	uint16_t x286 = 0U;
	uint8_t x287 = 115U;
	int16_t x288 = -25;
	volatile int64_t t59 = 173648219763357258LL;

	t59 = (x285/(x286-(x287-x288)));

	if (t59 != -65881228834676970LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = INT8_MIN;
	int64_t x292 = -1LL;
	volatile int64_t t60 = -3278068961261476379LL;

	t60 = (x289/(x290-(x291-x292)));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	static volatile int8_t x294 = -1;
	int32_t x295 = 23;
	int64_t x296 = 111LL;
	volatile int64_t t61 = -19082LL;

	t61 = (x293/(x294-(x295-x296)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MAX;
	int16_t x298 = INT16_MAX;
	uint8_t x299 = 0U;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t62 = 6599;

	t62 = (x297/(x298-(x299-x300)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x301 = -325;
	volatile uint32_t x303 = 547517851U;
	int16_t x304 = -3;
	uint32_t t63 = 225727U;

	t63 = (x301/(x302-(x303-x304)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = -458;
	volatile uint16_t x310 = 1741U;
	int8_t x311 = -1;

	t64 = (x309/(x310-(x311-x312)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x313 = INT16_MIN;
	int16_t x315 = 121;
	int64_t x316 = 15254924932422LL;
	volatile int64_t t65 = -240LL;

	t65 = (x313/(x314-(x315-x316)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x318 = 98026574324LLU;
	uint32_t x320 = 658479U;
	static uint64_t t66 = 126959682651LLU;

	t66 = (x317/(x318-(x319-x320)));

	if (t66 != 1014LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 4U;
	int8_t x322 = -4;
	int16_t x323 = -25;
	int16_t x324 = -1;
	int32_t t67 = -1550628;

	t67 = (x321/(x322-(x323-x324)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x326 = -1;
	volatile int32_t x327 = 214909645;
	volatile int8_t x328 = -1;
	static volatile uint64_t t68 = 86907903636LLU;

	t68 = (x325/(x326-(x327-x328)));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x333 = INT16_MIN;
	volatile int8_t x335 = INT8_MAX;
	static int8_t x336 = -46;
	int32_t t69 = 2203768;

	t69 = (x333/(x334-(x335-x336)));

	if (t69 != 188) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x337 = 9278LLU;
	static volatile uint64_t x338 = 13788836805LLU;
	uint8_t x340 = UINT8_MAX;
	uint64_t t70 = 284759LLU;

	t70 = (x337/(x338-(x339-x340)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	static int8_t x343 = 6;
	static uint64_t x344 = 192LLU;
	static uint64_t t71 = 1046982LLU;

	t71 = (x341/(x342-(x343-x344)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x349 = -41;
	volatile int32_t x351 = INT32_MAX;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t72 = 590910558497LLU;

	t72 = (x349/(x350-(x351-x352)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x353 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	int64_t x356 = 4616LL;
	volatile int64_t t73 = -2807191847005577945LL;

	t73 = (x353/(x354-(x355-x356)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = INT8_MIN;
	int8_t x358 = INT8_MAX;
	volatile int64_t x360 = 1206800LL;

	t74 = (x357/(x358-(x359-x360)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x362 = 6LLU;
	uint64_t x363 = UINT64_MAX;
	int64_t x364 = INT64_MIN;
	static volatile uint64_t t75 = 2792272574470424567LLU;

	t75 = (x361/(x362-(x363-x364)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x367 = -13823;
	int64_t x368 = 2482LL;
	static int64_t t76 = -2283086769913994374LL;

	t76 = (x365/(x366-(x367-x368)));

	if (t76 != -131707LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x370 = INT16_MIN;
	uint32_t x371 = UINT32_MAX;
	volatile uint32_t x372 = UINT32_MAX;

	t77 = (x369/(x370-(x371-x372)));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x373 = 41;
	int16_t x374 = INT16_MAX;
	static uint8_t x375 = 25U;
	static volatile uint64_t t78 = 1226LLU;

	t78 = (x373/(x374-(x375-x376)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x389 = 2;
	uint16_t x390 = UINT16_MAX;
	int8_t x391 = -1;
	uint16_t x392 = 6867U;
	volatile int32_t t79 = -11;

	t79 = (x389/(x390-(x391-x392)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = INT16_MIN;
	int8_t x394 = 0;
	int64_t x396 = -4296238LL;
	int64_t t80 = 8083LL;

	t80 = (x393/(x394-(x395-x396)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 3U;
	int64_t x400 = INT64_MAX;
	uint64_t t81 = 1697LLU;

	t81 = (x397/(x398-(x399-x400)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x401 = INT32_MAX;
	volatile int16_t x402 = -1;
	int32_t x403 = -1;
	static volatile int8_t x404 = -1;

	t82 = (x401/(x402-(x403-x404)));

	if (t82 != -2147483647) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = INT32_MAX;
	uint64_t x406 = UINT64_MAX;
	static uint8_t x407 = 11U;
	int32_t x408 = 572902036;

	t83 = (x405/(x406-(x407-x408)));

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = INT32_MIN;
	int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	static volatile int32_t t84 = -15934486;

	t84 = (x409/(x410-(x411-x412)));

	if (t84 != 16777216) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x413 = INT8_MAX;
	volatile int16_t x414 = -1;
	uint32_t x415 = 265720933U;
	static int8_t x416 = INT8_MIN;
	volatile uint32_t t85 = 28336295U;

	t85 = (x413/(x414-(x415-x416)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x423 = INT16_MAX;
	uint64_t t86 = 2028544150LLU;

	t86 = (x421/(x422-(x423-x424)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = 3;
	int64_t x427 = INT64_MAX;
	uint32_t x428 = 1945U;
	volatile int64_t t87 = -86080743005556LL;

	t87 = (x425/(x426-(x427-x428)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x429 = INT16_MIN;
	int16_t x430 = INT16_MIN;
	static volatile uint16_t x431 = 25921U;
	uint16_t x432 = UINT16_MAX;
	static int32_t t88 = 368375966;

	t88 = (x429/(x430-(x431-x432)));

	if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x433 = -6;
	int16_t x435 = -183;
	volatile uint64_t x436 = 9456377082764581LLU;
	volatile uint64_t t89 = 2969284LLU;

	t89 = (x433/(x434-(x435-x436)));

	if (t89 != 1752LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x441 = UINT64_MAX;
	int32_t x442 = INT32_MIN;
	int8_t x443 = INT8_MAX;
	int8_t x444 = INT8_MAX;
	uint64_t t90 = 17992430LLU;

	t90 = (x441/(x442-(x443-x444)));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x449 = 445423LLU;
	static int64_t x451 = INT64_MIN;
	static int32_t x452 = -1;
	volatile uint64_t t91 = 1LLU;

	t91 = (x449/(x450-(x451-x452)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x453 = -3815;
	uint32_t x454 = 7U;
	int16_t x455 = INT16_MIN;
	volatile uint32_t t92 = 73451837U;

	t92 = (x453/(x454-(x455-x456)));

	if (t92 != 43687U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x457 = 1839405010LL;
	volatile int64_t x458 = -35165151792446LL;
	volatile int16_t x460 = -1;
	volatile int64_t t93 = 182042LL;

	t93 = (x457/(x458-(x459-x460)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x465 = -1LL;
	volatile int64_t x466 = INT64_MIN;
	int64_t x467 = -5301062265LL;
	volatile int16_t x468 = INT16_MIN;
	static int64_t t94 = 784505249683522LL;

	t94 = (x465/(x466-(x467-x468)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x469 = 13939011235LL;
	int16_t x470 = INT16_MIN;
	volatile int8_t x471 = INT8_MIN;

	t95 = (x469/(x470-(x471-x472)));

	if (t95 != 423742LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x476 = 1;

	t96 = (x473/(x474-(x475-x476)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x481 = UINT32_MAX;
	uint32_t x482 = 916182150U;
	uint32_t x483 = 4U;
	uint16_t x484 = 1U;
	volatile uint32_t t97 = 5101U;

	t97 = (x481/(x482-(x483-x484)));

	if (t97 != 4U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x486 = INT64_MAX;
	volatile int32_t x487 = INT32_MIN;

	t98 = (x485/(x486-(x487-x488)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x490 = INT8_MIN;
	int16_t x491 = -5;
	uint8_t x492 = 5U;
	static int32_t t99 = 1;

	t99 = (x489/(x490-(x491-x492)));

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

