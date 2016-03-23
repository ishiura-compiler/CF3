
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

volatile int8_t x1 = -1;
int8_t x13 = 23;
static uint16_t x40 = 19U;
volatile int32_t t8 = -240788220;
static volatile int16_t x42 = INT16_MAX;
uint64_t x43 = 95LLU;
volatile int32_t t10 = -1339;
volatile int32_t t11 = 5482;
uint16_t x62 = UINT16_MAX;
int32_t x69 = 1;
static uint64_t x71 = UINT64_MAX;
volatile int16_t x76 = INT16_MAX;
uint32_t x77 = UINT32_MAX;
uint32_t x78 = 106525470U;
uint64_t x93 = UINT64_MAX;
uint16_t x105 = 0U;
int8_t x107 = INT8_MIN;
int8_t x112 = -1;
int32_t x123 = INT32_MIN;
uint32_t x125 = UINT32_MAX;
uint64_t x128 = 1887453491252LLU;
uint8_t x133 = UINT8_MAX;
int8_t x137 = 0;
int64_t x139 = 24LL;
volatile int32_t t24 = 943886308;
uint64_t x142 = 8346915267425165LLU;
static int16_t x145 = INT16_MAX;
int16_t x146 = INT16_MIN;
int64_t x153 = -1LL;
uint8_t x155 = 0U;
static int32_t t28 = -112896;
volatile int64_t x157 = -7149764LL;
int64_t x159 = -4933415521LL;
volatile uint8_t x160 = 7U;
uint32_t x162 = UINT32_MAX;
int16_t x163 = INT16_MIN;
int32_t x167 = -1;
static int32_t t33 = 0;
static volatile int16_t x186 = INT16_MIN;
volatile int64_t x190 = -221154876038919671LL;
static volatile int32_t t36 = -6619;
static int8_t x202 = INT8_MAX;
volatile int16_t x204 = -1;
int32_t x208 = -1;
static int8_t x212 = INT8_MAX;
int32_t x215 = -105;
uint64_t x219 = 62465253LLU;
uint32_t x239 = 15998231U;
volatile int64_t x254 = -1LL;
volatile uint8_t x257 = UINT8_MAX;
int64_t x258 = -4920LL;
static int8_t x262 = -1;
int32_t x266 = INT32_MIN;
volatile int32_t t51 = 13247664;
int8_t x277 = -1;
int64_t x282 = -1LL;
static volatile int32_t t53 = -22168;
int16_t x287 = -1;
int8_t x295 = 1;
volatile int64_t x297 = -1LL;
int64_t x299 = -1277577LL;
static int16_t x303 = -203;
static uint32_t x304 = UINT32_MAX;
int64_t x305 = INT64_MAX;
int64_t x307 = INT64_MIN;
uint16_t x314 = 315U;
static volatile uint16_t x319 = 1485U;
int64_t x320 = -1LL;
uint8_t x323 = 4U;
static int64_t x325 = -1LL;
volatile int16_t x338 = 1803;
int8_t x339 = INT8_MIN;
int64_t x343 = INT64_MAX;
int32_t t66 = 981;
uint8_t x374 = 0U;
uint8_t x377 = 76U;
int32_t t72 = 909334571;
static int8_t x381 = -1;
uint32_t x385 = 21212U;
static int8_t x401 = 0;
volatile int32_t x403 = INT32_MIN;
int8_t x416 = INT8_MAX;
static uint64_t x421 = 2042018458LLU;
volatile uint32_t x423 = UINT32_MAX;
uint8_t x424 = UINT8_MAX;
int32_t t83 = -11;
static volatile uint8_t x435 = 9U;
int8_t x446 = 0;
static volatile int8_t x450 = 1;
uint64_t x451 = UINT64_MAX;
volatile int8_t x452 = 0;
int32_t t87 = 13932241;
uint8_t x457 = 9U;
int16_t x458 = INT16_MIN;
uint8_t x465 = 105U;
volatile int32_t t91 = 1324950;
volatile uint64_t x473 = 4196483792629238LLU;
int16_t x479 = INT16_MAX;
static int32_t x480 = -1;
int32_t x485 = INT32_MAX;
int32_t x492 = INT32_MIN;
volatile uint64_t x495 = 3LLU;
int64_t x500 = INT64_MIN;
int8_t x504 = INT8_MIN;
static int32_t x511 = -3;
volatile uint16_t x512 = UINT16_MAX;
uint64_t x514 = 50LLU;
int8_t x527 = INT8_MAX;
uint16_t x528 = 5U;
int32_t t103 = 84;
int32_t x537 = 16644976;
int64_t x538 = -1LL;
int8_t x544 = INT8_MIN;
volatile uint16_t x546 = UINT16_MAX;
static int64_t x550 = INT64_MIN;
int32_t t108 = 15571;
uint64_t x554 = 17993LLU;
int32_t x555 = 5886;
static int64_t x569 = -1LL;
uint32_t x570 = UINT32_MAX;
int32_t x574 = INT32_MIN;
static volatile int32_t t113 = -4082691;
static int32_t t114 = -3803;
uint64_t x582 = UINT64_MAX;
volatile int8_t x584 = INT8_MIN;
volatile int32_t x589 = INT32_MAX;
static int64_t x592 = INT64_MAX;
volatile int32_t t117 = -39529;
volatile int64_t x597 = -1LL;
volatile uint32_t x598 = 383281U;
volatile int32_t t119 = -314761;
static int16_t x606 = INT16_MAX;
static int32_t x618 = 3;
int32_t t125 = -3678;
int8_t x639 = INT8_MIN;
int32_t t126 = -107803;
volatile int32_t x642 = -1;
uint8_t x646 = 10U;
volatile int16_t x648 = 152;
volatile int8_t x663 = INT8_MAX;
int16_t x665 = -1;
volatile int8_t x667 = INT8_MAX;
static int32_t t133 = 0;
int8_t x681 = INT8_MAX;
volatile int32_t t135 = 93304;
volatile int32_t x688 = -1;
int32_t t136 = 3952243;
int32_t x691 = -2965858;
int32_t t137 = -326;
volatile int16_t x694 = INT16_MIN;
volatile int32_t t138 = 123804;
uint16_t x715 = UINT16_MAX;
int16_t x717 = -1;
int16_t x722 = -1;
uint64_t x731 = UINT64_MAX;
static int16_t x733 = INT16_MIN;
uint16_t x737 = 13U;
volatile int32_t t146 = 231410354;
volatile int32_t t153 = 2;
uint32_t x783 = UINT32_MAX;
int16_t x790 = 139;
int32_t t155 = 900;
int64_t x807 = 13559276067072LL;
int32_t t157 = -741256267;
uint64_t x815 = 1561020LLU;
uint32_t x821 = UINT32_MAX;
int8_t x826 = INT8_MAX;
static int32_t x828 = -1;
static int32_t x831 = INT32_MIN;
uint8_t x832 = 15U;
int64_t x833 = 1303991616331LL;
uint64_t x835 = 5614938609LLU;
uint16_t x839 = UINT16_MAX;
uint64_t x841 = UINT64_MAX;
volatile uint64_t x842 = 358546187117673252LLU;
int64_t x843 = INT64_MIN;
static int32_t t165 = 9;
uint32_t x850 = UINT32_MAX;
int8_t x852 = -1;
int32_t t167 = 0;
volatile int32_t x867 = INT32_MIN;
static volatile int32_t t168 = -14614;
int64_t x876 = INT64_MAX;
volatile int32_t t170 = 12157140;
static int8_t x883 = INT8_MIN;
uint64_t x891 = UINT64_MAX;
int32_t x892 = INT32_MIN;
int32_t x895 = -1;
volatile int8_t x896 = -1;
int64_t x918 = INT64_MAX;
int64_t x920 = -91784263442574922LL;
int32_t x925 = 4655;
int32_t x929 = -1;
volatile int16_t x930 = -1;
uint32_t x936 = 247U;
volatile int32_t t183 = -48;
static int32_t x946 = -80072;
uint32_t x950 = UINT32_MAX;
uint16_t x958 = UINT16_MAX;
int64_t x961 = INT64_MIN;
int8_t x963 = INT8_MIN;
int16_t x974 = INT16_MIN;
static volatile int32_t x980 = -706;
uint64_t x981 = UINT64_MAX;
int64_t x988 = INT64_MAX;
volatile int32_t t196 = -1110458;
static uint64_t x997 = 2213173LLU;
int8_t x999 = -1;


