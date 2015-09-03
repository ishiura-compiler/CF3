#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 0;
int8_t x11 = -1;
static int16_t x15 = INT16_MIN;
uint32_t x17 = 6052U;
int16_t x18 = INT16_MIN;
int16_t x42 = 1605;
volatile uint16_t x54 = 1U;
uint8_t x65 = UINT8_MAX;
static uint64_t x68 = 55LLU;
int64_t t8 = 2395187249023523104LL;
uint16_t x89 = 1U;
uint64_t x90 = 307243LLU;
uint32_t x91 = 13U;
volatile int16_t x107 = INT16_MIN;
volatile int64_t t11 = 1052951395LL;
uint16_t x141 = 6976U;
volatile uint64_t t13 = 673LLU;
volatile uint8_t x145 = UINT8_MAX;
int16_t x147 = -1;
uint32_t x148 = UINT32_MAX;
volatile uint64_t x173 = 26395403918LLU;
uint8_t x174 = UINT8_MAX;
int16_t x186 = 430;
int32_t x187 = 63;
volatile int16_t x188 = INT16_MAX;
uint8_t x245 = UINT8_MAX;
int16_t x246 = INT16_MAX;
static uint8_t x248 = 55U;
volatile int32_t t23 = -64949;
volatile int32_t t24 = -25500;
int64_t x261 = -180130566201LL;
volatile int64_t t25 = -198604155865450693LL;
int64_t x294 = INT64_MAX;
int8_t x301 = INT8_MAX;
uint32_t x352 = UINT32_MAX;
volatile int32_t x357 = -7;
int64_t x363 = INT64_MIN;
uint64_t x466 = 475675668839131871LLU;
uint64_t x467 = 534544183LLU;
int8_t x468 = INT8_MIN;
volatile uint64_t t40 = 103610676302483766LLU;
int8_t x471 = INT8_MAX;
volatile int32_t t41 = -3;
int64_t t43 = 293263432LL;
int32_t x520 = -21049;
int32_t x537 = INT32_MIN;
volatile int16_t x538 = -1;
uint16_t x540 = UINT16_MAX;
int8_t x541 = 3;
int64_t x570 = INT64_MIN;
volatile int64_t t49 = -59713464976LL;
int8_t x579 = 1;
uint16_t x581 = UINT16_MAX;
static int64_t x613 = -183569528798LL;
uint32_t x616 = UINT32_MAX;
int8_t x631 = INT8_MIN;
uint8_t x675 = 13U;
static uint32_t t60 = 156U;
uint16_t x720 = 15U;
uint8_t x722 = UINT8_MAX;
volatile int16_t x732 = INT16_MIN;
volatile uint64_t t65 = 529911363LLU;
static uint8_t x739 = 60U;
volatile uint64_t t66 = 392322570132LLU;
volatile int8_t x742 = INT8_MAX;
int16_t x743 = -1;
uint16_t x746 = 30140U;
int16_t x748 = -1;
volatile int32_t t68 = -2;
uint32_t x759 = UINT32_MAX;
int8_t x805 = -1;
int32_t x806 = -1;
volatile int32_t t71 = -11307721;
int32_t x814 = INT32_MIN;
int16_t x824 = INT16_MAX;
int32_t t74 = -45719545;
volatile uint64_t t75 = 88093397604068325LLU;
static uint32_t t76 = 249U;
int32_t t78 = 949140098;
volatile uint64_t x885 = UINT64_MAX;
int32_t x894 = -1;
volatile int64_t x920 = -4251830778634LL;
static volatile int8_t x929 = -1;
static int64_t x932 = 3132485271940LL;
int16_t x941 = -1;
int8_t x942 = INT8_MIN;
int8_t x943 = INT8_MIN;
int32_t x944 = 507687;
static int16_t x948 = INT16_MIN;
static int16_t x964 = INT16_MIN;
uint64_t x967 = UINT64_MAX;
int32_t t91 = 5;
int64_t x1001 = 19747087LL;
volatile int32_t x1003 = INT32_MAX;
int16_t x1018 = INT16_MAX;
uint16_t x1033 = UINT16_MAX;
int64_t x1036 = INT64_MIN;
uint16_t x1039 = 81U;
static volatile int64_t t99 = 245428919893979LL;


