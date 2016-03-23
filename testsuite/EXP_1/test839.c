
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

int32_t x5 = -1;
volatile int32_t x9 = INT32_MIN;
int16_t x17 = INT16_MIN;
int32_t x19 = -942007;
static volatile int32_t t3 = INT32_MIN;
int64_t t6 = 76581703875786LL;
static int64_t x39 = INT64_MAX;
static int64_t t8 = -201143215066191698LL;
static int32_t x41 = INT32_MIN;
volatile int64_t x46 = INT64_MAX;
uint8_t x66 = UINT8_MAX;
volatile uint16_t x67 = UINT16_MAX;
volatile int8_t x75 = 39;
int64_t x76 = INT64_MAX;
static int32_t x86 = 894;
volatile uint64_t t19 = 117LLU;
volatile int8_t x95 = -1;
int8_t x98 = INT8_MAX;
int64_t t21 = 25LL;
uint16_t x103 = UINT16_MAX;
int64_t t22 = INT64_MIN;
int16_t x110 = INT16_MIN;
int32_t x112 = INT32_MIN;
volatile int16_t x116 = -291;
int32_t t25 = -420148643;
uint8_t x119 = 1U;
static volatile int64_t x120 = -8LL;
volatile int64_t x124 = -1LL;
static int8_t x127 = INT8_MIN;
int64_t x129 = INT64_MIN;
int32_t x132 = INT32_MAX;
int64_t x133 = INT64_MIN;
static int16_t x135 = INT16_MIN;
int64_t t30 = 1871027518725680783LL;
volatile uint32_t x139 = 263409513U;
static volatile uint32_t t31 = UINT32_MAX;
static int8_t x146 = 2;
int8_t x147 = -1;
static int32_t x149 = INT32_MAX;
volatile uint64_t x150 = 76723436234057579LLU;
static int8_t x157 = -1;
static uint32_t x161 = 55043833U;
volatile int16_t x162 = -14130;
static int8_t x163 = -1;
int32_t x167 = -6726041;
static int32_t x170 = -1;
int64_t t40 = -524681081792177LL;
uint32_t x178 = UINT32_MAX;
volatile int32_t x181 = INT32_MAX;
volatile int32_t x185 = -1;
uint32_t x188 = UINT32_MAX;
static volatile uint32_t t46 = 4620U;
volatile int16_t x205 = INT16_MIN;
int64_t x206 = -1LL;
int32_t t52 = 32024;
int8_t x233 = -1;
int32_t t53 = 1271800;
static volatile uint32_t t54 = UINT32_MAX;
int64_t x243 = INT64_MIN;
volatile uint32_t x244 = 84844858U;
uint32_t x248 = 0U;
volatile int16_t x252 = INT16_MIN;
int8_t x255 = INT8_MIN;
int16_t x257 = 1;
int8_t x266 = INT8_MAX;
int32_t x268 = INT32_MIN;
volatile int64_t x270 = INT64_MIN;
int32_t x271 = -18558025;
volatile int64_t t61 = 6265LL;
int32_t x285 = INT32_MAX;
int64_t x286 = INT64_MIN;
int32_t x291 = 83;
volatile int16_t x292 = 1;
int8_t x302 = 1;
uint8_t x304 = UINT8_MAX;
int8_t x307 = -1;
static int8_t x313 = INT8_MAX;
uint16_t x320 = 32U;
volatile int32_t t73 = -3475;
volatile int64_t x326 = 44849LL;
uint16_t x336 = UINT16_MAX;
int16_t x337 = INT16_MIN;
volatile uint64_t t79 = 701266914LLU;
volatile uint64_t x346 = UINT64_MAX;
int16_t x353 = INT16_MIN;
int16_t x354 = -1;
int16_t x356 = 19;
int16_t x357 = -1880;
int8_t x364 = -3;
static volatile int32_t t84 = -12215;
uint64_t x366 = 436093702451062220LLU;
int64_t x370 = -1LL;
volatile int64_t t86 = 2LL;
volatile int64_t t88 = 404908290LL;
int16_t x386 = INT16_MIN;
int16_t x391 = 55;
static uint64_t x392 = UINT64_MAX;
uint32_t x393 = 79964283U;
volatile int64_t x395 = INT64_MAX;
int16_t x400 = -1;
int64_t x407 = INT64_MIN;
int8_t x410 = INT8_MIN;
volatile int64_t x415 = INT64_MAX;
volatile uint64_t x417 = 2268191859962813046LLU;
int64_t x425 = -1LL;
int64_t t99 = 176978117632714610LL;
static int16_t x434 = 487;
uint64_t x436 = 21LLU;
int32_t x437 = INT32_MIN;
int8_t x439 = INT8_MAX;
static uint64_t t102 = 87LLU;
static uint16_t x441 = 11300U;
int16_t x447 = 4;
static volatile uint64_t t108 = 24408LLU;
volatile int8_t x466 = INT8_MIN;
static volatile int32_t x468 = -1;
uint64_t x472 = 501164735963LLU;
uint64_t t110 = 92LLU;
static int16_t x480 = INT16_MIN;
uint64_t x481 = 73LLU;
static uint32_t x485 = 2792U;
int64_t x487 = INT64_MIN;
int32_t x491 = -9269636;
int32_t x496 = -1;
static volatile uint64_t t115 = UINT64_MAX;
int8_t x505 = -3;
int16_t x507 = INT16_MIN;
uint32_t t120 = UINT32_MAX;
static uint16_t x519 = 7976U;
volatile int32_t t122 = -55400;
static int64_t x536 = -1LL;
int32_t x544 = -371558680;
int8_t x547 = 31;
static volatile uint32_t x552 = UINT32_MAX;
uint16_t x553 = 247U;
int32_t x559 = 340348895;
volatile int32_t t131 = 1;
int8_t x565 = -1;
static int64_t t132 = 2023402040055464LL;
volatile int8_t x569 = -1;
static uint32_t x573 = 1U;
int32_t x576 = INT32_MAX;
int32_t x584 = INT32_MIN;
volatile uint32_t x586 = 5U;
int64_t x592 = -1LL;
static volatile uint32_t t139 = UINT32_MAX;
int64_t x603 = 1954097569LL;
uint64_t t140 = 1LLU;
uint16_t x616 = 4U;
uint32_t x625 = UINT32_MAX;
uint64_t x630 = 6740197865LLU;
volatile uint64_t t147 = 17149364611LLU;
volatile uint32_t t148 = 41434U;
static uint64_t x641 = UINT64_MAX;
uint32_t t150 = 459342158U;
int32_t x656 = -671056;
volatile uint8_t x660 = 0U;
int16_t x661 = -1;
static uint32_t t154 = 916724U;
int32_t x670 = INT32_MIN;
static int16_t x672 = INT16_MIN;
uint8_t x678 = 31U;
int32_t t158 = -18;
int8_t x683 = -1;
int16_t x686 = -1;
int64_t t160 = -2LL;
volatile int64_t x693 = -66023779727014LL;
int64_t x699 = -1LL;
volatile int64_t t163 = -80075LL;
uint32_t x703 = UINT32_MAX;
int64_t x708 = -19178147LL;
uint32_t x710 = 422710U;
uint8_t x714 = 1U;
int8_t x719 = INT8_MAX;
volatile int64_t x720 = INT64_MIN;
int16_t x721 = -1;
int32_t x722 = INT32_MAX;
int32_t x728 = -1;
int16_t x733 = INT16_MIN;
volatile int8_t x735 = INT8_MAX;
static int8_t x736 = INT8_MAX;
int32_t t172 = -4;
volatile int64_t t174 = -196594781196LL;
int16_t x748 = INT16_MIN;
int16_t x749 = -1;
int32_t x752 = INT32_MAX;
uint16_t x760 = 16214U;
int8_t x761 = -28;
int8_t x764 = -1;
uint8_t x771 = 9U;
volatile int32_t x783 = INT32_MAX;
volatile int32_t t183 = 339;
static int8_t x785 = INT8_MIN;
volatile int8_t x786 = INT8_MAX;
uint32_t x788 = UINT32_MAX;
uint64_t x796 = 9LLU;
static uint64_t x809 = 1150261089399LLU;
int32_t x810 = INT32_MIN;
uint32_t x815 = UINT32_MAX;
uint8_t x819 = UINT8_MAX;
volatile int64_t t192 = 1LL;
static int64_t x834 = INT64_MIN;
volatile uint32_t t197 = 4426509U;


