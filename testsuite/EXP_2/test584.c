
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

int16_t x2 = INT16_MAX;
int8_t x12 = -45;
uint8_t x16 = 91U;
static int32_t t2 = -1472;
int8_t x17 = -5;
int8_t x22 = INT8_MIN;
volatile int32_t t4 = -23;
uint64_t x34 = UINT64_MAX;
static int32_t t5 = -2848;
volatile uint8_t x37 = 3U;
uint64_t x40 = UINT64_MAX;
uint8_t x41 = 0U;
uint16_t x44 = 0U;
int16_t x52 = -1;
volatile uint32_t x57 = 102810599U;
int16_t x59 = -1;
volatile int32_t t10 = 31790;
int8_t x72 = INT8_MAX;
int64_t x81 = INT64_MIN;
int32_t t13 = 5080690;
int8_t x103 = 7;
uint32_t x109 = 58418771U;
static volatile int16_t x111 = INT16_MIN;
int32_t t17 = 4020;
int32_t t18 = 0;
int32_t t19 = -782;
volatile uint8_t x121 = UINT8_MAX;
int64_t x133 = INT64_MIN;
uint8_t x140 = 1U;
uint8_t x141 = 4U;
int32_t x142 = 596160512;
int8_t x151 = -1;
static int16_t x155 = INT16_MIN;
uint8_t x161 = UINT8_MAX;
int16_t x162 = INT16_MIN;
volatile uint32_t x163 = 45073U;
int16_t x164 = INT16_MIN;
int8_t x170 = -1;
int32_t x172 = INT32_MAX;
int16_t x176 = INT16_MAX;
static volatile int32_t t30 = 2768648;
volatile uint64_t x185 = 278578811LLU;
int64_t x188 = 4160LL;
uint8_t x192 = 2U;
int8_t x214 = 13;
uint16_t x216 = UINT16_MAX;
volatile int32_t t36 = -172015;
uint8_t x229 = UINT8_MAX;
uint8_t x238 = UINT8_MAX;
volatile uint16_t x242 = 22184U;
uint32_t x257 = 522U;
static volatile int8_t x260 = -13;
int64_t x265 = -1LL;
int32_t t45 = 0;
volatile int8_t x278 = -1;
volatile int32_t t47 = -1;
int16_t x302 = INT16_MIN;
int64_t x312 = 16291660543784446LL;
int32_t t52 = 0;
volatile int32_t t53 = 10993;
static volatile int32_t t55 = -100066921;
static int16_t x347 = -1;
int32_t t60 = 150873340;
int8_t x369 = INT8_MAX;
uint64_t x370 = UINT64_MAX;
static uint16_t x375 = 11066U;
int16_t x376 = INT16_MIN;
static uint8_t x389 = 2U;
uint16_t x397 = 481U;
int64_t x398 = -97LL;
static uint64_t x403 = 17984208LLU;
static volatile int32_t x406 = -4090983;
static int64_t x410 = -36409LL;
volatile int32_t t69 = -1588829;
int64_t x421 = -1LL;
volatile int32_t t72 = -45;
volatile int8_t x442 = INT8_MIN;
static int32_t x449 = INT32_MIN;
int64_t x451 = 31857LL;
uint32_t x461 = 119226U;
int32_t x463 = -1;
static uint16_t x467 = 3938U;
volatile int32_t t82 = -1478625;
int32_t t87 = -609419868;
static volatile int64_t x516 = -1LL;
static int32_t t93 = -221;
int16_t x550 = 3230;
uint32_t x558 = 866U;
int16_t x567 = 14217;
uint64_t x569 = 243LLU;
int32_t x580 = -1;
int16_t x583 = INT16_MIN;
volatile int32_t t101 = -145274247;
volatile int32_t t104 = 3;
static int8_t x623 = 7;
int16_t x628 = INT16_MIN;
static int8_t x631 = INT8_MIN;
int32_t t111 = -445991;
static int64_t x641 = -938768136LL;
static int16_t x649 = INT16_MIN;
uint32_t x652 = 315746515U;
int64_t x656 = INT64_MIN;
uint8_t x668 = UINT8_MAX;
static uint16_t x669 = UINT16_MAX;
volatile int32_t t119 = 86;
int8_t x678 = INT8_MIN;
int32_t x686 = 300356197;
static volatile uint64_t x688 = 1713146190466LLU;
int32_t t122 = -935884;
static uint16_t x699 = 59U;
volatile int32_t t123 = 202;
uint8_t x707 = 0U;
static int32_t t126 = -1784001;
uint16_t x729 = 196U;
int16_t x735 = INT16_MAX;
int16_t x747 = -1;
static volatile int8_t x748 = INT8_MIN;
int32_t t132 = -309462;
int64_t x753 = -600857131LL;
int64_t x759 = 2157073863332LL;
volatile int8_t x764 = -1;
volatile int32_t t135 = -24;
volatile int8_t x766 = 0;
int32_t x767 = INT32_MAX;
int32_t t136 = -283468;
int16_t x776 = -2802;
uint8_t x782 = 84U;
uint64_t x783 = 11LLU;
uint16_t x787 = 1U;
int8_t x788 = INT8_MIN;
static volatile int32_t t142 = -998917;
int64_t x800 = 129LL;
volatile uint64_t x802 = UINT64_MAX;
volatile int32_t t144 = 26138;
uint32_t x806 = UINT32_MAX;
int8_t x807 = INT8_MAX;
int64_t x820 = -117976421252LL;
uint16_t x824 = 271U;
static volatile int32_t t149 = 39;
volatile int16_t x838 = INT16_MIN;
int64_t x843 = -383445LL;
uint8_t x845 = UINT8_MAX;
int64_t x848 = -1LL;
uint16_t x850 = UINT16_MAX;
int16_t x851 = INT16_MIN;
static uint32_t x865 = 984357U;
uint16_t x872 = 9092U;
volatile uint16_t x873 = UINT16_MAX;
int8_t x876 = -1;
int8_t x887 = INT8_MAX;
uint16_t x891 = 54U;
uint8_t x898 = UINT8_MAX;
int16_t x907 = INT16_MIN;
static volatile uint32_t x909 = 1144U;
int8_t x910 = -13;
static volatile int32_t t168 = -484;
static volatile int32_t t169 = -759780881;
int16_t x936 = INT16_MIN;
int32_t t171 = -3;
uint8_t x938 = 14U;
uint16_t x939 = UINT16_MAX;
volatile uint8_t x945 = UINT8_MAX;
uint32_t x947 = 90021U;
uint64_t x949 = UINT64_MAX;
uint16_t x951 = UINT16_MAX;
volatile int32_t t175 = 12678025;
int64_t x958 = -1LL;
int8_t x961 = INT8_MAX;
static int16_t x966 = -1;
volatile int64_t x968 = INT64_MAX;
volatile int32_t t179 = -8;
int64_t x972 = INT64_MAX;
int64_t x975 = -1123943431607LL;
int32_t t181 = 13;
static int64_t x980 = INT64_MIN;
volatile uint16_t x981 = 31U;
int32_t x1001 = INT32_MAX;
static int64_t x1004 = INT64_MIN;
uint8_t x1015 = UINT8_MAX;
int32_t t188 = 62;
int32_t x1025 = 1357;
volatile uint32_t x1027 = 21U;
int8_t x1030 = 1;
uint32_t x1040 = 79091460U;
static int32_t x1048 = INT32_MAX;
volatile uint8_t x1052 = 8U;
volatile int32_t x1060 = INT32_MIN;
int32_t t198 = 25963171;
int32_t x1062 = -1;


