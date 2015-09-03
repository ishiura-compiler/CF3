#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t1 = 553LLU;
int16_t x37 = -49;
int32_t t4 = 68597;
uint32_t x49 = UINT32_MAX;
int32_t x51 = 42468;
volatile uint32_t t5 = 259018U;
uint16_t x54 = UINT16_MAX;
volatile int64_t t6 = 58793342201LL;
int64_t x82 = INT64_MIN;
uint64_t x87 = 15802543881995LLU;
static int64_t x92 = -1LL;
uint32_t x115 = UINT32_MAX;
volatile int32_t t14 = 7032;
int64_t x138 = INT64_MIN;
int64_t x139 = 314LL;
static int8_t x144 = INT8_MIN;
int16_t x149 = INT16_MIN;
int32_t x171 = -1;
uint8_t x186 = 22U;
int16_t x191 = INT16_MAX;
int32_t t22 = -164297;
uint16_t x211 = 0U;
static int8_t x218 = 3;
uint64_t x241 = 1363066569349918675LLU;
volatile int16_t x242 = -2;
int64_t t26 = 12593820752083468LL;
static int32_t x262 = 59806620;
uint64_t x331 = 68908750781487LLU;
int16_t x346 = -215;
uint64_t t35 = 1574LLU;
static volatile int32_t t36 = 3082;
int32_t x377 = -1;
static int16_t x379 = 4849;
int32_t t37 = -484;
int64_t x393 = -2164508382818LL;
uint8_t x394 = 20U;
int32_t t40 = -299;
uint32_t t41 = 22618595U;
int32_t x406 = INT32_MIN;
int16_t x407 = -1;
int8_t x408 = 49;
volatile uint8_t x415 = UINT8_MAX;
volatile int32_t x442 = -1;
int32_t x443 = INT32_MAX;
static volatile int64_t t46 = 2678862305311636LL;
uint8_t x451 = 0U;
int64_t x465 = INT64_MIN;
int32_t x468 = INT32_MIN;
int64_t t49 = -19LL;
int64_t x470 = INT64_MIN;
uint64_t x478 = 8442941056634974956LLU;
uint16_t x480 = 0U;
int8_t x490 = INT8_MIN;
int16_t x509 = INT16_MIN;
volatile uint64_t t57 = 15LLU;
volatile int32_t x522 = INT32_MIN;
int16_t x529 = -604;
uint32_t x531 = UINT32_MAX;
volatile uint16_t x554 = 3054U;
volatile int32_t t64 = -16237447;
uint32_t x570 = 138U;
static int32_t x571 = INT32_MIN;
volatile uint64_t t68 = 10587649218756381LLU;
static int64_t x598 = -7515896449LL;
static int8_t x610 = INT8_MIN;
uint32_t x627 = UINT32_MAX;
volatile uint16_t x635 = UINT16_MAX;
int16_t x645 = INT16_MAX;
int16_t x661 = -413;
int16_t x663 = INT16_MIN;
int8_t x672 = INT8_MAX;
int32_t x674 = 0;
int64_t t79 = -29573LL;
volatile int32_t x680 = INT32_MIN;
static volatile uint8_t x687 = UINT8_MAX;
volatile int64_t x694 = 19474307LL;
volatile int64_t x713 = -1LL;
uint8_t x714 = 0U;
int16_t x722 = INT16_MIN;
int8_t x725 = -45;
int64_t x726 = INT64_MIN;
int64_t x728 = INT64_MIN;
uint32_t t87 = 411984U;
int8_t x745 = INT8_MIN;
int16_t x761 = INT16_MAX;
int64_t x778 = -17425832273984740LL;
static uint16_t x779 = 1U;
int64_t x788 = 1104LL;
int16_t x790 = 31;
int32_t t96 = 176986402;
int8_t x811 = INT8_MIN;
static volatile int8_t x816 = INT8_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static int16_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -83;

	t0 = ((x1/(x2<x3))^x4);

	if (t0 != -2147483521) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int16_t x6 = -1;
	uint16_t x7 = 676U;
	static volatile uint64_t x8 = 143284LLU;

	t1 = ((x5/(x6<x7))^x8);

	if (t1 != 9223372036854919092LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = 12112;
	int64_t x14 = -1LL;
	uint16_t x15 = 20181U;
	int16_t x16 = 7;
	int32_t t2 = 308973;

	t2 = ((x13/(x14<x15))^x16);

	if (t2 != 12119) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x29 = INT16_MIN;
	int64_t x30 = 60935LL;
	volatile uint16_t x31 = UINT16_MAX;
	static int64_t x32 = -1LL;
	volatile int64_t t3 = 34677891270235LL;

	t3 = ((x29/(x30<x31))^x32);

	if (t3 != 32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x38 = -5687320563478LL;
	static int8_t x39 = INT8_MAX;
	int16_t x40 = INT16_MIN;

	t4 = ((x37/(x38<x39))^x40);

	if (t4 != 32719) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x50 = 0U;
	int8_t x52 = INT8_MIN;

	t5 = ((x49/(x50<x51))^x52);

	if (t5 != 127U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x53 = INT32_MAX;
	uint64_t x55 = 492890179LLU;
	int64_t x56 = INT64_MIN;

	t6 = ((x53/(x54<x55))^x56);

	if (t6 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 1U;
	uint64_t x60 = UINT64_MAX;
	static volatile uint64_t t7 = 1737817538267LLU;

	t7 = ((x57/(x58<x59))^x60);

	if (t7 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x81 = -8625914635LL;
	static uint8_t x83 = UINT8_MAX;
	uint16_t x84 = UINT16_MAX;
	int64_t t8 = 1LL;

	t8 = ((x81/(x82<x83))^x84);

	if (t8 != -8625978614LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x85 = UINT64_MAX;
	uint32_t x86 = 21462291U;
	static int64_t x88 = INT64_MAX;
	uint64_t t9 = 13LLU;

	t9 = ((x85/(x86<x87))^x88);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x89 = UINT64_MAX;
	int16_t x90 = INT16_MIN;
	int16_t x91 = INT16_MAX;
	volatile uint64_t t10 = 41285380995171890LLU;

	t10 = ((x89/(x90<x91))^x92);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x109 = 184392937953422354LLU;
	volatile int8_t x110 = INT8_MAX;
	uint32_t x111 = 360U;
	int8_t x112 = -1;
	uint64_t t11 = 19LLU;

	t11 = ((x109/(x110<x111))^x112);

	if (t11 != 18262351135756129261LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x113 = -1;
	volatile int16_t x114 = INT16_MAX;
	static uint8_t x116 = 4U;
	volatile int32_t t12 = 8522;

	t12 = ((x113/(x114<x115))^x116);

	if (t12 != -5) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x117 = 0;
	volatile int64_t x118 = -17010LL;
	int32_t x119 = -1;
	uint8_t x120 = 34U;
	static volatile int32_t t13 = 16685;

	t13 = ((x117/(x118<x119))^x120);

	if (t13 != 34) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x125 = 1U;
	static int8_t x126 = INT8_MIN;
	int64_t x127 = -1LL;
	static uint8_t x128 = 4U;

	t14 = ((x125/(x126<x127))^x128);

	if (t14 != 5) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x133 = 2;
	int64_t x134 = INT64_MIN;
	int16_t x135 = 103;
	int16_t x136 = INT16_MIN;
	static volatile int32_t t15 = 0;

	t15 = ((x133/(x134<x135))^x136);

	if (t15 != -32766) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x137 = 8954U;
	uint32_t x140 = 398U;
	volatile uint32_t t16 = 1085993151U;

	t16 = ((x137/(x138<x139))^x140);

	if (t16 != 9076U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x141 = -1;
	static volatile int32_t x142 = -1;
	uint16_t x143 = 124U;
	static int32_t t17 = -9;

	t17 = ((x141/(x142<x143))^x144);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x150 = INT32_MIN;
	static uint32_t x151 = UINT32_MAX;
	uint64_t x152 = UINT64_MAX;
	uint64_t t18 = 6807266LLU;

	t18 = ((x149/(x150<x151))^x152);

	if (t18 != 32767LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x169 = 1U;
	int16_t x170 = -7364;
	int64_t x172 = INT64_MIN;
	int64_t t19 = 5922685LL;

	t19 = ((x169/(x170<x171))^x172);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x173 = -17021483215LL;
	static int8_t x174 = INT8_MIN;
	uint16_t x175 = 1U;
	static int16_t x176 = INT16_MIN;
	int64_t t20 = -52754LL;

	t20 = ((x173/(x174<x175))^x176);

	if (t20 != 17021486897LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x185 = INT32_MIN;
	uint16_t x187 = 4464U;
	int64_t x188 = -1LL;
	int64_t t21 = -337317958LL;

	t21 = ((x185/(x186<x187))^x188);

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x190 = -1LL;
	volatile int32_t x192 = INT32_MIN;

	t22 = ((x189/(x190<x191))^x192);

	if (t22 != -2147418113) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x209 = 15U;
	static volatile int16_t x210 = -1187;
	int8_t x212 = INT8_MAX;
	volatile int32_t t23 = -197770;

	t23 = ((x209/(x210<x211))^x212);

	if (t23 != 112) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x217 = -23623;
	uint16_t x219 = UINT16_MAX;
	static int32_t x220 = -1;
	volatile int32_t t24 = 4913;

	t24 = ((x217/(x218<x219))^x220);

	if (t24 != 23622) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x243 = 0U;
	static int64_t x244 = INT64_MAX;
	volatile uint64_t t25 = 7406118532539LLU;

	t25 = ((x241/(x242<x243))^x244);

	if (t25 != 7860305467504857132LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x245 = INT64_MIN;
	static int16_t x246 = 74;
	uint16_t x247 = UINT16_MAX;
	uint8_t x248 = UINT8_MAX;

	t26 = ((x245/(x246<x247))^x248);

	if (t26 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x261 = 6;
	volatile uint32_t x263 = UINT32_MAX;
	static uint8_t x264 = 1U;
	volatile int32_t t27 = 395367;

	t27 = ((x261/(x262<x263))^x264);

	if (t27 != 7) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x269 = 126001611U;
	uint8_t x270 = 4U;
	volatile int64_t x271 = INT64_MAX;
	volatile uint8_t x272 = 38U;
	uint32_t t28 = 16U;

	t28 = ((x269/(x270<x271))^x272);

	if (t28 != 126001645U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x273 = 40;
	volatile int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = 4U;
	uint64_t x276 = 1881668471526304LLU;
	uint64_t t29 = 156805LLU;

	t29 = ((x273/(x274<x275))^x276);

	if (t29 != 1881668471526280LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x281 = 9032749237LL;
	volatile int32_t x282 = INT32_MIN;
	int8_t x283 = 4;
	uint32_t x284 = UINT32_MAX;
	int64_t t30 = -1LL;

	t30 = ((x281/(x282<x283))^x284);

	if (t30 != 12442087242LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x285 = -1LL;
	volatile int32_t x286 = INT32_MIN;
	int16_t x287 = INT16_MIN;
	int32_t x288 = -195707;
	static volatile int64_t t31 = -636659111LL;

	t31 = ((x285/(x286<x287))^x288);

	if (t31 != 195706LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x301 = INT64_MIN;
	volatile int8_t x302 = -1;
	int8_t x303 = 1;
	int8_t x304 = -1;
	volatile int64_t t32 = INT64_MAX;

	t32 = ((x301/(x302<x303))^x304);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x317 = 8U;
	volatile int64_t x318 = -1LL;
	uint32_t x319 = UINT32_MAX;
	volatile int16_t x320 = INT16_MAX;
	int32_t t33 = -2;

	t33 = ((x317/(x318<x319))^x320);

	if (t33 != 32759) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = 38;
	static int16_t x332 = -1;
	volatile int32_t t34 = -49;

	t34 = ((x329/(x330<x331))^x332);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x345 = 13U;
	uint64_t x347 = UINT64_MAX;
	uint64_t x348 = UINT64_MAX;

	t35 = ((x345/(x346<x347))^x348);

	if (t35 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x365 = INT8_MAX;
	uint8_t x366 = 1U;
	static int32_t x367 = 6;
	uint8_t x368 = 5U;

	t36 = ((x365/(x366<x367))^x368);

	if (t36 != 122) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x378 = 748U;
	int16_t x380 = -1;

	t37 = ((x377/(x378<x379))^x380);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x381 = 123U;
	int8_t x382 = INT8_MIN;
	int16_t x383 = 12509;
	int8_t x384 = -1;
	volatile int32_t t38 = -21800537;

	t38 = ((x381/(x382<x383))^x384);

	if (t38 != -124) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x395 = 332U;
	static int64_t x396 = INT64_MIN;
	static int64_t t39 = 357679912LL;

	t39 = ((x393/(x394<x395))^x396);

	if (t39 != 9223369872346392990LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x397 = 55U;
	volatile uint8_t x398 = 1U;
	uint64_t x399 = 1774325519LLU;
	uint8_t x400 = 3U;

	t40 = ((x397/(x398<x399))^x400);

	if (t40 != 52) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x401 = UINT32_MAX;
	int64_t x402 = 224LL;
	volatile int32_t x403 = 8269741;
	volatile int8_t x404 = INT8_MIN;

	t41 = ((x401/(x402<x403))^x404);

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x405 = -1;
	int32_t t42 = 3;

	t42 = ((x405/(x406<x407))^x408);

	if (t42 != -50) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x413 = -1;
	volatile int16_t x414 = -1;
	volatile int8_t x416 = -1;
	volatile int32_t t43 = -90494;

	t43 = ((x413/(x414<x415))^x416);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x417 = 48U;
	int32_t x418 = -190;
	int8_t x419 = INT8_MIN;
	int16_t x420 = INT16_MAX;
	int32_t t44 = 80746;

	t44 = ((x417/(x418<x419))^x420);

	if (t44 != 32719) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x441 = 0;
	static int32_t x444 = INT32_MIN;
	volatile int32_t t45 = INT32_MIN;

	t45 = ((x441/(x442<x443))^x444);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x445 = INT64_MIN;
	volatile int8_t x446 = INT8_MIN;
	uint32_t x447 = UINT32_MAX;
	volatile uint32_t x448 = UINT32_MAX;

	t46 = ((x445/(x446<x447))^x448);

	if (t46 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x449 = UINT16_MAX;
	int16_t x450 = -8;
	static int32_t x452 = -1778;
	volatile int32_t t47 = 1651;

	t47 = ((x449/(x450<x451))^x452);

	if (t47 != -63759) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x457 = 8;
	uint32_t x458 = 45840540U;
	uint32_t x459 = UINT32_MAX;
	uint32_t x460 = UINT32_MAX;
	uint32_t t48 = 57595552U;

	t48 = ((x457/(x458<x459))^x460);

	if (t48 != 4294967287U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MAX;

	t49 = ((x465/(x466<x467))^x468);

	if (t49 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x469 = INT32_MAX;
	volatile int16_t x471 = INT16_MAX;
	int64_t x472 = INT64_MIN;
	static volatile int64_t t50 = -31591LL;

	t50 = ((x469/(x470<x471))^x472);

	if (t50 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x473 = UINT64_MAX;
	volatile int32_t x474 = 42574;
	static volatile int64_t x475 = INT64_MAX;
	volatile int8_t x476 = INT8_MIN;
	volatile uint64_t t51 = 1637151677LLU;

	t51 = ((x473/(x474<x475))^x476);

	if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x477 = INT16_MAX;
	int64_t x479 = INT64_MIN;
	volatile int32_t t52 = 103;

	t52 = ((x477/(x478<x479))^x480);

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x481 = 1114U;
	int16_t x482 = INT16_MIN;
	static int32_t x483 = 1;
	static int8_t x484 = INT8_MIN;
	int32_t t53 = 169;

	t53 = ((x481/(x482<x483))^x484);

	if (t53 != -1062) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x489 = UINT8_MAX;
	volatile int16_t x491 = INT16_MAX;
	int64_t x492 = -1LL;
	int64_t t54 = -157LL;

	t54 = ((x489/(x490<x491))^x492);

	if (t54 != -256LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x505 = INT64_MIN;
	int64_t x506 = INT64_MIN;
	int32_t x507 = 344308789;
	int64_t x508 = INT64_MIN;
	volatile int64_t t55 = -63709463614618LL;

	t55 = ((x505/(x506<x507))^x508);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x510 = -32104LL;
	int32_t x511 = 18656225;
	int32_t x512 = 0;
	volatile int32_t t56 = 52978;

	t56 = ((x509/(x510<x511))^x512);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x513 = 4638LL;
	int32_t x514 = -30217;
	int8_t x515 = INT8_MIN;
	volatile uint64_t x516 = 12639801553LLU;

	t57 = ((x513/(x514<x515))^x516);

	if (t57 != 12639797967LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x521 = -132;
	volatile int16_t x523 = INT16_MIN;
	int64_t x524 = -15561576780LL;
	volatile int64_t t58 = 6485073100LL;

	t58 = ((x521/(x522<x523))^x524);

	if (t58 != 15561576904LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x530 = INT32_MAX;
	volatile int64_t x532 = -1LL;
	int64_t t59 = -7092434099LL;

	t59 = ((x529/(x530<x531))^x532);

	if (t59 != 603LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x537 = 31498116;
	static volatile int32_t x538 = -11963083;
	int8_t x539 = -4;
	uint32_t x540 = UINT32_MAX;
	uint32_t t60 = 25U;

	t60 = ((x537/(x538<x539))^x540);

	if (t60 != 4263469179U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x545 = UINT8_MAX;
	int32_t x546 = 12;
	uint16_t x547 = UINT16_MAX;
	int64_t x548 = -1LL;
	int64_t t61 = -11997LL;

	t61 = ((x545/(x546<x547))^x548);

	if (t61 != -256LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x553 = 6036U;
	uint32_t x555 = 9592853U;
	int8_t x556 = INT8_MAX;
	uint32_t t62 = 418099U;

	t62 = ((x553/(x554<x555))^x556);

	if (t62 != 6123U) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x561 = -1594383LL;
	static int32_t x562 = -55152;
	volatile uint8_t x563 = 5U;
	volatile int8_t x564 = -1;
	volatile int64_t t63 = 31005939723904449LL;

	t63 = ((x561/(x562<x563))^x564);

	if (t63 != 1594382LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x565 = -1948;
	int16_t x566 = -1;
	volatile uint16_t x567 = 2072U;
	volatile uint16_t x568 = UINT16_MAX;

	t64 = ((x565/(x566<x567))^x568);

	if (t64 != -63589) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x569 = 9U;
	volatile int32_t x572 = -116;
	int32_t t65 = -16152557;

	t65 = ((x569/(x570<x571))^x572);

	if (t65 != -123) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x573 = INT16_MIN;
	volatile int8_t x574 = 0;
	int8_t x575 = 45;
	int8_t x576 = INT8_MIN;
	int32_t t66 = -100408020;

	t66 = ((x573/(x574<x575))^x576);

	if (t66 != 32640) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x581 = INT32_MIN;
	int32_t x582 = INT32_MIN;
	int64_t x583 = INT64_MAX;
	uint16_t x584 = 941U;
	volatile int32_t t67 = 4029929;

	t67 = ((x581/(x582<x583))^x584);

	if (t67 != -2147482707) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x585 = 1704183583LL;
	uint32_t x586 = 33337U;
	int64_t x587 = 306561382128LL;
	uint64_t x588 = UINT64_MAX;

	t68 = ((x585/(x586<x587))^x588);

	if (t68 != 18446744072005368032LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x597 = INT32_MIN;
	int8_t x599 = INT8_MIN;
	int16_t x600 = INT16_MIN;
	volatile int32_t t69 = -237378860;

	t69 = ((x597/(x598<x599))^x600);

	if (t69 != 2147450880) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x605 = 74;
	static uint32_t x606 = 460792U;
	volatile uint64_t x607 = 4009177LLU;
	volatile int64_t x608 = INT64_MIN;
	int64_t t70 = -15909LL;

	t70 = ((x605/(x606<x607))^x608);

	if (t70 != -9223372036854775734LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x609 = UINT8_MAX;
	int8_t x611 = -20;
	volatile int64_t x612 = 654183LL;
	int64_t t71 = 2676LL;

	t71 = ((x609/(x610<x611))^x612);

	if (t71 != 654232LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x621 = 6;
	uint32_t x622 = 2U;
	uint16_t x623 = UINT16_MAX;
	static int16_t x624 = 13;
	int32_t t72 = -3561;

	t72 = ((x621/(x622<x623))^x624);

	if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x625 = UINT8_MAX;
	uint8_t x626 = UINT8_MAX;
	volatile uint8_t x628 = UINT8_MAX;
	int32_t t73 = -161366;

	t73 = ((x625/(x626<x627))^x628);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x633 = INT8_MIN;
	static int64_t x634 = -1LL;
	static int32_t x636 = INT32_MIN;
	volatile int32_t t74 = 2878;

	t74 = ((x633/(x634<x635))^x636);

	if (t74 != 2147483520) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x646 = INT64_MIN;
	uint8_t x647 = 0U;
	volatile int8_t x648 = -63;
	static volatile int32_t t75 = -520946353;

	t75 = ((x645/(x646<x647))^x648);

	if (t75 != -32706) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x657 = INT8_MAX;
	volatile int64_t x658 = 224518846289529785LL;
	int64_t x659 = INT64_MAX;
	int16_t x660 = INT16_MIN;
	volatile int32_t t76 = 41809445;

	t76 = ((x657/(x658<x659))^x660);

	if (t76 != -32641) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x662 = -401779395812475976LL;
	int16_t x664 = 1;
	int32_t t77 = -255372395;

	t77 = ((x661/(x662<x663))^x664);

	if (t77 != -414) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x669 = -382;
	uint64_t x670 = 10332608572978LLU;
	volatile int8_t x671 = -1;
	int32_t t78 = 346;

	t78 = ((x669/(x670<x671))^x672);

	if (t78 != -259) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x673 = 1243896484966270817LL;
	int64_t x675 = 15200LL;
	int16_t x676 = INT16_MIN;

	t79 = ((x673/(x674<x675))^x676);

	if (t79 != -1243896484966299807LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x677 = 0U;
	int16_t x678 = -1;
	volatile uint8_t x679 = 112U;
	static volatile int32_t t80 = INT32_MIN;

	t80 = ((x677/(x678<x679))^x680);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x685 = 757171543627624987LLU;
	int32_t x686 = -799698;
	int16_t x688 = INT16_MIN;
	uint64_t t81 = 69061799248048937LLU;

	t81 = ((x685/(x686<x687))^x688);

	if (t81 != 17689572530081952283LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x693 = INT64_MAX;
	static uint32_t x695 = 30461652U;
	int16_t x696 = -1;
	static int64_t t82 = INT64_MIN;

	t82 = ((x693/(x694<x695))^x696);

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x697 = -2656;
	volatile int16_t x698 = -33;
	int64_t x699 = -1LL;
	volatile int64_t x700 = -296501184LL;
	volatile int64_t t83 = -1414LL;

	t83 = ((x697/(x698<x699))^x700);

	if (t83 != 296498656LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x715 = 81U;
	uint32_t x716 = UINT32_MAX;
	int64_t t84 = -7LL;

	t84 = ((x713/(x714<x715))^x716);

	if (t84 != -4294967296LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x721 = INT8_MIN;
	int16_t x723 = 1;
	int16_t x724 = -484;
	static volatile int32_t t85 = 0;

	t85 = ((x721/(x722<x723))^x724);

	if (t85 != 412) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x727 = INT16_MIN;
	volatile int64_t t86 = -719920LL;

	t86 = ((x725/(x726<x727))^x728);

	if (t86 != 9223372036854775763LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x729 = 2U;
	int32_t x730 = -4;
	int32_t x731 = INT32_MAX;
	volatile uint32_t x732 = 288780U;

	t87 = ((x729/(x730<x731))^x732);

	if (t87 != 288782U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x733 = 37204U;
	int16_t x734 = INT16_MIN;
	static volatile int32_t x735 = 200;
	static uint32_t x736 = UINT32_MAX;
	volatile uint32_t t88 = 6587U;

	t88 = ((x733/(x734<x735))^x736);

	if (t88 != 4294930091U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x741 = -1LL;
	static int16_t x742 = -1;
	uint8_t x743 = UINT8_MAX;
	int16_t x744 = 1;
	int64_t t89 = 59975309LL;

	t89 = ((x741/(x742<x743))^x744);

	if (t89 != -2LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x746 = INT32_MIN;
	volatile int8_t x747 = 2;
	uint32_t x748 = 15U;
	static uint32_t t90 = 87077U;

	t90 = ((x745/(x746<x747))^x748);

	if (t90 != 4294967183U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x753 = -1;
	static int16_t x754 = INT16_MIN;
	int8_t x755 = INT8_MIN;
	static uint32_t x756 = UINT32_MAX;
	static volatile uint32_t t91 = 1382402696U;

	t91 = ((x753/(x754<x755))^x756);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x757 = INT32_MIN;
	int64_t x758 = INT64_MIN;
	int32_t x759 = -1;
	uint64_t x760 = 13366LLU;
	volatile uint64_t t92 = 27LLU;

	t92 = ((x757/(x758<x759))^x760);

	if (t92 != 18446744071562081334LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x762 = INT32_MIN;
	static uint16_t x763 = 20U;
	static int8_t x764 = -1;
	volatile int32_t t93 = 57;

	t93 = ((x761/(x762<x763))^x764);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x777 = INT16_MIN;
	volatile int32_t x780 = -1;
	int32_t t94 = -47;

	t94 = ((x777/(x778<x779))^x780);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x785 = -1LL;
	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	int64_t t95 = 30624LL;

	t95 = ((x785/(x786<x787))^x788);

	if (t95 != -1105LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x789 = INT16_MIN;
	int64_t x791 = INT64_MAX;
	uint8_t x792 = UINT8_MAX;

	t96 = ((x789/(x790<x791))^x792);

	if (t96 != -32513) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x809 = 527;
	static volatile uint32_t x810 = 584308U;
	int16_t x812 = 13337;
	static int32_t t97 = 13;

	t97 = ((x809/(x810<x811))^x812);

	if (t97 != 13846) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x813 = INT8_MIN;
	uint64_t x814 = 143044LLU;
	uint32_t x815 = 1826770U;
	int32_t t98 = 15058569;

	t98 = ((x813/(x814<x815))^x816);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x833 = 6319001112586987LLU;
	volatile int16_t x834 = INT16_MAX;
	static uint32_t x835 = 1055907033U;
	uint32_t x836 = UINT32_MAX;
	uint64_t t99 = 23172940899921LLU;

	t99 = ((x833/(x834<x835))^x836);

	if (t99 != 6319004580402452LLU) { NG(); } else { ; }
	
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

