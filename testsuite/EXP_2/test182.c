
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

volatile uint64_t x8 = UINT64_MAX;
int16_t x17 = INT16_MIN;
volatile int16_t x25 = INT16_MIN;
uint8_t x28 = 112U;
uint64_t x35 = 406LLU;
uint32_t x41 = 2U;
int64_t x42 = -1LL;
volatile int64_t t8 = -968890373LL;
uint64_t x45 = 50699263401LLU;
int16_t x53 = -867;
int16_t x54 = INT16_MIN;
uint64_t x73 = 3915604LLU;
volatile int8_t x75 = 3;
static int64_t t17 = -22197380LL;
int64_t x91 = 36LL;
int16_t x95 = INT16_MIN;
int64_t t19 = -7LL;
int8_t x102 = INT8_MIN;
volatile int32_t t21 = 805745;
int8_t x109 = 7;
static int8_t x121 = -1;
int64_t t27 = -104616LL;
int64_t x130 = INT64_MAX;
int16_t x133 = 1253;
static volatile int8_t x134 = INT8_MIN;
uint64_t t30 = 86087LLU;
uint64_t x154 = 559006855362623161LLU;
static int16_t x155 = INT16_MIN;
static uint16_t x157 = 236U;
uint64_t x166 = UINT64_MAX;
int8_t x168 = 0;
int32_t x174 = INT32_MAX;
int8_t x175 = INT8_MIN;
int8_t x182 = 1;
static int8_t x184 = INT8_MIN;
volatile int32_t t42 = -370;
int8_t x198 = INT8_MIN;
static uint64_t x203 = UINT64_MAX;
volatile uint32_t t50 = 12U;
int32_t x225 = INT32_MIN;
volatile int64_t t52 = 203462476061694LL;
int8_t x233 = INT8_MIN;
int64_t x234 = -1LL;
volatile int64_t t54 = 2LL;
int64_t x239 = -144313LL;
int64_t t55 = INT64_MAX;
int64_t x242 = -32LL;
static int8_t x243 = INT8_MIN;
static int16_t x249 = 4;
uint8_t x258 = UINT8_MAX;
static volatile uint8_t x260 = 33U;
volatile int32_t t59 = 7;
static uint64_t x263 = 52285LLU;
int32_t x264 = -1;
int8_t x266 = 1;
int16_t x274 = 49;
int8_t x285 = INT8_MIN;
int32_t x297 = -519871474;
volatile int32_t t68 = -1336;
uint32_t x302 = 309795U;
uint16_t x305 = UINT16_MAX;
volatile int16_t x307 = INT16_MAX;
int32_t x308 = -1;
uint32_t t71 = 41U;
uint64_t t74 = 4211926693306971520LLU;
int64_t t75 = -24561847949529589LL;
volatile uint32_t t78 = 7U;
static int32_t x341 = INT32_MIN;
int32_t x342 = INT32_MAX;
uint32_t x346 = 16830U;
volatile int32_t x351 = -1;
int16_t x353 = 12;
static int32_t t83 = 754;
int32_t x374 = -14711599;
volatile uint16_t x379 = 53U;
int64_t x380 = 13757477LL;
uint64_t x389 = UINT64_MAX;
static volatile int64_t x390 = INT64_MAX;
uint8_t x391 = 0U;
uint64_t t88 = 9012LLU;
volatile int64_t x393 = -1LL;
uint32_t x394 = 6011U;
uint32_t x395 = UINT32_MAX;
volatile int16_t x398 = -1;
uint32_t t90 = 103846492U;
volatile uint32_t t91 = UINT32_MAX;
uint32_t x407 = UINT32_MAX;
static int32_t x408 = INT32_MAX;
int8_t x409 = 0;
volatile int16_t x410 = -14;
int32_t x411 = -1;
volatile uint32_t x414 = 12246478U;
volatile uint32_t t94 = 775U;
int64_t x430 = INT64_MIN;
static int32_t x431 = 5;
static int8_t x433 = -1;
volatile uint64_t t97 = 14377823LLU;
volatile int32_t x441 = INT32_MAX;
uint8_t x442 = 16U;
static volatile int32_t t98 = 25;
uint16_t x445 = UINT16_MAX;
int16_t x448 = INT16_MIN;
volatile uint32_t x454 = 50917U;
volatile uint16_t x457 = 1069U;
uint16_t x458 = UINT16_MAX;
uint64_t x465 = UINT64_MAX;
static int8_t x466 = INT8_MAX;
uint32_t x467 = UINT32_MAX;
volatile uint8_t x476 = 0U;
volatile uint8_t x485 = 1U;
static uint32_t t109 = 842317516U;
int16_t x490 = INT16_MIN;
int64_t x495 = -1LL;
int32_t x496 = INT32_MIN;
uint16_t x503 = UINT16_MAX;
int64_t t113 = 1792LL;
int8_t x509 = -18;
int64_t x516 = INT64_MAX;
int16_t x518 = -1;
int64_t x528 = INT64_MIN;
uint64_t t118 = 5901767336039196759LLU;
static int16_t x529 = -1;
uint32_t x537 = 45716U;
uint32_t t121 = 829069U;
static volatile int16_t x546 = INT16_MIN;
int32_t x551 = 2048;
int64_t x561 = -1LL;
int32_t x565 = INT32_MIN;
static volatile uint8_t x569 = 1U;
volatile uint16_t x572 = UINT16_MAX;
static volatile uint64_t x578 = UINT64_MAX;
volatile int32_t x579 = INT32_MIN;
static uint16_t x580 = 5642U;
volatile uint64_t t129 = 1285LLU;
static int16_t x583 = 2401;
volatile int32_t x590 = 1;
volatile int8_t x596 = 16;
int16_t x600 = INT16_MIN;
uint32_t x601 = 524254397U;
static int64_t t136 = -4287409908LL;
int64_t x616 = -7528993494LL;
int64_t t137 = 2489LL;
static int16_t x624 = -58;
int8_t x640 = INT8_MIN;
int32_t t143 = -4;
int16_t x644 = INT16_MIN;
uint64_t t144 = 25LLU;
uint64_t x652 = UINT64_MAX;
static int16_t x658 = INT16_MIN;
int16_t x659 = -1;
uint64_t t147 = 8787172916094699LLU;
volatile int64_t t150 = -27529866006029LL;
volatile uint32_t t151 = 8559U;
int8_t x683 = -12;
uint16_t x686 = 166U;
static int64_t x688 = INT64_MIN;
uint32_t x700 = 17U;
volatile int32_t x702 = -36040580;
int16_t x704 = -1441;
volatile uint16_t x705 = 46U;
volatile int32_t x706 = 44607826;
uint32_t x709 = 2U;
int32_t x712 = INT32_MIN;
int8_t x718 = 1;
uint32_t x721 = UINT32_MAX;
uint8_t x724 = 0U;
int64_t t161 = 6LL;
int16_t x732 = INT16_MAX;
volatile int32_t t163 = -5;
int8_t x746 = INT8_MAX;
static int8_t x748 = -1;
int64_t x750 = -17492369142LL;
uint8_t x753 = UINT8_MAX;
int16_t x761 = -1;
static int16_t x763 = INT16_MAX;
static volatile int64_t t169 = -62670752070994LL;
volatile uint64_t x777 = 208391533LLU;
static int64_t x779 = 15LL;
uint64_t t173 = 13655LLU;
uint16_t x782 = UINT16_MAX;
int16_t x784 = -1;
int8_t x789 = 0;
int8_t x793 = INT8_MIN;
volatile int64_t t178 = -954032LL;
volatile uint8_t x806 = 1U;
volatile int64_t t181 = -955LL;
static uint64_t x814 = 1824027609580062LLU;
static int32_t x817 = INT32_MAX;
static int64_t x825 = INT64_MAX;
uint16_t x826 = 151U;
static volatile uint64_t t184 = 8364601611238565683LLU;
static uint8_t x834 = UINT8_MAX;
int64_t x835 = -1LL;
uint32_t t187 = 23U;
int16_t x847 = -3659;
int64_t x850 = 1486161872417LL;
volatile int64_t x852 = INT64_MAX;
volatile uint16_t x864 = UINT16_MAX;
volatile int32_t x865 = 188229586;
int32_t x869 = INT32_MAX;
int16_t x870 = INT16_MIN;
int64_t x877 = INT64_MAX;
int8_t x881 = 4;
static int64_t t197 = -1095437616428361LL;


