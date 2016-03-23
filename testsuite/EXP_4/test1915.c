
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

static uint8_t x5 = 2U;
int16_t x81 = INT16_MAX;
volatile uint64_t x133 = 128883LLU;
int8_t x150 = 0;
int32_t x151 = 1836;
static uint32_t x207 = 41831740U;
static volatile uint32_t t7 = 321281602U;
volatile int32_t x481 = INT32_MAX;
volatile uint64_t x508 = 1509990LLU;
int64_t x565 = 1202287LL;
static uint8_t x566 = 15U;
int16_t x629 = INT16_MAX;
int16_t x632 = INT16_MIN;
int8_t x639 = -53;
int32_t t14 = 15035;
static int16_t x723 = -4603;
int8_t x1176 = INT8_MIN;
uint32_t t19 = 55U;
int32_t x1179 = INT32_MIN;
int32_t x1180 = INT32_MIN;
static int8_t x1202 = INT8_MAX;
uint8_t x1204 = 0U;
volatile uint16_t x1272 = 4944U;
static int16_t x1301 = 0;
int32_t t23 = -1;
int64_t t24 = 18155746515673LL;
uint32_t x1421 = 717U;
volatile uint16_t x1501 = 32U;
int16_t x1502 = 14;
uint16_t x1633 = UINT16_MAX;
static int16_t x1644 = INT16_MAX;
int64_t t28 = 17054707190404508LL;
uint32_t x1681 = UINT32_MAX;
uint16_t x1721 = 3579U;
static uint32_t x1723 = UINT32_MAX;
volatile int16_t x1738 = 0;
static volatile int64_t t33 = 106398607LL;
int16_t x1887 = INT16_MIN;
volatile int32_t t36 = -56415855;
int8_t x2021 = INT8_MAX;
static uint8_t x2023 = 2U;
uint16_t x2024 = 2819U;
int32_t t40 = -8203848;
volatile uint16_t x2261 = UINT16_MAX;
static int16_t x2263 = 0;
volatile uint8_t x2298 = 7U;
static volatile int32_t t42 = 151867;
int8_t x2438 = 15;
int32_t t46 = -1;
uint8_t x2593 = UINT8_MAX;
static int32_t t47 = -917119618;
static uint64_t x2633 = 63082711LLU;
volatile uint64_t t49 = 101743390441LLU;
static uint16_t x2769 = 14U;
uint32_t x2775 = 1030493221U;
int32_t t51 = -93;
int16_t x2796 = INT16_MAX;
volatile int16_t x2828 = -1;
uint32_t t53 = 2U;
volatile int16_t x2913 = 12994;
uint8_t x2916 = 89U;
uint8_t x2949 = UINT8_MAX;
int64_t x2951 = -155247588LL;
static int64_t x3043 = 55574284268LL;
int32_t t56 = -85278324;
static uint64_t x3141 = UINT64_MAX;
static int8_t x3157 = 10;
static uint32_t x3225 = 1313U;
static uint8_t x3304 = UINT8_MAX;
uint32_t x3413 = UINT32_MAX;
uint32_t x3576 = UINT32_MAX;
int16_t x3625 = 6;
volatile int64_t x3627 = INT64_MIN;
static int64_t x3628 = INT64_MAX;
static uint8_t x3685 = 1U;
uint8_t x3686 = 8U;
volatile int64_t x3688 = INT64_MIN;
uint32_t x3745 = 7064377U;
volatile uint32_t x3872 = 34U;
int32_t t71 = -21557;
static int8_t x3923 = 5;
volatile uint8_t x3962 = 4U;
uint8_t x4102 = 2U;
uint64_t x4103 = 54999189581LLU;
static uint32_t x4293 = UINT32_MAX;
int64_t x4296 = INT64_MAX;
uint32_t t76 = UINT32_MAX;
int32_t x4311 = -1;
uint16_t x4312 = 11295U;
volatile int64_t x4339 = INT64_MIN;
static volatile uint8_t x4426 = 29U;
int32_t t80 = 55782476;
static int32_t t81 = -89963290;
int16_t x4571 = 10;
volatile uint32_t x4572 = 2120501044U;
static uint8_t x4597 = 110U;
volatile int8_t x4599 = 4;
int64_t x4645 = 1LL;
volatile int8_t x4648 = -1;
int8_t x4684 = INT8_MIN;
uint16_t x4698 = 107U;
static uint64_t x4701 = 288480928984385671LLU;
int8_t x4712 = -1;
int32_t t91 = -18886;
int16_t x4877 = INT16_MAX;
uint32_t t95 = 1025200U;
int16_t x5044 = INT16_MIN;
static uint64_t x5050 = 24LLU;
volatile int32_t t99 = -2258;
int8_t x5090 = 9;
static int8_t x5112 = INT8_MAX;
static int32_t t102 = 22240;
uint64_t x5311 = UINT64_MAX;
int8_t x5367 = INT8_MIN;
uint8_t x5437 = 18U;
static uint8_t x5438 = 15U;
static uint8_t x5470 = 5U;
int32_t t109 = -9994474;
static uint16_t x5521 = 0U;
int32_t t112 = -3;
uint16_t x5638 = 5U;
int32_t x5652 = -113693844;
static uint8_t x5794 = 0U;
int64_t x5795 = INT64_MIN;
uint8_t x5796 = 1U;
volatile uint32_t t118 = UINT32_MAX;
int32_t x5977 = INT32_MAX;
int64_t x5979 = -1LL;
int32_t x5980 = INT32_MAX;
uint64_t x5982 = 0LLU;
static int16_t x6011 = INT16_MAX;
uint32_t t122 = 3667U;
uint32_t x6038 = 12U;
static uint8_t x6253 = 3U;
static uint64_t x6254 = 2LLU;
static uint32_t x6256 = 331243U;
static int64_t x6316 = INT64_MIN;
volatile uint32_t x6488 = 0U;
uint64_t x6613 = 34LLU;
static int64_t x6648 = INT64_MIN;
uint8_t x6662 = 1U;
int64_t x6794 = 0LL;
volatile int16_t x6795 = -1;
static volatile int64_t t135 = 0LL;
uint32_t x6912 = UINT32_MAX;
volatile int64_t x6934 = 2LL;
int32_t t138 = -1767;
int16_t x6958 = 7;
int32_t t139 = -9200;
uint64_t x7011 = 2027869832202203LLU;
uint32_t x7166 = 30U;
int64_t x7168 = -1LL;
volatile uint64_t t144 = 422609LLU;
static uint8_t x7264 = 14U;
static uint64_t x7277 = UINT64_MAX;
static uint32_t x7279 = 710U;
int32_t t148 = 63469639;
int64_t x7361 = INT64_MAX;
volatile uint16_t x7362 = 100U;
static int64_t x7392 = -1208971193LL;
uint8_t x7429 = UINT8_MAX;
int64_t x7431 = 1695326LL;
uint64_t x7465 = 3LLU;
uint64_t x7525 = UINT64_MAX;
uint8_t x7526 = 99U;
uint8_t x7528 = 55U;
static uint16_t x7652 = 1U;
uint32_t t158 = 12811U;
int64_t x7711 = INT64_MAX;
uint64_t x7712 = UINT64_MAX;
int16_t x7723 = -1;
volatile int8_t x7854 = INT8_MAX;
int64_t x7856 = -1LL;
volatile int64_t t161 = 815843984355335LL;
volatile int32_t x7860 = -1;
uint32_t x7892 = 2U;
volatile int32_t t165 = -3897;
int32_t x8108 = -1;
static int32_t t167 = 4500;
uint8_t x8117 = 18U;
static int64_t x8120 = -109625LL;
static uint16_t x8206 = 1U;
int8_t x8302 = 24;
int64_t x8303 = INT64_MAX;
volatile uint64_t t170 = 1972LLU;
volatile int64_t x8411 = INT64_MAX;
volatile uint32_t x8496 = 314U;
uint64_t x8589 = UINT64_MAX;
static volatile int16_t x8671 = INT16_MAX;
volatile int8_t x8672 = -1;
uint16_t x8681 = 318U;
int16_t x8764 = 0;
int16_t x8775 = -4;
volatile int32_t t178 = -98124;
uint16_t x8778 = 23U;
uint64_t t179 = 39556LLU;
uint64_t x8857 = UINT64_MAX;
volatile uint64_t t181 = 1223522318603879LLU;
uint8_t x8894 = 16U;
static uint32_t x8963 = 12624U;
uint32_t x8992 = UINT32_MAX;
uint64_t t186 = 275578885724254421LLU;
uint32_t x9022 = 11U;
uint64_t x9189 = UINT64_MAX;
int16_t x9191 = -2469;
static volatile uint64_t x9205 = 35788492842LLU;
int8_t x9206 = 11;
int32_t x9277 = 428902;
static volatile uint8_t x9280 = 3U;
volatile int32_t t192 = 1;
volatile int16_t x9503 = INT16_MIN;
int32_t t193 = -636350;
uint16_t x9509 = UINT16_MAX;
uint8_t x9511 = 4U;
int8_t x9738 = 20;
volatile int32_t t195 = 79;
static uint16_t x9882 = 7U;
uint32_t t197 = 1804U;
int8_t x9902 = 21;
uint16_t x10069 = UINT16_MAX;


