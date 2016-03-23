
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

int32_t x2 = INT32_MIN;
int32_t x13 = INT32_MIN;
int8_t x20 = INT8_MAX;
int8_t x23 = INT8_MIN;
static volatile uint32_t x24 = UINT32_MAX;
uint32_t t5 = UINT32_MAX;
static int16_t x26 = 124;
volatile int32_t t6 = -14021961;
uint16_t x29 = 0U;
uint64_t x30 = 21802477LLU;
static volatile int16_t x41 = -67;
uint16_t x43 = UINT16_MAX;
uint32_t x56 = 11349U;
volatile uint32_t t13 = 144U;
uint32_t t16 = 84U;
int16_t x70 = 197;
static uint64_t x71 = 2591847LLU;
uint32_t x73 = 12U;
int64_t t20 = INT64_MAX;
static int8_t x89 = 2;
int32_t x90 = -995614044;
uint16_t x92 = 251U;
uint32_t x100 = 597U;
int64_t x103 = INT64_MIN;
int8_t x107 = INT8_MIN;
uint8_t x124 = UINT8_MAX;
volatile int32_t t30 = -65;
int64_t x133 = 3497918955675274330LL;
volatile int64_t t35 = INT64_MIN;
int32_t x149 = -1;
static int8_t x154 = 1;
uint32_t x155 = UINT32_MAX;
volatile int64_t t39 = -234287067891707126LL;
uint32_t x161 = 8161U;
int16_t x166 = -917;
uint32_t x167 = 221190976U;
int32_t x188 = INT32_MIN;
volatile uint32_t x191 = UINT32_MAX;
uint32_t t47 = 16786715U;
volatile uint64_t x193 = 453232107LLU;
int32_t x196 = -1;
volatile int32_t x205 = INT32_MIN;
uint8_t x210 = 3U;
volatile int16_t x214 = INT16_MIN;
static volatile int8_t x225 = -1;
int32_t x226 = -51;
int64_t x228 = INT64_MAX;
uint8_t x234 = 4U;
int64_t t58 = INT64_MAX;
static uint32_t x242 = 1489529U;
static volatile int32_t t61 = -5;
uint16_t x254 = 5U;
static int64_t x260 = INT64_MIN;
uint8_t x270 = UINT8_MAX;
static int32_t x272 = INT32_MAX;
uint8_t x278 = 18U;
uint8_t x286 = UINT8_MAX;
int8_t x287 = INT8_MIN;
int32_t t70 = -382945;
int16_t x290 = INT16_MAX;
volatile uint8_t x295 = 8U;
int16_t x303 = -1;
int64_t x304 = -67303271187710374LL;
volatile int16_t x309 = INT16_MAX;
int16_t x329 = INT16_MAX;
static int32_t x330 = INT32_MAX;
volatile int16_t x332 = INT16_MIN;
volatile int32_t t80 = 129742;
static int8_t x333 = INT8_MIN;
int8_t x337 = -1;
static int64_t x345 = INT64_MIN;
volatile int64_t x352 = INT64_MIN;
uint32_t x353 = UINT32_MAX;
int64_t x355 = INT64_MIN;
volatile int64_t t86 = 129040796LL;
uint32_t x360 = UINT32_MAX;
volatile int8_t x362 = INT8_MAX;
int64_t x375 = -1LL;
uint16_t x377 = 6U;
static volatile int32_t t93 = 13;
int64_t x387 = 120866LL;
static int8_t x390 = -1;
volatile int64_t x394 = INT64_MIN;
int32_t t96 = -1070522461;
uint16_t x397 = UINT16_MAX;
uint8_t x403 = UINT8_MAX;
int32_t x408 = -9;
static int8_t x413 = -4;
int64_t x414 = 15677648142506267LL;
volatile int64_t t102 = 170547LL;
int64_t x423 = INT64_MIN;
int64_t t104 = INT64_MIN;
int32_t x430 = INT32_MIN;
int64_t x435 = INT64_MAX;
volatile int64_t t106 = 28589096211LL;
int32_t x441 = -1;
uint64_t x442 = UINT64_MAX;
int16_t x443 = 1;
int32_t x444 = 686879;
static volatile uint32_t x448 = 2006136U;
volatile int8_t x450 = INT8_MAX;
volatile int32_t t110 = 7;
uint64_t x453 = UINT64_MAX;
int8_t x459 = INT8_MAX;
static volatile uint64_t t113 = 3LLU;
static int32_t x466 = INT32_MIN;
static uint8_t x468 = 10U;
int32_t t114 = -145957835;
int64_t x474 = 2687906477131793832LL;
uint8_t x476 = 23U;
static volatile int16_t x478 = -1;
int16_t x488 = -125;
int32_t t120 = -76961;
uint8_t x498 = 5U;
volatile int8_t x501 = INT8_MIN;
static uint64_t t123 = UINT64_MAX;
int64_t x508 = -2072836811931LL;
volatile int64_t t124 = 8671802LL;
uint64_t x509 = UINT64_MAX;
static int8_t x510 = INT8_MAX;
int16_t x512 = -129;
volatile uint64_t t126 = 3589LLU;
volatile uint32_t x521 = 117101U;
volatile int64_t x525 = INT64_MIN;
int64_t x526 = 3569LL;
int8_t x527 = INT8_MIN;
static volatile int64_t t130 = INT64_MAX;
uint64_t x541 = 518190232990117601LLU;
int64_t x544 = -25LL;
int64_t t133 = -40615513866626LL;
int8_t x546 = -9;
uint64_t t135 = 1018450900014LLU;
volatile int32_t t136 = -1;
static uint64_t x558 = 10821650876825555LLU;
uint8_t x561 = UINT8_MAX;
volatile uint16_t x562 = 28U;
int64_t x566 = -102230LL;
int64_t x570 = INT64_MAX;
uint64_t x571 = 257808330805LLU;
static volatile int16_t x586 = 1;
int64_t x590 = INT64_MAX;
int64_t x591 = 115LL;
int8_t x598 = 54;
uint64_t x607 = 593547LLU;
volatile uint64_t x610 = 4986746LLU;
int64_t x615 = -1LL;
static int8_t x616 = INT8_MIN;
static int64_t t151 = -80759973LL;
int64_t t152 = 4482482909038LL;
static int32_t x622 = 47;
volatile int32_t x631 = INT32_MIN;
int32_t x635 = -1;
volatile int32_t t156 = 82162980;
int16_t x639 = -321;
static int32_t x646 = -1;
uint32_t x649 = UINT32_MAX;
int64_t t160 = 6LL;
static int32_t x654 = INT32_MAX;
int32_t x660 = INT32_MAX;
int16_t x662 = 0;
static uint16_t x664 = 418U;
volatile int32_t t163 = 107180;
int8_t x675 = INT8_MAX;
int32_t x676 = -371230048;
volatile int8_t x678 = -1;
static volatile int32_t x682 = INT32_MAX;
static volatile int16_t x683 = INT16_MAX;
volatile int32_t x684 = -1;
volatile int32_t t170 = 182677;
uint64_t x696 = UINT64_MAX;
static uint32_t x697 = UINT32_MAX;
int32_t x698 = INT32_MIN;
int64_t x701 = -1357453922548LL;
static volatile uint8_t x702 = UINT8_MAX;
volatile int16_t x706 = -1;
static int64_t x707 = INT64_MAX;
int32_t x712 = 370;
volatile uint16_t x714 = 0U;
volatile int16_t x715 = -1;
int32_t t176 = 55783888;
int64_t x717 = INT64_MIN;
int32_t x721 = -1;
volatile int32_t t178 = 4094;
int32_t x727 = 41;
uint64_t t180 = 31086237985LLU;
int64_t t183 = INT64_MAX;
static int64_t x751 = INT64_MIN;
volatile int8_t x752 = 15;
volatile int32_t t189 = -72604371;
static uint16_t x769 = 1U;
int8_t x772 = INT8_MIN;
int16_t x775 = INT16_MIN;
volatile int8_t x776 = INT8_MIN;
static uint64_t x778 = UINT64_MAX;
uint16_t x780 = 10235U;
volatile int32_t t192 = -61859850;
static volatile int32_t t193 = 806755574;
int8_t x791 = INT8_MIN;
int8_t x792 = INT8_MIN;
volatile int32_t t195 = 9712;
int16_t x798 = INT16_MAX;
static int64_t x800 = 17007304075648119LL;
int64_t x802 = -1LL;
static int8_t x805 = 60;


