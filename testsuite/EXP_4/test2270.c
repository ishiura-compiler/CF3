
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
int32_t x5 = -1;
int8_t x8 = INT8_MAX;
volatile int64_t x9 = 1437724286652026409LL;
uint8_t x12 = 25U;
volatile uint32_t x15 = 10553697U;
uint16_t x17 = 9700U;
int8_t x35 = INT8_MIN;
int64_t x36 = -31325105LL;
int32_t x38 = INT32_MIN;
volatile uint8_t x40 = 0U;
int64_t t8 = INT64_MAX;
int8_t x41 = -59;
uint16_t x47 = 2U;
int64_t x50 = INT64_MIN;
volatile int32_t t11 = 11;
uint16_t x55 = 1888U;
int64_t x60 = INT64_MIN;
volatile int32_t t16 = 1;
int64_t x73 = INT64_MAX;
static int32_t x76 = -1;
uint32_t x81 = 1859887U;
volatile int64_t t20 = INT64_MIN;
uint64_t x92 = UINT64_MAX;
static uint16_t x97 = 15U;
volatile int16_t x112 = INT16_MIN;
volatile int32_t x113 = 0;
static uint32_t x125 = 5185959U;
volatile int8_t x130 = 1;
int8_t x135 = 8;
volatile int32_t t33 = 3;
int64_t x142 = INT64_MIN;
int64_t x150 = INT64_MAX;
uint8_t x153 = UINT8_MAX;
int32_t x163 = -12764696;
int32_t x166 = INT32_MIN;
volatile uint32_t x172 = 24U;
volatile int32_t t41 = -11179322;
uint8_t x173 = 19U;
volatile int32_t t42 = 168535;
int8_t x178 = INT8_MAX;
uint16_t x179 = UINT16_MAX;
volatile int32_t t43 = 2412464;
volatile int32_t t44 = 10801322;
int64_t x185 = -1LL;
int16_t x187 = INT16_MAX;
uint64_t x188 = 122836LLU;
int32_t x192 = INT32_MAX;
static int32_t t46 = INT32_MIN;
uint16_t x202 = 21U;
volatile uint16_t x207 = 2U;
static uint64_t x208 = 224LLU;
volatile int32_t t51 = 38;
static volatile int8_t x219 = 17;
volatile uint32_t t52 = 8872U;
uint64_t x221 = 169812362275258LLU;
static int32_t x223 = -21743;
volatile uint16_t x225 = 23827U;
static int64_t x227 = INT64_MIN;
int32_t x228 = INT32_MIN;
volatile int32_t t54 = -14483;
uint32_t t55 = 1858U;
volatile int32_t t57 = -8734;
int32_t t58 = -61449;
static int16_t x245 = -13;
int16_t x254 = INT16_MIN;
int32_t x258 = 970941;
static volatile uint64_t x266 = 9475660LLU;
static uint64_t x268 = 6082783060LLU;
int8_t x281 = 5;
volatile int32_t x287 = -1;
int8_t x303 = INT8_MIN;
uint64_t t70 = UINT64_MAX;
int32_t x317 = -1;
int32_t t74 = -65;
static int32_t t76 = -14549347;
uint64_t x336 = UINT64_MAX;
int64_t x339 = INT64_MIN;
static volatile int64_t t78 = 1LL;
uint32_t x341 = 35568846U;
int32_t x344 = -1;
uint16_t x348 = 1U;
int8_t x351 = -1;
int32_t t81 = -458;
volatile int32_t t82 = 267221038;
uint64_t x361 = 267785902296LLU;
static volatile uint64_t t83 = 44LLU;
volatile int32_t t85 = INT32_MIN;
volatile uint32_t x385 = 132098U;
int32_t x386 = INT32_MAX;
int16_t x388 = -1;
volatile uint32_t t88 = 242171166U;
int8_t x390 = 13;
static uint16_t x400 = 2898U;
volatile int32_t t91 = -1090616;
volatile uint32_t x401 = 808847U;
int32_t x402 = INT32_MIN;
int16_t x404 = -271;
volatile int32_t t94 = 282946;
int16_t x414 = INT16_MIN;
uint64_t x415 = UINT64_MAX;
int8_t x420 = INT8_MIN;
static int16_t x423 = 1;
volatile int8_t x427 = -1;
int32_t x436 = INT32_MAX;
int64_t x439 = INT64_MAX;
int32_t x447 = INT32_MAX;
int32_t x451 = INT32_MAX;
volatile int16_t x455 = -1;
int8_t x458 = INT8_MAX;
int64_t t106 = -121986623710002LL;
int16_t x465 = -4462;
volatile uint16_t x466 = 1U;
static volatile uint8_t x467 = 9U;
int8_t x468 = 0;
volatile int64_t x480 = INT64_MIN;
volatile int32_t t111 = -860;
static int32_t x484 = INT32_MAX;
uint32_t x490 = 69U;
int32_t t114 = 1;
volatile uint16_t x500 = UINT16_MAX;
int16_t x505 = 1360;
volatile int64_t x507 = 34357423592653216LL;
int64_t x508 = -1LL;
int8_t x519 = -1;
int32_t t121 = 2;
int32_t t124 = 61;
static volatile int16_t x543 = -2;
volatile int16_t x544 = 10;
int16_t x550 = 1158;
int64_t x554 = -1964366358LL;
int16_t x558 = INT16_MIN;
volatile uint64_t x566 = 1708LLU;
static int32_t x576 = -1;
uint64_t x577 = 1262354046LLU;
int32_t x584 = INT32_MIN;
uint8_t x595 = UINT8_MAX;
static volatile uint32_t t139 = UINT32_MAX;
int8_t x597 = INT8_MIN;
int16_t x609 = -1;
uint16_t x622 = 1922U;
int16_t x623 = -2449;
uint32_t t145 = UINT32_MAX;
volatile int64_t x627 = 299929453954776LL;
uint64_t x630 = 3972354LLU;
volatile int32_t t147 = -287091;
static int64_t x635 = -1LL;
uint16_t x641 = UINT16_MAX;
int16_t x643 = INT16_MAX;
int8_t x644 = INT8_MIN;
static volatile int32_t t150 = 27584947;
int32_t t154 = -14018551;
volatile int8_t x661 = INT8_MIN;
int32_t t155 = 2;
int64_t x682 = INT64_MIN;
static int64_t x685 = INT64_MAX;
uint64_t x691 = 2746464800356476LLU;
int32_t x694 = INT32_MAX;
static volatile int32_t x696 = -1;
volatile uint8_t x702 = 3U;
volatile int16_t x704 = INT16_MAX;
uint16_t x706 = 780U;
static uint16_t x707 = UINT16_MAX;
static int8_t x719 = -1;
static volatile uint64_t t168 = 10044216738549623LLU;
int32_t t169 = 2587;
int32_t t170 = -14;
uint16_t x735 = 605U;
uint32_t x755 = 28345863U;
int8_t x771 = INT8_MAX;
uint16_t x772 = UINT16_MAX;
int32_t x776 = INT32_MAX;
int8_t x780 = INT8_MIN;
int64_t x783 = INT64_MIN;
uint64_t t184 = UINT64_MAX;
int16_t x795 = INT16_MIN;
int64_t x796 = -2697LL;
static int16_t x797 = INT16_MIN;
int8_t x799 = -6;
int32_t x803 = -1;
static int32_t x806 = -1;
static uint16_t x807 = UINT16_MAX;
int32_t t188 = INT32_MIN;
uint64_t t190 = 2968LLU;
uint32_t x817 = 7261315U;
static uint64_t x819 = UINT64_MAX;
static volatile uint16_t x829 = 2365U;
uint32_t x831 = 7236U;
int32_t t194 = -799265;
int64_t x833 = 34626LL;
int64_t x835 = 15307LL;
int64_t t195 = -1452886LL;
static volatile int16_t x838 = INT16_MAX;
int32_t t197 = -6;
volatile int32_t t199 = 304;


