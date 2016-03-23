
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

int32_t x5 = 938;
int32_t x13 = -5411;
uint8_t x14 = 9U;
static volatile int32_t x16 = INT32_MIN;
uint16_t x19 = 5595U;
int16_t x21 = INT16_MIN;
volatile int8_t x32 = INT8_MIN;
static uint64_t x40 = UINT64_MAX;
int64_t x53 = 2171840LL;
volatile uint8_t x54 = UINT8_MAX;
volatile int16_t x59 = -1;
volatile int64_t t14 = 1535640LL;
int64_t x66 = -1LL;
int64_t x70 = 585000LL;
static uint8_t x81 = UINT8_MAX;
uint8_t x95 = 43U;
static int64_t x97 = INT64_MIN;
volatile uint64_t t21 = 848665723LLU;
volatile int32_t t25 = 304;
volatile int16_t x123 = INT16_MIN;
uint32_t t27 = 935406U;
volatile uint16_t x130 = 5U;
uint16_t x131 = 1479U;
uint64_t x140 = 482555LLU;
volatile uint64_t t30 = 603021949692938LLU;
static volatile int32_t t31 = 57;
int32_t t32 = -201498284;
uint16_t x153 = 0U;
static uint32_t x156 = 5U;
uint8_t x157 = UINT8_MAX;
int8_t x158 = INT8_MAX;
int8_t x169 = -1;
static int8_t x171 = INT8_MIN;
int8_t x173 = INT8_MAX;
int64_t x174 = -1LL;
volatile int16_t x175 = 1;
int8_t x179 = INT8_MAX;
uint64_t x184 = UINT64_MAX;
uint16_t x187 = 55U;
int16_t x189 = 746;
static uint64_t x190 = 9974LLU;
uint32_t x194 = 1008084U;
uint32_t x195 = UINT32_MAX;
uint32_t t44 = 33340U;
volatile uint64_t x202 = 13593788286596754LLU;
uint32_t x218 = UINT32_MAX;
int16_t x222 = -4;
volatile uint16_t x227 = 64U;
uint32_t x230 = 201708290U;
int16_t x242 = INT16_MAX;
int32_t x250 = INT32_MAX;
int16_t x251 = 1;
static uint8_t x253 = UINT8_MAX;
uint32_t x260 = 1720648U;
static volatile int32_t t58 = 29098368;
int16_t x274 = INT16_MIN;
int64_t x279 = 15LL;
static int64_t t60 = -25380773LL;
int16_t x281 = -1;
uint32_t x282 = 212U;
uint16_t x283 = 24447U;
int16_t x293 = 183;
uint32_t x296 = UINT32_MAX;
static uint32_t x303 = 45006U;
int8_t x307 = -1;
uint32_t x308 = 3124U;
static int16_t x309 = 5;
uint16_t x313 = 12153U;
int32_t x327 = -1;
int8_t x329 = INT8_MIN;
uint64_t t71 = 119965945374638192LLU;
static uint8_t x337 = 24U;
uint8_t x341 = 12U;
volatile uint32_t t74 = 7186U;
static int16_t x347 = INT16_MIN;
int16_t x350 = -1;
volatile int8_t x352 = INT8_MAX;
uint32_t x355 = 148055024U;
static volatile uint32_t t77 = 6004535U;
int16_t x359 = INT16_MIN;
int32_t x370 = 2131;
static volatile int64_t t80 = -331911998465389LL;
static int16_t x379 = INT16_MAX;
static uint8_t x382 = 7U;
int8_t x392 = INT8_MIN;
volatile int8_t x393 = INT8_MIN;
static uint16_t x397 = 75U;
int64_t x398 = -1LL;
static uint32_t x399 = 62307366U;
int16_t x401 = 12;
int8_t x402 = INT8_MIN;
volatile int32_t x406 = INT32_MAX;
static volatile uint64_t x412 = 4098256621992LLU;
static int32_t x416 = INT32_MIN;
uint32_t x417 = 187975211U;
static int16_t x421 = -3202;
volatile int32_t x429 = -1;
int32_t t94 = 7;
int32_t t96 = 2;
uint64_t x452 = UINT64_MAX;
static uint64_t t99 = 28447141LLU;
static uint8_t x462 = 6U;
uint8_t x469 = 75U;
static volatile int32_t t106 = 16230;
int32_t x493 = INT32_MIN;
int8_t x495 = INT8_MIN;
int64_t x509 = INT64_MIN;
volatile uint32_t t112 = 0U;
uint64_t x532 = UINT64_MAX;
uint8_t x537 = UINT8_MAX;
int32_t x553 = -845261799;
static uint16_t x556 = 2U;
uint64_t x559 = 150406068012LLU;
int64_t t118 = 16680057773547744LL;
static uint32_t x566 = 1U;
int16_t x567 = INT16_MIN;
int32_t x569 = -1;
static uint32_t x578 = 3723822U;
volatile uint16_t x579 = 26U;
static uint8_t x594 = 94U;
uint32_t x601 = 13542U;
static int64_t x602 = -46561360LL;
static int16_t x603 = 265;
int16_t x605 = INT16_MAX;
static int8_t x607 = 31;
int16_t x609 = INT16_MAX;
static volatile uint64_t t128 = 2507157LLU;
static int32_t x613 = 2055;
static volatile int16_t x617 = INT16_MIN;
int32_t x620 = 22;
int64_t t131 = 14599505848653LL;
int64_t x637 = INT64_MAX;
static int64_t x657 = -1LL;
static int8_t x658 = -1;
volatile int16_t x660 = 101;
volatile uint32_t x667 = UINT32_MAX;
int64_t t141 = 15LL;
static uint8_t x671 = 3U;
int64_t t142 = -431227883655LL;
static uint8_t x675 = 2U;
volatile uint64_t t143 = 15763LLU;
int32_t t145 = -29135319;
uint32_t x692 = 19U;
int8_t x712 = -33;
static uint8_t x713 = 14U;
volatile int64_t x715 = -917LL;
int64_t t150 = -1826112794861LL;
int32_t t151 = 0;
int8_t x730 = -1;
static uint16_t x737 = 8800U;
volatile int16_t x738 = -1;
int16_t x744 = INT16_MIN;
volatile uint8_t x745 = UINT8_MAX;
volatile int32_t x746 = INT32_MIN;
uint64_t x749 = UINT64_MAX;
static volatile int32_t t160 = 984;
uint16_t x762 = UINT16_MAX;
volatile int32_t t161 = 510184;
int32_t x768 = 1926931;
int64_t t162 = 104196LL;
uint16_t x777 = 505U;
uint8_t x778 = UINT8_MAX;
static int64_t x779 = -1LL;
int64_t t164 = 99166168490029LL;
int32_t t166 = -79;
volatile uint8_t x796 = 4U;
int64_t x802 = -1LL;
int32_t x810 = INT32_MAX;
int32_t x820 = INT32_MIN;
int8_t x821 = -1;
int32_t x829 = 4670401;
volatile int64_t t176 = -147132440LL;
static int64_t x847 = INT64_MAX;
volatile int8_t x848 = -49;
int8_t x854 = INT8_MIN;
int64_t t181 = 4010012025030007LL;
volatile uint64_t t183 = 5388783856095LLU;
uint8_t x872 = UINT8_MAX;
int16_t x878 = INT16_MIN;
uint32_t x879 = 0U;
int64_t x886 = INT64_MIN;
int32_t x900 = -1;
int8_t x904 = INT8_MAX;
volatile int32_t t190 = 19280246;
int64_t x912 = -1LL;
volatile uint64_t x913 = 58732816LLU;
int64_t x914 = INT64_MAX;
static int8_t x915 = 24;
volatile int16_t x916 = -1;
volatile int64_t x923 = 1330LL;
int8_t x925 = INT8_MIN;
int32_t x928 = -634;
int32_t t197 = -14791;
static uint64_t x933 = 1152LLU;
uint16_t x934 = 21U;
uint8_t x937 = 14U;
int16_t x939 = INT16_MIN;


