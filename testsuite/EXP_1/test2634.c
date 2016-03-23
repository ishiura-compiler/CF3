
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

static int8_t x1 = INT8_MAX;
int8_t x10 = -1;
int32_t x17 = -1;
static int8_t x19 = INT8_MAX;
static uint64_t x27 = 1434295258LLU;
int8_t x37 = INT8_MIN;
uint64_t t8 = 138820599LLU;
volatile int32_t t9 = 2996;
uint64_t x48 = UINT64_MAX;
volatile uint64_t t10 = 41LLU;
uint32_t x52 = UINT32_MAX;
volatile uint32_t t11 = 165537U;
static uint8_t x53 = 5U;
uint64_t x58 = UINT64_MAX;
int32_t x60 = 6058;
static int8_t x68 = INT8_MIN;
static uint16_t x70 = 1U;
volatile int32_t t15 = -314;
int64_t x73 = 0LL;
volatile int32_t x75 = INT32_MIN;
uint8_t x78 = 105U;
static int64_t x79 = INT64_MIN;
volatile int32_t t17 = -1684341;
uint64_t x82 = UINT64_MAX;
static uint32_t x95 = 2522U;
int64_t t22 = 33LL;
int64_t x107 = -3874836586134050607LL;
static volatile uint64_t t24 = 14853101930LLU;
uint16_t x114 = 24847U;
static int64_t t27 = -4086909507180468940LL;
static uint8_t x135 = 95U;
static int32_t t29 = -39773;
int16_t x143 = INT16_MIN;
uint8_t x144 = 1U;
static int8_t x146 = -1;
uint16_t x151 = UINT16_MAX;
int16_t x156 = INT16_MIN;
volatile int32_t x158 = -1;
volatile uint16_t x165 = 341U;
volatile uint32_t t35 = 101612981U;
uint32_t x170 = 337U;
static int64_t x173 = -1LL;
volatile uint64_t x177 = 822837388262068LLU;
volatile int32_t t39 = -61;
int64_t x188 = -1LL;
volatile int64_t x191 = -1LL;
volatile int32_t x196 = -12;
static int64_t x200 = 158530412449858LL;
volatile int64_t t43 = -3373244052577LL;
int8_t x202 = -1;
static uint8_t x209 = UINT8_MAX;
int64_t x215 = INT64_MAX;
volatile int8_t x219 = -1;
uint16_t x234 = 13337U;
int8_t x236 = INT8_MIN;
volatile int16_t x248 = 9458;
int8_t x252 = -1;
static uint32_t x253 = UINT32_MAX;
int8_t x261 = INT8_MIN;
static int8_t x264 = INT8_MAX;
uint32_t x269 = 133027U;
uint32_t x278 = 3342U;
uint16_t x284 = 12U;
static int32_t t61 = -10270557;
int32_t t62 = 15;
volatile int8_t x289 = INT8_MIN;
uint64_t x304 = 93278625LLU;
int32_t x313 = INT32_MIN;
static int16_t x314 = INT16_MIN;
volatile int32_t t69 = -25045383;
uint32_t x320 = 52U;
static uint32_t t70 = 9U;
int8_t x338 = -1;
int64_t x339 = INT64_MIN;
static uint8_t x345 = UINT8_MAX;
static int32_t x346 = -1;
int16_t x353 = -1;
int16_t x358 = 4;
volatile uint32_t x366 = 1469469243U;
int16_t x375 = INT16_MIN;
int32_t t82 = -515961196;
static int8_t x377 = 1;
int16_t x378 = -650;
uint8_t x379 = UINT8_MAX;
int32_t t86 = -85172438;
static volatile int8_t x404 = -2;
static int16_t x406 = INT16_MAX;
uint64_t x408 = UINT64_MAX;
volatile uint64_t t90 = 2489LLU;
int16_t x409 = 7117;
int16_t x410 = INT16_MIN;
int64_t x414 = 0LL;
int32_t t92 = 6747;
uint32_t x417 = 11427386U;
volatile uint64_t x419 = UINT64_MAX;
uint64_t x422 = 447532752LLU;
uint16_t x424 = 14U;
int64_t x426 = 1043LL;
int32_t t95 = 2220;
int32_t x440 = INT32_MAX;
static uint32_t x446 = UINT32_MAX;
static int16_t x456 = -1232;
volatile uint16_t x464 = UINT16_MAX;
static int32_t x465 = 1125519;
static int64_t x466 = INT64_MAX;
int32_t t105 = 12154;
static int32_t x485 = 96;
static volatile int32_t t109 = 5222836;
static volatile int32_t x489 = INT32_MIN;
uint64_t x492 = 8729878448019956LLU;
volatile uint64_t t110 = 424518251743260174LLU;
static int64_t x493 = 1140722640993135LL;
int8_t x495 = INT8_MAX;
int8_t x501 = INT8_MIN;
int8_t x505 = INT8_MAX;
static uint64_t x512 = 13666241802345928LLU;
uint64_t x518 = 15LLU;
volatile int8_t x521 = -1;
int32_t t117 = -77;
uint32_t x525 = 42U;
volatile uint32_t t118 = 9558U;
volatile int8_t x537 = 0;
volatile uint64_t x538 = 4127865102721280649LLU;
uint8_t x539 = 0U;
static int8_t x543 = 4;
static volatile int32_t t122 = -497176844;
volatile uint64_t t123 = 301LLU;
int16_t x557 = -1;
volatile int16_t x558 = INT16_MIN;
int8_t x559 = 44;
volatile int32_t t125 = -1;
static int32_t x563 = -1;
int8_t x565 = -34;
int16_t x572 = 7;
int64_t x576 = 938005177LL;
static int64_t t129 = -59121498170511LL;
volatile uint64_t t135 = 372718916712005LLU;
int8_t x609 = 48;
int16_t x611 = -1;
int16_t x618 = -1;
int32_t x620 = -1;
int32_t t138 = 60567;
int32_t x622 = -1;
int64_t x630 = 3868190446LL;
uint64_t t141 = 1LLU;
uint64_t x635 = 122907402450486LLU;
int64_t x637 = -1093LL;
uint32_t x650 = UINT32_MAX;
static int16_t x653 = INT16_MAX;
volatile uint8_t x654 = 42U;
int8_t x659 = -1;
int16_t x665 = INT16_MAX;
int16_t x677 = INT16_MAX;
volatile int32_t x678 = -1228;
uint32_t x680 = UINT32_MAX;
int32_t t151 = 513;
int8_t x694 = INT8_MIN;
volatile uint8_t x696 = 12U;
static volatile int8_t x702 = INT8_MAX;
int32_t x706 = 0;
int32_t t155 = -4741061;
int32_t x709 = INT32_MAX;
volatile int32_t x711 = INT32_MIN;
static int16_t x712 = INT16_MAX;
volatile int32_t t157 = 1268844;
volatile uint64_t t158 = 33681625056004362LLU;
int16_t x725 = INT16_MIN;
uint64_t x727 = 4036568996522665LLU;
int32_t t160 = 109;
static uint8_t x729 = UINT8_MAX;
int32_t x735 = 53056;
int8_t x754 = 15;
volatile int8_t x763 = INT8_MIN;
uint16_t x776 = UINT16_MAX;
int8_t x779 = 2;
int16_t x782 = INT16_MIN;
static int32_t x785 = INT32_MIN;
int32_t x811 = INT32_MAX;
int8_t x831 = INT8_MAX;
static volatile int16_t x833 = INT16_MIN;
volatile uint64_t t180 = 2148LLU;
uint64_t x840 = 444577566707LLU;
uint64_t x860 = 96LLU;
static volatile int32_t t187 = -1;
static uint16_t x874 = UINT16_MAX;
static int16_t x875 = -1;
volatile uint32_t x878 = 923476U;
uint32_t x879 = UINT32_MAX;
int64_t x887 = -1LL;
static volatile int8_t x888 = INT8_MAX;
volatile int32_t t193 = 2;
int32_t x889 = INT32_MIN;
int8_t x890 = INT8_MAX;
static int32_t x900 = INT32_MAX;
static int64_t x906 = 922041LL;
int8_t x907 = -1;
static int32_t t196 = -35;
volatile int16_t x912 = INT16_MAX;
int64_t x922 = -1LL;


