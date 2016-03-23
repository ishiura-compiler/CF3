
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

int32_t x5 = -1;
int32_t x6 = 64330;
volatile int64_t x8 = -1LL;
int32_t x17 = -30674225;
int64_t t5 = -330LL;
static int16_t x36 = INT16_MAX;
static int32_t t7 = 12;
uint16_t x37 = UINT16_MAX;
static int16_t x40 = INT16_MAX;
volatile uint16_t x41 = 1573U;
volatile int32_t t13 = -860969537;
int64_t x65 = -80LL;
int64_t t14 = -123826651LL;
int32_t x71 = 2;
static volatile int16_t x72 = INT16_MIN;
uint32_t x73 = 2U;
int64_t x83 = INT64_MIN;
volatile uint32_t t18 = 535111U;
int64_t t19 = -9862870725611LL;
uint8_t x105 = UINT8_MAX;
static int16_t x114 = INT16_MAX;
uint32_t x119 = UINT32_MAX;
volatile uint64_t x128 = 539873031549369395LLU;
int8_t x131 = 0;
uint8_t x136 = 1U;
int32_t x141 = -3561;
uint8_t x142 = 0U;
uint64_t x149 = UINT64_MAX;
int32_t x165 = INT32_MAX;
int64_t x173 = INT64_MAX;
volatile uint64_t x178 = 47LLU;
static uint16_t x179 = UINT16_MAX;
volatile uint64_t t38 = 3792979LLU;
int8_t x185 = INT8_MIN;
int64_t x192 = 311LL;
static int64_t t42 = -1LL;
uint32_t x203 = UINT32_MAX;
uint32_t t47 = 13U;
static uint16_t x219 = UINT16_MAX;
int16_t x220 = -1;
int64_t x233 = -1LL;
int64_t t50 = -31572976399240040LL;
static int16_t x240 = INT16_MAX;
uint64_t t51 = 9LLU;
static uint32_t x245 = 2U;
int64_t x253 = INT64_MIN;
volatile int8_t x260 = -1;
static uint8_t x269 = 6U;
int32_t x270 = -18;
int64_t t60 = 141LL;
volatile uint64_t x285 = 1979333265111LLU;
static uint64_t x286 = UINT64_MAX;
static int32_t x287 = INT32_MIN;
static int32_t x288 = 199372;
int8_t x290 = -1;
static int8_t x292 = -1;
uint16_t x293 = UINT16_MAX;
volatile uint8_t x294 = UINT8_MAX;
volatile int16_t x297 = -1;
int64_t t64 = 833LL;
int64_t x302 = -1LL;
static int32_t x303 = -1;
int8_t x314 = INT8_MAX;
uint8_t x319 = 6U;
volatile uint8_t x324 = 41U;
volatile uint32_t t70 = 551U;
volatile uint64_t t71 = 5LLU;
static int8_t x330 = INT8_MAX;
volatile int8_t x340 = INT8_MIN;
uint16_t x342 = UINT16_MAX;
int32_t x357 = -1;
volatile int64_t t80 = -1249841207696934374LL;
int8_t x373 = INT8_MIN;
int16_t x374 = -1;
static uint32_t x375 = 259225145U;
static uint32_t t82 = 262U;
int16_t x377 = -1;
static int32_t t84 = 1020195947;
uint8_t x390 = UINT8_MAX;
volatile int64_t x392 = -88568421253004LL;
int8_t x396 = 1;
int32_t x401 = INT32_MIN;
volatile uint32_t x410 = 19U;
volatile int64_t t91 = -47245208LL;
static int8_t x417 = INT8_MIN;
int64_t x418 = INT64_MAX;
int16_t x420 = INT16_MIN;
static uint64_t t95 = 719294LLU;
volatile int8_t x435 = INT8_MAX;
volatile uint32_t t96 = 10187001U;
static int32_t x437 = 121;
volatile uint16_t x439 = UINT16_MAX;
uint32_t x441 = 18U;
volatile uint32_t t98 = 90788307U;
int64_t x455 = INT64_MIN;
volatile int64_t t100 = -1968106402LL;
uint16_t x457 = UINT16_MAX;
volatile int64_t t101 = 222857184919090LL;
static uint64_t x461 = UINT64_MAX;
uint64_t x465 = 2036331833LLU;
static int16_t x474 = INT16_MAX;
uint16_t x483 = UINT16_MAX;
int32_t x495 = -1;
volatile int32_t t110 = -534391;
volatile int64_t x503 = -775263247952LL;
volatile int64_t t115 = -440015905LL;
int16_t x523 = INT16_MAX;
uint16_t x524 = 580U;
uint16_t x533 = UINT16_MAX;
uint8_t x535 = UINT8_MAX;
uint16_t x548 = 3671U;
int16_t x563 = INT16_MIN;
int32_t t124 = -239747;
uint16_t x571 = 1U;
uint32_t x574 = 1565U;
int8_t x576 = 0;
volatile uint32_t t128 = 1777281U;
uint8_t x588 = UINT8_MAX;
int32_t t129 = -7980418;
int64_t x590 = -1LL;
static uint64_t x596 = 21751514678321749LLU;
static int32_t x597 = 2274;
static int8_t x599 = INT8_MIN;
uint32_t x612 = 693835617U;
int8_t x623 = INT8_MIN;
volatile int8_t x627 = INT8_MIN;
int16_t x628 = -1;
volatile uint64_t t139 = 1783666555324315921LLU;
static uint16_t x636 = 2U;
int32_t t140 = -1;
int8_t x642 = -1;
static uint32_t x643 = 50656804U;
int64_t x651 = 21276243732LL;
uint64_t x653 = UINT64_MAX;
uint64_t x654 = 23120LLU;
int32_t x657 = 7090777;
int8_t x662 = -1;
int64_t x664 = INT64_MIN;
int16_t x679 = 287;
int64_t x683 = -1522549LL;
volatile int16_t x685 = INT16_MIN;
static uint16_t x691 = 3891U;
int16_t x697 = 156;
static volatile uint64_t t155 = 9747LLU;
uint64_t x709 = 302876842570103759LLU;
static int64_t x720 = INT64_MIN;
static int16_t x721 = 494;
static uint16_t x724 = UINT16_MAX;
uint64_t x728 = 1420751486LLU;
int32_t x734 = INT32_MIN;
int16_t x735 = INT16_MIN;
static int16_t x737 = -1;
int64_t x753 = INT64_MIN;
int8_t x754 = INT8_MAX;
int64_t x772 = INT64_MIN;
int64_t x778 = INT64_MIN;
volatile int32_t x779 = -2;
int8_t x781 = INT8_MIN;
int64_t x790 = INT64_MIN;
uint64_t x805 = 178LLU;
static int32_t x811 = 20657886;
volatile int32_t t182 = 652436331;
static volatile uint32_t x819 = 6U;
int32_t x830 = INT32_MIN;
uint64_t x835 = 1899469894LLU;
volatile int32_t x837 = INT32_MIN;
int32_t t189 = -4970301;
static volatile int8_t x854 = -1;
volatile uint16_t x855 = UINT16_MAX;
volatile uint16_t x872 = 293U;
int32_t x884 = INT32_MIN;
static volatile uint64_t t197 = 30916LLU;
uint32_t x886 = UINT32_MAX;


