
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

static uint16_t x4 = 13U;
int64_t x5 = -1LL;
int8_t x7 = INT8_MIN;
volatile int32_t x8 = INT32_MIN;
int64_t t1 = -75688681LL;
static volatile int16_t x11 = INT16_MIN;
volatile uint8_t x13 = 4U;
uint32_t x14 = UINT32_MAX;
int8_t x17 = -1;
int32_t x21 = 7;
volatile uint16_t x23 = 21U;
int8_t x33 = INT8_MIN;
static uint32_t x35 = 6407U;
int32_t x42 = -1;
int8_t x46 = INT8_MAX;
int32_t t12 = -3408938;
volatile int16_t x57 = -115;
int32_t t15 = -9637434;
uint64_t x80 = 32382028380468397LLU;
static uint8_t x84 = 0U;
uint16_t x90 = UINT16_MAX;
int32_t t21 = -31219446;
volatile int32_t x112 = -189663;
int64_t x115 = 2936377387223LL;
int8_t x117 = 8;
volatile int32_t t24 = -508147474;
volatile int64_t t25 = -700882877LL;
static int32_t x138 = 61;
int8_t x142 = INT8_MIN;
int16_t x143 = 12798;
static uint8_t x153 = 0U;
uint64_t x154 = 21523233LLU;
volatile uint64_t t31 = 53555499690LLU;
int32_t t32 = -672089;
static int64_t x168 = INT64_MIN;
uint32_t x169 = 1016349U;
volatile int64_t x170 = INT64_MIN;
int8_t x172 = -13;
volatile uint16_t x176 = 4207U;
volatile int32_t t35 = 491094990;
int32_t x195 = INT32_MIN;
volatile uint32_t t41 = 3U;
volatile int16_t x205 = -1;
int32_t x206 = -51061;
int32_t t42 = -5546;
volatile int32_t t43 = 1;
static uint8_t x213 = 51U;
static int16_t x214 = -5530;
int32_t t44 = -80844835;
volatile int64_t x227 = 14340121105LL;
static int16_t x234 = -1;
volatile uint16_t x235 = 3725U;
int32_t t49 = -105025;
uint64_t x243 = UINT64_MAX;
int64_t t50 = 125401597875041487LL;
int32_t x253 = -3;
uint64_t x261 = 45479653305478820LLU;
volatile uint32_t x262 = UINT32_MAX;
volatile int64_t x268 = INT64_MIN;
static int8_t x273 = INT8_MIN;
int32_t x281 = INT32_MAX;
uint8_t x283 = 76U;
volatile int64_t t58 = -2110833864051600028LL;
static volatile int32_t t59 = -22776;
uint8_t x293 = UINT8_MAX;
int32_t x302 = 23;
static int64_t t65 = 87681712003941895LL;
volatile uint8_t x321 = 3U;
static int8_t x323 = -1;
int64_t x332 = INT64_MIN;
static volatile int8_t x333 = -1;
int32_t x338 = INT32_MIN;
uint16_t x344 = 0U;
static volatile uint64_t t71 = 87774684LLU;
static uint8_t x361 = 80U;
volatile uint64_t x365 = 329237LLU;
volatile int64_t x377 = -1LL;
static uint16_t x386 = 0U;
static int32_t x387 = -1;
uint8_t x390 = UINT8_MAX;
volatile int32_t t81 = 1;
uint8_t x393 = 80U;
uint16_t x394 = 760U;
int8_t x395 = -1;
static int16_t x398 = 232;
int16_t x404 = INT16_MAX;
int16_t x406 = -1;
uint32_t t85 = 496962U;
volatile int32_t x410 = -1;
volatile uint32_t t86 = 881650802U;
static int32_t x413 = 158;
volatile uint16_t x433 = 3U;
uint16_t x436 = 7546U;
int16_t x439 = INT16_MAX;
static uint16_t x440 = 0U;
uint8_t x450 = 100U;
volatile int32_t x452 = -270699;
uint64_t x453 = 605476035272565526LLU;
int8_t x454 = -4;
int64_t t96 = 652395795374531LL;
int16_t x472 = INT16_MIN;
static int32_t t101 = -7433807;
int32_t x482 = INT32_MIN;
int16_t x487 = -1;
volatile int32_t t103 = 0;
uint64_t x491 = 13624LLU;
int16_t x492 = INT16_MIN;
static uint64_t t104 = 35237725886481LLU;
int64_t x493 = -1LL;
uint8_t x495 = 1U;
int8_t x502 = -1;
volatile int8_t x514 = 0;
int32_t x521 = 460;
static int32_t x523 = -242116;
static volatile uint32_t t112 = 851644795U;
volatile int32_t t114 = 30185;
volatile int32_t x547 = INT32_MAX;
volatile int16_t x550 = INT16_MIN;
int32_t x554 = -1;
int64_t x559 = -1LL;
static int32_t t120 = 12182229;
uint8_t x581 = UINT8_MAX;
static int64_t x585 = INT64_MAX;
volatile uint64_t x597 = 8326274LLU;
static volatile uint16_t x601 = UINT16_MAX;
int64_t x607 = 4068LL;
volatile int32_t t129 = 4912;
static uint32_t x618 = 2U;
int8_t x620 = INT8_MIN;
static volatile uint32_t t132 = 100282668U;
uint16_t x622 = 49U;
volatile int8_t x623 = -1;
uint32_t x630 = UINT32_MAX;
volatile uint16_t x632 = 395U;
int32_t x636 = INT32_MAX;
static uint32_t x638 = UINT32_MAX;
uint64_t t137 = 1543LLU;
static uint32_t x641 = 47U;
int64_t x642 = -1LL;
uint64_t x645 = 53007LLU;
volatile uint64_t t140 = 5902936LLU;
int8_t x665 = INT8_MIN;
int8_t x668 = -1;
int32_t t145 = -814418335;
int32_t x678 = INT32_MIN;
volatile uint32_t x686 = 29U;
int32_t t149 = 8;
int8_t x707 = INT8_MIN;
static int8_t x714 = -1;
int32_t x715 = INT32_MIN;
volatile int64_t x722 = INT64_MAX;
int64_t x723 = -1LL;
int64_t x731 = INT64_MAX;
int32_t x736 = -1;
int16_t x737 = INT16_MAX;
int64_t x741 = INT64_MAX;
int32_t x742 = INT32_MIN;
int32_t x748 = 70;
uint64_t t163 = 467793LLU;
static int8_t x766 = INT8_MIN;
int32_t t169 = -6;
static int64_t x775 = INT64_MIN;
int16_t x777 = -1;
uint64_t x780 = UINT64_MAX;
int32_t t171 = -12707;
int16_t x785 = INT16_MAX;
uint64_t x788 = UINT64_MAX;
int32_t t173 = 2545;
int32_t x799 = INT32_MIN;
int16_t x802 = 131;
static uint64_t x830 = 1081952365038LLU;
uint8_t x842 = UINT8_MAX;
int32_t t187 = -1;
int16_t x854 = INT16_MAX;
int64_t x855 = INT64_MIN;
static int32_t t190 = -2;
uint64_t t191 = 11481306893706260LLU;
volatile int32_t t192 = -188045901;
volatile uint32_t t194 = 1916956835U;
uint16_t x889 = 1798U;
int8_t x897 = INT8_MIN;
volatile uint32_t t197 = 2150U;
int32_t x903 = -47947416;
int64_t x907 = INT64_MAX;


