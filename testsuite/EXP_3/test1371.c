
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

int64_t x5 = INT64_MIN;
static int16_t x8 = 0;
volatile int64_t t1 = 107LL;
static volatile uint16_t x13 = 540U;
int32_t t3 = -1;
int32_t x21 = INT32_MIN;
volatile int32_t t5 = 18638;
int16_t x30 = -5;
uint8_t x31 = 0U;
volatile int32_t t7 = -252071;
uint8_t x36 = 1U;
uint64_t x42 = UINT64_MAX;
volatile uint64_t t10 = 52258626982LLU;
uint16_t x45 = 80U;
volatile int16_t x50 = -51;
static int32_t x64 = INT32_MIN;
int64_t x71 = INT64_MIN;
volatile int8_t x73 = INT8_MIN;
uint16_t x88 = 39U;
volatile int64_t x90 = INT64_MIN;
static int16_t x91 = INT16_MAX;
int32_t t23 = 59701081;
int32_t x97 = -178;
uint64_t x98 = 840174460518632LLU;
volatile int64_t t26 = -8585296653LL;
uint16_t x114 = UINT16_MAX;
static int8_t x121 = 0;
uint32_t x123 = UINT32_MAX;
int32_t x136 = INT32_MIN;
volatile int8_t x139 = INT8_MIN;
volatile int8_t x145 = INT8_MAX;
int64_t x149 = INT64_MAX;
int64_t t37 = 104418984531812LL;
uint32_t x159 = 56U;
int32_t x168 = -1;
int32_t x176 = 12752034;
static int8_t x181 = 0;
int32_t t47 = -60601;
volatile int16_t x198 = INT16_MAX;
int32_t x200 = 8150;
uint32_t x201 = 325296894U;
int32_t x212 = -357259127;
static volatile int64_t t55 = -462869LL;
uint64_t x238 = 55772559150626433LLU;
volatile int64_t t60 = -27988LL;
static uint16_t x252 = 86U;
uint64_t x258 = 39866613LLU;
static uint8_t x261 = 51U;
int32_t x267 = -6239572;
uint64_t x272 = 993337068LLU;
volatile uint32_t t67 = 48U;
volatile uint64_t t68 = 706767591LLU;
volatile uint64_t x278 = UINT64_MAX;
int64_t x282 = -1008LL;
int64_t x283 = INT64_MIN;
int8_t x286 = -1;
uint64_t x290 = 99171922207LLU;
static uint32_t x305 = UINT32_MAX;
static int32_t x306 = INT32_MIN;
int32_t x315 = -1;
volatile uint32_t t78 = 51960U;
int16_t x318 = INT16_MIN;
volatile int32_t t79 = -387764;
static int8_t x326 = -1;
uint8_t x332 = 2U;
volatile int32_t t82 = -3655;
static int8_t x333 = 17;
static int16_t x338 = INT16_MIN;
int32_t t84 = 7;
int16_t x353 = INT16_MAX;
int8_t x354 = INT8_MAX;
uint32_t x358 = UINT32_MAX;
volatile uint64_t x360 = UINT64_MAX;
uint32_t t89 = 30026U;
static volatile int16_t x372 = 210;
static int64_t x373 = 423282159135911467LL;
int8_t x379 = 56;
int64_t x391 = 2020747LL;
static int32_t t97 = 672816720;
static int32_t t99 = -4246247;
int32_t x412 = INT32_MIN;
int8_t x416 = -1;
int32_t t103 = 0;
uint32_t x420 = 804269U;
int32_t x426 = INT32_MIN;
volatile int64_t t106 = -838626747652LL;
uint64_t x429 = 549426309454307LLU;
uint64_t x431 = 2419520LLU;
uint32_t t109 = 112982440U;
volatile int64_t t110 = -6626LL;
int64_t x446 = INT64_MIN;
volatile uint32_t x451 = UINT32_MAX;
uint16_t x453 = 937U;
volatile uint64_t x462 = UINT64_MAX;
static int16_t x464 = INT16_MAX;
volatile uint64_t t115 = 63804918LLU;
int64_t x466 = -1LL;
int16_t x470 = INT16_MIN;
int32_t t117 = 8036;
int64_t x475 = -1LL;
uint8_t x479 = UINT8_MAX;
volatile int32_t t120 = 6;
static int16_t x487 = -1;
volatile int64_t t121 = 3190347LL;
int32_t x492 = -60694;
int64_t x493 = -1LL;
int8_t x497 = INT8_MIN;
int64_t x498 = INT64_MAX;
int64_t t124 = 2032048199624LL;
int64_t x501 = -1LL;
static int32_t x502 = -332844;
volatile uint64_t t126 = 1140LLU;
int16_t x515 = INT16_MIN;
int32_t x516 = 5;
static volatile uint8_t x518 = UINT8_MAX;
int8_t x519 = INT8_MIN;
int64_t t130 = 3260919960126LL;
int64_t x526 = -2420LL;
static int32_t t132 = -712;
int8_t x536 = INT8_MAX;
static int8_t x538 = INT8_MAX;
volatile int32_t x543 = -1;
volatile int32_t x549 = INT32_MIN;
int32_t t137 = 66858;
uint32_t x553 = UINT32_MAX;
static volatile uint32_t t138 = 6U;
volatile uint32_t x559 = 9934U;
int8_t x560 = INT8_MIN;
int32_t x562 = INT32_MAX;
uint8_t x563 = UINT8_MAX;
volatile int32_t t144 = -3;
static int8_t x591 = INT8_MAX;
volatile uint32_t t147 = 1U;
static volatile int32_t x593 = 34;
int8_t x596 = INT8_MAX;
uint16_t x598 = 12U;
volatile int64_t x599 = INT64_MAX;
volatile int8_t x602 = INT8_MIN;
int32_t t151 = -495153;
uint32_t x609 = 11680661U;
volatile uint32_t x616 = UINT32_MAX;
uint8_t x621 = 2U;
volatile uint64_t x622 = 41LLU;
volatile uint16_t x625 = UINT16_MAX;
volatile int8_t x629 = 3;
uint16_t x637 = 1582U;
volatile int32_t x643 = INT32_MIN;
volatile int32_t t160 = -310964252;
int32_t x646 = -1;
int32_t x648 = INT32_MIN;
static int64_t t161 = -49998LL;
static int64_t x649 = INT64_MAX;
int16_t x652 = 2;
static volatile int64_t t162 = INT64_MAX;
uint8_t x653 = 16U;
int16_t x685 = INT16_MIN;
int8_t x693 = INT8_MAX;
volatile int64_t x695 = -1LL;
int8_t x698 = -1;
volatile uint64_t t174 = 1468535LLU;
uint32_t x711 = UINT32_MAX;
uint64_t t177 = 84252516155LLU;
volatile int16_t x718 = -1;
uint64_t x722 = 6LLU;
int8_t x725 = INT8_MIN;
int16_t x728 = 1;
static int64_t x729 = -1LL;
volatile uint32_t x732 = UINT32_MAX;
int32_t x735 = -936177942;
int64_t t184 = 165868264LL;
int32_t t185 = -36637;
int64_t x748 = 6169LL;
int8_t x751 = 1;
volatile int64_t t188 = -989905067LL;
int64_t x757 = INT64_MAX;
volatile int32_t x760 = -590;
volatile int64_t t189 = 82585LL;
static volatile uint16_t x763 = 8U;
volatile int8_t x764 = 35;
volatile int32_t t190 = INT32_MAX;
int8_t x765 = INT8_MIN;
int8_t x772 = -1;
volatile int8_t x775 = 12;
volatile uint64_t t193 = 234493258LLU;
uint32_t x779 = 189555574U;
int64_t x782 = INT64_MAX;
static int16_t x788 = INT16_MIN;
int8_t x789 = INT8_MIN;


