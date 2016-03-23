
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

uint16_t x4 = UINT16_MAX;
uint64_t x7 = UINT64_MAX;
int16_t x17 = INT16_MIN;
int16_t x21 = 3;
volatile uint32_t x25 = 33544883U;
int32_t x26 = -14776306;
static int16_t x28 = INT16_MAX;
uint16_t x30 = 1U;
uint32_t x39 = 5340150U;
int32_t x42 = -427717226;
static int16_t x44 = INT16_MAX;
int8_t x45 = INT8_MIN;
static int32_t t11 = -4073;
uint16_t x68 = 2U;
int32_t t14 = -383;
volatile int8_t x71 = -50;
int64_t x75 = -335271LL;
int64_t x77 = 766LL;
int32_t x80 = 70;
uint16_t x81 = 4U;
volatile int32_t t19 = -367434654;
volatile uint64_t t23 = 3704308779485LLU;
static volatile int16_t x114 = INT16_MIN;
volatile int16_t x116 = -1;
int16_t x118 = INT16_MIN;
uint32_t x119 = UINT32_MAX;
volatile int64_t t29 = -9LL;
uint32_t x149 = 1809282U;
int64_t x154 = INT64_MAX;
int8_t x161 = -1;
static int64_t x171 = -3LL;
uint64_t x175 = UINT64_MAX;
static int64_t t37 = 4022123663330285LL;
int16_t x178 = -3066;
volatile uint64_t x180 = UINT64_MAX;
int32_t t38 = -804757851;
int16_t x187 = -1;
uint32_t t39 = 3854280U;
volatile uint16_t x190 = UINT16_MAX;
uint16_t x194 = UINT16_MAX;
int64_t x197 = -1LL;
static int32_t x198 = INT32_MIN;
int32_t x207 = INT32_MIN;
volatile int32_t t45 = -44796;
int8_t x216 = INT8_MIN;
volatile int32_t t46 = 19267;
volatile int16_t x218 = INT16_MIN;
static int64_t x221 = INT64_MIN;
int8_t x222 = INT8_MAX;
static uint16_t x229 = UINT16_MAX;
int16_t x233 = -146;
volatile int32_t t50 = -7;
int16_t x237 = -1;
uint64_t x238 = 241178193LLU;
int64_t x241 = INT64_MIN;
static int8_t x249 = INT8_MIN;
int64_t x253 = INT64_MIN;
uint32_t x261 = 750958U;
int8_t x262 = INT8_MIN;
int32_t x271 = 6283;
uint64_t t57 = 3170523930654590LLU;
uint32_t x277 = 6229963U;
int32_t t59 = -384230;
static int8_t x288 = INT8_MIN;
int8_t x289 = INT8_MIN;
int32_t t61 = -100;
int32_t t63 = 163460;
uint64_t x302 = 8091LLU;
uint32_t x303 = 29547634U;
int32_t x304 = INT32_MIN;
volatile uint8_t x307 = 3U;
static volatile uint64_t x310 = 708LLU;
int8_t x312 = -1;
static int8_t x317 = INT8_MIN;
volatile int64_t x318 = -980LL;
static volatile int64_t x324 = -1LL;
uint8_t x327 = UINT8_MAX;
uint8_t x328 = UINT8_MAX;
volatile int32_t t69 = INT32_MAX;
int8_t x333 = 3;
static int16_t x336 = -1;
int32_t t72 = -3;
volatile int64_t x347 = -127643680LL;
static volatile int32_t t75 = 0;
static uint64_t x353 = 41552LLU;
uint16_t x368 = 13U;
volatile int32_t t79 = -1035134104;
int8_t x369 = 19;
volatile uint16_t x370 = UINT16_MAX;
uint16_t x375 = UINT16_MAX;
volatile uint8_t x384 = 110U;
volatile int32_t x385 = -1;
static int8_t x395 = INT8_MAX;
uint32_t x397 = 9091817U;
int32_t x399 = 118281;
volatile int16_t x400 = INT16_MIN;
uint32_t t85 = 2793679U;
uint32_t x411 = 845U;
int8_t x414 = -1;
volatile int32_t t89 = 61;
volatile int8_t x423 = 0;
int32_t t90 = -7;
int32_t t92 = -194;
int16_t x433 = INT16_MIN;
static int16_t x436 = -1;
uint32_t x440 = UINT32_MAX;
volatile int64_t t94 = INT64_MIN;
volatile int8_t x444 = 19;
volatile int32_t t95 = -31737779;
uint16_t x447 = UINT16_MAX;
uint64_t x455 = 24LLU;
static int16_t x458 = -1;
int32_t x459 = -1;
int8_t x470 = INT8_MIN;
volatile uint64_t x490 = 2468LLU;
static int64_t t105 = -14294666245513361LL;
volatile int32_t t107 = -249;
int32_t x505 = 506;
int64_t x506 = INT64_MAX;
int64_t x516 = -1LL;
volatile int32_t t111 = -1056152297;
int16_t x517 = 1;
int32_t x522 = -29596243;
int32_t t113 = -77;
volatile uint64_t x525 = UINT64_MAX;
int8_t x527 = 0;
uint64_t x534 = 10331230072908581LLU;
int16_t x545 = -1;
static uint8_t x566 = 2U;
static volatile uint16_t x573 = 171U;
volatile int16_t x580 = 42;
uint64_t x585 = UINT64_MAX;
int64_t x586 = 32064353908LL;
static volatile int8_t x587 = -1;
volatile int16_t x588 = INT16_MAX;
static uint16_t x590 = 435U;
volatile int64_t x593 = 1923058387490307857LL;
volatile int32_t t131 = 1277;
static volatile int32_t x605 = -1;
int32_t x611 = -42737;
uint16_t x612 = 934U;
int64_t x615 = -1LL;
static volatile int8_t x619 = INT8_MIN;
int64_t x621 = INT64_MIN;
int64_t x622 = -2976040229977LL;
int32_t x624 = 830759;
static uint64_t x625 = 1477031036808LLU;
int16_t x629 = -1;
uint16_t x632 = 83U;
int32_t x641 = 118569;
static int32_t x642 = INT32_MIN;
uint64_t x648 = 27057387831LLU;
int16_t x651 = INT16_MIN;
int8_t x658 = -4;
static uint64_t x659 = 1573964316222LLU;
uint32_t t144 = 7U;
static int8_t x666 = 0;
int8_t x673 = -19;
uint32_t x674 = 7U;
uint64_t x676 = 260370246913LLU;
volatile int16_t x677 = -1;
uint8_t x679 = UINT8_MAX;
int32_t x683 = INT32_MAX;
static int64_t x685 = INT64_MAX;
int8_t x694 = INT8_MIN;
uint32_t t152 = 32649U;
uint8_t x705 = UINT8_MAX;
int32_t x708 = INT32_MIN;
int32_t t153 = 32;
uint64_t x714 = 136102712387LLU;
int32_t x715 = -122;
static uint64_t x716 = 13956955LLU;
volatile int64_t x725 = INT64_MIN;
int64_t t157 = INT64_MIN;
int16_t x732 = 7;
uint64_t x734 = UINT64_MAX;
int16_t x736 = -1;
uint8_t x748 = 2U;
int32_t t162 = -911103;
int8_t x751 = -1;
volatile int16_t x752 = 0;
uint64_t t163 = UINT64_MAX;
volatile int32_t x765 = 7827;
volatile int32_t t167 = 612;
volatile uint64_t x776 = UINT64_MAX;
int32_t x781 = INT32_MAX;
int64_t x783 = -1LL;
int32_t t170 = INT32_MAX;
int16_t x788 = -1;
volatile int64_t t171 = -7460865891618396LL;
int64_t x797 = -915292271045839396LL;
int64_t t173 = -4LL;
volatile int32_t t174 = -190424999;
int8_t x806 = INT8_MAX;
int64_t x814 = INT64_MIN;
int8_t x826 = INT8_MIN;
int16_t x827 = -1;
int32_t x833 = INT32_MIN;
static uint16_t x838 = UINT16_MAX;
uint8_t x847 = 3U;
static int64_t x848 = INT64_MIN;
volatile int32_t x856 = 3921;
int8_t x858 = -1;
static int64_t t187 = -400LL;
uint64_t x867 = 87LLU;
int32_t x873 = INT32_MAX;
int32_t x875 = 81;
int32_t t191 = 13648;
static volatile int32_t t192 = -3469;
int8_t x888 = INT8_MIN;
volatile int32_t t193 = 369;
int16_t x891 = INT16_MAX;
int64_t x892 = 359716071LL;
int16_t x898 = -7644;
int16_t x906 = -1;
volatile int32_t x910 = -1;
static int64_t t198 = 32422356LL;


