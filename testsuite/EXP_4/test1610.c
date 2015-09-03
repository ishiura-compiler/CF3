#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -1;
static int32_t x9 = -628;
volatile int64_t x12 = INT64_MAX;
volatile uint8_t x21 = UINT8_MAX;
static uint8_t x22 = UINT8_MAX;
int8_t x23 = -1;
volatile int8_t x26 = 21;
static uint8_t x45 = UINT8_MAX;
int64_t x47 = INT64_MIN;
volatile int8_t x49 = INT8_MIN;
int32_t t5 = -598;
int32_t x55 = INT32_MIN;
static int16_t x57 = INT16_MIN;
uint16_t x59 = UINT16_MAX;
int64_t t7 = 338524886254LL;
uint64_t t10 = 24LLU;
volatile int64_t x87 = INT64_MIN;
volatile uint64_t t15 = 30183LLU;
int16_t x121 = -1;
volatile uint32_t x125 = 33012880U;
int64_t x128 = 1LL;
uint64_t x139 = UINT64_MAX;
static int8_t x143 = 28;
int32_t t19 = 208944618;
volatile uint64_t t20 = 41LLU;
volatile uint32_t x153 = 140929U;
uint32_t t21 = 3U;
int16_t x158 = INT16_MAX;
uint32_t x161 = 427456U;
int16_t x163 = 2216;
uint32_t x165 = 871551U;
int8_t x166 = INT8_MAX;
uint32_t x168 = 323616U;
volatile int32_t x171 = 39;
int64_t x175 = -1LL;
volatile uint32_t t26 = 550893U;
uint32_t x181 = 11952515U;
uint64_t x182 = UINT64_MAX;
volatile int16_t x189 = -1;
int64_t t29 = INT64_MAX;
volatile int8_t x197 = 1;
static int32_t x199 = -1;
int64_t x211 = INT64_MIN;
uint32_t x224 = 10U;
uint32_t t33 = 7661U;
int64_t t39 = 1LL;
int32_t t40 = -28262;
int64_t x288 = 82123347251LL;
volatile int64_t x289 = INT64_MAX;
int16_t x291 = 1;
volatile uint32_t x294 = 60411240U;
volatile int16_t x295 = -1;
static int8_t x296 = -19;
int8_t x299 = -1;
uint8_t x309 = 5U;
uint64_t t46 = 17583290291407LLU;
volatile int16_t x313 = INT16_MAX;
volatile int16_t x316 = INT16_MIN;
uint64_t t48 = 43911LLU;
int64_t t49 = -42053281703LL;
volatile int32_t t50 = 70;
static volatile uint8_t x354 = 1U;
volatile int8_t x386 = INT8_MAX;
int64_t x388 = INT64_MIN;
int8_t x391 = INT8_MIN;
int16_t x393 = -3;
int16_t x395 = -1;
static volatile int64_t t58 = -61734LL;
static int64_t x429 = -1LL;
uint8_t x435 = UINT8_MAX;
volatile int64_t t62 = -124682335480LL;
uint16_t x446 = 5431U;
uint32_t x447 = 14541U;
int32_t t63 = 95471;
int32_t t65 = -981;
uint32_t x478 = 31653U;
static int32_t x479 = INT32_MIN;
volatile int32_t t67 = 706272;
int16_t x501 = -117;
volatile uint16_t x509 = 0U;
volatile int64_t x511 = 709LL;
uint32_t x514 = 48920545U;
int32_t x516 = -15;
volatile uint32_t t72 = 10393U;
int64_t x519 = 2483216946146797LL;
uint16_t x520 = UINT16_MAX;
int64_t x526 = INT64_MAX;
int8_t x528 = INT8_MIN;
static uint64_t x541 = 67371188553LLU;
uint64_t x544 = 9LLU;
static uint64_t x546 = UINT64_MAX;
int8_t x549 = -6;
uint8_t x552 = 113U;
volatile uint64_t t78 = 143399628224955LLU;
static int16_t x553 = INT16_MIN;
uint64_t t79 = 4849008930325LLU;
int64_t t80 = 5886137411LL;
volatile int64_t t81 = -318763903010LL;
int8_t x571 = INT8_MIN;
uint32_t x572 = 1410255U;
uint8_t x581 = 3U;
int32_t t84 = -4795892;
int8_t x591 = INT8_MIN;
int8_t x592 = INT8_MIN;
volatile int64_t x593 = INT64_MIN;
int64_t t86 = -15671098335LL;
int16_t x599 = INT16_MIN;
int32_t x627 = -13489;
int8_t x639 = INT8_MAX;
int32_t x651 = -1;
int64_t x652 = -1LL;
static volatile int64_t t93 = -15224578620190485LL;
volatile int16_t x674 = 1780;
volatile uint32_t x709 = 2U;
uint32_t x710 = 2U;


