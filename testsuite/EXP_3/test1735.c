#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x2 = INT64_MAX;
volatile uint8_t x4 = 53U;
static int32_t t2 = -42633;
int64_t x18 = -1095LL;
int32_t x61 = 10159603;
volatile int32_t t4 = -173879;
static volatile int8_t x69 = INT8_MIN;
volatile uint32_t x70 = 44067700U;
uint8_t x71 = 46U;
uint64_t x86 = 2142137743LLU;
volatile uint64_t t8 = 537332668991299693LLU;
static volatile int32_t x176 = INT32_MIN;
uint8_t x192 = 54U;
uint8_t x195 = UINT8_MAX;
int8_t x238 = -22;
uint8_t x246 = 36U;
volatile int64_t x248 = INT64_MIN;
volatile int32_t t14 = 27;
static int64_t t15 = 1017672687LL;
int32_t x299 = 77;
uint8_t x301 = UINT8_MAX;
uint16_t x304 = 83U;
int64_t x380 = INT64_MIN;
int64_t x438 = -1LL;
int32_t t24 = 7;
static uint16_t x447 = 247U;
static uint64_t x453 = 926317991747546LLU;
uint64_t t26 = 21LLU;
int32_t x475 = INT32_MIN;
uint8_t x476 = UINT8_MAX;
uint64_t t28 = 4543846402369550303LLU;
uint8_t x488 = 0U;
int16_t x509 = 0;
int32_t x520 = -1;
int32_t t32 = 15;
static volatile int32_t t33 = -4;
uint32_t x545 = 1U;
int16_t x548 = INT16_MAX;
uint64_t t35 = 3986774LLU;
int32_t x577 = INT32_MAX;
uint8_t x579 = 0U;
uint64_t x580 = UINT64_MAX;
int64_t x582 = -614474737398040565LL;
int8_t x584 = INT8_MAX;
volatile int64_t t37 = 626372836232LL;
uint8_t x586 = UINT8_MAX;
int32_t t38 = -44352;
int32_t x605 = 208;
int8_t x607 = 34;
int32_t x608 = INT32_MIN;
int16_t x611 = -1;
int32_t x614 = -235929;
uint64_t x622 = UINT64_MAX;
uint64_t x645 = UINT64_MAX;
int64_t x646 = 62084917353855LL;
static volatile int8_t x647 = 6;
volatile int32_t x689 = 53605;
uint64_t x691 = 1660810949LLU;
int64_t t46 = 2742624807559865416LL;
volatile int8_t x729 = INT8_MAX;
int32_t x731 = -1;
int64_t x740 = -9761212655580LL;
int64_t x761 = 4814700177265LL;
int8_t x763 = INT8_MAX;
uint16_t x844 = 1U;
uint64_t x846 = 430690671LLU;
uint16_t x873 = UINT16_MAX;
int8_t x874 = INT8_MAX;
int32_t x876 = -1;
volatile uint8_t x884 = 9U;
uint64_t x885 = 774381076163696LLU;
static uint16_t x929 = 7U;
int64_t x934 = INT64_MAX;
volatile int32_t x935 = 9885;
static int64_t t63 = 184790503117LL;
static int64_t t64 = 83833656748LL;
volatile uint16_t x948 = 0U;
volatile uint32_t t66 = 1U;
int16_t x966 = INT16_MAX;
int32_t x969 = -1;
int32_t x977 = -31807;
int8_t x979 = INT8_MAX;
int8_t x989 = -1;
int64_t x999 = INT64_MIN;
int32_t x1051 = 182166083;
int64_t x1052 = INT64_MIN;
volatile int32_t x1062 = -152126427;
int16_t x1094 = INT16_MAX;
int8_t x1095 = INT8_MIN;
uint64_t x1099 = 360031461435LLU;
volatile uint64_t x1102 = 19112047LLU;
int64_t x1104 = INT64_MAX;
int32_t x1126 = INT32_MAX;
int32_t x1138 = -1;
int8_t x1140 = INT8_MIN;
static int64_t x1166 = INT64_MIN;
int64_t x1167 = -1LL;
uint64_t x1208 = 31LLU;
static volatile int16_t x1210 = -1;
static int64_t x1237 = -3224928400006422937LL;
int8_t x1238 = -1;
int64_t t87 = -25281116952341514LL;
static volatile uint8_t x1264 = 45U;
volatile uint8_t x1271 = UINT8_MAX;
int64_t t91 = -294233852275126934LL;
int64_t x1309 = INT64_MAX;
static uint64_t x1310 = 22287771713398LLU;
uint32_t x1312 = 0U;
volatile uint64_t t93 = 62511288249504LLU;
int32_t x1321 = 1;
uint8_t x1322 = UINT8_MAX;
uint16_t x1418 = 3U;
static int64_t x1419 = 6789981383963668LL;
uint32_t t97 = 11495U;
int8_t x1424 = INT8_MIN;


