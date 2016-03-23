
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

static int8_t x129 = 2;
int8_t x132 = -1;
volatile uint32_t x211 = 13U;
volatile uint32_t x212 = 89931982U;
uint64_t x225 = 850494LLU;
static volatile int32_t x228 = -418;
volatile int64_t x285 = 32922550LL;
int32_t x288 = -153429;
uint32_t t7 = 17U;
uint8_t x357 = UINT8_MAX;
static int32_t x359 = -1;
uint8_t x401 = UINT8_MAX;
static uint32_t x404 = UINT32_MAX;
volatile uint32_t t11 = 405683190U;
int64_t x454 = 3LL;
int64_t x455 = -1LL;
static uint64_t t13 = 55123110792574LLU;
int8_t x514 = 1;
int64_t x516 = -3825LL;
uint16_t x639 = UINT16_MAX;
volatile int32_t x641 = 108766;
uint32_t x813 = 383870U;
int32_t x814 = 9;
static volatile uint32_t t18 = 3629933U;
uint64_t x875 = UINT64_MAX;
static volatile uint64_t t20 = 7288300LLU;
volatile uint8_t x938 = 42U;
volatile int16_t x939 = -6;
volatile uint64_t t22 = 154091265295415299LLU;
static uint64_t x1067 = 2887469439769348839LLU;
uint32_t x1119 = UINT32_MAX;
static int32_t x1175 = INT32_MAX;
uint64_t t28 = 1435084419350302098LLU;
int16_t x1441 = 11734;
int16_t x1499 = -1;
static volatile uint64_t x1500 = 1915932749834125470LLU;
volatile int32_t x1706 = 1;
static uint64_t x1769 = 24209086888703LLU;
uint8_t x1770 = 31U;
uint8_t x1782 = 7U;
uint64_t x1783 = 260562LLU;
volatile uint64_t t37 = 6590172922165796074LLU;
int64_t x1821 = INT64_MAX;
volatile int8_t x1822 = 0;
static volatile int8_t x1823 = INT8_MAX;
int64_t x1824 = INT64_MAX;
uint16_t x2013 = 39U;
uint32_t x2218 = 25U;
static uint64_t x2265 = 187846LLU;
volatile uint8_t x2305 = UINT8_MAX;
uint8_t x2326 = 0U;
uint8_t x2381 = 0U;
uint16_t x2499 = UINT16_MAX;
static int64_t x2543 = -1LL;
uint64_t x2763 = UINT64_MAX;
uint32_t x2893 = UINT32_MAX;
int8_t x2908 = -26;
int64_t x3027 = -18266LL;
static volatile int8_t x3082 = 1;
uint64_t x3084 = 7496233676LLU;
volatile uint16_t x3085 = 80U;
uint8_t x3086 = 1U;
volatile uint64_t t58 = 26317199220298LLU;
int8_t x3111 = INT8_MIN;
int8_t x3173 = 10;
int32_t x3174 = 27;
static volatile int64_t t62 = -452125820111704883LL;
uint16_t x3373 = UINT16_MAX;
int16_t x3375 = INT16_MIN;
volatile uint8_t x3602 = 22U;
volatile int64_t x3659 = INT64_MIN;
int16_t x3875 = INT16_MIN;
int16_t x3876 = 8;
static int32_t t69 = -1;
uint8_t x3949 = UINT8_MAX;
int8_t x3952 = -51;
int32_t t70 = -32516;
static uint16_t x4017 = 42U;
int16_t x4020 = 28;
static volatile int16_t x4198 = 10;
static int16_t x4200 = INT16_MAX;
int32_t t73 = -60639099;
volatile uint32_t x4205 = 749527U;
int8_t x4206 = 1;
uint16_t x4207 = UINT16_MAX;
static int64_t t75 = 0LL;
static uint8_t x4542 = 0U;
int8_t x4835 = INT8_MIN;
static int16_t x4843 = INT16_MIN;
uint8_t x4881 = 5U;
uint16_t x4883 = 93U;
int32_t x5211 = -2746;
static volatile int8_t x5212 = INT8_MIN;
static int16_t x5345 = 5;
volatile uint64_t t86 = 6007LLU;
int16_t x5512 = INT16_MIN;
uint32_t x5549 = UINT32_MAX;
int8_t x5552 = -1;
static uint32_t t88 = 128795185U;
volatile uint32_t x5646 = 1U;
int64_t t90 = -351604378159042LL;
volatile int32_t x5772 = -990568;
volatile int16_t x5827 = -1;
uint8_t x5905 = 5U;
int8_t x6092 = -1;
uint64_t t98 = 28117LLU;
static int8_t x6503 = 0;
uint32_t x6607 = 1385906U;
int16_t x6637 = 2;
int8_t x6638 = 12;
uint16_t x6640 = UINT16_MAX;
static int32_t x6649 = 572513;
volatile int16_t x6662 = 1;
uint8_t x6750 = 13U;
int16_t x6751 = -1;
volatile uint64_t t106 = 5975755886496064LLU;
int8_t x7014 = 0;
static int8_t x7016 = INT8_MAX;
static int16_t x7045 = INT16_MAX;
uint8_t x7046 = 1U;
volatile int32_t x7156 = INT32_MAX;
volatile uint8_t x7178 = 14U;
int64_t t113 = -225239902LL;
uint32_t x7209 = 565U;
static int64_t x7210 = 0LL;
uint64_t x7221 = 1349258LLU;
int16_t x7399 = INT16_MIN;
int16_t x7571 = 16000;
uint16_t x7617 = UINT16_MAX;
static int32_t t119 = -742;
volatile uint32_t x8095 = UINT32_MAX;
volatile uint32_t x8133 = UINT32_MAX;
uint32_t x8134 = 1U;
uint8_t x8290 = 3U;
int64_t t126 = 7577721919177LL;
volatile uint64_t t128 = 4946107403LLU;
uint8_t x8426 = 6U;
uint64_t t129 = 220944483426207LLU;
volatile uint8_t x8653 = 0U;
int32_t t132 = -2203;
static uint64_t x8680 = UINT64_MAX;
uint16_t x8689 = 0U;
uint16_t x8692 = 0U;
uint64_t x8881 = UINT64_MAX;
volatile uint64_t x8901 = 11975232LLU;
uint64_t t139 = 37269260172577LLU;
int16_t x9247 = INT16_MIN;
uint8_t x9310 = 0U;
int32_t x9596 = -1;
int8_t x9653 = INT8_MAX;
int8_t x9656 = -1;
volatile int16_t x9708 = INT16_MIN;
int64_t x9736 = 15708143LL;
int32_t x9853 = 1;
volatile int32_t t148 = 118;
volatile uint32_t x9950 = 11U;
uint64_t x9952 = UINT64_MAX;
uint64_t t149 = 45867622LLU;
uint16_t x10042 = 6U;
volatile int64_t x10044 = 1038786508149110LL;
uint8_t x10054 = 1U;
volatile int32_t t152 = -1;
int32_t x10150 = 7;
volatile int32_t x10151 = INT32_MIN;
volatile int32_t x10154 = 1;
volatile uint64_t t154 = 166405396LLU;
uint32_t x10209 = UINT32_MAX;
int16_t x10211 = INT16_MIN;
int64_t t158 = 1LL;
int8_t x10459 = INT8_MIN;
volatile int8_t x10461 = 14;
uint32_t x10462 = 1U;
static int64_t x10464 = 58606LL;
int64_t t160 = 19486462406173LL;
int32_t x10735 = 1;
uint16_t x10736 = 716U;
volatile uint8_t x10822 = 8U;
int64_t t164 = -13817812054LL;
volatile uint16_t x10828 = 5U;
volatile uint8_t x10897 = UINT8_MAX;
static int8_t x10899 = INT8_MIN;
volatile uint64_t t166 = 3801564LLU;
uint64_t x11081 = 64187479681422673LLU;
int8_t x11082 = 2;
uint8_t x11084 = 12U;
volatile int64_t x11156 = 793LL;
int64_t t168 = -783545388LL;
int16_t x11203 = INT16_MIN;
static volatile int64_t t169 = -224491LL;
uint16_t x11213 = UINT16_MAX;
int32_t x11215 = -15;
volatile uint8_t x11216 = 111U;
int8_t x11501 = INT8_MAX;
static uint32_t x11525 = UINT32_MAX;
uint32_t x11528 = 119208U;
uint64_t x11572 = UINT64_MAX;
volatile uint32_t t176 = 181352U;
int16_t x11987 = INT16_MIN;
uint64_t t179 = 402549228320LLU;
static volatile int16_t x12231 = 3;
int64_t x12393 = 17129155LL;
uint8_t x12442 = 2U;
int32_t x12443 = 744681;
volatile int32_t t186 = -1;
uint64_t t187 = 3614230250142LLU;
uint64_t x12829 = 1718380227LLU;
uint64_t t189 = 517918134LLU;
uint16_t x13007 = 96U;
int32_t x13072 = -83742015;
static uint32_t x13078 = 0U;
static uint16_t x13190 = 2U;
int32_t x13191 = INT32_MIN;
uint32_t t194 = 1951194584U;
static volatile int64_t t195 = -11897429801LL;
static int64_t x13316 = -1LL;
volatile int64_t t197 = -813072694497390094LL;
uint64_t t198 = 0LLU;
volatile uint64_t t199 = 1671645022LLU;


