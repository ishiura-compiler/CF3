
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

static int8_t x2 = INT8_MIN;
int32_t x3 = INT32_MAX;
int8_t x4 = INT8_MIN;
int32_t x15 = INT32_MIN;
uint32_t x16 = 1942784576U;
int32_t t3 = -3117;
int16_t x31 = INT16_MIN;
int32_t x33 = INT32_MAX;
volatile int16_t x34 = -1;
int32_t x35 = INT32_MIN;
uint8_t x38 = 5U;
static int8_t x40 = INT8_MIN;
volatile int32_t t10 = -5645;
static int16_t x47 = -1;
uint8_t x62 = UINT8_MAX;
uint64_t x64 = 799947103221206088LLU;
int32_t t15 = 16;
volatile int32_t x70 = -320;
static int64_t x72 = INT64_MIN;
volatile uint8_t x79 = 4U;
int64_t x84 = 6727286LL;
int64_t x85 = INT64_MIN;
uint32_t x89 = 2U;
int32_t x92 = -1;
uint32_t x93 = 0U;
volatile int32_t t24 = 4093;
int32_t x101 = INT32_MIN;
uint8_t x102 = 19U;
int16_t x108 = INT16_MAX;
volatile int32_t t26 = 855253774;
int32_t t27 = -4281549;
volatile int32_t t28 = 21284;
int32_t x117 = -1;
volatile int32_t t32 = -366;
int16_t x136 = -1;
uint32_t x137 = 2U;
uint16_t x138 = 3332U;
int32_t x148 = INT32_MAX;
volatile int32_t t36 = 9567;
volatile int16_t x151 = 0;
uint32_t x152 = 4U;
volatile int32_t t38 = -254215298;
volatile int32_t t42 = 12;
volatile int32_t t46 = -89;
volatile uint16_t x205 = UINT16_MAX;
int16_t x212 = INT16_MIN;
volatile int32_t t52 = 1;
volatile int32_t t54 = 838092176;
uint32_t x221 = UINT32_MAX;
int32_t t55 = 2;
uint8_t x227 = UINT8_MAX;
static int32_t t57 = 1908518;
int64_t x237 = 41253699906959425LL;
volatile int8_t x241 = 23;
uint64_t x254 = 26LLU;
static int8_t x257 = INT8_MIN;
static volatile int32_t t66 = -25221;
volatile int64_t x271 = INT64_MAX;
volatile int32_t t67 = 1938906;
int64_t x273 = INT64_MIN;
static volatile int16_t x277 = -1;
volatile int32_t x291 = INT32_MIN;
int8_t x294 = INT8_MIN;
volatile int32_t t73 = -65074;
int32_t t75 = 17;
volatile uint64_t x305 = 1LLU;
int16_t x315 = INT16_MIN;
uint32_t x316 = UINT32_MAX;
volatile int32_t x321 = -247498827;
volatile int64_t x323 = 11017298514LL;
volatile int32_t t80 = 22765243;
static volatile int8_t x326 = INT8_MAX;
uint8_t x334 = 1U;
volatile int32_t t84 = 1817311;
volatile uint64_t x347 = 82501LLU;
int32_t x351 = -304782;
int64_t x360 = INT64_MIN;
static int8_t x361 = INT8_MAX;
static uint8_t x365 = UINT8_MAX;
uint32_t x366 = UINT32_MAX;
volatile int32_t x368 = INT32_MIN;
static int8_t x370 = INT8_MIN;
volatile uint8_t x372 = 18U;
int32_t t92 = 896;
static volatile int32_t t94 = -4;
int64_t x383 = INT64_MIN;
int64_t x384 = 13463008932977042LL;
int64_t x387 = INT64_MIN;
volatile int8_t x411 = -12;
int8_t x415 = -3;
volatile int8_t x427 = 1;
volatile int64_t x431 = 27LL;
volatile uint32_t x432 = UINT32_MAX;
volatile int32_t t107 = 638;
uint64_t x434 = 5022LLU;
volatile int8_t x436 = -4;
int32_t x440 = INT32_MAX;
volatile int16_t x447 = 6908;
static volatile uint32_t x449 = 3042U;
int64_t x453 = -1024736246LL;
int64_t x454 = INT64_MIN;
int32_t x455 = INT32_MIN;
int8_t x459 = INT8_MAX;
int32_t t114 = -69;
int16_t x463 = 3;
uint32_t x464 = UINT32_MAX;
int32_t x470 = INT32_MAX;
volatile int32_t t117 = -325;
int16_t x476 = INT16_MAX;
int16_t x477 = INT16_MIN;
volatile int64_t x481 = INT64_MAX;
static int32_t x483 = INT32_MAX;
int8_t x486 = INT8_MAX;
int32_t x492 = 1;
static uint8_t x494 = 42U;
int32_t x495 = 6717057;
static volatile int64_t x502 = INT64_MAX;
int32_t t125 = 517375035;
uint16_t x509 = 0U;
int32_t x512 = INT32_MIN;
uint32_t x513 = 116209U;
uint8_t x518 = 0U;
int32_t x523 = INT32_MIN;
uint64_t x525 = UINT64_MAX;
static int16_t x529 = -1;
int32_t x531 = INT32_MAX;
static uint32_t x533 = 2535605U;
uint32_t x536 = 28301U;
volatile uint32_t x537 = UINT32_MAX;
volatile uint32_t x553 = 147326U;
int64_t x558 = INT64_MIN;
static int16_t x563 = INT16_MAX;
int32_t x564 = INT32_MIN;
static int64_t x576 = INT64_MIN;
uint32_t x580 = 9U;
int64_t x581 = -346737171557LL;
volatile int32_t t145 = 1;
int32_t x585 = -1;
volatile int32_t t146 = -60399006;
int32_t t147 = -907;
int32_t x594 = 1;
uint16_t x597 = 2U;
static int32_t x600 = -5;
int32_t x610 = -109;
volatile int32_t t153 = -1274;
uint32_t x618 = 2005U;
int64_t x620 = INT64_MIN;
volatile int32_t t155 = -587445779;
volatile int8_t x635 = INT8_MIN;
uint16_t x647 = 1U;
uint64_t x649 = 9962LLU;
static int32_t x656 = INT32_MIN;
int64_t x659 = -1LL;
static uint32_t x663 = 31U;
volatile uint8_t x664 = 1U;
volatile int32_t t165 = -780;
uint8_t x667 = 8U;
volatile int32_t t166 = -3555;
int8_t x680 = -1;
int16_t x682 = INT16_MAX;
uint8_t x683 = 1U;
int64_t x684 = -1LL;
uint8_t x686 = UINT8_MAX;
int32_t t171 = -349067489;
int16_t x693 = INT16_MAX;
uint8_t x694 = 14U;
int32_t x697 = -6518229;
int8_t x700 = 11;
uint32_t x702 = UINT32_MAX;
int8_t x703 = 56;
uint32_t x708 = UINT32_MAX;
static int64_t x719 = 1697651LL;
volatile int8_t x720 = INT8_MAX;
volatile int32_t t179 = 5234974;
volatile int32_t t180 = 0;
int16_t x726 = -1;
int32_t t181 = -30;
volatile uint32_t x733 = 313558U;
static int32_t t183 = -119736953;
static int64_t x739 = INT64_MAX;
uint16_t x741 = 44U;
uint16_t x742 = 45U;
int64_t x744 = INT64_MAX;
uint32_t x752 = 2U;
volatile int32_t t188 = -27;
int8_t x757 = INT8_MAX;
uint8_t x763 = 71U;
static int8_t x772 = -1;
static volatile int32_t t193 = 654347;
volatile int32_t t194 = 374445507;
int8_t x782 = -1;
uint8_t x784 = 3U;
static int64_t x785 = 180LL;
volatile int64_t x788 = 18161096511LL;
int32_t t196 = 503859;
volatile uint64_t x794 = UINT64_MAX;
static uint64_t x798 = UINT64_MAX;
int64_t x799 = -1LL;


