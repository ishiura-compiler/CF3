#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = INT16_MIN;
volatile uint32_t x9 = 2335U;
int8_t x12 = 47;
static int16_t x21 = INT16_MAX;
int8_t x24 = INT8_MIN;
int16_t x27 = -1;
uint32_t x28 = 1964U;
int16_t x29 = INT16_MAX;
int8_t x74 = INT8_MIN;
int16_t x90 = INT16_MIN;
uint16_t x94 = 98U;
int8_t x96 = INT8_MIN;
static volatile int32_t t12 = 402;
static int8_t x210 = -8;
int16_t x211 = INT16_MIN;
static uint64_t x212 = 2041LLU;
volatile uint32_t t13 = 48217U;
static volatile int64_t x219 = -17506LL;
volatile int32_t t14 = 37487573;
static uint32_t x225 = 94922588U;
int16_t x237 = 3561;
int64_t x243 = 67059704683897LL;
volatile uint8_t x246 = UINT8_MAX;
int64_t x248 = INT64_MIN;
static int32_t x271 = -2502647;
uint8_t x319 = 0U;
volatile int32_t t22 = INT32_MAX;
volatile uint8_t x374 = 5U;
static volatile int32_t t26 = 0;
int8_t x417 = 1;
uint16_t x437 = UINT16_MAX;
static uint8_t x438 = 1U;
static int8_t x440 = INT8_MAX;
uint64_t x445 = 1338LLU;
static int8_t x472 = INT8_MAX;
volatile int8_t x506 = -39;
volatile int64_t x507 = 27882167023780LL;
static volatile uint8_t x509 = 1U;
uint8_t x511 = UINT8_MAX;
static int8_t x512 = 1;
int8_t x532 = -52;
int16_t x577 = INT16_MAX;
volatile uint16_t x584 = 18U;
volatile uint64_t x595 = 363LLU;
volatile uint8_t x630 = 4U;
static volatile int32_t t43 = -55577;
static uint8_t x653 = UINT8_MAX;
uint64_t x656 = UINT64_MAX;
int16_t x661 = 317;
int8_t x662 = INT8_MIN;
int32_t x664 = 1246856;
int8_t x681 = 11;
int8_t x682 = INT8_MAX;
uint8_t x707 = UINT8_MAX;
uint64_t x708 = 1420663260727LLU;
int32_t x737 = 3340;
int32_t x738 = -1;
int16_t x739 = -1;
static uint16_t x773 = 2U;
int32_t x774 = -650;
volatile int16_t x784 = 7095;
volatile uint64_t x792 = 33042563633809LLU;
static volatile uint16_t x793 = UINT16_MAX;
volatile int8_t x795 = -5;
uint16_t x852 = UINT16_MAX;
volatile uint64_t t56 = 18116246775650LLU;
int8_t x874 = INT8_MIN;
int16_t x883 = -114;
uint16_t x889 = UINT16_MAX;
int32_t x892 = 11184662;
int16_t x945 = 13;
static uint16_t x947 = UINT16_MAX;
static uint32_t x949 = UINT32_MAX;
int8_t x951 = INT8_MAX;
volatile uint32_t t63 = UINT32_MAX;
int32_t t65 = 234;
volatile int64_t x1008 = INT64_MIN;
volatile int32_t t67 = -1;
int32_t t70 = 17;
int64_t x1053 = INT64_MAX;
static uint64_t x1097 = 209046740455LLU;
uint64_t x1098 = 735LLU;
static volatile int16_t x1113 = INT16_MAX;
static uint64_t x1114 = 60LLU;
static int8_t x1115 = -1;
volatile int32_t t77 = 3;
uint8_t x1158 = UINT8_MAX;
uint64_t x1159 = UINT64_MAX;
int16_t x1171 = -1;
uint16_t x1177 = 339U;
volatile int32_t t80 = 256117;
static uint8_t x1197 = 0U;
static uint32_t x1198 = 2087966U;
int32_t t82 = 1006;
volatile int8_t x1237 = 1;
static int32_t x1240 = INT32_MAX;
volatile uint8_t x1244 = UINT8_MAX;
uint64_t x1245 = 404243LLU;
static int8_t x1246 = 0;
uint32_t x1248 = UINT32_MAX;
int8_t x1259 = 61;
static volatile uint16_t x1300 = UINT16_MAX;
int8_t x1306 = 19;
volatile int32_t t89 = 8441;
int32_t x1315 = -223085;
uint16_t x1316 = 1U;
volatile int32_t x1327 = -1;
int32_t t94 = -3;
int64_t x1365 = 26064LL;
int32_t x1366 = INT32_MIN;
volatile int64_t t97 = 6LL;
uint16_t x1377 = UINT16_MAX;
volatile uint8_t x1378 = UINT8_MAX;
int8_t x1380 = INT8_MAX;
static volatile int32_t t99 = 426;


