
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

static int32_t t1 = 18;
int16_t x10 = 3378;
int64_t x22 = -7963188LL;
volatile int64_t t5 = -10LL;
uint8_t x27 = 26U;
static int32_t x41 = 0;
int8_t x43 = INT8_MIN;
int16_t x57 = INT16_MIN;
int32_t x58 = INT32_MIN;
int32_t x59 = 1095744;
static volatile int32_t x81 = 1165099;
static volatile uint64_t x90 = 4663479997442LLU;
volatile uint8_t x92 = 3U;
int8_t x94 = -1;
int32_t x96 = -8024;
int8_t x97 = -1;
uint32_t t20 = 3U;
uint8_t x102 = UINT8_MAX;
volatile int8_t x105 = -1;
static int32_t t22 = -29;
int16_t x110 = 1295;
int64_t x114 = INT64_MIN;
int16_t x116 = INT16_MAX;
static volatile int32_t t26 = -13441769;
uint8_t x138 = UINT8_MAX;
uint16_t x140 = 3U;
int8_t x148 = INT8_MIN;
volatile uint64_t x150 = UINT64_MAX;
int64_t x151 = INT64_MAX;
static int16_t x161 = -41;
int64_t x163 = -64654646200LL;
int32_t x169 = 3222;
static int8_t x180 = INT8_MAX;
static int16_t x192 = INT16_MAX;
int32_t x198 = INT32_MIN;
int32_t x199 = INT32_MIN;
uint8_t x202 = UINT8_MAX;
int16_t x203 = 11358;
int32_t x211 = -1;
volatile uint32_t t45 = 114U;
uint16_t x220 = 15820U;
uint32_t x224 = UINT32_MAX;
int32_t x226 = -103345;
static int64_t x227 = INT64_MAX;
int32_t x234 = INT32_MIN;
uint32_t t52 = 13594897U;
int32_t x243 = INT32_MAX;
int8_t x245 = INT8_MAX;
uint32_t x260 = 122973928U;
volatile uint8_t x267 = UINT8_MAX;
int32_t x271 = -1;
int16_t x272 = INT16_MAX;
uint32_t x275 = 230467830U;
int32_t x279 = -1;
int32_t t60 = -1016495;
int8_t x288 = -1;
int8_t x290 = 0;
static volatile int64_t x300 = 1028083829893LL;
int8_t x301 = -1;
static volatile uint64_t t66 = 3950541050694LLU;
static uint8_t x316 = 57U;
int8_t x324 = 1;
int64_t x336 = INT64_MIN;
static uint64_t t73 = 569574289893LLU;
static int16_t x340 = -730;
uint64_t x347 = UINT64_MAX;
uint16_t x351 = UINT16_MAX;
uint32_t x352 = UINT32_MAX;
int8_t x354 = INT8_MIN;
int32_t t80 = -12;
int16_t x365 = INT16_MAX;
static int64_t x366 = INT64_MIN;
volatile uint16_t x370 = UINT16_MAX;
volatile int16_t x372 = INT16_MIN;
static int32_t t82 = -12328407;
int16_t x374 = -98;
static int16_t x380 = -673;
int8_t x381 = 7;
int64_t x385 = INT64_MIN;
int64_t x397 = INT64_MIN;
volatile int32_t t89 = -39;
static int32_t t93 = 110;
int32_t x418 = -1;
volatile uint32_t x420 = 115U;
int64_t t94 = -554LL;
static uint64_t x439 = UINT64_MAX;
volatile int8_t x440 = INT8_MIN;
int8_t x450 = -2;
int64_t x457 = INT64_MIN;
int16_t x471 = -1;
int8_t x484 = -1;
uint16_t x486 = 118U;
volatile int64_t t108 = -415321LL;
int64_t x500 = -1LL;
static int16_t x505 = INT16_MAX;
static volatile uint32_t x506 = 5U;
uint8_t x511 = 56U;
volatile int32_t t112 = -8;
volatile int32_t t113 = 132763432;
uint16_t x522 = 9082U;
volatile int32_t x531 = -1;
int16_t x534 = INT16_MIN;
static int32_t x538 = 2060;
volatile int64_t x543 = -1LL;
volatile int64_t t120 = -268460460247LL;
uint8_t x556 = 120U;
volatile uint8_t x566 = 1U;
uint32_t x568 = 3905362U;
static int64_t x570 = INT64_MAX;
int64_t t127 = -342593780383LL;
static int64_t t128 = 1LL;
int16_t x579 = 7;
static int32_t x581 = -37326;
int16_t x582 = INT16_MIN;
volatile uint8_t x584 = 6U;
uint32_t x587 = UINT32_MAX;
int16_t x589 = INT16_MIN;
volatile uint64_t t132 = 1577LLU;
int16_t x601 = -1;
static uint64_t t135 = 194903456367372LLU;
int8_t x606 = INT8_MIN;
int8_t x608 = -1;
int64_t x614 = -175198894109553LL;
static uint32_t x615 = 95417061U;
volatile int8_t x616 = 2;
volatile uint8_t x619 = UINT8_MAX;
uint8_t x620 = 1U;
int16_t x625 = INT16_MIN;
static uint16_t x629 = 6627U;
uint32_t x638 = 117971558U;
int16_t x643 = -342;
uint32_t t147 = 2462053U;
volatile uint32_t x653 = 0U;
volatile int64_t t149 = -5109347812486LL;
uint16_t x679 = 29133U;
volatile int64_t x692 = INT64_MAX;
uint64_t x693 = 8715LLU;
int32_t t154 = 0;
uint64_t x698 = 29747914408050490LLU;
static int8_t x699 = -17;
volatile int32_t t155 = 22269;
int64_t t157 = 361637LL;
int16_t x713 = -1;
int16_t x717 = INT16_MAX;
volatile uint8_t x718 = 1U;
volatile int16_t x721 = INT16_MIN;
int64_t t161 = 1698195728LL;
uint8_t x727 = UINT8_MAX;
static uint32_t x730 = UINT32_MAX;
int8_t x735 = 1;
uint32_t t164 = 2522U;
uint32_t x737 = UINT32_MAX;
uint16_t x738 = 20987U;
static int16_t x746 = 1;
int8_t x749 = -12;
int32_t x750 = INT32_MAX;
uint8_t x752 = 8U;
int32_t t173 = -4590171;
volatile int8_t x780 = 14;
volatile int32_t x785 = INT32_MIN;
int32_t x792 = -25006958;
int16_t x794 = INT16_MAX;
uint16_t x800 = 635U;
int8_t x816 = INT8_MIN;
uint32_t x821 = UINT32_MAX;
static uint64_t x823 = 137619972724351LLU;
int16_t x824 = INT16_MAX;
int64_t x828 = 890447069385566621LL;
uint8_t x830 = 28U;
volatile uint32_t t185 = 2735U;
volatile int32_t x833 = INT32_MIN;
static int16_t x835 = 1;
volatile int16_t x841 = INT16_MIN;
static uint16_t x842 = UINT16_MAX;
static uint64_t x843 = 954LLU;
uint64_t t188 = 1147186963LLU;
volatile uint16_t x851 = 12U;
int32_t x852 = INT32_MAX;
static int32_t t190 = 904186993;
uint64_t x854 = UINT64_MAX;
volatile int16_t x855 = -1;
int8_t x861 = INT8_MAX;
volatile int16_t x862 = INT16_MIN;
int64_t x868 = 6787498LL;
uint64_t x871 = UINT64_MAX;
int8_t x874 = INT8_MAX;
static uint32_t x875 = 824U;
int16_t x876 = 89;
int8_t x884 = 26;


