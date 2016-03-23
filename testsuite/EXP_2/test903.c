
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

uint16_t x2 = 0U;
uint32_t x3 = 4U;
int8_t x4 = INT8_MAX;
int16_t x10 = INT16_MIN;
static int32_t t2 = -1;
static uint64_t x14 = 10996078329LLU;
volatile int64_t x20 = INT64_MIN;
uint16_t x22 = 3U;
volatile int32_t t5 = -2505345;
uint16_t x25 = UINT16_MAX;
int64_t x36 = INT64_MAX;
int32_t x38 = INT32_MIN;
volatile uint16_t x45 = 365U;
static volatile uint16_t x48 = 211U;
volatile int64_t x50 = INT64_MIN;
int32_t t13 = -12;
static volatile int16_t x57 = -43;
static int32_t t14 = -64;
uint16_t x62 = UINT16_MAX;
uint8_t x65 = 46U;
int8_t x72 = -1;
static int16_t x76 = INT16_MAX;
int16_t x82 = INT16_MIN;
static int64_t x83 = -1LL;
int32_t t20 = -36083264;
uint32_t x91 = 189U;
int32_t x92 = INT32_MAX;
int32_t x93 = INT32_MIN;
int32_t t24 = -1;
uint16_t x102 = 206U;
int32_t x104 = -1;
uint32_t x112 = 417U;
volatile int32_t t27 = 1623;
uint32_t x116 = 109U;
static int64_t x119 = INT64_MIN;
int64_t x121 = -7LL;
int32_t t30 = 105598566;
int8_t x127 = INT8_MIN;
volatile int32_t t31 = 447;
volatile int16_t x129 = INT16_MIN;
int16_t x130 = INT16_MIN;
int16_t x131 = INT16_MAX;
volatile int32_t x136 = INT32_MIN;
volatile uint8_t x138 = 58U;
uint32_t x140 = 46433165U;
int8_t x162 = 1;
int8_t x165 = INT8_MAX;
uint64_t x167 = 3LLU;
static int64_t x168 = INT64_MIN;
static volatile int32_t t40 = -201741409;
uint8_t x174 = 3U;
int32_t t44 = -7130220;
int64_t x187 = -100723774941LL;
uint32_t x190 = 2541794U;
uint8_t x199 = 15U;
static uint64_t x207 = 4521973677235000505LLU;
volatile int8_t x230 = INT8_MIN;
uint16_t x242 = 415U;
int32_t t57 = -1178257;
int32_t t58 = -1690;
int64_t x249 = INT64_MAX;
int64_t x263 = -170643702173LL;
volatile uint32_t x267 = 1651135U;
uint8_t x272 = UINT8_MAX;
uint32_t x273 = 30426709U;
static int32_t x282 = INT32_MAX;
static int32_t t68 = 46156929;
static uint8_t x296 = 5U;
volatile uint8_t x305 = 2U;
volatile int8_t x307 = INT8_MAX;
volatile int32_t t73 = -55;
int32_t x313 = INT32_MAX;
uint32_t x316 = 614042617U;
int32_t x319 = -359;
uint32_t x320 = UINT32_MAX;
static volatile int32_t x321 = INT32_MAX;
uint32_t x324 = 685U;
volatile int32_t x327 = 38986606;
int64_t x331 = INT64_MAX;
uint16_t x341 = 0U;
int16_t x346 = -1;
static uint16_t x347 = 32665U;
static uint8_t x350 = UINT8_MAX;
static volatile uint32_t x352 = UINT32_MAX;
int32_t x357 = 3075;
uint16_t x360 = 164U;
uint64_t x364 = 868LLU;
uint8_t x365 = UINT8_MAX;
int32_t t87 = -1;
int8_t x374 = -1;
uint16_t x376 = 9U;
int16_t x377 = INT16_MIN;
uint64_t x383 = UINT64_MAX;
int32_t t90 = -98435;
static int16_t x386 = 478;
uint16_t x388 = UINT16_MAX;
int8_t x389 = -1;
static uint32_t x397 = 5887200U;
int16_t x398 = 1594;
int64_t x399 = -1LL;
volatile int32_t t93 = -1358;
volatile int32_t t95 = 0;
int16_t x414 = INT16_MAX;
int16_t x416 = INT16_MIN;
volatile int32_t t97 = 4240;
int32_t t99 = 15;
int16_t x430 = 1645;
int64_t x432 = -1LL;
uint16_t x434 = 4U;
uint32_t x436 = 2U;
static int8_t x438 = INT8_MAX;
static uint64_t x453 = UINT64_MAX;
volatile int32_t t107 = -9777596;
uint16_t x464 = UINT16_MAX;
volatile int32_t t110 = 110302;
uint64_t x471 = 50LLU;
int16_t x475 = INT16_MIN;
uint64_t x479 = 236346516LLU;
volatile uint64_t x484 = UINT64_MAX;
volatile int32_t t114 = 245699396;
int16_t x485 = -1;
static uint64_t x489 = 5188551LLU;
static volatile int8_t x490 = -1;
int16_t x498 = INT16_MAX;
int16_t x499 = 14762;
int32_t t118 = -342223;
uint32_t x504 = 19U;
volatile int32_t x506 = INT32_MIN;
volatile int32_t t120 = 275;
int64_t x512 = -15017521608LL;
static int32_t x516 = INT32_MAX;
int64_t x520 = -286585171168668958LL;
uint16_t x521 = UINT16_MAX;
int8_t x523 = INT8_MAX;
int32_t t124 = -16;
volatile int32_t t126 = 27454233;
uint8_t x533 = UINT8_MAX;
int16_t x537 = INT16_MIN;
int8_t x541 = -1;
int16_t x544 = -1;
int32_t t130 = -70;
uint64_t x549 = 166389512109271046LLU;
uint32_t x554 = 12U;
uint8_t x556 = 9U;
volatile int32_t t132 = 6;
volatile uint8_t x568 = 43U;
int64_t x573 = -19214049114736165LL;
int16_t x574 = INT16_MIN;
uint8_t x579 = 1U;
int8_t x582 = 1;
int64_t x586 = INT64_MIN;
static int8_t x590 = -13;
uint16_t x593 = UINT16_MAX;
uint16_t x599 = UINT16_MAX;
static int16_t x601 = INT16_MIN;
uint64_t x607 = UINT64_MAX;
uint64_t x608 = 267649LLU;
uint16_t x610 = 5647U;
uint8_t x617 = 97U;
int8_t x618 = -1;
int8_t x623 = INT8_MIN;
uint16_t x624 = 3U;
uint16_t x628 = 3145U;
static uint16_t x630 = UINT16_MAX;
uint8_t x634 = 2U;
volatile uint8_t x638 = 0U;
volatile int8_t x640 = -8;
volatile int8_t x642 = 8;
static volatile int64_t x643 = INT64_MAX;
static int8_t x646 = 0;
uint32_t x648 = UINT32_MAX;
static uint8_t x659 = 75U;
int16_t x660 = INT16_MIN;
int32_t t158 = -2;
static uint32_t x668 = UINT32_MAX;
volatile int32_t t159 = 88629642;
int8_t x670 = 1;
int32_t t161 = 204582;
int64_t x677 = 138492126863389930LL;
volatile uint8_t x692 = 6U;
volatile int32_t t165 = 173979863;
int32_t t167 = 984805729;
int32_t t168 = -624896;
static uint64_t x706 = 3LLU;
volatile int32_t t169 = 38934;
uint16_t x712 = UINT16_MAX;
volatile int32_t t170 = -995576;
static volatile int32_t x713 = -77;
int16_t x714 = INT16_MAX;
volatile int64_t x717 = -1LL;
uint8_t x721 = UINT8_MAX;
volatile int32_t t173 = 30;
volatile uint8_t x728 = 17U;
int64_t x736 = INT64_MIN;
uint64_t x740 = 523408043002LLU;
static volatile int32_t x746 = INT32_MIN;
int32_t x749 = INT32_MIN;
int8_t x751 = INT8_MAX;
static int64_t x753 = -7204782492391669LL;
int8_t x760 = -28;
int64_t x768 = -67913326LL;
int32_t t184 = -83;
int8_t x770 = 1;
int8_t x773 = -1;
volatile int32_t t186 = -1403309;
int8_t x781 = INT8_MIN;
uint8_t x786 = UINT8_MAX;
volatile int32_t t190 = 4017320;
volatile uint16_t x797 = UINT16_MAX;
uint16_t x800 = 6836U;
int32_t t192 = -1;
uint8_t x801 = UINT8_MAX;
volatile int8_t x806 = INT8_MIN;
volatile int8_t x811 = INT8_MIN;
volatile uint64_t x812 = 59185241LLU;
uint8_t x818 = 8U;
int16_t x832 = -18;


