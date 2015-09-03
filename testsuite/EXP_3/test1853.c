#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x15 = 7U;
static int64_t x16 = 93344474LL;
static uint64_t x53 = 32833000LLU;
static int64_t x63 = INT64_MIN;
uint64_t x93 = 972902120LLU;
uint16_t x124 = 9U;
int16_t x131 = INT16_MIN;
int8_t x155 = INT8_MIN;
volatile int32_t x156 = 1;
static uint8_t x176 = 0U;
int64_t x201 = INT64_MIN;
static int64_t x202 = INT64_MIN;
static int32_t x204 = INT32_MAX;
int16_t x205 = INT16_MAX;
uint32_t x208 = 8U;
volatile int64_t t14 = -2017681086442091314LL;
int16_t x242 = -1;
uint8_t x251 = 0U;
int32_t x273 = -1;
int32_t x333 = 1267;
uint32_t t21 = 536198273U;
uint16_t x376 = 21U;
volatile int32_t x422 = -47049019;
uint8_t x427 = 30U;
int64_t x446 = 227LL;
static int32_t x448 = -1;
volatile int8_t x468 = 13;
int16_t x519 = 0;
uint64_t x566 = 213125882LLU;
uint8_t x583 = 35U;
static int8_t x590 = INT8_MAX;
static uint64_t x610 = 55719656612416721LLU;
volatile int64_t x616 = INT64_MIN;
uint8_t x619 = 2U;
int16_t x622 = 18;
int8_t x626 = 42;
volatile uint16_t x628 = 7U;
volatile int32_t x669 = -1;
volatile int64_t x670 = INT64_MIN;
static volatile int64_t x671 = -6855315LL;
volatile int8_t x687 = -1;
volatile int32_t t45 = 53825;
static int8_t x698 = -2;
uint8_t x699 = 4U;
volatile uint64_t x711 = 2899569179LLU;
volatile uint32_t x719 = UINT32_MAX;
int64_t x751 = INT64_MIN;
int64_t x780 = INT64_MAX;
int8_t x817 = 1;
int8_t x819 = 15;
int16_t x820 = -4626;
int64_t x833 = -1LL;
static int32_t x834 = INT32_MIN;
static volatile int64_t t53 = 281472720883674613LL;
int8_t x853 = -1;
int32_t t54 = 680789117;
static int64_t x865 = -1LL;
static volatile int64_t t55 = -46836LL;
static uint8_t x884 = 0U;
volatile uint32_t x886 = UINT32_MAX;
uint8_t x888 = 30U;
static volatile uint32_t t57 = 103U;
int64_t x922 = INT64_MAX;
uint8_t x947 = 13U;
static int64_t x948 = INT64_MAX;
int64_t x951 = 0LL;
static int64_t x952 = -1LL;
int8_t x984 = 1;
uint8_t x988 = 7U;
static int8_t x1021 = INT8_MIN;
uint32_t t68 = 351U;
int8_t x1051 = -11;
int16_t x1148 = 0;
volatile int64_t x1157 = INT64_MIN;
volatile int16_t x1158 = INT16_MIN;
int32_t x1166 = -1;
static volatile uint64_t x1217 = UINT64_MAX;
int64_t x1218 = -1LL;
volatile uint64_t t76 = 1LLU;
uint64_t x1221 = UINT64_MAX;
static int64_t x1222 = INT64_MAX;
uint64_t t77 = 63319077417309LLU;
int32_t x1241 = INT32_MIN;
int16_t x1283 = INT16_MAX;
uint32_t x1291 = 123676U;
static int32_t x1298 = -30;
uint16_t x1326 = 16241U;
uint64_t x1410 = UINT64_MAX;
uint32_t x1424 = 27931U;
static int32_t x1429 = INT32_MAX;
volatile uint16_t x1432 = 568U;
uint32_t x1521 = 1919U;
static int64_t x1522 = 246718LL;
static volatile int8_t x1524 = 16;
int64_t t93 = -216660835784313LL;
volatile uint32_t x1550 = 104U;
int8_t x1551 = 1;
int32_t x1565 = INT32_MAX;
int64_t x1568 = -3262535138517LL;
int16_t x1569 = 12041;
int32_t x1572 = INT32_MIN;
static uint8_t x1603 = 125U;


