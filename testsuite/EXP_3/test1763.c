
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

uint32_t x4 = 2U;
int32_t x8 = INT32_MIN;
int64_t x9 = -50085054LL;
int32_t x13 = 730;
static int16_t x18 = -419;
static int16_t x20 = INT16_MIN;
volatile int8_t x28 = 3;
int64_t t7 = INT64_MAX;
static uint16_t x34 = 1U;
int64_t x35 = -1LL;
volatile int32_t t9 = 52030464;
static uint32_t x47 = 65221257U;
volatile uint32_t t12 = 134897464U;
uint16_t x55 = UINT16_MAX;
uint64_t x56 = 20230LLU;
static int16_t x60 = INT16_MIN;
static uint8_t x62 = UINT8_MAX;
volatile int8_t x66 = INT8_MIN;
volatile uint8_t x69 = UINT8_MAX;
static volatile int16_t x75 = INT16_MIN;
static int32_t x77 = INT32_MAX;
volatile int32_t x78 = 92;
int64_t x83 = INT64_MIN;
int32_t x86 = -119;
int8_t x88 = 1;
static uint32_t x95 = 20U;
static int64_t x99 = INT64_MIN;
static int8_t x105 = -1;
volatile uint8_t x109 = 0U;
static int64_t x111 = INT64_MIN;
static int16_t x112 = INT16_MIN;
volatile int64_t x119 = INT64_MAX;
int64_t x132 = -1LL;
uint16_t x134 = 2U;
int32_t x137 = -104;
volatile uint8_t x153 = 3U;
int16_t x157 = INT16_MIN;
int32_t x158 = -1;
uint32_t x159 = 53906013U;
int8_t x169 = INT8_MAX;
int64_t x173 = INT64_MAX;
uint16_t x178 = 0U;
int64_t x180 = -36037659917788924LL;
int32_t t47 = 124934049;
int8_t x193 = INT8_MIN;
int16_t x200 = -1;
uint64_t t49 = 1120086869612LLU;
int64_t x204 = 13929343991873LL;
uint32_t x213 = 3766U;
int16_t x217 = 1;
static volatile uint64_t t55 = 22306457473206329LLU;
volatile int16_t x227 = INT16_MIN;
uint32_t x234 = 11750192U;
uint16_t x236 = 264U;
static uint32_t t58 = 509748U;
int16_t x238 = -1;
uint64_t x239 = UINT64_MAX;
static int64_t x245 = 103650LL;
volatile int64_t x246 = 154224681785546LL;
uint8_t x250 = 30U;
int16_t x253 = -1;
volatile uint64_t x255 = 565953320817954979LLU;
volatile int32_t t63 = -770;
volatile int32_t x262 = 196489;
volatile int32_t x271 = 9763;
uint8_t x273 = UINT8_MAX;
int32_t x274 = 994848;
int64_t t71 = 2202LL;
int8_t x301 = INT8_MIN;
static uint8_t x314 = UINT8_MAX;
uint64_t t79 = 87645335098258294LLU;
int8_t x323 = INT8_MAX;
int32_t x325 = INT32_MIN;
volatile int64_t x326 = INT64_MAX;
int8_t x332 = INT8_MIN;
int8_t x338 = INT8_MIN;
static int16_t x340 = INT16_MIN;
uint64_t x343 = 4465346LLU;
static volatile uint8_t x345 = 4U;
int64_t x354 = -1LL;
static int32_t x355 = 3080545;
static int64_t x356 = -1LL;
static volatile uint16_t x364 = UINT16_MAX;
uint8_t x367 = 28U;
int32_t x371 = 61;
int64_t x372 = -1LL;
uint8_t x376 = 57U;
int8_t x382 = INT8_MAX;
int32_t t96 = -1;
int32_t x393 = -3;
uint8_t x399 = 40U;
volatile int32_t x400 = INT32_MIN;
volatile int32_t t99 = -979;
uint32_t x401 = 29841U;
int64_t x409 = 16106LL;
volatile int64_t t102 = 282LL;
volatile uint32_t x417 = 0U;
static int64_t t104 = -1836688220929LL;
int16_t x427 = 7;
int64_t x430 = INT64_MAX;
uint64_t x432 = 2945LLU;
int8_t x436 = -31;
int8_t x445 = -1;
static int32_t x451 = INT32_MIN;
volatile uint64_t t114 = 76780LLU;
int16_t x461 = -1;
uint32_t x465 = 566U;
int16_t x468 = -134;
static int64_t x478 = -1LL;
int16_t x490 = INT16_MIN;
int8_t x499 = -1;
int32_t x500 = -848;
uint32_t x508 = UINT32_MAX;
static int64_t t126 = -3970LL;
static int8_t x509 = -42;
int8_t x510 = 0;
volatile int32_t x511 = -1;
int8_t x512 = INT8_MIN;
int64_t x514 = INT64_MIN;
volatile int8_t x521 = -1;
int8_t x522 = INT8_MAX;
int32_t x524 = INT32_MIN;
volatile int16_t x531 = INT16_MAX;
int16_t x540 = INT16_MIN;
int8_t x542 = 0;
int64_t x546 = INT64_MAX;
int64_t x552 = -19356007LL;
int64_t x556 = 44742LL;
volatile int64_t t138 = -227059393485042127LL;
volatile int32_t x565 = INT32_MAX;
uint64_t x567 = 193322LLU;
int16_t x569 = -1;
uint32_t x570 = 30422578U;
uint64_t x583 = UINT64_MAX;
uint32_t x588 = UINT32_MAX;
int32_t t147 = 2241338;
uint32_t x599 = UINT32_MAX;
int64_t x603 = -1LL;
static uint8_t x604 = UINT8_MAX;
volatile int64_t t150 = 5999LL;
volatile int64_t t151 = 51293417115444505LL;
static int8_t x612 = INT8_MIN;
uint32_t t153 = 13678U;
int32_t x619 = INT32_MIN;
uint16_t x624 = UINT16_MAX;
static volatile uint64_t x626 = 71155819685LLU;
int16_t x627 = -1;
volatile int64_t x628 = -1LL;
int32_t x632 = INT32_MAX;
uint8_t x638 = 0U;
int8_t x643 = INT8_MIN;
uint64_t t160 = 39016340874753LLU;
uint16_t x645 = 23U;
uint8_t x653 = 82U;
int16_t x655 = 4854;
static int64_t x658 = -1LL;
static uint16_t x659 = 431U;
volatile int16_t x664 = INT16_MIN;
volatile int64_t t165 = 7601337756064LL;
volatile uint16_t x666 = 51U;
int32_t x668 = INT32_MAX;
uint32_t t167 = 64869759U;
int16_t x675 = -1;
volatile uint32_t t168 = 200244984U;
static int16_t x684 = INT16_MAX;
volatile int16_t x688 = -15928;
int16_t x689 = INT16_MAX;
int16_t x692 = INT16_MIN;
static int32_t x697 = 3;
int64_t x704 = INT64_MAX;
int32_t t175 = 25;
uint8_t x713 = 51U;
volatile uint32_t x715 = 12099564U;
static int16_t x721 = INT16_MIN;
uint16_t x724 = UINT16_MAX;
uint16_t x725 = 23U;
volatile int64_t x734 = -1LL;
uint64_t t184 = 9754096168LLU;
volatile int8_t x744 = INT8_MIN;
int64_t t185 = -2648336LL;
static volatile uint32_t x747 = 12733713U;
static int8_t x748 = -1;
volatile int8_t x750 = INT8_MIN;
uint8_t x751 = 108U;
uint64_t x762 = UINT64_MAX;
static int8_t x772 = 1;
int16_t x773 = INT16_MAX;
static int32_t x774 = -926306;
int16_t x775 = INT16_MIN;
uint16_t x777 = 114U;
uint32_t x781 = UINT32_MAX;
int16_t x789 = 515;
static int32_t x799 = -13;


