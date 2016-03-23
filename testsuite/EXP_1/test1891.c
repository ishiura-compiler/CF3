
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

volatile int8_t x5 = INT8_MIN;
int32_t x6 = INT32_MIN;
volatile int32_t t1 = 0;
int32_t t3 = -1095;
uint32_t x23 = UINT32_MAX;
int32_t t4 = -1096;
int16_t x26 = INT16_MAX;
int32_t x27 = -52134111;
uint8_t x29 = 14U;
static int8_t x32 = INT8_MAX;
uint32_t x38 = 243U;
int16_t x40 = -1;
volatile uint8_t x46 = 34U;
int32_t x51 = 193266230;
uint16_t x55 = 3663U;
static uint8_t x57 = 37U;
int64_t x70 = -27988888370604689LL;
volatile int32_t t17 = -400605607;
volatile uint32_t t18 = 31547U;
uint8_t x81 = UINT8_MAX;
int8_t x83 = INT8_MAX;
uint16_t x87 = UINT16_MAX;
static uint32_t x103 = 154963U;
int8_t x107 = -9;
volatile int32_t t24 = 1;
int32_t x114 = -84068573;
int8_t x132 = INT8_MAX;
uint16_t x142 = UINT16_MAX;
uint16_t x143 = UINT16_MAX;
int32_t t33 = 11970;
static int16_t x150 = INT16_MIN;
uint32_t x161 = 10339284U;
uint32_t x163 = 93344402U;
uint16_t x172 = 436U;
int32_t x180 = 87930;
int32_t t41 = 1177;
int64_t x183 = -362LL;
int8_t x189 = -1;
int32_t t45 = 227320;
int32_t x197 = INT32_MIN;
volatile int8_t x200 = -1;
int32_t t47 = -288532406;
uint64_t x206 = UINT64_MAX;
int16_t x207 = 1285;
int32_t t48 = -311;
static int64_t x210 = INT64_MIN;
volatile int32_t t54 = -22083;
volatile int64_t x235 = 18594LL;
uint16_t x236 = 4U;
volatile int32_t t57 = -1;
uint32_t x250 = UINT32_MAX;
uint64_t x257 = 43090LLU;
volatile uint32_t x261 = UINT32_MAX;
int8_t x263 = -1;
volatile int32_t t62 = 1;
volatile int32_t t63 = 14501;
int8_t x269 = INT8_MIN;
int16_t x278 = 0;
int64_t t67 = INT64_MIN;
volatile int32_t x292 = -4;
volatile int32_t t68 = 35;
int16_t x298 = INT16_MIN;
int32_t x300 = INT32_MIN;
int16_t x301 = INT16_MIN;
int8_t x304 = -2;
uint8_t x318 = UINT8_MAX;
int16_t x321 = -4;
int32_t x325 = INT32_MAX;
int16_t x329 = 2;
volatile uint64_t x332 = 76581977441LLU;
uint32_t x333 = 54U;
volatile int32_t t81 = 61125259;
volatile int16_t x353 = INT16_MAX;
volatile int8_t x357 = INT8_MIN;
int16_t x362 = INT16_MAX;
static int32_t x364 = 942;
volatile int32_t t86 = -1318;
int16_t x365 = -1;
uint8_t x366 = 3U;
uint32_t x369 = 200U;
int64_t t88 = 508985338670LL;
static int64_t x375 = -1LL;
int16_t x382 = INT16_MIN;
volatile uint16_t x388 = UINT16_MAX;
int32_t t92 = 679;
volatile uint32_t t93 = 40707U;
static volatile int8_t x401 = 1;
uint8_t x410 = UINT8_MAX;
int64_t x413 = -1LL;
int32_t t99 = -470;
static int8_t x424 = INT8_MIN;
volatile int32_t x436 = INT32_MIN;
volatile int32_t t104 = -29385;
int16_t x438 = -12240;
int64_t x442 = -246682018499281LL;
static volatile int32_t x446 = INT32_MIN;
uint8_t x453 = 6U;
int32_t x456 = INT32_MIN;
static volatile int8_t x469 = INT8_MIN;
static uint32_t x471 = 112111897U;
uint64_t x498 = 23LLU;
static int64_t t120 = 482325219809680903LL;
static int16_t x507 = INT16_MIN;
int32_t x509 = INT32_MIN;
int32_t x511 = -58913998;
volatile int64_t x518 = 19LL;
static volatile int64_t x524 = -11763841029620674LL;
uint16_t x525 = 29U;
static int8_t x538 = INT8_MAX;
int32_t x544 = -14932;
volatile int32_t t132 = -6957;
static int32_t x555 = INT32_MIN;
int8_t x559 = 1;
uint64_t x563 = 350968648242581455LLU;
int8_t x568 = INT8_MIN;
int16_t x569 = 15196;
int8_t x570 = -1;
int16_t x573 = -748;
int32_t t138 = 429;
volatile uint32_t t139 = 253U;
static volatile int8_t x582 = INT8_MIN;
int8_t x585 = INT8_MIN;
int32_t x586 = INT32_MIN;
int16_t x589 = -1;
volatile int32_t t142 = 0;
volatile int64_t x594 = 98938338312238254LL;
uint64_t x608 = 25LLU;
uint64_t t146 = 33282521640LLU;
volatile int16_t x609 = -1;
uint16_t x612 = 31U;
volatile int32_t t148 = 500;
uint32_t x617 = UINT32_MAX;
int64_t x618 = -390185LL;
volatile int32_t t149 = INT32_MAX;
int8_t x628 = INT8_MAX;
static volatile uint16_t x633 = UINT16_MAX;
static int16_t x641 = INT16_MIN;
static uint64_t t155 = UINT64_MAX;
int16_t x649 = -1;
uint32_t x651 = 12103627U;
static int32_t t157 = 4;
int16_t x658 = 2516;
int16_t x659 = INT16_MIN;
volatile int32_t t159 = 56878;
int32_t x663 = INT32_MAX;
volatile uint32_t t161 = 12U;
int64_t x671 = INT64_MAX;
volatile uint32_t t164 = 259783U;
int64_t x682 = INT64_MIN;
static int64_t x684 = -58730563LL;
volatile int64_t t165 = 95LL;
int16_t x688 = INT16_MIN;
volatile int32_t t167 = 0;
volatile int32_t t171 = -53643;
uint8_t x710 = 0U;
static int32_t x717 = INT32_MIN;
volatile int64_t x725 = -1LL;
int16_t x732 = INT16_MIN;
uint32_t x734 = 218446891U;
volatile int8_t x740 = 22;
uint32_t x742 = UINT32_MAX;
int64_t x744 = INT64_MAX;
int64_t t179 = INT64_MAX;
int16_t x750 = INT16_MAX;
static int64_t x753 = -1LL;
int8_t x756 = INT8_MIN;
static volatile int32_t t182 = 183;
int64_t x759 = -1LL;
static int16_t x770 = -60;
uint8_t x792 = UINT8_MAX;
static volatile int64_t x806 = INT64_MIN;
static int32_t x807 = INT32_MIN;
int8_t x808 = INT8_MAX;
int32_t t195 = 1550050;
uint16_t x816 = UINT16_MAX;
int32_t x823 = INT32_MIN;


