
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

uint32_t x10 = 7649U;
volatile int8_t x11 = INT8_MIN;
int16_t x21 = 1747;
uint64_t x22 = UINT64_MAX;
static int16_t x28 = INT16_MAX;
volatile int16_t x45 = 2746;
int32_t x66 = -1;
int64_t x73 = -352273LL;
volatile uint8_t x76 = 26U;
int64_t x124 = 1LL;
static int16_t x125 = INT16_MIN;
volatile int32_t t12 = 9387;
uint32_t x158 = 72861U;
uint32_t x182 = UINT32_MAX;
int16_t x183 = 9;
int64_t x184 = INT64_MIN;
volatile int32_t t18 = -521014;
int16_t x199 = 11;
volatile int32_t t19 = -12;
static int32_t x210 = 106;
int64_t x225 = -265014992397LL;
volatile uint16_t x226 = 3174U;
int16_t x233 = INT16_MAX;
int32_t x246 = 28208;
volatile int16_t x258 = -12101;
static int32_t x269 = -91446;
int8_t x270 = -1;
volatile uint64_t x291 = 7270767651612LLU;
uint16_t x295 = 1U;
static volatile uint64_t x311 = 23031LLU;
int16_t x317 = 26;
int32_t x321 = -1;
uint64_t x323 = 333977150346409LLU;
uint16_t x324 = 25U;
volatile uint16_t x339 = 14U;
uint64_t x340 = UINT64_MAX;
int32_t t36 = 7;
int8_t x375 = 14;
int32_t t39 = 378;
int8_t x394 = 0;
static int16_t x395 = INT16_MAX;
int16_t x421 = 43;
volatile int32_t x423 = 294;
int32_t t47 = -15569;
uint16_t x480 = 22U;
static uint16_t x505 = 9668U;
static int64_t x534 = -1LL;
int8_t x536 = INT8_MAX;
uint32_t x538 = 29906U;
int8_t x569 = -1;
int32_t x608 = 7;
int32_t x613 = INT32_MAX;
int16_t x614 = 6938;
int64_t x630 = INT64_MIN;
int8_t x701 = 43;
int8_t x711 = 1;
uint16_t x724 = UINT16_MAX;
int32_t t62 = -460695705;
static uint8_t x738 = 122U;
static int8_t x750 = -1;
volatile int8_t x753 = INT8_MIN;
int64_t x754 = INT64_MIN;
uint64_t x774 = UINT64_MAX;
uint8_t x797 = 1U;
int64_t x808 = -1LL;
int32_t t71 = 0;
static int8_t x826 = INT8_MAX;
static int16_t x828 = INT16_MIN;
int32_t t73 = -1016762983;
int16_t x830 = -1006;
uint8_t x882 = UINT8_MAX;
uint8_t x883 = UINT8_MAX;
uint64_t x941 = 4945LLU;
int64_t x943 = INT64_MIN;
int16_t x944 = INT16_MAX;
static volatile int32_t t82 = -1438;
int64_t x982 = INT64_MIN;
int32_t x984 = INT32_MIN;
int16_t x985 = -1;
uint64_t x987 = 99LLU;
static volatile int8_t x1018 = INT8_MIN;
int32_t t90 = -15;
uint64_t x1047 = 51153623192072473LLU;
uint16_t x1063 = 3099U;
int32_t t96 = 15060548;
int64_t x1092 = INT64_MAX;
volatile int32_t t98 = 108705426;
int16_t x1098 = INT16_MAX;
static uint16_t x1101 = 14U;
uint8_t x1102 = 3U;
int16_t x1129 = -658;
static uint32_t x1150 = 13999559U;
uint32_t x1158 = 86244308U;
uint64_t x1193 = UINT64_MAX;
uint8_t x1195 = UINT8_MAX;
int64_t x1201 = -1LL;
int16_t x1225 = -20;
volatile int32_t t113 = -9;
volatile int8_t x1249 = 0;
static int32_t t114 = -74765763;
int32_t t117 = 1326050;
uint64_t x1294 = 795768010358796304LLU;
int32_t x1296 = INT32_MIN;
volatile int16_t x1301 = 7;
int64_t x1351 = INT64_MIN;
volatile int32_t t123 = -232371;
static uint8_t x1369 = 4U;
int8_t x1376 = 1;
uint32_t x1380 = 257198U;
int32_t t129 = 1;
static int8_t x1415 = 0;
int64_t x1421 = INT64_MAX;
int8_t x1432 = 0;
uint32_t x1435 = 899148459U;
uint8_t x1441 = 0U;
uint64_t x1442 = UINT64_MAX;
volatile int32_t t135 = -45;
uint16_t x1457 = UINT16_MAX;
volatile int32_t t137 = -21165183;
int8_t x1484 = 1;
int64_t x1507 = 20962839784LL;
volatile int32_t t147 = 23798560;
int16_t x1553 = INT16_MAX;
volatile int16_t x1559 = 3821;
static int64_t x1572 = INT64_MIN;
int32_t x1574 = INT32_MAX;
int32_t x1628 = INT32_MAX;
uint8_t x1643 = 5U;
static int16_t x1644 = INT16_MIN;
uint8_t x1700 = 13U;
uint32_t x1703 = 3899935U;
static int8_t x1713 = INT8_MAX;
volatile int16_t x1714 = INT16_MAX;
int8_t x1726 = 1;
uint64_t x1734 = 221LLU;
uint8_t x1735 = 51U;
int16_t x1736 = 140;
int32_t x1738 = 243433;
int32_t x1739 = INT32_MIN;
volatile int64_t x1765 = INT64_MAX;
static volatile uint64_t x1770 = UINT64_MAX;
volatile int32_t x1776 = -4036440;
int32_t t167 = 413057126;
static uint32_t x1777 = UINT32_MAX;
static volatile uint32_t x1779 = 249926727U;
int64_t x1803 = INT64_MIN;
uint16_t x1804 = 56U;
volatile uint64_t x1813 = 1037247023280175135LLU;
int64_t x1814 = 78143LL;
volatile uint8_t x1815 = 0U;
static int16_t x1823 = INT16_MAX;
int32_t t173 = 839998;
static int32_t x1843 = INT32_MIN;
volatile int64_t x1853 = 5LL;
int16_t x1856 = 2;
static int32_t t176 = -12;
static int32_t x1905 = -1716;
volatile int32_t t180 = -486880;
uint16_t x1910 = 5U;
static uint8_t x1922 = 32U;
int64_t x1923 = INT64_MIN;
volatile int32_t t183 = 2358;
int16_t x1929 = 340;
int8_t x1955 = INT8_MAX;
int8_t x1967 = INT8_MAX;
int64_t x1970 = 13293324LL;
uint16_t x1972 = 47U;
static int16_t x1973 = 794;
static volatile int32_t t188 = 8117394;
static uint16_t x2030 = UINT16_MAX;
volatile int32_t t192 = 15;
uint8_t x2061 = UINT8_MAX;
volatile int64_t x2072 = 1LL;
int32_t t194 = -388272;
volatile int16_t x2080 = INT16_MIN;
static uint8_t x2084 = 1U;
volatile int32_t t196 = 1;
uint8_t x2092 = 2U;
int64_t x2113 = -54192604460624436LL;
int8_t x2114 = 24;


