
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

int16_t x1 = INT16_MAX;
int64_t x3 = 94488480331LL;
int64_t x5 = INT64_MIN;
static int8_t x7 = 0;
static volatile int64_t x17 = INT64_MAX;
int32_t x27 = INT32_MAX;
volatile int32_t x29 = -1;
int8_t x36 = INT8_MAX;
int32_t x39 = INT32_MAX;
int32_t t9 = 65;
uint32_t x41 = UINT32_MAX;
volatile int32_t t10 = -2;
static int8_t x45 = INT8_MAX;
volatile int16_t x52 = 38;
int32_t t16 = -14688;
volatile uint16_t x71 = UINT16_MAX;
static int16_t x76 = INT16_MIN;
int32_t t18 = 32;
static uint16_t x80 = 0U;
volatile uint16_t x81 = 15530U;
int32_t x84 = -1;
volatile int64_t x94 = -1LL;
int8_t x96 = 41;
volatile int32_t t23 = 23147;
int64_t x97 = 472LL;
int32_t t24 = -6319;
int32_t x118 = -1;
volatile int32_t x122 = INT32_MAX;
volatile int32_t x123 = -1;
volatile int32_t t30 = -20;
int8_t x126 = 47;
int64_t x135 = INT64_MIN;
volatile int32_t t34 = -77779;
volatile int32_t t35 = -60976901;
int64_t x149 = INT64_MIN;
static int64_t x153 = -1LL;
int64_t x155 = INT64_MAX;
int16_t x156 = -4;
static uint8_t x163 = 37U;
static uint16_t x164 = 190U;
volatile int32_t t40 = 1816;
int8_t x167 = INT8_MIN;
static int32_t t41 = -1;
int32_t t43 = 0;
int8_t x182 = -60;
static int32_t x184 = INT32_MAX;
int32_t x193 = INT32_MIN;
uint32_t x202 = 36507827U;
int8_t x209 = -10;
static int64_t x210 = INT64_MIN;
int8_t x212 = -3;
uint16_t x214 = 17373U;
int64_t x221 = -17569839LL;
int8_t x228 = -1;
static int32_t t56 = 410971;
uint32_t x243 = UINT32_MAX;
uint32_t x245 = 257695U;
int16_t x254 = INT16_MAX;
uint64_t x256 = 25311LLU;
volatile uint8_t x257 = UINT8_MAX;
volatile int32_t t66 = -40373959;
int16_t x269 = INT16_MIN;
uint32_t x270 = 1324U;
int16_t x276 = INT16_MIN;
static int32_t t68 = 1;
uint64_t x280 = 251LLU;
static int64_t x281 = -2624632886LL;
volatile int32_t t70 = -11466973;
volatile int32_t t71 = -16070;
static int16_t x290 = INT16_MIN;
int16_t x298 = INT16_MAX;
int32_t t75 = -3;
int32_t x306 = 912449;
static int32_t t76 = -41342798;
int32_t x312 = -2;
volatile int32_t t77 = 2073;
static uint16_t x321 = 40U;
static volatile int16_t x322 = -1;
int32_t t81 = 1;
int32_t x335 = INT32_MIN;
uint32_t x340 = 15663409U;
volatile int32_t t84 = 2685680;
int32_t x347 = 686;
uint16_t x350 = 4U;
volatile int32_t t87 = 104;
int8_t x353 = -2;
uint64_t x358 = 1101333LLU;
int8_t x361 = INT8_MIN;
uint16_t x363 = 265U;
int32_t t90 = -331640;
uint64_t x365 = UINT64_MAX;
static uint64_t x367 = 6332489419348352LLU;
uint8_t x368 = UINT8_MAX;
int32_t t91 = -7;
volatile int32_t t94 = -745;
static uint16_t x383 = 4U;
volatile uint8_t x388 = 1U;
uint8_t x390 = 0U;
int64_t x395 = INT64_MAX;
volatile int32_t t98 = 537;
uint32_t x399 = UINT32_MAX;
int32_t t99 = -2;
uint16_t x402 = 16352U;
static uint64_t x404 = 147863452295LLU;
int32_t x405 = INT32_MIN;
int16_t x406 = INT16_MAX;
uint8_t x407 = 1U;
static uint32_t x411 = 25U;
volatile uint64_t x419 = 35840843637355LLU;
static int16_t x422 = -132;
int32_t t105 = -9421303;
volatile int32_t t106 = -16288;
uint8_t x434 = 0U;
int32_t t109 = -769031394;
volatile int32_t t110 = 10290;
static int32_t x452 = -754109;
int8_t x455 = INT8_MIN;
uint16_t x474 = 42U;
int8_t x478 = INT8_MIN;
uint64_t x490 = 138548753409LLU;
static int64_t x492 = INT64_MIN;
volatile uint16_t x497 = 3111U;
uint16_t x498 = 440U;
uint64_t x509 = 7071438148719LLU;
int16_t x517 = INT16_MAX;
volatile int16_t x518 = 7722;
static int32_t x519 = INT32_MAX;
volatile int32_t t129 = -3;
uint64_t x523 = 142826LLU;
static uint32_t x528 = UINT32_MAX;
int64_t x532 = -1LL;
int32_t t133 = -74867;
uint64_t x537 = 2878950426001LLU;
volatile int8_t x542 = INT8_MAX;
volatile int64_t x553 = -1LL;
int64_t x554 = 947428LL;
uint32_t x557 = 3123139U;
int8_t x559 = INT8_MAX;
int32_t x563 = INT32_MAX;
int64_t x566 = -8249903LL;
uint8_t x570 = 4U;
int32_t t142 = -16986;
uint32_t x581 = 990181U;
static int16_t x584 = INT16_MIN;
int16_t x588 = 119;
volatile int8_t x589 = -14;
int8_t x595 = -1;
uint8_t x598 = 27U;
int32_t x606 = -3610853;
int32_t x608 = INT32_MIN;
int32_t t151 = -467103127;
volatile int32_t t152 = 1765;
volatile int32_t x622 = INT32_MIN;
int32_t x625 = INT32_MAX;
int64_t x628 = INT64_MIN;
volatile int32_t t156 = -37;
int64_t x629 = INT64_MAX;
volatile int32_t t157 = 2527742;
volatile int16_t x633 = INT16_MAX;
uint16_t x640 = 2294U;
int32_t t159 = -121;
int8_t x654 = INT8_MIN;
volatile int16_t x661 = -841;
int16_t x662 = 1;
static int32_t x664 = INT32_MAX;
int64_t x670 = INT64_MIN;
int8_t x675 = INT8_MIN;
uint64_t x679 = 651919382279100LLU;
static int8_t x680 = INT8_MIN;
int8_t x691 = 0;
volatile int32_t x693 = -1;
uint32_t x695 = UINT32_MAX;
int16_t x697 = -1;
volatile uint16_t x705 = 23482U;
uint16_t x707 = UINT16_MAX;
uint8_t x708 = 7U;
volatile int32_t t177 = 44905100;
volatile int32_t t178 = 20126;
int32_t x725 = 49308550;
int64_t x729 = -1LL;
int32_t x731 = -1;
static uint8_t x735 = UINT8_MAX;
int8_t x738 = -1;
static volatile int64_t x739 = -48471484LL;
volatile int32_t t185 = -218697131;
uint32_t x745 = 268768017U;
uint64_t x747 = 51582451293794LLU;
volatile int64_t x749 = INT64_MAX;
static volatile int16_t x751 = 66;
volatile int32_t t188 = 4;
int16_t x760 = INT16_MAX;
static int8_t x761 = INT8_MIN;
volatile int32_t t190 = 828;
static int32_t x767 = -3387570;
uint32_t x776 = 481720123U;
int32_t t193 = -49677;
int32_t x779 = -1;
volatile int16_t x784 = INT16_MAX;
int16_t x793 = -1;
int32_t x794 = -1;


