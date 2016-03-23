
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

int32_t x65 = -1;
int32_t x93 = INT32_MIN;
uint16_t x94 = UINT16_MAX;
uint8_t x164 = 1U;
uint16_t x188 = 13U;
uint64_t t4 = 149922141942352067LLU;
uint64_t x299 = UINT64_MAX;
static volatile uint8_t x509 = 2U;
static uint8_t x512 = 1U;
static volatile uint32_t x554 = UINT32_MAX;
volatile uint64_t t8 = 1LLU;
uint64_t x591 = UINT64_MAX;
uint8_t x592 = 25U;
int64_t x621 = INT64_MAX;
uint8_t x622 = 2U;
int8_t x648 = 1;
int64_t x699 = -1854807214LL;
uint8_t x700 = 0U;
uint8_t x757 = UINT8_MAX;
static volatile int64_t t13 = -4657LL;
int16_t x854 = INT16_MAX;
volatile int32_t t14 = -1;
int8_t x860 = 0;
uint16_t x873 = UINT16_MAX;
int8_t x874 = INT8_MAX;
uint64_t x886 = 28LLU;
volatile int32_t x1130 = INT32_MIN;
volatile uint32_t x1131 = 472057U;
int16_t x1157 = INT16_MIN;
volatile int8_t x1238 = 1;
uint8_t x1240 = 1U;
uint64_t x1358 = 23441645063LLU;
uint16_t x1469 = UINT16_MAX;
static uint16_t x1492 = 12U;
int32_t x1494 = INT32_MAX;
uint64_t x1586 = 786910LLU;
uint8_t x1588 = 3U;
static int8_t x1673 = INT8_MIN;
int16_t x1676 = 1;
static int8_t x1708 = 1;
volatile uint8_t x1766 = 65U;
volatile uint8_t x1768 = 0U;
volatile int32_t x1793 = INT32_MIN;
uint8_t x1796 = 1U;
uint64_t t34 = 828518384847839352LLU;
int8_t x1820 = 22;
static volatile uint64_t t36 = 879156987421760LLU;
int16_t x1887 = INT16_MIN;
static uint64_t x1890 = UINT64_MAX;
static uint64_t x2155 = 47398506119LLU;
volatile int8_t x2185 = INT8_MIN;
static uint8_t x2186 = UINT8_MAX;
static volatile int32_t t43 = -12653051;
volatile int8_t x2238 = 0;
uint32_t t46 = 1877603299U;
static int32_t x2451 = INT32_MIN;
uint64_t t47 = 13900172951877LLU;
int8_t x2525 = INT8_MIN;
int64_t x2587 = INT64_MIN;
static volatile uint64_t t49 = 4375500LLU;
int8_t x2660 = 0;
uint64_t x2797 = 0LLU;
static int32_t x2875 = 11105;
static int8_t x2876 = 11;
int32_t t53 = 2339;
static int8_t x3045 = INT8_MAX;
uint64_t x3046 = 3641234LLU;
volatile uint64_t t54 = 163878986932251LLU;
int8_t x3272 = 1;
static volatile int32_t t58 = 7306;
uint32_t x3289 = 3957U;
static int32_t x3291 = INT32_MAX;
static uint8_t x3320 = 22U;
int64_t t60 = -7074097772949LL;
uint64_t t61 = 32044LLU;
int8_t x3447 = INT8_MIN;
static uint16_t x3448 = 3U;
volatile uint8_t x3560 = 14U;
static uint16_t x3589 = 0U;
volatile int32_t x3593 = -30;
static volatile uint16_t x3701 = 3U;
int8_t x3784 = 0;
uint16_t x3809 = 906U;
volatile uint8_t x3811 = UINT8_MAX;
volatile int32_t t72 = 184813644;
uint8_t x3846 = 4U;
int8_t x3915 = 0;
uint8_t x4173 = UINT8_MAX;
int8_t x4185 = -3;
static int16_t x4186 = INT16_MIN;
uint32_t x4274 = 74906U;
volatile uint32_t t77 = 5432743U;
volatile uint64_t x4407 = 118861045120LLU;
int8_t x4408 = 7;
static volatile uint64_t t78 = 221264347LLU;
uint16_t x4428 = 0U;
static volatile uint32_t t79 = 154U;
int8_t x4542 = -1;
volatile int64_t x4543 = INT64_MIN;
static uint8_t x4614 = 56U;
volatile uint32_t t83 = 6560U;
volatile uint64_t t84 = 17582969LLU;
static volatile uint32_t x4727 = UINT32_MAX;
uint8_t x4728 = 29U;
uint64_t t87 = 3968362LLU;
static volatile uint64_t t88 = 7241251472067845LLU;
static uint16_t x4880 = 43U;
int32_t x4925 = 551784;
int32_t x4927 = -1;
static int32_t x5010 = INT32_MIN;
int64_t t91 = -36378592263771821LL;
int16_t x5064 = 8;
static volatile int16_t x5065 = 1;
uint32_t x5066 = 33216088U;
static uint16_t x5252 = 1U;
int64_t x5333 = -1LL;
int8_t x5451 = INT8_MAX;
int8_t x5520 = 2;
volatile uint32_t t105 = 491567U;
int16_t x5758 = INT16_MIN;
volatile uint64_t t106 = 8855383752880818697LLU;
int8_t x5828 = 1;
int32_t t107 = 0;
static uint64_t x5869 = 258923611948298LLU;
int16_t x6019 = INT16_MIN;
int16_t x6020 = 0;
int8_t x6099 = INT8_MIN;
int32_t x6217 = INT32_MIN;
uint64_t x6219 = UINT64_MAX;
uint32_t x6220 = 0U;
int16_t x6244 = 34;
uint64_t x6248 = 5LLU;
int16_t x6377 = INT16_MIN;
uint32_t x6378 = 325218500U;
uint32_t t120 = 30U;
uint64_t x6521 = UINT64_MAX;
int32_t x6523 = -1;
uint64_t x6574 = UINT64_MAX;
int8_t x6581 = -1;
int32_t x6717 = INT32_MIN;
uint32_t x6718 = UINT32_MAX;
volatile int16_t x6778 = INT16_MIN;
int32_t x6875 = 0;
int16_t x6876 = 6;
uint64_t x6885 = 58821265LLU;
static int16_t x6886 = INT16_MAX;
int8_t x6888 = 29;
volatile uint16_t x6945 = UINT16_MAX;
static uint64_t x7019 = 355794550LLU;
static volatile int64_t t135 = 1011LL;
uint64_t t137 = 36727LLU;
int32_t x7153 = INT32_MIN;
volatile int8_t x7233 = -1;
static uint8_t x7376 = 5U;
volatile int64_t t143 = -14316898LL;
int8_t x7432 = 0;
int32_t t145 = 3;
int16_t x7475 = INT16_MIN;
int16_t x7503 = INT16_MIN;
volatile int64_t t148 = -1525616LL;
static uint64_t x7619 = UINT64_MAX;
int16_t x7620 = 0;
volatile uint64_t t149 = 29979574517656LLU;
static uint16_t x7621 = 26U;
uint8_t x7624 = 12U;
static volatile uint64_t t150 = 679853985LLU;
static int8_t x7634 = INT8_MAX;
uint32_t x7646 = 211402U;
volatile uint64_t t152 = 32LLU;
uint32_t x7685 = 31U;
uint32_t x7688 = 2U;
uint32_t x7697 = 7753U;
int32_t x7698 = INT32_MAX;
uint64_t x7737 = UINT64_MAX;
uint16_t x7796 = 3U;
int8_t x7897 = INT8_MIN;
volatile uint64_t x7935 = 4506082702542LLU;
uint8_t x8116 = 9U;
int32_t x8294 = 44052838;
uint8_t x8296 = 2U;
int32_t x8349 = INT32_MAX;
uint64_t x8350 = 358007475671467482LLU;
static volatile uint64_t t164 = 957LLU;
static int64_t t165 = -3434134601LL;
int8_t x8430 = -1;
static volatile int32_t t167 = 204;
static uint8_t x8597 = 2U;
volatile uint64_t t171 = 7LLU;
static int32_t x8794 = INT32_MIN;
int32_t x8796 = 0;
volatile uint64_t x8805 = 124107579127291LLU;
int8_t x8961 = INT8_MIN;
static int8_t x8963 = 20;
int64_t x8964 = 0LL;
static volatile uint64_t x9059 = UINT64_MAX;
int16_t x9060 = 3;
int16_t x9117 = -1;
static int32_t x9120 = 1;
static uint64_t t180 = 867120863596LLU;
int64_t t182 = 1040523271738896LL;
int64_t x9253 = INT64_MIN;
uint64_t x9254 = 19LLU;
volatile uint32_t x9265 = 124040U;
uint64_t x9267 = UINT64_MAX;
static uint64_t x9390 = 79LLU;
volatile uint64_t t187 = 958307440734749293LLU;
volatile int16_t x9453 = 782;
volatile int16_t x9455 = -3393;
static uint16_t x9456 = 3U;
int64_t t189 = -1393LL;
uint16_t x9536 = 3U;
uint32_t x9576 = 5U;
int16_t x9607 = -4;
int8_t x9638 = INT8_MIN;
static uint64_t t196 = 25774957501LLU;
static uint64_t x9871 = 2006479581981787410LLU;
int64_t x9955 = -33018124793018LL;
uint8_t x9990 = 0U;