void f0(void) {
    	int16_t x1 = -1;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 2U;
	volatile int32_t t0 = -4;

    t0 = (((x1>x2)/x3)^x4);

    if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = UINT8_MAX;
	volatile int32_t x6 = INT32_MIN;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = INT64_MIN;

    t1 = (((x5>x6)/x7)^x8);

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int8_t x10 = INT8_MIN;
	static int8_t x11 = INT8_MAX;
	int16_t x12 = -12;
	volatile int32_t t2 = -228451;

    t2 = (((x9>x10)/x11)^x12);

    if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MAX;
	uint8_t x15 = UINT8_MAX;
	int32_t x16 = -6;
	int32_t t3 = 124187829;

    t3 = (((x13>x14)/x15)^x16);

    if (t3 != -6) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 0;
	static int64_t x18 = INT64_MIN;
	volatile int32_t x19 = -62658162;
	static int32_t t4 = 332;

    t4 = (((x17>x18)/x19)^x20);

    if (t4 != 127) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MIN;

    t5 = (((x21>x22)/x23)^x24);

    if (t5 != UINT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -29593496;
	int16_t x27 = -247;
	static volatile int32_t x28 = -1;

    t6 = (((x25>x26)/x27)^x28);

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x31 = 14;
	volatile int32_t x32 = INT32_MIN;
	volatile int32_t t7 = INT32_MIN;

    t7 = (((x29>x30)/x31)^x32);

    if (t7 != INT32_MIN) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x33 = INT8_MAX;
	static int32_t x34 = INT32_MIN;
	volatile uint64_t x35 = 1LLU;
	int32_t x36 = 73850;
	volatile uint64_t t8 = 41LLU;

    t8 = (((x33>x34)/x35)^x36);

    if (t8 != 73851LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = INT16_MIN;
	int8_t x38 = -1;
	int16_t x39 = -2;
	int16_t x40 = -1;
	int32_t t9 = -471;

    t9 = (((x37>x38)/x39)^x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x42 = 10183U;
	volatile uint64_t x44 = 299869203229556502LLU;
	static volatile uint64_t t10 = 1953LLU;

    t10 = (((x41>x42)/x43)^x44);

    if (t10 != 299869203229556502LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 2U;
	int16_t x46 = -875;
	volatile uint32_t x47 = 256176036U;
	static uint16_t x48 = 384U;
	volatile uint32_t t11 = 17U;

    t11 = (((x45>x46)/x47)^x48);

    if (t11 != 384U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int32_t x50 = -1;
	uint32_t x51 = UINT32_MAX;
	volatile int32_t x52 = INT32_MIN;
	volatile uint32_t t12 = 1537432U;

    t12 = (((x49>x50)/x51)^x52);

    if (t12 != 2147483648U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MAX;
	volatile int8_t x54 = INT8_MIN;
	uint16_t x55 = 7U;

    t13 = (((x53>x54)/x55)^x56);

    if (t13 != 11349U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	volatile int16_t x58 = -106;
	uint8_t x59 = 37U;
	uint64_t x60 = 117120277941LLU;
	static volatile uint64_t t14 = 1LLU;

    t14 = (((x57>x58)/x59)^x60);

    if (t14 != 117120277941LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = -1LL;
	int32_t x62 = INT32_MAX;
	static uint64_t x63 = 1236004206158224LLU;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t15 = 13810LLU;

    t15 = (((x61>x62)/x63)^x64);

    if (t15 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x65 = 21434U;
	int16_t x66 = -93;
	uint8_t x67 = UINT8_MAX;
	uint32_t x68 = 34225U;

    t16 = (((x65>x66)/x67)^x68);

    if (t16 != 34225U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MIN;
	int64_t x72 = INT64_MAX;
	static uint64_t t17 = 8713682875666728LLU;

    t17 = (((x69>x70)/x71)^x72);

    if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static volatile uint32_t x74 = 1664182358U;
	static uint64_t x75 = 14830395776876LLU;
	static int8_t x76 = INT8_MIN;
	static uint64_t t18 = 14606833928978LLU;

    t18 = (((x73>x74)/x75)^x76);

    if (t18 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	static int16_t x78 = -14;
	volatile uint32_t x79 = 5U;
	static int8_t x80 = INT8_MIN;
	volatile uint32_t t19 = 2678U;

    t19 = (((x77>x78)/x79)^x80);

    if (t19 != 4294967168U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = 990855842U;
	int8_t x82 = INT8_MAX;
	static volatile uint16_t x83 = 14353U;
	int64_t x84 = INT64_MAX;

    t20 = (((x81>x82)/x83)^x84);

    if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = -990128LL;
	uint16_t x86 = UINT16_MAX;
	int64_t x87 = INT64_MIN;
	uint32_t x88 = 872632U;
	static volatile int64_t t21 = 492842322LL;

    t21 = (((x85>x86)/x87)^x88);

    if (t21 != 872632LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x91 = 7;
	volatile int32_t t22 = 122;

    t22 = (((x89>x90)/x91)^x92);

    if (t22 != 251) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = -508966369344LL;
	uint8_t x94 = 89U;
	uint64_t x95 = 481563635LLU;
	int32_t x96 = INT32_MAX;
	volatile uint64_t t23 = 511039LLU;

    t23 = (((x93>x94)/x95)^x96);

    if (t23 != 2147483647LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 12U;
	volatile uint64_t x98 = 15364017LLU;
	int8_t x99 = -1;
	uint32_t t24 = 2335068U;

    t24 = (((x97>x98)/x99)^x100);

    if (t24 != 597U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x101 = INT64_MIN;
	static int16_t x102 = 0;
	static uint64_t x104 = 863415383193469269LLU;
	volatile uint64_t t25 = 1343LLU;

    t25 = (((x101>x102)/x103)^x104);

    if (t25 != 863415383193469269LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint8_t x105 = 3U;
	int32_t x106 = 20426919;
	int16_t x108 = 441;
	int32_t t26 = -740045198;

    t26 = (((x105>x106)/x107)^x108);

    if (t26 != 441) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x109 = INT64_MIN;
	uint8_t x110 = UINT8_MAX;
	volatile int64_t x111 = -1LL;
	volatile uint32_t x112 = UINT32_MAX;
	static int64_t t27 = 0LL;

    t27 = (((x109>x110)/x111)^x112);

    if (t27 != 4294967295LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x113 = 1U;
	int8_t x114 = 1;
	int16_t x115 = INT16_MAX;
	static uint8_t x116 = UINT8_MAX;
	int32_t t28 = -349616;

    t28 = (((x113>x114)/x115)^x116);

    if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x117 = 21;
	uint16_t x118 = 7432U;
	static int16_t x119 = INT16_MIN;
	int32_t x120 = -51;
	volatile int32_t t29 = 46142228;

    t29 = (((x117>x118)/x119)^x120);

    if (t29 != -51) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 7U;
	volatile int8_t x122 = 45;
	volatile uint8_t x123 = 8U;

    t30 = (((x121>x122)/x123)^x124);

    if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x125 = 4U;
	int8_t x126 = 0;
	int64_t x127 = -3540LL;
	int16_t x128 = -1;
	volatile int64_t t31 = -87085761558761564LL;

    t31 = (((x125>x126)/x127)^x128);

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = INT8_MIN;
	volatile int16_t x130 = -1789;
	static int32_t x131 = INT32_MIN;
	int32_t x132 = -46416;
	static volatile int32_t t32 = -456961;

    t32 = (((x129>x130)/x131)^x132);

    if (t32 != -46416) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x134 = -1;
	uint16_t x135 = 164U;
	static int32_t x136 = -1;
	volatile int32_t t33 = 16621197;

    t33 = (((x133>x134)/x135)^x136);

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x137 = -80930;
	static int16_t x138 = INT16_MAX;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = -1;
	static volatile int32_t t34 = -5;

    t34 = (((x137>x138)/x139)^x140);

    if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = 1479244LL;
	static int64_t x142 = -1LL;
	int64_t x143 = INT64_MAX;
	static int64_t x144 = INT64_MIN;

    t35 = (((x141>x142)/x143)^x144);

    if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = INT16_MIN;
	volatile int16_t x146 = INT16_MIN;
	volatile uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	uint32_t t36 = 111U;

    t36 = (((x145>x146)/x147)^x148);

    if (t36 != 4294934528U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x150 = -1;
	uint16_t x151 = 3U;
	static int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -17;

    t37 = (((x149>x150)/x151)^x152);

    if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x153 = 48346590;
	uint8_t x156 = 12U;
	volatile uint32_t t38 = 220495223U;

    t38 = (((x153>x154)/x155)^x156);

    if (t38 != 12U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int8_t x160 = -32;

    t39 = (((x157>x158)/x159)^x160);

    if (t39 != -32LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x162 = 69690888010LL;
	uint64_t x163 = 103937405618LLU;
	uint16_t x164 = 2705U;
	uint64_t t40 = 166400008984442386LLU;

    t40 = (((x161>x162)/x163)^x164);

    if (t40 != 2705LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint16_t x165 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	static uint32_t t41 = 218974U;

    t41 = (((x165>x166)/x167)^x168);

    if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x169 = INT16_MAX;
	int8_t x170 = INT8_MAX;
	int64_t x171 = -1LL;
	int64_t x172 = INT64_MAX;
	int64_t t42 = INT64_MIN;

    t42 = (((x169>x170)/x171)^x172);

    if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x173 = -1LL;
	int32_t x174 = -441798;
	int64_t x175 = -1LL;
	int16_t x176 = -167;
	volatile int64_t t43 = -188244088639LL;

    t43 = (((x173>x174)/x175)^x176);

    if (t43 != 166LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x177 = UINT64_MAX;
	uint64_t x178 = 5LLU;
	volatile uint64_t x179 = 429365730095383LLU;
	volatile int8_t x180 = -1;
	uint64_t t44 = UINT64_MAX;

    t44 = (((x177>x178)/x179)^x180);

    if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x181 = -1LL;
	static uint16_t x182 = 37U;
	int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -12790;

    t45 = (((x181>x182)/x183)^x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x185 = -42358847264834LL;
	int64_t x186 = INT64_MIN;
	static int64_t x187 = INT64_MAX;
	volatile int64_t t46 = 69773LL;

    t46 = (((x185>x186)/x187)^x188);

    if (t46 != -2147483648LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x189 = INT8_MAX;
	volatile uint8_t x190 = 0U;
	int16_t x192 = INT16_MAX;

    t47 = (((x189>x190)/x191)^x192);

    if (t47 != 32767U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x194 = 0U;
	int64_t x195 = -1LL;
	volatile int64_t t48 = -91LL;

    t48 = (((x193>x194)/x195)^x196);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 3U;
	int32_t x198 = -1;
	static int16_t x199 = INT16_MIN;
	int8_t x200 = 0;
	static volatile int32_t t49 = 430250385;

    t49 = (((x197>x198)/x199)^x200);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x201 = -1;
	volatile int64_t x202 = INT64_MAX;
	uint8_t x203 = 21U;
	int16_t x204 = INT16_MAX;
	int32_t t50 = -1618514;

    t50 = (((x201>x202)/x203)^x204);

    if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x206 = -1;
	int16_t x207 = INT16_MAX;
	static int16_t x208 = 0;
	int32_t t51 = -177862;

    t51 = (((x205>x206)/x207)^x208);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = -186160LL;
	int32_t x211 = INT32_MIN;
	int32_t x212 = -1;
	int32_t t52 = 991683847;

    t52 = (((x209>x210)/x211)^x212);

    if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 638LLU;
	volatile uint64_t x215 = 369LLU;
	uint8_t x216 = 0U;
	volatile uint64_t t53 = 131114120LLU;

    t53 = (((x213>x214)/x215)^x216);

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x217 = 32U;
	volatile int64_t x218 = INT64_MIN;
	static uint32_t x219 = 2718734U;
	int16_t x220 = -5;
	uint32_t t54 = 336943332U;

    t54 = (((x217>x218)/x219)^x220);

    if (t54 != 4294967291U) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	static int32_t x222 = INT32_MIN;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	int32_t t55 = 312459354;

    t55 = (((x221>x222)/x223)^x224);

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x227 = INT16_MIN;
	volatile int64_t t56 = INT64_MAX;

    t56 = (((x225>x226)/x227)^x228);

    if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x229 = 90U;
	int16_t x230 = INT16_MIN;
	int16_t x231 = INT16_MIN;
	int16_t x232 = 2;
	volatile int32_t t57 = -1285995;

    t57 = (((x229>x230)/x231)^x232);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x233 = INT32_MIN;
	volatile uint16_t x235 = 52U;
	static int64_t x236 = INT64_MAX;

    t58 = (((x233>x234)/x235)^x236);

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	volatile int8_t x238 = -1;
	volatile int8_t x239 = -7;
	int8_t x240 = INT8_MAX;
	int32_t t59 = 12214;

    t59 = (((x237>x238)/x239)^x240);

    if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x241 = 1029518592754339511LL;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t60 = INT32_MIN;

    t60 = (((x241>x242)/x243)^x244);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -252;
	static volatile int32_t x246 = INT32_MAX;
	int16_t x247 = INT16_MIN;
	int32_t x248 = 4;

    t61 = (((x245>x246)/x247)^x248);

    if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x250 = 60243160LLU;
	int64_t x251 = INT64_MAX;
	volatile int16_t x252 = INT16_MAX;
	int64_t t62 = -4419952275784567411LL;

    t62 = (((x249>x250)/x251)^x252);

    if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x253 = 0;
	int64_t x255 = INT64_MIN;
	static int16_t x256 = INT16_MAX;
	volatile int64_t t63 = -42LL;

    t63 = (((x253>x254)/x255)^x256);

    if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x257 = 97U;
	int32_t x258 = -1550416;
	int8_t x259 = -1;
	int64_t t64 = INT64_MAX;

    t64 = (((x257>x258)/x259)^x260);

    if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	volatile uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MIN;
	int8_t x264 = 20;
	int32_t t65 = 2027452;

    t65 = (((x261>x262)/x263)^x264);

    if (t65 != 20) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = -1701188648849LL;
	int64_t x271 = INT64_MAX;
	volatile int64_t t66 = -132369385034662LL;

    t66 = (((x269>x270)/x271)^x272);

    if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int32_t x273 = -692431004;
	int16_t x274 = INT16_MAX;
	int16_t x275 = INT16_MAX;
	int32_t x276 = -1;
	int32_t t67 = 88;

    t67 = (((x273>x274)/x275)^x276);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x277 = 160U;
	int32_t x279 = 2062;
	int32_t x280 = INT32_MAX;
	int32_t t68 = INT32_MAX;

    t68 = (((x277>x278)/x279)^x280);

    if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = 1;
	static int64_t x282 = -1LL;
	uint16_t x283 = 17516U;
	int32_t x284 = INT32_MIN;
	volatile int32_t t69 = INT32_MIN;

    t69 = (((x281>x282)/x283)^x284);

    if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x285 = 1;
	int8_t x288 = -58;

    t70 = (((x285>x286)/x287)^x288);

    if (t70 != -58) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x289 = -1;
	int32_t x291 = -1;
	int8_t x292 = INT8_MAX;
	int32_t t71 = 2065;

    t71 = (((x289>x290)/x291)^x292);

    if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x293 = INT16_MIN;
	static uint16_t x294 = UINT16_MAX;
	uint8_t x296 = 25U;
	volatile int32_t t72 = 107667239;

    t72 = (((x293>x294)/x295)^x296);

    if (t72 != 25) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x301 = 55U;
	static int16_t x302 = INT16_MIN;
	volatile int64_t t73 = 1LL;

    t73 = (((x301>x302)/x303)^x304);

    if (t73 != -67303271187710374LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x305 = INT8_MAX;
	uint8_t x306 = 86U;
	volatile uint8_t x307 = 99U;
	int16_t x308 = INT16_MIN;
	static int32_t t74 = 13278078;

    t74 = (((x305>x306)/x307)^x308);

    if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x310 = 101U;
	uint8_t x311 = 60U;
	uint16_t x312 = 17U;
	volatile int32_t t75 = -1;

    t75 = (((x309>x310)/x311)^x312);

    if (t75 != 17) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x313 = -1LL;
	int8_t x314 = INT8_MIN;
	static int64_t x315 = INT64_MIN;
	uint16_t x316 = UINT16_MAX;
	static int64_t t76 = 2129243544778859LL;

    t76 = (((x313>x314)/x315)^x316);

    if (t76 != 65535LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x317 = 102U;
	int8_t x318 = -1;
	int64_t x319 = -34918391325369663LL;
	int32_t x320 = INT32_MIN;
	volatile int64_t t77 = -5419LL;

    t77 = (((x317>x318)/x319)^x320);

    if (t77 != -2147483648LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x321 = 5385;
	uint32_t x322 = UINT32_MAX;
	int8_t x323 = 1;
	uint64_t x324 = UINT64_MAX;
	static uint64_t t78 = UINT64_MAX;

    t78 = (((x321>x322)/x323)^x324);

    if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x325 = 317U;
	volatile uint64_t x326 = 336385358436252LLU;
	static int64_t x327 = 3383468014038883LL;
	uint32_t x328 = 65U;
	volatile int64_t t79 = 1LL;

    t79 = (((x325>x326)/x327)^x328);

    if (t79 != 65LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x331 = INT16_MAX;

    t80 = (((x329>x330)/x331)^x332);

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x334 = 8696799;
	volatile uint16_t x335 = UINT16_MAX;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t81 = -3649319;

    t81 = (((x333>x334)/x335)^x336);

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x338 = -1388933;
	int16_t x339 = INT16_MIN;
	int16_t x340 = INT16_MAX;
	int32_t t82 = -5;

    t82 = (((x337>x338)/x339)^x340);

    if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = INT32_MIN;
	uint64_t x342 = 39181LLU;
	int16_t x343 = -1;
	static uint8_t x344 = UINT8_MAX;
	volatile int32_t t83 = -30465;

    t83 = (((x341>x342)/x343)^x344);

    if (t83 != -256) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x346 = INT16_MIN;
	uint32_t x347 = 209634U;
	static volatile int32_t x348 = 1;
	volatile uint32_t t84 = 10023U;

    t84 = (((x345>x346)/x347)^x348);

    if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x349 = 2901301784717515LLU;
	int16_t x350 = -4045;
	int32_t x351 = 3856582;
	int64_t t85 = INT64_MIN;

    t85 = (((x349>x350)/x351)^x352);

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x354 = -1;
	int16_t x356 = INT16_MAX;

    t86 = (((x353>x354)/x355)^x356);

    if (t86 != 32767LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x357 = -1;
	static uint32_t x358 = UINT32_MAX;
	int8_t x359 = INT8_MAX;
	volatile uint32_t t87 = UINT32_MAX;

    t87 = (((x357>x358)/x359)^x360);

    if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x361 = 21811621LLU;
	uint32_t x363 = 14051226U;
	volatile int16_t x364 = INT16_MIN;
	volatile uint32_t t88 = 5513U;

    t88 = (((x361>x362)/x363)^x364);

    if (t88 != 4294934528U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x365 = 957240LLU;
	uint64_t x366 = 326896LLU;
	uint16_t x367 = 6994U;
	int64_t x368 = -1LL;
	volatile int64_t t89 = -49539647382LL;

    t89 = (((x365>x366)/x367)^x368);

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x369 = -1;
	static int64_t x370 = INT64_MIN;
	uint16_t x371 = 3164U;
	volatile int64_t x372 = INT64_MIN;
	int64_t t90 = INT64_MIN;

    t90 = (((x369>x370)/x371)^x372);

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = INT16_MAX;
	volatile int32_t x374 = INT32_MAX;
	uint64_t x376 = 30454LLU;
	uint64_t t91 = 11275580LLU;

    t91 = (((x373>x374)/x375)^x376);

    if (t91 != 30454LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x378 = 2U;
	static int32_t x379 = INT32_MIN;
	static int8_t x380 = INT8_MIN;
	static volatile int32_t t92 = -134114724;

    t92 = (((x377>x378)/x379)^x380);

    if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = -127;
	int32_t x382 = -1;
	volatile uint8_t x383 = 31U;
	int16_t x384 = INT16_MIN;

    t93 = (((x381>x382)/x383)^x384);

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x385 = 0U;
	static volatile uint16_t x386 = 7088U;
	int32_t x388 = 3;
	volatile int64_t t94 = 463230LL;

    t94 = (((x385>x386)/x387)^x388);

    if (t94 != 3LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x389 = 1;
	static uint64_t x391 = 49104313418123LLU;
	int64_t x392 = -1LL;
	static uint64_t t95 = UINT64_MAX;

    t95 = (((x389>x390)/x391)^x392);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x393 = 71U;
	int16_t x395 = 33;
	int16_t x396 = -1875;

    t96 = (((x393>x394)/x395)^x396);

    if (t96 != -1875) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x398 = INT32_MIN;
	static volatile int8_t x399 = -11;
	int64_t x400 = INT64_MAX;
	int64_t t97 = INT64_MAX;

    t97 = (((x397>x398)/x399)^x400);

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x401 = INT8_MAX;
	int16_t x402 = -1;
	int16_t x404 = INT16_MIN;
	volatile int32_t t98 = 76685;

    t98 = (((x401>x402)/x403)^x404);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x405 = -4787;
	static volatile int32_t x406 = 101;
	int8_t x407 = INT8_MAX;
	static volatile int32_t t99 = 129818;

    t99 = (((x405>x406)/x407)^x408);

    if (t99 != -9) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x409 = INT32_MIN;
	static uint8_t x410 = 11U;
	uint16_t x411 = 30U;
	int32_t x412 = INT32_MIN;
	int32_t t100 = INT32_MIN;

    t100 = (((x409>x410)/x411)^x412);

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x415 = INT32_MIN;
	static int32_t x416 = 9;
	static volatile int32_t t101 = 1;

    t101 = (((x413>x414)/x415)^x416);

    if (t101 != 9) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x417 = UINT64_MAX;
	uint16_t x418 = 0U;
	volatile int64_t x419 = -8007257856LL;
	int64_t x420 = -1LL;

    t102 = (((x417>x418)/x419)^x420);

    if (t102 != -1LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = -35;
	int8_t x422 = 1;
	int64_t x424 = INT64_MAX;
	volatile int64_t t103 = INT64_MAX;

    t103 = (((x421>x422)/x423)^x424);

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x425 = INT64_MIN;
	int16_t x426 = 225;
	uint16_t x427 = UINT16_MAX;
	volatile int64_t x428 = INT64_MIN;

    t104 = (((x425>x426)/x427)^x428);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x429 = INT64_MIN;
	int8_t x431 = INT8_MAX;
	volatile uint8_t x432 = 46U;
	int32_t t105 = 5660;

    t105 = (((x429>x430)/x431)^x432);

    if (t105 != 46) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x433 = INT32_MAX;
	uint16_t x434 = UINT16_MAX;
	int32_t x436 = -303;

    t106 = (((x433>x434)/x435)^x436);

    if (t106 != -303LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x437 = INT32_MIN;
	int32_t x438 = INT32_MAX;
	int16_t x439 = INT16_MAX;
	int8_t x440 = INT8_MAX;
	static int32_t t107 = 771;

    t107 = (((x437>x438)/x439)^x440);

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t t108 = 1;

    t108 = (((x441>x442)/x443)^x444);

    if (t108 != 686879) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x445 = 14U;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = INT32_MAX;
	volatile uint32_t t109 = 454064U;

    t109 = (((x445>x446)/x447)^x448);

    if (t109 != 2006136U) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = -12;
	uint8_t x451 = UINT8_MAX;
	static int8_t x452 = 22;

    t110 = (((x449>x450)/x451)^x452);

    if (t110 != 22) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x454 = INT32_MIN;
	volatile int16_t x455 = -1;
	volatile int16_t x456 = INT16_MAX;
	int32_t t111 = 16655;

    t111 = (((x453>x454)/x455)^x456);

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = -40;
	int64_t x458 = INT64_MAX;
	static int8_t x460 = INT8_MAX;
	volatile int32_t t112 = 0;

    t112 = (((x457>x458)/x459)^x460);

    if (t112 != 127) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x461 = INT8_MIN;
	uint64_t x462 = UINT64_MAX;
	static uint64_t x463 = UINT64_MAX;
	int64_t x464 = -80197425177525600LL;

    t113 = (((x461>x462)/x463)^x464);

    if (t113 != 18366546648532026016LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x465 = INT16_MAX;
	int32_t x467 = INT32_MIN;

    t114 = (((x465>x466)/x467)^x468);

    if (t114 != 10) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x469 = UINT8_MAX;
	int32_t x470 = INT32_MIN;
	int8_t x471 = 11;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t115 = 382;

    t115 = (((x469>x470)/x471)^x472);

    if (t115 != 255) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x473 = INT16_MIN;
	uint16_t x475 = 359U;
	static int32_t t116 = 4808147;

    t116 = (((x473>x474)/x475)^x476);

    if (t116 != 23) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x477 = 106;
	int8_t x479 = INT8_MIN;
	static uint64_t x480 = 19038444950LLU;
	uint64_t t117 = 218407694740881143LLU;

    t117 = (((x477>x478)/x479)^x480);

    if (t117 != 19038444950LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = 1111;
	int16_t x482 = INT16_MAX;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t118 = -273873746;

    t118 = (((x481>x482)/x483)^x484);

    if (t118 != -32768) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x485 = 3587461U;
	int32_t x486 = 2173676;
	static int16_t x487 = -7109;
	volatile int32_t t119 = -108;

    t119 = (((x485>x486)/x487)^x488);

    if (t119 != -125) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x489 = INT8_MAX;
	volatile int16_t x490 = INT16_MIN;
	int16_t x491 = 7;
	static uint16_t x492 = UINT16_MAX;

    t120 = (((x489>x490)/x491)^x492);

    if (t120 != 65535) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x493 = 1304304LLU;
	int8_t x494 = INT8_MIN;
	uint8_t x495 = UINT8_MAX;
	int8_t x496 = INT8_MAX;
	int32_t t121 = -4275;

    t121 = (((x493>x494)/x495)^x496);

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x497 = 10U;
	volatile uint16_t x499 = UINT16_MAX;
	uint8_t x500 = UINT8_MAX;
	static int32_t t122 = 0;

    t122 = (((x497>x498)/x499)^x500);

    if (t122 != 255) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x502 = 8004U;
	int8_t x503 = 13;
	static uint64_t x504 = UINT64_MAX;

    t123 = (((x501>x502)/x503)^x504);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x505 = UINT32_MAX;
	int8_t x506 = INT8_MIN;
	volatile int32_t x507 = INT32_MIN;

    t124 = (((x505>x506)/x507)^x508);

    if (t124 != -2072836811931LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x511 = INT32_MAX;
	static volatile int32_t t125 = 31;

    t125 = (((x509>x510)/x511)^x512);

    if (t125 != -129) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x513 = INT16_MIN;
	volatile int8_t x514 = -1;
	volatile uint32_t x515 = UINT32_MAX;
	uint64_t x516 = 45505834243895LLU;

    t126 = (((x513>x514)/x515)^x516);

    if (t126 != 45505834243895LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = INT8_MIN;
	static uint16_t x518 = UINT16_MAX;
	volatile uint8_t x519 = UINT8_MAX;
	int16_t x520 = INT16_MIN;
	volatile int32_t t127 = 27;

    t127 = (((x517>x518)/x519)^x520);

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x522 = 31746122328LL;
	static int64_t x523 = 16309025508241424LL;
	int16_t x524 = INT16_MIN;
	int64_t t128 = -4193094445105LL;

    t128 = (((x521>x522)/x523)^x524);

    if (t128 != -32768LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x528 = -1;
	static int32_t t129 = -15079;

    t129 = (((x525>x526)/x527)^x528);

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x529 = INT64_MIN;
	int16_t x530 = INT16_MAX;
	uint8_t x531 = 118U;
	int64_t x532 = INT64_MAX;

    t130 = (((x529>x530)/x531)^x532);

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x533 = INT64_MIN;
	int8_t x534 = -1;
	volatile uint8_t x535 = 49U;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t131 = 96415;

    t131 = (((x533>x534)/x535)^x536);

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x537 = -1;
	static uint8_t x538 = 0U;
	uint8_t x539 = 49U;
	static volatile uint64_t x540 = 52991281982LLU;
	volatile uint64_t t132 = 54884743LLU;

    t132 = (((x537>x538)/x539)^x540);

    if (t132 != 52991281982LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x542 = 213U;
	int16_t x543 = 1985;

    t133 = (((x541>x542)/x543)^x544);

    if (t133 != -25LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x545 = UINT64_MAX;
	static int32_t x547 = -105427454;
	static uint16_t x548 = 1U;
	volatile int32_t t134 = 79;

    t134 = (((x545>x546)/x547)^x548);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x549 = UINT32_MAX;
	volatile int64_t x550 = -5492027LL;
	int8_t x551 = -7;
	uint64_t x552 = 1LLU;

    t135 = (((x549>x550)/x551)^x552);

    if (t135 != 1LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x553 = -1LL;
	int64_t x554 = -1LL;
	int8_t x555 = -2;
	uint16_t x556 = UINT16_MAX;

    t136 = (((x553>x554)/x555)^x556);

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x557 = INT8_MIN;
	static uint64_t x559 = 1760879LLU;
	static int16_t x560 = INT16_MIN;
	volatile uint64_t t137 = 7328LLU;

    t137 = (((x557>x558)/x559)^x560);

    if (t137 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x563 = INT16_MAX;
	int32_t x564 = INT32_MIN;
	int32_t t138 = INT32_MIN;

    t138 = (((x561>x562)/x563)^x564);

    if (t138 != INT32_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x565 = -1;
	int64_t x567 = -1LL;
	uint64_t x568 = 20334449973761LLU;
	uint64_t t139 = 174569066081LLU;

    t139 = (((x565>x566)/x567)^x568);

    if (t139 != 18446723739259577854LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	static volatile int8_t x572 = 3;
	uint64_t t140 = 1123LLU;

    t140 = (((x569>x570)/x571)^x572);

    if (t140 != 3LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x573 = INT64_MIN;
	int64_t x574 = 39226945294538149LL;
	int8_t x575 = -1;
	int16_t x576 = -1;
	volatile int32_t t141 = 0;

    t141 = (((x573>x574)/x575)^x576);

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x577 = -2;
	volatile int16_t x578 = INT16_MIN;
	uint32_t x579 = UINT32_MAX;
	static int64_t x580 = -92499LL;
	static volatile int64_t t142 = -7729640619497657LL;

    t142 = (((x577>x578)/x579)^x580);

    if (t142 != -92499LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x581 = -60;
	static uint16_t x582 = 10U;
	static volatile int64_t x583 = INT64_MAX;
	uint32_t x584 = 647639U;
	int64_t t143 = -6435259257224LL;

    t143 = (((x581>x582)/x583)^x584);

    if (t143 != 647639LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x585 = UINT64_MAX;
	int8_t x587 = INT8_MIN;
	static int64_t x588 = INT64_MIN;
	volatile int64_t t144 = INT64_MIN;

    t144 = (((x585>x586)/x587)^x588);

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int32_t x589 = INT32_MIN;
	int16_t x592 = INT16_MIN;
	volatile int64_t t145 = -3432826645386473LL;

    t145 = (((x589>x590)/x591)^x592);

    if (t145 != -32768LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x593 = INT32_MIN;
	volatile uint16_t x594 = 7471U;
	static uint64_t x595 = 7327054489LLU;
	int64_t x596 = 8632LL;
	volatile uint64_t t146 = 404468592LLU;

    t146 = (((x593>x594)/x595)^x596);

    if (t146 != 8632LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint8_t x597 = UINT8_MAX;
	int16_t x599 = INT16_MIN;
	uint16_t x600 = 153U;
	static int32_t t147 = 57461193;

    t147 = (((x597>x598)/x599)^x600);

    if (t147 != 153) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x601 = UINT64_MAX;
	int32_t x602 = -1;
	volatile int32_t x603 = INT32_MIN;
	int64_t x604 = -3827LL;
	int64_t t148 = 1496189685708LL;

    t148 = (((x601>x602)/x603)^x604);

    if (t148 != -3827LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int64_t x605 = 243827563612435LL;
	uint64_t x606 = 17LLU;
	volatile int8_t x608 = -1;
	volatile uint64_t t149 = UINT64_MAX;

    t149 = (((x605>x606)/x607)^x608);

    if (t149 != UINT64_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x609 = -1;
	int32_t x611 = 53136;
	volatile uint32_t x612 = 391U;
	volatile uint32_t t150 = 89U;

    t150 = (((x609>x610)/x611)^x612);

    if (t150 != 391U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x613 = -1;
	volatile int16_t x614 = INT16_MIN;

    t151 = (((x613>x614)/x615)^x616);

    if (t151 != 127LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x617 = -133096961;
	int32_t x618 = -2;
	int64_t x619 = INT64_MIN;
	int8_t x620 = 2;

    t152 = (((x617>x618)/x619)^x620);

    if (t152 != 2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x621 = INT32_MIN;
	static int32_t x623 = -974326003;
	int32_t x624 = -1;
	volatile int32_t t153 = 90258;

    t153 = (((x621>x622)/x623)^x624);

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x625 = UINT64_MAX;
	int16_t x626 = INT16_MIN;
	volatile uint16_t x627 = 2795U;
	uint64_t x628 = UINT64_MAX;
	volatile uint64_t t154 = UINT64_MAX;

    t154 = (((x625>x626)/x627)^x628);

    if (t154 != UINT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x629 = INT8_MIN;
	int64_t x630 = INT64_MIN;
	int32_t x632 = 195005920;
	int32_t t155 = 15895;

    t155 = (((x629>x630)/x631)^x632);

    if (t155 != 195005920) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x633 = 0U;
	int16_t x634 = -1;
	int16_t x636 = -1;

    t156 = (((x633>x634)/x635)^x636);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int8_t x637 = 56;
	int16_t x638 = INT16_MIN;
	static uint64_t x640 = 112375984871246LLU;
	uint64_t t157 = 20375895211563LLU;

    t157 = (((x637>x638)/x639)^x640);

    if (t157 != 112375984871246LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x641 = INT16_MIN;
	int8_t x642 = INT8_MIN;
	volatile int8_t x643 = INT8_MAX;
	int32_t x644 = -1;
	int32_t t158 = 856384;

    t158 = (((x641>x642)/x643)^x644);

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x645 = 150U;
	int8_t x647 = INT8_MAX;
	int32_t x648 = -8230;
	volatile int32_t t159 = -180710;

    t159 = (((x645>x646)/x647)^x648);

    if (t159 != -8230) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x650 = -14694;
	int64_t x651 = INT64_MIN;
	int8_t x652 = -1;

    t160 = (((x649>x650)/x651)^x652);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x653 = -1444;
	int32_t x655 = -369;
	static int8_t x656 = -7;
	static int32_t t161 = -985;

    t161 = (((x653>x654)/x655)^x656);

    if (t161 != -7) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x657 = INT16_MAX;
	static int64_t x658 = 2LL;
	volatile int64_t x659 = -801LL;
	static volatile int64_t t162 = 33676330LL;

    t162 = (((x657>x658)/x659)^x660);

    if (t162 != 2147483647LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x661 = -7242255;
	volatile int16_t x663 = INT16_MAX;

    t163 = (((x661>x662)/x663)^x664);

    if (t163 != 418) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x665 = INT32_MIN;
	int16_t x666 = 1919;
	static volatile int16_t x667 = INT16_MIN;
	volatile int8_t x668 = -1;
	int32_t t164 = -20;

    t164 = (((x665>x666)/x667)^x668);

    if (t164 != -1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x669 = UINT32_MAX;
	static uint8_t x670 = UINT8_MAX;
	int64_t x671 = 1057169582629766LL;
	static volatile int16_t x672 = -243;
	volatile int64_t t165 = 27111175LL;

    t165 = (((x669>x670)/x671)^x672);

    if (t165 != -243LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x673 = -7864363595LL;
	int8_t x674 = -1;
	int32_t t166 = 5653748;

    t166 = (((x673>x674)/x675)^x676);

    if (t166 != -371230048) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x677 = 938U;
	int32_t x679 = -98;
	uint16_t x680 = UINT16_MAX;
	volatile int32_t t167 = 1;

    t167 = (((x677>x678)/x679)^x680);

    if (t167 != 65535) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x681 = 3674LLU;
	static volatile int32_t t168 = 3;

    t168 = (((x681>x682)/x683)^x684);

    if (t168 != -1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x685 = -1;
	volatile int64_t x686 = INT64_MIN;
	int64_t x687 = INT64_MIN;
	volatile int32_t x688 = INT32_MAX;
	static volatile int64_t t169 = 1421246LL;

    t169 = (((x685>x686)/x687)^x688);

    if (t169 != 2147483647LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x689 = INT32_MAX;
	int16_t x690 = -1;
	volatile int8_t x691 = INT8_MIN;
	int8_t x692 = INT8_MIN;

    t170 = (((x689>x690)/x691)^x692);

    if (t170 != -128) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	int8_t x694 = INT8_MIN;
	static volatile int32_t x695 = -1;
	static volatile uint64_t t171 = 174LLU;

    t171 = (((x693>x694)/x695)^x696);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x699 = 780591298358097LL;
	uint8_t x700 = 120U;
	int64_t t172 = 437230137276237LL;

    t172 = (((x697>x698)/x699)^x700);

    if (t172 != 120LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x703 = 1U;
	int32_t x704 = 27636;
	volatile int32_t t173 = -24450;

    t173 = (((x701>x702)/x703)^x704);

    if (t173 != 27636) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x705 = INT16_MAX;
	static int8_t x708 = INT8_MAX;
	volatile int64_t t174 = -126563515910961LL;

    t174 = (((x705>x706)/x707)^x708);

    if (t174 != 127LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x709 = 32U;
	uint32_t x710 = UINT32_MAX;
	static int16_t x711 = -1;
	int32_t t175 = -19989272;

    t175 = (((x709>x710)/x711)^x712);

    if (t175 != 370) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x713 = -1;
	uint8_t x716 = UINT8_MAX;

    t176 = (((x713>x714)/x715)^x716);

    if (t176 != 255) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x718 = -1;
	int32_t x719 = INT32_MIN;
	static uint8_t x720 = 1U;
	static int32_t t177 = -11542836;

    t177 = (((x717>x718)/x719)^x720);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x722 = INT16_MIN;
	int32_t x723 = -1;
	uint8_t x724 = 4U;

    t178 = (((x721>x722)/x723)^x724);

    if (t178 != -5) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x725 = UINT16_MAX;
	static volatile int32_t x726 = INT32_MIN;
	int64_t x728 = 1490597LL;
	volatile int64_t t179 = 782715085032118062LL;

    t179 = (((x725>x726)/x727)^x728);

    if (t179 != 1490597LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x729 = 2387456944815LLU;
	volatile int32_t x730 = 3;
	int64_t x731 = 157658441962214192LL;
	uint64_t x732 = 10800937938819747LLU;

    t180 = (((x729>x730)/x731)^x732);

    if (t180 != 10800937938819747LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x733 = 28835972LLU;
	int64_t x734 = INT64_MAX;
	int8_t x735 = INT8_MAX;
	uint32_t x736 = 194U;
	uint32_t t181 = 9677U;

    t181 = (((x733>x734)/x735)^x736);

    if (t181 != 194U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x737 = UINT32_MAX;
	volatile int16_t x738 = INT16_MAX;
	volatile int64_t x739 = INT64_MIN;
	static int32_t x740 = INT32_MIN;
	static volatile int64_t t182 = -1105408373523344LL;

    t182 = (((x737>x738)/x739)^x740);

    if (t182 != -2147483648LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x741 = 200LLU;
	static int64_t x742 = INT64_MIN;
	static int16_t x743 = -11028;
	volatile int64_t x744 = INT64_MAX;

    t183 = (((x741>x742)/x743)^x744);

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x745 = 9U;
	int16_t x746 = INT16_MIN;
	volatile int8_t x747 = -1;
	static uint64_t x748 = 3150572LLU;
	volatile uint64_t t184 = 22763063248844364LLU;

    t184 = (((x745>x746)/x747)^x748);

    if (t184 != 18446744073706401043LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x749 = UINT16_MAX;
	int64_t x750 = -65634166204933LL;
	volatile int64_t t185 = 669051LL;

    t185 = (((x749>x750)/x751)^x752);

    if (t185 != 15LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x753 = 7U;
	int8_t x754 = INT8_MIN;
	int16_t x755 = -251;
	int16_t x756 = 3;
	volatile int32_t t186 = -674222485;

    t186 = (((x753>x754)/x755)^x756);

    if (t186 != 3) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x757 = 3739202405LL;
	int64_t x758 = -1LL;
	int16_t x759 = INT16_MIN;
	uint32_t x760 = 1620U;
	uint32_t t187 = 66U;

    t187 = (((x757>x758)/x759)^x760);

    if (t187 != 1620U) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x761 = UINT32_MAX;
	volatile uint64_t x762 = UINT64_MAX;
	int32_t x763 = 378819564;
	static int16_t x764 = INT16_MAX;
	static volatile int32_t t188 = -2;

    t188 = (((x761>x762)/x763)^x764);

    if (t188 != 32767) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x765 = -1;
	static int8_t x766 = -1;
	uint16_t x767 = 16238U;
	int32_t x768 = -10309307;

    t189 = (((x765>x766)/x767)^x768);

    if (t189 != -10309307) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x770 = UINT8_MAX;
	volatile uint32_t x771 = 55U;
	static volatile uint32_t t190 = 129U;

    t190 = (((x769>x770)/x771)^x772);

    if (t190 != 4294967168U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x773 = 1;
	static uint32_t x774 = 63679103U;
	volatile int32_t t191 = 18;

    t191 = (((x773>x774)/x775)^x776);

    if (t191 != -128) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x777 = 8U;
	int16_t x779 = INT16_MAX;

    t192 = (((x777>x778)/x779)^x780);

    if (t192 != 10235) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x781 = -840033745LL;
	int64_t x782 = INT64_MIN;
	int32_t x783 = INT32_MIN;
	int8_t x784 = INT8_MIN;

    t193 = (((x781>x782)/x783)^x784);

    if (t193 != -128) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x785 = -1;
	int64_t x786 = 10914931LL;
	uint16_t x787 = 9U;
	static volatile int64_t x788 = -1LL;
	int64_t t194 = -101LL;

    t194 = (((x785>x786)/x787)^x788);

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x789 = INT8_MIN;
	static int32_t x790 = INT32_MAX;

    t195 = (((x789>x790)/x791)^x792);

    if (t195 != -128) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x793 = -1LL;
	static uint8_t x794 = 6U;
	int32_t x795 = INT32_MIN;
	int16_t x796 = 26;
	int32_t t196 = 322;

    t196 = (((x793>x794)/x795)^x796);

    if (t196 != 26) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x797 = 57LLU;
	int64_t x799 = -233543LL;
	volatile int64_t t197 = -906620146905476LL;

    t197 = (((x797>x798)/x799)^x800);

    if (t197 != 17007304075648119LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x801 = 2;
	int64_t x803 = -87216121008LL;
	int16_t x804 = INT16_MIN;
	volatile int64_t t198 = -33121376561LL;

    t198 = (((x801>x802)/x803)^x804);

    if (t198 != -32768LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x806 = 0;
	static int64_t x807 = 26361911990033118LL;
	uint16_t x808 = 207U;
	volatile int64_t t199 = 23976346172LL;

    t199 = (((x805>x806)/x807)^x808);

    if (t199 != 207LL) { NG(); } else { ; }
	
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