void f0(void) {
    	static int64_t x1 = 15914904LL;
	int32_t t0 = 380;

    t0 = (((x1&x2)^x3)>x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 133LL;
	static volatile int64_t x6 = INT64_MIN;
	volatile uint16_t x7 = 1U;
	volatile uint32_t x8 = 3786901U;
	volatile int32_t t1 = 60328;

    t1 = (((x5&x6)^x7)>x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	uint8_t x10 = 52U;
	uint8_t x11 = UINT8_MAX;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 777656;

    t2 = (((x9&x10)^x11)>x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x13 = -5;
	int64_t x14 = -1LL;

    t3 = (((x13&x14)^x15)>x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -1LL;
	int32_t x18 = 210635068;
	int16_t x19 = INT16_MAX;
	uint16_t x20 = 360U;
	int32_t t4 = -4986;

    t4 = (((x17&x18)^x19)>x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -5693313LL;
	uint8_t x22 = 2U;
	static int64_t x23 = INT64_MAX;
	static volatile int8_t x24 = INT8_MIN;
	int32_t t5 = -4;

    t5 = (((x21&x22)^x23)>x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	static int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MAX;
	static volatile int32_t t6 = 13539156;

    t6 = (((x25&x26)^x27)>x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = INT32_MIN;
	int32_t x30 = -1;
	int64_t x32 = 1789423725520LL;
	int32_t t7 = -192201063;

    t7 = (((x29&x30)^x31)>x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x36 = 1U;
	static volatile int32_t t8 = -224007;

    t8 = (((x33&x34)^x35)>x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x37 = -38;
	int32_t x39 = INT32_MAX;
	volatile int32_t t9 = -611147334;

    t9 = (((x37&x38)^x39)>x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 1109605361LLU;
	uint16_t x42 = 1U;
	int16_t x43 = INT16_MAX;
	int8_t x44 = INT8_MAX;

    t10 = (((x41&x42)^x43)>x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x45 = INT32_MIN;
	uint64_t x46 = 15083764513595327LLU;
	int32_t x48 = 4702;
	volatile int32_t t11 = 5880766;

    t11 = (((x45&x46)^x47)>x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x49 = INT16_MIN;
	static uint8_t x50 = 7U;
	uint16_t x51 = 1U;
	static int64_t x52 = INT64_MIN;
	int32_t t12 = 273;

    t12 = (((x49&x50)^x51)>x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = -42LL;
	uint8_t x54 = 8U;
	uint64_t x55 = 5333794950152LLU;
	int64_t x56 = -1LL;
	int32_t t13 = 109;

    t13 = (((x53&x54)^x55)>x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int32_t x57 = 284;
	static int64_t x58 = INT64_MAX;
	int64_t x59 = INT64_MIN;
	int64_t x60 = 5309341LL;
	volatile int32_t t14 = -2025050;

    t14 = (((x57&x58)^x59)>x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x61 = 749254LL;
	int8_t x63 = -1;

    t15 = (((x61&x62)^x63)>x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = 1;
	static uint16_t x66 = UINT16_MAX;
	uint16_t x67 = UINT16_MAX;
	volatile int64_t x68 = 122387LL;
	volatile int32_t t16 = 206861145;

    t16 = (((x65&x66)^x67)>x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x69 = INT16_MAX;
	uint8_t x71 = 3U;
	int32_t t17 = 1;

    t17 = (((x69&x70)^x71)>x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x73 = -1;
	static int16_t x74 = -1;
	uint8_t x75 = 9U;
	static uint16_t x76 = 53U;
	volatile int32_t t18 = -1151274;

    t18 = (((x73&x74)^x75)>x76);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	static volatile uint64_t x78 = 23586095561LLU;
	int8_t x80 = INT8_MIN;
	int32_t t19 = 515359789;

    t19 = (((x77&x78)^x79)>x80);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int16_t x81 = 125;
	uint8_t x82 = UINT8_MAX;
	volatile int16_t x83 = -6586;
	int32_t t20 = -106;

    t20 = (((x81&x82)^x83)>x84);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x86 = 7U;
	int16_t x87 = 675;
	int32_t x88 = -40913;
	int32_t t21 = -122929567;

    t21 = (((x85&x86)^x87)>x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x90 = -24;
	volatile int16_t x91 = 2357;
	int32_t t22 = 93018;

    t22 = (((x89&x90)^x91)>x92);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x94 = INT8_MIN;
	int64_t x95 = -1LL;
	static volatile int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 73161381;

    t23 = (((x93&x94)^x95)>x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x97 = UINT32_MAX;
	static int64_t x98 = INT64_MIN;
	static uint16_t x99 = UINT16_MAX;
	int64_t x100 = -142055LL;

    t24 = (((x97&x98)^x99)>x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint16_t x103 = 113U;
	uint8_t x104 = 3U;
	static volatile int32_t t25 = -19;

    t25 = (((x101&x102)^x103)>x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = 2;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = 2561567064152LLU;

    t26 = (((x105&x106)^x107)>x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x109 = -655;
	static int64_t x110 = -454LL;
	uint32_t x111 = UINT32_MAX;
	uint8_t x112 = UINT8_MAX;

    t27 = (((x109&x110)^x111)>x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x113 = 4U;
	uint64_t x114 = 29108LLU;
	static uint8_t x115 = 1U;
	int8_t x116 = INT8_MIN;

    t28 = (((x113&x114)^x115)>x116);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint8_t x118 = 0U;
	uint8_t x119 = 8U;
	static int32_t x120 = -1;
	static int32_t t29 = -11;

    t29 = (((x117&x118)^x119)>x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = -1;
	int32_t x122 = INT32_MAX;
	uint8_t x123 = 84U;
	int32_t x124 = 160220327;
	static int32_t t30 = 38775788;

    t30 = (((x121&x122)^x123)>x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MIN;
	int32_t x126 = 3091285;
	static volatile uint64_t x127 = 337325771LLU;
	int64_t x128 = 1549878966LL;
	int32_t t31 = 0;

    t31 = (((x125&x126)^x127)>x128);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x129 = -63;
	uint16_t x130 = 5738U;
	int8_t x131 = INT8_MAX;
	volatile int8_t x132 = -3;

    t32 = (((x129&x130)^x131)>x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 12U;
	static volatile int8_t x134 = -1;
	volatile uint16_t x135 = UINT16_MAX;
	int32_t t33 = -562;

    t33 = (((x133&x134)^x135)>x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x139 = UINT16_MAX;
	int8_t x140 = -1;
	int32_t t34 = 54054809;

    t34 = (((x137&x138)^x139)>x140);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = -1;
	int32_t x142 = 575;
	int8_t x143 = -19;
	static int32_t x144 = -47023865;
	volatile int32_t t35 = 558;

    t35 = (((x141&x142)^x143)>x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x145 = 7;
	int32_t x146 = -1;
	int64_t x147 = -1LL;

    t36 = (((x145&x146)^x147)>x148);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x149 = INT8_MAX;
	int8_t x150 = -2;
	int32_t t37 = -118727;

    t37 = (((x149&x150)^x151)>x152);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = INT32_MIN;
	static int8_t x154 = INT8_MIN;
	uint64_t x155 = 3390343162851LLU;
	int16_t x156 = -1;

    t38 = (((x153&x154)^x155)>x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint16_t x157 = 562U;
	volatile int64_t x158 = INT64_MAX;
	int64_t x159 = -1LL;
	uint8_t x160 = 16U;
	int32_t t39 = 201510660;

    t39 = (((x157&x158)^x159)>x160);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = UINT32_MAX;
	int16_t x162 = -1;
	static int32_t x163 = 1;
	uint64_t x164 = 12426LLU;
	volatile int32_t t40 = -1005123204;

    t40 = (((x161&x162)^x163)>x164);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x165 = INT8_MIN;
	static int16_t x166 = -1;
	int64_t x167 = INT64_MIN;
	int16_t x168 = INT16_MAX;
	static int32_t t41 = 1;

    t41 = (((x165&x166)^x167)>x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x169 = 260U;
	int8_t x170 = -1;
	uint32_t x171 = 1987875U;
	volatile uint16_t x172 = 1U;

    t42 = (((x169&x170)^x171)>x172);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x173 = -1;
	volatile int32_t x174 = -523151439;
	static int16_t x175 = -1;
	uint16_t x176 = 3812U;
	static volatile int32_t t43 = -278169;

    t43 = (((x173&x174)^x175)>x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x177 = INT8_MIN;
	uint64_t x178 = UINT64_MAX;
	int64_t x179 = 6124960300LL;
	int16_t x180 = INT16_MIN;
	int32_t t44 = 231;

    t44 = (((x177&x178)^x179)>x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = INT8_MIN;
	volatile int8_t x182 = INT8_MIN;
	volatile uint8_t x183 = UINT8_MAX;
	volatile int16_t x184 = -1;
	volatile int32_t t45 = 480738191;

    t45 = (((x181&x182)^x183)>x184);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x185 = INT32_MIN;
	volatile int8_t x186 = -1;
	static int8_t x187 = 1;
	uint32_t x188 = UINT32_MAX;

    t46 = (((x185&x186)^x187)>x188);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	uint64_t x191 = 7519695183514046LLU;
	int64_t x192 = 39654852251272LL;
	volatile int32_t t47 = 20;

    t47 = (((x189&x190)^x191)>x192);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x193 = 1U;
	static int16_t x194 = INT16_MIN;
	volatile int32_t x195 = INT32_MIN;
	volatile int8_t x196 = INT8_MAX;
	static int32_t t48 = -2849240;

    t48 = (((x193&x194)^x195)>x196);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x197 = 1371U;
	int64_t x198 = INT64_MAX;
	uint32_t x199 = 27U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 6826;

    t49 = (((x197&x198)^x199)>x200);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x201 = 24LLU;
	volatile int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	int16_t x204 = -1;
	volatile int32_t t50 = -12234285;

    t50 = (((x201&x202)^x203)>x204);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x206 = UINT64_MAX;
	uint32_t x207 = 968U;
	static int16_t x208 = INT16_MAX;
	volatile int32_t t51 = 113077640;

    t51 = (((x205&x206)^x207)>x208);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x209 = INT64_MIN;
	static int32_t x210 = INT32_MAX;
	uint32_t x211 = 44500991U;

    t52 = (((x209&x210)^x211)>x212);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x213 = INT32_MAX;
	uint32_t x214 = 237U;
	volatile int32_t x215 = INT32_MAX;
	int16_t x216 = -1;
	volatile int32_t t53 = -30;

    t53 = (((x213&x214)^x215)>x216);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x217 = -1;
	int32_t x218 = -1;
	static uint32_t x219 = 1U;
	int16_t x220 = -1733;

    t54 = (((x217&x218)^x219)>x220);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x222 = 384;
	static int32_t x223 = -1;
	uint16_t x224 = 34U;

    t55 = (((x221&x222)^x223)>x224);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x225 = -30;
	uint8_t x226 = UINT8_MAX;
	int32_t x228 = INT32_MAX;
	static volatile int32_t t56 = -41349;

    t56 = (((x225&x226)^x227)>x228);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x229 = INT16_MIN;
	static uint16_t x230 = 18U;
	static volatile int32_t x231 = 21;
	int16_t x232 = -6127;

    t57 = (((x229&x230)^x231)>x232);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x233 = INT16_MIN;
	volatile uint64_t x234 = 948384LLU;
	int16_t x235 = INT16_MAX;
	int16_t x236 = 127;
	int32_t t58 = 0;

    t58 = (((x233&x234)^x235)>x236);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x238 = INT16_MAX;
	int8_t x239 = INT8_MIN;
	int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -3367;

    t59 = (((x237&x238)^x239)>x240);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x242 = -1;
	uint64_t x243 = 4567359393035445779LLU;
	uint16_t x244 = UINT16_MAX;
	int32_t t60 = 1;

    t60 = (((x241&x242)^x243)>x244);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x245 = -1;
	uint64_t x246 = 8LLU;
	int8_t x247 = -1;
	static uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = 11;

    t61 = (((x245&x246)^x247)>x248);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x249 = 48555311771105787LL;
	volatile int16_t x250 = 1898;
	volatile int16_t x251 = -1;
	volatile int64_t x252 = 3528909610LL;
	int32_t t62 = -681054;

    t62 = (((x249&x250)^x251)>x252);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x253 = UINT64_MAX;
	uint64_t x255 = 90350115103LLU;
	static int64_t x256 = INT64_MIN;
	volatile int32_t t63 = 160;

    t63 = (((x253&x254)^x255)>x256);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x258 = 40U;
	int8_t x259 = INT8_MAX;
	static volatile int8_t x260 = INT8_MAX;
	static int32_t t64 = -30;

    t64 = (((x257&x258)^x259)>x260);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = 28;
	int64_t x262 = -1LL;
	static int16_t x263 = -1;
	static int16_t x264 = 23;
	int32_t t65 = 57;

    t65 = (((x261&x262)^x263)>x264);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x265 = 1740136925685LLU;
	int64_t x266 = INT64_MIN;
	volatile int8_t x267 = 14;
	int8_t x268 = INT8_MIN;

    t66 = (((x265&x266)^x267)>x268);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x269 = INT16_MIN;
	uint32_t x270 = UINT32_MAX;
	int8_t x272 = 0;

    t67 = (((x269&x270)^x271)>x272);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x274 = -1LL;
	int32_t x275 = INT32_MIN;
	int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 84;

    t68 = (((x273&x274)^x275)>x276);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x278 = INT32_MIN;
	static int8_t x279 = INT8_MIN;
	static uint32_t x280 = UINT32_MAX;
	int32_t t69 = -808446;

    t69 = (((x277&x278)^x279)>x280);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x281 = 0U;
	int16_t x282 = INT16_MIN;
	static int64_t x283 = -93982415LL;
	int16_t x284 = -3;
	static int32_t t70 = -129087;

    t70 = (((x281&x282)^x283)>x284);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x285 = INT8_MAX;
	volatile uint8_t x286 = 8U;
	int64_t x287 = -4LL;
	uint32_t x288 = 2U;
	int32_t t71 = 5942856;

    t71 = (((x285&x286)^x287)>x288);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = 14353LL;
	uint32_t x290 = 1U;
	volatile int32_t x292 = 27;
	volatile int32_t t72 = 149276;

    t72 = (((x289&x290)^x291)>x292);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = -2;
	volatile uint16_t x295 = UINT16_MAX;
	volatile int32_t x296 = INT32_MIN;

    t73 = (((x293&x294)^x295)>x296);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile uint16_t x297 = 20088U;
	volatile uint32_t x298 = 99U;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MAX;
	int32_t t74 = 41148412;

    t74 = (((x297&x298)^x299)>x300);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x301 = INT16_MIN;
	int32_t x302 = INT32_MIN;
	int8_t x303 = -1;
	volatile int64_t x304 = -8LL;

    t75 = (((x301&x302)^x303)>x304);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x306 = INT64_MIN;
	int32_t x307 = -65327055;
	static uint16_t x308 = 25U;
	volatile int32_t t76 = -4214;

    t76 = (((x305&x306)^x307)>x308);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x309 = 47U;
	static int8_t x310 = 42;
	uint8_t x311 = 3U;
	static int8_t x312 = INT8_MIN;
	static int32_t t77 = 104;

    t77 = (((x309&x310)^x311)>x312);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x313 = -1LL;
	int16_t x314 = INT16_MAX;
	int32_t t78 = -3;

    t78 = (((x313&x314)^x315)>x316);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x317 = 27366342U;
	int64_t x318 = -1LL;
	static volatile uint64_t x319 = 16224363LLU;
	int16_t x320 = INT16_MIN;
	int32_t t79 = 9109546;

    t79 = (((x317&x318)^x319)>x320);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x322 = INT8_MAX;
	volatile int32_t x324 = -4217103;

    t80 = (((x321&x322)^x323)>x324);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 1554LLU;
	uint8_t x327 = UINT8_MAX;
	uint16_t x328 = UINT16_MAX;
	int32_t t81 = 834339454;

    t81 = (((x325&x326)^x327)>x328);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x329 = INT64_MIN;
	volatile uint32_t x330 = UINT32_MAX;
	uint8_t x331 = 8U;
	int16_t x332 = 30;
	int32_t t82 = 1098;

    t82 = (((x329&x330)^x331)>x332);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x333 = -1;
	uint64_t x335 = 28095972410LLU;
	static int16_t x336 = INT16_MIN;
	static int32_t t83 = -16435;

    t83 = (((x333&x334)^x335)>x336);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x337 = 237;
	volatile uint16_t x338 = 2744U;
	uint16_t x339 = UINT16_MAX;
	volatile int16_t x340 = INT16_MIN;

    t84 = (((x337&x338)^x339)>x340);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	int16_t x343 = -15630;
	static int8_t x344 = -1;
	static volatile int32_t t85 = 22006876;

    t85 = (((x341&x342)^x343)>x344);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MAX;
	int16_t x346 = 1;
	int16_t x348 = -5158;
	volatile int32_t t86 = 0;

    t86 = (((x345&x346)^x347)>x348);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	int64_t x350 = INT64_MIN;
	uint64_t x352 = 0LLU;
	static int32_t t87 = 5;

    t87 = (((x349&x350)^x351)>x352);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x353 = 6;
	uint16_t x354 = 2U;
	int32_t x355 = -47;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t88 = -5207;

    t88 = (((x353&x354)^x355)>x356);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x357 = 119U;
	static int64_t x358 = 4291218716039774LL;
	int8_t x359 = -1;
	volatile int32_t t89 = 414229;

    t89 = (((x357&x358)^x359)>x360);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int8_t x362 = -1;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = 29U;
	int32_t t90 = -2;

    t90 = (((x361&x362)^x363)>x364);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x367 = 8;
	int32_t t91 = -30147;

    t91 = (((x365&x366)^x367)>x368);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x369 = UINT16_MAX;
	uint32_t x371 = 277525U;

    t92 = (((x369&x370)^x371)>x372);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x373 = -101;
	static uint8_t x374 = 5U;
	uint8_t x375 = 123U;
	int32_t x376 = -3044;
	int32_t t93 = -101347626;

    t93 = (((x373&x374)^x375)>x376);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	uint8_t x378 = UINT8_MAX;
	int32_t x379 = INT32_MAX;
	volatile uint16_t x380 = 1U;

    t94 = (((x377&x378)^x379)>x380);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x381 = 4;
	int32_t x382 = 93471;
	int32_t t95 = 188888907;

    t95 = (((x381&x382)^x383)>x384);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int64_t x388 = 116032748LL;
	int32_t t96 = 98246;

    t96 = (((x385&x386)^x387)>x388);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x389 = INT64_MIN;
	volatile int8_t x390 = -30;
	static uint64_t x391 = 50LLU;
	int8_t x392 = -1;
	int32_t t97 = -403099661;

    t97 = (((x389&x390)^x391)>x392);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x393 = 463LLU;
	uint16_t x394 = UINT16_MAX;
	volatile int8_t x395 = 4;
	static uint16_t x396 = 877U;
	int32_t t98 = -107014372;

    t98 = (((x393&x394)^x395)>x396);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x397 = INT64_MAX;
	int32_t x398 = -7182712;
	uint64_t x399 = UINT64_MAX;
	int32_t x400 = -1;
	static volatile int32_t t99 = -10545;

    t99 = (((x397&x398)^x399)>x400);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 3983100LLU;
	uint8_t x403 = 82U;
	static uint16_t x404 = UINT16_MAX;
	volatile int32_t t100 = -85;

    t100 = (((x401&x402)^x403)>x404);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x405 = UINT32_MAX;
	int16_t x406 = INT16_MIN;
	static uint8_t x407 = 2U;
	int32_t x408 = -522;
	volatile int32_t t101 = 0;

    t101 = (((x405&x406)^x407)>x408);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x409 = 2824;
	uint64_t x410 = 100077LLU;
	volatile int64_t x412 = -2133025491597LL;
	int32_t t102 = 690091249;

    t102 = (((x409&x410)^x411)>x412);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x413 = -1;
	static volatile int32_t x414 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	volatile int32_t t103 = 1;

    t103 = (((x413&x414)^x415)>x416);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x417 = 96U;
	volatile int64_t x418 = 3546797LL;
	volatile int64_t x419 = 55441349866LL;
	uint32_t x420 = UINT32_MAX;
	volatile int32_t t104 = 59549;

    t104 = (((x417&x418)^x419)>x420);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x421 = INT16_MIN;
	static int8_t x422 = INT8_MAX;
	static int32_t x423 = INT32_MIN;
	int16_t x424 = 1828;
	volatile int32_t t105 = -208840159;

    t105 = (((x421&x422)^x423)>x424);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x425 = 9;
	static int64_t x426 = INT64_MAX;
	uint8_t x428 = 122U;
	volatile int32_t t106 = -934;

    t106 = (((x425&x426)^x427)>x428);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int64_t x429 = 1248866511LL;
	static int32_t x430 = 248;

    t107 = (((x429&x430)^x431)>x432);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x433 = INT32_MAX;
	int16_t x435 = INT16_MAX;
	int32_t t108 = 162;

    t108 = (((x433&x434)^x435)>x436);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x437 = -1;
	volatile int8_t x438 = INT8_MIN;
	uint64_t x439 = 133268089200962842LLU;
	int32_t t109 = -35730134;

    t109 = (((x437&x438)^x439)>x440);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x441 = 11U;
	int16_t x442 = -1;
	volatile uint8_t x443 = 1U;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t110 = -1;

    t110 = (((x441&x442)^x443)>x444);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x445 = 71142689617413LLU;
	int32_t x446 = -3;
	uint32_t x448 = 167U;
	int32_t t111 = -28;

    t111 = (((x445&x446)^x447)>x448);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x450 = 9321476U;
	int8_t x451 = -1;
	volatile int32_t x452 = 399;
	int32_t t112 = -152070;

    t112 = (((x449&x450)^x451)>x452);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x456 = 1U;
	volatile int32_t t113 = -153;

    t113 = (((x453&x454)^x455)>x456);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x457 = UINT16_MAX;
	int8_t x458 = INT8_MAX;
	volatile int32_t x460 = INT32_MAX;

    t114 = (((x457&x458)^x459)>x460);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x461 = -9007143353343512LL;
	uint16_t x462 = 68U;
	int32_t t115 = -788;

    t115 = (((x461&x462)^x463)>x464);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x465 = -79951727LL;
	int64_t x466 = INT64_MIN;
	static volatile uint32_t x467 = 1749344330U;
	int64_t x468 = 5522986317467LL;
	volatile int32_t t116 = -617780021;

    t116 = (((x465&x466)^x467)>x468);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x469 = INT8_MAX;
	static int32_t x471 = 1108;
	static int16_t x472 = INT16_MIN;

    t117 = (((x469&x470)^x471)>x472);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x473 = -115;
	uint8_t x474 = UINT8_MAX;
	static int16_t x475 = 316;
	static int32_t t118 = 11;

    t118 = (((x473&x474)^x475)>x476);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x478 = INT32_MAX;
	static int32_t x479 = INT32_MIN;
	int8_t x480 = INT8_MIN;
	int32_t t119 = 0;

    t119 = (((x477&x478)^x479)>x480);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x482 = INT64_MAX;
	static int8_t x484 = 0;
	int32_t t120 = -79680;

    t120 = (((x481&x482)^x483)>x484);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x485 = INT8_MIN;
	int64_t x487 = 69962751359095LL;
	volatile uint16_t x488 = 1U;
	static int32_t t121 = -2;

    t121 = (((x485&x486)^x487)>x488);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x489 = -1LL;
	volatile uint16_t x490 = UINT16_MAX;
	int32_t x491 = INT32_MAX;
	static volatile int32_t t122 = -46529108;

    t122 = (((x489&x490)^x491)>x492);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x493 = -116048865368LL;
	int32_t x496 = 2593525;
	volatile int32_t t123 = 11666;

    t123 = (((x493&x494)^x495)>x496);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x497 = INT32_MAX;
	static int8_t x498 = -1;
	uint16_t x499 = UINT16_MAX;
	int16_t x500 = -1645;
	volatile int32_t t124 = 48493955;

    t124 = (((x497&x498)^x499)>x500);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x501 = -1580323102686501LL;
	volatile int32_t x503 = -1;
	static int32_t x504 = 50118;

    t125 = (((x501&x502)^x503)>x504);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x505 = 32460236U;
	static volatile int8_t x506 = INT8_MIN;
	static int32_t x507 = -186402835;
	int64_t x508 = -1LL;
	volatile int32_t t126 = 60655;

    t126 = (((x505&x506)^x507)>x508);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x510 = INT32_MIN;
	int8_t x511 = -3;
	int32_t t127 = 20182;

    t127 = (((x509&x510)^x511)>x512);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x514 = INT32_MIN;
	int32_t x515 = -22;
	uint64_t x516 = 5686585574281005LLU;
	int32_t t128 = 726371;

    t128 = (((x513&x514)^x515)>x516);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x517 = -1LL;
	uint16_t x519 = UINT16_MAX;
	static int16_t x520 = -1;
	volatile int32_t t129 = 10965;

    t129 = (((x517&x518)^x519)>x520);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x521 = INT64_MAX;
	uint64_t x522 = UINT64_MAX;
	volatile uint16_t x524 = UINT16_MAX;
	int32_t t130 = -24558653;

    t130 = (((x521&x522)^x523)>x524);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x526 = INT16_MAX;
	uint32_t x527 = UINT32_MAX;
	int8_t x528 = 46;
	int32_t t131 = 0;

    t131 = (((x525&x526)^x527)>x528);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x530 = INT16_MIN;
	static volatile uint32_t x532 = UINT32_MAX;
	volatile int32_t t132 = -62425285;

    t132 = (((x529&x530)^x531)>x532);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x534 = 17U;
	int8_t x535 = INT8_MIN;
	int32_t t133 = -20;

    t133 = (((x533&x534)^x535)>x536);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x538 = 554U;
	volatile int32_t x539 = 23986027;
	int8_t x540 = INT8_MIN;
	int32_t t134 = -1;

    t134 = (((x537&x538)^x539)>x540);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x541 = INT32_MIN;
	uint32_t x542 = 220U;
	uint16_t x543 = 0U;
	int64_t x544 = -826282LL;
	static int32_t t135 = -180268;

    t135 = (((x541&x542)^x543)>x544);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = UINT32_MAX;
	int8_t x546 = INT8_MIN;
	volatile int32_t x547 = INT32_MAX;
	int8_t x548 = -1;
	volatile int32_t t136 = -2059;

    t136 = (((x545&x546)^x547)>x548);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x549 = -1;
	volatile uint16_t x550 = 7441U;
	uint32_t x551 = 1633U;
	static int32_t x552 = 4485517;
	int32_t t137 = 7361;

    t137 = (((x549&x550)^x551)>x552);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = UINT8_MAX;
	uint32_t x555 = 3474979U;
	int64_t x556 = 710852LL;
	int32_t t138 = 171251;

    t138 = (((x553&x554)^x555)>x556);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x557 = 16;
	uint8_t x559 = 28U;
	int16_t x560 = INT16_MAX;
	static volatile int32_t t139 = 1;

    t139 = (((x557&x558)^x559)>x560);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x561 = UINT64_MAX;
	int32_t x562 = 155;
	int32_t t140 = 61459;

    t140 = (((x561&x562)^x563)>x564);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x565 = 1852;
	uint32_t x566 = 13U;
	int64_t x567 = INT64_MIN;
	volatile int64_t x568 = INT64_MIN;
	int32_t t141 = -955638739;

    t141 = (((x565&x566)^x567)>x568);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t x569 = INT64_MAX;
	int8_t x570 = INT8_MAX;
	int64_t x571 = -10150432805826796LL;
	uint16_t x572 = 481U;
	int32_t t142 = 1;

    t142 = (((x569&x570)^x571)>x572);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = INT32_MIN;
	int8_t x574 = INT8_MIN;
	uint16_t x575 = UINT16_MAX;
	volatile int32_t t143 = 223341251;

    t143 = (((x573&x574)^x575)>x576);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x577 = INT16_MAX;
	uint8_t x578 = 7U;
	uint16_t x579 = 16U;
	volatile int32_t t144 = 18;

    t144 = (((x577&x578)^x579)>x580);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x582 = INT8_MIN;
	static int32_t x583 = INT32_MIN;
	uint16_t x584 = 0U;

    t145 = (((x581&x582)^x583)>x584);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x586 = INT16_MIN;
	volatile int16_t x587 = INT16_MIN;
	static uint16_t x588 = 15U;

    t146 = (((x585&x586)^x587)>x588);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x589 = -1;
	int8_t x590 = -1;
	int32_t x591 = INT32_MIN;
	int32_t x592 = INT32_MIN;

    t147 = (((x589&x590)^x591)>x592);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x593 = 5864U;
	int16_t x595 = INT16_MIN;
	static volatile uint16_t x596 = UINT16_MAX;
	static int32_t t148 = 136;

    t148 = (((x593&x594)^x595)>x596);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x598 = UINT16_MAX;
	volatile int64_t x599 = INT64_MIN;
	int32_t t149 = -65024;

    t149 = (((x597&x598)^x599)>x600);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = INT8_MAX;
	int16_t x602 = -1;
	int32_t x603 = INT32_MAX;
	static volatile int64_t x604 = INT64_MIN;
	volatile int32_t t150 = 31714;

    t150 = (((x601&x602)^x603)>x604);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x605 = INT16_MIN;
	static int16_t x606 = -1;
	int32_t x607 = -1;
	uint16_t x608 = 25U;
	int32_t t151 = -127690;

    t151 = (((x605&x606)^x607)>x608);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x609 = INT64_MAX;
	volatile int32_t x611 = INT32_MIN;
	int8_t x612 = 0;
	static volatile int32_t t152 = 0;

    t152 = (((x609&x610)^x611)>x612);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 30942178390LLU;
	static int8_t x614 = -18;
	static volatile uint16_t x615 = 2U;
	int16_t x616 = -1;

    t153 = (((x613&x614)^x615)>x616);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x617 = INT16_MAX;
	static int32_t x619 = INT32_MIN;
	int32_t t154 = -37986720;

    t154 = (((x617&x618)^x619)>x620);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x621 = -1;
	uint8_t x622 = 9U;
	volatile int16_t x623 = 440;
	static uint16_t x624 = 38U;

    t155 = (((x621&x622)^x623)>x624);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x625 = -18558;
	static int16_t x626 = INT16_MAX;
	uint8_t x627 = 1U;
	static int8_t x628 = INT8_MIN;
	static volatile int32_t t156 = -12692;

    t156 = (((x625&x626)^x627)>x628);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -24360;
	int64_t x630 = INT64_MIN;
	int32_t x631 = INT32_MAX;
	volatile int32_t x632 = INT32_MIN;
	int32_t t157 = -2993927;

    t157 = (((x629&x630)^x631)>x632);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x633 = -1LL;
	int8_t x634 = -1;
	volatile int8_t x636 = -1;
	volatile int32_t t158 = -107;

    t158 = (((x633&x634)^x635)>x636);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x637 = 1;
	uint16_t x638 = 942U;
	static int64_t x639 = INT64_MIN;
	int16_t x640 = INT16_MAX;
	static volatile int32_t t159 = -3122557;

    t159 = (((x637&x638)^x639)>x640);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x641 = INT64_MAX;
	uint64_t x642 = 543LLU;
	int16_t x643 = INT16_MAX;
	static int32_t x644 = INT32_MAX;
	static volatile int32_t t160 = 0;

    t160 = (((x641&x642)^x643)>x644);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x645 = INT32_MIN;
	int64_t x646 = INT64_MIN;
	volatile int64_t x648 = INT64_MAX;
	static int32_t t161 = 1;

    t161 = (((x645&x646)^x647)>x648);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x650 = 4U;
	int16_t x651 = -1140;
	volatile uint32_t x652 = UINT32_MAX;
	volatile int32_t t162 = -36;

    t162 = (((x649&x650)^x651)>x652);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = UINT64_MAX;
	volatile uint16_t x654 = UINT16_MAX;
	static volatile int64_t x655 = -22310445706LL;
	static int32_t t163 = -247841846;

    t163 = (((x653&x654)^x655)>x656);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x657 = UINT16_MAX;
	static int16_t x658 = INT16_MIN;
	int8_t x660 = -18;
	volatile int32_t t164 = -3812;

    t164 = (((x657&x658)^x659)>x660);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = INT8_MIN;
	uint16_t x662 = UINT16_MAX;

    t165 = (((x661&x662)^x663)>x664);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x665 = INT16_MIN;
	static volatile int64_t x666 = INT64_MIN;
	static int16_t x668 = INT16_MIN;

    t166 = (((x665&x666)^x667)>x668);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x669 = 1563U;
	int8_t x670 = INT8_MIN;
	volatile uint64_t x671 = UINT64_MAX;
	uint32_t x672 = 63U;
	volatile int32_t t167 = 3787;

    t167 = (((x669&x670)^x671)>x672);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x673 = -1LL;
	uint64_t x674 = 28968436217114LLU;
	int16_t x675 = INT16_MIN;
	int32_t x676 = INT32_MAX;
	int32_t t168 = -20;

    t168 = (((x673&x674)^x675)>x676);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint16_t x677 = UINT16_MAX;
	uint8_t x678 = 0U;
	static uint64_t x679 = UINT64_MAX;
	int32_t t169 = 119;

    t169 = (((x677&x678)^x679)>x680);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x681 = -6;
	int32_t t170 = 1787473;

    t170 = (((x681&x682)^x683)>x684);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int8_t x685 = 6;
	uint32_t x687 = UINT32_MAX;
	uint8_t x688 = UINT8_MAX;

    t171 = (((x685&x686)^x687)>x688);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x689 = 248;
	int8_t x690 = -1;
	int16_t x691 = INT16_MIN;
	static uint32_t x692 = UINT32_MAX;
	int32_t t172 = 186712;

    t172 = (((x689&x690)^x691)>x692);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x695 = -31;
	volatile int64_t x696 = INT64_MIN;
	volatile int32_t t173 = -272436;

    t173 = (((x693&x694)^x695)>x696);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int32_t x698 = INT32_MAX;
	static uint32_t x699 = 6703052U;
	volatile int32_t t174 = -1762707;

    t174 = (((x697&x698)^x699)>x700);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x701 = INT8_MIN;
	static volatile uint32_t x704 = 2U;
	int32_t t175 = 214;

    t175 = (((x701&x702)^x703)>x704);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x705 = 65261956870LL;
	volatile int32_t x706 = -1;
	uint16_t x707 = 4207U;
	volatile int32_t t176 = -66464328;

    t176 = (((x705&x706)^x707)>x708);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = INT64_MIN;
	volatile int16_t x710 = INT16_MIN;
	static int16_t x711 = 16;
	uint32_t x712 = UINT32_MAX;
	volatile int32_t t177 = 3915;

    t177 = (((x709&x710)^x711)>x712);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint32_t x713 = 256730U;
	int64_t x714 = INT64_MIN;
	uint32_t x715 = 139445816U;
	int8_t x716 = INT8_MIN;
	static int32_t t178 = 0;

    t178 = (((x713&x714)^x715)>x716);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x717 = INT64_MIN;
	uint8_t x718 = 0U;

    t179 = (((x717&x718)^x719)>x720);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x721 = -66590938LL;
	static uint16_t x722 = UINT16_MAX;
	volatile int64_t x723 = INT64_MAX;
	uint16_t x724 = UINT16_MAX;

    t180 = (((x721&x722)^x723)>x724);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x725 = UINT8_MAX;
	volatile int64_t x727 = INT64_MIN;
	volatile int8_t x728 = INT8_MIN;

    t181 = (((x725&x726)^x727)>x728);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x729 = 1U;
	uint16_t x730 = UINT16_MAX;
	uint8_t x731 = UINT8_MAX;
	uint64_t x732 = 3LLU;
	volatile int32_t t182 = -15392758;

    t182 = (((x729&x730)^x731)>x732);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x734 = UINT32_MAX;
	int16_t x735 = -1;
	int16_t x736 = -12053;

    t183 = (((x733&x734)^x735)>x736);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x737 = 13U;
	int8_t x738 = INT8_MIN;
	static int64_t x740 = INT64_MAX;
	volatile int32_t t184 = -3902936;

    t184 = (((x737&x738)^x739)>x740);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x743 = INT64_MAX;
	int32_t t185 = 17336;

    t185 = (((x741&x742)^x743)>x744);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	int32_t x747 = -40;
	static int8_t x748 = INT8_MIN;
	volatile int32_t t186 = 28317839;

    t186 = (((x745&x746)^x747)>x748);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = 3896298;
	int32_t x751 = INT32_MIN;
	int32_t t187 = -2334;

    t187 = (((x749&x750)^x751)>x752);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = 1;
	volatile int64_t x754 = INT64_MIN;
	int8_t x755 = INT8_MIN;
	int16_t x756 = -34;

    t188 = (((x753&x754)^x755)>x756);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint32_t x758 = 2U;
	volatile int16_t x759 = 0;
	uint8_t x760 = 13U;
	volatile int32_t t189 = -27474;

    t189 = (((x757&x758)^x759)>x760);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	volatile uint16_t x762 = 361U;
	volatile int32_t x764 = 23586;
	int32_t t190 = -23968;

    t190 = (((x761&x762)^x763)>x764);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x765 = INT32_MIN;
	uint32_t x766 = 8780U;
	int16_t x767 = INT16_MIN;
	static uint8_t x768 = UINT8_MAX;
	static int32_t t191 = -1238803;

    t191 = (((x765&x766)^x767)>x768);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int16_t x769 = INT16_MAX;
	volatile uint8_t x770 = UINT8_MAX;
	uint64_t x771 = 100432377122226LLU;
	static volatile int32_t t192 = 62228;

    t192 = (((x769&x770)^x771)>x772);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x773 = UINT8_MAX;
	int8_t x774 = -3;
	volatile uint64_t x775 = UINT64_MAX;
	static volatile int16_t x776 = INT16_MAX;

    t193 = (((x773&x774)^x775)>x776);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x777 = INT16_MIN;
	int32_t x778 = 605;
	static int16_t x779 = INT16_MIN;
	volatile uint16_t x780 = UINT16_MAX;

    t194 = (((x777&x778)^x779)>x780);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = -1;
	int32_t x783 = 15195;
	volatile int32_t t195 = 69;

    t195 = (((x781&x782)^x783)>x784);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x786 = UINT32_MAX;
	int16_t x787 = -1;

    t196 = (((x785&x786)^x787)>x788);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x789 = -5795474043938826LL;
	int32_t x790 = INT32_MIN;
	int32_t x791 = INT32_MIN;
	uint32_t x792 = UINT32_MAX;
	int32_t t197 = 70;

    t197 = (((x789&x790)^x791)>x792);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = INT16_MAX;
	static uint16_t x795 = 5156U;
	static uint8_t x796 = 0U;
	volatile int32_t t198 = 396803;

    t198 = (((x793&x794)^x795)>x796);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	int64_t x800 = INT64_MIN;
	int32_t t199 = 36647;

    t199 = (((x797&x798)^x799)>x800);

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