void f0(void) {
    	static int8_t x1 = 0;
	int64_t x2 = 1LL;
	uint32_t x3 = 8U;
	int16_t x4 = INT16_MIN;
	volatile uint32_t t0 = 149U;

    t0 = (((x1==x2)/x3)-x4);

    if (t0 != 32768U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	static int8_t x6 = -9;
	int16_t x7 = -13;
	int8_t x8 = 1;

    t1 = (((x5==x6)/x7)-x8);

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 6;
	int16_t x11 = -11;
	int64_t x12 = INT64_MAX;
	int64_t t2 = 1066338776LL;

    t2 = (((x9==x10)/x11)-x12);

    if (t2 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 1246U;
	uint64_t x14 = 11LLU;
	static int8_t x15 = INT8_MAX;
	int8_t x16 = -1;
	volatile int32_t t3 = 14720;

    t3 = (((x13==x14)/x15)-x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = 1;
	uint8_t x18 = 25U;
	static volatile int16_t x19 = INT16_MIN;
	volatile uint64_t x20 = 54628755430LLU;
	volatile uint64_t t4 = 1LLU;

    t4 = (((x17==x18)/x19)-x20);

    if (t4 != 18446744019080796186LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int16_t x23 = INT16_MIN;
	int64_t x24 = -1LL;

    t5 = (((x21==x22)/x23)-x24);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	int8_t x26 = 0;
	int8_t x28 = INT8_MAX;
	int32_t t6 = -695;

    t6 = (((x25==x26)/x27)-x28);

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = -1;
	uint8_t x34 = 110U;
	int64_t x35 = 852764531367LL;
	uint16_t x36 = 1U;
	volatile int64_t t7 = -4462343350653686LL;

    t7 = (((x33==x34)/x35)-x36);

    if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = -1;
	int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	static volatile int64_t t8 = -741007LL;

    t8 = (((x37==x38)/x39)-x40);

    if (t8 != 2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x42 = -1;
	int8_t x44 = -1;
	volatile int32_t t9 = 246056;

    t9 = (((x41==x42)/x43)-x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint16_t x45 = 1819U;
	static int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -1;
	volatile int32_t t10 = -4440;

    t10 = (((x45==x46)/x47)-x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x53 = INT8_MAX;
	int32_t x54 = -1;
	static int16_t x55 = INT16_MIN;
	int64_t x56 = 652868501151LL;
	volatile int64_t t11 = -1119207LL;

    t11 = (((x53==x54)/x55)-x56);

    if (t11 != -652868501151LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int16_t x60 = -1;
	int32_t t12 = 35094;

    t12 = (((x57==x58)/x59)-x60);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MAX;
	static uint32_t x66 = 0U;
	int16_t x67 = -1;
	uint8_t x68 = 2U;
	int32_t t13 = -4938254;

    t13 = (((x65==x66)/x67)-x68);

    if (t13 != -2) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = 7;
	int64_t x70 = -805LL;
	static int16_t x71 = -1;
	volatile int32_t x72 = -1;
	static volatile int32_t t14 = -168545;

    t14 = (((x69==x70)/x71)-x72);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = INT16_MAX;
	volatile uint32_t x74 = 174691U;
	uint16_t x75 = 32U;
	static int16_t x76 = INT16_MIN;
	volatile int32_t t15 = 366805131;

    t15 = (((x73==x74)/x75)-x76);

    if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x77 = INT64_MAX;
	static int8_t x78 = INT8_MAX;
	int8_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int32_t t16 = -62583;

    t16 = (((x77==x78)/x79)-x80);

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x82 = 10687U;
	int8_t x83 = 53;
	static uint32_t x84 = 1771822653U;
	volatile uint32_t t17 = 5130181U;

    t17 = (((x81==x82)/x83)-x84);

    if (t17 != 2523144643U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x89 = UINT8_MAX;
	uint32_t x91 = 112992U;
	volatile uint32_t t18 = 9U;

    t18 = (((x89==x90)/x91)-x92);

    if (t18 != 4294967293U) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x93 = -33;
	uint64_t x95 = UINT64_MAX;
	uint64_t t19 = 1218549LLU;

    t19 = (((x93==x94)/x95)-x96);

    if (t19 != 8024LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x98 = INT8_MIN;
	static uint32_t x99 = UINT32_MAX;
	uint8_t x100 = UINT8_MAX;

    t20 = (((x97==x98)/x99)-x100);

    if (t20 != 4294967041U) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = INT16_MIN;
	uint64_t x103 = 747486517677122LLU;
	int16_t x104 = -37;
	volatile uint64_t t21 = 443685648929LLU;

    t21 = (((x101==x102)/x103)-x104);

    if (t21 != 37LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x106 = INT64_MAX;
	static uint8_t x107 = 124U;
	static uint8_t x108 = 3U;

    t22 = (((x105==x106)/x107)-x108);

    if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x109 = UINT16_MAX;
	static int64_t x111 = INT64_MAX;
	volatile int32_t x112 = INT32_MIN;
	int64_t t23 = 1460049938620LL;

    t23 = (((x109==x110)/x111)-x112);

    if (t23 != 2147483648LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x113 = 256090;
	static uint64_t x115 = UINT64_MAX;
	volatile uint64_t t24 = 687065401668065988LLU;

    t24 = (((x113==x114)/x115)-x116);

    if (t24 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = UINT32_MAX;
	static int32_t x118 = INT32_MIN;
	int8_t x119 = -1;
	uint64_t x120 = 179409024072749LLU;
	volatile uint64_t t25 = 93078855163LLU;

    t25 = (((x117==x118)/x119)-x120);

    if (t25 != 18446564664685478867LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x121 = INT8_MIN;
	static volatile int16_t x122 = INT16_MIN;
	int16_t x123 = 6049;
	volatile int16_t x124 = INT16_MIN;

    t26 = (((x121==x122)/x123)-x124);

    if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x125 = INT32_MAX;
	static int32_t x126 = -12;
	uint64_t x127 = 23501064902296321LLU;
	uint32_t x128 = 640005636U;
	uint64_t t27 = 515210035485616LLU;

    t27 = (((x125==x126)/x127)-x128);

    if (t27 != 18446744073069545980LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint64_t x129 = 958212381069LLU;
	volatile uint16_t x130 = UINT16_MAX;
	uint64_t x131 = 9156LLU;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t28 = 4025LLU;

    t28 = (((x129==x130)/x131)-x132);

    if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MAX;
	volatile uint16_t x136 = 1129U;
	int32_t t29 = -161;

    t29 = (((x133==x134)/x135)-x136);

    if (t29 != -1129) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x137 = UINT16_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	volatile uint32_t t30 = 823U;

    t30 = (((x137==x138)/x139)-x140);

    if (t30 != 4294967293U) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x141 = 53573907;
	int64_t x142 = INT64_MIN;
	uint64_t x143 = UINT64_MAX;
	int64_t x144 = -6869446LL;
	volatile uint64_t t31 = 12089541386LLU;

    t31 = (((x141==x142)/x143)-x144);

    if (t31 != 6869446LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x145 = -1;
	int32_t x146 = 14;
	int32_t x147 = -1;
	volatile int32_t t32 = -14873320;

    t32 = (((x145==x146)/x147)-x148);

    if (t32 != 128) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x149 = UINT32_MAX;
	static int8_t x152 = 8;
	volatile int64_t t33 = 438403821157547LL;

    t33 = (((x149==x150)/x151)-x152);

    if (t33 != -8LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = -119945457;
	int64_t x154 = -1LL;
	uint32_t x155 = 35U;
	volatile int16_t x156 = 18;
	uint32_t t34 = 66871U;

    t34 = (((x153==x154)/x155)-x156);

    if (t34 != 4294967278U) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x157 = 1;
	int8_t x158 = INT8_MIN;
	int8_t x159 = 1;
	int8_t x160 = INT8_MAX;
	volatile int32_t t35 = -1;

    t35 = (((x157==x158)/x159)-x160);

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x162 = -51;
	int16_t x164 = INT16_MAX;
	volatile int64_t t36 = 472652384017149383LL;

    t36 = (((x161==x162)/x163)-x164);

    if (t36 != -32767LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x170 = INT64_MIN;
	uint32_t x171 = 1503873U;
	uint32_t x172 = 8059981U;
	static uint32_t t37 = 468089U;

    t37 = (((x169==x170)/x171)-x172);

    if (t37 != 4286907315U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x173 = 949U;
	uint16_t x174 = 14633U;
	static int32_t x175 = INT32_MIN;
	static int16_t x176 = -88;
	int32_t t38 = 18;

    t38 = (((x173==x174)/x175)-x176);

    if (t38 != 88) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = 14;
	int32_t x178 = INT32_MIN;
	volatile uint8_t x179 = 46U;
	static volatile int32_t t39 = 3;

    t39 = (((x177==x178)/x179)-x180);

    if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x185 = -13081;
	static uint8_t x186 = 68U;
	int8_t x187 = -1;
	volatile int8_t x188 = -1;
	int32_t t40 = -13408680;

    t40 = (((x185==x186)/x187)-x188);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x189 = INT32_MAX;
	int16_t x190 = INT16_MAX;
	int8_t x191 = -1;
	volatile int32_t t41 = 7;

    t41 = (((x189==x190)/x191)-x192);

    if (t41 != -32767) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x193 = -2;
	int32_t x194 = -1;
	uint16_t x195 = 3U;
	int32_t x196 = INT32_MAX;
	int32_t t42 = -82520007;

    t42 = (((x193==x194)/x195)-x196);

    if (t42 != -2147483647) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x197 = 5379438;
	uint16_t x200 = 965U;
	volatile int32_t t43 = 87;

    t43 = (((x197==x198)/x199)-x200);

    if (t43 != -965) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x201 = UINT64_MAX;
	volatile int64_t x204 = -215627LL;
	volatile int64_t t44 = -20398681238050117LL;

    t44 = (((x201==x202)/x203)-x204);

    if (t44 != 215627LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x209 = INT16_MIN;
	int8_t x210 = 1;
	static volatile uint32_t x212 = UINT32_MAX;

    t45 = (((x209==x210)/x211)-x212);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x213 = INT16_MIN;
	uint8_t x214 = 125U;
	volatile uint8_t x215 = UINT8_MAX;
	int32_t x216 = -1;
	static int32_t t46 = 901;

    t46 = (((x213==x214)/x215)-x216);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint8_t x217 = 119U;
	int16_t x218 = INT16_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int32_t t47 = 1690037;

    t47 = (((x217==x218)/x219)-x220);

    if (t47 != -15820) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x221 = -131855672;
	static int8_t x222 = 8;
	int8_t x223 = INT8_MIN;
	uint32_t t48 = 1331U;

    t48 = (((x221==x222)/x223)-x224);

    if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x225 = INT16_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t49 = 11LLU;

    t49 = (((x225==x226)/x227)-x228);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x229 = INT16_MIN;
	int32_t x230 = 125473;
	static volatile uint32_t x231 = UINT32_MAX;
	volatile int32_t x232 = INT32_MIN;
	static uint32_t t50 = 3U;

    t50 = (((x229==x230)/x231)-x232);

    if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int16_t x233 = INT16_MIN;
	int16_t x235 = -1;
	static int16_t x236 = 179;
	static int32_t t51 = -108;

    t51 = (((x233==x234)/x235)-x236);

    if (t51 != -179) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x237 = 14776459173829638LLU;
	uint16_t x238 = 9U;
	uint16_t x239 = 7113U;
	volatile uint32_t x240 = UINT32_MAX;

    t52 = (((x237==x238)/x239)-x240);

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = 14487591;
	uint64_t x242 = 86098LLU;
	uint64_t x244 = 45406686720649LLU;
	uint64_t t53 = 2207679718740137032LLU;

    t53 = (((x241==x242)/x243)-x244);

    if (t53 != 18446698667022830967LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x246 = 1204;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MAX;
	volatile int32_t t54 = 79;

    t54 = (((x245==x246)/x247)-x248);

    if (t54 != -2147483647) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x253 = 48U;
	volatile int64_t x254 = INT64_MAX;
	int64_t x255 = INT64_MIN;
	uint8_t x256 = 0U;
	int64_t t55 = 2LL;

    t55 = (((x253==x254)/x255)-x256);

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x257 = INT32_MAX;
	int64_t x258 = INT64_MAX;
	uint32_t x259 = UINT32_MAX;
	uint32_t t56 = 922171U;

    t56 = (((x257==x258)/x259)-x260);

    if (t56 != 4171993368U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x265 = 0U;
	int32_t x266 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t57 = 31318;

    t57 = (((x265==x266)/x267)-x268);

    if (t57 != 32768) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x269 = -17988463;
	int64_t x270 = INT64_MIN;
	int32_t t58 = 3;

    t58 = (((x269==x270)/x271)-x272);

    if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x273 = -465;
	int32_t x274 = INT32_MIN;
	static uint32_t x276 = 358312U;
	volatile uint32_t t59 = 47U;

    t59 = (((x273==x274)/x275)-x276);

    if (t59 != 4294608984U) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x277 = INT16_MIN;
	static int16_t x278 = -16121;
	uint8_t x280 = 39U;

    t60 = (((x277==x278)/x279)-x280);

    if (t60 != -39) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x281 = INT8_MIN;
	uint16_t x282 = UINT16_MAX;
	int64_t x283 = INT64_MIN;
	int32_t x284 = INT32_MAX;
	static volatile int64_t t61 = 475675790734157LL;

    t61 = (((x281==x282)/x283)-x284);

    if (t61 != -2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = -14851920;
	int8_t x286 = INT8_MIN;
	volatile int64_t x287 = -888LL;
	int64_t t62 = 37873LL;

    t62 = (((x285==x286)/x287)-x288);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x289 = 206324682U;
	static volatile int64_t x291 = INT64_MIN;
	int64_t x292 = INT64_MAX;
	static volatile int64_t t63 = -38804842750LL;

    t63 = (((x289==x290)/x291)-x292);

    if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x293 = INT64_MIN;
	volatile int32_t x294 = 57689310;
	uint32_t x295 = 2021834U;
	static uint8_t x296 = 19U;
	uint32_t t64 = 7319450U;

    t64 = (((x293==x294)/x295)-x296);

    if (t64 != 4294967277U) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x297 = INT8_MAX;
	int8_t x298 = -24;
	uint32_t x299 = 288031U;
	volatile int64_t t65 = 1711498LL;

    t65 = (((x297==x298)/x299)-x300);

    if (t65 != -1028083829893LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x302 = -170;
	uint64_t x303 = 1527599496267685LLU;
	int32_t x304 = 496070567;

    t66 = (((x301==x302)/x303)-x304);

    if (t66 != 18446744073213481049LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	int16_t x307 = INT16_MIN;
	static int8_t x308 = 1;
	static int32_t t67 = -221682616;

    t67 = (((x305==x306)/x307)-x308);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = -4;
	static int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MIN;
	volatile int8_t x312 = 0;
	int64_t t68 = 2244LL;

    t68 = (((x309==x310)/x311)-x312);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x313 = INT32_MIN;
	int32_t x314 = INT32_MAX;
	static uint32_t x315 = 2U;
	uint32_t t69 = 1569U;

    t69 = (((x313==x314)/x315)-x316);

    if (t69 != 4294967239U) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -1LL;
	uint8_t x319 = 1U;
	int32_t x320 = INT32_MAX;
	int32_t t70 = 0;

    t70 = (((x317==x318)/x319)-x320);

    if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = INT8_MIN;
	int64_t x322 = -2603199277697LL;
	uint32_t x323 = UINT32_MAX;
	static uint32_t t71 = UINT32_MAX;

    t71 = (((x321==x322)/x323)-x324);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x325 = 4132759389LLU;
	int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	volatile int64_t x328 = 1585118949597207427LL;
	volatile int64_t t72 = -14418155409006LL;

    t72 = (((x325==x326)/x327)-x328);

    if (t72 != -1585118949597207427LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x333 = INT64_MIN;
	static volatile int32_t x334 = 204861;
	uint64_t x335 = 237085LLU;

    t73 = (((x333==x334)/x335)-x336);

    if (t73 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x337 = INT16_MIN;
	static volatile int32_t x338 = -1;
	int16_t x339 = INT16_MIN;
	int32_t t74 = 8560;

    t74 = (((x337==x338)/x339)-x340);

    if (t74 != 730) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x341 = 121LLU;
	int64_t x342 = INT64_MAX;
	int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	int32_t t75 = -922;

    t75 = (((x341==x342)/x343)-x344);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MAX;
	uint16_t x348 = 28350U;
	uint64_t t76 = 764321832LLU;

    t76 = (((x345==x346)/x347)-x348);

    if (t76 != 18446744073709523266LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile int64_t x349 = -1LL;
	volatile int64_t x350 = -4097914LL;
	uint32_t t77 = 575298809U;

    t77 = (((x349==x350)/x351)-x352);

    if (t77 != 1U) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x353 = INT16_MIN;
	int64_t x355 = -1LL;
	int64_t x356 = INT64_MAX;
	int64_t t78 = 49840480341831067LL;

    t78 = (((x353==x354)/x355)-x356);

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x357 = 608U;
	static int64_t x358 = -896749187582LL;
	uint16_t x359 = 90U;
	int16_t x360 = INT16_MIN;
	int32_t t79 = -815679;

    t79 = (((x357==x358)/x359)-x360);

    if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x361 = 111U;
	int32_t x362 = INT32_MAX;
	int8_t x363 = -1;
	int32_t x364 = -737;

    t80 = (((x361==x362)/x363)-x364);

    if (t80 != 737) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x367 = 238729U;
	int32_t x368 = -485507;
	volatile uint32_t t81 = 60200U;

    t81 = (((x365==x366)/x367)-x368);

    if (t81 != 485507U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x369 = 568;
	int16_t x371 = -1;

    t82 = (((x369==x370)/x371)-x372);

    if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x373 = -1;
	int8_t x375 = INT8_MIN;
	volatile uint32_t x376 = 26838065U;
	volatile uint32_t t83 = 753891417U;

    t83 = (((x373==x374)/x375)-x376);

    if (t83 != 4268129231U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x377 = INT8_MAX;
	static int8_t x378 = -14;
	int8_t x379 = -2;
	int32_t t84 = -3194643;

    t84 = (((x377==x378)/x379)-x380);

    if (t84 != 673) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x382 = -1;
	static int64_t x383 = -1LL;
	uint32_t x384 = 246872U;
	int64_t t85 = 246LL;

    t85 = (((x381==x382)/x383)-x384);

    if (t85 != -246872LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x386 = INT64_MIN;
	volatile int64_t x387 = INT64_MAX;
	int8_t x388 = INT8_MAX;
	volatile int64_t t86 = 7657326121351LL;

    t86 = (((x385==x386)/x387)-x388);

    if (t86 != -127LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	static uint16_t x392 = 1898U;
	volatile int32_t t87 = -258230004;

    t87 = (((x389==x390)/x391)-x392);

    if (t87 != -1898) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x393 = INT64_MAX;
	int8_t x394 = INT8_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t88 = -20457;

    t88 = (((x393==x394)/x395)-x396);

    if (t88 != -255) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x398 = 5771U;
	uint16_t x399 = 16U;
	static int8_t x400 = 6;

    t89 = (((x397==x398)/x399)-x400);

    if (t89 != -6) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x401 = -8;
	uint32_t x402 = 15489085U;
	volatile int8_t x403 = -1;
	uint64_t x404 = 11261709070784LLU;
	volatile uint64_t t90 = 1923846161165LLU;

    t90 = (((x401==x402)/x403)-x404);

    if (t90 != 18446732812000480832LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x405 = -1LL;
	volatile int16_t x406 = INT16_MIN;
	int32_t x407 = INT32_MAX;
	int16_t x408 = -21;
	static volatile int32_t t91 = 8879;

    t91 = (((x405==x406)/x407)-x408);

    if (t91 != 21) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x409 = 49U;
	uint64_t x410 = 119639764LLU;
	static uint8_t x411 = UINT8_MAX;
	int8_t x412 = 7;
	int32_t t92 = 439;

    t92 = (((x409==x410)/x411)-x412);

    if (t92 != -7) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = INT16_MAX;
	uint32_t x414 = UINT32_MAX;
	volatile uint8_t x415 = UINT8_MAX;
	volatile int16_t x416 = 494;

    t93 = (((x413==x414)/x415)-x416);

    if (t93 != -494) { NG(); } else { ; }
	
}

void f94(void) {
    	static int16_t x417 = INT16_MIN;
	int64_t x419 = INT64_MIN;

    t94 = (((x417==x418)/x419)-x420);

    if (t94 != -115LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x421 = INT16_MAX;
	int64_t x422 = INT64_MAX;
	int8_t x423 = -1;
	uint64_t x424 = UINT64_MAX;
	uint64_t t95 = 6701828492247127LLU;

    t95 = (((x421==x422)/x423)-x424);

    if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = 84U;
	volatile int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MAX;
	int8_t x436 = -1;
	int32_t t96 = 190;

    t96 = (((x433==x434)/x435)-x436);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x437 = 61019;
	int32_t x438 = -1;
	uint64_t t97 = 117LLU;

    t97 = (((x437==x438)/x439)-x440);

    if (t97 != 128LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x441 = 1202454258399947LLU;
	int64_t x442 = -47789001LL;
	volatile int8_t x443 = INT8_MAX;
	uint16_t x444 = 2288U;
	volatile int32_t t98 = 545825854;

    t98 = (((x441==x442)/x443)-x444);

    if (t98 != -2288) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x449 = -161;
	volatile int64_t x451 = INT64_MAX;
	uint8_t x452 = 1U;
	static int64_t t99 = 403408LL;

    t99 = (((x449==x450)/x451)-x452);

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x458 = UINT16_MAX;
	uint16_t x459 = 1U;
	uint8_t x460 = UINT8_MAX;
	int32_t t100 = 61;

    t100 = (((x457==x458)/x459)-x460);

    if (t100 != -255) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x461 = INT64_MIN;
	uint8_t x462 = UINT8_MAX;
	int32_t x463 = 56064;
	int16_t x464 = -95;
	static int32_t t101 = -47377551;

    t101 = (((x461==x462)/x463)-x464);

    if (t101 != 95) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x465 = INT32_MIN;
	uint8_t x466 = UINT8_MAX;
	static uint32_t x467 = 2U;
	int32_t x468 = INT32_MIN;
	volatile uint32_t t102 = 1567819649U;

    t102 = (((x465==x466)/x467)-x468);

    if (t102 != 2147483648U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x469 = 23U;
	uint32_t x470 = 106756991U;
	uint8_t x472 = 11U;
	static int32_t t103 = -35;

    t103 = (((x469==x470)/x471)-x472);

    if (t103 != -11) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x473 = INT8_MIN;
	uint64_t x474 = 427365827110776LLU;
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t104 = -6;

    t104 = (((x473==x474)/x475)-x476);

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x477 = UINT32_MAX;
	int8_t x478 = INT8_MIN;
	int16_t x479 = -37;
	int64_t x480 = -204346227209711902LL;
	volatile int64_t t105 = 240880972357942LL;

    t105 = (((x477==x478)/x479)-x480);

    if (t105 != 204346227209711902LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x481 = 144U;
	int16_t x482 = INT16_MIN;
	static uint64_t x483 = 3LLU;
	uint64_t t106 = 747132980127LLU;

    t106 = (((x481==x482)/x483)-x484);

    if (t106 != 1LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x485 = INT16_MIN;
	int64_t x487 = -1LL;
	volatile uint32_t x488 = 3U;
	volatile int64_t t107 = 54LL;

    t107 = (((x485==x486)/x487)-x488);

    if (t107 != -3LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x489 = INT32_MIN;
	int32_t x490 = 46994619;
	int64_t x491 = INT64_MAX;
	int64_t x492 = INT64_MAX;

    t108 = (((x489==x490)/x491)-x492);

    if (t108 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x497 = 46472472;
	int16_t x498 = INT16_MIN;
	uint32_t x499 = UINT32_MAX;
	volatile int64_t t109 = 439163812530LL;

    t109 = (((x497==x498)/x499)-x500);

    if (t109 != 1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x501 = 216868802163038614LLU;
	int8_t x502 = INT8_MIN;
	volatile uint64_t x503 = 945LLU;
	static int8_t x504 = INT8_MIN;
	volatile uint64_t t110 = 755687LLU;

    t110 = (((x501==x502)/x503)-x504);

    if (t110 != 128LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x507 = UINT32_MAX;
	uint8_t x508 = UINT8_MAX;
	volatile uint32_t t111 = 175779U;

    t111 = (((x505==x506)/x507)-x508);

    if (t111 != 4294967041U) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x509 = -1;
	int8_t x510 = INT8_MAX;
	int32_t x512 = -12668512;

    t112 = (((x509==x510)/x511)-x512);

    if (t112 != 12668512) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x513 = -2704;
	int32_t x514 = 3988;
	int16_t x515 = INT16_MIN;
	volatile int8_t x516 = 0;

    t113 = (((x513==x514)/x515)-x516);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x517 = 888U;
	int16_t x518 = INT16_MIN;
	int16_t x519 = INT16_MIN;
	volatile int64_t x520 = INT64_MAX;
	int64_t t114 = 21638801760LL;

    t114 = (((x517==x518)/x519)-x520);

    if (t114 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x521 = UINT32_MAX;
	uint16_t x523 = UINT16_MAX;
	int16_t x524 = -1;
	volatile int32_t t115 = -33718163;

    t115 = (((x521==x522)/x523)-x524);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x525 = UINT32_MAX;
	uint8_t x526 = UINT8_MAX;
	uint8_t x527 = 1U;
	int8_t x528 = -1;
	int32_t t116 = -3164;

    t116 = (((x525==x526)/x527)-x528);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x529 = 1678U;
	static volatile int16_t x530 = 54;
	int16_t x532 = 0;
	static int32_t t117 = -480230478;

    t117 = (((x529==x530)/x531)-x532);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x533 = INT16_MIN;
	volatile uint32_t x535 = 19U;
	int8_t x536 = 1;
	uint32_t t118 = UINT32_MAX;

    t118 = (((x533==x534)/x535)-x536);

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x537 = INT8_MAX;
	volatile int32_t x539 = -1;
	int8_t x540 = INT8_MAX;
	static volatile int32_t t119 = 1197920;

    t119 = (((x537==x538)/x539)-x540);

    if (t119 != -127) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x541 = -28272279LL;
	int16_t x542 = INT16_MIN;
	int8_t x544 = 20;

    t120 = (((x541==x542)/x543)-x544);

    if (t120 != -20LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile int8_t x545 = INT8_MIN;
	int64_t x546 = -460023116889987430LL;
	int8_t x547 = INT8_MIN;
	volatile uint64_t x548 = UINT64_MAX;
	static volatile uint64_t t121 = 101LLU;

    t121 = (((x545==x546)/x547)-x548);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x549 = -1;
	int16_t x550 = 523;
	int32_t x551 = -2797;
	volatile int16_t x552 = 147;
	int32_t t122 = 964;

    t122 = (((x549==x550)/x551)-x552);

    if (t122 != -147) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x553 = -6;
	int16_t x554 = INT16_MIN;
	int16_t x555 = INT16_MIN;
	volatile int32_t t123 = -8357432;

    t123 = (((x553==x554)/x555)-x556);

    if (t123 != -120) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x557 = -54;
	static volatile int32_t x558 = 645516;
	int64_t x559 = INT64_MIN;
	volatile int32_t x560 = INT32_MIN;
	static int64_t t124 = -1147334333232LL;

    t124 = (((x557==x558)/x559)-x560);

    if (t124 != 2147483648LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x561 = -2454868541LL;
	uint16_t x562 = UINT16_MAX;
	int32_t x563 = INT32_MAX;
	int32_t x564 = INT32_MAX;
	int32_t t125 = 390868;

    t125 = (((x561==x562)/x563)-x564);

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x565 = 7U;
	int16_t x567 = INT16_MAX;
	uint32_t t126 = 28032227U;

    t126 = (((x565==x566)/x567)-x568);

    if (t126 != 4291061934U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x569 = 1874U;
	int8_t x571 = INT8_MIN;
	int64_t x572 = -33LL;

    t127 = (((x569==x570)/x571)-x572);

    if (t127 != 33LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x573 = INT64_MAX;
	uint8_t x574 = 2U;
	static int64_t x575 = 10413826247186464LL;
	volatile uint16_t x576 = 78U;

    t128 = (((x573==x574)/x575)-x576);

    if (t128 != -78LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x577 = -1;
	uint64_t x578 = UINT64_MAX;
	uint8_t x580 = 3U;
	int32_t t129 = 3;

    t129 = (((x577==x578)/x579)-x580);

    if (t129 != -3) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x583 = -28308051;
	volatile int32_t t130 = 3972;

    t130 = (((x581==x582)/x583)-x584);

    if (t130 != -6) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x585 = UINT16_MAX;
	uint64_t x586 = 1038731993796LLU;
	uint64_t x588 = UINT64_MAX;
	uint64_t t131 = 216379LLU;

    t131 = (((x585==x586)/x587)-x588);

    if (t131 != 1LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x590 = INT8_MIN;
	volatile uint64_t x591 = UINT64_MAX;
	uint32_t x592 = 98U;

    t132 = (((x589==x590)/x591)-x592);

    if (t132 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x593 = INT8_MIN;
	uint32_t x594 = 441857U;
	volatile int16_t x595 = INT16_MIN;
	int8_t x596 = INT8_MAX;
	int32_t t133 = 1;

    t133 = (((x593==x594)/x595)-x596);

    if (t133 != -127) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x597 = INT64_MAX;
	uint32_t x598 = 2147028416U;
	int8_t x599 = INT8_MAX;
	uint16_t x600 = 754U;
	static int32_t t134 = 130;

    t134 = (((x597==x598)/x599)-x600);

    if (t134 != -754) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x602 = 98U;
	uint64_t x603 = UINT64_MAX;
	static volatile int32_t x604 = 8502895;

    t135 = (((x601==x602)/x603)-x604);

    if (t135 != 18446744073701048721LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x605 = INT32_MIN;
	static volatile uint32_t x607 = 594337U;
	volatile uint32_t t136 = 139764U;

    t136 = (((x605==x606)/x607)-x608);

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x609 = INT64_MIN;
	static int16_t x610 = INT16_MIN;
	static volatile int16_t x611 = INT16_MIN;
	uint32_t x612 = 9932U;
	uint32_t t137 = 6518U;

    t137 = (((x609==x610)/x611)-x612);

    if (t137 != 4294957364U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x613 = UINT64_MAX;
	volatile uint32_t t138 = 7445U;

    t138 = (((x613==x614)/x615)-x616);

    if (t138 != 4294967294U) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x617 = INT64_MIN;
	int32_t x618 = -8;
	volatile int32_t t139 = -776;

    t139 = (((x617==x618)/x619)-x620);

    if (t139 != -1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint8_t x621 = 2U;
	int64_t x622 = INT64_MIN;
	int32_t x623 = 1;
	uint32_t x624 = 65951U;
	uint32_t t140 = 79U;

    t140 = (((x621==x622)/x623)-x624);

    if (t140 != 4294901345U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x626 = 8U;
	int16_t x627 = INT16_MIN;
	volatile int8_t x628 = INT8_MIN;
	int32_t t141 = -2465495;

    t141 = (((x625==x626)/x627)-x628);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x630 = -747760216LL;
	uint16_t x631 = 1U;
	int16_t x632 = -1;
	volatile int32_t t142 = -18;

    t142 = (((x629==x630)/x631)-x632);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x633 = -1LL;
	uint32_t x634 = 20836386U;
	int16_t x635 = INT16_MIN;
	int64_t x636 = -28224031LL;
	int64_t t143 = -201823LL;

    t143 = (((x633==x634)/x635)-x636);

    if (t143 != 28224031LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x637 = INT16_MAX;
	uint16_t x639 = 894U;
	int64_t x640 = -1798916424788871778LL;
	static volatile int64_t t144 = -48257410417851LL;

    t144 = (((x637==x638)/x639)-x640);

    if (t144 != 1798916424788871778LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x641 = 64U;
	uint16_t x642 = 0U;
	volatile int64_t x644 = INT64_MAX;
	static volatile int64_t t145 = -163466184LL;

    t145 = (((x641==x642)/x643)-x644);

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = -1;
	int16_t x646 = INT16_MIN;
	uint32_t x647 = UINT32_MAX;
	int32_t x648 = 6;
	volatile uint32_t t146 = 609U;

    t146 = (((x645==x646)/x647)-x648);

    if (t146 != 4294967290U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x649 = INT8_MIN;
	int64_t x650 = -2143225LL;
	uint32_t x651 = UINT32_MAX;
	int16_t x652 = INT16_MIN;

    t147 = (((x649==x650)/x651)-x652);

    if (t147 != 32768U) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int32_t x654 = -848507;
	int8_t x655 = INT8_MAX;
	int8_t x656 = INT8_MAX;
	volatile int32_t t148 = 5731;

    t148 = (((x653==x654)/x655)-x656);

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x665 = 1292U;
	int32_t x666 = -1;
	static int64_t x667 = INT64_MAX;
	int32_t x668 = INT32_MAX;

    t149 = (((x665==x666)/x667)-x668);

    if (t149 != -2147483647LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x669 = 321;
	int16_t x670 = -1;
	static uint32_t x671 = UINT32_MAX;
	int8_t x672 = INT8_MIN;
	uint32_t t150 = 25811U;

    t150 = (((x669==x670)/x671)-x672);

    if (t150 != 128U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x677 = UINT64_MAX;
	uint32_t x678 = 107U;
	int16_t x680 = 1;
	int32_t t151 = -3933246;

    t151 = (((x677==x678)/x679)-x680);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x681 = INT16_MAX;
	volatile int32_t x682 = INT32_MIN;
	uint8_t x683 = 8U;
	static int8_t x684 = -1;
	volatile int32_t t152 = -2;

    t152 = (((x681==x682)/x683)-x684);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x689 = INT64_MAX;
	static volatile int32_t x690 = INT32_MAX;
	static int32_t x691 = INT32_MAX;
	int64_t t153 = -5124211223782720LL;

    t153 = (((x689==x690)/x691)-x692);

    if (t153 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x694 = 1;
	int16_t x695 = INT16_MIN;
	volatile int8_t x696 = 1;

    t154 = (((x693==x694)/x695)-x696);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = INT64_MIN;
	int32_t x700 = -1249;

    t155 = (((x697==x698)/x699)-x700);

    if (t155 != 1249) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x701 = 164U;
	volatile uint16_t x702 = 425U;
	int8_t x703 = -31;
	static uint16_t x704 = 148U;
	int32_t t156 = 31931602;

    t156 = (((x701==x702)/x703)-x704);

    if (t156 != -148) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x705 = INT64_MIN;
	int64_t x706 = -1LL;
	int64_t x707 = -9087LL;
	static uint32_t x708 = 105U;

    t157 = (((x705==x706)/x707)-x708);

    if (t157 != -105LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x709 = -1LL;
	int64_t x710 = -1LL;
	int64_t x711 = 205076082371LL;
	int8_t x712 = INT8_MIN;
	static int64_t t158 = -33733778679LL;

    t158 = (((x709==x710)/x711)-x712);

    if (t158 != 128LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x714 = INT8_MIN;
	volatile uint64_t x715 = UINT64_MAX;
	int8_t x716 = 47;
	uint64_t t159 = 3LLU;

    t159 = (((x713==x714)/x715)-x716);

    if (t159 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x719 = -1;
	uint16_t x720 = 2U;
	static int32_t t160 = -7159;

    t160 = (((x717==x718)/x719)-x720);

    if (t160 != -2) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x722 = INT16_MAX;
	static int64_t x723 = -1LL;
	int64_t x724 = -328896078962214LL;

    t161 = (((x721==x722)/x723)-x724);

    if (t161 != 328896078962214LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x725 = 1;
	int32_t x726 = INT32_MAX;
	int64_t x728 = -3861432576447268LL;
	volatile int64_t t162 = 58200468LL;

    t162 = (((x725==x726)/x727)-x728);

    if (t162 != 3861432576447268LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x729 = 2U;
	int64_t x731 = -171045LL;
	int16_t x732 = INT16_MAX;
	int64_t t163 = -99120LL;

    t163 = (((x729==x730)/x731)-x732);

    if (t163 != -32767LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x733 = -1;
	uint16_t x734 = 0U;
	uint32_t x736 = 377U;

    t164 = (((x733==x734)/x735)-x736);

    if (t164 != 4294966919U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x739 = 1787U;
	uint8_t x740 = 0U;
	uint32_t t165 = 32443U;

    t165 = (((x737==x738)/x739)-x740);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x741 = -1;
	static volatile int32_t x742 = INT32_MAX;
	static int32_t x743 = INT32_MIN;
	int32_t x744 = 68198;
	volatile int32_t t166 = 5649;

    t166 = (((x741==x742)/x743)-x744);

    if (t166 != -68198) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x745 = INT16_MIN;
	volatile int64_t x747 = 891455026LL;
	volatile int16_t x748 = 8;
	volatile int64_t t167 = -1LL;

    t167 = (((x745==x746)/x747)-x748);

    if (t167 != -8LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x751 = 17693080U;
	uint32_t t168 = 584935U;

    t168 = (((x749==x750)/x751)-x752);

    if (t168 != 4294967288U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int64_t x753 = -399LL;
	uint32_t x754 = UINT32_MAX;
	static int64_t x755 = -1LL;
	int16_t x756 = INT16_MIN;
	volatile int64_t t169 = 33113254LL;

    t169 = (((x753==x754)/x755)-x756);

    if (t169 != 32768LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x757 = INT8_MIN;
	static uint8_t x758 = 95U;
	uint16_t x759 = 699U;
	int32_t x760 = 2;
	volatile int32_t t170 = 31;

    t170 = (((x757==x758)/x759)-x760);

    if (t170 != -2) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x765 = 493230232LLU;
	volatile int64_t x766 = 102823655251200LL;
	int8_t x767 = INT8_MIN;
	uint8_t x768 = UINT8_MAX;
	volatile int32_t t171 = -417;

    t171 = (((x765==x766)/x767)-x768);

    if (t171 != -255) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x769 = INT64_MIN;
	int8_t x770 = INT8_MIN;
	uint32_t x771 = UINT32_MAX;
	int64_t x772 = 1271LL;
	static volatile int64_t t172 = 1LL;

    t172 = (((x769==x770)/x771)-x772);

    if (t172 != -1271LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x773 = 467184764LLU;
	static int32_t x774 = 0;
	int16_t x775 = -29;
	volatile int8_t x776 = INT8_MAX;

    t173 = (((x773==x774)/x775)-x776);

    if (t173 != -127) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x777 = -27;
	int8_t x778 = INT8_MIN;
	static int64_t x779 = -1LL;
	volatile int64_t t174 = -397627226LL;

    t174 = (((x777==x778)/x779)-x780);

    if (t174 != -14LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x781 = INT8_MAX;
	int32_t x782 = -1;
	static int8_t x783 = -1;
	static uint32_t x784 = 1879839U;
	volatile uint32_t t175 = 71812U;

    t175 = (((x781==x782)/x783)-x784);

    if (t175 != 4293087457U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x786 = INT8_MAX;
	volatile int8_t x787 = 1;
	volatile int32_t x788 = INT32_MAX;
	volatile int32_t t176 = -3;

    t176 = (((x785==x786)/x787)-x788);

    if (t176 != -2147483647) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x789 = 108U;
	int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MIN;
	int32_t t177 = -40929;

    t177 = (((x789==x790)/x791)-x792);

    if (t177 != 25006958) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x793 = 19045U;
	static int16_t x795 = INT16_MAX;
	int32_t x796 = -1;
	int32_t t178 = -137;

    t178 = (((x793==x794)/x795)-x796);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x797 = -1;
	int64_t x798 = -1214LL;
	volatile int16_t x799 = 29;
	int32_t t179 = 266998;

    t179 = (((x797==x798)/x799)-x800);

    if (t179 != -635) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x805 = 29U;
	int8_t x806 = INT8_MIN;
	uint8_t x807 = 1U;
	volatile uint32_t x808 = 9U;
	volatile uint32_t t180 = 2547500U;

    t180 = (((x805==x806)/x807)-x808);

    if (t180 != 4294967287U) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x813 = INT32_MAX;
	static int16_t x814 = -1;
	volatile uint16_t x815 = 314U;
	volatile int32_t t181 = 542358654;

    t181 = (((x813==x814)/x815)-x816);

    if (t181 != 128) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x817 = 10U;
	volatile int16_t x818 = -14;
	int16_t x819 = -1;
	static uint8_t x820 = UINT8_MAX;
	volatile int32_t t182 = -3634;

    t182 = (((x817==x818)/x819)-x820);

    if (t182 != -255) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint16_t x822 = UINT16_MAX;
	uint64_t t183 = 129035050LLU;

    t183 = (((x821==x822)/x823)-x824);

    if (t183 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x825 = -1;
	volatile int8_t x826 = -1;
	volatile int8_t x827 = -43;
	static int64_t t184 = -1448663LL;

    t184 = (((x825==x826)/x827)-x828);

    if (t184 != -890447069385566621LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x829 = 3;
	static uint32_t x831 = 56678U;
	static uint32_t x832 = 0U;

    t185 = (((x829==x830)/x831)-x832);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x834 = UINT32_MAX;
	int32_t x836 = INT32_MAX;
	volatile int32_t t186 = 22581;

    t186 = (((x833==x834)/x835)-x836);

    if (t186 != -2147483647) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x837 = INT8_MIN;
	int64_t x838 = INT64_MIN;
	volatile int16_t x839 = INT16_MAX;
	int64_t x840 = -1LL;
	int64_t t187 = -34897973242716LL;

    t187 = (((x837==x838)/x839)-x840);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x844 = -11;

    t188 = (((x841==x842)/x843)-x844);

    if (t188 != 11LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x845 = 1000;
	volatile int16_t x846 = -1;
	static uint8_t x847 = 34U;
	int8_t x848 = INT8_MIN;
	volatile int32_t t189 = 25396266;

    t189 = (((x845==x846)/x847)-x848);

    if (t189 != 128) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x849 = INT64_MAX;
	static uint32_t x850 = UINT32_MAX;

    t190 = (((x849==x850)/x851)-x852);

    if (t190 != -2147483647) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x853 = INT8_MAX;
	static int32_t x856 = -2387122;
	int32_t t191 = 1;

    t191 = (((x853==x854)/x855)-x856);

    if (t191 != 2387122) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x857 = INT8_MIN;
	volatile int16_t x858 = 5;
	uint32_t x859 = 676U;
	int8_t x860 = -1;
	uint32_t t192 = 53U;

    t192 = (((x857==x858)/x859)-x860);

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x863 = 127U;
	int32_t x864 = 10511;
	volatile int32_t t193 = 485464328;

    t193 = (((x861==x862)/x863)-x864);

    if (t193 != -10511) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x865 = -1LL;
	int8_t x866 = -1;
	int64_t x867 = INT64_MIN;
	static int64_t t194 = 285876064LL;

    t194 = (((x865==x866)/x867)-x868);

    if (t194 != -6787498LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int16_t x869 = INT16_MAX;
	int8_t x870 = 12;
	int32_t x872 = INT32_MIN;
	uint64_t t195 = 200225669LLU;

    t195 = (((x869==x870)/x871)-x872);

    if (t195 != 2147483648LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x873 = -1;
	uint32_t t196 = 1119839770U;

    t196 = (((x873==x874)/x875)-x876);

    if (t196 != 4294967207U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x877 = 5U;
	static int16_t x878 = -6;
	int64_t x879 = -1LL;
	uint32_t x880 = 921851556U;
	volatile int64_t t197 = -4584338482LL;

    t197 = (((x877==x878)/x879)-x880);

    if (t197 != -921851556LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x881 = -1;
	int64_t x882 = 1254250LL;
	volatile uint16_t x883 = 30614U;
	static volatile int32_t t198 = -49;

    t198 = (((x881==x882)/x883)-x884);

    if (t198 != -26) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x893 = -1;
	int8_t x894 = INT8_MIN;
	uint16_t x895 = 3U;
	static int8_t x896 = -1;
	volatile int32_t t199 = 2045589;

    t199 = (((x893==x894)/x895)-x896);

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

