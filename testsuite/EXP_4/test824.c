
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

static volatile int8_t x4 = -1;
volatile int8_t x9 = INT8_MIN;
volatile int16_t x11 = 1;
static volatile int32_t t2 = 4;
uint8_t x18 = 36U;
int16_t x19 = -1;
int32_t t3 = 2854;
int64_t x21 = -1LL;
int8_t x24 = INT8_MAX;
volatile int64_t t4 = 122LL;
uint64_t t6 = 117743950349011534LLU;
uint64_t t7 = 4173891LLU;
int8_t x37 = INT8_MAX;
int64_t x40 = 133025369832691LL;
volatile int64_t t8 = -12017936970661749LL;
static uint64_t t9 = 1LLU;
int64_t x50 = -1LL;
uint32_t x51 = 3588861U;
int8_t x60 = INT8_MIN;
int8_t x62 = -1;
volatile int32_t t13 = 0;
uint64_t t14 = 15LLU;
volatile uint64_t x79 = UINT64_MAX;
static int32_t x82 = 250126974;
int8_t x83 = -1;
uint8_t x86 = 1U;
int8_t x88 = -19;
int64_t x90 = INT64_MAX;
uint8_t x93 = 13U;
int64_t t21 = -1683788LL;
int32_t x97 = -1;
int64_t x98 = 1LL;
static volatile int64_t t22 = -553LL;
volatile uint64_t t23 = 12LLU;
int64_t t24 = 1359LL;
volatile int32_t x112 = INT32_MIN;
uint64_t x114 = UINT64_MAX;
uint32_t x117 = 169236U;
int8_t x118 = INT8_MAX;
int8_t x124 = INT8_MIN;
static int16_t x125 = -1;
int64_t x128 = -47548116011171LL;
int64_t x130 = 2446627296803LL;
int32_t x131 = INT32_MAX;
volatile int16_t x144 = -7976;
int32_t x156 = -1;
uint64_t t36 = 93077LLU;
int8_t x162 = -12;
int16_t x165 = INT16_MIN;
int8_t x166 = 43;
int32_t x170 = -1;
volatile int64_t t39 = -4359818834558715464LL;
volatile int64_t x174 = -1LL;
static volatile int32_t x176 = 233763253;
int64_t x179 = INT64_MIN;
int64_t x181 = INT64_MIN;
static volatile int64_t t42 = 83926191312LL;
static uint8_t x186 = 15U;
volatile uint64_t t43 = 137611836552805204LLU;
int16_t x202 = -1;
uint64_t x212 = UINT64_MAX;
static int16_t x223 = INT16_MAX;
uint16_t x227 = 1460U;
static volatile uint64_t x235 = 74260068173LLU;
uint64_t t53 = 67117374924952347LLU;
volatile uint16_t x237 = 2U;
volatile int16_t x242 = -1;
volatile int8_t x249 = -1;
uint64_t x253 = 767145LLU;
volatile uint64_t t58 = 40LLU;
int64_t x261 = -253281LL;
int16_t x267 = -1;
uint8_t x271 = 3U;
int32_t x275 = INT32_MIN;
int16_t x277 = 4;
int32_t x278 = INT32_MAX;
volatile uint64_t t64 = 0LLU;
uint16_t x283 = 4U;
volatile int32_t x289 = INT32_MIN;
static uint16_t x291 = UINT16_MAX;
uint64_t x292 = 64871LLU;
int64_t x294 = INT64_MAX;
int8_t x297 = -21;
static volatile uint32_t x304 = 14U;
uint16_t x308 = 112U;
volatile int32_t t71 = -11;
int32_t x310 = -222051835;
uint64_t t72 = 33613513425825LLU;
uint64_t x314 = UINT64_MAX;
volatile uint32_t x321 = 5144U;
int16_t x326 = INT16_MAX;
int8_t x329 = INT8_MAX;
int64_t x332 = -1LL;
volatile uint64_t t79 = 52026331066621599LLU;
uint8_t x348 = 25U;
volatile int64_t x353 = 4332LL;
int32_t x355 = INT32_MIN;
uint64_t t82 = 14LLU;
volatile uint64_t t83 = 29676063618634760LLU;
static uint16_t x362 = 9048U;
volatile int64_t x370 = -1448087809LL;
volatile uint8_t x413 = 26U;
uint8_t x415 = 117U;
uint16_t x416 = 1U;
int16_t x417 = -11608;
uint16_t x419 = UINT16_MAX;
static volatile int64_t t94 = 1LL;
int8_t x427 = INT8_MIN;
volatile uint64_t x434 = 241211832286657LLU;
static int32_t x439 = -1;
static int8_t x440 = -22;
int64_t x456 = -6438230828157LL;
static volatile int64_t x463 = INT64_MAX;
int16_t x464 = INT16_MAX;
volatile uint8_t x470 = 28U;
static volatile int64_t t105 = 763530LL;
volatile uint32_t x483 = 925917U;
uint16_t x491 = 46U;
uint64_t x493 = UINT64_MAX;
int64_t x494 = -3676913492838447226LL;
static int64_t x500 = -1LL;
uint8_t x504 = 26U;
uint32_t x520 = 407787U;
volatile int64_t x521 = INT64_MIN;
static int8_t x522 = 0;
static int64_t t116 = 34843474859662LL;
static int64_t x527 = INT64_MIN;
static uint32_t x530 = 31507U;
static uint64_t t118 = 1LLU;
int64_t x533 = INT64_MIN;
int8_t x536 = INT8_MIN;
int32_t x538 = -1;
static int64_t t120 = -391469351LL;
int32_t x541 = 61797;
static int32_t x542 = -1;
int32_t x549 = -1;
volatile int16_t x553 = INT16_MIN;
static uint32_t x554 = 22U;
static int8_t x562 = 0;
static uint32_t x571 = 351U;
static int8_t x575 = 0;
int8_t x576 = -1;
int8_t x581 = INT8_MIN;
int32_t x586 = INT32_MIN;
int64_t x587 = -1LL;
int32_t x588 = INT32_MIN;
static volatile uint32_t x590 = 3125734U;
volatile int8_t x592 = INT8_MIN;
int64_t x596 = INT64_MAX;
static uint64_t t134 = 28594LLU;
uint32_t x605 = 54U;
uint32_t t136 = 15867U;
static int16_t x615 = 1;
int16_t x616 = INT16_MIN;
uint16_t x617 = 8U;
static int16_t x621 = INT16_MAX;
volatile int16_t x626 = -1;
static volatile int16_t x628 = INT16_MAX;
int8_t x637 = 29;
int64_t x638 = -1LL;
uint32_t x639 = 147354502U;
uint16_t x643 = 465U;
int32_t x644 = -17849;
volatile uint64_t t145 = 27LLU;
int8_t x650 = -1;
int8_t x653 = INT8_MIN;
uint64_t x655 = UINT64_MAX;
volatile uint64_t t147 = 48919475639261773LLU;
volatile int8_t x660 = INT8_MAX;
static int64_t t148 = -6149174065LL;
volatile int16_t x661 = 71;
int32_t x666 = 69634542;
static volatile int8_t x669 = 31;
static int8_t x673 = INT8_MAX;
static int16_t x676 = -1;
int64_t t152 = 12596018LL;
volatile int32_t x680 = INT32_MAX;
static int16_t x684 = -1;
int64_t t154 = -9157384178526066LL;
uint16_t x692 = UINT16_MAX;
uint8_t x694 = UINT8_MAX;
volatile int64_t t157 = -182191801905628LL;
int64_t x702 = -1LL;
int64_t t158 = 244832015LL;
int16_t x709 = -1;
static int32_t x717 = INT32_MAX;
static int64_t x723 = -6126631742829LL;
int32_t x724 = -1;
uint16_t x725 = 8199U;
int16_t x732 = -1;
static volatile int64_t t165 = -1714791349904934826LL;
int16_t x733 = INT16_MIN;
int8_t x740 = INT8_MIN;
uint64_t x745 = 59923995882277LLU;
uint8_t x756 = UINT8_MAX;
uint64_t t170 = 379048956LLU;
int8_t x759 = INT8_MIN;
static int64_t x762 = -319841888LL;
volatile int64_t x767 = INT64_MIN;
static int8_t x768 = -1;
static int16_t x779 = INT16_MAX;
int32_t x782 = INT32_MAX;
int64_t x784 = -163060117LL;
uint8_t x788 = 122U;
static uint32_t x793 = 57374982U;
uint32_t t180 = 356562593U;
volatile int16_t x797 = INT16_MIN;
static volatile int16_t x800 = -1112;
static uint32_t t181 = 4498020U;
int64_t t182 = 228819336LL;
volatile uint64_t t183 = 769LLU;
int64_t x823 = INT64_MIN;
static volatile int64_t t186 = 1170789LL;
volatile int16_t x825 = -163;
static uint16_t x826 = 26459U;
uint64_t x827 = UINT64_MAX;
int32_t x832 = INT32_MAX;
volatile int32_t t188 = -15;
int16_t x835 = INT16_MAX;
uint64_t x836 = 13283918335LLU;
int32_t x838 = -1335;
int16_t x848 = -1;
volatile uint16_t x862 = 181U;
static int32_t t195 = 4243889;
volatile uint32_t x869 = UINT32_MAX;
int16_t x876 = INT16_MIN;
int8_t x877 = INT8_MIN;
static volatile uint8_t x880 = 5U;


