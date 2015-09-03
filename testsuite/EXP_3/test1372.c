#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x8 = 5190298U;
uint16_t x24 = 10036U;
uint32_t t2 = 23U;
static uint8_t x51 = UINT8_MAX;
int32_t x52 = INT32_MAX;
int64_t t4 = INT64_MAX;
uint32_t x62 = 16494U;
static volatile uint64_t x67 = 8069817911001210006LLU;
int16_t x68 = INT16_MAX;
volatile int64_t t6 = -1257641525482LL;
static int16_t x69 = -1;
volatile int8_t x71 = 17;
int64_t x77 = 1LL;
int16_t x79 = -1;
uint32_t x100 = 9167368U;
int16_t x106 = INT16_MIN;
int32_t x126 = INT32_MIN;
uint8_t x127 = 3U;
volatile int32_t t12 = 7;
int16_t x138 = -1;
static int32_t t13 = 33;
uint16_t x147 = 15U;
static uint8_t x152 = UINT8_MAX;
static int8_t x155 = -7;
static int8_t x161 = INT8_MIN;
static volatile int32_t t17 = 5275;
int64_t t20 = -3958753LL;
volatile uint32_t x186 = 12258U;
int16_t x209 = INT16_MAX;
uint64_t x214 = 46016991862815724LLU;
volatile uint64_t t24 = 497102924111113916LLU;
uint64_t x226 = UINT64_MAX;
static int32_t x249 = INT32_MIN;
uint16_t x251 = 3U;
uint64_t t27 = 39860558510840LLU;
int8_t x253 = INT8_MIN;
volatile uint32_t t30 = 1021900U;
uint8_t x269 = 0U;
static int8_t x270 = -7;
int64_t x280 = INT64_MAX;
int32_t t34 = -16973;
int32_t x289 = INT32_MAX;
static int8_t x293 = -1;
volatile int64_t t37 = 11730LL;
int32_t x308 = INT32_MIN;
int16_t x321 = 3;
int32_t x332 = INT32_MAX;
volatile int32_t t42 = 31698264;
int64_t x357 = -1LL;
uint8_t x373 = UINT8_MAX;
int16_t x386 = -86;
volatile uint32_t x393 = 339397796U;
uint16_t x394 = UINT16_MAX;
int16_t x407 = -3;
int32_t x420 = -1;
uint32_t x421 = 13U;
volatile int8_t x429 = INT8_MIN;
int16_t x442 = INT16_MIN;
volatile int16_t x443 = INT16_MAX;
volatile int16_t x454 = -1;
int16_t x457 = 414;
uint8_t x460 = 1U;
static volatile int32_t x461 = INT32_MIN;
static volatile int8_t x463 = INT8_MIN;
volatile int32_t t60 = -11;
int8_t x498 = -1;
int32_t x503 = INT32_MIN;
static int32_t x511 = -41282;
int16_t x514 = -1;
static int32_t x515 = -1;
static uint32_t x516 = 776753517U;
volatile int64_t x525 = INT64_MAX;
int64_t x528 = -4LL;
int32_t x540 = INT32_MIN;
uint16_t x546 = 10U;
volatile uint8_t x555 = UINT8_MAX;
uint16_t x560 = 0U;
static uint32_t t72 = 2U;
volatile int32_t t76 = -310088;
static volatile int64_t x592 = INT64_MIN;
volatile int64_t t77 = 44LL;
int32_t x598 = -794;
int32_t t78 = 0;
uint64_t x602 = 105LLU;
int64_t x603 = -1201266839LL;
volatile int32_t t81 = 0;
uint64_t x636 = 32686LLU;
int16_t x640 = -1;
int32_t t85 = 0;
uint64_t x657 = 758LLU;
volatile int8_t x658 = -1;
static volatile int8_t x664 = -32;
uint64_t t88 = 393500089584688LLU;
uint16_t x671 = UINT16_MAX;
static int64_t x675 = -1LL;
volatile int32_t t90 = 1521;
uint8_t x696 = 2U;
volatile uint64_t x703 = 53677999LLU;
int16_t x704 = -1;
uint64_t x712 = UINT64_MAX;
volatile int32_t x715 = INT32_MIN;
volatile uint8_t x716 = 24U;
static uint16_t x725 = UINT16_MAX;
volatile int32_t t96 = -856;
static uint16_t x730 = 16U;
static uint32_t x738 = 496334U;
static int32_t x740 = INT32_MIN;