void f0(void) {
	static uint32_t x5 = 7932333U;
	int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MIN;
	int64_t t0 = 0LL;

	t0 = (x5&(x6>>(x7<=x8)));

	if (t0 != 7932333LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 22250126278990515LLU;
	uint8_t x11 = 0U;
	uint64_t t1 = 62524986LLU;

	t1 = (x9&(x10>>(x11<=x12)));

	if (t1 != 11125063139495176LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x24 = INT16_MAX;
	volatile int32_t t2 = 654144053;

	t2 = (x21&(x22>>(x23<=x24)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 2151U;
	uint8_t x27 = 1U;
	static int64_t x28 = INT64_MIN;
	volatile int32_t t3 = 3890;

	t3 = (x25&(x26>>(x27<=x28)));

	if (t3 != 5) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x46 = 48365099934LL;
	volatile uint16_t x48 = 20U;
	volatile int64_t t4 = -2855LL;

	t4 = (x45&(x46>>(x47<=x48)));

	if (t4 != 207LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x50 = 3;
	int8_t x51 = -2;
	int16_t x52 = INT16_MIN;

	t5 = (x49&(x50>>(x51<=x52)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x53 = 0U;
	static int32_t x54 = 164036829;
	uint16_t x56 = UINT16_MAX;
	int32_t t6 = 29872;

	t6 = (x53&(x54>>(x55<=x56)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x58 = 20LL;
	int64_t x60 = -1LL;

	t7 = (x57&(x58>>(x59<=x60)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = INT32_MIN;
	static int8_t x62 = 0;
	static int16_t x63 = INT16_MIN;
	volatile uint32_t x64 = 272U;
	int32_t t8 = -8;

	t8 = (x61&(x62>>(x63<=x64)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = -1LL;
	uint16_t x70 = 868U;
	int16_t x71 = INT16_MIN;
	int64_t x72 = 104956LL;
	int64_t t9 = 1889848LL;

	t9 = (x69&(x70>>(x71<=x72)));

	if (t9 != 434LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint64_t x77 = 2357066110LLU;
	static int16_t x78 = INT16_MAX;
	uint32_t x79 = UINT32_MAX;
	int64_t x80 = 1070420725235601LL;

	t10 = (x77&(x78>>(x79<=x80)));

	if (t10 != 14718LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x81 = 0;
	static uint64_t x82 = UINT64_MAX;
	static int16_t x83 = 867;
	static uint8_t x84 = 3U;
	volatile uint64_t t11 = 72449549027535LLU;

	t11 = (x81&(x82>>(x83<=x84)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x85 = INT64_MIN;
	static uint32_t x86 = 54U;
	uint8_t x88 = UINT8_MAX;
	volatile int64_t t12 = 31665049170018LL;

	t12 = (x85&(x86>>(x87<=x88)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x93 = INT16_MIN;
	static uint16_t x94 = 755U;
	uint8_t x95 = 50U;
	volatile int64_t x96 = 2108763133384789508LL;
	int32_t t13 = -3;

	t13 = (x93&(x94>>(x95<=x96)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x101 = 2;
	uint32_t x102 = 3777954U;
	int64_t x103 = INT64_MIN;
	static uint16_t x104 = 17U;
	uint32_t t14 = 3U;

	t14 = (x101&(x102>>(x103<=x104)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x113 = INT16_MIN;
	uint64_t x114 = UINT64_MAX;
	uint32_t x115 = 22089037U;
	static int16_t x116 = INT16_MIN;

	t15 = (x113&(x114>>(x115<=x116)));

	if (t15 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x122 = INT8_MAX;
	volatile int8_t x123 = -1;
	int32_t x124 = -175293513;
	int32_t t16 = 348551;

	t16 = (x121&(x122>>(x123<=x124)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x126 = 1455079514U;
	uint64_t x127 = UINT64_MAX;
	static volatile uint32_t t17 = 3154U;

	t17 = (x125&(x126>>(x127<=x128)));

	if (t17 != 11698192U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x137 = 0U;
	uint64_t x138 = UINT64_MAX;
	static int64_t x140 = 57533322106679889LL;
	uint64_t t18 = 3356513385728429LLU;

	t18 = (x137&(x138>>(x139<=x140)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x141 = INT32_MIN;
	uint16_t x142 = 4721U;
	int16_t x144 = INT16_MIN;

	t19 = (x141&(x142>>(x143<=x144)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x145 = 1764;
	static uint64_t x146 = 3800435513833LLU;
	int16_t x147 = INT16_MAX;
	static volatile uint64_t x148 = 7130870938599043115LLU;

	t20 = (x145&(x146>>(x147<=x148)));

	if (t20 != 1252LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x154 = 114752879U;
	static int8_t x155 = INT8_MAX;
	uint16_t x156 = 0U;

	t21 = (x153&(x154>>(x155<=x156)));

	if (t21 != 140289U) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint8_t x157 = UINT8_MAX;
	static int16_t x159 = 655;
	int8_t x160 = 1;
	volatile int32_t t22 = 20;

	t22 = (x157&(x158>>(x159<=x160)));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x162 = INT16_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t23 = 948U;

	t23 = (x161&(x162>>(x163<=x164)));

	if (t23 != 1472U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x167 = -1;
	volatile uint32_t t24 = 2013641164U;

	t24 = (x165&(x166>>(x167<=x168)));

	if (t24 != 127U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x169 = 200854276U;
	static uint64_t x170 = UINT64_MAX;
	static int64_t x172 = -2LL;
	uint64_t t25 = 4LLU;

	t25 = (x169&(x170>>(x171<=x172)));

	if (t25 != 200854276LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x173 = -1;
	volatile uint32_t x174 = 2588956U;
	static uint16_t x176 = UINT16_MAX;

	t26 = (x173&(x174>>(x175<=x176)));

	if (t26 != 1294478U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MAX;
	uint64_t t27 = 2LLU;

	t27 = (x181&(x182>>(x183<=x184)));

	if (t27 != 11952515LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	int8_t x187 = 1;
	static int64_t x188 = INT64_MIN;
	int32_t t28 = 371751;

	t28 = (x185&(x186>>(x187<=x188)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x190 = INT64_MAX;
	static int16_t x191 = 0;
	static int16_t x192 = INT16_MIN;

	t29 = (x189&(x190>>(x191<=x192)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x198 = 63;
	int16_t x200 = -1;
	static volatile int32_t t30 = 56153;

	t30 = (x197&(x198>>(x199<=x200)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x209 = -1;
	uint64_t x210 = UINT64_MAX;
	int16_t x212 = -951;
	uint64_t t31 = 7619257LLU;

	t31 = (x209&(x210>>(x211<=x212)));

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x213 = INT32_MAX;
	static uint32_t x214 = 21154049U;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = 314;
	uint32_t t32 = 1752088U;

	t32 = (x213&(x214>>(x215<=x216)));

	if (t32 != 21154049U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x221 = INT16_MIN;
	uint32_t x222 = 31U;
	volatile uint16_t x223 = 882U;

	t33 = (x221&(x222>>(x223<=x224)));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MAX;
	static int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	static int64_t t34 = 469977LL;

	t34 = (x225&(x226>>(x227<=x228)));

	if (t34 != 255LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x229 = 0U;
	static uint64_t x230 = 2275866963LLU;
	uint64_t x231 = 249614991712620519LLU;
	int16_t x232 = INT16_MIN;
	static volatile uint64_t t35 = 25303LLU;

	t35 = (x229&(x230>>(x231<=x232)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = INT64_MAX;
	volatile uint16_t x243 = 2U;
	volatile int64_t x244 = 2016755929575LL;
	uint64_t t36 = 2060807744930067LLU;

	t36 = (x241&(x242>>(x243<=x244)));

	if (t36 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x257 = 1703LLU;
	static uint16_t x258 = UINT16_MAX;
	static int64_t x259 = INT64_MIN;
	int64_t x260 = INT64_MAX;
	volatile uint64_t t37 = 6027LLU;

	t37 = (x257&(x258>>(x259<=x260)));

	if (t37 != 1703LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x261 = INT64_MAX;
	int16_t x262 = INT16_MAX;
	static int32_t x263 = 310232053;
	uint8_t x264 = 28U;
	static int64_t t38 = -186LL;

	t38 = (x261&(x262>>(x263<=x264)));

	if (t38 != 32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x273 = -1LL;
	volatile int16_t x274 = INT16_MAX;
	int8_t x275 = -1;
	uint8_t x276 = UINT8_MAX;

	t39 = (x273&(x274>>(x275<=x276)));

	if (t39 != 16383LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = 15437;
	static int64_t x279 = INT64_MIN;
	int16_t x280 = INT16_MAX;

	t40 = (x277&(x278>>(x279<=x280)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x285 = -1LL;
	int8_t x286 = 0;
	int64_t x287 = INT64_MIN;
	int64_t t41 = 258783851LL;

	t41 = (x285&(x286>>(x287<=x288)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x290 = 135916526LL;
	uint32_t x292 = 1453864361U;
	int64_t t42 = 1841794627108941808LL;

	t42 = (x289&(x290>>(x291<=x292)));

	if (t42 != 67958263LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x293 = 0;
	uint32_t t43 = 3U;

	t43 = (x293&(x294>>(x295<=x296)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x297 = INT64_MIN;
	static volatile uint64_t x298 = 2168756967866228973LLU;
	int32_t x300 = INT32_MIN;
	static uint64_t t44 = 19LLU;

	t44 = (x297&(x298>>(x299<=x300)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x301 = INT64_MIN;
	uint16_t x302 = 2860U;
	volatile int16_t x303 = 1587;
	int32_t x304 = INT32_MIN;
	int64_t t45 = 86995404LL;

	t45 = (x301&(x302>>(x303<=x304)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x310 = 68625292912273016LLU;
	int32_t x311 = INT32_MAX;
	volatile uint8_t x312 = 4U;

	t46 = (x309&(x310>>(x311<=x312)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x314 = 2168240326LLU;
	int32_t x315 = INT32_MIN;
	uint64_t t47 = 12226983980499239LLU;

	t47 = (x313&(x314>>(x315<=x316)));

	if (t47 != 23651LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x317 = UINT32_MAX;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	int8_t x320 = -1;

	t48 = (x317&(x318>>(x319<=x320)));

	if (t48 != 4294967295LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x325 = INT64_MAX;
	int8_t x326 = 21;
	int8_t x327 = 1;
	int64_t x328 = -10190LL;

	t49 = (x325&(x326>>(x327<=x328)));

	if (t49 != 21LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x337 = 2U;
	volatile uint16_t x338 = 4U;
	int32_t x339 = INT32_MAX;
	static int64_t x340 = INT64_MIN;

	t50 = (x337&(x338>>(x339<=x340)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x345 = INT16_MIN;
	uint16_t x346 = UINT16_MAX;
	static uint32_t x347 = 221750U;
	int8_t x348 = -1;
	volatile int32_t t51 = -2;

	t51 = (x345&(x346>>(x347<=x348)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x353 = INT64_MIN;
	uint64_t x355 = 86307904LLU;
	static int64_t x356 = INT64_MIN;
	int64_t t52 = 37020439767LL;

	t52 = (x353&(x354>>(x355<=x356)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x357 = INT8_MAX;
	uint64_t x358 = 166567552444495982LLU;
	uint8_t x359 = UINT8_MAX;
	volatile int64_t x360 = -1LL;
	uint64_t t53 = 4300LLU;

	t53 = (x357&(x358>>(x359<=x360)));

	if (t53 != 110LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x377 = INT32_MAX;
	volatile int16_t x378 = 11;
	int8_t x379 = -1;
	int64_t x380 = -712972912335LL;
	volatile int32_t t54 = -47448;

	t54 = (x377&(x378>>(x379<=x380)));

	if (t54 != 11) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = 3;
	int32_t x383 = INT32_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t55 = 1216907U;

	t55 = (x381&(x382>>(x383<=x384)));

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x385 = INT32_MIN;
	uint32_t x387 = UINT32_MAX;
	int32_t t56 = -1606889;

	t56 = (x385&(x386>>(x387<=x388)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x389 = INT16_MIN;
	uint32_t x390 = 265802610U;
	volatile int16_t x392 = INT16_MIN;
	uint32_t t57 = 7816U;

	t57 = (x389&(x390>>(x391<=x392)));

	if (t57 != 265781248U) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x394 = INT64_MAX;
	int16_t x396 = -35;

	t58 = (x393&(x394>>(x395<=x396)));

	if (t58 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x413 = INT64_MIN;
	uint64_t x414 = 0LLU;
	static int32_t x415 = -252647788;
	uint32_t x416 = UINT32_MAX;
	volatile uint64_t t59 = 45LLU;

	t59 = (x413&(x414>>(x415<=x416)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x430 = UINT8_MAX;
	static int8_t x431 = INT8_MAX;
	uint32_t x432 = UINT32_MAX;
	static int64_t t60 = -109014LL;

	t60 = (x429&(x430>>(x431<=x432)));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x433 = INT64_MIN;
	static volatile uint8_t x434 = 10U;
	int8_t x436 = INT8_MIN;
	static int64_t t61 = -57LL;

	t61 = (x433&(x434>>(x435<=x436)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x441 = -26;
	int64_t x442 = INT64_MAX;
	int32_t x443 = -248589;
	static volatile int16_t x444 = 0;

	t62 = (x441&(x442>>(x443<=x444)));

	if (t62 != 4611686018427387878LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x445 = INT32_MIN;
	int64_t x448 = 125939857968783LL;

	t63 = (x445&(x446>>(x447<=x448)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x453 = -1LL;
	volatile int16_t x454 = INT16_MAX;
	volatile int32_t x455 = INT32_MAX;
	static volatile int64_t x456 = -12881110LL;
	static volatile int64_t t64 = 2LL;

	t64 = (x453&(x454>>(x455<=x456)));

	if (t64 != 32767LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x461 = INT16_MIN;
	volatile uint16_t x462 = UINT16_MAX;
	static volatile int32_t x463 = INT32_MIN;
	int8_t x464 = INT8_MIN;

	t65 = (x461&(x462>>(x463<=x464)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x477 = 128686LLU;
	uint8_t x480 = 1U;
	uint64_t t66 = 68357372368189032LLU;

	t66 = (x477&(x478>>(x479<=x480)));

	if (t66 != 13442LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x485 = -1;
	static int8_t x486 = 0;
	volatile uint32_t x487 = 1297U;
	int64_t x488 = INT64_MIN;

	t67 = (x485&(x486>>(x487<=x488)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x493 = 128U;
	static uint64_t x494 = 10599561907LLU;
	static uint64_t x495 = 6431LLU;
	uint64_t x496 = UINT64_MAX;
	static uint64_t t68 = 10475024858LLU;

	t68 = (x493&(x494>>(x495<=x496)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x502 = UINT8_MAX;
	volatile uint16_t x503 = 1U;
	uint8_t x504 = UINT8_MAX;
	int32_t t69 = -217853;

	t69 = (x501&(x502>>(x503<=x504)));

	if (t69 != 11) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x505 = 115271015U;
	static uint8_t x506 = 25U;
	uint32_t x507 = 4U;
	volatile int16_t x508 = INT16_MIN;
	uint32_t t70 = 2750U;

	t70 = (x505&(x506>>(x507<=x508)));

	if (t70 != 4U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x510 = 0;
	static int32_t x512 = INT32_MIN;
	static int32_t t71 = 3190072;

	t71 = (x509&(x510>>(x511<=x512)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x513 = INT32_MIN;
	uint64_t x515 = 439077805032432LLU;

	t72 = (x513&(x514>>(x515<=x516)));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x517 = INT64_MAX;
	uint16_t x518 = 9815U;
	volatile int64_t t73 = 108791933863463726LL;

	t73 = (x517&(x518>>(x519<=x520)));

	if (t73 != 9815LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x525 = -1;
	int8_t x527 = INT8_MIN;
	int64_t t74 = -391LL;

	t74 = (x525&(x526>>(x527<=x528)));

	if (t74 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x537 = -56;
	uint16_t x538 = 845U;
	static volatile int32_t x539 = -18377;
	static int16_t x540 = INT16_MAX;
	volatile int32_t t75 = 7;

	t75 = (x537&(x538>>(x539<=x540)));

	if (t75 != 384) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x542 = 0;
	volatile uint64_t x543 = UINT64_MAX;
	volatile uint64_t t76 = 26153892070LLU;

	t76 = (x541&(x542>>(x543<=x544)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x545 = 23U;
	int32_t x547 = INT32_MIN;
	int64_t x548 = INT64_MAX;
	volatile uint64_t t77 = 2650943LLU;

	t77 = (x545&(x546>>(x547<=x548)));

	if (t77 != 23LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x550 = 87LLU;
	uint32_t x551 = 31957045U;

	t78 = (x549&(x550>>(x551<=x552)));

	if (t78 != 82LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x554 = 1001865126466393LLU;
	volatile int64_t x555 = 0LL;
	int64_t x556 = -1LL;

	t79 = (x553&(x554>>(x555<=x556)));

	if (t79 != 1001865126445056LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x557 = INT64_MIN;
	uint8_t x558 = 0U;
	int32_t x559 = INT32_MAX;
	int64_t x560 = -678532446605595803LL;

	t80 = (x557&(x558>>(x559<=x560)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x561 = 444286U;
	static volatile int64_t x562 = 17106637LL;
	uint8_t x563 = UINT8_MAX;
	static int8_t x564 = 0;

	t81 = (x561&(x562>>(x563<=x564)));

	if (t81 != 263756LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x565 = -6;
	uint32_t x566 = 3U;
	static int8_t x567 = INT8_MIN;
	int16_t x568 = 13395;
	volatile uint32_t t82 = 67U;

	t82 = (x565&(x566>>(x567<=x568)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x569 = -1;
	volatile int32_t x570 = INT32_MAX;
	int32_t t83 = INT32_MAX;

	t83 = (x569&(x570>>(x571<=x572)));

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x582 = UINT8_MAX;
	volatile int32_t x583 = 1;
	volatile int16_t x584 = -1;

	t84 = (x581&(x582>>(x583<=x584)));

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x589 = 36;
	int8_t x590 = INT8_MAX;
	volatile int32_t t85 = -31281927;

	t85 = (x589&(x590>>(x591<=x592)));

	if (t85 != 36) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x594 = 2U;
	uint64_t x595 = UINT64_MAX;
	static uint64_t x596 = UINT64_MAX;

	t86 = (x593&(x594>>(x595<=x596)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x597 = -7839107935770158LL;
	int64_t x598 = INT64_MAX;
	static int8_t x600 = INT8_MIN;
	static volatile int64_t t87 = 2888131712LL;

	t87 = (x597&(x598>>(x599<=x600)));

	if (t87 != 4603846910491617746LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x613 = -1LL;
	static uint32_t x614 = UINT32_MAX;
	uint32_t x615 = 129846U;
	uint8_t x616 = 6U;
	volatile int64_t t88 = 226957369739LL;

	t88 = (x613&(x614>>(x615<=x616)));

	if (t88 != 4294967295LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x625 = INT16_MIN;
	uint64_t x626 = 55LLU;
	static volatile int64_t x628 = 6333424931115674LL;
	uint64_t t89 = 39125557699582LLU;

	t89 = (x625&(x626>>(x627<=x628)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x637 = UINT32_MAX;
	uint8_t x638 = 32U;
	volatile int64_t x640 = -1LL;
	volatile uint32_t t90 = 116U;

	t90 = (x637&(x638>>(x639<=x640)));

	if (t90 != 32U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x641 = 62;
	static uint8_t x642 = 13U;
	int64_t x643 = 28081080131LL;
	static int64_t x644 = -1LL;
	volatile int32_t t91 = -1562776;

	t91 = (x641&(x642>>(x643<=x644)));

	if (t91 != 12) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x649 = -1;
	uint32_t x650 = UINT32_MAX;
	volatile uint32_t t92 = 325447U;

	t92 = (x649&(x650>>(x651<=x652)));

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x653 = INT64_MAX;
	static volatile int8_t x654 = 1;
	uint8_t x655 = 53U;
	int16_t x656 = INT16_MIN;

	t93 = (x653&(x654>>(x655<=x656)));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x657 = INT8_MAX;
	uint32_t x658 = 126786466U;
	volatile int16_t x659 = -1;
	int32_t x660 = INT32_MAX;
	uint32_t t94 = 860U;

	t94 = (x657&(x658>>(x659<=x660)));

	if (t94 != 81U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x665 = 226008U;
	static int32_t x666 = INT32_MAX;
	int64_t x667 = -1LL;
	static volatile int8_t x668 = INT8_MIN;
	volatile uint32_t t95 = 277116U;

	t95 = (x665&(x666>>(x667<=x668)));

	if (t95 != 226008U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x669 = -1;
	volatile uint32_t x670 = 20U;
	int32_t x671 = INT32_MIN;
	int16_t x672 = 4976;
	uint32_t t96 = 36U;

	t96 = (x669&(x670>>(x671<=x672)));

	if (t96 != 10U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x673 = UINT8_MAX;
	volatile int8_t x675 = INT8_MIN;
	volatile int8_t x676 = INT8_MIN;
	static int32_t t97 = -262894260;

	t97 = (x673&(x674>>(x675<=x676)));

	if (t97 != 122) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x693 = 11319471553269996LLU;
	int16_t x694 = 3507;
	int8_t x695 = 0;
	uint64_t x696 = 3431692525448LLU;
	volatile uint64_t t98 = 67171949545968LLU;

	t98 = (x693&(x694>>(x695<=x696)));

	if (t98 != 200LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x711 = UINT8_MAX;
	int16_t x712 = 621;
	static volatile uint32_t t99 = 1299867U;

	t99 = (x709&(x710>>(x711<=x712)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

