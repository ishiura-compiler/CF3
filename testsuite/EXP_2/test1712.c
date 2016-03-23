
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

static int8_t x12 = INT8_MAX;
uint64_t x22 = 4052386810075686803LLU;
static int8_t x23 = INT8_MIN;
uint16_t x30 = 1U;
volatile uint32_t x46 = UINT32_MAX;
volatile uint32_t t7 = 15805U;
uint8_t x65 = 2U;
volatile int32_t t9 = -16408;
int16_t x87 = -967;
uint32_t t11 = 389U;
int64_t x97 = INT64_MAX;
uint8_t x120 = 22U;
volatile int32_t t15 = -152039935;
volatile int32_t x126 = INT32_MIN;
uint32_t t16 = 0U;
int64_t t17 = 3LL;
int16_t x134 = -2;
int8_t x139 = INT8_MAX;
int16_t x141 = INT16_MAX;
static int16_t x144 = INT16_MIN;
int32_t t20 = 133;
volatile int32_t x152 = INT32_MIN;
uint16_t x171 = 4U;
int32_t t23 = -2994875;
int64_t x185 = 2241968LL;
uint64_t t28 = 4680637656934LLU;
static int64_t x213 = 6949711857368937LL;
static volatile int32_t t30 = -15261095;
int8_t x228 = -1;
uint32_t t31 = 7U;
volatile int8_t x237 = INT8_MAX;
int32_t t32 = -12666;
int16_t x243 = INT16_MIN;
int32_t x262 = INT32_MIN;
int32_t x269 = 19413116;
volatile uint32_t x272 = 9434013U;
static int8_t x274 = 21;
volatile int16_t x276 = INT16_MIN;
int8_t x281 = INT8_MAX;
volatile int32_t x282 = 890203;
volatile int32_t x283 = INT32_MAX;
int64_t x284 = INT64_MIN;
volatile uint32_t x285 = 7903756U;
volatile int8_t x289 = 26;
static volatile int32_t x291 = -1;
uint32_t t43 = 217U;
int64_t x314 = -14LL;
int64_t x321 = 0LL;
int64_t x332 = INT64_MIN;
volatile uint8_t x333 = UINT8_MAX;
int16_t x345 = 117;
volatile uint64_t x347 = 17208864727002484LLU;
uint8_t x349 = 6U;
static uint8_t x351 = 6U;
volatile uint16_t x354 = UINT16_MAX;
static uint16_t x367 = UINT16_MAX;
uint8_t x396 = 31U;
int16_t x402 = -1;
int32_t x431 = 3804;
uint32_t x432 = 3U;
uint64_t x437 = 204066543LLU;
static volatile int64_t x439 = -1LL;
int16_t x440 = -202;
volatile uint64_t t60 = 43653LLU;
volatile uint8_t x454 = 0U;
volatile uint16_t x457 = 3U;
volatile int8_t x461 = 43;
static uint8_t x464 = 1U;
int32_t t63 = 377208593;
int64_t x467 = INT64_MAX;
volatile int8_t x484 = -1;
int32_t t66 = -9588;
int32_t x499 = INT32_MIN;
static uint64_t t69 = 53LLU;
int8_t x530 = INT8_MIN;
uint64_t t72 = 2875765847LLU;
int32_t t74 = -49;
static volatile int32_t t78 = 506;
int64_t x619 = 2669282LL;
static volatile int8_t x622 = -1;
int64_t x624 = -1LL;
volatile uint8_t x629 = 20U;
volatile int8_t x642 = -1;
volatile int16_t x647 = INT16_MIN;
int16_t x680 = 5234;
static int16_t x681 = INT16_MAX;
int64_t x683 = INT64_MIN;
volatile int64_t x684 = INT64_MIN;
volatile uint32_t t88 = 3463541U;
int32_t x719 = 1;
static int16_t x726 = INT16_MIN;
int16_t x754 = INT16_MIN;
int16_t x756 = INT16_MIN;
static int32_t x759 = -37971239;
int32_t x760 = 784126;
volatile int64_t x766 = INT64_MAX;
uint16_t x767 = 3582U;
int32_t x795 = INT32_MIN;
static uint8_t x797 = 0U;
volatile uint8_t x798 = 3U;
static volatile uint32_t t99 = 0U;
int16_t x813 = 3;
int64_t x814 = INT64_MIN;
int32_t x819 = -1;
int32_t x825 = 38578;
volatile int16_t x827 = INT16_MIN;
int64_t t104 = -4LL;
volatile int32_t t105 = 13605534;
uint32_t x857 = UINT32_MAX;
static int8_t x858 = INT8_MIN;
int16_t x870 = -1;
int64_t x872 = -1LL;
uint16_t x875 = 26723U;
static uint64_t x887 = 2728627681961961LLU;
static volatile uint32_t t110 = 101681U;
uint8_t x891 = 1U;
static int8_t x907 = INT8_MAX;
volatile int32_t x928 = -18275901;
volatile int32_t t115 = -159054898;
int8_t x930 = INT8_MIN;
uint16_t x937 = 17U;
uint32_t x960 = 300908U;
uint32_t x961 = 12768443U;
int16_t x963 = -1;
int64_t x972 = -886162380LL;
static uint64_t x979 = 528271494623769LLU;
volatile uint32_t x981 = 2753117U;
static uint32_t t124 = 10U;
int8_t x1003 = INT8_MIN;
volatile uint8_t x1006 = UINT8_MAX;
int64_t t126 = -18977843LL;
volatile int8_t x1009 = INT8_MAX;
int32_t x1010 = INT32_MIN;
uint8_t x1011 = 67U;
int32_t t127 = -7;
uint64_t x1017 = UINT64_MAX;
uint8_t x1029 = 0U;
volatile int8_t x1031 = INT8_MAX;
volatile int64_t x1040 = INT64_MIN;
volatile uint32_t t132 = 36U;
int32_t x1049 = 815;
volatile int64_t x1051 = -102744835400659087LL;
int8_t x1052 = 2;
int64_t x1061 = 1779LL;
static volatile int32_t t136 = 2494;
int16_t x1074 = INT16_MIN;
static uint32_t x1076 = 365493220U;
volatile uint32_t t137 = 15794536U;
int32_t x1082 = -28;
uint16_t x1092 = 29903U;
static int16_t x1097 = 564;
uint32_t x1101 = 424241U;
int8_t x1110 = INT8_MAX;
volatile int32_t x1119 = -1;
volatile int64_t x1122 = -404202291505528155LL;
volatile int64_t t144 = -10742623LL;
static volatile uint64_t x1131 = 842928178LLU;
uint8_t x1138 = 1U;
int8_t x1143 = INT8_MIN;
int16_t x1162 = INT16_MAX;
volatile int32_t x1164 = INT32_MIN;
static int16_t x1176 = INT16_MIN;
int32_t t152 = 3151;
int16_t x1177 = INT16_MAX;
static int64_t x1179 = 4658890LL;
volatile int32_t t155 = -1174063;
static int64_t x1207 = -320LL;
int32_t x1231 = -41928;
uint8_t x1232 = UINT8_MAX;
uint8_t x1233 = 0U;
volatile int64_t t161 = 2806004492LL;
uint16_t x1245 = 23U;
int32_t t162 = -1109;
static int64_t x1253 = INT64_MAX;
int16_t x1255 = INT16_MIN;
volatile int32_t t164 = -11987;
volatile int64_t x1291 = -1LL;
int16_t x1292 = INT16_MIN;
int8_t x1296 = INT8_MIN;
static int64_t x1302 = INT64_MIN;
static uint8_t x1303 = 0U;
uint64_t x1305 = 12029096LLU;
uint64_t t169 = 1233995096LLU;
volatile int32_t t170 = 4894549;
uint16_t x1321 = UINT16_MAX;
volatile uint16_t x1324 = 6478U;
uint32_t x1344 = 1U;
volatile uint32_t t173 = 50112U;
volatile int16_t x1348 = INT16_MIN;
uint64_t x1384 = 26054186976960LLU;
int16_t x1387 = 4;
static int64_t t178 = 37454248775061916LL;
static uint32_t x1405 = UINT32_MAX;
int64_t t182 = -28193007221403834LL;
volatile uint32_t x1433 = UINT32_MAX;
volatile int16_t x1434 = -1;
uint32_t x1437 = UINT32_MAX;
static int32_t x1440 = -749327666;
static int32_t t188 = 4004;
int8_t x1454 = -5;
static uint8_t x1458 = UINT8_MAX;
static uint32_t x1462 = 873U;
uint64_t x1465 = 115345LLU;
static int16_t x1466 = INT16_MIN;
uint16_t x1481 = 24U;
int16_t x1482 = INT16_MAX;
uint16_t x1485 = UINT16_MAX;
uint64_t x1497 = 17930423981158272LLU;
int16_t x1499 = -491;
uint64_t t197 = 230009890LLU;
int32_t x1501 = 1583980;
static volatile int8_t x1502 = -1;
volatile uint64_t x1503 = 540881732523529890LLU;
static uint8_t x1517 = 16U;
volatile int32_t x1519 = 49;


