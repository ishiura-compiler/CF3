
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

int16_t x1 = -1;
int64_t x8 = INT64_MIN;
volatile int32_t t1 = 40;
static volatile int16_t x20 = INT16_MIN;
uint64_t x22 = 68444LLU;
int32_t t4 = 165623;
int16_t x27 = -1;
uint64_t x32 = 18477LLU;
uint32_t x37 = 88U;
uint32_t x40 = 53607081U;
static volatile int32_t t9 = 10;
uint64_t x46 = UINT64_MAX;
volatile int32_t t11 = -110480;
static volatile uint16_t x65 = 2U;
int8_t x67 = 1;
volatile int32_t t13 = -66934348;
int8_t x71 = 0;
int32_t t16 = 58;
static volatile int64_t x82 = -372242368LL;
int32_t t17 = -26;
static int32_t x85 = INT32_MIN;
volatile int32_t t18 = -1;
static int32_t x97 = INT32_MAX;
int32_t x98 = INT32_MIN;
static uint16_t x100 = 52U;
static int32_t t21 = 6503441;
int8_t x104 = 28;
int16_t x107 = -123;
static int64_t x112 = INT64_MIN;
volatile int32_t x115 = 1335;
int8_t x126 = INT8_MIN;
int32_t x128 = -1;
static uint8_t x136 = UINT8_MAX;
static uint8_t x146 = UINT8_MAX;
uint32_t x149 = UINT32_MAX;
volatile int32_t t32 = -21618;
int32_t t34 = -1045343;
uint8_t x172 = 31U;
int8_t x173 = INT8_MIN;
volatile uint16_t x174 = 1U;
uint32_t x179 = 5853U;
int16_t x180 = INT16_MAX;
int8_t x202 = -1;
uint16_t x206 = 554U;
int16_t x207 = -1;
int32_t t43 = -6804;
uint16_t x214 = 8354U;
int8_t x220 = INT8_MIN;
uint32_t x229 = 30576250U;
uint16_t x231 = 183U;
volatile int64_t x233 = INT64_MIN;
int8_t x242 = INT8_MAX;
uint8_t x245 = UINT8_MAX;
uint16_t x246 = UINT16_MAX;
uint32_t x247 = 6U;
volatile int32_t t52 = -1;
int32_t t53 = 70;
int32_t x256 = INT32_MIN;
volatile int8_t x257 = INT8_MAX;
static int64_t x259 = 59LL;
int32_t t55 = 8167;
uint32_t x263 = UINT32_MAX;
uint64_t x266 = 26760LLU;
static uint8_t x267 = 3U;
int64_t x268 = -25807683486422LL;
static volatile int16_t x269 = -1;
volatile int32_t t58 = -849581;
static int32_t x273 = -3;
static int32_t x277 = -1;
int64_t x280 = 3187398859LL;
int16_t x287 = -1;
int32_t t65 = 147;
int32_t t66 = -2514083;
volatile int32_t t67 = -24931;
static volatile uint8_t x315 = 48U;
int8_t x324 = -29;
uint8_t x335 = 1U;
int32_t x350 = 65070;
static int16_t x352 = 114;
volatile int64_t x356 = -1899460LL;
int8_t x365 = INT8_MAX;
int32_t t81 = -447;
volatile int32_t x377 = INT32_MIN;
volatile uint8_t x383 = 9U;
int64_t x387 = -1LL;
static int16_t x393 = 443;
volatile int32_t t87 = -1070238890;
uint64_t x397 = 244642532302485LLU;
int64_t x404 = -3075457893072781796LL;
static int32_t t89 = 926865862;
int32_t x411 = -127716446;
int32_t t90 = 2253408;
int64_t x421 = -1LL;
int16_t x422 = -1;
volatile int64_t x423 = -121176951539370LL;
int64_t x424 = INT64_MIN;
static uint16_t x429 = 96U;
int32_t x430 = 3;
static volatile uint16_t x433 = 1830U;
int16_t x434 = -1;
int16_t x437 = 79;
int32_t x440 = -1;
static uint16_t x448 = 10U;
volatile int16_t x452 = 316;
volatile int32_t t100 = -11182;
uint8_t x473 = 0U;
uint8_t x477 = 6U;
static int64_t x478 = INT64_MIN;
int8_t x485 = 9;
volatile int32_t x486 = -1;
static volatile int64_t x488 = INT64_MAX;
volatile uint64_t x492 = 6093300025119LLU;
static int32_t t109 = 807101;
static uint32_t x493 = 901U;
volatile int32_t t110 = 12;
uint64_t x500 = 256493766809LLU;
int32_t t111 = -25372054;
uint16_t x505 = 1U;
static volatile int8_t x506 = INT8_MAX;
int32_t x509 = INT32_MIN;
int32_t x510 = -66704895;
volatile int32_t t115 = 317;
volatile int32_t t116 = -54;
int64_t x527 = 1174859879114632564LL;
static uint16_t x531 = 13393U;
int64_t x537 = INT64_MIN;
int32_t x538 = 20615;
static uint16_t x540 = UINT16_MAX;
uint8_t x546 = UINT8_MAX;
int16_t x557 = 11982;
volatile int32_t t125 = -1;
int16_t x565 = -13;
volatile int64_t x570 = INT64_MAX;
volatile uint16_t x572 = UINT16_MAX;
int32_t x576 = INT32_MIN;
int32_t t128 = -738400;
uint16_t x581 = 14U;
uint16_t x584 = 8914U;
int32_t t130 = 1563104;
volatile int8_t x594 = 0;
uint32_t x602 = UINT32_MAX;
static uint64_t x605 = UINT64_MAX;
volatile int32_t x612 = 100425643;
int16_t x615 = -1;
int8_t x617 = -1;
uint64_t x625 = 13LLU;
int32_t t141 = -15;
uint32_t x632 = 540U;
uint16_t x646 = 787U;
uint64_t x652 = 17547655792LLU;
int8_t x655 = INT8_MIN;
static int32_t x656 = INT32_MAX;
volatile int32_t t148 = 15661699;
int8_t x657 = INT8_MAX;
int8_t x663 = INT8_MAX;
uint16_t x669 = 0U;
int32_t x677 = -1;
int8_t x678 = 15;
static int32_t t155 = 2;
int16_t x686 = INT16_MIN;
volatile int64_t x687 = -31865LL;
static int64_t x698 = INT64_MAX;
int8_t x701 = -1;
uint64_t x707 = UINT64_MAX;
volatile int32_t t160 = -8825;
volatile int16_t x713 = INT16_MIN;
static volatile int32_t t162 = -1;
uint64_t x721 = UINT64_MAX;
int32_t x733 = INT32_MIN;
int8_t x737 = -1;
static uint16_t x751 = 8915U;
int16_t x753 = INT16_MIN;
volatile int32_t t171 = -4008;
int32_t x769 = INT32_MIN;
uint8_t x771 = 1U;
int32_t t173 = 3479;
static volatile int64_t x773 = -1LL;
int32_t x777 = -1;
uint64_t x779 = UINT64_MAX;
int32_t t175 = -18;
volatile int16_t x781 = INT16_MAX;
int32_t x786 = INT32_MAX;
static volatile int32_t t177 = 1951;
int8_t x792 = 1;
volatile int32_t t178 = 898450125;
uint32_t x806 = 228U;
uint32_t x811 = 15U;
int32_t x818 = -1;
int64_t x826 = INT64_MIN;
volatile int32_t t185 = -9374;
uint64_t x833 = UINT64_MAX;
volatile int32_t t186 = 7759837;
int16_t x837 = 0;
static uint64_t x844 = 15854538823382502LLU;
int16_t x847 = 55;
int32_t x855 = -27777;
int64_t x863 = -8113562656LL;
int16_t x864 = INT16_MAX;
int16_t x868 = INT16_MIN;
int16_t x871 = 1;
volatile int32_t x893 = -1;
int32_t x896 = 15673;
volatile int32_t t199 = 904477;


