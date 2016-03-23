
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

int8_t x1 = INT8_MIN;
static int32_t x4 = INT32_MIN;
int16_t x6 = -1;
uint8_t x8 = 4U;
int16_t x9 = 0;
int32_t x11 = INT32_MAX;
volatile int64_t x12 = INT64_MAX;
volatile int32_t t3 = -30;
uint64_t x17 = UINT64_MAX;
int16_t x19 = INT16_MIN;
uint64_t t4 = 1885660401382LLU;
uint8_t x22 = 55U;
int8_t x50 = INT8_MIN;
int8_t x51 = INT8_MIN;
static volatile int32_t x60 = INT32_MAX;
static int16_t x61 = -3057;
int64_t x66 = INT64_MIN;
uint16_t x75 = 27U;
int8_t x76 = INT8_MAX;
int16_t x78 = -1;
volatile int64_t t16 = -169956482LL;
static uint16_t x87 = UINT16_MAX;
uint8_t x89 = 7U;
uint16_t x94 = UINT16_MAX;
volatile int64_t t20 = 6797039616232LL;
int64_t x97 = -1LL;
volatile int16_t x98 = -4;
int8_t x102 = INT8_MAX;
int16_t x124 = INT16_MIN;
uint32_t x126 = 45212U;
static int16_t x137 = INT16_MIN;
int16_t x140 = 0;
static int16_t x148 = INT16_MIN;
int8_t x154 = -1;
int64_t t33 = -7944LL;
int8_t x170 = -1;
uint16_t x177 = UINT16_MAX;
int32_t x180 = 2183423;
int32_t x186 = INT32_MAX;
uint64_t t40 = 2120505164895228LLU;
int8_t x209 = INT8_MAX;
int8_t x211 = INT8_MAX;
volatile int8_t x217 = INT8_MIN;
uint64_t x219 = 2LLU;
int16_t x220 = -1;
uint8_t x225 = 38U;
int64_t x226 = -1LL;
volatile int16_t x230 = -1;
int16_t x232 = 77;
int32_t t46 = -40182591;
volatile int64_t t47 = 393306547382770199LL;
uint16_t x250 = UINT16_MAX;
int8_t x252 = INT8_MAX;
volatile uint8_t x253 = UINT8_MAX;
volatile int32_t t49 = -7237;
static uint32_t x264 = UINT32_MAX;
uint8_t x272 = 2U;
static volatile uint32_t t52 = 228577575U;
volatile uint64_t t53 = 5444093619015428925LLU;
int8_t x278 = INT8_MAX;
int16_t x282 = -1;
int16_t x283 = -53;
static volatile uint64_t t55 = 53438579562679887LLU;
static volatile int32_t t56 = 35618323;
int32_t x297 = -1;
int8_t x300 = INT8_MAX;
uint32_t t58 = 63633U;
uint64_t x306 = UINT64_MAX;
volatile uint64_t t59 = 6327134509298LLU;
int64_t x312 = INT64_MIN;
int64_t t60 = -41196352068921LL;
uint8_t x315 = UINT8_MAX;
int32_t x333 = INT32_MIN;
int16_t x337 = INT16_MIN;
uint64_t x338 = 2761622235397541LLU;
int16_t x344 = INT16_MIN;
int64_t x346 = 2437183358LL;
int16_t x355 = 1;
static uint64_t x365 = UINT64_MAX;
volatile int8_t x374 = INT8_MAX;
int16_t x375 = INT16_MAX;
int32_t t77 = 215941380;
int64_t x393 = -2757932621414LL;
static int8_t x401 = -24;
static int8_t x408 = INT8_MAX;
static uint64_t x409 = 44091521LLU;
static uint8_t x411 = UINT8_MAX;
static int8_t x415 = INT8_MAX;
int16_t x416 = INT16_MIN;
int8_t x420 = INT8_MIN;
volatile int16_t x422 = INT16_MIN;
volatile uint32_t x427 = 136638544U;
uint64_t x436 = UINT64_MAX;
static int16_t x445 = -1;
static uint64_t t91 = 1519953628309501166LLU;
int32_t x450 = -1;
static int16_t x452 = INT16_MIN;
int32_t x454 = 2;
volatile int64_t x465 = -921779LL;
volatile int64_t x470 = INT64_MIN;
volatile uint32_t x472 = 2735945U;
volatile int8_t x474 = -12;
int8_t x479 = -1;
int8_t x484 = -1;
uint64_t t100 = 19240699LLU;
uint16_t x489 = UINT16_MAX;
int8_t x517 = -1;
int16_t x521 = INT16_MIN;
uint8_t x523 = 9U;
uint32_t x527 = 101550345U;
static int32_t x533 = 81;
volatile int64_t x534 = INT64_MIN;
static int16_t x542 = 3298;
int64_t x543 = 2497937491828904LL;
int16_t x546 = -1;
static uint16_t x547 = UINT16_MAX;
volatile int64_t t113 = -127127LL;
volatile int16_t x549 = -1;
uint64_t x552 = 25LLU;
volatile uint64_t t114 = 88319121877LLU;
uint64_t x555 = 3663026079LLU;
volatile uint64_t x556 = 63308LLU;
uint64_t t116 = 2365874224582LLU;
static int8_t x561 = -5;
static int64_t x566 = INT64_MIN;
static uint64_t x567 = 2244956722754163LLU;
uint64_t x571 = 215LLU;
int64_t x572 = INT64_MIN;
uint32_t x579 = 6275636U;
int8_t x580 = INT8_MAX;
int16_t x582 = -2818;
volatile uint64_t t123 = 48507110271LLU;
int8_t x594 = INT8_MIN;
int8_t x595 = -1;
int32_t x600 = 901;
uint16_t x603 = UINT16_MAX;
volatile int64_t t126 = -11LL;
int64_t x607 = 5088318587179LL;
volatile int8_t x610 = INT8_MIN;
volatile int8_t x623 = INT8_MAX;
uint64_t x625 = UINT64_MAX;
int8_t x626 = -44;
int64_t t131 = -2481159353LL;
int64_t x636 = INT64_MIN;
int64_t t132 = -27569LL;
uint8_t x642 = UINT8_MAX;
volatile uint16_t x645 = 56U;
int8_t x648 = INT8_MAX;
volatile int64_t t135 = 1825155408LL;
uint32_t x656 = 18701U;
int8_t x658 = 56;
uint32_t x659 = UINT32_MAX;
static int32_t x660 = INT32_MIN;
volatile uint32_t t137 = 176207U;
int32_t x665 = INT32_MAX;
int8_t x673 = INT8_MIN;
volatile int16_t x677 = INT16_MIN;
int16_t x686 = 56;
int16_t x688 = -105;
static int64_t t142 = -1LL;
static uint32_t t145 = 117U;
uint64_t t148 = 8806531026257LLU;
int8_t x713 = -1;
uint64_t t150 = 2101902438921LLU;
int8_t x722 = INT8_MAX;
static volatile int32_t x723 = -1018272;
static uint32_t x737 = 35298U;
int32_t x738 = 6074;
int32_t x742 = -1;
int16_t x749 = INT16_MAX;
int64_t x758 = INT64_MAX;
static int8_t x761 = -1;
int8_t x764 = INT8_MIN;
int8_t x769 = -1;
uint32_t x774 = UINT32_MAX;
int32_t x775 = INT32_MIN;
static uint8_t x778 = 5U;
int32_t t164 = -12;
int16_t x797 = 0;
int32_t x799 = INT32_MIN;
volatile int16_t x801 = INT16_MIN;
uint32_t x811 = 0U;
static volatile int64_t t169 = -1386585062510868508LL;
uint8_t x838 = UINT8_MAX;
static volatile int8_t x841 = INT8_MAX;
int32_t x842 = INT32_MAX;
uint64_t t176 = 466LLU;
uint64_t x867 = 398290131401711089LLU;
volatile uint64_t t177 = 44135LLU;
int32_t x877 = 1;
static int64_t t178 = -6955LL;
int64_t x886 = -1099308226599245034LL;
uint32_t x888 = 5U;
volatile uint16_t x894 = UINT16_MAX;
volatile uint32_t x895 = UINT32_MAX;
uint32_t t181 = 3339U;
int32_t x898 = 1050402461;
volatile uint16_t x899 = 111U;
volatile int32_t t182 = 56944720;
static uint64_t x910 = UINT64_MAX;
static int8_t x914 = INT8_MIN;
static uint16_t x923 = UINT16_MAX;
static volatile int64_t t187 = -15767347254LL;
int8_t x927 = INT8_MIN;
int32_t x933 = INT32_MAX;
uint8_t x945 = 3U;
uint8_t x949 = 104U;
volatile int8_t x952 = INT8_MIN;
int64_t t193 = 1003105379LL;
uint64_t x955 = 18904064220917LLU;
static int64_t x964 = INT64_MIN;
uint64_t x966 = UINT64_MAX;
static int64_t x970 = INT64_MIN;


