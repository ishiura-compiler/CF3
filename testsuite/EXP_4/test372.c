
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

volatile int32_t x7 = INT32_MAX;
int16_t x9 = INT16_MIN;
volatile int32_t x11 = -4089;
uint16_t x12 = 5U;
int32_t t2 = -4;
int16_t x13 = INT16_MAX;
static volatile uint64_t x16 = 4855456974751165088LLU;
volatile int32_t t3 = -1;
volatile int32_t t4 = -1;
int8_t x24 = INT8_MIN;
static int16_t x30 = -1;
volatile uint64_t x35 = UINT64_MAX;
volatile uint16_t x36 = 20U;
int32_t t8 = -556;
uint8_t x45 = 12U;
int16_t x52 = 171;
static uint8_t x69 = UINT8_MAX;
int16_t x76 = INT16_MAX;
volatile int32_t t19 = 2090059;
static uint32_t x87 = 2219U;
int32_t t20 = 6074163;
int8_t x98 = 1;
static int8_t x99 = -14;
int32_t x102 = INT32_MIN;
volatile int8_t x107 = INT8_MIN;
uint64_t x110 = 3LLU;
volatile int32_t t28 = 92;
static uint16_t x126 = UINT16_MAX;
static uint16_t x131 = 43U;
int32_t x134 = INT32_MIN;
int8_t x141 = INT8_MIN;
int16_t x143 = INT16_MIN;
uint64_t x148 = 1LLU;
int8_t x150 = -1;
int16_t x151 = INT16_MIN;
volatile int64_t x157 = -22LL;
int32_t x168 = INT32_MAX;
uint16_t x179 = 15U;
static uint16_t x185 = 24U;
static int8_t x186 = -4;
int8_t x200 = INT8_MIN;
static int8_t x201 = -1;
volatile int64_t x203 = 1965037966042065LL;
int16_t x213 = 10;
int8_t x220 = INT8_MIN;
int64_t x225 = INT64_MAX;
volatile uint8_t x227 = 46U;
int64_t x228 = 763525882513LL;
uint32_t x236 = 79U;
int32_t t48 = 29;
static uint8_t x237 = 5U;
volatile uint16_t x245 = UINT16_MAX;
uint16_t x247 = 1414U;
static volatile uint64_t x249 = 6345612737LLU;
uint32_t x259 = UINT32_MAX;
static int32_t x263 = INT32_MAX;
static int8_t x274 = INT8_MIN;
int32_t t58 = 0;
int32_t x281 = -1;
int64_t x286 = -1LL;
int8_t x289 = INT8_MIN;
static volatile int32_t t63 = 6;
int8_t x307 = INT8_MIN;
int32_t t64 = 1;
int8_t x326 = INT8_MIN;
int16_t x327 = 0;
int32_t t69 = 0;
int16_t x335 = -1;
uint8_t x336 = 0U;
int8_t x340 = INT8_MIN;
int8_t x341 = -1;
int16_t x359 = INT16_MIN;
int64_t x361 = INT64_MIN;
int8_t x368 = -27;
static volatile int32_t t79 = 407;
uint64_t x369 = 1809694LLU;
static int8_t x378 = INT8_MIN;
static volatile int32_t t82 = 0;
int8_t x382 = INT8_MIN;
static uint16_t x383 = 14U;
int32_t x399 = -1;
static uint64_t x403 = 867LLU;
uint16_t x404 = UINT16_MAX;
volatile int32_t t87 = -1;
int16_t x411 = INT16_MIN;
int64_t x420 = INT64_MAX;
static int32_t t90 = -485;
volatile int32_t t91 = -36156;
int32_t x436 = INT32_MAX;
static int32_t t96 = 16702;
int64_t x457 = INT64_MIN;
volatile uint16_t x461 = 2435U;
int16_t x465 = INT16_MAX;
int16_t x472 = INT16_MAX;
int32_t t101 = 1436947;
int32_t t102 = 3014;
uint64_t x482 = UINT64_MAX;
int64_t x484 = -53533916974734LL;
static int32_t t104 = 19;
static int32_t t105 = 685459028;
int64_t x498 = INT64_MIN;
uint8_t x500 = 4U;
int32_t t108 = -369836;
volatile int8_t x506 = -1;
int16_t x510 = INT16_MAX;
int32_t t112 = 51512397;
uint16_t x521 = 476U;
static volatile int32_t t113 = 16517;
int32_t x528 = 24;
uint32_t x537 = 11076U;
int32_t t117 = -594;
uint8_t x575 = 4U;
static volatile int32_t x577 = 144347187;
uint64_t x580 = 167872414LLU;
volatile int32_t t125 = -13319575;
volatile uint64_t x581 = 110284LLU;
static int16_t x582 = INT16_MIN;
int64_t x586 = 14891592685745580LL;
int32_t x588 = -1;
volatile int32_t t128 = 57;
int64_t x598 = INT64_MIN;
uint8_t x599 = 3U;
int8_t x604 = -2;
int8_t x608 = -1;
int64_t x610 = -62631845658146LL;
int16_t x614 = INT16_MIN;
int16_t x620 = -5;
volatile int32_t t135 = -1;
int64_t x621 = 4468621LL;
int16_t x622 = 340;
static int16_t x631 = -1;
static volatile int32_t x649 = -869;
int8_t x654 = INT8_MAX;
static volatile uint64_t x657 = 89919499621768712LLU;
static volatile uint64_t x662 = UINT64_MAX;
uint64_t x664 = 0LLU;
volatile int64_t x670 = -1LL;
static uint32_t x671 = 18U;
static uint16_t x676 = 393U;
static uint32_t x679 = UINT32_MAX;
static uint64_t x685 = 1634412496915992LLU;
static int64_t x687 = INT64_MIN;
int16_t x702 = 81;
int16_t x703 = -1;
int8_t x707 = INT8_MAX;
volatile int64_t x708 = -1LL;
static volatile int8_t x711 = INT8_MAX;
int64_t x715 = 983663LL;
int8_t x716 = INT8_MAX;
uint8_t x717 = 54U;
volatile uint16_t x718 = UINT16_MAX;
static volatile int32_t t154 = -113899;
uint32_t x731 = UINT32_MAX;
volatile int32_t t157 = -6977;
volatile uint16_t x733 = UINT16_MAX;
volatile int32_t t158 = 8;
int16_t x744 = INT16_MAX;
uint16_t x748 = 1U;
volatile int16_t x755 = 1402;
uint64_t x758 = 443141245109597947LLU;
volatile uint16_t x761 = 3709U;
static int64_t x763 = 1LL;
int8_t x771 = 0;
static int16_t x784 = -1;
int32_t t169 = 496;
volatile int32_t t170 = 446244090;
static int16_t x801 = INT16_MIN;
volatile int32_t t172 = 4662;
volatile int64_t x817 = 6139052729622112LL;
int32_t x824 = INT32_MAX;
static int32_t t177 = 62;
static volatile uint16_t x828 = UINT16_MAX;
int32_t x830 = -7;
volatile int32_t t179 = -7885156;
uint16_t x836 = UINT16_MAX;
static int8_t x841 = 0;
int16_t x846 = -1;
volatile int32_t t184 = 85;
volatile uint8_t x870 = 1U;
static int16_t x874 = -469;
int64_t x890 = INT64_MIN;
int64_t x896 = 5892750LL;
uint32_t x901 = UINT32_MAX;
volatile uint32_t x915 = 3908U;
int32_t x917 = 77627120;
volatile int8_t x921 = INT8_MAX;
int32_t t198 = 157786366;
uint64_t x928 = UINT64_MAX;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	volatile int64_t x2 = INT64_MAX;
	int16_t x3 = -6;
	volatile int16_t x4 = 826;
	static int32_t t0 = -26;

    t0 = (x1==(x2|(x3-x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 1287LLU;
	uint32_t x6 = 2U;
	uint32_t x8 = 141916U;
	int32_t t1 = -1341;

    t1 = (x5==(x6|(x7-x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x10 = -2931;

    t2 = (x9==(x10|(x11-x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x14 = 44U;
	volatile int8_t x15 = -1;

    t3 = (x13==(x14|(x15-x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	int32_t x18 = 651037;
	int16_t x19 = 663;
	volatile int8_t x20 = -54;

    t4 = (x17==(x18|(x19-x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 8750839763LL;
	volatile int32_t x22 = INT32_MAX;
	uint16_t x23 = UINT16_MAX;
	static int32_t t5 = -1;

    t5 = (x21==(x22|(x23-x24)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = 5;
	static volatile uint8_t x26 = 0U;
	volatile int8_t x27 = 1;
	int8_t x28 = -2;
	volatile int32_t t6 = 0;

    t6 = (x25==(x26|(x27-x28)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = -742153767587216LL;
	volatile int16_t x31 = INT16_MIN;
	volatile int32_t x32 = INT32_MIN;
	int32_t t7 = 2670947;

    t7 = (x29==(x30|(x31-x32)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 1;
	int32_t x34 = -1;

    t8 = (x33==(x34|(x35-x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x37 = INT16_MIN;
	volatile int64_t x38 = -1LL;
	int64_t x39 = INT64_MIN;
	static int32_t x40 = -1;
	int32_t t9 = 1;

    t9 = (x37==(x38|(x39-x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MIN;
	int32_t x42 = -1;
	static int32_t x43 = 1809;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = 2076459;

    t10 = (x41==(x42|(x43-x44)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x46 = -1;
	volatile int64_t x47 = INT64_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 66598;

    t11 = (x45==(x46|(x47-x48)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x49 = 278U;
	int16_t x50 = -3;
	volatile int16_t x51 = -125;
	int32_t t12 = 31906;

    t12 = (x49==(x50|(x51-x52)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MAX;
	int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t13 = -7702317;

    t13 = (x53==(x54|(x55-x56)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	int32_t x58 = 15;
	static uint16_t x59 = 4U;
	int16_t x60 = INT16_MAX;
	volatile int32_t t14 = -775517;

    t14 = (x57==(x58|(x59-x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = 16;
	int8_t x62 = 6;
	uint32_t x63 = 2181848U;
	volatile int32_t x64 = INT32_MAX;
	int32_t t15 = 1514899;

    t15 = (x61==(x62|(x63-x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MAX;
	int32_t x66 = INT32_MIN;
	volatile int32_t x67 = -1;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -141;

    t16 = (x65==(x66|(x67-x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = 97019195;

    t17 = (x69==(x70|(x71-x72)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x73 = UINT32_MAX;
	int64_t x74 = INT64_MAX;
	volatile int32_t x75 = 87;
	volatile int32_t t18 = 6;

    t18 = (x73==(x74|(x75-x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	int32_t x82 = INT32_MAX;
	int64_t x83 = -1LL;
	int16_t x84 = INT16_MIN;

    t19 = (x81==(x82|(x83-x84)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x85 = -1;
	uint8_t x86 = UINT8_MAX;
	int8_t x88 = -13;

    t20 = (x85==(x86|(x87-x88)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x89 = -12868;
	int64_t x90 = -39698988624337LL;
	uint8_t x91 = 25U;
	int8_t x92 = INT8_MIN;
	int32_t t21 = -4755795;

    t21 = (x89==(x90|(x91-x92)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	volatile int64_t x94 = -1LL;
	uint8_t x95 = 92U;
	int64_t x96 = -445606934580571287LL;
	int32_t t22 = 13;

    t22 = (x93==(x94|(x95-x96)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = 6U;
	static int32_t x100 = INT32_MIN;
	volatile int32_t t23 = 4377;

    t23 = (x97==(x98|(x99-x100)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x101 = -1;
	uint8_t x103 = 1U;
	volatile int16_t x104 = -1;
	int32_t t24 = 7424864;

    t24 = (x101==(x102|(x103-x104)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x105 = UINT8_MAX;
	int8_t x106 = 0;
	int8_t x108 = 1;
	volatile int32_t t25 = 837954;

    t25 = (x105==(x106|(x107-x108)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x109 = INT64_MAX;
	int8_t x111 = INT8_MIN;
	static int16_t x112 = INT16_MIN;
	int32_t t26 = -83;

    t26 = (x109==(x110|(x111-x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MIN;
	static volatile uint16_t x114 = 2198U;
	volatile int64_t x115 = 14908LL;
	uint8_t x116 = 63U;
	int32_t t27 = 28331675;

    t27 = (x113==(x114|(x115-x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x117 = INT16_MIN;
	int16_t x118 = INT16_MIN;
	uint16_t x119 = UINT16_MAX;
	volatile int8_t x120 = INT8_MIN;

    t28 = (x117==(x118|(x119-x120)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = INT32_MIN;
	uint8_t x127 = 1U;
	volatile int16_t x128 = INT16_MIN;
	volatile int32_t t29 = 120668586;

    t29 = (x125==(x126|(x127-x128)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = 197207847LL;
	uint16_t x130 = 24373U;
	static volatile int8_t x132 = INT8_MIN;
	volatile int32_t t30 = -14084922;

    t30 = (x129==(x130|(x131-x132)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint32_t x133 = 4853U;
	int8_t x135 = INT8_MIN;
	static uint32_t x136 = 27711U;
	volatile int32_t t31 = 1;

    t31 = (x133==(x134|(x135-x136)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x142 = INT16_MAX;
	static int8_t x144 = 56;
	volatile int32_t t32 = -93814;

    t32 = (x141==(x142|(x143-x144)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MAX;
	static int8_t x147 = -9;
	int32_t t33 = -1;

    t33 = (x145==(x146|(x147-x148)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x149 = -73318104LL;
	uint8_t x152 = 24U;
	int32_t t34 = 500269;

    t34 = (x149==(x150|(x151-x152)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x158 = 8110598;
	int16_t x159 = -13699;
	int8_t x160 = -2;
	volatile int32_t t35 = -191318872;

    t35 = (x157==(x158|(x159-x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x165 = UINT8_MAX;
	int8_t x166 = 1;
	static volatile uint32_t x167 = 698111U;
	int32_t t36 = 1000;

    t36 = (x165==(x166|(x167-x168)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x169 = INT8_MIN;
	uint64_t x170 = 12980767768LLU;
	static int32_t x171 = 3147;
	int8_t x172 = INT8_MIN;
	volatile int32_t t37 = -52352980;

    t37 = (x169==(x170|(x171-x172)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x177 = 20411U;
	int8_t x178 = INT8_MAX;
	static uint16_t x180 = 10U;
	int32_t t38 = 0;

    t38 = (x177==(x178|(x179-x180)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	static int32_t x183 = INT32_MIN;
	int16_t x184 = -1;
	static volatile int32_t t39 = -4107;

    t39 = (x181==(x182|(x183-x184)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x187 = -1;
	int8_t x188 = INT8_MIN;
	int32_t t40 = 984256;

    t40 = (x185==(x186|(x187-x188)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x197 = INT64_MIN;
	volatile int64_t x198 = -671686191517419271LL;
	static int16_t x199 = -1;
	int32_t t41 = 22730;

    t41 = (x197==(x198|(x199-x200)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x202 = INT32_MIN;
	int32_t x204 = INT32_MIN;
	static volatile int32_t t42 = 992246111;

    t42 = (x201==(x202|(x203-x204)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x205 = 10LLU;
	int8_t x206 = -1;
	int64_t x207 = -1LL;
	static int16_t x208 = 54;
	volatile int32_t t43 = -2181337;

    t43 = (x205==(x206|(x207-x208)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x214 = INT32_MIN;
	static int32_t x215 = INT32_MAX;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t44 = -92007289;

    t44 = (x213==(x214|(x215-x216)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x217 = 1U;
	uint16_t x218 = UINT16_MAX;
	uint16_t x219 = 243U;
	static int32_t t45 = -10605;

    t45 = (x217==(x218|(x219-x220)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x226 = INT16_MIN;
	static volatile int32_t t46 = -20625;

    t46 = (x225==(x226|(x227-x228)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x229 = 276;
	int32_t x230 = -139515;
	static uint16_t x231 = 728U;
	uint8_t x232 = 7U;
	volatile int32_t t47 = 15;

    t47 = (x229==(x230|(x231-x232)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x233 = INT32_MIN;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = 18128U;

    t48 = (x233==(x234|(x235-x236)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x238 = -2LL;
	uint64_t x239 = 8012651178722LLU;
	int32_t x240 = 67;
	volatile int32_t t49 = -1287162;

    t49 = (x237==(x238|(x239-x240)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = 20U;
	uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t50 = -242;

    t50 = (x241==(x242|(x243-x244)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x246 = 34;
	int32_t x248 = -1;
	volatile int32_t t51 = 7;

    t51 = (x245==(x246|(x247-x248)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x250 = -29;
	int8_t x251 = -1;
	uint32_t x252 = 698U;
	int32_t t52 = 901;

    t52 = (x249==(x250|(x251-x252)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x253 = 89;
	uint8_t x254 = UINT8_MAX;
	volatile uint8_t x255 = UINT8_MAX;
	int8_t x256 = -1;
	int32_t t53 = -2;

    t53 = (x253==(x254|(x255-x256)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x257 = 27U;
	uint64_t x258 = UINT64_MAX;
	volatile int8_t x260 = INT8_MIN;
	int32_t t54 = -47744151;

    t54 = (x257==(x258|(x259-x260)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x261 = 3U;
	int8_t x262 = INT8_MAX;
	uint16_t x264 = 2U;
	volatile int32_t t55 = -8052;

    t55 = (x261==(x262|(x263-x264)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x265 = INT32_MAX;
	int16_t x266 = INT16_MIN;
	static uint8_t x267 = UINT8_MAX;
	uint64_t x268 = 303LLU;
	int32_t t56 = 14890401;

    t56 = (x265==(x266|(x267-x268)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = -1;
	uint64_t x270 = 27738LLU;
	volatile uint64_t x271 = UINT64_MAX;
	static uint64_t x272 = 289842040LLU;
	int32_t t57 = 26;

    t57 = (x269==(x270|(x271-x272)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x273 = INT8_MAX;
	int64_t x275 = -238676LL;
	static int16_t x276 = INT16_MAX;

    t58 = (x273==(x274|(x275-x276)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x282 = INT8_MIN;
	int8_t x283 = -1;
	int16_t x284 = INT16_MIN;
	volatile int32_t t59 = -952100645;

    t59 = (x281==(x282|(x283-x284)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x285 = UINT64_MAX;
	int16_t x287 = -168;
	volatile uint32_t x288 = 203934044U;
	static int32_t t60 = 44889688;

    t60 = (x285==(x286|(x287-x288)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x290 = -1;
	int16_t x291 = 37;
	volatile uint32_t x292 = 47557267U;
	volatile int32_t t61 = 719;

    t61 = (x289==(x290|(x291-x292)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x293 = -1;
	int64_t x294 = -20710159LL;
	int8_t x295 = -57;
	int16_t x296 = INT16_MIN;
	int32_t t62 = 1;

    t62 = (x293==(x294|(x295-x296)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x297 = 2;
	volatile int64_t x298 = -1LL;
	int8_t x299 = INT8_MAX;
	int32_t x300 = INT32_MAX;

    t63 = (x297==(x298|(x299-x300)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x305 = UINT8_MAX;
	int16_t x306 = -289;
	static volatile int16_t x308 = INT16_MIN;

    t64 = (x305==(x306|(x307-x308)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x309 = INT32_MIN;
	volatile int16_t x310 = INT16_MAX;
	uint8_t x311 = 45U;
	int32_t x312 = -1;
	int32_t t65 = -70319;

    t65 = (x309==(x310|(x311-x312)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x313 = -1LL;
	uint32_t x314 = 421U;
	volatile int16_t x315 = INT16_MAX;
	int8_t x316 = -21;
	int32_t t66 = 1;

    t66 = (x313==(x314|(x315-x316)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x317 = -1;
	volatile int16_t x318 = -1;
	uint64_t x319 = UINT64_MAX;
	int8_t x320 = INT8_MIN;
	int32_t t67 = 0;

    t67 = (x317==(x318|(x319-x320)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x321 = 22836U;
	uint16_t x322 = UINT16_MAX;
	int32_t x323 = -1;
	int8_t x324 = -11;
	int32_t t68 = 672661799;

    t68 = (x321==(x322|(x323-x324)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x325 = UINT16_MAX;
	volatile uint64_t x328 = 2169975926276639885LLU;

    t69 = (x325==(x326|(x327-x328)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x329 = 884U;
	static int8_t x330 = INT8_MAX;
	int64_t x331 = INT64_MAX;
	uint32_t x332 = UINT32_MAX;
	int32_t t70 = 252297003;

    t70 = (x329==(x330|(x331-x332)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x333 = 3496027LL;
	int32_t x334 = -71409583;
	int32_t t71 = 11031794;

    t71 = (x333==(x334|(x335-x336)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int8_t x337 = INT8_MAX;
	static volatile int8_t x338 = -1;
	volatile int8_t x339 = -1;
	int32_t t72 = 234816;

    t72 = (x337==(x338|(x339-x340)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x342 = -10;
	volatile int32_t x343 = INT32_MIN;
	uint64_t x344 = 1516351052768547LLU;
	volatile int32_t t73 = 237307;

    t73 = (x341==(x342|(x343-x344)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = INT8_MAX;
	int8_t x346 = INT8_MAX;
	int16_t x347 = -8;
	static int16_t x348 = INT16_MIN;
	int32_t t74 = 224622869;

    t74 = (x345==(x346|(x347-x348)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x349 = -1;
	static volatile int8_t x350 = -3;
	int32_t x351 = -6611;
	int32_t x352 = INT32_MIN;
	int32_t t75 = -92258;

    t75 = (x349==(x350|(x351-x352)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x353 = 565;
	uint16_t x354 = 41U;
	int8_t x355 = -7;
	volatile int16_t x356 = -1;
	volatile int32_t t76 = -366320;

    t76 = (x353==(x354|(x355-x356)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x357 = -826943457LL;
	uint8_t x358 = UINT8_MAX;
	volatile int16_t x360 = 2;
	volatile int32_t t77 = -1989121;

    t77 = (x357==(x358|(x359-x360)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x362 = INT16_MAX;
	uint16_t x363 = 22U;
	int8_t x364 = -17;
	int32_t t78 = -54177384;

    t78 = (x361==(x362|(x363-x364)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x365 = -1;
	int64_t x366 = 1313494021016857LL;
	int32_t x367 = -2075873;

    t79 = (x365==(x366|(x367-x368)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x370 = UINT64_MAX;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t80 = -1838729;

    t80 = (x369==(x370|(x371-x372)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x373 = -1;
	static int8_t x374 = INT8_MAX;
	volatile int8_t x375 = -4;
	int8_t x376 = INT8_MIN;
	static int32_t t81 = 62444;

    t81 = (x373==(x374|(x375-x376)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint8_t x377 = 10U;
	volatile uint8_t x379 = UINT8_MAX;
	uint16_t x380 = UINT16_MAX;

    t82 = (x377==(x378|(x379-x380)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x381 = 54804274092686627LL;
	volatile uint16_t x384 = UINT16_MAX;
	volatile int32_t t83 = -148192;

    t83 = (x381==(x382|(x383-x384)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x393 = -3962;
	static int8_t x394 = INT8_MIN;
	uint64_t x395 = 21019LLU;
	int32_t x396 = INT32_MIN;
	volatile int32_t t84 = -228609321;

    t84 = (x393==(x394|(x395-x396)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x397 = INT8_MAX;
	int32_t x398 = -1;
	int64_t x400 = INT64_MIN;
	int32_t t85 = 1;

    t85 = (x397==(x398|(x399-x400)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x401 = 269U;
	volatile int32_t x402 = -8;
	volatile int32_t t86 = 574588;

    t86 = (x401==(x402|(x403-x404)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x405 = INT8_MIN;
	uint64_t x406 = 92683590298LLU;
	int32_t x407 = 2878;
	volatile uint8_t x408 = UINT8_MAX;

    t87 = (x405==(x406|(x407-x408)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x409 = -1;
	uint32_t x410 = UINT32_MAX;
	uint8_t x412 = 0U;
	int32_t t88 = 5256;

    t88 = (x409==(x410|(x411-x412)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x413 = INT16_MIN;
	volatile int8_t x414 = INT8_MAX;
	static int32_t x415 = -4608;
	int16_t x416 = -1;
	int32_t t89 = -239;

    t89 = (x413==(x414|(x415-x416)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x417 = 77430663542LLU;
	int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;

    t90 = (x417==(x418|(x419-x420)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x425 = INT16_MIN;
	static int8_t x426 = INT8_MAX;
	int64_t x427 = -38939544095368106LL;
	int32_t x428 = -1;

    t91 = (x425==(x426|(x427-x428)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x433 = 5U;
	static uint16_t x434 = UINT16_MAX;
	int32_t x435 = -1;
	volatile int32_t t92 = -563064;

    t92 = (x433==(x434|(x435-x436)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x437 = -1LL;
	uint16_t x438 = 867U;
	int32_t x439 = INT32_MAX;
	static volatile int16_t x440 = 10529;
	int32_t t93 = 0;

    t93 = (x437==(x438|(x439-x440)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x441 = -209;
	static int16_t x442 = INT16_MAX;
	int32_t x443 = -1;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t94 = 1544338;

    t94 = (x441==(x442|(x443-x444)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x445 = INT8_MAX;
	static int16_t x446 = -1;
	int32_t x447 = 31660;
	uint16_t x448 = 20U;
	int32_t t95 = 76108601;

    t95 = (x445==(x446|(x447-x448)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x449 = 5377U;
	int32_t x450 = -6243635;
	int32_t x451 = 27725;
	int8_t x452 = INT8_MIN;

    t96 = (x449==(x450|(x451-x452)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x453 = 0U;
	int32_t x454 = 104281;
	static uint8_t x455 = UINT8_MAX;
	static int8_t x456 = INT8_MIN;
	static volatile int32_t t97 = -15;

    t97 = (x453==(x454|(x455-x456)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x458 = -10747065LL;
	int8_t x459 = 1;
	int32_t x460 = -1;
	volatile int32_t t98 = -55;

    t98 = (x457==(x458|(x459-x460)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x462 = 22847U;
	int8_t x463 = -1;
	static uint8_t x464 = UINT8_MAX;
	static int32_t t99 = -26;

    t99 = (x461==(x462|(x463-x464)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x466 = 3731191;
	static int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MIN;
	volatile int32_t t100 = 11416;

    t100 = (x465==(x466|(x467-x468)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x469 = 7;
	volatile int64_t x470 = -3502660LL;
	volatile int32_t x471 = 0;

    t101 = (x469==(x470|(x471-x472)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x473 = UINT8_MAX;
	static int32_t x474 = 5157332;
	int8_t x475 = 0;
	volatile int8_t x476 = INT8_MAX;

    t102 = (x473==(x474|(x475-x476)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x477 = 15;
	int32_t x478 = -1;
	int64_t x479 = INT64_MIN;
	int32_t x480 = -505;
	static volatile int32_t t103 = 33371;

    t103 = (x477==(x478|(x479-x480)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x481 = -7320510724LL;
	int64_t x483 = -1LL;

    t104 = (x481==(x482|(x483-x484)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x485 = INT16_MAX;
	volatile int16_t x486 = INT16_MIN;
	int16_t x487 = -1;
	int64_t x488 = -681984LL;

    t105 = (x485==(x486|(x487-x488)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x489 = UINT16_MAX;
	uint16_t x490 = UINT16_MAX;
	volatile uint32_t x491 = 1710U;
	uint8_t x492 = 21U;
	volatile int32_t t106 = 449;

    t106 = (x489==(x490|(x491-x492)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x497 = UINT32_MAX;
	volatile int64_t x499 = 2044118LL;
	static int32_t t107 = 427390;

    t107 = (x497==(x498|(x499-x500)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x501 = INT32_MAX;
	volatile int16_t x502 = 1684;
	int8_t x503 = INT8_MIN;
	static int32_t x504 = INT32_MIN;

    t108 = (x501==(x502|(x503-x504)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x505 = INT32_MIN;
	static int16_t x507 = 40;
	int64_t x508 = INT64_MAX;
	int32_t t109 = -26;

    t109 = (x505==(x506|(x507-x508)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x509 = -1;
	int8_t x511 = -1;
	uint16_t x512 = 53U;
	static int32_t t110 = 11081961;

    t110 = (x509==(x510|(x511-x512)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x513 = 12874747LLU;
	int32_t x514 = -1617580;
	int8_t x515 = -1;
	uint16_t x516 = 5638U;
	volatile int32_t t111 = -29771747;

    t111 = (x513==(x514|(x515-x516)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x517 = -1;
	static uint64_t x518 = 164169635LLU;
	static uint32_t x519 = UINT32_MAX;
	int8_t x520 = INT8_MIN;

    t112 = (x517==(x518|(x519-x520)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x522 = -1;
	int32_t x523 = -1;
	static uint16_t x524 = UINT16_MAX;

    t113 = (x521==(x522|(x523-x524)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x525 = 190LLU;
	int16_t x526 = INT16_MAX;
	int8_t x527 = 19;
	volatile int32_t t114 = 455;

    t114 = (x525==(x526|(x527-x528)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x529 = INT16_MIN;
	uint32_t x530 = 120904060U;
	static int16_t x531 = -1;
	uint8_t x532 = 0U;
	volatile int32_t t115 = 7330886;

    t115 = (x529==(x530|(x531-x532)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x533 = -220LL;
	int16_t x534 = -1;
	int8_t x535 = INT8_MIN;
	static uint32_t x536 = 4U;
	volatile int32_t t116 = 0;

    t116 = (x533==(x534|(x535-x536)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x538 = 1U;
	uint64_t x539 = UINT64_MAX;
	volatile int32_t x540 = -78882777;

    t117 = (x537==(x538|(x539-x540)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x541 = INT16_MAX;
	int8_t x542 = -1;
	int32_t x543 = INT32_MIN;
	uint32_t x544 = 1U;
	volatile int32_t t118 = -27473471;

    t118 = (x541==(x542|(x543-x544)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x545 = INT32_MAX;
	int64_t x546 = 16857LL;
	int64_t x547 = INT64_MIN;
	int8_t x548 = INT8_MIN;
	volatile int32_t t119 = -917281;

    t119 = (x545==(x546|(x547-x548)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x549 = 42136611LL;
	int32_t x550 = INT32_MAX;
	volatile uint16_t x551 = UINT16_MAX;
	static int8_t x552 = 1;
	int32_t t120 = -148;

    t120 = (x549==(x550|(x551-x552)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x553 = INT32_MAX;
	volatile uint64_t x554 = UINT64_MAX;
	int32_t x555 = INT32_MAX;
	volatile int64_t x556 = INT64_MAX;
	volatile int32_t t121 = -32205989;

    t121 = (x553==(x554|(x555-x556)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x561 = 16017;
	int64_t x562 = 99288512859129LL;
	volatile int8_t x563 = -3;
	static int32_t x564 = 733747668;
	volatile int32_t t122 = -27;

    t122 = (x561==(x562|(x563-x564)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x569 = -1LL;
	uint64_t x570 = 82140453902794LLU;
	int8_t x571 = -11;
	static int64_t x572 = -1LL;
	volatile int32_t t123 = 54632;

    t123 = (x569==(x570|(x571-x572)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x573 = INT8_MIN;
	static int16_t x574 = -7;
	int8_t x576 = -1;
	int32_t t124 = -71908889;

    t124 = (x573==(x574|(x575-x576)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x578 = 42581843101490LLU;
	static uint64_t x579 = UINT64_MAX;

    t125 = (x577==(x578|(x579-x580)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x583 = INT32_MIN;
	static int32_t x584 = -1;
	volatile int32_t t126 = 1076;

    t126 = (x581==(x582|(x583-x584)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x585 = -233;
	uint64_t x587 = 4299LLU;
	int32_t t127 = 14620;

    t127 = (x585==(x586|(x587-x588)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x589 = INT16_MIN;
	static uint8_t x590 = 0U;
	volatile int8_t x591 = -1;
	volatile uint32_t x592 = 756434669U;

    t128 = (x589==(x590|(x591-x592)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x593 = -2090443713182827LL;
	int16_t x594 = -1;
	uint8_t x595 = 15U;
	int16_t x596 = -424;
	static volatile int32_t t129 = -1;

    t129 = (x593==(x594|(x595-x596)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x597 = INT16_MIN;
	int32_t x600 = INT32_MAX;
	volatile int32_t t130 = 5;

    t130 = (x597==(x598|(x599-x600)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x601 = 1;
	static volatile int32_t x602 = -1;
	int16_t x603 = -1;
	int32_t t131 = 13842;

    t131 = (x601==(x602|(x603-x604)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint8_t x605 = 1U;
	int16_t x606 = -656;
	int8_t x607 = INT8_MIN;
	int32_t t132 = 11322431;

    t132 = (x605==(x606|(x607-x608)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x609 = UINT16_MAX;
	volatile int16_t x611 = 4019;
	volatile int8_t x612 = INT8_MIN;
	static volatile int32_t t133 = -6541250;

    t133 = (x609==(x610|(x611-x612)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x613 = -3;
	uint8_t x615 = 14U;
	int16_t x616 = INT16_MAX;
	int32_t t134 = 77;

    t134 = (x613==(x614|(x615-x616)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x617 = 2028;
	static int16_t x618 = -23;
	static int64_t x619 = INT64_MIN;

    t135 = (x617==(x618|(x619-x620)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x623 = INT64_MAX;
	uint32_t x624 = UINT32_MAX;
	int32_t t136 = 22;

    t136 = (x621==(x622|(x623-x624)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x629 = INT64_MIN;
	int8_t x630 = INT8_MIN;
	int64_t x632 = 38930860379LL;
	int32_t t137 = -2;

    t137 = (x629==(x630|(x631-x632)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x637 = INT16_MIN;
	static int16_t x638 = INT16_MAX;
	int32_t x639 = -5;
	uint8_t x640 = 53U;
	int32_t t138 = 657;

    t138 = (x637==(x638|(x639-x640)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x641 = 20;
	uint32_t x642 = 5508598U;
	uint32_t x643 = 7130522U;
	uint16_t x644 = 19U;
	volatile int32_t t139 = 155177843;

    t139 = (x641==(x642|(x643-x644)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x650 = INT8_MAX;
	int32_t x651 = INT32_MIN;
	static int16_t x652 = INT16_MIN;
	int32_t t140 = -45658;

    t140 = (x649==(x650|(x651-x652)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x653 = 5493U;
	volatile int8_t x655 = INT8_MIN;
	volatile int16_t x656 = 6;
	static int32_t t141 = 255474037;

    t141 = (x653==(x654|(x655-x656)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x658 = 13236;
	int64_t x659 = INT64_MIN;
	static int64_t x660 = -1LL;
	volatile int32_t t142 = 1567482;

    t142 = (x657==(x658|(x659-x660)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x661 = UINT32_MAX;
	int32_t x663 = INT32_MIN;
	int32_t t143 = -325518948;

    t143 = (x661==(x662|(x663-x664)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x665 = -9865809720889474LL;
	uint64_t x666 = 1LLU;
	uint8_t x667 = 0U;
	int64_t x668 = INT64_MAX;
	static int32_t t144 = -515;

    t144 = (x665==(x666|(x667-x668)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x669 = 1032365992LLU;
	static int16_t x672 = -3560;
	static volatile int32_t t145 = -17158;

    t145 = (x669==(x670|(x671-x672)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x673 = 101796964U;
	uint16_t x674 = 31U;
	int16_t x675 = -1;
	int32_t t146 = 725;

    t146 = (x673==(x674|(x675-x676)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x677 = -5;
	volatile uint32_t x678 = UINT32_MAX;
	uint32_t x680 = 987515543U;
	int32_t t147 = 324;

    t147 = (x677==(x678|(x679-x680)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x686 = 0;
	int64_t x688 = INT64_MIN;
	volatile int32_t t148 = -87529;

    t148 = (x685==(x686|(x687-x688)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x697 = 44285U;
	static volatile int16_t x698 = INT16_MAX;
	int8_t x699 = INT8_MIN;
	int8_t x700 = INT8_MAX;
	static volatile int32_t t149 = 221802805;

    t149 = (x697==(x698|(x699-x700)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x701 = 963U;
	int16_t x704 = INT16_MAX;
	int32_t t150 = -651591;

    t150 = (x701==(x702|(x703-x704)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x705 = -1;
	volatile int16_t x706 = 12;
	volatile int32_t t151 = 1317;

    t151 = (x705==(x706|(x707-x708)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x709 = -5;
	volatile int32_t x710 = INT32_MIN;
	uint32_t x712 = 355658U;
	int32_t t152 = 11177866;

    t152 = (x709==(x710|(x711-x712)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x713 = UINT8_MAX;
	int16_t x714 = -23;
	volatile int32_t t153 = 43374;

    t153 = (x713==(x714|(x715-x716)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x719 = INT16_MIN;
	static uint8_t x720 = 54U;

    t154 = (x717==(x718|(x719-x720)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x721 = INT32_MAX;
	int16_t x722 = INT16_MAX;
	int64_t x723 = -866466790617045LL;
	int32_t x724 = INT32_MAX;
	volatile int32_t t155 = -826;

    t155 = (x721==(x722|(x723-x724)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x725 = 29902LLU;
	int32_t x726 = -1;
	int16_t x727 = 1;
	int8_t x728 = -5;
	int32_t t156 = 34217;

    t156 = (x725==(x726|(x727-x728)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x729 = INT64_MAX;
	static int64_t x730 = INT64_MAX;
	volatile int8_t x732 = INT8_MAX;

    t157 = (x729==(x730|(x731-x732)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x734 = INT8_MIN;
	int8_t x735 = 6;
	int16_t x736 = -1;

    t158 = (x733==(x734|(x735-x736)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint64_t x741 = UINT64_MAX;
	uint8_t x742 = 17U;
	uint32_t x743 = UINT32_MAX;
	int32_t t159 = -6914;

    t159 = (x741==(x742|(x743-x744)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x745 = UINT32_MAX;
	static uint16_t x746 = 7114U;
	static int8_t x747 = INT8_MIN;
	volatile int32_t t160 = -437358656;

    t160 = (x745==(x746|(x747-x748)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x749 = 1984U;
	int32_t x750 = 59;
	int8_t x751 = INT8_MAX;
	static uint16_t x752 = 122U;
	int32_t t161 = -512601;

    t161 = (x749==(x750|(x751-x752)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x753 = 3LL;
	int8_t x754 = -1;
	uint32_t x756 = 230U;
	static int32_t t162 = 96697563;

    t162 = (x753==(x754|(x755-x756)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile uint16_t x757 = UINT16_MAX;
	uint32_t x759 = 5380591U;
	static uint64_t x760 = UINT64_MAX;
	volatile int32_t t163 = 821411894;

    t163 = (x757==(x758|(x759-x760)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x762 = INT64_MIN;
	uint16_t x764 = 3513U;
	volatile int32_t t164 = 46631407;

    t164 = (x761==(x762|(x763-x764)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint8_t x765 = UINT8_MAX;
	int32_t x766 = INT32_MAX;
	volatile int8_t x767 = INT8_MIN;
	int16_t x768 = INT16_MIN;
	int32_t t165 = -252811;

    t165 = (x765==(x766|(x767-x768)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x769 = -1;
	uint16_t x770 = 9456U;
	int8_t x772 = -1;
	volatile int32_t t166 = -4627;

    t166 = (x769==(x770|(x771-x772)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x773 = INT8_MAX;
	int8_t x774 = INT8_MIN;
	int8_t x775 = INT8_MIN;
	int16_t x776 = -228;
	static volatile int32_t t167 = -238395812;

    t167 = (x773==(x774|(x775-x776)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x777 = -1LL;
	uint16_t x778 = 22U;
	volatile uint64_t x779 = 187913301260170LLU;
	uint8_t x780 = UINT8_MAX;
	int32_t t168 = -1634435;

    t168 = (x777==(x778|(x779-x780)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x781 = 4U;
	static uint16_t x782 = 48U;
	int64_t x783 = 17033285LL;

    t169 = (x781==(x782|(x783-x784)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x785 = INT8_MAX;
	int16_t x786 = INT16_MIN;
	int8_t x787 = INT8_MIN;
	volatile int8_t x788 = -3;

    t170 = (x785==(x786|(x787-x788)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int8_t x793 = INT8_MIN;
	int64_t x794 = -1LL;
	volatile int16_t x795 = -1;
	static int16_t x796 = INT16_MIN;
	static volatile int32_t t171 = 27708;

    t171 = (x793==(x794|(x795-x796)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x802 = INT64_MAX;
	int16_t x803 = INT16_MAX;
	static uint8_t x804 = 1U;

    t172 = (x801==(x802|(x803-x804)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x805 = -32;
	int64_t x806 = -1LL;
	uint8_t x807 = UINT8_MAX;
	int32_t x808 = INT32_MAX;
	int32_t t173 = -2596858;

    t173 = (x805==(x806|(x807-x808)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x809 = UINT8_MAX;
	int8_t x810 = INT8_MIN;
	uint32_t x811 = 1U;
	static int8_t x812 = 22;
	int32_t t174 = 848828296;

    t174 = (x809==(x810|(x811-x812)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x813 = -1;
	volatile int8_t x814 = -1;
	uint32_t x815 = UINT32_MAX;
	static int8_t x816 = INT8_MAX;
	int32_t t175 = -23481728;

    t175 = (x813==(x814|(x815-x816)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint64_t x818 = UINT64_MAX;
	static volatile uint32_t x819 = 10578823U;
	volatile int64_t x820 = INT64_MAX;
	int32_t t176 = -6195891;

    t176 = (x817==(x818|(x819-x820)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x821 = INT32_MIN;
	int16_t x822 = -7;
	volatile int8_t x823 = INT8_MAX;

    t177 = (x821==(x822|(x823-x824)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x825 = -1LL;
	static uint8_t x826 = 112U;
	int8_t x827 = INT8_MAX;
	int32_t t178 = -88647826;

    t178 = (x825==(x826|(x827-x828)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x829 = -1708441339896095313LL;
	int16_t x831 = -54;
	uint64_t x832 = 3267116778392835566LLU;

    t179 = (x829==(x830|(x831-x832)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x833 = -1LL;
	int16_t x834 = INT16_MIN;
	uint32_t x835 = 493U;
	int32_t t180 = -82;

    t180 = (x833==(x834|(x835-x836)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x842 = 307146U;
	static volatile int64_t x843 = -1LL;
	volatile uint64_t x844 = 127610LLU;
	int32_t t181 = 1;

    t181 = (x841==(x842|(x843-x844)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x845 = 108LL;
	volatile int16_t x847 = -1;
	volatile int8_t x848 = INT8_MIN;
	volatile int32_t t182 = 13818038;

    t182 = (x845==(x846|(x847-x848)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x853 = 83046947997973LLU;
	uint16_t x854 = UINT16_MAX;
	volatile int8_t x855 = -3;
	static int16_t x856 = -1;
	volatile int32_t t183 = -42053014;

    t183 = (x853==(x854|(x855-x856)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x861 = 6U;
	int16_t x862 = -372;
	int64_t x863 = INT64_MAX;
	int64_t x864 = 28LL;

    t184 = (x861==(x862|(x863-x864)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x865 = INT16_MIN;
	static int8_t x866 = INT8_MIN;
	volatile int32_t x867 = INT32_MIN;
	int32_t x868 = INT32_MIN;
	static volatile int32_t t185 = 683509861;

    t185 = (x865==(x866|(x867-x868)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x869 = INT32_MIN;
	static uint64_t x871 = 1086052477704LLU;
	int32_t x872 = INT32_MIN;
	int32_t t186 = -83853268;

    t186 = (x869==(x870|(x871-x872)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x873 = INT64_MAX;
	uint16_t x875 = UINT16_MAX;
	uint16_t x876 = 42U;
	int32_t t187 = 3291;

    t187 = (x873==(x874|(x875-x876)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x877 = 1;
	uint64_t x878 = 1278656996422080LLU;
	uint64_t x879 = 33887791084576387LLU;
	uint16_t x880 = 186U;
	static volatile int32_t t188 = -40043;

    t188 = (x877==(x878|(x879-x880)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x881 = 1473622104696LLU;
	volatile int64_t x882 = INT64_MIN;
	int32_t x883 = -1;
	static int8_t x884 = -28;
	int32_t t189 = -324;

    t189 = (x881==(x882|(x883-x884)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x885 = 969032719;
	uint16_t x886 = 1414U;
	volatile int32_t x887 = -204;
	int8_t x888 = 4;
	volatile int32_t t190 = 54317;

    t190 = (x885==(x886|(x887-x888)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x889 = 92105218455730LLU;
	volatile int64_t x891 = -128385LL;
	int32_t x892 = INT32_MIN;
	int32_t t191 = -51467759;

    t191 = (x889==(x890|(x891-x892)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x893 = INT32_MIN;
	uint8_t x894 = UINT8_MAX;
	static volatile uint16_t x895 = 29158U;
	int32_t t192 = -1963;

    t192 = (x893==(x894|(x895-x896)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x897 = UINT64_MAX;
	int32_t x898 = -115064;
	volatile uint8_t x899 = 2U;
	static int32_t x900 = -40427;
	volatile int32_t t193 = 1;

    t193 = (x897==(x898|(x899-x900)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x902 = 793445LL;
	static int32_t x903 = INT32_MIN;
	volatile int64_t x904 = 275LL;
	volatile int32_t t194 = -3;

    t194 = (x901==(x902|(x903-x904)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x905 = INT16_MAX;
	volatile int16_t x906 = -1660;
	volatile int8_t x907 = INT8_MIN;
	int8_t x908 = 1;
	int32_t t195 = -7;

    t195 = (x905==(x906|(x907-x908)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x913 = UINT8_MAX;
	int32_t x914 = 1;
	int64_t x916 = -379692360721LL;
	volatile int32_t t196 = 0;

    t196 = (x913==(x914|(x915-x916)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x918 = 13082326U;
	int16_t x919 = INT16_MIN;
	int8_t x920 = INT8_MIN;
	int32_t t197 = 308259;

    t197 = (x917==(x918|(x919-x920)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x922 = 78LL;
	volatile int32_t x923 = INT32_MAX;
	uint8_t x924 = UINT8_MAX;

    t198 = (x921==(x922|(x923-x924)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x925 = 0;
	int32_t x926 = -623;
	static int32_t x927 = INT32_MAX;
	volatile int32_t t199 = 9;

    t199 = (x925==(x926|(x927-x928)));

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