void f0(void) {
	int8_t x5 = INT8_MIN;
	volatile int64_t x6 = INT64_MIN;
	static volatile int32_t x7 = INT32_MAX;
	int64_t t0 = 0LL;

	t0 = ((x5-x6)>>(x7<x8));

	if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x9 = UINT8_MAX;
	volatile int16_t x10 = -1;
	uint16_t x11 = UINT16_MAX;
	uint64_t x12 = 275158253227038LLU;
	volatile int32_t t1 = -198;

	t1 = ((x9-x10)>>(x11<x12));

	if (t1 != 128) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MIN;
	uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 28U;

	t2 = ((x21-x22)>>(x23<x24));

	if (t2 != 1073741824U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x49 = 1;
	int64_t x50 = -1LL;
	int64_t t3 = -2366975375960891LL;

	t3 = ((x49-x50)>>(x51<x52));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x53 = -1;
	volatile int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = 46104U;

	t4 = ((x53-x54)>>(x55<x56));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x61 = 104207U;
	uint64_t x63 = 3234824276558708LLU;
	int32_t x64 = -49278830;
	volatile uint32_t t5 = 10U;

	t5 = ((x61-x62)>>(x63<x64));

	if (t5 != 43856U) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x65 = INT16_MAX;
	volatile int64_t x66 = -16230218265007LL;

	t6 = ((x65-x66)>>(x67<x68));

	if (t6 != 16230218297774LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x70 = 1616442085U;
	int16_t x72 = INT16_MIN;
	uint32_t t7 = 3U;

	t7 = ((x69-x70)>>(x71<x72));

	if (t7 != 2678525210U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x78 = 6028759794607LLU;
	uint64_t x80 = UINT64_MAX;
	uint64_t t8 = 3280211185577LLU;

	t8 = ((x77-x78)>>(x79<x80));

	if (t8 != 18446738044949757010LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x97 = -1;
	int16_t x98 = -1971;
	int64_t x99 = INT64_MIN;
	static int32_t t9 = -3060;

	t9 = ((x97-x98)>>(x99<x100));

	if (t9 != 985) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x105 = -1;
	static int16_t x107 = INT16_MAX;
	volatile int64_t x108 = -33857567LL;
	volatile int32_t t10 = -82060450;

	t10 = ((x105-x106)>>(x107<x108));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x125 = UINT32_MAX;
	volatile uint16_t x128 = UINT16_MAX;
	volatile uint32_t t11 = 28245793U;

	t11 = ((x125-x126)>>(x127<x128));

	if (t11 != 1073741823U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x133 = 22U;
	int16_t x134 = INT16_MIN;
	static volatile int64_t x135 = INT64_MAX;
	int16_t x136 = -1;

	t12 = ((x133-x134)>>(x135<x136));

	if (t12 != 32790) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x137 = 69U;
	int16_t x139 = -1;
	int64_t x140 = 3481401LL;

	t13 = ((x137-x138)>>(x139<x140));

	if (t13 != 35) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x145 = 5836U;
	uint8_t x146 = 2U;
	int16_t x148 = INT16_MIN;
	volatile uint32_t t14 = 422485U;

	t14 = ((x145-x146)>>(x147<x148));

	if (t14 != 5834U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x149 = INT8_MIN;
	uint32_t x150 = 5603U;
	uint64_t x151 = UINT64_MAX;
	volatile uint32_t t15 = 625U;

	t15 = ((x149-x150)>>(x151<x152));

	if (t15 != 4294961565U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x154 = 315311LLU;
	int16_t x156 = INT16_MAX;
	uint64_t t16 = 7519793926866LLU;

	t16 = ((x153-x154)>>(x155<x156));

	if (t16 != 9223372036854618280LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x162 = INT32_MIN;
	static uint32_t x163 = UINT32_MAX;
	int32_t x164 = -1;

	t17 = ((x161-x162)>>(x163<x164));

	if (t17 != 2147483520) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x169 = INT64_MAX;
	int32_t x170 = INT32_MAX;
	volatile uint8_t x171 = 104U;
	int8_t x172 = 13;
	volatile int64_t t18 = -108LL;

	t18 = ((x169-x170)>>(x171<x172));

	if (t18 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x173 = INT32_MAX;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = INT8_MAX;
	uint16_t x176 = 14387U;
	static uint32_t t19 = 38388U;

	t19 = ((x173-x174)>>(x175<x176));

	if (t19 != 1073741824U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x177 = INT64_MAX;
	uint32_t x178 = 893U;
	static int64_t x179 = INT64_MAX;
	int64_t x180 = -1LL;

	t20 = ((x177-x178)>>(x179<x180));

	if (t20 != 9223372036854774914LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x185 = UINT8_MAX;
	int64_t x187 = INT64_MAX;
	static int64_t x188 = INT64_MIN;
	volatile uint32_t t21 = 667430462U;

	t21 = ((x185-x186)>>(x187<x188));

	if (t21 != 4294955293U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x210 = 50;
	int16_t x211 = INT16_MAX;
	int8_t x212 = INT8_MIN;
	volatile int32_t t22 = -3989;

	t22 = ((x209-x210)>>(x211<x212));

	if (t22 != 32717) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x213 = 3024;
	uint32_t x215 = 13U;
	uint64_t x216 = 9611913086007LLU;
	static uint64_t t23 = 2807927665722LLU;

	t23 = ((x213-x214)>>(x215<x216));

	if (t23 != 9200363540923369458LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x217 = -1;
	volatile uint64_t x218 = 328567LLU;
	uint16_t x219 = 9847U;
	int8_t x220 = INT8_MIN;

	t24 = ((x217-x218)>>(x219<x220));

	if (t24 != 18446744073709223048LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x225 = 30;
	uint8_t x227 = 103U;
	volatile int8_t x228 = -2;
	volatile uint64_t t25 = 1604419644508034561LLU;

	t25 = ((x225-x226)>>(x227<x228));

	if (t25 != 31LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x237 = -1;
	int32_t x238 = -1;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;
	int32_t t26 = 46680142;

	t26 = ((x237-x238)>>(x239<x240));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x250 = 5261358582391632LLU;
	int32_t x252 = -1;

	t27 = ((x249-x250)>>(x251<x252));

	if (t27 != 18441482712979676336LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x254 = INT32_MIN;
	volatile uint8_t x255 = 34U;
	volatile uint64_t x256 = 1952235608249828621LLU;
	int32_t t28 = -1755743;

	t28 = ((x253-x254)>>(x255<x256));

	if (t28 != 1073741760) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x257 = -1;
	static uint32_t x258 = 2119587461U;
	int64_t x259 = 7488959271LL;
	volatile uint16_t x260 = UINT16_MAX;
	volatile uint32_t t29 = 372218187U;

	t29 = ((x257-x258)>>(x259<x260));

	if (t29 != 2175379834U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x261 = UINT32_MAX;
	volatile int16_t x262 = INT16_MIN;
	int32_t x263 = 747367589;
	volatile int64_t x264 = INT64_MIN;

	t30 = ((x261-x262)>>(x263<x264));

	if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x271 = 0U;
	static int8_t x272 = 29;
	volatile int32_t t31 = 2080633;

	t31 = ((x269-x270)>>(x271<x272));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int16_t x274 = 11;
	int64_t x275 = -1573859963760804937LL;
	volatile uint16_t x276 = 6U;
	int32_t t32 = -5804160;

	t32 = ((x273-x274)>>(x275<x276));

	if (t32 != 122) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	volatile int32_t t33 = 3146812;

	t33 = ((x277-x278)>>(x279<x280));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x281 = -1;
	static volatile int16_t x282 = -21;
	int32_t x283 = INT32_MAX;
	int8_t x284 = -1;

	t34 = ((x281-x282)>>(x283<x284));

	if (t34 != 20) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x290 = -32840769438981LL;
	static uint32_t x291 = 444005U;
	int8_t x292 = INT8_MAX;
	int64_t t35 = 7LL;

	t35 = ((x289-x290)>>(x291<x292));

	if (t35 != 32842916922628LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x294 = INT32_MIN;
	static volatile int32_t x295 = INT32_MIN;
	static int8_t x296 = INT8_MIN;
	volatile int32_t t36 = -5152;

	t36 = ((x293-x294)>>(x295<x296));

	if (t36 != 1073741823) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x297 = 2U;
	volatile int64_t x298 = -1LL;
	int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;

	t37 = ((x297-x298)>>(x299<x300));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 53527LLU;
	int64_t x307 = INT64_MAX;
	volatile uint64_t t38 = 2LLU;

	t38 = ((x305-x306)>>(x307<x308));

	if (t38 != 18446744073709498088LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	static int16_t x315 = -1;
	uint64_t x316 = 5447103699244LLU;
	volatile int64_t t39 = 57974758764LL;

	t39 = ((x313-x314)>>(x315<x316));

	if (t39 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x322 = 2U;
	volatile int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;
	volatile int32_t t40 = 27895;

	t40 = ((x321-x322)>>(x323<x324));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x329 = UINT8_MAX;
	int16_t x330 = 80;
	uint32_t x331 = 47005U;
	volatile int32_t t41 = -51560784;

	t41 = ((x329-x330)>>(x331<x332));

	if (t41 != 87) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x341 = 2U;
	int16_t x342 = INT16_MIN;
	uint32_t x343 = UINT32_MAX;
	static uint64_t x344 = 1046161LLU;

	t42 = ((x341-x342)>>(x343<x344));

	if (t42 != 32770) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x358 = INT8_MIN;
	int64_t x359 = 6516377LL;
	static uint64_t x360 = 22LLU;
	int64_t t43 = -177302197077642LL;

	t43 = ((x357-x358)>>(x359<x360));

	if (t43 != 127LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	static int32_t x371 = -1;
	volatile uint64_t x372 = 406141LLU;
	static volatile int64_t t44 = 10063345508471524LL;

	t44 = ((x369-x370)>>(x371<x372));

	if (t44 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x374 = -3;
	int16_t x375 = -3;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t45 = 2211901;

	t45 = ((x373-x374)>>(x375<x376));

	if (t45 != 258) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x385 = 2506;
	static int8_t x387 = -3;
	volatile uint32_t x388 = 2189936U;
	static int32_t t46 = 27535;

	t46 = ((x385-x386)>>(x387<x388));

	if (t46 != 2592) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x395 = 20;
	uint32_t x396 = 11583249U;
	volatile uint32_t t47 = 14008907U;

	t47 = ((x393-x394)>>(x395<x396));

	if (t47 != 169666130U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x397 = UINT64_MAX;
	uint64_t x398 = 12289606942LLU;
	static int32_t x399 = 2492;
	static int32_t x400 = INT32_MIN;
	uint64_t t48 = 3LLU;

	t48 = ((x397-x398)>>(x399<x400));

	if (t48 != 18446744061419944673LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x401 = 3857510741637362LL;
	int32_t x402 = -597665438;
	uint8_t x403 = 19U;
	volatile int64_t x404 = -1LL;
	int64_t t49 = -292534120LL;

	t49 = ((x401-x402)>>(x403<x404));

	if (t49 != 3857511339302800LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x405 = UINT32_MAX;
	int16_t x406 = 1;
	volatile int8_t x408 = INT8_MIN;
	static volatile uint32_t t50 = 31U;

	t50 = ((x405-x406)>>(x407<x408));

	if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x417 = INT64_MAX;
	static uint8_t x418 = 4U;
	volatile uint16_t x419 = 8729U;
	int64_t t51 = 1LL;

	t51 = ((x417-x418)>>(x419<x420));

	if (t51 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x422 = -23;
	uint32_t x423 = 37U;
	int16_t x424 = INT16_MIN;
	volatile uint32_t t52 = 6393264U;

	t52 = ((x421-x422)>>(x423<x424));

	if (t52 != 18U) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x430 = INT8_MIN;
	volatile int8_t x431 = INT8_MAX;
	volatile int64_t x432 = 926971363LL;
	volatile int32_t t53 = -10;

	t53 = ((x429-x430)>>(x431<x432));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x437 = UINT64_MAX;
	uint8_t x438 = 0U;
	static int32_t x439 = INT32_MAX;
	int8_t x440 = INT8_MIN;
	uint64_t t54 = UINT64_MAX;

	t54 = ((x437-x438)>>(x439<x440));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x441 = 8U;
	static int32_t x444 = -7956;
	int32_t t55 = 14156;

	t55 = ((x441-x442)>>(x443<x444));

	if (t55 != 32776) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x453 = 9120999373638667LLU;
	int16_t x455 = INT16_MIN;
	static volatile int8_t x456 = -5;
	static uint64_t t56 = 16192618180LLU;

	t56 = ((x453-x454)>>(x455<x456));

	if (t56 != 4560499686819334LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x458 = -1233;
	int32_t x459 = INT32_MIN;
	volatile int32_t t57 = 162;

	t57 = ((x457-x458)>>(x459<x460));

	if (t57 != 823) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x462 = -10389464500308LL;
	int16_t x464 = 1677;
	volatile int64_t t58 = -64535LL;

	t58 = ((x461-x462)>>(x463<x464));

	if (t58 != 5193658508330LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = INT64_MIN;
	volatile uint8_t x479 = UINT8_MAX;
	int64_t x480 = INT64_MIN;
	int64_t t59 = 1414209LL;

	t59 = ((x477-x478)>>(x479<x480));

	if (t59 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x493 = 2;
	static int8_t x494 = -2;
	static volatile int8_t x495 = 1;
	int16_t x496 = INT16_MIN;

	t60 = ((x493-x494)>>(x495<x496));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x497 = 6;
	int8_t x499 = -1;
	volatile int8_t x500 = INT8_MAX;
	static int32_t t61 = -68085187;

	t61 = ((x497-x498)>>(x499<x500));

	if (t61 != 3) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x501 = 14U;
	uint64_t x502 = 8398537192308LLU;
	int16_t x504 = 91;
	volatile uint64_t t62 = 0LLU;

	t62 = ((x501-x502)>>(x503<x504));

	if (t62 != 9223367837586179661LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x509 = 7167979073316LLU;
	uint16_t x510 = 11046U;
	int64_t x512 = -551252356LL;
	uint64_t t63 = 124LLU;

	t63 = ((x509-x510)>>(x511<x512));

	if (t63 != 7167979062270LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x513 = 446LLU;
	volatile uint64_t t64 = 10373083172172903LLU;

	t64 = ((x513-x514)>>(x515<x516));

	if (t64 != 447LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x521 = 1;
	int8_t x522 = 1;
	int64_t x523 = INT64_MIN;
	int64_t x524 = INT64_MIN;
	int32_t t65 = -96752;

	t65 = ((x521-x522)>>(x523<x524));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x526 = 10;
	static int32_t x527 = 1901;
	volatile int64_t t66 = 554856LL;

	t66 = ((x525-x526)>>(x527<x528));

	if (t66 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x533 = INT8_MIN;
	static volatile uint32_t x534 = UINT32_MAX;
	int8_t x535 = INT8_MIN;
	uint32_t x536 = UINT32_MAX;
	uint32_t t67 = 115U;

	t67 = ((x533-x534)>>(x535<x536));

	if (t67 != 2147483584U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x537 = INT32_MIN;
	static int64_t x538 = -304798023475754LL;
	volatile int8_t x539 = INT8_MIN;
	int64_t t68 = 31402009855717393LL;

	t68 = ((x537-x538)>>(x539<x540));

	if (t68 != 304795875992106LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x545 = INT8_MAX;
	int16_t x547 = INT16_MIN;
	int8_t x548 = INT8_MIN;
	int32_t t69 = -5;

	t69 = ((x545-x546)>>(x547<x548));

	if (t69 != 58) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x549 = -1;
	static volatile int32_t x550 = INT32_MIN;
	static int8_t x551 = -1;
	static int16_t x552 = -1;
	volatile int32_t t70 = INT32_MAX;

	t70 = ((x549-x550)>>(x551<x552));

	if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x553 = UINT32_MAX;
	int8_t x554 = INT8_MIN;
	static volatile int64_t x556 = INT64_MIN;
	static uint32_t t71 = 53U;

	t71 = ((x553-x554)>>(x555<x556));

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x557 = 19U;
	uint32_t x558 = 3011744U;
	uint32_t x559 = UINT32_MAX;

	t72 = ((x557-x558)>>(x559<x560));

	if (t72 != 4291955571U) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x561 = INT8_MAX;
	static int32_t x562 = -1;
	volatile int16_t x563 = INT16_MIN;
	int64_t x564 = INT64_MIN;
	int32_t t73 = 3;

	t73 = ((x561-x562)>>(x563<x564));

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x569 = -1;
	int8_t x570 = INT8_MIN;
	uint32_t x571 = UINT32_MAX;
	int32_t x572 = 43297;
	static int32_t t74 = 24855599;

	t74 = ((x569-x570)>>(x571<x572));

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x573 = INT64_MAX;
	int16_t x574 = INT16_MAX;
	int32_t x575 = INT32_MIN;
	int32_t x576 = INT32_MIN;
	volatile int64_t t75 = 847998163031541LL;

	t75 = ((x573-x574)>>(x575<x576));

	if (t75 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x581 = 6719U;
	int8_t x582 = INT8_MIN;
	int8_t x583 = 0;
	int8_t x584 = INT8_MIN;

	t76 = ((x581-x582)>>(x583<x584));

	if (t76 != 6847) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x589 = 36702U;
	int64_t x590 = -1LL;
	int8_t x591 = INT8_MIN;

	t77 = ((x589-x590)>>(x591<x592));

	if (t77 != 36703LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x597 = 57U;
	int16_t x599 = -1;
	uint32_t x600 = 69062244U;

	t78 = ((x597-x598)>>(x599<x600));

	if (t78 != 851) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x601 = INT16_MAX;
	static int16_t x604 = INT16_MIN;
	volatile uint64_t t79 = 5992875LLU;

	t79 = ((x601-x602)>>(x603<x604));

	if (t79 != 16331LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x605 = UINT32_MAX;
	uint16_t x606 = 3U;
	int8_t x607 = INT8_MIN;
	uint8_t x608 = UINT8_MAX;
	uint32_t t80 = 836455771U;

	t80 = ((x605-x606)>>(x607<x608));

	if (t80 != 2147483646U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x617 = 1602U;
	static volatile int32_t x618 = -1;
	static volatile int32_t x619 = 51776;
	volatile int32_t x620 = 306536;

	t81 = ((x617-x618)>>(x619<x620));

	if (t81 != 801) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x625 = 2U;
	int32_t x626 = INT32_MIN;
	volatile int64_t x627 = INT64_MIN;
	int8_t x628 = INT8_MAX;
	static uint32_t t82 = 5865U;

	t82 = ((x625-x626)>>(x627<x628));

	if (t82 != 1073741825U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x633 = INT64_MAX;
	volatile uint8_t x634 = 32U;
	int64_t x635 = INT64_MIN;
	volatile int64_t t83 = -951778LL;

	t83 = ((x633-x634)>>(x635<x636));

	if (t83 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x637 = 288U;
	int32_t x638 = -1;
	int16_t x639 = 227;
	volatile int32_t t84 = 5910555;

	t84 = ((x637-x638)>>(x639<x640));

	if (t84 != 289) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x649 = -1;
	volatile int8_t x650 = INT8_MIN;
	static uint8_t x651 = 46U;
	int64_t x652 = 84899745LL;

	t85 = ((x649-x650)>>(x651<x652));

	if (t85 != 63) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x659 = -1LL;
	static int16_t x660 = INT16_MIN;
	uint64_t t86 = 35963045451LLU;

	t86 = ((x657-x658)>>(x659<x660));

	if (t86 != 759LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x661 = UINT16_MAX;
	int8_t x662 = -1;
	int32_t x663 = 12143393;
	int32_t t87 = -274;

	t87 = ((x661-x662)>>(x663<x664));

	if (t87 != 65536) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x665 = UINT32_MAX;
	uint64_t x666 = 7857995755LLU;
	int32_t x667 = 358980178;
	static volatile uint8_t x668 = 44U;

	t88 = ((x665-x666)>>(x667<x668));

	if (t88 != 18446744070146523156LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x669 = 0U;
	static uint32_t x670 = UINT32_MAX;
	int64_t x672 = INT64_MIN;
	volatile uint32_t t89 = 22484U;

	t89 = ((x669-x670)>>(x671<x672));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x673 = 310U;
	volatile uint8_t x674 = 0U;
	int32_t x676 = INT32_MIN;

	t90 = ((x673-x674)>>(x675<x676));

	if (t90 != 310) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x693 = 1;
	uint64_t x694 = 611876345322LLU;
	uint64_t x695 = 491272071362LLU;
	uint64_t t91 = 14651973882110LLU;

	t91 = ((x693-x694)>>(x695<x696));

	if (t91 != 18446743461833206295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x701 = INT16_MIN;
	uint32_t x702 = UINT32_MAX;
	volatile uint32_t t92 = 106026859U;

	t92 = ((x701-x702)>>(x703<x704));

	if (t92 != 2147467264U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x705 = INT8_MAX;
	int16_t x706 = INT16_MIN;
	static int8_t x707 = INT8_MIN;
	int64_t x708 = -7380317686869080LL;
	volatile int32_t t93 = -72359;

	t93 = ((x705-x706)>>(x707<x708));

	if (t93 != 32895) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x709 = INT8_MAX;
	uint64_t x710 = 821LLU;
	static int8_t x711 = -1;
	uint64_t t94 = 0LLU;

	t94 = ((x709-x710)>>(x711<x712));

	if (t94 != 18446744073709550922LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x713 = INT32_MIN;
	int64_t x714 = INT64_MIN;
	static volatile int64_t t95 = -540835547808728454LL;

	t95 = ((x713-x714)>>(x715<x716));

	if (t95 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x726 = INT8_MAX;
	int32_t x727 = -3;
	volatile uint16_t x728 = UINT16_MAX;

	t96 = ((x725-x726)>>(x727<x728));

	if (t96 != 32704) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x729 = UINT32_MAX;
	static uint64_t x731 = UINT64_MAX;
	static volatile int32_t x732 = INT32_MIN;
	volatile uint32_t t97 = 447694759U;

	t97 = ((x729-x730)>>(x731<x732));

	if (t97 != 4294967279U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x737 = UINT8_MAX;
	int32_t x739 = INT32_MIN;
	volatile uint32_t t98 = 44815U;

	t98 = ((x737-x738)>>(x739<x740));

	if (t98 != 4294471217U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x741 = 1U;
	volatile uint8_t x742 = 46U;
	volatile uint16_t x743 = UINT16_MAX;
	int64_t x744 = -33121512561323480LL;
	volatile uint32_t t99 = 2270507U;

	t99 = ((x741-x742)>>(x743<x744));

	if (t99 != 4294967251U) { NG(); } else { ; }
	
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