void f0(void) {
    	volatile int16_t x1 = 744;
	uint16_t x2 = UINT16_MAX;
	static uint32_t x3 = UINT32_MAX;
	uint32_t t0 = 11U;

    t0 = (x1&(x2*(x3%x4)));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = -10156;
	uint8_t x6 = 25U;
	static uint64_t x7 = 7960298382856LLU;
	int16_t x8 = INT16_MIN;
	volatile uint64_t t1 = 1797307466880LLU;

    t1 = (x5&(x6*(x7%x8)));

    if (t1 != 199007459561536LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static int32_t x10 = 1;
	static int16_t x12 = 54;

    t2 = (x9&(x10*(x11%x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MAX;
	int16_t x20 = 33;

    t3 = (x17&(x18*(x19%x20)));

    if (t3 != 2147483612) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x22 = UINT16_MAX;
	static uint8_t x23 = UINT8_MAX;

    t4 = (x21&(x22*(x23%x24)));

    if (t4 != 65535LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x25 = 4;
	static uint8_t x26 = 2U;
	static int8_t x27 = -46;
	volatile int8_t x28 = 36;
	int32_t t5 = 125160;

    t5 = (x25&(x26*(x27%x28)));

    if (t5 != 4) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 23LLU;
	static volatile int8_t x30 = 10;
	uint32_t x31 = 978689560U;
	int16_t x32 = 817;

    t6 = (x29&(x30*(x31%x32)));

    if (t6 != 20LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x33 = 261558386U;
	static int64_t x34 = 1122520558913071LL;
	static uint32_t x35 = 71713236U;
	uint64_t x36 = 25240459LLU;

    t7 = (x33&(x34*(x35%x36)));

    if (t7 != 76877922LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x38 = -81841;
	int32_t x39 = -7930806;

    t8 = (x37&(x38*(x39%x40)));

    if (t8 != 86LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 18U;
	int8_t x42 = INT8_MIN;
	static volatile int16_t x43 = INT16_MAX;
	static uint64_t x44 = UINT64_MAX;

    t9 = (x41&(x42*(x43%x44)));

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = 2U;
	int16_t x46 = -551;
	static uint32_t x47 = 12401844U;
	uint32_t x48 = 81U;
	static volatile uint32_t t10 = 13U;

    t10 = (x45&(x46*(x47%x48)));

    if (t10 != 2U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = UINT32_MAX;
	int64_t x52 = INT64_MIN;
	int64_t t11 = -9715853791157LL;

    t11 = (x49&(x50*(x51%x52)));

    if (t11 != 4291378435LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x57 = INT8_MIN;
	volatile int64_t x58 = -36365868726259059LL;
	int16_t x59 = -1;
	volatile int64_t t12 = -1564999392601454LL;

    t12 = (x57&(x58*(x59%x60)));

    if (t12 != 36365868726258944LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x61 = 16U;
	int8_t x63 = INT8_MIN;
	volatile int32_t x64 = -1;

    t13 = (x61&(x62*(x63%x64)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x65 = -2420293934LL;
	int32_t x66 = 20923983;
	static uint16_t x67 = 3918U;
	uint64_t x68 = UINT64_MAX;

    t14 = (x65&(x66*(x67%x68)));

    if (t14 != 81707404306LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = 14;
	volatile uint8_t x70 = UINT8_MAX;
	int32_t x71 = INT32_MIN;
	volatile int8_t x72 = INT8_MAX;
	int32_t t15 = -4076435;

    t15 = (x69&(x70*(x71%x72)));

    if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x73 = 497795LLU;
	int8_t x74 = INT8_MIN;
	int16_t x75 = -1;
	int16_t x76 = INT16_MAX;
	uint64_t t16 = 13515730119405594LLU;

    t16 = (x73&(x74*(x75%x76)));

    if (t16 != 128LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x77 = 0U;
	volatile int8_t x78 = 2;
	uint64_t x80 = 261755860806049770LLU;
	uint64_t t17 = 12611812067020290LLU;

    t17 = (x77&(x78*(x79%x80)));

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = 20U;
	static int16_t x84 = 2;
	uint32_t t18 = 101013U;

    t18 = (x81&(x82*(x83%x84)));

    if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x85 = 32U;
	int16_t x87 = -1;
	volatile int32_t t19 = 13638;

    t19 = (x85&(x86*(x87%x88)));

    if (t19 != 32) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x89 = -284114793503LL;
	volatile int64_t x91 = INT64_MIN;
	int64_t x92 = INT64_MAX;
	volatile int64_t t20 = -131379LL;

    t20 = (x89&(x90*(x91%x92)));

    if (t20 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x94 = -34245511;
	int64_t x95 = 30337347112LL;
	volatile uint16_t x96 = UINT16_MAX;

    t21 = (x93&(x94*(x95%x96)));

    if (t21 != 12LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x99 = -1874401356353479LL;
	uint8_t x100 = UINT8_MAX;

    t22 = (x97&(x98*(x99%x100)));

    if (t22 != -94LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = -1;
	int64_t x102 = INT64_MIN;
	uint64_t x103 = UINT64_MAX;
	int64_t x104 = -103LL;

    t23 = (x101&(x102*(x103%x104)));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = 0;
	int64_t x106 = INT64_MIN;
	static volatile int8_t x107 = 22;
	int64_t x108 = -1LL;

    t24 = (x105&(x106*(x107%x108)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = INT16_MIN;
	static int16_t x110 = -1;
	volatile int32_t x111 = 4095493;
	static int32_t t25 = -199823;

    t25 = (x109&(x110*(x111%x112)));

    if (t25 != -4096000) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x113 = UINT64_MAX;
	static int16_t x115 = INT16_MIN;
	static volatile int64_t x116 = -1LL;
	volatile uint64_t t26 = 8661558895576889LLU;

    t26 = (x113&(x114*(x115%x116)));

    if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x119 = 0U;
	int16_t x120 = INT16_MIN;
	static volatile uint32_t t27 = 246U;

    t27 = (x117&(x118*(x119%x120)));

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x121 = UINT8_MAX;
	volatile int8_t x122 = 29;
	static volatile int16_t x123 = -1;
	volatile int32_t t28 = 3387;

    t28 = (x121&(x122*(x123%x124)));

    if (t28 != 227) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x126 = UINT32_MAX;
	uint8_t x127 = 30U;
	int64_t t29 = 30626005366LL;

    t29 = (x125&(x126*(x127%x128)));

    if (t29 != 128849018850LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x129 = -94104LL;
	volatile uint32_t x132 = 24U;
	static int64_t t30 = -216716388882LL;

    t30 = (x129&(x130*(x131%x132)));

    if (t30 != 17126391058528LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x133 = -1;
	static uint32_t x134 = 34452U;
	int8_t x135 = -4;
	int32_t x136 = -212562378;
	volatile uint32_t t31 = 253U;

    t31 = (x133&(x134*(x135%x136)));

    if (t31 != 4294829488U) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint16_t x137 = UINT16_MAX;
	int8_t x138 = 26;
	int16_t x139 = -1;
	uint16_t x140 = 3U;
	static int32_t t32 = 1017;

    t32 = (x137&(x138*(x139%x140)));

    if (t32 != 65510) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = 18372LL;
	static uint64_t x143 = 134LLU;
	volatile uint64_t t33 = 3225512511431LLU;

    t33 = (x141&(x142*(x143%x144)));

    if (t33 != 2457600LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x149 = INT64_MAX;
	volatile int32_t x150 = -1;
	static volatile uint16_t x151 = 13U;
	static int8_t x152 = INT8_MIN;
	volatile int64_t t34 = 37952065LL;

    t34 = (x149&(x150*(x151%x152)));

    if (t34 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x153 = INT16_MAX;
	volatile uint32_t x154 = 63U;
	int8_t x155 = INT8_MAX;
	uint32_t t35 = 668794251U;

    t35 = (x153&(x154*(x155%x156)));

    if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x157 = UINT8_MAX;
	int32_t x158 = INT32_MIN;
	uint64_t x159 = 4271LLU;
	int64_t x160 = INT64_MIN;

    t36 = (x157&(x158*(x159%x160)));

    if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = -1LL;
	int16_t x163 = -1;
	uint32_t x164 = UINT32_MAX;
	volatile int64_t t37 = -70841028583312103LL;

    t37 = (x161&(x162*(x163%x164)));

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x167 = 20U;
	int8_t x168 = -15;
	volatile int32_t t38 = 20799097;

    t38 = (x165&(x166*(x167%x168)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = -1;
	int64_t x171 = -136356500860LL;
	int32_t x172 = -1;

    t39 = (x169&(x170*(x171%x172)));

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x173 = 0U;
	int16_t x175 = INT16_MIN;
	volatile int64_t t40 = 1505465234259768738LL;

    t40 = (x173&(x174*(x175%x176)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x177 = INT64_MIN;
	int32_t x178 = -1133;
	uint32_t x180 = 12U;
	int64_t t41 = -8026772047119LL;

    t41 = (x177&(x178*(x179%x180)));

    if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x182 = 0U;
	volatile int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;

    t42 = (x181&(x182*(x183%x184)));

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x185 = UINT64_MAX;
	volatile uint32_t x187 = 4U;
	uint8_t x188 = UINT8_MAX;

    t43 = (x185&(x186*(x187%x188)));

    if (t43 != 60LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	volatile uint8_t x191 = 1U;
	int32_t x192 = -1;
	volatile int32_t t44 = -41522;

    t44 = (x189&(x190*(x191%x192)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = 1;
	int8_t x195 = -1;
	volatile int64_t x196 = INT64_MIN;
	int64_t t45 = 294234320554708LL;

    t45 = (x193&(x194*(x195%x196)));

    if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x197 = INT64_MIN;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = -1LL;
	volatile int32_t x200 = -12875;
	static volatile int64_t t46 = INT64_MIN;

    t46 = (x197&(x198*(x199%x200)));

    if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	static volatile uint16_t x203 = 5U;
	uint64_t x204 = UINT64_MAX;
	uint64_t t47 = 12LLU;

    t47 = (x201&(x202*(x203%x204)));

    if (t47 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x209 = INT64_MIN;
	volatile uint16_t x210 = 84U;
	int16_t x211 = -7585;
	uint64_t t48 = 826140LLU;

    t48 = (x209&(x210*(x211%x212)));

    if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = INT8_MAX;
	uint64_t x218 = 6LLU;
	int32_t x219 = INT32_MIN;
	volatile int8_t x220 = 6;
	volatile uint64_t t49 = 459809LLU;

    t49 = (x217&(x218*(x219%x220)));

    if (t49 != 116LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x221 = -8053621LL;
	int8_t x222 = INT8_MIN;
	static int16_t x224 = INT16_MAX;
	volatile int64_t t50 = 2522691460LL;

    t50 = (x221&(x222*(x223%x224)));

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x225 = 0LLU;
	int8_t x226 = 1;
	int32_t x228 = -7549;
	volatile uint64_t t51 = 129252907960963LLU;

    t51 = (x225&(x226*(x227%x228)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x229 = 22U;
	uint8_t x230 = 0U;
	int16_t x231 = -1;
	volatile uint16_t x232 = 195U;
	static int32_t t52 = 0;

    t52 = (x229&(x230*(x231%x232)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x233 = UINT16_MAX;
	int32_t x234 = 26524;
	int8_t x236 = INT8_MAX;

    t53 = (x233&(x234*(x235%x236)));

    if (t53 != 35812LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MIN;
	int16_t x240 = 43;
	uint32_t t54 = 1328304913U;

    t54 = (x237&(x238*(x239%x240)));

    if (t54 != 2U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x241 = 57U;
	uint8_t x243 = 15U;
	uint16_t x244 = 3982U;
	int32_t t55 = -14131513;

    t55 = (x241&(x242*(x243%x244)));

    if (t55 != 49) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x245 = 116U;
	uint16_t x246 = 28441U;
	static int32_t x247 = INT32_MIN;
	static int16_t x248 = INT16_MAX;
	volatile uint32_t t56 = 116026071U;

    t56 = (x245&(x246*(x247%x248)));

    if (t56 != 68U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x250 = UINT64_MAX;
	int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;
	uint64_t t57 = 205LLU;

    t57 = (x249&(x250*(x251%x252)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x254 = -1;
	static volatile int64_t x255 = INT64_MIN;
	uint8_t x256 = 34U;

    t58 = (x253&(x254*(x255%x256)));

    if (t58 != 8LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = INT16_MIN;
	static int64_t x258 = INT64_MIN;
	static uint16_t x259 = 15092U;
	static int16_t x260 = -1;
	volatile int64_t t59 = 416040544545LL;

    t59 = (x257&(x258*(x259%x260)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint32_t x262 = 7655U;
	int16_t x263 = -1;
	volatile int64_t x264 = -65468274053442LL;
	int64_t t60 = 454LL;

    t60 = (x261&(x262*(x263%x264)));

    if (t60 != -253415LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint16_t x265 = UINT16_MAX;
	int16_t x266 = -1;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t61 = -2114;

    t61 = (x265&(x266*(x267%x268)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint16_t x269 = 11069U;
	uint64_t x270 = 142935139424747LLU;
	uint64_t x272 = 29836LLU;
	volatile uint64_t t62 = 211837449980842LLU;

    t62 = (x269&(x270*(x271%x272)));

    if (t62 != 2305LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x273 = -1;
	int8_t x274 = INT8_MIN;
	volatile int64_t x276 = 454735969176LL;
	int64_t t63 = 64731LL;

    t63 = (x273&(x274*(x275%x276)));

    if (t63 != 274877906944LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x279 = 427141LLU;
	uint8_t x280 = 3U;

    t64 = (x277&(x278*(x279%x280)));

    if (t64 != 4LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x281 = 67227841615887LLU;
	static int32_t x282 = INT32_MIN;
	int16_t x284 = -1;
	volatile uint64_t t65 = 819024LLU;

    t65 = (x281&(x282*(x283%x284)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x285 = -1;
	uint8_t x286 = 54U;
	int32_t x287 = -1;
	int8_t x288 = -30;
	int32_t t66 = -169109;

    t66 = (x285&(x286*(x287%x288)));

    if (t66 != -54) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x290 = INT64_MIN;
	uint64_t t67 = 236114LLU;

    t67 = (x289&(x290*(x291%x292)));

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x293 = INT32_MAX;
	static uint16_t x295 = UINT16_MAX;
	int64_t x296 = -1LL;
	int64_t t68 = 19302566LL;

    t68 = (x293&(x294*(x295%x296)));

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x298 = INT64_MAX;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 3U;
	static int64_t t69 = -525027364691692LL;

    t69 = (x297&(x298*(x299%x300)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x301 = 38U;
	uint16_t x302 = UINT16_MAX;
	int32_t x303 = INT32_MIN;
	uint32_t t70 = 73264498U;

    t70 = (x301&(x302*(x303%x304)));

    if (t70 != 38U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x305 = UINT8_MAX;
	int16_t x306 = -10;
	int16_t x307 = -7;

    t71 = (x305&(x306*(x307%x308)));

    if (t71 != 70) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x309 = UINT64_MAX;
	volatile int64_t x311 = -1LL;
	uint64_t x312 = 6635066408550LLU;

    t72 = (x309&(x310*(x311%x312)));

    if (t72 != 11657192115986211381LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	volatile int16_t x315 = 1;
	int16_t x316 = INT16_MAX;
	uint64_t t73 = 2836079734598232699LLU;

    t73 = (x313&(x314*(x315%x316)));

    if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x322 = -1;
	int8_t x323 = INT8_MAX;
	int32_t x324 = -1;
	uint32_t t74 = 13736996U;

    t74 = (x321&(x322*(x323%x324)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = -1LL;
	int16_t x327 = INT16_MAX;
	volatile int16_t x328 = -376;
	int64_t t75 = 511LL;

    t75 = (x325&(x326*(x327%x328)));

    if (t75 != 1802185LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x330 = 45781325435LLU;
	volatile int32_t x331 = INT32_MIN;
	uint64_t t76 = 164399896564924056LLU;

    t76 = (x329&(x330*(x331%x332)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x333 = INT64_MIN;
	int8_t x334 = INT8_MIN;
	int64_t x335 = 9375929LL;
	volatile int8_t x336 = INT8_MIN;
	volatile int64_t t77 = INT64_MIN;

    t77 = (x333&(x334*(x335%x336)));

    if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x337 = UINT16_MAX;
	int8_t x338 = 40;
	volatile uint16_t x339 = 547U;
	int16_t x340 = 171;
	static int32_t t78 = -594;

    t78 = (x337&(x338*(x339%x340)));

    if (t78 != 1360) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x341 = UINT64_MAX;
	static int16_t x342 = INT16_MAX;
	static volatile int16_t x343 = -5;
	volatile uint64_t x344 = 83600LLU;

    t79 = (x341&(x342*(x343%x344)));

    if (t79 != 1009584037LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x345 = INT16_MIN;
	uint8_t x346 = 3U;
	int16_t x347 = -1;
	int32_t t80 = 10;

    t80 = (x345&(x346*(x347%x348)));

    if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x349 = 136568500293638LL;
	static uint16_t x350 = 25553U;
	static int64_t x351 = INT64_MAX;
	static uint16_t x352 = 8549U;
	static volatile int64_t t81 = -505869041031926154LL;

    t81 = (x349&(x350*(x351%x352)));

    if (t81 != 70422532LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static volatile int16_t x354 = INT16_MAX;
	uint64_t x356 = 4295347784413392LLU;

    t82 = (x353&(x354*(x355%x356)));

    if (t82 != 224LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MAX;
	uint32_t x359 = 1U;
	uint64_t x360 = 110047279526045LLU;

    t83 = (x357&(x358*(x359%x360)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x361 = INT32_MIN;
	volatile int64_t x363 = -18192798613531LL;
	int16_t x364 = INT16_MIN;
	int64_t t84 = -71769322391929LL;

    t84 = (x361&(x362*(x363%x364)));

    if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x365 = 3U;
	int8_t x366 = -1;
	int32_t x367 = -420911266;
	int8_t x368 = INT8_MIN;
	volatile int32_t t85 = -384594;

    t85 = (x365&(x366*(x367%x368)));

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x371 = -1;
	uint64_t x372 = 14LLU;
	uint64_t t86 = 3094445118852856LLU;

    t86 = (x369&(x370*(x371%x372)));

    if (t86 != 18446744072261463680LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint8_t x377 = 0U;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = 4747135;
	int8_t x380 = INT8_MIN;
	uint64_t t87 = 8LLU;

    t87 = (x377&(x378*(x379%x380)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x381 = INT8_MIN;
	static volatile int8_t x382 = INT8_MAX;
	uint16_t x383 = 177U;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t88 = 10630855;

    t88 = (x381&(x382*(x383%x384)));

    if (t88 != 22400) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x389 = 17813U;
	uint64_t x390 = 30903787LLU;
	static uint64_t x391 = 63750098120459458LLU;
	uint32_t x392 = 963U;
	static volatile uint64_t t89 = 191203160470718LLU;

    t89 = (x389&(x390*(x391%x392)));

    if (t89 != 272LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x393 = INT32_MIN;
	int64_t x394 = 313232871461LL;
	int64_t x395 = INT64_MAX;
	static uint32_t x396 = 442U;
	volatile int64_t t90 = 0LL;

    t90 = (x393&(x394*(x395%x396)));

    if (t90 != 18479096791040LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x397 = -1LL;
	uint32_t x398 = 7289061U;
	static int16_t x399 = INT16_MIN;
	uint16_t x400 = 16U;
	volatile int64_t t91 = 33548589681LL;

    t91 = (x397&(x398*(x399%x400)));

    if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x414 = UINT8_MAX;
	int32_t t92 = 8;

    t92 = (x413&(x414*(x415%x416)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x418 = -1;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t93 = 27072419U;

    t93 = (x417&(x418*(x419%x420)));

    if (t93 != 4294901760U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x421 = 25691667955583LL;
	uint16_t x422 = 159U;
	static uint32_t x423 = 5U;
	int8_t x424 = INT8_MAX;

    t94 = (x421&(x422*(x423%x424)));

    if (t94 != 795LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x425 = 1;
	uint32_t x426 = 1013872U;
	int64_t x428 = 39837380295622LL;
	static int64_t t95 = -218051LL;

    t95 = (x425&(x426*(x427%x428)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x433 = 15U;
	int8_t x435 = INT8_MIN;
	uint8_t x436 = 60U;
	volatile uint64_t t96 = 252130315109LLU;

    t96 = (x433&(x434*(x435%x436)));

    if (t96 != 8LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x437 = INT16_MIN;
	int64_t x438 = -2468712094618LL;
	int64_t t97 = 2012828076312541637LL;

    t97 = (x437&(x438*(x439%x440)));

    if (t97 != 2468712087552LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x441 = INT16_MAX;
	int8_t x442 = -1;
	static int32_t x443 = 45;
	int8_t x444 = INT8_MIN;
	volatile int32_t t98 = -675799232;

    t98 = (x441&(x442*(x443%x444)));

    if (t98 != 32723) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x445 = 249771U;
	volatile int16_t x446 = INT16_MAX;
	static int8_t x447 = INT8_MIN;
	volatile int16_t x448 = INT16_MAX;
	uint32_t t99 = 11026313U;

    t99 = (x445&(x446*(x447%x448)));

    if (t99 != 128U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x449 = INT8_MAX;
	volatile int16_t x450 = INT16_MAX;
	static uint64_t x451 = 1443LLU;
	volatile int16_t x452 = INT16_MAX;
	uint64_t t100 = 931358105315589359LLU;

    t100 = (x449&(x450*(x451%x452)));

    if (t100 != 93LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x453 = 32754U;
	static int32_t x454 = INT32_MIN;
	int32_t x455 = INT32_MIN;
	int64_t t101 = -110759444602LL;

    t101 = (x453&(x454*(x455%x456)));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x461 = INT16_MAX;
	int64_t x462 = -1LL;
	volatile int64_t t102 = -2210LL;

    t102 = (x461&(x462*(x463%x464)));

    if (t102 != 32761LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MIN;
	int16_t x467 = INT16_MIN;
	static int8_t x468 = INT8_MIN;
	int64_t t103 = -1596922713134LL;

    t103 = (x465&(x466*(x467%x468)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x469 = INT64_MIN;
	int32_t x471 = INT32_MIN;
	int8_t x472 = INT8_MIN;
	int64_t t104 = -266402LL;

    t104 = (x469&(x470*(x471%x472)));

    if (t104 != 0LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x473 = UINT16_MAX;
	int64_t x474 = -873784412LL;
	int16_t x475 = 6;
	static uint32_t x476 = UINT32_MAX;

    t105 = (x473&(x474*(x475%x476)));

    if (t105 != 42456LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x477 = UINT16_MAX;
	volatile int8_t x478 = 0;
	int16_t x479 = INT16_MIN;
	int16_t x480 = -317;
	int32_t t106 = 7;

    t106 = (x477&(x478*(x479%x480)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x481 = 86032U;
	int64_t x482 = -1LL;
	int32_t x484 = 7;
	int64_t t107 = -4957LL;

    t107 = (x481&(x482*(x483%x484)));

    if (t107 != 86032LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x489 = UINT64_MAX;
	volatile int64_t x490 = -191021LL;
	int32_t x492 = -476535706;
	uint64_t t108 = 918951080781781LLU;

    t108 = (x489&(x490*(x491%x492)));

    if (t108 != 18446744073700764650LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x495 = INT64_MIN;
	int8_t x496 = -1;
	volatile uint64_t t109 = 1906639824LLU;

    t109 = (x493&(x494*(x495%x496)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x497 = 45847U;
	int8_t x498 = INT8_MIN;
	static uint64_t x499 = UINT64_MAX;
	uint64_t t110 = 25206446987155LLU;

    t110 = (x497&(x498*(x499%x500)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x501 = INT16_MAX;
	uint16_t x502 = 7U;
	int64_t x503 = INT64_MIN;
	volatile int64_t t111 = -63825LL;

    t111 = (x501&(x502*(x503%x504)));

    if (t111 != 32712LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x505 = INT32_MIN;
	volatile uint64_t x506 = UINT64_MAX;
	uint64_t x507 = UINT64_MAX;
	static int64_t x508 = -1681085LL;
	static volatile uint64_t t112 = 1LLU;

    t112 = (x505&(x506*(x507%x508)));

    if (t112 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x509 = 1U;
	int16_t x510 = 3151;
	uint8_t x511 = 15U;
	static int16_t x512 = INT16_MAX;
	static int32_t t113 = 2386928;

    t113 = (x509&(x510*(x511%x512)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x513 = INT8_MAX;
	int8_t x514 = -1;
	int64_t x515 = INT64_MIN;
	int64_t x516 = -1LL;
	static int64_t t114 = -42963178615LL;

    t114 = (x513&(x514*(x515%x516)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x517 = 16475741681LLU;
	int8_t x518 = INT8_MIN;
	int64_t x519 = -1LL;
	volatile uint64_t t115 = 21243854LLU;

    t115 = (x517&(x518*(x519%x520)));

    if (t115 != 128LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x523 = 1;
	static volatile int8_t x524 = -1;

    t116 = (x521&(x522*(x523%x524)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x525 = INT16_MIN;
	int16_t x526 = -93;
	int64_t x528 = -203LL;
	int64_t t117 = -7530626LL;

    t117 = (x525&(x526*(x527%x528)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x529 = 25LLU;
	volatile int64_t x531 = -1LL;
	volatile uint64_t x532 = 5775LLU;

    t118 = (x529&(x530*(x531%x532)));

    if (t118 != 25LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x534 = 18970912;
	int16_t x535 = INT16_MIN;
	int64_t t119 = 55410916LL;

    t119 = (x533&(x534*(x535%x536)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x537 = -1;
	int64_t x539 = 129291958853LL;
	int16_t x540 = -1;

    t120 = (x537&(x538*(x539%x540)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x543 = INT64_MIN;
	static uint8_t x544 = 90U;
	volatile int64_t t121 = -126218810378415LL;

    t121 = (x541&(x542*(x543%x544)));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = INT16_MAX;
	static int16_t x546 = INT16_MIN;
	volatile int16_t x547 = -1;
	int64_t x548 = INT64_MAX;
	int64_t t122 = 744LL;

    t122 = (x545&(x546*(x547%x548)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x550 = 638;
	int16_t x551 = 368;
	volatile int64_t x552 = INT64_MAX;
	volatile int64_t t123 = 38LL;

    t123 = (x549&(x550*(x551%x552)));

    if (t123 != 234784LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x555 = -112;
	volatile int64_t x556 = INT64_MIN;
	static int64_t t124 = -18423LL;

    t124 = (x553&(x554*(x555%x556)));

    if (t124 != -32768LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x561 = INT8_MAX;
	static uint64_t x563 = UINT64_MAX;
	uint16_t x564 = UINT16_MAX;
	volatile uint64_t t125 = 190023LLU;

    t125 = (x561&(x562*(x563%x564)));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x565 = 2U;
	int8_t x566 = 21;
	static int16_t x567 = INT16_MIN;
	int8_t x568 = INT8_MIN;
	volatile int32_t t126 = 0;

    t126 = (x565&(x566*(x567%x568)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x569 = 30263LL;
	int16_t x570 = -7;
	static int32_t x572 = -1;
	static volatile int64_t t127 = 2765734698853646625LL;

    t127 = (x569&(x570*(x571%x572)));

    if (t127 != 30247LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x573 = INT8_MIN;
	volatile int32_t x574 = -23515056;
	static int32_t t128 = 1;

    t128 = (x573&(x574*(x575%x576)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x582 = 1860036917993476741LLU;
	volatile int8_t x583 = -1;
	uint64_t x584 = UINT64_MAX;
	volatile uint64_t t129 = 3666LLU;

    t129 = (x581&(x582*(x583%x584)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x585 = INT64_MAX;
	volatile int64_t t130 = -2514516969LL;

    t130 = (x585&(x586*(x587%x588)));

    if (t130 != 2147483648LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x589 = INT16_MAX;
	int16_t x591 = -1;
	volatile uint32_t t131 = 2361U;

    t131 = (x589&(x590*(x591%x592)));

    if (t131 != 19994U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x593 = 109U;
	uint64_t x594 = 54452300700874LLU;
	uint32_t x595 = 13224U;
	volatile uint64_t t132 = 796709229702LLU;

    t132 = (x593&(x594*(x595%x596)));

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x597 = -4690;
	uint16_t x598 = UINT16_MAX;
	int16_t x599 = INT16_MIN;
	volatile int64_t x600 = INT64_MIN;
	volatile int64_t t133 = 243427137153035LL;

    t133 = (x597&(x598*(x599%x600)));

    if (t133 != -2147450880LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x601 = INT64_MIN;
	volatile int8_t x602 = INT8_MIN;
	uint64_t x603 = 8323108750LLU;
	int64_t x604 = -25452335731477LL;

    t134 = (x601&(x602*(x603%x604)));

    if (t134 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x606 = -1LL;
	static uint16_t x607 = 12U;
	uint64_t x608 = UINT64_MAX;
	volatile uint64_t t135 = 44725636100086486LLU;

    t135 = (x605&(x606*(x607%x608)));

    if (t135 != 52LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x609 = INT16_MAX;
	uint32_t x610 = 36351701U;
	static volatile int16_t x611 = INT16_MAX;
	int32_t x612 = 37554;

    t136 = (x609&(x610*(x611%x612)));

    if (t136 != 20779U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x613 = 36079130;
	volatile uint32_t x614 = 14563U;
	static volatile uint32_t t137 = 14705U;

    t137 = (x613&(x614*(x615%x616)));

    if (t137 != 2U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x618 = -1;
	static int16_t x619 = INT16_MIN;
	int16_t x620 = -1;
	static int32_t t138 = -644999609;

    t138 = (x617&(x618*(x619%x620)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x622 = UINT16_MAX;
	int8_t x623 = INT8_MAX;
	int8_t x624 = -1;
	volatile int32_t t139 = -2699;

    t139 = (x621&(x622*(x623%x624)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x625 = -1;
	int8_t x627 = INT8_MIN;
	volatile int32_t t140 = -49;

    t140 = (x625&(x626*(x627%x628)));

    if (t140 != 128) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x629 = INT8_MIN;
	int8_t x630 = INT8_MAX;
	volatile uint64_t x631 = 2195367198010974432LLU;
	int16_t x632 = INT16_MIN;
	uint64_t t141 = 10LLU;

    t141 = (x629&(x630*(x631%x632)));

    if (t141 != 2110473041750478592LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x633 = -1;
	int32_t x634 = INT32_MAX;
	static int8_t x635 = INT8_MIN;
	int8_t x636 = INT8_MIN;
	volatile int32_t t142 = -18295;

    t142 = (x633&(x634*(x635%x636)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x640 = INT32_MIN;
	int64_t t143 = -445299186515LL;

    t143 = (x637&(x638*(x639%x640)));

    if (t143 != 24LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MIN;
	int64_t t144 = INT64_MIN;

    t144 = (x641&(x642*(x643%x644)));

    if (t144 != INT64_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x645 = INT16_MIN;
	int64_t x646 = INT64_MIN;
	volatile int16_t x647 = -1;
	uint64_t x648 = UINT64_MAX;

    t145 = (x645&(x646*(x647%x648)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x649 = INT8_MIN;
	static uint8_t x651 = UINT8_MAX;
	int16_t x652 = INT16_MAX;
	int32_t t146 = 39027;

    t146 = (x649&(x650*(x651%x652)));

    if (t146 != -256) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x654 = -16;
	int8_t x656 = INT8_MIN;

    t147 = (x653&(x654*(x655%x656)));

    if (t147 != 18446744073709549568LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x657 = -1LL;
	int16_t x658 = 11;
	int16_t x659 = INT16_MIN;

    t148 = (x657&(x658*(x659%x660)));

    if (t148 != -22LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x662 = -13;
	int8_t x663 = INT8_MIN;
	int16_t x664 = 4906;
	int32_t t149 = 23994890;

    t149 = (x661&(x662*(x663%x664)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x665 = INT16_MIN;
	static int32_t x667 = -54;
	volatile int64_t x668 = -1LL;
	static int64_t t150 = -6LL;

    t150 = (x665&(x666*(x667%x668)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x670 = INT64_MIN;
	static int64_t x671 = -1LL;
	int64_t x672 = -1LL;
	int64_t t151 = -1993784176LL;

    t151 = (x669&(x670*(x671%x672)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x674 = INT64_MIN;
	int8_t x675 = 1;

    t152 = (x673&(x674*(x675%x676)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x677 = -1070503376470LL;
	uint32_t x678 = 1U;
	volatile int32_t x679 = 27046;
	int64_t t153 = 1389269094LL;

    t153 = (x677&(x678*(x679%x680)));

    if (t153 != 18850LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x681 = -200986016718LL;
	volatile uint16_t x682 = 18U;
	static volatile int64_t x683 = -3775LL;

    t154 = (x681&(x682*(x683%x684)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x689 = -10514;
	volatile int16_t x690 = INT16_MIN;
	uint64_t x691 = 176LLU;
	uint64_t t155 = 451453208035545LLU;

    t155 = (x689&(x690*(x691%x692)));

    if (t155 != 18446744073703784448LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int32_t x693 = INT32_MAX;
	uint64_t x695 = UINT64_MAX;
	volatile int8_t x696 = -1;
	uint64_t t156 = 700LLU;

    t156 = (x693&(x694*(x695%x696)));

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x697 = INT8_MIN;
	int8_t x698 = INT8_MIN;
	int32_t x699 = -614;
	int64_t x700 = INT64_MAX;

    t157 = (x697&(x698*(x699%x700)));

    if (t157 != 78592LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x701 = 42U;
	static int32_t x703 = INT32_MIN;
	int16_t x704 = INT16_MIN;

    t158 = (x701&(x702*(x703%x704)));

    if (t158 != 0LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile int8_t x706 = -32;
	uint8_t x707 = UINT8_MAX;
	volatile uint8_t x708 = 6U;
	int32_t t159 = 1070063200;

    t159 = (x705&(x706*(x707%x708)));

    if (t159 != 65440) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x710 = INT8_MIN;
	volatile uint8_t x711 = 16U;
	int64_t x712 = -1LL;
	static int64_t t160 = -174162230253LL;

    t160 = (x709&(x710*(x711%x712)));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x713 = 13324260378847167LLU;
	int16_t x714 = 5;
	int8_t x715 = 14;
	int64_t x716 = INT64_MAX;
	static volatile uint64_t t161 = 0LLU;

    t161 = (x713&(x714*(x715%x716)));

    if (t161 != 6LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x718 = INT16_MIN;
	int32_t x719 = 2;
	volatile int32_t x720 = INT32_MAX;
	int32_t t162 = -23853552;

    t162 = (x717&(x718*(x719%x720)));

    if (t162 != 2147418112) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x721 = INT64_MIN;
	static volatile int32_t x722 = INT32_MIN;
	volatile int64_t t163 = -3LL;

    t163 = (x721&(x722*(x723%x724)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x726 = INT32_MAX;
	int64_t x727 = INT64_MIN;
	static int64_t x728 = -1LL;
	int64_t t164 = 366222514973121LL;

    t164 = (x725&(x726*(x727%x728)));

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x729 = INT8_MIN;
	int16_t x730 = 0;
	static int64_t x731 = 565681392098010409LL;

    t165 = (x729&(x730*(x731%x732)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x734 = INT16_MIN;
	static uint8_t x735 = 15U;
	uint32_t x736 = 381U;
	uint32_t t166 = 1613U;

    t166 = (x733&(x734*(x735%x736)));

    if (t166 != 4294475776U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x737 = -76594450;
	int64_t x738 = INT64_MAX;
	int64_t x739 = -1LL;
	volatile int64_t t167 = INT64_MIN;

    t167 = (x737&(x738*(x739%x740)));

    if (t167 != INT64_MIN) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x741 = INT32_MIN;
	static int8_t x742 = -1;
	int64_t x743 = -48742765341597744LL;
	static uint32_t x744 = 98686U;
	volatile int64_t t168 = 17265729799LL;

    t168 = (x741&(x742*(x743%x744)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x746 = UINT16_MAX;
	int32_t x747 = -522913050;
	uint32_t x748 = 18540884U;
	uint64_t t169 = 563583667871695LLU;

    t169 = (x745&(x746*(x747%x748)));

    if (t169 != 608961060LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x753 = 11053;
	static uint64_t x754 = 7673LLU;
	int64_t x755 = -20504947LL;

    t170 = (x753&(x754*(x755%x756)));

    if (t170 != 2848LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x757 = -1LL;
	int16_t x758 = -1;
	uint32_t x760 = 62U;
	int64_t t171 = 25351LL;

    t171 = (x757&(x758*(x759%x760)));

    if (t171 != 0LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x761 = INT64_MAX;
	int16_t x763 = -656;
	uint16_t x764 = 426U;
	int64_t t172 = 0LL;

    t172 = (x761&(x762*(x763%x764)));

    if (t172 != 73563634240LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x765 = 2LLU;
	int16_t x766 = INT16_MIN;
	uint64_t t173 = 828406120LLU;

    t173 = (x765&(x766*(x767%x768)));

    if (t173 != 0LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x769 = -1;
	static int32_t x770 = INT32_MIN;
	int32_t x771 = -1;
	volatile int64_t x772 = INT64_MIN;
	int64_t t174 = -159229087981127LL;

    t174 = (x769&(x770*(x771%x772)));

    if (t174 != 2147483648LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x773 = 11285U;
	int16_t x774 = INT16_MIN;
	uint8_t x775 = 75U;
	int64_t x776 = INT64_MIN;
	int64_t t175 = 21150952303952015LL;

    t175 = (x773&(x774*(x775%x776)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x777 = INT64_MIN;
	int8_t x778 = INT8_MAX;
	volatile uint32_t x780 = 238U;
	static int64_t t176 = -3LL;

    t176 = (x777&(x778*(x779%x780)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x781 = -1;
	int16_t x783 = INT16_MIN;
	volatile int64_t t177 = -10985292298LL;

    t177 = (x781&(x782*(x783%x784)));

    if (t177 != -70368744144896LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x785 = INT16_MIN;
	static volatile int16_t x786 = 0;
	uint32_t x787 = 259U;
	uint32_t t178 = 67U;

    t178 = (x785&(x786*(x787%x788)));

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x789 = INT16_MIN;
	uint16_t x790 = UINT16_MAX;
	uint64_t x791 = 44984704162767703LLU;
	static int8_t x792 = -1;
	static volatile uint64_t t179 = 33339212994205959LLU;

    t179 = (x789&(x790*(x791%x792)));

    if (t179 != 15040279587162685440LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x794 = INT16_MAX;
	int8_t x795 = INT8_MIN;
	uint16_t x796 = 2019U;

    t180 = (x793&(x794*(x795%x796)));

    if (t180 != 54525952U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x798 = UINT32_MAX;
	uint8_t x799 = 3U;

    t181 = (x797&(x798*(x799%x800)));

    if (t181 != 4294934528U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x801 = -1;
	int64_t x802 = -1LL;
	uint32_t x803 = 5U;
	volatile int16_t x804 = INT16_MIN;

    t182 = (x801&(x802*(x803%x804)));

    if (t182 != -5LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x805 = INT8_MAX;
	volatile uint64_t x806 = UINT64_MAX;
	static int32_t x807 = INT32_MIN;
	volatile int16_t x808 = INT16_MIN;

    t183 = (x805&(x806*(x807%x808)));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x809 = UINT32_MAX;
	volatile uint64_t x810 = 193LLU;
	uint8_t x811 = 45U;
	static uint32_t x812 = UINT32_MAX;
	volatile uint64_t t184 = 11884603338264LLU;

    t184 = (x809&(x810*(x811%x812)));

    if (t184 != 8685LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x813 = -1LL;
	int64_t x814 = INT64_MAX;
	int64_t x815 = -1LL;
	volatile int64_t x816 = -1LL;
	static int64_t t185 = -139LL;

    t185 = (x813&(x814*(x815%x816)));

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x821 = -6;
	int16_t x822 = -3;
	int8_t x824 = -18;

    t186 = (x821&(x822*(x823%x824)));

    if (t186 != 24LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x828 = 122U;
	uint64_t t187 = 129303976LLU;

    t187 = (x825&(x826*(x827%x828)));

    if (t187 != 396885LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x829 = UINT8_MAX;
	int16_t x830 = -1;
	volatile int16_t x831 = -2029;

    t188 = (x829&(x830*(x831%x832)));

    if (t188 != 237) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x833 = 8492018LLU;
	int8_t x834 = INT8_MIN;
	static volatile uint64_t t189 = 0LLU;

    t189 = (x833&(x834*(x835%x836)));

    if (t189 != 8388736LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static volatile int16_t x837 = 15;
	volatile uint64_t x839 = UINT64_MAX;
	int16_t x840 = -1178;
	volatile uint64_t t190 = 610443123LLU;

    t190 = (x837&(x838*(x839%x840)));

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x841 = INT16_MAX;
	int16_t x842 = INT16_MAX;
	static int32_t x843 = -30887099;
	int16_t x844 = INT16_MAX;
	volatile int32_t t191 = -6005;

    t191 = (x841&(x842*(x843%x844)));

    if (t191 != 20585) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x845 = 52310U;
	static int32_t x846 = INT32_MIN;
	uint16_t x847 = 0U;
	volatile uint32_t t192 = 48U;

    t192 = (x845&(x846*(x847%x848)));

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x849 = 43069U;
	int16_t x850 = -5;
	uint16_t x851 = 3U;
	int32_t x852 = INT32_MAX;
	volatile uint32_t t193 = 2622U;

    t193 = (x849&(x850*(x851%x852)));

    if (t193 != 43057U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x853 = -121868514LL;
	volatile uint32_t x854 = 23U;
	uint64_t x855 = 179887724LLU;
	volatile int8_t x856 = -1;
	volatile uint64_t t194 = 99980LLU;

    t194 = (x853&(x854*(x855%x856)));

    if (t194 != 4036520724LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x861 = INT16_MIN;
	int8_t x863 = -1;
	static int8_t x864 = 25;

    t195 = (x861&(x862*(x863%x864)));

    if (t195 != -32768) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x865 = -1;
	volatile int8_t x866 = -1;
	int8_t x867 = INT8_MIN;
	uint8_t x868 = 56U;
	volatile int32_t t196 = -602812;

    t196 = (x865&(x866*(x867%x868)));

    if (t196 != 16) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x870 = -1;
	int64_t x871 = 3437538891LL;
	uint8_t x872 = UINT8_MAX;
	int64_t t197 = -4814888LL;

    t197 = (x869&(x870*(x871%x872)));

    if (t197 != 4294967125LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x873 = -83698LL;
	static uint8_t x874 = UINT8_MAX;
	static int64_t x875 = 7LL;
	static int64_t t198 = 1352561457151182LL;

    t198 = (x873&(x874*(x875%x876)));

    if (t198 != 8LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x878 = 2U;
	uint16_t x879 = UINT16_MAX;
	volatile int32_t t199 = -36;

    t199 = (x877&(x878*(x879%x880)));

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

