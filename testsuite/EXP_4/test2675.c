
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

static int16_t x1 = INT16_MAX;
volatile int64_t x12 = -1LL;
int16_t x13 = -5766;
static int32_t x14 = INT32_MIN;
int8_t x15 = -1;
int8_t x16 = -5;
uint32_t x24 = 2107532344U;
int8_t x27 = -1;
int32_t x30 = 2;
static int16_t x31 = -3359;
static int8_t x35 = -1;
volatile int16_t x36 = INT16_MIN;
static int8_t x40 = -5;
int8_t x42 = INT8_MIN;
int32_t x48 = -25484;
uint32_t x51 = 49590U;
volatile int64_t t12 = -225570583076162943LL;
static int16_t x55 = INT16_MAX;
static int8_t x58 = 6;
int8_t x59 = -1;
int8_t x65 = INT8_MIN;
static volatile int8_t x68 = 21;
uint32_t x69 = UINT32_MAX;
uint8_t x74 = 3U;
uint8_t x83 = 0U;
int64_t x86 = -1LL;
int64_t x91 = INT64_MIN;
uint8_t x93 = 1U;
volatile int32_t x94 = 0;
int8_t x95 = -1;
volatile int16_t x98 = -1;
int8_t x99 = -1;
int64_t x103 = 35887085543LL;
volatile int32_t x104 = INT32_MAX;
static int8_t x111 = -1;
volatile int32_t x114 = INT32_MAX;
uint32_t x120 = 10526040U;
volatile int8_t x127 = -6;
int8_t x135 = INT8_MAX;
static uint8_t x140 = 5U;
volatile uint64_t t35 = 1LLU;
uint32_t x149 = 137510826U;
volatile int32_t t37 = -100393;
int8_t x165 = -8;
int8_t x172 = -4;
int8_t x173 = -11;
uint32_t x177 = 8U;
int32_t t46 = 468751;
uint8_t x194 = UINT8_MAX;
int32_t x195 = INT32_MIN;
static int8_t x196 = 25;
uint8_t x206 = UINT8_MAX;
int32_t t51 = -5042136;
uint64_t x220 = UINT64_MAX;
int32_t t53 = -15621760;
int64_t x223 = 4127019129020366LL;
uint64_t t54 = 633979215774LLU;
static int16_t x232 = INT16_MIN;
int16_t x233 = -66;
int32_t t57 = -1451;
static volatile uint64_t t58 = 3LLU;
static int16_t x247 = 1;
volatile uint64_t t60 = 7LLU;
uint32_t x255 = 15455613U;
static int8_t x259 = INT8_MIN;
int32_t x262 = -311018628;
int8_t x263 = INT8_MIN;
static uint32_t t64 = 36628386U;
uint16_t x266 = 18866U;
uint8_t x269 = 27U;
int8_t x284 = 0;
uint32_t x286 = UINT32_MAX;
int8_t x304 = INT8_MAX;
int64_t t75 = 23180846729LL;
uint16_t x309 = 2629U;
int16_t x314 = INT16_MIN;
volatile int16_t x317 = -1;
int8_t x321 = INT8_MIN;
static int64_t x329 = INT64_MIN;
static volatile uint64_t x340 = 30469305148885970LLU;
volatile int8_t x345 = INT8_MIN;
volatile int16_t x353 = -1;
volatile int8_t x368 = INT8_MIN;
static uint16_t x369 = 4303U;
volatile int32_t t92 = -1293;
int64_t t93 = -3512937870902474LL;
static uint8_t x381 = 0U;
volatile int8_t x382 = 18;
uint8_t x385 = 12U;
volatile uint64_t x393 = 1094525LLU;
volatile int64_t t99 = -10LL;
int16_t x407 = -1;
int64_t x414 = -153328594LL;
volatile int16_t x417 = INT16_MIN;
static int16_t x420 = INT16_MIN;
int32_t t103 = 182;
int64_t x429 = -4827725861636571LL;
int16_t x430 = INT16_MAX;
static uint64_t x431 = 544034906204LLU;
volatile int32_t t108 = 106;
int8_t x441 = -1;
static int16_t x442 = INT16_MIN;
int8_t x446 = INT8_MIN;
volatile int32_t t110 = 4839201;
static int16_t x455 = INT16_MAX;
int64_t x461 = -1LL;
volatile uint64_t x464 = UINT64_MAX;
static int64_t x470 = INT64_MIN;
static volatile int32_t t117 = 20;
static int32_t x487 = 9565078;
int32_t x491 = -20;
int8_t x496 = INT8_MAX;
int16_t x503 = INT16_MAX;
static int64_t x506 = INT64_MIN;
volatile uint64_t x510 = 1900416215LLU;
int8_t x515 = INT8_MAX;
int32_t x516 = INT32_MIN;
int64_t x517 = -954302LL;
uint32_t x520 = 917534387U;
volatile uint32_t x521 = UINT32_MAX;
int8_t x527 = INT8_MIN;
uint32_t x541 = 57U;
int16_t x542 = INT16_MIN;
uint64_t x543 = 232343LLU;
int64_t x555 = INT64_MAX;
static int32_t t137 = 831251;
int16_t x559 = INT16_MIN;
int64_t x560 = -1LL;
uint32_t x570 = UINT32_MAX;
volatile uint16_t x575 = 1496U;
volatile uint64_t x588 = UINT64_MAX;
volatile int64_t x589 = INT64_MIN;
int16_t x594 = INT16_MAX;
uint8_t x595 = UINT8_MAX;
static int32_t t146 = -3;
static int32_t x600 = INT32_MAX;
uint16_t x602 = 2617U;
int16_t x610 = 1;
uint8_t x615 = 10U;
volatile int32_t t151 = -11267;
uint8_t x622 = 12U;
static int64_t x631 = INT64_MAX;
static uint32_t x632 = 32U;
int64_t x633 = 140550781785317LL;
int64_t x634 = -1LL;
uint8_t x637 = 1U;
uint8_t x647 = UINT8_MAX;
static volatile uint64_t t158 = 120960767243468LLU;
volatile uint64_t x651 = 6LLU;
volatile int32_t t159 = -434;
int64_t t160 = INT64_MIN;
volatile int32_t x657 = INT32_MIN;
static int8_t x670 = INT8_MIN;
int16_t x671 = -8;
int8_t x678 = -1;
int32_t x684 = 551427;
int16_t x690 = 19;
volatile int32_t t171 = -2;
int32_t x708 = -14;
uint8_t x712 = 95U;
volatile int32_t t173 = 604;
uint16_t x713 = UINT16_MAX;
int8_t x721 = INT8_MIN;
volatile int32_t t176 = -426478;
uint64_t x725 = 126018894118866334LLU;
volatile int16_t x730 = 122;
int32_t x734 = INT32_MIN;
static int8_t x738 = INT8_MIN;
int32_t x745 = INT32_MAX;
int8_t x746 = -1;
int64_t x759 = INT64_MIN;
int32_t t185 = 172686;
int32_t t186 = 659764787;
int16_t x765 = INT16_MIN;
int8_t x774 = INT8_MAX;
static int8_t x782 = INT8_MIN;
uint32_t t191 = 215819339U;
int16_t x787 = INT16_MIN;
volatile int64_t t192 = -444909333LL;
volatile int32_t t194 = 3480;
uint64_t x797 = UINT64_MAX;
int16_t x798 = -1;
uint32_t x799 = 140947U;
int64_t x809 = -4206601500428688741LL;
volatile uint8_t x810 = 7U;
volatile uint32_t x820 = 6463467U;


