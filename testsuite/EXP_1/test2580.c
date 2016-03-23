
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

static int64_t x10 = -1LL;
volatile int8_t x12 = 1;
volatile uint64_t t1 = 74LLU;
int32_t x18 = -1;
int32_t x20 = -27510;
volatile int32_t t3 = 54515964;
static uint32_t x22 = 1423595U;
static int16_t x23 = INT16_MIN;
int16_t x26 = INT16_MIN;
uint64_t x34 = 3763359880LLU;
static int16_t x36 = 1;
int8_t x39 = INT8_MIN;
static volatile uint32_t t8 = 82763306U;
uint16_t x47 = 11907U;
uint8_t x48 = 15U;
volatile uint64_t x49 = 217143910214LLU;
int16_t x50 = INT16_MIN;
uint32_t x73 = UINT32_MAX;
int16_t x85 = 1;
int8_t x86 = 30;
int16_t x87 = INT16_MIN;
int32_t t16 = 413029822;
volatile int64_t t17 = 3890185LL;
int32_t x96 = INT32_MIN;
static int8_t x100 = -1;
uint32_t x105 = 7499663U;
int32_t x108 = INT32_MIN;
volatile uint64_t t21 = 11695022LLU;
int16_t x115 = 22;
uint32_t x121 = UINT32_MAX;
int16_t x124 = INT16_MAX;
int64_t t24 = 879493499171LL;
static int32_t x130 = INT32_MAX;
int16_t x131 = INT16_MIN;
uint16_t x133 = UINT16_MAX;
uint64_t x148 = 402127LLU;
volatile uint64_t x162 = UINT64_MAX;
int8_t x167 = INT8_MIN;
int32_t x168 = -1;
static volatile int32_t x173 = INT32_MAX;
uint64_t x188 = 367748720LLU;
volatile int64_t t36 = 106296365562670017LL;
static volatile int32_t x197 = INT32_MIN;
int64_t x202 = -45564180804497LL;
static int8_t x210 = INT8_MIN;
int32_t x212 = INT32_MIN;
static volatile int32_t t39 = 108027;
uint64_t x214 = 99387LLU;
volatile int32_t x220 = -250475339;
int32_t x224 = INT32_MAX;
int8_t x231 = 1;
uint32_t t44 = 83U;
volatile int32_t x241 = -1;
static int64_t x244 = INT64_MIN;
volatile int32_t t47 = 11;
int64_t x259 = -1LL;
int64_t t48 = 1LL;
int64_t x274 = -18LL;
int16_t x285 = INT16_MAX;
volatile int32_t x294 = INT32_MIN;
uint32_t x299 = UINT32_MAX;
volatile uint32_t t54 = 13513652U;
volatile uint8_t x301 = 73U;
int64_t t55 = -1LL;
int64_t t56 = -118101947115LL;
static int8_t x310 = -1;
static volatile uint8_t x312 = 7U;
volatile int8_t x316 = INT8_MIN;
static int8_t x317 = -1;
volatile int16_t x319 = INT16_MIN;
int32_t t59 = -28;
int32_t x336 = INT32_MIN;
volatile int8_t x337 = INT8_MAX;
int32_t t62 = 75;
uint64_t x361 = UINT64_MAX;
int16_t x364 = -5;
int32_t x368 = -13054613;
int16_t x376 = INT16_MIN;
uint64_t t66 = 156556090412955LLU;
volatile int16_t x379 = -3;
int32_t x380 = INT32_MAX;
uint32_t x390 = 345U;
static int16_t x395 = -1;
static int64_t x400 = INT64_MIN;
static int16_t x403 = INT16_MIN;
int8_t x409 = 0;
uint64_t x411 = 1138966728859552LLU;
static int32_t x424 = INT32_MIN;
int8_t x439 = INT8_MIN;
int64_t t76 = 46716639262048LL;
int16_t x441 = -27;
int16_t x443 = INT16_MAX;
static int8_t x453 = -1;
uint64_t x456 = UINT64_MAX;
uint8_t x459 = 107U;
int64_t x468 = 192478853LL;
uint64_t t83 = 512584354LLU;
int16_t x488 = -5;
static volatile uint32_t t86 = 39406U;
volatile int8_t x490 = -1;
uint64_t x491 = 608411319818105LLU;
int8_t x504 = INT8_MIN;
volatile int16_t x513 = -1;
uint8_t x517 = UINT8_MAX;
uint16_t x525 = UINT16_MAX;
int32_t t95 = 26211;
uint16_t x533 = 101U;
static volatile int32_t t96 = -17;
static volatile int32_t x537 = INT32_MAX;
volatile uint32_t x551 = UINT32_MAX;
volatile int32_t x554 = INT32_MIN;
int16_t x563 = 38;
uint8_t x564 = UINT8_MAX;
uint8_t x566 = 0U;
uint64_t x567 = UINT64_MAX;
int32_t t102 = -11192;
uint64_t x589 = 55151662546762922LLU;
volatile uint64_t t103 = 22180767LLU;
int8_t x596 = 1;
volatile uint64_t t104 = 1639641LLU;
uint32_t x599 = UINT32_MAX;
volatile int64_t t106 = 3927073LL;
int64_t x607 = -1LL;
uint8_t x609 = 0U;
int8_t x611 = INT8_MAX;
int8_t x623 = -50;
uint16_t x629 = UINT16_MAX;
uint64_t x637 = 8534886455442073297LLU;
volatile int64_t x646 = 1142797291083LL;
volatile uint32_t x648 = UINT32_MAX;
uint16_t x650 = 87U;
int32_t t115 = 184;
static int8_t x660 = INT8_MIN;
int16_t x665 = -1;
volatile int16_t x666 = -1;
static int8_t x671 = -1;
uint64_t x679 = 754585344180499339LLU;
int16_t x693 = INT16_MAX;
int8_t x694 = INT8_MAX;
int64_t t122 = 59542154958936369LL;
volatile uint32_t t124 = 7086127U;
uint32_t x719 = UINT32_MAX;
uint8_t x720 = UINT8_MAX;
static uint32_t t128 = 63637609U;
int16_t x725 = 0;
int64_t x726 = -1LL;
uint64_t t129 = 48505933973986604LLU;
volatile int32_t t130 = 40474;
static uint32_t x737 = 280U;
int16_t x742 = INT16_MIN;
int32_t x753 = -1;
static volatile int32_t t134 = 8004;
uint32_t t135 = 477212U;
static volatile int64_t x761 = INT64_MAX;
int32_t x764 = INT32_MIN;
static int64_t x766 = INT64_MIN;
volatile uint64_t t137 = 102659375044102LLU;
int8_t x781 = INT8_MIN;
int32_t x787 = -1430;
int8_t x788 = INT8_MAX;
uint16_t x794 = 646U;
uint64_t x795 = UINT64_MAX;
volatile uint32_t x796 = 709U;
uint64_t t143 = 37466380881823LLU;
uint8_t x803 = 57U;
uint32_t t145 = 1U;
static volatile uint32_t x840 = 466471404U;
uint8_t x845 = UINT8_MAX;
volatile int64_t t152 = -154157LL;
static uint64_t t153 = 956596226276157142LLU;
volatile int16_t x854 = INT16_MIN;
static int64_t x863 = -1LL;
volatile uint64_t t156 = 3910335494560LLU;
int64_t t157 = -120468899046LL;
volatile uint64_t x879 = UINT64_MAX;
volatile uint8_t x880 = 25U;
uint64_t t158 = 42LLU;
int8_t x881 = -1;
uint8_t x890 = 1U;
volatile int32_t x891 = 2470;
int16_t x893 = -1808;
int8_t x894 = 61;
uint32_t x895 = UINT32_MAX;
int64_t x896 = INT64_MIN;
uint64_t x900 = UINT64_MAX;
static volatile uint16_t x919 = 4054U;
static uint16_t x920 = UINT16_MAX;
uint64_t t164 = 2241LLU;
uint64_t t166 = 5LLU;
int16_t x929 = INT16_MIN;
volatile int64_t t167 = -613749571LL;
static int64_t x933 = INT64_MIN;
static int64_t x945 = INT64_MIN;
uint64_t t171 = 2958920603223LLU;
static int16_t x961 = -4;
volatile int16_t x974 = INT16_MAX;
uint16_t x980 = 3U;
int16_t x983 = INT16_MAX;
int16_t x985 = 2161;
int32_t x994 = INT32_MIN;
static int32_t x1016 = -218;
int16_t x1021 = INT16_MIN;
int16_t x1024 = -1;
static int64_t t183 = 109150829115634210LL;
uint16_t x1038 = 11U;
volatile int8_t x1039 = INT8_MIN;
volatile uint16_t x1040 = 29U;
volatile int32_t t184 = -11060;
static int64_t t185 = -58LL;
int64_t x1048 = INT64_MIN;
static int64_t t186 = -2971144173LL;
int16_t x1065 = INT16_MAX;
int32_t x1068 = INT32_MIN;
static int64_t t190 = 303LL;
uint16_t x1093 = 112U;
int32_t x1096 = INT32_MIN;
static uint16_t x1100 = UINT16_MAX;
static int64_t x1108 = INT64_MIN;


