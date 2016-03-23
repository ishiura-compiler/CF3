
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

uint8_t x4 = 42U;
int16_t x20 = 1029;
int8_t x26 = -1;
int32_t x32 = INT32_MIN;
static int32_t x40 = INT32_MIN;
int16_t x41 = INT16_MIN;
static int64_t t10 = -6946604306LL;
int16_t x54 = 1;
int64_t x55 = INT64_MIN;
int64_t t12 = -428783948LL;
int16_t x69 = -1;
volatile uint32_t t14 = UINT32_MAX;
static int8_t x73 = INT8_MAX;
int32_t x74 = -6822;
uint64_t t16 = 29849LLU;
int64_t x81 = INT64_MAX;
static int32_t x88 = 766840323;
int8_t x97 = INT8_MAX;
uint64_t x101 = 55927902LLU;
int16_t x104 = 201;
static volatile uint64_t t22 = 48257862830526LLU;
int32_t x108 = 12752231;
int64_t x118 = INT64_MIN;
int64_t x119 = -16LL;
uint8_t x123 = 50U;
int8_t x125 = 0;
int32_t x126 = INT32_MAX;
int32_t x127 = INT32_MIN;
volatile uint64_t t30 = 2755728360427647390LLU;
uint8_t x160 = UINT8_MAX;
static volatile int32_t x161 = -1;
uint32_t t36 = 503180U;
static uint16_t x171 = 1U;
int32_t x172 = -1;
uint32_t x177 = 1210U;
uint64_t x182 = UINT64_MAX;
int64_t t41 = INT64_MIN;
static uint16_t x194 = 1514U;
uint64_t x200 = 180348199LLU;
volatile uint64_t t44 = 209332026660445LLU;
int64_t t45 = -426230LL;
volatile int64_t t46 = 24267231012763190LL;
volatile uint16_t x210 = 115U;
uint64_t t47 = 107899LLU;
uint64_t x218 = 590LLU;
volatile uint64_t t49 = 24LLU;
int16_t x228 = INT16_MAX;
int64_t t50 = 104775797504966LL;
uint8_t x231 = 3U;
int16_t x236 = -1;
volatile uint32_t x251 = UINT32_MAX;
volatile uint64_t t56 = 855630622LLU;
int32_t x264 = -1;
int64_t x265 = -97LL;
uint8_t x266 = 126U;
int16_t x267 = INT16_MIN;
volatile int64_t t58 = -286519117839411837LL;
int64_t x277 = -3063005LL;
uint8_t x289 = 51U;
uint8_t x293 = 9U;
int16_t x295 = -1;
int8_t x300 = INT8_MIN;
static int32_t t66 = -10;
volatile int64_t x306 = -1172576LL;
uint16_t x315 = 7U;
uint16_t x342 = UINT16_MAX;
int16_t x344 = INT16_MAX;
volatile int32_t t75 = -329956406;
uint32_t x355 = 1305U;
uint32_t x356 = 185408435U;
uint64_t t77 = 718582465452LLU;
static int8_t x363 = INT8_MIN;
static int8_t x365 = -9;
int32_t x381 = -65360;
uint32_t x384 = 7U;
volatile int8_t x391 = -1;
int16_t x400 = 12592;
int64_t t84 = 94489LL;
static volatile uint16_t x407 = 1921U;
static int32_t x419 = -1;
int32_t t88 = -2988191;
int64_t x424 = 1783283LL;
static uint8_t x425 = 70U;
int64_t x428 = -1LL;
int16_t x433 = INT16_MIN;
volatile int64_t t93 = 304208078622678120LL;
int32_t t95 = -11171119;
int32_t x460 = INT32_MIN;
static uint8_t x462 = 1U;
uint32_t t99 = 1459986265U;
int16_t x472 = -1;
int64_t x480 = -1LL;
static int64_t x481 = -1LL;
int8_t x493 = INT8_MIN;
volatile int32_t x498 = -1;
uint64_t x500 = 50407050218LLU;
static int8_t x505 = -7;
volatile uint16_t x507 = 2301U;
volatile int32_t t109 = 1815794;
volatile int16_t x533 = -1;
uint16_t x535 = 0U;
int64_t x536 = 26976154530321463LL;
static uint64_t x543 = 45591265432LLU;
uint32_t x546 = UINT32_MAX;
uint8_t x547 = 56U;
volatile int64_t x548 = -1LL;
volatile int64_t t115 = -432717878552475LL;
int16_t x569 = INT16_MIN;
uint16_t x577 = UINT16_MAX;
uint8_t x578 = 0U;
int32_t x579 = 1019874927;
volatile uint64_t t120 = 1950148LLU;
volatile uint64_t x581 = 117081928901415LLU;
int16_t x585 = INT16_MIN;
uint32_t x600 = 46U;
int8_t x605 = -1;
uint32_t x608 = 612100996U;
uint16_t x609 = 7717U;
int64_t t127 = 123669832216LL;
volatile int8_t x613 = INT8_MIN;
uint64_t x622 = UINT64_MAX;
static volatile int32_t x660 = INT32_MIN;
volatile uint32_t x671 = UINT32_MAX;
uint64_t t138 = 135637044515LLU;
uint64_t x673 = 51484062783LLU;
uint32_t x674 = UINT32_MAX;
static volatile int16_t x675 = -15;
static int8_t x676 = INT8_MIN;
uint64_t t141 = 28877941110578803LLU;
volatile int16_t x694 = -1;
int64_t x700 = INT64_MIN;
int64_t x715 = -234677LL;
int16_t x716 = INT16_MIN;
int64_t x717 = INT64_MIN;
int16_t x723 = INT16_MAX;
int32_t x724 = 614269679;
int32_t x734 = INT32_MIN;
uint32_t x739 = 6U;
int64_t x740 = 1102792699LL;
uint64_t x743 = 2243540130826704842LLU;
static volatile uint64_t x745 = 107297498445LLU;
int64_t x747 = INT64_MAX;
int64_t x757 = INT64_MIN;
static int64_t x758 = INT64_MAX;
volatile uint16_t x768 = 1562U;
uint64_t t157 = UINT64_MAX;
uint32_t x774 = UINT32_MAX;
static uint8_t x775 = UINT8_MAX;
volatile uint64_t t159 = 216394587LLU;
uint32_t x778 = UINT32_MAX;
static volatile int32_t x781 = -1;
int16_t x784 = INT16_MIN;
int64_t x785 = -1LL;
int64_t t162 = -1679439LL;
volatile int64_t x792 = INT64_MAX;
int32_t x796 = INT32_MIN;
uint64_t x800 = 13127LLU;
int32_t x803 = 5;
volatile int8_t x804 = 1;
static volatile uint32_t x808 = 3U;
int64_t x813 = INT64_MIN;
volatile uint32_t x814 = 5882030U;
volatile int32_t t169 = -933917220;
int16_t x827 = INT16_MIN;
uint64_t x828 = 2031024795414727539LLU;
uint64_t t170 = 1LLU;
uint32_t x829 = UINT32_MAX;
int16_t x832 = 2348;
uint32_t x833 = UINT32_MAX;
int32_t x836 = INT32_MIN;
volatile int16_t x841 = 0;
int8_t x845 = INT8_MIN;
uint16_t x848 = UINT16_MAX;
uint64_t x849 = UINT64_MAX;
int16_t x850 = 1;
volatile uint32_t t177 = 969U;
static int8_t x862 = 0;
uint64_t x864 = 40025480729106LLU;
volatile uint64_t t179 = 6265711311LLU;
int64_t x865 = -1LL;
int8_t x871 = -1;
int32_t x872 = -1;
uint32_t t181 = 113085668U;
int8_t x876 = INT8_MAX;
volatile uint32_t t182 = 568656663U;
int32_t x877 = INT32_MIN;
uint32_t x881 = 6U;
int8_t x882 = INT8_MIN;
static uint32_t t184 = 4423796U;
uint16_t x888 = UINT16_MAX;
uint64_t x889 = 182LLU;
static uint32_t x895 = 201824453U;
int16_t x902 = 3031;
static int32_t t188 = -31021;
volatile uint32_t t190 = 896401U;
int8_t x931 = INT8_MIN;
int16_t x933 = INT16_MIN;
int32_t x936 = -30;
volatile uint64_t t194 = 1LLU;
static int32_t x941 = -8499;
int64_t x943 = -1LL;
int64_t x944 = 1196749LL;
uint64_t x946 = 480014LLU;
int8_t x948 = 39;
uint64_t t196 = 1262399969675884453LLU;
static int16_t x952 = -1;
int16_t x953 = INT16_MAX;
int8_t x958 = INT8_MIN;
int32_t t199 = 666406572;