void f0(void) {
    	int64_t x1 = INT64_MIN;
	static int16_t x2 = 0;
	int8_t x3 = -1;
	int64_t t0 = -4615613066635886LL;

    t0 = ((x1^x2)|(x3>x4));

    if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = INT32_MIN;
	volatile uint16_t x6 = 4U;
	int32_t x7 = -1;
	volatile int32_t t1 = 1196015;

    t1 = ((x5^x6)|(x7>x8));

    if (t1 != -2147483643) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = -1832;
	uint8_t x11 = 8U;
	int16_t x12 = -1;
	static volatile int64_t t2 = 85067621799LL;

    t2 = ((x9^x10)|(x11>x12));

    if (t2 != 50084763LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x14 = 248652U;
	static volatile int64_t x15 = -1LL;
	int8_t x16 = INT8_MIN;
	uint32_t t3 = 2039791U;

    t3 = ((x13^x14)|(x15>x16));

    if (t3 != 248215U) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x17 = -1;
	int16_t x19 = INT16_MIN;
	int32_t t4 = 763742;

    t4 = ((x17^x18)|(x19>x20));

    if (t4 != 418) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = -216;
	int16_t x22 = -1;
	volatile int16_t x23 = INT16_MIN;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 52;

    t5 = ((x21^x22)|(x23>x24));

    if (t5 != 215) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = -1;
	uint32_t x26 = 5514903U;
	volatile int64_t x27 = 950923141LL;
	uint32_t t6 = 109000U;

    t6 = ((x25^x26)|(x27>x28));

    if (t6 != 4289452393U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -1LL;
	volatile int64_t x30 = INT64_MIN;
	uint8_t x31 = 1U;
	uint8_t x32 = UINT8_MAX;

    t7 = ((x29^x30)|(x31>x32));

    if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x33 = INT32_MIN;
	volatile uint8_t x36 = 2U;
	volatile int32_t t8 = 258889;

    t8 = ((x33^x34)|(x35>x36));

    if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x37 = 8306;
	int16_t x38 = INT16_MAX;
	volatile int64_t x39 = INT64_MIN;
	uint16_t x40 = 3532U;

    t9 = ((x37^x38)|(x39>x40));

    if (t9 != 24461) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -348820220230LL;
	volatile uint64_t x42 = UINT64_MAX;
	static int8_t x43 = INT8_MIN;
	volatile int16_t x44 = -1;
	volatile uint64_t t10 = 5011036246824LLU;

    t10 = ((x41^x42)|(x43>x44));

    if (t10 != 348820220229LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 34465047051042721LL;
	uint16_t x46 = 3999U;
	uint16_t x48 = UINT16_MAX;
	volatile int64_t t11 = -3194292115124595564LL;

    t11 = ((x45^x46)|(x47>x48));

    if (t11 != 34465047051038783LL) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	static int16_t x50 = 9;
	int64_t x51 = 61846021LL;
	int64_t x52 = -1LL;

    t12 = ((x49^x50)|(x51>x52));

    if (t12 != 4294967287U) { NG(); } else { ; }
	
}

void f13(void) {
    	static int32_t x53 = -1;
	int64_t x54 = INT64_MIN;
	static volatile int64_t t13 = INT64_MAX;

    t13 = ((x53^x54)|(x55>x56));

    if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = -1;
	int8_t x58 = INT8_MIN;
	int64_t x59 = 298044275976914LL;
	volatile int32_t t14 = -18285;

    t14 = ((x57^x58)|(x59>x60));

    if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x61 = -1;
	int32_t x63 = 1295009;
	int8_t x64 = -1;
	static int32_t t15 = -168073550;

    t15 = ((x61^x62)|(x63>x64));

    if (t15 != -255) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x67 = -1;
	uint16_t x68 = UINT16_MAX;
	int64_t t16 = 262725287221303LL;

    t16 = ((x65^x66)|(x67>x68));

    if (t16 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x70 = 31U;
	int32_t x71 = -1;
	uint32_t x72 = UINT32_MAX;
	volatile int32_t t17 = -97;

    t17 = ((x69^x70)|(x71>x72));

    if (t17 != 224) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = -8;
	static uint16_t x74 = UINT16_MAX;
	volatile uint64_t x76 = 85488052371565311LLU;
	volatile int32_t t18 = 321242433;

    t18 = ((x73^x74)|(x75>x76));

    if (t18 != -65529) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x79 = -5;
	static volatile int8_t x80 = -1;
	volatile int32_t t19 = -157067996;

    t19 = ((x77^x78)|(x79>x80));

    if (t19 != 2147483555) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = -17;
	uint16_t x82 = 992U;
	int64_t x84 = -1LL;
	volatile int32_t t20 = 1;

    t20 = ((x81^x82)|(x83>x84));

    if (t20 != -1009) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x85 = INT32_MIN;
	int8_t x87 = INT8_MAX;
	volatile int32_t t21 = -3134;

    t21 = ((x85^x86)|(x87>x88));

    if (t21 != 2147483529) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x89 = 8812LLU;
	static int32_t x90 = -1;
	volatile int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t22 = 402275LLU;

    t22 = ((x89^x90)|(x91>x92));

    if (t22 != 18446744073709542803LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x93 = UINT8_MAX;
	uint8_t x94 = UINT8_MAX;
	int8_t x96 = -1;
	volatile int32_t t23 = 752;

    t23 = ((x93^x94)|(x95>x96));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	uint8_t x98 = 26U;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -1;

    t24 = ((x97^x98)|(x99>x100));

    if (t24 != -32742) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = -681;
	static uint16_t x102 = UINT16_MAX;
	int16_t x103 = -1;
	int32_t x104 = -1;
	int32_t t25 = 1;

    t25 = ((x101^x102)|(x103>x104));

    if (t25 != -64856) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x106 = UINT8_MAX;
	volatile uint16_t x107 = 29524U;
	uint8_t x108 = 1U;
	volatile int32_t t26 = 114;

    t26 = ((x105^x106)|(x107>x108));

    if (t26 != -255) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x110 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

    t27 = ((x109^x110)|(x111>x112));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = UINT8_MAX;
	static uint64_t x114 = 312424150796LLU;
	static uint8_t x115 = 13U;
	static int8_t x116 = 5;
	volatile uint64_t t28 = 4378301858LLU;

    t28 = ((x113^x114)|(x115>x116));

    if (t28 != 312424151027LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int64_t x117 = -215445385945LL;
	int32_t x118 = 109518347;
	uint64_t x120 = 184118274592315834LLU;
	int64_t t29 = -22943306632992417LL;

    t29 = ((x117^x118)|(x119>x120));

    if (t29 != -215537724627LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 1183U;
	volatile uint64_t x122 = 2987738649301LLU;
	int16_t x123 = 1189;
	static uint8_t x124 = UINT8_MAX;
	uint64_t t30 = 26LLU;

    t30 = ((x121^x122)|(x123>x124));

    if (t30 != 2987738650187LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	uint32_t x126 = 0U;
	uint32_t x127 = 890908U;
	int16_t x128 = INT16_MIN;
	volatile uint32_t t31 = 6110U;

    t31 = ((x125^x126)|(x127>x128));

    if (t31 != 4294934528U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x129 = 1693U;
	static uint16_t x130 = 20387U;
	uint32_t x131 = UINT32_MAX;
	static uint32_t t32 = 28734U;

    t32 = ((x129^x130)|(x131>x132));

    if (t32 != 18751U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x133 = UINT16_MAX;
	int16_t x135 = -1;
	static uint16_t x136 = 310U;
	volatile int32_t t33 = 0;

    t33 = ((x133^x134)|(x135>x136));

    if (t33 != 65533) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x138 = 8761570LL;
	int8_t x139 = INT8_MAX;
	volatile int32_t x140 = -225629;
	volatile int64_t t34 = -4924182593091756LL;

    t34 = ((x137^x138)|(x139>x140));

    if (t34 != -8761477LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x141 = 1U;
	int32_t x142 = 1003679134;
	static uint8_t x143 = 3U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 7858117;

    t35 = ((x141^x142)|(x143>x144));

    if (t35 != 1003679135) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = INT64_MIN;
	int32_t x146 = INT32_MIN;
	int8_t x147 = -1;
	uint16_t x148 = 28U;
	int64_t t36 = 7013LL;

    t36 = ((x145^x146)|(x147>x148));

    if (t36 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x149 = 46;
	int16_t x150 = INT16_MIN;
	int8_t x151 = -1;
	volatile uint32_t x152 = 0U;
	int32_t t37 = 28806714;

    t37 = ((x149^x150)|(x151>x152));

    if (t37 != -32721) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x154 = INT32_MIN;
	static int8_t x155 = INT8_MIN;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 8;

    t38 = ((x153^x154)|(x155>x156));

    if (t38 != -2147483645) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x160 = -1;
	volatile int32_t t39 = -290611;

    t39 = ((x157^x158)|(x159>x160));

    if (t39 != 32767) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x161 = 7000;
	int8_t x162 = 0;
	static int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MAX;
	int32_t t40 = -16;

    t40 = ((x161^x162)|(x163>x164));

    if (t40 != 7000) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x165 = INT32_MIN;
	volatile int16_t x166 = -1;
	uint64_t x167 = 755701041500546LLU;
	int16_t x168 = -1;
	int32_t t41 = INT32_MAX;

    t41 = ((x165^x166)|(x167>x168));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x170 = INT32_MIN;
	static uint64_t x171 = 250326297005LLU;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = 77738;

    t42 = ((x169^x170)|(x171>x172));

    if (t42 != -2147483521) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x174 = UINT8_MAX;
	volatile uint32_t x175 = UINT32_MAX;
	volatile int32_t x176 = -1;
	int64_t t43 = 47628LL;

    t43 = ((x173^x174)|(x175>x176));

    if (t43 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = -983;
	int32_t x179 = INT32_MIN;
	volatile int32_t t44 = -398783;

    t44 = ((x177^x178)|(x179>x180));

    if (t44 != -983) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = UINT16_MAX;
	int32_t x184 = -105046952;
	int32_t t45 = 357138;

    t45 = ((x181^x182)|(x183>x184));

    if (t45 != -32641) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x185 = 0U;
	int8_t x186 = INT8_MIN;
	int64_t x187 = -41006LL;
	static int64_t x188 = INT64_MIN;
	static volatile int32_t t46 = -815032919;

    t46 = ((x185^x186)|(x187>x188));

    if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x189 = 11U;
	int32_t x190 = 863067328;
	static int8_t x191 = 0;
	int16_t x192 = -237;

    t47 = ((x189^x190)|(x191>x192));

    if (t47 != 863067339) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x194 = INT16_MIN;
	static uint16_t x195 = 1017U;
	volatile int8_t x196 = 7;
	int32_t t48 = -141;

    t48 = ((x193^x194)|(x195>x196));

    if (t48 != 32641) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 1611620412U;
	int64_t x199 = -1LL;

    t49 = ((x197^x198)|(x199>x200));

    if (t49 != 18446744072097931203LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile uint16_t x201 = UINT16_MAX;
	static int64_t x202 = -108132LL;
	uint16_t x203 = 1U;
	int64_t t50 = 422425LL;

    t50 = ((x201^x202)|(x203>x204));

    if (t50 != -88477LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x205 = INT16_MIN;
	static uint16_t x206 = 9564U;
	uint16_t x207 = 2U;
	volatile int32_t x208 = INT32_MIN;
	static int32_t t51 = 56490;

    t51 = ((x205^x206)|(x207>x208));

    if (t51 != -23203) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MIN;
	uint64_t x210 = 24924LLU;
	static uint64_t x211 = UINT64_MAX;
	volatile int16_t x212 = -1;
	uint64_t t52 = 5463240444487293494LLU;

    t52 = ((x209^x210)|(x211>x212));

    if (t52 != 9223372036854800732LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x214 = INT64_MIN;
	uint64_t x215 = 90LLU;
	uint16_t x216 = 19647U;
	int64_t t53 = -2701670935LL;

    t53 = ((x213^x214)|(x215>x216));

    if (t53 != -9223372036854772042LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x218 = 10U;
	volatile int32_t x219 = -1;
	static int64_t x220 = INT64_MAX;
	int32_t t54 = -380065;

    t54 = ((x217^x218)|(x219>x220));

    if (t54 != 11) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint64_t x221 = 8768180993800444775LLU;
	uint16_t x222 = UINT16_MAX;
	volatile int64_t x223 = INT64_MIN;
	static int16_t x224 = INT16_MAX;

    t55 = ((x221^x222)|(x223>x224));

    if (t55 != 8768180993800430744LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x225 = 1;
	static uint8_t x226 = 0U;
	static volatile uint8_t x228 = 74U;
	int32_t t56 = 11131;

    t56 = ((x225^x226)|(x227>x228));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x229 = INT32_MIN;
	uint64_t x230 = 4LLU;
	int8_t x231 = 3;
	int32_t x232 = INT32_MIN;
	static uint64_t t57 = 15725573337356LLU;

    t57 = ((x229^x230)|(x231>x232));

    if (t57 != 18446744071562067973LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x235 = INT32_MIN;

    t58 = ((x233^x234)|(x235>x236));

    if (t58 != 2159233840U) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint16_t x237 = 6368U;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t59 = -7575;

    t59 = ((x237^x238)|(x239>x240));

    if (t59 != -6369) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x241 = UINT64_MAX;
	uint16_t x242 = 96U;
	uint16_t x243 = 9934U;
	uint8_t x244 = 48U;
	volatile uint64_t t60 = 16445828544097622LLU;

    t60 = ((x241^x242)|(x243>x244));

    if (t60 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	static int64_t t61 = -284939LL;

    t61 = ((x245^x246)|(x247>x248));

    if (t61 != 154224681684008LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint8_t x249 = 12U;
	static volatile int32_t x251 = INT32_MIN;
	volatile uint32_t x252 = 761257790U;
	volatile int32_t t62 = -56370459;

    t62 = ((x249^x250)|(x251>x252));

    if (t62 != 19) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint8_t x254 = 84U;
	uint64_t x256 = 81LLU;

    t63 = ((x253^x254)|(x255>x256));

    if (t63 != -85) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x257 = INT64_MIN;
	int32_t x258 = INT32_MAX;
	uint32_t x259 = 246525271U;
	int8_t x260 = INT8_MIN;
	static volatile int64_t t64 = 44732385451258LL;

    t64 = ((x257^x258)|(x259>x260));

    if (t64 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x261 = INT32_MAX;
	int16_t x263 = -147;
	volatile int16_t x264 = -1;
	static int32_t t65 = -17719362;

    t65 = ((x261^x262)|(x263>x264));

    if (t65 != 2147287158) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x265 = -1;
	uint8_t x266 = 1U;
	int16_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = 150823;

    t66 = ((x265^x266)|(x267>x268));

    if (t66 != -2) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x269 = -2;
	int8_t x270 = INT8_MIN;
	uint16_t x272 = 122U;
	static volatile int32_t t67 = 267;

    t67 = ((x269^x270)|(x271>x272));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x275 = 7;
	int8_t x276 = 50;
	volatile int32_t t68 = -2;

    t68 = ((x273^x274)|(x275>x276));

    if (t68 != 995039) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x277 = -52;
	uint16_t x278 = 782U;
	int64_t x279 = INT64_MIN;
	static volatile uint32_t x280 = UINT32_MAX;
	volatile int32_t t69 = -58315354;

    t69 = ((x277^x278)|(x279>x280));

    if (t69 != -830) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x281 = 993171792991LL;
	volatile int64_t x282 = -51068942243304LL;
	static int8_t x283 = INT8_MIN;
	volatile int16_t x284 = INT16_MAX;
	volatile int64_t t70 = -20524502347054LL;

    t70 = ((x281^x282)|(x283>x284));

    if (t70 != -51218954039737LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MIN;
	int32_t x286 = -4398;
	static uint64_t x287 = UINT64_MAX;
	uint16_t x288 = 9U;

    t71 = ((x285^x286)|(x287>x288));

    if (t71 != 9223372036854771411LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x289 = INT8_MIN;
	static int8_t x290 = INT8_MAX;
	uint8_t x291 = 93U;
	uint8_t x292 = 1U;
	int32_t t72 = 1044;

    t72 = ((x289^x290)|(x291>x292));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x293 = INT64_MIN;
	uint16_t x294 = 3315U;
	uint8_t x295 = 0U;
	uint64_t x296 = 36702810650LLU;
	int64_t t73 = -322876743280LL;

    t73 = ((x293^x294)|(x295>x296));

    if (t73 != -9223372036854772493LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x297 = INT64_MAX;
	static int32_t x298 = INT32_MIN;
	static uint8_t x299 = 12U;
	int16_t x300 = INT16_MIN;
	static int64_t t74 = 7622006775295650LL;

    t74 = ((x297^x298)|(x299>x300));

    if (t74 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x302 = -168162019613314182LL;
	int32_t x303 = 0;
	volatile int32_t x304 = -1;
	static int64_t t75 = 16LL;

    t75 = ((x301^x302)|(x303>x304));

    if (t75 != 168162019613314299LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x305 = 64U;
	int16_t x306 = 51;
	static int8_t x307 = -1;
	int64_t x308 = INT64_MIN;
	int32_t t76 = -7151;

    t76 = ((x305^x306)|(x307>x308));

    if (t76 != 115) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x309 = INT8_MIN;
	static int8_t x310 = -1;
	int64_t x311 = -397LL;
	uint16_t x312 = 9798U;
	static volatile int32_t t77 = -6905297;

    t77 = ((x309^x310)|(x311>x312));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x313 = INT64_MIN;
	uint32_t x315 = 138U;
	int16_t x316 = INT16_MAX;
	int64_t t78 = -19368LL;

    t78 = ((x313^x314)|(x315>x316));

    if (t78 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x317 = 0U;
	static uint64_t x318 = 31838161680359LLU;
	volatile int16_t x319 = -6;
	int8_t x320 = -1;

    t79 = ((x317^x318)|(x319>x320));

    if (t79 != 31838161680359LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x321 = 385818115284873968LL;
	uint16_t x322 = 1U;
	volatile int8_t x324 = INT8_MAX;
	static int64_t t80 = 135757988310508259LL;

    t80 = ((x321^x322)|(x323>x324));

    if (t80 != 385818115284873969LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x327 = 7U;
	uint8_t x328 = 0U;
	static int64_t t81 = 1408040LL;

    t81 = ((x325^x326)|(x327>x328));

    if (t81 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	int16_t x331 = -4074;
	volatile int64_t t82 = 6507604LL;

    t82 = ((x329^x330)|(x331>x332));

    if (t82 != -256LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = INT16_MIN;
	volatile uint16_t x334 = 41U;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MIN;
	static int32_t t83 = -198358;

    t83 = ((x333^x334)|(x335>x336));

    if (t83 != -32727) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x337 = 2088U;
	volatile uint8_t x339 = 11U;
	int32_t t84 = 867;

    t84 = ((x337^x338)|(x339>x340));

    if (t84 != -2135) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x341 = INT64_MIN;
	int32_t x342 = -1;
	volatile uint64_t x344 = 849342900146997271LLU;
	int64_t t85 = INT64_MAX;

    t85 = ((x341^x342)|(x343>x344));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x346 = -1;
	static int32_t x347 = INT32_MIN;
	int64_t x348 = -100306941359564501LL;
	int32_t t86 = -42166899;

    t86 = ((x345^x346)|(x347>x348));

    if (t86 != -5) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 38U;
	static int32_t x350 = -1;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = 3U;
	volatile int32_t t87 = -1;

    t87 = ((x349^x350)|(x351>x352));

    if (t87 != -39) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x353 = UINT8_MAX;
	static int64_t t88 = -188769LL;

    t88 = ((x353^x354)|(x355>x356));

    if (t88 != -255LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 296902U;
	int8_t x358 = 1;
	static volatile uint16_t x359 = 2934U;
	int8_t x360 = INT8_MAX;
	volatile uint32_t t89 = 3311146U;

    t89 = ((x357^x358)|(x359>x360));

    if (t89 != 296903U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x361 = INT64_MIN;
	volatile int8_t x362 = INT8_MIN;
	volatile uint32_t x363 = UINT32_MAX;
	int64_t t90 = -151103182629611568LL;

    t90 = ((x361^x362)|(x363>x364));

    if (t90 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x365 = UINT32_MAX;
	uint32_t x366 = UINT32_MAX;
	uint32_t x368 = UINT32_MAX;
	uint32_t t91 = 183154U;

    t91 = ((x365^x366)|(x367>x368));

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x369 = 2;
	uint8_t x370 = 20U;
	volatile int32_t t92 = 0;

    t92 = ((x369^x370)|(x371>x372));

    if (t92 != 23) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	static int16_t x375 = 4;
	volatile int64_t t93 = 32219666718LL;

    t93 = ((x373^x374)|(x375>x376));

    if (t93 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int8_t x377 = -4;
	int8_t x378 = -3;
	int64_t x379 = INT64_MAX;
	int8_t x380 = INT8_MAX;
	volatile int32_t t94 = 0;

    t94 = ((x377^x378)|(x379>x380));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int64_t x381 = 538LL;
	int8_t x383 = INT8_MIN;
	static int8_t x384 = INT8_MAX;
	int64_t t95 = -91360LL;

    t95 = ((x381^x382)|(x383>x384));

    if (t95 != 613LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = INT16_MAX;
	static int64_t x387 = -1LL;
	int16_t x388 = INT16_MIN;

    t96 = ((x385^x386)|(x387>x388));

    if (t96 != -2147450881) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = -1LL;
	volatile int64_t x390 = 103685974758200093LL;
	int32_t x391 = -1;
	int16_t x392 = 11987;
	static int64_t t97 = -3490815268732LL;

    t97 = ((x389^x390)|(x391>x392));

    if (t97 != -103685974758200094LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x394 = 25168U;
	int64_t x395 = -58LL;
	uint8_t x396 = 104U;
	static int32_t t98 = -361;

    t98 = ((x393^x394)|(x395>x396));

    if (t98 != -25171) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x397 = INT32_MAX;
	int8_t x398 = INT8_MIN;

    t99 = ((x397^x398)|(x399>x400));

    if (t99 != -2147483521) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x402 = INT64_MIN;
	static int64_t x403 = INT64_MAX;
	uint8_t x404 = 0U;
	int64_t t100 = -92187904299868751LL;

    t100 = ((x401^x402)|(x403>x404));

    if (t100 != -9223372036854745967LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int32_t x405 = -1;
	volatile int8_t x406 = -1;
	static uint64_t x407 = UINT64_MAX;
	int8_t x408 = 11;
	volatile int32_t t101 = 698;

    t101 = ((x405^x406)|(x407>x408));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x410 = UINT32_MAX;
	int8_t x411 = -49;
	uint32_t x412 = 0U;

    t102 = ((x409^x410)|(x411>x412));

    if (t102 != 4294951189LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x413 = -1LL;
	uint16_t x414 = 2U;
	int16_t x415 = INT16_MAX;
	volatile int16_t x416 = -1;
	volatile int64_t t103 = -24672943694LL;

    t103 = ((x413^x414)|(x415>x416));

    if (t103 != -3LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x418 = -1LL;
	static int32_t x419 = INT32_MAX;
	int32_t x420 = -1;

    t104 = ((x417^x418)|(x419>x420));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x421 = UINT16_MAX;
	volatile uint32_t x422 = UINT32_MAX;
	int8_t x423 = 2;
	int64_t x424 = INT64_MIN;
	static volatile uint32_t t105 = 1829612U;

    t105 = ((x421^x422)|(x423>x424));

    if (t105 != 4294901761U) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	uint64_t x426 = 155178415LLU;
	static int64_t x428 = INT64_MIN;
	volatile uint64_t t106 = 1765537423112LLU;

    t106 = ((x425^x426)|(x427>x428));

    if (t106 != 9223372037009954223LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x429 = -772815792;
	static int32_t x431 = INT32_MIN;
	volatile int64_t t107 = -483LL;

    t107 = ((x429^x430)|(x431>x432));

    if (t107 != -9223372036081960017LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x433 = 1LLU;
	int64_t x434 = INT64_MIN;
	int32_t x435 = -42457463;
	volatile uint64_t t108 = 1909LLU;

    t108 = ((x433^x434)|(x435>x436));

    if (t108 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x437 = INT8_MAX;
	static uint32_t x438 = UINT32_MAX;
	volatile int64_t x439 = -35301LL;
	int16_t x440 = INT16_MIN;
	uint32_t t109 = 619U;

    t109 = ((x437^x438)|(x439>x440));

    if (t109 != 4294967168U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	int16_t x442 = -5;
	uint32_t x443 = 8069748U;
	int16_t x444 = 463;
	int64_t t110 = -2077708LL;

    t110 = ((x441^x442)|(x443>x444));

    if (t110 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x446 = INT64_MAX;
	uint64_t x447 = UINT64_MAX;
	int32_t x448 = INT32_MIN;
	int64_t t111 = -1LL;

    t111 = ((x445^x446)|(x447>x448));

    if (t111 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x449 = UINT8_MAX;
	int64_t x450 = INT64_MIN;
	int64_t x452 = INT64_MIN;
	volatile int64_t t112 = -1211822LL;

    t112 = ((x449^x450)|(x451>x452));

    if (t112 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x453 = 6905633LLU;
	int8_t x454 = 11;
	static int8_t x455 = INT8_MIN;
	uint64_t x456 = UINT64_MAX;
	static uint64_t t113 = 5658LLU;

    t113 = ((x453^x454)|(x455>x456));

    if (t113 != 6905642LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x457 = 596LLU;
	int8_t x458 = -1;
	int64_t x459 = INT64_MIN;
	uint8_t x460 = 1U;

    t114 = ((x457^x458)|(x459>x460));

    if (t114 != 18446744073709551019LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x462 = 0;
	static int8_t x463 = 63;
	int16_t x464 = INT16_MIN;
	volatile int32_t t115 = 93;

    t115 = ((x461^x462)|(x463>x464));

    if (t115 != -1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x466 = INT8_MIN;
	volatile int64_t x467 = INT64_MAX;
	uint32_t t116 = 1432477U;

    t116 = ((x465^x466)|(x467>x468));

    if (t116 != 4294966711U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x469 = UINT64_MAX;
	int64_t x470 = 27362332041327LL;
	int64_t x471 = INT64_MIN;
	int64_t x472 = INT64_MIN;
	static uint64_t t117 = 27980094446LLU;

    t117 = ((x469^x470)|(x471>x472));

    if (t117 != 18446716711377510288LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x473 = 514U;
	volatile int32_t x474 = -1;
	uint16_t x475 = 3751U;
	volatile uint32_t x476 = UINT32_MAX;
	int32_t t118 = -1;

    t118 = ((x473^x474)|(x475>x476));

    if (t118 != -515) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = 11408993;
	int32_t x479 = INT32_MAX;
	int64_t x480 = -15183258996LL;
	volatile int64_t t119 = -262333134587521LL;

    t119 = ((x477^x478)|(x479>x480));

    if (t119 != -11408993LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x481 = INT8_MAX;
	int16_t x482 = -1;
	int16_t x483 = -806;
	static int8_t x484 = INT8_MAX;
	int32_t t120 = -28;

    t120 = ((x481^x482)|(x483>x484));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x485 = -78664593039LL;
	uint8_t x486 = 1U;
	uint32_t x487 = 497398U;
	uint16_t x488 = UINT16_MAX;
	volatile int64_t t121 = 145904LL;

    t121 = ((x485^x486)|(x487>x488));

    if (t121 != -78664593039LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x489 = 84LL;
	static int8_t x491 = INT8_MIN;
	static volatile int16_t x492 = INT16_MAX;
	int64_t t122 = -4035945033427LL;

    t122 = ((x489^x490)|(x491>x492));

    if (t122 != -32684LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = INT64_MIN;
	uint64_t x494 = 259262602LLU;
	int16_t x495 = INT16_MIN;
	int64_t x496 = 299405LL;
	volatile uint64_t t123 = 171820522LLU;

    t123 = ((x493^x494)|(x495>x496));

    if (t123 != 9223372037114038410LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x497 = INT8_MIN;
	int32_t x498 = 120;
	volatile int32_t t124 = -853503147;

    t124 = ((x497^x498)|(x499>x500));

    if (t124 != -7) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x501 = -18277;
	int64_t x502 = INT64_MIN;
	volatile int64_t x503 = 1252994366LL;
	int16_t x504 = INT16_MIN;
	static int64_t t125 = -1LL;

    t125 = ((x501^x502)|(x503>x504));

    if (t125 != 9223372036854757531LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = INT32_MIN;
	volatile int64_t x506 = INT64_MAX;
	int64_t x507 = -1LL;

    t126 = ((x505^x506)|(x507>x508));

    if (t126 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t t127 = -1;

    t127 = ((x509^x510)|(x511>x512));

    if (t127 != -41) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x513 = INT8_MIN;
	int8_t x515 = 11;
	int8_t x516 = INT8_MIN;
	volatile int64_t t128 = 121995LL;

    t128 = ((x513^x514)|(x515>x516));

    if (t128 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x517 = INT32_MAX;
	int32_t x518 = INT32_MIN;
	static uint32_t x519 = UINT32_MAX;
	uint32_t x520 = UINT32_MAX;
	volatile int32_t t129 = -1;

    t129 = ((x517^x518)|(x519>x520));

    if (t129 != -1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x523 = INT8_MIN;
	int32_t t130 = -3444546;

    t130 = ((x521^x522)|(x523>x524));

    if (t130 != -127) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x525 = 911505859908044LL;
	volatile int8_t x526 = INT8_MIN;
	int16_t x527 = INT16_MIN;
	int32_t x528 = -1;
	int64_t t131 = 133307100LL;

    t131 = ((x525^x526)|(x527>x528));

    if (t131 != -911505859908020LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x529 = UINT64_MAX;
	static int64_t x530 = INT64_MIN;
	uint8_t x532 = 6U;
	uint64_t t132 = 175208LLU;

    t132 = ((x529^x530)|(x531>x532));

    if (t132 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x533 = 68695770;
	int32_t x534 = INT32_MIN;
	volatile int64_t x535 = INT64_MIN;
	int64_t x536 = -246664847LL;
	int32_t t133 = -38344;

    t133 = ((x533^x534)|(x535>x536));

    if (t133 != -2078787878) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int16_t x537 = INT16_MAX;
	uint64_t x538 = 2510099293LLU;
	volatile int8_t x539 = -1;
	uint64_t t134 = 1382680LLU;

    t134 = ((x537^x538)|(x539>x540));

    if (t134 != 2510122147LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x541 = 3331U;
	static volatile int32_t x543 = 956;
	int16_t x544 = INT16_MIN;
	static volatile int32_t t135 = 505408470;

    t135 = ((x541^x542)|(x543>x544));

    if (t135 != 3331) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x545 = INT16_MIN;
	int32_t x547 = INT32_MIN;
	static volatile uint16_t x548 = UINT16_MAX;
	int64_t t136 = 920021438995LL;

    t136 = ((x545^x546)|(x547>x548));

    if (t136 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x549 = INT8_MIN;
	uint16_t x550 = UINT16_MAX;
	volatile uint8_t x551 = 49U;
	int32_t t137 = -124252879;

    t137 = ((x549^x550)|(x551>x552));

    if (t137 != -65409) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x553 = -6LL;
	uint16_t x554 = 2U;
	int8_t x555 = 1;

    t138 = ((x553^x554)|(x555>x556));

    if (t138 != -8LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = 130U;
	int32_t x558 = INT32_MIN;
	volatile int8_t x559 = -1;
	int64_t x560 = INT64_MAX;
	int32_t t139 = -310006;

    t139 = ((x557^x558)|(x559>x560));

    if (t139 != -2147483518) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x561 = 6957487;
	int64_t x562 = INT64_MIN;
	int8_t x563 = -20;
	static uint64_t x564 = 901156425LLU;
	int64_t t140 = -112717163827LL;

    t140 = ((x561^x562)|(x563>x564));

    if (t140 != -9223372036847818321LL) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x566 = UINT32_MAX;
	uint64_t x568 = 110281LLU;
	uint32_t t141 = 0U;

    t141 = ((x565^x566)|(x567>x568));

    if (t141 != 2147483649U) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x571 = 59U;
	int8_t x572 = INT8_MAX;
	volatile uint32_t t142 = 111393U;

    t142 = ((x569^x570)|(x571>x572));

    if (t142 != 4264544717U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x573 = 1LLU;
	int8_t x574 = -1;
	int32_t x575 = INT32_MIN;
	uint16_t x576 = UINT16_MAX;
	static uint64_t t143 = 378909560768503LLU;

    t143 = ((x573^x574)|(x575>x576));

    if (t143 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x577 = 11U;
	uint64_t x578 = 400063016LLU;
	uint64_t x579 = 27LLU;
	int8_t x580 = -4;
	static uint64_t t144 = 6291720190LLU;

    t144 = ((x577^x578)|(x579>x580));

    if (t144 != 400063011LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x581 = -1;
	int16_t x582 = -1;
	int64_t x584 = INT64_MIN;
	volatile int32_t t145 = -629;

    t145 = ((x581^x582)|(x583>x584));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = -1LL;
	int16_t x586 = -341;
	int64_t x587 = -1LL;
	volatile int64_t t146 = 9LL;

    t146 = ((x585^x586)|(x587>x588));

    if (t146 != 340LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x589 = -4;
	int32_t x590 = INT32_MAX;
	uint8_t x591 = 19U;
	int64_t x592 = -1LL;

    t147 = ((x589^x590)|(x591>x592));

    if (t147 != -2147483645) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = INT8_MAX;
	uint8_t x594 = 1U;
	int32_t x595 = -1;
	static uint32_t x596 = UINT32_MAX;
	int32_t t148 = 15;

    t148 = ((x593^x594)|(x595>x596));

    if (t148 != 126) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = 20825;
	int16_t x598 = 476;
	int64_t x600 = INT64_MAX;
	int32_t t149 = 3066740;

    t149 = ((x597^x598)|(x599>x600));

    if (t149 != 20613) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x601 = -261254866845226LL;
	int8_t x602 = -1;

    t150 = ((x601^x602)|(x603>x604));

    if (t150 != 261254866845225LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x605 = INT32_MAX;
	int64_t x606 = INT64_MIN;
	int8_t x607 = -1;
	int64_t x608 = -161003266LL;

    t151 = ((x605^x606)|(x607>x608));

    if (t151 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = 2210517LL;
	volatile uint8_t x610 = 2U;
	int16_t x611 = INT16_MAX;
	volatile int64_t t152 = 456392482360LL;

    t152 = ((x609^x610)|(x611>x612));

    if (t152 != 2210519LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x613 = 41U;
	uint8_t x614 = UINT8_MAX;
	int8_t x615 = 0;
	int32_t x616 = -121;

    t153 = ((x613^x614)|(x615>x616));

    if (t153 != 215U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x617 = INT8_MAX;
	static int8_t x618 = INT8_MIN;
	int8_t x620 = INT8_MIN;
	static volatile int32_t t154 = -2;

    t154 = ((x617^x618)|(x619>x620));

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x621 = -1;
	uint8_t x622 = 0U;
	int16_t x623 = -1;
	volatile int32_t t155 = 1122290;

    t155 = ((x621^x622)|(x623>x624));

    if (t155 != -1) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x625 = 15081;
	uint64_t t156 = 7702241LLU;

    t156 = ((x625^x626)|(x627>x628));

    if (t156 != 71155818060LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int8_t x629 = -1;
	volatile int32_t x630 = INT32_MIN;
	volatile int16_t x631 = 7;
	int32_t t157 = INT32_MAX;

    t157 = ((x629^x630)|(x631>x632));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	int8_t x634 = -6;
	int64_t x635 = INT64_MIN;
	volatile int16_t x636 = INT16_MIN;
	volatile uint32_t t158 = 1525454429U;

    t158 = ((x633^x634)|(x635>x636));

    if (t158 != 5U) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x637 = INT16_MAX;
	int16_t x639 = INT16_MAX;
	int16_t x640 = -1;
	volatile int32_t t159 = -66880;

    t159 = ((x637^x638)|(x639>x640));

    if (t159 != 32767) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x641 = UINT64_MAX;
	static int64_t x642 = INT64_MAX;
	uint64_t x644 = 536260LLU;

    t160 = ((x641^x642)|(x643>x644));

    if (t160 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x646 = 10U;
	volatile int16_t x647 = INT16_MAX;
	int8_t x648 = INT8_MAX;
	int32_t t161 = 1832;

    t161 = ((x645^x646)|(x647>x648));

    if (t161 != 29) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = -15530770LL;
	uint32_t x650 = UINT32_MAX;
	int64_t x651 = INT64_MIN;
	int16_t x652 = INT16_MAX;
	int64_t t162 = 1LL;

    t162 = ((x649^x650)|(x651>x652));

    if (t162 != -4279436527LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint64_t x654 = UINT64_MAX;
	uint16_t x656 = 0U;
	uint64_t t163 = 15172456519594LLU;

    t163 = ((x653^x654)|(x655>x656));

    if (t163 != 18446744073709551533LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x657 = 1;
	int64_t x660 = INT64_MIN;
	volatile int64_t t164 = -953829LL;

    t164 = ((x657^x658)|(x659>x660));

    if (t164 != -1LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x661 = -8394LL;
	volatile uint8_t x662 = 5U;
	int8_t x663 = INT8_MIN;

    t165 = ((x661^x662)|(x663>x664));

    if (t165 != -8397LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x665 = 53;
	int8_t x667 = INT8_MIN;
	volatile int32_t t166 = 3;

    t166 = ((x665^x666)|(x667>x668));

    if (t166 != 6) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x669 = 12776624U;
	static uint8_t x670 = UINT8_MAX;
	static int64_t x671 = -1LL;
	int8_t x672 = INT8_MIN;

    t167 = ((x669^x670)|(x671>x672));

    if (t167 != 12776527U) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x673 = INT8_MIN;
	static uint32_t x674 = 6519181U;
	int64_t x676 = -325556919403194LL;

    t168 = ((x673^x674)|(x675>x676));

    if (t168 != 4288448013U) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x677 = INT32_MIN;
	volatile int64_t x678 = -2LL;
	int64_t x679 = -6891272702692726LL;
	int8_t x680 = INT8_MIN;
	static int64_t t169 = -775916417063LL;

    t169 = ((x677^x678)|(x679>x680));

    if (t169 != 2147483646LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = INT32_MIN;
	static int16_t x682 = -96;
	int8_t x683 = 4;
	static int32_t t170 = 15511661;

    t170 = ((x681^x682)|(x683>x684));

    if (t170 != 2147483552) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint64_t x685 = UINT64_MAX;
	static volatile int16_t x686 = INT16_MAX;
	int64_t x687 = INT64_MAX;
	volatile uint64_t t171 = 1350935LLU;

    t171 = ((x685^x686)|(x687>x688));

    if (t171 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint32_t x690 = 71003U;
	uint64_t x691 = UINT64_MAX;
	volatile uint32_t t172 = 95898U;

    t172 = ((x689^x690)|(x691>x692));

    if (t172 != 92837U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x693 = INT16_MAX;
	uint32_t x694 = 889U;
	int16_t x695 = -1;
	uint32_t x696 = 12632236U;
	volatile uint32_t t173 = 1197U;

    t173 = ((x693^x694)|(x695>x696));

    if (t173 != 31879U) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint32_t x698 = 29U;
	static volatile uint64_t x699 = 8797327591033670087LLU;
	int16_t x700 = INT16_MIN;
	volatile uint32_t t174 = 6U;

    t174 = ((x697^x698)|(x699>x700));

    if (t174 != 30U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = 119U;
	static uint8_t x702 = UINT8_MAX;
	volatile int16_t x703 = INT16_MIN;

    t175 = ((x701^x702)|(x703>x704));

    if (t175 != 136) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x705 = INT16_MIN;
	volatile uint8_t x706 = 1U;
	int16_t x707 = INT16_MIN;
	volatile int64_t x708 = INT64_MIN;
	static volatile int32_t t176 = -1;

    t176 = ((x705^x706)|(x707>x708));

    if (t176 != -32767) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x709 = 1U;
	volatile int64_t x710 = INT64_MIN;
	static int16_t x711 = INT16_MIN;
	int32_t x712 = INT32_MIN;
	volatile int64_t t177 = 975915013LL;

    t177 = ((x709^x710)|(x711>x712));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x714 = INT64_MIN;
	int32_t x716 = INT32_MIN;
	volatile int64_t t178 = 20LL;

    t178 = ((x713^x714)|(x715>x716));

    if (t178 != -9223372036854775757LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x717 = 1;
	int32_t x718 = -1;
	int32_t x719 = 1;
	uint32_t x720 = 229687U;
	int32_t t179 = -7066;

    t179 = ((x717^x718)|(x719>x720));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x722 = -1;
	volatile uint64_t x723 = 1184228702LLU;
	static int32_t t180 = -1;

    t180 = ((x721^x722)|(x723>x724));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int32_t x726 = INT32_MAX;
	volatile uint8_t x727 = 25U;
	uint8_t x728 = 7U;
	int32_t t181 = -799850;

    t181 = ((x725^x726)|(x727>x728));

    if (t181 != 2147483625) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x729 = INT64_MIN;
	volatile uint8_t x730 = UINT8_MAX;
	int16_t x731 = INT16_MIN;
	int16_t x732 = INT16_MIN;
	int64_t t182 = -13855826LL;

    t182 = ((x729^x730)|(x731>x732));

    if (t182 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x733 = INT64_MIN;
	int16_t x735 = INT16_MAX;
	volatile int64_t x736 = INT64_MAX;
	int64_t t183 = INT64_MAX;

    t183 = ((x733^x734)|(x735>x736));

    if (t183 != INT64_MAX) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x737 = UINT64_MAX;
	uint32_t x738 = UINT32_MAX;
	int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MIN;

    t184 = ((x737^x738)|(x739>x740));

    if (t184 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x741 = -1;
	static int64_t x742 = INT64_MAX;
	uint32_t x743 = UINT32_MAX;

    t185 = ((x741^x742)|(x743>x744));

    if (t185 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x745 = 133552932;
	int8_t x746 = -1;
	static int32_t t186 = 2379603;

    t186 = ((x745^x746)|(x747>x748));

    if (t186 != -133552933) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	int64_t x752 = -1LL;
	volatile uint64_t t187 = 3404918829200365LLU;

    t187 = ((x749^x750)|(x751>x752));

    if (t187 != 127LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x753 = 3;
	int64_t x754 = INT64_MIN;
	int32_t x755 = INT32_MIN;
	static int32_t x756 = 7355;
	int64_t t188 = 147860LL;

    t188 = ((x753^x754)|(x755>x756));

    if (t188 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x757 = -2;
	int16_t x758 = -1;
	static uint32_t x759 = 1956679398U;
	uint64_t x760 = 2183844988322411LLU;
	volatile int32_t t189 = 18;

    t189 = ((x757^x758)|(x759>x760));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x761 = INT64_MAX;
	uint32_t x763 = 177U;
	uint16_t x764 = 16906U;
	uint64_t t190 = 132503501LLU;

    t190 = ((x761^x762)|(x763>x764));

    if (t190 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x765 = 16527U;
	int16_t x766 = 3308;
	int64_t x767 = -5180966821335LL;
	uint8_t x768 = 3U;
	volatile int32_t t191 = -210357;

    t191 = ((x765^x766)|(x767>x768));

    if (t191 != 19555) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x769 = -1LL;
	uint32_t x770 = 657195544U;
	volatile uint16_t x771 = 0U;
	static volatile int64_t t192 = 7LL;

    t192 = ((x769^x770)|(x771>x772));

    if (t192 != -657195545LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x776 = 124583473;
	volatile int32_t t193 = 30301089;

    t193 = ((x773^x774)|(x775>x776));

    if (t193 != -941471) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x778 = UINT32_MAX;
	uint8_t x779 = 1U;
	static uint32_t x780 = 379U;
	volatile uint32_t t194 = 3U;

    t194 = ((x777^x778)|(x779>x780));

    if (t194 != 4294967181U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x782 = INT64_MIN;
	uint64_t x783 = 1672088519357LLU;
	int8_t x784 = INT8_MIN;
	volatile int64_t t195 = 1028183145135417LL;

    t195 = ((x781^x782)|(x783>x784));

    if (t195 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x785 = 77;
	int64_t x786 = 4684LL;
	volatile int32_t x787 = INT32_MIN;
	volatile int16_t x788 = INT16_MIN;
	int64_t t196 = 5789234293362469LL;

    t196 = ((x785^x786)|(x787>x788));

    if (t196 != 4609LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x790 = INT64_MIN;
	int8_t x791 = 9;
	int8_t x792 = -16;
	int64_t t197 = -3946LL;

    t197 = ((x789^x790)|(x791>x792));

    if (t197 != -9223372036854775293LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x793 = 0;
	int8_t x794 = 1;
	uint64_t x795 = 46991415898LLU;
	int32_t x796 = INT32_MIN;
	static int32_t t198 = 25873;

    t198 = ((x793^x794)|(x795>x796));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x797 = 262;
	int16_t x798 = -13;
	volatile uint8_t x800 = 7U;
	int32_t t199 = 2;

    t199 = ((x797^x798)|(x799>x800));

    if (t199 != -267) { NG(); } else { ; }
	
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

