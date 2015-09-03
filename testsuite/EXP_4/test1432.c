#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x17 = -1LL;
uint64_t x25 = 4129401933878LLU;
volatile uint32_t x28 = 85852543U;
volatile uint64_t t2 = 7496108407671025LLU;
int8_t x31 = INT8_MIN;
int64_t t3 = INT64_MIN;
int8_t x40 = INT8_MAX;
uint16_t x54 = 28402U;
uint8_t x81 = 13U;
int8_t x82 = INT8_MAX;
static int16_t x83 = -1;
int8_t x103 = 1;
int32_t t12 = 71021479;
int8_t x135 = INT8_MIN;
uint64_t t14 = 15100187LLU;
int8_t x153 = -1;
int8_t x161 = INT8_MIN;
int8_t x165 = -55;
static int64_t x189 = -69959603962LL;
volatile int64_t t21 = -625440526LL;
int64_t x210 = INT64_MAX;
static int32_t t26 = -30644570;
int64_t x232 = -1LL;
int32_t t27 = -442;
static volatile int8_t x233 = -1;
static uint64_t t28 = 458906401LLU;
uint8_t x238 = 1U;
volatile uint32_t x239 = UINT32_MAX;
uint32_t x255 = 86693U;
volatile uint64_t t34 = 1LLU;
int32_t x296 = INT32_MIN;
uint8_t x307 = UINT8_MAX;
volatile int32_t t36 = INT32_MIN;
uint16_t x314 = 1027U;
uint8_t x315 = 10U;
int32_t x316 = -69;
uint64_t x331 = 8271620526LLU;
volatile int8_t x332 = -56;
volatile uint32_t t39 = 2987628U;
volatile int8_t x341 = INT8_MIN;
static uint32_t t40 = 898987U;
uint16_t x346 = 28413U;
int16_t x359 = 8;
volatile int64_t t44 = 1702640LL;
static volatile int64_t x365 = INT64_MAX;
int32_t x367 = 2;
int8_t x370 = INT8_MAX;
uint64_t x373 = UINT64_MAX;
volatile uint64_t x375 = UINT64_MAX;
static uint8_t x381 = 3U;
static int64_t x389 = INT64_MIN;
static volatile int64_t x391 = -1LL;
volatile int32_t t53 = 6;
volatile int64_t x399 = INT64_MAX;
uint64_t t54 = 12140427101276LLU;
volatile uint32_t t55 = 0U;
volatile uint64_t t56 = 42243LLU;
int64_t x422 = 14417840844LL;
uint16_t x426 = UINT16_MAX;
int32_t x429 = 732419;
static uint8_t x430 = 44U;
static uint32_t x431 = UINT32_MAX;
static int64_t x436 = INT64_MIN;
int8_t x447 = -1;
int32_t t61 = 8840;
static int32_t x461 = 5739597;
int32_t t62 = 24729;
static volatile int32_t x477 = INT32_MAX;
volatile int16_t x478 = 392;
int16_t x493 = INT16_MIN;
uint8_t x494 = UINT8_MAX;
int16_t x506 = 235;
int64_t x510 = INT64_MAX;
static volatile uint8_t x511 = UINT8_MAX;
static int64_t x512 = -1843596043LL;
volatile uint8_t x516 = 18U;
static uint8_t x529 = 27U;
int32_t x534 = 22;
uint16_t x536 = 1960U;
int16_t x537 = -12128;
int8_t x539 = -1;
volatile int32_t t74 = 7832;
uint16_t x550 = UINT16_MAX;
int32_t t75 = 116297;
volatile int16_t x557 = INT16_MIN;
uint32_t x561 = 37U;
int16_t x577 = -104;
uint16_t x580 = 1376U;
int16_t x581 = -352;
static int16_t x584 = 105;
uint16_t x585 = 1U;
static uint32_t x598 = 26U;
uint32_t x601 = 8U;
int32_t t84 = 2655015;
static volatile int32_t x628 = INT32_MAX;
volatile uint64_t t86 = 129725955215LLU;
int64_t x635 = INT64_MAX;
int32_t t88 = 13683;
volatile int32_t t89 = -114075;
uint8_t x699 = 6U;
int16_t x717 = -2768;
int16_t x720 = -1;
static int32_t t96 = 157421952;
uint32_t x722 = 108U;
int16_t x730 = INT16_MAX;


