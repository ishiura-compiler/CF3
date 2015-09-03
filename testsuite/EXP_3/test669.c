#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x33 = INT16_MIN;
uint64_t t2 = 11279372621LLU;
static uint64_t x39 = UINT64_MAX;
uint32_t t3 = 7500305U;
uint64_t x45 = UINT64_MAX;
int16_t x48 = INT16_MAX;
static uint64_t t4 = 110865818316LLU;
int32_t x49 = -1;
int16_t x50 = INT16_MIN;
uint16_t x51 = UINT16_MAX;
volatile int32_t x54 = INT32_MAX;
int32_t t7 = -389145;
int16_t x87 = 1740;
int64_t t12 = 3894655989LL;
int16_t x138 = INT16_MAX;
volatile int32_t t15 = -28387018;
volatile uint64_t x194 = 346158272457920LLU;
uint8_t x211 = 4U;
volatile int64_t x212 = -944346616939LL;
int64_t x214 = -1LL;
volatile int64_t t18 = INT64_MAX;
volatile int64_t x231 = -499062LL;
int32_t x232 = -112233;
volatile uint64_t t20 = 4237455630LLU;
uint64_t x245 = 495996772607792567LLU;
uint64_t t21 = 123940102210514014LLU;
static int32_t x253 = -1;
int32_t x256 = -503;
static uint32_t x278 = 53057178U;
int32_t x284 = INT32_MIN;
volatile uint32_t t25 = 12453021U;
uint16_t x285 = 334U;
uint8_t x286 = 93U;
uint32_t x288 = 497244U;
int32_t x294 = 47614;
uint64_t x344 = UINT64_MAX;
uint32_t x364 = UINT32_MAX;
volatile uint32_t t31 = 13560457U;
int64_t x438 = 26LL;
uint32_t x439 = UINT32_MAX;
static int32_t x440 = -1;
uint32_t x443 = UINT32_MAX;
int32_t x445 = 14754738;
volatile uint64_t t41 = 886365681714996LLU;
static int32_t t42 = -214127;
uint32_t x478 = 700U;
static int8_t x485 = -1;
volatile uint64_t x488 = 109670975949138LLU;
uint32_t x511 = UINT32_MAX;
volatile int16_t x531 = -3;
int64_t x540 = -6697LL;
static volatile uint32_t t49 = 0U;
int64_t x550 = INT64_MIN;
static int8_t x551 = -1;
static volatile int64_t t51 = -16410301543106LL;
volatile uint32_t x584 = 32969185U;
static int16_t x595 = 3793;
volatile int16_t x600 = INT16_MIN;
int32_t x619 = -22;
int8_t x625 = -1;
static volatile int32_t t57 = 213078920;
volatile uint32_t x633 = 43843064U;
static volatile int64_t x635 = -1LL;
volatile uint16_t x654 = 25316U;
int8_t x683 = 55;
int32_t x698 = INT32_MIN;
int32_t x738 = -789864586;
static int64_t t66 = -182459612296434LL;
uint32_t x792 = 1358260U;
int16_t x836 = INT16_MIN;
int8_t x837 = 21;
uint32_t x845 = 0U;
uint32_t x847 = 45267695U;
static uint8_t x850 = UINT8_MAX;
int8_t x855 = INT8_MIN;
volatile int64_t x877 = INT64_MIN;
uint64_t x878 = 237362LLU;
uint32_t x880 = UINT32_MAX;
uint16_t x883 = UINT16_MAX;
volatile int64_t x884 = INT64_MIN;
volatile uint64_t x908 = UINT64_MAX;
static volatile uint32_t t82 = 296459067U;
int64_t x921 = INT64_MIN;
int64_t x929 = INT64_MAX;
volatile int32_t x942 = INT32_MIN;
uint64_t t87 = 13118567503LLU;
static uint64_t t88 = 1218190606LLU;
static int32_t x963 = 998478;
int64_t x988 = INT64_MIN;
uint32_t x994 = 3U;
int8_t x995 = INT8_MIN;
int16_t x1000 = INT16_MIN;
volatile int64_t x1032 = -44829081828LL;
volatile int64_t t93 = -144328309843869LL;
int32_t x1058 = INT32_MIN;
int64_t x1084 = INT64_MAX;
uint32_t x1097 = 7U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MAX;
	uint64_t x4 = UINT64_MAX;
	int32_t t0 = 12;

	t0 = ((x1^x2)<<(x3/x4));

	if (t0 != 2147450880) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 33714816U;
	uint8_t x10 = 8U;
	static int16_t x11 = -1614;
	static uint16_t x12 = UINT16_MAX;
	volatile uint32_t t1 = 1051266985U;

	t1 = ((x9^x10)<<(x11/x12));

	if (t1 != 33714824U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x34 = UINT64_MAX;
	static uint16_t x35 = 6449U;
	uint16_t x36 = 15783U;

	t2 = ((x33^x34)<<(x35/x36));

	if (t2 != 32767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x37 = 0;
	uint32_t x38 = UINT32_MAX;
	volatile int32_t x40 = -41473;

	t3 = ((x37^x38)<<(x39/x40));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x46 = -2126028949129LL;
	uint32_t x47 = 54U;

	t4 = ((x45^x46)<<(x47/x48));

	if (t4 != 2126028949128LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x52 = UINT16_MAX;
	static int32_t t5 = 111464814;

	t5 = ((x49^x50)<<(x51/x52));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x53 = 43;
	uint16_t x55 = 3U;
	int64_t x56 = INT64_MIN;
	static int32_t t6 = 1;

	t6 = ((x53^x54)<<(x55/x56));

	if (t6 != 2147483604) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x77 = 11;
	uint8_t x78 = 127U;
	int8_t x79 = 3;
	static int8_t x80 = -30;

	t7 = ((x77^x78)<<(x79/x80));

	if (t7 != 116) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x85 = UINT8_MAX;
	int16_t x86 = 54;
	int64_t x88 = INT64_MIN;
	int32_t t8 = -42;

	t8 = ((x85^x86)<<(x87/x88));

	if (t8 != 201) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x89 = 75041755672969LL;
	volatile uint32_t x90 = 1225U;
	int8_t x91 = -1;
	volatile uint64_t x92 = UINT64_MAX;
	int64_t t9 = 119699732397125LL;

	t9 = ((x89^x90)<<(x91/x92));

	if (t9 != 150083511347840LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x109 = INT32_MAX;
	static uint64_t x110 = 287LLU;
	uint8_t x111 = 0U;
	uint64_t x112 = 2842576225509LLU;
	uint64_t t10 = 6547LLU;

	t10 = ((x109^x110)<<(x111/x112));

	if (t10 != 2147483360LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x117 = 3U;
	int16_t x118 = INT16_MAX;
	uint8_t x119 = 12U;
	int16_t x120 = 7182;
	volatile int32_t t11 = -12916;

	t11 = ((x117^x118)<<(x119/x120));

	if (t11 != 32764) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MAX;
	volatile int8_t x132 = 15;

	t12 = ((x129^x130)<<(x131/x132));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x137 = 1;
	uint8_t x139 = 0U;
	int8_t x140 = 2;
	int32_t t13 = 21863920;

	t13 = ((x137^x138)<<(x139/x140));

	if (t13 != 32766) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = UINT32_MAX;
	volatile uint16_t x147 = UINT16_MAX;
	static int32_t x148 = INT32_MAX;
	uint64_t t14 = 2102667LLU;

	t14 = ((x145^x146)<<(x147/x148));

	if (t14 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x177 = -43;
	volatile int16_t x178 = -1;
	uint16_t x179 = 2U;
	int32_t x180 = INT32_MAX;

	t15 = ((x177^x178)<<(x179/x180));

	if (t15 != 42) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x193 = INT64_MAX;
	int8_t x195 = -1;
	int32_t x196 = -3;
	uint64_t t16 = 14238103026LLU;

	t16 = ((x193^x194)<<(x195/x196));

	if (t16 != 9223025878582317887LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x209 = -10;
	volatile int64_t x210 = -2092452755LL;
	volatile int64_t t17 = -14870378LL;

	t17 = ((x209^x210)<<(x211/x212));

	if (t17 != 2092452763LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x215 = 473976756296107LL;
	int64_t x216 = INT64_MIN;

	t18 = ((x213^x214)<<(x215/x216));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x225 = -2436;
	volatile uint32_t x226 = UINT32_MAX;
	int8_t x227 = -1;
	int16_t x228 = -2262;
	volatile uint32_t t19 = 22250419U;

	t19 = ((x225^x226)<<(x227/x228));

	if (t19 != 2435U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x229 = -1;
	uint64_t x230 = 4171382476799899LLU;

	t20 = ((x229^x230)<<(x231/x232));

	if (t20 != 18380001954080753216LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x246 = UINT64_MAX;
	volatile int8_t x247 = INT8_MAX;
	int8_t x248 = INT8_MIN;

	t21 = ((x245^x246)<<(x247/x248));

	if (t21 != 17950747301101759048LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x254 = UINT64_MAX;
	uint64_t x255 = UINT64_MAX;
	uint64_t t22 = 952LLU;

	t22 = ((x253^x254)<<(x255/x256));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = 1426031384278209LLU;
	uint8_t x271 = 14U;
	int8_t x272 = INT8_MIN;
	volatile uint64_t t23 = 3LLU;

	t23 = ((x269^x270)<<(x271/x272));

	if (t23 != 18445318042325273409LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x277 = INT16_MAX;
	uint64_t x279 = 2001296806828LLU;
	volatile uint64_t x280 = 68637507508780785LLU;
	static uint32_t t24 = 1020540U;

	t24 = ((x277^x278)<<(x279/x280));

	if (t24 != 53078373U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x281 = UINT32_MAX;
	static uint8_t x282 = UINT8_MAX;
	volatile int32_t x283 = INT32_MIN;

	t25 = ((x281^x282)<<(x283/x284));

	if (t25 != 4294966784U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x287 = UINT8_MAX;
	static int32_t t26 = 1;

	t26 = ((x285^x286)<<(x287/x288));

	if (t26 != 275) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x293 = UINT8_MAX;
	volatile int16_t x295 = 13;
	int16_t x296 = INT16_MIN;
	static int32_t t27 = 50999;

	t27 = ((x293^x294)<<(x295/x296));

	if (t27 != 47361) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 7LLU;
	int8_t x307 = -1;
	int32_t x308 = INT32_MIN;
	uint64_t t28 = 677252704LLU;

	t28 = ((x305^x306)<<(x307/x308));

	if (t28 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x317 = 115U;
	uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MIN;
	static uint32_t x320 = 113653782U;
	volatile uint64_t t29 = 8690LLU;

	t29 = ((x317^x318)<<(x319/x320));

	if (t29 != 18446728130790948864LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x341 = 384U;
	int16_t x342 = 0;
	uint64_t x343 = 447568592LLU;
	int32_t t30 = 1017;

	t30 = ((x341^x342)<<(x343/x344));

	if (t30 != 384) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x361 = 25121237U;
	int32_t x362 = -118;
	int16_t x363 = -1;

	t31 = ((x361^x362)<<(x363/x364));

	if (t31 != 4244724926U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x365 = -1;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 2U;
	int8_t x368 = INT8_MIN;
	int32_t t32 = 402;

	t32 = ((x365^x366)<<(x367/x368));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x369 = 1;
	volatile uint64_t x370 = 22968390885177421LLU;
	static volatile uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t33 = 1764LLU;

	t33 = ((x369^x370)<<(x371/x372));

	if (t33 != 22968390885177420LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x417 = -49804710210280861LL;
	uint64_t x418 = UINT64_MAX;
	int32_t x419 = -1;
	int16_t x420 = -120;
	uint64_t t34 = 8792499543468229199LLU;

	t34 = ((x417^x418)<<(x419/x420));

	if (t34 != 49804710210280860LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x421 = UINT32_MAX;
	volatile int8_t x422 = INT8_MAX;
	int32_t x423 = 1;
	int16_t x424 = 7859;
	uint32_t t35 = 91U;

	t35 = ((x421^x422)<<(x423/x424));

	if (t35 != 4294967168U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x433 = 2920072U;
	uint8_t x434 = 16U;
	static int16_t x435 = INT16_MIN;
	int64_t x436 = -1090466405095230070LL;
	uint32_t t36 = 64246984U;

	t36 = ((x433^x434)<<(x435/x436));

	if (t36 != 2920088U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x437 = 55;
	volatile int64_t t37 = -184LL;

	t37 = ((x437^x438)<<(x439/x440));

	if (t37 != 90LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x441 = INT64_MIN;
	int8_t x442 = INT8_MIN;
	uint64_t x444 = UINT64_MAX;
	int64_t t38 = 352050930798626LL;

	t38 = ((x441^x442)<<(x443/x444));

	if (t38 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x446 = 1951;
	static int8_t x447 = 0;
	int16_t x448 = -1;
	static int32_t t39 = 18116705;

	t39 = ((x445^x446)<<(x447/x448));

	if (t39 != 14754861) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x449 = UINT8_MAX;
	static int8_t x450 = 3;
	int16_t x451 = 0;
	int16_t x452 = INT16_MIN;
	int32_t t40 = 486826381;

	t40 = ((x449^x450)<<(x451/x452));

	if (t40 != 252) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x453 = 1422744348LLU;
	int8_t x454 = INT8_MIN;
	uint64_t x455 = 252635558248354LLU;
	int8_t x456 = -1;

	t41 = ((x453^x454)<<(x455/x456));

	if (t41 != 18446744072286807196LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x457 = -41;
	static int16_t x458 = INT16_MIN;
	int32_t x459 = 1;
	static volatile uint64_t x460 = 3150253LLU;

	t42 = ((x457^x458)<<(x459/x460));

	if (t42 != 32727) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x477 = UINT8_MAX;
	int32_t x479 = INT32_MIN;
	int64_t x480 = INT64_MAX;
	volatile uint32_t t43 = 5104U;

	t43 = ((x477^x478)<<(x479/x480));

	if (t43 != 579U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x486 = -1LL;
	static uint32_t x487 = UINT32_MAX;
	volatile int64_t t44 = -231564858468120LL;

	t44 = ((x485^x486)<<(x487/x488));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x509 = -1;
	uint64_t x510 = 14268676494185137LLU;
	volatile int32_t x512 = -1;
	uint64_t t45 = 3995720438LLU;

	t45 = ((x509^x510)<<(x511/x512));

	if (t45 != 18418206720721181340LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x513 = INT8_MAX;
	volatile uint16_t x514 = UINT16_MAX;
	static int8_t x515 = 0;
	int64_t x516 = INT64_MAX;
	volatile int32_t t46 = 0;

	t46 = ((x513^x514)<<(x515/x516));

	if (t46 != 65408) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x517 = INT8_MIN;
	int64_t x518 = -1LL;
	static int16_t x519 = -1;
	int16_t x520 = INT16_MIN;
	int64_t t47 = -3465668728LL;

	t47 = ((x517^x518)<<(x519/x520));

	if (t47 != 127LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x529 = INT16_MAX;
	volatile uint8_t x530 = 1U;
	volatile int64_t x532 = INT64_MIN;
	volatile int32_t t48 = -243794022;

	t48 = ((x529^x530)<<(x531/x532));

	if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x537 = 23987365U;
	int8_t x538 = INT8_MIN;
	static int8_t x539 = 21;

	t49 = ((x537^x538)<<(x539/x540));

	if (t49 != 4270979877U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x541 = 3086613629766292LL;
	volatile uint8_t x542 = 112U;
	volatile int64_t x543 = -326502722101721015LL;
	volatile int64_t x544 = INT64_MAX;
	static volatile int64_t t50 = 4457LL;

	t50 = ((x541^x542)<<(x543/x544));

	if (t50 != 3086613629766372LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x549 = INT64_MIN;
	uint8_t x552 = 85U;

	t51 = ((x549^x550)<<(x551/x552));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x581 = 11105999364501151LLU;
	static uint32_t x582 = 31U;
	uint32_t x583 = 571U;
	static uint64_t t52 = 60965700067617347LLU;

	t52 = ((x581^x582)<<(x583/x584));

	if (t52 != 11105999364501120LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x593 = UINT64_MAX;
	static uint16_t x594 = 105U;
	int8_t x596 = INT8_MAX;
	volatile uint64_t t53 = 229LLU;

	t53 = ((x593^x594)<<(x595/x596));

	if (t53 != 18446744016801234944LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x597 = INT16_MIN;
	int32_t x598 = -20663;
	uint16_t x599 = 0U;
	static volatile int32_t t54 = 477530105;

	t54 = ((x597^x598)<<(x599/x600));

	if (t54 != 12105) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x613 = 1U;
	uint32_t x614 = UINT32_MAX;
	int8_t x615 = 2;
	uint16_t x616 = 2U;
	static volatile uint32_t t55 = 176U;

	t55 = ((x613^x614)<<(x615/x616));

	if (t55 != 4294967292U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x617 = INT64_MAX;
	uint64_t x618 = UINT64_MAX;
	uint32_t x620 = UINT32_MAX;
	uint64_t t56 = 62904116202851511LLU;

	t56 = ((x617^x618)<<(x619/x620));

	if (t56 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x626 = -1;
	static uint8_t x627 = 0U;
	uint16_t x628 = 7602U;

	t57 = ((x625^x626)<<(x627/x628));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x634 = INT8_MIN;
	static int16_t x636 = INT16_MIN;
	uint32_t t58 = 940589U;

	t58 = ((x633^x634)<<(x635/x636));

	if (t58 != 4251124344U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x653 = 513911808132865LL;
	uint8_t x655 = 5U;
	int32_t x656 = INT32_MAX;
	int64_t t59 = 688178007788LL;

	t59 = ((x653^x654)<<(x655/x656));

	if (t59 != 513911808157157LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x681 = UINT8_MAX;
	int64_t x682 = INT64_MAX;
	int8_t x684 = INT8_MAX;
	int64_t t60 = 586LL;

	t60 = ((x681^x682)<<(x683/x684));

	if (t60 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x689 = 22860008U;
	uint32_t x690 = 491242502U;
	static uint64_t x691 = 7734653593LLU;
	volatile int16_t x692 = -1;
	volatile uint32_t t61 = 1645U;

	t61 = ((x689^x690)<<(x691/x692));

	if (t61 != 471536878U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x697 = INT64_MIN;
	static uint8_t x699 = UINT8_MAX;
	static int16_t x700 = 5225;
	int64_t t62 = 23153932LL;

	t62 = ((x697^x698)<<(x699/x700));

	if (t62 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x705 = INT8_MAX;
	uint32_t x706 = UINT32_MAX;
	static uint32_t x707 = 789U;
	uint64_t x708 = 284387393044607612LLU;
	volatile uint32_t t63 = 255287585U;

	t63 = ((x705^x706)<<(x707/x708));

	if (t63 != 4294967168U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x725 = 5U;
	uint32_t x726 = UINT32_MAX;
	uint8_t x727 = 16U;
	volatile uint32_t x728 = UINT32_MAX;
	static uint32_t t64 = 2U;

	t64 = ((x725^x726)<<(x727/x728));

	if (t64 != 4294967290U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x737 = INT32_MIN;
	static int8_t x739 = -63;
	volatile int8_t x740 = INT8_MIN;
	static volatile int32_t t65 = -688082754;

	t65 = ((x737^x738)<<(x739/x740));

	if (t65 != 1357619062) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x757 = INT64_MAX;
	static volatile int32_t x758 = INT32_MAX;
	static int64_t x759 = 10391LL;
	static volatile int16_t x760 = INT16_MIN;

	t66 = ((x757^x758)<<(x759/x760));

	if (t66 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x769 = INT8_MAX;
	uint8_t x770 = 2U;
	static uint32_t x771 = 54U;
	static volatile int8_t x772 = -1;
	volatile int32_t t67 = -3807;

	t67 = ((x769^x770)<<(x771/x772));

	if (t67 != 125) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x785 = INT8_MIN;
	volatile int32_t x786 = INT32_MIN;
	int8_t x787 = INT8_MIN;
	volatile int16_t x788 = INT16_MIN;
	int32_t t68 = 43;

	t68 = ((x785^x786)<<(x787/x788));

	if (t68 != 2147483520) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x789 = 1U;
	static int32_t x790 = 32719102;
	int64_t x791 = 51337LL;
	static int32_t t69 = 2475;

	t69 = ((x789^x790)<<(x791/x792));

	if (t69 != 32719103) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x809 = -237904066052664570LL;
	int8_t x810 = INT8_MIN;
	static int8_t x811 = 1;
	int32_t x812 = -9082454;
	volatile int64_t t70 = -235LL;

	t70 = ((x809^x810)<<(x811/x812));

	if (t70 != 237904066052664454LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x833 = 25;
	int16_t x834 = 4;
	uint64_t x835 = 23412LLU;
	int32_t t71 = -201;

	t71 = ((x833^x834)<<(x835/x836));

	if (t71 != 29) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x838 = INT16_MAX;
	int16_t x839 = -496;
	int32_t x840 = -26247;
	int32_t t72 = 6061072;

	t72 = ((x837^x838)<<(x839/x840));

	if (t72 != 32746) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x846 = 956835511;
	volatile uint64_t x848 = 73457612121562347LLU;
	volatile uint32_t t73 = 910U;

	t73 = ((x845^x846)<<(x847/x848));

	if (t73 != 956835511U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x849 = UINT8_MAX;
	int16_t x851 = -12;
	int32_t x852 = INT32_MAX;
	static volatile int32_t t74 = 633408535;

	t74 = ((x849^x850)<<(x851/x852));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x853 = 3U;
	volatile uint8_t x854 = UINT8_MAX;
	uint8_t x856 = UINT8_MAX;
	volatile int32_t t75 = -28766099;

	t75 = ((x853^x854)<<(x855/x856));

	if (t75 != 252) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x861 = -4185106LL;
	volatile uint64_t x862 = 1LLU;
	uint16_t x863 = UINT16_MAX;
	volatile uint32_t x864 = 8569U;
	static uint64_t t76 = 1LLU;

	t76 = ((x861^x862)<<(x863/x864));

	if (t76 != 18446744073173858176LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x873 = INT64_MIN;
	static uint64_t x874 = UINT64_MAX;
	volatile int8_t x875 = 3;
	int64_t x876 = INT64_MIN;
	uint64_t t77 = 12LLU;

	t77 = ((x873^x874)<<(x875/x876));

	if (t77 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x879 = 1U;
	uint64_t t78 = 11055520729088410LLU;

	t78 = ((x877^x878)<<(x879/x880));

	if (t78 != 9223372036855013170LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x881 = 7223U;
	int16_t x882 = INT16_MAX;
	volatile int32_t t79 = 211485;

	t79 = ((x881^x882)<<(x883/x884));

	if (t79 != 25544) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x897 = INT32_MAX;
	uint32_t x898 = 199U;
	volatile int16_t x899 = -1;
	uint16_t x900 = UINT16_MAX;
	uint32_t t80 = 159U;

	t80 = ((x897^x898)<<(x899/x900));

	if (t80 != 2147483448U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x905 = UINT16_MAX;
	volatile uint16_t x906 = 10U;
	int32_t x907 = INT32_MAX;
	volatile int32_t t81 = 46960734;

	t81 = ((x905^x906)<<(x907/x908));

	if (t81 != 65525) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x909 = INT32_MAX;
	uint32_t x910 = 0U;
	uint32_t x911 = UINT32_MAX;
	volatile int64_t x912 = -2144143575358LL;

	t82 = ((x909^x910)<<(x911/x912));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x917 = INT16_MAX;
	uint32_t x918 = UINT32_MAX;
	int32_t x919 = INT32_MAX;
	static volatile uint64_t x920 = 8926631027475370LLU;
	static uint32_t t83 = 1043364U;

	t83 = ((x917^x918)<<(x919/x920));

	if (t83 != 4294934528U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x922 = UINT64_MAX;
	int8_t x923 = INT8_MAX;
	int32_t x924 = 179;
	uint64_t t84 = 2636286387780164033LLU;

	t84 = ((x921^x922)<<(x923/x924));

	if (t84 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x930 = INT32_MAX;
	volatile int64_t x931 = -242257314299LL;
	static int64_t x932 = INT64_MIN;
	volatile int64_t t85 = -218925LL;

	t85 = ((x929^x930)<<(x931/x932));

	if (t85 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x937 = UINT8_MAX;
	int16_t x938 = INT16_MAX;
	int8_t x939 = INT8_MIN;
	int16_t x940 = INT16_MIN;
	int32_t t86 = -12025;

	t86 = ((x937^x938)<<(x939/x940));

	if (t86 != 32512) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint64_t x941 = 920963375497LLU;
	uint64_t x943 = 7LLU;
	int8_t x944 = INT8_MIN;

	t87 = ((x941^x942)<<(x943/x944));

	if (t87 != 18446743154279440777LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x957 = 3005403653624LLU;
	uint64_t x958 = 38290LLU;
	int64_t x959 = -1LL;
	static volatile int64_t x960 = 190869LL;

	t88 = ((x957^x958)<<(x959/x960));

	if (t88 != 3005403689066LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x961 = -20547LL;
	int64_t x962 = INT64_MIN;
	int64_t x964 = INT64_MAX;
	int64_t t89 = 10442946565128LL;

	t89 = ((x961^x962)<<(x963/x964));

	if (t89 != 9223372036854755261LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x985 = UINT8_MAX;
	uint32_t x986 = UINT32_MAX;
	int64_t x987 = -1LL;
	uint32_t t90 = 288622140U;

	t90 = ((x985^x986)<<(x987/x988));

	if (t90 != 4294967040U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x993 = UINT8_MAX;
	int16_t x996 = -5294;
	volatile uint32_t t91 = 4112742U;

	t91 = ((x993^x994)<<(x995/x996));

	if (t91 != 252U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x997 = UINT32_MAX;
	uint64_t x998 = 33495648019944LLU;
	int32_t x999 = -1;
	uint64_t t92 = 107664LLU;

	t92 = ((x997^x998)<<(x999/x1000));

	if (t92 != 33492956895767LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x1029 = INT32_MIN;
	int64_t x1030 = -1LL;
	int32_t x1031 = 0;

	t93 = ((x1029^x1030)<<(x1031/x1032));

	if (t93 != 2147483647LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x1057 = UINT32_MAX;
	volatile uint16_t x1059 = 0U;
	static int16_t x1060 = INT16_MIN;
	volatile uint32_t t94 = 16697U;

	t94 = ((x1057^x1058)<<(x1059/x1060));

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1073 = -8;
	int64_t x1074 = INT64_MIN;
	uint32_t x1075 = 31692789U;
	int32_t x1076 = INT32_MIN;
	volatile int64_t t95 = -144417795325739LL;

	t95 = ((x1073^x1074)<<(x1075/x1076));

	if (t95 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x1081 = INT8_MAX;
	uint64_t x1082 = UINT64_MAX;
	volatile int32_t x1083 = INT32_MAX;
	volatile uint64_t t96 = 223430LLU;

	t96 = ((x1081^x1082)<<(x1083/x1084));

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1089 = INT16_MIN;
	int32_t x1090 = INT32_MIN;
	static int8_t x1091 = -3;
	static int64_t x1092 = INT64_MIN;
	static volatile int32_t t97 = 35;

	t97 = ((x1089^x1090)<<(x1091/x1092));

	if (t97 != 2147450880) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x1093 = UINT8_MAX;
	uint32_t x1094 = UINT32_MAX;
	int16_t x1095 = -1;
	static int64_t x1096 = -2LL;
	static uint32_t t98 = 0U;

	t98 = ((x1093^x1094)<<(x1095/x1096));

	if (t98 != 4294967040U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x1098 = 0;
	int16_t x1099 = -1;
	volatile int8_t x1100 = -1;
	uint32_t t99 = 1927134105U;

	t99 = ((x1097^x1098)<<(x1099/x1100));

	if (t99 != 14U) { NG(); } else { ; }
	
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

