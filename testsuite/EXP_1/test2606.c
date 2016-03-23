
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

int16_t x1 = INT16_MIN;
volatile int16_t x7 = INT16_MIN;
uint16_t x10 = 8U;
int32_t x11 = INT32_MIN;
int32_t x12 = -1;
int64_t x13 = INT64_MIN;
int16_t x15 = INT16_MIN;
int16_t x23 = INT16_MIN;
int32_t t6 = -87;
int8_t x30 = -3;
volatile int8_t x33 = 28;
static uint32_t x39 = UINT32_MAX;
volatile int64_t t9 = -15070996LL;
volatile uint16_t x44 = UINT16_MAX;
uint16_t x46 = 54U;
int64_t t11 = 37312LL;
volatile uint64_t t12 = 7323147641686LLU;
volatile int32_t x53 = INT32_MAX;
static volatile uint64_t t14 = 420003LLU;
uint64_t x65 = 18731540882436667LLU;
uint64_t t17 = 435984059399LLU;
int64_t x75 = -1LL;
volatile int64_t t18 = -2125120340310LL;
uint8_t x77 = 3U;
static int64_t t19 = 1274LL;
static volatile uint32_t t21 = 70484U;
volatile uint64_t t22 = 1330087367131LLU;
static uint32_t x99 = 46801U;
int8_t x100 = INT8_MIN;
volatile int64_t x104 = INT64_MIN;
static uint32_t x109 = UINT32_MAX;
volatile int8_t x113 = INT8_MIN;
int16_t x122 = -1;
int64_t x123 = INT64_MIN;
int16_t x124 = 26;
volatile uint32_t x129 = 97U;
static uint16_t x133 = 478U;
volatile int16_t x138 = -2277;
volatile uint64_t t33 = 728043119680786LLU;
static int16_t x141 = -1;
int64_t t34 = -5483603LL;
static uint32_t x151 = UINT32_MAX;
volatile int32_t t38 = 1473;
static int64_t x165 = 144LL;
volatile uint64_t x167 = 564267289LLU;
volatile int32_t x169 = INT32_MIN;
uint8_t x172 = UINT8_MAX;
uint8_t x174 = 6U;
uint32_t x178 = UINT32_MAX;
int32_t x179 = -6;
static int16_t x197 = INT16_MAX;
uint8_t x198 = 3U;
static volatile int32_t x203 = 6956;
volatile uint16_t x204 = UINT16_MAX;
int16_t x213 = 317;
uint64_t x224 = 4369168569269LLU;
int16_t x225 = INT16_MIN;
volatile int32_t t54 = 13971254;
volatile int16_t x240 = INT16_MIN;
int32_t x241 = INT32_MIN;
volatile uint64_t x247 = 1LLU;
int64_t x248 = -1LL;
volatile int32_t x249 = -6607378;
static int16_t x271 = -1;
volatile int64_t t62 = -86488944003895LL;
int32_t x275 = -1;
volatile int64_t t63 = 2031386973881943600LL;
volatile int64_t t64 = 2886885471202240LL;
int64_t t65 = 8546LL;
uint16_t x291 = 84U;
int64_t x293 = INT64_MAX;
uint8_t x294 = 3U;
uint16_t x317 = 3419U;
uint8_t x325 = 1U;
volatile int16_t x331 = INT16_MIN;
volatile int64_t x332 = 0LL;
static uint8_t x334 = 7U;
volatile int64_t x336 = -3850900063477LL;
int64_t t75 = 16447LL;
int8_t x341 = INT8_MIN;
uint64_t t78 = 1853583325LLU;
int8_t x364 = INT8_MIN;
int64_t t81 = -9LL;
volatile int64_t t84 = 11761768127LL;
volatile int16_t x383 = INT16_MIN;
int64_t x385 = INT64_MIN;
uint16_t x395 = 1783U;
static volatile int8_t x412 = INT8_MIN;
uint8_t x415 = UINT8_MAX;
int16_t x416 = -1;
volatile uint64_t t92 = 80LLU;
uint16_t x417 = UINT16_MAX;
uint32_t x431 = 120U;
static volatile uint8_t x438 = UINT8_MAX;
volatile int32_t x439 = INT32_MAX;
int64_t x441 = -1LL;
int8_t x442 = INT8_MIN;
uint64_t x448 = UINT64_MAX;
int8_t x453 = 3;
int64_t x454 = INT64_MAX;
int8_t x457 = INT8_MIN;
static int32_t x461 = -283028;
volatile int32_t x466 = 930590;
int32_t x469 = -2858406;
static volatile int64_t t108 = 43685LL;
uint64_t x488 = UINT64_MAX;
volatile uint64_t t109 = 228379LLU;
volatile int8_t x512 = INT8_MAX;
int8_t x515 = INT8_MAX;
uint16_t x518 = 3U;
int8_t x526 = -1;
static int16_t x530 = 178;
int64_t x531 = -1LL;
int8_t x533 = -1;
static volatile int32_t t121 = -4;
static int16_t x537 = INT16_MAX;
uint32_t t124 = 6U;
int32_t t126 = -1827972;
int64_t x558 = INT64_MAX;
volatile uint16_t x559 = 1U;
static uint8_t x561 = UINT8_MAX;
uint8_t x564 = 37U;
static volatile int32_t x569 = -101572;
int64_t t130 = -1546957656488LL;
volatile uint16_t x575 = 5998U;
int64_t x581 = INT64_MAX;
volatile uint64_t x584 = UINT64_MAX;
uint8_t x589 = 5U;
int8_t x590 = 1;
volatile int64_t x592 = -4856LL;
volatile int8_t x600 = -3;
int16_t x601 = 13102;
int8_t x610 = INT8_MIN;
int32_t x615 = INT32_MIN;
static int32_t x620 = 2225;
uint16_t x621 = 1492U;
static volatile int64_t x630 = INT64_MIN;
int32_t x638 = -203550622;
static int8_t x642 = -3;
int16_t x645 = 33;
int32_t x647 = 9;
volatile uint32_t x648 = 28541697U;
uint64_t x651 = UINT64_MAX;
int16_t x652 = -3689;
int32_t x653 = -811;
static int32_t x654 = -46185;
int8_t x657 = INT8_MAX;
int8_t x662 = -7;
volatile uint32_t x664 = 1U;
volatile int64_t t152 = 3587362281111049LL;
uint64_t x665 = UINT64_MAX;
int8_t x666 = INT8_MIN;
int8_t x678 = INT8_MIN;
uint16_t x684 = 2U;
uint32_t x686 = UINT32_MAX;
int8_t x689 = INT8_MAX;
volatile uint32_t x692 = 2965U;
static uint64_t x695 = 14327258226730584LLU;
static uint32_t x703 = 296U;
int16_t x704 = INT16_MIN;
uint32_t t161 = 5996001U;
static volatile int32_t t162 = -84295850;
uint8_t x709 = 13U;
static int16_t x720 = INT16_MIN;
int32_t x724 = INT32_MAX;
uint16_t x725 = UINT16_MAX;
int16_t x728 = INT16_MIN;
volatile uint8_t x729 = UINT8_MAX;
volatile uint16_t x739 = 2763U;
static int8_t x740 = 29;
volatile uint64_t t170 = 5165302431431670LLU;
volatile int32_t t171 = -62868;
uint32_t x750 = 40784987U;
int16_t x752 = 0;
uint8_t x761 = UINT8_MAX;
uint16_t x764 = 480U;
uint64_t t174 = 3288107372724LLU;
static volatile int8_t x766 = -62;
int64_t x767 = INT64_MAX;
static int64_t t175 = 3556350LL;
uint8_t x769 = UINT8_MAX;
int8_t x774 = INT8_MAX;
volatile int64_t t177 = 31613834LL;
static int8_t x777 = 12;
uint16_t x784 = UINT16_MAX;
volatile int64_t t179 = -1603LL;
int16_t x789 = 3854;
uint16_t x795 = 5U;
uint32_t x798 = 33050719U;
uint64_t x800 = UINT64_MAX;
int16_t x808 = 12;
uint32_t x811 = 15U;
int32_t x815 = INT32_MIN;
int8_t x819 = -1;
volatile uint8_t x821 = 10U;
int16_t x826 = 1;
int64_t x842 = -15702770LL;
static uint64_t x846 = 2947237249587LLU;
static volatile uint8_t x853 = 15U;
int16_t x859 = INT16_MAX;
static volatile uint64_t x860 = 168419531036LLU;
static volatile uint64_t t196 = 14259485881363174LLU;
int32_t x862 = 1448;
volatile uint32_t x866 = 4748U;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	volatile int16_t x3 = 1680;
	int16_t x4 = INT16_MAX;
	int32_t t0 = -16453;

    t0 = (((x1^x2)%x3)-x4);

    if (t0 != -33488) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int32_t x5 = -1;
	uint64_t x6 = 43LLU;
	int16_t x8 = INT16_MIN;
	uint64_t t1 = 3694861081792331LLU;

    t1 = (((x5^x6)%x7)-x8);

    if (t1 != 65492LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint16_t x9 = 145U;
	int32_t t2 = -3792;

    t2 = (((x9^x10)%x11)-x12);

    if (t2 != 154) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = INT32_MAX;
	int8_t x16 = INT8_MIN;
	static volatile int64_t t3 = -16002606LL;

    t3 = (((x13^x14)%x15)-x16);

    if (t3 != 127LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 1;
	uint16_t x18 = 41U;
	static int16_t x19 = 12;
	uint8_t x20 = 32U;
	static int32_t t4 = 24664;

    t4 = (((x17^x18)%x19)-x20);

    if (t4 != -28) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x21 = 17101508200749LLU;
	volatile int64_t x22 = INT64_MIN;
	uint8_t x24 = 1U;
	static volatile uint64_t t5 = 57369LLU;

    t5 = (((x21^x22)%x23)-x24);

    if (t5 != 9223389138362976556LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -102;
	uint16_t x26 = UINT16_MAX;
	static int16_t x27 = -1;
	volatile uint16_t x28 = 14896U;

    t6 = (((x25^x26)%x27)-x28);

    if (t6 != -14896) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = 45944661LL;
	int64_t x31 = -1LL;
	volatile int64_t x32 = -194091969479655090LL;
	static int64_t t7 = -8LL;

    t7 = (((x29^x30)%x31)-x32);

    if (t7 != 194091969479655090LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = INT8_MIN;
	int64_t x35 = -390282748266785LL;
	volatile uint8_t x36 = UINT8_MAX;
	int64_t t8 = 34192125537LL;

    t8 = (((x33^x34)%x35)-x36);

    if (t8 != -355LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = -1;
	static volatile int8_t x38 = 0;
	int64_t x40 = INT64_MAX;

    t9 = (((x37^x38)%x39)-x40);

    if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x41 = INT64_MIN;
	static uint32_t x42 = 102U;
	uint64_t x43 = 673452889445772LLU;
	volatile uint64_t t10 = 5928600LLU;

    t10 = (((x41^x42)%x43)-x44);

    if (t10 != 434715894862835LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -1LL;
	int8_t x47 = 3;
	int8_t x48 = INT8_MAX;

    t11 = (((x45^x46)%x47)-x48);

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 118U;
	int16_t x50 = -1;
	int32_t x51 = -1;
	uint64_t x52 = UINT64_MAX;

    t12 = (((x49^x50)%x51)-x52);

    if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = INT64_MAX;
	int32_t x55 = INT32_MAX;
	int32_t x56 = INT32_MIN;
	volatile int64_t t13 = 0LL;

    t13 = (((x53^x54)%x55)-x56);

    if (t13 != 2147483649LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	volatile int8_t x58 = -1;
	uint64_t x59 = 33247369527374LLU;
	int64_t x60 = 37654574648540LL;

    t14 = (((x57^x58)%x59)-x60);

    if (t14 != 18446712715862956022LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x61 = 775U;
	static int32_t x62 = INT32_MIN;
	uint64_t x63 = 2827237035067LLU;
	volatile int32_t x64 = INT32_MIN;
	uint64_t t15 = 16536744LLU;

    t15 = (((x61^x62)%x63)-x64);

    if (t15 != 643911510573LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x66 = INT8_MIN;
	int8_t x67 = -1;
	int32_t x68 = INT32_MIN;
	static volatile uint64_t t16 = 7751215926852856719LLU;

    t16 = (((x65^x66)%x67)-x68);

    if (t16 != 18428012534974598587LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MAX;
	uint64_t x71 = UINT64_MAX;
	static int32_t x72 = -1;

    t17 = (((x69^x70)%x71)-x72);

    if (t17 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = -7497917023123LL;
	int32_t x74 = -1;
	static int32_t x76 = 1;

    t18 = (((x73^x74)%x75)-x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x78 = INT8_MIN;
	int8_t x79 = -13;
	static volatile int64_t x80 = -164LL;

    t19 = (((x77^x78)%x79)-x80);

    if (t19 != 156LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	uint32_t x82 = 4963636U;
	uint8_t x83 = 22U;
	uint64_t x84 = 31635LLU;
	volatile uint64_t t20 = 3397405060423711697LLU;

    t20 = (((x81^x82)%x83)-x84);

    if (t20 != 18446744073709519988LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 1U;
	int8_t x86 = -1;
	uint32_t x87 = 503U;
	uint16_t x88 = UINT16_MAX;

    t21 = (((x85^x86)%x87)-x88);

    if (t21 != 4294901949U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x89 = -1745;
	int32_t x90 = 63;
	volatile uint64_t x91 = UINT64_MAX;
	volatile uint32_t x92 = 89U;

    t22 = (((x89^x90)%x91)-x92);

    if (t22 != 18446744073709549751LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 851223647LLU;
	uint8_t x94 = 42U;
	int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	uint64_t t23 = 180175573LLU;

    t23 = (((x93^x94)%x95)-x96);

    if (t23 != 9223372036854778351LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = 45U;
	uint64_t x98 = UINT64_MAX;
	static volatile uint64_t t24 = 92LLU;

    t24 = (((x97^x98)%x99)-x100);

    if (t24 != 40577LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	int32_t x103 = -27097302;
	int64_t t25 = -62787844806941LL;

    t25 = (((x101^x102)%x103)-x104);

    if (t25 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x105 = INT16_MIN;
	uint8_t x106 = 0U;
	volatile int64_t x107 = -38126719923824009LL;
	uint16_t x108 = UINT16_MAX;
	int64_t t26 = 1LL;

    t26 = (((x105^x106)%x107)-x108);

    if (t26 != -98303LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x110 = INT16_MAX;
	uint64_t x111 = 2261054976LLU;
	int64_t x112 = INT64_MAX;
	volatile uint64_t t27 = 387699415420LLU;

    t27 = (((x109^x110)%x111)-x112);

    if (t27 != 9223372038888655361LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x114 = INT64_MIN;
	uint32_t x115 = 3U;
	int8_t x116 = INT8_MIN;
	int64_t t28 = 4096558217165042LL;

    t28 = (((x113^x114)%x115)-x116);

    if (t28 != 128LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x117 = INT8_MAX;
	volatile int16_t x118 = 4;
	static int64_t x119 = -1LL;
	uint32_t x120 = 704U;
	static int64_t t29 = -981005445623LL;

    t29 = (((x117^x118)%x119)-x120);

    if (t29 != -704LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x121 = 102316;
	volatile int64_t t30 = 46455580445LL;

    t30 = (((x121^x122)%x123)-x124);

    if (t30 != -102343LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x130 = 3807889LLU;
	volatile int64_t x131 = 275466809LL;
	int64_t x132 = INT64_MIN;
	volatile uint64_t t31 = 61LLU;

    t31 = (((x129^x130)%x131)-x132);

    if (t31 != 9223372036858583792LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x134 = 8U;
	uint16_t x135 = 10460U;
	static int64_t x136 = -34LL;
	volatile int64_t t32 = -627872LL;

    t32 = (((x133^x134)%x135)-x136);

    if (t32 != 504LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x137 = UINT64_MAX;
	volatile int16_t x139 = 7318;
	static int32_t x140 = INT32_MIN;

    t33 = (((x137^x138)%x139)-x140);

    if (t33 != 2147485924LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = INT8_MIN;
	int64_t x143 = -1LL;
	volatile uint32_t x144 = 1U;

    t34 = (((x141^x142)%x143)-x144);

    if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x145 = INT8_MIN;
	volatile uint16_t x146 = 458U;
	int16_t x147 = 1;
	uint8_t x148 = 14U;
	int32_t t35 = 643;

    t35 = (((x145^x146)%x147)-x148);

    if (t35 != -14) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = 226U;
	uint64_t x150 = 3523031615178167LLU;
	static int8_t x152 = 16;
	volatile uint64_t t36 = 4036236282970998LLU;

    t36 = (((x149^x150)%x151)-x152);

    if (t36 != 3087075698LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x153 = 5;
	static uint32_t x154 = 10U;
	int32_t x155 = INT32_MAX;
	int64_t x156 = -1LL;
	int64_t t37 = -1LL;

    t37 = (((x153^x154)%x155)-x156);

    if (t37 != 16LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x157 = 16;
	int8_t x158 = -1;
	volatile uint16_t x159 = 1604U;
	int8_t x160 = INT8_MIN;

    t38 = (((x157^x158)%x159)-x160);

    if (t38 != 111) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x161 = -67180;
	int64_t x162 = INT64_MIN;
	volatile int16_t x163 = -1;
	int8_t x164 = INT8_MIN;
	int64_t t39 = -1023874370629490847LL;

    t39 = (((x161^x162)%x163)-x164);

    if (t39 != 128LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x166 = INT32_MIN;
	int16_t x168 = 3049;
	volatile uint64_t t40 = 13754730344LLU;

    t40 = (((x165^x166)%x167)-x168);

    if (t40 != 554039820LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x170 = 4997U;
	uint32_t x171 = 180533654U;
	volatile uint32_t t41 = 1320U;

    t41 = (((x169^x170)%x171)-x172);

    if (t41 != 161618196U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x173 = 14;
	static int16_t x175 = -1;
	int32_t x176 = -577451007;
	volatile int32_t t42 = -5832194;

    t42 = (((x173^x174)%x175)-x176);

    if (t42 != 577451007) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x177 = 1159563LL;
	static uint64_t x180 = 40006999613665481LLU;
	volatile uint64_t t43 = 4031LLU;

    t43 = (((x177^x178)%x179)-x180);

    if (t43 != 18406737074095886135LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x181 = -47;
	int32_t x182 = -253;
	uint64_t x183 = 36LLU;
	uint64_t x184 = UINT64_MAX;
	uint64_t t44 = 16626678159LLU;

    t44 = (((x181^x182)%x183)-x184);

    if (t44 != 31LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x185 = 551U;
	int16_t x186 = -3058;
	volatile int64_t x187 = INT64_MAX;
	uint16_t x188 = UINT16_MAX;
	volatile int64_t t45 = 3712943LL;

    t45 = (((x185^x186)%x187)-x188);

    if (t45 != 4294899242LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint8_t x193 = UINT8_MAX;
	volatile int16_t x194 = INT16_MAX;
	static uint16_t x195 = UINT16_MAX;
	static int8_t x196 = INT8_MIN;
	volatile int32_t t46 = 2786436;

    t46 = (((x193^x194)%x195)-x196);

    if (t46 != 32640) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x199 = INT64_MAX;
	int32_t x200 = -4;
	volatile int64_t t47 = 123403336643496LL;

    t47 = (((x197^x198)%x199)-x200);

    if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	volatile int32_t t48 = 5;

    t48 = (((x201^x202)%x203)-x204);

    if (t48 != -65408) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x205 = -50;
	volatile int32_t x206 = 412;
	static int16_t x207 = INT16_MAX;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t49 = 16320;

    t49 = (((x205^x206)%x207)-x208);

    if (t49 != -65965) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x209 = INT16_MIN;
	int64_t x210 = -694LL;
	int16_t x211 = INT16_MIN;
	int8_t x212 = INT8_MIN;
	volatile int64_t t50 = 526073731LL;

    t50 = (((x209^x210)%x211)-x212);

    if (t50 != 32202LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x214 = 422391LLU;
	int64_t x215 = -1LL;
	static int64_t x216 = INT64_MIN;
	volatile uint64_t t51 = 202LLU;

    t51 = (((x213^x214)%x215)-x216);

    if (t51 != 9223372036855197898LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x217 = INT8_MAX;
	volatile int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	static int64_t x220 = INT64_MIN;
	int64_t t52 = INT64_MAX;

    t52 = (((x217^x218)%x219)-x220);

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x221 = 1191049819U;
	static int16_t x222 = -1;
	volatile int64_t x223 = -1LL;
	volatile uint64_t t53 = 29776LLU;

    t53 = (((x221^x222)%x223)-x224);

    if (t53 != 18446739704540982347LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x226 = 0U;
	uint8_t x227 = UINT8_MAX;
	int32_t x228 = INT32_MIN;

    t54 = (((x225^x226)%x227)-x228);

    if (t54 != 2147483520) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = INT32_MAX;
	int32_t x238 = -61;
	uint32_t x239 = 1U;
	static volatile uint32_t t55 = 6456744U;

    t55 = (((x237^x238)%x239)-x240);

    if (t55 != 32768U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x242 = UINT64_MAX;
	int64_t x243 = INT64_MIN;
	int8_t x244 = INT8_MIN;
	uint64_t t56 = 1LLU;

    t56 = (((x241^x242)%x243)-x244);

    if (t56 != 2147483775LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = INT16_MAX;
	uint64_t t57 = 83523LLU;

    t57 = (((x245^x246)%x247)-x248);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x250 = 11353658704853094LLU;
	volatile int8_t x251 = INT8_MAX;
	volatile int16_t x252 = 1746;
	volatile uint64_t t58 = 13804637612016LLU;

    t58 = (((x249^x250)%x251)-x252);

    if (t58 != 18446744073709549975LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x257 = 19311452428LL;
	volatile uint64_t x258 = 236823672214294102LLU;
	volatile int8_t x259 = 1;
	static int16_t x260 = INT16_MAX;
	static uint64_t t59 = 286333937680LLU;

    t59 = (((x257^x258)%x259)-x260);

    if (t59 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x261 = 3U;
	int16_t x262 = 54;
	static int16_t x263 = -1;
	volatile uint32_t x264 = UINT32_MAX;
	volatile uint32_t t60 = 26U;

    t60 = (((x261^x262)%x263)-x264);

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x265 = 84;
	static int32_t x266 = 3;
	int64_t x267 = INT64_MIN;
	volatile uint64_t x268 = 238LLU;
	static volatile uint64_t t61 = 2022107202970082LLU;

    t61 = (((x265^x266)%x267)-x268);

    if (t61 != 18446744073709551465LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x269 = 53U;
	int8_t x270 = -1;
	static int64_t x272 = 29459416LL;

    t62 = (((x269^x270)%x271)-x272);

    if (t62 != -29459416LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x273 = -3;
	static volatile int64_t x274 = -1LL;
	uint16_t x276 = UINT16_MAX;

    t63 = (((x273^x274)%x275)-x276);

    if (t63 != -65535LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MAX;
	static volatile int16_t x283 = INT16_MIN;
	int16_t x284 = -1;

    t64 = (((x281^x282)%x283)-x284);

    if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x285 = 43233U;
	int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	static volatile int64_t x288 = -1LL;

    t65 = (((x285^x286)%x287)-x288);

    if (t65 != 43167LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int64_t x290 = INT64_MAX;
	int32_t x292 = INT32_MIN;
	volatile int64_t t66 = -1921857LL;

    t66 = (((x289^x290)%x291)-x292);

    if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x295 = -1LL;
	uint8_t x296 = 127U;
	int64_t t67 = -771LL;

    t67 = (((x293^x294)%x295)-x296);

    if (t67 != -127LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x297 = INT32_MIN;
	int32_t x298 = -1303;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = -1;
	static volatile int32_t t68 = 13610942;

    t68 = (((x297^x298)%x299)-x300);

    if (t68 != 31466) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x301 = 9U;
	volatile int64_t x302 = -1LL;
	volatile uint16_t x303 = UINT16_MAX;
	int8_t x304 = INT8_MAX;
	static int64_t t69 = -3595039905715LL;

    t69 = (((x301^x302)%x303)-x304);

    if (t69 != -137LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x313 = -1417870;
	static volatile int8_t x314 = -1;
	int32_t x315 = -595436407;
	int32_t x316 = INT32_MAX;
	static int32_t t70 = -175;

    t70 = (((x313^x314)%x315)-x316);

    if (t70 != -2146065778) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x318 = INT32_MAX;
	int32_t x319 = -262601;
	volatile uint32_t x320 = 2925969U;
	volatile uint32_t t71 = 1898368U;

    t71 = (((x317^x318)%x319)-x320);

    if (t71 != 4292233178U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x321 = 4783U;
	static volatile int32_t x322 = -5710;
	int64_t x323 = INT64_MIN;
	int16_t x324 = -697;
	int64_t t72 = -889371849633293413LL;

    t72 = (((x321^x322)%x323)-x324);

    if (t72 != -554LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x326 = 3;
	volatile int16_t x327 = INT16_MIN;
	static int32_t x328 = -7073107;
	int32_t t73 = -3;

    t73 = (((x325^x326)%x327)-x328);

    if (t73 != 7073109) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x329 = INT16_MIN;
	volatile int8_t x330 = INT8_MIN;
	int64_t t74 = -2LL;

    t74 = (((x329^x330)%x331)-x332);

    if (t74 != 32640LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x333 = 2403;
	static int16_t x335 = INT16_MIN;

    t75 = (((x333^x334)%x335)-x336);

    if (t75 != 3850900065881LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x337 = INT16_MIN;
	int8_t x338 = -17;
	static uint16_t x339 = 26U;
	uint64_t x340 = 3819464LLU;
	volatile uint64_t t76 = 599893LLU;

    t76 = (((x337^x338)%x339)-x340);

    if (t76 != 18446744073705732169LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	int8_t x344 = -1;
	static volatile int64_t t77 = -11178306458108747LL;

    t77 = (((x341^x342)%x343)-x344);

    if (t77 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x345 = UINT32_MAX;
	uint64_t x346 = 47255602408LLU;
	uint16_t x347 = 15500U;
	volatile int8_t x348 = 3;

    t78 = (((x345^x346)%x347)-x348);

    if (t78 != 11396LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint16_t x349 = 51U;
	static uint64_t x350 = UINT64_MAX;
	int32_t x351 = INT32_MIN;
	uint8_t x352 = 0U;
	volatile uint64_t t79 = 78138353321421350LLU;

    t79 = (((x349^x350)%x351)-x352);

    if (t79 != 2147483596LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MAX;
	volatile int8_t x355 = -1;
	static int16_t x356 = INT16_MIN;
	volatile int64_t t80 = 1LL;

    t80 = (((x353^x354)%x355)-x356);

    if (t80 != 32768LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x361 = UINT8_MAX;
	static volatile int64_t x362 = INT64_MIN;
	int8_t x363 = 22;

    t81 = (((x361^x362)%x363)-x364);

    if (t81 != 111LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x365 = -46034;
	int32_t x366 = INT32_MIN;
	static uint64_t x367 = 401986LLU;
	uint32_t x368 = 508870U;
	uint64_t t82 = 25572805229726LLU;

    t82 = (((x365^x366)%x367)-x368);

    if (t82 != 18446744073709071148LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x369 = INT32_MIN;
	uint64_t x370 = 1LLU;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	static volatile uint64_t t83 = 200LLU;

    t83 = (((x369^x370)%x371)-x372);

    if (t83 != 18446744071562100737LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = INT16_MAX;
	int64_t x374 = -165650347784263LL;
	int32_t x375 = 57412;
	int64_t x376 = INT64_MIN;

    t84 = (((x373^x374)%x375)-x376);

    if (t84 != 9223372036854752914LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x381 = 827U;
	uint16_t x382 = 1U;
	int16_t x384 = INT16_MIN;
	volatile int32_t t85 = -1;

    t85 = (((x381^x382)%x383)-x384);

    if (t85 != 33594) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x386 = -1;
	uint8_t x387 = 58U;
	uint64_t x388 = 317874LLU;
	volatile uint64_t t86 = 68061739398863LLU;

    t86 = (((x385^x386)%x387)-x388);

    if (t86 != 18446744073709233753LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x389 = INT8_MAX;
	int64_t x390 = 14814LL;
	static int8_t x391 = 15;
	volatile uint64_t x392 = 923000210891LLU;
	static volatile uint64_t t87 = 5268254934602559621LLU;

    t87 = (((x389^x390)%x391)-x392);

    if (t87 != 18446743150709340733LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x393 = UINT64_MAX;
	int8_t x394 = INT8_MAX;
	uint8_t x396 = UINT8_MAX;
	uint64_t t88 = 14138384926258662LLU;

    t88 = (((x393^x394)%x395)-x396);

    if (t88 != 1222LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x401 = 15038U;
	int16_t x402 = INT16_MIN;
	volatile uint64_t x403 = 27790024LLU;
	volatile uint8_t x404 = UINT8_MAX;
	volatile uint64_t t89 = 129289LLU;

    t89 = (((x401^x402)%x403)-x404);

    if (t89 != 23582255LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint32_t x405 = 3710586U;
	static uint8_t x406 = UINT8_MAX;
	uint8_t x407 = 51U;
	static int8_t x408 = INT8_MAX;
	volatile uint32_t t90 = 12876U;

    t90 = (((x405^x406)%x407)-x408);

    if (t90 != 4294967210U) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x409 = UINT16_MAX;
	volatile int8_t x410 = INT8_MIN;
	static uint16_t x411 = 2U;
	int32_t t91 = 1101610;

    t91 = (((x409^x410)%x411)-x412);

    if (t91 != 127) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x413 = INT8_MIN;
	static uint64_t x414 = 180LLU;

    t92 = (((x413^x414)%x415)-x416);

    if (t92 != 53LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x418 = INT32_MIN;
	int16_t x419 = -2340;
	int8_t x420 = -1;
	volatile int32_t t93 = 2;

    t93 = (((x417^x418)%x419)-x420);

    if (t93 != -112) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x425 = 216264237396LLU;
	uint32_t x426 = 827598U;
	int8_t x427 = INT8_MIN;
	int8_t x428 = -2;
	static uint64_t t94 = 342LLU;

    t94 = (((x425^x426)%x427)-x428);

    if (t94 != 216263999900LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x429 = -1LL;
	static int16_t x430 = INT16_MIN;
	static uint8_t x432 = UINT8_MAX;
	static volatile int64_t t95 = 5680638294439LL;

    t95 = (((x429^x430)%x431)-x432);

    if (t95 != -248LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x433 = INT16_MAX;
	static uint32_t x434 = UINT32_MAX;
	int8_t x435 = -1;
	int8_t x436 = 6;
	uint32_t t96 = 914U;

    t96 = (((x433^x434)%x435)-x436);

    if (t96 != 4294934522U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x437 = 931465LLU;
	volatile int64_t x440 = INT64_MIN;
	volatile uint64_t t97 = 1809553935916030265LLU;

    t97 = (((x437^x438)%x439)-x440);

    if (t97 != 9223372036855707254LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x443 = -323100086488LL;
	volatile uint32_t x444 = 5862090U;
	int64_t t98 = -84307601916LL;

    t98 = (((x441^x442)%x443)-x444);

    if (t98 != -5861963LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x445 = INT32_MIN;
	uint16_t x446 = UINT16_MAX;
	int16_t x447 = INT16_MIN;
	volatile uint64_t t99 = 199LLU;

    t99 = (((x445^x446)%x447)-x448);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x449 = INT16_MIN;
	static volatile int8_t x450 = INT8_MAX;
	volatile uint8_t x451 = UINT8_MAX;
	static int64_t x452 = INT64_MAX;
	static volatile int64_t t100 = INT64_MIN;

    t100 = (((x449^x450)%x451)-x452);

    if (t100 != INT64_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x455 = -119571LL;
	int8_t x456 = -1;
	int64_t t101 = -28841354348460LL;

    t101 = (((x453^x454)%x455)-x456);

    if (t101 != 82949LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x458 = 0;
	int64_t x459 = 12416478444LL;
	int32_t x460 = -1;
	volatile int64_t t102 = 23886910LL;

    t102 = (((x457^x458)%x459)-x460);

    if (t102 != -127LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x462 = INT64_MIN;
	static uint32_t x463 = UINT32_MAX;
	static int32_t x464 = INT32_MAX;
	int64_t t103 = 50651438261808977LL;

    t103 = (((x461^x462)%x463)-x464);

    if (t103 != -283027LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x465 = -1;
	static int32_t x467 = INT32_MAX;
	volatile int32_t x468 = -54559548;
	int32_t t104 = -48986;

    t104 = (((x465^x466)%x467)-x468);

    if (t104 != 53628957) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x470 = 45;
	int8_t x471 = -1;
	int64_t x472 = -114LL;
	volatile int64_t t105 = -6882143944724LL;

    t105 = (((x469^x470)%x471)-x472);

    if (t105 != 114LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x473 = -1;
	int64_t x474 = 57873LL;
	int64_t x475 = -1LL;
	static int16_t x476 = 64;
	int64_t t106 = -15133196208813172LL;

    t106 = (((x473^x474)%x475)-x476);

    if (t106 != -64LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x477 = INT16_MIN;
	int16_t x478 = -1;
	int16_t x479 = -329;
	int16_t x480 = -1;
	int32_t t107 = 15432563;

    t107 = (((x477^x478)%x479)-x480);

    if (t107 != 197) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x481 = -1LL;
	uint16_t x482 = 12U;
	static volatile uint32_t x483 = 1112255656U;
	int16_t x484 = -1;

    t108 = (((x481^x482)%x483)-x484);

    if (t108 != -12LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x485 = 28U;
	int32_t x486 = INT32_MAX;
	uint8_t x487 = 8U;

    t109 = (((x485^x486)%x487)-x488);

    if (t109 != 4LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x489 = -13;
	uint16_t x490 = 15U;
	int32_t x491 = INT32_MIN;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t110 = 1799036LLU;

    t110 = (((x489^x490)%x491)-x492);

    if (t110 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x493 = 1176LLU;
	static volatile int8_t x494 = -2;
	volatile int16_t x495 = INT16_MIN;
	volatile int16_t x496 = INT16_MIN;
	volatile uint64_t t111 = 157LLU;

    t111 = (((x493^x494)%x495)-x496);

    if (t111 != 64358LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x497 = 10;
	int64_t x498 = INT64_MIN;
	volatile int16_t x499 = INT16_MIN;
	int16_t x500 = INT16_MIN;
	int64_t t112 = -3828492LL;

    t112 = (((x497^x498)%x499)-x500);

    if (t112 != 10LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x501 = 0;
	volatile int64_t x502 = INT64_MAX;
	static volatile uint64_t x503 = UINT64_MAX;
	uint16_t x504 = UINT16_MAX;
	static uint64_t t113 = 59LLU;

    t113 = (((x501^x502)%x503)-x504);

    if (t113 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x505 = 0U;
	volatile uint32_t x506 = 10931U;
	static int64_t x507 = 19208754388494753LL;
	static uint8_t x508 = 0U;
	int64_t t114 = -126875593234360LL;

    t114 = (((x505^x506)%x507)-x508);

    if (t114 != 10931LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x509 = -16023464011LL;
	int64_t x510 = -1LL;
	volatile int64_t x511 = INT64_MIN;
	volatile int64_t t115 = 53LL;

    t115 = (((x509^x510)%x511)-x512);

    if (t115 != 16023463883LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint8_t x514 = 26U;
	uint8_t x516 = UINT8_MAX;
	volatile int64_t t116 = -518135828672817031LL;

    t116 = (((x513^x514)%x515)-x516);

    if (t116 != -357LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x517 = -1;
	static uint8_t x519 = UINT8_MAX;
	int16_t x520 = 105;
	int32_t t117 = 70025;

    t117 = (((x517^x518)%x519)-x520);

    if (t117 != -109) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x521 = 3165465957363LLU;
	int64_t x522 = -4110LL;
	int8_t x523 = 5;
	static int16_t x524 = INT16_MIN;
	volatile uint64_t t118 = 6323736673230220909LLU;

    t118 = (((x521^x522)%x523)-x524);

    if (t118 != 32770LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x525 = -1LL;
	int32_t x527 = -1;
	int64_t x528 = INT64_MAX;
	int64_t t119 = 8436406142404LL;

    t119 = (((x525^x526)%x527)-x528);

    if (t119 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x529 = 2149545762155LLU;
	int64_t x532 = -1LL;
	volatile uint64_t t120 = 4452781835075125904LLU;

    t120 = (((x529^x530)%x531)-x532);

    if (t120 != 2149545762266LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x534 = 72571699;
	int16_t x535 = -52;
	int32_t x536 = 242;

    t121 = (((x533^x534)%x535)-x536);

    if (t121 != -274) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x538 = INT16_MIN;
	uint64_t x539 = 1430729250865746LLU;
	int32_t x540 = -7;
	static uint64_t t122 = 266765LLU;

    t122 = (((x537^x538)%x539)-x540);

    if (t122 != 351842297488444LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x541 = 1555LLU;
	int32_t x542 = -1;
	int64_t x543 = INT64_MIN;
	int64_t x544 = INT64_MIN;
	uint64_t t123 = 1792846675473726851LLU;

    t123 = (((x541^x542)%x543)-x544);

    if (t123 != 18446744073709550060LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x545 = 103U;
	uint16_t x546 = UINT16_MAX;
	uint32_t x547 = 7U;
	int32_t x548 = INT32_MIN;

    t124 = (((x545^x546)%x547)-x548);

    if (t124 != 2147483651U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x549 = -6085500489966LL;
	int8_t x550 = 9;
	static int16_t x551 = -9;
	static volatile uint8_t x552 = UINT8_MAX;
	volatile int64_t t125 = -2060388367499322LL;

    t125 = (((x549^x550)%x551)-x552);

    if (t125 != -258LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x553 = -1;
	int16_t x554 = INT16_MAX;
	int32_t x555 = INT32_MAX;
	volatile int32_t x556 = -144252059;

    t126 = (((x553^x554)%x555)-x556);

    if (t126 != 144219291) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x557 = INT8_MIN;
	int32_t x560 = 3375615;
	int64_t t127 = 27263379669201774LL;

    t127 = (((x557^x558)%x559)-x560);

    if (t127 != -3375615LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x562 = INT32_MAX;
	int8_t x563 = INT8_MIN;
	volatile int32_t t128 = 960;

    t128 = (((x561^x562)%x563)-x564);

    if (t128 != -37) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x565 = -1;
	static uint64_t x566 = 37158598513LLU;
	int32_t x567 = 12046508;
	static int8_t x568 = -1;
	uint64_t t129 = 35307818731LLU;

    t129 = (((x565^x566)%x567)-x568);

    if (t129 != 5280243LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x570 = INT16_MAX;
	static int64_t x571 = -26LL;
	int32_t x572 = -1;

    t130 = (((x569^x570)%x571)-x572);

    if (t130 != -14LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x573 = 328259LL;
	volatile uint32_t x574 = UINT32_MAX;
	volatile int8_t x576 = INT8_MIN;
	volatile int64_t t131 = -1LL;

    t131 = (((x573^x574)%x575)-x576);

    if (t131 != 5186LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x577 = 12U;
	int8_t x578 = -1;
	int16_t x579 = -1;
	static uint32_t x580 = UINT32_MAX;
	uint32_t t132 = 2077349362U;

    t132 = (((x577^x578)%x579)-x580);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x582 = INT8_MAX;
	volatile uint64_t x583 = 194448623559LLU;
	uint64_t t133 = 13LLU;

    t133 = (((x581^x582)%x583)-x584);

    if (t133 != 56970773746LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x585 = -6282059290742LL;
	int64_t x586 = -1LL;
	uint32_t x587 = UINT32_MAX;
	volatile uint16_t x588 = 2U;
	volatile int64_t t134 = 7292745363LL;

    t134 = (((x585^x586)%x587)-x588);

    if (t134 != 2817105449LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x591 = -1;
	volatile int64_t t135 = -1LL;

    t135 = (((x589^x590)%x591)-x592);

    if (t135 != 4856LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x593 = 3838U;
	volatile int32_t x594 = 1035;
	static int16_t x595 = -1981;
	uint32_t x596 = UINT32_MAX;
	volatile uint32_t t136 = 1760U;

    t136 = (((x593^x594)%x595)-x596);

    if (t136 != 825U) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x597 = 4;
	uint8_t x598 = 1U;
	int16_t x599 = INT16_MIN;
	int32_t t137 = -37;

    t137 = (((x597^x598)%x599)-x600);

    if (t137 != 8) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x602 = UINT32_MAX;
	int64_t x603 = INT64_MAX;
	int32_t x604 = 2;
	int64_t t138 = -2LL;

    t138 = (((x601^x602)%x603)-x604);

    if (t138 != 4294954191LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x605 = INT16_MAX;
	static int32_t x606 = INT32_MIN;
	static volatile int32_t x607 = INT32_MIN;
	static int16_t x608 = -3;
	volatile int32_t t139 = 144005;

    t139 = (((x605^x606)%x607)-x608);

    if (t139 != -2147450878) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x609 = INT32_MAX;
	volatile uint32_t x611 = UINT32_MAX;
	static int8_t x612 = -1;
	static uint32_t t140 = 6U;

    t140 = (((x609^x610)%x611)-x612);

    if (t140 != 2147483776U) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x613 = 521129LL;
	uint16_t x614 = 296U;
	int16_t x616 = INT16_MIN;
	volatile int64_t t141 = 300610091887086LL;

    t141 = (((x613^x614)%x615)-x616);

    if (t141 != 553601LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x617 = INT32_MIN;
	uint16_t x618 = 6001U;
	int64_t x619 = INT64_MAX;
	int64_t t142 = -816700095320004LL;

    t142 = (((x617^x618)%x619)-x620);

    if (t142 != -2147479872LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x622 = 69504918722172LL;
	uint16_t x623 = UINT16_MAX;
	static int64_t x624 = INT64_MAX;
	volatile int64_t t143 = 70201374204302LL;

    t143 = (((x621^x622)%x623)-x624);

    if (t143 != -9223372036854730019LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x625 = 80218942U;
	volatile int16_t x626 = INT16_MIN;
	int32_t x627 = 25;
	volatile uint8_t x628 = 10U;
	static uint32_t t144 = 814684U;

    t144 = (((x625^x626)%x627)-x628);

    if (t144 != 7U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x629 = INT16_MAX;
	volatile int16_t x631 = -5;
	volatile uint32_t x632 = 448U;
	int64_t t145 = 790273124683LL;

    t145 = (((x629^x630)%x631)-x632);

    if (t145 != -449LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x637 = 29LL;
	int32_t x639 = -159;
	static volatile int8_t x640 = INT8_MAX;
	int64_t t146 = 12955788657595328LL;

    t146 = (((x637^x638)%x639)-x640);

    if (t146 != -192LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x641 = 1939;
	int16_t x643 = -497;
	uint8_t x644 = 6U;
	static volatile int32_t t147 = -90;

    t147 = (((x641^x642)%x643)-x644);

    if (t147 != -453) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x646 = -1;
	volatile uint32_t t148 = 386U;

    t148 = (((x645^x646)%x647)-x648);

    if (t148 != 4266425592U) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int64_t x649 = INT64_MIN;
	int64_t x650 = INT64_MIN;
	volatile uint64_t t149 = 5008506713LLU;

    t149 = (((x649^x650)%x651)-x652);

    if (t149 != 3689LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x655 = 1417925054325LL;
	uint32_t x656 = 318667346U;
	static int64_t t150 = -282LL;

    t150 = (((x653^x654)%x655)-x656);

    if (t150 != -318620432LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x658 = INT16_MIN;
	uint64_t x659 = 71799LLU;
	static uint32_t x660 = UINT32_MAX;
	volatile uint64_t t151 = 2831163804974891947LLU;

    t151 = (((x657^x658)%x659)-x660);

    if (t151 != 18446744069414654617LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x661 = 85LL;
	static int8_t x663 = -52;

    t152 = (((x661^x662)%x663)-x664);

    if (t152 != -33LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x667 = 45;
	int64_t x668 = INT64_MAX;
	static uint64_t t153 = 648322305LLU;

    t153 = (((x665^x666)%x667)-x668);

    if (t153 != 9223372036854775846LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x669 = 317950002004241LLU;
	int16_t x670 = INT16_MIN;
	volatile uint64_t x671 = 467359264226848LLU;
	uint16_t x672 = 23U;
	static volatile uint64_t t154 = 432835104990LLU;

    t154 = (((x669^x670)%x671)-x672);

    if (t154 != 223323938051418LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x677 = INT32_MIN;
	static int8_t x679 = INT8_MIN;
	int64_t x680 = 3682LL;
	int64_t t155 = 19LL;

    t155 = (((x677^x678)%x679)-x680);

    if (t155 != -3682LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	int16_t x682 = INT16_MIN;
	int8_t x683 = INT8_MIN;
	uint32_t t156 = 603550415U;

    t156 = (((x681^x682)%x683)-x684);

    if (t156 != 32765U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x685 = UINT64_MAX;
	uint64_t x687 = UINT64_MAX;
	int32_t x688 = -1;
	volatile uint64_t t157 = 427LLU;

    t157 = (((x685^x686)%x687)-x688);

    if (t157 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x690 = 1;
	static int8_t x691 = -11;
	uint32_t t158 = 98580799U;

    t158 = (((x689^x690)%x691)-x692);

    if (t158 != 4294964336U) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x693 = UINT64_MAX;
	uint64_t x694 = 42015879339850168LLU;
	volatile int32_t x696 = INT32_MAX;
	static uint64_t t159 = 87919217LLU;

    t159 = (((x693^x694)%x695)-x696);

    if (t159 != 8528629100147944LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x697 = INT16_MIN;
	volatile int64_t x698 = -1LL;
	static uint32_t x699 = UINT32_MAX;
	uint8_t x700 = 25U;
	int64_t t160 = -14LL;

    t160 = (((x697^x698)%x699)-x700);

    if (t160 != 32742LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x701 = -1;
	int32_t x702 = -278344;

    t161 = (((x701^x702)%x703)-x704);

    if (t161 != 32871U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x705 = 0;
	volatile int8_t x706 = 11;
	int8_t x707 = INT8_MIN;
	volatile uint8_t x708 = 2U;

    t162 = (((x705^x706)%x707)-x708);

    if (t162 != 9) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int16_t x710 = INT16_MAX;
	volatile int8_t x711 = -1;
	volatile int64_t x712 = -58570LL;
	volatile int64_t t163 = 23889450LL;

    t163 = (((x709^x710)%x711)-x712);

    if (t163 != 58570LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x713 = UINT64_MAX;
	int8_t x714 = -1;
	int32_t x715 = -220042;
	volatile int32_t x716 = INT32_MIN;
	uint64_t t164 = 15LLU;

    t164 = (((x713^x714)%x715)-x716);

    if (t164 != 2147483648LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x717 = INT8_MIN;
	volatile uint8_t x718 = 49U;
	int16_t x719 = INT16_MAX;
	volatile int32_t t165 = -2;

    t165 = (((x717^x718)%x719)-x720);

    if (t165 != 32689) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x721 = INT16_MIN;
	static int8_t x722 = -1;
	uint64_t x723 = UINT64_MAX;
	volatile uint64_t t166 = 2058831255LLU;

    t166 = (((x721^x722)%x723)-x724);

    if (t166 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x726 = INT32_MIN;
	int64_t x727 = -340457180142786071LL;
	int64_t t167 = -1765096006958270885LL;

    t167 = (((x725^x726)%x727)-x728);

    if (t167 != -2147385345LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x730 = INT64_MAX;
	uint8_t x731 = 81U;
	int32_t x732 = 0;
	static volatile int64_t t168 = 250817248249LL;

    t168 = (((x729^x730)%x731)-x732);

    if (t168 != 13LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x737 = UINT8_MAX;
	static uint8_t x738 = 3U;
	static volatile int32_t t169 = 21907;

    t169 = (((x737^x738)%x739)-x740);

    if (t169 != 223) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x741 = 179;
	int16_t x742 = INT16_MIN;
	uint64_t x743 = UINT64_MAX;
	volatile int8_t x744 = INT8_MIN;

    t170 = (((x741^x742)%x743)-x744);

    if (t170 != 18446744073709519155LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x745 = 0;
	int32_t x746 = INT32_MIN;
	int16_t x747 = 1;
	int8_t x748 = 6;

    t171 = (((x745^x746)%x747)-x748);

    if (t171 != -6) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x749 = 34;
	int32_t x751 = -6;
	uint32_t t172 = 1159113U;

    t172 = (((x749^x750)%x751)-x752);

    if (t172 != 40785017U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x753 = 4U;
	volatile int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MAX;
	uint32_t x756 = UINT32_MAX;
	static volatile uint32_t t173 = 58755246U;

    t173 = (((x753^x754)%x755)-x756);

    if (t173 != 2147483653U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x762 = 1;
	uint64_t x763 = UINT64_MAX;

    t174 = (((x761^x762)%x763)-x764);

    if (t174 != 18446744073709551390LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x765 = -70813413LL;
	int32_t x768 = INT32_MIN;

    t175 = (((x765^x766)%x767)-x768);

    if (t175 != 2218297049LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x770 = 1U;
	int64_t x771 = -60LL;
	volatile uint16_t x772 = UINT16_MAX;
	volatile int64_t t176 = 533368495973125LL;

    t176 = (((x769^x770)%x771)-x772);

    if (t176 != -65521LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x773 = INT64_MAX;
	int64_t x775 = INT64_MIN;
	uint8_t x776 = 6U;

    t177 = (((x773^x774)%x775)-x776);

    if (t177 != 9223372036854775674LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint64_t x778 = UINT64_MAX;
	uint16_t x779 = UINT16_MAX;
	uint64_t x780 = 13570561LLU;
	volatile uint64_t t178 = 1564841164LLU;

    t178 = (((x777^x778)%x779)-x780);

    if (t178 != 18446744073696046578LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x781 = -1LL;
	int16_t x782 = 1046;
	uint32_t x783 = 24U;

    t179 = (((x781^x782)%x783)-x784);

    if (t179 != -65550LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x785 = INT8_MAX;
	volatile int16_t x786 = INT16_MIN;
	int64_t x787 = INT64_MIN;
	uint32_t x788 = 72785U;
	volatile int64_t t180 = 46513511454488LL;

    t180 = (((x785^x786)%x787)-x788);

    if (t180 != -105426LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x790 = INT8_MIN;
	volatile int16_t x791 = INT16_MIN;
	volatile uint64_t x792 = 437082976666LLU;
	static volatile uint64_t t181 = 19LLU;

    t181 = (((x789^x790)%x791)-x792);

    if (t181 != 18446743636626570996LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x793 = UINT64_MAX;
	volatile int16_t x794 = 265;
	int8_t x796 = INT8_MAX;
	volatile uint64_t t182 = 27713125198LLU;

    t182 = (((x793^x794)%x795)-x796);

    if (t182 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int32_t x797 = -1;
	uint16_t x799 = 1309U;
	uint64_t t183 = 21807LLU;

    t183 = (((x797^x798)%x799)-x800);

    if (t183 != 1073LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x801 = 4U;
	static int64_t x802 = INT64_MIN;
	static int8_t x803 = INT8_MIN;
	uint32_t x804 = UINT32_MAX;
	volatile int64_t t184 = 4011421838364LL;

    t184 = (((x801^x802)%x803)-x804);

    if (t184 != -4294967419LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x805 = INT16_MAX;
	uint32_t x806 = UINT32_MAX;
	volatile uint32_t x807 = 118U;
	volatile uint32_t t185 = 8704621U;

    t185 = (((x805^x806)%x807)-x808);

    if (t185 != 16U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x809 = -184;
	int64_t x810 = INT64_MIN;
	int32_t x812 = INT32_MAX;
	int64_t t186 = 138795728LL;

    t186 = (((x809^x810)%x811)-x812);

    if (t186 != -2147483643LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x813 = -264136;
	int8_t x814 = INT8_MIN;
	uint64_t x816 = UINT64_MAX;
	uint64_t t187 = 7872472LLU;

    t187 = (((x813^x814)%x815)-x816);

    if (t187 != 264121LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x817 = INT32_MIN;
	uint64_t x818 = 833769892479097297LLU;
	volatile int32_t x820 = -1;
	volatile uint64_t t188 = 31910LLU;

    t188 = (((x817^x818)%x819)-x820);

    if (t188 != 17612974181016787410LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x822 = INT64_MAX;
	uint64_t x823 = UINT64_MAX;
	int8_t x824 = INT8_MAX;
	static volatile uint64_t t189 = 33870LLU;

    t189 = (((x821^x822)%x823)-x824);

    if (t189 != 9223372036854775670LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x825 = -165614798975829LL;
	volatile uint64_t x827 = 37312264954LLU;
	uint16_t x828 = 752U;
	uint64_t t190 = 11684LLU;

    t190 = (((x825^x826)%x827)-x828);

    if (t190 != 19839588730LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x829 = 2860U;
	int32_t x830 = INT32_MAX;
	volatile int64_t x831 = -1LL;
	static int64_t x832 = -1LL;
	volatile int64_t t191 = 2897149615867933LL;

    t191 = (((x829^x830)%x831)-x832);

    if (t191 != 1LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x841 = INT32_MIN;
	int32_t x843 = 1706072;
	int16_t x844 = -1;
	volatile int64_t t192 = 8LL;

    t192 = (((x841^x842)%x843)-x844);

    if (t192 != 896951LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x845 = INT16_MAX;
	int16_t x847 = 325;
	uint8_t x848 = 49U;
	static volatile uint64_t t193 = 20928323923051LLU;

    t193 = (((x845^x846)%x847)-x848);

    if (t193 != 204LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x849 = -1;
	volatile int16_t x850 = 254;
	int64_t x851 = INT64_MIN;
	int64_t x852 = INT64_MIN;
	volatile int64_t t194 = -11689709319946LL;

    t194 = (((x849^x850)%x851)-x852);

    if (t194 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x854 = INT8_MAX;
	int16_t x855 = INT16_MAX;
	static int8_t x856 = -29;
	int32_t t195 = 30422222;

    t195 = (((x853^x854)%x855)-x856);

    if (t195 != 141) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x857 = UINT16_MAX;
	uint32_t x858 = UINT32_MAX;

    t196 = (((x857^x858)%x859)-x860);

    if (t196 != 18446743905290020582LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static int64_t x861 = INT64_MIN;
	static int16_t x863 = INT16_MIN;
	uint8_t x864 = UINT8_MAX;
	volatile int64_t t197 = 195830021LL;

    t197 = (((x861^x862)%x863)-x864);

    if (t197 != -31575LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x865 = 923186LL;
	int32_t x867 = INT32_MAX;
	int16_t x868 = -1;
	int64_t t198 = 53040279LL;

    t198 = (((x865^x866)%x867)-x868);

    if (t198 != 918719LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x869 = 1;
	int32_t x870 = -1;
	uint32_t x871 = 234873415U;
	int32_t x872 = -180178;
	static uint32_t t199 = 8U;

    t199 = (((x869^x870)%x871)-x872);

    if (t199 != 67426002U) { NG(); } else { ; }
	
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

