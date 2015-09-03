#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = INT64_MIN;
static int8_t x4 = INT8_MIN;
uint8_t x6 = 51U;
volatile int64_t t1 = INT64_MIN;
static int32_t x19 = INT32_MIN;
volatile int32_t t4 = 4665679;
volatile int8_t x26 = -1;
uint16_t x30 = 115U;
volatile int64_t x31 = INT64_MIN;
static volatile int32_t x39 = -1;
static int16_t x43 = INT16_MIN;
int16_t x45 = INT16_MAX;
volatile uint32_t x48 = UINT32_MAX;
int64_t x58 = -1678654011570LL;
int32_t x90 = -561488032;
static int64_t x91 = -14753829994507548LL;
uint16_t x96 = 18U;
static uint8_t x104 = 56U;
uint16_t x114 = UINT16_MAX;
uint64_t x118 = 28352378LLU;
uint32_t x122 = UINT32_MAX;
static uint64_t x137 = 1101185001LLU;
uint64_t t20 = 11009495166232LLU;
int8_t x148 = INT8_MIN;
int64_t t22 = -179337762771LL;
static volatile uint64_t x161 = 374667955LLU;
volatile int64_t x162 = -1LL;
volatile int32_t x205 = INT32_MAX;
volatile int8_t x207 = INT8_MIN;
volatile int32_t x216 = INT32_MAX;
int8_t x217 = INT8_MAX;
static int16_t x220 = 137;
static volatile int32_t x224 = INT32_MIN;
volatile uint16_t x242 = 12321U;
static int8_t x250 = INT8_MIN;
uint16_t x261 = 1741U;
int32_t x262 = INT32_MAX;
uint16_t x266 = 5U;
volatile int64_t x276 = -37724LL;
int64_t t39 = INT64_MIN;
volatile uint16_t x304 = 53U;
uint32_t t43 = 787464U;
int16_t x350 = 85;
int16_t x352 = INT16_MIN;
int8_t x354 = -1;
int32_t t45 = -214433129;
int64_t x358 = -30368514LL;
static int16_t x360 = INT16_MAX;
volatile int8_t x361 = INT8_MIN;
volatile uint64_t x372 = 2475251678120LLU;
int32_t x377 = INT32_MAX;
uint64_t x379 = 45747637273LLU;
int64_t x380 = INT64_MIN;
int64_t x400 = -1LL;
uint64_t x405 = UINT64_MAX;
volatile int16_t x453 = INT16_MIN;
uint64_t x455 = 88113479013008LLU;
volatile int8_t x460 = -1;
int32_t t57 = -97662;
static int8_t x472 = INT8_MAX;
uint32_t x473 = UINT32_MAX;
int16_t x476 = 9;
int64_t x491 = -1LL;
volatile int8_t x504 = 17;
volatile int8_t x511 = INT8_MIN;
static volatile uint8_t x512 = UINT8_MAX;
uint8_t x516 = 3U;
uint64_t x557 = 8119551054268LLU;
volatile uint16_t x562 = 6U;
static volatile int64_t t68 = INT64_MAX;
volatile uint64_t t71 = 26LLU;
static int64_t t72 = INT64_MAX;
int8_t x598 = 2;
int32_t x600 = INT32_MAX;
volatile uint32_t x606 = UINT32_MAX;
volatile uint32_t x608 = UINT32_MAX;
int64_t x626 = INT64_MIN;
static volatile int64_t x627 = -1539068209381256916LL;
volatile int64_t t77 = -7851LL;
int32_t x668 = -1;
int16_t x675 = INT16_MAX;
int32_t x683 = 7;
uint64_t x695 = 59055869708LLU;
int8_t x705 = -1;
volatile uint16_t x706 = 4U;
volatile int32_t t84 = 1462662;
uint16_t x716 = 69U;
static int32_t x719 = -1;
static uint64_t x732 = 1731673LLU;
int64_t t87 = 196432LL;
int32_t x737 = -1;
uint16_t x740 = 5U;
uint64_t t88 = UINT64_MAX;
int32_t x778 = INT32_MAX;
static int8_t x803 = -29;
int8_t x823 = INT8_MIN;
volatile int32_t t98 = 56575;
volatile int16_t x827 = INT16_MIN;
volatile int32_t t99 = 2;


