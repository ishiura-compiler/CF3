
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

int8_t x1 = -1;
static int32_t x7 = -5713093;
static volatile int64_t x9 = INT64_MAX;
int16_t x12 = INT16_MAX;
static int64_t x14 = INT64_MIN;
static int16_t x19 = INT16_MAX;
int64_t x20 = INT64_MAX;
int32_t x31 = 77;
static uint8_t x39 = 0U;
uint32_t x44 = 252884U;
volatile int32_t x56 = INT32_MIN;
static volatile uint32_t x88 = UINT32_MAX;
volatile uint32_t t18 = 162174275U;
int32_t x90 = 0;
volatile int32_t t19 = 4735;
uint64_t x94 = 13690516811LLU;
static int64_t x99 = -52726877938210531LL;
int16_t x113 = -1;
int16_t x115 = -1;
static int32_t x127 = -1;
int32_t x128 = INT32_MIN;
volatile int16_t x130 = INT16_MIN;
int64_t x136 = INT64_MIN;
static int32_t t33 = 203501;
uint64_t x150 = UINT64_MAX;
static uint16_t x156 = 4238U;
uint8_t x160 = UINT8_MAX;
static int32_t x161 = -1;
uint64_t x164 = UINT64_MAX;
int16_t x166 = 2;
volatile uint16_t x167 = 7U;
uint64_t t41 = 3902876833428LLU;
int64_t x181 = INT64_MAX;
uint64_t x185 = 2LLU;
int32_t x188 = 10;
volatile uint32_t x191 = 564562U;
uint32_t x193 = 5U;
int8_t x198 = INT8_MIN;
uint64_t x213 = 223977185893249364LLU;
int16_t x216 = -1;
int32_t t50 = 23415;
volatile int32_t t52 = 480;
int8_t x225 = -1;
static volatile uint64_t t53 = 0LLU;
int16_t x241 = -7467;
int64_t x248 = INT64_MIN;
volatile int16_t x254 = INT16_MIN;
volatile uint16_t x256 = UINT16_MAX;
volatile int64_t t61 = 3643245640LL;
int16_t x273 = INT16_MIN;
int8_t x276 = INT8_MAX;
volatile int32_t x277 = INT32_MIN;
int64_t x281 = INT64_MIN;
int8_t x287 = -1;
volatile int32_t t68 = 25;
int8_t x315 = INT8_MIN;
static volatile int64_t t72 = -3665906912LL;
uint16_t x328 = 94U;
static int32_t x332 = INT32_MIN;
static int32_t t77 = 19895658;
volatile int8_t x337 = INT8_MIN;
int16_t x338 = INT16_MIN;
int16_t x342 = -13447;
int8_t x346 = -1;
static uint64_t x358 = UINT64_MAX;
static int64_t x365 = INT64_MIN;
int32_t t84 = -130218;
int16_t x376 = -1;
volatile uint32_t x378 = 8963U;
uint32_t x379 = 93581851U;
int8_t x386 = -1;
uint8_t x390 = UINT8_MAX;
int64_t x391 = -2LL;
uint8_t x393 = 0U;
uint8_t x400 = UINT8_MAX;
int8_t x405 = -3;
int64_t x406 = INT64_MAX;
int32_t x409 = INT32_MIN;
uint64_t x410 = 222236853274330456LLU;
int32_t x419 = -1;
uint32_t t96 = 1785184353U;
volatile int16_t x422 = -1;
int32_t x424 = INT32_MIN;
volatile uint16_t x431 = 13U;
int32_t x432 = INT32_MAX;
uint16_t x435 = 125U;
int64_t t100 = -466992704318LL;
uint16_t x454 = 147U;
volatile uint32_t t103 = 1U;
static volatile uint32_t t104 = 215U;
int16_t x464 = -1;
static uint16_t x470 = 1826U;
volatile uint16_t x488 = 28830U;
int32_t t109 = 2760;
uint16_t x492 = 15U;
volatile uint32_t x493 = UINT32_MAX;
int64_t t111 = -27LL;
uint64_t x497 = 87502LLU;
int16_t x499 = INT16_MIN;
int64_t x500 = INT64_MIN;
uint8_t x509 = 1U;
int8_t x510 = INT8_MIN;
static volatile int64_t x511 = 159781919237749692LL;
int32_t t114 = -6281;
static volatile int32_t x521 = INT32_MAX;
int32_t t115 = -1;
volatile int8_t x525 = INT8_MIN;
int32_t t117 = -1879;
static volatile int16_t x535 = -1;
int32_t t120 = 12;
volatile int8_t x551 = INT8_MIN;
volatile int64_t t121 = -20LL;
uint32_t x553 = 59678154U;
uint16_t x556 = 31517U;
static int64_t x561 = INT64_MIN;
int64_t x573 = 1980156245480484LL;
uint32_t x575 = 455U;
volatile uint32_t t127 = 919U;
uint32_t x577 = 635537U;
static volatile int32_t t128 = 61156019;
static volatile int8_t x584 = INT8_MIN;
static uint8_t x590 = UINT8_MAX;
uint32_t x592 = 1477105596U;
volatile uint64_t t130 = 178103572216780LLU;
int8_t x594 = INT8_MIN;
int32_t t132 = 63;
static volatile uint8_t x603 = 44U;
uint64_t x606 = 32807454023048475LLU;
int8_t x609 = -1;
static uint8_t x611 = 0U;
volatile int64_t t135 = -30LL;
uint32_t x616 = 666428362U;
uint16_t x622 = 15895U;
static uint64_t x625 = 8369444993504777LLU;
int8_t x626 = -1;
int8_t x628 = INT8_MAX;
static uint64_t t139 = 57259163989LLU;
int16_t x630 = -1;
static volatile int32_t t140 = -225389;
int16_t x636 = 1;
volatile int32_t t141 = 113;
int32_t x643 = INT32_MAX;
volatile uint32_t x644 = UINT32_MAX;
static uint32_t t143 = 19362U;
volatile int8_t x649 = -1;
int32_t t145 = -8292;
static int16_t x660 = -6;
int64_t t148 = 1887LL;
int64_t x665 = -1591887LL;
static uint64_t x666 = 5505930195077220635LLU;
int32_t x669 = 1;
static int16_t x671 = -1;
int32_t x677 = -1;
int32_t x679 = -1;
uint32_t t151 = 15972263U;
static int8_t x690 = 1;
static uint16_t x691 = 19054U;
volatile int32_t x708 = 2093248;
uint64_t x710 = 1624479LLU;
static volatile int64_t x711 = -1LL;
uint64_t x712 = 642192789081151LLU;
volatile uint64_t t157 = 188476624LLU;
volatile int8_t x745 = -1;
int64_t t165 = -139173528LL;
volatile uint64_t x751 = 555285LLU;
uint16_t x757 = UINT16_MAX;
static int8_t x759 = -1;
static int64_t x767 = -1LL;
int64_t x769 = 3LL;
int64_t x778 = INT64_MIN;
static uint64_t x779 = 3845366608872LLU;
int8_t x782 = 0;
int64_t x790 = INT64_MAX;
int64_t x800 = INT64_MIN;
uint64_t t178 = 596007LLU;
volatile int64_t x805 = -50051535LL;
int32_t x809 = INT32_MIN;
static int16_t x811 = INT16_MAX;
int16_t x836 = INT16_MAX;
volatile int8_t x840 = 44;
int64_t x848 = -1LL;
int32_t x850 = INT32_MAX;
uint8_t x858 = UINT8_MAX;
volatile uint8_t x859 = 5U;
volatile uint32_t x860 = 2U;
volatile int32_t t193 = 2454861;
static uint64_t x866 = 5209507834210424965LLU;
int8_t x868 = -1;
int8_t x871 = -18;
volatile int32_t x875 = 1;
int16_t x876 = -1;
uint32_t x878 = 117267U;
uint32_t x881 = 816U;
uint32_t x885 = UINT32_MAX;
static uint64_t t199 = 349280511885177LLU;


