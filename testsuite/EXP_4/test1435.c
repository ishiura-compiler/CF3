#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x7 = INT8_MAX;
uint64_t x13 = 3LLU;
static int8_t x64 = -1;
uint32_t x65 = UINT32_MAX;
int64_t x70 = 16930022310LL;
volatile int16_t x80 = -1;
int64_t x100 = -1LL;
int16_t x102 = 805;
uint32_t x109 = UINT32_MAX;
uint64_t x114 = UINT64_MAX;
int32_t x115 = -203;
volatile int16_t x116 = INT16_MIN;
int8_t x123 = INT8_MIN;
int64_t x136 = INT64_MAX;
uint64_t x157 = 4059416583960986LLU;
volatile int64_t x159 = INT64_MIN;
int32_t t22 = 21928;
uint32_t x189 = 3U;
volatile uint32_t t23 = 8U;
uint16_t x199 = UINT16_MAX;
static int16_t x200 = -1;
uint32_t t25 = 51572485U;
uint16_t x213 = UINT16_MAX;
int8_t x214 = INT8_MAX;
static int8_t x215 = INT8_MAX;
uint64_t t27 = 1846671891735703LLU;
int32_t x240 = -235833693;
volatile uint8_t x244 = 4U;
int64_t x254 = INT64_MAX;
volatile int64_t x256 = INT64_MAX;
static volatile int32_t x262 = 6248328;
uint64_t x264 = UINT64_MAX;
volatile int32_t t34 = 7841;
uint8_t x294 = UINT8_MAX;
int32_t x309 = INT32_MIN;
uint32_t x310 = 209U;
volatile int8_t x321 = INT8_MIN;
volatile int32_t t39 = 286289;
uint8_t x334 = 11U;
int64_t x335 = INT64_MIN;
int8_t x343 = 20;
static int8_t x348 = INT8_MAX;
volatile int64_t t42 = 15999165767LL;
int8_t x355 = INT8_MIN;
int32_t x357 = INT32_MIN;
int64_t x359 = -1LL;
uint32_t x370 = 33U;
int32_t x372 = INT32_MAX;
uint32_t t46 = 49U;
volatile int16_t x373 = INT16_MAX;
volatile uint8_t x375 = UINT8_MAX;
static int32_t t47 = -1;
uint16_t x379 = 0U;
static uint64_t x380 = 1841LLU;
int32_t x391 = -1;
volatile uint32_t t49 = 950725U;
static int32_t x398 = 4454900;
int32_t t52 = -1;
int16_t x413 = INT16_MAX;
volatile int64_t t54 = -165626536LL;
volatile int32_t t56 = 342;
static volatile int8_t x467 = -1;
int16_t x475 = INT16_MIN;
uint64_t t61 = 410996951LLU;
uint16_t x493 = UINT16_MAX;
int8_t x494 = 17;
static int16_t x497 = INT16_MAX;
static uint64_t x503 = 66956143LLU;
volatile uint8_t x509 = 4U;
int16_t x512 = -1;
int32_t x546 = INT32_MAX;
int16_t x559 = -1;
int32_t x560 = -4;
int64_t x569 = -1LL;
volatile uint64_t x578 = 2915471949279999387LLU;
uint8_t x579 = UINT8_MAX;
int64_t x608 = -496230LL;
uint16_t x609 = 12U;
volatile int32_t x612 = -1;
static int64_t t78 = -2166326925442561160LL;
int64_t x624 = INT64_MIN;
int32_t t80 = -101;
static volatile int8_t x628 = INT8_MIN;
static uint32_t x658 = UINT32_MAX;
static int32_t x693 = INT32_MAX;
uint64_t x704 = 2201588100748183LLU;
static int16_t x716 = 425;
int32_t x722 = 7312064;
volatile int8_t x724 = INT8_MIN;
volatile uint8_t x725 = 122U;
uint8_t x739 = UINT8_MAX;
volatile int16_t x744 = 0;
volatile int32_t x753 = INT32_MAX;
uint32_t x754 = 47284107U;
int32_t x755 = INT32_MIN;
int32_t x768 = 4043458;
int64_t t99 = -14379LL;


