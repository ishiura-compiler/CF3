
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

int64_t x2 = INT64_MAX;
int16_t x8 = INT16_MIN;
static int64_t x13 = INT64_MIN;
int16_t x16 = INT16_MIN;
uint32_t x20 = UINT32_MAX;
int8_t x53 = -1;
static int64_t x56 = -1LL;
volatile int8_t x60 = 47;
int8_t x66 = INT8_MIN;
int32_t x74 = 248;
int32_t t10 = 52964;
static volatile int64_t x78 = INT64_MIN;
static volatile int64_t t11 = -341529814422LL;
static volatile uint32_t x127 = 4691U;
int8_t x128 = -3;
uint64_t x130 = 378582290LLU;
int64_t x134 = INT64_MIN;
uint8_t x136 = 33U;
int16_t x137 = -6921;
int8_t x139 = -2;
int8_t x140 = -1;
static int8_t x169 = INT8_MIN;
int64_t x170 = INT64_MIN;
static int8_t x171 = -1;
int8_t x178 = INT8_MAX;
int8_t x184 = INT8_MIN;
static uint16_t x185 = 6U;
int16_t x188 = INT16_MIN;
static int32_t t25 = 0;
uint64_t x193 = 26663LLU;
int32_t x195 = INT32_MAX;
int32_t x198 = INT32_MIN;
int16_t x204 = INT16_MIN;
uint32_t x206 = 14385U;
static int32_t x207 = INT32_MIN;
uint16_t x213 = 18U;
int8_t x215 = -1;
uint32_t t30 = 3161U;
int64_t x218 = 641963702LL;
static int32_t x224 = INT32_MIN;
static uint32_t t32 = 1U;
static int16_t x227 = -3804;
static int16_t x228 = INT16_MIN;
uint32_t x230 = UINT32_MAX;
int16_t x239 = INT16_MIN;
uint64_t x242 = 9794708266320LLU;
uint64_t t37 = 245696544336015008LLU;
int16_t x245 = 9288;
uint8_t x249 = 74U;
int64_t x272 = INT64_MIN;
uint64_t x279 = UINT64_MAX;
static int16_t x280 = INT16_MAX;
volatile int64_t x281 = 172218366LL;
int64_t x282 = INT64_MAX;
int64_t x285 = -1LL;
int64_t t46 = INT64_MAX;
static int16_t x305 = INT16_MIN;
static int32_t x316 = INT32_MIN;
volatile int64_t x333 = INT64_MIN;
volatile int32_t x336 = INT32_MAX;
static volatile uint64_t t52 = 82LLU;
int64_t x337 = INT64_MAX;
int64_t t53 = -8990102828012LL;
int16_t x342 = 9747;
uint64_t x346 = 877501831813LLU;
int16_t x347 = INT16_MAX;
int64_t x355 = 179LL;
static int32_t x392 = -9094;
volatile int8_t x393 = -7;
int32_t t61 = 31993;
volatile int32_t x413 = INT32_MAX;
int64_t x416 = INT64_MIN;
int64_t x423 = INT64_MIN;
volatile int32_t t66 = -47;
int8_t x439 = INT8_MIN;
static volatile int32_t t67 = 1;
uint16_t x441 = UINT16_MAX;
static volatile uint8_t x447 = 1U;
static int16_t x448 = 0;
int32_t t69 = -37897136;
uint64_t x466 = 575LLU;
uint16_t x467 = 11U;
int8_t x483 = INT8_MAX;
static int16_t x489 = -2;
int8_t x490 = -4;
static uint64_t x491 = 54692057211420LLU;
int16_t x497 = INT16_MAX;
uint8_t x500 = 3U;
volatile int32_t t75 = -26471053;
int16_t x506 = -1;
volatile uint32_t x510 = 2199069U;
int64_t x513 = -1LL;
int16_t x514 = -6;
volatile uint64_t t79 = 4490168999063LLU;
uint8_t x525 = 14U;
int16_t x528 = INT16_MIN;
volatile int32_t t81 = -404532;
int16_t x539 = 9;
static volatile uint64_t t82 = 13543LLU;
volatile int8_t x544 = INT8_MAX;
int16_t x546 = INT16_MIN;
static uint64_t t86 = 1850LLU;
static uint64_t x560 = 292211746256216229LLU;
int32_t x587 = INT32_MAX;
static volatile uint32_t x630 = 441U;
int32_t x638 = INT32_MAX;
int32_t x640 = INT32_MIN;
int32_t x649 = 99;
int64_t x653 = INT64_MIN;
int64_t x658 = INT64_MIN;
volatile uint64_t x660 = 4572995718789949294LLU;
int16_t x665 = -1;
int32_t x668 = 14;
volatile uint64_t t105 = 3443277LLU;
volatile uint16_t x727 = 2483U;
uint64_t t106 = 2007126249849LLU;
int8_t x744 = 1;
volatile int8_t x749 = INT8_MIN;
volatile int32_t t112 = 246934;
int32_t x766 = INT32_MIN;
int16_t x772 = INT16_MIN;
volatile uint32_t x776 = 54687U;
uint64_t x780 = 455028887608243LLU;
int64_t x792 = INT64_MIN;
volatile int32_t t118 = -2;
int8_t x795 = INT8_MIN;
uint64_t x805 = UINT64_MAX;
static int8_t x814 = INT8_MAX;
volatile uint32_t x815 = 90U;
uint64_t x821 = 2840859158LLU;
volatile uint32_t t127 = 759U;
int8_t x851 = INT8_MAX;
static volatile int8_t x852 = INT8_MIN;
uint8_t x880 = 13U;
static int16_t x893 = INT16_MIN;
int32_t t135 = -27142561;
int16_t x910 = INT16_MAX;
static volatile uint16_t x923 = UINT16_MAX;
int32_t t141 = 2520;
static volatile int64_t t142 = INT64_MAX;
volatile int16_t x939 = -1;
int16_t x947 = -1;
static int16_t x961 = -42;
int8_t x962 = -3;
static int32_t x973 = -1;
uint32_t x982 = 61393604U;
int32_t x989 = 3522152;
volatile int32_t t153 = -1490129;
int32_t x993 = -1;
static int64_t x1013 = INT64_MAX;
volatile int16_t x1015 = 4;
int32_t x1047 = INT32_MIN;
volatile uint32_t x1050 = UINT32_MAX;
int64_t x1057 = -536LL;
int16_t x1060 = -1;
volatile int16_t x1067 = -7;
int32_t t165 = 1;
static int32_t x1074 = -1233334;
int32_t x1081 = INT32_MIN;
int8_t x1082 = -1;
static volatile int32_t t169 = 1091631;
static int8_t x1103 = INT8_MIN;
volatile int64_t x1104 = INT64_MIN;
volatile int32_t x1124 = INT32_MIN;
static int16_t x1134 = INT16_MIN;
uint32_t x1136 = 43083U;
volatile int64_t t179 = -521452LL;
volatile uint8_t x1137 = 17U;
int8_t x1139 = INT8_MIN;
volatile int16_t x1149 = INT16_MAX;
uint32_t x1150 = UINT32_MAX;
int8_t x1151 = INT8_MIN;
volatile int16_t x1157 = INT16_MIN;
int16_t x1176 = INT16_MAX;
uint64_t x1181 = 261839338LLU;
static volatile uint32_t x1184 = 533226U;
uint64_t t187 = 193480365391LLU;
int16_t x1190 = INT16_MAX;
int16_t x1203 = -1;
uint64_t t190 = 46276LLU;
int16_t x1236 = INT16_MAX;
static int32_t t195 = INT32_MAX;
uint32_t x1250 = UINT32_MAX;
static int64_t t199 = -180189LL;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile uint16_t x3 = 11U;
	static uint64_t x4 = 9214450517LLU;
	static volatile int64_t t0 = 82332733667823715LL;

    t0 = ((x1^x2)>>(x3>x4));

    if (t0 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint64_t x6 = 6953220LLU;
	int64_t x7 = -1LL;
	volatile uint64_t t1 = 5871132938939875265LLU;

    t1 = ((x5^x6)>>(x7>x8));

    if (t1 != 3486589LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 223LLU;
	int32_t x10 = INT32_MAX;
	int8_t x11 = INT8_MIN;
	uint64_t x12 = 3261007431LLU;
	static volatile uint64_t t2 = 8560165864057455LLU;

    t2 = ((x9^x10)>>(x11>x12));

    if (t2 != 1073741712LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x14 = 49588526937802LLU;
	uint16_t x15 = 2U;
	volatile uint64_t t3 = 176723LLU;

    t3 = ((x13^x14)>>(x15>x16));

    if (t3 != 4611710812690856805LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 0;
	static uint8_t x18 = UINT8_MAX;
	static uint32_t x19 = 326U;
	static volatile int32_t t4 = -7772451;

    t4 = ((x17^x18)>>(x19>x20));

    if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x45 = -6;
	volatile int64_t x46 = -1LL;
	uint64_t x47 = 3537017624LLU;
	int64_t x48 = INT64_MIN;
	int64_t t5 = -11704371281282633LL;

    t5 = ((x45^x46)>>(x47>x48));

    if (t5 != 5LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x54 = UINT32_MAX;
	int32_t x55 = INT32_MAX;
	uint32_t t6 = 643898746U;

    t6 = ((x53^x54)>>(x55>x56));

    if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x57 = 1663641757U;
	int32_t x58 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	uint32_t t7 = 3406064U;

    t7 = ((x57^x58)>>(x59>x60));

    if (t7 != 483841890U) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x61 = -1;
	static int64_t x62 = INT64_MIN;
	int8_t x63 = -1;
	int8_t x64 = -1;
	static volatile int64_t t8 = INT64_MAX;

    t8 = ((x61^x62)>>(x63>x64));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int64_t x65 = -28948061268LL;
	static int16_t x67 = -45;
	uint64_t x68 = 690085239736940884LLU;
	static volatile int64_t t9 = 282376LL;

    t9 = ((x65^x66)>>(x67>x68));

    if (t9 != 14474030614LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x73 = 0;
	uint32_t x75 = 12U;
	uint8_t x76 = 16U;

    t10 = ((x73^x74)>>(x75>x76));

    if (t10 != 248) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x77 = INT16_MIN;
	uint16_t x79 = 3180U;
	static uint32_t x80 = 24U;

    t11 = ((x77^x78)>>(x79>x80));

    if (t11 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int8_t x97 = -15;
	int8_t x98 = -1;
	volatile int8_t x99 = INT8_MAX;
	static uint8_t x100 = 7U;
	static int32_t t12 = 50;

    t12 = ((x97^x98)>>(x99>x100));

    if (t12 != 7) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x105 = 108U;
	uint32_t x106 = 113U;
	uint64_t x107 = 271383023182262LLU;
	int8_t x108 = -1;
	volatile uint32_t t13 = 2U;

    t13 = ((x105^x106)>>(x107>x108));

    if (t13 != 29U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x121 = 0U;
	int16_t x122 = -1;
	static int16_t x123 = INT16_MAX;
	int32_t x124 = INT32_MIN;
	uint32_t t14 = 783961662U;

    t14 = ((x121^x122)>>(x123>x124));

    if (t14 != 2147483647U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x125 = -1;
	uint32_t x126 = 1564834864U;
	volatile uint32_t t15 = 1826096982U;

    t15 = ((x125^x126)>>(x127>x128));

    if (t15 != 2730132431U) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x129 = -811051358;
	uint32_t x131 = UINT32_MAX;
	int64_t x132 = INT64_MIN;
	volatile uint64_t t16 = 398869445245LLU;

    t16 = ((x129^x130)>>(x131>x132));

    if (t16 != 9223372036529484248LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x133 = INT16_MIN;
	int16_t x135 = INT16_MAX;
	volatile int64_t t17 = 1931193585805LL;

    t17 = ((x133^x134)>>(x135>x136));

    if (t17 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x138 = INT64_MIN;
	static int64_t t18 = -92808845LL;

    t18 = ((x137^x138)>>(x139>x140));

    if (t18 != 9223372036854768887LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x153 = 4654703006582858036LLU;
	static int64_t x154 = INT64_MIN;
	int64_t x155 = -14699268907LL;
	int8_t x156 = 6;
	volatile uint64_t t19 = 17376526806LLU;

    t19 = ((x153^x154)>>(x155>x156));

    if (t19 != 13878075043437633844LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = 7U;
	int32_t x163 = INT32_MIN;
	static int8_t x164 = INT8_MAX;
	uint32_t t20 = 16207246U;

    t20 = ((x161^x162)>>(x163>x164));

    if (t20 != 248U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x165 = UINT16_MAX;
	volatile int8_t x166 = INT8_MAX;
	int64_t x167 = 4842719200LL;
	int16_t x168 = INT16_MIN;
	volatile int32_t t21 = -1;

    t21 = ((x165^x166)>>(x167>x168));

    if (t21 != 32704) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x172 = 68U;
	int64_t t22 = -129832031391LL;

    t22 = ((x169^x170)>>(x171>x172));

    if (t22 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x177 = 260115328U;
	static int16_t x179 = -1;
	uint16_t x180 = 242U;
	uint32_t t23 = 1456U;

    t23 = ((x177^x178)>>(x179>x180));

    if (t23 != 260115455U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x181 = 815153356368LLU;
	uint16_t x182 = 3733U;
	int64_t x183 = INT64_MIN;
	static uint64_t t24 = 44LLU;

    t24 = ((x181^x182)>>(x183>x184));

    if (t24 != 815153352901LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x186 = 4U;
	int64_t x187 = INT64_MAX;

    t25 = ((x185^x186)>>(x187>x188));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x194 = -1;
	static int16_t x196 = INT16_MIN;
	volatile uint64_t t26 = 389757039LLU;

    t26 = ((x193^x194)>>(x195>x196));

    if (t26 != 9223372036854762476LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x197 = -203621537;
	volatile uint64_t x199 = 32560222926524594LLU;
	int64_t x200 = INT64_MAX;
	int32_t t27 = 11878567;

    t27 = ((x197^x198)>>(x199>x200));

    if (t27 != 1943862111) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x201 = INT64_MAX;
	uint64_t x202 = 866324221960902LLU;
	int64_t x203 = INT64_MAX;
	volatile uint64_t t28 = 2114654052042987LLU;

    t28 = ((x201^x202)>>(x203>x204));

    if (t28 != 4611252856316407452LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x205 = -1;
	static int16_t x208 = INT16_MIN;
	volatile uint32_t t29 = 83U;

    t29 = ((x205^x206)>>(x207>x208));

    if (t29 != 4294952910U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x214 = 97709907U;
	int32_t x216 = INT32_MIN;

    t30 = ((x213^x214)>>(x215>x216));

    if (t30 != 48854944U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x217 = 18U;
	uint32_t x219 = 52171U;
	int8_t x220 = -2;
	volatile int64_t t31 = 5701LL;

    t31 = ((x217^x218)>>(x219>x220));

    if (t31 != 641963684LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x221 = 1279U;
	uint32_t x222 = UINT32_MAX;
	static volatile uint8_t x223 = UINT8_MAX;

    t32 = ((x221^x222)>>(x223>x224));

    if (t32 != 2147483008U) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MAX;
	volatile int32_t t33 = -5;

    t33 = ((x225^x226)>>(x227>x228));

    if (t33 != 1073725440) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x229 = -106;
	int64_t x231 = -3003831LL;
	int8_t x232 = -1;
	uint32_t t34 = 3941030U;

    t34 = ((x229^x230)>>(x231>x232));

    if (t34 != 105U) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x233 = INT32_MIN;
	static int64_t x234 = -162534LL;
	int16_t x235 = INT16_MIN;
	uint16_t x236 = UINT16_MAX;
	volatile int64_t t35 = 8LL;

    t35 = ((x233^x234)>>(x235>x236));

    if (t35 != 2147321114LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MIN;
	int64_t x240 = INT64_MIN;
	static int32_t t36 = -1;

    t36 = ((x237^x238)>>(x239>x240));

    if (t36 != 16320) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x241 = 0U;
	int16_t x243 = INT16_MIN;
	int32_t x244 = -1;

    t37 = ((x241^x242)>>(x243>x244));

    if (t37 != 9794708266320LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x246 = UINT16_MAX;
	int16_t x247 = -1;
	uint32_t x248 = UINT32_MAX;
	volatile int32_t t38 = -652085598;

    t38 = ((x245^x246)>>(x247>x248));

    if (t38 != 56247) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x250 = 22U;
	int32_t x251 = INT32_MAX;
	int8_t x252 = INT8_MIN;
	int32_t t39 = -26201;

    t39 = ((x249^x250)>>(x251>x252));

    if (t39 != 46) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x253 = 12485;
	uint16_t x254 = UINT16_MAX;
	int64_t x255 = -1LL;
	int32_t x256 = -2823;
	static volatile int32_t t40 = 117000;

    t40 = ((x253^x254)>>(x255>x256));

    if (t40 != 26525) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x257 = 43162226LLU;
	int64_t x258 = INT64_MIN;
	int64_t x259 = -1LL;
	volatile int8_t x260 = INT8_MIN;
	uint64_t t41 = 1042765LLU;

    t41 = ((x257^x258)>>(x259>x260));

    if (t41 != 4611686018448969017LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	uint16_t x267 = 723U;
	int32_t x268 = INT32_MAX;
	static volatile uint64_t t42 = 306515913290LLU;

    t42 = ((x265^x266)>>(x267>x268));

    if (t42 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x269 = -3728;
	int16_t x270 = -1;
	int32_t x271 = 821;
	volatile int32_t t43 = -201113255;

    t43 = ((x269^x270)>>(x271>x272));

    if (t43 != 1863) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x277 = UINT8_MAX;
	uint32_t x278 = 14372147U;
	static uint32_t t44 = 26U;

    t44 = ((x277^x278)>>(x279>x280));

    if (t44 != 7186150U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x283 = INT64_MIN;
	static int16_t x284 = -1;
	volatile int64_t t45 = 913641LL;

    t45 = ((x281^x282)>>(x283>x284));

    if (t45 != 9223372036682557441LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x286 = INT64_MIN;
	int8_t x287 = -1;
	volatile int8_t x288 = 29;

    t46 = ((x285^x286)>>(x287>x288));

    if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x289 = 7U;
	uint64_t x290 = UINT64_MAX;
	int32_t x291 = -1;
	static int32_t x292 = INT32_MIN;
	volatile uint64_t t47 = 68255268536654LLU;

    t47 = ((x289^x290)>>(x291>x292));

    if (t47 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x301 = 31859485970135LLU;
	uint32_t x302 = 1442U;
	int16_t x303 = -37;
	int16_t x304 = 43;
	uint64_t t48 = 3108853411679729LLU;

    t48 = ((x301^x302)>>(x303>x304));

    if (t48 != 31859485969269LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x306 = 1437U;
	uint8_t x307 = 29U;
	uint16_t x308 = 685U;
	uint32_t t49 = 7369U;

    t49 = ((x305^x306)>>(x307>x308));

    if (t49 != 4294935965U) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x313 = INT64_MIN;
	uint64_t x314 = 847749LLU;
	uint16_t x315 = 3U;
	static volatile uint64_t t50 = 103963LLU;

    t50 = ((x313^x314)>>(x315>x316));

    if (t50 != 4611686018427811778LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x317 = -1LL;
	static int8_t x318 = -10;
	uint16_t x319 = 4534U;
	static int64_t x320 = 2784LL;
	volatile int64_t t51 = -4394390066640LL;

    t51 = ((x317^x318)>>(x319>x320));

    if (t51 != 4LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x334 = UINT64_MAX;
	uint8_t x335 = 0U;

    t52 = ((x333^x334)>>(x335>x336));

    if (t52 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x338 = INT8_MAX;
	int16_t x339 = 6;
	static int32_t x340 = -5336942;

    t53 = ((x337^x338)>>(x339>x340));

    if (t53 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x341 = UINT8_MAX;
	int8_t x343 = INT8_MAX;
	int64_t x344 = INT64_MIN;
	int32_t t54 = 149841;

    t54 = ((x341^x342)>>(x343>x344));

    if (t54 != 4982) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x345 = INT32_MIN;
	static volatile int16_t x348 = INT16_MIN;
	volatile uint64_t t55 = 2066966LLU;

    t55 = ((x345^x346)>>(x347>x348));

    if (t55 != 9223371598358621506LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x353 = 10U;
	uint64_t x354 = 27180968704409087LLU;
	int32_t x356 = -1;
	uint64_t t56 = 1336859155418LLU;

    t56 = ((x353^x354)>>(x355>x356));

    if (t56 != 13590484352204538LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x361 = -1;
	volatile int32_t x362 = -1;
	volatile int8_t x363 = INT8_MIN;
	volatile int16_t x364 = -1;
	static volatile int32_t t57 = 437;

    t57 = ((x361^x362)>>(x363>x364));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x365 = -1;
	uint64_t x366 = UINT64_MAX;
	int32_t x367 = -1;
	int32_t x368 = 1;
	static volatile uint64_t t58 = 0LLU;

    t58 = ((x365^x366)>>(x367>x368));

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x389 = INT32_MIN;
	static int8_t x390 = -5;
	int16_t x391 = INT16_MAX;
	int32_t t59 = -66;

    t59 = ((x389^x390)>>(x391>x392));

    if (t59 != 1073741821) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int64_t x394 = -5809LL;
	volatile uint8_t x395 = 0U;
	int32_t x396 = -2360;
	static volatile int64_t t60 = 4513664629LL;

    t60 = ((x393^x394)>>(x395>x396));

    if (t60 != 2907LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	int64_t x399 = INT64_MIN;
	int64_t x400 = -1LL;

    t61 = ((x397^x398)>>(x399>x400));

    if (t61 != 2147450880) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x401 = 6025U;
	int32_t x402 = INT32_MAX;
	static int8_t x403 = INT8_MAX;
	uint64_t x404 = 32LLU;
	volatile int32_t t62 = -15458;

    t62 = ((x401^x402)>>(x403>x404));

    if (t62 != 1073738811) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x409 = 1166U;
	static int16_t x410 = INT16_MIN;
	static volatile int64_t x411 = -1LL;
	uint64_t x412 = UINT64_MAX;
	uint32_t t63 = 202484749U;

    t63 = ((x409^x410)>>(x411>x412));

    if (t63 != 4294935694U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x414 = INT16_MAX;
	int8_t x415 = -1;
	static volatile int32_t t64 = 2272;

    t64 = ((x413^x414)>>(x415>x416));

    if (t64 != 1073725440) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x421 = 262746714708789LLU;
	int32_t x422 = 1;
	int16_t x424 = 14384;
	volatile uint64_t t65 = 296266515615LLU;

    t65 = ((x421^x422)>>(x423>x424));

    if (t65 != 262746714708788LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x425 = -29;
	static int8_t x426 = -1;
	static volatile int8_t x427 = INT8_MIN;
	uint16_t x428 = UINT16_MAX;

    t66 = ((x425^x426)>>(x427>x428));

    if (t66 != 28) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x437 = -1;
	int32_t x438 = -48159988;
	int16_t x440 = -794;

    t67 = ((x437^x438)>>(x439>x440));

    if (t67 != 24079993) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x442 = 7192U;
	volatile int64_t x443 = -1LL;
	uint8_t x444 = 1U;
	int32_t t68 = 7693;

    t68 = ((x441^x442)>>(x443>x444));

    if (t68 != 58343) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x445 = INT8_MAX;
	static int32_t x446 = INT32_MAX;

    t69 = ((x445^x446)>>(x447>x448));

    if (t69 != 1073741760) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int16_t x461 = INT16_MIN;
	static uint32_t x462 = 2450U;
	uint32_t x463 = UINT32_MAX;
	uint32_t x464 = UINT32_MAX;
	static uint32_t t70 = 235152U;

    t70 = ((x461^x462)>>(x463>x464));

    if (t70 != 4294936978U) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x465 = UINT8_MAX;
	uint8_t x468 = 0U;
	uint64_t t71 = 35053350989458173LLU;

    t71 = ((x465^x466)>>(x467>x468));

    if (t71 != 352LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x481 = UINT8_MAX;
	uint16_t x482 = 0U;
	int32_t x484 = -1;
	volatile int32_t t72 = 74735;

    t72 = ((x481^x482)>>(x483>x484));

    if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x485 = -1;
	int64_t x486 = -1643LL;
	volatile uint16_t x487 = UINT16_MAX;
	int64_t x488 = INT64_MAX;
	int64_t t73 = -1928725916LL;

    t73 = ((x485^x486)>>(x487>x488));

    if (t73 != 1642LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x492 = -1;
	int32_t t74 = 40226;

    t74 = ((x489^x490)>>(x491>x492));

    if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x498 = INT16_MAX;
	static volatile int32_t x499 = 0;

    t75 = ((x497^x498)>>(x499>x500));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x505 = INT16_MIN;
	int8_t x507 = INT8_MIN;
	int16_t x508 = INT16_MIN;
	static volatile int32_t t76 = -300;

    t76 = ((x505^x506)>>(x507>x508));

    if (t76 != 16383) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x509 = -13;
	static int16_t x511 = 551;
	uint32_t x512 = 25477U;
	uint32_t t77 = 3U;

    t77 = ((x509^x510)>>(x511>x512));

    if (t77 != 4292768238U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x515 = 6574U;
	static int8_t x516 = 18;
	int64_t t78 = 4330579647749680730LL;

    t78 = ((x513^x514)>>(x515>x516));

    if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x517 = UINT32_MAX;
	uint64_t x518 = 562880472LLU;
	uint16_t x519 = 5U;
	int64_t x520 = INT64_MIN;

    t79 = ((x517^x518)>>(x519>x520));

    if (t79 != 1866043411LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x521 = 4U;
	uint16_t x522 = 11426U;
	uint16_t x523 = 11U;
	static int64_t x524 = INT64_MIN;
	static int32_t t80 = 94;

    t80 = ((x521^x522)>>(x523>x524));

    if (t80 != 5715) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x526 = INT8_MAX;
	uint32_t x527 = 406330U;

    t81 = ((x525^x526)>>(x527>x528));

    if (t81 != 113) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x537 = 323737457737LLU;
	int32_t x538 = -386945914;
	int16_t x540 = 0;

    t82 = ((x537^x538)>>(x539>x540));

    if (t82 != 9223371874792578151LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x541 = 201758347676580LLU;
	volatile uint16_t x542 = UINT16_MAX;
	volatile int64_t x543 = -66856841381158509LL;
	uint64_t t83 = 5779447994LLU;

    t83 = ((x541^x542)>>(x543>x544));

    if (t83 != 201758347637851LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x545 = INT16_MIN;
	volatile uint8_t x547 = UINT8_MAX;
	uint32_t x548 = 2287U;
	int32_t t84 = 20245;

    t84 = ((x545^x546)>>(x547>x548));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x549 = 371229373U;
	volatile int64_t x550 = INT64_MAX;
	uint16_t x551 = 1U;
	int64_t x552 = 18068112472LL;
	volatile int64_t t85 = 22313234LL;

    t85 = ((x549^x550)>>(x551>x552));

    if (t85 != 9223372036483546434LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x553 = 822653702472290LLU;
	int32_t x554 = -1;
	static int16_t x555 = -1;
	int16_t x556 = INT16_MAX;

    t86 = ((x553^x554)>>(x555>x556));

    if (t86 != 18445921420007079325LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x557 = 1449LLU;
	uint8_t x558 = 1U;
	int64_t x559 = INT64_MIN;
	uint64_t t87 = 14004LLU;

    t87 = ((x557^x558)>>(x559>x560));

    if (t87 != 724LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MIN;
	volatile int64_t x567 = -1031LL;
	int16_t x568 = INT16_MAX;
	volatile int32_t t88 = 77776982;

    t88 = ((x565^x566)>>(x567>x568));

    if (t88 != 2147450880) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x569 = 0;
	uint8_t x570 = 0U;
	uint8_t x571 = 8U;
	int16_t x572 = INT16_MIN;
	static int32_t t89 = -582680;

    t89 = ((x569^x570)>>(x571>x572));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x581 = -37392357;
	int8_t x582 = INT8_MIN;
	int64_t x583 = INT64_MIN;
	volatile uint64_t x584 = 880760372630LLU;
	int32_t t90 = -16431014;

    t90 = ((x581^x582)>>(x583>x584));

    if (t90 != 18696141) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x585 = -1;
	volatile uint64_t x586 = 29635522LLU;
	uint64_t x588 = UINT64_MAX;
	uint64_t t91 = 12519258105491179LLU;

    t91 = ((x585^x586)>>(x587>x588));

    if (t91 != 18446744073679916093LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x597 = -1;
	static int16_t x598 = -1;
	int64_t x599 = -717LL;
	volatile int32_t x600 = -118931661;
	int32_t t92 = -51112;

    t92 = ((x597^x598)>>(x599>x600));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x613 = INT8_MIN;
	volatile uint32_t x614 = UINT32_MAX;
	int16_t x615 = -1;
	volatile uint8_t x616 = UINT8_MAX;
	uint32_t t93 = 12999817U;

    t93 = ((x613^x614)>>(x615>x616));

    if (t93 != 127U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x617 = UINT32_MAX;
	uint32_t x618 = 105U;
	volatile int16_t x619 = 124;
	int64_t x620 = INT64_MAX;
	volatile uint32_t t94 = 3U;

    t94 = ((x617^x618)>>(x619>x620));

    if (t94 != 4294967190U) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x629 = -1;
	volatile int8_t x631 = INT8_MIN;
	static uint16_t x632 = 957U;
	volatile uint32_t t95 = 978U;

    t95 = ((x629^x630)>>(x631>x632));

    if (t95 != 4294966854U) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x633 = 1;
	uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MIN;
	int32_t x636 = INT32_MIN;
	volatile uint64_t t96 = 5636330LLU;

    t96 = ((x633^x634)>>(x635>x636));

    if (t96 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x637 = 4U;
	int64_t x639 = -1LL;
	int32_t t97 = 1141;

    t97 = ((x637^x638)>>(x639>x640));

    if (t97 != 1073741821) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x650 = 6941U;
	volatile int32_t x651 = -1;
	int8_t x652 = -1;
	volatile uint32_t t98 = 4429U;

    t98 = ((x649^x650)>>(x651>x652));

    if (t98 != 7038U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x654 = INT8_MIN;
	static int32_t x655 = 145264624;
	int8_t x656 = -1;
	static volatile int64_t t99 = -255609704255192518LL;

    t99 = ((x653^x654)>>(x655>x656));

    if (t99 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x657 = INT8_MIN;
	volatile uint8_t x659 = 51U;
	static volatile int64_t t100 = -51185079LL;

    t100 = ((x657^x658)>>(x659>x660));

    if (t100 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x666 = INT64_MIN;
	int64_t x667 = -157494266065764949LL;
	volatile int64_t t101 = INT64_MAX;

    t101 = ((x665^x666)>>(x667>x668));

    if (t101 != INT64_MAX) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x677 = UINT64_MAX;
	uint16_t x678 = UINT16_MAX;
	static int16_t x679 = INT16_MIN;
	volatile uint64_t x680 = 107206441696LLU;
	uint64_t t102 = 1234400845634LLU;

    t102 = ((x677^x678)>>(x679>x680));

    if (t102 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x685 = -1;
	uint32_t x686 = 130997U;
	int16_t x687 = INT16_MIN;
	int8_t x688 = -1;
	volatile uint32_t t103 = 212038U;

    t103 = ((x685^x686)>>(x687>x688));

    if (t103 != 4294836298U) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x689 = INT32_MAX;
	uint16_t x690 = UINT16_MAX;
	int64_t x691 = 4LL;
	int64_t x692 = -1LL;
	volatile int32_t t104 = -196;

    t104 = ((x689^x690)>>(x691>x692));

    if (t104 != 1073709056) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x709 = 32018U;
	uint64_t x710 = UINT64_MAX;
	int16_t x711 = INT16_MIN;
	volatile uint8_t x712 = UINT8_MAX;

    t105 = ((x709^x710)>>(x711>x712));

    if (t105 != 18446744073709519597LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x725 = INT64_MIN;
	volatile uint64_t x726 = 979188499927LLU;
	int8_t x728 = INT8_MIN;

    t106 = ((x725^x726)>>(x727>x728));

    if (t106 != 4611686508021637867LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x733 = UINT32_MAX;
	static uint32_t x734 = 4467U;
	uint64_t x735 = 3844LLU;
	volatile uint8_t x736 = 14U;
	uint32_t t107 = 104469125U;

    t107 = ((x733^x734)>>(x735>x736));

    if (t107 != 2147481414U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x737 = 1;
	static int8_t x738 = 0;
	uint16_t x739 = 5U;
	volatile int16_t x740 = INT16_MIN;
	int32_t t108 = -857463;

    t108 = ((x737^x738)>>(x739>x740));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static int32_t x741 = -1;
	volatile int8_t x742 = INT8_MIN;
	static int8_t x743 = INT8_MIN;
	int32_t t109 = 2444;

    t109 = ((x741^x742)>>(x743>x744));

    if (t109 != 127) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x750 = INT64_MIN;
	static int64_t x751 = 9528675152LL;
	static int64_t x752 = INT64_MIN;
	int64_t t110 = -3383242LL;

    t110 = ((x749^x750)>>(x751>x752));

    if (t110 != 4611686018427387840LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x757 = 7U;
	int8_t x758 = 1;
	uint8_t x759 = UINT8_MAX;
	volatile int32_t x760 = INT32_MIN;
	volatile uint32_t t111 = 2U;

    t111 = ((x757^x758)>>(x759>x760));

    if (t111 != 3U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x761 = -1;
	int8_t x762 = INT8_MIN;
	uint32_t x763 = 58391U;
	uint8_t x764 = 123U;

    t112 = ((x761^x762)>>(x763>x764));

    if (t112 != 63) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x765 = 2U;
	static uint64_t x767 = 3812223168LLU;
	static uint16_t x768 = 1U;
	uint32_t t113 = 229408945U;

    t113 = ((x765^x766)>>(x767>x768));

    if (t113 != 1073741825U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x769 = 0U;
	volatile int32_t x770 = INT32_MAX;
	int64_t x771 = INT64_MAX;
	int32_t t114 = -6;

    t114 = ((x769^x770)>>(x771>x772));

    if (t114 != 1073741823) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x773 = INT8_MAX;
	uint32_t x774 = 15743447U;
	int8_t x775 = 9;
	uint32_t t115 = 34324U;

    t115 = ((x773^x774)>>(x775>x776));

    if (t115 != 15743400U) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x777 = 241LLU;
	static int32_t x778 = INT32_MAX;
	uint32_t x779 = UINT32_MAX;
	uint64_t t116 = 1501LLU;

    t116 = ((x777^x778)>>(x779>x780));

    if (t116 != 2147483406LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x785 = -1;
	static uint64_t x786 = UINT64_MAX;
	uint16_t x787 = UINT16_MAX;
	uint32_t x788 = UINT32_MAX;
	static volatile uint64_t t117 = 34248567111009015LLU;

    t117 = ((x785^x786)>>(x787>x788));

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x789 = 199309;
	int8_t x790 = 3;
	int64_t x791 = INT64_MIN;

    t118 = ((x789^x790)>>(x791>x792));

    if (t118 != 199310) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x793 = INT32_MAX;
	static volatile int16_t x794 = 21;
	int32_t x796 = 6558920;
	volatile int32_t t119 = 867;

    t119 = ((x793^x794)>>(x795>x796));

    if (t119 != 2147483626) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x797 = UINT16_MAX;
	uint8_t x798 = 5U;
	int64_t x799 = -1LL;
	uint64_t x800 = UINT64_MAX;
	static int32_t t120 = 2;

    t120 = ((x797^x798)>>(x799>x800));

    if (t120 != 65530) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x806 = INT64_MIN;
	static int8_t x807 = 1;
	uint8_t x808 = 1U;
	static uint64_t t121 = 886634522LLU;

    t121 = ((x805^x806)>>(x807>x808));

    if (t121 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x809 = UINT64_MAX;
	volatile int8_t x810 = -1;
	int16_t x811 = INT16_MIN;
	static int64_t x812 = INT64_MIN;
	static volatile uint64_t t122 = 4124569731LLU;

    t122 = ((x809^x810)>>(x811>x812));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x813 = INT16_MAX;
	static uint8_t x816 = UINT8_MAX;
	int32_t t123 = 597196669;

    t123 = ((x813^x814)>>(x815>x816));

    if (t123 != 32640) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x822 = INT8_MIN;
	int64_t x823 = -1168LL;
	int32_t x824 = INT32_MIN;
	volatile uint64_t t124 = 27650361044918736LLU;

    t124 = ((x821^x822)>>(x823>x824));

    if (t124 != 9223372035434346187LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x825 = 5108012;
	volatile uint16_t x826 = 99U;
	uint32_t x827 = 257002037U;
	volatile int64_t x828 = INT64_MAX;
	volatile int32_t t125 = -28951991;

    t125 = ((x825^x826)>>(x827>x828));

    if (t125 != 5108047) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x829 = INT16_MIN;
	volatile int16_t x830 = INT16_MIN;
	int64_t x831 = INT64_MIN;
	uint64_t x832 = 171260345LLU;
	int32_t t126 = -15962213;

    t126 = ((x829^x830)>>(x831>x832));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x833 = 0U;
	int32_t x834 = INT32_MIN;
	uint64_t x835 = 1029418LLU;
	uint8_t x836 = UINT8_MAX;

    t127 = ((x833^x834)>>(x835>x836));

    if (t127 != 1073741824U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x837 = INT16_MIN;
	int64_t x838 = INT64_MIN;
	int8_t x839 = INT8_MIN;
	volatile int32_t x840 = -373349;
	volatile int64_t t128 = -3426324904545LL;

    t128 = ((x837^x838)>>(x839>x840));

    if (t128 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x841 = 16906395139556LLU;
	int8_t x842 = INT8_MIN;
	uint32_t x843 = 1453886U;
	volatile int32_t x844 = 378697290;
	uint64_t t129 = 771795LLU;

    t129 = ((x841^x842)>>(x843>x844));

    if (t129 != 18446727167314412132LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint32_t x849 = 280394660U;
	int8_t x850 = INT8_MAX;
	uint32_t t130 = 915U;

    t130 = ((x849^x850)>>(x851>x852));

    if (t130 != 140197357U) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x857 = 1;
	uint64_t x858 = UINT64_MAX;
	static volatile int16_t x859 = 2291;
	int64_t x860 = INT64_MIN;
	static volatile uint64_t t131 = 9268068275684LLU;

    t131 = ((x857^x858)>>(x859>x860));

    if (t131 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x861 = UINT16_MAX;
	int64_t x862 = INT64_MAX;
	int32_t x863 = -1;
	volatile int8_t x864 = 5;
	static int64_t t132 = -14087998428406037LL;

    t132 = ((x861^x862)>>(x863>x864));

    if (t132 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x873 = 1044460000546857LLU;
	uint16_t x874 = 187U;
	int8_t x875 = INT8_MIN;
	int16_t x876 = 14;
	uint64_t t133 = 6870LLU;

    t133 = ((x873^x874)>>(x875>x876));

    if (t133 != 1044460000546962LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x877 = INT64_MAX;
	static int64_t x878 = INT64_MAX;
	uint32_t x879 = 175564U;
	static volatile int64_t t134 = -125625242074122565LL;

    t134 = ((x877^x878)>>(x879>x880));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x894 = -1;
	int32_t x895 = INT32_MAX;
	uint32_t x896 = 6U;

    t135 = ((x893^x894)>>(x895>x896));

    if (t135 != 16383) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x897 = 14243568LLU;
	static int64_t x898 = INT64_MIN;
	int64_t x899 = -1LL;
	int32_t x900 = -458;
	volatile uint64_t t136 = 1054106288957569527LLU;

    t136 = ((x897^x898)>>(x899>x900));

    if (t136 != 4611686018434509688LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x905 = 133898;
	uint16_t x906 = UINT16_MAX;
	int8_t x907 = INT8_MAX;
	int16_t x908 = 0;
	static int32_t t137 = 0;

    t137 = ((x905^x906)>>(x907>x908));

    if (t137 != 96890) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x909 = 64U;
	uint32_t x911 = 2880408U;
	int64_t x912 = INT64_MIN;
	volatile int32_t t138 = -800;

    t138 = ((x909^x910)>>(x911>x912));

    if (t138 != 16351) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x913 = 3151055U;
	static int16_t x914 = INT16_MAX;
	static int16_t x915 = INT16_MIN;
	uint16_t x916 = 1U;
	volatile uint32_t t139 = 165U;

    t139 = ((x913^x914)>>(x915>x916));

    if (t139 != 3173168U) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x921 = UINT32_MAX;
	int32_t x922 = INT32_MIN;
	int16_t x924 = 1;
	uint32_t t140 = 28025U;

    t140 = ((x921^x922)>>(x923>x924));

    if (t140 != 1073741823U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x929 = 2U;
	uint8_t x930 = UINT8_MAX;
	uint16_t x931 = 1U;
	static int8_t x932 = 2;

    t141 = ((x929^x930)>>(x931>x932));

    if (t141 != 253) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x933 = -1;
	int64_t x934 = INT64_MIN;
	uint8_t x935 = 30U;
	volatile int32_t x936 = 2068;

    t142 = ((x933^x934)>>(x935>x936));

    if (t142 != INT64_MAX) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x937 = 222;
	volatile uint16_t x938 = 277U;
	static int32_t x940 = -15356978;
	volatile int32_t t143 = -15596515;

    t143 = ((x937^x938)>>(x939>x940));

    if (t143 != 229) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x945 = INT32_MIN;
	uint64_t x946 = UINT64_MAX;
	uint16_t x948 = 2340U;
	uint64_t t144 = 2944290847443062059LLU;

    t144 = ((x945^x946)>>(x947>x948));

    if (t144 != 2147483647LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x949 = INT64_MAX;
	uint64_t x950 = 3LLU;
	uint32_t x951 = 382547U;
	volatile int64_t x952 = 2912716024153LL;
	volatile uint64_t t145 = 8706996LLU;

    t145 = ((x949^x950)>>(x951>x952));

    if (t145 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x953 = -1;
	int16_t x954 = INT16_MIN;
	int16_t x955 = 2;
	int8_t x956 = -1;
	volatile int32_t t146 = -3523;

    t146 = ((x953^x954)>>(x955>x956));

    if (t146 != 16383) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x963 = INT8_MIN;
	int16_t x964 = INT16_MAX;
	volatile int32_t t147 = -1;

    t147 = ((x961^x962)>>(x963>x964));

    if (t147 != 43) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x969 = INT16_MIN;
	volatile int64_t x970 = INT64_MIN;
	volatile int64_t x971 = 2100664LL;
	volatile uint16_t x972 = UINT16_MAX;
	static volatile int64_t t148 = -2512LL;

    t148 = ((x969^x970)>>(x971>x972));

    if (t148 != 4611686018427371520LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x974 = -1;
	uint16_t x975 = 333U;
	uint64_t x976 = 0LLU;
	static volatile int32_t t149 = -84;

    t149 = ((x973^x974)>>(x975>x976));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x977 = 1460885LLU;
	int32_t x978 = INT32_MIN;
	uint16_t x979 = 1U;
	static int16_t x980 = -1;
	static volatile uint64_t t150 = 13150221LLU;

    t150 = ((x977^x978)>>(x979>x980));

    if (t150 != 9223372035781764426LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x981 = -1;
	static uint8_t x983 = 1U;
	int64_t x984 = INT64_MIN;
	uint32_t t151 = 15U;

    t151 = ((x981^x982)>>(x983>x984));

    if (t151 != 2116786845U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x985 = 29U;
	int32_t x986 = 557390;
	static uint32_t x987 = 182U;
	int64_t x988 = -331LL;
	int32_t t152 = 170606836;

    t152 = ((x985^x986)>>(x987>x988));

    if (t152 != 278697) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x990 = UINT16_MAX;
	static int64_t x991 = -100LL;
	int64_t x992 = INT64_MIN;

    t153 = ((x989^x990)>>(x991>x992));

    if (t153 != 1745099) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x994 = -1;
	int16_t x995 = -1;
	uint32_t x996 = UINT32_MAX;
	int32_t t154 = -1;

    t154 = ((x993^x994)>>(x995>x996));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1005 = 53175LL;
	int32_t x1006 = INT32_MAX;
	int64_t x1007 = INT64_MAX;
	int16_t x1008 = -1;
	int64_t t155 = -68635152594LL;

    t155 = ((x1005^x1006)>>(x1007>x1008));

    if (t155 != 1073715236LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1009 = UINT32_MAX;
	uint32_t x1010 = 47353781U;
	int8_t x1011 = INT8_MIN;
	int64_t x1012 = -3127026624240999LL;
	volatile uint32_t t156 = 19557U;

    t156 = ((x1009^x1010)>>(x1011>x1012));

    if (t156 != 2123806757U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1014 = INT32_MAX;
	int8_t x1016 = INT8_MIN;
	volatile int64_t t157 = 795364LL;

    t157 = ((x1013^x1014)>>(x1015>x1016));

    if (t157 != 4611686017353646080LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x1033 = 609886614929232LL;
	uint16_t x1034 = 1822U;
	uint32_t x1035 = UINT32_MAX;
	uint8_t x1036 = 14U;
	volatile int64_t t158 = -51262887246558898LL;

    t158 = ((x1033^x1034)>>(x1035>x1036));

    if (t158 != 304943307463719LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x1037 = UINT64_MAX;
	int32_t x1038 = -20541;
	volatile int64_t x1039 = INT64_MIN;
	static volatile int64_t x1040 = INT64_MAX;
	uint64_t t159 = 3061181LLU;

    t159 = ((x1037^x1038)>>(x1039>x1040));

    if (t159 != 20540LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1041 = 142887456U;
	int32_t x1042 = -1;
	uint16_t x1043 = UINT16_MAX;
	int8_t x1044 = -5;
	volatile uint32_t t160 = 195586U;

    t160 = ((x1041^x1042)>>(x1043>x1044));

    if (t160 != 2076039919U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x1045 = -1LL;
	volatile uint64_t x1046 = 6335465256LLU;
	int64_t x1048 = INT64_MIN;
	volatile uint64_t t161 = 395379640LLU;

    t161 = ((x1045^x1046)>>(x1047>x1048));

    if (t161 != 9223372033687043179LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x1049 = INT8_MIN;
	static int16_t x1051 = INT16_MIN;
	volatile uint16_t x1052 = UINT16_MAX;
	static uint32_t t162 = 230657U;

    t162 = ((x1049^x1050)>>(x1051>x1052));

    if (t162 != 127U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1058 = -53;
	static uint32_t x1059 = 211152U;
	int64_t t163 = -184357112LL;

    t163 = ((x1057^x1058)>>(x1059>x1060));

    if (t163 != 547LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1061 = -1;
	static int16_t x1062 = INT16_MIN;
	int16_t x1063 = INT16_MIN;
	int8_t x1064 = -1;
	int32_t t164 = -44953914;

    t164 = ((x1061^x1062)>>(x1063>x1064));

    if (t164 != 32767) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x1065 = 752U;
	static volatile uint16_t x1066 = 161U;
	int32_t x1068 = INT32_MAX;

    t165 = ((x1065^x1066)>>(x1067>x1068));

    if (t165 != 593) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x1073 = -1;
	uint8_t x1075 = 0U;
	int16_t x1076 = INT16_MIN;
	int32_t t166 = 422;

    t166 = ((x1073^x1074)>>(x1075>x1076));

    if (t166 != 616666) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1077 = 11342598080283LL;
	int16_t x1078 = INT16_MAX;
	uint32_t x1079 = 253711U;
	volatile uint64_t x1080 = 1142LLU;
	volatile int64_t t167 = 244402902809595173LL;

    t167 = ((x1077^x1078)>>(x1079>x1080));

    if (t167 != 5671299054706LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1083 = 99U;
	int32_t x1084 = -1;
	static volatile int32_t t168 = -14130946;

    t168 = ((x1081^x1082)>>(x1083>x1084));

    if (t168 != 1073741823) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1085 = -570;
	int32_t x1086 = -1;
	uint32_t x1087 = 148091419U;
	uint8_t x1088 = UINT8_MAX;

    t169 = ((x1085^x1086)>>(x1087>x1088));

    if (t169 != 284) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1089 = 516179LLU;
	uint32_t x1090 = 16141566U;
	int32_t x1091 = INT32_MAX;
	uint64_t x1092 = UINT64_MAX;
	uint64_t t170 = 17607560419LLU;

    t170 = ((x1089^x1090)>>(x1091>x1092));

    if (t170 != 15838381LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x1097 = -24052808;
	volatile int16_t x1098 = -6;
	int32_t x1099 = INT32_MIN;
	int8_t x1100 = INT8_MIN;
	int32_t t171 = -5;

    t171 = ((x1097^x1098)>>(x1099>x1100));

    if (t171 != 24052802) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint16_t x1101 = UINT16_MAX;
	volatile uint32_t x1102 = UINT32_MAX;
	static uint32_t t172 = 21445U;

    t172 = ((x1101^x1102)>>(x1103>x1104));

    if (t172 != 2147450880U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1109 = 211U;
	static int16_t x1110 = INT16_MIN;
	int32_t x1111 = INT32_MAX;
	uint16_t x1112 = 7991U;
	volatile uint32_t t173 = 33118194U;

    t173 = ((x1109^x1110)>>(x1111>x1112));

    if (t173 != 2147467369U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1113 = UINT64_MAX;
	volatile uint64_t x1114 = UINT64_MAX;
	static uint8_t x1115 = 48U;
	static int16_t x1116 = INT16_MIN;
	volatile uint64_t t174 = 4775222292731LLU;

    t174 = ((x1113^x1114)>>(x1115>x1116));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1117 = INT16_MIN;
	static volatile int16_t x1118 = -4;
	uint16_t x1119 = 0U;
	uint16_t x1120 = 64U;
	static volatile int32_t t175 = 10;

    t175 = ((x1117^x1118)>>(x1119>x1120));

    if (t175 != 32764) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x1121 = 58085543037049LL;
	uint32_t x1122 = 2982U;
	int64_t x1123 = -178LL;
	volatile int64_t t176 = 453853665LL;

    t176 = ((x1121^x1122)>>(x1123>x1124));

    if (t176 != 29042771517935LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x1125 = -1;
	int64_t x1126 = INT64_MIN;
	int64_t x1127 = INT64_MIN;
	volatile int64_t x1128 = 2115LL;
	volatile int64_t t177 = INT64_MAX;

    t177 = ((x1125^x1126)>>(x1127>x1128));

    if (t177 != INT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1129 = -1LL;
	int8_t x1130 = -1;
	static uint32_t x1131 = UINT32_MAX;
	int8_t x1132 = -1;
	int64_t t178 = 273844066895454088LL;

    t178 = ((x1129^x1130)>>(x1131>x1132));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1133 = -1LL;
	uint32_t x1135 = UINT32_MAX;

    t179 = ((x1133^x1134)>>(x1135>x1136));

    if (t179 != 16383LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1138 = INT64_MAX;
	int32_t x1140 = -83;
	int64_t t180 = 4999LL;

    t180 = ((x1137^x1138)>>(x1139>x1140));

    if (t180 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x1141 = UINT16_MAX;
	uint64_t x1142 = 1737LLU;
	int8_t x1143 = INT8_MAX;
	static uint8_t x1144 = UINT8_MAX;
	uint64_t t181 = 4480974152296953LLU;

    t181 = ((x1141^x1142)>>(x1143>x1144));

    if (t181 != 63798LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1145 = -74;
	volatile int32_t x1146 = INT32_MIN;
	int16_t x1147 = INT16_MAX;
	int64_t x1148 = 1507754LL;
	int32_t t182 = -7072096;

    t182 = ((x1145^x1146)>>(x1147>x1148));

    if (t182 != 2147483574) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1152 = 14;
	volatile uint32_t t183 = 3466731U;

    t183 = ((x1149^x1150)>>(x1151>x1152));

    if (t183 != 4294934528U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x1153 = UINT32_MAX;
	uint8_t x1154 = 63U;
	int64_t x1155 = INT64_MAX;
	volatile int64_t x1156 = INT64_MIN;
	uint32_t t184 = 1185108U;

    t184 = ((x1153^x1154)>>(x1155>x1156));

    if (t184 != 2147483616U) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x1158 = UINT32_MAX;
	static int8_t x1159 = -1;
	uint8_t x1160 = UINT8_MAX;
	static uint32_t t185 = 17U;

    t185 = ((x1157^x1158)>>(x1159>x1160));

    if (t185 != 32767U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1173 = INT32_MIN;
	static volatile uint64_t x1174 = 3581476845LLU;
	int8_t x1175 = INT8_MIN;
	static volatile uint64_t t186 = 18347183LLU;

    t186 = ((x1173^x1174)>>(x1175>x1176));

    if (t186 != 18446744070848577517LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1182 = 14982LLU;
	uint16_t x1183 = UINT16_MAX;

    t187 = ((x1181^x1182)>>(x1183>x1184));

    if (t187 != 261841772LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1189 = 1;
	static uint8_t x1191 = UINT8_MAX;
	static int16_t x1192 = -1;
	volatile int32_t t188 = -24058;

    t188 = ((x1189^x1190)>>(x1191>x1192));

    if (t188 != 16383) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1197 = UINT16_MAX;
	uint16_t x1198 = UINT16_MAX;
	uint32_t x1199 = 1537031242U;
	static uint32_t x1200 = UINT32_MAX;
	int32_t t189 = 1860525;

    t189 = ((x1197^x1198)>>(x1199>x1200));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x1201 = 25U;
	volatile uint64_t x1202 = UINT64_MAX;
	static uint32_t x1204 = UINT32_MAX;

    t190 = ((x1201^x1202)>>(x1203>x1204));

    if (t190 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1213 = -658;
	int8_t x1214 = -6;
	volatile uint8_t x1215 = UINT8_MAX;
	int8_t x1216 = -1;
	int32_t t191 = 1;

    t191 = ((x1213^x1214)>>(x1215>x1216));

    if (t191 != 330) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1217 = INT8_MAX;
	uint16_t x1218 = 6U;
	volatile int64_t x1219 = INT64_MAX;
	int16_t x1220 = INT16_MIN;
	int32_t t192 = 1;

    t192 = ((x1217^x1218)>>(x1219>x1220));

    if (t192 != 60) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x1225 = 1U;
	static uint32_t x1226 = UINT32_MAX;
	uint16_t x1227 = UINT16_MAX;
	int8_t x1228 = INT8_MAX;
	volatile uint32_t t193 = 746562U;

    t193 = ((x1225^x1226)>>(x1227>x1228));

    if (t193 != 2147483647U) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1229 = INT16_MIN;
	int8_t x1230 = INT8_MIN;
	volatile int64_t x1231 = 788696538LL;
	static uint32_t x1232 = 18515U;
	int32_t t194 = 259275;

    t194 = ((x1229^x1230)>>(x1231>x1232));

    if (t194 != 16320) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1233 = -1;
	static int32_t x1234 = INT32_MIN;
	volatile int8_t x1235 = -1;

    t195 = ((x1233^x1234)>>(x1235>x1236));

    if (t195 != INT32_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1249 = INT8_MIN;
	int64_t x1251 = INT64_MIN;
	int64_t x1252 = 251LL;
	uint32_t t196 = 501235111U;

    t196 = ((x1249^x1250)>>(x1251>x1252));

    if (t196 != 127U) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x1257 = -1;
	volatile int32_t x1258 = -1;
	int8_t x1259 = -1;
	volatile int64_t x1260 = INT64_MIN;
	int32_t t197 = 104307;

    t197 = ((x1257^x1258)>>(x1259>x1260));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1261 = -2480112;
	int16_t x1262 = -3;
	static volatile int8_t x1263 = 6;
	uint32_t x1264 = 201U;
	volatile int32_t t198 = -275079094;

    t198 = ((x1261^x1262)>>(x1263>x1264));

    if (t198 != 2480109) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1265 = -1LL;
	int32_t x1266 = -1;
	int32_t x1267 = INT32_MIN;
	int64_t x1268 = -3079488LL;

    t199 = ((x1265^x1266)>>(x1267>x1268));

    if (t199 != 0LL) { NG(); } else { ; }
	
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