void f0(void) {
	int8_t x5 = 22;
	static int32_t x6 = 31229;
	uint8_t x8 = 66U;
	volatile int32_t t0 = 1;

	t0 = (x5<<(x6/(x7+x8)));

	if (t0 != 22) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = -2;
	static uint16_t x11 = UINT16_MAX;
	volatile uint32_t t1 = 41U;

	t1 = (x9<<(x10/(x11+x12)));

	if (t1 != 2335U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x22 = INT32_MIN;
	volatile uint64_t x23 = 14LLU;
	int32_t t2 = -1077806;

	t2 = (x21<<(x22/(x23+x24)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = 2;
	static int32_t x26 = 34;
	int32_t t3 = 1631;

	t3 = (x25<<(x26/(x27+x28)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x30 = -3;
	int32_t x31 = INT32_MAX;
	static uint32_t x32 = 383296U;
	volatile int32_t t4 = -63934688;

	t4 = (x29<<(x30/(x31+x32)));

	if (t4 != 65534) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x49 = 7472U;
	static uint8_t x50 = 30U;
	static int16_t x51 = -31;
	uint64_t x52 = UINT64_MAX;
	uint32_t t5 = 113U;

	t5 = (x49<<(x50/(x51+x52)));

	if (t5 != 7472U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int16_t x75 = 24;
	static int64_t x76 = -3552822LL;
	uint64_t t6 = UINT64_MAX;

	t6 = (x73<<(x74/(x75+x76)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int32_t x91 = -10894;
	volatile int16_t x92 = INT16_MIN;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x89<<(x90/(x91+x92)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x93 = 22U;
	uint8_t x95 = 6U;
	int32_t t8 = 29365;

	t8 = (x93<<(x94/(x95+x96)));

	if (t8 != 22) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x129 = INT16_MAX;
	int8_t x130 = INT8_MIN;
	uint16_t x131 = UINT16_MAX;
	int64_t x132 = -1LL;
	volatile int32_t t9 = -1;

	t9 = (x129<<(x130/(x131+x132)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x133 = 26555066241LLU;
	static uint16_t x134 = 181U;
	int8_t x135 = INT8_MAX;
	int8_t x136 = INT8_MAX;
	static volatile uint64_t t10 = 3480683695939LLU;

	t10 = (x133<<(x134/(x135+x136)));

	if (t10 != 26555066241LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x173 = 1053562LL;
	static int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	static volatile uint32_t x176 = 7762U;
	int64_t t11 = 5510976603665102LL;

	t11 = (x173<<(x174/(x175+x176)));

	if (t11 != 1053562LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x201 = 4U;
	int8_t x202 = 26;
	volatile uint32_t x203 = UINT32_MAX;
	int64_t x204 = -1LL;

	t12 = (x201<<(x202/(x203+x204)));

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x209 = 3071754U;

	t13 = (x209<<(x210/(x211+x212)));

	if (t13 != 6143508U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x217 = 2;
	int16_t x218 = -1;
	static int16_t x220 = INT16_MIN;

	t14 = (x217<<(x218/(x219+x220)));

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x226 = 11U;
	uint16_t x227 = 103U;
	uint8_t x228 = 7U;
	static volatile uint32_t t15 = 810U;

	t15 = (x225<<(x226/(x227+x228)));

	if (t15 != 94922588U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x229 = 1;
	static uint64_t x230 = 50984LLU;
	int32_t x231 = INT32_MIN;
	int32_t x232 = 110799760;
	volatile int32_t t16 = -161446932;

	t16 = (x229<<(x230/(x231+x232)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x238 = -1;
	static volatile uint32_t x239 = 512231827U;
	int16_t x240 = 375;
	static int32_t t17 = 26676;

	t17 = (x237<<(x238/(x239+x240)));

	if (t17 != 911616) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x241 = UINT16_MAX;
	int8_t x242 = INT8_MAX;
	int64_t x244 = -1LL;
	int32_t t18 = 15019;

	t18 = (x241<<(x242/(x243+x244)));

	if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x245 = 423U;
	uint64_t x247 = 58084LLU;
	static int32_t t19 = -5688;

	t19 = (x245<<(x246/(x247+x248)));

	if (t19 != 423) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x253 = INT64_MAX;
	uint8_t x254 = 13U;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = -1LL;
	int64_t t20 = INT64_MAX;

	t20 = (x253<<(x254/(x255+x256)));

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x269 = 3486263U;
	int8_t x270 = INT8_MIN;
	static int16_t x272 = -13912;
	volatile uint32_t t21 = 3U;

	t21 = (x269<<(x270/(x271+x272)));

	if (t21 != 3486263U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x317 = INT32_MAX;
	int8_t x318 = INT8_MAX;
	int32_t x320 = INT32_MIN;

	t22 = (x317<<(x318/(x319+x320)));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x321 = 0U;
	int64_t x322 = -9983064210LL;
	static int64_t x323 = INT64_MIN;
	uint32_t x324 = 176U;
	volatile int32_t t23 = 182144928;

	t23 = (x321<<(x322/(x323+x324)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x357 = 268550834711992LL;
	static int64_t x358 = INT64_MIN;
	uint32_t x359 = 123579U;
	int64_t x360 = INT64_MIN;
	int64_t t24 = -344863072LL;

	t24 = (x357<<(x358/(x359+x360)));

	if (t24 != 537101669423984LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x369 = 0U;
	uint16_t x370 = UINT16_MAX;
	static int64_t x371 = 26777209LL;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t25 = -11;

	t25 = (x369<<(x370/(x371+x372)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x373 = 2U;
	volatile int16_t x375 = INT16_MAX;
	uint16_t x376 = 428U;

	t26 = (x373<<(x374/(x375+x376)));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x397 = 85U;
	int16_t x398 = INT16_MIN;
	volatile int64_t x399 = INT64_MIN;
	volatile int32_t x400 = 3;
	static volatile int32_t t27 = -30732278;

	t27 = (x397<<(x398/(x399+x400)));

	if (t27 != 85) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x418 = UINT64_MAX;
	uint64_t x419 = UINT64_MAX;
	int32_t x420 = INT32_MIN;
	volatile int32_t t28 = 0;

	t28 = (x417<<(x418/(x419+x420)));

	if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x421 = 346331714750785086LLU;
	volatile int32_t x422 = -1;
	int8_t x423 = INT8_MIN;
	int32_t x424 = INT32_MAX;
	static uint64_t t29 = 78278LLU;

	t29 = (x421<<(x422/(x423+x424)));

	if (t29 != 346331714750785086LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x439 = 5658331246884856LLU;
	int32_t t30 = 2076340;

	t30 = (x437<<(x438/(x439+x440)));

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x446 = INT8_MAX;
	volatile int64_t x447 = -5070624536LL;
	int64_t x448 = 11444852618247283LL;
	volatile uint64_t t31 = 31LLU;

	t31 = (x445<<(x446/(x447+x448)));

	if (t31 != 1338LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x469 = UINT64_MAX;
	uint64_t x470 = 24LLU;
	static volatile int16_t x471 = INT16_MIN;
	static uint64_t t32 = UINT64_MAX;

	t32 = (x469<<(x470/(x471+x472)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x485 = 14U;
	int16_t x486 = -3828;
	uint16_t x487 = 0U;
	int64_t x488 = -1632293LL;
	volatile int32_t t33 = 2;

	t33 = (x485<<(x486/(x487+x488)));

	if (t33 != 14) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x505 = 0;
	static volatile int16_t x508 = INT16_MAX;
	int32_t t34 = -1;

	t34 = (x505<<(x506/(x507+x508)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x510 = 348U;
	static volatile int32_t t35 = 5;

	t35 = (x509<<(x510/(x511+x512)));

	if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x529 = 399884008U;
	int64_t x530 = -1LL;
	int64_t x531 = INT64_MAX;
	uint32_t t36 = 54166U;

	t36 = (x529<<(x530/(x531+x532)));

	if (t36 != 399884008U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x578 = 0;
	volatile int16_t x579 = INT16_MIN;
	uint8_t x580 = 11U;
	volatile int32_t t37 = 0;

	t37 = (x577<<(x578/(x579+x580)));

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x581 = 48;
	static int64_t x582 = -1LL;
	volatile int32_t x583 = -1;
	int32_t t38 = 15775082;

	t38 = (x581<<(x582/(x583+x584)));

	if (t38 != 48) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x593 = UINT32_MAX;
	volatile uint8_t x594 = UINT8_MAX;
	volatile int64_t x596 = INT64_MIN;
	uint32_t t39 = UINT32_MAX;

	t39 = (x593<<(x594/(x595+x596)));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x609 = 15U;
	int16_t x610 = INT16_MAX;
	uint16_t x611 = UINT16_MAX;
	volatile int32_t x612 = 27;
	static volatile int32_t t40 = -58;

	t40 = (x609<<(x610/(x611+x612)));

	if (t40 != 15) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x621 = 111811LLU;
	uint8_t x622 = 0U;
	int32_t x623 = INT32_MIN;
	uint8_t x624 = UINT8_MAX;
	static volatile uint64_t t41 = 11517092LLU;

	t41 = (x621<<(x622/(x623+x624)));

	if (t41 != 111811LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x629 = 3;
	int64_t x631 = INT64_MIN;
	uint16_t x632 = 10U;
	static int32_t t42 = 15507430;

	t42 = (x629<<(x630/(x631+x632)));

	if (t42 != 3) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x633 = 12;
	uint64_t x634 = 342LLU;
	uint32_t x635 = 65903953U;
	static volatile uint8_t x636 = UINT8_MAX;

	t43 = (x633<<(x634/(x635+x636)));

	if (t43 != 12) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x654 = INT16_MIN;
	int8_t x655 = -1;
	int32_t t44 = -27591;

	t44 = (x653<<(x654/(x655+x656)));

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x663 = 50;
	volatile int32_t t45 = -93469;

	t45 = (x661<<(x662/(x663+x664)));

	if (t45 != 317) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x673 = 4174LL;
	uint8_t x674 = 5U;
	volatile uint64_t x675 = UINT64_MAX;
	static uint64_t x676 = 2835LLU;
	static int64_t t46 = 377801701666872LL;

	t46 = (x673<<(x674/(x675+x676)));

	if (t46 != 4174LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x683 = -1;
	int64_t x684 = -41924LL;
	int32_t t47 = -115;

	t47 = (x681<<(x682/(x683+x684)));

	if (t47 != 11) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x705 = 3;
	uint8_t x706 = 0U;
	static volatile int32_t t48 = -1056120;

	t48 = (x705<<(x706/(x707+x708)));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x721 = 0;
	int8_t x722 = INT8_MIN;
	int64_t x723 = INT64_MAX;
	static int32_t x724 = -1;
	int32_t t49 = -14599997;

	t49 = (x721<<(x722/(x723+x724)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x740 = 4837U;
	static volatile int32_t t50 = 1;

	t50 = (x737<<(x738/(x739+x740)));

	if (t50 != 3340) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x775 = -18533449;
	uint64_t x776 = UINT64_MAX;
	static int32_t t51 = 8307;

	t51 = (x773<<(x774/(x775+x776)));

	if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x781 = INT32_MAX;
	uint16_t x782 = 1025U;
	static int16_t x783 = 0;
	int32_t t52 = INT32_MAX;

	t52 = (x781<<(x782/(x783+x784)));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x789 = 247LLU;
	static uint8_t x790 = 5U;
	int8_t x791 = INT8_MAX;
	volatile uint64_t t53 = 3459565629723508532LLU;

	t53 = (x789<<(x790/(x791+x792)));

	if (t53 != 247LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x794 = UINT32_MAX;
	int32_t x796 = INT32_MAX;
	volatile int32_t t54 = -29276428;

	t54 = (x793<<(x794/(x795+x796)));

	if (t54 != 262140) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x809 = INT32_MAX;
	int32_t x810 = 3;
	volatile uint8_t x811 = 2U;
	uint64_t x812 = 12401900LLU;
	int32_t t55 = INT32_MAX;

	t55 = (x809<<(x810/(x811+x812)));

	if (t55 != INT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x849 = UINT64_MAX;
	int32_t x850 = 1459281;
	uint8_t x851 = UINT8_MAX;

	t56 = (x849<<(x850/(x851+x852)));

	if (t56 != 18446744073705357312LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x857 = 1463339299112LLU;
	uint32_t x858 = UINT32_MAX;
	int8_t x859 = -15;
	volatile int32_t x860 = -1;
	static uint64_t t57 = 318291512577248215LLU;

	t57 = (x857<<(x858/(x859+x860)));

	if (t57 != 2926678598224LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x873 = UINT32_MAX;
	static uint16_t x875 = UINT16_MAX;
	int8_t x876 = -5;
	uint32_t t58 = UINT32_MAX;

	t58 = (x873<<(x874/(x875+x876)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x881 = 3319U;
	volatile uint16_t x882 = 3U;
	volatile int16_t x884 = INT16_MIN;
	uint32_t t59 = 215557U;

	t59 = (x881<<(x882/(x883+x884)));

	if (t59 != 3319U) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x890 = INT8_MIN;
	static int16_t x891 = INT16_MIN;
	static int32_t t60 = -25589633;

	t60 = (x889<<(x890/(x891+x892)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x941 = 15866818LLU;
	int64_t x942 = INT64_MIN;
	int64_t x943 = INT64_MIN;
	int32_t x944 = 1;
	volatile uint64_t t61 = 10LLU;

	t61 = (x941<<(x942/(x943+x944)));

	if (t61 != 31733636LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x946 = -55;
	static volatile uint16_t x948 = UINT16_MAX;
	static int32_t t62 = -510498588;

	t62 = (x945<<(x946/(x947+x948)));

	if (t62 != 13) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x950 = 0;
	static int8_t x952 = -10;

	t63 = (x949<<(x950/(x951+x952)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x957 = UINT32_MAX;
	static int16_t x958 = 2183;
	int16_t x959 = INT16_MAX;
	int32_t x960 = 40;
	volatile uint32_t t64 = UINT32_MAX;

	t64 = (x957<<(x958/(x959+x960)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x969 = 4U;
	volatile uint16_t x970 = 1U;
	volatile uint64_t x971 = 11405900024LLU;
	int32_t x972 = INT32_MIN;

	t65 = (x969<<(x970/(x971+x972)));

	if (t65 != 4) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x985 = UINT16_MAX;
	uint64_t x986 = 124188140143701LLU;
	volatile int16_t x987 = -1;
	static volatile int8_t x988 = INT8_MIN;
	volatile int32_t t66 = -8;

	t66 = (x985<<(x986/(x987+x988)));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x1005 = 0;
	int16_t x1006 = 6;
	static int16_t x1007 = 3;

	t67 = (x1005<<(x1006/(x1007+x1008)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x1013 = 59;
	static int16_t x1014 = INT16_MAX;
	int64_t x1015 = -1299593691491896931LL;
	volatile int64_t x1016 = INT64_MAX;
	static volatile int32_t t68 = -1911;

	t68 = (x1013<<(x1014/(x1015+x1016)));

	if (t68 != 59) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x1021 = 0U;
	int16_t x1022 = INT16_MAX;
	uint32_t x1023 = 1U;
	uint32_t x1024 = 230170U;
	int32_t t69 = -28;

	t69 = (x1021<<(x1022/(x1023+x1024)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x1033 = 3;
	uint8_t x1034 = 12U;
	int64_t x1035 = INT64_MIN;
	int32_t x1036 = 6483327;

	t70 = (x1033<<(x1034/(x1035+x1036)));

	if (t70 != 3) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x1049 = 852099507U;
	static uint8_t x1050 = UINT8_MAX;
	volatile uint32_t x1051 = 39149088U;
	int16_t x1052 = 22;
	uint32_t t71 = 130U;

	t71 = (x1049<<(x1050/(x1051+x1052)));

	if (t71 != 852099507U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x1054 = 0;
	int64_t x1055 = INT64_MAX;
	static volatile int64_t x1056 = INT64_MIN;
	static int64_t t72 = INT64_MAX;

	t72 = (x1053<<(x1054/(x1055+x1056)));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x1081 = 898811279U;
	volatile int16_t x1082 = -1;
	uint8_t x1083 = 6U;
	static int32_t x1084 = INT32_MIN;
	volatile uint32_t t73 = 20U;

	t73 = (x1081<<(x1082/(x1083+x1084)));

	if (t73 != 898811279U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1099 = -3;
	static int16_t x1100 = INT16_MIN;
	uint64_t t74 = 2135982222465577LLU;

	t74 = (x1097<<(x1098/(x1099+x1100)));

	if (t74 != 209046740455LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x1116 = INT8_MIN;
	volatile int32_t t75 = -450774;

	t75 = (x1113<<(x1114/(x1115+x1116)));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x1117 = 48U;
	volatile uint16_t x1118 = 5U;
	int8_t x1119 = -1;
	int16_t x1120 = INT16_MAX;
	volatile uint32_t t76 = 641771418U;

	t76 = (x1117<<(x1118/(x1119+x1120)));

	if (t76 != 48U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1133 = UINT8_MAX;
	int16_t x1134 = INT16_MAX;
	int16_t x1135 = INT16_MIN;
	static uint64_t x1136 = 1090909940LLU;

	t77 = (x1133<<(x1134/(x1135+x1136)));

	if (t77 != 255) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x1157 = INT16_MAX;
	uint64_t x1160 = UINT64_MAX;
	int32_t t78 = 0;

	t78 = (x1157<<(x1158/(x1159+x1160)));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x1169 = INT8_MAX;
	int8_t x1170 = INT8_MIN;
	int32_t x1172 = -248227059;
	int32_t t79 = -12392249;

	t79 = (x1169<<(x1170/(x1171+x1172)));

	if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x1178 = 4552LLU;
	int16_t x1179 = INT16_MIN;
	int16_t x1180 = INT16_MAX;

	t80 = (x1177<<(x1178/(x1179+x1180)));

	if (t80 != 339) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x1199 = 34268613626955LL;
	int16_t x1200 = INT16_MAX;
	volatile int32_t t81 = 1458310;

	t81 = (x1197<<(x1198/(x1199+x1200)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x1217 = 20081U;
	int8_t x1218 = -1;
	uint32_t x1219 = 3U;
	int32_t x1220 = -1611;

	t82 = (x1217<<(x1218/(x1219+x1220)));

	if (t82 != 40162) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x1238 = 23277;
	int64_t x1239 = INT64_MIN;
	volatile int32_t t83 = -2195103;

	t83 = (x1237<<(x1238/(x1239+x1240)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x1241 = 893419626LLU;
	uint8_t x1242 = 3U;
	int8_t x1243 = INT8_MIN;
	volatile uint64_t t84 = 3736626301096LLU;

	t84 = (x1241<<(x1242/(x1243+x1244)));

	if (t84 != 893419626LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x1247 = INT16_MIN;
	uint64_t t85 = 2LLU;

	t85 = (x1245<<(x1246/(x1247+x1248)));

	if (t85 != 404243LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x1257 = INT64_MAX;
	int32_t x1258 = -1;
	static int64_t x1260 = -1550820129546938511LL;
	volatile int64_t t86 = INT64_MAX;

	t86 = (x1257<<(x1258/(x1259+x1260)));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x1265 = 135;
	int16_t x1266 = INT16_MIN;
	int64_t x1267 = -128677LL;
	int32_t x1268 = INT32_MAX;
	static int32_t t87 = 225803;

	t87 = (x1265<<(x1266/(x1267+x1268)));

	if (t87 != 135) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x1297 = UINT32_MAX;
	int16_t x1298 = 79;
	volatile int64_t x1299 = INT64_MIN;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x1297<<(x1298/(x1299+x1300)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1305 = 16473U;
	int16_t x1307 = -247;
	int32_t x1308 = -404906675;

	t89 = (x1305<<(x1306/(x1307+x1308)));

	if (t89 != 16473) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x1313 = 3;
	static uint64_t x1314 = 8221077671LLU;
	volatile int32_t t90 = 13628;

	t90 = (x1313<<(x1314/(x1315+x1316)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x1325 = 653371189822463529LLU;
	static uint16_t x1326 = 1U;
	uint64_t x1328 = UINT64_MAX;
	uint64_t t91 = 73907029432LLU;

	t91 = (x1325<<(x1326/(x1327+x1328)));

	if (t91 != 653371189822463529LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x1333 = 6;
	int8_t x1334 = INT8_MIN;
	int32_t x1335 = INT32_MIN;
	static volatile int64_t x1336 = INT64_MAX;
	volatile int32_t t92 = -2542289;

	t92 = (x1333<<(x1334/(x1335+x1336)));

	if (t92 != 6) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x1341 = INT64_MAX;
	volatile int32_t x1342 = 289;
	static volatile int16_t x1343 = INT16_MIN;
	static volatile int16_t x1344 = -2;
	static int64_t t93 = INT64_MAX;

	t93 = (x1341<<(x1342/(x1343+x1344)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x1345 = UINT16_MAX;
	int32_t x1346 = -642752;
	volatile int32_t x1347 = INT32_MIN;
	uint8_t x1348 = 70U;

	t94 = (x1345<<(x1346/(x1347+x1348)));

	if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x1349 = INT32_MAX;
	volatile int32_t x1350 = -1;
	int32_t x1351 = -560;
	volatile int8_t x1352 = INT8_MIN;
	volatile int32_t t95 = INT32_MAX;

	t95 = (x1349<<(x1350/(x1351+x1352)));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1353 = 42;
	static int8_t x1354 = INT8_MIN;
	int32_t x1355 = INT32_MIN;
	int32_t x1356 = 0;
	int32_t t96 = -14582088;

	t96 = (x1353<<(x1354/(x1355+x1356)));

	if (t96 != 42) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x1367 = 8806912955309954LLU;
	volatile int64_t x1368 = INT64_MIN;

	t97 = (x1365<<(x1366/(x1367+x1368)));

	if (t97 != 52128LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1379 = 101521LL;
	volatile int32_t t98 = 8263448;

	t98 = (x1377<<(x1378/(x1379+x1380)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x1425 = 29U;
	volatile uint32_t x1426 = 93899U;
	int32_t x1427 = -1;
	uint64_t x1428 = UINT64_MAX;

	t99 = (x1425<<(x1426/(x1427+x1428)));

	if (t99 != 29) { NG(); } else { ; }
	
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

