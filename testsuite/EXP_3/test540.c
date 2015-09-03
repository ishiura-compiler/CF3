#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = 11U;
int32_t t1 = -179231387;
static uint16_t x9 = 73U;
uint16_t x16 = 1660U;
uint64_t t7 = 47073LLU;
uint64_t x89 = UINT64_MAX;
static int8_t x91 = INT8_MAX;
uint16_t x92 = 11U;
int16_t x129 = 0;
static uint16_t x144 = UINT16_MAX;
uint8_t x149 = 0U;
volatile int32_t t12 = 135;
static volatile uint64_t t13 = 1335LLU;
uint64_t x193 = 39069LLU;
int8_t x204 = -22;
int32_t x268 = 26491788;
volatile int64_t t19 = -1562519LL;
uint32_t x270 = 775683U;
volatile int32_t x272 = INT32_MIN;
int16_t x299 = -1;
static int8_t x313 = -1;
int64_t x318 = -24536657329LL;
int64_t x320 = 142476728451LL;
static volatile int64_t t25 = -144974526220LL;
volatile uint64_t t26 = 114LLU;
int8_t x393 = 0;
volatile uint8_t x406 = 35U;
volatile int8_t x407 = INT8_MIN;
static volatile int16_t x408 = INT16_MIN;
static int32_t t28 = 0;
static int32_t t29 = -624133250;
static int16_t x446 = 24;
static volatile int32_t t30 = -13771199;
volatile uint16_t x461 = UINT16_MAX;
uint64_t x463 = UINT64_MAX;
static volatile int32_t x480 = -12272;
static volatile int64_t t33 = -14562121081444LL;
uint64_t x505 = UINT64_MAX;
uint64_t x508 = 33709505317LLU;
uint64_t x530 = 2465310496976857354LLU;
volatile uint64_t t36 = 222LLU;
volatile uint32_t t37 = 7817U;
uint32_t x565 = UINT32_MAX;
int16_t x588 = INT16_MIN;
uint32_t t41 = 1897U;
int16_t x639 = 1264;
static int64_t x669 = -1821LL;
static int32_t x670 = INT32_MIN;
volatile int32_t t45 = -5600484;
int8_t x700 = 5;
uint64_t x701 = 1586814428655266875LLU;
static int64_t x703 = -5310310176LL;
volatile int16_t x705 = INT16_MIN;
static int64_t x706 = -1LL;
int16_t x710 = 2959;
static uint32_t x729 = UINT32_MAX;
static uint16_t x730 = 2U;
int8_t x732 = -24;
volatile uint16_t x737 = 685U;
int32_t t54 = 1636;
int32_t t56 = -25;
uint8_t x787 = 3U;
uint32_t t57 = 264571U;
int8_t x812 = -14;
int16_t x816 = -1;
uint8_t x822 = UINT8_MAX;
uint16_t x839 = UINT16_MAX;
volatile int8_t x869 = 3;
volatile uint16_t x874 = UINT16_MAX;
int32_t t66 = -84062689;
int16_t x917 = -1;
int32_t t67 = -3898;
int8_t x943 = INT8_MIN;
uint16_t x945 = 270U;
volatile uint32_t x985 = UINT32_MAX;
static uint8_t x987 = 52U;
int64_t x1009 = -1966556LL;
static int64_t t71 = 102104451977789LL;
uint64_t t73 = 16481568670638LLU;
uint32_t x1050 = UINT32_MAX;
static uint32_t t74 = 1530385U;
uint32_t x1058 = 8U;
static uint32_t t76 = 41008U;
uint64_t t77 = 6646694LLU;
static int8_t x1118 = INT8_MIN;
volatile int16_t x1120 = INT16_MAX;
uint8_t x1133 = UINT8_MAX;
volatile int8_t x1134 = 24;
uint64_t x1176 = UINT64_MAX;
int32_t t83 = 7944;
uint16_t x1193 = 0U;
uint64_t x1227 = 113676LLU;
volatile int32_t x1228 = INT32_MIN;
uint32_t t86 = 14425U;
static int8_t x1244 = INT8_MIN;
volatile uint64_t t87 = 13672LLU;
uint8_t x1246 = 117U;
int32_t x1306 = -1;
int32_t t91 = -921;
volatile int32_t x1326 = INT32_MIN;
static int8_t x1328 = -3;
volatile int8_t x1329 = INT8_MAX;
static int32_t t93 = 5;
uint32_t x1337 = 483071U;
uint32_t x1338 = UINT32_MAX;
int64_t x1340 = -1891555186LL;
uint32_t t94 = 722233U;
static int8_t x1374 = 0;
uint64_t x1375 = 652LLU;
int8_t x1403 = -1;
int32_t x1409 = 14506;
int32_t t99 = 6771752;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static uint32_t x2 = 14524352U;
	int16_t x3 = 0;
	uint32_t t0 = 1U;

	t0 = ((x1*x2)>>(x3/x4));

	if (t0 != 4280442944U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = 256U;
	int8_t x6 = INT8_MAX;
	static uint16_t x7 = 7U;
	static volatile uint32_t x8 = 66U;

	t1 = ((x5*x6)>>(x7/x8));

	if (t1 != 32512) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 0;
	uint64_t x11 = UINT64_MAX;
	static volatile int64_t x12 = INT64_MAX;
	volatile int32_t t2 = 0;

	t2 = ((x9*x10)>>(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x13 = UINT32_MAX;
	int32_t x14 = INT32_MIN;
	int8_t x15 = INT8_MAX;
	volatile uint32_t t3 = 1995063U;

	t3 = ((x13*x14)>>(x15/x16));

	if (t3 != 2147483648U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x29 = 4023U;
	static volatile uint16_t x30 = 7845U;
	int8_t x31 = INT8_MAX;
	uint16_t x32 = 5U;
	volatile int32_t t4 = 50034414;

	t4 = ((x29*x30)>>(x31/x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = -1LL;
	static int8_t x63 = -1;
	volatile uint32_t x64 = UINT32_MAX;
	volatile int64_t t5 = -43123683279500LL;

	t5 = ((x61*x62)>>(x63/x64));

	if (t5 != 16384LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x73 = 0;
	static int16_t x74 = INT16_MIN;
	int64_t x75 = -1LL;
	int32_t x76 = -2017;
	int32_t t6 = -71958;

	t6 = ((x73*x74)>>(x75/x76));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x77 = 3325911864LLU;
	volatile int16_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = -714;

	t7 = ((x77*x78)>>(x79/x80));

	if (t7 != 9223372035191819876LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x90 = UINT32_MAX;
	uint64_t t8 = 16732992LLU;

	t8 = ((x89*x90)>>(x91/x92));

	if (t8 != 9007199252643840LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x101 = -59;
	uint32_t x102 = 112U;
	static int16_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	uint32_t t9 = 15940U;

	t9 = ((x101*x102)>>(x103/x104));

	if (t9 != 4294960688U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x130 = 7U;
	int64_t x131 = INT64_MAX;
	static int64_t x132 = INT64_MAX;
	static volatile int32_t t10 = -123816;

	t10 = ((x129*x130)>>(x131/x132));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x141 = 7446628671LLU;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	static uint64_t t11 = 196914682123LLU;

	t11 = ((x141*x142)>>(x143/x144));

	if (t11 != 18446500062581260288LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x150 = 6280U;
	int8_t x151 = INT8_MIN;
	int64_t x152 = -317870LL;

	t12 = ((x149*x150)>>(x151/x152));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x169 = INT32_MAX;
	uint64_t x170 = UINT64_MAX;
	int16_t x171 = 9;
	volatile int8_t x172 = INT8_MIN;

	t13 = ((x169*x170)>>(x171/x172));

	if (t13 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x194 = -2;
	static volatile uint32_t x195 = 14522U;
	volatile int8_t x196 = -1;
	volatile uint64_t t14 = 60LLU;

	t14 = ((x193*x194)>>(x195/x196));

	if (t14 != 18446744073709473478LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x201 = 2848U;
	uint64_t x202 = UINT64_MAX;
	static int16_t x203 = 11;
	uint64_t t15 = 1LLU;

	t15 = ((x201*x202)>>(x203/x204));

	if (t15 != 18446744073709548768LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x209 = -1LL;
	volatile int8_t x210 = -1;
	static int32_t x211 = -105;
	volatile uint64_t x212 = 524236571120476437LLU;
	int64_t t16 = -801611LL;

	t16 = ((x209*x210)>>(x211/x212));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	volatile int16_t x219 = INT16_MAX;
	int64_t x220 = INT64_MIN;
	static uint32_t t17 = 784224U;

	t17 = ((x217*x218)>>(x219/x220));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x221 = INT8_MAX;
	volatile int8_t x222 = 1;
	uint32_t x223 = UINT32_MAX;
	static volatile int8_t x224 = INT8_MIN;
	int32_t t18 = 721;

	t18 = ((x221*x222)>>(x223/x224));

	if (t18 != 63) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x265 = 10LL;
	static int32_t x266 = INT32_MAX;
	int16_t x267 = -111;

	t19 = ((x265*x266)>>(x267/x268));

	if (t19 != 21474836470LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x269 = INT8_MIN;
	int8_t x271 = -1;
	uint32_t t20 = 978875153U;

	t20 = ((x269*x270)>>(x271/x272));

	if (t20 != 4195679872U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x277 = 2U;
	volatile uint16_t x278 = 259U;
	uint64_t x279 = 424704LLU;
	int64_t x280 = 21873413826638899LL;
	volatile int32_t t21 = 2756;

	t21 = ((x277*x278)>>(x279/x280));

	if (t21 != 518) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x297 = UINT64_MAX;
	uint16_t x298 = 3U;
	uint8_t x300 = 7U;
	static volatile uint64_t t22 = 543LLU;

	t22 = ((x297*x298)>>(x299/x300));

	if (t22 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x309 = 14U;
	uint64_t x310 = UINT64_MAX;
	static uint8_t x311 = UINT8_MAX;
	uint8_t x312 = 36U;
	static volatile uint64_t t23 = 1391109456LLU;

	t23 = ((x309*x310)>>(x311/x312));

	if (t23 != 144115188075855871LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x314 = -11;
	uint16_t x315 = 0U;
	static uint16_t x316 = UINT16_MAX;
	static int32_t t24 = -88024;

	t24 = ((x313*x314)>>(x315/x316));

	if (t24 != 11) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x317 = -1LL;
	uint16_t x319 = 0U;

	t25 = ((x317*x318)>>(x319/x320));

	if (t25 != 24536657329LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x369 = UINT64_MAX;
	static int16_t x370 = -1;
	uint32_t x371 = 5394466U;
	volatile int64_t x372 = INT64_MAX;

	t26 = ((x369*x370)>>(x371/x372));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x394 = 5U;
	static uint8_t x395 = UINT8_MAX;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t27 = 43634;

	t27 = ((x393*x394)>>(x395/x396));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x405 = UINT8_MAX;

	t28 = ((x405*x406)>>(x407/x408));

	if (t28 != 8925) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x433 = INT8_MAX;
	int8_t x434 = 13;
	static volatile uint64_t x435 = 7151441523179LLU;
	int8_t x436 = INT8_MIN;

	t29 = ((x433*x434)>>(x435/x436));

	if (t29 != 1651) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x445 = 12U;
	uint32_t x447 = 1701U;
	int16_t x448 = INT16_MAX;

	t30 = ((x445*x446)>>(x447/x448));

	if (t30 != 288) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x462 = 1U;
	int32_t x464 = -351677848;
	int32_t t31 = 377973;

	t31 = ((x461*x462)>>(x463/x464));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x477 = UINT32_MAX;
	int8_t x478 = INT8_MIN;
	static uint8_t x479 = UINT8_MAX;
	volatile uint32_t t32 = 1U;

	t32 = ((x477*x478)>>(x479/x480));

	if (t32 != 128U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x481 = 1U;
	int64_t x482 = 101310937097LL;
	volatile int8_t x483 = -1;
	volatile int16_t x484 = -1;

	t33 = ((x481*x482)>>(x483/x484));

	if (t33 != 50655468548LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x489 = 0;
	int32_t x490 = INT32_MAX;
	int64_t x491 = -1LL;
	int16_t x492 = INT16_MIN;
	int32_t t34 = 37833280;

	t34 = ((x489*x490)>>(x491/x492));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x506 = 30115474U;
	uint8_t x507 = 10U;
	uint64_t t35 = 95146726421LLU;

	t35 = ((x505*x506)>>(x507/x508));

	if (t35 != 18446744073679436142LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x529 = 60;
	static volatile int8_t x531 = -1;
	int32_t x532 = -1;

	t36 = ((x529*x530)>>(x531/x532));

	if (t36 != 172338614467514156LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x549 = 235U;
	static int8_t x550 = -1;
	int32_t x551 = -2;
	int16_t x552 = INT16_MAX;

	t37 = ((x549*x550)>>(x551/x552));

	if (t37 != 4294967061U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x566 = 976040U;
	int16_t x567 = 17;
	static int16_t x568 = -83;
	volatile uint32_t t38 = 1195900U;

	t38 = ((x565*x566)>>(x567/x568));

	if (t38 != 4293991256U) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x585 = 166U;
	int16_t x586 = 165;
	volatile int8_t x587 = 3;
	int32_t t39 = 0;

	t39 = ((x585*x586)>>(x587/x588));

	if (t39 != 27390) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x589 = 1;
	int32_t x590 = 0;
	uint8_t x591 = 0U;
	volatile int16_t x592 = 1954;
	static int32_t t40 = 20754;

	t40 = ((x589*x590)>>(x591/x592));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x605 = INT32_MIN;
	uint32_t x606 = 114150066U;
	volatile uint64_t x607 = 3856LLU;
	static int8_t x608 = INT8_MIN;

	t41 = ((x605*x606)>>(x607/x608));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x637 = 196U;
	static uint16_t x638 = 3031U;
	static uint8_t x640 = 111U;
	volatile uint32_t t42 = 499U;

	t42 = ((x637*x638)>>(x639/x640));

	if (t42 != 290U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x671 = UINT32_MAX;
	volatile int16_t x672 = INT16_MIN;
	int64_t t43 = -28894325757LL;

	t43 = ((x669*x670)>>(x671/x672));

	if (t43 != 1955283861504LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x673 = 63012;
	uint8_t x674 = 3U;
	static int32_t x675 = -1;
	int16_t x676 = INT16_MIN;
	int32_t t44 = 0;

	t44 = ((x673*x674)>>(x675/x676));

	if (t44 != 189036) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x681 = INT16_MIN;
	int8_t x682 = -1;
	uint16_t x683 = 355U;
	static volatile int64_t x684 = 4194LL;

	t45 = ((x681*x682)>>(x683/x684));

	if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x689 = -1;
	int64_t x690 = -19935647124230082LL;
	int32_t x691 = INT32_MIN;
	int64_t x692 = INT64_MAX;
	static int64_t t46 = -500541861886010LL;

	t46 = ((x689*x690)>>(x691/x692));

	if (t46 != 19935647124230082LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x697 = INT32_MAX;
	uint32_t x698 = 2416U;
	volatile uint16_t x699 = 117U;
	uint32_t t47 = 3U;

	t47 = ((x697*x698)>>(x699/x700));

	if (t47 != 511U) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x702 = 3U;
	int64_t x704 = INT64_MIN;
	uint64_t t48 = 13762754LLU;

	t48 = ((x701*x702)>>(x703/x704));

	if (t48 != 4760443285965800625LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x707 = INT8_MIN;
	static int64_t x708 = INT64_MIN;
	int64_t t49 = 9419973LL;

	t49 = ((x705*x706)>>(x707/x708));

	if (t49 != 32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x709 = 471679067021LL;
	uint32_t x711 = 248U;
	int8_t x712 = INT8_MIN;
	int64_t t50 = 493070284LL;

	t50 = ((x709*x710)>>(x711/x712));

	if (t50 != 1395698359315139LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x721 = 1;
	uint64_t x722 = 85881432547160LLU;
	static uint32_t x723 = 1U;
	volatile int32_t x724 = -5654798;
	uint64_t t51 = 329478596678335078LLU;

	t51 = ((x721*x722)>>(x723/x724));

	if (t51 != 85881432547160LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x731 = 7U;
	volatile uint32_t t52 = 508304782U;

	t52 = ((x729*x730)>>(x731/x732));

	if (t52 != 4294967294U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x738 = 0;
	static int32_t x739 = 35;
	int32_t x740 = INT32_MIN;
	int32_t t53 = -32545524;

	t53 = ((x737*x738)>>(x739/x740));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x741 = UINT8_MAX;
	static int8_t x742 = INT8_MAX;
	int8_t x743 = -1;
	static volatile int64_t x744 = -6060LL;

	t54 = ((x741*x742)>>(x743/x744));

	if (t54 != 32385) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x745 = 1U;
	static volatile uint8_t x746 = 27U;
	static volatile uint64_t x747 = UINT64_MAX;
	volatile int64_t x748 = -88723470LL;
	static int32_t t55 = 5513;

	t55 = ((x745*x746)>>(x747/x748));

	if (t55 != 13) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x777 = INT8_MAX;
	static int32_t x778 = 1188562;
	int16_t x779 = INT16_MIN;
	int64_t x780 = INT64_MIN;

	t56 = ((x777*x778)>>(x779/x780));

	if (t56 != 150947374) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x785 = INT32_MAX;
	static uint32_t x786 = 7166111U;
	uint64_t x788 = UINT64_MAX;

	t57 = ((x785*x786)>>(x787/x788));

	if (t57 != 2140317537U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x809 = 27;
	static volatile int32_t x810 = 1642;
	int8_t x811 = INT8_MIN;
	volatile int32_t t58 = -3944;

	t58 = ((x809*x810)>>(x811/x812));

	if (t58 != 86) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x813 = INT8_MIN;
	int16_t x814 = INT16_MIN;
	uint8_t x815 = 0U;
	int32_t t59 = -1182;

	t59 = ((x813*x814)>>(x815/x816));

	if (t59 != 4194304) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x821 = 845920241226LL;
	uint16_t x823 = 11U;
	volatile uint16_t x824 = 701U;
	int64_t t60 = -10LL;

	t60 = ((x821*x822)>>(x823/x824));

	if (t60 != 215709661512630LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x829 = 1U;
	volatile uint64_t x830 = 152770782147LLU;
	volatile int32_t x831 = INT32_MIN;
	volatile int64_t x832 = INT64_MIN;
	uint64_t t61 = 215641264LLU;

	t61 = ((x829*x830)>>(x831/x832));

	if (t61 != 152770782147LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x837 = 190659120735LLU;
	static uint32_t x838 = UINT32_MAX;
	static uint64_t x840 = UINT64_MAX;
	volatile uint64_t t62 = 33334817832821LLU;

	t62 = ((x837*x838)>>(x839/x840));

	if (t62 != 7217948807061090721LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x870 = UINT64_MAX;
	int16_t x871 = INT16_MAX;
	static volatile uint32_t x872 = 6691U;
	uint64_t t63 = 21312843026845LLU;

	t63 = ((x869*x870)>>(x871/x872));

	if (t63 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x873 = 238367364U;
	uint8_t x875 = 3U;
	uint64_t x876 = 158941633709880234LLU;
	volatile uint32_t t64 = 3077825U;

	t64 = ((x873*x874)>>(x875/x876));

	if (t64 != 609144188U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x885 = INT8_MIN;
	int16_t x886 = -234;
	int64_t x887 = INT64_MIN;
	int64_t x888 = INT64_MIN;
	volatile int32_t t65 = 4012;

	t65 = ((x885*x886)>>(x887/x888));

	if (t65 != 14976) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x893 = 9;
	uint8_t x894 = UINT8_MAX;
	static int16_t x895 = -1;
	volatile int8_t x896 = INT8_MAX;

	t66 = ((x893*x894)>>(x895/x896));

	if (t66 != 2295) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x918 = -1;
	static volatile int8_t x919 = -26;
	int32_t x920 = -217;

	t67 = ((x917*x918)>>(x919/x920));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x941 = 22;
	static uint8_t x942 = UINT8_MAX;
	volatile int64_t x944 = INT64_MIN;
	int32_t t68 = -3473;

	t68 = ((x941*x942)>>(x943/x944));

	if (t68 != 5610) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x946 = UINT8_MAX;
	uint32_t x947 = 0U;
	uint8_t x948 = UINT8_MAX;
	int32_t t69 = -13;

	t69 = ((x945*x946)>>(x947/x948));

	if (t69 != 68850) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x986 = -7;
	int8_t x988 = INT8_MIN;
	static uint32_t t70 = 49693889U;

	t70 = ((x985*x986)>>(x987/x988));

	if (t70 != 7U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x1010 = INT8_MIN;
	uint16_t x1011 = 4U;
	int8_t x1012 = INT8_MAX;

	t71 = ((x1009*x1010)>>(x1011/x1012));

	if (t71 != 251719168LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x1029 = -1;
	static int8_t x1030 = -15;
	static volatile int32_t x1031 = INT32_MIN;
	uint64_t x1032 = 1508060639654687913LLU;
	static int32_t t72 = 8549;

	t72 = ((x1029*x1030)>>(x1031/x1032));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x1045 = 1U;
	static uint64_t x1046 = 21607779788324936LLU;
	int16_t x1047 = -84;
	int64_t x1048 = INT64_MAX;

	t73 = ((x1045*x1046)>>(x1047/x1048));

	if (t73 != 21607779788324936LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x1049 = 6U;
	static int64_t x1051 = -1LL;
	int16_t x1052 = INT16_MIN;

	t74 = ((x1049*x1050)>>(x1051/x1052));

	if (t74 != 4294967290U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x1053 = 254550U;
	int16_t x1054 = INT16_MIN;
	static volatile int32_t x1055 = INT32_MIN;
	int64_t x1056 = INT64_MAX;
	volatile uint32_t t75 = 451331341U;

	t75 = ((x1053*x1054)>>(x1055/x1056));

	if (t75 != 248840192U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x1057 = INT32_MAX;
	static uint16_t x1059 = 298U;
	uint32_t x1060 = 26257U;

	t76 = ((x1057*x1058)>>(x1059/x1060));

	if (t76 != 4294967288U) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x1081 = UINT64_MAX;
	int32_t x1082 = -406;
	int32_t x1083 = 41;
	int32_t x1084 = INT32_MAX;

	t77 = ((x1081*x1082)>>(x1083/x1084));

	if (t77 != 406LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x1117 = 406U;
	uint8_t x1119 = 12U;
	uint32_t t78 = 1829509738U;

	t78 = ((x1117*x1118)>>(x1119/x1120));

	if (t78 != 4294915328U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x1121 = 20U;
	volatile uint8_t x1122 = 3U;
	int8_t x1123 = INT8_MAX;
	int8_t x1124 = INT8_MAX;
	int32_t t79 = 4584875;

	t79 = ((x1121*x1122)>>(x1123/x1124));

	if (t79 != 30) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x1135 = 29814017059LLU;
	int8_t x1136 = INT8_MIN;
	volatile int32_t t80 = 3661099;

	t80 = ((x1133*x1134)>>(x1135/x1136));

	if (t80 != 6120) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1161 = -46;
	int64_t x1162 = -1LL;
	int32_t x1163 = -1;
	int64_t x1164 = -1LL;
	volatile int64_t t81 = 1583518184629LL;

	t81 = ((x1161*x1162)>>(x1163/x1164));

	if (t81 != 23LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x1173 = 215U;
	int16_t x1174 = INT16_MIN;
	int64_t x1175 = INT64_MIN;
	volatile uint32_t t82 = 229078366U;

	t82 = ((x1173*x1174)>>(x1175/x1176));

	if (t82 != 4287922176U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x1189 = -1;
	int8_t x1190 = 0;
	int32_t x1191 = 524722;
	volatile uint64_t x1192 = UINT64_MAX;

	t83 = ((x1189*x1190)>>(x1191/x1192));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x1194 = 1819;
	uint32_t x1195 = 1U;
	volatile uint32_t x1196 = UINT32_MAX;
	volatile int32_t t84 = -3;

	t84 = ((x1193*x1194)>>(x1195/x1196));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1225 = INT32_MAX;
	static volatile int8_t x1226 = 0;
	volatile int32_t t85 = 45;

	t85 = ((x1225*x1226)>>(x1227/x1228));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1229 = 3U;
	static uint32_t x1230 = UINT32_MAX;
	volatile int16_t x1231 = INT16_MIN;
	int32_t x1232 = -66583;

	t86 = ((x1229*x1230)>>(x1231/x1232));

	if (t86 != 4294967293U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x1241 = -165490LL;
	uint64_t x1242 = 9922966LLU;
	int8_t x1243 = INT8_MIN;

	t87 = ((x1241*x1242)>>(x1243/x1244));

	if (t87 != 9223371215778954138LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x1245 = 3LLU;
	uint32_t x1247 = 102766450U;
	int8_t x1248 = -9;
	static uint64_t t88 = 122713LLU;

	t88 = ((x1245*x1246)>>(x1247/x1248));

	if (t88 != 351LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x1273 = UINT64_MAX;
	uint16_t x1274 = 1U;
	int32_t x1275 = -1;
	int32_t x1276 = -1;
	uint64_t t89 = 1LLU;

	t89 = ((x1273*x1274)>>(x1275/x1276));

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x1297 = 28U;
	int16_t x1298 = 1;
	uint8_t x1299 = 12U;
	uint64_t x1300 = UINT64_MAX;
	volatile int32_t t90 = -4;

	t90 = ((x1297*x1298)>>(x1299/x1300));

	if (t90 != 28) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x1305 = INT8_MIN;
	static uint32_t x1307 = 821U;
	uint32_t x1308 = UINT32_MAX;

	t91 = ((x1305*x1306)>>(x1307/x1308));

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x1325 = -1LL;
	uint32_t x1327 = 524096U;
	int64_t t92 = -1256LL;

	t92 = ((x1325*x1326)>>(x1327/x1328));

	if (t92 != 2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1330 = 1;
	uint64_t x1331 = 19557LLU;
	uint64_t x1332 = UINT64_MAX;

	t93 = ((x1329*x1330)>>(x1331/x1332));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x1339 = -1;

	t94 = ((x1337*x1338)>>(x1339/x1340));

	if (t94 != 4294484225U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1361 = INT8_MIN;
	int32_t x1362 = -5832044;
	int32_t x1363 = -1;
	volatile uint8_t x1364 = 12U;
	int32_t t95 = -489828438;

	t95 = ((x1361*x1362)>>(x1363/x1364));

	if (t95 != 746501632) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1373 = -14453;
	int8_t x1376 = INT8_MIN;
	static volatile int32_t t96 = 114300;

	t96 = ((x1373*x1374)>>(x1375/x1376));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1401 = INT16_MIN;
	static volatile int32_t x1402 = -11004;
	int32_t x1404 = -1416;
	volatile int32_t t97 = -21368709;

	t97 = ((x1401*x1402)>>(x1403/x1404));

	if (t97 != 360579072) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x1405 = 357570723851106LLU;
	int8_t x1406 = -1;
	int32_t x1407 = -1;
	uint16_t x1408 = UINT16_MAX;
	volatile uint64_t t98 = 1674371825844845221LLU;

	t98 = ((x1405*x1406)>>(x1407/x1408));

	if (t98 != 18446386502985700510LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x1410 = 22086;
	static int16_t x1411 = 0;
	volatile int32_t x1412 = INT32_MIN;

	t99 = ((x1409*x1410)>>(x1411/x1412));

	if (t99 != 320379516) { NG(); } else { ; }
	
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