void f0(void) {
	uint64_t x5 = 1005543647132905937LLU;
	volatile int16_t x6 = INT16_MAX;
	volatile int64_t x8 = INT64_MAX;
	uint64_t t0 = 872245LLU;

	t0 = (x5%(x6>>(x7<x8)));

	if (t0 != 3818LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x14 = 177422854470505124LLU;
	uint16_t x15 = 0U;
	static volatile int16_t x16 = -13;
	static volatile uint64_t t1 = 168740137455LLU;

	t1 = (x13%(x14>>(x15<x16)));

	if (t1 != 3LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x29 = 4391132U;
	int16_t x30 = INT16_MAX;
	uint16_t x31 = 30058U;
	uint32_t x32 = 8069U;
	uint32_t t2 = 55917U;

	t2 = (x29%(x30>>(x31<x32)));

	if (t2 != 354U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x41 = 6058;
	uint16_t x42 = 12U;
	static uint16_t x43 = UINT16_MAX;
	static int32_t x44 = INT32_MAX;
	int32_t t3 = 776780;

	t3 = (x41%(x42>>(x43<x44)));

	if (t3 != 4) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x49 = 1132;
	volatile int32_t x50 = INT32_MAX;
	int64_t x51 = -1LL;
	static int64_t x52 = INT64_MAX;
	volatile int32_t t4 = -2168420;

	t4 = (x49%(x50>>(x51<x52)));

	if (t4 != 1132) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x57 = 9U;
	uint8_t x58 = 1U;
	int64_t x59 = -1LL;
	volatile int32_t x60 = INT32_MIN;
	static volatile int32_t t5 = -3092161;

	t5 = (x57%(x58>>(x59<x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x61 = 2U;
	int32_t x62 = INT32_MAX;
	int64_t x63 = -1LL;
	volatile int32_t t6 = -118224701;

	t6 = (x61%(x62>>(x63<x64)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x66 = 14700147LL;
	uint64_t x67 = UINT64_MAX;
	static int16_t x68 = INT16_MIN;
	int64_t t7 = -34146719299306303LL;

	t7 = (x65%(x66>>(x67<x68)));

	if (t7 != 2524371LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x69 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	static int16_t x72 = -1838;
	int64_t t8 = -4638044LL;

	t8 = (x69%(x70>>(x71<x72)));

	if (t8 != -2003982308LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x77 = 1;
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	int32_t t9 = -1055294;

	t9 = (x77%(x78>>(x79<x80)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	int32_t x91 = INT32_MAX;
	volatile uint32_t x92 = 487948819U;
	volatile int32_t t10 = 1343;

	t10 = (x89%(x90>>(x91<x92)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x93 = INT64_MAX;
	uint64_t x94 = 37740LLU;
	static int32_t x95 = -112933299;
	int8_t x96 = 1;
	uint64_t t11 = 280042LLU;

	t11 = (x93%(x94>>(x95<x96)));

	if (t11 != 3187LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int32_t x98 = 693;
	volatile int32_t x99 = INT32_MIN;
	volatile int32_t t12 = -73340883;

	t12 = (x97%(x98>>(x99<x100)));

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x101 = INT64_MIN;
	volatile uint8_t x103 = 3U;
	int16_t x104 = -38;
	static volatile int64_t t13 = 6050440155LL;

	t13 = (x101%(x102>>(x103<x104)));

	if (t13 != -463LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x105 = INT8_MIN;
	uint16_t x106 = 22924U;
	uint32_t x107 = UINT32_MAX;
	int8_t x108 = -8;
	volatile int32_t t14 = -38808;

	t14 = (x105%(x106>>(x107<x108)));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x110 = 126571091LL;
	int64_t x111 = INT64_MIN;
	uint8_t x112 = 2U;
	int64_t t15 = 71125636009586408LL;

	t15 = (x109%(x110>>(x111<x112)));

	if (t15 != 54835780LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x113 = 117U;
	uint64_t t16 = 2089503380LLU;

	t16 = (x113%(x114>>(x115<x116)));

	if (t16 != 117LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x121 = UINT16_MAX;
	uint64_t x122 = 16788LLU;
	int8_t x124 = INT8_MIN;
	uint64_t t17 = 6843337465866081014LLU;

	t17 = (x121%(x122>>(x123<x124)));

	if (t17 != 15171LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x133 = INT8_MIN;
	volatile uint64_t x134 = 4061465508280LLU;
	int32_t x135 = -112;
	volatile uint64_t t18 = 757LLU;

	t18 = (x133%(x134>>(x135<x136)));

	if (t18 != 281178423308LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x145 = -342;
	uint8_t x146 = UINT8_MAX;
	int32_t x147 = INT32_MIN;
	static int8_t x148 = INT8_MAX;
	int32_t t19 = 1;

	t19 = (x145%(x146>>(x147<x148)));

	if (t19 != -88) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x158 = 2U;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t20 = 9LLU;

	t20 = (x157%(x158>>(x159<x160)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x173 = -1LL;
	volatile int8_t x174 = 1;
	uint16_t x175 = 250U;
	int8_t x176 = INT8_MIN;
	int64_t t21 = -22813948695LL;

	t21 = (x173%(x174>>(x175<x176)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x177 = -13462640;
	uint16_t x178 = 19U;
	int32_t x179 = -1;
	int32_t x180 = INT32_MIN;

	t22 = (x177%(x178>>(x179<x180)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x190 = UINT8_MAX;
	uint8_t x191 = 15U;
	int8_t x192 = 0;

	t23 = (x189%(x190>>(x191<x192)));

	if (t23 != 3U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = 2646815407341014LLU;
	uint64_t t24 = 267066688463LLU;

	t24 = (x197%(x198>>(x199<x200)));

	if (t24 != 1087499949992282LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x205 = 28U;
	uint32_t x206 = 26511056U;
	static int16_t x207 = INT16_MAX;
	uint8_t x208 = UINT8_MAX;

	t25 = (x205%(x206>>(x207<x208)));

	if (t25 != 28U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x216 = -292;
	int32_t t26 = -254224;

	t26 = (x213%(x214>>(x215<x216)));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 13U;
	static uint16_t x219 = 15617U;
	int32_t x220 = INT32_MIN;

	t27 = (x217%(x218>>(x219<x220)));

	if (t27 != 2LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x237 = UINT8_MAX;
	volatile uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	uint64_t t28 = 12066273744671738LLU;

	t28 = (x237%(x238>>(x239<x240)));

	if (t28 != 255LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x241 = -1027;
	int32_t x242 = INT32_MAX;
	volatile int64_t x243 = INT64_MIN;
	static volatile int32_t t29 = -758597915;

	t29 = (x241%(x242>>(x243<x244)));

	if (t29 != -1027) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x246 = 24917444U;
	volatile uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 105U;
	volatile int64_t t30 = -3LL;

	t30 = (x245%(x246>>(x247<x248)));

	if (t30 != -16974356LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x253 = INT8_MAX;
	int32_t x255 = -74803384;
	static int64_t t31 = 4845650LL;

	t31 = (x253%(x254>>(x255<x256)));

	if (t31 != 127LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x261 = -3;
	volatile int32_t x263 = 2232450;
	volatile int32_t t32 = -107744;

	t32 = (x261%(x262>>(x263<x264)));

	if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x269 = 113206221U;
	uint64_t x270 = 1LLU;
	static uint16_t x271 = UINT16_MAX;
	int8_t x272 = INT8_MAX;
	volatile uint64_t t33 = 642LLU;

	t33 = (x269%(x270>>(x271<x272)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x285 = INT16_MAX;
	int16_t x286 = 1629;
	volatile int64_t x287 = INT64_MIN;
	uint8_t x288 = UINT8_MAX;

	t34 = (x285%(x286>>(x287<x288)));

	if (t34 != 207) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x293 = INT64_MIN;
	int8_t x295 = INT8_MAX;
	uint64_t x296 = 1639662036LLU;
	volatile int64_t t35 = 2443139299LL;

	t35 = (x293%(x294>>(x295<x296)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x311 = -48;
	uint16_t x312 = 5279U;
	volatile uint32_t t36 = 1396U;

	t36 = (x309%(x310>>(x311<x312)));

	if (t36 != 24U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x317 = INT16_MIN;
	uint16_t x318 = 832U;
	static uint8_t x319 = 44U;
	uint8_t x320 = UINT8_MAX;
	int32_t t37 = -205551376;

	t37 = (x317%(x318>>(x319<x320)));

	if (t37 != -320) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x322 = 11283138U;
	uint32_t x323 = 169829913U;
	int16_t x324 = INT16_MIN;
	volatile uint32_t t38 = 45U;

	t38 = (x321%(x322>>(x323<x324)));

	if (t38 != 1733159U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x329 = -958582;
	static int16_t x330 = INT16_MAX;
	int64_t x331 = 1LL;
	int8_t x332 = -1;

	t39 = (x329%(x330>>(x331<x332)));

	if (t39 != -8339) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x333 = 2022U;
	int8_t x336 = 43;
	uint32_t t40 = 23907U;

	t40 = (x333%(x334>>(x335<x336)));

	if (t40 != 2U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x341 = -1;
	static int16_t x342 = INT16_MAX;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t41 = 38;

	t41 = (x341%(x342>>(x343<x344)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x345 = 218460646999724LL;
	uint16_t x346 = UINT16_MAX;
	static uint64_t x347 = 279818699131243LLU;

	t42 = (x345%(x346>>(x347<x348)));

	if (t42 != 8864LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x353 = 1U;
	int8_t x354 = INT8_MAX;
	uint32_t x356 = 1U;
	volatile int32_t t43 = 16882772;

	t43 = (x353%(x354>>(x355<x356)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x358 = 1LLU;
	int16_t x360 = -518;
	volatile uint64_t t44 = 7744805581LLU;

	t44 = (x357%(x358>>(x359<x360)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x361 = INT64_MAX;
	volatile uint32_t x362 = 12500899U;
	int8_t x363 = -1;
	uint8_t x364 = 1U;
	int64_t t45 = 855141774792LL;

	t45 = (x361%(x362>>(x363<x364)));

	if (t45 != 5919391LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x369 = INT16_MAX;
	static uint32_t x371 = 2U;

	t46 = (x369%(x370>>(x371<x372)));

	if (t46 != 15U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x374 = 27;
	int8_t x376 = 15;

	t47 = (x373%(x374>>(x375<x376)));

	if (t47 != 16) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = INT32_MAX;
	static volatile int32_t t48 = -1;

	t48 = (x377%(x378>>(x379<x380)));

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x389 = UINT32_MAX;
	volatile uint32_t x390 = 7008270U;
	static int16_t x392 = INT16_MAX;

	t49 = (x389%(x390>>(x391<x392)));

	if (t49 != 2401920U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MAX;
	static volatile uint16_t x395 = 14261U;
	uint32_t x396 = UINT32_MAX;
	int64_t t50 = 68104530754505LL;

	t50 = (x393%(x394>>(x395<x396)));

	if (t50 != -32768LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x397 = -61095957172508LL;
	int8_t x399 = INT8_MAX;
	volatile int32_t x400 = -1;
	static int64_t t51 = -325975932LL;

	t51 = (x397%(x398>>(x399<x400)));

	if (t51 != -1820208LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x405 = -1;
	int8_t x406 = 63;
	static volatile int32_t x407 = -2;
	static uint8_t x408 = 1U;

	t52 = (x405%(x406>>(x407<x408)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x409 = 75343425978261LLU;
	static uint8_t x410 = UINT8_MAX;
	volatile int64_t x411 = -1LL;
	uint8_t x412 = 5U;
	uint64_t t53 = 2709604067462010LLU;

	t53 = (x409%(x410>>(x411<x412)));

	if (t53 != 60LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x414 = 147LL;
	volatile uint32_t x415 = 7507U;
	int64_t x416 = INT64_MIN;

	t54 = (x413%(x414>>(x415<x416)));

	if (t54 != 133LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x425 = -1795;
	int32_t x426 = INT32_MAX;
	volatile int64_t x427 = INT64_MIN;
	uint16_t x428 = 2U;
	static volatile int32_t t55 = 116717201;

	t55 = (x425%(x426>>(x427<x428)));

	if (t55 != -1795) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x429 = INT8_MIN;
	int8_t x430 = 56;
	int64_t x431 = INT64_MAX;
	volatile int32_t x432 = INT32_MIN;

	t56 = (x429%(x430>>(x431<x432)));

	if (t56 != -16) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x441 = INT32_MIN;
	uint16_t x442 = 3U;
	volatile uint32_t x443 = UINT32_MAX;
	volatile int32_t x444 = INT32_MIN;
	volatile int32_t t57 = 1191402;

	t57 = (x441%(x442>>(x443<x444)));

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x449 = 69310U;
	int16_t x450 = 2;
	int64_t x451 = INT64_MAX;
	uint64_t x452 = 17062423238731079LLU;
	uint32_t t58 = 7U;

	t58 = (x449%(x450>>(x451<x452)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x457 = INT8_MIN;
	uint32_t x458 = 1209414688U;
	int16_t x459 = -941;
	int16_t x460 = INT16_MAX;
	static volatile uint32_t t59 = 345U;

	t59 = (x457%(x458>>(x459<x460)));

	if (t59 != 62015760U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x465 = 43955111U;
	static uint16_t x466 = UINT16_MAX;
	uint8_t x468 = 1U;
	volatile uint32_t t60 = 776U;

	t60 = (x465%(x466>>(x467<x468)));

	if (t60 != 14564U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x473 = 1;
	uint64_t x474 = 691972110LLU;
	int32_t x476 = -29491;

	t61 = (x473%(x474>>(x475<x476)));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x485 = -1LL;
	static int32_t x486 = 3195540;
	static int32_t x487 = INT32_MAX;
	int8_t x488 = INT8_MIN;
	volatile int64_t t62 = -205244LL;

	t62 = (x485%(x486>>(x487<x488)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x489 = INT64_MIN;
	static int8_t x490 = 38;
	uint8_t x491 = 48U;
	uint16_t x492 = 8634U;
	volatile int64_t t63 = 404292724351315385LL;

	t63 = (x489%(x490>>(x491<x492)));

	if (t63 != -18LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x495 = 1093582985U;
	int64_t x496 = INT64_MAX;
	volatile int32_t t64 = -1018930;

	t64 = (x493%(x494>>(x495<x496)));

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x498 = 25LLU;
	static int32_t x499 = INT32_MAX;
	uint64_t x500 = UINT64_MAX;
	volatile uint64_t t65 = 115761210266751493LLU;

	t65 = (x497%(x498>>(x499<x500)));

	if (t65 != 7LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x501 = 0U;
	int8_t x502 = 3;
	uint8_t x504 = 14U;
	volatile int32_t t66 = 102;

	t66 = (x501%(x502>>(x503<x504)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x510 = 30LLU;
	uint16_t x511 = 1845U;
	static uint64_t t67 = 1121608849LLU;

	t67 = (x509%(x510>>(x511<x512)));

	if (t67 != 4LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x513 = 9U;
	static uint32_t x514 = 83475687U;
	int64_t x515 = -1LL;
	volatile uint8_t x516 = 27U;
	volatile uint32_t t68 = 44303U;

	t68 = (x513%(x514>>(x515<x516)));

	if (t68 != 9U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x521 = INT64_MAX;
	volatile uint64_t x522 = UINT64_MAX;
	static int8_t x523 = INT8_MIN;
	int64_t x524 = INT64_MIN;
	volatile uint64_t t69 = 64108LLU;

	t69 = (x521%(x522>>(x523<x524)));

	if (t69 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x525 = 56U;
	int8_t x526 = 16;
	static uint16_t x527 = 489U;
	volatile int64_t x528 = -71538LL;
	volatile int32_t t70 = 2199772;

	t70 = (x525%(x526>>(x527<x528)));

	if (t70 != 8) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x545 = INT8_MIN;
	static int8_t x547 = 9;
	int64_t x548 = INT64_MIN;
	int32_t t71 = 388;

	t71 = (x545%(x546>>(x547<x548)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x557 = -1;
	volatile uint8_t x558 = 1U;
	int32_t t72 = 1976;

	t72 = (x557%(x558>>(x559<x560)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x570 = 1;
	uint32_t x571 = UINT32_MAX;
	static int64_t x572 = INT64_MIN;
	volatile int64_t t73 = 0LL;

	t73 = (x569%(x570>>(x571<x572)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x573 = 2;
	volatile int8_t x574 = INT8_MAX;
	int64_t x575 = -23LL;
	int64_t x576 = INT64_MIN;
	int32_t t74 = 8;

	t74 = (x573%(x574>>(x575<x576)));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x577 = -146780611;
	volatile uint8_t x580 = 57U;
	volatile uint64_t t75 = 768LLU;

	t75 = (x577%(x578>>(x579<x580)));

	if (t75 != 953912377882774683LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x605 = -1;
	uint64_t x606 = 2885337LLU;
	int8_t x607 = INT8_MAX;
	volatile uint64_t t76 = 9900173LLU;

	t76 = (x605%(x606>>(x607<x608)));

	if (t76 != 2808366LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x610 = 17248230U;
	static uint64_t x611 = 443LLU;
	uint32_t t77 = 32394208U;

	t77 = (x609%(x610>>(x611<x612)));

	if (t77 != 12U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x613 = -1LL;
	uint16_t x614 = UINT16_MAX;
	uint32_t x615 = UINT32_MAX;
	uint8_t x616 = 12U;

	t78 = (x613%(x614>>(x615<x616)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x617 = -92394931377LL;
	volatile uint16_t x618 = 1U;
	volatile uint32_t x619 = 1963206U;
	uint8_t x620 = 8U;
	volatile int64_t t79 = -1078LL;

	t79 = (x617%(x618>>(x619<x620)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x621 = UINT16_MAX;
	uint8_t x622 = 4U;
	int16_t x623 = INT16_MIN;

	t80 = (x621%(x622>>(x623<x624)));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x625 = INT16_MIN;
	uint64_t x626 = 7044969954671LLU;
	volatile int64_t x627 = INT64_MIN;
	uint64_t t81 = 85LLU;

	t81 = (x625%(x626>>(x627<x628)));

	if (t81 != 1007727837423LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x629 = 46942752U;
	int32_t x630 = INT32_MAX;
	int16_t x631 = INT16_MIN;
	volatile uint32_t x632 = UINT32_MAX;
	uint32_t t82 = 1266U;

	t82 = (x629%(x630>>(x631<x632)));

	if (t82 != 46942752U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x633 = INT64_MIN;
	static uint8_t x634 = 22U;
	int64_t x635 = -1LL;
	int8_t x636 = -1;
	volatile int64_t t83 = -263LL;

	t83 = (x633%(x634>>(x635<x636)));

	if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x645 = -1;
	uint16_t x646 = 2U;
	int32_t x647 = 1;
	volatile int16_t x648 = INT16_MIN;
	int32_t t84 = 54;

	t84 = (x645%(x646>>(x647<x648)));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x653 = INT64_MIN;
	volatile int8_t x654 = 2;
	static int64_t x655 = -22286479724964LL;
	uint32_t x656 = 178516650U;
	int64_t t85 = 59863475LL;

	t85 = (x653%(x654>>(x655<x656)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x657 = UINT64_MAX;
	volatile int32_t x659 = -1;
	uint64_t x660 = 15756507524595205LLU;
	static uint64_t t86 = 3464316473721131LLU;

	t86 = (x657%(x658>>(x659<x660)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x685 = -4;
	int8_t x686 = INT8_MAX;
	static int32_t x687 = 1673;
	int64_t x688 = INT64_MAX;
	int32_t t87 = -1229436;

	t87 = (x685%(x686>>(x687<x688)));

	if (t87 != -4) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x694 = 1U;
	uint64_t x695 = 1941LLU;
	int16_t x696 = 124;
	volatile int32_t t88 = 20;

	t88 = (x693%(x694>>(x695<x696)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x701 = INT32_MAX;
	int64_t x702 = INT64_MAX;
	int16_t x703 = -1;
	volatile int64_t t89 = 168257219701888733LL;

	t89 = (x701%(x702>>(x703<x704)));

	if (t89 != 2147483647LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x713 = -1;
	uint32_t x714 = 120551615U;
	int32_t x715 = -1;
	uint32_t t90 = 6U;

	t90 = (x713%(x714>>(x715<x716)));

	if (t90 != 15384998U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x717 = 10LLU;
	int16_t x718 = 65;
	int8_t x719 = INT8_MAX;
	static volatile int32_t x720 = 1;
	volatile uint64_t t91 = 66282LLU;

	t91 = (x717%(x718>>(x719<x720)));

	if (t91 != 10LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x721 = INT8_MIN;
	int8_t x723 = -1;
	int32_t t92 = 15675497;

	t92 = (x721%(x722>>(x723<x724)));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x726 = INT8_MAX;
	static int32_t x727 = INT32_MIN;
	int32_t x728 = 20325759;
	static volatile int32_t t93 = -149044690;

	t93 = (x725%(x726>>(x727<x728)));

	if (t93 != 59) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x729 = UINT32_MAX;
	uint16_t x730 = UINT16_MAX;
	static volatile int32_t x731 = 575;
	int16_t x732 = 3799;
	uint32_t t94 = 3U;

	t94 = (x729%(x730>>(x731<x732)));

	if (t94 != 3U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x737 = INT64_MIN;
	static uint64_t x738 = 3LLU;
	int32_t x740 = -665;
	volatile uint64_t t95 = 0LLU;

	t95 = (x737%(x738>>(x739<x740)));

	if (t95 != 2LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x741 = INT8_MIN;
	uint64_t x742 = UINT64_MAX;
	int8_t x743 = -1;
	volatile uint64_t t96 = 324LLU;

	t96 = (x741%(x742>>(x743<x744)));

	if (t96 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x749 = INT32_MIN;
	volatile int16_t x750 = INT16_MAX;
	static uint8_t x751 = 68U;
	int16_t x752 = 1667;
	volatile int32_t t97 = 1252030;

	t97 = (x749%(x750>>(x751<x752)));

	if (t97 != -8) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x756 = 841261436576873992LLU;
	static uint32_t t98 = 6U;

	t98 = (x753%(x754>>(x755<x756)));

	if (t98 != 19698832U) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x765 = -1530426641862LL;
	uint16_t x766 = 228U;
	static volatile uint16_t x767 = UINT16_MAX;

	t99 = (x765%(x766>>(x767<x768)));

	if (t99 != -6LL) { NG(); } else { ; }
	
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

