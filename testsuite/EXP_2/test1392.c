#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x23 = -25578365;
int32_t t1 = 8889957;
static int16_t x28 = INT16_MAX;
int32_t x46 = INT32_MIN;
volatile uint8_t x48 = 1U;
static int16_t x58 = -184;
int64_t x59 = -1LL;
volatile int32_t t6 = 26540214;
volatile int32_t t8 = 3491041;
int64_t x78 = -134070979LL;
int16_t x80 = INT16_MIN;
uint64_t x119 = UINT64_MAX;
volatile int64_t t14 = -347885LL;
uint64_t x154 = 1LLU;
int16_t x157 = INT16_MIN;
int8_t x159 = 18;
int16_t x170 = INT16_MAX;
int16_t x183 = -1;
int64_t t19 = 871832264LL;
volatile uint8_t x226 = 28U;
int8_t x229 = 1;
volatile uint32_t x231 = 338348574U;
uint8_t x269 = 3U;
uint64_t x280 = 754506783675LLU;
uint64_t t26 = 16354897101652LLU;
static uint16_t x287 = 48U;
int32_t x288 = -1;
static int16_t x289 = INT16_MIN;
static volatile uint32_t x291 = UINT32_MAX;
int32_t t28 = -502;
uint32_t x299 = UINT32_MAX;
int64_t x309 = INT64_MIN;
static uint64_t x310 = 4607LLU;
uint64_t x323 = 788410927LLU;
uint32_t x324 = 2U;
int8_t x348 = INT8_MIN;
volatile uint8_t x390 = 114U;
int16_t x433 = INT16_MIN;
uint64_t t41 = 1LLU;
int16_t x451 = INT16_MIN;
uint64_t x461 = 7255830458LLU;
int32_t x462 = INT32_MIN;
volatile int8_t x464 = INT8_MAX;
int32_t x477 = INT32_MIN;
int64_t x479 = 1369590LL;
int32_t x490 = 933248;
uint16_t x503 = 5U;
volatile int64_t x505 = 1003506388789026328LL;
static int32_t x507 = -1;
volatile int64_t t51 = 99LL;
static int16_t x533 = INT16_MAX;
volatile int64_t x534 = 1067LL;
uint32_t x557 = 244264U;
int32_t x569 = 17598;
int64_t t56 = 241059350957613LL;
int64_t x578 = INT64_MIN;
int64_t t58 = -63873346325552864LL;
uint32_t x598 = 0U;
volatile int32_t t59 = -16;
static uint32_t x633 = 528863358U;
volatile int8_t x634 = -1;
static int32_t x638 = INT32_MIN;
int16_t x641 = INT16_MAX;
uint16_t x643 = UINT16_MAX;
static int8_t x650 = -1;
uint64_t x652 = 176854471LLU;
int8_t x668 = -1;
int8_t x687 = -1;
static int32_t x700 = -1;
int32_t t69 = -1017374376;
int8_t x744 = INT8_MIN;
volatile int32_t t73 = 818111550;
int8_t x826 = 0;
uint8_t x827 = 7U;
volatile int32_t t78 = -21;
static int8_t x849 = INT8_MAX;
uint8_t x850 = 6U;
volatile uint32_t x851 = UINT32_MAX;
volatile int32_t t84 = 215;
static volatile int8_t x881 = INT8_MIN;
static int16_t x884 = INT16_MIN;
static int64_t x901 = -6800068LL;
volatile uint32_t x904 = 6U;
volatile int64_t t86 = 63358LL;
volatile uint16_t x911 = 9U;
int32_t x920 = INT32_MIN;
int32_t x926 = 458630309;
uint16_t x928 = 119U;
volatile int32_t t90 = -13044789;
volatile uint16_t x947 = 4U;
uint8_t x970 = 4U;
volatile uint64_t x987 = 2LLU;