void f0(void) {
    	uint16_t x5 = 650U;
	uint32_t x6 = 1876610642U;
	volatile uint16_t x7 = UINT16_MAX;
	int32_t x8 = 458154620;
	uint32_t t0 = 1823U;

    t0 = (((x5^x6)*x7)/x8);

    if (t0 != 3U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = UINT64_MAX;
	int64_t x11 = 55166636982LL;

    t1 = (((x9^x10)*x11)/x12);

    if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	volatile int16_t x14 = -564;
	int16_t x15 = INT16_MAX;
	uint8_t x16 = 7U;
	volatile int32_t t2 = -66;

    t2 = (((x13^x14)*x15)/x16);

    if (t2 != 2752428) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x17 = UINT8_MAX;
	int8_t x19 = INT8_MIN;

    t3 = (((x17^x18)*x19)/x20);

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -532621853;
	int16_t x24 = -48;
	volatile uint32_t t4 = 0U;

    t4 = (((x21^x22)*x23)/x24);

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int16_t x25 = -50;
	uint8_t x27 = 2U;
	int32_t x28 = -1;
	volatile int32_t t5 = -1826;

    t5 = (((x25^x26)*x27)/x28);

    if (t5 != -65436) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = INT8_MIN;
	int64_t x30 = 50532038LL;
	int8_t x31 = -2;
	int8_t x32 = -1;
	int64_t t6 = -378279661506526296LL;

    t6 = (((x29^x30)*x31)/x32);

    if (t6 != -101064052LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x35 = -1;
	uint64_t t7 = 6866612236994LLU;

    t7 = (((x33^x34)*x35)/x36);

    if (t7 != 3763351416LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x37 = INT8_MAX;
	static int16_t x38 = INT16_MIN;
	static uint32_t x40 = 7094872U;

    t8 = (((x37^x38)*x39)/x40);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x41 = INT64_MIN;
	int64_t x42 = -2192950LL;
	uint8_t x43 = 0U;
	int16_t x44 = 578;
	volatile int64_t t9 = -14453203993LL;

    t9 = (((x41^x42)*x43)/x44);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x45 = 20;
	uint32_t x46 = 11077U;
	uint32_t t10 = 11076U;

    t10 = (((x45^x46)*x47)/x48);

    if (t10 != 8802448U) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x51 = -1LL;
	uint8_t x52 = 12U;
	static uint64_t t11 = 45286389LLU;

    t11 = (((x49^x50)*x51)/x52);

    if (t11 != 18095327247LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = -1;
	int32_t x58 = -30;
	int16_t x59 = INT16_MAX;
	static int8_t x60 = INT8_MIN;
	volatile int32_t t12 = -2;

    t12 = (((x57^x58)*x59)/x60);

    if (t12 != -7423) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x65 = 11089U;
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = -1;
	int64_t x68 = INT64_MIN;
	int64_t t13 = 573797453LL;

    t13 = (((x65^x66)*x67)/x68);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x69 = INT8_MIN;
	static int32_t x70 = 89583011;
	volatile uint32_t x71 = 83537U;
	int32_t x72 = -259251;
	volatile uint32_t t14 = 260779376U;

    t14 = (((x69^x70)*x71)/x72);

    if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x74 = UINT32_MAX;
	static volatile uint8_t x75 = 4U;
	static int64_t x76 = INT64_MIN;
	int64_t t15 = -4469LL;

    t15 = (((x73^x74)*x75)/x76);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x88 = 15U;

    t16 = (((x85^x86)*x87)/x88);

    if (t16 != -67720) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x89 = INT8_MIN;
	volatile int8_t x90 = INT8_MIN;
	int64_t x91 = -1LL;
	int32_t x92 = 1;

    t17 = (((x89^x90)*x91)/x92);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = 0;
	int8_t x94 = 0;
	int8_t x95 = INT8_MIN;
	volatile int32_t t18 = 4;

    t18 = (((x93^x94)*x95)/x96);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x97 = INT32_MIN;
	volatile int8_t x98 = INT8_MAX;
	uint32_t x99 = 5559449U;
	uint32_t t19 = 62782U;

    t19 = (((x97^x98)*x99)/x100);

    if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x106 = 3117LLU;
	uint32_t x107 = 2U;
	uint64_t t20 = 36024120757175LLU;

    t20 = (((x105^x106)*x107)/x108);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = UINT64_MAX;
	volatile int8_t x110 = INT8_MAX;
	int32_t x111 = INT32_MAX;
	int32_t x112 = INT32_MIN;

    t21 = (((x109^x110)*x111)/x112);

    if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x113 = 11150;
	uint16_t x114 = 3U;
	int32_t x116 = 1;
	int32_t t22 = -31416;

    t22 = (((x113^x114)*x115)/x116);

    if (t22 != 245278) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x117 = 6973U;
	int16_t x118 = INT16_MIN;
	int8_t x119 = INT8_MIN;
	volatile uint16_t x120 = UINT16_MAX;
	uint32_t t23 = 152U;

    t23 = (((x117^x118)*x119)/x120);

    if (t23 != 50U) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x122 = 1518302248LL;
	static int8_t x123 = INT8_MAX;

    t24 = (((x121^x122)*x123)/x124);

    if (t24 != 10761939LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x125 = 283858LLU;
	uint32_t x126 = 88U;
	static int16_t x127 = INT16_MIN;
	uint32_t x128 = 2024U;
	uint64_t t25 = 2051407069625LLU;

    t25 = (((x125^x126)*x127)/x128);

    if (t25 != 9114003984392515LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint64_t x129 = 128495023786960LLU;
	int64_t x132 = 1036099594LL;
	static uint64_t t26 = 9754LLU;

    t26 = (((x129^x130)*x131)/x132);

    if (t26 != 13740156941LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x134 = -1;
	volatile int16_t x135 = INT16_MAX;
	volatile uint16_t x136 = 15U;
	int32_t t27 = 1853;

    t27 = (((x133^x134)*x135)/x136);

    if (t27 != -143161207) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x145 = 3054U;
	int64_t x146 = -1LL;
	int32_t x147 = INT32_MIN;
	uint64_t t28 = 6545176LLU;

    t28 = (((x145^x146)*x147)/x148);

    if (t28 != 16314653LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x149 = 343205256LL;
	uint16_t x150 = 47U;
	int16_t x151 = INT16_MIN;
	volatile uint64_t x152 = 439383LLU;
	volatile uint64_t t29 = 216621421157LLU;

    t29 = (((x149^x150)*x151)/x152);

    if (t29 != 41983264777104LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x161 = INT8_MIN;
	static uint64_t x163 = 0LLU;
	uint32_t x164 = 18734088U;
	uint64_t t30 = 473LLU;

    t30 = (((x161^x162)*x163)/x164);

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x165 = INT32_MAX;
	static int64_t x166 = 436205807LL;
	int64_t t31 = -4LL;

    t31 = (((x165^x166)*x167)/x168);

    if (t31 != 219043563520LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x174 = -22059948LL;
	uint16_t x175 = 26148U;
	int8_t x176 = -1;
	static volatile int64_t t32 = -3797324880867658LL;

    t32 = (((x173^x174)*x175)/x176);

    if (t32 != 55575578933748LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x181 = -3202723LL;
	int8_t x182 = -39;
	int64_t x183 = -1LL;
	static int16_t x184 = -1;
	static volatile int64_t t33 = 8221229240469LL;

    t33 = (((x181^x182)*x183)/x184);

    if (t33 != 3202692LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x185 = 11100LL;
	uint64_t x186 = 226082LLU;
	int16_t x187 = INT16_MAX;
	uint64_t t34 = 431377070395496LLU;

    t34 = (((x185^x186)*x187)/x188);

    if (t34 != 19LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint16_t x189 = 0U;
	uint16_t x190 = 1786U;
	uint64_t x191 = 100031951919784LLU;
	uint64_t x192 = UINT64_MAX;
	uint64_t t35 = 12LLU;

    t35 = (((x189^x190)*x191)/x192);

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x193 = INT32_MIN;
	int64_t x194 = -1LL;
	int16_t x195 = INT16_MIN;
	int32_t x196 = -1;

    t36 = (((x193^x194)*x195)/x196);

    if (t36 != 70368744144896LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x198 = UINT32_MAX;
	static volatile uint32_t x199 = 8212U;
	static int64_t x200 = INT64_MAX;
	volatile int64_t t37 = -1199503LL;

    t37 = (((x197^x198)*x199)/x200);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x201 = 1LL;
	uint16_t x203 = 17U;
	int8_t x204 = INT8_MIN;
	static volatile int64_t t38 = -126LL;

    t38 = (((x201^x202)*x203)/x204);

    if (t38 != 6051492763097LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x209 = -2765;
	static int16_t x211 = -8570;

    t39 = (((x209^x210)*x211)/x212);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x213 = UINT8_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	static int32_t x216 = INT32_MIN;
	volatile uint64_t t40 = 2164111065295054LLU;

    t40 = (((x213^x214)*x215)/x216);

    if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x217 = INT16_MIN;
	uint16_t x218 = 496U;
	int8_t x219 = INT8_MAX;
	volatile int32_t t41 = -16576085;

    t41 = (((x217^x218)*x219)/x220);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x221 = INT64_MIN;
	static int64_t x222 = INT64_MAX;
	uint8_t x223 = UINT8_MAX;
	int64_t t42 = 113547026121253LL;

    t42 = (((x221^x222)*x223)/x224);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x229 = INT64_MIN;
	int64_t x230 = INT64_MAX;
	static int8_t x232 = -1;
	static volatile int64_t t43 = -912222672754601182LL;

    t43 = (((x229^x230)*x231)/x232);

    if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x233 = 0U;
	static int8_t x234 = INT8_MAX;
	static int32_t x235 = -1;
	uint32_t x236 = 1896U;

    t44 = (((x233^x234)*x235)/x236);

    if (t44 != 2265278U) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x237 = 178;
	int16_t x238 = 0;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = 3U;
	static int32_t t45 = 20556256;

    t45 = (((x237^x238)*x239)/x240);

    if (t45 != -1944234) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x242 = INT16_MIN;
	int32_t x243 = 3;
	volatile int64_t t46 = 17467194566429LL;

    t46 = (((x241^x242)*x243)/x244);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x253 = -53;
	int8_t x254 = INT8_MIN;
	int16_t x255 = INT16_MAX;
	volatile int8_t x256 = INT8_MIN;

    t47 = (((x253^x254)*x255)/x256);

    if (t47 != -19199) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x257 = -44330;
	uint8_t x258 = 27U;
	static int32_t x260 = -2980035;

    t48 = (((x257^x258)*x259)/x260);

    if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x265 = 523181652375673LLU;
	static uint64_t x266 = UINT64_MAX;
	static int64_t x267 = INT64_MAX;
	static int8_t x268 = INT8_MIN;
	volatile uint64_t t49 = 14LLU;

    t49 = (((x265^x266)*x267)/x268);

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x273 = 281796919439LLU;
	uint16_t x275 = 62U;
	int32_t x276 = INT32_MAX;
	uint64_t t50 = 2052LLU;

    t50 = (((x273^x274)*x275)/x276);

    if (t50 != 8589926460LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x277 = UINT16_MAX;
	uint64_t x278 = 67403LLU;
	static volatile int32_t x279 = -1;
	int8_t x280 = INT8_MAX;
	static volatile uint64_t t51 = 1877027891395588LLU;

    t51 = (((x277^x278)*x279)/x280);

    if (t51 != 145249953336294664LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x286 = 1;
	int8_t x287 = 1;
	uint8_t x288 = 8U;
	int32_t t52 = 676069;

    t52 = (((x285^x286)*x287)/x288);

    if (t52 != 4095) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x293 = -1;
	uint32_t x295 = 1039974861U;
	volatile uint8_t x296 = UINT8_MAX;
	uint32_t t53 = 274645926U;

    t53 = (((x293^x294)*x295)/x296);

    if (t53 != 4343171U) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x297 = INT32_MIN;
	int16_t x298 = -14;
	int8_t x300 = INT8_MIN;

    t54 = (((x297^x298)*x299)/x300);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x302 = -1LL;
	uint32_t x303 = 25077574U;
	int32_t x304 = 71206;

    t55 = (((x301^x302)*x303)/x304);

    if (t55 != -26061LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x305 = 912U;
	volatile uint16_t x306 = 2828U;
	static int8_t x307 = -1;
	int64_t x308 = 231755486721161322LL;

    t56 = (((x305^x306)*x307)/x308);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x309 = -1LL;
	uint16_t x311 = 461U;
	int64_t t57 = -72LL;

    t57 = (((x309^x310)*x311)/x312);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x313 = 85;
	int64_t x314 = -1LL;
	uint8_t x315 = 124U;
	int64_t t58 = -258LL;

    t58 = (((x313^x314)*x315)/x316);

    if (t58 != 83LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x318 = UINT8_MAX;
	static int32_t x320 = INT32_MIN;

    t59 = (((x317^x318)*x319)/x320);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x329 = INT64_MIN;
	uint16_t x330 = 79U;
	int8_t x331 = 1;
	int32_t x332 = -252;
	volatile int64_t t60 = -962830097787513492LL;

    t60 = (((x329^x330)*x331)/x332);

    if (t60 != 36600682685931649LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x333 = 39835515LLU;
	uint8_t x334 = 1U;
	static volatile int32_t x335 = -1;
	volatile uint64_t t61 = 5411040896084486293LLU;

    t61 = (((x333^x334)*x335)/x336);

    if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x338 = INT8_MAX;
	static volatile int8_t x339 = -54;
	int16_t x340 = -3;

    t62 = (((x337^x338)*x339)/x340);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x362 = UINT64_MAX;
	volatile int32_t x363 = -12670362;
	volatile uint64_t t63 = 3796376097LLU;

    t63 = (((x361^x362)*x363)/x364);

    if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x365 = INT64_MAX;
	uint8_t x366 = 0U;
	uint64_t x367 = UINT64_MAX;
	static uint64_t t64 = 9487LLU;

    t64 = (((x365^x366)*x367)/x368);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int8_t x369 = INT8_MAX;
	int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 190334136U;
	volatile uint32_t t65 = 974387100U;

    t65 = (((x369^x370)*x371)/x372);

    if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x373 = UINT32_MAX;
	static uint64_t x374 = 16454325564973095LLU;
	int16_t x375 = INT16_MIN;

    t66 = (((x373^x374)*x375)/x376);

    if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x377 = INT16_MIN;
	int8_t x378 = 1;
	volatile int32_t t67 = -5278132;

    t67 = (((x377^x378)*x379)/x380);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x385 = -1;
	static uint32_t x386 = 52U;
	static uint16_t x387 = 209U;
	int16_t x388 = INT16_MIN;
	volatile uint32_t t68 = 15220U;

    t68 = (((x385^x386)*x387)/x388);

    if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x389 = UINT16_MAX;
	int8_t x391 = INT8_MAX;
	static int32_t x392 = INT32_MIN;
	volatile uint32_t t69 = 15250U;

    t69 = (((x389^x390)*x391)/x392);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x393 = 129959767U;
	volatile int32_t x394 = 572923;
	uint32_t x396 = UINT32_MAX;
	uint32_t t70 = 98969U;

    t70 = (((x393^x394)*x395)/x396);

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x397 = -1;
	static uint32_t x398 = 1930495019U;
	uint8_t x399 = UINT8_MAX;
	int64_t t71 = 170027636LL;

    t71 = (((x397^x398)*x399)/x400);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x401 = -1LL;
	static int8_t x402 = INT8_MIN;
	volatile uint32_t x404 = 62U;
	static int64_t t72 = 3327327631LL;

    t72 = (((x401^x402)*x403)/x404);

    if (t72 != -67121LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x410 = 12LL;
	int8_t x412 = -1;
	volatile uint64_t t73 = 1465795930401064939LLU;

    t73 = (((x409^x410)*x411)/x412);

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x413 = INT8_MAX;
	uint64_t x414 = UINT64_MAX;
	int16_t x415 = INT16_MIN;
	static int16_t x416 = INT16_MIN;
	volatile uint64_t t74 = 1428571492236826LLU;

    t74 = (((x413^x414)*x415)/x416);

    if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x421 = 635249;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 60U;
	volatile int32_t t75 = 231507;

    t75 = (((x421^x422)*x423)/x424);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x437 = 4U;
	int64_t x438 = -1LL;
	int16_t x440 = INT16_MAX;

    t76 = (((x437^x438)*x439)/x440);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x442 = 45U;
	int64_t x444 = INT64_MIN;
	volatile int64_t t77 = 110668LL;

    t77 = (((x441^x442)*x443)/x444);

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x449 = -1;
	int16_t x450 = -1091;
	int32_t x451 = 25;
	int64_t x452 = -1624999286084342802LL;
	static volatile int64_t t78 = -1554495969LL;

    t78 = (((x449^x450)*x451)/x452);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x454 = -795LL;
	uint16_t x455 = 26214U;
	static uint64_t t79 = 27872543174083065LLU;

    t79 = (((x453^x454)*x455)/x456);

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	int8_t x458 = -1;
	int64_t x460 = INT64_MIN;
	volatile int64_t t80 = -458278881497LL;

    t80 = (((x457^x458)*x459)/x460);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x461 = 450401U;
	uint32_t x462 = 951980U;
	volatile int64_t x463 = 364151269179LL;
	int64_t x464 = -1LL;
	static volatile int64_t t81 = -198694974LL;

    t81 = (((x461^x462)*x463)/x464);

    if (t81 != -199291614142475583LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x465 = INT64_MAX;
	volatile int64_t x466 = INT64_MIN;
	int16_t x467 = INT16_MIN;
	volatile int64_t t82 = 13398735LL;

    t82 = (((x465^x466)*x467)/x468);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x469 = -1;
	int8_t x470 = 1;
	uint64_t x471 = UINT64_MAX;
	int64_t x472 = INT64_MIN;

    t83 = (((x469^x470)*x471)/x472);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x477 = INT16_MAX;
	int64_t x478 = 1041949756483692658LL;
	int16_t x479 = -1;
	uint16_t x480 = 2986U;
	int64_t t84 = -26100206LL;

    t84 = (((x477^x478)*x479)/x480);

    if (t84 != -348944995473433LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x481 = -101;
	int32_t x482 = 0;
	uint8_t x483 = UINT8_MAX;
	volatile int16_t x484 = -1;
	int32_t t85 = 59149663;

    t85 = (((x481^x482)*x483)/x484);

    if (t85 != 25755) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x485 = 658623096U;
	static int8_t x486 = INT8_MIN;
	static uint32_t x487 = UINT32_MAX;

    t86 = (((x485^x486)*x487)/x488);

    if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x489 = 1U;
	int64_t x492 = -1LL;
	uint64_t t87 = 957152397275LLU;

    t87 = (((x489^x490)*x491)/x492);

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x497 = INT16_MAX;
	static uint64_t x498 = 76308260631918LLU;
	int64_t x499 = INT64_MAX;
	uint64_t x500 = 131773215LLU;
	uint64_t t88 = 664852247LLU;

    t88 = (((x497^x498)*x499)/x500);

    if (t88 != 69993706449LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x501 = -1;
	static volatile int32_t x502 = -6726;
	static uint8_t x503 = 56U;
	int32_t t89 = 91747;

    t89 = (((x501^x502)*x503)/x504);

    if (t89 != -2942) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x505 = -1;
	uint8_t x506 = 8U;
	uint32_t x507 = UINT32_MAX;
	uint64_t x508 = UINT64_MAX;
	uint64_t t90 = 32655676118682LLU;

    t90 = (((x505^x506)*x507)/x508);

    if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x514 = -1;
	int16_t x515 = 1154;
	int32_t x516 = INT32_MIN;
	int32_t t91 = -204007;

    t91 = (((x513^x514)*x515)/x516);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x518 = 544LLU;
	uint32_t x519 = 24U;
	uint64_t x520 = 647630LLU;
	volatile uint64_t t92 = 717568LLU;

    t92 = (((x517^x518)*x519)/x520);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x521 = INT16_MAX;
	uint16_t x522 = UINT16_MAX;
	int8_t x523 = -3;
	int8_t x524 = INT8_MAX;
	volatile int32_t t93 = 28639728;

    t93 = (((x521^x522)*x523)/x524);

    if (t93 != -774) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x526 = 3604U;
	int64_t x527 = -73LL;
	volatile int8_t x528 = INT8_MIN;
	static volatile int64_t t94 = 995LL;

    t94 = (((x525^x526)*x527)/x528);

    if (t94 != 35320LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x529 = 63U;
	int8_t x530 = INT8_MIN;
	uint8_t x531 = 20U;
	int16_t x532 = INT16_MIN;

    t95 = (((x529^x530)*x531)/x532);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x534 = 147447;
	int32_t x535 = 4652;
	static int16_t x536 = INT16_MIN;

    t96 = (((x533^x534)*x535)/x536);

    if (t96 != -20918) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x538 = INT32_MAX;
	static int16_t x539 = 913;
	uint32_t x540 = 4U;
	volatile uint32_t t97 = 10637221U;

    t97 = (((x537^x538)*x539)/x540);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x549 = UINT8_MAX;
	volatile uint32_t x550 = UINT32_MAX;
	int32_t x552 = INT32_MAX;
	uint32_t t98 = 103643192U;

    t98 = (((x549^x550)*x551)/x552);

    if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x553 = 241727LLU;
	int8_t x555 = 8;
	volatile int64_t x556 = INT64_MIN;
	uint64_t t99 = 4LLU;

    t99 = (((x553^x554)*x555)/x556);

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint32_t x561 = 1871747946U;
	static int16_t x562 = INT16_MIN;
	static uint32_t t100 = 456959U;

    t100 = (((x561^x562)*x563)/x564);

    if (t100 != 7401216U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x565 = -5;
	int16_t x568 = INT16_MIN;
	uint64_t t101 = 502144LLU;

    t101 = (((x565^x566)*x567)/x568);

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int8_t x573 = INT8_MAX;
	static int16_t x574 = INT16_MAX;
	uint8_t x575 = 0U;
	int32_t x576 = INT32_MAX;

    t102 = (((x573^x574)*x575)/x576);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x590 = INT64_MIN;
	int16_t x591 = -270;
	volatile int16_t x592 = -1;

    t103 = (((x589^x590)*x591)/x592);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x593 = 2296525854254LLU;
	int32_t x594 = INT32_MIN;
	volatile int32_t x595 = -300217;

    t104 = (((x593^x594)*x595)/x596);

    if (t104 != 689580936987533506LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint64_t x597 = 26346LLU;
	volatile int8_t x598 = INT8_MIN;
	int16_t x600 = 1;
	static volatile uint64_t t105 = 54512313207LLU;

    t105 = (((x597^x598)*x599)/x600);

    if (t105 != 18446631279278450326LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x601 = INT8_MIN;
	int8_t x602 = INT8_MIN;
	int16_t x603 = INT16_MIN;
	int64_t x604 = -1LL;

    t106 = (((x601^x602)*x603)/x604);

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x605 = INT16_MAX;
	int64_t x606 = INT64_MIN;
	int64_t x608 = -1LL;
	static volatile int64_t t107 = -95862LL;

    t107 = (((x605^x606)*x607)/x608);

    if (t107 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint32_t x610 = 48U;
	volatile uint64_t x612 = UINT64_MAX;
	uint64_t t108 = 0LLU;

    t108 = (((x609^x610)*x611)/x612);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x617 = 7U;
	int16_t x618 = INT16_MIN;
	int32_t x619 = INT32_MIN;
	uint64_t x620 = 101LLU;
	static uint64_t t109 = 5089713092173LLU;

    t109 = (((x617^x618)*x619)/x620);

    if (t109 != 21262214LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x621 = -1000980054054305LL;
	int32_t x622 = -1;
	uint64_t x624 = 691062185514674806LLU;
	uint64_t t110 = 8292660900690LLU;

    t110 = (((x621^x622)*x623)/x624);

    if (t110 != 26LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x625 = INT32_MIN;
	uint16_t x626 = UINT16_MAX;
	volatile uint32_t x627 = UINT32_MAX;
	int8_t x628 = 1;
	volatile uint32_t t111 = 23U;

    t111 = (((x625^x626)*x627)/x628);

    if (t111 != 2147418113U) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint16_t x630 = UINT16_MAX;
	static int16_t x631 = INT16_MAX;
	volatile uint8_t x632 = 68U;
	volatile int32_t t112 = 818126007;

    t112 = (((x629^x630)*x631)/x632);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int32_t x638 = INT32_MIN;
	int64_t x639 = INT64_MAX;
	int64_t x640 = INT64_MIN;
	uint64_t t113 = 142306213996398974LLU;

    t113 = (((x637^x638)*x639)/x640);

    if (t113 != 1LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x645 = -1;
	volatile int16_t x647 = INT16_MAX;
	static volatile int64_t t114 = -108757909661461LL;

    t114 = (((x645^x646)*x647)/x648);

    if (t114 != -8718585LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x649 = 10U;
	static volatile int8_t x651 = INT8_MIN;
	static int32_t x652 = -1;

    t115 = (((x649^x650)*x651)/x652);

    if (t115 != 11904) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x653 = -10LL;
	int8_t x654 = INT8_MAX;
	int16_t x655 = INT16_MAX;
	static int64_t x656 = INT64_MIN;
	int64_t t116 = -5794LL;

    t116 = (((x653^x654)*x655)/x656);

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x657 = -24;
	uint8_t x658 = 27U;
	int8_t x659 = -1;
	volatile int32_t t117 = 957;

    t117 = (((x657^x658)*x659)/x660);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x667 = 160;
	int16_t x668 = INT16_MIN;
	int32_t t118 = 14;

    t118 = (((x665^x666)*x667)/x668);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x669 = 1550U;
	int64_t x670 = INT64_MIN;
	int8_t x672 = -1;
	volatile int64_t t119 = 2267102828967LL;

    t119 = (((x669^x670)*x671)/x672);

    if (t119 != -9223372036854774258LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x677 = 0LLU;
	int8_t x678 = -25;
	int64_t x680 = INT64_MAX;
	static volatile uint64_t t120 = 123097810975LLU;

    t120 = (((x677^x678)*x679)/x680);

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x685 = 0;
	uint64_t x686 = 24LLU;
	uint64_t x687 = 1724247848LLU;
	int64_t x688 = 292326353LL;
	static uint64_t t121 = 143200828LLU;

    t121 = (((x685^x686)*x687)/x688);

    if (t121 != 141LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x695 = INT8_MAX;
	int64_t x696 = INT64_MAX;

    t122 = (((x693^x694)*x695)/x696);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x697 = 2724U;
	static int16_t x698 = INT16_MIN;
	static uint8_t x699 = 7U;
	int32_t x700 = INT32_MIN;
	volatile uint32_t t123 = 3720U;

    t123 = (((x697^x698)*x699)/x700);

    if (t123 != 1U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x701 = -1216;
	static int8_t x702 = INT8_MIN;
	int8_t x703 = -1;
	volatile uint32_t x704 = 403U;

    t124 = (((x701^x702)*x703)/x704);

    if (t124 != 10657484U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x705 = INT8_MAX;
	int64_t x706 = -202495743LL;
	int16_t x707 = INT16_MIN;
	volatile int64_t x708 = INT64_MIN;
	static int64_t t125 = 17150361403LL;

    t125 = (((x705^x706)*x707)/x708);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x709 = UINT32_MAX;
	uint64_t x710 = 14489830361143LLU;
	int32_t x711 = -1;
	int16_t x712 = 32;
	static volatile uint64_t t126 = 203484958699930LLU;

    t126 = (((x709^x710)*x711)/x712);

    if (t126 != 576460299543611457LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x713 = -1LL;
	int16_t x714 = INT16_MIN;
	int32_t x715 = INT32_MIN;
	int32_t x716 = -1;
	static volatile int64_t t127 = 28755571LL;

    t127 = (((x713^x714)*x715)/x716);

    if (t127 != 70366596694016LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x717 = 2U;
	uint8_t x718 = 56U;

    t128 = (((x717^x718)*x719)/x720);

    if (t128 != 16843008U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x727 = -1;
	uint64_t x728 = UINT64_MAX;

    t129 = (((x725^x726)*x727)/x728);

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t x729 = 0;
	int8_t x730 = 12;
	uint8_t x731 = 47U;
	uint8_t x732 = UINT8_MAX;

    t130 = (((x729^x730)*x731)/x732);

    if (t130 != 2) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x733 = UINT16_MAX;
	int16_t x734 = INT16_MIN;
	static int64_t x735 = -1LL;
	static int32_t x736 = INT32_MIN;
	int64_t t131 = 503LL;

    t131 = (((x733^x734)*x735)/x736);

    if (t131 != 0LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x738 = 2101057491174LLU;
	uint64_t x739 = UINT64_MAX;
	uint8_t x740 = UINT8_MAX;
	uint64_t t132 = 48602198935697255LLU;

    t132 = (((x737^x738)*x739)/x740);

    if (t132 != 72340164598635530LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x741 = INT16_MIN;
	static int64_t x743 = INT64_MIN;
	uint64_t x744 = 8LLU;
	volatile uint64_t t133 = 22266581094LLU;

    t133 = (((x741^x742)*x743)/x744);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x754 = 1U;
	int8_t x755 = -1;
	int32_t x756 = INT32_MAX;

    t134 = (((x753^x754)*x755)/x756);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x757 = 3007U;
	uint8_t x758 = UINT8_MAX;
	uint8_t x759 = UINT8_MAX;
	static volatile int16_t x760 = INT16_MAX;

    t135 = (((x757^x758)*x759)/x760);

    if (t135 != 22U) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x762 = 11351107242234111LLU;
	int16_t x763 = INT16_MIN;
	uint64_t t136 = 14552722686296LLU;

    t136 = (((x761^x762)*x763)/x764);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x765 = 6U;
	int16_t x767 = -1;
	uint64_t x768 = UINT64_MAX;

    t137 = (((x765^x766)*x767)/x768);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int64_t x773 = INT64_MAX;
	int32_t x774 = -378563;
	int32_t x775 = -1;
	int16_t x776 = -29;
	int64_t t138 = 43922LL;

    t138 = (((x773^x774)*x775)/x776);

    if (t138 != -318047311615668870LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x777 = 800795U;
	static int32_t x778 = -12596;
	uint64_t x779 = UINT64_MAX;
	int64_t x780 = INT64_MAX;
	uint64_t t139 = 13593875775325765LLU;

    t139 = (((x777^x778)*x779)/x780);

    if (t139 != 1LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x782 = 1;
	int16_t x783 = INT16_MIN;
	static int8_t x784 = 61;
	volatile int32_t t140 = 96957;

    t140 = (((x781^x782)*x783)/x784);

    if (t140 != 68221) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x785 = INT16_MIN;
	int8_t x786 = INT8_MIN;
	static int32_t t141 = -1;

    t141 = (((x785^x786)*x787)/x788);

    if (t141 != -367521) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x789 = INT16_MAX;
	static int16_t x790 = INT16_MIN;
	int64_t x791 = 29726165579979LL;
	int8_t x792 = INT8_MAX;
	int64_t t142 = -186541286237158LL;

    t142 = (((x789^x790)*x791)/x792);

    if (t142 != -234064295905LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x793 = 4;

    t143 = (((x793^x794)*x795)/x796);

    if (t143 != 26017974716092455LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x797 = -1LL;
	int16_t x798 = INT16_MAX;
	uint8_t x799 = UINT8_MAX;
	int32_t x800 = 121;
	volatile int64_t t144 = 765LL;

    t144 = (((x797^x798)*x799)/x800);

    if (t144 != -69056LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x801 = 8438780U;
	static int16_t x802 = INT16_MIN;
	int32_t x804 = INT32_MIN;

    t145 = (((x801^x802)*x803)/x804);

    if (t145 != 1U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x805 = INT16_MIN;
	uint32_t x806 = UINT32_MAX;
	int64_t x807 = 1LL;
	uint16_t x808 = 3U;
	int64_t t146 = 1234LL;

    t146 = (((x805^x806)*x807)/x808);

    if (t146 != 10922LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x813 = 32U;
	uint64_t x814 = UINT64_MAX;
	int64_t x815 = INT64_MIN;
	int16_t x816 = -1;
	uint64_t t147 = 35478759305957213LLU;

    t147 = (((x813^x814)*x815)/x816);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x825 = INT8_MIN;
	uint16_t x826 = 164U;
	volatile int16_t x827 = 0;
	int16_t x828 = INT16_MIN;
	int32_t t148 = 12;

    t148 = (((x825^x826)*x827)/x828);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static int32_t x829 = INT32_MAX;
	int16_t x830 = INT16_MAX;
	volatile uint32_t x831 = 1U;
	uint8_t x832 = UINT8_MAX;
	uint32_t t149 = 174U;

    t149 = (((x829^x830)*x831)/x832);

    if (t149 != 8421376U) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x833 = INT64_MAX;
	int64_t x834 = INT64_MIN;
	static uint32_t x835 = 264992706U;
	uint64_t x836 = 404LLU;
	uint64_t t150 = 139512114923729820LLU;

    t150 = (((x833^x834)*x835)/x836);

    if (t150 != 45660257607536036LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x837 = 8;
	uint64_t x838 = 120LLU;
	int16_t x839 = 1;
	volatile uint64_t t151 = 11660430LLU;

    t151 = (((x837^x838)*x839)/x840);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int64_t x846 = -419LL;
	uint16_t x847 = 27171U;
	uint16_t x848 = 7U;

    t152 = (((x845^x846)*x847)/x848);

    if (t152 != -1358550LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint64_t x849 = 17396366442318LLU;
	volatile uint8_t x850 = 67U;
	int8_t x851 = -1;
	uint32_t x852 = UINT32_MAX;

    t153 = (((x849^x850)*x851)/x852);

    if (t153 != 4294963246LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x853 = 0LL;
	int8_t x855 = INT8_MIN;
	static int16_t x856 = INT16_MAX;
	int64_t t154 = -1085991522362687625LL;

    t154 = (((x853^x854)*x855)/x856);

    if (t154 != 128LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint64_t x861 = 747131800253796424LLU;
	int8_t x862 = 1;
	int8_t x864 = -1;
	static volatile uint64_t t155 = 5269LLU;

    t155 = (((x861^x862)*x863)/x864);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x869 = 108688840357LLU;
	volatile int32_t x870 = 8090250;
	uint16_t x871 = 428U;
	int64_t x872 = -1LL;

    t156 = (((x869^x870)*x871)/x872);

    if (t156 != 0LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x873 = 439LL;
	int16_t x874 = -5;
	uint32_t x875 = UINT32_MAX;
	static volatile int64_t x876 = -112LL;

    t157 = (((x873^x874)*x875)/x876);

    if (t157 != 16719694112LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x877 = 290599615786056022LL;
	int32_t x878 = -3696797;

    t158 = (((x877^x878)*x879)/x880);

    if (t158 != 11623984631546038LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x882 = INT8_MIN;
	uint16_t x883 = 1237U;
	int8_t x884 = INT8_MIN;
	volatile int32_t t159 = -1;

    t159 = (((x881^x882)*x883)/x884);

    if (t159 != -1227) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x889 = 21;
	uint8_t x892 = 6U;
	int32_t t160 = -22;

    t160 = (((x889^x890)*x891)/x892);

    if (t160 != 8233) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t t161 = -1067367463270LL;

    t161 = (((x893^x894)*x895)/x896);

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x897 = INT16_MAX;
	volatile int8_t x898 = INT8_MIN;
	uint16_t x899 = 338U;
	static volatile uint64_t t162 = 238366770LLU;

    t162 = (((x897^x898)*x899)/x900);

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x905 = 12U;
	int64_t x906 = INT64_MIN;
	int16_t x907 = -1;
	int64_t x908 = -25852LL;
	volatile int64_t t163 = -3LL;

    t163 = (((x905^x906)*x907)/x908);

    if (t163 != -356775956864257LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x917 = -5;
	uint64_t x918 = UINT64_MAX;

    t164 = (((x917^x918)*x919)/x920);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x921 = -1LL;
	static int8_t x922 = INT8_MAX;
	int16_t x923 = INT16_MAX;
	static int32_t x924 = INT32_MAX;
	volatile int64_t t165 = -430LL;

    t165 = (((x921^x922)*x923)/x924);

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x925 = INT16_MIN;
	int64_t x926 = INT64_MIN;
	uint64_t x927 = UINT64_MAX;
	uint16_t x928 = UINT16_MAX;

    t166 = (((x925^x926)*x927)/x928);

    if (t166 != 140739635871745LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x930 = 1U;
	uint16_t x931 = 917U;
	int64_t x932 = -1LL;

    t167 = (((x929^x930)*x931)/x932);

    if (t167 != 30047339LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x934 = INT32_MIN;
	int8_t x935 = 0;
	int64_t x936 = INT64_MAX;
	volatile int64_t t168 = 17554132935707LL;

    t168 = (((x933^x934)*x935)/x936);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x937 = INT8_MIN;
	int8_t x938 = INT8_MAX;
	int64_t x939 = -1LL;
	int64_t x940 = INT64_MIN;
	static volatile int64_t t169 = 3194758144450LL;

    t169 = (((x937^x938)*x939)/x940);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x941 = 0U;
	int64_t x942 = -1LL;
	uint64_t x943 = 103617454806822LLU;
	int32_t x944 = INT32_MIN;
	uint64_t t170 = 8881976115220169126LLU;

    t170 = (((x941^x942)*x943)/x944);

    if (t170 != 0LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x946 = 203591499210109LLU;
	int8_t x947 = 58;
	static volatile int16_t x948 = -1;

    t171 = (((x945^x946)*x947)/x948);

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x962 = INT32_MIN;
	volatile uint64_t x963 = 20602LLU;
	int8_t x964 = -1;
	static uint64_t t172 = 1613454655535166232LLU;

    t172 = (((x961^x962)*x963)/x964);

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x965 = 34496LLU;
	int64_t x966 = -3191026152LL;
	static int16_t x967 = INT16_MAX;
	int64_t x968 = INT64_MAX;
	uint64_t t173 = 35515334370434332LLU;

    t173 = (((x965^x966)*x967)/x968);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x973 = -1;
	int16_t x975 = 0;
	int32_t x976 = INT32_MIN;
	int32_t t174 = -1;

    t174 = (((x973^x974)*x975)/x976);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x977 = -392;
	int16_t x978 = INT16_MIN;
	int32_t x979 = -1;
	volatile int32_t t175 = 1004;

    t175 = (((x977^x978)*x979)/x980);

    if (t175 != -10792) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x981 = 14U;
	uint32_t x982 = 259924U;
	static volatile int64_t x984 = INT64_MAX;
	static volatile int64_t t176 = 2980LL;

    t176 = (((x981^x982)*x983)/x984);

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x986 = 14;
	int16_t x987 = -1;
	int64_t x988 = -21876206201LL;
	volatile int64_t t177 = 320LL;

    t177 = (((x985^x986)*x987)/x988);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x993 = INT32_MIN;
	uint64_t x995 = 905632555606LLU;
	uint32_t x996 = UINT32_MAX;
	volatile uint64_t t178 = 604LLU;

    t178 = (((x993^x994)*x995)/x996);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x1005 = -1;
	int16_t x1006 = INT16_MIN;
	static int8_t x1007 = INT8_MIN;
	int16_t x1008 = INT16_MIN;
	static int32_t t179 = -1309;

    t179 = (((x1005^x1006)*x1007)/x1008);

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x1013 = 57702616573LLU;
	int8_t x1014 = -1;
	int16_t x1015 = -760;
	volatile uint64_t t180 = 280899LLU;

    t180 = (((x1013^x1014)*x1015)/x1016);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x1017 = UINT64_MAX;
	static int16_t x1018 = INT16_MIN;
	static volatile int64_t x1019 = INT64_MAX;
	static int32_t x1020 = INT32_MAX;
	uint64_t t181 = 167638487849776469LLU;

    t181 = (((x1017^x1018)*x1019)/x1020);

    if (t181 != 4294967297LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1022 = INT32_MAX;
	uint32_t x1023 = 52741U;
	volatile uint32_t t182 = 0U;

    t182 = (((x1021^x1022)*x1023)/x1024);

    if (t182 != 0U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1033 = -1483LL;
	int8_t x1034 = 10;
	static int8_t x1035 = 25;
	uint32_t x1036 = 15267U;

    t183 = (((x1033^x1034)*x1035)/x1036);

    if (t183 != -2LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x1037 = 7816U;

    t184 = (((x1037^x1038)*x1039)/x1040);

    if (t184 != -34476) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1041 = INT64_MIN;
	int64_t x1042 = INT64_MIN;
	int16_t x1043 = -22;
	int64_t x1044 = INT64_MIN;

    t185 = (((x1041^x1042)*x1043)/x1044);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1045 = 43146264979644LL;
	static uint32_t x1046 = 42940U;
	volatile int64_t x1047 = 13LL;

    t186 = (((x1045^x1046)*x1047)/x1048);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1053 = 7LLU;
	static uint16_t x1054 = UINT16_MAX;
	int16_t x1055 = 456;
	static volatile int8_t x1056 = INT8_MAX;
	volatile uint64_t t187 = 19930689414LLU;

    t187 = (((x1053^x1054)*x1055)/x1056);

    if (t187 != 235281LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1061 = 426539294468835881LLU;
	int64_t x1062 = -1LL;
	uint32_t x1063 = 25103U;
	int32_t x1064 = -1;
	volatile uint64_t t188 = 6585073373749LLU;

    t188 = (((x1061^x1062)*x1063)/x1064);

    if (t188 != 0LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x1066 = -1;
	int8_t x1067 = INT8_MIN;
	volatile int32_t t189 = 5196;

    t189 = (((x1065^x1066)*x1067)/x1068);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x1069 = 986537U;
	static int16_t x1070 = 30;
	int8_t x1071 = INT8_MIN;
	int64_t x1072 = 242859LL;

    t190 = (((x1069^x1070)*x1071)/x1072);

    if (t190 != 17165LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1077 = INT16_MIN;
	volatile int16_t x1078 = -1;
	int16_t x1079 = INT16_MIN;
	static uint64_t x1080 = 2971814LLU;
	static uint64_t t191 = 4695280LLU;

    t191 = (((x1077^x1078)*x1079)/x1080);

    if (t191 != 6207233720763LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1089 = -1;
	static int16_t x1090 = -1;
	int64_t x1091 = 1753013487772366LL;
	static int16_t x1092 = -1;
	int64_t t192 = 5LL;

    t192 = (((x1089^x1090)*x1091)/x1092);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1094 = INT64_MAX;
	int8_t x1095 = -1;
	int64_t t193 = -144065148607792710LL;

    t193 = (((x1093^x1094)*x1095)/x1096);

    if (t193 != 4294967295LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1097 = INT32_MAX;
	int8_t x1098 = INT8_MIN;
	uint32_t x1099 = 261025109U;
	uint32_t t194 = 30733U;

    t194 = (((x1097^x1098)*x1099)/x1100);

    if (t194 != 14311U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1101 = INT8_MAX;
	static int8_t x1102 = -1;
	volatile int8_t x1103 = 12;
	uint32_t x1104 = 4U;
	volatile uint32_t t195 = 4U;

    t195 = (((x1101^x1102)*x1103)/x1104);

    if (t195 != 1073741440U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1105 = UINT64_MAX;
	uint8_t x1106 = UINT8_MAX;
	int8_t x1107 = INT8_MIN;
	uint64_t t196 = 1526638738LLU;

    t196 = (((x1105^x1106)*x1107)/x1108);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int64_t x1109 = INT64_MAX;
	int64_t x1110 = INT64_MAX;
	uint16_t x1111 = 13U;
	volatile uint64_t x1112 = UINT64_MAX;
	uint64_t t197 = 26343435465141501LLU;

    t197 = (((x1109^x1110)*x1111)/x1112);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x1117 = 825644U;
	uint64_t x1118 = 160412679734036659LLU;
	static int16_t x1119 = INT16_MIN;
	int8_t x1120 = 11;
	volatile uint64_t t198 = 73293LLU;

    t198 = (((x1117^x1118)*x1119)/x1120);

    if (t198 != 83579224779131810LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1129 = INT64_MIN;
	static volatile int64_t x1130 = -32355LL;
	volatile int16_t x1131 = -1;
	int16_t x1132 = -195;
	static int64_t t199 = 222808964580LL;

    t199 = (((x1129^x1130)*x1131)/x1132);

    if (t199 != 47299343778742274LL) { NG(); } else { ; }
	
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

