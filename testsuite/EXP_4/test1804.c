
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

int8_t x5 = INT8_MAX;
int8_t x10 = INT8_MIN;
static volatile uint32_t x14 = UINT32_MAX;
volatile int16_t x17 = -7630;
volatile int64_t x19 = -1LL;
static int16_t x25 = INT16_MIN;
volatile uint64_t x27 = 20487LLU;
static volatile int64_t t6 = 11236588344894LL;
uint32_t x31 = 74886594U;
int8_t x34 = INT8_MIN;
int32_t x36 = INT32_MIN;
int32_t t8 = -12911;
static uint16_t x38 = 71U;
volatile int32_t t9 = 476;
int16_t x47 = -4;
int8_t x52 = INT8_MIN;
uint64_t x53 = UINT64_MAX;
uint32_t x54 = 553502U;
uint64_t t13 = 921916LLU;
volatile int8_t x59 = -1;
int64_t x67 = INT64_MAX;
uint64_t x72 = UINT64_MAX;
volatile uint32_t x85 = 245308U;
int64_t x87 = INT64_MAX;
int64_t x92 = -1LL;
static int32_t t24 = -17093;
volatile int32_t t26 = -25263;
uint32_t x109 = UINT32_MAX;
uint32_t t27 = 2U;
int32_t x113 = INT32_MIN;
volatile uint16_t x122 = 709U;
volatile uint64_t x125 = 8742044393294388516LLU;
int32_t t32 = 10742132;
int16_t x136 = 1;
static int16_t x138 = -6392;
int64_t x140 = INT64_MIN;
volatile uint32_t t35 = 13U;
int64_t x150 = -28390LL;
uint8_t x153 = 1U;
int8_t x154 = -45;
static int32_t x156 = 4317;
volatile int16_t x157 = INT16_MIN;
int16_t x158 = INT16_MAX;
volatile int32_t t39 = 14368603;
int16_t x161 = -1;
int8_t x163 = -1;
uint32_t x165 = 24426U;
static volatile uint32_t t41 = 6974U;
static volatile int32_t t44 = 18886768;
int32_t x184 = -1;
int32_t t45 = 541311530;
int32_t x185 = 7;
uint16_t x191 = UINT16_MAX;
static volatile int32_t x194 = -31;
int32_t x197 = INT32_MIN;
int32_t x202 = -1;
int16_t x203 = -1;
volatile uint8_t x204 = 25U;
int16_t x206 = INT16_MIN;
uint16_t x207 = UINT16_MAX;
static volatile uint32_t x209 = 1U;
int8_t x214 = INT8_MIN;
uint8_t x215 = 2U;
uint64_t x216 = 66376830730259LLU;
volatile uint64_t t53 = 111338566944LLU;
int8_t x223 = -33;
int8_t x230 = INT8_MIN;
uint8_t x232 = 9U;
static int32_t x233 = 191153;
int8_t x242 = INT8_MIN;
volatile int16_t x244 = -776;
volatile int32_t t60 = 4281;
int64_t x245 = INT64_MIN;
volatile int8_t x248 = INT8_MAX;
uint64_t x249 = 43LLU;
volatile int8_t x253 = -12;
volatile int8_t x255 = 9;
volatile uint32_t t63 = 199035U;
static int32_t x269 = INT32_MAX;
int64_t x273 = INT64_MIN;
volatile uint64_t x274 = UINT64_MAX;
volatile int16_t x277 = INT16_MIN;
int32_t t69 = -1;
volatile int16_t x282 = INT16_MIN;
int32_t x283 = -4;
volatile int32_t t70 = -23476793;
int16_t x299 = INT16_MAX;
int64_t x301 = -1LL;
uint64_t x306 = 29LLU;
static uint16_t x313 = 1U;
volatile int32_t x315 = -99;
int8_t x317 = INT8_MAX;
volatile uint64_t x320 = 343LLU;
volatile int32_t x322 = INT32_MIN;
static uint32_t x327 = 305084641U;
int64_t t81 = -2LL;
int32_t x334 = INT32_MIN;
int16_t x337 = INT16_MAX;
volatile int64_t t84 = 2445686854778413091LL;
uint64_t x342 = 3744745969LLU;
volatile uint16_t x368 = 36U;
static int32_t t91 = -1;
int64_t x371 = INT64_MIN;
uint32_t x376 = UINT32_MAX;
int32_t x393 = INT32_MAX;
static int64_t x401 = 1028106580626LL;
static volatile int32_t x403 = 53334;
volatile int64_t t100 = 0LL;
int32_t x413 = 759933573;
static int16_t x417 = -1;
uint32_t x426 = 171U;
int8_t x430 = INT8_MIN;
uint64_t x434 = 101915286LLU;
static int8_t x438 = INT8_MAX;
static int32_t t109 = 23315849;
volatile int32_t t110 = 849954882;
uint16_t x446 = 3128U;
volatile uint8_t x448 = 5U;
int64_t x453 = -1LL;
static int64_t t113 = -9733LL;
int32_t x459 = -4;
int32_t x465 = INT32_MIN;
volatile int32_t t116 = 502689;
volatile int32_t x470 = 555435;
int64_t t118 = 18112LL;
int64_t x481 = INT64_MAX;
uint64_t x490 = UINT64_MAX;
uint16_t x496 = 149U;
static int32_t x500 = INT32_MIN;
static int8_t x501 = -1;
uint8_t x506 = UINT8_MAX;
uint8_t x510 = 3U;
uint32_t x513 = 3317075U;
uint16_t x514 = 250U;
int32_t x518 = 402;
static volatile int64_t x526 = INT64_MIN;
static volatile int64_t t131 = INT64_MIN;
static uint64_t x532 = UINT64_MAX;
volatile int16_t x535 = -1;
static uint8_t x543 = UINT8_MAX;
uint8_t x546 = 1U;
static volatile int32_t x553 = INT32_MIN;
int8_t x567 = INT8_MIN;
int32_t x572 = -1;
int32_t x579 = -4200169;
int32_t t145 = 518;
int16_t x592 = INT16_MIN;
static uint64_t t147 = 48792042702956LLU;
uint8_t x593 = 16U;
static volatile int32_t t148 = -838584;
uint8_t x609 = UINT8_MAX;
static int32_t x611 = INT32_MIN;
volatile int64_t x614 = INT64_MIN;
int32_t x619 = -1;
volatile int64_t x631 = INT64_MIN;
static volatile int32_t x636 = -1;
volatile uint32_t x640 = 2026U;
static volatile int8_t x642 = INT8_MIN;
int8_t x644 = 1;
static uint16_t x662 = UINT16_MAX;
int8_t x663 = 6;
uint16_t x666 = 8U;
volatile int64_t t167 = -57960972947931LL;
uint32_t x675 = 957U;
static uint16_t x677 = 9141U;
int32_t t171 = 112467;
volatile uint64_t x694 = UINT64_MAX;
volatile uint64_t t173 = 2923296291947LLU;
uint16_t x699 = UINT16_MAX;
uint16_t x703 = 2U;
int32_t x714 = INT32_MIN;
volatile int64_t x717 = -1LL;
static volatile int64_t t179 = 24LL;
int64_t x732 = -14LL;
static uint64_t t182 = 5081996468964104LLU;
int8_t x741 = -1;
int64_t x749 = INT64_MIN;
volatile int32_t t189 = -44;
uint8_t x764 = 23U;
volatile int32_t t190 = -460;
uint64_t x765 = 142915800642786419LLU;
volatile int8_t x766 = -44;
uint16_t x769 = 3U;
volatile uint64_t x772 = 10037088914816LLU;
static volatile int64_t t192 = 32365LL;
static int32_t t193 = -45;
int16_t x780 = INT16_MIN;
int32_t x786 = INT32_MIN;
int32_t x787 = 3762277;
volatile int64_t x790 = INT64_MAX;
static int16_t x792 = 7;
volatile int32_t x799 = -1;


