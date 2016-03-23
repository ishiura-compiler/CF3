
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

static int8_t x1 = INT8_MIN;
static int64_t x2 = INT64_MAX;
static int32_t x20 = INT32_MIN;
int16_t x21 = INT16_MIN;
volatile int64_t t5 = -3650816739287647967LL;
uint8_t x29 = 2U;
static int8_t x40 = 0;
int16_t x44 = INT16_MAX;
static int16_t x45 = INT16_MIN;
int32_t x49 = INT32_MIN;
int32_t t11 = -11081;
int8_t x56 = INT8_MIN;
int64_t t13 = -1081351950015LL;
static volatile int8_t x62 = INT8_MAX;
static uint32_t t14 = 5524710U;
uint64_t t15 = 242360LLU;
static int64_t x70 = -1LL;
volatile uint8_t x75 = UINT8_MAX;
uint8_t x81 = UINT8_MAX;
uint64_t x86 = 14528179402314LLU;
uint64_t t20 = 566842435129633810LLU;
int8_t x90 = INT8_MIN;
volatile int8_t x91 = INT8_MIN;
int32_t x94 = -1;
volatile int32_t x95 = INT32_MIN;
static int32_t t22 = -2;
int16_t x98 = -14;
uint64_t t23 = 76LLU;
int32_t x101 = 5216777;
volatile int8_t x102 = INT8_MIN;
int64_t x110 = -1LL;
volatile uint16_t x112 = 3276U;
int32_t t28 = -132460;
volatile int8_t x123 = INT8_MAX;
uint8_t x129 = 22U;
int8_t x131 = INT8_MAX;
static uint16_t x132 = 1491U;
uint16_t x133 = 481U;
volatile int32_t x137 = -1;
volatile uint32_t x141 = UINT32_MAX;
uint16_t x143 = 1U;
int64_t x147 = INT64_MAX;
uint16_t x151 = 122U;
static volatile int64_t t35 = -992998014456LL;
uint8_t x157 = 0U;
volatile int16_t x158 = -1;
uint32_t x166 = 114809U;
int64_t x174 = 511LL;
int64_t x183 = INT64_MAX;
volatile int64_t t42 = -9153434571965294LL;
uint32_t x196 = 261U;
uint8_t x197 = UINT8_MAX;
int64_t t53 = 42929241916LL;
static int16_t x248 = -1;
int16_t x251 = -3;
volatile int32_t t55 = -430665315;
int16_t x257 = -1;
int64_t x263 = -26580309662682LL;
int16_t x269 = INT16_MIN;
volatile int64_t t60 = 4771123466LL;
int8_t x277 = INT8_MIN;
uint32_t x287 = 237124U;
int16_t x289 = INT16_MIN;
int32_t x291 = INT32_MIN;
uint16_t x292 = 331U;
static uint64_t t65 = 7377240965LLU;
volatile uint16_t x300 = 365U;
uint32_t x302 = UINT32_MAX;
int16_t x306 = INT16_MIN;
int32_t x307 = -300;
volatile int32_t t69 = -7093593;
static int64_t t70 = -265LL;
static volatile uint64_t t72 = 7125334699909LLU;
int16_t x344 = INT16_MAX;
int32_t x345 = INT32_MIN;
int64_t x346 = -1LL;
uint8_t x347 = 11U;
uint32_t x351 = UINT32_MAX;
int64_t t76 = -3696590242564LL;
int16_t x355 = -7102;
volatile int16_t x357 = INT16_MAX;
uint8_t x359 = UINT8_MAX;
uint64_t x360 = 394130053679LLU;
volatile uint64_t t78 = 1392912991570980336LLU;
int64_t x362 = INT64_MIN;
int16_t x370 = INT16_MIN;
static uint8_t x371 = 12U;
int32_t x385 = INT32_MIN;
static int16_t x388 = INT16_MAX;
int32_t x391 = INT32_MAX;
int32_t x394 = -2013691;
int8_t x395 = INT8_MIN;
static volatile int8_t x408 = INT8_MIN;
static volatile int64_t x426 = -1LL;
uint16_t x435 = 8U;
volatile uint32_t x436 = UINT32_MAX;
volatile int8_t x437 = -1;
volatile int16_t x438 = 42;
volatile int64_t x439 = 51465217933059LL;
static uint8_t x441 = 11U;
static int32_t t96 = 138532618;
uint16_t x462 = UINT16_MAX;
static int64_t t101 = 134320LL;
uint32_t x470 = 1U;
uint32_t t102 = 14708U;
int32_t x479 = INT32_MIN;
int16_t x501 = 77;
uint32_t x502 = 2217U;
static volatile int16_t x503 = -1;
uint8_t x505 = UINT8_MAX;
volatile int8_t x508 = 51;
int8_t x518 = INT8_MIN;
uint8_t x519 = 1U;
volatile uint16_t x520 = 7U;
int16_t x536 = 128;
uint16_t x549 = 1U;
volatile int64_t t118 = -51974655740LL;
int32_t t119 = -91494791;
volatile uint32_t x563 = 1803018744U;
int8_t x565 = INT8_MIN;
int8_t x569 = INT8_MAX;
static uint16_t x570 = UINT16_MAX;
static uint32_t x573 = 157U;
int8_t x576 = -1;
volatile uint16_t x578 = 5504U;
volatile int32_t x580 = 99530;
int16_t x581 = INT16_MIN;
uint16_t x585 = UINT16_MAX;
int32_t x586 = INT32_MIN;
int16_t x588 = INT16_MIN;
static int64_t x597 = -1LL;
static int8_t x599 = INT8_MIN;
volatile uint64_t t128 = 382680LLU;
volatile int16_t x603 = -1;
int64_t x606 = 9180250762735778LL;
uint64_t x607 = 25544LLU;
volatile int64_t x608 = 635460168466698LL;
volatile uint64_t t130 = 5LLU;
int8_t x609 = -63;
int16_t x628 = -5;
volatile int32_t x631 = -846521;
volatile int64_t t135 = 5LL;
int64_t x638 = INT64_MIN;
static int64_t x641 = 35813102973LL;
uint16_t x643 = 215U;
int8_t x645 = -3;
int32_t x649 = INT32_MIN;
volatile int64_t t139 = 174024LL;
int16_t x657 = INT16_MIN;
volatile int64_t x659 = INT64_MIN;
uint16_t x666 = 127U;
volatile int16_t x679 = INT16_MIN;
static int8_t x680 = 29;
int16_t x682 = 13;
uint32_t x683 = UINT32_MAX;
int16_t x688 = INT16_MIN;
static volatile uint64_t t147 = 451591165939320384LLU;
volatile uint32_t x695 = 227086U;
uint64_t x701 = UINT64_MAX;
static int8_t x706 = INT8_MIN;
int16_t x710 = INT16_MIN;
uint16_t x715 = 35U;
static uint64_t x716 = UINT64_MAX;
int16_t x717 = INT16_MIN;
static uint32_t x719 = 4106U;
int16_t x726 = -1;
int64_t x738 = INT64_MIN;
int32_t x739 = INT32_MAX;
uint64_t t159 = 9159935385LLU;
volatile int16_t x743 = -1;
uint32_t x751 = UINT32_MAX;
int32_t x755 = INT32_MIN;
int8_t x762 = 52;
int64_t x766 = -1LL;
int16_t x768 = INT16_MIN;
volatile int64_t t166 = 56346269LL;
uint64_t x771 = 259131LLU;
volatile uint64_t t167 = 25926007604558654LLU;
static volatile uint32_t t168 = 945U;
static volatile uint16_t x789 = 31U;
int8_t x797 = -1;
volatile int8_t x800 = 28;
static volatile int64_t t175 = 3945114448022LL;
volatile int32_t x811 = -27190;
int32_t t176 = -5007;
uint16_t x820 = UINT16_MAX;
int64_t t178 = -6296743827314538LL;
int16_t x839 = INT16_MIN;
int8_t x840 = INT8_MIN;
int16_t x845 = -818;
int8_t x853 = INT8_MAX;
static uint8_t x855 = UINT8_MAX;
volatile uint64_t x859 = 280268LLU;
int16_t x860 = INT16_MAX;
volatile uint64_t t186 = 310248600381LLU;
uint8_t x865 = 3U;
uint64_t t187 = 1307190634172958LLU;
uint64_t x881 = 65021405316815LLU;
static int16_t x883 = INT16_MIN;
uint64_t t190 = 68330457139LLU;
static int32_t x891 = 2436;
int8_t x892 = INT8_MIN;
uint32_t x906 = 0U;
volatile uint32_t x913 = 54608U;
uint64_t t195 = 97927591819394LLU;
int8_t x919 = -1;
static int32_t t196 = -5105407;
static int32_t x929 = -111436901;