void f0(void) {
	uint8_t x1 = 20U;
	uint16_t x3 = 2458U;
	int64_t t0 = 26570970601809103LL;

	t0 = ((x1/x2)<<(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	int8_t x6 = INT8_MAX;
	volatile int64_t x7 = INT64_MIN;
	uint16_t x8 = 1U;
	volatile int32_t t1 = -129378;

	t1 = ((x5/x6)<<(x7&x8));

	if (t1 != 16909320) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 45U;
	uint16_t x14 = 3U;
	int16_t x15 = 38;
	volatile uint8_t x16 = 20U;

	t2 = ((x13/x14)<<(x15&x16));

	if (t2 != 240) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 0U;
	uint32_t x19 = 190438035U;
	volatile int32_t x20 = INT32_MIN;
	int64_t t3 = 1994330346385LL;

	t3 = ((x17/x18)<<(x19&x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x62 = UINT8_MAX;
	uint64_t x63 = 388777590611LLU;
	volatile int16_t x64 = 11;

	t4 = ((x61/x62)<<(x63&x64));

	if (t4 != 318728) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x72 = INT64_MIN;
	volatile uint32_t t5 = 372226U;

	t5 = ((x69/x70)<<(x71&x72));

	if (t5 != 97U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x73 = INT64_MIN;
	uint64_t x74 = 574608532LLU;
	uint16_t x75 = 262U;
	volatile uint8_t x76 = 0U;
	static uint64_t t6 = 439LLU;

	t6 = ((x73/x74)<<(x75&x76));

	if (t6 != 16051575156LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x77 = 10361U;
	int8_t x78 = INT8_MAX;
	int64_t x79 = 0LL;
	volatile uint16_t x80 = 8U;
	int32_t t7 = -5081810;

	t7 = ((x77/x78)<<(x79&x80));

	if (t7 != 81) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x85 = INT64_MIN;
	int64_t x87 = INT64_MIN;
	volatile uint64_t x88 = 56531026011262LLU;

	t8 = ((x85/x86)<<(x87&x88));

	if (t8 != 4305685788LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x133 = 24U;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 8U;
	volatile int16_t x136 = 37;
	static volatile int32_t t9 = 49076;

	t9 = ((x133/x134)<<(x135&x136));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x173 = -1;
	int32_t x174 = 89;
	volatile uint8_t x175 = 58U;
	static int32_t t10 = 28;

	t10 = ((x173/x174)<<(x175&x176));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = -1;
	uint64_t t11 = 3391948613595LLU;

	t11 = ((x189/x190)<<(x191&x192));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x193 = UINT32_MAX;
	int32_t x194 = -764289;
	int16_t x196 = INT16_MIN;
	volatile uint32_t t12 = 39805U;

	t12 = ((x193/x194)<<(x195&x196));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x237 = 979LLU;
	static uint32_t x239 = 0U;
	int16_t x240 = INT16_MAX;
	static volatile uint64_t t13 = 11075LLU;

	t13 = ((x237/x238)<<(x239&x240));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x245 = INT8_MAX;
	volatile uint32_t x247 = UINT32_MAX;

	t14 = ((x245/x246)<<(x247&x248));

	if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x293 = INT8_MIN;
	static int64_t x294 = -8449556987062LL;
	static uint64_t x295 = 25LLU;
	uint32_t x296 = 56128U;

	t15 = ((x293/x294)<<(x295&x296));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x297 = -1;
	static int8_t x298 = INT8_MIN;
	static uint8_t x300 = 2U;
	static int32_t t16 = 31547568;

	t16 = ((x297/x298)<<(x299&x300));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x302 = 716U;
	int64_t x303 = 3124415790LL;
	int32_t t17 = -9;

	t17 = ((x301/x302)<<(x303&x304));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x321 = 554075114LL;
	static uint32_t x322 = UINT32_MAX;
	int8_t x323 = 0;
	int16_t x324 = 1953;
	volatile int64_t t18 = -3443185442LL;

	t18 = ((x321/x322)<<(x323&x324));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x353 = 924U;
	volatile uint8_t x354 = UINT8_MAX;
	int32_t x355 = INT32_MIN;
	volatile uint16_t x356 = UINT16_MAX;
	static int32_t t19 = 230;

	t19 = ((x353/x354)<<(x355&x356));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x377 = 9;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = 1;
	volatile int32_t t20 = -4;

	t20 = ((x377/x378)<<(x379&x380));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x381 = UINT64_MAX;
	static uint32_t x382 = UINT32_MAX;
	uint32_t x383 = 195U;
	int16_t x384 = 808;
	static volatile uint64_t t21 = 3313131900LLU;

	t21 = ((x381/x382)<<(x383&x384));

	if (t21 != 4294967297LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x429 = INT64_MAX;
	int32_t x430 = INT32_MAX;
	int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MAX;
	volatile int64_t t22 = 88LL;

	t22 = ((x429/x430)<<(x431&x432));

	if (t22 != 4294967298LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x437 = 4291460868636348661LLU;
	uint8_t x439 = 2U;
	volatile int64_t x440 = INT64_MIN;
	uint64_t t23 = 3321980260226183615LLU;

	t23 = ((x437/x438)<<(x439&x440));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x441 = UINT8_MAX;
	uint16_t x442 = 386U;
	int16_t x443 = INT16_MAX;
	static int32_t x444 = INT32_MIN;

	t24 = ((x441/x442)<<(x443&x444));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x445 = -407143862LL;
	int16_t x446 = INT16_MIN;
	int32_t x448 = INT32_MIN;
	int64_t t25 = -14084125560LL;

	t25 = ((x445/x446)<<(x447&x448));

	if (t25 != 12425LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x454 = 625932967U;
	static int8_t x455 = INT8_MIN;
	uint16_t x456 = 82U;

	t26 = ((x453/x454)<<(x455&x456));

	if (t26 != 1479899LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x469 = -1;
	uint64_t x470 = 512866169LLU;
	int32_t x471 = -1;
	int8_t x472 = 3;
	static uint64_t t27 = 4822LLU;

	t27 = ((x469/x470)<<(x471&x472));

	if (t27 != 287743589864LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x473 = UINT64_MAX;
	int32_t x474 = 7592017;

	t28 = ((x473/x474)<<(x475&x476));

	if (t28 != 2429755369845LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x485 = INT8_MIN;
	static uint64_t x486 = UINT64_MAX;
	uint64_t x487 = 48LLU;
	uint64_t t29 = 1206103973878759LLU;

	t29 = ((x485/x486)<<(x487&x488));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x497 = 12180LLU;
	static volatile uint32_t x498 = UINT32_MAX;
	int8_t x499 = -1;
	uint8_t x500 = 8U;
	static volatile uint64_t t30 = 22194LLU;

	t30 = ((x497/x498)<<(x499&x500));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x510 = UINT64_MAX;
	static uint16_t x511 = 15U;
	int16_t x512 = INT16_MAX;
	volatile uint64_t t31 = 224170630169306123LLU;

	t31 = ((x509/x510)<<(x511&x512));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x517 = 15;
	uint8_t x518 = UINT8_MAX;
	int16_t x519 = 16;

	t32 = ((x517/x518)<<(x519&x520));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x537 = -215;
	int32_t x538 = -1;
	uint16_t x539 = 23U;
	uint16_t x540 = 22U;

	t33 = ((x537/x538)<<(x539&x540));

	if (t33 != 901775360) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x546 = INT64_MIN;
	static int64_t x547 = 2LL;
	volatile int64_t t34 = -8743LL;

	t34 = ((x545/x546)<<(x547&x548));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x549 = 0U;
	uint64_t x550 = 409722113443513568LLU;
	int32_t x551 = INT32_MIN;
	int16_t x552 = 4;

	t35 = ((x549/x550)<<(x551&x552));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x578 = INT64_MAX;
	int64_t t36 = -7LL;

	t36 = ((x577/x578)<<(x579&x580));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x581 = INT32_MIN;
	static volatile int32_t x583 = INT32_MIN;

	t37 = ((x581/x582)<<(x583&x584));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x585 = 204U;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MAX;

	t38 = ((x585/x586)<<(x587&x588));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x606 = -955717528;
	static int32_t t39 = -18;

	t39 = ((x605/x606)<<(x607&x608));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x609 = 15062U;
	int8_t x610 = INT8_MAX;
	int8_t x612 = 7;
	int32_t t40 = 11;

	t40 = ((x609/x610)<<(x611&x612));

	if (t40 != 15104) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x613 = INT64_MIN;
	uint32_t x615 = UINT32_MAX;
	int8_t x616 = 1;
	volatile int64_t t41 = 14961LL;

	t41 = ((x613/x614)<<(x615&x616));

	if (t41 != 78187692372320LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x621 = 48952614455356407LLU;
	uint16_t x623 = UINT16_MAX;
	static volatile uint64_t x624 = 2LLU;
	uint64_t t42 = 2888LLU;

	t42 = ((x621/x622)<<(x623&x624));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x648 = -953LL;
	uint64_t t43 = 1057LLU;

	t43 = ((x645/x646)<<(x647&x648));

	if (t43 != 19015744LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x677 = UINT16_MAX;
	uint64_t x678 = UINT64_MAX;
	int32_t x679 = 213;
	static volatile uint16_t x680 = 23U;
	volatile uint64_t t44 = 5506290823LLU;

	t44 = ((x677/x678)<<(x679&x680));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x690 = INT64_MIN;
	volatile uint8_t x692 = 8U;
	int64_t t45 = -13954004555LL;

	t45 = ((x689/x690)<<(x691&x692));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x701 = UINT16_MAX;
	volatile int64_t x702 = INT64_MAX;
	int16_t x703 = INT16_MIN;
	volatile uint16_t x704 = 30076U;

	t46 = ((x701/x702)<<(x703&x704));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x730 = UINT16_MAX;
	uint16_t x732 = 1U;
	static int32_t t47 = 3982235;

	t47 = ((x729/x730)<<(x731&x732));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x733 = 232;
	uint64_t x734 = 1230467086254303LLU;
	int32_t x735 = INT32_MIN;
	int32_t x736 = INT32_MAX;
	volatile uint64_t t48 = 121911725262289922LLU;

	t48 = ((x733/x734)<<(x735&x736));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x737 = -1LL;
	static uint8_t x738 = UINT8_MAX;
	static volatile int16_t x739 = 13;
	int64_t t49 = -16LL;

	t49 = ((x737/x738)<<(x739&x740));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x745 = INT64_MAX;
	int64_t x746 = INT64_MAX;
	uint8_t x747 = UINT8_MAX;
	int16_t x748 = INT16_MIN;
	static volatile int64_t t50 = 34941528755782LL;

	t50 = ((x745/x746)<<(x747&x748));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x753 = 142;
	static uint16_t x754 = 49U;
	int64_t x755 = INT64_MIN;
	int32_t x756 = 828970;
	int32_t t51 = -9;

	t51 = ((x753/x754)<<(x755&x756));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x762 = UINT32_MAX;
	uint32_t x764 = 286U;
	volatile int64_t t52 = -747LL;

	t52 = ((x761/x762)<<(x763&x764));

	if (t52 != 1203664584704LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x765 = -1LL;
	int8_t x766 = -1;
	volatile uint16_t x767 = 2U;
	int64_t x768 = -1LL;
	static int64_t t53 = -1LL;

	t53 = ((x765/x766)<<(x767&x768));

	if (t53 != 4LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x841 = UINT32_MAX;
	int32_t x842 = INT32_MIN;
	static uint64_t x843 = 0LLU;
	uint32_t t54 = 0U;

	t54 = ((x841/x842)<<(x843&x844));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x845 = 120943LL;
	static int32_t x847 = 66;
	int32_t x848 = INT32_MIN;
	uint64_t t55 = 10122LLU;

	t55 = ((x845/x846)<<(x847&x848));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x857 = -1;
	volatile int16_t x858 = INT16_MIN;
	int8_t x859 = 0;
	volatile int8_t x860 = INT8_MAX;
	volatile int32_t t56 = -176010;

	t56 = ((x857/x858)<<(x859&x860));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x875 = 3U;
	int32_t t57 = 266769;

	t57 = ((x873/x874)<<(x875&x876));

	if (t57 != 4128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x877 = -1193;
	static int32_t x878 = -440;
	int32_t x879 = INT32_MAX;
	int64_t x880 = INT64_MIN;
	static volatile int32_t t58 = -43200;

	t58 = ((x877/x878)<<(x879&x880));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x881 = UINT16_MAX;
	uint8_t x882 = 87U;
	static uint32_t x883 = UINT32_MAX;
	volatile int32_t t59 = 57521;

	t59 = ((x881/x882)<<(x883&x884));

	if (t59 != 385536) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x886 = 394LLU;
	static volatile uint8_t x887 = 27U;
	static uint8_t x888 = UINT8_MAX;
	uint64_t t60 = 11988729392LLU;

	t60 = ((x885/x886)<<(x887&x888));

	if (t60 != 5541696290091433984LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x925 = 2;
	int64_t x926 = 44977605852322951LL;
	static volatile int64_t x927 = 7655LL;
	int16_t x928 = INT16_MIN;
	volatile int64_t t61 = -11396499407LL;

	t61 = ((x925/x926)<<(x927&x928));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x930 = INT32_MIN;
	int8_t x931 = 0;
	int16_t x932 = INT16_MAX;
	volatile int32_t t62 = 741;

	t62 = ((x929/x930)<<(x931&x932));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x933 = 19U;
	int16_t x936 = 24;

	t63 = ((x933/x934)<<(x935&x936));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x937 = INT16_MIN;
	int64_t x938 = INT64_MIN;
	static int8_t x939 = 15;
	uint8_t x940 = 5U;

	t64 = ((x937/x938)<<(x939&x940));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x941 = -1;
	int32_t x942 = -1;
	uint16_t x943 = 18659U;
	volatile int64_t x944 = INT64_MIN;
	int32_t t65 = 0;

	t65 = ((x941/x942)<<(x943&x944));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x945 = 1;
	uint32_t x946 = 24U;
	uint16_t x947 = 17U;

	t66 = ((x945/x946)<<(x947&x948));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x961 = UINT32_MAX;
	int16_t x962 = INT16_MIN;
	volatile uint8_t x963 = 20U;
	int32_t x964 = -3570851;
	uint32_t t67 = 930799U;

	t67 = ((x961/x962)<<(x963&x964));

	if (t67 != 1048576U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x965 = 233218331U;
	uint32_t x967 = 80U;
	volatile int8_t x968 = 11;
	uint32_t t68 = 18545744U;

	t68 = ((x965/x966)<<(x967&x968));

	if (t68 != 7117U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x970 = 13U;
	static uint32_t x971 = 275U;
	uint64_t x972 = 842211981464156722LLU;
	volatile int32_t t69 = 2538039;

	t69 = ((x969/x970)<<(x971&x972));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x978 = INT64_MAX;
	int32_t x980 = INT32_MIN;
	volatile int64_t t70 = -1752862221210922935LL;

	t70 = ((x977/x978)<<(x979&x980));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x990 = INT64_MAX;
	int32_t x991 = INT32_MIN;
	static volatile uint16_t x992 = 12184U;
	int64_t t71 = -776912173LL;

	t71 = ((x989/x990)<<(x991&x992));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x997 = -1;
	int16_t x998 = INT16_MIN;
	uint8_t x1000 = 1U;
	int32_t t72 = -45812;

	t72 = ((x997/x998)<<(x999&x1000));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1013 = UINT8_MAX;
	int64_t x1014 = 21LL;
	uint8_t x1015 = 0U;
	int64_t x1016 = INT64_MIN;
	int64_t t73 = 3580LL;

	t73 = ((x1013/x1014)<<(x1015&x1016));

	if (t73 != 12LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x1049 = INT32_MIN;
	int32_t x1050 = INT32_MIN;
	int32_t t74 = 27251824;

	t74 = ((x1049/x1050)<<(x1051&x1052));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x1061 = INT16_MIN;
	int32_t x1063 = 6;
	static uint8_t x1064 = 13U;
	int32_t t75 = -666407124;

	t75 = ((x1061/x1062)<<(x1063&x1064));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x1073 = 4;
	int64_t x1074 = -288LL;
	uint32_t x1075 = UINT32_MAX;
	int8_t x1076 = 58;
	static int64_t t76 = 455139265778LL;

	t76 = ((x1073/x1074)<<(x1075&x1076));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1093 = UINT64_MAX;
	uint64_t x1096 = 5LLU;
	volatile uint64_t t77 = 21598465697449777LLU;

	t77 = ((x1093/x1094)<<(x1095&x1096));

	if (t77 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x1097 = -28;
	uint32_t x1098 = UINT32_MAX;
	int64_t x1100 = 1LL;
	volatile uint32_t t78 = 1152U;

	t78 = ((x1097/x1098)<<(x1099&x1100));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x1101 = INT64_MAX;
	int64_t x1103 = INT64_MIN;
	volatile uint64_t t79 = 137391411920LLU;

	t79 = ((x1101/x1102)<<(x1103&x1104));

	if (t79 != 482594671144LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x1125 = UINT16_MAX;
	int8_t x1127 = 17;
	int8_t x1128 = INT8_MAX;
	static volatile int32_t t80 = -391;

	t80 = ((x1125/x1126)<<(x1127&x1128));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x1137 = -7763;
	uint8_t x1139 = 51U;
	int32_t t81 = 591178;

	t81 = ((x1137/x1138)<<(x1139&x1140));

	if (t81 != 7763) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x1165 = 26U;
	uint8_t x1168 = 0U;
	volatile int64_t t82 = -719999840815069811LL;

	t82 = ((x1165/x1166)<<(x1167&x1168));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1201 = 39;
	int16_t x1202 = 856;
	static volatile int32_t x1203 = INT32_MIN;
	static volatile uint32_t x1204 = 5812824U;
	int32_t t83 = -124;

	t83 = ((x1201/x1202)<<(x1203&x1204));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x1205 = 2345025742424744LLU;
	uint64_t x1206 = 15691179LLU;
	int16_t x1207 = -7437;
	static volatile uint64_t t84 = 663988760557LLU;

	t84 = ((x1205/x1206)<<(x1207&x1208));

	if (t84 != 78354141151232LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x1209 = -754LL;
	volatile int32_t x1211 = INT32_MAX;
	int64_t x1212 = INT64_MIN;
	int64_t t85 = 7404942LL;

	t85 = ((x1209/x1210)<<(x1211&x1212));

	if (t85 != 754LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x1213 = UINT64_MAX;
	volatile int16_t x1214 = -122;
	int32_t x1215 = INT32_MAX;
	static int64_t x1216 = INT64_MIN;
	uint64_t t86 = 269574521725929148LLU;

	t86 = ((x1213/x1214)<<(x1215&x1216));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1239 = INT32_MAX;
	static volatile int64_t x1240 = INT64_MIN;

	t87 = ((x1237/x1238)<<(x1239&x1240));

	if (t87 != 3224928400006422937LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x1253 = -1;
	static int64_t x1254 = INT64_MIN;
	int16_t x1255 = INT16_MAX;
	int8_t x1256 = 15;
	volatile int64_t t88 = -12839177957472LL;

	t88 = ((x1253/x1254)<<(x1255&x1256));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x1261 = 34937846757302LLU;
	volatile int64_t x1262 = 808975345652LL;
	int8_t x1263 = -4;
	static volatile uint64_t t89 = 285270256868LLU;

	t89 = ((x1261/x1262)<<(x1263&x1264));

	if (t89 != 756463999909888LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x1269 = -24156;
	int64_t x1270 = INT64_MIN;
	int16_t x1272 = INT16_MIN;
	static volatile int64_t t90 = -925382948027LL;

	t90 = ((x1269/x1270)<<(x1271&x1272));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x1285 = INT8_MIN;
	int64_t x1286 = INT64_MIN;
	int8_t x1287 = 0;
	int64_t x1288 = INT64_MAX;

	t91 = ((x1285/x1286)<<(x1287&x1288));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x1293 = 0U;
	static volatile int8_t x1294 = 4;
	static uint32_t x1295 = 3726U;
	int32_t x1296 = INT32_MIN;
	volatile int32_t t92 = 59;

	t92 = ((x1293/x1294)<<(x1295&x1296));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1311 = -305411386373679LL;

	t93 = ((x1309/x1310)<<(x1311&x1312));

	if (t93 != 413831LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x1323 = 10U;
	uint64_t x1324 = UINT64_MAX;
	static int32_t t94 = 12850686;

	t94 = ((x1321/x1322)<<(x1323&x1324));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x1329 = INT32_MIN;
	volatile uint32_t x1330 = 101966U;
	int32_t x1331 = 14;
	int8_t x1332 = -6;
	uint32_t t95 = 17U;

	t95 = ((x1329/x1330)<<(x1331&x1332));

	if (t95 != 21565440U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1413 = INT16_MAX;
	int64_t x1414 = 1869911165358312890LL;
	volatile int64_t x1415 = INT64_MAX;
	uint8_t x1416 = 47U;
	static int64_t t96 = -832LL;

	t96 = ((x1413/x1414)<<(x1415&x1416));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1417 = UINT32_MAX;
	int32_t x1420 = 127;

	t97 = ((x1417/x1418)<<(x1419&x1420));

	if (t97 != 1431306240U) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint64_t x1421 = 4605778906415570990LLU;
	uint32_t x1422 = UINT32_MAX;
	uint8_t x1423 = 0U;
	static volatile uint64_t t98 = 1LLU;

	t98 = ((x1421/x1422)<<(x1423&x1424));

	if (t98 != 1072366467LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x1433 = 14577665887LLU;
	uint8_t x1434 = 13U;
	static volatile int64_t x1435 = 27183LL;
	uint8_t x1436 = 0U;
	uint64_t t99 = 1LLU;

	t99 = ((x1433/x1434)<<(x1435&x1436));

	if (t99 != 1121358914LLU) { NG(); } else { ; }
	
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