void f0(void) {
    	volatile uint8_t x2 = UINT8_MAX;
	uint32_t x3 = UINT32_MAX;
	uint32_t t0 = 168U;

    t0 = (x1+(x2^(x3-x4)));

    if (t0 != 2147483264U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 1LLU;
	int64_t x7 = -7158850LL;
	static uint64_t t1 = 371657234134LLU;

    t1 = (x5+(x6^(x7-x8)));

    if (t1 != 7158854LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int64_t t2 = 187362224949870LL;

    t2 = (x9+(x10^(x11-x12)));

    if (t2 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	int16_t x14 = -1;
	static int8_t x15 = -27;
	static int8_t x16 = INT8_MIN;

    t3 = (x13+(x14^(x15-x16)));

    if (t3 != 65433) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int8_t x18 = INT8_MIN;
	int8_t x20 = INT8_MIN;

    t4 = (x17+(x18^(x19-x20)));

    if (t4 != 32511LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x21 = INT16_MIN;
	uint32_t x23 = 1U;
	int16_t x24 = -1;
	uint32_t t5 = 16295U;

    t5 = (x21+(x22^(x23-x24)));

    if (t5 != 4294934581U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = UINT32_MAX;
	int8_t x30 = 10;
	static volatile int32_t x31 = -54;
	int32_t x32 = INT32_MIN;
	volatile uint32_t t6 = 202U;

    t6 = (x29+(x30^(x31-x32)));

    if (t6 != 2147483583U) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x33 = 139928LLU;
	static int64_t x34 = INT64_MIN;
	int8_t x35 = -1;
	static int8_t x36 = -1;
	uint64_t t7 = 266688LLU;

    t7 = (x33+(x34^(x35-x36)));

    if (t7 != 9223372036854915736LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x41 = UINT64_MAX;
	static int32_t x42 = INT32_MIN;
	int32_t x43 = -209096718;
	uint32_t x44 = UINT32_MAX;
	uint64_t t8 = 1LLU;

    t8 = (x41+(x42^(x43-x44)));

    if (t8 != 1938386930LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = 1226670;
	static uint32_t x46 = 3716U;
	uint32_t x47 = 404U;
	static volatile uint32_t x48 = 1U;
	static volatile uint32_t t9 = 18U;

    t9 = (x45+(x46^(x47-x48)));

    if (t9 != 1230533U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int64_t x49 = INT64_MIN;
	uint8_t x52 = 59U;
	volatile int64_t t10 = 23899512067LL;

    t10 = (x49+(x50^(x51-x52)));

    if (t10 != -9223372036854775611LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x53 = 5292;
	volatile int16_t x54 = INT16_MIN;
	int64_t x55 = -161641197921544LL;
	int32_t x56 = 37926;
	volatile int64_t t11 = -1LL;

    t11 = (x53+(x54^(x55-x56)));

    if (t11 != 161641197935486LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int32_t x57 = INT32_MAX;
	int32_t x58 = -1;
	uint64_t x59 = 1973520LLU;
	static volatile uint64_t t12 = 519201392LLU;

    t12 = (x57+(x58^(x59-x60)));

    if (t12 != 4292993773LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x62 = -4;
	static int64_t x63 = -6373LL;
	int32_t x64 = INT32_MIN;
	volatile int64_t t13 = -8328044LL;

    t13 = (x61+(x62^(x63-x64)));

    if (t13 != -2147480330LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MIN;
	int32_t x67 = -1;
	int64_t x68 = INT64_MAX;
	int64_t t14 = -615LL;

    t14 = (x65+(x66^(x67-x68)));

    if (t14 != -32768LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = 31;
	int64_t x74 = INT64_MIN;
	int64_t t15 = 1195883391067616782LL;

    t15 = (x73+(x74^(x75-x76)));

    if (t15 != 9223372036854775739LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x79 = INT8_MAX;
	int64_t x80 = -1LL;

    t16 = (x77+(x78^(x79-x80)));

    if (t16 != -32897LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x81 = 9U;
	int32_t x82 = 1571159;
	static int32_t x83 = INT32_MIN;
	static int64_t x84 = -1LL;
	volatile int64_t t17 = -84145184393826LL;

    t17 = (x81+(x82^(x83-x84)));

    if (t17 != -2145912481LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x85 = 6U;
	volatile int8_t x86 = 24;
	int16_t x88 = INT16_MIN;
	volatile uint32_t t18 = 1U;

    t18 = (x85+(x86^(x87-x88)));

    if (t18 != 98285U) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x90 = 1;
	int32_t x91 = -1;
	uint16_t x92 = 299U;
	int32_t t19 = 1;

    t19 = (x89+(x90^(x91-x92)));

    if (t19 != -292) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x93 = -4;
	static int64_t x95 = -842289352882702LL;
	int64_t x96 = -1LL;

    t20 = (x93+(x94^(x95-x96)));

    if (t20 != -842289352918520LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x99 = 2162U;
	volatile int16_t x100 = -1;
	volatile int64_t t21 = -15359048917LL;

    t21 = (x97+(x98^(x99-x100)));

    if (t21 != -2162LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = 846U;
	int64_t x103 = -553737LL;
	int8_t x104 = 11;
	int64_t t22 = 816461LL;

    t22 = (x101+(x102^(x103-x104)));

    if (t22 != -552991LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x105 = 39U;
	uint64_t x106 = 72362267189824500LLU;
	uint32_t x107 = 197236498U;
	uint32_t x108 = 98860046U;
	static volatile uint64_t t23 = 1885888LLU;

    t23 = (x105+(x106^(x107-x108)));

    if (t23 != 72362267125010711LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x113 = INT16_MAX;
	uint16_t x114 = UINT16_MAX;
	static int32_t x115 = -38391377;
	uint16_t x116 = UINT16_MAX;
	volatile int32_t t24 = -2;

    t24 = (x113+(x114^(x115-x116)));

    if (t24 != -38384050) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x121 = 0U;
	static uint16_t x122 = UINT16_MAX;
	static int16_t x123 = INT16_MIN;
	static int32_t t25 = 9139977;

    t25 = (x121+(x122^(x123-x124)));

    if (t25 != 65535) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x125 = INT8_MAX;
	int64_t x127 = -5160LL;
	uint64_t x128 = 130922336LLU;
	static uint64_t t26 = 30LLU;

    t26 = (x125+(x126^(x127-x128)));

    if (t26 != 18446744073578644835LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint64_t x129 = 439LLU;
	uint16_t x130 = UINT16_MAX;
	static int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	uint64_t t27 = 20LLU;

    t27 = (x129+(x130^(x131-x132)));

    if (t27 != 18446744073709486645LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x133 = -25;
	int8_t x134 = -1;
	uint64_t x135 = 947052606LLU;
	volatile int16_t x136 = INT16_MAX;
	static uint64_t t28 = 2590280LLU;

    t28 = (x133+(x134^(x135-x136)));

    if (t28 != 18446744072762531751LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x138 = 266;
	int8_t x139 = INT8_MIN;
	volatile int32_t t29 = -848;

    t29 = (x137+(x138^(x139-x140)));

    if (t29 != -33142) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x145 = UINT64_MAX;
	uint64_t x146 = 119LLU;
	static uint64_t x147 = 102077263LLU;
	uint64_t t30 = 13604671LLU;

    t30 = (x145+(x146^(x147-x148)));

    if (t30 != 102110007LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x149 = 69819490;
	int8_t x150 = 14;
	volatile uint64_t x151 = UINT64_MAX;
	static volatile int64_t x152 = INT64_MIN;
	static uint64_t t31 = 290LLU;

    t31 = (x149+(x150^(x151-x152)));

    if (t31 != 9223372036924595283LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x153 = 14336363605LLU;
	int16_t x155 = INT16_MIN;
	static volatile int64_t x156 = INT64_MIN;
	static volatile uint64_t t32 = 1344462846685638LLU;

    t32 = (x153+(x154^(x155-x156)));

    if (t32 != 9223372051191172180LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x157 = -891102LL;
	int16_t x158 = 5;
	int8_t x159 = 11;
	uint16_t x160 = 0U;

    t33 = (x157+(x158^(x159-x160)));

    if (t33 != -891088LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x161 = -1;
	volatile uint8_t x162 = UINT8_MAX;
	int64_t x163 = INT64_MIN;
	int8_t x164 = INT8_MIN;
	int64_t t34 = -6734905261777LL;

    t34 = (x161+(x162^(x163-x164)));

    if (t34 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = INT16_MAX;
	static uint32_t x166 = 227540986U;
	static uint8_t x167 = 4U;
	volatile uint64_t x168 = 1785LLU;
	uint64_t t35 = 13710034069061LLU;

    t35 = (x165+(x166^(x167-x168)));

    if (t35 != 18446744073482045168LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x169 = -7;
	static int64_t x171 = INT64_MIN;
	int32_t x172 = -1;
	volatile int64_t t36 = 90502LL;

    t36 = (x169+(x170^(x171-x172)));

    if (t36 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x173 = INT16_MIN;
	int64_t x174 = INT64_MIN;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	int64_t t37 = 318076420LL;

    t37 = (x173+(x174^(x175-x176)));

    if (t37 != -9223372034707357696LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x178 = INT8_MIN;
	volatile int16_t x179 = -53;
	volatile int32_t t38 = 302109;

    t38 = (x177+(x178^(x179-x180)));

    if (t38 != 2249035) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x185 = INT16_MIN;
	int8_t x187 = 3;
	uint32_t x188 = UINT32_MAX;
	uint32_t t39 = 549359U;

    t39 = (x185+(x186^(x187-x188)));

    if (t39 != 2147450875U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x201 = -1;
	static uint64_t x202 = 8LLU;
	int16_t x203 = INT16_MIN;
	int16_t x204 = 15877;

    t40 = (x201+(x202^(x203-x204)));

    if (t40 != 18446744073709502962LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = 15;
	static int64_t x207 = 64267521994236LL;
	uint8_t x208 = 2U;
	volatile int64_t t41 = 198LL;

    t41 = (x205+(x206^(x207-x208)));

    if (t41 != 64267521994101LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x210 = UINT16_MAX;
	uint8_t x212 = 7U;
	int32_t t42 = -510;

    t42 = (x209+(x210^(x211-x212)));

    if (t42 != 65542) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x213 = INT16_MIN;
	volatile int16_t x214 = -2001;
	static int16_t x215 = INT16_MIN;
	static int16_t x216 = 59;
	volatile int32_t t43 = -15838651;

    t43 = (x213+(x214^(x215-x216)));

    if (t43 != 2026) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x218 = 141534U;
	uint64_t t44 = 1LLU;

    t44 = (x217+(x218^(x219-x220)));

    if (t44 != 141405LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x227 = INT32_MIN;
	uint32_t x228 = 118254356U;
	volatile int64_t t45 = 77039403537073267LL;

    t45 = (x225+(x226^(x227-x228)));

    if (t45 != -2029229255LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x229 = 60539585;
	volatile int8_t x231 = -3;

    t46 = (x229+(x230^(x231-x232)));

    if (t46 != 60539664) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x241 = 0;
	uint32_t x242 = 4004U;
	int32_t x243 = INT32_MIN;
	volatile int64_t x244 = INT64_MIN;

    t47 = (x241+(x242^(x243-x244)));

    if (t47 != 9223372034707296164LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x249 = 500LL;
	uint64_t x251 = 6584599415975645LLU;
	uint64_t t48 = 474509900204485349LLU;

    t48 = (x249+(x250^(x251-x252)));

    if (t48 != 6584599415985045LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x254 = -1;
	static int32_t x255 = 88819796;
	uint16_t x256 = 4337U;

    t49 = (x253+(x254^(x255-x256)));

    if (t49 != -88815205) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x257 = 0LL;
	uint16_t x258 = 62U;
	volatile uint32_t x259 = 7793086U;
	int32_t x260 = INT32_MIN;
	volatile int64_t t50 = -1LL;

    t50 = (x257+(x258^(x259-x260)));

    if (t50 != 2155276672LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x261 = -1LL;
	int32_t x262 = 10230475;
	static int8_t x263 = -1;
	volatile int64_t t51 = 1122LL;

    t51 = (x261+(x262^(x263-x264)));

    if (t51 != 10230474LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x269 = -1;
	uint32_t x270 = UINT32_MAX;
	static int8_t x271 = 0;

    t52 = (x269+(x270^(x271-x272)));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x273 = 6916427;
	volatile uint64_t x274 = UINT64_MAX;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = -1;

    t53 = (x273+(x274^(x275-x276)));

    if (t53 != 6949193LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x277 = 27;
	int8_t x279 = INT8_MAX;
	static int32_t x280 = -1;
	int32_t t54 = 1295262;

    t54 = (x277+(x278^(x279-x280)));

    if (t54 != 282) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x281 = 2254U;
	uint64_t x284 = 20919454388LLU;

    t55 = (x281+(x282^(x283-x284)));

    if (t55 != 20919456694LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x289 = INT8_MAX;
	uint8_t x290 = 55U;
	uint8_t x291 = 57U;
	static int8_t x292 = INT8_MAX;

    t56 = (x289+(x290^(x291-x292)));

    if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x298 = 81U;
	volatile int64_t x299 = 120020314353843LL;
	volatile int64_t t57 = 88101841323452LL;

    t57 = (x297+(x298^(x299-x300)));

    if (t57 != 120020314353764LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x301 = 404U;
	int8_t x302 = -1;
	uint16_t x303 = UINT16_MAX;
	uint32_t x304 = 16U;

    t58 = (x301+(x302^(x303-x304)));

    if (t58 != 4294902180U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x305 = UINT32_MAX;
	int64_t x307 = -1LL;
	int16_t x308 = -1377;

    t59 = (x305+(x306^(x307-x308)));

    if (t59 != 4294965918LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x309 = UINT16_MAX;
	int32_t x310 = -1;
	static int16_t x311 = INT16_MIN;

    t60 = (x309+(x310^(x311-x312)));

    if (t60 != -9223372036854677506LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x313 = 52872873LLU;
	volatile uint16_t x314 = UINT16_MAX;
	volatile int16_t x316 = INT16_MIN;
	uint64_t t61 = 547229116680653LLU;

    t61 = (x313+(x314^(x315-x316)));

    if (t61 != 52905385LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x317 = -1;
	int32_t x318 = INT32_MAX;
	volatile uint16_t x319 = 1U;
	volatile uint16_t x320 = 5U;
	volatile int32_t t62 = -80864022;

    t62 = (x317+(x318^(x319-x320)));

    if (t62 != -2147483646) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x321 = 6731U;
	static int64_t x322 = 21976434097LL;
	uint64_t x323 = 3994209LLU;
	int64_t x324 = -1LL;
	volatile uint64_t t63 = 28779282273LLU;

    t63 = (x321+(x322^(x323-x324)));

    if (t63 != 21975618078LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x325 = 4005771419386958718LL;
	uint64_t x326 = UINT64_MAX;
	int16_t x327 = INT16_MAX;
	int16_t x328 = 7945;
	volatile uint64_t t64 = 2011LLU;

    t64 = (x325+(x326^(x327-x328)));

    if (t64 != 4005771419386933895LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x334 = INT16_MIN;
	uint64_t x335 = 47349878286594972LLU;
	uint16_t x336 = 3U;
	uint64_t t65 = 8599946148724826LLU;

    t65 = (x333+(x334^(x335-x336)));

    if (t65 != 18399394193275466649LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x339 = UINT64_MAX;
	static int64_t x340 = -24210571LL;
	volatile uint64_t t66 = 98LLU;

    t66 = (x337+(x338^(x339-x340)));

    if (t66 != 2761622249066799LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x341 = 2483U;
	static int64_t x342 = -1LL;
	int32_t x343 = INT32_MIN;
	volatile int64_t t67 = 24599877689092LL;

    t67 = (x341+(x342^(x343-x344)));

    if (t67 != 2147453362LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x345 = UINT16_MAX;
	static int64_t x347 = -321111740108LL;
	uint32_t x348 = 24U;
	int64_t t68 = 522569559065023LL;

    t68 = (x345+(x346^(x347-x348)));

    if (t68 != -319211911583LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x349 = 47U;
	uint8_t x350 = UINT8_MAX;
	int16_t x351 = INT16_MAX;
	int32_t x352 = -1;
	volatile int32_t t69 = -1;

    t69 = (x349+(x350^(x351-x352)));

    if (t69 != 33070) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x353 = INT8_MIN;
	volatile uint8_t x354 = 12U;
	int64_t x356 = -1LL;
	int64_t t70 = -3LL;

    t70 = (x353+(x354^(x355-x356)));

    if (t70 != -114LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x361 = 4U;
	static volatile uint16_t x362 = UINT16_MAX;
	uint8_t x363 = UINT8_MAX;
	static int16_t x364 = INT16_MIN;
	int32_t t71 = 370;

    t71 = (x361+(x362^(x363-x364)));

    if (t71 != 32516) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x366 = UINT64_MAX;
	int32_t x367 = INT32_MAX;
	static uint64_t x368 = 2075LLU;
	uint64_t t72 = 3LLU;

    t72 = (x365+(x366^(x367-x368)));

    if (t72 != 18446744071562070042LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint8_t x369 = 10U;
	int8_t x370 = -53;
	int8_t x371 = INT8_MIN;
	static uint8_t x372 = UINT8_MAX;
	int32_t t73 = -734614276;

    t73 = (x369+(x370^(x371-x372)));

    if (t73 != 340) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x373 = INT8_MIN;
	volatile int64_t x376 = INT64_MAX;
	volatile int64_t t74 = -57026705LL;

    t74 = (x373+(x374^(x375-x376)));

    if (t74 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x377 = -1LL;
	int8_t x378 = 1;
	uint8_t x379 = 31U;
	uint8_t x380 = UINT8_MAX;
	int64_t t75 = 17511LL;

    t75 = (x377+(x378^(x379-x380)));

    if (t75 != -224LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x381 = 417773369176LL;
	volatile int16_t x382 = INT16_MIN;
	int16_t x383 = -7774;
	volatile int8_t x384 = 3;
	static volatile int64_t t76 = 888030769454LL;

    t76 = (x381+(x382^(x383-x384)));

    if (t76 != 417773394167LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x385 = 1071006734;
	int16_t x386 = INT16_MIN;
	int16_t x387 = 12982;
	static int8_t x388 = INT8_MIN;

    t77 = (x385+(x386^(x387-x388)));

    if (t77 != 1070987076) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x389 = -1;
	volatile uint32_t x390 = 26U;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 526863417260810LLU;
	volatile uint64_t t78 = 6892464003LLU;

    t78 = (x389+(x390^(x391-x392)));

    if (t78 != 18446217210292290667LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x394 = 478783687905921LL;
	volatile int32_t x395 = INT32_MIN;
	int16_t x396 = -1;
	volatile int64_t t79 = 30LL;

    t79 = (x393+(x394^(x395-x396)));

    if (t79 != -481543645809638LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = -15;
	uint8_t x399 = UINT8_MAX;
	volatile uint32_t x400 = 215745292U;
	volatile int64_t t80 = -3011533992313LL;

    t80 = (x397+(x398^(x399-x400)));

    if (t80 != -9223372036639030782LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x402 = INT8_MAX;
	int64_t x403 = -1144297867919259791LL;
	static int8_t x404 = 7;
	volatile int64_t t81 = -33211464951LL;

    t81 = (x401+(x402^(x403-x404)));

    if (t81 != -1144297867919259907LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x405 = INT8_MAX;
	uint16_t x406 = 1894U;
	int16_t x407 = INT16_MAX;
	volatile int32_t t82 = 0;

    t82 = (x405+(x406^(x407-x408)));

    if (t82 != 31077) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x410 = 2141093260813926LLU;
	int8_t x412 = -1;
	uint64_t t83 = 5368717698692027881LLU;

    t83 = (x409+(x410^(x411-x412)));

    if (t83 != 2141093304905703LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x413 = 0;
	int64_t x414 = INT64_MIN;
	volatile int64_t t84 = -1202LL;

    t84 = (x413+(x414^(x415-x416)));

    if (t84 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x417 = 386532018U;
	uint64_t x418 = 7223243503374447LLU;
	uint64_t x419 = 881842441811132LLU;
	volatile uint64_t t85 = 846LLU;

    t85 = (x417+(x418^(x419-x420)));

    if (t85 != 7471764374480901LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x421 = 1;
	uint8_t x423 = 16U;
	static uint32_t x424 = UINT32_MAX;
	volatile uint32_t t86 = 445U;

    t86 = (x421+(x422^(x423-x424)));

    if (t86 != 4294934546U) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x425 = INT32_MIN;
	uint64_t x426 = 1117278612854782LLU;
	int64_t x428 = 21449188371439LL;
	volatile uint64_t t87 = 1021407146788486866LLU;

    t87 = (x425+(x426^(x427-x428)));

    if (t87 != 18445640534244561823LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x429 = 1U;
	uint64_t x430 = 28LLU;
	uint8_t x431 = 30U;
	int32_t x432 = INT32_MAX;
	static volatile uint64_t t88 = 1300842246089846566LLU;

    t88 = (x429+(x430^(x431-x432)));

    if (t88 != 18446744071562067972LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x433 = 0;
	static uint16_t x434 = 25063U;
	uint64_t x435 = 1137820LLU;
	volatile uint64_t t89 = 48558924LLU;

    t89 = (x433+(x434^(x435-x436)));

    if (t89 != 1129850LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x441 = -1;
	int32_t x442 = -31275;
	int32_t x443 = -25;
	uint8_t x444 = UINT8_MAX;
	int32_t t90 = -19562074;

    t90 = (x441+(x442^(x443-x444)));

    if (t90 != 31548) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x446 = INT16_MIN;
	int32_t x447 = INT32_MIN;
	static uint64_t x448 = UINT64_MAX;

    t91 = (x445+(x446^(x447-x448)));

    if (t91 != 2147450880LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x449 = UINT16_MAX;
	static volatile int16_t x451 = -1;
	static volatile int32_t t92 = 124147380;

    t92 = (x449+(x450^(x451-x452)));

    if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x453 = 792;
	int64_t x455 = INT64_MIN;
	int16_t x456 = INT16_MIN;
	int64_t t93 = -17LL;

    t93 = (x453+(x454^(x455-x456)));

    if (t93 != -9223372036854742246LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x461 = INT16_MAX;
	static uint8_t x462 = UINT8_MAX;
	int8_t x463 = INT8_MIN;
	volatile uint64_t x464 = UINT64_MAX;
	static uint64_t t94 = 876336233158LLU;

    t94 = (x461+(x462^(x463-x464)));

    if (t94 != 32637LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x466 = INT16_MIN;
	uint64_t x467 = 4977757190846LLU;
	uint32_t x468 = 333256577U;
	volatile uint64_t t95 = 31172488186950LLU;

    t95 = (x465+(x466^(x467-x468)));

    if (t95 != 18446739096284713610LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x469 = 17U;
	volatile int16_t x471 = INT16_MAX;
	int64_t t96 = -617LL;

    t96 = (x469+(x470^(x471-x472)));

    if (t96 != -9223372032562511673LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x473 = 10;
	volatile uint32_t x475 = 96767237U;
	int64_t x476 = 1303629041371783921LL;
	volatile int64_t t97 = -74LL;

    t97 = (x473+(x474^(x475-x476)));

    if (t97 != 1303629041275016682LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x477 = -23;
	static int8_t x478 = INT8_MIN;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t98 = -19939249;

    t98 = (x477+(x478^(x479-x480)));

    if (t98 != -24) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x481 = 1U;
	uint16_t x482 = 6067U;
	int32_t x483 = -1;
	volatile int32_t t99 = 93870;

    t99 = (x481+(x482^(x483-x484)));

    if (t99 != 6068) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint8_t x485 = 15U;
	static int16_t x486 = 10;
	int8_t x487 = -1;
	uint64_t x488 = UINT64_MAX;

    t100 = (x485+(x486^(x487-x488)));

    if (t100 != 25LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x490 = 147298878624456548LLU;
	int16_t x491 = -393;
	int64_t x492 = INT64_MIN;
	static volatile uint64_t t101 = 5092133288513LLU;

    t101 = (x489+(x490^(x491-x492)));

    if (t101 != 9076073158230384914LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x493 = -1;
	static volatile int16_t x494 = -1;
	int64_t x495 = 1633532861249LL;
	uint16_t x496 = UINT16_MAX;
	static int64_t t102 = -1008890717069777705LL;

    t102 = (x493+(x494^(x495-x496)));

    if (t102 != -1633532795716LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x497 = -1;
	uint32_t x498 = 812244U;
	int64_t x499 = -3LL;
	uint64_t x500 = 1880LLU;
	uint64_t t103 = 283634088269725297LLU;

    t103 = (x497+(x498^(x499-x500)));

    if (t103 != 18446744073708739696LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x501 = 16U;
	int16_t x502 = -1;
	static int16_t x503 = -1;
	static uint64_t x504 = UINT64_MAX;
	volatile uint64_t t104 = 4986979LLU;

    t104 = (x501+(x502^(x503-x504)));

    if (t104 != 15LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x505 = INT64_MIN;
	int8_t x506 = INT8_MIN;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = -96629;
	volatile uint64_t t105 = 4639660390027957190LLU;

    t105 = (x505+(x506^(x507-x508)));

    if (t105 != 9223372036854679284LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x509 = -10;
	static uint16_t x510 = 789U;
	uint64_t x511 = 13893689569LLU;
	uint64_t x512 = 2169606617968LLU;
	static volatile uint64_t t106 = 4LLU;

    t106 = (x509+(x510^(x511-x512)));

    if (t106 != 18446741917996623450LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x518 = -56;
	uint16_t x519 = 2U;
	int32_t x520 = 490207525;
	int32_t t107 = -12;

    t107 = (x517+(x518^(x519-x520)));

    if (t107 != 490207508) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x522 = -1;
	int8_t x524 = 1;
	int32_t t108 = -176583019;

    t108 = (x521+(x522^(x523-x524)));

    if (t108 != -32777) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x525 = -8748871132523381LL;
	static uint8_t x526 = 0U;
	volatile int8_t x528 = INT8_MAX;
	static volatile int64_t t109 = -485106981717569LL;

    t109 = (x525+(x526^(x527-x528)));

    if (t109 != -8748871030973163LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x529 = -1;
	int64_t x530 = INT64_MIN;
	int16_t x531 = 0;
	int16_t x532 = 347;
	volatile int64_t t110 = 18196206308139788LL;

    t110 = (x529+(x530^(x531-x532)));

    if (t110 != 9223372036854775460LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x535 = 499579005557LLU;
	int8_t x536 = -14;
	volatile uint64_t t111 = 33LLU;

    t111 = (x533+(x534^(x535-x536)));

    if (t111 != 9223372536433781460LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x541 = -3;
	int32_t x544 = -1401183;
	int64_t t112 = -1438720559LL;

    t112 = (x541+(x542^(x543-x544)));

    if (t112 != 2497937493233378LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x545 = -14485549624877LL;
	volatile uint32_t x548 = UINT32_MAX;

    t113 = (x545+(x546^(x547-x548)));

    if (t113 != -14481254723118LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x550 = -1;
	int16_t x551 = -11;

    t114 = (x549+(x550^(x551-x552)));

    if (t114 != 34LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x553 = 2445585716LLU;
	volatile uint8_t x554 = 2U;
	volatile uint64_t t115 = 137113337103LLU;

    t115 = (x553+(x554^(x555-x556)));

    if (t115 != 6108548485LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x557 = 13U;
	static volatile int32_t x558 = INT32_MIN;
	uint64_t x559 = UINT64_MAX;
	volatile int32_t x560 = INT32_MAX;

    t116 = (x557+(x558^(x559-x560)));

    if (t116 != 13LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint8_t x562 = 77U;
	volatile int8_t x563 = -39;
	volatile int64_t x564 = INT64_MIN;
	int64_t t117 = -52055706965LL;

    t117 = (x561+(x562^(x563-x564)));

    if (t117 != 9223372036854775695LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x565 = INT64_MAX;
	int64_t x568 = 14271454058LL;
	volatile uint64_t t118 = 5020938372949LLU;

    t118 = (x565+(x566^(x567-x568)));

    if (t118 != 2244942451300104LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x569 = 0U;
	int8_t x570 = -1;
	static volatile uint64_t t119 = 6480869590784300932LLU;

    t119 = (x569+(x570^(x571-x572)));

    if (t119 != 9223372036854775592LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x573 = -469308517661925LL;
	int64_t x574 = INT64_MIN;
	static uint8_t x575 = 1U;
	int32_t x576 = 38506;
	int64_t t120 = -11469819902321871LL;

    t120 = (x573+(x574^(x575-x576)));

    if (t120 != 9222902728337075378LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x577 = UINT16_MAX;
	static uint64_t x578 = 36300768008050LLU;
	volatile uint64_t t121 = 199LLU;

    t121 = (x577+(x578^(x579-x580)));

    if (t121 != 36300765730502LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x581 = -1LL;
	volatile int16_t x583 = -1;
	int32_t x584 = -1;
	int64_t t122 = 15277101926LL;

    t122 = (x581+(x582^(x583-x584)));

    if (t122 != -2819LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint64_t x589 = 352984989563731LLU;
	static int32_t x590 = INT32_MAX;
	volatile int16_t x591 = -1;
	volatile int64_t x592 = INT64_MIN;

    t123 = (x589+(x590^(x591-x592)));

    if (t123 != 9223725019696855891LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x593 = 764565189681281LLU;
	volatile int64_t x596 = INT64_MIN;
	uint64_t t124 = 2842LLU;

    t124 = (x593+(x594^(x595-x596)));

    if (t124 != 9224136602044457216LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x597 = 324652766485793LLU;
	int64_t x598 = INT64_MIN;
	volatile int8_t x599 = INT8_MAX;
	volatile uint64_t t125 = 767552LLU;

    t125 = (x597+(x598^(x599-x600)));

    if (t125 != 9223696689621260827LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x601 = 390969LL;
	int32_t x602 = 522926;
	int8_t x604 = INT8_MIN;

    t126 = (x601+(x602^(x603-x604)));

    if (t126 != 848394LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x605 = 0U;
	int64_t x606 = -1LL;
	uint64_t x608 = UINT64_MAX;
	volatile uint64_t t127 = 14LLU;

    t127 = (x605+(x606^(x607-x608)));

    if (t127 != 18446738985390964435LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x609 = 0U;
	int64_t x611 = INT64_MIN;
	volatile int16_t x612 = INT16_MIN;
	static volatile int64_t t128 = 2LL;

    t128 = (x609+(x610^(x611-x612)));

    if (t128 != 9223372036854742912LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x621 = UINT8_MAX;
	int8_t x622 = INT8_MIN;
	int8_t x624 = -16;
	volatile int32_t t129 = 349959;

    t129 = (x621+(x622^(x623-x624)));

    if (t129 != 14) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x627 = -2;
	static int16_t x628 = -1;
	volatile uint64_t t130 = 13503LLU;

    t130 = (x625+(x626^(x627-x628)));

    if (t130 != 42LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x629 = INT64_MIN;
	static int8_t x630 = -1;
	static int64_t x631 = INT64_MIN;
	static int8_t x632 = -1;

    t131 = (x629+(x630^(x631-x632)));

    if (t131 != -2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x633 = 238U;
	static int32_t x634 = INT32_MIN;
	static volatile int16_t x635 = -1;

    t132 = (x633+(x634^(x635-x636)));

    if (t132 != -9223372034707291923LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x641 = -69;
	int32_t x643 = -1;
	static uint8_t x644 = 10U;
	int32_t t133 = -725;

    t133 = (x641+(x642^(x643-x644)));

    if (t133 != -315) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x646 = 1;
	int16_t x647 = -13;
	int32_t t134 = -78427215;

    t134 = (x645+(x646^(x647-x648)));

    if (t134 != -83) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int8_t x649 = -15;
	int64_t x650 = INT64_MIN;
	int8_t x651 = -1;
	static int64_t x652 = INT64_MIN;

    t135 = (x649+(x650^(x651-x652)));

    if (t135 != -16LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x653 = 0LLU;
	uint16_t x654 = UINT16_MAX;
	uint8_t x655 = UINT8_MAX;
	uint64_t t136 = 7429713499LLU;

    t136 = (x653+(x654^(x655-x656)));

    if (t136 != 4294920205LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x657 = -1;

    t137 = (x657+(x658^(x659-x660)));

    if (t137 != 2147483590U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x666 = INT32_MIN;
	uint16_t x667 = UINT16_MAX;
	uint16_t x668 = UINT16_MAX;
	volatile int32_t t138 = -53;

    t138 = (x665+(x666^(x667-x668)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x669 = 12726040060082518LL;
	uint8_t x670 = 0U;
	volatile int8_t x671 = 5;
	uint16_t x672 = UINT16_MAX;
	int64_t t139 = 128258LL;

    t139 = (x669+(x670^(x671-x672)));

    if (t139 != 12726040060016988LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x674 = 1641;
	int32_t x675 = -27540576;
	int8_t x676 = 0;
	volatile int32_t t140 = 1;

    t140 = (x673+(x674^(x675-x676)));

    if (t140 != -27540151) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint16_t x678 = 19U;
	static uint32_t x679 = 141506729U;
	int32_t x680 = -1;
	uint32_t t141 = 63U;

    t141 = (x677+(x678^(x679-x680)));

    if (t141 != 141473977U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x685 = INT64_MIN;
	int8_t x687 = 0;

    t142 = (x685+(x686^(x687-x688)));

    if (t142 != -9223372036854775727LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int16_t x689 = 9156;
	int16_t x690 = INT16_MAX;
	int32_t x691 = -638829785;
	volatile int64_t x692 = INT64_MIN;
	volatile int64_t t143 = 21LL;

    t143 = (x689+(x690^(x691-x692)));

    if (t143 != 9223372036215957660LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile uint32_t x693 = UINT32_MAX;
	uint16_t x694 = 12U;
	int64_t x695 = -1LL;
	static int32_t x696 = -1;
	volatile int64_t t144 = -1710LL;

    t144 = (x693+(x694^(x695-x696)));

    if (t144 != 4294967307LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x697 = 127319U;
	volatile int16_t x698 = INT16_MIN;
	uint32_t x699 = 1016990780U;
	int32_t x700 = INT32_MIN;

    t145 = (x697+(x698^(x699-x700)));

    if (t145 != 1130593683U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x701 = 21829900379LL;
	int8_t x702 = INT8_MIN;
	int16_t x703 = INT16_MAX;
	int8_t x704 = INT8_MIN;
	static int64_t t146 = -2075420096541780LL;

    t146 = (x701+(x702^(x703-x704)));

    if (t146 != 21829867610LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x705 = -1;
	uint8_t x706 = UINT8_MAX;
	static uint16_t x707 = 1722U;
	uint16_t x708 = 7U;
	static volatile int32_t t147 = 15113254;

    t147 = (x705+(x706^(x707-x708)));

    if (t147 != 1611) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x709 = INT64_MIN;
	static uint64_t x710 = 102453374650LLU;
	uint64_t x711 = 84183LLU;
	volatile uint16_t x712 = 30U;

    t148 = (x709+(x710^(x711-x712)));

    if (t148 != 9223372139308197379LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x714 = 10899U;
	int16_t x715 = 238;
	volatile uint16_t x716 = UINT16_MAX;
	int32_t t149 = -995;

    t149 = (x713+(x714^(x715-x716)));

    if (t149 != -54661) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x717 = 23377760U;
	static uint64_t x718 = 252LLU;
	volatile int64_t x719 = -1LL;
	static volatile uint8_t x720 = 4U;

    t150 = (x717+(x718^(x719-x720)));

    if (t150 != 23377511LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x721 = -1319507029160865201LL;
	uint32_t x724 = 262049U;
	volatile int64_t t151 = -160803273LL;

    t151 = (x721+(x722^(x723-x724)));

    if (t151 != -1319507024867178225LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x729 = INT8_MIN;
	int64_t x730 = INT64_MAX;
	static volatile int64_t x731 = -1LL;
	uint16_t x732 = 7814U;
	int64_t t152 = 36384LL;

    t152 = (x729+(x730^(x731-x732)));

    if (t152 != -9223372036854768122LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x733 = 22U;
	static int64_t x734 = INT64_MAX;
	volatile uint64_t x735 = UINT64_MAX;
	uint64_t x736 = UINT64_MAX;
	uint64_t t153 = 51008529740LLU;

    t153 = (x733+(x734^(x735-x736)));

    if (t153 != 9223372036854775829LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x739 = 0U;
	volatile uint32_t x740 = 0U;
	volatile uint32_t t154 = 649763U;

    t154 = (x737+(x738^(x739-x740)));

    if (t154 != 41372U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x741 = -46790797307LL;
	uint32_t x743 = UINT32_MAX;
	uint16_t x744 = 7793U;
	int64_t t155 = 5629336809992LL;

    t155 = (x741+(x742^(x743-x744)));

    if (t155 != -46790789514LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x745 = 5U;
	int16_t x746 = INT16_MIN;
	uint32_t x747 = 31106511U;
	int16_t x748 = INT16_MIN;
	volatile uint32_t t156 = 201U;

    t156 = (x745+(x746^(x747-x748)));

    if (t156 != 4263814612U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x750 = 49399;
	uint64_t x751 = 17438LLU;
	uint32_t x752 = 25U;
	uint64_t t157 = 125525LLU;

    t157 = (x749+(x750^(x751-x752)));

    if (t157 != 66801LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x753 = UINT8_MAX;
	uint64_t x754 = UINT64_MAX;
	static uint8_t x755 = 91U;
	int16_t x756 = 1;
	static volatile uint64_t t158 = 2937LLU;

    t158 = (x753+(x754^(x755-x756)));

    if (t158 != 164LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x757 = INT8_MAX;
	uint8_t x759 = UINT8_MAX;
	static int16_t x760 = INT16_MIN;
	static volatile int64_t t159 = -1346984LL;

    t159 = (x757+(x758^(x759-x760)));

    if (t159 != 9223372036854742911LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x762 = 1U;
	int64_t x763 = -1LL;
	volatile int64_t t160 = -3784459378233223345LL;

    t160 = (x761+(x762^(x763-x764)));

    if (t160 != 125LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x770 = UINT64_MAX;
	int16_t x771 = 1731;
	uint32_t x772 = 1680263U;
	static uint64_t t161 = 497539059374889725LLU;

    t161 = (x769+(x770^(x771-x772)));

    if (t161 != 18446744069416262850LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x773 = INT32_MIN;
	int64_t x776 = -2786825006LL;
	volatile int64_t t162 = 186276LL;

    t162 = (x773+(x774^(x775-x776)));

    if (t162 != 1508142289LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x777 = -1;
	int8_t x779 = INT8_MAX;
	static int64_t x780 = -1LL;
	volatile int64_t t163 = -1795192353841LL;

    t163 = (x777+(x778^(x779-x780)));

    if (t163 != 132LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x789 = INT16_MAX;
	int8_t x790 = INT8_MIN;
	static int8_t x791 = INT8_MIN;
	int8_t x792 = -28;

    t164 = (x789+(x790^(x791-x792)));

    if (t164 != 32795) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x798 = INT32_MIN;
	int64_t x800 = -26716LL;
	int64_t t165 = 946116930211LL;

    t165 = (x797+(x798^(x799-x800)));

    if (t165 != 26716LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x802 = -1;
	int32_t x803 = INT32_MIN;
	static int32_t x804 = INT32_MIN;
	int32_t t166 = -95;

    t166 = (x801+(x802^(x803-x804)));

    if (t166 != -32769) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x805 = INT64_MIN;
	int16_t x806 = 78;
	static uint64_t x807 = 7015315LLU;
	volatile uint8_t x808 = UINT8_MAX;
	uint64_t t167 = 125288248340LLU;

    t167 = (x805+(x806^(x807-x808)));

    if (t167 != 9223372036861790938LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x809 = 11325LL;
	uint8_t x810 = 0U;
	uint8_t x812 = UINT8_MAX;
	int64_t t168 = 0LL;

    t168 = (x809+(x810^(x811-x812)));

    if (t168 != 4294978366LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x813 = -3860386650250539799LL;
	volatile int16_t x814 = -15454;
	uint16_t x815 = 20U;
	volatile int16_t x816 = -1;

    t169 = (x813+(x814^(x815-x816)));

    if (t169 != -3860386650250555232LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x817 = INT64_MIN;
	int64_t x818 = INT64_MAX;
	int32_t x819 = INT32_MAX;
	uint64_t x820 = 6775668746707LLU;
	static volatile uint64_t t170 = 875712159LLU;

    t170 = (x817+(x818^(x819-x820)));

    if (t170 != 6773521263059LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x821 = 3968;
	int8_t x822 = -1;
	uint64_t x823 = 292705380701112LLU;
	int64_t x824 = INT64_MIN;
	uint64_t t171 = 83750392181558476LLU;

    t171 = (x821+(x822^(x823-x824)));

    if (t171 != 9223079331474078663LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x825 = -1;
	int64_t x826 = -225682419018623LL;
	volatile uint16_t x827 = 9U;
	int64_t x828 = -2799743188858680038LL;
	volatile int64_t t172 = -27214152976LL;

    t172 = (x825+(x826^(x827-x828)));

    if (t172 != -2799658804429937043LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x837 = -1;
	int64_t x839 = -1LL;
	int32_t x840 = -2376;
	volatile int64_t t173 = -79586593LL;

    t173 = (x837+(x838^(x839-x840)));

    if (t173 != 2487LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x843 = 24;
	int64_t x844 = 109911589875LL;
	volatile int64_t t174 = 341LL;

    t174 = (x841+(x842^(x843-x844)));

    if (t174 != -111279225767LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint8_t x849 = UINT8_MAX;
	int32_t x850 = INT32_MIN;
	static int64_t x851 = -109088811LL;
	uint16_t x852 = 3U;
	static volatile int64_t t175 = 7464LL;

    t175 = (x849+(x850^(x851-x852)));

    if (t175 != 2038395089LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint32_t x857 = 1U;
	int8_t x858 = -1;
	volatile int64_t x859 = -1LL;
	uint64_t x860 = UINT64_MAX;

    t176 = (x857+(x858^(x859-x860)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint16_t x865 = 2934U;
	int64_t x866 = INT64_MAX;
	uint64_t x868 = 65LLU;

    t177 = (x865+(x866^(x867-x868)));

    if (t177 != 8825081905453067717LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x878 = INT64_MIN;
	int8_t x879 = 6;
	volatile int8_t x880 = -1;

    t178 = (x877+(x878^(x879-x880)));

    if (t178 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x885 = UINT8_MAX;
	volatile int32_t x887 = -1;
	int64_t t179 = -98832LL;

    t179 = (x885+(x886^(x887-x888)));

    if (t179 != -1099308222535379477LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x889 = -1702632744941226LL;
	int16_t x890 = 0;
	int64_t x891 = 374374052541596642LL;
	int32_t x892 = INT32_MAX;
	int64_t t180 = 1LL;

    t180 = (x889+(x890^(x891-x892)));

    if (t180 != 372671417649171769LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x893 = 1;
	static volatile int16_t x896 = INT16_MIN;

    t181 = (x893+(x894^(x895-x896)));

    if (t181 != 32769U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x897 = -1;
	uint8_t x900 = 13U;

    t182 = (x897+(x898^(x899-x900)));

    if (t182 != 1050402558) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x905 = -14;
	int8_t x906 = INT8_MAX;
	uint16_t x907 = UINT16_MAX;
	int8_t x908 = -1;
	int32_t t183 = 1;

    t183 = (x905+(x906^(x907-x908)));

    if (t183 != 65649) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x909 = INT8_MIN;
	static int64_t x911 = -215709017291763LL;
	uint16_t x912 = UINT16_MAX;
	uint64_t t184 = 1629LLU;

    t184 = (x909+(x910^(x911-x912)));

    if (t184 != 215709017357169LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x913 = -1;
	static int32_t x915 = INT32_MIN;
	static volatile int8_t x916 = -1;
	volatile int32_t t185 = -954005;

    t185 = (x913+(x914^(x915-x916)));

    if (t185 != 2147483520) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x917 = -1;
	static int8_t x918 = INT8_MAX;
	uint8_t x919 = 7U;
	int64_t x920 = -1LL;
	int64_t t186 = 158677LL;

    t186 = (x917+(x918^(x919-x920)));

    if (t186 != 118LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x921 = 417776LL;
	int16_t x922 = 3;
	static int8_t x924 = INT8_MAX;

    t187 = (x921+(x922^(x923-x924)));

    if (t187 != 483187LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x925 = UINT32_MAX;
	int32_t x926 = -1;
	uint8_t x928 = 75U;
	uint32_t t188 = 3578349U;

    t188 = (x925+(x926^(x927-x928)));

    if (t188 != 201U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x929 = INT16_MAX;
	static uint64_t x930 = UINT64_MAX;
	int64_t x931 = 7783592138LL;
	uint64_t x932 = 3120LLU;
	static uint64_t t189 = 472738393LLU;

    t189 = (x929+(x930^(x931-x932)));

    if (t189 != 18446744065925995364LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x934 = 0U;
	volatile int64_t x935 = -1LL;
	uint16_t x936 = UINT16_MAX;
	volatile int64_t t190 = 25191LL;

    t190 = (x933+(x934^(x935-x936)));

    if (t190 != 2147418111LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x941 = INT8_MIN;
	int32_t x942 = 8908795;
	uint16_t x943 = UINT16_MAX;
	uint64_t x944 = 113747LLU;
	volatile uint64_t t191 = 5LLU;

    t191 = (x941+(x942^(x943-x944)));

    if (t191 != 18446744073700682711LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x946 = 85U;
	int16_t x947 = -1;
	int32_t x948 = -20206;
	static int32_t t192 = -1;

    t192 = (x945+(x946^(x947-x948)));

    if (t192 != 20155) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x950 = INT64_MAX;
	int16_t x951 = -1;

    t193 = (x949+(x950^(x951-x952)));

    if (t193 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x953 = INT8_MIN;
	int32_t x954 = INT32_MIN;
	int16_t x956 = -109;
	volatile uint64_t t194 = 26259018151169LLU;

    t194 = (x953+(x954^(x955-x956)));

    if (t194 != 18446725171324149474LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x957 = INT16_MIN;
	uint64_t x958 = UINT64_MAX;
	uint8_t x959 = UINT8_MAX;
	int8_t x960 = INT8_MIN;
	static volatile uint64_t t195 = 4LLU;

    t195 = (x957+(x958^(x959-x960)));

    if (t195 != 18446744073709518464LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x961 = 8109302;
	volatile int32_t x962 = INT32_MIN;
	volatile int64_t x963 = -359415467LL;
	static volatile int64_t t196 = 429LL;

    t196 = (x961+(x962^(x963-x964)));

    if (t196 != -9223372035058598325LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x965 = -1;
	uint64_t x967 = 3LLU;
	int32_t x968 = -1;
	uint64_t t197 = 486881311271594552LLU;

    t197 = (x965+(x966^(x967-x968)));

    if (t197 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x969 = -1;
	volatile uint32_t x971 = UINT32_MAX;
	uint32_t x972 = 1168523654U;
	static int64_t t198 = 1244661573LL;

    t198 = (x969+(x970^(x971-x972)));

    if (t198 != -9223372033728332168LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint16_t x973 = UINT16_MAX;
	int32_t x974 = INT32_MIN;
	static int16_t x975 = INT16_MIN;
	static int16_t x976 = INT16_MIN;
	int32_t t199 = 8;

    t199 = (x973+(x974^(x975-x976)));

    if (t199 != -2147418113) { NG(); } else { ; }
	
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

