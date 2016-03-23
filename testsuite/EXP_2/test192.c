
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

int8_t x13 = -1;
int8_t x14 = -1;
uint32_t x19 = 1U;
static uint64_t x25 = 766LLU;
int8_t x36 = INT8_MAX;
int16_t x42 = INT16_MIN;
int32_t t9 = -5;
static uint32_t x53 = UINT32_MAX;
uint64_t x62 = 841005LLU;
uint16_t x71 = 36U;
int8_t x72 = 0;
int16_t x91 = 14236;
static volatile int32_t t18 = -13734;
int16_t x94 = 3;
static volatile uint32_t x97 = 1159U;
volatile int32_t x100 = -1;
static int32_t x103 = -592;
int32_t t21 = 3;
uint64_t x107 = UINT64_MAX;
volatile int64_t x111 = INT64_MIN;
volatile int32_t t23 = 35;
int32_t x113 = -235;
int32_t t26 = -6967;
static volatile int32_t t27 = -13543;
static uint32_t x131 = 18770459U;
volatile uint8_t x132 = UINT8_MAX;
volatile int32_t x133 = -283;
int8_t x140 = 0;
int64_t x174 = 299451867762LL;
int32_t t37 = -1;
volatile uint8_t x197 = 0U;
uint16_t x198 = UINT16_MAX;
uint16_t x200 = UINT16_MAX;
uint8_t x202 = 6U;
volatile int64_t x215 = -1LL;
volatile int32_t x226 = INT32_MAX;
static uint8_t x231 = 0U;
static uint16_t x235 = UINT16_MAX;
uint8_t x237 = 20U;
int16_t x238 = INT16_MIN;
int32_t t50 = 1;
uint32_t x248 = 7063U;
int8_t x251 = -1;
uint64_t x252 = UINT64_MAX;
int32_t t53 = -1500;
volatile uint64_t x262 = 1285458757707752822LLU;
volatile uint64_t x268 = 230457LLU;
static uint64_t x272 = 2033830264371149961LLU;
int8_t x275 = 1;
uint16_t x277 = 3478U;
uint64_t x280 = UINT64_MAX;
int32_t x281 = -271;
int32_t x283 = INT32_MIN;
static int32_t x289 = -1;
volatile uint64_t x298 = 2288LLU;
int64_t x299 = INT64_MIN;
static volatile int16_t x301 = -1;
volatile int32_t t65 = 1;
static volatile int64_t x316 = -343366LL;
volatile uint64_t x319 = UINT64_MAX;
uint8_t x320 = 4U;
static int32_t t69 = -4653;
static volatile uint32_t x334 = UINT32_MAX;
volatile int32_t t70 = 12779;
int16_t x337 = 1;
uint32_t x340 = 1299U;
int64_t x345 = -40690LL;
int8_t x350 = INT8_MIN;
static int16_t x352 = -608;
volatile int8_t x361 = 16;
static int16_t x363 = -1;
volatile int32_t t78 = 571226;
uint16_t x371 = 3147U;
uint16_t x383 = UINT16_MAX;
int32_t x386 = INT32_MIN;
volatile uint16_t x388 = 1U;
int32_t t82 = -19838170;
uint64_t x406 = 105117644LLU;
volatile int16_t x413 = INT16_MAX;
int32_t t87 = -33;
uint16_t x417 = UINT16_MAX;
volatile int8_t x418 = -1;
int64_t x442 = -1469299054613272530LL;
int8_t x446 = INT8_MIN;
int32_t x447 = 21;
volatile uint32_t x449 = UINT32_MAX;
int32_t x451 = -1;
int32_t t96 = -144219;
uint16_t x469 = 9505U;
static int64_t x471 = -2011724999647566LL;
uint32_t x472 = 991U;
volatile int16_t x474 = INT16_MIN;
int32_t x482 = INT32_MIN;
volatile int32_t t102 = -96;
volatile int8_t x490 = 1;
int64_t x497 = INT64_MIN;
int8_t x519 = 7;
volatile int32_t t107 = 4629;
uint16_t x523 = 100U;
volatile uint64_t x528 = 2391LLU;
int8_t x532 = INT8_MIN;
int32_t t112 = 201;
uint16_t x552 = UINT16_MAX;
volatile int32_t t114 = -5503538;
int16_t x558 = -1;
int16_t x561 = -1;
int32_t t120 = 80122;
int32_t t122 = -55;
int8_t x596 = INT8_MAX;
volatile int32_t t124 = -17;
int64_t x606 = -881LL;
volatile int64_t x608 = INT64_MIN;
static int8_t x610 = -1;
volatile int16_t x623 = -1;
uint8_t x630 = UINT8_MAX;
int64_t x640 = 446639646964520LL;
uint16_t x644 = 61U;
static uint64_t x646 = 80779831LLU;
int16_t x648 = INT16_MIN;
static int32_t t134 = 123896;
int64_t x653 = 1LL;
int8_t x654 = 8;
volatile uint8_t x658 = 7U;
uint16_t x663 = UINT16_MAX;
int8_t x664 = -1;
static int32_t t137 = 672238;
int8_t x672 = -1;
uint16_t x685 = 4U;
uint16_t x687 = UINT16_MAX;
static int32_t x702 = 10664789;
volatile int32_t t146 = -449964;
volatile int32_t x711 = -1;
int32_t x715 = 1621;
static uint32_t x717 = UINT32_MAX;
uint8_t x720 = UINT8_MAX;
uint32_t x726 = 476964371U;
int32_t x727 = -176248;
uint8_t x733 = 3U;
int64_t x735 = INT64_MIN;
uint32_t x740 = 40057U;
int64_t x741 = 1319599624LL;
uint64_t x742 = UINT64_MAX;
int32_t t156 = 1;
int64_t x755 = -430019LL;
volatile int32_t t158 = -21;
uint32_t x759 = UINT32_MAX;
volatile int16_t x772 = 0;
uint64_t x777 = 7685605LLU;
int64_t x779 = INT64_MAX;
volatile int32_t t163 = -10157;
int32_t x786 = -332422;
volatile int32_t t165 = -48246268;
static int16_t x789 = INT16_MIN;
uint64_t x807 = UINT64_MAX;
uint32_t x810 = 196976U;
static int32_t t171 = -239701;
uint8_t x819 = UINT8_MAX;
int16_t x821 = INT16_MAX;
volatile int8_t x825 = INT8_MAX;
int16_t x828 = INT16_MIN;
int64_t x830 = 33209310411LL;
int8_t x834 = -1;
volatile uint16_t x835 = 0U;
int32_t t180 = -946;
static volatile int32_t t181 = 45399806;
volatile int16_t x859 = INT16_MIN;
int32_t x871 = INT32_MAX;
static int16_t x880 = INT16_MIN;
int64_t x885 = -1LL;
int32_t t188 = -1;
int8_t x891 = INT8_MIN;
uint16_t x903 = 2U;
volatile uint64_t x906 = UINT64_MAX;
int8_t x907 = INT8_MAX;
int64_t x916 = INT64_MIN;
int64_t x921 = -49325196019604864LL;
volatile int64_t x923 = INT64_MIN;
static volatile int32_t t197 = -12515014;
int8_t x925 = INT8_MIN;
int32_t t198 = 281;
volatile int8_t x930 = INT8_MAX;


