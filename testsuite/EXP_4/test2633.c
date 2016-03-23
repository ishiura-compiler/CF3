
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

static uint16_t x10 = 458U;
volatile int64_t x11 = INT64_MIN;
volatile int16_t x19 = -1;
volatile int8_t x28 = INT8_MIN;
static int64_t x34 = INT64_MIN;
int8_t x37 = INT8_MIN;
int8_t x38 = -8;
int8_t x40 = 35;
volatile uint64_t x49 = 216LLU;
int32_t x51 = INT32_MIN;
int64_t x55 = -1117281273441LL;
volatile int64_t t11 = 772LL;
int8_t x58 = -1;
int32_t x60 = INT32_MIN;
int32_t t12 = 7171626;
volatile uint16_t x69 = UINT16_MAX;
int64_t x71 = -1LL;
volatile uint16_t x76 = 14827U;
static volatile int64_t t17 = 3003LL;
static int8_t x85 = -1;
int32_t t19 = 591;
int32_t x100 = 0;
uint32_t x111 = 2167U;
uint8_t x114 = UINT8_MAX;
static int8_t x124 = INT8_MIN;
int16_t x125 = INT16_MAX;
static volatile int64_t x126 = -1LL;
volatile int32_t t29 = -767455249;
int32_t x133 = -961828;
volatile int32_t t31 = -10;
uint32_t x137 = UINT32_MAX;
int32_t t33 = -502698;
volatile uint16_t x151 = UINT16_MAX;
volatile int16_t x160 = INT16_MIN;
int16_t x161 = INT16_MIN;
int8_t x170 = -1;
uint32_t x171 = 4518U;
volatile int16_t x172 = INT16_MIN;
static int32_t x175 = -1955;
static volatile uint32_t t39 = 15086953U;
int64_t t40 = -1232388493507645075LL;
uint32_t x189 = 90648291U;
int16_t x199 = -1;
static int16_t x205 = INT16_MIN;
uint8_t x213 = UINT8_MAX;
volatile int8_t x214 = 44;
static int64_t x215 = 24373181LL;
volatile uint64_t x218 = 34548306LLU;
int16_t x219 = -30;
uint8_t x220 = 5U;
static volatile int16_t x228 = INT16_MAX;
uint32_t x231 = 28U;
volatile int64_t x235 = INT64_MAX;
uint8_t x237 = UINT8_MAX;
uint32_t x240 = 39U;
volatile int32_t x241 = 2965;
uint64_t x258 = UINT64_MAX;
int16_t x259 = INT16_MAX;
volatile int64_t x265 = -56110947330LL;
int64_t x266 = INT64_MAX;
int16_t x273 = INT16_MIN;
int64_t x278 = -1LL;
uint16_t x282 = UINT16_MAX;
uint16_t x284 = UINT16_MAX;
int8_t x290 = -1;
int8_t x300 = -12;
volatile int8_t x305 = -1;
volatile uint32_t x306 = UINT32_MAX;
volatile int32_t t70 = -1;
int64_t t73 = -27934129LL;
uint16_t x327 = UINT16_MAX;
volatile uint32_t x335 = 120430U;
uint8_t x337 = UINT8_MAX;
static volatile int16_t x339 = INT16_MIN;
int64_t x341 = -1LL;
static uint8_t x342 = UINT8_MAX;
static volatile int64_t x351 = -1LL;
int8_t x356 = -1;
int32_t t81 = 1;
uint64_t x362 = 15LLU;
volatile uint32_t x364 = 31747U;
static int16_t x366 = INT16_MIN;
static int64_t x370 = 333045187LL;
volatile uint8_t x377 = 36U;
int64_t x398 = INT64_MAX;
int32_t x399 = INT32_MAX;
static int8_t x406 = 0;
volatile int64_t t93 = -1LL;
int64_t x423 = -1LL;
volatile int32_t t97 = 4197;
volatile int32_t x427 = INT32_MIN;
uint8_t x431 = UINT8_MAX;
int64_t x435 = -8792237115239LL;
volatile int32_t x451 = 434050;
uint64_t t104 = 387041676LLU;
volatile int32_t x467 = INT32_MIN;
uint64_t x469 = 40003393LLU;
uint16_t x477 = UINT16_MAX;
int64_t x479 = INT64_MAX;
int32_t t111 = -27521;
int32_t t112 = -54879732;
int16_t x504 = INT16_MIN;
int32_t t115 = 0;
uint8_t x507 = UINT8_MAX;
uint8_t x510 = UINT8_MAX;
volatile int64_t t117 = -60LL;
uint16_t x513 = 38U;
static int8_t x515 = INT8_MIN;
int8_t x519 = INT8_MIN;
int8_t x536 = INT8_MAX;
static int16_t x537 = -1;
volatile int32_t t124 = -54928304;
volatile uint8_t x541 = UINT8_MAX;
static uint8_t x542 = UINT8_MAX;
volatile int64_t x545 = INT64_MIN;
uint64_t x553 = UINT64_MAX;
volatile int64_t x556 = -6916423LL;
static int32_t x566 = -497;
int16_t x569 = INT16_MIN;
static int8_t x572 = -1;
int64_t x581 = INT64_MIN;
volatile int64_t t132 = 226337002LL;
int64_t x586 = INT64_MIN;
int8_t x587 = 1;
static int8_t x593 = 1;
volatile uint64_t x609 = 6892LLU;
int32_t x610 = 0;
uint64_t t139 = 166650543LLU;
uint32_t x615 = 7505U;
uint32_t x622 = 441215U;
int8_t x625 = INT8_MIN;
int8_t x631 = -1;
static int32_t x638 = INT32_MIN;
volatile uint16_t x640 = 344U;
int32_t t146 = -5835837;
static int32_t t147 = 5037172;
volatile int8_t x650 = INT8_MIN;
int16_t x658 = INT16_MIN;
int32_t t150 = 5194171;
static uint32_t x668 = UINT32_MAX;
uint32_t t153 = 34244U;
uint64_t x677 = 63LLU;
volatile uint16_t x678 = UINT16_MAX;
uint64_t t155 = 2184989718522LLU;
volatile int64_t x687 = INT64_MIN;
volatile uint32_t x690 = 1354U;
static int8_t x694 = INT8_MIN;
uint8_t x696 = 83U;
volatile int32_t t164 = -387518287;
volatile int64_t x717 = -66416661972LL;
int64_t x720 = INT64_MIN;
uint32_t x722 = UINT32_MAX;
uint16_t x724 = 4463U;
int8_t x728 = INT8_MIN;
volatile int32_t t169 = 185;
uint64_t x756 = 7795375292LLU;
static volatile int64_t x760 = INT64_MIN;
int8_t x761 = -1;
int64_t x765 = INT64_MIN;
volatile int64_t x768 = -323508382353142056LL;
static volatile int64_t t177 = 42822742591315LL;
static volatile int32_t x778 = INT32_MAX;
uint32_t x787 = 3183366U;
int8_t x789 = INT8_MIN;
int8_t x790 = -1;
uint64_t x791 = UINT64_MAX;
static int16_t x800 = -14927;
volatile uint16_t x803 = 13067U;
static int32_t x807 = 429733800;
static int64_t x808 = INT64_MAX;
int16_t x812 = -8;
static int16_t x819 = -20;
int64_t x823 = -1LL;
int32_t t190 = -2721003;
int64_t x829 = -2884933965239236LL;
int64_t x830 = -1LL;
static volatile int64_t t192 = -182LL;
static volatile int32_t x833 = INT32_MIN;
static int64_t x836 = INT64_MIN;
int8_t x844 = INT8_MAX;
int16_t x850 = -15644;
int16_t x853 = -3;
int32_t x856 = -23034;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	static int64_t x2 = 1591LL;
	int16_t x3 = -1;
	int16_t x4 = 0;
	static int32_t t0 = -2105;

    t0 = (x1+(x2!=(x3^x4)));

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x9 = -7;
	uint8_t x12 = 7U;
	volatile int32_t t1 = -2;

    t1 = (x9+(x10!=(x11^x12)));

    if (t1 != -6) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint32_t x13 = 25135816U;
	volatile int64_t x14 = INT64_MIN;
	uint64_t x15 = 11930939277LLU;
	int64_t x16 = -34956335478282LL;
	volatile uint32_t t2 = 260U;

    t2 = (x13+(x14!=(x15^x16)));

    if (t2 != 25135817U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = 51779LL;
	int16_t x18 = -1;
	int64_t x20 = INT64_MIN;
	int64_t t3 = 6997986214LL;

    t3 = (x17+(x18!=(x19^x20)));

    if (t3 != 51780LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 0;
	volatile int8_t x22 = 0;
	int16_t x23 = INT16_MIN;
	static uint8_t x24 = UINT8_MAX;
	int32_t t4 = 2380872;

    t4 = (x21+(x22!=(x23^x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = INT64_MIN;
	uint16_t x26 = 28243U;
	volatile int64_t x27 = -551290835956LL;
	int64_t t5 = -23465552LL;

    t5 = (x25+(x26!=(x27^x28)));

    if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x33 = INT8_MIN;
	int16_t x35 = -2;
	volatile int8_t x36 = -1;
	static volatile int32_t t6 = 2880;

    t6 = (x33+(x34!=(x35^x36)));

    if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x39 = -4;
	int32_t t7 = -241757885;

    t7 = (x37+(x38!=(x39^x40)));

    if (t7 != -127) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	int64_t x43 = INT64_MIN;
	int32_t x44 = INT32_MIN;
	int64_t t8 = -2312807864291LL;

    t8 = (x41+(x42!=(x43^x44)));

    if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x45 = INT8_MIN;
	int32_t x46 = -1;
	volatile int32_t x47 = -1;
	uint64_t x48 = 10LLU;
	int32_t t9 = 1;

    t9 = (x45+(x46!=(x47^x48)));

    if (t9 != -127) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x50 = -30;
	static uint16_t x52 = 1U;
	volatile uint64_t t10 = 637737579240324LLU;

    t10 = (x49+(x50!=(x51^x52)));

    if (t10 != 217LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = INT64_MIN;
	uint16_t x54 = 8U;
	volatile int64_t x56 = INT64_MAX;

    t11 = (x53+(x54!=(x55^x56)));

    if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x57 = 13U;
	static int32_t x59 = -1;

    t12 = (x57+(x58!=(x59^x60)));

    if (t12 != 14) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x61 = -31LL;
	volatile uint64_t x62 = 29057465375LLU;
	uint64_t x63 = 5381LLU;
	int8_t x64 = INT8_MIN;
	static volatile int64_t t13 = 150559962011LL;

    t13 = (x61+(x62!=(x63^x64)));

    if (t13 != -30LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x65 = INT16_MIN;
	uint64_t x66 = 24807LLU;
	volatile int8_t x67 = INT8_MIN;
	volatile int16_t x68 = -377;
	static int32_t t14 = -560453505;

    t14 = (x65+(x66!=(x67^x68)));

    if (t14 != -32767) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x70 = -1;
	int64_t x72 = INT64_MIN;
	volatile int32_t t15 = 605301498;

    t15 = (x69+(x70!=(x71^x72)));

    if (t15 != 65536) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MIN;
	int64_t x74 = INT64_MIN;
	volatile int8_t x75 = -1;
	int32_t t16 = -132;

    t16 = (x73+(x74!=(x75^x76)));

    if (t16 != -2147483647) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int64_t x77 = -1LL;
	int64_t x78 = INT64_MAX;
	uint8_t x79 = 0U;
	static int32_t x80 = -1;

    t17 = (x77+(x78!=(x79^x80)));

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -1;
	int64_t x82 = INT64_MIN;
	static volatile int32_t x83 = INT32_MIN;
	uint64_t x84 = 1643LLU;
	int32_t t18 = -532958264;

    t18 = (x81+(x82!=(x83^x84)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x86 = 0U;
	int8_t x87 = 5;
	int32_t x88 = INT32_MIN;

    t19 = (x85+(x86!=(x87^x88)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x89 = -1;
	uint64_t x90 = 50852678755968794LLU;
	int64_t x91 = INT64_MAX;
	int16_t x92 = INT16_MIN;
	int32_t t20 = -1;

    t20 = (x89+(x90!=(x91^x92)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x93 = INT64_MIN;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -109461012982LL;
	uint16_t x96 = 2489U;
	int64_t t21 = -1755LL;

    t21 = (x93+(x94!=(x95^x96)));

    if (t21 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x97 = 0U;
	uint64_t x98 = 1447370276968559LLU;
	int32_t x99 = 75;
	volatile int32_t t22 = -1296;

    t22 = (x97+(x98!=(x99^x100)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = 28;
	volatile uint8_t x102 = 103U;
	static int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	int32_t t23 = -2;

    t23 = (x101+(x102!=(x103^x104)));

    if (t23 != 29) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x105 = -1LL;
	int8_t x106 = INT8_MAX;
	uint32_t x107 = 1U;
	static int8_t x108 = INT8_MIN;
	volatile int64_t t24 = -8360094LL;

    t24 = (x105+(x106!=(x107^x108)));

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x109 = -1;
	uint16_t x110 = 1020U;
	uint64_t x112 = 53414LLU;
	int32_t t25 = 1;

    t25 = (x109+(x110!=(x111^x112)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x113 = INT8_MAX;
	int16_t x115 = INT16_MIN;
	int64_t x116 = -2LL;
	int32_t t26 = 1;

    t26 = (x113+(x114!=(x115^x116)));

    if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	static int8_t x118 = 1;
	volatile int16_t x119 = -1742;
	int64_t x120 = -233609LL;
	volatile int32_t t27 = 981;

    t27 = (x117+(x118!=(x119^x120)));

    if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x121 = -1;
	int64_t x122 = INT64_MAX;
	static uint32_t x123 = 2138594119U;
	int32_t t28 = -1154;

    t28 = (x121+(x122!=(x123^x124)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x127 = 2U;
	static int64_t x128 = -18747026018LL;

    t29 = (x125+(x126!=(x127^x128)));

    if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x129 = UINT32_MAX;
	static int32_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	static int8_t x132 = INT8_MAX;
	volatile uint32_t t30 = 23U;

    t30 = (x129+(x130!=(x131^x132)));

    if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x134 = 44U;
	int64_t x135 = 0LL;
	static int64_t x136 = -101789056450LL;

    t31 = (x133+(x134!=(x135^x136)));

    if (t31 != -961827) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int32_t x138 = INT32_MIN;
	int32_t x139 = INT32_MIN;
	int64_t x140 = INT64_MIN;
	volatile uint32_t t32 = 103845173U;

    t32 = (x137+(x138!=(x139^x140)));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile uint8_t x141 = 62U;
	uint32_t x142 = 63U;
	int8_t x143 = -1;
	static int8_t x144 = 7;

    t33 = (x141+(x142!=(x143^x144)));

    if (t33 != 63) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x149 = INT8_MIN;
	int16_t x150 = INT16_MIN;
	static volatile uint8_t x152 = UINT8_MAX;
	int32_t t34 = 6;

    t34 = (x149+(x150!=(x151^x152)));

    if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x157 = -1;
	volatile int8_t x158 = INT8_MAX;
	static uint64_t x159 = UINT64_MAX;
	int32_t t35 = -23217;

    t35 = (x157+(x158!=(x159^x160)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint8_t x162 = 0U;
	volatile int8_t x163 = -1;
	static int64_t x164 = INT64_MIN;
	static volatile int32_t t36 = 3;

    t36 = (x161+(x162!=(x163^x164)));

    if (t36 != -32767) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x165 = 1U;
	int8_t x166 = 0;
	int64_t x167 = 5938070883LL;
	volatile uint8_t x168 = 49U;
	volatile int32_t t37 = 1182;

    t37 = (x165+(x166!=(x167^x168)));

    if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x169 = 33U;
	int32_t t38 = 2424;

    t38 = (x169+(x170!=(x171^x172)));

    if (t38 != 34) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x173 = UINT32_MAX;
	int64_t x174 = INT64_MAX;
	uint32_t x176 = 98148722U;

    t39 = (x173+(x174!=(x175^x176)));

    if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x181 = INT64_MIN;
	volatile int8_t x182 = -1;
	volatile int8_t x183 = INT8_MAX;
	static uint64_t x184 = UINT64_MAX;

    t40 = (x181+(x182!=(x183^x184)));

    if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = INT8_MAX;
	volatile int32_t x186 = INT32_MIN;
	volatile int64_t x187 = INT64_MIN;
	int64_t x188 = INT64_MAX;
	volatile int32_t t41 = -676;

    t41 = (x185+(x186!=(x187^x188)));

    if (t41 != 128) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x190 = INT8_MAX;
	static volatile int64_t x191 = -12922433LL;
	int8_t x192 = -7;
	uint32_t t42 = 299126802U;

    t42 = (x189+(x190!=(x191^x192)));

    if (t42 != 90648292U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x197 = 0;
	int8_t x198 = -1;
	int16_t x200 = -1;
	volatile int32_t t43 = 488266;

    t43 = (x197+(x198!=(x199^x200)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x201 = -10;
	static volatile int64_t x202 = -1LL;
	uint16_t x203 = UINT16_MAX;
	uint16_t x204 = 7522U;
	volatile int32_t t44 = 69854255;

    t44 = (x201+(x202!=(x203^x204)));

    if (t44 != -9) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x206 = -1;
	uint16_t x207 = 7U;
	uint64_t x208 = UINT64_MAX;
	volatile int32_t t45 = -2;

    t45 = (x205+(x206!=(x207^x208)));

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x209 = UINT16_MAX;
	volatile int32_t x210 = -1;
	int8_t x211 = -1;
	int32_t x212 = 104873;
	int32_t t46 = 440252446;

    t46 = (x209+(x210!=(x211^x212)));

    if (t46 != 65536) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x216 = 135747233776329LLU;
	static volatile int32_t t47 = 2696;

    t47 = (x213+(x214!=(x215^x216)));

    if (t47 != 256) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x217 = -1;
	int32_t t48 = -16116291;

    t48 = (x217+(x218!=(x219^x220)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x221 = -1;
	int8_t x222 = -1;
	int16_t x223 = 1;
	int8_t x224 = -1;
	int32_t t49 = 4122093;

    t49 = (x221+(x222!=(x223^x224)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x225 = 43;
	static int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MAX;
	int32_t t50 = 3;

    t50 = (x225+(x226!=(x227^x228)));

    if (t50 != 44) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x229 = 226LLU;
	int32_t x230 = INT32_MIN;
	int32_t x232 = INT32_MAX;
	uint64_t t51 = 109454LLU;

    t51 = (x229+(x230!=(x231^x232)));

    if (t51 != 227LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x233 = -15LL;
	int8_t x234 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	int64_t t52 = -10LL;

    t52 = (x233+(x234!=(x235^x236)));

    if (t52 != -14LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x238 = 1;
	uint8_t x239 = 6U;
	volatile int32_t t53 = -16095;

    t53 = (x237+(x238!=(x239^x240)));

    if (t53 != 256) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	uint16_t x244 = UINT16_MAX;
	static int32_t t54 = 279;

    t54 = (x241+(x242!=(x243^x244)));

    if (t54 != 2966) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x245 = -1;
	uint64_t x246 = 1246462967895LLU;
	int32_t x247 = INT32_MIN;
	static volatile uint32_t x248 = 13U;
	int32_t t55 = 3;

    t55 = (x245+(x246!=(x247^x248)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = 1;
	volatile uint64_t x250 = 255983982896LLU;
	int64_t x251 = -4364918857289LL;
	int64_t x252 = INT64_MAX;
	int32_t t56 = 28;

    t56 = (x249+(x250!=(x251^x252)));

    if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x253 = -1;
	uint64_t x254 = 176781461LLU;
	static int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;
	static volatile int32_t t57 = 435;

    t57 = (x253+(x254!=(x255^x256)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x257 = 0U;
	int8_t x260 = -1;
	static int32_t t58 = -434126;

    t58 = (x257+(x258!=(x259^x260)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x261 = -1;
	static int16_t x262 = 7;
	static volatile uint8_t x263 = 15U;
	volatile int16_t x264 = -1;
	static int32_t t59 = 1;

    t59 = (x261+(x262!=(x263^x264)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x267 = 16365629937214LLU;
	int32_t x268 = -3;
	static int64_t t60 = 410836127LL;

    t60 = (x265+(x266!=(x267^x268)));

    if (t60 != -56110947329LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x269 = -14;
	int8_t x270 = -1;
	static int8_t x271 = -1;
	int8_t x272 = INT8_MIN;
	volatile int32_t t61 = 734719;

    t61 = (x269+(x270!=(x271^x272)));

    if (t61 != -13) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x274 = 1905111652961360352LLU;
	static int32_t x275 = -1;
	int8_t x276 = -1;
	int32_t t62 = -5046;

    t62 = (x273+(x274!=(x275^x276)));

    if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x277 = 0;
	uint16_t x279 = 0U;
	int64_t x280 = INT64_MIN;
	volatile int32_t t63 = -182;

    t63 = (x277+(x278!=(x279^x280)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x281 = INT64_MIN;
	static uint64_t x283 = UINT64_MAX;
	int64_t t64 = 182958741812LL;

    t64 = (x281+(x282!=(x283^x284)));

    if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x285 = 359340139U;
	static int64_t x286 = -1LL;
	int8_t x287 = INT8_MAX;
	int16_t x288 = -31;
	static uint32_t t65 = 42331U;

    t65 = (x285+(x286!=(x287^x288)));

    if (t65 != 359340140U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x289 = 3U;
	static int32_t x291 = INT32_MAX;
	int8_t x292 = -1;
	int32_t t66 = 60;

    t66 = (x289+(x290!=(x291^x292)));

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = -114;
	volatile uint16_t x294 = 17652U;
	volatile int32_t x295 = INT32_MAX;
	int64_t x296 = -1LL;
	volatile int32_t t67 = 129;

    t67 = (x293+(x294!=(x295^x296)));

    if (t67 != -113) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = 22;
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = INT32_MIN;
	int32_t t68 = 737192233;

    t68 = (x297+(x298!=(x299^x300)));

    if (t68 != 23) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = INT8_MIN;
	int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MAX;
	int32_t t69 = -26341159;

    t69 = (x301+(x302!=(x303^x304)));

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint64_t x307 = 1LLU;
	uint8_t x308 = 54U;

    t70 = (x305+(x306!=(x307^x308)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x313 = 77087440330LLU;
	volatile uint8_t x314 = 3U;
	int8_t x315 = -1;
	int16_t x316 = -1;
	uint64_t t71 = 69511389LLU;

    t71 = (x313+(x314!=(x315^x316)));

    if (t71 != 77087440331LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x317 = 12U;
	int64_t x318 = 1863116088798LL;
	int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MAX;
	volatile int32_t t72 = -802;

    t72 = (x317+(x318!=(x319^x320)));

    if (t72 != 13) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x321 = -9659712249356LL;
	int64_t x322 = -1LL;
	static int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MIN;

    t73 = (x321+(x322!=(x323^x324)));

    if (t73 != -9659712249355LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x325 = UINT16_MAX;
	volatile uint32_t x326 = 83753U;
	int8_t x328 = INT8_MIN;
	static int32_t t74 = -1;

    t74 = (x325+(x326!=(x327^x328)));

    if (t74 != 65536) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = 77;
	int8_t x331 = INT8_MIN;
	static int8_t x332 = 0;
	static int64_t t75 = 13058221588563LL;

    t75 = (x329+(x330!=(x331^x332)));

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x333 = -686138111788152LL;
	int8_t x334 = INT8_MIN;
	uint16_t x336 = 27U;
	int64_t t76 = -14312LL;

    t76 = (x333+(x334!=(x335^x336)));

    if (t76 != -686138111788151LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x338 = -146;
	static int8_t x340 = -1;
	volatile int32_t t77 = 56399;

    t77 = (x337+(x338!=(x339^x340)));

    if (t77 != 256) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x343 = INT8_MAX;
	volatile uint32_t x344 = UINT32_MAX;
	int64_t t78 = 435814LL;

    t78 = (x341+(x342!=(x343^x344)));

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x345 = -241;
	static int16_t x346 = INT16_MIN;
	static int16_t x347 = 336;
	static int64_t x348 = INT64_MIN;
	volatile int32_t t79 = 255974755;

    t79 = (x345+(x346!=(x347^x348)));

    if (t79 != -240) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x349 = 3607289U;
	int8_t x350 = INT8_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile uint32_t t80 = 283330803U;

    t80 = (x349+(x350!=(x351^x352)));

    if (t80 != 3607290U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x353 = UINT16_MAX;
	uint16_t x354 = 27588U;
	static uint8_t x355 = 2U;

    t81 = (x353+(x354!=(x355^x356)));

    if (t81 != 65536) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x357 = -1LL;
	int32_t x358 = INT32_MAX;
	static uint32_t x359 = UINT32_MAX;
	uint16_t x360 = UINT16_MAX;
	volatile int64_t t82 = 770LL;

    t82 = (x357+(x358!=(x359^x360)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x361 = 279978618LL;
	uint8_t x363 = 90U;
	volatile int64_t t83 = 198682587937LL;

    t83 = (x361+(x362!=(x363^x364)));

    if (t83 != 279978619LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x365 = -1;
	volatile uint8_t x367 = UINT8_MAX;
	uint64_t x368 = 5019071254283LLU;
	int32_t t84 = -43;

    t84 = (x365+(x366!=(x367^x368)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MAX;
	static int8_t x371 = INT8_MAX;
	uint64_t x372 = 182LLU;
	volatile int32_t t85 = 7793;

    t85 = (x369+(x370!=(x371^x372)));

    if (t85 != 32768) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x373 = UINT32_MAX;
	int64_t x374 = 2329663977LL;
	volatile uint16_t x375 = 3U;
	int16_t x376 = -21;
	volatile uint32_t t86 = 2331U;

    t86 = (x373+(x374!=(x375^x376)));

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x378 = -234;
	uint8_t x379 = 16U;
	volatile int16_t x380 = -255;
	int32_t t87 = 2;

    t87 = (x377+(x378!=(x379^x380)));

    if (t87 != 37) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x381 = INT8_MIN;
	uint64_t x382 = 626184LLU;
	volatile int64_t x383 = -836008554515876040LL;
	uint32_t x384 = 346U;
	static int32_t t88 = 280802993;

    t88 = (x381+(x382!=(x383^x384)));

    if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x385 = INT8_MIN;
	static uint8_t x386 = UINT8_MAX;
	int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	volatile int32_t t89 = -564;

    t89 = (x385+(x386!=(x387^x388)));

    if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x389 = INT16_MIN;
	uint32_t x390 = 2107U;
	uint64_t x391 = 12LLU;
	static uint32_t x392 = 2U;
	volatile int32_t t90 = -7314;

    t90 = (x389+(x390!=(x391^x392)));

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x393 = 30;
	static int8_t x394 = -1;
	static int64_t x395 = INT64_MIN;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t91 = 244942;

    t91 = (x393+(x394!=(x395^x396)));

    if (t91 != 31) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x397 = -1LL;
	static int8_t x400 = 0;
	int64_t t92 = -2297864412617LL;

    t92 = (x397+(x398!=(x399^x400)));

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x405 = -1340280653590LL;
	volatile int64_t x407 = 545563LL;
	volatile int8_t x408 = INT8_MIN;

    t93 = (x405+(x406!=(x407^x408)));

    if (t93 != -1340280653589LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x409 = 597U;
	static int16_t x410 = 6;
	int8_t x411 = 7;
	int64_t x412 = INT64_MIN;
	volatile int32_t t94 = 5244;

    t94 = (x409+(x410!=(x411^x412)));

    if (t94 != 598) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = INT16_MIN;
	uint32_t x414 = 0U;
	int64_t x415 = -1LL;
	int16_t x416 = -1;
	volatile int32_t t95 = -51;

    t95 = (x413+(x414!=(x415^x416)));

    if (t95 != -32768) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x417 = UINT16_MAX;
	volatile uint16_t x418 = UINT16_MAX;
	volatile uint16_t x419 = 6U;
	static int16_t x420 = INT16_MAX;
	volatile int32_t t96 = 688;

    t96 = (x417+(x418!=(x419^x420)));

    if (t96 != 65536) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x421 = 416U;
	int64_t x422 = -1899014LL;
	static int8_t x424 = INT8_MAX;

    t97 = (x421+(x422!=(x423^x424)));

    if (t97 != 417) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint16_t x425 = 5U;
	static int8_t x426 = INT8_MIN;
	uint8_t x428 = 7U;
	int32_t t98 = 1635;

    t98 = (x425+(x426!=(x427^x428)));

    if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x429 = UINT32_MAX;
	int32_t x430 = INT32_MIN;
	volatile uint32_t x432 = 729844U;
	volatile uint32_t t99 = 647074999U;

    t99 = (x429+(x430!=(x431^x432)));

    if (t99 != 0U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile int32_t x434 = 386537;
	static uint8_t x436 = 83U;
	volatile uint32_t t100 = 678U;

    t100 = (x433+(x434!=(x435^x436)));

    if (t100 != 0U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x437 = -2;
	volatile int32_t x438 = -1;
	int64_t x439 = -1LL;
	int64_t x440 = INT64_MIN;
	static int32_t t101 = 348323711;

    t101 = (x437+(x438!=(x439^x440)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x441 = 14484;
	int64_t x442 = INT64_MAX;
	int16_t x443 = INT16_MAX;
	uint32_t x444 = 4336U;
	static volatile int32_t t102 = 10977878;

    t102 = (x441+(x442!=(x443^x444)));

    if (t102 != 14485) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x445 = INT32_MIN;
	static uint8_t x446 = 96U;
	uint16_t x447 = 3996U;
	int8_t x448 = INT8_MIN;
	volatile int32_t t103 = -37610005;

    t103 = (x445+(x446!=(x447^x448)));

    if (t103 != -2147483647) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x449 = 0LLU;
	static int8_t x450 = INT8_MIN;
	static int8_t x452 = 0;

    t104 = (x449+(x450!=(x451^x452)));

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x457 = -1;
	uint64_t x458 = 1223890864201342213LLU;
	volatile uint64_t x459 = UINT64_MAX;
	int64_t x460 = INT64_MIN;
	volatile int32_t t105 = -44630;

    t105 = (x457+(x458!=(x459^x460)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x461 = 0U;
	volatile int32_t x462 = -2;
	static int8_t x463 = INT8_MIN;
	int8_t x464 = INT8_MIN;
	int32_t t106 = -11122;

    t106 = (x461+(x462!=(x463^x464)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x465 = 131024883953235913LL;
	int32_t x466 = INT32_MIN;
	int8_t x468 = INT8_MAX;
	int64_t t107 = -15384269261LL;

    t107 = (x465+(x466!=(x467^x468)));

    if (t107 != 131024883953235914LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x470 = 3967156345803742LL;
	int16_t x471 = -1;
	int16_t x472 = 9;
	uint64_t t108 = 620560962LLU;

    t108 = (x469+(x470!=(x471^x472)));

    if (t108 != 40003394LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x473 = -1;
	int8_t x474 = INT8_MAX;
	static int32_t x475 = INT32_MAX;
	uint8_t x476 = 46U;
	volatile int32_t t109 = 1002875;

    t109 = (x473+(x474!=(x475^x476)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x478 = -2;
	static int16_t x480 = INT16_MIN;
	int32_t t110 = 10147;

    t110 = (x477+(x478!=(x479^x480)));

    if (t110 != 65536) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x481 = 0U;
	volatile int8_t x482 = INT8_MIN;
	static int32_t x483 = INT32_MAX;
	uint64_t x484 = 451959690818LLU;

    t111 = (x481+(x482!=(x483^x484)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x485 = 1;
	static int16_t x486 = 123;
	int32_t x487 = 526759562;
	int64_t x488 = -1LL;

    t112 = (x485+(x486!=(x487^x488)));

    if (t112 != 2) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x493 = 7199LL;
	volatile uint32_t x494 = 7295U;
	static int8_t x495 = INT8_MIN;
	uint64_t x496 = 348841LLU;
	int64_t t113 = -417618310541847LL;

    t113 = (x493+(x494!=(x495^x496)));

    if (t113 != 7200LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x497 = INT8_MAX;
	static volatile int32_t x498 = INT32_MIN;
	uint8_t x499 = UINT8_MAX;
	uint32_t x500 = 8215U;
	volatile int32_t t114 = -6358353;

    t114 = (x497+(x498!=(x499^x500)));

    if (t114 != 128) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x501 = 27;
	int32_t x502 = INT32_MIN;
	int8_t x503 = INT8_MAX;

    t115 = (x501+(x502!=(x503^x504)));

    if (t115 != 28) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x505 = 40U;
	int32_t x506 = INT32_MIN;
	static int64_t x508 = 446894123890463302LL;
	int32_t t116 = -395681609;

    t116 = (x505+(x506!=(x507^x508)));

    if (t116 != 41) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int64_t x509 = -1LL;
	int64_t x511 = 4400LL;
	int32_t x512 = INT32_MIN;

    t117 = (x509+(x510!=(x511^x512)));

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x514 = 508LLU;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t118 = -251172178;

    t118 = (x513+(x514!=(x515^x516)));

    if (t118 != 39) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x517 = 369023370LLU;
	uint8_t x518 = UINT8_MAX;
	uint32_t x520 = 19827U;
	uint64_t t119 = 1924599008LLU;

    t119 = (x517+(x518!=(x519^x520)));

    if (t119 != 369023371LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x521 = 3096413018901LL;
	int16_t x522 = 5;
	int8_t x523 = -1;
	int32_t x524 = -1;
	static int64_t t120 = 1808514430239656LL;

    t120 = (x521+(x522!=(x523^x524)));

    if (t120 != 3096413018902LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x525 = UINT8_MAX;
	int8_t x526 = -1;
	int64_t x527 = INT64_MAX;
	uint64_t x528 = 308639474744564210LLU;
	volatile int32_t t121 = -81877;

    t121 = (x525+(x526!=(x527^x528)));

    if (t121 != 256) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x529 = -1;
	uint32_t x530 = 1254U;
	volatile int64_t x531 = INT64_MAX;
	volatile int16_t x532 = INT16_MIN;
	static int32_t t122 = -639708480;

    t122 = (x529+(x530!=(x531^x532)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x533 = -1;
	int32_t x534 = 1;
	uint64_t x535 = 1587LLU;
	int32_t t123 = -1225042;

    t123 = (x533+(x534!=(x535^x536)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x538 = 5U;
	int32_t x539 = INT32_MIN;
	uint32_t x540 = 519101U;

    t124 = (x537+(x538!=(x539^x540)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint8_t x543 = 1U;
	static int8_t x544 = 58;
	int32_t t125 = -4083;

    t125 = (x541+(x542!=(x543^x544)));

    if (t125 != 256) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x546 = INT16_MIN;
	static int16_t x547 = -1;
	int8_t x548 = -1;
	volatile int64_t t126 = -6946061925117LL;

    t126 = (x545+(x546!=(x547^x548)));

    if (t126 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x554 = INT64_MIN;
	int16_t x555 = 0;
	volatile uint64_t t127 = 1866646792671781LLU;

    t127 = (x553+(x554!=(x555^x556)));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x557 = UINT16_MAX;
	static int64_t x558 = INT64_MIN;
	static int8_t x559 = 1;
	int16_t x560 = INT16_MIN;
	int32_t t128 = 0;

    t128 = (x557+(x558!=(x559^x560)));

    if (t128 != 65536) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x561 = UINT64_MAX;
	int64_t x562 = -11280831LL;
	static uint32_t x563 = 165146U;
	int16_t x564 = INT16_MAX;
	uint64_t t129 = 2163361372414279LLU;

    t129 = (x561+(x562!=(x563^x564)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x565 = -3636743411159581LL;
	volatile uint8_t x567 = 1U;
	uint32_t x568 = 7652085U;
	volatile int64_t t130 = 27619575623006403LL;

    t130 = (x565+(x566!=(x567^x568)));

    if (t130 != -3636743411159580LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x570 = UINT64_MAX;
	uint16_t x571 = 1269U;
	int32_t t131 = -1384;

    t131 = (x569+(x570!=(x571^x572)));

    if (t131 != -32767) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x582 = 116U;
	volatile int32_t x583 = INT32_MIN;
	uint64_t x584 = 0LLU;

    t132 = (x581+(x582!=(x583^x584)));

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint32_t x585 = 1865U;
	uint32_t x588 = 236U;
	volatile uint32_t t133 = 8191U;

    t133 = (x585+(x586!=(x587^x588)));

    if (t133 != 1866U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x589 = -233562659908LL;
	int64_t x590 = 495383496166278LL;
	int32_t x591 = INT32_MIN;
	int32_t x592 = 0;
	volatile int64_t t134 = -267905459094698LL;

    t134 = (x589+(x590!=(x591^x592)));

    if (t134 != -233562659907LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x594 = UINT32_MAX;
	int8_t x595 = 0;
	volatile int64_t x596 = -1LL;
	int32_t t135 = -934123508;

    t135 = (x593+(x594!=(x595^x596)));

    if (t135 != 2) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x597 = INT64_MIN;
	int64_t x598 = 608453951135465362LL;
	static int16_t x599 = 178;
	uint64_t x600 = 128585194LLU;
	static volatile int64_t t136 = 20517829647LL;

    t136 = (x597+(x598!=(x599^x600)));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x601 = -1005;
	uint16_t x602 = 128U;
	uint32_t x603 = 9994U;
	uint16_t x604 = 320U;
	int32_t t137 = -24;

    t137 = (x601+(x602!=(x603^x604)));

    if (t137 != -1004) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x605 = -2;
	int16_t x606 = INT16_MIN;
	int32_t x607 = INT32_MIN;
	uint64_t x608 = UINT64_MAX;
	volatile int32_t t138 = 6086077;

    t138 = (x605+(x606!=(x607^x608)));

    if (t138 != -1) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x611 = -1LL;
	int32_t x612 = INT32_MAX;

    t139 = (x609+(x610!=(x611^x612)));

    if (t139 != 6893LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x613 = INT16_MIN;
	int64_t x614 = INT64_MIN;
	uint32_t x616 = UINT32_MAX;
	static int32_t t140 = -733;

    t140 = (x613+(x614!=(x615^x616)));

    if (t140 != -32767) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x621 = INT64_MIN;
	uint8_t x623 = UINT8_MAX;
	int64_t x624 = INT64_MAX;
	volatile int64_t t141 = 12LL;

    t141 = (x621+(x622!=(x623^x624)));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x626 = 21;
	static int64_t x627 = INT64_MIN;
	uint8_t x628 = 39U;
	static int32_t t142 = 446;

    t142 = (x625+(x626!=(x627^x628)));

    if (t142 != -127) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint64_t x629 = UINT64_MAX;
	int8_t x630 = -1;
	static int16_t x632 = INT16_MAX;
	uint64_t t143 = 2382251780681443875LLU;

    t143 = (x629+(x630!=(x631^x632)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x633 = 173U;
	uint8_t x634 = UINT8_MAX;
	uint8_t x635 = UINT8_MAX;
	int32_t x636 = INT32_MAX;
	int32_t t144 = -6705433;

    t144 = (x633+(x634!=(x635^x636)));

    if (t144 != 174) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x637 = 28;
	volatile int32_t x639 = -1;
	static volatile int32_t t145 = 1098619;

    t145 = (x637+(x638!=(x639^x640)));

    if (t145 != 29) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x641 = INT8_MIN;
	uint64_t x642 = 49665327205361LLU;
	int8_t x643 = INT8_MIN;
	volatile uint32_t x644 = 1796710U;

    t146 = (x641+(x642!=(x643^x644)));

    if (t146 != -127) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x645 = INT16_MIN;
	uint16_t x646 = 486U;
	int16_t x647 = 7;
	int64_t x648 = -486121113862LL;

    t147 = (x645+(x646!=(x647^x648)));

    if (t147 != -32767) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = INT8_MIN;
	uint32_t x651 = 239564U;
	int64_t x652 = 56125669308515509LL;
	static volatile int32_t t148 = -214;

    t148 = (x649+(x650!=(x651^x652)));

    if (t148 != -127) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x653 = INT64_MIN;
	volatile int16_t x654 = INT16_MAX;
	int64_t x655 = 40201693745335562LL;
	static int8_t x656 = -1;
	volatile int64_t t149 = -4992LL;

    t149 = (x653+(x654!=(x655^x656)));

    if (t149 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int8_t x657 = -1;
	volatile int16_t x659 = INT16_MIN;
	volatile int16_t x660 = 2;

    t150 = (x657+(x658!=(x659^x660)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x661 = 910579832985237LLU;
	static uint64_t x662 = UINT64_MAX;
	int16_t x663 = -1;
	int64_t x664 = INT64_MIN;
	uint64_t t151 = 79649606015LLU;

    t151 = (x661+(x662!=(x663^x664)));

    if (t151 != 910579832985238LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x665 = 1139125251LLU;
	int8_t x666 = -4;
	uint8_t x667 = UINT8_MAX;
	static volatile uint64_t t152 = 226595807535672560LLU;

    t152 = (x665+(x666!=(x667^x668)));

    if (t152 != 1139125252LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x669 = UINT32_MAX;
	uint64_t x670 = 3740595555560LLU;
	static int8_t x671 = INT8_MIN;
	int16_t x672 = INT16_MIN;

    t153 = (x669+(x670!=(x671^x672)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x673 = -1;
	int32_t x674 = -991684;
	int16_t x675 = -3109;
	static int8_t x676 = INT8_MIN;
	static int32_t t154 = 0;

    t154 = (x673+(x674!=(x675^x676)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x679 = UINT16_MAX;
	int64_t x680 = -725649209LL;

    t155 = (x677+(x678!=(x679^x680)));

    if (t155 != 64LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x681 = -9412;
	int16_t x682 = INT16_MIN;
	volatile int64_t x683 = INT64_MIN;
	volatile uint64_t x684 = 3033110497543754LLU;
	int32_t t156 = 25559;

    t156 = (x681+(x682!=(x683^x684)));

    if (t156 != -9411) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x685 = -1;
	int32_t x686 = INT32_MIN;
	volatile int8_t x688 = -2;
	int32_t t157 = 23;

    t157 = (x685+(x686!=(x687^x688)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x689 = INT16_MAX;
	volatile int32_t x691 = -1;
	int64_t x692 = INT64_MIN;
	volatile int32_t t158 = 4342;

    t158 = (x689+(x690!=(x691^x692)));

    if (t158 != 32768) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x693 = -1;
	volatile int32_t x695 = INT32_MIN;
	volatile int32_t t159 = 50862272;

    t159 = (x693+(x694!=(x695^x696)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x697 = 3U;
	int64_t x698 = INT64_MIN;
	static int8_t x699 = -13;
	uint32_t x700 = 3837U;
	volatile int32_t t160 = -11;

    t160 = (x697+(x698!=(x699^x700)));

    if (t160 != 4) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x701 = 1799069U;
	uint64_t x702 = UINT64_MAX;
	int64_t x703 = -1403565LL;
	volatile uint16_t x704 = UINT16_MAX;
	volatile uint32_t t161 = 600U;

    t161 = (x701+(x702!=(x703^x704)));

    if (t161 != 1799070U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x705 = INT16_MAX;
	int32_t x706 = -1;
	uint32_t x707 = 4317U;
	static volatile int16_t x708 = INT16_MAX;
	volatile int32_t t162 = 0;

    t162 = (x705+(x706!=(x707^x708)));

    if (t162 != 32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x709 = -34;
	int8_t x710 = INT8_MIN;
	volatile int8_t x711 = 1;
	int32_t x712 = INT32_MIN;
	int32_t t163 = -164020747;

    t163 = (x709+(x710!=(x711^x712)));

    if (t163 != -33) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x713 = 16U;
	static int64_t x714 = -1LL;
	int8_t x715 = INT8_MAX;
	volatile int32_t x716 = INT32_MIN;

    t164 = (x713+(x714!=(x715^x716)));

    if (t164 != 17) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint32_t x718 = 5976U;
	static int64_t x719 = INT64_MIN;
	volatile int64_t t165 = -3636295798951LL;

    t165 = (x717+(x718!=(x719^x720)));

    if (t165 != -66416661971LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x721 = 162;
	uint8_t x723 = 0U;
	volatile int32_t t166 = -2634951;

    t166 = (x721+(x722!=(x723^x724)));

    if (t166 != 163) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x725 = UINT64_MAX;
	uint16_t x726 = 1354U;
	int8_t x727 = -1;
	uint64_t t167 = 34395LLU;

    t167 = (x725+(x726!=(x727^x728)));

    if (t167 != 0LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x729 = 1;
	int16_t x730 = INT16_MIN;
	uint64_t x731 = UINT64_MAX;
	uint32_t x732 = 19U;
	int32_t t168 = -15;

    t168 = (x729+(x730!=(x731^x732)));

    if (t168 != 2) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x733 = -13;
	uint64_t x734 = 2LLU;
	static int32_t x735 = INT32_MIN;
	int32_t x736 = -1;

    t169 = (x733+(x734!=(x735^x736)));

    if (t169 != -12) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x737 = UINT32_MAX;
	int32_t x738 = INT32_MAX;
	uint64_t x739 = UINT64_MAX;
	uint8_t x740 = UINT8_MAX;
	volatile uint32_t t170 = 4743847U;

    t170 = (x737+(x738!=(x739^x740)));

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x741 = -1;
	int32_t x742 = INT32_MAX;
	int32_t x743 = INT32_MIN;
	uint16_t x744 = 23569U;
	volatile int32_t t171 = -62757422;

    t171 = (x741+(x742!=(x743^x744)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x745 = INT32_MIN;
	volatile uint16_t x746 = UINT16_MAX;
	int16_t x747 = 134;
	int8_t x748 = 0;
	int32_t t172 = -161115456;

    t172 = (x745+(x746!=(x747^x748)));

    if (t172 != -2147483647) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x749 = 114092408U;
	int32_t x750 = INT32_MIN;
	int8_t x751 = INT8_MAX;
	volatile int32_t x752 = INT32_MIN;
	volatile uint32_t t173 = 128U;

    t173 = (x749+(x750!=(x751^x752)));

    if (t173 != 114092409U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x753 = 4U;
	int32_t x754 = -1994453;
	int64_t x755 = 94LL;
	int32_t t174 = 16;

    t174 = (x753+(x754!=(x755^x756)));

    if (t174 != 5) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x757 = INT64_MIN;
	int16_t x758 = INT16_MIN;
	uint16_t x759 = UINT16_MAX;
	static volatile int64_t t175 = -21LL;

    t175 = (x757+(x758!=(x759^x760)));

    if (t175 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x762 = UINT8_MAX;
	int64_t x763 = -14849LL;
	int32_t x764 = INT32_MAX;
	int32_t t176 = -2;

    t176 = (x761+(x762!=(x763^x764)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x766 = -19529556;
	uint16_t x767 = 1880U;

    t177 = (x765+(x766!=(x767^x768)));

    if (t177 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x769 = -1;
	uint32_t x770 = UINT32_MAX;
	int16_t x771 = -1;
	int64_t x772 = INT64_MAX;
	volatile int32_t t178 = 4029;

    t178 = (x769+(x770!=(x771^x772)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x774 = -1;
	uint16_t x775 = 10U;
	int64_t x776 = INT64_MIN;
	int64_t t179 = 434051092LL;

    t179 = (x773+(x774!=(x775^x776)));

    if (t179 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x777 = UINT32_MAX;
	static int32_t x779 = 0;
	int64_t x780 = 104621950676LL;
	uint32_t t180 = 195205143U;

    t180 = (x777+(x778!=(x779^x780)));

    if (t180 != 0U) { NG(); } else { ; }
	
}

void f181(void) {
    	static int8_t x781 = -1;
	uint16_t x782 = 1U;
	uint32_t x783 = 75468U;
	uint8_t x784 = 26U;
	static volatile int32_t t181 = 67154;

    t181 = (x781+(x782!=(x783^x784)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x785 = -1;
	int64_t x786 = INT64_MIN;
	int32_t x788 = -13573630;
	volatile int32_t t182 = 221852826;

    t182 = (x785+(x786!=(x787^x788)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x792 = UINT16_MAX;
	volatile int32_t t183 = 21001;

    t183 = (x789+(x790!=(x791^x792)));

    if (t183 != -127) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x793 = -732;
	int8_t x794 = 5;
	int8_t x795 = INT8_MIN;
	volatile int32_t x796 = -5212973;
	volatile int32_t t184 = -105;

    t184 = (x793+(x794!=(x795^x796)));

    if (t184 != -731) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x797 = INT32_MIN;
	int16_t x798 = INT16_MIN;
	int16_t x799 = -55;
	int32_t t185 = 1;

    t185 = (x797+(x798!=(x799^x800)));

    if (t185 != -2147483647) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x801 = -11LL;
	uint8_t x802 = 1U;
	uint16_t x804 = 54U;
	static volatile int64_t t186 = -5448023849526LL;

    t186 = (x801+(x802!=(x803^x804)));

    if (t186 != -10LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x805 = -1LL;
	int32_t x806 = 2709138;
	int64_t t187 = 9258518775533364LL;

    t187 = (x805+(x806!=(x807^x808)));

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x809 = 42U;
	int8_t x810 = INT8_MAX;
	int8_t x811 = INT8_MAX;
	int32_t t188 = -15158;

    t188 = (x809+(x810!=(x811^x812)));

    if (t188 != 43) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x817 = UINT32_MAX;
	volatile int16_t x818 = INT16_MIN;
	static int32_t x820 = INT32_MIN;
	uint32_t t189 = 510882979U;

    t189 = (x817+(x818!=(x819^x820)));

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x821 = 2;
	int8_t x822 = INT8_MIN;
	volatile int16_t x824 = INT16_MAX;

    t190 = (x821+(x822!=(x823^x824)));

    if (t190 != 3) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x825 = 4039LL;
	static uint64_t x826 = 7115033LLU;
	int64_t x827 = -446LL;
	static int16_t x828 = -1;
	int64_t t191 = -7998240097562LL;

    t191 = (x825+(x826!=(x827^x828)));

    if (t191 != 4040LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x831 = -30;
	static int8_t x832 = INT8_MIN;

    t192 = (x829+(x830!=(x831^x832)));

    if (t192 != -2884933965239235LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile int8_t x834 = 1;
	volatile uint32_t x835 = 282719296U;
	static int32_t t193 = 29;

    t193 = (x833+(x834!=(x835^x836)));

    if (t193 != -2147483647) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x837 = INT16_MAX;
	uint32_t x838 = 156538958U;
	static uint8_t x839 = 72U;
	int32_t x840 = INT32_MIN;
	volatile int32_t t194 = 485298;

    t194 = (x837+(x838!=(x839^x840)));

    if (t194 != 32768) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x841 = 11624U;
	uint16_t x842 = UINT16_MAX;
	uint64_t x843 = 475381523804369264LLU;
	int32_t t195 = 10463839;

    t195 = (x841+(x842!=(x843^x844)));

    if (t195 != 11625) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x845 = 4915083689247LL;
	int8_t x846 = -3;
	int32_t x847 = -1;
	int16_t x848 = INT16_MIN;
	int64_t t196 = -12781LL;

    t196 = (x845+(x846!=(x847^x848)));

    if (t196 != 4915083689248LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x849 = INT8_MIN;
	int16_t x851 = -1;
	static int32_t x852 = 613;
	volatile int32_t t197 = 38766204;

    t197 = (x849+(x850!=(x851^x852)));

    if (t197 != -127) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x854 = 1304;
	int8_t x855 = INT8_MIN;
	volatile int32_t t198 = 194949;

    t198 = (x853+(x854!=(x855^x856)));

    if (t198 != -2) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x857 = 68U;
	volatile int16_t x858 = -407;
	int64_t x859 = INT64_MAX;
	volatile uint16_t x860 = 1U;
	volatile int32_t t199 = 123;

    t199 = (x857+(x858!=(x859^x860)));

    if (t199 != 69) { NG(); } else { ; }
	
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