void f0(void) {
    	static int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	volatile uint32_t x4 = 0U;
	static volatile uint32_t t0 = 429411644U;

    t0 = (((x1^x2)!=x3)-x4);

    if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	static int16_t x6 = -62;
	int16_t x7 = 6;
	int16_t x8 = -1;
	int32_t t1 = 480;

    t1 = (((x5^x6)!=x7)-x8);

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x11 = -1274;
	int32_t x12 = 72;
	volatile int32_t t2 = 5274931;

    t2 = (((x9^x10)!=x11)-x12);

    if (t2 != -71) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int64_t x13 = -9LL;
	static uint8_t x14 = UINT8_MAX;
	volatile uint32_t x15 = 604859418U;
	volatile uint64_t x16 = UINT64_MAX;
	static uint64_t t3 = 2031LLU;

    t3 = (((x13^x14)!=x15)-x16);

    if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = -4223163736876024543LL;
	int64_t x20 = -1LL;
	int64_t t4 = 408LL;

    t4 = (((x17^x18)!=x19)-x20);

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x21 = 81007973LL;
	static uint64_t x22 = UINT64_MAX;
	volatile int8_t x23 = -1;
	volatile int64_t x24 = -1LL;
	volatile int64_t t5 = 3391775LL;

    t5 = (((x21^x22)!=x23)-x24);

    if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	int16_t x26 = INT16_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = 46890459;

    t6 = (((x25^x26)!=x27)-x28);

    if (t6 != -254) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = 0;
	uint16_t x30 = 254U;
	volatile uint64_t x31 = 3970LLU;
	static uint8_t x32 = 81U;
	int32_t t7 = 145931617;

    t7 = (((x29^x30)!=x31)-x32);

    if (t7 != -80) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int8_t x38 = INT8_MAX;
	static int8_t x39 = INT8_MAX;
	volatile uint64_t x40 = UINT64_MAX;

    t8 = (((x37^x38)!=x39)-x40);

    if (t8 != 2LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = -1;

    t9 = (((x41^x42)!=x43)-x44);

    if (t9 != 2) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = INT64_MIN;
	int64_t x46 = INT64_MAX;
	static int32_t x47 = INT32_MAX;

    t10 = (((x45^x46)!=x47)-x48);

    if (t10 != 2LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x49 = -1;
	int64_t x50 = 11972684LL;
	uint32_t x51 = 18U;

    t11 = (((x49^x50)!=x51)-x52);

    if (t11 != 2U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x54 = UINT8_MAX;
	volatile uint8_t x55 = 46U;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t12 = 379707;

    t12 = (((x53^x54)!=x55)-x56);

    if (t12 != 32769) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x57 = INT64_MAX;
	int16_t x59 = -1;
	int32_t t13 = -1;

    t13 = (((x57^x58)!=x59)-x60);

    if (t13 != -6057) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = 4U;
	int64_t x66 = INT64_MIN;
	int32_t x67 = 1197;
	volatile int32_t t14 = 8610473;

    t14 = (((x65^x66)!=x67)-x68);

    if (t14 != 129) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = INT64_MAX;
	volatile int8_t x71 = INT8_MIN;
	volatile uint16_t x72 = 3U;

    t15 = (((x69^x70)!=x71)-x72);

    if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x74 = -642391363319LL;
	static uint8_t x76 = 21U;
	static volatile int32_t t16 = -35;

    t16 = (((x73^x74)!=x75)-x76);

    if (t16 != -20) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	volatile int32_t x80 = -26603229;

    t17 = (((x77^x78)!=x79)-x80);

    if (t17 != 26603230) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x81 = INT64_MIN;
	static uint32_t x83 = 235359U;
	int16_t x84 = INT16_MIN;
	volatile int32_t t18 = 4686219;

    t18 = (((x81^x82)!=x83)-x84);

    if (t18 != 32769) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = INT8_MIN;
	int64_t x86 = INT64_MAX;
	volatile int32_t x87 = -1;
	int8_t x88 = 15;
	volatile int32_t t19 = -53;

    t19 = (((x85^x86)!=x87)-x88);

    if (t19 != -14) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x93 = -1;
	int8_t x94 = INT8_MIN;
	uint16_t x96 = 1679U;
	int32_t t20 = 1985433;

    t20 = (((x93^x94)!=x95)-x96);

    if (t20 != -1678) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = 11;
	int32_t x98 = -43657044;
	int8_t x99 = INT8_MIN;
	volatile uint16_t x100 = 18030U;
	int32_t t21 = 2;

    t21 = (((x97^x98)!=x99)-x100);

    if (t21 != -18029) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x101 = INT64_MAX;
	int32_t x102 = 200;
	static volatile int32_t x103 = INT32_MIN;
	int64_t x104 = -1LL;

    t22 = (((x101^x102)!=x103)-x104);

    if (t22 != 2LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x105 = INT64_MAX;
	static int8_t x106 = INT8_MAX;
	int8_t x108 = -1;
	volatile int32_t t23 = -443;

    t23 = (((x105^x106)!=x107)-x108);

    if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	int16_t x111 = 677;
	volatile uint64_t x112 = UINT64_MAX;

    t24 = (((x109^x110)!=x111)-x112);

    if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x113 = 1106092990929379LLU;
	uint8_t x115 = 117U;
	int16_t x116 = INT16_MIN;
	int32_t t25 = -3256828;

    t25 = (((x113^x114)!=x115)-x116);

    if (t25 != 32769) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	static volatile uint32_t x118 = 22198315U;
	uint16_t x119 = 1U;
	int64_t x120 = -10390069280974LL;
	volatile int64_t t26 = 30371LL;

    t26 = (((x117^x118)!=x119)-x120);

    if (t26 != 10390069280975LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x121 = INT32_MAX;
	volatile int16_t x122 = 107;
	static int16_t x123 = INT16_MIN;
	int64_t x124 = -1LL;

    t27 = (((x121^x122)!=x123)-x124);

    if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = UINT16_MAX;
	int32_t x126 = INT32_MAX;
	int16_t x127 = 11;
	int64_t x128 = 14250568230627LL;
	volatile int64_t t28 = -375910691LL;

    t28 = (((x125^x126)!=x127)-x128);

    if (t28 != -14250568230626LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x133 = 7627U;
	int16_t x134 = 45;
	int16_t x136 = INT16_MIN;

    t29 = (((x133^x134)!=x135)-x136);

    if (t29 != 32769) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x141 = UINT64_MAX;
	int32_t x142 = INT32_MIN;
	static int32_t t30 = 4079755;

    t30 = (((x141^x142)!=x143)-x144);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x145 = 1U;
	int8_t x147 = 34;
	uint32_t x148 = 185599990U;
	volatile uint32_t t31 = 100350U;

    t31 = (((x145^x146)!=x147)-x148);

    if (t31 != 4109367307U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint8_t x149 = 3U;
	int64_t x150 = 6LL;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t32 = 151393;

    t32 = (((x149^x150)!=x151)-x152);

    if (t32 != -65534) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x153 = INT64_MIN;
	int64_t x154 = INT64_MAX;
	uint32_t x155 = UINT32_MAX;
	int32_t t33 = 5337;

    t33 = (((x153^x154)!=x155)-x156);

    if (t33 != 32769) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x157 = INT64_MAX;
	int32_t x159 = -254221380;
	uint8_t x160 = 99U;
	int32_t t34 = -4565;

    t34 = (((x157^x158)!=x159)-x160);

    if (t34 != -98) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x166 = -1;
	volatile int32_t x167 = 68406;
	uint32_t x168 = 683840931U;

    t35 = (((x165^x166)!=x167)-x168);

    if (t35 != 3611126366U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	volatile uint8_t x171 = 52U;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t36 = -1390;

    t36 = (((x169^x170)!=x171)-x172);

    if (t36 != 129) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x174 = -18LL;
	static uint8_t x175 = 100U;
	static uint8_t x176 = 31U;
	int32_t t37 = -501;

    t37 = (((x173^x174)!=x175)-x176);

    if (t37 != -30) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x178 = 1661436685499043932LLU;
	volatile uint64_t x179 = UINT64_MAX;
	int16_t x180 = -1;
	int32_t t38 = 235378785;

    t38 = (((x177^x178)!=x179)-x180);

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x181 = INT64_MAX;
	uint16_t x182 = UINT16_MAX;
	int16_t x183 = INT16_MAX;
	volatile uint8_t x184 = UINT8_MAX;

    t39 = (((x181^x182)!=x183)-x184);

    if (t39 != -254) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x185 = INT8_MAX;
	static volatile uint32_t x186 = 1U;
	int64_t x187 = INT64_MIN;
	int64_t t40 = -916013424312195323LL;

    t40 = (((x185^x186)!=x187)-x188);

    if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	uint16_t x192 = 3851U;
	volatile int32_t t41 = 18;

    t41 = (((x189^x190)!=x191)-x192);

    if (t41 != -3850) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x193 = 7032U;
	int64_t x194 = -1028654671004LL;
	int64_t x195 = INT64_MIN;
	int32_t t42 = -92460;

    t42 = (((x193^x194)!=x195)-x196);

    if (t42 != 13) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x197 = 41145669834745451LLU;
	static volatile int32_t x198 = INT32_MAX;
	volatile int64_t x199 = -717824289690528LL;

    t43 = (((x197^x198)!=x199)-x200);

    if (t43 != -158530412449857LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x201 = INT32_MIN;
	volatile int64_t x203 = -21066LL;
	int8_t x204 = -1;
	volatile int32_t t44 = -3960502;

    t44 = (((x201^x202)!=x203)-x204);

    if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x205 = 122070079305182419LLU;
	int64_t x206 = -1LL;
	static int8_t x207 = -1;
	uint64_t x208 = 21022124732798187LLU;
	uint64_t t45 = 227618LLU;

    t45 = (((x205^x206)!=x207)-x208);

    if (t45 != 18425721948976753430LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x210 = 96U;
	uint16_t x211 = 7306U;
	uint16_t x212 = 4856U;
	int32_t t46 = 1034326;

    t46 = (((x209^x210)!=x211)-x212);

    if (t46 != -4855) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x213 = INT8_MIN;
	int32_t x214 = INT32_MIN;
	uint16_t x216 = 27983U;
	int32_t t47 = 1804;

    t47 = (((x213^x214)!=x215)-x216);

    if (t47 != -27982) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint32_t x217 = UINT32_MAX;
	int64_t x218 = INT64_MIN;
	uint32_t x220 = 43444187U;
	volatile uint32_t t48 = 59544481U;

    t48 = (((x217^x218)!=x219)-x220);

    if (t48 != 4251523110U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = -1;
	static int8_t x222 = -2;
	int8_t x223 = INT8_MAX;
	int8_t x224 = INT8_MIN;
	int32_t t49 = 23;

    t49 = (((x221^x222)!=x223)-x224);

    if (t49 != 129) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x233 = INT16_MIN;
	uint64_t x235 = UINT64_MAX;
	int32_t t50 = 1;

    t50 = (((x233^x234)!=x235)-x236);

    if (t50 != 129) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x237 = -6;
	uint32_t x238 = UINT32_MAX;
	int64_t x239 = -3107183531033206LL;
	volatile int16_t x240 = INT16_MAX;
	int32_t t51 = 217873872;

    t51 = (((x237^x238)!=x239)-x240);

    if (t51 != -32766) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x241 = INT32_MAX;
	uint32_t x242 = 27070378U;
	int32_t x243 = -15886286;
	int8_t x244 = INT8_MIN;
	volatile int32_t t52 = 1302438;

    t52 = (((x241^x242)!=x243)-x244);

    if (t52 != 129) { NG(); } else { ; }
	
}

void f53(void) {
    	static volatile int32_t x245 = INT32_MIN;
	static int32_t x246 = -8663;
	int32_t x247 = INT32_MAX;
	static volatile int32_t t53 = 338081;

    t53 = (((x245^x246)!=x247)-x248);

    if (t53 != -9457) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x249 = 0;
	static volatile int64_t x250 = INT64_MAX;
	volatile int64_t x251 = 15200938585LL;
	volatile int32_t t54 = -62819833;

    t54 = (((x249^x250)!=x251)-x252);

    if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x254 = 1U;
	static volatile uint16_t x255 = UINT16_MAX;
	uint64_t x256 = UINT64_MAX;
	volatile uint64_t t55 = 509186888291LLU;

    t55 = (((x253^x254)!=x255)-x256);

    if (t55 != 2LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x257 = -1LL;
	int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t56 = 5304241203163LLU;

    t56 = (((x257^x258)!=x259)-x260);

    if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x262 = UINT32_MAX;
	uint16_t x263 = 230U;
	int32_t t57 = 37841206;

    t57 = (((x261^x262)!=x263)-x264);

    if (t57 != -126) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x270 = INT32_MAX;
	static int64_t x271 = -1095611878227416413LL;
	uint64_t x272 = 838655LLU;
	static volatile uint64_t t58 = 258509376LLU;

    t58 = (((x269^x270)!=x271)-x272);

    if (t58 != 18446744073708712962LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x273 = INT64_MAX;
	volatile int8_t x274 = INT8_MAX;
	int8_t x275 = INT8_MIN;
	volatile int32_t x276 = -1;
	volatile int32_t t59 = 1;

    t59 = (((x273^x274)!=x275)-x276);

    if (t59 != 2) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x277 = 192931;
	int16_t x279 = INT16_MIN;
	int32_t x280 = INT32_MAX;
	int32_t t60 = -10948;

    t60 = (((x277^x278)!=x279)-x280);

    if (t60 != -2147483646) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x281 = -632291156765792LL;
	int64_t x282 = 14669562215LL;
	volatile int8_t x283 = INT8_MIN;

    t61 = (((x281^x282)!=x283)-x284);

    if (t61 != -11) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x285 = 127190U;
	volatile int64_t x286 = INT64_MIN;
	int16_t x287 = -10;
	uint8_t x288 = UINT8_MAX;

    t62 = (((x285^x286)!=x287)-x288);

    if (t62 != -254) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x290 = 32302LLU;
	int16_t x291 = INT16_MIN;
	static uint64_t x292 = 292LLU;
	volatile uint64_t t63 = 0LLU;

    t63 = (((x289^x290)!=x291)-x292);

    if (t63 != 18446744073709551325LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x293 = UINT16_MAX;
	int64_t x294 = -1LL;
	static uint32_t x295 = 29822880U;
	int16_t x296 = INT16_MAX;
	volatile int32_t t64 = 1425697;

    t64 = (((x293^x294)!=x295)-x296);

    if (t64 != -32766) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = INT16_MAX;
	int64_t x299 = INT64_MIN;
	uint32_t x300 = UINT32_MAX;
	static volatile uint32_t t65 = 1771027101U;

    t65 = (((x297^x298)!=x299)-x300);

    if (t65 != 2U) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint8_t x301 = 0U;
	int64_t x302 = -1LL;
	int16_t x303 = INT16_MAX;
	uint64_t t66 = 6824759094773LLU;

    t66 = (((x301^x302)!=x303)-x304);

    if (t66 != 18446744073616272992LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int64_t x305 = INT64_MIN;
	int16_t x306 = INT16_MAX;
	static uint8_t x307 = 55U;
	int16_t x308 = -1;
	static volatile int32_t t67 = 445;

    t67 = (((x305^x306)!=x307)-x308);

    if (t67 != 2) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x309 = INT8_MAX;
	int16_t x310 = INT16_MAX;
	uint32_t x311 = UINT32_MAX;
	static uint64_t x312 = UINT64_MAX;
	volatile uint64_t t68 = 820LLU;

    t68 = (((x309^x310)!=x311)-x312);

    if (t68 != 2LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x315 = 1845784665LLU;
	static int8_t x316 = -29;

    t69 = (((x313^x314)!=x315)-x316);

    if (t69 != 30) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x317 = INT16_MAX;
	int16_t x318 = -393;
	uint64_t x319 = UINT64_MAX;

    t70 = (((x317^x318)!=x319)-x320);

    if (t70 != 4294967245U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x325 = -1;
	uint8_t x326 = UINT8_MAX;
	int16_t x327 = -29;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t71 = 23;

    t71 = (((x325^x326)!=x327)-x328);

    if (t71 != -254) { NG(); } else { ; }
	
}

void f72(void) {
    	static int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MAX;
	volatile int8_t x332 = INT8_MIN;
	static volatile int32_t t72 = -20911;

    t72 = (((x329^x330)!=x331)-x332);

    if (t72 != 129) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	static int16_t x335 = INT16_MIN;
	static int8_t x336 = 1;
	volatile int32_t t73 = 1014785;

    t73 = (((x333^x334)!=x335)-x336);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x337 = 115U;
	static volatile int8_t x340 = -2;
	volatile int32_t t74 = 639;

    t74 = (((x337^x338)!=x339)-x340);

    if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x341 = 98LL;
	int32_t x342 = 5;
	static volatile int16_t x343 = INT16_MAX;
	static volatile uint16_t x344 = 224U;
	static int32_t t75 = -2;

    t75 = (((x341^x342)!=x343)-x344);

    if (t75 != -223) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x347 = -72224;
	volatile uint8_t x348 = 0U;
	int32_t t76 = -3134286;

    t76 = (((x345^x346)!=x347)-x348);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x354 = -14;
	int16_t x355 = -585;
	uint64_t x356 = UINT64_MAX;
	uint64_t t77 = 307251208014711LLU;

    t77 = (((x353^x354)!=x355)-x356);

    if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = INT64_MIN;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = 90501335U;
	volatile uint32_t t78 = 225644604U;

    t78 = (((x357^x358)!=x359)-x360);

    if (t78 != 4204465962U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x361 = 6U;
	int16_t x362 = INT16_MIN;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 13589U;
	int32_t t79 = -162337890;

    t79 = (((x361^x362)!=x363)-x364);

    if (t79 != -13588) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x365 = 2074502190U;
	int8_t x367 = INT8_MIN;
	int32_t x368 = 0;
	volatile int32_t t80 = 94;

    t80 = (((x365^x366)!=x367)-x368);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x369 = -136567;
	static volatile uint8_t x370 = 3U;
	uint32_t x371 = 1605928410U;
	int16_t x372 = INT16_MIN;
	volatile int32_t t81 = 168;

    t81 = (((x369^x370)!=x371)-x372);

    if (t81 != 32769) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x373 = INT64_MAX;
	int16_t x374 = INT16_MIN;
	int32_t x376 = 18174851;

    t82 = (((x373^x374)!=x375)-x376);

    if (t82 != -18174850) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x380 = 34U;
	volatile int32_t t83 = 736797970;

    t83 = (((x377^x378)!=x379)-x380);

    if (t83 != -33) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int64_t x383 = -1LL;
	static int8_t x384 = INT8_MAX;
	volatile int32_t t84 = 3527;

    t84 = (((x381^x382)!=x383)-x384);

    if (t84 != -126) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint16_t x385 = 10U;
	int8_t x386 = -1;
	int8_t x387 = INT8_MAX;
	int8_t x388 = 24;
	int32_t t85 = 8;

    t85 = (((x385^x386)!=x387)-x388);

    if (t85 != -23) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x389 = 21U;
	int64_t x390 = -1928667LL;
	volatile uint32_t x391 = 2U;
	int32_t x392 = 692756;

    t86 = (((x389^x390)!=x391)-x392);

    if (t86 != -692755) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x393 = INT32_MIN;
	uint8_t x394 = UINT8_MAX;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = 110418U;
	volatile uint32_t t87 = 1077685U;

    t87 = (((x393^x394)!=x395)-x396);

    if (t87 != 4294856879U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x397 = INT32_MIN;
	int32_t x398 = -869171;
	volatile int16_t x399 = 0;
	uint16_t x400 = 1U;
	static int32_t t88 = 1;

    t88 = (((x397^x398)!=x399)-x400);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x401 = 2363388137754LL;
	static int32_t x402 = -1;
	volatile int16_t x403 = -101;
	int32_t t89 = -104;

    t89 = (((x401^x402)!=x403)-x404);

    if (t89 != 3) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x405 = 2105193U;
	uint32_t x407 = 0U;

    t90 = (((x405^x406)!=x407)-x408);

    if (t90 != 2LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x411 = INT32_MIN;
	int64_t x412 = -1048LL;
	static volatile int64_t t91 = -408721852169709209LL;

    t91 = (((x409^x410)!=x411)-x412);

    if (t91 != 1049LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x413 = -1;
	int64_t x415 = INT64_MIN;
	int32_t x416 = -1;

    t92 = (((x413^x414)!=x415)-x416);

    if (t92 != 2) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x418 = 3;
	volatile int32_t x420 = INT32_MAX;
	int32_t t93 = 4740;

    t93 = (((x417^x418)!=x419)-x420);

    if (t93 != -2147483646) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x421 = 43U;
	int8_t x423 = INT8_MIN;
	int32_t t94 = 1271701;

    t94 = (((x421^x422)!=x423)-x424);

    if (t94 != -13) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x425 = 14;
	uint16_t x427 = 101U;
	uint16_t x428 = 11194U;

    t95 = (((x425^x426)!=x427)-x428);

    if (t95 != -11193) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x429 = INT32_MIN;
	int64_t x430 = INT64_MIN;
	uint64_t x431 = 93008542243302LLU;
	volatile uint16_t x432 = 133U;
	volatile int32_t t96 = 13488249;

    t96 = (((x429^x430)!=x431)-x432);

    if (t96 != -132) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int8_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	static int64_t x435 = INT64_MIN;
	static uint8_t x436 = 34U;
	static volatile int32_t t97 = -408082244;

    t97 = (((x433^x434)!=x435)-x436);

    if (t97 != -33) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x437 = 12U;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = -1;
	volatile int32_t t98 = 3714652;

    t98 = (((x437^x438)!=x439)-x440);

    if (t98 != -2147483646) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x441 = -1;
	static int8_t x442 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MAX;
	static int32_t t99 = -652279126;

    t99 = (((x441^x442)!=x443)-x444);

    if (t99 != -32766) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x445 = 2U;
	uint64_t x447 = 14756849505845LLU;
	uint8_t x448 = 2U;
	volatile int32_t t100 = -84709316;

    t100 = (((x445^x446)!=x447)-x448);

    if (t100 != -1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x449 = INT16_MIN;
	volatile int16_t x450 = -1;
	volatile uint16_t x451 = 6U;
	uint64_t x452 = 11051LLU;
	static volatile uint64_t t101 = 2LLU;

    t101 = (((x449^x450)!=x451)-x452);

    if (t101 != 18446744073709540566LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x453 = -1;
	int32_t x454 = 7354874;
	static int8_t x455 = 0;
	int32_t t102 = -6939601;

    t102 = (((x453^x454)!=x455)-x456);

    if (t102 != 1233) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x457 = 6U;
	uint32_t x458 = 802U;
	volatile int32_t x459 = -9830502;
	uint16_t x460 = 201U;
	int32_t t103 = -1974;

    t103 = (((x457^x458)!=x459)-x460);

    if (t103 != -200) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x461 = 3668577750376925LLU;
	int64_t x462 = -131281471327075LL;
	int16_t x463 = INT16_MAX;
	volatile int32_t t104 = -419;

    t104 = (((x461^x462)!=x463)-x464);

    if (t104 != -65534) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x467 = INT64_MAX;
	int8_t x468 = INT8_MIN;

    t105 = (((x465^x466)!=x467)-x468);

    if (t105 != 129) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x469 = 2692877609304755944LLU;
	volatile uint64_t x470 = UINT64_MAX;
	volatile int8_t x471 = -1;
	uint32_t x472 = 0U;
	uint32_t t106 = 413325U;

    t106 = (((x469^x470)!=x471)-x472);

    if (t106 != 1U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x473 = INT8_MAX;
	uint16_t x474 = 14863U;
	int32_t x475 = -46752739;
	uint64_t x476 = UINT64_MAX;
	volatile uint64_t t107 = 418385LLU;

    t107 = (((x473^x474)!=x475)-x476);

    if (t107 != 2LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x477 = UINT64_MAX;
	volatile int16_t x478 = -38;
	volatile int32_t x479 = INT32_MIN;
	static uint8_t x480 = 18U;
	volatile int32_t t108 = -29476;

    t108 = (((x477^x478)!=x479)-x480);

    if (t108 != -17) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x486 = 28U;
	volatile int32_t x487 = INT32_MIN;
	static int32_t x488 = -6848;

    t109 = (((x485^x486)!=x487)-x488);

    if (t109 != 6849) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x490 = UINT16_MAX;
	int32_t x491 = INT32_MIN;

    t110 = (((x489^x490)!=x491)-x492);

    if (t110 != 18438014195261531661LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x494 = INT64_MIN;
	volatile uint32_t x496 = 77562U;
	static uint32_t t111 = 32807U;

    t111 = (((x493^x494)!=x495)-x496);

    if (t111 != 4294889735U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x497 = 950;
	static int64_t x498 = INT64_MIN;
	volatile int16_t x499 = 0;
	static int32_t x500 = INT32_MAX;
	int32_t t112 = -960217;

    t112 = (((x497^x498)!=x499)-x500);

    if (t112 != -2147483646) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int8_t x502 = -25;
	int32_t x503 = INT32_MIN;
	volatile uint8_t x504 = UINT8_MAX;
	volatile int32_t t113 = -256314;

    t113 = (((x501^x502)!=x503)-x504);

    if (t113 != -254) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x506 = -42499048LL;
	static volatile int64_t x507 = INT64_MAX;
	uint64_t x508 = UINT64_MAX;
	volatile uint64_t t114 = 285117487068209318LLU;

    t114 = (((x505^x506)!=x507)-x508);

    if (t114 != 2LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x509 = -846LL;
	static int8_t x510 = -1;
	int8_t x511 = -1;
	static volatile uint64_t t115 = 264506066423388620LLU;

    t115 = (((x509^x510)!=x511)-x512);

    if (t115 != 18433077831907205689LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x517 = UINT32_MAX;
	int8_t x519 = INT8_MIN;
	int8_t x520 = INT8_MAX;
	int32_t t116 = 1;

    t116 = (((x517^x518)!=x519)-x520);

    if (t116 != -126) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x522 = 494U;
	static uint32_t x523 = 16553849U;
	int32_t x524 = INT32_MAX;

    t117 = (((x521^x522)!=x523)-x524);

    if (t117 != -2147483646) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x526 = 3;
	int16_t x527 = 2554;
	static uint32_t x528 = 708454874U;

    t118 = (((x525^x526)!=x527)-x528);

    if (t118 != 3586512423U) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x529 = 3LL;
	int32_t x530 = -1;
	volatile int32_t x531 = -1;
	uint16_t x532 = 313U;
	int32_t t119 = 17850369;

    t119 = (((x529^x530)!=x531)-x532);

    if (t119 != -312) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x540 = 61U;
	static int32_t t120 = 3639333;

    t120 = (((x537^x538)!=x539)-x540);

    if (t120 != -60) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x541 = -560486881930272LL;
	int16_t x542 = 329;
	uint16_t x544 = 10U;
	int32_t t121 = 1707450;

    t121 = (((x541^x542)!=x543)-x544);

    if (t121 != -9) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x545 = 5U;
	static int16_t x546 = 58;
	int16_t x547 = 80;
	uint16_t x548 = 1813U;

    t122 = (((x545^x546)!=x547)-x548);

    if (t122 != -1812) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x549 = 6U;
	int16_t x550 = INT16_MIN;
	uint16_t x551 = 498U;
	static uint64_t x552 = UINT64_MAX;

    t123 = (((x549^x550)!=x551)-x552);

    if (t123 != 2LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x553 = INT32_MAX;
	volatile uint8_t x554 = 83U;
	int64_t x555 = INT64_MIN;
	int16_t x556 = -3;
	int32_t t124 = -128;

    t124 = (((x553^x554)!=x555)-x556);

    if (t124 != 4) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x560 = INT8_MIN;

    t125 = (((x557^x558)!=x559)-x560);

    if (t125 != 129) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x561 = INT8_MIN;
	uint32_t x562 = 30U;
	static int32_t x564 = 1154;
	volatile int32_t t126 = 575051542;

    t126 = (((x561^x562)!=x563)-x564);

    if (t126 != -1153) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x566 = INT16_MIN;
	int8_t x567 = INT8_MIN;
	uint32_t x568 = 3517905U;
	volatile uint32_t t127 = 3174U;

    t127 = (((x565^x566)!=x567)-x568);

    if (t127 != 4291449392U) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x569 = INT16_MIN;
	uint32_t x570 = 232222558U;
	int32_t x571 = INT32_MAX;
	volatile int32_t t128 = -230597;

    t128 = (((x569^x570)!=x571)-x572);

    if (t128 != -6) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x573 = 13902;
	int32_t x574 = INT32_MIN;
	static int64_t x575 = INT64_MIN;

    t129 = (((x573^x574)!=x575)-x576);

    if (t129 != -938005176LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x577 = 28406LLU;
	int32_t x578 = -1;
	uint64_t x579 = 7603LLU;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t130 = -25410520;

    t130 = (((x577^x578)!=x579)-x580);

    if (t130 != -65534) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x581 = INT8_MIN;
	int32_t x582 = INT32_MIN;
	int8_t x583 = INT8_MIN;
	int8_t x584 = INT8_MIN;
	int32_t t131 = 37705;

    t131 = (((x581^x582)!=x583)-x584);

    if (t131 != 129) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x585 = -7;
	int32_t x586 = INT32_MIN;
	static int64_t x587 = INT64_MIN;
	uint32_t x588 = 1U;
	volatile uint32_t t132 = 32099104U;

    t132 = (((x585^x586)!=x587)-x588);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x589 = INT8_MIN;
	static volatile int8_t x590 = 11;
	int8_t x591 = INT8_MIN;
	int32_t x592 = -1;
	int32_t t133 = -140;

    t133 = (((x589^x590)!=x591)-x592);

    if (t133 != 2) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x593 = INT32_MAX;
	int16_t x594 = INT16_MIN;
	int32_t x595 = -1;
	uint16_t x596 = 247U;
	static volatile int32_t t134 = 21;

    t134 = (((x593^x594)!=x595)-x596);

    if (t134 != -246) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x601 = INT32_MIN;
	int32_t x602 = INT32_MAX;
	uint16_t x603 = UINT16_MAX;
	uint64_t x604 = UINT64_MAX;

    t135 = (((x601^x602)!=x603)-x604);

    if (t135 != 2LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x610 = 30U;
	static volatile int64_t x612 = -1LL;
	static int64_t t136 = -1LL;

    t136 = (((x609^x610)!=x611)-x612);

    if (t136 != 2LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x613 = 3735;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = 20820879U;
	int8_t x616 = INT8_MIN;
	volatile int32_t t137 = -61614734;

    t137 = (((x613^x614)!=x615)-x616);

    if (t137 != 129) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x617 = INT64_MAX;
	volatile int8_t x619 = 0;

    t138 = (((x617^x618)!=x619)-x620);

    if (t138 != 2) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x621 = -14;
	uint8_t x623 = 37U;
	static volatile int64_t x624 = -1LL;
	volatile int64_t t139 = 12474479LL;

    t139 = (((x621^x622)!=x623)-x624);

    if (t139 != 2LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x625 = INT32_MAX;
	int8_t x626 = 1;
	uint8_t x627 = 7U;
	static int16_t x628 = INT16_MAX;
	static volatile int32_t t140 = -1;

    t140 = (((x625^x626)!=x627)-x628);

    if (t140 != -32766) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x629 = -9119;
	int16_t x631 = 138;
	uint64_t x632 = 419465612LLU;

    t141 = (((x629^x630)!=x631)-x632);

    if (t141 != 18446744073290086005LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x633 = 16;
	int64_t x634 = INT64_MAX;
	volatile int16_t x636 = INT16_MIN;
	volatile int32_t t142 = -37;

    t142 = (((x633^x634)!=x635)-x636);

    if (t142 != 32769) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x638 = INT32_MIN;
	int16_t x639 = -118;
	static volatile int64_t x640 = -1LL;
	volatile int64_t t143 = 546702437693LL;

    t143 = (((x637^x638)!=x639)-x640);

    if (t143 != 2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x641 = -1;
	volatile int16_t x642 = 0;
	static uint64_t x643 = UINT64_MAX;
	int32_t x644 = -1;
	static volatile int32_t t144 = -226446;

    t144 = (((x641^x642)!=x643)-x644);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x649 = INT16_MIN;
	int32_t x651 = INT32_MAX;
	uint8_t x652 = UINT8_MAX;
	int32_t t145 = -5677;

    t145 = (((x649^x650)!=x651)-x652);

    if (t145 != -254) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x655 = 3480549U;
	uint8_t x656 = UINT8_MAX;
	static int32_t t146 = 390;

    t146 = (((x653^x654)!=x655)-x656);

    if (t146 != -254) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x657 = INT8_MAX;
	int16_t x658 = 4;
	static int8_t x660 = 6;
	volatile int32_t t147 = -1;

    t147 = (((x657^x658)!=x659)-x660);

    if (t147 != -5) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x666 = -123940;
	int32_t x667 = INT32_MIN;
	int64_t x668 = 210380LL;
	int64_t t148 = -2192188535477813750LL;

    t148 = (((x665^x666)!=x667)-x668);

    if (t148 != -210379LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x669 = UINT32_MAX;
	uint16_t x670 = 2U;
	uint16_t x671 = UINT16_MAX;
	int16_t x672 = 64;
	int32_t t149 = 4695;

    t149 = (((x669^x670)!=x671)-x672);

    if (t149 != -63) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x679 = 87U;
	volatile uint32_t t150 = 199U;

    t150 = (((x677^x678)!=x679)-x680);

    if (t150 != 2U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x681 = 1U;
	static int8_t x682 = 1;
	int8_t x683 = INT8_MIN;
	int32_t x684 = -2285;

    t151 = (((x681^x682)!=x683)-x684);

    if (t151 != 2286) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x685 = INT32_MIN;
	static int64_t x686 = -1LL;
	int32_t x687 = -781;
	volatile int8_t x688 = INT8_MIN;
	volatile int32_t t152 = 6913152;

    t152 = (((x685^x686)!=x687)-x688);

    if (t152 != 129) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x693 = 1407300556LLU;
	int64_t x695 = 56446650LL;
	int32_t t153 = -98;

    t153 = (((x693^x694)!=x695)-x696);

    if (t153 != -11) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x701 = UINT32_MAX;
	static int8_t x703 = -1;
	volatile int16_t x704 = INT16_MIN;
	volatile int32_t t154 = -4;

    t154 = (((x701^x702)!=x703)-x704);

    if (t154 != 32769) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x705 = -41;
	int16_t x707 = INT16_MAX;
	static int8_t x708 = 1;

    t155 = (((x705^x706)!=x707)-x708);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x710 = -2LL;
	static volatile int32_t t156 = -163;

    t156 = (((x709^x710)!=x711)-x712);

    if (t156 != -32766) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x713 = 1932U;
	int16_t x714 = INT16_MIN;
	int16_t x715 = -8;
	volatile uint16_t x716 = 8U;

    t157 = (((x713^x714)!=x715)-x716);

    if (t157 != -7) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x717 = 5;
	volatile uint8_t x718 = 7U;
	static int8_t x719 = 7;
	static uint64_t x720 = UINT64_MAX;

    t158 = (((x717^x718)!=x719)-x720);

    if (t158 != 2LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x721 = 149;
	volatile int8_t x722 = INT8_MAX;
	int32_t x723 = 34859;
	static volatile int8_t x724 = INT8_MAX;
	int32_t t159 = 129454;

    t159 = (((x721^x722)!=x723)-x724);

    if (t159 != -126) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x726 = UINT16_MAX;
	static int8_t x728 = -1;

    t160 = (((x725^x726)!=x727)-x728);

    if (t160 != 2) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x730 = 56U;
	int64_t x731 = -14071126623016679LL;
	static volatile uint16_t x732 = 16043U;
	volatile int32_t t161 = 11;

    t161 = (((x729^x730)!=x731)-x732);

    if (t161 != -16042) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x733 = UINT8_MAX;
	static volatile int8_t x734 = -53;
	uint8_t x736 = 121U;
	volatile int32_t t162 = 2308574;

    t162 = (((x733^x734)!=x735)-x736);

    if (t162 != -120) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x737 = 3U;
	uint8_t x738 = 1U;
	uint8_t x739 = UINT8_MAX;
	int32_t x740 = -1;
	static int32_t t163 = 0;

    t163 = (((x737^x738)!=x739)-x740);

    if (t163 != 2) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x745 = INT8_MAX;
	int8_t x746 = INT8_MIN;
	volatile uint8_t x747 = UINT8_MAX;
	static volatile int16_t x748 = -1;
	volatile int32_t t164 = -7049;

    t164 = (((x745^x746)!=x747)-x748);

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x749 = 10U;
	int64_t x750 = -1LL;
	int16_t x751 = INT16_MIN;
	uint32_t x752 = 1U;
	volatile uint32_t t165 = 95763U;

    t165 = (((x749^x750)!=x751)-x752);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int8_t x753 = -9;
	int8_t x755 = 4;
	int8_t x756 = INT8_MIN;
	int32_t t166 = -7;

    t166 = (((x753^x754)!=x755)-x756);

    if (t166 != 129) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x757 = INT32_MAX;
	uint16_t x758 = UINT16_MAX;
	static int32_t x759 = 550216863;
	uint16_t x760 = UINT16_MAX;
	volatile int32_t t167 = -1673329;

    t167 = (((x757^x758)!=x759)-x760);

    if (t167 != -65534) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x761 = UINT32_MAX;
	int8_t x762 = 8;
	static int8_t x764 = -1;
	static int32_t t168 = -6150283;

    t168 = (((x761^x762)!=x763)-x764);

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x773 = UINT64_MAX;
	int8_t x774 = 14;
	volatile int16_t x775 = INT16_MIN;
	volatile int32_t t169 = 7;

    t169 = (((x773^x774)!=x775)-x776);

    if (t169 != -65534) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x777 = -1;
	volatile int8_t x778 = 2;
	int8_t x780 = INT8_MAX;
	int32_t t170 = -16318011;

    t170 = (((x777^x778)!=x779)-x780);

    if (t170 != -126) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint8_t x781 = 4U;
	int32_t x783 = -1;
	uint16_t x784 = 877U;
	volatile int32_t t171 = -497;

    t171 = (((x781^x782)!=x783)-x784);

    if (t171 != -876) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x786 = INT8_MIN;
	int8_t x787 = INT8_MIN;
	uint32_t x788 = UINT32_MAX;
	volatile uint32_t t172 = 122187U;

    t172 = (((x785^x786)!=x787)-x788);

    if (t172 != 2U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x793 = INT32_MAX;
	static uint16_t x794 = 5954U;
	uint64_t x795 = 89524498503LLU;
	int32_t x796 = 660392043;
	int32_t t173 = -478564119;

    t173 = (((x793^x794)!=x795)-x796);

    if (t173 != -660392042) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x797 = INT16_MAX;
	uint32_t x798 = UINT32_MAX;
	int8_t x799 = INT8_MIN;
	int16_t x800 = 70;
	volatile int32_t t174 = 12;

    t174 = (((x797^x798)!=x799)-x800);

    if (t174 != -69) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x805 = INT8_MIN;
	volatile uint64_t x806 = UINT64_MAX;
	volatile int8_t x807 = 5;
	uint32_t x808 = UINT32_MAX;
	volatile uint32_t t175 = 42U;

    t175 = (((x805^x806)!=x807)-x808);

    if (t175 != 2U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x809 = INT8_MIN;
	uint32_t x810 = 10U;
	static int64_t x812 = INT64_MAX;
	volatile int64_t t176 = 290988LL;

    t176 = (((x809^x810)!=x811)-x812);

    if (t176 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x813 = INT32_MIN;
	uint16_t x814 = 560U;
	uint16_t x815 = 1U;
	static int16_t x816 = INT16_MAX;
	int32_t t177 = -24847021;

    t177 = (((x813^x814)!=x815)-x816);

    if (t177 != -32766) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x821 = INT16_MAX;
	uint32_t x822 = 6U;
	static int16_t x823 = INT16_MIN;
	static int16_t x824 = -1;
	volatile int32_t t178 = -127;

    t178 = (((x821^x822)!=x823)-x824);

    if (t178 != 2) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x829 = 11U;
	static uint32_t x830 = UINT32_MAX;
	int32_t x832 = INT32_MAX;
	static volatile int32_t t179 = 17881429;

    t179 = (((x829^x830)!=x831)-x832);

    if (t179 != -2147483646) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x834 = INT8_MIN;
	int8_t x835 = INT8_MIN;
	static uint64_t x836 = UINT64_MAX;

    t180 = (((x833^x834)!=x835)-x836);

    if (t180 != 2LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x837 = 4;
	static uint16_t x838 = 227U;
	int16_t x839 = INT16_MIN;
	volatile uint64_t t181 = 14LLU;

    t181 = (((x837^x838)!=x839)-x840);

    if (t181 != 18446743629131984910LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x841 = 1U;
	volatile uint32_t x842 = 24647653U;
	int8_t x843 = INT8_MIN;
	volatile uint16_t x844 = UINT16_MAX;
	int32_t t182 = -7;

    t182 = (((x841^x842)!=x843)-x844);

    if (t182 != -65534) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x845 = INT64_MIN;
	int16_t x846 = INT16_MAX;
	int32_t x847 = INT32_MAX;
	int16_t x848 = -1;
	volatile int32_t t183 = 10198613;

    t183 = (((x845^x846)!=x847)-x848);

    if (t183 != 2) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x849 = -64974570;
	int8_t x850 = INT8_MIN;
	static uint8_t x851 = UINT8_MAX;
	uint32_t x852 = UINT32_MAX;
	volatile uint32_t t184 = 76U;

    t184 = (((x849^x850)!=x851)-x852);

    if (t184 != 2U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x853 = -1;
	static int8_t x854 = 0;
	int32_t x855 = 4134335;
	int64_t x856 = -1LL;
	static int64_t t185 = 4LL;

    t185 = (((x853^x854)!=x855)-x856);

    if (t185 != 2LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint64_t x857 = UINT64_MAX;
	int8_t x858 = INT8_MAX;
	int8_t x859 = 3;
	static volatile uint64_t t186 = 620403LLU;

    t186 = (((x857^x858)!=x859)-x860);

    if (t186 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x861 = -1;
	int32_t x862 = -1;
	volatile int32_t x863 = INT32_MIN;
	int32_t x864 = -1;

    t187 = (((x861^x862)!=x863)-x864);

    if (t187 != 2) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x865 = -1LL;
	static volatile int32_t x866 = -102868500;
	volatile int8_t x867 = -2;
	uint16_t x868 = 0U;
	volatile int32_t t188 = -129686;

    t188 = (((x865^x866)!=x867)-x868);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x869 = INT64_MAX;
	uint8_t x870 = UINT8_MAX;
	volatile uint8_t x871 = 64U;
	int8_t x872 = INT8_MAX;
	static int32_t t189 = -24839050;

    t189 = (((x869^x870)!=x871)-x872);

    if (t189 != -126) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x873 = INT8_MIN;
	uint32_t x876 = 81U;
	static uint32_t t190 = 1043849416U;

    t190 = (((x873^x874)!=x875)-x876);

    if (t190 != 4294967216U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x877 = UINT32_MAX;
	int8_t x880 = -1;
	int32_t t191 = -187;

    t191 = (((x877^x878)!=x879)-x880);

    if (t191 != 2) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x881 = INT64_MIN;
	static uint16_t x882 = 0U;
	int8_t x883 = INT8_MAX;
	uint8_t x884 = 102U;
	int32_t t192 = -1035380;

    t192 = (((x881^x882)!=x883)-x884);

    if (t192 != -101) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x885 = -1;
	int8_t x886 = INT8_MIN;

    t193 = (((x885^x886)!=x887)-x888);

    if (t193 != -126) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x891 = UINT8_MAX;
	int64_t x892 = INT64_MAX;
	int64_t t194 = 12LL;

    t194 = (((x889^x890)!=x891)-x892);

    if (t194 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x897 = 2680U;
	int8_t x898 = 2;
	int64_t x899 = -1LL;
	int32_t t195 = 3;

    t195 = (((x897^x898)!=x899)-x900);

    if (t195 != -2147483646) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x905 = INT8_MIN;
	int32_t x908 = -1;

    t196 = (((x905^x906)!=x907)-x908);

    if (t196 != 2) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x909 = INT16_MIN;
	volatile uint32_t x910 = 20343U;
	int32_t x911 = INT32_MIN;
	int32_t t197 = -867;

    t197 = (((x909^x910)!=x911)-x912);

    if (t197 != -32766) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x917 = INT64_MIN;
	volatile uint32_t x918 = 119U;
	int16_t x919 = INT16_MAX;
	int8_t x920 = INT8_MAX;
	static int32_t t198 = -62878406;

    t198 = (((x917^x918)!=x919)-x920);

    if (t198 != -126) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x921 = 96U;
	static int32_t x923 = -1;
	volatile uint8_t x924 = 1U;
	volatile int32_t t199 = -20189;

    t199 = (((x921^x922)!=x923)-x924);

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