void f0(void) {
    	int32_t x1 = 1459020;
	int64_t x2 = -1412106044980096847LL;
	uint16_t x3 = UINT16_MAX;
	static int32_t x4 = INT32_MIN;
	volatile int64_t t0 = -62055647279923LL;

    t0 = (((x1|x2)-x3)+x4);

    if (t0 != -1412106047126580226LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x7 = UINT32_MAX;
	int64_t t1 = 668200095864515LL;

    t1 = (((x5|x6)-x7)+x8);

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 15834902LLU;
	static volatile int8_t x10 = INT8_MIN;
	static uint32_t x11 = 39599U;
	int64_t x12 = 2LL;
	volatile uint64_t t2 = 2LLU;

    t2 = (((x9|x10)-x11)+x12);

    if (t2 != 18446744073709511913LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	int8_t x14 = INT8_MIN;
	uint64_t x15 = 11770706LLU;
	volatile uint16_t x16 = 26090U;
	static uint64_t t3 = 1764681LLU;

    t3 = (((x13|x14)-x15)+x16);

    if (t3 != 18446744073697806872LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = INT64_MIN;
	volatile int16_t x19 = INT16_MAX;
	int32_t x20 = -221335489;
	int64_t t4 = 1LL;

    t4 = (((x17|x18)-x19)+x20);

    if (t4 != -252042481LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int32_t x21 = INT32_MIN;
	int64_t x22 = 6919497558LL;
	int32_t x23 = -411648914;
	static int64_t x24 = INT64_MAX;

    t5 = (((x21|x22)-x23)+x24);

    if (t5 != 9223372035595987687LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	static int32_t x27 = INT32_MIN;
	uint16_t x28 = 1U;
	static volatile int64_t t6 = -1LL;

    t6 = (((x25|x26)-x27)+x28);

    if (t6 != 2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = -1;
	int16_t x34 = -137;
	volatile int8_t x35 = INT8_MIN;

    t7 = (((x33|x34)-x35)+x36);

    if (t7 != 32894) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x38 = 303U;
	uint32_t x39 = UINT32_MAX;
	uint32_t t8 = 205022U;

    t8 = (((x37|x38)-x39)+x40);

    if (t8 != 98303U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x42 = -2;
	static int32_t x43 = 14;
	volatile int64_t x44 = INT64_MAX;
	int64_t t9 = 85LL;

    t9 = (((x41|x42)-x43)+x44);

    if (t9 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x45 = 4LL;
	int64_t x46 = INT64_MIN;
	uint8_t x47 = 1U;
	static uint8_t x48 = 19U;
	int64_t t10 = 1689LL;

    t10 = (((x45|x46)-x47)+x48);

    if (t10 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x49 = -13;
	int64_t x50 = -82LL;
	uint32_t x51 = 41U;
	int8_t x52 = INT8_MIN;
	volatile int64_t t11 = -246LL;

    t11 = (((x49|x50)-x51)+x52);

    if (t11 != -170LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	uint8_t x54 = 7U;
	uint16_t x55 = UINT16_MAX;
	uint16_t x56 = 3279U;
	volatile int32_t t12 = -28861;

    t12 = (((x53|x54)-x55)+x56);

    if (t12 != -62377) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x61 = -4;
	int8_t x62 = 0;
	uint16_t x63 = 2U;
	int32_t x64 = 48920488;

    t13 = (((x61|x62)-x63)+x64);

    if (t13 != 48920482) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint32_t x66 = 22340U;
	static volatile int16_t x67 = 78;
	uint16_t x68 = 1706U;

    t14 = (((x65|x66)-x67)+x68);

    if (t14 != 1616LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	uint32_t t15 = 91U;

    t15 = (((x69|x70)-x71)+x72);

    if (t15 != 4294934525U) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x74 = 7U;
	static uint64_t x75 = 2340LLU;
	static int32_t x76 = INT32_MIN;
	uint64_t t16 = 3103784859456370LLU;

    t16 = (((x73|x74)-x75)+x76);

    if (t16 != 18446744071562065635LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x81 = -7581681651136421LL;
	uint16_t x82 = 1U;
	int8_t x84 = INT8_MIN;
	volatile int64_t t17 = -613LL;

    t17 = (((x81|x82)-x83)+x84);

    if (t17 != 9215790355203639259LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x89 = -5729924;
	static volatile int32_t x90 = INT32_MIN;
	int8_t x91 = -1;
	volatile uint32_t x92 = 1794830U;

    t18 = (((x89|x90)-x91)+x92);

    if (t18 != 4291032203U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	volatile int64_t x96 = INT64_MAX;

    t19 = (((x93|x94)-x95)+x96);

    if (t19 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x97 = 9785825LLU;
	volatile uint16_t x98 = 2393U;
	int16_t x99 = -7616;
	int16_t x100 = INT16_MIN;
	uint64_t t20 = 665291LLU;

    t20 = (((x97|x98)-x99)+x100);

    if (t20 != 9762745LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x106 = INT16_MIN;
	int8_t x107 = INT8_MIN;
	uint32_t x108 = 124985U;
	volatile uint32_t t21 = 2465338U;

    t21 = (((x105|x106)-x107)+x108);

    if (t21 != 92600U) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x109 = UINT8_MAX;
	volatile uint8_t x110 = 6U;
	uint32_t x111 = 266U;
	int16_t x112 = -9;
	static uint32_t t22 = 55U;

    t22 = (((x109|x110)-x111)+x112);

    if (t22 != 4294967276U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	uint8_t x115 = 121U;
	static int8_t x116 = INT8_MAX;
	static int32_t t23 = 17157449;

    t23 = (((x113|x114)-x115)+x116);

    if (t23 != 65541) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x117 = UINT16_MAX;
	static int8_t x118 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	uint64_t t24 = UINT64_MAX;

    t24 = (((x117|x118)-x119)+x120);

    if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x121 = 24857073029366LLU;
	uint64_t x122 = UINT64_MAX;
	volatile int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	static volatile uint64_t t25 = 740799747LLU;

    t25 = (((x121|x122)-x123)+x124);

    if (t25 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x125 = INT32_MIN;
	static uint16_t x126 = UINT16_MAX;
	static uint32_t x127 = 587043U;
	volatile uint64_t t26 = 1145731890442836308LLU;

    t26 = (((x125|x126)-x127)+x128);

    if (t26 != 539873033696331535LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x129 = -1902;
	static uint32_t x130 = 734U;
	int32_t x132 = -1;
	uint32_t t27 = 6536838U;

    t27 = (((x129|x130)-x131)+x132);

    if (t27 != 4294965981U) { NG(); } else { ; }
	
}

void f28(void) {
    	static int64_t x133 = 901779LL;
	int8_t x134 = -20;
	static uint8_t x135 = UINT8_MAX;
	volatile int64_t t28 = 6454664199LL;

    t28 = (((x133|x134)-x135)+x136);

    if (t28 != -255LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x137 = INT64_MIN;
	static int64_t x138 = -1LL;
	static uint64_t x139 = 2802111036LLU;
	int32_t x140 = INT32_MIN;
	uint64_t t29 = 26900249285246LLU;

    t29 = (((x137|x138)-x139)+x140);

    if (t29 != 18446744068759956931LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int32_t x143 = -14189;
	static int16_t x144 = -1;
	volatile int32_t t30 = -46493795;

    t30 = (((x141|x142)-x143)+x144);

    if (t30 != 10627) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x145 = -1;
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MIN;
	uint8_t x148 = 32U;
	static int32_t t31 = 123916443;

    t31 = (((x145|x146)-x147)+x148);

    if (t31 != 159) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x150 = -3013;
	uint32_t x151 = UINT32_MAX;
	uint32_t x152 = 30573760U;
	volatile uint64_t t32 = 4LLU;

    t32 = (((x149|x150)-x151)+x152);

    if (t32 != 18446744069445158080LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = -1;
	static uint64_t x158 = 65724780371LLU;
	static volatile uint64_t x159 = 3LLU;
	int32_t x160 = 203056253;
	volatile uint64_t t33 = 11212461LLU;

    t33 = (((x157|x158)-x159)+x160);

    if (t33 != 203056249LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint64_t x161 = 807652795799LLU;
	int8_t x162 = 1;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = 10017654502832LLU;
	uint64_t t34 = 399LLU;

    t34 = (((x161|x162)-x163)+x164);

    if (t34 != 10825307331399LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x166 = -391586438;
	static int64_t x167 = 70195985627087LL;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t35 = 2085022247927920449LLU;

    t35 = (((x165|x166)-x167)+x168);

    if (t35 != 18446673877723924527LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x169 = INT8_MIN;
	int64_t x170 = INT64_MIN;
	static int16_t x171 = INT16_MIN;
	volatile int64_t x172 = 245506308LL;
	int64_t t36 = 8110216LL;

    t36 = (((x169|x170)-x171)+x172);

    if (t36 != 245538948LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x174 = INT64_MIN;
	int16_t x175 = -1;
	static volatile int8_t x176 = 1;
	volatile int64_t t37 = -3533435846802487LL;

    t37 = (((x173|x174)-x175)+x176);

    if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint8_t x177 = UINT8_MAX;
	volatile int16_t x180 = INT16_MAX;

    t38 = (((x177|x178)-x179)+x180);

    if (t38 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x181 = 1562077378912LL;
	uint32_t x182 = 1597U;
	int64_t x183 = 1081428LL;
	int32_t x184 = INT32_MIN;
	volatile int64_t t39 = -1259LL;

    t39 = (((x181|x182)-x183)+x184);

    if (t39 != 1559928815401LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x186 = INT16_MAX;
	int64_t x187 = -2472812514LL;
	uint8_t x188 = UINT8_MAX;
	int64_t t40 = -16381912LL;

    t40 = (((x185|x186)-x187)+x188);

    if (t40 != 2472812768LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x189 = -507222184;
	int8_t x190 = 0;
	uint8_t x191 = 3U;
	int64_t t41 = 0LL;

    t41 = (((x189|x190)-x191)+x192);

    if (t41 != -507221876LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = -83441824LL;
	int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	static volatile int16_t x196 = INT16_MIN;

    t42 = (((x193|x194)-x195)+x196);

    if (t42 != 9223372036771301216LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x197 = 49U;
	int8_t x198 = INT8_MAX;
	int64_t x199 = -3LL;
	int16_t x200 = 40;
	int64_t t43 = -1058LL;

    t43 = (((x197|x198)-x199)+x200);

    if (t43 != 170LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x201 = UINT8_MAX;
	volatile int8_t x202 = -50;
	volatile int64_t x204 = INT64_MIN;
	int64_t t44 = INT64_MIN;

    t44 = (((x201|x202)-x203)+x204);

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x205 = INT32_MIN;
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = 0U;
	int32_t x208 = -1;
	volatile uint32_t t45 = 390442623U;

    t45 = (((x205|x206)-x207)+x208);

    if (t45 != 2147483902U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x209 = 75907814LLU;
	int64_t x210 = -1872586880638LL;
	static uint8_t x211 = 13U;
	uint8_t x212 = UINT8_MAX;
	volatile uint64_t t46 = 1LLU;

    t46 = (((x209|x210)-x211)+x212);

    if (t46 != 18446742201198169304LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = INT8_MIN;
	volatile uint32_t x214 = UINT32_MAX;
	int16_t x215 = 1;
	int8_t x216 = INT8_MIN;

    t47 = (((x213|x214)-x215)+x216);

    if (t47 != 4294967166U) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x217 = -6504892934LL;
	int64_t x218 = -1LL;
	volatile int64_t t48 = 2175319149872210113LL;

    t48 = (((x217|x218)-x219)+x220);

    if (t48 != -65537LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x221 = 280338735610418LLU;
	static uint8_t x222 = UINT8_MAX;
	int8_t x223 = -1;
	static volatile uint8_t x224 = 12U;
	volatile uint64_t t49 = 5756228LLU;

    t49 = (((x221|x222)-x223)+x224);

    if (t49 != 280338735610636LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x234 = 0U;
	static int8_t x235 = INT8_MAX;
	int64_t x236 = 9240005205LL;

    t50 = (((x233|x234)-x235)+x236);

    if (t50 != 9240005077LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x237 = 350572170LLU;
	volatile uint64_t x238 = UINT64_MAX;
	int8_t x239 = INT8_MIN;

    t51 = (((x237|x238)-x239)+x240);

    if (t51 != 32894LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x241 = UINT8_MAX;
	int32_t x242 = 96370;
	int32_t x243 = -11258425;
	int32_t x244 = INT32_MIN;
	volatile int32_t t52 = 447028;

    t52 = (((x241|x242)-x243)+x244);

    if (t52 != -2136128712) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x246 = 36328096988826431LLU;
	static uint32_t x247 = 25426U;
	uint16_t x248 = 112U;
	uint64_t t53 = 1126531153LLU;

    t53 = (((x245|x246)-x247)+x248);

    if (t53 != 36328096988801117LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x249 = 1930836195585LL;
	static int8_t x250 = INT8_MIN;
	static int64_t x251 = 30240426LL;
	int8_t x252 = 1;
	volatile int64_t t54 = -15049415761606LL;

    t54 = (((x249|x250)-x251)+x252);

    if (t54 != -30240552LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x254 = UINT32_MAX;
	volatile int16_t x255 = -1;
	static int32_t x256 = -23724325;
	volatile int64_t t55 = -8267189458LL;

    t55 = (((x253|x254)-x255)+x256);

    if (t55 != -9223372032583532837LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x257 = UINT8_MAX;
	uint16_t x258 = 1U;
	uint8_t x259 = UINT8_MAX;
	static volatile int32_t t56 = -16649499;

    t56 = (((x257|x258)-x259)+x260);

    if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x271 = INT8_MIN;
	int8_t x272 = -34;
	int32_t t57 = 5476312;

    t57 = (((x269|x270)-x271)+x272);

    if (t57 != 76) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x273 = 0U;
	int8_t x274 = INT8_MIN;
	uint16_t x275 = 189U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t58 = 3320;

    t58 = (((x273|x274)-x275)+x276);

    if (t58 != -445) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x277 = UINT64_MAX;
	static int8_t x278 = INT8_MIN;
	volatile int16_t x279 = INT16_MIN;
	static int32_t x280 = INT32_MAX;
	volatile uint64_t t59 = 303886151974083303LLU;

    t59 = (((x277|x278)-x279)+x280);

    if (t59 != 2147516414LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MIN;

    t60 = (((x281|x282)-x283)+x284);

    if (t60 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t t61 = 0LLU;

    t61 = (((x285|x286)-x287)+x288);

    if (t61 != 2147683019LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x289 = -14;
	uint32_t x291 = 101U;
	static volatile uint32_t t62 = 245902307U;

    t62 = (((x289|x290)-x291)+x292);

    if (t62 != 4294967193U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x295 = UINT64_MAX;
	uint8_t x296 = UINT8_MAX;
	static uint64_t t63 = 19509295274037LLU;

    t63 = (((x293|x294)-x295)+x296);

    if (t63 != 65791LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x298 = INT32_MIN;
	uint32_t x299 = 289U;
	int64_t x300 = INT64_MIN;

    t64 = (((x297|x298)-x299)+x300);

    if (t64 != -9223372032559808802LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint32_t x301 = 6522U;
	int8_t x304 = -1;
	volatile int64_t t65 = -1LL;

    t65 = (((x301|x302)-x303)+x304);

    if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x305 = INT64_MIN;
	volatile uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 8280824LLU;
	int64_t x308 = INT64_MIN;
	static uint64_t t66 = 149050350577973680LLU;

    t66 = (((x305|x306)-x307)+x308);

    if (t66 != 18446744073701271047LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x309 = INT8_MAX;
	static int16_t x310 = -566;
	uint8_t x311 = 0U;
	int8_t x312 = INT8_MAX;
	int32_t t67 = -18150309;

    t67 = (((x309|x310)-x311)+x312);

    if (t67 != -386) { NG(); } else { ; }
	
}

void f68(void) {
    	static int64_t x313 = INT64_MAX;
	int8_t x315 = INT8_MAX;
	int8_t x316 = -1;
	volatile int64_t t68 = -775239284922096LL;

    t68 = (((x313|x314)-x315)+x316);

    if (t68 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x317 = INT16_MIN;
	int16_t x318 = 28;
	int32_t x320 = -1;
	static volatile int32_t t69 = 2;

    t69 = (((x317|x318)-x319)+x320);

    if (t69 != -32747) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile uint32_t x321 = 809687376U;
	uint32_t x322 = 2993862U;
	int16_t x323 = INT16_MIN;

    t70 = (((x321|x322)-x323)+x324);

    if (t70 != 812679167U) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x326 = 935;
	uint64_t x327 = 2140706LLU;
	static int8_t x328 = INT8_MAX;

    t71 = (((x325|x326)-x327)+x328);

    if (t71 != 18446744073707379204LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x329 = 1;
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = 0;
	uint32_t t72 = 50946199U;

    t72 = (((x329|x330)-x331)+x332);

    if (t72 != 128U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x333 = UINT64_MAX;
	volatile int16_t x334 = -1;
	volatile uint64_t x335 = 374LLU;
	int16_t x336 = -1;
	volatile uint64_t t73 = 1LLU;

    t73 = (((x333|x334)-x335)+x336);

    if (t73 != 18446744073709551240LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x337 = 1541U;
	volatile uint8_t x338 = 6U;
	static volatile int8_t x339 = INT8_MIN;
	int32_t t74 = -316210;

    t74 = (((x337|x338)-x339)+x340);

    if (t74 != 1543) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x341 = INT16_MIN;
	int8_t x343 = -3;
	int16_t x344 = -1;
	static volatile int32_t t75 = 28;

    t75 = (((x341|x342)-x343)+x344);

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x345 = 23U;
	int32_t x346 = INT32_MAX;
	uint32_t x347 = 1U;
	int32_t x348 = -1;
	volatile uint32_t t76 = 77U;

    t76 = (((x345|x346)-x347)+x348);

    if (t76 != 2147483645U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x349 = 0;
	static int8_t x350 = -1;
	int32_t x351 = -57556623;
	uint32_t x352 = 10554U;
	uint32_t t77 = 9058U;

    t77 = (((x349|x350)-x351)+x352);

    if (t77 != 57567176U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x353 = INT32_MIN;
	int16_t x354 = 52;
	static uint32_t x355 = 4955925U;
	int64_t x356 = INT64_MIN;
	volatile int64_t t78 = 12780208120063636LL;

    t78 = (((x353|x354)-x355)+x356);

    if (t78 != -9223372034712248033LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x358 = UINT32_MAX;
	uint8_t x359 = 4U;
	int8_t x360 = -1;
	static volatile uint32_t t79 = 36U;

    t79 = (((x357|x358)-x359)+x360);

    if (t79 != 4294967290U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = -1;
	int64_t x362 = INT64_MIN;
	static volatile uint16_t x363 = 62U;
	volatile int32_t x364 = 106574;

    t80 = (((x361|x362)-x363)+x364);

    if (t80 != 106511LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint16_t x369 = 103U;
	int64_t x370 = 1080583LL;
	int16_t x371 = 158;
	int16_t x372 = INT16_MAX;
	int64_t t81 = -61839559067LL;

    t81 = (((x369|x370)-x371)+x372);

    if (t81 != 1113288LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x376 = INT32_MIN;

    t82 = (((x373|x374)-x375)+x376);

    if (t82 != 1888258502U) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x378 = -1972;
	volatile int8_t x379 = 1;
	int64_t x380 = INT64_MAX;
	int64_t t83 = -530268297518LL;

    t83 = (((x377|x378)-x379)+x380);

    if (t83 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x381 = 13;
	int16_t x382 = INT16_MIN;
	uint16_t x383 = 7552U;
	uint16_t x384 = 5U;

    t84 = (((x381|x382)-x383)+x384);

    if (t84 != -40302) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	static volatile int16_t x387 = INT16_MIN;
	static int8_t x388 = INT8_MAX;
	int32_t t85 = 14;

    t85 = (((x385|x386)-x387)+x388);

    if (t85 != 32894) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x389 = UINT32_MAX;
	int16_t x391 = INT16_MIN;
	static int64_t t86 = -638865524945051LL;

    t86 = (((x389|x390)-x391)+x392);

    if (t86 != -88568421220237LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x393 = 212879166U;
	uint64_t x394 = 136LLU;
	uint64_t x395 = 226579933985745LLU;
	uint64_t t87 = 4073LLU;

    t87 = (((x393|x394)-x395)+x396);

    if (t87 != 18446517493988445166LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x397 = 22;
	static int64_t x398 = INT64_MIN;
	int16_t x399 = -1552;
	static volatile int32_t x400 = 0;
	int64_t t88 = -407633380458183635LL;

    t88 = (((x397|x398)-x399)+x400);

    if (t88 != -9223372036854774234LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x402 = INT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t89 = 230489391;

    t89 = (((x401|x402)-x403)+x404);

    if (t89 != 2147483519) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x409 = UINT64_MAX;
	uint8_t x411 = 2U;
	int32_t x412 = INT32_MIN;
	uint64_t t90 = 909LLU;

    t90 = (((x409|x410)-x411)+x412);

    if (t90 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x413 = INT16_MAX;
	static int64_t x414 = INT64_MIN;
	int16_t x415 = INT16_MAX;
	static volatile int16_t x416 = INT16_MAX;

    t91 = (((x413|x414)-x415)+x416);

    if (t91 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x419 = 27949523943582002LL;
	volatile int64_t t92 = -260784045513LL;

    t92 = (((x417|x418)-x419)+x420);

    if (t92 != -27949523943614771LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int8_t x421 = 0;
	int32_t x422 = -7891;
	int16_t x423 = -2046;
	uint64_t x424 = UINT64_MAX;
	uint64_t t93 = 520975795051570LLU;

    t93 = (((x421|x422)-x423)+x424);

    if (t93 != 18446744073709545770LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x425 = -33092945;
	uint64_t x426 = UINT64_MAX;
	static uint64_t x427 = UINT64_MAX;
	static int32_t x428 = INT32_MIN;
	uint64_t t94 = 132526LLU;

    t94 = (((x425|x426)-x427)+x428);

    if (t94 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint16_t x429 = 18214U;
	static int64_t x430 = INT64_MIN;
	static int8_t x431 = 1;
	uint64_t x432 = UINT64_MAX;

    t95 = (((x429|x430)-x431)+x432);

    if (t95 != 9223372036854794020LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int32_t x433 = 93243799;
	uint32_t x434 = 113134860U;
	int16_t x436 = INT16_MIN;

    t96 = (((x433|x434)-x435)+x436);

    if (t96 != 129912096U) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x438 = -1LL;
	static int32_t x440 = INT32_MAX;
	int64_t t97 = 0LL;

    t97 = (((x437|x438)-x439)+x440);

    if (t97 != 2147418111LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x442 = 1U;
	static uint32_t x443 = 8829077U;
	static uint8_t x444 = 42U;

    t98 = (((x441|x442)-x443)+x444);

    if (t98 != 4286138280U) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x449 = 0LL;
	int8_t x450 = -1;
	int64_t x451 = 1423216097777822LL;
	uint8_t x452 = 52U;
	int64_t t99 = 2968LL;

    t99 = (((x449|x450)-x451)+x452);

    if (t99 != -1423216097777771LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x453 = -771635820746LL;
	static int8_t x454 = INT8_MIN;
	int8_t x456 = 32;

    t100 = (((x453|x454)-x455)+x456);

    if (t100 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x458 = INT16_MAX;
	volatile int16_t x459 = INT16_MAX;
	volatile int64_t x460 = INT64_MIN;

    t101 = (((x457|x458)-x459)+x460);

    if (t101 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x462 = UINT8_MAX;
	volatile int8_t x463 = 53;
	int16_t x464 = INT16_MIN;
	volatile uint64_t t102 = 408238622LLU;

    t102 = (((x461|x462)-x463)+x464);

    if (t102 != 18446744073709518794LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x466 = -1;
	volatile int16_t x467 = -1;
	int16_t x468 = -1;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (((x465|x466)-x467)+x468);

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x469 = 23212U;
	static uint8_t x470 = UINT8_MAX;
	volatile int8_t x471 = 2;
	static volatile int32_t x472 = -127945;
	volatile int32_t t104 = 278517220;

    t104 = (((x469|x470)-x471)+x472);

    if (t104 != -104652) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x473 = INT32_MIN;
	int8_t x475 = 7;
	uint16_t x476 = 4018U;
	int32_t t105 = -32;

    t105 = (((x473|x474)-x475)+x476);

    if (t105 != -2147446870) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x477 = INT16_MAX;
	volatile int64_t x478 = -1LL;
	volatile uint64_t x479 = UINT64_MAX;
	int64_t x480 = INT64_MIN;
	volatile uint64_t t106 = 11707043519174LLU;

    t106 = (((x477|x478)-x479)+x480);

    if (t106 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int16_t x481 = -1;
	int32_t x482 = -1;
	uint64_t x484 = 398074140597918110LLU;
	static uint64_t t107 = 47370LLU;

    t107 = (((x481|x482)-x483)+x484);

    if (t107 != 398074140597852574LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x485 = 20;
	volatile int16_t x486 = -14;
	uint8_t x487 = 111U;
	uint64_t x488 = 1046893047421992305LLU;
	uint64_t t108 = 54330LLU;

    t108 = (((x485|x486)-x487)+x488);

    if (t108 != 1046893047421992184LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x493 = INT64_MAX;
	static int32_t x494 = INT32_MIN;
	static uint32_t x496 = 42U;
	volatile int64_t t109 = 580LL;

    t109 = (((x493|x494)-x495)+x496);

    if (t109 != 42LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x497 = -1;
	int16_t x498 = INT16_MIN;
	volatile int16_t x499 = INT16_MIN;
	static volatile int16_t x500 = 3709;

    t110 = (((x497|x498)-x499)+x500);

    if (t110 != 36476) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x501 = 0;
	int32_t x502 = -1;
	static volatile int8_t x504 = INT8_MIN;
	volatile int64_t t111 = -711842337872405029LL;

    t111 = (((x501|x502)-x503)+x504);

    if (t111 != 775263247823LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x505 = INT32_MIN;
	uint32_t x506 = 7719U;
	int32_t x507 = INT32_MIN;
	uint8_t x508 = 12U;
	uint32_t t112 = 6U;

    t112 = (((x505|x506)-x507)+x508);

    if (t112 != 7731U) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x509 = 95U;
	int32_t x510 = -1;
	static uint64_t x511 = UINT64_MAX;
	int64_t x512 = INT64_MIN;
	volatile uint64_t t113 = 15638863LLU;

    t113 = (((x509|x510)-x511)+x512);

    if (t113 != 9223372041149743104LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x513 = 0U;
	int32_t x514 = INT32_MAX;
	volatile int16_t x515 = INT16_MAX;
	static int32_t x516 = INT32_MIN;
	volatile int32_t t114 = -187;

    t114 = (((x513|x514)-x515)+x516);

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = INT16_MAX;
	static int32_t x518 = 15573;
	static int64_t x519 = INT64_MAX;
	uint8_t x520 = UINT8_MAX;

    t115 = (((x517|x518)-x519)+x520);

    if (t115 != -9223372036854742785LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x521 = 14584;
	static volatile uint16_t x522 = UINT16_MAX;
	volatile int32_t t116 = -70;

    t116 = (((x521|x522)-x523)+x524);

    if (t116 != 33348) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x534 = -1;
	uint64_t x536 = 244LLU;
	volatile uint64_t t117 = 479494931559052LLU;

    t117 = (((x533|x534)-x535)+x536);

    if (t117 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x537 = 3U;
	int64_t x538 = INT64_MAX;
	static uint8_t x539 = 0U;
	int32_t x540 = INT32_MIN;
	volatile int64_t t118 = 21334935717225776LL;

    t118 = (((x537|x538)-x539)+x540);

    if (t118 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x541 = 2;
	uint32_t x542 = 42430654U;
	int16_t x543 = INT16_MIN;
	int64_t x544 = 4LL;
	volatile int64_t t119 = 1361652613051421293LL;

    t119 = (((x541|x542)-x543)+x544);

    if (t119 != 42463426LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = -1LL;
	uint64_t x546 = 910427LLU;
	uint64_t x547 = 32585639LLU;
	volatile uint64_t t120 = 180959627544LLU;

    t120 = (((x545|x546)-x547)+x548);

    if (t120 != 18446744073676969647LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x549 = -51;
	int8_t x550 = -1;
	uint64_t x551 = 6131061LLU;
	int64_t x552 = 0LL;
	uint64_t t121 = 1242616832946506LLU;

    t121 = (((x549|x550)-x551)+x552);

    if (t121 != 18446744073703420554LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x553 = INT32_MIN;
	uint8_t x554 = 3U;
	static volatile int32_t x555 = -405761037;
	int16_t x556 = INT16_MIN;
	int32_t t122 = 87;

    t122 = (((x553|x554)-x555)+x556);

    if (t122 != -1741755376) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x557 = 30591680741774LLU;
	int8_t x558 = INT8_MIN;
	static volatile uint32_t x559 = 5U;
	int32_t x560 = INT32_MIN;
	static uint64_t t123 = 10905069LLU;

    t123 = (((x557|x558)-x559)+x560);

    if (t123 != 18446744071562067849LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x561 = 0;
	static int8_t x562 = INT8_MIN;
	int16_t x564 = INT16_MAX;

    t124 = (((x561|x562)-x563)+x564);

    if (t124 != 65407) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x565 = -4561;
	static int64_t x566 = -1LL;
	uint32_t x567 = 2976999U;
	static int8_t x568 = -1;
	volatile int64_t t125 = -4191780199092LL;

    t125 = (((x565|x566)-x567)+x568);

    if (t125 != -2977001LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x569 = 168LLU;
	int8_t x570 = INT8_MAX;
	int16_t x572 = INT16_MIN;
	uint64_t t126 = 7731LLU;

    t126 = (((x569|x570)-x571)+x572);

    if (t126 != 18446744073709519102LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int32_t x573 = INT32_MAX;
	int8_t x575 = INT8_MAX;
	volatile uint32_t t127 = 2571287U;

    t127 = (((x573|x574)-x575)+x576);

    if (t127 != 2147483520U) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x581 = INT16_MIN;
	uint32_t x582 = 3109U;
	uint32_t x583 = 3462666U;
	uint16_t x584 = 5U;

    t128 = (((x581|x582)-x583)+x584);

    if (t128 != 4291474976U) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	uint16_t x587 = 1683U;

    t129 = (((x585|x586)-x587)+x588);

    if (t129 != -34196) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x589 = INT64_MIN;
	int8_t x591 = INT8_MAX;
	int16_t x592 = -1846;
	static int64_t t130 = 4285085023968021335LL;

    t130 = (((x589|x590)-x591)+x592);

    if (t130 != -1974LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x593 = 28187U;
	volatile uint64_t x594 = UINT64_MAX;
	static int32_t x595 = -12600144;
	uint64_t t131 = 7884900LLU;

    t131 = (((x593|x594)-x595)+x596);

    if (t131 != 21751514690921892LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x598 = 296728687823984LLU;
	static uint64_t x600 = UINT64_MAX;
	uint64_t t132 = 169112420365LLU;

    t132 = (((x597|x598)-x599)+x600);

    if (t132 != 296728687824241LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x601 = INT8_MIN;
	uint8_t x602 = UINT8_MAX;
	volatile int8_t x603 = INT8_MIN;
	static uint8_t x604 = 48U;
	volatile int32_t t133 = -4;

    t133 = (((x601|x602)-x603)+x604);

    if (t133 != 175) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x605 = INT8_MIN;
	static uint32_t x606 = UINT32_MAX;
	int64_t x607 = INT64_MAX;
	volatile uint32_t x608 = UINT32_MAX;
	static volatile int64_t t134 = -4238003688567LL;

    t134 = (((x605|x606)-x607)+x608);

    if (t134 != -9223372028264841217LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x609 = 73496131U;
	uint32_t x610 = 1763U;
	int16_t x611 = INT16_MIN;
	volatile uint32_t t135 = 1516U;

    t135 = (((x609|x610)-x611)+x612);

    if (t135 != 767364676U) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x613 = -1;
	int16_t x614 = 73;
	volatile int16_t x615 = -13207;
	static uint16_t x616 = 6647U;
	volatile int32_t t136 = 117274;

    t136 = (((x613|x614)-x615)+x616);

    if (t136 != 19853) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x621 = -1;
	static int16_t x622 = -1;
	uint16_t x624 = 28637U;
	int32_t t137 = -126925;

    t137 = (((x621|x622)-x623)+x624);

    if (t137 != 28764) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x625 = -4236;
	uint8_t x626 = 47U;
	int32_t t138 = 564950603;

    t138 = (((x625|x626)-x627)+x628);

    if (t138 != -4098) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x629 = -1;
	volatile uint64_t x630 = 8437276004278147297LLU;
	static int64_t x631 = INT64_MIN;
	int64_t x632 = -1349LL;

    t139 = (((x629|x630)-x631)+x632);

    if (t139 != 9223372036854774458LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x633 = 59;
	uint16_t x634 = UINT16_MAX;
	int8_t x635 = INT8_MIN;

    t140 = (((x633|x634)-x635)+x636);

    if (t140 != 65665) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x641 = 71074007U;
	uint64_t x644 = 69461365777489LLU;
	static volatile uint64_t t141 = 1LLU;

    t141 = (((x641|x642)-x643)+x644);

    if (t141 != 69465610087980LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int16_t x645 = INT16_MIN;
	static int32_t x646 = INT32_MIN;
	int16_t x647 = INT16_MAX;
	int16_t x648 = INT16_MAX;
	int32_t t142 = -10762192;

    t142 = (((x645|x646)-x647)+x648);

    if (t142 != -32768) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x649 = INT32_MIN;
	uint32_t x650 = UINT32_MAX;
	uint8_t x652 = 26U;
	static volatile int64_t t143 = -6875303446336LL;

    t143 = (((x649|x650)-x651)+x652);

    if (t143 != -16981276411LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x655 = 0LL;
	int32_t x656 = INT32_MIN;
	volatile uint64_t t144 = 203019LLU;

    t144 = (((x653|x654)-x655)+x656);

    if (t144 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x658 = 4U;
	int64_t x659 = INT64_MAX;
	int8_t x660 = -1;
	volatile int64_t t145 = -6846965087LL;

    t145 = (((x657|x658)-x659)+x660);

    if (t145 != -9223372036847685027LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x663 = INT64_MIN;
	volatile int64_t t146 = -508109LL;

    t146 = (((x661|x662)-x663)+x664);

    if (t146 != -1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x665 = 2;
	volatile int16_t x666 = INT16_MAX;
	volatile int16_t x667 = INT16_MIN;
	int16_t x668 = -765;
	volatile int32_t t147 = -498142;

    t147 = (((x665|x666)-x667)+x668);

    if (t147 != 64770) { NG(); } else { ; }
	
}

void f148(void) {
    	static int32_t x669 = INT32_MAX;
	volatile int16_t x670 = INT16_MIN;
	static volatile uint8_t x671 = 4U;
	int32_t x672 = -122665;
	int32_t t148 = -267;

    t148 = (((x669|x670)-x671)+x672);

    if (t148 != -122670) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int8_t x673 = 25;
	int32_t x674 = 5;
	int32_t x675 = -1;
	int8_t x676 = -1;
	volatile int32_t t149 = 13057;

    t149 = (((x673|x674)-x675)+x676);

    if (t149 != 29) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x677 = UINT8_MAX;
	static volatile uint16_t x678 = UINT16_MAX;
	int32_t x680 = INT32_MIN;
	volatile int32_t t150 = 36566;

    t150 = (((x677|x678)-x679)+x680);

    if (t150 != -2147418400) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x681 = 16U;
	volatile int32_t x682 = INT32_MIN;
	int16_t x684 = INT16_MIN;
	volatile int64_t t151 = -111536940808187LL;

    t151 = (((x681|x682)-x683)+x684);

    if (t151 != -2145993851LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x686 = 1;
	static int8_t x687 = INT8_MIN;
	uint16_t x688 = 3U;
	volatile int32_t t152 = -232856623;

    t152 = (((x685|x686)-x687)+x688);

    if (t152 != -32636) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x689 = INT32_MIN;
	int32_t x690 = 59752;
	int8_t x692 = INT8_MIN;
	volatile int32_t t153 = 1024992880;

    t153 = (((x689|x690)-x691)+x692);

    if (t153 != -2147427915) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x693 = 51U;
	int32_t x694 = -1;
	static int32_t x695 = INT32_MIN;
	int8_t x696 = -17;
	volatile int32_t t154 = -60208;

    t154 = (((x693|x694)-x695)+x696);

    if (t154 != 2147483630) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x698 = INT16_MIN;
	volatile uint64_t x699 = 38LLU;
	volatile uint32_t x700 = 2924855U;

    t155 = (((x697|x698)-x699)+x700);

    if (t155 != 2892205LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x701 = INT16_MAX;
	volatile uint32_t x702 = UINT32_MAX;
	volatile int64_t x703 = 0LL;
	uint32_t x704 = 20131870U;
	int64_t t156 = -3666590848878022063LL;

    t156 = (((x701|x702)-x703)+x704);

    if (t156 != 4315099165LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x705 = INT16_MIN;
	static uint16_t x706 = 871U;
	static int64_t x707 = 245LL;
	uint8_t x708 = 2U;
	static int64_t t157 = -461808520212215LL;

    t157 = (((x705|x706)-x707)+x708);

    if (t157 != -32140LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x710 = INT64_MIN;
	uint16_t x711 = 13624U;
	int8_t x712 = INT8_MIN;
	volatile uint64_t t158 = 75LLU;

    t158 = (((x709|x710)-x711)+x712);

    if (t158 != 9526248879424865815LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x713 = INT64_MIN;
	static volatile uint16_t x714 = 1738U;
	int16_t x715 = 6;
	uint64_t x716 = 664LLU;
	uint64_t t159 = 19530521843422052LLU;

    t159 = (((x713|x714)-x715)+x716);

    if (t159 != 9223372036854778204LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x717 = 17568LLU;
	int8_t x718 = -1;
	static uint32_t x719 = 9030U;
	uint64_t t160 = 458170178LLU;

    t160 = (((x717|x718)-x719)+x720);

    if (t160 != 9223372036854766777LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x722 = 11265U;
	int16_t x723 = -28;
	static volatile uint32_t t161 = 840723496U;

    t161 = (((x721|x722)-x723)+x724);

    if (t161 != 77322U) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x725 = -9;
	uint16_t x726 = UINT16_MAX;
	int16_t x727 = -6;
	static uint64_t t162 = 39865522168LLU;

    t162 = (((x725|x726)-x727)+x728);

    if (t162 != 1420751491LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x729 = -1;
	uint64_t x730 = 378257111015LLU;
	int32_t x731 = -1;
	volatile uint32_t x732 = 5301628U;
	uint64_t t163 = 1700LLU;

    t163 = (((x729|x730)-x731)+x732);

    if (t163 != 5301628LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x733 = 19U;
	int64_t x736 = -835354949262LL;
	int64_t t164 = 1333258718920LL;

    t164 = (((x733|x734)-x735)+x736);

    if (t164 != -837502400123LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x738 = -1;
	uint64_t x739 = 3954706769844LLU;
	static int64_t x740 = -1LL;
	static volatile uint64_t t165 = 277572403655LLU;

    t165 = (((x737|x738)-x739)+x740);

    if (t165 != 18446740119002781770LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x741 = 76301290;
	uint16_t x742 = 114U;
	static int16_t x743 = INT16_MAX;
	static uint16_t x744 = 4978U;
	volatile int32_t t166 = -1438992;

    t166 = (((x741|x742)-x743)+x744);

    if (t166 != 76273517) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x745 = INT64_MIN;
	int32_t x746 = INT32_MIN;
	volatile int16_t x747 = -1;
	int8_t x748 = -1;
	int64_t t167 = -1041557078648012229LL;

    t167 = (((x745|x746)-x747)+x748);

    if (t167 != -2147483648LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x749 = UINT64_MAX;
	int64_t x750 = INT64_MIN;
	volatile uint16_t x751 = UINT16_MAX;
	static int8_t x752 = INT8_MIN;
	uint64_t t168 = 156252089546389LLU;

    t168 = (((x749|x750)-x751)+x752);

    if (t168 != 18446744073709485952LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x755 = -1;
	volatile int8_t x756 = 2;
	volatile int64_t t169 = -279078115521925414LL;

    t169 = (((x753|x754)-x755)+x756);

    if (t169 != -9223372036854775678LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x765 = -1;
	int32_t x766 = INT32_MIN;
	volatile int64_t x767 = -36LL;
	volatile int32_t x768 = INT32_MAX;
	int64_t t170 = 400LL;

    t170 = (((x765|x766)-x767)+x768);

    if (t170 != 2147483682LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x769 = -1281;
	volatile uint16_t x770 = 4U;
	uint64_t x771 = UINT64_MAX;
	static volatile uint64_t t171 = 4LLU;

    t171 = (((x769|x770)-x771)+x772);

    if (t171 != 9223372036854774528LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x773 = 0;
	int64_t x774 = -1LL;
	int32_t x775 = -105678;
	uint16_t x776 = UINT16_MAX;
	int64_t t172 = 4088586475LL;

    t172 = (((x773|x774)-x775)+x776);

    if (t172 != 171212LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x777 = -1;
	uint32_t x780 = 48784178U;
	int64_t t173 = -2119179280661857437LL;

    t173 = (((x777|x778)-x779)+x780);

    if (t173 != 48784179LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x782 = INT16_MIN;
	volatile int32_t x783 = -1;
	int8_t x784 = INT8_MIN;
	volatile int32_t t174 = -1056;

    t174 = (((x781|x782)-x783)+x784);

    if (t174 != -255) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x785 = -1;
	volatile uint8_t x786 = UINT8_MAX;
	volatile uint32_t x787 = 13258U;
	int8_t x788 = -18;
	volatile uint32_t t175 = 23U;

    t175 = (((x785|x786)-x787)+x788);

    if (t175 != 4294954019U) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x789 = INT32_MIN;
	static int16_t x791 = -1;
	int64_t x792 = 434523296242754LL;
	int64_t t176 = 19459027069465465LL;

    t176 = (((x789|x790)-x791)+x792);

    if (t176 != 434521148759107LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x793 = -1;
	uint64_t x794 = UINT64_MAX;
	uint8_t x795 = 45U;
	static volatile int64_t x796 = 24394275659535LL;
	uint64_t t177 = 2035966021502474140LLU;

    t177 = (((x793|x794)-x795)+x796);

    if (t177 != 24394275659489LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x797 = INT32_MIN;
	int64_t x798 = 20771233780425LL;
	uint32_t x799 = UINT32_MAX;
	uint64_t x800 = UINT64_MAX;
	volatile uint64_t t178 = 15108131358527LLU;

    t178 = (((x797|x798)-x799)+x800);

    if (t178 != 18446744068039037641LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x801 = -1LL;
	uint16_t x802 = 4U;
	int8_t x803 = -1;
	int16_t x804 = 0;
	volatile int64_t t179 = 0LL;

    t179 = (((x801|x802)-x803)+x804);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x806 = -13274117;
	int16_t x807 = -2;
	int64_t x808 = INT64_MIN;
	volatile uint64_t t180 = 1814501390195110226LLU;

    t180 = (((x805|x806)-x807)+x808);

    if (t180 != 9223372036841501693LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x809 = 1U;
	static uint16_t x810 = 1693U;
	uint64_t x812 = UINT64_MAX;
	static volatile uint64_t t181 = 12083785724426314LLU;

    t181 = (((x809|x810)-x811)+x812);

    if (t181 != 18446744073688895422LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x813 = INT32_MIN;
	volatile int16_t x814 = 97;
	uint8_t x815 = 13U;
	volatile int16_t x816 = -1;

    t182 = (((x813|x814)-x815)+x816);

    if (t182 != -2147483565) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x817 = INT64_MIN;
	uint16_t x818 = 229U;
	static uint8_t x820 = 5U;
	volatile int64_t t183 = -19LL;

    t183 = (((x817|x818)-x819)+x820);

    if (t183 != -9223372036854775580LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x825 = 5873539781267652LL;
	static uint64_t x826 = 1043005763LLU;
	uint16_t x827 = 10U;
	uint8_t x828 = 71U;
	uint64_t t184 = 279822693LLU;

    t184 = (((x825|x826)-x827)+x828);

    if (t184 != 5873540620325380LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x829 = UINT8_MAX;
	static uint16_t x831 = 44U;
	int32_t x832 = -1;
	static int32_t t185 = 4;

    t185 = (((x829|x830)-x831)+x832);

    if (t185 != -2147483438) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x833 = UINT32_MAX;
	int8_t x834 = INT8_MAX;
	volatile int64_t x836 = INT64_MIN;
	uint64_t t186 = 68056723677LLU;

    t186 = (((x833|x834)-x835)+x836);

    if (t186 != 9223372039250273209LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x838 = UINT64_MAX;
	int64_t x839 = INT64_MAX;
	int8_t x840 = 0;
	uint64_t t187 = 0LLU;

    t187 = (((x837|x838)-x839)+x840);

    if (t187 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x841 = INT32_MAX;
	int32_t x842 = INT32_MIN;
	int32_t x843 = INT32_MAX;
	uint64_t x844 = 822211084LLU;
	static volatile uint64_t t188 = 3101121LLU;

    t188 = (((x841|x842)-x843)+x844);

    if (t188 != 18446744072384279052LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x845 = 11421516;
	volatile int16_t x846 = INT16_MIN;
	int16_t x847 = INT16_MIN;
	int32_t x848 = INT32_MIN;

    t189 = (((x845|x846)-x847)+x848);

    if (t189 != -2147465396) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x849 = 1785217925597LLU;
	uint16_t x850 = 4089U;
	uint16_t x851 = 2813U;
	volatile int8_t x852 = INT8_MIN;
	uint64_t t190 = 18934732LLU;

    t190 = (((x849|x850)-x851)+x852);

    if (t190 != 1785217926272LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x853 = INT32_MAX;
	static uint8_t x856 = 0U;
	static volatile int32_t t191 = 34569;

    t191 = (((x853|x854)-x855)+x856);

    if (t191 != -65536) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x857 = 678893282317LLU;
	int16_t x858 = -2;
	volatile uint64_t x859 = UINT64_MAX;
	int16_t x860 = INT16_MAX;
	volatile uint64_t t192 = 28183095289835LLU;

    t192 = (((x857|x858)-x859)+x860);

    if (t192 != 32767LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x861 = 508402;
	int64_t x862 = INT64_MIN;
	int8_t x863 = 29;
	uint8_t x864 = 8U;
	volatile int64_t t193 = 881453198132069LL;

    t193 = (((x861|x862)-x863)+x864);

    if (t193 != -9223372036854267427LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x869 = -2067376815200196734LL;
	static int32_t x870 = INT32_MIN;
	static int64_t x871 = 736826840186LL;
	volatile int64_t t194 = 36117LL;

    t194 = (((x869|x870)-x871)+x872);

    if (t194 != -737076587475LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x873 = UINT64_MAX;
	static int32_t x874 = INT32_MIN;
	int16_t x875 = -1;
	int32_t x876 = 13;
	volatile uint64_t t195 = 628489536672173LLU;

    t195 = (((x873|x874)-x875)+x876);

    if (t195 != 13LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x877 = 6;
	volatile int32_t x878 = 19882945;
	static uint32_t x879 = 1U;
	int16_t x880 = INT16_MIN;
	static volatile uint32_t t196 = 3360U;

    t196 = (((x877|x878)-x879)+x880);

    if (t196 != 19850182U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x881 = 102LLU;
	int16_t x882 = -1;
	uint32_t x883 = UINT32_MAX;

    t197 = (((x881|x882)-x883)+x884);

    if (t197 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x885 = -1LL;
	static uint32_t x887 = 180U;
	volatile int32_t x888 = INT32_MIN;
	static int64_t t198 = 4914157370086LL;

    t198 = (((x885|x886)-x887)+x888);

    if (t198 != -2147483829LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x889 = 209495845LLU;
	int16_t x890 = INT16_MIN;
	static uint16_t x891 = UINT16_MAX;
	uint32_t x892 = UINT32_MAX;
	uint64_t t199 = 22012771LLU;

    t199 = (((x889|x890)-x891)+x892);

    if (t199 != 4294879013LLU) { NG(); } else { ; }
	
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