void f0(void) {
    	int64_t x1 = 3086161605118941292LL;
	int16_t x2 = INT16_MIN;
	int64_t x3 = 73991859717599200LL;
	int32_t x4 = -1;
	volatile int64_t t0 = 235LL;

    t0 = ((x1>>(x2>x3))/x4);

    if (t0 != -3086161605118941292LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 10U;
	static int16_t x10 = INT16_MAX;
	int64_t x11 = 5126LL;
	volatile uint32_t t1 = 1605U;

    t1 = ((x9>>(x10>x11))/x12);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int16_t x21 = 3377;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t2 = 162010;

    t2 = ((x21>>(x22>x23))/x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x29 = 5;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = 57;
	int32_t t3 = 3806132;

    t3 = ((x29>>(x30>x31))/x32);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x41 = 41;
	static int8_t x42 = INT8_MAX;
	volatile int8_t x43 = 1;
	static int16_t x44 = INT16_MAX;
	static int32_t t4 = 8051133;

    t4 = ((x41>>(x42>x43))/x44);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x45 = UINT64_MAX;
	int16_t x47 = INT16_MIN;
	static volatile uint16_t x48 = UINT16_MAX;
	volatile uint64_t t5 = 347633LLU;

    t5 = ((x45>>(x46>x47))/x48);

    if (t5 != 140739635871744LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x53 = 5979008;
	uint32_t x54 = UINT32_MAX;
	int32_t x55 = 15;
	int32_t x56 = INT32_MAX;
	volatile int32_t t6 = 1;

    t6 = ((x53>>(x54>x55))/x56);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x61 = 240U;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = 3069U;
	uint32_t x64 = 95017U;

    t7 = ((x61>>(x62>x63))/x64);

    if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x66 = UINT16_MAX;
	static uint64_t x67 = 3619766011807LLU;
	static uint32_t x68 = 1232167U;
	volatile uint32_t t8 = 1605U;

    t8 = ((x65>>(x66>x67))/x68);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x77 = 904;
	int64_t x78 = 63436968696550LL;
	uint32_t x79 = 3U;
	int8_t x80 = INT8_MAX;

    t9 = ((x77>>(x78>x79))/x80);

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x85 = INT32_MAX;
	static uint16_t x86 = 4514U;
	int16_t x88 = 2;
	int32_t t10 = -7043660;

    t10 = ((x85>>(x86>x87))/x88);

    if (t10 != 536870911) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = UINT8_MAX;
	int32_t x92 = -314155747;

    t11 = ((x89>>(x90>x91))/x92);

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x98 = INT64_MIN;
	static int32_t x99 = INT32_MIN;
	uint16_t x100 = 2979U;
	volatile int64_t t12 = -1130690240021324843LL;

    t12 = ((x97>>(x98>x99))/x100);

    if (t12 != 3096130257420200LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x105 = 113;
	int8_t x106 = INT8_MIN;
	int8_t x107 = -55;
	int16_t x108 = -1;
	int32_t t13 = -52769;

    t13 = ((x105>>(x106>x107))/x108);

    if (t13 != -113) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x113 = 18;
	uint16_t x114 = 297U;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = 5;
	static volatile int32_t t14 = -1981151;

    t14 = ((x113>>(x114>x115))/x116);

    if (t14 != 3) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x117 = INT16_MAX;
	int64_t x118 = INT64_MIN;
	int32_t x119 = -1;

    t15 = ((x117>>(x118>x119))/x120);

    if (t15 != 1489) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x125 = UINT32_MAX;
	uint8_t x127 = 117U;
	int8_t x128 = -1;

    t16 = ((x125>>(x126>x127))/x128);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x129 = INT16_MAX;
	int32_t x130 = 714216;
	int16_t x131 = -1;
	volatile int64_t x132 = INT64_MIN;

    t17 = ((x129>>(x130>x131))/x132);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x133 = 229446;
	int32_t x135 = 158508240;
	int16_t x136 = -1;
	static int32_t t18 = 4068134;

    t18 = ((x133>>(x134>x135))/x136);

    if (t18 != -229446) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x137 = 739LLU;
	volatile uint8_t x138 = 12U;
	static int16_t x140 = 3;
	uint64_t t19 = 1552304177342LLU;

    t19 = ((x137>>(x138>x139))/x140);

    if (t19 != 246LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x142 = 60LL;
	volatile uint16_t x143 = 9U;

    t20 = ((x141>>(x142>x143))/x144);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x149 = UINT16_MAX;
	int16_t x150 = -1;
	int64_t x151 = 1054063500883LL;
	static volatile int32_t t21 = 2726;

    t21 = ((x149>>(x150>x151))/x152);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x165 = 0;
	uint64_t x166 = UINT64_MAX;
	int32_t x167 = 27;
	uint8_t x168 = UINT8_MAX;
	int32_t t22 = -1;

    t22 = ((x165>>(x166>x167))/x168);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x169 = 64823032;
	uint16_t x170 = UINT16_MAX;
	volatile int16_t x172 = 3;

    t23 = ((x169>>(x170>x171))/x172);

    if (t23 != 10803838) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x177 = UINT16_MAX;
	uint64_t x178 = 2164146110422928LLU;
	int8_t x179 = 1;
	volatile int64_t x180 = -4095036611987LL;
	int64_t t24 = 1375229902LL;

    t24 = ((x177>>(x178>x179))/x180);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x186 = -7;
	uint32_t x187 = 377U;
	static int16_t x188 = -1;
	int64_t t25 = 37081LL;

    t25 = ((x185>>(x186>x187))/x188);

    if (t25 != -1120984LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x193 = 7524307LLU;
	static int16_t x194 = -1;
	int64_t x195 = 422025132621560LL;
	int16_t x196 = 76;
	static uint64_t t26 = 1LLU;

    t26 = ((x193>>(x194>x195))/x196);

    if (t26 != 99004LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint32_t x201 = 1007400542U;
	static uint64_t x202 = UINT64_MAX;
	volatile uint8_t x203 = 43U;
	int64_t x204 = INT64_MIN;
	int64_t t27 = -20LL;

    t27 = ((x201>>(x202>x203))/x204);

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x205 = UINT32_MAX;
	static volatile uint64_t x206 = 1036591871959927748LLU;
	int16_t x207 = 228;
	static uint64_t x208 = UINT64_MAX;

    t28 = ((x205>>(x206>x207))/x208);

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x214 = -1;
	int8_t x215 = INT8_MIN;
	uint32_t x216 = 6351U;
	volatile int64_t t29 = -221706716LL;

    t29 = ((x213>>(x214>x215))/x216);

    if (t29 != 547135243061LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x217 = UINT16_MAX;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 163U;

    t30 = ((x217>>(x218>x219))/x220);

    if (t30 != 402) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x225 = 114218U;
	volatile int32_t x226 = INT32_MAX;
	int8_t x227 = INT8_MIN;

    t31 = ((x225>>(x226>x227))/x228);

    if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x238 = 30U;
	int16_t x239 = INT16_MAX;
	int32_t x240 = -1;

    t32 = ((x237>>(x238>x239))/x240);

    if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x241 = 1517U;
	int64_t x242 = -1LL;
	uint16_t x244 = 22U;
	static volatile uint32_t t33 = 12640367U;

    t33 = ((x241>>(x242>x243))/x244);

    if (t33 != 34U) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x245 = 0U;
	static int8_t x246 = -1;
	int64_t x247 = INT64_MAX;
	static int64_t x248 = -1LL;
	int64_t t34 = -1LL;

    t34 = ((x245>>(x246>x247))/x248);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x249 = 22815221U;
	int64_t x250 = INT64_MIN;
	volatile int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile uint32_t t35 = 11U;

    t35 = ((x249>>(x250>x251))/x252);

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x253 = 115U;
	volatile int8_t x254 = INT8_MIN;
	volatile int64_t x255 = 57948362074LL;
	int16_t x256 = INT16_MIN;
	volatile uint32_t t36 = 24U;

    t36 = ((x253>>(x254>x255))/x256);

    if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x261 = 1360471126548038326LL;
	int64_t x263 = INT64_MAX;
	int64_t x264 = 4326006192LL;
	int64_t t37 = 719798381589578098LL;

    t37 = ((x261>>(x262>x263))/x264);

    if (t37 != 314486634LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x270 = INT32_MIN;
	int32_t x271 = -1;
	volatile uint32_t t38 = 329821U;

    t38 = ((x269>>(x270>x271))/x272);

    if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x273 = 14U;
	uint32_t x275 = UINT32_MAX;
	volatile int32_t t39 = -146;

    t39 = ((x273>>(x274>x275))/x276);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t t40 = -1671883488190LL;

    t40 = ((x281>>(x282>x283))/x284);

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x286 = 22U;
	volatile uint16_t x287 = 333U;
	int16_t x288 = INT16_MIN;
	volatile uint32_t t41 = 1107899148U;

    t41 = ((x285>>(x286>x287))/x288);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x290 = 21;
	int16_t x292 = -11;
	int32_t t42 = -949192375;

    t42 = ((x289>>(x290>x291))/x292);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x305 = 97U;
	volatile int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -3;

    t43 = ((x305>>(x306>x307))/x308);

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x309 = 34;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MAX;
	int16_t x312 = INT16_MAX;
	static volatile int32_t t44 = 36721;

    t44 = ((x309>>(x310>x311))/x312);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x313 = 1470U;
	uint64_t x315 = 598279887750758LLU;
	static uint16_t x316 = 422U;
	volatile uint32_t t45 = 2765283U;

    t45 = ((x313>>(x314>x315))/x316);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x322 = 15718U;
	int64_t x323 = 225673102180LL;
	uint64_t x324 = 99538076055LLU;
	uint64_t t46 = 5032734022092LLU;

    t46 = ((x321>>(x322>x323))/x324);

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x325 = UINT32_MAX;
	static uint32_t x326 = 1476340343U;
	static int16_t x327 = -1;
	int8_t x328 = -1;
	uint32_t t47 = 1389U;

    t47 = ((x325>>(x326>x327))/x328);

    if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x329 = UINT64_MAX;
	static volatile int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MIN;
	static volatile uint64_t t48 = 66300771LLU;

    t48 = ((x329>>(x330>x331))/x332);

    if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x334 = 3350216LL;
	int8_t x335 = -9;
	int8_t x336 = INT8_MIN;
	int32_t t49 = 113095;

    t49 = ((x333>>(x334>x335))/x336);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x346 = UINT16_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t50 = 88;

    t50 = ((x345>>(x346>x347))/x348);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x350 = INT16_MAX;
	int32_t x352 = INT32_MAX;
	static int32_t t51 = 112149887;

    t51 = ((x349>>(x350>x351))/x352);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x353 = 0U;
	volatile uint8_t x355 = 14U;
	static volatile int64_t x356 = INT64_MIN;
	volatile int64_t t52 = -1225541330LL;

    t52 = ((x353>>(x354>x355))/x356);

    if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x365 = 11;
	int64_t x366 = -1LL;
	int32_t x368 = INT32_MIN;
	volatile int32_t t53 = -1;

    t53 = ((x365>>(x366>x367))/x368);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x373 = INT8_MAX;
	static int32_t x374 = INT32_MIN;
	volatile uint32_t x375 = 6336U;
	static int8_t x376 = -1;
	int32_t t54 = 77872;

    t54 = ((x373>>(x374>x375))/x376);

    if (t54 != -63) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x377 = INT32_MAX;
	volatile int8_t x378 = INT8_MIN;
	int32_t x379 = 830;
	int32_t x380 = INT32_MIN;
	volatile int32_t t55 = 1401455;

    t55 = ((x377>>(x378>x379))/x380);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x393 = 0LL;
	volatile int32_t x394 = INT32_MAX;
	static volatile uint32_t x395 = UINT32_MAX;
	volatile int64_t t56 = 1LL;

    t56 = ((x393>>(x394>x395))/x396);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x401 = UINT16_MAX;
	volatile int64_t x403 = INT64_MIN;
	int64_t x404 = 1462453953124LL;
	volatile int64_t t57 = 643LL;

    t57 = ((x401>>(x402>x403))/x404);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x417 = INT8_MAX;
	int64_t x418 = INT64_MIN;
	uint16_t x419 = UINT16_MAX;
	int32_t x420 = INT32_MIN;
	int32_t t58 = -2697330;

    t58 = ((x417>>(x418>x419))/x420);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x429 = 7851159037LLU;
	volatile int8_t x430 = -1;
	volatile uint64_t t59 = 97855037083LLU;

    t59 = ((x429>>(x430>x431))/x432);

    if (t59 != 2617053012LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x438 = -354;

    t60 = ((x437>>(x438>x439))/x440);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x453 = 1;
	volatile int8_t x455 = INT8_MIN;
	int64_t x456 = INT64_MIN;
	volatile int64_t t61 = -163547322217LL;

    t61 = ((x453>>(x454>x455))/x456);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x458 = -2;
	int8_t x459 = 1;
	uint16_t x460 = UINT16_MAX;
	int32_t t62 = -6495018;

    t62 = ((x457>>(x458>x459))/x460);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x462 = INT16_MIN;
	uint64_t x463 = 3929982012127131591LLU;

    t63 = ((x461>>(x462>x463))/x464);

    if (t63 != 21) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x465 = 29U;
	int16_t x466 = INT16_MIN;
	static volatile uint16_t x468 = 352U;
	int32_t t64 = 963;

    t64 = ((x465>>(x466>x467))/x468);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x469 = 2U;
	volatile int16_t x470 = 48;
	int32_t x471 = -1;
	static uint8_t x472 = UINT8_MAX;
	volatile int32_t t65 = -25;

    t65 = ((x469>>(x470>x471))/x472);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x481 = INT32_MAX;
	static uint32_t x482 = 3598553U;
	int16_t x483 = -12;

    t66 = ((x481>>(x482>x483))/x484);

    if (t66 != -2147483647) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x485 = UINT16_MAX;
	uint64_t x486 = UINT64_MAX;
	uint8_t x487 = 56U;
	int64_t x488 = -1LL;
	volatile int64_t t67 = -1009867590273LL;

    t67 = ((x485>>(x486>x487))/x488);

    if (t67 != -32767LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x489 = UINT32_MAX;
	uint16_t x490 = UINT16_MAX;
	volatile uint8_t x491 = 7U;
	volatile int64_t x492 = -13364258802035571LL;
	int64_t t68 = -4013492188495613799LL;

    t68 = ((x489>>(x490>x491))/x492);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x497 = 26638415659642LLU;
	volatile int16_t x498 = -1;
	int32_t x500 = 1;

    t69 = ((x497>>(x498>x499))/x500);

    if (t69 != 13319207829821LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x521 = 381U;
	static uint64_t x522 = 1644460196330LLU;
	static uint8_t x523 = 1U;
	int64_t x524 = 2023541717LL;
	volatile int64_t t70 = 501298239368196LL;

    t70 = ((x521>>(x522>x523))/x524);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x529 = UINT32_MAX;
	static volatile int32_t x531 = INT32_MAX;
	int8_t x532 = INT8_MIN;
	static uint32_t t71 = 1810U;

    t71 = ((x529>>(x530>x531))/x532);

    if (t71 != 1U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x545 = 26101326LLU;
	int32_t x546 = INT32_MIN;
	uint32_t x547 = 466593U;
	int16_t x548 = INT16_MAX;

    t72 = ((x545>>(x546>x547))/x548);

    if (t72 != 398LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x549 = 7518;
	uint8_t x550 = 0U;
	uint16_t x551 = UINT16_MAX;
	int64_t x552 = INT64_MIN;
	volatile int64_t t73 = -75050777430593LL;

    t73 = ((x549>>(x550>x551))/x552);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x565 = INT8_MAX;
	int32_t x566 = INT32_MIN;
	int64_t x567 = INT64_MIN;
	volatile int8_t x568 = -32;

    t74 = ((x565>>(x566>x567))/x568);

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x569 = 131LL;
	int8_t x570 = INT8_MIN;
	uint16_t x571 = UINT16_MAX;
	static volatile int8_t x572 = INT8_MAX;
	static volatile int64_t t75 = -116681LL;

    t75 = ((x569>>(x570>x571))/x572);

    if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x573 = 27760125358687005LLU;
	int8_t x574 = INT8_MAX;
	volatile int8_t x575 = 22;
	static uint16_t x576 = 93U;
	uint64_t t76 = 185069914103550340LLU;

    t76 = ((x573>>(x574>x575))/x576);

    if (t76 != 149247985799392LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x589 = 37U;
	int32_t x590 = -19;
	int16_t x591 = INT16_MIN;
	volatile int16_t x592 = 10;
	int32_t t77 = -88;

    t77 = ((x589>>(x590>x591))/x592);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x593 = 0U;
	volatile uint8_t x594 = UINT8_MAX;
	int64_t x595 = -1LL;
	static uint8_t x596 = 3U;

    t78 = ((x593>>(x594>x595))/x596);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x617 = 5;
	uint32_t x618 = UINT32_MAX;
	int64_t x620 = -403494LL;
	int64_t t79 = -8367686720336LL;

    t79 = ((x617>>(x618>x619))/x620);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x621 = 0U;
	uint64_t x623 = 2819403435579101148LLU;
	int64_t t80 = -853677343346964976LL;

    t80 = ((x621>>(x622>x623))/x624);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x630 = 3U;
	volatile int32_t x631 = INT32_MIN;
	static int32_t x632 = -1;
	volatile int32_t t81 = 116;

    t81 = ((x629>>(x630>x631))/x632);

    if (t81 != -10) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x641 = 41U;
	volatile int16_t x643 = -1;
	int32_t x644 = INT32_MIN;
	int32_t t82 = -17;

    t82 = ((x641>>(x642>x643))/x644);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x645 = 2;
	int8_t x646 = INT8_MIN;
	int8_t x648 = -1;
	int32_t t83 = 2188;

    t83 = ((x645>>(x646>x647))/x648);

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x657 = 2;
	volatile int32_t x658 = INT32_MIN;
	volatile int16_t x659 = -1;
	int32_t x660 = -1;
	int32_t t84 = 248871987;

    t84 = ((x657>>(x658>x659))/x660);

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x677 = 22LLU;
	uint16_t x678 = 204U;
	uint32_t x679 = 44118672U;
	uint64_t t85 = 4386LLU;

    t85 = ((x677>>(x678>x679))/x680);

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x682 = 1022976397U;
	static volatile int64_t t86 = -2919531326690310484LL;

    t86 = ((x681>>(x682>x683))/x684);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x697 = 2558U;
	static uint16_t x698 = 1U;
	volatile int16_t x699 = -1;
	int16_t x700 = INT16_MIN;
	volatile int32_t t87 = -14;

    t87 = ((x697>>(x698>x699))/x700);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint32_t x701 = UINT32_MAX;
	uint64_t x702 = UINT64_MAX;
	int64_t x703 = INT64_MIN;
	volatile uint32_t x704 = 316323U;

    t88 = ((x701>>(x702>x703))/x704);

    if (t88 != 6788U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x713 = INT8_MAX;
	uint16_t x714 = 2U;
	int16_t x715 = INT16_MAX;
	int64_t x716 = INT64_MAX;
	volatile int64_t t89 = -801122064026LL;

    t89 = ((x713>>(x714>x715))/x716);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x717 = UINT16_MAX;
	int32_t x718 = -252277;
	int16_t x720 = INT16_MAX;
	volatile int32_t t90 = 106921515;

    t90 = ((x717>>(x718>x719))/x720);

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x725 = 8751928261LLU;
	static int32_t x727 = INT32_MIN;
	int16_t x728 = INT16_MAX;
	uint64_t t91 = 531298898LLU;

    t91 = ((x725>>(x726>x727))/x728);

    if (t91 != 133547LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x753 = 3984677U;
	uint16_t x755 = 617U;
	uint32_t t92 = 266U;

    t92 = ((x753>>(x754>x755))/x756);

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x757 = 3290U;
	volatile int8_t x758 = INT8_MIN;
	static volatile int32_t t93 = 746802;

    t93 = ((x757>>(x758>x759))/x760);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x765 = UINT8_MAX;
	int64_t x768 = INT64_MAX;
	volatile int64_t t94 = -20295093935294LL;

    t94 = ((x765>>(x766>x767))/x768);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x777 = 6562375493LLU;
	int8_t x778 = INT8_MIN;
	volatile uint64_t x779 = 908473928471451310LLU;
	uint32_t x780 = 449849897U;
	static volatile uint64_t t95 = 38279675211657202LLU;

    t95 = ((x777>>(x778>x779))/x780);

    if (t95 != 7LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x785 = 106U;
	volatile uint16_t x786 = UINT16_MAX;
	static volatile int64_t x787 = 81781159LL;
	uint8_t x788 = UINT8_MAX;
	int32_t t96 = -72065502;

    t96 = ((x785>>(x786>x787))/x788);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x793 = 6199U;
	uint32_t x794 = UINT32_MAX;
	static uint8_t x796 = UINT8_MAX;
	int32_t t97 = -573;

    t97 = ((x793>>(x794>x795))/x796);

    if (t97 != 12) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x799 = -82LL;
	int32_t x800 = INT32_MIN;
	int32_t t98 = 1161;

    t98 = ((x797>>(x798>x799))/x800);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x805 = INT16_MAX;
	int32_t x806 = -1;
	int64_t x807 = -1LL;
	uint32_t x808 = 2865U;

    t99 = ((x805>>(x806>x807))/x808);

    if (t99 != 11U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x815 = 44527422026770LLU;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t100 = 3647;

    t100 = ((x813>>(x814>x815))/x816);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x817 = 1;
	int64_t x818 = INT64_MIN;
	int32_t x820 = -1;
	volatile int32_t t101 = 104;

    t101 = ((x817>>(x818>x819))/x820);

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x826 = -1LL;
	static uint8_t x828 = 9U;
	volatile int32_t t102 = -58841101;

    t102 = ((x825>>(x826>x827))/x828);

    if (t102 != 2143) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x841 = 1;
	int32_t x842 = INT32_MIN;
	volatile uint64_t x843 = UINT64_MAX;
	int16_t x844 = INT16_MIN;
	static int32_t t103 = 0;

    t103 = ((x841>>(x842>x843))/x844);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x845 = 574U;
	volatile int16_t x846 = -2490;
	uint8_t x847 = 4U;
	int64_t x848 = INT64_MIN;

    t104 = ((x845>>(x846>x847))/x848);

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x849 = 6;
	static uint8_t x850 = UINT8_MAX;
	volatile uint16_t x851 = 1113U;
	static int32_t x852 = -3059;

    t105 = ((x849>>(x850>x851))/x852);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x859 = -1;
	int8_t x860 = 55;
	volatile uint32_t t106 = 338742963U;

    t106 = ((x857>>(x858>x859))/x860);

    if (t106 != 78090314U) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x861 = 450;
	int8_t x862 = INT8_MIN;
	static int8_t x863 = -1;
	static int64_t x864 = 2LL;
	int64_t t107 = 2056171415899292LL;

    t107 = ((x861>>(x862>x863))/x864);

    if (t107 != 225LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint32_t x869 = 1760965922U;
	static volatile uint16_t x871 = UINT16_MAX;
	int64_t t108 = -59092927166438LL;

    t108 = ((x869>>(x870>x871))/x872);

    if (t108 != -1760965922LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x873 = 69826216626417738LLU;
	volatile int64_t x874 = 193117359294LL;
	volatile uint64_t x876 = 10436619695LLU;
	volatile uint64_t t109 = 548360088467137LLU;

    t109 = ((x873>>(x874>x875))/x876);

    if (t109 != 3345250LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x885 = UINT32_MAX;
	int16_t x886 = INT16_MIN;
	volatile int8_t x888 = INT8_MAX;

    t110 = ((x885>>(x886>x887))/x888);

    if (t110 != 16909320U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x889 = 1U;
	int32_t x890 = 10;
	volatile int8_t x892 = INT8_MAX;
	volatile int32_t t111 = -1000098;

    t111 = ((x889>>(x890>x891))/x892);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x901 = 485799452447LLU;
	int8_t x902 = INT8_MAX;
	int64_t x903 = INT64_MIN;
	int64_t x904 = -169826891696063754LL;
	uint64_t t112 = 175LLU;

    t112 = ((x901>>(x902>x903))/x904);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x905 = 726;
	volatile int8_t x906 = INT8_MIN;
	int64_t x908 = -2180204042LL;
	static volatile int64_t t113 = -11863074937521562LL;

    t113 = ((x905>>(x906>x907))/x908);

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x921 = UINT64_MAX;
	volatile int8_t x922 = 1;
	int16_t x923 = INT16_MIN;
	int32_t x924 = 819568729;
	volatile uint64_t t114 = 10136LLU;

    t114 = ((x921>>(x922>x923))/x924);

    if (t114 != 11253933575LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x925 = 0U;
	static volatile uint8_t x926 = 125U;
	volatile uint64_t x927 = UINT64_MAX;

    t115 = ((x925>>(x926>x927))/x928);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x929 = 30303U;
	int8_t x931 = -1;
	int64_t x932 = -1LL;
	int64_t t116 = -475275LL;

    t116 = ((x929>>(x930>x931))/x932);

    if (t116 != -30303LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x938 = 5665159LLU;
	int64_t x939 = 886700199480601LL;
	static uint8_t x940 = UINT8_MAX;
	int32_t t117 = 147405;

    t117 = ((x937>>(x938>x939))/x940);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x957 = UINT64_MAX;
	int32_t x958 = INT32_MIN;
	volatile uint8_t x959 = UINT8_MAX;
	uint64_t t118 = 53134362LLU;

    t118 = ((x957>>(x958>x959))/x960);

    if (t118 != 61303601345625LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x962 = INT16_MAX;
	int8_t x964 = -1;
	static volatile uint32_t t119 = 282534184U;

    t119 = ((x961>>(x962>x963))/x964);

    if (t119 != 0U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x965 = 12U;
	int64_t x966 = 2092368959667LL;
	static volatile int64_t x967 = -1LL;
	volatile uint16_t x968 = 112U;
	volatile int32_t t120 = -26703665;

    t120 = ((x965>>(x966>x967))/x968);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x969 = 17U;
	int64_t x970 = -16115886038469LL;
	int8_t x971 = INT8_MIN;
	volatile int64_t t121 = -70126227050371LL;

    t121 = ((x969>>(x970>x971))/x972);

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x977 = 1859LL;
	uint16_t x978 = 64U;
	int64_t x980 = -5712723225182LL;
	static int64_t t122 = 35LL;

    t122 = ((x977>>(x978>x979))/x980);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x982 = -41;
	static uint32_t x983 = 426413974U;
	volatile int32_t x984 = 5623402;
	volatile uint32_t t123 = 507868351U;

    t123 = ((x981>>(x982>x983))/x984);

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x993 = 83U;
	int16_t x994 = -1;
	volatile int8_t x995 = 52;
	int8_t x996 = -1;

    t124 = ((x993>>(x994>x995))/x996);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint64_t x1001 = 0LLU;
	uint8_t x1002 = 2U;
	static volatile int64_t x1004 = INT64_MAX;
	uint64_t t125 = 95944LLU;

    t125 = ((x1001>>(x1002>x1003))/x1004);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1005 = INT64_MAX;
	int64_t x1007 = -1LL;
	volatile int8_t x1008 = INT8_MIN;

    t126 = ((x1005>>(x1006>x1007))/x1008);

    if (t126 != -36028797018963967LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1012 = 234U;

    t127 = ((x1009>>(x1010>x1011))/x1012);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x1013 = 1875094586U;
	static int8_t x1014 = INT8_MIN;
	int16_t x1015 = -1;
	uint16_t x1016 = 4U;
	volatile uint32_t t128 = 412U;

    t128 = ((x1013>>(x1014>x1015))/x1016);

    if (t128 != 468773646U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x1018 = 2179;
	volatile int16_t x1019 = INT16_MIN;
	uint8_t x1020 = UINT8_MAX;
	volatile uint64_t t129 = 2367143293330497LLU;

    t129 = ((x1017>>(x1018>x1019))/x1020);

    if (t129 != 36170086419038336LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int16_t x1030 = -1;
	uint64_t x1032 = 4186524165706895961LLU;
	uint64_t t130 = 134234201781751LLU;

    t130 = ((x1029>>(x1030>x1031))/x1032);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1037 = 1U;
	int8_t x1038 = INT8_MIN;
	static uint8_t x1039 = 1U;
	volatile int64_t t131 = 30LL;

    t131 = ((x1037>>(x1038>x1039))/x1040);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x1041 = 1182690920U;
	volatile uint16_t x1042 = UINT16_MAX;
	uint8_t x1043 = UINT8_MAX;
	volatile int16_t x1044 = INT16_MIN;

    t132 = ((x1041>>(x1042>x1043))/x1044);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1050 = -1;
	volatile int32_t t133 = -3022;

    t133 = ((x1049>>(x1050>x1051))/x1052);

    if (t133 != 203) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x1053 = UINT16_MAX;
	uint32_t x1054 = 153U;
	uint8_t x1055 = UINT8_MAX;
	uint64_t x1056 = 51933704264LLU;
	volatile uint64_t t134 = 43396765550192LLU;

    t134 = ((x1053>>(x1054>x1055))/x1056);

    if (t134 != 0LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x1062 = INT16_MAX;
	static volatile uint16_t x1063 = 1425U;
	uint8_t x1064 = UINT8_MAX;
	volatile int64_t t135 = -2LL;

    t135 = ((x1061>>(x1062>x1063))/x1064);

    if (t135 != 3LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x1069 = 3;
	volatile int64_t x1070 = -27283LL;
	static int32_t x1071 = -1;
	int16_t x1072 = -1;

    t136 = ((x1069>>(x1070>x1071))/x1072);

    if (t136 != -3) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1073 = 24;
	uint64_t x1075 = 58901822050037LLU;

    t137 = ((x1073>>(x1074>x1075))/x1076);

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x1081 = 1;
	int16_t x1083 = -1174;
	int8_t x1084 = -1;
	int32_t t138 = -29707747;

    t138 = ((x1081>>(x1082>x1083))/x1084);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x1089 = 657482U;
	volatile int8_t x1090 = INT8_MAX;
	int32_t x1091 = 1;
	volatile uint32_t t139 = 2539819U;

    t139 = ((x1089>>(x1090>x1091))/x1092);

    if (t139 != 10U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x1098 = 57U;
	int8_t x1099 = -50;
	int64_t x1100 = -1005573839138700679LL;
	static volatile int64_t t140 = -22LL;

    t140 = ((x1097>>(x1098>x1099))/x1100);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x1102 = INT8_MIN;
	volatile int8_t x1103 = INT8_MAX;
	volatile int8_t x1104 = -1;
	static volatile uint32_t t141 = 2U;

    t141 = ((x1101>>(x1102>x1103))/x1104);

    if (t141 != 0U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1109 = INT32_MAX;
	int16_t x1111 = -1;
	volatile int8_t x1112 = INT8_MIN;
	static int32_t t142 = -81921;

    t142 = ((x1109>>(x1110>x1111))/x1112);

    if (t142 != -8388607) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint8_t x1117 = UINT8_MAX;
	int16_t x1118 = INT16_MAX;
	volatile int64_t x1120 = 107423157LL;
	int64_t t143 = -94087649LL;

    t143 = ((x1117>>(x1118>x1119))/x1120);

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x1121 = 2U;
	static int16_t x1123 = -1;
	int64_t x1124 = 2814528334572466LL;

    t144 = ((x1121>>(x1122>x1123))/x1124);

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1129 = 11087390U;
	int64_t x1130 = INT64_MIN;
	int8_t x1132 = -1;
	uint32_t t145 = 34U;

    t145 = ((x1129>>(x1130>x1131))/x1132);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint32_t x1133 = 24483U;
	static int64_t x1134 = INT64_MIN;
	static uint16_t x1135 = 60U;
	int16_t x1136 = 17;
	static uint32_t t146 = 1656U;

    t146 = ((x1133>>(x1134>x1135))/x1136);

    if (t146 != 1440U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x1137 = 200U;
	int16_t x1139 = INT16_MAX;
	int16_t x1140 = INT16_MAX;
	uint32_t t147 = 99U;

    t147 = ((x1137>>(x1138>x1139))/x1140);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x1141 = UINT64_MAX;
	uint8_t x1142 = UINT8_MAX;
	int64_t x1144 = -1LL;
	uint64_t t148 = 8664317LLU;

    t148 = ((x1141>>(x1142>x1143))/x1144);

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1145 = 1;
	volatile int8_t x1146 = -1;
	int16_t x1147 = -1;
	static volatile uint8_t x1148 = 41U;
	int32_t t149 = -2764;

    t149 = ((x1145>>(x1146>x1147))/x1148);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x1153 = 1;
	int32_t x1154 = 1400;
	int64_t x1155 = -14156LL;
	volatile int32_t x1156 = INT32_MIN;
	volatile int32_t t150 = 26597;

    t150 = ((x1153>>(x1154>x1155))/x1156);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1161 = INT32_MAX;
	uint64_t x1163 = 3654852693974190LLU;
	int32_t t151 = 282910;

    t151 = ((x1161>>(x1162>x1163))/x1164);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1173 = INT16_MAX;
	volatile int64_t x1174 = 24087390077689052LL;
	int16_t x1175 = INT16_MIN;

    t152 = ((x1173>>(x1174>x1175))/x1176);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x1178 = INT64_MIN;
	int32_t x1180 = 67055;
	volatile int32_t t153 = -6;

    t153 = ((x1177>>(x1178>x1179))/x1180);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x1185 = 0U;
	int16_t x1186 = INT16_MAX;
	uint32_t x1187 = 1438U;
	volatile uint64_t x1188 = 3923922444101484538LLU;
	volatile uint64_t t154 = 272672747023LLU;

    t154 = ((x1185>>(x1186>x1187))/x1188);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x1201 = 1;
	int64_t x1202 = INT64_MIN;
	int32_t x1203 = INT32_MIN;
	int16_t x1204 = INT16_MIN;

    t155 = ((x1201>>(x1202>x1203))/x1204);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x1205 = INT32_MAX;
	uint16_t x1206 = 61U;
	volatile uint64_t x1208 = UINT64_MAX;
	volatile uint64_t t156 = 3LLU;

    t156 = ((x1205>>(x1206>x1207))/x1208);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x1209 = 3;
	int8_t x1210 = INT8_MIN;
	uint16_t x1211 = 3524U;
	volatile int32_t x1212 = -1;
	int32_t t157 = 2962013;

    t157 = ((x1209>>(x1210>x1211))/x1212);

    if (t157 != -3) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1221 = 0;
	static uint32_t x1222 = 77U;
	volatile int8_t x1223 = 7;
	int32_t x1224 = -252291267;
	volatile int32_t t158 = 107322456;

    t158 = ((x1221>>(x1222>x1223))/x1224);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1229 = 2U;
	volatile int16_t x1230 = -9;
	volatile int32_t t159 = -103087;

    t159 = ((x1229>>(x1230>x1231))/x1232);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1234 = INT64_MIN;
	uint32_t x1235 = 137886U;
	int8_t x1236 = 42;
	volatile int32_t t160 = 272478;

    t160 = ((x1233>>(x1234>x1235))/x1236);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x1237 = 1U;
	volatile int32_t x1238 = INT32_MIN;
	int64_t x1239 = -7051784058061LL;
	int64_t x1240 = -3LL;

    t161 = ((x1237>>(x1238>x1239))/x1240);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x1246 = UINT16_MAX;
	static int32_t x1247 = INT32_MIN;
	volatile int8_t x1248 = INT8_MIN;

    t162 = ((x1245>>(x1246>x1247))/x1248);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1254 = INT32_MIN;
	uint16_t x1256 = UINT16_MAX;
	volatile int64_t t163 = 300529076LL;

    t163 = ((x1253>>(x1254>x1255))/x1256);

    if (t163 != 140739635871744LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x1269 = 52614873;
	int8_t x1270 = 0;
	volatile int16_t x1271 = 100;
	int8_t x1272 = INT8_MIN;

    t164 = ((x1269>>(x1270>x1271))/x1272);

    if (t164 != -411053) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint16_t x1281 = UINT16_MAX;
	static volatile int64_t x1282 = -1LL;
	static volatile uint32_t x1283 = 3549U;
	int64_t x1284 = INT64_MIN;
	int64_t t165 = -50523842LL;

    t165 = ((x1281>>(x1282>x1283))/x1284);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x1289 = 86108427019LLU;
	uint32_t x1290 = UINT32_MAX;
	static volatile uint64_t t166 = 265909459LLU;

    t166 = ((x1289>>(x1290>x1291))/x1292);

    if (t166 != 0LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1293 = UINT8_MAX;
	volatile int32_t x1294 = INT32_MIN;
	int16_t x1295 = INT16_MIN;
	int32_t t167 = -63818515;

    t167 = ((x1293>>(x1294>x1295))/x1296);

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1301 = INT32_MAX;
	static int8_t x1304 = INT8_MIN;
	int32_t t168 = 300036;

    t168 = ((x1301>>(x1302>x1303))/x1304);

    if (t168 != -16777215) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x1306 = UINT16_MAX;
	int8_t x1307 = INT8_MAX;
	int8_t x1308 = INT8_MIN;

    t169 = ((x1305>>(x1306>x1307))/x1308);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x1309 = 7389U;
	uint16_t x1310 = 13514U;
	int64_t x1311 = INT64_MAX;
	int8_t x1312 = -1;

    t170 = ((x1309>>(x1310>x1311))/x1312);

    if (t170 != -7389) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1322 = INT32_MAX;
	uint16_t x1323 = 271U;
	int32_t t171 = 450338;

    t171 = ((x1321>>(x1322>x1323))/x1324);

    if (t171 != 5) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x1325 = INT8_MAX;
	int64_t x1326 = INT64_MIN;
	int64_t x1327 = INT64_MIN;
	static int64_t x1328 = INT64_MIN;
	volatile int64_t t172 = -687588627252991728LL;

    t172 = ((x1325>>(x1326>x1327))/x1328);

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x1341 = 1;
	static int8_t x1342 = INT8_MIN;
	volatile int8_t x1343 = -60;

    t173 = ((x1341>>(x1342>x1343))/x1344);

    if (t173 != 1U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1345 = 547385996623116821LLU;
	volatile int8_t x1346 = INT8_MIN;
	static volatile int32_t x1347 = -38;
	volatile uint64_t t174 = 0LLU;

    t174 = ((x1345>>(x1346>x1347))/x1348);

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x1357 = 4949U;
	int16_t x1358 = INT16_MIN;
	int64_t x1359 = INT64_MIN;
	static volatile uint16_t x1360 = 23U;
	volatile int32_t t175 = -21465;

    t175 = ((x1357>>(x1358>x1359))/x1360);

    if (t175 != 107) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x1377 = 357274U;
	int64_t x1378 = -1814459LL;
	int8_t x1379 = INT8_MAX;
	int16_t x1380 = INT16_MIN;
	volatile uint32_t t176 = 1781U;

    t176 = ((x1377>>(x1378>x1379))/x1380);

    if (t176 != 0U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1381 = 66173;
	int8_t x1382 = INT8_MIN;
	int32_t x1383 = INT32_MIN;
	uint64_t t177 = 7LLU;

    t177 = ((x1381>>(x1382>x1383))/x1384);

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1385 = 9LL;
	static int64_t x1386 = -7731309566330LL;
	int32_t x1388 = INT32_MIN;

    t178 = ((x1385>>(x1386>x1387))/x1388);

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1393 = UINT32_MAX;
	uint16_t x1394 = 91U;
	uint16_t x1395 = 24347U;
	int8_t x1396 = INT8_MIN;
	uint32_t t179 = 108443601U;

    t179 = ((x1393>>(x1394>x1395))/x1396);

    if (t179 != 1U) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1397 = INT64_MAX;
	static uint64_t x1398 = 116216825563280LLU;
	uint8_t x1399 = 0U;
	int64_t x1400 = INT64_MIN;
	static volatile int64_t t180 = -80086LL;

    t180 = ((x1397>>(x1398>x1399))/x1400);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x1401 = 228LL;
	static uint16_t x1402 = 2U;
	int16_t x1403 = 0;
	static volatile int16_t x1404 = INT16_MAX;
	static volatile int64_t t181 = -19203669888335LL;

    t181 = ((x1401>>(x1402>x1403))/x1404);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1406 = INT16_MAX;
	int32_t x1407 = -515;
	int64_t x1408 = -1LL;

    t182 = ((x1405>>(x1406>x1407))/x1408);

    if (t182 != -2147483647LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x1409 = 527841715560902LLU;
	int64_t x1410 = -7792342344889332LL;
	uint32_t x1411 = 21U;
	uint32_t x1412 = 888U;
	volatile uint64_t t183 = 58699658594LLU;

    t183 = ((x1409>>(x1410>x1411))/x1412);

    if (t183 != 594416346352LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x1421 = UINT64_MAX;
	static int8_t x1422 = -1;
	int32_t x1423 = INT32_MIN;
	uint8_t x1424 = 84U;
	uint64_t t184 = 1749776427862078727LLU;

    t184 = ((x1421>>(x1422>x1423))/x1424);

    if (t184 != 109802048057794950LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1435 = -31;
	int32_t x1436 = 4890;
	volatile uint32_t t185 = 6573495U;

    t185 = ((x1433>>(x1434>x1435))/x1436);

    if (t185 != 439158U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1438 = 15U;
	int8_t x1439 = 9;
	uint32_t t186 = 292U;

    t186 = ((x1437>>(x1438>x1439))/x1440);

    if (t186 != 0U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x1441 = 778;
	int32_t x1442 = -7682;
	uint8_t x1443 = UINT8_MAX;
	volatile uint32_t x1444 = 503062U;
	static uint32_t t187 = 7835U;

    t187 = ((x1441>>(x1442>x1443))/x1444);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x1445 = 20825U;
	volatile uint64_t x1446 = 38496613271743LLU;
	volatile uint8_t x1447 = 1U;
	int8_t x1448 = INT8_MIN;

    t188 = ((x1445>>(x1446>x1447))/x1448);

    if (t188 != -81) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1453 = 15893143142LL;
	int8_t x1455 = -1;
	int16_t x1456 = INT16_MIN;
	static volatile int64_t t189 = 3570485531497LL;

    t189 = ((x1453>>(x1454>x1455))/x1456);

    if (t189 != -485020LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1457 = 2U;
	int64_t x1459 = INT64_MIN;
	int32_t x1460 = 64825064;
	volatile int32_t t190 = -8913;

    t190 = ((x1457>>(x1458>x1459))/x1460);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1461 = UINT32_MAX;
	uint32_t x1463 = UINT32_MAX;
	volatile uint16_t x1464 = 7U;
	uint32_t t191 = 172448044U;

    t191 = ((x1461>>(x1462>x1463))/x1464);

    if (t191 != 613566756U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1467 = INT8_MIN;
	static int32_t x1468 = INT32_MAX;
	uint64_t t192 = 38265690450LLU;

    t192 = ((x1465>>(x1466>x1467))/x1468);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x1469 = 2;
	int8_t x1470 = -1;
	int64_t x1471 = -2402389176360241740LL;
	int8_t x1472 = -1;
	volatile int32_t t193 = -547;

    t193 = ((x1469>>(x1470>x1471))/x1472);

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1483 = INT64_MIN;
	int16_t x1484 = INT16_MIN;
	int32_t t194 = -86965963;

    t194 = ((x1481>>(x1482>x1483))/x1484);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int64_t x1486 = -1LL;
	uint64_t x1487 = UINT64_MAX;
	uint16_t x1488 = 7500U;
	static volatile int32_t t195 = -54690964;

    t195 = ((x1485>>(x1486>x1487))/x1488);

    if (t195 != 8) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1489 = UINT32_MAX;
	int16_t x1490 = INT16_MIN;
	uint32_t x1491 = 31273U;
	volatile int16_t x1492 = INT16_MAX;
	uint32_t t196 = 12922518U;

    t196 = ((x1489>>(x1490>x1491))/x1492);

    if (t196 != 65538U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1498 = 0;
	uint16_t x1500 = UINT16_MAX;

    t197 = ((x1497>>(x1498>x1499))/x1500);

    if (t197 != 136800366072LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1504 = 103LLU;
	volatile uint64_t t198 = 58461581LLU;

    t198 = ((x1501>>(x1502>x1503))/x1504);

    if (t198 != 7689LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x1518 = INT32_MAX;
	int8_t x1520 = -1;
	static int32_t t199 = -454575650;

    t199 = ((x1517>>(x1518>x1519))/x1520);

    if (t199 != -8) { NG(); } else { ; }
	
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