void f0(void) {
    	uint64_t x1 = 3021774LLU;
	int32_t x2 = -508;
	uint8_t x3 = 0U;
	uint64_t t0 = 205926820075582422LLU;

    t0 = (x1+(x2==(x3+x4)));

    if (t0 != 3021774LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -1LL;
	static int16_t x6 = -1;
	int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -2116LL;

    t1 = (x5+(x6==(x7+x8)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = INT16_MIN;
	static int8_t x14 = INT8_MIN;
	int8_t x15 = INT8_MIN;
	int8_t x16 = -1;
	int32_t t2 = -5870919;

    t2 = (x13+(x14==(x15+x16)));

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint16_t x18 = 422U;
	uint32_t x19 = 0U;
	uint8_t x20 = UINT8_MAX;
	int32_t t3 = -818690;

    t3 = (x17+(x18==(x19+x20)));

    if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x22 = -1;
	static volatile int64_t x23 = INT64_MIN;
	uint32_t x24 = 16114020U;
	static volatile int32_t t4 = 2;

    t4 = (x21+(x22==(x23+x24)));

    if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x27 = 1573U;
	uint32_t t5 = 1U;

    t5 = (x25+(x26==(x27+x28)));

    if (t5 != 33544883U) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = INT64_MIN;
	uint64_t x31 = UINT64_MAX;
	static volatile int32_t x32 = INT32_MIN;
	static int64_t t6 = INT64_MIN;

    t6 = (x29+(x30==(x31+x32)));

    if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int64_t x33 = INT64_MAX;
	uint16_t x34 = 656U;
	static int8_t x35 = INT8_MIN;
	uint32_t x36 = 7894U;
	volatile int64_t t7 = INT64_MAX;

    t7 = (x33+(x34==(x35+x36)));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	volatile uint16_t x38 = 7U;
	static uint32_t x40 = UINT32_MAX;
	volatile int64_t t8 = -614383LL;

    t8 = (x37+(x38==(x39+x40)));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 29634U;
	int64_t x43 = INT64_MIN;
	static volatile uint32_t t9 = 1943U;

    t9 = (x41+(x42==(x43+x44)));

    if (t9 != 29634U) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x46 = UINT32_MAX;
	uint32_t x47 = 51061729U;
	int64_t x48 = INT64_MIN;
	int32_t t10 = 0;

    t10 = (x45+(x46==(x47+x48)));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x49 = 0U;
	uint16_t x50 = UINT16_MAX;
	uint8_t x51 = 0U;
	uint32_t x52 = 6935U;

    t11 = (x49+(x50==(x51+x52)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -1LL;
	volatile int32_t x58 = INT32_MIN;
	int16_t x59 = INT16_MIN;
	static volatile int8_t x60 = INT8_MAX;
	static int64_t t12 = -8729526519346695LL;

    t12 = (x57+(x58==(x59+x60)));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x61 = INT8_MAX;
	volatile int8_t x62 = -1;
	uint64_t x63 = 46LLU;
	int64_t x64 = -1LL;
	int32_t t13 = -1;

    t13 = (x61+(x62==(x63+x64)));

    if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = -356500;
	static int64_t x66 = -1LL;
	uint8_t x67 = UINT8_MAX;

    t14 = (x65+(x66==(x67+x68)));

    if (t14 != -356500) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int8_t x72 = -14;
	volatile int32_t t15 = 6706632;

    t15 = (x69+(x70==(x71+x72)));

    if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = 41;
	int32_t x74 = INT32_MAX;
	uint32_t x76 = UINT32_MAX;
	int32_t t16 = -36080210;

    t16 = (x73+(x74==(x75+x76)));

    if (t16 != 41) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x78 = INT16_MAX;
	int64_t x79 = 1025LL;
	int64_t t17 = 19LL;

    t17 = (x77+(x78==(x79+x80)));

    if (t17 != 766LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	volatile uint64_t x84 = 130522534LLU;
	int32_t t18 = -24;

    t18 = (x81+(x82==(x83+x84)));

    if (t18 != 4) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x85 = -189;
	static volatile uint64_t x86 = 448609303LLU;
	int32_t x87 = INT32_MAX;
	uint64_t x88 = 4854546695135821782LLU;

    t19 = (x85+(x86==(x87+x88)));

    if (t19 != -189) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x93 = 557145757152326LLU;
	uint32_t x94 = 1421541429U;
	int8_t x95 = INT8_MAX;
	int64_t x96 = INT64_MIN;
	volatile uint64_t t20 = 297386887LLU;

    t20 = (x93+(x94==(x95+x96)));

    if (t20 != 557145757152326LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x97 = -3;
	int16_t x98 = -11;
	int64_t x99 = -1LL;
	int16_t x100 = -58;
	int32_t t21 = -5;

    t21 = (x97+(x98==(x99+x100)));

    if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x101 = 4347648;
	int8_t x102 = 0;
	static uint16_t x103 = UINT16_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t22 = 507681;

    t22 = (x101+(x102==(x103+x104)));

    if (t22 != 4347648) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x105 = 1574LLU;
	volatile int64_t x106 = INT64_MAX;
	int16_t x107 = -1762;
	uint16_t x108 = 5279U;

    t23 = (x105+(x106==(x107+x108)));

    if (t23 != 1574LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x113 = 2U;
	static uint64_t x115 = 38698LLU;
	static int32_t t24 = 0;

    t24 = (x113+(x114==(x115+x116)));

    if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x117 = 14234LLU;
	uint16_t x120 = 111U;
	volatile uint64_t t25 = 12043138LLU;

    t25 = (x117+(x118==(x119+x120)));

    if (t25 != 14234LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x121 = -1;
	static int64_t x122 = 53861695030526LL;
	int32_t x123 = -1;
	volatile int64_t x124 = 874706LL;
	static int32_t t26 = 4;

    t26 = (x121+(x122==(x123+x124)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = 45;
	volatile int16_t x126 = -1426;
	int8_t x127 = INT8_MAX;
	int32_t x128 = 1661855;
	static volatile int32_t t27 = 60268312;

    t27 = (x125+(x126==(x127+x128)));

    if (t27 != 45) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int8_t x129 = 12;
	volatile int16_t x130 = INT16_MAX;
	int8_t x131 = INT8_MIN;
	volatile int32_t x132 = -1405875;
	int32_t t28 = -106961;

    t28 = (x129+(x130==(x131+x132)));

    if (t28 != 12) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x137 = 189920340843LL;
	uint8_t x138 = 22U;
	static int8_t x139 = -16;
	static int32_t x140 = 91198044;

    t29 = (x137+(x138==(x139+x140)));

    if (t29 != 189920340843LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x141 = INT32_MIN;
	int32_t x142 = 7;
	volatile int16_t x143 = INT16_MAX;
	volatile uint8_t x144 = 19U;
	volatile int32_t t30 = INT32_MIN;

    t30 = (x141+(x142==(x143+x144)));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x145 = -1LL;
	int32_t x146 = INT32_MIN;
	int32_t x147 = 1;
	volatile int8_t x148 = -6;
	int64_t t31 = -296417LL;

    t31 = (x145+(x146==(x147+x148)));

    if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x150 = -3133LL;
	static volatile uint8_t x151 = UINT8_MAX;
	volatile int16_t x152 = INT16_MIN;
	uint32_t t32 = 24304U;

    t32 = (x149+(x150==(x151+x152)));

    if (t32 != 1809282U) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x153 = -14;
	static uint16_t x155 = UINT16_MAX;
	int16_t x156 = INT16_MAX;
	static volatile int32_t t33 = -5562239;

    t33 = (x153+(x154==(x155+x156)));

    if (t33 != -14) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint32_t x157 = 41340657U;
	int32_t x158 = -125;
	static int16_t x159 = 0;
	volatile uint16_t x160 = 362U;
	uint32_t t34 = 103523175U;

    t34 = (x157+(x158==(x159+x160)));

    if (t34 != 41340657U) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x162 = 16236U;
	static volatile int16_t x163 = -1;
	uint32_t x164 = 18553U;
	int32_t t35 = 1;

    t35 = (x161+(x162==(x163+x164)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x169 = INT32_MIN;
	static uint32_t x170 = UINT32_MAX;
	uint64_t x172 = 74356460004773926LLU;
	int32_t t36 = INT32_MIN;

    t36 = (x169+(x170==(x171+x172)));

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = -137360013940902LL;
	int32_t x174 = INT32_MAX;
	int64_t x176 = INT64_MAX;

    t37 = (x173+(x174==(x175+x176)));

    if (t37 != -137360013940902LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint8_t x177 = 68U;
	volatile uint16_t x179 = UINT16_MAX;

    t38 = (x177+(x178==(x179+x180)));

    if (t38 != 68) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x185 = 6596U;
	static int16_t x186 = -1;
	int16_t x188 = INT16_MIN;

    t39 = (x185+(x186==(x187+x188)));

    if (t39 != 6596U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x189 = INT8_MIN;
	static int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = 123437501LLU;
	volatile int32_t t40 = -110084;

    t40 = (x189+(x190==(x191+x192)));

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x193 = UINT8_MAX;
	uint32_t x195 = 192950U;
	int16_t x196 = 7;
	static int32_t t41 = -3136276;

    t41 = (x193+(x194==(x195+x196)));

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint8_t x199 = 2U;
	volatile uint16_t x200 = 2U;
	volatile int64_t t42 = 119802623LL;

    t42 = (x197+(x198==(x199+x200)));

    if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x201 = 1;
	int32_t x202 = -1;
	uint64_t x203 = 5111070421925877LLU;
	int8_t x204 = INT8_MIN;
	volatile int32_t t43 = -1;

    t43 = (x201+(x202==(x203+x204)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x205 = INT16_MIN;
	volatile int64_t x206 = -129584LL;
	uint32_t x208 = 1525790U;
	static volatile int32_t t44 = -782;

    t44 = (x205+(x206==(x207+x208)));

    if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MAX;
	int64_t x211 = INT64_MAX;
	uint64_t x212 = 248003367LLU;

    t45 = (x209+(x210==(x211+x212)));

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x213 = -1;
	volatile int16_t x214 = -15;
	uint64_t x215 = 309389646436110LLU;

    t46 = (x213+(x214==(x215+x216)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x217 = 3U;
	static volatile int32_t x219 = INT32_MIN;
	uint8_t x220 = 28U;
	volatile int32_t t47 = 99770;

    t47 = (x217+(x218==(x219+x220)));

    if (t47 != 3) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x223 = 82134U;
	int16_t x224 = INT16_MIN;
	int64_t t48 = INT64_MIN;

    t48 = (x221+(x222==(x223+x224)));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x230 = INT64_MIN;
	static int64_t x231 = -1LL;
	int32_t x232 = -1;
	volatile int32_t t49 = 261542560;

    t49 = (x229+(x230==(x231+x232)));

    if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x234 = -5468;
	uint64_t x235 = UINT64_MAX;
	int16_t x236 = INT16_MAX;

    t50 = (x233+(x234==(x235+x236)));

    if (t50 != -146) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x239 = 54322102502LLU;
	volatile int64_t x240 = INT64_MAX;
	static volatile int32_t t51 = -637;

    t51 = (x237+(x238==(x239+x240)));

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x242 = INT16_MAX;
	uint64_t x243 = 4762819501148537856LLU;
	int8_t x244 = INT8_MAX;
	int64_t t52 = INT64_MIN;

    t52 = (x241+(x242==(x243+x244)));

    if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile uint32_t x250 = 2904U;
	int8_t x251 = -1;
	volatile uint8_t x252 = 18U;
	int32_t t53 = -2131739;

    t53 = (x249+(x250==(x251+x252)));

    if (t53 != -128) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;
	int8_t x256 = INT8_MIN;
	static volatile int64_t t54 = INT64_MIN;

    t54 = (x253+(x254==(x255+x256)));

    if (t54 != INT64_MIN) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x263 = INT16_MAX;
	static int64_t x264 = INT64_MIN;
	uint32_t t55 = 102565239U;

    t55 = (x261+(x262==(x263+x264)));

    if (t55 != 750958U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x269 = INT64_MIN;
	volatile int8_t x270 = -20;
	int64_t x272 = -842224992LL;
	int64_t t56 = INT64_MIN;

    t56 = (x269+(x270==(x271+x272)));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint64_t x273 = 172178260LLU;
	uint32_t x274 = UINT32_MAX;
	volatile int32_t x275 = INT32_MIN;
	volatile int64_t x276 = INT64_MAX;

    t57 = (x273+(x274==(x275+x276)));

    if (t57 != 172178260LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x278 = 0U;
	uint32_t x279 = UINT32_MAX;
	static int64_t x280 = 429LL;
	static volatile uint32_t t58 = 446206477U;

    t58 = (x277+(x278==(x279+x280)));

    if (t58 != 6229963U) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x281 = -1;
	int32_t x282 = 20021;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MAX;

    t59 = (x281+(x282==(x283+x284)));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x285 = 49;
	int32_t x286 = -37;
	int32_t x287 = INT32_MAX;
	volatile int32_t t60 = 7499;

    t60 = (x285+(x286==(x287+x288)));

    if (t60 != 49) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x290 = INT32_MAX;
	int64_t x291 = INT64_MAX;
	int16_t x292 = -1;

    t61 = (x289+(x290==(x291+x292)));

    if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x293 = INT8_MIN;
	volatile int32_t x294 = -1;
	int16_t x295 = INT16_MAX;
	int32_t x296 = -19;
	volatile int32_t t62 = 363338;

    t62 = (x293+(x294==(x295+x296)));

    if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = 4U;
	static int64_t x300 = INT64_MIN;

    t63 = (x297+(x298==(x299+x300)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x301 = INT64_MIN;
	volatile int64_t t64 = INT64_MIN;

    t64 = (x301+(x302==(x303+x304)));

    if (t64 != INT64_MIN) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x305 = 15U;
	volatile int8_t x306 = INT8_MIN;
	uint16_t x308 = 5167U;
	static volatile uint32_t t65 = 27773U;

    t65 = (x305+(x306==(x307+x308)));

    if (t65 != 15U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x309 = 1;
	uint16_t x311 = 1044U;
	volatile int32_t t66 = -43535013;

    t66 = (x309+(x310==(x311+x312)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x319 = INT16_MIN;
	uint32_t x320 = 41358U;
	volatile int32_t t67 = -7648;

    t67 = (x317+(x318==(x319+x320)));

    if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 2LLU;
	static int32_t t68 = 24599;

    t68 = (x321+(x322==(x323+x324)));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int32_t x325 = INT32_MAX;
	static volatile uint64_t x326 = 2202751317049694LLU;

    t69 = (x325+(x326==(x327+x328)));

    if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x329 = -1;
	static volatile int64_t x330 = -1709473098276695LL;
	uint16_t x331 = 12435U;
	int32_t x332 = -176579;
	int32_t t70 = -56;

    t70 = (x329+(x330==(x331+x332)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint16_t x334 = 30298U;
	volatile int8_t x335 = INT8_MIN;
	volatile int32_t t71 = 27;

    t71 = (x333+(x334==(x335+x336)));

    if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x337 = INT16_MIN;
	static int8_t x338 = INT8_MAX;
	int16_t x339 = 539;
	volatile uint16_t x340 = 1U;

    t72 = (x337+(x338==(x339+x340)));

    if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x341 = -1;
	volatile uint8_t x342 = UINT8_MAX;
	int64_t x343 = -1LL;
	volatile uint8_t x344 = UINT8_MAX;
	int32_t t73 = -379471;

    t73 = (x341+(x342==(x343+x344)));

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x345 = 207612LLU;
	volatile int64_t x346 = INT64_MAX;
	int16_t x348 = INT16_MAX;
	static uint64_t t74 = 58477634LLU;

    t74 = (x345+(x346==(x347+x348)));

    if (t74 != 207612LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x349 = -1;
	int16_t x350 = 202;
	static int8_t x351 = INT8_MAX;
	volatile int16_t x352 = INT16_MIN;

    t75 = (x349+(x350==(x351+x352)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x354 = INT64_MAX;
	volatile int16_t x355 = -21;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t76 = 218023696997341269LLU;

    t76 = (x353+(x354==(x355+x356)));

    if (t76 != 41552LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x357 = INT16_MIN;
	static int64_t x358 = 1168LL;
	int8_t x359 = -1;
	uint32_t x360 = UINT32_MAX;
	int32_t t77 = -2545155;

    t77 = (x357+(x358==(x359+x360)));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x361 = 82181LLU;
	int8_t x362 = INT8_MAX;
	static volatile uint32_t x363 = 8201242U;
	int64_t x364 = -1LL;
	uint64_t t78 = 119937400373839LLU;

    t78 = (x361+(x362==(x363+x364)));

    if (t78 != 82181LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x365 = INT16_MIN;
	uint8_t x366 = UINT8_MAX;
	uint16_t x367 = UINT16_MAX;

    t79 = (x365+(x366==(x367+x368)));

    if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int8_t x371 = INT8_MAX;
	int16_t x372 = INT16_MIN;
	int32_t t80 = 1243;

    t80 = (x369+(x370==(x371+x372)));

    if (t80 != 19) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x373 = 1434748489U;
	static volatile int16_t x374 = 19;
	uint16_t x376 = UINT16_MAX;
	volatile uint32_t t81 = 57365U;

    t81 = (x373+(x374==(x375+x376)));

    if (t81 != 1434748489U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x381 = INT8_MIN;
	volatile int8_t x382 = INT8_MAX;
	uint32_t x383 = 2U;
	static int32_t t82 = -2156;

    t82 = (x381+(x382==(x383+x384)));

    if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = -15;
	int32_t t83 = -2;

    t83 = (x385+(x386==(x387+x388)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x393 = 10031405339LL;
	int32_t x394 = -1;
	static uint16_t x396 = 682U;
	static int64_t t84 = 5LL;

    t84 = (x393+(x394==(x395+x396)));

    if (t84 != 10031405339LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x398 = INT8_MIN;

    t85 = (x397+(x398==(x399+x400)));

    if (t85 != 9091817U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x405 = INT64_MAX;
	uint8_t x406 = 44U;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 3U;
	static int64_t t86 = INT64_MAX;

    t86 = (x405+(x406==(x407+x408)));

    if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x409 = 0LL;
	int16_t x410 = INT16_MIN;
	static uint64_t x412 = 86941565033410LLU;
	int64_t t87 = 280331201607093336LL;

    t87 = (x409+(x410==(x411+x412)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x413 = -1;
	volatile int8_t x415 = -13;
	static int8_t x416 = -5;
	volatile int32_t t88 = -3766;

    t88 = (x413+(x414==(x415+x416)));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x417 = 10U;
	int64_t x418 = INT64_MAX;
	static int8_t x419 = INT8_MAX;
	int64_t x420 = INT64_MIN;

    t89 = (x417+(x418==(x419+x420)));

    if (t89 != 10) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x421 = -57;
	int64_t x422 = -4000LL;
	volatile int64_t x424 = -1LL;

    t90 = (x421+(x422==(x423+x424)));

    if (t90 != -57) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x425 = INT64_MAX;
	static int32_t x426 = INT32_MIN;
	volatile int8_t x427 = -2;
	static int32_t x428 = 1;
	volatile int64_t t91 = INT64_MAX;

    t91 = (x425+(x426==(x427+x428)));

    if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x429 = 421048638;
	uint64_t x430 = UINT64_MAX;
	int64_t x431 = 1145197589586LL;
	int32_t x432 = -1;

    t92 = (x429+(x430==(x431+x432)));

    if (t92 != 421048638) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x434 = INT8_MIN;
	int64_t x435 = 25LL;
	static int32_t t93 = 653;

    t93 = (x433+(x434==(x435+x436)));

    if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x437 = INT64_MIN;
	uint16_t x438 = UINT16_MAX;
	int64_t x439 = -30186228780725074LL;

    t94 = (x437+(x438==(x439+x440)));

    if (t94 != INT64_MIN) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x441 = INT16_MAX;
	uint32_t x442 = 15501145U;
	int32_t x443 = INT32_MIN;

    t95 = (x441+(x442==(x443+x444)));

    if (t95 != 32767) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x445 = INT64_MIN;
	uint16_t x446 = 3570U;
	int8_t x448 = -1;
	volatile int64_t t96 = INT64_MIN;

    t96 = (x445+(x446==(x447+x448)));

    if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x449 = -9;
	int16_t x450 = INT16_MIN;
	int16_t x451 = -79;
	uint16_t x452 = UINT16_MAX;
	static volatile int32_t t97 = 565754241;

    t97 = (x449+(x450==(x451+x452)));

    if (t97 != -9) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x453 = UINT32_MAX;
	int64_t x454 = INT64_MAX;
	int16_t x456 = 148;
	static volatile uint32_t t98 = UINT32_MAX;

    t98 = (x453+(x454==(x455+x456)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x457 = 544107LLU;
	int64_t x460 = -1LL;
	volatile uint64_t t99 = 5LLU;

    t99 = (x457+(x458==(x459+x460)));

    if (t99 != 544107LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x461 = INT8_MIN;
	static uint16_t x462 = UINT16_MAX;
	int64_t x463 = INT64_MAX;
	uint64_t x464 = UINT64_MAX;
	int32_t t100 = 59;

    t100 = (x461+(x462==(x463+x464)));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x469 = INT32_MIN;
	static volatile uint64_t x471 = 4434718089356LLU;
	uint16_t x472 = 35U;
	int32_t t101 = INT32_MIN;

    t101 = (x469+(x470==(x471+x472)));

    if (t101 != INT32_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x473 = 0U;
	volatile int32_t x474 = -1051056151;
	int8_t x475 = 57;
	int16_t x476 = 7;
	int32_t t102 = 186596;

    t102 = (x473+(x474==(x475+x476)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x481 = UINT8_MAX;
	volatile uint32_t x482 = UINT32_MAX;
	int32_t x483 = INT32_MIN;
	volatile uint64_t x484 = 197500LLU;
	int32_t t103 = -70446;

    t103 = (x481+(x482==(x483+x484)));

    if (t103 != 255) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x485 = 235LLU;
	volatile int64_t x486 = INT64_MIN;
	uint64_t x487 = UINT64_MAX;
	int32_t x488 = INT32_MAX;
	volatile uint64_t t104 = 1712604230740674678LLU;

    t104 = (x485+(x486==(x487+x488)));

    if (t104 != 235LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x489 = 83884067876338220LL;
	static int16_t x491 = INT16_MIN;
	uint32_t x492 = 391U;

    t105 = (x489+(x490==(x491+x492)));

    if (t105 != 83884067876338220LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x493 = INT16_MAX;
	volatile uint8_t x494 = 7U;
	static int32_t x495 = -1;
	int32_t x496 = -1;
	int32_t t106 = 112465;

    t106 = (x493+(x494==(x495+x496)));

    if (t106 != 32767) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x497 = UINT16_MAX;
	volatile int8_t x498 = 24;
	int32_t x499 = -799;
	int8_t x500 = 0;

    t107 = (x497+(x498==(x499+x500)));

    if (t107 != 65535) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x501 = 228320493LLU;
	uint16_t x502 = 1U;
	int16_t x503 = -1;
	uint64_t x504 = UINT64_MAX;
	static uint64_t t108 = 14448LLU;

    t108 = (x501+(x502==(x503+x504)));

    if (t108 != 228320493LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x507 = UINT64_MAX;
	volatile uint32_t x508 = UINT32_MAX;
	static int32_t t109 = -40;

    t109 = (x505+(x506==(x507+x508)));

    if (t109 != 506) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x509 = UINT16_MAX;
	uint8_t x510 = UINT8_MAX;
	int32_t x511 = INT32_MIN;
	int64_t x512 = -1LL;
	volatile int32_t t110 = -484391;

    t110 = (x509+(x510==(x511+x512)));

    if (t110 != 65535) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x513 = INT8_MIN;
	static uint64_t x514 = UINT64_MAX;
	int16_t x515 = INT16_MIN;

    t111 = (x513+(x514==(x515+x516)));

    if (t111 != -128) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x518 = INT32_MIN;
	volatile int8_t x519 = INT8_MIN;
	static int64_t x520 = -1LL;
	volatile int32_t t112 = -15;

    t112 = (x517+(x518==(x519+x520)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x521 = INT16_MIN;
	uint16_t x523 = 3000U;
	uint64_t x524 = 7562680776767792LLU;

    t113 = (x521+(x522==(x523+x524)));

    if (t113 != -32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x526 = -6;
	int32_t x528 = -1;
	uint64_t t114 = UINT64_MAX;

    t114 = (x525+(x526==(x527+x528)));

    if (t114 != UINT64_MAX) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x529 = -7772;
	static int32_t x530 = -4009;
	int32_t x531 = -1;
	int32_t x532 = -4022;
	int32_t t115 = -445;

    t115 = (x529+(x530==(x531+x532)));

    if (t115 != -7772) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x533 = INT16_MAX;
	static int32_t x535 = INT32_MAX;
	int64_t x536 = -1LL;
	int32_t t116 = 70;

    t116 = (x533+(x534==(x535+x536)));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x541 = INT32_MAX;
	volatile int16_t x542 = -1;
	uint64_t x543 = 965LLU;
	int64_t x544 = 130234630LL;
	int32_t t117 = INT32_MAX;

    t117 = (x541+(x542==(x543+x544)));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x546 = UINT32_MAX;
	uint64_t x547 = UINT64_MAX;
	uint64_t x548 = UINT64_MAX;
	int32_t t118 = 1477;

    t118 = (x545+(x546==(x547+x548)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x549 = -1;
	static int32_t x550 = 1;
	int16_t x551 = INT16_MIN;
	uint64_t x552 = UINT64_MAX;
	volatile int32_t t119 = -1541;

    t119 = (x549+(x550==(x551+x552)));

    if (t119 != -1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x553 = 775U;
	volatile int32_t x554 = -1;
	volatile uint16_t x555 = UINT16_MAX;
	int8_t x556 = -1;
	static uint32_t t120 = 666856757U;

    t120 = (x553+(x554==(x555+x556)));

    if (t120 != 775U) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x557 = -1;
	int8_t x558 = INT8_MIN;
	static uint16_t x559 = 5303U;
	int64_t x560 = INT64_MIN;
	static int32_t t121 = -16801;

    t121 = (x557+(x558==(x559+x560)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = -1;
	int8_t x562 = INT8_MAX;
	uint32_t x563 = 1766751U;
	uint8_t x564 = 12U;
	int32_t t122 = -353034099;

    t122 = (x561+(x562==(x563+x564)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x567 = 96716929856840007LLU;
	static volatile int64_t x568 = 48482LL;
	volatile int32_t t123 = 12;

    t123 = (x565+(x566==(x567+x568)));

    if (t123 != 65535) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x574 = 3178U;
	int64_t x575 = -1582304534104329LL;
	static int8_t x576 = INT8_MIN;
	int32_t t124 = -3332;

    t124 = (x573+(x574==(x575+x576)));

    if (t124 != 171) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x577 = -5402;
	static uint64_t x578 = 10LLU;
	volatile int16_t x579 = INT16_MAX;
	volatile int32_t t125 = -1245;

    t125 = (x577+(x578==(x579+x580)));

    if (t125 != -5402) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x581 = 13118U;
	int16_t x582 = INT16_MIN;
	int8_t x583 = 5;
	int32_t x584 = 53141101;
	volatile int32_t t126 = 41668664;

    t126 = (x581+(x582==(x583+x584)));

    if (t126 != 13118) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t t127 = UINT64_MAX;

    t127 = (x585+(x586==(x587+x588)));

    if (t127 != UINT64_MAX) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x589 = 3065602966224LL;
	uint64_t x591 = 844281LLU;
	int32_t x592 = INT32_MIN;
	int64_t t128 = 364619458677598495LL;

    t128 = (x589+(x590==(x591+x592)));

    if (t128 != 3065602966224LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x594 = INT64_MAX;
	static volatile int64_t x595 = INT64_MIN;
	uint64_t x596 = 8367678LLU;
	int64_t t129 = 343661701816412589LL;

    t129 = (x593+(x594==(x595+x596)));

    if (t129 != 1923058387490307857LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x597 = -52420735;
	static uint16_t x598 = 15952U;
	int64_t x599 = INT64_MIN;
	uint32_t x600 = 32611U;
	volatile int32_t t130 = 480658;

    t130 = (x597+(x598==(x599+x600)));

    if (t130 != -52420735) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x601 = -1;
	static volatile uint16_t x602 = UINT16_MAX;
	volatile int32_t x603 = 1;
	uint8_t x604 = UINT8_MAX;

    t131 = (x601+(x602==(x603+x604)));

    if (t131 != -1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x606 = 10U;
	static uint16_t x607 = 1521U;
	int16_t x608 = INT16_MIN;
	static int32_t t132 = -34704702;

    t132 = (x605+(x606==(x607+x608)));

    if (t132 != -1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x609 = -1LL;
	int16_t x610 = -178;
	static volatile int64_t t133 = 122LL;

    t133 = (x609+(x610==(x611+x612)));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = INT8_MIN;
	volatile int16_t x614 = 1939;
	int64_t x616 = -2835282604418LL;
	static int32_t t134 = -147524;

    t134 = (x613+(x614==(x615+x616)));

    if (t134 != -128) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x617 = 2U;
	static int32_t x618 = 175336866;
	int8_t x620 = -1;
	volatile int32_t t135 = 3;

    t135 = (x617+(x618==(x619+x620)));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x623 = UINT16_MAX;
	static volatile int64_t t136 = INT64_MIN;

    t136 = (x621+(x622==(x623+x624)));

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x626 = 7835U;
	int32_t x627 = INT32_MIN;
	uint64_t x628 = 15995922LLU;
	uint64_t t137 = 1005LLU;

    t137 = (x625+(x626==(x627+x628)));

    if (t137 != 1477031036808LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x630 = 57U;
	int8_t x631 = -4;
	volatile int32_t t138 = 412680;

    t138 = (x629+(x630==(x631+x632)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x637 = INT16_MAX;
	volatile uint64_t x638 = UINT64_MAX;
	int8_t x639 = 43;
	volatile int16_t x640 = INT16_MIN;
	int32_t t139 = 598;

    t139 = (x637+(x638==(x639+x640)));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x643 = UINT16_MAX;
	static int16_t x644 = INT16_MIN;
	int32_t t140 = 111562;

    t140 = (x641+(x642==(x643+x644)));

    if (t140 != 118569) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x645 = 308;
	uint64_t x646 = 95437608LLU;
	int8_t x647 = INT8_MIN;
	volatile int32_t t141 = -144;

    t141 = (x645+(x646==(x647+x648)));

    if (t141 != 308) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x649 = 933206713441LLU;
	uint8_t x650 = 32U;
	int32_t x652 = -1;
	static uint64_t t142 = 906663322676181555LLU;

    t142 = (x649+(x650==(x651+x652)));

    if (t142 != 933206713441LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x653 = INT32_MAX;
	int64_t x654 = -1LL;
	uint16_t x655 = UINT16_MAX;
	static volatile int16_t x656 = INT16_MAX;
	int32_t t143 = INT32_MAX;

    t143 = (x653+(x654==(x655+x656)));

    if (t143 != INT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x657 = 18618886U;
	volatile int16_t x660 = -14962;

    t144 = (x657+(x658==(x659+x660)));

    if (t144 != 18618886U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x665 = 0;
	uint16_t x667 = 33U;
	static int8_t x668 = INT8_MAX;
	static int32_t t145 = -6322;

    t145 = (x665+(x666==(x667+x668)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x669 = INT32_MIN;
	static int64_t x670 = INT64_MIN;
	static int32_t x671 = INT32_MAX;
	int8_t x672 = 0;
	static volatile int32_t t146 = INT32_MIN;

    t146 = (x669+(x670==(x671+x672)));

    if (t146 != INT32_MIN) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x675 = -1LL;
	static int32_t t147 = 1655;

    t147 = (x673+(x674==(x675+x676)));

    if (t147 != -19) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x678 = -1LL;
	int8_t x680 = 0;
	volatile int32_t t148 = -4464;

    t148 = (x677+(x678==(x679+x680)));

    if (t148 != -1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x681 = 682U;
	int8_t x682 = -25;
	int16_t x684 = -181;
	volatile int32_t t149 = 1011;

    t149 = (x681+(x682==(x683+x684)));

    if (t149 != 682) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x686 = UINT64_MAX;
	uint8_t x687 = UINT8_MAX;
	volatile int16_t x688 = INT16_MAX;
	int64_t t150 = INT64_MAX;

    t150 = (x685+(x686==(x687+x688)));

    if (t150 != INT64_MAX) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x693 = 9U;
	volatile int64_t x695 = -1132277808029630LL;
	int16_t x696 = INT16_MAX;
	volatile int32_t t151 = -11;

    t151 = (x693+(x694==(x695+x696)));

    if (t151 != 9) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x697 = 122913843U;
	volatile int16_t x698 = -1;
	volatile uint16_t x699 = 904U;
	int64_t x700 = -1LL;

    t152 = (x697+(x698==(x699+x700)));

    if (t152 != 122913843U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x706 = 82866388478LLU;
	static uint64_t x707 = 212017158LLU;

    t153 = (x705+(x706==(x707+x708)));

    if (t153 != 255) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x713 = -1;
	int32_t t154 = 100401359;

    t154 = (x713+(x714==(x715+x716)));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MIN;
	static int16_t x719 = 132;
	volatile int32_t x720 = INT32_MIN;
	volatile int64_t t155 = INT64_MIN;

    t155 = (x717+(x718==(x719+x720)));

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x721 = 0U;
	uint8_t x722 = UINT8_MAX;
	int32_t x723 = 10449;
	static volatile int8_t x724 = INT8_MIN;
	volatile uint32_t t156 = 8056U;

    t156 = (x721+(x722==(x723+x724)));

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x726 = INT8_MAX;
	int16_t x727 = INT16_MIN;
	static int8_t x728 = -6;

    t157 = (x725+(x726==(x727+x728)));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x729 = 1U;
	volatile int16_t x730 = INT16_MIN;
	volatile uint32_t x731 = 23U;
	volatile int32_t t158 = -3207;

    t158 = (x729+(x730==(x731+x732)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x733 = 0U;
	static int64_t x735 = -1LL;
	volatile int32_t t159 = -144;

    t159 = (x733+(x734==(x735+x736)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x737 = INT32_MIN;
	int16_t x738 = INT16_MAX;
	int32_t x739 = -1;
	volatile int32_t x740 = INT32_MAX;
	static volatile int32_t t160 = INT32_MIN;

    t160 = (x737+(x738==(x739+x740)));

    if (t160 != INT32_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x741 = INT32_MAX;
	static volatile uint16_t x742 = UINT16_MAX;
	static int32_t x743 = INT32_MIN;
	int32_t x744 = 4496;
	int32_t t161 = INT32_MAX;

    t161 = (x741+(x742==(x743+x744)));

    if (t161 != INT32_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x745 = 30;
	int8_t x746 = INT8_MIN;
	static volatile uint32_t x747 = UINT32_MAX;

    t162 = (x745+(x746==(x747+x748)));

    if (t162 != 30) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint64_t x749 = UINT64_MAX;
	int8_t x750 = INT8_MAX;

    t163 = (x749+(x750==(x751+x752)));

    if (t163 != UINT64_MAX) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x757 = 714011U;
	volatile int32_t x758 = -1;
	int8_t x759 = -1;
	int64_t x760 = 4LL;
	uint32_t t164 = 34180U;

    t164 = (x757+(x758==(x759+x760)));

    if (t164 != 714011U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x761 = 315U;
	static int16_t x762 = -1;
	int8_t x763 = -1;
	static uint16_t x764 = 109U;
	static int32_t t165 = -135342;

    t165 = (x761+(x762==(x763+x764)));

    if (t165 != 315) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x766 = INT16_MAX;
	volatile int64_t x767 = 3382307453855825749LL;
	int32_t x768 = -1;
	volatile int32_t t166 = -3507;

    t166 = (x765+(x766==(x767+x768)));

    if (t166 != 7827) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x769 = -1;
	volatile int64_t x770 = INT64_MAX;
	uint8_t x771 = 120U;
	uint16_t x772 = 209U;

    t167 = (x769+(x770==(x771+x772)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x773 = -18;
	int8_t x774 = -1;
	uint64_t x775 = 1050203560449655LLU;
	static volatile int32_t t168 = 1;

    t168 = (x773+(x774==(x775+x776)));

    if (t168 != -18) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x777 = -1LL;
	int16_t x778 = -1;
	static int64_t x779 = INT64_MIN;
	uint32_t x780 = UINT32_MAX;
	volatile int64_t t169 = 35254456435277537LL;

    t169 = (x777+(x778==(x779+x780)));

    if (t169 != -1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x782 = INT16_MIN;
	volatile uint32_t x784 = 12615606U;

    t170 = (x781+(x782==(x783+x784)));

    if (t170 != INT32_MAX) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x785 = 9LL;
	int32_t x786 = -1;
	int64_t x787 = 55424647040LL;

    t171 = (x785+(x786==(x787+x788)));

    if (t171 != 9LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x793 = UINT16_MAX;
	volatile uint32_t x794 = 356202625U;
	uint16_t x795 = 0U;
	int8_t x796 = INT8_MAX;
	volatile int32_t t172 = -232747;

    t172 = (x793+(x794==(x795+x796)));

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x798 = 2194755212LLU;
	int64_t x799 = 34702LL;
	uint32_t x800 = UINT32_MAX;

    t173 = (x797+(x798==(x799+x800)));

    if (t173 != -915292271045839396LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x801 = -1;
	int16_t x802 = -1;
	uint8_t x803 = UINT8_MAX;
	uint32_t x804 = UINT32_MAX;

    t174 = (x801+(x802==(x803+x804)));

    if (t174 != -1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x805 = UINT8_MAX;
	uint8_t x807 = UINT8_MAX;
	static int16_t x808 = INT16_MAX;
	volatile int32_t t175 = -499;

    t175 = (x805+(x806==(x807+x808)));

    if (t175 != 255) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x813 = INT8_MIN;
	static int8_t x815 = INT8_MIN;
	uint16_t x816 = 0U;
	volatile int32_t t176 = -12921;

    t176 = (x813+(x814==(x815+x816)));

    if (t176 != -128) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x817 = -1808;
	uint16_t x818 = 6699U;
	int8_t x819 = 2;
	static int32_t x820 = INT32_MIN;
	int32_t t177 = -8279;

    t177 = (x817+(x818==(x819+x820)));

    if (t177 != -1808) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x821 = 1U;
	int64_t x822 = -1LL;
	static uint32_t x823 = 59223016U;
	int64_t x824 = -1LL;
	volatile int32_t t178 = 1;

    t178 = (x821+(x822==(x823+x824)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x825 = INT16_MIN;
	static int64_t x828 = -481LL;
	int32_t t179 = -46;

    t179 = (x825+(x826==(x827+x828)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x829 = 2U;
	uint32_t x830 = 19291771U;
	int16_t x831 = INT16_MIN;
	uint16_t x832 = 248U;
	volatile int32_t t180 = -32426;

    t180 = (x829+(x830==(x831+x832)));

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int64_t x834 = INT64_MIN;
	int8_t x835 = 3;
	volatile uint32_t x836 = 177784412U;
	volatile int32_t t181 = INT32_MIN;

    t181 = (x833+(x834==(x835+x836)));

    if (t181 != INT32_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x837 = INT64_MIN;
	static int64_t x839 = INT64_MAX;
	uint64_t x840 = 459523072LLU;
	volatile int64_t t182 = INT64_MIN;

    t182 = (x837+(x838==(x839+x840)));

    if (t182 != INT64_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x841 = 3822;
	static int8_t x842 = 29;
	volatile int32_t x843 = INT32_MIN;
	uint16_t x844 = UINT16_MAX;
	int32_t t183 = -97787827;

    t183 = (x841+(x842==(x843+x844)));

    if (t183 != 3822) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x845 = INT64_MIN;
	int16_t x846 = INT16_MIN;
	volatile int64_t t184 = INT64_MIN;

    t184 = (x845+(x846==(x847+x848)));

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x849 = INT16_MIN;
	int16_t x850 = INT16_MAX;
	int8_t x851 = -1;
	int16_t x852 = INT16_MIN;
	volatile int32_t t185 = 16789018;

    t185 = (x849+(x850==(x851+x852)));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x853 = INT32_MAX;
	volatile uint64_t x854 = 1904758402509LLU;
	static int8_t x855 = INT8_MIN;
	int32_t t186 = INT32_MAX;

    t186 = (x853+(x854==(x855+x856)));

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x857 = 0LL;
	int8_t x859 = INT8_MAX;
	int16_t x860 = -1;

    t187 = (x857+(x858==(x859+x860)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int8_t x861 = -1;
	static volatile int64_t x862 = INT64_MIN;
	static uint8_t x863 = 6U;
	static int8_t x864 = -1;
	volatile int32_t t188 = 379952392;

    t188 = (x861+(x862==(x863+x864)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x865 = INT64_MAX;
	volatile int64_t x866 = INT64_MIN;
	uint64_t x868 = 2LLU;
	volatile int64_t t189 = INT64_MAX;

    t189 = (x865+(x866==(x867+x868)));

    if (t189 != INT64_MAX) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x874 = INT16_MIN;
	static int32_t x876 = INT32_MIN;
	static int32_t t190 = INT32_MAX;

    t190 = (x873+(x874==(x875+x876)));

    if (t190 != INT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int16_t x877 = INT16_MIN;
	volatile uint8_t x878 = 111U;
	int16_t x879 = 55;
	int64_t x880 = -216451LL;

    t191 = (x877+(x878==(x879+x880)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x881 = INT16_MAX;
	int64_t x882 = INT64_MIN;
	int16_t x883 = -1;
	static uint64_t x884 = UINT64_MAX;

    t192 = (x881+(x882==(x883+x884)));

    if (t192 != 32767) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x885 = UINT16_MAX;
	static int16_t x886 = INT16_MIN;
	static int32_t x887 = -17387;

    t193 = (x885+(x886==(x887+x888)));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x889 = -54;
	static int16_t x890 = INT16_MAX;
	volatile int32_t t194 = 0;

    t194 = (x889+(x890==(x891+x892)));

    if (t194 != -54) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x893 = 7;
	int32_t x894 = INT32_MIN;
	int8_t x895 = INT8_MAX;
	static int32_t x896 = INT32_MIN;
	int32_t t195 = -257;

    t195 = (x893+(x894==(x895+x896)));

    if (t195 != 7) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x897 = 60U;
	static volatile int8_t x899 = INT8_MAX;
	uint32_t x900 = 7U;
	static int32_t t196 = -480229048;

    t196 = (x897+(x898==(x899+x900)));

    if (t196 != 60) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x905 = -1;
	uint64_t x907 = 19568873441LLU;
	int8_t x908 = -1;
	static volatile int32_t t197 = -5065139;

    t197 = (x905+(x906==(x907+x908)));

    if (t197 != -1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x909 = 1230396LL;
	uint8_t x911 = UINT8_MAX;
	static volatile uint64_t x912 = 521016353LLU;

    t198 = (x909+(x910==(x911+x912)));

    if (t198 != 1230396LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x913 = -1LL;
	volatile uint32_t x914 = 99U;
	static int32_t x915 = -1;
	int32_t x916 = -3550481;
	static volatile int64_t t199 = 11LL;

    t199 = (x913+(x914==(x915+x916)));

    if (t199 != -1LL) { NG(); } else { ; }
	
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