void f0(void) {
    	int64_t x1 = -169623043314LL;
	int32_t t0 = 1;

    t0 = ((x1>(x2%x3))!=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile uint32_t x5 = 276967U;
	int64_t x6 = 466678554068LL;
	int64_t x7 = -2600694973588LL;
	uint16_t x8 = 69U;
	int32_t t1 = -114110;

    t1 = ((x5>(x6%x7))!=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = UINT8_MAX;
	int64_t x11 = INT64_MIN;
	int8_t x12 = INT8_MIN;

    t2 = ((x9>(x10%x11))!=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x13 = INT8_MIN;
	uint16_t x15 = 5U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -3;

    t3 = ((x13>(x14%x15))!=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 44277772164815LLU;
	volatile int32_t x18 = INT32_MAX;
	uint8_t x19 = 2U;
	volatile int32_t t4 = -27889;

    t4 = ((x17>(x18%x19))!=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 7;
	uint16_t x23 = 4U;
	int32_t x24 = 3677479;

    t5 = ((x21>(x22%x23))!=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x26 = -1;
	volatile uint32_t x27 = UINT32_MAX;
	volatile int64_t x28 = INT64_MIN;
	int32_t t6 = -65385764;

    t6 = ((x25>(x26%x27))!=x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 7;
	static int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	static volatile int64_t x32 = INT64_MIN;
	volatile int32_t t7 = 3195120;

    t7 = ((x29>(x30%x31))!=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint8_t x33 = 37U;
	static uint32_t x34 = UINT32_MAX;
	volatile int32_t x35 = INT32_MAX;
	int32_t t8 = 507325;

    t8 = ((x33>(x34%x35))!=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int64_t x37 = -1LL;
	int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 1821;

    t9 = ((x37>(x38%x39))!=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x41 = -5;
	int64_t x42 = INT64_MAX;
	int64_t x43 = 2641690LL;
	int32_t x44 = -1;
	volatile int32_t t10 = -403661546;

    t10 = ((x41>(x42%x43))!=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x46 = INT64_MIN;
	int64_t x47 = -1LL;
	volatile int32_t t11 = 144991;

    t11 = ((x45>(x46%x47))!=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	volatile uint64_t x51 = UINT64_MAX;
	volatile int64_t x52 = 104377915LL;
	static int32_t t12 = -140461212;

    t12 = ((x49>(x50%x51))!=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 1U;
	static int16_t x54 = -1;
	volatile int64_t x55 = -35571048899283823LL;
	int8_t x56 = -1;

    t13 = ((x53>(x54%x55))!=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	int64_t x59 = 15248866831LL;
	uint64_t x60 = 480789085067LLU;

    t14 = ((x57>(x58%x59))!=x60);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	uint8_t x63 = UINT8_MAX;
	int8_t x64 = -1;
	static volatile int32_t t15 = 11;

    t15 = ((x61>(x62%x63))!=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x66 = INT32_MAX;
	uint32_t x67 = UINT32_MAX;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 0;

    t16 = ((x65>(x66%x67))!=x68);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x69 = 938U;
	volatile uint64_t x70 = 7577LLU;
	static int8_t x71 = INT8_MIN;
	int32_t t17 = -65412;

    t17 = ((x69>(x70%x71))!=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x73 = INT8_MAX;
	uint16_t x74 = 24073U;
	static int64_t x75 = INT64_MAX;
	volatile int32_t t18 = -47337648;

    t18 = ((x73>(x74%x75))!=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x77 = 73989973LL;
	int32_t x78 = INT32_MIN;
	static volatile int64_t x79 = -401277LL;
	static int16_t x80 = INT16_MIN;
	int32_t t19 = -1109;

    t19 = ((x77>(x78%x79))!=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x81 = 0U;
	static volatile uint64_t x84 = UINT64_MAX;

    t20 = ((x81>(x82%x83))!=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 5556309U;
	int32_t x86 = INT32_MIN;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = INT64_MIN;
	int32_t t21 = -275;

    t21 = ((x85>(x86%x87))!=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	uint16_t x90 = 50U;
	static volatile int32_t t22 = -3648887;

    t22 = ((x89>(x90%x91))!=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x94 = INT32_MIN;
	static int32_t x95 = 689466;
	static uint16_t x96 = 3293U;
	int32_t t23 = -254692;

    t23 = ((x93>(x94%x95))!=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x97 = -1;
	uint64_t x98 = 7945118035569866926LLU;
	volatile uint64_t x99 = UINT64_MAX;
	volatile uint8_t x100 = UINT8_MAX;

    t24 = ((x97>(x98%x99))!=x100);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int64_t x101 = INT64_MIN;
	volatile int8_t x103 = INT8_MAX;
	static volatile int32_t t25 = 1;

    t25 = ((x101>(x102%x103))!=x104);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x105 = UINT32_MAX;
	static uint32_t x106 = UINT32_MAX;
	static int32_t x107 = -1;
	int32_t x108 = 132407;
	int32_t t26 = -159831623;

    t26 = ((x105>(x106%x107))!=x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x109 = INT32_MIN;
	int32_t x110 = INT32_MIN;
	int64_t x111 = 174036082LL;

    t27 = ((x109>(x110%x111))!=x112);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = INT64_MIN;
	uint16_t x114 = UINT16_MAX;
	int16_t x115 = -1;
	volatile int32_t t28 = 19;

    t28 = ((x113>(x114%x115))!=x116);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x117 = UINT64_MAX;
	int64_t x118 = -1LL;
	uint32_t x120 = 15789U;
	int32_t t29 = -823501490;

    t29 = ((x117>(x118%x119))!=x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x122 = 15863U;
	int16_t x123 = -5001;
	uint64_t x124 = UINT64_MAX;

    t30 = ((x121>(x122%x123))!=x124);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	static int64_t x126 = -1LL;
	int16_t x128 = INT16_MIN;

    t31 = ((x125>(x126%x127))!=x128);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x132 = 20U;
	int32_t t32 = -406330;

    t32 = ((x129>(x130%x131))!=x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MAX;
	uint16_t x134 = 82U;
	int16_t x135 = INT16_MIN;
	int32_t t33 = -277244;

    t33 = ((x133>(x134%x135))!=x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int8_t x137 = 10;
	static uint32_t x139 = 22350836U;
	static int32_t t34 = -915885;

    t34 = ((x137>(x138%x139))!=x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x141 = UINT32_MAX;
	static int32_t x142 = INT32_MAX;
	uint16_t x143 = UINT16_MAX;
	static uint16_t x144 = UINT16_MAX;
	volatile int32_t t35 = 281795437;

    t35 = ((x141>(x142%x143))!=x144);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = 102U;
	int8_t x146 = -1;
	static uint32_t x147 = 477270399U;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = -475625;

    t36 = ((x145>(x146%x147))!=x148);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = -55798667;
	volatile int32_t x154 = INT32_MIN;
	volatile int16_t x155 = 352;
	uint64_t x156 = 10325LLU;
	static int32_t t37 = 0;

    t37 = ((x153>(x154%x155))!=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int64_t x157 = INT64_MAX;
	int32_t x158 = -1;
	uint32_t x159 = 1U;
	int8_t x160 = 14;
	volatile int32_t t38 = 912908;

    t38 = ((x157>(x158%x159))!=x160);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x161 = -102206190194364LL;
	int32_t x163 = -1;
	uint32_t x164 = 195415157U;
	int32_t t39 = -463;

    t39 = ((x161>(x162%x163))!=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x166 = INT8_MAX;

    t40 = ((x165>(x166%x167))!=x168);

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x169 = -66381256LL;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	int8_t x172 = -2;
	volatile int32_t t41 = 180;

    t41 = ((x169>(x170%x171))!=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = INT8_MAX;
	static int64_t x175 = -502361020298217LL;
	int8_t x176 = INT8_MIN;
	volatile int32_t t42 = 779177302;

    t42 = ((x173>(x174%x175))!=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x177 = INT16_MIN;
	volatile uint16_t x178 = 27U;
	static volatile int32_t x179 = -195;
	uint64_t x180 = UINT64_MAX;
	static int32_t t43 = 547162;

    t43 = ((x177>(x178%x179))!=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x181 = INT64_MAX;
	uint16_t x182 = 777U;
	volatile uint64_t x183 = UINT64_MAX;
	static int8_t x184 = INT8_MAX;

    t44 = ((x181>(x182%x183))!=x184);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = INT8_MIN;
	volatile int16_t x186 = 6;
	static int64_t x188 = -1LL;
	static int32_t t45 = -16946;

    t45 = ((x185>(x186%x187))!=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = -967;
	static uint8_t x191 = 83U;
	uint64_t x192 = 439273426457657648LLU;
	int32_t t46 = -11516025;

    t46 = ((x189>(x190%x191))!=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x193 = INT32_MIN;
	static volatile int64_t x194 = 81113114218266LL;
	int8_t x195 = -47;
	int32_t x196 = INT32_MAX;
	static int32_t t47 = 493;

    t47 = ((x193>(x194%x195))!=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x197 = INT64_MIN;
	static int16_t x198 = 0;
	static uint16_t x200 = 9687U;
	volatile int32_t t48 = -900476556;

    t48 = ((x197>(x198%x199))!=x200);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x201 = INT32_MIN;
	volatile int64_t x202 = -18443484LL;
	uint8_t x203 = 1U;
	int32_t x204 = -1;
	volatile int32_t t49 = -50;

    t49 = ((x201>(x202%x203))!=x204);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x205 = 15U;
	volatile int32_t x206 = INT32_MIN;
	int16_t x208 = -1;
	int32_t t50 = -4902;

    t50 = ((x205>(x206%x207))!=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x209 = 0;
	uint8_t x210 = 16U;
	volatile uint8_t x211 = 29U;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t51 = 1486971;

    t51 = ((x209>(x210%x211))!=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = 15426644340LL;
	volatile uint16_t x214 = 7U;
	int32_t x215 = -48546661;
	int8_t x216 = INT8_MAX;
	int32_t t52 = 496251991;

    t52 = ((x213>(x214%x215))!=x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x217 = 4;
	volatile int64_t x218 = -1LL;
	uint64_t x219 = UINT64_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t53 = -697016;

    t53 = ((x217>(x218%x219))!=x220);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint64_t x221 = 1696856660906844LLU;
	int64_t x222 = INT64_MAX;
	static volatile uint64_t x223 = 32919579076LLU;
	int16_t x224 = INT16_MIN;
	volatile int32_t t54 = -1941279;

    t54 = ((x221>(x222%x223))!=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = -4;
	volatile int32_t x231 = 31;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t55 = -131949216;

    t55 = ((x229>(x230%x231))!=x232);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x233 = 29U;
	int16_t x234 = INT16_MIN;
	volatile int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	static int32_t t56 = 1;

    t56 = ((x233>(x234%x235))!=x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x241 = 5U;
	volatile int64_t x243 = -1LL;
	volatile int16_t x244 = INT16_MIN;

    t57 = ((x241>(x242%x243))!=x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x245 = INT32_MIN;
	int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = UINT16_MAX;

    t58 = ((x245>(x246%x247))!=x248);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint64_t x250 = 1095444956LLU;
	uint64_t x251 = 12888LLU;
	int8_t x252 = INT8_MIN;
	int32_t t59 = -4;

    t59 = ((x249>(x250%x251))!=x252);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x253 = -1;
	uint8_t x254 = 36U;
	volatile int16_t x255 = INT16_MIN;
	static int8_t x256 = -12;
	int32_t t60 = 0;

    t60 = ((x253>(x254%x255))!=x256);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x257 = 58U;
	int8_t x258 = INT8_MIN;
	static int64_t x259 = INT64_MIN;
	int8_t x260 = 25;
	int32_t t61 = 8084244;

    t61 = ((x257>(x258%x259))!=x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x261 = 9U;
	int8_t x262 = INT8_MAX;
	static int8_t x264 = INT8_MIN;
	int32_t t62 = -733803;

    t62 = ((x261>(x262%x263))!=x264);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	int16_t x268 = -1;
	static int32_t t63 = -2;

    t63 = ((x265>(x266%x267))!=x268);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x269 = 668898U;
	volatile uint64_t x270 = 83LLU;
	volatile int8_t x271 = -11;
	int32_t t64 = -9;

    t64 = ((x269>(x270%x271))!=x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x274 = INT64_MIN;
	int32_t x275 = -381902;
	int16_t x276 = -14990;
	int32_t t65 = 978;

    t65 = ((x273>(x274%x275))!=x276);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = 762172LL;
	volatile uint64_t x278 = 31LLU;
	int32_t x279 = -1;
	static int32_t x280 = INT32_MAX;
	static volatile int32_t t66 = -14685484;

    t66 = ((x277>(x278%x279))!=x280);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x281 = UINT16_MAX;
	volatile uint8_t x283 = 7U;
	uint16_t x284 = 0U;
	volatile int32_t t67 = -153505;

    t67 = ((x281>(x282%x283))!=x284);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = -1;
	static volatile int16_t x291 = INT16_MIN;
	volatile uint16_t x292 = 506U;

    t68 = ((x289>(x290%x291))!=x292);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x293 = -1;
	volatile uint32_t x294 = 52730U;
	int8_t x295 = INT8_MIN;
	int32_t t69 = -14;

    t69 = ((x293>(x294%x295))!=x296);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x297 = INT8_MIN;
	uint32_t x298 = 8216044U;
	volatile uint32_t x299 = UINT32_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t70 = 0;

    t70 = ((x297>(x298%x299))!=x300);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x301 = 7067866U;
	volatile int8_t x302 = -34;
	static int16_t x303 = -1;
	static int64_t x304 = 42394291LL;
	int32_t t71 = -5824;

    t71 = ((x301>(x302%x303))!=x304);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x306 = INT8_MIN;
	int8_t x308 = -1;
	int32_t t72 = -1;

    t72 = ((x305>(x306%x307))!=x308);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x309 = INT64_MIN;
	int8_t x310 = -1;
	volatile uint32_t x311 = UINT32_MAX;
	int32_t x312 = INT32_MIN;

    t73 = ((x309>(x310%x311))!=x312);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x314 = 274U;
	uint16_t x315 = 334U;
	volatile int32_t t74 = 64144216;

    t74 = ((x313>(x314%x315))!=x316);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x317 = -14;
	static int8_t x318 = INT8_MIN;
	int32_t t75 = -36465911;

    t75 = ((x317>(x318%x319))!=x320);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x322 = INT32_MIN;
	static uint32_t x323 = 3437U;
	volatile int32_t t76 = 1576;

    t76 = ((x321>(x322%x323))!=x324);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x325 = INT32_MIN;
	int32_t x326 = INT32_MAX;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t77 = -3865839;

    t77 = ((x325>(x326%x327))!=x328);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x329 = INT32_MIN;
	static int64_t x330 = -1LL;
	volatile int32_t x332 = INT32_MIN;
	volatile int32_t t78 = 615876;

    t78 = ((x329>(x330%x331))!=x332);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x333 = INT8_MIN;
	static int64_t x334 = INT64_MIN;
	uint32_t x335 = 57U;
	static uint16_t x336 = 412U;
	volatile int32_t t79 = 29070;

    t79 = ((x333>(x334%x335))!=x336);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x337 = INT32_MIN;
	int16_t x338 = INT16_MIN;
	uint64_t x339 = UINT64_MAX;
	static int32_t x340 = -609;
	int32_t t80 = 166368703;

    t80 = ((x337>(x338%x339))!=x340);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x342 = 154983LLU;
	static uint32_t x343 = UINT32_MAX;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t81 = 169;

    t81 = ((x341>(x342%x343))!=x344);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x345 = INT64_MAX;
	int16_t x348 = INT16_MIN;
	static int32_t t82 = 377423;

    t82 = ((x345>(x346%x347))!=x348);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x349 = -1;
	static volatile int16_t x351 = INT16_MAX;
	volatile int32_t t83 = 4;

    t83 = ((x349>(x350%x351))!=x352);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x353 = 182222U;
	int8_t x354 = INT8_MIN;
	volatile uint8_t x355 = UINT8_MAX;
	static int16_t x356 = INT16_MIN;
	int32_t t84 = 5230;

    t84 = ((x353>(x354%x355))!=x356);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x358 = 25623035U;
	int8_t x359 = -17;
	volatile int32_t t85 = 18141;

    t85 = ((x357>(x358%x359))!=x360);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x361 = 3483U;
	int8_t x362 = -3;
	uint32_t x363 = 7U;
	int32_t t86 = -1;

    t86 = ((x361>(x362%x363))!=x364);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x366 = 4753111533220LLU;
	volatile uint64_t x367 = 29932436314818907LLU;
	int64_t x368 = INT64_MIN;

    t87 = ((x365>(x366%x367))!=x368);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x373 = 126080748664057LLU;
	uint32_t x375 = UINT32_MAX;
	volatile int32_t t88 = 404351;

    t88 = ((x373>(x374%x375))!=x376);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x378 = INT16_MIN;
	int32_t x379 = -482;
	static int64_t x380 = -891550307967858410LL;
	int32_t t89 = -8195146;

    t89 = ((x377>(x378%x379))!=x380);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x381 = -1;
	int8_t x382 = INT8_MIN;
	int32_t x384 = -1;

    t90 = ((x381>(x382%x383))!=x384);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x385 = UINT32_MAX;
	int8_t x387 = 3;
	volatile int32_t t91 = -22;

    t91 = ((x385>(x386%x387))!=x388);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x390 = INT32_MIN;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 4U;
	volatile int32_t t92 = 97387930;

    t92 = ((x389>(x390%x391))!=x392);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x400 = -1;

    t93 = ((x397>(x398%x399))!=x400);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x401 = INT32_MIN;
	volatile int64_t x402 = INT64_MAX;
	int64_t x403 = 138764293051540LL;
	volatile int32_t x404 = -192;
	int32_t t94 = -7855966;

    t94 = ((x401>(x402%x403))!=x404);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x405 = INT16_MIN;
	static uint64_t x406 = UINT64_MAX;
	volatile int64_t x407 = -258967443LL;
	int16_t x408 = INT16_MIN;

    t95 = ((x405>(x406%x407))!=x408);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x409 = -1;
	volatile int16_t x410 = INT16_MIN;
	int64_t x411 = -1LL;
	int64_t x412 = -1LL;
	static volatile int32_t t96 = -3;

    t96 = ((x409>(x410%x411))!=x412);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int64_t x413 = -7815021881LL;
	static int32_t x415 = -1;

    t97 = ((x413>(x414%x415))!=x416);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x417 = INT32_MAX;
	uint8_t x418 = 0U;
	int64_t x419 = -1LL;
	int32_t x420 = -1;
	int32_t t98 = -90334;

    t98 = ((x417>(x418%x419))!=x420);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x421 = INT16_MIN;
	int64_t x422 = -1LL;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MAX;

    t99 = ((x421>(x422%x423))!=x424);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int8_t x425 = -21;
	uint64_t x426 = 690425662LLU;
	int32_t x427 = INT32_MAX;
	int64_t x428 = INT64_MAX;
	static volatile int32_t t100 = 0;

    t100 = ((x425>(x426%x427))!=x428);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x429 = 32U;
	uint8_t x431 = 80U;
	int32_t t101 = -12243;

    t101 = ((x429>(x430%x431))!=x432);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x433 = 24811069860361LL;
	uint32_t x435 = UINT32_MAX;
	int32_t t102 = 67;

    t102 = ((x433>(x434%x435))!=x436);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x437 = INT64_MIN;
	volatile uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 0U;
	static int32_t t103 = -8809;

    t103 = ((x437>(x438%x439))!=x440);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x441 = INT32_MIN;
	volatile int8_t x442 = -1;
	uint16_t x443 = 3U;
	uint64_t x444 = UINT64_MAX;
	volatile int32_t t104 = 36;

    t104 = ((x441>(x442%x443))!=x444);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x445 = UINT8_MAX;
	uint32_t x446 = 347837U;
	int16_t x447 = -489;
	int8_t x448 = INT8_MAX;
	int32_t t105 = -5013745;

    t105 = ((x445>(x446%x447))!=x448);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x449 = UINT32_MAX;
	uint32_t x450 = 16U;
	static int16_t x451 = INT16_MIN;
	uint64_t x452 = 46312066967LLU;
	static volatile int32_t t106 = -132315092;

    t106 = ((x449>(x450%x451))!=x452);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x454 = 7U;
	uint64_t x455 = 501642796137227LLU;
	volatile int64_t x456 = 10520122554202411LL;

    t107 = ((x453>(x454%x455))!=x456);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x457 = -1;
	int64_t x458 = INT64_MIN;
	int8_t x459 = -52;
	int32_t x460 = -918;
	int32_t t108 = -106436;

    t108 = ((x457>(x458%x459))!=x460);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x461 = UINT8_MAX;
	static volatile uint16_t x462 = 192U;
	static int8_t x463 = -1;
	static volatile int32_t t109 = 1;

    t109 = ((x461>(x462%x463))!=x464);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x465 = 231;
	int16_t x466 = INT16_MIN;
	uint32_t x467 = 163146721U;
	int16_t x468 = -69;

    t110 = ((x465>(x466%x467))!=x468);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x469 = -1LL;
	static int8_t x470 = INT8_MAX;
	volatile uint32_t x472 = UINT32_MAX;
	volatile int32_t t111 = 39709;

    t111 = ((x469>(x470%x471))!=x472);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x473 = -1;
	static uint8_t x474 = 10U;
	int8_t x476 = INT8_MAX;
	int32_t t112 = 3;

    t112 = ((x473>(x474%x475))!=x476);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x477 = 2009;
	int16_t x478 = -35;
	uint64_t x480 = UINT64_MAX;
	int32_t t113 = -25866;

    t113 = ((x477>(x478%x479))!=x480);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x481 = 892LLU;
	int16_t x482 = INT16_MIN;
	int16_t x483 = INT16_MIN;

    t114 = ((x481>(x482%x483))!=x484);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x486 = 909;
	volatile int64_t x487 = -1LL;
	uint8_t x488 = 2U;
	volatile int32_t t115 = 7409;

    t115 = ((x485>(x486%x487))!=x488);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x491 = 7LL;
	uint32_t x492 = UINT32_MAX;
	volatile int32_t t116 = 316168;

    t116 = ((x489>(x490%x491))!=x492);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x493 = -1;
	uint64_t x494 = UINT64_MAX;
	static int64_t x495 = -1LL;
	int16_t x496 = 17;
	static volatile int32_t t117 = 56684;

    t117 = ((x493>(x494%x495))!=x496);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x497 = 55050227LL;
	int32_t x500 = INT32_MAX;

    t118 = ((x497>(x498%x499))!=x500);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = -1;
	int32_t x502 = INT32_MAX;
	int8_t x503 = -1;
	volatile int32_t t119 = 197;

    t119 = ((x501>(x502%x503))!=x504);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x505 = -7918;
	volatile int64_t x507 = INT64_MIN;
	static volatile uint64_t x508 = UINT64_MAX;

    t120 = ((x505>(x506%x507))!=x508);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x509 = 5;
	int32_t x510 = INT32_MIN;
	int8_t x511 = 3;
	static int32_t t121 = -24258453;

    t121 = ((x509>(x510%x511))!=x512);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x513 = -1;
	static int16_t x514 = INT16_MAX;
	int64_t x515 = INT64_MIN;
	volatile int32_t t122 = -3;

    t122 = ((x513>(x514%x515))!=x516);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x517 = INT16_MIN;
	volatile int32_t x518 = -1;
	int8_t x519 = 46;
	static volatile int32_t t123 = -24269;

    t123 = ((x517>(x518%x519))!=x520);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x522 = 15330513U;
	int64_t x524 = INT64_MAX;

    t124 = ((x521>(x522%x523))!=x524);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x525 = INT32_MIN;
	uint16_t x526 = UINT16_MAX;
	int64_t x527 = -1LL;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t125 = 0;

    t125 = ((x525>(x526%x527))!=x528);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x529 = 23;
	static uint64_t x530 = 7761914LLU;
	int64_t x531 = INT64_MAX;
	int64_t x532 = INT64_MAX;

    t126 = ((x529>(x530%x531))!=x532);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x534 = INT64_MAX;
	static uint16_t x535 = 26263U;
	volatile int16_t x536 = -1;
	volatile int32_t t127 = 39711;

    t127 = ((x533>(x534%x535))!=x536);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x538 = INT32_MIN;
	static uint64_t x539 = 1LLU;
	static int8_t x540 = INT8_MIN;
	int32_t t128 = -179255;

    t128 = ((x537>(x538%x539))!=x540);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x542 = -1;
	int64_t x543 = -1LL;
	volatile int32_t t129 = 0;

    t129 = ((x541>(x542%x543))!=x544);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int64_t x545 = INT64_MIN;
	int8_t x546 = INT8_MAX;
	uint16_t x547 = UINT16_MAX;
	uint16_t x548 = UINT16_MAX;

    t130 = ((x545>(x546%x547))!=x548);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int8_t x550 = INT8_MAX;
	static int64_t x551 = INT64_MAX;
	uint64_t x552 = 13984244LLU;
	int32_t t131 = -11867;

    t131 = ((x549>(x550%x551))!=x552);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x553 = INT64_MAX;
	static volatile uint8_t x555 = UINT8_MAX;

    t132 = ((x553>(x554%x555))!=x556);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x561 = 60U;
	static uint64_t x562 = 22435408211844LLU;
	int8_t x563 = -1;
	uint8_t x564 = 31U;
	volatile int32_t t133 = -3;

    t133 = ((x561>(x562%x563))!=x564);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static int32_t x565 = -1;
	uint8_t x566 = 1U;
	int8_t x567 = INT8_MAX;
	volatile int32_t t134 = 9341194;

    t134 = ((x565>(x566%x567))!=x568);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x569 = UINT32_MAX;
	volatile int16_t x570 = -10874;
	uint16_t x571 = 6U;
	int16_t x572 = INT16_MIN;
	int32_t t135 = 495279;

    t135 = ((x569>(x570%x571))!=x572);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x575 = INT32_MIN;
	uint8_t x576 = 32U;
	volatile int32_t t136 = -120913467;

    t136 = ((x573>(x574%x575))!=x576);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x577 = UINT32_MAX;
	uint32_t x578 = 118230230U;
	uint16_t x580 = 622U;
	int32_t t137 = -4479;

    t137 = ((x577>(x578%x579))!=x580);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x581 = 6808028;
	uint32_t x583 = UINT32_MAX;
	int16_t x584 = INT16_MIN;
	static volatile int32_t t138 = 120;

    t138 = ((x581>(x582%x583))!=x584);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static int16_t x585 = 15;
	uint64_t x587 = 1284230715LLU;
	uint8_t x588 = 56U;
	volatile int32_t t139 = -20084;

    t139 = ((x585>(x586%x587))!=x588);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x589 = -2006;
	uint16_t x591 = 26U;
	volatile int8_t x592 = 2;
	int32_t t140 = -485792;

    t140 = ((x589>(x590%x591))!=x592);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x594 = INT32_MIN;
	uint64_t x595 = 21234301873LLU;
	int32_t x596 = INT32_MIN;
	static int32_t t141 = 491;

    t141 = ((x593>(x594%x595))!=x596);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x597 = INT64_MIN;
	int32_t x598 = -427956347;
	int32_t x600 = -106461617;
	int32_t t142 = -143488;

    t142 = ((x597>(x598%x599))!=x600);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x602 = INT64_MAX;
	static int32_t x603 = -1;
	int32_t x604 = 10133;
	int32_t t143 = -10812;

    t143 = ((x601>(x602%x603))!=x604);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x605 = UINT64_MAX;
	static uint64_t x606 = UINT64_MAX;
	int32_t t144 = 5358632;

    t144 = ((x605>(x606%x607))!=x608);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int8_t x609 = INT8_MAX;
	int8_t x611 = -15;
	uint64_t x612 = UINT64_MAX;
	static int32_t t145 = 12;

    t145 = ((x609>(x610%x611))!=x612);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x613 = -1;
	int16_t x614 = -1008;
	int32_t x615 = -1;
	int8_t x616 = 0;
	volatile int32_t t146 = -14;

    t146 = ((x613>(x614%x615))!=x616);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x619 = INT8_MIN;
	volatile int64_t x620 = -10983004397219870LL;
	int32_t t147 = 29303597;

    t147 = ((x617>(x618%x619))!=x620);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x621 = INT32_MIN;
	int16_t x622 = INT16_MAX;
	volatile int32_t t148 = 4;

    t148 = ((x621>(x622%x623))!=x624);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x625 = INT64_MIN;
	static uint16_t x626 = UINT16_MAX;
	uint16_t x627 = UINT16_MAX;
	int32_t t149 = -435;

    t149 = ((x625>(x626%x627))!=x628);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int64_t x629 = INT64_MIN;
	static uint8_t x631 = 3U;
	static int32_t x632 = INT32_MIN;
	int32_t t150 = -2582;

    t150 = ((x629>(x630%x631))!=x632);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x633 = UINT64_MAX;
	uint16_t x635 = 3290U;
	static int16_t x636 = INT16_MAX;
	volatile int32_t t151 = -35745;

    t151 = ((x633>(x634%x635))!=x636);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x637 = 31LL;
	int32_t x639 = INT32_MIN;
	volatile int32_t t152 = -14802;

    t152 = ((x637>(x638%x639))!=x640);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x641 = 178217;
	uint64_t x644 = UINT64_MAX;
	volatile int32_t t153 = -32481;

    t153 = ((x641>(x642%x643))!=x644);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x645 = -1LL;
	int64_t x647 = -15605198748879579LL;
	int32_t t154 = -3198469;

    t154 = ((x645>(x646%x647))!=x648);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile int64_t x649 = -1LL;
	int32_t x650 = INT32_MIN;
	static int8_t x651 = -11;
	int8_t x652 = -1;
	volatile int32_t t155 = -45560;

    t155 = ((x649>(x650%x651))!=x652);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x653 = INT64_MIN;
	volatile int32_t x654 = INT32_MIN;
	uint16_t x655 = UINT16_MAX;
	static int8_t x656 = -3;
	static volatile int32_t t156 = -4105597;

    t156 = ((x653>(x654%x655))!=x656);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint8_t x657 = UINT8_MAX;
	static int64_t x658 = -1LL;
	static int32_t t157 = 668;

    t157 = ((x657>(x658%x659))!=x660);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x661 = 2LLU;
	volatile int64_t x662 = 1LL;
	int64_t x663 = INT64_MIN;
	volatile int16_t x664 = INT16_MIN;

    t158 = ((x661>(x662%x663))!=x664);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x665 = 2835;
	volatile uint32_t x666 = UINT32_MAX;
	volatile int16_t x667 = 3;

    t159 = ((x665>(x666%x667))!=x668);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x669 = 0U;
	static int64_t x671 = -1LL;
	static uint64_t x672 = UINT64_MAX;
	int32_t t160 = -250;

    t160 = ((x669>(x670%x671))!=x672);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x673 = UINT32_MAX;
	int8_t x674 = 1;
	uint32_t x675 = 226399978U;
	int8_t x676 = -1;

    t161 = ((x673>(x674%x675))!=x676);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x678 = 710U;
	volatile uint16_t x679 = 2U;
	uint8_t x680 = UINT8_MAX;
	int32_t t162 = 6;

    t162 = ((x677>(x678%x679))!=x680);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x681 = -1;
	int8_t x682 = INT8_MIN;
	uint64_t x683 = UINT64_MAX;
	int64_t x684 = INT64_MIN;
	volatile int32_t t163 = 435;

    t163 = ((x681>(x682%x683))!=x684);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x685 = INT8_MIN;
	int16_t x686 = -33;
	int32_t x687 = -1;
	uint64_t x688 = UINT64_MAX;
	volatile int32_t t164 = 7572327;

    t164 = ((x685>(x686%x687))!=x688);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint16_t x689 = 5U;
	volatile int8_t x690 = -1;
	volatile uint64_t x691 = 2LLU;

    t165 = ((x689>(x690%x691))!=x692);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x693 = 26;
	static volatile int32_t x694 = 124;
	int8_t x695 = INT8_MIN;
	uint64_t x696 = 7151543300010067243LLU;
	int32_t t166 = 14;

    t166 = ((x693>(x694%x695))!=x696);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x697 = -1LL;
	int32_t x698 = INT32_MIN;
	static int8_t x699 = 3;
	static uint32_t x700 = 4935205U;

    t167 = ((x697>(x698%x699))!=x700);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x701 = 7U;
	uint32_t x702 = 7409831U;
	int16_t x703 = INT16_MAX;
	int64_t x704 = -1LL;

    t168 = ((x701>(x702%x703))!=x704);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x705 = 239U;
	int8_t x707 = INT8_MIN;
	int64_t x708 = 1LL;

    t169 = ((x705>(x706%x707))!=x708);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x709 = 5905782062285101LLU;
	int64_t x710 = INT64_MAX;
	volatile int64_t x711 = INT64_MIN;

    t170 = ((x709>(x710%x711))!=x712);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x715 = INT8_MAX;
	int8_t x716 = -16;
	volatile int32_t t171 = -7507495;

    t171 = ((x713>(x714%x715))!=x716);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x718 = -1;
	static uint32_t x719 = 731683U;
	uint16_t x720 = UINT16_MAX;
	int32_t t172 = 10;

    t172 = ((x717>(x718%x719))!=x720);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x722 = 732053760LLU;
	static int8_t x723 = INT8_MAX;
	uint32_t x724 = 0U;

    t173 = ((x721>(x722%x723))!=x724);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x725 = -1LL;
	uint64_t x726 = 108881646111LLU;
	static volatile uint8_t x727 = UINT8_MAX;
	volatile int32_t t174 = -22251843;

    t174 = ((x725>(x726%x727))!=x728);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x729 = INT32_MIN;
	int32_t x730 = 1682;
	int16_t x731 = -1;
	int64_t x732 = -1LL;
	volatile int32_t t175 = 23205;

    t175 = ((x729>(x730%x731))!=x732);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x733 = INT8_MAX;
	volatile int8_t x734 = INT8_MIN;
	static int32_t x735 = -102;
	volatile int32_t t176 = -50581;

    t176 = ((x733>(x734%x735))!=x736);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint16_t x737 = 60U;
	volatile int16_t x738 = INT16_MIN;
	uint16_t x739 = UINT16_MAX;
	volatile int32_t t177 = 227627;

    t177 = ((x737>(x738%x739))!=x740);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x741 = 2891U;
	static volatile int32_t x742 = -1;
	int32_t x743 = 47497;
	uint32_t x744 = UINT32_MAX;
	int32_t t178 = -1;

    t178 = ((x741>(x742%x743))!=x744);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x745 = 228;
	static int8_t x747 = INT8_MIN;
	volatile uint16_t x748 = 4526U;
	volatile int32_t t179 = -8;

    t179 = ((x745>(x746%x747))!=x748);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x750 = 29U;
	int8_t x752 = INT8_MIN;
	volatile int32_t t180 = 500449321;

    t180 = ((x749>(x750%x751))!=x752);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x754 = INT8_MIN;
	int16_t x755 = INT16_MIN;
	static uint32_t x756 = UINT32_MAX;
	volatile int32_t t181 = -817935;

    t181 = ((x753>(x754%x755))!=x756);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x757 = INT32_MAX;
	volatile int16_t x758 = INT16_MAX;
	int16_t x759 = -886;
	volatile int32_t t182 = 860;

    t182 = ((x757>(x758%x759))!=x760);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x761 = -1;
	static int32_t x762 = -1;
	int64_t x763 = -2094680179249LL;
	volatile int64_t x764 = INT64_MAX;
	int32_t t183 = -483;

    t183 = ((x761>(x762%x763))!=x764);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x765 = 3544511133539712LL;
	static volatile int64_t x766 = INT64_MIN;
	static uint16_t x767 = UINT16_MAX;

    t184 = ((x765>(x766%x767))!=x768);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x769 = INT16_MIN;
	int16_t x771 = 158;
	volatile uint64_t x772 = 13LLU;
	int32_t t185 = -893507450;

    t185 = ((x769>(x770%x771))!=x772);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint8_t x774 = 1U;
	volatile int8_t x775 = -1;
	int16_t x776 = INT16_MAX;

    t186 = ((x773>(x774%x775))!=x776);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x777 = 6U;
	volatile int32_t x778 = INT32_MIN;
	int32_t x779 = INT32_MIN;
	uint64_t x780 = 1210413747616LLU;
	static int32_t t187 = 10;

    t187 = ((x777>(x778%x779))!=x780);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x782 = INT32_MIN;
	int16_t x783 = INT16_MAX;
	static int16_t x784 = -1;
	volatile int32_t t188 = -2134;

    t188 = ((x781>(x782%x783))!=x784);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x785 = INT16_MIN;
	static uint64_t x787 = 9179087610LLU;
	int8_t x788 = 15;
	static volatile int32_t t189 = -8;

    t189 = ((x785>(x786%x787))!=x788);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x789 = INT8_MAX;
	static int16_t x790 = INT16_MAX;
	static int64_t x791 = INT64_MAX;
	int32_t x792 = INT32_MAX;

    t190 = ((x789>(x790%x791))!=x792);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x793 = 8589U;
	uint16_t x794 = 8U;
	uint8_t x795 = UINT8_MAX;
	static int32_t x796 = INT32_MAX;
	volatile int32_t t191 = 3808;

    t191 = ((x793>(x794%x795))!=x796);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x798 = -1;
	volatile uint8_t x799 = 7U;

    t192 = ((x797>(x798%x799))!=x800);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x802 = 2086463U;
	static int16_t x803 = INT16_MIN;
	int8_t x804 = INT8_MIN;
	static int32_t t193 = -6565560;

    t193 = ((x801>(x802%x803))!=x804);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x805 = INT8_MIN;
	int8_t x807 = INT8_MIN;
	uint8_t x808 = 31U;
	int32_t t194 = -418252;

    t194 = ((x805>(x806%x807))!=x808);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x809 = INT32_MIN;
	volatile int32_t x810 = 2450;
	volatile int32_t t195 = 248055618;

    t195 = ((x809>(x810%x811))!=x812);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x813 = -301;
	int16_t x814 = INT16_MIN;
	uint16_t x815 = UINT16_MAX;
	volatile uint8_t x816 = 2U;
	int32_t t196 = -470578;

    t196 = ((x813>(x814%x815))!=x816);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x817 = INT32_MIN;
	volatile int8_t x819 = -1;
	uint16_t x820 = UINT16_MAX;
	int32_t t197 = 323087;

    t197 = ((x817>(x818%x819))!=x820);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x825 = INT16_MAX;
	int32_t x826 = -1;
	static int16_t x827 = INT16_MAX;
	static int64_t x828 = INT64_MIN;
	int32_t t198 = -234450;

    t198 = ((x825>(x826%x827))!=x828);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x829 = INT16_MIN;
	static volatile uint8_t x830 = 41U;
	volatile int8_t x831 = INT8_MIN;
	volatile int32_t t199 = 19115;

    t199 = ((x829>(x830%x831))!=x832);

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

