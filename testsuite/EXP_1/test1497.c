
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

int16_t x2 = INT16_MIN;
int16_t x8 = INT16_MAX;
static int16_t x9 = INT16_MIN;
volatile uint32_t t2 = UINT32_MAX;
uint16_t x21 = 396U;
uint8_t x38 = UINT8_MAX;
volatile int32_t t9 = 6729604;
volatile int32_t x45 = -465191;
static int64_t x47 = -362124235724639LL;
uint32_t x48 = 31U;
static volatile int32_t t12 = -1656498;
volatile int64_t x56 = INT64_MAX;
int32_t x67 = -13924858;
int64_t t16 = -5691LL;
uint64_t x74 = UINT64_MAX;
int64_t t18 = 6533LL;
uint32_t x77 = 8977135U;
int64_t x81 = INT64_MAX;
int32_t x83 = 0;
int64_t x84 = INT64_MIN;
volatile int32_t t21 = -1;
volatile int8_t x89 = -1;
int16_t x91 = INT16_MIN;
int32_t t22 = -13294;
int64_t x95 = INT64_MIN;
volatile int8_t x97 = -1;
int16_t x103 = 37;
uint32_t x104 = 110668U;
uint64_t x109 = 16170632838280LLU;
uint8_t x114 = UINT8_MAX;
int16_t x119 = -1;
volatile int32_t t30 = 339758;
uint8_t x127 = UINT8_MAX;
int32_t x130 = 25572067;
int32_t x132 = INT32_MAX;
int16_t x150 = -595;
int16_t x152 = INT16_MIN;
int32_t x154 = 31671;
int8_t x157 = INT8_MIN;
int16_t x159 = 36;
volatile int32_t t39 = 0;
int16_t x171 = -67;
uint64_t x172 = UINT64_MAX;
static volatile uint64_t t42 = UINT64_MAX;
static uint32_t x175 = 1U;
volatile int8_t x178 = -5;
static int8_t x184 = INT8_MIN;
int64_t x186 = INT64_MAX;
volatile int8_t x187 = -1;
int32_t t48 = 20164811;
int64_t x203 = -1LL;
int32_t t51 = -399;
int64_t x210 = 96LL;
static int8_t x214 = INT8_MIN;
int16_t x228 = INT16_MIN;
uint64_t x245 = UINT64_MAX;
int64_t x253 = 2904844180067715LL;
int8_t x258 = 3;
uint32_t x262 = 36774294U;
static volatile uint32_t x268 = 1129335797U;
int16_t x270 = -1;
static volatile int8_t x272 = -1;
volatile int32_t t69 = 330475084;
int16_t x287 = 2319;
uint16_t x290 = UINT16_MAX;
int64_t x298 = INT64_MIN;
static int16_t x302 = INT16_MAX;
volatile int8_t x314 = INT8_MIN;
volatile int64_t t78 = 811363988457028LL;
int16_t x321 = INT16_MAX;
uint64_t x322 = 29656LLU;
int64_t x326 = INT64_MIN;
volatile uint64_t t81 = 175109075149463LLU;
volatile int32_t t82 = 200173;
volatile int64_t x333 = -22683LL;
uint32_t x343 = 11961U;
int32_t x344 = INT32_MAX;
uint8_t x348 = 7U;
int32_t x375 = -1;
int8_t x376 = INT8_MIN;
int32_t t93 = 15985369;
volatile uint16_t x378 = UINT16_MAX;
static int32_t x380 = -6100;
volatile int32_t x382 = INT32_MIN;
int64_t x387 = -274474411037559895LL;
int64_t t96 = -66466034055575LL;
static uint16_t x390 = UINT16_MAX;
uint16_t x391 = 6645U;
int16_t x396 = -2;
volatile uint16_t x397 = 74U;
int8_t x404 = INT8_MAX;
uint8_t x407 = 15U;
volatile int8_t x408 = INT8_MIN;
int32_t t101 = 152907;
int8_t x410 = INT8_MIN;
static volatile int8_t x417 = INT8_MIN;
int16_t x418 = INT16_MIN;
int32_t x424 = -929130313;
static int8_t x425 = INT8_MIN;
uint64_t x426 = 33267887LLU;
uint32_t x427 = 30U;
int16_t x433 = INT16_MIN;
volatile int16_t x437 = 6381;
int32_t x438 = INT32_MIN;
static int32_t t109 = -74;
int64_t x445 = INT64_MAX;
static int64_t x449 = INT64_MIN;
int8_t x450 = -1;
volatile uint64_t x451 = 5518982759336LLU;
uint32_t t112 = 80U;
uint8_t x460 = 3U;
static int64_t x461 = -1LL;
volatile uint64_t x465 = 1268753735LLU;
uint8_t x472 = UINT8_MAX;
int32_t x473 = INT32_MIN;
int8_t x475 = INT8_MAX;
int32_t x476 = INT32_MIN;
uint16_t x480 = 52U;
static int8_t x483 = 58;
static volatile uint8_t x484 = 1U;
int32_t x486 = INT32_MIN;
int32_t t121 = INT32_MIN;
int64_t x492 = INT64_MIN;
volatile int32_t x495 = -2238621;
static volatile int64_t t123 = 164594793802081LL;
uint32_t x500 = UINT32_MAX;
volatile uint32_t t124 = UINT32_MAX;
static uint8_t x503 = 10U;
int32_t t125 = -214440;
static volatile int64_t x505 = INT64_MAX;
volatile int16_t x507 = 0;
static volatile uint16_t x511 = 3676U;
volatile int16_t x513 = INT16_MAX;
static int64_t x514 = -833649471441951LL;
int32_t x515 = -1;
static volatile int32_t t130 = -41041;
volatile int32_t t131 = -1542792;
uint8_t x530 = UINT8_MAX;
volatile uint8_t x533 = UINT8_MAX;
volatile uint64_t t133 = 1389LLU;
volatile int64_t t134 = -157998975945888LL;
uint32_t x541 = UINT32_MAX;
int64_t x545 = INT64_MIN;
int8_t x547 = INT8_MIN;
int32_t x550 = -9284059;
int16_t x551 = -1;
int32_t t137 = -12507033;
static int16_t x554 = -10;
volatile int64_t t138 = INT64_MIN;
static int32_t x557 = -11;
uint8_t x560 = 32U;
int32_t t139 = -58540959;
uint32_t x575 = 299U;
static volatile uint64_t x581 = 11270281753343224LLU;
int8_t x585 = -6;
static int64_t x586 = -37601258444525589LL;
volatile int32_t t146 = 5;
volatile int64_t x592 = INT64_MIN;
uint32_t x594 = 607787U;
int32_t x598 = 36;
volatile int32_t x599 = INT32_MAX;
uint32_t x604 = 47U;
uint32_t t150 = 15U;
volatile uint16_t x605 = UINT16_MAX;
volatile int16_t x608 = INT16_MAX;
int8_t x609 = INT8_MIN;
volatile int32_t t152 = INT32_MAX;
static volatile int64_t x617 = INT64_MIN;
int32_t x619 = INT32_MIN;
int16_t x621 = INT16_MIN;
int32_t t155 = 25139;
static int32_t x627 = -3;
volatile int32_t t156 = -90;
uint16_t x636 = 227U;
volatile int32_t t158 = 898;
int8_t x640 = INT8_MIN;
static volatile int16_t x645 = INT16_MAX;
int8_t x655 = 3;
static int32_t t164 = -664397;
int8_t x663 = INT8_MAX;
int64_t t168 = INT64_MAX;
int16_t x684 = -1;
uint8_t x688 = 1U;
int16_t x690 = INT16_MAX;
uint8_t x691 = UINT8_MAX;
int32_t x692 = 378005802;
int32_t x699 = INT32_MIN;
int32_t t175 = 69217;
static int64_t x706 = -1LL;
int8_t x709 = INT8_MIN;
static volatile int8_t x711 = INT8_MIN;
volatile uint32_t x713 = 9509887U;
int16_t x730 = INT16_MAX;
uint64_t x733 = 32016238426651135LLU;
int32_t t185 = 3;
int16_t x756 = -1;
volatile int16_t x760 = 22;
uint16_t x776 = 124U;
uint8_t x787 = 20U;
int16_t x790 = -10517;
volatile int32_t t198 = 727573490;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	static int32_t x3 = INT32_MIN;
	uint32_t x4 = 758U;
	static uint32_t t0 = 62046U;

    t0 = (((x1==x2)>x3)|x4);

    if (t0 != 759U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = 138;
	int16_t x6 = -1;
	uint32_t x7 = 1939870521U;
	int32_t t1 = 5719;

    t1 = (((x5==x6)>x7)|x8);

    if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = 355;
	static volatile uint32_t x11 = 1122U;
	volatile uint32_t x12 = UINT32_MAX;

    t2 = (((x9==x10)>x11)|x12);

    if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int8_t x15 = 0;
	volatile uint16_t x16 = 0U;
	int32_t t3 = 231543793;

    t3 = (((x13==x14)>x15)|x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 12U;
	static int32_t t4 = 7256793;

    t4 = (((x17==x18)>x19)|x20);

    if (t4 != 13) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x22 = INT64_MIN;
	int32_t x23 = -1;
	volatile int32_t x24 = 30;
	int32_t t5 = 93993;

    t5 = (((x21==x22)>x23)|x24);

    if (t5 != 31) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	static int16_t x26 = -516;
	static int8_t x27 = -27;
	int32_t x28 = -632837;
	int32_t t6 = 136177258;

    t6 = (((x25==x26)>x27)|x28);

    if (t6 != -632837) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x29 = 1088648742754LLU;
	static int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MAX;
	volatile int8_t x32 = -1;
	int32_t t7 = 37572855;

    t7 = (((x29==x30)>x31)|x32);

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = -8923900;
	static int64_t x34 = 1LL;
	int64_t x35 = -1LL;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = 4LL;

    t8 = (((x33==x34)>x35)|x36);

    if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	volatile int64_t x39 = -5059343172409324LL;
	int8_t x40 = -1;

    t9 = (((x37==x38)>x39)|x40);

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = -8690633;
	int8_t x42 = -1;
	int8_t x43 = -1;
	int64_t x44 = INT64_MIN;
	int64_t t10 = 4670697LL;

    t10 = (((x41==x42)>x43)|x44);

    if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x46 = 956715U;
	static volatile uint32_t t11 = 1216027U;

    t11 = (((x45==x46)>x47)|x48);

    if (t11 != 31U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MIN;
	uint8_t x50 = 1U;
	static volatile int16_t x51 = INT16_MIN;
	int32_t x52 = INT32_MIN;

    t12 = (((x49==x50)>x51)|x52);

    if (t12 != -2147483647) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x53 = 232631U;
	static uint8_t x54 = 97U;
	uint8_t x55 = UINT8_MAX;
	int64_t t13 = INT64_MAX;

    t13 = (((x53==x54)>x55)|x56);

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MIN;
	static int16_t x59 = INT16_MIN;
	uint8_t x60 = 7U;
	int32_t t14 = 516;

    t14 = (((x57==x58)>x59)|x60);

    if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = -1LL;
	static int16_t x62 = -1;
	uint64_t x63 = 129830398648682LLU;
	int64_t x64 = INT64_MIN;
	volatile int64_t t15 = INT64_MIN;

    t15 = (((x61==x62)>x63)|x64);

    if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int64_t x66 = -1LL;
	int64_t x68 = -2519783360055LL;

    t16 = (((x65==x66)>x67)|x68);

    if (t16 != -2519783360055LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MAX;
	volatile int8_t x70 = -1;
	int64_t x71 = INT64_MAX;
	volatile int64_t x72 = -1LL;
	int64_t t17 = -795259581348361LL;

    t17 = (((x69==x70)>x71)|x72);

    if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x73 = INT64_MIN;
	static uint64_t x75 = UINT64_MAX;
	int64_t x76 = -1LL;

    t18 = (((x73==x74)>x75)|x76);

    if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x78 = UINT32_MAX;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 4846514454851264437LLU;
	uint64_t t19 = 79622525574LLU;

    t19 = (((x77==x78)>x79)|x80);

    if (t19 != 4846514454851264437LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x82 = INT16_MAX;
	volatile int64_t t20 = INT64_MIN;

    t20 = (((x81==x82)>x83)|x84);

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = -1;
	static int16_t x86 = INT16_MAX;
	int64_t x87 = INT64_MIN;
	uint8_t x88 = 0U;

    t21 = (((x85==x86)>x87)|x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x90 = INT64_MIN;
	int16_t x92 = INT16_MIN;

    t22 = (((x89==x90)>x91)|x92);

    if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = UINT8_MAX;
	uint8_t x94 = 1U;
	volatile uint32_t x96 = 10529241U;
	uint32_t t23 = 364353528U;

    t23 = (((x93==x94)>x95)|x96);

    if (t23 != 10529241U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x98 = -1LL;
	volatile uint16_t x99 = UINT16_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = -1;

    t24 = (((x97==x98)>x99)|x100);

    if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x101 = 3U;
	static uint64_t x102 = 22471577573087LLU;
	volatile uint32_t t25 = 2U;

    t25 = (((x101==x102)>x103)|x104);

    if (t25 != 110668U) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x105 = INT16_MIN;
	uint8_t x106 = 48U;
	uint8_t x107 = 8U;
	uint8_t x108 = 1U;
	int32_t t26 = -4776;

    t26 = (((x105==x106)>x107)|x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x110 = -1;
	uint32_t x111 = 214U;
	uint8_t x112 = 86U;
	int32_t t27 = 40907;

    t27 = (((x109==x110)>x111)|x112);

    if (t27 != 86) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x113 = 10U;
	int8_t x115 = -1;
	int8_t x116 = 1;
	int32_t t28 = 50;

    t28 = (((x113==x114)>x115)|x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x117 = -1;
	static int64_t x118 = 726940LL;
	int32_t x120 = 223;
	static int32_t t29 = 13220747;

    t29 = (((x117==x118)>x119)|x120);

    if (t29 != 223) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x121 = 6U;
	volatile int64_t x122 = -2824LL;
	int16_t x123 = -1;
	int16_t x124 = -1;

    t30 = (((x121==x122)>x123)|x124);

    if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = -202;
	uint16_t x126 = UINT16_MAX;
	uint64_t x128 = 2310LLU;
	static volatile uint64_t t31 = 4139402240324063656LLU;

    t31 = (((x125==x126)>x127)|x128);

    if (t31 != 2310LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	static int8_t x131 = INT8_MIN;
	int32_t t32 = INT32_MAX;

    t32 = (((x129==x130)>x131)|x132);

    if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x133 = 190485537881815LLU;
	uint64_t x134 = 25LLU;
	int32_t x135 = INT32_MIN;
	int16_t x136 = -10;
	volatile int32_t t33 = 240812;

    t33 = (((x133==x134)>x135)|x136);

    if (t33 != -9) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x137 = INT64_MAX;
	int8_t x138 = -59;
	volatile uint8_t x139 = UINT8_MAX;
	int8_t x140 = 1;
	int32_t t34 = -305102;

    t34 = (((x137==x138)>x139)|x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 32U;
	int8_t x142 = INT8_MIN;
	int32_t x143 = -1;
	volatile uint8_t x144 = 67U;
	volatile int32_t t35 = -1;

    t35 = (((x141==x142)>x143)|x144);

    if (t35 != 67) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = 6599236067LL;
	static volatile uint32_t x146 = UINT32_MAX;
	uint16_t x147 = UINT16_MAX;
	int8_t x148 = -1;
	volatile int32_t t36 = 98342609;

    t36 = (((x145==x146)>x147)|x148);

    if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x149 = UINT8_MAX;
	int16_t x151 = INT16_MIN;
	volatile int32_t t37 = -18669;

    t37 = (((x149==x150)>x151)|x152);

    if (t37 != -32767) { NG(); } else { ; }
	
}

void f38(void) {
    	static int64_t x153 = -6642LL;
	int32_t x155 = -1;
	uint16_t x156 = 710U;
	volatile int32_t t38 = -1;

    t38 = (((x153==x154)>x155)|x156);

    if (t38 != 711) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x158 = 4463602513928332960LL;
	static int16_t x160 = -459;

    t39 = (((x157==x158)>x159)|x160);

    if (t39 != -459) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x161 = 96LLU;
	static int32_t x162 = INT32_MIN;
	volatile uint8_t x163 = 27U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t40 = 979875795;

    t40 = (((x161==x162)>x163)|x164);

    if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	static int16_t x166 = -6;
	int64_t x167 = INT64_MIN;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t41 = -20;

    t41 = (((x165==x166)>x167)|x168);

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	static uint16_t x170 = UINT16_MAX;

    t42 = (((x169==x170)>x171)|x172);

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x173 = INT8_MAX;
	volatile int32_t x174 = -1;
	int64_t x176 = INT64_MIN;
	int64_t t43 = INT64_MIN;

    t43 = (((x173==x174)>x175)|x176);

    if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = INT64_MIN;
	static int32_t x179 = 3073;
	int8_t x180 = INT8_MAX;
	volatile int32_t t44 = -2347783;

    t44 = (((x177==x178)>x179)|x180);

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x181 = 46033522432672LLU;
	uint16_t x182 = 360U;
	static int16_t x183 = 0;
	int32_t t45 = -1398;

    t45 = (((x181==x182)>x183)|x184);

    if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = UINT8_MAX;
	int16_t x188 = -1;
	volatile int32_t t46 = -23959009;

    t46 = (((x185==x186)>x187)|x188);

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x189 = 0U;
	int16_t x190 = -647;
	int32_t x191 = INT32_MIN;
	static uint64_t x192 = 1039065177772LLU;
	volatile uint64_t t47 = 6427261694LLU;

    t47 = (((x189==x190)>x191)|x192);

    if (t47 != 1039065177773LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x193 = 0U;
	static volatile int32_t x194 = INT32_MAX;
	static int32_t x195 = INT32_MAX;
	int8_t x196 = 0;

    t48 = (((x193==x194)>x195)|x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x197 = INT16_MAX;
	int64_t x198 = 19117784464932LL;
	static volatile uint8_t x199 = UINT8_MAX;
	int32_t x200 = INT32_MAX;
	static int32_t t49 = INT32_MAX;

    t49 = (((x197==x198)>x199)|x200);

    if (t49 != INT32_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = INT16_MAX;
	int32_t x202 = INT32_MIN;
	static volatile int16_t x204 = -210;
	volatile int32_t t50 = 1;

    t50 = (((x201==x202)>x203)|x204);

    if (t50 != -209) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x205 = INT32_MIN;
	int64_t x206 = INT64_MAX;
	static int32_t x207 = INT32_MAX;
	int8_t x208 = -1;

    t51 = (((x205==x206)>x207)|x208);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x209 = UINT8_MAX;
	static uint64_t x211 = 25272107LLU;
	int8_t x212 = INT8_MIN;
	int32_t t52 = 45935;

    t52 = (((x209==x210)>x211)|x212);

    if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int16_t x215 = 3;
	int16_t x216 = INT16_MAX;
	volatile int32_t t53 = -9224;

    t53 = (((x213==x214)>x215)|x216);

    if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x217 = 0U;
	int8_t x218 = INT8_MAX;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = -1;
	int32_t t54 = 24695;

    t54 = (((x217==x218)>x219)|x220);

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x221 = INT8_MAX;
	int8_t x222 = INT8_MAX;
	int32_t x223 = -65769099;
	volatile int32_t x224 = 9192042;
	int32_t t55 = 14878;

    t55 = (((x221==x222)>x223)|x224);

    if (t55 != 9192043) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x225 = -1;
	static int16_t x226 = -1;
	volatile int64_t x227 = INT64_MIN;
	volatile int32_t t56 = 0;

    t56 = (((x225==x226)>x227)|x228);

    if (t56 != -32767) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = 72U;
	static int32_t t57 = 1339831;

    t57 = (((x229==x230)>x231)|x232);

    if (t57 != 73) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x233 = UINT64_MAX;
	int16_t x234 = INT16_MIN;
	static int64_t x235 = 33290665777087LL;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 1811;

    t58 = (((x233==x234)>x235)|x236);

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x237 = INT64_MAX;
	volatile int8_t x238 = INT8_MAX;
	static volatile int8_t x239 = INT8_MIN;
	uint16_t x240 = 1U;
	int32_t t59 = 27534;

    t59 = (((x237==x238)>x239)|x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x241 = 1921U;
	int8_t x242 = -1;
	uint64_t x243 = 185880988863719LLU;
	static int64_t x244 = INT64_MAX;
	static int64_t t60 = INT64_MAX;

    t60 = (((x241==x242)>x243)|x244);

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x246 = -1;
	static int16_t x247 = -11395;
	uint8_t x248 = 87U;
	volatile int32_t t61 = 989291651;

    t61 = (((x245==x246)>x247)|x248);

    if (t61 != 87) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x249 = INT16_MAX;
	uint32_t x250 = UINT32_MAX;
	volatile int8_t x251 = -1;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = 43273764;

    t62 = (((x249==x250)>x251)|x252);

    if (t62 != -127) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x254 = INT64_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	static volatile int8_t x256 = INT8_MIN;
	int32_t t63 = -3289839;

    t63 = (((x253==x254)>x255)|x256);

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int16_t x257 = INT16_MAX;
	static volatile int16_t x259 = INT16_MIN;
	uint64_t x260 = UINT64_MAX;
	volatile uint64_t t64 = UINT64_MAX;

    t64 = (((x257==x258)>x259)|x260);

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x261 = -1;
	int64_t x263 = -183222LL;
	int64_t x264 = 159394LL;
	int64_t t65 = 16LL;

    t65 = (((x261==x262)>x263)|x264);

    if (t65 != 159395LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x265 = -11678937;
	volatile int16_t x266 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	uint32_t t66 = 247873962U;

    t66 = (((x265==x266)>x267)|x268);

    if (t66 != 1129335797U) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x269 = INT64_MAX;
	uint64_t x271 = 345LLU;
	int32_t t67 = -4647737;

    t67 = (((x269==x270)>x271)|x272);

    if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x273 = INT8_MAX;
	int64_t x274 = 3LL;
	static volatile int8_t x275 = INT8_MIN;
	int8_t x276 = -1;
	int32_t t68 = -623;

    t68 = (((x273==x274)>x275)|x276);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	volatile int16_t x280 = -1;

    t69 = (((x277==x278)>x279)|x280);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = -1;
	static int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MIN;
	uint32_t x284 = 1859268428U;
	uint32_t t70 = 0U;

    t70 = (((x281==x282)>x283)|x284);

    if (t70 != 1859268429U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x285 = UINT8_MAX;
	uint16_t x286 = 3U;
	volatile uint32_t x288 = UINT32_MAX;
	volatile uint32_t t71 = UINT32_MAX;

    t71 = (((x285==x286)>x287)|x288);

    if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x289 = -2144844;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t72 = UINT64_MAX;

    t72 = (((x289==x290)>x291)|x292);

    if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 1;
	volatile int32_t x294 = INT32_MAX;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = UINT8_MAX;
	int32_t t73 = -90603595;

    t73 = (((x293==x294)>x295)|x296);

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x297 = INT16_MIN;
	int16_t x299 = 0;
	int64_t x300 = INT64_MIN;
	int64_t t74 = INT64_MIN;

    t74 = (((x297==x298)>x299)|x300);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x301 = INT16_MIN;
	int8_t x303 = 18;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t75 = UINT64_MAX;

    t75 = (((x301==x302)>x303)|x304);

    if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	int64_t x306 = INT64_MAX;
	volatile uint64_t x307 = 6936988515436LLU;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t76 = 262480282;

    t76 = (((x305==x306)>x307)|x308);

    if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x309 = 555836619251LLU;
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = 29U;
	static int32_t t77 = 0;

    t77 = (((x309==x310)>x311)|x312);

    if (t77 != 29) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x313 = 696U;
	static int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;

    t78 = (((x313==x314)>x315)|x316);

    if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x317 = -803;
	volatile int8_t x318 = INT8_MIN;
	int16_t x319 = -213;
	int8_t x320 = 1;
	int32_t t79 = 111;

    t79 = (((x317==x318)>x319)|x320);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x323 = INT64_MAX;
	int8_t x324 = 0;
	volatile int32_t t80 = 61554;

    t80 = (((x321==x322)>x323)|x324);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x325 = INT16_MIN;
	int32_t x327 = -3755035;
	uint64_t x328 = 1722781558LLU;

    t81 = (((x325==x326)>x327)|x328);

    if (t81 != 1722781559LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x329 = INT32_MIN;
	int16_t x330 = 489;
	uint32_t x331 = 131U;
	uint8_t x332 = 1U;

    t82 = (((x329==x330)>x331)|x332);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x334 = 2861048LLU;
	static int8_t x335 = -1;
	volatile int64_t x336 = INT64_MIN;
	int64_t t83 = -1210377375516LL;

    t83 = (((x333==x334)>x335)|x336);

    if (t83 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x337 = INT8_MIN;
	static uint32_t x338 = 333320U;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -16117243874442LL;
	static int64_t t84 = -96514031465556LL;

    t84 = (((x337==x338)>x339)|x340);

    if (t84 != -16117243874441LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x341 = INT32_MIN;
	uint8_t x342 = 19U;
	static volatile int32_t t85 = INT32_MAX;

    t85 = (((x341==x342)>x343)|x344);

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x345 = 163;
	static int8_t x346 = INT8_MAX;
	int32_t x347 = INT32_MAX;
	int32_t t86 = -1922;

    t86 = (((x345==x346)>x347)|x348);

    if (t86 != 7) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x349 = -29;
	static int16_t x350 = INT16_MIN;
	int64_t x351 = 2324558033272LL;
	static int16_t x352 = 5696;
	int32_t t87 = 24;

    t87 = (((x349==x350)>x351)|x352);

    if (t87 != 5696) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = -5;
	volatile int32_t x354 = 1;
	int8_t x355 = INT8_MAX;
	int64_t x356 = -12295307LL;
	int64_t t88 = 14242LL;

    t88 = (((x353==x354)>x355)|x356);

    if (t88 != -12295307LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x357 = 6178012;
	int16_t x358 = -1;
	int32_t x359 = -1;
	static volatile uint8_t x360 = 10U;
	int32_t t89 = 0;

    t89 = (((x357==x358)>x359)|x360);

    if (t89 != 11) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x361 = -815;
	int8_t x362 = -1;
	int8_t x363 = INT8_MIN;
	static volatile int16_t x364 = INT16_MIN;
	static int32_t t90 = -52863659;

    t90 = (((x361==x362)>x363)|x364);

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int16_t x365 = 15057;
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;
	volatile uint64_t t91 = UINT64_MAX;

    t91 = (((x365==x366)>x367)|x368);

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = 0;
	uint8_t x370 = 27U;
	uint16_t x371 = UINT16_MAX;
	int8_t x372 = -1;
	int32_t t92 = 88;

    t92 = (((x369==x370)>x371)|x372);

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x373 = UINT64_MAX;
	uint16_t x374 = UINT16_MAX;

    t93 = (((x373==x374)>x375)|x376);

    if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x377 = 8725136029055264LLU;
	uint32_t x379 = 12633025U;
	static volatile int32_t t94 = 0;

    t94 = (((x377==x378)>x379)|x380);

    if (t94 != -6100) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x381 = -1;
	uint8_t x383 = 70U;
	volatile int64_t x384 = INT64_MIN;
	int64_t t95 = INT64_MIN;

    t95 = (((x381==x382)>x383)|x384);

    if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x385 = INT64_MIN;
	volatile uint32_t x386 = 725340856U;
	int64_t x388 = INT64_MIN;

    t96 = (((x385==x386)>x387)|x388);

    if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = INT16_MAX;
	static int64_t x392 = INT64_MAX;
	int64_t t97 = INT64_MAX;

    t97 = (((x389==x390)>x391)|x392);

    if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x393 = -1;
	int16_t x394 = INT16_MAX;
	volatile int64_t x395 = INT64_MAX;
	int32_t t98 = -14215;

    t98 = (((x393==x394)>x395)|x396);

    if (t98 != -2) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x398 = UINT8_MAX;
	int8_t x399 = -7;
	volatile int8_t x400 = INT8_MAX;
	volatile int32_t t99 = 42;

    t99 = (((x397==x398)>x399)|x400);

    if (t99 != 127) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x401 = -1;
	int8_t x402 = 46;
	volatile int8_t x403 = INT8_MIN;
	static int32_t t100 = -757;

    t100 = (((x401==x402)>x403)|x404);

    if (t100 != 127) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x405 = 954U;
	uint32_t x406 = UINT32_MAX;

    t101 = (((x405==x406)>x407)|x408);

    if (t101 != -128) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x409 = -1LL;
	int8_t x411 = INT8_MIN;
	static uint16_t x412 = 27179U;
	int32_t t102 = -1;

    t102 = (((x409==x410)>x411)|x412);

    if (t102 != 27179) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x413 = -3;
	int8_t x414 = INT8_MAX;
	static int8_t x415 = INT8_MIN;
	int64_t x416 = 32809770261034LL;
	volatile int64_t t103 = 2754080002LL;

    t103 = (((x413==x414)>x415)|x416);

    if (t103 != 32809770261035LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x419 = -18;
	uint32_t x420 = 0U;
	volatile uint32_t t104 = 85400U;

    t104 = (((x417==x418)>x419)|x420);

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = UINT16_MAX;
	uint16_t x422 = 7535U;
	int8_t x423 = INT8_MAX;
	int32_t t105 = -82;

    t105 = (((x421==x422)>x423)|x424);

    if (t105 != -929130313) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x428 = INT64_MIN;
	int64_t t106 = INT64_MIN;

    t106 = (((x425==x426)>x427)|x428);

    if (t106 != INT64_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = 15;
	uint8_t x430 = 0U;
	int64_t x431 = INT64_MIN;
	int16_t x432 = INT16_MAX;
	int32_t t107 = -1;

    t107 = (((x429==x430)>x431)|x432);

    if (t107 != 32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x434 = INT16_MIN;
	int8_t x435 = -48;
	volatile int32_t x436 = 170697;
	volatile int32_t t108 = -4977;

    t108 = (((x433==x434)>x435)|x436);

    if (t108 != 170697) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x439 = 21593U;
	static int16_t x440 = INT16_MIN;

    t109 = (((x437==x438)>x439)|x440);

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x441 = -1;
	int16_t x442 = INT16_MIN;
	uint64_t x443 = 4721932427025772LLU;
	volatile int32_t x444 = 50;
	volatile int32_t t110 = 815497057;

    t110 = (((x441==x442)>x443)|x444);

    if (t110 != 50) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = 34220391238LL;
	uint32_t x447 = 207083830U;
	int8_t x448 = -1;
	volatile int32_t t111 = 3696;

    t111 = (((x445==x446)>x447)|x448);

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x452 = 432U;

    t112 = (((x449==x450)>x451)|x452);

    if (t112 != 432U) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x453 = 0U;
	volatile int16_t x454 = INT16_MIN;
	static int16_t x455 = -1;
	uint16_t x456 = UINT16_MAX;
	int32_t t113 = -6;

    t113 = (((x453==x454)>x455)|x456);

    if (t113 != 65535) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MAX;
	int16_t x459 = INT16_MIN;
	int32_t t114 = 153022585;

    t114 = (((x457==x458)>x459)|x460);

    if (t114 != 3) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x462 = 29348U;
	int8_t x463 = INT8_MIN;
	uint16_t x464 = UINT16_MAX;
	int32_t t115 = -4;

    t115 = (((x461==x462)>x463)|x464);

    if (t115 != 65535) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x466 = 1820725755936377528LLU;
	uint32_t x467 = UINT32_MAX;
	int64_t x468 = -1LL;
	int64_t t116 = -85910324636LL;

    t116 = (((x465==x466)>x467)|x468);

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = -1;
	static int16_t x470 = 10;
	static volatile uint16_t x471 = 0U;
	volatile int32_t t117 = -37102;

    t117 = (((x469==x470)>x471)|x472);

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x474 = -1LL;
	volatile int32_t t118 = INT32_MIN;

    t118 = (((x473==x474)>x475)|x476);

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = 1697108150201650791LL;
	int32_t x478 = INT32_MAX;
	volatile uint32_t x479 = 4137706U;
	volatile int32_t t119 = 1;

    t119 = (((x477==x478)>x479)|x480);

    if (t119 != 52) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MIN;
	uint8_t x482 = 0U;
	volatile int32_t t120 = 509523667;

    t120 = (((x481==x482)>x483)|x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	volatile uint64_t x487 = UINT64_MAX;
	int32_t x488 = INT32_MIN;

    t121 = (((x485==x486)>x487)|x488);

    if (t121 != INT32_MIN) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x489 = INT32_MAX;
	uint32_t x490 = 14888U;
	int8_t x491 = -1;
	volatile int64_t t122 = -1062041839173185449LL;

    t122 = (((x489==x490)>x491)|x492);

    if (t122 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x493 = 393U;
	volatile uint64_t x494 = 1279LLU;
	int64_t x496 = INT64_MIN;

    t123 = (((x493==x494)>x495)|x496);

    if (t123 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MAX;
	uint8_t x498 = UINT8_MAX;
	volatile int8_t x499 = -59;

    t124 = (((x497==x498)>x499)|x500);

    if (t124 != UINT32_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x501 = 2;
	int8_t x502 = INT8_MIN;
	uint8_t x504 = 3U;

    t125 = (((x501==x502)>x503)|x504);

    if (t125 != 3) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x506 = 1453667797U;
	int64_t x508 = -14514998576000664LL;
	volatile int64_t t126 = 68261677790LL;

    t126 = (((x505==x506)>x507)|x508);

    if (t126 != -14514998576000664LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x509 = UINT16_MAX;
	static volatile int32_t x510 = -1;
	static volatile int32_t x512 = INT32_MIN;
	static volatile int32_t t127 = INT32_MIN;

    t127 = (((x509==x510)>x511)|x512);

    if (t127 != INT32_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x516 = 3U;
	int32_t t128 = 346;

    t128 = (((x513==x514)>x515)|x516);

    if (t128 != 3) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = INT32_MAX;
	uint8_t x518 = UINT8_MAX;
	uint16_t x519 = UINT16_MAX;
	int64_t x520 = INT64_MAX;
	int64_t t129 = INT64_MAX;

    t129 = (((x517==x518)>x519)|x520);

    if (t129 != INT64_MAX) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x521 = INT64_MIN;
	volatile uint8_t x522 = 4U;
	int8_t x523 = -12;
	static int8_t x524 = -1;

    t130 = (((x521==x522)>x523)|x524);

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x525 = 6539432469LL;
	int16_t x526 = -1;
	volatile int8_t x527 = INT8_MIN;
	uint8_t x528 = 0U;

    t131 = (((x525==x526)>x527)|x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x531 = INT32_MIN;
	volatile int8_t x532 = INT8_MIN;
	int32_t t132 = 121328;

    t132 = (((x529==x530)>x531)|x532);

    if (t132 != -127) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x534 = INT8_MIN;
	static volatile uint16_t x535 = UINT16_MAX;
	uint64_t x536 = 817654933753LLU;

    t133 = (((x533==x534)>x535)|x536);

    if (t133 != 817654933753LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x537 = INT8_MIN;
	int16_t x538 = INT16_MAX;
	int32_t x539 = -1;
	int64_t x540 = -1LL;

    t134 = (((x537==x538)>x539)|x540);

    if (t134 != -1LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x542 = INT32_MIN;
	static uint32_t x543 = UINT32_MAX;
	int8_t x544 = -12;
	volatile int32_t t135 = -440191;

    t135 = (((x541==x542)>x543)|x544);

    if (t135 != -12) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x546 = INT16_MAX;
	int16_t x548 = INT16_MIN;
	volatile int32_t t136 = -5726491;

    t136 = (((x545==x546)>x547)|x548);

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x549 = 1026U;
	int16_t x552 = INT16_MIN;

    t137 = (((x549==x550)>x551)|x552);

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x555 = INT32_MAX;
	int64_t x556 = INT64_MIN;

    t138 = (((x553==x554)>x555)|x556);

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x558 = 1690161981U;
	int32_t x559 = -1;

    t139 = (((x557==x558)>x559)|x560);

    if (t139 != 33) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = -1;
	static uint32_t x562 = UINT32_MAX;
	int64_t x563 = -1LL;
	int16_t x564 = -82;
	volatile int32_t t140 = 0;

    t140 = (((x561==x562)>x563)|x564);

    if (t140 != -81) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x565 = 208263989LLU;
	int64_t x566 = INT64_MIN;
	uint16_t x567 = 85U;
	int64_t x568 = 448715770016457LL;
	int64_t t141 = 966423LL;

    t141 = (((x565==x566)>x567)|x568);

    if (t141 != 448715770016457LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x569 = -1;
	volatile uint32_t x570 = 1486482047U;
	int64_t x571 = INT64_MAX;
	uint8_t x572 = UINT8_MAX;
	volatile int32_t t142 = -2;

    t142 = (((x569==x570)>x571)|x572);

    if (t142 != 255) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x573 = INT64_MAX;
	volatile int64_t x574 = INT64_MIN;
	static uint16_t x576 = 32359U;
	volatile int32_t t143 = -33373;

    t143 = (((x573==x574)>x575)|x576);

    if (t143 != 32359) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x577 = 12;
	static uint8_t x578 = 37U;
	uint16_t x579 = 27553U;
	int8_t x580 = -21;
	static volatile int32_t t144 = -1372;

    t144 = (((x577==x578)>x579)|x580);

    if (t144 != -21) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x582 = 10983193887LLU;
	int8_t x583 = -55;
	uint64_t x584 = 3229511878982LLU;
	uint64_t t145 = 576054406533399844LLU;

    t145 = (((x581==x582)>x583)|x584);

    if (t145 != 3229511878983LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x587 = INT16_MAX;
	volatile int16_t x588 = INT16_MAX;

    t146 = (((x585==x586)>x587)|x588);

    if (t146 != 32767) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile int32_t x589 = 1;
	static int16_t x590 = -1;
	int32_t x591 = -15260;
	int64_t t147 = -19398467832593507LL;

    t147 = (((x589==x590)>x591)|x592);

    if (t147 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x593 = INT64_MIN;
	int8_t x595 = 1;
	int8_t x596 = INT8_MIN;
	int32_t t148 = 103976;

    t148 = (((x593==x594)>x595)|x596);

    if (t148 != -128) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x597 = UINT8_MAX;
	volatile int32_t x600 = -1;
	volatile int32_t t149 = 0;

    t149 = (((x597==x598)>x599)|x600);

    if (t149 != -1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x601 = UINT16_MAX;
	int32_t x602 = -1;
	volatile uint64_t x603 = 115273LLU;

    t150 = (((x601==x602)>x603)|x604);

    if (t150 != 47U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x606 = -1;
	int16_t x607 = 445;
	volatile int32_t t151 = 599320;

    t151 = (((x605==x606)>x607)|x608);

    if (t151 != 32767) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x610 = 2U;
	uint64_t x611 = 1580319870891403280LLU;
	volatile int32_t x612 = INT32_MAX;

    t152 = (((x609==x610)>x611)|x612);

    if (t152 != INT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x613 = 16;
	int64_t x614 = INT64_MIN;
	static int16_t x615 = 1;
	static int32_t x616 = 3217;
	volatile int32_t t153 = 926;

    t153 = (((x613==x614)>x615)|x616);

    if (t153 != 3217) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint64_t x618 = UINT64_MAX;
	uint16_t x620 = 0U;
	volatile int32_t t154 = -664;

    t154 = (((x617==x618)>x619)|x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MAX;
	int64_t x623 = -248152036180484LL;
	volatile uint16_t x624 = UINT16_MAX;

    t155 = (((x621==x622)>x623)|x624);

    if (t155 != 65535) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x625 = UINT64_MAX;
	int8_t x626 = 0;
	static int8_t x628 = INT8_MIN;

    t156 = (((x625==x626)>x627)|x628);

    if (t156 != -127) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x629 = UINT32_MAX;
	uint16_t x630 = UINT16_MAX;
	int64_t x631 = -1LL;
	int16_t x632 = INT16_MAX;
	volatile int32_t t157 = 226;

    t157 = (((x629==x630)>x631)|x632);

    if (t157 != 32767) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	volatile int8_t x634 = -6;
	uint16_t x635 = UINT16_MAX;

    t158 = (((x633==x634)>x635)|x636);

    if (t158 != 227) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x637 = -1;
	int8_t x638 = INT8_MIN;
	int32_t x639 = INT32_MIN;
	static int32_t t159 = 0;

    t159 = (((x637==x638)>x639)|x640);

    if (t159 != -127) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x641 = 2U;
	int8_t x642 = INT8_MIN;
	volatile uint32_t x643 = 7U;
	int32_t x644 = -1;
	volatile int32_t t160 = 67683456;

    t160 = (((x641==x642)>x643)|x644);

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x646 = UINT8_MAX;
	volatile int8_t x647 = 47;
	static volatile int32_t x648 = INT32_MIN;
	volatile int32_t t161 = INT32_MIN;

    t161 = (((x645==x646)>x647)|x648);

    if (t161 != INT32_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x649 = 8U;
	uint32_t x650 = 915640U;
	uint8_t x651 = 3U;
	int64_t x652 = -1LL;
	static volatile int64_t t162 = -7697290062622465LL;

    t162 = (((x649==x650)>x651)|x652);

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x653 = 271LL;
	int32_t x654 = INT32_MAX;
	volatile int32_t x656 = INT32_MIN;
	volatile int32_t t163 = INT32_MIN;

    t163 = (((x653==x654)>x655)|x656);

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 8444904U;
	uint8_t x658 = 9U;
	int8_t x659 = INT8_MIN;
	static int8_t x660 = 1;

    t164 = (((x657==x658)>x659)|x660);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	static uint16_t x662 = UINT16_MAX;
	static int64_t x664 = -1LL;
	int64_t t165 = -59987984LL;

    t165 = (((x661==x662)>x663)|x664);

    if (t165 != -1LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x665 = UINT64_MAX;
	volatile int16_t x666 = INT16_MAX;
	uint32_t x667 = 77U;
	static int64_t x668 = INT64_MIN;
	static int64_t t166 = INT64_MIN;

    t166 = (((x665==x666)>x667)|x668);

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x669 = 31U;
	int64_t x670 = INT64_MIN;
	int8_t x671 = INT8_MIN;
	int8_t x672 = 1;
	int32_t t167 = -9;

    t167 = (((x669==x670)>x671)|x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x673 = UINT64_MAX;
	static int16_t x674 = 1;
	int32_t x675 = 97823;
	static int64_t x676 = INT64_MAX;

    t168 = (((x673==x674)>x675)|x676);

    if (t168 != INT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x677 = UINT16_MAX;
	int64_t x678 = 92223964LL;
	uint64_t x679 = 229840013813958322LLU;
	int16_t x680 = -15;
	static int32_t t169 = 370;

    t169 = (((x677==x678)>x679)|x680);

    if (t169 != -15) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x681 = INT32_MAX;
	uint32_t x682 = 191U;
	int8_t x683 = INT8_MAX;
	static int32_t t170 = 3;

    t170 = (((x681==x682)>x683)|x684);

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x685 = 35U;
	int32_t x686 = INT32_MIN;
	static volatile int64_t x687 = INT64_MAX;
	static int32_t t171 = 64687;

    t171 = (((x685==x686)>x687)|x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x689 = 48LL;
	volatile int32_t t172 = -45368018;

    t172 = (((x689==x690)>x691)|x692);

    if (t172 != 378005802) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int16_t x693 = INT16_MIN;
	uint8_t x694 = UINT8_MAX;
	int64_t x695 = INT64_MIN;
	int16_t x696 = -1;
	int32_t t173 = -562032;

    t173 = (((x693==x694)>x695)|x696);

    if (t173 != -1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = INT8_MIN;
	volatile uint64_t x698 = 5305LLU;
	int8_t x700 = INT8_MIN;
	int32_t t174 = -34384;

    t174 = (((x697==x698)>x699)|x700);

    if (t174 != -127) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = -29;
	uint8_t x702 = 16U;
	volatile uint16_t x703 = 2U;
	uint8_t x704 = 1U;

    t175 = (((x701==x702)>x703)|x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = INT16_MIN;
	volatile int32_t x707 = -1;
	static uint16_t x708 = 20U;
	int32_t t176 = 19;

    t176 = (((x705==x706)>x707)|x708);

    if (t176 != 21) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x710 = -63516LL;
	int32_t x712 = INT32_MAX;
	int32_t t177 = INT32_MAX;

    t177 = (((x709==x710)>x711)|x712);

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = -116414598762227LL;
	volatile int16_t x715 = 1;
	static int32_t x716 = -447996;
	int32_t t178 = 1296908;

    t178 = (((x713==x714)>x715)|x716);

    if (t178 != -447996) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x717 = -1;
	volatile int64_t x718 = -1LL;
	int64_t x719 = 70182LL;
	static uint16_t x720 = UINT16_MAX;
	int32_t t179 = -20603326;

    t179 = (((x717==x718)>x719)|x720);

    if (t179 != 65535) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x721 = UINT64_MAX;
	volatile uint64_t x722 = 3434713LLU;
	int32_t x723 = 12494;
	volatile int32_t x724 = INT32_MIN;
	static volatile int32_t t180 = INT32_MIN;

    t180 = (((x721==x722)>x723)|x724);

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -1LL;
	int16_t x726 = INT16_MIN;
	uint8_t x727 = 5U;
	int8_t x728 = INT8_MIN;
	volatile int32_t t181 = -654034;

    t181 = (((x725==x726)>x727)|x728);

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x729 = 63;
	volatile int16_t x731 = 53;
	int16_t x732 = INT16_MIN;
	static int32_t t182 = 6;

    t182 = (((x729==x730)>x731)|x732);

    if (t182 != -32768) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x734 = -1;
	static volatile int64_t x735 = INT64_MAX;
	int16_t x736 = -1;
	int32_t t183 = 9;

    t183 = (((x733==x734)>x735)|x736);

    if (t183 != -1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x737 = 21268412LL;
	int32_t x738 = INT32_MIN;
	int64_t x739 = INT64_MAX;
	volatile int16_t x740 = 11;
	int32_t t184 = 16228777;

    t184 = (((x737==x738)>x739)|x740);

    if (t184 != 11) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x741 = 1531LLU;
	uint8_t x742 = 19U;
	static int8_t x743 = INT8_MIN;
	int8_t x744 = 0;

    t185 = (((x741==x742)>x743)|x744);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x745 = INT16_MIN;
	int64_t x746 = 24619LL;
	int64_t x747 = 1878185177LL;
	int32_t x748 = INT32_MAX;
	volatile int32_t t186 = INT32_MAX;

    t186 = (((x745==x746)>x747)|x748);

    if (t186 != INT32_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x749 = 7U;
	uint16_t x750 = UINT16_MAX;
	static uint64_t x751 = 254145516LLU;
	static int8_t x752 = INT8_MIN;
	int32_t t187 = 2932118;

    t187 = (((x749==x750)>x751)|x752);

    if (t187 != -128) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x753 = -454;
	volatile uint16_t x754 = 1U;
	volatile int32_t x755 = INT32_MAX;
	volatile int32_t t188 = 759;

    t188 = (((x753==x754)>x755)|x756);

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MIN;
	int64_t x759 = 102275767LL;
	volatile int32_t t189 = 224;

    t189 = (((x757==x758)>x759)|x760);

    if (t189 != 22) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MIN;
	static volatile int32_t x762 = INT32_MAX;
	int64_t x763 = INT64_MIN;
	int16_t x764 = -1951;
	volatile int32_t t190 = -73748;

    t190 = (((x761==x762)>x763)|x764);

    if (t190 != -1951) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x765 = 16U;
	int8_t x766 = INT8_MIN;
	int32_t x767 = 6595;
	int64_t x768 = 3135210642485600LL;
	static volatile int64_t t191 = 845377009LL;

    t191 = (((x765==x766)>x767)|x768);

    if (t191 != 3135210642485600LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = 0;
	int16_t x770 = 124;
	int64_t x771 = INT64_MIN;
	volatile int16_t x772 = -8;
	volatile int32_t t192 = -7;

    t192 = (((x769==x770)>x771)|x772);

    if (t192 != -7) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x773 = 468;
	volatile int64_t x774 = INT64_MIN;
	int64_t x775 = -1341872559779064LL;
	volatile int32_t t193 = 30;

    t193 = (((x773==x774)>x775)|x776);

    if (t193 != 125) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x777 = UINT32_MAX;
	volatile uint16_t x778 = 3071U;
	int8_t x779 = -12;
	int64_t x780 = -953622922LL;
	static volatile int64_t t194 = -695983LL;

    t194 = (((x777==x778)>x779)|x780);

    if (t194 != -953622921LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x781 = -1;
	int16_t x782 = -1;
	static int32_t x783 = 25223355;
	int8_t x784 = INT8_MAX;
	int32_t t195 = 268430;

    t195 = (((x781==x782)>x783)|x784);

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = -1;
	int8_t x786 = -1;
	volatile int16_t x788 = -1;
	int32_t t196 = -14;

    t196 = (((x785==x786)>x787)|x788);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x789 = -10;
	volatile int32_t x791 = INT32_MIN;
	int16_t x792 = INT16_MAX;
	static volatile int32_t t197 = 48;

    t197 = (((x789==x790)>x791)|x792);

    if (t197 != 32767) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x793 = INT64_MIN;
	int8_t x794 = -1;
	int64_t x795 = 4477422514LL;
	volatile int8_t x796 = INT8_MIN;

    t198 = (((x793==x794)>x795)|x796);

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x797 = 1;
	int16_t x798 = INT16_MIN;
	uint64_t x799 = UINT64_MAX;
	static int8_t x800 = INT8_MAX;
	int32_t t199 = -376836016;

    t199 = (((x797==x798)>x799)|x800);

    if (t199 != 127) { NG(); } else { ; }
	
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