void f0(void) {
    	int32_t x9 = 10;
	int16_t x12 = 113;
	int32_t t0 = -182869793;

    t0 = ((x9!=x10)>>(x11&x12));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x23 = 6U;
	int16_t x24 = -2550;
	volatile int32_t t1 = -158088;

    t1 = ((x21!=x22)>>(x23&x24));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = 483LL;
	int8_t x26 = INT8_MIN;
	static int64_t x27 = INT64_MIN;
	int32_t t2 = 184360844;

    t2 = ((x25!=x26)>>(x27&x28));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x46 = -3;
	volatile uint8_t x47 = 12U;
	int8_t x48 = -1;
	int32_t t3 = 103429;

    t3 = ((x45!=x46)>>(x47&x48));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x65 = INT32_MIN;
	uint16_t x67 = 24U;
	uint16_t x68 = UINT16_MAX;
	int32_t t4 = -995;

    t4 = ((x65!=x66)>>(x67&x68));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x74 = 117LLU;
	int8_t x75 = 2;
	static volatile int32_t t5 = 1;

    t5 = ((x73!=x74)>>(x75&x76));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x85 = INT32_MIN;
	static uint32_t x86 = 1360U;
	uint32_t x87 = 1964U;
	int64_t x88 = INT64_MIN;
	volatile int32_t t6 = -10;

    t6 = ((x85!=x86)>>(x87&x88));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x93 = -1;
	int64_t x94 = 3487148982LL;
	int16_t x95 = 1;
	uint32_t x96 = UINT32_MAX;
	static int32_t t7 = -3;

    t7 = ((x93!=x94)>>(x95&x96));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x97 = 22;
	uint32_t x98 = 13264U;
	int16_t x99 = INT16_MIN;
	uint32_t x100 = 115U;
	volatile int32_t t8 = 11454;

    t8 = ((x97!=x98)>>(x99&x100));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x121 = 50782404LL;
	uint32_t x122 = UINT32_MAX;
	uint32_t x123 = 1781U;
	volatile int32_t t9 = 270817;

    t9 = ((x121!=x122)>>(x123&x124));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x126 = INT16_MIN;
	int8_t x127 = 1;
	static int8_t x128 = -1;
	volatile int32_t t10 = 60607289;

    t10 = ((x125!=x126)>>(x127&x128));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x137 = INT64_MAX;
	static volatile int32_t x138 = -29092;
	uint32_t x139 = UINT32_MAX;
	volatile int64_t x140 = INT64_MIN;
	volatile int32_t t11 = -9052;

    t11 = ((x137!=x138)>>(x139&x140));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x141 = UINT64_MAX;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = 8U;
	int32_t x144 = -1;

    t12 = ((x141!=x142)>>(x143&x144));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x157 = INT8_MIN;
	static volatile uint8_t x159 = 0U;
	uint16_t x160 = UINT16_MAX;
	static volatile int32_t t13 = -24265;

    t13 = ((x157!=x158)>>(x159&x160));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x165 = -22;
	volatile int64_t x166 = -3695314438LL;
	int16_t x167 = 1;
	int8_t x168 = -1;
	int32_t t14 = -19;

    t14 = ((x165!=x166)>>(x167&x168));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x169 = 27538;
	int8_t x170 = INT8_MIN;
	int16_t x171 = -14056;
	int16_t x172 = 4643;
	volatile int32_t t15 = -782169;

    t15 = ((x169!=x170)>>(x171&x172));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x181 = UINT64_MAX;
	int32_t t16 = -49;

    t16 = ((x181!=x182)>>(x183&x184));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x185 = 1567468568U;
	volatile uint64_t x186 = 44040026534181757LLU;
	int32_t x187 = INT32_MAX;
	int32_t x188 = 4;
	int32_t t17 = 3992413;

    t17 = ((x185!=x186)>>(x187&x188));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x193 = INT64_MIN;
	uint8_t x194 = 2U;
	uint8_t x195 = 1U;
	volatile int16_t x196 = INT16_MIN;

    t18 = ((x193!=x194)>>(x195&x196));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x197 = 1;
	uint64_t x198 = 635296766692LLU;
	static volatile int32_t x200 = -1;

    t19 = ((x197!=x198)>>(x199&x200));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x205 = 63U;
	static uint16_t x206 = 11574U;
	uint8_t x207 = 9U;
	static int64_t x208 = 1LL;
	volatile int32_t t20 = -24;

    t20 = ((x205!=x206)>>(x207&x208));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x209 = INT16_MIN;
	int8_t x211 = 5;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t21 = 8;

    t21 = ((x209!=x210)>>(x211&x212));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x227 = INT32_MAX;
	static volatile int32_t x228 = INT32_MIN;
	volatile int32_t t22 = 252;

    t22 = ((x225!=x226)>>(x227&x228));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x229 = INT64_MIN;
	static uint8_t x230 = UINT8_MAX;
	int8_t x231 = 1;
	uint32_t x232 = UINT32_MAX;
	int32_t t23 = -287632601;

    t23 = ((x229!=x230)>>(x231&x232));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x234 = -1LL;
	uint8_t x235 = 24U;
	volatile int8_t x236 = -1;
	volatile int32_t t24 = -59;

    t24 = ((x233!=x234)>>(x235&x236));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x245 = INT64_MIN;
	uint8_t x247 = 3U;
	static int16_t x248 = -1;
	static int32_t t25 = -4022395;

    t25 = ((x245!=x246)>>(x247&x248));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x257 = 92U;
	uint8_t x259 = 52U;
	uint8_t x260 = 90U;
	volatile int32_t t26 = 7375;

    t26 = ((x257!=x258)>>(x259&x260));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x271 = 13U;
	uint8_t x272 = 10U;
	static int32_t t27 = -12270;

    t27 = ((x269!=x270)>>(x271&x272));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x273 = -107978631;
	uint16_t x274 = 27058U;
	uint8_t x275 = 6U;
	int8_t x276 = 0;
	static volatile int32_t t28 = 46660;

    t28 = ((x273!=x274)>>(x275&x276));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x289 = INT32_MIN;
	int8_t x290 = INT8_MAX;
	int16_t x292 = 4290;
	int32_t t29 = 23649503;

    t29 = ((x289!=x290)>>(x291&x292));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x293 = -1;
	volatile int8_t x294 = INT8_MIN;
	int16_t x296 = INT16_MAX;
	volatile int32_t t30 = 4107159;

    t30 = ((x293!=x294)>>(x295&x296));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x305 = INT16_MAX;
	int8_t x306 = INT8_MIN;
	int16_t x307 = 6;
	int32_t x308 = -966160661;
	static volatile int32_t t31 = 8;

    t31 = ((x305!=x306)>>(x307&x308));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x309 = INT32_MIN;
	int64_t x310 = 2LL;
	volatile int8_t x312 = 3;
	volatile int32_t t32 = -1886;

    t32 = ((x309!=x310)>>(x311&x312));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x318 = -40;
	int16_t x319 = 1;
	volatile int32_t x320 = -1;
	volatile int32_t t33 = 120781;

    t33 = ((x317!=x318)>>(x319&x320));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x322 = 0U;
	int32_t t34 = -6;

    t34 = ((x321!=x322)>>(x323&x324));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x337 = INT16_MIN;
	uint64_t x338 = UINT64_MAX;
	int32_t t35 = -73404;

    t35 = ((x337!=x338)>>(x339&x340));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x349 = -1LL;
	int64_t x350 = -1345088290200LL;
	uint8_t x351 = 29U;
	int64_t x352 = -1LL;

    t36 = ((x349!=x350)>>(x351&x352));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x373 = INT16_MIN;
	uint16_t x374 = 15313U;
	volatile int64_t x376 = -1LL;
	volatile int32_t t37 = -58895;

    t37 = ((x373!=x374)>>(x375&x376));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x377 = 33506586LLU;
	int16_t x378 = INT16_MAX;
	uint16_t x379 = 0U;
	int32_t x380 = INT32_MIN;
	int32_t t38 = -13886727;

    t38 = ((x377!=x378)>>(x379&x380));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x381 = -1;
	uint64_t x382 = UINT64_MAX;
	uint32_t x383 = 1802U;
	int64_t x384 = INT64_MIN;

    t39 = ((x381!=x382)>>(x383&x384));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x393 = 0LL;
	int64_t x396 = INT64_MIN;
	int32_t t40 = -922983377;

    t40 = ((x393!=x394)>>(x395&x396));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x397 = -1LL;
	volatile uint16_t x398 = UINT16_MAX;
	uint8_t x399 = 1U;
	uint64_t x400 = UINT64_MAX;
	int32_t t41 = 101824;

    t41 = ((x397!=x398)>>(x399&x400));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x401 = -1925334829LL;
	static int8_t x402 = INT8_MIN;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = UINT8_MAX;
	int32_t t42 = 76332;

    t42 = ((x401!=x402)>>(x403&x404));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x422 = -73326174778LL;
	int32_t x424 = INT32_MIN;
	volatile int32_t t43 = -29;

    t43 = ((x421!=x422)>>(x423&x424));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x441 = INT8_MAX;
	static volatile int64_t x442 = INT64_MIN;
	volatile int32_t x443 = INT32_MIN;
	volatile int32_t x444 = 0;
	int32_t t44 = 83315;

    t44 = ((x441!=x442)>>(x443&x444));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x445 = INT8_MAX;
	static int16_t x446 = INT16_MIN;
	int16_t x447 = INT16_MAX;
	int32_t x448 = INT32_MIN;
	int32_t t45 = 15;

    t45 = ((x445!=x446)>>(x447&x448));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x449 = 617767134050406LLU;
	static int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MAX;
	uint32_t x452 = 1794456U;
	static int32_t t46 = -1663;

    t46 = ((x449!=x450)>>(x451&x452));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x461 = UINT8_MAX;
	volatile uint32_t x462 = UINT32_MAX;
	int8_t x463 = 0;
	int64_t x464 = 40017862443424LL;

    t47 = ((x461!=x462)>>(x463&x464));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x477 = INT16_MIN;
	int32_t x478 = 0;
	int64_t x479 = -1LL;
	int32_t t48 = 20973;

    t48 = ((x477!=x478)>>(x479&x480));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x506 = INT32_MAX;
	volatile uint16_t x507 = 23U;
	int16_t x508 = INT16_MIN;
	volatile int32_t t49 = 339723886;

    t49 = ((x505!=x506)>>(x507&x508));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x533 = -1;
	uint8_t x535 = 8U;
	volatile int32_t t50 = -305180;

    t50 = ((x533!=x534)>>(x535&x536));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x537 = UINT64_MAX;
	static uint8_t x539 = UINT8_MAX;
	int8_t x540 = 1;
	int32_t t51 = -509;

    t51 = ((x537!=x538)>>(x539&x540));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x561 = -1;
	static volatile int64_t x562 = INT64_MIN;
	volatile uint32_t x563 = 0U;
	uint16_t x564 = UINT16_MAX;
	int32_t t52 = 50;

    t52 = ((x561!=x562)>>(x563&x564));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x570 = INT16_MAX;
	uint8_t x571 = 0U;
	int16_t x572 = INT16_MIN;
	volatile int32_t t53 = -1281;

    t53 = ((x569!=x570)>>(x571&x572));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x605 = INT8_MIN;
	int16_t x606 = INT16_MIN;
	int32_t x607 = 4745348;
	int32_t t54 = -31100;

    t54 = ((x605!=x606)>>(x607&x608));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x615 = 14;
	int64_t x616 = 17803102007596325LL;
	int32_t t55 = 447956;

    t55 = ((x613!=x614)>>(x615&x616));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x629 = UINT8_MAX;
	int32_t x631 = 53;
	uint8_t x632 = 20U;
	volatile int32_t t56 = -55325;

    t56 = ((x629!=x630)>>(x631&x632));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x637 = -33LL;
	uint32_t x638 = 65510U;
	uint8_t x639 = 6U;
	int16_t x640 = -1;
	static volatile int32_t t57 = 890695015;

    t57 = ((x637!=x638)>>(x639&x640));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x673 = 2703U;
	int32_t x674 = INT32_MIN;
	uint16_t x675 = 75U;
	int8_t x676 = INT8_MIN;
	int32_t t58 = 13230;

    t58 = ((x673!=x674)>>(x675&x676));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x702 = -1;
	int16_t x703 = 1;
	uint8_t x704 = UINT8_MAX;
	int32_t t59 = 85387669;

    t59 = ((x701!=x702)>>(x703&x704));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x709 = 461233U;
	int64_t x710 = 0LL;
	volatile uint32_t x712 = 16U;
	int32_t t60 = -162;

    t60 = ((x709!=x710)>>(x711&x712));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x713 = -6003LL;
	static volatile int8_t x714 = -1;
	static uint8_t x715 = UINT8_MAX;
	uint64_t x716 = 18LLU;
	volatile int32_t t61 = -5;

    t61 = ((x713!=x714)>>(x715&x716));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x721 = 457988833;
	int8_t x722 = INT8_MAX;
	static uint8_t x723 = 1U;

    t62 = ((x721!=x722)>>(x723&x724));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x733 = 49;
	volatile int32_t x734 = INT32_MIN;
	int16_t x735 = 124;
	static volatile uint16_t x736 = 3U;
	volatile int32_t t63 = 13449;

    t63 = ((x733!=x734)>>(x735&x736));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x737 = 8U;
	int32_t x739 = INT32_MIN;
	int16_t x740 = 0;
	static int32_t t64 = -5498947;

    t64 = ((x737!=x738)>>(x739&x740));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x749 = 12U;
	uint8_t x751 = 2U;
	int16_t x752 = 29;
	volatile int32_t t65 = 2622;

    t65 = ((x749!=x750)>>(x751&x752));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x755 = 2520;
	int16_t x756 = INT16_MIN;
	int32_t t66 = 4565754;

    t66 = ((x753!=x754)>>(x755&x756));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x757 = -1;
	uint64_t x758 = 564896029771LLU;
	int16_t x759 = INT16_MIN;
	int8_t x760 = INT8_MAX;
	static volatile int32_t t67 = 141093872;

    t67 = ((x757!=x758)>>(x759&x760));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x773 = -1;
	int16_t x775 = 22;
	uint16_t x776 = UINT16_MAX;
	volatile int32_t t68 = -6802;

    t68 = ((x773!=x774)>>(x775&x776));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x798 = UINT64_MAX;
	int32_t x799 = INT32_MIN;
	volatile uint64_t x800 = 73404LLU;
	volatile int32_t t69 = 23;

    t69 = ((x797!=x798)>>(x799&x800));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x801 = -3;
	uint8_t x802 = 31U;
	int8_t x803 = 12;
	int32_t x804 = -1;
	int32_t t70 = 346377688;

    t70 = ((x801!=x802)>>(x803&x804));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x805 = 6229U;
	int16_t x806 = 41;
	int16_t x807 = 28;

    t71 = ((x805!=x806)>>(x807&x808));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x813 = INT64_MIN;
	volatile uint64_t x814 = 1283178735251735LLU;
	int32_t x815 = INT32_MAX;
	static int32_t x816 = INT32_MIN;
	volatile int32_t t72 = 984;

    t72 = ((x813!=x814)>>(x815&x816));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x825 = 1U;
	static uint8_t x827 = UINT8_MAX;

    t73 = ((x825!=x826)>>(x827&x828));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x829 = -1;
	static uint64_t x831 = UINT64_MAX;
	uint8_t x832 = 6U;
	int32_t t74 = -25;

    t74 = ((x829!=x830)>>(x831&x832));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x841 = INT16_MIN;
	volatile int8_t x842 = 1;
	uint8_t x843 = UINT8_MAX;
	static int32_t x844 = INT32_MIN;
	static int32_t t75 = 556;

    t75 = ((x841!=x842)>>(x843&x844));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x873 = -5956LL;
	int16_t x874 = INT16_MIN;
	uint8_t x875 = UINT8_MAX;
	volatile int32_t x876 = INT32_MIN;
	volatile int32_t t76 = 28;

    t76 = ((x873!=x874)>>(x875&x876));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x877 = -1;
	int64_t x878 = -1LL;
	volatile uint8_t x879 = 9U;
	uint8_t x880 = UINT8_MAX;
	int32_t t77 = 0;

    t77 = ((x877!=x878)>>(x879&x880));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x881 = INT32_MIN;
	int64_t x884 = INT64_MIN;
	volatile int32_t t78 = -271;

    t78 = ((x881!=x882)>>(x883&x884));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x929 = -1;
	int16_t x930 = -31;
	uint8_t x931 = 1U;
	int32_t x932 = INT32_MAX;
	volatile int32_t t79 = -91;

    t79 = ((x929!=x930)>>(x931&x932));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x942 = -1;
	int32_t t80 = 7;

    t80 = ((x941!=x942)>>(x943&x944));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x949 = UINT32_MAX;
	static int8_t x950 = -24;
	uint32_t x951 = 11U;
	int64_t x952 = -47647051899LL;
	int32_t t81 = 116;

    t81 = ((x949!=x950)>>(x951&x952));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int32_t x957 = -3;
	static volatile int8_t x958 = INT8_MIN;
	int16_t x959 = INT16_MIN;
	uint8_t x960 = 3U;

    t82 = ((x957!=x958)>>(x959&x960));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x961 = -62;
	volatile uint64_t x962 = 745532029LLU;
	int16_t x963 = 24;
	int64_t x964 = -560846089889511678LL;
	int32_t t83 = 21867502;

    t83 = ((x961!=x962)>>(x963&x964));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x965 = 3715138779995LL;
	int64_t x966 = INT64_MAX;
	static volatile uint64_t x967 = 3485781937LLU;
	int64_t x968 = 6LL;
	volatile int32_t t84 = -6;

    t84 = ((x965!=x966)>>(x967&x968));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x973 = 1U;
	uint32_t x974 = 1U;
	static int16_t x975 = 759;
	volatile int32_t x976 = INT32_MIN;
	static int32_t t85 = -2100;

    t85 = ((x973!=x974)>>(x975&x976));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x981 = INT64_MIN;
	uint64_t x983 = 14LLU;
	static volatile int32_t t86 = 15771;

    t86 = ((x981!=x982)>>(x983&x984));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x986 = 2398656LLU;
	volatile int16_t x988 = INT16_MIN;
	int32_t t87 = -39229343;

    t87 = ((x985!=x986)>>(x987&x988));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x1009 = INT16_MIN;
	int16_t x1010 = INT16_MIN;
	uint8_t x1011 = 9U;
	int16_t x1012 = -18;
	volatile int32_t t88 = -469;

    t88 = ((x1009!=x1010)>>(x1011&x1012));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x1017 = INT8_MIN;
	volatile uint32_t x1019 = 0U;
	int32_t x1020 = INT32_MIN;
	int32_t t89 = 213637753;

    t89 = ((x1017!=x1018)>>(x1019&x1020));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x1037 = 63807126050718028LL;
	static volatile int32_t x1038 = -10326;
	int8_t x1039 = INT8_MAX;
	static int64_t x1040 = INT64_MIN;

    t90 = ((x1037!=x1038)>>(x1039&x1040));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x1045 = 507642;
	int64_t x1046 = INT64_MAX;
	int8_t x1048 = INT8_MAX;
	volatile int32_t t91 = 31458;

    t91 = ((x1045!=x1046)>>(x1047&x1048));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x1053 = INT16_MIN;
	int16_t x1054 = INT16_MIN;
	static volatile uint64_t x1055 = 603LLU;
	volatile int32_t x1056 = INT32_MIN;
	int32_t t92 = 4;

    t92 = ((x1053!=x1054)>>(x1055&x1056));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x1057 = -1LL;
	volatile int8_t x1058 = INT8_MIN;
	int64_t x1059 = 3LL;
	int64_t x1060 = 51517LL;
	volatile int32_t t93 = 223072021;

    t93 = ((x1057!=x1058)>>(x1059&x1060));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x1061 = 71;
	static int8_t x1062 = 36;
	int64_t x1064 = INT64_MIN;
	static volatile int32_t t94 = 0;

    t94 = ((x1061!=x1062)>>(x1063&x1064));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x1073 = 6948440LL;
	int64_t x1074 = INT64_MAX;
	volatile uint16_t x1075 = 1462U;
	int8_t x1076 = 0;
	int32_t t95 = -22738341;

    t95 = ((x1073!=x1074)>>(x1075&x1076));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x1085 = -1LL;
	int8_t x1086 = INT8_MIN;
	uint32_t x1087 = UINT32_MAX;
	int64_t x1088 = INT64_MIN;

    t96 = ((x1085!=x1086)>>(x1087&x1088));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x1089 = 296473U;
	uint32_t x1090 = 274944529U;
	int64_t x1091 = INT64_MIN;
	int32_t t97 = 43571542;

    t97 = ((x1089!=x1090)>>(x1091&x1092));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int32_t x1093 = 174504689;
	int32_t x1094 = INT32_MAX;
	uint64_t x1095 = 213LLU;
	static int8_t x1096 = 49;

    t98 = ((x1093!=x1094)>>(x1095&x1096));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x1097 = -1LL;
	static uint16_t x1099 = 3902U;
	int32_t x1100 = INT32_MIN;
	static int32_t t99 = 20;

    t99 = ((x1097!=x1098)>>(x1099&x1100));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x1103 = INT16_MIN;
	static int8_t x1104 = INT8_MAX;
	static int32_t t100 = 1;

    t100 = ((x1101!=x1102)>>(x1103&x1104));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x1130 = -830997LL;
	static uint8_t x1131 = 34U;
	int16_t x1132 = 17;
	int32_t t101 = -48;

    t101 = ((x1129!=x1130)>>(x1131&x1132));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x1141 = INT64_MIN;
	int32_t x1142 = INT32_MAX;
	int32_t x1143 = INT32_MAX;
	int32_t x1144 = INT32_MIN;
	static volatile int32_t t102 = 2031;

    t102 = ((x1141!=x1142)>>(x1143&x1144));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x1149 = -1;
	int16_t x1151 = 25;
	uint64_t x1152 = 74599616092826LLU;
	volatile int32_t t103 = 16083906;

    t103 = ((x1149!=x1150)>>(x1151&x1152));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x1153 = 160102U;
	int16_t x1154 = 122;
	int16_t x1155 = INT16_MIN;
	int64_t x1156 = 42LL;
	volatile int32_t t104 = -475077;

    t104 = ((x1153!=x1154)>>(x1155&x1156));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x1157 = 3492;
	int32_t x1159 = INT32_MIN;
	volatile uint8_t x1160 = 122U;
	static volatile int32_t t105 = 771528948;

    t105 = ((x1157!=x1158)>>(x1159&x1160));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x1173 = INT16_MIN;
	static uint32_t x1174 = 5963U;
	uint8_t x1175 = 1U;
	int64_t x1176 = INT64_MIN;
	volatile int32_t t106 = -15967074;

    t106 = ((x1173!=x1174)>>(x1175&x1176));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x1177 = 86370760U;
	int8_t x1178 = 13;
	volatile uint32_t x1179 = 173025569U;
	uint16_t x1180 = 5711U;
	volatile int32_t t107 = 88212;

    t107 = ((x1177!=x1178)>>(x1179&x1180));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x1194 = INT64_MIN;
	int32_t x1196 = INT32_MIN;
	int32_t t108 = 1843;

    t108 = ((x1193!=x1194)>>(x1195&x1196));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x1197 = 1019U;
	int32_t x1198 = -1;
	uint16_t x1199 = 784U;
	int64_t x1200 = INT64_MIN;
	int32_t t109 = -49;

    t109 = ((x1197!=x1198)>>(x1199&x1200));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x1202 = -150;
	volatile int8_t x1203 = INT8_MAX;
	int64_t x1204 = INT64_MIN;
	volatile int32_t t110 = 41;

    t110 = ((x1201!=x1202)>>(x1203&x1204));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x1213 = UINT8_MAX;
	static int16_t x1214 = -4002;
	uint16_t x1215 = 0U;
	int8_t x1216 = -31;
	volatile int32_t t111 = 10;

    t111 = ((x1213!=x1214)>>(x1215&x1216));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x1226 = INT64_MIN;
	int32_t x1227 = INT32_MIN;
	uint64_t x1228 = 199LLU;
	volatile int32_t t112 = -1604213;

    t112 = ((x1225!=x1226)>>(x1227&x1228));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x1229 = INT8_MAX;
	static int32_t x1230 = INT32_MAX;
	int32_t x1231 = -166758;
	uint8_t x1232 = 31U;

    t113 = ((x1229!=x1230)>>(x1231&x1232));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x1250 = INT32_MIN;
	int16_t x1251 = 1044;
	uint8_t x1252 = 58U;

    t114 = ((x1249!=x1250)>>(x1251&x1252));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x1257 = UINT64_MAX;
	uint32_t x1258 = 23761U;
	int16_t x1259 = 6;
	static uint64_t x1260 = 8637LLU;
	static int32_t t115 = -1;

    t115 = ((x1257!=x1258)>>(x1259&x1260));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint64_t x1269 = 63LLU;
	int64_t x1270 = INT64_MIN;
	int32_t x1271 = 0;
	uint8_t x1272 = 4U;
	volatile int32_t t116 = 776070;

    t116 = ((x1269!=x1270)>>(x1271&x1272));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x1277 = UINT8_MAX;
	int16_t x1278 = -1;
	static volatile int32_t x1279 = -1;
	int64_t x1280 = 0LL;

    t117 = ((x1277!=x1278)>>(x1279&x1280));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x1289 = -10;
	int8_t x1290 = -5;
	int16_t x1291 = 0;
	int8_t x1292 = -1;
	static volatile int32_t t118 = -683138;

    t118 = ((x1289!=x1290)>>(x1291&x1292));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x1293 = -1LL;
	uint32_t x1295 = 90773597U;
	static int32_t t119 = -1126514;

    t119 = ((x1293!=x1294)>>(x1295&x1296));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x1302 = 355731967;
	int64_t x1303 = 258LL;
	int8_t x1304 = 2;
	volatile int32_t t120 = -46;

    t120 = ((x1301!=x1302)>>(x1303&x1304));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x1309 = INT64_MIN;
	uint16_t x1310 = UINT16_MAX;
	static int8_t x1311 = INT8_MAX;
	int64_t x1312 = INT64_MIN;
	int32_t t121 = -58;

    t121 = ((x1309!=x1310)>>(x1311&x1312));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x1321 = -1;
	uint64_t x1322 = 55561042874LLU;
	uint16_t x1323 = 30U;
	volatile int32_t x1324 = INT32_MIN;
	volatile int32_t t122 = -1;

    t122 = ((x1321!=x1322)>>(x1323&x1324));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x1349 = INT16_MIN;
	int32_t x1350 = 1000;
	uint32_t x1352 = 590573U;

    t123 = ((x1349!=x1350)>>(x1351&x1352));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x1365 = INT8_MIN;
	volatile uint64_t x1366 = 70250398434397LLU;
	uint8_t x1367 = 12U;
	int32_t x1368 = INT32_MAX;
	volatile int32_t t124 = 86030;

    t124 = ((x1365!=x1366)>>(x1367&x1368));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x1370 = INT32_MIN;
	int8_t x1371 = -3;
	static uint8_t x1372 = 0U;
	volatile int32_t t125 = 57;

    t125 = ((x1369!=x1370)>>(x1371&x1372));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1373 = 4375;
	volatile int16_t x1374 = INT16_MIN;
	int16_t x1375 = -1139;
	int32_t t126 = 105230551;

    t126 = ((x1373!=x1374)>>(x1375&x1376));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint8_t x1377 = 1U;
	int64_t x1378 = 2051039338LL;
	int32_t x1379 = INT32_MIN;
	int32_t t127 = -3112165;

    t127 = ((x1377!=x1378)>>(x1379&x1380));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x1405 = 26585U;
	volatile int8_t x1406 = 1;
	int8_t x1407 = 1;
	int16_t x1408 = -1;
	int32_t t128 = 36;

    t128 = ((x1405!=x1406)>>(x1407&x1408));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1409 = INT8_MAX;
	uint8_t x1410 = 53U;
	int8_t x1411 = 1;
	int32_t x1412 = 11;

    t129 = ((x1409!=x1410)>>(x1411&x1412));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x1413 = 1;
	int32_t x1414 = INT32_MIN;
	uint64_t x1416 = 3LLU;
	volatile int32_t t130 = -1027399328;

    t130 = ((x1413!=x1414)>>(x1415&x1416));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x1422 = INT64_MAX;
	volatile int32_t x1423 = INT32_MIN;
	uint8_t x1424 = UINT8_MAX;
	int32_t t131 = 8003770;

    t131 = ((x1421!=x1422)>>(x1423&x1424));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x1429 = INT32_MAX;
	uint16_t x1430 = 1542U;
	int16_t x1431 = INT16_MAX;
	static volatile int32_t t132 = 188264;

    t132 = ((x1429!=x1430)>>(x1431&x1432));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x1433 = INT32_MAX;
	int8_t x1434 = INT8_MIN;
	static volatile int64_t x1436 = 92LL;
	int32_t t133 = 73271436;

    t133 = ((x1433!=x1434)>>(x1435&x1436));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x1443 = 1U;
	int64_t x1444 = INT64_MAX;
	int32_t t134 = -1;

    t134 = ((x1441!=x1442)>>(x1443&x1444));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int16_t x1445 = INT16_MIN;
	int16_t x1446 = 950;
	uint16_t x1447 = 1U;
	int16_t x1448 = -1;

    t135 = ((x1445!=x1446)>>(x1447&x1448));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1458 = 596LL;
	uint8_t x1459 = 9U;
	int32_t x1460 = INT32_MAX;
	volatile int32_t t136 = -51414;

    t136 = ((x1457!=x1458)>>(x1459&x1460));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1473 = INT32_MAX;
	uint16_t x1474 = UINT16_MAX;
	int16_t x1475 = -2386;
	int8_t x1476 = 20;

    t137 = ((x1473!=x1474)>>(x1475&x1476));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1477 = -3;
	int32_t x1478 = 16617;
	uint16_t x1479 = 6U;
	volatile int64_t x1480 = -1LL;
	int32_t t138 = 4939;

    t138 = ((x1477!=x1478)>>(x1479&x1480));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x1481 = 1121687931550407LLU;
	int32_t x1482 = -10991771;
	volatile uint32_t x1483 = 1065267641U;
	int32_t t139 = 1;

    t139 = ((x1481!=x1482)>>(x1483&x1484));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1485 = INT64_MIN;
	uint8_t x1486 = UINT8_MAX;
	uint64_t x1487 = UINT64_MAX;
	volatile int16_t x1488 = 1;
	int32_t t140 = 11324744;

    t140 = ((x1485!=x1486)>>(x1487&x1488));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x1497 = INT16_MIN;
	int16_t x1498 = -55;
	int64_t x1499 = INT64_MIN;
	int16_t x1500 = INT16_MAX;
	static int32_t t141 = 6354;

    t141 = ((x1497!=x1498)>>(x1499&x1500));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1501 = -27481531663LL;
	static volatile int32_t x1502 = -1;
	uint8_t x1503 = 14U;
	volatile int8_t x1504 = INT8_MIN;
	int32_t t142 = 193577409;

    t142 = ((x1501!=x1502)>>(x1503&x1504));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x1505 = INT8_MAX;
	static int8_t x1506 = INT8_MIN;
	static uint8_t x1508 = 27U;
	int32_t t143 = -119451;

    t143 = ((x1505!=x1506)>>(x1507&x1508));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x1517 = UINT64_MAX;
	static volatile int32_t x1518 = -1;
	volatile int32_t x1519 = 274781852;
	uint32_t x1520 = 10U;
	static volatile int32_t t144 = -15335686;

    t144 = ((x1517!=x1518)>>(x1519&x1520));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x1525 = INT64_MIN;
	int8_t x1526 = INT8_MIN;
	int64_t x1527 = INT64_MIN;
	volatile uint8_t x1528 = 91U;
	volatile int32_t t145 = -1189058;

    t145 = ((x1525!=x1526)>>(x1527&x1528));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x1533 = INT64_MIN;
	static int64_t x1534 = INT64_MIN;
	static uint32_t x1535 = UINT32_MAX;
	int8_t x1536 = 1;
	volatile int32_t t146 = -930014043;

    t146 = ((x1533!=x1534)>>(x1535&x1536));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1541 = 2638;
	int64_t x1542 = 4228629223337193LL;
	int16_t x1543 = 16;
	uint16_t x1544 = UINT16_MAX;

    t147 = ((x1541!=x1542)>>(x1543&x1544));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1549 = INT16_MIN;
	volatile int16_t x1550 = INT16_MIN;
	uint32_t x1551 = UINT32_MAX;
	uint8_t x1552 = 0U;
	volatile int32_t t148 = -483;

    t148 = ((x1549!=x1550)>>(x1551&x1552));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1554 = -1;
	volatile int64_t x1555 = INT64_MIN;
	static uint16_t x1556 = UINT16_MAX;
	volatile int32_t t149 = 1;

    t149 = ((x1553!=x1554)>>(x1555&x1556));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1557 = -1LL;
	static int64_t x1558 = INT64_MIN;
	volatile uint8_t x1560 = 3U;
	volatile int32_t t150 = 319163025;

    t150 = ((x1557!=x1558)>>(x1559&x1560));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x1569 = INT8_MAX;
	uint64_t x1570 = 14320LLU;
	int8_t x1571 = 0;
	volatile int32_t t151 = -529;

    t151 = ((x1569!=x1570)>>(x1571&x1572));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1573 = 51U;
	static int64_t x1575 = 9426976875LL;
	int8_t x1576 = 12;
	int32_t t152 = 497626230;

    t152 = ((x1573!=x1574)>>(x1575&x1576));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1625 = -3523214512219307LL;
	volatile int32_t x1626 = -651366617;
	static int32_t x1627 = INT32_MIN;
	volatile int32_t t153 = 240;

    t153 = ((x1625!=x1626)>>(x1627&x1628));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1641 = INT32_MAX;
	static int16_t x1642 = -1;
	static int32_t t154 = 744182018;

    t154 = ((x1641!=x1642)>>(x1643&x1644));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x1685 = 79524433U;
	int16_t x1686 = INT16_MIN;
	int8_t x1687 = 20;
	volatile uint16_t x1688 = UINT16_MAX;
	int32_t t155 = 23650;

    t155 = ((x1685!=x1686)>>(x1687&x1688));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1689 = -49;
	int64_t x1690 = -1LL;
	int8_t x1691 = 1;
	int64_t x1692 = 293226818853970830LL;
	static int32_t t156 = 115158437;

    t156 = ((x1689!=x1690)>>(x1691&x1692));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1697 = INT64_MIN;
	volatile int32_t x1698 = 451421;
	volatile int16_t x1699 = INT16_MIN;
	static int32_t t157 = -41919;

    t157 = ((x1697!=x1698)>>(x1699&x1700));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1701 = -1;
	static int32_t x1702 = -176575;
	static uint32_t x1704 = 182U;
	static volatile int32_t t158 = 8;

    t158 = ((x1701!=x1702)>>(x1703&x1704));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1705 = INT32_MIN;
	volatile int32_t x1706 = INT32_MAX;
	volatile int8_t x1707 = INT8_MAX;
	static int8_t x1708 = INT8_MIN;
	int32_t t159 = 0;

    t159 = ((x1705!=x1706)>>(x1707&x1708));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x1715 = 92;
	int32_t x1716 = 9217;
	volatile int32_t t160 = -2;

    t160 = ((x1713!=x1714)>>(x1715&x1716));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x1725 = INT64_MAX;
	static int8_t x1727 = INT8_MAX;
	static volatile int16_t x1728 = INT16_MIN;
	volatile int32_t t161 = -3;

    t161 = ((x1725!=x1726)>>(x1727&x1728));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1733 = 14U;
	int32_t t162 = 209;

    t162 = ((x1733!=x1734)>>(x1735&x1736));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1737 = -1LL;
	int64_t x1740 = 1764910LL;
	volatile int32_t t163 = 1;

    t163 = ((x1737!=x1738)>>(x1739&x1740));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x1741 = 474355838U;
	volatile uint16_t x1742 = 542U;
	static int8_t x1743 = -1;
	int16_t x1744 = 1;
	volatile int32_t t164 = -727764704;

    t164 = ((x1741!=x1742)>>(x1743&x1744));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint8_t x1766 = UINT8_MAX;
	int64_t x1767 = INT64_MIN;
	static uint16_t x1768 = 3U;
	int32_t t165 = -1728;

    t165 = ((x1765!=x1766)>>(x1767&x1768));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1769 = -410;
	int16_t x1771 = INT16_MAX;
	int64_t x1772 = INT64_MIN;
	volatile int32_t t166 = 1;

    t166 = ((x1769!=x1770)>>(x1771&x1772));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x1773 = 1229U;
	uint16_t x1774 = 25195U;
	uint8_t x1775 = 17U;

    t167 = ((x1773!=x1774)>>(x1775&x1776));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x1778 = 42U;
	static volatile int16_t x1780 = 2;
	volatile int32_t t168 = 19217279;

    t168 = ((x1777!=x1778)>>(x1779&x1780));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1781 = 109448292330004LLU;
	int64_t x1782 = 1LL;
	static int32_t x1783 = 1;
	uint8_t x1784 = 63U;
	volatile int32_t t169 = 4271;

    t169 = ((x1781!=x1782)>>(x1783&x1784));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x1801 = -1;
	static uint16_t x1802 = 29042U;
	volatile int32_t t170 = 2903;

    t170 = ((x1801!=x1802)>>(x1803&x1804));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x1809 = 6452921U;
	int8_t x1810 = INT8_MIN;
	int8_t x1811 = 0;
	uint16_t x1812 = 2U;
	volatile int32_t t171 = 116921674;

    t171 = ((x1809!=x1810)>>(x1811&x1812));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x1816 = -1;
	volatile int32_t t172 = 984599;

    t172 = ((x1813!=x1814)>>(x1815&x1816));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1821 = INT8_MIN;
	uint8_t x1822 = UINT8_MAX;
	int16_t x1824 = INT16_MIN;

    t173 = ((x1821!=x1822)>>(x1823&x1824));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1829 = 33U;
	volatile uint8_t x1830 = 15U;
	uint16_t x1831 = 23705U;
	int8_t x1832 = 1;
	int32_t t174 = 231421;

    t174 = ((x1829!=x1830)>>(x1831&x1832));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1841 = -29666;
	uint16_t x1842 = 21U;
	uint8_t x1844 = 0U;
	volatile int32_t t175 = -27725062;

    t175 = ((x1841!=x1842)>>(x1843&x1844));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x1854 = INT64_MAX;
	volatile uint16_t x1855 = UINT16_MAX;

    t176 = ((x1853!=x1854)>>(x1855&x1856));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x1857 = 3060U;
	int16_t x1858 = INT16_MIN;
	static uint32_t x1859 = 12467785U;
	int32_t x1860 = 30;
	int32_t t177 = 8185;

    t177 = ((x1857!=x1858)>>(x1859&x1860));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x1873 = 921508LL;
	volatile int8_t x1874 = INT8_MIN;
	uint8_t x1875 = 0U;
	uint32_t x1876 = UINT32_MAX;
	int32_t t178 = 7;

    t178 = ((x1873!=x1874)>>(x1875&x1876));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x1889 = -1;
	static uint64_t x1890 = 150LLU;
	int64_t x1891 = INT64_MIN;
	int32_t x1892 = 1;
	static volatile int32_t t179 = -16831867;

    t179 = ((x1889!=x1890)>>(x1891&x1892));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1906 = 18U;
	uint32_t x1907 = 59U;
	int64_t x1908 = 7LL;

    t180 = ((x1905!=x1906)>>(x1907&x1908));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1909 = 1;
	int16_t x1911 = 5;
	int8_t x1912 = INT8_MIN;
	volatile int32_t t181 = 2;

    t181 = ((x1909!=x1910)>>(x1911&x1912));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x1921 = INT16_MIN;
	int8_t x1924 = INT8_MAX;
	int32_t t182 = 1;

    t182 = ((x1921!=x1922)>>(x1923&x1924));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1925 = -3132233124LL;
	int32_t x1926 = -146;
	static volatile uint32_t x1927 = 0U;
	int64_t x1928 = 91634846519439LL;

    t183 = ((x1925!=x1926)>>(x1927&x1928));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1930 = UINT8_MAX;
	int16_t x1931 = 14003;
	int16_t x1932 = INT16_MIN;
	static volatile int32_t t184 = -35594529;

    t184 = ((x1929!=x1930)>>(x1931&x1932));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1953 = INT16_MIN;
	uint64_t x1954 = 661761275372075048LLU;
	int8_t x1956 = INT8_MIN;
	int32_t t185 = -106119;

    t185 = ((x1953!=x1954)>>(x1955&x1956));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1965 = 10;
	volatile int32_t x1966 = -1;
	int64_t x1968 = INT64_MIN;
	int32_t t186 = 433013;

    t186 = ((x1965!=x1966)>>(x1967&x1968));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1969 = -1;
	static int64_t x1971 = INT64_MIN;
	volatile int32_t t187 = 0;

    t187 = ((x1969!=x1970)>>(x1971&x1972));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1974 = -25;
	static volatile uint8_t x1975 = 0U;
	int16_t x1976 = -1;

    t188 = ((x1973!=x1974)>>(x1975&x1976));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x2013 = UINT32_MAX;
	volatile int32_t x2014 = 88;
	int32_t x2015 = INT32_MIN;
	static uint8_t x2016 = 0U;
	static volatile int32_t t189 = 65;

    t189 = ((x2013!=x2014)>>(x2015&x2016));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x2029 = 48343301;
	uint8_t x2031 = 9U;
	uint16_t x2032 = 2269U;
	volatile int32_t t190 = -13607730;

    t190 = ((x2029!=x2030)>>(x2031&x2032));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x2045 = 1;
	static int64_t x2046 = 5314LL;
	int32_t x2047 = INT32_MAX;
	volatile uint16_t x2048 = 1U;
	volatile int32_t t191 = -23251771;

    t191 = ((x2045!=x2046)>>(x2047&x2048));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x2049 = UINT16_MAX;
	static int32_t x2050 = INT32_MIN;
	uint8_t x2051 = 2U;
	int8_t x2052 = -1;

    t192 = ((x2049!=x2050)>>(x2051&x2052));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x2062 = 31933U;
	int32_t x2063 = INT32_MIN;
	volatile int16_t x2064 = 0;
	volatile int32_t t193 = 158197662;

    t193 = ((x2061!=x2062)>>(x2063&x2064));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x2069 = 0U;
	int8_t x2070 = INT8_MIN;
	int64_t x2071 = 31119074LL;

    t194 = ((x2069!=x2070)>>(x2071&x2072));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x2077 = -1;
	int32_t x2078 = 10;
	int16_t x2079 = INT16_MAX;
	volatile int32_t t195 = 173910;

    t195 = ((x2077!=x2078)>>(x2079&x2080));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x2081 = 4;
	int32_t x2082 = INT32_MIN;
	int32_t x2083 = -3271;

    t196 = ((x2081!=x2082)>>(x2083&x2084));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x2089 = UINT8_MAX;
	uint8_t x2090 = UINT8_MAX;
	uint32_t x2091 = 861015U;
	static int32_t t197 = -2;

    t197 = ((x2089!=x2090)>>(x2091&x2092));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x2093 = INT32_MIN;
	static int16_t x2094 = INT16_MIN;
	static volatile int16_t x2095 = 1564;
	int16_t x2096 = 21;
	int32_t t198 = -354;

    t198 = ((x2093!=x2094)>>(x2095&x2096));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x2115 = 7U;
	int64_t x2116 = INT64_MIN;
	int32_t t199 = -1104367;

    t199 = ((x2113!=x2114)>>(x2115&x2116));

    if (t199 != 1) { NG(); } else { ; }
	
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