void f0(void) {
    	int16_t x1 = INT16_MAX;
	volatile uint64_t x2 = UINT64_MAX;
	int16_t x3 = -4533;
	uint16_t x4 = 14408U;
	static uint64_t t0 = 42114756268270754LLU;

    t0 = (((x1%x2)/x3)|x4);

    if (t0 != 14408LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x6 = 18U;
	int64_t x7 = -1LL;
	uint64_t x8 = 375722637879299LLU;
	volatile uint64_t t1 = UINT64_MAX;

    t1 = (((x5%x6)/x7)|x8);

    if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = INT32_MAX;
	static int32_t x11 = -1;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

    t2 = (((x9%x10)/x11)|x12);

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = INT16_MAX;
	int32_t x20 = INT32_MIN;

    t3 = (((x17%x18)/x19)|x20);

    if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MAX;
	static uint64_t x23 = UINT64_MAX;
	uint8_t x24 = UINT8_MAX;
	static volatile uint64_t t4 = 738490645399352619LLU;

    t4 = (((x21%x22)/x23)|x24);

    if (t4 != 255LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -8;
	static int32_t x26 = INT32_MAX;
	volatile uint64_t x27 = 478873723687650LLU;
	int64_t x28 = INT64_MIN;
	static volatile uint64_t t5 = 37330715454LLU;

    t5 = (((x25%x26)/x27)|x28);

    if (t5 != 9223372036854814329LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	int16_t x30 = -23;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;

    t6 = (((x29%x30)/x31)|x32);

    if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint8_t x33 = 3U;
	int32_t x34 = -1;
	uint8_t x35 = UINT8_MAX;
	uint16_t x36 = 1U;
	int32_t t7 = 5;

    t7 = (((x33%x34)/x35)|x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = INT16_MIN;
	int64_t x38 = INT64_MAX;
	int8_t x40 = INT8_MIN;

    t8 = (((x37%x38)/x39)|x40);

    if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x42 = INT16_MIN;
	volatile uint64_t x43 = UINT64_MAX;
	uint64_t x44 = 1270742146961562LLU;
	volatile uint64_t t9 = 0LLU;

    t9 = (((x41%x42)/x43)|x44);

    if (t9 != 1270742146961562LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = INT16_MAX;
	volatile int8_t x47 = INT8_MIN;
	int64_t x48 = INT64_MIN;
	int64_t t10 = -15455098113095LL;

    t10 = (((x45%x46)/x47)|x48);

    if (t10 != -255LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x49 = INT64_MIN;
	static int64_t x50 = 1408635779LL;
	static uint8_t x51 = 1U;
	static volatile int8_t x52 = -1;
	int64_t t11 = -4432461LL;

    t11 = (((x49%x50)/x51)|x52);

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	int64_t x54 = -1LL;
	volatile int16_t x55 = INT16_MIN;
	int32_t x56 = INT32_MAX;
	static volatile int64_t t12 = -1084LL;

    t12 = (((x53%x54)/x55)|x56);

    if (t12 != 2147483647LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x57 = INT64_MIN;
	uint32_t x58 = 1460571081U;
	volatile int16_t x59 = -14;
	int32_t x60 = -2064737;
	static volatile int64_t t13 = -3LL;

    t13 = (((x57%x58)/x59)|x60);

    if (t13 != -1180001LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x65 = 4038272U;
	int8_t x68 = INT8_MIN;
	uint32_t t14 = 7337U;

    t14 = (((x65%x66)/x67)|x68);

    if (t14 != 4294967168U) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = 67271;
	int32_t x70 = INT32_MIN;
	volatile uint32_t x71 = UINT32_MAX;
	static int64_t x72 = -6749464330027833LL;
	volatile int64_t t15 = -1263957265350755463LL;

    t15 = (((x69%x70)/x71)|x72);

    if (t15 != -6749464330027833LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x73 = -1;
	static volatile int32_t x74 = 2172287;
	int64_t t16 = INT64_MAX;

    t16 = (((x73%x74)/x75)|x76);

    if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = UINT8_MAX;
	volatile int16_t x78 = INT16_MIN;
	int8_t x79 = -1;
	int16_t x80 = -90;
	volatile int32_t t17 = 660;

    t17 = (((x77%x78)/x79)|x80);

    if (t17 != -89) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x81 = INT8_MAX;
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	static int16_t x84 = 227;
	int32_t t18 = -3754418;

    t18 = (((x81%x82)/x83)|x84);

    if (t18 != 227) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint16_t x85 = UINT16_MAX;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = 218;

    t19 = (((x85%x86)/x87)|x88);

    if (t19 != 218LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = 12U;
	int32_t x94 = INT32_MAX;
	static int8_t x96 = INT8_MIN;
	int32_t t20 = -434860;

    t20 = (((x93%x94)/x95)|x96);

    if (t20 != -12) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x97 = INT8_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile int64_t x100 = -1LL;

    t21 = (((x97%x98)/x99)|x100);

    if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint32_t x101 = 6U;
	int16_t x102 = 203;
	volatile int64_t x104 = INT64_MIN;

    t22 = (((x101%x102)/x103)|x104);

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x105 = 4172620471285566LL;
	uint64_t x106 = 484762LLU;
	int16_t x107 = -140;
	int64_t x108 = -2LL;
	volatile uint64_t t23 = 13548997LLU;

    t23 = (((x105%x106)/x107)|x108);

    if (t23 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x109 = -2007;
	int16_t x111 = -12;
	volatile int32_t t24 = 1700;

    t24 = (((x109%x110)/x111)|x112);

    if (t24 != -2147483481) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x113 = -9264;
	uint16_t x114 = 12U;
	int16_t x115 = -327;

    t25 = (((x113%x114)/x115)|x116);

    if (t25 != -291) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MIN;
	volatile int64_t t26 = 23LL;

    t26 = (((x117%x118)/x119)|x120);

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = INT32_MIN;
	static uint32_t x122 = 14U;
	volatile uint64_t x123 = UINT64_MAX;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = (((x121%x122)/x123)|x124);

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = -1;
	static volatile int32_t x126 = INT32_MAX;
	static uint8_t x128 = 14U;
	int32_t t28 = 886469973;

    t28 = (((x125%x126)/x127)|x128);

    if (t28 != 14) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x130 = INT16_MAX;
	int8_t x131 = INT8_MIN;
	static int64_t t29 = 19728506LL;

    t29 = (((x129%x130)/x131)|x132);

    if (t29 != 2147483647LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x134 = -381575LL;
	static uint32_t x136 = 1749908U;

    t30 = (((x133%x134)/x135)|x136);

    if (t30 != 1749908LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x137 = UINT16_MAX;
	uint16_t x138 = 3697U;
	uint32_t x140 = UINT32_MAX;

    t31 = (((x137%x138)/x139)|x140);

    if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = INT64_MIN;
	static volatile uint8_t x142 = 1U;
	uint64_t x143 = 35526506023LLU;
	static int64_t x144 = 21930388947LL;
	volatile uint64_t t32 = 1021832313056513762LLU;

    t32 = (((x141%x142)/x143)|x144);

    if (t32 != 21930388947LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x145 = 13459U;
	int8_t x148 = -11;
	uint32_t t33 = 1393291773U;

    t33 = (((x145%x146)/x147)|x148);

    if (t33 != 4294967285U) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile uint64_t x151 = 1LLU;
	volatile int64_t x152 = INT64_MIN;
	volatile uint64_t t34 = 26927831155956LLU;

    t34 = (((x149%x150)/x151)|x152);

    if (t34 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x153 = 8671280249889122LL;
	int32_t x154 = -1;
	volatile int32_t x155 = INT32_MIN;
	static uint32_t x156 = UINT32_MAX;
	volatile int64_t t35 = -254746271335788LL;

    t35 = (((x153%x154)/x155)|x156);

    if (t35 != 4294967295LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x158 = -1LL;
	int16_t x159 = INT16_MIN;
	uint8_t x160 = 20U;
	volatile int64_t t36 = 613LL;

    t36 = (((x157%x158)/x159)|x160);

    if (t36 != 20LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x164 = 2U;
	uint32_t t37 = 142U;

    t37 = (((x161%x162)/x163)|x164);

    if (t37 != 2U) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x165 = -1;
	int32_t x166 = -1;
	int32_t x168 = -1;
	volatile int32_t t38 = 5449397;

    t38 = (((x165%x166)/x167)|x168);

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x169 = 60275U;
	int64_t x171 = INT64_MIN;
	static int8_t x172 = INT8_MIN;
	volatile int64_t t39 = 13770147LL;

    t39 = (((x169%x170)/x171)|x172);

    if (t39 != -128LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x173 = 3493290;
	static volatile int64_t x174 = 520LL;
	int64_t x175 = 228748174LL;
	int16_t x176 = -1;

    t40 = (((x173%x174)/x175)|x176);

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x177 = INT32_MAX;
	int64_t x179 = INT64_MIN;
	static int32_t x180 = INT32_MIN;
	volatile int64_t t41 = -2836LL;

    t41 = (((x177%x178)/x179)|x180);

    if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x182 = UINT16_MAX;
	uint32_t x183 = 2077019850U;
	uint64_t x184 = 132598355840709074LLU;
	volatile uint64_t t42 = 14021803LLU;

    t42 = (((x181%x182)/x183)|x184);

    if (t42 != 132598355840709074LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x186 = INT64_MIN;
	int32_t x187 = -1;
	static int64_t t43 = 110LL;

    t43 = (((x185%x186)/x187)|x188);

    if (t43 != 4294967295LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x189 = -1;
	volatile int8_t x190 = 53;
	int32_t x191 = -3226;
	int32_t x192 = INT32_MIN;
	static int32_t t44 = INT32_MIN;

    t44 = (((x189%x190)/x191)|x192);

    if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x193 = 646114U;
	static uint64_t x194 = 581779565906LLU;
	uint32_t x195 = 265U;
	static volatile int64_t x196 = INT64_MIN;
	uint64_t t45 = 893556496322742LLU;

    t45 = (((x193%x194)/x195)|x196);

    if (t45 != 9223372036854778246LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint8_t x197 = 0U;
	uint32_t x198 = 1786696U;
	volatile int16_t x199 = INT16_MAX;
	volatile uint32_t x200 = 23398U;

    t46 = (((x197%x198)/x199)|x200);

    if (t46 != 23398U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x201 = 21347783433LLU;
	volatile int32_t x202 = -167549;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = 302;
	uint64_t t47 = 1109828394726LLU;

    t47 = (((x201%x202)/x203)|x204);

    if (t47 != 302LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x207 = INT16_MAX;
	volatile uint32_t x208 = 3800U;
	int64_t t48 = -5146394812LL;

    t48 = (((x205%x206)/x207)|x208);

    if (t48 != 3800LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int32_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	static uint16_t x215 = 1U;
	int64_t x216 = -16380292545091LL;
	uint64_t t49 = 15230572972822LLU;

    t49 = (((x213%x214)/x215)|x216);

    if (t49 != 18446727693417006525LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = INT8_MIN;
	volatile int16_t x218 = -1;
	int16_t x219 = INT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	int32_t t50 = INT32_MIN;

    t50 = (((x217%x218)/x219)|x220);

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x225 = -1LL;
	static int32_t x226 = INT32_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = -1;
	static volatile int64_t t51 = -7146489055611139LL;

    t51 = (((x225%x226)/x227)|x228);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x229 = -15;
	volatile int16_t x230 = -1;
	int16_t x231 = INT16_MAX;
	int16_t x232 = INT16_MAX;

    t52 = (((x229%x230)/x231)|x232);

    if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	volatile int16_t x236 = INT16_MIN;

    t53 = (((x233%x234)/x235)|x236);

    if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x237 = INT16_MIN;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MAX;
	static uint32_t x240 = UINT32_MAX;

    t54 = (((x237%x238)/x239)|x240);

    if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x241 = -1;
	uint64_t x242 = 429LLU;
	uint64_t t55 = 3830973980146130LLU;

    t55 = (((x241%x242)/x243)|x244);

    if (t55 != 84844858LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x245 = 3142U;
	static int32_t x246 = 228;
	int32_t x247 = INT32_MIN;
	volatile uint32_t t56 = 66U;

    t56 = (((x245%x246)/x247)|x248);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x249 = -1;
	int64_t x250 = -3191809539594LL;
	volatile int8_t x251 = 1;
	int64_t t57 = 16488378971LL;

    t57 = (((x249%x250)/x251)|x252);

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x253 = 0;
	int16_t x254 = INT16_MAX;
	volatile int32_t x256 = INT32_MIN;
	volatile int32_t t58 = INT32_MIN;

    t58 = (((x253%x254)/x255)|x256);

    if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x258 = UINT16_MAX;
	int16_t x259 = INT16_MIN;
	static uint16_t x260 = 2235U;
	volatile int32_t t59 = -1;

    t59 = (((x257%x258)/x259)|x260);

    if (t59 != 2235) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x265 = INT32_MAX;
	int16_t x267 = INT16_MIN;
	int32_t t60 = INT32_MIN;

    t60 = (((x265%x266)/x267)|x268);

    if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x269 = -1;
	int8_t x272 = 3;

    t61 = (((x269%x270)/x271)|x272);

    if (t61 != 3LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x273 = UINT8_MAX;
	int8_t x274 = 13;
	uint64_t x275 = 1355540610252644283LLU;
	int32_t x276 = INT32_MAX;
	volatile uint64_t t62 = 424969LLU;

    t62 = (((x273%x274)/x275)|x276);

    if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x277 = 823165U;
	int64_t x278 = INT64_MIN;
	int8_t x279 = 4;
	static int16_t x280 = 0;
	static int64_t t63 = -18967382LL;

    t63 = (((x277%x278)/x279)|x280);

    if (t63 != 205791LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x281 = 7233558305668LLU;
	uint64_t x282 = 4924321530287600778LLU;
	int8_t x283 = 7;
	uint16_t x284 = 413U;
	uint64_t t64 = 2LLU;

    t64 = (((x281%x282)/x283)|x284);

    if (t64 != 1033365472255LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x287 = INT32_MIN;
	uint32_t x288 = 7574972U;
	int64_t t65 = 46761641050LL;

    t65 = (((x285%x286)/x287)|x288);

    if (t65 != 7574972LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x289 = UINT32_MAX;
	volatile int64_t x290 = INT64_MAX;
	volatile int64_t t66 = 16LL;

    t66 = (((x289%x290)/x291)|x292);

    if (t66 != 51746593LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x293 = -5;
	static uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	int32_t x296 = 2;
	uint64_t t67 = 14131016956052923LLU;

    t67 = (((x293%x294)/x295)|x296);

    if (t67 != 72340172838076674LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MIN;
	int16_t x298 = 1;
	static int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t68 = -143;

    t68 = (((x297%x298)/x299)|x300);

    if (t68 != -32768) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x301 = -1;
	int8_t x303 = INT8_MIN;
	int32_t t69 = 0;

    t69 = (((x301%x302)/x303)|x304);

    if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = INT16_MIN;
	int64_t x306 = -6702119597LL;
	volatile int32_t x308 = INT32_MIN;
	int64_t t70 = 34587841854447375LL;

    t70 = (((x305%x306)/x307)|x308);

    if (t70 != -2147450880LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x309 = INT16_MIN;
	int16_t x310 = -1;
	int32_t x311 = 25961;
	static int16_t x312 = INT16_MIN;
	volatile int32_t t71 = 324604;

    t71 = (((x309%x310)/x311)|x312);

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x314 = INT8_MAX;
	static volatile int32_t x315 = INT32_MIN;
	uint16_t x316 = UINT16_MAX;
	int32_t t72 = -1;

    t72 = (((x313%x314)/x315)|x316);

    if (t72 != 65535) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x317 = INT32_MAX;
	int8_t x318 = 8;
	uint8_t x319 = 94U;

    t73 = (((x317%x318)/x319)|x320);

    if (t73 != 32) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint32_t x321 = 4456U;
	uint8_t x322 = UINT8_MAX;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = 2;
	uint32_t t74 = 77074U;

    t74 = (((x321%x322)/x323)|x324);

    if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x325 = INT16_MIN;
	int64_t x327 = 87736001LL;
	int16_t x328 = INT16_MIN;
	int64_t t75 = -191946386155149153LL;

    t75 = (((x325%x326)/x327)|x328);

    if (t75 != -32768LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MIN;
	static uint32_t x331 = UINT32_MAX;
	static uint16_t x332 = UINT16_MAX;
	int64_t t76 = -1577205083LL;

    t76 = (((x329%x330)/x331)|x332);

    if (t76 != 65535LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x333 = 21524U;
	int8_t x334 = -1;
	static int32_t x335 = INT32_MAX;
	volatile uint32_t t77 = 240345U;

    t77 = (((x333%x334)/x335)|x336);

    if (t77 != 65535U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x338 = 31LL;
	volatile int16_t x339 = 3;
	static uint8_t x340 = 57U;
	static int64_t t78 = -109753210470941LL;

    t78 = (((x337%x338)/x339)|x340);

    if (t78 != 57LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x341 = -1LL;
	int16_t x342 = INT16_MIN;
	volatile uint64_t x343 = 916082214533288LLU;
	int32_t x344 = -472;

    t79 = (((x341%x342)/x343)|x344);

    if (t79 != 18446744073709551272LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x345 = 32750U;
	static uint64_t x347 = UINT64_MAX;
	static int64_t x348 = INT64_MIN;
	volatile uint64_t t80 = 61259448877LLU;

    t80 = (((x345%x346)/x347)|x348);

    if (t80 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int8_t x349 = INT8_MIN;
	int8_t x350 = -1;
	static int16_t x351 = INT16_MIN;
	int16_t x352 = -58;
	int32_t t81 = 0;

    t81 = (((x349%x350)/x351)|x352);

    if (t81 != -58) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x355 = -1;
	int32_t t82 = -2533223;

    t82 = (((x353%x354)/x355)|x356);

    if (t82 != 19) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x358 = 8;
	uint32_t x359 = 19524331U;
	volatile int8_t x360 = -2;
	uint32_t t83 = 17U;

    t83 = (((x357%x358)/x359)|x360);

    if (t83 != 4294967294U) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x361 = INT32_MIN;
	volatile int8_t x362 = 3;
	uint16_t x363 = UINT16_MAX;

    t84 = (((x361%x362)/x363)|x364);

    if (t84 != -3) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x365 = INT64_MIN;
	int16_t x367 = INT16_MAX;
	int16_t x368 = 1;
	volatile uint64_t t85 = 1560441LLU;

    t85 = (((x365%x366)/x367)|x368);

    if (t85 != 1996041303215LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x369 = -1;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = 0U;

    t86 = (((x369%x370)/x371)|x372);

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x373 = INT8_MIN;
	uint8_t x374 = UINT8_MAX;
	static volatile int64_t x375 = -121244747LL;
	uint32_t x376 = 93U;
	static volatile int64_t t87 = 798158262399003LL;

    t87 = (((x373%x374)/x375)|x376);

    if (t87 != 93LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x381 = 3LL;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = 13U;
	volatile int8_t x384 = INT8_MAX;

    t88 = (((x381%x382)/x383)|x384);

    if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x385 = -1LL;
	static volatile uint8_t x387 = UINT8_MAX;
	volatile uint16_t x388 = 22U;
	volatile int64_t t89 = 1687032683LL;

    t89 = (((x385%x386)/x387)|x388);

    if (t89 != 22LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x389 = 58161767U;
	volatile int8_t x390 = -1;
	uint64_t t90 = UINT64_MAX;

    t90 = (((x389%x390)/x391)|x392);

    if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x394 = -1;
	static volatile int64_t x396 = INT64_MAX;
	volatile int64_t t91 = INT64_MAX;

    t91 = (((x393%x394)/x395)|x396);

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x397 = 11801;
	volatile int8_t x398 = 8;
	int64_t x399 = INT64_MAX;
	int64_t t92 = 163671LL;

    t92 = (((x397%x398)/x399)|x400);

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int64_t x401 = 10582009281689LL;
	static uint8_t x402 = 1U;
	int8_t x403 = -1;
	int16_t x404 = INT16_MAX;
	static volatile int64_t t93 = 1499273816710635LL;

    t93 = (((x401%x402)/x403)|x404);

    if (t93 != 32767LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x405 = 5LLU;
	volatile uint8_t x406 = 8U;
	int16_t x408 = INT16_MIN;
	static uint64_t t94 = 57291747472800206LLU;

    t94 = (((x405%x406)/x407)|x408);

    if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x409 = INT16_MIN;
	int16_t x411 = 191;
	static int32_t x412 = -1;
	static volatile int32_t t95 = 951;

    t95 = (((x409%x410)/x411)|x412);

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x413 = INT16_MIN;
	int32_t x414 = -1422421;
	int32_t x416 = INT32_MIN;
	int64_t t96 = -270196910LL;

    t96 = (((x413%x414)/x415)|x416);

    if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x418 = 8530LL;
	static int8_t x419 = 18;
	uint64_t x420 = UINT64_MAX;
	uint64_t t97 = UINT64_MAX;

    t97 = (((x417%x418)/x419)|x420);

    if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x421 = 159;
	int64_t x422 = -2LL;
	static int32_t x423 = 27;
	static int32_t x424 = -216585405;
	volatile int64_t t98 = -1395123347757739LL;

    t98 = (((x421%x422)/x423)|x424);

    if (t98 != -216585405LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x426 = 4434939U;
	volatile int8_t x427 = -29;
	int8_t x428 = INT8_MIN;

    t99 = (((x425%x426)/x427)|x428);

    if (t99 != -128LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x429 = UINT16_MAX;
	int64_t x430 = 1855LL;
	volatile uint64_t x431 = UINT64_MAX;
	int8_t x432 = 6;
	uint64_t t100 = 179886392126421557LLU;

    t100 = (((x429%x430)/x431)|x432);

    if (t100 != 6LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x433 = INT8_MIN;
	static volatile uint32_t x435 = UINT32_MAX;
	volatile uint64_t t101 = 36113714180786536LLU;

    t101 = (((x433%x434)/x435)|x436);

    if (t101 != 21LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x438 = UINT64_MAX;
	static int32_t x440 = 114700082;

    t102 = (((x437%x438)/x439)|x440);

    if (t102 != 145249953331970043LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x442 = -21249LL;
	uint16_t x443 = UINT16_MAX;
	int32_t x444 = INT32_MIN;
	volatile int64_t t103 = -90060283654102696LL;

    t103 = (((x441%x442)/x443)|x444);

    if (t103 != -2147483648LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MIN;
	uint16_t x448 = 3578U;
	int32_t t104 = -825;

    t104 = (((x445%x446)/x447)|x448);

    if (t104 != 3578) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x449 = INT16_MAX;
	int32_t x450 = INT32_MAX;
	uint8_t x451 = 46U;
	static int8_t x452 = 4;
	int32_t t105 = 63594811;

    t105 = (((x449%x450)/x451)|x452);

    if (t105 != 716) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x453 = 7022505U;
	uint8_t x454 = UINT8_MAX;
	volatile uint8_t x455 = UINT8_MAX;
	uint64_t x456 = 7857796123LLU;
	uint64_t t106 = 242980325944725489LLU;

    t106 = (((x453%x454)/x455)|x456);

    if (t106 != 7857796123LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x457 = 33;
	int8_t x458 = 4;
	int8_t x459 = INT8_MIN;
	int32_t x460 = INT32_MIN;
	static volatile int32_t t107 = INT32_MIN;

    t107 = (((x457%x458)/x459)|x460);

    if (t107 != INT32_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x461 = 26387028LL;
	volatile int16_t x462 = 1526;
	volatile uint64_t x463 = 108119720LLU;
	int8_t x464 = -2;

    t108 = (((x461%x462)/x463)|x464);

    if (t108 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x465 = 5821924U;
	int32_t x467 = INT32_MAX;
	volatile uint32_t t109 = UINT32_MAX;

    t109 = (((x465%x466)/x467)|x468);

    if (t109 != UINT32_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x469 = -1LL;
	static volatile int16_t x470 = INT16_MIN;
	static int8_t x471 = INT8_MIN;

    t110 = (((x469%x470)/x471)|x472);

    if (t110 != 501164735963LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x477 = UINT64_MAX;
	static int64_t x478 = INT64_MIN;
	int16_t x479 = -1;
	volatile uint64_t t111 = 5076LLU;

    t111 = (((x477%x478)/x479)|x480);

    if (t111 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x482 = INT64_MIN;
	int64_t x483 = INT64_MAX;
	volatile int8_t x484 = INT8_MIN;
	uint64_t t112 = 4442308944508LLU;

    t112 = (((x481%x482)/x483)|x484);

    if (t112 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x486 = UINT8_MAX;
	int32_t x488 = INT32_MAX;
	static volatile int64_t t113 = -919695339LL;

    t113 = (((x485%x486)/x487)|x488);

    if (t113 != 2147483647LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x489 = -4931;
	int64_t x490 = INT64_MIN;
	static int16_t x492 = -1;
	volatile int64_t t114 = 40462LL;

    t114 = (((x489%x490)/x491)|x492);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x493 = INT16_MIN;
	uint32_t x494 = 1020586683U;
	uint64_t x495 = 355339LLU;

    t115 = (((x493%x494)/x495)|x496);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x497 = -978670LL;
	int16_t x498 = INT16_MIN;
	volatile int8_t x499 = INT8_MAX;
	int8_t x500 = INT8_MAX;
	volatile int64_t t116 = 30925073591939LL;

    t116 = (((x497%x498)/x499)|x500);

    if (t116 != -129LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x501 = 126658;
	static volatile int32_t x502 = INT32_MIN;
	int32_t x503 = INT32_MIN;
	int32_t x504 = 913365199;
	int32_t t117 = -1;

    t117 = (((x501%x502)/x503)|x504);

    if (t117 != 913365199) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x506 = UINT8_MAX;
	int64_t x508 = 3578926101LL;
	int64_t t118 = 24963072979693784LL;

    t118 = (((x505%x506)/x507)|x508);

    if (t118 != 3578926101LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x509 = INT64_MAX;
	volatile uint8_t x510 = 12U;
	int8_t x511 = -13;
	int16_t x512 = INT16_MIN;
	static volatile int64_t t119 = -178125990120570933LL;

    t119 = (((x509%x510)/x511)|x512);

    if (t119 != -32768LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x513 = 0U;
	static uint32_t x514 = UINT32_MAX;
	volatile uint16_t x515 = 31412U;
	uint32_t x516 = UINT32_MAX;

    t120 = (((x513%x514)/x515)|x516);

    if (t120 != UINT32_MAX) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x517 = UINT16_MAX;
	int64_t x518 = 7023LL;
	int8_t x520 = 1;
	volatile int64_t t121 = 31118529116LL;

    t121 = (((x517%x518)/x519)|x520);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x521 = 2199967;
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = -1;
	int16_t x524 = -1;

    t122 = (((x521%x522)/x523)|x524);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x525 = -1;
	int32_t x526 = INT32_MAX;
	int16_t x527 = INT16_MIN;
	int16_t x528 = INT16_MIN;
	int32_t t123 = 85;

    t123 = (((x525%x526)/x527)|x528);

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x529 = INT8_MAX;
	int64_t x530 = INT64_MAX;
	int8_t x531 = 4;
	uint8_t x532 = UINT8_MAX;
	int64_t t124 = 7575LL;

    t124 = (((x529%x530)/x531)|x532);

    if (t124 != 255LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x533 = INT32_MIN;
	uint32_t x534 = UINT32_MAX;
	int16_t x535 = 14;
	volatile int64_t t125 = -27371456LL;

    t125 = (((x533%x534)/x535)|x536);

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x537 = -1;
	int16_t x538 = -140;
	static volatile uint64_t x539 = 3087346LLU;
	int16_t x540 = INT16_MIN;
	uint64_t t126 = 272251818455LLU;

    t126 = (((x537%x538)/x539)|x540);

    if (t126 != 18446744073709539359LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x541 = INT8_MIN;
	int64_t x542 = -64058836455832LL;
	int16_t x543 = 13;
	int64_t t127 = -47966745924353850LL;

    t127 = (((x541%x542)/x543)|x544);

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x545 = -1LL;
	uint8_t x546 = UINT8_MAX;
	static int64_t x548 = 994663089010061763LL;
	int64_t t128 = -50394576LL;

    t128 = (((x545%x546)/x547)|x548);

    if (t128 != 994663089010061763LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x549 = 7652U;
	int8_t x550 = INT8_MIN;
	uint16_t x551 = UINT16_MAX;
	volatile uint32_t t129 = UINT32_MAX;

    t129 = (((x549%x550)/x551)|x552);

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x554 = 1;
	int8_t x555 = 1;
	int64_t x556 = INT64_MAX;
	volatile int64_t t130 = INT64_MAX;

    t130 = (((x553%x554)/x555)|x556);

    if (t130 != INT64_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x557 = INT32_MAX;
	static int16_t x558 = INT16_MIN;
	int8_t x560 = INT8_MIN;

    t131 = (((x557%x558)/x559)|x560);

    if (t131 != -128) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x566 = -1LL;
	int32_t x567 = -1;
	int8_t x568 = INT8_MIN;

    t132 = (((x565%x566)/x567)|x568);

    if (t132 != -128LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x570 = INT8_MIN;
	int32_t x571 = INT32_MIN;
	volatile int32_t x572 = INT32_MIN;
	int32_t t133 = INT32_MIN;

    t133 = (((x569%x570)/x571)|x572);

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x574 = UINT32_MAX;
	static volatile int16_t x575 = -6959;
	volatile uint32_t t134 = 29352729U;

    t134 = (((x573%x574)/x575)|x576);

    if (t134 != 2147483647U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x577 = INT32_MAX;
	volatile uint64_t x578 = 42823489040922919LLU;
	uint32_t x579 = 58581U;
	static int8_t x580 = INT8_MIN;
	uint64_t t135 = 1643923215759822433LLU;

    t135 = (((x577%x578)/x579)|x580);

    if (t135 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x581 = INT16_MIN;
	int32_t x582 = -3912;
	volatile int16_t x583 = INT16_MIN;
	volatile int32_t t136 = INT32_MIN;

    t136 = (((x581%x582)/x583)|x584);

    if (t136 != INT32_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x585 = INT16_MIN;
	uint8_t x587 = UINT8_MAX;
	int64_t x588 = INT64_MAX;
	static volatile int64_t t137 = INT64_MAX;

    t137 = (((x585%x586)/x587)|x588);

    if (t137 != INT64_MAX) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x589 = -3;
	int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MAX;
	volatile int64_t t138 = 162241279031247022LL;

    t138 = (((x589%x590)/x591)|x592);

    if (t138 != -1LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x593 = 0U;
	static int8_t x594 = -1;
	volatile int32_t x595 = INT32_MIN;
	uint32_t x596 = UINT32_MAX;

    t139 = (((x593%x594)/x595)|x596);

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x601 = 2976799891908349LLU;
	uint16_t x602 = 8U;
	uint16_t x604 = 1U;

    t140 = (((x601%x602)/x603)|x604);

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x605 = -42;
	uint32_t x606 = 637U;
	uint16_t x607 = UINT16_MAX;
	uint32_t x608 = 5U;
	uint32_t t141 = 152881U;

    t141 = (((x605%x606)/x607)|x608);

    if (t141 != 5U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x609 = UINT16_MAX;
	uint32_t x610 = UINT32_MAX;
	static int16_t x611 = INT16_MAX;
	int8_t x612 = 11;
	uint32_t t142 = 2U;

    t142 = (((x609%x610)/x611)|x612);

    if (t142 != 11U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int32_t x613 = INT32_MIN;
	volatile uint32_t x614 = UINT32_MAX;
	volatile int64_t x615 = INT64_MAX;
	int64_t t143 = 46LL;

    t143 = (((x613%x614)/x615)|x616);

    if (t143 != 4LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x617 = -1;
	uint16_t x618 = 25406U;
	volatile int64_t x619 = INT64_MIN;
	static int16_t x620 = 453;
	volatile int64_t t144 = 57446LL;

    t144 = (((x617%x618)/x619)|x620);

    if (t144 != 453LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x621 = 5623;
	uint64_t x622 = UINT64_MAX;
	int8_t x623 = INT8_MAX;
	int64_t x624 = -3147796LL;
	uint64_t t145 = 1740571808819403LLU;

    t145 = (((x621%x622)/x623)|x624);

    if (t145 != 18446744073706403820LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x626 = 99U;
	int8_t x627 = INT8_MIN;
	int32_t x628 = -1;
	volatile uint32_t t146 = UINT32_MAX;

    t146 = (((x625%x626)/x627)|x628);

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x629 = UINT32_MAX;
	static volatile uint16_t x631 = 9667U;
	volatile uint16_t x632 = 10U;

    t147 = (((x629%x630)/x631)|x632);

    if (t147 != 444299LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x633 = 10751U;
	volatile int32_t x634 = INT32_MIN;
	volatile int16_t x635 = INT16_MIN;
	uint32_t x636 = 491922U;

    t148 = (((x633%x634)/x635)|x636);

    if (t148 != 491922U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x642 = 431U;
	uint64_t x643 = 4591385708153823816LLU;
	volatile uint32_t x644 = 3070057U;
	uint64_t t149 = 13664902831211LLU;

    t149 = (((x641%x642)/x643)|x644);

    if (t149 != 3070057LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x645 = INT8_MIN;
	static uint32_t x646 = 91U;
	static int8_t x647 = INT8_MAX;
	uint8_t x648 = UINT8_MAX;

    t150 = (((x645%x646)/x647)|x648);

    if (t150 != 255U) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x649 = INT8_MAX;
	static uint8_t x650 = UINT8_MAX;
	int8_t x651 = -1;
	int64_t x652 = INT64_MAX;
	volatile int64_t t151 = 3706277797LL;

    t151 = (((x649%x650)/x651)|x652);

    if (t151 != -1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x653 = 43U;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = 495548LLU;
	static volatile uint64_t t152 = 3789LLU;

    t152 = (((x653%x654)/x655)|x656);

    if (t152 != 18446744073708880560LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x657 = INT16_MIN;
	uint64_t x658 = 59563LLU;
	int16_t x659 = INT16_MIN;
	volatile uint64_t t153 = 23853054LLU;

    t153 = (((x657%x658)/x659)|x660);

    if (t153 != 0LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x662 = 642853U;
	int32_t x663 = -1;
	uint8_t x664 = 10U;

    t154 = (((x661%x662)/x663)|x664);

    if (t154 != 10U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x665 = -1;
	int8_t x666 = -1;
	int64_t x667 = 32500845LL;
	int16_t x668 = INT16_MIN;
	int64_t t155 = -149986756740LL;

    t155 = (((x665%x666)/x667)|x668);

    if (t155 != -32768LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x669 = UINT8_MAX;
	int64_t x671 = 233559802342977980LL;
	volatile int64_t t156 = 1132804231903207101LL;

    t156 = (((x669%x670)/x671)|x672);

    if (t156 != -32768LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x673 = -42099934;
	static volatile uint32_t x674 = 12722U;
	volatile int64_t x675 = 129666825895623LL;
	int32_t x676 = INT32_MIN;
	volatile int64_t t157 = 287182LL;

    t157 = (((x673%x674)/x675)|x676);

    if (t157 != -2147483648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x677 = UINT8_MAX;
	volatile int8_t x679 = -1;
	int32_t x680 = 404088729;

    t158 = (((x677%x678)/x679)|x680);

    if (t158 != -7) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x681 = UINT64_MAX;
	volatile uint64_t x682 = 93LLU;
	static int32_t x684 = INT32_MAX;
	static uint64_t t159 = 24127167884LLU;

    t159 = (((x681%x682)/x683)|x684);

    if (t159 != 2147483647LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x685 = -1;
	static volatile int64_t x687 = INT64_MIN;
	volatile int32_t x688 = INT32_MAX;

    t160 = (((x685%x686)/x687)|x688);

    if (t160 != 2147483647LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x689 = 335U;
	static int8_t x690 = 1;
	static int32_t x691 = INT32_MAX;
	static int64_t x692 = INT64_MIN;
	static int64_t t161 = INT64_MIN;

    t161 = (((x689%x690)/x691)|x692);

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x694 = INT16_MIN;
	int16_t x695 = -72;
	int16_t x696 = INT16_MIN;
	int64_t t162 = 15662LL;

    t162 = (((x693%x694)/x695)|x696);

    if (t162 != -32347LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x697 = INT16_MIN;
	volatile int32_t x698 = -56611425;
	uint32_t x700 = 13410104U;

    t163 = (((x697%x698)/x699)|x700);

    if (t163 != 13410104LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x701 = INT32_MAX;
	uint8_t x702 = UINT8_MAX;
	uint32_t x704 = 398214U;
	volatile uint32_t t164 = 3898450U;

    t164 = (((x701%x702)/x703)|x704);

    if (t164 != 398214U) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x705 = -1;
	int8_t x706 = INT8_MIN;
	int16_t x707 = 122;
	int64_t t165 = 26115LL;

    t165 = (((x705%x706)/x707)|x708);

    if (t165 != -19178147LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x709 = -8;
	uint64_t x711 = UINT64_MAX;
	volatile int32_t x712 = INT32_MAX;
	uint64_t t166 = 11059879265LLU;

    t166 = (((x709%x710)/x711)|x712);

    if (t166 != 2147483647LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x713 = 9089U;
	static int8_t x715 = INT8_MIN;
	uint64_t x716 = 182773LLU;
	volatile uint64_t t167 = 122000376LLU;

    t167 = (((x713%x714)/x715)|x716);

    if (t167 != 182773LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x717 = INT64_MIN;
	uint16_t x718 = 7217U;
	volatile int64_t t168 = 162309596432LL;

    t168 = (((x717%x718)/x719)|x720);

    if (t168 != -55LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x723 = -35029228863236LL;
	static volatile int16_t x724 = INT16_MIN;
	int64_t t169 = 6972LL;

    t169 = (((x721%x722)/x723)|x724);

    if (t169 != -32768LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x725 = 0LLU;
	int8_t x726 = INT8_MAX;
	static int16_t x727 = INT16_MAX;
	uint64_t t170 = UINT64_MAX;

    t170 = (((x725%x726)/x727)|x728);

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x729 = INT16_MIN;
	int64_t x730 = INT64_MAX;
	uint32_t x731 = UINT32_MAX;
	int16_t x732 = -405;
	static volatile int64_t t171 = -44768LL;

    t171 = (((x729%x730)/x731)|x732);

    if (t171 != -405LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x734 = INT8_MIN;

    t172 = (((x733%x734)/x735)|x736);

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x737 = INT64_MIN;
	uint16_t x738 = UINT16_MAX;
	int32_t x739 = -92552066;
	int16_t x740 = INT16_MAX;
	volatile int64_t t173 = 954247LL;

    t173 = (((x737%x738)/x739)|x740);

    if (t173 != 32767LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x741 = -1;
	int32_t x742 = 30638;
	int64_t x743 = INT64_MAX;
	uint16_t x744 = 1001U;

    t174 = (((x741%x742)/x743)|x744);

    if (t174 != 1001LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x745 = 22369LLU;
	volatile int16_t x746 = INT16_MIN;
	int64_t x747 = 204LL;
	static volatile uint64_t t175 = 554914276208421LLU;

    t175 = (((x745%x746)/x747)|x748);

    if (t175 != 18446744073709518957LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x750 = UINT32_MAX;
	int32_t x751 = 4644928;
	uint32_t t176 = 1U;

    t176 = (((x749%x750)/x751)|x752);

    if (t176 != 2147483647U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x753 = UINT16_MAX;
	int32_t x754 = -1;
	volatile int16_t x755 = 28;
	volatile int64_t x756 = 1319LL;
	int64_t t177 = -186LL;

    t177 = (((x753%x754)/x755)|x756);

    if (t177 != 1319LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x757 = 7397035LL;
	int8_t x758 = -1;
	uint16_t x759 = 411U;
	volatile int64_t t178 = -4316LL;

    t178 = (((x757%x758)/x759)|x760);

    if (t178 != 16214LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x762 = INT16_MIN;
	int16_t x763 = INT16_MAX;
	int32_t t179 = -3963110;

    t179 = (((x761%x762)/x763)|x764);

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x769 = INT32_MIN;
	int8_t x770 = -1;
	int8_t x772 = INT8_MAX;
	int32_t t180 = 15;

    t180 = (((x769%x770)/x771)|x772);

    if (t180 != 127) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x773 = INT64_MIN;
	uint8_t x774 = 1U;
	int8_t x775 = -1;
	volatile int64_t x776 = 515045LL;
	int64_t t181 = -71576850510437092LL;

    t181 = (((x773%x774)/x775)|x776);

    if (t181 != 515045LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x777 = INT32_MIN;
	int32_t x778 = 1429020;
	int32_t x779 = INT32_MIN;
	int64_t x780 = -1043396LL;
	int64_t t182 = -168555LL;

    t182 = (((x777%x778)/x779)|x780);

    if (t182 != -1043396LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x781 = -1;
	volatile uint16_t x782 = 13403U;
	volatile int16_t x784 = -6039;

    t183 = (((x781%x782)/x783)|x784);

    if (t183 != -6039) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x787 = 1U;
	static uint32_t t184 = UINT32_MAX;

    t184 = (((x785%x786)/x787)|x788);

    if (t184 != UINT32_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x789 = 12174LLU;
	int8_t x790 = -1;
	int8_t x791 = -2;
	uint16_t x792 = UINT16_MAX;
	uint64_t t185 = 3564334686LLU;

    t185 = (((x789%x790)/x791)|x792);

    if (t185 != 65535LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x793 = INT8_MAX;
	int16_t x794 = INT16_MIN;
	static uint32_t x795 = 1760001217U;
	volatile uint64_t t186 = 83035559LLU;

    t186 = (((x793%x794)/x795)|x796);

    if (t186 != 9LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x797 = 74941;
	int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MAX;
	int64_t x800 = -3LL;
	static volatile int64_t t187 = -13LL;

    t187 = (((x797%x798)/x799)|x800);

    if (t187 != -3LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x801 = INT32_MIN;
	int64_t x802 = 297LL;
	uint32_t x803 = 1041U;
	int8_t x804 = INT8_MAX;
	static volatile int64_t t188 = -180370036LL;

    t188 = (((x801%x802)/x803)|x804);

    if (t188 != 127LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x811 = 185153968;
	int64_t x812 = INT64_MAX;
	volatile uint64_t t189 = 812182874896963825LLU;

    t189 = (((x809%x810)/x811)|x812);

    if (t189 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x813 = -1LL;
	int32_t x814 = -1089;
	int16_t x816 = -1;
	volatile int64_t t190 = -655815892572055270LL;

    t190 = (((x813%x814)/x815)|x816);

    if (t190 != -1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x817 = INT32_MAX;
	int64_t x818 = INT64_MIN;
	static volatile int16_t x820 = -1;
	volatile int64_t t191 = -543363337973LL;

    t191 = (((x817%x818)/x819)|x820);

    if (t191 != -1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x821 = INT64_MIN;
	static int64_t x822 = -9337LL;
	int16_t x823 = -1;
	int8_t x824 = -1;

    t192 = (((x821%x822)/x823)|x824);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int16_t x829 = -1;
	uint8_t x830 = 13U;
	int16_t x831 = INT16_MAX;
	uint32_t x832 = 1774U;
	uint32_t t193 = 15984901U;

    t193 = (((x829%x830)/x831)|x832);

    if (t193 != 1774U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x833 = UINT16_MAX;
	int32_t x835 = INT32_MAX;
	int32_t x836 = INT32_MIN;
	volatile int64_t t194 = 145481316LL;

    t194 = (((x833%x834)/x835)|x836);

    if (t194 != -2147483648LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x837 = -1;
	volatile int8_t x838 = -1;
	uint8_t x839 = UINT8_MAX;
	int64_t x840 = -623957609LL;
	static volatile int64_t t195 = 259866047963382LL;

    t195 = (((x837%x838)/x839)|x840);

    if (t195 != -623957609LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x841 = -1;
	int32_t x842 = -1;
	int8_t x843 = -1;
	int8_t x844 = INT8_MIN;
	static int32_t t196 = 66;

    t196 = (((x841%x842)/x843)|x844);

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x845 = 60773247U;
	static int16_t x846 = INT16_MIN;
	static int8_t x847 = INT8_MIN;
	uint32_t x848 = 4U;

    t197 = (((x845%x846)/x847)|x848);

    if (t197 != 4U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x849 = 1U;
	int64_t x850 = 1050970LL;
	uint8_t x851 = UINT8_MAX;
	static int16_t x852 = -821;
	int64_t t198 = 1361590078LL;

    t198 = (((x849%x850)/x851)|x852);

    if (t198 != -821LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x853 = 1U;
	int8_t x854 = INT8_MAX;
	volatile uint8_t x855 = 4U;
	uint64_t x856 = UINT64_MAX;
	static volatile uint64_t t199 = UINT64_MAX;

    t199 = (((x853%x854)/x855)|x856);

    if (t199 != UINT64_MAX) { NG(); } else { ; }
	
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

