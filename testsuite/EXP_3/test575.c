
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

int64_t x1 = 22015515LL;
uint8_t x3 = 14U;
int32_t x9 = 1;
volatile int32_t t1 = 2660;
int8_t x13 = 1;
uint64_t x15 = 1LLU;
int32_t x16 = -1;
int16_t x32 = INT16_MIN;
int16_t x36 = INT16_MIN;
int32_t x49 = INT32_MIN;
int64_t x51 = -1LL;
int64_t t7 = -62455LL;
int8_t x53 = INT8_MIN;
static int8_t x55 = INT8_MIN;
uint16_t x62 = 1U;
volatile int32_t t9 = 685571521;
uint64_t x71 = UINT64_MAX;
int64_t x77 = INT64_MAX;
static int8_t x90 = INT8_MIN;
static uint16_t x92 = UINT16_MAX;
uint16_t x93 = 12U;
int16_t x97 = -328;
int8_t x101 = INT8_MIN;
volatile int64_t t17 = -49501280992679866LL;
uint32_t x110 = UINT32_MAX;
int16_t x114 = -7;
static int16_t x119 = INT16_MIN;
int32_t x126 = INT32_MIN;
int32_t x130 = INT32_MIN;
volatile int32_t x133 = INT32_MIN;
uint32_t x136 = UINT32_MAX;
static volatile int64_t x149 = INT64_MIN;
uint8_t x155 = 6U;
int64_t t26 = 6LL;
int64_t x171 = -32283652843036904LL;
int64_t t29 = -439382040LL;
static int32_t x173 = 1;
uint32_t x193 = UINT32_MAX;
uint64_t t34 = 202978LLU;
static volatile int64_t t35 = -6418251217466LL;
static int16_t x203 = -1;
static volatile int32_t x204 = -1;
uint8_t x206 = 12U;
uint32_t x207 = UINT32_MAX;
volatile int16_t x209 = INT16_MIN;
static int64_t x211 = 133744086715LL;
static int8_t x231 = INT8_MAX;
uint32_t x238 = 45U;
static volatile int32_t x240 = INT32_MIN;
uint32_t t43 = 13U;
int32_t t45 = 225;
volatile int32_t x254 = INT32_MIN;
static int8_t x264 = 0;
int16_t x276 = INT16_MAX;
volatile uint32_t t49 = 1U;
static volatile uint16_t x277 = 10235U;
int8_t x279 = INT8_MAX;
static uint16_t x280 = 234U;
volatile int32_t x281 = -554222372;
int64_t x282 = -1LL;
volatile uint32_t t52 = 20371551U;
int8_t x289 = INT8_MIN;
int32_t x295 = INT32_MIN;
static uint16_t x298 = 0U;
uint64_t x304 = 28491470747569LLU;
static uint32_t t57 = 1800947534U;
volatile uint8_t x322 = 0U;
int32_t x324 = INT32_MIN;
uint64_t x326 = 16578181LLU;
static volatile uint64_t t61 = 51LLU;
volatile uint32_t x365 = 373U;
int64_t x374 = -11916766621566592LL;
volatile int8_t x376 = INT8_MIN;
int8_t x383 = -1;
static int16_t x393 = INT16_MIN;
int8_t x396 = -1;
int8_t x405 = -3;
uint8_t x413 = 3U;
static uint64_t x421 = 554314004028LLU;
int16_t x423 = -1488;
int8_t x435 = -1;
volatile int64_t t79 = -64015LL;
int16_t x446 = -268;
uint32_t x456 = 1U;
uint32_t t83 = 450958U;
volatile int16_t x463 = -1;
volatile int32_t x464 = -1;
volatile uint64_t t86 = 14974927LLU;
uint8_t x474 = 1U;
volatile uint32_t x480 = UINT32_MAX;
static int32_t x496 = -2411;
volatile int32_t x507 = -1;
volatile int8_t x513 = 3;
static volatile uint32_t x517 = 2U;
int8_t x519 = -1;
uint8_t x522 = 91U;
static volatile uint32_t t96 = 1338042U;
static int64_t x539 = -1LL;
volatile uint64_t t97 = 1382902807154LLU;
volatile int8_t x542 = 0;
int64_t x549 = -208099356493993LL;
uint8_t x550 = 27U;
uint16_t x551 = 76U;
volatile int64_t t99 = 10930LL;
uint8_t x554 = 1U;
uint32_t x559 = 2143U;
int32_t x561 = INT32_MIN;
int8_t x562 = INT8_MAX;
int32_t x577 = INT32_MIN;
uint64_t t105 = 8574678954614LLU;
int8_t x587 = -1;
int16_t x589 = INT16_MIN;
static volatile uint64_t t107 = 8280997907LLU;
static uint16_t x597 = 11635U;
static uint32_t x602 = 11739649U;
int16_t x603 = -1;
int16_t x604 = -1;
static volatile uint32_t t112 = 3U;
uint16_t x630 = 26876U;
static volatile uint64_t t114 = 33916841839749702LLU;
int16_t x644 = -1;
static int32_t t117 = -491;
uint32_t x645 = 1866462U;
static int8_t x658 = INT8_MIN;
uint8_t x660 = UINT8_MAX;
int8_t x665 = -1;
uint64_t t122 = 230987011391850LLU;
uint16_t x679 = UINT16_MAX;
int32_t x680 = -1;
int32_t x681 = INT32_MAX;
uint32_t x684 = UINT32_MAX;
int8_t x701 = INT8_MIN;
static uint64_t x703 = 17667247512089LLU;
static uint16_t x706 = 234U;
int16_t x708 = INT16_MIN;
int32_t x737 = INT32_MAX;
volatile int16_t x740 = 7203;
volatile uint32_t t135 = 91709160U;
static volatile int32_t x743 = INT32_MIN;
static volatile int32_t t137 = 7;
uint32_t x754 = 30985U;
int32_t x757 = INT32_MIN;
int64_t x761 = -1LL;
int64_t t141 = 2619478119361566LL;
int32_t x781 = INT32_MIN;
static volatile int32_t t143 = -1595;
int8_t x800 = INT8_MIN;
int64_t x801 = INT64_MAX;
static volatile uint32_t x814 = UINT32_MAX;
int64_t t148 = -507100262LL;
static int8_t x820 = INT8_MAX;
uint8_t x822 = UINT8_MAX;
static uint8_t x831 = UINT8_MAX;
int64_t t154 = 1LL;
static int64_t x845 = INT64_MIN;
volatile int64_t t157 = -68385831201LL;
int8_t x857 = INT8_MIN;
uint32_t x861 = UINT32_MAX;
int64_t t159 = -423081019494747155LL;
int32_t t160 = 1;
uint64_t x875 = UINT64_MAX;
static uint64_t x884 = 250506LLU;
int64_t x891 = -488308658605633LL;
volatile int64_t t166 = -63809657793722108LL;
int8_t x896 = -1;
uint64_t t167 = 346742LLU;
int8_t x900 = INT8_MIN;
uint32_t t168 = 136U;
volatile uint8_t x905 = UINT8_MAX;
int64_t x907 = 1309823LL;
volatile int8_t x908 = INT8_MIN;
int8_t x910 = INT8_MAX;
volatile int64_t t171 = 617897LL;
static int32_t x914 = 12;
static uint32_t x915 = 795166655U;
int8_t x916 = INT8_MAX;
uint16_t x919 = UINT16_MAX;
int8_t x925 = -1;
int32_t x926 = -4;
int16_t x936 = INT16_MAX;
int8_t x952 = 48;
static int64_t t179 = 54105073708347668LL;
uint32_t x955 = 209603832U;
int8_t x967 = INT8_MIN;
volatile int64_t t181 = -4073LL;
int32_t x969 = INT32_MIN;
uint32_t t182 = 1843U;
volatile uint32_t x973 = 865440U;
int16_t x975 = -481;
uint32_t t183 = 29893U;
int32_t x998 = INT32_MAX;
int64_t t186 = 4969LL;
int8_t x1016 = INT8_MIN;
uint64_t t187 = 1007864370117LLU;
uint16_t x1017 = UINT16_MAX;
static int8_t x1018 = INT8_MIN;
static volatile int16_t x1032 = 3;
volatile uint64_t x1044 = 13651LLU;
volatile uint64_t t192 = 2047814LLU;
volatile int8_t x1049 = INT8_MAX;
int16_t x1066 = -1;
int64_t t197 = 4696953548861715LL;
uint8_t x1075 = 41U;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	volatile uint16_t x4 = 2U;
	int64_t t0 = 43LL;

    t0 = ((x1^x2)+(x3*x4));

    if (t0 != -22015561LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x10 = INT32_MIN;
	uint16_t x11 = 9886U;
	static uint8_t x12 = UINT8_MAX;

    t1 = ((x9^x10)+(x11*x12));

    if (t1 != -2144962717) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x14 = -1;
	uint64_t t2 = 494LLU;

    t2 = ((x13^x14)+(x15*x16));

    if (t2 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x21 = -1;
	int8_t x22 = 1;
	static volatile int16_t x23 = 3624;
	int8_t x24 = 1;
	volatile int32_t t3 = 1935157;

    t3 = ((x21^x22)+(x23*x24));

    if (t3 != 3622) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x29 = 56U;
	volatile int32_t x30 = -1;
	static uint64_t x31 = UINT64_MAX;
	uint64_t t4 = 412314LLU;

    t4 = ((x29^x30)+(x31*x32));

    if (t4 != 32711LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x33 = -1;
	volatile uint32_t x34 = UINT32_MAX;
	int8_t x35 = 7;
	volatile uint32_t t5 = 190501U;

    t5 = ((x33^x34)+(x35*x36));

    if (t5 != 4294737920U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x41 = 3U;
	volatile uint32_t x42 = 311230437U;
	int16_t x43 = 410;
	int64_t x44 = -397334340LL;
	static int64_t t6 = -115232443631508548LL;

    t6 = ((x41^x42)+(x43*x44));

    if (t6 != -162595848962LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x50 = INT16_MAX;
	volatile int64_t x52 = -1LL;

    t7 = ((x49^x50)+(x51*x52));

    if (t7 != -2147450880LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x54 = 1273209486402648408LL;
	uint64_t x56 = 14875156270819LLU;
	volatile uint64_t t8 = 75098982LLU;

    t8 = ((x53^x54)+(x55*x56));

    if (t8 != 17171630567304238424LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x61 = INT32_MIN;
	int8_t x63 = 0;
	int8_t x64 = INT8_MAX;

    t9 = ((x61^x62)+(x63*x64));

    if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x69 = INT32_MIN;
	int8_t x70 = 0;
	int16_t x72 = INT16_MAX;
	uint64_t t10 = 117035752LLU;

    t10 = ((x69^x70)+(x71*x72));

    if (t10 != 18446744071562035201LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x73 = INT8_MIN;
	static uint32_t x74 = UINT32_MAX;
	int8_t x75 = INT8_MIN;
	volatile int8_t x76 = INT8_MIN;
	static volatile uint32_t t11 = 805U;

    t11 = ((x73^x74)+(x75*x76));

    if (t11 != 16511U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x78 = 121342755325132519LLU;
	int32_t x79 = -7;
	volatile uint16_t x80 = 15U;
	volatile uint64_t t12 = 94793074286219845LLU;

    t12 = ((x77^x78)+(x79*x80));

    if (t12 != 9102029281529643183LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x81 = -106545;
	int32_t x82 = -1;
	volatile uint64_t x83 = UINT64_MAX;
	uint64_t x84 = UINT64_MAX;
	uint64_t t13 = 1687947157LLU;

    t13 = ((x81^x82)+(x83*x84));

    if (t13 != 106545LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x89 = 4454U;
	volatile int8_t x91 = INT8_MIN;
	int32_t t14 = -466256116;

    t14 = ((x89^x90)+(x91*x92));

    if (t14 != -8392858) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x94 = INT32_MIN;
	static volatile int64_t x95 = -1LL;
	int8_t x96 = 28;
	int64_t t15 = 2478187277LL;

    t15 = ((x93^x94)+(x95*x96));

    if (t15 != -2147483664LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x98 = UINT32_MAX;
	int8_t x99 = -1;
	uint64_t x100 = UINT64_MAX;
	volatile uint64_t t16 = 820LLU;

    t16 = ((x97^x98)+(x99*x100));

    if (t16 != 328LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x102 = 3U;
	int64_t x103 = -141821784LL;
	volatile uint16_t x104 = 1661U;

    t17 = ((x101^x102)+(x103*x104));

    if (t17 != -235565983349LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint64_t x105 = UINT64_MAX;
	int64_t x106 = INT64_MIN;
	uint64_t x107 = 41478LLU;
	uint16_t x108 = 92U;
	volatile uint64_t t18 = 4880358881LLU;

    t18 = ((x105^x106)+(x107*x108));

    if (t18 != 9223372036858591783LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x109 = 1LL;
	static int16_t x111 = INT16_MIN;
	int16_t x112 = -1;
	int64_t t19 = 564894810283526LL;

    t19 = ((x109^x110)+(x111*x112));

    if (t19 != 4295000062LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x113 = INT64_MAX;
	int32_t x115 = -1;
	static int8_t x116 = INT8_MIN;
	volatile int64_t t20 = -302939577LL;

    t20 = ((x113^x114)+(x115*x116));

    if (t20 != -9223372036854775674LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x117 = 10986455734174LLU;
	int32_t x118 = INT32_MAX;
	volatile uint32_t x120 = 0U;
	uint64_t t21 = 995230102238701LLU;

    t21 = ((x117^x118)+(x119*x120));

    if (t21 != 10984449468513LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x125 = INT8_MIN;
	int32_t x127 = -48769;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t22 = 9631U;

    t22 = ((x125^x126)+(x127*x128));

    if (t22 != 2147532289U) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x129 = INT32_MIN;
	static int8_t x131 = -1;
	uint64_t x132 = UINT64_MAX;
	static volatile uint64_t t23 = 8749407509045155LLU;

    t23 = ((x129^x130)+(x131*x132));

    if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x134 = -1LL;
	uint64_t x135 = 28LLU;
	uint64_t t24 = 6054500022229613397LLU;

    t24 = ((x133^x134)+(x135*x136));

    if (t24 != 122406567907LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x150 = -1;
	int16_t x151 = INT16_MIN;
	volatile uint64_t x152 = 109127616LLU;
	volatile uint64_t t25 = 3732880310114LLU;

    t25 = ((x149^x150)+(x151*x152));

    if (t25 != 9223368460961054719LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x153 = -1LL;
	uint16_t x154 = 1U;
	int8_t x156 = INT8_MIN;

    t26 = ((x153^x154)+(x155*x156));

    if (t26 != -770LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x157 = INT64_MIN;
	volatile uint16_t x158 = 1230U;
	uint8_t x159 = UINT8_MAX;
	volatile uint8_t x160 = 5U;
	int64_t t27 = -1964481032311148LL;

    t27 = ((x157^x158)+(x159*x160));

    if (t27 != -9223372036854773303LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x165 = UINT32_MAX;
	static int64_t x166 = INT64_MIN;
	uint32_t x167 = 25U;
	int8_t x168 = 22;
	int64_t t28 = 1027121LL;

    t28 = ((x165^x166)+(x167*x168));

    if (t28 != -9223372032559807963LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x169 = UINT32_MAX;
	int8_t x170 = INT8_MIN;
	int8_t x172 = INT8_MIN;

    t29 = ((x169^x170)+(x171*x172));

    if (t29 != 4132307563908723839LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x174 = INT64_MIN;
	uint64_t x175 = 1569674059862951741LLU;
	uint16_t x176 = 0U;
	uint64_t t30 = 601943515LLU;

    t30 = ((x173^x174)+(x175*x176));

    if (t30 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x177 = -1;
	int16_t x178 = INT16_MIN;
	static volatile int32_t x179 = -1;
	static uint8_t x180 = UINT8_MAX;
	volatile int32_t t31 = 662678;

    t31 = ((x177^x178)+(x179*x180));

    if (t31 != 32512) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x181 = 28013U;
	volatile int64_t x182 = INT64_MIN;
	int8_t x183 = INT8_MIN;
	int64_t x184 = 0LL;
	volatile int64_t t32 = 176588865833LL;

    t32 = ((x181^x182)+(x183*x184));

    if (t32 != -9223372036854747795LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x185 = 65469622744LLU;
	static volatile int32_t x186 = INT32_MIN;
	int16_t x187 = INT16_MIN;
	uint64_t x188 = 258525LLU;
	static volatile uint64_t t33 = 10727LLU;

    t33 = ((x185^x186)+(x187*x188));

    if (t33 != 18446743999711324632LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x194 = INT64_MIN;
	uint64_t x195 = 23LLU;
	uint32_t x196 = UINT32_MAX;

    t34 = ((x193^x194)+(x195*x196));

    if (t34 != 9223372139933990888LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x197 = UINT32_MAX;
	int32_t x198 = -2814;
	int16_t x199 = 46;
	volatile int64_t x200 = -1369555LL;

    t35 = ((x197^x198)+(x199*x200));

    if (t35 != -62996717LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x201 = 4LL;
	int16_t x202 = INT16_MIN;
	volatile int64_t t36 = 998746948891891LL;

    t36 = ((x201^x202)+(x203*x204));

    if (t36 != -32763LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint8_t x205 = UINT8_MAX;
	uint8_t x208 = UINT8_MAX;
	volatile uint32_t t37 = 2175323U;

    t37 = ((x205^x206)+(x207*x208));

    if (t37 != 4294967284U) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x210 = -98884493;
	volatile uint32_t x212 = 116U;
	int64_t t38 = 0LL;

    t38 = ((x209^x210)+(x211*x212));

    if (t38 != 15514412929327LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x213 = UINT16_MAX;
	uint16_t x214 = 215U;
	int64_t x215 = -1LL;
	static int16_t x216 = -2040;
	volatile int64_t t39 = -453471396588LL;

    t39 = ((x213^x214)+(x215*x216));

    if (t39 != 67360LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x217 = -1;
	int8_t x218 = INT8_MAX;
	volatile int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t40 = 48;

    t40 = ((x217^x218)+(x219*x220));

    if (t40 != 4194176) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x229 = UINT8_MAX;
	uint8_t x230 = 3U;
	uint32_t x232 = 879208888U;
	uint32_t t41 = 27U;

    t41 = ((x229^x230)+(x231*x232));

    if (t41 != 4285346628U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x233 = INT8_MIN;
	int8_t x234 = -1;
	int8_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	uint32_t t42 = 17761U;

    t42 = ((x233^x234)+(x235*x236));

    if (t42 != 128U) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x237 = INT32_MIN;
	uint32_t x239 = UINT32_MAX;

    t43 = ((x237^x238)+(x239*x240));

    if (t43 != 45U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MAX;
	static uint32_t x243 = 147513760U;
	static volatile int32_t x244 = 1905463;
	volatile int64_t t44 = 6259059698863LL;

    t44 = ((x241^x242)+(x243*x244));

    if (t44 != -9223372034682824225LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x245 = 2U;
	uint8_t x246 = 6U;
	static int8_t x247 = INT8_MIN;
	static uint8_t x248 = UINT8_MAX;

    t45 = ((x245^x246)+(x247*x248));

    if (t45 != -32636) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x253 = INT64_MIN;
	static int16_t x255 = -42;
	static volatile int32_t x256 = -1;
	volatile int64_t t46 = -15272331915LL;

    t46 = ((x253^x254)+(x255*x256));

    if (t46 != 9223372034707292202LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x261 = INT64_MIN;
	static int16_t x262 = INT16_MIN;
	volatile int64_t x263 = -1LL;
	volatile int64_t t47 = 166874544038LL;

    t47 = ((x261^x262)+(x263*x264));

    if (t47 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MAX;
	uint8_t x271 = 3U;
	int64_t x272 = -1LL;
	int64_t t48 = -1641591712787444LL;

    t48 = ((x269^x270)+(x271*x272));

    if (t48 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x273 = UINT32_MAX;
	volatile int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;

    t49 = ((x273^x274)+(x275*x276));

    if (t49 != 1073774591U) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x278 = -21047;
	volatile int32_t t50 = 115058;

    t50 = ((x277^x278)+(x279*x280));

    if (t50 != -440) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x283 = 351;
	int16_t x284 = -431;
	int64_t t51 = -15LL;

    t51 = ((x281^x282)+(x283*x284));

    if (t51 != 554071090LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x285 = 10751861U;
	int8_t x286 = INT8_MIN;
	volatile int16_t x287 = INT16_MIN;
	static volatile int16_t x288 = -58;

    t52 = ((x285^x286)+(x287*x288));

    if (t52 != 4286116085U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x290 = INT32_MIN;
	static uint16_t x291 = 1U;
	static int16_t x292 = 39;
	int32_t t53 = 29389;

    t53 = ((x289^x290)+(x291*x292));

    if (t53 != 2147483559) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x293 = -1;
	static int8_t x294 = INT8_MAX;
	uint32_t x296 = 146708U;
	volatile uint32_t t54 = 1672949839U;

    t54 = ((x293^x294)+(x295*x296));

    if (t54 != 4294967168U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x297 = 26U;
	int32_t x299 = -1;
	int64_t x300 = -9LL;
	int64_t t55 = -33244LL;

    t55 = ((x297^x298)+(x299*x300));

    if (t55 != 35LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x301 = INT64_MIN;
	static uint8_t x302 = UINT8_MAX;
	int64_t x303 = 769735636097LL;
	volatile uint64_t t56 = 31169402491668575LLU;

    t56 = ((x301^x302)+(x303*x304));

    if (t56 != 18275215612299150640LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x305 = INT32_MIN;
	static uint16_t x306 = 0U;
	int32_t x307 = INT32_MAX;
	uint32_t x308 = UINT32_MAX;

    t57 = ((x305^x306)+(x307*x308));

    if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x309 = 193701484;
	volatile uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = INT8_MIN;
	int64_t x312 = 5248562LL;
	volatile int64_t t58 = 12377LL;

    t58 = ((x309^x310)+(x311*x312));

    if (t58 != 3429449875LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x313 = -1619704;
	uint32_t x314 = 844107525U;
	int32_t x315 = INT32_MAX;
	static uint8_t x316 = 1U;
	volatile uint32_t t59 = 930U;

    t59 = ((x313^x314)+(x315*x316));

    if (t59 != 1303856652U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x321 = INT16_MAX;
	uint64_t x323 = 62913776486947LLU;
	uint64_t t60 = 5482424311104LLU;

    t60 = ((x321^x322)+(x323*x324));

    if (t60 != 16094100276897677311LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x325 = INT16_MAX;
	volatile int64_t x327 = -1LL;
	int64_t x328 = -644LL;

    t61 = ((x325^x326)+(x327*x328));

    if (t61 != 16550910LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int16_t x329 = -1;
	int64_t x330 = 3LL;
	static int8_t x331 = -1;
	int16_t x332 = 54;
	volatile int64_t t62 = -1012442065740767LL;

    t62 = ((x329^x330)+(x331*x332));

    if (t62 != -58LL) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	uint64_t x338 = UINT64_MAX;
	int8_t x339 = 43;
	int32_t x340 = -1;
	volatile uint64_t t63 = 1556435LLU;

    t63 = ((x337^x338)+(x339*x340));

    if (t63 != 18446744069414584277LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x341 = -108319529;
	static int8_t x342 = -1;
	static volatile int16_t x343 = -5814;
	int16_t x344 = -1;
	volatile int32_t t64 = -109166315;

    t64 = ((x341^x342)+(x343*x344));

    if (t64 != 108325342) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x353 = 0U;
	int8_t x354 = 0;
	int8_t x355 = -1;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t65 = 7391840LLU;

    t65 = ((x353^x354)+(x355*x356));

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x357 = 165;
	uint32_t x358 = 176686U;
	uint64_t x359 = 3781059LLU;
	static int32_t x360 = -431642931;
	uint64_t t66 = 30556492958223590LLU;

    t66 = ((x357^x358)+(x359*x360));

    if (t66 != 18445112006320684466LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x361 = INT8_MAX;
	uint64_t x362 = UINT64_MAX;
	uint64_t x363 = UINT64_MAX;
	volatile uint8_t x364 = 4U;
	uint64_t t67 = 1216930200LLU;

    t67 = ((x361^x362)+(x363*x364));

    if (t67 != 18446744073709551484LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x366 = 1;
	int8_t x367 = INT8_MIN;
	static int16_t x368 = -1;
	volatile uint32_t t68 = 15976575U;

    t68 = ((x365^x366)+(x367*x368));

    if (t68 != 500U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x369 = 544467U;
	static int32_t x370 = -2997;
	static uint64_t x371 = UINT64_MAX;
	int16_t x372 = -6;
	volatile uint64_t t69 = 6687774LLU;

    t69 = ((x369^x370)+(x371*x372));

    if (t69 != 4294425246LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x373 = UINT8_MAX;
	int64_t x375 = -1LL;
	int64_t t70 = 50537973265LL;

    t70 = ((x373^x374)+(x375*x376));

    if (t70 != -11916766621566465LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint32_t x381 = 71727000U;
	int16_t x382 = INT16_MIN;
	int64_t x384 = -1LL;
	static int64_t t71 = 524489436LL;

    t71 = ((x381^x382)+(x383*x384));

    if (t71 != 4223268761LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x394 = -52;
	int16_t x395 = INT16_MAX;
	volatile int32_t t72 = 15228;

    t72 = ((x393^x394)+(x395*x396));

    if (t72 != -51) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x401 = INT32_MAX;
	int32_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	volatile int16_t x404 = INT16_MAX;
	volatile int32_t t73 = 104;

    t73 = ((x401^x402)+(x403*x404));

    if (t73 != -2139128063) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x406 = 1;
	uint64_t x407 = 112193849690LLU;
	int8_t x408 = INT8_MIN;
	uint64_t t74 = 5121435LLU;

    t74 = ((x405^x406)+(x407*x408));

    if (t74 != 18446729712896791292LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x414 = INT16_MAX;
	int8_t x415 = 0;
	static int32_t x416 = INT32_MIN;
	int32_t t75 = -464;

    t75 = ((x413^x414)+(x415*x416));

    if (t75 != 32764) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x417 = INT64_MIN;
	int64_t x418 = INT64_MAX;
	static volatile uint32_t x419 = UINT32_MAX;
	int32_t x420 = 3655511;
	volatile int64_t t76 = 5806220378079123LL;

    t76 = ((x417^x418)+(x419*x420));

    if (t76 != 4291311784LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x422 = INT8_MIN;
	uint32_t x424 = UINT32_MAX;
	uint64_t t77 = 37696369901LLU;

    t77 = ((x421^x422)+(x423*x424));

    if (t77 != 18446743519395549068LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x429 = 1U;
	uint64_t x430 = 703579242796155LLU;
	uint64_t x431 = UINT64_MAX;
	static uint16_t x432 = UINT16_MAX;
	uint64_t t78 = 9433LLU;

    t78 = ((x429^x430)+(x431*x432));

    if (t78 != 703579242730619LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MIN;
	volatile int64_t x436 = 49530967LL;

    t79 = ((x433^x434)+(x435*x436));

    if (t79 != -49530968LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x441 = INT32_MAX;
	volatile int32_t x442 = INT32_MAX;
	volatile int32_t x443 = 143;
	static int8_t x444 = INT8_MIN;
	int32_t t80 = -1;

    t80 = ((x441^x442)+(x443*x444));

    if (t80 != -18304) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x445 = 214763920776530LLU;
	static int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;
	static uint64_t t81 = 252LLU;

    t81 = ((x445^x446)+(x447*x448));

    if (t81 != 18446529309780419494LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x449 = INT8_MIN;
	uint8_t x450 = 15U;
	uint16_t x451 = 2862U;
	uint32_t x452 = 1401101U;
	volatile uint32_t t82 = 134U;

    t82 = ((x449^x450)+(x451*x452));

    if (t82 != 4009950949U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int16_t x453 = INT16_MIN;
	int32_t x454 = 1;
	int16_t x455 = -47;

    t83 = ((x453^x454)+(x455*x456));

    if (t83 != 4294934482U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x457 = 740266LL;
	static int32_t x458 = INT32_MIN;
	static uint16_t x459 = 1U;
	volatile uint32_t x460 = UINT32_MAX;
	static volatile int64_t t84 = -1LL;

    t84 = ((x457^x458)+(x459*x460));

    if (t84 != 2148223913LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x461 = -18926;
	uint32_t x462 = 2185498U;
	uint32_t t85 = 10689372U;

    t85 = ((x461^x462)+(x463*x464));

    if (t85 != 4292800265U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x465 = 250757693LLU;
	uint32_t x466 = 11U;
	uint8_t x467 = UINT8_MAX;
	uint64_t x468 = 8601LLU;

    t86 = ((x465^x466)+(x467*x468));

    if (t86 != 252950941LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x473 = 796383;
	static uint32_t x475 = UINT32_MAX;
	int16_t x476 = INT16_MIN;
	uint32_t t87 = 1U;

    t87 = ((x473^x474)+(x475*x476));

    if (t87 != 829150U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x477 = INT32_MIN;
	static int16_t x478 = -1;
	int8_t x479 = INT8_MIN;
	uint32_t t88 = 1681556705U;

    t88 = ((x477^x478)+(x479*x480));

    if (t88 != 2147483775U) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x485 = INT16_MIN;
	uint16_t x486 = 15U;
	uint16_t x487 = UINT16_MAX;
	int16_t x488 = INT16_MIN;
	volatile int32_t t89 = -1187;

    t89 = ((x485^x486)+(x487*x488));

    if (t89 != -2147483633) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint64_t x493 = 49895120714LLU;
	int32_t x494 = INT32_MAX;
	int8_t x495 = INT8_MIN;
	volatile uint64_t t90 = 0LLU;

    t90 = ((x493^x494)+(x495*x496));

    if (t90 != 51036919349LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x501 = 222230331260LLU;
	int64_t x502 = -1LL;
	volatile int16_t x503 = INT16_MIN;
	volatile uint8_t x504 = UINT8_MAX;
	uint64_t t91 = 3127894488007210194LLU;

    t91 = ((x501^x502)+(x503*x504));

    if (t91 != 18446743851470864515LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x505 = 119;
	static int16_t x506 = -1;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t92 = 11444189;

    t92 = ((x505^x506)+(x507*x508));

    if (t92 != -65655) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x514 = -1;
	uint16_t x515 = UINT16_MAX;
	uint32_t x516 = 23959U;
	uint32_t t93 = 1378074697U;

    t93 = ((x513^x514)+(x515*x516));

    if (t93 != 1570153061U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x518 = -1LL;
	static volatile uint8_t x520 = 4U;
	volatile int64_t t94 = -160287755636981LL;

    t94 = ((x517^x518)+(x519*x520));

    if (t94 != -7LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x521 = -21535250;
	int8_t x523 = INT8_MIN;
	uint16_t x524 = UINT16_MAX;
	volatile int32_t t95 = 13789;

    t95 = ((x521^x522)+(x523*x524));

    if (t95 != -29923787) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x525 = -1;
	uint32_t x526 = 5U;
	volatile uint16_t x527 = UINT16_MAX;
	uint8_t x528 = 19U;

    t96 = ((x525^x526)+(x527*x528));

    if (t96 != 1245159U) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x537 = 59217189283850876LLU;
	int32_t x538 = 7;
	int32_t x540 = INT32_MIN;

    t97 = ((x537^x538)+(x539*x540));

    if (t97 != 59217191431334523LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x541 = INT32_MIN;
	uint32_t x543 = 56432U;
	uint32_t x544 = 1701U;
	static uint32_t t98 = 591U;

    t98 = ((x541^x542)+(x543*x544));

    if (t98 != 2243474480U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x552 = -2;

    t99 = ((x549^x550)+(x551*x552));

    if (t99 != -208099356494156LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint32_t x553 = UINT32_MAX;
	volatile int64_t x555 = 9101909LL;
	static uint16_t x556 = UINT16_MAX;
	int64_t t100 = 12304464607929394LL;

    t100 = ((x553^x554)+(x555*x556));

    if (t100 != 600788573609LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int64_t x557 = 3098LL;
	uint32_t x558 = UINT32_MAX;
	volatile int16_t x560 = INT16_MIN;
	volatile int64_t t101 = 46LL;

    t101 = ((x557^x558)+(x559*x560));

    if (t101 != 8519709669LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x563 = UINT64_MAX;
	volatile int16_t x564 = 10;
	volatile uint64_t t102 = 3020235021122LLU;

    t102 = ((x561^x562)+(x563*x564));

    if (t102 != 18446744071562068085LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x573 = INT16_MIN;
	int64_t x574 = INT64_MAX;
	int32_t x575 = -1;
	static int32_t x576 = -1;
	int64_t t103 = 156687LL;

    t103 = ((x573^x574)+(x575*x576));

    if (t103 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x578 = INT64_MAX;
	static uint64_t x579 = UINT64_MAX;
	volatile uint16_t x580 = 1966U;
	uint64_t t104 = 4244026999330145300LLU;

    t104 = ((x577^x578)+(x579*x580));

    if (t104 != 9223372039002257489LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x581 = UINT64_MAX;
	uint64_t x582 = 16292796789569LLU;
	int64_t x583 = 6364LL;
	static int32_t x584 = 40640644;

    t105 = ((x581^x582)+(x583*x584));

    if (t105 != 18446728039549820462LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x585 = INT16_MIN;
	volatile uint32_t x586 = UINT32_MAX;
	static volatile int16_t x588 = INT16_MAX;
	volatile uint32_t t106 = 61U;

    t106 = ((x585^x586)+(x587*x588));

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x590 = -4259;
	uint64_t x591 = UINT64_MAX;
	uint8_t x592 = UINT8_MAX;

    t107 = ((x589^x590)+(x591*x592));

    if (t107 != 28254LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x593 = INT8_MIN;
	int64_t x594 = INT64_MAX;
	static int16_t x595 = -53;
	int32_t x596 = -105697;
	static int64_t t108 = 1837583636LL;

    t108 = ((x593^x594)+(x595*x596));

    if (t108 != -9223372036849173740LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x598 = -1LL;
	static uint64_t x599 = 2539130166612LLU;
	int16_t x600 = INT16_MIN;
	uint64_t t109 = 841092105981715LLU;

    t109 = ((x597^x598)+(x599*x600));

    if (t109 != 18363541856409997964LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x601 = -6083956667218227LL;
	static volatile int64_t t110 = 48LL;

    t110 = ((x601^x602)+(x603*x604));

    if (t110 != -6083956655610675LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x609 = -200;
	int64_t x610 = -1LL;
	static volatile uint8_t x611 = 19U;
	static int64_t x612 = -13956LL;
	int64_t t111 = -2647LL;

    t111 = ((x609^x610)+(x611*x612));

    if (t111 != -264965LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x617 = 177U;
	uint32_t x618 = 606738U;
	int8_t x619 = INT8_MIN;
	int8_t x620 = -1;

    t112 = ((x617^x618)+(x619*x620));

    if (t112 != 607011U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x625 = -1487393;
	int64_t x626 = -1LL;
	uint16_t x627 = 4U;
	int32_t x628 = -148;
	int64_t t113 = -8311610LL;

    t113 = ((x625^x626)+(x627*x628));

    if (t113 != 1486800LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x629 = 2;
	int64_t x631 = INT64_MIN;
	volatile uint64_t x632 = 50026LLU;

    t114 = ((x629^x630)+(x631*x632));

    if (t114 != 26878LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x633 = 7;
	volatile int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MAX;
	volatile int8_t x636 = INT8_MIN;
	volatile int32_t t115 = 2000177;

    t115 = ((x633^x634)+(x635*x636));

    if (t115 != -4226937) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x637 = -1;
	int32_t x638 = -1;
	static uint32_t x639 = 7601U;
	static int16_t x640 = 0;
	volatile uint32_t t116 = 747180890U;

    t116 = ((x637^x638)+(x639*x640));

    if (t116 != 0U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x641 = -3;
	int8_t x642 = 25;
	static volatile uint16_t x643 = 347U;

    t117 = ((x641^x642)+(x643*x644));

    if (t117 != -375) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x646 = 3U;
	uint32_t x647 = 252784457U;
	uint64_t x648 = 4724371719LLU;
	uint64_t t118 = 6718767719498LLU;

    t118 = ((x645^x646)+(x647*x648));

    if (t118 != 1194247739655438044LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x657 = 95U;
	uint16_t x659 = 337U;
	int32_t t119 = -227883145;

    t119 = ((x657^x658)+(x659*x660));

    if (t119 != 85902) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x662 = INT32_MIN;
	int32_t x663 = -1;
	int16_t x664 = -1;
	int32_t t120 = -137;

    t120 = ((x661^x662)+(x663*x664));

    if (t120 != 2147483521) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x666 = INT16_MAX;
	volatile int8_t x667 = -1;
	int16_t x668 = 86;
	int32_t t121 = 1;

    t121 = ((x665^x666)+(x667*x668));

    if (t121 != -32854) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x673 = UINT64_MAX;
	static uint8_t x674 = 6U;
	static int16_t x675 = -1;
	int32_t x676 = INT32_MAX;

    t122 = ((x673^x674)+(x675*x676));

    if (t122 != 18446744071562067962LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x677 = INT64_MIN;
	uint64_t x678 = 745127973829368LLU;
	uint64_t t123 = 2219328LLU;

    t123 = ((x677^x678)+(x679*x680));

    if (t123 != 9224117164828539641LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x682 = INT8_MAX;
	int8_t x683 = -2;
	static volatile uint32_t t124 = 2U;

    t124 = ((x681^x682)+(x683*x684));

    if (t124 != 2147483522U) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x685 = -1;
	uint32_t x686 = 22302U;
	uint16_t x687 = 28581U;
	static int16_t x688 = 19;
	volatile uint32_t t125 = 8272U;

    t125 = ((x685^x686)+(x687*x688));

    if (t125 != 520736U) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint8_t x693 = UINT8_MAX;
	volatile uint8_t x694 = UINT8_MAX;
	int32_t x695 = INT32_MIN;
	uint64_t x696 = 185685225909437LLU;
	volatile uint64_t t126 = 7726375974262LLU;

    t126 = ((x693^x694)+(x695*x696));

    if (t126 != 7280325677490896896LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x697 = INT64_MIN;
	uint8_t x698 = 3U;
	uint64_t x699 = 96037044933860LLU;
	volatile uint32_t x700 = 90318U;
	uint64_t t127 = 4021587006LLU;

    t127 = ((x697^x698)+(x699*x700));

    if (t127 != 17897245861191143291LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x702 = 3317;
	volatile int64_t x704 = INT64_MAX;
	uint64_t t128 = 274361061121889LLU;

    t128 = ((x701^x702)+(x703*x704));

    if (t128 != 9223354369607260508LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x705 = UINT64_MAX;
	volatile uint16_t x707 = 30U;
	volatile uint64_t t129 = 10480LLU;

    t129 = ((x705^x706)+(x707*x708));

    if (t129 != 18446744073708568341LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x717 = -1;
	volatile uint16_t x718 = 48U;
	volatile uint16_t x719 = 55U;
	uint16_t x720 = UINT16_MAX;
	int32_t t130 = -2896128;

    t130 = ((x717^x718)+(x719*x720));

    if (t130 != 3604376) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x721 = INT16_MIN;
	int64_t x722 = -1LL;
	int16_t x723 = INT16_MIN;
	static int8_t x724 = INT8_MIN;
	int64_t t131 = 417106783LL;

    t131 = ((x721^x722)+(x723*x724));

    if (t131 != 4227071LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x725 = 9U;
	volatile uint32_t x726 = 5226U;
	static int16_t x727 = -1;
	uint16_t x728 = UINT16_MAX;
	volatile uint32_t t132 = 21636U;

    t132 = ((x725^x726)+(x727*x728));

    if (t132 != 4294906980U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x729 = INT8_MAX;
	int64_t x730 = -40713LL;
	int32_t x731 = -1;
	uint32_t x732 = 56U;
	int64_t t133 = -4919788183084LL;

    t133 = ((x729^x730)+(x731*x732));

    if (t133 != 4294926416LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x733 = -1;
	static int64_t x734 = 1047431993LL;
	static volatile int32_t x735 = -1;
	volatile uint8_t x736 = 72U;
	static int64_t t134 = -11209774LL;

    t134 = ((x733^x734)+(x735*x736));

    if (t134 != -1047432066LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x738 = -1;
	static uint32_t x739 = UINT32_MAX;

    t135 = ((x737^x738)+(x739*x740));

    if (t135 != 2147476445U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x741 = UINT16_MAX;
	int32_t x742 = INT32_MIN;
	uint32_t x744 = UINT32_MAX;
	volatile uint32_t t136 = 128U;

    t136 = ((x741^x742)+(x743*x744));

    if (t136 != 65535U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x745 = 19;
	int8_t x746 = INT8_MIN;
	static int32_t x747 = -1;
	int8_t x748 = INT8_MIN;

    t137 = ((x745^x746)+(x747*x748));

    if (t137 != 19) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x749 = INT32_MIN;
	static int8_t x750 = INT8_MIN;
	int8_t x751 = 1;
	uint64_t x752 = 7LLU;
	volatile uint64_t t138 = 2252392649929219LLU;

    t138 = ((x749^x750)+(x751*x752));

    if (t138 != 2147483527LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint8_t x753 = 12U;
	uint16_t x755 = UINT16_MAX;
	int64_t x756 = -104884614638132LL;
	static volatile int64_t t139 = -266275301310097LL;

    t139 = ((x753^x754)+(x755*x756));

    if (t139 != -6873613220309949639LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x758 = UINT16_MAX;
	int16_t x759 = 1;
	int8_t x760 = -1;
	static int32_t t140 = -19;

    t140 = ((x757^x758)+(x759*x760));

    if (t140 != -2147418114) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x762 = INT8_MIN;
	volatile uint32_t x763 = 22U;
	int32_t x764 = -1;

    t141 = ((x761^x762)+(x763*x764));

    if (t141 != 4294967401LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x782 = 49U;
	volatile int16_t x783 = INT16_MIN;
	uint32_t x784 = 1964877062U;
	uint32_t t142 = 127444U;

    t142 = ((x781^x782)+(x783*x784));

    if (t142 != 2910650417U) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x785 = -7;
	int8_t x786 = -1;
	int16_t x787 = INT16_MIN;
	volatile uint8_t x788 = 2U;

    t143 = ((x785^x786)+(x787*x788));

    if (t143 != -65530) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x797 = UINT16_MAX;
	static uint16_t x798 = UINT16_MAX;
	uint16_t x799 = UINT16_MAX;
	volatile int32_t t144 = 27;

    t144 = ((x797^x798)+(x799*x800));

    if (t144 != -8388480) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x802 = 1;
	static uint8_t x803 = 30U;
	volatile int16_t x804 = -1;
	int64_t t145 = -16117879904346466LL;

    t145 = ((x801^x802)+(x803*x804));

    if (t145 != 9223372036854775776LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x805 = -86;
	uint8_t x806 = 1U;
	static volatile uint64_t x807 = UINT64_MAX;
	int8_t x808 = 0;
	static volatile uint64_t t146 = 4075062213LLU;

    t146 = ((x805^x806)+(x807*x808));

    if (t146 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint64_t x809 = UINT64_MAX;
	static volatile int8_t x810 = -1;
	static int8_t x811 = INT8_MIN;
	volatile int16_t x812 = INT16_MAX;
	uint64_t t147 = 1037330664LLU;

    t147 = ((x809^x810)+(x811*x812));

    if (t147 != 18446744073705357440LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x813 = INT64_MIN;
	static volatile uint16_t x815 = 118U;
	static uint32_t x816 = 350611U;

    t148 = ((x813^x814)+(x815*x816));

    if (t148 != -9223372032518436415LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x817 = 2630358951855376LL;
	uint16_t x818 = UINT16_MAX;
	volatile uint64_t x819 = UINT64_MAX;
	volatile uint64_t t149 = 627030699LLU;

    t149 = ((x817^x818)+(x819*x820));

    if (t149 != 2630358951918192LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x821 = 78U;
	volatile int8_t x823 = 2;
	uint16_t x824 = 66U;
	int32_t t150 = -2627;

    t150 = ((x821^x822)+(x823*x824));

    if (t150 != 309) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x825 = INT32_MIN;
	static volatile int16_t x826 = -1;
	static uint16_t x827 = 18U;
	int64_t x828 = -1LL;
	int64_t t151 = -82LL;

    t151 = ((x825^x826)+(x827*x828));

    if (t151 != 2147483629LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x829 = -9088;
	uint32_t x830 = 41U;
	uint16_t x832 = 4822U;
	uint32_t t152 = 369008U;

    t152 = ((x829^x830)+(x831*x832));

    if (t152 != 1220563U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x833 = INT32_MIN;
	volatile int16_t x834 = -1;
	uint8_t x835 = 7U;
	volatile int64_t x836 = -1LL;
	int64_t t153 = 2765289LL;

    t153 = ((x833^x834)+(x835*x836));

    if (t153 != 2147483640LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x841 = 66849364U;
	int64_t x842 = 12813349LL;
	uint8_t x843 = UINT8_MAX;
	int8_t x844 = INT8_MAX;

    t154 = ((x841^x842)+(x843*x844));

    if (t154 != 54529266LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x846 = 67U;
	volatile uint64_t x847 = UINT64_MAX;
	int32_t x848 = -1;
	uint64_t t155 = 29994201628614884LLU;

    t155 = ((x845^x846)+(x847*x848));

    if (t155 != 9223372036854775876LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x849 = INT64_MAX;
	volatile int32_t x850 = -1;
	int64_t x851 = 22092720996LL;
	int16_t x852 = 3;
	int64_t t156 = 664397017100928620LL;

    t156 = ((x849^x850)+(x851*x852));

    if (t156 != -9223371970576612820LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x853 = INT8_MIN;
	int64_t x854 = 5091051LL;
	int16_t x855 = INT16_MIN;
	static int8_t x856 = -1;

    t157 = ((x853^x854)+(x855*x856));

    if (t157 != -5058197LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x858 = UINT8_MAX;
	uint8_t x859 = UINT8_MAX;
	static int8_t x860 = -1;
	volatile int32_t t158 = -2602452;

    t158 = ((x857^x858)+(x859*x860));

    if (t158 != -384) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x862 = -28017683968743885LL;
	int8_t x863 = -1;
	int32_t x864 = -26;

    t159 = ((x861^x862)+(x863*x864));

    if (t159 != -28017684895311386LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x865 = INT32_MIN;
	static int16_t x866 = 1;
	int16_t x867 = -1;
	volatile int16_t x868 = -1;

    t160 = ((x865^x866)+(x867*x868));

    if (t160 != -2147483646) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x869 = 14857U;
	int16_t x870 = -354;
	int16_t x871 = -1;
	int32_t x872 = 392106;
	static volatile int32_t t161 = -1;

    t161 = ((x869^x870)+(x871*x872));

    if (t161 != -407315) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x873 = UINT16_MAX;
	static int64_t x874 = -15829840LL;
	int32_t x876 = -107116677;
	uint64_t t162 = 10973348923LLU;

    t162 = ((x873^x874)+(x875*x876));

    if (t162 != 91292628LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x877 = UINT16_MAX;
	volatile int64_t x878 = INT64_MAX;
	volatile int8_t x879 = 1;
	uint64_t x880 = 141LLU;
	uint64_t t163 = 340297LLU;

    t163 = ((x877^x878)+(x879*x880));

    if (t163 != 9223372036854710413LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x881 = INT64_MIN;
	int64_t x882 = INT64_MIN;
	int32_t x883 = INT32_MIN;
	volatile uint64_t t164 = 1912LLU;

    t164 = ((x881^x882)+(x883*x884));

    if (t164 != 18446206116170825728LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x885 = 219960;
	int16_t x886 = INT16_MAX;
	int16_t x887 = INT16_MIN;
	static int8_t x888 = INT8_MAX;
	int32_t t165 = 13;

    t165 = ((x885^x886)+(x887*x888));

    if (t165 != -3955513) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x889 = INT8_MIN;
	static uint32_t x890 = 284U;
	int64_t x892 = -1LL;

    t166 = ((x889^x890)+(x891*x892));

    if (t166 != 488312953572573LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x893 = 2;
	int16_t x894 = INT16_MAX;
	volatile uint64_t x895 = UINT64_MAX;

    t167 = ((x893^x894)+(x895*x896));

    if (t167 != 32766LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x897 = -7808;
	uint32_t x898 = UINT32_MAX;
	int16_t x899 = -1;

    t168 = ((x897^x898)+(x899*x900));

    if (t168 != 7935U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x901 = -1LL;
	static volatile uint64_t x902 = UINT64_MAX;
	volatile uint16_t x903 = UINT16_MAX;
	volatile int8_t x904 = INT8_MAX;
	static volatile uint64_t t169 = 995413199LLU;

    t169 = ((x901^x902)+(x903*x904));

    if (t169 != 8322945LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x906 = -1;
	volatile int64_t t170 = -13034887786300LL;

    t170 = ((x905^x906)+(x907*x908));

    if (t170 != -167657600LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x909 = 149553880360507LL;
	uint8_t x911 = 1U;
	int64_t x912 = -413664376676145LL;

    t171 = ((x909^x910)+(x911*x912));

    if (t171 != -264110496315629LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x913 = INT16_MAX;
	volatile uint32_t t172 = 1771U;

    t172 = ((x913^x914)+(x915*x916));

    if (t172 != 2201950132U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x917 = INT8_MAX;
	static int64_t x918 = 8LL;
	volatile uint8_t x920 = 22U;
	volatile int64_t t173 = -1LL;

    t173 = ((x917^x918)+(x919*x920));

    if (t173 != 1441889LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x927 = 1U;
	int16_t x928 = INT16_MIN;
	volatile uint32_t t174 = 1U;

    t174 = ((x925^x926)+(x927*x928));

    if (t174 != 4294934531U) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x933 = -192;
	static uint64_t x934 = UINT64_MAX;
	int16_t x935 = INT16_MIN;
	volatile uint64_t t175 = 272607274LLU;

    t175 = ((x933^x934)+(x935*x936));

    if (t175 != 18446744072635842751LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x937 = 70629055969211LL;
	volatile int32_t x938 = -5323145;
	int32_t x939 = 1047032;
	uint64_t x940 = 120599868662181LLU;
	volatile uint64_t t176 = 21022820349LLU;

    t176 = ((x937^x938)+(x939*x940));

    if (t176 != 15591386613790508708LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x941 = UINT64_MAX;
	uint32_t x942 = 57U;
	static int8_t x943 = INT8_MAX;
	volatile uint8_t x944 = 59U;
	static volatile uint64_t t177 = 435LLU;

    t177 = ((x941^x942)+(x943*x944));

    if (t177 != 7435LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x945 = 5630488341LLU;
	uint64_t x946 = 30548253239157953LLU;
	volatile uint16_t x947 = 1U;
	uint64_t x948 = 215902941390LLU;
	volatile uint64_t t178 = 40406LLU;

    t178 = ((x945^x946)+(x947*x948));

    if (t178 != 30548463814950050LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x949 = 15U;
	uint8_t x950 = 0U;
	static int64_t x951 = -1LL;

    t179 = ((x949^x950)+(x951*x952));

    if (t179 != -33LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x953 = -128225361090287110LL;
	int64_t x954 = 0LL;
	static int8_t x956 = INT8_MIN;
	volatile int64_t t180 = 346LL;

    t180 = ((x953^x954)+(x955*x956));

    if (t180 != -128225357854806534LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x965 = 5380081U;
	static int64_t x966 = -113393559253105493LL;
	uint16_t x968 = 526U;

    t181 = ((x965^x966)+(x967*x968));

    if (t181 != -113393559256445862LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x970 = INT8_MAX;
	uint16_t x971 = 39U;
	volatile uint32_t x972 = UINT32_MAX;

    t182 = ((x969^x970)+(x971*x972));

    if (t182 != 2147483736U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x974 = -25;
	int16_t x976 = INT16_MIN;

    t183 = ((x973^x974)+(x975*x976));

    if (t183 != 14895943U) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x997 = 60;
	int16_t x999 = -1;
	uint8_t x1000 = 36U;
	int32_t t184 = -6811095;

    t184 = ((x997^x998)+(x999*x1000));

    if (t184 != 2147483551) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1005 = 70627LLU;
	int64_t x1006 = INT64_MAX;
	volatile int8_t x1007 = INT8_MIN;
	volatile int32_t x1008 = -6;
	uint64_t t185 = 458487671720773838LLU;

    t185 = ((x1005^x1006)+(x1007*x1008));

    if (t185 != 9223372036854705948LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1009 = -185;
	volatile int64_t x1010 = 2381197902176LL;
	static int8_t x1011 = -1;
	volatile int64_t x1012 = -1LL;

    t186 = ((x1009^x1010)+(x1011*x1012));

    if (t186 != -2381197902296LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1013 = INT8_MIN;
	uint64_t x1014 = 623511LLU;
	volatile uint64_t x1015 = 1LLU;

    t187 = ((x1013^x1014)+(x1015*x1016));

    if (t187 != 18446744073708927895LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1019 = -1942063;
	uint16_t x1020 = 200U;
	int32_t t188 = 0;

    t188 = ((x1017^x1018)+(x1019*x1020));

    if (t188 != -388478009) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1021 = INT16_MAX;
	int16_t x1022 = 23;
	int8_t x1023 = INT8_MAX;
	static int16_t x1024 = INT16_MIN;
	int32_t t189 = -254993593;

    t189 = ((x1021^x1022)+(x1023*x1024));

    if (t189 != -4128792) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1029 = 1030114U;
	int16_t x1030 = -1;
	int32_t x1031 = -1;
	uint32_t t190 = 128553282U;

    t190 = ((x1029^x1030)+(x1031*x1032));

    if (t190 != 4293937178U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1037 = INT16_MAX;
	volatile int16_t x1038 = INT16_MIN;
	volatile int8_t x1039 = 4;
	int32_t x1040 = -1;
	static volatile int32_t t191 = -84525301;

    t191 = ((x1037^x1038)+(x1039*x1040));

    if (t191 != -5) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1041 = INT32_MAX;
	int64_t x1042 = INT64_MIN;
	int64_t x1043 = 17423974908LL;

    t192 = ((x1041^x1042)+(x1043*x1044));

    if (t192 != 9223609893683728563LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x1045 = INT16_MAX;
	volatile int64_t x1046 = -1LL;
	uint32_t x1047 = 689U;
	uint64_t x1048 = 7LLU;
	uint64_t t193 = 6283LLU;

    t193 = ((x1045^x1046)+(x1047*x1048));

    if (t193 != 18446744073709523671LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1050 = 183821LLU;
	volatile int32_t x1051 = -1;
	int64_t x1052 = INT64_MAX;
	uint64_t t194 = 183887790075LLU;

    t194 = ((x1049^x1050)+(x1051*x1052));

    if (t194 != 9223372036854959731LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x1053 = 971;
	uint8_t x1054 = 106U;
	int16_t x1055 = INT16_MIN;
	int16_t x1056 = 404;
	int32_t t195 = -2;

    t195 = ((x1053^x1054)+(x1055*x1056));

    if (t195 != -13237343) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1057 = -1LL;
	int16_t x1058 = INT16_MIN;
	uint32_t x1059 = 30890U;
	int8_t x1060 = 1;
	volatile int64_t t196 = 9LL;

    t196 = ((x1057^x1058)+(x1059*x1060));

    if (t196 != 63657LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1065 = INT32_MAX;
	int8_t x1067 = INT8_MAX;
	int64_t x1068 = 13495458644LL;

    t197 = ((x1065^x1066)+(x1067*x1068));

    if (t197 != 1711775764140LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1073 = -1LL;
	static int32_t x1074 = INT32_MIN;
	static uint64_t x1076 = 86LLU;
	static uint64_t t198 = 144LLU;

    t198 = ((x1073^x1074)+(x1075*x1076));

    if (t198 != 2147487173LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1077 = INT8_MAX;
	int16_t x1078 = 30;
	uint16_t x1079 = 423U;
	volatile uint64_t x1080 = 51LLU;
	static volatile uint64_t t199 = 6750589LLU;

    t199 = ((x1077^x1078)+(x1079*x1080));

    if (t199 != 21670LLU) { NG(); } else { ; }
	
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