void f0(void) {
    	volatile int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MIN;
	static uint64_t x8 = 492440888469229585LLU;
	uint64_t t0 = 100LLU;

    t0 = (((x5<=x6)-x7)/x8);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -19;
	int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	volatile uint64_t x12 = 50665545727LLU;
	volatile uint64_t t1 = 7836616537280LLU;

    t1 = (((x9<=x10)-x11)/x12);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x15 = UINT8_MAX;
	volatile int32_t t2 = -817826;

    t2 = (((x13<=x14)-x15)/x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = -100695576;
	uint64_t x18 = 497LLU;
	volatile int64_t x20 = INT64_MAX;
	static volatile int64_t t3 = -2106446LL;

    t3 = (((x17<=x18)-x19)/x20);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x22 = INT16_MAX;
	uint32_t x23 = UINT32_MAX;
	int8_t x24 = INT8_MIN;
	static volatile uint32_t t4 = 1462971U;

    t4 = (((x21<=x22)-x23)/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = INT8_MIN;
	int32_t x26 = -132475709;
	volatile int16_t x27 = INT16_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -2425;

    t5 = (((x25<=x26)-x27)/x28);

    if (t5 != -258) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = INT32_MIN;
	int16_t x30 = 4;
	static uint8_t x31 = 2U;
	volatile int32_t t6 = 9510668;

    t6 = (((x29<=x30)-x31)/x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	static int16_t x33 = INT16_MIN;
	uint32_t x34 = 16959240U;
	int8_t x35 = 7;
	uint32_t x36 = 50604U;
	uint32_t t7 = 10396U;

    t7 = (((x33<=x34)-x35)/x36);

    if (t7 != 84874U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x37 = INT16_MIN;
	static int16_t x38 = INT16_MIN;
	uint32_t x39 = 73003896U;
	static uint64_t t8 = 52843622180939LLU;

    t8 = (((x37<=x38)-x39)/x40);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x41 = 2722;
	int32_t x42 = 3596744;
	static volatile int16_t x43 = -1;
	int16_t x44 = -6;
	static int32_t t9 = 98093;

    t9 = (((x41<=x42)-x43)/x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint32_t x45 = 617924034U;
	int8_t x46 = INT8_MIN;
	int8_t x47 = INT8_MIN;
	static int64_t x48 = -1LL;
	int64_t t10 = -73634760869252LL;

    t10 = (((x45<=x46)-x47)/x48);

    if (t10 != -129LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	uint8_t x51 = UINT8_MAX;
	volatile uint8_t x52 = UINT8_MAX;
	int32_t t11 = -823;

    t11 = (((x49<=x50)-x51)/x52);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x55 = 0;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t12 = 547580906;

    t12 = (((x53<=x54)-x55)/x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MAX;
	volatile int32_t x60 = INT32_MIN;
	int32_t t13 = -7;

    t13 = (((x57<=x58)-x59)/x60);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = 18U;
	int32_t x62 = 662863046;
	static int64_t x63 = INT64_MAX;
	volatile int64_t x64 = INT64_MIN;

    t14 = (((x61<=x62)-x63)/x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	int8_t x67 = 0;
	volatile int32_t x68 = -1;
	static volatile int32_t t15 = 1;

    t15 = (((x65<=x66)-x67)/x68);

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x69 = INT32_MAX;
	volatile uint64_t x71 = 231107614947LLU;
	int32_t x72 = INT32_MIN;
	uint64_t t16 = 707LLU;

    t16 = (((x69<=x70)-x71)/x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = -7;
	uint32_t x78 = 1989U;
	uint64_t x79 = 5554029890651385362LLU;
	volatile uint16_t x80 = 7115U;
	volatile uint64_t t17 = 2079513595687237193LLU;

    t17 = (((x77<=x78)-x79)/x80);

    if (t17 != 1812046968806488LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x82 = 127985960458921533LL;
	int16_t x83 = 82;
	int64_t x84 = -1LL;
	int64_t t18 = -22LL;

    t18 = (((x81<=x82)-x83)/x84);

    if (t18 != 81LL) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int64_t x85 = -587154167216176855LL;
	int64_t x86 = INT64_MIN;
	uint16_t x87 = 12260U;
	int64_t x88 = -1LL;
	volatile int64_t t19 = 24700303955559LL;

    t19 = (((x85<=x86)-x87)/x88);

    if (t19 != 12260LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MAX;
	volatile int16_t x96 = INT16_MIN;
	volatile int32_t t20 = 321982751;

    t20 = (((x93<=x94)-x95)/x96);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint64_t x98 = 446232143845LLU;
	uint8_t x99 = UINT8_MAX;
	uint64_t x100 = 30400974722120LLU;

    t21 = (((x97<=x98)-x99)/x100);

    if (t21 != 606781LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x101 = UINT16_MAX;
	static int8_t x102 = 38;
	volatile int64_t x103 = INT64_MAX;
	int8_t x104 = -1;
	volatile int64_t t22 = INT64_MAX;

    t22 = (((x101<=x102)-x103)/x104);

    if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x105 = 0U;
	int8_t x106 = -58;
	int64_t x107 = -1LL;
	static volatile int64_t x108 = INT64_MAX;
	int64_t t23 = 3029111501467LL;

    t23 = (((x105<=x106)-x107)/x108);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = -35;
	static int64_t x110 = -1LL;
	int64_t x111 = 1642LL;
	static int64_t x112 = -1LL;
	volatile int64_t t24 = -2923289180LL;

    t24 = (((x109<=x110)-x111)/x112);

    if (t24 != 1641LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = INT64_MIN;
	int8_t x114 = -1;
	static int8_t x115 = -1;
	int8_t x116 = INT8_MAX;

    t25 = (((x113<=x114)-x115)/x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint64_t x121 = 6960173503870039101LLU;
	volatile int16_t x122 = -1;
	uint8_t x124 = UINT8_MAX;
	int32_t t26 = -31;

    t26 = (((x121<=x122)-x123)/x124);

    if (t26 != 128) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x125 = INT8_MIN;
	volatile int16_t x126 = 368;
	static uint32_t x127 = 7U;
	int8_t x128 = -1;

    t27 = (((x125<=x126)-x127)/x128);

    if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x129 = INT16_MIN;
	int8_t x132 = -1;
	int32_t t28 = 1;

    t28 = (((x129<=x130)-x131)/x132);

    if (t28 != 1478) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int32_t x133 = INT32_MIN;
	uint16_t x134 = 3U;
	uint32_t x135 = 21864U;
	volatile int16_t x136 = -1;
	volatile uint32_t t29 = 40422036U;

    t29 = (((x133<=x134)-x135)/x136);

    if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = 5;
	int8_t x138 = INT8_MIN;
	static uint8_t x139 = 17U;

    t30 = (((x137<=x138)-x139)/x140);

    if (t30 != 38227236426333LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 2U;
	int64_t x142 = INT64_MIN;
	static int16_t x143 = INT16_MIN;
	int32_t x144 = -15;

    t31 = (((x141<=x142)-x143)/x144);

    if (t31 != -2184) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x145 = 676021LLU;
	static int8_t x146 = 0;
	volatile int32_t x147 = -51;
	uint16_t x148 = UINT16_MAX;

    t32 = (((x145<=x146)-x147)/x148);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x149 = 49664057464LLU;
	uint16_t x150 = 8452U;
	static int8_t x151 = -23;
	uint8_t x152 = 13U;
	volatile int32_t t33 = 12;

    t33 = (((x149<=x150)-x151)/x152);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x154 = INT32_MAX;
	uint16_t x155 = 14U;
	uint32_t t34 = 53U;

    t34 = (((x153<=x154)-x155)/x156);

    if (t34 != 858993456U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x159 = UINT64_MAX;
	static int16_t x160 = -1;
	static volatile uint64_t t35 = 2121576565007887278LLU;

    t35 = (((x157<=x158)-x159)/x160);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x161 = INT32_MAX;
	static uint64_t x162 = 615117214016825642LLU;
	uint16_t x163 = UINT16_MAX;
	static int64_t x164 = INT64_MIN;
	static volatile int64_t t36 = -14946522LL;

    t36 = (((x161<=x162)-x163)/x164);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MAX;
	int64_t x167 = -1LL;
	static int64_t x168 = INT64_MIN;
	volatile int64_t t37 = -3LL;

    t37 = (((x165<=x166)-x167)/x168);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x170 = INT8_MIN;
	uint32_t x172 = 225955775U;
	volatile uint32_t t38 = 108083U;

    t38 = (((x169<=x170)-x171)/x172);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x176 = -1;
	static volatile int32_t t39 = -2937716;

    t39 = (((x173<=x174)-x175)/x176);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x177 = -2996305633756612LL;
	int16_t x178 = 18;
	static int32_t x180 = 16841691;
	int32_t t40 = -3112269;

    t40 = (((x177<=x178)-x179)/x180);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x181 = -1;
	static int32_t x182 = -63648468;
	volatile int64_t x183 = -1LL;
	volatile uint64_t t41 = 7355841LLU;

    t41 = (((x181<=x182)-x183)/x184);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x185 = 22U;
	int32_t x186 = 510452694;
	int16_t x188 = -994;
	static int32_t t42 = 28370;

    t42 = (((x185<=x186)-x187)/x188);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x191 = -1;
	static int8_t x192 = 36;
	volatile int32_t t43 = 1050713303;

    t43 = (((x189<=x190)-x191)/x192);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x193 = INT64_MIN;
	static uint8_t x196 = 2U;

    t44 = (((x193<=x194)-x195)/x196);

    if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x197 = -1;
	uint8_t x198 = 25U;
	volatile uint32_t x199 = 6279U;
	static volatile int32_t x200 = -1;
	uint32_t t45 = 31171U;

    t45 = (((x197<=x198)-x199)/x200);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x201 = 71;
	int32_t x203 = -1;
	uint32_t x204 = 41270U;
	static uint32_t t46 = 298523U;

    t46 = (((x201<=x202)-x203)/x204);

    if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint32_t x209 = UINT32_MAX;
	int64_t x210 = INT64_MAX;
	uint64_t x211 = UINT64_MAX;
	static int16_t x212 = INT16_MAX;
	volatile uint64_t t47 = 348903907290716639LLU;

    t47 = (((x209<=x210)-x211)/x212);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x217 = INT32_MIN;
	uint16_t x219 = 27U;
	int8_t x220 = -1;
	volatile int32_t t48 = 5014;

    t48 = (((x217<=x218)-x219)/x220);

    if (t48 != 26) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x223 = -29;
	int64_t x224 = -1LL;
	int64_t t49 = -50794LL;

    t49 = (((x221<=x222)-x223)/x224);

    if (t49 != -30LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x225 = 189013349U;
	uint32_t x226 = 9873U;
	int16_t x228 = -1;
	volatile int32_t t50 = 125807;

    t50 = (((x225<=x226)-x227)/x228);

    if (t50 != 64) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x231 = INT8_MIN;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t51 = 389;

    t51 = (((x229<=x230)-x231)/x232);

    if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x237 = 160442U;
	uint64_t x238 = 23464LLU;
	int8_t x239 = INT8_MIN;
	volatile int64_t x240 = -1LL;
	volatile int64_t t52 = 2046240LL;

    t52 = (((x237<=x238)-x239)/x240);

    if (t52 != -128LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x241 = -12;
	uint8_t x243 = UINT8_MAX;
	int64_t x244 = INT64_MAX;
	int64_t t53 = 3136710523708LL;

    t53 = (((x241<=x242)-x243)/x244);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x249 = INT16_MIN;
	static volatile uint16_t x252 = 12001U;
	volatile int32_t t54 = 262537193;

    t54 = (((x249<=x250)-x251)/x252);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint16_t x254 = UINT16_MAX;
	int32_t x255 = 1420;
	volatile int64_t x256 = -1LL;
	volatile int64_t t55 = -92767032199LL;

    t55 = (((x253<=x254)-x255)/x256);

    if (t55 != 1419LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x257 = 2463168LLU;
	volatile int8_t x258 = INT8_MIN;
	int64_t x259 = INT64_MAX;
	int64_t t56 = -142LL;

    t56 = (((x257<=x258)-x259)/x260);

    if (t56 != -5360406100989LL) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint64_t x261 = UINT64_MAX;
	static int8_t x262 = -1;
	int32_t x263 = INT32_MAX;
	uint8_t x264 = 65U;
	int32_t t57 = -535915233;

    t57 = (((x261<=x262)-x263)/x264);

    if (t57 != -33038209) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x265 = INT64_MIN;
	int8_t x266 = -1;
	int32_t x267 = -1;
	uint8_t x268 = UINT8_MAX;

    t58 = (((x265<=x266)-x267)/x268);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x273 = -1;
	uint32_t x275 = 11U;
	static uint32_t x276 = UINT32_MAX;
	uint32_t t59 = 1655U;

    t59 = (((x273<=x274)-x275)/x276);

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x277 = UINT16_MAX;
	static uint8_t x278 = 6U;
	volatile int16_t x280 = INT16_MIN;

    t60 = (((x277<=x278)-x279)/x280);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile int32_t x284 = INT32_MIN;
	volatile int32_t t61 = -223;

    t61 = (((x281<=x282)-x283)/x284);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x285 = INT32_MAX;
	static volatile int16_t x286 = INT16_MIN;
	int32_t x287 = -1;
	volatile int8_t x288 = 61;
	int32_t t62 = 0;

    t62 = (((x285<=x286)-x287)/x288);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x294 = INT32_MAX;
	uint32_t x295 = 0U;
	volatile uint32_t t63 = 1899570495U;

    t63 = (((x293<=x294)-x295)/x296);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint16_t x301 = UINT16_MAX;
	uint64_t x302 = 213220572305LLU;
	uint32_t x304 = UINT32_MAX;
	uint32_t t64 = 685210369U;

    t64 = (((x301<=x302)-x303)/x304);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x305 = 31LL;
	uint64_t x306 = UINT64_MAX;
	uint32_t t65 = 81U;

    t65 = (((x305<=x306)-x307)/x308);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x310 = -1;
	int8_t x311 = 34;
	uint64_t x312 = 61201336367159909LLU;
	uint64_t t66 = 272579861845513LLU;

    t66 = (((x309<=x310)-x311)/x312);

    if (t66 != 301LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x314 = -1LL;
	int64_t x315 = INT64_MAX;
	static volatile uint8_t x316 = 6U;
	int64_t t67 = -16428329LL;

    t67 = (((x313<=x314)-x315)/x316);

    if (t67 != -1537228672809129301LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x317 = INT8_MIN;
	static int8_t x318 = INT8_MIN;
	int64_t x319 = 9LL;
	int32_t x320 = INT32_MAX;
	volatile int64_t t68 = 48411811500848LL;

    t68 = (((x317<=x318)-x319)/x320);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x321 = -27;
	int64_t x322 = -1LL;
	uint8_t x323 = 1U;
	int32_t x324 = INT32_MIN;
	int32_t t69 = 1;

    t69 = (((x321<=x322)-x323)/x324);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x325 = INT8_MIN;
	int16_t x326 = -253;
	int64_t x328 = INT64_MIN;
	int64_t t70 = 58611752701785956LL;

    t70 = (((x325<=x326)-x327)/x328);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x330 = INT32_MAX;
	static volatile uint64_t x331 = 13761494LLU;
	static int16_t x332 = INT16_MIN;

    t71 = (((x329<=x330)-x331)/x332);

    if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x333 = UINT16_MAX;
	uint64_t x334 = 9LLU;
	static volatile int16_t x335 = INT16_MAX;
	volatile int64_t x336 = 5689LL;
	volatile int64_t t72 = -97745589LL;

    t72 = (((x333<=x334)-x335)/x336);

    if (t72 != -5LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x338 = 1U;
	int16_t x339 = INT16_MAX;
	int16_t x340 = INT16_MAX;
	static int32_t t73 = 355753;

    t73 = (((x337<=x338)-x339)/x340);

    if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x342 = INT32_MAX;
	uint32_t x343 = 458U;
	static int32_t x344 = -1;

    t74 = (((x341<=x342)-x343)/x344);

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x345 = 756886LLU;
	int16_t x346 = INT16_MAX;
	uint16_t x348 = 2U;
	volatile int32_t t75 = -22961;

    t75 = (((x345<=x346)-x347)/x348);

    if (t75 != 16384) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x349 = INT32_MIN;
	uint32_t x351 = 3124942U;
	uint32_t t76 = 3759U;

    t76 = (((x349<=x350)-x351)/x352);

    if (t76 != 33794034U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x353 = 140877621208042556LLU;
	static uint64_t x354 = 80924101LLU;
	volatile int8_t x356 = INT8_MIN;

    t77 = (((x353<=x354)-x355)/x356);

    if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = 254629LLU;
	int16_t x360 = INT16_MAX;
	volatile int32_t t78 = -44849;

    t78 = (((x357<=x358)-x359)/x360);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x361 = UINT8_MAX;
	int64_t x362 = INT64_MIN;
	volatile int64_t x363 = -230856LL;
	int16_t x364 = INT16_MIN;
	int64_t t79 = -1LL;

    t79 = (((x361<=x362)-x363)/x364);

    if (t79 != -7LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x369 = INT8_MIN;
	int64_t x371 = -1LL;
	int16_t x372 = INT16_MAX;

    t80 = (((x369<=x370)-x371)/x372);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x373 = 82278242;
	int32_t x374 = INT32_MIN;
	static int16_t x375 = 31;
	uint16_t x376 = 1U;
	static int32_t t81 = -9324;

    t81 = (((x373<=x374)-x375)/x376);

    if (t81 != -31) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x377 = -1;
	int32_t x378 = INT32_MIN;
	int32_t x380 = -941300162;
	volatile int32_t t82 = 56493560;

    t82 = (((x377<=x378)-x379)/x380);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x381 = -13;
	static int32_t x383 = 393;
	uint32_t x384 = 48U;
	volatile uint32_t t83 = 19U;

    t83 = (((x381<=x382)-x383)/x384);

    if (t83 != 89478477U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x385 = -211023267LL;
	volatile uint8_t x386 = 81U;
	uint64_t x387 = UINT64_MAX;
	static int16_t x388 = INT16_MIN;
	uint64_t t84 = 170820LLU;

    t84 = (((x385<=x386)-x387)/x388);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x389 = INT16_MIN;
	static uint8_t x390 = 15U;
	int32_t x391 = -1;
	int32_t t85 = -48988155;

    t85 = (((x389<=x390)-x391)/x392);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static volatile int32_t x394 = INT32_MIN;
	int64_t x395 = INT64_MAX;
	int64_t x396 = 32350619106316LL;
	int64_t t86 = -361376273481LL;

    t86 = (((x393<=x394)-x395)/x396);

    if (t86 != -285106LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x400 = -1;
	uint32_t t87 = 33U;

    t87 = (((x397<=x398)-x399)/x400);

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x403 = 26LLU;
	int16_t x404 = INT16_MAX;
	volatile uint64_t t88 = 153428368795257550LLU;

    t88 = (((x401<=x402)-x403)/x404);

    if (t88 != 562967133814799LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x405 = INT64_MIN;
	volatile int8_t x407 = INT8_MIN;
	int8_t x408 = INT8_MIN;
	int32_t t89 = 54972;

    t89 = (((x405<=x406)-x407)/x408);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x409 = -1LL;
	int64_t x410 = 5174846305288LL;
	uint64_t x411 = 6806351594716100LLU;
	static volatile uint64_t t90 = 1425138989LLU;

    t90 = (((x409<=x410)-x411)/x412);

    if (t90 != 4499459LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x413 = 66291LLU;
	int32_t x414 = INT32_MAX;
	volatile uint16_t x415 = 28366U;
	static int32_t t91 = -7577938;

    t91 = (((x413<=x414)-x415)/x416);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x418 = 1217U;
	static int8_t x419 = INT8_MAX;
	int64_t x420 = 34499215LL;
	int64_t t92 = 1578631746LL;

    t92 = (((x417<=x418)-x419)/x420);

    if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x422 = -4;
	uint32_t x423 = 61278U;
	static uint16_t x424 = UINT16_MAX;
	static volatile uint32_t t93 = 429063U;

    t93 = (((x421<=x422)-x423)/x424);

    if (t93 != 65536U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x430 = INT64_MAX;
	int16_t x431 = INT16_MAX;
	int8_t x432 = INT8_MAX;

    t94 = (((x429<=x430)-x431)/x432);

    if (t94 != -258) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x433 = -2924;
	uint64_t x434 = 682541150814LLU;
	int64_t x435 = 4593876555040302290LL;
	volatile uint32_t x436 = UINT32_MAX;
	static int64_t t95 = 35697691792922647LL;

    t95 = (((x433<=x434)-x435)/x436);

    if (t95 != -1069595235LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x437 = INT32_MIN;
	static int16_t x438 = -1;
	volatile int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MIN;

    t96 = (((x437<=x438)-x439)/x440);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x441 = INT32_MIN;
	uint32_t x442 = 289U;
	uint32_t x443 = 482U;
	int32_t x444 = INT32_MAX;
	uint32_t t97 = 7492821U;

    t97 = (((x441<=x442)-x443)/x444);

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x445 = 261247334488LLU;
	static int32_t x446 = INT32_MAX;
	int16_t x447 = INT16_MIN;
	volatile int8_t x448 = -1;
	volatile int32_t t98 = -30786;

    t98 = (((x445<=x446)-x447)/x448);

    if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MIN;
	static uint16_t x451 = UINT16_MAX;

    t99 = (((x449<=x450)-x451)/x452);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x457 = -1;
	uint8_t x458 = 89U;
	volatile int16_t x459 = -40;
	static uint64_t x460 = 129092LLU;
	volatile uint64_t t100 = 131948577995427LLU;

    t100 = (((x457<=x458)-x459)/x460);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x461 = -1;
	uint32_t x463 = 417267385U;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t101 = 28728347827345LLU;

    t101 = (((x461<=x462)-x463)/x464);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x465 = 171LLU;
	volatile int64_t x466 = -1LL;
	int64_t x467 = 331LL;
	int64_t x468 = INT64_MIN;
	volatile int64_t t102 = 842870031541918LL;

    t102 = (((x465<=x466)-x467)/x468);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x470 = -1;
	int8_t x471 = -1;
	static uint8_t x472 = 78U;
	static volatile int32_t t103 = -215695;

    t103 = (((x469<=x470)-x471)/x472);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x473 = INT16_MIN;
	volatile uint32_t x474 = 3806997U;
	uint16_t x475 = 9U;
	uint64_t x476 = UINT64_MAX;
	uint64_t t104 = 8568LLU;

    t104 = (((x473<=x474)-x475)/x476);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x481 = -1;
	static int64_t x482 = -20177800448LL;
	volatile uint16_t x483 = 873U;
	int64_t x484 = -248LL;
	int64_t t105 = -2163169618086476LL;

    t105 = (((x481<=x482)-x483)/x484);

    if (t105 != 3LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x485 = -1;
	volatile uint32_t x486 = UINT32_MAX;
	static int16_t x487 = INT16_MIN;
	static int8_t x488 = -13;

    t106 = (((x485<=x486)-x487)/x488);

    if (t106 != -2520) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x489 = INT64_MAX;
	uint8_t x490 = 0U;
	static volatile uint16_t x491 = 271U;
	volatile int16_t x492 = INT16_MIN;
	volatile int32_t t107 = 246433;

    t107 = (((x489<=x490)-x491)/x492);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x494 = 512946436127874475LLU;
	int32_t x496 = -1;
	volatile int32_t t108 = -66489721;

    t108 = (((x493<=x494)-x495)/x496);

    if (t108 != -128) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x505 = -22;
	uint32_t x506 = UINT32_MAX;
	int64_t x507 = -511123741202580284LL;
	int16_t x508 = INT16_MIN;
	int64_t t109 = -1645LL;

    t109 = (((x505<=x506)-x507)/x508);

    if (t109 != -15598258703692LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile uint32_t x510 = 538646720U;
	uint32_t x511 = UINT32_MAX;
	uint32_t x512 = UINT32_MAX;
	volatile uint32_t t110 = 6722U;

    t110 = (((x509<=x510)-x511)/x512);

    if (t110 != 0U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x517 = 19060690LLU;
	static uint64_t x518 = 3181121870048740874LLU;
	int8_t x519 = INT8_MIN;
	static int16_t x520 = INT16_MIN;
	volatile int32_t t111 = -3466;

    t111 = (((x517<=x518)-x519)/x520);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x525 = -12358007130886LL;
	static int16_t x526 = INT16_MIN;
	static uint32_t x527 = UINT32_MAX;
	volatile int32_t x528 = INT32_MIN;

    t112 = (((x525<=x526)-x527)/x528);

    if (t112 != 0U) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x529 = -601;
	volatile int8_t x530 = INT8_MIN;
	int8_t x531 = INT8_MIN;
	static uint64_t t113 = 57291783356406234LLU;

    t113 = (((x529<=x530)-x531)/x532);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint8_t x533 = 4U;
	uint8_t x534 = 0U;
	volatile uint64_t x535 = 3858602LLU;
	uint32_t x536 = 154685U;
	volatile uint64_t t114 = 281358557754140572LLU;

    t114 = (((x533<=x534)-x535)/x536);

    if (t114 != 119253606191328LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x538 = 1U;
	volatile int8_t x539 = 0;
	uint64_t x540 = 9172841865508057340LLU;
	uint64_t t115 = 982848676002977631LLU;

    t115 = (((x537<=x538)-x539)/x540);

    if (t115 != 0LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x554 = -8404;
	static uint32_t x555 = 3U;
	volatile uint32_t t116 = 455210U;

    t116 = (((x553<=x554)-x555)/x556);

    if (t116 != 2147483647U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x557 = 201U;
	static uint64_t x558 = 4592365696767972LLU;
	uint64_t x560 = 36011600LLU;
	volatile uint64_t t117 = 72072012655586819LLU;

    t117 = (((x557<=x558)-x559)/x560);

    if (t117 != 512244496864LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x561 = INT64_MIN;
	int32_t x562 = INT32_MIN;
	uint16_t x563 = UINT16_MAX;
	static int64_t x564 = 1LL;

    t118 = (((x561<=x562)-x563)/x564);

    if (t118 != -65534LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint32_t x565 = UINT32_MAX;
	volatile int8_t x568 = INT8_MIN;
	int32_t t119 = 3;

    t119 = (((x565<=x566)-x567)/x568);

    if (t119 != -256) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x570 = 107U;
	uint32_t x571 = 4896078U;
	uint8_t x572 = 56U;
	static volatile uint32_t t120 = 1675673969U;

    t120 = (((x569<=x570)-x571)/x572);

    if (t120 != 76608414U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x577 = 15541U;
	int32_t x580 = INT32_MIN;
	int32_t t121 = -48525421;

    t121 = (((x577<=x578)-x579)/x580);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x585 = INT8_MAX;
	static int32_t x586 = 1010207;
	uint32_t x587 = 7886895U;
	static int16_t x588 = INT16_MIN;
	uint32_t t122 = 333804U;

    t122 = (((x585<=x586)-x587)/x588);

    if (t122 != 0U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x589 = INT32_MIN;
	volatile int64_t x590 = INT64_MAX;
	int64_t x591 = INT64_MAX;
	int16_t x592 = 13712;
	volatile int64_t t123 = -6166323LL;

    t123 = (((x589<=x590)-x591)/x592);

    if (t123 != -672649652629432LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x593 = -1;
	static int64_t x595 = INT64_MAX;
	int32_t x596 = INT32_MAX;
	static volatile int64_t t124 = 6707LL;

    t124 = (((x593<=x594)-x595)/x596);

    if (t124 != -4294967298LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x597 = 29;
	uint32_t x598 = UINT32_MAX;
	int16_t x599 = INT16_MIN;
	uint64_t x600 = 143796LLU;
	static volatile uint64_t t125 = 514628656217LLU;

    t125 = (((x597<=x598)-x599)/x600);

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x604 = INT32_MIN;
	volatile int32_t t126 = -89814;

    t126 = (((x601<=x602)-x603)/x604);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x606 = 259115840LL;
	volatile int16_t x608 = INT16_MIN;
	int32_t t127 = -16;

    t127 = (((x605<=x606)-x607)/x608);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x610 = 1U;
	uint64_t x611 = 43990LLU;
	static uint8_t x612 = 23U;

    t128 = (((x609<=x610)-x611)/x612);

    if (t128 != 802032351030848157LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x614 = 887LLU;
	volatile int16_t x615 = -1;
	int32_t x616 = -4171;
	static volatile int32_t t129 = 865579991;

    t129 = (((x613<=x614)-x615)/x616);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x618 = INT32_MIN;
	uint8_t x619 = 6U;
	int32_t t130 = 318;

    t130 = (((x617<=x618)-x619)/x620);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x621 = -99LL;
	int64_t x622 = 138800404124LL;
	int64_t x623 = -1LL;
	uint8_t x624 = 1U;

    t131 = (((x621<=x622)-x623)/x624);

    if (t131 != 2LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x625 = -1;
	int16_t x626 = INT16_MIN;
	int8_t x627 = INT8_MIN;
	uint32_t x628 = 166829434U;
	uint32_t t132 = 1099U;

    t132 = (((x625<=x626)-x627)/x628);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x629 = 137U;
	int8_t x630 = -1;
	int8_t x631 = INT8_MAX;
	volatile uint16_t x632 = UINT16_MAX;
	int32_t t133 = -183;

    t133 = (((x629<=x630)-x631)/x632);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint32_t x633 = 2U;
	int16_t x634 = -1;
	static uint16_t x635 = 19U;
	uint8_t x636 = 5U;
	static int32_t t134 = 25998;

    t134 = (((x633<=x634)-x635)/x636);

    if (t134 != -3) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x638 = 0;
	int64_t x639 = -1LL;
	uint8_t x640 = 6U;
	int64_t t135 = -1600274LL;

    t135 = (((x637<=x638)-x639)/x640);

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x641 = -43;
	uint32_t x642 = UINT32_MAX;
	int32_t x643 = INT32_MAX;
	int64_t x644 = INT64_MIN;
	volatile int64_t t136 = -2586324448295702LL;

    t136 = (((x641<=x642)-x643)/x644);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x649 = -254;
	int64_t x650 = -1LL;
	uint16_t x651 = 8162U;
	volatile int16_t x652 = INT16_MIN;
	volatile int32_t t137 = -8051;

    t137 = (((x649<=x650)-x651)/x652);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x653 = INT8_MAX;
	uint64_t x654 = UINT64_MAX;
	uint64_t x655 = 4180067LLU;
	static int8_t x656 = INT8_MIN;
	volatile uint64_t t138 = 5883575752118LLU;

    t138 = (((x653<=x654)-x655)/x656);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x659 = INT16_MIN;
	volatile int32_t t139 = 5702611;

    t139 = (((x657<=x658)-x659)/x660);

    if (t139 != 324) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x661 = 1LLU;
	uint64_t x662 = 16960540833749021LLU;
	int16_t x663 = INT16_MIN;
	int64_t x664 = INT64_MAX;
	int64_t t140 = -669473596687788LL;

    t140 = (((x661<=x662)-x663)/x664);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x665 = -1615;
	int32_t x666 = 2;
	int64_t x668 = INT64_MIN;

    t141 = (((x665<=x666)-x667)/x668);

    if (t141 != 0LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int64_t x669 = 2087050LL;
	static volatile uint8_t x670 = 16U;
	volatile int64_t x672 = 32LL;

    t142 = (((x669<=x670)-x671)/x672);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x673 = UINT64_MAX;
	static int64_t x674 = -396145506230111581LL;
	uint64_t x676 = 307678438188LLU;

    t143 = (((x673<=x674)-x675)/x676);

    if (t143 != 59954620LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x677 = 1045089U;
	volatile int16_t x678 = INT16_MIN;
	int16_t x679 = 2;
	static volatile int16_t x680 = INT16_MIN;
	int32_t t144 = -122858;

    t144 = (((x677<=x678)-x679)/x680);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x685 = 3357775LLU;
	static volatile int32_t x686 = INT32_MIN;
	int16_t x687 = INT16_MIN;
	int16_t x688 = INT16_MAX;

    t145 = (((x685<=x686)-x687)/x688);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x689 = INT64_MIN;
	static uint16_t x690 = 18177U;
	int64_t x691 = INT64_MAX;
	volatile int64_t t146 = -4031674LL;

    t146 = (((x689<=x690)-x691)/x692);

    if (t146 != -485440633518672410LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x705 = INT16_MIN;
	int64_t x706 = -511503864657712LL;
	int16_t x707 = INT16_MIN;
	volatile int64_t x708 = -1LL;
	int64_t t147 = 90071663LL;

    t147 = (((x705<=x706)-x707)/x708);

    if (t147 != -32768LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x709 = -11596;
	uint32_t x710 = 56358U;
	volatile uint16_t x711 = 55U;
	static volatile int32_t t148 = -126432418;

    t148 = (((x709<=x710)-x711)/x712);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x714 = 57;
	static volatile uint64_t x716 = 67360LLU;
	uint64_t t149 = 8048594LLU;

    t149 = (((x713<=x714)-x715)/x716);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x717 = INT16_MIN;
	uint16_t x718 = 3198U;
	static uint32_t x719 = UINT32_MAX;
	volatile int64_t x720 = INT64_MIN;

    t150 = (((x717<=x718)-x719)/x720);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x721 = -1LL;
	int16_t x722 = -9737;
	int16_t x723 = INT16_MAX;
	volatile uint16_t x724 = 3U;

    t151 = (((x721<=x722)-x723)/x724);

    if (t151 != -10922) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = 1;
	static uint64_t x726 = 319201154LLU;
	uint32_t x727 = 439687U;
	int64_t x728 = INT64_MIN;
	volatile int64_t t152 = 2559156913560984574LL;

    t152 = (((x725<=x726)-x727)/x728);

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x729 = UINT64_MAX;
	volatile uint32_t x731 = UINT32_MAX;
	uint8_t x732 = 4U;
	static uint32_t t153 = 6459825U;

    t153 = (((x729<=x730)-x731)/x732);

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x733 = INT32_MIN;
	uint16_t x734 = 18862U;
	uint64_t x735 = UINT64_MAX;
	int8_t x736 = INT8_MIN;
	uint64_t t154 = 2141765507LLU;

    t154 = (((x733<=x734)-x735)/x736);

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x739 = 2U;
	volatile int32_t x740 = INT32_MAX;
	volatile uint32_t t155 = 0U;

    t155 = (((x737<=x738)-x739)/x740);

    if (t155 != 2U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x741 = 12U;
	volatile int64_t x742 = INT64_MAX;
	static int8_t x743 = -1;
	volatile int32_t t156 = -27;

    t156 = (((x741<=x742)-x743)/x744);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x747 = 2U;
	volatile int64_t x748 = INT64_MIN;
	int64_t t157 = 11447689592605817LL;

    t157 = (((x745<=x746)-x747)/x748);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int8_t x750 = -4;
	int8_t x751 = -1;
	static int16_t x752 = -13;
	volatile int32_t t158 = 3;

    t158 = (((x749<=x750)-x751)/x752);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x753 = -2;
	uint8_t x754 = 101U;
	static int16_t x755 = -1;
	volatile int64_t x756 = -1LL;
	int64_t t159 = -287879935930895LL;

    t159 = (((x753<=x754)-x755)/x756);

    if (t159 != -2LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x757 = INT8_MIN;
	volatile uint64_t x758 = 38891218053LLU;
	int8_t x759 = 21;
	volatile int16_t x760 = INT16_MIN;

    t160 = (((x757<=x758)-x759)/x760);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x761 = INT8_MIN;
	int16_t x763 = INT16_MAX;
	int32_t x764 = 675;

    t161 = (((x761<=x762)-x763)/x764);

    if (t161 != -48) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x765 = INT64_MAX;
	int32_t x766 = -1;
	static int64_t x767 = -149687295972LL;

    t162 = (((x765<=x766)-x767)/x768);

    if (t162 != 77681LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x769 = 32;
	volatile int8_t x770 = INT8_MIN;
	int16_t x771 = -6;
	static int8_t x772 = INT8_MIN;
	int32_t t163 = 1;

    t163 = (((x769<=x770)-x771)/x772);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int32_t x780 = INT32_MIN;

    t164 = (((x777<=x778)-x779)/x780);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x781 = -1LL;
	volatile int64_t x782 = INT64_MAX;
	static uint16_t x783 = 627U;
	int32_t x784 = INT32_MIN;
	volatile int32_t t165 = -642975;

    t165 = (((x781<=x782)-x783)/x784);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x785 = UINT64_MAX;
	int16_t x786 = INT16_MIN;
	int8_t x787 = 0;
	volatile uint16_t x788 = 12U;

    t166 = (((x785<=x786)-x787)/x788);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x789 = 48;
	volatile int64_t x790 = INT64_MIN;
	volatile int8_t x791 = 14;
	volatile uint16_t x792 = UINT16_MAX;
	volatile int32_t t167 = -1767377;

    t167 = (((x789<=x790)-x791)/x792);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x793 = INT8_MIN;
	int32_t x794 = 4;
	volatile int16_t x795 = INT16_MIN;
	int32_t t168 = 5;

    t168 = (((x793<=x794)-x795)/x796);

    if (t168 != 8192) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x797 = -1;
	int64_t x798 = INT64_MIN;
	int16_t x799 = INT16_MIN;
	int64_t x800 = 11939909017476LL;
	static int64_t t169 = -7990523602LL;

    t169 = (((x797<=x798)-x799)/x800);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x801 = UINT16_MAX;
	int8_t x803 = 0;
	int16_t x804 = INT16_MAX;
	volatile int32_t t170 = 32135;

    t170 = (((x801<=x802)-x803)/x804);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x809 = INT16_MIN;
	static int8_t x811 = 15;
	int16_t x812 = -1;
	volatile int32_t t171 = -223040579;

    t171 = (((x809<=x810)-x811)/x812);

    if (t171 != 14) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x813 = 62;
	int32_t x814 = 0;
	static volatile int32_t x815 = INT32_MAX;
	volatile int16_t x816 = INT16_MIN;
	int32_t t172 = 1;

    t172 = (((x813<=x814)-x815)/x816);

    if (t172 != 65535) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x817 = -1;
	uint32_t x818 = UINT32_MAX;
	volatile int16_t x819 = 2932;
	int32_t t173 = 30;

    t173 = (((x817<=x818)-x819)/x820);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	static int64_t x822 = 67038112340796LL;
	int8_t x823 = INT8_MAX;
	volatile uint16_t x824 = UINT16_MAX;
	int32_t t174 = -342342639;

    t174 = (((x821<=x822)-x823)/x824);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x825 = UINT8_MAX;
	uint16_t x826 = 469U;
	uint32_t x827 = 2014U;
	int64_t x828 = INT64_MAX;
	int64_t t175 = -723608354LL;

    t175 = (((x825<=x826)-x827)/x828);

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x830 = INT64_MIN;
	static int64_t x831 = -1LL;
	int8_t x832 = INT8_MIN;

    t176 = (((x829<=x830)-x831)/x832);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x841 = INT32_MIN;
	static volatile int8_t x842 = INT8_MIN;
	uint16_t x843 = 7U;
	volatile int32_t x844 = INT32_MIN;
	volatile int32_t t177 = -1521;

    t177 = (((x841<=x842)-x843)/x844);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x845 = 164033U;
	static uint16_t x846 = UINT16_MAX;
	int64_t t178 = 1788456LL;

    t178 = (((x845<=x846)-x847)/x848);

    if (t178 != 188232082384791343LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x849 = INT64_MIN;
	volatile uint32_t x850 = UINT32_MAX;
	static int8_t x851 = INT8_MIN;
	int16_t x852 = -2;
	volatile int32_t t179 = -822923717;

    t179 = (((x849<=x850)-x851)/x852);

    if (t179 != -64) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x853 = 2;
	int64_t x855 = 1LL;
	uint16_t x856 = UINT16_MAX;
	static int64_t t180 = -216583931LL;

    t180 = (((x853<=x854)-x855)/x856);

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x857 = 86298LLU;
	int16_t x858 = INT16_MAX;
	int64_t x859 = -1LL;
	uint32_t x860 = 1217U;

    t181 = (((x857<=x858)-x859)/x860);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x861 = -1;
	static int16_t x862 = -89;
	uint8_t x863 = 29U;
	static uint16_t x864 = 5U;
	int32_t t182 = -6057;

    t182 = (((x861<=x862)-x863)/x864);

    if (t182 != -5) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x865 = 948808LL;
	volatile uint16_t x866 = UINT16_MAX;
	int8_t x867 = INT8_MIN;
	uint64_t x868 = UINT64_MAX;

    t183 = (((x865<=x866)-x867)/x868);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x869 = -1;
	int32_t x870 = INT32_MIN;
	int8_t x871 = -1;
	volatile int32_t t184 = -1630438;

    t184 = (((x869<=x870)-x871)/x872);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x877 = 1;
	int16_t x880 = INT16_MAX;
	volatile uint32_t t185 = 15871U;

    t185 = (((x877<=x878)-x879)/x880);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x885 = INT32_MIN;
	volatile uint64_t x887 = 18163413014LLU;
	int64_t x888 = INT64_MAX;
	uint64_t t186 = 1854199LLU;

    t186 = (((x885<=x886)-x887)/x888);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x889 = INT32_MIN;
	int16_t x890 = INT16_MAX;
	int32_t x891 = INT32_MAX;
	volatile int64_t x892 = INT64_MAX;
	volatile int64_t t187 = -280990933309085711LL;

    t187 = (((x889<=x890)-x891)/x892);

    if (t187 != 0LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x893 = INT64_MIN;
	volatile int8_t x894 = INT8_MIN;
	int64_t x895 = 1510898843653293LL;
	int64_t x896 = INT64_MIN;
	volatile int64_t t188 = -31446386988848732LL;

    t188 = (((x893<=x894)-x895)/x896);

    if (t188 != 0LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x897 = -1;
	int32_t x898 = INT32_MIN;
	volatile int16_t x899 = INT16_MIN;
	volatile int32_t t189 = -61;

    t189 = (((x897<=x898)-x899)/x900);

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x901 = 5258U;
	int16_t x902 = -1;
	static uint8_t x903 = 126U;

    t190 = (((x901<=x902)-x903)/x904);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x905 = INT32_MIN;
	uint16_t x906 = UINT16_MAX;
	volatile uint16_t x907 = 835U;
	int32_t x908 = -1;
	int32_t t191 = -1356691;

    t191 = (((x905<=x906)-x907)/x908);

    if (t191 != 834) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x909 = 496691638508326LLU;
	uint16_t x910 = 2351U;
	int64_t x911 = -1LL;
	volatile int64_t t192 = -245LL;

    t192 = (((x909<=x910)-x911)/x912);

    if (t192 != -1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t t193 = 58403;

    t193 = (((x913<=x914)-x915)/x916);

    if (t193 != 23) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x917 = 1;
	int32_t x918 = 27;
	uint8_t x919 = 0U;
	uint64_t x920 = UINT64_MAX;
	static volatile uint64_t t194 = 302529775LLU;

    t194 = (((x917<=x918)-x919)/x920);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x921 = -1LL;
	int8_t x922 = -1;
	int16_t x924 = -3;
	int64_t t195 = 7410662LL;

    t195 = (((x921<=x922)-x923)/x924);

    if (t195 != 443LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x926 = INT16_MIN;
	int32_t x927 = -165356729;
	volatile int32_t t196 = 1;

    t196 = (((x925<=x926)-x927)/x928);

    if (t196 != -260815) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x929 = INT64_MIN;
	static volatile uint32_t x930 = UINT32_MAX;
	uint8_t x931 = 0U;
	uint16_t x932 = 8995U;

    t197 = (((x929<=x930)-x931)/x932);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x935 = -19;
	uint64_t x936 = UINT64_MAX;
	volatile uint64_t t198 = 1769171449243216503LLU;

    t198 = (((x933<=x934)-x935)/x936);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x938 = 23;
	int8_t x940 = 4;
	int32_t t199 = -99267;

    t199 = (((x937<=x938)-x939)/x940);

    if (t199 != 8192) { NG(); } else { ; }
	
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