void f0(void) {
	uint16_t x17 = 11U;
	int64_t x18 = INT64_MIN;
	static volatile uint16_t x19 = UINT16_MAX;
	int32_t x20 = 10373;
	int32_t t0 = -637939;

	t0 = ((x17/(x18<x19))+x20);

	if (t0 != 10384) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = UINT16_MAX;
	int32_t x22 = INT32_MIN;
	int32_t x24 = -1;

	t1 = ((x21/(x22<x23))+x24);

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x25 = UINT16_MAX;
	int8_t x26 = -30;
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t2 = 47111925;

	t2 = ((x25/(x26<x27))+x28);

	if (t2 != 98302) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x33 = INT8_MAX;
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MAX;
	uint64_t x36 = 7084LLU;
	uint64_t t3 = 143093356493582LLU;

	t3 = ((x33/(x34<x35))+x36);

	if (t3 != 7211LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x41 = 3;
	int16_t x42 = INT16_MIN;
	static uint16_t x43 = 1300U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t4 = -77161LL;

	t4 = ((x41/(x42<x43))+x44);

	if (t4 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x45 = UINT16_MAX;
	static volatile uint32_t x47 = UINT32_MAX;
	volatile int32_t t5 = -377;

	t5 = ((x45/(x46<x47))+x48);

	if (t5 != 65536) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x57 = INT16_MIN;
	int8_t x60 = -1;

	t6 = ((x57/(x58<x59))+x60);

	if (t6 != -32769) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x61 = UINT64_MAX;
	int64_t x62 = INT64_MIN;
	uint16_t x63 = 4074U;
	int8_t x64 = -1;
	volatile uint64_t t7 = 8493997LLU;

	t7 = ((x61/(x62<x63))+x64);

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int16_t x75 = -1;
	int16_t x76 = INT16_MAX;

	t8 = ((x73/(x74<x75))+x76);

	if (t8 != 32766) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x77 = 44699U;
	static uint8_t x79 = UINT8_MAX;
	uint32_t t9 = 12162U;

	t9 = ((x77/(x78<x79))+x80);

	if (t9 != 11931U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x81 = INT8_MAX;
	int32_t x82 = 15;
	int8_t x83 = INT8_MAX;
	int8_t x84 = 5;
	static int32_t t10 = 981396623;

	t10 = ((x81/(x82<x83))+x84);

	if (t10 != 132) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x93 = -60;
	static int8_t x94 = 1;
	int64_t x95 = INT64_MAX;
	int16_t x96 = INT16_MIN;
	volatile int32_t t11 = 6;

	t11 = ((x93/(x94<x95))+x96);

	if (t11 != -32828) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x117 = 14;
	int64_t x118 = INT64_MIN;
	uint64_t x120 = 2224442857303922981LLU;
	static volatile uint64_t t12 = 924163LLU;

	t12 = ((x117/(x118<x119))+x120);

	if (t12 != 2224442857303922995LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x133 = 443U;
	static volatile int32_t x134 = 105;
	int64_t x135 = INT64_MAX;
	int8_t x136 = INT8_MAX;
	static volatile uint32_t t13 = 220U;

	t13 = ((x133/(x134<x135))+x136);

	if (t13 != 570U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x145 = INT64_MIN;
	int16_t x146 = -15489;
	int16_t x147 = 31;
	volatile int64_t x148 = INT64_MAX;

	t14 = ((x145/(x146<x147))+x148);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x153 = 456137U;
	int64_t x155 = INT64_MAX;
	int8_t x156 = 20;
	uint32_t t15 = 593838680U;

	t15 = ((x153/(x154<x155))+x156);

	if (t15 != 456157U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x158 = INT8_MIN;
	static int64_t x160 = -1880586042051162LL;
	volatile int64_t t16 = -5506692217282144LL;

	t16 = ((x157/(x158<x159))+x160);

	if (t16 != -1880586042083930LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x169 = INT8_MIN;
	uint16_t x171 = UINT16_MAX;
	volatile int32_t x172 = 1107;
	static volatile int32_t t17 = 0;

	t17 = ((x169/(x170<x171))+x172);

	if (t17 != 979) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x181 = -72;
	int8_t x182 = INT8_MIN;
	uint64_t x184 = 60LLU;
	uint64_t t18 = 367LLU;

	t18 = ((x181/(x182<x183))+x184);

	if (t18 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x197 = 1316601458LL;
	volatile int64_t x198 = INT64_MIN;
	uint8_t x199 = 10U;
	int8_t x200 = INT8_MIN;

	t19 = ((x197/(x198<x199))+x200);

	if (t19 != 1316601330LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	int8_t x220 = -7;
	int32_t t20 = 101;

	t20 = ((x217/(x218<x219))+x220);

	if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x225 = UINT32_MAX;
	int64_t x227 = INT64_MAX;
	volatile uint64_t x228 = 0LLU;
	static uint64_t t21 = 14920840499478LLU;

	t21 = ((x225/(x226<x227))+x228);

	if (t21 != 4294967295LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x230 = 3;
	int8_t x232 = -15;
	int32_t t22 = -27;

	t22 = ((x229/(x230<x231))+x232);

	if (t22 != -14) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x245 = INT32_MIN;
	uint8_t x246 = 14U;
	int8_t x247 = 25;
	uint16_t x248 = UINT16_MAX;
	int32_t t23 = -60824;

	t23 = ((x245/(x246<x247))+x248);

	if (t23 != -2147418113) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x265 = 4U;
	int8_t x266 = 15;
	uint16_t x267 = 2090U;
	int32_t x268 = 40001;
	int32_t t24 = 85;

	t24 = ((x265/(x266<x267))+x268);

	if (t24 != 40005) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x270 = 358705124925758LLU;
	int64_t x271 = INT64_MAX;
	int16_t x272 = INT16_MAX;
	volatile int32_t t25 = -3650;

	t25 = ((x269/(x270<x271))+x272);

	if (t25 != 32770) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x277 = -1639935238LL;
	int8_t x278 = INT8_MAX;
	static int16_t x279 = INT16_MAX;

	t26 = ((x277/(x278<x279))+x280);

	if (t26 != 752866848437LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x285 = INT8_MIN;
	static int16_t x286 = -1;
	static volatile int32_t t27 = -58;

	t27 = ((x285/(x286<x287))+x288);

	if (t27 != -129) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x290 = 2887LLU;
	uint8_t x292 = UINT8_MAX;

	t28 = ((x289/(x290<x291))+x292);

	if (t28 != -32513) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x297 = 1252359411584285LLU;
	int16_t x298 = INT16_MIN;
	static int8_t x300 = 1;
	uint64_t t29 = 26736205719552888LLU;

	t29 = ((x297/(x298<x299))+x300);

	if (t29 != 1252359411584286LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x301 = INT32_MIN;
	static volatile uint32_t x302 = 455506864U;
	int64_t x303 = INT64_MAX;
	int64_t x304 = -67057362823622LL;
	int64_t t30 = 298255LL;

	t30 = ((x301/(x302<x303))+x304);

	if (t30 != -67059510307270LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x311 = 9946628958LLU;
	static uint16_t x312 = 8914U;
	int64_t t31 = 22666LL;

	t31 = ((x309/(x310<x311))+x312);

	if (t31 != -9223372036854766894LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = 6;
	int64_t t32 = -445107228LL;

	t32 = ((x321/(x322<x323))+x324);

	if (t32 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x325 = -27LL;
	volatile int64_t x326 = -1LL;
	uint32_t x327 = UINT32_MAX;
	int32_t x328 = INT32_MIN;
	volatile int64_t t33 = 1200079787976LL;

	t33 = ((x325/(x326<x327))+x328);

	if (t33 != -2147483675LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x345 = 7618;
	uint64_t x346 = 35LLU;
	uint64_t x347 = 450570LLU;
	volatile int32_t t34 = 0;

	t34 = ((x345/(x346<x347))+x348);

	if (t34 != 7490) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x381 = 0;
	uint8_t x382 = 119U;
	volatile uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 778051626LLU;
	volatile uint64_t t35 = 383215662016818LLU;

	t35 = ((x381/(x382<x383))+x384);

	if (t35 != 778051626LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x389 = UINT32_MAX;
	uint32_t x391 = UINT32_MAX;
	int8_t x392 = INT8_MIN;
	volatile uint32_t t36 = 3060917U;

	t36 = ((x389/(x390<x391))+x392);

	if (t36 != 4294967167U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = -7509;
	int8_t x399 = -4;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t37 = 5806958739431528LL;

	t37 = ((x397/(x398<x399))+x400);

	if (t37 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x401 = -1LL;
	int64_t x402 = -1LL;
	uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 12424U;
	volatile int64_t t38 = 249LL;

	t38 = ((x401/(x402<x403))+x404);

	if (t38 != 12423LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x405 = -1LL;
	int16_t x406 = -1;
	volatile uint8_t x407 = UINT8_MAX;
	int16_t x408 = -1228;
	volatile int64_t t39 = -426740885LL;

	t39 = ((x405/(x406<x407))+x408);

	if (t39 != -1229LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x434 = UINT32_MAX;
	int64_t x435 = INT64_MAX;
	uint8_t x436 = UINT8_MAX;
	int32_t t40 = -64431;

	t40 = ((x433/(x434<x435))+x436);

	if (t40 != -32513) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x437 = -222636892325205LL;
	int16_t x438 = INT16_MIN;
	uint16_t x439 = UINT16_MAX;
	uint64_t x440 = UINT64_MAX;

	t41 = ((x437/(x438<x439))+x440);

	if (t41 != 18446521436817226410LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x449 = -65;
	int32_t x450 = INT32_MIN;
	static int32_t x452 = -1;
	int32_t t42 = 27;

	t42 = ((x449/(x450<x451))+x452);

	if (t42 != -66) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x463 = 11U;
	uint64_t t43 = 5285344153036LLU;

	t43 = ((x461/(x462<x463))+x464);

	if (t43 != 7255830585LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x473 = INT8_MIN;
	int64_t x474 = 3991067172448LL;
	uint64_t x475 = 23720923090051LLU;
	static int8_t x476 = 2;
	static volatile int32_t t44 = 139016285;

	t44 = ((x473/(x474<x475))+x476);

	if (t44 != -126) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x478 = UINT8_MAX;
	static volatile int32_t x480 = 0;
	int32_t t45 = INT32_MIN;

	t45 = ((x477/(x478<x479))+x480);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x481 = INT32_MIN;
	int8_t x482 = INT8_MIN;
	int32_t x483 = -1;
	int64_t x484 = -2008864887LL;
	volatile int64_t t46 = -862121699603LL;

	t46 = ((x481/(x482<x483))+x484);

	if (t46 != -4156348535LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x489 = 210122198U;
	int32_t x491 = INT32_MAX;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t47 = 214127206187237661LLU;

	t47 = ((x489/(x490<x491))+x492);

	if (t47 != 210122197LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x493 = 3757U;
	int16_t x494 = INT16_MIN;
	static volatile uint8_t x495 = 54U;
	int32_t x496 = INT32_MIN;
	volatile int32_t t48 = 44;

	t48 = ((x493/(x494<x495))+x496);

	if (t48 != -2147479891) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x501 = INT32_MAX;
	static int64_t x502 = -33853LL;
	volatile int8_t x504 = -1;
	int32_t t49 = -3898;

	t49 = ((x501/(x502<x503))+x504);

	if (t49 != 2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x506 = INT8_MIN;
	volatile uint64_t x508 = 34305301580LLU;
	volatile uint64_t t50 = 126LLU;

	t50 = ((x505/(x506<x507))+x508);

	if (t50 != 1003506423094327908LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x521 = -1LL;
	uint64_t x522 = 27386844LLU;
	int16_t x523 = INT16_MIN;
	int8_t x524 = INT8_MIN;

	t51 = ((x521/(x522<x523))+x524);

	if (t51 != -129LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x529 = -1LL;
	static int64_t x530 = -21LL;
	uint8_t x531 = UINT8_MAX;
	volatile int32_t x532 = INT32_MAX;
	static volatile int64_t t52 = 0LL;

	t52 = ((x529/(x530<x531))+x532);

	if (t52 != 2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x535 = UINT32_MAX;
	int16_t x536 = INT16_MIN;
	int32_t t53 = -7;

	t53 = ((x533/(x534<x535))+x536);

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x541 = UINT16_MAX;
	uint32_t x542 = 53U;
	int16_t x543 = -41;
	int32_t x544 = INT32_MIN;
	int32_t t54 = -369391508;

	t54 = ((x541/(x542<x543))+x544);

	if (t54 != -2147418113) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x558 = INT32_MIN;
	int8_t x559 = INT8_MAX;
	volatile uint32_t x560 = 5049010U;
	volatile uint32_t t55 = 79271U;

	t55 = ((x557/(x558<x559))+x560);

	if (t55 != 5293274U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x570 = UINT8_MAX;
	int32_t x571 = 7842836;
	int64_t x572 = INT64_MIN;

	t56 = ((x569/(x570<x571))+x572);

	if (t56 != -9223372036854758210LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x573 = INT8_MIN;
	int64_t x574 = -8140275125028993LL;
	uint32_t x575 = UINT32_MAX;
	int64_t x576 = INT64_MAX;
	int64_t t57 = -197809850019277576LL;

	t57 = ((x573/(x574<x575))+x576);

	if (t57 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x577 = -55LL;
	int32_t x579 = -137;
	volatile int8_t x580 = -21;

	t58 = ((x577/(x578<x579))+x580);

	if (t58 != -76LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x597 = -3;
	int32_t x599 = -111940325;
	uint16_t x600 = 7620U;

	t59 = ((x597/(x598<x599))+x600);

	if (t59 != 7617) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x605 = 1856U;
	uint8_t x606 = 3U;
	static int32_t x607 = 50275405;
	int32_t x608 = -10612;
	int32_t t60 = -483129720;

	t60 = ((x605/(x606<x607))+x608);

	if (t60 != -8756) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x635 = 27U;
	uint8_t x636 = 2U;
	uint32_t t61 = 233101735U;

	t61 = ((x633/(x634<x635))+x636);

	if (t61 != 528863360U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x637 = -520LL;
	uint8_t x639 = 3U;
	volatile uint64_t x640 = UINT64_MAX;
	static uint64_t t62 = 20258656832017761LLU;

	t62 = ((x637/(x638<x639))+x640);

	if (t62 != 18446744073709551095LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x642 = 19;
	static int32_t x644 = INT32_MIN;
	volatile int32_t t63 = 6840324;

	t63 = ((x641/(x642<x643))+x644);

	if (t63 != -2147450881) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x649 = INT32_MIN;
	uint8_t x651 = 79U;
	uint64_t t64 = 3965213655131LLU;

	t64 = ((x649/(x650<x651))+x652);

	if (t64 != 18446744071738922439LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x653 = -179539;
	static uint64_t x654 = 2587211LLU;
	volatile int32_t x655 = INT32_MAX;
	uint8_t x656 = 50U;
	int32_t t65 = 1;

	t65 = ((x653/(x654<x655))+x656);

	if (t65 != -179489) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x661 = 3769U;
	int8_t x662 = -55;
	int16_t x663 = INT16_MAX;
	int8_t x664 = INT8_MIN;
	uint32_t t66 = 1U;

	t66 = ((x661/(x662<x663))+x664);

	if (t66 != 3641U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x665 = 0;
	int8_t x666 = -33;
	int64_t x667 = 188704LL;
	int32_t t67 = 497;

	t67 = ((x665/(x666<x667))+x668);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x685 = -9;
	int64_t x686 = INT64_MIN;
	static uint8_t x688 = UINT8_MAX;
	volatile int32_t t68 = -7;

	t68 = ((x685/(x686<x687))+x688);

	if (t68 != 246) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x697 = UINT8_MAX;
	uint32_t x698 = 5U;
	int32_t x699 = INT32_MIN;

	t69 = ((x697/(x698<x699))+x700);

	if (t69 != 254) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x709 = -1LL;
	int32_t x710 = INT32_MIN;
	uint16_t x711 = 109U;
	int8_t x712 = -1;
	int64_t t70 = -466LL;

	t70 = ((x709/(x710<x711))+x712);

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x713 = INT8_MIN;
	int16_t x714 = -1;
	uint16_t x715 = 3919U;
	volatile int8_t x716 = INT8_MIN;
	volatile int32_t t71 = 2654712;

	t71 = ((x713/(x714<x715))+x716);

	if (t71 != -256) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x717 = 59;
	static int16_t x718 = INT16_MIN;
	volatile int64_t x719 = -1LL;
	int64_t x720 = INT64_MIN;
	volatile int64_t t72 = 8983LL;

	t72 = ((x717/(x718<x719))+x720);

	if (t72 != -9223372036854775749LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x741 = INT32_MAX;
	static uint64_t x742 = 31580186LLU;
	uint32_t x743 = UINT32_MAX;

	t73 = ((x741/(x742<x743))+x744);

	if (t73 != 2147483519) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x745 = INT32_MIN;
	int32_t x746 = -1;
	uint16_t x747 = UINT16_MAX;
	uint32_t x748 = 1024267150U;
	static uint32_t t74 = 46192841U;

	t74 = ((x745/(x746<x747))+x748);

	if (t74 != 3171750798U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x757 = 19;
	static int8_t x758 = 56;
	uint16_t x759 = UINT16_MAX;
	static int16_t x760 = -1;
	int32_t t75 = 1;

	t75 = ((x757/(x758<x759))+x760);

	if (t75 != 18) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x765 = 14U;
	volatile int64_t x766 = INT64_MIN;
	uint8_t x767 = 4U;
	uint32_t x768 = UINT32_MAX;
	static volatile uint32_t t76 = 838U;

	t76 = ((x765/(x766<x767))+x768);

	if (t76 != 13U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x769 = -27;
	volatile int64_t x770 = -13LL;
	int8_t x771 = 4;
	uint8_t x772 = 32U;
	int32_t t77 = 1;

	t77 = ((x769/(x770<x771))+x772);

	if (t77 != 5) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x825 = -110;
	uint8_t x828 = UINT8_MAX;

	t78 = ((x825/(x826<x827))+x828);

	if (t78 != 145) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x841 = 292026LLU;
	int8_t x842 = 46;
	int16_t x843 = INT16_MAX;
	uint8_t x844 = 12U;
	static uint64_t t79 = 60257579960LLU;

	t79 = ((x841/(x842<x843))+x844);

	if (t79 != 292038LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x845 = 44U;
	int16_t x846 = INT16_MAX;
	uint64_t x847 = UINT64_MAX;
	uint8_t x848 = 78U;
	int32_t t80 = 5775;

	t80 = ((x845/(x846<x847))+x848);

	if (t80 != 122) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x852 = -12841568024781LL;
	volatile int64_t t81 = -12981LL;

	t81 = ((x849/(x850<x851))+x852);

	if (t81 != -12841568024654LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x853 = 90U;
	int16_t x854 = -85;
	uint64_t x855 = UINT64_MAX;
	uint64_t x856 = 71150471975025LLU;
	uint64_t t82 = 1413LLU;

	t82 = ((x853/(x854<x855))+x856);

	if (t82 != 71150471975115LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x865 = 55252008571LLU;
	static int8_t x866 = -10;
	int64_t x867 = 55946322690577LL;
	static volatile int16_t x868 = INT16_MIN;
	uint64_t t83 = 12361039LLU;

	t83 = ((x865/(x866<x867))+x868);

	if (t83 != 55251975803LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x869 = 211;
	int16_t x870 = INT16_MIN;
	int16_t x871 = -215;
	int8_t x872 = -1;

	t84 = ((x869/(x870<x871))+x872);

	if (t84 != 210) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x882 = -50;
	uint8_t x883 = UINT8_MAX;
	int32_t t85 = -942;

	t85 = ((x881/(x882<x883))+x884);

	if (t85 != -32896) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x902 = INT32_MIN;
	static int32_t x903 = -1549;

	t86 = ((x901/(x902<x903))+x904);

	if (t86 != -6800062LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x909 = -50379482;
	static int8_t x910 = INT8_MIN;
	volatile int64_t x912 = INT64_MAX;
	volatile int64_t t87 = 221217414563LL;

	t87 = ((x909/(x910<x911))+x912);

	if (t87 != 9223372036804396325LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x917 = -1426045LL;
	uint32_t x918 = 51529U;
	int16_t x919 = INT16_MIN;
	volatile int64_t t88 = 11397163LL;

	t88 = ((x917/(x918<x919))+x920);

	if (t88 != -2148909693LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x925 = -1;
	volatile uint64_t x927 = UINT64_MAX;
	int32_t t89 = -671043232;

	t89 = ((x925/(x926<x927))+x928);

	if (t89 != 118) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x933 = INT8_MAX;
	uint16_t x934 = UINT16_MAX;
	volatile uint32_t x935 = 30221954U;
	volatile uint8_t x936 = 2U;

	t90 = ((x933/(x934<x935))+x936);

	if (t90 != 129) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x941 = INT32_MIN;
	static int32_t x942 = INT32_MIN;
	volatile int32_t x943 = -128300;
	volatile int32_t x944 = INT32_MAX;
	volatile int32_t t91 = 1679295;

	t91 = ((x941/(x942<x943))+x944);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x945 = 96308LLU;
	volatile uint16_t x946 = 1U;
	static volatile int64_t x948 = INT64_MAX;
	uint64_t t92 = 1LLU;

	t92 = ((x945/(x946<x947))+x948);

	if (t92 != 9223372036854872115LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x949 = 1U;
	static uint16_t x950 = 333U;
	uint64_t x951 = UINT64_MAX;
	int32_t x952 = -1;
	volatile int32_t t93 = -898726;

	t93 = ((x949/(x950<x951))+x952);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x969 = 1;
	static volatile int32_t x971 = INT32_MAX;
	volatile int64_t x972 = -7968659953750905LL;
	volatile int64_t t94 = -106400303984299LL;

	t94 = ((x969/(x970<x971))+x972);

	if (t94 != -7968659953750904LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x977 = -1;
	int8_t x978 = 1;
	int64_t x979 = INT64_MAX;
	static volatile int16_t x980 = -1;
	int32_t t95 = 2150853;

	t95 = ((x977/(x978<x979))+x980);

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x981 = 31U;
	int8_t x982 = INT8_MIN;
	int16_t x983 = -1;
	int32_t x984 = INT32_MIN;
	volatile uint32_t t96 = 490U;

	t96 = ((x981/(x982<x983))+x984);

	if (t96 != 2147483679U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x985 = 0;
	uint8_t x986 = 0U;
	uint64_t x988 = 55920344047LLU;
	uint64_t t97 = 2771833146081979056LLU;

	t97 = ((x985/(x986<x987))+x988);

	if (t97 != 55920344047LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x989 = INT16_MIN;
	uint64_t x990 = 500642110LLU;
	int8_t x991 = -1;
	static uint32_t x992 = 25U;
	volatile uint32_t t98 = 198U;

	t98 = ((x989/(x990<x991))+x992);

	if (t98 != 4294934553U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x997 = 3305;
	uint8_t x998 = UINT8_MAX;
	uint64_t x999 = 7512558LLU;
	int32_t x1000 = -33589;
	volatile int32_t t99 = -2536;

	t99 = ((x997/(x998<x999))+x1000);

	if (t99 != -30284) { NG(); } else { ; }
	
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