void f0(void) {
    	static int8_t x1 = -1;
	int16_t x2 = 63;
	static uint16_t x3 = 776U;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -8219920;

    t0 = (x1&(x2*(x3<=x4)));

    if (t0 != 63) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = 3730LL;
	int16_t x7 = 1739;
	static uint64_t x8 = 811471393445017LLU;
	volatile int64_t t1 = 1951LL;

    t1 = (x5&(x6*(x7<=x8)));

    if (t1 != 18LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 7;
	int32_t x11 = -1;
	uint8_t x12 = 6U;
	static volatile int32_t t2 = -1;

    t2 = (x9&(x10*(x11<=x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = UINT16_MAX;
	uint8_t x15 = 19U;
	int16_t x16 = -1;
	uint32_t t3 = 179U;

    t3 = (x13&(x14*(x15<=x16)));

    if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 1598LLU;
	uint32_t x20 = 3U;
	volatile uint64_t t4 = 74788713049245875LLU;

    t4 = (x17&(x18*(x19<=x20)));

    if (t4 != 562LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x21 = UINT16_MAX;
	static uint32_t x22 = UINT32_MAX;
	uint8_t x23 = 15U;
	static uint8_t x24 = 1U;
	uint32_t t5 = 2U;

    t5 = (x21&(x22*(x23<=x24)));

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	static int64_t x26 = INT64_MIN;
	uint8_t x28 = 46U;

    t6 = (x25&(x26*(x27<=x28)));

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static int64_t x29 = -1LL;
	volatile int16_t x30 = 51;
	int16_t x32 = -14412;
	int64_t t7 = -29095LL;

    t7 = (x29&(x30*(x31<=x32)));

    if (t7 != 51LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x33 = INT32_MIN;
	static uint8_t x35 = 127U;

    t8 = (x33&(x34*(x35<=x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MIN;

    t9 = (x37&(x38*(x39<=x40)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = UINT64_MAX;
	int16_t x42 = 4175;
	int64_t x43 = INT64_MIN;
	volatile int8_t x44 = -1;
	volatile uint64_t t10 = 12682397069199LLU;

    t10 = (x41&(x42*(x43<=x44)));

    if (t10 != 4175LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x45 = 236204979U;
	uint8_t x46 = 13U;
	volatile int16_t x48 = INT16_MIN;
	uint32_t t11 = 173U;

    t11 = (x45&(x46*(x47<=x48)));

    if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x49 = -1;
	uint64_t x50 = UINT64_MAX;
	static int8_t x51 = 5;
	uint64_t t12 = 7067770297954804LLU;

    t12 = (x49&(x50*(x51<=x52)));

    if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x55 = INT32_MIN;
	uint64_t x56 = 3580007LLU;

    t13 = (x53&(x54*(x55<=x56)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int64_t x57 = -1LL;
	int64_t x58 = -50420183976778LL;
	static volatile int16_t x60 = INT16_MIN;
	volatile int64_t t14 = -1625178210LL;

    t14 = (x57&(x58*(x59<=x60)));

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MIN;
	uint16_t x62 = 3U;
	uint8_t x63 = UINT8_MAX;
	int16_t x64 = INT16_MIN;
	static volatile int32_t t15 = 29601755;

    t15 = (x61&(x62*(x63<=x64)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = INT16_MIN;
	static int8_t x66 = INT8_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t16 = 17634258;

    t16 = (x65&(x66*(x67<=x68)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x69 = -1653476;
	static int16_t x70 = 6876;
	int32_t x71 = 1646;
	int32_t t17 = -22;

    t17 = (x69&(x70*(x71<=x72)));

    if (t17 != 28) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = -13;
	uint64_t x74 = UINT64_MAX;
	volatile int8_t x75 = INT8_MIN;
	int32_t x76 = -82304554;
	uint64_t t18 = 32061940LLU;

    t18 = (x73&(x74*(x75<=x76)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x77 = INT64_MIN;
	uint32_t x78 = 164U;
	static int64_t x79 = INT64_MAX;
	uint16_t x80 = UINT16_MAX;
	int64_t t19 = -117973062822LL;

    t19 = (x77&(x78*(x79<=x80)));

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x81 = UINT16_MAX;
	static volatile int8_t x82 = -12;
	int8_t x83 = -18;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t20 = -12;

    t20 = (x81&(x82*(x83<=x84)));

    if (t20 != 65524) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x86 = 137054U;
	int32_t x88 = INT32_MAX;
	volatile uint32_t t21 = 248148774U;

    t21 = (x85&(x86*(x87<=x88)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x89 = INT64_MIN;
	int64_t x90 = -51035676LL;
	int64_t x91 = -1LL;
	volatile int64_t t22 = INT64_MIN;

    t22 = (x89&(x90*(x91<=x92)));

    if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MIN;
	static int16_t x95 = INT16_MAX;
	volatile int16_t x96 = INT16_MIN;
	uint32_t t23 = 3740696U;

    t23 = (x93&(x94*(x95<=x96)));

    if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x97 = -1;
	static volatile int16_t x98 = 773;
	int64_t x99 = -1929070LL;
	int8_t x100 = INT8_MIN;

    t24 = (x97&(x98*(x99<=x100)));

    if (t24 != 773) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = 1180;
	static volatile int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	volatile int8_t x104 = INT8_MAX;
	volatile int32_t t25 = -995283486;

    t25 = (x101&(x102*(x103<=x104)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x105 = INT8_MAX;
	int8_t x106 = 42;
	uint16_t x107 = UINT16_MAX;
	uint64_t x108 = 47867838981601LLU;

    t26 = (x105&(x106*(x107<=x108)));

    if (t26 != 42) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x110 = INT8_MIN;
	static int16_t x111 = INT16_MIN;
	int8_t x112 = -1;

    t27 = (x109&(x110*(x111<=x112)));

    if (t27 != 4294967168U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x114 = 1;
	int16_t x115 = 2;
	uint16_t x116 = 1U;
	int32_t t28 = 6;

    t28 = (x113&(x114*(x115<=x116)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x117 = INT8_MAX;
	volatile uint32_t x118 = 7684U;
	static uint8_t x119 = 1U;
	volatile int64_t x120 = 4061772255352963508LL;
	uint32_t t29 = 60686103U;

    t29 = (x117&(x118*(x119<=x120)));

    if (t29 != 4U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = INT64_MAX;
	volatile uint32_t x123 = 719714U;
	volatile int8_t x124 = INT8_MIN;
	int64_t t30 = 20630218154230502LL;

    t30 = (x121&(x122*(x123<=x124)));

    if (t30 != 709LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x126 = -1296691061507LL;
	int64_t x127 = INT64_MIN;
	volatile int8_t x128 = INT8_MIN;
	volatile uint64_t t31 = 11368LLU;

    t31 = (x125&(x126*(x127<=x128)));

    if (t31 != 8742043238484974628LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x129 = 3U;
	int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MIN;
	volatile uint16_t x132 = UINT16_MAX;

    t32 = (x129&(x130*(x131<=x132)));

    if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x133 = 429052750625756434LLU;
	static int64_t x134 = INT64_MAX;
	uint32_t x135 = UINT32_MAX;
	volatile uint64_t t33 = 25964984017689LLU;

    t33 = (x133&(x134*(x135<=x136)));

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x137 = INT8_MIN;
	static uint8_t x139 = 53U;
	static volatile int32_t t34 = 11697269;

    t34 = (x137&(x138*(x139<=x140)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x141 = -1;
	uint32_t x142 = 155792U;
	int8_t x143 = -1;
	static int32_t x144 = -1;

    t35 = (x141&(x142*(x143<=x144)));

    if (t35 != 155792U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile int64_t x146 = -307577097883545199LL;
	int16_t x147 = -1;
	volatile int32_t x148 = INT32_MIN;
	static volatile int64_t t36 = 591708279838LL;

    t36 = (x145&(x146*(x147<=x148)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MIN;
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = UINT64_MAX;
	volatile int64_t t37 = 29LL;

    t37 = (x149&(x150*(x151<=x152)));

    if (t37 != -32768LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x155 = -16;
	static int32_t t38 = 247;

    t38 = (x153&(x154*(x155<=x156)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x159 = 5090;
	volatile int16_t x160 = 2;

    t39 = (x157&(x158*(x159<=x160)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x162 = -1LL;
	volatile uint8_t x164 = 1U;
	int64_t t40 = 427LL;

    t40 = (x161&(x162*(x163<=x164)));

    if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x166 = 1U;
	static int32_t x167 = -14;
	int8_t x168 = -3;

    t41 = (x165&(x166*(x167<=x168)));

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x169 = INT16_MAX;
	uint8_t x170 = UINT8_MAX;
	int16_t x171 = 0;
	volatile int16_t x172 = -1920;
	volatile int32_t t42 = 16;

    t42 = (x169&(x170*(x171<=x172)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x173 = INT8_MIN;
	int8_t x174 = INT8_MIN;
	volatile uint32_t x175 = 447203526U;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = -1699710;

    t43 = (x173&(x174*(x175<=x176)));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x177 = 74711;
	int8_t x178 = -2;
	uint8_t x179 = 1U;
	static volatile int32_t x180 = 3424;

    t44 = (x177&(x178*(x179<=x180)));

    if (t44 != 74710) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x181 = INT32_MIN;
	uint8_t x182 = 58U;
	int8_t x183 = -1;

    t45 = (x181&(x182*(x183<=x184)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = INT8_MAX;
	static int32_t x188 = -7;
	int32_t t46 = 4181;

    t46 = (x185&(x186*(x187<=x188)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	int32_t x190 = INT32_MAX;
	static int8_t x192 = 5;
	int32_t t47 = 85275;

    t47 = (x189&(x190*(x191<=x192)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x193 = 907959;
	static volatile uint8_t x195 = 118U;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -48680;

    t48 = (x193&(x194*(x195<=x196)));

    if (t48 != 907937) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x198 = -1;
	uint16_t x199 = 108U;
	int8_t x200 = INT8_MIN;
	static volatile int32_t t49 = 49453439;

    t49 = (x197&(x198*(x199<=x200)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x201 = 3652U;
	volatile int32_t t50 = 217;

    t50 = (x201&(x202*(x203<=x204)));

    if (t50 != 3652) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x205 = 837123414LLU;
	uint8_t x208 = 16U;
	volatile uint64_t t51 = 283748113387639LLU;

    t51 = (x205&(x206*(x207<=x208)));

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint8_t x210 = 3U;
	int32_t x211 = INT32_MIN;
	int16_t x212 = INT16_MIN;
	static uint32_t t52 = 43752703U;

    t52 = (x209&(x210*(x211<=x212)));

    if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x213 = 11134815LLU;

    t53 = (x213&(x214*(x215<=x216)));

    if (t53 != 11134720LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x217 = 5373315LLU;
	uint64_t x218 = 1468142146773161137LLU;
	uint64_t x219 = 56645943687970136LLU;
	uint8_t x220 = UINT8_MAX;
	static uint64_t t54 = 12195998357LLU;

    t54 = (x217&(x218*(x219<=x220)));

    if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x221 = 3435308682LLU;
	int64_t x222 = 3833LL;
	int32_t x224 = -102481;
	volatile uint64_t t55 = 64287099977726156LLU;

    t55 = (x221&(x222*(x223<=x224)));

    if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x225 = -1111269491922252024LL;
	volatile uint32_t x226 = UINT32_MAX;
	static int64_t x227 = INT64_MAX;
	int64_t x228 = -29719256768LL;
	volatile int64_t t56 = 940635LL;

    t56 = (x225&(x226*(x227<=x228)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x229 = INT64_MIN;
	int32_t x231 = 16;
	int64_t t57 = 108853920LL;

    t57 = (x229&(x230*(x231<=x232)));

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	int16_t x236 = -1;
	int32_t t58 = -35390255;

    t58 = (x233&(x234*(x235<=x236)));

    if (t58 != 27313) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x237 = 128U;
	static uint64_t x238 = 6013638759978LLU;
	volatile int8_t x239 = 0;
	static uint8_t x240 = 3U;
	uint64_t t59 = 13854LLU;

    t59 = (x237&(x238*(x239<=x240)));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x241 = 2;
	int8_t x243 = 1;

    t60 = (x241&(x242*(x243<=x244)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x246 = INT64_MIN;
	int64_t x247 = -12084LL;
	int64_t t61 = INT64_MIN;

    t61 = (x245&(x246*(x247<=x248)));

    if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint64_t x250 = 561608LLU;
	volatile int8_t x251 = -1;
	uint32_t x252 = UINT32_MAX;
	uint64_t t62 = 4420758547LLU;

    t62 = (x249&(x250*(x251<=x252)));

    if (t62 != 8LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x254 = 34U;
	int64_t x256 = -864689329944LL;

    t63 = (x253&(x254*(x255<=x256)));

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x257 = 630LLU;
	static uint16_t x258 = UINT16_MAX;
	int8_t x259 = INT8_MAX;
	int64_t x260 = -27707977LL;
	uint64_t t64 = 49970090082LLU;

    t64 = (x257&(x258*(x259<=x260)));

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x261 = INT32_MIN;
	static int64_t x262 = INT64_MAX;
	int32_t x263 = INT32_MAX;
	int64_t x264 = 434524365916LL;
	int64_t t65 = 220407840095LL;

    t65 = (x261&(x262*(x263<=x264)));

    if (t65 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x265 = 0;
	uint8_t x266 = 52U;
	uint16_t x267 = UINT16_MAX;
	volatile int8_t x268 = INT8_MIN;
	static int32_t t66 = 0;

    t66 = (x265&(x266*(x267<=x268)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x270 = INT8_MIN;
	int64_t x271 = -2204343LL;
	uint64_t x272 = 2313849853LLU;
	int32_t t67 = -94;

    t67 = (x269&(x270*(x271<=x272)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x275 = INT32_MIN;
	uint8_t x276 = UINT8_MAX;
	uint64_t t68 = 141640556410155869LLU;

    t68 = (x273&(x274*(x275<=x276)));

    if (t68 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	int16_t x280 = INT16_MIN;

    t69 = (x277&(x278*(x279<=x280)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x281 = INT8_MIN;
	static uint16_t x284 = UINT16_MAX;

    t70 = (x281&(x282*(x283<=x284)));

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x285 = INT64_MIN;
	uint16_t x286 = 79U;
	int16_t x287 = -1569;
	volatile int16_t x288 = -1;
	volatile int64_t t71 = 651162LL;

    t71 = (x285&(x286*(x287<=x288)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x289 = UINT64_MAX;
	int32_t x290 = 233370920;
	int64_t x291 = -1LL;
	int16_t x292 = -48;
	uint64_t t72 = 2206557240328429LLU;

    t72 = (x289&(x290*(x291<=x292)));

    if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x293 = 1445;
	int8_t x294 = INT8_MAX;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 478306725;

    t73 = (x293&(x294*(x295<=x296)));

    if (t73 != 37) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x297 = -1;
	int8_t x298 = -1;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -320248002;

    t74 = (x297&(x298*(x299<=x300)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x302 = 13U;
	uint16_t x303 = 541U;
	uint16_t x304 = UINT16_MAX;
	int64_t t75 = -248031678LL;

    t75 = (x301&(x302*(x303<=x304)));

    if (t75 != 13LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x305 = -2;
	int32_t x307 = -129372;
	int32_t x308 = -461342;
	volatile uint64_t t76 = 107907154LLU;

    t76 = (x305&(x306*(x307<=x308)));

    if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x309 = 29066976U;
	int64_t x310 = INT64_MIN;
	int8_t x311 = INT8_MIN;
	volatile int16_t x312 = -1;
	static volatile int64_t t77 = 28228620617LL;

    t77 = (x309&(x310*(x311<=x312)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x314 = 3U;
	static uint8_t x316 = UINT8_MAX;
	volatile uint32_t t78 = 3122171U;

    t78 = (x313&(x314*(x315<=x316)));

    if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x318 = -1;
	int16_t x319 = INT16_MIN;
	int32_t t79 = 4;

    t79 = (x317&(x318*(x319<=x320)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x321 = INT16_MIN;
	volatile int32_t x323 = INT32_MIN;
	static uint64_t x324 = 3356687370015099LLU;
	static int32_t t80 = 7381;

    t80 = (x321&(x322*(x323<=x324)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x325 = -410538824LL;
	volatile uint32_t x326 = 211577369U;
	static int64_t x328 = -78134287901690351LL;

    t81 = (x325&(x326*(x327<=x328)));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x329 = 20035LLU;
	int32_t x330 = INT32_MIN;
	int16_t x331 = INT16_MIN;
	static int8_t x332 = INT8_MAX;
	static volatile uint64_t t82 = 228660721802312LLU;

    t82 = (x329&(x330*(x331<=x332)));

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x333 = -1LL;
	uint8_t x335 = 1U;
	volatile int16_t x336 = -1;
	volatile int64_t t83 = 163LL;

    t83 = (x333&(x334*(x335<=x336)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x338 = -2919171915816307133LL;
	int32_t x339 = -1;
	int64_t x340 = INT64_MIN;

    t84 = (x337&(x338*(x339<=x340)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x341 = -2044;
	int16_t x343 = INT16_MIN;
	volatile int32_t x344 = INT32_MIN;
	static uint64_t t85 = 80737338693421LLU;

    t85 = (x341&(x342*(x343<=x344)));

    if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = 7947U;
	static volatile int32_t t86 = 6175123;

    t86 = (x345&(x346*(x347<=x348)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x349 = 1U;
	int16_t x350 = INT16_MIN;
	uint32_t x351 = 2604454U;
	int16_t x352 = INT16_MIN;
	int32_t t87 = -1;

    t87 = (x349&(x350*(x351<=x352)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x353 = INT32_MIN;
	static uint16_t x354 = 1U;
	uint16_t x355 = 1U;
	int64_t x356 = -11415LL;
	volatile int32_t t88 = -41;

    t88 = (x353&(x354*(x355<=x356)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x357 = INT8_MIN;
	uint8_t x358 = 6U;
	volatile uint8_t x359 = 77U;
	volatile int16_t x360 = INT16_MIN;
	int32_t t89 = 15056545;

    t89 = (x357&(x358*(x359<=x360)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x361 = 2562;
	volatile uint32_t x362 = UINT32_MAX;
	static int16_t x363 = -1;
	static int32_t x364 = INT32_MIN;
	volatile uint32_t t90 = 44U;

    t90 = (x361&(x362*(x363<=x364)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x365 = INT16_MIN;
	int16_t x366 = INT16_MAX;
	int8_t x367 = INT8_MIN;

    t91 = (x365&(x366*(x367<=x368)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x369 = -2;
	static uint32_t x370 = UINT32_MAX;
	static int16_t x372 = -227;
	uint32_t t92 = 3U;

    t92 = (x369&(x370*(x371<=x372)));

    if (t92 != 4294967294U) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x373 = INT8_MIN;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -1;
	volatile uint32_t t93 = 45221U;

    t93 = (x373&(x374*(x375<=x376)));

    if (t93 != 4294967168U) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x377 = INT64_MIN;
	static uint16_t x378 = 4808U;
	int16_t x379 = -1;
	static int64_t x380 = INT64_MIN;
	int64_t t94 = -2712214180117LL;

    t94 = (x377&(x378*(x379<=x380)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x381 = 2222049LL;
	uint8_t x382 = 0U;
	int32_t x383 = INT32_MIN;
	static int64_t x384 = 7963974903768194LL;
	int64_t t95 = 14029472LL;

    t95 = (x381&(x382*(x383<=x384)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x385 = 0U;
	int8_t x386 = -15;
	static volatile uint16_t x387 = UINT16_MAX;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -338766;

    t96 = (x385&(x386*(x387<=x388)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x389 = INT64_MIN;
	int32_t x390 = -102;
	volatile uint8_t x391 = 0U;
	int8_t x392 = INT8_MAX;
	volatile int64_t t97 = INT64_MIN;

    t97 = (x389&(x390*(x391<=x392)));

    if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x394 = 470LLU;
	static volatile int8_t x395 = INT8_MIN;
	int64_t x396 = INT64_MAX;
	static volatile uint64_t t98 = 298198548LLU;

    t98 = (x393&(x394*(x395<=x396)));

    if (t98 != 470LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x397 = 6U;
	int64_t x398 = 2553LL;
	uint8_t x399 = UINT8_MAX;
	volatile uint32_t x400 = UINT32_MAX;
	static volatile int64_t t99 = -52LL;

    t99 = (x397&(x398*(x399<=x400)));

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x402 = -5783;
	static uint64_t x404 = UINT64_MAX;

    t100 = (x401&(x402*(x403<=x404)));

    if (t100 != 1028106575872LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x405 = 95U;
	volatile int8_t x406 = INT8_MAX;
	static int16_t x407 = INT16_MAX;
	static volatile int32_t x408 = -21;
	volatile int32_t t101 = 0;

    t101 = (x405&(x406*(x407<=x408)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x409 = INT32_MIN;
	volatile uint32_t x410 = 45U;
	uint32_t x411 = 364U;
	static int32_t x412 = INT32_MIN;
	volatile uint32_t t102 = 9U;

    t102 = (x409&(x410*(x411<=x412)));

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x414 = -248675141;
	int16_t x415 = -1;
	static int32_t x416 = -1;
	volatile int32_t t103 = -29;

    t103 = (x413&(x414*(x415<=x416)));

    if (t103 != 554270849) { NG(); } else { ; }
	
}

void f104(void) {
    	static int8_t x418 = INT8_MAX;
	static int64_t x419 = INT64_MAX;
	int16_t x420 = 47;
	static volatile int32_t t104 = 3761;

    t104 = (x417&(x418*(x419<=x420)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x421 = -5;
	int16_t x422 = -1;
	static volatile int64_t x423 = -1LL;
	uint8_t x424 = UINT8_MAX;
	int32_t t105 = 13;

    t105 = (x421&(x422*(x423<=x424)));

    if (t105 != -5) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x425 = INT64_MIN;
	volatile int64_t x427 = INT64_MIN;
	int64_t x428 = INT64_MIN;
	int64_t t106 = 28LL;

    t106 = (x425&(x426*(x427<=x428)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x429 = -1;
	int64_t x431 = INT64_MIN;
	static int16_t x432 = INT16_MAX;
	volatile int32_t t107 = -95501353;

    t107 = (x429&(x430*(x431<=x432)));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x433 = INT32_MIN;
	uint32_t x435 = 6452233U;
	int16_t x436 = -5508;
	uint64_t t108 = 176LLU;

    t108 = (x433&(x434*(x435<=x436)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x437 = 7138U;
	uint16_t x439 = 31U;
	int32_t x440 = INT32_MAX;

    t109 = (x437&(x438*(x439<=x440)));

    if (t109 != 98) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x441 = 3216;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MIN;
	static volatile int32_t x444 = INT32_MIN;

    t110 = (x441&(x442*(x443<=x444)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x445 = INT32_MIN;
	volatile int8_t x447 = INT8_MAX;
	static volatile int32_t t111 = -1162;

    t111 = (x445&(x446*(x447<=x448)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x449 = INT8_MIN;
	static int32_t x450 = INT32_MIN;
	volatile int16_t x451 = -1;
	uint64_t x452 = 83561LLU;
	int32_t t112 = 51830;

    t112 = (x449&(x450*(x451<=x452)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x454 = INT16_MAX;
	uint32_t x455 = 3984U;
	int8_t x456 = 45;

    t113 = (x453&(x454*(x455<=x456)));

    if (t113 != 0LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x457 = INT64_MIN;
	static volatile uint8_t x458 = UINT8_MAX;
	int32_t x460 = INT32_MAX;
	static int64_t t114 = 1270180278111403306LL;

    t114 = (x457&(x458*(x459<=x460)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x461 = INT8_MAX;
	int64_t x462 = -1LL;
	uint8_t x463 = UINT8_MAX;
	int8_t x464 = INT8_MIN;
	volatile int64_t t115 = -13LL;

    t115 = (x461&(x462*(x463<=x464)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x466 = 2U;
	int16_t x467 = INT16_MAX;
	uint32_t x468 = 1335U;

    t116 = (x465&(x466*(x467<=x468)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x469 = -41499492908LL;
	int64_t x471 = -5011750212LL;
	int64_t x472 = -1LL;
	volatile int64_t t117 = 2107148478740481LL;

    t117 = (x469&(x470*(x471<=x472)));

    if (t117 != 555392LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x473 = -1;
	static int64_t x474 = INT64_MAX;
	int16_t x475 = -1;
	int16_t x476 = INT16_MIN;

    t118 = (x473&(x474*(x475<=x476)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x477 = -3454363139705828217LL;
	int64_t x478 = -384157LL;
	int32_t x479 = -1;
	static volatile uint32_t x480 = 2994U;
	volatile int64_t t119 = 112685129LL;

    t119 = (x477&(x478*(x479<=x480)));

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x482 = 127U;
	int16_t x483 = INT16_MAX;
	uint8_t x484 = 6U;
	volatile int64_t t120 = 5799393271219230LL;

    t120 = (x481&(x482*(x483<=x484)));

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x485 = 0U;
	int32_t x486 = 8307211;
	int64_t x487 = -1680LL;
	static int16_t x488 = 15;
	volatile int32_t t121 = 175846;

    t121 = (x485&(x486*(x487<=x488)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x489 = INT8_MAX;
	int64_t x491 = INT64_MAX;
	uint8_t x492 = UINT8_MAX;
	volatile uint64_t t122 = 27536961943LLU;

    t122 = (x489&(x490*(x491<=x492)));

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x493 = 2714U;
	int16_t x494 = INT16_MIN;
	volatile int64_t x495 = -1LL;
	uint32_t t123 = 21139901U;

    t123 = (x493&(x494*(x495<=x496)));

    if (t123 != 0U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x497 = INT16_MIN;
	int32_t x498 = -1;
	int64_t x499 = -806080459467161329LL;
	volatile int32_t t124 = 29608830;

    t124 = (x497&(x498*(x499<=x500)));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x502 = INT8_MIN;
	int32_t x503 = INT32_MAX;
	static int32_t x504 = 96546;
	int32_t t125 = 1056;

    t125 = (x501&(x502*(x503<=x504)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x505 = -17;
	static volatile int64_t x507 = 277185490936LL;
	int64_t x508 = INT64_MIN;
	int32_t t126 = -711378195;

    t126 = (x505&(x506*(x507<=x508)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x509 = -2LL;
	volatile uint8_t x511 = 1U;
	int8_t x512 = INT8_MIN;
	volatile int64_t t127 = 121LL;

    t127 = (x509&(x510*(x511<=x512)));

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x515 = -1;
	int64_t x516 = -114199484955LL;
	uint32_t t128 = 3118U;

    t128 = (x513&(x514*(x515<=x516)));

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x517 = 14311;
	static int8_t x519 = -1;
	int32_t x520 = INT32_MIN;
	int32_t t129 = -13380565;

    t129 = (x517&(x518*(x519<=x520)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x521 = INT32_MIN;
	static int16_t x522 = INT16_MIN;
	volatile int16_t x523 = INT16_MIN;
	uint16_t x524 = UINT16_MAX;
	static int32_t t130 = INT32_MIN;

    t130 = (x521&(x522*(x523<=x524)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x525 = -1;
	int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MIN;

    t131 = (x525&(x526*(x527<=x528)));

    if (t131 != INT64_MIN) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int8_t x529 = INT8_MIN;
	uint8_t x530 = UINT8_MAX;
	int8_t x531 = 47;
	int32_t t132 = 4;

    t132 = (x529&(x530*(x531<=x532)));

    if (t132 != 128) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x533 = 1U;
	int32_t x534 = INT32_MIN;
	uint16_t x536 = UINT16_MAX;
	static volatile int32_t t133 = 9;

    t133 = (x533&(x534*(x535<=x536)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x537 = INT64_MIN;
	int16_t x538 = INT16_MAX;
	static int32_t x539 = -1;
	int8_t x540 = INT8_MIN;
	static int64_t t134 = 0LL;

    t134 = (x537&(x538*(x539<=x540)));

    if (t134 != 0LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x541 = -1LL;
	int32_t x542 = -1;
	static uint16_t x544 = 10U;
	static int64_t t135 = 4921710LL;

    t135 = (x541&(x542*(x543<=x544)));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x545 = 190498671U;
	int8_t x547 = INT8_MIN;
	int32_t x548 = INT32_MAX;
	uint32_t t136 = 1U;

    t136 = (x545&(x546*(x547<=x548)));

    if (t136 != 1U) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x549 = INT32_MAX;
	int32_t x550 = 1048543309;
	volatile int16_t x551 = INT16_MAX;
	uint32_t x552 = UINT32_MAX;
	int32_t t137 = 14198576;

    t137 = (x549&(x550*(x551<=x552)));

    if (t137 != 1048543309) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x554 = UINT8_MAX;
	volatile int64_t x555 = 2176LL;
	volatile int8_t x556 = -1;
	int32_t t138 = -1704;

    t138 = (x553&(x554*(x555<=x556)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x557 = INT32_MIN;
	int64_t x558 = -1LL;
	int16_t x559 = INT16_MIN;
	int64_t x560 = INT64_MIN;
	volatile int64_t t139 = 1803LL;

    t139 = (x557&(x558*(x559<=x560)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x561 = INT32_MIN;
	static int16_t x562 = INT16_MIN;
	int32_t x563 = -166404;
	volatile int32_t x564 = INT32_MAX;
	int32_t t140 = INT32_MIN;

    t140 = (x561&(x562*(x563<=x564)));

    if (t140 != INT32_MIN) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x566 = 1;
	int32_t x568 = INT32_MIN;
	volatile int64_t t141 = 10936963930LL;

    t141 = (x565&(x566*(x567<=x568)));

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x569 = 1933;
	int8_t x570 = -20;
	int16_t x571 = 5;
	volatile int32_t t142 = 2026;

    t142 = (x569&(x570*(x571<=x572)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x573 = INT64_MIN;
	int8_t x574 = -7;
	volatile int8_t x575 = INT8_MIN;
	int32_t x576 = 4207;
	volatile int64_t t143 = INT64_MIN;

    t143 = (x573&(x574*(x575<=x576)));

    if (t143 != INT64_MIN) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x577 = 1U;
	uint64_t x578 = 18774LLU;
	int8_t x580 = INT8_MIN;
	uint64_t t144 = 33896447931605LLU;

    t144 = (x577&(x578*(x579<=x580)));

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x581 = 25211U;
	int8_t x582 = 15;
	int16_t x583 = INT16_MAX;
	volatile uint32_t x584 = 53228298U;

    t145 = (x581&(x582*(x583<=x584)));

    if (t145 != 11) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x585 = 0;
	int32_t x586 = -1;
	static int64_t x587 = -1LL;
	int64_t x588 = 78233LL;
	static volatile int32_t t146 = 466689;

    t146 = (x585&(x586*(x587<=x588)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x589 = INT64_MIN;
	uint64_t x590 = 11909065LLU;
	uint8_t x591 = UINT8_MAX;

    t147 = (x589&(x590*(x591<=x592)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x594 = 385862;
	static int8_t x595 = 0;
	uint16_t x596 = 0U;

    t148 = (x593&(x594*(x595<=x596)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x597 = INT32_MAX;
	int32_t x598 = INT32_MIN;
	uint32_t x599 = 100U;
	int64_t x600 = -1LL;
	int32_t t149 = -474035208;

    t149 = (x597&(x598*(x599<=x600)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x601 = -1;
	uint32_t x602 = 4611231U;
	volatile uint16_t x603 = 185U;
	static int16_t x604 = INT16_MIN;
	uint32_t t150 = 493U;

    t150 = (x601&(x602*(x603<=x604)));

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x605 = UINT64_MAX;
	int8_t x606 = 5;
	static int8_t x607 = -1;
	int16_t x608 = INT16_MAX;
	static uint64_t t151 = 4427650771978369102LLU;

    t151 = (x605&(x606*(x607<=x608)));

    if (t151 != 5LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x610 = UINT32_MAX;
	int64_t x612 = -1LL;
	uint32_t t152 = 329U;

    t152 = (x609&(x610*(x611<=x612)));

    if (t152 != 255U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x613 = -1;
	int64_t x615 = INT64_MIN;
	int8_t x616 = INT8_MAX;
	volatile int64_t t153 = INT64_MIN;

    t153 = (x613&(x614*(x615<=x616)));

    if (t153 != INT64_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x617 = INT32_MAX;
	static int8_t x618 = -1;
	uint8_t x620 = 42U;
	volatile int32_t t154 = INT32_MAX;

    t154 = (x617&(x618*(x619<=x620)));

    if (t154 != INT32_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x621 = -16;
	int16_t x622 = INT16_MIN;
	int32_t x623 = INT32_MIN;
	uint16_t x624 = 94U;
	static volatile int32_t t155 = 525076;

    t155 = (x621&(x622*(x623<=x624)));

    if (t155 != -32768) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x625 = 7921U;
	int8_t x626 = INT8_MAX;
	uint8_t x627 = UINT8_MAX;
	static int32_t x628 = -525343832;
	int32_t t156 = -92428227;

    t156 = (x625&(x626*(x627<=x628)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x629 = 4LLU;
	int32_t x630 = -186466;
	uint8_t x632 = 0U;
	volatile uint64_t t157 = 4516488641949099LLU;

    t157 = (x629&(x630*(x631<=x632)));

    if (t157 != 4LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int64_t x633 = 1597491LL;
	volatile int8_t x634 = 21;
	static int32_t x635 = -1395671;
	int64_t t158 = -3625LL;

    t158 = (x633&(x634*(x635<=x636)));

    if (t158 != 17LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x637 = -1;
	int16_t x638 = INT16_MIN;
	int32_t x639 = INT32_MAX;
	static int32_t t159 = -2641195;

    t159 = (x637&(x638*(x639<=x640)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint32_t x641 = 100U;
	int8_t x643 = -1;
	static volatile uint32_t t160 = 15096722U;

    t160 = (x641&(x642*(x643<=x644)));

    if (t160 != 0U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x645 = 953017LLU;
	static volatile uint8_t x646 = 1U;
	int64_t x647 = 758315444577952710LL;
	volatile int16_t x648 = INT16_MIN;
	volatile uint64_t t161 = 2LLU;

    t161 = (x645&(x646*(x647<=x648)));

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint16_t x649 = UINT16_MAX;
	static volatile uint32_t x650 = 39913239U;
	volatile int8_t x651 = 3;
	uint64_t x652 = UINT64_MAX;
	volatile uint32_t t162 = 1217U;

    t162 = (x649&(x650*(x651<=x652)));

    if (t162 != 1815U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x653 = 56559434378525LLU;
	uint64_t x654 = 18086090941916LLU;
	int64_t x655 = INT64_MAX;
	volatile uint16_t x656 = UINT16_MAX;
	uint64_t t163 = 5786741800306062250LLU;

    t163 = (x653&(x654*(x655<=x656)));

    if (t163 != 0LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x657 = 88U;
	int32_t x658 = INT32_MAX;
	uint64_t x659 = UINT64_MAX;
	static int16_t x660 = -1;
	int32_t t164 = -748;

    t164 = (x657&(x658*(x659<=x660)));

    if (t164 != 88) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x661 = 1;
	static int16_t x664 = -19;
	int32_t t165 = 1;

    t165 = (x661&(x662*(x663<=x664)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x665 = UINT32_MAX;
	int64_t x667 = INT64_MIN;
	uint64_t x668 = UINT64_MAX;
	static volatile uint32_t t166 = 0U;

    t166 = (x665&(x666*(x667<=x668)));

    if (t166 != 8U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x669 = INT64_MIN;
	volatile int64_t x670 = -95338255376733563LL;
	static uint16_t x671 = 8301U;
	static int16_t x672 = -12631;

    t167 = (x669&(x670*(x671<=x672)));

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x673 = 4991LL;
	int64_t x674 = -1LL;
	volatile uint64_t x676 = UINT64_MAX;
	static int64_t t168 = 228905LL;

    t168 = (x673&(x674*(x675<=x676)));

    if (t168 != 4991LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x678 = INT16_MAX;
	int16_t x679 = -1;
	static int32_t x680 = INT32_MAX;
	int32_t t169 = -7;

    t169 = (x677&(x678*(x679<=x680)));

    if (t169 != 9141) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x681 = 498U;
	int8_t x682 = -1;
	volatile uint32_t x683 = 995U;
	int32_t x684 = -12644;
	int32_t t170 = -1645803;

    t170 = (x681&(x682*(x683<=x684)));

    if (t170 != 498) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x685 = INT16_MIN;
	uint8_t x686 = 18U;
	static int16_t x687 = INT16_MIN;
	int8_t x688 = INT8_MIN;

    t171 = (x685&(x686*(x687<=x688)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x689 = -1LL;
	uint16_t x690 = 5U;
	volatile int8_t x691 = -1;
	int16_t x692 = INT16_MIN;
	volatile int64_t t172 = 3668302308LL;

    t172 = (x689&(x690*(x691<=x692)));

    if (t172 != 0LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x693 = INT8_MAX;
	static int8_t x695 = INT8_MIN;
	static int8_t x696 = INT8_MAX;

    t173 = (x693&(x694*(x695<=x696)));

    if (t173 != 127LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x697 = UINT64_MAX;
	int8_t x698 = -8;
	int8_t x700 = 1;
	volatile uint64_t t174 = 933633412674LLU;

    t174 = (x697&(x698*(x699<=x700)));

    if (t174 != 0LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x701 = UINT8_MAX;
	static int8_t x702 = INT8_MIN;
	static int32_t x704 = -44;
	int32_t t175 = 7;

    t175 = (x701&(x702*(x703<=x704)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x705 = 1890260U;
	int32_t x706 = 16;
	int8_t x707 = INT8_MAX;
	volatile int8_t x708 = INT8_MAX;
	static uint32_t t176 = 399875U;

    t176 = (x705&(x706*(x707<=x708)));

    if (t176 != 16U) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x709 = -1;
	volatile int16_t x710 = INT16_MIN;
	uint64_t x711 = 3207297048736374622LLU;
	int8_t x712 = 3;
	int32_t t177 = -1048;

    t177 = (x709&(x710*(x711<=x712)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x713 = -2103885981015110994LL;
	uint16_t x715 = UINT16_MAX;
	uint32_t x716 = 1558U;
	int64_t t178 = -7LL;

    t178 = (x713&(x714*(x715<=x716)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x718 = 0;
	uint8_t x719 = UINT8_MAX;
	uint32_t x720 = UINT32_MAX;

    t179 = (x717&(x718*(x719<=x720)));

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	volatile int16_t x722 = -1;
	uint8_t x723 = UINT8_MAX;
	static int64_t x724 = 15169753506983073LL;
	volatile uint64_t t180 = UINT64_MAX;

    t180 = (x721&(x722*(x723<=x724)));

    if (t180 != UINT64_MAX) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x725 = INT8_MIN;
	int8_t x726 = INT8_MIN;
	int16_t x727 = INT16_MIN;
	int64_t x728 = -1LL;
	static int32_t t181 = 359714;

    t181 = (x725&(x726*(x727<=x728)));

    if (t181 != -128) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x729 = UINT64_MAX;
	uint64_t x730 = 1043350509401242LLU;
	int16_t x731 = INT16_MIN;

    t182 = (x729&(x730*(x731<=x732)));

    if (t182 != 1043350509401242LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x733 = INT64_MIN;
	uint16_t x734 = 3607U;
	static uint16_t x735 = UINT16_MAX;
	static volatile int8_t x736 = INT8_MAX;
	volatile int64_t t183 = 1624876425648973LL;

    t183 = (x733&(x734*(x735<=x736)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x737 = INT8_MIN;
	volatile uint16_t x738 = 248U;
	uint32_t x739 = UINT32_MAX;
	int8_t x740 = INT8_MIN;
	int32_t t184 = -1;

    t184 = (x737&(x738*(x739<=x740)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x742 = -1;
	int8_t x743 = INT8_MIN;
	uint8_t x744 = 2U;
	int32_t t185 = -3037709;

    t185 = (x741&(x742*(x743<=x744)));

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x745 = INT64_MIN;
	static uint32_t x746 = 2U;
	uint8_t x747 = 1U;
	int64_t x748 = -10341206682161232LL;
	int64_t t186 = 1677LL;

    t186 = (x745&(x746*(x747<=x748)));

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x750 = -1;
	static volatile int16_t x751 = INT16_MIN;
	static uint32_t x752 = UINT32_MAX;
	static int64_t t187 = INT64_MIN;

    t187 = (x749&(x750*(x751<=x752)));

    if (t187 != INT64_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x753 = 2323302U;
	int64_t x754 = 0LL;
	uint8_t x755 = 6U;
	int16_t x756 = -3298;
	volatile int64_t t188 = 3346783987LL;

    t188 = (x753&(x754*(x755<=x756)));

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x757 = INT8_MAX;
	int8_t x758 = -50;
	int8_t x759 = -6;
	volatile int64_t x760 = INT64_MIN;

    t189 = (x757&(x758*(x759<=x760)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x761 = 29U;
	uint16_t x762 = 641U;
	static int8_t x763 = -7;

    t190 = (x761&(x762*(x763<=x764)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint8_t x767 = 102U;
	uint64_t x768 = UINT64_MAX;
	uint64_t t191 = 2LLU;

    t191 = (x765&(x766*(x767<=x768)));

    if (t191 != 142915800642786384LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x770 = INT64_MIN;
	uint64_t x771 = 3587200605LLU;

    t192 = (x769&(x770*(x771<=x772)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x773 = 2U;
	int32_t x774 = INT32_MIN;
	volatile int64_t x775 = INT64_MIN;
	static int32_t x776 = INT32_MIN;

    t193 = (x773&(x774*(x775<=x776)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x777 = INT8_MIN;
	static uint16_t x778 = 7U;
	static int8_t x779 = INT8_MIN;
	volatile int32_t t194 = -13025088;

    t194 = (x777&(x778*(x779<=x780)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x781 = INT16_MIN;
	uint8_t x782 = 4U;
	static int8_t x783 = -1;
	uint8_t x784 = 12U;
	static volatile int32_t t195 = -2111;

    t195 = (x781&(x782*(x783<=x784)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x785 = INT8_MIN;
	int32_t x788 = 362270673;
	static int32_t t196 = INT32_MIN;

    t196 = (x785&(x786*(x787<=x788)));

    if (t196 != INT32_MIN) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x789 = -1;
	uint32_t x791 = 1379087U;
	volatile int64_t t197 = 419LL;

    t197 = (x789&(x790*(x791<=x792)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x793 = 1U;
	uint8_t x794 = 3U;
	uint16_t x795 = UINT16_MAX;
	int16_t x796 = INT16_MIN;
	volatile int32_t t198 = 164465;

    t198 = (x793&(x794*(x795<=x796)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x797 = 34U;
	int32_t x798 = INT32_MAX;
	int16_t x800 = INT16_MAX;
	int32_t t199 = 205698;

    t199 = (x797&(x798*(x799<=x800)));

    if (t199 != 34) { NG(); } else { ; }
	
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

