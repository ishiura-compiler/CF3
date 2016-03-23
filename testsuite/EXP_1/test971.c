
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

int32_t x4 = INT32_MIN;
volatile int32_t x8 = INT32_MAX;
int32_t x10 = 32928;
int64_t x18 = INT64_MAX;
int64_t x22 = INT64_MIN;
int64_t x35 = INT64_MIN;
volatile int64_t t8 = -32382361LL;
int64_t x56 = INT64_MIN;
uint32_t x57 = 182347U;
static uint16_t x58 = UINT16_MAX;
int16_t x59 = INT16_MAX;
uint32_t t14 = 1608725U;
int8_t x61 = INT8_MIN;
volatile int32_t x65 = 3109964;
static int32_t x74 = 1648;
uint8_t x79 = 119U;
volatile int64_t t20 = -132252098LL;
int64_t t21 = 1041946151895252LL;
uint16_t x89 = 1U;
static int32_t x90 = -489546502;
volatile uint64_t x92 = 2864245803254LLU;
static uint64_t x99 = 1021474618565596530LLU;
uint8_t x101 = 30U;
int16_t x105 = INT16_MAX;
int16_t x106 = -7;
int32_t x113 = 6230637;
int64_t x115 = 49LL;
volatile int64_t t27 = 9611LL;
static uint16_t x121 = 2U;
uint64_t x125 = UINT64_MAX;
static int16_t x127 = INT16_MIN;
int32_t x131 = INT32_MAX;
static uint16_t x133 = 23021U;
int64_t x135 = INT64_MAX;
volatile uint64_t t32 = 882034LLU;
int32_t x138 = 243800050;
volatile uint64_t t33 = 61LLU;
int8_t x141 = INT8_MIN;
volatile int64_t t34 = -3661LL;
static int32_t x147 = -1;
static uint64_t x152 = UINT64_MAX;
volatile int32_t t37 = 267376;
volatile int32_t t38 = 452;
volatile int32_t x162 = INT32_MAX;
volatile int64_t t39 = -26607073165853939LL;
int16_t x165 = INT16_MIN;
volatile int8_t x180 = INT8_MAX;
int64_t x184 = INT64_MIN;
uint64_t x194 = 40LLU;
uint16_t x195 = 1036U;
int64_t x199 = INT64_MIN;
volatile int8_t x204 = INT8_MAX;
volatile int64_t t49 = -1771988540LL;
int64_t t50 = 523145358647LL;
static int32_t x224 = 31999;
uint8_t x232 = 1U;
int8_t x238 = -45;
volatile uint64_t t55 = 883270LLU;
int16_t x250 = INT16_MIN;
volatile int32_t x251 = INT32_MIN;
static volatile int32_t t58 = 12186;
static volatile int32_t t59 = 1;
static int16_t x273 = 1016;
uint64_t x274 = UINT64_MAX;
static int16_t x288 = -9173;
uint64_t t67 = 262776248031LLU;
volatile uint8_t x295 = UINT8_MAX;
uint16_t x303 = 0U;
int8_t x305 = 1;
uint8_t x306 = 4U;
int64_t t72 = -517307318482LL;
static uint16_t x316 = 500U;
int32_t x320 = -1;
static volatile int32_t t75 = -3;
uint16_t x322 = 34U;
uint16_t x324 = 870U;
static uint64_t x326 = UINT64_MAX;
volatile uint32_t x331 = UINT32_MAX;
uint32_t x335 = 28399212U;
int32_t x336 = -1;
volatile uint32_t t79 = 3046U;
uint8_t x339 = UINT8_MAX;
int32_t x341 = -54;
static volatile uint32_t x342 = 260146U;
volatile int64_t t81 = -302LL;
volatile int32_t x352 = -1;
volatile int8_t x356 = -10;
int64_t x362 = INT64_MAX;
volatile uint64_t t86 = 552LLU;
int64_t x365 = INT64_MIN;
static int16_t x380 = -560;
static int8_t x390 = 3;
int64_t t92 = 244LL;
volatile uint16_t x396 = UINT16_MAX;
static volatile int64_t t94 = -1LL;
static uint64_t x403 = UINT64_MAX;
static uint64_t t95 = 400768191839LLU;
int32_t x412 = INT32_MAX;
static int32_t x413 = INT32_MIN;
uint16_t x415 = 1394U;
static int8_t x421 = -1;
volatile int64_t t101 = -31527795617632319LL;
static volatile int8_t x429 = INT8_MAX;
volatile uint32_t x441 = UINT32_MAX;
volatile int64_t x443 = 4519684LL;
uint8_t x446 = 37U;
uint8_t x447 = 2U;
int8_t x451 = 1;
static int16_t x452 = -115;
volatile int16_t x455 = INT16_MIN;
volatile uint64_t t107 = 335995401813052719LLU;
volatile int32_t x465 = INT32_MIN;
int8_t x468 = INT8_MIN;
uint64_t t111 = 89820058342LLU;
int64_t x474 = INT64_MIN;
int8_t x476 = 51;
volatile int32_t x480 = INT32_MAX;
int64_t x481 = -1LL;
static int32_t x485 = INT32_MIN;
static int32_t x487 = -31096826;
volatile uint32_t x495 = 1249571102U;
int8_t x497 = INT8_MAX;
volatile uint64_t x498 = 4087698355LLU;
int8_t x500 = -1;
volatile uint64_t t118 = 8277004979873LLU;
int16_t x502 = -609;
static int16_t x503 = INT16_MIN;
uint8_t x516 = 2U;
static volatile int32_t x535 = INT32_MIN;
uint64_t x550 = 7065LLU;
uint32_t x553 = 14U;
int16_t x566 = INT16_MIN;
int16_t x577 = INT16_MIN;
int32_t x579 = INT32_MAX;
uint32_t x580 = UINT32_MAX;
static volatile int64_t t136 = -561136761031711321LL;
int64_t x585 = -49757448649306523LL;
volatile int32_t x587 = INT32_MIN;
int64_t x591 = -1LL;
uint64_t t139 = 8166088278860307020LLU;
uint32_t x597 = 25781660U;
static uint16_t x600 = 1726U;
uint8_t x601 = UINT8_MAX;
static uint32_t x604 = 4665U;
int16_t x612 = INT16_MAX;
volatile uint64_t t143 = 2849658216698096691LLU;
int8_t x614 = INT8_MIN;
static volatile int32_t x616 = 249532;
volatile int16_t x619 = INT16_MIN;
int64_t t145 = -258105047420089187LL;
volatile int64_t t149 = 291LL;
int32_t x641 = 50809624;
volatile int32_t x647 = INT32_MIN;
int32_t x651 = -1;
int8_t x652 = INT8_MIN;
static volatile int16_t x656 = 10;
int8_t x657 = -1;
int64_t x660 = 1075624275064724204LL;
volatile int64_t t155 = -6408626429778LL;
static int64_t t156 = 196LL;
static int8_t x665 = INT8_MIN;
static int64_t x671 = 6104269437184646LL;
int8_t x673 = -37;
volatile uint32_t t159 = 3218698U;
uint32_t x684 = UINT32_MAX;
int16_t x686 = -430;
static volatile int16_t x697 = -2530;
static uint16_t x699 = 1U;
int8_t x700 = -1;
volatile int32_t t165 = 1;
volatile uint8_t x702 = 30U;
static uint64_t x703 = 26855551037363819LLU;
volatile uint64_t t166 = 1138547470715730259LLU;
volatile int64_t x706 = -1LL;
int8_t x712 = INT8_MAX;
volatile int64_t t168 = -1129835893933476453LL;
int8_t x714 = -1;
volatile uint64_t t169 = 194096236269LLU;
uint16_t x718 = 6701U;
volatile int32_t t170 = -40361;
int16_t x726 = INT16_MIN;
int16_t x727 = -671;
static volatile int32_t x728 = INT32_MAX;
int64_t x740 = -259LL;
uint16_t x742 = UINT16_MAX;
volatile int64_t x746 = INT64_MIN;
volatile int8_t x747 = 1;
static int32_t x749 = INT32_MAX;
int32_t x755 = -1;
uint8_t x756 = UINT8_MAX;
int64_t x757 = -552071360839LL;
volatile uint16_t x764 = 23U;
int64_t t182 = -1951253487929LL;
volatile int64_t x772 = -497185109496854LL;
static volatile int32_t t186 = -7161226;
int32_t x792 = -1;
volatile int64_t x793 = 0LL;
int16_t x797 = INT16_MIN;
int32_t x801 = 20555;
uint16_t x805 = 2864U;
uint8_t x810 = UINT8_MAX;
uint64_t x814 = UINT64_MAX;
static int64_t x816 = INT64_MIN;
uint16_t x823 = 255U;
int32_t t195 = 108635;
int8_t x825 = INT8_MAX;
int64_t x828 = -1LL;
int32_t x832 = -1;
uint64_t t197 = 4689577837LLU;