void f0(void) {
    	int8_t x2 = 1;
	int16_t x3 = -14;
	uint8_t x4 = 45U;
	int32_t t0 = -5894451;

    t0 = ((x1^(x2-x3))>x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 606413LLU;
	int8_t x6 = -21;
	uint8_t x7 = UINT8_MAX;

    t1 = ((x5^(x6-x7))>x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x13 = 0U;
	uint64_t x14 = 32782782436LLU;
	uint8_t x15 = UINT8_MAX;
	int8_t x16 = -1;
	int32_t t2 = -5041790;

    t2 = ((x13^(x14-x15))>x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x17 = UINT16_MAX;
	int32_t x18 = INT32_MIN;
	int64_t x19 = 3396501732407864LL;
	int32_t t3 = -1;

    t3 = ((x17^(x18-x19))>x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x21 = 17U;
	static volatile int32_t x23 = -1;
	static int16_t x24 = INT16_MIN;

    t4 = ((x21^(x22-x23))>x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x25 = INT64_MIN;
	volatile int8_t x26 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t5 = -2375638;

    t5 = ((x25^(x26-x27))>x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 0U;
	uint8_t x30 = 20U;
	static int8_t x31 = -1;
	int32_t t6 = -14647341;

    t6 = ((x29^(x30-x31))>x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = 6;
	volatile int64_t x34 = INT64_MAX;
	static int32_t x35 = 90;
	int32_t x36 = INT32_MIN;
	int32_t t7 = -640849;

    t7 = ((x33^(x34-x35))>x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = -3;
	uint32_t x39 = 876U;
	volatile int32_t t8 = -10;

    t8 = ((x37^(x38-x39))>x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint16_t x41 = UINT16_MAX;
	static int32_t x42 = -1;
	uint8_t x43 = 2U;
	int32_t x44 = 2;

    t9 = ((x41^(x42-x43))>x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x45 = -1LL;
	static volatile uint64_t x47 = 1553LLU;
	int8_t x48 = 2;
	volatile int32_t t10 = -22;

    t10 = ((x45^(x46-x47))>x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x53 = 241U;
	int32_t x54 = 788600386;
	static int16_t x55 = INT16_MIN;
	static uint64_t x56 = UINT64_MAX;

    t11 = ((x53^(x54-x55))>x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x57 = -2534499311LL;
	int16_t x58 = INT16_MIN;
	uint32_t x59 = 96941704U;
	int64_t x60 = 271358799694LL;
	static volatile int32_t t12 = -37516;

    t12 = ((x57^(x58-x59))>x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x66 = 33836LL;
	int64_t x68 = -266005334775LL;

    t13 = ((x65^(x66-x67))>x68);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x69 = 38236243U;
	int8_t x70 = -6;
	volatile int8_t x72 = 0;
	int32_t t14 = -3697484;

    t14 = ((x69^(x70-x71))>x72);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x73 = -3;
	int64_t x74 = INT64_MIN;
	int32_t x75 = -471324;
	uint64_t x76 = 62735449959LLU;
	static int32_t t15 = 89618;

    t15 = ((x73^(x74-x75))>x76);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x77 = INT16_MAX;
	int16_t x78 = 5;
	int64_t x79 = 99149882LL;
	int64_t x80 = INT64_MAX;

    t16 = ((x77^(x78-x79))>x80);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x81 = 32195;
	int32_t x83 = -28343;
	int16_t x84 = -1;

    t17 = ((x81^(x82-x83))>x84);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x86 = 0;
	int8_t x87 = INT8_MAX;
	static volatile int64_t x88 = 12580725531LL;

    t18 = ((x85^(x86-x87))>x88);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = INT32_MIN;
	uint16_t x90 = 17U;
	int16_t x91 = INT16_MIN;
	int8_t x92 = INT8_MAX;
	int32_t t19 = -92003;

    t19 = ((x89^(x90-x91))>x92);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x93 = INT32_MAX;
	int8_t x94 = INT8_MIN;
	static int64_t x95 = INT64_MIN;
	int64_t x96 = -1LL;
	volatile int32_t t20 = 333;

    t20 = ((x93^(x94-x95))>x96);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x99 = INT64_MIN;

    t21 = ((x97^(x98-x99))>x100);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x101 = 52U;
	static int16_t x102 = 16350;
	int16_t x103 = INT16_MAX;
	volatile int32_t t22 = 1834;

    t22 = ((x101^(x102-x103))>x104);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x105 = UINT32_MAX;
	uint32_t x106 = UINT32_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t23 = 1883713;

    t23 = ((x105^(x106-x107))>x108);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 1518918LLU;
	static volatile int32_t x110 = -1;
	int16_t x111 = INT16_MAX;
	volatile int32_t t24 = -223;

    t24 = ((x109^(x110-x111))>x112);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x113 = 0U;
	int16_t x114 = 967;
	volatile int32_t x116 = INT32_MIN;
	int32_t t25 = -1;

    t25 = ((x113^(x114-x115))>x116);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint8_t x121 = UINT8_MAX;
	static volatile int8_t x122 = INT8_MIN;
	static int64_t x123 = INT64_MIN;
	int64_t x124 = -436LL;
	volatile int32_t t26 = 4639;

    t26 = ((x121^(x122-x123))>x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = 1101U;
	int64_t x127 = -1LL;
	volatile int32_t t27 = -24922371;

    t27 = ((x125^(x126-x127))>x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile uint8_t x133 = 3U;
	static volatile int64_t x134 = INT64_MAX;
	volatile uint16_t x135 = UINT16_MAX;
	int32_t t28 = -2417;

    t28 = ((x133^(x134-x135))>x136);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x141 = INT64_MIN;
	int64_t x142 = -1LL;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	volatile int32_t t29 = 214;

    t29 = ((x141^(x142-x143))>x144);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x145 = UINT64_MAX;
	static int16_t x147 = INT16_MIN;
	volatile uint16_t x148 = 1738U;
	int32_t t30 = -10883;

    t30 = ((x145^(x146-x147))>x148);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x150 = UINT16_MAX;
	uint8_t x151 = 48U;
	int64_t x152 = INT64_MIN;
	static volatile int32_t t31 = 1674;

    t31 = ((x149^(x150-x151))>x152);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x153 = -1;
	int8_t x154 = -1;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;

    t32 = ((x153^(x154-x155))>x156);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x157 = UINT8_MAX;
	int16_t x158 = -1;
	int64_t x159 = -1LL;
	static volatile int8_t x160 = 43;
	int32_t t33 = -187;

    t33 = ((x157^(x158-x159))>x160);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x161 = UINT16_MAX;
	static volatile int16_t x162 = -3;
	volatile uint32_t x163 = 4U;
	static uint16_t x164 = UINT16_MAX;

    t34 = ((x161^(x162-x163))>x164);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x169 = 2255173;
	int16_t x170 = -1;
	static volatile int16_t x171 = 3709;
	volatile int32_t t35 = 3124498;

    t35 = ((x169^(x170-x171))>x172);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x175 = INT32_MAX;
	uint64_t x176 = UINT64_MAX;
	int32_t t36 = 3635;

    t36 = ((x173^(x174-x175))>x176);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x177 = 9487U;
	volatile int32_t x178 = -6647629;
	volatile int32_t t37 = 234683;

    t37 = ((x177^(x178-x179))>x180);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x181 = 3LLU;
	int32_t x182 = 7045;
	volatile uint32_t x183 = 50U;
	int64_t x184 = INT64_MIN;
	int32_t t38 = -103237;

    t38 = ((x181^(x182-x183))>x184);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x185 = INT8_MIN;
	uint64_t x186 = 188585749505655LLU;
	volatile int8_t x187 = 33;
	int8_t x188 = -3;
	volatile int32_t t39 = 13;

    t39 = ((x185^(x186-x187))>x188);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x189 = -1;
	volatile int16_t x190 = -1;
	static int32_t x191 = INT32_MIN;
	volatile int8_t x192 = 7;
	int32_t t40 = 14;

    t40 = ((x189^(x190-x191))>x192);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x197 = -2780;
	int16_t x198 = -1;
	static uint32_t x199 = UINT32_MAX;
	static int32_t x200 = INT32_MIN;
	volatile int32_t t41 = -4614059;

    t41 = ((x197^(x198-x199))>x200);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x201 = INT16_MIN;
	int16_t x203 = -428;
	static int32_t x204 = -11;
	int32_t t42 = 28;

    t42 = ((x201^(x202-x203))>x204);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x205 = 59503U;
	uint8_t x208 = UINT8_MAX;

    t43 = ((x205^(x206-x207))>x208);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = INT16_MIN;
	int32_t x215 = -51;
	volatile int32_t x216 = 3023907;
	static volatile int32_t t44 = -3704302;

    t44 = ((x213^(x214-x215))>x216);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MIN;
	int8_t x219 = 0;
	volatile int32_t t45 = -404770;

    t45 = ((x217^(x218-x219))>x220);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x221 = 2573;
	uint64_t x222 = 87226127696524319LLU;
	int16_t x223 = INT16_MAX;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t46 = 0;

    t46 = ((x221^(x222-x223))>x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x225 = UINT32_MAX;
	uint8_t x226 = 27U;
	uint8_t x227 = 31U;
	uint32_t x228 = UINT32_MAX;
	int32_t t47 = 13;

    t47 = ((x225^(x226-x227))>x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x230 = UINT16_MAX;
	volatile int32_t x232 = -1;
	static volatile int32_t t48 = -462867;

    t48 = ((x229^(x230-x231))>x232);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x234 = 3631U;
	int16_t x235 = -1;
	int16_t x236 = INT16_MAX;
	volatile int32_t t49 = 3;

    t49 = ((x233^(x234-x235))>x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x237 = -1LL;
	volatile uint64_t x238 = 232LLU;
	int16_t x239 = -1;
	uint32_t x240 = 2168064U;
	static int32_t t50 = 51140491;

    t50 = ((x237^(x238-x239))>x240);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x241 = UINT64_MAX;
	uint16_t x243 = UINT16_MAX;
	volatile int8_t x244 = INT8_MIN;
	static volatile int32_t t51 = -6;

    t51 = ((x241^(x242-x243))>x244);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x248 = 15498;

    t52 = ((x245^(x246-x247))>x248);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x249 = INT32_MIN;
	int16_t x250 = -1;
	uint8_t x251 = 60U;
	uint8_t x252 = 3U;

    t53 = ((x249^(x250-x251))>x252);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x253 = 0;
	int16_t x254 = INT16_MIN;
	int16_t x255 = -2;
	int32_t t54 = 387;

    t54 = ((x253^(x254-x255))>x256);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x258 = INT16_MIN;
	int64_t x260 = 3773379228LL;

    t55 = ((x257^(x258-x259))>x260);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x261 = -502;
	static int16_t x262 = INT16_MAX;
	volatile int8_t x264 = INT8_MIN;
	static int32_t t56 = 248;

    t56 = ((x261^(x262-x263))>x264);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x265 = 14936U;
	int32_t t57 = 48745481;

    t57 = ((x265^(x266-x267))>x268);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x270 = INT16_MAX;
	uint64_t x271 = 46668170LLU;
	int16_t x272 = INT16_MAX;

    t58 = ((x269^(x270-x271))>x272);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x274 = INT16_MIN;
	int64_t x275 = INT64_MIN;
	int32_t x276 = 0;
	volatile int32_t t59 = -11852;

    t59 = ((x273^(x274-x275))>x276);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MAX;
	static volatile int32_t t60 = 0;

    t60 = ((x277^(x278-x279))>x280);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x281 = 20U;
	int32_t x282 = -529;
	uint64_t x283 = 12447158LLU;
	int8_t x284 = INT8_MIN;
	int32_t t61 = -204;

    t61 = ((x281^(x282-x283))>x284);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x285 = -15367;
	static uint8_t x286 = UINT8_MAX;
	static uint64_t x288 = UINT64_MAX;
	volatile int32_t t62 = -3;

    t62 = ((x285^(x286-x287))>x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int16_t x289 = INT16_MIN;
	uint8_t x290 = 18U;
	int64_t x291 = -1LL;
	int32_t x292 = INT32_MAX;
	int32_t t63 = 3254;

    t63 = ((x289^(x290-x291))>x292);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x293 = INT16_MAX;
	int64_t x294 = INT64_MIN;
	static int32_t x295 = -1;
	uint32_t x296 = 291U;
	volatile int32_t t64 = -283;

    t64 = ((x293^(x294-x295))>x296);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x297 = INT32_MAX;
	static uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 2U;
	int8_t x300 = -1;

    t65 = ((x297^(x298-x299))>x300);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x301 = UINT16_MAX;
	uint64_t x302 = 51LLU;
	int64_t x303 = INT64_MAX;
	static int32_t x304 = INT32_MAX;

    t66 = ((x301^(x302-x303))>x304);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x305 = 24912U;
	int16_t x306 = -1;
	static int32_t x307 = INT32_MIN;
	volatile int8_t x308 = -1;

    t67 = ((x305^(x306-x307))>x308);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x309 = INT64_MIN;
	uint64_t x310 = 3357693115LLU;
	int16_t x311 = INT16_MAX;
	volatile int8_t x312 = INT8_MIN;
	int32_t t68 = 64191700;

    t68 = ((x309^(x310-x311))>x312);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x313 = 399LLU;
	int32_t x314 = -899270;
	int32_t x316 = INT32_MIN;
	volatile int32_t t69 = -102975;

    t69 = ((x313^(x314-x315))>x316);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x317 = -1LL;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	static volatile int32_t t70 = -21;

    t70 = ((x317^(x318-x319))>x320);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x321 = INT8_MIN;
	static volatile uint8_t x322 = 8U;
	int16_t x323 = -3192;
	int32_t t71 = -2569;

    t71 = ((x321^(x322-x323))>x324);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x325 = 181178932U;
	int8_t x326 = INT8_MIN;
	uint16_t x327 = 1U;
	uint8_t x328 = 3U;
	static volatile int32_t t72 = -77;

    t72 = ((x325^(x326-x327))>x328);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x329 = INT8_MIN;
	volatile int32_t x330 = -203;
	uint64_t x331 = 1445923LLU;
	int32_t x332 = INT32_MIN;
	static int32_t t73 = -48;

    t73 = ((x329^(x330-x331))>x332);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x333 = 3599;
	static uint8_t x334 = UINT8_MAX;
	int32_t x336 = 1;
	int32_t t74 = -691;

    t74 = ((x333^(x334-x335))>x336);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = 8;
	static int16_t x338 = -455;
	int64_t x339 = -186064273049LL;
	static int16_t x340 = -1;
	volatile int32_t t75 = 63550;

    t75 = ((x337^(x338-x339))>x340);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x341 = 1912252LLU;
	int16_t x342 = INT16_MIN;
	int64_t x343 = -1LL;
	int32_t x344 = -8;
	volatile int32_t t76 = -81;

    t76 = ((x341^(x342-x343))>x344);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = -1LL;
	uint16_t x351 = 1U;
	volatile int32_t t77 = 178;

    t77 = ((x349^(x350-x351))>x352);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x353 = INT32_MAX;
	int16_t x354 = -36;
	uint16_t x355 = UINT16_MAX;
	int32_t t78 = 3;

    t78 = ((x353^(x354-x355))>x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MAX;
	static uint64_t x359 = UINT64_MAX;
	volatile uint64_t x360 = UINT64_MAX;
	volatile int32_t t79 = -6064;

    t79 = ((x357^(x358-x359))>x360);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x366 = 2958474329164LLU;
	volatile int8_t x367 = 9;
	static volatile int64_t x368 = INT64_MIN;
	static volatile int32_t t80 = -14863903;

    t80 = ((x365^(x366-x367))>x368);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int32_t x369 = INT32_MAX;
	int32_t x370 = -491133569;
	volatile uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MIN;

    t81 = ((x369^(x370-x371))>x372);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x373 = 23;
	uint32_t x374 = UINT32_MAX;
	static int8_t x375 = INT8_MIN;
	uint16_t x376 = 883U;
	int32_t t82 = 227341360;

    t82 = ((x373^(x374-x375))>x376);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x378 = -1;
	int64_t x379 = INT64_MAX;
	uint16_t x380 = 11U;
	int32_t t83 = 565;

    t83 = ((x377^(x378-x379))>x380);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x381 = INT32_MAX;
	volatile int32_t x382 = -202457;
	int32_t x384 = -120633;
	volatile int32_t t84 = 48628;

    t84 = ((x381^(x382-x383))>x384);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x385 = INT32_MAX;
	int64_t x386 = -2606644360LL;
	int32_t x388 = 99604866;
	volatile int32_t t85 = 67736;

    t85 = ((x385^(x386-x387))>x388);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	int32_t x391 = -16;
	int16_t x392 = INT16_MIN;
	static int32_t t86 = -87672;

    t86 = ((x389^(x390-x391))>x392);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x394 = 350073571814LLU;
	uint32_t x395 = UINT32_MAX;
	int64_t x396 = 0LL;

    t87 = ((x393^(x394-x395))>x396);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x398 = UINT8_MAX;
	int32_t x399 = -1;
	uint32_t x400 = 115248U;
	static volatile int32_t t88 = 16386592;

    t88 = ((x397^(x398-x399))>x400);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x401 = INT64_MIN;
	uint8_t x402 = 3U;
	int8_t x403 = 3;

    t89 = ((x401^(x402-x403))>x404);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x409 = INT32_MIN;
	static uint64_t x410 = 52318286437245561LLU;
	static int16_t x412 = INT16_MIN;

    t90 = ((x409^(x410-x411))>x412);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x413 = INT64_MIN;
	int8_t x414 = INT8_MAX;
	uint64_t x415 = 497245401LLU;
	static volatile int32_t x416 = INT32_MIN;
	int32_t t91 = 1;

    t91 = ((x413^(x414-x415))>x416);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = 254;
	int16_t x418 = INT16_MAX;
	uint8_t x419 = 108U;
	int8_t x420 = INT8_MIN;
	static int32_t t92 = -28238388;

    t92 = ((x417^(x418-x419))>x420);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t t93 = -5;

    t93 = ((x421^(x422-x423))>x424);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = 0;
	static int32_t x426 = -29678008;
	uint16_t x427 = 895U;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t94 = -42;

    t94 = ((x425^(x426-x427))>x428);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x431 = 0;
	int16_t x432 = -27;
	static int32_t t95 = -63243;

    t95 = ((x429^(x430-x431))>x432);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x435 = 1500;
	int64_t x436 = INT64_MAX;
	static volatile int32_t t96 = -314;

    t96 = ((x433^(x434-x435))>x436);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x438 = -1;
	int16_t x439 = INT16_MIN;
	volatile int32_t t97 = 6675;

    t97 = ((x437^(x438-x439))>x440);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MIN;
	uint32_t x443 = 1U;
	volatile int16_t x444 = -101;
	volatile int32_t t98 = -1038928;

    t98 = ((x441^(x442-x443))>x444);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x445 = -1;
	uint32_t x446 = 73U;
	int8_t x447 = 11;
	int32_t t99 = 1;

    t99 = ((x445^(x446-x447))>x448);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x449 = INT32_MIN;
	volatile int8_t x450 = INT8_MIN;
	static uint8_t x451 = UINT8_MAX;

    t100 = ((x449^(x450-x451))>x452);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x457 = -17LL;
	int32_t x458 = -9371261;
	int16_t x459 = -49;
	volatile int32_t x460 = INT32_MIN;
	static int32_t t101 = 4949;

    t101 = ((x457^(x458-x459))>x460);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x461 = -1;
	uint64_t x462 = UINT64_MAX;
	int32_t x463 = -251;
	int8_t x464 = -1;
	static int32_t t102 = 2;

    t102 = ((x461^(x462-x463))>x464);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x465 = INT32_MAX;
	volatile int64_t x466 = INT64_MIN;
	int16_t x467 = -2;
	int8_t x468 = 1;
	int32_t t103 = -1780;

    t103 = ((x465^(x466-x467))>x468);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x469 = UINT32_MAX;
	int16_t x470 = -62;
	int64_t x471 = INT64_MIN;
	volatile uint64_t x472 = 2LLU;
	volatile int32_t t104 = 28;

    t104 = ((x469^(x470-x471))>x472);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x474 = -1;
	static uint64_t x475 = 6603LLU;
	int16_t x476 = INT16_MIN;
	int32_t t105 = -5;

    t105 = ((x473^(x474-x475))>x476);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x479 = -1;
	uint16_t x480 = 20440U;
	static volatile int32_t t106 = 4584;

    t106 = ((x477^(x478-x479))>x480);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x481 = -1;
	int32_t x482 = -1;
	uint64_t x483 = 3LLU;
	int32_t x484 = INT32_MIN;
	int32_t t107 = -1;

    t107 = ((x481^(x482-x483))>x484);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x487 = -1;
	volatile int32_t t108 = 35575;

    t108 = ((x485^(x486-x487))>x488);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint32_t x489 = 27536836U;
	int64_t x490 = -11150756153LL;
	volatile uint8_t x491 = 1U;

    t109 = ((x489^(x490-x491))>x492);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x494 = INT16_MIN;
	static uint64_t x495 = 11235LLU;
	static volatile int32_t x496 = -1;

    t110 = ((x493^(x494-x495))>x496);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x497 = -1LL;
	volatile uint16_t x498 = 361U;
	uint64_t x499 = 12LLU;

    t111 = ((x497^(x498-x499))>x500);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x501 = INT8_MAX;
	uint8_t x502 = 125U;
	uint8_t x503 = 8U;
	volatile int8_t x504 = 4;
	int32_t t112 = 1;

    t112 = ((x501^(x502-x503))>x504);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x507 = 7258U;
	static int8_t x508 = 47;
	volatile int32_t t113 = 1542;

    t113 = ((x505^(x506-x507))>x508);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x511 = INT8_MAX;
	static int64_t x512 = 2040443843171148LL;
	static volatile int32_t t114 = 600;

    t114 = ((x509^(x510-x511))>x512);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x513 = -1;
	static uint16_t x514 = 45U;
	int16_t x515 = 35;
	uint64_t x516 = 7568167008LLU;

    t115 = ((x513^(x514-x515))>x516);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x521 = 0;
	int8_t x522 = 1;
	uint16_t x523 = UINT16_MAX;
	uint16_t x524 = 29551U;

    t116 = ((x521^(x522-x523))>x524);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x525 = -1;
	static uint64_t x526 = 23608LLU;
	int64_t x528 = 1773171814341681826LL;
	volatile int32_t t117 = 11672;

    t117 = ((x525^(x526-x527))>x528);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x529 = INT64_MAX;
	int8_t x530 = -6;
	static int8_t x532 = -1;
	volatile int32_t t118 = -586;

    t118 = ((x529^(x530-x531))>x532);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x539 = 58U;
	int32_t t119 = 15;

    t119 = ((x537^(x538-x539))>x540);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x541 = 313425350U;
	int16_t x542 = 11;
	static volatile int32_t x543 = INT32_MAX;
	volatile int8_t x544 = INT8_MIN;
	volatile int32_t t120 = 133;

    t120 = ((x541^(x542-x543))>x544);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x545 = INT8_MAX;
	static uint8_t x547 = 39U;
	uint8_t x548 = 103U;
	volatile int32_t t121 = 2;

    t121 = ((x545^(x546-x547))>x548);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x549 = -5992;
	int32_t x550 = INT32_MAX;
	uint32_t x551 = 176379394U;
	int16_t x552 = INT16_MIN;
	static volatile int32_t t122 = 133196;

    t122 = ((x549^(x550-x551))>x552);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x553 = INT32_MIN;
	int16_t x554 = INT16_MAX;
	int32_t x555 = -164421019;
	int16_t x556 = INT16_MIN;
	int32_t t123 = 10928;

    t123 = ((x553^(x554-x555))>x556);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x558 = UINT8_MAX;
	uint16_t x559 = UINT16_MAX;
	int16_t x560 = 7;
	int32_t t124 = -3;

    t124 = ((x557^(x558-x559))>x560);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x561 = 58U;
	int8_t x562 = INT8_MAX;
	int16_t x563 = INT16_MIN;
	uint16_t x564 = 2U;

    t125 = ((x561^(x562-x563))>x564);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int16_t x566 = -1;
	int64_t x567 = -4LL;
	static int16_t x568 = -6432;
	volatile int32_t t126 = -492020;

    t126 = ((x565^(x566-x567))>x568);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x569 = 0U;
	uint16_t x571 = 1U;
	volatile int32_t t127 = -153609734;

    t127 = ((x569^(x570-x571))>x572);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x573 = 41U;
	volatile int16_t x574 = 1;
	int16_t x575 = -15;

    t128 = ((x573^(x574-x575))>x576);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int16_t x577 = -60;
	int32_t x578 = -1948176;
	int8_t x579 = INT8_MIN;
	int16_t x580 = 1;
	int32_t t129 = 113;

    t129 = ((x577^(x578-x579))>x580);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int64_t x582 = 6225LL;
	int16_t x583 = -1;

    t130 = ((x581^(x582-x583))>x584);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x585 = INT32_MIN;
	int16_t x586 = -311;
	uint16_t x587 = 2785U;
	static int16_t x588 = INT16_MAX;
	int32_t t131 = 421846524;

    t131 = ((x585^(x586-x587))>x588);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int64_t x589 = INT64_MAX;
	uint32_t x590 = 431U;
	static int32_t x591 = 12242;
	uint16_t x592 = UINT16_MAX;
	static volatile int32_t t132 = 78200550;

    t132 = ((x589^(x590-x591))>x592);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint32_t x593 = 287413U;
	int16_t x595 = INT16_MIN;
	volatile int16_t x596 = -353;
	static volatile int32_t t133 = 3508;

    t133 = ((x593^(x594-x595))>x596);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x597 = INT32_MIN;
	uint8_t x598 = UINT8_MAX;
	volatile int64_t x599 = -1LL;
	int8_t x600 = 0;
	int32_t t134 = 1130;

    t134 = ((x597^(x598-x599))>x600);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint64_t x601 = UINT64_MAX;
	static uint16_t x603 = 101U;
	int64_t x604 = INT64_MIN;
	volatile int32_t t135 = 182407;

    t135 = ((x601^(x602-x603))>x604);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x606 = -79;
	uint16_t x607 = UINT16_MAX;
	int16_t x608 = -1;
	static volatile int32_t t136 = -63537;

    t136 = ((x605^(x606-x607))>x608);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x609 = -1;
	int16_t x610 = INT16_MAX;
	uint64_t x611 = UINT64_MAX;
	int32_t t137 = 591286064;

    t137 = ((x609^(x610-x611))>x612);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	static int8_t x614 = INT8_MAX;
	int64_t x616 = INT64_MIN;
	volatile int32_t t138 = 279;

    t138 = ((x613^(x614-x615))>x616);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x618 = 5U;
	static int32_t x619 = INT32_MIN;
	int64_t x620 = -1LL;
	int32_t t139 = -3707;

    t139 = ((x617^(x618-x619))>x620);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x621 = UINT8_MAX;
	uint32_t x622 = 465838U;
	static int16_t x623 = -1;
	uint16_t x624 = 1U;
	volatile int32_t t140 = 152626;

    t140 = ((x621^(x622-x623))>x624);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x626 = INT32_MAX;
	volatile uint8_t x627 = 3U;
	volatile int8_t x628 = INT8_MIN;

    t141 = ((x625^(x626-x627))>x628);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x629 = -1LL;
	int32_t x630 = INT32_MAX;
	uint8_t x631 = 67U;
	int32_t t142 = -2721;

    t142 = ((x629^(x630-x631))>x632);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x633 = 16755278LLU;
	int64_t x634 = 3855164885452337802LL;
	int64_t x635 = INT64_MAX;
	int64_t x636 = -31054084329LL;
	volatile int32_t t143 = 2364959;

    t143 = ((x633^(x634-x635))>x636);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x637 = UINT16_MAX;
	uint32_t x638 = UINT32_MAX;
	uint8_t x639 = 22U;
	uint16_t x640 = UINT16_MAX;
	static volatile int32_t t144 = 1917740;

    t144 = ((x637^(x638-x639))>x640);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x641 = -1LL;
	uint32_t x642 = 0U;
	volatile uint32_t x643 = UINT32_MAX;
	static int64_t x644 = -1LL;
	volatile int32_t t145 = 1;

    t145 = ((x641^(x642-x643))>x644);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x645 = UINT64_MAX;
	uint8_t x647 = 26U;
	int8_t x648 = INT8_MAX;
	int32_t t146 = -30585787;

    t146 = ((x645^(x646-x647))>x648);

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x649 = 11U;
	uint16_t x650 = UINT16_MAX;
	volatile uint8_t x651 = 6U;
	int32_t t147 = -3802052;

    t147 = ((x649^(x650-x651))>x652);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x653 = -1LL;
	uint32_t x654 = 5U;

    t148 = ((x653^(x654-x655))>x656);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x658 = 27U;
	uint16_t x659 = UINT16_MAX;
	uint64_t x660 = UINT64_MAX;
	static int32_t t149 = 1;

    t149 = ((x657^(x658-x659))>x660);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x661 = 211U;
	int8_t x662 = INT8_MAX;
	int64_t x664 = INT64_MAX;
	static int32_t t150 = 215;

    t150 = ((x661^(x662-x663))>x664);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x665 = INT8_MIN;
	int32_t x666 = 1;
	static int64_t x667 = -4058326281474930610LL;
	uint32_t x668 = 802635U;
	int32_t t151 = 0;

    t151 = ((x665^(x666-x667))>x668);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x670 = 127390;
	uint16_t x671 = 4U;
	int32_t x672 = -134942;
	int32_t t152 = 199824784;

    t152 = ((x669^(x670-x671))>x672);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x673 = 4U;
	static int8_t x674 = INT8_MAX;
	uint64_t x675 = 3673LLU;
	uint16_t x676 = 1753U;
	static volatile int32_t t153 = 2145765;

    t153 = ((x673^(x674-x675))>x676);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x679 = 595U;
	int32_t x680 = INT32_MAX;
	volatile int32_t t154 = -100;

    t154 = ((x677^(x678-x679))>x680);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x681 = INT64_MIN;
	int64_t x682 = -1910396453676905242LL;
	int8_t x683 = INT8_MAX;
	int32_t x684 = -1;

    t155 = ((x681^(x682-x683))>x684);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x685 = -11442400288155628LL;
	uint16_t x688 = 21U;
	volatile int32_t t156 = -381598;

    t156 = ((x685^(x686-x687))>x688);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x693 = 1;
	volatile int64_t x694 = INT64_MIN;
	volatile uint64_t x695 = 25283532797LLU;
	int8_t x696 = INT8_MIN;
	int32_t t157 = 0;

    t157 = ((x693^(x694-x695))>x696);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int32_t x697 = INT32_MIN;
	static uint16_t x699 = 21U;
	volatile int64_t x700 = INT64_MIN;
	volatile int32_t t158 = -88840;

    t158 = ((x697^(x698-x699))>x700);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x702 = 5;
	volatile uint16_t x703 = 22U;
	uint32_t x704 = UINT32_MAX;
	volatile int32_t t159 = 4174549;

    t159 = ((x701^(x702-x703))>x704);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x705 = INT64_MAX;
	volatile int64_t x706 = -11265403445177LL;
	int8_t x708 = -23;

    t160 = ((x705^(x706-x707))>x708);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x714 = 1;
	static int32_t x715 = -374439610;
	static int16_t x716 = INT16_MIN;
	volatile int32_t t161 = 1;

    t161 = ((x713^(x714-x715))>x716);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x717 = UINT32_MAX;
	int64_t x718 = INT64_MIN;
	static int8_t x719 = -3;
	static volatile uint64_t x720 = 1260819322342774465LLU;

    t162 = ((x717^(x718-x719))>x720);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x722 = -1LL;
	uint64_t x723 = 1LLU;
	static int8_t x724 = INT8_MIN;
	volatile int32_t t163 = -29;

    t163 = ((x721^(x722-x723))>x724);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x729 = INT64_MAX;
	int16_t x730 = 1;
	int64_t x731 = -273621765233LL;
	volatile int32_t x732 = 9207761;
	int32_t t164 = -59599053;

    t164 = ((x729^(x730-x731))>x732);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x734 = 23069399750LLU;
	int32_t x735 = 339980;
	int8_t x736 = INT8_MAX;
	int32_t t165 = 1;

    t165 = ((x733^(x734-x735))>x736);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x738 = UINT8_MAX;
	uint8_t x739 = 1U;
	int16_t x740 = INT16_MIN;
	volatile int32_t t166 = 6443;

    t166 = ((x737^(x738-x739))>x740);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x741 = INT16_MAX;
	int64_t x742 = 100313LL;
	uint32_t x743 = UINT32_MAX;
	static int16_t x744 = INT16_MIN;
	static volatile int32_t t167 = -109;

    t167 = ((x741^(x742-x743))>x744);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x745 = -1;
	volatile uint8_t x746 = 59U;
	int32_t x747 = -1;
	static int8_t x748 = INT8_MAX;
	volatile int32_t t168 = -363568;

    t168 = ((x745^(x746-x747))>x748);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x749 = INT8_MIN;
	uint16_t x750 = UINT16_MAX;
	int64_t x752 = INT64_MAX;
	int32_t t169 = 1523385;

    t169 = ((x749^(x750-x751))>x752);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x754 = 217U;
	volatile int8_t x755 = INT8_MIN;
	static volatile uint8_t x756 = 58U;
	volatile int32_t t170 = 111;

    t170 = ((x753^(x754-x755))>x756);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x757 = INT32_MAX;
	int8_t x758 = INT8_MAX;
	int32_t x759 = INT32_MAX;
	int64_t x760 = -1LL;

    t171 = ((x757^(x758-x759))>x760);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x761 = -1;
	int32_t x762 = 1;
	static volatile int32_t x763 = INT32_MAX;
	uint16_t x764 = 0U;
	volatile int32_t t172 = -30;

    t172 = ((x761^(x762-x763))>x764);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x770 = 31789729U;
	static int8_t x772 = -1;

    t173 = ((x769^(x770-x771))>x772);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x774 = -1LL;
	volatile int8_t x775 = INT8_MAX;
	int16_t x776 = INT16_MIN;
	int32_t t174 = -7161;

    t174 = ((x773^(x774-x775))>x776);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x778 = -14;
	uint64_t x780 = 394089853258LLU;

    t175 = ((x777^(x778-x779))>x780);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x782 = -734;
	static int64_t x783 = -1LL;
	int16_t x784 = INT16_MAX;
	int32_t t176 = -6520188;

    t176 = ((x781^(x782-x783))>x784);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x785 = 5738;
	static uint64_t x787 = 190745091320LLU;
	static uint64_t x788 = UINT64_MAX;

    t177 = ((x785^(x786-x787))>x788);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x789 = INT64_MIN;
	int8_t x790 = INT8_MIN;
	int16_t x791 = 7;

    t178 = ((x789^(x790-x791))>x792);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x793 = INT64_MAX;
	volatile int8_t x794 = -1;
	static volatile int16_t x795 = 5;
	static int16_t x796 = -1;
	int32_t t179 = -818911;

    t179 = ((x793^(x794-x795))>x796);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x797 = INT64_MIN;
	static int16_t x798 = 0;
	uint32_t x799 = UINT32_MAX;
	static int8_t x800 = 12;
	static volatile int32_t t180 = -1340064;

    t180 = ((x797^(x798-x799))>x800);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x805 = 26U;
	static int64_t x807 = -2207938187293278LL;
	int64_t x808 = 4564076302437171473LL;
	int32_t t181 = 47;

    t181 = ((x805^(x806-x807))>x808);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x809 = -1LL;
	volatile int8_t x810 = INT8_MIN;
	uint64_t x812 = 363224285856371LLU;
	int32_t t182 = -19309390;

    t182 = ((x809^(x810-x811))>x812);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x813 = INT8_MIN;
	volatile int32_t x814 = INT32_MAX;
	int16_t x815 = INT16_MAX;
	volatile int16_t x816 = INT16_MIN;
	volatile int32_t t183 = -71;

    t183 = ((x813^(x814-x815))>x816);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x817 = INT32_MAX;
	static uint32_t x819 = UINT32_MAX;
	uint16_t x820 = 3102U;
	volatile int32_t t184 = -25892;

    t184 = ((x817^(x818-x819))>x820);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x825 = INT8_MIN;
	int8_t x827 = INT8_MIN;
	uint64_t x828 = 120284748654152LLU;

    t185 = ((x825^(x826-x827))>x828);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x834 = UINT16_MAX;
	int32_t x835 = INT32_MAX;
	int32_t x836 = INT32_MIN;

    t186 = ((x833^(x834-x835))>x836);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x838 = -1;
	volatile int8_t x839 = INT8_MIN;
	int8_t x840 = -1;
	volatile int32_t t187 = 0;

    t187 = ((x837^(x838-x839))>x840);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x841 = 31708295785LL;
	int32_t x842 = INT32_MIN;
	int8_t x843 = -39;
	int32_t t188 = 8596;

    t188 = ((x841^(x842-x843))>x844);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x845 = UINT16_MAX;
	int8_t x846 = -3;
	uint32_t x848 = 3U;
	volatile int32_t t189 = -393;

    t189 = ((x845^(x846-x847))>x848);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x853 = INT32_MIN;
	uint16_t x854 = UINT16_MAX;
	uint8_t x856 = 0U;
	volatile int32_t t190 = -75;

    t190 = ((x853^(x854-x855))>x856);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x857 = UINT8_MAX;
	volatile int16_t x858 = INT16_MAX;
	int32_t x859 = -1428100;
	uint16_t x860 = 0U;
	volatile int32_t t191 = -81577903;

    t191 = ((x857^(x858-x859))>x860);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x861 = INT8_MIN;
	uint64_t x862 = UINT64_MAX;
	int32_t t192 = -1;

    t192 = ((x861^(x862-x863))>x864);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x865 = 1742754U;
	int64_t x866 = -1LL;
	int8_t x867 = INT8_MAX;
	volatile int32_t t193 = 140073751;

    t193 = ((x865^(x866-x867))>x868);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static volatile int8_t x869 = INT8_MAX;
	volatile int64_t x870 = -1LL;
	volatile uint64_t x872 = 551807726271099LLU;
	int32_t t194 = 619506705;

    t194 = ((x869^(x870-x871))>x872);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x877 = -485547LL;
	uint64_t x878 = UINT64_MAX;
	static uint64_t x879 = UINT64_MAX;
	static int32_t x880 = INT32_MAX;
	volatile int32_t t195 = 132641;

    t195 = ((x877^(x878-x879))>x880);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x881 = INT8_MIN;
	int32_t x882 = 42;
	volatile uint64_t x883 = 14LLU;
	volatile int8_t x884 = INT8_MIN;
	int32_t t196 = 43758996;

    t196 = ((x881^(x882-x883))>x884);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x885 = INT32_MAX;
	uint32_t x886 = 348891U;
	int32_t x887 = INT32_MAX;
	static int64_t x888 = 0LL;
	static volatile int32_t t197 = -2705137;

    t197 = ((x885^(x886-x887))>x888);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x889 = -1;
	int16_t x890 = INT16_MAX;
	int8_t x891 = INT8_MAX;
	volatile int16_t x892 = INT16_MAX;
	static volatile int32_t t198 = -261778902;

    t198 = ((x889^(x890-x891))>x892);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x894 = -9;
	volatile int64_t x895 = INT64_MIN;

    t199 = ((x893^(x894-x895))>x896);

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