void f0(void) {
    	volatile uint16_t x1 = 0U;
	static volatile uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -5011;

    t0 = ((x1^(x2*x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -1;
	volatile uint64_t x10 = 251927878876000733LLU;
	int32_t x11 = INT32_MIN;
	int32_t t1 = -2748;

    t1 = ((x9^(x10*x11))<=x12);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x13 = UINT32_MAX;
	int16_t x14 = INT16_MIN;
	int32_t x15 = -1;

    t2 = ((x13^(x14*x15))<=x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x18 = 3769;
	int8_t x19 = INT8_MIN;
	volatile int16_t x20 = INT16_MIN;
	volatile int32_t t3 = 784321927;

    t3 = ((x17^(x18*x19))<=x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = 0;
	int8_t x23 = INT8_MIN;
	int8_t x24 = 25;

    t4 = ((x21^(x22*x23))<=x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MAX;
	static uint64_t x35 = 174181LLU;
	int64_t x36 = INT64_MAX;

    t5 = ((x33^(x34*x35))<=x36);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x38 = 1U;
	int8_t x39 = INT8_MAX;
	int32_t t6 = -1;

    t6 = ((x37^(x38*x39))<=x40);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x42 = -1;
	uint16_t x43 = 45U;
	static int32_t t7 = 300284;

    t7 = ((x41^(x42*x43))<=x44);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x49 = INT64_MIN;
	int64_t x50 = -630LL;
	volatile int32_t x51 = INT32_MAX;
	volatile int32_t t8 = 14904;

    t8 = ((x49^(x50*x51))<=x52);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x53 = -1;
	int64_t x54 = -397LL;
	int16_t x55 = INT16_MIN;
	int16_t x56 = -1;
	volatile int32_t t9 = 198536606;

    t9 = ((x53^(x54*x55))<=x56);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x58 = 14;
	static volatile uint32_t x60 = UINT32_MAX;

    t10 = ((x57^(x58*x59))<=x60);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x69 = INT8_MAX;
	uint16_t x70 = 91U;
	volatile int32_t x71 = -1;
	volatile int32_t t11 = -25670984;

    t11 = ((x69^(x70*x71))<=x72);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x73 = INT16_MIN;
	uint64_t x74 = UINT64_MAX;
	int16_t x75 = INT16_MAX;
	int8_t x76 = -1;
	volatile int32_t t12 = -102659003;

    t12 = ((x73^(x74*x75))<=x76);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x82 = 1;
	int32_t x83 = 99756;
	uint8_t x84 = 1U;

    t13 = ((x81^(x82*x83))<=x84);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x89 = 73LL;
	int8_t x90 = INT8_MIN;
	uint64_t x91 = 14724893LLU;
	uint64_t x92 = UINT64_MAX;
	static int32_t t14 = 1;

    t14 = ((x89^(x90*x91))<=x92);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x97 = -289136110355LL;
	int32_t x98 = INT32_MIN;
	uint8_t x99 = 0U;
	static volatile int64_t x100 = INT64_MIN;
	volatile int32_t t15 = 34;

    t15 = ((x97^(x98*x99))<=x100);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x101 = 15U;
	static volatile int8_t x102 = 4;
	volatile int32_t x104 = INT32_MIN;
	static volatile int32_t t16 = -2976;

    t16 = ((x101^(x102*x103))<=x104);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x110 = UINT16_MAX;
	volatile uint32_t x112 = UINT32_MAX;

    t17 = ((x109^(x110*x111))<=x112);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x113 = -9;
	int16_t x114 = 31;
	volatile int16_t x115 = INT16_MAX;
	int16_t x116 = INT16_MIN;

    t18 = ((x113^(x114*x115))<=x116);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x117 = -12158117;
	int8_t x118 = -1;
	volatile uint16_t x119 = 1U;
	uint16_t x120 = 5U;

    t19 = ((x117^(x118*x119))<=x120);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int32_t x122 = -1;
	uint8_t x123 = 45U;
	int32_t x124 = INT32_MAX;
	volatile int32_t t20 = -477;

    t20 = ((x121^(x122*x123))<=x124);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x129 = 15U;
	uint8_t x130 = 86U;
	int8_t x131 = -1;
	int16_t x132 = -123;
	int32_t t21 = -27991;

    t21 = ((x129^(x130*x131))<=x132);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x134 = UINT64_MAX;
	int16_t x135 = -1;
	static int64_t x136 = INT64_MAX;
	static volatile int32_t t22 = -93303;

    t22 = ((x133^(x134*x135))<=x136);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x137 = -66LL;
	int16_t x138 = INT16_MIN;
	uint32_t x139 = 790355U;
	int32_t t23 = 68594;

    t23 = ((x137^(x138*x139))<=x140);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x143 = -1;
	int32_t x144 = -1;
	int32_t t24 = 5;

    t24 = ((x141^(x142*x143))<=x144);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x145 = INT64_MIN;
	volatile int32_t x146 = INT32_MIN;
	int8_t x147 = 1;
	static uint32_t x148 = UINT32_MAX;
	static volatile int32_t t25 = -194109;

    t25 = ((x145^(x146*x147))<=x148);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint32_t x149 = UINT32_MAX;
	static int32_t x150 = -836;
	int16_t x152 = INT16_MIN;
	volatile int32_t t26 = 1;

    t26 = ((x149^(x150*x151))<=x152);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x153 = INT16_MIN;
	int16_t x154 = INT16_MAX;
	uint8_t x156 = UINT8_MAX;
	int32_t t27 = 220044151;

    t27 = ((x153^(x154*x155))<=x156);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int32_t t28 = 127484012;

    t28 = ((x161^(x162*x163))<=x164);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x169 = 187U;
	uint64_t x171 = 1154032LLU;
	int32_t t29 = 363381;

    t29 = ((x169^(x170*x171))<=x172);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x173 = INT16_MAX;
	int64_t x174 = INT64_MIN;
	uint64_t x175 = 32406773LLU;

    t30 = ((x173^(x174*x175))<=x176);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x186 = UINT8_MAX;
	int16_t x187 = INT16_MIN;
	volatile int32_t t31 = 39;

    t31 = ((x185^(x186*x187))<=x188);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x189 = -24;
	uint16_t x190 = 458U;
	uint32_t x191 = 157U;
	static int32_t t32 = -58041;

    t32 = ((x189^(x190*x191))<=x192);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x197 = INT32_MIN;
	int8_t x198 = -1;
	int64_t x199 = INT64_MAX;
	static int32_t x200 = INT32_MAX;
	static int32_t t33 = -349944206;

    t33 = ((x197^(x198*x199))<=x200);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x201 = 1628U;
	uint16_t x202 = 23031U;
	uint64_t x203 = UINT64_MAX;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t34 = -6;

    t34 = ((x201^(x202*x203))<=x204);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x205 = 60000642846709258LL;
	volatile int8_t x206 = INT8_MIN;
	static int32_t x207 = -1;
	static int16_t x208 = -180;
	int32_t t35 = -395;

    t35 = ((x205^(x206*x207))<=x208);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x213 = 442374472LLU;
	int8_t x215 = INT8_MIN;

    t36 = ((x213^(x214*x215))<=x216);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x217 = INT64_MIN;
	uint64_t x218 = 205399LLU;
	uint8_t x219 = 5U;
	int8_t x220 = INT8_MAX;
	int32_t t37 = 0;

    t37 = ((x217^(x218*x219))<=x220);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x225 = -1;
	int16_t x226 = 6;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	volatile int32_t t38 = -809461;

    t38 = ((x225^(x226*x227))<=x228);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x230 = UINT32_MAX;
	volatile int8_t x231 = INT8_MIN;
	volatile int64_t x232 = INT64_MAX;
	volatile int32_t t39 = 5883034;

    t39 = ((x229^(x230*x231))<=x232);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x233 = INT64_MAX;
	volatile uint64_t x234 = 1650256125595698055LLU;
	static int64_t x235 = -1LL;
	volatile int16_t x236 = INT16_MAX;
	int32_t t40 = 45053020;

    t40 = ((x233^(x234*x235))<=x236);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x237 = -1LL;
	volatile int8_t x239 = -4;
	uint16_t x240 = 2375U;
	static int32_t t41 = 10225;

    t41 = ((x237^(x238*x239))<=x240);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x241 = 5U;
	int64_t x243 = -1LL;
	static int32_t x244 = INT32_MIN;
	static volatile int32_t t42 = 3528;

    t42 = ((x241^(x242*x243))<=x244);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x253 = -31613;
	volatile uint8_t x254 = 97U;
	volatile int16_t x255 = -15934;
	int32_t x256 = INT32_MIN;
	volatile int32_t t43 = 25943;

    t43 = ((x253^(x254*x255))<=x256);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x258 = 79749837035435206LLU;
	static int32_t x259 = 470590;
	int32_t t44 = 26229627;

    t44 = ((x257^(x258*x259))<=x260);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x266 = 29923038768LLU;
	static volatile int32_t x267 = INT32_MAX;
	static int8_t x268 = INT8_MAX;

    t45 = ((x265^(x266*x267))<=x268);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x269 = INT32_MAX;
	int32_t x270 = 53830;
	int8_t x271 = -1;
	volatile int32_t x272 = -1;
	int32_t t46 = -5932;

    t46 = ((x269^(x270*x271))<=x272);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x277 = INT32_MIN;
	static int32_t x279 = -150973356;
	uint8_t x280 = UINT8_MAX;

    t47 = ((x277^(x278*x279))<=x280);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x281 = -1;
	int16_t x282 = 1;
	int32_t x283 = -362358041;
	volatile int32_t x284 = INT32_MIN;
	volatile int32_t t48 = 2;

    t48 = ((x281^(x282*x283))<=x284);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x285 = 1760LLU;
	int16_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	volatile uint64_t x288 = 345398579112436476LLU;
	int32_t t49 = 3739328;

    t49 = ((x285^(x286*x287))<=x288);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x293 = INT64_MIN;
	int32_t x294 = -1;
	uint16_t x295 = UINT16_MAX;
	int32_t x296 = INT32_MAX;
	volatile int32_t t50 = -1778709;

    t50 = ((x293^(x294*x295))<=x296);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x301 = 3454830446731LLU;
	int8_t x303 = INT8_MIN;
	volatile uint8_t x304 = 2U;
	volatile int32_t t51 = 1;

    t51 = ((x301^(x302*x303))<=x304);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x309 = INT64_MIN;
	static int8_t x310 = INT8_MIN;
	uint32_t x311 = 461201432U;

    t52 = ((x309^(x310*x311))<=x312);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x313 = -53;
	uint16_t x314 = 2075U;
	volatile uint16_t x315 = UINT16_MAX;
	uint32_t x316 = UINT32_MAX;

    t53 = ((x313^(x314*x315))<=x316);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x321 = 49193894162229078LLU;
	static volatile uint64_t x322 = 600966419801LLU;
	static int8_t x323 = INT8_MIN;
	int16_t x324 = INT16_MIN;
	volatile int32_t t54 = 434;

    t54 = ((x321^(x322*x323))<=x324);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x325 = INT64_MIN;
	int16_t x326 = -496;
	static uint32_t x327 = 1U;
	int8_t x328 = -1;

    t55 = ((x325^(x326*x327))<=x328);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x329 = INT64_MIN;
	int16_t x330 = 13092;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -3855;
	int32_t t56 = -1165296;

    t56 = ((x329^(x330*x331))<=x332);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x337 = INT32_MIN;
	int32_t x338 = INT32_MAX;
	uint64_t x339 = 803162522LLU;
	volatile uint8_t x340 = 6U;
	int32_t t57 = -485;

    t57 = ((x337^(x338*x339))<=x340);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x341 = INT8_MIN;
	static volatile int32_t x342 = -1;
	volatile int16_t x343 = -38;
	volatile int8_t x344 = INT8_MIN;
	int32_t t58 = -949695;

    t58 = ((x341^(x342*x343))<=x344);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x345 = 8777U;
	int8_t x346 = -1;
	int64_t x348 = INT64_MAX;
	static volatile int32_t t59 = -248;

    t59 = ((x345^(x346*x347))<=x348);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x349 = INT32_MAX;
	static volatile int8_t x350 = 2;
	int16_t x351 = INT16_MIN;
	static int32_t x352 = -1;

    t60 = ((x349^(x350*x351))<=x352);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x361 = INT64_MIN;
	int32_t x362 = -6611;
	int16_t x363 = 9525;
	int8_t x364 = -3;
	static volatile int32_t t61 = 365800227;

    t61 = ((x361^(x362*x363))<=x364);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x371 = INT16_MIN;
	static int16_t x372 = INT16_MIN;
	volatile int32_t t62 = 22135;

    t62 = ((x369^(x370*x371))<=x372);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	volatile int32_t t63 = 97;

    t63 = ((x373^(x374*x375))<=x376);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x385 = 44849633706LL;
	int32_t x386 = -1;
	uint64_t x387 = 5409976036LLU;
	uint8_t x388 = 10U;
	int32_t t64 = 102104;

    t64 = ((x385^(x386*x387))<=x388);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x390 = 61U;
	volatile uint32_t x391 = 390018032U;
	int64_t x392 = 34242722256621LL;
	int32_t t65 = -111690;

    t65 = ((x389^(x390*x391))<=x392);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x399 = -3;
	static int16_t x400 = INT16_MIN;
	volatile int32_t t66 = 1389;

    t66 = ((x397^(x398*x399))<=x400);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x401 = UINT8_MAX;
	static uint8_t x402 = 6U;
	int64_t x404 = 1851080908534774028LL;
	int32_t t67 = 12;

    t67 = ((x401^(x402*x403))<=x404);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x405 = 887295769762LLU;
	int16_t x407 = -1;
	int64_t x408 = -916513LL;
	int32_t t68 = 6031;

    t68 = ((x405^(x406*x407))<=x408);

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint64_t x409 = 18051497LLU;
	static uint64_t x411 = 7978590164301LLU;
	int16_t x412 = INT16_MAX;

    t69 = ((x409^(x410*x411))<=x412);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x413 = INT8_MIN;
	static int32_t x414 = 0;
	int8_t x415 = INT8_MIN;
	int8_t x416 = -1;
	int32_t t70 = 0;

    t70 = ((x413^(x414*x415))<=x416);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x417 = INT16_MAX;
	static int8_t x418 = -1;
	int8_t x419 = INT8_MAX;
	static int8_t x420 = 25;
	int32_t t71 = -485202;

    t71 = ((x417^(x418*x419))<=x420);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x422 = INT16_MIN;
	int16_t x423 = INT16_MIN;
	uint64_t x424 = UINT64_MAX;

    t72 = ((x421^(x422*x423))<=x424);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x425 = 12142366U;
	static volatile int16_t x426 = 9548;
	int8_t x427 = INT8_MAX;
	volatile uint32_t x428 = UINT32_MAX;
	int32_t t73 = -125342495;

    t73 = ((x425^(x426*x427))<=x428);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x433 = INT8_MAX;
	int16_t x434 = INT16_MAX;
	uint32_t x435 = 446U;
	int8_t x436 = -1;
	int32_t t74 = 5554;

    t74 = ((x433^(x434*x435))<=x436);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x437 = -163135LL;
	int16_t x438 = INT16_MIN;
	int64_t x439 = 547090156849LL;
	int8_t x440 = -1;
	int32_t t75 = 3345866;

    t75 = ((x437^(x438*x439))<=x440);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x441 = INT8_MIN;
	volatile int64_t x443 = 30007621120358742LL;
	uint8_t x444 = 1U;
	int32_t t76 = -13134060;

    t76 = ((x441^(x442*x443))<=x444);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x445 = UINT64_MAX;
	int8_t x446 = 1;
	volatile int16_t x447 = 70;
	int16_t x448 = INT16_MIN;
	static volatile int32_t t77 = -29327;

    t77 = ((x445^(x446*x447))<=x448);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x450 = UINT64_MAX;
	static int64_t x452 = -1LL;
	volatile int32_t t78 = -19;

    t78 = ((x449^(x450*x451))<=x452);

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x453 = -1773503337LL;
	int16_t x454 = INT16_MIN;
	uint8_t x455 = 2U;
	int64_t x456 = 45222LL;
	volatile int32_t t79 = 13208;

    t79 = ((x453^(x454*x455))<=x456);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x462 = INT16_MAX;
	static int32_t x464 = INT32_MIN;
	static int32_t t80 = 31893412;

    t80 = ((x461^(x462*x463))<=x464);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x465 = INT8_MIN;
	int32_t x466 = -19;
	int32_t x468 = -55495;
	int32_t t81 = 0;

    t81 = ((x465^(x466*x467))<=x468);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x469 = INT8_MAX;
	uint32_t x470 = UINT32_MAX;
	uint32_t x471 = 158758015U;
	volatile uint32_t x472 = UINT32_MAX;

    t82 = ((x469^(x470*x471))<=x472);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x477 = -1;
	int32_t x478 = -1539148;
	int16_t x479 = 5;
	int16_t x480 = INT16_MIN;
	static volatile int32_t t83 = 1;

    t83 = ((x477^(x478*x479))<=x480);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	uint16_t x486 = UINT16_MAX;
	uint64_t x487 = 1LLU;
	static int64_t x488 = INT64_MAX;
	volatile int32_t t84 = -46741634;

    t84 = ((x485^(x486*x487))<=x488);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x497 = 6693;
	int16_t x498 = INT16_MAX;
	int32_t x499 = 124;
	int16_t x500 = 0;
	int32_t t85 = -18547046;

    t85 = ((x497^(x498*x499))<=x500);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x505 = 5;
	volatile int16_t x506 = INT16_MIN;
	uint64_t x507 = UINT64_MAX;
	int16_t x508 = -1;
	int32_t t86 = -11481;

    t86 = ((x505^(x506*x507))<=x508);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint8_t x509 = 1U;
	static int16_t x510 = -1;
	int32_t x511 = 988;
	volatile uint16_t x512 = UINT16_MAX;

    t87 = ((x509^(x510*x511))<=x512);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x513 = 7318LLU;
	uint32_t x514 = 1201738U;
	uint8_t x515 = 24U;
	volatile int32_t t88 = 2765;

    t88 = ((x513^(x514*x515))<=x516);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x521 = INT64_MIN;
	int64_t x522 = -1LL;
	int32_t x523 = -1;
	int8_t x524 = 18;
	volatile int32_t t89 = 503548;

    t89 = ((x521^(x522*x523))<=x524);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x529 = -1;
	int16_t x530 = INT16_MAX;
	uint8_t x531 = 124U;
	volatile int16_t x532 = INT16_MIN;
	volatile int32_t t90 = 39664462;

    t90 = ((x529^(x530*x531))<=x532);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x533 = INT16_MIN;
	int16_t x534 = -1;
	int8_t x535 = -3;
	int32_t x536 = -61;
	static int32_t t91 = -7;

    t91 = ((x533^(x534*x535))<=x536);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile int32_t x537 = -1;
	uint32_t x538 = 13082U;
	int64_t x539 = 0LL;
	static volatile uint16_t x540 = UINT16_MAX;
	volatile int32_t t92 = 6;

    t92 = ((x537^(x538*x539))<=x540);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x546 = -1;
	static int8_t x547 = INT8_MIN;
	uint8_t x548 = 55U;

    t93 = ((x545^(x546*x547))<=x548);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x549 = 0U;
	uint32_t x551 = 15089364U;
	int32_t x552 = -1;
	volatile int32_t t94 = -473599;

    t94 = ((x549^(x550*x551))<=x552);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x557 = 117;
	volatile uint64_t x559 = 6965LLU;
	int64_t x560 = -1LL;
	int32_t t95 = -8959;

    t95 = ((x557^(x558*x559))<=x560);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x561 = 25U;
	int32_t x562 = -1;
	int32_t x563 = 4042793;
	int16_t x564 = -1;
	int32_t t96 = -229;

    t96 = ((x561^(x562*x563))<=x564);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x565 = 3;
	int64_t x566 = -201542095521LL;
	int16_t x568 = 94;
	volatile int32_t t97 = 3035065;

    t97 = ((x565^(x566*x567))<=x568);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x570 = -1LL;
	int8_t x571 = -2;
	uint8_t x572 = 1U;
	int32_t t98 = 6;

    t98 = ((x569^(x570*x571))<=x572);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x573 = -576;
	static volatile int8_t x574 = INT8_MAX;
	volatile int16_t x575 = -6;
	int64_t x576 = -1LL;
	static volatile int32_t t99 = -1993453;

    t99 = ((x573^(x574*x575))<=x576);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x577 = UINT64_MAX;
	static int8_t x578 = -1;
	int64_t x579 = INT64_MAX;
	static int32_t t100 = -13084332;

    t100 = ((x577^(x578*x579))<=x580);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x581 = INT64_MAX;
	volatile int64_t x582 = 2LL;
	uint16_t x584 = UINT16_MAX;

    t101 = ((x581^(x582*x583))<=x584);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint32_t x585 = UINT32_MAX;
	int16_t x586 = 4539;
	int8_t x587 = -18;
	int32_t x588 = -1;
	volatile int32_t t102 = -22;

    t102 = ((x585^(x586*x587))<=x588);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x589 = -28LL;
	static int16_t x590 = INT16_MAX;
	uint32_t x591 = 26242482U;
	volatile uint32_t x592 = 27U;
	static volatile int32_t t103 = -20083007;

    t103 = ((x589^(x590*x591))<=x592);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x593 = 5261U;
	int32_t x594 = -12;
	int8_t x595 = 3;
	int64_t x596 = INT64_MIN;

    t104 = ((x593^(x594*x595))<=x596);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x597 = INT8_MIN;
	volatile int8_t x598 = INT8_MIN;
	int8_t x599 = INT8_MIN;
	static int8_t x600 = INT8_MAX;
	static volatile int32_t t105 = 26556301;

    t105 = ((x597^(x598*x599))<=x600);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x601 = 14548878589650LL;
	uint64_t x602 = 79148LLU;
	int16_t x603 = INT16_MAX;
	int32_t x604 = -1;
	volatile int32_t t106 = -97828706;

    t106 = ((x601^(x602*x603))<=x604);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x609 = INT8_MIN;
	int8_t x610 = INT8_MAX;
	uint32_t x611 = UINT32_MAX;
	volatile int8_t x612 = 3;
	static volatile int32_t t107 = -1893514;

    t107 = ((x609^(x610*x611))<=x612);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x617 = UINT16_MAX;
	int8_t x618 = -1;
	volatile int32_t x619 = 123;
	static uint32_t x620 = 313887873U;
	int32_t t108 = 48;

    t108 = ((x617^(x618*x619))<=x620);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x621 = -61;
	int16_t x622 = -1;
	static int32_t x624 = 468671801;
	volatile int32_t t109 = 75;

    t109 = ((x621^(x622*x623))<=x624);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x625 = INT32_MAX;
	int8_t x626 = -1;
	uint8_t x627 = UINT8_MAX;
	volatile int32_t t110 = 3;

    t110 = ((x625^(x626*x627))<=x628);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x629 = 329811146;
	int16_t x630 = INT16_MIN;
	volatile int8_t x632 = -24;

    t111 = ((x629^(x630*x631))<=x632);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int8_t x633 = INT8_MAX;
	volatile uint64_t x634 = UINT64_MAX;
	int64_t x635 = INT64_MAX;
	int32_t x636 = -1;
	static int32_t t112 = -12;

    t112 = ((x633^(x634*x635))<=x636);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x637 = -1;
	int8_t x638 = INT8_MIN;
	int16_t x639 = INT16_MAX;
	static volatile int16_t x640 = INT16_MIN;
	volatile int32_t t113 = 101;

    t113 = ((x637^(x638*x639))<=x640);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x642 = 389935U;
	uint32_t x643 = 20U;
	uint32_t x644 = 121223476U;
	int32_t t114 = -7022;

    t114 = ((x641^(x642*x643))<=x644);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x650 = 7332U;
	uint8_t x651 = UINT8_MAX;
	static int32_t t115 = -5;

    t115 = ((x649^(x650*x651))<=x652);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x653 = 45U;
	static uint16_t x654 = UINT16_MAX;
	int32_t x655 = -405;
	static int32_t t116 = 1;

    t116 = ((x653^(x654*x655))<=x656);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x661 = INT16_MIN;
	static volatile int8_t x662 = INT8_MIN;
	int8_t x663 = -1;
	static volatile int32_t x664 = -1;
	int32_t t117 = -260580;

    t117 = ((x661^(x662*x663))<=x664);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x665 = -1LL;
	int8_t x666 = -1;
	int64_t x667 = 468695679659038878LL;
	volatile int32_t t118 = 51;

    t118 = ((x665^(x666*x667))<=x668);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x670 = INT8_MIN;
	volatile int32_t x671 = -1;
	volatile int64_t x672 = -1LL;

    t119 = ((x669^(x670*x671))<=x672);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x677 = 0;
	static volatile int32_t x679 = -1;
	volatile int32_t x680 = INT32_MAX;
	int32_t t120 = 98;

    t120 = ((x677^(x678*x679))<=x680);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x685 = UINT16_MAX;
	int8_t x687 = 6;
	static int32_t t121 = 10191373;

    t121 = ((x685^(x686*x687))<=x688);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x693 = UINT16_MAX;
	static volatile int8_t x694 = -1;
	volatile int8_t x695 = 1;
	uint16_t x696 = UINT16_MAX;

    t122 = ((x693^(x694*x695))<=x696);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x697 = -1LL;
	int16_t x698 = -973;
	uint8_t x700 = 28U;

    t123 = ((x697^(x698*x699))<=x700);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int8_t x705 = INT8_MIN;
	int8_t x706 = INT8_MIN;
	static uint64_t x708 = 8608343455009730336LLU;
	int32_t t124 = 0;

    t124 = ((x705^(x706*x707))<=x708);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x709 = -935309215;
	int64_t x710 = -1LL;
	volatile int32_t x711 = 5;
	static volatile int16_t x712 = -4702;
	int32_t t125 = -330236662;

    t125 = ((x709^(x710*x711))<=x712);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x717 = UINT8_MAX;
	int16_t x718 = -1;
	uint32_t x719 = UINT32_MAX;
	int64_t x720 = INT64_MAX;

    t126 = ((x717^(x718*x719))<=x720);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x730 = -1LL;
	static int16_t x731 = -1444;
	static volatile int16_t x732 = INT16_MIN;
	static volatile int32_t t127 = -6715506;

    t127 = ((x729^(x730*x731))<=x732);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x733 = 47;
	volatile int16_t x734 = INT16_MIN;
	int64_t x736 = INT64_MIN;
	static volatile int32_t t128 = -83934;

    t128 = ((x733^(x734*x735))<=x736);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x737 = -1LL;
	int32_t x738 = -45468;
	int16_t x739 = INT16_MIN;
	static volatile uint16_t x740 = UINT16_MAX;
	static int32_t t129 = 202372;

    t129 = ((x737^(x738*x739))<=x740);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x741 = INT8_MIN;
	volatile int8_t x742 = INT8_MIN;
	int8_t x743 = INT8_MIN;
	int16_t x744 = INT16_MAX;
	volatile int32_t t130 = -2857;

    t130 = ((x741^(x742*x743))<=x744);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x745 = 1486445287009LL;
	int64_t x746 = INT64_MAX;
	int32_t t131 = 889;

    t131 = ((x745^(x746*x747))<=x748);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x749 = UINT16_MAX;
	volatile int16_t x750 = 641;
	volatile uint8_t x751 = UINT8_MAX;
	uint8_t x752 = 2U;

    t132 = ((x749^(x750*x751))<=x752);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x754 = 11LLU;
	int32_t x755 = INT32_MIN;
	int16_t x756 = 3942;
	int32_t t133 = 0;

    t133 = ((x753^(x754*x755))<=x756);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x757 = 39U;
	int8_t x758 = INT8_MIN;
	volatile uint32_t x760 = UINT32_MAX;
	static volatile int32_t t134 = -25184777;

    t134 = ((x757^(x758*x759))<=x760);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x761 = -1LL;
	uint8_t x762 = 0U;
	uint32_t x763 = 3948115U;

    t135 = ((x761^(x762*x763))<=x764);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x765 = UINT16_MAX;
	static uint16_t x768 = 312U;

    t136 = ((x765^(x766*x767))<=x768);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x769 = -16;
	volatile int8_t x770 = 1;
	volatile int8_t x771 = INT8_MAX;
	volatile int16_t x772 = INT16_MIN;
	int32_t t137 = -156454685;

    t137 = ((x769^(x770*x771))<=x772);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x773 = INT32_MAX;
	uint32_t x774 = UINT32_MAX;
	int8_t x775 = INT8_MIN;
	static volatile int32_t t138 = 5;

    t138 = ((x773^(x774*x775))<=x776);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint16_t x777 = 822U;
	static uint16_t x778 = 122U;
	volatile int32_t x779 = -6;
	static uint32_t x780 = 0U;
	int32_t t139 = 214942813;

    t139 = ((x777^(x778*x779))<=x780);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x781 = 422U;
	int16_t x784 = 26;
	static int32_t t140 = 16023;

    t140 = ((x781^(x782*x783))<=x784);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x785 = INT8_MIN;
	static uint8_t x786 = UINT8_MAX;
	static int32_t t141 = 13047026;

    t141 = ((x785^(x786*x787))<=x788);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x789 = UINT16_MAX;
	uint64_t x790 = 416403799184684278LLU;
	int64_t x791 = -1LL;
	int32_t x792 = 54607773;

    t142 = ((x789^(x790*x791))<=x792);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x797 = -64LL;
	static int8_t x798 = INT8_MIN;
	volatile uint32_t x799 = UINT32_MAX;
	volatile int32_t t143 = 3010691;

    t143 = ((x797^(x798*x799))<=x800);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int8_t x801 = INT8_MIN;
	static int64_t x803 = 428775112868125255LL;
	int32_t x804 = -3279;

    t144 = ((x801^(x802*x803))<=x804);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x805 = INT8_MIN;
	int8_t x808 = INT8_MIN;
	int32_t t145 = -30560;

    t145 = ((x805^(x806*x807))<=x808);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x809 = INT16_MIN;
	volatile uint64_t x810 = UINT64_MAX;
	volatile int16_t x811 = INT16_MIN;
	uint16_t x812 = 11532U;
	static volatile int32_t t146 = -330;

    t146 = ((x809^(x810*x811))<=x812);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x813 = 1;
	static int8_t x814 = 1;
	volatile int64_t x815 = -110353118LL;
	int32_t x816 = INT32_MIN;
	int32_t t147 = -322753;

    t147 = ((x813^(x814*x815))<=x816);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x817 = -1LL;
	static uint32_t x818 = UINT32_MAX;
	int64_t x819 = -1LL;
	volatile int32_t t148 = -189;

    t148 = ((x817^(x818*x819))<=x820);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x821 = -1;
	int16_t x822 = 0;
	int8_t x823 = INT8_MAX;

    t149 = ((x821^(x822*x823))<=x824);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x825 = INT16_MAX;
	static int8_t x826 = 1;
	int32_t x827 = -1;
	uint8_t x828 = UINT8_MAX;
	static volatile int32_t t150 = -183967279;

    t150 = ((x825^(x826*x827))<=x828);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x829 = INT8_MAX;
	uint8_t x830 = 7U;
	static int64_t x831 = 34725177874LL;
	static int32_t x832 = INT32_MIN;
	int32_t t151 = -173;

    t151 = ((x829^(x830*x831))<=x832);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x833 = -1LL;
	uint16_t x834 = 17U;
	int32_t x835 = -1;
	uint32_t x836 = 32055712U;
	volatile int32_t t152 = 6954573;

    t152 = ((x833^(x834*x835))<=x836);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x837 = 85U;
	int16_t x839 = INT16_MAX;
	static volatile int16_t x840 = INT16_MIN;
	static volatile int32_t t153 = 14;

    t153 = ((x837^(x838*x839))<=x840);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x841 = -395;
	static uint64_t x842 = UINT64_MAX;
	static uint64_t x844 = UINT64_MAX;
	int32_t t154 = 25820;

    t154 = ((x841^(x842*x843))<=x844);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint64_t x846 = 92340LLU;
	uint8_t x847 = 2U;
	volatile int32_t t155 = 20350855;

    t155 = ((x845^(x846*x847))<=x848);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x849 = 14136;
	int64_t x852 = INT64_MIN;
	volatile int32_t t156 = -1;

    t156 = ((x849^(x850*x851))<=x852);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x866 = 30LLU;
	static int64_t x867 = -1LL;
	int64_t x868 = -1LL;
	static volatile int32_t t157 = -6;

    t157 = ((x865^(x866*x867))<=x868);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x869 = -1;
	static int8_t x870 = INT8_MAX;
	volatile int32_t x871 = -675697;
	volatile int32_t t158 = 3403977;

    t158 = ((x869^(x870*x871))<=x872);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x874 = UINT8_MAX;
	int16_t x875 = -50;
	static int32_t t159 = 24640986;

    t159 = ((x873^(x874*x875))<=x876);

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x877 = INT32_MAX;
	volatile int16_t x878 = INT16_MAX;
	volatile int32_t x879 = 2;
	uint16_t x880 = UINT16_MAX;
	volatile int32_t t160 = -6786;

    t160 = ((x877^(x878*x879))<=x880);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x885 = 26073596532LLU;
	volatile uint32_t x886 = UINT32_MAX;
	static uint16_t x888 = UINT16_MAX;
	int32_t t161 = 4519;

    t161 = ((x885^(x886*x887))<=x888);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x889 = UINT32_MAX;
	volatile int8_t x890 = -55;
	int32_t x892 = -11;
	int32_t t162 = -1;

    t162 = ((x889^(x890*x891))<=x892);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x893 = 0U;
	static uint8_t x894 = 4U;
	static uint16_t x895 = 6U;
	static uint8_t x896 = UINT8_MAX;
	static int32_t t163 = 496782800;

    t163 = ((x893^(x894*x895))<=x896);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static int8_t x897 = INT8_MIN;
	static uint8_t x899 = 15U;
	volatile int8_t x900 = INT8_MIN;
	volatile int32_t t164 = 36378;

    t164 = ((x897^(x898*x899))<=x900);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x901 = -6;
	volatile uint8_t x902 = 43U;
	static volatile int32_t x903 = 7;
	static uint64_t x904 = 2076380187LLU;
	int32_t t165 = 548299;

    t165 = ((x901^(x902*x903))<=x904);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile int16_t x905 = INT16_MIN;
	uint16_t x906 = 2460U;
	uint32_t x908 = 133951280U;
	int32_t t166 = -10204962;

    t166 = ((x905^(x906*x907))<=x908);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x911 = 265596102U;
	volatile int8_t x912 = -1;
	static volatile int32_t t167 = -3555;

    t167 = ((x909^(x910*x911))<=x912);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int64_t x913 = -1LL;
	int32_t x914 = -1;
	static int16_t x915 = 555;
	static int8_t x916 = INT8_MAX;

    t168 = ((x913^(x914*x915))<=x916);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x917 = 2093;
	int64_t x918 = -36LL;
	int8_t x919 = INT8_MAX;
	uint8_t x920 = 12U;

    t169 = ((x917^(x918*x919))<=x920);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x929 = INT16_MIN;
	static int64_t x930 = -1LL;
	volatile int64_t x931 = -1LL;
	uint64_t x932 = UINT64_MAX;
	static volatile int32_t t170 = 217634;

    t170 = ((x929^(x930*x931))<=x932);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x933 = 1196581;
	volatile uint64_t x934 = 16008332610946LLU;
	volatile int16_t x935 = -6;

    t171 = ((x933^(x934*x935))<=x936);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x937 = 0U;
	static uint64_t x940 = UINT64_MAX;
	volatile int32_t t172 = -154;

    t172 = ((x937^(x938*x939))<=x940);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x941 = 755U;
	int16_t x942 = INT16_MIN;
	static volatile int16_t x943 = INT16_MIN;
	static int32_t x944 = -1;
	int32_t t173 = 14051;

    t173 = ((x941^(x942*x943))<=x944);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x946 = 349090U;
	volatile uint8_t x948 = UINT8_MAX;
	volatile int32_t t174 = -17155;

    t174 = ((x945^(x946*x947))<=x948);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x950 = INT8_MIN;
	uint64_t x952 = 128792759740LLU;

    t175 = ((x949^(x950*x951))<=x952);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x953 = -1;
	int32_t x954 = -2946890;
	uint16_t x955 = 2U;
	static volatile uint32_t x956 = UINT32_MAX;
	volatile int32_t t176 = -5;

    t176 = ((x953^(x954*x955))<=x956);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x957 = UINT64_MAX;
	static uint16_t x959 = 26U;
	int16_t x960 = INT16_MIN;
	static volatile int32_t t177 = 0;

    t177 = ((x957^(x958*x959))<=x960);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x962 = -1LL;
	static uint64_t x963 = 1148233139464363279LLU;
	int8_t x964 = INT8_MAX;
	volatile int32_t t178 = 11830;

    t178 = ((x961^(x962*x963))<=x964);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x965 = 30U;
	uint16_t x967 = 121U;

    t179 = ((x965^(x966*x967))<=x968);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x969 = UINT64_MAX;
	static int32_t x970 = INT32_MIN;
	uint64_t x971 = UINT64_MAX;
	volatile int32_t t180 = 29704;

    t180 = ((x969^(x970*x971))<=x972);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint32_t x973 = 68684U;
	int64_t x974 = -454948LL;
	static int16_t x976 = -1;

    t181 = ((x973^(x974*x975))<=x976);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x977 = -1;
	static int16_t x978 = 1;
	int64_t x979 = -101LL;
	int32_t t182 = -292597;

    t182 = ((x977^(x978*x979))<=x980);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint8_t x982 = 66U;
	uint32_t x983 = UINT32_MAX;
	uint64_t x984 = 1LLU;
	volatile int32_t t183 = -15;

    t183 = ((x981^(x982*x983))<=x984);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x989 = INT64_MIN;
	volatile uint16_t x990 = 0U;
	int8_t x991 = -2;
	volatile int64_t x992 = -1LL;
	volatile int32_t t184 = 16;

    t184 = ((x989^(x990*x991))<=x992);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int8_t x993 = INT8_MIN;
	uint64_t x994 = 11472181017189086LLU;
	volatile int64_t x995 = -296283408483769411LL;
	int32_t x996 = -1;
	static volatile int32_t t185 = 69486;

    t185 = ((x993^(x994*x995))<=x996);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x997 = 1038;
	uint32_t x998 = 67U;
	uint32_t x999 = UINT32_MAX;
	int8_t x1000 = INT8_MIN;
	int32_t t186 = -931548165;

    t186 = ((x997^(x998*x999))<=x1000);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1002 = 25422U;
	int8_t x1003 = -19;
	int32_t t187 = 9;

    t187 = ((x1001^(x1002*x1003))<=x1004);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x1013 = UINT8_MAX;
	static int8_t x1014 = 45;
	static int16_t x1016 = INT16_MIN;

    t188 = ((x1013^(x1014*x1015))<=x1016);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1017 = UINT16_MAX;
	static int16_t x1018 = 0;
	static int32_t x1019 = -58927304;
	uint64_t x1020 = 3287649150099LLU;
	volatile int32_t t189 = 15554;

    t189 = ((x1017^(x1018*x1019))<=x1020);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1021 = INT64_MAX;
	int16_t x1022 = 109;
	int16_t x1023 = -9925;
	int8_t x1024 = -1;
	int32_t t190 = 1631453;

    t190 = ((x1021^(x1022*x1023))<=x1024);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x1026 = -14207441058040150LL;
	int64_t x1028 = INT64_MIN;
	int32_t t191 = 1546264;

    t191 = ((x1025^(x1026*x1027))<=x1028);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x1029 = -1;
	uint32_t x1031 = 465U;
	volatile int64_t x1032 = 874816648184605LL;
	volatile int32_t t192 = 727;

    t192 = ((x1029^(x1030*x1031))<=x1032);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int16_t x1033 = -84;
	int16_t x1034 = INT16_MIN;
	volatile int16_t x1035 = INT16_MIN;
	int8_t x1036 = -1;
	int32_t t193 = -4873592;

    t193 = ((x1033^(x1034*x1035))<=x1036);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1037 = -1;
	volatile uint8_t x1038 = 7U;
	int64_t x1039 = -1LL;
	volatile int32_t t194 = 2;

    t194 = ((x1037^(x1038*x1039))<=x1040);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1045 = INT16_MAX;
	int8_t x1046 = INT8_MAX;
	uint64_t x1047 = 212988685976798455LLU;
	int32_t t195 = -1;

    t195 = ((x1045^(x1046*x1047))<=x1048);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1049 = INT16_MIN;
	uint64_t x1050 = 24502427129859701LLU;
	static volatile uint32_t x1051 = 50544437U;
	int32_t t196 = 122136;

    t196 = ((x1049^(x1050*x1051))<=x1052);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1053 = 10;
	static int8_t x1054 = 1;
	static uint8_t x1055 = UINT8_MAX;
	uint8_t x1056 = UINT8_MAX;
	volatile int32_t t197 = -92;

    t197 = ((x1053^(x1054*x1055))<=x1056);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1057 = INT32_MIN;
	int8_t x1058 = -1;
	int32_t x1059 = INT32_MAX;

    t198 = ((x1057^(x1058*x1059))<=x1060);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1061 = INT32_MIN;
	volatile int16_t x1063 = INT16_MAX;
	static uint32_t x1064 = 88168U;
	int32_t t199 = 3460;

    t199 = ((x1061^(x1062*x1063))<=x1064);

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

