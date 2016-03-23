
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x80 = INT8_MAX;
int8_t x86 = INT8_MIN;
volatile int16_t x125 = INT16_MAX;
int64_t x219 = 20LL;
uint8_t x323 = 0U;
int16_t x325 = -1;
volatile uint16_t x436 = 14U;
uint16_t x502 = 101U;
int16_t x504 = 112;
static int16_t x585 = -1;
int16_t x626 = 1;
volatile int32_t t16 = 47405;
static int32_t t19 = -510879081;
uint8_t x843 = 3U;
uint8_t x844 = UINT8_MAX;
volatile int32_t t21 = -2;
uint32_t x875 = 3U;
uint8_t x899 = 14U;
uint16_t x935 = 0U;
int16_t x948 = INT16_MIN;
int32_t x952 = 1981;
int16_t x987 = 10;
int64_t x1054 = 447939741548LL;
static int8_t x1076 = -1;
uint16_t x1103 = 7U;
uint64_t x1126 = 3039174LLU;
int8_t x1205 = -1;
volatile uint8_t x1328 = 5U;
int8_t x1354 = -1;
static int64_t t39 = -3746582LL;
volatile uint16_t x1400 = 11U;
volatile int32_t t40 = -333451;
volatile int8_t x1428 = INT8_MIN;
volatile int64_t x1517 = -1LL;
int8_t x1519 = 1;
uint16_t x1563 = 26U;
volatile int64_t x1601 = -1LL;
int64_t x1602 = -1LL;
volatile int16_t x1603 = 4;
uint8_t x1610 = 0U;
int16_t x1624 = INT16_MAX;
int32_t t52 = -1741813;
uint32_t x1720 = 4171U;
uint8_t x1791 = 9U;
volatile uint8_t x2016 = 1U;
int16_t x2177 = -1;
int64_t x2180 = INT64_MAX;
int32_t t58 = -30076096;
volatile int32_t x2250 = INT32_MIN;
int32_t t59 = -5;
int32_t x2258 = INT32_MIN;
static int32_t x2273 = -173;
int64_t x2320 = -5914861087260592LL;
static volatile uint32_t x2360 = UINT32_MAX;
uint32_t t63 = 52U;
int32_t t64 = -117;
int16_t x2473 = -1;
int16_t x2481 = INT16_MIN;
uint8_t x2482 = 97U;
static uint16_t x2484 = 72U;
static volatile uint32_t x2523 = 0U;
int64_t t71 = 3889309190259868LL;
static int32_t x2593 = -1;
volatile int32_t t73 = 716;
int32_t x2837 = INT32_MIN;
static int32_t t75 = 2200;
int8_t x2889 = -1;
volatile int32_t x2890 = -1;
int16_t x2891 = 2;
static volatile int32_t t77 = 3;
uint64_t x2903 = 6LLU;
volatile uint32_t x2997 = 13U;
int64_t x2998 = INT64_MIN;
int64_t t80 = -54LL;
static uint16_t x3050 = 53U;
int8_t x3190 = INT8_MIN;
int32_t t83 = 561;
int16_t x3223 = 1;
volatile uint32_t x3268 = UINT32_MAX;
volatile uint32_t t85 = 131243545U;
uint32_t x3309 = UINT32_MAX;
uint64_t x3310 = 3840LLU;
int32_t t87 = -158951;
int8_t x3351 = 9;
volatile int8_t x3458 = 1;
volatile int8_t x3460 = INT8_MAX;
uint32_t x3461 = UINT32_MAX;
int64_t t96 = -3LL;
int64_t x3540 = INT64_MIN;
static uint32_t x3572 = 1U;
static volatile uint32_t t98 = 333089028U;
uint16_t x3607 = 8U;
static volatile uint16_t x3635 = 29U;
static volatile int32_t t101 = -1031975259;
uint16_t x3709 = 7252U;
uint64_t x3710 = 979689499LLU;
int64_t x3714 = -1LL;
int8_t x3715 = 1;
volatile int16_t x3802 = 3753;
uint64_t x3905 = UINT64_MAX;
volatile uint64_t x3906 = 234610LLU;
uint8_t x3995 = 0U;
int32_t x4053 = -40515186;
static volatile uint16_t x4056 = 969U;
int32_t t114 = 67;
uint16_t x4175 = 0U;
int64_t x4188 = -130LL;
int64_t t118 = -5228475LL;
int8_t x4231 = 1;
uint32_t x4232 = 5424U;
int64_t x4246 = -1593801LL;
uint16_t x4325 = UINT16_MAX;
uint8_t x4383 = 3U;
uint64_t x4384 = UINT64_MAX;
int32_t x4557 = INT32_MIN;
int8_t x4650 = 44;
static int32_t x4652 = INT32_MAX;
volatile int8_t x4777 = -1;
volatile int32_t x4778 = INT32_MIN;
int32_t x4792 = INT32_MAX;
volatile int32_t t130 = 1;
int64_t x4905 = INT64_MIN;
volatile int32_t x4906 = INT32_MIN;
int8_t x4907 = 1;
uint8_t x4947 = 30U;
int8_t x4948 = 16;
volatile int32_t t132 = 13899;
int64_t x4962 = -6042350LL;
uint8_t x4963 = 0U;
int8_t x4964 = -1;
uint16_t x4997 = 732U;
volatile int64_t x5053 = -55010651LL;
uint8_t x5073 = 30U;
int16_t x5074 = INT16_MIN;
static volatile uint16_t x5075 = 1U;
static uint64_t x5145 = UINT64_MAX;
int32_t x5146 = INT32_MIN;
int8_t x5147 = 1;
volatile int32_t t137 = 55433693;
int8_t x5183 = 0;
int16_t x5197 = 3;
volatile int32_t x5264 = -1;
volatile int32_t t142 = 1128136;
int8_t x5272 = INT8_MIN;
volatile int16_t x5307 = 0;
uint64_t x5308 = 246656LLU;
int32_t x5417 = INT32_MAX;
int64_t x5453 = INT64_MAX;
int8_t x5486 = -1;
static uint8_t x5488 = UINT8_MAX;
uint64_t x5552 = 15696635749388LLU;
static volatile uint32_t x5629 = 639U;
volatile int32_t x5632 = -1;
uint16_t x5646 = 3114U;
int16_t x5772 = INT16_MIN;
int64_t t157 = -725930605938668789LL;
volatile uint8_t x5827 = 22U;
int32_t t158 = 42766;
volatile int8_t x5868 = -1;
volatile uint8_t x5893 = 0U;
int8_t x5963 = 3;
int32_t t162 = 1882;
int64_t x6105 = -16270LL;
int16_t x6108 = -1;
int64_t x6185 = -1LL;
uint16_t x6187 = 1U;
int8_t x6188 = 6;
uint16_t x6241 = UINT16_MAX;
uint32_t x6244 = 1409U;
static int8_t x6316 = -1;
volatile int32_t t173 = -2577;
int8_t x6423 = 1;
uint8_t x6424 = UINT8_MAX;
volatile int32_t t175 = -31;
volatile int32_t t177 = -436;
static volatile int16_t x6584 = INT16_MAX;
uint8_t x6627 = 9U;
int8_t x6628 = -1;
volatile int8_t x6630 = 0;
static volatile int64_t x6631 = 0LL;
int64_t x6709 = INT64_MIN;
int8_t x6711 = 0;
int8_t x6742 = INT8_MIN;
int8_t x6752 = 1;
int32_t t184 = -1;
volatile int32_t t188 = 15587351;
volatile int64_t x7073 = -34604531756192181LL;
int64_t x7074 = -19705824LL;
int64_t x7190 = -3470461956185425094LL;
uint8_t x7213 = UINT8_MAX;
int32_t x7217 = INT32_MIN;
volatile int8_t x7229 = 0;
static int32_t t194 = -3287223;
volatile int64_t t195 = -1LL;
uint8_t x7287 = 1U;
static int64_t x7288 = INT64_MIN;
volatile int64_t x7290 = 1052603228161LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	volatile int8_t x2 = INT8_MIN;
	static uint8_t x3 = 25U;
	volatile int32_t x4 = INT32_MIN;
	int32_t t0 = 50;

    t0 = (((x1!=x2)>>x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x41 = -7;
	uint16_t x42 = 8924U;
	uint16_t x43 = 0U;
	static int16_t x44 = INT16_MIN;
	int32_t t1 = 186509694;

    t1 = (((x41!=x42)>>x43)%x44);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x77 = INT32_MAX;
	int16_t x78 = -1;
	volatile uint64_t x79 = 1LLU;
	volatile int32_t t2 = 0;

    t2 = (((x77!=x78)>>x79)%x80);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x85 = -1;
	int8_t x87 = 0;
	int64_t x88 = INT64_MAX;
	int64_t t3 = 13269135518LL;

    t3 = (((x85!=x86)>>x87)%x88);

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x126 = 6U;
	static int8_t x127 = 0;
	int8_t x128 = -23;
	volatile int32_t t4 = -305755;

    t4 = (((x125!=x126)>>x127)%x128);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x217 = 18;
	volatile int32_t x218 = INT32_MIN;
	int64_t x220 = INT64_MAX;
	volatile int64_t t5 = 602398178682LL;

    t5 = (((x217!=x218)>>x219)%x220);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x321 = 286874740710185172LLU;
	int8_t x322 = INT8_MIN;
	int32_t x324 = INT32_MIN;
	int32_t t6 = 8547;

    t6 = (((x321!=x322)>>x323)%x324);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x326 = -1;
	uint16_t x327 = 1U;
	int16_t x328 = INT16_MIN;
	int32_t t7 = 861174;

    t7 = (((x325!=x326)>>x327)%x328);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x337 = -1;
	volatile int8_t x338 = 4;
	static int8_t x339 = 9;
	static int8_t x340 = 1;
	int32_t t8 = 350707;

    t8 = (((x337!=x338)>>x339)%x340);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	uint8_t x379 = 2U;
	int8_t x380 = 1;
	int32_t t9 = 3185;

    t9 = (((x377!=x378)>>x379)%x380);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x429 = -62334LL;
	int16_t x430 = -1;
	static volatile uint32_t x431 = 5U;
	int8_t x432 = INT8_MIN;
	static volatile int32_t t10 = -3965;

    t10 = (((x429!=x430)>>x431)%x432);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x433 = -13;
	static int8_t x434 = INT8_MIN;
	uint8_t x435 = 6U;
	int32_t t11 = 0;

    t11 = (((x433!=x434)>>x435)%x436);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x501 = INT8_MAX;
	volatile uint8_t x503 = 3U;
	int32_t t12 = 11417;

    t12 = (((x501!=x502)>>x503)%x504);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x586 = -50;
	static volatile uint16_t x587 = 0U;
	static int32_t x588 = 413355;
	volatile int32_t t13 = 3839204;

    t13 = (((x585!=x586)>>x587)%x588);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x601 = 1944905497U;
	int64_t x602 = INT64_MIN;
	uint32_t x603 = 5U;
	volatile int32_t x604 = INT32_MIN;
	int32_t t14 = -50537563;

    t14 = (((x601!=x602)>>x603)%x604);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x617 = UINT32_MAX;
	int16_t x618 = -1;
	uint8_t x619 = 14U;
	int8_t x620 = -12;
	int32_t t15 = 0;

    t15 = (((x617!=x618)>>x619)%x620);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x625 = 415LL;
	static uint8_t x627 = 8U;
	int16_t x628 = INT16_MIN;

    t16 = (((x625!=x626)>>x627)%x628);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x717 = INT8_MIN;
	static volatile uint32_t x718 = 508401U;
	int32_t x719 = 1;
	uint8_t x720 = 1U;
	int32_t t17 = 109667;

    t17 = (((x717!=x718)>>x719)%x720);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x785 = -1LL;
	static volatile int64_t x786 = -1LL;
	uint8_t x787 = 2U;
	volatile int64_t x788 = INT64_MAX;
	int64_t t18 = 477231690LL;

    t18 = (((x785!=x786)>>x787)%x788);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x793 = INT16_MIN;
	volatile uint8_t x794 = 0U;
	uint8_t x795 = 15U;
	static int32_t x796 = 457551457;

    t19 = (((x793!=x794)>>x795)%x796);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x833 = 4451LLU;
	int64_t x834 = INT64_MAX;
	int8_t x835 = 2;
	int16_t x836 = INT16_MIN;
	int32_t t20 = 586855;

    t20 = (((x833!=x834)>>x835)%x836);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x841 = INT64_MIN;
	static int16_t x842 = 345;

    t21 = (((x841!=x842)>>x843)%x844);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x857 = 7U;
	int16_t x858 = -1;
	int8_t x859 = 11;
	volatile int16_t x860 = INT16_MIN;
	volatile int32_t t22 = -33;

    t22 = (((x857!=x858)>>x859)%x860);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x873 = -1;
	static int16_t x874 = INT16_MAX;
	static int16_t x876 = -1;
	volatile int32_t t23 = 55;

    t23 = (((x873!=x874)>>x875)%x876);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x881 = -2723920410047093LL;
	int64_t x882 = 2122472515878LL;
	int32_t x883 = 15;
	static int8_t x884 = INT8_MAX;
	int32_t t24 = -2476;

    t24 = (((x881!=x882)>>x883)%x884);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x897 = INT16_MIN;
	static int16_t x898 = -1;
	uint16_t x900 = UINT16_MAX;
	volatile int32_t t25 = 43;

    t25 = (((x897!=x898)>>x899)%x900);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x933 = UINT32_MAX;
	int16_t x934 = INT16_MIN;
	int64_t x936 = -1LL;
	int64_t t26 = -197721747497LL;

    t26 = (((x933!=x934)>>x935)%x936);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x945 = UINT64_MAX;
	int8_t x946 = INT8_MIN;
	int8_t x947 = 12;
	int32_t t27 = 853;

    t27 = (((x945!=x946)>>x947)%x948);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x949 = -9705177787688LL;
	static int16_t x950 = -4052;
	uint8_t x951 = 14U;
	int32_t t28 = -44;

    t28 = (((x949!=x950)>>x951)%x952);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x981 = UINT64_MAX;
	int8_t x982 = INT8_MIN;
	int8_t x983 = 0;
	int64_t x984 = INT64_MIN;
	int64_t t29 = 0LL;

    t29 = (((x981!=x982)>>x983)%x984);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int64_t x985 = INT64_MIN;
	int64_t x986 = 77942LL;
	uint8_t x988 = 13U;
	volatile int32_t t30 = -419402851;

    t30 = (((x985!=x986)>>x987)%x988);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x1053 = 5;
	int8_t x1055 = 12;
	volatile uint64_t x1056 = 1174692363LLU;
	uint64_t t31 = 103525576LLU;

    t31 = (((x1053!=x1054)>>x1055)%x1056);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x1073 = 33U;
	int32_t x1074 = -1;
	int8_t x1075 = 5;
	volatile int32_t t32 = -2534735;

    t32 = (((x1073!=x1074)>>x1075)%x1076);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x1101 = UINT16_MAX;
	uint16_t x1102 = 10U;
	uint32_t x1104 = 1788435803U;
	uint32_t t33 = 1645U;

    t33 = (((x1101!=x1102)>>x1103)%x1104);

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x1125 = 10;
	uint8_t x1127 = 6U;
	int16_t x1128 = -54;
	int32_t t34 = -50;

    t34 = (((x1125!=x1126)>>x1127)%x1128);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x1206 = INT8_MAX;
	uint8_t x1207 = 7U;
	static int16_t x1208 = 2863;
	static int32_t t35 = 1997265;

    t35 = (((x1205!=x1206)>>x1207)%x1208);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x1217 = -1;
	int32_t x1218 = INT32_MAX;
	int8_t x1219 = 1;
	uint64_t x1220 = 1680LLU;
	volatile uint64_t t36 = 25304LLU;

    t36 = (((x1217!=x1218)>>x1219)%x1220);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x1325 = -1;
	static int16_t x1326 = -1;
	static uint64_t x1327 = 9LLU;
	static int32_t t37 = -3;

    t37 = (((x1325!=x1326)>>x1327)%x1328);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x1353 = INT8_MAX;
	uint8_t x1355 = 24U;
	int16_t x1356 = -1;
	static int32_t t38 = 15;

    t38 = (((x1353!=x1354)>>x1355)%x1356);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x1389 = 0;
	static volatile uint16_t x1390 = 51U;
	uint16_t x1391 = 1U;
	int64_t x1392 = INT64_MIN;

    t39 = (((x1389!=x1390)>>x1391)%x1392);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x1397 = -90;
	uint8_t x1398 = UINT8_MAX;
	uint16_t x1399 = 9U;

    t40 = (((x1397!=x1398)>>x1399)%x1400);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x1405 = 104924579427949LL;
	volatile int16_t x1406 = INT16_MIN;
	uint16_t x1407 = 1U;
	static uint64_t x1408 = UINT64_MAX;
	volatile uint64_t t41 = 6865002013285LLU;

    t41 = (((x1405!=x1406)>>x1407)%x1408);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x1425 = INT32_MIN;
	static int16_t x1426 = -1;
	uint32_t x1427 = 14U;
	int32_t t42 = -45410665;

    t42 = (((x1425!=x1426)>>x1427)%x1428);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x1518 = 20820726896LLU;
	static volatile int64_t x1520 = INT64_MAX;
	static volatile int64_t t43 = 0LL;

    t43 = (((x1517!=x1518)>>x1519)%x1520);

    if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x1537 = -1LL;
	int8_t x1538 = INT8_MIN;
	int8_t x1539 = 20;
	static uint16_t x1540 = UINT16_MAX;
	int32_t t44 = 10375661;

    t44 = (((x1537!=x1538)>>x1539)%x1540);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x1561 = UINT64_MAX;
	volatile int32_t x1562 = 6263574;
	int8_t x1564 = INT8_MIN;
	static volatile int32_t t45 = 104;

    t45 = (((x1561!=x1562)>>x1563)%x1564);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x1593 = UINT32_MAX;
	int16_t x1594 = INT16_MAX;
	uint8_t x1595 = 13U;
	static uint16_t x1596 = 1152U;
	int32_t t46 = 68943988;

    t46 = (((x1593!=x1594)>>x1595)%x1596);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x1604 = -3LL;
	volatile int64_t t47 = 180187795LL;

    t47 = (((x1601!=x1602)>>x1603)%x1604);

    if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x1609 = 596462940;
	uint32_t x1611 = 2U;
	int32_t x1612 = -1;
	static volatile int32_t t48 = -50;

    t48 = (((x1609!=x1610)>>x1611)%x1612);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x1617 = -496073468;
	uint32_t x1618 = 37121508U;
	volatile uint64_t x1619 = 4LLU;
	int64_t x1620 = 1396252653LL;
	volatile int64_t t49 = -1891103350638LL;

    t49 = (((x1617!=x1618)>>x1619)%x1620);

    if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x1621 = 1U;
	int16_t x1622 = -2;
	uint16_t x1623 = 14U;
	int32_t t50 = -887680;

    t50 = (((x1621!=x1622)>>x1623)%x1624);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x1633 = INT16_MIN;
	volatile int64_t x1634 = INT64_MAX;
	static volatile uint32_t x1635 = 21U;
	uint16_t x1636 = 1U;
	volatile int32_t t51 = 575975;

    t51 = (((x1633!=x1634)>>x1635)%x1636);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x1665 = 84939479U;
	static int32_t x1666 = -1;
	volatile int16_t x1667 = 1;
	static volatile int16_t x1668 = INT16_MIN;

    t52 = (((x1665!=x1666)>>x1667)%x1668);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x1717 = -1;
	static uint32_t x1718 = UINT32_MAX;
	uint16_t x1719 = 5U;
	volatile uint32_t t53 = 31550183U;

    t53 = (((x1717!=x1718)>>x1719)%x1720);

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x1789 = 3678;
	int32_t x1790 = INT32_MIN;
	static volatile uint8_t x1792 = 116U;
	volatile int32_t t54 = 0;

    t54 = (((x1789!=x1790)>>x1791)%x1792);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x2013 = INT32_MAX;
	int8_t x2014 = INT8_MIN;
	volatile uint8_t x2015 = 8U;
	static int32_t t55 = 5095202;

    t55 = (((x2013!=x2014)>>x2015)%x2016);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x2178 = UINT32_MAX;
	uint8_t x2179 = 15U;
	static int64_t t56 = 4463962388635320416LL;

    t56 = (((x2177!=x2178)>>x2179)%x2180);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x2221 = INT16_MIN;
	static int32_t x2222 = 160;
	static int8_t x2223 = 1;
	int32_t x2224 = -1;
	volatile int32_t t57 = 478328619;

    t57 = (((x2221!=x2222)>>x2223)%x2224);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x2229 = INT32_MAX;
	int32_t x2230 = INT32_MAX;
	uint8_t x2231 = 1U;
	int16_t x2232 = INT16_MIN;

    t58 = (((x2229!=x2230)>>x2231)%x2232);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x2249 = INT8_MIN;
	static volatile uint16_t x2251 = 3U;
	int16_t x2252 = INT16_MIN;

    t59 = (((x2249!=x2250)>>x2251)%x2252);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x2257 = 52417LLU;
	volatile int8_t x2259 = 8;
	uint16_t x2260 = 8652U;
	static volatile int32_t t60 = -11681188;

    t60 = (((x2257!=x2258)>>x2259)%x2260);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x2274 = -1;
	int16_t x2275 = 1;
	static int16_t x2276 = -106;
	int32_t t61 = -8;

    t61 = (((x2273!=x2274)>>x2275)%x2276);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x2317 = 13569U;
	volatile int8_t x2318 = -1;
	uint8_t x2319 = 0U;
	int64_t t62 = 925054110LL;

    t62 = (((x2317!=x2318)>>x2319)%x2320);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x2357 = INT64_MIN;
	int64_t x2358 = -907150053407556LL;
	int8_t x2359 = 1;

    t63 = (((x2357!=x2358)>>x2359)%x2360);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x2369 = INT8_MIN;
	uint16_t x2370 = 318U;
	volatile uint32_t x2371 = 0U;
	int8_t x2372 = 8;

    t64 = (((x2369!=x2370)>>x2371)%x2372);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x2445 = INT32_MIN;
	int64_t x2446 = INT64_MAX;
	uint8_t x2447 = 1U;
	uint16_t x2448 = 30U;
	int32_t t65 = 2;

    t65 = (((x2445!=x2446)>>x2447)%x2448);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x2469 = 4U;
	int8_t x2470 = INT8_MIN;
	volatile uint32_t x2471 = 20U;
	static int16_t x2472 = 373;
	int32_t t66 = -11087;

    t66 = (((x2469!=x2470)>>x2471)%x2472);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint64_t x2474 = UINT64_MAX;
	int8_t x2475 = 0;
	volatile int32_t x2476 = 1;
	int32_t t67 = -112;

    t67 = (((x2473!=x2474)>>x2475)%x2476);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x2483 = 0;
	static int32_t t68 = 471301;

    t68 = (((x2481!=x2482)>>x2483)%x2484);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x2517 = -1;
	static int16_t x2518 = INT16_MIN;
	int16_t x2519 = 0;
	volatile int8_t x2520 = INT8_MAX;
	int32_t t69 = 1;

    t69 = (((x2517!=x2518)>>x2519)%x2520);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x2521 = INT64_MIN;
	uint32_t x2522 = 105267U;
	uint16_t x2524 = UINT16_MAX;
	int32_t t70 = 317595747;

    t70 = (((x2521!=x2522)>>x2523)%x2524);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x2545 = INT32_MIN;
	uint16_t x2546 = UINT16_MAX;
	volatile int16_t x2547 = 1;
	int64_t x2548 = INT64_MIN;

    t71 = (((x2545!=x2546)>>x2547)%x2548);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x2594 = INT64_MIN;
	uint8_t x2595 = 0U;
	uint32_t x2596 = 56715U;
	uint32_t t72 = 842022796U;

    t72 = (((x2593!=x2594)>>x2595)%x2596);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x2669 = UINT8_MAX;
	static volatile int8_t x2670 = INT8_MAX;
	uint8_t x2671 = 11U;
	int32_t x2672 = INT32_MAX;

    t73 = (((x2669!=x2670)>>x2671)%x2672);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x2838 = INT16_MIN;
	static uint16_t x2839 = 6U;
	int32_t x2840 = -23;
	volatile int32_t t74 = 87575244;

    t74 = (((x2837!=x2838)>>x2839)%x2840);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x2861 = -1;
	uint32_t x2862 = UINT32_MAX;
	uint8_t x2863 = 5U;
	static volatile int16_t x2864 = INT16_MIN;

    t75 = (((x2861!=x2862)>>x2863)%x2864);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x2881 = 4U;
	int64_t x2882 = INT64_MAX;
	uint16_t x2883 = 0U;
	volatile uint32_t x2884 = 637U;
	volatile uint32_t t76 = 7U;

    t76 = (((x2881!=x2882)>>x2883)%x2884);

    if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x2892 = 1;

    t77 = (((x2889!=x2890)>>x2891)%x2892);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x2901 = 3U;
	int8_t x2902 = -10;
	int16_t x2904 = -190;
	volatile int32_t t78 = 229009;

    t78 = (((x2901!=x2902)>>x2903)%x2904);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x2937 = INT16_MAX;
	uint64_t x2938 = 1606393866904LLU;
	int8_t x2939 = 1;
	int32_t x2940 = -1;
	volatile int32_t t79 = -363337;

    t79 = (((x2937!=x2938)>>x2939)%x2940);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x2999 = 1;
	int64_t x3000 = -720038971366LL;

    t80 = (((x2997!=x2998)>>x2999)%x3000);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x3049 = UINT16_MAX;
	volatile uint8_t x3051 = 30U;
	int16_t x3052 = -1;
	volatile int32_t t81 = 87296504;

    t81 = (((x3049!=x3050)>>x3051)%x3052);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x3065 = -966168887463654392LL;
	uint16_t x3066 = 25432U;
	int8_t x3067 = 0;
	static uint8_t x3068 = UINT8_MAX;
	volatile int32_t t82 = -239622115;

    t82 = (((x3065!=x3066)>>x3067)%x3068);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x3189 = UINT64_MAX;
	uint8_t x3191 = 1U;
	static int32_t x3192 = -922619;

    t83 = (((x3189!=x3190)>>x3191)%x3192);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x3221 = INT8_MIN;
	int16_t x3222 = -1875;
	int64_t x3224 = -17116893147580LL;
	int64_t t84 = -26732188LL;

    t84 = (((x3221!=x3222)>>x3223)%x3224);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x3265 = -1LL;
	int8_t x3266 = INT8_MIN;
	static uint8_t x3267 = 27U;

    t85 = (((x3265!=x3266)>>x3267)%x3268);

    if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x3273 = -1;
	int64_t x3274 = INT64_MIN;
	uint8_t x3275 = 15U;
	int16_t x3276 = INT16_MIN;
	volatile int32_t t86 = 9922;

    t86 = (((x3273!=x3274)>>x3275)%x3276);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x3311 = 14;
	static int8_t x3312 = 1;

    t87 = (((x3309!=x3310)>>x3311)%x3312);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x3313 = 13062U;
	static volatile uint64_t x3314 = 5668327LLU;
	uint8_t x3315 = 26U;
	uint16_t x3316 = 49U;
	static volatile int32_t t88 = 7;

    t88 = (((x3313!=x3314)>>x3315)%x3316);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x3317 = INT8_MIN;
	uint64_t x3318 = 58410LLU;
	uint8_t x3319 = 4U;
	uint16_t x3320 = 180U;
	volatile int32_t t89 = -219;

    t89 = (((x3317!=x3318)>>x3319)%x3320);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x3349 = -3564;
	volatile uint64_t x3350 = 36956140840521LLU;
	int64_t x3352 = INT64_MIN;
	int64_t t90 = -20LL;

    t90 = (((x3349!=x3350)>>x3351)%x3352);

    if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x3413 = UINT16_MAX;
	int64_t x3414 = INT64_MIN;
	uint8_t x3415 = 25U;
	int8_t x3416 = 24;
	volatile int32_t t91 = -814985437;

    t91 = (((x3413!=x3414)>>x3415)%x3416);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x3429 = UINT64_MAX;
	uint64_t x3430 = 98645621LLU;
	int8_t x3431 = 3;
	static int32_t x3432 = -1;
	int32_t t92 = 102;

    t92 = (((x3429!=x3430)>>x3431)%x3432);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x3457 = -118948;
	volatile int32_t x3459 = 28;
	int32_t t93 = -302;

    t93 = (((x3457!=x3458)>>x3459)%x3460);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x3462 = 1;
	volatile uint8_t x3463 = 0U;
	int64_t x3464 = INT64_MIN;
	int64_t t94 = -104696116392090LL;

    t94 = (((x3461!=x3462)>>x3463)%x3464);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x3505 = INT16_MAX;
	int32_t x3506 = -15;
	uint8_t x3507 = 6U;
	uint32_t x3508 = UINT32_MAX;
	uint32_t t95 = 0U;

    t95 = (((x3505!=x3506)>>x3507)%x3508);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x3529 = INT8_MAX;
	static int16_t x3530 = 2;
	static int16_t x3531 = 0;
	static int64_t x3532 = INT64_MIN;

    t96 = (((x3529!=x3530)>>x3531)%x3532);

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x3537 = 228;
	static int16_t x3538 = -1;
	static uint64_t x3539 = 3LLU;
	volatile int64_t t97 = 913825738356103683LL;

    t97 = (((x3537!=x3538)>>x3539)%x3540);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x3569 = INT64_MIN;
	static int64_t x3570 = -3685LL;
	int16_t x3571 = 5;

    t98 = (((x3569!=x3570)>>x3571)%x3572);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x3605 = INT8_MIN;
	int64_t x3606 = -29224156LL;
	int32_t x3608 = INT32_MIN;
	volatile int32_t t99 = 4988;

    t99 = (((x3605!=x3606)>>x3607)%x3608);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x3617 = INT16_MIN;
	int32_t x3618 = INT32_MIN;
	uint8_t x3619 = 15U;
	uint16_t x3620 = 387U;
	int32_t t100 = -20651;

    t100 = (((x3617!=x3618)>>x3619)%x3620);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x3633 = 166550972218446LLU;
	int8_t x3634 = INT8_MAX;
	volatile int16_t x3636 = INT16_MIN;

    t101 = (((x3633!=x3634)>>x3635)%x3636);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x3657 = 774014LL;
	uint32_t x3658 = UINT32_MAX;
	volatile uint16_t x3659 = 7U;
	static uint64_t x3660 = UINT64_MAX;
	static volatile uint64_t t102 = 6084054144813LLU;

    t102 = (((x3657!=x3658)>>x3659)%x3660);

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x3711 = 15;
	volatile int16_t x3712 = INT16_MAX;
	volatile int32_t t103 = 16740441;

    t103 = (((x3709!=x3710)>>x3711)%x3712);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x3713 = INT16_MIN;
	uint64_t x3716 = 185452413339997LLU;
	volatile uint64_t t104 = 4327733LLU;

    t104 = (((x3713!=x3714)>>x3715)%x3716);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x3729 = -1;
	int8_t x3730 = INT8_MAX;
	uint32_t x3731 = 6U;
	static uint32_t x3732 = 26357U;
	volatile uint32_t t105 = 13U;

    t105 = (((x3729!=x3730)>>x3731)%x3732);

    if (t105 != 0U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x3801 = INT8_MAX;
	uint64_t x3803 = 2LLU;
	volatile int8_t x3804 = -14;
	static int32_t t106 = 17;

    t106 = (((x3801!=x3802)>>x3803)%x3804);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x3821 = INT8_MIN;
	int8_t x3822 = -1;
	uint16_t x3823 = 0U;
	uint64_t x3824 = UINT64_MAX;
	uint64_t t107 = 78063LLU;

    t107 = (((x3821!=x3822)>>x3823)%x3824);

    if (t107 != 1LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x3873 = INT8_MIN;
	static int16_t x3874 = -2364;
	int64_t x3875 = 2LL;
	static int64_t x3876 = INT64_MAX;
	static volatile int64_t t108 = -4155677845LL;

    t108 = (((x3873!=x3874)>>x3875)%x3876);

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint64_t x3907 = 8LLU;
	int32_t x3908 = -1;
	static volatile int32_t t109 = 68298998;

    t109 = (((x3905!=x3906)>>x3907)%x3908);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x3981 = INT64_MAX;
	static volatile uint8_t x3982 = 96U;
	int8_t x3983 = 3;
	volatile uint64_t x3984 = 1234422114LLU;
	volatile uint64_t t110 = 19288835788416LLU;

    t110 = (((x3981!=x3982)>>x3983)%x3984);

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x3993 = INT32_MAX;
	int16_t x3994 = -15835;
	int32_t x3996 = 4;
	volatile int32_t t111 = 349074467;

    t111 = (((x3993!=x3994)>>x3995)%x3996);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint8_t x4005 = UINT8_MAX;
	int32_t x4006 = INT32_MIN;
	int8_t x4007 = 0;
	static uint32_t x4008 = 8698314U;
	uint32_t t112 = 101937U;

    t112 = (((x4005!=x4006)>>x4007)%x4008);

    if (t112 != 1U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x4054 = INT8_MIN;
	int8_t x4055 = 0;
	static int32_t t113 = -52455;

    t113 = (((x4053!=x4054)>>x4055)%x4056);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x4141 = 103053733371LLU;
	int64_t x4142 = INT64_MIN;
	int32_t x4143 = 1;
	int32_t x4144 = INT32_MIN;

    t114 = (((x4141!=x4142)>>x4143)%x4144);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x4173 = -1325;
	uint32_t x4174 = 7U;
	uint64_t x4176 = UINT64_MAX;
	static volatile uint64_t t115 = 984719034617669LLU;

    t115 = (((x4173!=x4174)>>x4175)%x4176);

    if (t115 != 1LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x4177 = -1;
	int32_t x4178 = 312192601;
	volatile int8_t x4179 = 0;
	uint32_t x4180 = UINT32_MAX;
	uint32_t t116 = 1U;

    t116 = (((x4177!=x4178)>>x4179)%x4180);

    if (t116 != 1U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x4185 = -7;
	static uint16_t x4186 = UINT16_MAX;
	uint8_t x4187 = 30U;
	static int64_t t117 = -23459505468LL;

    t117 = (((x4185!=x4186)>>x4187)%x4188);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x4221 = -1;
	volatile int64_t x4222 = -14LL;
	int8_t x4223 = 14;
	int64_t x4224 = INT64_MIN;

    t118 = (((x4221!=x4222)>>x4223)%x4224);

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x4229 = 12;
	uint8_t x4230 = UINT8_MAX;
	volatile uint32_t t119 = 9U;

    t119 = (((x4229!=x4230)>>x4231)%x4232);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x4245 = 6LLU;
	static uint16_t x4247 = 13U;
	int64_t x4248 = INT64_MAX;
	volatile int64_t t120 = 40396LL;

    t120 = (((x4245!=x4246)>>x4247)%x4248);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x4326 = 336733LLU;
	static uint8_t x4327 = 20U;
	static volatile int16_t x4328 = INT16_MIN;
	volatile int32_t t121 = -10476;

    t121 = (((x4325!=x4326)>>x4327)%x4328);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x4345 = 2LLU;
	uint16_t x4346 = 382U;
	uint8_t x4347 = 15U;
	int16_t x4348 = INT16_MIN;
	int32_t t122 = 290;

    t122 = (((x4345!=x4346)>>x4347)%x4348);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x4357 = -469;
	int64_t x4358 = 4409531138396171LL;
	int32_t x4359 = 5;
	uint16_t x4360 = UINT16_MAX;
	static int32_t t123 = 304135;

    t123 = (((x4357!=x4358)>>x4359)%x4360);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x4361 = INT64_MIN;
	int32_t x4362 = -1;
	uint8_t x4363 = 14U;
	int32_t x4364 = INT32_MAX;
	volatile int32_t t124 = 1534;

    t124 = (((x4361!=x4362)>>x4363)%x4364);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x4381 = 1U;
	static uint32_t x4382 = 30006U;
	volatile uint64_t t125 = 2324421503706125LLU;

    t125 = (((x4381!=x4382)>>x4383)%x4384);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x4558 = 10344695815917LLU;
	int16_t x4559 = 3;
	volatile uint8_t x4560 = 81U;
	static int32_t t126 = 2414214;

    t126 = (((x4557!=x4558)>>x4559)%x4560);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x4649 = UINT64_MAX;
	uint8_t x4651 = 0U;
	volatile int32_t t127 = 41111;

    t127 = (((x4649!=x4650)>>x4651)%x4652);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x4765 = UINT8_MAX;
	int32_t x4766 = 366;
	static int16_t x4767 = 2;
	uint32_t x4768 = 833U;
	uint32_t t128 = 0U;

    t128 = (((x4765!=x4766)>>x4767)%x4768);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x4779 = 4U;
	static uint32_t x4780 = 55418844U;
	uint32_t t129 = 2U;

    t129 = (((x4777!=x4778)>>x4779)%x4780);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x4789 = INT16_MIN;
	int8_t x4790 = -2;
	uint8_t x4791 = 18U;

    t130 = (((x4789!=x4790)>>x4791)%x4792);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x4908 = INT8_MAX;
	int32_t t131 = 245795705;

    t131 = (((x4905!=x4906)>>x4907)%x4908);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x4945 = INT8_MIN;
	static uint16_t x4946 = 3589U;

    t132 = (((x4945!=x4946)>>x4947)%x4948);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x4961 = 1;
	volatile int32_t t133 = 1110;

    t133 = (((x4961!=x4962)>>x4963)%x4964);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x4998 = 0U;
	int16_t x4999 = 14;
	int16_t x5000 = -1;
	static int32_t t134 = -8078787;

    t134 = (((x4997!=x4998)>>x4999)%x5000);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x5054 = UINT16_MAX;
	uint8_t x5055 = 1U;
	uint32_t x5056 = UINT32_MAX;
	uint32_t t135 = 25U;

    t135 = (((x5053!=x5054)>>x5055)%x5056);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x5076 = -1;
	volatile int32_t t136 = 1551;

    t136 = (((x5073!=x5074)>>x5075)%x5076);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x5148 = -1;

    t137 = (((x5145!=x5146)>>x5147)%x5148);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x5181 = 30633;
	uint32_t x5182 = UINT32_MAX;
	int16_t x5184 = 88;
	volatile int32_t t138 = 7897183;

    t138 = (((x5181!=x5182)>>x5183)%x5184);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x5193 = INT16_MIN;
	int64_t x5194 = INT64_MIN;
	uint8_t x5195 = 7U;
	uint32_t x5196 = 55U;
	uint32_t t139 = 376U;

    t139 = (((x5193!=x5194)>>x5195)%x5196);

    if (t139 != 0U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x5198 = INT16_MIN;
	static volatile uint16_t x5199 = 0U;
	int32_t x5200 = INT32_MIN;
	volatile int32_t t140 = 28433;

    t140 = (((x5197!=x5198)>>x5199)%x5200);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x5221 = -1;
	int64_t x5222 = -1LL;
	static volatile uint8_t x5223 = 8U;
	uint32_t x5224 = 13U;
	volatile uint32_t t141 = 82747U;

    t141 = (((x5221!=x5222)>>x5223)%x5224);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x5261 = -1LL;
	static uint16_t x5262 = UINT16_MAX;
	static uint16_t x5263 = 31U;

    t142 = (((x5261!=x5262)>>x5263)%x5264);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x5269 = INT64_MAX;
	int16_t x5270 = 0;
	int8_t x5271 = 0;
	int32_t t143 = -4;

    t143 = (((x5269!=x5270)>>x5271)%x5272);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x5297 = -6;
	int32_t x5298 = INT32_MIN;
	int8_t x5299 = 0;
	int64_t x5300 = -236903621LL;
	int64_t t144 = -66438687412621122LL;

    t144 = (((x5297!=x5298)>>x5299)%x5300);

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x5305 = 1;
	uint64_t x5306 = 354LLU;
	volatile uint64_t t145 = 222525590808317899LLU;

    t145 = (((x5305!=x5306)>>x5307)%x5308);

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x5309 = 4U;
	static volatile int64_t x5310 = INT64_MIN;
	int32_t x5311 = 0;
	int16_t x5312 = INT16_MIN;
	volatile int32_t t146 = -1632;

    t146 = (((x5309!=x5310)>>x5311)%x5312);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x5337 = INT16_MIN;
	volatile int32_t x5338 = INT32_MIN;
	uint8_t x5339 = 0U;
	uint64_t x5340 = UINT64_MAX;
	uint64_t t147 = 4LLU;

    t147 = (((x5337!=x5338)>>x5339)%x5340);

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x5418 = UINT32_MAX;
	volatile int8_t x5419 = 0;
	int16_t x5420 = INT16_MIN;
	int32_t t148 = 152;

    t148 = (((x5417!=x5418)>>x5419)%x5420);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x5454 = -603968;
	int8_t x5455 = 0;
	int16_t x5456 = INT16_MIN;
	volatile int32_t t149 = -2733;

    t149 = (((x5453!=x5454)>>x5455)%x5456);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x5485 = INT16_MAX;
	volatile int8_t x5487 = 0;
	volatile int32_t t150 = 1069371164;

    t150 = (((x5485!=x5486)>>x5487)%x5488);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x5549 = 1477367005707564LLU;
	int8_t x5550 = -1;
	volatile int8_t x5551 = 19;
	uint64_t t151 = 2233469547353791LLU;

    t151 = (((x5549!=x5550)>>x5551)%x5552);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x5597 = UINT32_MAX;
	int32_t x5598 = 2027;
	int16_t x5599 = 10;
	int64_t x5600 = INT64_MAX;
	volatile int64_t t152 = -53469647380137LL;

    t152 = (((x5597!=x5598)>>x5599)%x5600);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x5630 = INT64_MIN;
	int8_t x5631 = 0;
	static volatile int32_t t153 = 1576570;

    t153 = (((x5629!=x5630)>>x5631)%x5632);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x5645 = 1LL;
	uint64_t x5647 = 9LLU;
	int16_t x5648 = -39;
	int32_t t154 = -682003;

    t154 = (((x5645!=x5646)>>x5647)%x5648);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x5713 = INT32_MAX;
	int8_t x5714 = -1;
	int8_t x5715 = 31;
	static int64_t x5716 = -1193010707423LL;
	volatile int64_t t155 = 261275199605LL;

    t155 = (((x5713!=x5714)>>x5715)%x5716);

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x5769 = 997;
	volatile int16_t x5770 = INT16_MIN;
	uint8_t x5771 = 1U;
	static int32_t t156 = 30;

    t156 = (((x5769!=x5770)>>x5771)%x5772);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x5801 = UINT32_MAX;
	static int32_t x5802 = INT32_MAX;
	static int16_t x5803 = 7;
	int64_t x5804 = 477304418575473LL;

    t157 = (((x5801!=x5802)>>x5803)%x5804);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x5825 = INT16_MIN;
	uint32_t x5826 = UINT32_MAX;
	volatile uint16_t x5828 = 5134U;

    t158 = (((x5825!=x5826)>>x5827)%x5828);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x5865 = 34LLU;
	static int8_t x5866 = INT8_MIN;
	uint8_t x5867 = 17U;
	int32_t t159 = -2828768;

    t159 = (((x5865!=x5866)>>x5867)%x5868);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x5881 = INT16_MAX;
	uint8_t x5882 = 26U;
	int8_t x5883 = 1;
	uint64_t x5884 = 141423818188223947LLU;
	volatile uint64_t t160 = 93172LLU;

    t160 = (((x5881!=x5882)>>x5883)%x5884);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x5894 = 113U;
	uint8_t x5895 = 3U;
	uint16_t x5896 = 19011U;
	volatile int32_t t161 = -550;

    t161 = (((x5893!=x5894)>>x5895)%x5896);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static int32_t x5961 = INT32_MAX;
	volatile int32_t x5962 = INT32_MIN;
	int32_t x5964 = INT32_MIN;

    t162 = (((x5961!=x5962)>>x5963)%x5964);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x5981 = 138255616;
	int8_t x5982 = 0;
	static int16_t x5983 = 21;
	int64_t x5984 = -1LL;
	static volatile int64_t t163 = -125425412266827LL;

    t163 = (((x5981!=x5982)>>x5983)%x5984);

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x6106 = INT64_MIN;
	volatile uint16_t x6107 = 0U;
	int32_t t164 = 3596;

    t164 = (((x6105!=x6106)>>x6107)%x6108);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x6157 = INT32_MIN;
	static uint64_t x6158 = UINT64_MAX;
	uint8_t x6159 = 0U;
	static uint64_t x6160 = 154263363877737927LLU;
	uint64_t t165 = 39464LLU;

    t165 = (((x6157!=x6158)>>x6159)%x6160);

    if (t165 != 1LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x6181 = 21;
	int16_t x6182 = -1;
	uint32_t x6183 = 6U;
	volatile int64_t x6184 = -696957LL;
	int64_t t166 = -3837874LL;

    t166 = (((x6181!=x6182)>>x6183)%x6184);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x6186 = INT8_MIN;
	int32_t t167 = -23084386;

    t167 = (((x6185!=x6186)>>x6187)%x6188);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x6229 = -1;
	uint16_t x6230 = UINT16_MAX;
	volatile int32_t x6231 = 13;
	int16_t x6232 = -1;
	int32_t t168 = -86398;

    t168 = (((x6229!=x6230)>>x6231)%x6232);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x6242 = 16291U;
	volatile uint16_t x6243 = 0U;
	volatile uint32_t t169 = 3U;

    t169 = (((x6241!=x6242)>>x6243)%x6244);

    if (t169 != 1U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x6245 = 1;
	int16_t x6246 = -34;
	uint8_t x6247 = 1U;
	int16_t x6248 = INT16_MIN;
	volatile int32_t t170 = -13869300;

    t170 = (((x6245!=x6246)>>x6247)%x6248);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x6293 = -4;
	uint32_t x6294 = UINT32_MAX;
	volatile int32_t x6295 = 0;
	static volatile int16_t x6296 = INT16_MIN;
	static volatile int32_t t171 = -766;

    t171 = (((x6293!=x6294)>>x6295)%x6296);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x6313 = INT32_MAX;
	uint16_t x6314 = UINT16_MAX;
	int8_t x6315 = 2;
	volatile int32_t t172 = 0;

    t172 = (((x6313!=x6314)>>x6315)%x6316);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x6349 = -1;
	int32_t x6350 = -1;
	static uint8_t x6351 = 7U;
	int16_t x6352 = 44;

    t173 = (((x6349!=x6350)>>x6351)%x6352);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x6421 = 2847795528354LL;
	volatile int64_t x6422 = INT64_MIN;
	static volatile int32_t t174 = -3;

    t174 = (((x6421!=x6422)>>x6423)%x6424);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x6425 = INT64_MIN;
	static int32_t x6426 = -7;
	volatile uint8_t x6427 = 0U;
	int16_t x6428 = INT16_MAX;

    t175 = (((x6425!=x6426)>>x6427)%x6428);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x6429 = -63;
	uint64_t x6430 = 44445LLU;
	uint16_t x6431 = 1U;
	static int64_t x6432 = INT64_MIN;
	int64_t t176 = 2432544741536459755LL;

    t176 = (((x6429!=x6430)>>x6431)%x6432);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x6469 = 79118U;
	int8_t x6470 = INT8_MAX;
	uint16_t x6471 = 0U;
	static uint16_t x6472 = UINT16_MAX;

    t177 = (((x6469!=x6470)>>x6471)%x6472);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x6569 = INT64_MIN;
	int16_t x6570 = INT16_MIN;
	int16_t x6571 = 4;
	int8_t x6572 = -1;
	static int32_t t178 = 1373;

    t178 = (((x6569!=x6570)>>x6571)%x6572);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x6581 = -2023;
	uint8_t x6582 = UINT8_MAX;
	uint16_t x6583 = 7U;
	static int32_t t179 = -1;

    t179 = (((x6581!=x6582)>>x6583)%x6584);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x6625 = INT16_MIN;
	static int64_t x6626 = INT64_MIN;
	volatile int32_t t180 = 70652;

    t180 = (((x6625!=x6626)>>x6627)%x6628);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x6629 = 2444351U;
	volatile int32_t x6632 = INT32_MAX;
	static volatile int32_t t181 = -368108;

    t181 = (((x6629!=x6630)>>x6631)%x6632);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x6710 = 0;
	static int8_t x6712 = INT8_MIN;
	static int32_t t182 = 27545;

    t182 = (((x6709!=x6710)>>x6711)%x6712);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x6741 = -28;
	volatile uint16_t x6743 = 0U;
	int8_t x6744 = INT8_MAX;
	int32_t t183 = 21;

    t183 = (((x6741!=x6742)>>x6743)%x6744);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x6749 = INT16_MIN;
	static volatile int64_t x6750 = INT64_MAX;
	volatile uint8_t x6751 = 0U;

    t184 = (((x6749!=x6750)>>x6751)%x6752);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x6853 = 189792773142LLU;
	int8_t x6854 = INT8_MAX;
	static uint8_t x6855 = 24U;
	int8_t x6856 = INT8_MIN;
	int32_t t185 = -16399;

    t185 = (((x6853!=x6854)>>x6855)%x6856);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x6869 = UINT32_MAX;
	volatile int32_t x6870 = -1;
	int32_t x6871 = 18;
	volatile int32_t x6872 = INT32_MIN;
	int32_t t186 = 7;

    t186 = (((x6869!=x6870)>>x6871)%x6872);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x6965 = 1;
	uint32_t x6966 = 4482380U;
	uint16_t x6967 = 2U;
	int16_t x6968 = -1;
	static volatile int32_t t187 = -36435974;

    t187 = (((x6965!=x6966)>>x6967)%x6968);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x7025 = UINT8_MAX;
	static volatile int32_t x7026 = INT32_MIN;
	static volatile uint32_t x7027 = 6U;
	static uint8_t x7028 = UINT8_MAX;

    t188 = (((x7025!=x7026)>>x7027)%x7028);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x7075 = 0;
	int16_t x7076 = INT16_MAX;
	volatile int32_t t189 = -1960197;

    t189 = (((x7073!=x7074)>>x7075)%x7076);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile uint64_t x7189 = 20LLU;
	uint16_t x7191 = 2U;
	static uint64_t x7192 = 14472131LLU;
	volatile uint64_t t190 = 6915309242035LLU;

    t190 = (((x7189!=x7190)>>x7191)%x7192);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x7214 = 37042992060237635LLU;
	uint8_t x7215 = 1U;
	int32_t x7216 = INT32_MIN;
	volatile int32_t t191 = 57;

    t191 = (((x7213!=x7214)>>x7215)%x7216);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x7218 = INT64_MIN;
	uint8_t x7219 = 3U;
	uint8_t x7220 = 117U;
	int32_t t192 = -124169270;

    t192 = (((x7217!=x7218)>>x7219)%x7220);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x7230 = 950097656U;
	uint16_t x7231 = 1U;
	static volatile int32_t x7232 = 1877771;
	int32_t t193 = -20356;

    t193 = (((x7229!=x7230)>>x7231)%x7232);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x7233 = INT16_MIN;
	volatile uint8_t x7234 = 13U;
	static volatile uint8_t x7235 = 1U;
	int16_t x7236 = INT16_MIN;

    t194 = (((x7233!=x7234)>>x7235)%x7236);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x7265 = INT64_MAX;
	static volatile int16_t x7266 = -1;
	static int32_t x7267 = 28;
	int64_t x7268 = -1872LL;

    t195 = (((x7265!=x7266)>>x7267)%x7268);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x7281 = UINT32_MAX;
	int16_t x7282 = -3618;
	static int8_t x7283 = 26;
	volatile int64_t x7284 = INT64_MIN;
	int64_t t196 = 8268053596492233LL;

    t196 = (((x7281!=x7282)>>x7283)%x7284);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x7285 = 164;
	int64_t x7286 = INT64_MIN;
	int64_t t197 = 523173942091671LL;

    t197 = (((x7285!=x7286)>>x7287)%x7288);

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x7289 = INT32_MIN;
	volatile uint8_t x7291 = 3U;
	uint8_t x7292 = UINT8_MAX;
	volatile int32_t t198 = -3;

    t198 = (((x7289!=x7290)>>x7291)%x7292);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x7293 = 10;
	volatile int16_t x7294 = -1;
	uint16_t x7295 = 1U;
	uint16_t x7296 = UINT16_MAX;
	static int32_t t199 = 778;

    t199 = (((x7293!=x7294)>>x7295)%x7296);

    if (t199 != 0) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