void f0(void) {
    	int32_t x1 = -27388;
	int32_t x3 = INT32_MAX;
	static volatile int8_t x4 = 10;
	volatile int32_t t0 = 1;

    t0 = (x1-(x2>(x3&x4)));

    if (t0 != -27388) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 197479500LL;
	int16_t x7 = 4;
	int32_t t1 = -735;

    t1 = (x5-(x6>(x7&x8)));

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x10 = 3260282U;
	int8_t x11 = INT8_MAX;
	int64_t t2 = -383708146911779836LL;

    t2 = (x9-(x10>(x11&x12)));

    if (t2 != 1437724286652026408LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int8_t x13 = -1;
	volatile uint16_t x14 = 42U;
	uint32_t x16 = 1U;
	int32_t t3 = -3;

    t3 = (x13-(x14>(x15&x16)));

    if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = 1;
	volatile int32_t x19 = -1;
	uint64_t x20 = 580582715328037LLU;
	volatile int32_t t4 = -2;

    t4 = (x17-(x18>(x19&x20)));

    if (t4 != 9700) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 140U;
	static uint32_t x22 = UINT32_MAX;
	int32_t x23 = INT32_MIN;
	static uint8_t x24 = 80U;
	uint32_t t5 = 17928694U;

    t5 = (x21-(x22>(x23&x24)));

    if (t5 != 139U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	int32_t x30 = 873;
	uint64_t x31 = 6368LLU;
	static volatile int64_t x32 = INT64_MAX;
	int32_t t6 = INT32_MIN;

    t6 = (x29-(x30>(x31&x32)));

    if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 17;
	volatile int32_t x34 = 0;
	int32_t t7 = -2790;

    t7 = (x33-(x34>(x35&x36)));

    if (t7 != 16) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x37 = INT64_MAX;
	int8_t x39 = INT8_MIN;

    t8 = (x37-(x38>(x39&x40)));

    if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x42 = 819LLU;
	volatile int16_t x43 = INT16_MIN;
	uint8_t x44 = 41U;
	volatile int32_t t9 = 9;

    t9 = (x41-(x42>(x43&x44)));

    if (t9 != -60) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	volatile int16_t x46 = -1;
	volatile uint16_t x48 = 6U;
	static int64_t t10 = 7873168490365LL;

    t10 = (x45-(x46>(x47&x48)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = INT8_MIN;
	uint32_t x51 = UINT32_MAX;
	uint8_t x52 = 0U;

    t11 = (x49-(x50>(x51&x52)));

    if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = 7812145LL;
	int16_t x54 = 292;
	int8_t x56 = INT8_MIN;
	volatile int64_t t12 = -68115201020600LL;

    t12 = (x53-(x54>(x55&x56)));

    if (t12 != 7812145LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = INT8_MAX;
	int8_t x58 = INT8_MAX;
	volatile int8_t x59 = 1;
	static int32_t t13 = 540939;

    t13 = (x57-(x58>(x59&x60)));

    if (t13 != 126) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x61 = 12U;
	int16_t x62 = 2;
	uint32_t x63 = 23838619U;
	static int64_t x64 = INT64_MIN;
	int32_t t14 = 67672;

    t14 = (x61-(x62>(x63&x64)));

    if (t14 != 11) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x65 = INT8_MIN;
	int16_t x66 = 13554;
	int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MAX;
	int32_t t15 = -447;

    t15 = (x65-(x66>(x67&x68)));

    if (t15 != -129) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = INT8_MAX;
	static int16_t x70 = INT16_MIN;
	uint32_t x71 = 58127U;
	static uint32_t x72 = 6U;

    t16 = (x69-(x70>(x71&x72)));

    if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x74 = -6;
	volatile uint32_t x75 = UINT32_MAX;
	int64_t t17 = INT64_MAX;

    t17 = (x73-(x74>(x75&x76)));

    if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x77 = UINT16_MAX;
	static int16_t x78 = -299;
	static uint16_t x79 = 126U;
	uint64_t x80 = UINT64_MAX;
	static int32_t t18 = 315747380;

    t18 = (x77-(x78>(x79&x80)));

    if (t18 != 65534) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x82 = 10034U;
	int8_t x83 = INT8_MAX;
	volatile int8_t x84 = INT8_MIN;
	volatile uint32_t t19 = 32171735U;

    t19 = (x81-(x82>(x83&x84)));

    if (t19 != 1859886U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x85 = INT64_MIN;
	int8_t x86 = INT8_MIN;
	int32_t x87 = INT32_MIN;
	volatile uint8_t x88 = UINT8_MAX;

    t20 = (x85-(x86>(x87&x88)));

    if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MAX;
	int16_t x91 = INT16_MAX;
	volatile int32_t t21 = 3177124;

    t21 = (x89-(x90>(x91&x92)));

    if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 6U;
	volatile uint64_t x94 = 97738942355LLU;
	static uint32_t x95 = 1407334U;
	int8_t x96 = 0;
	int32_t t22 = -955430917;

    t22 = (x93-(x94>(x95&x96)));

    if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x98 = 101U;
	int32_t x99 = INT32_MIN;
	static int16_t x100 = INT16_MAX;
	int32_t t23 = -1;

    t23 = (x97-(x98>(x99&x100)));

    if (t23 != 14) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x101 = INT8_MIN;
	int8_t x102 = INT8_MIN;
	static uint16_t x103 = 1646U;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t24 = 84;

    t24 = (x101-(x102>(x103&x104)));

    if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x105 = INT16_MAX;
	uint8_t x106 = 58U;
	volatile int64_t x107 = 67661781453955550LL;
	int64_t x108 = -2522714937981847855LL;
	int32_t t25 = 32490849;

    t25 = (x105-(x106>(x107&x108)));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = -3815;
	int32_t x110 = INT32_MAX;
	uint64_t x111 = UINT64_MAX;
	static volatile int32_t t26 = 1205532;

    t26 = (x109-(x110>(x111&x112)));

    if (t26 != -3815) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x114 = 0U;
	int64_t x115 = -1LL;
	uint16_t x116 = 1838U;
	static int32_t t27 = -1570;

    t27 = (x113-(x114>(x115&x116)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x117 = -39672042962675550LL;
	static int64_t x118 = -52798946LL;
	uint8_t x119 = 12U;
	static int16_t x120 = INT16_MAX;
	static volatile int64_t t28 = -2660526430748659930LL;

    t28 = (x117-(x118>(x119&x120)));

    if (t28 != -39672042962675550LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x121 = 1LLU;
	int64_t x122 = -1LL;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = INT64_MIN;
	volatile uint64_t t29 = 298914542LLU;

    t29 = (x121-(x122>(x123&x124)));

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x126 = -1;
	static int32_t x127 = -7380707;
	volatile int64_t x128 = -1LL;
	volatile uint32_t t30 = 2532U;

    t30 = (x125-(x126>(x127&x128)));

    if (t30 != 5185958U) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = 10593738934817LL;
	int8_t x131 = INT8_MAX;
	static int64_t x132 = INT64_MIN;
	volatile int64_t t31 = -7LL;

    t31 = (x129-(x130>(x131&x132)));

    if (t31 != 10593738934816LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int16_t x133 = INT16_MIN;
	volatile int32_t x134 = INT32_MAX;
	uint64_t x136 = 44361386012620530LLU;
	volatile int32_t t32 = -12;

    t32 = (x133-(x134>(x135&x136)));

    if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x137 = 39U;
	int8_t x138 = -52;
	static int64_t x139 = -13093426444LL;
	int8_t x140 = 13;

    t33 = (x137-(x138>(x139&x140)));

    if (t33 != 39) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x141 = INT8_MAX;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	volatile int32_t t34 = -40303;

    t34 = (x141-(x142>(x143&x144)));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x145 = 6LLU;
	int16_t x146 = INT16_MIN;
	uint16_t x147 = 7094U;
	int16_t x148 = -854;
	uint64_t t35 = 26LLU;

    t35 = (x145-(x146>(x147&x148)));

    if (t35 != 6LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x149 = INT32_MAX;
	static volatile int64_t x151 = INT64_MIN;
	volatile int32_t x152 = -130909;
	static int32_t t36 = 213;

    t36 = (x149-(x150>(x151&x152)));

    if (t36 != 2147483646) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x154 = INT8_MIN;
	int64_t x155 = INT64_MAX;
	static uint64_t x156 = 1172143428397028206LLU;
	int32_t t37 = 276143860;

    t37 = (x153-(x154>(x155&x156)));

    if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x157 = 3U;
	volatile int16_t x158 = 11;
	int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t38 = 932770;

    t38 = (x157-(x158>(x159&x160)));

    if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = -1;
	static uint64_t x162 = UINT64_MAX;
	static uint8_t x164 = 2U;
	volatile int32_t t39 = -403059214;

    t39 = (x161-(x162>(x163&x164)));

    if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	int8_t x167 = -1;
	static uint8_t x168 = 3U;
	static volatile int64_t t40 = INT64_MIN;

    t40 = (x165-(x166>(x167&x168)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = 7;
	int64_t x170 = INT64_MAX;
	static uint16_t x171 = 6449U;

    t41 = (x169-(x170>(x171&x172)));

    if (t41 != 6) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x174 = INT8_MAX;
	int8_t x175 = 14;
	int64_t x176 = INT64_MIN;

    t42 = (x173-(x174>(x175&x176)));

    if (t42 != 18) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x177 = -515988;
	uint32_t x180 = UINT32_MAX;

    t43 = (x177-(x178>(x179&x180)));

    if (t43 != -515988) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = -374509;
	uint8_t x182 = UINT8_MAX;
	int64_t x183 = INT64_MAX;
	int32_t x184 = -1;

    t44 = (x181-(x182>(x183&x184)));

    if (t44 != -374509) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x186 = 0;
	volatile int64_t t45 = -135509LL;

    t45 = (x185-(x186>(x187&x188)));

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	int64_t x190 = INT64_MIN;
	volatile uint8_t x191 = 17U;

    t46 = (x189-(x190>(x191&x192)));

    if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x193 = 133U;
	static int8_t x194 = INT8_MAX;
	static int32_t x195 = INT32_MAX;
	int16_t x196 = -1;
	int32_t t47 = -6857;

    t47 = (x193-(x194>(x195&x196)));

    if (t47 != 133) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = 53U;
	static uint64_t x198 = UINT64_MAX;
	static int8_t x199 = -1;
	int64_t x200 = INT64_MIN;
	int32_t t48 = -330577659;

    t48 = (x197-(x198>(x199&x200)));

    if (t48 != 52) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x201 = 11U;
	int64_t x203 = INT64_MAX;
	uint32_t x204 = UINT32_MAX;
	int32_t t49 = -64728203;

    t49 = (x201-(x202>(x203&x204)));

    if (t49 != 11) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x205 = UINT32_MAX;
	int16_t x206 = -225;
	volatile uint32_t t50 = 301U;

    t50 = (x205-(x206>(x207&x208)));

    if (t50 != 4294967294U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x213 = INT8_MIN;
	static int8_t x214 = -1;
	volatile int8_t x215 = INT8_MAX;
	uint8_t x216 = UINT8_MAX;

    t51 = (x213-(x214>(x215&x216)));

    if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x217 = 1776009746U;
	volatile int8_t x218 = 0;
	static uint8_t x220 = UINT8_MAX;

    t52 = (x217-(x218>(x219&x220)));

    if (t52 != 1776009746U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x222 = INT64_MIN;
	uint32_t x224 = UINT32_MAX;
	static uint64_t t53 = 2302373739545055LLU;

    t53 = (x221-(x222>(x223&x224)));

    if (t53 != 169812362275258LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x226 = -1079;

    t54 = (x225-(x226>(x227&x228)));

    if (t54 != 23826) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x229 = 7570487U;
	uint32_t x230 = 5U;
	static int32_t x231 = 31386;
	int8_t x232 = -1;

    t55 = (x229-(x230>(x231&x232)));

    if (t55 != 7570487U) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x233 = 4U;
	volatile uint32_t x234 = 484835U;
	static uint64_t x235 = 65879057779LLU;
	volatile uint16_t x236 = 0U;
	int32_t t56 = -17;

    t56 = (x233-(x234>(x235&x236)));

    if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint8_t x237 = 1U;
	uint64_t x238 = UINT64_MAX;
	static int16_t x239 = -38;
	int16_t x240 = INT16_MAX;

    t57 = (x237-(x238>(x239&x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x241 = INT8_MIN;
	int16_t x242 = INT16_MAX;
	static uint64_t x243 = 128250313229014LLU;
	static int8_t x244 = -1;

    t58 = (x241-(x242>(x243&x244)));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -3798;
	volatile int32_t t59 = 1;

    t59 = (x245-(x246>(x247&x248)));

    if (t59 != -13) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x249 = -1;
	uint64_t x250 = UINT64_MAX;
	int32_t x251 = INT32_MIN;
	int32_t x252 = -1;
	volatile int32_t t60 = 857256107;

    t60 = (x249-(x250>(x251&x252)));

    if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x253 = -1;
	int32_t x255 = 36980414;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t61 = 1;

    t61 = (x253-(x254>(x255&x256)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x257 = -21LL;
	static int8_t x259 = INT8_MIN;
	int8_t x260 = -1;
	int64_t t62 = 54284516LL;

    t62 = (x257-(x258>(x259&x260)));

    if (t62 != -22LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x261 = INT32_MIN;
	int32_t x262 = INT32_MIN;
	int8_t x263 = -47;
	volatile int16_t x264 = -1719;
	volatile int32_t t63 = INT32_MIN;

    t63 = (x261-(x262>(x263&x264)));

    if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint8_t x265 = UINT8_MAX;
	uint8_t x267 = 42U;
	static int32_t t64 = 0;

    t64 = (x265-(x266>(x267&x268)));

    if (t64 != 254) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x277 = INT16_MAX;
	int64_t x278 = INT64_MIN;
	volatile int32_t x279 = 0;
	int16_t x280 = INT16_MIN;
	static int32_t t65 = -5070526;

    t65 = (x277-(x278>(x279&x280)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x282 = INT32_MAX;
	int32_t x283 = INT32_MIN;
	int16_t x284 = INT16_MIN;
	volatile int32_t t66 = 29153857;

    t66 = (x281-(x282>(x283&x284)));

    if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x285 = INT8_MAX;
	static uint64_t x286 = 0LLU;
	static uint64_t x288 = 52LLU;
	int32_t t67 = 0;

    t67 = (x285-(x286>(x287&x288)));

    if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x289 = INT8_MIN;
	uint8_t x290 = UINT8_MAX;
	uint32_t x291 = 6982U;
	volatile int32_t x292 = INT32_MAX;
	int32_t t68 = -142;

    t68 = (x289-(x290>(x291&x292)));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x297 = 0U;
	int16_t x298 = INT16_MIN;
	volatile uint16_t x299 = 3U;
	static int16_t x300 = INT16_MIN;
	int32_t t69 = 29;

    t69 = (x297-(x298>(x299&x300)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x301 = UINT64_MAX;
	volatile int64_t x302 = INT64_MIN;
	static volatile int32_t x304 = INT32_MIN;

    t70 = (x301-(x302>(x303&x304)));

    if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x305 = -656843LL;
	int64_t x306 = -170678LL;
	int8_t x307 = 2;
	uint16_t x308 = 194U;
	volatile int64_t t71 = 27216840596LL;

    t71 = (x305-(x306>(x307&x308)));

    if (t71 != -656843LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x309 = INT16_MIN;
	int32_t x310 = INT32_MAX;
	uint8_t x311 = 14U;
	int8_t x312 = -1;
	volatile int32_t t72 = -14;

    t72 = (x309-(x310>(x311&x312)));

    if (t72 != -32769) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x313 = 189775533U;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 553139544289971LLU;
	volatile int32_t x316 = 11701003;
	static uint32_t t73 = 28223U;

    t73 = (x313-(x314>(x315&x316)));

    if (t73 != 189775532U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x318 = INT32_MIN;
	int16_t x319 = -1;
	int8_t x320 = INT8_MAX;

    t74 = (x317-(x318>(x319&x320)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = -1;
	int16_t x326 = INT16_MAX;
	int32_t x327 = -1;
	static int32_t x328 = 111548;
	static int32_t t75 = 144;

    t75 = (x325-(x326>(x327&x328)));

    if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x329 = INT8_MIN;
	int64_t x330 = 0LL;
	uint64_t x331 = 109921723495576534LLU;
	int8_t x332 = INT8_MAX;

    t76 = (x329-(x330>(x331&x332)));

    if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x333 = -1;
	static int32_t x334 = 1878;
	static uint8_t x335 = UINT8_MAX;
	static int32_t t77 = -1236;

    t77 = (x333-(x334>(x335&x336)));

    if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x337 = -46303716285516305LL;
	int32_t x338 = -1;
	int64_t x340 = 24942874727590LL;

    t78 = (x337-(x338>(x339&x340)));

    if (t78 != -46303716285516305LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x342 = 1666U;
	uint32_t x343 = UINT32_MAX;
	static uint32_t t79 = 1809U;

    t79 = (x341-(x342>(x343&x344)));

    if (t79 != 35568846U) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = 63060457807284LL;
	uint8_t x346 = 24U;
	uint64_t x347 = UINT64_MAX;
	static volatile int64_t t80 = -1316442636683773LL;

    t80 = (x345-(x346>(x347&x348)));

    if (t80 != 63060457807283LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x349 = 169518059;
	static int64_t x350 = INT64_MIN;
	static uint8_t x352 = 0U;

    t81 = (x349-(x350>(x351&x352)));

    if (t81 != 169518059) { NG(); } else { ; }
	
}

void f82(void) {
    	static int16_t x353 = INT16_MIN;
	volatile int32_t x354 = INT32_MIN;
	int16_t x355 = 61;
	int32_t x356 = INT32_MAX;

    t82 = (x353-(x354>(x355&x356)));

    if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x362 = 16114466248LLU;
	int32_t x363 = INT32_MAX;
	uint8_t x364 = 7U;

    t83 = (x361-(x362>(x363&x364)));

    if (t83 != 267785902295LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x365 = INT64_MAX;
	uint64_t x366 = UINT64_MAX;
	int64_t x367 = 66734179760LL;
	volatile int16_t x368 = INT16_MIN;
	static int64_t t84 = 683671636LL;

    t84 = (x365-(x366>(x367&x368)));

    if (t84 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = INT32_MIN;
	static int64_t x370 = 0LL;
	volatile uint32_t x371 = 174999U;
	int32_t x372 = 251519;

    t85 = (x369-(x370>(x371&x372)));

    if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x373 = 74LL;
	int8_t x374 = INT8_MIN;
	uint16_t x375 = 2U;
	int32_t x376 = -1;
	int64_t t86 = 809672820201LL;

    t86 = (x373-(x374>(x375&x376)));

    if (t86 != 74LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x377 = -1;
	int32_t x378 = -1;
	int8_t x379 = INT8_MAX;
	uint64_t x380 = 27104970LLU;
	volatile int32_t t87 = -1;

    t87 = (x377-(x378>(x379&x380)));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x387 = -41;

    t88 = (x385-(x386>(x387&x388)));

    if (t88 != 132097U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x389 = INT64_MIN;
	static uint64_t x391 = UINT64_MAX;
	int16_t x392 = INT16_MIN;
	static int64_t t89 = INT64_MIN;

    t89 = (x389-(x390>(x391&x392)));

    if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x393 = INT64_MAX;
	static int16_t x394 = INT16_MIN;
	uint32_t x395 = UINT32_MAX;
	static int16_t x396 = -670;
	volatile int64_t t90 = INT64_MAX;

    t90 = (x393-(x394>(x395&x396)));

    if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x397 = 598U;
	int8_t x398 = -5;
	static int16_t x399 = -162;

    t91 = (x397-(x398>(x399&x400)));

    if (t91 != 598) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint64_t x403 = 4069364LLU;
	volatile uint32_t t92 = 8U;

    t92 = (x401-(x402>(x403&x404)));

    if (t92 != 808846U) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x405 = INT8_MIN;
	int16_t x406 = -112;
	volatile int8_t x407 = INT8_MAX;
	static volatile int32_t x408 = INT32_MAX;
	volatile int32_t t93 = 2;

    t93 = (x405-(x406>(x407&x408)));

    if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = INT8_MAX;
	volatile int16_t x410 = -1;
	int16_t x411 = -1;
	static int8_t x412 = -1;

    t94 = (x409-(x410>(x411&x412)));

    if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x413 = 234012U;
	uint16_t x416 = 34U;
	static uint32_t t95 = 8U;

    t95 = (x413-(x414>(x415&x416)));

    if (t95 != 234011U) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x417 = -64741;
	uint16_t x418 = 1348U;
	static int64_t x419 = INT64_MIN;
	int32_t t96 = 32;

    t96 = (x417-(x418>(x419&x420)));

    if (t96 != -64742) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = -20;
	uint32_t x422 = 1891570U;
	uint8_t x424 = 72U;
	static int32_t t97 = -18;

    t97 = (x421-(x422>(x423&x424)));

    if (t97 != -21) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x425 = INT8_MIN;
	int32_t x426 = INT32_MIN;
	int64_t x428 = 22905LL;
	int32_t t98 = 6334;

    t98 = (x425-(x426>(x427&x428)));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x429 = UINT16_MAX;
	volatile int16_t x430 = INT16_MIN;
	uint16_t x431 = 46U;
	uint64_t x432 = 612423609LLU;
	volatile int32_t t99 = -74479479;

    t99 = (x429-(x430>(x431&x432)));

    if (t99 != 65534) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x433 = 25713398108294LLU;
	uint16_t x434 = UINT16_MAX;
	volatile int32_t x435 = INT32_MIN;
	uint64_t t100 = 101562302178LLU;

    t100 = (x433-(x434>(x435&x436)));

    if (t100 != 25713398108293LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x437 = -2592;
	volatile int8_t x438 = INT8_MIN;
	static int64_t x440 = -7082811328871839LL;
	volatile int32_t t101 = -216551589;

    t101 = (x437-(x438>(x439&x440)));

    if (t101 != -2592) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x441 = 3U;
	volatile int32_t x442 = INT32_MIN;
	int64_t x443 = -5948781499LL;
	int8_t x444 = INT8_MIN;
	volatile uint32_t t102 = 1U;

    t102 = (x441-(x442>(x443&x444)));

    if (t102 != 2U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x445 = UINT16_MAX;
	volatile int32_t x446 = INT32_MIN;
	static volatile int8_t x448 = 1;
	volatile int32_t t103 = -52103;

    t103 = (x445-(x446>(x447&x448)));

    if (t103 != 65535) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x449 = 227;
	int8_t x450 = -1;
	int32_t x452 = INT32_MIN;
	volatile int32_t t104 = 502704;

    t104 = (x449-(x450>(x451&x452)));

    if (t104 != 227) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x453 = -1;
	uint64_t x454 = 33413149529914164LLU;
	static int64_t x456 = INT64_MIN;
	static volatile int32_t t105 = -51659774;

    t105 = (x453-(x454>(x455&x456)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x457 = -1LL;
	static int8_t x459 = INT8_MAX;
	uint64_t x460 = 1190560LLU;

    t106 = (x457-(x458>(x459&x460)));

    if (t106 != -2LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x461 = -1;
	volatile int64_t x462 = INT64_MIN;
	int16_t x463 = -1;
	uint8_t x464 = UINT8_MAX;
	volatile int32_t t107 = -117;

    t107 = (x461-(x462>(x463&x464)));

    if (t107 != -1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t t108 = 78294;

    t108 = (x465-(x466>(x467&x468)));

    if (t108 != -4463) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x469 = UINT64_MAX;
	int32_t x470 = -19;
	int8_t x471 = 0;
	int64_t x472 = -1LL;
	uint64_t t109 = UINT64_MAX;

    t109 = (x469-(x470>(x471&x472)));

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int32_t x473 = 153;
	volatile int16_t x474 = INT16_MAX;
	int8_t x475 = 0;
	int16_t x476 = -1;
	int32_t t110 = 1520;

    t110 = (x473-(x474>(x475&x476)));

    if (t110 != 152) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x477 = INT16_MAX;
	int8_t x478 = INT8_MIN;
	int8_t x479 = -1;

    t111 = (x477-(x478>(x479&x480)));

    if (t111 != 32766) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x481 = UINT64_MAX;
	static int32_t x482 = -1;
	int16_t x483 = -6;
	volatile uint64_t t112 = UINT64_MAX;

    t112 = (x481-(x482>(x483&x484)));

    if (t112 != UINT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x485 = 1010;
	int16_t x486 = -11;
	uint16_t x487 = UINT16_MAX;
	int16_t x488 = INT16_MIN;
	int32_t t113 = 70;

    t113 = (x485-(x486>(x487&x488)));

    if (t113 != 1010) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x489 = -1;
	uint8_t x491 = UINT8_MAX;
	static int64_t x492 = 2870023012LL;

    t114 = (x489-(x490>(x491&x492)));

    if (t114 != -1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x493 = INT32_MAX;
	volatile int64_t x494 = -358675LL;
	int32_t x495 = 3748;
	static int8_t x496 = -1;
	int32_t t115 = INT32_MAX;

    t115 = (x493-(x494>(x495&x496)));

    if (t115 != INT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x497 = 1U;
	int16_t x498 = -5495;
	int16_t x499 = -87;
	volatile int32_t t116 = 63;

    t116 = (x497-(x498>(x499&x500)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x501 = INT32_MAX;
	int64_t x502 = INT64_MIN;
	static int64_t x503 = -1LL;
	uint16_t x504 = UINT16_MAX;
	int32_t t117 = INT32_MAX;

    t117 = (x501-(x502>(x503&x504)));

    if (t117 != INT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x506 = INT8_MAX;
	int32_t t118 = -35524;

    t118 = (x505-(x506>(x507&x508)));

    if (t118 != 1360) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x513 = UINT64_MAX;
	static int16_t x514 = 208;
	int64_t x515 = INT64_MIN;
	volatile uint32_t x516 = 26U;
	uint64_t t119 = 2653247311LLU;

    t119 = (x513-(x514>(x515&x516)));

    if (t119 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x517 = -1;
	int32_t x518 = INT32_MIN;
	static uint64_t x520 = 114342LLU;
	volatile int32_t t120 = -2889117;

    t120 = (x517-(x518>(x519&x520)));

    if (t120 != -2) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x521 = -1;
	int8_t x522 = INT8_MIN;
	int8_t x523 = INT8_MIN;
	int32_t x524 = -79;

    t121 = (x521-(x522>(x523&x524)));

    if (t121 != -1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x525 = -13;
	volatile uint8_t x526 = 19U;
	uint8_t x527 = UINT8_MAX;
	int32_t x528 = INT32_MIN;
	volatile int32_t t122 = -216338;

    t122 = (x525-(x526>(x527&x528)));

    if (t122 != -14) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x529 = 1;
	uint16_t x530 = UINT16_MAX;
	int8_t x531 = -1;
	int8_t x532 = INT8_MAX;
	volatile int32_t t123 = -38;

    t123 = (x529-(x530>(x531&x532)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x533 = INT8_MIN;
	int8_t x534 = INT8_MIN;
	uint8_t x535 = UINT8_MAX;
	int64_t x536 = INT64_MAX;

    t124 = (x533-(x534>(x535&x536)));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x537 = 29;
	int16_t x538 = INT16_MAX;
	volatile uint8_t x539 = UINT8_MAX;
	int8_t x540 = -1;
	volatile int32_t t125 = 4063;

    t125 = (x537-(x538>(x539&x540)));

    if (t125 != 28) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x541 = 1;
	volatile int16_t x542 = 7;
	volatile int32_t t126 = -463;

    t126 = (x541-(x542>(x543&x544)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x545 = INT64_MIN;
	int16_t x546 = INT16_MIN;
	volatile int64_t x547 = -1LL;
	int32_t x548 = -1;
	volatile int64_t t127 = INT64_MIN;

    t127 = (x545-(x546>(x547&x548)));

    if (t127 != INT64_MIN) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x549 = INT64_MAX;
	uint64_t x551 = UINT64_MAX;
	volatile int8_t x552 = -25;
	int64_t t128 = INT64_MAX;

    t128 = (x549-(x550>(x551&x552)));

    if (t128 != INT64_MAX) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x553 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	int8_t x556 = INT8_MAX;
	int64_t t129 = INT64_MIN;

    t129 = (x553-(x554>(x555&x556)));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x557 = INT32_MAX;
	int8_t x559 = INT8_MIN;
	volatile int8_t x560 = INT8_MIN;
	volatile int32_t t130 = INT32_MAX;

    t130 = (x557-(x558>(x559&x560)));

    if (t130 != INT32_MAX) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x561 = 557;
	int8_t x562 = 6;
	static volatile int16_t x563 = INT16_MAX;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t131 = 585913485;

    t131 = (x561-(x562>(x563&x564)));

    if (t131 != 557) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x565 = 298U;
	int32_t x567 = -1;
	volatile int64_t x568 = INT64_MIN;
	volatile int32_t t132 = 143426;

    t132 = (x565-(x566>(x567&x568)));

    if (t132 != 298) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x569 = INT8_MIN;
	int64_t x570 = -1936295875530689LL;
	uint8_t x571 = UINT8_MAX;
	int32_t x572 = -1;
	volatile int32_t t133 = -3;

    t133 = (x569-(x570>(x571&x572)));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x573 = -1;
	static int8_t x574 = 17;
	int64_t x575 = -21956244LL;
	volatile int32_t t134 = 1994693;

    t134 = (x573-(x574>(x575&x576)));

    if (t134 != -2) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x578 = -1;
	int8_t x579 = INT8_MAX;
	int8_t x580 = -1;
	uint64_t t135 = 8422018475LLU;

    t135 = (x577-(x578>(x579&x580)));

    if (t135 != 1262354046LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x581 = -1;
	static volatile int16_t x582 = INT16_MIN;
	static int64_t x583 = INT64_MIN;
	int32_t t136 = 0;

    t136 = (x581-(x582>(x583&x584)));

    if (t136 != -2) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x585 = INT8_MAX;
	int32_t x586 = -1;
	static int16_t x587 = -1;
	volatile int8_t x588 = 63;
	static int32_t t137 = -1355;

    t137 = (x585-(x586>(x587&x588)));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x589 = 87542192LLU;
	int32_t x590 = INT32_MIN;
	volatile int16_t x591 = INT16_MAX;
	volatile int8_t x592 = INT8_MIN;
	uint64_t t138 = 7211560384967695034LLU;

    t138 = (x589-(x590>(x591&x592)));

    if (t138 != 87542192LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	int32_t x594 = -1;
	uint8_t x596 = 83U;

    t139 = (x593-(x594>(x595&x596)));

    if (t139 != UINT32_MAX) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x598 = INT64_MIN;
	int32_t x599 = 4577;
	uint32_t x600 = 13U;
	volatile int32_t t140 = 50614605;

    t140 = (x597-(x598>(x599&x600)));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x605 = INT8_MIN;
	static int16_t x606 = -1;
	int32_t x607 = INT32_MIN;
	static volatile int32_t x608 = INT32_MIN;
	volatile int32_t t141 = -324;

    t141 = (x605-(x606>(x607&x608)));

    if (t141 != -129) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint32_t x610 = 229U;
	volatile uint8_t x611 = UINT8_MAX;
	int16_t x612 = -1;
	volatile int32_t t142 = -47218333;

    t142 = (x609-(x610>(x611&x612)));

    if (t142 != -1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x613 = UINT32_MAX;
	static volatile int64_t x614 = INT64_MAX;
	int16_t x615 = INT16_MIN;
	uint16_t x616 = 1U;
	volatile uint32_t t143 = 1U;

    t143 = (x613-(x614>(x615&x616)));

    if (t143 != 4294967294U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x617 = 0;
	uint32_t x618 = 1475450U;
	int16_t x619 = 4071;
	static int8_t x620 = INT8_MIN;
	volatile int32_t t144 = 29052050;

    t144 = (x617-(x618>(x619&x620)));

    if (t144 != -1) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x621 = UINT32_MAX;
	static volatile int32_t x624 = INT32_MAX;

    t145 = (x621-(x622>(x623&x624)));

    if (t145 != UINT32_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x625 = UINT32_MAX;
	int8_t x626 = 1;
	int32_t x628 = -1;
	volatile uint32_t t146 = UINT32_MAX;

    t146 = (x625-(x626>(x627&x628)));

    if (t146 != UINT32_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x629 = UINT8_MAX;
	int64_t x631 = INT64_MIN;
	int16_t x632 = INT16_MIN;

    t147 = (x629-(x630>(x631&x632)));

    if (t147 != 255) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x633 = 3890LL;
	uint64_t x634 = UINT64_MAX;
	int64_t x636 = -1LL;
	volatile int64_t t148 = 4LL;

    t148 = (x633-(x634>(x635&x636)));

    if (t148 != 3890LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x637 = INT8_MAX;
	int64_t x638 = 29216LL;
	uint8_t x639 = 26U;
	uint16_t x640 = 20576U;
	volatile int32_t t149 = -479405760;

    t149 = (x637-(x638>(x639&x640)));

    if (t149 != 126) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint16_t x642 = UINT16_MAX;

    t150 = (x641-(x642>(x643&x644)));

    if (t150 != 65534) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x645 = INT32_MAX;
	static int32_t x646 = -1;
	int16_t x647 = 0;
	int8_t x648 = -14;
	int32_t t151 = INT32_MAX;

    t151 = (x645-(x646>(x647&x648)));

    if (t151 != INT32_MAX) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x649 = INT8_MIN;
	volatile uint8_t x650 = 4U;
	int32_t x651 = -1;
	uint16_t x652 = 4U;
	volatile int32_t t152 = -15;

    t152 = (x649-(x650>(x651&x652)));

    if (t152 != -128) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x653 = -1;
	int32_t x654 = INT32_MIN;
	int16_t x655 = 7585;
	int64_t x656 = INT64_MIN;
	volatile int32_t t153 = 9146476;

    t153 = (x653-(x654>(x655&x656)));

    if (t153 != -1) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x657 = 84;
	static uint16_t x658 = 29U;
	volatile int64_t x659 = 13LL;
	volatile int32_t x660 = -118;

    t154 = (x657-(x658>(x659&x660)));

    if (t154 != 83) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x662 = -1;
	int64_t x663 = -1LL;
	uint16_t x664 = 0U;

    t155 = (x661-(x662>(x663&x664)));

    if (t155 != -128) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x665 = 28U;
	int32_t x666 = -1;
	uint16_t x667 = 95U;
	int16_t x668 = -1;
	volatile int32_t t156 = 898;

    t156 = (x665-(x666>(x667&x668)));

    if (t156 != 28) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x669 = -1;
	uint8_t x670 = 7U;
	volatile uint8_t x671 = 30U;
	volatile int8_t x672 = INT8_MIN;
	volatile int32_t t157 = -166418768;

    t157 = (x669-(x670>(x671&x672)));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x673 = UINT64_MAX;
	uint16_t x674 = 16U;
	volatile uint16_t x675 = 8425U;
	volatile uint16_t x676 = 31U;
	uint64_t t158 = 5198035058109LLU;

    t158 = (x673-(x674>(x675&x676)));

    if (t158 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x677 = INT32_MAX;
	uint16_t x678 = 13057U;
	int32_t x679 = INT32_MIN;
	volatile int16_t x680 = -1;
	int32_t t159 = -496;

    t159 = (x677-(x678>(x679&x680)));

    if (t159 != 2147483646) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x681 = 56821U;
	int32_t x683 = -32212;
	static int16_t x684 = -1;
	uint32_t t160 = 6643581U;

    t160 = (x681-(x682>(x683&x684)));

    if (t160 != 56821U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x686 = INT64_MIN;
	int64_t x687 = INT64_MAX;
	volatile int64_t x688 = -1LL;
	int64_t t161 = INT64_MAX;

    t161 = (x685-(x686>(x687&x688)));

    if (t161 != INT64_MAX) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x689 = UINT16_MAX;
	volatile int16_t x690 = 2;
	static int8_t x692 = -1;
	int32_t t162 = -10632968;

    t162 = (x689-(x690>(x691&x692)));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x693 = UINT16_MAX;
	uint64_t x695 = 479185LLU;
	static int32_t t163 = -27;

    t163 = (x693-(x694>(x695&x696)));

    if (t163 != 65534) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x697 = 276413485;
	static uint8_t x698 = 71U;
	int32_t x699 = INT32_MIN;
	volatile uint16_t x700 = 10U;
	volatile int32_t t164 = 3915;

    t164 = (x697-(x698>(x699&x700)));

    if (t164 != 276413484) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x701 = INT16_MIN;
	int16_t x703 = 2657;
	volatile int32_t t165 = 62;

    t165 = (x701-(x702>(x703&x704)));

    if (t165 != -32768) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int64_t x705 = INT64_MIN;
	int64_t x708 = -20185511798LL;
	int64_t t166 = INT64_MIN;

    t166 = (x705-(x706>(x707&x708)));

    if (t166 != INT64_MIN) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x717 = -1;
	static int16_t x718 = INT16_MAX;
	static int64_t x720 = 11LL;
	int32_t t167 = 31;

    t167 = (x717-(x718>(x719&x720)));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x721 = 977867LLU;
	int64_t x722 = INT64_MIN;
	static int8_t x723 = INT8_MIN;
	static uint64_t x724 = 40011723701540LLU;

    t168 = (x721-(x722>(x723&x724)));

    if (t168 != 977866LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x725 = INT8_MIN;
	int8_t x726 = 63;
	int16_t x727 = INT16_MIN;
	int16_t x728 = INT16_MIN;

    t169 = (x725-(x726>(x727&x728)));

    if (t169 != -129) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x729 = UINT16_MAX;
	int16_t x730 = INT16_MAX;
	int32_t x731 = 92356366;
	volatile int8_t x732 = 0;

    t170 = (x729-(x730>(x731&x732)));

    if (t170 != 65534) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x733 = -23376;
	int32_t x734 = 160777;
	static uint8_t x736 = 22U;
	static volatile int32_t t171 = 106980;

    t171 = (x733-(x734>(x735&x736)));

    if (t171 != -23377) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int64_t x737 = -1LL;
	int32_t x738 = INT32_MIN;
	int16_t x739 = 14331;
	uint32_t x740 = UINT32_MAX;
	volatile int64_t t172 = 59214LL;

    t172 = (x737-(x738>(x739&x740)));

    if (t172 != -2LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x741 = UINT64_MAX;
	int8_t x742 = INT8_MIN;
	static int64_t x743 = INT64_MIN;
	volatile uint64_t x744 = 6560141518008045LLU;
	uint64_t t173 = 99379025286686748LLU;

    t173 = (x741-(x742>(x743&x744)));

    if (t173 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x745 = 6U;
	uint16_t x746 = 27U;
	uint32_t x747 = UINT32_MAX;
	volatile int64_t x748 = INT64_MAX;
	int32_t t174 = 0;

    t174 = (x745-(x746>(x747&x748)));

    if (t174 != 6) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint32_t x749 = 756U;
	static int8_t x750 = INT8_MIN;
	uint32_t x751 = UINT32_MAX;
	static volatile uint64_t x752 = 5659540093LLU;
	uint32_t t175 = 48688U;

    t175 = (x749-(x750>(x751&x752)));

    if (t175 != 755U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x753 = 0;
	volatile int32_t x754 = INT32_MAX;
	static int64_t x756 = INT64_MAX;
	static volatile int32_t t176 = -204635304;

    t176 = (x753-(x754>(x755&x756)));

    if (t176 != -1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x761 = INT64_MAX;
	uint16_t x762 = 924U;
	int64_t x763 = -116388818414605LL;
	int16_t x764 = INT16_MIN;
	int64_t t177 = 224232LL;

    t177 = (x761-(x762>(x763&x764)));

    if (t177 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x765 = 12U;
	uint32_t x766 = 27418U;
	int32_t x767 = 60127010;
	uint64_t x768 = 810750088LLU;
	int32_t t178 = 7967;

    t178 = (x765-(x766>(x767&x768)));

    if (t178 != 12) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x769 = -1;
	uint32_t x770 = UINT32_MAX;
	int32_t t179 = -5;

    t179 = (x769-(x770>(x771&x772)));

    if (t179 != -2) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x773 = 35U;
	static uint16_t x774 = UINT16_MAX;
	volatile uint16_t x775 = 71U;
	static volatile uint32_t t180 = 75U;

    t180 = (x773-(x774>(x775&x776)));

    if (t180 != 34U) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x777 = INT16_MIN;
	static uint64_t x778 = 28978371318238LLU;
	volatile int16_t x779 = INT16_MIN;
	volatile int32_t t181 = 58;

    t181 = (x777-(x778>(x779&x780)));

    if (t181 != -32768) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x781 = 0;
	int64_t x782 = 9592581LL;
	static uint32_t x784 = 7U;
	int32_t t182 = -89620;

    t182 = (x781-(x782>(x783&x784)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x785 = INT16_MAX;
	int16_t x786 = -797;
	int64_t x787 = -7077102911493669LL;
	static int16_t x788 = -1;
	volatile int32_t t183 = 925308;

    t183 = (x785-(x786>(x787&x788)));

    if (t183 != 32766) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x789 = UINT64_MAX;
	uint8_t x790 = 7U;
	uint64_t x791 = UINT64_MAX;
	static uint32_t x792 = 44U;

    t184 = (x789-(x790>(x791&x792)));

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x793 = 485500727303LLU;
	uint16_t x794 = UINT16_MAX;
	static uint64_t t185 = 214291LLU;

    t185 = (x793-(x794>(x795&x796)));

    if (t185 != 485500727302LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x798 = 6U;
	uint16_t x800 = 822U;
	int32_t t186 = -8071;

    t186 = (x797-(x798>(x799&x800)));

    if (t186 != -32768) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x801 = 155888464465LLU;
	volatile int64_t x802 = INT64_MIN;
	static int16_t x804 = INT16_MIN;
	uint64_t t187 = 3667888564LLU;

    t187 = (x801-(x802>(x803&x804)));

    if (t187 != 155888464465LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x805 = INT32_MIN;
	int64_t x808 = 6109LL;

    t188 = (x805-(x806>(x807&x808)));

    if (t188 != INT32_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x809 = INT16_MIN;
	uint32_t x810 = UINT32_MAX;
	static int16_t x811 = -3502;
	int8_t x812 = 0;
	static volatile int32_t t189 = 1;

    t189 = (x809-(x810>(x811&x812)));

    if (t189 != -32769) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x813 = 121791019057791LLU;
	int16_t x814 = INT16_MIN;
	int16_t x815 = -1;
	int64_t x816 = -1LL;

    t190 = (x813-(x814>(x815&x816)));

    if (t190 != 121791019057791LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x818 = INT32_MAX;
	uint16_t x820 = UINT16_MAX;
	uint32_t t191 = 297634763U;

    t191 = (x817-(x818>(x819&x820)));

    if (t191 != 7261314U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x821 = -1;
	int16_t x822 = 4;
	int8_t x823 = INT8_MIN;
	volatile uint8_t x824 = 107U;
	int32_t t192 = 131;

    t192 = (x821-(x822>(x823&x824)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x825 = 2913093616LLU;
	int8_t x826 = INT8_MIN;
	uint64_t x827 = 4174739964LLU;
	int32_t x828 = 48;
	uint64_t t193 = 2500150812934528LLU;

    t193 = (x825-(x826>(x827&x828)));

    if (t193 != 2913093615LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x830 = INT16_MIN;
	int32_t x832 = -1;

    t194 = (x829-(x830>(x831&x832)));

    if (t194 != 2364) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x834 = 4743U;
	int8_t x836 = 2;

    t195 = (x833-(x834>(x835&x836)));

    if (t195 != 34625LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x837 = UINT64_MAX;
	int32_t x839 = -256;
	uint16_t x840 = 61U;
	uint64_t t196 = 1104055283LLU;

    t196 = (x837-(x838>(x839&x840)));

    if (t196 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x841 = UINT8_MAX;
	volatile int64_t x842 = INT64_MIN;
	uint16_t x843 = UINT16_MAX;
	static volatile int32_t x844 = INT32_MAX;

    t197 = (x841-(x842>(x843&x844)));

    if (t197 != 255) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x845 = INT32_MAX;
	int32_t x846 = INT32_MIN;
	int16_t x847 = INT16_MIN;
	volatile int64_t x848 = 2919LL;
	volatile int32_t t198 = INT32_MAX;

    t198 = (x845-(x846>(x847&x848)));

    if (t198 != INT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x849 = -9508;
	int64_t x850 = -3516119876447252918LL;
	int32_t x851 = INT32_MIN;
	int32_t x852 = INT32_MIN;

    t199 = (x849-(x850>(x851&x852)));

    if (t199 != -9508) { NG(); } else { ; }
	
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