void f0(void) {
	int64_t x2 = INT64_MAX;
	uint32_t x3 = 6801U;
	static int64_t t0 = INT64_MIN;

	t0 = (x1+(x2%(x3<x4)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	int32_t x7 = -16031490;
	int32_t x8 = 1;

	t1 = (x5+(x6%(x7<x8)));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	volatile int16_t x10 = INT16_MIN;
	static uint64_t x11 = 13813LLU;
	static int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9+(x10%(x11<x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	static uint8_t x14 = UINT8_MAX;
	volatile uint8_t x15 = 51U;
	uint16_t x16 = 67U;
	static volatile int32_t t3 = INT32_MAX;

	t3 = (x13+(x14%(x15<x16)));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	uint32_t x20 = UINT32_MAX;

	t4 = (x17+(x18%(x19<x20)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = UINT32_MAX;
	uint32_t x27 = 2203390U;
	static int16_t x28 = -1;
	static volatile uint32_t t5 = UINT32_MAX;

	t5 = (x25+(x26%(x27<x28)));

	if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = INT16_MIN;
	uint32_t x32 = 514U;
	volatile int32_t t6 = 108;

	t6 = (x29+(x30%(x31<x32)));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 5546U;
	volatile int32_t x38 = -571230799;
	uint8_t x40 = 85U;
	volatile uint32_t t7 = 1U;

	t7 = (x37+(x38%(x39<x40)));

	if (t7 != 5546U) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x41 = INT8_MIN;
	int64_t x42 = INT64_MAX;
	uint8_t x44 = 127U;
	int64_t t8 = 26LL;

	t8 = (x41+(x42%(x43<x44)));

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x46 = -14455578;
	int8_t x47 = INT8_MIN;
	int32_t t9 = -30;

	t9 = (x45+(x46%(x47<x48)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = 25U;
	int32_t x59 = -1;
	uint8_t x60 = 1U;
	int64_t t10 = -372905532999381LL;

	t10 = (x57+(x58%(x59<x60)));

	if (t10 != 25LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x89 = 1U;
	int32_t x92 = 12584441;
	static int32_t t11 = 1;

	t11 = (x89+(x90%(x91<x92)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x93 = 185212807958604917LL;
	int8_t x94 = -1;
	int16_t x95 = INT16_MIN;
	static int64_t t12 = 243121953753862206LL;

	t12 = (x93+(x94%(x95<x96)));

	if (t12 != 185212807958604917LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x97 = -688788LL;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = 118U;
	uint8_t x100 = UINT8_MAX;
	volatile int64_t t13 = 68333051322983761LL;

	t13 = (x97+(x98%(x99<x100)));

	if (t13 != -688788LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x101 = 1368;
	uint32_t x102 = UINT32_MAX;
	int16_t x103 = INT16_MIN;
	uint32_t t14 = 2068414U;

	t14 = (x101+(x102%(x103<x104)));

	if (t14 != 1368U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = -1;
	int16_t x107 = -1;
	volatile uint16_t x108 = UINT16_MAX;
	int32_t t15 = INT32_MAX;

	t15 = (x105+(x106%(x107<x108)));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x113 = -7;
	int16_t x115 = 6;
	uint8_t x116 = UINT8_MAX;
	int32_t t16 = 67064605;

	t16 = (x113+(x114%(x115<x116)));

	if (t16 != -7) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x117 = 786103U;
	static uint32_t x119 = 95051U;
	int32_t x120 = INT32_MAX;
	volatile uint64_t t17 = 3800321736LLU;

	t17 = (x117+(x118%(x119<x120)));

	if (t17 != 786103LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = 675420U;
	volatile int64_t t18 = INT64_MIN;

	t18 = (x121+(x122%(x123<x124)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x133 = INT64_MIN;
	volatile int8_t x134 = 2;
	int64_t x135 = -44663800756921732LL;
	static uint32_t x136 = UINT32_MAX;
	volatile int64_t t19 = INT64_MIN;

	t19 = (x133+(x134%(x135<x136)));

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	int64_t x140 = -1LL;

	t20 = (x137+(x138%(x139<x140)));

	if (t20 != 1101185001LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x145 = INT32_MIN;
	uint8_t x146 = 1U;
	int64_t x147 = INT64_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = (x145+(x146%(x147<x148)));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x149 = -625LL;
	int64_t x150 = INT64_MAX;
	uint16_t x151 = 119U;
	uint64_t x152 = UINT64_MAX;

	t22 = (x149+(x150%(x151<x152)));

	if (t22 != -625LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x153 = INT64_MIN;
	static uint64_t x154 = UINT64_MAX;
	int8_t x155 = -1;
	int16_t x156 = INT16_MAX;
	uint64_t t23 = 140408LLU;

	t23 = (x153+(x154%(x155<x156)));

	if (t23 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x163 = 461154695698876507LLU;
	int64_t x164 = INT64_MIN;
	volatile uint64_t t24 = 146648598221154LLU;

	t24 = (x161+(x162%(x163<x164)));

	if (t24 != 374667955LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x165 = 0U;
	volatile int16_t x166 = INT16_MAX;
	static uint64_t x167 = 2026LLU;
	int32_t x168 = INT32_MIN;
	volatile int32_t t25 = 1;

	t25 = (x165+(x166%(x167<x168)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x169 = INT64_MAX;
	int32_t x170 = 2820670;
	int64_t x171 = INT64_MIN;
	int64_t x172 = INT64_MAX;
	volatile int64_t t26 = INT64_MAX;

	t26 = (x169+(x170%(x171<x172)));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x201 = 53397U;
	uint8_t x202 = 51U;
	int8_t x203 = INT8_MIN;
	volatile uint32_t x204 = UINT32_MAX;
	static volatile uint32_t t27 = 1996618752U;

	t27 = (x201+(x202%(x203<x204)));

	if (t27 != 53397U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x206 = 3U;
	int8_t x208 = -1;
	static volatile int32_t t28 = INT32_MAX;

	t28 = (x205+(x206%(x207<x208)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x213 = 39U;
	int64_t x214 = -10597345460LL;
	int64_t x215 = INT64_MIN;
	volatile int64_t t29 = 11859032LL;

	t29 = (x213+(x214%(x215<x216)));

	if (t29 != 39LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x218 = 3U;
	static int8_t x219 = INT8_MIN;
	static int32_t t30 = -1024;

	t30 = (x217+(x218%(x219<x220)));

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x221 = 1U;
	int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MIN;
	volatile int32_t t31 = -103713082;

	t31 = (x221+(x222%(x223<x224)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x237 = INT16_MAX;
	uint16_t x238 = 113U;
	int32_t x239 = INT32_MIN;
	uint8_t x240 = 1U;
	int32_t t32 = 480;

	t32 = (x237+(x238%(x239<x240)));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x241 = INT32_MAX;
	static int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	static volatile int32_t t33 = INT32_MAX;

	t33 = (x241+(x242%(x243<x244)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x249 = INT32_MIN;
	int8_t x251 = INT8_MIN;
	int8_t x252 = -12;
	static int32_t t34 = INT32_MIN;

	t34 = (x249+(x250%(x251<x252)));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x253 = 0U;
	volatile int8_t x254 = INT8_MAX;
	static int16_t x255 = INT16_MIN;
	int64_t x256 = 18857LL;
	int32_t t35 = 24;

	t35 = (x253+(x254%(x255<x256)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = 623838;
	int16_t x259 = -39;
	static int64_t x260 = INT64_MAX;
	int32_t t36 = INT32_MAX;

	t36 = (x257+(x258%(x259<x260)));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x263 = 87672930;
	uint64_t x264 = UINT64_MAX;
	int32_t t37 = 214655996;

	t37 = (x261+(x262%(x263<x264)));

	if (t37 != 1741) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x265 = 32666665732996LLU;
	int32_t x267 = INT32_MIN;
	int8_t x268 = INT8_MIN;
	static uint64_t t38 = 206659LLU;

	t38 = (x265+(x266%(x267<x268)));

	if (t38 != 32666665732996LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x273 = INT64_MIN;
	volatile uint16_t x274 = 27616U;
	volatile int32_t x275 = INT32_MIN;

	t39 = (x273+(x274%(x275<x276)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x277 = INT32_MIN;
	int32_t x278 = -766841443;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MIN;
	int32_t t40 = INT32_MIN;

	t40 = (x277+(x278%(x279<x280)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x293 = 0;
	volatile uint64_t x294 = UINT64_MAX;
	int64_t x295 = INT64_MIN;
	volatile uint8_t x296 = 69U;
	volatile uint64_t t41 = 1373673624LLU;

	t41 = (x293+(x294%(x295<x296)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x301 = INT64_MIN;
	int8_t x302 = 0;
	static int32_t x303 = -1;
	int64_t t42 = INT64_MIN;

	t42 = (x301+(x302%(x303<x304)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x341 = 112U;
	int8_t x342 = 1;
	uint64_t x343 = 472060126419498LLU;
	static uint64_t x344 = UINT64_MAX;

	t43 = (x341+(x342%(x343<x344)));

	if (t43 != 112U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x349 = UINT16_MAX;
	static int64_t x351 = INT64_MIN;
	volatile int32_t t44 = -250;

	t44 = (x349+(x350%(x351<x352)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x353 = INT16_MIN;
	int64_t x355 = -57396275588LL;
	uint16_t x356 = UINT16_MAX;

	t45 = (x353+(x354%(x355<x356)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x357 = 23U;
	int8_t x359 = -1;
	volatile int64_t t46 = -13088161469LL;

	t46 = (x357+(x358%(x359<x360)));

	if (t46 != 23LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x362 = -1;
	uint32_t x363 = 3846U;
	int32_t x364 = INT32_MIN;
	int32_t t47 = -442895180;

	t47 = (x361+(x362%(x363<x364)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x369 = 29;
	uint16_t x370 = 7386U;
	int32_t x371 = 160448;
	static volatile int32_t t48 = 1;

	t48 = (x369+(x370%(x371<x372)));

	if (t48 != 29) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x378 = 1;
	int32_t t49 = INT32_MAX;

	t49 = (x377+(x378%(x379<x380)));

	if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x389 = -1603538330816249LL;
	int8_t x390 = INT8_MIN;
	int32_t x391 = INT32_MIN;
	int64_t x392 = -1LL;
	int64_t t50 = 10503283637329987LL;

	t50 = (x389+(x390%(x391<x392)));

	if (t50 != -1603538330816249LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x397 = INT32_MAX;
	uint8_t x398 = 0U;
	static int64_t x399 = INT64_MIN;
	volatile int32_t t51 = INT32_MAX;

	t51 = (x397+(x398%(x399<x400)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x406 = 46U;
	uint8_t x407 = 6U;
	int32_t x408 = INT32_MAX;
	static volatile uint64_t t52 = UINT64_MAX;

	t52 = (x405+(x406%(x407<x408)));

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x433 = 1;
	volatile int64_t x434 = -2LL;
	volatile uint64_t x435 = 6391411042LLU;
	int8_t x436 = -1;
	volatile int64_t t53 = -29576LL;

	t53 = (x433+(x434%(x435<x436)));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x449 = -1;
	int32_t x450 = 1648;
	uint8_t x451 = 13U;
	uint64_t x452 = 9220142LLU;
	int32_t t54 = 23957534;

	t54 = (x449+(x450%(x451<x452)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x454 = INT64_MIN;
	int64_t x456 = INT64_MAX;
	volatile int64_t t55 = 37564408867558LL;

	t55 = (x453+(x454%(x455<x456)));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x457 = -22;
	uint64_t x458 = 156902889332LLU;
	int16_t x459 = -20;
	volatile uint64_t t56 = 65369309127464LLU;

	t56 = (x457+(x458%(x459<x460)));

	if (t56 != 18446744073709551594LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x461 = INT16_MAX;
	int32_t x462 = INT32_MIN;
	static int32_t x463 = -11767388;
	int16_t x464 = 11915;

	t57 = (x461+(x462%(x463<x464)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x469 = 3589800LLU;
	int64_t x470 = -1LL;
	volatile int8_t x471 = INT8_MIN;
	uint64_t t58 = 92662398244LLU;

	t58 = (x469+(x470%(x471<x472)));

	if (t58 != 3589800LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x474 = -1LL;
	int32_t x475 = INT32_MIN;
	int64_t t59 = 1116226LL;

	t59 = (x473+(x474%(x475<x476)));

	if (t59 != 4294967295LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x481 = INT64_MIN;
	uint16_t x482 = UINT16_MAX;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	int64_t t60 = INT64_MIN;

	t60 = (x481+(x482%(x483<x484)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x489 = 40;
	int8_t x490 = -1;
	volatile uint16_t x492 = 3U;
	volatile int32_t t61 = 1;

	t61 = (x489+(x490%(x491<x492)));

	if (t61 != 40) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x501 = -8;
	int16_t x502 = -1;
	int32_t x503 = -32393764;
	int32_t t62 = 26;

	t62 = (x501+(x502%(x503<x504)));

	if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x509 = 497152780U;
	static uint16_t x510 = 363U;
	uint32_t t63 = 99656U;

	t63 = (x509+(x510%(x511<x512)));

	if (t63 != 497152780U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x513 = -1;
	uint32_t x514 = 3279842U;
	int8_t x515 = INT8_MIN;
	static volatile uint32_t t64 = UINT32_MAX;

	t64 = (x513+(x514%(x515<x516)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x533 = UINT8_MAX;
	static int16_t x534 = INT16_MIN;
	uint64_t x535 = 21LLU;
	volatile uint32_t x536 = 195U;
	int32_t t65 = -7846619;

	t65 = (x533+(x534%(x535<x536)));

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x537 = INT32_MIN;
	int8_t x538 = INT8_MIN;
	static int32_t x539 = -1;
	uint8_t x540 = 91U;
	volatile int32_t t66 = INT32_MIN;

	t66 = (x537+(x538%(x539<x540)));

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x558 = INT64_MAX;
	uint8_t x559 = UINT8_MAX;
	uint64_t x560 = 765474643080LLU;
	uint64_t t67 = 74LLU;

	t67 = (x557+(x558%(x559<x560)));

	if (t67 != 8119551054268LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x561 = INT64_MAX;
	uint16_t x563 = UINT16_MAX;
	volatile int64_t x564 = INT64_MAX;

	t68 = (x561+(x562%(x563<x564)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x569 = 0U;
	static uint64_t x570 = 9984788500514471LLU;
	volatile int64_t x571 = INT64_MIN;
	volatile int16_t x572 = -1;
	uint64_t t69 = 673115484LLU;

	t69 = (x569+(x570%(x571<x572)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x577 = -1;
	int16_t x578 = INT16_MAX;
	volatile int8_t x579 = INT8_MAX;
	static int16_t x580 = INT16_MAX;
	static int32_t t70 = 47457348;

	t70 = (x577+(x578%(x579<x580)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x589 = 52713LLU;
	int64_t x590 = INT64_MAX;
	static int8_t x591 = -1;
	static int32_t x592 = 537129489;

	t71 = (x589+(x590%(x591<x592)));

	if (t71 != 52713LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x593 = INT64_MAX;
	uint8_t x594 = 10U;
	int64_t x595 = -1054450874896LL;
	int16_t x596 = 27;

	t72 = (x593+(x594%(x595<x596)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x597 = -494795366LL;
	int32_t x599 = INT32_MIN;
	static volatile int64_t t73 = -2332746727583942LL;

	t73 = (x597+(x598%(x599<x600)));

	if (t73 != -494795366LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x601 = 708;
	int64_t x602 = -828962350LL;
	uint8_t x603 = UINT8_MAX;
	int16_t x604 = INT16_MAX;
	int64_t t74 = 88806400241481LL;

	t74 = (x601+(x602%(x603<x604)));

	if (t74 != 708LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x605 = -1LL;
	static int16_t x607 = INT16_MAX;
	int64_t t75 = 1LL;

	t75 = (x605+(x606%(x607<x608)));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x613 = -1;
	volatile uint16_t x614 = 0U;
	uint8_t x615 = 13U;
	uint32_t x616 = 38822U;
	int32_t t76 = -17500;

	t76 = (x613+(x614%(x615<x616)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x625 = 6U;
	uint32_t x628 = 101008U;

	t77 = (x625+(x626%(x627<x628)));

	if (t77 != 6LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x633 = INT16_MAX;
	uint8_t x634 = 2U;
	int16_t x635 = INT16_MIN;
	int8_t x636 = INT8_MAX;
	int32_t t78 = -103632;

	t78 = (x633+(x634%(x635<x636)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x665 = -1;
	static int8_t x666 = INT8_MIN;
	int64_t x667 = INT64_MIN;
	int32_t t79 = -40500;

	t79 = (x665+(x666%(x667<x668)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x673 = 492U;
	int64_t x674 = INT64_MAX;
	int32_t x676 = INT32_MAX;
	int64_t t80 = -247LL;

	t80 = (x673+(x674%(x675<x676)));

	if (t80 != 492LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x681 = 1436U;
	uint8_t x682 = 1U;
	volatile uint16_t x684 = UINT16_MAX;
	volatile uint32_t t81 = 21U;

	t81 = (x681+(x682%(x683<x684)));

	if (t81 != 1436U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x685 = INT16_MIN;
	static uint16_t x686 = UINT16_MAX;
	static int64_t x687 = INT64_MIN;
	volatile uint32_t x688 = 4113U;
	static volatile int32_t t82 = 914;

	t82 = (x685+(x686%(x687<x688)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x693 = 1;
	int32_t x694 = INT32_MIN;
	int8_t x696 = -1;
	static volatile int32_t t83 = 325604;

	t83 = (x693+(x694%(x695<x696)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x707 = INT64_MIN;
	int8_t x708 = INT8_MIN;

	t84 = (x705+(x706%(x707<x708)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x713 = UINT16_MAX;
	int16_t x714 = INT16_MAX;
	static int8_t x715 = INT8_MIN;
	static volatile int32_t t85 = -19254;

	t85 = (x713+(x714%(x715<x716)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x717 = 30579691726952LLU;
	int32_t x718 = 13331230;
	volatile int16_t x720 = 457;
	uint64_t t86 = 103LLU;

	t86 = (x717+(x718%(x719<x720)));

	if (t86 != 30579691726952LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x729 = INT32_MIN;
	int64_t x730 = INT64_MIN;
	volatile uint16_t x731 = UINT16_MAX;

	t87 = (x729+(x730%(x731<x732)));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x738 = UINT64_MAX;
	static int32_t x739 = INT32_MIN;

	t88 = (x737+(x738%(x739<x740)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x745 = UINT32_MAX;
	uint16_t x746 = 1043U;
	uint32_t x747 = 96870U;
	static uint64_t x748 = 748206LLU;
	volatile uint32_t t89 = UINT32_MAX;

	t89 = (x745+(x746%(x747<x748)));

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x753 = -1LL;
	volatile int32_t x754 = -155627;
	static int16_t x755 = -1;
	static int8_t x756 = 1;
	volatile int64_t t90 = 447760LL;

	t90 = (x753+(x754%(x755<x756)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x757 = INT8_MAX;
	static int16_t x758 = 775;
	uint8_t x759 = 62U;
	volatile uint8_t x760 = UINT8_MAX;
	int32_t t91 = 0;

	t91 = (x757+(x758%(x759<x760)));

	if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x765 = 14U;
	uint64_t x766 = UINT64_MAX;
	volatile uint8_t x767 = UINT8_MAX;
	static int32_t x768 = INT32_MAX;
	uint64_t t92 = 3003970165091962119LLU;

	t92 = (x765+(x766%(x767<x768)));

	if (t92 != 14LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x769 = INT64_MAX;
	int8_t x770 = 11;
	int32_t x771 = INT32_MIN;
	int8_t x772 = INT8_MIN;
	static volatile int64_t t93 = INT64_MAX;

	t93 = (x769+(x770%(x771<x772)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x777 = 56U;
	uint8_t x779 = 0U;
	int64_t x780 = INT64_MAX;
	int32_t t94 = 16544;

	t94 = (x777+(x778%(x779<x780)));

	if (t94 != 56) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x801 = 123816;
	int16_t x802 = -1;
	uint64_t x804 = UINT64_MAX;
	volatile int32_t t95 = 90;

	t95 = (x801+(x802%(x803<x804)));

	if (t95 != 123816) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x809 = 5U;
	static int64_t x810 = INT64_MIN;
	int8_t x811 = INT8_MIN;
	static uint8_t x812 = 40U;
	int64_t t96 = 92LL;

	t96 = (x809+(x810%(x811<x812)));

	if (t96 != 5LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x813 = INT8_MAX;
	uint8_t x814 = 1U;
	static uint64_t x815 = 95591611703117LLU;
	int64_t x816 = -48938983LL;
	int32_t t97 = -11;

	t97 = (x813+(x814%(x815<x816)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x821 = -1;
	int8_t x822 = 0;
	uint8_t x824 = 0U;

	t98 = (x821+(x822%(x823<x824)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x825 = -1;
	static volatile int8_t x826 = 0;
	uint8_t x828 = 2U;

	t99 = (x825+(x826%(x827<x828)));

	if (t99 != -1) { NG(); } else { ; }
	
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