void f0(void) {
    	volatile uint16_t x5 = 0U;
	int32_t x6 = -1;
	uint16_t x7 = 74U;
	int8_t x8 = INT8_MIN;
	int32_t t0 = -21;

    t0 = ((x5^(x6+x7))<=x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x9 = 660898U;
	int16_t x10 = -5363;
	static int64_t x11 = INT64_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	int32_t t1 = 128193195;

    t1 = ((x9^(x10+x11))<=x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x15 = UINT8_MAX;
	int32_t x16 = INT32_MAX;
	int32_t t2 = 0;

    t2 = ((x13^(x14+x15))<=x16);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x17 = -21231889195379901LL;
	int32_t x18 = 368643;
	int8_t x20 = -31;
	volatile int32_t t3 = 3592396;

    t3 = ((x17^(x18+x19))<=x20);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = 36;
	int16_t x22 = -3;
	int8_t x23 = -1;
	int32_t x24 = INT32_MIN;
	int32_t t4 = 6672;

    t4 = ((x21^(x22+x23))<=x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x26 = INT64_MIN;
	static int16_t x27 = INT16_MAX;
	static volatile int16_t x28 = INT16_MIN;
	volatile int32_t t5 = 8245730;

    t5 = ((x25^(x26+x27))<=x28);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x29 = 126535;
	uint64_t x30 = UINT64_MAX;
	uint64_t x31 = 60778LLU;
	int64_t x32 = INT64_MAX;
	static int32_t t6 = -458;

    t6 = ((x29^(x30+x31))<=x32);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x33 = -1;
	int32_t x34 = 25880192;
	int8_t x35 = -5;
	int32_t t7 = 15;

    t7 = ((x33^(x34+x35))<=x36);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x37 = 5768355259054559027LLU;
	uint32_t x38 = UINT32_MAX;
	volatile int64_t x39 = -1LL;
	volatile int64_t x40 = 15093295546532LL;
	volatile int32_t t8 = -59992044;

    t8 = ((x37^(x38+x39))<=x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 12U;
	uint8_t x43 = 0U;
	uint64_t x44 = 15080691413LLU;

    t9 = ((x41^(x42+x43))<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = -1;
	static uint8_t x46 = 1U;
	int16_t x47 = -1;
	static uint32_t x48 = UINT32_MAX;
	volatile int32_t t10 = -486962;

    t10 = ((x45^(x46+x47))<=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x54 = 0;
	int16_t x55 = 209;
	static uint8_t x56 = UINT8_MAX;
	volatile int32_t t11 = 127113661;

    t11 = ((x53^(x54+x55))<=x56);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x57 = -1;
	int16_t x58 = INT16_MAX;
	uint8_t x59 = 103U;
	int64_t x60 = -50867493199236742LL;
	static volatile int32_t t12 = 11974;

    t12 = ((x57^(x58+x59))<=x60);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static int16_t x61 = -7859;
	volatile int64_t x63 = INT64_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t13 = -50;

    t13 = ((x61^(x62+x63))<=x64);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint32_t x65 = 148U;
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = 13;
	uint64_t x68 = UINT64_MAX;
	int32_t t14 = 483;

    t14 = ((x65^(x66+x67))<=x68);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x69 = INT16_MIN;
	int64_t x70 = -1LL;
	int32_t t15 = -3;

    t15 = ((x69^(x70+x71))<=x72);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x73 = 2371U;
	int16_t x74 = 3;
	uint32_t x75 = 2106215302U;
	int64_t x76 = INT64_MAX;
	volatile int32_t t16 = -429500528;

    t16 = ((x73^(x74+x75))<=x76);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x81 = 2U;
	static int8_t x82 = INT8_MAX;
	int16_t x83 = 1;
	static int32_t x84 = INT32_MAX;
	static int32_t t17 = -8651286;

    t17 = ((x81^(x82+x83))<=x84);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x89 = INT16_MIN;
	uint8_t x90 = UINT8_MAX;
	int64_t x92 = INT64_MAX;

    t18 = ((x89^(x90+x91))<=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = INT64_MAX;
	uint64_t x95 = UINT64_MAX;
	int64_t x96 = INT64_MAX;
	int32_t t19 = 180657900;

    t19 = ((x93^(x94+x95))<=x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x98 = INT8_MIN;
	static uint16_t x99 = UINT16_MAX;
	volatile int32_t t20 = 92324060;

    t20 = ((x97^(x98+x99))<=x100);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x101 = INT32_MIN;
	uint16_t x102 = 319U;
	uint64_t x104 = 11621LLU;

    t21 = ((x101^(x102+x103))<=x104);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = INT64_MAX;
	int8_t x108 = -1;
	volatile int32_t t22 = -2349;

    t22 = ((x105^(x106+x107))<=x108);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x109 = UINT16_MAX;
	int64_t x110 = 423792LL;
	int16_t x112 = -1;

    t23 = ((x109^(x110+x111))<=x112);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x114 = 1621;
	static int8_t x115 = -1;
	static int16_t x116 = 3040;
	volatile int32_t t24 = -78;

    t24 = ((x113^(x114+x115))<=x116);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = 501197U;
	int32_t x119 = 538490;
	static volatile int16_t x120 = 9;
	volatile int32_t t25 = 36880;

    t25 = ((x117^(x118+x119))<=x120);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = UINT64_MAX;
	uint16_t x122 = 212U;
	int64_t x123 = 27532LL;
	int8_t x124 = INT8_MIN;

    t26 = ((x121^(x122+x123))<=x124);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x125 = INT16_MIN;
	volatile int64_t x126 = INT64_MIN;
	static uint8_t x127 = 122U;
	int16_t x128 = INT16_MAX;

    t27 = ((x125^(x126+x127))<=x128);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x129 = UINT8_MAX;
	int32_t x130 = INT32_MIN;
	static int32_t t28 = 14750874;

    t28 = ((x129^(x130+x131))<=x132);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x134 = INT64_MIN;
	uint32_t x135 = UINT32_MAX;
	int16_t x136 = INT16_MAX;
	volatile int32_t t29 = 0;

    t29 = ((x133^(x134+x135))<=x136);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x137 = 3U;
	static int64_t x138 = -1LL;
	static int16_t x139 = INT16_MIN;
	int32_t t30 = -491005;

    t30 = ((x137^(x138+x139))<=x140);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x141 = INT16_MIN;
	int64_t x142 = 123397512274794436LL;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 175087U;
	int32_t t31 = -113;

    t31 = ((x141^(x142+x143))<=x144);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = -1LL;
	uint8_t x150 = 54U;
	int64_t x151 = -55LL;
	volatile uint32_t x152 = UINT32_MAX;
	volatile int32_t t32 = -13;

    t32 = ((x149^(x150+x151))<=x152);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x157 = 491U;
	int8_t x158 = INT8_MAX;
	int32_t x159 = -48;
	int32_t x160 = 39886171;
	int32_t t33 = -1399440;

    t33 = ((x157^(x158+x159))<=x160);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x161 = 3;
	static int8_t x162 = 0;
	static int8_t x163 = 1;
	uint32_t x164 = 22086U;
	int32_t t34 = -180;

    t34 = ((x161^(x162+x163))<=x164);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x173 = 2LLU;
	volatile uint32_t x175 = 67409587U;
	int16_t x176 = -21;
	volatile int32_t t35 = 4634713;

    t35 = ((x173^(x174+x175))<=x176);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x177 = INT8_MIN;
	static int16_t x178 = -7;
	int16_t x179 = -50;
	static int16_t x180 = -1;
	int32_t t36 = 241;

    t36 = ((x177^(x178+x179))<=x180);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 2U;
	int16_t x183 = -1;
	static int16_t x184 = INT16_MAX;

    t37 = ((x181^(x182+x183))<=x184);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x185 = 493U;
	int64_t x186 = -1LL;
	volatile int16_t x187 = INT16_MIN;
	static int64_t x188 = INT64_MAX;
	int32_t t38 = 761005186;

    t38 = ((x185^(x186+x187))<=x188);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x189 = -1LL;
	uint8_t x190 = UINT8_MAX;
	static int16_t x191 = INT16_MAX;
	volatile int8_t x192 = INT8_MIN;
	int32_t t39 = -29562111;

    t39 = ((x189^(x190+x191))<=x192);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x193 = -14620;
	uint64_t x194 = 665309416LLU;
	static int32_t x195 = -1;
	uint8_t x196 = UINT8_MAX;
	int32_t t40 = 17;

    t40 = ((x193^(x194+x195))<=x196);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x199 = 2U;
	int32_t t41 = 102946;

    t41 = ((x197^(x198+x199))<=x200);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x201 = 1LLU;
	static int8_t x203 = 0;
	uint8_t x204 = 56U;
	int32_t t42 = -89;

    t42 = ((x201^(x202+x203))<=x204);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x205 = -29;
	static volatile int64_t x206 = 0LL;
	int64_t x207 = -1466697LL;
	int64_t x208 = INT64_MAX;
	volatile int32_t t43 = 8124036;

    t43 = ((x205^(x206+x207))<=x208);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x213 = UINT64_MAX;
	volatile int16_t x214 = INT16_MIN;
	static int8_t x216 = INT8_MIN;
	int32_t t44 = -19377665;

    t44 = ((x213^(x214+x215))<=x216);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	static volatile uint32_t x217 = 12277U;
	uint16_t x218 = UINT16_MAX;
	int16_t x219 = -1323;
	int8_t x220 = -1;
	volatile int32_t t45 = 102936082;

    t45 = ((x217^(x218+x219))<=x220);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x221 = INT64_MAX;
	uint8_t x222 = UINT8_MAX;
	int64_t x223 = 168LL;
	int16_t x224 = -1;
	static int32_t t46 = 16156;

    t46 = ((x221^(x222+x223))<=x224);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x225 = UINT16_MAX;
	int32_t x227 = INT32_MIN;
	static uint64_t x228 = 315988785157474748LLU;
	volatile int32_t t47 = -191;

    t47 = ((x225^(x226+x227))<=x228);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x229 = 1235935284U;
	int16_t x230 = -1;
	volatile int32_t x232 = -450;
	int32_t t48 = -14035;

    t48 = ((x229^(x230+x231))<=x232);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x233 = 0U;
	volatile int16_t x234 = INT16_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t49 = -27022925;

    t49 = ((x233^(x234+x235))<=x236);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x239 = 1952LL;
	uint8_t x240 = 13U;

    t50 = ((x237^(x238+x239))<=x240);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x245 = 204209846160467LLU;
	uint64_t x246 = UINT64_MAX;
	volatile int32_t x247 = INT32_MAX;
	int32_t t51 = -1;

    t51 = ((x245^(x246+x247))<=x248);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x249 = 7U;
	static volatile int64_t x250 = -54587927LL;
	volatile int32_t t52 = 65614608;

    t52 = ((x249^(x250+x251))<=x252);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x253 = UINT16_MAX;
	static uint8_t x254 = 1U;
	volatile uint32_t x255 = 3900U;
	static uint8_t x256 = UINT8_MAX;

    t53 = ((x253^(x254+x255))<=x256);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x257 = -761801758LL;
	int16_t x258 = 1;
	int64_t x259 = INT64_MIN;
	static uint16_t x260 = 20U;
	volatile int32_t t54 = -1010746271;

    t54 = ((x257^(x258+x259))<=x260);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x261 = INT16_MIN;
	static int8_t x263 = 9;
	static volatile int8_t x264 = INT8_MAX;
	int32_t t55 = 72;

    t55 = ((x261^(x262+x263))<=x264);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x265 = INT64_MIN;
	int32_t x266 = -1;
	uint64_t x267 = 80LLU;
	int32_t t56 = 41;

    t56 = ((x265^(x266+x267))<=x268);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x269 = 24710U;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = 3400U;
	volatile int32_t t57 = -390055121;

    t57 = ((x269^(x270+x271))<=x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x273 = INT16_MAX;
	static int16_t x274 = INT16_MIN;
	volatile uint16_t x276 = 193U;
	int32_t t58 = -57;

    t58 = ((x273^(x274+x275))<=x276);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x278 = INT16_MIN;
	int16_t x279 = INT16_MIN;
	static volatile int32_t t59 = 268999;

    t59 = ((x277^(x278+x279))<=x280);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint64_t x282 = UINT64_MAX;
	volatile int32_t x284 = -1;
	volatile int32_t t60 = -22;

    t60 = ((x281^(x282+x283))<=x284);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x285 = INT32_MIN;
	int32_t x286 = 16160;
	int64_t x287 = 262057175318106LL;
	int16_t x288 = -1;
	int32_t t61 = 711;

    t61 = ((x285^(x286+x287))<=x288);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile uint32_t x290 = 228U;
	int32_t x291 = -1;
	uint32_t x292 = UINT32_MAX;
	int32_t t62 = 6;

    t62 = ((x289^(x290+x291))<=x292);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x293 = -1;
	volatile int64_t x294 = -1091132724718423198LL;
	uint64_t x295 = 262433987LLU;
	uint8_t x296 = 36U;
	volatile int32_t t63 = -2;

    t63 = ((x293^(x294+x295))<=x296);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile uint32_t x297 = 29069642U;
	int64_t x300 = INT64_MAX;
	volatile int32_t t64 = 3243;

    t64 = ((x297^(x298+x299))<=x300);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x302 = -4;
	int64_t x303 = -419035736LL;
	static int8_t x304 = INT8_MIN;

    t65 = ((x301^(x302+x303))<=x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x309 = -1;
	uint64_t x310 = 13LLU;
	uint32_t x311 = 278238U;
	uint32_t x312 = 1105318U;
	volatile int32_t t66 = -31083821;

    t66 = ((x309^(x310+x311))<=x312);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = UINT32_MAX;
	int16_t x315 = INT16_MIN;
	volatile int32_t t67 = 6;

    t67 = ((x313^(x314+x315))<=x316);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x317 = UINT64_MAX;
	static volatile int16_t x318 = 43;
	volatile int32_t t68 = 11;

    t68 = ((x317^(x318+x319))<=x320);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = INT32_MIN;
	volatile int8_t x322 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	int64_t x324 = -1LL;

    t69 = ((x321^(x322+x323))<=x324);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = 3698;
	int32_t x335 = INT32_MAX;
	static int16_t x336 = INT16_MAX;

    t70 = ((x333^(x334+x335))<=x336);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int32_t t71 = 1865320;

    t71 = ((x337^(x338+x339))<=x340);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x341 = -1416LL;
	volatile int16_t x342 = INT16_MIN;
	static int32_t x343 = INT32_MAX;
	static volatile uint8_t x344 = 4U;
	int32_t t72 = 14;

    t72 = ((x341^(x342+x343))<=x344);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x346 = UINT32_MAX;
	int8_t x347 = -1;
	uint16_t x348 = 25U;
	volatile int32_t t73 = -1;

    t73 = ((x345^(x346+x347))<=x348);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x349 = INT16_MIN;
	int8_t x351 = 6;
	static int32_t t74 = -257977703;

    t74 = ((x349^(x350+x351))<=x352);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x353 = 549;
	uint32_t x354 = 2U;
	int64_t x355 = INT64_MIN;
	volatile int16_t x356 = INT16_MIN;
	int32_t t75 = 59305;

    t75 = ((x353^(x354+x355))<=x356);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x357 = 16U;
	int64_t x358 = 523342508LL;
	volatile uint8_t x359 = 1U;
	int8_t x360 = 0;
	volatile int32_t t76 = 13524;

    t76 = ((x357^(x358+x359))<=x360);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x362 = -1;
	uint64_t x364 = 112LLU;
	volatile int32_t t77 = 384204;

    t77 = ((x361^(x362+x363))<=x364);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x365 = 62U;
	volatile int8_t x366 = -1;
	int16_t x367 = INT16_MAX;
	uint8_t x368 = UINT8_MAX;

    t78 = ((x365^(x366+x367))<=x368);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x369 = 5873478109605951LL;
	int8_t x370 = -53;
	uint64_t x372 = UINT64_MAX;
	int32_t t79 = 381;

    t79 = ((x369^(x370+x371))<=x372);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x381 = INT64_MIN;
	volatile uint16_t x382 = 29U;
	uint64_t x384 = UINT64_MAX;
	static int32_t t80 = -52345;

    t80 = ((x381^(x382+x383))<=x384);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x385 = -200051544LL;
	int64_t x387 = -189449571LL;
	int32_t t81 = 55843;

    t81 = ((x385^(x386+x387))<=x388);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x389 = INT16_MAX;
	int16_t x390 = -1;
	volatile int8_t x391 = 3;
	static int32_t x392 = -1;

    t82 = ((x389^(x390+x391))<=x392);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x393 = 97U;
	volatile int16_t x394 = -1;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 25319892U;
	static volatile int32_t t83 = -14;

    t83 = ((x393^(x394+x395))<=x396);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x397 = 930U;
	static uint8_t x398 = 24U;
	static int8_t x399 = INT8_MIN;
	int8_t x400 = -1;
	int32_t t84 = 767732;

    t84 = ((x397^(x398+x399))<=x400);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x405 = INT16_MIN;
	uint64_t x407 = 1809LLU;
	static int8_t x408 = 54;
	static volatile int32_t t85 = 52;

    t85 = ((x405^(x406+x407))<=x408);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x409 = -29;
	int8_t x410 = INT8_MAX;
	int32_t x411 = INT32_MIN;
	static uint8_t x412 = UINT8_MAX;
	volatile int32_t t86 = 8;

    t86 = ((x409^(x410+x411))<=x412);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x414 = INT16_MAX;
	int32_t x415 = INT32_MIN;
	static int64_t x416 = INT64_MAX;

    t87 = ((x413^(x414+x415))<=x416);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x419 = -1;
	static int64_t x420 = -1LL;
	int32_t t88 = 211182935;

    t88 = ((x417^(x418+x419))<=x420);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x421 = 948U;
	uint64_t x422 = UINT64_MAX;
	static uint32_t x423 = 1251459326U;
	static uint64_t x424 = 693250LLU;
	volatile int32_t t89 = 12;

    t89 = ((x421^(x422+x423))<=x424);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x425 = INT64_MAX;
	uint8_t x426 = 18U;
	uint16_t x427 = 7871U;
	int16_t x428 = INT16_MIN;
	volatile int32_t t90 = 16675;

    t90 = ((x425^(x426+x427))<=x428);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint32_t x429 = 1132U;
	static uint32_t x430 = UINT32_MAX;
	int8_t x431 = -1;
	int16_t x432 = INT16_MIN;
	volatile int32_t t91 = -11762;

    t91 = ((x429^(x430+x431))<=x432);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x433 = UINT32_MAX;
	uint8_t x434 = 14U;
	uint64_t x435 = 902849LLU;
	static int8_t x436 = 1;
	int32_t t92 = 450;

    t92 = ((x433^(x434+x435))<=x436);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x441 = 2U;
	int16_t x443 = -1;
	uint32_t x444 = UINT32_MAX;
	volatile int32_t t93 = -329516794;

    t93 = ((x441^(x442+x443))<=x444);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int64_t x445 = INT64_MIN;
	static int8_t x448 = INT8_MIN;
	static int32_t t94 = -93926744;

    t94 = ((x445^(x446+x447))<=x448);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x450 = INT32_MAX;
	int64_t x452 = INT64_MIN;
	volatile int32_t t95 = -834290513;

    t95 = ((x449^(x450+x451))<=x452);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x453 = -68137369476142864LL;
	int16_t x454 = INT16_MAX;
	int32_t x455 = 7799;
	uint32_t x456 = 958957357U;

    t96 = ((x453^(x454+x455))<=x456);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x461 = 16U;
	uint16_t x462 = 534U;
	int16_t x463 = INT16_MIN;
	int16_t x464 = -1;
	volatile int32_t t97 = 297;

    t97 = ((x461^(x462+x463))<=x464);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x470 = INT32_MIN;
	int32_t t98 = 6;

    t98 = ((x469^(x470+x471))<=x472);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = INT16_MIN;
	volatile int8_t x475 = INT8_MAX;
	int32_t x476 = -6186461;
	static volatile int32_t t99 = 373619256;

    t99 = ((x473^(x474+x475))<=x476);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x477 = INT16_MIN;
	int32_t x478 = -31;
	static int64_t x479 = -1LL;
	uint16_t x480 = 1228U;
	int32_t t100 = -6;

    t100 = ((x477^(x478+x479))<=x480);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x481 = UINT32_MAX;
	int32_t x483 = 1;
	uint32_t x484 = 5787U;
	int32_t t101 = 136535087;

    t101 = ((x481^(x482+x483))<=x484);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x485 = 2247611513060386117LLU;
	uint32_t x486 = UINT32_MAX;
	int64_t x487 = INT64_MIN;
	uint16_t x488 = UINT16_MAX;

    t102 = ((x485^(x486+x487))<=x488);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x489 = 117U;
	static volatile int8_t x491 = 2;
	int64_t x492 = 53647607018432212LL;
	volatile int32_t t103 = 1;

    t103 = ((x489^(x490+x491))<=x492);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x498 = UINT16_MAX;
	volatile int16_t x499 = INT16_MAX;
	int32_t x500 = 2160;
	int32_t t104 = -2987071;

    t104 = ((x497^(x498+x499))<=x500);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x505 = INT8_MIN;
	volatile int8_t x506 = -27;
	static volatile uint32_t x507 = UINT32_MAX;
	volatile int8_t x508 = INT8_MAX;
	int32_t t105 = -1125;

    t105 = ((x505^(x506+x507))<=x508);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x509 = UINT8_MAX;
	int16_t x510 = 5;
	int16_t x511 = INT16_MIN;
	volatile int32_t x512 = INT32_MIN;
	int32_t t106 = 766308605;

    t106 = ((x509^(x510+x511))<=x512);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x517 = -1;
	uint64_t x518 = 22794651836245LLU;
	int64_t x520 = 20LL;

    t107 = ((x517^(x518+x519))<=x520);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x521 = 2U;
	uint8_t x522 = 0U;
	int16_t x524 = INT16_MAX;
	volatile int32_t t108 = -36608;

    t108 = ((x521^(x522+x523))<=x524);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x525 = 3LLU;
	uint32_t x526 = UINT32_MAX;
	static int16_t x527 = 780;
	static int32_t t109 = 1864535;

    t109 = ((x525^(x526+x527))<=x528);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x529 = INT64_MIN;
	uint32_t x530 = 6054U;
	uint16_t x531 = UINT16_MAX;
	volatile int32_t t110 = 24;

    t110 = ((x529^(x530+x531))<=x532);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint16_t x533 = 2409U;
	volatile int16_t x534 = -1;
	int16_t x535 = 68;
	int64_t x536 = INT64_MAX;
	volatile int32_t t111 = 1091;

    t111 = ((x533^(x534+x535))<=x536);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x537 = INT8_MAX;
	int16_t x538 = 2088;
	int8_t x539 = -1;
	uint8_t x540 = 3U;

    t112 = ((x537^(x538+x539))<=x540);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x549 = -1;
	static int32_t x550 = -4068713;
	uint64_t x551 = 11308704000LLU;
	static int32_t t113 = 13356;

    t113 = ((x549^(x550+x551))<=x552);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x553 = 1U;
	int8_t x554 = -1;
	int64_t x555 = 1LL;
	uint8_t x556 = 1U;

    t114 = ((x553^(x554+x555))<=x556);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x557 = -1;
	int8_t x559 = INT8_MIN;
	int64_t x560 = -8585800140544LL;
	int32_t t115 = -3;

    t115 = ((x557^(x558+x559))<=x560);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x562 = UINT16_MAX;
	int8_t x563 = INT8_MAX;
	int8_t x564 = INT8_MIN;
	int32_t t116 = 5297182;

    t116 = ((x561^(x562+x563))<=x564);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x565 = INT64_MAX;
	int8_t x566 = INT8_MIN;
	int8_t x567 = INT8_MIN;
	int64_t x568 = -1LL;
	volatile int32_t t117 = 83;

    t117 = ((x565^(x566+x567))<=x568);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x569 = INT64_MIN;
	uint32_t x570 = 4721368U;
	int32_t x571 = INT32_MAX;
	static int16_t x572 = -1;
	int32_t t118 = 3799;

    t118 = ((x569^(x570+x571))<=x572);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint8_t x573 = 5U;
	static uint8_t x574 = 1U;
	uint32_t x575 = UINT32_MAX;
	volatile uint32_t x576 = UINT32_MAX;
	volatile int32_t t119 = 10;

    t119 = ((x573^(x574+x575))<=x576);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x577 = UINT64_MAX;
	static volatile int32_t x578 = -198547314;
	uint8_t x579 = UINT8_MAX;
	int32_t x580 = INT32_MAX;

    t120 = ((x577^(x578+x579))<=x580);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x581 = INT32_MIN;
	int8_t x582 = INT8_MAX;
	int8_t x583 = INT8_MIN;
	int32_t x584 = INT32_MAX;
	volatile int32_t t121 = -19;

    t121 = ((x581^(x582+x583))<=x584);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x589 = UINT16_MAX;
	uint8_t x590 = 5U;
	uint8_t x591 = UINT8_MAX;
	static int64_t x592 = 1050900876322LL;

    t122 = ((x589^(x590+x591))<=x592);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x593 = UINT32_MAX;
	static uint32_t x594 = UINT32_MAX;
	static int16_t x595 = INT16_MIN;
	volatile int32_t t123 = -1;

    t123 = ((x593^(x594+x595))<=x596);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x597 = INT8_MIN;
	static uint32_t x598 = 654938U;
	int32_t x599 = INT32_MIN;
	volatile uint16_t x600 = 1450U;

    t124 = ((x597^(x598+x599))<=x600);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x605 = UINT64_MAX;
	volatile int32_t x607 = 251;
	volatile int32_t t125 = 2564;

    t125 = ((x605^(x606+x607))<=x608);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x609 = INT32_MAX;
	static volatile int16_t x611 = -191;
	volatile int8_t x612 = -1;
	int32_t t126 = 583;

    t126 = ((x609^(x610+x611))<=x612);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x613 = -1;
	int64_t x614 = INT64_MAX;
	int8_t x615 = INT8_MIN;
	int8_t x616 = INT8_MAX;
	int32_t t127 = 328;

    t127 = ((x613^(x614+x615))<=x616);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x617 = 5666617U;
	int8_t x618 = INT8_MAX;
	int64_t x619 = -3602LL;
	volatile int32_t x620 = -25;
	int32_t t128 = -526352;

    t128 = ((x617^(x618+x619))<=x620);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x621 = UINT8_MAX;
	int8_t x622 = -1;
	volatile int64_t x624 = 12865008630400LL;
	static int32_t t129 = 1;

    t129 = ((x621^(x622+x623))<=x624);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x629 = 41U;
	int8_t x631 = INT8_MIN;
	uint64_t x632 = 7326348836887819275LLU;
	int32_t t130 = 835463;

    t130 = ((x629^(x630+x631))<=x632);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x637 = INT16_MAX;
	volatile int32_t x638 = INT32_MIN;
	static int16_t x639 = INT16_MAX;
	static int32_t t131 = -12766795;

    t131 = ((x637^(x638+x639))<=x640);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x641 = 23U;
	static int32_t x642 = INT32_MAX;
	int32_t x643 = INT32_MIN;
	static volatile int32_t t132 = 1;

    t132 = ((x641^(x642+x643))<=x644);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x645 = 918113U;
	int64_t x647 = 889738LL;
	static volatile int32_t t133 = -274854131;

    t133 = ((x645^(x646+x647))<=x648);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x649 = INT8_MIN;
	int64_t x650 = 104915252325959193LL;
	uint8_t x651 = UINT8_MAX;
	uint32_t x652 = UINT32_MAX;

    t134 = ((x649^(x650+x651))<=x652);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x655 = INT32_MIN;
	int64_t x656 = INT64_MAX;
	static volatile int32_t t135 = -33097677;

    t135 = ((x653^(x654+x655))<=x656);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x657 = -1;
	int32_t x659 = 11;
	volatile int8_t x660 = INT8_MIN;
	static int32_t t136 = -2470;

    t136 = ((x657^(x658+x659))<=x660);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x661 = INT64_MAX;
	int64_t x662 = INT64_MIN;

    t137 = ((x661^(x662+x663))<=x664);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x665 = -1;
	uint16_t x666 = 226U;
	uint8_t x667 = 44U;
	volatile uint32_t x668 = 116U;
	static volatile int32_t t138 = 1;

    t138 = ((x665^(x666+x667))<=x668);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x669 = 38728939264LLU;
	volatile int32_t x670 = INT32_MIN;
	uint8_t x671 = 6U;
	volatile int32_t t139 = -129041710;

    t139 = ((x669^(x670+x671))<=x672);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x681 = -121;
	int64_t x682 = -1LL;
	int32_t x683 = INT32_MIN;
	uint8_t x684 = 96U;
	int32_t t140 = 738263;

    t140 = ((x681^(x682+x683))<=x684);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x686 = 2;
	int64_t x688 = -1LL;
	volatile int32_t t141 = 85251640;

    t141 = ((x685^(x686+x687))<=x688);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x689 = INT16_MIN;
	uint64_t x690 = 516463731523LLU;
	static uint64_t x691 = 1250LLU;
	int64_t x692 = INT64_MIN;
	int32_t t142 = -27817369;

    t142 = ((x689^(x690+x691))<=x692);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int64_t x693 = INT64_MIN;
	int16_t x694 = INT16_MAX;
	static uint64_t x695 = 246821670361688172LLU;
	uint16_t x696 = UINT16_MAX;
	volatile int32_t t143 = 3833;

    t143 = ((x693^(x694+x695))<=x696);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x697 = -457LL;
	uint32_t x698 = 32434038U;
	int32_t x699 = -1;
	static int8_t x700 = 2;
	static int32_t t144 = 196879;

    t144 = ((x697^(x698+x699))<=x700);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x701 = INT8_MIN;
	uint8_t x703 = UINT8_MAX;
	int16_t x704 = INT16_MAX;
	int32_t t145 = 5;

    t145 = ((x701^(x702+x703))<=x704);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x705 = -15628;
	uint32_t x706 = 2U;
	static int64_t x707 = -344498560498LL;
	uint16_t x708 = UINT16_MAX;

    t146 = ((x705^(x706+x707))<=x708);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x709 = UINT8_MAX;
	static int64_t x710 = -37391213883LL;
	int16_t x712 = INT16_MIN;
	int32_t t147 = -968;

    t147 = ((x709^(x710+x711))<=x712);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x713 = -1;
	uint16_t x714 = 419U;
	uint32_t x716 = UINT32_MAX;
	int32_t t148 = 1;

    t148 = ((x713^(x714+x715))<=x716);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x718 = 11LLU;
	uint8_t x719 = 4U;
	static volatile int32_t t149 = -17231;

    t149 = ((x717^(x718+x719))<=x720);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x721 = INT32_MIN;
	uint16_t x722 = UINT16_MAX;
	uint32_t x723 = UINT32_MAX;
	static volatile int32_t x724 = INT32_MIN;
	volatile int32_t t150 = 15;

    t150 = ((x721^(x722+x723))<=x724);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x725 = -13887990436603920LL;
	int16_t x728 = INT16_MAX;
	static int32_t t151 = 19828;

    t151 = ((x725^(x726+x727))<=x728);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x729 = INT32_MIN;
	int8_t x730 = INT8_MAX;
	static int32_t x731 = -58581;
	int16_t x732 = -1;
	int32_t t152 = 94334;

    t152 = ((x729^(x730+x731))<=x732);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int16_t x734 = INT16_MAX;
	int64_t x736 = -558999LL;
	static int32_t t153 = 16127;

    t153 = ((x733^(x734+x735))<=x736);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x737 = 1;
	int64_t x738 = 100272891LL;
	uint8_t x739 = 97U;
	volatile int32_t t154 = 178507;

    t154 = ((x737^(x738+x739))<=x740);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x743 = -54;
	static int64_t x744 = INT64_MAX;
	int32_t t155 = 1;

    t155 = ((x741^(x742+x743))<=x744);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x745 = INT32_MIN;
	static int64_t x746 = -1LL;
	volatile int16_t x747 = -11;
	int64_t x748 = INT64_MIN;

    t156 = ((x745^(x746+x747))<=x748);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint64_t x749 = 2002LLU;
	volatile uint32_t x750 = 244973497U;
	int8_t x751 = INT8_MIN;
	int32_t x752 = INT32_MIN;
	volatile int32_t t157 = 44;

    t157 = ((x749^(x750+x751))<=x752);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x753 = INT16_MIN;
	int32_t x754 = INT32_MIN;
	int8_t x756 = INT8_MIN;

    t158 = ((x753^(x754+x755))<=x756);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x757 = INT16_MIN;
	int32_t x758 = 1;
	static int16_t x760 = INT16_MAX;
	int32_t t159 = 123445005;

    t159 = ((x757^(x758+x759))<=x760);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x765 = -1;
	static int8_t x766 = -1;
	int8_t x767 = INT8_MIN;
	static uint16_t x768 = 28U;
	int32_t t160 = 14363955;

    t160 = ((x765^(x766+x767))<=x768);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x769 = UINT32_MAX;
	static int16_t x770 = INT16_MIN;
	uint64_t x771 = 29583846452LLU;
	int32_t t161 = -1;

    t161 = ((x769^(x770+x771))<=x772);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint16_t x773 = UINT16_MAX;
	uint16_t x774 = UINT16_MAX;
	static uint8_t x775 = 10U;
	volatile int16_t x776 = -2;
	volatile int32_t t162 = 28393367;

    t162 = ((x773^(x774+x775))<=x776);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x778 = INT16_MIN;
	static volatile int16_t x780 = 954;

    t163 = ((x777^(x778+x779))<=x780);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x781 = 8U;
	uint16_t x782 = 8374U;
	static volatile uint32_t x783 = 19474504U;
	uint32_t x784 = 128408U;
	static volatile int32_t t164 = 80588;

    t164 = ((x781^(x782+x783))<=x784);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x785 = 1321U;
	uint64_t x787 = 985880LLU;
	uint16_t x788 = UINT16_MAX;

    t165 = ((x785^(x786+x787))<=x788);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x790 = 513U;
	int64_t x791 = INT64_MIN;
	static uint64_t x792 = UINT64_MAX;
	int32_t t166 = 1720;

    t166 = ((x789^(x790+x791))<=x792);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x793 = INT8_MIN;
	uint64_t x794 = UINT64_MAX;
	int8_t x795 = 23;
	static int64_t x796 = -19LL;
	static volatile int32_t t167 = -2;

    t167 = ((x793^(x794+x795))<=x796);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	uint64_t x797 = 55899LLU;
	static int64_t x798 = INT64_MIN;
	static int8_t x799 = INT8_MAX;
	uint64_t x800 = UINT64_MAX;
	int32_t t168 = 835;

    t168 = ((x797^(x798+x799))<=x800);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x801 = 2;
	int8_t x802 = -1;
	int16_t x803 = INT16_MIN;
	volatile int32_t x804 = INT32_MAX;
	volatile int32_t t169 = 6987;

    t169 = ((x801^(x802+x803))<=x804);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x805 = -1425927;
	int64_t x806 = INT64_MIN;
	volatile int16_t x808 = INT16_MIN;
	static int32_t t170 = 104272;

    t170 = ((x805^(x806+x807))<=x808);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x809 = -48544;
	uint32_t x811 = UINT32_MAX;
	volatile uint8_t x812 = UINT8_MAX;

    t171 = ((x809^(x810+x811))<=x812);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x813 = 52U;
	volatile int32_t x814 = -1;
	uint16_t x815 = 1011U;
	uint8_t x816 = 116U;
	volatile int32_t t172 = -2;

    t172 = ((x813^(x814+x815))<=x816);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x817 = INT16_MIN;
	int8_t x818 = INT8_MIN;
	static uint32_t x820 = 299724U;
	volatile int32_t t173 = 1;

    t173 = ((x817^(x818+x819))<=x820);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x822 = INT16_MIN;
	uint16_t x823 = 22U;
	static uint8_t x824 = 1U;
	volatile int32_t t174 = 84076099;

    t174 = ((x821^(x822+x823))<=x824);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x826 = 30012U;
	static int16_t x827 = 7757;
	int32_t t175 = -134388;

    t175 = ((x825^(x826+x827))<=x828);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x829 = 7;
	uint32_t x831 = 738969643U;
	uint16_t x832 = 364U;
	volatile int32_t t176 = -175123;

    t176 = ((x829^(x830+x831))<=x832);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x833 = INT8_MAX;
	int8_t x836 = 2;
	volatile int32_t t177 = -11425510;

    t177 = ((x833^(x834+x835))<=x836);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x837 = INT64_MIN;
	int32_t x838 = -66577369;
	volatile int64_t x839 = -1LL;
	int64_t x840 = 1477688895392576LL;
	volatile int32_t t178 = 6;

    t178 = ((x837^(x838+x839))<=x840);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x841 = -3;
	static volatile uint64_t x842 = 28605326323516LLU;
	uint16_t x843 = UINT16_MAX;
	int64_t x844 = -1LL;
	int32_t t179 = 7682;

    t179 = ((x841^(x842+x843))<=x844);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint16_t x845 = 118U;
	int8_t x846 = INT8_MAX;
	static int64_t x847 = INT64_MIN;
	static uint16_t x848 = 46U;

    t180 = ((x845^(x846+x847))<=x848);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x849 = 1660U;
	volatile int64_t x850 = -276726668796192LL;
	uint16_t x851 = 3978U;
	static int8_t x852 = INT8_MIN;

    t181 = ((x849^(x850+x851))<=x852);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int16_t x853 = -36;
	int16_t x854 = -1;
	int16_t x855 = -1;
	int32_t x856 = INT32_MAX;
	volatile int32_t t182 = -165634954;

    t182 = ((x853^(x854+x855))<=x856);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x857 = 1010;
	int8_t x858 = -1;
	volatile int8_t x860 = INT8_MIN;
	int32_t t183 = -61;

    t183 = ((x857^(x858+x859))<=x860);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x861 = INT64_MAX;
	int64_t x862 = -1LL;
	int8_t x863 = INT8_MIN;
	volatile int64_t x864 = -1LL;
	volatile int32_t t184 = 0;

    t184 = ((x861^(x862+x863))<=x864);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x869 = 415136436163LL;
	int8_t x870 = INT8_MIN;
	static int16_t x872 = INT16_MAX;
	volatile int32_t t185 = -1281;

    t185 = ((x869^(x870+x871))<=x872);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x873 = 687U;
	int16_t x874 = INT16_MIN;
	int64_t x875 = 1567777708674688LL;
	volatile int64_t x876 = INT64_MAX;
	volatile int32_t t186 = -1;

    t186 = ((x873^(x874+x875))<=x876);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x877 = INT64_MIN;
	static int16_t x878 = 257;
	int8_t x879 = INT8_MAX;
	static int32_t t187 = -54594;

    t187 = ((x877^(x878+x879))<=x880);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x886 = 92545811LLU;
	static volatile uint32_t x887 = 0U;
	static int16_t x888 = -128;

    t188 = ((x885^(x886+x887))<=x888);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x889 = INT8_MIN;
	volatile int16_t x890 = INT16_MAX;
	volatile int8_t x892 = -1;
	int32_t t189 = -377665034;

    t189 = ((x889^(x890+x891))<=x892);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x893 = INT32_MIN;
	int32_t x894 = -1;
	uint16_t x895 = UINT16_MAX;
	int8_t x896 = -1;
	int32_t t190 = -215062;

    t190 = ((x893^(x894+x895))<=x896);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x897 = -31167489370062169LL;
	int8_t x898 = INT8_MIN;
	uint64_t x899 = 2681681124425735073LLU;
	int8_t x900 = 1;
	int32_t t191 = 77;

    t191 = ((x897^(x898+x899))<=x900);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x901 = INT16_MIN;
	int8_t x902 = 1;
	uint32_t x904 = 25623U;
	static int32_t t192 = 488;

    t192 = ((x901^(x902+x903))<=x904);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x905 = INT32_MIN;
	int16_t x908 = INT16_MIN;
	volatile int32_t t193 = 1;

    t193 = ((x905^(x906+x907))<=x908);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x909 = 8211007921031777LLU;
	int8_t x910 = INT8_MIN;
	static uint32_t x911 = 9508U;
	uint32_t x912 = 8280695U;
	volatile int32_t t194 = 62435702;

    t194 = ((x909^(x910+x911))<=x912);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x913 = 0;
	uint64_t x914 = 1271110540LLU;
	uint16_t x915 = UINT16_MAX;
	volatile int32_t t195 = 27650;

    t195 = ((x913^(x914+x915))<=x916);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x917 = UINT32_MAX;
	int64_t x918 = INT64_MAX;
	static int32_t x919 = INT32_MIN;
	int32_t x920 = INT32_MIN;
	volatile int32_t t196 = 3;

    t196 = ((x917^(x918+x919))<=x920);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x922 = UINT64_MAX;
	uint32_t x924 = 14U;

    t197 = ((x921^(x922+x923))<=x924);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint32_t x926 = 3764733U;
	int64_t x927 = -27815827571451390LL;
	int16_t x928 = -1;

    t198 = ((x925^(x926+x927))<=x928);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x929 = INT32_MIN;
	uint64_t x931 = 15400907LLU;
	uint8_t x932 = 3U;
	static int32_t t199 = 2543;

    t199 = ((x929^(x930+x931))<=x932);

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

