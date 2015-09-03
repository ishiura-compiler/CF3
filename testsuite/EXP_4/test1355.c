#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = -1;
static uint8_t x9 = 1U;
int32_t t1 = -300741955;
static uint32_t t2 = 493U;
uint16_t x26 = 3897U;
int32_t t4 = 60683944;
uint32_t x37 = UINT32_MAX;
int64_t x39 = INT64_MAX;
int16_t x44 = INT16_MIN;
int32_t t7 = 29;
static uint8_t x53 = 19U;
uint16_t x56 = UINT16_MAX;
static int8_t x61 = INT8_MAX;
uint16_t x63 = 0U;
uint64_t x67 = UINT64_MAX;
volatile int32_t t11 = 6;
int64_t x71 = INT64_MIN;
int16_t x73 = INT16_MAX;
uint8_t x74 = 4U;
int32_t x76 = INT32_MAX;
int32_t t14 = 63964417;
volatile uint64_t x85 = UINT64_MAX;
int32_t x91 = INT32_MIN;
uint16_t x92 = 16165U;
uint32_t x97 = 73476U;
int16_t x98 = INT16_MIN;
int16_t x100 = 8;
int32_t x103 = -1;
int8_t x112 = INT8_MIN;
volatile uint32_t t20 = 32351791U;
uint32_t x115 = UINT32_MAX;
volatile int32_t t21 = -100;
volatile int8_t x119 = INT8_MAX;
volatile uint64_t x123 = UINT64_MAX;
volatile uint64_t x148 = 183301285279144LLU;
volatile int32_t x160 = -1;
uint64_t x163 = 2742309LLU;
int64_t t29 = -881880900411381LL;
int8_t x167 = -1;
uint8_t x183 = 106U;
volatile int16_t x184 = INT16_MIN;
int32_t t31 = -31;
uint64_t x189 = UINT64_MAX;
int32_t x192 = INT32_MIN;
static int8_t x195 = INT8_MIN;
uint32_t x196 = UINT32_MAX;
int16_t x201 = INT16_MIN;
uint16_t x214 = 28675U;
int32_t x233 = -31295378;
int32_t x235 = -1437572;
uint8_t x238 = 1U;
uint64_t x241 = UINT64_MAX;
volatile int8_t x242 = INT8_MIN;
int64_t x252 = INT64_MAX;
int64_t x259 = 38756LL;
volatile uint64_t t46 = 88124886727LLU;
static volatile int8_t x277 = 43;
uint32_t x278 = UINT32_MAX;
volatile uint32_t t48 = 141776258U;
volatile int16_t x281 = 0;
int8_t x283 = INT8_MIN;
int8_t x284 = -1;
int64_t x293 = 324173678728LL;
int64_t x295 = 61827LL;
uint64_t x298 = 4651LLU;
volatile int64_t x304 = INT64_MIN;
static uint64_t x320 = 1941958641100284523LLU;
uint64_t t55 = 5LLU;
int16_t x321 = INT16_MAX;
static int64_t x323 = INT64_MIN;
int16_t x331 = 0;
int32_t t58 = 665868;
int32_t x334 = -1;
uint32_t x337 = UINT32_MAX;
static int32_t x341 = INT32_MAX;
volatile int32_t x348 = -1;
static int64_t x350 = -1697024LL;
uint64_t x351 = 478358786905LLU;
volatile int64_t t63 = 59462559LL;
uint64_t x355 = UINT64_MAX;
volatile uint64_t x358 = 7289230785LLU;
int8_t x377 = INT8_MAX;
volatile int32_t t68 = -14;
uint64_t x396 = 2LLU;
static int16_t x408 = INT16_MIN;
volatile int8_t x429 = 1;
static int8_t x431 = INT8_MIN;
uint16_t x437 = 147U;
static int64_t x448 = INT64_MIN;
volatile int32_t t78 = -1839610;
int64_t x449 = -1LL;
uint8_t x453 = 79U;
volatile uint64_t x454 = UINT64_MAX;
int16_t x472 = INT16_MIN;
static int8_t x478 = -31;
int16_t x483 = INT16_MIN;
volatile int32_t t85 = 9585;
static uint32_t x490 = UINT32_MAX;
int64_t x503 = INT64_MIN;
volatile uint32_t x504 = UINT32_MAX;
static int8_t x508 = INT8_MIN;
int64_t x510 = 51661706527LL;
uint64_t x528 = UINT64_MAX;
int8_t x551 = INT8_MAX;
int16_t x560 = INT16_MIN;
int64_t x564 = INT64_MIN;