void f0(void) {
    	uint64_t x1 = 660LLU;
	int16_t x2 = INT16_MIN;
	int8_t x3 = -10;
	static volatile uint64_t t0 = 477737008LLU;

    t0 = (((x1%x2)^x3)%x4);

    if (t0 != 2147482978LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = 1;
	uint64_t x6 = 1912LLU;
	uint8_t x7 = UINT8_MAX;
	uint64_t t1 = 3734915823LLU;

    t1 = (((x5%x6)^x7)%x8);

    if (t1 != 254LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -8050244152LL;
	int16_t x11 = 1;
	int8_t x12 = INT8_MIN;
	volatile int64_t t2 = -18436896LL;

    t2 = (((x9%x10)^x11)%x12);

    if (t2 != -55LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MAX;
	static uint8_t x14 = 45U;
	volatile uint64_t x15 = UINT64_MAX;
	int16_t x16 = 251;
	volatile uint64_t t3 = 28730754LLU;

    t3 = (((x13%x14)^x15)%x16);

    if (t3 != 31LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint8_t x17 = 11U;
	int32_t x19 = 22;
	int32_t x20 = INT32_MIN;
	int64_t t4 = 11940289065795LL;

    t4 = (((x17%x18)^x19)%x20);

    if (t4 != 29LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 25U;
	static volatile int64_t x23 = 555331264764169814LL;
	uint8_t x24 = 3U;
	volatile int64_t t5 = -63329LL;

    t5 = (((x21%x22)^x23)%x24);

    if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x25 = 2U;
	volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = INT16_MIN;
	static int32_t x28 = 32191330;
	volatile int32_t t6 = -1394023;

    t6 = (((x25%x26)^x27)%x28);

    if (t6 != -32766) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 1;
	volatile int32_t x30 = -91978;
	int64_t x31 = -1LL;
	uint8_t x32 = UINT8_MAX;
	volatile int64_t t7 = -14377243007830722LL;

    t7 = (((x29%x30)^x31)%x32);

    if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x33 = 102U;
	volatile uint16_t x34 = 1U;
	uint32_t x36 = 19U;

    t8 = (((x33%x34)^x35)%x36);

    if (t8 != -18LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MIN;
	volatile int8_t x38 = -6;
	int16_t x39 = INT16_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -1;

    t9 = (((x37%x38)^x39)%x40);

    if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x41 = 58410LLU;
	int8_t x42 = INT8_MIN;
	int64_t x43 = 2935144486169518LL;
	static volatile uint16_t x44 = 7U;
	volatile uint64_t t10 = 7306128LLU;

    t10 = (((x41%x42)^x43)%x44);

    if (t10 != 4LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 10766742171422020LL;
	volatile int8_t x46 = 1;
	static int16_t x47 = INT16_MIN;
	static int16_t x48 = 45;
	volatile int64_t t11 = 507LL;

    t11 = (((x45%x46)^x47)%x48);

    if (t11 != -8LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MAX;
	volatile int8_t x52 = -10;
	uint64_t t12 = 49015249762951LLU;

    t12 = (((x49%x50)^x51)%x52);

    if (t12 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x53 = INT32_MAX;
	volatile uint32_t x54 = UINT32_MAX;
	static int8_t x55 = 12;
	int64_t t13 = 9910004784806289LL;

    t13 = (((x53%x54)^x55)%x56);

    if (t13 != 2147483635LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x60 = -1;

    t14 = (((x57%x58)^x59)%x60);

    if (t14 != 47026U) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x62 = UINT16_MAX;
	static int64_t x63 = INT64_MIN;
	static int32_t x64 = -1;
	volatile int64_t t15 = 466115879LL;

    t15 = (((x61%x62)^x63)%x64);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x66 = UINT64_MAX;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = 168;
	uint64_t t16 = 116726LLU;

    t16 = (((x65%x66)^x67)%x68);

    if (t16 != 139LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x69 = 52U;
	uint64_t x70 = 5LLU;
	int64_t x71 = INT64_MIN;
	int16_t x72 = 1;
	uint64_t t17 = 59586LLU;

    t17 = (((x69%x70)^x71)%x72);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x73 = 3042U;
	static int16_t x75 = -1;
	uint8_t x76 = 1U;
	volatile int32_t t18 = -22525538;

    t18 = (((x73%x74)^x75)%x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x77 = 81886;
	uint64_t x78 = 13013585549565LLU;
	volatile int8_t x80 = -60;
	volatile uint64_t t19 = 2531273885215833237LLU;

    t19 = (((x77%x78)^x79)%x80);

    if (t19 != 81833LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = -13LL;
	int32_t x82 = INT32_MAX;
	int8_t x83 = -23;
	int64_t x84 = INT64_MIN;

    t20 = (((x81%x82)^x83)%x84);

    if (t20 != 26LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x85 = 7;
	uint8_t x86 = UINT8_MAX;
	static uint16_t x87 = 3U;
	int64_t x88 = -1LL;

    t21 = (((x85%x86)^x87)%x88);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x91 = INT16_MIN;
	uint64_t t22 = 1496140248754339865LLU;

    t22 = (((x89%x90)^x91)%x92);

    if (t22 != 1478968423203LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = INT64_MIN;
	int16_t x98 = -101;
	volatile uint8_t x100 = UINT8_MAX;
	static volatile uint64_t t23 = 521521642LLU;

    t23 = (((x97%x98)^x99)%x100);

    if (t23 != 41LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x102 = -1;
	static int64_t x103 = 945164670LL;
	int16_t x104 = -63;
	static int64_t t24 = -1LL;

    t24 = (((x101%x102)^x103)%x104);

    if (t24 != 51LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x107 = 14973116966304LLU;
	volatile int32_t x108 = INT32_MAX;
	volatile uint64_t t25 = 1LLU;

    t25 = (((x105%x106)^x107)%x108);

    if (t25 != 860979420LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = UINT8_MAX;
	volatile int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t26 = 15283555U;

    t26 = (((x109%x110)^x111)%x112);

    if (t26 != 2147483392U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x114 = INT16_MIN;
	int64_t x116 = -7621LL;

    t27 = (((x113%x114)^x115)%x116);

    if (t27 != 4700LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x117 = 63U;
	int64_t x118 = -6475878797928087LL;
	uint64_t x119 = UINT64_MAX;
	volatile uint32_t x120 = 88U;
	uint64_t t28 = 4592971265240688374LLU;

    t28 = (((x117%x118)^x119)%x120);

    if (t28 != 40LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x122 = 1752U;
	int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t29 = -1;

    t29 = (((x121%x122)^x123)%x124);

    if (t29 != 125) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x126 = -1LL;
	int8_t x128 = -1;
	uint64_t t30 = 6641LLU;

    t30 = (((x125%x126)^x127)%x128);

    if (t30 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	static volatile int64_t x132 = 2648142000029LL;
	static int64_t t31 = 1547372460000LL;

    t31 = (((x129%x130)^x131)%x132);

    if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x134 = 1LLU;
	uint64_t x136 = 1634479229880378594LLU;

    t32 = (((x133%x134)^x135)%x136);

    if (t32 != 1050975887452882837LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x137 = UINT64_MAX;
	uint8_t x139 = 0U;
	int32_t x140 = -1;

    t33 = (((x137%x138)^x139)%x140);

    if (t33 != 3860365LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x142 = 409U;
	uint16_t x143 = 16076U;
	int64_t x144 = -1LL;

    t34 = (((x141%x142)^x143)%x144);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x145 = INT32_MIN;
	int16_t x146 = -1;
	int32_t x148 = -1;
	volatile int32_t t35 = 825;

    t35 = (((x145%x146)^x147)%x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = UINT32_MAX;
	volatile uint16_t x150 = 1U;
	static int8_t x151 = -2;
	volatile uint64_t t36 = 20009315634LLU;

    t36 = (((x149%x150)^x151)%x152);

    if (t36 != 4294967294LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = 5797569;
	uint16_t x154 = 4U;
	int16_t x155 = 747;
	int8_t x156 = INT8_MIN;

    t37 = (((x153%x154)^x155)%x156);

    if (t37 != 106) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x157 = -1;
	int8_t x158 = INT8_MAX;
	int8_t x159 = -1;
	int32_t x160 = INT32_MIN;

    t38 = (((x157%x158)^x159)%x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x161 = 325578760081LL;
	volatile int8_t x163 = -13;
	static int8_t x164 = 1;

    t39 = (((x161%x162)^x163)%x164);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = 2179073221LL;
	uint16_t x168 = UINT16_MAX;
	volatile int64_t t40 = -802569616188168LL;

    t40 = (((x165%x166)^x167)%x168);

    if (t40 != -64797LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x177 = 0;
	uint8_t x178 = UINT8_MAX;
	volatile int8_t x179 = -1;
	volatile int32_t t41 = -382520972;

    t41 = (((x177%x178)^x179)%x180);

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x181 = -178850;
	int16_t x182 = INT16_MIN;
	static volatile uint32_t x183 = UINT32_MAX;
	volatile int64_t t42 = -758002060014675LL;

    t42 = (((x181%x182)^x183)%x184);

    if (t42 != 15009LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x185 = -1;
	int32_t x186 = -1;
	int16_t x187 = -1;
	static int64_t x188 = INT64_MIN;
	int64_t t43 = 4155028829053627LL;

    t43 = (((x185%x186)^x187)%x188);

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x189 = INT32_MAX;
	static volatile int8_t x190 = -56;
	int32_t x191 = 8585511;
	int32_t x192 = 1632379;
	volatile int32_t t44 = -1;

    t44 = (((x189%x190)^x191)%x192);

    if (t44 != 423617) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x193 = UINT64_MAX;
	int8_t x196 = INT8_MIN;
	uint64_t t45 = 2LLU;

    t45 = (((x193%x194)^x195)%x196);

    if (t45 != 1027LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x197 = -16;
	int64_t x198 = 73379940636561LL;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t46 = -1013274LL;

    t46 = (((x197%x198)^x199)%x200);

    if (t46 != 2147483632LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	static int8_t x203 = 7;
	volatile int32_t t47 = 40380173;

    t47 = (((x201%x202)^x203)%x204);

    if (t47 != 7) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x205 = INT16_MAX;
	int64_t x206 = -1LL;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MIN;
	volatile int64_t t48 = -157355734398051LL;

    t48 = (((x205%x206)^x207)%x208);

    if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x209 = UINT16_MAX;
	volatile int32_t x210 = INT32_MIN;
	int8_t x211 = 0;
	int64_t x212 = 1699698588881204LL;

    t49 = (((x209%x210)^x211)%x212);

    if (t49 != 65535LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x217 = INT32_MIN;
	volatile int8_t x218 = 15;
	uint8_t x219 = 2U;
	int64_t x220 = INT64_MAX;

    t50 = (((x217%x218)^x219)%x220);

    if (t50 != -6LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x221 = -1;
	static int64_t x222 = INT64_MIN;
	int16_t x223 = -97;
	int64_t t51 = -135189933243262LL;

    t51 = (((x221%x222)^x223)%x224);

    if (t51 != 96LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x225 = INT64_MAX;
	int16_t x226 = -11470;
	int64_t x227 = INT64_MIN;
	static uint64_t x228 = 32503LLU;
	volatile uint64_t t52 = 18749LLU;

    t52 = (((x225%x226)^x227)%x228);

    if (t52 != 10093LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x229 = 494635853;
	uint8_t x230 = 33U;
	int32_t x231 = -94;
	volatile int32_t t53 = 57207343;

    t53 = (((x229%x230)^x231)%x232);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x233 = -775;
	int32_t x234 = INT32_MIN;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = 1;
	int32_t t54 = -4635;

    t54 = (((x233%x234)^x235)%x236);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x237 = -923472292;
	volatile uint64_t x239 = 555432137378768LLU;
	int32_t x240 = 58;

    t55 = (((x237%x238)^x239)%x240);

    if (t55 != 40LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x241 = 14;
	uint32_t x242 = 5826464U;
	int32_t x243 = INT32_MIN;
	uint16_t x244 = 2U;
	volatile uint32_t t56 = 45U;

    t56 = (((x241%x242)^x243)%x244);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x245 = INT64_MAX;
	int8_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	uint8_t x248 = 5U;
	static volatile int64_t t57 = 15900LL;

    t57 = (((x245%x246)^x247)%x248);

    if (t57 != -3LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x249 = -8;
	uint8_t x252 = 19U;

    t58 = (((x249%x250)^x251)%x252);

    if (t58 != 14) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x253 = -972;
	int16_t x254 = -1;
	uint8_t x255 = 1U;
	static uint8_t x256 = 1U;

    t59 = (((x253%x254)^x255)%x256);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	uint8_t x259 = 17U;
	volatile int8_t x260 = INT8_MAX;
	int32_t t60 = 117724;

    t60 = (((x257%x258)^x259)%x260);

    if (t60 != 17) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x261 = -1;
	uint16_t x262 = 1947U;
	int8_t x263 = -1;
	volatile int32_t x264 = INT32_MAX;
	volatile int32_t t61 = 234;

    t61 = (((x261%x262)^x263)%x264);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x265 = 63086LLU;
	static int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	volatile uint8_t x268 = UINT8_MAX;
	uint64_t t62 = 12565898162LLU;

    t62 = (((x265%x266)^x267)%x268);

    if (t62 != 228LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x269 = -18;
	int32_t x270 = -90326904;
	int16_t x271 = INT16_MIN;
	int32_t x272 = -122417;
	volatile int32_t t63 = -151145358;

    t63 = (((x269%x270)^x271)%x272);

    if (t63 != 32750) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x275 = INT64_MAX;
	static int8_t x276 = INT8_MAX;
	uint64_t t64 = 119670904888410LLU;

    t64 = (((x273%x274)^x275)%x276);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x277 = -1;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = 30068021472LL;
	int64_t x280 = INT64_MAX;
	static volatile int64_t t65 = 837621819290048566LL;

    t65 = (((x277%x278)^x279)%x280);

    if (t65 != -30068021473LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x281 = INT16_MIN;
	uint8_t x282 = 2U;
	static int32_t x283 = -1;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t66 = 1;

    t66 = (((x281%x282)^x283)%x284);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x285 = INT64_MAX;
	int8_t x286 = -1;
	uint64_t x287 = 456LLU;

    t67 = (((x285%x286)^x287)%x288);

    if (t67 != 456LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x289 = -1;
	uint64_t x290 = 23198628576034LLU;
	volatile int32_t x291 = -3748246;
	int32_t x292 = -7734;
	volatile uint64_t t68 = 200852124768306LLU;

    t68 = (((x289%x290)^x291)%x292);

    if (t68 != 18446737491661473615LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x293 = -1;
	int64_t x294 = -1LL;
	uint32_t x296 = 141186642U;
	static volatile int64_t t69 = -7191161LL;

    t69 = (((x293%x294)^x295)%x296);

    if (t69 != 255LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x297 = INT64_MIN;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MAX;
	int32_t x300 = INT32_MIN;
	static volatile int64_t t70 = -2LL;

    t70 = (((x297%x298)^x299)%x300);

    if (t70 != 2147483647LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x301 = 43598889U;
	uint32_t x302 = UINT32_MAX;
	static int16_t x304 = -1;
	volatile uint32_t t71 = 69868U;

    t71 = (((x301%x302)^x303)%x304);

    if (t71 != 43598889U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x307 = -1LL;
	int16_t x308 = -1;

    t72 = (((x305%x306)^x307)%x308);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x309 = 961U;
	static uint8_t x310 = 15U;
	int16_t x311 = 15633;
	uint32_t x312 = UINT32_MAX;
	uint32_t t73 = 141326U;

    t73 = (((x309%x310)^x311)%x312);

    if (t73 != 15632U) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x313 = -97424;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = -1;
	volatile uint64_t t74 = 211064094LLU;

    t74 = (((x313%x314)^x315)%x316);

    if (t74 != 423LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x317 = INT8_MIN;
	int8_t x318 = -1;
	int8_t x319 = INT8_MAX;

    t75 = (((x317%x318)^x319)%x320);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x321 = 30333150LL;
	int8_t x323 = -18;
	volatile int64_t t76 = -313579LL;

    t76 = (((x321%x322)^x323)%x324);

    if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x325 = INT16_MIN;
	uint32_t x327 = UINT32_MAX;
	static int64_t x328 = INT64_MAX;
	volatile uint64_t t77 = 27379270301LLU;

    t77 = (((x325%x326)^x327)%x328);

    if (t77 != 9223372032559841280LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile int32_t x329 = INT32_MIN;
	int32_t x330 = -1;
	int32_t x332 = -1;
	uint32_t t78 = 165367U;

    t78 = (((x329%x330)^x331)%x332);

    if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x333 = -1;
	volatile uint8_t x334 = 105U;

    t79 = (((x333%x334)^x335)%x336);

    if (t79 != 4266568083U) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x337 = INT16_MIN;
	int64_t x338 = -121731623LL;
	int16_t x340 = INT16_MIN;
	int64_t t80 = 11536LL;

    t80 = (((x337%x338)^x339)%x340);

    if (t80 != -32513LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x343 = -511605588180980066LL;
	int8_t x344 = -1;

    t81 = (((x341%x342)^x343)%x344);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x345 = INT16_MAX;
	static uint16_t x346 = UINT16_MAX;
	int64_t x347 = -66LL;
	int16_t x348 = INT16_MIN;
	int64_t t82 = -60261019670771668LL;

    t82 = (((x345%x346)^x347)%x348);

    if (t82 != -32703LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x349 = 1;
	uint32_t x350 = UINT32_MAX;
	static int8_t x351 = INT8_MAX;
	uint32_t t83 = 2U;

    t83 = (((x349%x350)^x351)%x352);

    if (t83 != 126U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x353 = INT16_MAX;
	volatile int64_t x354 = 703411829614898930LL;
	volatile int64_t x355 = INT64_MAX;
	volatile int64_t t84 = 429231018602LL;

    t84 = (((x353%x354)^x355)%x356);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x357 = -363;
	int32_t x358 = 2410921;
	uint16_t x359 = 19376U;
	int32_t x360 = 81;
	static volatile int32_t t85 = -1001368;

    t85 = (((x357%x358)^x359)%x360);

    if (t85 != -47) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x361 = -1;
	uint64_t x363 = 1452114288260481LLU;
	uint64_t x364 = UINT64_MAX;

    t86 = (((x361%x362)^x363)%x364);

    if (t86 != 18445291959421291134LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	uint8_t x368 = 57U;
	volatile int64_t t87 = 3419415596652LL;

    t87 = (((x365%x366)^x367)%x368);

    if (t87 != -41LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint16_t x373 = 406U;
	static int16_t x374 = 10;
	static uint16_t x375 = UINT16_MAX;
	int8_t x376 = -1;
	static int32_t t88 = -193310;

    t88 = (((x373%x374)^x375)%x376);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x377 = INT32_MAX;
	uint32_t x378 = 128819U;
	int8_t x379 = INT8_MIN;
	volatile uint32_t t89 = 5874488U;

    t89 = (((x377%x378)^x379)%x380);

    if (t89 != 4294896261U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x381 = 29U;
	int16_t x382 = INT16_MAX;
	static int16_t x383 = INT16_MIN;
	int32_t x384 = -1;
	volatile int32_t t90 = -66820135;

    t90 = (((x381%x382)^x383)%x384);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int8_t x386 = -1;
	uint64_t x387 = 69288602404857564LLU;
	static int64_t x388 = INT64_MIN;
	static uint64_t t91 = 136LLU;

    t91 = (((x385%x386)^x387)%x388);

    if (t91 != 69288602404857564LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x389 = INT32_MIN;
	int64_t x391 = -1LL;
	volatile uint16_t x392 = UINT16_MAX;

    t92 = (((x389%x390)^x391)%x392);

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	static int64_t x395 = -1806037346126728LL;
	static int64_t t93 = 5475LL;

    t93 = (((x393%x394)^x395)%x396);

    if (t93 != -52378LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x397 = 326U;
	int64_t x398 = -1LL;
	int8_t x399 = INT8_MIN;
	static int64_t x400 = 10LL;

    t94 = (((x397%x398)^x399)%x400);

    if (t94 != -8LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x401 = -2276108400512093343LL;
	uint64_t x402 = 471544026LLU;
	int8_t x404 = INT8_MIN;

    t95 = (((x401%x402)^x403)%x404);

    if (t95 != 18446744073449167496LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x405 = -1;
	static uint64_t x406 = 120271LLU;
	volatile uint8_t x407 = 1U;
	uint8_t x408 = UINT8_MAX;
	static volatile uint64_t t96 = 1LLU;

    t96 = (((x405%x406)^x407)%x408);

    if (t96 != 89LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x409 = INT16_MAX;
	int8_t x410 = INT8_MIN;
	uint16_t x411 = 282U;
	int32_t t97 = 88998976;

    t97 = (((x409%x410)^x411)%x412);

    if (t97 != 357) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x414 = INT32_MAX;
	int64_t x416 = 472LL;
	int64_t t98 = 29297988LL;

    t98 = (((x413%x414)^x415)%x416);

    if (t98 != -451LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x417 = 6702U;
	uint64_t x418 = UINT64_MAX;
	uint32_t x419 = UINT32_MAX;
	int64_t x420 = INT64_MIN;
	uint64_t t99 = 235017634LLU;

    t99 = (((x417%x418)^x419)%x420);

    if (t99 != 4294960593LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x422 = 9477U;
	int8_t x423 = -2;
	int16_t x424 = 5;
	int32_t t100 = -30444230;

    t100 = (((x421%x422)^x423)%x424);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x425 = -1LL;
	int8_t x426 = INT8_MIN;
	uint32_t x427 = 0U;
	volatile int32_t x428 = INT32_MIN;

    t101 = (((x425%x426)^x427)%x428);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x430 = 15706298;
	int16_t x431 = INT16_MAX;
	uint64_t x432 = 6565LLU;
	static volatile uint64_t t102 = 122183891817LLU;

    t102 = (((x429%x430)^x431)%x432);

    if (t102 != 6380LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = INT16_MIN;
	volatile uint16_t x434 = 244U;
	int8_t x435 = -1;
	uint8_t x436 = 7U;
	static int32_t t103 = 487650475;

    t103 = (((x433%x434)^x435)%x436);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x442 = 9;
	uint64_t x444 = 14153LLU;
	uint64_t t104 = 23LLU;

    t104 = (((x441%x442)^x443)%x444);

    if (t104 != 4880LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint16_t x445 = 7U;
	volatile int16_t x448 = 6;
	volatile int32_t t105 = 81;

    t105 = (((x445%x446)^x447)%x448);

    if (t105 != 5) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x449 = UINT8_MAX;
	uint32_t x450 = 1042806686U;
	uint32_t t106 = 94359939U;

    t106 = (((x449%x450)^x451)%x452);

    if (t106 != 254U) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x453 = INT16_MIN;
	uint64_t x454 = UINT64_MAX;
	int16_t x456 = -44;

    t107 = (((x453%x454)^x455)%x456);

    if (t107 != 0LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x457 = 0U;
	int16_t x458 = -1;
	int16_t x459 = INT16_MIN;
	volatile int16_t x460 = -1;
	uint32_t t108 = 696U;

    t108 = (((x457%x458)^x459)%x460);

    if (t108 != 4294934528U) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x461 = -1LL;
	volatile uint32_t x462 = 5132U;
	int32_t x463 = -1;
	int64_t x464 = INT64_MIN;
	volatile int64_t t109 = -110451523412075459LL;

    t109 = (((x461%x462)^x463)%x464);

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x466 = INT16_MAX;
	static int16_t x467 = INT16_MIN;
	int32_t t110 = 357215;

    t110 = (((x465%x466)^x467)%x468);

    if (t110 != 126) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x469 = INT64_MIN;
	uint64_t x470 = 44LLU;
	int32_t x471 = INT32_MIN;
	uint32_t x472 = 3972246U;

    t111 = (((x469%x470)^x471)%x472);

    if (t111 != 1212340LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x473 = UINT8_MAX;
	int32_t x475 = INT32_MIN;
	int64_t t112 = -621486354314LL;

    t112 = (((x473%x474)^x475)%x476);

    if (t112 != -26LL) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x477 = 34746729437925357LLU;
	int8_t x478 = 32;
	int8_t x479 = INT8_MAX;
	static volatile uint64_t t113 = 1635729LLU;

    t113 = (((x477%x478)^x479)%x480);

    if (t113 != 114LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x482 = UINT8_MAX;
	static volatile int8_t x483 = INT8_MIN;
	static uint8_t x484 = 12U;
	volatile int64_t t114 = 10LL;

    t114 = (((x481%x482)^x483)%x484);

    if (t114 != 7LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x486 = -1LL;
	volatile uint8_t x488 = 1U;
	static volatile int64_t t115 = 966LL;

    t115 = (((x485%x486)^x487)%x488);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x489 = -2032591635705249LL;
	int64_t x490 = -575LL;
	uint32_t x491 = 7988U;
	static int8_t x492 = INT8_MAX;
	static int64_t t116 = 509908997LL;

    t116 = (((x489%x490)^x491)%x492);

    if (t116 != -53LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = INT8_MIN;
	int64_t x494 = -1LL;
	int16_t x496 = -1;
	int64_t t117 = -678LL;

    t117 = (((x493%x494)^x495)%x496);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x499 = INT32_MIN;

    t118 = (((x497%x498)^x499)%x500);

    if (t118 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x501 = -1;
	uint64_t x504 = 30873342LLU;
	static volatile uint64_t t119 = 1056112100250943952LLU;

    t119 = (((x501%x502)^x503)%x504);

    if (t119 != 32767LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x505 = 2942336948961990826LLU;
	uint64_t x506 = 514428564LLU;
	int8_t x507 = INT8_MIN;
	static uint16_t x508 = 9U;
	uint64_t t120 = 874881LLU;

    t120 = (((x505%x506)^x507)%x508);

    if (t120 != 3LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x513 = 125073807232LL;
	int16_t x514 = -1;
	int32_t x515 = INT32_MAX;
	int64_t t121 = 574505555LL;

    t121 = (((x513%x514)^x515)%x516);

    if (t121 != 1LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x525 = -1;
	uint16_t x526 = UINT16_MAX;
	volatile int8_t x527 = -28;
	volatile uint64_t x528 = 628868932794846LLU;
	static volatile uint64_t t122 = 5572LLU;

    t122 = (((x525%x526)^x527)%x528);

    if (t122 != 27LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x529 = 696528976U;
	volatile int16_t x530 = INT16_MIN;
	int64_t x531 = INT64_MIN;
	volatile int64_t x532 = 341401040504225378LL;
	volatile int64_t t123 = -7044269LL;

    t123 = (((x529%x530)^x531)%x532);

    if (t123 != -5543942544161626LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x533 = 800;
	volatile int32_t x534 = INT32_MIN;
	static uint16_t x536 = 236U;
	volatile int32_t t124 = 163053;

    t124 = (((x533%x534)^x535)%x536);

    if (t124 != -140) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x537 = INT32_MIN;
	int32_t x538 = -1;
	int16_t x539 = INT16_MIN;
	static int64_t x540 = -1LL;
	int64_t t125 = 0LL;

    t125 = (((x537%x538)^x539)%x540);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile uint16_t x541 = 72U;
	uint16_t x542 = UINT16_MAX;
	uint32_t x543 = UINT32_MAX;
	static int8_t x544 = -1;
	uint32_t t126 = 12937U;

    t126 = (((x541%x542)^x543)%x544);

    if (t126 != 4294967223U) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x545 = INT32_MAX;
	volatile int16_t x546 = -1;
	int8_t x547 = INT8_MIN;
	static volatile uint16_t x548 = 1U;
	int32_t t127 = 939022;

    t127 = (((x545%x546)^x547)%x548);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x549 = INT8_MAX;
	uint32_t x551 = 1785U;
	int32_t x552 = INT32_MIN;
	volatile uint64_t t128 = 42LLU;

    t128 = (((x549%x550)^x551)%x552);

    if (t128 != 1670LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x554 = INT64_MAX;
	volatile int32_t x555 = 193321;
	uint64_t x556 = 3707445048150914815LLU;
	volatile uint64_t t129 = 10522319534LLU;

    t129 = (((x553%x554)^x555)%x556);

    if (t129 != 193319LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -1LL;
	int8_t x559 = INT8_MIN;
	int16_t x560 = INT16_MIN;
	int64_t t130 = 451101262066LL;

    t130 = (((x557%x558)^x559)%x560);

    if (t130 != -128LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x561 = -1;
	static uint16_t x562 = 1U;
	int16_t x563 = INT16_MAX;
	uint32_t x564 = UINT32_MAX;
	volatile uint32_t t131 = 396082U;

    t131 = (((x561%x562)^x563)%x564);

    if (t131 != 32767U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x565 = 42U;
	static uint32_t x567 = UINT32_MAX;
	volatile int32_t x568 = -1;
	static volatile uint32_t t132 = 34U;

    t132 = (((x565%x566)^x567)%x568);

    if (t132 != 4294967253U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x569 = INT64_MIN;
	volatile uint16_t x570 = UINT16_MAX;
	static int64_t x571 = -16029336584699142LL;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t133 = 1283742350220LLU;

    t133 = (((x569%x570)^x571)%x572);

    if (t133 != 16029336584700666LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x573 = 33;
	int16_t x574 = INT16_MIN;
	static uint64_t x575 = 500905514LLU;
	int8_t x576 = -1;
	uint64_t t134 = 329343739083LLU;

    t134 = (((x573%x574)^x575)%x576);

    if (t134 != 500905483LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x578 = UINT32_MAX;
	uint32_t t135 = 15690U;

    t135 = (((x577%x578)^x579)%x580);

    if (t135 != 2147516415U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x581 = -1LL;
	uint16_t x582 = 4790U;
	static int32_t x583 = -1;
	static int32_t x584 = INT32_MIN;

    t136 = (((x581%x582)^x583)%x584);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x586 = -1;
	int64_t x588 = INT64_MIN;
	int64_t t137 = -215540LL;

    t137 = (((x585%x586)^x587)%x588);

    if (t137 != -2147483648LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x589 = 3;
	static volatile int8_t x590 = INT8_MIN;
	volatile uint8_t x592 = 47U;
	int64_t t138 = 2948714LL;

    t138 = (((x589%x590)^x591)%x592);

    if (t138 != -4LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x593 = INT32_MIN;
	uint64_t x594 = 355646LLU;
	int64_t x595 = INT64_MIN;
	static int32_t x596 = INT32_MIN;

    t139 = (((x593%x594)^x595)%x596);

    if (t139 != 9223372036854972398LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x598 = -1;
	static int16_t x599 = 86;
	uint32_t t140 = 10968U;

    t140 = (((x597%x598)^x599)%x600);

    if (t140 != 444U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x602 = INT32_MIN;
	static uint64_t x603 = 194868309687700LLU;
	uint64_t t141 = 5221842754202LLU;

    t141 = (((x601%x602)^x603)%x604);

    if (t141 != 1079LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x605 = -997593942174391LL;
	static int32_t x606 = -1;
	int16_t x607 = 2;
	int64_t x608 = INT64_MAX;
	int64_t t142 = 1979681289LL;

    t142 = (((x605%x606)^x607)%x608);

    if (t142 != 2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x609 = 45291461;
	static uint16_t x610 = UINT16_MAX;
	static uint64_t x611 = 1308291519379530531LLU;

    t143 = (((x609%x610)^x611)%x612);

    if (t143 != 4602LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x613 = INT64_MIN;
	int32_t x615 = INT32_MIN;
	volatile int64_t t144 = -3136185938478LL;

    t144 = (((x613%x614)^x615)%x616);

    if (t144 != -11256LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x617 = INT8_MIN;
	int8_t x618 = -1;
	static int64_t x620 = 31988516453277LL;

    t145 = (((x617%x618)^x619)%x620);

    if (t145 != -32768LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x621 = UINT16_MAX;
	static volatile int32_t x622 = INT32_MAX;
	uint32_t x623 = UINT32_MAX;
	uint64_t x624 = 3104175LLU;
	uint64_t t146 = 13LLU;

    t146 = (((x621%x622)^x623)%x624);

    if (t146 != 1827735LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x625 = INT16_MIN;
	int16_t x626 = -1;
	int32_t x627 = 11879491;
	int32_t x628 = INT32_MIN;
	static volatile int32_t t147 = -937;

    t147 = (((x625%x626)^x627)%x628);

    if (t147 != 11879491) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x629 = -1LL;
	int64_t x630 = INT64_MAX;
	uint16_t x631 = 105U;
	int8_t x632 = INT8_MIN;
	volatile int64_t t148 = 466506976131LL;

    t148 = (((x629%x630)^x631)%x632);

    if (t148 != -106LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x633 = INT8_MIN;
	int64_t x634 = INT64_MIN;
	int64_t x635 = INT64_MIN;
	int8_t x636 = INT8_MIN;

    t149 = (((x633%x634)^x635)%x636);

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x637 = -1;
	uint32_t x638 = 41U;
	int64_t x639 = 99536695952912LL;
	static uint64_t x640 = 1126956LLU;
	uint64_t t150 = 10036146LLU;

    t150 = (((x637%x638)^x639)%x640);

    if (t150 != 1067816LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x642 = INT8_MIN;
	volatile int8_t x643 = -1;
	volatile uint8_t x644 = UINT8_MAX;
	volatile int32_t t151 = 736205;

    t151 = (((x641%x642)^x643)%x644);

    if (t151 != -25) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x645 = 30103LLU;
	uint8_t x646 = UINT8_MAX;
	volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t152 = 983497593LLU;

    t152 = (((x645%x646)^x647)%x648);

    if (t152 != 18446744071562067981LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	int32_t x650 = -170;
	volatile uint64_t t153 = 183987836LLU;

    t153 = (((x649%x650)^x651)%x652);

    if (t153 != 18446744073709551446LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x653 = -2;
	int32_t x654 = INT32_MAX;
	static int32_t x655 = 1222929;
	volatile int32_t t154 = -50;

    t154 = (((x653%x654)^x655)%x656);

    if (t154 != -9) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x658 = INT64_MIN;
	uint16_t x659 = UINT16_MAX;

    t155 = (((x657%x658)^x659)%x660);

    if (t155 != -65536LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x661 = 2;
	int64_t x662 = INT64_MIN;
	int8_t x663 = INT8_MIN;
	int8_t x664 = INT8_MAX;

    t156 = (((x661%x662)^x663)%x664);

    if (t156 != -126LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x666 = 61010LLU;
	int64_t x667 = INT64_MAX;
	int32_t x668 = INT32_MAX;
	uint64_t t157 = 46LLU;

    t157 = (((x665%x666)^x667)%x668);

    if (t157 != 2147473260LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x669 = UINT64_MAX;
	int64_t x670 = -1LL;
	uint64_t x672 = 505019216794160LLU;
	uint64_t t158 = 300756516708226LLU;

    t158 = (((x669%x670)^x671)%x672);

    if (t158 != 44038835654726LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x674 = -1;
	uint32_t x675 = 199451831U;
	uint16_t x676 = 5U;

    t159 = (((x673%x674)^x675)%x676);

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x677 = INT8_MIN;
	uint16_t x678 = 1U;
	uint32_t x679 = 161873U;
	int64_t x680 = INT64_MIN;
	int64_t t160 = 1LL;

    t160 = (((x677%x678)^x679)%x680);

    if (t160 != 161873LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint64_t x681 = UINT64_MAX;
	static uint8_t x682 = 18U;
	volatile int16_t x683 = 0;
	volatile uint64_t t161 = 228746898089298121LLU;

    t161 = (((x681%x682)^x683)%x684);

    if (t161 != 15LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x685 = 4U;
	volatile int32_t x687 = -28;
	int16_t x688 = INT16_MAX;
	uint32_t t162 = 2U;

    t162 = (((x685%x686)^x687)%x688);

    if (t162 != 32739U) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x689 = 6;
	static int64_t x690 = INT64_MIN;
	int8_t x691 = -1;
	int32_t x692 = INT32_MIN;
	int64_t t163 = -2241LL;

    t163 = (((x689%x690)^x691)%x692);

    if (t163 != -7LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x693 = UINT16_MAX;
	volatile int32_t x694 = INT32_MIN;
	volatile int32_t x695 = 998;
	static uint8_t x696 = 55U;
	volatile int32_t t164 = -3105;

    t164 = (((x693%x694)^x695)%x696);

    if (t164 != 22) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x698 = INT8_MIN;

    t165 = (((x697%x698)^x699)%x700);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x701 = INT64_MIN;
	int8_t x704 = -1;

    t166 = (((x701%x702)^x703)%x704);

    if (t166 != 18419888522672187795LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x705 = 1379894LL;
	static int64_t x707 = 2275LL;
	int8_t x708 = INT8_MAX;
	volatile int64_t t167 = -628024988393LL;

    t167 = (((x705%x706)^x707)%x708);

    if (t167 != 116LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x709 = INT16_MAX;
	uint8_t x710 = 1U;
	static int64_t x711 = -511474305323381LL;

    t168 = (((x709%x710)^x711)%x712);

    if (t168 != -98LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x713 = 4;
	uint64_t x715 = UINT64_MAX;
	volatile int64_t x716 = INT64_MIN;

    t169 = (((x713%x714)^x715)%x716);

    if (t169 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x717 = 1U;
	static int8_t x719 = INT8_MIN;
	int16_t x720 = INT16_MIN;

    t170 = (((x717%x718)^x719)%x720);

    if (t170 != -127) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x721 = -1LL;
	volatile int64_t x722 = -205511431243854LL;
	uint8_t x723 = UINT8_MAX;
	int8_t x724 = 3;
	volatile int64_t t171 = 16094563307555854LL;

    t171 = (((x721%x722)^x723)%x724);

    if (t171 != -1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x725 = 6957U;
	volatile uint32_t t172 = 14U;

    t172 = (((x725%x726)^x727)%x728);

    if (t172 != 2147477069U) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x729 = -6;
	int16_t x730 = -717;
	int16_t x731 = INT16_MIN;
	static uint64_t x732 = 40865239855LLU;
	static volatile uint64_t t173 = 12984LLU;

    t173 = (((x729%x730)^x731)%x732);

    if (t173 != 32762LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x733 = INT32_MIN;
	static uint32_t x734 = UINT32_MAX;
	int32_t x735 = 306871;
	int64_t x736 = -21020700613348261LL;
	volatile int64_t t174 = 126665546115933370LL;

    t174 = (((x733%x734)^x735)%x736);

    if (t174 != 2147790519LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x737 = -1;
	uint16_t x738 = 3U;
	static volatile uint16_t x739 = 664U;
	volatile int64_t t175 = 605LL;

    t175 = (((x737%x738)^x739)%x740);

    if (t175 != -147LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x741 = INT32_MIN;
	int64_t x743 = INT64_MIN;
	int16_t x744 = -1;
	int64_t t176 = 153739LL;

    t176 = (((x741%x742)^x743)%x744);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x745 = INT8_MAX;
	int64_t x748 = -1LL;
	int64_t t177 = 70419005081515LL;

    t177 = (((x745%x746)^x747)%x748);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x750 = UINT64_MAX;
	int8_t x751 = INT8_MAX;
	int8_t x752 = INT8_MIN;
	volatile uint64_t t178 = 205630091089LLU;

    t178 = (((x749%x750)^x751)%x752);

    if (t178 != 2147483520LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int16_t x753 = -1;
	uint8_t x754 = 90U;
	int32_t t179 = -735366859;

    t179 = (((x753%x754)^x755)%x756);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x758 = INT32_MAX;
	static volatile int64_t x759 = INT64_MIN;
	volatile uint32_t x760 = 940648126U;
	volatile int64_t t180 = -317949282034706LL;

    t180 = (((x757%x758)^x759)%x760);

    if (t180 != 106124450LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x761 = INT64_MIN;
	int16_t x762 = INT16_MIN;
	uint64_t x763 = 4785870497625LLU;
	uint64_t t181 = 355LLU;

    t181 = (((x761%x762)^x763)%x764);

    if (t181 != 16LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x765 = INT8_MIN;
	static volatile uint32_t x766 = 466246U;
	int32_t x767 = -3;
	int64_t x768 = INT64_MIN;

    t182 = (((x765%x766)^x767)%x768);

    if (t182 != 4294592035LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x769 = INT64_MAX;
	int8_t x770 = -6;
	int64_t x771 = INT64_MIN;
	volatile int64_t t183 = 710700168044266LL;

    t183 = (((x769%x770)^x771)%x772);

    if (t183 != -91070578637253LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x777 = 217478243033373460LL;
	static int8_t x778 = 1;
	int16_t x779 = -1;
	int32_t x780 = 10;
	static volatile int64_t t184 = 13246839279LL;

    t184 = (((x777%x778)^x779)%x780);

    if (t184 != -1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x781 = UINT8_MAX;
	volatile int64_t x782 = INT64_MAX;
	uint32_t x783 = 322537U;
	int8_t x784 = INT8_MAX;
	int64_t t185 = -12391972525552LL;

    t185 = (((x781%x782)^x783)%x784);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x785 = INT8_MIN;
	static int32_t x786 = -19;
	int8_t x787 = 9;
	volatile int32_t x788 = -4996;

    t186 = (((x785%x786)^x787)%x788);

    if (t186 != -5) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x789 = INT32_MAX;
	int8_t x790 = INT8_MIN;
	uint64_t x791 = 2136139098493LLU;
	volatile uint64_t t187 = 94972163635024744LLU;

    t187 = (((x789%x790)^x791)%x792);

    if (t187 != 2136139098370LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x794 = 9993U;
	int8_t x795 = INT8_MIN;
	static volatile int64_t x796 = -1LL;
	int64_t t188 = 11LL;

    t188 = (((x793%x794)^x795)%x796);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x798 = -1179;
	static int32_t x799 = -1;
	uint64_t x800 = UINT64_MAX;
	static uint64_t t189 = 248872069293902073LLU;

    t189 = (((x797%x798)^x799)%x800);

    if (t189 != 934LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x802 = 6689853U;
	int32_t x803 = -931545975;
	int64_t x804 = INT64_MIN;
	volatile int64_t t190 = -856173228903LL;

    t190 = (((x801%x802)^x803)%x804);

    if (t190 != 3363433666LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x806 = UINT64_MAX;
	volatile uint8_t x807 = 31U;
	uint8_t x808 = 15U;
	volatile uint64_t t191 = 13423753043LLU;

    t191 = (((x805%x806)^x807)%x808);

    if (t191 != 13LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x809 = INT8_MIN;
	volatile int64_t x811 = 2278530170148LL;
	int32_t x812 = -1;
	volatile int64_t t192 = -62LL;

    t192 = (((x809%x810)^x811)%x812);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x813 = INT64_MIN;
	volatile int8_t x815 = -1;
	static volatile uint64_t t193 = 192606LLU;

    t193 = (((x813%x814)^x815)%x816);

    if (t193 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x817 = 11037U;
	int8_t x818 = -1;
	volatile int64_t x819 = -172416268133LL;
	uint32_t x820 = 138953U;
	int64_t t194 = -1800387399259202LL;

    t194 = (((x817%x818)^x819)%x820);

    if (t194 != -43970LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x821 = 0U;
	int8_t x822 = INT8_MIN;
	uint8_t x824 = 111U;

    t195 = (((x821%x822)^x823)%x824);

    if (t195 != 33) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x826 = UINT8_MAX;
	volatile uint64_t x827 = 31159506156LLU;
	static uint64_t t196 = 6009176256352332LLU;

    t196 = (((x825%x826)^x827)%x828);

    if (t196 != 31159506067LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x829 = INT64_MAX;
	uint64_t x830 = UINT64_MAX;
	int8_t x831 = INT8_MIN;

    t197 = (((x829%x830)^x831)%x832);

    if (t197 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x833 = INT16_MIN;
	volatile int16_t x834 = -4;
	volatile uint64_t x835 = 463337587LLU;
	static uint8_t x836 = UINT8_MAX;
	volatile uint64_t t198 = 321367423126681442LLU;

    t198 = (((x833%x834)^x835)%x836);

    if (t198 != 37LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x837 = UINT64_MAX;
	volatile int32_t x838 = -1;
	int16_t x839 = -71;
	int32_t x840 = -126068127;
	uint64_t t199 = 981162887275LLU;

    t199 = (((x837%x838)^x839)%x840);

    if (t199 != 126068056LLU) { NG(); } else { ; }
	
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