void f0(void) {
    	uint8_t x17 = 1U;
	uint32_t x18 = 11111U;
	int8_t x19 = 1;
	static int8_t x20 = 0;
	uint32_t t0 = 308601754U;

    t0 = (((x17|x18)-x19)<<x20);

    if (t0 != 11110U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x66 = -28190433LL;
	uint64_t x67 = 7228LLU;
	int16_t x68 = 1;
	volatile uint64_t t1 = 1205405985LLU;

    t1 = (((x65|x66)-x67)<<x68);

    if (t1 != 18446744073709537158LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x95 = 2534242836356LLU;
	volatile uint64_t x96 = 1LLU;
	uint64_t t2 = 23604LLU;

    t2 = (((x93|x94)-x95)<<x96);

    if (t2 != 18446739000929042678LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x161 = 266977603U;
	int8_t x162 = -53;
	static volatile uint32_t x163 = 1337901U;
	volatile uint32_t t3 = 1U;

    t3 = (((x161|x162)-x163)<<x164);

    if (t3 != 4292291388U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x185 = -1;
	uint64_t x186 = 4LLU;
	uint8_t x187 = UINT8_MAX;

    t4 = (((x185|x186)-x187)<<x188);

    if (t4 != 18446744073707454464LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x297 = -1;
	volatile int32_t x298 = -1;
	static uint8_t x300 = 26U;
	uint64_t t5 = 561074370591773515LLU;

    t5 = (((x297|x298)-x299)<<x300);

    if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x510 = -1;
	int8_t x511 = INT8_MIN;
	volatile int32_t t6 = -33;

    t6 = (((x509|x510)-x511)<<x512);

    if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x553 = -1;
	static int16_t x555 = -1;
	static uint8_t x556 = 1U;
	uint32_t t7 = 173U;

    t7 = (((x553|x554)-x555)<<x556);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x569 = 8591LLU;
	uint64_t x570 = 34929943604389LLU;
	int16_t x571 = 14335;
	uint8_t x572 = 2U;

    t8 = (((x569|x570)-x571)<<x572);

    if (t8 != 139719774361280LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x589 = INT8_MAX;
	uint64_t x590 = 6764838138602LLU;
	uint64_t t9 = 309747881689LLU;

    t9 = (((x589|x590)-x591)<<x592);

    if (t9 != 5629372428950962176LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x623 = INT32_MAX;
	uint16_t x624 = 0U;
	int64_t t10 = 108609049529LL;

    t10 = (((x621|x622)-x623)<<x624);

    if (t10 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x645 = -1;
	int32_t x646 = 3;
	int16_t x647 = INT16_MIN;
	static volatile int32_t t11 = 4899764;

    t11 = (((x645|x646)-x647)<<x648);

    if (t11 != 65534) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x697 = 226540116U;
	uint16_t x698 = 2972U;
	int64_t t12 = -837970057LL;

    t12 = (((x697|x698)-x699)<<x700);

    if (t12 != 2081347722LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x758 = 8320271039133107LL;
	int16_t x759 = 116;
	uint32_t x760 = 0U;

    t13 = (((x757|x758)-x759)<<x760);

    if (t13 != 8320271039133067LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x853 = UINT16_MAX;
	uint16_t x855 = 7U;
	int32_t x856 = 0;

    t14 = (((x853|x854)-x855)<<x856);

    if (t14 != 65528) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint8_t x857 = UINT8_MAX;
	uint16_t x858 = 3U;
	uint16_t x859 = 18U;
	int32_t t15 = 116600;

    t15 = (((x857|x858)-x859)<<x860);

    if (t15 != 237) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x875 = -1LL;
	uint8_t x876 = 18U;
	int64_t t16 = 51LL;

    t16 = (((x873|x874)-x875)<<x876);

    if (t16 != 17179869184LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x885 = 8;
	int32_t x887 = INT32_MAX;
	static int8_t x888 = 0;
	volatile uint64_t t17 = 5896902LLU;

    t17 = (((x885|x886)-x887)<<x888);

    if (t17 != 18446744071562067997LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x945 = 5234U;
	static int64_t x946 = 1LL;
	int8_t x947 = -1;
	volatile uint16_t x948 = 1U;
	int64_t t18 = -3924980014910039LL;

    t18 = (((x945|x946)-x947)<<x948);

    if (t18 != 10472LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x957 = INT16_MIN;
	volatile int32_t x958 = INT32_MIN;
	int64_t x959 = INT64_MIN;
	volatile int64_t x960 = 0LL;
	volatile int64_t t19 = -1LL;

    t19 = (((x957|x958)-x959)<<x960);

    if (t19 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x1129 = UINT16_MAX;
	volatile int8_t x1132 = 2;
	uint32_t t20 = 14279U;

    t20 = (((x1129|x1130)-x1131)<<x1132);

    if (t20 != 4293341208U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x1158 = UINT8_MAX;
	volatile uint32_t x1159 = 971U;
	volatile uint32_t x1160 = 0U;
	static uint32_t t21 = 20958694U;

    t21 = (((x1157|x1158)-x1159)<<x1160);

    if (t21 != 4294933812U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x1185 = 16877U;
	int32_t x1186 = -11;
	int16_t x1187 = 1;
	volatile uint8_t x1188 = 29U;
	volatile uint32_t t22 = 1598709205U;

    t22 = (((x1185|x1186)-x1187)<<x1188);

    if (t22 != 2147483648U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x1237 = UINT16_MAX;
	int16_t x1239 = -1;
	volatile int32_t t23 = 1;

    t23 = (((x1237|x1238)-x1239)<<x1240);

    if (t23 != 131072) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x1305 = 86685792203LLU;
	int32_t x1306 = -1;
	int64_t x1307 = INT64_MIN;
	uint8_t x1308 = 0U;
	static uint64_t t24 = 462LLU;

    t24 = (((x1305|x1306)-x1307)<<x1308);

    if (t24 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x1357 = INT8_MAX;
	int16_t x1359 = INT16_MAX;
	volatile uint16_t x1360 = 7U;
	uint64_t t25 = 3979675624274LLU;

    t25 = (((x1357|x1358)-x1359)<<x1360);

    if (t25 != 3000526389248LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x1470 = 4U;
	int8_t x1471 = -1;
	uint32_t x1472 = 1U;
	uint32_t t26 = 173089521U;

    t26 = (((x1469|x1470)-x1471)<<x1472);

    if (t26 != 131072U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x1489 = -6;
	uint8_t x1490 = UINT8_MAX;
	volatile uint32_t x1491 = UINT32_MAX;
	volatile uint32_t t27 = 201U;

    t27 = (((x1489|x1490)-x1491)<<x1492);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x1493 = UINT8_MAX;
	int32_t x1495 = 1719;
	volatile int64_t x1496 = 0LL;
	int32_t t28 = 90;

    t28 = (((x1493|x1494)-x1495)<<x1496);

    if (t28 != 2147481928) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x1585 = 27857073U;
	static int8_t x1587 = INT8_MIN;
	static volatile uint64_t t29 = 5266213773610LLU;

    t29 = (((x1585|x1586)-x1587)<<x1588);

    if (t29 != 224957432LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x1674 = 7559767;
	volatile int32_t x1675 = -915909;
	int32_t t30 = 14916;

    t30 = (((x1673|x1674)-x1675)<<x1676);

    if (t30 != 1831736) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x1705 = 469118LL;
	volatile uint8_t x1706 = 0U;
	uint8_t x1707 = UINT8_MAX;
	static volatile int64_t t31 = 16LL;

    t31 = (((x1705|x1706)-x1707)<<x1708);

    if (t31 != 937726LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x1741 = -1LL;
	uint64_t x1742 = 2LLU;
	int8_t x1743 = INT8_MIN;
	int16_t x1744 = 9;
	volatile uint64_t t32 = 17099194540814LLU;

    t32 = (((x1741|x1742)-x1743)<<x1744);

    if (t32 != 65024LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int8_t x1765 = INT8_MIN;
	volatile uint64_t x1767 = 1455820775436LLU;
	static volatile uint64_t t33 = 959LLU;

    t33 = (((x1765|x1766)-x1767)<<x1768);

    if (t33 != 18446742617888776117LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x1794 = 39645LLU;
	volatile uint32_t x1795 = 604070U;

    t34 = (((x1793|x1794)-x1795)<<x1796);

    if (t34 != 18446744069413455470LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x1817 = -1;
	int64_t x1818 = -1LL;
	int8_t x1819 = -3;
	int64_t t35 = -53643447440055837LL;

    t35 = (((x1817|x1818)-x1819)<<x1820);

    if (t35 != 8388608LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1869 = -868;
	uint64_t x1870 = UINT64_MAX;
	int64_t x1871 = -1LL;
	volatile uint8_t x1872 = 11U;

    t36 = (((x1869|x1870)-x1871)<<x1872);

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x1885 = 6U;
	static volatile uint16_t x1886 = 27U;
	static uint8_t x1888 = 1U;
	int32_t t37 = -14975;

    t37 = (((x1885|x1886)-x1887)<<x1888);

    if (t37 != 65598) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x1889 = INT64_MIN;
	int32_t x1891 = -1;
	uint8_t x1892 = 60U;
	static uint64_t t38 = 5473308LLU;

    t38 = (((x1889|x1890)-x1891)<<x1892);

    if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint32_t x2109 = 1677799U;
	uint8_t x2110 = 43U;
	static volatile uint16_t x2111 = 177U;
	uint16_t x2112 = 1U;
	static uint32_t t39 = 28925U;

    t39 = (((x2109|x2110)-x2111)<<x2112);

    if (t39 != 3355260U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x2133 = -11097956;
	int16_t x2134 = INT16_MAX;
	uint32_t x2135 = UINT32_MAX;
	uint16_t x2136 = 3U;
	uint32_t t40 = 250315039U;

    t40 = (((x2133|x2134)-x2135)<<x2136);

    if (t40 != 4206362624U) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x2153 = -7;
	uint16_t x2154 = 5185U;
	static uint64_t x2156 = 0LLU;
	volatile uint64_t t41 = 196137265434267LLU;

    t41 = (((x2153|x2154)-x2155)<<x2156);

    if (t41 != 18446744026311045490LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x2169 = 152019231352412LLU;
	int32_t x2170 = -21289502;
	int64_t x2171 = INT64_MAX;
	uint8_t x2172 = 24U;
	uint64_t t42 = 1669087567019542LLU;

    t42 = (((x2169|x2170)-x2171)<<x2172);

    if (t42 != 18446457822712430592LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x2187 = -1;
	int16_t x2188 = 7;

    t43 = (((x2185|x2186)-x2187)<<x2188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x2237 = INT8_MIN;
	uint32_t x2239 = UINT32_MAX;
	static int64_t x2240 = 6LL;
	uint32_t t44 = 48U;

    t44 = (((x2237|x2238)-x2239)<<x2240);

    if (t44 != 4294959168U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x2309 = INT8_MAX;
	int64_t x2310 = 910LL;
	volatile int32_t x2311 = INT32_MIN;
	int32_t x2312 = 1;
	static int64_t t45 = 722442610752933LL;

    t45 = (((x2309|x2310)-x2311)<<x2312);

    if (t45 != 4294969342LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x2365 = -1;
	uint32_t x2366 = 2288380U;
	int8_t x2367 = INT8_MIN;
	uint8_t x2368 = 14U;

    t46 = (((x2365|x2366)-x2367)<<x2368);

    if (t46 != 2080768U) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x2449 = INT32_MIN;
	uint64_t x2450 = 8712LLU;
	uint8_t x2452 = 2U;

    t47 = (((x2449|x2450)-x2451)<<x2452);

    if (t47 != 34848LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x2526 = 587637371405293LLU;
	volatile uint32_t x2527 = 53U;
	uint16_t x2528 = 1U;
	volatile uint64_t t48 = 37731691242071LLU;

    t48 = (((x2525|x2526)-x2527)<<x2528);

    if (t48 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x2585 = INT32_MIN;
	uint64_t x2586 = UINT64_MAX;
	uint64_t x2588 = 3LLU;

    t49 = (((x2585|x2586)-x2587)<<x2588);

    if (t49 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x2657 = INT32_MAX;
	static uint32_t x2658 = UINT32_MAX;
	uint8_t x2659 = 4U;
	static uint32_t t50 = 6U;

    t50 = (((x2657|x2658)-x2659)<<x2660);

    if (t50 != 4294967291U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x2701 = 299U;
	volatile uint8_t x2702 = 101U;
	int64_t x2703 = -1LL;
	volatile uint64_t x2704 = 1LLU;
	volatile int64_t t51 = -19026535292498LL;

    t51 = (((x2701|x2702)-x2703)<<x2704);

    if (t51 != 736LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x2798 = INT64_MIN;
	uint16_t x2799 = UINT16_MAX;
	int8_t x2800 = 1;
	uint64_t t52 = 1LLU;

    t52 = (((x2797|x2798)-x2799)<<x2800);

    if (t52 != 18446744073709420546LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint8_t x2873 = UINT8_MAX;
	static uint16_t x2874 = UINT16_MAX;

    t53 = (((x2873|x2874)-x2875)<<x2876);

    if (t53 != 111472640) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x3047 = -1LL;
	volatile int8_t x3048 = 2;

    t54 = (((x3045|x3046)-x3047)<<x3048);

    if (t54 != 14565376LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x3125 = 0LLU;
	static uint32_t x3126 = 41381544U;
	static uint16_t x3127 = 1U;
	uint32_t x3128 = 0U;
	volatile uint64_t t55 = 1208947162571901329LLU;

    t55 = (((x3125|x3126)-x3127)<<x3128);

    if (t55 != 41381543LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x3177 = 1;
	int64_t x3178 = INT64_MIN;
	volatile uint64_t x3179 = 265641099347LLU;
	static volatile uint8_t x3180 = 55U;
	static volatile uint64_t t56 = 7360LLU;

    t56 = (((x3177|x3178)-x3179)<<x3180);

    if (t56 != 15492382718154506240LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x3205 = INT8_MIN;
	volatile int32_t x3206 = -579292;
	int16_t x3207 = INT16_MIN;
	uint16_t x3208 = 0U;
	int32_t t57 = 3132;

    t57 = (((x3205|x3206)-x3207)<<x3208);

    if (t57 != 32676) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x3269 = -26;
	volatile int16_t x3270 = 13;
	static volatile int8_t x3271 = INT8_MIN;

    t58 = (((x3269|x3270)-x3271)<<x3272);

    if (t58 != 222) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x3290 = INT32_MIN;
	int8_t x3292 = 0;
	volatile uint32_t t59 = 135713431U;

    t59 = (((x3289|x3290)-x3291)<<x3292);

    if (t59 != 3958U) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x3317 = 0;
	volatile int64_t x3318 = 244775LL;
	volatile int32_t x3319 = INT32_MIN;

    t60 = (((x3317|x3318)-x3319)<<x3320);

    if (t60 != 9008225915502592LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x3397 = UINT32_MAX;
	int32_t x3398 = INT32_MAX;
	uint64_t x3399 = 560LLU;
	uint32_t x3400 = 0U;

    t61 = (((x3397|x3398)-x3399)<<x3400);

    if (t61 != 4294966735LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x3445 = 49641365938883791LL;
	volatile uint8_t x3446 = 6U;
	int64_t t62 = -112LL;

    t62 = (((x3445|x3446)-x3447)<<x3448);

    if (t62 != 397130927511071352LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x3557 = 49380264U;
	int8_t x3558 = INT8_MAX;
	static int8_t x3559 = INT8_MIN;
	volatile uint32_t t63 = 180018U;

    t63 = (((x3557|x3558)-x3559)<<x3560);

    if (t63 != 1595916288U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x3561 = INT16_MIN;
	uint32_t x3562 = UINT32_MAX;
	volatile int32_t x3563 = -1;
	uint64_t x3564 = 5LLU;
	uint32_t t64 = 1674U;

    t64 = (((x3561|x3562)-x3563)<<x3564);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x3573 = INT8_MIN;
	uint16_t x3574 = UINT16_MAX;
	volatile int8_t x3575 = INT8_MIN;
	volatile uint16_t x3576 = 0U;
	int32_t t65 = -118;

    t65 = (((x3573|x3574)-x3575)<<x3576);

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x3590 = INT16_MIN;
	uint32_t x3591 = UINT32_MAX;
	int8_t x3592 = 0;
	volatile uint32_t t66 = 270U;

    t66 = (((x3589|x3590)-x3591)<<x3592);

    if (t66 != 4294934529U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x3594 = -1;
	static uint64_t x3595 = 1809LLU;
	int8_t x3596 = 0;
	static volatile uint64_t t67 = 335062694LLU;

    t67 = (((x3593|x3594)-x3595)<<x3596);

    if (t67 != 18446744073709549806LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x3681 = -1;
	uint64_t x3682 = UINT64_MAX;
	static int16_t x3683 = INT16_MIN;
	int64_t x3684 = 11LL;
	volatile uint64_t t68 = 312741217LLU;

    t68 = (((x3681|x3682)-x3683)<<x3684);

    if (t68 != 67106816LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x3702 = 4U;
	uint16_t x3703 = UINT16_MAX;
	int8_t x3704 = 8;
	static volatile uint32_t t69 = 3486017U;

    t69 = (((x3701|x3702)-x3703)<<x3704);

    if (t69 != 4278192128U) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x3777 = INT8_MIN;
	uint64_t x3778 = 388LLU;
	volatile int64_t x3779 = 1761224842339842250LL;
	uint32_t x3780 = 45U;
	volatile uint64_t t70 = 17790107223773LLU;

    t70 = (((x3777|x3778)-x3779)<<x3780);

    if (t70 != 12742724039412285440LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x3781 = INT16_MIN;
	int32_t x3782 = -1;
	static int16_t x3783 = INT16_MIN;
	int32_t t71 = 491611;

    t71 = (((x3781|x3782)-x3783)<<x3784);

    if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x3810 = 1U;
	static int8_t x3812 = 1;

    t72 = (((x3809|x3810)-x3811)<<x3812);

    if (t72 != 1304) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x3845 = INT16_MAX;
	int8_t x3847 = INT8_MAX;
	uint8_t x3848 = 10U;
	int32_t t73 = -441703395;

    t73 = (((x3845|x3846)-x3847)<<x3848);

    if (t73 != 33423360) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x3913 = 7599U;
	static int16_t x3914 = 4320;
	int16_t x3916 = 17;
	int32_t t74 = -488;

    t74 = (((x3913|x3914)-x3915)<<x3916);

    if (t74 != 1004404736) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x4174 = 60U;
	volatile uint8_t x4175 = 29U;
	uint16_t x4176 = 21U;
	volatile int32_t t75 = 340539;

    t75 = (((x4173|x4174)-x4175)<<x4176);

    if (t75 != 473956352) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint64_t x4187 = UINT64_MAX;
	volatile uint8_t x4188 = 1U;
	uint64_t t76 = 1937097017LLU;

    t76 = (((x4185|x4186)-x4187)<<x4188);

    if (t76 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x4273 = INT16_MIN;
	static int8_t x4275 = INT8_MIN;
	int16_t x4276 = 7;

    t77 = (((x4273|x4274)-x4275)<<x4276);

    if (t77 != 4291988736U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x4405 = 3U;
	int16_t x4406 = INT16_MIN;

    t78 = (((x4405|x4406)-x4407)<<x4408);

    if (t78 != 18446728859491582336LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x4425 = 131467723U;
	int8_t x4426 = 1;
	int32_t x4427 = -1;

    t79 = (((x4425|x4426)-x4427)<<x4428);

    if (t79 != 131467724U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x4477 = 0;
	volatile uint8_t x4478 = 31U;
	uint64_t x4479 = 2839740387LLU;
	uint16_t x4480 = 7U;
	uint64_t t80 = 198558850260LLU;

    t80 = (((x4477|x4478)-x4479)<<x4480);

    if (t80 != 18446743710222786048LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x4541 = INT32_MIN;
	static volatile uint8_t x4544 = 0U;
	volatile int64_t t81 = INT64_MAX;

    t81 = (((x4541|x4542)-x4543)<<x4544);

    if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x4613 = 6603LLU;
	uint16_t x4615 = UINT16_MAX;
	int8_t x4616 = 3;
	volatile uint64_t t82 = 3677LLU;

    t82 = (((x4613|x4614)-x4615)<<x4616);

    if (t82 != 18446744073709080544LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x4657 = 18U;
	volatile int8_t x4658 = INT8_MIN;
	int32_t x4659 = INT32_MAX;
	volatile uint8_t x4660 = 3U;

    t83 = (((x4657|x4658)-x4659)<<x4660);

    if (t83 != 4294966424U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x4693 = INT32_MIN;
	int64_t x4694 = -477707927LL;
	uint64_t x4695 = 708681397960LLU;
	uint64_t x4696 = 1LLU;

    t84 = (((x4693|x4694)-x4695)<<x4696);

    if (t84 != 18446742655391339842LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x4709 = 222;
	int64_t x4710 = -1LL;
	uint64_t x4711 = 1827459107548LLU;
	int8_t x4712 = 1;
	uint64_t t85 = 17671LLU;

    t85 = (((x4709|x4710)-x4711)<<x4712);

    if (t85 != 18446740418791336518LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x4721 = 5591U;
	volatile uint64_t x4722 = UINT64_MAX;
	uint16_t x4723 = 52U;
	int8_t x4724 = 0;
	uint64_t t86 = 69127916LLU;

    t86 = (((x4721|x4722)-x4723)<<x4724);

    if (t86 != 18446744073709551563LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x4725 = UINT64_MAX;
	uint32_t x4726 = UINT32_MAX;

    t87 = (((x4725|x4726)-x4727)<<x4728);

    if (t87 != 16140901064495857664LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x4737 = 29U;
	uint32_t x4738 = 3U;
	uint64_t x4739 = UINT64_MAX;
	uint8_t x4740 = 9U;

    t88 = (((x4737|x4738)-x4739)<<x4740);

    if (t88 != 16384LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x4877 = 12LLU;
	uint8_t x4878 = 11U;
	static int16_t x4879 = -1;
	static uint64_t t89 = 47980017026LLU;

    t89 = (((x4877|x4878)-x4879)<<x4880);

    if (t89 != 140737488355328LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x4926 = -1;
	static volatile uint8_t x4928 = 11U;
	int32_t t90 = 165;

    t90 = (((x4925|x4926)-x4927)<<x4928);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x5009 = INT64_MAX;
	int64_t x5011 = -1LL;
	volatile int8_t x5012 = 12;

    t91 = (((x5009|x5010)-x5011)<<x5012);

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x5061 = UINT64_MAX;
	int8_t x5062 = -13;
	static int8_t x5063 = -1;
	volatile uint64_t t92 = 2827645720LLU;

    t92 = (((x5061|x5062)-x5063)<<x5064);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x5067 = 4;
	uint8_t x5068 = 23U;
	volatile uint32_t t93 = 1037096386U;

    t93 = (((x5065|x5066)-x5067)<<x5068);

    if (t93 != 713031680U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x5165 = -426;
	int8_t x5166 = -1;
	int16_t x5167 = INT16_MIN;
	uint8_t x5168 = 3U;
	int32_t t94 = -4189459;

    t94 = (((x5165|x5166)-x5167)<<x5168);

    if (t94 != 262136) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int16_t x5193 = INT16_MIN;
	int32_t x5194 = INT32_MIN;
	volatile uint64_t x5195 = 34394556634240655LLU;
	volatile uint8_t x5196 = 29U;
	uint64_t t95 = 54169246468088122LLU;

    t95 = (((x5193|x5194)-x5195)<<x5196);

    if (t95 != 12084122270037966848LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x5249 = INT32_MIN;
	int64_t x5250 = INT64_MAX;
	int64_t x5251 = -23513415476LL;
	volatile int64_t t96 = -86500054LL;

    t96 = (((x5249|x5250)-x5251)<<x5252);

    if (t96 != 47026830950LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x5334 = 69079604LLU;
	volatile int16_t x5335 = 2015;
	static volatile uint64_t x5336 = 40LLU;
	volatile uint64_t t97 = 2968213948119LLU;

    t97 = (((x5333|x5334)-x5335)<<x5336);

    if (t97 != 18444527458267955200LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x5361 = 20;
	uint64_t x5362 = 282369883072721393LLU;
	volatile int64_t x5363 = -164495LL;
	static int16_t x5364 = 1;
	volatile uint64_t t98 = 19LLU;

    t98 = (((x5361|x5362)-x5363)<<x5364);

    if (t98 != 564739766145771784LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x5449 = UINT64_MAX;
	volatile int16_t x5450 = INT16_MIN;
	static uint8_t x5452 = 6U;
	uint64_t t99 = 89184773399797LLU;

    t99 = (((x5449|x5450)-x5451)<<x5452);

    if (t99 != 18446744073709543424LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x5485 = 2580U;
	int8_t x5486 = -54;
	volatile uint64_t x5487 = 457LLU;
	int16_t x5488 = 0;
	uint64_t t100 = 221250510499LLU;

    t100 = (((x5485|x5486)-x5487)<<x5488);

    if (t100 != 18446744073709551125LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint64_t x5497 = UINT64_MAX;
	volatile uint16_t x5498 = 639U;
	int32_t x5499 = -40;
	volatile uint8_t x5500 = 10U;
	volatile uint64_t t101 = 4310183140801575156LLU;

    t101 = (((x5497|x5498)-x5499)<<x5500);

    if (t101 != 39936LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x5517 = -1;
	int16_t x5518 = -1;
	int16_t x5519 = -295;
	volatile int32_t t102 = -118759552;

    t102 = (((x5517|x5518)-x5519)<<x5520);

    if (t102 != 1176) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x5557 = 736;
	int64_t x5558 = INT64_MIN;
	int64_t x5559 = INT64_MIN;
	uint64_t x5560 = 3LLU;
	volatile int64_t t103 = -62569LL;

    t103 = (((x5557|x5558)-x5559)<<x5560);

    if (t103 != 5888LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x5569 = INT16_MIN;
	int32_t x5570 = -1;
	static uint32_t x5571 = 59728861U;
	static volatile int8_t x5572 = 4;
	volatile uint32_t t104 = 0U;

    t104 = (((x5569|x5570)-x5571)<<x5572);

    if (t104 != 3339305504U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x5593 = UINT8_MAX;
	int32_t x5594 = INT32_MIN;
	uint32_t x5595 = UINT32_MAX;
	static uint8_t x5596 = 1U;

    t105 = (((x5593|x5594)-x5595)<<x5596);

    if (t105 != 512U) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x5757 = -1;
	static volatile uint64_t x5759 = UINT64_MAX;
	int64_t x5760 = 28LL;

    t106 = (((x5757|x5758)-x5759)<<x5760);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x5825 = INT16_MIN;
	int16_t x5826 = INT16_MAX;
	static int32_t x5827 = -1;

    t107 = (((x5825|x5826)-x5827)<<x5828);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x5870 = 1U;
	uint64_t x5871 = UINT64_MAX;
	int32_t x5872 = 0;
	static volatile uint64_t t108 = 13517999LLU;

    t108 = (((x5869|x5870)-x5871)<<x5872);

    if (t108 != 258923611948300LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x5941 = -2;
	static uint32_t x5942 = UINT32_MAX;
	uint16_t x5943 = 1010U;
	uint8_t x5944 = 25U;
	uint32_t t109 = 1U;

    t109 = (((x5941|x5942)-x5943)<<x5944);

    if (t109 != 436207616U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x6013 = 179490820U;
	volatile uint64_t x6014 = 60140176683LLU;
	int64_t x6015 = 6994560579149LL;
	uint16_t x6016 = 14U;
	static uint64_t t110 = 1026293429102585LLU;

    t110 = (((x6013|x6014)-x6015)<<x6016);

    if (t110 != 18333133296398532608LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x6017 = INT8_MIN;
	uint8_t x6018 = 4U;
	int32_t t111 = -33529096;

    t111 = (((x6017|x6018)-x6019)<<x6020);

    if (t111 != 32644) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x6041 = INT32_MIN;
	uint32_t x6042 = 729U;
	int16_t x6043 = -209;
	int8_t x6044 = 1;
	volatile uint32_t t112 = 34607865U;

    t112 = (((x6041|x6042)-x6043)<<x6044);

    if (t112 != 1876U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x6097 = UINT32_MAX;
	volatile int32_t x6098 = -1;
	static uint8_t x6100 = 1U;
	volatile uint32_t t113 = 3324U;

    t113 = (((x6097|x6098)-x6099)<<x6100);

    if (t113 != 254U) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x6185 = UINT64_MAX;
	static uint64_t x6186 = 1137694728545LLU;
	int32_t x6187 = -1;
	uint16_t x6188 = 0U;
	uint64_t t114 = 4280725375194LLU;

    t114 = (((x6185|x6186)-x6187)<<x6188);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x6193 = UINT32_MAX;
	uint64_t x6194 = 30115624950547085LLU;
	static int32_t x6195 = INT32_MIN;
	int8_t x6196 = 3;
	static volatile uint64_t t115 = 7391475221485143LLU;

    t115 = (((x6193|x6194)-x6195)<<x6196);

    if (t115 != 240925039417884664LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x6218 = 6682348U;
	uint64_t t116 = 6780716267LLU;

    t116 = (((x6217|x6218)-x6219)<<x6220);

    if (t116 != 2154165997LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x6229 = 64866275754525698LLU;
	int8_t x6230 = -1;
	uint32_t x6231 = UINT32_MAX;
	int8_t x6232 = 0;
	uint64_t t117 = 120066772989LLU;

    t117 = (((x6229|x6230)-x6231)<<x6232);

    if (t117 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x6241 = UINT64_MAX;
	static int16_t x6242 = -3120;
	int8_t x6243 = INT8_MIN;
	uint64_t t118 = 8LLU;

    t118 = (((x6241|x6242)-x6243)<<x6244);

    if (t118 != 2181843386368LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x6245 = -1;
	int16_t x6246 = INT16_MAX;
	uint64_t x6247 = 1700993063LLU;
	uint64_t t119 = 365258LLU;

    t119 = (((x6245|x6246)-x6247)<<x6248);

    if (t119 != 18446744019277773568LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x6379 = 2076146U;
	int64_t x6380 = 21LL;

    t120 = (((x6377|x6378)-x6379)<<x6380);

    if (t120 != 1514143744U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x6522 = UINT8_MAX;
	volatile int8_t x6524 = 12;
	volatile uint64_t t121 = 52816831702LLU;

    t121 = (((x6521|x6522)-x6523)<<x6524);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x6573 = INT64_MIN;
	static int16_t x6575 = -1;
	static uint32_t x6576 = 0U;
	volatile uint64_t t122 = 0LLU;

    t122 = (((x6573|x6574)-x6575)<<x6576);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x6582 = 503;
	int16_t x6583 = -4;
	int8_t x6584 = 1;
	int32_t t123 = 0;

    t123 = (((x6581|x6582)-x6583)<<x6584);

    if (t123 != 6) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x6657 = INT64_MIN;
	static volatile int64_t x6658 = INT64_MIN;
	int64_t x6659 = INT64_MIN;
	uint64_t x6660 = 48LLU;
	volatile int64_t t124 = 0LL;

    t124 = (((x6657|x6658)-x6659)<<x6660);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int64_t x6697 = INT64_MAX;
	int8_t x6698 = INT8_MIN;
	int16_t x6699 = -1;
	static int64_t x6700 = 1LL;
	int64_t t125 = -144828082104LL;

    t125 = (((x6697|x6698)-x6699)<<x6700);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x6719 = INT8_MIN;
	uint8_t x6720 = 11U;
	static volatile uint32_t t126 = 54131U;

    t126 = (((x6717|x6718)-x6719)<<x6720);

    if (t126 != 260096U) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x6777 = 1452688745681637773LLU;
	uint32_t x6779 = 241U;
	volatile uint64_t x6780 = 2LLU;
	volatile uint64_t t127 = 686138472112412472LLU;

    t127 = (((x6777|x6778)-x6779)<<x6780);

    if (t127 != 18446744073709503088LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x6817 = 44896U;
	int16_t x6818 = 5025;
	volatile int32_t x6819 = INT32_MIN;
	int16_t x6820 = 0;
	volatile uint32_t t128 = 1904519U;

    t128 = (((x6817|x6818)-x6819)<<x6820);

    if (t128 != 2147532769U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x6873 = 1644837LLU;
	static uint8_t x6874 = 6U;
	uint64_t t129 = 55901378348571LLU;

    t129 = (((x6873|x6874)-x6875)<<x6876);

    if (t129 != 105269696LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x6887 = -1;
	volatile uint64_t t130 = 2573LLU;

    t130 = (((x6885|x6886)-x6887)<<x6888);

    if (t130 != 31595566135771136LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x6946 = 2905U;
	uint64_t x6947 = 16484523113163054LLU;
	uint32_t x6948 = 17U;
	volatile uint64_t t131 = 191084769303133LLU;

    t131 = (((x6945|x6946)-x6947)<<x6948);

    if (t131 != 16056387217809080320LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x7017 = -5728LL;
	int64_t x7018 = INT64_MIN;
	int64_t x7020 = 1LL;
	volatile uint64_t t132 = 50598800503LLU;

    t132 = (((x7017|x7018)-x7019)<<x7020);

    if (t132 != 18446744072997951060LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x7025 = -2;
	int16_t x7026 = -1949;
	int32_t x7027 = -88408;
	static volatile int8_t x7028 = 1;
	int32_t t133 = -3736;

    t133 = (((x7025|x7026)-x7027)<<x7028);

    if (t133 != 176814) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x7061 = INT16_MAX;
	volatile int32_t x7062 = INT32_MIN;
	uint32_t x7063 = 4565110U;
	uint8_t x7064 = 2U;
	uint32_t t134 = 61389141U;

    t134 = (((x7061|x7062)-x7063)<<x7064);

    if (t134 != 4276837924U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x7077 = -2093LL;
	volatile int64_t x7078 = INT64_MAX;
	volatile int16_t x7079 = INT16_MIN;
	volatile uint8_t x7080 = 7U;

    t135 = (((x7077|x7078)-x7079)<<x7080);

    if (t135 != 4194176LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x7093 = 170858880842LLU;
	int32_t x7094 = INT32_MIN;
	uint8_t x7095 = 14U;
	int8_t x7096 = 0;
	uint64_t t136 = 250646902LLU;

    t136 = (((x7093|x7094)-x7095)<<x7096);

    if (t136 != 18446744072769740604LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x7145 = INT64_MIN;
	static uint8_t x7146 = 48U;
	uint64_t x7147 = 167139LLU;
	uint8_t x7148 = 1U;

    t137 = (((x7145|x7146)-x7147)<<x7148);

    if (t137 != 18446744073709217434LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x7154 = 38044893837LL;
	volatile uint64_t x7155 = 919977468475675432LLU;
	volatile uint8_t x7156 = 31U;
	uint64_t t138 = 73798158602LLU;

    t138 = (((x7153|x7154)-x7155)<<x7156);

    if (t138 != 15917400804034609152LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint8_t x7161 = 19U;
	volatile uint16_t x7162 = 336U;
	volatile int64_t x7163 = -3864082LL;
	volatile int8_t x7164 = 4;
	int64_t t139 = -11871158000673LL;

    t139 = (((x7161|x7162)-x7163)<<x7164);

    if (t139 != 61830736LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x7234 = 319457989LLU;
	static volatile uint16_t x7235 = UINT16_MAX;
	uint8_t x7236 = 1U;
	volatile uint64_t t140 = 15LLU;

    t140 = (((x7233|x7234)-x7235)<<x7236);

    if (t140 != 18446744073709420544LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x7313 = INT32_MAX;
	volatile int16_t x7314 = INT16_MIN;
	int32_t x7315 = INT32_MIN;
	int16_t x7316 = 0;
	volatile int32_t t141 = INT32_MAX;

    t141 = (((x7313|x7314)-x7315)<<x7316);

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint64_t x7361 = UINT64_MAX;
	volatile int64_t x7362 = -1736LL;
	uint32_t x7363 = 8U;
	int32_t x7364 = 0;
	static uint64_t t142 = 120032259575652LLU;

    t142 = (((x7361|x7362)-x7363)<<x7364);

    if (t142 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x7373 = -3LL;
	int8_t x7374 = -1;
	int16_t x7375 = INT16_MIN;

    t143 = (((x7373|x7374)-x7375)<<x7376);

    if (t143 != 1048544LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x7421 = INT64_MAX;
	volatile uint16_t x7422 = UINT16_MAX;
	int8_t x7423 = INT8_MAX;
	int8_t x7424 = 0;
	int64_t t144 = -4735305896LL;

    t144 = (((x7421|x7422)-x7423)<<x7424);

    if (t144 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x7429 = INT8_MIN;
	int32_t x7430 = -1;
	static int32_t x7431 = -1;

    t145 = (((x7429|x7430)-x7431)<<x7432);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x7437 = 1024U;
	static int8_t x7438 = INT8_MIN;
	int8_t x7439 = INT8_MIN;
	int8_t x7440 = 2;
	volatile int32_t t146 = 0;

    t146 = (((x7437|x7438)-x7439)<<x7440);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x7473 = 3083U;
	volatile int32_t x7474 = -2;
	uint8_t x7476 = 13U;
	volatile int32_t t147 = -1;

    t147 = (((x7473|x7474)-x7475)<<x7476);

    if (t147 != 268427264) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x7501 = INT8_MIN;
	int64_t x7502 = 30484916LL;
	uint8_t x7504 = 4U;

    t148 = (((x7501|x7502)-x7503)<<x7504);

    if (t148 != 523072LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x7617 = INT8_MIN;
	uint64_t x7618 = 2621374270889803LLU;

    t149 = (((x7617|x7618)-x7619)<<x7620);

    if (t149 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x7622 = UINT64_MAX;
	int64_t x7623 = -954633342400LL;

    t150 = (((x7621|x7622)-x7623)<<x7624);

    if (t150 != 3910178170466304LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x7633 = 1944U;
	int8_t x7635 = INT8_MIN;
	static volatile uint8_t x7636 = 4U;
	int32_t t151 = -1043156;

    t151 = (((x7633|x7634)-x7635)<<x7636);

    if (t151 != 34800) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x7645 = 30LLU;
	int64_t x7647 = -10LL;
	int8_t x7648 = 5;

    t152 = (((x7645|x7646)-x7647)<<x7648);

    if (t152 != 6765824LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x7686 = UINT64_MAX;
	int16_t x7687 = -1;
	volatile uint64_t t153 = 548912298007620587LLU;

    t153 = (((x7685|x7686)-x7687)<<x7688);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x7699 = INT8_MAX;
	uint8_t x7700 = 5U;
	uint32_t t154 = 4U;

    t154 = (((x7697|x7698)-x7699)<<x7700);

    if (t154 != 4294963200U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x7738 = INT32_MIN;
	int32_t x7739 = INT32_MAX;
	uint16_t x7740 = 12U;
	static volatile uint64_t t155 = 10LLU;

    t155 = (((x7737|x7738)-x7739)<<x7740);

    if (t155 != 18446735277616529408LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x7793 = INT32_MIN;
	static int16_t x7794 = INT16_MAX;
	uint64_t x7795 = UINT64_MAX;
	static volatile uint64_t t156 = 251198683413LLU;

    t156 = (((x7793|x7794)-x7795)<<x7796);

    if (t156 != 18446744056529944576LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x7813 = -3;
	uint32_t x7814 = 790163093U;
	volatile int8_t x7815 = INT8_MIN;
	int8_t x7816 = 7;
	uint32_t t157 = 21956584U;

    t157 = (((x7813|x7814)-x7815)<<x7816);

    if (t157 != 16000U) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x7877 = 1U;
	uint64_t x7878 = UINT64_MAX;
	volatile int64_t x7879 = -1337894550024588LL;
	uint8_t x7880 = 29U;
	uint64_t t158 = 724227502616351393LLU;

    t158 = (((x7877|x7878)-x7879)<<x7880);

    if (t158 != 15793233500833841152LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x7898 = UINT16_MAX;
	uint32_t x7899 = UINT32_MAX;
	volatile uint8_t x7900 = 1U;
	volatile uint32_t t159 = 11966U;

    t159 = (((x7897|x7898)-x7899)<<x7900);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x7933 = -42;
	static volatile int64_t x7934 = INT64_MIN;
	uint64_t x7936 = 1LLU;
	volatile uint64_t t160 = 43LLU;

    t160 = (((x7933|x7934)-x7935)<<x7936);

    if (t160 != 18446735061544146448LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int32_t x8113 = INT32_MIN;
	uint64_t x8114 = 1LLU;
	int64_t x8115 = INT64_MIN;
	volatile uint64_t t161 = 10316LLU;

    t161 = (((x8113|x8114)-x8115)<<x8116);

    if (t161 != 18446742974197924352LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x8273 = 2334;
	static int16_t x8274 = -1;
	static uint32_t x8275 = 1542195U;
	uint8_t x8276 = 1U;
	static volatile uint32_t t162 = 32815301U;

    t162 = (((x8273|x8274)-x8275)<<x8276);

    if (t162 != 4291882904U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x8293 = INT16_MIN;
	uint64_t x8295 = UINT64_MAX;
	volatile uint64_t t163 = 77357138LLU;

    t163 = (((x8293|x8294)-x8295)<<x8296);

    if (t163 != 18446744073709471132LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x8351 = -4480145561780374LL;
	volatile int8_t x8352 = 0;

    t164 = (((x8349|x8350)-x8351)<<x8352);

    if (t164 != 362487621261230229LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x8369 = -1;
	static int64_t x8370 = 285959141LL;
	int64_t x8371 = -1LL;
	volatile uint8_t x8372 = 54U;

    t165 = (((x8369|x8370)-x8371)<<x8372);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x8385 = INT32_MIN;
	volatile int16_t x8386 = INT16_MAX;
	static uint32_t x8387 = UINT32_MAX;
	int8_t x8388 = 5;
	static volatile uint32_t t166 = 332935789U;

    t166 = (((x8385|x8386)-x8387)<<x8388);

    if (t166 != 1048576U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint8_t x8429 = UINT8_MAX;
	int32_t x8431 = -1;
	uint8_t x8432 = 1U;

    t167 = (((x8429|x8430)-x8431)<<x8432);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x8598 = INT64_MAX;
	int64_t x8599 = 7550LL;
	volatile int32_t x8600 = 0;
	volatile int64_t t168 = 357LL;

    t168 = (((x8597|x8598)-x8599)<<x8600);

    if (t168 != 9223372036854768257LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x8681 = -1;
	int32_t x8682 = INT32_MAX;
	uint64_t x8683 = UINT64_MAX;
	int8_t x8684 = 5;
	uint64_t t169 = 571628079LLU;

    t169 = (((x8681|x8682)-x8683)<<x8684);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x8709 = -1LL;
	int16_t x8710 = INT16_MIN;
	uint64_t x8711 = 195017930174643324LLU;
	uint8_t x8712 = 2U;
	volatile uint64_t t170 = 532548155697208LLU;

    t170 = (((x8709|x8710)-x8711)<<x8712);

    if (t170 != 17666672353010978316LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x8737 = 2279245737431940202LL;
	int64_t x8738 = -1LL;
	uint64_t x8739 = 8965LLU;
	uint8_t x8740 = 43U;

    t171 = (((x8737|x8738)-x8739)<<x8740);

    if (t171 != 18367878303672434688LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x8793 = 165782341U;
	int32_t x8795 = INT32_MAX;
	volatile uint32_t t172 = 4631U;

    t172 = (((x8793|x8794)-x8795)<<x8796);

    if (t172 != 165782342U) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x8806 = -1;
	volatile int64_t x8807 = INT64_MIN;
	volatile int8_t x8808 = 15;
	uint64_t t173 = 268LLU;

    t173 = (((x8805|x8806)-x8807)<<x8808);

    if (t173 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x8837 = 429499U;
	uint16_t x8838 = 9762U;
	int32_t x8839 = INT32_MAX;
	int16_t x8840 = 14;
	uint32_t t174 = 68U;

    t174 = (((x8837|x8838)-x8839)<<x8840);

    if (t174 != 2884567040U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x8897 = 1262LLU;
	static int64_t x8898 = INT64_MAX;
	uint64_t x8899 = 4368063151312LLU;
	int32_t x8900 = 0;
	static uint64_t t175 = 1288LLU;

    t175 = (((x8897|x8898)-x8899)<<x8900);

    if (t175 != 9223367668791624495LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x8962 = 23U;
	volatile uint32_t t176 = 46U;

    t176 = (((x8961|x8962)-x8963)<<x8964);

    if (t176 != 4294967171U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x9005 = 7U;
	uint32_t x9006 = 7U;
	static int8_t x9007 = -1;
	int8_t x9008 = 4;
	uint32_t t177 = 5800606U;

    t177 = (((x9005|x9006)-x9007)<<x9008);

    if (t177 != 128U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x9057 = 0;
	int64_t x9058 = -27976527LL;
	uint64_t t178 = 0LLU;

    t178 = (((x9057|x9058)-x9059)<<x9060);

    if (t178 != 18446744073485739408LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x9118 = 35;
	int16_t x9119 = -196;
	static int32_t t179 = -43;

    t179 = (((x9117|x9118)-x9119)<<x9120);

    if (t179 != 390) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x9121 = 104395525835LLU;
	static int8_t x9122 = INT8_MIN;
	static uint8_t x9123 = 13U;
	volatile uint8_t x9124 = 1U;

    t180 = (((x9121|x9122)-x9123)<<x9124);

    if (t180 != 18446744073709551484LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x9181 = 479072LLU;
	static int32_t x9182 = -1;
	int32_t x9183 = INT32_MAX;
	int8_t x9184 = 6;
	static volatile uint64_t t181 = 1091111512LLU;

    t181 = (((x9181|x9182)-x9183)<<x9184);

    if (t181 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x9205 = -24168LL;
	int32_t x9206 = INT32_MIN;
	static volatile int32_t x9207 = INT32_MIN;
	volatile uint16_t x9208 = 0U;

    t182 = (((x9205|x9206)-x9207)<<x9208);

    if (t182 != 2147459480LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x9255 = INT32_MIN;
	int8_t x9256 = 13;
	volatile uint64_t t183 = 8084020058822704990LLU;

    t183 = (((x9253|x9254)-x9255)<<x9256);

    if (t183 != 17592186200064LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x9266 = -1;
	static int16_t x9268 = 0;
	uint64_t t184 = 1101282LLU;

    t184 = (((x9265|x9266)-x9267)<<x9268);

    if (t184 != 4294967296LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x9277 = INT32_MAX;
	static uint64_t x9278 = 32739068609LLU;
	static volatile int32_t x9279 = INT32_MAX;
	static int8_t x9280 = 2;
	volatile uint64_t t185 = 87979424LLU;

    t185 = (((x9277|x9278)-x9279)<<x9280);

    if (t185 != 128849018880LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x9281 = INT8_MIN;
	int8_t x9282 = INT8_MIN;
	int8_t x9283 = INT8_MIN;
	uint8_t x9284 = 6U;
	int32_t t186 = 1;

    t186 = (((x9281|x9282)-x9283)<<x9284);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x9389 = INT8_MAX;
	int32_t x9391 = -1;
	int64_t x9392 = 5LL;

    t187 = (((x9389|x9390)-x9391)<<x9392);

    if (t187 != 4096LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x9445 = INT16_MIN;
	volatile uint32_t x9446 = UINT32_MAX;
	int32_t x9447 = -1;
	volatile uint8_t x9448 = 1U;
	volatile uint32_t t188 = 3344504U;

    t188 = (((x9445|x9446)-x9447)<<x9448);

    if (t188 != 0U) { NG(); } else { ; }
	
}

void f189(void) {
    	static int64_t x9454 = 3406LL;

    t189 = (((x9453|x9454)-x9455)<<x9456);

    if (t189 != 58488LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x9465 = -1;
	uint64_t x9466 = 2967346103512537LLU;
	static int16_t x9467 = -1;
	uint64_t x9468 = 9LLU;
	static volatile uint64_t t190 = 1LLU;

    t190 = (((x9465|x9466)-x9467)<<x9468);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x9533 = 1LLU;
	int16_t x9534 = 1;
	int32_t x9535 = INT32_MIN;
	uint64_t t191 = 20614585026LLU;

    t191 = (((x9533|x9534)-x9535)<<x9536);

    if (t191 != 17179869192LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x9541 = -12406167354946493LL;
	static uint64_t x9542 = UINT64_MAX;
	int16_t x9543 = -1;
	uint8_t x9544 = 33U;
	uint64_t t192 = 949872896619842LLU;

    t192 = (((x9541|x9542)-x9543)<<x9544);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x9573 = 3;
	static uint8_t x9574 = 9U;
	static uint64_t x9575 = 179517LLU;
	uint64_t t193 = 14563248026LLU;

    t193 = (((x9573|x9574)-x9575)<<x9576);

    if (t193 != 18446744073703807424LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x9605 = 1;
	volatile uint32_t x9606 = UINT32_MAX;
	volatile int16_t x9608 = 1;
	volatile uint32_t t194 = 43U;

    t194 = (((x9605|x9606)-x9607)<<x9608);

    if (t194 != 6U) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x9637 = -1LL;
	int16_t x9639 = INT16_MIN;
	static uint16_t x9640 = 10U;
	volatile int64_t t195 = -802582499471978LL;

    t195 = (((x9637|x9638)-x9639)<<x9640);

    if (t195 != 33553408LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x9641 = UINT64_MAX;
	static int32_t x9642 = -1;
	uint16_t x9643 = 1564U;
	volatile int8_t x9644 = 63;

    t196 = (((x9641|x9642)-x9643)<<x9644);

    if (t196 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x9869 = 58524382717077342LLU;
	volatile int8_t x9870 = INT8_MAX;
	int16_t x9872 = 15;
	static volatile uint64_t t197 = 71043373718994LLU;

    t197 = (((x9869|x9870)-x9871)<<x9872);

    if (t197 != 13585269602739716096LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x9953 = 374249LLU;
	static int64_t x9954 = INT64_MIN;
	int8_t x9956 = 30;
	static uint64_t t198 = 6461857308LLU;

    t198 = (((x9953|x9954)-x9955)<<x9956);

    if (t198 != 16746576565525020672LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x9989 = INT32_MAX;
	uint32_t x9991 = UINT32_MAX;
	int16_t x9992 = 19;
	volatile uint32_t t199 = 7U;

    t199 = (((x9989|x9990)-x9991)<<x9992);

    if (t199 != 0U) { NG(); } else { ; }
	
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