void f0(void) {
    	uint32_t x2 = UINT32_MAX;
	int16_t x3 = INT16_MIN;
	static uint16_t x4 = 1U;
	int32_t t0 = -17520;

    t0 = (((x1<=x2)-x3)%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 1U;
	volatile int64_t x6 = -101805983767LL;
	static int64_t x8 = INT64_MAX;
	static volatile int64_t t1 = 24736790004110686LL;

    t1 = (((x5<=x6)-x7)%x8);

    if (t1 != 5713093LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x10 = -3;
	int32_t x11 = -208;
	int32_t t2 = 2481;

    t2 = (((x9<=x10)-x11)%x12);

    if (t2 != 208) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x13 = 41U;
	volatile int32_t x15 = 1043669010;
	int16_t x16 = -1;
	volatile int32_t t3 = 1;

    t3 = (((x13<=x14)-x15)%x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x17 = 57258LLU;
	int16_t x18 = INT16_MAX;
	volatile int64_t t4 = 55LL;

    t4 = (((x17<=x18)-x19)%x20);

    if (t4 != -32767LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x21 = INT32_MIN;
	uint8_t x22 = 10U;
	static volatile int16_t x23 = INT16_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -241;

    t5 = (((x21<=x22)-x23)%x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -2;

    t6 = (((x25<=x26)-x27)%x28);

    if (t6 != 129) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	static volatile int64_t x32 = INT64_MIN;
	volatile int64_t t7 = -64303LL;

    t7 = (((x29<=x30)-x31)%x32);

    if (t7 != -77LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	uint32_t x34 = 1718893311U;
	uint16_t x35 = UINT16_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = 793619;

    t8 = (((x33<=x34)-x35)%x36);

    if (t8 != -254) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int16_t x37 = -1;
	static uint8_t x38 = UINT8_MAX;
	int64_t x40 = INT64_MIN;
	volatile int64_t t9 = -2278095287980114602LL;

    t9 = (((x37<=x38)-x39)%x40);

    if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x41 = INT32_MIN;
	int64_t x42 = INT64_MIN;
	uint32_t x43 = 4572378U;
	volatile uint32_t t10 = 691701U;

    t10 = (((x41<=x42)-x43)%x44);

    if (t10 != 217858U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = UINT16_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	int8_t x47 = 0;
	int8_t x48 = 15;
	int32_t t11 = 7;

    t11 = (((x45<=x46)-x47)%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int32_t x50 = -1;
	int8_t x51 = 0;
	int64_t x52 = INT64_MIN;
	static int64_t t12 = 3672799182979061410LL;

    t12 = (((x49<=x50)-x51)%x52);

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x53 = UINT16_MAX;
	int32_t x54 = INT32_MIN;
	int64_t x55 = INT64_MAX;
	static int64_t t13 = -263157859454LL;

    t13 = (((x53<=x54)-x55)%x56);

    if (t13 != -2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x65 = 1573442LLU;
	volatile int64_t x66 = INT64_MIN;
	int8_t x67 = -1;
	uint16_t x68 = 11527U;
	int32_t t14 = 32332;

    t14 = (((x65<=x66)-x67)%x68);

    if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -1LL;
	int16_t x70 = INT16_MAX;
	int16_t x71 = INT16_MIN;
	int32_t x72 = -29;
	static int32_t t15 = -97120;

    t15 = (((x69<=x70)-x71)%x72);

    if (t15 != 28) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x77 = INT8_MIN;
	static volatile int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MAX;
	volatile int16_t x80 = INT16_MIN;
	volatile int32_t t16 = -3;

    t16 = (((x77<=x78)-x79)%x80);

    if (t16 != -32766) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x81 = 20637779U;
	uint64_t x82 = 31210397886LLU;
	int32_t x83 = -1;
	int16_t x84 = INT16_MAX;
	volatile int32_t t17 = 12453671;

    t17 = (((x81<=x82)-x83)%x84);

    if (t17 != 2) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x85 = INT16_MAX;
	static volatile uint16_t x86 = 29U;
	static int8_t x87 = -3;

    t18 = (((x85<=x86)-x87)%x88);

    if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MIN;
	int32_t x91 = -1;
	static int16_t x92 = INT16_MAX;

    t19 = (((x89<=x90)-x91)%x92);

    if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint8_t x93 = 0U;
	static volatile int64_t x95 = -1LL;
	int64_t x96 = 376970271842307LL;
	volatile int64_t t20 = -150774LL;

    t20 = (((x93<=x94)-x95)%x96);

    if (t20 != 2LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x97 = 1890;
	int32_t x98 = INT32_MAX;
	volatile int16_t x100 = 8883;
	volatile int64_t t21 = -12374268LL;

    t21 = (((x97<=x98)-x99)%x100);

    if (t21 != 4928LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x101 = 486453794992492LL;
	static int64_t x102 = -1LL;
	int16_t x103 = -17;
	static uint64_t x104 = 1864020149336488LLU;
	volatile uint64_t t22 = 111738432708810LLU;

    t22 = (((x101<=x102)-x103)%x104);

    if (t22 != 17LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x105 = INT16_MIN;
	volatile int8_t x106 = -1;
	uint32_t x107 = 1613595U;
	int8_t x108 = INT8_MIN;
	uint32_t t23 = 3555176U;

    t23 = (((x105<=x106)-x107)%x108);

    if (t23 != 4293353702U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x109 = 1938481761320094LLU;
	uint32_t x110 = 3U;
	static int64_t x111 = -36804337221450LL;
	int32_t x112 = INT32_MIN;
	int64_t t24 = 59927048489761526LL;

    t24 = (((x109<=x110)-x111)%x112);

    if (t24 != 762462026LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x114 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t25 = -4062;

    t25 = (((x113<=x114)-x115)%x116);

    if (t25 != 2) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x117 = 2274315459522LLU;
	volatile int16_t x118 = INT16_MIN;
	uint64_t x119 = UINT64_MAX;
	static uint32_t x120 = 600859740U;
	volatile uint64_t t26 = 2393233374251634654LLU;

    t26 = (((x117<=x118)-x119)%x120);

    if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int32_t x121 = 291346;
	int32_t x122 = -1;
	int64_t x123 = -2239LL;
	uint16_t x124 = UINT16_MAX;
	int64_t t27 = 9455954LL;

    t27 = (((x121<=x122)-x123)%x124);

    if (t27 != 2239LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x125 = 9451;
	static uint16_t x126 = 5643U;
	int32_t t28 = -338185;

    t28 = (((x125<=x126)-x127)%x128);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x129 = -1;
	uint32_t x131 = 15706229U;
	int64_t x132 = INT64_MIN;
	volatile int64_t t29 = 49016700930LL;

    t29 = (((x129<=x130)-x131)%x132);

    if (t29 != 4279261067LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MIN;
	volatile uint8_t x135 = UINT8_MAX;
	int64_t t30 = 466305866428574LL;

    t30 = (((x133<=x134)-x135)%x136);

    if (t30 != -255LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x137 = UINT64_MAX;
	int8_t x138 = INT8_MIN;
	static uint8_t x139 = 117U;
	int64_t x140 = 52510428477LL;
	int64_t t31 = -3514672228073740LL;

    t31 = (((x137<=x138)-x139)%x140);

    if (t31 != -117LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x141 = 84263150U;
	static uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t32 = 1230603;

    t32 = (((x141<=x142)-x143)%x144);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x145 = UINT32_MAX;
	int64_t x146 = -1LL;
	int8_t x147 = -30;
	uint16_t x148 = 906U;

    t33 = (((x145<=x146)-x147)%x148);

    if (t33 != 30) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x149 = -1;
	static int16_t x151 = 0;
	uint32_t x152 = 2162U;
	volatile uint32_t t34 = 956512633U;

    t34 = (((x149<=x150)-x151)%x152);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x153 = -1;
	int8_t x154 = INT8_MIN;
	volatile int64_t x155 = INT64_MAX;
	volatile int64_t t35 = 223168LL;

    t35 = (((x153<=x154)-x155)%x156);

    if (t35 != -761LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint64_t x157 = 230589665219077LLU;
	volatile int8_t x158 = -1;
	int8_t x159 = 1;
	int32_t t36 = 1;

    t36 = (((x157<=x158)-x159)%x160);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x162 = INT16_MIN;
	static int8_t x163 = INT8_MIN;
	volatile uint64_t t37 = 69808LLU;

    t37 = (((x161<=x162)-x163)%x164);

    if (t37 != 128LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MAX;
	static int16_t x168 = INT16_MIN;
	int32_t t38 = -3315953;

    t38 = (((x165<=x166)-x167)%x168);

    if (t38 != -7) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x169 = INT16_MAX;
	int16_t x170 = INT16_MIN;
	uint64_t x171 = UINT64_MAX;
	static uint64_t x172 = 7776849867LLU;
	static uint64_t t39 = 5018695424548LLU;

    t39 = (((x169<=x170)-x171)%x172);

    if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int32_t x173 = INT32_MAX;
	int32_t x174 = 26862030;
	volatile int16_t x175 = INT16_MIN;
	static uint8_t x176 = 2U;
	volatile int32_t t40 = 169503;

    t40 = (((x173<=x174)-x175)%x176);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x177 = 39222639087775LLU;
	static int64_t x178 = INT64_MIN;
	static uint64_t x179 = 22853956343LLU;
	int64_t x180 = INT64_MAX;

    t41 = (((x177<=x178)-x179)%x180);

    if (t41 != 9223372014000819467LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x182 = INT32_MIN;
	int8_t x183 = INT8_MAX;
	uint32_t x184 = 1625U;
	volatile uint32_t t42 = 1972573406U;

    t42 = (((x181<=x182)-x183)%x184);

    if (t42 != 1169U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int64_t x186 = -16262LL;
	int16_t x187 = 1;
	volatile int32_t t43 = 4561;

    t43 = (((x185<=x186)-x187)%x188);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x189 = UINT8_MAX;
	uint8_t x190 = 39U;
	int16_t x192 = INT16_MAX;
	static uint32_t t44 = 3325802U;

    t44 = (((x189<=x190)-x191)%x192);

    if (t44 != 25248U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x194 = 0;
	static volatile int64_t x195 = -1LL;
	int8_t x196 = INT8_MAX;
	volatile int64_t t45 = -210666LL;

    t45 = (((x193<=x194)-x195)%x196);

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x197 = 1274U;
	static volatile uint16_t x199 = 153U;
	volatile int8_t x200 = -1;
	static volatile int32_t t46 = 62501595;

    t46 = (((x197<=x198)-x199)%x200);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x201 = INT8_MIN;
	uint8_t x202 = 3U;
	uint16_t x203 = 31U;
	static int64_t x204 = INT64_MAX;
	volatile int64_t t47 = 330645822LL;

    t47 = (((x201<=x202)-x203)%x204);

    if (t47 != -30LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x205 = UINT8_MAX;
	int8_t x206 = -1;
	uint16_t x207 = 49U;
	int16_t x208 = INT16_MIN;
	volatile int32_t t48 = -616273;

    t48 = (((x205<=x206)-x207)%x208);

    if (t48 != -49) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x209 = -553;
	static int16_t x210 = 38;
	static volatile int16_t x211 = INT16_MIN;
	uint32_t x212 = 32777U;
	uint32_t t49 = 140U;

    t49 = (((x209<=x210)-x211)%x212);

    if (t49 != 32769U) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x214 = INT8_MIN;
	static int8_t x215 = -1;

    t50 = (((x213<=x214)-x215)%x216);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x217 = -1LL;
	int32_t x218 = -6;
	static volatile uint32_t x219 = 108191835U;
	volatile uint32_t x220 = 55610665U;
	static volatile uint32_t t51 = 13287937U;

    t51 = (((x217<=x218)-x219)%x220);

    if (t51 != 15975586U) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x221 = 1238LLU;
	int64_t x222 = INT64_MIN;
	int8_t x223 = 0;
	static volatile int16_t x224 = INT16_MAX;

    t52 = (((x221<=x222)-x223)%x224);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x226 = 131;
	int64_t x227 = INT64_MAX;
	volatile uint64_t x228 = 4408059750685445182LLU;

    t53 = (((x225<=x226)-x227)%x228);

    if (t53 != 407252535483885446LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x229 = UINT32_MAX;
	int8_t x230 = 0;
	static uint32_t x231 = 188874U;
	int32_t x232 = INT32_MIN;
	static uint32_t t54 = 1827535338U;

    t54 = (((x229<=x230)-x231)%x232);

    if (t54 != 2147294774U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MIN;
	volatile int16_t x235 = 13277;
	static int32_t x236 = INT32_MAX;
	int32_t t55 = -7067;

    t55 = (((x233<=x234)-x235)%x236);

    if (t55 != -13277) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x242 = -43;
	int16_t x243 = INT16_MAX;
	uint32_t x244 = UINT32_MAX;
	uint32_t t56 = 311447U;

    t56 = (((x241<=x242)-x243)%x244);

    if (t56 != 4294934530U) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x245 = 1;
	int32_t x246 = -440525;
	int16_t x247 = INT16_MIN;
	static volatile int64_t t57 = 238792LL;

    t57 = (((x245<=x246)-x247)%x248);

    if (t57 != 32768LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x249 = INT64_MIN;
	static int32_t x250 = 3;
	volatile int64_t x251 = -1LL;
	volatile int32_t x252 = -1;
	int64_t t58 = -2783686445457LL;

    t58 = (((x249<=x250)-x251)%x252);

    if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x253 = UINT16_MAX;
	static int16_t x255 = -1;
	volatile int32_t t59 = -75096230;

    t59 = (((x253<=x254)-x255)%x256);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x257 = INT32_MIN;
	int32_t x258 = INT32_MIN;
	int16_t x259 = -1;
	static int64_t x260 = -1LL;
	volatile int64_t t60 = 550537909015LL;

    t60 = (((x257<=x258)-x259)%x260);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x265 = INT32_MIN;
	int64_t x266 = 81021767088884LL;
	int64_t x267 = INT64_MAX;
	int16_t x268 = -1;

    t61 = (((x265<=x266)-x267)%x268);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x274 = 119413155LLU;
	int16_t x275 = -1;
	volatile int32_t t62 = 128;

    t62 = (((x273<=x274)-x275)%x276);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x278 = -1;
	static uint32_t x279 = 0U;
	int64_t x280 = INT64_MAX;
	volatile int64_t t63 = 68818293LL;

    t63 = (((x277<=x278)-x279)%x280);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x282 = -1;
	uint16_t x283 = 6U;
	uint32_t x284 = 87536910U;
	uint32_t t64 = 3786944U;

    t64 = (((x281<=x282)-x283)%x284);

    if (t64 != 5658701U) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x285 = INT64_MIN;
	static int16_t x286 = INT16_MAX;
	uint16_t x288 = 43U;
	int32_t t65 = -7;

    t65 = (((x285<=x286)-x287)%x288);

    if (t65 != 2) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x289 = 2LLU;
	int16_t x290 = -1;
	uint32_t x291 = 560U;
	int16_t x292 = -1;
	volatile uint32_t t66 = 25873715U;

    t66 = (((x289<=x290)-x291)%x292);

    if (t66 != 4294966737U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x293 = 404231643U;
	int64_t x294 = 6LL;
	int16_t x295 = INT16_MAX;
	int64_t x296 = INT64_MIN;
	volatile int64_t t67 = 4200478445960LL;

    t67 = (((x293<=x294)-x295)%x296);

    if (t67 != -32767LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x297 = UINT16_MAX;
	int32_t x298 = 1490;
	int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MAX;

    t68 = (((x297<=x298)-x299)%x300);

    if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x301 = 7442776038115717LL;
	uint16_t x302 = 99U;
	volatile uint64_t x303 = 190673LLU;
	volatile uint64_t x304 = 33394783LLU;
	uint64_t t69 = 738618719805860537LLU;

    t69 = (((x301<=x302)-x303)%x304);

    if (t69 != 23737015LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = -1;
	uint16_t x306 = 26348U;
	volatile int16_t x307 = INT16_MIN;
	uint32_t x308 = 117348U;
	volatile uint32_t t70 = 3948015U;

    t70 = (((x305<=x306)-x307)%x308);

    if (t70 != 32769U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x309 = 33651247;
	int8_t x310 = INT8_MIN;
	uint16_t x311 = 1U;
	static volatile int16_t x312 = INT16_MIN;
	volatile int32_t t71 = 1;

    t71 = (((x309<=x310)-x311)%x312);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x313 = 2173U;
	int64_t x314 = 3503847815LL;
	volatile int64_t x316 = -1136LL;

    t72 = (((x313<=x314)-x315)%x316);

    if (t72 != 129LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x317 = INT64_MIN;
	static volatile uint8_t x318 = UINT8_MAX;
	uint64_t x319 = 425LLU;
	volatile uint64_t x320 = UINT64_MAX;
	uint64_t t73 = 215LLU;

    t73 = (((x317<=x318)-x319)%x320);

    if (t73 != 18446744073709551192LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MIN;
	static volatile int16_t x322 = -1104;
	int16_t x323 = 11;
	int64_t x324 = -2877840LL;
	volatile int64_t t74 = -1445121364LL;

    t74 = (((x321<=x322)-x323)%x324);

    if (t74 != -10LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x325 = -65;
	int32_t x326 = 7;
	int8_t x327 = -1;
	volatile int32_t t75 = 15575;

    t75 = (((x325<=x326)-x327)%x328);

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = 83776;
	int64_t x330 = 7272554LL;
	volatile int64_t x331 = INT64_MAX;
	static int64_t t76 = 528271989304745LL;

    t76 = (((x329<=x330)-x331)%x332);

    if (t76 != -2147483646LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x333 = 41U;
	int64_t x334 = 634886700LL;
	static int8_t x335 = INT8_MIN;
	int16_t x336 = INT16_MIN;

    t77 = (((x333<=x334)-x335)%x336);

    if (t77 != 129) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x339 = UINT16_MAX;
	int64_t x340 = 25LL;
	static volatile int64_t t78 = -13821153578LL;

    t78 = (((x337<=x338)-x339)%x340);

    if (t78 != -10LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x341 = 0;
	int32_t x343 = -1;
	int64_t x344 = -1LL;
	int64_t t79 = -473411360539LL;

    t79 = (((x341<=x342)-x343)%x344);

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x345 = 7;
	int32_t x347 = -45157095;
	static uint32_t x348 = 931390U;
	uint32_t t80 = 0U;

    t80 = (((x345<=x346)-x347)%x348);

    if (t80 != 450375U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x349 = UINT64_MAX;
	int32_t x350 = 689536;
	int8_t x351 = -14;
	int32_t x352 = -1;
	volatile int32_t t81 = -16018;

    t81 = (((x349<=x350)-x351)%x352);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MAX;
	uint16_t x355 = 2U;
	static int64_t x356 = -1LL;
	volatile int64_t t82 = 268252509467424LL;

    t82 = (((x353<=x354)-x355)%x356);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x357 = -1;
	int64_t x359 = INT64_MAX;
	uint8_t x360 = UINT8_MAX;
	int64_t t83 = 1891LL;

    t83 = (((x357<=x358)-x359)%x360);

    if (t83 != -126LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x366 = -414;
	int8_t x367 = -3;
	static int16_t x368 = INT16_MIN;

    t84 = (((x365<=x366)-x367)%x368);

    if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = INT32_MIN;
	uint16_t x370 = 52U;
	volatile int64_t x371 = -1LL;
	static int32_t x372 = -1;
	int64_t t85 = -174675258795LL;

    t85 = (((x369<=x370)-x371)%x372);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x373 = 63;
	int32_t x374 = 2591155;
	uint8_t x375 = UINT8_MAX;
	static volatile int32_t t86 = -27326846;

    t86 = (((x373<=x374)-x375)%x376);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x377 = 19241034395799LLU;
	static int64_t x380 = -46793350LL;
	int64_t t87 = 12135296645534381LL;

    t87 = (((x377<=x378)-x379)%x380);

    if (t87 != 36777295LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = INT16_MAX;
	int16_t x387 = INT16_MIN;
	uint32_t x388 = 57164U;
	volatile uint32_t t88 = 23044080U;

    t88 = (((x385<=x386)-x387)%x388);

    if (t88 != 32768U) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x389 = INT8_MAX;
	uint8_t x392 = 2U;
	int64_t t89 = 272229636076LL;

    t89 = (((x389<=x390)-x391)%x392);

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int8_t x394 = INT8_MIN;
	static volatile int16_t x395 = INT16_MIN;
	static volatile uint32_t x396 = 4310094U;
	static uint32_t t90 = 822U;

    t90 = (((x393<=x394)-x395)%x396);

    if (t90 != 32768U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x397 = INT8_MIN;
	int32_t x398 = 4188569;
	static uint8_t x399 = UINT8_MAX;
	int32_t t91 = -5302125;

    t91 = (((x397<=x398)-x399)%x400);

    if (t91 != -254) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x401 = 1433061U;
	uint16_t x402 = UINT16_MAX;
	static uint64_t x403 = 403102327650556449LLU;
	uint32_t x404 = 31711531U;
	uint64_t t92 = 462375971259697LLU;

    t92 = (((x401<=x402)-x403)%x404);

    if (t92 != 19930974LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x407 = 7;
	static uint16_t x408 = 1654U;
	volatile int32_t t93 = 26352;

    t93 = (((x405<=x406)-x407)%x408);

    if (t93 != -6) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x411 = 1U;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t94 = 764761417948LLU;

    t94 = (((x409<=x410)-x411)%x412);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x413 = 26U;
	volatile int32_t x414 = -10159;
	static int64_t x415 = -1LL;
	volatile uint32_t x416 = UINT32_MAX;
	volatile int64_t t95 = -6541355749885602LL;

    t95 = (((x413<=x414)-x415)%x416);

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x417 = INT32_MIN;
	int32_t x418 = -1;
	uint32_t x420 = 7133724U;

    t96 = (((x417<=x418)-x419)%x420);

    if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x421 = -1;
	static uint8_t x423 = UINT8_MAX;
	static int32_t t97 = 123;

    t97 = (((x421<=x422)-x423)%x424);

    if (t97 != -254) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x425 = 12;
	uint16_t x426 = 0U;
	uint32_t x427 = UINT32_MAX;
	uint16_t x428 = UINT16_MAX;
	static uint32_t t98 = 26U;

    t98 = (((x425<=x426)-x427)%x428);

    if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x429 = INT64_MIN;
	int64_t x430 = INT64_MAX;
	int32_t t99 = 210581312;

    t99 = (((x429<=x430)-x431)%x432);

    if (t99 != -12) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x433 = INT32_MIN;
	int16_t x434 = INT16_MAX;
	int64_t x436 = -122745744LL;

    t100 = (((x433<=x434)-x435)%x436);

    if (t100 != -124LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x445 = 1U;
	int16_t x446 = INT16_MAX;
	int64_t x447 = 531724869863512LL;
	static int64_t x448 = -933404445459333LL;
	volatile int64_t t101 = 2LL;

    t101 = (((x445<=x446)-x447)%x448);

    if (t101 != -531724869863511LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int32_t x449 = -119698199;
	static int64_t x450 = -1LL;
	int16_t x451 = INT16_MAX;
	int32_t x452 = -6846;
	static int32_t t102 = 19;

    t102 = (((x449<=x450)-x451)%x452);

    if (t102 != -5382) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x453 = 537132LLU;
	volatile uint32_t x455 = 37881909U;
	static int16_t x456 = INT16_MAX;

    t103 = (((x453<=x454)-x455)%x456);

    if (t103 != 29514U) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x457 = INT64_MIN;
	static uint64_t x458 = 7564LLU;
	static uint32_t x459 = 28671U;
	volatile int16_t x460 = -482;

    t104 = (((x457<=x458)-x459)%x460);

    if (t104 != 4294938625U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x461 = 68U;
	int64_t x462 = 26876LL;
	int16_t x463 = INT16_MIN;
	volatile int32_t t105 = -657059880;

    t105 = (((x461<=x462)-x463)%x464);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint64_t x469 = 2339604540770866476LLU;
	int32_t x471 = 157;
	static int32_t x472 = INT32_MAX;
	volatile int32_t t106 = 13;

    t106 = (((x469<=x470)-x471)%x472);

    if (t106 != -157) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x473 = 90U;
	static int32_t x474 = 32187;
	int16_t x475 = -1;
	int64_t x476 = -208014162707LL;
	int64_t t107 = -2169244640109LL;

    t107 = (((x473<=x474)-x475)%x476);

    if (t107 != 2LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x481 = INT64_MAX;
	int8_t x482 = INT8_MIN;
	static int8_t x483 = INT8_MAX;
	int64_t x484 = 234048501533119391LL;
	int64_t t108 = -15103LL;

    t108 = (((x481<=x482)-x483)%x484);

    if (t108 != -127LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x485 = INT32_MIN;
	int32_t x486 = INT32_MIN;
	uint8_t x487 = 2U;

    t109 = (((x485<=x486)-x487)%x488);

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x489 = INT32_MIN;
	static int8_t x490 = -7;
	int64_t x491 = 8589731LL;
	int64_t t110 = -76LL;

    t110 = (((x489<=x490)-x491)%x492);

    if (t110 != -10LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x494 = -1;
	volatile int64_t x495 = 499365217036LL;
	static volatile int16_t x496 = INT16_MAX;

    t111 = (((x493<=x494)-x495)%x496);

    if (t111 != -3541LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x498 = INT16_MIN;
	int64_t t112 = 529182280645LL;

    t112 = (((x497<=x498)-x499)%x500);

    if (t112 != 32769LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x512 = 1771923;
	int64_t t113 = 31LL;

    t113 = (((x509<=x510)-x511)%x512);

    if (t113 != -510594LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x513 = 469684448U;
	volatile int16_t x514 = -11151;
	int8_t x515 = INT8_MIN;
	int32_t x516 = -15610;

    t114 = (((x513<=x514)-x515)%x516);

    if (t114 != 129) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x522 = INT64_MIN;
	volatile int16_t x523 = INT16_MIN;
	int8_t x524 = -1;

    t115 = (((x521<=x522)-x523)%x524);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x526 = INT8_MAX;
	int8_t x527 = INT8_MAX;
	volatile int16_t x528 = INT16_MAX;
	volatile int32_t t116 = -388002642;

    t116 = (((x525<=x526)-x527)%x528);

    if (t116 != -126) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x529 = UINT64_MAX;
	static uint32_t x530 = 1070459301U;
	int16_t x531 = INT16_MAX;
	volatile uint8_t x532 = 9U;

    t117 = (((x529<=x530)-x531)%x532);

    if (t117 != -7) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x533 = INT64_MAX;
	int32_t x534 = INT32_MAX;
	int32_t x536 = INT32_MIN;
	volatile int32_t t118 = -1978;

    t118 = (((x533<=x534)-x535)%x536);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x537 = INT32_MIN;
	static uint16_t x538 = 1U;
	int32_t x539 = 111;
	uint16_t x540 = UINT16_MAX;
	int32_t t119 = 105247;

    t119 = (((x537<=x538)-x539)%x540);

    if (t119 != -110) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x541 = 1U;
	uint32_t x542 = UINT32_MAX;
	volatile int8_t x543 = INT8_MAX;
	int32_t x544 = INT32_MAX;

    t120 = (((x541<=x542)-x543)%x544);

    if (t120 != -126) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x549 = INT64_MIN;
	uint16_t x550 = 1U;
	volatile int64_t x552 = -4643LL;

    t121 = (((x549<=x550)-x551)%x552);

    if (t121 != 129LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x554 = INT64_MAX;
	int16_t x555 = 1435;
	static volatile int32_t t122 = -116065;

    t122 = (((x553<=x554)-x555)%x556);

    if (t122 != -1434) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x557 = 16U;
	uint8_t x558 = UINT8_MAX;
	static int8_t x559 = -10;
	static uint32_t x560 = 1336U;
	uint32_t t123 = 930U;

    t123 = (((x557<=x558)-x559)%x560);

    if (t123 != 11U) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x562 = INT8_MIN;
	volatile uint8_t x563 = 1U;
	static volatile uint16_t x564 = UINT16_MAX;
	volatile int32_t t124 = 1;

    t124 = (((x561<=x562)-x563)%x564);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x565 = UINT16_MAX;
	int16_t x566 = INT16_MIN;
	int16_t x567 = 39;
	int16_t x568 = -1;
	volatile int32_t t125 = -629543048;

    t125 = (((x565<=x566)-x567)%x568);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x569 = -1;
	uint32_t x570 = UINT32_MAX;
	int8_t x571 = 10;
	static int16_t x572 = 10;
	volatile int32_t t126 = 18779;

    t126 = (((x569<=x570)-x571)%x572);

    if (t126 != -9) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x574 = 4303273338525319LL;
	int8_t x576 = INT8_MIN;

    t127 = (((x573<=x574)-x575)%x576);

    if (t127 != 4294966842U) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x578 = INT16_MIN;
	int8_t x579 = INT8_MIN;
	static int32_t x580 = -43;

    t128 = (((x577<=x578)-x579)%x580);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x581 = -1452;
	static int8_t x582 = INT8_MAX;
	int64_t x583 = -429289654133998177LL;
	int64_t t129 = -1739432LL;

    t129 = (((x581<=x582)-x583)%x584);

    if (t129 != 98LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x589 = 1;
	uint64_t x591 = 1351343346LLU;

    t130 = (((x589<=x590)-x591)%x592);

    if (t130 != 714405215LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x593 = UINT64_MAX;
	int8_t x595 = -1;
	int8_t x596 = INT8_MIN;
	volatile int32_t t131 = -1;

    t131 = (((x593<=x594)-x595)%x596);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x597 = UINT64_MAX;
	static int32_t x598 = INT32_MIN;
	static int16_t x599 = -7417;
	int32_t x600 = 1;

    t132 = (((x597<=x598)-x599)%x600);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x601 = -1;
	volatile uint16_t x602 = UINT16_MAX;
	int64_t x604 = INT64_MIN;
	int64_t t133 = 158763LL;

    t133 = (((x601<=x602)-x603)%x604);

    if (t133 != -43LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint8_t x605 = 2U;
	int32_t x607 = -119719134;
	int64_t x608 = INT64_MIN;
	volatile int64_t t134 = 1012LL;

    t134 = (((x605<=x606)-x607)%x608);

    if (t134 != 119719135LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x610 = -2;
	int64_t x612 = INT64_MIN;

    t135 = (((x609<=x610)-x611)%x612);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x613 = 49U;
	int64_t x614 = -20LL;
	static int16_t x615 = INT16_MIN;
	uint32_t t136 = 40U;

    t136 = (((x613<=x614)-x615)%x616);

    if (t136 != 32768U) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x617 = 1007725081;
	static volatile int64_t x618 = INT64_MIN;
	volatile uint8_t x619 = 74U;
	int32_t x620 = -1;
	static volatile int32_t t137 = -501;

    t137 = (((x617<=x618)-x619)%x620);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x621 = 0;
	int8_t x623 = INT8_MIN;
	int64_t x624 = INT64_MIN;
	int64_t t138 = 93LL;

    t138 = (((x621<=x622)-x623)%x624);

    if (t138 != 129LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x627 = UINT64_MAX;

    t139 = (((x625<=x626)-x627)%x628);

    if (t139 != 2LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int16_t x629 = INT16_MIN;
	int8_t x631 = INT8_MIN;
	volatile int32_t x632 = INT32_MIN;

    t140 = (((x629<=x630)-x631)%x632);

    if (t140 != 129) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x633 = 155;
	volatile int16_t x634 = INT16_MAX;
	volatile int8_t x635 = -6;

    t141 = (((x633<=x634)-x635)%x636);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x637 = 1U;
	int32_t x638 = INT32_MIN;
	uint64_t x639 = 4030LLU;
	int16_t x640 = -98;
	uint64_t t142 = 6342LLU;

    t142 = (((x637<=x638)-x639)%x640);

    if (t142 != 18446744073709547586LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x641 = INT8_MAX;
	volatile int32_t x642 = 155;

    t143 = (((x641<=x642)-x643)%x644);

    if (t143 != 2147483650U) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint64_t x645 = 2095422852137783374LLU;
	static uint8_t x646 = 0U;
	uint64_t x647 = 5LLU;
	static int32_t x648 = INT32_MIN;
	uint64_t t144 = 483350400676518661LLU;

    t144 = (((x645<=x646)-x647)%x648);

    if (t144 != 2147483643LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x650 = -1;
	static volatile uint16_t x651 = 5867U;
	int32_t x652 = -1;

    t145 = (((x649<=x650)-x651)%x652);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint8_t x653 = 1U;
	uint8_t x654 = 2U;
	int8_t x655 = 1;
	int16_t x656 = INT16_MIN;
	volatile int32_t t146 = 0;

    t146 = (((x653<=x654)-x655)%x656);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x657 = INT64_MIN;
	int8_t x658 = INT8_MIN;
	int32_t x659 = 21576968;
	volatile int32_t t147 = 1;

    t147 = (((x657<=x658)-x659)%x660);

    if (t147 != -1) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x661 = -1;
	int64_t x662 = INT64_MIN;
	int64_t x663 = -1LL;
	int16_t x664 = INT16_MIN;

    t148 = (((x661<=x662)-x663)%x664);

    if (t148 != 1LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x667 = -1;
	int8_t x668 = 3;
	int32_t t149 = -81;

    t149 = (((x665<=x666)-x667)%x668);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x670 = UINT64_MAX;
	int32_t x672 = -69;
	volatile int32_t t150 = 13596012;

    t150 = (((x669<=x670)-x671)%x672);

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int8_t x678 = 37;
	static uint32_t x680 = UINT32_MAX;

    t151 = (((x677<=x678)-x679)%x680);

    if (t151 != 2U) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x681 = -1;
	int8_t x682 = 3;
	uint64_t x683 = UINT64_MAX;
	int32_t x684 = 5405;
	uint64_t t152 = 380092315LLU;

    t152 = (((x681<=x682)-x683)%x684);

    if (t152 != 2LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x689 = INT8_MIN;
	uint16_t x692 = 2276U;
	int32_t t153 = 301885478;

    t153 = (((x689<=x690)-x691)%x692);

    if (t153 != -845) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x693 = 0;
	int64_t x694 = INT64_MIN;
	int16_t x695 = -1;
	int64_t x696 = INT64_MIN;
	static int64_t t154 = -5032410050LL;

    t154 = (((x693<=x694)-x695)%x696);

    if (t154 != 1LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x697 = UINT32_MAX;
	static volatile uint8_t x698 = 1U;
	static int16_t x699 = -5;
	static volatile int64_t x700 = INT64_MAX;
	int64_t t155 = 170LL;

    t155 = (((x697<=x698)-x699)%x700);

    if (t155 != 5LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint32_t x705 = 59U;
	static uint32_t x706 = UINT32_MAX;
	static volatile int16_t x707 = INT16_MAX;
	int32_t t156 = -77;

    t156 = (((x705<=x706)-x707)%x708);

    if (t156 != -32766) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x709 = 88041442872LL;

    t157 = (((x709<=x710)-x711)%x712);

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x713 = INT32_MIN;
	int32_t x714 = INT32_MAX;
	static int8_t x715 = 0;
	static uint16_t x716 = 42U;
	volatile int32_t t158 = -1730818;

    t158 = (((x713<=x714)-x715)%x716);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x717 = INT16_MIN;
	int8_t x718 = -1;
	static uint32_t x719 = UINT32_MAX;
	int8_t x720 = INT8_MIN;
	uint32_t t159 = 126986357U;

    t159 = (((x717<=x718)-x719)%x720);

    if (t159 != 2U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x721 = 4304U;
	static uint8_t x722 = 31U;
	int8_t x723 = INT8_MIN;
	int8_t x724 = 24;
	static volatile int32_t t160 = -3;

    t160 = (((x721<=x722)-x723)%x724);

    if (t160 != 8) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x725 = INT16_MAX;
	int32_t x726 = INT32_MIN;
	uint64_t x727 = 67440280035354LLU;
	int32_t x728 = INT32_MIN;
	static uint64_t t161 = 1037765999799253971LLU;

    t161 = (((x725<=x726)-x727)%x728);

    if (t161 != 18446676633429516262LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x729 = 24U;
	int16_t x730 = 1668;
	int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	static uint32_t t162 = 117U;

    t162 = (((x729<=x730)-x731)%x732);

    if (t162 != 129U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x733 = -1;
	int64_t x734 = INT64_MAX;
	volatile int16_t x735 = INT16_MIN;
	int32_t x736 = INT32_MAX;
	static int32_t t163 = 1373;

    t163 = (((x733<=x734)-x735)%x736);

    if (t163 != 32769) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x737 = INT16_MIN;
	volatile uint16_t x738 = 6833U;
	volatile uint64_t x739 = 2397LLU;
	uint64_t x740 = 5922534768478LLU;
	volatile uint64_t t164 = 4589544466561213LLU;

    t164 = (((x737<=x738)-x739)%x740);

    if (t164 != 2706374176960LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x746 = 57U;
	volatile int64_t x747 = -118935897868930LL;
	volatile int64_t x748 = -1LL;

    t165 = (((x745<=x746)-x747)%x748);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x749 = INT64_MIN;
	int16_t x750 = 356;
	volatile int16_t x752 = 14212;
	volatile uint64_t t166 = 4178423915678631392LLU;

    t166 = (((x749<=x750)-x751)%x752);

    if (t166 != 3048LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int32_t x753 = 128758;
	uint16_t x754 = 21U;
	int8_t x755 = INT8_MIN;
	int32_t x756 = INT32_MIN;
	int32_t t167 = -32182205;

    t167 = (((x753<=x754)-x755)%x756);

    if (t167 != 128) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x758 = INT16_MAX;
	volatile int32_t x760 = -1;
	int32_t t168 = -182099615;

    t168 = (((x757<=x758)-x759)%x760);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x761 = 1U;
	static int64_t x762 = -317LL;
	int32_t x763 = -1;
	int32_t x764 = -3;
	int32_t t169 = 15;

    t169 = (((x761<=x762)-x763)%x764);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x765 = INT64_MIN;
	uint64_t x766 = 2674857LLU;
	uint32_t x768 = 203248623U;
	volatile int64_t t170 = 124284220414LL;

    t170 = (((x765<=x766)-x767)%x768);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x770 = -8819LL;
	static int8_t x771 = 25;
	static uint8_t x772 = UINT8_MAX;
	volatile int32_t t171 = 28506213;

    t171 = (((x769<=x770)-x771)%x772);

    if (t171 != -25) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x773 = -2979288;
	static uint64_t x774 = UINT64_MAX;
	uint32_t x775 = 647431U;
	uint32_t x776 = UINT32_MAX;
	volatile uint32_t t172 = 3633343U;

    t172 = (((x773<=x774)-x775)%x776);

    if (t172 != 4294319866U) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x777 = -6066;
	volatile int32_t x780 = INT32_MAX;
	static uint64_t t173 = 15957720LLU;

    t173 = (((x777<=x778)-x779)%x780);

    if (t173 != 776602909LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x781 = INT32_MIN;
	int16_t x783 = 1;
	volatile uint8_t x784 = UINT8_MAX;
	int32_t t174 = -130838184;

    t174 = (((x781<=x782)-x783)%x784);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x785 = INT32_MIN;
	int8_t x786 = -21;
	int8_t x787 = -1;
	int16_t x788 = 101;
	int32_t t175 = -401869;

    t175 = (((x785<=x786)-x787)%x788);

    if (t175 != 2) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x789 = -929636377838067156LL;
	int32_t x791 = -26;
	int64_t x792 = INT64_MAX;
	int64_t t176 = 755570LL;

    t176 = (((x789<=x790)-x791)%x792);

    if (t176 != 27LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x793 = 41445LL;
	volatile uint32_t x794 = 68U;
	uint16_t x795 = 14368U;
	volatile int16_t x796 = INT16_MAX;
	int32_t t177 = -1;

    t177 = (((x793<=x794)-x795)%x796);

    if (t177 != -14368) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x797 = 6U;
	int32_t x798 = -1;
	static uint64_t x799 = 28400LLU;

    t178 = (((x797<=x798)-x799)%x800);

    if (t178 != 9223372036854747408LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x801 = 2165429;
	uint16_t x802 = 30483U;
	uint8_t x803 = UINT8_MAX;
	int32_t x804 = INT32_MIN;
	int32_t t179 = -1;

    t179 = (((x801<=x802)-x803)%x804);

    if (t179 != -255) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x806 = 1434;
	int8_t x807 = -1;
	int8_t x808 = 24;
	int32_t t180 = 56593;

    t180 = (((x805<=x806)-x807)%x808);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	static int64_t x810 = INT64_MIN;
	int32_t x812 = INT32_MIN;
	volatile int32_t t181 = -3337469;

    t181 = (((x809<=x810)-x811)%x812);

    if (t181 != -32767) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x813 = INT8_MIN;
	volatile int64_t x814 = -2042309362993095LL;
	uint16_t x815 = 365U;
	volatile int16_t x816 = -102;
	int32_t t182 = -26;

    t182 = (((x813<=x814)-x815)%x816);

    if (t182 != -59) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x817 = 86U;
	int64_t x818 = INT64_MAX;
	int8_t x819 = INT8_MIN;
	uint16_t x820 = UINT16_MAX;
	volatile int32_t t183 = -12546377;

    t183 = (((x817<=x818)-x819)%x820);

    if (t183 != 129) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x821 = UINT32_MAX;
	volatile uint8_t x822 = 0U;
	uint32_t x823 = 4U;
	int64_t x824 = -1LL;
	volatile int64_t t184 = -3039LL;

    t184 = (((x821<=x822)-x823)%x824);

    if (t184 != 0LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x825 = 225;
	volatile uint64_t x826 = 7004827LLU;
	int16_t x827 = INT16_MAX;
	uint64_t x828 = UINT64_MAX;
	static uint64_t t185 = 114177047557LLU;

    t185 = (((x825<=x826)-x827)%x828);

    if (t185 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x833 = INT16_MIN;
	uint8_t x834 = 6U;
	uint64_t x835 = 12LLU;
	volatile uint64_t t186 = 454LLU;

    t186 = (((x833<=x834)-x835)%x836);

    if (t186 != 5LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x837 = 3367260U;
	int32_t x838 = 3;
	int64_t x839 = 7298353704LL;
	volatile int64_t t187 = 31036923745465LL;

    t187 = (((x837<=x838)-x839)%x840);

    if (t187 != -4LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint32_t x841 = 158790U;
	uint16_t x842 = 909U;
	int16_t x843 = -1615;
	volatile int32_t x844 = INT32_MIN;
	static volatile int32_t t188 = 493655433;

    t188 = (((x841<=x842)-x843)%x844);

    if (t188 != 1615) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x845 = 25U;
	static volatile int32_t x846 = -69;
	static int16_t x847 = 815;
	int64_t t189 = -164766895315LL;

    t189 = (((x845<=x846)-x847)%x848);

    if (t189 != 0LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x849 = 59U;
	int8_t x851 = -10;
	uint32_t x852 = UINT32_MAX;
	static uint32_t t190 = 631448U;

    t190 = (((x849<=x850)-x851)%x852);

    if (t190 != 11U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x853 = INT64_MIN;
	static uint64_t x854 = 106071134259646LLU;
	int16_t x855 = 9948;
	int32_t x856 = -1;
	volatile int32_t t191 = -6917136;

    t191 = (((x853<=x854)-x855)%x856);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x857 = 0U;
	volatile uint32_t t192 = 2022537U;

    t192 = (((x857<=x858)-x859)%x860);

    if (t192 != 0U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x861 = 1U;
	uint32_t x862 = UINT32_MAX;
	volatile int8_t x863 = INT8_MAX;
	int32_t x864 = INT32_MAX;

    t193 = (((x861<=x862)-x863)%x864);

    if (t193 != -126) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x865 = -1;
	static uint16_t x867 = UINT16_MAX;
	int32_t t194 = 126115;

    t194 = (((x865<=x866)-x867)%x868);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x869 = UINT64_MAX;
	int32_t x870 = -3877;
	int64_t x872 = -2864173LL;
	int64_t t195 = 7LL;

    t195 = (((x869<=x870)-x871)%x872);

    if (t195 != 18LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x873 = INT16_MIN;
	volatile int32_t x874 = 1;
	int32_t t196 = -1;

    t196 = (((x873<=x874)-x875)%x876);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x877 = 305U;
	static int64_t x879 = INT64_MAX;
	volatile int16_t x880 = INT16_MAX;
	volatile int64_t t197 = -10565LL;

    t197 = (((x877<=x878)-x879)%x880);

    if (t197 != -6LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x882 = INT32_MAX;
	static int16_t x883 = INT16_MAX;
	int8_t x884 = 27;
	volatile int32_t t198 = -8795948;

    t198 = (((x881<=x882)-x883)%x884);

    if (t198 != -15) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x886 = -28477053495LL;
	uint64_t x887 = 5809228071684LLU;
	uint32_t x888 = 10830219U;

    t199 = (((x885<=x886)-x887)%x888);

    if (t199 != 3718852LLU) { NG(); } else { ; }
	
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