void f0(void) {
    	int16_t x1 = 174;
	int32_t x2 = -1;
	volatile int8_t x3 = 43;
	int32_t t0 = -3410267;

    t0 = (x1+(x2-(x3==x4)));

    if (t0 != 173) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x6 = INT16_MAX;

    t1 = (x5+(x6-(x7==x8)));

    if (t1 != 32766LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MAX;
	static volatile uint64_t x10 = 31486531859100980LLU;
	static uint16_t x12 = 12515U;
	volatile uint64_t t2 = 0LLU;

    t2 = (x9+(x10-(x11==x12)));

    if (t2 != 9254858568713876787LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint64_t x15 = 2171151521655628LLU;
	uint64_t x16 = 859138080LLU;
	volatile uint32_t t3 = 109542U;

    t3 = (x13+(x14-(x15==x16)));

    if (t3 != 3U) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x18 = INT32_MAX;
	static uint8_t x19 = 0U;
	int8_t x20 = 62;
	int32_t t4 = -363;

    t4 = (x17+(x18-(x19==x20)));

    if (t4 != 2147483646) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int64_t x22 = -10136985LL;
	static int32_t x24 = INT32_MIN;
	volatile int64_t t5 = -75201778497LL;

    t5 = (x21+(x22-(x23==x24)));

    if (t5 != -10136978LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x25 = -1;
	static int16_t x26 = -121;
	int8_t x27 = INT8_MAX;
	static volatile uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -3;

    t6 = (x25+(x26-(x27==x28)));

    if (t6 != -122) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x29 = 23U;
	static volatile int16_t x30 = 0;
	volatile int32_t x31 = -1;
	int64_t x32 = -1LL;
	static volatile int32_t t7 = 333473;

    t7 = (x29+(x30-(x31==x32)));

    if (t7 != 22) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x34 = INT8_MAX;
	int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = 4628715;

    t8 = (x33+(x34-(x35==x36)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x41 = 431537333089LLU;
	static int32_t x43 = INT32_MIN;
	static int16_t x44 = INT16_MIN;
	uint64_t t9 = 98841579367LLU;

    t9 = (x41+(x42-(x43==x44)));

    if (t9 != 431537333088LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x45 = INT16_MIN;
	volatile int64_t x47 = 13246127993LL;
	int16_t x48 = INT16_MIN;
	volatile int32_t t10 = 1;

    t10 = (x45+(x46-(x47==x48)));

    if (t10 != -32641) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x49 = 28261576U;
	int32_t x50 = INT32_MIN;
	static int8_t x51 = INT8_MIN;
	static int16_t x52 = -31;
	static volatile uint32_t t11 = 12284U;

    t11 = (x49+(x50-(x51==x52)));

    if (t11 != 2175745224U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MAX;
	int16_t x54 = -7;
	int16_t x55 = INT16_MIN;
	static uint8_t x56 = 34U;

    t12 = (x53+(x54-(x55==x56)));

    if (t12 != 120) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x58 = 4288947;
	static int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MAX;
	volatile int32_t t13 = -6;

    t13 = (x57+(x58-(x59==x60)));

    if (t13 != 4288832) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x61 = -57674;
	int8_t x62 = 0;
	volatile int64_t x63 = INT64_MIN;
	volatile int32_t x64 = -14392;
	int32_t t14 = -857675;

    t14 = (x61+(x62-(x63==x64)));

    if (t14 != -57674) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x69 = INT8_MIN;
	volatile uint16_t x70 = UINT16_MAX;
	uint8_t x71 = 42U;
	uint8_t x72 = 0U;

    t15 = (x69+(x70-(x71==x72)));

    if (t15 != 65407) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = -1LL;
	int32_t x74 = INT32_MAX;
	int8_t x75 = -1;
	int16_t x76 = -1;
	static int64_t t16 = -233266605522479095LL;

    t16 = (x73+(x74-(x75==x76)));

    if (t16 != 2147483645LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = 4080459443352LLU;
	volatile int16_t x78 = 11927;
	volatile uint16_t x79 = 10015U;
	volatile uint64_t t17 = 1379551LLU;

    t17 = (x77+(x78-(x79==x80)));

    if (t17 != 4080459455279LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = 21790U;
	static volatile uint32_t x82 = 1U;
	uint64_t x83 = 267621705915576LLU;
	volatile uint32_t t18 = 255546955U;

    t18 = (x81+(x82-(x83==x84)));

    if (t18 != 21791U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x89 = INT16_MIN;
	int64_t x91 = -41484242907940LL;
	static int16_t x92 = -7;
	int32_t t19 = 477286764;

    t19 = (x89+(x90-(x91==x92)));

    if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
    	static int8_t x101 = -8;
	uint32_t x102 = 355133U;
	volatile uint32_t x103 = 2066834056U;
	volatile uint16_t x104 = 345U;
	volatile uint32_t t20 = 150U;

    t20 = (x101+(x102-(x103==x104)));

    if (t20 != 355125U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint16_t x105 = 1088U;
	static int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	int16_t x108 = -7424;

    t21 = (x105+(x106-(x107==x108)));

    if (t21 != 1215) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x109 = 1453865U;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 430540938330288LLU;
	volatile uint64_t t22 = 59893352988011033LLU;

    t22 = (x109+(x110-(x111==x112)));

    if (t22 != 1453864LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x113 = -46489;
	int16_t x114 = 1;
	volatile uint64_t x116 = 8381072556661242057LLU;
	int32_t t23 = 7877969;

    t23 = (x113+(x114-(x115==x116)));

    if (t23 != -46488) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x118 = -1299;
	volatile int32_t x119 = 1;
	int64_t x120 = 450250038771470LL;

    t24 = (x117+(x118-(x119==x120)));

    if (t24 != -1291) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x121 = INT64_MIN;
	static uint8_t x122 = 6U;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = INT32_MIN;

    t25 = (x121+(x122-(x123==x124)));

    if (t25 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x125 = 61U;
	int16_t x126 = 157;
	int16_t x127 = -120;
	static uint16_t x128 = 2U;
	volatile int32_t t26 = -2574;

    t26 = (x125+(x126-(x127==x128)));

    if (t26 != 218) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x133 = 145U;
	volatile int8_t x134 = 1;
	uint64_t x135 = 1807488LLU;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t27 = -207021261;

    t27 = (x133+(x134-(x135==x136)));

    if (t27 != 146) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x137 = UINT8_MAX;
	volatile int64_t x139 = INT64_MIN;
	volatile uint64_t x140 = 14327997LLU;
	static volatile int32_t t28 = 3;

    t28 = (x137+(x138-(x139==x140)));

    if (t28 != 316) { NG(); } else { ; }
	
}

void f29(void) {
    	static int16_t x141 = INT16_MAX;
	int16_t x144 = INT16_MIN;
	int32_t t29 = -55443;

    t29 = (x141+(x142-(x143==x144)));

    if (t29 != 32639) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x149 = INT64_MAX;
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = 20;
	uint32_t x152 = 11U;
	uint64_t t30 = 2542035969LLU;

    t30 = (x149+(x150-(x151==x152)));

    if (t30 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x155 = -37;
	int32_t x156 = -1;

    t31 = (x153+(x154-(x155==x156)));

    if (t31 != 21523233LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x157 = UINT16_MAX;
	static volatile int8_t x158 = 1;
	uint8_t x159 = 29U;
	int32_t x160 = -2157340;

    t32 = (x157+(x158-(x159==x160)));

    if (t32 != 65536) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x165 = UINT32_MAX;
	static int32_t x166 = 29411;
	static int32_t x167 = 469688;
	volatile uint32_t t33 = 5127U;

    t33 = (x165+(x166-(x167==x168)));

    if (t33 != 29410U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x171 = -1;
	int64_t t34 = -1922925465414368LL;

    t34 = (x169+(x170-(x171==x172)));

    if (t34 != -9223372036853759459LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = -1;
	int8_t x175 = 0;

    t35 = (x173+(x174-(x175==x176)));

    if (t35 != -32769) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x181 = 7119LLU;
	uint16_t x182 = UINT16_MAX;
	uint16_t x183 = 4U;
	int8_t x184 = INT8_MIN;
	uint64_t t36 = 752936LLU;

    t36 = (x181+(x182-(x183==x184)));

    if (t36 != 72654LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x185 = INT64_MAX;
	static int16_t x186 = INT16_MIN;
	uint64_t x187 = 49073LLU;
	int32_t x188 = INT32_MAX;
	volatile int64_t t37 = 110841LL;

    t37 = (x185+(x186-(x187==x188)));

    if (t37 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x189 = -50LL;
	static int32_t x190 = INT32_MIN;
	int64_t x191 = -1LL;
	int16_t x192 = INT16_MIN;
	volatile int64_t t38 = 2659LL;

    t38 = (x189+(x190-(x191==x192)));

    if (t38 != -2147483698LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x193 = INT16_MIN;
	static int8_t x194 = INT8_MIN;
	volatile uint8_t x196 = UINT8_MAX;
	volatile int32_t t39 = -36700;

    t39 = (x193+(x194-(x195==x196)));

    if (t39 != -32896) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = UINT32_MAX;
	uint8_t x198 = 36U;
	uint16_t x199 = 60U;
	static uint64_t x200 = UINT64_MAX;
	uint32_t t40 = 1754U;

    t40 = (x197+(x198-(x199==x200)));

    if (t40 != 35U) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int16_t x201 = INT16_MIN;
	uint32_t x202 = 415153828U;
	int8_t x203 = INT8_MAX;
	uint64_t x204 = 138290378816482029LLU;

    t41 = (x201+(x202-(x203==x204)));

    if (t41 != 415121060U) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x207 = 3493U;
	uint16_t x208 = 1144U;

    t42 = (x205+(x206-(x207==x208)));

    if (t42 != -51062) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x209 = -128;
	int8_t x210 = -1;
	static int8_t x211 = 1;
	static volatile int32_t x212 = -74;

    t43 = (x209+(x210-(x211==x212)));

    if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x215 = 16065899273262790LLU;
	int64_t x216 = -152572156300993LL;

    t44 = (x213+(x214-(x215==x216)));

    if (t44 != -5479) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x217 = -1;
	uint64_t x218 = 2257LLU;
	volatile int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	static uint64_t t45 = 54826575LLU;

    t45 = (x217+(x218-(x219==x220)));

    if (t45 != 2255LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint16_t x221 = 15017U;
	volatile int64_t x222 = -1LL;
	static int16_t x223 = INT16_MIN;
	int32_t x224 = -34561;
	volatile int64_t t46 = 115305LL;

    t46 = (x221+(x222-(x223==x224)));

    if (t46 != 15016LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x225 = UINT16_MAX;
	int16_t x226 = -71;
	static int16_t x228 = 4109;
	volatile int32_t t47 = -7;

    t47 = (x225+(x226-(x227==x228)));

    if (t47 != 65464) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x233 = -188;
	int64_t x236 = 6619022833392LL;
	int32_t t48 = -1050995063;

    t48 = (x233+(x234-(x235==x236)));

    if (t48 != -189) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x237 = 18;
	uint8_t x238 = 18U;
	static uint64_t x239 = 342990LLU;
	volatile uint32_t x240 = 348986U;

    t49 = (x237+(x238-(x239==x240)));

    if (t49 != 36) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x241 = INT64_MIN;
	static int32_t x242 = INT32_MAX;
	int64_t x244 = 203561LL;

    t50 = (x241+(x242-(x243==x244)));

    if (t50 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x249 = -111725930400LL;
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MAX;
	int32_t x252 = INT32_MIN;
	int64_t t51 = 357LL;

    t51 = (x249+(x250-(x251==x252)));

    if (t51 != -111725930401LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x254 = 516153U;
	int8_t x255 = INT8_MAX;
	static int64_t x256 = INT64_MIN;
	volatile uint32_t t52 = 7U;

    t52 = (x253+(x254-(x255==x256)));

    if (t52 != 516150U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x263 = INT64_MAX;
	static uint64_t x264 = 439899280474LLU;
	volatile uint64_t t53 = 74LLU;

    t53 = (x261+(x262-(x263==x264)));

    if (t53 != 45479657600446115LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x265 = UINT16_MAX;
	int32_t x266 = 1;
	int64_t x267 = 1041LL;
	volatile int32_t t54 = 69112;

    t54 = (x265+(x266-(x267==x268)));

    if (t54 != 65536) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x269 = -1LL;
	int64_t x270 = INT64_MAX;
	int8_t x271 = 6;
	int64_t x272 = INT64_MAX;
	static volatile int64_t t55 = 63595817761393LL;

    t55 = (x269+(x270-(x271==x272)));

    if (t55 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x274 = -105;
	volatile int64_t x275 = INT64_MIN;
	int32_t x276 = 259562;
	static volatile int32_t t56 = 2;

    t56 = (x273+(x274-(x275==x276)));

    if (t56 != -233) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x277 = 12016813542155LL;
	volatile uint8_t x278 = UINT8_MAX;
	int64_t x279 = INT64_MAX;
	uint64_t x280 = 1650876833LLU;
	int64_t t57 = 12494690820324LL;

    t57 = (x277+(x278-(x279==x280)));

    if (t57 != 12016813542410LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x282 = 48649004880059LL;
	int16_t x284 = -177;

    t58 = (x281+(x282-(x283==x284)));

    if (t58 != 48651152363706LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x285 = -32018909;
	int32_t x286 = INT32_MAX;
	int64_t x287 = 158910594951471811LL;
	int16_t x288 = 76;

    t59 = (x285+(x286-(x287==x288)));

    if (t59 != 2115464738) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x289 = 2;
	static uint32_t x290 = UINT32_MAX;
	uint8_t x291 = 11U;
	volatile uint16_t x292 = 719U;
	uint32_t t60 = 21U;

    t60 = (x289+(x290-(x291==x292)));

    if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x294 = -1LL;
	volatile int16_t x295 = -15840;
	volatile int32_t x296 = -1;
	int64_t t61 = -1024862670805420604LL;

    t61 = (x293+(x294-(x295==x296)));

    if (t61 != 254LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x297 = UINT32_MAX;
	int16_t x298 = -1;
	int16_t x299 = -440;
	volatile int32_t x300 = 1487;
	uint32_t t62 = 1U;

    t62 = (x297+(x298-(x299==x300)));

    if (t62 != 4294967294U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x301 = 1U;
	int64_t x303 = 3750926257LL;
	int8_t x304 = -1;
	uint32_t t63 = 10474U;

    t63 = (x301+(x302-(x303==x304)));

    if (t63 != 24U) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x305 = INT64_MIN;
	uint16_t x306 = 31U;
	int64_t x307 = -1LL;
	uint64_t x308 = 2625516953668656634LLU;
	volatile int64_t t64 = -875465402122LL;

    t64 = (x305+(x306-(x307==x308)));

    if (t64 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x309 = -19936313237333LL;
	uint8_t x310 = 1U;
	volatile uint64_t x311 = 123974072623LLU;
	int32_t x312 = 2228625;

    t65 = (x309+(x310-(x311==x312)));

    if (t65 != -19936313237332LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x322 = -1;
	int32_t x324 = -1;
	int32_t t66 = 7782945;

    t66 = (x321+(x322-(x323==x324)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x325 = -1LL;
	int32_t x326 = -1;
	uint64_t x327 = 11494149LLU;
	volatile int64_t x328 = INT64_MIN;
	volatile int64_t t67 = 87LL;

    t67 = (x325+(x326-(x327==x328)));

    if (t67 != -2LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x329 = -1LL;
	int32_t x330 = -1;
	int32_t x331 = INT32_MIN;
	volatile int64_t t68 = -21226647684LL;

    t68 = (x329+(x330-(x331==x332)));

    if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x334 = -1;
	static int8_t x335 = INT8_MIN;
	volatile int16_t x336 = -25;
	int32_t t69 = -71325;

    t69 = (x333+(x334-(x335==x336)));

    if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x337 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MIN;
	int64_t t70 = -1309323098586622LL;

    t70 = (x337+(x338-(x339==x340)));

    if (t70 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x341 = -1;
	static uint64_t x342 = 114265969226973075LLU;
	uint32_t x343 = 3114209U;

    t71 = (x341+(x342-(x343==x344)));

    if (t71 != 114265969226973074LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = -1;
	volatile int32_t x346 = 119;
	int32_t x347 = -451433936;
	static uint32_t x348 = 1U;
	int32_t t72 = 11745604;

    t72 = (x345+(x346-(x347==x348)));

    if (t72 != 118) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x349 = -1LL;
	int8_t x350 = 4;
	int8_t x351 = INT8_MIN;
	static uint8_t x352 = 111U;
	volatile int64_t t73 = 28294696LL;

    t73 = (x349+(x350-(x351==x352)));

    if (t73 != 3LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x353 = -1;
	volatile uint32_t x354 = 50981171U;
	int64_t x355 = -350820453813LL;
	volatile uint16_t x356 = 389U;
	uint32_t t74 = 1513U;

    t74 = (x353+(x354-(x355==x356)));

    if (t74 != 50981170U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x362 = 15U;
	uint64_t x363 = 14571164417842LLU;
	static uint16_t x364 = UINT16_MAX;
	volatile int32_t t75 = -628;

    t75 = (x361+(x362-(x363==x364)));

    if (t75 != 95) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x366 = 1900029U;
	uint8_t x367 = UINT8_MAX;
	uint64_t x368 = 60004911LLU;
	static uint64_t t76 = 4005LLU;

    t76 = (x365+(x366-(x367==x368)));

    if (t76 != 2229266LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x369 = INT64_MIN;
	volatile int64_t x370 = 683569LL;
	static int32_t x371 = INT32_MIN;
	int64_t x372 = -1LL;
	volatile int64_t t77 = -406748882530341LL;

    t77 = (x369+(x370-(x371==x372)));

    if (t77 != -9223372036854092239LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x378 = 5U;
	static uint64_t x379 = 29577374721LLU;
	volatile int32_t x380 = INT32_MIN;
	int64_t t78 = 2LL;

    t78 = (x377+(x378-(x379==x380)));

    if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x381 = UINT8_MAX;
	static uint8_t x382 = 7U;
	uint8_t x383 = 1U;
	int16_t x384 = INT16_MIN;
	static int32_t t79 = -58;

    t79 = (x381+(x382-(x383==x384)));

    if (t79 != 262) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x385 = 22U;
	int16_t x388 = -1;
	int32_t t80 = 5;

    t80 = (x385+(x386-(x387==x388)));

    if (t80 != 21) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	uint8_t x391 = 83U;
	static int32_t x392 = -1;

    t81 = (x389+(x390-(x391==x392)));

    if (t81 != 510) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x396 = INT16_MAX;
	int32_t t82 = 240;

    t82 = (x393+(x394-(x395==x396)));

    if (t82 != 840) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x397 = -1;
	int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t83 = 358210601;

    t83 = (x397+(x398-(x399==x400)));

    if (t83 != 231) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x401 = 1827463U;
	int64_t x402 = INT64_MIN;
	int32_t x403 = -551879;
	volatile int64_t t84 = 197828711LL;

    t84 = (x401+(x402-(x403==x404)));

    if (t84 != -9223372036852948345LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x405 = UINT32_MAX;
	uint16_t x407 = UINT16_MAX;
	int64_t x408 = 742654LL;

    t85 = (x405+(x406-(x407==x408)));

    if (t85 != 4294967294U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x409 = 2868U;
	int64_t x411 = -1393692106953658LL;
	volatile int32_t x412 = 0;

    t86 = (x409+(x410-(x411==x412)));

    if (t86 != 2867U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x414 = 1;
	volatile int64_t x415 = INT64_MIN;
	static int64_t x416 = -1LL;
	int32_t t87 = -6;

    t87 = (x413+(x414-(x415==x416)));

    if (t87 != 159) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x417 = INT32_MIN;
	int8_t x418 = 7;
	static int32_t x419 = -1;
	uint8_t x420 = 2U;
	volatile int32_t t88 = -2;

    t88 = (x417+(x418-(x419==x420)));

    if (t88 != -2147483641) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x421 = -1;
	volatile int16_t x422 = -1;
	static int32_t x423 = INT32_MAX;
	int32_t x424 = -25101750;
	static int32_t t89 = 1828587;

    t89 = (x421+(x422-(x423==x424)));

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x429 = -1;
	int64_t x430 = -1LL;
	int8_t x431 = 0;
	static uint32_t x432 = UINT32_MAX;
	static volatile int64_t t90 = -4597643912059415652LL;

    t90 = (x429+(x430-(x431==x432)));

    if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x434 = -1;
	int64_t x435 = 218126240695LL;
	volatile int32_t t91 = -8016;

    t91 = (x433+(x434-(x435==x436)));

    if (t91 != 2) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x437 = INT16_MAX;
	static int32_t x438 = -1;
	static int32_t t92 = -133889933;

    t92 = (x437+(x438-(x439==x440)));

    if (t92 != 32766) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x441 = 214863514LLU;
	volatile int32_t x442 = INT32_MIN;
	int16_t x443 = INT16_MIN;
	volatile int8_t x444 = INT8_MAX;
	volatile uint64_t t93 = 10918608633753LLU;

    t93 = (x441+(x442-(x443==x444)));

    if (t93 != 18446744071776931482LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x449 = 106U;
	int8_t x451 = -1;
	int32_t t94 = -4419271;

    t94 = (x449+(x450-(x451==x452)));

    if (t94 != 206) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x455 = UINT32_MAX;
	int8_t x456 = INT8_MIN;
	uint64_t t95 = 6338LLU;

    t95 = (x453+(x454-(x455==x456)));

    if (t95 != 605476035272565522LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x457 = -1LL;
	static volatile uint32_t x458 = 228663013U;
	int32_t x459 = INT32_MIN;
	volatile int32_t x460 = INT32_MIN;

    t96 = (x457+(x458-(x459==x460)));

    if (t96 != 228663011LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x461 = INT16_MIN;
	volatile int32_t x462 = -115840;
	static int16_t x463 = 1;
	volatile int16_t x464 = INT16_MAX;
	int32_t t97 = 40077;

    t97 = (x461+(x462-(x463==x464)));

    if (t97 != -148608) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x465 = 8661850LL;
	int16_t x466 = -1;
	volatile uint16_t x467 = UINT16_MAX;
	uint16_t x468 = 637U;
	volatile int64_t t98 = 24LL;

    t98 = (x465+(x466-(x467==x468)));

    if (t98 != 8661849LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x469 = INT16_MIN;
	static int8_t x470 = 2;
	int64_t x471 = -1LL;
	volatile int32_t t99 = 77;

    t99 = (x469+(x470-(x471==x472)));

    if (t99 != -32766) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x473 = 49U;
	static int64_t x474 = -614710897343296075LL;
	uint32_t x475 = UINT32_MAX;
	static volatile int64_t x476 = INT64_MIN;
	int64_t t100 = 3634201023478753LL;

    t100 = (x473+(x474-(x475==x476)));

    if (t100 != -614710897343296026LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x477 = -1;
	static volatile int32_t x478 = -198;
	volatile int16_t x479 = -1;
	int32_t x480 = -9173505;

    t101 = (x477+(x478-(x479==x480)));

    if (t101 != -199) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int8_t x481 = INT8_MAX;
	static uint32_t x483 = 469907U;
	int8_t x484 = -1;
	volatile int32_t t102 = 636461;

    t102 = (x481+(x482-(x483==x484)));

    if (t102 != -2147483521) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x485 = -1;
	int8_t x486 = 8;
	int16_t x488 = INT16_MAX;

    t103 = (x485+(x486-(x487==x488)));

    if (t103 != 7) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x489 = UINT64_MAX;
	int64_t x490 = -208156LL;

    t104 = (x489+(x490-(x491==x492)));

    if (t104 != 18446744073709343459LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x494 = -61;
	volatile int32_t x496 = 176;
	int64_t t105 = 8606676921483461LL;

    t105 = (x493+(x494-(x495==x496)));

    if (t105 != -62LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x497 = INT8_MIN;
	uint8_t x498 = UINT8_MAX;
	int32_t x499 = INT32_MIN;
	int8_t x500 = 3;
	int32_t t106 = 6526;

    t106 = (x497+(x498-(x499==x500)));

    if (t106 != 127) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x501 = INT64_MAX;
	uint8_t x503 = UINT8_MAX;
	static int8_t x504 = INT8_MAX;
	static volatile int64_t t107 = 12901223373119LL;

    t107 = (x501+(x502-(x503==x504)));

    if (t107 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x505 = -267253071072763630LL;
	int8_t x506 = -3;
	int64_t x507 = INT64_MIN;
	int8_t x508 = -50;
	volatile int64_t t108 = 4159415LL;

    t108 = (x505+(x506-(x507==x508)));

    if (t108 != -267253071072763633LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x513 = 14U;
	int8_t x515 = -52;
	int32_t x516 = -1;
	static volatile int32_t t109 = -11809519;

    t109 = (x513+(x514-(x515==x516)));

    if (t109 != 14) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x517 = -6;
	int16_t x518 = 16;
	int8_t x519 = -29;
	uint32_t x520 = 7095U;
	volatile int32_t t110 = 111919;

    t110 = (x517+(x518-(x519==x520)));

    if (t110 != 10) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x522 = INT32_MIN;
	volatile int8_t x524 = -1;
	volatile int32_t t111 = 124065298;

    t111 = (x521+(x522-(x523==x524)));

    if (t111 != -2147483188) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x525 = 53659576U;
	volatile int32_t x526 = INT32_MAX;
	static uint8_t x527 = 18U;
	int64_t x528 = -3761228244876LL;

    t112 = (x525+(x526-(x527==x528)));

    if (t112 != 2201143223U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = -126;
	static int64_t x530 = INT64_MAX;
	int16_t x531 = -13;
	int16_t x532 = -1;
	volatile int64_t t113 = -634134LL;

    t113 = (x529+(x530-(x531==x532)));

    if (t113 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f114(void) {
    	static int32_t x533 = INT32_MIN;
	uint8_t x534 = UINT8_MAX;
	static int8_t x535 = -2;
	uint32_t x536 = 989410U;

    t114 = (x533+(x534-(x535==x536)));

    if (t114 != -2147483393) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint16_t x537 = 1066U;
	volatile int32_t x538 = INT32_MIN;
	int64_t x539 = 358083891090LL;
	int64_t x540 = 85911272328017LL;
	static volatile int32_t t115 = 147;

    t115 = (x537+(x538-(x539==x540)));

    if (t115 != -2147482582) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x541 = -2;
	uint8_t x542 = 4U;
	uint16_t x543 = UINT16_MAX;
	int16_t x544 = INT16_MAX;
	int32_t t116 = -39404;

    t116 = (x541+(x542-(x543==x544)));

    if (t116 != 2) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x545 = 98;
	static volatile uint16_t x546 = 444U;
	int16_t x548 = -1;
	static int32_t t117 = 92;

    t117 = (x545+(x546-(x547==x548)));

    if (t117 != 542) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x549 = 1U;
	static volatile int16_t x551 = INT16_MAX;
	int8_t x552 = -10;
	volatile int32_t t118 = -8649;

    t118 = (x549+(x550-(x551==x552)));

    if (t118 != -32767) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x553 = INT8_MIN;
	int32_t x555 = INT32_MAX;
	int32_t x556 = 847084;
	volatile int32_t t119 = -3;

    t119 = (x553+(x554-(x555==x556)));

    if (t119 != -129) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x557 = -1;
	int16_t x558 = -1;
	static int64_t x560 = -1LL;

    t120 = (x557+(x558-(x559==x560)));

    if (t120 != -3) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x561 = UINT64_MAX;
	int16_t x562 = -1;
	static volatile uint32_t x563 = 1380U;
	volatile int64_t x564 = -1LL;
	uint64_t t121 = 1LLU;

    t121 = (x561+(x562-(x563==x564)));

    if (t121 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int32_t x573 = -118990297;
	uint64_t x574 = UINT64_MAX;
	volatile int8_t x575 = INT8_MIN;
	static int64_t x576 = -1LL;
	uint64_t t122 = 10019656LLU;

    t122 = (x573+(x574-(x575==x576)));

    if (t122 != 18446744073590561318LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x577 = -1;
	volatile int16_t x578 = -219;
	int64_t x579 = INT64_MAX;
	uint32_t x580 = 14U;
	int32_t t123 = -1464526;

    t123 = (x577+(x578-(x579==x580)));

    if (t123 != -220) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x582 = 10U;
	uint64_t x583 = 4LLU;
	uint64_t x584 = 550145949849820LLU;
	volatile uint32_t t124 = 731337U;

    t124 = (x581+(x582-(x583==x584)));

    if (t124 != 265U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int32_t x586 = INT32_MIN;
	volatile int16_t x587 = INT16_MIN;
	static volatile int32_t x588 = INT32_MIN;
	int64_t t125 = -2161379552526162LL;

    t125 = (x585+(x586-(x587==x588)));

    if (t125 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x589 = UINT32_MAX;
	volatile uint32_t x590 = 1U;
	int64_t x591 = INT64_MAX;
	int16_t x592 = -1;
	static uint32_t t126 = 114U;

    t126 = (x589+(x590-(x591==x592)));

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x598 = INT8_MAX;
	int32_t x599 = -4918219;
	volatile int32_t x600 = -1;
	uint64_t t127 = 974088LLU;

    t127 = (x597+(x598-(x599==x600)));

    if (t127 != 8326401LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int8_t x602 = -1;
	int8_t x603 = INT8_MAX;
	static int64_t x604 = 63LL;
	static volatile int32_t t128 = 3377;

    t128 = (x601+(x602-(x603==x604)));

    if (t128 != 65534) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x605 = 15U;
	static uint16_t x606 = 8484U;
	static volatile int64_t x608 = -1LL;

    t129 = (x605+(x606-(x607==x608)));

    if (t129 != 8499) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x609 = 1U;
	static int8_t x610 = -1;
	uint32_t x611 = UINT32_MAX;
	uint32_t x612 = 24310U;
	int32_t t130 = 1729783;

    t130 = (x609+(x610-(x611==x612)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x613 = INT64_MAX;
	static int64_t x614 = INT64_MIN;
	static uint8_t x615 = 34U;
	int8_t x616 = -3;
	volatile int64_t t131 = 28263469454LL;

    t131 = (x613+(x614-(x615==x616)));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x617 = INT32_MAX;
	volatile int64_t x619 = INT64_MIN;

    t132 = (x617+(x618-(x619==x620)));

    if (t132 != 2147483649U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x621 = INT8_MIN;
	uint16_t x624 = UINT16_MAX;
	int32_t t133 = -35232757;

    t133 = (x621+(x622-(x623==x624)));

    if (t133 != -79) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x625 = -32;
	volatile int64_t x626 = 747895LL;
	uint8_t x627 = UINT8_MAX;
	volatile uint32_t x628 = UINT32_MAX;
	volatile int64_t t134 = 261LL;

    t134 = (x625+(x626-(x627==x628)));

    if (t134 != 747863LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int32_t x629 = 267646;
	int64_t x631 = INT64_MAX;
	volatile uint32_t t135 = 1074U;

    t135 = (x629+(x630-(x631==x632)));

    if (t135 != 267645U) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x633 = INT16_MAX;
	int16_t x634 = 0;
	static uint8_t x635 = UINT8_MAX;
	int32_t t136 = -41;

    t136 = (x633+(x634-(x635==x636)));

    if (t136 != 32767) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x637 = UINT64_MAX;
	int8_t x639 = -2;
	uint16_t x640 = UINT16_MAX;

    t137 = (x637+(x638-(x639==x640)));

    if (t137 != 4294967294LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x643 = INT16_MAX;
	static int16_t x644 = INT16_MIN;
	int64_t t138 = 124301034LL;

    t138 = (x641+(x642-(x643==x644)));

    if (t138 != 46LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x646 = 11684;
	uint16_t x647 = 120U;
	static int32_t x648 = INT32_MIN;
	volatile uint64_t t139 = 92281389823LLU;

    t139 = (x645+(x646-(x647==x648)));

    if (t139 != 64691LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x649 = -158233129;
	uint64_t x650 = 681606400673026443LLU;
	volatile uint8_t x651 = 2U;
	int16_t x652 = -1;

    t140 = (x649+(x650-(x651==x652)));

    if (t140 != 681606400514793314LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x653 = -301;
	uint32_t x654 = 1U;
	int16_t x655 = 1474;
	static volatile int32_t x656 = INT32_MAX;
	static uint32_t t141 = 1635422418U;

    t141 = (x653+(x654-(x655==x656)));

    if (t141 != 4294966996U) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x657 = INT32_MIN;
	uint32_t x658 = 57U;
	int32_t x659 = 18554673;
	uint8_t x660 = UINT8_MAX;
	uint32_t t142 = 3U;

    t142 = (x657+(x658-(x659==x660)));

    if (t142 != 2147483705U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x662 = -1LL;
	uint16_t x663 = 20057U;
	int8_t x664 = -1;
	volatile int64_t t143 = 440540469475443791LL;

    t143 = (x661+(x662-(x663==x664)));

    if (t143 != -2147483649LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x666 = UINT32_MAX;
	static uint64_t x667 = 5022620892941026187LLU;
	volatile uint32_t t144 = 265958151U;

    t144 = (x665+(x666-(x667==x668)));

    if (t144 != 4294967167U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x673 = 29;
	uint16_t x674 = 3U;
	uint8_t x675 = 6U;
	int8_t x676 = -29;

    t145 = (x673+(x674-(x675==x676)));

    if (t145 != 32) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x677 = UINT16_MAX;
	int16_t x679 = -1;
	volatile int64_t x680 = INT64_MAX;
	volatile int32_t t146 = -347;

    t146 = (x677+(x678-(x679==x680)));

    if (t146 != -2147418113) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x681 = -1;
	volatile uint16_t x682 = 72U;
	static int16_t x683 = -234;
	volatile int16_t x684 = -1;
	int32_t t147 = -444;

    t147 = (x681+(x682-(x683==x684)));

    if (t147 != 71) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x685 = UINT64_MAX;
	volatile uint64_t x687 = 23230817439919LLU;
	static int32_t x688 = -255770341;
	volatile uint64_t t148 = 394581953370LLU;

    t148 = (x685+(x686-(x687==x688)));

    if (t148 != 28LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x689 = -1;
	int32_t x690 = 111;
	uint64_t x691 = 29543LLU;
	uint16_t x692 = UINT16_MAX;

    t149 = (x689+(x690-(x691==x692)));

    if (t149 != 110) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x693 = 53;
	int8_t x694 = 0;
	static volatile uint64_t x695 = 78092740160LLU;
	volatile int32_t x696 = 15536;
	int32_t t150 = 1305512;

    t150 = (x693+(x694-(x695==x696)));

    if (t150 != 53) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x697 = INT64_MIN;
	uint8_t x698 = 2U;
	static int8_t x699 = INT8_MIN;
	uint32_t x700 = 4033U;
	int64_t t151 = -363248LL;

    t151 = (x697+(x698-(x699==x700)));

    if (t151 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x701 = INT16_MIN;
	static uint16_t x702 = UINT16_MAX;
	int32_t x703 = -1;
	int64_t x704 = INT64_MAX;
	static volatile int32_t t152 = -26;

    t152 = (x701+(x702-(x703==x704)));

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x705 = 5318U;
	uint8_t x706 = 23U;
	volatile uint16_t x708 = UINT16_MAX;
	static volatile int32_t t153 = -25323711;

    t153 = (x705+(x706-(x707==x708)));

    if (t153 != 5341) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x709 = UINT16_MAX;
	volatile uint32_t x710 = UINT32_MAX;
	uint32_t x711 = 1387879U;
	volatile int16_t x712 = -1;
	volatile uint32_t t154 = 909687719U;

    t154 = (x709+(x710-(x711==x712)));

    if (t154 != 65534U) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x713 = -1189;
	volatile int32_t x716 = INT32_MIN;
	int32_t t155 = -213396;

    t155 = (x713+(x714-(x715==x716)));

    if (t155 != -1191) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x717 = UINT64_MAX;
	static int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	int32_t x720 = INT32_MIN;
	volatile uint64_t t156 = 84105460218532LLU;

    t156 = (x717+(x718-(x719==x720)));

    if (t156 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x721 = -365;
	uint64_t x724 = UINT64_MAX;
	volatile int64_t t157 = 7682LL;

    t157 = (x721+(x722-(x723==x724)));

    if (t157 != 9223372036854775441LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x725 = 19306;
	static volatile int64_t x726 = INT64_MIN;
	int64_t x727 = -13LL;
	int64_t x728 = 1142297969689LL;
	int64_t t158 = -2571547267578264LL;

    t158 = (x725+(x726-(x727==x728)));

    if (t158 != -9223372036854756502LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x729 = INT16_MIN;
	uint64_t x730 = 516082442LLU;
	int32_t x732 = INT32_MIN;
	uint64_t t159 = 1LLU;

    t159 = (x729+(x730-(x731==x732)));

    if (t159 != 516049674LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x733 = -3549654342LL;
	uint32_t x734 = 154655U;
	int8_t x735 = -1;
	static volatile int64_t t160 = -2LL;

    t160 = (x733+(x734-(x735==x736)));

    if (t160 != -3549499688LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x738 = 1;
	static uint32_t x739 = UINT32_MAX;
	volatile int8_t x740 = INT8_MIN;
	volatile int32_t t161 = 0;

    t161 = (x737+(x738-(x739==x740)));

    if (t161 != 32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x743 = INT32_MIN;
	int32_t x744 = -1;
	volatile int64_t t162 = 14463LL;

    t162 = (x741+(x742-(x743==x744)));

    if (t162 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x745 = 49357320207197343LLU;
	volatile int8_t x746 = 0;
	int64_t x747 = -1LL;

    t163 = (x745+(x746-(x747==x748)));

    if (t163 != 49357320207197343LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint16_t x749 = 23U;
	volatile int32_t x750 = INT32_MIN;
	int64_t x751 = 44LL;
	static volatile int64_t x752 = INT64_MIN;
	volatile int32_t t164 = 42457592;

    t164 = (x749+(x750-(x751==x752)));

    if (t164 != -2147483625) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x753 = -3660910221409230192LL;
	int64_t x754 = 13LL;
	int8_t x755 = -22;
	volatile int8_t x756 = 2;
	static int64_t t165 = 46LL;

    t165 = (x753+(x754-(x755==x756)));

    if (t165 != -3660910221409230179LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x757 = 668005921994838LL;
	int8_t x758 = 15;
	static uint64_t x759 = 1541LLU;
	int8_t x760 = 0;
	int64_t t166 = 4456265LL;

    t166 = (x757+(x758-(x759==x760)));

    if (t166 != 668005921994853LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x761 = -1;
	int16_t x762 = -23;
	int16_t x763 = -66;
	int32_t x764 = -3003942;
	volatile int32_t t167 = 6;

    t167 = (x761+(x762-(x763==x764)));

    if (t167 != -24) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x765 = 154;
	int32_t x767 = INT32_MAX;
	static volatile int16_t x768 = INT16_MIN;
	volatile int32_t t168 = 37708;

    t168 = (x765+(x766-(x767==x768)));

    if (t168 != 26) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x769 = INT8_MAX;
	int16_t x770 = -1;
	static int16_t x771 = -14;
	volatile int64_t x772 = INT64_MIN;

    t169 = (x769+(x770-(x771==x772)));

    if (t169 != 126) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x773 = 58LLU;
	uint16_t x774 = 9362U;
	volatile int8_t x776 = INT8_MIN;
	static uint64_t t170 = 45194976710723558LLU;

    t170 = (x773+(x774-(x775==x776)));

    if (t170 != 9420LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x778 = -5;
	int16_t x779 = INT16_MIN;

    t171 = (x777+(x778-(x779==x780)));

    if (t171 != -6) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x781 = INT64_MIN;
	static uint64_t x782 = 14LLU;
	int16_t x783 = -701;
	int16_t x784 = INT16_MAX;
	uint64_t t172 = 3318477310601985359LLU;

    t172 = (x781+(x782-(x783==x784)));

    if (t172 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x786 = 2;
	volatile int32_t x787 = INT32_MAX;

    t173 = (x785+(x786-(x787==x788)));

    if (t173 != 32769) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x789 = INT16_MIN;
	int32_t x790 = -1;
	int16_t x791 = INT16_MAX;
	static int32_t x792 = 133;
	int32_t t174 = 5;

    t174 = (x789+(x790-(x791==x792)));

    if (t174 != -32769) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x793 = -1LL;
	volatile int16_t x794 = 1;
	int16_t x795 = -1;
	uint8_t x796 = 67U;
	int64_t t175 = 14560952462LL;

    t175 = (x793+(x794-(x795==x796)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x797 = 962LL;
	int32_t x798 = INT32_MIN;
	uint8_t x800 = 119U;
	static volatile int64_t t176 = 1LL;

    t176 = (x797+(x798-(x799==x800)));

    if (t176 != -2147482686LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int8_t x801 = -9;
	uint32_t x803 = 126206U;
	uint8_t x804 = UINT8_MAX;
	volatile int32_t t177 = 4;

    t177 = (x801+(x802-(x803==x804)));

    if (t177 != 122) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x805 = 0U;
	uint32_t x806 = 9U;
	volatile int8_t x807 = INT8_MIN;
	volatile int64_t x808 = -66951738LL;
	volatile uint32_t t178 = 175U;

    t178 = (x805+(x806-(x807==x808)));

    if (t178 != 9U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x809 = 0U;
	volatile int8_t x810 = INT8_MAX;
	uint16_t x811 = 1U;
	uint16_t x812 = 22U;
	volatile int32_t t179 = -7;

    t179 = (x809+(x810-(x811==x812)));

    if (t179 != 127) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint8_t x817 = UINT8_MAX;
	static int32_t x818 = -89;
	volatile uint8_t x819 = 13U;
	uint16_t x820 = 39U;
	volatile int32_t t180 = -1;

    t180 = (x817+(x818-(x819==x820)));

    if (t180 != 166) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x825 = 1U;
	volatile uint32_t x826 = 31U;
	uint64_t x827 = 11433LLU;
	uint32_t x828 = 78163U;
	uint32_t t181 = 7U;

    t181 = (x825+(x826-(x827==x828)));

    if (t181 != 32U) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x829 = 24072777938946408LLU;
	uint16_t x831 = UINT16_MAX;
	static int16_t x832 = -1;
	static volatile uint64_t t182 = 7277445949LLU;

    t182 = (x829+(x830-(x831==x832)));

    if (t182 != 24073859891311446LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x833 = 0;
	volatile uint8_t x834 = 61U;
	int16_t x835 = INT16_MIN;
	static int8_t x836 = INT8_MIN;
	volatile int32_t t183 = -646650304;

    t183 = (x833+(x834-(x835==x836)));

    if (t183 != 61) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x837 = INT16_MAX;
	int64_t x838 = INT64_MIN;
	uint16_t x839 = UINT16_MAX;
	uint32_t x840 = UINT32_MAX;
	int64_t t184 = 109747403620LL;

    t184 = (x837+(x838-(x839==x840)));

    if (t184 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x841 = INT32_MIN;
	int32_t x843 = INT32_MIN;
	int16_t x844 = INT16_MIN;
	static int32_t t185 = 4884460;

    t185 = (x841+(x842-(x843==x844)));

    if (t185 != -2147483393) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x845 = INT16_MIN;
	int8_t x846 = -4;
	int8_t x847 = 9;
	volatile uint32_t x848 = 15871U;
	int32_t t186 = -241737;

    t186 = (x845+(x846-(x847==x848)));

    if (t186 != -32772) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x849 = INT8_MAX;
	volatile int8_t x850 = -1;
	static int32_t x851 = INT32_MIN;
	int8_t x852 = INT8_MIN;

    t187 = (x849+(x850-(x851==x852)));

    if (t187 != 126) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x853 = 27715707627438007LLU;
	int8_t x856 = 4;
	uint64_t t188 = 119071128033950LLU;

    t188 = (x853+(x854-(x855==x856)));

    if (t188 != 27715707627470774LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x857 = 26;
	static uint32_t x858 = 44U;
	int16_t x859 = -7;
	int8_t x860 = 6;
	uint32_t t189 = 1784U;

    t189 = (x857+(x858-(x859==x860)));

    if (t189 != 70U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint8_t x861 = 1U;
	int32_t x862 = -1;
	static int32_t x863 = -409005;
	static int32_t x864 = -120;

    t190 = (x861+(x862-(x863==x864)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x865 = INT16_MAX;
	uint64_t x866 = UINT64_MAX;
	uint64_t x867 = 11304550407148LLU;
	int16_t x868 = 0;

    t191 = (x865+(x866-(x867==x868)));

    if (t191 != 32766LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x869 = INT8_MIN;
	static volatile uint16_t x870 = 0U;
	uint64_t x871 = 0LLU;
	int64_t x872 = -1LL;

    t192 = (x869+(x870-(x871==x872)));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x873 = INT64_MAX;
	static int64_t x874 = -341472393204LL;
	volatile uint64_t x875 = 119194440149800LLU;
	uint16_t x876 = 8U;
	volatile int64_t t193 = -9395822017567LL;

    t193 = (x873+(x874-(x875==x876)));

    if (t193 != 9223371695382382603LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint32_t x877 = 2194U;
	static int16_t x878 = -1029;
	int32_t x879 = 98153;
	uint8_t x880 = UINT8_MAX;

    t194 = (x877+(x878-(x879==x880)));

    if (t194 != 1165U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x885 = UINT32_MAX;
	volatile int32_t x886 = INT32_MIN;
	int64_t x887 = INT64_MIN;
	int16_t x888 = INT16_MIN;
	static uint32_t t195 = 1866990U;

    t195 = (x885+(x886-(x887==x888)));

    if (t195 != 2147483647U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x890 = INT64_MIN;
	static int32_t x891 = -1;
	uint16_t x892 = 633U;
	volatile int64_t t196 = -5053613648478604LL;

    t196 = (x889+(x890-(x891==x892)));

    if (t196 != -9223372036854774010LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint32_t x898 = 48U;
	int32_t x899 = -1;
	int8_t x900 = INT8_MIN;

    t197 = (x897+(x898-(x899==x900)));

    if (t197 != 4294967216U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x901 = INT32_MAX;
	uint32_t x902 = 214696U;
	uint16_t x904 = 0U;
	volatile uint32_t t198 = 10911U;

    t198 = (x901+(x902-(x903==x904)));

    if (t198 != 2147698343U) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x905 = -1;
	static uint32_t x906 = 212691U;
	static volatile int32_t x908 = INT32_MIN;
	uint32_t t199 = 128258U;

    t199 = (x905+(x906-(x907==x908)));

    if (t199 != 212690U) { NG(); } else { ; }
	
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