void f0(void) {
    	volatile uint8_t x2 = 4U;
	int8_t x3 = INT8_MIN;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = -1;

    t0 = (x1+(x2<=(x3^x4)));

    if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = -1;
	int16_t x6 = -1;
	static uint64_t x7 = 129691LLU;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -188;

    t1 = (x5+(x6<=(x7^x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -13;
	int16_t x10 = -1;
	int64_t x11 = INT64_MIN;
	int32_t t2 = -23970;

    t2 = (x9+(x10<=(x11^x12)));

    if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t t3 = 1;

    t3 = (x13+(x14<=(x15^x16)));

    if (t3 != -5765) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	static int8_t x18 = INT8_MIN;
	static uint16_t x19 = UINT16_MAX;
	uint16_t x20 = 231U;
	int32_t t4 = -212;

    t4 = (x17+(x18<=(x19^x20)));

    if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = UINT64_MAX;
	int32_t x22 = INT32_MAX;
	uint16_t x23 = 5U;
	uint64_t t5 = UINT64_MAX;

    t5 = (x21+(x22<=(x23^x24)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x25 = INT8_MIN;
	uint64_t x26 = 59523LLU;
	int16_t x28 = -1;
	int32_t t6 = 22;

    t6 = (x25+(x26<=(x27^x28)));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x29 = INT32_MIN;
	uint32_t x32 = 0U;
	volatile int32_t t7 = 1;

    t7 = (x29+(x30<=(x31^x32)));

    if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MAX;
	int32_t x34 = 2;
	volatile int32_t t8 = 92745078;

    t8 = (x33+(x34<=(x35^x36)));

    if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = 486LL;
	uint8_t x38 = 72U;
	int32_t x39 = INT32_MIN;
	int64_t t9 = 938962368517884LL;

    t9 = (x37+(x38<=(x39^x40)));

    if (t9 != 487LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -594043;
	int64_t x43 = INT64_MIN;
	int32_t x44 = -1;
	int32_t t10 = 6;

    t10 = (x41+(x42<=(x43^x44)));

    if (t10 != -594042) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 58526586;
	int32_t x46 = 1775417;
	uint16_t x47 = 7U;
	volatile int32_t t11 = 6874413;

    t11 = (x45+(x46<=(x47^x48)));

    if (t11 != 58526586) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x49 = -1LL;
	volatile uint16_t x50 = 884U;
	static int16_t x52 = -1;

    t12 = (x49+(x50<=(x51^x52)));

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	int64_t x54 = INT64_MIN;
	static int16_t x56 = -1;
	volatile int64_t t13 = -327813559957029134LL;

    t13 = (x53+(x54<=(x55^x56)));

    if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint8_t x57 = 0U;
	volatile uint8_t x60 = 1U;
	volatile int32_t t14 = -263681600;

    t14 = (x57+(x58<=(x59^x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x66 = 0;
	int16_t x67 = INT16_MAX;
	volatile int32_t t15 = -34228;

    t15 = (x65+(x66<=(x67^x68)));

    if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint16_t x70 = 10308U;
	volatile uint32_t x71 = 261348U;
	static int8_t x72 = INT8_MIN;
	volatile uint32_t t16 = 970U;

    t16 = (x69+(x70<=(x71^x72)));

    if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x73 = -1;
	uint16_t x75 = 728U;
	uint16_t x76 = UINT16_MAX;
	static int32_t t17 = -757082;

    t17 = (x73+(x74<=(x75^x76)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = UINT32_MAX;
	static int64_t x78 = -1LL;
	static int32_t x79 = INT32_MIN;
	uint32_t x80 = 8U;
	uint32_t t18 = 35U;

    t18 = (x77+(x78<=(x79^x80)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = 139245792321899790LLU;
	uint16_t x82 = 0U;
	int8_t x84 = INT8_MAX;
	uint64_t t19 = 466913551431657303LLU;

    t19 = (x81+(x82<=(x83^x84)));

    if (t19 != 139245792321899791LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = INT64_MIN;
	static int64_t x87 = INT64_MIN;
	volatile uint32_t x88 = 3455U;
	int64_t t20 = INT64_MIN;

    t20 = (x85+(x86<=(x87^x88)));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MIN;
	uint32_t x92 = 400U;
	int32_t t21 = -118831110;

    t21 = (x89+(x90<=(x91^x92)));

    if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x96 = 13909770905895LLU;
	int32_t t22 = 1;

    t22 = (x93+(x94<=(x95^x96)));

    if (t22 != 2) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x97 = UINT8_MAX;
	volatile int8_t x100 = INT8_MAX;
	int32_t t23 = -12;

    t23 = (x97+(x98<=(x99^x100)));

    if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MAX;
	volatile int64_t t24 = -2695020741824802103LL;

    t24 = (x101+(x102<=(x103^x104)));

    if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	static int64_t x106 = INT64_MIN;
	volatile uint8_t x107 = UINT8_MAX;
	int8_t x108 = -1;
	static volatile int64_t t25 = -16286766889001582LL;

    t25 = (x105+(x106<=(x107^x108)));

    if (t25 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = 44;
	int8_t x110 = -38;
	int64_t x112 = 43LL;
	int32_t t26 = 8;

    t26 = (x109+(x110<=(x111^x112)));

    if (t26 != 44) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x113 = -1LL;
	int8_t x115 = -1;
	uint32_t x116 = 1417361U;
	volatile int64_t t27 = -5833939909696250LL;

    t27 = (x113+(x114<=(x115^x116)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x117 = 179;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile int32_t t28 = 1481;

    t28 = (x117+(x118<=(x119^x120)));

    if (t28 != 179) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x121 = INT32_MAX;
	int32_t x122 = 277430277;
	volatile int8_t x123 = -1;
	int16_t x124 = -1;
	static int32_t t29 = INT32_MAX;

    t29 = (x121+(x122<=(x123^x124)));

    if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x125 = INT32_MAX;
	uint16_t x126 = 4359U;
	static int32_t x128 = -1;
	volatile int32_t t30 = INT32_MAX;

    t30 = (x125+(x126<=(x127^x128)));

    if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x129 = 83U;
	uint16_t x130 = UINT16_MAX;
	uint64_t x131 = UINT64_MAX;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t31 = 63955;

    t31 = (x129+(x130<=(x131^x132)));

    if (t31 != 83) { NG(); } else { ; }
	
}

void f32(void) {
    	static int64_t x133 = 0LL;
	int64_t x134 = -113927799154706LL;
	static int64_t x136 = INT64_MIN;
	int64_t t32 = -11513411120LL;

    t32 = (x133+(x134<=(x135^x136)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x137 = -1;
	uint64_t x138 = 1093LLU;
	static volatile uint32_t x139 = 394U;
	volatile int32_t t33 = -3;

    t33 = (x137+(x138<=(x139^x140)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x141 = 31U;
	int32_t x142 = -9208;
	static uint16_t x143 = 234U;
	volatile int16_t x144 = INT16_MAX;
	int32_t t34 = -1;

    t34 = (x141+(x142<=(x143^x144)));

    if (t34 != 32) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x145 = 24786653571468LLU;
	static uint8_t x146 = 1U;
	static volatile int16_t x147 = INT16_MIN;
	static int32_t x148 = -16615;

    t35 = (x145+(x146<=(x147^x148)));

    if (t35 != 24786653571469LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x150 = INT8_MIN;
	int8_t x151 = 6;
	uint8_t x152 = 5U;
	uint32_t t36 = 11U;

    t36 = (x149+(x150<=(x151^x152)));

    if (t36 != 137510827U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x153 = -5247;
	int8_t x154 = INT8_MIN;
	int32_t x155 = 2821890;
	volatile int8_t x156 = INT8_MIN;

    t37 = (x153+(x154<=(x155^x156)));

    if (t37 != -5247) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = 15;
	volatile int64_t x158 = INT64_MIN;
	uint16_t x159 = UINT16_MAX;
	int64_t x160 = -1LL;
	int32_t t38 = 1;

    t38 = (x157+(x158<=(x159^x160)));

    if (t38 != 16) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = INT32_MIN;
	static int32_t x162 = INT32_MIN;
	volatile uint16_t x163 = 25899U;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 1;

    t39 = (x161+(x162<=(x163^x164)));

    if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x166 = 1U;
	uint16_t x167 = 13U;
	uint64_t x168 = 12580296206993425LLU;
	static int32_t t40 = -98;

    t40 = (x165+(x166<=(x167^x168)));

    if (t40 != -7) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x169 = -1;
	volatile int16_t x170 = 212;
	volatile int16_t x171 = INT16_MAX;
	volatile int32_t t41 = -432;

    t41 = (x169+(x170<=(x171^x172)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x174 = INT8_MIN;
	int32_t x175 = 226;
	static int64_t x176 = INT64_MAX;
	volatile int32_t t42 = -3485;

    t42 = (x173+(x174<=(x175^x176)));

    if (t42 != -10) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x178 = INT32_MIN;
	static int64_t x179 = INT64_MIN;
	static volatile int32_t x180 = INT32_MIN;
	uint32_t t43 = 1446264922U;

    t43 = (x177+(x178<=(x179^x180)));

    if (t43 != 9U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = INT8_MIN;
	uint32_t x182 = UINT32_MAX;
	volatile int16_t x183 = 1;
	static int64_t x184 = INT64_MIN;
	static volatile int32_t t44 = -520123021;

    t44 = (x181+(x182<=(x183^x184)));

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x185 = -2295372205LL;
	volatile int32_t x186 = INT32_MIN;
	int8_t x187 = -1;
	int8_t x188 = -13;
	volatile int64_t t45 = -1LL;

    t45 = (x185+(x186<=(x187^x188)));

    if (t45 != -2295372204LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x189 = -1;
	volatile int16_t x190 = -8439;
	volatile int64_t x191 = INT64_MAX;
	uint8_t x192 = 40U;

    t46 = (x189+(x190<=(x191^x192)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = 13205744LL;
	static int64_t t47 = -4392690LL;

    t47 = (x193+(x194<=(x195^x196)));

    if (t47 != 13205744LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint16_t x197 = UINT16_MAX;
	static volatile int16_t x198 = 12;
	int16_t x199 = INT16_MIN;
	volatile int16_t x200 = INT16_MIN;
	int32_t t48 = -1;

    t48 = (x197+(x198<=(x199^x200)));

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x201 = UINT8_MAX;
	int32_t x202 = INT32_MIN;
	int64_t x203 = -59657304356405LL;
	static uint16_t x204 = 8U;
	volatile int32_t t49 = 156609204;

    t49 = (x201+(x202<=(x203^x204)));

    if (t49 != 255) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x205 = UINT64_MAX;
	int64_t x207 = -4121377841155765115LL;
	volatile int64_t x208 = -1LL;
	uint64_t t50 = 33656519LLU;

    t50 = (x205+(x206<=(x207^x208)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int64_t x212 = INT64_MIN;

    t51 = (x209+(x210<=(x211^x212)));

    if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x213 = INT32_MAX;
	int32_t x214 = -1;
	static volatile uint8_t x215 = 15U;
	int64_t x216 = INT64_MIN;
	static volatile int32_t t52 = INT32_MAX;

    t52 = (x213+(x214<=(x215^x216)));

    if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x217 = INT8_MIN;
	volatile int32_t x218 = -248861730;
	static uint32_t x219 = 205972U;

    t53 = (x217+(x218<=(x219^x220)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint64_t x221 = 54571952481630434LLU;
	int32_t x222 = INT32_MAX;
	uint8_t x224 = UINT8_MAX;

    t54 = (x221+(x222<=(x223^x224)));

    if (t54 != 54571952481630435LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int16_t x225 = -10;
	int16_t x226 = -1;
	volatile int32_t x227 = -1;
	int32_t x228 = -1;
	static int32_t t55 = -251;

    t55 = (x225+(x226<=(x227^x228)));

    if (t55 != -9) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -1;
	volatile int64_t x230 = 3953372583009011197LL;
	int16_t x231 = 0;
	int32_t t56 = 248259266;

    t56 = (x229+(x230<=(x231^x232)));

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x234 = -48968111LL;
	int32_t x235 = 67188;
	int64_t x236 = INT64_MAX;

    t57 = (x233+(x234<=(x235^x236)));

    if (t57 != -65) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x237 = 13216LLU;
	uint8_t x238 = 5U;
	static uint32_t x239 = 581855728U;
	uint8_t x240 = 97U;

    t58 = (x237+(x238<=(x239^x240)));

    if (t58 != 13217LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = 0U;
	volatile uint8_t x243 = 5U;
	static volatile int64_t x244 = 1919035433145972236LL;
	volatile int32_t t59 = 1;

    t59 = (x241+(x242<=(x243^x244)));

    if (t59 != 65536) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x245 = 7599978151203426LLU;
	uint32_t x246 = 2304138U;
	uint64_t x248 = 3766704599666LLU;

    t60 = (x245+(x246<=(x247^x248)));

    if (t60 != 7599978151203427LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x249 = -25;
	uint64_t x250 = UINT64_MAX;
	int64_t x251 = 2104462151395484349LL;
	uint64_t x252 = 6922870883943110800LLU;
	static int32_t t61 = 3664699;

    t61 = (x249+(x250<=(x251^x252)));

    if (t61 != -25) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x253 = 24U;
	int32_t x254 = -6120822;
	int64_t x256 = INT64_MAX;
	int32_t t62 = 775;

    t62 = (x253+(x254<=(x255^x256)));

    if (t62 != 25) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MAX;
	int32_t x260 = -1;
	static uint32_t t63 = UINT32_MAX;

    t63 = (x257+(x258<=(x259^x260)));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x261 = UINT32_MAX;
	int8_t x264 = INT8_MIN;

    t64 = (x261+(x262<=(x263^x264)));

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x265 = 11066LLU;
	static int8_t x267 = INT8_MIN;
	static int8_t x268 = -9;
	volatile uint64_t t65 = 880LLU;

    t65 = (x265+(x266<=(x267^x268)));

    if (t65 != 11066LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x270 = INT32_MIN;
	volatile int16_t x271 = 876;
	volatile int32_t x272 = 973;
	int32_t t66 = -156;

    t66 = (x269+(x270<=(x271^x272)));

    if (t66 != 28) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x273 = INT64_MIN;
	volatile int64_t x274 = INT64_MIN;
	volatile int16_t x275 = INT16_MIN;
	static uint8_t x276 = 42U;
	int64_t t67 = 447806089LL;

    t67 = (x273+(x274<=(x275^x276)));

    if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x277 = 123U;
	int16_t x278 = -1;
	static uint8_t x279 = 3U;
	static int64_t x280 = -1LL;
	static volatile int32_t t68 = 31470240;

    t68 = (x277+(x278<=(x279^x280)));

    if (t68 != 123) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x281 = 768LL;
	static int32_t x282 = -1;
	int32_t x283 = INT32_MIN;
	int64_t t69 = 223748726174791LL;

    t69 = (x281+(x282<=(x283^x284)));

    if (t69 != 768LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x285 = 459940;
	int64_t x287 = 1018LL;
	static volatile uint16_t x288 = 741U;
	int32_t t70 = 61;

    t70 = (x285+(x286<=(x287^x288)));

    if (t70 != 459940) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x289 = 0;
	uint32_t x290 = 16563905U;
	int8_t x291 = INT8_MIN;
	static int32_t x292 = 62260;
	int32_t t71 = 2396;

    t71 = (x289+(x290<=(x291^x292)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x293 = 7U;
	static int16_t x294 = INT16_MAX;
	uint64_t x295 = UINT64_MAX;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t72 = -20911;

    t72 = (x293+(x294<=(x295^x296)));

    if (t72 != 8) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x297 = 463722318;
	int8_t x298 = -1;
	int64_t x299 = -1756559693813258639LL;
	uint16_t x300 = 2434U;
	volatile int32_t t73 = 112550;

    t73 = (x297+(x298<=(x299^x300)));

    if (t73 != 463722318) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	static volatile int16_t x303 = INT16_MAX;
	int32_t t74 = 173283838;

    t74 = (x301+(x302<=(x303^x304)));

    if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = -1LL;
	static int32_t x306 = -1;
	int16_t x307 = -1;
	static int16_t x308 = -1;

    t75 = (x305+(x306<=(x307^x308)));

    if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x310 = 158144;
	static volatile uint16_t x311 = 0U;
	uint16_t x312 = 2U;
	volatile int32_t t76 = -499916196;

    t76 = (x309+(x310<=(x311^x312)));

    if (t76 != 2629) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x313 = -1;
	volatile int8_t x315 = -1;
	static uint32_t x316 = 570681U;
	int32_t t77 = -205450972;

    t77 = (x313+(x314<=(x315^x316)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x318 = INT64_MIN;
	volatile int64_t x319 = 1696LL;
	uint8_t x320 = 2U;
	int32_t t78 = 41;

    t78 = (x317+(x318<=(x319^x320)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x322 = INT32_MIN;
	int8_t x323 = -1;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t79 = -3972;

    t79 = (x321+(x322<=(x323^x324)));

    if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int16_t x325 = INT16_MIN;
	int8_t x326 = -1;
	volatile int16_t x327 = -1;
	int64_t x328 = -1LL;
	volatile int32_t t80 = 238464;

    t80 = (x325+(x326<=(x327^x328)));

    if (t80 != -32767) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x330 = 20311828U;
	uint16_t x331 = 0U;
	int8_t x332 = INT8_MIN;
	volatile int64_t t81 = 1233603LL;

    t81 = (x329+(x330<=(x331^x332)));

    if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x333 = -1LL;
	int64_t x334 = 222558395653714LL;
	volatile int64_t x335 = -1LL;
	static volatile int8_t x336 = INT8_MAX;
	static volatile int64_t t82 = -895865762LL;

    t82 = (x333+(x334<=(x335^x336)));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x337 = 1U;
	int16_t x338 = 3;
	volatile uint8_t x339 = 44U;
	static int32_t t83 = 64380100;

    t83 = (x337+(x338<=(x339^x340)));

    if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x341 = 39239118119LLU;
	int32_t x342 = -1;
	int64_t x343 = -6118063931596LL;
	int32_t x344 = INT32_MAX;
	static uint64_t t84 = 44067LLU;

    t84 = (x341+(x342<=(x343^x344)));

    if (t84 != 39239118119LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x346 = 374436900319340LLU;
	int32_t x347 = -5;
	static int8_t x348 = 1;
	int32_t t85 = -22;

    t85 = (x345+(x346<=(x347^x348)));

    if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x349 = 12;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	volatile uint64_t x352 = 16417477217520LLU;
	int32_t t86 = -5139;

    t86 = (x349+(x350<=(x351^x352)));

    if (t86 != 12) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x354 = INT64_MIN;
	uint8_t x355 = 91U;
	int32_t x356 = INT32_MIN;
	volatile int32_t t87 = -2839553;

    t87 = (x353+(x354<=(x355^x356)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = INT32_MIN;
	volatile uint64_t x359 = 389621698009880LLU;
	uint8_t x360 = 102U;
	int32_t t88 = -18154745;

    t88 = (x357+(x358<=(x359^x360)));

    if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x361 = UINT8_MAX;
	int8_t x362 = -48;
	int16_t x363 = 105;
	int16_t x364 = INT16_MIN;
	volatile int32_t t89 = 24;

    t89 = (x361+(x362<=(x363^x364)));

    if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x365 = 88U;
	uint32_t x366 = 6U;
	int64_t x367 = INT64_MIN;
	volatile int32_t t90 = -359684310;

    t90 = (x365+(x366<=(x367^x368)));

    if (t90 != 89) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x370 = 13U;
	int8_t x371 = INT8_MAX;
	static int64_t x372 = -516LL;
	volatile int32_t t91 = 129;

    t91 = (x369+(x370<=(x371^x372)));

    if (t91 != 4303) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x373 = -3;
	static uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MAX;
	volatile uint16_t x376 = 21U;

    t92 = (x373+(x374<=(x375^x376)));

    if (t92 != -3) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x377 = -13LL;
	volatile int64_t x378 = 6327706551719751LL;
	static volatile uint64_t x379 = 138828563920338944LLU;
	volatile int16_t x380 = -1;

    t93 = (x377+(x378<=(x379^x380)));

    if (t93 != -12LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x383 = -1;
	int64_t x384 = INT64_MIN;
	volatile int32_t t94 = 13;

    t94 = (x381+(x382<=(x383^x384)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x386 = -1LL;
	int16_t x387 = INT16_MAX;
	int8_t x388 = -1;
	volatile int32_t t95 = 24;

    t95 = (x385+(x386<=(x387^x388)));

    if (t95 != 12) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x389 = 6U;
	static int32_t x390 = INT32_MAX;
	uint16_t x391 = UINT16_MAX;
	int64_t x392 = -1LL;
	volatile int32_t t96 = -2816751;

    t96 = (x389+(x390<=(x391^x392)));

    if (t96 != 6) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x394 = INT16_MIN;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MAX;
	uint64_t t97 = 839423LLU;

    t97 = (x393+(x394<=(x395^x396)));

    if (t97 != 1094526LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x397 = UINT16_MAX;
	int8_t x398 = -1;
	int16_t x399 = 407;
	static int16_t x400 = -1;
	static int32_t t98 = 307132;

    t98 = (x397+(x398<=(x399^x400)));

    if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x401 = -1LL;
	int8_t x402 = INT8_MIN;
	volatile uint32_t x403 = UINT32_MAX;
	volatile uint8_t x404 = UINT8_MAX;

    t99 = (x401+(x402<=(x403^x404)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x405 = 3U;
	int16_t x406 = 327;
	uint64_t x408 = 234604873432724666LLU;
	int32_t t100 = 1;

    t100 = (x405+(x406<=(x407^x408)));

    if (t100 != 4) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x409 = UINT16_MAX;
	int32_t x410 = -1;
	static int16_t x411 = INT16_MAX;
	uint8_t x412 = 82U;
	volatile int32_t t101 = 156398;

    t101 = (x409+(x410<=(x411^x412)));

    if (t101 != 65536) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x413 = INT32_MIN;
	int64_t x415 = -2061639953716108193LL;
	uint64_t x416 = 211251658LLU;
	int32_t t102 = INT32_MIN;

    t102 = (x413+(x414<=(x415^x416)));

    if (t102 != INT32_MIN) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x418 = INT8_MIN;
	volatile uint64_t x419 = 59658427620277LLU;

    t103 = (x417+(x418<=(x419^x420)));

    if (t103 != -32768) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x421 = 1U;
	volatile uint16_t x422 = 6357U;
	volatile uint32_t x423 = 8838506U;
	volatile int32_t x424 = -1039991015;
	static volatile int32_t t104 = 170322;

    t104 = (x421+(x422<=(x423^x424)));

    if (t104 != 2) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x425 = 6795;
	int8_t x426 = -48;
	int16_t x427 = INT16_MAX;
	int64_t x428 = 1743237759737795049LL;
	volatile int32_t t105 = 12403;

    t105 = (x425+(x426<=(x427^x428)));

    if (t105 != 6796) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x432 = UINT16_MAX;
	int64_t t106 = -2LL;

    t106 = (x429+(x430<=(x431^x432)));

    if (t106 != -4827725861636570LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint8_t x433 = 6U;
	int16_t x434 = INT16_MAX;
	uint16_t x435 = UINT16_MAX;
	int16_t x436 = INT16_MIN;
	volatile int32_t t107 = 37;

    t107 = (x433+(x434<=(x435^x436)));

    if (t107 != 6) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x437 = 56U;
	static int32_t x438 = INT32_MIN;
	uint32_t x439 = UINT32_MAX;
	int32_t x440 = 25713;

    t108 = (x437+(x438<=(x439^x440)));

    if (t108 != 57) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x443 = -1;
	uint32_t x444 = 24313U;
	volatile int32_t t109 = 2238894;

    t109 = (x441+(x442<=(x443^x444)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x445 = 0;
	static int8_t x447 = -56;
	int8_t x448 = -9;

    t110 = (x445+(x446<=(x447^x448)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x449 = INT16_MIN;
	int64_t x450 = INT64_MAX;
	int64_t x451 = -1LL;
	static int64_t x452 = 94444112588LL;
	int32_t t111 = 1;

    t111 = (x449+(x450<=(x451^x452)));

    if (t111 != -32768) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x453 = UINT16_MAX;
	uint16_t x454 = 6U;
	volatile int16_t x456 = -18;
	volatile int32_t t112 = -32580;

    t112 = (x453+(x454<=(x455^x456)));

    if (t112 != 65535) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x457 = INT16_MIN;
	int8_t x458 = 27;
	int64_t x459 = -1LL;
	uint8_t x460 = 0U;
	int32_t t113 = -14471;

    t113 = (x457+(x458<=(x459^x460)));

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x462 = INT8_MAX;
	int8_t x463 = INT8_MIN;
	static volatile int64_t t114 = 1198LL;

    t114 = (x461+(x462<=(x463^x464)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x465 = -19;
	int32_t x466 = -158;
	int64_t x467 = -87634250728LL;
	uint16_t x468 = UINT16_MAX;
	volatile int32_t t115 = 5;

    t115 = (x465+(x466<=(x467^x468)));

    if (t115 != -19) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint64_t x469 = 50007LLU;
	volatile uint32_t x471 = UINT32_MAX;
	volatile int16_t x472 = -925;
	uint64_t t116 = 1243LLU;

    t116 = (x469+(x470<=(x471^x472)));

    if (t116 != 50008LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x473 = UINT8_MAX;
	uint16_t x474 = 276U;
	static uint8_t x475 = 18U;
	int64_t x476 = INT64_MIN;

    t117 = (x473+(x474<=(x475^x476)));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x477 = INT8_MIN;
	static volatile int64_t x478 = 266658651497976460LL;
	int8_t x479 = -1;
	volatile uint16_t x480 = UINT16_MAX;
	static volatile int32_t t118 = 159288;

    t118 = (x477+(x478<=(x479^x480)));

    if (t118 != -128) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x481 = INT16_MIN;
	uint8_t x482 = 0U;
	volatile int16_t x483 = INT16_MIN;
	static volatile uint32_t x484 = UINT32_MAX;
	volatile int32_t t119 = -6925238;

    t119 = (x481+(x482<=(x483^x484)));

    if (t119 != -32767) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x485 = 1;
	volatile uint64_t x486 = UINT64_MAX;
	static int32_t x488 = -1;
	int32_t t120 = 0;

    t120 = (x485+(x486<=(x487^x488)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x489 = INT64_MAX;
	volatile int32_t x490 = INT32_MAX;
	uint8_t x492 = 11U;
	int64_t t121 = INT64_MAX;

    t121 = (x489+(x490<=(x491^x492)));

    if (t121 != INT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x493 = 514U;
	int64_t x494 = -1LL;
	int64_t x495 = 724LL;
	volatile uint32_t t122 = 135679U;

    t122 = (x493+(x494<=(x495^x496)));

    if (t122 != 515U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x497 = 4U;
	int16_t x498 = -1099;
	uint16_t x499 = 29U;
	uint64_t x500 = 317847911LLU;
	volatile int32_t t123 = -5;

    t123 = (x497+(x498<=(x499^x500)));

    if (t123 != 4) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x501 = -668;
	int8_t x502 = INT8_MIN;
	uint32_t x504 = 820U;
	static int32_t t124 = -1;

    t124 = (x501+(x502<=(x503^x504)));

    if (t124 != -668) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x505 = 35U;
	int32_t x507 = 17509;
	int64_t x508 = -1LL;
	int32_t t125 = 340;

    t125 = (x505+(x506<=(x507^x508)));

    if (t125 != 36) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x509 = 1731U;
	uint32_t x511 = 23U;
	volatile int64_t x512 = INT64_MAX;
	volatile int32_t t126 = 368336;

    t126 = (x509+(x510<=(x511^x512)));

    if (t126 != 1732) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x513 = -12;
	int64_t x514 = -176024565248711LL;
	int32_t t127 = 730155;

    t127 = (x513+(x514<=(x515^x516)));

    if (t127 != -11) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x518 = UINT32_MAX;
	volatile int8_t x519 = INT8_MIN;
	volatile int64_t t128 = 2097467341550595LL;

    t128 = (x517+(x518<=(x519^x520)));

    if (t128 != -954302LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x522 = 2393648084LL;
	uint16_t x523 = UINT16_MAX;
	int64_t x524 = INT64_MIN;
	uint32_t t129 = UINT32_MAX;

    t129 = (x521+(x522<=(x523^x524)));

    if (t129 != UINT32_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x525 = INT8_MAX;
	int32_t x526 = INT32_MAX;
	int8_t x528 = -1;
	volatile int32_t t130 = -27637;

    t130 = (x525+(x526<=(x527^x528)));

    if (t130 != 127) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x529 = 1893U;
	volatile int64_t x530 = INT64_MIN;
	int64_t x531 = -1LL;
	uint64_t x532 = 7582121012102798970LLU;
	int32_t t131 = 3;

    t131 = (x529+(x530<=(x531^x532)));

    if (t131 != 1894) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x533 = 1;
	uint16_t x534 = 10231U;
	int32_t x535 = 0;
	int32_t x536 = -1;
	int32_t t132 = 70;

    t132 = (x533+(x534<=(x535^x536)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x537 = INT32_MIN;
	static uint16_t x538 = UINT16_MAX;
	static int8_t x539 = -3;
	uint16_t x540 = 1060U;
	static volatile int32_t t133 = INT32_MIN;

    t133 = (x537+(x538<=(x539^x540)));

    if (t133 != INT32_MIN) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x544 = 52U;
	static uint32_t t134 = 24245639U;

    t134 = (x541+(x542<=(x543^x544)));

    if (t134 != 57U) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x545 = 409U;
	static volatile int32_t x546 = -1;
	int64_t x547 = INT64_MAX;
	int16_t x548 = -4;
	uint32_t t135 = 5U;

    t135 = (x545+(x546<=(x547^x548)));

    if (t135 != 409U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x549 = INT8_MAX;
	uint64_t x550 = UINT64_MAX;
	int32_t x551 = 1;
	uint16_t x552 = UINT16_MAX;
	volatile int32_t t136 = 254660;

    t136 = (x549+(x550<=(x551^x552)));

    if (t136 != 127) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x553 = 1;
	static int16_t x554 = INT16_MIN;
	uint64_t x556 = 31341655832098LLU;

    t137 = (x553+(x554<=(x555^x556)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x557 = 351657138U;
	static int32_t x558 = INT32_MAX;
	static uint32_t t138 = 10116U;

    t138 = (x557+(x558<=(x559^x560)));

    if (t138 != 351657138U) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x565 = INT32_MIN;
	volatile int16_t x566 = -31;
	static int8_t x567 = 29;
	int8_t x568 = INT8_MIN;
	static volatile int32_t t139 = INT32_MIN;

    t139 = (x565+(x566<=(x567^x568)));

    if (t139 != INT32_MIN) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint16_t x569 = 3891U;
	int64_t x571 = INT64_MAX;
	static int32_t x572 = INT32_MAX;
	int32_t t140 = -230227;

    t140 = (x569+(x570<=(x571^x572)));

    if (t140 != 3892) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x573 = 58U;
	static int16_t x574 = -1;
	int16_t x576 = -9208;
	static volatile int32_t t141 = 92834242;

    t141 = (x573+(x574<=(x575^x576)));

    if (t141 != 58) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x577 = INT64_MIN;
	int64_t x578 = -20868641187LL;
	int8_t x579 = INT8_MIN;
	uint32_t x580 = 1948799875U;
	int64_t t142 = -2479472029018LL;

    t142 = (x577+(x578<=(x579^x580)));

    if (t142 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x581 = INT32_MIN;
	static int16_t x582 = INT16_MIN;
	volatile int64_t x583 = INT64_MIN;
	int8_t x584 = INT8_MAX;
	volatile int32_t t143 = INT32_MIN;

    t143 = (x581+(x582<=(x583^x584)));

    if (t143 != INT32_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x585 = UINT64_MAX;
	static int64_t x586 = INT64_MAX;
	static uint64_t x587 = UINT64_MAX;
	static volatile uint64_t t144 = UINT64_MAX;

    t144 = (x585+(x586<=(x587^x588)));

    if (t144 != UINT64_MAX) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x590 = 1855275U;
	volatile uint64_t x591 = 191758184113778621LLU;
	uint32_t x592 = 2385193U;
	static volatile int64_t t145 = 6336191079465503LL;

    t145 = (x589+(x590<=(x591^x592)));

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x593 = 1U;
	int16_t x596 = -536;

    t146 = (x593+(x594<=(x595^x596)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x597 = INT8_MAX;
	int8_t x598 = -1;
	int32_t x599 = INT32_MAX;
	volatile int32_t t147 = -4247082;

    t147 = (x597+(x598<=(x599^x600)));

    if (t147 != 128) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x601 = 45U;
	uint64_t x603 = 433183368294978LLU;
	int32_t x604 = INT32_MAX;
	static int32_t t148 = -42524730;

    t148 = (x601+(x602<=(x603^x604)));

    if (t148 != 46) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x605 = UINT8_MAX;
	int16_t x606 = -15;
	int8_t x607 = INT8_MIN;
	uint32_t x608 = 323U;
	volatile int32_t t149 = -663027;

    t149 = (x605+(x606<=(x607^x608)));

    if (t149 != 255) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x609 = INT32_MIN;
	static volatile int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MAX;
	int32_t t150 = INT32_MIN;

    t150 = (x609+(x610<=(x611^x612)));

    if (t150 != INT32_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x613 = 5U;
	int32_t x614 = INT32_MIN;
	static int16_t x616 = INT16_MIN;

    t151 = (x613+(x614<=(x615^x616)));

    if (t151 != 6) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x621 = 0;
	int8_t x623 = INT8_MIN;
	static int64_t x624 = INT64_MAX;
	volatile int32_t t152 = -1;

    t152 = (x621+(x622<=(x623^x624)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x625 = -1;
	int64_t x626 = INT64_MIN;
	volatile int32_t x627 = 112350893;
	volatile uint64_t x628 = 9122640783860LLU;
	int32_t t153 = 27;

    t153 = (x625+(x626<=(x627^x628)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x629 = -1;
	int64_t x630 = 3637763363LL;
	volatile int32_t t154 = -42901650;

    t154 = (x629+(x630<=(x631^x632)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x635 = 50607332;
	uint64_t x636 = 42259371359LLU;
	volatile int64_t t155 = -14826LL;

    t155 = (x633+(x634<=(x635^x636)));

    if (t155 != 140550781785317LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x638 = -1;
	int32_t x639 = INT32_MIN;
	volatile int64_t x640 = 13LL;
	volatile int32_t t156 = -1479;

    t156 = (x637+(x638<=(x639^x640)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x641 = 742270645U;
	int8_t x642 = INT8_MIN;
	int16_t x643 = -490;
	int8_t x644 = INT8_MIN;
	volatile uint32_t t157 = 1796U;

    t157 = (x641+(x642<=(x643^x644)));

    if (t157 != 742270646U) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x645 = 364940111930927069LLU;
	int32_t x646 = INT32_MIN;
	volatile uint16_t x648 = UINT16_MAX;

    t158 = (x645+(x646<=(x647^x648)));

    if (t158 != 364940111930927070LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x649 = INT16_MIN;
	int64_t x650 = -1LL;
	int64_t x652 = INT64_MIN;

    t159 = (x649+(x650<=(x651^x652)));

    if (t159 != -32768) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int64_t x653 = INT64_MIN;
	int8_t x654 = -17;
	uint16_t x655 = 183U;
	int16_t x656 = -1;

    t160 = (x653+(x654<=(x655^x656)));

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x658 = -31271;
	uint32_t x659 = 1U;
	uint8_t x660 = 0U;
	volatile int32_t t161 = INT32_MIN;

    t161 = (x657+(x658<=(x659^x660)));

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x661 = 14U;
	int8_t x662 = INT8_MIN;
	uint8_t x663 = UINT8_MAX;
	int64_t x664 = -1LL;
	static volatile int32_t t162 = -65657478;

    t162 = (x661+(x662<=(x663^x664)));

    if (t162 != 14) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x665 = INT8_MIN;
	int16_t x666 = INT16_MIN;
	static int32_t x667 = -471430;
	static uint64_t x668 = 30516477702809LLU;
	volatile int32_t t163 = 1;

    t163 = (x665+(x666<=(x667^x668)));

    if (t163 != -128) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x669 = 6U;
	volatile uint16_t x672 = 9863U;
	static volatile int32_t t164 = -53;

    t164 = (x669+(x670<=(x671^x672)));

    if (t164 != 6) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x673 = INT16_MAX;
	static int32_t x674 = INT32_MIN;
	static int8_t x675 = -4;
	int32_t x676 = 15398337;
	int32_t t165 = 2528;

    t165 = (x673+(x674<=(x675^x676)));

    if (t165 != 32768) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x677 = 36U;
	uint8_t x679 = 20U;
	volatile int16_t x680 = 1;
	volatile int32_t t166 = -28;

    t166 = (x677+(x678<=(x679^x680)));

    if (t166 != 37) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x681 = -1626;
	volatile int16_t x682 = INT16_MAX;
	int32_t x683 = INT32_MAX;
	int32_t t167 = -23;

    t167 = (x681+(x682<=(x683^x684)));

    if (t167 != -1625) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x685 = -1LL;
	uint32_t x686 = UINT32_MAX;
	int64_t x687 = -1LL;
	volatile uint32_t x688 = 76U;
	static int64_t t168 = 3295893LL;

    t168 = (x685+(x686<=(x687^x688)));

    if (t168 != -1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x689 = INT32_MIN;
	static int64_t x691 = INT64_MAX;
	uint16_t x692 = 6U;
	volatile int32_t t169 = 1;

    t169 = (x689+(x690<=(x691^x692)));

    if (t169 != -2147483647) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x693 = UINT64_MAX;
	int16_t x694 = -231;
	uint8_t x695 = 9U;
	uint64_t x696 = 1895241792808430LLU;
	volatile uint64_t t170 = UINT64_MAX;

    t170 = (x693+(x694<=(x695^x696)));

    if (t170 != UINT64_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x697 = INT8_MIN;
	int16_t x698 = -31;
	static volatile int32_t x699 = -5215;
	volatile uint64_t x700 = 0LLU;

    t171 = (x697+(x698<=(x699^x700)));

    if (t171 != -128) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x705 = -1LL;
	volatile uint64_t x706 = 236821017LLU;
	int32_t x707 = -1;
	volatile int64_t t172 = 9717665LL;

    t172 = (x705+(x706<=(x707^x708)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x709 = 43998;
	uint64_t x710 = UINT64_MAX;
	uint32_t x711 = 87088712U;

    t173 = (x709+(x710<=(x711^x712)));

    if (t173 != 43998) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x714 = -9;
	uint8_t x715 = UINT8_MAX;
	static uint32_t x716 = UINT32_MAX;
	int32_t t174 = 2514;

    t174 = (x713+(x714<=(x715^x716)));

    if (t174 != 65535) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x717 = 3U;
	static int8_t x718 = INT8_MAX;
	int16_t x719 = -1;
	int8_t x720 = INT8_MAX;
	int32_t t175 = -15333;

    t175 = (x717+(x718<=(x719^x720)));

    if (t175 != 3) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x722 = -1;
	int16_t x723 = -1;
	int32_t x724 = -566522;

    t176 = (x721+(x722<=(x723^x724)));

    if (t176 != -127) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x726 = 6540430389212LLU;
	int16_t x727 = -1;
	volatile uint8_t x728 = 18U;
	volatile uint64_t t177 = 50554190LLU;

    t177 = (x725+(x726<=(x727^x728)));

    if (t177 != 126018894118866335LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x729 = INT8_MIN;
	uint64_t x731 = 177136176423051LLU;
	int32_t x732 = INT32_MIN;
	int32_t t178 = 0;

    t178 = (x729+(x730<=(x731^x732)));

    if (t178 != -127) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x733 = 541071896348LL;
	int32_t x735 = INT32_MIN;
	static int8_t x736 = -1;
	static volatile int64_t t179 = 78653795153541LL;

    t179 = (x733+(x734<=(x735^x736)));

    if (t179 != 541071896349LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x737 = 2;
	int16_t x739 = INT16_MIN;
	int32_t x740 = -26019;
	volatile int32_t t180 = 10929;

    t180 = (x737+(x738<=(x739^x740)));

    if (t180 != 3) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x741 = INT32_MIN;
	static uint32_t x742 = UINT32_MAX;
	int16_t x743 = 8;
	static volatile uint8_t x744 = 0U;
	int32_t t181 = INT32_MIN;

    t181 = (x741+(x742<=(x743^x744)));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x747 = INT32_MIN;
	volatile uint64_t x748 = UINT64_MAX;
	volatile int32_t t182 = INT32_MAX;

    t182 = (x745+(x746<=(x747^x748)));

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x749 = -1;
	static uint64_t x750 = 515642885LLU;
	int64_t x751 = INT64_MIN;
	int16_t x752 = 4;
	volatile int32_t t183 = -249;

    t183 = (x749+(x750<=(x751^x752)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x753 = UINT16_MAX;
	int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MIN;
	uint16_t x756 = 74U;
	int32_t t184 = -54013701;

    t184 = (x753+(x754<=(x755^x756)));

    if (t184 != 65536) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x757 = 1015;
	uint16_t x758 = 2630U;
	uint32_t x760 = 0U;

    t185 = (x757+(x758<=(x759^x760)));

    if (t185 != 1015) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x761 = 1U;
	int16_t x762 = -3;
	int64_t x763 = INT64_MIN;
	static uint16_t x764 = UINT16_MAX;

    t186 = (x761+(x762<=(x763^x764)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x766 = UINT8_MAX;
	int8_t x767 = -1;
	int8_t x768 = INT8_MIN;
	static int32_t t187 = 313;

    t187 = (x765+(x766<=(x767^x768)));

    if (t187 != -32768) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x769 = INT32_MIN;
	int64_t x770 = -1LL;
	volatile int64_t x771 = INT64_MAX;
	static uint8_t x772 = UINT8_MAX;
	int32_t t188 = -13;

    t188 = (x769+(x770<=(x771^x772)));

    if (t188 != -2147483647) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x773 = 995827U;
	int16_t x775 = INT16_MIN;
	volatile int8_t x776 = INT8_MAX;
	static volatile uint32_t t189 = 41316645U;

    t189 = (x773+(x774<=(x775^x776)));

    if (t189 != 995827U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x777 = -2033;
	volatile uint8_t x778 = UINT8_MAX;
	uint64_t x779 = UINT64_MAX;
	volatile int16_t x780 = INT16_MIN;
	int32_t t190 = 431202;

    t190 = (x777+(x778<=(x779^x780)));

    if (t190 != -2032) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x781 = 6654322U;
	uint8_t x783 = 3U;
	int64_t x784 = 2691338LL;

    t191 = (x781+(x782<=(x783^x784)));

    if (t191 != 6654323U) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x785 = -8200311865149LL;
	int8_t x786 = INT8_MIN;
	int16_t x788 = INT16_MIN;

    t192 = (x785+(x786<=(x787^x788)));

    if (t192 != -8200311865148LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x789 = INT32_MAX;
	int32_t x790 = INT32_MAX;
	uint8_t x791 = 120U;
	int32_t x792 = INT32_MIN;
	volatile int32_t t193 = INT32_MAX;

    t193 = (x789+(x790<=(x791^x792)));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x793 = INT8_MAX;
	static int64_t x794 = INT64_MIN;
	int16_t x795 = INT16_MIN;
	int8_t x796 = INT8_MAX;

    t194 = (x793+(x794<=(x795^x796)));

    if (t194 != 128) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x800 = UINT64_MAX;
	volatile uint64_t t195 = UINT64_MAX;

    t195 = (x797+(x798<=(x799^x800)));

    if (t195 != UINT64_MAX) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x801 = 194551112;
	int8_t x802 = INT8_MIN;
	uint8_t x803 = UINT8_MAX;
	uint16_t x804 = 30U;
	int32_t t196 = -7;

    t196 = (x801+(x802<=(x803^x804)));

    if (t196 != 194551113) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x805 = UINT64_MAX;
	uint16_t x806 = 1391U;
	int8_t x807 = 0;
	uint32_t x808 = UINT32_MAX;
	volatile uint64_t t197 = 182730828766070154LLU;

    t197 = (x805+(x806<=(x807^x808)));

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static volatile int64_t x811 = -1LL;
	static int32_t x812 = -1;
	int64_t t198 = -26145322562675946LL;

    t198 = (x809+(x810<=(x811^x812)));

    if (t198 != -4206601500428688741LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x817 = 13153049493033106LLU;
	uint64_t x818 = 8879527999LLU;
	static int32_t x819 = -1;
	volatile uint64_t t199 = 89704827LLU;

    t199 = (x817+(x818<=(x819^x820)));

    if (t199 != 13153049493033106LLU) { NG(); } else { ; }
	
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