void f0(void) {
	int32_t x5 = -1;
	int8_t x6 = INT8_MIN;
	uint8_t x7 = UINT8_MAX;
	uint8_t x8 = 25U;

	t0 = ((x5^x6)>>(x7/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = UINT64_MAX;
	int16_t x12 = INT16_MAX;
	uint64_t t1 = 93245597293998LLU;

	t1 = ((x9^x10)>>(x11/x12));

	if (t1 != 127LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -8;
	volatile uint64_t x14 = 4524588939735413083LLU;
	volatile int64_t x16 = INT64_MIN;
	volatile uint64_t t2 = 29865LLU;

	t2 = ((x13^x14)>>(x15/x16));

	if (t2 != 13922155133974138531LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	static uint32_t t3 = 703709983U;

	t3 = ((x17^x18)>>(x19/x20));

	if (t3 != 2147470290U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x41 = 16U;
	static int8_t x43 = 7;
	int64_t x44 = 2500830316360551LL;
	volatile int32_t t4 = 790;

	t4 = ((x41^x42)>>(x43/x44));

	if (t4 != 1621) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x53 = UINT16_MAX;
	uint8_t x55 = 6U;
	int64_t x56 = -417LL;
	int32_t t5 = -825;

	t5 = ((x53^x54)>>(x55/x56));

	if (t5 != 65534) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x61 = 48231U;
	uint64_t x62 = 612078LLU;
	int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	volatile uint64_t t6 = 42496215LLU;

	t6 = ((x61^x62)>>(x63/x64));

	if (t6 != 324932LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x66 = UINT16_MAX;
	int8_t x67 = 1;
	static int32_t t7 = -314178257;

	t7 = ((x65^x66)>>(x67/x68));

	if (t7 != 65280) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x81 = INT8_MIN;
	static int64_t x82 = -1289LL;
	int64_t x83 = -1LL;
	int64_t x84 = 8704253807556LL;

	t8 = ((x81^x82)>>(x83/x84));

	if (t8 != 1399LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x85 = -113;
	volatile int32_t x86 = -1;
	volatile uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t9 = 10;

	t9 = ((x85^x86)>>(x87/x88));

	if (t9 != 112) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x92 = 4U;
	uint64_t t10 = 29038LLU;

	t10 = ((x89^x90)>>(x91/x92));

	if (t10 != 38405LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x105 = 1422U;
	volatile int64_t x106 = 1LL;
	int32_t x108 = INT32_MAX;

	t11 = ((x105^x106)>>(x107/x108));

	if (t11 != 1423LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x125 = 20U;
	uint64_t x126 = UINT64_MAX;
	int64_t x127 = -1LL;
	int32_t x128 = -1;
	uint64_t t12 = 6286510444612251LLU;

	t12 = ((x125^x126)>>(x127/x128));

	if (t12 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x142 = 25032574868LLU;
	uint32_t x143 = UINT32_MAX;
	static uint64_t x144 = 59783109432LLU;

	t13 = ((x141^x142)>>(x143/x144));

	if (t13 != 25032580308LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x146 = 546871500241LLU;
	volatile uint64_t t14 = 115599727407454079LLU;

	t14 = ((x145^x146)>>(x147/x148));

	if (t14 != 273435750039LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x157 = INT64_MIN;
	static volatile int32_t x158 = INT32_MIN;
	int8_t x159 = -1;
	int16_t x160 = INT16_MAX;
	int64_t t15 = -9728856037564797LL;

	t15 = ((x157^x158)>>(x159/x160));

	if (t15 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x165 = 32;
	static volatile uint32_t x166 = UINT32_MAX;
	int8_t x167 = -1;
	uint64_t x168 = UINT64_MAX;
	uint32_t t16 = 3U;

	t16 = ((x165^x166)>>(x167/x168));

	if (t16 != 2147483631U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x175 = -1360363LL;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t17 = 144089985257LLU;

	t17 = ((x173^x174)>>(x175/x176));

	if (t17 != 26395403889LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x177 = 4631U;
	uint16_t x178 = 5U;
	int8_t x179 = -1;
	volatile int64_t x180 = -1LL;
	uint32_t t18 = 32U;

	t18 = ((x177^x178)>>(x179/x180));

	if (t18 != 2313U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x185 = INT8_MAX;
	volatile int32_t t19 = 0;

	t19 = ((x185^x186)>>(x187/x188));

	if (t19 != 465) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x189 = INT8_MIN;
	volatile uint64_t x190 = 156113080275459587LLU;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = -1428;
	volatile uint64_t t20 = 4619852600LLU;

	t20 = ((x189^x190)>>(x191/x192));

	if (t20 != 18290630993434091907LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x197 = -1;
	static int64_t x198 = INT64_MIN;
	uint16_t x199 = 3U;
	int32_t x200 = INT32_MAX;
	int64_t t21 = INT64_MAX;

	t21 = ((x197^x198)>>(x199/x200));

	if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x213 = INT8_MIN;
	uint32_t x214 = UINT32_MAX;
	volatile int16_t x215 = INT16_MAX;
	uint64_t x216 = 25356861LLU;
	volatile uint32_t t22 = 3910574U;

	t22 = ((x213^x214)>>(x215/x216));

	if (t22 != 127U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x247 = 1;

	t23 = ((x245^x246)>>(x247/x248));

	if (t23 != 32512) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x253 = -1;
	int32_t x254 = -16448749;
	int16_t x255 = INT16_MIN;
	int32_t x256 = INT32_MIN;

	t24 = ((x253^x254)>>(x255/x256));

	if (t24 != 16448748) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x262 = -1;
	int64_t x263 = INT64_MAX;
	volatile uint64_t x264 = UINT64_MAX;

	t25 = ((x261^x262)>>(x263/x264));

	if (t25 != 180130566200LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x265 = UINT32_MAX;
	int16_t x266 = -1;
	static volatile int16_t x267 = INT16_MIN;
	int64_t x268 = INT64_MAX;
	uint32_t t26 = 9U;

	t26 = ((x265^x266)>>(x267/x268));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x293 = 45553852451024LLU;
	int8_t x295 = 10;
	static int8_t x296 = INT8_MIN;
	uint64_t t27 = 336175913581406LLU;

	t27 = ((x293^x294)>>(x295/x296));

	if (t27 != 9223326483002324783LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x302 = 53000LL;
	uint64_t x303 = 7382818720LLU;
	uint64_t x304 = UINT64_MAX;
	int64_t t28 = -86701548417LL;

	t28 = ((x301^x302)>>(x303/x304));

	if (t28 != 53111LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x321 = -1;
	volatile int8_t x322 = -1;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MAX;
	static int32_t t29 = -117758;

	t29 = ((x321^x322)>>(x323/x324));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = -22402LL;
	uint16_t x343 = 432U;
	int32_t x344 = -337036;
	static int64_t t30 = 834072LL;

	t30 = ((x341^x342)>>(x343/x344));

	if (t30 != 9223372036854753406LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x349 = INT32_MAX;
	uint8_t x350 = 5U;
	static int16_t x351 = INT16_MIN;
	int32_t t31 = 236511;

	t31 = ((x349^x350)>>(x351/x352));

	if (t31 != 2147483642) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x358 = UINT32_MAX;
	int64_t x359 = -1LL;
	int16_t x360 = -1;
	uint32_t t32 = 775U;

	t32 = ((x357^x358)>>(x359/x360));

	if (t32 != 3U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x361 = INT32_MIN;
	volatile uint32_t x362 = UINT32_MAX;
	int64_t x364 = INT64_MIN;
	volatile uint32_t t33 = 517879U;

	t33 = ((x361^x362)>>(x363/x364));

	if (t33 != 1073741823U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x373 = 102807281130801656LLU;
	static int64_t x374 = -1LL;
	static int16_t x375 = -1;
	static volatile uint16_t x376 = 1491U;
	volatile uint64_t t34 = 8LLU;

	t34 = ((x373^x374)>>(x375/x376));

	if (t34 != 18343936792578749959LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x413 = 25021U;
	int8_t x414 = 23;
	int32_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int32_t t35 = 45;

	t35 = ((x413^x414)>>(x415/x416));

	if (t35 != 25002) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x417 = INT16_MIN;
	int64_t x418 = INT64_MIN;
	volatile uint64_t x419 = 13461372566LLU;
	int32_t x420 = INT32_MIN;
	int64_t t36 = -43LL;

	t36 = ((x417^x418)>>(x419/x420));

	if (t36 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x445 = 58029553874093LLU;
	int32_t x446 = INT32_MAX;
	int8_t x447 = INT8_MAX;
	uint8_t x448 = UINT8_MAX;
	static volatile uint64_t t37 = 68129522377003596LLU;

	t37 = ((x445^x446)>>(x447/x448));

	if (t37 != 58031199882066LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x453 = INT64_MAX;
	static uint64_t x454 = 4277469755LLU;
	uint64_t x455 = 504803622659334068LLU;
	int32_t x456 = INT32_MIN;
	uint64_t t38 = 4676221433703744153LLU;

	t38 = ((x453^x454)>>(x455/x456));

	if (t38 != 9223372032577306052LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x457 = 4;
	volatile int64_t x458 = 438147961772417LL;
	volatile int8_t x459 = -29;
	int32_t x460 = INT32_MIN;
	static volatile int64_t t39 = 2572026989849238286LL;

	t39 = ((x457^x458)>>(x459/x460));

	if (t39 != 438147961772421LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x465 = INT32_MIN;

	t40 = ((x465^x466)>>(x467/x468));

	if (t40 != 17971068403979643615LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x469 = -571;
	int32_t x470 = -435;
	uint8_t x472 = UINT8_MAX;

	t41 = ((x469^x470)>>(x471/x472));

	if (t41 != 904) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x497 = UINT64_MAX;
	int16_t x498 = -59;
	static int16_t x499 = -1;
	uint16_t x500 = 359U;
	static volatile uint64_t t42 = 20LLU;

	t42 = ((x497^x498)>>(x499/x500));

	if (t42 != 58LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x505 = INT64_MIN;
	int32_t x506 = INT32_MIN;
	uint8_t x507 = UINT8_MAX;
	int64_t x508 = INT64_MAX;

	t43 = ((x505^x506)>>(x507/x508));

	if (t43 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x509 = INT16_MIN;
	int64_t x510 = -1LL;
	uint32_t x511 = 16601U;
	volatile int32_t x512 = INT32_MIN;
	volatile int64_t t44 = -395012LL;

	t44 = ((x509^x510)>>(x511/x512));

	if (t44 != 32767LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x517 = 248392993105533541LL;
	static volatile uint64_t x518 = 2256LLU;
	uint32_t x519 = 232030708U;
	static uint64_t t45 = 1848605939LLU;

	t45 = ((x517^x518)>>(x519/x520));

	if (t45 != 248392993105531573LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x539 = 13;
	int32_t t46 = INT32_MAX;

	t46 = ((x537^x538)>>(x539/x540));

	if (t46 != INT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x542 = 3U;
	volatile int8_t x543 = INT8_MIN;
	static uint32_t x544 = UINT32_MAX;
	static volatile int32_t t47 = -1;

	t47 = ((x541^x542)>>(x543/x544));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x549 = INT64_MIN;
	volatile int64_t x550 = INT64_MIN;
	volatile int16_t x551 = -1;
	int16_t x552 = INT16_MIN;
	volatile int64_t t48 = -2041407LL;

	t48 = ((x549^x550)>>(x551/x552));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x569 = INT16_MIN;
	volatile uint16_t x571 = 226U;
	int32_t x572 = INT32_MIN;

	t49 = ((x569^x570)>>(x571/x572));

	if (t49 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x573 = -2;
	static uint32_t x574 = 12630U;
	uint32_t x575 = 168850U;
	int32_t x576 = INT32_MAX;
	volatile uint32_t t50 = 75U;

	t50 = ((x573^x574)>>(x575/x576));

	if (t50 != 4294954664U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x577 = INT64_MIN;
	static uint64_t x578 = UINT64_MAX;
	int16_t x580 = INT16_MAX;
	uint64_t t51 = 1712635154LLU;

	t51 = ((x577^x578)>>(x579/x580));

	if (t51 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x582 = 21U;
	static int64_t x583 = INT64_MIN;
	int64_t x584 = INT64_MIN;
	int32_t t52 = -7;

	t52 = ((x581^x582)>>(x583/x584));

	if (t52 != 32757) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x605 = 173133LLU;
	uint8_t x606 = 3U;
	int8_t x607 = -9;
	int64_t x608 = INT64_MAX;
	volatile uint64_t t53 = 2526845LLU;

	t53 = ((x605^x606)>>(x607/x608));

	if (t53 != 173134LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x614 = UINT64_MAX;
	uint8_t x615 = UINT8_MAX;
	volatile uint64_t t54 = 855504232LLU;

	t54 = ((x613^x614)>>(x615/x616));

	if (t54 != 183569528797LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x617 = -122470202LL;
	int32_t x618 = -1;
	volatile int16_t x619 = 8493;
	volatile uint16_t x620 = 472U;
	int64_t t55 = -12458LL;

	t55 = ((x617^x618)>>(x619/x620));

	if (t55 != 934LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x629 = -1;
	uint32_t x630 = 775747U;
	int32_t x632 = 14268127;
	static volatile uint32_t t56 = 4008130U;

	t56 = ((x629^x630)>>(x631/x632));

	if (t56 != 4294191548U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x637 = INT64_MIN;
	int64_t x638 = INT64_MIN;
	int8_t x639 = INT8_MIN;
	static int32_t x640 = INT32_MIN;
	volatile int64_t t57 = -2045227004037LL;

	t57 = ((x637^x638)>>(x639/x640));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x653 = UINT16_MAX;
	static uint8_t x654 = 63U;
	int64_t x655 = -1LL;
	int8_t x656 = -19;
	static volatile int32_t t58 = -177550826;

	t58 = ((x653^x654)>>(x655/x656));

	if (t58 != 65472) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x673 = INT32_MIN;
	uint64_t x674 = 7194LLU;
	int8_t x676 = INT8_MAX;
	volatile uint64_t t59 = 6810013047438LLU;

	t59 = ((x673^x674)>>(x675/x676));

	if (t59 != 18446744071562075162LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x681 = 26;
	uint32_t x682 = UINT32_MAX;
	int8_t x683 = 35;
	int16_t x684 = 112;

	t60 = ((x681^x682)>>(x683/x684));

	if (t60 != 4294967269U) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x713 = -1LL;
	int16_t x714 = -1;
	volatile int64_t x715 = 13806808LL;
	int32_t x716 = 83859276;
	int64_t t61 = 10425153LL;

	t61 = ((x713^x714)>>(x715/x716));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x717 = 38;
	uint64_t x718 = 1305362425088666LLU;
	volatile uint8_t x719 = 0U;
	volatile uint64_t t62 = 1022062926185657358LLU;

	t62 = ((x717^x718)>>(x719/x720));

	if (t62 != 1305362425088700LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x721 = INT64_MAX;
	volatile int64_t x723 = -1LL;
	int64_t x724 = 206LL;
	volatile int64_t t63 = -1LL;

	t63 = ((x721^x722)>>(x723/x724));

	if (t63 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x725 = -1;
	volatile int8_t x726 = INT8_MIN;
	int8_t x727 = INT8_MIN;
	int8_t x728 = INT8_MIN;
	static int32_t t64 = -776901;

	t64 = ((x725^x726)>>(x727/x728));

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x729 = INT16_MAX;
	volatile uint64_t x730 = 2LLU;
	static int16_t x731 = INT16_MIN;

	t65 = ((x729^x730)>>(x731/x732));

	if (t65 != 16382LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x737 = 553066398628607243LLU;
	int64_t x738 = INT64_MAX;
	static uint32_t x740 = 215U;

	t66 = ((x737^x738)>>(x739/x740));

	if (t66 != 8670305638226168564LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x741 = INT16_MAX;
	int8_t x744 = INT8_MIN;
	int32_t t67 = -855;

	t67 = ((x741^x742)>>(x743/x744));

	if (t67 != 32640) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x745 = INT16_MAX;
	int32_t x747 = -1;

	t68 = ((x745^x746)>>(x747/x748));

	if (t68 != 1313) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x757 = UINT8_MAX;
	int32_t x758 = 366778;
	int32_t x760 = INT32_MAX;
	volatile int32_t t69 = -93;

	t69 = ((x757^x758)>>(x759/x760));

	if (t69 != 91665) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x801 = 7299U;
	uint64_t x802 = UINT64_MAX;
	int8_t x803 = -1;
	int32_t x804 = -1;
	volatile uint64_t t70 = 1441045631102699627LLU;

	t70 = ((x801^x802)>>(x803/x804));

	if (t70 != 9223372036854772158LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x807 = INT8_MAX;
	int8_t x808 = INT8_MIN;

	t71 = ((x805^x806)>>(x807/x808));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x809 = 3624U;
	uint16_t x810 = 2097U;
	int16_t x811 = INT16_MIN;
	int32_t x812 = INT32_MAX;
	static volatile uint32_t t72 = 312495386U;

	t72 = ((x809^x810)>>(x811/x812));

	if (t72 != 1561U) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x813 = -14;
	uint64_t x815 = UINT64_MAX;
	int16_t x816 = INT16_MIN;
	volatile int32_t t73 = -77423;

	t73 = ((x813^x814)>>(x815/x816));

	if (t73 != 1073741817) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x821 = INT16_MAX;
	static uint16_t x822 = 8U;
	int64_t x823 = -174LL;

	t74 = ((x821^x822)>>(x823/x824));

	if (t74 != 32759) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x825 = UINT64_MAX;
	int64_t x826 = INT64_MIN;
	uint16_t x827 = 6U;
	static int16_t x828 = 1;

	t75 = ((x825^x826)>>(x827/x828));

	if (t75 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x829 = UINT32_MAX;
	volatile int32_t x830 = -1;
	uint16_t x831 = UINT16_MAX;
	uint32_t x832 = 122167016U;

	t76 = ((x829^x830)>>(x831/x832));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x853 = 1729;
	int16_t x854 = 1508;
	volatile int32_t x855 = -1;
	int64_t x856 = -1LL;
	volatile int32_t t77 = -1359267;

	t77 = ((x853^x854)>>(x855/x856));

	if (t77 != 402) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x857 = -968;
	int16_t x858 = INT16_MIN;
	volatile uint32_t x859 = 146U;
	volatile int16_t x860 = INT16_MIN;

	t78 = ((x857^x858)>>(x859/x860));

	if (t78 != 31800) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x869 = 62LLU;
	int8_t x870 = -32;
	static int64_t x871 = -1LL;
	uint8_t x872 = UINT8_MAX;
	volatile uint64_t t79 = 124959LLU;

	t79 = ((x869^x870)>>(x871/x872));

	if (t79 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x886 = 425878639377175LLU;
	volatile uint8_t x887 = UINT8_MAX;
	static volatile uint32_t x888 = 8U;
	volatile uint64_t t80 = 3114236258LLU;

	t80 = ((x885^x886)>>(x887/x888));

	if (t80 != 8589736276LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x893 = -1;
	int8_t x895 = 1;
	int8_t x896 = INT8_MAX;
	int32_t t81 = 25081698;

	t81 = ((x893^x894)>>(x895/x896));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x905 = 62601659LL;
	uint8_t x906 = UINT8_MAX;
	int8_t x907 = -5;
	static uint8_t x908 = 19U;
	int64_t t82 = -97549365450LL;

	t82 = ((x905^x906)>>(x907/x908));

	if (t82 != 62601540LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x917 = INT64_MAX;
	int32_t x918 = INT32_MAX;
	int32_t x919 = INT32_MIN;
	volatile int64_t t83 = -29957LL;

	t83 = ((x917^x918)>>(x919/x920));

	if (t83 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x921 = 45261619;
	uint16_t x922 = 41U;
	uint8_t x923 = 44U;
	volatile int16_t x924 = INT16_MAX;
	volatile int32_t t84 = -27656;

	t84 = ((x921^x922)>>(x923/x924));

	if (t84 != 45261594) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x930 = INT16_MIN;
	int32_t x931 = 26;
	static int32_t t85 = -4164;

	t85 = ((x929^x930)>>(x931/x932));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t t86 = -1;

	t86 = ((x941^x942)>>(x943/x944));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x945 = INT32_MIN;
	volatile int32_t x946 = -51099;
	static int8_t x947 = -1;
	int32_t t87 = -49;

	t87 = ((x945^x946)>>(x947/x948));

	if (t87 != 2147432549) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x961 = 275351305933479LLU;
	uint8_t x962 = UINT8_MAX;
	uint8_t x963 = 2U;
	volatile uint64_t t88 = 705LLU;

	t88 = ((x961^x962)>>(x963/x964));

	if (t88 != 275351305933400LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x965 = -1;
	static int8_t x966 = INT8_MIN;
	volatile int8_t x968 = INT8_MIN;
	static volatile int32_t t89 = 47;

	t89 = ((x965^x966)>>(x967/x968));

	if (t89 != 63) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x981 = 167732U;
	uint16_t x982 = 10U;
	volatile int16_t x983 = -13;
	int8_t x984 = INT8_MIN;
	uint32_t t90 = 95590896U;

	t90 = ((x981^x982)>>(x983/x984));

	if (t90 != 167742U) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x985 = INT32_MAX;
	static int32_t x986 = INT32_MAX;
	static volatile int8_t x987 = -1;
	int8_t x988 = -1;

	t91 = ((x985^x986)>>(x987/x988));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x1002 = 1U;
	int64_t x1004 = INT64_MIN;
	volatile int64_t t92 = -2871076LL;

	t92 = ((x1001^x1002)>>(x1003/x1004));

	if (t92 != 19747086LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x1017 = UINT16_MAX;
	static int8_t x1019 = INT8_MAX;
	uint64_t x1020 = 183202655997LLU;
	int32_t t93 = 33623;

	t93 = ((x1017^x1018)>>(x1019/x1020));

	if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x1025 = 0U;
	static uint16_t x1026 = 34U;
	int8_t x1027 = INT8_MIN;
	static uint64_t x1028 = UINT64_MAX;
	volatile int32_t t94 = 930392;

	t94 = ((x1025^x1026)>>(x1027/x1028));

	if (t94 != 34) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x1029 = INT64_MAX;
	volatile int64_t x1030 = INT64_MAX;
	uint16_t x1031 = 4605U;
	int64_t x1032 = 689229LL;
	volatile int64_t t95 = 125371729LL;

	t95 = ((x1029^x1030)>>(x1031/x1032));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x1034 = UINT64_MAX;
	int8_t x1035 = INT8_MAX;
	uint64_t t96 = 1151632513955671LLU;

	t96 = ((x1033^x1034)>>(x1035/x1036));

	if (t96 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x1037 = 1666105U;
	int8_t x1038 = 7;
	uint32_t x1040 = 127U;
	uint32_t t97 = 596U;

	t97 = ((x1037^x1038)>>(x1039/x1040));

	if (t97 != 1666110U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1045 = 234LLU;
	uint8_t x1046 = UINT8_MAX;
	uint64_t x1047 = UINT64_MAX;
	int16_t x1048 = INT16_MIN;
	uint64_t t98 = 187082972762666LLU;

	t98 = ((x1045^x1046)>>(x1047/x1048));

	if (t98 != 10LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1049 = -425748644;
	int64_t x1050 = INT64_MIN;
	static uint64_t x1051 = UINT64_MAX;
	static volatile int64_t x1052 = -5254LL;

	t99 = ((x1049^x1050)>>(x1051/x1052));

	if (t99 != 4611686018214513582LL) { NG(); } else { ; }
	
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

