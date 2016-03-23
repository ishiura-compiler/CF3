
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

int8_t x3 = -31;
static volatile int32_t x13 = INT32_MIN;
int16_t x14 = -1;
static int64_t x34 = 144LL;
int32_t t5 = -1041838;
uint16_t x43 = 27359U;
int32_t x44 = INT32_MIN;
volatile uint32_t x47 = 5U;
int32_t x50 = -3917;
int8_t x63 = INT8_MIN;
static int32_t t9 = -37405;
volatile int32_t x68 = 18;
int32_t t10 = -5;
static int32_t t12 = -54;
int8_t x83 = INT8_MAX;
int32_t t14 = 8797410;
int32_t t15 = 72461788;
int32_t t16 = -69;
uint8_t x118 = 1U;
int32_t t17 = -41642446;
volatile int16_t x143 = -5;
int32_t t18 = -150735;
int64_t x152 = -2437759780LL;
uint16_t x168 = 2U;
volatile int32_t t22 = 1643910;
volatile int8_t x177 = -1;
int32_t x186 = INT32_MAX;
volatile int32_t t24 = 1829905;
int64_t x201 = -1LL;
int64_t x203 = -7246LL;
int32_t t26 = 4991;
int32_t x205 = INT32_MIN;
static int32_t x210 = INT32_MAX;
volatile int32_t t28 = 3433;
uint64_t x221 = UINT64_MAX;
int8_t x222 = INT8_MAX;
volatile int32_t t31 = -49948779;
volatile int8_t x243 = -6;
int32_t t32 = 804872262;
uint16_t x277 = UINT16_MAX;
uint16_t x285 = 1106U;
volatile uint64_t x288 = 6434852590371459LLU;
volatile int32_t t36 = -49;
static volatile uint64_t x318 = 3868260LLU;
static uint16_t x320 = 4946U;
static uint32_t x324 = 6843U;
int8_t x374 = -1;
int32_t x387 = INT32_MIN;
int64_t x416 = INT64_MIN;
int32_t x430 = -348815327;
int32_t x431 = INT32_MIN;
static int8_t x435 = 3;
volatile uint16_t x436 = UINT16_MAX;
uint32_t x443 = 1983005663U;
volatile int32_t t49 = 6670637;
static uint64_t x471 = 1LLU;
int32_t t51 = -2411759;
volatile uint8_t x501 = 1U;
volatile int32_t t54 = -11631;
int32_t x505 = -1;
volatile uint16_t x534 = 8U;
volatile int64_t x536 = INT64_MAX;
int32_t t60 = 22243;
static uint64_t x537 = 135LLU;
uint8_t x568 = 47U;
int32_t t66 = 478175988;
int64_t x571 = INT64_MIN;
volatile int8_t x575 = INT8_MIN;
uint64_t x585 = 229LLU;
volatile int32_t t69 = -1273;
static volatile int32_t x611 = INT32_MIN;
int64_t x617 = -24652240790260081LL;
uint64_t x620 = 523432LLU;
volatile int32_t t72 = 232;
int8_t x628 = INT8_MIN;
volatile uint16_t x638 = UINT16_MAX;
static int64_t x639 = INT64_MIN;
int8_t x660 = -1;
int32_t x679 = INT32_MIN;
int16_t x680 = INT16_MAX;
static volatile int8_t x683 = INT8_MIN;
int16_t x687 = -1;
int32_t x689 = INT32_MIN;
static uint64_t x692 = 429LLU;
volatile int32_t t82 = -857787739;
int32_t x693 = 8;
uint8_t x694 = 0U;
int64_t x699 = -1LL;
volatile uint64_t x705 = 57645LLU;
volatile int32_t x710 = -1;
int16_t x711 = -21;
int16_t x727 = -139;
volatile int32_t x728 = INT32_MIN;
uint64_t x740 = UINT64_MAX;
uint8_t x741 = 81U;
uint16_t x744 = 32696U;
int32_t t90 = 30321579;
int64_t x747 = INT64_MIN;
int16_t x748 = -759;
volatile uint8_t x762 = UINT8_MAX;
uint32_t x764 = 174116356U;
static int8_t x795 = -56;
uint64_t x802 = 6192232LLU;
uint16_t x803 = 11U;
static int16_t x804 = INT16_MIN;
int64_t x842 = INT64_MAX;
volatile int32_t t101 = -2;
uint32_t x849 = UINT32_MAX;
int16_t x856 = INT16_MAX;
volatile int32_t t103 = 71;
int16_t x882 = -1;
int32_t t105 = 3;
uint8_t x895 = 49U;
volatile int32_t t106 = -12036;
volatile int32_t t107 = -3;
static int32_t t109 = 503;
volatile int16_t x931 = INT16_MIN;
uint8_t x935 = 2U;
uint32_t x946 = 6158U;
volatile int64_t x953 = 1011562109323314LL;
uint32_t x1000 = 1U;
int64_t x1035 = -299688973450653LL;
int32_t t120 = 50188;
int16_t x1057 = -1;
volatile int32_t t122 = 8212851;
uint64_t x1069 = UINT64_MAX;
volatile int32_t t124 = 196074;
static volatile int32_t t125 = 633314;
int16_t x1093 = INT16_MIN;
int64_t x1095 = -1LL;
volatile int32_t t127 = -79691;
static int32_t x1107 = 5;
volatile uint32_t x1108 = UINT32_MAX;
int64_t x1118 = -1LL;
static volatile int32_t t131 = 14;
int8_t x1144 = INT8_MAX;
int8_t x1155 = INT8_MIN;
int8_t x1218 = INT8_MAX;
int8_t x1242 = INT8_MIN;
int8_t x1245 = -6;
int32_t t141 = 868;
volatile int16_t x1257 = INT16_MIN;
volatile int32_t t142 = 129070804;
volatile int32_t t143 = -653593;
int8_t x1309 = 10;
static int8_t x1334 = -4;
static uint64_t x1335 = 16616542240LLU;
static int16_t x1371 = 1;
int32_t t150 = -4686;
int8_t x1381 = INT8_MIN;
volatile int64_t x1397 = 583966012LL;
static int32_t x1399 = -23110;
volatile int32_t t153 = -1;
uint32_t x1420 = 5476U;
volatile int32_t t155 = -17563;
int64_t x1451 = INT64_MIN;
int8_t x1454 = INT8_MIN;
int32_t x1476 = 94;
volatile uint32_t x1487 = 54U;
static int32_t t161 = -592;
uint64_t x1511 = 15118LLU;
static int8_t x1516 = INT8_MIN;
int32_t x1523 = -24844519;
int64_t x1530 = INT64_MAX;
int16_t x1537 = INT16_MIN;
int8_t x1555 = INT8_MIN;
volatile int16_t x1564 = 1;
uint16_t x1570 = 6U;
int8_t x1578 = -1;
static int8_t x1585 = INT8_MIN;
int32_t t177 = 2056904;
int16_t x1616 = -1;
int64_t x1620 = 27166915670175847LL;
int32_t t180 = -903;
volatile int32_t t181 = -1869824;
volatile int32_t t184 = -103040643;
volatile int8_t x1656 = INT8_MIN;
volatile int8_t x1667 = 2;
int32_t x1677 = -10878;
int64_t x1678 = -59759763364133332LL;
uint32_t x1689 = 12641U;
static int16_t x1691 = INT16_MIN;
uint64_t x1694 = 110162985148362LLU;
int64_t x1702 = -918793LL;
int64_t x1712 = INT64_MIN;
int32_t t193 = -54337;
static int64_t x1716 = -1LL;
int32_t t195 = -31;
int32_t x1738 = INT32_MAX;
int8_t x1740 = INT8_MIN;
int8_t x1758 = INT8_MAX;
static int32_t x1759 = -587631206;
int8_t x1765 = -1;
int8_t x1766 = INT8_MAX;
static int8_t x1774 = INT8_MIN;
int16_t x1775 = INT16_MIN;