void f0(void) {
    	volatile int16_t x41 = 8;
	static volatile uint8_t x42 = 1U;
	static int64_t x43 = 3858436561315LL;
	int32_t x44 = INT32_MAX;
	int64_t t0 = -5679840217798053LL;

    t0 = ((x41<<x42)+(x43-x44));

    if (t0 != 3856289077684LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x130 = 3U;
	volatile int32_t x131 = INT32_MIN;
	int32_t t1 = 27301771;

    t1 = ((x129<<x130)+(x131-x132));

    if (t1 != -2147483631) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x161 = 3707U;
	static int16_t x162 = 29;
	volatile uint16_t x163 = 694U;
	uint32_t x164 = 4U;
	uint32_t t2 = 52U;

    t2 = ((x161<<x162)+(x163-x164));

    if (t2 != 1610613426U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x209 = 1U;
	uint32_t x210 = 16U;
	static volatile uint32_t t3 = 0U;

    t3 = ((x209<<x210)+(x211-x212));

    if (t3 != 4205100863U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x226 = 0U;
	int64_t x227 = -1LL;
	uint64_t t4 = 1847273985779LLU;

    t4 = ((x225<<x226)+(x227-x228));

    if (t4 != 850911LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x237 = 58280975554330LLU;
	volatile int8_t x238 = 6;
	uint32_t x239 = 7365U;
	int32_t x240 = -57972941;
	uint64_t t5 = 55230007048LLU;

    t5 = ((x237<<x238)+(x239-x240));

    if (t5 != 3729982493457426LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x286 = 0;
	int32_t x287 = -4041113;
	int64_t t6 = -17398478LL;

    t6 = ((x285<<x286)+(x287-x288));

    if (t6 != 29034866LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x297 = 1U;
	int8_t x298 = 2;
	volatile uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MIN;

    t7 = ((x297<<x298)+(x299-x300));

    if (t7 != 131U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x329 = 359U;
	uint32_t x330 = 0U;
	int8_t x331 = 4;
	int16_t x332 = -1;
	static int32_t t8 = -11;

    t8 = ((x329<<x330)+(x331-x332));

    if (t8 != 364) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x345 = INT16_MAX;
	volatile uint16_t x346 = 2U;
	uint16_t x347 = UINT16_MAX;
	uint16_t x348 = 5U;
	volatile int32_t t9 = 0;

    t9 = ((x345<<x346)+(x347-x348));

    if (t9 != 196598) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x358 = 0U;
	volatile int64_t x360 = 0LL;
	volatile int64_t t10 = -2035602646374552520LL;

    t10 = ((x357<<x358)+(x359-x360));

    if (t10 != 254LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x402 = 17;
	volatile uint16_t x403 = UINT16_MAX;

    t11 = ((x401<<x402)+(x403-x404));

    if (t11 != 33488896U) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x453 = 86083364777753819LL;
	int32_t x456 = INT32_MIN;
	static volatile int64_t t12 = -26809LL;

    t12 = ((x453<<x454)+(x455-x456));

    if (t12 != 688666920369514199LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x465 = 23372541LLU;
	volatile uint8_t x466 = 4U;
	int16_t x467 = INT16_MIN;
	volatile int16_t x468 = INT16_MIN;

    t13 = ((x465<<x466)+(x467-x468));

    if (t13 != 373960656LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x513 = UINT16_MAX;
	int32_t x515 = INT32_MIN;
	static volatile int64_t t14 = 2727LL;

    t14 = ((x513<<x514)+(x515-x516));

    if (t14 != -2147348753LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x637 = UINT8_MAX;
	int32_t x638 = 1;
	uint32_t x640 = UINT32_MAX;
	uint32_t t15 = 278312U;

    t15 = ((x637<<x638)+(x639-x640));

    if (t15 != 66046U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x642 = 9U;
	volatile int64_t x643 = -3501065985462800261LL;
	static int64_t x644 = -1LL;
	static volatile int64_t t16 = -64236328984842LL;

    t16 = ((x641<<x642)+(x643-x644));

    if (t16 != -3501065985407112068LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x781 = 33;
	uint16_t x782 = 6U;
	int32_t x783 = 12306436;
	volatile int8_t x784 = -1;
	int32_t t17 = -37604499;

    t17 = ((x781<<x782)+(x783-x784));

    if (t17 != 12308549) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x815 = UINT16_MAX;
	int16_t x816 = INT16_MAX;

    t18 = ((x813<<x814)+(x815-x816));

    if (t18 != 196574208U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x865 = 3U;
	static uint8_t x866 = 0U;
	volatile int8_t x867 = INT8_MIN;
	static uint64_t x868 = UINT64_MAX;
	uint64_t t19 = 9LLU;

    t19 = ((x865<<x866)+(x867-x868));

    if (t19 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x873 = 7573381544619LL;
	int16_t x874 = 0;
	static volatile int64_t x876 = INT64_MIN;

    t20 = ((x873<<x874)+(x875-x876));

    if (t20 != 9223379610236320426LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x881 = 3U;
	uint8_t x882 = 8U;
	uint16_t x883 = 11U;
	int64_t x884 = INT64_MAX;
	static int64_t t21 = 0LL;

    t21 = ((x881<<x882)+(x883-x884));

    if (t21 != -9223372036854775028LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x937 = 58300LLU;
	static uint32_t x940 = 21U;

    t22 = ((x937<<x938)+(x939-x940));

    if (t22 != 256406115892330469LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x1065 = 8;
	uint16_t x1066 = 2U;
	static int32_t x1068 = INT32_MIN;
	uint64_t t23 = 2805195LLU;

    t23 = ((x1065<<x1066)+(x1067-x1068));

    if (t23 != 2887469441916832519LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x1117 = 6U;
	uint8_t x1118 = 21U;
	int16_t x1120 = INT16_MIN;
	uint32_t t24 = 4U;

    t24 = ((x1117<<x1118)+(x1119-x1120));

    if (t24 != 12615679U) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x1173 = 2564357837511LLU;
	uint8_t x1174 = 13U;
	static volatile uint64_t x1176 = 116535LLU;
	static uint64_t t25 = 59576172LLU;

    t25 = ((x1173<<x1174)+(x1175-x1176));

    if (t25 != 21007221552257224LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x1185 = 5U;
	static volatile uint16_t x1186 = 1U;
	volatile uint16_t x1187 = 3U;
	int16_t x1188 = -13877;
	volatile int32_t t26 = 64;

    t26 = ((x1185<<x1186)+(x1187-x1188));

    if (t26 != 13890) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x1197 = 117;
	static uint8_t x1198 = 3U;
	int8_t x1199 = INT8_MIN;
	static int16_t x1200 = INT16_MAX;
	int32_t t27 = -16876553;

    t27 = ((x1197<<x1198)+(x1199-x1200));

    if (t27 != -31959) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint64_t x1333 = UINT64_MAX;
	static volatile uint8_t x1334 = 3U;
	uint64_t x1335 = 16776080LLU;
	int16_t x1336 = INT16_MIN;

    t28 = ((x1333<<x1334)+(x1335-x1336));

    if (t28 != 16808840LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x1397 = INT16_MAX;
	int16_t x1398 = 1;
	uint32_t x1399 = UINT32_MAX;
	uint16_t x1400 = 7U;
	uint32_t t29 = 62U;

    t29 = ((x1397<<x1398)+(x1399-x1400));

    if (t29 != 65526U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x1442 = 6U;
	uint8_t x1443 = UINT8_MAX;
	volatile uint64_t x1444 = 96205LLU;
	uint64_t t30 = 6LLU;

    t30 = ((x1441<<x1442)+(x1443-x1444));

    if (t30 != 655026LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x1497 = 86U;
	uint8_t x1498 = 15U;
	volatile uint64_t t31 = 38628LLU;

    t31 = ((x1497<<x1498)+(x1499-x1500));

    if (t31 != 16530811323878244193LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x1509 = 3258017172875LLU;
	uint32_t x1510 = 31U;
	uint64_t x1511 = 11150318831817067LLU;
	uint16_t x1512 = UINT16_MAX;
	volatile uint64_t t32 = 419751525247157193LLU;

    t32 = ((x1509<<x1510)+(x1511-x1512));

    if (t32 != 5233750035163337068LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x1665 = 55402054LLU;
	uint8_t x1666 = 0U;
	static uint8_t x1667 = 29U;
	static uint64_t x1668 = 149232696217002024LLU;
	volatile uint64_t t33 = 733481329039528LLU;

    t33 = ((x1665<<x1666)+(x1667-x1668));

    if (t33 != 18297511377547951675LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x1705 = UINT16_MAX;
	int8_t x1707 = -1;
	uint8_t x1708 = 66U;
	static volatile int32_t t34 = -206075;

    t34 = ((x1705<<x1706)+(x1707-x1708));

    if (t34 != 131003) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x1765 = 982646818U;
	volatile uint8_t x1766 = 0U;
	int16_t x1767 = INT16_MIN;
	int8_t x1768 = -19;
	uint32_t t35 = 11535814U;

    t35 = ((x1765<<x1766)+(x1767-x1768));

    if (t35 != 982614069U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x1771 = INT16_MIN;
	static int8_t x1772 = -1;
	volatile uint64_t t36 = 104999550546LLU;

    t36 = ((x1769<<x1770)+(x1771-x1772));

    if (t36 != 5693426787371941889LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x1781 = UINT16_MAX;
	static volatile int64_t x1784 = INT64_MIN;

    t37 = ((x1781<<x1782)+(x1783-x1784));

    if (t37 != 9223372036863424850LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t t38 = -15497686LL;

    t38 = ((x1821<<x1822)+(x1823-x1824));

    if (t38 != 127LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x2014 = 2U;
	int8_t x2015 = INT8_MIN;
	static uint32_t x2016 = 1U;
	uint32_t t39 = 1256868934U;

    t39 = ((x2013<<x2014)+(x2015-x2016));

    if (t39 != 27U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x2093 = UINT32_MAX;
	uint8_t x2094 = 24U;
	volatile int64_t x2095 = -1LL;
	int16_t x2096 = INT16_MIN;
	static volatile int64_t t40 = 1085024769LL;

    t40 = ((x2093<<x2094)+(x2095-x2096));

    if (t40 != 4278222847LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x2125 = 19902750454791556LL;
	uint8_t x2126 = 4U;
	int64_t x2127 = -1LL;
	uint32_t x2128 = 5U;
	volatile int64_t t41 = -3538034457763739744LL;

    t41 = ((x2125<<x2126)+(x2127-x2128));

    if (t41 != 318444007276664890LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x2217 = 23U;
	int8_t x2219 = INT8_MAX;
	int64_t x2220 = INT64_MAX;
	int64_t t42 = 7722LL;

    t42 = ((x2217<<x2218)+(x2219-x2220));

    if (t42 != -9223372036083023744LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x2266 = 2;
	int16_t x2267 = INT16_MAX;
	int16_t x2268 = 0;
	static volatile uint64_t t43 = 5698395452372085LLU;

    t43 = ((x2265<<x2266)+(x2267-x2268));

    if (t43 != 784151LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x2293 = UINT32_MAX;
	uint64_t x2294 = 4LLU;
	uint8_t x2295 = 27U;
	static volatile int32_t x2296 = -4632288;
	uint32_t t44 = 429U;

    t44 = ((x2293<<x2294)+(x2295-x2296));

    if (t44 != 4632299U) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x2306 = 10LLU;
	static int16_t x2307 = 5566;
	int8_t x2308 = INT8_MIN;
	volatile int32_t t45 = -910624024;

    t45 = ((x2305<<x2306)+(x2307-x2308));

    if (t45 != 266814) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x2325 = 840150398590780LLU;
	static int8_t x2327 = -1;
	static int64_t x2328 = 23620858867LL;
	volatile uint64_t t46 = 57796842573LLU;

    t46 = ((x2325<<x2326)+(x2327-x2328));

    if (t46 != 840126777731912LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x2382 = 2U;
	static int8_t x2383 = 42;
	uint8_t x2384 = 7U;
	static volatile int32_t t47 = 22407;

    t47 = ((x2381<<x2382)+(x2383-x2384));

    if (t47 != 35) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x2497 = 970U;
	uint8_t x2498 = 0U;
	uint32_t x2500 = 95U;
	volatile uint32_t t48 = 3512U;

    t48 = ((x2497<<x2498)+(x2499-x2500));

    if (t48 != 66410U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x2541 = INT16_MAX;
	int8_t x2542 = 2;
	volatile uint16_t x2544 = 6U;
	int64_t t49 = -41LL;

    t49 = ((x2541<<x2542)+(x2543-x2544));

    if (t49 != 131061LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint32_t x2589 = 112363728U;
	uint8_t x2590 = 1U;
	uint8_t x2591 = 86U;
	int64_t x2592 = INT64_MAX;
	static int64_t t50 = -522579LL;

    t50 = ((x2589<<x2590)+(x2591-x2592));

    if (t50 != -9223372036630048265LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x2725 = 3695029U;
	static volatile int8_t x2726 = 1;
	uint64_t x2727 = UINT64_MAX;
	int64_t x2728 = INT64_MAX;
	uint64_t t51 = 352896399LLU;

    t51 = ((x2725<<x2726)+(x2727-x2728));

    if (t51 != 9223372036862165866LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x2761 = UINT8_MAX;
	static int16_t x2762 = 0;
	int64_t x2764 = -15150541027476LL;
	volatile uint64_t t52 = 538368405297447LLU;

    t52 = ((x2761<<x2762)+(x2763-x2764));

    if (t52 != 15150541027730LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x2809 = 1U;
	volatile int8_t x2810 = 1;
	int64_t x2811 = -276208530754404056LL;
	int8_t x2812 = 0;
	volatile int64_t t53 = -1LL;

    t53 = ((x2809<<x2810)+(x2811-x2812));

    if (t53 != -276208530754404054LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x2894 = 0U;
	int16_t x2895 = INT16_MIN;
	static int64_t x2896 = -4545LL;
	volatile int64_t t54 = 1728LL;

    t54 = ((x2893<<x2894)+(x2895-x2896));

    if (t54 != 4294939072LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x2905 = 2053124503834889905LLU;
	int8_t x2906 = 10;
	volatile uint64_t x2907 = UINT64_MAX;
	uint64_t t55 = 0LLU;

    t55 = ((x2905<<x2906)+(x2907-x2908));

    if (t55 != 17917411597747930137LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x3025 = 2064410015230618018LLU;
	volatile int16_t x3026 = 11;
	uint64_t x3028 = UINT64_MAX;
	volatile uint64_t t56 = 315985848020990450LLU;

    t56 = ((x3025<<x3026)+(x3027-x3028));

    if (t56 != 3607318312818362535LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x3081 = UINT32_MAX;
	int8_t x3083 = INT8_MIN;
	uint64_t t57 = 6853089540051177LLU;

    t57 = ((x3081<<x3082)+(x3083-x3084));

    if (t57 != 18446744070508285106LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x3087 = 789LLU;
	uint32_t x3088 = 18284U;

    t58 = ((x3085<<x3086)+(x3087-x3088));

    if (t58 != 18446744073709534281LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x3109 = 5787U;
	uint32_t x3110 = 4U;
	int16_t x3112 = -49;
	int32_t t59 = 98456;

    t59 = ((x3109<<x3110)+(x3111-x3112));

    if (t59 != 92513) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x3161 = 0;
	uint32_t x3162 = 20U;
	static int16_t x3163 = INT16_MAX;
	static int32_t x3164 = 8270;
	int32_t t60 = 14361;

    t60 = ((x3161<<x3162)+(x3163-x3164));

    if (t60 != 24497) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x3175 = 2U;
	uint8_t x3176 = 69U;
	volatile int32_t t61 = -249210;

    t61 = ((x3173<<x3174)+(x3175-x3176));

    if (t61 != 1342177213) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x3273 = 292U;
	static volatile int8_t x3274 = 1;
	volatile int64_t x3275 = 6LL;
	int64_t x3276 = -6801910707205LL;

    t62 = ((x3273<<x3274)+(x3275-x3276));

    if (t62 != 6801910707795LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x3374 = 6U;
	volatile uint64_t x3376 = 80447655104LLU;
	volatile uint64_t t63 = 507544545797LLU;

    t63 = ((x3373<<x3374)+(x3375-x3376));

    if (t63 != 18446743993266057984LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x3393 = UINT32_MAX;
	volatile uint8_t x3394 = 6U;
	static int8_t x3395 = -2;
	int32_t x3396 = INT32_MIN;
	uint32_t t64 = 2U;

    t64 = ((x3393<<x3394)+(x3395-x3396));

    if (t64 != 2147483582U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int16_t x3489 = 1;
	uint16_t x3490 = 1U;
	int8_t x3491 = INT8_MAX;
	uint16_t x3492 = 11U;
	int32_t t65 = -4135;

    t65 = ((x3489<<x3490)+(x3491-x3492));

    if (t65 != 118) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x3601 = 0;
	static int64_t x3603 = 976LL;
	int64_t x3604 = 74202315415LL;
	int64_t t66 = 12461800539008LL;

    t66 = ((x3601<<x3602)+(x3603-x3604));

    if (t66 != -74202314439LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x3657 = 5637LLU;
	uint8_t x3658 = 5U;
	static int64_t x3660 = -1552887114387675LL;
	uint64_t t67 = 2302LLU;

    t67 = ((x3657<<x3658)+(x3659-x3660));

    if (t67 != 9224924923969343867LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x3817 = UINT32_MAX;
	uint16_t x3818 = 18U;
	static int16_t x3819 = INT16_MAX;
	static volatile int8_t x3820 = INT8_MAX;
	uint32_t t68 = 146279U;

    t68 = ((x3817<<x3818)+(x3819-x3820));

    if (t68 != 4294737792U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x3873 = INT8_MAX;
	uint8_t x3874 = 1U;

    t69 = ((x3873<<x3874)+(x3875-x3876));

    if (t69 != -32522) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x3950 = 12U;
	int32_t x3951 = 74;

    t70 = ((x3949<<x3950)+(x3951-x3952));

    if (t70 != 1044605) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x4001 = 0U;
	uint8_t x4002 = 0U;
	volatile uint32_t x4003 = 1239212U;
	int32_t x4004 = -1;
	volatile uint32_t t71 = 26U;

    t71 = ((x4001<<x4002)+(x4003-x4004));

    if (t71 != 1239213U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x4018 = 0LL;
	static int16_t x4019 = INT16_MAX;
	int32_t t72 = -401685;

    t72 = ((x4017<<x4018)+(x4019-x4020));

    if (t72 != 32781) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x4197 = INT8_MAX;
	int8_t x4199 = INT8_MAX;

    t73 = ((x4197<<x4198)+(x4199-x4200));

    if (t73 != 97408) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x4208 = -121;
	volatile uint32_t t74 = 249U;

    t74 = ((x4205<<x4206)+(x4207-x4208));

    if (t74 != 1564710U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x4537 = INT8_MAX;
	volatile uint8_t x4538 = 2U;
	static int64_t x4539 = INT64_MAX;
	volatile int16_t x4540 = INT16_MAX;

    t75 = ((x4537<<x4538)+(x4539-x4540));

    if (t75 != 9223372036854743548LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x4541 = INT8_MAX;
	static int32_t x4543 = INT32_MIN;
	int8_t x4544 = INT8_MIN;
	int32_t t76 = -104904;

    t76 = ((x4541<<x4542)+(x4543-x4544));

    if (t76 != -2147483393) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x4641 = 7;
	uint8_t x4642 = 3U;
	static int8_t x4643 = INT8_MIN;
	int16_t x4644 = -15;
	int32_t t77 = -3;

    t77 = ((x4641<<x4642)+(x4643-x4644));

    if (t77 != -57) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x4833 = 1;
	uint8_t x4834 = 6U;
	int16_t x4836 = 1944;
	volatile int32_t t78 = -27;

    t78 = ((x4833<<x4834)+(x4835-x4836));

    if (t78 != -2008) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x4841 = INT8_MAX;
	volatile uint16_t x4842 = 5U;
	int16_t x4844 = -1;
	int32_t t79 = -186341;

    t79 = ((x4841<<x4842)+(x4843-x4844));

    if (t79 != -28703) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint64_t x4882 = 23LLU;
	int32_t x4884 = INT32_MAX;
	volatile int32_t t80 = 54;

    t80 = ((x4881<<x4882)+(x4883-x4884));

    if (t80 != -2105540514) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x5017 = INT8_MAX;
	int8_t x5018 = 1;
	uint32_t x5019 = UINT32_MAX;
	int8_t x5020 = -38;
	uint32_t t81 = 0U;

    t81 = ((x5017<<x5018)+(x5019-x5020));

    if (t81 != 291U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint16_t x5209 = 30811U;
	uint64_t x5210 = 3LLU;
	static volatile int32_t t82 = -7;

    t82 = ((x5209<<x5210)+(x5211-x5212));

    if (t82 != 243870) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x5341 = 62924730188351638LLU;
	static uint32_t x5342 = 1U;
	uint16_t x5343 = 2154U;
	uint64_t x5344 = 2737407333541LLU;
	uint64_t t83 = 5102391813358899537LLU;

    t83 = ((x5341<<x5342)+(x5343-x5344));

    if (t83 != 125846722969371889LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x5346 = 3;
	int64_t x5347 = -7599539LL;
	volatile int64_t x5348 = INT64_MIN;
	int64_t t84 = 3236294984LL;

    t84 = ((x5345<<x5346)+(x5347-x5348));

    if (t84 != 9223372036847176309LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x5425 = 94944;
	int8_t x5426 = 1;
	static uint16_t x5427 = 475U;
	int8_t x5428 = INT8_MIN;
	int32_t t85 = -19;

    t85 = ((x5425<<x5426)+(x5427-x5428));

    if (t85 != 190491) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x5477 = 52U;
	uint8_t x5478 = 2U;
	uint64_t x5479 = UINT64_MAX;
	static uint16_t x5480 = UINT16_MAX;

    t86 = ((x5477<<x5478)+(x5479-x5480));

    if (t86 != 18446744073709486288LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x5509 = 1;
	uint64_t x5510 = 1LLU;
	volatile int64_t x5511 = INT64_MIN;
	int64_t t87 = 25538660358009663LL;

    t87 = ((x5509<<x5510)+(x5511-x5512));

    if (t87 != -9223372036854743038LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x5550 = 1U;
	volatile int16_t x5551 = -1;

    t88 = ((x5549<<x5550)+(x5551-x5552));

    if (t88 != 4294967294U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x5553 = INT16_MAX;
	uint64_t x5554 = 0LLU;
	int8_t x5555 = INT8_MIN;
	static int16_t x5556 = 120;
	int32_t t89 = 7;

    t89 = ((x5553<<x5554)+(x5555-x5556));

    if (t89 != 32519) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x5645 = UINT16_MAX;
	volatile int64_t x5647 = INT64_MIN;
	int8_t x5648 = INT8_MIN;

    t90 = ((x5645<<x5646)+(x5647-x5648));

    if (t90 != -9223372036854644610LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x5649 = 9;
	int8_t x5650 = 3;
	uint64_t x5651 = 6776979594849LLU;
	volatile int64_t x5652 = INT64_MIN;
	volatile uint64_t t91 = 363671111LLU;

    t91 = ((x5649<<x5650)+(x5651-x5652));

    if (t91 != 9223378813834370729LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x5769 = 2U;
	volatile uint8_t x5770 = 2U;
	volatile int32_t x5771 = -1;
	uint32_t t92 = 1510210U;

    t92 = ((x5769<<x5770)+(x5771-x5772));

    if (t92 != 990575U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x5781 = 6U;
	static int8_t x5782 = 3;
	uint16_t x5783 = 2U;
	uint64_t x5784 = 93837975732963977LLU;
	static volatile uint64_t t93 = 74478780881622274LLU;

    t93 = ((x5781<<x5782)+(x5783-x5784));

    if (t93 != 18352906097976587689LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x5825 = UINT64_MAX;
	volatile uint16_t x5826 = 2U;
	int32_t x5828 = -556753891;
	uint64_t t94 = 1LLU;

    t94 = ((x5825<<x5826)+(x5827-x5828));

    if (t94 != 556753886LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x5906 = 1;
	int32_t x5907 = -1;
	int64_t x5908 = -1LL;
	int64_t t95 = 35578191423806344LL;

    t95 = ((x5905<<x5906)+(x5907-x5908));

    if (t95 != 10LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x6029 = 4471582093754214822LLU;
	uint16_t x6030 = 0U;
	int32_t x6031 = INT32_MIN;
	int64_t x6032 = -18LL;
	volatile uint64_t t96 = 162360LLU;

    t96 = ((x6029<<x6030)+(x6031-x6032));

    if (t96 != 4471582091606731192LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x6089 = INT16_MAX;
	uint16_t x6090 = 10U;
	static volatile int64_t x6091 = -1LL;
	int64_t t97 = -106660001382LL;

    t97 = ((x6089<<x6090)+(x6091-x6092));

    if (t97 != 33553408LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x6101 = UINT64_MAX;
	int8_t x6102 = 1;
	static uint32_t x6103 = UINT32_MAX;
	uint32_t x6104 = UINT32_MAX;

    t98 = ((x6101<<x6102)+(x6103-x6104));

    if (t98 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x6477 = 1629;
	static uint64_t x6478 = 10LLU;
	uint64_t x6479 = UINT64_MAX;
	static uint32_t x6480 = UINT32_MAX;
	uint64_t t99 = 717450LLU;

    t99 = ((x6477<<x6478)+(x6479-x6480));

    if (t99 != 18446744069416252416LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x6501 = 118988826823095LLU;
	static int8_t x6502 = 26;
	volatile int32_t x6504 = -1;
	volatile uint64_t t100 = 60166034LLU;

    t100 = ((x6501<<x6502)+(x6503-x6504));

    if (t100 != 16211556948108115969LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x6521 = 1;
	int16_t x6522 = 0;
	static uint64_t x6523 = 23615912206734LLU;
	static volatile uint16_t x6524 = UINT16_MAX;
	volatile uint64_t t101 = 32256508826678111LLU;

    t101 = ((x6521<<x6522)+(x6523-x6524));

    if (t101 != 23615912141200LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x6605 = UINT32_MAX;
	uint16_t x6606 = 13U;
	volatile int64_t x6608 = -1LL;
	int64_t t102 = -86848719LL;

    t102 = ((x6605<<x6606)+(x6607-x6608));

    if (t102 != 4296345011LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x6639 = 5295U;
	int32_t t103 = -194543469;

    t103 = ((x6637<<x6638)+(x6639-x6640));

    if (t103 != -52048) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x6650 = 1U;
	uint16_t x6651 = 39U;
	uint64_t x6652 = 3873LLU;
	uint64_t t104 = 20LLU;

    t104 = ((x6649<<x6650)+(x6651-x6652));

    if (t104 != 1141192LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x6661 = INT8_MAX;
	volatile int32_t x6663 = INT32_MIN;
	static int64_t x6664 = -426627037314247LL;
	volatile int64_t t105 = 1368597364923LL;

    t105 = ((x6661<<x6662)+(x6663-x6664));

    if (t105 != 426624889830853LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x6749 = 3942793089765495LLU;
	volatile uint32_t x6752 = UINT32_MAX;

    t106 = ((x6749<<x6750)+(x6751-x6752));

    if (t106 != 13852616917649383424LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x6797 = INT16_MAX;
	uint64_t x6798 = 2LLU;
	int64_t x6799 = -1010LL;
	volatile int64_t x6800 = -1LL;
	static volatile int64_t t107 = -458597532LL;

    t107 = ((x6797<<x6798)+(x6799-x6800));

    if (t107 != 130059LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x6885 = 6389;
	volatile uint16_t x6886 = 0U;
	int64_t x6887 = -1LL;
	int16_t x6888 = -742;
	int64_t t108 = -364739LL;

    t108 = ((x6885<<x6886)+(x6887-x6888));

    if (t108 != 7130LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x7013 = UINT64_MAX;
	int16_t x7015 = -1;
	volatile uint64_t t109 = 12217798262137LLU;

    t109 = ((x7013<<x7014)+(x7015-x7016));

    if (t109 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x7047 = INT16_MIN;
	uint16_t x7048 = UINT16_MAX;
	volatile int32_t t110 = -197;

    t110 = ((x7045<<x7046)+(x7047-x7048));

    if (t110 != -32769) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x7125 = 0;
	int32_t x7126 = 9;
	int8_t x7127 = INT8_MIN;
	uint16_t x7128 = 2U;
	volatile int32_t t111 = 0;

    t111 = ((x7125<<x7126)+(x7127-x7128));

    if (t111 != -130) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x7153 = 454U;
	volatile int8_t x7154 = 0;
	static int8_t x7155 = 6;
	uint32_t t112 = 840618U;

    t112 = ((x7153<<x7154)+(x7155-x7156));

    if (t112 != 2147484109U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x7177 = 1;
	volatile int64_t x7179 = -4356594025623066884LL;
	volatile int64_t x7180 = 1017669475376193341LL;

    t113 = ((x7177<<x7178)+(x7179-x7180));

    if (t113 != -5374263500999243841LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x7211 = 12;
	int64_t x7212 = -95723731360LL;
	int64_t t114 = -1981942155850120LL;

    t114 = ((x7209<<x7210)+(x7211-x7212));

    if (t114 != 95723731937LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x7222 = 23;
	uint32_t x7223 = 9691U;
	uint32_t x7224 = 34U;
	volatile uint64_t t115 = 397452061996LLU;

    t115 = ((x7221<<x7222)+(x7223-x7224));

    if (t115 != 11318396462521LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x7281 = UINT64_MAX;
	volatile int8_t x7282 = 3;
	uint16_t x7283 = 20U;
	uint8_t x7284 = UINT8_MAX;
	volatile uint64_t t116 = 1LLU;

    t116 = ((x7281<<x7282)+(x7283-x7284));

    if (t116 != 18446744073709551373LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x7397 = UINT8_MAX;
	uint8_t x7398 = 3U;
	int16_t x7400 = 3;
	int32_t t117 = -14436652;

    t117 = ((x7397<<x7398)+(x7399-x7400));

    if (t117 != -30731) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x7569 = 4282824LLU;
	uint16_t x7570 = 55U;
	static uint16_t x7572 = 1223U;
	uint64_t t118 = 773264135361486303LLU;

    t118 = ((x7569<<x7570)+(x7571-x7572));

    if (t118 != 16429131440647584185LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x7618 = 1;
	int16_t x7619 = INT16_MIN;
	int16_t x7620 = INT16_MIN;

    t119 = ((x7617<<x7618)+(x7619-x7620));

    if (t119 != 131070) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x7693 = 21;
	int8_t x7694 = 3;
	int8_t x7695 = -7;
	int16_t x7696 = INT16_MIN;
	static volatile int32_t t120 = -2216761;

    t120 = ((x7693<<x7694)+(x7695-x7696));

    if (t120 != 32929) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x7885 = 75496380770LLU;
	uint16_t x7886 = 7U;
	volatile uint8_t x7887 = 62U;
	int64_t x7888 = 19998LL;
	volatile uint64_t t121 = 30824LLU;

    t121 = ((x7885<<x7886)+(x7887-x7888));

    if (t121 != 9663536718624LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x8005 = 1U;
	int16_t x8006 = 2;
	uint32_t x8007 = UINT32_MAX;
	int8_t x8008 = INT8_MAX;
	volatile uint32_t t122 = 4U;

    t122 = ((x8005<<x8006)+(x8007-x8008));

    if (t122 != 4294967172U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x8093 = 4982159345495870973LLU;
	int8_t x8094 = 1;
	int64_t x8096 = INT64_MAX;
	static volatile uint64_t t123 = 389565LLU;

    t123 = ((x8093<<x8094)+(x8095-x8096));

    if (t123 != 740946658431933434LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint32_t x8135 = UINT32_MAX;
	int8_t x8136 = INT8_MIN;
	volatile uint32_t t124 = 218U;

    t124 = ((x8133<<x8134)+(x8135-x8136));

    if (t124 != 125U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x8237 = UINT32_MAX;
	uint16_t x8238 = 3U;
	volatile int16_t x8239 = -1;
	static uint32_t x8240 = 22393093U;
	volatile uint32_t t125 = 9965240U;

    t125 = ((x8237<<x8238)+(x8239-x8240));

    if (t125 != 4272574194U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x8289 = UINT16_MAX;
	int64_t x8291 = INT64_MIN;
	int8_t x8292 = -29;

    t126 = ((x8289<<x8290)+(x8291-x8292));

    if (t126 != -9223372036854251499LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x8349 = 4LLU;
	int8_t x8350 = 0;
	static volatile uint8_t x8351 = 4U;
	int32_t x8352 = 76770;
	volatile uint64_t t127 = 8024494255238000LLU;

    t127 = ((x8349<<x8350)+(x8351-x8352));

    if (t127 != 18446744073709474854LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x8393 = UINT64_MAX;
	static int32_t x8394 = 17;
	static uint8_t x8395 = 100U;
	int32_t x8396 = 6158;

    t128 = ((x8393<<x8394)+(x8395-x8396));

    if (t128 != 18446744073709414486LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x8425 = 30789366863812855LLU;
	static volatile int64_t x8427 = -233754786224LL;
	volatile uint16_t x8428 = 5U;

    t129 = ((x8425<<x8426)+(x8427-x8428));

    if (t129 != 1970519245529236491LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x8485 = UINT64_MAX;
	volatile int8_t x8486 = 0;
	uint64_t x8487 = 3628LLU;
	int64_t x8488 = -2400171631840282755LL;
	uint64_t t130 = 28744LLU;

    t130 = ((x8485<<x8486)+(x8487-x8488));

    if (t130 != 2400171631840286382LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x8501 = 18U;
	int8_t x8502 = 31;
	static uint64_t x8503 = UINT64_MAX;
	volatile int8_t x8504 = -7;
	volatile uint64_t t131 = 35654LLU;

    t131 = ((x8501<<x8502)+(x8503-x8504));

    if (t131 != 6LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x8654 = 1U;
	volatile int8_t x8655 = INT8_MAX;
	static volatile uint8_t x8656 = UINT8_MAX;

    t132 = ((x8653<<x8654)+(x8655-x8656));

    if (t132 != -128) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x8677 = 763;
	int16_t x8678 = 0;
	volatile int8_t x8679 = INT8_MIN;
	uint64_t t133 = 3LLU;

    t133 = ((x8677<<x8678)+(x8679-x8680));

    if (t133 != 636LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x8690 = 1U;
	volatile uint64_t x8691 = 3189669139464LLU;
	uint64_t t134 = 4402499803384LLU;

    t134 = ((x8689<<x8690)+(x8691-x8692));

    if (t134 != 3189669139464LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x8777 = UINT64_MAX;
	uint8_t x8778 = 8U;
	int16_t x8779 = -1;
	int8_t x8780 = -1;
	volatile uint64_t t135 = 1631144166830490306LLU;

    t135 = ((x8777<<x8778)+(x8779-x8780));

    if (t135 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x8882 = 6U;
	volatile uint32_t x8883 = 22U;
	static int16_t x8884 = INT16_MIN;
	volatile uint64_t t136 = 5899325268229LLU;

    t136 = ((x8881<<x8882)+(x8883-x8884));

    if (t136 != 32726LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x8902 = 2U;
	uint32_t x8903 = UINT32_MAX;
	uint16_t x8904 = 3883U;
	uint64_t t137 = 58713251054599633LLU;

    t137 = ((x8901<<x8902)+(x8903-x8904));

    if (t137 != 4342864340LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x9077 = UINT16_MAX;
	uint32_t x9078 = 0U;
	uint8_t x9079 = 46U;
	int8_t x9080 = -2;
	int32_t t138 = 28502;

    t138 = ((x9077<<x9078)+(x9079-x9080));

    if (t138 != 65583) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x9125 = UINT64_MAX;
	int16_t x9126 = 8;
	static int64_t x9127 = 1797658757079351LL;
	int32_t x9128 = -5288462;

    t139 = ((x9125<<x9126)+(x9127-x9128));

    if (t139 != 1797658762367557LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x9245 = UINT8_MAX;
	static uint32_t x9246 = 0U;
	int8_t x9248 = INT8_MAX;
	volatile int32_t t140 = -1543;

    t140 = ((x9245<<x9246)+(x9247-x9248));

    if (t140 != -32640) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x9309 = INT64_MAX;
	int32_t x9311 = -126373319;
	uint64_t x9312 = 7LLU;
	static uint64_t t141 = 934261923LLU;

    t141 = ((x9309<<x9310)+(x9311-x9312));

    if (t141 != 9223372036728402481LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x9461 = 6U;
	int16_t x9462 = 23;
	int8_t x9463 = INT8_MIN;
	uint64_t x9464 = 22690LLU;
	volatile uint64_t t142 = 30330LLU;

    t142 = ((x9461<<x9462)+(x9463-x9464));

    if (t142 != 50308830LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x9485 = 0;
	volatile int32_t x9486 = 24;
	uint64_t x9487 = UINT64_MAX;
	static int32_t x9488 = -1;
	uint64_t t143 = 33423830761LLU;

    t143 = ((x9485<<x9486)+(x9487-x9488));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x9593 = 53610LLU;
	uint8_t x9594 = 58U;
	volatile uint64_t x9595 = 243277045380134LLU;
	volatile uint64_t t144 = 1872735680640623811LLU;

    t144 = ((x9593<<x9594)+(x9595-x9596));

    if (t144 != 12105919075417273383LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x9654 = 15U;
	int8_t x9655 = INT8_MIN;
	volatile int32_t t145 = 10599;

    t145 = ((x9653<<x9654)+(x9655-x9656));

    if (t145 != 4161409) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x9705 = UINT64_MAX;
	int8_t x9706 = 3;
	uint16_t x9707 = 207U;
	uint64_t t146 = 0LLU;

    t146 = ((x9705<<x9706)+(x9707-x9708));

    if (t146 != 32967LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x9733 = UINT32_MAX;
	uint8_t x9734 = 12U;
	int32_t x9735 = -6155442;
	volatile int64_t t147 = 7574790575490LL;

    t147 = ((x9733<<x9734)+(x9735-x9736));

    if (t147 != 4273099615LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x9854 = 1;
	int16_t x9855 = -1;
	volatile uint8_t x9856 = 1U;

    t148 = ((x9853<<x9854)+(x9855-x9856));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x9949 = 35;
	volatile uint32_t x9951 = UINT32_MAX;

    t149 = ((x9949<<x9950)+(x9951-x9952));

    if (t149 != 4295038976LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x10041 = 274794210329LLU;
	uint32_t x10043 = 198726817U;
	volatile uint64_t t150 = 192LLU;

    t150 = ((x10041<<x10042)+(x10043-x10044));

    if (t150 != 18445722874229590379LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x10049 = 1279LL;
	volatile uint8_t x10050 = 37U;
	int8_t x10051 = INT8_MAX;
	static int32_t x10052 = 0;
	volatile int64_t t151 = -418780LL;

    t151 = ((x10049<<x10050)+(x10051-x10052));

    if (t151 != 175784421490815LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x10053 = 7650U;
	static volatile int32_t x10055 = INT32_MIN;
	int16_t x10056 = 0;

    t152 = ((x10053<<x10054)+(x10055-x10056));

    if (t152 != -2147468348) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint32_t x10149 = UINT32_MAX;
	static uint32_t x10152 = 1880U;
	uint32_t t153 = 177160096U;

    t153 = ((x10149<<x10150)+(x10151-x10152));

    if (t153 != 2147481640U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x10153 = 0;
	volatile int32_t x10155 = INT32_MIN;
	uint64_t x10156 = 6083LLU;

    t154 = ((x10153<<x10154)+(x10155-x10156));

    if (t154 != 18446744071562061885LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x10157 = 961532250699LLU;
	uint8_t x10158 = 11U;
	int64_t x10159 = INT64_MIN;
	uint8_t x10160 = 0U;
	uint64_t t155 = 4725LLU;

    t155 = ((x10157<<x10158)+(x10159-x10160));

    if (t155 != 9225341254904207360LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x10210 = 9LLU;
	int8_t x10212 = INT8_MAX;
	uint32_t t156 = 1622689392U;

    t156 = ((x10209<<x10210)+(x10211-x10212));

    if (t156 != 4294933889U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x10237 = 19U;
	uint8_t x10238 = 2U;
	int64_t x10239 = INT64_MIN;
	int16_t x10240 = -1;
	static volatile int64_t t157 = 2488250912965091717LL;

    t157 = ((x10237<<x10238)+(x10239-x10240));

    if (t157 != -9223372036854775731LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x10385 = INT16_MAX;
	uint8_t x10386 = 11U;
	volatile int32_t x10387 = INT32_MIN;
	int64_t x10388 = -1LL;

    t158 = ((x10385<<x10386)+(x10387-x10388));

    if (t158 != -2080376831LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x10457 = 91LLU;
	static int16_t x10458 = 44;
	static int32_t x10460 = 112858;
	volatile uint64_t t159 = 1704268986815LLU;

    t159 = ((x10457<<x10458)+(x10459-x10460));

    if (t159 != 1600888929928870LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x10463 = INT8_MAX;

    t160 = ((x10461<<x10462)+(x10463-x10464));

    if (t160 != -58451LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x10493 = 3373LLU;
	uint8_t x10494 = 5U;
	int8_t x10495 = -1;
	int16_t x10496 = INT16_MIN;
	uint64_t t161 = 40907428647LLU;

    t161 = ((x10493<<x10494)+(x10495-x10496));

    if (t161 != 140703LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x10537 = INT8_MAX;
	volatile uint8_t x10538 = 1U;
	volatile int16_t x10539 = INT16_MAX;
	int64_t x10540 = 41561529877726437LL;
	static int64_t t162 = -78LL;

    t162 = ((x10537<<x10538)+(x10539-x10540));

    if (t162 != -41561529877693416LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x10733 = 838318LLU;
	int16_t x10734 = 24;
	volatile uint64_t t163 = 332601850221317637LLU;

    t163 = ((x10733<<x10734)+(x10735-x10736));

    if (t163 != 14064642161973LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x10821 = 9LL;
	volatile uint32_t x10823 = 21U;
	static int16_t x10824 = INT16_MIN;

    t164 = ((x10821<<x10822)+(x10823-x10824));

    if (t164 != 35093LL) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x10825 = 1U;
	static volatile uint16_t x10826 = 1U;
	uint32_t x10827 = 2026629006U;
	uint32_t t165 = 97405553U;

    t165 = ((x10825<<x10826)+(x10827-x10828));

    if (t165 != 2026629003U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x10898 = 1U;
	volatile uint64_t x10900 = 11720688755955LLU;

    t166 = ((x10897<<x10898)+(x10899-x10900));

    if (t166 != 18446732353020796043LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x11083 = 4U;
	static uint64_t t167 = 11571575064016476LLU;

    t167 = ((x11081<<x11082)+(x11083-x11084));

    if (t167 != 256749918725690684LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x11153 = 6;
	static volatile int8_t x11154 = 2;
	int16_t x11155 = INT16_MIN;

    t168 = ((x11153<<x11154)+(x11155-x11156));

    if (t168 != -33537LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x11201 = INT8_MAX;
	int16_t x11202 = 1;
	static int64_t x11204 = -1LL;

    t169 = ((x11201<<x11202)+(x11203-x11204));

    if (t169 != -32513LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint8_t x11214 = 0U;
	static volatile int32_t t170 = -4689;

    t170 = ((x11213<<x11214)+(x11215-x11216));

    if (t170 != 65409) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x11237 = UINT32_MAX;
	volatile uint8_t x11238 = 1U;
	uint16_t x11239 = 4U;
	int16_t x11240 = INT16_MAX;
	volatile uint32_t t171 = 73594945U;

    t171 = ((x11237<<x11238)+(x11239-x11240));

    if (t171 != 4294934531U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x11502 = 0U;
	static int64_t x11503 = 26693069947234LL;
	static volatile int32_t x11504 = INT32_MIN;
	volatile int64_t t172 = -910058LL;

    t172 = ((x11501<<x11502)+(x11503-x11504));

    if (t172 != 26695217431009LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x11513 = 112793U;
	volatile uint8_t x11514 = 4U;
	int8_t x11515 = -1;
	int32_t x11516 = INT32_MIN;
	static uint32_t t173 = 261526U;

    t173 = ((x11513<<x11514)+(x11515-x11516));

    if (t173 != 2149288335U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x11526 = 13U;
	volatile uint64_t x11527 = 116749679LLU;
	volatile uint64_t t174 = 12919111165468LLU;

    t174 = ((x11525<<x11526)+(x11527-x11528));

    if (t174 != 4411589575LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x11569 = 1U;
	int16_t x11570 = 11;
	static uint8_t x11571 = 9U;
	uint64_t t175 = 7426793158LLU;

    t175 = ((x11569<<x11570)+(x11571-x11572));

    if (t175 != 2058LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x11669 = UINT32_MAX;
	int8_t x11670 = 3;
	int32_t x11671 = -73;
	int16_t x11672 = -47;

    t176 = ((x11669<<x11670)+(x11671-x11672));

    if (t176 != 4294967262U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x11721 = 2;
	static int32_t x11722 = 3;
	int64_t x11723 = -1LL;
	int64_t x11724 = -1LL;
	static volatile int64_t t177 = 265239196457LL;

    t177 = ((x11721<<x11722)+(x11723-x11724));

    if (t177 != 16LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x11893 = UINT16_MAX;
	volatile int8_t x11894 = 1;
	volatile int16_t x11895 = INT16_MAX;
	uint64_t x11896 = 213217LLU;
	uint64_t t178 = 2LLU;

    t178 = ((x11893<<x11894)+(x11895-x11896));

    if (t178 != 18446744073709502236LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x11985 = 333981557884585LLU;
	uint8_t x11986 = 2U;
	uint8_t x11988 = UINT8_MAX;

    t179 = ((x11985<<x11986)+(x11987-x11988));

    if (t179 != 1335926231505317LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x12041 = 8337945U;
	static uint8_t x12042 = 1U;
	int64_t x12043 = -31932788962694LL;
	static int64_t x12044 = -1LL;
	volatile int64_t t180 = -60988512LL;

    t180 = ((x12041<<x12042)+(x12043-x12044));

    if (t180 != -31932772286803LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x12229 = 11U;
	static uint8_t x12230 = 0U;
	int16_t x12232 = -1;
	int32_t t181 = -13;

    t181 = ((x12229<<x12230)+(x12231-x12232));

    if (t181 != 15) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x12357 = 58U;
	volatile int16_t x12358 = 1;
	uint16_t x12359 = 1U;
	uint64_t x12360 = 3631403178444LLU;
	static uint64_t t182 = 173182LLU;

    t182 = ((x12357<<x12358)+(x12359-x12360));

    if (t182 != 18446740442306373289LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x12394 = 1;
	static volatile int64_t x12395 = -1LL;
	int64_t x12396 = -12331821635LL;
	int64_t t183 = 43816830573012LL;

    t183 = ((x12393<<x12394)+(x12395-x12396));

    if (t183 != 12366079944LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x12441 = 83LLU;
	int64_t x12444 = -1LL;
	volatile uint64_t t184 = 55243921LLU;

    t184 = ((x12441<<x12442)+(x12443-x12444));

    if (t184 != 745014LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x12445 = 0LL;
	int8_t x12446 = 2;
	volatile int8_t x12447 = -3;
	static uint64_t x12448 = 126LLU;
	uint64_t t185 = 630637782LLU;

    t185 = ((x12445<<x12446)+(x12447-x12448));

    if (t185 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x12785 = 34;
	int16_t x12786 = 2;
	int8_t x12787 = INT8_MAX;
	uint8_t x12788 = 0U;

    t186 = ((x12785<<x12786)+(x12787-x12788));

    if (t186 != 263) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x12817 = UINT64_MAX;
	int32_t x12818 = 1;
	volatile uint32_t x12819 = 12315U;
	static int64_t x12820 = -1LL;

    t187 = ((x12817<<x12818)+(x12819-x12820));

    if (t187 != 12314LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x12830 = 0;
	static int8_t x12831 = INT8_MAX;
	uint8_t x12832 = UINT8_MAX;
	uint64_t t188 = 1LLU;

    t188 = ((x12829<<x12830)+(x12831-x12832));

    if (t188 != 1718380099LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x12881 = 1983505749182293540LLU;
	static int8_t x12882 = 5;
	int32_t x12883 = 5226;
	static int8_t x12884 = 3;

    t189 = ((x12881<<x12882)+(x12883-x12884));

    if (t189 != 8131951752704743655LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x13005 = 25199U;
	static volatile int8_t x13006 = 11;
	uint16_t x13008 = 3U;
	static int32_t t190 = 56;

    t190 = ((x13005<<x13006)+(x13007-x13008));

    if (t190 != 51607645) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x13069 = 1168790046272LLU;
	uint8_t x13070 = 2U;
	uint16_t x13071 = 1U;
	volatile uint64_t t191 = 15LLU;

    t191 = ((x13069<<x13070)+(x13071-x13072));

    if (t191 != 4675243927104LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x13077 = 61;
	int32_t x13079 = INT32_MIN;
	int8_t x13080 = -1;
	int32_t t192 = 4819;

    t192 = ((x13077<<x13078)+(x13079-x13080));

    if (t192 != -2147483586) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x13189 = 84U;
	int16_t x13192 = -1;
	volatile int32_t t193 = -12415;

    t193 = ((x13189<<x13190)+(x13191-x13192));

    if (t193 != -2147483311) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint8_t x13221 = 56U;
	static uint8_t x13222 = 3U;
	int16_t x13223 = INT16_MIN;
	volatile uint32_t x13224 = 485491U;

    t194 = ((x13221<<x13222)+(x13223-x13224));

    if (t194 != 4294449485U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x13241 = 47U;
	uint8_t x13242 = 1U;
	int64_t x13243 = -1LL;
	static int32_t x13244 = 251;

    t195 = ((x13241<<x13242)+(x13243-x13244));

    if (t195 != -158LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint32_t x13257 = UINT32_MAX;
	int16_t x13258 = 1;
	static int32_t x13259 = INT32_MIN;
	volatile int8_t x13260 = -11;
	uint32_t t196 = 27U;

    t196 = ((x13257<<x13258)+(x13259-x13260));

    if (t196 != 2147483657U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x13313 = UINT16_MAX;
	int64_t x13314 = 0LL;
	int8_t x13315 = INT8_MAX;

    t197 = ((x13313<<x13314)+(x13315-x13316));

    if (t197 != 65663LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint64_t x13365 = 40LLU;
	uint16_t x13366 = 7U;
	int64_t x13367 = -1LL;
	volatile uint32_t x13368 = 120U;

    t198 = ((x13365<<x13366)+(x13367-x13368));

    if (t198 != 4999LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x13425 = 3LLU;
	static int8_t x13426 = 31;
	int64_t x13427 = -176412282776LL;
	int8_t x13428 = -1;

    t199 = ((x13425<<x13426)+(x13427-x13428));

    if (t199 != 18446743903739719785LLU) { NG(); } else { ; }
	
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