void f0(void) {
    	uint8_t x6 = 0U;
	static volatile int32_t x7 = INT32_MAX;
	int64_t x8 = -680978LL;
	static volatile int32_t t0 = -40;

    t0 = (x5>>(x6>>(x7<=x8)));

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x82 = 0;
	int64_t x83 = INT64_MAX;
	static volatile int64_t x84 = -1LL;
	int32_t t1 = 274;

    t1 = (x81>>(x82>>(x83<=x84)));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x134 = 10;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = UINT16_MAX;
	volatile uint64_t t2 = 58LLU;

    t2 = (x133>>(x134>>(x135<=x136)));

    if (t2 != 4027LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x149 = 3U;
	int32_t x152 = INT32_MAX;
	static int32_t t3 = 1;

    t3 = (x149>>(x150>>(x151<=x152)));

    if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x157 = 2151334901631630LL;
	uint8_t x158 = 10U;
	uint8_t x159 = 50U;
	volatile int64_t x160 = 7123786LL;
	int64_t t4 = 2867358006LL;

    t4 = (x157>>(x158>>(x159<=x160)));

    if (t4 != 67229215675988LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x205 = 40U;
	int8_t x206 = 1;
	static int64_t x208 = INT64_MIN;
	volatile int32_t t5 = 16231;

    t5 = (x205>>(x206>>(x207<=x208)));

    if (t5 != 20) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x213 = 1U;
	static uint64_t x214 = 26LLU;
	static int16_t x215 = INT16_MIN;
	uint32_t x216 = 3300U;
	int32_t t6 = -2614223;

    t6 = (x213>>(x214>>(x215<=x216)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x361 = 0U;
	volatile uint32_t x362 = 41U;
	int64_t x363 = INT64_MIN;
	int64_t x364 = INT64_MAX;

    t7 = (x361>>(x362>>(x363<=x364)));

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x482 = 2;
	volatile uint32_t x483 = 58574621U;
	int8_t x484 = INT8_MAX;
	static volatile int32_t t8 = 80;

    t8 = (x481>>(x482>>(x483<=x484)));

    if (t8 != 536870911) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x505 = 0U;
	uint8_t x506 = 0U;
	uint32_t x507 = 350730U;
	volatile int32_t t9 = -172;

    t9 = (x505>>(x506>>(x507<=x508)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x567 = 35;
	int32_t x568 = 1725122;
	int64_t t10 = -70125587710618LL;

    t10 = (x565>>(x566>>(x567<=x568)));

    if (t10 != 9392LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x617 = 48;
	uint32_t x618 = 3U;
	int32_t x619 = -4777611;
	int32_t x620 = 4;
	int32_t t11 = 0;

    t11 = (x617>>(x618>>(x619<=x620)));

    if (t11 != 24) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x630 = 1;
	static volatile int16_t x631 = INT16_MIN;
	volatile int32_t t12 = -6645527;

    t12 = (x629>>(x630>>(x631<=x632)));

    if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x637 = 6259013766810984041LLU;
	int8_t x638 = 10;
	static int16_t x640 = -1;
	static volatile uint64_t t13 = 2196LLU;

    t13 = (x637>>(x638>>(x639<=x640)));

    if (t13 != 195594180212843251LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x701 = UINT16_MAX;
	volatile uint8_t x702 = 0U;
	volatile int16_t x703 = INT16_MIN;
	int8_t x704 = INT8_MIN;

    t14 = (x701>>(x702>>(x703<=x704)));

    if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x721 = 1207154;
	uint16_t x722 = 13U;
	volatile int64_t x724 = INT64_MAX;
	int32_t t15 = -5873996;

    t15 = (x721>>(x722>>(x723<=x724)));

    if (t15 != 18861) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x829 = UINT16_MAX;
	uint16_t x830 = 4U;
	uint16_t x831 = 1674U;
	uint32_t x832 = 24351U;
	static volatile int32_t t16 = 545954;

    t16 = (x829>>(x830>>(x831<=x832)));

    if (t16 != 16383) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint16_t x1049 = UINT16_MAX;
	int32_t x1050 = 1;
	int32_t x1051 = INT32_MIN;
	volatile uint32_t x1052 = UINT32_MAX;
	int32_t t17 = -432549;

    t17 = (x1049>>(x1050>>(x1051<=x1052)));

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x1081 = 361U;
	uint8_t x1082 = 2U;
	uint8_t x1083 = 13U;
	static volatile int32_t x1084 = INT32_MIN;
	static uint32_t t18 = 1U;

    t18 = (x1081>>(x1082>>(x1083<=x1084)));

    if (t18 != 90U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x1173 = 7834U;
	uint32_t x1174 = 11U;
	int16_t x1175 = INT16_MIN;

    t19 = (x1173>>(x1174>>(x1175<=x1176)));

    if (t19 != 244U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x1177 = 302;
	int8_t x1178 = 0;
	volatile int32_t t20 = 0;

    t20 = (x1177>>(x1178>>(x1179<=x1180)));

    if (t20 != 302) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x1201 = 51484125293650LLU;
	static int64_t x1203 = INT64_MIN;
	uint64_t t21 = 235780495204406525LLU;

    t21 = (x1201>>(x1202>>(x1203<=x1204)));

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x1269 = 108147903530187842LLU;
	uint16_t x1270 = 1U;
	uint8_t x1271 = UINT8_MAX;
	volatile uint64_t t22 = 2LLU;

    t22 = (x1269>>(x1270>>(x1271<=x1272)));

    if (t22 != 108147903530187842LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1302 = 2U;
	uint8_t x1303 = UINT8_MAX;
	static int16_t x1304 = -55;

    t23 = (x1301>>(x1302>>(x1303<=x1304)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x1413 = INT64_MAX;
	static volatile int32_t x1414 = 10;
	volatile int32_t x1415 = INT32_MAX;
	uint32_t x1416 = 5846950U;

    t24 = (x1413>>(x1414>>(x1415<=x1416)));

    if (t24 != 9007199254740991LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x1422 = 0U;
	static int8_t x1423 = INT8_MIN;
	uint64_t x1424 = UINT64_MAX;
	volatile uint32_t t25 = 3425U;

    t25 = (x1421>>(x1422>>(x1423<=x1424)));

    if (t25 != 717U) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x1503 = 57;
	uint16_t x1504 = 913U;
	volatile int32_t t26 = -21544268;

    t26 = (x1501>>(x1502>>(x1503<=x1504)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x1634 = 2U;
	int64_t x1635 = INT64_MAX;
	int64_t x1636 = INT64_MAX;
	int32_t t27 = 18392;

    t27 = (x1633>>(x1634>>(x1635<=x1636)));

    if (t27 != 32767) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x1641 = INT64_MAX;
	uint8_t x1642 = 83U;
	int64_t x1643 = INT64_MIN;

    t28 = (x1641>>(x1642>>(x1643<=x1644)));

    if (t28 != 4194303LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x1682 = 20U;
	volatile uint8_t x1683 = UINT8_MAX;
	uint16_t x1684 = 31U;
	volatile uint32_t t29 = 107512858U;

    t29 = (x1681>>(x1682>>(x1683<=x1684)));

    if (t29 != 4095U) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x1701 = UINT8_MAX;
	int32_t x1702 = 0;
	volatile uint8_t x1703 = 22U;
	uint64_t x1704 = 3412974LLU;
	int32_t t30 = -1;

    t30 = (x1701>>(x1702>>(x1703<=x1704)));

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1722 = 19U;
	uint32_t x1724 = 77485206U;
	volatile int32_t t31 = 9117339;

    t31 = (x1721>>(x1722>>(x1723<=x1724)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1737 = INT64_MAX;
	int64_t x1739 = -6168071865LL;
	int8_t x1740 = -2;
	int64_t t32 = INT64_MAX;

    t32 = (x1737>>(x1738>>(x1739<=x1740)));

    if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x1761 = 1056693373369712LL;
	volatile uint8_t x1762 = 26U;
	int16_t x1763 = 1;
	static volatile int32_t x1764 = -1;

    t33 = (x1761>>(x1762>>(x1763<=x1764)));

    if (t33 != 15745958LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x1829 = 114989555414147LLU;
	int8_t x1830 = INT8_MAX;
	int16_t x1831 = -655;
	volatile int64_t x1832 = INT64_MAX;
	uint64_t t34 = 496LLU;

    t34 = (x1829>>(x1830>>(x1831<=x1832)));

    if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x1873 = 10U;
	volatile uint8_t x1874 = 6U;
	uint16_t x1875 = 1U;
	volatile uint32_t x1876 = 1941417U;
	volatile int32_t t35 = -2498;

    t35 = (x1873>>(x1874>>(x1875<=x1876)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x1885 = UINT8_MAX;
	volatile uint8_t x1886 = 0U;
	int16_t x1888 = INT16_MIN;

    t36 = (x1885>>(x1886>>(x1887<=x1888)));

    if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x2022 = 32U;
	int32_t t37 = 140885611;

    t37 = (x2021>>(x2022>>(x2023<=x2024)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x2045 = 42190884817504555LL;
	uint16_t x2046 = 17U;
	int64_t x2047 = INT64_MAX;
	uint8_t x2048 = 1U;
	int64_t t38 = -55594LL;

    t38 = (x2045>>(x2046>>(x2047<=x2048)));

    if (t38 != 321890905895LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x2109 = UINT64_MAX;
	static int8_t x2110 = 47;
	int16_t x2111 = -1;
	static uint8_t x2112 = UINT8_MAX;
	volatile uint64_t t39 = 6405221070168LLU;

    t39 = (x2109>>(x2110>>(x2111<=x2112)));

    if (t39 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x2181 = UINT16_MAX;
	static int8_t x2182 = 5;
	volatile uint16_t x2183 = 12975U;
	static int64_t x2184 = -6377LL;

    t40 = (x2181>>(x2182>>(x2183<=x2184)));

    if (t40 != 2047) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x2262 = 7U;
	uint16_t x2264 = 109U;
	int32_t t41 = -242;

    t41 = (x2261>>(x2262>>(x2263<=x2264)));

    if (t41 != 8191) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x2297 = UINT8_MAX;
	uint16_t x2299 = UINT16_MAX;
	uint8_t x2300 = 66U;

    t42 = (x2297>>(x2298>>(x2299<=x2300)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x2305 = 29620427579589LLU;
	uint32_t x2306 = 15U;
	uint64_t x2307 = 65622657LLU;
	int16_t x2308 = -1;
	volatile uint64_t t43 = 99062LLU;

    t43 = (x2305>>(x2306>>(x2307<=x2308)));

    if (t43 != 231409590465LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x2437 = 5LLU;
	uint32_t x2439 = 3254U;
	int8_t x2440 = INT8_MIN;
	static uint64_t t44 = 11324585846LLU;

    t44 = (x2437>>(x2438>>(x2439<=x2440)));

    if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x2461 = 1U;
	int8_t x2462 = 17;
	uint32_t x2463 = 2U;
	static uint32_t x2464 = UINT32_MAX;
	int32_t t45 = -95457844;

    t45 = (x2461>>(x2462>>(x2463<=x2464)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x2513 = UINT16_MAX;
	uint8_t x2514 = 1U;
	static volatile int8_t x2515 = INT8_MIN;
	int32_t x2516 = -1;

    t46 = (x2513>>(x2514>>(x2515<=x2516)));

    if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x2594 = 1;
	int32_t x2595 = -1;
	int16_t x2596 = INT16_MAX;

    t47 = (x2593>>(x2594>>(x2595<=x2596)));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x2597 = UINT32_MAX;
	uint8_t x2598 = 49U;
	int8_t x2599 = INT8_MIN;
	static int8_t x2600 = INT8_MIN;
	volatile uint32_t t48 = 6819989U;

    t48 = (x2597>>(x2598>>(x2599<=x2600)));

    if (t48 != 255U) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint8_t x2634 = 5U;
	int8_t x2635 = 30;
	int16_t x2636 = 3031;

    t49 = (x2633>>(x2634>>(x2635<=x2636)));

    if (t49 != 15770677LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x2770 = 1;
	int32_t x2771 = INT32_MAX;
	int32_t x2772 = INT32_MIN;
	int32_t t50 = -14520;

    t50 = (x2769>>(x2770>>(x2771<=x2772)));

    if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x2773 = 0U;
	uint32_t x2774 = 23U;
	uint64_t x2776 = UINT64_MAX;

    t51 = (x2773>>(x2774>>(x2775<=x2776)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x2793 = 3613LLU;
	uint16_t x2794 = 55U;
	uint8_t x2795 = UINT8_MAX;
	volatile uint64_t t52 = 22205LLU;

    t52 = (x2793>>(x2794>>(x2795<=x2796)));

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x2825 = 471589U;
	static uint8_t x2826 = 12U;
	static volatile int8_t x2827 = -1;

    t53 = (x2825>>(x2826>>(x2827<=x2828)));

    if (t53 != 7368U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x2914 = 46;
	int32_t x2915 = INT32_MIN;
	volatile int32_t t54 = -39;

    t54 = (x2913>>(x2914>>(x2915<=x2916)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x2950 = 0U;
	int16_t x2952 = INT16_MAX;
	int32_t t55 = -10;

    t55 = (x2949>>(x2950>>(x2951<=x2952)));

    if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x3041 = 25;
	uint8_t x3042 = 0U;
	int8_t x3044 = 2;

    t56 = (x3041>>(x3042>>(x3043<=x3044)));

    if (t56 != 25) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x3113 = INT16_MAX;
	static uint32_t x3114 = 8U;
	int32_t x3115 = -1;
	int64_t x3116 = INT64_MIN;
	volatile int32_t t57 = 613398;

    t57 = (x3113>>(x3114>>(x3115<=x3116)));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x3142 = 1U;
	volatile uint8_t x3143 = 3U;
	int64_t x3144 = INT64_MAX;
	uint64_t t58 = UINT64_MAX;

    t58 = (x3141>>(x3142>>(x3143<=x3144)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x3158 = 9U;
	int32_t x3159 = INT32_MIN;
	uint8_t x3160 = UINT8_MAX;
	int32_t t59 = -19;

    t59 = (x3157>>(x3158>>(x3159<=x3160)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x3177 = 5991;
	uint8_t x3178 = 1U;
	static uint64_t x3179 = 781LLU;
	uint8_t x3180 = UINT8_MAX;
	int32_t t60 = -227;

    t60 = (x3177>>(x3178>>(x3179<=x3180)));

    if (t60 != 2995) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x3226 = 6U;
	volatile int32_t x3227 = -1;
	volatile int16_t x3228 = 52;
	volatile uint32_t t61 = 863U;

    t61 = (x3225>>(x3226>>(x3227<=x3228)));

    if (t61 != 164U) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x3301 = UINT8_MAX;
	uint16_t x3302 = 0U;
	int16_t x3303 = INT16_MAX;
	int32_t t62 = -26;

    t62 = (x3301>>(x3302>>(x3303<=x3304)));

    if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint16_t x3414 = 11U;
	uint8_t x3415 = UINT8_MAX;
	static uint32_t x3416 = UINT32_MAX;
	volatile uint32_t t63 = 7939301U;

    t63 = (x3413>>(x3414>>(x3415<=x3416)));

    if (t63 != 134217727U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint64_t x3573 = UINT64_MAX;
	static int32_t x3574 = 126;
	static uint8_t x3575 = 119U;
	volatile uint64_t t64 = 38847421102LLU;

    t64 = (x3573>>(x3574>>(x3575<=x3576)));

    if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x3626 = 1;
	volatile int32_t t65 = 164421;

    t65 = (x3625>>(x3626>>(x3627<=x3628)));

    if (t65 != 6) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x3637 = 389943LLU;
	int8_t x3638 = 1;
	int16_t x3639 = INT16_MIN;
	uint8_t x3640 = 10U;
	static volatile uint64_t t66 = 955326977350293LLU;

    t66 = (x3637>>(x3638>>(x3639<=x3640)));

    if (t66 != 389943LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x3669 = UINT32_MAX;
	int16_t x3670 = 3;
	uint8_t x3671 = 8U;
	int32_t x3672 = -1;
	uint32_t t67 = 0U;

    t67 = (x3669>>(x3670>>(x3671<=x3672)));

    if (t67 != 536870911U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x3687 = INT16_MAX;
	static volatile int32_t t68 = 7267;

    t68 = (x3685>>(x3686>>(x3687<=x3688)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x3746 = 40LL;
	int32_t x3747 = 1722;
	uint16_t x3748 = 6476U;
	uint32_t t69 = 1U;

    t69 = (x3745>>(x3746>>(x3747<=x3748)));

    if (t69 != 6U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x3777 = 1;
	static int8_t x3778 = 1;
	static int8_t x3779 = 40;
	int32_t x3780 = 1456328;
	volatile int32_t t70 = 1143;

    t70 = (x3777>>(x3778>>(x3779<=x3780)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x3869 = 1;
	volatile int8_t x3870 = 0;
	volatile int16_t x3871 = 9;

    t71 = (x3869>>(x3870>>(x3871<=x3872)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x3921 = 208;
	int64_t x3922 = 1LL;
	static int32_t x3924 = INT32_MAX;
	volatile int32_t t72 = -30453;

    t72 = (x3921>>(x3922>>(x3923<=x3924)));

    if (t72 != 208) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x3961 = 238213U;
	static uint8_t x3963 = 12U;
	uint64_t x3964 = UINT64_MAX;
	volatile uint32_t t73 = 2364243U;

    t73 = (x3961>>(x3962>>(x3963<=x3964)));

    if (t73 != 59553U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x4017 = 3U;
	volatile int8_t x4018 = 21;
	static int32_t x4019 = INT32_MAX;
	uint64_t x4020 = 63950779081397359LLU;
	int32_t t74 = 72020702;

    t74 = (x4017>>(x4018>>(x4019<=x4020)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x4101 = 42158701LLU;
	uint16_t x4104 = 1072U;
	static volatile uint64_t t75 = 18LLU;

    t75 = (x4101>>(x4102>>(x4103<=x4104)));

    if (t75 != 10539675LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint16_t x4294 = 0U;
	static uint8_t x4295 = 10U;

    t76 = (x4293>>(x4294>>(x4295<=x4296)));

    if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x4309 = INT16_MAX;
	uint8_t x4310 = 0U;
	volatile int32_t t77 = 2885384;

    t77 = (x4309>>(x4310>>(x4311<=x4312)));

    if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x4337 = UINT32_MAX;
	int16_t x4338 = 14;
	int8_t x4340 = 45;
	static volatile uint32_t t78 = 969542964U;

    t78 = (x4337>>(x4338>>(x4339<=x4340)));

    if (t78 != 33554431U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x4365 = 1;
	int8_t x4366 = 4;
	uint16_t x4367 = 910U;
	int16_t x4368 = INT16_MIN;
	volatile int32_t t79 = 1;

    t79 = (x4365>>(x4366>>(x4367<=x4368)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x4425 = INT16_MAX;
	int64_t x4427 = INT64_MIN;
	static uint32_t x4428 = UINT32_MAX;

    t80 = (x4425>>(x4426>>(x4427<=x4428)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x4433 = 6U;
	uint8_t x4434 = 3U;
	volatile int64_t x4435 = INT64_MAX;
	volatile int16_t x4436 = INT16_MIN;

    t81 = (x4433>>(x4434>>(x4435<=x4436)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x4453 = 71U;
	uint8_t x4454 = 22U;
	volatile int64_t x4455 = INT64_MIN;
	volatile int16_t x4456 = -4;
	int32_t t82 = 8;

    t82 = (x4453>>(x4454>>(x4455<=x4456)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x4513 = 6U;
	static uint64_t x4514 = 25LLU;
	static int8_t x4515 = INT8_MIN;
	int64_t x4516 = INT64_MAX;
	volatile int32_t t83 = -425195095;

    t83 = (x4513>>(x4514>>(x4515<=x4516)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint8_t x4569 = 91U;
	int16_t x4570 = 31;
	volatile int32_t t84 = 2480163;

    t84 = (x4569>>(x4570>>(x4571<=x4572)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x4598 = 1;
	static volatile int16_t x4600 = INT16_MIN;
	int32_t t85 = -89836565;

    t85 = (x4597>>(x4598>>(x4599<=x4600)));

    if (t85 != 55) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x4646 = 12U;
	static uint8_t x4647 = 4U;
	volatile int64_t t86 = 12851666092LL;

    t86 = (x4645>>(x4646>>(x4647<=x4648)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x4681 = 6U;
	int16_t x4682 = 0;
	int32_t x4683 = -1;
	int32_t t87 = -116886309;

    t87 = (x4681>>(x4682>>(x4683<=x4684)));

    if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x4697 = 1935960039536LL;
	int64_t x4699 = INT64_MIN;
	static uint8_t x4700 = 4U;
	int64_t t88 = 3870879952410LL;

    t88 = (x4697>>(x4698>>(x4699<=x4700)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x4702 = 0U;
	int16_t x4703 = -1;
	int8_t x4704 = -1;
	volatile uint64_t t89 = 10LLU;

    t89 = (x4701>>(x4702>>(x4703<=x4704)));

    if (t89 != 288480928984385671LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x4709 = 0U;
	int8_t x4710 = 1;
	uint8_t x4711 = 0U;
	uint32_t t90 = 312U;

    t90 = (x4709>>(x4710>>(x4711<=x4712)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x4717 = 0U;
	uint8_t x4718 = 0U;
	int8_t x4719 = -1;
	static int16_t x4720 = -1;

    t91 = (x4717>>(x4718>>(x4719<=x4720)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x4753 = 20LLU;
	uint8_t x4754 = 5U;
	uint16_t x4755 = 1819U;
	int64_t x4756 = INT64_MIN;
	static uint64_t t92 = 4599614663588LLU;

    t92 = (x4753>>(x4754>>(x4755<=x4756)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x4781 = 1U;
	volatile int8_t x4782 = 26;
	volatile uint8_t x4783 = 31U;
	static int32_t x4784 = INT32_MAX;
	int32_t t93 = 16;

    t93 = (x4781>>(x4782>>(x4783<=x4784)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x4878 = 15U;
	int64_t x4879 = INT64_MIN;
	int8_t x4880 = -12;
	volatile int32_t t94 = -208;

    t94 = (x4877>>(x4878>>(x4879<=x4880)));

    if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x4957 = 187756U;
	volatile int8_t x4958 = 1;
	int8_t x4959 = 24;
	int32_t x4960 = -1;

    t95 = (x4957>>(x4958>>(x4959<=x4960)));

    if (t95 != 93878U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x4985 = 39;
	int8_t x4986 = 11;
	uint64_t x4987 = 9325703175LLU;
	static int16_t x4988 = INT16_MIN;
	volatile int32_t t96 = 211731;

    t96 = (x4985>>(x4986>>(x4987<=x4988)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x5005 = UINT8_MAX;
	static uint8_t x5006 = 29U;
	int16_t x5007 = -1;
	static uint16_t x5008 = UINT16_MAX;
	volatile int32_t t97 = -16;

    t97 = (x5005>>(x5006>>(x5007<=x5008)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x5041 = 8U;
	static int8_t x5042 = 29;
	int8_t x5043 = 20;
	static int32_t t98 = -41940;

    t98 = (x5041>>(x5042>>(x5043<=x5044)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x5049 = 6U;
	uint16_t x5051 = UINT16_MAX;
	static volatile uint8_t x5052 = UINT8_MAX;

    t99 = (x5049>>(x5050>>(x5051<=x5052)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x5089 = 720U;
	volatile int16_t x5091 = INT16_MIN;
	uint64_t x5092 = UINT64_MAX;
	static volatile int32_t t100 = 36042;

    t100 = (x5089>>(x5090>>(x5091<=x5092)));

    if (t100 != 45) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x5109 = 23U;
	int8_t x5110 = 0;
	volatile int32_t x5111 = INT32_MIN;
	volatile uint32_t t101 = 361205U;

    t101 = (x5109>>(x5110>>(x5111<=x5112)));

    if (t101 != 23U) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x5137 = 3;
	int16_t x5138 = 3;
	volatile int16_t x5139 = -1;
	int16_t x5140 = INT16_MAX;

    t102 = (x5137>>(x5138>>(x5139<=x5140)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x5149 = 340U;
	volatile uint16_t x5150 = 0U;
	int64_t x5151 = 329976193463719143LL;
	int64_t x5152 = INT64_MAX;
	static volatile int32_t t103 = 14409;

    t103 = (x5149>>(x5150>>(x5151<=x5152)));

    if (t103 != 340) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x5165 = 56U;
	int8_t x5166 = 0;
	static int32_t x5167 = INT32_MIN;
	int32_t x5168 = INT32_MIN;
	int32_t t104 = -189032081;

    t104 = (x5165>>(x5166>>(x5167<=x5168)));

    if (t104 != 56) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x5229 = INT64_MAX;
	uint32_t x5230 = 1U;
	static int8_t x5231 = 21;
	volatile uint16_t x5232 = UINT16_MAX;
	int64_t t105 = INT64_MAX;

    t105 = (x5229>>(x5230>>(x5231<=x5232)));

    if (t105 != INT64_MAX) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x5309 = 3U;
	int64_t x5310 = 1LL;
	uint64_t x5312 = 51472067052006450LLU;
	int32_t t106 = -75;

    t106 = (x5309>>(x5310>>(x5311<=x5312)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x5365 = 3U;
	int16_t x5366 = 10;
	int64_t x5368 = INT64_MIN;
	int32_t t107 = 4;

    t107 = (x5365>>(x5366>>(x5367<=x5368)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x5439 = INT32_MAX;
	uint8_t x5440 = 52U;
	int32_t t108 = 59655275;

    t108 = (x5437>>(x5438>>(x5439<=x5440)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x5469 = 9938U;
	int32_t x5471 = 13374;
	uint32_t x5472 = 889U;

    t109 = (x5469>>(x5470>>(x5471<=x5472)));

    if (t109 != 310) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x5522 = 20;
	uint64_t x5523 = 15344374LLU;
	static uint64_t x5524 = UINT64_MAX;
	volatile int32_t t110 = -19223;

    t110 = (x5521>>(x5522>>(x5523<=x5524)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x5553 = 273639766461649LL;
	int8_t x5554 = 1;
	int32_t x5555 = INT32_MIN;
	volatile uint32_t x5556 = UINT32_MAX;
	volatile int64_t t111 = -122669340885616LL;

    t111 = (x5553>>(x5554>>(x5555<=x5556)));

    if (t111 != 273639766461649LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x5609 = UINT16_MAX;
	int16_t x5610 = 21;
	int8_t x5611 = INT8_MAX;
	int32_t x5612 = INT32_MAX;

    t112 = (x5609>>(x5610>>(x5611<=x5612)));

    if (t112 != 63) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint8_t x5637 = UINT8_MAX;
	int32_t x5639 = -7;
	volatile int64_t x5640 = INT64_MIN;
	int32_t t113 = 47543;

    t113 = (x5637>>(x5638>>(x5639<=x5640)));

    if (t113 != 7) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x5645 = INT8_MAX;
	volatile uint8_t x5646 = 0U;
	int16_t x5647 = 6;
	uint64_t x5648 = UINT64_MAX;
	volatile int32_t t114 = 57829;

    t114 = (x5645>>(x5646>>(x5647<=x5648)));

    if (t114 != 127) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x5649 = 12U;
	uint8_t x5650 = 1U;
	volatile int16_t x5651 = -1;
	int32_t t115 = -721314;

    t115 = (x5649>>(x5650>>(x5651<=x5652)));

    if (t115 != 6) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x5733 = 5626235;
	int16_t x5734 = 5;
	uint16_t x5735 = UINT16_MAX;
	uint64_t x5736 = 1316223898115366LLU;
	static int32_t t116 = -705051007;

    t116 = (x5733>>(x5734>>(x5735<=x5736)));

    if (t116 != 1406558) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x5793 = 18705617912211981LL;
	volatile int64_t t117 = 1004528714561LL;

    t117 = (x5793>>(x5794>>(x5795<=x5796)));

    if (t117 != 18705617912211981LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x5829 = UINT32_MAX;
	int8_t x5830 = 0;
	static uint32_t x5831 = 45842757U;
	volatile int16_t x5832 = INT16_MIN;

    t118 = (x5829>>(x5830>>(x5831<=x5832)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x5953 = UINT8_MAX;
	static volatile uint32_t x5954 = 1U;
	static volatile int64_t x5955 = 0LL;
	static uint64_t x5956 = UINT64_MAX;
	int32_t t119 = -7316;

    t119 = (x5953>>(x5954>>(x5955<=x5956)));

    if (t119 != 255) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x5978 = 3U;
	static volatile int32_t t120 = 22468;

    t120 = (x5977>>(x5978>>(x5979<=x5980)));

    if (t120 != 1073741823) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x5981 = UINT32_MAX;
	static int8_t x5983 = -4;
	uint64_t x5984 = UINT64_MAX;
	uint32_t t121 = UINT32_MAX;

    t121 = (x5981>>(x5982>>(x5983<=x5984)));

    if (t121 != UINT32_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x6009 = 14U;
	volatile uint16_t x6010 = 14U;
	volatile int64_t x6012 = INT64_MAX;

    t122 = (x6009>>(x6010>>(x6011<=x6012)));

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x6037 = 1;
	int16_t x6039 = 75;
	int32_t x6040 = -24498492;
	volatile int32_t t123 = 3810;

    t123 = (x6037>>(x6038>>(x6039<=x6040)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x6057 = UINT8_MAX;
	int16_t x6058 = 0;
	uint64_t x6059 = 4857LLU;
	int64_t x6060 = INT64_MIN;
	int32_t t124 = -1443;

    t124 = (x6057>>(x6058>>(x6059<=x6060)));

    if (t124 != 255) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x6157 = INT32_MAX;
	uint64_t x6158 = 24LLU;
	uint32_t x6159 = 31616U;
	static int8_t x6160 = INT8_MIN;
	volatile int32_t t125 = 166;

    t125 = (x6157>>(x6158>>(x6159<=x6160)));

    if (t125 != 524287) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x6209 = 0LL;
	uint32_t x6210 = 93U;
	static uint32_t x6211 = 28756U;
	static int8_t x6212 = INT8_MIN;
	volatile int64_t t126 = 586824560LL;

    t126 = (x6209>>(x6210>>(x6211<=x6212)));

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x6255 = INT64_MIN;
	int32_t t127 = -1;

    t127 = (x6253>>(x6254>>(x6255<=x6256)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x6313 = 2LLU;
	volatile uint32_t x6314 = 0U;
	uint32_t x6315 = 1U;
	uint64_t t128 = 149376083832LLU;

    t128 = (x6313>>(x6314>>(x6315<=x6316)));

    if (t128 != 2LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x6485 = 23U;
	volatile int8_t x6486 = 6;
	int8_t x6487 = 30;
	volatile int32_t t129 = 81;

    t129 = (x6485>>(x6486>>(x6487<=x6488)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x6614 = 1;
	static uint8_t x6615 = 23U;
	static uint8_t x6616 = 1U;
	uint64_t t130 = 366985313785821287LLU;

    t130 = (x6613>>(x6614>>(x6615<=x6616)));

    if (t130 != 17LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x6645 = UINT16_MAX;
	uint8_t x6646 = 6U;
	static int8_t x6647 = INT8_MAX;
	int32_t t131 = -869849;

    t131 = (x6645>>(x6646>>(x6647<=x6648)));

    if (t131 != 1023) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x6661 = 20467;
	uint8_t x6663 = 22U;
	int16_t x6664 = -1;
	volatile int32_t t132 = -2;

    t132 = (x6661>>(x6662>>(x6663<=x6664)));

    if (t132 != 10233) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x6749 = INT32_MAX;
	uint8_t x6750 = 1U;
	int8_t x6751 = INT8_MIN;
	uint16_t x6752 = 484U;
	volatile int32_t t133 = INT32_MAX;

    t133 = (x6749>>(x6750>>(x6751<=x6752)));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x6793 = UINT64_MAX;
	uint64_t x6796 = 10843338LLU;
	uint64_t t134 = UINT64_MAX;

    t134 = (x6793>>(x6794>>(x6795<=x6796)));

    if (t134 != UINT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x6865 = INT64_MAX;
	uint16_t x6866 = 26U;
	int8_t x6867 = INT8_MIN;
	int8_t x6868 = -1;

    t135 = (x6865>>(x6866>>(x6867<=x6868)));

    if (t135 != 1125899906842623LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x6885 = 887327;
	static int64_t x6886 = 1LL;
	uint64_t x6887 = 361454LLU;
	int8_t x6888 = INT8_MIN;
	int32_t t136 = 330906;

    t136 = (x6885>>(x6886>>(x6887<=x6888)));

    if (t136 != 887327) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x6909 = 57642108;
	uint16_t x6910 = 3U;
	volatile uint32_t x6911 = UINT32_MAX;
	volatile int32_t t137 = -1621;

    t137 = (x6909>>(x6910>>(x6911<=x6912)));

    if (t137 != 28821054) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x6933 = 833;
	int16_t x6935 = INT16_MIN;
	uint16_t x6936 = 0U;

    t138 = (x6933>>(x6934>>(x6935<=x6936)));

    if (t138 != 416) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x6957 = 2U;
	int64_t x6959 = INT64_MIN;
	int64_t x6960 = -1LL;

    t139 = (x6957>>(x6958>>(x6959<=x6960)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x7009 = 2704444146LLU;
	volatile uint16_t x7010 = 27U;
	volatile int16_t x7012 = INT16_MAX;
	uint64_t t140 = 8743710669786LLU;

    t140 = (x7009>>(x7010>>(x7011<=x7012)));

    if (t140 != 20LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x7065 = UINT16_MAX;
	int32_t x7066 = 9;
	uint16_t x7067 = 455U;
	uint64_t x7068 = 2461053074092949918LLU;
	volatile int32_t t141 = 575158425;

    t141 = (x7065>>(x7066>>(x7067<=x7068)));

    if (t141 != 4095) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x7089 = INT16_MAX;
	uint32_t x7090 = 12U;
	uint32_t x7091 = UINT32_MAX;
	int32_t x7092 = 1;
	int32_t t142 = -1;

    t142 = (x7089>>(x7090>>(x7091<=x7092)));

    if (t142 != 7) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x7161 = INT32_MAX;
	static uint16_t x7162 = 3U;
	volatile int16_t x7163 = INT16_MIN;
	volatile int64_t x7164 = 74113858488466884LL;
	volatile int32_t t143 = -18513;

    t143 = (x7161>>(x7162>>(x7163<=x7164)));

    if (t143 != 1073741823) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x7165 = 2515393794LLU;
	int8_t x7167 = -1;

    t144 = (x7165>>(x7166>>(x7167<=x7168)));

    if (t144 != 76763LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x7197 = INT16_MAX;
	volatile int8_t x7198 = 2;
	static int16_t x7199 = INT16_MIN;
	static int64_t x7200 = INT64_MAX;
	int32_t t145 = -1;

    t145 = (x7197>>(x7198>>(x7199<=x7200)));

    if (t145 != 16383) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x7261 = 5;
	int32_t x7262 = 1;
	uint16_t x7263 = 1U;
	int32_t t146 = 6;

    t146 = (x7261>>(x7262>>(x7263<=x7264)));

    if (t146 != 5) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x7278 = INT8_MAX;
	int8_t x7280 = -1;
	volatile uint64_t t147 = 1444282LLU;

    t147 = (x7277>>(x7278>>(x7279<=x7280)));

    if (t147 != 1LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint8_t x7301 = 44U;
	uint8_t x7302 = 3U;
	uint8_t x7303 = UINT8_MAX;
	int64_t x7304 = INT64_MAX;

    t148 = (x7301>>(x7302>>(x7303<=x7304)));

    if (t148 != 22) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x7363 = 1636864914U;
	int16_t x7364 = INT16_MIN;
	int64_t t149 = -1366399669LL;

    t149 = (x7361>>(x7362>>(x7363<=x7364)));

    if (t149 != 8191LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x7389 = 66035651436092LLU;
	volatile uint8_t x7390 = 15U;
	static volatile int64_t x7391 = -1LL;
	static uint64_t t150 = 5LLU;

    t150 = (x7389>>(x7390>>(x7391<=x7392)));

    if (t150 != 2015248151LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x7430 = 5;
	int8_t x7432 = INT8_MIN;
	int32_t t151 = 112;

    t151 = (x7429>>(x7430>>(x7431<=x7432)));

    if (t151 != 7) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x7466 = 6;
	uint8_t x7467 = UINT8_MAX;
	volatile uint16_t x7468 = UINT16_MAX;
	static volatile uint64_t t152 = 136419527770359034LLU;

    t152 = (x7465>>(x7466>>(x7467<=x7468)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x7527 = INT8_MIN;
	volatile uint64_t t153 = 620823LLU;

    t153 = (x7525>>(x7526>>(x7527<=x7528)));

    if (t153 != 32767LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x7565 = INT8_MAX;
	uint8_t x7566 = 1U;
	int8_t x7567 = -1;
	uint64_t x7568 = 16181012LLU;
	static volatile int32_t t154 = 1844;

    t154 = (x7565>>(x7566>>(x7567<=x7568)));

    if (t154 != 63) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x7573 = 6;
	uint8_t x7574 = 1U;
	int64_t x7575 = INT64_MIN;
	volatile uint8_t x7576 = UINT8_MAX;
	volatile int32_t t155 = 31504;

    t155 = (x7573>>(x7574>>(x7575<=x7576)));

    if (t155 != 6) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x7649 = INT32_MAX;
	uint32_t x7650 = 3U;
	volatile int64_t x7651 = INT64_MAX;
	volatile int32_t t156 = 1;

    t156 = (x7649>>(x7650>>(x7651<=x7652)));

    if (t156 != 268435455) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x7681 = INT32_MAX;
	int8_t x7682 = 1;
	int16_t x7683 = -379;
	volatile uint8_t x7684 = 1U;
	volatile int32_t t157 = INT32_MAX;

    t157 = (x7681>>(x7682>>(x7683<=x7684)));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x7705 = 1U;
	uint16_t x7706 = 8U;
	int8_t x7707 = -52;
	uint8_t x7708 = 4U;

    t158 = (x7705>>(x7706>>(x7707<=x7708)));

    if (t158 != 0U) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x7709 = 30U;
	volatile uint32_t x7710 = 2U;
	uint32_t t159 = 2830261U;

    t159 = (x7709>>(x7710>>(x7711<=x7712)));

    if (t159 != 15U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x7721 = UINT32_MAX;
	uint8_t x7722 = 0U;
	int32_t x7724 = -3059543;
	volatile uint32_t t160 = UINT32_MAX;

    t160 = (x7721>>(x7722>>(x7723<=x7724)));

    if (t160 != UINT32_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x7853 = 168LL;
	int8_t x7855 = INT8_MIN;

    t161 = (x7853>>(x7854>>(x7855<=x7856)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x7857 = INT64_MAX;
	volatile int8_t x7858 = 1;
	volatile int8_t x7859 = -56;
	int64_t t162 = INT64_MAX;

    t162 = (x7857>>(x7858>>(x7859<=x7860)));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x7889 = INT16_MAX;
	static uint16_t x7890 = 6U;
	volatile int32_t x7891 = INT32_MIN;
	int32_t t163 = -2970;

    t163 = (x7889>>(x7890>>(x7891<=x7892)));

    if (t163 != 511) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x7965 = UINT16_MAX;
	int16_t x7966 = 49;
	volatile int32_t x7967 = -1;
	uint16_t x7968 = 20336U;
	volatile int32_t t164 = 50;

    t164 = (x7965>>(x7966>>(x7967<=x7968)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x8073 = 1U;
	static uint16_t x8074 = 1U;
	static int16_t x8075 = INT16_MIN;
	uint8_t x8076 = 117U;

    t165 = (x8073>>(x8074>>(x8075<=x8076)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x8085 = UINT64_MAX;
	int8_t x8086 = INT8_MAX;
	int64_t x8087 = INT64_MIN;
	uint8_t x8088 = 1U;
	uint64_t t166 = 898955809548013931LLU;

    t166 = (x8085>>(x8086>>(x8087<=x8088)));

    if (t166 != 1LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x8105 = 162U;
	static volatile int16_t x8106 = 11;
	static int8_t x8107 = -63;

    t167 = (x8105>>(x8106>>(x8107<=x8108)));

    if (t167 != 5) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x8118 = 7;
	uint8_t x8119 = 11U;
	volatile int32_t t168 = -907;

    t168 = (x8117>>(x8118>>(x8119<=x8120)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x8205 = 2822LL;
	int8_t x8207 = INT8_MIN;
	static volatile int16_t x8208 = INT16_MAX;
	static volatile int64_t t169 = -18111936508LL;

    t169 = (x8205>>(x8206>>(x8207<=x8208)));

    if (t169 != 2822LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x8301 = 643LLU;
	volatile uint32_t x8304 = 3465U;

    t170 = (x8301>>(x8302>>(x8303<=x8304)));

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x8377 = INT16_MAX;
	int32_t x8378 = 2;
	volatile uint64_t x8379 = 8LLU;
	static int64_t x8380 = 581581LL;
	int32_t t171 = 173228701;

    t171 = (x8377>>(x8378>>(x8379<=x8380)));

    if (t171 != 16383) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x8409 = 90797LL;
	volatile int64_t x8410 = 8LL;
	int16_t x8412 = 2;
	int64_t t172 = -15581427LL;

    t172 = (x8409>>(x8410>>(x8411<=x8412)));

    if (t172 != 354LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x8493 = UINT64_MAX;
	int8_t x8494 = 30;
	static volatile uint32_t x8495 = UINT32_MAX;
	uint64_t t173 = 36289080595014138LLU;

    t173 = (x8493>>(x8494>>(x8495<=x8496)));

    if (t173 != 17179869183LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint16_t x8590 = 23U;
	int64_t x8591 = 1930069038937874LL;
	int64_t x8592 = -206735604954449LL;
	uint64_t t174 = 4075443678870LLU;

    t174 = (x8589>>(x8590>>(x8591<=x8592)));

    if (t174 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x8669 = 553035012U;
	int16_t x8670 = 0;
	volatile uint32_t t175 = 19U;

    t175 = (x8669>>(x8670>>(x8671<=x8672)));

    if (t175 != 553035012U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x8682 = 0;
	volatile uint64_t x8683 = UINT64_MAX;
	static int32_t x8684 = INT32_MIN;
	int32_t t176 = 3610680;

    t176 = (x8681>>(x8682>>(x8683<=x8684)));

    if (t176 != 318) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x8761 = 0;
	uint8_t x8762 = 11U;
	int16_t x8763 = -1;
	static volatile int32_t t177 = 430400311;

    t177 = (x8761>>(x8762>>(x8763<=x8764)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x8773 = 2252U;
	uint16_t x8774 = 1U;
	int16_t x8776 = INT16_MAX;

    t178 = (x8773>>(x8774>>(x8775<=x8776)));

    if (t178 != 2252) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x8777 = 2994634726714932743LLU;
	volatile uint64_t x8779 = 63809LLU;
	int32_t x8780 = INT32_MIN;

    t179 = (x8777>>(x8778>>(x8779<=x8780)));

    if (t179 != 1462223987653775LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x8829 = INT8_MAX;
	static int32_t x8830 = 0;
	uint16_t x8831 = 20523U;
	int16_t x8832 = 7;
	volatile int32_t t180 = 880561068;

    t180 = (x8829>>(x8830>>(x8831<=x8832)));

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x8858 = 1U;
	volatile uint16_t x8859 = UINT16_MAX;
	uint8_t x8860 = UINT8_MAX;

    t181 = (x8857>>(x8858>>(x8859<=x8860)));

    if (t181 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x8893 = INT16_MAX;
	static int64_t x8895 = -1LL;
	int8_t x8896 = INT8_MIN;
	volatile int32_t t182 = 1;

    t182 = (x8893>>(x8894>>(x8895<=x8896)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x8949 = INT32_MAX;
	uint8_t x8950 = 46U;
	static volatile uint32_t x8951 = 48U;
	int8_t x8952 = INT8_MAX;
	int32_t t183 = 61705;

    t183 = (x8949>>(x8950>>(x8951<=x8952)));

    if (t183 != 255) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x8953 = UINT64_MAX;
	uint64_t x8954 = 121LLU;
	volatile uint16_t x8955 = 0U;
	volatile uint16_t x8956 = 83U;
	static uint64_t t184 = 13310LLU;

    t184 = (x8953>>(x8954>>(x8955<=x8956)));

    if (t184 != 15LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x8961 = UINT16_MAX;
	static uint16_t x8962 = 0U;
	int32_t x8964 = INT32_MIN;
	volatile int32_t t185 = 10915336;

    t185 = (x8961>>(x8962>>(x8963<=x8964)));

    if (t185 != 65535) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x8989 = 308LLU;
	int8_t x8990 = INT8_MAX;
	static int32_t x8991 = INT32_MAX;

    t186 = (x8989>>(x8990>>(x8991<=x8992)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x9021 = UINT8_MAX;
	int16_t x9023 = -1;
	uint16_t x9024 = 1U;
	volatile int32_t t187 = 13252;

    t187 = (x9021>>(x9022>>(x9023<=x9024)));

    if (t187 != 7) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x9133 = 180420;
	static volatile uint32_t x9134 = 3U;
	static volatile int32_t x9135 = -1;
	static volatile uint32_t x9136 = UINT32_MAX;
	volatile int32_t t188 = 1786;

    t188 = (x9133>>(x9134>>(x9135<=x9136)));

    if (t188 != 90210) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x9190 = 2U;
	int8_t x9192 = -1;
	volatile uint64_t t189 = 6123097211016090LLU;

    t189 = (x9189>>(x9190>>(x9191<=x9192)));

    if (t189 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x9207 = -2LL;
	static int8_t x9208 = -3;
	uint64_t t190 = 3LLU;

    t190 = (x9205>>(x9206>>(x9207<=x9208)));

    if (t190 != 17474850LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x9278 = 0;
	uint64_t x9279 = UINT64_MAX;
	volatile int32_t t191 = 657;

    t191 = (x9277>>(x9278>>(x9279<=x9280)));

    if (t191 != 428902) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x9321 = 4U;
	static uint8_t x9322 = 0U;
	volatile int16_t x9323 = 15;
	static uint32_t x9324 = 1U;

    t192 = (x9321>>(x9322>>(x9323<=x9324)));

    if (t192 != 4) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x9501 = 0;
	volatile uint16_t x9502 = 0U;
	int32_t x9504 = INT32_MIN;

    t193 = (x9501>>(x9502>>(x9503<=x9504)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x9510 = 2U;
	int32_t x9512 = INT32_MIN;
	volatile int32_t t194 = 10125;

    t194 = (x9509>>(x9510>>(x9511<=x9512)));

    if (t194 != 16383) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x9737 = 1U;
	uint32_t x9739 = UINT32_MAX;
	int8_t x9740 = -1;

    t195 = (x9737>>(x9738>>(x9739<=x9740)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x9865 = 3594U;
	uint8_t x9866 = 4U;
	int16_t x9867 = INT16_MIN;
	static int64_t x9868 = INT64_MAX;
	static uint32_t t196 = 17358U;

    t196 = (x9865>>(x9866>>(x9867<=x9868)));

    if (t196 != 898U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x9881 = 2935496U;
	int16_t x9883 = INT16_MIN;
	uint8_t x9884 = UINT8_MAX;

    t197 = (x9881>>(x9882>>(x9883<=x9884)));

    if (t197 != 366937U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x9901 = INT32_MAX;
	static uint16_t x9903 = 6U;
	int32_t x9904 = -1;
	int32_t t198 = 23;

    t198 = (x9901>>(x9902>>(x9903<=x9904)));

    if (t198 != 1023) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x10070 = 8U;
	volatile int64_t x10071 = -1LL;
	uint32_t x10072 = UINT32_MAX;
	int32_t t199 = 4874830;

    t199 = (x10069>>(x10070>>(x10071<=x10072)));

    if (t199 != 4095) { NG(); } else { ; }
	
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

