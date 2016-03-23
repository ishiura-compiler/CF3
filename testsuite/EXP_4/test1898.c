
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

static int16_t x1 = INT16_MIN;
int32_t x3 = INT32_MIN;
int32_t x11 = -1557;
int16_t x14 = INT16_MIN;
int64_t x15 = 16LL;
volatile uint64_t x16 = 108605LLU;
static volatile int32_t t3 = 10;
int32_t t5 = 1;
uint32_t x32 = 62644496U;
volatile int32_t t7 = 10700;
int32_t x35 = -1;
static int32_t t9 = 267227381;
int32_t x41 = 496695;
int32_t t10 = 70749;
static int8_t x57 = INT8_MIN;
uint64_t x60 = UINT64_MAX;
uint8_t x61 = 0U;
volatile int16_t x63 = -1;
static int32_t x64 = INT32_MIN;
volatile int32_t t15 = 0;
static volatile int64_t x70 = INT64_MIN;
int16_t x71 = INT16_MIN;
uint64_t x72 = 154519LLU;
int32_t x73 = 5692;
static int8_t x75 = -1;
int16_t x76 = 0;
int32_t x85 = INT32_MIN;
uint16_t x94 = 31U;
uint8_t x100 = 7U;
int32_t x108 = -390810;
uint32_t x111 = 438544495U;
static volatile int8_t x112 = -14;
uint64_t x114 = UINT64_MAX;
static int32_t t28 = -181;
static uint8_t x117 = UINT8_MAX;
volatile int32_t t29 = -127086943;
uint8_t x123 = UINT8_MAX;
int64_t x127 = -95456054781144634LL;
int8_t x129 = INT8_MIN;
static int8_t x134 = INT8_MIN;
uint64_t x135 = UINT64_MAX;
int32_t x136 = INT32_MAX;
uint32_t x137 = 4484857U;
int32_t x143 = 943103;
volatile int32_t t35 = 98953;
volatile int32_t x155 = INT32_MIN;
int16_t x160 = INT16_MIN;
static volatile int32_t x161 = INT32_MIN;
static int64_t x168 = 644285087085LL;
static int64_t x170 = INT64_MIN;
int64_t x171 = 247363394LL;
volatile int32_t t42 = 45805;
volatile int32_t x177 = INT32_MAX;
volatile int32_t t44 = -19311659;
static volatile uint32_t x182 = 6400U;
int32_t t46 = 5;
static int32_t x194 = INT32_MIN;
static int32_t t48 = -1678;
int64_t x205 = 331709770LL;
uint64_t x208 = UINT64_MAX;
int32_t x211 = -1;
static int32_t t52 = -16;
static volatile uint8_t x231 = 6U;
static int32_t t57 = -1;
int32_t x233 = -1;
volatile uint64_t x236 = 1535912933LLU;
uint32_t x238 = 5643040U;
volatile uint16_t x241 = 3662U;
int8_t x247 = 0;
uint32_t x251 = 7115U;
static volatile int64_t x252 = -1LL;
int64_t x254 = -1781766840842725042LL;
volatile int64_t x258 = INT64_MIN;
volatile int16_t x266 = INT16_MAX;
static uint16_t x272 = 5450U;
static int16_t x274 = INT16_MIN;
int64_t x280 = INT64_MIN;
int8_t x283 = 22;
int8_t x287 = INT8_MIN;
int32_t t71 = -1;
uint16_t x301 = 17U;
int16_t x302 = -7;
volatile int8_t x303 = INT8_MIN;
int8_t x304 = INT8_MIN;
int32_t t75 = -159;
static volatile int64_t x307 = INT64_MIN;
uint64_t x308 = 17LLU;
int8_t x319 = INT8_MAX;
volatile int32_t t81 = -66143;
volatile int32_t t82 = 2603;
uint16_t x337 = 1680U;
static int64_t x338 = -1LL;
volatile int32_t t84 = 2181;
static int16_t x344 = -1;
int16_t x347 = 52;
int16_t x348 = INT16_MIN;
int16_t x356 = -302;
int32_t t88 = 22;
int16_t x363 = -1;
static int32_t t91 = 13;
int32_t x374 = INT32_MAX;
static volatile int64_t x377 = INT64_MIN;
uint64_t x381 = 3091535787423208LLU;
int8_t x386 = 0;
int8_t x390 = -1;
volatile int8_t x391 = INT8_MIN;
volatile int64_t x394 = -1LL;
static uint16_t x396 = 38U;
volatile int32_t t98 = -704693;
static volatile int32_t x397 = -1;
static uint16_t x398 = UINT16_MAX;
uint8_t x401 = 5U;
int32_t t100 = 3895952;
int16_t x408 = 3;
uint32_t x412 = 1028473661U;
int8_t x413 = -1;
uint16_t x415 = 9152U;
int16_t x420 = -1;
int32_t t105 = -57747;
int32_t x430 = INT32_MAX;
int32_t x433 = INT32_MIN;
int8_t x440 = INT8_MAX;
static volatile int32_t x445 = INT32_MIN;
uint8_t x446 = UINT8_MAX;
int32_t t111 = 44892714;
uint8_t x457 = UINT8_MAX;
volatile int32_t x462 = -235959633;
int64_t x467 = INT64_MIN;
int32_t t116 = 60;
static int32_t x470 = INT32_MIN;
int16_t x473 = -1;
volatile int8_t x474 = INT8_MIN;
int64_t x477 = INT64_MAX;
int16_t x478 = INT16_MIN;
static int32_t t119 = 397775;
int8_t x484 = INT8_MAX;
int8_t x496 = INT8_MAX;
static volatile int64_t x500 = -416704780LL;
static int32_t t124 = -56;
static int16_t x501 = INT16_MIN;
volatile int32_t t125 = 217275;
uint64_t x508 = 216287164387200LLU;
int32_t t127 = 2;
int32_t x516 = 444137979;
int8_t x517 = INT8_MIN;
int32_t x518 = -28;
uint32_t x524 = 2U;
int32_t x529 = INT32_MIN;
volatile int32_t t133 = -63819;
uint64_t x539 = UINT64_MAX;
volatile int64_t x540 = 68246181361587LL;
int32_t x542 = INT32_MIN;
int32_t t138 = 55055754;
int8_t x558 = 35;
static int32_t t139 = -2833;
static uint16_t x561 = UINT16_MAX;
uint8_t x562 = 1U;
int16_t x571 = -56;
volatile int16_t x574 = INT16_MIN;
int32_t t145 = 349095;
int8_t x587 = -3;
static volatile int32_t x590 = 0;
int64_t x597 = -1LL;
uint8_t x601 = 34U;
int8_t x605 = 0;
int8_t x606 = 0;
int32_t x618 = -1;
static uint8_t x620 = 1U;
static volatile uint16_t x622 = UINT16_MAX;
uint64_t x627 = 993374548LLU;
volatile uint8_t x628 = 5U;
uint64_t x635 = 2730510585768912236LLU;
volatile int32_t t159 = 399351524;
uint16_t x641 = 14087U;
static int64_t x642 = INT64_MIN;
uint8_t x644 = UINT8_MAX;
static int8_t x646 = INT8_MIN;
int32_t t161 = 2383;
static volatile int32_t t162 = -507552518;
volatile int32_t t164 = 3989000;
uint64_t x664 = 373LLU;
static int16_t x674 = INT16_MIN;
volatile int8_t x683 = INT8_MAX;
uint16_t x685 = 89U;
int32_t x687 = INT32_MAX;
static int32_t x689 = INT32_MIN;
int8_t x695 = INT8_MAX;
int8_t x704 = -1;
static int32_t t176 = 16;
int16_t x719 = -1;
int32_t t179 = -14;
uint8_t x735 = 8U;
int64_t x743 = INT64_MIN;
int16_t x745 = 443;
static int32_t t186 = 13796700;
volatile int32_t t188 = -110776;
uint64_t x767 = 112011499710LLU;
int64_t x770 = -1LL;
uint64_t x774 = 5909LLU;
int64_t x776 = INT64_MAX;
uint32_t x777 = 7840U;
volatile int32_t t194 = 2516643;
int64_t x781 = -1LL;
uint32_t x783 = UINT32_MAX;
uint8_t x796 = UINT8_MAX;
int32_t t198 = 55026;
static volatile int64_t x799 = 409753494824001LL;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int8_t x4 = 1;
	volatile int32_t t0 = 0;

    t0 = (x1==(x2<=(x3<=x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = -31LL;
	uint16_t x6 = UINT16_MAX;
	volatile int8_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int32_t t1 = -459;

    t1 = (x5==(x6<=(x7<=x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = -10;
	static int16_t x10 = INT16_MIN;
	uint8_t x12 = UINT8_MAX;
	static int32_t t2 = -1315217;

    t2 = (x9==(x10<=(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = 25199LL;

    t3 = (x13==(x14<=(x15<=x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x17 = -2897271755443LL;
	uint8_t x18 = 22U;
	int8_t x19 = INT8_MIN;
	int32_t x20 = -1;
	int32_t t4 = 1194;

    t4 = (x17==(x18<=(x19<=x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 4928U;
	uint16_t x22 = 21U;
	static uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MAX;

    t5 = (x21==(x22<=(x23<=x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	int64_t x26 = -20LL;
	int16_t x27 = INT16_MAX;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = 1906;

    t6 = (x25==(x26<=(x27<=x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = 1;
	static int32_t x30 = INT32_MIN;
	static int16_t x31 = 30;

    t7 = (x29==(x30<=(x31<=x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int16_t x34 = -13;
	int8_t x36 = -1;
	volatile int32_t t8 = 6914;

    t8 = (x33==(x34<=(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x37 = INT32_MAX;
	static int16_t x38 = -2;
	int32_t x39 = -1;
	int64_t x40 = -391716LL;

    t9 = (x37==(x38<=(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x42 = INT16_MAX;
	int64_t x43 = INT64_MIN;
	volatile uint64_t x44 = 21211415370LLU;

    t10 = (x41==(x42<=(x43<=x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = INT64_MIN;
	int16_t x46 = -7;
	static int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MAX;
	int32_t t11 = 267;

    t11 = (x45==(x46<=(x47<=x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = INT16_MAX;
	uint64_t x50 = UINT64_MAX;
	static uint64_t x51 = UINT64_MAX;
	int32_t x52 = 3;
	int32_t t12 = -25;

    t12 = (x49==(x50<=(x51<=x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x53 = INT8_MAX;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MAX;
	volatile int32_t x56 = -1;
	int32_t t13 = -348991979;

    t13 = (x53==(x54<=(x55<=x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x58 = INT64_MIN;
	volatile uint16_t x59 = 3935U;
	int32_t t14 = 68393;

    t14 = (x57==(x58<=(x59<=x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x62 = 1;

    t15 = (x61==(x62<=(x63<=x64)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	int16_t x66 = INT16_MIN;
	static volatile int32_t x67 = -1;
	uint32_t x68 = 1154945105U;
	volatile int32_t t16 = -1;

    t16 = (x65==(x66<=(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x69 = UINT32_MAX;
	static int32_t t17 = 1253512;

    t17 = (x69==(x70<=(x71<=x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x74 = -3452610;
	volatile int32_t t18 = 3369;

    t18 = (x73==(x74<=(x75<=x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x77 = 26096;
	volatile uint8_t x78 = UINT8_MAX;
	volatile int64_t x79 = INT64_MAX;
	int8_t x80 = -1;
	volatile int32_t t19 = -101;

    t19 = (x77==(x78<=(x79<=x80)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x81 = INT8_MIN;
	static uint8_t x82 = UINT8_MAX;
	static int32_t x83 = -15858;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 27523;

    t20 = (x81==(x82<=(x83<=x84)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x86 = UINT64_MAX;
	static uint8_t x87 = 6U;
	static int32_t x88 = -1;
	static int32_t t21 = -48;

    t21 = (x85==(x86<=(x87<=x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	volatile int64_t x90 = INT64_MIN;
	static int32_t x91 = INT32_MIN;
	uint16_t x92 = 14942U;
	static int32_t t22 = 12;

    t22 = (x89==(x90<=(x91<=x92)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int64_t x93 = -1LL;
	volatile int64_t x95 = INT64_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t23 = -2;

    t23 = (x93==(x94<=(x95<=x96)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x97 = INT16_MIN;
	int64_t x98 = -1LL;
	uint16_t x99 = 105U;
	static int32_t t24 = 3;

    t24 = (x97==(x98<=(x99<=x100)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 31;
	int16_t x102 = -1;
	int64_t x103 = -379624729212868LL;
	int32_t x104 = 38912946;
	int32_t t25 = -1969;

    t25 = (x101==(x102<=(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x105 = INT64_MIN;
	int32_t x106 = 29693227;
	volatile uint64_t x107 = 25LLU;
	int32_t t26 = -149045;

    t26 = (x105==(x106<=(x107<=x108)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = INT8_MIN;
	static int64_t x110 = INT64_MAX;
	volatile int32_t t27 = 1018845;

    t27 = (x109==(x110<=(x111<=x112)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x113 = -1LL;
	int8_t x115 = INT8_MIN;
	int8_t x116 = -12;

    t28 = (x113==(x114<=(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x118 = 387747U;
	static int32_t x119 = -1;
	static uint32_t x120 = 4786139U;

    t29 = (x117==(x118<=(x119<=x120)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x121 = 385U;
	int16_t x122 = INT16_MIN;
	uint8_t x124 = UINT8_MAX;
	int32_t t30 = 30087;

    t30 = (x121==(x122<=(x123<=x124)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = 9956412992793856LL;
	int8_t x128 = INT8_MIN;
	int32_t t31 = -8022;

    t31 = (x125==(x126<=(x127<=x128)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x130 = 253214LL;
	volatile uint16_t x131 = UINT16_MAX;
	int8_t x132 = -15;
	volatile int32_t t32 = -1544;

    t32 = (x129==(x130<=(x131<=x132)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x133 = UINT32_MAX;
	int32_t t33 = -17288;

    t33 = (x133==(x134<=(x135<=x136)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x138 = INT32_MAX;
	uint8_t x139 = UINT8_MAX;
	static volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -12101;

    t34 = (x137==(x138<=(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x141 = UINT64_MAX;
	int8_t x142 = INT8_MIN;
	static volatile uint16_t x144 = 26755U;

    t35 = (x141==(x142<=(x143<=x144)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int8_t x145 = INT8_MIN;
	uint16_t x146 = UINT16_MAX;
	static int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	volatile int32_t t36 = 49312936;

    t36 = (x145==(x146<=(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x149 = INT64_MIN;
	uint32_t x150 = UINT32_MAX;
	static volatile uint16_t x151 = UINT16_MAX;
	int32_t x152 = INT32_MAX;
	volatile int32_t t37 = 175333;

    t37 = (x149==(x150<=(x151<=x152)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x153 = 10564;
	int64_t x154 = 30898254135044583LL;
	static volatile int64_t x156 = -403359LL;
	int32_t t38 = -761;

    t38 = (x153==(x154<=(x155<=x156)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x157 = 100280824U;
	int16_t x158 = -10878;
	int16_t x159 = -1;
	static volatile int32_t t39 = -403002;

    t39 = (x157==(x158<=(x159<=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint16_t x162 = 4551U;
	static uint16_t x163 = 1U;
	volatile int16_t x164 = INT16_MIN;
	int32_t t40 = 17677;

    t40 = (x161==(x162<=(x163<=x164)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	static volatile uint64_t x166 = UINT64_MAX;
	volatile int32_t x167 = 14;
	int32_t t41 = -108;

    t41 = (x165==(x166<=(x167<=x168)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	static int8_t x172 = INT8_MIN;

    t42 = (x169==(x170<=(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x173 = 36708954950LL;
	int32_t x174 = -4955917;
	volatile int64_t x175 = INT64_MIN;
	volatile int32_t x176 = INT32_MIN;
	int32_t t43 = 1;

    t43 = (x173==(x174<=(x175<=x176)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x178 = -5619481291506049LL;
	int16_t x179 = 704;
	int64_t x180 = INT64_MIN;

    t44 = (x177==(x178<=(x179<=x180)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x181 = 1U;
	int8_t x183 = 1;
	volatile int64_t x184 = -349LL;
	volatile int32_t t45 = -253;

    t45 = (x181==(x182<=(x183<=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x185 = 2LLU;
	volatile int16_t x186 = INT16_MIN;
	uint64_t x187 = UINT64_MAX;
	int16_t x188 = INT16_MAX;

    t46 = (x185==(x186<=(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x189 = 111;
	int32_t x190 = INT32_MAX;
	static int32_t x191 = 6125;
	static volatile int16_t x192 = INT16_MIN;
	static int32_t t47 = -177;

    t47 = (x189==(x190<=(x191<=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = 3;
	int8_t x195 = -1;
	static int16_t x196 = INT16_MIN;

    t48 = (x193==(x194<=(x195<=x196)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x197 = 0;
	static int8_t x198 = INT8_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 0;

    t49 = (x197==(x198<=(x199<=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x201 = -2;
	volatile int16_t x202 = INT16_MIN;
	volatile int16_t x203 = 885;
	uint64_t x204 = UINT64_MAX;
	volatile int32_t t50 = -683;

    t50 = (x201==(x202<=(x203<=x204)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int16_t x206 = INT16_MAX;
	volatile uint8_t x207 = UINT8_MAX;
	int32_t t51 = -1;

    t51 = (x205==(x206<=(x207<=x208)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint16_t x209 = UINT16_MAX;
	int8_t x210 = -1;
	int32_t x212 = 10597;

    t52 = (x209==(x210<=(x211<=x212)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x213 = INT64_MAX;
	uint32_t x214 = 1U;
	int8_t x215 = INT8_MIN;
	static uint64_t x216 = 88874420LLU;
	int32_t t53 = 1;

    t53 = (x213==(x214<=(x215<=x216)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x217 = 102869571;
	uint8_t x218 = UINT8_MAX;
	uint64_t x219 = 657441LLU;
	int64_t x220 = -1LL;
	int32_t t54 = 174210474;

    t54 = (x217==(x218<=(x219<=x220)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x221 = INT16_MIN;
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MAX;
	int64_t x224 = 78LL;
	volatile int32_t t55 = 0;

    t55 = (x221==(x222<=(x223<=x224)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x225 = -25169;
	static int8_t x226 = INT8_MIN;
	volatile uint64_t x227 = 1670733504309781LLU;
	int8_t x228 = -21;
	volatile int32_t t56 = -158;

    t56 = (x225==(x226<=(x227<=x228)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x229 = UINT8_MAX;
	uint64_t x230 = UINT64_MAX;
	volatile int64_t x232 = INT64_MIN;

    t57 = (x229==(x230<=(x231<=x232)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x234 = -26;
	volatile uint8_t x235 = UINT8_MAX;
	int32_t t58 = 63805;

    t58 = (x233==(x234<=(x235<=x236)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x237 = 1051LLU;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;
	static volatile int32_t t59 = 0;

    t59 = (x237==(x238<=(x239<=x240)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x242 = -1;
	int8_t x243 = INT8_MAX;
	uint16_t x244 = 27407U;
	int32_t t60 = -2;

    t60 = (x241==(x242<=(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x245 = 1590765652414648695LLU;
	uint64_t x246 = 0LLU;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t61 = 107577;

    t61 = (x245==(x246<=(x247<=x248)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x249 = INT8_MAX;
	volatile int16_t x250 = -1;
	volatile int32_t t62 = -1668;

    t62 = (x249==(x250<=(x251<=x252)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x253 = INT16_MAX;
	volatile uint8_t x255 = 8U;
	uint32_t x256 = 747189U;
	static volatile int32_t t63 = -161;

    t63 = (x253==(x254<=(x255<=x256)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x257 = -1;
	uint16_t x259 = 481U;
	int8_t x260 = 1;
	volatile int32_t t64 = -6981226;

    t64 = (x257==(x258<=(x259<=x260)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x261 = INT8_MAX;
	static int8_t x262 = INT8_MIN;
	static int64_t x263 = 95786354573729LL;
	volatile int64_t x264 = INT64_MAX;
	volatile int32_t t65 = -123802616;

    t65 = (x261==(x262<=(x263<=x264)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x265 = UINT32_MAX;
	int64_t x267 = INT64_MAX;
	volatile uint32_t x268 = 18U;
	volatile int32_t t66 = 49967476;

    t66 = (x265==(x266<=(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x269 = 14U;
	int64_t x270 = -1LL;
	int64_t x271 = -65541011310440LL;
	volatile int32_t t67 = 38824;

    t67 = (x269==(x270<=(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x273 = -1;
	int64_t x275 = -1LL;
	static int8_t x276 = -41;
	volatile int32_t t68 = 4915;

    t68 = (x273==(x274<=(x275<=x276)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile int64_t x277 = 246732792467416LL;
	uint32_t x278 = UINT32_MAX;
	volatile int16_t x279 = INT16_MAX;
	volatile int32_t t69 = 75;

    t69 = (x277==(x278<=(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x281 = UINT16_MAX;
	int8_t x282 = INT8_MIN;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = 7098951;

    t70 = (x281==(x282<=(x283<=x284)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x285 = -3819;
	volatile uint64_t x286 = UINT64_MAX;
	int8_t x288 = 0;

    t71 = (x285==(x286<=(x287<=x288)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x289 = 3944U;
	static int16_t x290 = 3066;
	int32_t x291 = -649383529;
	uint16_t x292 = 3464U;
	int32_t t72 = 0;

    t72 = (x289==(x290<=(x291<=x292)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x293 = INT32_MIN;
	static volatile uint64_t x294 = 459242061LLU;
	int32_t x295 = INT32_MIN;
	uint32_t x296 = 5915U;
	int32_t t73 = 300;

    t73 = (x293==(x294<=(x295<=x296)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int64_t x299 = -62548155086689LL;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t74 = 109162890;

    t74 = (x297==(x298<=(x299<=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    

    t75 = (x301==(x302<=(x303<=x304)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x305 = INT32_MIN;
	uint16_t x306 = 6U;
	static int32_t t76 = -15300;

    t76 = (x305==(x306<=(x307<=x308)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x309 = -740;
	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	uint32_t x312 = 30505344U;
	volatile int32_t t77 = 504780;

    t77 = (x309==(x310<=(x311<=x312)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x313 = 1U;
	uint32_t x314 = 1806U;
	int64_t x315 = -922842LL;
	volatile uint64_t x316 = 14508LLU;
	static int32_t t78 = -45551;

    t78 = (x313==(x314<=(x315<=x316)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x317 = 3252103781490697LLU;
	volatile int64_t x318 = INT64_MAX;
	uint8_t x320 = 0U;
	int32_t t79 = 1141529;

    t79 = (x317==(x318<=(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x321 = -6;
	int8_t x322 = -1;
	volatile int32_t x323 = -1;
	int64_t x324 = 975298261LL;
	int32_t t80 = -5435803;

    t80 = (x321==(x322<=(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x325 = -1LL;
	uint16_t x326 = 15807U;
	volatile uint16_t x327 = 6020U;
	int32_t x328 = -58123216;

    t81 = (x325==(x326<=(x327<=x328)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x329 = 79974LL;
	int8_t x330 = -5;
	static int64_t x331 = INT64_MIN;
	int16_t x332 = INT16_MIN;

    t82 = (x329==(x330<=(x331<=x332)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x333 = 60U;
	volatile int32_t x334 = INT32_MIN;
	int64_t x335 = 7563450448030LL;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = -265956069;

    t83 = (x333==(x334<=(x335<=x336)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x339 = INT8_MAX;
	volatile int8_t x340 = INT8_MAX;

    t84 = (x337==(x338<=(x339<=x340)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x341 = -1;
	uint32_t x342 = 1813U;
	int16_t x343 = INT16_MAX;
	int32_t t85 = 0;

    t85 = (x341==(x342<=(x343<=x344)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x345 = INT64_MIN;
	static int8_t x346 = INT8_MIN;
	volatile int32_t t86 = 531818;

    t86 = (x345==(x346<=(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x349 = UINT32_MAX;
	static int8_t x350 = -1;
	uint8_t x351 = 1U;
	volatile uint8_t x352 = UINT8_MAX;
	static volatile int32_t t87 = 0;

    t87 = (x349==(x350<=(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x353 = 26U;
	int64_t x354 = -1LL;
	static int32_t x355 = INT32_MIN;

    t88 = (x353==(x354<=(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = -2;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = INT32_MAX;
	uint8_t x360 = 0U;
	volatile int32_t t89 = 93;

    t89 = (x357==(x358<=(x359<=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = INT16_MAX;
	static int32_t x362 = INT32_MIN;
	int8_t x364 = INT8_MAX;
	volatile int32_t t90 = 361011872;

    t90 = (x361==(x362<=(x363<=x364)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int8_t x365 = 1;
	uint8_t x366 = 1U;
	static volatile uint16_t x367 = 0U;
	int32_t x368 = -1;

    t91 = (x365==(x366<=(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = INT32_MIN;
	uint64_t x370 = 2337481621655965933LLU;
	int16_t x371 = INT16_MAX;
	static int32_t x372 = INT32_MAX;
	static int32_t t92 = 2784;

    t92 = (x369==(x370<=(x371<=x372)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x373 = INT16_MIN;
	int8_t x375 = 3;
	int32_t x376 = INT32_MAX;
	int32_t t93 = -738163;

    t93 = (x373==(x374<=(x375<=x376)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x378 = 176568167U;
	static int8_t x379 = 16;
	uint16_t x380 = 10295U;
	volatile int32_t t94 = 2;

    t94 = (x377==(x378<=(x379<=x380)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x382 = INT64_MIN;
	int16_t x383 = 685;
	int32_t x384 = 54;
	volatile int32_t t95 = 52278715;

    t95 = (x381==(x382<=(x383<=x384)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint64_t x385 = UINT64_MAX;
	static int16_t x387 = INT16_MAX;
	static uint16_t x388 = 9923U;
	volatile int32_t t96 = 67170;

    t96 = (x385==(x386<=(x387<=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x389 = -1813;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t97 = -1997;

    t97 = (x389==(x390<=(x391<=x392)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x393 = 1328065U;
	int64_t x395 = -1LL;

    t98 = (x393==(x394<=(x395<=x396)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x399 = INT8_MIN;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t99 = -315129683;

    t99 = (x397==(x398<=(x399<=x400)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x402 = -1;
	int16_t x403 = INT16_MIN;
	volatile int8_t x404 = -13;

    t100 = (x401==(x402<=(x403<=x404)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x405 = UINT16_MAX;
	int32_t x406 = -1;
	uint64_t x407 = 3604216185756629LLU;
	int32_t t101 = 60803866;

    t101 = (x405==(x406<=(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x409 = INT8_MIN;
	int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	static int32_t t102 = 320248;

    t102 = (x409==(x410<=(x411<=x412)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x414 = -2906546881169277LL;
	volatile uint8_t x416 = UINT8_MAX;
	static volatile int32_t t103 = -38091;

    t103 = (x413==(x414<=(x415<=x416)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x417 = INT16_MAX;
	uint8_t x418 = UINT8_MAX;
	static int8_t x419 = INT8_MIN;
	volatile int32_t t104 = 53933;

    t104 = (x417==(x418<=(x419<=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x421 = 5U;
	uint16_t x422 = 6084U;
	int16_t x423 = INT16_MIN;
	uint16_t x424 = 232U;

    t105 = (x421==(x422<=(x423<=x424)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x425 = -4;
	int64_t x426 = -19719078048876LL;
	static volatile int16_t x427 = INT16_MAX;
	uint32_t x428 = UINT32_MAX;
	static int32_t t106 = -4063419;

    t106 = (x425==(x426<=(x427<=x428)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x429 = INT64_MAX;
	static int32_t x431 = 330238372;
	int64_t x432 = -4642LL;
	int32_t t107 = 8;

    t107 = (x429==(x430<=(x431<=x432)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x434 = -2688;
	volatile int16_t x435 = INT16_MIN;
	int32_t x436 = -40;
	static int32_t t108 = -109811;

    t108 = (x433==(x434<=(x435<=x436)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x437 = 0U;
	int64_t x438 = INT64_MIN;
	int64_t x439 = INT64_MIN;
	int32_t t109 = 27260;

    t109 = (x437==(x438<=(x439<=x440)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x441 = INT16_MIN;
	int16_t x442 = -1;
	volatile int32_t x443 = INT32_MAX;
	int16_t x444 = INT16_MIN;
	static volatile int32_t t110 = 920;

    t110 = (x441==(x442<=(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x447 = 749;
	uint64_t x448 = 3974962561000861119LLU;

    t111 = (x445==(x446<=(x447<=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x449 = 4491U;
	uint8_t x450 = 10U;
	volatile uint64_t x451 = 605488934897LLU;
	volatile uint16_t x452 = UINT16_MAX;
	static volatile int32_t t112 = 465783;

    t112 = (x449==(x450<=(x451<=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x453 = 23414U;
	int64_t x454 = 362675LL;
	int16_t x455 = INT16_MAX;
	static int32_t x456 = -1;
	int32_t t113 = 377456146;

    t113 = (x453==(x454<=(x455<=x456)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x458 = 50U;
	int16_t x459 = -1;
	uint16_t x460 = 2U;
	static volatile int32_t t114 = 502013;

    t114 = (x457==(x458<=(x459<=x460)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x461 = UINT32_MAX;
	uint64_t x463 = 7124502986906208416LLU;
	uint8_t x464 = UINT8_MAX;
	int32_t t115 = -65027138;

    t115 = (x461==(x462<=(x463<=x464)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x465 = 194;
	int8_t x466 = INT8_MIN;
	int32_t x468 = -1;

    t116 = (x465==(x466<=(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint8_t x469 = 3U;
	int8_t x471 = -1;
	static int32_t x472 = -411695;
	int32_t t117 = 234513;

    t117 = (x469==(x470<=(x471<=x472)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x475 = 78U;
	uint32_t x476 = 708095822U;
	volatile int32_t t118 = 0;

    t118 = (x473==(x474<=(x475<=x476)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x479 = UINT8_MAX;
	static int16_t x480 = INT16_MIN;

    t119 = (x477==(x478<=(x479<=x480)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x481 = -1LL;
	int32_t x482 = INT32_MIN;
	uint8_t x483 = UINT8_MAX;
	volatile int32_t t120 = 1045;

    t120 = (x481==(x482<=(x483<=x484)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x485 = -38140;
	uint16_t x486 = 3U;
	static int16_t x487 = INT16_MIN;
	uint8_t x488 = UINT8_MAX;
	int32_t t121 = 2064;

    t121 = (x485==(x486<=(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x489 = 25812U;
	static int32_t x490 = -1;
	static int64_t x491 = INT64_MIN;
	uint8_t x492 = 1U;
	int32_t t122 = -7;

    t122 = (x489==(x490<=(x491<=x492)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x493 = -1;
	int16_t x494 = INT16_MAX;
	uint16_t x495 = 2217U;
	volatile int32_t t123 = 355290;

    t123 = (x493==(x494<=(x495<=x496)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile uint8_t x497 = 7U;
	static volatile int8_t x498 = -6;
	volatile int32_t x499 = -7146502;

    t124 = (x497==(x498<=(x499<=x500)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x502 = 2LLU;
	int16_t x503 = INT16_MIN;
	volatile uint64_t x504 = UINT64_MAX;

    t125 = (x501==(x502<=(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x505 = -1;
	int8_t x506 = -1;
	int32_t x507 = 101;
	int32_t t126 = -521396;

    t126 = (x505==(x506<=(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -454761769848LL;
	uint16_t x510 = 143U;
	uint16_t x511 = 177U;
	volatile uint16_t x512 = UINT16_MAX;

    t127 = (x509==(x510<=(x511<=x512)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x513 = -1;
	int8_t x514 = 3;
	volatile uint64_t x515 = 65045LLU;
	volatile int32_t t128 = -106334335;

    t128 = (x513==(x514<=(x515<=x516)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x519 = -17;
	int64_t x520 = INT64_MAX;
	int32_t t129 = 667210;

    t129 = (x517==(x518<=(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x521 = -1LL;
	int32_t x522 = INT32_MIN;
	uint64_t x523 = UINT64_MAX;
	volatile int32_t t130 = -991;

    t130 = (x521==(x522<=(x523<=x524)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x525 = 30520LLU;
	static int8_t x526 = INT8_MIN;
	static int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MIN;
	volatile int32_t t131 = -54;

    t131 = (x525==(x526<=(x527<=x528)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x530 = INT64_MIN;
	int32_t x531 = INT32_MIN;
	int8_t x532 = INT8_MIN;
	int32_t t132 = -1;

    t132 = (x529==(x530<=(x531<=x532)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x533 = INT64_MAX;
	int64_t x534 = -19146087392LL;
	uint32_t x535 = UINT32_MAX;
	int16_t x536 = INT16_MAX;

    t133 = (x533==(x534<=(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x537 = UINT16_MAX;
	int64_t x538 = -1LL;
	int32_t t134 = 0;

    t134 = (x537==(x538<=(x539<=x540)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x541 = 467941205;
	int64_t x543 = -1LL;
	static volatile int16_t x544 = -8182;
	volatile int32_t t135 = -249296;

    t135 = (x541==(x542<=(x543<=x544)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x545 = -1;
	volatile uint16_t x546 = 340U;
	static int16_t x547 = INT16_MIN;
	int8_t x548 = INT8_MIN;
	volatile int32_t t136 = 526502700;

    t136 = (x545==(x546<=(x547<=x548)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x549 = INT64_MAX;
	volatile int16_t x550 = -1;
	static int8_t x551 = 42;
	volatile uint32_t x552 = 4U;
	volatile int32_t t137 = 184470586;

    t137 = (x549==(x550<=(x551<=x552)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x553 = 43U;
	static int8_t x554 = 0;
	static uint16_t x555 = UINT16_MAX;
	int8_t x556 = -1;

    t138 = (x553==(x554<=(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x557 = 86;
	static volatile uint16_t x559 = 14034U;
	int32_t x560 = INT32_MIN;

    t139 = (x557==(x558<=(x559<=x560)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x563 = UINT8_MAX;
	int8_t x564 = INT8_MIN;
	volatile int32_t t140 = -158218096;

    t140 = (x561==(x562<=(x563<=x564)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int64_t x565 = -5749033LL;
	int64_t x566 = INT64_MAX;
	int64_t x567 = 380032LL;
	int16_t x568 = INT16_MIN;
	volatile int32_t t141 = -6869324;

    t141 = (x565==(x566<=(x567<=x568)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = INT32_MIN;
	volatile uint64_t x570 = 125972242217201952LLU;
	uint8_t x572 = 8U;
	static int32_t t142 = 218;

    t142 = (x569==(x570<=(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x573 = -5239;
	uint8_t x575 = UINT8_MAX;
	int32_t x576 = -23;
	volatile int32_t t143 = 86;

    t143 = (x573==(x574<=(x575<=x576)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x577 = INT8_MIN;
	uint8_t x578 = 4U;
	uint64_t x579 = 939251077LLU;
	int8_t x580 = 19;
	volatile int32_t t144 = 2721;

    t144 = (x577==(x578<=(x579<=x580)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint8_t x581 = 39U;
	int8_t x582 = INT8_MIN;
	int32_t x583 = INT32_MIN;
	volatile int64_t x584 = -249080456589241LL;

    t145 = (x581==(x582<=(x583<=x584)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint64_t x585 = 4479LLU;
	uint32_t x586 = 224313771U;
	int8_t x588 = INT8_MIN;
	volatile int32_t t146 = 866469;

    t146 = (x585==(x586<=(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint32_t x589 = UINT32_MAX;
	static uint32_t x591 = 31U;
	int16_t x592 = 8;
	static int32_t t147 = 365493210;

    t147 = (x589==(x590<=(x591<=x592)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x593 = 1;
	uint16_t x594 = 14U;
	uint16_t x595 = UINT16_MAX;
	static int16_t x596 = -2;
	int32_t t148 = -88402312;

    t148 = (x593==(x594<=(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x598 = -1;
	static uint64_t x599 = 2803LLU;
	int64_t x600 = -185754575LL;
	volatile int32_t t149 = -1;

    t149 = (x597==(x598<=(x599<=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x602 = 111U;
	int64_t x603 = INT64_MIN;
	static uint8_t x604 = 7U;
	volatile int32_t t150 = -4416041;

    t150 = (x601==(x602<=(x603<=x604)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x607 = INT64_MIN;
	uint16_t x608 = UINT16_MAX;
	int32_t t151 = 33237;

    t151 = (x605==(x606<=(x607<=x608)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x609 = INT16_MAX;
	static int16_t x610 = -7;
	int8_t x611 = -29;
	int16_t x612 = -1;
	volatile int32_t t152 = -2163522;

    t152 = (x609==(x610<=(x611<=x612)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = INT8_MIN;
	uint16_t x614 = UINT16_MAX;
	volatile int8_t x615 = INT8_MIN;
	uint64_t x616 = 3266095635250LLU;
	int32_t t153 = 31;

    t153 = (x613==(x614<=(x615<=x616)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint32_t x617 = UINT32_MAX;
	int8_t x619 = INT8_MAX;
	volatile int32_t t154 = -197;

    t154 = (x617==(x618<=(x619<=x620)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x621 = INT16_MIN;
	static int64_t x623 = INT64_MIN;
	volatile int8_t x624 = -53;
	volatile int32_t t155 = 2728497;

    t155 = (x621==(x622<=(x623<=x624)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x625 = UINT8_MAX;
	int16_t x626 = INT16_MIN;
	int32_t t156 = 3193;

    t156 = (x625==(x626<=(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x629 = -318801283;
	int8_t x630 = INT8_MIN;
	uint8_t x631 = 12U;
	int8_t x632 = 1;
	volatile int32_t t157 = 60;

    t157 = (x629==(x630<=(x631<=x632)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x633 = 72870U;
	int16_t x634 = -7639;
	uint8_t x636 = UINT8_MAX;
	int32_t t158 = -8155617;

    t158 = (x633==(x634<=(x635<=x636)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x637 = 40U;
	int64_t x638 = INT64_MIN;
	int16_t x639 = INT16_MIN;
	uint64_t x640 = UINT64_MAX;

    t159 = (x637==(x638<=(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x643 = -267;
	volatile int32_t t160 = 2;

    t160 = (x641==(x642<=(x643<=x644)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x645 = INT16_MIN;
	int16_t x647 = 3;
	uint32_t x648 = UINT32_MAX;

    t161 = (x645==(x646<=(x647<=x648)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x649 = 8963U;
	static volatile uint16_t x650 = UINT16_MAX;
	uint32_t x651 = UINT32_MAX;
	int32_t x652 = -1;

    t162 = (x649==(x650<=(x651<=x652)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x653 = INT16_MIN;
	static int32_t x654 = 98;
	int64_t x655 = 133452689LL;
	int64_t x656 = INT64_MAX;
	volatile int32_t t163 = 0;

    t163 = (x653==(x654<=(x655<=x656)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint32_t x657 = 387U;
	int64_t x658 = -1102309875942476476LL;
	static int64_t x659 = INT64_MIN;
	uint64_t x660 = 2129566LLU;

    t164 = (x657==(x658<=(x659<=x660)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x661 = 90287790651LL;
	int8_t x662 = 44;
	volatile uint8_t x663 = 21U;
	volatile int32_t t165 = 126;

    t165 = (x661==(x662<=(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x665 = INT64_MIN;
	static int32_t x666 = INT32_MAX;
	volatile uint8_t x667 = 2U;
	int16_t x668 = 6;
	int32_t t166 = 17007087;

    t166 = (x665==(x666<=(x667<=x668)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x669 = INT8_MIN;
	uint8_t x670 = 0U;
	int16_t x671 = INT16_MAX;
	uint16_t x672 = 81U;
	volatile int32_t t167 = -27177;

    t167 = (x669==(x670<=(x671<=x672)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x673 = UINT16_MAX;
	int16_t x675 = INT16_MIN;
	int16_t x676 = INT16_MIN;
	static int32_t t168 = -3664405;

    t168 = (x673==(x674<=(x675<=x676)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x677 = -1427;
	int32_t x678 = 5;
	static int64_t x679 = -26462285317891LL;
	volatile uint8_t x680 = 5U;
	int32_t t169 = 13;

    t169 = (x677==(x678<=(x679<=x680)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 0U;
	uint64_t x682 = UINT64_MAX;
	uint16_t x684 = 1U;
	volatile int32_t t170 = 1185745;

    t170 = (x681==(x682<=(x683<=x684)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x686 = -1551933;
	int16_t x688 = INT16_MAX;
	volatile int32_t t171 = 183;

    t171 = (x685==(x686<=(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x690 = INT32_MIN;
	int16_t x691 = -1;
	int64_t x692 = INT64_MIN;
	int32_t t172 = 541814450;

    t172 = (x689==(x690<=(x691<=x692)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x693 = INT8_MAX;
	int16_t x694 = INT16_MIN;
	static int16_t x696 = INT16_MIN;
	int32_t t173 = -62312346;

    t173 = (x693==(x694<=(x695<=x696)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x697 = 11;
	volatile int64_t x698 = -539102799LL;
	static uint16_t x699 = UINT16_MAX;
	static volatile int8_t x700 = 7;
	volatile int32_t t174 = -892;

    t174 = (x697==(x698<=(x699<=x700)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x701 = INT8_MIN;
	int8_t x702 = -1;
	int16_t x703 = INT16_MAX;
	static volatile int32_t t175 = -813;

    t175 = (x701==(x702<=(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x705 = INT16_MIN;
	uint8_t x706 = 6U;
	static int32_t x707 = INT32_MAX;
	uint32_t x708 = 56424078U;

    t176 = (x705==(x706<=(x707<=x708)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = INT16_MAX;
	static uint8_t x710 = 123U;
	int64_t x711 = INT64_MIN;
	int32_t x712 = -39;
	volatile int32_t t177 = -393;

    t177 = (x709==(x710<=(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x713 = -1LL;
	uint32_t x714 = 526U;
	static int8_t x715 = 5;
	uint64_t x716 = 48LLU;
	volatile int32_t t178 = 50075;

    t178 = (x713==(x714<=(x715<=x716)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x717 = UINT64_MAX;
	volatile uint32_t x718 = 4186U;
	int16_t x720 = INT16_MIN;

    t179 = (x717==(x718<=(x719<=x720)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x721 = INT8_MIN;
	uint16_t x722 = UINT16_MAX;
	int64_t x723 = INT64_MIN;
	int32_t x724 = -1;
	volatile int32_t t180 = -41075;

    t180 = (x721==(x722<=(x723<=x724)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x725 = -667281981997220LL;
	uint16_t x726 = 516U;
	uint32_t x727 = 4404U;
	int16_t x728 = INT16_MAX;
	static int32_t t181 = 562065;

    t181 = (x725==(x726<=(x727<=x728)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x729 = -1;
	int64_t x730 = INT64_MAX;
	int16_t x731 = INT16_MAX;
	uint32_t x732 = 10U;
	volatile int32_t t182 = -279660379;

    t182 = (x729==(x730<=(x731<=x732)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x733 = 0LLU;
	int64_t x734 = INT64_MAX;
	uint32_t x736 = UINT32_MAX;
	volatile int32_t t183 = 3;

    t183 = (x733==(x734<=(x735<=x736)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x737 = UINT16_MAX;
	volatile uint64_t x738 = 1405901091090962LLU;
	int8_t x739 = 1;
	int16_t x740 = 1;
	volatile int32_t t184 = -50686;

    t184 = (x737==(x738<=(x739<=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x741 = 27829953370969LLU;
	int64_t x742 = INT64_MIN;
	int32_t x744 = INT32_MIN;
	int32_t t185 = 36421;

    t185 = (x741==(x742<=(x743<=x744)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x746 = INT8_MAX;
	static uint32_t x747 = UINT32_MAX;
	int16_t x748 = INT16_MIN;

    t186 = (x745==(x746<=(x747<=x748)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x749 = -1;
	uint32_t x750 = 184289182U;
	int8_t x751 = INT8_MIN;
	uint16_t x752 = 1U;
	static volatile int32_t t187 = 772336429;

    t187 = (x749==(x750<=(x751<=x752)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x753 = 106148U;
	int16_t x754 = 14;
	int16_t x755 = INT16_MIN;
	uint64_t x756 = UINT64_MAX;

    t188 = (x753==(x754<=(x755<=x756)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x757 = 1996980635U;
	static volatile int16_t x758 = -33;
	static int32_t x759 = 13211043;
	int64_t x760 = -1LL;
	int32_t t189 = -5006;

    t189 = (x757==(x758<=(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x761 = INT64_MAX;
	int8_t x762 = -1;
	int64_t x763 = -367636023427890LL;
	int32_t x764 = INT32_MIN;
	volatile int32_t t190 = -73644;

    t190 = (x761==(x762<=(x763<=x764)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x765 = INT16_MIN;
	volatile uint64_t x766 = UINT64_MAX;
	volatile uint32_t x768 = 13141537U;
	static volatile int32_t t191 = -133;

    t191 = (x765==(x766<=(x767<=x768)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x769 = -1;
	int64_t x771 = -1LL;
	uint16_t x772 = 365U;
	volatile int32_t t192 = 3;

    t192 = (x769==(x770<=(x771<=x772)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x773 = 872681044043LLU;
	int64_t x775 = 3493906685480994136LL;
	int32_t t193 = 39941740;

    t193 = (x773==(x774<=(x775<=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x778 = 0;
	static int32_t x779 = INT32_MIN;
	int64_t x780 = -1LL;

    t194 = (x777==(x778<=(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x782 = 101865330;
	static volatile int16_t x784 = -1;
	volatile int32_t t195 = -37042641;

    t195 = (x781==(x782<=(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = -1;
	static volatile int8_t x786 = 31;
	int8_t x787 = 4;
	int16_t x788 = -1;
	int32_t t196 = -3;

    t196 = (x785==(x786<=(x787<=x788)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x789 = INT16_MAX;
	int32_t x790 = INT32_MIN;
	int8_t x791 = INT8_MAX;
	int32_t x792 = INT32_MIN;
	int32_t t197 = 2512;

    t197 = (x789==(x790<=(x791<=x792)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x793 = INT16_MIN;
	int32_t x794 = INT32_MIN;
	int16_t x795 = INT16_MIN;

    t198 = (x793==(x794<=(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x797 = INT64_MIN;
	uint16_t x798 = 947U;
	int16_t x800 = INT16_MAX;
	int32_t t199 = -50834708;

    t199 = (x797==(x798<=(x799<=x800)));

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