void f0(void) {
    	volatile int32_t x1 = -1;
	volatile int32_t x2 = -1;
	int32_t x3 = -3;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -13844833;

    t0 = ((x1|(x2+x3))^x4);

    if (t0 != -65536) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	volatile int8_t x6 = -1;
	int8_t x7 = INT8_MIN;
	volatile uint64_t t1 = 4684038550751355LLU;

    t1 = ((x5|(x6+x7))^x8);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	static int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -89776;

    t2 = ((x9|(x10+x11))^x12);

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MAX;
	volatile int64_t x14 = INT64_MAX;
	static volatile int64_t x15 = -1LL;
	uint8_t x16 = 4U;
	volatile int64_t t3 = 1052665404041253385LL;

    t3 = ((x13|(x14+x15))^x16);

    if (t3 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x18 = -85443822967LL;
	volatile int8_t x19 = INT8_MIN;
	int8_t x20 = INT8_MIN;
	volatile int64_t t4 = -9432281140116LL;

    t4 = ((x17|(x18+x19))^x20);

    if (t4 != 17801LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x26 = 1;
	int8_t x27 = INT8_MIN;
	volatile int32_t t5 = 597;

    t5 = ((x25|(x26+x27))^x28);

    if (t5 != -15) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x29 = UINT8_MAX;
	int8_t x30 = INT8_MIN;
	uint32_t x31 = UINT32_MAX;
	volatile int32_t x32 = -811;
	uint32_t t6 = 262203U;

    t6 = ((x29|(x30+x31))^x32);

    if (t6 != 810U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MAX;
	uint8_t x34 = UINT8_MAX;
	uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 139764LLU;

    t7 = ((x33|(x34+x35))^x36);

    if (t7 != 18446744073709550848LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x43 = INT8_MIN;
	int32_t x44 = INT32_MAX;

    t8 = ((x41|(x42+x43))^x44);

    if (t8 != -2147483520LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x46 = 34U;
	int8_t x47 = INT8_MIN;
	int64_t x48 = 73963827LL;
	volatile uint64_t t9 = 3LLU;

    t9 = ((x45|(x46+x47))^x48);

    if (t9 != 18446744073635587736LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x49 = 3139U;
	static int64_t x50 = 114818966LL;
	static int16_t x51 = INT16_MAX;
	int16_t x52 = INT16_MIN;
	static int64_t t10 = 3395561604309LL;

    t10 = ((x49|(x50+x51))^x52);

    if (t10 != -114819113LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x55 = INT16_MAX;
	static volatile int32_t x56 = -163;
	static int32_t t11 = 8346;

    t11 = ((x53|(x54+x55))^x56);

    if (t11 != 162) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x57 = INT64_MIN;
	int8_t x58 = -13;
	uint64_t x59 = 499LLU;
	volatile uint64_t x60 = UINT64_MAX;
	static volatile uint64_t t12 = 345082027773337LLU;

    t12 = ((x57|(x58+x59))^x60);

    if (t12 != 9223372036854775321LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x61 = 5751970835400639725LLU;
	volatile int16_t x62 = 2497;
	uint16_t x63 = 0U;
	int8_t x64 = -1;
	uint64_t t13 = 147116314091984LLU;

    t13 = ((x61|(x62+x63))^x64);

    if (t13 != 12694773238308909586LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x69 = INT8_MIN;
	uint32_t x70 = 55907U;
	static int32_t x71 = 4;
	uint16_t x72 = 78U;
	uint32_t t14 = 440810953U;

    t14 = ((x69|(x70+x71))^x72);

    if (t14 != 4294967209U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x74 = -342722LL;
	volatile int8_t x76 = INT8_MIN;
	volatile uint64_t t15 = 251111866LLU;

    t15 = ((x73|(x74+x75))^x76);

    if (t15 != 262357LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x77 = UINT16_MAX;
	int16_t x78 = -1;
	uint16_t x79 = 0U;
	static int32_t x80 = INT32_MIN;
	int32_t t16 = INT32_MAX;

    t16 = ((x77|(x78+x79))^x80);

    if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x81 = UINT32_MAX;
	int64_t x82 = -22411LL;
	static int8_t x83 = -60;
	int32_t x84 = INT32_MIN;

    t17 = ((x81|(x82+x83))^x84);

    if (t17 != 2147483647LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x89 = INT16_MIN;
	uint16_t x90 = 231U;
	static int8_t x92 = -49;
	volatile int64_t t18 = 192841256260LL;

    t18 = ((x89|(x90+x91))^x92);

    if (t18 != 32452LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = INT64_MAX;
	volatile uint32_t x94 = UINT32_MAX;
	uint16_t x96 = 3686U;

    t19 = ((x93|(x94+x95))^x96);

    if (t19 != 9223372036854772121LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = -8;
	static int64_t x98 = INT64_MIN;
	uint32_t x99 = 1160513189U;
	int32_t x100 = INT32_MIN;
	volatile int64_t t20 = -419268382618962019LL;

    t20 = ((x97|(x98+x99))^x100);

    if (t20 != 2147483645LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x101 = 595;
	volatile int8_t x103 = INT8_MAX;
	int16_t x104 = -5001;

    t21 = ((x101|(x102+x103))^x104);

    if (t21 != 5000) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x105 = -1LL;
	volatile uint16_t x106 = 59U;
	static uint32_t x107 = 4U;
	int32_t x108 = -1;
	volatile int64_t t22 = -3201296502LL;

    t22 = ((x105|(x106+x107))^x108);

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x110 = UINT32_MAX;
	int8_t x111 = INT8_MAX;
	int32_t x112 = INT32_MIN;
	uint32_t t23 = 247065U;

    t23 = ((x109|(x110+x111))^x112);

    if (t23 != 2147483775U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x113 = 1012217268;
	uint32_t x114 = 343U;
	int8_t x115 = -1;
	static volatile int32_t x116 = INT32_MIN;
	static uint32_t t24 = 21465393U;

    t24 = ((x113|(x114+x115))^x116);

    if (t24 != 3159700982U) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x117 = 1062790010U;
	uint32_t x118 = UINT32_MAX;
	static volatile int32_t x119 = -1;
	int64_t x120 = INT64_MAX;
	volatile int64_t t25 = 0LL;

    t25 = ((x117|(x118+x119))^x120);

    if (t25 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int8_t x122 = 3;
	uint8_t x123 = 29U;
	int16_t x124 = INT16_MAX;
	int32_t t26 = -263045;

    t26 = ((x121|(x122+x123))^x124);

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x125 = 0;
	int8_t x126 = -10;
	static int64_t x127 = -1LL;
	int64_t x128 = INT64_MAX;

    t27 = ((x125|(x126+x127))^x128);

    if (t27 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = 2769;
	int8_t x131 = 0;
	int8_t x132 = INT8_MAX;
	int64_t t28 = 129296615485LL;

    t28 = ((x129|(x130+x131))^x132);

    if (t28 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x135 = 1350U;
	static uint8_t x136 = 109U;
	static volatile int32_t t29 = -958924592;

    t29 = ((x133|(x134+x135))^x136);

    if (t29 != 1162) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x137 = 103949992360303924LLU;
	int8_t x138 = 0;
	int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;

    t30 = ((x137|(x138+x139))^x140);

    if (t30 != 32692LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x141 = -1;
	volatile int64_t x142 = -1010648005874824LL;
	volatile int8_t x143 = INT8_MIN;
	static int32_t x144 = -172225310;
	int64_t t31 = -26674372031LL;

    t31 = ((x141|(x142+x143))^x144);

    if (t31 != 172225309LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = 15;
	volatile uint64_t x147 = UINT64_MAX;
	static uint32_t x148 = 1574013541U;
	uint64_t t32 = 2166648361524591066LLU;

    t32 = ((x145|(x146+x147))^x148);

    if (t32 != 18446744072135510635LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x149 = -1;
	static int64_t x150 = INT64_MAX;
	int32_t x151 = 0;
	static uint64_t x152 = 4976598745LLU;
	volatile uint64_t t33 = 30595768336672LLU;

    t33 = ((x149|(x150+x151))^x152);

    if (t33 != 18446744068732952870LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x153 = INT32_MAX;
	volatile int64_t x156 = -326283LL;
	volatile uint64_t t34 = 105878813167785423LLU;

    t34 = ((x153|(x154+x155))^x156);

    if (t34 != 17887737218093873802LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x158 = 57U;
	volatile int64_t x159 = 4575132LL;
	int32_t x160 = INT32_MAX;
	volatile int64_t t35 = 1424LL;

    t35 = ((x157|(x158+x159))^x160);

    if (t35 != 2142908418LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x161 = 12394061670LLU;
	int16_t x162 = 1006;
	static uint8_t x163 = UINT8_MAX;
	volatile uint32_t x164 = 1623U;
	uint64_t t36 = 0LLU;

    t36 = ((x161|(x162+x163))^x164);

    if (t36 != 12394060216LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x165 = INT16_MAX;
	int16_t x167 = INT16_MIN;
	volatile uint64_t t37 = 983LLU;

    t37 = ((x165|(x166+x167))^x168);

    if (t37 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x169 = -1;
	int32_t x170 = -2549498;
	volatile int16_t x171 = INT16_MIN;
	static int16_t x172 = 4023;
	volatile int32_t t38 = 200;

    t38 = ((x169|(x170+x171))^x172);

    if (t38 != -4024) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x173 = INT32_MAX;
	uint32_t x176 = 1092857U;
	volatile uint32_t t39 = 152242U;

    t39 = ((x173|(x174+x175))^x176);

    if (t39 != 2146390790U) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x177 = 1;
	volatile int32_t x178 = 76;
	int8_t x179 = INT8_MAX;
	int8_t x180 = -1;
	int32_t t40 = 5;

    t40 = ((x177|(x178+x179))^x180);

    if (t40 != -204) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x181 = INT32_MAX;
	int64_t x183 = -33282340LL;
	volatile int64_t t41 = -73558464773405739LL;

    t41 = ((x181|(x182+x183))^x184);

    if (t41 != 127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x185 = UINT8_MAX;
	volatile int32_t x186 = 61;
	int32_t x187 = 2827961;
	uint8_t x188 = 3U;

    t42 = ((x185|(x186+x187))^x188);

    if (t42 != 2828028) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x189 = INT32_MIN;
	volatile int8_t x190 = INT8_MIN;
	volatile int32_t x191 = -1;
	static uint8_t x192 = 62U;
	int32_t t43 = -2;

    t43 = ((x189|(x190+x191))^x192);

    if (t43 != -191) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x193 = 3U;
	static uint32_t x194 = 6490285U;
	static uint32_t x195 = 226782014U;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t44 = 7783606096055829156LLU;

    t44 = ((x193|(x194+x195))^x196);

    if (t44 != 18446744073476279316LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x197 = -1;
	static volatile int32_t x199 = -1;
	uint64_t x200 = UINT64_MAX;
	uint64_t t45 = 531627900840686561LLU;

    t45 = ((x197|(x198+x199))^x200);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x201 = 3130U;
	volatile int32_t x202 = INT32_MIN;
	uint16_t x204 = UINT16_MAX;
	uint64_t t46 = 32821791LLU;

    t46 = ((x201|(x202+x203))^x204);

    if (t46 != 18446744071562002432LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = 214190260LL;
	static volatile uint32_t x206 = UINT32_MAX;
	volatile int32_t x207 = -518381084;
	uint16_t x208 = 436U;
	int64_t t47 = 11614630879850LL;

    t47 = ((x205|(x206+x207))^x208);

    if (t47 != 3990775875LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint8_t x209 = 29U;
	static volatile uint16_t x210 = 4U;
	uint32_t x211 = UINT32_MAX;
	uint8_t x212 = 114U;
	volatile uint32_t t48 = 56U;

    t48 = ((x209|(x210+x211))^x212);

    if (t48 != 109U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x213 = 15;
	static uint16_t x214 = 0U;
	volatile int8_t x215 = INT8_MIN;
	int8_t x216 = -1;
	int32_t t49 = -15;

    t49 = ((x213|(x214+x215))^x216);

    if (t49 != 112) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x217 = 104875359U;
	int16_t x218 = -13;
	uint32_t x219 = UINT32_MAX;
	volatile int32_t x220 = INT32_MAX;

    t50 = ((x217|(x218+x219))^x220);

    if (t50 != 2147483648U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x221 = 112U;
	int16_t x222 = -1182;
	volatile uint64_t x223 = UINT64_MAX;
	int8_t x224 = -1;
	uint64_t t51 = 2539028570LLU;

    t51 = ((x221|(x222+x223))^x224);

    if (t51 != 1166LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x226 = INT64_MIN;
	static volatile int8_t x227 = INT8_MAX;
	volatile uint16_t x228 = 22149U;

    t52 = ((x225|(x226+x227))^x228);

    if (t52 != -2147461382LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x229 = INT64_MIN;
	static int8_t x230 = -1;
	volatile uint32_t x231 = 224795313U;
	static int64_t x232 = 12542029763LL;
	volatile int64_t t53 = -57843LL;

    t53 = ((x229|(x230+x231))^x232);

    if (t53 != -9223372024389945997LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x235 = 58U;
	volatile int16_t x236 = INT16_MAX;

    t54 = ((x233|(x234+x235))^x236);

    if (t54 != -32698LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x237 = INT64_MAX;
	int16_t x238 = -3;
	static int64_t x240 = INT64_MIN;

    t55 = ((x237|(x238+x239))^x240);

    if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x241 = UINT8_MAX;
	static uint8_t x244 = 49U;
	static int64_t t56 = 428LL;

    t56 = ((x241|(x242+x243))^x244);

    if (t56 != -50LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x250 = INT16_MAX;
	int8_t x251 = -1;
	int8_t x252 = -1;
	int32_t t57 = -3;

    t57 = ((x249|(x250+x251))^x252);

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x253 = UINT16_MAX;
	uint16_t x254 = UINT16_MAX;
	int8_t x255 = -3;
	int32_t x256 = -1;
	volatile int32_t t58 = -1379;

    t58 = ((x253|(x254+x255))^x256);

    if (t58 != -65536) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x257 = -353;
	int8_t x259 = INT8_MIN;

    t59 = ((x257|(x258+x259))^x260);

    if (t59 != -290) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint64_t x261 = UINT64_MAX;
	uint64_t x262 = 0LLU;
	volatile uint64_t t60 = 928016482602LLU;

    t60 = ((x261|(x262+x263))^x264);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x265 = 232447811448920565LLU;
	uint8_t x267 = UINT8_MAX;
	static int64_t x268 = 18494236235LL;
	volatile uint64_t t61 = 54705LLU;

    t61 = ((x265|(x266+x267))^x268);

    if (t61 != 232447795111231422LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x273 = UINT64_MAX;
	volatile int16_t x275 = INT16_MIN;
	int32_t x276 = -1;
	uint64_t t62 = 241284673684LLU;

    t62 = ((x273|(x274+x275))^x276);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x277 = INT32_MIN;
	static uint64_t x278 = 927LLU;
	static int8_t x279 = 1;
	static volatile int8_t x280 = INT8_MIN;
	volatile uint64_t t63 = 6677LLU;

    t63 = ((x277|(x278+x279))^x280);

    if (t63 != 2147482656LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x281 = -244678022977LL;
	int16_t x282 = -1;
	static uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MIN;
	int64_t t64 = 87103LL;

    t64 = ((x281|(x282+x283))^x284);

    if (t64 != 242665652223LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x286 = INT16_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int32_t x288 = -1;
	int32_t t65 = 217113712;

    t65 = ((x285|(x286+x287))^x288);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x289 = 13;
	int8_t x290 = 1;
	int64_t x291 = 4251284271991653LL;
	uint16_t x292 = 197U;
	int64_t t66 = 22014055LL;

    t66 = ((x289|(x290+x291))^x292);

    if (t66 != 4251284271991722LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = -1;
	int16_t x294 = 109;
	static int16_t x295 = INT16_MAX;
	static int8_t x296 = -21;
	int32_t t67 = -2;

    t67 = ((x293|(x294+x295))^x296);

    if (t67 != 20) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x298 = -1;
	int16_t x299 = -4568;
	int32_t x300 = INT32_MAX;

    t68 = ((x297|(x298+x299))^x300);

    if (t68 != -2147479088) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x301 = 930U;
	volatile int64_t x303 = -1LL;
	int8_t x304 = INT8_MIN;
	static volatile int64_t t69 = -4123979719188864399LL;

    t69 = ((x301|(x302+x303))^x304);

    if (t69 != -310238LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x306 = 9U;
	volatile int32_t t70 = -5;

    t70 = ((x305|(x306+x307))^x308);

    if (t70 != -65536) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x309 = INT16_MAX;
	static uint32_t x310 = UINT32_MAX;
	int32_t x311 = 55434097;
	static int8_t x312 = -1;

    t71 = ((x309|(x310+x311))^x312);

    if (t71 != 4239523840U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x313 = INT16_MIN;
	static int16_t x314 = 6;
	static int32_t x315 = 354680451;
	volatile uint64_t x316 = 79605175415662LLU;
	uint64_t t72 = 282LLU;

    t72 = ((x313|(x314+x315))^x316);

    if (t72 != 18446664468534136295LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x317 = INT8_MAX;
	static int8_t x318 = 1;
	uint16_t x319 = UINT16_MAX;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t73 = 219;

    t73 = ((x317|(x318+x319))^x320);

    if (t73 != -2147417985) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	static uint64_t x324 = UINT64_MAX;

    t74 = ((x321|(x322+x323))^x324);

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x325 = INT64_MAX;
	int16_t x326 = -1;
	uint16_t x327 = 422U;
	static volatile int16_t x328 = -1687;

    t75 = ((x325|(x326+x327))^x328);

    if (t75 != -9223372036854774122LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x329 = 701U;
	volatile uint16_t x330 = 474U;
	static int16_t x331 = 1605;
	int32_t x332 = -1;
	static int32_t t76 = 16242;

    t76 = ((x329|(x330+x331))^x332);

    if (t76 != -2752) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = -41;
	int64_t x334 = INT64_MIN;
	int64_t x335 = INT64_MAX;
	volatile uint8_t x336 = 96U;
	volatile int64_t t77 = 23115302326439033LL;

    t77 = ((x333|(x334+x335))^x336);

    if (t77 != -97LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x337 = 5682996U;
	uint8_t x338 = UINT8_MAX;
	static volatile int16_t x339 = INT16_MAX;
	static int16_t x340 = -10561;

    t78 = ((x337|(x338+x339))^x340);

    if (t78 != 4289290561U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x343 = INT16_MIN;
	int8_t x344 = 1;
	static volatile int32_t t79 = 6;

    t79 = ((x341|(x342+x343))^x344);

    if (t79 != -32770) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x345 = INT16_MIN;
	int16_t x347 = -1;
	static volatile int32_t x348 = 499635323;
	uint32_t t80 = 460U;

    t80 = ((x345|(x346+x347))^x348);

    if (t80 != 3795326406U) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x349 = -3892;
	uint16_t x350 = 94U;
	int64_t x352 = INT64_MIN;
	volatile int64_t t81 = -1111543668012737LL;

    t81 = ((x349|(x350+x351))^x352);

    if (t81 != 9223372036854771933LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x354 = UINT32_MAX;
	static volatile int64_t x355 = -1LL;
	volatile uint8_t x356 = 26U;
	volatile int64_t t82 = 5LL;

    t82 = ((x353|(x354+x355))^x356);

    if (t82 != 4294967268LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x357 = -26;
	static uint16_t x358 = UINT16_MAX;
	uint16_t x359 = 1836U;
	static uint16_t x360 = 32671U;

    t83 = ((x357|(x358+x359))^x360);

    if (t83 != -32656) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x365 = INT8_MIN;
	volatile int32_t x366 = INT32_MIN;
	static uint64_t x367 = 52244662331942107LLU;
	volatile int32_t x368 = INT32_MAX;
	uint64_t t84 = 659LLU;

    t84 = ((x365|(x366+x367))^x368);

    if (t84 != 18446744071562068004LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x373 = 1458U;
	static volatile int32_t x375 = -1;
	int64_t x376 = -1LL;
	volatile int64_t t85 = -100713253687LL;

    t85 = ((x373|(x374+x375))^x376);

    if (t85 != -4280255987LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x377 = -1LL;
	uint16_t x378 = UINT16_MAX;
	int64_t t86 = -49LL;

    t86 = ((x377|(x378+x379))^x380);

    if (t86 != -13757478LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x385 = UINT16_MAX;
	static int32_t x386 = 60820081;
	static volatile uint8_t x387 = 92U;
	int8_t x388 = INT8_MIN;
	int32_t t87 = 3813;

    t87 = ((x385|(x386+x387))^x388);

    if (t87 != -60882817) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x392 = UINT8_MAX;

    t88 = ((x389|(x390+x391))^x392);

    if (t88 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x396 = -25;
	int64_t t89 = -6855864628LL;

    t89 = ((x393|(x394+x395))^x396);

    if (t89 != 24LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x397 = 11955U;
	int8_t x399 = -28;
	int32_t x400 = INT32_MIN;

    t90 = ((x397|(x398+x399))^x400);

    if (t90 != 2147483635U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x401 = -1;
	int32_t x402 = -1;
	uint32_t x403 = 239624261U;
	uint32_t x404 = 0U;

    t91 = ((x401|(x402+x403))^x404);

    if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x405 = 32767574LLU;
	int8_t x406 = 20;
	uint64_t t92 = 1013328713576791LLU;

    t92 = ((x405|(x406+x407))^x408);

    if (t92 != 2114716072LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x412 = INT8_MAX;
	static int32_t t93 = 2012100;

    t93 = ((x409|(x410+x411))^x412);

    if (t93 != -114) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x413 = INT32_MAX;
	int16_t x415 = 1;
	int8_t x416 = 0;

    t94 = ((x413|(x414+x415))^x416);

    if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x421 = -239790984255867LL;
	int32_t x422 = INT32_MAX;
	int64_t x423 = INT64_MIN;
	int16_t x424 = INT16_MAX;
	int64_t t95 = 210331LL;

    t95 = ((x421|(x422+x423))^x424);

    if (t95 != -239790171652096LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x429 = INT64_MAX;
	int8_t x432 = INT8_MIN;
	static int64_t t96 = -3691356LL;

    t96 = ((x429|(x430+x431))^x432);

    if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x434 = 2345835467686LLU;
	static int8_t x435 = 2;
	volatile int16_t x436 = -31;

    t97 = ((x433|(x434+x435))^x436);

    if (t97 != 30LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x443 = INT16_MAX;
	volatile int32_t x444 = 16562;

    t98 = ((x441|(x442+x443))^x444);

    if (t98 != 2147467085) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x446 = INT64_MIN;
	uint8_t x447 = 4U;
	volatile int64_t t99 = 24615284594LL;

    t99 = ((x445|(x446+x447))^x448);

    if (t99 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x449 = INT64_MIN;
	static int8_t x450 = -1;
	static volatile int16_t x451 = -1;
	int16_t x452 = INT16_MIN;
	int64_t t100 = 1003553858603204LL;

    t100 = ((x449|(x450+x451))^x452);

    if (t100 != 32766LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint16_t x453 = UINT16_MAX;
	int16_t x455 = -1;
	int32_t x456 = INT32_MAX;
	static uint32_t t101 = 266U;

    t101 = ((x453|(x454+x455))^x456);

    if (t101 != 2147418112U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x459 = 5U;
	uint64_t x460 = UINT64_MAX;
	uint64_t t102 = 743194900610327331LLU;

    t102 = ((x457|(x458+x459))^x460);

    if (t102 != 18446744073709485010LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x461 = UINT64_MAX;
	uint64_t x462 = UINT64_MAX;
	int16_t x463 = INT16_MIN;
	int16_t x464 = INT16_MAX;
	static uint64_t t103 = 1036147293991981LLU;

    t103 = ((x461|(x462+x463))^x464);

    if (t103 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x468 = 1;
	static volatile uint64_t t104 = 3583141009573LLU;

    t104 = ((x465|(x466+x467))^x468);

    if (t104 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x469 = 5572770LL;
	int8_t x470 = -1;
	int8_t x471 = INT8_MAX;
	static volatile int8_t x472 = -1;
	volatile int64_t t105 = 29906LL;

    t105 = ((x469|(x470+x471))^x472);

    if (t105 != -5572863LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x473 = INT32_MIN;
	uint16_t x474 = UINT16_MAX;
	static uint64_t x475 = 49LLU;
	volatile uint64_t t106 = 6825212160LLU;

    t106 = ((x473|(x474+x475))^x476);

    if (t106 != 18446744071562133552LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x477 = INT16_MIN;
	static uint8_t x478 = 10U;
	uint64_t x479 = 471095022101772420LLU;
	uint16_t x480 = UINT16_MAX;
	volatile uint64_t t107 = 17740002623LLU;

    t107 = ((x477|(x478+x479))^x480);

    if (t107 != 18446744073709504369LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	int64_t x484 = INT64_MIN;
	static volatile int64_t t108 = INT64_MAX;

    t108 = ((x481|(x482+x483))^x484);

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x486 = -1;
	uint32_t x487 = UINT32_MAX;
	static uint32_t x488 = UINT32_MAX;

    t109 = ((x485|(x486+x487))^x488);

    if (t109 != 0U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x489 = UINT32_MAX;
	volatile int16_t x491 = -1;
	uint64_t x492 = 84123LLU;
	volatile uint64_t t110 = 5LLU;

    t110 = ((x489|(x490+x491))^x492);

    if (t110 != 4294883172LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = INT32_MIN;
	int16_t x494 = INT16_MAX;
	int64_t t111 = 171LL;

    t111 = ((x493|(x494+x495))^x496);

    if (t111 != 32766LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x497 = -1;
	int16_t x498 = INT16_MAX;
	static volatile uint32_t x499 = UINT32_MAX;
	static int32_t x500 = -330351088;
	uint32_t t112 = 650420U;

    t112 = ((x497|(x498+x499))^x500);

    if (t112 != 330351087U) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x501 = 36499;
	int64_t x502 = INT64_MIN;
	int8_t x504 = 5;

    t113 = ((x501|(x502+x503))^x504);

    if (t113 != -9223372036854710278LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x505 = UINT64_MAX;
	int32_t x506 = INT32_MIN;
	uint16_t x507 = 960U;
	int64_t x508 = INT64_MIN;
	uint64_t t114 = 576928261394104LLU;

    t114 = ((x505|(x506+x507))^x508);

    if (t114 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x510 = INT32_MAX;
	volatile int8_t x511 = -1;
	static uint16_t x512 = UINT16_MAX;
	static int32_t t115 = -5480717;

    t115 = ((x509|(x510+x511))^x512);

    if (t115 != -65535) { NG(); } else { ; }
	
}

void f116(void) {
    	uint32_t x513 = 567371U;
	int32_t x514 = -1;
	int8_t x515 = INT8_MIN;
	volatile int64_t t116 = -5LL;

    t116 = ((x513|(x514+x515))^x516);

    if (t116 != 9223372032559808640LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint64_t x517 = 4LLU;
	int16_t x519 = 1;
	int64_t x520 = 52109763128047400LL;
	uint64_t t117 = 57621704818818413LLU;

    t117 = ((x517|(x518+x519))^x520);

    if (t117 != 52109763128047404LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x525 = UINT16_MAX;
	uint8_t x526 = 12U;
	volatile uint64_t x527 = UINT64_MAX;

    t118 = ((x525|(x526+x527))^x528);

    if (t118 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x530 = UINT8_MAX;
	int64_t x531 = INT64_MIN;
	volatile int32_t x532 = -7479020;
	volatile int64_t t119 = -249404209863122940LL;

    t119 = ((x529|(x530+x531))^x532);

    if (t119 != 7479019LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x533 = UINT16_MAX;
	int16_t x534 = 31;
	uint8_t x535 = 3U;
	uint8_t x536 = UINT8_MAX;
	volatile int32_t t120 = 10011;

    t120 = ((x533|(x534+x535))^x536);

    if (t120 != 65280) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x538 = INT8_MAX;
	int16_t x539 = INT16_MIN;
	volatile uint8_t x540 = 0U;

    t121 = ((x537|(x538+x539))^x540);

    if (t121 != 4294947583U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x545 = INT8_MAX;
	uint8_t x547 = 1U;
	int8_t x548 = -1;
	volatile int32_t t122 = 12183292;

    t122 = ((x545|(x546+x547))^x548);

    if (t122 != 32640) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x549 = INT16_MIN;
	uint32_t x550 = 53U;
	uint64_t x552 = UINT64_MAX;
	uint64_t t123 = 357LLU;

    t123 = ((x549|(x550+x551))^x552);

    if (t123 != 18446744069414614986LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x557 = 2;
	volatile int16_t x558 = -780;
	int32_t x559 = -1;
	static volatile int64_t x560 = INT64_MAX;
	volatile int64_t t124 = -3244LL;

    t124 = ((x557|(x558+x559))^x560);

    if (t124 != -9223372036854775028LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x562 = -33;
	int16_t x563 = 15883;
	int64_t x564 = -1LL;
	volatile int64_t t125 = -297620114174832LL;

    t125 = ((x561|(x562+x563))^x564);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x566 = -1;
	int16_t x567 = -246;
	int32_t x568 = INT32_MIN;
	volatile int32_t t126 = 7;

    t126 = ((x565|(x566+x567))^x568);

    if (t126 != 2147483401) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x570 = UINT64_MAX;
	static volatile int64_t x571 = INT64_MIN;
	volatile uint64_t t127 = 127LLU;

    t127 = ((x569|(x570+x571))^x572);

    if (t127 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x573 = -1;
	volatile int8_t x574 = INT8_MIN;
	uint32_t x575 = 38U;
	volatile int16_t x576 = 0;
	uint32_t t128 = UINT32_MAX;

    t128 = ((x573|(x574+x575))^x576);

    if (t128 != UINT32_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x577 = 3669;

    t129 = ((x577|(x578+x579))^x580);

    if (t129 != 18446744071562062325LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x581 = -1LL;
	static int16_t x582 = INT16_MAX;
	static uint16_t x584 = UINT16_MAX;
	static int64_t t130 = 401088675807679125LL;

    t130 = ((x581|(x582+x583))^x584);

    if (t130 != -65536LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x589 = 2046357984283832LL;
	uint8_t x591 = 2U;
	static int64_t x592 = INT64_MAX;
	volatile int64_t t131 = 47LL;

    t131 = ((x589|(x590+x591))^x592);

    if (t131 != 9221325678870491972LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x593 = 0;
	int8_t x594 = INT8_MIN;
	int8_t x595 = INT8_MIN;
	volatile int32_t t132 = -481000708;

    t132 = ((x593|(x594+x595))^x596);

    if (t132 != -240) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x597 = INT64_MAX;
	static int16_t x598 = INT16_MAX;
	uint64_t x599 = 244969753195948320LLU;
	volatile uint64_t t133 = 1160999202916569144LLU;

    t133 = ((x597|(x598+x599))^x600);

    if (t133 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MAX;
	volatile uint32_t x604 = UINT32_MAX;
	uint32_t t134 = 313U;

    t134 = ((x601|(x602+x603))^x604);

    if (t134 != 768U) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x605 = -4;
	static int8_t x606 = 0;
	uint8_t x607 = 31U;
	int32_t x608 = INT32_MIN;
	volatile int32_t t135 = INT32_MAX;

    t135 = ((x605|(x606+x607))^x608);

    if (t135 != INT32_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x609 = INT32_MIN;
	int64_t x610 = -3307LL;
	int64_t x611 = -1LL;
	int16_t x612 = 1;

    t136 = ((x609|(x610+x611))^x612);

    if (t136 != -3307LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x613 = -1;
	int16_t x614 = INT16_MIN;
	int16_t x615 = INT16_MIN;

    t137 = ((x613|(x614+x615))^x616);

    if (t137 != 7528993493LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x617 = 4U;
	uint16_t x618 = 5516U;
	static int16_t x619 = INT16_MIN;
	int8_t x620 = -25;
	static int32_t t138 = 1;

    t138 = ((x617|(x618+x619))^x620);

    if (t138 != 27243) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x621 = UINT32_MAX;
	int8_t x622 = 29;
	static int16_t x623 = 216;
	uint32_t t139 = 238U;

    t139 = ((x621|(x622+x623))^x624);

    if (t139 != 57U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x625 = INT8_MAX;
	volatile int16_t x626 = INT16_MIN;
	int64_t x627 = -1LL;
	static uint16_t x628 = 28U;
	int64_t t140 = -434299220150550616LL;

    t140 = ((x625|(x626+x627))^x628);

    if (t140 != -32797LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x629 = INT16_MAX;
	volatile uint8_t x630 = 30U;
	volatile int32_t x631 = INT32_MIN;
	uint32_t x632 = UINT32_MAX;
	static volatile uint32_t t141 = 36428825U;

    t141 = ((x629|(x630+x631))^x632);

    if (t141 != 2147450880U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x633 = UINT8_MAX;
	volatile uint64_t x634 = UINT64_MAX;
	uint32_t x635 = 0U;
	static uint32_t x636 = 50244908U;
	volatile uint64_t t142 = 131387843212008LLU;

    t142 = ((x633|(x634+x635))^x636);

    if (t142 != 18446744073659306707LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int16_t x637 = 38;
	int8_t x638 = INT8_MAX;
	volatile uint8_t x639 = 1U;

    t143 = ((x637|(x638+x639))^x640);

    if (t143 != -218) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x641 = UINT32_MAX;
	int8_t x642 = -1;
	static uint64_t x643 = 263917627253LLU;

    t144 = ((x641|(x642+x643))^x644);

    if (t144 != 18446743807421612031LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x649 = 194104458;
	static int64_t x650 = INT64_MAX;
	int64_t x651 = INT64_MIN;
	uint64_t t145 = 481700423125409LLU;

    t145 = ((x649|(x650+x651))^x652);

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x653 = 15U;
	uint8_t x654 = 31U;
	volatile int32_t x655 = 9023099;
	volatile int8_t x656 = 13;
	int32_t t146 = -7684875;

    t146 = ((x653|(x654+x655))^x656);

    if (t146 != 9023122) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x657 = 960023791LLU;
	uint16_t x660 = UINT16_MAX;

    t147 = ((x657|(x658+x659))^x660);

    if (t147 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x661 = INT8_MIN;
	static uint8_t x662 = 1U;
	volatile int64_t x663 = 1303705519954673LL;
	volatile int64_t x664 = 3583897879172531182LL;
	static int64_t t148 = -1550444LL;

    t148 = ((x661|(x662+x663))^x664);

    if (t148 != -3583897879172531172LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x665 = INT16_MAX;
	uint8_t x666 = 1U;
	int32_t x667 = INT32_MIN;
	uint32_t x668 = 270481487U;
	uint32_t t149 = 6888394U;

    t149 = ((x665|(x666+x667))^x668);

    if (t149 != 2417969072U) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x673 = -1;
	int64_t x674 = -296858109LL;
	int8_t x675 = INT8_MAX;
	volatile int64_t x676 = 489930199LL;

    t150 = ((x673|(x674+x675))^x676);

    if (t150 != -489930200LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x677 = INT8_MIN;
	static uint32_t x678 = UINT32_MAX;
	static uint8_t x679 = 0U;
	int32_t x680 = -35553;

    t151 = ((x677|(x678+x679))^x680);

    if (t151 != 35552U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x681 = INT16_MAX;
	volatile uint64_t x682 = 5730462361854963LLU;
	static int32_t x684 = -6172991;
	uint64_t t152 = 30518LLU;

    t152 = ((x681|(x682+x683))^x684);

    if (t152 != 18441013611353321790LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x685 = INT8_MAX;
	int64_t x687 = -878094438819LL;
	static volatile int64_t t153 = 3LL;

    t153 = ((x685|(x686+x687))^x688);

    if (t153 != 9223371158760337279LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x693 = INT16_MIN;
	uint64_t x694 = 847725504420191986LLU;
	static volatile uint64_t x695 = UINT64_MAX;
	volatile int8_t x696 = -15;
	volatile uint64_t t154 = 554035748490LLU;

    t154 = ((x693|(x694+x695))^x696);

    if (t154 != 24832LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x697 = INT64_MAX;
	int64_t x698 = -2056889888637110LL;
	uint16_t x699 = 7U;
	int64_t t155 = -21LL;

    t155 = ((x697|(x698+x699))^x700);

    if (t155 != -18LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x701 = 16956U;
	uint64_t x703 = UINT64_MAX;
	static uint64_t t156 = 879LLU;

    t156 = ((x701|(x702+x703))^x704);

    if (t156 != 36022304LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x707 = 10U;
	int64_t x708 = INT64_MIN;
	volatile int64_t t157 = 1023789383622112LL;

    t157 = ((x705|(x706+x707))^x708);

    if (t157 != -9223372036810167938LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x710 = -234;
	int64_t x711 = -1LL;
	static int64_t t158 = -662623817166166273LL;

    t158 = ((x709|(x710+x711))^x712);

    if (t158 != 2147483415LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x713 = 7U;
	int8_t x714 = -2;
	uint32_t x715 = 113348U;
	int32_t x716 = INT32_MIN;
	volatile uint32_t t159 = 2U;

    t159 = ((x713|(x714+x715))^x716);

    if (t159 != 2147596999U) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = INT64_MAX;
	static int8_t x719 = INT8_MAX;
	int32_t x720 = INT32_MAX;
	int64_t t160 = -480LL;

    t160 = ((x717|(x718+x719))^x720);

    if (t160 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x722 = -1LL;
	int16_t x723 = 270;

    t161 = ((x721|(x722+x723))^x724);

    if (t161 != 4294967295LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x729 = 330;
	uint8_t x730 = UINT8_MAX;
	uint32_t x731 = 478643352U;
	volatile uint32_t t162 = 34222281U;

    t162 = ((x729|(x730+x731))^x732);

    if (t162 != 478673440U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x733 = -1;
	int8_t x734 = INT8_MIN;
	int16_t x735 = 3497;
	int16_t x736 = -1;

    t163 = ((x733|(x734+x735))^x736);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x737 = 7;
	static volatile int32_t x738 = 161754458;
	int8_t x739 = -1;
	int64_t x740 = -56256554843LL;
	volatile int64_t t164 = 265592465294LL;

    t164 = ((x737|(x738+x739))^x740);

    if (t164 != -56111581702LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x741 = 218441073;
	uint8_t x742 = UINT8_MAX;
	static volatile uint8_t x743 = 38U;
	volatile int32_t x744 = -211;
	int32_t t165 = -471;

    t165 = ((x741|(x742+x743))^x744);

    if (t165 != -218441128) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x745 = 30U;
	int8_t x747 = INT8_MIN;
	volatile int32_t t166 = -88637755;

    t166 = ((x745|(x746+x747))^x748);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x749 = -1LL;
	volatile int16_t x751 = -1;
	int16_t x752 = INT16_MIN;
	int64_t t167 = 87LL;

    t167 = ((x749|(x750+x751))^x752);

    if (t167 != 32767LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x754 = 12640U;
	uint32_t x755 = 2896U;
	int8_t x756 = INT8_MIN;
	uint32_t t168 = 488U;

    t168 = ((x753|(x754+x755))^x756);

    if (t168 != 4294951807U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x762 = INT64_MIN;
	int8_t x764 = -1;

    t169 = ((x761|(x762+x763))^x764);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x765 = INT32_MIN;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = INT16_MAX;
	int16_t x768 = -1;
	static uint32_t t170 = 3559U;

    t170 = ((x765|(x766+x767))^x768);

    if (t170 != 2147450881U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x769 = -1;
	volatile int64_t x770 = -1LL;
	int32_t x771 = -1;
	int32_t x772 = -1901;
	static int64_t t171 = -6LL;

    t171 = ((x769|(x770+x771))^x772);

    if (t171 != 1900LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x773 = 1434610U;
	uint16_t x774 = 28181U;
	static uint32_t x775 = 5453U;
	static uint64_t x776 = UINT64_MAX;
	static volatile uint64_t t172 = 212001806276552307LLU;

    t172 = ((x773|(x774+x775))^x776);

    if (t172 != 18446744073708117005LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x778 = 264587820U;
	static uint32_t x780 = 0U;

    t173 = ((x777|(x778+x779))^x780);

    if (t173 != 267374463LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x781 = 368LL;
	int16_t x783 = INT16_MIN;
	volatile int64_t t174 = -54960722LL;

    t174 = ((x781|(x782+x783))^x784);

    if (t174 != -32768LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x785 = 113U;
	int32_t x786 = -1;
	volatile int32_t x787 = INT32_MAX;
	int8_t x788 = 26;
	int32_t t175 = -253012;

    t175 = ((x785|(x786+x787))^x788);

    if (t175 != 2147483621) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x790 = UINT16_MAX;
	volatile int8_t x791 = -1;
	int64_t x792 = INT64_MIN;
	static int64_t t176 = 1068900806203LL;

    t176 = ((x789|(x790+x791))^x792);

    if (t176 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x794 = 3616953;
	uint8_t x795 = 0U;
	int16_t x796 = INT16_MIN;
	int32_t t177 = -3925;

    t177 = ((x793|(x794+x795))^x796);

    if (t177 != 32697) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x797 = 130428U;
	int16_t x798 = INT16_MAX;
	int64_t x799 = -18075780879335991LL;
	int16_t x800 = INT16_MIN;

    t178 = ((x797|(x798+x799))^x800);

    if (t178 != 18075780879252988LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint8_t x801 = UINT8_MAX;
	volatile uint64_t x802 = 262899019138426LLU;
	static int64_t x803 = INT64_MIN;
	static volatile int32_t x804 = INT32_MAX;
	uint64_t t179 = 387497213652284046LLU;

    t179 = ((x801|(x802+x803))^x804);

    if (t179 != 9223634934174464512LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x805 = 0U;
	uint16_t x807 = 4U;
	volatile int64_t x808 = INT64_MIN;
	volatile int64_t t180 = -29078LL;

    t180 = ((x805|(x806+x807))^x808);

    if (t180 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x809 = INT64_MIN;
	static volatile uint8_t x810 = 0U;
	uint32_t x811 = 514198U;
	uint32_t x812 = 8983U;

    t181 = ((x809|(x810+x811))^x812);

    if (t181 != -9223372036854252671LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x813 = INT8_MIN;
	uint8_t x815 = 6U;
	static int16_t x816 = -3;
	volatile uint64_t t182 = 2661025997842991LLU;

    t182 = ((x813|(x814+x815))^x816);

    if (t182 != 89LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x818 = 108;
	uint8_t x819 = UINT8_MAX;
	volatile int64_t x820 = -6791182LL;
	int64_t t183 = 12017LL;

    t183 = ((x817|(x818+x819))^x820);

    if (t183 != -2140692467LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x827 = 13311314156821LLU;
	static int16_t x828 = INT16_MAX;

    t184 = ((x825|(x826+x827))^x828);

    if (t184 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x829 = -1;
	int64_t x830 = INT64_MIN;
	uint64_t x831 = UINT64_MAX;
	uint8_t x832 = 3U;
	volatile uint64_t t185 = 62LLU;

    t185 = ((x829|(x830+x831))^x832);

    if (t185 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile int16_t x833 = INT16_MIN;
	int32_t x836 = -974;
	int64_t t186 = 3144458173402309033LL;

    t186 = ((x833|(x834+x835))^x836);

    if (t186 != 31948LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x837 = 28268;
	uint32_t x838 = 41U;
	int16_t x839 = INT16_MIN;
	static int8_t x840 = INT8_MAX;

    t187 = ((x837|(x838+x839))^x840);

    if (t187 != 4294962706U) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x841 = -1;
	int8_t x842 = 5;
	int64_t x843 = 900448LL;
	int64_t x844 = 7639394LL;
	int64_t t188 = 47299830581LL;

    t188 = ((x841|(x842+x843))^x844);

    if (t188 != -7639395LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x845 = 0;
	int64_t x846 = -992696688929290LL;
	uint32_t x848 = UINT32_MAX;
	static int64_t t189 = -219419953922493198LL;

    t189 = ((x845|(x846+x847))^x848);

    if (t189 != -992699188283308LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int64_t x849 = -1LL;
	int8_t x851 = INT8_MIN;
	volatile int64_t t190 = INT64_MIN;

    t190 = ((x849|(x850+x851))^x852);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x853 = INT64_MIN;
	int64_t x854 = -1LL;
	static int8_t x855 = INT8_MIN;
	int16_t x856 = INT16_MAX;
	static int64_t t191 = 0LL;

    t191 = ((x853|(x854+x855))^x856);

    if (t191 != -32640LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x861 = -31;
	uint16_t x862 = 1U;
	int16_t x863 = -1;
	volatile int32_t t192 = 4935323;

    t192 = ((x861|(x862+x863))^x864);

    if (t192 != -65506) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x866 = 12;
	int32_t x867 = 451923;
	int64_t x868 = INT64_MIN;
	volatile int64_t t193 = 3286446822943316459LL;

    t193 = ((x865|(x866+x867))^x868);

    if (t193 != -9223372036666103841LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x871 = -1;
	int32_t x872 = -11006886;
	int32_t t194 = -101;

    t194 = ((x869|(x870+x871))^x872);

    if (t194 != 11006885) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x873 = INT64_MIN;
	volatile uint64_t x874 = 66611812541LLU;
	volatile uint32_t x875 = UINT32_MAX;
	int64_t x876 = 1129223414008LL;
	static uint64_t t195 = 2LLU;

    t195 = ((x873|(x874+x875))^x876);

    if (t195 != 9223373232611686468LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x878 = 85U;
	uint8_t x879 = UINT8_MAX;
	static int8_t x880 = -1;
	volatile int64_t t196 = INT64_MIN;

    t196 = ((x877|(x878+x879))^x880);

    if (t196 != INT64_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x882 = -1;
	int16_t x883 = -162;
	int64_t x884 = INT64_MIN;

    t197 = ((x881|(x882+x883))^x884);

    if (t197 != 9223372036854775645LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x885 = INT16_MAX;
	volatile int8_t x886 = INT8_MAX;
	int64_t x887 = INT64_MIN;
	uint8_t x888 = 95U;
	volatile int64_t t198 = -2106581827930737LL;

    t198 = ((x885|(x886+x887))^x888);

    if (t198 != -9223372036854743136LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int8_t x889 = INT8_MAX;
	int16_t x890 = -1;
	int8_t x891 = INT8_MIN;
	int16_t x892 = 11;
	static volatile int32_t t199 = -926;

    t199 = ((x889|(x890+x891))^x892);

    if (t199 != -140) { NG(); } else { ; }
	
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