void f0(void) {
	int8_t x5 = 0;
	volatile uint64_t x6 = UINT64_MAX;
	static uint16_t x7 = 5005U;
	uint8_t x8 = 0U;
	uint64_t t0 = 288988904716406576LLU;

	t0 = (x5-(x6>>(x7<x8)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x18 = 0U;
	int32_t x19 = INT32_MIN;
	static uint16_t x20 = 56U;
	static int64_t t1 = 45LL;

	t1 = (x17-(x18>>(x19<x20)));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 1U;

	t2 = (x25-(x26>>(x27<x28)));

	if (t2 != 9223376166256709687LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = 0U;
	volatile uint64_t x32 = 6881LLU;

	t3 = (x29-(x30>>(x31<x32)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x33 = 74238274612LL;
	uint64_t x34 = 10683LLU;
	volatile int64_t x35 = INT64_MAX;
	uint16_t x36 = UINT16_MAX;
	static uint64_t t4 = 1LLU;

	t4 = (x33-(x34>>(x35<x36)));

	if (t4 != 74238263929LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x37 = INT8_MAX;
	uint16_t x38 = 76U;
	int64_t x39 = -26LL;
	volatile int32_t t5 = -21582;

	t5 = (x37-(x38>>(x39<x40)));

	if (t5 != 89) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x53 = INT16_MIN;
	int32_t x55 = -1;
	uint8_t x56 = UINT8_MAX;
	static volatile int32_t t6 = 17768;

	t6 = (x53-(x54>>(x55<x56)));

	if (t6 != -46969) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x65 = -1;
	int32_t x66 = 12;
	volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 237991024866022898LLU;
	static int32_t t7 = -52482182;

	t7 = (x65-(x66>>(x67<x68)));

	if (t7 != -13) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x77 = 218U;
	int8_t x78 = INT8_MAX;
	int32_t x79 = 3095;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t8 = 67640905;

	t8 = (x77-(x78>>(x79<x80)));

	if (t8 != 91) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x84 = -30;
	volatile int32_t t9 = 18;

	t9 = (x81-(x82>>(x83<x84)));

	if (t9 != -114) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x89 = INT32_MAX;
	int8_t x90 = 1;
	int8_t x91 = INT8_MIN;
	static int64_t x92 = INT64_MIN;
	int32_t t10 = -416999;

	t10 = (x89-(x90>>(x91<x92)));

	if (t10 != 2147483646) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x101 = 3;
	volatile int8_t x102 = INT8_MAX;
	uint32_t x104 = 328243962U;
	volatile int32_t t11 = -9643539;

	t11 = (x101-(x102>>(x103<x104)));

	if (t11 != -60) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x113 = 0U;
	uint16_t x114 = UINT16_MAX;
	uint16_t x115 = UINT16_MAX;
	static int8_t x116 = INT8_MIN;

	t12 = (x113-(x114>>(x115<x116)));

	if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x133 = -1;
	uint8_t x134 = UINT8_MAX;
	int64_t x136 = INT64_MAX;
	volatile int32_t t13 = -1;

	t13 = (x133-(x134>>(x135<x136)));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x137 = INT32_MIN;
	uint64_t x138 = 201994419LLU;
	int32_t x139 = -1427;
	uint64_t x140 = 8LLU;

	t14 = (x137-(x138>>(x139<x140)));

	if (t14 != 18446744071360073549LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x154 = INT8_MAX;
	uint8_t x155 = 2U;
	int8_t x156 = -42;
	int32_t t15 = 26;

	t15 = (x153-(x154>>(x155<x156)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = 79LL;
	static int32_t x159 = INT32_MIN;
	int64_t x160 = INT64_MAX;
	int64_t t16 = -48LL;

	t16 = (x157-(x158>>(x159<x160)));

	if (t16 != 88LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x162 = 7;
	int32_t x163 = INT32_MAX;
	int64_t x164 = INT64_MAX;
	int32_t t17 = -25517;

	t17 = (x161-(x162>>(x163<x164)));

	if (t17 != -131) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x166 = 2766834U;
	static uint64_t x167 = 6718887318947LLU;
	volatile int32_t x168 = -2372991;
	volatile uint32_t t18 = 38539U;

	t18 = (x165-(x166>>(x167<x168)));

	if (t18 != 4293583824U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x173 = INT64_MAX;
	int8_t x174 = 5;
	static int8_t x175 = INT8_MIN;
	uint64_t x176 = 129LLU;
	volatile int64_t t19 = 1LL;

	t19 = (x173-(x174>>(x175<x176)));

	if (t19 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x185 = -1336760335983LL;
	volatile uint16_t x186 = 7312U;
	static uint16_t x187 = UINT16_MAX;
	volatile uint8_t x188 = 12U;
	int64_t t20 = -84907053942590072LL;

	t20 = (x185-(x186>>(x187<x188)));

	if (t20 != -1336760343295LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x190 = UINT16_MAX;
	static int16_t x191 = INT16_MIN;
	uint8_t x192 = 7U;

	t21 = (x189-(x190>>(x191<x192)));

	if (t21 != -69959636729LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x193 = 35490971U;
	uint64_t x194 = 99LLU;
	int64_t x195 = INT64_MIN;
	static uint64_t x196 = 5891916304599LLU;
	uint64_t t22 = 10991113LLU;

	t22 = (x193-(x194>>(x195<x196)));

	if (t22 != 35490872LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x197 = 2;
	uint16_t x198 = 9352U;
	volatile int16_t x199 = INT16_MIN;
	int16_t x200 = -1;
	int32_t t23 = -45972434;

	t23 = (x197-(x198>>(x199<x200)));

	if (t23 != -4674) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x205 = INT16_MIN;
	volatile uint64_t x206 = 31754351LLU;
	uint32_t x207 = 2U;
	uint8_t x208 = UINT8_MAX;
	volatile uint64_t t24 = 2317928086422LLU;

	t24 = (x205-(x206>>(x207<x208)));

	if (t24 != 18446744073693641673LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x209 = INT16_MAX;
	uint32_t x211 = UINT32_MAX;
	static uint8_t x212 = 80U;
	int64_t t25 = -36366799LL;

	t25 = (x209-(x210>>(x211<x212)));

	if (t25 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x225 = -313;
	uint8_t x226 = 2U;
	uint32_t x227 = UINT32_MAX;
	int16_t x228 = INT16_MIN;

	t26 = (x225-(x226>>(x227<x228)));

	if (t26 != -315) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x229 = INT16_MIN;
	uint16_t x230 = 47U;
	static int64_t x231 = -1LL;

	t27 = (x229-(x230>>(x231<x232)));

	if (t27 != -32815) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x234 = 1347373199838327LLU;
	uint8_t x235 = 3U;
	int8_t x236 = -1;

	t28 = (x233-(x234>>(x235<x236)));

	if (t28 != 18445396700509713288LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x237 = -1;
	int8_t x240 = INT8_MIN;
	static int32_t t29 = -142450529;

	t29 = (x237-(x238>>(x239<x240)));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x253 = INT32_MIN;
	volatile uint64_t x254 = 66157374877398LLU;
	int32_t x256 = -59;
	static volatile uint64_t t30 = 5LLU;

	t30 = (x253-(x254>>(x255<x256)));

	if (t30 != 18446710992874629269LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x273 = -38130853LL;
	static volatile int8_t x274 = 60;
	static int32_t x275 = 714062;
	uint16_t x276 = 1493U;
	int64_t t31 = -15986LL;

	t31 = (x273-(x274>>(x275<x276)));

	if (t31 != -38130913LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x277 = 77;
	uint64_t x278 = 126LLU;
	static int32_t x279 = -1304;
	volatile uint8_t x280 = 1U;
	uint64_t t32 = 652LLU;

	t32 = (x277-(x278>>(x279<x280)));

	if (t32 != 14LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x281 = -1;
	static volatile uint64_t x282 = UINT64_MAX;
	int16_t x283 = -1;
	int64_t x284 = -1LL;
	uint64_t t33 = 28LLU;

	t33 = (x281-(x282>>(x283<x284)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x285 = 106U;
	static uint64_t x286 = 632474128LLU;
	volatile int16_t x287 = INT16_MIN;
	int64_t x288 = 211LL;

	t34 = (x285-(x286>>(x287<x288)));

	if (t34 != 18446744073393314658LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x293 = 43U;
	volatile int64_t x294 = 1983236644LL;
	int64_t x295 = INT64_MIN;
	volatile int64_t t35 = -3265LL;

	t35 = (x293-(x294>>(x295<x296)));

	if (t35 != -991618279LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x305 = INT32_MIN;
	volatile uint16_t x306 = 0U;
	uint64_t x308 = UINT64_MAX;

	t36 = (x305-(x306>>(x307<x308)));

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x313 = 1U;
	volatile int32_t t37 = -1049303869;

	t37 = (x313-(x314>>(x315<x316)));

	if (t37 != -1026) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x329 = INT16_MAX;
	uint8_t x330 = 0U;
	int32_t t38 = 865425;

	t38 = (x329-(x330>>(x331<x332)));

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x333 = INT16_MAX;
	uint32_t x334 = 55U;
	uint64_t x335 = 30845167997LLU;
	static uint32_t x336 = UINT32_MAX;

	t39 = (x333-(x334>>(x335<x336)));

	if (t39 != 32712U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x342 = UINT32_MAX;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = -1495;

	t40 = (x341-(x342>>(x343<x344)));

	if (t40 != 4294967169U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x345 = INT32_MAX;
	int64_t x347 = INT64_MIN;
	int32_t x348 = -1;
	int32_t t41 = -84484;

	t41 = (x345-(x346>>(x347<x348)));

	if (t41 != 2147469441) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x349 = 173486U;
	int8_t x350 = INT8_MAX;
	volatile uint16_t x351 = 22261U;
	int64_t x352 = INT64_MIN;
	volatile uint32_t t42 = 20150202U;

	t42 = (x349-(x350>>(x351<x352)));

	if (t42 != 173359U) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x353 = 0;
	static uint64_t x354 = 1144988912276437092LLU;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = -715159564;
	volatile uint64_t t43 = 13226479LLU;

	t43 = (x353-(x354>>(x355<x356)));

	if (t43 != 17301755161433114524LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x357 = -1LL;
	uint32_t x358 = 14008917U;
	static volatile int32_t x360 = -2760;

	t44 = (x357-(x358>>(x359<x360)));

	if (t44 != -14008918LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x361 = INT16_MAX;
	static int64_t x362 = 21112577LL;
	static volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = UINT32_MAX;
	int64_t t45 = -27LL;

	t45 = (x361-(x362>>(x363<x364)));

	if (t45 != -10523521LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x366 = 0;
	int32_t x368 = 0;
	int64_t t46 = INT64_MAX;

	t46 = (x365-(x366>>(x367<x368)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x369 = 462757077LL;
	volatile int64_t x371 = INT64_MIN;
	int32_t x372 = -183597082;
	static volatile int64_t t47 = -11LL;

	t47 = (x369-(x370>>(x371<x372)));

	if (t47 != 462757014LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x374 = UINT8_MAX;
	int32_t x376 = -1;
	static volatile uint64_t t48 = 312485254LLU;

	t48 = (x373-(x374>>(x375<x376)));

	if (t48 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x377 = -31;
	static uint64_t x378 = 13870286350LLU;
	uint16_t x379 = 3111U;
	uint64_t x380 = 45496388932139LLU;
	volatile uint64_t t49 = 78307731831LLU;

	t49 = (x377-(x378>>(x379<x380)));

	if (t49 != 18446744066774408410LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x382 = 0LL;
	volatile uint8_t x383 = 24U;
	static uint8_t x384 = 0U;
	volatile int64_t t50 = 234314909776087209LL;

	t50 = (x381-(x382>>(x383<x384)));

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x385 = INT16_MIN;
	static uint8_t x386 = 19U;
	int32_t x387 = -121553491;
	int32_t x388 = INT32_MAX;
	volatile int32_t t51 = -385261;

	t51 = (x385-(x386>>(x387<x388)));

	if (t51 != -32777) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x390 = 16642739LLU;
	static uint32_t x392 = 1099U;
	uint64_t t52 = 2063023640LLU;

	t52 = (x389-(x390>>(x391<x392)));

	if (t52 != 9223372036846454439LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x393 = 60U;
	uint8_t x394 = 8U;
	int64_t x395 = -65500LL;
	int32_t x396 = INT32_MIN;

	t53 = (x393-(x394>>(x395<x396)));

	if (t53 != 52) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x397 = INT64_MAX;
	uint64_t x398 = UINT64_MAX;
	uint64_t x400 = UINT64_MAX;

	t54 = (x397-(x398>>(x399<x400)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x409 = 5218U;
	static uint32_t x410 = UINT32_MAX;
	int32_t x411 = -58970;
	volatile int32_t x412 = INT32_MIN;

	t55 = (x409-(x410>>(x411<x412)));

	if (t55 != 5219U) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x413 = INT64_MIN;
	uint64_t x414 = 24LLU;
	int64_t x415 = -78651182925388355LL;
	volatile int16_t x416 = INT16_MIN;

	t56 = (x413-(x414>>(x415<x416)));

	if (t56 != 9223372036854775796LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x421 = INT8_MAX;
	uint8_t x423 = 3U;
	int8_t x424 = INT8_MIN;
	volatile int64_t t57 = -9373364195691LL;

	t57 = (x421-(x422>>(x423<x424)));

	if (t57 != -14417840717LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x425 = 299711187;
	static int8_t x427 = INT8_MIN;
	static uint64_t x428 = 13945327874LLU;
	volatile int32_t t58 = -1;

	t58 = (x425-(x426>>(x427<x428)));

	if (t58 != 299645652) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x432 = INT16_MAX;
	int32_t t59 = -230;

	t59 = (x429-(x430>>(x431<x432)));

	if (t59 != 732375) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x433 = -1;
	uint8_t x434 = 19U;
	int8_t x435 = -25;
	volatile int32_t t60 = 5466314;

	t60 = (x433-(x434>>(x435<x436)));

	if (t60 != -20) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x445 = 348;
	volatile int16_t x446 = INT16_MAX;
	int32_t x448 = 1;

	t61 = (x445-(x446>>(x447<x448)));

	if (t61 != -16035) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x462 = UINT16_MAX;
	volatile int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MIN;

	t62 = (x461-(x462>>(x463<x464)));

	if (t62 != 5674062) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x479 = INT32_MIN;
	int64_t x480 = 13244LL;
	volatile int32_t t63 = 4;

	t63 = (x477-(x478>>(x479<x480)));

	if (t63 != 2147483451) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x485 = -1LL;
	volatile uint8_t x486 = 62U;
	static int64_t x487 = INT64_MIN;
	int8_t x488 = INT8_MIN;
	int64_t t64 = 2091155787416442LL;

	t64 = (x485-(x486>>(x487<x488)));

	if (t64 != -32LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x495 = 30728614U;
	static int64_t x496 = INT64_MIN;
	int32_t t65 = 2;

	t65 = (x493-(x494>>(x495<x496)));

	if (t65 != -33023) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x501 = -1;
	int16_t x502 = INT16_MAX;
	int32_t x503 = 14312762;
	static volatile int16_t x504 = INT16_MIN;
	static int32_t t66 = 309;

	t66 = (x501-(x502>>(x503<x504)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x505 = -12;
	volatile uint64_t x507 = 548432356187182LLU;
	static int64_t x508 = 2414912336LL;
	int32_t t67 = -341458;

	t67 = (x505-(x506>>(x507<x508)));

	if (t67 != -247) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x509 = 0;
	int64_t t68 = -93844456230LL;

	t68 = (x509-(x510>>(x511<x512)));

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x513 = INT8_MIN;
	volatile uint32_t x514 = 95804460U;
	int64_t x515 = INT64_MIN;
	uint32_t t69 = 435414299U;

	t69 = (x513-(x514>>(x515<x516)));

	if (t69 != 4247064938U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x525 = -1;
	volatile int8_t x526 = INT8_MAX;
	static uint32_t x527 = 2U;
	int64_t x528 = -1LL;
	static volatile int32_t t70 = 17536653;

	t70 = (x525-(x526>>(x527<x528)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x530 = UINT32_MAX;
	uint32_t x531 = UINT32_MAX;
	volatile int16_t x532 = -1018;
	uint32_t t71 = 2U;

	t71 = (x529-(x530>>(x531<x532)));

	if (t71 != 28U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x533 = 5;
	int64_t x535 = INT64_MAX;
	volatile int32_t t72 = 1076;

	t72 = (x533-(x534>>(x535<x536)));

	if (t72 != -17) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x538 = 2LL;
	int32_t x540 = -13;
	volatile int64_t t73 = 25178105101922468LL;

	t73 = (x537-(x538>>(x539<x540)));

	if (t73 != -12130LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x541 = UINT16_MAX;
	uint16_t x542 = 1U;
	int16_t x543 = -15968;
	int32_t x544 = -1;

	t74 = (x541-(x542>>(x543<x544)));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x549 = INT16_MIN;
	static int32_t x551 = -130;
	static volatile int32_t x552 = INT32_MIN;

	t75 = (x549-(x550>>(x551<x552)));

	if (t75 != -98303) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x558 = 12U;
	volatile int32_t x559 = -1;
	int16_t x560 = INT16_MIN;
	volatile int32_t t76 = -33892074;

	t76 = (x557-(x558>>(x559<x560)));

	if (t76 != -32780) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x562 = 2U;
	int64_t x563 = INT64_MIN;
	volatile int64_t x564 = -98833896LL;
	uint32_t t77 = 809257U;

	t77 = (x561-(x562>>(x563<x564)));

	if (t77 != 36U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x565 = INT16_MAX;
	int64_t x566 = INT64_MAX;
	static int64_t x567 = INT64_MAX;
	int64_t x568 = INT64_MIN;
	volatile int64_t t78 = -179378194375LL;

	t78 = (x565-(x566>>(x567<x568)));

	if (t78 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x578 = 1U;
	uint8_t x579 = 15U;
	volatile int32_t t79 = -227678119;

	t79 = (x577-(x578>>(x579<x580)));

	if (t79 != -104) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x582 = 1830U;
	int8_t x583 = 0;
	uint32_t t80 = 11355704U;

	t80 = (x581-(x582>>(x583<x584)));

	if (t80 != 4294966029U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x586 = 1268U;
	uint16_t x587 = UINT16_MAX;
	uint64_t x588 = UINT64_MAX;
	volatile int32_t t81 = -11278714;

	t81 = (x585-(x586>>(x587<x588)));

	if (t81 != -633) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x597 = -6712580287LL;
	int32_t x599 = INT32_MIN;
	int16_t x600 = -1;
	volatile int64_t t82 = 42491LL;

	t82 = (x597-(x598>>(x599<x600)));

	if (t82 != -6712580300LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x602 = 960U;
	int16_t x603 = 136;
	int8_t x604 = -1;
	uint32_t t83 = 0U;

	t83 = (x601-(x602>>(x603<x604)));

	if (t83 != 4294966344U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x605 = -1;
	static uint16_t x606 = UINT16_MAX;
	int8_t x607 = INT8_MIN;
	static volatile int16_t x608 = INT16_MAX;

	t84 = (x605-(x606>>(x607<x608)));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x613 = INT32_MAX;
	int16_t x614 = 1410;
	volatile uint8_t x615 = 10U;
	uint8_t x616 = 0U;
	volatile int32_t t85 = -505469241;

	t85 = (x613-(x614>>(x615<x616)));

	if (t85 != 2147482237) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x625 = UINT64_MAX;
	uint32_t x626 = 82U;
	static int16_t x627 = INT16_MAX;

	t86 = (x625-(x626>>(x627<x628)));

	if (t86 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x633 = 162658801U;
	int8_t x634 = 1;
	static int16_t x636 = INT16_MAX;
	uint32_t t87 = 986U;

	t87 = (x633-(x634>>(x635<x636)));

	if (t87 != 162658800U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x653 = INT8_MAX;
	volatile uint16_t x654 = 14521U;
	volatile int8_t x655 = INT8_MIN;
	static int8_t x656 = INT8_MIN;

	t88 = (x653-(x654>>(x655<x656)));

	if (t88 != -14394) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x677 = -53099310;
	volatile uint8_t x678 = 18U;
	int32_t x679 = 3;
	uint32_t x680 = 6U;

	t89 = (x677-(x678>>(x679<x680)));

	if (t89 != -53099319) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x681 = -3228198898026LL;
	int8_t x682 = 3;
	uint8_t x683 = 26U;
	int64_t x684 = INT64_MIN;
	volatile int64_t t90 = 1LL;

	t90 = (x681-(x682>>(x683<x684)));

	if (t90 != -3228198898029LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x689 = INT8_MIN;
	uint8_t x690 = 1U;
	uint16_t x691 = UINT16_MAX;
	volatile int16_t x692 = -68;
	int32_t t91 = 114811;

	t91 = (x689-(x690>>(x691<x692)));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x697 = INT8_MIN;
	uint64_t x698 = 16995708430513479LLU;
	volatile int16_t x700 = -1;
	static volatile uint64_t t92 = 2592LLU;

	t92 = (x697-(x698>>(x699<x700)));

	if (t92 != 18429748365279038009LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x701 = -1;
	uint32_t x702 = 19U;
	static volatile int16_t x703 = -55;
	static int64_t x704 = INT64_MAX;
	volatile uint32_t t93 = 201049U;

	t93 = (x701-(x702>>(x703<x704)));

	if (t93 != 4294967286U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x705 = -250250;
	uint16_t x706 = 2U;
	int8_t x707 = INT8_MAX;
	int64_t x708 = -4204438504232556865LL;
	int32_t t94 = -2890770;

	t94 = (x705-(x706>>(x707<x708)));

	if (t94 != -250252) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x709 = 73U;
	static int8_t x710 = INT8_MAX;
	int16_t x711 = INT16_MIN;
	volatile int32_t x712 = 23106413;
	int32_t t95 = -952;

	t95 = (x709-(x710>>(x711<x712)));

	if (t95 != 10) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x718 = INT8_MAX;
	static int64_t x719 = INT64_MIN;

	t96 = (x717-(x718>>(x719<x720)));

	if (t96 != -2831) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x721 = 26U;
	static volatile int8_t x723 = INT8_MIN;
	int16_t x724 = -1;
	uint32_t t97 = 376U;

	t97 = (x721-(x722>>(x723<x724)));

	if (t97 != 4294967268U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x725 = 8U;
	uint64_t x726 = 133213799LLU;
	int32_t x727 = 4262;
	int8_t x728 = INT8_MIN;
	uint64_t t98 = 371029119LLU;

	t98 = (x725-(x726>>(x727<x728)));

	if (t98 != 18446744073576337825LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x729 = -1;
	uint16_t x731 = 17U;
	volatile int8_t x732 = -11;
	static int32_t t99 = 7110724;

	t99 = (x729-(x730>>(x731<x732)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