void f0(void) {
    	static int8_t x2 = INT8_MAX;
	static int16_t x4 = -1;
	volatile int32_t t0 = 40;

    t0 = (x1==(x2==(x3==x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 12957;

    t1 = (x5==(x6==(x7==x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = 9729U;
	int32_t x10 = INT32_MIN;
	int32_t x11 = INT32_MAX;
	static uint16_t x12 = 887U;
	volatile int32_t t2 = -13816;

    t2 = (x9==(x10==(x11==x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 7730U;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 1U;
	volatile int8_t x16 = -1;
	volatile int32_t t3 = 265539;

    t3 = (x13==(x14==(x15==x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = -1;
	static volatile int32_t x19 = INT32_MAX;
	volatile uint8_t x20 = UINT8_MAX;
	static volatile int32_t t4 = 975;

    t4 = (x17==(x18==(x19==x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x21 = 502780419U;
	uint64_t x22 = 217LLU;
	volatile int64_t x23 = 573126451775141LL;
	volatile uint8_t x24 = 14U;
	int32_t t5 = -2;

    t5 = (x21==(x22==(x23==x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MAX;
	static int32_t x26 = INT32_MIN;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -1;

    t6 = (x25==(x26==(x27==x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x30 = -1;
	int8_t x31 = -1;
	static uint16_t x32 = 2892U;
	int32_t t7 = -139;

    t7 = (x29==(x30==(x31==x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 678LLU;
	volatile uint64_t x34 = 24518328844LLU;
	uint32_t x35 = UINT32_MAX;
	static volatile int32_t t8 = 609627;

    t8 = (x33==(x34==(x35==x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int8_t x37 = -1;
	uint32_t x38 = 1019654U;
	uint16_t x40 = 0U;

    t9 = (x37==(x38==(x39==x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x42 = UINT8_MAX;
	volatile int64_t x43 = INT64_MAX;
	static int8_t x44 = INT8_MAX;

    t10 = (x41==(x42==(x43==x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int64_t x46 = 17484256576LL;
	volatile int64_t x47 = -3823710LL;
	static volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 121;

    t11 = (x45==(x46==(x47==x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = -3;
	int64_t x50 = -3149557LL;
	uint8_t x51 = 23U;
	volatile int32_t t12 = -54907097;

    t12 = (x49==(x50==(x51==x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = 6176U;
	volatile int8_t x54 = -1;
	uint8_t x55 = 12U;
	static int32_t x56 = -44;
	int32_t t13 = -49658105;

    t13 = (x53==(x54==(x55==x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	int32_t x58 = 223594;
	int64_t x59 = -51711081014665LL;
	volatile int32_t x60 = 1847;
	volatile int32_t t14 = -2402;

    t14 = (x57==(x58==(x59==x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x61 = INT16_MAX;
	static uint32_t x62 = UINT32_MAX;
	int32_t x63 = INT32_MIN;
	static int8_t x64 = -1;
	volatile int32_t t15 = 2164068;

    t15 = (x61==(x62==(x63==x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x65 = INT8_MAX;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 0U;
	uint32_t x68 = 4025U;

    t16 = (x65==(x66==(x67==x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x69 = -1;
	volatile int8_t x70 = INT8_MIN;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = -4121818;

    t17 = (x69==(x70==(x71==x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 76LLU;
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -1LL;

    t18 = (x73==(x74==(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = INT32_MAX;
	static volatile int32_t x78 = -1494;
	int8_t x79 = INT8_MIN;
	volatile int32_t t19 = 1;

    t19 = (x77==(x78==(x79==x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x82 = 59;
	volatile uint64_t x83 = UINT64_MAX;
	int32_t t20 = -16;

    t20 = (x81==(x82==(x83==x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x85 = INT64_MIN;
	static int32_t x86 = INT32_MAX;
	static int32_t x87 = -15114658;
	volatile uint64_t x88 = UINT64_MAX;
	volatile int32_t t21 = 15153;

    t21 = (x85==(x86==(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x89 = 5421U;
	int32_t x90 = -1;
	static int16_t x91 = 955;
	int32_t x92 = -60;
	int32_t t22 = -219891066;

    t22 = (x89==(x90==(x91==x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x93 = -1;
	uint32_t x95 = UINT32_MAX;

    t23 = (x93==(x94==(x95==x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -1LL;
	static volatile int8_t x99 = INT8_MIN;
	int8_t x100 = 1;

    t24 = (x97==(x98==(x99==x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x101 = INT8_MIN;
	static uint8_t x102 = 61U;
	int64_t x103 = INT64_MIN;
	volatile int16_t x104 = INT16_MIN;
	volatile int32_t t25 = 456770804;

    t25 = (x101==(x102==(x103==x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x105 = 114U;
	int32_t x106 = 4239869;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = 840;
	volatile int32_t t26 = -462301;

    t26 = (x105==(x106==(x107==x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x109 = 193U;
	int32_t x110 = -1;
	volatile int8_t x111 = INT8_MIN;
	int64_t x112 = 1620068014271LL;
	static int32_t t27 = 784360757;

    t27 = (x109==(x110==(x111==x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -83LL;
	int64_t x114 = INT64_MAX;
	volatile int64_t x115 = INT64_MIN;
	uint16_t x116 = 23U;
	volatile int32_t t28 = 4;

    t28 = (x113==(x114==(x115==x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x117 = -1;
	volatile int32_t x119 = INT32_MIN;
	int32_t x120 = INT32_MIN;
	static volatile int32_t t29 = -9329355;

    t29 = (x117==(x118==(x119==x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x121 = INT32_MIN;
	volatile int16_t x124 = 26;

    t30 = (x121==(x122==(x123==x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int8_t x127 = 0;
	volatile int8_t x128 = -2;
	int32_t t31 = 10105978;

    t31 = (x125==(x126==(x127==x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x129 = INT16_MIN;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 83U;
	int32_t x132 = -1;
	int32_t t32 = 217877540;

    t32 = (x129==(x130==(x131==x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = -1;
	int64_t x134 = INT64_MAX;
	uint8_t x136 = 0U;
	static int32_t t33 = -6162109;

    t33 = (x133==(x134==(x135==x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x137 = 2U;
	int16_t x138 = -13;
	uint16_t x139 = UINT16_MAX;
	int8_t x140 = 1;

    t34 = (x137==(x138==(x139==x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x141 = INT16_MAX;
	int64_t x142 = 1LL;
	int8_t x143 = INT8_MIN;
	volatile int64_t x144 = -1LL;

    t35 = (x141==(x142==(x143==x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -2603LL;
	volatile uint8_t x146 = UINT8_MAX;
	int32_t x147 = -1;
	static int32_t x148 = -46;
	volatile int32_t t36 = 5172796;

    t36 = (x145==(x146==(x147==x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x150 = 7U;
	uint8_t x151 = 0U;
	int32_t x152 = 213;
	int32_t t37 = -1003;

    t37 = (x149==(x150==(x151==x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x154 = -1675593LL;
	volatile int32_t t38 = -351430142;

    t38 = (x153==(x154==(x155==x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x157 = 1U;
	int16_t x158 = INT16_MIN;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -2406317;

    t39 = (x157==(x158==(x159==x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = INT32_MIN;
	uint32_t x162 = UINT32_MAX;

    t40 = (x161==(x162==(x163==x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x165 = INT8_MAX;
	int32_t x166 = 71065748;
	static volatile uint8_t x168 = 10U;

    t41 = (x165==(x166==(x167==x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint32_t x169 = UINT32_MAX;
	uint16_t x170 = 13U;
	static int16_t x171 = -12357;
	uint32_t x172 = 11337U;
	volatile int32_t t42 = 7947;

    t42 = (x169==(x170==(x171==x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = -1;
	int32_t x174 = -1;
	uint32_t x175 = UINT32_MAX;
	uint16_t x176 = 4U;

    t43 = (x173==(x174==(x175==x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 1101;
	int8_t x178 = 0;
	int16_t x179 = INT16_MIN;
	volatile uint64_t x180 = UINT64_MAX;
	static int32_t t44 = -237;

    t44 = (x177==(x178==(x179==x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = 6;
	int32_t x183 = 1;
	int32_t t45 = 804;

    t45 = (x181==(x182==(x183==x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x185 = -1LL;
	int32_t x186 = 0;
	static volatile uint16_t x187 = UINT16_MAX;
	int64_t x188 = -1LL;
	static int32_t t46 = 6238;

    t46 = (x185==(x186==(x187==x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x189 = 241662573U;
	volatile int64_t x190 = -72337889965494LL;
	int16_t x191 = INT16_MAX;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t47 = -153;

    t47 = (x189==(x190==(x191==x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x194 = 1;
	int16_t x195 = 1391;
	int64_t x196 = -1LL;
	int32_t t48 = -59141869;

    t48 = (x193==(x194==(x195==x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MIN;
	uint16_t x200 = 2869U;
	volatile int32_t t49 = 6752;

    t49 = (x197==(x198==(x199==x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x201 = -62945234576207LL;
	int16_t x203 = 62;
	volatile uint64_t x204 = UINT64_MAX;
	int32_t t50 = 11361764;

    t50 = (x201==(x202==(x203==x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x205 = -2;
	static volatile int16_t x206 = INT16_MIN;
	static int8_t x207 = -1;
	uint32_t x208 = 719363623U;
	volatile int32_t t51 = 66;

    t51 = (x205==(x206==(x207==x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x211 = 8;
	volatile int32_t t52 = -2447249;

    t52 = (x209==(x210==(x211==x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = -501;
	int64_t x215 = INT64_MIN;
	int32_t x216 = INT32_MAX;
	int32_t t53 = 36748046;

    t53 = (x213==(x214==(x215==x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = INT64_MIN;
	int32_t x218 = -14720818;
	volatile int16_t x219 = INT16_MIN;
	uint64_t x220 = 6049570756241124025LLU;
	volatile int32_t t54 = -89618;

    t54 = (x217==(x218==(x219==x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x222 = INT8_MIN;
	static uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	int32_t t55 = 62;

    t55 = (x221==(x222==(x223==x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x225 = UINT16_MAX;
	int8_t x226 = -48;
	uint8_t x227 = 1U;

    t56 = (x225==(x226==(x227==x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	static int16_t x230 = 103;
	static int16_t x231 = 2;
	uint8_t x232 = UINT8_MAX;
	static int32_t t57 = 0;

    t57 = (x229==(x230==(x231==x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = -1;
	volatile int32_t x235 = INT32_MAX;
	uint8_t x236 = 13U;
	static volatile int32_t t58 = -2373;

    t58 = (x233==(x234==(x235==x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x237 = INT16_MAX;
	volatile uint16_t x238 = 18061U;
	volatile int16_t x239 = INT16_MIN;
	uint32_t x240 = UINT32_MAX;
	int32_t t59 = 24;

    t59 = (x237==(x238==(x239==x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x241 = INT32_MIN;
	static uint64_t x242 = 144415356LLU;
	int16_t x244 = INT16_MIN;
	volatile int32_t t60 = 1;

    t60 = (x241==(x242==(x243==x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -16322928;
	uint8_t x248 = 0U;
	static volatile int32_t t61 = -2;

    t61 = (x245==(x246==(x247==x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 1U;
	static int8_t x250 = -1;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	static volatile int32_t t62 = 7863145;

    t62 = (x249==(x250==(x251==x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x253 = 361;
	uint32_t x255 = 8318U;
	volatile int32_t t63 = 286720;

    t63 = (x253==(x254==(x255==x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x258 = INT64_MAX;
	int32_t x259 = 10346854;
	static int8_t x260 = 1;
	int32_t t64 = 3;

    t64 = (x257==(x258==(x259==x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x261 = 70892608022145589LL;
	uint16_t x262 = 181U;
	static volatile int32_t x263 = INT32_MIN;
	int64_t x264 = INT64_MIN;
	int32_t t65 = -2;

    t65 = (x261==(x262==(x263==x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = INT32_MIN;
	int8_t x266 = INT8_MAX;
	int16_t x267 = INT16_MIN;
	volatile uint64_t x268 = 467536LLU;

    t66 = (x265==(x266==(x267==x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x271 = 1LLU;
	static volatile uint16_t x272 = 22838U;
	volatile int32_t t67 = 2;

    t67 = (x269==(x270==(x271==x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x273 = INT8_MAX;
	int64_t x274 = INT64_MIN;
	int8_t x275 = 13;

    t68 = (x273==(x274==(x275==x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	int8_t x278 = 10;
	uint64_t x279 = 3421351669LLU;
	static volatile int32_t t69 = -2073;

    t69 = (x277==(x278==(x279==x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x282 = 740421817LLU;
	int32_t x283 = INT32_MAX;
	int32_t x284 = -1;

    t70 = (x281==(x282==(x283==x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = 116U;
	int8_t x286 = -3;
	int64_t x287 = 2610LL;
	static int8_t x288 = INT8_MAX;

    t71 = (x285==(x286==(x287==x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x289 = UINT32_MAX;
	int8_t x291 = -15;
	static volatile int64_t x292 = -29699776631278LL;
	static volatile int32_t t72 = -352;

    t72 = (x289==(x290==(x291==x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	uint64_t x295 = 857435290LLU;
	static uint16_t x296 = 6124U;
	int32_t t73 = 2962;

    t73 = (x293==(x294==(x295==x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int16_t x297 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = 1;
	volatile int32_t t74 = 58967122;

    t74 = (x297==(x298==(x299==x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x301 = INT16_MIN;
	static int16_t x302 = 32;
	int16_t x303 = INT16_MAX;
	int32_t x304 = INT32_MIN;

    t75 = (x301==(x302==(x303==x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -1;
	volatile int32_t x307 = INT32_MIN;
	volatile int8_t x308 = INT8_MIN;

    t76 = (x305==(x306==(x307==x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x309 = -1;
	static volatile uint8_t x310 = UINT8_MAX;
	int8_t x311 = -1;

    t77 = (x309==(x310==(x311==x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x313 = 19766415U;
	int32_t x314 = INT32_MIN;
	static int8_t x315 = 1;
	static int8_t x316 = INT8_MIN;
	static int32_t t78 = -12;

    t78 = (x313==(x314==(x315==x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = INT32_MIN;
	static volatile uint32_t x318 = UINT32_MAX;
	volatile int64_t x319 = INT64_MAX;
	volatile uint32_t x320 = 10U;
	int32_t t79 = -1;

    t79 = (x317==(x318==(x319==x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x323 = 7U;
	static int16_t x324 = -256;
	int32_t t80 = -3785594;

    t80 = (x321==(x322==(x323==x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = INT64_MAX;
	uint64_t x326 = UINT64_MAX;
	volatile int8_t x327 = INT8_MIN;
	static volatile int16_t x328 = INT16_MAX;

    t81 = (x325==(x326==(x327==x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x329 = 1006384813744353LLU;
	int64_t x330 = -1LL;
	int8_t x331 = 1;
	uint16_t x332 = 4084U;
	volatile int32_t t82 = -60225243;

    t82 = (x329==(x330==(x331==x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x333 = 59U;
	int8_t x334 = 20;
	int32_t x336 = INT32_MIN;
	volatile int32_t t83 = -67973;

    t83 = (x333==(x334==(x335==x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = UINT32_MAX;
	int16_t x338 = 0;
	volatile int32_t x339 = INT32_MIN;

    t84 = (x337==(x338==(x339==x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x341 = INT16_MAX;
	int64_t x342 = INT64_MIN;
	static volatile uint32_t x343 = UINT32_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 511;

    t85 = (x341==(x342==(x343==x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = 2LLU;
	int32_t x346 = -3132025;
	static uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 171076;

    t86 = (x345==(x346==(x347==x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x349 = -28;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = -26;

    t87 = (x349==(x350==(x351==x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x354 = INT8_MIN;
	volatile uint16_t x355 = UINT16_MAX;
	uint16_t x356 = 11U;
	int32_t t88 = 54;

    t88 = (x353==(x354==(x355==x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x357 = INT64_MIN;
	uint32_t x359 = 8148737U;
	static uint32_t x360 = UINT32_MAX;
	static volatile int32_t t89 = -1262;

    t89 = (x357==(x358==(x359==x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x362 = UINT16_MAX;
	static int8_t x364 = INT8_MAX;

    t90 = (x361==(x362==(x363==x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x366 = INT32_MAX;

    t91 = (x365==(x366==(x367==x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x369 = 282389;
	int64_t x370 = INT64_MAX;
	static volatile uint8_t x371 = 24U;
	int8_t x372 = 12;
	int32_t t92 = 0;

    t92 = (x369==(x370==(x371==x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = 184;
	volatile uint16_t x374 = UINT16_MAX;
	static uint64_t x375 = 6374178853LLU;
	volatile int32_t x376 = INT32_MAX;
	volatile int32_t t93 = 4514;

    t93 = (x373==(x374==(x375==x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	static uint16_t x378 = UINT16_MAX;
	int16_t x379 = INT16_MIN;
	static int64_t x380 = INT64_MAX;

    t94 = (x377==(x378==(x379==x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x381 = 8U;
	static int8_t x382 = INT8_MAX;
	uint32_t x384 = 205U;
	int32_t t95 = -69647;

    t95 = (x381==(x382==(x383==x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x385 = 73374U;
	int64_t x386 = -64195005939096670LL;
	volatile int8_t x387 = INT8_MIN;
	int32_t t96 = -255;

    t96 = (x385==(x386==(x387==x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = 0U;
	volatile int32_t t97 = -2262;

    t97 = (x389==(x390==(x391==x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile uint32_t x393 = UINT32_MAX;
	int64_t x394 = 15568616482LL;
	int8_t x396 = INT8_MAX;

    t98 = (x393==(x394==(x395==x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x397 = INT16_MIN;
	int32_t x398 = -520;
	int64_t x400 = -1LL;

    t99 = (x397==(x398==(x399==x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x401 = INT64_MIN;
	int8_t x403 = 21;
	int32_t t100 = 14;

    t100 = (x401==(x402==(x403==x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x408 = 50U;
	int32_t t101 = 0;

    t101 = (x405==(x406==(x407==x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x409 = UINT8_MAX;
	int64_t x410 = -1LL;
	int32_t x412 = 211299325;
	volatile int32_t t102 = 2068039;

    t102 = (x409==(x410==(x411==x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x413 = 1844627985352497LL;
	volatile uint8_t x414 = 12U;
	int16_t x415 = -33;
	volatile int8_t x416 = INT8_MAX;
	volatile int32_t t103 = -7308431;

    t103 = (x413==(x414==(x415==x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x417 = 5290564932LLU;
	static uint16_t x418 = 131U;
	static int8_t x420 = INT8_MAX;
	int32_t t104 = -230271990;

    t104 = (x417==(x418==(x419==x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x421 = 118691141;
	int16_t x423 = -1;
	uint64_t x424 = 22LLU;

    t105 = (x421==(x422==(x423==x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -1;
	static int16_t x426 = -372;
	volatile uint32_t x427 = 147682075U;
	int64_t x428 = 68459947514614927LL;

    t106 = (x425==(x426==(x427==x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x429 = -1;
	int16_t x430 = -31;
	static int8_t x431 = INT8_MIN;
	int32_t x432 = 111;
	volatile int32_t t107 = -52;

    t107 = (x429==(x430==(x431==x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x433 = INT16_MIN;
	volatile uint8_t x435 = 48U;
	uint16_t x436 = UINT16_MAX;
	volatile int32_t t108 = 1048;

    t108 = (x433==(x434==(x435==x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 149478831U;
	static int64_t x438 = INT64_MIN;
	volatile int32_t x439 = INT32_MIN;
	static int16_t x440 = INT16_MIN;

    t109 = (x437==(x438==(x439==x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = INT16_MAX;
	volatile uint16_t x442 = 1426U;
	static int8_t x443 = INT8_MAX;
	int8_t x444 = INT8_MAX;

    t110 = (x441==(x442==(x443==x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	volatile int8_t x446 = -40;
	int8_t x447 = 0;
	int32_t x448 = INT32_MIN;
	volatile int32_t t111 = 0;

    t111 = (x445==(x446==(x447==x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = 1U;
	static uint8_t x450 = UINT8_MAX;
	uint32_t x451 = UINT32_MAX;
	int32_t t112 = 7345;

    t112 = (x449==(x450==(x451==x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x453 = -1LL;
	int32_t x454 = -325132976;
	static int64_t x456 = -311745LL;
	static int32_t t113 = -45042;

    t113 = (x453==(x454==(x455==x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x457 = INT8_MIN;
	volatile uint32_t x458 = 63U;
	volatile int32_t x459 = INT32_MIN;
	int16_t x460 = INT16_MIN;
	volatile int32_t t114 = 935;

    t114 = (x457==(x458==(x459==x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x461 = 2330695645149693818LLU;
	static int8_t x462 = INT8_MIN;
	int32_t x463 = -1;
	uint64_t x464 = 55635972LLU;
	int32_t t115 = -79;

    t115 = (x461==(x462==(x463==x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x465 = -1;
	int16_t x466 = 19;
	int8_t x467 = -1;
	int16_t x468 = INT16_MIN;
	volatile int32_t t116 = 1;

    t116 = (x465==(x466==(x467==x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	int16_t x470 = -1;
	static int16_t x471 = INT16_MIN;
	uint16_t x472 = 4U;
	int32_t t117 = 28;

    t117 = (x469==(x470==(x471==x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x473 = 23376771U;
	volatile int8_t x475 = -2;
	static uint32_t x476 = 0U;
	int32_t t118 = -14139687;

    t118 = (x473==(x474==(x475==x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x477 = -1;
	int32_t x479 = 89814567;
	int64_t x480 = -4033LL;
	volatile int32_t t119 = -4;

    t119 = (x477==(x478==(x479==x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x481 = 1LLU;
	volatile int8_t x482 = INT8_MAX;
	static volatile uint16_t x483 = 1U;
	static uint32_t x484 = 25322803U;
	int32_t t120 = 1562;

    t120 = (x481==(x482==(x483==x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x485 = INT32_MIN;
	uint16_t x486 = 9514U;
	static int64_t x487 = -1LL;
	static volatile uint16_t x488 = UINT16_MAX;
	volatile int32_t t121 = 28994546;

    t121 = (x485==(x486==(x487==x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x489 = INT32_MAX;
	static volatile uint16_t x491 = UINT16_MAX;
	static volatile int32_t t122 = 0;

    t122 = (x489==(x490==(x491==x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x493 = 11327;
	static int8_t x494 = -1;
	static volatile uint16_t x495 = UINT16_MAX;
	static uint16_t x496 = 29U;
	volatile int32_t t123 = 7913728;

    t123 = (x493==(x494==(x495==x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x499 = UINT64_MAX;
	int8_t x500 = INT8_MIN;
	volatile int32_t t124 = 228;

    t124 = (x497==(x498==(x499==x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x501 = UINT8_MAX;
	uint64_t x502 = 1158369032272184106LLU;
	int32_t x503 = -1;
	volatile uint16_t x504 = 29U;
	int32_t t125 = -1029380156;

    t125 = (x501==(x502==(x503==x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -1LL;
	volatile int8_t x506 = INT8_MIN;
	static uint8_t x507 = 1U;
	uint32_t x508 = 9213724U;
	static int32_t t126 = 10517;

    t126 = (x505==(x506==(x507==x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	int8_t x511 = INT8_MIN;
	int8_t x512 = -4;
	int32_t t127 = 295;

    t127 = (x509==(x510==(x511==x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = INT32_MIN;
	int8_t x514 = -1;
	int32_t x515 = INT32_MAX;
	static int8_t x516 = 0;
	int32_t t128 = -6361008;

    t128 = (x513==(x514==(x515==x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x520 = -14;

    t129 = (x517==(x518==(x519==x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x521 = INT16_MIN;
	int8_t x522 = INT8_MIN;
	uint64_t x524 = 56885LLU;
	volatile int32_t t130 = -53576230;

    t130 = (x521==(x522==(x523==x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = INT32_MIN;
	int8_t x526 = -1;
	uint8_t x527 = 10U;
	volatile int32_t t131 = -654567411;

    t131 = (x525==(x526==(x527==x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x529 = 655916437;
	uint16_t x530 = 57U;
	volatile uint16_t x531 = 64U;
	static int32_t t132 = 103030;

    t132 = (x529==(x530==(x531==x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x533 = -386;
	int16_t x534 = INT16_MIN;
	static uint8_t x535 = 8U;
	uint64_t x536 = UINT64_MAX;

    t133 = (x533==(x534==(x535==x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x538 = -1;
	uint16_t x539 = UINT16_MAX;
	int8_t x540 = INT8_MIN;
	volatile int32_t t134 = 7014407;

    t134 = (x537==(x538==(x539==x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x541 = 23628834LLU;
	static volatile uint16_t x543 = UINT16_MAX;
	volatile uint16_t x544 = UINT16_MAX;
	volatile int32_t t135 = -27061966;

    t135 = (x541==(x542==(x543==x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int16_t x546 = 634;
	volatile int32_t x547 = 119892517;
	int64_t x548 = INT64_MAX;
	static int32_t t136 = -158;

    t136 = (x545==(x546==(x547==x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x549 = 10250U;
	int8_t x550 = INT8_MIN;
	static int32_t x551 = -3890;
	int32_t x552 = 298102654;
	volatile int32_t t137 = 27952089;

    t137 = (x549==(x550==(x551==x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x555 = 8662052LL;
	volatile int8_t x556 = -7;
	volatile int32_t t138 = 11610868;

    t138 = (x553==(x554==(x555==x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x558 = UINT32_MAX;
	static int32_t x560 = -25562428;
	int32_t t139 = -12663589;

    t139 = (x557==(x558==(x559==x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x561 = 7091U;
	static int32_t x562 = INT32_MIN;
	int16_t x564 = 341;
	int32_t t140 = -4710;

    t140 = (x561==(x562==(x563==x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x565 = 8098LLU;
	static int32_t x567 = 25;
	int16_t x568 = INT16_MIN;
	static volatile int32_t t141 = -10857917;

    t141 = (x565==(x566==(x567==x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x569 = -3838;
	static volatile int32_t x571 = -1497026;
	volatile uint64_t x572 = 9097LLU;

    t142 = (x569==(x570==(x571==x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x573 = UINT16_MAX;
	uint8_t x574 = 107U;
	uint64_t x575 = UINT64_MAX;
	uint32_t x576 = 6U;
	static volatile int32_t t143 = 10546964;

    t143 = (x573==(x574==(x575==x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x577 = INT32_MIN;
	static int32_t x578 = INT32_MAX;
	volatile int64_t x579 = -2864731522LL;
	uint16_t x580 = 3344U;
	int32_t t144 = -33147;

    t144 = (x577==(x578==(x579==x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint16_t x582 = 835U;
	static int32_t x583 = INT32_MIN;
	volatile int32_t t145 = -472;

    t145 = (x581==(x582==(x583==x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x585 = 136U;
	static int32_t x586 = INT32_MAX;
	int32_t x587 = INT32_MAX;
	volatile int32_t t146 = 29576198;

    t146 = (x585==(x586==(x587==x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x590 = 2;
	int32_t x591 = -1;
	volatile int8_t x592 = INT8_MAX;
	int32_t t147 = -77849142;

    t147 = (x589==(x590==(x591==x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 1;
	static int64_t x594 = -1811060779430936LL;
	int32_t x596 = 292562;
	int32_t t148 = -41;

    t148 = (x593==(x594==(x595==x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x599 = -848037329927581659LL;
	uint8_t x600 = 113U;
	int32_t t149 = 79074;

    t149 = (x597==(x598==(x599==x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x601 = UINT8_MAX;
	static int8_t x602 = 2;
	static int64_t x603 = INT64_MAX;
	uint64_t x604 = 1992042445175566LLU;
	volatile int32_t t150 = 1;

    t150 = (x601==(x602==(x603==x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x605 = INT64_MAX;
	volatile int64_t x607 = -3532LL;

    t151 = (x605==(x606==(x607==x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x609 = UINT8_MAX;
	int32_t x610 = INT32_MIN;
	static int64_t x611 = -1LL;
	volatile int8_t x612 = -15;

    t152 = (x609==(x610==(x611==x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x613 = INT64_MIN;
	uint64_t x614 = 39384221958LLU;
	int8_t x615 = INT8_MIN;
	int32_t x616 = INT32_MIN;
	int32_t t153 = 171;

    t153 = (x613==(x614==(x615==x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x617 = -12;
	int8_t x618 = INT8_MIN;
	int32_t x619 = INT32_MIN;
	static int32_t x620 = -147267295;
	int32_t t154 = 304318219;

    t154 = (x617==(x618==(x619==x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x621 = 0U;
	int8_t x623 = INT8_MAX;
	static int8_t x624 = INT8_MIN;
	volatile int32_t t155 = 3605;

    t155 = (x621==(x622==(x623==x624)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x626 = INT16_MAX;
	uint32_t x627 = 6532U;

    t156 = (x625==(x626==(x627==x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x630 = INT64_MIN;
	int32_t x631 = INT32_MIN;
	volatile int8_t x632 = INT8_MAX;

    t157 = (x629==(x630==(x631==x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x634 = INT16_MIN;
	volatile int16_t x635 = -1;
	uint8_t x636 = 16U;
	int32_t t158 = -13;

    t158 = (x633==(x634==(x635==x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = 1;
	int64_t x638 = INT64_MAX;
	int32_t x639 = INT32_MIN;

    t159 = (x637==(x638==(x639==x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x641 = -1;
	int8_t x642 = INT8_MAX;
	static volatile uint16_t x643 = 9U;
	static int32_t x644 = -41967;
	static int32_t t160 = -1000391;

    t160 = (x641==(x642==(x643==x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x645 = INT64_MIN;
	int32_t x646 = 1586542;
	uint64_t x647 = 138061907393771LLU;
	static uint8_t x648 = 61U;
	int32_t t161 = 412789;

    t161 = (x645==(x646==(x647==x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x649 = INT8_MIN;
	uint64_t x650 = 578473925606124LLU;
	volatile int8_t x651 = INT8_MAX;
	static int16_t x652 = INT16_MIN;
	volatile int32_t t162 = 529526483;

    t162 = (x649==(x650==(x651==x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MAX;
	int16_t x655 = -512;
	uint16_t x656 = 15U;
	static int32_t t163 = -45;

    t163 = (x653==(x654==(x655==x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint32_t x657 = UINT32_MAX;
	volatile int64_t x658 = -30LL;
	uint8_t x659 = UINT8_MAX;
	static int8_t x660 = 1;
	int32_t t164 = -265107348;

    t164 = (x657==(x658==(x659==x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x663 = 11928507281314572LLU;
	static int32_t t165 = 875884;

    t165 = (x661==(x662==(x663==x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = INT32_MIN;
	int32_t x666 = INT32_MIN;
	static int16_t x667 = 45;
	int16_t x668 = INT16_MAX;
	int32_t t166 = -3;

    t166 = (x665==(x666==(x667==x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x669 = INT32_MIN;
	uint16_t x671 = 21U;
	uint8_t x672 = UINT8_MAX;
	int32_t t167 = 0;

    t167 = (x669==(x670==(x671==x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = INT8_MIN;
	uint32_t x674 = 529964503U;
	int16_t x676 = INT16_MIN;
	volatile int32_t t168 = 1;

    t168 = (x673==(x674==(x675==x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MAX;
	int8_t x678 = -1;
	volatile int32_t t169 = -412147;

    t169 = (x677==(x678==(x679==x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x681 = -1;
	int8_t x682 = -1;
	int16_t x683 = 0;
	int32_t x684 = -8050;
	int32_t t170 = -44000706;

    t170 = (x681==(x682==(x683==x684)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = 113634490771019576LLU;
	volatile uint64_t x686 = UINT64_MAX;
	uint16_t x687 = 2247U;
	int64_t x688 = -1LL;
	int32_t t171 = -8;

    t171 = (x685==(x686==(x687==x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x689 = 2;
	volatile uint8_t x690 = 7U;
	int8_t x692 = INT8_MIN;
	volatile int32_t t172 = 0;

    t172 = (x689==(x690==(x691==x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x694 = 14U;
	int16_t x696 = 1097;
	static int32_t t173 = -1322;

    t173 = (x693==(x694==(x695==x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int16_t x698 = INT16_MIN;
	static uint64_t x699 = 1LLU;
	volatile int16_t x700 = -1;
	static volatile int32_t t174 = 1293;

    t174 = (x697==(x698==(x699==x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x701 = INT32_MIN;
	int16_t x702 = INT16_MIN;
	int8_t x703 = INT8_MIN;
	uint32_t x704 = UINT32_MAX;
	int32_t t175 = 0;

    t175 = (x701==(x702==(x703==x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x706 = -53LL;
	int32_t t176 = -408;

    t176 = (x705==(x706==(x707==x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x709 = 205033643LLU;
	uint8_t x710 = 58U;
	int8_t x711 = INT8_MAX;
	int32_t x712 = INT32_MIN;

    t177 = (x709==(x710==(x711==x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x713 = -1;
	static int16_t x714 = 5;
	int16_t x715 = INT16_MIN;
	int16_t x716 = INT16_MIN;

    t178 = (x713==(x714==(x715==x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x717 = UINT16_MAX;
	static int32_t x718 = INT32_MAX;
	int32_t x719 = -1;
	static uint8_t x720 = 11U;
	volatile int32_t t179 = 66839697;

    t179 = (x717==(x718==(x719==x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x721 = INT32_MIN;
	int64_t x722 = INT64_MIN;
	static uint16_t x723 = 219U;
	int32_t x724 = -805;
	int32_t t180 = -42635038;

    t180 = (x721==(x722==(x723==x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x726 = -1LL;
	uint8_t x727 = 29U;
	static uint64_t x728 = 1234640LLU;
	static int32_t t181 = -188048;

    t181 = (x725==(x726==(x727==x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x730 = UINT16_MAX;
	volatile int64_t x732 = -8820041630LL;
	int32_t t182 = -4402209;

    t182 = (x729==(x730==(x731==x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x733 = UINT16_MAX;
	static uint8_t x734 = 109U;
	volatile uint64_t x736 = 8022237680LLU;
	static int32_t t183 = 1261366;

    t183 = (x733==(x734==(x735==x736)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = 1951429900168LLU;
	volatile int32_t x740 = INT32_MIN;
	static int32_t t184 = -1458190;

    t184 = (x737==(x738==(x739==x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x741 = UINT64_MAX;
	int64_t x742 = INT64_MIN;
	int8_t x743 = INT8_MAX;
	int32_t x744 = INT32_MAX;

    t185 = (x741==(x742==(x743==x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int8_t x746 = INT8_MIN;
	uint16_t x748 = 3U;
	int32_t t186 = 77456406;

    t186 = (x745==(x746==(x747==x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x750 = 682U;
	static volatile int16_t x752 = -1;
	int32_t t187 = 6333;

    t187 = (x749==(x750==(x751==x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = INT64_MAX;
	int8_t x754 = INT8_MIN;
	int32_t x755 = -978337511;
	int8_t x756 = INT8_MAX;

    t188 = (x753==(x754==(x755==x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = UINT32_MAX;
	int32_t x758 = 72343;
	uint8_t x759 = 2U;
	volatile int32_t t189 = 76;

    t189 = (x757==(x758==(x759==x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x762 = -7;
	volatile uint16_t x763 = 34U;
	int32_t x764 = INT32_MAX;

    t190 = (x761==(x762==(x763==x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int64_t x765 = -1LL;
	static volatile int64_t x766 = INT64_MIN;
	uint32_t x768 = 20266U;
	int32_t t191 = 50525;

    t191 = (x765==(x766==(x767==x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x769 = 0U;
	uint32_t x770 = UINT32_MAX;
	int16_t x771 = INT16_MIN;
	int16_t x772 = INT16_MIN;
	volatile int32_t t192 = -13063;

    t192 = (x769==(x770==(x771==x772)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = -1;
	volatile uint8_t x774 = UINT8_MAX;
	uint64_t x775 = 0LLU;

    t193 = (x773==(x774==(x775==x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x777 = -59;
	int64_t x778 = -751LL;
	uint64_t x780 = UINT64_MAX;
	int32_t t194 = 26;

    t194 = (x777==(x778==(x779==x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x781 = -1LL;
	volatile uint64_t x782 = UINT64_MAX;
	int64_t x783 = INT64_MIN;
	volatile int32_t t195 = -90018060;

    t195 = (x781==(x782==(x783==x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x785 = 822U;
	uint8_t x786 = UINT8_MAX;
	int8_t x787 = INT8_MIN;
	int8_t x788 = INT8_MAX;
	int32_t t196 = 13;

    t196 = (x785==(x786==(x787==x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -6357857551195LL;
	int16_t x790 = 16;
	int16_t x791 = INT16_MIN;
	volatile uint32_t x792 = 17267101U;
	static int32_t t197 = 203;

    t197 = (x789==(x790==(x791==x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x795 = -1;
	static int8_t x796 = INT8_MIN;
	volatile int32_t t198 = -817;

    t198 = (x793==(x794==(x795==x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x797 = -3;
	int8_t x798 = -1;
	int64_t x799 = INT64_MIN;
	uint16_t x800 = UINT16_MAX;
	int32_t t199 = -83332;

    t199 = (x797==(x798==(x799==x800)));

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