void f0(void) {
    	volatile uint32_t x1 = 17U;
	static int32_t x2 = INT32_MIN;
	static int64_t x3 = -1LL;
	uint8_t x4 = 4U;
	int32_t t0 = 13862951;

    t0 = (((x1<=x2)<=x3)+x4);

    if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x7 = 1;
	int16_t x8 = -1;

    t1 = (((x5<=x6)<=x7)+x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 2U;
	static int64_t x10 = INT64_MAX;
	static volatile int32_t x11 = INT32_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = 3902U;

    t2 = (((x9<=x10)<=x11)+x12);

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = UINT32_MAX;
	uint32_t x18 = 3181U;
	static uint16_t x19 = 110U;
	volatile int16_t x20 = 6;

    t3 = (((x17<=x18)<=x19)+x20);

    if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = -1;
	volatile int16_t x22 = INT16_MIN;
	int8_t x24 = INT8_MIN;

    t4 = (((x21<=x22)<=x23)+x24);

    if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	int64_t x28 = 440076LL;
	int64_t t5 = 25864636LL;

    t5 = (((x25<=x26)<=x27)+x28);

    if (t5 != 440076LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x30 = -10;
	int64_t x31 = INT64_MIN;
	volatile int32_t t6 = 29112054;

    t6 = (((x29<=x30)<=x31)+x32);

    if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x33 = UINT16_MAX;
	int16_t x34 = -1;
	static volatile int32_t x35 = 488;
	volatile int8_t x36 = INT8_MAX;
	volatile int32_t t7 = 5823846;

    t7 = (((x33<=x34)<=x35)+x36);

    if (t7 != 128) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x37 = -1;
	static uint64_t x39 = UINT64_MAX;
	static volatile int32_t t8 = 58366;

    t8 = (((x37<=x38)<=x39)+x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = 44;
	uint64_t x42 = 85LLU;
	uint64_t x43 = 5575LLU;
	int8_t x44 = INT8_MIN;
	volatile int32_t t9 = -7284323;

    t9 = (((x41<=x42)<=x43)+x44);

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 363U;
	int64_t x47 = -1LL;
	volatile int32_t x48 = INT32_MAX;
	int32_t t10 = INT32_MAX;

    t10 = (((x45<=x46)<=x47)+x48);

    if (t10 != INT32_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -48708652299LL;
	int8_t x50 = -1;
	uint8_t x52 = 1U;
	volatile int32_t t11 = 2;

    t11 = (((x49<=x50)<=x51)+x52);

    if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x53 = 2679LLU;
	static uint64_t x54 = UINT64_MAX;
	static int64_t x56 = -45832467LL;
	int64_t t12 = -233913029LL;

    t12 = (((x53<=x54)<=x55)+x56);

    if (t12 != -45832466LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x58 = -1;
	int16_t x59 = INT16_MIN;
	volatile uint16_t x60 = 13301U;
	static volatile int32_t t13 = 118298;

    t13 = (((x57<=x58)<=x59)+x60);

    if (t13 != 13301) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x61 = 1714612412U;
	uint64_t x62 = 9658856463815LLU;
	int32_t x63 = INT32_MIN;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t14 = UINT32_MAX;

    t14 = (((x61<=x62)<=x63)+x64);

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = 7;
	static int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	int8_t x68 = INT8_MIN;
	volatile int32_t t15 = 982;

    t15 = (((x65<=x66)<=x67)+x68);

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x69 = 114;
	int16_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t16 = UINT32_MAX;

    t16 = (((x69<=x70)<=x71)+x72);

    if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = INT8_MAX;
	uint16_t x74 = UINT16_MAX;
	volatile uint16_t x75 = 25930U;
	static volatile uint16_t x76 = 2508U;

    t17 = (((x73<=x74)<=x75)+x76);

    if (t17 != 2509) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = 41323088415354422LL;
	uint32_t x78 = UINT32_MAX;
	int8_t x79 = 1;
	uint32_t x80 = 1U;

    t18 = (((x77<=x78)<=x79)+x80);

    if (t18 != 2U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x82 = UINT8_MAX;
	static uint64_t x84 = UINT64_MAX;
	uint64_t t19 = 63508498022LLU;

    t19 = (((x81<=x82)<=x83)+x84);

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = 3533;
	uint8_t x86 = 8U;
	int16_t x88 = INT16_MIN;
	int32_t t20 = -40888;

    t20 = (((x85<=x86)<=x87)+x88);

    if (t20 != -32767) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x93 = 60U;
	int64_t x94 = 1984865509685792197LL;
	static int64_t x95 = -472830LL;
	int32_t x96 = INT32_MIN;
	volatile int32_t t21 = INT32_MIN;

    t21 = (((x93<=x94)<=x95)+x96);

    if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x97 = INT32_MAX;
	int32_t x98 = INT32_MIN;
	int8_t x99 = INT8_MIN;
	static int16_t x100 = INT16_MIN;
	static volatile int32_t t22 = 72;

    t22 = (((x97<=x98)<=x99)+x100);

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x101 = UINT16_MAX;
	int8_t x102 = INT8_MAX;
	int64_t x104 = INT64_MIN;
	volatile int64_t t23 = -38259214971656LL;

    t23 = (((x101<=x102)<=x103)+x104);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	uint16_t x106 = 80U;
	int16_t x108 = INT16_MAX;

    t24 = (((x105<=x106)<=x107)+x108);

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x109 = -59;
	static int16_t x110 = INT16_MAX;
	int16_t x111 = 0;
	int8_t x112 = INT8_MIN;
	static volatile int32_t t25 = 1339;

    t25 = (((x109<=x110)<=x111)+x112);

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x113 = INT16_MIN;
	uint64_t x115 = 1623304221LLU;
	uint64_t x116 = 105657775543LLU;
	volatile uint64_t t26 = 39641LLU;

    t26 = (((x113<=x114)<=x115)+x116);

    if (t26 != 105657775544LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = 12515;
	int16_t x122 = -1;
	volatile uint8_t x123 = 0U;
	int16_t x124 = -424;
	volatile int32_t t27 = 19639;

    t27 = (((x121<=x122)<=x123)+x124);

    if (t27 != -423) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x125 = 59894305441380714LLU;
	int16_t x126 = INT16_MAX;
	int64_t x127 = 546504695LL;
	int32_t x128 = -1;
	volatile int32_t t28 = 1503;

    t28 = (((x125<=x126)<=x127)+x128);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	volatile int64_t x131 = INT64_MAX;
	int32_t t29 = 0;

    t29 = (((x129<=x130)<=x131)+x132);

    if (t29 != 128) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x133 = 25U;
	uint64_t x134 = 3682LLU;
	volatile int8_t x135 = -1;
	int64_t x136 = -1LL;
	int64_t t30 = 6875743LL;

    t30 = (((x133<=x134)<=x135)+x136);

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = 422447180722LLU;
	int8_t x138 = -7;
	uint32_t x139 = 427695003U;
	int32_t x140 = INT32_MIN;
	volatile int32_t t31 = -17370;

    t31 = (((x137<=x138)<=x139)+x140);

    if (t31 != -2147483647) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x141 = -9;
	int64_t x144 = -1LL;
	volatile int64_t t32 = 7777138LL;

    t32 = (((x141<=x142)<=x143)+x144);

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x145 = -1LL;
	int32_t x146 = 2935577;
	int16_t x147 = INT16_MIN;
	static uint16_t x148 = 270U;

    t33 = (((x145<=x146)<=x147)+x148);

    if (t33 != 270) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x149 = UINT16_MAX;
	int32_t x151 = INT32_MAX;
	int32_t x152 = -1;
	int32_t t34 = 0;

    t34 = (((x149<=x150)<=x151)+x152);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = INT8_MIN;
	static uint32_t x154 = 264805992U;
	static int32_t x155 = 98;
	volatile int32_t x156 = INT32_MIN;
	static volatile int32_t t35 = -2665;

    t35 = (((x153<=x154)<=x155)+x156);

    if (t35 != -2147483647) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x157 = 194;
	uint32_t x158 = 35662765U;
	int16_t x159 = -118;
	static volatile int16_t x160 = -1;
	int32_t t36 = -83508;

    t36 = (((x157<=x158)<=x159)+x160);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x162 = INT32_MAX;
	uint64_t x164 = 102188LLU;
	static volatile uint64_t t37 = 5029057140266483655LLU;

    t37 = (((x161<=x162)<=x163)+x164);

    if (t37 != 102189LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x165 = INT8_MIN;
	static int16_t x166 = INT16_MAX;
	int32_t x167 = INT32_MIN;
	volatile int32_t x168 = 374497;
	volatile int32_t t38 = 173100028;

    t38 = (((x165<=x166)<=x167)+x168);

    if (t38 != 374497) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = INT32_MIN;
	uint8_t x170 = UINT8_MAX;
	volatile int32_t x171 = INT32_MIN;
	int32_t t39 = -51;

    t39 = (((x169<=x170)<=x171)+x172);

    if (t39 != 436) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x173 = 26;
	int32_t x174 = 22257;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = INT32_MIN;
	static volatile int32_t t40 = -1327913;

    t40 = (((x173<=x174)<=x175)+x176);

    if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MIN;
	int8_t x179 = INT8_MAX;

    t41 = (((x177<=x178)<=x179)+x180);

    if (t41 != 87931) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = 109828168U;
	int8_t x182 = INT8_MIN;
	int8_t x184 = -1;
	volatile int32_t t42 = -347;

    t42 = (((x181<=x182)<=x183)+x184);

    if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x185 = INT32_MIN;
	int16_t x186 = 0;
	int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MIN;
	volatile int32_t t43 = 10650036;

    t43 = (((x185<=x186)<=x187)+x188);

    if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x190 = 113;
	int32_t x191 = INT32_MAX;
	volatile int16_t x192 = INT16_MIN;
	int32_t t44 = -3589;

    t44 = (((x189<=x190)<=x191)+x192);

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x193 = 0U;
	int64_t x194 = -115416398313586LL;
	int16_t x195 = -1;
	volatile int16_t x196 = INT16_MIN;

    t45 = (((x193<=x194)<=x195)+x196);

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x198 = INT32_MIN;
	uint32_t x199 = 196160U;
	volatile int32_t t46 = -832732027;

    t46 = (((x197<=x198)<=x199)+x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x201 = INT16_MIN;
	int16_t x202 = -1;
	volatile int16_t x203 = INT16_MIN;
	int32_t x204 = -1;

    t47 = (((x201<=x202)<=x203)+x204);

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x205 = -7203296115608461LL;
	int16_t x208 = INT16_MIN;

    t48 = (((x205<=x206)<=x207)+x208);

    if (t48 != -32767) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x209 = INT8_MAX;
	static uint64_t x211 = 844802189LLU;
	static uint16_t x212 = 5U;
	static volatile int32_t t49 = -518592280;

    t49 = (((x209<=x210)<=x211)+x212);

    if (t49 != 6) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x213 = INT32_MIN;
	int32_t x214 = -1;
	volatile int64_t x215 = 52971023810377LL;
	volatile int16_t x216 = -18;
	static int32_t t50 = 75;

    t50 = (((x213<=x214)<=x215)+x216);

    if (t50 != -17) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x217 = 7;
	int16_t x218 = INT16_MAX;
	int64_t x219 = -1LL;
	static volatile uint8_t x220 = 4U;
	volatile int32_t t51 = -3956;

    t51 = (((x217<=x218)<=x219)+x220);

    if (t51 != 4) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x221 = 831230LLU;
	int32_t x222 = -1;
	int32_t x223 = -1;
	uint8_t x224 = UINT8_MAX;
	static volatile int32_t t52 = 417;

    t52 = (((x221<=x222)<=x223)+x224);

    if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x225 = INT64_MIN;
	int32_t x226 = -1;
	uint8_t x227 = 0U;
	static volatile uint32_t x228 = 3159U;
	static volatile uint32_t t53 = 33053U;

    t53 = (((x225<=x226)<=x227)+x228);

    if (t53 != 3159U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x229 = 2803441720685LLU;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = 25100519;
	static uint8_t x232 = 15U;

    t54 = (((x229<=x230)<=x231)+x232);

    if (t54 != 16) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x233 = INT16_MIN;
	int64_t x234 = -1LL;
	static volatile int32_t t55 = -772229;

    t55 = (((x233<=x234)<=x235)+x236);

    if (t55 != 5) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x237 = 31241U;
	static volatile uint16_t x238 = UINT16_MAX;
	int16_t x239 = -2620;
	int16_t x240 = -350;
	int32_t t56 = -1921850;

    t56 = (((x237<=x238)<=x239)+x240);

    if (t56 != -350) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x241 = -15029LL;
	uint32_t x242 = 2U;
	int16_t x243 = 48;
	int8_t x244 = INT8_MIN;

    t57 = (((x241<=x242)<=x243)+x244);

    if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x245 = 50U;
	static int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	volatile int64_t x248 = -58427LL;
	volatile int64_t t58 = -55663LL;

    t58 = (((x245<=x246)<=x247)+x248);

    if (t58 != -58427LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x249 = INT64_MAX;
	uint32_t x251 = 12024211U;
	volatile uint64_t x252 = 54296764993783LLU;
	uint64_t t59 = 2838427LLU;

    t59 = (((x249<=x250)<=x251)+x252);

    if (t59 != 54296764993784LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x253 = UINT64_MAX;
	uint8_t x254 = 18U;
	uint8_t x255 = 30U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t60 = 360535;

    t60 = (((x253<=x254)<=x255)+x256);

    if (t60 != 256) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x258 = 3882746203LLU;
	static int8_t x259 = INT8_MAX;
	int64_t x260 = -1LL;
	int64_t t61 = 511981728129694818LL;

    t61 = (((x257<=x258)<=x259)+x260);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x262 = -1;
	int16_t x264 = INT16_MIN;

    t62 = (((x261<=x262)<=x263)+x264);

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = 4;
	int64_t x266 = INT64_MIN;
	volatile uint32_t x267 = 17072431U;
	int16_t x268 = 348;

    t63 = (((x265<=x266)<=x267)+x268);

    if (t63 != 349) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x270 = -1LL;
	int32_t x271 = -127;
	volatile int32_t x272 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

    t64 = (((x269<=x270)<=x271)+x272);

    if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x273 = -1;
	int32_t x274 = 2509860;
	volatile uint64_t x275 = 619050227728218013LLU;
	int64_t x276 = INT64_MIN;
	static volatile int64_t t65 = -12615887306891LL;

    t65 = (((x273<=x274)<=x275)+x276);

    if (t65 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = INT64_MAX;
	uint8_t x279 = 88U;
	int8_t x280 = 59;
	int32_t t66 = -28;

    t66 = (((x277<=x278)<=x279)+x280);

    if (t66 != 60) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x281 = 68U;
	uint64_t x282 = UINT64_MAX;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;

    t67 = (((x281<=x282)<=x283)+x284);

    if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x289 = INT64_MIN;
	uint32_t x290 = 386768986U;
	static uint32_t x291 = 29494547U;

    t68 = (((x289<=x290)<=x291)+x292);

    if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x293 = 3234152LL;
	static uint32_t x294 = UINT32_MAX;
	static int16_t x295 = INT16_MIN;
	volatile int64_t x296 = -1LL;
	volatile int64_t t69 = -1LL;

    t69 = (((x293<=x294)<=x295)+x296);

    if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = -1;
	int32_t x299 = -1;
	static int32_t t70 = INT32_MIN;

    t70 = (((x297<=x298)<=x299)+x300);

    if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x302 = -28;
	uint32_t x303 = 0U;
	int32_t t71 = -117415834;

    t71 = (((x301<=x302)<=x303)+x304);

    if (t71 != -2) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x305 = INT16_MAX;
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t72 = -314474747;

    t72 = (((x305<=x306)<=x307)+x308);

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x309 = -5;
	uint8_t x310 = UINT8_MAX;
	volatile uint64_t x311 = 417091478526LLU;
	int16_t x312 = -1;
	int32_t t73 = -251462;

    t73 = (((x309<=x310)<=x311)+x312);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x313 = INT64_MIN;
	int16_t x314 = INT16_MIN;
	static volatile int32_t x315 = INT32_MIN;
	static uint32_t x316 = UINT32_MAX;
	volatile uint32_t t74 = UINT32_MAX;

    t74 = (((x313<=x314)<=x315)+x316);

    if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x317 = INT32_MIN;
	int16_t x319 = -57;
	uint8_t x320 = 19U;
	volatile int32_t t75 = -4187;

    t75 = (((x317<=x318)<=x319)+x320);

    if (t75 != 19) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x322 = -1;
	static int64_t x323 = INT64_MAX;
	static volatile int16_t x324 = -900;
	int32_t t76 = 1;

    t76 = (((x321<=x322)<=x323)+x324);

    if (t76 != -899) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x326 = 3185670035485571718LLU;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = 165685;
	static volatile int32_t t77 = -12;

    t77 = (((x325<=x326)<=x327)+x328);

    if (t77 != 165685) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x330 = INT64_MIN;
	uint64_t x331 = UINT64_MAX;
	uint64_t t78 = 21700313256LLU;

    t78 = (((x329<=x330)<=x331)+x332);

    if (t78 != 76581977442LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x334 = -1LL;
	int8_t x335 = -9;
	volatile int64_t x336 = INT64_MAX;
	int64_t t79 = INT64_MAX;

    t79 = (((x333<=x334)<=x335)+x336);

    if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x337 = 27;
	static int32_t x338 = 122727;
	int64_t x339 = -1945LL;
	int32_t x340 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

    t80 = (((x337<=x338)<=x339)+x340);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x341 = -1;
	int8_t x342 = INT8_MIN;
	static int8_t x343 = INT8_MAX;
	volatile int16_t x344 = INT16_MIN;

    t81 = (((x341<=x342)<=x343)+x344);

    if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = 15197911;
	uint8_t x347 = 1U;
	uint16_t x348 = UINT16_MAX;
	int32_t t82 = -69;

    t82 = (((x345<=x346)<=x347)+x348);

    if (t82 != 65536) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x349 = UINT64_MAX;
	int32_t x350 = -26953254;
	volatile uint16_t x351 = 44U;
	int64_t x352 = -3940LL;
	volatile int64_t t83 = 7LL;

    t83 = (((x349<=x350)<=x351)+x352);

    if (t83 != -3939LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t84 = 1887800742LL;

    t84 = (((x353<=x354)<=x355)+x356);

    if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x358 = 842U;
	int64_t x359 = 286158457LL;
	int16_t x360 = INT16_MIN;
	volatile int32_t t85 = 2973;

    t85 = (((x357<=x358)<=x359)+x360);

    if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x361 = 4763;
	static int32_t x363 = -1;

    t86 = (((x361<=x362)<=x363)+x364);

    if (t86 != 942) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x367 = 966;
	uint32_t x368 = 1U;
	uint32_t t87 = 845329U;

    t87 = (((x365<=x366)<=x367)+x368);

    if (t87 != 2U) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x370 = 15388;
	static int32_t x371 = -1;
	static int64_t x372 = -1LL;

    t88 = (((x369<=x370)<=x371)+x372);

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x373 = 1260113036280294200LL;
	uint8_t x374 = 15U;
	uint32_t x376 = 3U;
	uint32_t t89 = 292954432U;

    t89 = (((x373<=x374)<=x375)+x376);

    if (t89 != 3U) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x377 = INT16_MIN;
	static uint8_t x378 = UINT8_MAX;
	static uint32_t x379 = 2U;
	static int32_t x380 = 8;
	volatile int32_t t90 = -5804168;

    t90 = (((x377<=x378)<=x379)+x380);

    if (t90 != 9) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x381 = -1387225444685LL;
	int8_t x383 = INT8_MIN;
	uint8_t x384 = UINT8_MAX;
	int32_t t91 = -646196;

    t91 = (((x381<=x382)<=x383)+x384);

    if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x385 = 406577890U;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MIN;

    t92 = (((x385<=x386)<=x387)+x388);

    if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x389 = 0;
	int8_t x390 = INT8_MIN;
	int64_t x391 = 1LL;
	volatile uint32_t x392 = 0U;

    t93 = (((x389<=x390)<=x391)+x392);

    if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x393 = UINT8_MAX;
	int32_t x394 = INT32_MIN;
	uint64_t x395 = 1677863834235122979LLU;
	int16_t x396 = INT16_MIN;
	int32_t t94 = -18816390;

    t94 = (((x393<=x394)<=x395)+x396);

    if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x397 = INT32_MAX;
	int32_t x398 = INT32_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile int32_t t95 = -2297562;

    t95 = (((x397<=x398)<=x399)+x400);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x402 = INT64_MIN;
	static int32_t x403 = INT32_MIN;
	volatile uint16_t x404 = 262U;
	static volatile int32_t t96 = -509667042;

    t96 = (((x401<=x402)<=x403)+x404);

    if (t96 != 262) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = INT8_MAX;
	int32_t x407 = INT32_MIN;
	static uint64_t x408 = 9323175176374LLU;
	volatile uint64_t t97 = 25291313253362865LLU;

    t97 = (((x405<=x406)<=x407)+x408);

    if (t97 != 9323175176374LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x409 = INT16_MAX;
	static uint8_t x411 = 54U;
	int8_t x412 = -1;
	int32_t t98 = -84;

    t98 = (((x409<=x410)<=x411)+x412);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x414 = -1LL;
	int8_t x415 = 1;
	uint8_t x416 = 41U;

    t99 = (((x413<=x414)<=x415)+x416);

    if (t99 != 42) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x417 = 47U;
	volatile int32_t x418 = -1;
	int8_t x419 = -1;
	int64_t x420 = 46482024LL;
	static volatile int64_t t100 = 25696LL;

    t100 = (((x417<=x418)<=x419)+x420);

    if (t100 != 46482024LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x421 = INT64_MAX;
	int64_t x422 = INT64_MIN;
	int64_t x423 = -1LL;
	static volatile int32_t t101 = -1;

    t101 = (((x421<=x422)<=x423)+x424);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x425 = -78;
	static int16_t x426 = 1;
	uint32_t x427 = 70578272U;
	int16_t x428 = -1;
	static volatile int32_t t102 = 1022;

    t102 = (((x425<=x426)<=x427)+x428);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x429 = INT32_MAX;
	static uint8_t x430 = 4U;
	uint32_t x431 = 7634U;
	volatile int8_t x432 = INT8_MAX;
	static volatile int32_t t103 = -416220286;

    t103 = (((x429<=x430)<=x431)+x432);

    if (t103 != 128) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x433 = INT8_MIN;
	uint16_t x434 = UINT16_MAX;
	static uint32_t x435 = 145U;

    t104 = (((x433<=x434)<=x435)+x436);

    if (t104 != -2147483647) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x437 = 8;
	uint64_t x439 = 3877LLU;
	uint32_t x440 = 27568849U;
	uint32_t t105 = 3251155U;

    t105 = (((x437<=x438)<=x439)+x440);

    if (t105 != 27568850U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x441 = 65190708063574577LL;
	static int16_t x443 = INT16_MAX;
	int32_t x444 = -1;
	int32_t t106 = -2933;

    t106 = (((x441<=x442)<=x443)+x444);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x445 = -1;
	volatile int32_t x447 = -23550;
	int16_t x448 = INT16_MIN;
	int32_t t107 = -54981106;

    t107 = (((x445<=x446)<=x447)+x448);

    if (t107 != -32768) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x449 = -1;
	static int8_t x450 = -12;
	int8_t x451 = -1;
	int32_t x452 = -1;
	volatile int32_t t108 = 489187;

    t108 = (((x449<=x450)<=x451)+x452);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x454 = 1U;
	static uint8_t x455 = 1U;
	volatile int32_t t109 = -6;

    t109 = (((x453<=x454)<=x455)+x456);

    if (t109 != -2147483647) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x457 = INT8_MAX;
	int32_t x458 = -1;
	int64_t x459 = INT64_MIN;
	int16_t x460 = -1;
	volatile int32_t t110 = -6348984;

    t110 = (((x457<=x458)<=x459)+x460);

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x461 = INT64_MIN;
	volatile uint64_t x462 = 51226349155LLU;
	volatile int16_t x463 = INT16_MAX;
	int8_t x464 = INT8_MIN;
	static volatile int32_t t111 = -30;

    t111 = (((x461<=x462)<=x463)+x464);

    if (t111 != -127) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = -1;
	int8_t x466 = INT8_MIN;
	volatile int32_t x467 = INT32_MAX;
	int16_t x468 = -899;
	int32_t t112 = 5;

    t112 = (((x465<=x466)<=x467)+x468);

    if (t112 != -898) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x470 = 35U;
	uint8_t x472 = UINT8_MAX;
	volatile int32_t t113 = -26722;

    t113 = (((x469<=x470)<=x471)+x472);

    if (t113 != 256) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x473 = INT32_MIN;
	uint16_t x474 = UINT16_MAX;
	int16_t x475 = INT16_MIN;
	int64_t x476 = 1168269885680LL;
	int64_t t114 = -3427692367689448130LL;

    t114 = (((x473<=x474)<=x475)+x476);

    if (t114 != 1168269885680LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x481 = UINT8_MAX;
	int32_t x482 = -1;
	int64_t x483 = INT64_MIN;
	int8_t x484 = 0;
	static volatile int32_t t115 = -221;

    t115 = (((x481<=x482)<=x483)+x484);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x485 = INT8_MIN;
	int16_t x486 = INT16_MAX;
	volatile int8_t x487 = INT8_MAX;
	uint16_t x488 = 3U;
	volatile int32_t t116 = 181160603;

    t116 = (((x485<=x486)<=x487)+x488);

    if (t116 != 4) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x489 = 4158475222LL;
	volatile int32_t x490 = INT32_MIN;
	uint8_t x491 = 0U;
	int64_t x492 = INT64_MIN;
	int64_t t117 = -28761577233618LL;

    t117 = (((x489<=x490)<=x491)+x492);

    if (t117 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x493 = 512;
	static uint8_t x494 = 8U;
	volatile int8_t x495 = -1;
	int16_t x496 = -1;
	volatile int32_t t118 = -13142506;

    t118 = (((x493<=x494)<=x495)+x496);

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x497 = INT64_MIN;
	int64_t x499 = -1LL;
	volatile int16_t x500 = INT16_MIN;
	int32_t t119 = -3583;

    t119 = (((x497<=x498)<=x499)+x500);

    if (t119 != -32768) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x501 = -107823476;
	int32_t x502 = INT32_MIN;
	static volatile int8_t x503 = INT8_MAX;
	volatile int64_t x504 = INT64_MIN;

    t120 = (((x501<=x502)<=x503)+x504);

    if (t120 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x505 = -494;
	uint32_t x506 = 641U;
	int8_t x508 = INT8_MAX;
	volatile int32_t t121 = -7562;

    t121 = (((x505<=x506)<=x507)+x508);

    if (t121 != 127) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x510 = UINT64_MAX;
	volatile int32_t x512 = INT32_MIN;
	int32_t t122 = INT32_MIN;

    t122 = (((x509<=x510)<=x511)+x512);

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x513 = 7;
	static volatile int8_t x514 = INT8_MIN;
	int8_t x515 = INT8_MIN;
	uint32_t x516 = UINT32_MAX;
	volatile uint32_t t123 = UINT32_MAX;

    t123 = (((x513<=x514)<=x515)+x516);

    if (t123 != UINT32_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x517 = 678320538LLU;
	volatile int16_t x519 = 800;
	int32_t x520 = -92952;
	int32_t t124 = 34;

    t124 = (((x517<=x518)<=x519)+x520);

    if (t124 != -92951) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int64_t x521 = -1LL;
	volatile int64_t x522 = -1LL;
	uint64_t x523 = 535384283LLU;
	volatile int64_t t125 = 28605161348050343LL;

    t125 = (((x521<=x522)<=x523)+x524);

    if (t125 != -11763841029620673LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x526 = 820480;
	volatile uint32_t x527 = UINT32_MAX;
	uint8_t x528 = 3U;
	volatile int32_t t126 = -6263679;

    t126 = (((x525<=x526)<=x527)+x528);

    if (t126 != 4) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x529 = 91857250;
	int16_t x530 = INT16_MIN;
	uint64_t x531 = 263793LLU;
	int32_t x532 = INT32_MIN;
	volatile int32_t t127 = -2;

    t127 = (((x529<=x530)<=x531)+x532);

    if (t127 != -2147483647) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x533 = -1;
	static int8_t x534 = INT8_MAX;
	static int64_t x535 = -1LL;
	int32_t x536 = -1;
	volatile int32_t t128 = -104315741;

    t128 = (((x533<=x534)<=x535)+x536);

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x537 = 5U;
	volatile int8_t x539 = 4;
	int32_t x540 = 16368865;
	static volatile int32_t t129 = 3145104;

    t129 = (((x537<=x538)<=x539)+x540);

    if (t129 != 16368866) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x541 = -1;
	int8_t x542 = 1;
	int8_t x543 = -1;
	volatile int32_t t130 = 1615;

    t130 = (((x541<=x542)<=x543)+x544);

    if (t130 != -14932) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x545 = -44950034;
	int32_t x546 = INT32_MIN;
	volatile int64_t x547 = -315870788871LL;
	uint64_t x548 = 7004103916468548LLU;
	uint64_t t131 = 60858594276937112LLU;

    t131 = (((x545<=x546)<=x547)+x548);

    if (t131 != 7004103916468548LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x549 = UINT8_MAX;
	static volatile uint32_t x550 = 1965811U;
	volatile int32_t x551 = INT32_MAX;
	static volatile int8_t x552 = INT8_MAX;

    t132 = (((x549<=x550)<=x551)+x552);

    if (t132 != 128) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x553 = 5385942U;
	static int16_t x554 = 1208;
	int32_t x556 = 4130;
	volatile int32_t t133 = 1;

    t133 = (((x553<=x554)<=x555)+x556);

    if (t133 != 4130) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x557 = 387659U;
	volatile int16_t x558 = INT16_MIN;
	int32_t x560 = -1;
	int32_t t134 = -3966;

    t134 = (((x557<=x558)<=x559)+x560);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x561 = -1747607LL;
	static int8_t x562 = INT8_MAX;
	volatile int16_t x564 = -7892;
	volatile int32_t t135 = 2;

    t135 = (((x561<=x562)<=x563)+x564);

    if (t135 != -7891) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x565 = -1;
	int8_t x566 = INT8_MAX;
	volatile int64_t x567 = INT64_MIN;
	int32_t t136 = -69;

    t136 = (((x565<=x566)<=x567)+x568);

    if (t136 != -128) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x571 = 16U;
	static int8_t x572 = INT8_MIN;
	int32_t t137 = 41191;

    t137 = (((x569<=x570)<=x571)+x572);

    if (t137 != -127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x574 = 12U;
	volatile int8_t x575 = 3;
	volatile uint16_t x576 = 29754U;

    t138 = (((x573<=x574)<=x575)+x576);

    if (t138 != 29755) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x577 = INT64_MIN;
	uint32_t x578 = UINT32_MAX;
	static volatile int64_t x579 = -1LL;
	static volatile uint32_t x580 = 4081109U;

    t139 = (((x577<=x578)<=x579)+x580);

    if (t139 != 4081109U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x581 = INT16_MIN;
	volatile uint64_t x583 = UINT64_MAX;
	int32_t x584 = -1;
	int32_t t140 = 499;

    t140 = (((x581<=x582)<=x583)+x584);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x587 = -1;
	static int32_t x588 = -168000;
	volatile int32_t t141 = 76316986;

    t141 = (((x585<=x586)<=x587)+x588);

    if (t141 != -168000) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x590 = -1;
	static int64_t x591 = INT64_MIN;
	static volatile int8_t x592 = 6;

    t142 = (((x589<=x590)<=x591)+x592);

    if (t142 != 6) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x593 = 1;
	int8_t x595 = 6;
	static int16_t x596 = INT16_MAX;
	int32_t t143 = -5907807;

    t143 = (((x593<=x594)<=x595)+x596);

    if (t143 != 32768) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x597 = 310U;
	static int32_t x598 = -1;
	volatile uint32_t x599 = UINT32_MAX;
	static int64_t x600 = INT64_MIN;
	int64_t t144 = -139603729923863LL;

    t144 = (((x597<=x598)<=x599)+x600);

    if (t144 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x601 = -1LL;
	int32_t x602 = 3;
	int64_t x603 = -1LL;
	static volatile int32_t x604 = -4;
	volatile int32_t t145 = 214920;

    t145 = (((x601<=x602)<=x603)+x604);

    if (t145 != -4) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x605 = INT64_MAX;
	uint32_t x606 = UINT32_MAX;
	int64_t x607 = INT64_MAX;

    t146 = (((x605<=x606)<=x607)+x608);

    if (t146 != 26LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x610 = 614U;
	uint8_t x611 = UINT8_MAX;
	volatile int32_t t147 = 1415303;

    t147 = (((x609<=x610)<=x611)+x612);

    if (t147 != 32) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x613 = 0;
	volatile int16_t x614 = INT16_MIN;
	int64_t x615 = 9019335203979LL;
	uint8_t x616 = UINT8_MAX;

    t148 = (((x613<=x614)<=x615)+x616);

    if (t148 != 256) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x619 = -1;
	int32_t x620 = INT32_MAX;

    t149 = (((x617<=x618)<=x619)+x620);

    if (t149 != INT32_MAX) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x621 = 9982219401172583LL;
	int32_t x622 = -1;
	static volatile int64_t x623 = -1LL;
	uint16_t x624 = 6404U;
	static int32_t t150 = -3589575;

    t150 = (((x621<=x622)<=x623)+x624);

    if (t150 != 6404) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x625 = INT64_MAX;
	uint64_t x626 = 8774233159538853436LLU;
	static int64_t x627 = INT64_MIN;
	volatile int32_t t151 = 16581773;

    t151 = (((x625<=x626)<=x627)+x628);

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int16_t x629 = -3;
	volatile int8_t x630 = INT8_MIN;
	uint32_t x631 = 3049U;
	static int16_t x632 = INT16_MIN;
	volatile int32_t t152 = 56;

    t152 = (((x629<=x630)<=x631)+x632);

    if (t152 != -32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x634 = INT16_MIN;
	int64_t x635 = 12579883374LL;
	uint64_t x636 = 854LLU;
	uint64_t t153 = 22641832562LLU;

    t153 = (((x633<=x634)<=x635)+x636);

    if (t153 != 855LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x637 = 0;
	int8_t x638 = INT8_MIN;
	int32_t x639 = INT32_MIN;
	int16_t x640 = INT16_MAX;
	int32_t t154 = 965;

    t154 = (((x637<=x638)<=x639)+x640);

    if (t154 != 32767) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x642 = 3519677100025LL;
	static volatile int64_t x643 = INT64_MIN;
	volatile uint64_t x644 = UINT64_MAX;

    t155 = (((x641<=x642)<=x643)+x644);

    if (t155 != UINT64_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x645 = 1U;
	volatile int64_t x646 = INT64_MIN;
	int16_t x647 = 0;
	uint64_t x648 = 3791378LLU;
	uint64_t t156 = 15LLU;

    t156 = (((x645<=x646)<=x647)+x648);

    if (t156 != 3791379LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x650 = 8751U;
	int8_t x652 = INT8_MIN;

    t157 = (((x649<=x650)<=x651)+x652);

    if (t157 != -127) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x653 = -1LL;
	int32_t x654 = -1;
	uint16_t x655 = 42U;
	uint16_t x656 = 45U;
	volatile int32_t t158 = -389165;

    t158 = (((x653<=x654)<=x655)+x656);

    if (t158 != 46) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x657 = INT32_MAX;
	int16_t x660 = INT16_MIN;

    t159 = (((x657<=x658)<=x659)+x660);

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x661 = INT8_MIN;
	static volatile int16_t x662 = 20;
	uint32_t x664 = 15519637U;
	static volatile uint32_t t160 = 6477551U;

    t160 = (((x661<=x662)<=x663)+x664);

    if (t160 != 15519638U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x665 = INT8_MIN;
	int16_t x666 = 466;
	int64_t x667 = -269004078806479LL;
	uint32_t x668 = 149U;

    t161 = (((x665<=x666)<=x667)+x668);

    if (t161 != 149U) { NG(); } else { ; }
	
}

void f162(void) {
    	static int8_t x669 = INT8_MIN;
	volatile int64_t x670 = INT64_MIN;
	uint16_t x672 = UINT16_MAX;
	int32_t t162 = 2237564;

    t162 = (((x669<=x670)<=x671)+x672);

    if (t162 != 65536) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x673 = 11U;
	uint64_t x674 = UINT64_MAX;
	int64_t x675 = INT64_MIN;
	int8_t x676 = -1;
	int32_t t163 = 1;

    t163 = (((x673<=x674)<=x675)+x676);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x677 = 147469U;
	volatile uint32_t x678 = 1311U;
	int64_t x679 = 27595680LL;
	uint32_t x680 = UINT32_MAX;

    t164 = (((x677<=x678)<=x679)+x680);

    if (t164 != 0U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x681 = -12515;
	int64_t x683 = INT64_MIN;

    t165 = (((x681<=x682)<=x683)+x684);

    if (t165 != -58730563LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x685 = 817275118LLU;
	uint32_t x686 = 26089684U;
	int32_t x687 = INT32_MIN;
	volatile int32_t t166 = 917323;

    t166 = (((x685<=x686)<=x687)+x688);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x689 = 6234670306LLU;
	volatile uint16_t x690 = 407U;
	uint32_t x691 = 806U;
	volatile int16_t x692 = 0;

    t167 = (((x689<=x690)<=x691)+x692);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x693 = INT32_MIN;
	volatile int64_t x694 = INT64_MIN;
	volatile uint8_t x695 = 1U;
	int8_t x696 = 31;
	volatile int32_t t168 = 3057605;

    t168 = (((x693<=x694)<=x695)+x696);

    if (t168 != 32) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x697 = UINT16_MAX;
	int8_t x698 = -42;
	volatile uint32_t x699 = 276U;
	int32_t x700 = -13049178;
	int32_t t169 = 496271686;

    t169 = (((x697<=x698)<=x699)+x700);

    if (t169 != -13049177) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x701 = 574987395U;
	int16_t x702 = INT16_MAX;
	uint16_t x703 = 87U;
	volatile uint16_t x704 = 1U;
	int32_t t170 = 212096783;

    t170 = (((x701<=x702)<=x703)+x704);

    if (t170 != 2) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x705 = UINT64_MAX;
	uint64_t x706 = 85623981LLU;
	static int32_t x707 = -1;
	int16_t x708 = INT16_MIN;

    t171 = (((x705<=x706)<=x707)+x708);

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x709 = -1LL;
	static uint64_t x711 = UINT64_MAX;
	int8_t x712 = INT8_MIN;
	volatile int32_t t172 = -36905026;

    t172 = (((x709<=x710)<=x711)+x712);

    if (t172 != -127) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int32_t x718 = 928;
	int64_t x719 = INT64_MIN;
	int8_t x720 = -1;
	volatile int32_t t173 = 269253;

    t173 = (((x717<=x718)<=x719)+x720);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x721 = -1LL;
	uint64_t x722 = 60604964506LLU;
	volatile int16_t x723 = INT16_MAX;
	static uint32_t x724 = UINT32_MAX;
	uint32_t t174 = 224U;

    t174 = (((x721<=x722)<=x723)+x724);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x726 = 223U;
	int64_t x727 = 62LL;
	static int16_t x728 = INT16_MIN;
	int32_t t175 = -10283810;

    t175 = (((x725<=x726)<=x727)+x728);

    if (t175 != -32767) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x729 = INT64_MIN;
	static int8_t x730 = INT8_MAX;
	int16_t x731 = INT16_MAX;
	int32_t t176 = 23264;

    t176 = (((x729<=x730)<=x731)+x732);

    if (t176 != -32767) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x733 = -2;
	int64_t x735 = INT64_MIN;
	volatile uint8_t x736 = 106U;
	static volatile int32_t t177 = 605184;

    t177 = (((x733<=x734)<=x735)+x736);

    if (t177 != 106) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x737 = -1;
	int32_t x738 = -53636389;
	uint8_t x739 = 1U;
	int32_t t178 = -1;

    t178 = (((x737<=x738)<=x739)+x740);

    if (t178 != 23) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x741 = -1LL;
	int32_t x743 = -1;

    t179 = (((x741<=x742)<=x743)+x744);

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = -1006872098497LL;
	static volatile int32_t x747 = INT32_MAX;
	static volatile uint64_t x748 = 3252900LLU;
	uint64_t t180 = 6LLU;

    t180 = (((x745<=x746)<=x747)+x748);

    if (t180 != 3252901LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x749 = UINT64_MAX;
	int16_t x751 = 213;
	uint32_t x752 = 14126084U;
	volatile uint32_t t181 = 1113381U;

    t181 = (((x749<=x750)<=x751)+x752);

    if (t181 != 14126085U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x754 = UINT8_MAX;
	int64_t x755 = INT64_MIN;

    t182 = (((x753<=x754)<=x755)+x756);

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x757 = INT16_MIN;
	static uint64_t x758 = UINT64_MAX;
	static int8_t x760 = -1;
	volatile int32_t t183 = -7744103;

    t183 = (((x757<=x758)<=x759)+x760);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x761 = -21385;
	uint8_t x762 = 46U;
	volatile int32_t x763 = INT32_MAX;
	int8_t x764 = 6;
	volatile int32_t t184 = -655;

    t184 = (((x761<=x762)<=x763)+x764);

    if (t184 != 7) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x765 = 1LL;
	static int8_t x766 = INT8_MAX;
	volatile uint8_t x767 = 52U;
	uint16_t x768 = 225U;
	static int32_t t185 = -14168;

    t185 = (((x765<=x766)<=x767)+x768);

    if (t185 != 226) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = -78;
	volatile int32_t x771 = -1;
	int8_t x772 = -2;
	volatile int32_t t186 = 173355;

    t186 = (((x769<=x770)<=x771)+x772);

    if (t186 != -2) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x773 = 2U;
	int8_t x774 = INT8_MAX;
	int64_t x775 = -1LL;
	static int32_t x776 = -1;
	static volatile int32_t t187 = 0;

    t187 = (((x773<=x774)<=x775)+x776);

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x777 = -1LL;
	static int32_t x778 = -1;
	int16_t x779 = INT16_MIN;
	int16_t x780 = INT16_MIN;
	int32_t t188 = 6432;

    t188 = (((x777<=x778)<=x779)+x780);

    if (t188 != -32768) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x781 = INT64_MIN;
	volatile int16_t x782 = INT16_MIN;
	static int16_t x783 = -22;
	volatile uint32_t x784 = 27U;
	uint32_t t189 = 3U;

    t189 = (((x781<=x782)<=x783)+x784);

    if (t189 != 27U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x785 = -1;
	int8_t x786 = 2;
	int64_t x787 = -1LL;
	int16_t x788 = -13;
	int32_t t190 = 60162;

    t190 = (((x785<=x786)<=x787)+x788);

    if (t190 != -13) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x789 = 33655237LL;
	int32_t x790 = INT32_MIN;
	uint64_t x791 = 99267228663LLU;
	volatile int32_t t191 = -354;

    t191 = (((x789<=x790)<=x791)+x792);

    if (t191 != 256) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x793 = INT16_MIN;
	uint32_t x794 = 31830U;
	volatile int64_t x795 = INT64_MAX;
	volatile uint64_t x796 = UINT64_MAX;
	uint64_t t192 = 5067256LLU;

    t192 = (((x793<=x794)<=x795)+x796);

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x797 = UINT8_MAX;
	volatile int32_t x798 = -241881965;
	uint16_t x799 = UINT16_MAX;
	uint16_t x800 = 18U;
	volatile int32_t t193 = -1;

    t193 = (((x797<=x798)<=x799)+x800);

    if (t193 != 19) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int32_t x801 = 0;
	static int64_t x802 = INT64_MAX;
	int64_t x803 = INT64_MAX;
	int16_t x804 = -1;
	int32_t t194 = -344579063;

    t194 = (((x801<=x802)<=x803)+x804);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x805 = INT8_MIN;

    t195 = (((x805<=x806)<=x807)+x808);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x809 = -1LL;
	static uint8_t x810 = 2U;
	static int8_t x811 = INT8_MAX;
	int8_t x812 = -1;
	int32_t t196 = -500715;

    t196 = (((x809<=x810)<=x811)+x812);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x813 = -1LL;
	int32_t x814 = INT32_MAX;
	int8_t x815 = INT8_MIN;
	int32_t t197 = 39663978;

    t197 = (((x813<=x814)<=x815)+x816);

    if (t197 != 65535) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x817 = INT16_MIN;
	volatile int8_t x818 = INT8_MIN;
	static int16_t x819 = INT16_MAX;
	static int32_t x820 = INT32_MIN;
	static int32_t t198 = -6642079;

    t198 = (((x817<=x818)<=x819)+x820);

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x821 = INT16_MIN;
	static int16_t x822 = INT16_MAX;
	uint8_t x824 = 1U;
	volatile int32_t t199 = -79437070;

    t199 = (((x821<=x822)<=x823)+x824);

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