void f0(void) {
	volatile uint8_t x13 = 2U;
	uint16_t x14 = UINT16_MAX;
	int32_t t0 = 207096824;

	t0 = ((x13^x14)>>(x15&x16));

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x49 = 1LLU;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MAX;
	static int8_t x52 = 40;
	uint64_t t1 = 143LLU;

	t1 = ((x49^x50)>>(x51&x52));

	if (t1 != 8388608LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x54 = 134;
	uint8_t x55 = 3U;
	volatile uint8_t x56 = 63U;
	volatile uint64_t t2 = 1161904LLU;

	t2 = ((x53^x54)>>(x55&x56));

	if (t2 != 4104109LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x57 = -849;
	int64_t x58 = -1LL;
	uint16_t x59 = UINT16_MAX;
	int32_t x60 = INT32_MIN;
	static int64_t t3 = 184908LL;

	t3 = ((x57^x58)>>(x59&x60));

	if (t3 != 848LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x61 = INT8_MAX;
	uint8_t x62 = 2U;
	static uint32_t x64 = 31U;
	volatile int32_t t4 = -20;

	t4 = ((x61^x62)>>(x63&x64));

	if (t4 != 125) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x65 = INT16_MIN;
	static uint64_t x66 = UINT64_MAX;
	int64_t x67 = INT64_MIN;
	static int32_t x68 = 406589166;
	uint64_t t5 = 2LLU;

	t5 = ((x65^x66)>>(x67&x68));

	if (t5 != 32767LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x85 = INT32_MAX;
	int8_t x86 = INT8_MAX;
	uint8_t x87 = 4U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t6 = 58615;

	t6 = ((x85^x86)>>(x87&x88));

	if (t6 != 2147483520) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x94 = INT64_MAX;
	uint64_t x95 = 0LLU;
	uint16_t x96 = UINT16_MAX;
	volatile uint64_t t7 = 52086845954092001LLU;

	t7 = ((x93^x94)>>(x95&x96));

	if (t7 != 9223372035881873687LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x121 = 1714;
	static uint16_t x122 = UINT16_MAX;
	volatile int8_t x123 = INT8_MIN;
	int32_t t8 = 18780946;

	t8 = ((x121^x122)>>(x123&x124));

	if (t8 != 63821) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x129 = -1LL;
	volatile int16_t x130 = -11821;
	uint32_t x132 = 3025U;
	static volatile int64_t t9 = 19LL;

	t9 = ((x129^x130)>>(x131&x132));

	if (t9 != 11820LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MAX;
	int64_t t10 = 133848886605650LL;

	t10 = ((x153^x154)>>(x155&x156));

	if (t10 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x173 = -1;
	volatile int8_t x174 = INT8_MIN;
	int16_t x175 = -1;
	static volatile int32_t t11 = 12376;

	t11 = ((x173^x174)>>(x175&x176));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x203 = 2U;
	volatile int64_t t12 = 27662155740LL;

	t12 = ((x201^x202)>>(x203&x204));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x206 = INT8_MAX;
	uint16_t x207 = 321U;
	volatile int32_t t13 = 213130;

	t13 = ((x205^x206)>>(x207&x208));

	if (t13 != 32640) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile int32_t x218 = INT32_MIN;
	uint64_t x219 = 641039647271LLU;
	uint8_t x220 = UINT8_MAX;

	t14 = ((x217^x218)>>(x219&x220));

	if (t14 != 16777215LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x233 = 3LLU;
	int16_t x234 = -1;
	volatile int32_t x235 = 90164;
	uint8_t x236 = 0U;
	uint64_t t15 = 2081LLU;

	t15 = ((x233^x234)>>(x235&x236));

	if (t15 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x241 = -1732;
	volatile int8_t x243 = INT8_MAX;
	uint16_t x244 = 22166U;
	volatile int32_t t16 = 431932551;

	t16 = ((x241^x242)>>(x243&x244));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x249 = 50U;
	int16_t x250 = INT16_MIN;
	static uint64_t x252 = UINT64_MAX;
	volatile uint32_t t17 = 53U;

	t17 = ((x249^x250)>>(x251&x252));

	if (t17 != 4294934578U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x274 = 1065900999345643262LLU;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = INT64_MIN;
	uint64_t t18 = 2057174144813LLU;

	t18 = ((x273^x274)>>(x275&x276));

	if (t18 != 17380843074363908353LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x334 = 13;
	uint64_t x335 = 14873LLU;
	static int16_t x336 = 25;
	int32_t t19 = 11;

	t19 = ((x333^x334)>>(x335&x336));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x341 = 579480435784LL;
	uint64_t x342 = 461717226289668900LLU;
	int64_t x343 = INT64_MAX;
	volatile uint8_t x344 = 0U;
	static volatile uint64_t t20 = 6848941LLU;

	t20 = ((x341^x342)>>(x343&x344));

	if (t20 != 461717746323103596LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x353 = 65U;
	static volatile uint32_t x354 = 1936139U;
	int32_t x355 = INT32_MIN;
	static volatile uint32_t x356 = 47U;

	t21 = ((x353^x354)>>(x355&x356));

	if (t21 != 1936202U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x373 = INT8_MIN;
	static volatile int16_t x374 = INT16_MIN;
	static uint16_t x375 = 5U;
	volatile int32_t t22 = -4;

	t22 = ((x373^x374)>>(x375&x376));

	if (t22 != 1020) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x381 = UINT32_MAX;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = 44U;
	static uint16_t x384 = 4417U;
	volatile uint32_t t23 = 24U;

	t23 = ((x381^x382)>>(x383&x384));

	if (t23 != 32767U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x421 = UINT64_MAX;
	int64_t x423 = INT64_MIN;
	uint8_t x424 = UINT8_MAX;
	uint64_t t24 = 3840424645199LLU;

	t24 = ((x421^x422)>>(x423&x424));

	if (t24 != 47049018LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x425 = INT64_MIN;
	int32_t x426 = INT32_MIN;
	int32_t x428 = INT32_MAX;
	static int64_t t25 = 142766843800920221LL;

	t25 = ((x425^x426)>>(x427&x428));

	if (t25 != 8589934590LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x445 = UINT8_MAX;
	int32_t x447 = 6;
	int64_t t26 = 0LL;

	t26 = ((x445^x446)>>(x447&x448));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x465 = -45;
	uint32_t x466 = 29120192U;
	static int64_t x467 = INT64_MIN;
	static volatile uint32_t t27 = 52700U;

	t27 = ((x465^x466)>>(x467&x468));

	if (t27 != 4265847059U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x481 = INT8_MIN;
	int8_t x482 = INT8_MIN;
	uint8_t x483 = 1U;
	volatile uint16_t x484 = UINT16_MAX;
	static volatile int32_t t28 = -157330;

	t28 = ((x481^x482)>>(x483&x484));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x493 = -1;
	int16_t x494 = -3222;
	volatile int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MAX;
	int32_t t29 = -3;

	t29 = ((x493^x494)>>(x495&x496));

	if (t29 != 3221) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x517 = 218567624737LLU;
	int32_t x518 = 119;
	volatile uint64_t x520 = 5LLU;
	volatile uint64_t t30 = 97783916LLU;

	t30 = ((x517^x518)>>(x519&x520));

	if (t30 != 218567624790LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x525 = 4561017211933847744LLU;
	volatile int8_t x526 = INT8_MIN;
	static int64_t x527 = 31LL;
	int32_t x528 = INT32_MAX;
	uint64_t t31 = 1654313788782396953LLU;

	t31 = ((x525^x526)>>(x527&x528));

	if (t31 != 6466045445LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x533 = 39847775U;
	static uint64_t x534 = 29206LLU;
	volatile int32_t x535 = INT32_MAX;
	int32_t x536 = INT32_MIN;
	static volatile uint64_t t32 = 50185739406LLU;

	t32 = ((x533^x534)>>(x535&x536));

	if (t32 != 39875913LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x557 = UINT32_MAX;
	int8_t x558 = INT8_MIN;
	volatile int8_t x559 = INT8_MAX;
	static uint64_t x560 = 139696782LLU;
	volatile uint32_t t33 = 1048765U;

	t33 = ((x557^x558)>>(x559&x560));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x565 = -77;
	static int32_t x567 = INT32_MIN;
	int8_t x568 = 0;
	static volatile uint64_t t34 = 32383LLU;

	t34 = ((x565^x566)>>(x567&x568));

	if (t34 != 18446744073496425801LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x581 = INT64_MIN;
	int8_t x582 = -1;
	volatile int16_t x584 = INT16_MAX;
	static int64_t t35 = 483168225177136LL;

	t35 = ((x581^x582)>>(x583&x584));

	if (t35 != 268435455LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x589 = UINT16_MAX;
	static int64_t x591 = INT64_MIN;
	uint8_t x592 = 0U;
	volatile int32_t t36 = -14686260;

	t36 = ((x589^x590)>>(x591&x592));

	if (t36 != 65408) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x609 = 128002582U;
	volatile int32_t x611 = INT32_MIN;
	static int32_t x612 = 3005637;
	static uint64_t t37 = 5LLU;

	t37 = ((x609^x610)>>(x611&x612));

	if (t37 != 55719656635426503LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x613 = 679U;
	uint64_t x614 = UINT64_MAX;
	int16_t x615 = INT16_MAX;
	static uint64_t t38 = 51868LLU;

	t38 = ((x613^x614)>>(x615&x616));

	if (t38 != 18446744073709550936LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x617 = 1U;
	static uint64_t x618 = 16148LLU;
	int64_t x620 = 7909810849154077LL;
	volatile uint64_t t39 = 5108775135321689LLU;

	t39 = ((x617^x618)>>(x619&x620));

	if (t39 != 16149LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x621 = INT16_MAX;
	uint64_t x623 = 111LLU;
	static int64_t x624 = -1979803881LL;
	int32_t t40 = 2585;

	t40 = ((x621^x622)>>(x623&x624));

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x625 = 25035U;
	int32_t x627 = 1883885;
	volatile int32_t t41 = -1487;

	t41 = ((x625^x626)>>(x627&x628));

	if (t41 != 783) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x661 = UINT8_MAX;
	volatile uint64_t x662 = 5073373LLU;
	static volatile int8_t x663 = 48;
	uint8_t x664 = 27U;
	uint64_t t42 = 646164442LLU;

	t42 = ((x661^x662)>>(x663&x664));

	if (t42 != 77LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x672 = 3LLU;
	int64_t t43 = 1LL;

	t43 = ((x669^x670)>>(x671&x672));

	if (t43 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x677 = 5U;
	uint8_t x678 = UINT8_MAX;
	volatile int32_t x679 = INT32_MAX;
	uint8_t x680 = 7U;
	int32_t t44 = 0;

	t44 = ((x677^x678)>>(x679&x680));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x685 = -11;
	int8_t x686 = INT8_MIN;
	int8_t x688 = 7;

	t45 = ((x685^x686)>>(x687&x688));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x697 = -13LL;
	int32_t x700 = INT32_MAX;
	static volatile int64_t t46 = 346064499044626LL;

	t46 = ((x697^x698)>>(x699&x700));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x709 = INT8_MIN;
	int16_t x710 = -1;
	uint8_t x712 = UINT8_MAX;
	volatile int32_t t47 = -5649335;

	t47 = ((x709^x710)>>(x711&x712));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x717 = UINT64_MAX;
	int64_t x718 = INT64_MIN;
	int64_t x720 = INT64_MIN;
	static uint64_t t48 = 17558LLU;

	t48 = ((x717^x718)>>(x719&x720));

	if (t48 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x749 = UINT32_MAX;
	int16_t x750 = -1;
	uint8_t x752 = UINT8_MAX;
	static uint32_t t49 = 1869U;

	t49 = ((x749^x750)>>(x751&x752));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x777 = INT8_MIN;
	int16_t x778 = INT16_MIN;
	uint16_t x779 = 0U;
	volatile int32_t t50 = 2767343;

	t50 = ((x777^x778)>>(x779&x780));

	if (t50 != 32640) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x793 = -19;
	static int32_t x794 = -577962;
	uint64_t x795 = 1LLU;
	uint32_t x796 = 781043U;
	int32_t t51 = 60;

	t51 = ((x793^x794)>>(x795&x796));

	if (t51 != 288989) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x818 = 1;
	static int32_t t52 = -1;

	t52 = ((x817^x818)>>(x819&x820));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x835 = -1LL;
	int8_t x836 = 40;

	t53 = ((x833^x834)>>(x835&x836));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x854 = INT32_MIN;
	volatile uint16_t x855 = 6U;
	int32_t x856 = -24238;

	t54 = ((x853^x854)>>(x855&x856));

	if (t54 != 536870911) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x866 = INT8_MIN;
	int64_t x867 = -45250368174318LL;
	static uint8_t x868 = UINT8_MAX;

	t55 = ((x865^x866)>>(x867&x868));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x881 = INT8_MAX;
	static volatile int64_t x882 = 124468849LL;
	uint32_t x883 = 19U;
	static volatile int64_t t56 = -7070LL;

	t56 = ((x881^x882)>>(x883&x884));

	if (t56 != 124468750LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x885 = -1;
	int16_t x887 = 7;

	t57 = ((x885^x886)>>(x887&x888));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x901 = INT32_MIN;
	static int8_t x902 = INT8_MIN;
	volatile int32_t x903 = 4;
	int64_t x904 = INT64_MIN;
	int32_t t58 = 0;

	t58 = ((x901^x902)>>(x903&x904));

	if (t58 != 2147483520) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x921 = INT8_MAX;
	int16_t x923 = 76;
	int8_t x924 = INT8_MIN;
	volatile int64_t t59 = 7998615675650LL;

	t59 = ((x921^x922)>>(x923&x924));

	if (t59 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x933 = 6U;
	int64_t x934 = INT64_MAX;
	int32_t x935 = -1;
	uint16_t x936 = 2U;
	int64_t t60 = 503LL;

	t60 = ((x933^x934)>>(x935&x936));

	if (t60 != 2305843009213693950LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x945 = 316U;
	volatile int16_t x946 = 14;
	volatile uint32_t t61 = 699937471U;

	t61 = ((x945^x946)>>(x947&x948));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x949 = 8373LLU;
	static int8_t x950 = -1;
	static volatile uint64_t t62 = 253LLU;

	t62 = ((x949^x950)>>(x951&x952));

	if (t62 != 18446744073709543242LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x981 = INT64_MIN;
	static int16_t x982 = INT16_MIN;
	uint32_t x983 = 244244041U;
	volatile int64_t t63 = 5572687328658LL;

	t63 = ((x981^x982)>>(x983&x984));

	if (t63 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x985 = 22U;
	volatile uint16_t x986 = 22U;
	int64_t x987 = INT64_MIN;
	volatile int32_t t64 = -1;

	t64 = ((x985^x986)>>(x987&x988));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x989 = INT16_MIN;
	volatile uint32_t x990 = 285U;
	uint16_t x991 = 1U;
	int8_t x992 = 3;
	uint32_t t65 = 3U;

	t65 = ((x989^x990)>>(x991&x992));

	if (t65 != 2147467406U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x1022 = INT8_MIN;
	volatile int64_t x1023 = 2838LL;
	static int16_t x1024 = INT16_MIN;
	int32_t t66 = -1160923;

	t66 = ((x1021^x1022)>>(x1023&x1024));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x1041 = INT32_MIN;
	uint64_t x1042 = UINT64_MAX;
	int32_t x1043 = INT32_MIN;
	uint64_t x1044 = 107LLU;
	volatile uint64_t t67 = 180865052429334LLU;

	t67 = ((x1041^x1042)>>(x1043&x1044));

	if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x1045 = 703954U;
	int16_t x1046 = -215;
	uint8_t x1047 = UINT8_MAX;
	int16_t x1048 = 3603;

	t68 = ((x1045^x1046)>>(x1047&x1048));

	if (t68 != 8190U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1049 = 96U;
	uint16_t x1050 = 3U;
	static int16_t x1052 = 0;
	int32_t t69 = -1889;

	t69 = ((x1049^x1050)>>(x1051&x1052));

	if (t69 != 99) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x1065 = INT8_MAX;
	volatile uint16_t x1066 = UINT16_MAX;
	static int64_t x1067 = 3LL;
	int64_t x1068 = -9LL;
	int32_t t70 = 46459;

	t70 = ((x1065^x1066)>>(x1067&x1068));

	if (t70 != 8176) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x1145 = 0U;
	static int8_t x1146 = 1;
	uint32_t x1147 = 509792503U;
	uint32_t t71 = 5920070U;

	t71 = ((x1145^x1146)>>(x1147&x1148));

	if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1149 = 20U;
	uint64_t x1150 = UINT64_MAX;
	uint32_t x1151 = 1U;
	int64_t x1152 = INT64_MIN;
	static uint64_t t72 = 6734986145121404LLU;

	t72 = ((x1149^x1150)>>(x1151&x1152));

	if (t72 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x1159 = 636878527877459LLU;
	volatile int64_t x1160 = INT64_MIN;
	static volatile int64_t t73 = -54813375567022492LL;

	t73 = ((x1157^x1158)>>(x1159&x1160));

	if (t73 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x1165 = INT64_MIN;
	static int64_t x1167 = -1892885LL;
	uint16_t x1168 = 30U;
	static int64_t t74 = -105022486027LL;

	t74 = ((x1165^x1166)>>(x1167&x1168));

	if (t74 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1201 = 7025010270859994423LLU;
	static uint64_t x1202 = UINT64_MAX;
	int64_t x1203 = -1LL;
	int8_t x1204 = 1;
	uint64_t t75 = 203757431LLU;

	t75 = ((x1201^x1202)>>(x1203&x1204));

	if (t75 != 5710866901424778596LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x1219 = INT8_MAX;
	int64_t x1220 = 1LL;

	t76 = ((x1217^x1218)>>(x1219&x1220));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x1223 = INT32_MIN;
	volatile uint8_t x1224 = UINT8_MAX;

	t77 = ((x1221^x1222)>>(x1223&x1224));

	if (t77 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x1225 = -1363;
	int16_t x1226 = INT16_MIN;
	static volatile uint32_t x1227 = 99642277U;
	int64_t x1228 = INT64_MIN;
	int32_t t78 = 447;

	t78 = ((x1225^x1226)>>(x1227&x1228));

	if (t78 != 31405) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x1242 = -1;
	int32_t x1243 = INT32_MIN;
	int8_t x1244 = 1;
	int32_t t79 = INT32_MAX;

	t79 = ((x1241^x1242)>>(x1243&x1244));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x1281 = 6U;
	int32_t x1282 = INT32_MAX;
	int16_t x1284 = INT16_MIN;
	volatile int32_t t80 = 22298491;

	t80 = ((x1281^x1282)>>(x1283&x1284));

	if (t80 != 2147483641) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x1289 = 60954601316549950LLU;
	int8_t x1290 = 22;
	static int8_t x1292 = 0;
	uint64_t t81 = 4778263431753771920LLU;

	t81 = ((x1289^x1290)>>(x1291&x1292));

	if (t81 != 60954601316549928LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x1297 = INT8_MIN;
	int64_t x1299 = INT64_MIN;
	static int16_t x1300 = 0;
	static int32_t t82 = 119604352;

	t82 = ((x1297^x1298)>>(x1299&x1300));

	if (t82 != 98) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x1325 = INT8_MAX;
	int64_t x1327 = INT64_MIN;
	int32_t x1328 = 2637041;
	static volatile int32_t t83 = -802;

	t83 = ((x1325^x1326)>>(x1327&x1328));

	if (t83 != 16142) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x1333 = INT32_MIN;
	int16_t x1334 = INT16_MIN;
	static uint16_t x1335 = 1146U;
	static int64_t x1336 = INT64_MIN;
	int32_t t84 = -1113545;

	t84 = ((x1333^x1334)>>(x1335&x1336));

	if (t84 != 2147450880) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x1341 = UINT64_MAX;
	int8_t x1342 = -45;
	int32_t x1343 = INT32_MIN;
	volatile uint64_t x1344 = 177LLU;
	volatile uint64_t t85 = 7974648905LLU;

	t85 = ((x1341^x1342)>>(x1343&x1344));

	if (t85 != 44LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1345 = 1299622LL;
	volatile uint16_t x1346 = 16U;
	int32_t x1347 = 8165;
	int16_t x1348 = INT16_MIN;
	int64_t t86 = -312LL;

	t86 = ((x1345^x1346)>>(x1347&x1348));

	if (t86 != 1299638LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x1357 = -1LL;
	int16_t x1358 = INT16_MIN;
	uint32_t x1359 = 464173U;
	int64_t x1360 = INT64_MIN;
	int64_t t87 = -2188398796631LL;

	t87 = ((x1357^x1358)>>(x1359&x1360));

	if (t87 != 32767LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x1409 = INT8_MIN;
	uint16_t x1411 = 51U;
	int32_t x1412 = -210;
	volatile uint64_t t88 = 4203621112995LLU;

	t88 = ((x1409^x1410)>>(x1411&x1412));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x1421 = INT64_MIN;
	int32_t x1422 = -1;
	volatile int32_t x1423 = INT32_MIN;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x1421^x1422)>>(x1423&x1424));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1430 = 222459245U;
	int16_t x1431 = INT16_MIN;
	volatile uint32_t t90 = 17707U;

	t90 = ((x1429^x1430)>>(x1431&x1432));

	if (t90 != 1925024402U) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x1501 = INT16_MAX;
	static int64_t x1502 = INT64_MAX;
	uint64_t x1503 = 37553313LLU;
	uint8_t x1504 = 10U;
	volatile int64_t t91 = 65614120335LL;

	t91 = ((x1501^x1502)>>(x1503&x1504));

	if (t91 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x1523 = INT32_MIN;
	int64_t t92 = 29309322029524463LL;

	t92 = ((x1521^x1522)>>(x1523&x1524));

	if (t92 != 246977LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1525 = 27;
	static volatile int64_t x1526 = INT64_MAX;
	volatile int16_t x1527 = INT16_MIN;
	static uint8_t x1528 = 6U;

	t93 = ((x1525^x1526)>>(x1527&x1528));

	if (t93 != 9223372036854775780LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1529 = INT16_MIN;
	uint32_t x1530 = 15844553U;
	static int16_t x1531 = -1;
	volatile uint64_t x1532 = 9LLU;
	uint32_t t94 = 15U;

	t94 = ((x1529^x1530)>>(x1531&x1532));

	if (t94 != 8357666U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x1541 = 95793464748010801LLU;
	int64_t x1542 = INT64_MAX;
	volatile uint64_t x1543 = 145LLU;
	int64_t x1544 = INT64_MIN;
	volatile uint64_t t95 = 7LLU;

	t95 = ((x1541^x1542)>>(x1543&x1544));

	if (t95 != 9127578572106765006LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1549 = 997859343671220LL;
	uint32_t x1552 = 44037648U;
	int64_t t96 = 1284350331110LL;

	t96 = ((x1549^x1550)>>(x1551&x1552));

	if (t96 != 997859343671260LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x1566 = INT16_MAX;
	int32_t x1567 = 25;
	volatile int32_t t97 = -116620;

	t97 = ((x1565^x1566)>>(x1567&x1568));

	if (t97 != 4194240) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1570 = 17LL;
	int16_t x1571 = 1;
	int64_t t98 = 796LL;

	t98 = ((x1569^x1570)>>(x1571&x1572));

	if (t98 != 12056LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1601 = INT16_MIN;
	int16_t x1602 = INT16_MIN;
	int8_t x1604 = INT8_MIN;
	volatile int32_t t99 = -61;

	t99 = ((x1601^x1602)>>(x1603&x1604));

	if (t99 != 0) { NG(); } else { ; }
	
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