void f0(void) {
    	static int8_t x1 = 11;
	static volatile uint16_t x2 = UINT16_MAX;
	volatile int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = -10589169;

    t0 = ((x1/(x2>x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x15 = INT16_MIN;
	uint16_t x16 = 12U;
	volatile int32_t t1 = 61025569;

    t1 = ((x13/(x14>x15))==x16);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x21 = -355859278;
	volatile uint32_t x22 = 2144016U;
	uint16_t x23 = 30U;
	uint32_t x24 = 65192U;
	volatile int32_t t2 = -12817;

    t2 = ((x21/(x22>x23))==x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x25 = INT16_MAX;
	uint16_t x26 = 62U;
	int16_t x27 = INT16_MIN;
	static uint64_t x28 = 842660430362639844LLU;
	volatile int32_t t3 = -834;

    t3 = ((x25/(x26>x27))==x28);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x29 = -40474;
	int32_t x30 = INT32_MAX;
	int64_t x31 = INT64_MIN;
	volatile uint64_t x32 = 1085713352398049566LLU;
	int32_t t4 = -1458;

    t4 = ((x29/(x30>x31))==x32);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = -1;
	int8_t x35 = -36;
	static int8_t x36 = INT8_MIN;

    t5 = ((x33/(x34>x35))==x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x41 = INT16_MIN;
	uint64_t x42 = 239754320281111763LLU;
	volatile int32_t t6 = -5348000;

    t6 = ((x41/(x42>x43))==x44);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x45 = -1;
	int64_t x46 = 109471LL;
	static int16_t x48 = INT16_MIN;
	int32_t t7 = -10947902;

    t7 = ((x45/(x46>x47))==x48);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x49 = INT8_MIN;
	volatile int16_t x51 = INT16_MIN;
	int64_t x52 = -72144355408LL;
	static volatile int32_t t8 = -254;

    t8 = ((x49/(x50>x51))==x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x61 = INT32_MIN;
	static int32_t x62 = 751;
	int16_t x64 = INT16_MIN;

    t9 = ((x61/(x62>x63))==x64);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x65 = 5U;
	int8_t x66 = -1;
	int16_t x67 = INT16_MIN;

    t10 = ((x65/(x66>x67))==x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint64_t x73 = 973LLU;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = 43;
	volatile uint64_t x76 = 10188580327217LLU;
	volatile int32_t t11 = 225204;

    t11 = ((x73/(x74>x75))==x76);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x77 = INT16_MIN;
	uint16_t x78 = 1U;
	int64_t x79 = INT64_MIN;
	int16_t x80 = -860;

    t12 = ((x77/(x78>x79))==x80);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x81 = UINT64_MAX;
	static uint64_t x82 = UINT64_MAX;
	uint16_t x84 = UINT16_MAX;
	int32_t t13 = -167385;

    t13 = ((x81/(x82>x83))==x84);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint16_t x93 = 1044U;
	uint16_t x94 = 7U;
	static int16_t x95 = -1;
	int64_t x96 = -1LL;

    t14 = ((x93/(x94>x95))==x96);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x101 = -1LL;
	int32_t x102 = 1861;
	int8_t x103 = 36;
	volatile uint16_t x104 = 22865U;

    t15 = ((x101/(x102>x103))==x104);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x109 = INT16_MIN;
	uint8_t x110 = UINT8_MAX;
	static int8_t x111 = INT8_MIN;
	int32_t x112 = 628483;

    t16 = ((x109/(x110>x111))==x112);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x117 = UINT64_MAX;
	int64_t x119 = INT64_MIN;
	static int32_t x120 = -83;

    t17 = ((x117/(x118>x119))==x120);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x141 = 866855LLU;
	static int32_t x142 = INT32_MAX;
	int32_t x144 = 183599;

    t18 = ((x141/(x142>x143))==x144);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x145 = 32648426LL;
	uint64_t x146 = UINT64_MAX;
	volatile int8_t x147 = -53;
	int32_t x148 = INT32_MAX;
	static volatile int32_t t19 = 21;

    t19 = ((x145/(x146>x147))==x148);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x149 = INT32_MIN;
	int16_t x150 = -1;
	uint32_t x151 = 90593U;
	volatile int32_t t20 = -3844;

    t20 = ((x149/(x150>x151))==x152);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x165 = INT16_MIN;
	volatile uint64_t x166 = UINT64_MAX;
	int32_t x167 = INT32_MIN;
	int32_t t21 = -3906228;

    t21 = ((x165/(x166>x167))==x168);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x169 = 1185421263930LL;
	static int32_t x170 = -1;
	volatile int16_t x171 = -2;
	static volatile int32_t x172 = INT32_MIN;

    t22 = ((x169/(x170>x171))==x172);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x178 = -1;
	uint64_t x179 = 7403788LLU;
	uint16_t x180 = 13454U;
	int32_t t23 = 575807549;

    t23 = ((x177/(x178>x179))==x180);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x185 = INT32_MIN;
	uint64_t x187 = 550179502LLU;
	volatile uint64_t x188 = 8587937LLU;

    t24 = ((x185/(x186>x187))==x188);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x193 = UINT16_MAX;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MIN;
	volatile int8_t x196 = INT8_MIN;
	static volatile int32_t t25 = 0;

    t25 = ((x193/(x194>x195))==x196);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x202 = -1;
	int64_t x204 = -1LL;

    t26 = ((x201/(x202>x203))==x204);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint8_t x206 = UINT8_MAX;
	volatile int8_t x207 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	volatile int32_t t27 = 396955673;

    t27 = ((x205/(x206>x207))==x208);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x209 = 3U;
	int32_t x211 = 154717418;
	int8_t x212 = INT8_MAX;

    t28 = ((x209/(x210>x211))==x212);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x223 = 40U;
	uint32_t x224 = 95304123U;
	int32_t t29 = -16239935;

    t29 = ((x221/(x222>x223))==x224);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x225 = INT32_MAX;
	uint64_t x226 = UINT64_MAX;
	int16_t x227 = -15709;
	static volatile int32_t x228 = -302837;
	int32_t t30 = -49;

    t30 = ((x225/(x226>x227))==x228);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x233 = 26U;
	int32_t x234 = INT32_MAX;
	int16_t x235 = 1;
	int8_t x236 = 17;

    t31 = ((x233/(x234>x235))==x236);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x241 = INT8_MIN;
	static uint64_t x242 = UINT64_MAX;
	uint64_t x244 = 13LLU;

    t32 = ((x241/(x242>x243))==x244);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x253 = INT16_MIN;
	int64_t x254 = INT64_MAX;
	int32_t x255 = -23350;
	uint64_t x256 = 150036LLU;
	int32_t t33 = -8080;

    t33 = ((x253/(x254>x255))==x256);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x278 = 92U;
	int16_t x279 = 51;
	volatile int32_t x280 = INT32_MIN;
	int32_t t34 = -10301;

    t34 = ((x277/(x278>x279))==x280);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x281 = -41;
	uint8_t x282 = UINT8_MAX;
	int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MIN;
	volatile int32_t t35 = -13793248;

    t35 = ((x281/(x282>x283))==x284);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x286 = INT64_MAX;
	int32_t x287 = 499353;

    t36 = ((x285/(x286>x287))==x288);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x317 = INT32_MIN;
	int32_t x319 = 17590;
	int32_t t37 = -7817645;

    t37 = ((x317/(x318>x319))==x320);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x321 = -860;
	static volatile int32_t x322 = 1879023;
	static int8_t x323 = 2;
	int32_t t38 = -880837;

    t38 = ((x321/(x322>x323))==x324);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x333 = 6;
	int32_t x334 = INT32_MAX;
	volatile int64_t x335 = -1LL;
	uint32_t x336 = 648666U;
	volatile int32_t t39 = -128;

    t39 = ((x333/(x334>x335))==x336);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x373 = 53U;
	uint32_t x375 = 5596U;
	uint64_t x376 = 2146396565662LLU;
	int32_t t40 = -2252374;

    t40 = ((x373/(x374>x375))==x376);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x381 = INT16_MAX;
	uint16_t x382 = 8U;
	static int16_t x383 = INT16_MIN;
	uint64_t x384 = 570956104427825330LLU;
	int32_t t41 = -29815;

    t41 = ((x381/(x382>x383))==x384);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x385 = UINT8_MAX;
	uint8_t x386 = UINT8_MAX;
	volatile uint32_t x388 = 6702961U;
	int32_t t42 = -899;

    t42 = ((x385/(x386>x387))==x388);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x389 = 49U;
	int64_t x390 = 1089280646505517390LL;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = 4245628216LL;
	static volatile int32_t t43 = -17504;

    t43 = ((x389/(x390>x391))==x392);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x409 = 347995167U;
	int8_t x410 = -1;
	int32_t x411 = -744291;
	int64_t x412 = INT64_MIN;
	int32_t t44 = 32576;

    t44 = ((x409/(x410>x411))==x412);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x413 = -1;
	volatile uint16_t x414 = UINT16_MAX;
	volatile int8_t x415 = -26;
	volatile int32_t t45 = 166;

    t45 = ((x413/(x414>x415))==x416);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x421 = UINT8_MAX;
	volatile uint16_t x422 = 2755U;
	int16_t x423 = -1;
	int8_t x424 = -1;
	int32_t t46 = -433949;

    t46 = ((x421/(x422>x423))==x424);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x429 = 19U;
	int32_t x432 = -429;
	volatile int32_t t47 = 1;

    t47 = ((x429/(x430>x431))==x432);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x433 = UINT32_MAX;
	uint32_t x434 = 718338U;
	volatile int32_t t48 = 5281318;

    t48 = ((x433/(x434>x435))==x436);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x441 = UINT32_MAX;
	uint32_t x442 = UINT32_MAX;
	int8_t x444 = -58;

    t49 = ((x441/(x442>x443))==x444);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x461 = INT64_MAX;
	int64_t x462 = INT64_MAX;
	static int64_t x463 = INT64_MIN;
	uint16_t x464 = 0U;
	volatile int32_t t50 = 966863;

    t50 = ((x461/(x462>x463))==x464);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x469 = -1LL;
	volatile uint64_t x470 = 85639163883359LLU;
	static int32_t x472 = 4102922;

    t51 = ((x469/(x470>x471))==x472);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x473 = 600LL;
	int64_t x474 = INT64_MAX;
	int64_t x475 = -320LL;
	static int16_t x476 = INT16_MIN;
	static volatile int32_t t52 = 882921;

    t52 = ((x473/(x474>x475))==x476);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x481 = INT64_MIN;
	volatile uint32_t x482 = UINT32_MAX;
	uint16_t x483 = 376U;
	int32_t x484 = -1;
	static volatile int32_t t53 = -22507;

    t53 = ((x481/(x482>x483))==x484);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x502 = INT8_MIN;
	uint32_t x503 = 42741746U;
	uint16_t x504 = 240U;

    t54 = ((x501/(x502>x503))==x504);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x506 = 2U;
	int8_t x507 = INT8_MIN;
	int8_t x508 = INT8_MIN;
	static volatile int32_t t55 = 167;

    t55 = ((x505/(x506>x507))==x508);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x509 = INT32_MIN;
	volatile uint8_t x510 = 60U;
	int32_t x511 = -7767;
	int64_t x512 = INT64_MIN;
	volatile int32_t t56 = 51389;

    t56 = ((x509/(x510>x511))==x512);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x513 = INT32_MIN;
	uint16_t x514 = UINT16_MAX;
	volatile int64_t x515 = INT64_MIN;
	volatile int16_t x516 = -2567;
	int32_t t57 = 770422;

    t57 = ((x513/(x514>x515))==x516);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint8_t x517 = 23U;
	int16_t x518 = INT16_MAX;
	volatile int16_t x519 = -1;
	volatile uint16_t x520 = 2U;
	volatile int32_t t58 = -10731344;

    t58 = ((x517/(x518>x519))==x520);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x521 = 641856367LLU;
	volatile int32_t x522 = INT32_MAX;
	uint16_t x523 = 2U;
	static int16_t x524 = INT16_MIN;
	volatile int32_t t59 = 47347;

    t59 = ((x521/(x522>x523))==x524);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x533 = -1;
	uint16_t x535 = 2U;

    t60 = ((x533/(x534>x535))==x536);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x538 = 3;
	volatile int16_t x539 = INT16_MIN;
	int8_t x540 = INT8_MIN;
	volatile int32_t t61 = -85387;

    t61 = ((x537/(x538>x539))==x540);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x541 = INT64_MAX;
	uint8_t x542 = 41U;
	volatile int64_t x543 = -1LL;
	uint64_t x544 = UINT64_MAX;
	static int32_t t62 = 0;

    t62 = ((x541/(x542>x543))==x544);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x545 = 12U;
	int8_t x546 = INT8_MIN;
	uint64_t x547 = 80003LLU;
	int16_t x548 = INT16_MIN;
	volatile int32_t t63 = -60;

    t63 = ((x545/(x546>x547))==x548);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x553 = 1;
	int16_t x554 = -1;
	int8_t x555 = INT8_MIN;
	int32_t x556 = -1;
	volatile int32_t t64 = -5513;

    t64 = ((x553/(x554>x555))==x556);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x561 = INT32_MIN;
	int64_t x562 = -1LL;
	int8_t x563 = -20;
	int64_t x564 = 1798304282564509175LL;
	volatile int32_t t65 = -7;

    t65 = ((x561/(x562>x563))==x564);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x565 = 710021;
	volatile int64_t x566 = 21036929447LL;
	int32_t x567 = INT32_MIN;

    t66 = ((x565/(x566>x567))==x568);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x569 = INT32_MIN;
	uint16_t x570 = 14U;
	volatile int32_t x572 = -12406840;
	int32_t t67 = -4;

    t67 = ((x569/(x570>x571))==x572);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x573 = -2906406994927LL;
	static int64_t x574 = 510921533629463LL;
	static uint32_t x576 = 56U;
	volatile int32_t t68 = 91;

    t68 = ((x573/(x574>x575))==x576);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x586 = INT32_MIN;
	int64_t x587 = -1602352431773LL;
	int64_t x588 = INT64_MIN;

    t69 = ((x585/(x586>x587))==x588);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x609 = -531499;
	static int64_t x610 = -1LL;
	uint16_t x612 = UINT16_MAX;
	int32_t t70 = -1856540;

    t70 = ((x609/(x610>x611))==x612);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x613 = 0U;
	uint64_t x614 = UINT64_MAX;
	volatile int64_t x615 = INT64_MAX;
	volatile int32_t x616 = -1;
	volatile int32_t t71 = 187379;

    t71 = ((x613/(x614>x615))==x616);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x618 = -1LL;
	static int32_t x619 = INT32_MIN;

    t72 = ((x617/(x618>x619))==x620);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int64_t x625 = 971LL;
	int32_t x626 = INT32_MAX;
	volatile int64_t x627 = INT64_MIN;
	int32_t t73 = 252;

    t73 = ((x625/(x626>x627))==x628);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint8_t x629 = 11U;
	int32_t x630 = INT32_MAX;
	uint32_t x631 = 15564U;
	uint8_t x632 = UINT8_MAX;
	int32_t t74 = -1738;

    t74 = ((x629/(x630>x631))==x632);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x637 = UINT64_MAX;
	int32_t x640 = INT32_MIN;
	volatile int32_t t75 = 891658;

    t75 = ((x637/(x638>x639))==x640);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x641 = 5520LL;
	static volatile int16_t x642 = INT16_MAX;
	static int16_t x643 = INT16_MIN;
	uint8_t x644 = UINT8_MAX;
	static int32_t t76 = 59975697;

    t76 = ((x641/(x642>x643))==x644);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x657 = INT32_MIN;
	int64_t x658 = INT64_MAX;
	int8_t x659 = 5;
	volatile int32_t t77 = -48583057;

    t77 = ((x657/(x658>x659))==x660);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x669 = UINT8_MAX;
	int64_t x670 = INT64_MAX;
	int32_t x671 = INT32_MIN;
	int32_t x672 = INT32_MIN;
	int32_t t78 = 7318;

    t78 = ((x669/(x670>x671))==x672);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x677 = INT8_MAX;
	static int64_t x678 = -1LL;
	volatile int32_t t79 = 5207116;

    t79 = ((x677/(x678>x679))==x680);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x681 = 349466358455263061LLU;
	int64_t x682 = -1LL;
	volatile int8_t x684 = 48;
	volatile int32_t t80 = -3851218;

    t80 = ((x681/(x682>x683))==x684);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x685 = -632784926467LL;
	uint16_t x686 = 1U;
	static int16_t x688 = INT16_MAX;
	int32_t t81 = 47;

    t81 = ((x685/(x686>x687))==x688);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x690 = 1018;
	static volatile int32_t x691 = -1;

    t82 = ((x689/(x690>x691))==x692);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x695 = INT64_MIN;
	static uint64_t x696 = 5771168288063LLU;
	static volatile int32_t t83 = 558;

    t83 = ((x693/(x694>x695))==x696);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x697 = INT32_MAX;
	int8_t x698 = INT8_MAX;
	uint8_t x700 = UINT8_MAX;
	static volatile int32_t t84 = -1627499;

    t84 = ((x697/(x698>x699))==x700);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x706 = 10221U;
	int16_t x707 = 90;
	int32_t x708 = INT32_MAX;
	volatile int32_t t85 = 1;

    t85 = ((x705/(x706>x707))==x708);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x709 = INT64_MIN;
	volatile int8_t x712 = 5;
	volatile int32_t t86 = 33;

    t86 = ((x709/(x710>x711))==x712);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x713 = UINT16_MAX;
	static uint32_t x714 = 58817156U;
	uint64_t x715 = 60LLU;
	int8_t x716 = 2;
	int32_t t87 = 0;

    t87 = ((x713/(x714>x715))==x716);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x725 = 21;
	volatile int64_t x726 = INT64_MAX;
	volatile int32_t t88 = 1;

    t88 = ((x725/(x726>x727))==x728);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x737 = 37LLU;
	volatile int16_t x738 = 235;
	volatile uint8_t x739 = 78U;
	volatile int32_t t89 = 63;

    t89 = ((x737/(x738>x739))==x740);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x742 = -1;
	uint32_t x743 = 44382U;

    t90 = ((x741/(x742>x743))==x744);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x745 = UINT32_MAX;
	volatile int16_t x746 = INT16_MIN;
	volatile int32_t t91 = -187;

    t91 = ((x745/(x746>x747))==x748);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x749 = INT16_MAX;
	volatile int32_t x750 = 55800;
	int16_t x751 = INT16_MIN;
	volatile int32_t x752 = INT32_MIN;
	static volatile int32_t t92 = -28373;

    t92 = ((x749/(x750>x751))==x752);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x761 = -1;
	static uint16_t x763 = 175U;
	volatile int32_t t93 = 9573306;

    t93 = ((x761/(x762>x763))==x764);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x765 = -3;
	int16_t x766 = INT16_MAX;
	uint8_t x767 = 31U;
	volatile int16_t x768 = 2;
	int32_t t94 = -7145;

    t94 = ((x765/(x766>x767))==x768);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x769 = INT32_MIN;
	static int32_t x770 = INT32_MIN;
	int64_t x771 = INT64_MIN;
	uint16_t x772 = UINT16_MAX;
	int32_t t95 = 4762562;

    t95 = ((x769/(x770>x771))==x772);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x789 = INT64_MIN;
	volatile int32_t x790 = INT32_MAX;
	int8_t x791 = INT8_MIN;
	static int16_t x792 = -397;
	int32_t t96 = 28295429;

    t96 = ((x789/(x790>x791))==x792);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x793 = -1LL;
	int16_t x794 = -5;
	int32_t x796 = -1;
	int32_t t97 = 1136988;

    t97 = ((x793/(x794>x795))==x796);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x801 = 21U;
	int32_t t98 = -101271655;

    t98 = ((x801/(x802>x803))==x804);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x833 = INT16_MIN;
	volatile uint16_t x834 = 3622U;
	static int64_t x835 = 1LL;
	int16_t x836 = -1;
	static volatile int32_t t99 = -886043;

    t99 = ((x833/(x834>x835))==x836);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x837 = -1;
	uint32_t x838 = UINT32_MAX;
	static volatile uint32_t x839 = 442U;
	int8_t x840 = -1;
	int32_t t100 = 2044;

    t100 = ((x837/(x838>x839))==x840);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x841 = 2U;
	static int16_t x843 = -1;
	volatile uint32_t x844 = 183766U;

    t101 = ((x841/(x842>x843))==x844);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x850 = 413777;
	static volatile int64_t x851 = -325369278LL;
	int8_t x852 = INT8_MIN;
	volatile int32_t t102 = 10;

    t102 = ((x849/(x850>x851))==x852);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x853 = INT16_MAX;
	int16_t x854 = INT16_MAX;
	int8_t x855 = 0;

    t103 = ((x853/(x854>x855))==x856);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint32_t x873 = 110U;
	int16_t x874 = -373;
	int64_t x875 = INT64_MIN;
	int32_t x876 = 67;
	static int32_t t104 = -2486;

    t104 = ((x873/(x874>x875))==x876);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x881 = UINT32_MAX;
	uint64_t x883 = 181355498169027865LLU;
	uint32_t x884 = 1103344160U;

    t105 = ((x881/(x882>x883))==x884);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint8_t x893 = 69U;
	int16_t x894 = 113;
	int8_t x896 = 1;

    t106 = ((x893/(x894>x895))==x896);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x901 = INT64_MIN;
	static uint16_t x902 = UINT16_MAX;
	static int8_t x903 = 3;
	uint16_t x904 = UINT16_MAX;

    t107 = ((x901/(x902>x903))==x904);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x909 = INT8_MIN;
	int32_t x910 = 694;
	uint8_t x911 = 19U;
	volatile int64_t x912 = -1LL;
	static int32_t t108 = -28;

    t108 = ((x909/(x910>x911))==x912);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x921 = 245U;
	int8_t x922 = -29;
	int16_t x923 = INT16_MIN;
	int32_t x924 = -1;

    t109 = ((x921/(x922>x923))==x924);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x929 = -1;
	volatile int32_t x930 = -5;
	static int16_t x932 = INT16_MIN;
	static volatile int32_t t110 = 2052692;

    t110 = ((x929/(x930>x931))==x932);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x933 = -4;
	uint16_t x934 = UINT16_MAX;
	int64_t x936 = INT64_MIN;
	static int32_t t111 = -1155577;

    t111 = ((x933/(x934>x935))==x936);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x941 = 723LLU;
	uint32_t x942 = UINT32_MAX;
	static volatile uint8_t x943 = 46U;
	static int64_t x944 = 4499564558905LL;
	volatile int32_t t112 = 7874054;

    t112 = ((x941/(x942>x943))==x944);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x945 = -1;
	int8_t x947 = 2;
	int32_t x948 = INT32_MIN;
	int32_t t113 = 7;

    t113 = ((x945/(x946>x947))==x948);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x954 = UINT64_MAX;
	static int8_t x955 = INT8_MAX;
	int64_t x956 = INT64_MAX;
	volatile int32_t t114 = 93707987;

    t114 = ((x953/(x954>x955))==x956);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint8_t x969 = UINT8_MAX;
	uint8_t x970 = 21U;
	int32_t x971 = -22;
	int8_t x972 = 34;
	int32_t t115 = 43809346;

    t115 = ((x969/(x970>x971))==x972);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x985 = 1U;
	uint32_t x986 = UINT32_MAX;
	int16_t x987 = INT16_MIN;
	volatile uint32_t x988 = UINT32_MAX;
	volatile int32_t t116 = -214085746;

    t116 = ((x985/(x986>x987))==x988);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x997 = UINT64_MAX;
	int64_t x998 = 241142092884685LL;
	int32_t x999 = INT32_MIN;
	static volatile int32_t t117 = -1;

    t117 = ((x997/(x998>x999))==x1000);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x1001 = -950;
	int64_t x1002 = -3616091LL;
	uint64_t x1003 = 132643LLU;
	uint16_t x1004 = 31U;
	volatile int32_t t118 = 719368;

    t118 = ((x1001/(x1002>x1003))==x1004);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x1029 = INT32_MIN;
	volatile int32_t x1030 = INT32_MAX;
	uint16_t x1031 = 235U;
	int64_t x1032 = INT64_MIN;
	int32_t t119 = 339614550;

    t119 = ((x1029/(x1030>x1031))==x1032);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x1033 = INT32_MIN;
	uint8_t x1034 = 58U;
	int64_t x1036 = 9891171934249LL;

    t120 = ((x1033/(x1034>x1035))==x1036);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint32_t x1045 = UINT32_MAX;
	static uint32_t x1046 = 424565U;
	uint8_t x1047 = 4U;
	uint64_t x1048 = 17LLU;
	static int32_t t121 = -131987895;

    t121 = ((x1045/(x1046>x1047))==x1048);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x1058 = INT8_MIN;
	int32_t x1059 = INT32_MIN;
	int32_t x1060 = -1;

    t122 = ((x1057/(x1058>x1059))==x1060);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x1061 = INT16_MAX;
	uint16_t x1062 = UINT16_MAX;
	static int16_t x1063 = -1;
	int16_t x1064 = INT16_MIN;
	volatile int32_t t123 = 242;

    t123 = ((x1061/(x1062>x1063))==x1064);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1070 = 8588U;
	static volatile int64_t x1071 = INT64_MIN;
	int32_t x1072 = -4;

    t124 = ((x1069/(x1070>x1071))==x1072);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1085 = UINT8_MAX;
	int32_t x1086 = INT32_MAX;
	uint16_t x1087 = 29880U;
	volatile uint16_t x1088 = UINT16_MAX;

    t125 = ((x1085/(x1086>x1087))==x1088);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1089 = 84994LLU;
	static int64_t x1090 = -3LL;
	int16_t x1091 = INT16_MIN;
	static int64_t x1092 = INT64_MIN;
	volatile int32_t t126 = -344;

    t126 = ((x1089/(x1090>x1091))==x1092);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1094 = 54;
	int16_t x1096 = -1;

    t127 = ((x1093/(x1094>x1095))==x1096);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x1097 = 652;
	volatile int8_t x1098 = -4;
	static uint64_t x1099 = 550241942086281LLU;
	int64_t x1100 = INT64_MAX;
	volatile int32_t t128 = 11864;

    t128 = ((x1097/(x1098>x1099))==x1100);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x1105 = -249980LL;
	int8_t x1106 = INT8_MAX;
	volatile int32_t t129 = -131461544;

    t129 = ((x1105/(x1106>x1107))==x1108);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x1117 = 24U;
	volatile int64_t x1119 = INT64_MIN;
	int32_t x1120 = 1441;
	volatile int32_t t130 = 533477617;

    t130 = ((x1117/(x1118>x1119))==x1120);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x1133 = 44U;
	int8_t x1134 = INT8_MIN;
	uint32_t x1135 = 133744533U;
	static int32_t x1136 = INT32_MAX;

    t131 = ((x1133/(x1134>x1135))==x1136);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1141 = INT16_MIN;
	uint8_t x1142 = UINT8_MAX;
	static int32_t x1143 = INT32_MIN;
	volatile int32_t t132 = -1;

    t132 = ((x1141/(x1142>x1143))==x1144);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1153 = 0;
	volatile uint8_t x1154 = 6U;
	static int8_t x1156 = INT8_MIN;
	volatile int32_t t133 = -184185396;

    t133 = ((x1153/(x1154>x1155))==x1156);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x1157 = INT64_MIN;
	uint16_t x1158 = 23U;
	static int32_t x1159 = INT32_MIN;
	int64_t x1160 = -1LL;
	int32_t t134 = -4002;

    t134 = ((x1157/(x1158>x1159))==x1160);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1185 = -1;
	static int64_t x1186 = INT64_MAX;
	uint32_t x1187 = 153U;
	volatile int32_t x1188 = 373;
	static int32_t t135 = 8;

    t135 = ((x1185/(x1186>x1187))==x1188);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x1189 = -174016599794LL;
	int8_t x1190 = -1;
	static int16_t x1191 = INT16_MIN;
	int64_t x1192 = -3482949LL;
	volatile int32_t t136 = 3840;

    t136 = ((x1189/(x1190>x1191))==x1192);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1201 = 3;
	int32_t x1202 = 206102207;
	static int64_t x1203 = -15337252114261058LL;
	int32_t x1204 = INT32_MIN;
	int32_t t137 = 69772;

    t137 = ((x1201/(x1202>x1203))==x1204);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x1217 = -2356790558LL;
	static uint32_t x1219 = 59U;
	int16_t x1220 = 1;
	int32_t t138 = -1375363;

    t138 = ((x1217/(x1218>x1219))==x1220);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1225 = 63542781LL;
	uint64_t x1226 = UINT64_MAX;
	int64_t x1227 = 105845838850596LL;
	volatile uint16_t x1228 = 2U;
	static int32_t t139 = -7463601;

    t139 = ((x1225/(x1226>x1227))==x1228);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1241 = -200LL;
	uint32_t x1243 = 593296U;
	int16_t x1244 = -1;
	int32_t t140 = -121706565;

    t140 = ((x1241/(x1242>x1243))==x1244);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x1246 = 1743446008383LLU;
	int16_t x1247 = 5;
	int32_t x1248 = INT32_MIN;

    t141 = ((x1245/(x1246>x1247))==x1248);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x1258 = 131;
	int8_t x1259 = INT8_MIN;
	int64_t x1260 = 2721LL;

    t142 = ((x1257/(x1258>x1259))==x1260);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x1265 = INT8_MIN;
	static volatile int8_t x1266 = -1;
	int32_t x1267 = INT32_MIN;
	static int32_t x1268 = 58;

    t143 = ((x1265/(x1266>x1267))==x1268);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint64_t x1269 = 6919564383666753LLU;
	uint16_t x1270 = UINT16_MAX;
	volatile uint8_t x1271 = UINT8_MAX;
	volatile int16_t x1272 = -1;
	int32_t t144 = -52;

    t144 = ((x1269/(x1270>x1271))==x1272);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x1281 = 2287970LLU;
	int64_t x1282 = 123214313LL;
	static volatile int8_t x1283 = -1;
	int8_t x1284 = INT8_MIN;
	static int32_t t145 = 208974;

    t145 = ((x1281/(x1282>x1283))==x1284);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x1301 = 169U;
	uint64_t x1302 = 445328424592911303LLU;
	volatile uint32_t x1303 = 8917U;
	int8_t x1304 = INT8_MAX;
	int32_t t146 = 0;

    t146 = ((x1301/(x1302>x1303))==x1304);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x1305 = UINT16_MAX;
	int32_t x1306 = 4266155;
	int16_t x1307 = INT16_MIN;
	int64_t x1308 = 1830387072338154496LL;
	int32_t t147 = 62821;

    t147 = ((x1305/(x1306>x1307))==x1308);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile uint32_t x1310 = UINT32_MAX;
	int32_t x1311 = INT32_MIN;
	static int64_t x1312 = -88653LL;
	volatile int32_t t148 = -8630807;

    t148 = ((x1309/(x1310>x1311))==x1312);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x1333 = UINT16_MAX;
	uint16_t x1336 = 482U;
	int32_t t149 = -170796432;

    t149 = ((x1333/(x1334>x1335))==x1336);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x1369 = -1LL;
	volatile int32_t x1370 = 336055;
	int64_t x1372 = INT64_MIN;

    t150 = ((x1369/(x1370>x1371))==x1372);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint64_t x1382 = 34905064302128LLU;
	uint16_t x1383 = 3298U;
	static int8_t x1384 = INT8_MIN;
	volatile int32_t t151 = -171884;

    t151 = ((x1381/(x1382>x1383))==x1384);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x1389 = 881628U;
	int64_t x1390 = INT64_MAX;
	static int8_t x1391 = -1;
	int16_t x1392 = INT16_MIN;
	volatile int32_t t152 = 113936627;

    t152 = ((x1389/(x1390>x1391))==x1392);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x1398 = -1;
	uint16_t x1400 = 408U;

    t153 = ((x1397/(x1398>x1399))==x1400);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x1405 = -1;
	volatile uint64_t x1406 = 2073164518LLU;
	uint32_t x1407 = 9U;
	int64_t x1408 = -140062119768014LL;
	volatile int32_t t154 = -9;

    t154 = ((x1405/(x1406>x1407))==x1408);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1417 = -1LL;
	volatile int8_t x1418 = -1;
	volatile int32_t x1419 = INT32_MIN;

    t155 = ((x1417/(x1418>x1419))==x1420);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x1449 = -56066;
	static volatile int16_t x1450 = -192;
	int32_t x1452 = -1;
	int32_t t156 = -76424276;

    t156 = ((x1449/(x1450>x1451))==x1452);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1453 = INT32_MIN;
	uint32_t x1455 = 127977983U;
	volatile int64_t x1456 = INT64_MIN;
	int32_t t157 = 1065;

    t157 = ((x1453/(x1454>x1455))==x1456);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x1457 = -5;
	int64_t x1458 = 881807729623689LL;
	static int32_t x1459 = 237953266;
	uint32_t x1460 = 2U;
	volatile int32_t t158 = 2239;

    t158 = ((x1457/(x1458>x1459))==x1460);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x1473 = 12U;
	static uint16_t x1474 = UINT16_MAX;
	static int16_t x1475 = -1858;
	int32_t t159 = -2658465;

    t159 = ((x1473/(x1474>x1475))==x1476);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x1481 = INT16_MIN;
	static int8_t x1482 = INT8_MIN;
	int64_t x1483 = -186LL;
	int64_t x1484 = -682929459575888LL;
	volatile int32_t t160 = 0;

    t160 = ((x1481/(x1482>x1483))==x1484);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1485 = 15467521652825LL;
	uint8_t x1486 = UINT8_MAX;
	uint32_t x1488 = 3U;

    t161 = ((x1485/(x1486>x1487))==x1488);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x1497 = 39;
	uint64_t x1498 = 7LLU;
	volatile uint64_t x1499 = 0LLU;
	uint32_t x1500 = 2967069U;
	volatile int32_t t162 = -1;

    t162 = ((x1497/(x1498>x1499))==x1500);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x1501 = INT16_MIN;
	volatile int32_t x1502 = -1;
	int32_t x1503 = INT32_MIN;
	int8_t x1504 = 3;
	volatile int32_t t163 = -72785251;

    t163 = ((x1501/(x1502>x1503))==x1504);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x1509 = UINT32_MAX;
	uint16_t x1510 = 23218U;
	volatile int16_t x1512 = INT16_MIN;
	volatile int32_t t164 = 12249;

    t164 = ((x1509/(x1510>x1511))==x1512);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x1513 = 8085U;
	static int64_t x1514 = -1LL;
	int32_t x1515 = -5245515;
	int32_t t165 = 13;

    t165 = ((x1513/(x1514>x1515))==x1516);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x1521 = 74U;
	static int64_t x1522 = 886957331642804007LL;
	int8_t x1524 = INT8_MIN;
	int32_t t166 = 74234;

    t166 = ((x1521/(x1522>x1523))==x1524);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x1529 = INT8_MAX;
	int64_t x1531 = -1LL;
	int8_t x1532 = INT8_MIN;
	static int32_t t167 = 0;

    t167 = ((x1529/(x1530>x1531))==x1532);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x1538 = UINT64_MAX;
	int64_t x1539 = INT64_MIN;
	int64_t x1540 = -1596214036990725LL;
	int32_t t168 = -93186;

    t168 = ((x1537/(x1538>x1539))==x1540);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x1541 = 528416717442138964LL;
	int32_t x1542 = 5081;
	static volatile int8_t x1543 = -1;
	int32_t x1544 = 0;
	volatile int32_t t169 = 4652669;

    t169 = ((x1541/(x1542>x1543))==x1544);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1545 = UINT64_MAX;
	int64_t x1546 = -1021LL;
	uint64_t x1547 = 136936829209LLU;
	volatile uint16_t x1548 = 4U;
	static volatile int32_t t170 = 22;

    t170 = ((x1545/(x1546>x1547))==x1548);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile uint8_t x1553 = UINT8_MAX;
	int8_t x1554 = INT8_MAX;
	volatile int32_t x1556 = 0;
	int32_t t171 = -21181150;

    t171 = ((x1553/(x1554>x1555))==x1556);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x1561 = -1LL;
	uint64_t x1562 = UINT64_MAX;
	uint16_t x1563 = 26U;
	static volatile int32_t t172 = 13103;

    t172 = ((x1561/(x1562>x1563))==x1564);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x1569 = 1U;
	int8_t x1571 = 1;
	int16_t x1572 = INT16_MIN;
	volatile int32_t t173 = 180790;

    t173 = ((x1569/(x1570>x1571))==x1572);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1577 = 401159112LLU;
	int8_t x1579 = INT8_MIN;
	int32_t x1580 = INT32_MIN;
	volatile int32_t t174 = -1;

    t174 = ((x1577/(x1578>x1579))==x1580);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1586 = 309U;
	static int16_t x1587 = INT16_MIN;
	uint32_t x1588 = UINT32_MAX;
	static int32_t t175 = -129134;

    t175 = ((x1585/(x1586>x1587))==x1588);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1589 = 0U;
	volatile int8_t x1590 = -5;
	uint64_t x1591 = 1LLU;
	volatile int16_t x1592 = INT16_MAX;
	volatile int32_t t176 = 3141;

    t176 = ((x1589/(x1590>x1591))==x1592);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1597 = INT64_MAX;
	volatile int32_t x1598 = -160923;
	uint32_t x1599 = 4324U;
	volatile int16_t x1600 = INT16_MAX;

    t177 = ((x1597/(x1598>x1599))==x1600);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x1601 = 422U;
	uint32_t x1602 = UINT32_MAX;
	int64_t x1603 = -766634308658990291LL;
	int8_t x1604 = INT8_MAX;
	int32_t t178 = 108;

    t178 = ((x1601/(x1602>x1603))==x1604);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x1613 = 287077457322789753LLU;
	int32_t x1614 = 222803142;
	volatile uint64_t x1615 = 137LLU;
	int32_t t179 = -13677;

    t179 = ((x1613/(x1614>x1615))==x1616);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1617 = INT8_MIN;
	int64_t x1618 = -1LL;
	int16_t x1619 = -5;

    t180 = ((x1617/(x1618>x1619))==x1620);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1629 = UINT16_MAX;
	uint32_t x1630 = 123770U;
	uint32_t x1631 = 52990U;
	uint16_t x1632 = 6U;

    t181 = ((x1629/(x1630>x1631))==x1632);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x1633 = -1;
	int32_t x1634 = INT32_MAX;
	int8_t x1635 = INT8_MIN;
	static int64_t x1636 = -1LL;
	static int32_t t182 = 195130;

    t182 = ((x1633/(x1634>x1635))==x1636);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1645 = INT8_MIN;
	int16_t x1646 = INT16_MIN;
	volatile int64_t x1647 = INT64_MIN;
	uint8_t x1648 = 13U;
	volatile int32_t t183 = -32212;

    t183 = ((x1645/(x1646>x1647))==x1648);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1649 = UINT64_MAX;
	volatile uint8_t x1650 = 59U;
	uint16_t x1651 = 2U;
	uint64_t x1652 = 26933810579970LLU;

    t184 = ((x1649/(x1650>x1651))==x1652);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1653 = INT64_MAX;
	uint64_t x1654 = 1871106LLU;
	uint32_t x1655 = 3U;
	static int32_t t185 = -17860;

    t185 = ((x1653/(x1654>x1655))==x1656);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x1665 = -1;
	uint8_t x1666 = UINT8_MAX;
	static int8_t x1668 = -1;
	volatile int32_t t186 = -1;

    t186 = ((x1665/(x1666>x1667))==x1668);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1669 = -178;
	int16_t x1670 = INT16_MAX;
	static int8_t x1671 = -1;
	int64_t x1672 = -1LL;
	volatile int32_t t187 = -24290;

    t187 = ((x1669/(x1670>x1671))==x1672);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1679 = 35LLU;
	volatile int32_t x1680 = INT32_MIN;
	static volatile int32_t t188 = 626;

    t188 = ((x1677/(x1678>x1679))==x1680);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1685 = INT16_MIN;
	volatile int8_t x1686 = INT8_MAX;
	int16_t x1687 = 25;
	uint32_t x1688 = 288038U;
	volatile int32_t t189 = 1866;

    t189 = ((x1685/(x1686>x1687))==x1688);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int8_t x1690 = -26;
	uint16_t x1692 = UINT16_MAX;
	volatile int32_t t190 = 56;

    t190 = ((x1689/(x1690>x1691))==x1692);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x1693 = -818003LL;
	static int8_t x1695 = 6;
	volatile int64_t x1696 = -1LL;
	static volatile int32_t t191 = 34;

    t191 = ((x1693/(x1694>x1695))==x1696);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1701 = INT8_MAX;
	int32_t x1703 = INT32_MIN;
	int32_t x1704 = INT32_MIN;
	int32_t t192 = 919903;

    t192 = ((x1701/(x1702>x1703))==x1704);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x1709 = -2282108304LL;
	int32_t x1710 = INT32_MAX;
	int8_t x1711 = INT8_MIN;

    t193 = ((x1709/(x1710>x1711))==x1712);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1713 = -5077;
	int8_t x1714 = INT8_MIN;
	static uint64_t x1715 = 2017572036257LLU;
	volatile int32_t t194 = 57197257;

    t194 = ((x1713/(x1714>x1715))==x1716);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1717 = UINT8_MAX;
	int32_t x1718 = -1;
	int32_t x1719 = INT32_MIN;
	int16_t x1720 = 0;

    t195 = ((x1717/(x1718>x1719))==x1720);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1737 = -1;
	int8_t x1739 = INT8_MIN;
	volatile int32_t t196 = -975961609;

    t196 = ((x1737/(x1738>x1739))==x1740);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1757 = 102;
	static int32_t x1760 = INT32_MIN;
	volatile int32_t t197 = -448454489;

    t197 = ((x1757/(x1758>x1759))==x1760);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1767 = -1;
	static int64_t x1768 = INT64_MIN;
	volatile int32_t t198 = 0;

    t198 = ((x1765/(x1766>x1767))==x1768);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1773 = INT8_MIN;
	static uint64_t x1776 = 1762536524604747992LLU;
	volatile int32_t t199 = 212;

    t199 = ((x1773/(x1774>x1775))==x1776);

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

