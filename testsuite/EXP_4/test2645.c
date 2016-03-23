
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

int16_t x5 = INT16_MIN;
uint8_t x10 = UINT8_MAX;
volatile int8_t x11 = INT8_MIN;
uint32_t x12 = 5619766U;
uint16_t x15 = 374U;
volatile int16_t x16 = 4716;
volatile int32_t t4 = 1;
uint64_t x23 = 246100556078LLU;
int16_t x27 = 4;
uint8_t x28 = 13U;
volatile int8_t x29 = -1;
int32_t x30 = INT32_MIN;
volatile uint16_t x36 = 467U;
uint64_t t8 = 920LLU;
uint8_t x37 = 3U;
volatile int32_t x40 = 28001;
uint32_t x41 = 2214451U;
uint32_t t10 = 303U;
static volatile int8_t x46 = -1;
uint16_t x48 = UINT16_MAX;
int32_t x55 = INT32_MIN;
volatile int16_t x57 = INT16_MIN;
int16_t x61 = 0;
int8_t x62 = 5;
uint64_t x63 = 15978LLU;
volatile int32_t t17 = 876127;
int16_t x73 = 499;
int32_t x74 = INT32_MAX;
uint64_t x82 = UINT64_MAX;
static int32_t x83 = -1;
volatile int32_t x96 = 437318;
int32_t x97 = -1052241929;
int8_t x99 = -1;
uint16_t x103 = 11732U;
uint16_t x104 = 88U;
int16_t x116 = -15;
static volatile int32_t t29 = -4117;
uint32_t x123 = 1964108743U;
volatile int8_t x124 = INT8_MIN;
static int32_t x127 = -1;
int32_t t31 = -25;
static volatile uint32_t x132 = UINT32_MAX;
int32_t t33 = 51259;
uint64_t x144 = 63LLU;
volatile int64_t t36 = -557LL;
int64_t x150 = -509364422LL;
uint16_t x152 = 8U;
int32_t x153 = -1;
int32_t x158 = -1;
volatile int64_t t39 = INT64_MAX;
int8_t x170 = 14;
uint8_t x171 = 86U;
uint16_t x179 = 1024U;
volatile uint16_t x183 = 37U;
int64_t x189 = INT64_MIN;
volatile int32_t t48 = -1;
int64_t x197 = INT64_MIN;
int64_t x199 = INT64_MIN;
volatile int64_t x200 = INT64_MIN;
int64_t x216 = -85350LL;
volatile int32_t t57 = -1199;
volatile int16_t x244 = -1;
volatile uint64_t x248 = 274085LLU;
static int8_t x252 = INT8_MIN;
int32_t t65 = -10;
uint8_t x269 = 22U;
int16_t x287 = -35;
volatile uint32_t x291 = UINT32_MAX;
int16_t x292 = INT16_MAX;
int32_t x295 = 3;
int8_t x296 = 1;
static int16_t x298 = INT16_MIN;
int64_t x321 = INT64_MIN;
volatile uint16_t x327 = 9287U;
uint64_t t81 = 48408388603LLU;
volatile int64_t x330 = INT64_MAX;
int8_t x334 = INT8_MAX;
int64_t x342 = INT64_MIN;
static volatile int32_t t85 = INT32_MAX;
int64_t x352 = INT64_MAX;
static int8_t x354 = -1;
int16_t x355 = INT16_MIN;
volatile int32_t t89 = -1895;
static int16_t x363 = -1;
static volatile int64_t x364 = INT64_MAX;
volatile uint32_t x368 = 41153645U;
uint16_t x370 = UINT16_MAX;
int64_t t92 = -5026LL;
static int32_t x374 = INT32_MIN;
volatile int32_t t94 = -3748;
uint32_t x382 = 82U;
static volatile int64_t t99 = 4517885752090LL;
uint16_t x404 = 2595U;
int64_t x413 = 398211740701LL;
uint32_t x416 = 7709459U;
static int8_t x421 = INT8_MAX;
static int64_t x422 = INT64_MIN;
uint8_t x424 = UINT8_MAX;
volatile uint16_t x434 = 20U;
int32_t x443 = INT32_MIN;
uint64_t x444 = 4088LLU;
uint64_t x452 = UINT64_MAX;
uint64_t x455 = 799095516872622LLU;
int8_t x456 = INT8_MIN;
int16_t x460 = 0;
int16_t x461 = INT16_MIN;
uint32_t x462 = 2010940U;
volatile int32_t x464 = INT32_MAX;
int64_t x466 = INT64_MIN;
uint16_t x468 = 491U;
uint8_t x472 = UINT8_MAX;
static int64_t t117 = -17501LL;
static volatile uint32_t t118 = UINT32_MAX;
int16_t x478 = 422;
int32_t x479 = INT32_MIN;
int32_t t119 = 211;
uint8_t x484 = 3U;
uint32_t x485 = 1370U;
uint8_t x486 = 7U;
int8_t x488 = -1;
volatile uint32_t t121 = 124317U;
uint32_t x496 = 722U;
uint8_t x498 = 13U;
int64_t x504 = -1LL;
int16_t x511 = INT16_MIN;
int8_t x517 = 14;
uint32_t x519 = UINT32_MAX;
static int16_t x521 = -1;
int8_t x524 = -1;
int32_t t131 = 814;
int8_t x536 = 0;
volatile uint64_t t133 = UINT64_MAX;
static int8_t x538 = INT8_MIN;
int16_t x559 = 6;
volatile int32_t t141 = -2;
static int64_t x572 = INT64_MAX;
int16_t x574 = -1;
volatile int32_t t143 = -22318;
uint64_t x580 = 20258056971054593LLU;
int16_t x582 = INT16_MIN;
uint16_t x584 = 241U;
static volatile int64_t t145 = -21820132033049LL;
static int32_t x589 = -1;
int64_t x590 = -1LL;
int16_t x591 = INT16_MAX;
int64_t x598 = INT64_MIN;
int32_t t149 = 19406;
static volatile int16_t x606 = INT16_MAX;
int8_t x608 = -62;
volatile int8_t x612 = INT8_MIN;
volatile uint8_t x614 = 0U;
int32_t x619 = INT32_MAX;
uint8_t x621 = 11U;
int16_t x628 = INT16_MIN;
static int64_t x636 = 6806837LL;
volatile int32_t t158 = -54689639;
static int32_t t161 = 3408;
volatile int32_t t165 = 145923436;
volatile int16_t x671 = -1;
int16_t x673 = INT16_MIN;
int32_t x675 = INT32_MIN;
int32_t x676 = INT32_MIN;
int32_t t168 = 999030;
uint64_t x681 = 150LLU;
int8_t x693 = 3;
uint64_t x702 = 1586054565LLU;
static volatile int32_t t175 = -1;
int16_t x706 = INT16_MIN;
static int32_t x707 = INT32_MIN;
uint32_t x710 = UINT32_MAX;
int32_t t178 = -13038;
uint8_t x718 = UINT8_MAX;
volatile uint64_t t179 = UINT64_MAX;
uint8_t x724 = 0U;
int64_t x726 = INT64_MIN;
static int64_t x727 = INT64_MAX;
volatile int32_t t181 = 29054;
uint32_t x740 = 122283739U;
int16_t x741 = INT16_MIN;
static volatile int32_t t187 = -66655;
volatile int32_t t188 = -53586373;
static uint64_t x757 = 1909902962310LLU;
volatile uint32_t x759 = UINT32_MAX;
int64_t x769 = INT64_MIN;
volatile int32_t x772 = INT32_MIN;
volatile int8_t x774 = 16;
uint32_t x780 = 1900305U;
volatile int32_t t194 = -26151605;
int8_t x785 = INT8_MIN;
volatile int64_t x786 = INT64_MAX;
int64_t x787 = -1LL;
uint64_t x789 = 6448592852015LLU;
volatile uint64_t t197 = 408416203845LLU;
int64_t x795 = INT64_MIN;
volatile int32_t t198 = -4;
volatile uint8_t x799 = UINT8_MAX;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	int8_t x2 = INT8_MAX;
	static int32_t x3 = INT32_MAX;
	static int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 467;

    t0 = (x1|(x2!=(x3^x4)));

    if (t0 != 255) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = INT8_MAX;
	int8_t x7 = -1;
	uint16_t x8 = 6854U;
	int32_t t1 = 0;

    t1 = (x5|(x6!=(x7^x8)));

    if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 20LLU;
	uint64_t t2 = 181615924LLU;

    t2 = (x9|(x10!=(x11^x12)));

    if (t2 != 21LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x13 = 18482337881216LL;
	static int16_t x14 = -1;
	static int64_t t3 = 61601178LL;

    t3 = (x13|(x14!=(x15^x16)));

    if (t3 != 18482337881217LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int16_t x17 = -660;
	int16_t x18 = 2272;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 3U;

    t4 = (x17|(x18!=(x19^x20)));

    if (t4 != -659) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x21 = UINT16_MAX;
	int64_t x22 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -226804149;

    t5 = (x21|(x22!=(x23^x24)));

    if (t5 != 65535) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x25 = INT16_MIN;
	uint8_t x26 = 26U;
	int32_t t6 = -1583644;

    t6 = (x25|(x26!=(x27^x28)));

    if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x31 = INT8_MIN;
	volatile int32_t x32 = INT32_MIN;
	static volatile int32_t t7 = 68;

    t7 = (x29|(x30!=(x31^x32)));

    if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 122888199651LLU;
	int32_t x34 = INT32_MIN;
	int64_t x35 = -1LL;

    t8 = (x33|(x34!=(x35^x36)));

    if (t8 != 122888199651LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	int32_t t9 = 1;

    t9 = (x37|(x38!=(x39^x40)));

    if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x42 = 19;
	volatile int32_t x43 = INT32_MAX;
	static int8_t x44 = -1;

    t10 = (x41|(x42!=(x43^x44)));

    if (t10 != 2214451U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x45 = -1;
	volatile uint64_t x47 = 2065774451531472LLU;
	int32_t t11 = -324;

    t11 = (x45|(x46!=(x47^x48)));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 39617234U;
	static uint32_t x50 = 614576754U;
	static uint64_t x51 = 11295612571333LLU;
	uint64_t x52 = 18LLU;
	volatile uint32_t t12 = 27894U;

    t12 = (x49|(x50!=(x51^x52)));

    if (t12 != 39617235U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int8_t x54 = INT8_MIN;
	volatile uint16_t x56 = 13954U;
	static volatile int32_t t13 = -608;

    t13 = (x53|(x54!=(x55^x56)));

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = INT32_MIN;
	volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 163989;

    t14 = (x57|(x58!=(x59^x60)));

    if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x64 = -35;
	int32_t t15 = 227722653;

    t15 = (x61|(x62!=(x63^x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 101;
	int32_t x66 = -1234899;
	int8_t x67 = 19;
	static int64_t x68 = 1005104485LL;
	static int32_t t16 = 185228;

    t16 = (x65|(x66!=(x67^x68)));

    if (t16 != 101) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x69 = -3;
	uint32_t x70 = UINT32_MAX;
	static int64_t x71 = 12431LL;
	int32_t x72 = INT32_MAX;

    t17 = (x69|(x70!=(x71^x72)));

    if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x75 = 8U;
	volatile int16_t x76 = -1480;
	int32_t t18 = -80;

    t18 = (x73|(x74!=(x75^x76)));

    if (t18 != 499) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x77 = INT32_MIN;
	int8_t x78 = -36;
	int8_t x79 = INT8_MAX;
	static int64_t x80 = 16719LL;
	volatile int32_t t19 = 286872;

    t19 = (x77|(x78!=(x79^x80)));

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = 9;
	int8_t x84 = -1;
	int32_t t20 = 517385;

    t20 = (x81|(x82!=(x83^x84)));

    if (t20 != 9) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x85 = 23137946682915LL;
	int64_t x86 = -1LL;
	int32_t x87 = -155340;
	static uint8_t x88 = 30U;
	static volatile int64_t t21 = 371163LL;

    t21 = (x85|(x86!=(x87^x88)));

    if (t21 != 23137946682915LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x89 = INT8_MIN;
	volatile uint16_t x90 = 4985U;
	static int32_t x91 = -1;
	int8_t x92 = -1;
	volatile int32_t t22 = 376;

    t22 = (x89|(x90!=(x91^x92)));

    if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x93 = -1LL;
	int32_t x94 = -1555;
	volatile int64_t x95 = INT64_MIN;
	volatile int64_t t23 = 1024LL;

    t23 = (x93|(x94!=(x95^x96)));

    if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x98 = 0;
	int16_t x100 = INT16_MIN;
	static int32_t t24 = -10535;

    t24 = (x97|(x98!=(x99^x100)));

    if (t24 != -1052241929) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x101 = INT32_MIN;
	uint8_t x102 = UINT8_MAX;
	int32_t t25 = 4118714;

    t25 = (x101|(x102!=(x103^x104)));

    if (t25 != -2147483647) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -29;
	int16_t x106 = 1;
	uint16_t x107 = 207U;
	uint32_t x108 = 154U;
	volatile int32_t t26 = 5630;

    t26 = (x105|(x106!=(x107^x108)));

    if (t26 != -29) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x109 = UINT64_MAX;
	uint16_t x110 = 3U;
	int16_t x111 = -4045;
	int64_t x112 = INT64_MAX;
	volatile uint64_t t27 = UINT64_MAX;

    t27 = (x109|(x110!=(x111^x112)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x113 = 6067U;
	uint8_t x114 = 0U;
	int64_t x115 = -118367LL;
	volatile uint32_t t28 = 176223U;

    t28 = (x113|(x114!=(x115^x116)));

    if (t28 != 6067U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 3U;
	int8_t x118 = 57;
	volatile int16_t x119 = 2;
	int16_t x120 = 1;

    t29 = (x117|(x118!=(x119^x120)));

    if (t29 != 3) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	static uint16_t x122 = UINT16_MAX;
	volatile int32_t t30 = -430121044;

    t30 = (x121|(x122!=(x123^x124)));

    if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = INT16_MAX;
	uint16_t x126 = 1016U;
	int16_t x128 = INT16_MIN;

    t31 = (x125|(x126!=(x127^x128)));

    if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x129 = -1;
	volatile int32_t x130 = -1;
	int32_t x131 = INT32_MIN;
	volatile int32_t t32 = -45028150;

    t32 = (x129|(x130!=(x131^x132)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 19969802;
	volatile uint32_t x134 = 215U;
	static volatile uint8_t x135 = 45U;
	int16_t x136 = INT16_MAX;

    t33 = (x133|(x134!=(x135^x136)));

    if (t33 != 19969803) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x137 = 3314847049007LLU;
	int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	volatile uint16_t x140 = UINT16_MAX;
	volatile uint64_t t34 = 126500298417LLU;

    t34 = (x137|(x138!=(x139^x140)));

    if (t34 != 3314847049007LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	int64_t x143 = INT64_MIN;
	int32_t t35 = -10;

    t35 = (x141|(x142!=(x143^x144)));

    if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = 723749767920925677LL;
	volatile int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MIN;
	static volatile uint64_t x148 = 31LLU;

    t36 = (x145|(x146!=(x147^x148)));

    if (t36 != 723749767920925677LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x149 = 2880463U;
	int64_t x151 = -442571LL;
	static uint32_t t37 = 1U;

    t37 = (x149|(x150!=(x151^x152)));

    if (t37 != 2880463U) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x154 = -1;
	uint16_t x155 = 19U;
	int16_t x156 = INT16_MIN;
	static int32_t t38 = 195191412;

    t38 = (x153|(x154!=(x155^x156)));

    if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x157 = INT64_MAX;
	static uint8_t x159 = UINT8_MAX;
	uint8_t x160 = 1U;

    t39 = (x157|(x158!=(x159^x160)));

    if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x161 = 12386U;
	volatile int64_t x162 = -9499254308952650LL;
	int32_t x163 = -546165;
	int16_t x164 = -1;
	int32_t t40 = 3171619;

    t40 = (x161|(x162!=(x163^x164)));

    if (t40 != 12387) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x165 = 2U;
	int32_t x166 = INT32_MAX;
	static int16_t x167 = 45;
	uint64_t x168 = 11036499LLU;
	int32_t t41 = 7031;

    t41 = (x165|(x166!=(x167^x168)));

    if (t41 != 3) { NG(); } else { ; }
	
}

void f42(void) {
    	static int32_t x169 = -785013;
	uint64_t x172 = 6LLU;
	int32_t t42 = 1216415;

    t42 = (x169|(x170!=(x171^x172)));

    if (t42 != -785013) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x173 = 305;
	int16_t x174 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	static int8_t x176 = -1;
	volatile int32_t t43 = -2620;

    t43 = (x173|(x174!=(x175^x176)));

    if (t43 != 305) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	uint64_t x178 = 3128585LLU;
	static uint32_t x180 = UINT32_MAX;
	static int32_t t44 = -106246;

    t44 = (x177|(x178!=(x179^x180)));

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 7;
	int64_t x182 = INT64_MAX;
	int16_t x184 = 9;
	static int32_t t45 = -781;

    t45 = (x181|(x182!=(x183^x184)));

    if (t45 != 7) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x185 = 7U;
	volatile int32_t x186 = INT32_MAX;
	int32_t x187 = INT32_MIN;
	int32_t x188 = -1;
	int32_t t46 = -3511870;

    t46 = (x185|(x186!=(x187^x188)));

    if (t46 != 7) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x190 = -1;
	int8_t x191 = -1;
	int32_t x192 = 16885812;
	static int64_t t47 = 204780878674LL;

    t47 = (x189|(x190!=(x191^x192)));

    if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile uint16_t x193 = UINT16_MAX;
	int16_t x194 = INT16_MIN;
	static volatile uint8_t x195 = 3U;
	static volatile int8_t x196 = INT8_MAX;

    t48 = (x193|(x194!=(x195^x196)));

    if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x198 = INT64_MAX;
	static volatile int64_t t49 = -999086274779LL;

    t49 = (x197|(x198!=(x199^x200)));

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x201 = 589;
	int16_t x202 = INT16_MIN;
	static int8_t x203 = -1;
	uint32_t x204 = 116393083U;
	int32_t t50 = 5;

    t50 = (x201|(x202!=(x203^x204)));

    if (t50 != 589) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x205 = INT64_MIN;
	static uint8_t x206 = 0U;
	volatile int8_t x207 = INT8_MAX;
	uint64_t x208 = 12LLU;
	int64_t t51 = 692165LL;

    t51 = (x205|(x206!=(x207^x208)));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x209 = INT64_MAX;
	static volatile int16_t x210 = 7;
	static int64_t x211 = INT64_MAX;
	int32_t x212 = INT32_MIN;
	int64_t t52 = INT64_MAX;

    t52 = (x209|(x210!=(x211^x212)));

    if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x213 = INT8_MIN;
	int8_t x214 = 23;
	static int8_t x215 = INT8_MAX;
	int32_t t53 = -303;

    t53 = (x213|(x214!=(x215^x216)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x217 = INT8_MAX;
	static uint8_t x218 = 119U;
	static uint8_t x219 = 6U;
	volatile uint16_t x220 = 328U;
	volatile int32_t t54 = 72142;

    t54 = (x217|(x218!=(x219^x220)));

    if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x221 = 6600857U;
	static int32_t x222 = -1;
	volatile int64_t x223 = -1LL;
	uint64_t x224 = 3555620637LLU;
	static volatile uint32_t t55 = 3044443U;

    t55 = (x221|(x222!=(x223^x224)));

    if (t55 != 6600857U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x225 = INT64_MIN;
	int8_t x226 = INT8_MIN;
	int64_t x227 = -1LL;
	int64_t x228 = INT64_MIN;
	int64_t t56 = -1303285582530783LL;

    t56 = (x225|(x226!=(x227^x228)));

    if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x229 = INT16_MIN;
	static uint32_t x230 = UINT32_MAX;
	static volatile int64_t x231 = -1LL;
	int64_t x232 = 1472508LL;

    t57 = (x229|(x230!=(x231^x232)));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x233 = INT64_MAX;
	volatile int8_t x234 = INT8_MAX;
	uint8_t x235 = 13U;
	volatile int16_t x236 = INT16_MAX;
	static int64_t t58 = INT64_MAX;

    t58 = (x233|(x234!=(x235^x236)));

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x237 = 1067570642U;
	volatile int16_t x238 = -1;
	static volatile int64_t x239 = 12022599401547LL;
	static uint32_t x240 = 486481U;
	static volatile uint32_t t59 = 188U;

    t59 = (x237|(x238!=(x239^x240)));

    if (t59 != 1067570643U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x241 = -1477999028202LL;
	uint16_t x242 = 29734U;
	int16_t x243 = -1;
	int64_t t60 = 4448930038564565564LL;

    t60 = (x241|(x242!=(x243^x244)));

    if (t60 != -1477999028201LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x245 = UINT16_MAX;
	uint32_t x246 = UINT32_MAX;
	uint16_t x247 = UINT16_MAX;
	static volatile int32_t t61 = -9794;

    t61 = (x245|(x246!=(x247^x248)));

    if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = 10;
	volatile int32_t x250 = INT32_MIN;
	int32_t x251 = INT32_MAX;
	int32_t t62 = -6076394;

    t62 = (x249|(x250!=(x251^x252)));

    if (t62 != 11) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x253 = UINT32_MAX;
	static int16_t x254 = -853;
	int8_t x255 = 50;
	int16_t x256 = INT16_MAX;
	volatile uint32_t t63 = UINT32_MAX;

    t63 = (x253|(x254!=(x255^x256)));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x257 = 273993U;
	uint32_t x258 = 479U;
	static int16_t x259 = INT16_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile uint32_t t64 = 388941U;

    t64 = (x257|(x258!=(x259^x260)));

    if (t64 != 273993U) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint8_t x261 = 6U;
	int64_t x262 = -33485849470LL;
	uint32_t x263 = 5U;
	int16_t x264 = 0;

    t65 = (x261|(x262!=(x263^x264)));

    if (t65 != 7) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x265 = UINT16_MAX;
	uint8_t x266 = 10U;
	int64_t x267 = INT64_MAX;
	int64_t x268 = INT64_MIN;
	static volatile int32_t t66 = 1;

    t66 = (x265|(x266!=(x267^x268)));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x270 = 107181651U;
	volatile int64_t x271 = INT64_MIN;
	int32_t x272 = INT32_MIN;
	volatile int32_t t67 = -509;

    t67 = (x269|(x270!=(x271^x272)));

    if (t67 != 23) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = INT16_MAX;
	int32_t x274 = INT32_MIN;
	static int16_t x275 = 218;
	volatile uint16_t x276 = 7U;
	static int32_t t68 = -144498;

    t68 = (x273|(x274!=(x275^x276)));

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x277 = INT64_MAX;
	static int64_t x278 = INT64_MAX;
	int8_t x279 = INT8_MIN;
	volatile uint16_t x280 = UINT16_MAX;
	int64_t t69 = INT64_MAX;

    t69 = (x277|(x278!=(x279^x280)));

    if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x282 = UINT8_MAX;
	uint32_t x283 = 781512U;
	int8_t x284 = 1;
	volatile int32_t t70 = 161076963;

    t70 = (x281|(x282!=(x283^x284)));

    if (t70 != -2147483647) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = INT16_MIN;
	volatile int64_t x286 = -1321065279434729LL;
	int64_t x288 = 646LL;
	int32_t t71 = 166626365;

    t71 = (x285|(x286!=(x287^x288)));

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x289 = -1LL;
	volatile uint16_t x290 = 5U;
	volatile int64_t t72 = 440448143333639LL;

    t72 = (x289|(x290!=(x291^x292)));

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x293 = INT8_MIN;
	volatile int16_t x294 = 60;
	volatile int32_t t73 = -305428;

    t73 = (x293|(x294!=(x295^x296)));

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x297 = 346U;
	int64_t x299 = 4LL;
	volatile int16_t x300 = INT16_MAX;
	int32_t t74 = 1;

    t74 = (x297|(x298!=(x299^x300)));

    if (t74 != 347) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x301 = -1LL;
	uint32_t x302 = UINT32_MAX;
	static int64_t x303 = -1269545803LL;
	volatile int8_t x304 = INT8_MIN;
	volatile int64_t t75 = 272663878957133440LL;

    t75 = (x301|(x302!=(x303^x304)));

    if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MAX;
	int32_t x306 = INT32_MAX;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = INT32_MAX;

    t76 = (x305|(x306!=(x307^x308)));

    if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = 1;
	static int16_t x310 = 29;
	int8_t x311 = 0;
	int64_t x312 = INT64_MIN;
	static volatile int32_t t77 = -4;

    t77 = (x309|(x310!=(x311^x312)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x313 = 630104U;
	static uint16_t x314 = 10U;
	uint16_t x315 = 306U;
	uint16_t x316 = 178U;
	volatile uint32_t t78 = 116229553U;

    t78 = (x313|(x314!=(x315^x316)));

    if (t78 != 630105U) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint16_t x317 = 5U;
	uint8_t x318 = 2U;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t79 = 142770;

    t79 = (x317|(x318!=(x319^x320)));

    if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x322 = -144030;
	volatile int8_t x323 = INT8_MAX;
	uint32_t x324 = 3117372U;
	int64_t t80 = 2943056833469881303LL;

    t80 = (x321|(x322!=(x323^x324)));

    if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x325 = 3441LLU;
	int32_t x326 = INT32_MIN;
	volatile int64_t x328 = -1LL;

    t81 = (x325|(x326!=(x327^x328)));

    if (t81 != 3441LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x331 = INT16_MIN;
	int32_t x332 = -1;
	volatile int64_t t82 = 31246493297LL;

    t82 = (x329|(x330!=(x331^x332)));

    if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x333 = -1;
	int32_t x335 = INT32_MIN;
	uint64_t x336 = 223563LLU;
	volatile int32_t t83 = -1;

    t83 = (x333|(x334!=(x335^x336)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x337 = 221U;
	static uint64_t x338 = UINT64_MAX;
	volatile int64_t x339 = INT64_MIN;
	static int16_t x340 = -1592;
	volatile uint32_t t84 = 108606094U;

    t84 = (x337|(x338!=(x339^x340)));

    if (t84 != 221U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x341 = INT32_MAX;
	int32_t x343 = -1029058;
	int32_t x344 = INT32_MAX;

    t85 = (x341|(x342!=(x343^x344)));

    if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint64_t x345 = 29769459LLU;
	static int32_t x346 = INT32_MIN;
	volatile uint32_t x347 = 2U;
	int32_t x348 = INT32_MAX;
	static volatile uint64_t t86 = 4LLU;

    t86 = (x345|(x346!=(x347^x348)));

    if (t86 != 29769459LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x349 = -1;
	int16_t x350 = -1;
	volatile uint32_t x351 = 14157831U;
	int32_t t87 = 5;

    t87 = (x349|(x350!=(x351^x352)));

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int64_t x353 = -1LL;
	volatile int32_t x356 = INT32_MIN;
	int64_t t88 = -113057936821LL;

    t88 = (x353|(x354!=(x355^x356)));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	int64_t x358 = -1LL;
	int32_t x359 = INT32_MAX;
	uint64_t x360 = 28238720LLU;

    t89 = (x357|(x358!=(x359^x360)));

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x361 = 1;
	int32_t x362 = -1;
	int32_t t90 = -138;

    t90 = (x361|(x362!=(x363^x364)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x365 = 132U;
	int32_t x366 = -13346856;
	int64_t x367 = -1LL;
	int32_t t91 = -652978;

    t91 = (x365|(x366!=(x367^x368)));

    if (t91 != 133) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x369 = INT64_MIN;
	int8_t x371 = INT8_MAX;
	static int8_t x372 = INT8_MIN;

    t92 = (x369|(x370!=(x371^x372)));

    if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x373 = INT8_MAX;
	volatile int16_t x375 = -2;
	int16_t x376 = -1;
	static int32_t t93 = 3233;

    t93 = (x373|(x374!=(x375^x376)));

    if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x377 = -1;
	static int16_t x378 = INT16_MAX;
	volatile int32_t x379 = INT32_MIN;
	int32_t x380 = -1;

    t94 = (x377|(x378!=(x379^x380)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x381 = 14519U;
	int64_t x383 = -1LL;
	uint64_t x384 = 6659LLU;
	volatile uint32_t t95 = 874501U;

    t95 = (x381|(x382!=(x383^x384)));

    if (t95 != 14519U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 1U;
	static int32_t x386 = INT32_MAX;
	static int32_t x387 = -7668565;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -160701;

    t96 = (x385|(x386!=(x387^x388)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x389 = INT16_MAX;
	uint64_t x390 = 3246391925153367398LLU;
	static int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t97 = -853712222;

    t97 = (x389|(x390!=(x391^x392)));

    if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x393 = UINT32_MAX;
	static volatile uint32_t x394 = UINT32_MAX;
	static volatile uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MIN;
	uint32_t t98 = UINT32_MAX;

    t98 = (x393|(x394!=(x395^x396)));

    if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x397 = -839566069LL;
	volatile uint8_t x398 = 0U;
	volatile int8_t x399 = -1;
	int8_t x400 = INT8_MIN;

    t99 = (x397|(x398!=(x399^x400)));

    if (t99 != -839566069LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x401 = 7813209067481738LL;
	volatile int16_t x402 = INT16_MIN;
	uint8_t x403 = UINT8_MAX;
	int64_t t100 = -197284LL;

    t100 = (x401|(x402!=(x403^x404)));

    if (t100 != 7813209067481739LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x405 = INT16_MIN;
	static uint64_t x406 = UINT64_MAX;
	int16_t x407 = 1;
	int16_t x408 = INT16_MIN;
	volatile int32_t t101 = -8786;

    t101 = (x405|(x406!=(x407^x408)));

    if (t101 != -32767) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x409 = 2512;
	int64_t x410 = 23346524993LL;
	volatile int16_t x411 = -1;
	uint64_t x412 = 5874267522LLU;
	volatile int32_t t102 = -14456;

    t102 = (x409|(x410!=(x411^x412)));

    if (t102 != 2513) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x414 = 3U;
	int32_t x415 = INT32_MAX;
	static volatile int64_t t103 = -59422LL;

    t103 = (x413|(x414!=(x415^x416)));

    if (t103 != 398211740701LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = -1;
	uint32_t x418 = 1U;
	int64_t x419 = -1LL;
	int8_t x420 = 0;
	int32_t t104 = 119353302;

    t104 = (x417|(x418!=(x419^x420)));

    if (t104 != -1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x423 = INT16_MIN;
	int32_t t105 = -757556328;

    t105 = (x421|(x422!=(x423^x424)));

    if (t105 != 127) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x425 = INT32_MIN;
	int64_t x426 = INT64_MAX;
	int64_t x427 = -808204844LL;
	int32_t x428 = INT32_MIN;
	int32_t t106 = 224;

    t106 = (x425|(x426!=(x427^x428)));

    if (t106 != -2147483647) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x429 = INT16_MIN;
	int32_t x430 = -1;
	int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MIN;
	volatile int32_t t107 = -11892421;

    t107 = (x429|(x430!=(x431^x432)));

    if (t107 != -32767) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int32_t x433 = INT32_MIN;
	uint8_t x435 = 0U;
	uint16_t x436 = 7976U;
	volatile int32_t t108 = 7047181;

    t108 = (x433|(x434!=(x435^x436)));

    if (t108 != -2147483647) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x437 = 8098163U;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = 0U;
	static int8_t x440 = INT8_MIN;
	uint32_t t109 = 2U;

    t109 = (x437|(x438!=(x439^x440)));

    if (t109 != 8098163U) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x441 = INT64_MIN;
	volatile int64_t x442 = -1LL;
	volatile int64_t t110 = -3131336786073376LL;

    t110 = (x441|(x442!=(x443^x444)));

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x445 = INT64_MAX;
	static uint16_t x446 = UINT16_MAX;
	static int16_t x447 = 184;
	int16_t x448 = -1;
	volatile int64_t t111 = INT64_MAX;

    t111 = (x445|(x446!=(x447^x448)));

    if (t111 != INT64_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x449 = 259U;
	int16_t x450 = INT16_MIN;
	uint16_t x451 = 236U;
	volatile int32_t t112 = 208699646;

    t112 = (x449|(x450!=(x451^x452)));

    if (t112 != 259) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x453 = INT16_MIN;
	static int16_t x454 = INT16_MAX;
	static volatile int32_t t113 = 2;

    t113 = (x453|(x454!=(x455^x456)));

    if (t113 != -32767) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x457 = 0U;
	static int16_t x458 = INT16_MIN;
	static uint16_t x459 = UINT16_MAX;
	static uint32_t t114 = 265U;

    t114 = (x457|(x458!=(x459^x460)));

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x463 = INT64_MAX;
	volatile int32_t t115 = -84536;

    t115 = (x461|(x462!=(x463^x464)));

    if (t115 != -32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x465 = INT16_MAX;
	int32_t x467 = INT32_MIN;
	int32_t t116 = -16559552;

    t116 = (x465|(x466!=(x467^x468)));

    if (t116 != 32767) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x469 = 184LL;
	uint8_t x470 = UINT8_MAX;
	uint16_t x471 = 2U;

    t117 = (x469|(x470!=(x471^x472)));

    if (t117 != 185LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x473 = UINT32_MAX;
	uint64_t x474 = 961LLU;
	uint16_t x475 = 10U;
	uint32_t x476 = 133513394U;

    t118 = (x473|(x474!=(x475^x476)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x477 = -357174;
	int16_t x480 = 4055;

    t119 = (x477|(x478!=(x479^x480)));

    if (t119 != -357173) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	volatile int32_t x482 = 599376161;
	int64_t x483 = 15385918206173764LL;
	volatile int64_t t120 = -1060425494601LL;

    t120 = (x481|(x482!=(x483^x484)));

    if (t120 != -1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x487 = -1;

    t121 = (x485|(x486!=(x487^x488)));

    if (t121 != 1371U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint64_t x489 = 799LLU;
	volatile uint8_t x490 = 1U;
	int64_t x491 = -1LL;
	int8_t x492 = INT8_MIN;
	volatile uint64_t t122 = 31426877493277632LLU;

    t122 = (x489|(x490!=(x491^x492)));

    if (t122 != 799LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint8_t x493 = 110U;
	int64_t x494 = INT64_MIN;
	int32_t x495 = -1;
	int32_t t123 = 401340;

    t123 = (x493|(x494!=(x495^x496)));

    if (t123 != 111) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint16_t x497 = UINT16_MAX;
	int32_t x499 = -15602392;
	int8_t x500 = INT8_MIN;
	int32_t t124 = 20972710;

    t124 = (x497|(x498!=(x499^x500)));

    if (t124 != 65535) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x501 = INT32_MIN;
	int32_t x502 = INT32_MIN;
	uint16_t x503 = 15968U;
	volatile int32_t t125 = 59138;

    t125 = (x501|(x502!=(x503^x504)));

    if (t125 != -2147483647) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int64_t x505 = -793127361740228681LL;
	volatile int8_t x506 = INT8_MAX;
	int32_t x507 = -1;
	volatile int32_t x508 = INT32_MIN;
	static volatile int64_t t126 = -11755680168671311LL;

    t126 = (x505|(x506!=(x507^x508)));

    if (t126 != -793127361740228681LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = INT64_MIN;
	uint8_t x510 = UINT8_MAX;
	int64_t x512 = INT64_MIN;
	int64_t t127 = 69986084764782LL;

    t127 = (x509|(x510!=(x511^x512)));

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x513 = -1;
	uint32_t x514 = 2753U;
	uint16_t x515 = 1U;
	uint64_t x516 = 35375LLU;
	static volatile int32_t t128 = 1;

    t128 = (x513|(x514!=(x515^x516)));

    if (t128 != -1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int64_t x518 = -645992182223791LL;
	int8_t x520 = INT8_MIN;
	int32_t t129 = -61;

    t129 = (x517|(x518!=(x519^x520)));

    if (t129 != 15) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x522 = INT64_MIN;
	static uint16_t x523 = UINT16_MAX;
	volatile int32_t t130 = 3165;

    t130 = (x521|(x522!=(x523^x524)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x525 = UINT8_MAX;
	static int16_t x526 = INT16_MIN;
	int16_t x527 = INT16_MIN;
	uint64_t x528 = UINT64_MAX;

    t131 = (x525|(x526!=(x527^x528)));

    if (t131 != 255) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x529 = INT8_MAX;
	int32_t x530 = INT32_MIN;
	int16_t x531 = 16;
	int16_t x532 = INT16_MIN;
	volatile int32_t t132 = -197;

    t132 = (x529|(x530!=(x531^x532)));

    if (t132 != 127) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x533 = UINT64_MAX;
	uint64_t x534 = UINT64_MAX;
	static int32_t x535 = INT32_MAX;

    t133 = (x533|(x534!=(x535^x536)));

    if (t133 != UINT64_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = 356240101443379LL;
	volatile uint32_t x539 = UINT32_MAX;
	volatile int32_t x540 = INT32_MIN;
	static volatile int64_t t134 = -5445279915LL;

    t134 = (x537|(x538!=(x539^x540)));

    if (t134 != 356240101443379LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x541 = INT16_MIN;
	volatile int64_t x542 = INT64_MIN;
	volatile uint16_t x543 = 3819U;
	volatile int16_t x544 = INT16_MAX;
	volatile int32_t t135 = 172851;

    t135 = (x541|(x542!=(x543^x544)));

    if (t135 != -32767) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x545 = -1;
	int64_t x546 = -1LL;
	int32_t x547 = -6;
	static int8_t x548 = INT8_MIN;
	volatile int32_t t136 = 27755;

    t136 = (x545|(x546!=(x547^x548)));

    if (t136 != -1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x549 = INT32_MIN;
	int32_t x550 = 130;
	uint32_t x551 = 15U;
	int64_t x552 = -1LL;
	volatile int32_t t137 = -26;

    t137 = (x549|(x550!=(x551^x552)));

    if (t137 != -2147483647) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int8_t x553 = INT8_MIN;
	uint16_t x554 = UINT16_MAX;
	static uint8_t x555 = 121U;
	volatile int64_t x556 = -225144LL;
	static volatile int32_t t138 = -68423496;

    t138 = (x553|(x554!=(x555^x556)));

    if (t138 != -127) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x557 = UINT16_MAX;
	uint16_t x558 = 6U;
	int16_t x560 = -1;
	int32_t t139 = -34;

    t139 = (x557|(x558!=(x559^x560)));

    if (t139 != 65535) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x561 = 205U;
	int32_t x562 = -2853;
	static int8_t x563 = -1;
	static uint64_t x564 = 1942264LLU;
	int32_t t140 = -211464961;

    t140 = (x561|(x562!=(x563^x564)));

    if (t140 != 205) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 64987354859113434LLU;
	static int8_t x567 = 56;
	int8_t x568 = -8;

    t141 = (x565|(x566!=(x567^x568)));

    if (t141 != 65535) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x569 = 15819394LLU;
	volatile uint8_t x570 = UINT8_MAX;
	int64_t x571 = INT64_MIN;
	volatile uint64_t t142 = 1562613071847153804LLU;

    t142 = (x569|(x570!=(x571^x572)));

    if (t142 != 15819395LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x573 = -1;
	static int8_t x575 = -1;
	volatile uint64_t x576 = 6LLU;

    t143 = (x573|(x574!=(x575^x576)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x577 = -1;
	int32_t x578 = -1;
	static int64_t x579 = INT64_MIN;
	volatile int32_t t144 = 46196154;

    t144 = (x577|(x578!=(x579^x580)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x581 = INT64_MIN;
	int16_t x583 = 15;

    t145 = (x581|(x582!=(x583^x584)));

    if (t145 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x585 = INT64_MIN;
	volatile uint64_t x586 = UINT64_MAX;
	volatile uint64_t x587 = 2363LLU;
	volatile int16_t x588 = INT16_MIN;
	volatile int64_t t146 = 1206345336751LL;

    t146 = (x585|(x586!=(x587^x588)));

    if (t146 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x592 = 0;
	int32_t t147 = 173194;

    t147 = (x589|(x590!=(x591^x592)));

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x593 = INT32_MIN;
	static int64_t x594 = -1LL;
	volatile uint16_t x595 = 13343U;
	int16_t x596 = -1;
	int32_t t148 = -1;

    t148 = (x593|(x594!=(x595^x596)));

    if (t148 != -2147483647) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x597 = 0U;
	static int64_t x599 = INT64_MIN;
	uint8_t x600 = 3U;

    t149 = (x597|(x598!=(x599^x600)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x601 = INT16_MAX;
	uint32_t x602 = 1U;
	int32_t x603 = -1;
	int8_t x604 = 6;
	static int32_t t150 = 68422698;

    t150 = (x601|(x602!=(x603^x604)));

    if (t150 != 32767) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x605 = 10786539U;
	static volatile int16_t x607 = 9;
	volatile uint32_t t151 = 660588U;

    t151 = (x605|(x606!=(x607^x608)));

    if (t151 != 10786539U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x609 = 68U;
	static int64_t x610 = -2LL;
	int8_t x611 = 0;
	int32_t t152 = 207909;

    t152 = (x609|(x610!=(x611^x612)));

    if (t152 != 69) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x613 = 109438897771596586LLU;
	int64_t x615 = -6004534298102105LL;
	static int64_t x616 = INT64_MAX;
	uint64_t t153 = 39087732133LLU;

    t153 = (x613|(x614!=(x615^x616)));

    if (t153 != 109438897771596587LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x617 = 103U;
	uint64_t x618 = UINT64_MAX;
	volatile int32_t x620 = -4064;
	static int32_t t154 = 10556;

    t154 = (x617|(x618!=(x619^x620)));

    if (t154 != 103) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x622 = INT32_MAX;
	volatile int16_t x623 = INT16_MAX;
	static uint32_t x624 = 3U;
	int32_t t155 = -39811011;

    t155 = (x621|(x622!=(x623^x624)));

    if (t155 != 11) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x625 = INT8_MIN;
	int16_t x626 = -86;
	volatile uint8_t x627 = 1U;
	int32_t t156 = -12;

    t156 = (x625|(x626!=(x627^x628)));

    if (t156 != -127) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x629 = -6;
	int16_t x630 = -1;
	int16_t x631 = INT16_MIN;
	int16_t x632 = INT16_MIN;
	volatile int32_t t157 = -1107;

    t157 = (x629|(x630!=(x631^x632)));

    if (t157 != -5) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint16_t x633 = UINT16_MAX;
	int64_t x634 = INT64_MIN;
	int8_t x635 = -1;

    t158 = (x633|(x634!=(x635^x636)));

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x637 = INT32_MIN;
	int8_t x638 = INT8_MIN;
	int32_t x639 = INT32_MIN;
	uint32_t x640 = 1U;
	volatile int32_t t159 = -3089;

    t159 = (x637|(x638!=(x639^x640)));

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x641 = -1;
	static uint32_t x642 = 113U;
	int16_t x643 = INT16_MIN;
	int32_t x644 = INT32_MIN;
	int32_t t160 = -1;

    t160 = (x641|(x642!=(x643^x644)));

    if (t160 != -1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x645 = UINT16_MAX;
	volatile uint32_t x646 = 3U;
	static volatile int32_t x647 = INT32_MIN;
	uint32_t x648 = UINT32_MAX;

    t161 = (x645|(x646!=(x647^x648)));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x649 = 37LL;
	int32_t x650 = -1;
	int64_t x651 = -1477558703251LL;
	static int16_t x652 = -1;
	volatile int64_t t162 = 124101130LL;

    t162 = (x649|(x650!=(x651^x652)));

    if (t162 != 37LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x653 = 139U;
	int32_t x654 = 1;
	uint32_t x655 = 1745170961U;
	uint8_t x656 = 1U;
	volatile int32_t t163 = -774109;

    t163 = (x653|(x654!=(x655^x656)));

    if (t163 != 139) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x657 = UINT16_MAX;
	int64_t x658 = -1LL;
	int32_t x659 = 1;
	static volatile int32_t x660 = -1;
	static volatile int32_t t164 = -913;

    t164 = (x657|(x658!=(x659^x660)));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x661 = INT8_MAX;
	uint16_t x662 = UINT16_MAX;
	static int8_t x663 = 32;
	int32_t x664 = INT32_MAX;

    t165 = (x661|(x662!=(x663^x664)));

    if (t165 != 127) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	static int8_t x666 = INT8_MIN;
	static uint8_t x667 = 105U;
	uint64_t x668 = 1177437859894970LLU;
	static int64_t t166 = 15701523512283LL;

    t166 = (x665|(x666!=(x667^x668)));

    if (t166 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = -20539LL;
	int8_t x670 = INT8_MIN;
	int64_t x672 = 999354211819580004LL;
	volatile int64_t t167 = 2708467349058445227LL;

    t167 = (x669|(x670!=(x671^x672)));

    if (t167 != -20539LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x674 = -1LL;

    t168 = (x673|(x674!=(x675^x676)));

    if (t168 != -32767) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x677 = INT64_MAX;
	static int8_t x678 = INT8_MAX;
	static int32_t x679 = -1;
	uint64_t x680 = 42LLU;
	volatile int64_t t169 = INT64_MAX;

    t169 = (x677|(x678!=(x679^x680)));

    if (t169 != INT64_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x682 = INT8_MIN;
	int16_t x683 = INT16_MIN;
	int16_t x684 = INT16_MIN;
	static uint64_t t170 = 109507703LLU;

    t170 = (x681|(x682!=(x683^x684)));

    if (t170 != 151LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x685 = UINT64_MAX;
	int16_t x686 = -3241;
	int64_t x687 = INT64_MAX;
	static uint64_t x688 = UINT64_MAX;
	uint64_t t171 = UINT64_MAX;

    t171 = (x685|(x686!=(x687^x688)));

    if (t171 != UINT64_MAX) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = INT64_MAX;
	int8_t x690 = INT8_MAX;
	volatile int16_t x691 = -6;
	static volatile uint16_t x692 = 1U;
	int64_t t172 = INT64_MAX;

    t172 = (x689|(x690!=(x691^x692)));

    if (t172 != INT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x694 = INT16_MIN;
	int16_t x695 = INT16_MIN;
	uint8_t x696 = 53U;
	volatile int32_t t173 = 1599981;

    t173 = (x693|(x694!=(x695^x696)));

    if (t173 != 3) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x697 = INT16_MIN;
	uint64_t x698 = 5074509881323556LLU;
	uint32_t x699 = 0U;
	int64_t x700 = -1LL;
	volatile int32_t t174 = 4704;

    t174 = (x697|(x698!=(x699^x700)));

    if (t174 != -32767) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x703 = -7858;
	static int64_t x704 = 178LL;

    t175 = (x701|(x702!=(x703^x704)));

    if (t175 != -32767) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x705 = -118;
	uint64_t x708 = 13683396666LLU;
	volatile int32_t t176 = 11061105;

    t176 = (x705|(x706!=(x707^x708)));

    if (t176 != -117) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x709 = 15387356084660619LL;
	volatile uint16_t x711 = 30U;
	uint64_t x712 = UINT64_MAX;
	static int64_t t177 = -371712305LL;

    t177 = (x709|(x710!=(x711^x712)));

    if (t177 != 15387356084660619LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x713 = 1U;
	int16_t x714 = INT16_MIN;
	int64_t x715 = 4503061LL;
	uint32_t x716 = 7U;

    t178 = (x713|(x714!=(x715^x716)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x717 = UINT64_MAX;
	volatile int16_t x719 = -1;
	volatile uint8_t x720 = 2U;

    t179 = (x717|(x718!=(x719^x720)));

    if (t179 != UINT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x721 = UINT32_MAX;
	static int64_t x722 = -1LL;
	int32_t x723 = INT32_MAX;
	static uint32_t t180 = UINT32_MAX;

    t180 = (x721|(x722!=(x723^x724)));

    if (t180 != UINT32_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x725 = 1U;
	uint64_t x728 = 2LLU;

    t181 = (x725|(x726!=(x727^x728)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x729 = 963908;
	int64_t x730 = -8735745466LL;
	uint8_t x731 = 7U;
	int16_t x732 = INT16_MAX;
	volatile int32_t t182 = -11;

    t182 = (x729|(x730!=(x731^x732)));

    if (t182 != 963909) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x733 = 0U;
	int64_t x734 = -1LL;
	static int64_t x735 = -1LL;
	uint32_t x736 = 4U;
	volatile int32_t t183 = -6147655;

    t183 = (x733|(x734!=(x735^x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x737 = 3U;
	volatile int8_t x738 = INT8_MIN;
	int16_t x739 = INT16_MAX;
	volatile int32_t t184 = 1949;

    t184 = (x737|(x738!=(x739^x740)));

    if (t184 != 3) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x742 = 126U;
	uint64_t x743 = 832699444173LLU;
	uint32_t x744 = UINT32_MAX;
	int32_t t185 = -7;

    t185 = (x741|(x742!=(x743^x744)));

    if (t185 != -32767) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x745 = 421905390LLU;
	uint64_t x746 = 27LLU;
	static uint32_t x747 = 5571926U;
	int64_t x748 = INT64_MIN;
	uint64_t t186 = 151733LLU;

    t186 = (x745|(x746!=(x747^x748)));

    if (t186 != 421905391LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int32_t x749 = -1;
	volatile uint16_t x750 = UINT16_MAX;
	uint32_t x751 = UINT32_MAX;
	uint8_t x752 = 126U;

    t187 = (x749|(x750!=(x751^x752)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x753 = INT8_MAX;
	static int64_t x754 = INT64_MIN;
	static volatile uint8_t x755 = UINT8_MAX;
	static int16_t x756 = INT16_MIN;

    t188 = (x753|(x754!=(x755^x756)));

    if (t188 != 127) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x758 = INT16_MIN;
	uint32_t x760 = 64654U;
	volatile uint64_t t189 = 22220519LLU;

    t189 = (x757|(x758!=(x759^x760)));

    if (t189 != 1909902962311LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x761 = INT8_MIN;
	int16_t x762 = -1;
	int8_t x763 = -1;
	int32_t x764 = INT32_MAX;
	int32_t t190 = -39511;

    t190 = (x761|(x762!=(x763^x764)));

    if (t190 != -127) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x765 = INT8_MAX;
	int64_t x766 = 205642411290LL;
	int8_t x767 = INT8_MAX;
	static int32_t x768 = INT32_MIN;
	volatile int32_t t191 = 12950799;

    t191 = (x765|(x766!=(x767^x768)));

    if (t191 != 127) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x770 = INT16_MIN;
	static int16_t x771 = 125;
	static int64_t t192 = 18LL;

    t192 = (x769|(x770!=(x771^x772)));

    if (t192 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int8_t x773 = INT8_MIN;
	int16_t x775 = INT16_MIN;
	uint16_t x776 = UINT16_MAX;
	int32_t t193 = 4081993;

    t193 = (x773|(x774!=(x775^x776)));

    if (t193 != -127) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x777 = INT16_MIN;
	uint8_t x778 = 54U;
	static int16_t x779 = INT16_MIN;

    t194 = (x777|(x778!=(x779^x780)));

    if (t194 != -32767) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x781 = 12448543U;
	uint16_t x782 = 5U;
	int32_t x783 = INT32_MAX;
	int64_t x784 = INT64_MIN;
	volatile uint32_t t195 = 28028U;

    t195 = (x781|(x782!=(x783^x784)));

    if (t195 != 12448543U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x788 = 26U;
	volatile int32_t t196 = -4028388;

    t196 = (x785|(x786!=(x787^x788)));

    if (t196 != -127) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x790 = 0U;
	int32_t x791 = INT32_MIN;
	int32_t x792 = INT32_MAX;

    t197 = (x789|(x790!=(x791^x792)));

    if (t197 != 6448592852015LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x793 = -1;
	int16_t x794 = INT16_MIN;
	static uint64_t x796 = 3LLU;

    t198 = (x793|(x794!=(x795^x796)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int64_t x797 = INT64_MIN;
	uint16_t x798 = 4U;
	uint64_t x800 = 53259047967368LLU;
	static volatile int64_t t199 = -10305365320106LL;

    t199 = (x797|(x798!=(x799^x800)));

    if (t199 != -9223372036854775807LL) { NG(); } else { ; }
	
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