void f0(void) {
    	static uint32_t x1 = 274849U;
	uint32_t x2 = 4001U;
	int16_t x3 = -341;
	volatile uint32_t t0 = 124U;

    t0 = (x1+(x2*(x3/x4)));

    if (t0 != 242841U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint8_t x6 = 0U;
	int32_t x7 = -242334573;
	uint8_t x8 = 1U;
	static int32_t t1 = 8309;

    t1 = (x5+(x6*(x7/x8)));

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x13 = 3238044U;
	static int64_t x14 = 76372463LL;
	int32_t x15 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	int64_t t2 = 1419004068422049LL;

    t2 = (x13+(x14*(x15/x16)));

    if (t2 != -1281317228592501LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 0U;
	int16_t x19 = 2269;
	int32_t t3 = -5346340;

    t3 = (x17+(x18*(x19/x20)));

    if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MIN;
	int8_t x22 = -25;
	uint16_t x23 = UINT16_MAX;
	int64_t x24 = INT64_MIN;
	int64_t t4 = INT64_MIN;

    t4 = (x21+(x22*(x23/x24)));

    if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x25 = 0;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;
	volatile int64_t t5 = 6632055479277006LL;

    t5 = (x25+(x26*(x27/x28)));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = -475;
	static int32_t x30 = INT32_MAX;
	static uint8_t x31 = UINT8_MAX;
	static int32_t t6 = 908;

    t6 = (x29+(x30*(x31/x32)));

    if (t6 != -475) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x37 = 0U;
	volatile int32_t x38 = INT32_MIN;
	int32_t x39 = -1;
	static int32_t t7 = 119644;

    t7 = (x37+(x38*(x39/x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x42 = INT8_MAX;
	int64_t x43 = -263018341LL;
	volatile int8_t x44 = INT8_MAX;
	volatile int64_t t8 = -18609227832473LL;

    t8 = (x41+(x42*(x43/x44)));

    if (t8 != -263051038LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	uint32_t x46 = 3953504U;
	uint64_t x47 = UINT64_MAX;
	int32_t x48 = INT32_MIN;
	volatile uint64_t t9 = 13652LLU;

    t9 = (x45+(x46*(x47/x48)));

    if (t9 != 3953376LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x49 = UINT32_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x51 = 12989960;
	int64_t x52 = INT64_MIN;

    t10 = (x49+(x50*(x51/x52)));

    if (t10 != 4294967295LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x53 = -34;
	uint32_t x56 = 51U;
	volatile int64_t t11 = 20336LL;

    t11 = (x53+(x54*(x55/x56)));

    if (t11 != -180850432095191716LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint16_t x61 = 2U;
	volatile int64_t x62 = -143988LL;
	static volatile int8_t x63 = -40;
	uint16_t x64 = UINT16_MAX;

    t12 = (x61+(x62*(x63/x64)));

    if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x65 = INT8_MIN;
	int64_t x66 = -3303164LL;
	uint8_t x67 = 35U;
	uint16_t x68 = 3U;
	volatile int64_t t13 = -2150649392690975LL;

    t13 = (x65+(x66*(x67/x68)));

    if (t13 != -36334932LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x70 = UINT32_MAX;
	volatile int8_t x71 = 1;
	int32_t x72 = INT32_MIN;

    t14 = (x69+(x70*(x71/x72)));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x75 = -1;
	uint16_t x76 = 15624U;
	int32_t t15 = -859980;

    t15 = (x73+(x74*(x75/x76)));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MAX;
	static volatile int32_t x78 = INT32_MIN;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = 66586209418LLU;

    t16 = (x77+(x78*(x79/x80)));

    if (t16 != 8628442824246820863LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x82 = INT8_MIN;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = -434;
	int64_t t17 = INT64_MAX;

    t17 = (x81+(x82*(x83/x84)));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MAX;
	uint16_t x87 = UINT16_MAX;
	volatile int32_t t18 = 719;

    t18 = (x85+(x86*(x87/x88)));

    if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x89 = -1LL;
	int16_t x90 = 2;
	volatile uint16_t x91 = UINT16_MAX;
	int16_t x92 = INT16_MIN;
	volatile int64_t t19 = 1545LL;

    t19 = (x89+(x90*(x91/x92)));

    if (t19 != -3LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MAX;
	int32_t x95 = -962;
	int16_t x96 = INT16_MIN;
	volatile int64_t t20 = INT64_MIN;

    t20 = (x93+(x94*(x95/x96)));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x98 = 52341672984607942LLU;
	volatile int8_t x99 = 14;
	int16_t x100 = INT16_MIN;
	uint64_t t21 = 290874LLU;

    t21 = (x97+(x98*(x99/x100)));

    if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint16_t x102 = 758U;
	volatile int16_t x103 = 7082;

    t22 = (x101+(x102*(x103/x104)));

    if (t22 != 55954432LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = 26974U;
	uint32_t x106 = 12200U;
	int64_t x107 = INT64_MIN;
	static int64_t t23 = 8LL;

    t23 = (x105+(x106*(x107/x108)));

    if (t23 != -8823957066738426LL) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x109 = 9U;
	int32_t x110 = -521538;
	int32_t x111 = 745924;
	volatile uint64_t x112 = UINT64_MAX;
	static uint64_t t24 = 4371630338752LLU;

    t24 = (x109+(x110*(x111/x112)));

    if (t24 != 9LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = -1;
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = -42;
	volatile int8_t x116 = INT8_MIN;
	volatile int32_t t25 = 46;

    t25 = (x113+(x114*(x115/x116)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x117 = 14U;
	int8_t x120 = -22;
	volatile int64_t t26 = 126056LL;

    t26 = (x117+(x118*(x119/x120)));

    if (t26 != 14LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x121 = INT32_MIN;
	uint32_t x122 = UINT32_MAX;
	uint16_t x124 = UINT16_MAX;
	uint32_t t27 = 122110591U;

    t27 = (x121+(x122*(x123/x124)));

    if (t27 != 2147483648U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x128 = INT64_MIN;
	int64_t t28 = 164509671856979LL;

    t28 = (x125+(x126*(x127/x128)));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = -1;
	uint16_t x130 = 2665U;
	static int8_t x131 = -11;
	int16_t x132 = 257;
	static volatile int32_t t29 = 514174;

    t29 = (x129+(x130*(x131/x132)));

    if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x133 = INT8_MIN;
	static volatile uint64_t x134 = UINT64_MAX;
	static volatile uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 1712483U;

    t30 = (x133+(x134*(x135/x136)));

    if (t30 != 18446733301781261567LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x137 = INT16_MAX;
	int8_t x138 = 0;
	static int8_t x139 = INT8_MAX;
	int32_t x140 = INT32_MIN;
	int32_t t31 = 1514;

    t31 = (x137+(x138*(x139/x140)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x149 = 909765903U;
	int64_t x150 = INT64_MIN;
	int64_t x151 = -1LL;
	int64_t x152 = INT64_MAX;
	volatile int64_t t32 = -48296692LL;

    t32 = (x149+(x150*(x151/x152)));

    if (t32 != 909765903LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x153 = 160;
	int32_t x154 = INT32_MAX;
	static volatile int16_t x155 = INT16_MAX;
	static uint64_t x156 = 14534302425322538LLU;
	uint64_t t33 = 313928109585616577LLU;

    t33 = (x153+(x154*(x155/x156)));

    if (t33 != 160LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x157 = -247590115;
	uint8_t x158 = 0U;
	uint8_t x159 = UINT8_MAX;
	static int32_t t34 = 51464;

    t34 = (x157+(x158*(x159/x160)));

    if (t34 != -247590115) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x162 = -1LL;
	int64_t x163 = INT64_MIN;
	int64_t x164 = INT64_MIN;
	static int64_t t35 = 114486777353LL;

    t35 = (x161+(x162*(x163/x164)));

    if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x165 = 18289972U;
	int32_t x166 = INT32_MAX;
	int16_t x167 = -1;
	int16_t x168 = INT16_MIN;

    t36 = (x165+(x166*(x167/x168)));

    if (t36 != 18289972U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x169 = 45LLU;
	uint8_t x170 = 31U;
	uint64_t t37 = 15868243LLU;

    t37 = (x169+(x170*(x171/x172)));

    if (t37 != 14LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = INT32_MAX;
	int32_t x174 = 4659785;
	static uint32_t x175 = 91487611U;
	volatile uint16_t x176 = 27452U;
	uint32_t t38 = 1713594U;

    t38 = (x173+(x174*(x175/x176)));

    if (t38 != 494018083U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x178 = -1;
	int16_t x179 = INT16_MIN;
	static int32_t x180 = -769862;
	uint32_t t39 = 314U;

    t39 = (x177+(x178*(x179/x180)));

    if (t39 != 1210U) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = INT8_MIN;
	static int8_t x183 = INT8_MAX;
	volatile int16_t x184 = -1;
	uint64_t t40 = UINT64_MAX;

    t40 = (x181+(x182*(x183/x184)));

    if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x185 = INT64_MIN;
	static int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	int64_t x188 = -186239LL;

    t41 = (x185+(x186*(x187/x188)));

    if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x189 = 554U;
	int32_t x190 = INT32_MIN;
	uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 52U;
	volatile uint64_t t42 = 292LLU;

    t42 = (x189+(x190*(x191/x192)));

    if (t42 != 9932862194196677162LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x193 = INT64_MIN;
	uint8_t x195 = 58U;
	uint16_t x196 = UINT16_MAX;
	volatile int64_t t43 = INT64_MIN;

    t43 = (x193+(x194*(x195/x196)));

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x197 = INT8_MAX;
	uint32_t x198 = 331U;
	int64_t x199 = INT64_MIN;

    t44 = (x197+(x198*(x199/x200)));

    if (t44 != 16928010155305LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x201 = UINT16_MAX;
	static int64_t x202 = -1LL;
	int64_t x203 = INT64_MIN;
	static int8_t x204 = INT8_MAX;

    t45 = (x201+(x202*(x203/x204)));

    if (t45 != 72624976668213376LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x205 = 229U;
	volatile int16_t x206 = -1;
	int32_t x207 = INT32_MIN;
	volatile int64_t x208 = INT64_MIN;

    t46 = (x205+(x206*(x207/x208)));

    if (t46 != 229LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x209 = UINT64_MAX;
	static int32_t x211 = -1;
	uint64_t x212 = 58344952317LLU;

    t47 = (x209+(x210*(x211/x212)));

    if (t47 != 36359196144LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x217 = INT16_MIN;
	uint32_t x219 = 2980U;
	uint64_t x220 = 12542LLU;
	volatile uint64_t t48 = 47437LLU;

    t48 = (x217+(x218*(x219/x220)));

    if (t48 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x221 = 31U;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = UINT64_MAX;
	static volatile int16_t x224 = -1;

    t49 = (x221+(x222*(x223/x224)));

    if (t49 != 32798LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x225 = 6U;
	int64_t x226 = 5342858231LL;
	int32_t x227 = INT32_MIN;

    t50 = (x225+(x226*(x227/x228)));

    if (t50 != -350160242743272LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x229 = 1U;
	int8_t x230 = INT8_MIN;
	volatile uint8_t x232 = 50U;
	int32_t t51 = 413;

    t51 = (x229+(x230*(x231/x232)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x233 = INT16_MAX;
	volatile uint32_t x234 = 0U;
	int16_t x235 = -1;
	volatile uint32_t t52 = 814U;

    t52 = (x233+(x234*(x235/x236)));

    if (t52 != 32767U) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x237 = 0;
	static int32_t x238 = INT32_MIN;
	uint32_t x239 = UINT32_MAX;
	int16_t x240 = -291;
	volatile uint32_t t53 = 18U;

    t53 = (x237+(x238*(x239/x240)));

    if (t53 != 2147483648U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = UINT32_MAX;
	int8_t x246 = INT8_MIN;
	uint64_t x247 = 80LLU;
	static uint32_t x248 = 1634U;
	static uint64_t t54 = 11LLU;

    t54 = (x245+(x246*(x247/x248)));

    if (t54 != 4294967295LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x249 = INT16_MAX;
	int8_t x250 = -60;
	int32_t x252 = INT32_MAX;
	uint32_t t55 = 2U;

    t55 = (x249+(x250*(x251/x252)));

    if (t55 != 32647U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x253 = INT32_MIN;
	uint64_t x254 = 3231LLU;
	int32_t x255 = -6506619;
	int8_t x256 = INT8_MAX;

    t56 = (x253+(x254*(x255/x256)));

    if (t56 != 18446744071396534145LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x261 = 25LL;
	volatile int64_t x262 = INT64_MIN;
	uint32_t x263 = UINT32_MAX;
	volatile int64_t t57 = -354154LL;

    t57 = (x261+(x262*(x263/x264)));

    if (t57 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x268 = INT64_MAX;

    t58 = (x265+(x266*(x267/x268)));

    if (t58 != -97LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x269 = 9U;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	volatile int64_t x272 = INT64_MAX;
	volatile int64_t t59 = 9372LL;

    t59 = (x269+(x270*(x271/x272)));

    if (t59 != 9LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x273 = 5U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = INT8_MAX;
	volatile int32_t t60 = 519938;

    t60 = (x273+(x274*(x275/x276)));

    if (t60 != 8454149) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x278 = -16205338LL;
	int64_t x279 = -1LL;
	static int8_t x280 = INT8_MIN;
	volatile int64_t t61 = -116052LL;

    t61 = (x277+(x278*(x279/x280)));

    if (t61 != -3063005LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x281 = INT32_MAX;
	static uint32_t x282 = 505U;
	int8_t x283 = 0;
	volatile int8_t x284 = 59;
	volatile uint32_t t62 = 78U;

    t62 = (x281+(x282*(x283/x284)));

    if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x285 = 3002092574228045462LLU;
	uint16_t x286 = 882U;
	volatile int16_t x287 = -1;
	volatile int16_t x288 = -1;
	volatile uint64_t t63 = 1019846058181519941LLU;

    t63 = (x285+(x286*(x287/x288)));

    if (t63 != 3002092574228046344LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x290 = -1;
	int8_t x291 = INT8_MAX;
	volatile int32_t x292 = INT32_MAX;
	int32_t t64 = -27750325;

    t64 = (x289+(x290*(x291/x292)));

    if (t64 != 51) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x294 = UINT8_MAX;
	int32_t x296 = 94226843;
	static volatile int32_t t65 = 6;

    t65 = (x293+(x294*(x295/x296)));

    if (t65 != 9) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x297 = INT32_MIN;
	int8_t x298 = -1;
	int32_t x299 = 198998;

    t66 = (x297+(x298*(x299/x300)));

    if (t66 != -2147482094) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = -1;
	volatile int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	static int32_t x304 = INT32_MIN;
	int32_t t67 = 95485;

    t67 = (x301+(x302*(x303/x304)));

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 25U;
	uint64_t x307 = 0LLU;
	int8_t x308 = 1;
	volatile uint64_t t68 = 3791185079485092LLU;

    t68 = (x305+(x306*(x307/x308)));

    if (t68 != 25LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x313 = 1;
	uint32_t x314 = 37U;
	int16_t x316 = INT16_MAX;
	uint32_t t69 = 676U;

    t69 = (x313+(x314*(x315/x316)));

    if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint8_t x317 = 7U;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = INT8_MAX;
	uint32_t x320 = UINT32_MAX;
	uint32_t t70 = 932U;

    t70 = (x317+(x318*(x319/x320)));

    if (t70 != 7U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x321 = INT8_MIN;
	volatile int32_t x322 = INT32_MAX;
	static uint16_t x323 = 75U;
	int16_t x324 = INT16_MIN;
	int32_t t71 = 1137;

    t71 = (x321+(x322*(x323/x324)));

    if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x325 = UINT64_MAX;
	uint32_t x326 = 21630U;
	volatile uint8_t x327 = 6U;
	int64_t x328 = 8328438543LL;
	volatile uint64_t t72 = UINT64_MAX;

    t72 = (x325+(x326*(x327/x328)));

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = 10U;
	volatile uint16_t x330 = 2U;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 816313761805LLU;
	static volatile uint64_t t73 = 1682480396322293895LLU;

    t73 = (x329+(x330*(x331/x332)));

    if (t73 != 45195238LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x341 = 11167;
	int16_t x343 = INT16_MAX;
	int32_t t74 = -671051244;

    t74 = (x341+(x342*(x343/x344)));

    if (t74 != 76702) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x345 = UINT8_MAX;
	uint16_t x346 = 1U;
	uint8_t x347 = UINT8_MAX;
	volatile uint8_t x348 = 4U;

    t75 = (x345+(x346*(x347/x348)));

    if (t75 != 318) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x349 = -3582;
	volatile int64_t x350 = -7597311167866771LL;
	uint8_t x351 = 2U;
	int64_t x352 = INT64_MAX;
	static volatile int64_t t76 = -3LL;

    t76 = (x349+(x350*(x351/x352)));

    if (t76 != -3582LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x353 = 55763LLU;
	int8_t x354 = 0;

    t77 = (x353+(x354*(x355/x356)));

    if (t77 != 55763LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = -257282779954247LL;
	static int32_t x362 = 0;
	uint64_t x364 = 6220783LLU;
	volatile uint64_t t78 = 1031LLU;

    t78 = (x361+(x362*(x363/x364)));

    if (t78 != 18446486790929597369LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x366 = UINT64_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	volatile int8_t x368 = INT8_MIN;
	volatile uint64_t t79 = 25103173LLU;

    t79 = (x365+(x366*(x367/x368)));

    if (t79 != 502LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x373 = INT8_MAX;
	uint8_t x374 = UINT8_MAX;
	int16_t x375 = 28;
	static int16_t x376 = INT16_MAX;
	static int32_t t80 = 64;

    t80 = (x373+(x374*(x375/x376)));

    if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x382 = 27U;
	volatile uint64_t x383 = 7937222822LLU;
	volatile uint64_t t81 = 1LLU;

    t81 = (x381+(x382*(x383/x384)));

    if (t81 != 30614936938LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x389 = 10723167LLU;
	static volatile int16_t x390 = INT16_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t82 = 323LLU;

    t82 = (x389+(x390*(x391/x392)));

    if (t82 != 10723167LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x393 = INT32_MIN;
	volatile int64_t x394 = -3486LL;
	int64_t x395 = INT64_MIN;
	uint64_t x396 = 16377LLU;
	uint64_t t83 = 3953541516LLU;

    t83 = (x393+(x394*(x395/x396)));

    if (t83 != 16483461729223684580LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x397 = 1624838184688LL;
	int64_t x398 = 5596286778242LL;
	static int32_t x399 = INT32_MIN;

    t84 = (x397+(x398*(x399/x400)));

    if (t84 != -954405911183540718LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x401 = INT16_MIN;
	static volatile int8_t x402 = -58;
	volatile uint16_t x403 = UINT16_MAX;
	uint16_t x404 = 83U;
	volatile int32_t t85 = 86031230;

    t85 = (x401+(x402*(x403/x404)));

    if (t85 != -78530) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x405 = INT64_MIN;
	int64_t x406 = -11654LL;
	static int64_t x408 = INT64_MIN;
	static volatile int64_t t86 = INT64_MIN;

    t86 = (x405+(x406*(x407/x408)));

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x413 = INT64_MAX;
	int64_t x414 = INT64_MIN;
	int8_t x415 = INT8_MIN;
	int8_t x416 = INT8_MIN;
	volatile int64_t t87 = -484615159176004971LL;

    t87 = (x413+(x414*(x415/x416)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x417 = UINT16_MAX;
	int16_t x418 = INT16_MIN;
	int32_t x420 = INT32_MAX;

    t88 = (x417+(x418*(x419/x420)));

    if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x421 = INT8_MAX;
	static uint32_t x422 = UINT32_MAX;
	int16_t x423 = INT16_MIN;
	int64_t t89 = 320486399893315422LL;

    t89 = (x421+(x422*(x423/x424)));

    if (t89 != 127LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x426 = UINT16_MAX;
	uint64_t x427 = 267660774180531LLU;
	volatile uint64_t t90 = 29194943832940LLU;

    t90 = (x425+(x426*(x427/x428)));

    if (t90 != 70LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x434 = UINT16_MAX;
	static volatile int64_t x435 = -1LL;
	uint16_t x436 = 48U;
	volatile int64_t t91 = -59LL;

    t91 = (x433+(x434*(x435/x436)));

    if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x437 = 2089989248U;
	static uint32_t x438 = 945260240U;
	volatile uint8_t x439 = UINT8_MAX;
	int16_t x440 = INT16_MIN;
	static volatile uint32_t t92 = 13839171U;

    t92 = (x437+(x438*(x439/x440)));

    if (t92 != 2089989248U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x441 = -1;
	uint32_t x442 = 2U;
	volatile uint16_t x443 = UINT16_MAX;
	int64_t x444 = 1LL;

    t93 = (x441+(x442*(x443/x444)));

    if (t93 != 131069LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x445 = 104357369926211LLU;
	static int64_t x446 = -1553LL;
	static uint8_t x447 = 6U;
	int32_t x448 = INT32_MIN;
	static volatile uint64_t t94 = 105607087843LLU;

    t94 = (x445+(x446*(x447/x448)));

    if (t94 != 104357369926211LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint8_t x449 = UINT8_MAX;
	volatile int16_t x450 = INT16_MIN;
	static int32_t x451 = -15839;
	static int32_t x452 = -54;

    t95 = (x449+(x450*(x451/x452)));

    if (t95 != -9600769) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x453 = UINT64_MAX;
	uint64_t x454 = 436142137138010LLU;
	int8_t x455 = INT8_MIN;
	int64_t x456 = -1LL;
	uint64_t t96 = 2840740384LLU;

    t96 = (x453+(x454*(x455/x456)));

    if (t96 != 55826193553665279LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x457 = 50736;
	int32_t x458 = INT32_MAX;
	int32_t x459 = 0;
	int32_t t97 = 492099624;

    t97 = (x457+(x458*(x459/x460)));

    if (t97 != 50736) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x461 = INT32_MAX;
	volatile int64_t x463 = -3155LL;
	uint32_t x464 = UINT32_MAX;
	volatile int64_t t98 = -85561233LL;

    t98 = (x461+(x462*(x463/x464)));

    if (t98 != 2147483647LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x465 = 1;
	uint32_t x466 = 9U;
	uint32_t x467 = UINT32_MAX;
	static volatile int16_t x468 = -1;

    t99 = (x465+(x466*(x467/x468)));

    if (t99 != 10U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x469 = 0U;
	static int8_t x470 = INT8_MAX;
	uint8_t x471 = UINT8_MAX;
	volatile int32_t t100 = 968432642;

    t100 = (x469+(x470*(x471/x472)));

    if (t100 != -32385) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x473 = INT32_MIN;
	uint16_t x474 = 2838U;
	volatile int32_t x475 = INT32_MAX;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t101 = 95704LLU;

    t101 = (x473+(x474*(x475/x476)));

    if (t101 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint64_t x477 = UINT64_MAX;
	int8_t x478 = -12;
	uint8_t x479 = 119U;
	static volatile uint64_t t102 = 1325248LLU;

    t102 = (x477+(x478*(x479/x480)));

    if (t102 != 1427LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x482 = INT64_MIN;
	static uint64_t x483 = 7LLU;
	int32_t x484 = INT32_MAX;
	static uint64_t t103 = UINT64_MAX;

    t103 = (x481+(x482*(x483/x484)));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x485 = 9U;
	uint8_t x486 = 3U;
	uint16_t x487 = 11689U;
	static uint64_t x488 = 1151479997779350512LLU;
	uint64_t t104 = 2LLU;

    t104 = (x485+(x486*(x487/x488)));

    if (t104 != 9LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x494 = INT8_MAX;
	uint8_t x495 = 5U;
	int8_t x496 = INT8_MIN;
	volatile int32_t t105 = 2047969;

    t105 = (x493+(x494*(x495/x496)));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x497 = INT16_MAX;
	static int16_t x499 = -1;
	static uint64_t t106 = 2815902LLU;

    t106 = (x497+(x498*(x499/x500)));

    if (t106 != 18446744073343628748LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x501 = INT64_MIN;
	int64_t x502 = -1LL;
	volatile int32_t x503 = INT32_MAX;
	uint32_t x504 = UINT32_MAX;
	volatile int64_t t107 = INT64_MIN;

    t107 = (x501+(x502*(x503/x504)));

    if (t107 != INT64_MIN) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x506 = 200966708U;
	int8_t x508 = INT8_MIN;
	volatile uint32_t t108 = 1006302899U;

    t108 = (x505+(x506*(x507/x508)));

    if (t108 != 878533253U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x513 = 8U;
	static uint8_t x514 = UINT8_MAX;
	uint8_t x515 = 16U;
	static uint16_t x516 = 208U;

    t109 = (x513+(x514*(x515/x516)));

    if (t109 != 8) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x517 = INT16_MIN;
	int64_t x518 = -1LL;
	int8_t x519 = 0;
	int32_t x520 = 2;
	int64_t t110 = 15554689LL;

    t110 = (x517+(x518*(x519/x520)));

    if (t110 != -32768LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x525 = 1;
	uint32_t x526 = 20U;
	uint8_t x527 = 1U;
	int32_t x528 = -1;
	volatile uint32_t t111 = 119838U;

    t111 = (x525+(x526*(x527/x528)));

    if (t111 != 4294967277U) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x534 = 950863;
	volatile int64_t t112 = 16901383037018LL;

    t112 = (x533+(x534*(x535/x536)));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x537 = INT8_MIN;
	uint16_t x538 = UINT16_MAX;
	int64_t x539 = 33895441733LL;
	int32_t x540 = INT32_MAX;
	volatile int64_t t113 = 538496LL;

    t113 = (x537+(x538*(x539/x540)));

    if (t113 != 982897LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x541 = -1;
	volatile int16_t x542 = INT16_MIN;
	static volatile uint8_t x544 = 46U;
	uint64_t t114 = 1694393994887050LLU;

    t114 = (x541+(x542*(x543/x544)));

    if (t114 != 18446711596870762495LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x545 = INT64_MAX;

    t115 = (x545+(x546*(x547/x548)));

    if (t115 != 9223371796336607287LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x553 = -1LL;
	static uint64_t x554 = UINT64_MAX;
	int16_t x555 = 2218;
	volatile uint32_t x556 = UINT32_MAX;
	uint64_t t116 = UINT64_MAX;

    t116 = (x553+(x554*(x555/x556)));

    if (t116 != UINT64_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x557 = UINT8_MAX;
	uint64_t x558 = 13LLU;
	volatile uint8_t x559 = UINT8_MAX;
	int16_t x560 = INT16_MIN;
	uint64_t t117 = 13029157424LLU;

    t117 = (x557+(x558*(x559/x560)));

    if (t117 != 255LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x570 = 2U;
	int8_t x571 = 40;
	uint64_t x572 = UINT64_MAX;
	uint64_t t118 = 145041339450533LLU;

    t118 = (x569+(x570*(x571/x572)));

    if (t118 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x573 = -1LL;
	int16_t x574 = 48;
	static int32_t x575 = 63227;
	int8_t x576 = -1;
	int64_t t119 = 2655147320745727972LL;

    t119 = (x573+(x574*(x575/x576)));

    if (t119 != -3034897LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x580 = UINT64_MAX;

    t120 = (x577+(x578*(x579/x580)));

    if (t120 != 65535LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x582 = UINT32_MAX;
	int8_t x583 = INT8_MAX;
	int16_t x584 = -1;
	uint64_t t121 = 405585267818815188LLU;

    t121 = (x581+(x582*(x583/x584)));

    if (t121 != 117081928901542LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x586 = 1597LL;
	int32_t x587 = 31575;
	static volatile uint16_t x588 = 10313U;
	int64_t t122 = -75705455698LL;

    t122 = (x585+(x586*(x587/x588)));

    if (t122 != -27977LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x589 = 1002071045U;
	volatile int8_t x590 = -1;
	int16_t x591 = INT16_MIN;
	volatile uint8_t x592 = 45U;
	uint32_t t123 = 1089U;

    t123 = (x589+(x590*(x591/x592)));

    if (t123 != 1002071773U) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x593 = -1LL;
	static int16_t x594 = -1;
	int64_t x595 = -503521381531252LL;
	uint32_t x596 = 17343U;
	int64_t t124 = 16561125540LL;

    t124 = (x593+(x594*(x595/x596)));

    if (t124 != 29033118924LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x597 = INT8_MIN;
	volatile uint8_t x598 = 3U;
	int32_t x599 = INT32_MAX;
	volatile uint32_t t125 = 854700U;

    t125 = (x597+(x598*(x599/x600)));

    if (t125 != 140053153U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x606 = INT64_MIN;
	uint8_t x607 = 31U;
	volatile int64_t t126 = -1505524030574181725LL;

    t126 = (x605+(x606*(x607/x608)));

    if (t126 != -1LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x610 = INT16_MIN;
	int8_t x611 = 9;
	int64_t x612 = INT64_MAX;

    t127 = (x609+(x610*(x611/x612)));

    if (t127 != 7717LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x614 = UINT8_MAX;
	int64_t x615 = 14246855496642784LL;
	int16_t x616 = INT16_MIN;
	volatile int64_t t128 = -381508564277194294LL;

    t128 = (x613+(x614*(x615/x616)));

    if (t128 != -110868779041898LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x621 = 204;
	uint16_t x623 = 724U;
	volatile int32_t x624 = -1;
	volatile uint64_t t129 = 7823027LLU;

    t129 = (x621+(x622*(x623/x624)));

    if (t129 != 928LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x625 = 1U;
	int64_t x626 = -10642536615455175LL;
	int8_t x627 = 24;
	int8_t x628 = 1;
	volatile int64_t t130 = -8358949916213LL;

    t130 = (x625+(x626*(x627/x628)));

    if (t130 != -255420878770924199LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x629 = INT32_MIN;
	uint32_t x630 = UINT32_MAX;
	int32_t x631 = INT32_MIN;
	int64_t x632 = INT64_MIN;
	int64_t t131 = -127687799801823LL;

    t131 = (x629+(x630*(x631/x632)));

    if (t131 != -2147483648LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x641 = UINT16_MAX;
	static int16_t x642 = -238;
	int16_t x643 = -1;
	int8_t x644 = -52;
	volatile int32_t t132 = 71301;

    t132 = (x641+(x642*(x643/x644)));

    if (t132 != 65535) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x645 = -37;
	int32_t x646 = INT32_MAX;
	static int32_t x647 = -1;
	static int64_t x648 = INT64_MAX;
	int64_t t133 = 1LL;

    t133 = (x645+(x646*(x647/x648)));

    if (t133 != -37LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x653 = 1461U;
	int8_t x654 = INT8_MIN;
	int32_t x655 = -54337038;
	uint32_t x656 = UINT32_MAX;
	uint32_t t134 = 52821564U;

    t134 = (x653+(x654*(x655/x656)));

    if (t134 != 1461U) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x657 = -26048006;
	volatile int32_t x658 = INT32_MIN;
	uint64_t x659 = UINT64_MAX;
	volatile uint64_t t135 = 10279016167LLU;

    t135 = (x657+(x658*(x659/x660)));

    if (t135 != 18446744071536019962LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x661 = -3;
	uint8_t x662 = 7U;
	int16_t x663 = INT16_MIN;
	int8_t x664 = -1;
	int32_t t136 = -222277386;

    t136 = (x661+(x662*(x663/x664)));

    if (t136 != 229373) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x665 = 291U;
	int8_t x666 = 1;
	int32_t x667 = INT32_MIN;
	uint32_t x668 = UINT32_MAX;
	volatile uint32_t t137 = 5428U;

    t137 = (x665+(x666*(x667/x668)));

    if (t137 != 291U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x669 = 1564157;
	static uint64_t x670 = UINT64_MAX;
	uint8_t x672 = UINT8_MAX;

    t138 = (x669+(x670*(x671/x672)));

    if (t138 != 18446744073694272764LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint64_t t139 = 3775013079946633982LLU;

    t139 = (x673+(x674*(x675/x676)));

    if (t139 != 51484062783LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x677 = INT32_MAX;
	volatile int32_t x678 = INT32_MIN;
	int64_t x679 = -1LL;
	static volatile int8_t x680 = INT8_MIN;
	volatile int64_t t140 = -197721034LL;

    t140 = (x677+(x678*(x679/x680)));

    if (t140 != 2147483647LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x685 = UINT32_MAX;
	uint32_t x686 = 20U;
	volatile uint64_t x687 = 29654LLU;
	volatile uint16_t x688 = UINT16_MAX;

    t141 = (x685+(x686*(x687/x688)));

    if (t141 != 4294967295LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x693 = 2856U;
	uint64_t x695 = UINT64_MAX;
	int32_t x696 = -996161;
	static volatile uint64_t t142 = 2214LLU;

    t142 = (x693+(x694*(x695/x696)));

    if (t142 != 2855LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x697 = UINT8_MAX;
	int8_t x698 = -1;
	int8_t x699 = INT8_MIN;
	int64_t t143 = 657166LL;

    t143 = (x697+(x698*(x699/x700)));

    if (t143 != 255LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x701 = INT64_MAX;
	int32_t x702 = 1;
	int32_t x703 = INT32_MIN;
	volatile int16_t x704 = INT16_MAX;
	volatile int64_t t144 = 629782LL;

    t144 = (x701+(x702*(x703/x704)));

    if (t144 != 9223372036854710269LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x705 = INT8_MIN;
	static int8_t x706 = INT8_MIN;
	int64_t x707 = -1LL;
	static int64_t x708 = INT64_MAX;
	volatile int64_t t145 = -262551199145541999LL;

    t145 = (x705+(x706*(x707/x708)));

    if (t145 != -128LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x713 = INT32_MAX;
	static int16_t x714 = 1;
	volatile int64_t t146 = 0LL;

    t146 = (x713+(x714*(x715/x716)));

    if (t146 != 2147483654LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x718 = 1U;
	int64_t x719 = -1LL;
	static uint64_t x720 = 7169954712675444719LLU;
	uint64_t t147 = 1313113136495400LLU;

    t147 = (x717+(x718*(x719/x720)));

    if (t147 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x721 = 11672U;
	static volatile int16_t x722 = INT16_MIN;
	static int32_t t148 = -211;

    t148 = (x721+(x722*(x723/x724)));

    if (t148 != 11672) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x729 = 1388U;
	int16_t x730 = INT16_MAX;
	volatile int16_t x731 = INT16_MIN;
	int32_t x732 = INT32_MAX;
	volatile int32_t t149 = -13450;

    t149 = (x729+(x730*(x731/x732)));

    if (t149 != 1388) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x733 = UINT8_MAX;
	volatile uint8_t x735 = 14U;
	uint64_t x736 = UINT64_MAX;
	volatile uint64_t t150 = 60476595LLU;

    t150 = (x733+(x734*(x735/x736)));

    if (t150 != 255LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x737 = INT32_MIN;
	uint32_t x738 = 10U;
	int64_t t151 = -29LL;

    t151 = (x737+(x738*(x739/x740)));

    if (t151 != -2147483648LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x741 = -1LL;
	int8_t x742 = INT8_MIN;
	static uint16_t x744 = 140U;
	uint64_t t152 = 201314329806481LLU;

    t152 = (x741+(x742*(x743/x744)));

    if (t152 != 16395507382667992959LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x746 = INT8_MIN;
	int8_t x748 = INT8_MIN;
	volatile uint64_t t153 = 78971406LLU;

    t153 = (x745+(x746*(x747/x748)));

    if (t153 != 9223372144152274125LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x749 = INT64_MAX;
	static uint32_t x750 = 31865389U;
	static volatile int32_t x751 = -1;
	uint64_t x752 = 45154729180851LLU;
	static volatile uint64_t t154 = 2219478313545249053LLU;

    t154 = (x749+(x750*(x751/x752)));

    if (t154 != 9223385054567220865LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x753 = INT16_MIN;
	uint16_t x754 = UINT16_MAX;
	int8_t x755 = INT8_MIN;
	volatile int8_t x756 = INT8_MIN;
	volatile int32_t t155 = 0;

    t155 = (x753+(x754*(x755/x756)));

    if (t155 != 32767) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x759 = 311U;
	static volatile int64_t x760 = 374683315810LL;
	int64_t t156 = INT64_MIN;

    t156 = (x757+(x758*(x759/x760)));

    if (t156 != INT64_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x765 = UINT64_MAX;
	uint8_t x766 = 7U;
	volatile int8_t x767 = INT8_MIN;

    t157 = (x765+(x766*(x767/x768)));

    if (t157 != UINT64_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x769 = INT64_MIN;
	int32_t x770 = -368859;
	uint32_t x771 = UINT32_MAX;
	static int32_t x772 = 53682501;
	volatile int64_t t158 = -3989177690824362532LL;

    t158 = (x769+(x770*(x771/x772)));

    if (t158 != -9223372032589317232LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x773 = 1121687503481827LLU;
	uint8_t x776 = 6U;

    t159 = (x773+(x774*(x775/x776)));

    if (t159 != 1121691798449081LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x777 = 33229942;
	volatile int8_t x779 = INT8_MIN;
	int8_t x780 = INT8_MIN;
	uint32_t t160 = 574U;

    t160 = (x777+(x778*(x779/x780)));

    if (t160 != 33229941U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x782 = 510U;
	int32_t x783 = INT32_MAX;
	volatile uint32_t t161 = 1436U;

    t161 = (x781+(x782*(x783/x784)));

    if (t161 != 4261544445U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x786 = -1;
	int32_t x787 = -15743971;
	int32_t x788 = INT32_MIN;

    t162 = (x785+(x786*(x787/x788)));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x789 = INT32_MIN;
	uint8_t x790 = 2U;
	int16_t x791 = INT16_MIN;
	static int64_t t163 = -1332207LL;

    t163 = (x789+(x790*(x791/x792)));

    if (t163 != -2147483648LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x793 = -632370010040LL;
	static uint8_t x794 = UINT8_MAX;
	static volatile uint64_t x795 = 53019468801529LLU;
	volatile uint64_t t164 = 1LLU;

    t164 = (x793+(x794*(x795/x796)));

    if (t164 != 18446743441339541576LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x797 = 11046485U;
	volatile uint16_t x798 = UINT16_MAX;
	int32_t x799 = -210079913;
	volatile uint64_t t165 = 411786092234591LLU;

    t165 = (x797+(x798*(x799/x800)));

    if (t165 != 18306218864522868586LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x801 = 13;
	int16_t x802 = -1;
	static int32_t t166 = 55430;

    t166 = (x801+(x802*(x803/x804)));

    if (t166 != 8) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x805 = 644508327U;
	uint8_t x806 = 2U;
	uint16_t x807 = 0U;
	uint32_t t167 = 15942U;

    t167 = (x805+(x806*(x807/x808)));

    if (t167 != 644508327U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x815 = -1;
	volatile int16_t x816 = INT16_MIN;
	int64_t t168 = INT64_MIN;

    t168 = (x813+(x814*(x815/x816)));

    if (t168 != INT64_MIN) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x817 = 1012472;
	static int8_t x818 = 6;
	int8_t x819 = -61;
	volatile uint16_t x820 = UINT16_MAX;

    t169 = (x817+(x818*(x819/x820)));

    if (t169 != 1012472) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x825 = -1;
	volatile uint32_t x826 = 3966908U;

    t170 = (x825+(x826*(x827/x828)));

    if (t170 != 35702171LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x830 = INT64_MIN;
	uint64_t x831 = UINT64_MAX;
	volatile uint64_t t171 = 9274303LLU;

    t171 = (x829+(x830*(x831/x832)));

    if (t171 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x834 = 33LLU;
	volatile int32_t x835 = INT32_MIN;
	uint64_t t172 = 925445102620601LLU;

    t172 = (x833+(x834*(x835/x836)));

    if (t172 != 4294967328LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x837 = 219593731;
	int8_t x838 = -1;
	int64_t x839 = INT64_MIN;
	int64_t x840 = 34525926925LL;
	volatile int64_t t173 = -2186LL;

    t173 = (x837+(x838*(x839/x840)));

    if (t173 != 486737088LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint16_t x842 = UINT16_MAX;
	uint32_t x843 = UINT32_MAX;
	uint32_t x844 = UINT32_MAX;
	static volatile uint32_t t174 = 35U;

    t174 = (x841+(x842*(x843/x844)));

    if (t174 != 65535U) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x846 = INT32_MIN;
	static int8_t x847 = INT8_MAX;
	int32_t t175 = -1800;

    t175 = (x845+(x846*(x847/x848)));

    if (t175 != -128) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x851 = -320;
	static int16_t x852 = -1;
	uint64_t t176 = 15LLU;

    t176 = (x849+(x850*(x851/x852)));

    if (t176 != 319LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x853 = 452033;
	uint16_t x854 = 12U;
	uint32_t x855 = 465U;
	int8_t x856 = INT8_MIN;

    t177 = (x853+(x854*(x855/x856)));

    if (t177 != 452033U) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x857 = 1412733310154745LLU;
	int8_t x858 = -1;
	uint8_t x859 = 0U;
	uint64_t x860 = UINT64_MAX;
	uint64_t t178 = 8959808562658847438LLU;

    t178 = (x857+(x858*(x859/x860)));

    if (t178 != 1412733310154745LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x861 = 0;
	static int16_t x863 = -1;

    t179 = (x861+(x862*(x863/x864)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x866 = 44U;
	uint16_t x867 = 1426U;
	volatile int64_t x868 = -125212053683LL;
	int64_t t180 = 129971831392976LL;

    t180 = (x865+(x866*(x867/x868)));

    if (t180 != -1LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x869 = UINT8_MAX;
	uint32_t x870 = UINT32_MAX;

    t181 = (x869+(x870*(x871/x872)));

    if (t181 != 254U) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int32_t x873 = INT32_MIN;
	uint32_t x874 = 50523U;
	int32_t x875 = -1;

    t182 = (x873+(x874*(x875/x876)));

    if (t182 != 2147483648U) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x878 = 15U;
	int8_t x879 = INT8_MAX;
	int64_t x880 = INT64_MIN;
	int64_t t183 = -3730042511196466LL;

    t183 = (x877+(x878*(x879/x880)));

    if (t183 != -2147483648LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x883 = INT16_MIN;
	static int8_t x884 = INT8_MIN;

    t184 = (x881+(x882*(x883/x884)));

    if (t184 != 4294934534U) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x885 = INT64_MAX;
	uint64_t x886 = UINT64_MAX;
	int8_t x887 = INT8_MAX;
	uint64_t t185 = 0LLU;

    t185 = (x885+(x886*(x887/x888)));

    if (t185 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x890 = 672LL;
	static int64_t x891 = INT64_MIN;
	volatile int64_t x892 = INT64_MIN;
	volatile uint64_t t186 = 2300LLU;

    t186 = (x889+(x890*(x891/x892)));

    if (t186 != 854LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x893 = 1U;
	int32_t x894 = 756443914;
	static uint16_t x896 = 6U;
	volatile uint32_t t187 = 2040642U;

    t187 = (x893+(x894*(x895/x896)));

    if (t187 != 373688641U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x901 = UINT16_MAX;
	int16_t x903 = 2;
	static uint8_t x904 = 3U;

    t188 = (x901+(x902*(x903/x904)));

    if (t188 != 65535) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x909 = -3;
	volatile uint16_t x910 = 209U;
	static int64_t x911 = INT64_MAX;
	int64_t x912 = 5203LL;
	int64_t t189 = 1013LL;

    t189 = (x909+(x910*(x911/x912)));

    if (t189 != 370494859831375595LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x913 = 51873764;
	uint32_t x914 = 2U;
	volatile uint32_t x915 = 1493U;
	static int8_t x916 = -2;

    t190 = (x913+(x914*(x915/x916)));

    if (t190 != 51873764U) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x921 = -1;
	int32_t x922 = INT32_MAX;
	volatile int8_t x923 = 1;
	static int16_t x924 = 6;
	static volatile int32_t t191 = 0;

    t191 = (x921+(x922*(x923/x924)));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x925 = -1;
	int32_t x926 = 4346;
	static int8_t x927 = -38;
	uint32_t x928 = 41U;
	static volatile uint32_t t192 = 1U;

    t192 = (x925+(x926*(x927/x928)));

    if (t192 != 4294959027U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int32_t x929 = 2914;
	int32_t x930 = 12;
	uint16_t x932 = UINT16_MAX;
	static volatile int32_t t193 = 9476775;

    t193 = (x929+(x930*(x931/x932)));

    if (t193 != 2914) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x934 = INT32_MAX;
	uint64_t x935 = 46LLU;

    t194 = (x933+(x934*(x935/x936)));

    if (t194 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x942 = -2773678328770207LL;
	int64_t t195 = 789183226495374LL;

    t195 = (x941+(x942*(x943/x944)));

    if (t195 != -8499LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x945 = 0U;
	volatile int32_t x947 = INT32_MAX;

    t196 = (x945+(x946*(x947/x948)));

    if (t196 != 26431338731562LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x949 = INT64_MAX;
	static int32_t x950 = 11;
	volatile uint64_t x951 = UINT64_MAX;
	uint64_t t197 = 2132LLU;

    t197 = (x949+(x950*(x951/x952)));

    if (t197 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x954 = UINT8_MAX;
	uint32_t x955 = 955U;
	uint8_t x956 = 5U;
	static volatile uint32_t t198 = 53839341U;

    t198 = (x953+(x954*(x955/x956)));

    if (t198 != 81472U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x957 = 15782;
	int16_t x959 = INT16_MAX;
	static uint8_t x960 = 10U;

    t199 = (x957+(x958*(x959/x960)));

    if (t199 != -403546) { NG(); } else { ; }
	
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