void f0(void) {
    	static int8_t x2 = -21;
	uint64_t x3 = 6LLU;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 438256675;

    t0 = ((x1+(x2+x3))<=x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -35277;
	int16_t x6 = -161;
	uint8_t x7 = 0U;
	volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -62127311;

    t1 = ((x5+(x6+x7))<=x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = INT16_MIN;
	int64_t x10 = 203800LL;
	static int8_t x11 = INT8_MIN;
	uint32_t x12 = 16539U;
	volatile int32_t t2 = 585;

    t2 = ((x9+(x10+x11))<=x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -1;
	int16_t x15 = 479;
	int32_t x16 = -117;
	volatile int32_t t3 = 419;

    t3 = ((x13+(x14+x15))<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x17 = UINT64_MAX;
	int64_t x18 = -4796LL;
	int64_t x19 = -1LL;
	static int64_t x20 = -48411178LL;
	int32_t t4 = -30337;

    t4 = ((x17+(x18+x19))<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = 60;
	int32_t x22 = INT32_MIN;
	uint16_t x23 = 32U;
	int16_t x24 = -3934;
	int32_t t5 = 297381;

    t5 = ((x21+(x22+x23))<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint32_t x26 = 9U;
	uint64_t x27 = 513428092191361316LLU;
	uint16_t x28 = UINT16_MAX;
	int32_t t6 = 1;

    t6 = ((x25+(x26+x27))<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int8_t x29 = INT8_MIN;
	static int8_t x30 = INT8_MAX;
	int64_t x31 = -3662LL;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = -1344408;

    t7 = ((x29+(x30+x31))<=x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x37 = 1728448U;
	static int16_t x38 = INT16_MAX;
	uint32_t x39 = UINT32_MAX;

    t8 = ((x37+(x38+x39))<=x40);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 6U;
	uint32_t x44 = 300310U;
	int32_t t9 = 1;

    t9 = ((x41+(x42+x43))<=x44);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x45 = 1U;
	static uint16_t x46 = 7U;
	int32_t x47 = 1;
	uint8_t x48 = UINT8_MAX;

    t10 = ((x45+(x46+x47))<=x48);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x49 = INT8_MIN;
	volatile uint16_t x50 = 593U;
	uint32_t x51 = 259409069U;
	static int16_t x52 = INT16_MIN;

    t11 = ((x49+(x50+x51))<=x52);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int64_t x53 = 714143419748LL;
	static int32_t x54 = -1;
	static int16_t x55 = INT16_MAX;
	static int64_t x56 = -1LL;
	int32_t t12 = 3194;

    t12 = ((x53+(x54+x55))<=x56);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static uint8_t x61 = UINT8_MAX;
	int16_t x63 = INT16_MAX;
	int32_t x64 = -1;
	volatile int32_t t13 = 22220173;

    t13 = ((x61+(x62+x63))<=x64);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = 3U;
	volatile int16_t x66 = INT16_MAX;
	int8_t x67 = -1;
	static volatile uint8_t x68 = 12U;
	int32_t t14 = 24863907;

    t14 = ((x65+(x66+x67))<=x68);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x70 = 327772644336926488LLU;
	volatile int16_t x72 = 20;
	int32_t t15 = -1;

    t15 = ((x69+(x70+x71))<=x72);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	static int16_t x75 = INT16_MIN;
	static int32_t t16 = -1;

    t16 = ((x73+(x74+x75))<=x76);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x79 = INT32_MIN;
	int8_t x80 = -22;
	int32_t t17 = -823125;

    t17 = ((x77+(x78+x79))<=x80);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x94 = INT16_MAX;
	volatile uint64_t x95 = 4226180878672953989LLU;
	static uint32_t x96 = UINT32_MAX;
	int32_t t18 = -1;

    t18 = ((x93+(x94+x95))<=x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x106 = INT8_MAX;
	volatile int32_t x108 = 361;
	int32_t t19 = 170187;

    t19 = ((x105+(x106+x107))<=x108);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MIN;
	static int8_t x111 = -1;
	int32_t t20 = -1;

    t20 = ((x109+(x110+x111))<=x112);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x121 = INT16_MIN;
	uint32_t x122 = 68214427U;
	volatile int32_t x124 = -1;
	volatile int32_t t21 = 1665;

    t21 = ((x121+(x122+x123))<=x124);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x126 = 7697112271738LLU;
	int8_t x127 = INT8_MIN;
	int32_t t22 = 88316833;

    t22 = ((x125+(x126+x127))<=x128);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x134 = INT64_MAX;
	int64_t x135 = -17463663362879660LL;
	int16_t x136 = INT16_MAX;
	volatile int32_t t23 = 7;

    t23 = ((x133+(x134+x135))<=x136);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x138 = INT8_MIN;
	static uint64_t x140 = UINT64_MAX;

    t24 = ((x137+(x138+x139))<=x140);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x141 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 2U;
	int32_t t25 = -7;

    t25 = ((x141+(x142+x143))<=x144);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x147 = UINT32_MAX;
	int16_t x148 = -1;
	static int32_t t26 = 16;

    t26 = ((x145+(x146+x147))<=x148);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint64_t x149 = 0LLU;
	int32_t x150 = -367;
	volatile int8_t x151 = -18;
	int16_t x152 = INT16_MAX;
	volatile int32_t t27 = 42;

    t27 = ((x149+(x150+x151))<=x152);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x154 = -37;
	volatile uint8_t x156 = UINT8_MAX;

    t28 = ((x153+(x154+x155))<=x156);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int32_t x158 = INT32_MIN;
	volatile int32_t t29 = -55746627;

    t29 = ((x157+(x158+x159))<=x160);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x161 = INT32_MAX;
	int32_t x164 = INT32_MAX;
	volatile int32_t t30 = 96946220;

    t30 = ((x161+(x162+x163))<=x164);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x165 = INT16_MIN;
	int64_t x166 = 0LL;
	int8_t x168 = 0;
	static volatile int32_t t31 = -7;

    t31 = ((x165+(x166+x167))<=x168);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint16_t x173 = 31U;
	int16_t x174 = 1;
	static uint32_t x175 = 118683U;
	int8_t x176 = INT8_MAX;
	int32_t t32 = 60223;

    t32 = ((x173+(x174+x175))<=x176);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x177 = 3329456LL;
	int64_t x178 = INT64_MIN;
	uint64_t x179 = 15736LLU;
	int64_t x180 = -1LL;

    t33 = ((x177+(x178+x179))<=x180);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x185 = INT64_MAX;
	static uint16_t x187 = 0U;
	static int8_t x188 = -33;
	volatile int32_t t34 = -31309;

    t34 = ((x185+(x186+x187))<=x188);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x189 = -56948;
	volatile int64_t x191 = 2LL;
	int16_t x192 = INT16_MIN;
	int32_t t35 = -324225;

    t35 = ((x189+(x190+x191))<=x192);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x193 = INT16_MAX;
	int64_t x194 = INT64_MIN;
	volatile uint64_t x195 = 20938255998843LLU;
	volatile int8_t x196 = -1;

    t36 = ((x193+(x194+x195))<=x196);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x197 = 591411277;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = -1;
	uint8_t x200 = 24U;
	int32_t t37 = 2137670;

    t37 = ((x197+(x198+x199))<=x200);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint16_t x201 = 2U;
	volatile uint64_t x203 = UINT64_MAX;
	static int32_t t38 = -29112;

    t38 = ((x201+(x202+x203))<=x204);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x205 = INT8_MAX;
	volatile uint8_t x206 = 122U;
	int32_t x207 = -1;
	int32_t t39 = 9928564;

    t39 = ((x205+(x206+x207))<=x208);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x209 = 8663305U;
	uint32_t x210 = 21182U;
	int8_t x211 = INT8_MAX;
	int32_t t40 = -4200;

    t40 = ((x209+(x210+x211))<=x212);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x213 = 13;
	static int8_t x214 = INT8_MIN;
	uint8_t x216 = 10U;
	int32_t t41 = -209047;

    t41 = ((x213+(x214+x215))<=x216);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x217 = -102832734LL;
	volatile uint16_t x218 = UINT16_MAX;
	uint8_t x220 = UINT8_MAX;
	int32_t t42 = 175;

    t42 = ((x217+(x218+x219))<=x220);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x221 = INT64_MIN;
	uint32_t x222 = 124111160U;
	int64_t x223 = 312872771873372LL;
	int64_t x224 = -1LL;
	int32_t t43 = -389941288;

    t43 = ((x221+(x222+x223))<=x224);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x225 = -6184;
	uint16_t x226 = 12851U;
	static volatile int16_t x227 = -1;
	int64_t x228 = INT64_MIN;
	int32_t t44 = 11373;

    t44 = ((x225+(x226+x227))<=x228);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x229 = INT16_MIN;
	int8_t x230 = 0;
	int16_t x231 = -1;
	uint32_t x232 = 7934U;
	volatile int32_t t45 = -3455;

    t45 = ((x229+(x230+x231))<=x232);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x237 = INT16_MIN;
	uint16_t x238 = UINT16_MAX;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t46 = -1000498;

    t46 = ((x237+(x238+x239))<=x240);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x249 = INT8_MIN;
	static uint16_t x250 = 50U;
	volatile int8_t x251 = 1;
	int64_t x252 = 691146514796034LL;
	static int32_t t47 = -1;

    t47 = ((x249+(x250+x251))<=x252);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x253 = INT16_MIN;
	static uint16_t x255 = 0U;
	volatile int64_t x256 = -1LL;
	volatile int32_t t48 = 222825806;

    t48 = ((x253+(x254+x255))<=x256);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = INT64_MAX;
	int32_t t49 = -292254;

    t49 = ((x257+(x258+x259))<=x260);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int8_t x261 = -1;
	uint64_t x263 = 4847310568LLU;
	int16_t x264 = -1;
	volatile int32_t t50 = -12409;

    t50 = ((x261+(x262+x263))<=x264);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static int8_t x265 = 1;
	int64_t x267 = -698256LL;
	int64_t x268 = INT64_MAX;

    t51 = ((x265+(x266+x267))<=x268);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x278 = 246U;
	int32_t x279 = INT32_MIN;
	static volatile uint16_t x280 = 1U;
	static int32_t t52 = -124698;

    t52 = ((x277+(x278+x279))<=x280);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x281 = UINT32_MAX;
	int32_t x283 = INT32_MIN;
	volatile uint8_t x284 = 9U;

    t53 = ((x281+(x282+x283))<=x284);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x285 = UINT64_MAX;
	static int16_t x286 = 20;
	static int64_t x288 = -67981852753LL;
	int32_t t54 = 139882085;

    t54 = ((x285+(x286+x287))<=x288);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x289 = 8U;
	uint32_t x290 = 117570062U;
	uint8_t x291 = UINT8_MAX;
	int64_t x292 = 2LL;
	int32_t t55 = -7368;

    t55 = ((x289+(x290+x291))<=x292);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x293 = 1;
	int16_t x294 = 0;
	int32_t x296 = INT32_MIN;
	volatile int32_t t56 = 1109778;

    t56 = ((x293+(x294+x295))<=x296);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x298 = INT64_MAX;
	int64_t x300 = INT64_MAX;
	int32_t t57 = -14237538;

    t57 = ((x297+(x298+x299))<=x300);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int16_t x301 = -1;
	volatile uint64_t x302 = UINT64_MAX;
	volatile int32_t t58 = -5313768;

    t58 = ((x301+(x302+x303))<=x304);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x306 = 231386023LL;
	volatile uint64_t x308 = 109LLU;
	volatile int32_t t59 = -964587;

    t59 = ((x305+(x306+x307))<=x308);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x309 = 27U;
	static uint16_t x310 = UINT16_MAX;
	uint8_t x311 = 25U;
	int8_t x312 = 32;
	int32_t t60 = 2815924;

    t60 = ((x309+(x310+x311))<=x312);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint32_t x313 = UINT32_MAX;
	static uint8_t x315 = UINT8_MAX;
	static int64_t x316 = -40453274LL;
	volatile int32_t t61 = 8348306;

    t61 = ((x313+(x314+x315))<=x316);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x317 = -282230247166250LL;
	static uint16_t x318 = UINT16_MAX;
	volatile int32_t t62 = 109442;

    t62 = ((x317+(x318+x319))<=x320);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x321 = 31345LLU;
	int64_t x322 = INT64_MIN;
	volatile int8_t x324 = -46;
	volatile int32_t t63 = 10739;

    t63 = ((x321+(x322+x323))<=x324);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = 0U;
	int32_t t64 = 22914;

    t64 = ((x325+(x326+x327))<=x328);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x337 = -411838869;
	int8_t x340 = 24;
	volatile int32_t t65 = 21799;

    t65 = ((x337+(x338+x339))<=x340);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x341 = 2U;
	uint64_t x342 = UINT64_MAX;
	int32_t x344 = -29825695;

    t66 = ((x341+(x342+x343))<=x344);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x345 = -2;
	volatile int8_t x346 = INT8_MIN;
	static volatile uint8_t x347 = 1U;
	uint32_t x348 = 259452881U;
	int32_t t67 = -10;

    t67 = ((x345+(x346+x347))<=x348);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x349 = 5U;
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = INT16_MIN;
	int32_t t68 = 1907988;

    t68 = ((x349+(x350+x351))<=x352);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x353 = INT32_MIN;
	uint32_t x354 = 3037U;
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = -1LL;
	static int32_t t69 = 12;

    t69 = ((x353+(x354+x355))<=x356);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x369 = 8;
	volatile int32_t x370 = -1279;
	uint32_t x371 = 587U;
	uint64_t x372 = 1551690LLU;
	int32_t t70 = 31068;

    t70 = ((x369+(x370+x371))<=x372);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x373 = 516;
	int16_t x375 = -1796;
	int8_t x376 = 1;
	int32_t t71 = -4820;

    t71 = ((x373+(x374+x375))<=x376);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x378 = -1LL;
	int16_t x379 = INT16_MIN;
	static int32_t x380 = INT32_MAX;

    t72 = ((x377+(x378+x379))<=x380);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x382 = 547090085631LLU;
	int32_t x383 = INT32_MIN;
	static int64_t x384 = -1LL;
	volatile int32_t t73 = -80073;

    t73 = ((x381+(x382+x383))<=x384);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x386 = 124U;
	int8_t x387 = INT8_MAX;
	int32_t x388 = -660485;
	static int32_t t74 = -1066724575;

    t74 = ((x385+(x386+x387))<=x388);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x389 = INT16_MIN;
	int64_t x390 = 275603308641757504LL;
	int16_t x391 = INT16_MAX;
	volatile int64_t x392 = INT64_MIN;
	static int32_t t75 = 0;

    t75 = ((x389+(x390+x391))<=x392);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int32_t x397 = INT32_MAX;
	static int8_t x398 = 14;
	uint32_t x399 = 26012U;
	int8_t x400 = 2;
	volatile int32_t t76 = 11;

    t76 = ((x397+(x398+x399))<=x400);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x402 = INT16_MAX;
	int8_t x404 = 29;
	int32_t t77 = 0;

    t77 = ((x401+(x402+x403))<=x404);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x405 = -174;
	uint8_t x406 = 108U;
	int16_t x407 = INT16_MAX;
	int64_t x408 = -1LL;
	static volatile int32_t t78 = -1;

    t78 = ((x405+(x406+x407))<=x408);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x413 = 6U;
	int8_t x414 = INT8_MAX;
	static volatile int32_t x415 = 1;
	static int32_t t79 = -219858197;

    t79 = ((x413+(x414+x415))<=x416);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x417 = INT8_MIN;
	static int8_t x418 = INT8_MIN;
	int64_t x419 = 93LL;
	int64_t x420 = 94848LL;
	volatile int32_t t80 = -192656;

    t80 = ((x417+(x418+x419))<=x420);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x422 = -1;
	volatile int32_t t81 = 531;

    t81 = ((x421+(x422+x423))<=x424);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	static int32_t x425 = INT32_MIN;
	static int16_t x426 = INT16_MAX;
	uint16_t x427 = 13U;
	int64_t x428 = INT64_MAX;
	static int32_t t82 = 0;

    t82 = ((x425+(x426+x427))<=x428);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x429 = INT64_MIN;
	static int64_t x430 = -1LL;
	int8_t x431 = 1;
	volatile int32_t x432 = -192047;

    t83 = ((x429+(x430+x431))<=x432);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x433 = 2534;
	static uint8_t x434 = UINT8_MAX;
	int32_t x436 = INT32_MAX;
	static volatile int32_t t84 = 21882;

    t84 = ((x433+(x434+x435))<=x436);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x441 = -55;
	volatile int16_t x442 = 5;
	uint32_t x443 = UINT32_MAX;
	int32_t x444 = -1;
	volatile int32_t t85 = 1676411;

    t85 = ((x441+(x442+x443))<=x444);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x445 = 2U;
	int64_t x447 = INT64_MIN;
	uint16_t x448 = UINT16_MAX;
	int32_t t86 = 20723;

    t86 = ((x445+(x446+x447))<=x448);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x449 = -2662LL;

    t87 = ((x449+(x450+x451))<=x452);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x453 = 0;
	uint16_t x454 = UINT16_MAX;
	int16_t x455 = INT16_MAX;
	volatile int32_t x456 = -1;
	int32_t t88 = 141;

    t88 = ((x453+(x454+x455))<=x456);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x459 = INT16_MAX;
	static uint32_t x460 = 15U;
	int32_t t89 = -5388629;

    t89 = ((x457+(x458+x459))<=x460);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x466 = 34U;
	static uint64_t x467 = 3624913650427LLU;
	uint8_t x468 = 1U;
	volatile int32_t t90 = -43257023;

    t90 = ((x465+(x466+x467))<=x468);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x469 = 371LLU;
	volatile int8_t x470 = INT8_MIN;
	volatile int8_t x471 = INT8_MIN;
	static int32_t x472 = -1;

    t91 = ((x469+(x470+x471))<=x472);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x474 = -1LL;
	int8_t x475 = INT8_MIN;
	int32_t x476 = -1;
	int32_t t92 = -11714;

    t92 = ((x473+(x474+x475))<=x476);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x477 = 15865LLU;
	static uint32_t x478 = 104001429U;
	int32_t t93 = -38;

    t93 = ((x477+(x478+x479))<=x480);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x486 = 0U;
	int32_t x487 = INT32_MIN;
	uint16_t x488 = 38U;
	int32_t t94 = 18924091;

    t94 = ((x485+(x486+x487))<=x488);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x489 = 77229029733986085LLU;
	static volatile uint64_t x490 = UINT64_MAX;
	int8_t x491 = INT8_MIN;
	static volatile int32_t t95 = 12310480;

    t95 = ((x489+(x490+x491))<=x492);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x493 = INT32_MIN;
	uint8_t x494 = 1U;
	static int64_t x496 = -19101LL;
	volatile int32_t t96 = -540116638;

    t96 = ((x493+(x494+x495))<=x496);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x497 = INT32_MIN;
	uint16_t x498 = 506U;
	int8_t x499 = INT8_MAX;
	volatile int32_t t97 = -1;

    t97 = ((x497+(x498+x499))<=x500);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x501 = INT64_MIN;
	uint64_t x502 = UINT64_MAX;
	int8_t x503 = -1;
	static int32_t t98 = -88283;

    t98 = ((x501+(x502+x503))<=x504);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x505 = -1;
	int32_t x506 = INT32_MAX;
	int8_t x507 = INT8_MIN;
	volatile int8_t x508 = 51;
	int32_t t99 = 140279;

    t99 = ((x505+(x506+x507))<=x508);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x509 = -862388;
	volatile int8_t x510 = INT8_MAX;
	volatile int32_t t100 = 1641;

    t100 = ((x509+(x510+x511))<=x512);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x513 = 496692711;
	int32_t x515 = 0;
	int8_t x516 = 0;
	volatile int32_t t101 = -31;

    t101 = ((x513+(x514+x515))<=x516);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x517 = 58U;
	int16_t x518 = -1;
	int8_t x519 = INT8_MAX;
	uint8_t x520 = 0U;
	volatile int32_t t102 = 11071224;

    t102 = ((x517+(x518+x519))<=x520);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x525 = INT8_MIN;
	static uint32_t x526 = 1282U;

    t103 = ((x525+(x526+x527))<=x528);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x533 = INT8_MAX;
	uint64_t x534 = 292962LLU;
	int32_t x535 = INT32_MAX;
	static int8_t x536 = INT8_MIN;
	static int32_t t104 = 506;

    t104 = ((x533+(x534+x535))<=x536);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x539 = -3365;
	int64_t x540 = 33894772LL;
	volatile int32_t t105 = -41946;

    t105 = ((x537+(x538+x539))<=x540);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x541 = 21018809LL;
	int32_t x542 = -7959999;
	volatile uint32_t x543 = UINT32_MAX;
	int32_t t106 = -203;

    t106 = ((x541+(x542+x543))<=x544);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x545 = 52;
	int8_t x547 = 1;
	uint16_t x548 = 12216U;
	static volatile int32_t t107 = 3718411;

    t107 = ((x545+(x546+x547))<=x548);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x549 = -4;
	int16_t x551 = INT16_MAX;
	int64_t x552 = -1LL;

    t108 = ((x549+(x550+x551))<=x552);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x553 = 18;
	uint32_t x556 = 0U;
	int32_t t109 = 1295;

    t109 = ((x553+(x554+x555))<=x556);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x557 = INT16_MIN;
	static int64_t x558 = 13LL;
	int16_t x559 = INT16_MIN;
	int8_t x560 = 36;
	int32_t t110 = -473;

    t110 = ((x557+(x558+x559))<=x560);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile uint8_t x565 = 2U;
	static int64_t x566 = INT64_MIN;
	int64_t x567 = INT64_MAX;
	uint64_t x568 = 479853340128173LLU;
	volatile int32_t t111 = 973199185;

    t111 = ((x565+(x566+x567))<=x568);

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x571 = 3419;
	volatile int32_t x572 = INT32_MIN;
	volatile int32_t t112 = 63446280;

    t112 = ((x569+(x570+x571))<=x572);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x573 = INT16_MIN;
	static int32_t x575 = INT32_MAX;
	int16_t x576 = INT16_MIN;

    t113 = ((x573+(x574+x575))<=x576);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint64_t x577 = 2219859299344LLU;
	volatile int64_t x578 = INT64_MAX;
	static int8_t x579 = INT8_MIN;
	int64_t x580 = 12660523670LL;

    t114 = ((x577+(x578+x579))<=x580);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x581 = INT16_MIN;
	volatile int32_t x583 = 226;
	static volatile int32_t t115 = 1773;

    t115 = ((x581+(x582+x583))<=x584);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x585 = -1LL;
	int16_t x586 = INT16_MIN;
	static volatile int32_t x587 = -1;
	int32_t x588 = INT32_MIN;
	static int32_t t116 = 1975475;

    t116 = ((x585+(x586+x587))<=x588);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x590 = -287957601039170LL;
	int32_t x591 = -462584458;

    t117 = ((x589+(x590+x591))<=x592);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint32_t x593 = 154U;
	int8_t x594 = 0;
	int32_t x595 = -346;
	volatile uint8_t x596 = 18U;
	static volatile int32_t t118 = 46;

    t118 = ((x593+(x594+x595))<=x596);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x599 = 1;
	uint64_t x600 = UINT64_MAX;

    t119 = ((x597+(x598+x599))<=x600);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x605 = -101766;
	uint16_t x607 = UINT16_MAX;
	uint64_t x608 = UINT64_MAX;
	static volatile int32_t t120 = 77;

    t120 = ((x605+(x606+x607))<=x608);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x609 = -1;
	static uint8_t x610 = UINT8_MAX;
	volatile uint16_t x611 = 1218U;
	int16_t x612 = 693;
	static int32_t t121 = -1;

    t121 = ((x609+(x610+x611))<=x612);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x613 = INT8_MAX;
	int32_t x614 = INT32_MAX;
	int16_t x615 = INT16_MIN;
	static uint32_t x616 = 3917784U;
	static int32_t t122 = -1138;

    t122 = ((x613+(x614+x615))<=x616);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x617 = INT16_MAX;
	int32_t x619 = 1189;
	int16_t x620 = -1;
	static int32_t t123 = 4063;

    t123 = ((x617+(x618+x619))<=x620);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x621 = INT8_MIN;
	static int64_t x622 = INT64_MAX;
	int8_t x623 = -1;
	int8_t x624 = INT8_MAX;
	volatile int32_t t124 = -1;

    t124 = ((x621+(x622+x623))<=x624);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x633 = 6630U;
	static uint16_t x634 = 211U;
	uint64_t x635 = UINT64_MAX;
	uint64_t x636 = UINT64_MAX;

    t125 = ((x633+(x634+x635))<=x636);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x637 = -1;
	int64_t x638 = -1804257164193393LL;
	int32_t x640 = -1;

    t126 = ((x637+(x638+x639))<=x640);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x641 = INT8_MAX;
	static volatile uint64_t x643 = 12933748428411910LLU;
	uint32_t x644 = 7450U;
	static int32_t t127 = 135262;

    t127 = ((x641+(x642+x643))<=x644);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x645 = 3696U;
	volatile uint16_t x647 = UINT16_MAX;
	int32_t t128 = 1;

    t128 = ((x645+(x646+x647))<=x648);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint8_t x649 = 20U;
	static uint64_t x650 = 23980364LLU;
	int16_t x651 = INT16_MIN;
	int8_t x652 = -1;
	static volatile int32_t t129 = 14216;

    t129 = ((x649+(x650+x651))<=x652);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x653 = INT16_MIN;
	static int8_t x654 = INT8_MIN;
	int64_t x655 = -1LL;
	volatile int16_t x656 = INT16_MIN;
	volatile int32_t t130 = -345;

    t130 = ((x653+(x654+x655))<=x656);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x657 = 124822654LL;
	uint32_t x658 = UINT32_MAX;
	uint32_t x659 = UINT32_MAX;
	int32_t x660 = INT32_MIN;
	int32_t t131 = -5;

    t131 = ((x657+(x658+x659))<=x660);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x661 = UINT8_MAX;
	static int32_t x662 = INT32_MIN;
	static volatile int8_t x664 = -40;
	int32_t t132 = 24338737;

    t132 = ((x661+(x662+x663))<=x664);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x666 = -32302556566720LL;
	int8_t x668 = 61;

    t133 = ((x665+(x666+x667))<=x668);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x677 = 183982472U;
	uint8_t x678 = UINT8_MAX;
	int32_t x679 = INT32_MIN;
	int32_t x680 = INT32_MAX;
	int32_t t134 = -532;

    t134 = ((x677+(x678+x679))<=x680);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x682 = INT64_MIN;
	volatile uint8_t x683 = UINT8_MAX;
	int32_t x684 = INT32_MIN;

    t135 = ((x681+(x682+x683))<=x684);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x685 = INT64_MIN;
	volatile int64_t x686 = INT64_MIN;
	volatile uint64_t x687 = 725677LLU;

    t136 = ((x685+(x686+x687))<=x688);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x689 = INT32_MIN;
	volatile uint64_t x690 = 693LLU;
	volatile int16_t x692 = INT16_MIN;

    t137 = ((x689+(x690+x691))<=x692);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x693 = INT32_MIN;
	volatile int64_t x695 = -16625309564LL;
	volatile int8_t x696 = INT8_MAX;

    t138 = ((x693+(x694+x695))<=x696);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x701 = 1120U;
	uint8_t x702 = 41U;
	uint8_t x703 = 1U;
	static uint16_t x704 = UINT16_MAX;
	volatile int32_t t139 = -157580;

    t139 = ((x701+(x702+x703))<=x704);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x713 = -3722;
	int8_t x714 = INT8_MIN;
	uint8_t x716 = UINT8_MAX;
	static volatile int32_t t140 = 179952;

    t140 = ((x713+(x714+x715))<=x716);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x718 = UINT64_MAX;
	uint8_t x719 = 75U;
	int16_t x720 = -1;
	int32_t t141 = -1570;

    t141 = ((x717+(x718+x719))<=x720);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x721 = UINT64_MAX;
	int16_t x723 = 15;
	int8_t x724 = 0;
	static volatile int32_t t142 = -4;

    t142 = ((x721+(x722+x723))<=x724);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x729 = -1;
	static uint64_t x730 = 38002LLU;
	volatile uint32_t x732 = 52348185U;
	int32_t t143 = -1;

    t143 = ((x729+(x730+x731))<=x732);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x734 = INT32_MIN;
	int32_t x735 = INT32_MAX;
	int16_t x736 = INT16_MIN;
	static volatile int32_t t144 = 1575;

    t144 = ((x733+(x734+x735))<=x736);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x738 = -1;
	int64_t x739 = 108007LL;
	static uint64_t x740 = 196012LLU;
	int32_t t145 = 4120;

    t145 = ((x737+(x738+x739))<=x740);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x745 = INT64_MAX;
	static int64_t x746 = -1LL;
	static uint64_t x747 = 31958002LLU;
	uint64_t x748 = 1888393LLU;

    t146 = ((x745+(x746+x747))<=x748);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x749 = 11U;
	uint8_t x750 = 20U;
	static volatile uint8_t x751 = UINT8_MAX;
	static uint64_t x752 = UINT64_MAX;
	volatile int32_t t147 = -25458057;

    t147 = ((x749+(x750+x751))<=x752);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x753 = INT16_MIN;
	int64_t x754 = -240812LL;
	static int8_t x755 = INT8_MAX;
	int64_t x756 = 169LL;
	int32_t t148 = 990;

    t148 = ((x753+(x754+x755))<=x756);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x757 = INT8_MAX;
	int64_t x758 = 145040538LL;
	int64_t x759 = INT64_MIN;
	uint32_t x760 = UINT32_MAX;
	int32_t t149 = 2;

    t149 = ((x757+(x758+x759))<=x760);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint32_t x761 = 69U;
	volatile uint64_t x762 = 107163LLU;
	int8_t x763 = INT8_MIN;
	int32_t x764 = INT32_MIN;
	volatile int32_t t150 = -1059;

    t150 = ((x761+(x762+x763))<=x764);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x769 = 442U;
	static uint16_t x770 = 1U;
	int64_t x771 = 12339591942720LL;
	int32_t x772 = 64196195;
	int32_t t151 = 163;

    t151 = ((x769+(x770+x771))<=x772);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x773 = -1;
	static int32_t x774 = INT32_MAX;
	volatile int8_t x775 = -12;
	int16_t x776 = INT16_MIN;
	static volatile int32_t t152 = 0;

    t152 = ((x773+(x774+x775))<=x776);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x777 = 115LLU;
	volatile uint64_t x778 = 1423173270451411LLU;
	int8_t x779 = -1;
	int32_t x780 = 1399;

    t153 = ((x777+(x778+x779))<=x780);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x781 = INT8_MIN;
	static int32_t x782 = INT32_MIN;
	static int64_t x784 = 67268280496186762LL;
	int32_t t154 = 6018781;

    t154 = ((x781+(x782+x783))<=x784);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x789 = 3;
	int16_t x791 = INT16_MAX;
	int32_t x792 = INT32_MIN;

    t155 = ((x789+(x790+x791))<=x792);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x801 = 9;
	int64_t x802 = INT64_MIN;
	int8_t x803 = INT8_MAX;
	int64_t x804 = INT64_MIN;
	int32_t t156 = -1;

    t156 = ((x801+(x802+x803))<=x804);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x805 = INT16_MIN;
	uint16_t x806 = 1735U;
	int32_t x808 = INT32_MIN;

    t157 = ((x805+(x806+x807))<=x808);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x813 = 848211U;
	int64_t x814 = INT64_MAX;
	int8_t x816 = INT8_MIN;
	volatile int32_t t158 = 697;

    t158 = ((x813+(x814+x815))<=x816);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x822 = INT16_MIN;
	uint8_t x823 = 20U;
	uint32_t x824 = 13979315U;
	static int32_t t159 = 6737;

    t159 = ((x821+(x822+x823))<=x824);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x825 = -1;
	volatile int64_t x827 = -1LL;
	volatile int32_t t160 = -1455247;

    t160 = ((x825+(x826+x827))<=x828);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x829 = -1;
	volatile int64_t x830 = -1LL;
	int32_t t161 = 1;

    t161 = ((x829+(x830+x831))<=x832);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x834 = 0U;
	int8_t x836 = INT8_MIN;
	volatile int32_t t162 = 6648;

    t162 = ((x833+(x834+x835))<=x836);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x837 = INT16_MIN;
	int64_t x838 = INT64_MIN;
	static uint8_t x840 = UINT8_MAX;
	static volatile int32_t t163 = -7138278;

    t163 = ((x837+(x838+x839))<=x840);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x844 = 14U;
	int32_t t164 = 97;

    t164 = ((x841+(x842+x843))<=x844);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x845 = INT8_MIN;
	uint32_t x846 = UINT32_MAX;
	uint8_t x847 = UINT8_MAX;
	static uint16_t x848 = UINT16_MAX;

    t165 = ((x845+(x846+x847))<=x848);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x849 = 4271228LLU;
	uint32_t x851 = UINT32_MAX;
	volatile int32_t t166 = 12762;

    t166 = ((x849+(x850+x851))<=x852);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x857 = INT32_MIN;
	int64_t x858 = INT64_MAX;
	int16_t x859 = -418;
	int16_t x860 = INT16_MIN;

    t167 = ((x857+(x858+x859))<=x860);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x865 = 18;
	volatile uint16_t x866 = UINT16_MAX;
	uint32_t x868 = 998586332U;

    t168 = ((x865+(x866+x867))<=x868);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x869 = -1;
	volatile uint64_t x870 = 17918473804549LLU;
	static uint64_t x871 = UINT64_MAX;
	int8_t x872 = -1;
	int32_t t169 = 57434;

    t169 = ((x869+(x870+x871))<=x872);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x873 = INT8_MIN;
	volatile int32_t x874 = 794630942;
	uint8_t x875 = 1U;

    t170 = ((x873+(x874+x875))<=x876);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x877 = INT32_MIN;
	int16_t x878 = INT16_MIN;
	int64_t x879 = -1LL;
	int64_t x880 = INT64_MAX;
	volatile int32_t t171 = 183093306;

    t171 = ((x877+(x878+x879))<=x880);

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x881 = UINT32_MAX;
	volatile int8_t x882 = -1;
	int64_t x884 = INT64_MIN;
	volatile int32_t t172 = -4;

    t172 = ((x881+(x882+x883))<=x884);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x885 = 246U;
	int8_t x886 = INT8_MIN;
	static int64_t x887 = -5585548758880652LL;
	uint16_t x888 = UINT16_MAX;
	int32_t t173 = 4;

    t173 = ((x885+(x886+x887))<=x888);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x889 = 39250U;
	volatile int16_t x890 = INT16_MAX;
	int32_t t174 = 47035;

    t174 = ((x889+(x890+x891))<=x892);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x893 = 13U;
	uint32_t x894 = UINT32_MAX;
	volatile int32_t t175 = -2147342;

    t175 = ((x893+(x894+x895))<=x896);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x901 = -1;
	static int32_t x902 = INT32_MIN;
	int8_t x903 = INT8_MAX;
	static int16_t x904 = -1;
	int32_t t176 = 1;

    t176 = ((x901+(x902+x903))<=x904);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x905 = INT32_MIN;
	volatile int64_t x906 = -517592LL;
	volatile int8_t x907 = -1;
	int16_t x908 = -3633;
	volatile int32_t t177 = 136;

    t177 = ((x905+(x906+x907))<=x908);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x913 = 3U;
	static int8_t x914 = -33;
	volatile int64_t x915 = 906044157LL;
	int64_t x916 = -1LL;
	int32_t t178 = 10358670;

    t178 = ((x913+(x914+x915))<=x916);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x917 = INT32_MIN;
	int16_t x919 = INT16_MIN;
	int32_t t179 = -78;

    t179 = ((x917+(x918+x919))<=x920);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x921 = INT8_MIN;
	int16_t x922 = INT16_MAX;
	uint16_t x923 = 167U;
	int32_t x924 = INT32_MIN;
	static volatile int32_t t180 = 26436;

    t180 = ((x921+(x922+x923))<=x924);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x926 = INT16_MAX;
	int8_t x927 = -1;
	int16_t x928 = INT16_MAX;
	volatile int32_t t181 = -33;

    t181 = ((x925+(x926+x927))<=x928);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x931 = -1;
	static int8_t x932 = 18;
	int32_t t182 = 58;

    t182 = ((x929+(x930+x931))<=x932);

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x933 = -1;
	int8_t x934 = INT8_MIN;
	int8_t x935 = INT8_MIN;

    t183 = ((x933+(x934+x935))<=x936);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x941 = 1;
	int64_t x942 = 243850973456LL;
	uint64_t x943 = UINT64_MAX;
	static int32_t x944 = INT32_MIN;
	volatile int32_t t184 = 1;

    t184 = ((x941+(x942+x943))<=x944);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x945 = INT32_MAX;
	uint8_t x947 = 1U;
	uint32_t x948 = UINT32_MAX;
	static int32_t t185 = 287766;

    t185 = ((x945+(x946+x947))<=x948);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x949 = 26;
	int8_t x951 = INT8_MIN;
	int64_t x952 = -120LL;
	int32_t t186 = 0;

    t186 = ((x949+(x950+x951))<=x952);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x953 = INT32_MAX;
	static int64_t x954 = INT64_MIN;
	static int64_t x955 = INT64_MAX;
	static volatile int16_t x956 = 1289;
	static volatile int32_t t187 = -4;

    t187 = ((x953+(x954+x955))<=x956);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x957 = UINT32_MAX;
	int8_t x959 = INT8_MIN;
	uint64_t x960 = 62110393LLU;
	volatile int32_t t188 = 1136606;

    t188 = ((x957+(x958+x959))<=x960);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x962 = 109LLU;
	volatile int64_t x964 = -1LL;
	static int32_t t189 = -2020;

    t189 = ((x961+(x962+x963))<=x964);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x969 = INT16_MIN;
	uint16_t x970 = 294U;
	int16_t x971 = INT16_MIN;
	static uint16_t x972 = 10521U;
	volatile int32_t t190 = 0;

    t190 = ((x969+(x970+x971))<=x972);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int64_t x973 = -214553010488LL;
	uint32_t x975 = 44221629U;
	uint8_t x976 = 44U;
	int32_t t191 = -119;

    t191 = ((x973+(x974+x975))<=x976);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x977 = 37U;
	int64_t x978 = -634192657349691LL;
	static int16_t x979 = -1;
	int32_t t192 = -1294561;

    t192 = ((x977+(x978+x979))<=x980);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x982 = INT32_MIN;
	static uint64_t x983 = UINT64_MAX;
	int8_t x984 = INT8_MIN;
	int32_t t193 = 62;

    t193 = ((x981+(x982+x983))<=x984);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x985 = INT64_MIN;
	volatile int8_t x986 = -33;
	int16_t x987 = INT16_MAX;
	static int32_t t194 = 706;

    t194 = ((x985+(x986+x987))<=x988);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x989 = INT32_MIN;
	volatile int64_t x990 = -1LL;
	volatile uint16_t x991 = 1U;
	int8_t x992 = INT8_MIN;
	int32_t t195 = -63;

    t195 = ((x989+(x990+x991))<=x992);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x993 = -1LL;
	int32_t x994 = INT32_MIN;
	static uint8_t x995 = UINT8_MAX;
	uint16_t x996 = 2U;

    t196 = ((x993+(x994+x995))<=x996);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x998 = -2;
	uint32_t x1000 = 32105U;
	int32_t t197 = 25;

    t197 = ((x997+(x998+x999))<=x1000);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1001 = 196792298LL;
	volatile int32_t x1002 = -21395511;
	volatile int8_t x1003 = -1;
	int8_t x1004 = INT8_MIN;
	int32_t t198 = 21842;

    t198 = ((x1001+(x1002+x1003))<=x1004);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1005 = UINT32_MAX;
	int16_t x1006 = 265;
	uint64_t x1007 = 270195764834LLU;
	volatile int8_t x1008 = -63;
	int32_t t199 = -145;

    t199 = ((x1005+(x1006+x1007))<=x1008);

    if (t199 != 1) { NG(); } else { ; }
	
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