void f0(void) {
	static uint32_t x1 = 38458U;
	static int16_t x2 = INT16_MIN;
	volatile int16_t x4 = -10;
	volatile uint32_t t0 = 1099601717U;

	t0 = (x1*(x2+(x3<x4)));

	if (t0 != 3034775552U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	static uint64_t x11 = UINT64_MAX;
	static volatile int8_t x12 = 1;

	t1 = (x9*(x10+(x11<x12)));

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = 104U;
	int16_t x15 = -1;
	static uint8_t x16 = 0U;

	t2 = (x13*(x14+(x15<x16)));

	if (t2 != 2147483543U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x21 = 29496584U;
	int8_t x22 = 5;
	int32_t x23 = INT32_MAX;
	static uint16_t x24 = UINT16_MAX;
	volatile uint32_t t3 = 2U;

	t3 = (x21*(x22+(x23<x24)));

	if (t3 != 147482920U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = 9;
	uint64_t x27 = 3LLU;
	static volatile int8_t x28 = INT8_MAX;

	t4 = (x25*(x26+(x27<x28)));

	if (t4 != 35082) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = UINT64_MAX;
	volatile int32_t x34 = 0;
	static int64_t x35 = INT64_MIN;
	int8_t x36 = -1;
	static uint64_t t5 = UINT64_MAX;

	t5 = (x33*(x34+(x35<x36)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = -1;
	volatile uint32_t x40 = UINT32_MAX;
	uint32_t t6 = 174886783U;

	t6 = (x37*(x38+(x39<x40)));

	if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	volatile int8_t x42 = 10;
	uint16_t x43 = UINT16_MAX;

	t7 = (x41*(x42+(x43<x44)));

	if (t7 != -1280) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x54 = -1;
	int16_t x55 = INT16_MIN;
	volatile int32_t t8 = -78426;

	t8 = (x53*(x54+(x55<x56)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x57 = -3;
	int16_t x58 = 563;
	int64_t x59 = INT64_MAX;
	int8_t x60 = -62;
	int32_t t9 = 17066;

	t9 = (x57*(x58+(x59<x60)));

	if (t9 != -1689) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x62 = INT16_MIN;
	static uint64_t x64 = 782175701558753LLU;
	int32_t t10 = 728812;

	t10 = (x61*(x62+(x63<x64)));

	if (t10 != -4161409) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x65 = 1U;
	static uint8_t x66 = 124U;
	static int32_t x68 = INT32_MIN;

	t11 = (x65*(x66+(x67<x68)));

	if (t11 != 124) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -1;
	volatile int64_t x70 = 92020891192LL;
	volatile int64_t x72 = INT64_MAX;
	static volatile int64_t t12 = -103666LL;

	t12 = (x69*(x70+(x71<x72)));

	if (t12 != -92020891193LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x75 = INT8_MIN;
	volatile int32_t t13 = 46244261;

	t13 = (x73*(x74+(x75<x76)));

	if (t13 != 163835) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x81 = UINT16_MAX;
	static int8_t x82 = 0;
	static int8_t x83 = INT8_MAX;
	static volatile uint16_t x84 = 241U;

	t14 = (x81*(x82+(x83<x84)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x86 = 1U;
	int16_t x87 = INT16_MIN;
	volatile int8_t x88 = INT8_MIN;
	uint64_t t15 = 4412630273834689LLU;

	t15 = (x85*(x86+(x87<x88)));

	if (t15 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x89 = INT16_MAX;
	int8_t x90 = INT8_MIN;
	int32_t t16 = 145588;

	t16 = (x89*(x90+(x91<x92)));

	if (t16 != -4161409) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x99 = 8420490;
	volatile uint32_t t17 = 98751U;

	t17 = (x97*(x98+(x99<x100)));

	if (t17 != 1887305728U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x101 = 7;
	uint16_t x102 = 97U;
	static int16_t x104 = INT16_MIN;
	volatile int32_t t18 = -266;

	t18 = (x101*(x102+(x103<x104)));

	if (t18 != 679) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x105 = 0U;
	static uint8_t x106 = UINT8_MAX;
	int32_t x107 = INT32_MIN;
	int16_t x108 = -1;
	int32_t t19 = 1;

	t19 = (x105*(x106+(x107<x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x109 = UINT32_MAX;
	volatile uint32_t x110 = 52U;
	int8_t x111 = 12;

	t20 = (x109*(x110+(x111<x112)));

	if (t20 != 4294967244U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x113 = 3049U;
	uint8_t x114 = UINT8_MAX;
	uint8_t x116 = UINT8_MAX;

	t21 = (x113*(x114+(x115<x116)));

	if (t21 != 777495) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = -1;
	static uint8_t x118 = UINT8_MAX;
	volatile int64_t x120 = INT64_MIN;
	volatile int32_t t22 = 8295;

	t22 = (x117*(x118+(x119<x120)));

	if (t22 != -255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x121 = 7U;
	volatile uint64_t x122 = UINT64_MAX;
	int64_t x124 = -1LL;
	uint64_t t23 = 33719566993733593LLU;

	t23 = (x121*(x122+(x123<x124)));

	if (t23 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x125 = INT16_MIN;
	static int64_t x126 = -10706969342LL;
	int16_t x127 = 0;
	static uint8_t x128 = UINT8_MAX;
	int64_t t24 = -291994839701377882LL;

	t24 = (x125*(x126+(x127<x128)));

	if (t24 != 350845971365888LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x129 = -1;
	int16_t x130 = -1;
	int64_t x131 = INT64_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t25 = 56476838;

	t25 = (x129*(x130+(x131<x132)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x141 = 1;
	volatile int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	static uint32_t x144 = 889289190U;
	volatile int64_t t26 = -5501LL;

	t26 = (x141*(x142+(x143<x144)));

	if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MAX;
	int8_t x146 = -37;
	static int32_t x147 = -221;
	volatile int32_t t27 = -1;

	t27 = (x145*(x146+(x147<x148)));

	if (t27 != -1212379) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = INT16_MAX;
	int64_t x159 = INT64_MAX;
	int32_t t28 = 30767606;

	t28 = (x157*(x158+(x159<x160)));

	if (t28 != -4194176) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x161 = -1LL;
	uint8_t x162 = UINT8_MAX;
	static int16_t x164 = INT16_MIN;

	t29 = (x161*(x162+(x163<x164)));

	if (t29 != -256LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = INT8_MAX;
	volatile uint8_t x166 = 1U;
	int8_t x168 = INT8_MIN;
	static int32_t t30 = 46158931;

	t30 = (x165*(x166+(x167<x168)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x181 = INT8_MAX;
	static int16_t x182 = INT16_MIN;

	t31 = (x181*(x182+(x183<x184)));

	if (t31 != -4161536) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x190 = 1845988113U;
	volatile int8_t x191 = -1;
	static volatile uint64_t t32 = 15607937LLU;

	t32 = (x189*(x190+(x191<x192)));

	if (t32 != 18446744071863563503LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -8;
	int32_t t33 = -1041711876;

	t33 = (x193*(x194+(x195<x196)));

	if (t33 != 229376) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x202 = UINT16_MAX;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t34 = 3;

	t34 = (x201*(x202+(x203<x204)));

	if (t34 != -2147450880) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x209 = 3U;
	int8_t x210 = INT8_MAX;
	static uint32_t x211 = 26113U;
	uint64_t x212 = 3797329070003LLU;
	volatile uint32_t t35 = 3U;

	t35 = (x209*(x210+(x211<x212)));

	if (t35 != 384U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x213 = UINT32_MAX;
	static int16_t x215 = -1;
	int16_t x216 = 1;
	volatile uint32_t t36 = 338649U;

	t36 = (x213*(x214+(x215<x216)));

	if (t36 != 4294938620U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = 3281;
	int32_t x219 = INT32_MAX;
	int8_t x220 = 0;
	int32_t t37 = 962889865;

	t37 = (x217*(x218+(x219<x220)));

	if (t37 != -419968) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x225 = -1;
	static int32_t x226 = INT32_MIN;
	static uint32_t x227 = 119958160U;
	volatile int8_t x228 = -1;
	volatile int32_t t38 = INT32_MAX;

	t38 = (x225*(x226+(x227<x228)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x234 = 9U;
	int32_t x236 = INT32_MIN;
	static volatile int32_t t39 = -22;

	t39 = (x233*(x234+(x235<x236)));

	if (t39 != -281658402) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x237 = 3;
	uint32_t x239 = 4U;
	uint8_t x240 = UINT8_MAX;
	volatile int32_t t40 = 1;

	t40 = (x237*(x238+(x239<x240)));

	if (t40 != 6) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x243 = INT8_MIN;
	int64_t x244 = -1LL;
	uint64_t t41 = 19139128757LLU;

	t41 = (x241*(x242+(x243<x244)));

	if (t41 != 127LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x245 = 1U;
	static int64_t x246 = -1LL;
	static int16_t x247 = -1;
	int64_t x248 = INT64_MAX;
	volatile int64_t t42 = -1099077434210024285LL;

	t42 = (x245*(x246+(x247<x248)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x249 = INT16_MIN;
	uint16_t x250 = UINT16_MAX;
	static int64_t x251 = INT64_MIN;
	volatile int32_t t43 = INT32_MIN;

	t43 = (x249*(x250+(x251<x252)));

	if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x253 = 16638U;
	uint16_t x254 = 6U;
	int32_t x255 = INT32_MIN;
	uint8_t x256 = 5U;
	int32_t t44 = -1259;

	t44 = (x253*(x254+(x255<x256)));

	if (t44 != 116466) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x257 = INT8_MAX;
	uint8_t x258 = UINT8_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t45 = -86957;

	t45 = (x257*(x258+(x259<x260)));

	if (t45 != 32385) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x261 = 915526220LLU;
	static int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	int16_t x264 = INT16_MIN;

	t46 = (x261*(x262+(x263<x264)));

	if (t46 != 18446743956522195456LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x273 = UINT64_MAX;
	int64_t x274 = -1LL;
	volatile int16_t x275 = -1;
	volatile uint32_t x276 = 610436U;
	volatile uint64_t t47 = 13767740346053811LLU;

	t47 = (x273*(x274+(x275<x276)));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x279 = -13704;
	int64_t x280 = -76675261959097428LL;

	t48 = (x277*(x278+(x279<x280)));

	if (t48 != 4294967253U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x282 = INT16_MIN;
	static volatile int32_t t49 = 1023;

	t49 = (x281*(x282+(x283<x284)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x289 = 27U;
	uint16_t x290 = UINT16_MAX;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t50 = -1886;

	t50 = (x289*(x290+(x291<x292)));

	if (t50 != 1769472) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x294 = -21499101;
	volatile uint8_t x296 = 4U;
	int64_t t51 = -32416991LL;

	t51 = (x293*(x294+(x295<x296)));

	if (t51 != -6969442660514823528LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x297 = 49;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = -1;
	static volatile uint64_t t52 = 504729LLU;

	t52 = (x297*(x298+(x299<x300)));

	if (t52 != 227899LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int64_t x302 = -2036313430943895LL;
	uint16_t x303 = 3U;
	volatile uint64_t t53 = 26117945021474LLU;

	t53 = (x301*(x302+(x303<x304)));

	if (t53 != 2036313430943895LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x313 = -1LL;
	uint16_t x314 = 23U;
	static uint8_t x315 = 2U;
	uint8_t x316 = UINT8_MAX;
	volatile int64_t t54 = -2081301057755724043LL;

	t54 = (x313*(x314+(x315<x316)));

	if (t54 != -24LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x317 = 1338LLU;
	int32_t x318 = 342446891;
	int16_t x319 = INT16_MIN;

	t55 = (x317*(x318+(x319<x320)));

	if (t55 != 458193940158LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x322 = 2U;
	uint8_t x324 = 18U;
	volatile int32_t t56 = -1364;

	t56 = (x321*(x322+(x323<x324)));

	if (t56 != 98301) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x325 = INT32_MIN;
	static int8_t x326 = -1;
	static int16_t x327 = INT16_MIN;
	uint16_t x328 = 0U;
	volatile int32_t t57 = 1;

	t57 = (x325*(x326+(x327<x328)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x329 = -3484;
	uint16_t x330 = 2U;
	volatile uint64_t x332 = 1705LLU;

	t58 = (x329*(x330+(x331<x332)));

	if (t58 != -10452) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x333 = -19;
	volatile uint8_t x335 = 23U;
	uint64_t x336 = UINT64_MAX;
	static volatile int32_t t59 = 8926;

	t59 = (x333*(x334+(x335<x336)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x338 = 0LL;
	volatile int8_t x339 = -28;
	volatile uint16_t x340 = UINT16_MAX;
	volatile int64_t t60 = 2444911803314957454LL;

	t60 = (x337*(x338+(x339<x340)));

	if (t60 != 4294967295LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x342 = -1;
	int8_t x343 = INT8_MAX;
	volatile int16_t x344 = INT16_MIN;
	int32_t t61 = -74313489;

	t61 = (x341*(x342+(x343<x344)));

	if (t61 != -2147483647) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = 82387222LL;
	volatile int16_t x347 = INT16_MIN;
	int64_t t62 = -15271692906947LL;

	t62 = (x345*(x346+(x347<x348)));

	if (t62 != 10463177321LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x349 = 2575U;
	volatile int8_t x352 = -1;

	t63 = (x349*(x350+(x351<x352)));

	if (t63 != -4369834225LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x353 = 845504;
	int8_t x354 = -1;
	static int8_t x356 = -1;
	static int32_t t64 = 837;

	t64 = (x353*(x354+(x355<x356)));

	if (t64 != -845504) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x357 = INT64_MAX;
	int64_t x359 = -1LL;
	uint16_t x360 = 1U;
	uint64_t t65 = 11022566367523LLU;

	t65 = (x357*(x358+(x359<x360)));

	if (t65 != 18446744066420320830LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x361 = INT16_MAX;
	int16_t x362 = INT16_MIN;
	volatile int32_t x363 = INT32_MIN;
	static uint64_t x364 = 374041LLU;
	int32_t t66 = 3;

	t66 = (x361*(x362+(x363<x364)));

	if (t66 != -1073709056) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x369 = 8;
	volatile uint8_t x370 = UINT8_MAX;
	int64_t x371 = INT64_MIN;
	int32_t x372 = 242492420;
	int32_t t67 = -78344879;

	t67 = (x369*(x370+(x371<x372)));

	if (t67 != 2048) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x378 = -1;
	static int32_t x379 = INT32_MIN;
	static int16_t x380 = -1;

	t68 = (x377*(x378+(x379<x380)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = -65LL;
	uint8_t x383 = 14U;
	int32_t x384 = INT32_MIN;
	static volatile int64_t t69 = 15512230LL;

	t69 = (x381*(x382+(x383<x384)));

	if (t69 != 8320LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x385 = -1;
	int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MAX;
	int32_t x388 = 3;
	static volatile int32_t t70 = 662;

	t70 = (x385*(x386+(x387<x388)));

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x389 = UINT8_MAX;
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MIN;
	static volatile int32_t x392 = 1;
	int32_t t71 = 323;

	t71 = (x389*(x390+(x391<x392)));

	if (t71 != -32385) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x393 = INT32_MAX;
	int64_t x394 = -3LL;
	int64_t x395 = INT64_MAX;
	int64_t t72 = -190969914826LL;

	t72 = (x393*(x394+(x395<x396)));

	if (t72 != -6442450941LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x401 = 25;
	int64_t x402 = -1LL;
	uint32_t x403 = 253786749U;
	int16_t x404 = INT16_MIN;
	volatile int64_t t73 = 30698LL;

	t73 = (x401*(x402+(x403<x404)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x405 = 4U;
	uint8_t x406 = 20U;
	static int64_t x407 = -25400984467417245LL;
	static int32_t t74 = -159014043;

	t74 = (x405*(x406+(x407<x408)));

	if (t74 != 84) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x409 = 13U;
	int32_t x410 = 0;
	uint16_t x411 = 2790U;
	volatile int64_t x412 = -8057LL;
	int32_t t75 = -33027401;

	t75 = (x409*(x410+(x411<x412)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x430 = 972529U;
	static uint16_t x432 = 1U;
	volatile uint32_t t76 = 4554582U;

	t76 = (x429*(x430+(x431<x432)));

	if (t76 != 972530U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x438 = 1176462;
	volatile int64_t x439 = INT64_MAX;
	int64_t x440 = -1LL;
	int32_t t77 = 160396779;

	t77 = (x437*(x438+(x439<x440)));

	if (t77 != 172939914) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x445 = 57U;
	int8_t x446 = INT8_MAX;
	static int64_t x447 = -1LL;

	t78 = (x445*(x446+(x447<x448)));

	if (t78 != 7239) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x450 = -5;
	static int64_t x451 = INT64_MAX;
	static int16_t x452 = INT16_MAX;
	volatile int64_t t79 = 107246507386LL;

	t79 = (x449*(x450+(x451<x452)));

	if (t79 != 5LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x455 = -1;
	int32_t x456 = -93425;
	static uint64_t t80 = 57105334989692LLU;

	t80 = (x453*(x454+(x455<x456)));

	if (t80 != 18446744073709551537LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x457 = INT8_MAX;
	uint16_t x458 = 9U;
	uint8_t x459 = UINT8_MAX;
	int16_t x460 = -56;
	int32_t t81 = 1625;

	t81 = (x457*(x458+(x459<x460)));

	if (t81 != 1143) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x469 = INT32_MAX;
	uint32_t x470 = 11U;
	int32_t x471 = -1;
	volatile uint32_t t82 = 511420U;

	t82 = (x469*(x470+(x471<x472)));

	if (t82 != 2147483637U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x473 = 6891217788LLU;
	uint32_t x474 = 59554U;
	int16_t x475 = -5;
	volatile int64_t x476 = INT64_MAX;
	uint64_t t83 = 23910LLU;

	t83 = (x473*(x474+(x475<x476)));

	if (t83 != 410406475364340LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x477 = 1935;
	int64_t x479 = INT64_MAX;
	int64_t x480 = INT64_MIN;
	volatile int32_t t84 = 7628512;

	t84 = (x477*(x478+(x479<x480)));

	if (t84 != -59985) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x481 = -1;
	uint16_t x482 = 3U;
	int64_t x484 = -13331862843527677LL;

	t85 = (x481*(x482+(x483<x484)));

	if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x485 = -1LL;
	uint32_t x486 = UINT32_MAX;
	static volatile uint16_t x487 = UINT16_MAX;
	static volatile int16_t x488 = INT16_MIN;
	volatile int64_t t86 = -171165629LL;

	t86 = (x485*(x486+(x487<x488)));

	if (t86 != -4294967295LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x489 = 28LLU;
	int16_t x491 = 2726;
	static int16_t x492 = INT16_MAX;
	volatile uint64_t t87 = 208398459LLU;

	t87 = (x489*(x490+(x491<x492)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x497 = INT64_MIN;
	int64_t x498 = -1LL;
	static int8_t x499 = -1;
	int8_t x500 = INT8_MAX;
	static int64_t t88 = 13187246005792178LL;

	t88 = (x497*(x498+(x499<x500)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x501 = 0U;
	static uint16_t x502 = UINT16_MAX;
	int32_t t89 = 18794497;

	t89 = (x501*(x502+(x503<x504)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x505 = INT32_MIN;
	volatile uint32_t x506 = UINT32_MAX;
	int64_t x507 = INT64_MIN;
	volatile uint32_t t90 = 2104628U;

	t90 = (x505*(x506+(x507<x508)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x509 = UINT64_MAX;
	uint8_t x511 = 108U;
	static int16_t x512 = -1;
	volatile uint64_t t91 = 1481553423LLU;

	t91 = (x509*(x510+(x511<x512)));

	if (t91 != 18446744022047845089LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x525 = 68U;
	static uint32_t x526 = UINT32_MAX;
	int32_t x527 = -4919594;
	static volatile uint32_t t92 = 3522U;

	t92 = (x525*(x526+(x527<x528)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x529 = -93649;
	static volatile int16_t x530 = -1;
	static int16_t x531 = INT16_MIN;
	static int64_t x532 = INT64_MAX;
	int32_t t93 = 224169623;

	t93 = (x529*(x530+(x531<x532)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x537 = -56LL;
	volatile int32_t x538 = INT32_MIN;
	uint32_t x539 = UINT32_MAX;
	uint16_t x540 = 270U;
	static int64_t t94 = -227090077191664324LL;

	t94 = (x537*(x538+(x539<x540)));

	if (t94 != 120259084288LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x549 = INT8_MIN;
	int16_t x550 = 347;
	static uint8_t x552 = UINT8_MAX;
	volatile int32_t t95 = -17;

	t95 = (x549*(x550+(x551<x552)));

	if (t95 != -44544) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x553 = 113U;
	uint16_t x554 = UINT16_MAX;
	uint8_t x555 = UINT8_MAX;
	int64_t x556 = INT64_MIN;
	volatile int32_t t96 = 508992130;

	t96 = (x553*(x554+(x555<x556)));

	if (t96 != 7405455) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x557 = UINT64_MAX;
	uint64_t x558 = UINT64_MAX;
	int32_t x559 = INT32_MIN;
	uint64_t t97 = 3853LLU;

	t97 = (x557*(x558+(x559<x560)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 12U;
	int8_t x562 = INT8_MIN;
	static int16_t x563 = INT16_MIN;
	volatile int32_t t98 = -6932;

	t98 = (x561*(x562+(x563<x564)));

	if (t98 != -1536) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x565 = INT16_MAX;
	uint8_t x566 = 16U;
	volatile int64_t x567 = -14254116108950LL;
	uint16_t x568 = UINT16_MAX;
	volatile int32_t t99 = 1205;

	t99 = (x565*(x566+(x567<x568)));

	if (t99 != 557039) { NG(); } else { ; }
	
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