void f0(void) {
    	int64_t x3 = INT64_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 12770987496LL;

    t0 = ((x1-(x2^x3))-x4);

    if (t0 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = INT64_MAX;
	int64_t x6 = -7169052588965LL;
	int8_t x7 = INT8_MIN;
	int16_t x8 = -1;
	int64_t t1 = -244581174073793LL;

    t1 = ((x5-(x6^x7))-x8);

    if (t1 != 9223364867802186789LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	int64_t x10 = INT64_MIN;
	volatile int8_t x11 = INT8_MAX;
	static uint32_t x12 = 32669U;
	int64_t t2 = 674LL;

    t2 = ((x9-(x10^x11))-x12);

    if (t2 != 9223372036854742884LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 0U;
	volatile int64_t x14 = -198395614LL;
	static int16_t x15 = INT16_MAX;
	volatile uint64_t x16 = 206092313151LLU;
	uint64_t t3 = 212716890768532LLU;

    t3 = ((x13-(x14^x15))-x16);

    if (t3 != 18446743867815630564LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	int16_t x19 = -1;
	volatile int32_t t4 = 199716219;

    t4 = ((x17-(x18^x19))-x20);

    if (t4 != 2147450753) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	uint16_t x24 = 1U;

    t5 = ((x21-(x22^x23))-x24);

    if (t5 != 9223372036854677504LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x25 = INT64_MAX;
	uint16_t x26 = 30U;
	uint32_t x27 = 178064U;
	int16_t x28 = 1;
	volatile int64_t t6 = 1106902208932904556LL;

    t6 = ((x25-(x26^x27))-x28);

    if (t6 != 9223372036854597744LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x30 = 1496664674U;
	uint8_t x31 = 3U;
	int64_t x32 = INT64_MAX;
	int64_t t7 = -60514LL;

    t7 = ((x29-(x30^x31))-x32);

    if (t7 != -9223372034056473182LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x37 = INT32_MIN;
	uint32_t x38 = 28108U;
	uint16_t x39 = 1U;
	volatile uint32_t t8 = 27656502U;

    t8 = ((x37-(x38^x39))-x40);

    if (t8 != 2147455539U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x41 = 0U;
	int64_t x42 = -127174224LL;
	volatile uint16_t x43 = UINT16_MAX;
	static volatile int64_t t9 = -3124113LL;

    t9 = ((x41-(x42^x43))-x44);

    if (t9 != 127138226LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x46 = -2485508532014LL;
	int64_t x47 = INT64_MIN;
	int32_t x48 = 117;
	int64_t t10 = -39310771056776LL;

    t10 = ((x45-(x46^x47))-x48);

    if (t10 != -9223369551346276679LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x50 = -1;
	int16_t x51 = -1;
	static int16_t x52 = -1;

    t11 = ((x49-(x50^x51))-x52);

    if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x53 = INT16_MIN;
	uint8_t x54 = UINT8_MAX;
	volatile int16_t x55 = INT16_MIN;
	int32_t t12 = -1;

    t12 = ((x53-(x54^x55))-x56);

    if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = 261926627;
	int64_t x58 = -1LL;
	volatile int16_t x59 = INT16_MIN;
	static int8_t x60 = INT8_MAX;

    t13 = ((x57-(x58^x59))-x60);

    if (t13 != 261893733LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 4U;
	volatile int16_t x63 = -1;
	uint32_t x64 = 459U;

    t14 = ((x61-(x62^x63))-x64);

    if (t14 != 4294966969U) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x65 = INT16_MAX;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = 18532492135LLU;
	uint16_t x68 = 10U;

    t15 = ((x65-(x66^x67))-x68);

    if (t15 != 18446744055177077597LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MIN;
	uint16_t x71 = 13128U;
	int64_t x72 = -1LL;
	int64_t t16 = 2166234LL;

    t16 = ((x69-(x70^x71))-x72);

    if (t16 != -9223372036854762678LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x73 = 2996U;
	int16_t x74 = -1;
	volatile int16_t x76 = 6;
	int32_t t17 = -2546;

    t17 = ((x73-(x74^x75))-x76);

    if (t17 != 3246) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x77 = 117U;
	int16_t x78 = 205;
	uint16_t x79 = 0U;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t18 = 568754665U;

    t18 = ((x77-(x78^x79))-x80);

    if (t18 != 4294967209U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x82 = -282700402394768765LL;
	int16_t x83 = INT16_MIN;
	static volatile uint16_t x84 = 3U;
	volatile int64_t t19 = -102760LL;

    t19 = ((x81-(x82^x83))-x84);

    if (t19 != -282700402394782087LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x85 = -36704324LL;
	uint32_t x87 = 31440U;
	static volatile int64_t x88 = INT64_MIN;

    t20 = ((x85-(x86^x87))-x88);

    if (t20 != 9223357508638696226LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = INT32_MIN;
	static int64_t x92 = 101346745LL;
	volatile int64_t t21 = 13604370278LL;

    t21 = ((x89-(x90^x91))-x92);

    if (t21 != -2248830393LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x93 = 22;
	volatile int8_t x96 = INT8_MIN;

    t22 = ((x93-(x94^x95))-x96);

    if (t22 != -2147483497) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x97 = INT16_MIN;
	int32_t x99 = -8;
	static uint64_t x100 = UINT64_MAX;

    t23 = ((x97-(x98^x99))-x100);

    if (t23 != 18446744073709518839LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x103 = -3;
	uint64_t x104 = 57438265637LLU;
	volatile uint64_t t24 = 3480LLU;

    t24 = ((x101-(x102^x103))-x104);

    if (t24 != 18446744016276502631LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x105 = INT16_MAX;
	static uint32_t x106 = UINT32_MAX;
	uint16_t x107 = 121U;
	volatile uint64_t x108 = 55528LLU;
	volatile uint64_t t25 = 11001596LLU;

    t25 = ((x105-(x106^x107))-x108);

    if (t25 != 18446744073709528977LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x109 = 12;
	int8_t x111 = -11;
	int64_t t26 = 16731LL;

    t26 = ((x109-(x110^x111))-x112);

    if (t26 != -3274LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x113 = INT16_MAX;
	static uint32_t x114 = 164574999U;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = INT32_MAX;
	uint32_t t27 = 43535U;

    t27 = ((x113-(x114^x115))-x116);

    if (t27 != 1982941208U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x117 = UINT8_MAX;
	int8_t x118 = 2;
	volatile uint16_t x119 = UINT16_MAX;
	volatile uint16_t x120 = 471U;

    t28 = ((x117-(x118^x119))-x120);

    if (t28 != -65749) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x121 = 18616264150LLU;
	uint64_t x122 = UINT64_MAX;
	int16_t x124 = INT16_MIN;
	uint64_t t29 = 28LLU;

    t29 = ((x121-(x122^x123))-x124);

    if (t29 != 18616297046LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x130 = INT32_MIN;
	int32_t t30 = -32731252;

    t30 = ((x129-(x130^x131))-x132);

    if (t30 != 2147482052) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x134 = -1;
	int16_t x135 = INT16_MIN;
	static uint16_t x136 = 144U;
	int32_t t31 = -9;

    t31 = ((x133-(x134^x135))-x136);

    if (t31 != -32430) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x138 = 5342U;
	int64_t x139 = INT64_MAX;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t32 = -359093212473612735LL;

    t32 = ((x137-(x138^x139))-x140);

    if (t32 != -9223372036854770721LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x142 = UINT64_MAX;
	volatile int64_t x144 = 31259LL;
	uint64_t t33 = 129430973963LLU;

    t33 = ((x141-(x142^x143))-x144);

    if (t33 != 4294936038LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MIN;
	int64_t x148 = -1LL;
	volatile int64_t t34 = 52LL;

    t34 = ((x145-(x146^x147))-x148);

    if (t34 != -32766LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x149 = -509844;
	int64_t x150 = -125005LL;
	int16_t x152 = INT16_MIN;

    t35 = ((x149-(x150^x151))-x152);

    if (t35 != -352093LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x153 = -1;
	int64_t x154 = -1LL;
	int16_t x155 = INT16_MAX;
	int32_t x156 = 2236;
	int64_t t36 = 1069146981LL;

    t36 = ((x153-(x154^x155))-x156);

    if (t36 != 30531LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x159 = INT8_MAX;
	int64_t x160 = -2380036LL;
	int64_t t37 = -24172LL;

    t37 = ((x157-(x158^x159))-x160);

    if (t37 != 2380164LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x161 = 4253857907330LLU;
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;
	static int64_t x164 = INT64_MIN;
	static volatile uint64_t t38 = 851690793995317623LLU;

    t38 = ((x161-(x162^x163))-x164);

    if (t38 != 9223376290712683139LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x165 = UINT8_MAX;
	volatile uint16_t x167 = UINT16_MAX;
	int8_t x168 = INT8_MIN;
	uint32_t t39 = 223100901U;

    t39 = ((x165-(x166^x167))-x168);

    if (t39 != 4294885881U) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x173 = -1;
	int16_t x175 = 2;
	int8_t x176 = 9;
	static int64_t t40 = 323LL;

    t40 = ((x173-(x174^x175))-x176);

    if (t40 != -519LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x177 = INT16_MAX;
	uint8_t x178 = 20U;
	volatile int64_t x179 = INT64_MAX;
	static int8_t x180 = 45;
	int64_t t41 = -2014106195926LL;

    t41 = ((x177-(x178^x179))-x180);

    if (t41 != -9223372036854743065LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x181 = -1;
	volatile uint32_t x182 = 685652732U;
	static int32_t x184 = -1;

    t42 = ((x181-(x182^x183))-x184);

    if (t42 != -9223372036169123075LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x185 = UINT16_MAX;
	static volatile int32_t x186 = 19966377;
	int64_t x187 = 1764613599756510583LL;
	static int32_t x188 = INT32_MIN;
	int64_t t43 = -1786643638848LL;

    t43 = ((x185-(x186^x187))-x188);

    if (t43 != -1764613597595356383LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x193 = INT32_MAX;
	static uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MAX;
	uint64_t t44 = 219667007963LLU;

    t44 = ((x193-(x194^x195))-x196);

    if (t44 != 2147516154LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x198 = -1;
	int8_t x199 = 0;
	volatile int8_t x200 = INT8_MIN;
	int32_t t45 = 2430;

    t45 = ((x197-(x198^x199))-x200);

    if (t45 != 384) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x201 = INT16_MIN;
	static uint8_t x202 = UINT8_MAX;
	uint8_t x203 = 60U;
	int32_t x204 = -1190954;
	volatile int32_t t46 = 84414;

    t46 = ((x201-(x202^x203))-x204);

    if (t46 != 1157991) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x205 = -106;
	int32_t x206 = INT32_MAX;
	volatile int8_t x207 = -1;
	static int16_t x208 = INT16_MAX;
	int32_t t47 = 1808;

    t47 = ((x205-(x206^x207))-x208);

    if (t47 != 2147450775) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x209 = INT16_MIN;
	uint8_t x210 = 58U;
	int8_t x211 = -1;
	static int32_t x212 = INT32_MIN;
	int32_t t48 = 1;

    t48 = ((x209-(x210^x211))-x212);

    if (t48 != 2147450939) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x217 = -1;
	volatile int16_t x218 = INT16_MIN;
	uint32_t x219 = 948102U;
	volatile int64_t x220 = INT64_MAX;
	int64_t t49 = 7616049814LL;

    t49 = ((x217-(x218^x219))-x220);

    if (t49 != -9223372036853856134LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x225 = UINT16_MAX;
	int32_t x226 = INT32_MIN;
	int16_t x227 = -248;
	int64_t x228 = 41360154LL;
	int64_t t50 = 3LL;

    t50 = ((x225-(x226^x227))-x228);

    if (t50 != -2188778019LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = 178;
	int8_t x230 = INT8_MAX;
	uint8_t x231 = UINT8_MAX;
	static uint8_t x232 = 39U;
	static volatile int32_t t51 = 330389;

    t51 = ((x229-(x230^x231))-x232);

    if (t51 != 11) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int64_t x233 = INT64_MAX;
	uint32_t x234 = 946064U;
	static int16_t x235 = -1;
	int64_t x236 = -1LL;
	static volatile int64_t t52 = -1LL;

    t52 = ((x233-(x234^x235))-x236);

    if (t52 != 9223372032560754577LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x241 = 7LL;
	int8_t x242 = INT8_MAX;
	int64_t x243 = -19529578669LL;
	static int16_t x244 = -1;

    t53 = ((x241-(x242^x243))-x244);

    if (t53 != 19529578716LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x245 = 0U;
	int16_t x246 = INT16_MIN;
	static uint64_t x247 = UINT64_MAX;
	static uint64_t t54 = 14637433LLU;

    t54 = ((x245-(x246^x247))-x248);

    if (t54 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x249 = 1736;
	int16_t x250 = INT16_MIN;
	volatile int32_t x252 = 193726;

    t55 = ((x249-(x250^x251))-x252);

    if (t55 != -224755) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x253 = -1;
	int32_t x254 = INT32_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MIN;
	volatile int32_t t56 = 85296681;

    t56 = ((x253-(x254^x255))-x256);

    if (t56 != 128) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x258 = INT8_MIN;
	uint8_t x259 = UINT8_MAX;
	volatile int8_t x260 = 3;
	static int32_t t57 = 24362003;

    t57 = ((x257-(x258^x259))-x260);

    if (t57 != 125) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = INT32_MIN;
	int64_t x262 = INT64_MIN;
	int8_t x264 = -1;
	volatile int64_t t58 = -53395372LL;

    t58 = ((x261-(x262^x263))-x264);

    if (t58 != -9223345458692596773LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 1067LLU;
	volatile int16_t x266 = -1;
	int8_t x267 = INT8_MIN;
	static int64_t x268 = -444010LL;
	uint64_t t59 = 32LLU;

    t59 = ((x265-(x266^x267))-x268);

    if (t59 != 444950LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x270 = INT64_MIN;
	static int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MIN;

    t60 = ((x269-(x270^x271))-x272);

    if (t60 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x278 = 1322U;
	int64_t x279 = INT64_MIN;
	volatile int32_t x280 = 5950348;
	volatile int64_t t61 = -113LL;

    t61 = ((x277-(x278^x279))-x280);

    if (t61 != 9223372036848824010LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x281 = INT8_MAX;
	static int8_t x282 = INT8_MIN;
	volatile int32_t x283 = 2897584;
	volatile int16_t x284 = -1;
	static volatile int32_t t62 = 1;

    t62 = ((x281-(x282^x283))-x284);

    if (t62 != 2897744) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = INT8_MIN;
	volatile uint32_t x286 = 7078901U;
	static int8_t x288 = 26;
	volatile uint32_t t63 = 21U;

    t63 = ((x285-(x286^x287))-x288);

    if (t63 != 4287652277U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x290 = INT32_MIN;
	int32_t t64 = -226272;

    t64 = ((x289-(x290^x291))-x292);

    if (t64 != -33099) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x293 = UINT64_MAX;
	static int32_t x294 = -4771;
	static uint8_t x295 = 59U;
	static int8_t x296 = INT8_MIN;

    t65 = ((x293-(x294^x295))-x296);

    if (t65 != 4889LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x297 = INT8_MIN;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = -1;
	static int32_t t66 = 331559;

    t66 = ((x297-(x298^x299))-x300);

    if (t66 != 65043) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = INT16_MIN;
	static int8_t x303 = INT8_MIN;
	uint32_t x304 = 368422U;
	volatile uint32_t t67 = 156U;

    t67 = ((x301-(x302^x303))-x304);

    if (t67 != 4294565979U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x305 = 3364;
	int32_t x308 = INT32_MIN;
	volatile int32_t t68 = -1;

    t68 = ((x305-(x306^x307))-x308);

    if (t68 != 2147454544) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x309 = UINT16_MAX;
	int32_t x310 = -1;
	volatile int16_t x311 = INT16_MIN;
	uint16_t x312 = 1643U;

    t69 = ((x309-(x310^x311))-x312);

    if (t69 != 31125) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	static uint16_t x323 = 5638U;
	volatile int8_t x324 = -1;

    t70 = ((x321-(x322^x323))-x324);

    if (t70 != -9223372034707297797LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x325 = 588108134534LLU;
	static int8_t x326 = INT8_MIN;
	int16_t x327 = -123;
	static uint16_t x328 = 153U;
	static uint64_t t71 = 5040756775579671LLU;

    t71 = ((x325-(x326^x327))-x328);

    if (t71 != 588108134376LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x333 = -1;
	volatile uint16_t x334 = 5215U;
	uint64_t x335 = 104615490518237LLU;
	uint32_t x336 = 9377208U;

    t72 = ((x333-(x334^x335))-x336);

    if (t72 != 18446639458209661381LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x337 = -1;
	volatile int32_t x338 = 25315;
	int8_t x339 = -1;
	static int16_t x340 = -16;
	volatile int32_t t73 = -2786;

    t73 = ((x337-(x338^x339))-x340);

    if (t73 != 25331) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x341 = 0;
	int64_t x342 = 4059508921329538000LL;
	uint16_t x343 = UINT16_MAX;
	volatile int64_t t74 = -2986134813533808LL;

    t74 = ((x341-(x342^x343))-x344);

    if (t74 != -4059508921329593390LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x348 = 864U;
	static int64_t t75 = -661560LL;

    t75 = ((x345-(x346^x347))-x348);

    if (t75 != -2147484500LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x349 = 10U;
	uint32_t x350 = UINT32_MAX;
	static int64_t x352 = INT64_MAX;

    t76 = ((x349-(x350^x351))-x352);

    if (t76 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint32_t x353 = 177U;
	static int32_t x354 = 27211939;
	int64_t x356 = -4394LL;
	int64_t t77 = 370LL;

    t77 = ((x353-(x354^x355))-x356);

    if (t77 != 27211002LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint64_t x358 = 989LLU;

    t78 = ((x357-(x358^x359))-x360);

    if (t78 != 18446743679579529902LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x361 = 0U;
	volatile int32_t x363 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	volatile int64_t t79 = 16762757LL;

    t79 = ((x361-(x362^x363))-x364);

    if (t79 != -9223372034707292287LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = 0;
	volatile int8_t x366 = INT8_MAX;
	volatile int8_t x367 = INT8_MAX;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t80 = -313;

    t80 = ((x365-(x366^x367))-x368);

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x369 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	static int32_t t81 = 1429894;

    t81 = ((x369-(x370^x371))-x372);

    if (t81 != 65396) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x377 = -1LL;
	static uint16_t x378 = UINT16_MAX;
	int64_t x379 = -42LL;
	volatile int32_t x380 = 141838;
	static volatile int64_t t82 = 21531769742LL;

    t82 = ((x377-(x378^x379))-x380);

    if (t82 != -76344LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int8_t x381 = -1;
	static volatile int8_t x382 = -1;
	uint8_t x383 = 1U;
	uint32_t x384 = UINT32_MAX;
	volatile uint32_t t83 = 391656880U;

    t83 = ((x381-(x382^x383))-x384);

    if (t83 != 2U) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x386 = 149460;
	int8_t x387 = INT8_MIN;
	int32_t t84 = 0;

    t84 = ((x385-(x386^x387))-x388);

    if (t84 != -2147366995) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = INT8_MIN;
	static int16_t x390 = INT16_MIN;
	uint16_t x392 = 74U;
	int32_t t85 = -90656;

    t85 = ((x389-(x390^x391))-x392);

    if (t85 != 2147450679) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x393 = INT8_MAX;
	uint64_t x396 = 956451487446405485LLU;
	volatile uint64_t t86 = 283504142933456LLU;

    t86 = ((x393-(x394^x395))-x396);

    if (t86 != 17490292586261132685LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x397 = INT16_MAX;
	static uint32_t x398 = 0U;
	volatile int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	volatile uint32_t t87 = 4U;

    t87 = ((x397-(x398^x399))-x400);

    if (t87 != 32896U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x401 = UINT64_MAX;
	volatile uint16_t x402 = UINT16_MAX;
	int8_t x403 = -1;
	volatile int16_t x404 = -1;
	volatile uint64_t t88 = 618135593979678LLU;

    t88 = ((x401-(x402^x403))-x404);

    if (t88 != 65536LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint16_t x405 = 481U;
	int8_t x406 = INT8_MAX;
	int16_t x407 = -1;
	volatile int32_t t89 = -1018342122;

    t89 = ((x405-(x406^x407))-x408);

    if (t89 != 737) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x409 = -1;
	volatile int64_t x410 = INT64_MIN;
	int8_t x411 = 7;
	static volatile uint8_t x412 = UINT8_MAX;
	int64_t t90 = 139592700606459771LL;

    t90 = ((x409-(x410^x411))-x412);

    if (t90 != 9223372036854775545LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x421 = INT64_MAX;
	static volatile uint64_t x422 = 58541LLU;
	int32_t x423 = INT32_MIN;
	int64_t x424 = INT64_MIN;
	volatile uint64_t t91 = 8254029LLU;

    t91 = ((x421-(x422^x423))-x424);

    if (t91 != 2147425106LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x425 = UINT64_MAX;
	int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	volatile uint64_t t92 = 16736673LLU;

    t92 = ((x425-(x426^x427))-x428);

    if (t92 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = 87625LLU;
	int64_t x432 = INT64_MIN;
	static uint64_t t93 = 6LLU;

    t93 = ((x429-(x430^x431))-x432);

    if (t93 != 9223372039002171830LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x433 = 4U;
	uint16_t x434 = 122U;
	volatile uint32_t t94 = 881U;

    t94 = ((x433-(x434^x435))-x436);

    if (t94 != 4294967187U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x440 = INT32_MIN;
	int64_t t95 = 50LL;

    t95 = ((x437-(x438^x439))-x440);

    if (t95 != -51463070449450LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint8_t x442 = UINT8_MAX;
	uint8_t x443 = 3U;
	int32_t x444 = 7790;

    t96 = ((x441-(x442^x443))-x444);

    if (t96 != -8031) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x445 = -1;
	int16_t x446 = INT16_MIN;
	uint16_t x447 = UINT16_MAX;
	static volatile int16_t x448 = INT16_MIN;
	int32_t t97 = 117;

    t97 = ((x445-(x446^x447))-x448);

    if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x449 = 7651541U;
	volatile int64_t x450 = -7375718237487LL;
	uint16_t x451 = 2U;
	int64_t x452 = -1LL;
	volatile int64_t t98 = 0LL;

    t98 = ((x449-(x450^x451))-x452);

    if (t98 != 7375725889027LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x453 = 3;
	int8_t x454 = 2;
	uint8_t x455 = UINT8_MAX;
	int32_t x456 = INT32_MIN;
	static int32_t t99 = -1;

    t99 = ((x453-(x454^x455))-x456);

    if (t99 != 2147483398) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x461 = 2046LL;
	int64_t x463 = INT64_MAX;
	static volatile int16_t x464 = INT16_MIN;
	int64_t t100 = 64297LL;

    t100 = ((x461-(x462^x463))-x464);

    if (t100 != -9223372036854675458LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x465 = INT64_MIN;
	int16_t x466 = 1;
	int64_t x467 = INT64_MIN;
	volatile uint32_t x468 = 0U;

    t101 = ((x465-(x466^x467))-x468);

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x469 = -15951;
	int8_t x471 = INT8_MIN;
	static int32_t x472 = -1;

    t102 = ((x469-(x470^x471))-x472);

    if (t102 != 4294951473U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x473 = INT16_MIN;
	int64_t x474 = 51488579691LL;
	uint8_t x475 = 31U;
	volatile int32_t x476 = -290;
	volatile int64_t t103 = 1553943865584204LL;

    t103 = ((x473-(x474^x475))-x476);

    if (t103 != -51488612178LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x477 = -1;
	int64_t x478 = -300094190902793LL;
	int16_t x480 = INT16_MIN;
	int64_t t104 = 8573398190191585LL;

    t104 = ((x477-(x478^x479))-x480);

    if (t104 != -300095276425720LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x481 = INT64_MIN;
	uint64_t x482 = 4020127LLU;
	int64_t x483 = INT64_MIN;
	int64_t x484 = 14340200529366LL;
	volatile uint64_t t105 = 25767LLU;

    t105 = ((x481-(x482^x483))-x484);

    if (t105 != 18446729733505002123LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x485 = 505497517U;
	static int64_t x486 = 2034128879LL;
	volatile uint8_t x487 = UINT8_MAX;
	int32_t x488 = -1;
	int64_t t106 = -21900648109784LL;

    t106 = ((x485-(x486^x487))-x488);

    if (t106 != -1528631138LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x489 = -45;
	int32_t x490 = INT32_MIN;
	static uint64_t x491 = UINT64_MAX;
	static int32_t x492 = 17833;
	uint64_t t107 = 94744563505652741LLU;

    t107 = ((x489-(x490^x491))-x492);

    if (t107 != 18446744071562050091LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x493 = 11311U;
	int16_t x494 = INT16_MIN;
	int8_t x495 = 2;
	static int16_t x496 = INT16_MAX;
	int32_t t108 = -6;

    t108 = ((x493-(x494^x495))-x496);

    if (t108 != 11310) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int8_t x504 = INT8_MIN;
	volatile uint32_t t109 = 44060431U;

    t109 = ((x501-(x502^x503))-x504);

    if (t109 != 2423U) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x506 = -20;
	int8_t x507 = -1;
	volatile int32_t t110 = 30889;

    t110 = ((x505-(x506^x507))-x508);

    if (t110 != 185) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x509 = INT8_MIN;
	static int64_t x510 = -1LL;
	static int16_t x511 = -12179;
	volatile int16_t x512 = INT16_MAX;
	int64_t t111 = 2LL;

    t111 = ((x509-(x510^x511))-x512);

    if (t111 != -45073LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x517 = 512348422LLU;
	volatile uint64_t t112 = 10LLU;

    t112 = ((x517-(x518^x519))-x520);

    if (t112 != 512348542LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x525 = INT32_MIN;
	static uint64_t x526 = UINT64_MAX;
	volatile int8_t x527 = INT8_MIN;
	int16_t x528 = INT16_MAX;
	volatile uint64_t t113 = 270013333305562735LLU;

    t113 = ((x525-(x526^x527))-x528);

    if (t113 != 18446744071562035074LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x533 = -1LL;
	uint64_t x534 = UINT64_MAX;
	uint64_t x535 = 1066496LLU;
	uint64_t t114 = 76622LLU;

    t114 = ((x533-(x534^x535))-x536);

    if (t114 != 1066368LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x541 = 98988758789297LLU;
	int32_t x542 = -2787604;
	int8_t x543 = INT8_MAX;
	volatile int8_t x544 = -1;
	uint64_t t115 = 4928243215754LLU;

    t115 = ((x541-(x542^x543))-x544);

    if (t115 != 98988761576991LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x545 = INT16_MIN;
	uint32_t x546 = 62U;
	uint8_t x547 = 0U;
	uint8_t x548 = UINT8_MAX;
	static uint32_t t116 = 1539U;

    t116 = ((x545-(x546^x547))-x548);

    if (t116 != 4294934211U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x550 = -1;
	uint16_t x551 = UINT16_MAX;
	int32_t x552 = -1;
	static int32_t t117 = 7606;

    t117 = ((x549-(x550^x551))-x552);

    if (t117 != 65538) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x553 = 9069LL;
	static uint32_t x554 = 52740U;
	int16_t x555 = INT16_MIN;
	int8_t x556 = 20;

    t118 = ((x553-(x554^x555))-x556);

    if (t118 != -4294912683LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x557 = INT16_MAX;
	int8_t x558 = -1;
	uint16_t x559 = UINT16_MAX;
	uint16_t x560 = 3U;

    t119 = ((x557-(x558^x559))-x560);

    if (t119 != 98300) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x561 = INT16_MIN;
	uint8_t x562 = 14U;
	volatile int64_t x564 = -1LL;
	volatile int64_t t120 = -230LL;

    t120 = ((x561-(x562^x563))-x564);

    if (t120 != 2491915787LL) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x566 = INT8_MIN;
	uint16_t x567 = 28U;
	int8_t x568 = INT8_MIN;
	static int32_t t121 = 1420;

    t121 = ((x565-(x566^x567))-x568);

    if (t121 != 100) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x571 = UINT16_MAX;
	int64_t x572 = 3815139052416922LL;
	volatile int64_t t122 = 111571LL;

    t122 = ((x569-(x570^x571))-x572);

    if (t122 != -3815139052416795LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x574 = UINT16_MAX;
	int8_t x575 = INT8_MAX;
	volatile uint32_t t123 = 412507886U;

    t123 = ((x573-(x574^x575))-x576);

    if (t123 != 4294902046U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x577 = -1;
	uint32_t x579 = 966330675U;
	volatile uint32_t t124 = 96U;

    t124 = ((x577-(x578^x579))-x580);

    if (t124 != 3328532098U) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x582 = INT16_MAX;
	static volatile uint64_t x583 = 11409LLU;
	static uint16_t x584 = 11196U;
	uint64_t t125 = 873LLU;

    t125 = ((x581-(x582^x583))-x584);

    if (t125 != 18446744073709486294LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x587 = INT8_MIN;
	static int32_t t126 = 1889;

    t126 = ((x585-(x586^x587))-x588);

    if (t126 != -2147385217) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x589 = 7636U;
	int32_t x590 = INT32_MAX;
	int64_t x591 = INT64_MIN;
	volatile int64_t x592 = -1LL;
	int64_t t127 = 1038031331986265LL;

    t127 = ((x589-(x590^x591))-x592);

    if (t127 != 9223372034707299798LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x598 = 1LLU;
	int16_t x600 = INT16_MAX;

    t128 = ((x597-(x598^x599))-x600);

    if (t128 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int64_t x601 = -1LL;
	static int8_t x602 = INT8_MIN;
	uint16_t x604 = UINT16_MAX;
	static int64_t t129 = 239699449871427752LL;

    t129 = ((x601-(x602^x603))-x604);

    if (t129 != -65663LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x605 = INT32_MAX;

    t130 = ((x605-(x606^x607))-x608);

    if (t130 != 18436928364925856651LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x610 = -583;
	uint32_t x611 = 6571U;
	int64_t x612 = INT64_MAX;
	volatile int64_t t131 = -17992615LL;

    t131 = ((x609-(x610^x611))-x612);

    if (t131 != -9223372036854768720LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x613 = -94;
	int16_t x614 = 0;
	static volatile int32_t x615 = -119881258;
	int32_t x616 = INT32_MAX;
	volatile int32_t t132 = 32;

    t132 = ((x613-(x614^x615))-x616);

    if (t132 != -2027602483) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x621 = -15;
	int64_t x622 = INT64_MIN;
	int8_t x623 = INT8_MAX;
	static int32_t x624 = -7;
	int64_t t133 = -1024283906LL;

    t133 = ((x621-(x622^x623))-x624);

    if (t133 != 9223372036854775673LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x625 = -7672;
	static int32_t x626 = -75246;
	static uint64_t x627 = 4LLU;
	uint64_t t134 = 5438681790357LLU;

    t134 = ((x625-(x626^x627))-x628);

    if (t134 != 67575LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x629 = UINT32_MAX;
	int32_t x630 = -1889008;
	static int64_t x632 = -1LL;

    t135 = ((x629-(x630^x631))-x632);

    if (t135 != 4293904297LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x637 = 1U;
	static int64_t x639 = -1LL;
	uint8_t x640 = 1U;
	volatile int64_t t136 = -345LL;

    t136 = ((x637-(x638^x639))-x640);

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x642 = UINT8_MAX;
	uint32_t x644 = UINT32_MAX;
	int64_t t137 = 2LL;

    t137 = ((x641-(x642^x643))-x644);

    if (t137 != 31518135638LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x646 = 0U;
	static uint32_t x647 = 51624366U;
	volatile int16_t x648 = INT16_MIN;
	volatile uint32_t t138 = 94U;

    t138 = ((x645-(x646^x647))-x648);

    if (t138 != 4243375695U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x650 = 385022LL;
	volatile int64_t x651 = 1LL;
	int8_t x652 = -1;

    t139 = ((x649-(x650^x651))-x652);

    if (t139 != -2147868670LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x653 = 1639U;
	int8_t x654 = -1;
	static int32_t x655 = INT32_MIN;
	int8_t x656 = INT8_MIN;
	int32_t t140 = -27482;

    t140 = ((x653-(x654^x655))-x656);

    if (t140 != -2147481880) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x658 = 12611LLU;
	int8_t x660 = -1;
	volatile uint64_t t141 = 57731409094312530LLU;

    t141 = ((x657-(x658^x659))-x660);

    if (t141 != 9223372036854730430LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x665 = INT8_MIN;
	int16_t x667 = INT16_MAX;
	static int32_t x668 = -1;
	volatile int32_t t142 = 1939871;

    t142 = ((x665-(x666^x667))-x668);

    if (t142 != -32767) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x669 = UINT16_MAX;
	int64_t x670 = -14223362866LL;
	int16_t x671 = INT16_MIN;
	uint8_t x672 = 1U;
	int64_t t143 = -623476237283217LL;

    t143 = ((x669-(x670^x671))-x672);

    if (t143 != -14223291600LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x673 = INT16_MIN;
	int32_t x674 = -3915336;
	volatile int8_t x675 = INT8_MIN;
	int16_t x676 = INT16_MIN;
	int32_t t144 = -62131;

    t144 = ((x673-(x674^x675))-x676);

    if (t144 != -3915320) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x677 = -1;
	int64_t x678 = -335843494LL;
	volatile int64_t t145 = 26317665656087LL;

    t145 = ((x677-(x678^x679))-x680);

    if (t145 != -335867768LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x681 = INT32_MAX;
	int32_t x684 = INT32_MAX;
	static volatile uint32_t t146 = 2U;

    t146 = ((x681-(x682^x683))-x684);

    if (t146 != 14U) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x685 = INT32_MIN;
	int64_t x686 = INT64_MIN;
	uint64_t x687 = 119LLU;

    t147 = ((x685-(x686^x687))-x688);

    if (t147 != 9223372034707324809LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x693 = INT16_MIN;
	int16_t x694 = -1;
	int64_t x696 = -1LL;
	volatile int64_t t148 = 2708218408210660LL;

    t148 = ((x693-(x694^x695))-x696);

    if (t148 != 194320LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x697 = -1;
	uint64_t x698 = 271299716872LLU;
	static int32_t x699 = INT32_MIN;
	int8_t x700 = 5;
	static volatile uint64_t t149 = 5931778215255LLU;

    t149 = ((x697-(x698^x699))-x700);

    if (t149 != 272013646066LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x702 = INT8_MAX;
	int16_t x703 = INT16_MIN;
	int32_t x704 = INT32_MIN;
	volatile uint64_t t150 = 83995566433741281LLU;

    t150 = ((x701-(x702^x703))-x704);

    if (t150 != 2147516288LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x705 = 13325078U;
	int8_t x707 = -14;
	int16_t x708 = INT16_MAX;
	static uint32_t t151 = 174U;

    t151 = ((x705-(x706^x707))-x708);

    if (t151 != 13292197U) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x709 = INT64_MAX;
	int16_t x711 = INT16_MIN;
	static int32_t x712 = 0;
	int64_t t152 = INT64_MAX;

    t152 = ((x709-(x710^x711))-x712);

    if (t152 != INT64_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x713 = UINT16_MAX;
	int16_t x714 = INT16_MIN;
	uint64_t t153 = 364903645962492119LLU;

    t153 = ((x713-(x714^x715))-x716);

    if (t153 != 98269LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x718 = INT32_MIN;
	int32_t x720 = INT32_MIN;
	volatile uint32_t t154 = 13836U;

    t154 = ((x717-(x718^x719))-x720);

    if (t154 != 4294930422U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x721 = -1;
	int32_t x722 = INT32_MIN;
	uint32_t x723 = UINT32_MAX;
	static int16_t x724 = 154;
	uint32_t t155 = 1646387U;

    t155 = ((x721-(x722^x723))-x724);

    if (t155 != 2147483494U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x725 = 28;
	int8_t x727 = INT8_MIN;
	uint64_t x728 = UINT64_MAX;
	volatile uint64_t t156 = 10238873LLU;

    t156 = ((x725-(x726^x727))-x728);

    if (t156 != 18446744073709551518LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x729 = INT32_MAX;
	uint32_t x730 = 19U;
	int32_t x731 = 495617;
	volatile uint64_t x732 = 39LLU;
	volatile uint64_t t157 = 30859163LLU;

    t157 = ((x729-(x730^x731))-x732);

    if (t157 != 2146987974LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x733 = -1;
	uint8_t x734 = 16U;
	volatile int32_t x735 = -1;
	volatile int16_t x736 = -502;
	static volatile int32_t t158 = -88403;

    t158 = ((x733-(x734^x735))-x736);

    if (t158 != 518) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x737 = 13LL;
	uint64_t x740 = 265LLU;

    t159 = ((x737-(x738^x739))-x740);

    if (t159 != 9223372034707291909LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x741 = 90U;
	static volatile uint64_t x742 = 16883826770LLU;
	int32_t x744 = -26069915;
	uint64_t t160 = 148407583339LLU;

    t160 = ((x741-(x742^x743))-x744);

    if (t160 != 16909896776LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x745 = INT8_MIN;
	int16_t x746 = INT16_MIN;
	static uint64_t x747 = 35045704738746LLU;
	int64_t x748 = INT64_MIN;
	uint64_t t161 = 475344934159040LLU;

    t161 = ((x745-(x746^x747))-x748);

    if (t161 != 9223407082559526854LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x749 = -1LL;
	int16_t x750 = -1;
	volatile uint64_t x752 = 167525599866LLU;
	static uint64_t t162 = 745LLU;

    t162 = ((x749-(x750^x751))-x752);

    if (t162 != 18446743906183951749LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x753 = 83;
	uint64_t x754 = 14255011383LLU;
	static int16_t x756 = -23;
	uint64_t t163 = 0LLU;

    t163 = ((x753-(x754^x755))-x756);

    if (t163 != 13662276147LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x757 = -139;
	int64_t x758 = 304LL;
	uint64_t x759 = UINT64_MAX;
	int16_t x760 = INT16_MAX;
	uint64_t t164 = 340283094LLU;

    t164 = ((x757-(x758^x759))-x760);

    if (t164 != 18446744073709519015LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x761 = INT32_MIN;
	volatile uint32_t x763 = 15150U;
	uint8_t x764 = UINT8_MAX;
	volatile uint32_t t165 = 13810U;

    t165 = ((x761-(x762^x763))-x764);

    if (t165 != 2147468263U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x765 = INT16_MIN;
	static int8_t x767 = -1;

    t166 = ((x765-(x766^x767))-x768);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x769 = 2497082485121LLU;
	static uint32_t x770 = 666840701U;
	uint16_t x772 = 13U;

    t167 = ((x769-(x770^x771))-x772);

    if (t167 != 2496415797038LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x773 = 147U;
	int8_t x774 = INT8_MIN;
	int16_t x775 = -2;
	static volatile int16_t x776 = INT16_MIN;

    t168 = ((x773-(x774^x775))-x776);

    if (t168 != 32789U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x777 = INT64_MIN;
	int16_t x778 = -1;
	uint64_t x779 = UINT64_MAX;
	int64_t x780 = INT64_MIN;
	static uint64_t t169 = 5926577669190LLU;

    t169 = ((x777-(x778^x779))-x780);

    if (t169 != 0LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x781 = -1;
	int16_t x782 = 74;
	int32_t x783 = -300;
	int64_t x784 = -2360176900LL;
	int64_t t170 = -8126LL;

    t170 = ((x781-(x782^x783))-x784);

    if (t170 != 2360177253LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x785 = 13501296U;
	int8_t x786 = INT8_MIN;
	volatile uint32_t x787 = UINT32_MAX;
	int16_t x788 = -9;
	uint32_t t171 = 76567712U;

    t171 = ((x785-(x786^x787))-x788);

    if (t171 != 13501178U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x790 = -1;
	volatile int16_t x791 = INT16_MIN;
	static int8_t x792 = INT8_MAX;
	int32_t t172 = 882709;

    t172 = ((x789-(x790^x791))-x792);

    if (t172 != -32863) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x793 = 9U;
	int32_t x794 = 0;
	uint8_t x795 = UINT8_MAX;
	int8_t x796 = -9;
	volatile int32_t t173 = 323;

    t173 = ((x793-(x794^x795))-x796);

    if (t173 != -237) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x798 = INT32_MIN;
	static volatile uint8_t x799 = UINT8_MAX;
	int32_t t174 = -8930;

    t174 = ((x797-(x798^x799))-x800);

    if (t174 != 2147483364) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x801 = -6582;
	int64_t x802 = -1LL;
	int8_t x803 = 41;
	uint8_t x804 = UINT8_MAX;

    t175 = ((x801-(x802^x803))-x804);

    if (t175 != -6795LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x809 = INT8_MIN;
	uint8_t x810 = 108U;
	static volatile int8_t x812 = -5;

    t176 = ((x809-(x810^x811))-x812);

    if (t176 != 27103) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x813 = -1469614875222910845LL;
	static int32_t x814 = 60966968;
	uint64_t x815 = 229611421883LLU;
	volatile uint64_t x816 = 174474953546LLU;
	volatile uint64_t t177 = 473276608189LLU;

    t177 = ((x813-(x814^x815))-x816);

    if (t177 != 16977128794393857206LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x817 = -1LL;
	int8_t x818 = -1;
	int16_t x819 = INT16_MIN;

    t178 = ((x817-(x818^x819))-x820);

    if (t178 != -98303LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x829 = INT64_MIN;
	int8_t x830 = INT8_MAX;
	int64_t x831 = INT64_MIN;
	static int8_t x832 = INT8_MIN;
	int64_t t179 = -57786LL;

    t179 = ((x829-(x830^x831))-x832);

    if (t179 != 1LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x837 = 151;
	int64_t x838 = INT64_MIN;
	int64_t t180 = 1LL;

    t180 = ((x837-(x838^x839))-x840);

    if (t180 != -9223372036854742761LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x841 = -2201112536040313LL;
	uint32_t x842 = 148U;
	static uint8_t x843 = 71U;
	uint32_t x844 = UINT32_MAX;
	static volatile int64_t t181 = 63532539091196715LL;

    t181 = ((x841-(x842^x843))-x844);

    if (t181 != -2201116831007819LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint16_t x846 = UINT16_MAX;
	uint16_t x847 = 2696U;
	int8_t x848 = -1;
	static volatile int32_t t182 = -77478;

    t182 = ((x845-(x846^x847))-x848);

    if (t182 != -63656) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x849 = 3U;
	volatile int32_t x850 = -1;
	uint64_t x851 = UINT64_MAX;
	int64_t x852 = INT64_MIN;
	volatile uint64_t t183 = 66036574729LLU;

    t183 = ((x849-(x850^x851))-x852);

    if (t183 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int64_t x854 = INT64_MIN;
	uint64_t x856 = 21408149736690349LLU;
	uint64_t t184 = 583LLU;

    t184 = ((x853-(x854^x855))-x856);

    if (t184 != 9201963887118085331LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x857 = 14985U;
	uint8_t x858 = 0U;
	uint64_t t185 = 2001965550LLU;

    t185 = ((x857-(x858^x859))-x860);

    if (t185 != 18446744073709253566LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x861 = 72U;
	static volatile int32_t x862 = INT32_MIN;
	volatile int32_t x863 = INT32_MAX;
	uint64_t x864 = UINT64_MAX;

    t186 = ((x861-(x862^x863))-x864);

    if (t186 != 74LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x866 = UINT64_MAX;
	int64_t x867 = 131023158LL;
	static int16_t x868 = -1;

    t187 = ((x865-(x866^x867))-x868);

    if (t187 != 131023163LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x869 = -221521634LL;
	static int8_t x870 = 1;
	static int64_t x871 = INT64_MIN;
	static int16_t x872 = INT16_MAX;
	static volatile int64_t t188 = 163363754946037LL;

    t188 = ((x869-(x870^x871))-x872);

    if (t188 != 9223372036633221406LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x877 = INT64_MIN;
	int16_t x878 = 8505;
	int32_t x879 = INT32_MIN;
	static volatile uint8_t x880 = UINT8_MAX;
	int64_t t189 = 1152285LL;

    t189 = ((x877-(x878^x879))-x880);

    if (t189 != -9223372034707300920LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x882 = INT16_MAX;
	volatile uint64_t x884 = 299528LLU;

    t190 = ((x881-(x882^x883))-x884);

    if (t190 != 65021405017288LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x889 = -1;
	int16_t x890 = -4;
	int32_t t191 = 56899925;

    t191 = ((x889-(x890^x891))-x892);

    if (t191 != 2567) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x893 = UINT16_MAX;
	static volatile uint64_t x894 = UINT64_MAX;
	int64_t x895 = 25LL;
	static uint32_t x896 = 2U;
	volatile uint64_t t192 = 902540LLU;

    t192 = ((x893-(x894^x895))-x896);

    if (t192 != 65559LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x901 = INT8_MAX;
	uint32_t x902 = 176U;
	volatile int8_t x903 = INT8_MIN;
	uint32_t x904 = UINT32_MAX;
	uint32_t t193 = 7745687U;

    t193 = ((x901-(x902^x903))-x904);

    if (t193 != 336U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x905 = UINT32_MAX;
	uint64_t x907 = 54572168796936598LLU;
	int64_t x908 = 31199196550LL;
	static uint64_t t194 = 251208187042238646LLU;

    t194 = ((x905-(x906^x907))-x908);

    if (t194 != 18392171878008385763LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x914 = 222;
	uint64_t x915 = 47904741LLU;
	int64_t x916 = INT64_MIN;

    t195 = ((x913-(x914^x915))-x916);

    if (t195 != 9223372036806925845LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x917 = 932;
	static volatile uint16_t x918 = 155U;
	int16_t x920 = INT16_MIN;

    t196 = ((x917-(x918^x919))-x920);

    if (t196 != 33856) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x921 = INT64_MIN;
	int64_t x922 = -111LL;
	uint64_t x923 = UINT64_MAX;
	volatile int64_t x924 = INT64_MAX;
	uint64_t t197 = 2135102LLU;

    t197 = ((x921-(x922^x923))-x924);

    if (t197 != 18446744073709551507LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x925 = 376870;
	static int32_t x926 = INT32_MAX;
	int64_t x927 = INT64_MIN;
	volatile uint64_t x928 = 62LLU;
	uint64_t t198 = 71009961160LLU;

    t198 = ((x925-(x926^x927))-x928);

    if (t198 != 9223372034707668969LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int8_t x930 = INT8_MAX;
	static uint8_t x931 = 1U;
	uint32_t x932 = 20969606U;
	uint32_t t199 = 398449749U;

    t199 = ((x929-(x930^x931))-x932);

    if (t199 != 4162560663U) { NG(); } else { ; }
	
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

