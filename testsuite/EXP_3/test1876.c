
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

static int16_t x7 = 487;
int32_t t1 = 39304;
volatile uint32_t x9 = 94615494U;
static volatile int64_t x16 = -1LL;
volatile int32_t x17 = -61718470;
uint32_t x19 = 17U;
volatile uint64_t x23 = 6332411158571LLU;
static int16_t x25 = INT16_MIN;
static int32_t t6 = -4704200;
static volatile uint8_t x30 = 11U;
uint32_t x31 = 7551U;
uint64_t x32 = 59261972351LLU;
volatile int32_t t7 = 112833781;
int8_t x33 = INT8_MIN;
volatile int32_t t9 = 64520613;
static int64_t x42 = -14447154LL;
static volatile uint8_t x43 = 9U;
uint64_t x46 = 1811327096LLU;
uint64_t x49 = UINT64_MAX;
int64_t x50 = INT64_MIN;
static int32_t x55 = INT32_MIN;
int8_t x59 = INT8_MIN;
uint32_t x85 = 12388U;
int16_t x90 = INT16_MIN;
int32_t t22 = 5;
static uint32_t x96 = 53892U;
int64_t x103 = INT64_MIN;
volatile int32_t t25 = 190228;
volatile uint32_t x111 = 6U;
int16_t x113 = 9;
int64_t x117 = INT64_MAX;
volatile int16_t x121 = -1;
volatile uint64_t x126 = UINT64_MAX;
static int32_t t31 = -150583645;
uint8_t x137 = 1U;
static int64_t x139 = INT64_MIN;
static int32_t x146 = INT32_MAX;
volatile int16_t x147 = -1;
int8_t x153 = -1;
volatile int32_t t38 = -794523;
int8_t x158 = -1;
int32_t x159 = -901033722;
volatile int32_t t39 = -29162;
static int8_t x164 = 10;
volatile int32_t t40 = 17;
volatile int32_t t41 = 6748;
uint64_t x173 = 1977197941282370LLU;
uint16_t x176 = 408U;
static uint64_t x180 = 586195324LLU;
static volatile int64_t x187 = -42798405LL;
int32_t t46 = -41963;
int32_t x189 = INT32_MAX;
static int16_t x190 = 67;
int64_t x193 = INT64_MAX;
uint16_t x196 = 9057U;
static volatile uint16_t x201 = 1376U;
uint64_t x202 = 36009855926886LLU;
static uint8_t x210 = 3U;
static uint32_t x218 = 19U;
int32_t t54 = 22;
uint64_t x223 = UINT64_MAX;
uint32_t x229 = 1208963790U;
int32_t t57 = -31631;
int64_t x237 = 0LL;
uint8_t x238 = UINT8_MAX;
uint16_t x241 = 486U;
int32_t t60 = 60083460;
static int32_t x249 = 13;
volatile uint32_t x256 = 1U;
int32_t t63 = 433887536;
static uint64_t x259 = 907436435341LLU;
int32_t x263 = INT32_MAX;
volatile int16_t x265 = INT16_MIN;
int64_t x274 = -1LL;
volatile uint8_t x277 = 1U;
int64_t x281 = -19472283LL;
static volatile int8_t x286 = INT8_MAX;
static uint8_t x292 = UINT8_MAX;
int32_t t72 = -181053;
uint8_t x296 = UINT8_MAX;
uint16_t x303 = UINT16_MAX;
int64_t x304 = INT64_MIN;
static volatile uint32_t x312 = 177559028U;
static volatile int64_t x316 = -1LL;
uint8_t x328 = 65U;
volatile int8_t x329 = -1;
int16_t x331 = -6;
int16_t x333 = INT16_MAX;
volatile int64_t x337 = 135877924LL;
volatile uint8_t x338 = 7U;
int32_t x340 = INT32_MIN;
int32_t t86 = -178671;
volatile uint32_t x356 = UINT32_MAX;
int8_t x357 = 6;
volatile int32_t t89 = 194702546;
uint8_t x365 = UINT8_MAX;
int8_t x369 = -1;
static volatile uint8_t x375 = 31U;
int32_t t93 = -85;
int32_t t94 = -519152;
static int8_t x387 = 10;
int32_t x392 = INT32_MIN;
int16_t x397 = -30;
int8_t x400 = INT8_MIN;
int32_t x409 = INT32_MIN;
int32_t x414 = INT32_MAX;
uint16_t x420 = 3247U;
volatile uint8_t x422 = 10U;
static uint8_t x424 = 64U;
volatile uint32_t x426 = 1666129U;
volatile int32_t t106 = 37456;
int16_t x435 = INT16_MIN;
int64_t x436 = INT64_MIN;
static uint8_t x438 = 95U;
volatile int32_t t110 = -14353503;
uint8_t x446 = 0U;
static uint32_t x447 = 104200662U;
static uint32_t x448 = 36663U;
int64_t x452 = 4789930571LL;
int8_t x458 = 0;
int32_t x466 = -3491060;
uint8_t x467 = 1U;
volatile int32_t t117 = -2;
volatile int32_t x477 = -1;
static int8_t x480 = INT8_MIN;
int64_t x483 = INT64_MIN;
static int16_t x484 = INT16_MAX;
static int32_t x494 = INT32_MIN;
static int32_t t123 = 430048;
int32_t t125 = -1;
int32_t x506 = -101;
int32_t x520 = INT32_MAX;
int16_t x524 = -41;
int8_t x526 = -4;
volatile int32_t t131 = 179;
int8_t x534 = INT8_MIN;
uint32_t x540 = 12539404U;
static int64_t x542 = INT64_MIN;
static int16_t x543 = INT16_MAX;
volatile int32_t t135 = 246402236;
int64_t x555 = -1LL;
volatile int32_t x564 = INT32_MIN;
static volatile int32_t t140 = -13223913;
int8_t x566 = -3;
int32_t t141 = 1507;
uint32_t x570 = UINT32_MAX;
static int32_t t142 = -17;
int8_t x579 = -1;
int16_t x581 = -9568;
int32_t x588 = 357043151;
int32_t t146 = -1;
volatile int32_t t147 = 1;
int16_t x593 = INT16_MIN;
volatile int64_t x603 = -31829LL;
int16_t x607 = INT16_MIN;
static volatile int32_t t152 = 178;
int32_t x613 = -1;
uint64_t x614 = UINT64_MAX;
uint16_t x616 = 6U;
int16_t x632 = 62;
uint16_t x637 = 30561U;
static volatile int32_t x640 = -1;
int16_t x642 = 60;
int64_t x643 = INT64_MIN;
int32_t t160 = -6;
volatile int64_t x648 = INT64_MIN;
int16_t x649 = 15491;
volatile int8_t x653 = -3;
volatile int32_t t163 = 130220;
int16_t x661 = 499;
int8_t x663 = 0;
int64_t x664 = INT64_MIN;
volatile int32_t t165 = -759;
int32_t x668 = 3;
int32_t t166 = 1830;
int16_t x670 = 57;
int32_t t167 = 28759695;
uint8_t x682 = 49U;
int8_t x688 = INT8_MIN;
volatile int32_t t171 = 46115;
int64_t x692 = -1LL;
int32_t t172 = -13013470;
static int16_t x694 = -1;
volatile int8_t x705 = INT8_MIN;
volatile int16_t x709 = -1;
volatile int32_t t178 = 2295;
int8_t x717 = INT8_MIN;
volatile int32_t t182 = -1;
static int16_t x734 = INT16_MIN;
int32_t x741 = INT32_MAX;
int64_t x742 = -7LL;
volatile int64_t x744 = INT64_MAX;
volatile int32_t t185 = 7902;
static uint8_t x746 = 1U;
static uint8_t x748 = 26U;
static int8_t x752 = -1;
static int8_t x759 = INT8_MIN;
volatile int32_t t189 = -443;
volatile uint16_t x763 = 6U;
int32_t t190 = -252981;
int64_t x765 = -1LL;
static volatile int32_t t192 = 0;
static volatile int8_t x774 = INT8_MIN;
volatile uint64_t x776 = 14704466LLU;
int32_t t193 = -2;
static volatile int64_t x780 = INT64_MIN;
volatile int32_t t194 = -4828209;
volatile int32_t t196 = 1;
int64_t x792 = -1LL;
volatile int32_t t197 = 29066;
volatile int8_t x793 = INT8_MAX;
int32_t t198 = -1;
int32_t x798 = -35384207;
int32_t x799 = INT32_MIN;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	uint32_t x2 = 90U;
	int8_t x3 = 7;
	int64_t x4 = INT64_MIN;
	int32_t t0 = 3;

    t0 = ((x1==x2)^(x3<=x4));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 123095U;
	volatile int16_t x6 = INT16_MIN;
	int8_t x8 = INT8_MAX;

    t1 = ((x5==x6)^(x7<=x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint32_t x10 = 3526U;
	static int32_t x11 = INT32_MAX;
	uint64_t x12 = 745419LLU;
	int32_t t2 = 18832;

    t2 = ((x9==x10)^(x11<=x12));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint16_t x13 = 6U;
	int16_t x14 = INT16_MIN;
	volatile uint8_t x15 = 43U;
	int32_t t3 = -7290;

    t3 = ((x13==x14)^(x15<=x16));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x18 = -41;
	int16_t x20 = -124;
	int32_t t4 = -4455501;

    t4 = ((x17==x18)^(x19<=x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 21318899U;
	static uint16_t x22 = UINT16_MAX;
	int16_t x24 = 66;
	static int32_t t5 = -11833;

    t5 = ((x21==x22)^(x23<=x24));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MAX;
	int8_t x28 = -1;

    t6 = ((x25==x26)^(x27<=x28));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;

    t7 = ((x29==x30)^(x31<=x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 3U;
	int64_t x35 = -46260601633LL;
	uint32_t x36 = 16424357U;
	volatile int32_t t8 = 19;

    t8 = ((x33==x34)^(x35<=x36));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x37 = 2U;
	int32_t x38 = -29;
	int16_t x39 = INT16_MIN;
	uint32_t x40 = UINT32_MAX;

    t9 = ((x37==x38)^(x39<=x40));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 950478477146LLU;
	volatile int64_t x44 = INT64_MIN;
	int32_t t10 = -79809;

    t10 = ((x41==x42)^(x43<=x44));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = 264601;
	int32_t x47 = INT32_MIN;
	int64_t x48 = -1LL;
	volatile int32_t t11 = 0;

    t11 = ((x45==x46)^(x47<=x48));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x51 = -1;
	int8_t x52 = INT8_MAX;
	int32_t t12 = -1;

    t12 = ((x49==x50)^(x51<=x52));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MIN;
	volatile int16_t x54 = INT16_MIN;
	int16_t x56 = -2778;
	volatile int32_t t13 = -277179173;

    t13 = ((x53==x54)^(x55<=x56));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x57 = UINT16_MAX;
	uint8_t x58 = 5U;
	uint32_t x60 = 6U;
	int32_t t14 = 16736;

    t14 = ((x57==x58)^(x59<=x60));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = 20;
	int64_t x62 = INT64_MIN;
	volatile int8_t x63 = -1;
	volatile int16_t x64 = 6;
	int32_t t15 = 0;

    t15 = ((x61==x62)^(x63<=x64));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	static int8_t x66 = INT8_MIN;
	static int8_t x67 = INT8_MAX;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 392359653;

    t16 = ((x65==x66)^(x67<=x68));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	volatile uint16_t x70 = 1U;
	int64_t x71 = 11LL;
	volatile uint32_t x72 = 479U;
	static int32_t t17 = -37157994;

    t17 = ((x69==x70)^(x71<=x72));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 153U;
	int8_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	static uint32_t x76 = 86U;
	volatile int32_t t18 = 26599274;

    t18 = ((x73==x74)^(x75<=x76));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 224023067975LLU;
	int8_t x78 = INT8_MIN;
	uint16_t x79 = 28U;
	static int32_t x80 = 28;
	int32_t t19 = -18818923;

    t19 = ((x77==x78)^(x79<=x80));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MIN;
	uint64_t x83 = UINT64_MAX;
	volatile int8_t x84 = -63;
	volatile int32_t t20 = 34008392;

    t20 = ((x81==x82)^(x83<=x84));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x86 = 2;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MAX;
	volatile int32_t t21 = -59804630;

    t21 = ((x85==x86)^(x87<=x88));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x89 = -113;
	static int64_t x91 = -1LL;
	static uint16_t x92 = 1U;

    t22 = ((x89==x90)^(x91<=x92));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint16_t x93 = 2U;
	int16_t x94 = INT16_MIN;
	int32_t x95 = -1;
	volatile int32_t t23 = 4;

    t23 = ((x93==x94)^(x95<=x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 25276U;
	int16_t x98 = -1;
	int8_t x99 = -13;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 19447;

    t24 = ((x97==x98)^(x99<=x100));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x101 = 2351519U;
	uint8_t x102 = UINT8_MAX;
	volatile int64_t x104 = INT64_MAX;

    t25 = ((x101==x102)^(x103<=x104));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = 60;
	static int16_t x106 = INT16_MIN;
	int32_t x107 = -35772946;
	static int64_t x108 = INT64_MIN;
	int32_t t26 = 5;

    t26 = ((x105==x106)^(x107<=x108));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = 55;
	uint64_t x110 = 6979442LLU;
	uint16_t x112 = 3676U;
	static volatile int32_t t27 = -19;

    t27 = ((x109==x110)^(x111<=x112));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x114 = 7U;
	int16_t x115 = 1;
	static int64_t x116 = INT64_MAX;
	int32_t t28 = -28;

    t28 = ((x113==x114)^(x115<=x116));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MIN;
	static int32_t t29 = 8436;

    t29 = ((x117==x118)^(x119<=x120));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	volatile int16_t x124 = -1;
	volatile int32_t t30 = 127;

    t30 = ((x121==x122)^(x123<=x124));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x125 = INT16_MIN;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = INT8_MAX;

    t31 = ((x125==x126)^(x127<=x128));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 10U;
	uint8_t x130 = 21U;
	static int16_t x131 = 1;
	int8_t x132 = 0;
	volatile int32_t t32 = 1708496;

    t32 = ((x129==x130)^(x131<=x132));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = -332052794;
	static volatile int8_t x134 = -1;
	uint32_t x135 = 1U;
	static int32_t x136 = -2208512;
	static volatile int32_t t33 = 3935316;

    t33 = ((x133==x134)^(x135<=x136));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x138 = -3;
	uint64_t x140 = 503257891245LLU;
	volatile int32_t t34 = -198847641;

    t34 = ((x137==x138)^(x139<=x140));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	static int32_t t35 = -44983;

    t35 = ((x141==x142)^(x143<=x144));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -3755908088LL;
	volatile int8_t x148 = 0;
	volatile int32_t t36 = -1728;

    t36 = ((x145==x146)^(x147<=x148));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = -1LL;
	int32_t x150 = -1;
	static int16_t x151 = INT16_MIN;
	static volatile int64_t x152 = INT64_MAX;
	volatile int32_t t37 = 2299483;

    t37 = ((x149==x150)^(x151<=x152));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x154 = INT16_MAX;
	uint64_t x155 = 15289366872640LLU;
	static uint64_t x156 = 745985LLU;

    t38 = ((x153==x154)^(x155<=x156));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x157 = 547095500218114380LLU;
	int8_t x160 = -27;

    t39 = ((x157==x158)^(x159<=x160));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 1779425244U;
	int8_t x162 = INT8_MIN;
	int8_t x163 = -1;

    t40 = ((x161==x162)^(x163<=x164));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x165 = 26U;
	int64_t x166 = -1LL;
	int64_t x167 = INT64_MIN;
	static int64_t x168 = INT64_MAX;

    t41 = ((x165==x166)^(x167<=x168));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint8_t x169 = 25U;
	int16_t x170 = 0;
	int32_t x171 = -1;
	int16_t x172 = -8237;
	static volatile int32_t t42 = 45;

    t42 = ((x169==x170)^(x171<=x172));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x174 = INT64_MIN;
	uint64_t x175 = 1746701157405LLU;
	volatile int32_t t43 = 238;

    t43 = ((x173==x174)^(x175<=x176));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x177 = -6873281321LL;
	static volatile uint32_t x178 = 9563U;
	uint32_t x179 = UINT32_MAX;
	int32_t t44 = -2074946;

    t44 = ((x177==x178)^(x179<=x180));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MAX;
	static uint8_t x182 = UINT8_MAX;
	int32_t x183 = -501440;
	static int16_t x184 = -1;
	int32_t t45 = -23;

    t45 = ((x181==x182)^(x183<=x184));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x185 = INT8_MAX;
	int16_t x186 = INT16_MIN;
	uint8_t x188 = UINT8_MAX;

    t46 = ((x185==x186)^(x187<=x188));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x191 = 4225LLU;
	uint16_t x192 = 2253U;
	int32_t t47 = -1625977;

    t47 = ((x189==x190)^(x191<=x192));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x194 = INT32_MIN;
	int16_t x195 = 4;
	static int32_t t48 = -1190095;

    t48 = ((x193==x194)^(x195<=x196));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x197 = 201LL;
	volatile int32_t x198 = -56986;
	static int32_t x199 = 185125;
	uint8_t x200 = 8U;
	int32_t t49 = -30355781;

    t49 = ((x197==x198)^(x199<=x200));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x203 = INT16_MIN;
	volatile int64_t x204 = 4430129065053916LL;
	static volatile int32_t t50 = -148;

    t50 = ((x201==x202)^(x203<=x204));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = 61;
	int8_t x206 = INT8_MIN;
	int32_t x207 = -1;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 30335139;

    t51 = ((x205==x206)^(x207<=x208));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x209 = -1;
	int16_t x211 = -2;
	int16_t x212 = INT16_MAX;
	int32_t t52 = 726456089;

    t52 = ((x209==x210)^(x211<=x212));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x213 = INT64_MAX;
	int32_t x214 = -33;
	int8_t x215 = INT8_MAX;
	volatile uint8_t x216 = 12U;
	int32_t t53 = -88898;

    t53 = ((x213==x214)^(x215<=x216));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x217 = 50LL;
	int16_t x219 = -1;
	int64_t x220 = INT64_MIN;

    t54 = ((x217==x218)^(x219<=x220));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	uint64_t x224 = UINT64_MAX;
	volatile int32_t t55 = 129213835;

    t55 = ((x221==x222)^(x223<=x224));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x225 = 247937176616301633LLU;
	int16_t x226 = 1;
	volatile int32_t x227 = -434;
	static int8_t x228 = INT8_MIN;
	static int32_t t56 = 123995;

    t56 = ((x225==x226)^(x227<=x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x230 = 5;
	uint64_t x231 = 9LLU;
	int16_t x232 = INT16_MIN;

    t57 = ((x229==x230)^(x231<=x232));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	uint64_t x234 = 77LLU;
	int32_t x235 = INT32_MAX;
	int64_t x236 = INT64_MIN;
	volatile int32_t t58 = 331306;

    t58 = ((x233==x234)^(x235<=x236));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x239 = INT64_MAX;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = 38;

    t59 = ((x237==x238)^(x239<=x240));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x242 = INT32_MIN;
	uint32_t x243 = 7121U;
	static uint64_t x244 = 9534LLU;

    t60 = ((x241==x242)^(x243<=x244));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint64_t x245 = 4338982363751165LLU;
	uint16_t x246 = 24908U;
	int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 21964778;

    t61 = ((x245==x246)^(x247<=x248));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x250 = INT16_MIN;
	uint16_t x251 = 7U;
	int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = -63529332;

    t62 = ((x249==x250)^(x251<=x252));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x253 = INT64_MAX;
	volatile int8_t x254 = -1;
	volatile uint32_t x255 = 326456U;

    t63 = ((x253==x254)^(x255<=x256));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x257 = -53;
	int32_t x258 = INT32_MIN;
	int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -4258639;

    t64 = ((x257==x258)^(x259<=x260));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x261 = INT16_MIN;
	uint8_t x262 = 1U;
	int8_t x264 = INT8_MIN;
	int32_t t65 = -3;

    t65 = ((x261==x262)^(x263<=x264));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x266 = INT8_MIN;
	static uint32_t x267 = 1496037U;
	uint32_t x268 = 138U;
	volatile int32_t t66 = -167;

    t66 = ((x265==x266)^(x267<=x268));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x269 = -1;
	int8_t x270 = -1;
	uint32_t x271 = 78735858U;
	int32_t x272 = -1132966;
	static volatile int32_t t67 = 48;

    t67 = ((x269==x270)^(x271<=x272));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x273 = UINT64_MAX;
	static int16_t x275 = -11;
	volatile int64_t x276 = INT64_MAX;
	volatile int32_t t68 = -62805;

    t68 = ((x273==x274)^(x275<=x276));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = INT32_MIN;
	uint32_t x279 = 240201U;
	uint32_t x280 = 31514U;
	int32_t t69 = -2760565;

    t69 = ((x277==x278)^(x279<=x280));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x282 = INT64_MAX;
	int16_t x283 = -1;
	int64_t x284 = INT64_MIN;
	int32_t t70 = -309062;

    t70 = ((x281==x282)^(x283<=x284));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x285 = 475898387223514LLU;
	static volatile int8_t x287 = -1;
	uint64_t x288 = 26LLU;
	int32_t t71 = 100498;

    t71 = ((x285==x286)^(x287<=x288));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x289 = -1;
	int32_t x290 = -1;
	int16_t x291 = INT16_MIN;

    t72 = ((x289==x290)^(x291<=x292));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = 21;
	static int32_t x295 = INT32_MAX;
	volatile int32_t t73 = -551239192;

    t73 = ((x293==x294)^(x295<=x296));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	uint16_t x298 = 5U;
	uint8_t x299 = 1U;
	uint64_t x300 = 55LLU;
	volatile int32_t t74 = 0;

    t74 = ((x297==x298)^(x299<=x300));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x301 = UINT64_MAX;
	static volatile int16_t x302 = INT16_MAX;
	volatile int32_t t75 = 158657068;

    t75 = ((x301==x302)^(x303<=x304));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint8_t x305 = 3U;
	uint8_t x306 = UINT8_MAX;
	volatile uint16_t x307 = 9U;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = 217;

    t76 = ((x305==x306)^(x307<=x308));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = -35;
	static uint32_t x311 = UINT32_MAX;
	int32_t t77 = 35287;

    t77 = ((x309==x310)^(x311<=x312));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x313 = INT32_MIN;
	static int32_t x314 = INT32_MAX;
	static int16_t x315 = INT16_MIN;
	int32_t t78 = 1559;

    t78 = ((x313==x314)^(x315<=x316));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x317 = INT16_MIN;
	static uint8_t x318 = 17U;
	uint64_t x319 = UINT64_MAX;
	static uint16_t x320 = 8U;
	volatile int32_t t79 = -59034817;

    t79 = ((x317==x318)^(x319<=x320));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x321 = 2074749408334009LL;
	int64_t x322 = -1LL;
	int32_t x323 = 1064053548;
	uint64_t x324 = 142187LLU;
	int32_t t80 = 116;

    t80 = ((x321==x322)^(x323<=x324));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x325 = 383160U;
	uint32_t x326 = UINT32_MAX;
	uint8_t x327 = 15U;
	volatile int32_t t81 = 10074;

    t81 = ((x325==x326)^(x327<=x328));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x330 = INT16_MAX;
	int32_t x332 = -1;
	volatile int32_t t82 = 10008934;

    t82 = ((x329==x330)^(x331<=x332));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x334 = INT64_MIN;
	int64_t x335 = -1LL;
	int16_t x336 = INT16_MAX;
	volatile int32_t t83 = 32852;

    t83 = ((x333==x334)^(x335<=x336));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x339 = 226454U;
	volatile int32_t t84 = 206119;

    t84 = ((x337==x338)^(x339<=x340));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int32_t x342 = 0;
	static int16_t x343 = -1;
	volatile int64_t x344 = -1696680434LL;
	volatile int32_t t85 = -39335;

    t85 = ((x341==x342)^(x343<=x344));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MAX;
	volatile int16_t x347 = 212;
	static int16_t x348 = INT16_MIN;

    t86 = ((x345==x346)^(x347<=x348));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int32_t x349 = -1002;
	uint8_t x350 = UINT8_MAX;
	volatile int64_t x351 = INT64_MAX;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -373;

    t87 = ((x349==x350)^(x351<=x352));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x353 = 234U;
	int16_t x354 = -1088;
	volatile int32_t x355 = 6066692;
	static volatile int32_t t88 = 55295;

    t88 = ((x353==x354)^(x355<=x356));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x358 = UINT16_MAX;
	static int8_t x359 = INT8_MIN;
	volatile int16_t x360 = INT16_MAX;

    t89 = ((x357==x358)^(x359<=x360));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x361 = INT16_MAX;
	int16_t x362 = 84;
	int16_t x363 = INT16_MIN;
	volatile uint32_t x364 = UINT32_MAX;
	int32_t t90 = -3108788;

    t90 = ((x361==x362)^(x363<=x364));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x366 = 4195;
	static int8_t x367 = 0;
	volatile uint64_t x368 = 1014547469836LLU;
	static volatile int32_t t91 = 20112766;

    t91 = ((x365==x366)^(x367<=x368));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x370 = -3;
	uint16_t x371 = 57U;
	uint8_t x372 = 55U;
	volatile int32_t t92 = 10163042;

    t92 = ((x369==x370)^(x371<=x372));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	volatile int16_t x374 = -13;
	int64_t x376 = -1LL;

    t93 = ((x373==x374)^(x375<=x376));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x377 = 6;
	int32_t x378 = INT32_MIN;
	static volatile uint16_t x379 = UINT16_MAX;
	int32_t x380 = 1415051;

    t94 = ((x377==x378)^(x379<=x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x381 = 41U;
	int64_t x382 = INT64_MIN;
	static uint64_t x383 = 1868788035900LLU;
	uint64_t x384 = 46510305LLU;
	int32_t t95 = 3;

    t95 = ((x381==x382)^(x383<=x384));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	int64_t x386 = -1LL;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 7828710;

    t96 = ((x385==x386)^(x387<=x388));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x389 = INT8_MIN;
	int64_t x390 = INT64_MIN;
	int16_t x391 = -1;
	volatile int32_t t97 = 2;

    t97 = ((x389==x390)^(x391<=x392));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x393 = 5923554;
	uint64_t x394 = 13162559LLU;
	volatile int32_t x395 = 51332989;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = 238376383;

    t98 = ((x393==x394)^(x395<=x396));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x398 = 7979U;
	int8_t x399 = INT8_MIN;
	int32_t t99 = -3;

    t99 = ((x397==x398)^(x399<=x400));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MAX;
	int16_t x402 = INT16_MAX;
	int16_t x403 = -1;
	int32_t x404 = -1;
	volatile int32_t t100 = 1987;

    t100 = ((x401==x402)^(x403<=x404));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x405 = INT64_MAX;
	int16_t x406 = INT16_MAX;
	volatile int64_t x407 = -27115926764LL;
	volatile int64_t x408 = 18824473990LL;
	volatile int32_t t101 = -310732;

    t101 = ((x405==x406)^(x407<=x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x410 = -1;
	volatile uint32_t x411 = 72100525U;
	int8_t x412 = 59;
	int32_t t102 = -1;

    t102 = ((x409==x410)^(x411<=x412));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x413 = INT32_MIN;
	volatile uint32_t x415 = 860U;
	uint64_t x416 = UINT64_MAX;
	static int32_t t103 = -3135310;

    t103 = ((x413==x414)^(x415<=x416));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x417 = -1LL;
	volatile uint16_t x418 = 204U;
	uint64_t x419 = 420960967LLU;
	int32_t t104 = -101227771;

    t104 = ((x417==x418)^(x419<=x420));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x421 = INT32_MAX;
	uint32_t x423 = 58564506U;
	volatile int32_t t105 = 67;

    t105 = ((x421==x422)^(x423<=x424));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	static int32_t x427 = -463574;
	uint8_t x428 = 0U;

    t106 = ((x425==x426)^(x427<=x428));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = INT8_MIN;
	int64_t x430 = -67325LL;
	int16_t x431 = INT16_MIN;
	int64_t x432 = -1LL;
	int32_t t107 = 3487;

    t107 = ((x429==x430)^(x431<=x432));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 1531596169879488508LLU;
	uint16_t x434 = 17126U;
	volatile int32_t t108 = 734984715;

    t108 = ((x433==x434)^(x435<=x436));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x437 = 1064397466801161900LL;
	int8_t x439 = -4;
	int32_t x440 = INT32_MIN;
	static volatile int32_t t109 = 1;

    t109 = ((x437==x438)^(x439<=x440));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x441 = 381U;
	int64_t x442 = -6767035974LL;
	static int8_t x443 = INT8_MIN;
	volatile int64_t x444 = INT64_MAX;

    t110 = ((x441==x442)^(x443<=x444));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MAX;
	int32_t t111 = 134391929;

    t111 = ((x445==x446)^(x447<=x448));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x449 = -1;
	int64_t x450 = -1LL;
	int64_t x451 = 314114LL;
	int32_t t112 = -2003;

    t112 = ((x449==x450)^(x451<=x452));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x453 = -1;
	int16_t x454 = -1;
	uint64_t x455 = 132LLU;
	static int32_t x456 = INT32_MIN;
	volatile int32_t t113 = -1;

    t113 = ((x453==x454)^(x455<=x456));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x457 = UINT8_MAX;
	int16_t x459 = 0;
	int64_t x460 = INT64_MAX;
	volatile int32_t t114 = 1203;

    t114 = ((x457==x458)^(x459<=x460));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x461 = -1;
	int32_t x462 = -168;
	int16_t x463 = INT16_MIN;
	uint64_t x464 = 36356LLU;
	int32_t t115 = 451;

    t115 = ((x461==x462)^(x463<=x464));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x465 = 258U;
	uint64_t x468 = 48963LLU;
	int32_t t116 = -8;

    t116 = ((x465==x466)^(x467<=x468));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x469 = 1U;
	static int32_t x470 = INT32_MIN;
	static volatile int32_t x471 = -208;
	uint8_t x472 = UINT8_MAX;

    t117 = ((x469==x470)^(x471<=x472));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = UINT16_MAX;
	static int64_t x474 = INT64_MIN;
	uint16_t x475 = 450U;
	static int64_t x476 = 64321996798LL;
	int32_t t118 = -1;

    t118 = ((x473==x474)^(x475<=x476));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x478 = 9;
	int32_t x479 = INT32_MAX;
	static int32_t t119 = 317;

    t119 = ((x477==x478)^(x479<=x480));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint32_t x481 = 3U;
	int8_t x482 = INT8_MAX;
	static volatile int32_t t120 = -472;

    t120 = ((x481==x482)^(x483<=x484));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = 39903653607699572LL;
	static uint64_t x486 = UINT64_MAX;
	volatile int16_t x487 = INT16_MIN;
	uint32_t x488 = 80628U;
	int32_t t121 = -42;

    t121 = ((x485==x486)^(x487<=x488));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x489 = INT16_MIN;
	int8_t x490 = INT8_MIN;
	int8_t x491 = 16;
	static uint64_t x492 = 27556007712371LLU;
	volatile int32_t t122 = 210;

    t122 = ((x489==x490)^(x491<=x492));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x493 = -1;
	volatile int32_t x495 = 851757;
	uint32_t x496 = UINT32_MAX;

    t123 = ((x493==x494)^(x495<=x496));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = 1;
	int16_t x498 = INT16_MIN;
	volatile int64_t x499 = -444LL;
	uint32_t x500 = 46216U;
	int32_t t124 = 0;

    t124 = ((x497==x498)^(x499<=x500));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int32_t x501 = INT32_MIN;
	int64_t x502 = -1LL;
	uint16_t x503 = 111U;
	volatile int16_t x504 = INT16_MIN;

    t125 = ((x501==x502)^(x503<=x504));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x505 = -5;
	int64_t x507 = INT64_MAX;
	static uint64_t x508 = UINT64_MAX;
	int32_t t126 = -219393;

    t126 = ((x505==x506)^(x507<=x508));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x509 = 1U;
	int32_t x510 = INT32_MIN;
	volatile uint16_t x511 = 9746U;
	static uint64_t x512 = UINT64_MAX;
	static int32_t t127 = 6445;

    t127 = ((x509==x510)^(x511<=x512));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x513 = -455;
	int32_t x514 = INT32_MIN;
	volatile uint8_t x515 = UINT8_MAX;
	uint32_t x516 = 702U;
	volatile int32_t t128 = 263;

    t128 = ((x513==x514)^(x515<=x516));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x517 = 1;
	static int32_t x518 = -1;
	uint16_t x519 = 2U;
	int32_t t129 = 22363;

    t129 = ((x517==x518)^(x519<=x520));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x521 = -14342;
	static volatile uint8_t x522 = UINT8_MAX;
	uint16_t x523 = 279U;
	volatile int32_t t130 = -2088;

    t130 = ((x521==x522)^(x523<=x524));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x525 = 226937728U;
	static int64_t x527 = -1LL;
	static int16_t x528 = INT16_MAX;

    t131 = ((x525==x526)^(x527<=x528));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x529 = INT64_MAX;
	volatile uint16_t x530 = 338U;
	int32_t x531 = -1;
	uint64_t x532 = 1668020478919901513LLU;
	volatile int32_t t132 = -479929;

    t132 = ((x529==x530)^(x531<=x532));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = 9650465309LLU;
	volatile int16_t x535 = 1837;
	volatile uint8_t x536 = UINT8_MAX;
	int32_t t133 = -199;

    t133 = ((x533==x534)^(x535<=x536));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint64_t x537 = 91LLU;
	int8_t x538 = INT8_MIN;
	uint64_t x539 = 405LLU;
	volatile int32_t t134 = -6612957;

    t134 = ((x537==x538)^(x539<=x540));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x541 = 11U;
	int32_t x544 = INT32_MIN;

    t135 = ((x541==x542)^(x543<=x544));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x545 = 21U;
	uint64_t x546 = 27757975LLU;
	uint32_t x547 = 1824053510U;
	static uint8_t x548 = 27U;
	volatile int32_t t136 = -57;

    t136 = ((x545==x546)^(x547<=x548));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = -1;
	int8_t x550 = -7;
	uint32_t x551 = UINT32_MAX;
	int8_t x552 = INT8_MIN;
	volatile int32_t t137 = 15028;

    t137 = ((x549==x550)^(x551<=x552));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int32_t x553 = INT32_MIN;
	int8_t x554 = 3;
	int16_t x556 = INT16_MIN;
	int32_t t138 = -1;

    t138 = ((x553==x554)^(x555<=x556));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int16_t x558 = 5;
	int16_t x559 = -1;
	int64_t x560 = INT64_MIN;
	volatile int32_t t139 = -1;

    t139 = ((x557==x558)^(x559<=x560));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	uint16_t x562 = 0U;
	uint16_t x563 = 0U;

    t140 = ((x561==x562)^(x563<=x564));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = 1084122LL;
	int32_t x567 = -45745201;
	static int64_t x568 = INT64_MIN;

    t141 = ((x565==x566)^(x567<=x568));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x569 = UINT64_MAX;
	uint8_t x571 = 26U;
	int16_t x572 = INT16_MAX;

    t142 = ((x569==x570)^(x571<=x572));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x573 = -1;
	uint16_t x574 = UINT16_MAX;
	int64_t x575 = -892764LL;
	static int32_t x576 = -1;
	volatile int32_t t143 = 38;

    t143 = ((x573==x574)^(x575<=x576));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x577 = INT16_MAX;
	static int64_t x578 = -738360070521970814LL;
	int16_t x580 = INT16_MIN;
	volatile int32_t t144 = 4;

    t144 = ((x577==x578)^(x579<=x580));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x582 = -1LL;
	int64_t x583 = INT64_MAX;
	int32_t x584 = -1;
	volatile int32_t t145 = -839242;

    t145 = ((x581==x582)^(x583<=x584));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = INT8_MAX;
	static volatile uint8_t x586 = 74U;
	uint8_t x587 = 2U;

    t146 = ((x585==x586)^(x587<=x588));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = INT16_MAX;
	uint16_t x590 = 0U;
	volatile int16_t x591 = -1;
	volatile int32_t x592 = INT32_MAX;

    t147 = ((x589==x590)^(x591<=x592));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x594 = 214572969186409951LL;
	uint8_t x595 = UINT8_MAX;
	int16_t x596 = -2373;
	volatile int32_t t148 = 1501;

    t148 = ((x593==x594)^(x595<=x596));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x597 = 3355U;
	uint16_t x598 = UINT16_MAX;
	int8_t x599 = 3;
	int32_t x600 = -61;
	int32_t t149 = -3452;

    t149 = ((x597==x598)^(x599<=x600));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -2;
	int16_t x602 = -2327;
	int64_t x604 = INT64_MIN;
	static int32_t t150 = 146;

    t150 = ((x601==x602)^(x603<=x604));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x605 = 23U;
	uint32_t x606 = UINT32_MAX;
	static int16_t x608 = INT16_MIN;
	volatile int32_t t151 = -97948;

    t151 = ((x605==x606)^(x607<=x608));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x609 = 106;
	static int64_t x610 = 2561628449548LL;
	volatile int64_t x611 = INT64_MIN;
	int32_t x612 = 206600;

    t152 = ((x609==x610)^(x611<=x612));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x615 = 25U;
	volatile int32_t t153 = 51;

    t153 = ((x613==x614)^(x615<=x616));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint32_t x617 = UINT32_MAX;
	int32_t x618 = 707;
	static volatile int32_t x619 = INT32_MAX;
	int16_t x620 = -126;
	volatile int32_t t154 = 0;

    t154 = ((x617==x618)^(x619<=x620));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = 9109;
	int32_t x622 = INT32_MIN;
	volatile int32_t x623 = -1;
	volatile int8_t x624 = INT8_MIN;
	int32_t t155 = 3;

    t155 = ((x621==x622)^(x623<=x624));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = INT32_MIN;
	int16_t x626 = 36;
	uint8_t x627 = 2U;
	uint32_t x628 = 215679U;
	int32_t t156 = -88658560;

    t156 = ((x625==x626)^(x627<=x628));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = UINT64_MAX;
	static int8_t x630 = INT8_MIN;
	uint16_t x631 = UINT16_MAX;
	int32_t t157 = 3;

    t157 = ((x629==x630)^(x631<=x632));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x633 = INT16_MIN;
	int64_t x634 = INT64_MIN;
	uint32_t x635 = UINT32_MAX;
	int64_t x636 = -527301398917752327LL;
	int32_t t158 = 8078;

    t158 = ((x633==x634)^(x635<=x636));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x638 = 77U;
	static int64_t x639 = INT64_MIN;
	static int32_t t159 = -21754;

    t159 = ((x637==x638)^(x639<=x640));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x641 = INT64_MIN;
	int32_t x644 = INT32_MAX;

    t160 = ((x641==x642)^(x643<=x644));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x645 = UINT32_MAX;
	volatile uint16_t x646 = 0U;
	volatile uint32_t x647 = 68378U;
	int32_t t161 = 1;

    t161 = ((x645==x646)^(x647<=x648));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x650 = INT8_MAX;
	static int32_t x651 = -903753;
	int16_t x652 = -1;
	volatile int32_t t162 = 960700999;

    t162 = ((x649==x650)^(x651<=x652));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x654 = INT16_MIN;
	uint64_t x655 = UINT64_MAX;
	uint8_t x656 = 11U;

    t163 = ((x653==x654)^(x655<=x656));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint64_t x657 = UINT64_MAX;
	int32_t x658 = 5444;
	uint16_t x659 = 12U;
	volatile int16_t x660 = 4;
	volatile int32_t t164 = 20669862;

    t164 = ((x657==x658)^(x659<=x660));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x662 = UINT64_MAX;

    t165 = ((x661==x662)^(x663<=x664));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x665 = -1;
	static int16_t x666 = INT16_MAX;
	int64_t x667 = -1012283732371564336LL;

    t166 = ((x665==x666)^(x667<=x668));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x669 = UINT32_MAX;
	uint32_t x671 = 229U;
	static int8_t x672 = INT8_MAX;

    t167 = ((x669==x670)^(x671<=x672));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x673 = INT16_MIN;
	int32_t x674 = INT32_MAX;
	int32_t x675 = INT32_MIN;
	volatile uint64_t x676 = 12291806LLU;
	volatile int32_t t168 = 45589591;

    t168 = ((x673==x674)^(x675<=x676));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x677 = INT16_MIN;
	uint8_t x678 = UINT8_MAX;
	int64_t x679 = INT64_MAX;
	static int8_t x680 = 44;
	volatile int32_t t169 = 880819;

    t169 = ((x677==x678)^(x679<=x680));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x681 = INT16_MIN;
	volatile uint8_t x683 = 96U;
	int8_t x684 = 1;
	int32_t t170 = 4816201;

    t170 = ((x681==x682)^(x683<=x684));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x685 = INT32_MIN;
	int32_t x686 = INT32_MAX;
	uint16_t x687 = 5U;

    t171 = ((x685==x686)^(x687<=x688));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MIN;
	static uint32_t x690 = UINT32_MAX;
	int8_t x691 = INT8_MIN;

    t172 = ((x689==x690)^(x691<=x692));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x693 = INT8_MAX;
	int32_t x695 = -1;
	int8_t x696 = -1;
	volatile int32_t t173 = -28172409;

    t173 = ((x693==x694)^(x695<=x696));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x697 = INT64_MIN;
	int8_t x698 = 1;
	static int32_t x699 = 378300;
	static volatile uint16_t x700 = 0U;
	static int32_t t174 = 4020342;

    t174 = ((x697==x698)^(x699<=x700));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x701 = INT32_MIN;
	int8_t x702 = 10;
	uint32_t x703 = 59642U;
	int64_t x704 = -43967930573133100LL;
	int32_t t175 = 63762;

    t175 = ((x701==x702)^(x703<=x704));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x706 = -1LL;
	int32_t x707 = -1;
	uint8_t x708 = UINT8_MAX;
	volatile int32_t t176 = 235;

    t176 = ((x705==x706)^(x707<=x708));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x710 = UINT8_MAX;
	int8_t x711 = 21;
	volatile int64_t x712 = -1LL;
	volatile int32_t t177 = 8662;

    t177 = ((x709==x710)^(x711<=x712));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x713 = INT32_MIN;
	int32_t x714 = INT32_MIN;
	uint8_t x715 = 69U;
	int16_t x716 = INT16_MAX;

    t178 = ((x713==x714)^(x715<=x716));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x718 = UINT16_MAX;
	volatile int32_t x719 = INT32_MIN;
	uint16_t x720 = UINT16_MAX;
	int32_t t179 = -321093;

    t179 = ((x717==x718)^(x719<=x720));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint8_t x721 = UINT8_MAX;
	uint32_t x722 = UINT32_MAX;
	int8_t x723 = INT8_MIN;
	uint8_t x724 = UINT8_MAX;
	int32_t t180 = 5;

    t180 = ((x721==x722)^(x723<=x724));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 3767U;
	int64_t x726 = INT64_MAX;
	int64_t x727 = -201332169LL;
	static int64_t x728 = INT64_MAX;
	static int32_t t181 = -30008859;

    t181 = ((x725==x726)^(x727<=x728));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x729 = -1;
	uint64_t x730 = UINT64_MAX;
	uint64_t x731 = 685LLU;
	int32_t x732 = INT32_MIN;

    t182 = ((x729==x730)^(x731<=x732));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x733 = -1;
	uint16_t x735 = UINT16_MAX;
	int8_t x736 = -1;
	volatile int32_t t183 = -32236;

    t183 = ((x733==x734)^(x735<=x736));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x737 = -1;
	volatile int64_t x738 = -1LL;
	int8_t x739 = -1;
	int8_t x740 = INT8_MAX;
	volatile int32_t t184 = -1324672;

    t184 = ((x737==x738)^(x739<=x740));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint32_t x743 = 38511515U;

    t185 = ((x741==x742)^(x743<=x744));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x745 = INT32_MIN;
	static uint8_t x747 = 30U;
	volatile int32_t t186 = 464376096;

    t186 = ((x745==x746)^(x747<=x748));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x749 = UINT32_MAX;
	static int16_t x750 = 2;
	static int32_t x751 = 2335638;
	int32_t t187 = -2;

    t187 = ((x749==x750)^(x751<=x752));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x753 = -417LL;
	int64_t x754 = INT64_MAX;
	int8_t x755 = -1;
	int8_t x756 = INT8_MIN;
	int32_t t188 = -303420259;

    t188 = ((x753==x754)^(x755<=x756));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile uint16_t x758 = UINT16_MAX;
	static volatile int16_t x760 = INT16_MIN;

    t189 = ((x757==x758)^(x759<=x760));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x761 = 15506LL;
	static int8_t x762 = 3;
	static int64_t x764 = INT64_MAX;

    t190 = ((x761==x762)^(x763<=x764));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint64_t x766 = 161334LLU;
	uint32_t x767 = UINT32_MAX;
	int16_t x768 = 3594;
	volatile int32_t t191 = 7696212;

    t191 = ((x765==x766)^(x767<=x768));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x769 = -7549590;
	volatile int64_t x770 = -1LL;
	uint32_t x771 = UINT32_MAX;
	static int64_t x772 = -784800124053088125LL;

    t192 = ((x769==x770)^(x771<=x772));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x773 = 61;
	volatile int16_t x775 = INT16_MIN;

    t193 = ((x773==x774)^(x775<=x776));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x777 = -1;
	static int32_t x778 = INT32_MIN;
	int16_t x779 = INT16_MIN;

    t194 = ((x777==x778)^(x779<=x780));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x781 = 0;
	volatile int32_t x782 = -1;
	volatile int64_t x783 = -64327267797911LL;
	int8_t x784 = -1;
	int32_t t195 = 440634306;

    t195 = ((x781==x782)^(x783<=x784));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x785 = 23U;
	uint32_t x786 = 5923839U;
	int16_t x787 = -1;
	static int16_t x788 = -1;

    t196 = ((x785==x786)^(x787<=x788));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint16_t x789 = UINT16_MAX;
	volatile int16_t x790 = 1;
	int8_t x791 = 1;

    t197 = ((x789==x790)^(x791<=x792));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x794 = 451120045U;
	uint64_t x795 = 109985294919LLU;
	static int64_t x796 = 102797844735LL;

    t198 = ((x793==x794)^(x795<=x796));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x797 = -1;
	int16_t x800 = -1;
	int32_t t199 = -326486813;

    t199 = ((x797==x798)^(x799<=x800));

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