void f0(void) {
    	static int64_t x1 = INT64_MIN;
	volatile int8_t x2 = 1;
	int16_t x3 = INT16_MIN;
	static int32_t x4 = INT32_MAX;
	int64_t t0 = -46125473LL;

    t0 = ((x1^x2)|(x3!=x4));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int8_t x6 = INT8_MAX;
	static int64_t x7 = INT64_MAX;

    t1 = ((x5^x6)|(x7!=x8));

    if (t1 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 19;
	int8_t x10 = -7;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -2;
	volatile int32_t t2 = -1619;

    t2 = ((x9^x10)|(x11!=x12));

    if (t2 != -21) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x14 = -1;
	int64_t x15 = INT64_MIN;
	static volatile uint16_t x16 = 2069U;

    t3 = ((x13^x14)|(x15!=x16));

    if (t3 != -541) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = INT32_MAX;
	volatile int16_t x18 = INT16_MAX;
	int64_t x19 = 1553422274875776366LL;
	static volatile int32_t x20 = INT32_MAX;
	volatile int32_t t4 = 74;

    t4 = ((x17^x18)|(x19!=x20));

    if (t4 != 2147450881) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = -381;
	static volatile int16_t x23 = -1;
	uint32_t x24 = 1042214U;

    t5 = ((x21^x22)|(x23!=x24));

    if (t5 != 2147483267) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x25 = 792U;
	volatile uint64_t x26 = UINT64_MAX;
	int32_t x27 = INT32_MIN;
	int16_t x28 = -1;
	volatile uint64_t t6 = 332919395973521LLU;

    t6 = ((x25^x26)|(x27!=x28));

    if (t6 != 18446744073709550823LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = INT8_MIN;
	uint8_t x32 = 12U;

    t7 = ((x29^x30)|(x31!=x32));

    if (t7 != 123) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = -1LL;
	uint64_t x34 = UINT64_MAX;
	static uint64_t x35 = UINT64_MAX;
	uint64_t t8 = 1LLU;

    t8 = ((x33^x34)|(x35!=x36));

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MIN;
	int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile int64_t t9 = -952732176395LL;

    t9 = ((x37^x38)|(x39!=x40));

    if (t9 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = INT32_MAX;
	static int64_t x43 = INT64_MIN;
	int16_t x44 = INT16_MIN;

    t10 = ((x41^x42)|(x43!=x44));

    if (t10 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x46 = INT64_MAX;
	uint8_t x47 = UINT8_MAX;
	uint8_t x48 = 3U;
	volatile int64_t t11 = 26726LL;

    t11 = ((x45^x46)|(x47!=x48));

    if (t11 != 9223372036854775727LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = 1564U;
	int64_t x51 = INT64_MAX;
	uint8_t x52 = 13U;
	volatile uint32_t t12 = 106409023U;

    t12 = ((x49^x50)|(x51!=x52));

    if (t12 != 4294965713U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	uint32_t x54 = 469283063U;
	volatile int64_t x55 = INT64_MAX;
	int16_t x56 = -1;
	uint32_t t13 = 107537154U;

    t13 = ((x53^x54)|(x55!=x56));

    if (t13 != 2616766711U) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = INT64_MAX;
	int32_t x58 = -1;
	volatile int32_t x59 = -2641;
	static int8_t x60 = -1;
	int64_t t14 = 3532962229213739271LL;

    t14 = ((x57^x58)|(x59!=x60));

    if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int64_t x61 = INT64_MIN;
	static int16_t x62 = INT16_MIN;
	static int32_t x63 = -270;
	static int64_t t15 = 389735LL;

    t15 = ((x61^x62)|(x63!=x64));

    if (t15 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = INT32_MIN;
	int64_t x66 = INT64_MAX;
	int16_t x67 = INT16_MIN;
	static uint8_t x68 = UINT8_MAX;
	volatile int64_t t16 = -11LL;

    t16 = ((x65^x66)|(x67!=x68));

    if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = INT32_MAX;
	uint32_t x70 = 3038U;
	int32_t x72 = INT32_MAX;
	uint32_t t17 = 348179906U;

    t17 = ((x69^x70)|(x71!=x72));

    if (t17 != 2147480609U) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x74 = INT16_MIN;
	int8_t x75 = -1;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 55;

    t18 = ((x73^x74)|(x75!=x76));

    if (t18 != 32641) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x77 = 346889U;
	int8_t x78 = INT8_MAX;
	int32_t x79 = INT32_MAX;
	uint16_t x80 = UINT16_MAX;
	static volatile uint32_t t19 = 1481191U;

    t19 = ((x77^x78)|(x79!=x80));

    if (t19 != 346999U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int64_t x82 = -1LL;
	int8_t x83 = -1;
	int32_t x84 = -1;
	int64_t t20 = -838LL;

    t20 = ((x81^x82)|(x83!=x84));

    if (t20 != -65536LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 1U;
	int16_t x86 = INT16_MIN;
	static int8_t x87 = -1;
	volatile int32_t t21 = 1722;

    t21 = ((x85^x86)|(x87!=x88));

    if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = INT16_MIN;
	int16_t x92 = -1;
	int64_t t22 = -1266913786566LL;

    t22 = ((x89^x90)|(x91!=x92));

    if (t22 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x93 = -58;
	int32_t x94 = INT32_MAX;
	int64_t x95 = INT64_MIN;
	volatile int32_t x96 = INT32_MIN;

    t23 = ((x93^x94)|(x95!=x96));

    if (t23 != -2147483591) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x99 = INT32_MAX;
	int32_t x100 = -1;
	volatile uint64_t t24 = 139857587793LLU;

    t24 = ((x97^x98)|(x99!=x100));

    if (t24 != 18445903899249033127LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MAX;
	volatile int8_t x102 = INT8_MIN;
	volatile int32_t x103 = INT32_MAX;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -185612;

    t25 = ((x101^x102)|(x103!=x104));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MAX;
	static int32_t x107 = -21905;
	static int64_t x108 = INT64_MAX;

    t26 = ((x105^x106)|(x107!=x108));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 2U;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 16210633LLU;
	uint16_t x112 = 13401U;
	volatile uint64_t t27 = 250857LLU;

    t27 = ((x109^x110)|(x111!=x112));

    if (t27 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x115 = -15;
	int16_t x116 = 6;
	int32_t t28 = -1347;

    t28 = ((x113^x114)|(x115!=x116));

    if (t28 != -2147418113) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x117 = -3525704988584LL;
	int16_t x118 = 89;
	volatile int32_t x119 = -1;
	volatile int8_t x120 = INT8_MAX;
	volatile int64_t t29 = -15597734822835LL;

    t29 = ((x117^x118)|(x119!=x120));

    if (t29 != -3525704988671LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint32_t x122 = 118664U;
	uint16_t x124 = UINT16_MAX;
	static volatile uint32_t t30 = 224528221U;

    t30 = ((x121^x122)|(x123!=x124));

    if (t30 != 118665U) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint8_t x125 = UINT8_MAX;
	volatile int16_t x126 = -1;
	int64_t x127 = INT64_MAX;
	volatile int16_t x128 = -5960;
	int32_t t31 = 129134931;

    t31 = ((x125^x126)|(x127!=x128));

    if (t31 != -255) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x129 = -119;
	uint16_t x130 = 11U;
	int8_t x131 = INT8_MIN;
	volatile int16_t x132 = -1535;
	int32_t t32 = 7065615;

    t32 = ((x129^x130)|(x131!=x132));

    if (t32 != -125) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint8_t x133 = 5U;
	uint64_t x134 = 1LLU;
	static uint64_t x135 = 6493357503977LLU;
	uint64_t t33 = 38674035903LLU;

    t33 = ((x133^x134)|(x135!=x136));

    if (t33 != 5LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x137 = 1;
	int8_t x138 = INT8_MAX;
	volatile int16_t x140 = 38;
	volatile int32_t t34 = 0;

    t34 = ((x137^x138)|(x139!=x140));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	uint32_t x143 = 7U;
	int64_t x144 = INT64_MAX;
	volatile uint64_t t35 = 127058634LLU;

    t35 = ((x141^x142)|(x143!=x144));

    if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x146 = 7U;
	static int16_t x147 = INT16_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 40850014;

    t36 = ((x145^x146)|(x147!=x148));

    if (t36 != 121) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x150 = -930410854432937LL;
	int64_t x151 = -1LL;
	int16_t x152 = INT16_MIN;

    t37 = ((x149^x150)|(x151!=x152));

    if (t37 != -9222441626000342871LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x153 = -1LL;
	uint16_t x154 = UINT16_MAX;
	static int16_t x155 = INT16_MAX;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t38 = 3437472258LL;

    t38 = ((x153^x154)|(x155!=x156));

    if (t38 != -65535LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 61157;
	uint8_t x158 = 4U;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 30;

    t39 = ((x157^x158)|(x159!=x160));

    if (t39 != 61153) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x161 = 1U;
	int64_t x162 = -748877489107883160LL;
	static int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MIN;
	volatile int64_t t40 = -2LL;

    t40 = ((x161^x162)|(x163!=x164));

    if (t40 != -748877489107883159LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x165 = INT32_MIN;
	int8_t x166 = 0;
	volatile int8_t x167 = -1;
	int32_t t41 = INT32_MIN;

    t41 = ((x165^x166)|(x167!=x168));

    if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MAX;
	int16_t x170 = -2369;
	int8_t x171 = -16;
	int16_t x172 = -1;
	volatile int64_t t42 = -5LL;

    t42 = ((x169^x170)|(x171!=x172));

    if (t42 != -9223372036854773439LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int64_t x174 = -29229735LL;
	static uint32_t x175 = 4686560U;
	int64_t t43 = 6793538LL;

    t43 = ((x173^x174)|(x175!=x176));

    if (t43 != 29229785LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = INT32_MIN;
	int8_t x178 = INT8_MAX;
	int32_t x179 = INT32_MIN;
	static volatile uint64_t x180 = 4089267069412510653LLU;
	int32_t t44 = -127;

    t44 = ((x177^x178)|(x179!=x180));

    if (t44 != -2147483521) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x182 = -15;
	uint32_t x183 = UINT32_MAX;
	volatile int64_t x184 = INT64_MAX;
	volatile int32_t t45 = 1103;

    t45 = ((x181^x182)|(x183!=x184));

    if (t45 != -15) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = -3337;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = -2;
	uint64_t x188 = 60118664LLU;
	volatile int32_t t46 = -4489989;

    t46 = ((x185^x186)|(x187!=x188));

    if (t46 != 29431) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x189 = INT32_MIN;
	int8_t x190 = -39;
	static int64_t x191 = -1152265747598187166LL;
	uint16_t x192 = 2334U;

    t47 = ((x189^x190)|(x191!=x192));

    if (t47 != 2147483609) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x193 = -1;
	uint8_t x194 = 36U;
	static uint32_t x195 = 195333U;
	uint16_t x196 = 2U;
	volatile int32_t t48 = 202722;

    t48 = ((x193^x194)|(x195!=x196));

    if (t48 != -37) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MIN;
	int16_t x199 = -16127;
	static volatile int64_t t49 = -3673524076764LL;

    t49 = ((x197^x198)|(x199!=x200));

    if (t49 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x202 = INT8_MAX;
	volatile uint16_t x203 = 1U;
	int16_t x204 = INT16_MIN;
	uint32_t t50 = 52337264U;

    t50 = ((x201^x202)|(x203!=x204));

    if (t50 != 325296769U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x205 = 6U;
	volatile int64_t x206 = 1711686LL;
	int8_t x207 = INT8_MIN;
	int16_t x208 = INT16_MAX;
	int64_t t51 = -35396028309LL;

    t51 = ((x205^x206)|(x207!=x208));

    if (t51 != 1711681LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x209 = INT32_MIN;
	int32_t x210 = -1;
	int64_t x211 = INT64_MIN;
	volatile int32_t t52 = INT32_MAX;

    t52 = ((x209^x210)|(x211!=x212));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = 47603;
	static uint16_t x214 = 507U;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	int32_t t53 = -5185415;

    t53 = ((x213^x214)|(x215!=x216));

    if (t53 != 47113) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = 488;
	int8_t x218 = -34;
	int32_t x219 = -10;
	uint32_t x220 = 59800U;
	int32_t t54 = 406455;

    t54 = ((x217^x218)|(x219!=x220));

    if (t54 != -457) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x221 = 2;
	static volatile int64_t x222 = INT64_MIN;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = INT8_MIN;

    t55 = ((x221^x222)|(x223!=x224));

    if (t55 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x225 = 20U;
	int32_t x226 = INT32_MAX;
	static int16_t x227 = INT16_MIN;
	int16_t x228 = -1;
	int32_t t56 = -40852;

    t56 = ((x225^x226)|(x227!=x228));

    if (t56 != 2147483627) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MAX;
	int16_t x230 = INT16_MAX;
	int8_t x231 = 8;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = 29444354;

    t57 = ((x229^x230)|(x231!=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = -842953440290LL;
	int8_t x234 = 1;
	volatile uint64_t x235 = 26961335544259LLU;
	int8_t x236 = INT8_MAX;
	int64_t t58 = 4349367545133533LL;

    t58 = ((x233^x234)|(x235!=x236));

    if (t58 != -842953440289LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x237 = -1;
	int32_t x239 = -116377;
	volatile int32_t x240 = -1;
	uint64_t t59 = 121642384947970LLU;

    t59 = ((x237^x238)|(x239!=x240));

    if (t59 != 18390971514558925183LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x241 = -3;
	static int64_t x242 = INT64_MAX;
	int32_t x243 = INT32_MIN;
	volatile int32_t x244 = 59939;

    t60 = ((x241^x242)|(x243!=x244));

    if (t60 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x245 = INT16_MAX;
	static int64_t x246 = 3970766521809883038LL;
	int32_t x247 = INT32_MIN;
	int8_t x248 = 0;
	int64_t t61 = -436898LL;

    t61 = ((x245^x246)|(x247!=x248));

    if (t61 != 3970766521809875041LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = INT64_MIN;
	int32_t x250 = 2530;
	int64_t x251 = INT64_MIN;
	int64_t t62 = -4214LL;

    t62 = ((x249^x250)|(x251!=x252));

    if (t62 != -9223372036854773277LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x253 = 9630LL;
	uint32_t x254 = UINT32_MAX;
	volatile int8_t x255 = INT8_MIN;
	volatile uint8_t x256 = 4U;
	volatile int64_t t63 = 83949907850633LL;

    t63 = ((x253^x254)|(x255!=x256));

    if (t63 != 4294957665LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x257 = INT32_MAX;
	volatile int8_t x259 = INT8_MAX;
	int32_t x260 = -68538014;
	uint64_t t64 = 1687748038335845LLU;

    t64 = ((x257^x258)|(x259!=x260));

    if (t64 != 2107617035LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x262 = -1;
	uint8_t x263 = 9U;
	volatile int16_t x264 = -33;
	int32_t t65 = -30;

    t65 = ((x261^x262)|(x263!=x264));

    if (t65 != -51) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	uint8_t x266 = 5U;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 121742;

    t66 = ((x265^x266)|(x267!=x268));

    if (t66 != -5) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x269 = 741U;
	int16_t x270 = INT16_MAX;
	int16_t x271 = 1;

    t67 = ((x269^x270)|(x271!=x272));

    if (t67 != 32027U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x273 = INT16_MAX;
	uint64_t x274 = 134030LLU;
	volatile uint8_t x275 = 10U;
	int32_t x276 = INT32_MAX;

    t68 = ((x273^x274)|(x275!=x276));

    if (t68 != 160881LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x277 = INT8_MIN;
	int32_t x279 = -762365011;
	int32_t x280 = 36264;
	volatile uint64_t t69 = 57539806216988129LLU;

    t69 = ((x277^x278)|(x279!=x280));

    if (t69 != 127LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x281 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	int64_t t70 = -3652593142193LL;

    t70 = ((x281^x282)|(x283!=x284));

    if (t70 != 913LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x285 = 10LL;
	uint8_t x287 = UINT8_MAX;
	volatile int32_t x288 = INT32_MIN;
	volatile int64_t t71 = 3655200020LL;

    t71 = ((x285^x286)|(x287!=x288));

    if (t71 != -11LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x289 = 3;
	volatile uint32_t x291 = UINT32_MAX;
	static volatile int8_t x292 = -11;
	volatile uint64_t t72 = 52791065LLU;

    t72 = ((x289^x290)|(x291!=x292));

    if (t72 != 99171922205LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = -431;
	volatile int16_t x294 = -1;
	uint32_t x295 = 3431U;
	static int16_t x296 = INT16_MAX;
	static int32_t t73 = 110777;

    t73 = ((x293^x294)|(x295!=x296));

    if (t73 != 431) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = INT8_MAX;
	int8_t x298 = 12;
	int16_t x299 = -6;
	int64_t x300 = 2303634545175LL;
	volatile int32_t t74 = -455039;

    t74 = ((x297^x298)|(x299!=x300));

    if (t74 != 115) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x301 = 1;
	static int8_t x302 = INT8_MIN;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = -1;
	static int32_t t75 = 24130746;

    t75 = ((x301^x302)|(x303!=x304));

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x307 = INT8_MIN;
	int64_t x308 = INT64_MIN;
	volatile uint32_t t76 = 1928U;

    t76 = ((x305^x306)|(x307!=x308));

    if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MAX;
	volatile uint32_t x310 = 64085195U;
	int32_t x311 = 6277128;
	uint8_t x312 = 2U;
	volatile uint32_t t77 = 9130490U;

    t77 = ((x309^x310)|(x311!=x312));

    if (t77 != 64085173U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = 1034909854U;
	static int32_t x314 = -1;
	uint8_t x316 = 2U;

    t78 = ((x313^x314)|(x315!=x316));

    if (t78 != 3260057441U) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x317 = 54;
	int16_t x319 = INT16_MIN;
	static int16_t x320 = INT16_MIN;

    t79 = ((x317^x318)|(x319!=x320));

    if (t79 != -32714) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x321 = INT16_MAX;
	int16_t x322 = -1;
	int16_t x323 = -1;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -6337026;

    t80 = ((x321^x322)|(x323!=x324));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	int64_t x328 = INT64_MAX;
	static uint64_t t81 = 208806436640LLU;

    t81 = ((x325^x326)|(x327!=x328));

    if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x329 = 19;
	volatile int32_t x330 = -1;
	uint32_t x331 = 61U;

    t82 = ((x329^x330)|(x331!=x332));

    if (t82 != -19) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = -1LL;
	static int32_t x335 = INT32_MAX;
	int8_t x336 = INT8_MIN;
	int64_t t83 = -19LL;

    t83 = ((x333^x334)|(x335!=x336));

    if (t83 != -17LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 32U;
	volatile uint64_t x339 = 50171166622818LLU;
	static volatile int32_t x340 = -128397693;

    t84 = ((x337^x338)|(x339!=x340));

    if (t84 != -32735) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x341 = -1;
	int32_t x342 = INT32_MIN;
	static uint8_t x343 = 5U;
	volatile uint16_t x344 = 964U;
	static volatile int32_t t85 = INT32_MAX;

    t85 = ((x341^x342)|(x343!=x344));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x345 = INT64_MIN;
	uint64_t x346 = 63156674292635453LLU;
	volatile uint16_t x347 = 11501U;
	uint16_t x348 = 0U;
	uint64_t t86 = 2LLU;

    t86 = ((x345^x346)|(x347!=x348));

    if (t86 != 9286528711147411261LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = INT8_MIN;
	volatile int64_t x350 = -1LL;
	int64_t x351 = INT64_MAX;
	uint64_t x352 = 557634549LLU;
	int64_t t87 = -1LL;

    t87 = ((x349^x350)|(x351!=x352));

    if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x355 = 2U;
	static int32_t x356 = INT32_MIN;
	int32_t t88 = 12;

    t88 = ((x353^x354)|(x355!=x356));

    if (t88 != 32641) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = INT32_MIN;
	int32_t x359 = -60679;

    t89 = ((x357^x358)|(x359!=x360));

    if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x361 = INT32_MIN;
	uint32_t x362 = UINT32_MAX;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MAX;
	uint32_t t90 = 42U;

    t90 = ((x361^x362)|(x363!=x364));

    if (t90 != 2147483647U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = -1;
	int8_t x366 = -1;
	volatile uint64_t x367 = 253962345057214661LLU;
	static int64_t x368 = -1LL;
	int32_t t91 = -14940314;

    t91 = ((x365^x366)|(x367!=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x369 = INT64_MIN;
	uint8_t x370 = 28U;
	int16_t x371 = 3;
	int64_t t92 = 193819004556462260LL;

    t92 = ((x369^x370)|(x371!=x372));

    if (t92 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x374 = 1;
	int16_t x375 = INT16_MIN;
	static int32_t x376 = INT32_MIN;
	int64_t t93 = 17837327452LL;

    t93 = ((x373^x374)|(x375!=x376));

    if (t93 != 423282159135911467LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x377 = 23200934;
	uint8_t x378 = UINT8_MAX;
	int8_t x380 = -3;
	int32_t t94 = -415357;

    t94 = ((x377^x378)|(x379!=x380));

    if (t94 != 23200857) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x381 = UINT32_MAX;
	static int16_t x382 = INT16_MAX;
	static int32_t x383 = INT32_MIN;
	int8_t x384 = INT8_MIN;
	volatile uint32_t t95 = 60U;

    t95 = ((x381^x382)|(x383!=x384));

    if (t95 != 4294934529U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x385 = 11517LLU;
	uint32_t x386 = 1339594U;
	static int32_t x387 = -1;
	int64_t x388 = -26895LL;
	volatile uint64_t t96 = 191405519LLU;

    t96 = ((x385^x386)|(x387!=x388));

    if (t96 != 1334327LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int16_t x389 = INT16_MAX;
	static uint8_t x390 = 43U;
	static int64_t x392 = -1LL;

    t97 = ((x389^x390)|(x391!=x392));

    if (t97 != 32725) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x393 = -1;
	volatile int16_t x394 = 1;
	int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t98 = -24070415;

    t98 = ((x393^x394)|(x395!=x396));

    if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x397 = INT8_MIN;
	uint16_t x398 = 1242U;
	volatile uint16_t x399 = 1723U;
	static int32_t x400 = -1;

    t99 = ((x397^x398)|(x399!=x400));

    if (t99 != -1189) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x401 = 406432086;
	uint16_t x402 = UINT16_MAX;
	volatile int16_t x403 = INT16_MIN;
	static int64_t x404 = -626342226199795205LL;
	static int32_t t100 = 426816458;

    t100 = ((x401^x402)|(x403!=x404));

    if (t100 != 406410921) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x405 = 332346127827LLU;
	static int16_t x406 = -1;
	static int8_t x407 = -1;
	int64_t x408 = INT64_MIN;
	uint64_t t101 = 1384959132LLU;

    t101 = ((x405^x406)|(x407!=x408));

    if (t101 != 18446743741363423789LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MIN;
	int8_t x410 = INT8_MAX;
	int32_t x411 = -1;
	int32_t t102 = 43;

    t102 = ((x409^x410)|(x411!=x412));

    if (t102 != -1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x413 = INT8_MAX;
	uint16_t x414 = 23U;
	volatile int16_t x415 = INT16_MAX;

    t103 = ((x413^x414)|(x415!=x416));

    if (t103 != 105) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 40932277147LLU;
	int16_t x418 = -15;
	int8_t x419 = -10;
	volatile uint64_t t104 = 108804275LLU;

    t104 = ((x417^x418)|(x419!=x420));

    if (t104 != 18446744032777274475LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int64_t x421 = -1LL;
	static volatile int64_t x422 = INT64_MAX;
	uint16_t x423 = 1382U;
	volatile uint16_t x424 = UINT16_MAX;
	int64_t t105 = 13LL;

    t105 = ((x421^x422)|(x423!=x424));

    if (t105 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = 61LL;
	int64_t x427 = 17178379LL;
	int64_t x428 = INT64_MAX;

    t106 = ((x425^x426)|(x427!=x428));

    if (t106 != -2147483587LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x430 = 45U;
	uint32_t x432 = 14U;
	uint64_t t107 = 1090677837329LLU;

    t107 = ((x429^x430)|(x431!=x432));

    if (t107 != 549426309454287LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x433 = 28423;
	static volatile int32_t x434 = 1654;
	int32_t x435 = INT32_MAX;
	static volatile uint32_t x436 = UINT32_MAX;
	int32_t t108 = -166;

    t108 = ((x433^x434)|(x435!=x436));

    if (t108 != 26993) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = UINT32_MAX;
	int32_t x438 = INT32_MIN;
	volatile int32_t x439 = INT32_MAX;
	int64_t x440 = -1LL;

    t109 = ((x437^x438)|(x439!=x440));

    if (t109 != 2147483647U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	int64_t x442 = INT64_MIN;
	static uint64_t x443 = 3783036499968726141LLU;
	static uint16_t x444 = 2012U;

    t110 = ((x441^x442)|(x443!=x444));

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint64_t x445 = UINT64_MAX;
	int8_t x447 = -27;
	uint64_t x448 = UINT64_MAX;
	uint64_t t111 = 43951LLU;

    t111 = ((x445^x446)|(x447!=x448));

    if (t111 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = UINT32_MAX;
	static volatile int16_t x450 = INT16_MAX;
	static uint64_t x452 = 8795886778310659LLU;
	static uint32_t t112 = 93173U;

    t112 = ((x449^x450)|(x451!=x452));

    if (t112 != 4294934529U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x454 = 173018529LLU;
	static int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	volatile uint64_t t113 = 2962826866LLU;

    t113 = ((x453^x454)|(x455!=x456));

    if (t113 != 173018633LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x457 = INT32_MAX;
	int32_t x458 = -8570218;
	static uint64_t x459 = 989LLU;
	volatile int8_t x460 = INT8_MAX;
	int32_t t114 = -43;

    t114 = ((x457^x458)|(x459!=x460));

    if (t114 != -2138913431) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x461 = 2109648178022796219LLU;
	int32_t x463 = INT32_MAX;

    t115 = ((x461^x462)|(x463!=x464));

    if (t115 != 16337095895686755397LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x465 = INT8_MIN;
	uint32_t x467 = 250348U;
	static int8_t x468 = INT8_MAX;
	int64_t t116 = 989237LL;

    t116 = ((x465^x466)|(x467!=x468));

    if (t116 != 127LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x469 = -28;
	int16_t x471 = 2;
	static int8_t x472 = INT8_MIN;

    t117 = ((x469^x470)|(x471!=x472));

    if (t117 != 32741) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x473 = -1;
	volatile uint32_t x474 = 134150155U;
	uint32_t x476 = 982180397U;
	volatile uint32_t t118 = 268570585U;

    t118 = ((x473^x474)|(x475!=x476));

    if (t118 != 4160817141U) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x478 = INT32_MIN;
	static int32_t x480 = -39336;
	int32_t t119 = 1288;

    t119 = ((x477^x478)|(x479!=x480));

    if (t119 != 2147483521) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x481 = INT32_MAX;
	int8_t x482 = INT8_MIN;
	int8_t x483 = INT8_MIN;
	int16_t x484 = -1;

    t120 = ((x481^x482)|(x483!=x484));

    if (t120 != -2147483521) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = INT32_MAX;
	int64_t x486 = -539917LL;
	int64_t x488 = -1LL;

    t121 = ((x485^x486)|(x487!=x488));

    if (t121 != -2146943732LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	volatile uint16_t x490 = UINT16_MAX;
	int64_t x491 = INT64_MAX;
	volatile int32_t t122 = -14;

    t122 = ((x489^x490)|(x491!=x492));

    if (t122 != 2147418113) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x494 = 8U;
	static volatile int16_t x495 = -1;
	volatile uint32_t x496 = 694U;
	volatile int64_t t123 = -12LL;

    t123 = ((x493^x494)|(x495!=x496));

    if (t123 != -9LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x499 = -13;
	int64_t x500 = 63125181LL;

    t124 = ((x497^x498)|(x499!=x500));

    if (t124 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x503 = 107U;
	int8_t x504 = -1;
	volatile int64_t t125 = 4574944396606LL;

    t125 = ((x501^x502)|(x503!=x504));

    if (t125 != 332843LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = INT16_MAX;
	uint64_t x506 = UINT64_MAX;
	volatile uint64_t x507 = 21706LLU;
	int8_t x508 = 57;

    t126 = ((x505^x506)|(x507!=x508));

    if (t126 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x509 = -8125583416LL;
	uint16_t x510 = UINT16_MAX;
	static int8_t x511 = -1;
	static int16_t x512 = 1;
	int64_t t127 = -2492496880214135940LL;

    t127 = ((x509^x510)|(x511!=x512));

    if (t127 != -8125575113LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MAX;
	int64_t x514 = INT64_MIN;
	int64_t t128 = 101LL;

    t128 = ((x513^x514)|(x515!=x516));

    if (t128 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x517 = -1LL;
	uint16_t x520 = 1640U;
	static int64_t t129 = 3025LL;

    t129 = ((x517^x518)|(x519!=x520));

    if (t129 != -255LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = 271LL;
	int16_t x522 = INT16_MIN;
	int16_t x523 = 2;
	volatile int8_t x524 = INT8_MIN;

    t130 = ((x521^x522)|(x523!=x524));

    if (t130 != -32497LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	uint64_t x527 = 3468LLU;
	int32_t x528 = INT32_MAX;
	volatile int64_t t131 = 1418196851561838LL;

    t131 = ((x525^x526)|(x527!=x528));

    if (t131 != 2147481229LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = -3283682;
	volatile uint16_t x530 = UINT16_MAX;
	uint32_t x531 = UINT32_MAX;
	int8_t x532 = -1;

    t132 = ((x529^x530)|(x531!=x532));

    if (t132 != -3335455) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x533 = 98U;
	volatile int32_t x534 = INT32_MIN;
	static volatile int64_t x535 = INT64_MAX;
	volatile int32_t t133 = 740615;

    t133 = ((x533^x534)|(x535!=x536));

    if (t133 != -2147483549) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x537 = UINT8_MAX;
	int8_t x539 = 1;
	static uint64_t x540 = UINT64_MAX;
	volatile int32_t t134 = 14800;

    t134 = ((x537^x538)|(x539!=x540));

    if (t134 != 129) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 6335339LLU;
	uint32_t x542 = 1U;
	static volatile uint64_t x544 = 3255124443558782LLU;
	uint64_t t135 = 100058630783483LLU;

    t135 = ((x541^x542)|(x543!=x544));

    if (t135 != 6335339LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x545 = -1;
	int16_t x546 = INT16_MAX;
	int32_t x547 = INT32_MAX;
	uint32_t x548 = 77387U;
	int32_t t136 = 8307961;

    t136 = ((x545^x546)|(x547!=x548));

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x550 = -3980;
	int8_t x551 = INT8_MAX;
	static int64_t x552 = -1LL;

    t137 = ((x549^x550)|(x551!=x552));

    if (t137 != 2147479669) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x554 = UINT8_MAX;
	int8_t x555 = INT8_MAX;
	uint8_t x556 = 23U;

    t138 = ((x553^x554)|(x555!=x556));

    if (t138 != 4294967041U) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x557 = 9LLU;
	uint64_t x558 = UINT64_MAX;
	static uint64_t t139 = 640LLU;

    t139 = ((x557^x558)|(x559!=x560));

    if (t139 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x561 = INT32_MIN;
	int32_t x564 = INT32_MAX;
	int32_t t140 = 1;

    t140 = ((x561^x562)|(x563!=x564));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x565 = -1;
	static int32_t x566 = -1;
	uint32_t x567 = 891U;
	uint32_t x568 = 16295942U;
	volatile int32_t t141 = -2;

    t141 = ((x565^x566)|(x567!=x568));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x569 = UINT8_MAX;
	int64_t x570 = INT64_MIN;
	static uint32_t x571 = 826U;
	int8_t x572 = INT8_MIN;
	volatile int64_t t142 = 657350LL;

    t142 = ((x569^x570)|(x571!=x572));

    if (t142 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x573 = 628442249313LLU;
	int8_t x574 = -3;
	static uint32_t x575 = UINT32_MAX;
	uint8_t x576 = 1U;
	volatile uint64_t t143 = 0LLU;

    t143 = ((x573^x574)|(x575!=x576));

    if (t143 != 18446743445267302301LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = -15;
	int32_t x578 = INT32_MIN;
	int16_t x579 = INT16_MIN;
	volatile uint64_t x580 = 54073LLU;

    t144 = ((x577^x578)|(x579!=x580));

    if (t144 != 2147483633) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x581 = 3U;
	static volatile int8_t x582 = -56;
	volatile uint8_t x583 = UINT8_MAX;
	uint64_t x584 = UINT64_MAX;
	volatile int32_t t145 = 3777963;

    t145 = ((x581^x582)|(x583!=x584));

    if (t145 != -53) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x585 = UINT8_MAX;
	int32_t x586 = -1;
	uint64_t x587 = 177LLU;
	static uint32_t x588 = UINT32_MAX;
	int32_t t146 = -1;

    t146 = ((x585^x586)|(x587!=x588));

    if (t146 != -255) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x589 = INT8_MIN;
	uint32_t x590 = 1250U;
	static int8_t x592 = INT8_MIN;

    t147 = ((x589^x590)|(x591!=x592));

    if (t147 != 4294966115U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x594 = INT8_MIN;
	static int32_t x595 = -1;
	static int32_t t148 = -690272830;

    t148 = ((x593^x594)|(x595!=x596));

    if (t148 != -93) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x597 = 209283369524819263LLU;
	int64_t x600 = INT64_MAX;
	volatile uint64_t t149 = 904966981432LLU;

    t149 = ((x597^x598)|(x599!=x600));

    if (t149 != 209283369524819251LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x601 = 610499455260756876LLU;
	int8_t x603 = -1;
	int64_t x604 = -7LL;
	uint64_t t150 = 72LLU;

    t150 = ((x601^x602)|(x603!=x604));

    if (t150 != 17836244618448794637LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x605 = -1;
	static int32_t x606 = INT32_MAX;
	uint16_t x607 = 6U;
	int8_t x608 = INT8_MIN;

    t151 = ((x605^x606)|(x607!=x608));

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x610 = -1;
	uint8_t x611 = 0U;
	static int16_t x612 = INT16_MAX;
	volatile uint32_t t152 = 3141010U;

    t152 = ((x609^x610)|(x611!=x612));

    if (t152 != 4283286635U) { NG(); } else { ; }
	
}

void f153(void) {
    	static int16_t x613 = INT16_MIN;
	static uint8_t x614 = 1U;
	int32_t x615 = INT32_MIN;
	static volatile int32_t t153 = -1614421;

    t153 = ((x613^x614)|(x615!=x616));

    if (t153 != -32767) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x617 = 2742U;
	int16_t x618 = -1;
	static volatile uint8_t x619 = 7U;
	int16_t x620 = -98;
	volatile uint32_t t154 = 52566U;

    t154 = ((x617^x618)|(x619!=x620));

    if (t154 != 4294964553U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x623 = 155977830972104186LL;
	static volatile int8_t x624 = INT8_MIN;
	uint64_t t155 = 91349102LLU;

    t155 = ((x621^x622)|(x623!=x624));

    if (t155 != 43LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x626 = INT64_MIN;
	int16_t x627 = INT16_MIN;
	int16_t x628 = INT16_MIN;
	volatile int64_t t156 = 3336928095132LL;

    t156 = ((x625^x626)|(x627!=x628));

    if (t156 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x630 = 27862361LLU;
	int32_t x631 = INT32_MIN;
	int32_t x632 = 0;
	volatile uint64_t t157 = 50006092LLU;

    t157 = ((x629^x630)|(x631!=x632));

    if (t157 != 27862363LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x633 = 1U;
	int8_t x634 = -1;
	int32_t x635 = INT32_MIN;
	int16_t x636 = 82;
	volatile int32_t t158 = 104718;

    t158 = ((x633^x634)|(x635!=x636));

    if (t158 != -1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x638 = INT16_MIN;
	volatile uint64_t x639 = 110155LLU;
	int16_t x640 = 7866;
	int32_t t159 = -40116;

    t159 = ((x637^x638)|(x639!=x640));

    if (t159 != -31185) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x641 = -1;
	uint16_t x642 = 10U;
	int64_t x644 = 1LL;

    t160 = ((x641^x642)|(x643!=x644));

    if (t160 != -11) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = 48666819930321LL;
	int16_t x647 = -1;

    t161 = ((x645^x646)|(x647!=x648));

    if (t161 != -48666819930321LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x650 = 1U;
	volatile int16_t x651 = INT16_MIN;

    t162 = ((x649^x650)|(x651!=x652));

    if (t162 != INT64_MAX) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x654 = INT8_MIN;
	uint8_t x655 = 3U;
	static uint16_t x656 = 11302U;
	static int32_t t163 = 7286;

    t163 = ((x653^x654)|(x655!=x656));

    if (t163 != -111) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x657 = -16567364;
	uint32_t x658 = 755U;
	static volatile int16_t x659 = -31;
	int8_t x660 = -1;
	volatile uint32_t t164 = 1789015U;

    t164 = ((x657^x658)|(x659!=x660));

    if (t164 != 4278399311U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = 2;
	volatile int32_t x662 = INT32_MIN;
	static int32_t x663 = INT32_MIN;
	int8_t x664 = 0;
	volatile int32_t t165 = -174317621;

    t165 = ((x661^x662)|(x663!=x664));

    if (t165 != -2147483645) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = 11425632201348824LLU;
	static uint8_t x666 = 75U;
	int32_t x667 = INT32_MIN;
	uint64_t x668 = 200662938LLU;
	uint64_t t166 = 5727083734265272LLU;

    t166 = ((x665^x666)|(x667!=x668));

    if (t166 != 11425632201348755LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -1LL;
	uint16_t x670 = 265U;
	volatile int16_t x671 = -1;
	uint8_t x672 = 91U;
	volatile int64_t t167 = -707119254LL;

    t167 = ((x669^x670)|(x671!=x672));

    if (t167 != -265LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x673 = 1;
	int8_t x674 = 2;
	volatile uint16_t x675 = 1539U;
	uint32_t x676 = UINT32_MAX;
	static int32_t t168 = 14775243;

    t168 = ((x673^x674)|(x675!=x676));

    if (t168 != 3) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	static int8_t x678 = -1;
	volatile uint16_t x679 = 21828U;
	static int64_t x680 = INT64_MIN;
	volatile int32_t t169 = INT32_MAX;

    t169 = ((x677^x678)|(x679!=x680));

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x681 = INT64_MAX;
	int16_t x682 = INT16_MAX;
	static volatile uint64_t x683 = UINT64_MAX;
	volatile int16_t x684 = INT16_MAX;
	volatile int64_t t170 = 1297031304228718LL;

    t170 = ((x681^x682)|(x683!=x684));

    if (t170 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x686 = -1LL;
	uint8_t x687 = 7U;
	int32_t x688 = INT32_MIN;
	volatile int64_t t171 = -3LL;

    t171 = ((x685^x686)|(x687!=x688));

    if (t171 != 32767LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int32_t x689 = -68;
	volatile uint64_t x690 = 9746LLU;
	volatile int16_t x691 = INT16_MAX;
	static int16_t x692 = -4814;
	volatile uint64_t t172 = 2387321197396819481LLU;

    t172 = ((x689^x690)|(x691!=x692));

    if (t172 != 18446744073709541807LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x694 = 459U;
	uint32_t x696 = 7437U;
	volatile uint32_t t173 = 28767U;

    t173 = ((x693^x694)|(x695!=x696));

    if (t173 != 437U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x697 = 292354662LLU;
	int8_t x699 = INT8_MIN;
	uint32_t x700 = 50U;

    t174 = ((x697^x698)|(x699!=x700));

    if (t174 != 18446744073417196953LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint32_t x701 = 2600755U;
	static uint16_t x702 = 11055U;
	volatile int32_t x703 = INT32_MIN;
	volatile int32_t x704 = INT32_MAX;
	volatile uint32_t t175 = 36103286U;

    t175 = ((x701^x702)|(x703!=x704));

    if (t175 != 2589725U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x705 = INT64_MIN;
	int64_t x706 = -7294318941LL;
	volatile int32_t x707 = INT32_MIN;
	static uint8_t x708 = UINT8_MAX;
	volatile int64_t t176 = 789LL;

    t176 = ((x705^x706)|(x707!=x708));

    if (t176 != 9223372029560456867LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x709 = -1;
	uint64_t x710 = UINT64_MAX;
	int64_t x712 = INT64_MIN;

    t177 = ((x709^x710)|(x711!=x712));

    if (t177 != 1LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int16_t x713 = -1;
	int8_t x714 = -1;
	int32_t x715 = INT32_MIN;
	int8_t x716 = INT8_MAX;
	volatile int32_t t178 = -75;

    t178 = ((x713^x714)|(x715!=x716));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x717 = INT64_MIN;
	uint32_t x719 = 282411U;
	int32_t x720 = -1;
	volatile int64_t t179 = INT64_MAX;

    t179 = ((x717^x718)|(x719!=x720));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int64_t x721 = INT64_MIN;
	int8_t x723 = -1;
	uint32_t x724 = 200U;
	static volatile uint64_t t180 = 1738234238LLU;

    t180 = ((x721^x722)|(x723!=x724));

    if (t180 != 9223372036854775815LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = INT64_MAX;
	int32_t x727 = INT32_MIN;
	int64_t t181 = -3099LL;

    t181 = ((x725^x726)|(x727!=x728));

    if (t181 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x730 = 26;
	static uint16_t x731 = 2U;
	volatile int64_t t182 = -67408024LL;

    t182 = ((x729^x730)|(x731!=x732));

    if (t182 != -27LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x733 = -1;
	int64_t x734 = INT64_MIN;
	volatile uint32_t x736 = 35023576U;
	volatile int64_t t183 = INT64_MAX;

    t183 = ((x733^x734)|(x735!=x736));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x737 = INT64_MAX;
	int32_t x738 = -2745;
	int64_t x739 = INT64_MIN;
	int32_t x740 = INT32_MAX;

    t184 = ((x737^x738)|(x739!=x740));

    if (t184 != -9223372036854773063LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x741 = -1;
	volatile uint8_t x742 = UINT8_MAX;
	volatile int64_t x743 = -13823643LL;
	uint32_t x744 = UINT32_MAX;

    t185 = ((x741^x742)|(x743!=x744));

    if (t185 != -255) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = -1LL;
	static uint64_t x746 = UINT64_MAX;
	static int8_t x747 = INT8_MIN;
	volatile uint64_t t186 = 3623183814335400674LLU;

    t186 = ((x745^x746)|(x747!=x748));

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x749 = -1LL;
	int32_t x750 = -1;
	int16_t x752 = 8654;
	volatile int64_t t187 = -23869LL;

    t187 = ((x749^x750)|(x751!=x752));

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x753 = INT16_MAX;
	int64_t x754 = 357375577777945LL;
	int16_t x755 = INT16_MAX;
	int8_t x756 = INT8_MIN;

    t188 = ((x753^x754)|(x755!=x756));

    if (t188 != 357375577757927LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x758 = INT64_MIN;
	static int8_t x759 = -4;

    t189 = ((x757^x758)|(x759!=x760));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = -1;

    t190 = ((x761^x762)|(x763!=x764));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x766 = INT32_MIN;
	uint32_t x767 = 19U;
	int8_t x768 = -1;
	static int32_t t191 = 10;

    t191 = ((x765^x766)|(x767!=x768));

    if (t191 != 2147483521) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x769 = INT64_MIN;
	int16_t x770 = INT16_MAX;
	static volatile int16_t x771 = 1;
	int64_t t192 = -12716816982LL;

    t192 = ((x769^x770)|(x771!=x772));

    if (t192 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	uint64_t x774 = 747LLU;
	int16_t x776 = INT16_MIN;

    t193 = ((x773^x774)|(x775!=x776));

    if (t193 != 18446744073709550869LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x777 = 32552790783371912LLU;
	uint64_t x778 = 16694767279952LLU;
	volatile int64_t x780 = -1LL;
	uint64_t t194 = 22672016004760LLU;

    t194 = ((x777^x778)|(x779!=x780));

    if (t194 != 32556230979057113LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x781 = 606U;
	volatile int64_t x783 = -1LL;
	int8_t x784 = INT8_MAX;
	volatile int64_t t195 = -31055623847388LL;

    t195 = ((x781^x782)|(x783!=x784));

    if (t195 != 9223372036854775201LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = INT16_MIN;
	static uint64_t x786 = 27076LLU;
	uint64_t x787 = 14803100101LLU;
	volatile uint64_t t196 = 46858LLU;

    t196 = ((x785^x786)|(x787!=x788));

    if (t196 != 18446744073709545925LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x790 = INT8_MIN;
	uint16_t x791 = 1U;
	static volatile uint64_t x792 = 38977LLU;
	int32_t t197 = 99932381;

    t197 = ((x789^x790)|(x791!=x792));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x793 = 24U;
	volatile int64_t x794 = -145LL;
	uint64_t x795 = 50623985LLU;
	uint64_t x796 = UINT64_MAX;
	int64_t t198 = 3051LL;

    t198 = ((x793^x794)|(x795!=x796));

    if (t198 != -137LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = INT16_MIN;
	int64_t x798 = -1440761395412263LL;
	int32_t x799 = -1;
	uint16_t x800 = UINT16_MAX;
	volatile int64_t t199 = -139402461118352LL;

    t199 = ((x797^x798)|(x799!=x800));

    if (t199 != 1440761395380953LL) { NG(); } else { ; }
	
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

