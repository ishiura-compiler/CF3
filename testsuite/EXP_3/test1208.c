
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

int8_t x1 = 43;
int8_t x2 = -50;
volatile int16_t x16 = INT16_MAX;
int32_t t2 = 228802766;
static uint64_t x28 = 3693760LLU;
volatile int8_t x29 = INT8_MIN;
static int64_t x41 = INT64_MAX;
volatile int16_t x48 = 3643;
static int8_t x57 = INT8_MIN;
uint8_t x60 = 3U;
static int16_t x61 = INT16_MIN;
uint16_t x75 = UINT16_MAX;
uint64_t t14 = 1406365534LLU;
int16_t x84 = 3;
static int16_t x87 = -2;
uint64_t t17 = 97844578663136805LLU;
uint64_t x101 = 22190189475LLU;
int32_t x104 = -1;
volatile int32_t x107 = -1;
volatile uint32_t x117 = 6585201U;
static int64_t x119 = INT64_MAX;
volatile int32_t x123 = -44750947;
volatile int16_t x135 = -1;
int8_t x141 = -2;
uint64_t x142 = UINT64_MAX;
uint8_t x146 = 93U;
static int32_t x147 = INT32_MIN;
uint64_t x152 = 1683427330633LLU;
int64_t x164 = -1LL;
int32_t x170 = -21136;
uint16_t x175 = 175U;
static volatile uint8_t x180 = UINT8_MAX;
volatile uint64_t t33 = 29021881LLU;
volatile int64_t x185 = -9088744752LL;
static int64_t x188 = -1LL;
int64_t x193 = 3621710177235924LL;
static int64_t x196 = INT64_MIN;
static volatile int8_t x198 = INT8_MIN;
static volatile int32_t x199 = INT32_MIN;
static volatile uint64_t x204 = 297464546851329LLU;
int32_t x218 = 303746;
int16_t x220 = -510;
static volatile int32_t t41 = -4454222;
static int32_t x239 = -1;
static volatile uint64_t x241 = UINT64_MAX;
int64_t x243 = -1785438040LL;
uint32_t x244 = UINT32_MAX;
uint64_t x246 = 496873687LLU;
static int64_t x247 = INT64_MIN;
int64_t x258 = 289560772LL;
int32_t x260 = 1576260;
int8_t x262 = 13;
int16_t x277 = INT16_MIN;
uint32_t t51 = 60186743U;
uint32_t x285 = 85265U;
int32_t x294 = INT32_MIN;
uint64_t x296 = 0LLU;
int16_t x302 = 1561;
int8_t x304 = INT8_MIN;
volatile int32_t x307 = INT32_MAX;
int8_t x308 = -2;
static int16_t x310 = INT16_MIN;
static int64_t x311 = INT64_MIN;
int32_t x312 = INT32_MAX;
volatile int32_t t56 = 1;
int32_t t58 = -26143;
static int16_t x328 = -129;
static int64_t x341 = -962755LL;
static int32_t x342 = -1;
uint16_t x343 = 7651U;
static volatile int16_t x344 = INT16_MAX;
volatile int8_t x358 = -1;
static uint8_t x368 = 1U;
static int32_t x369 = -1;
int8_t x375 = INT8_MAX;
int16_t x376 = INT16_MIN;
uint64_t x382 = UINT64_MAX;
uint64_t t67 = 8885445325LLU;
uint64_t x387 = 798153100282840LLU;
volatile int32_t t69 = 595634982;
volatile int16_t x394 = -7685;
volatile int16_t x396 = 1;
int8_t x404 = 1;
int32_t x405 = -6031;
uint8_t x409 = 91U;
uint32_t x413 = 214U;
int32_t x416 = -1;
int32_t x430 = INT32_MAX;
static volatile int8_t x442 = 3;
static int64_t x444 = -94068625550674LL;
volatile uint64_t t80 = 135514048981979949LLU;
int16_t x449 = INT16_MAX;
volatile uint32_t x450 = UINT32_MAX;
volatile uint16_t x456 = 1U;
volatile int32_t t82 = 0;
uint8_t x458 = 55U;
volatile int32_t t83 = -7471;
static volatile uint64_t t85 = 0LLU;
int32_t x471 = 947841632;
static int8_t x482 = 0;
uint32_t t89 = 1262641214U;
int64_t x493 = 65216010122LL;
static int8_t x495 = INT8_MIN;
volatile int64_t x496 = 1LL;
int8_t x501 = INT8_MAX;
static int8_t x505 = INT8_MAX;
volatile int32_t x508 = -253108;
int64_t x512 = INT64_MAX;
volatile uint16_t x533 = UINT16_MAX;
static int16_t x534 = -1;
uint16_t x538 = 8U;
int16_t x549 = -1;
int16_t x551 = INT16_MIN;
volatile uint32_t x553 = UINT32_MAX;
uint32_t x556 = UINT32_MAX;
uint8_t x558 = 95U;
uint16_t x568 = 823U;
int64_t t103 = -121166389577982035LL;
int16_t x571 = -1;
static uint16_t x581 = UINT16_MAX;
volatile uint8_t x584 = UINT8_MAX;
volatile int16_t x592 = 1;
uint8_t x594 = 28U;
int16_t x598 = -2;
uint64_t t110 = 18716154LLU;
int8_t x615 = 13;
static int32_t x623 = INT32_MIN;
static int32_t x642 = -1714;
int16_t x657 = INT16_MIN;
uint32_t x658 = UINT32_MAX;
volatile int64_t t121 = -17279LL;
volatile int16_t x670 = 0;
int64_t x676 = -1LL;
static int32_t t123 = -1;
uint32_t x677 = 12U;
volatile int32_t x678 = -1;
uint64_t x679 = 1419233713421266LLU;
uint64_t t125 = 1LLU;
int32_t x686 = -1;
int16_t x688 = 3;
int8_t x694 = INT8_MIN;
volatile int16_t x697 = -2603;
int8_t x705 = 0;
int8_t x706 = -1;
int16_t x707 = 9036;
int32_t x708 = INT32_MIN;
uint32_t x712 = UINT32_MAX;
uint8_t x714 = 17U;
volatile uint16_t x715 = 1U;
int16_t x721 = -1;
volatile uint64_t t133 = 7704643682547LLU;
volatile int16_t x725 = -1;
volatile int8_t x728 = 0;
int16_t x731 = 1057;
static volatile uint64_t x733 = 900443070894009LLU;
static int16_t x740 = INT16_MIN;
int16_t x741 = INT16_MAX;
int32_t t138 = 39;
int64_t x751 = INT64_MAX;
int16_t x761 = INT16_MAX;
volatile uint32_t t140 = 5U;
volatile int64_t x767 = 205LL;
volatile int64_t t142 = -8208432694LL;
uint8_t x773 = UINT8_MAX;
volatile int64_t x775 = INT64_MAX;
static volatile uint16_t x779 = UINT16_MAX;
uint16_t x782 = 1233U;
int16_t x785 = INT16_MAX;
int32_t x788 = INT32_MIN;
static uint16_t x799 = UINT16_MAX;
static int8_t x800 = INT8_MAX;
uint8_t x804 = 6U;
volatile int16_t x809 = -1;
int8_t x812 = INT8_MIN;
int16_t x824 = -1;
int64_t x836 = -17300LL;
int64_t x848 = INT64_MIN;
volatile uint32_t x853 = 18162U;
volatile uint32_t t157 = 445020U;
int8_t x864 = INT8_MAX;
int32_t x869 = -1;
uint64_t x872 = 55293904268805780LLU;
volatile int32_t t159 = -229;
volatile int8_t x877 = 13;
volatile uint32_t t161 = 4981U;
static int64_t x881 = INT64_MAX;
int16_t x883 = 2886;
int64_t x912 = -5600136172224LL;
volatile int32_t t166 = 6089503;
static int64_t x927 = -46798086257605685LL;
int64_t x930 = -1LL;
static volatile int64_t t169 = -240004992LL;
volatile uint16_t x937 = 1691U;
volatile int32_t t170 = -477631;
uint32_t x959 = 125U;
static volatile uint16_t x972 = UINT16_MAX;
int8_t x973 = INT8_MIN;
uint8_t x974 = 104U;
int64_t x976 = -527064440106326092LL;
static uint32_t x978 = 8U;
uint64_t t178 = 105690092795860LLU;
volatile uint64_t t179 = 5869LLU;
volatile uint16_t x993 = 15155U;
int8_t x996 = INT8_MIN;
volatile int32_t t181 = -69;
uint8_t x1014 = UINT8_MAX;
int64_t x1019 = -5932105216543LL;
int64_t x1020 = 7592133716LL;
uint64_t t186 = 73298954LLU;
uint8_t x1022 = 42U;
volatile int32_t t188 = 76865;
int8_t x1081 = -1;
int64_t x1087 = INT64_MIN;
static int32_t t193 = -21005916;
int8_t x1089 = -1;
int64_t x1091 = INT64_MIN;
int32_t t196 = -5;
static volatile uint64_t t197 = 2436626LLU;
volatile int16_t x1115 = INT16_MIN;
uint32_t x1122 = 2524295U;
static uint32_t t199 = 1771172U;


void f0(void) {
    	static volatile int64_t x3 = -57572544380792LL;
	volatile int64_t x4 = INT64_MAX;
	int32_t t0 = 99;

    t0 = ((x1*x2)/(x3!=x4));

    if (t0 != -2150) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 63U;
	static int64_t x6 = -80LL;
	uint32_t x7 = 11194810U;
	volatile int16_t x8 = INT16_MIN;
	int64_t t1 = -4589561562288857750LL;

    t1 = ((x5*x6)/(x7!=x8));

    if (t1 != -5040LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x13 = -1;
	static int8_t x14 = 1;
	uint32_t x15 = 264U;

    t2 = ((x13*x14)/(x15!=x16));

    if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x21 = INT16_MAX;
	static uint16_t x22 = 7168U;
	int16_t x23 = 30;
	int64_t x24 = -1LL;
	int32_t t3 = -989;

    t3 = ((x21*x22)/(x23!=x24));

    if (t3 != 234873856) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile int16_t x25 = INT16_MAX;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = 3313U;
	volatile int32_t t4 = -5;

    t4 = ((x25*x26)/(x27!=x28));

    if (t4 != -4194176) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x30 = -1;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = 5U;
	volatile int32_t t5 = 10756;

    t5 = ((x29*x30)/(x31!=x32));

    if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x37 = INT16_MIN;
	uint16_t x38 = 38U;
	uint32_t x39 = 5U;
	uint8_t x40 = UINT8_MAX;
	static int32_t t6 = 1657;

    t6 = ((x37*x38)/(x39!=x40));

    if (t6 != -1245184) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x42 = UINT64_MAX;
	uint16_t x43 = 5907U;
	int8_t x44 = INT8_MAX;
	static volatile uint64_t t7 = 44828LLU;

    t7 = ((x41*x42)/(x43!=x44));

    if (t7 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x45 = UINT32_MAX;
	static int32_t x46 = INT32_MIN;
	uint32_t x47 = 1111716357U;
	volatile uint32_t t8 = 244068U;

    t8 = ((x45*x46)/(x47!=x48));

    if (t8 != 2147483648U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint32_t x49 = 1U;
	uint8_t x50 = 75U;
	static volatile int64_t x51 = INT64_MIN;
	uint64_t x52 = UINT64_MAX;
	volatile uint32_t t9 = 2413U;

    t9 = ((x49*x50)/(x51!=x52));

    if (t9 != 75U) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x53 = INT32_MAX;
	int8_t x54 = -1;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = UINT8_MAX;
	int32_t t10 = 1;

    t10 = ((x53*x54)/(x55!=x56));

    if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x58 = INT8_MIN;
	static uint16_t x59 = UINT16_MAX;
	volatile int32_t t11 = 255257676;

    t11 = ((x57*x58)/(x59!=x60));

    if (t11 != 16384) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x62 = UINT64_MAX;
	int64_t x63 = 92362932LL;
	int8_t x64 = INT8_MIN;
	volatile uint64_t t12 = 268922848487579337LLU;

    t12 = ((x61*x62)/(x63!=x64));

    if (t12 != 32768LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = 15675;
	uint64_t x70 = 1697159897229LLU;
	int64_t x71 = 0LL;
	int8_t x72 = INT8_MIN;
	static volatile uint64_t t13 = 1706065LLU;

    t13 = ((x69*x70)/(x71!=x72));

    if (t13 != 26602981389064575LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x73 = INT8_MIN;
	uint64_t x74 = UINT64_MAX;
	static int64_t x76 = INT64_MIN;

    t14 = ((x73*x74)/(x75!=x76));

    if (t14 != 128LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x77 = INT64_MAX;
	int8_t x78 = -1;
	volatile int64_t x79 = -1635363489234638850LL;
	uint64_t x80 = UINT64_MAX;
	volatile int64_t t15 = 1137836093LL;

    t15 = ((x77*x78)/(x79!=x80));

    if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = UINT64_MAX;
	static uint64_t x82 = 810894203814229LLU;
	uint32_t x83 = 6543U;
	uint64_t t16 = 977968840451LLU;

    t16 = ((x81*x82)/(x83!=x84));

    if (t16 != 18445933179505737387LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = -1LL;
	uint64_t x86 = 4009285636036811LLU;
	uint64_t x88 = 186921535503029LLU;

    t17 = ((x85*x86)/(x87!=x88));

    if (t17 != 18442734788073514805LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint32_t x97 = 29449807U;
	int64_t x98 = -14LL;
	int32_t x99 = INT32_MIN;
	uint64_t x100 = UINT64_MAX;
	int64_t t18 = -958174LL;

    t18 = ((x97*x98)/(x99!=x100));

    if (t18 != -412297298LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x102 = UINT8_MAX;
	static volatile uint16_t x103 = 3554U;
	static volatile uint64_t t19 = 122LLU;

    t19 = ((x101*x102)/(x103!=x104));

    if (t19 != 5658498316125LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x105 = INT16_MIN;
	static uint16_t x106 = UINT16_MAX;
	static int64_t x108 = 8536201123720378LL;
	int32_t t20 = 845729;

    t20 = ((x105*x106)/(x107!=x108));

    if (t20 != -2147450880) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint64_t x109 = 2LLU;
	int8_t x110 = 10;
	uint32_t x111 = 330017260U;
	int64_t x112 = -1LL;
	static volatile uint64_t t21 = 603844960647LLU;

    t21 = ((x109*x110)/(x111!=x112));

    if (t21 != 20LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x118 = 3575076917LLU;
	static volatile int64_t x120 = INT64_MIN;
	volatile uint64_t t22 = 184695972473505LLU;

    t22 = ((x117*x118)/(x119!=x120));

    if (t22 != 23542600088905317LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x121 = 1719781U;
	int8_t x122 = INT8_MAX;
	uint16_t x124 = 3861U;
	volatile uint32_t t23 = 1511U;

    t23 = ((x121*x122)/(x123!=x124));

    if (t23 != 218412187U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x129 = 59011522LLU;
	static int64_t x130 = -1LL;
	volatile uint32_t x131 = UINT32_MAX;
	int32_t x132 = 2001846;
	volatile uint64_t t24 = 2LLU;

    t24 = ((x129*x130)/(x131!=x132));

    if (t24 != 18446744073650540094LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x133 = INT8_MAX;
	int32_t x134 = -1;
	int64_t x136 = INT64_MIN;
	volatile int32_t t25 = 0;

    t25 = ((x133*x134)/(x135!=x136));

    if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x143 = -316318656;
	static int32_t x144 = -1;
	volatile uint64_t t26 = 11038549046LLU;

    t26 = ((x141*x142)/(x143!=x144));

    if (t26 != 2LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x145 = 1U;
	static uint64_t x148 = 1721556714LLU;
	volatile int32_t t27 = -1;

    t27 = ((x145*x146)/(x147!=x148));

    if (t27 != 93) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x149 = INT16_MIN;
	static volatile int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MAX;
	volatile int32_t t28 = -23;

    t28 = ((x149*x150)/(x151!=x152));

    if (t28 != -1073709056) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MAX;
	volatile int32_t x159 = INT32_MAX;
	uint16_t x160 = 0U;
	volatile uint32_t t29 = 17U;

    t29 = ((x157*x158)/(x159!=x160));

    if (t29 != 4294934529U) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x161 = -13;
	int8_t x162 = INT8_MIN;
	static int8_t x163 = 1;
	volatile int32_t t30 = 0;

    t30 = ((x161*x162)/(x163!=x164));

    if (t30 != 1664) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x169 = UINT32_MAX;
	static int8_t x171 = -1;
	int8_t x172 = INT8_MAX;
	static uint32_t t31 = 104U;

    t31 = ((x169*x170)/(x171!=x172));

    if (t31 != 21136U) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x173 = 1U;
	int64_t x174 = INT64_MIN;
	static volatile uint16_t x176 = 0U;
	int64_t t32 = INT64_MIN;

    t32 = ((x173*x174)/(x175!=x176));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x177 = -1282191;
	volatile uint64_t x178 = 1LLU;
	volatile int32_t x179 = INT32_MAX;

    t33 = ((x177*x178)/(x179!=x180));

    if (t33 != 18446744073708269425LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x181 = INT16_MAX;
	volatile int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	int32_t t34 = -233938;

    t34 = ((x181*x182)/(x183!=x184));

    if (t34 != -1073709056) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x186 = 521987993U;
	uint8_t x187 = 0U;
	int64_t t35 = 399335380934796025LL;

    t35 = ((x185*x186)/(x187!=x188));

    if (t35 != -4744215631985762736LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x189 = UINT16_MAX;
	int32_t x190 = 1;
	int32_t x191 = INT32_MAX;
	int32_t x192 = INT32_MIN;
	volatile int32_t t36 = 47661115;

    t36 = ((x189*x190)/(x191!=x192));

    if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x194 = 2288572703573400581LLU;
	uint16_t x195 = 1U;
	volatile uint64_t t37 = 1106404LLU;

    t37 = ((x193*x194)/(x195!=x196));

    if (t37 != 9744197256216965924LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x197 = 3193U;
	volatile int16_t x200 = INT16_MIN;
	volatile int32_t t38 = 2523;

    t38 = ((x197*x198)/(x199!=x200));

    if (t38 != -408704) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x201 = -1LL;
	volatile int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	volatile int64_t t39 = -115LL;

    t39 = ((x201*x202)/(x203!=x204));

    if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint8_t x217 = UINT8_MAX;
	uint8_t x219 = 53U;
	volatile int32_t t40 = -2627392;

    t40 = ((x217*x218)/(x219!=x220));

    if (t40 != 77455230) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x221 = UINT8_MAX;
	volatile int16_t x222 = -1632;
	int32_t x223 = INT32_MIN;
	int32_t x224 = -8247;

    t41 = ((x221*x222)/(x223!=x224));

    if (t41 != -416160) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x225 = 6470078U;
	int16_t x226 = -1;
	uint32_t x227 = 39072604U;
	volatile int8_t x228 = INT8_MIN;
	uint32_t t42 = 13686U;

    t42 = ((x225*x226)/(x227!=x228));

    if (t42 != 4288497218U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x229 = 15800063U;
	int8_t x230 = 0;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = 5184278U;
	volatile uint32_t t43 = 454750795U;

    t43 = ((x229*x230)/(x231!=x232));

    if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x233 = 19U;
	uint16_t x234 = 6493U;
	int32_t x235 = -1;
	static int64_t x236 = INT64_MAX;
	static volatile uint32_t t44 = 834638U;

    t44 = ((x233*x234)/(x235!=x236));

    if (t44 != 123367U) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x237 = -1LL;
	int64_t x238 = -1LL;
	static int16_t x240 = 1;
	volatile int64_t t45 = -741LL;

    t45 = ((x237*x238)/(x239!=x240));

    if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x242 = INT64_MAX;
	volatile uint64_t t46 = 25416LLU;

    t46 = ((x241*x242)/(x243!=x244));

    if (t46 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x245 = -1;
	static int8_t x248 = INT8_MIN;
	uint64_t t47 = 409694950591876LLU;

    t47 = ((x245*x246)/(x247!=x248));

    if (t47 != 18446744073212677929LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x257 = INT32_MAX;
	static int16_t x259 = -1;
	int64_t t48 = -14416582915190LL;

    t48 = ((x257*x258)/(x259!=x260));

    if (t48 != 621827022682695484LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x261 = 3375U;
	int16_t x263 = -7;
	int64_t x264 = 5804525LL;
	volatile uint32_t t49 = 52U;

    t49 = ((x261*x262)/(x263!=x264));

    if (t49 != 43875U) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	int8_t x271 = 1;
	static int8_t x272 = INT8_MIN;
	int64_t t50 = -1806LL;

    t50 = ((x269*x270)/(x271!=x272));

    if (t50 != 128LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x278 = 3245103U;
	volatile uint8_t x279 = UINT8_MAX;
	static int16_t x280 = -12;

    t51 = ((x277*x278)/(x279!=x280));

    if (t51 != 1038647296U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x286 = 16;
	int16_t x287 = INT16_MIN;
	int64_t x288 = -1LL;
	volatile uint32_t t52 = 209U;

    t52 = ((x285*x286)/(x287!=x288));

    if (t52 != 1364240U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x293 = 69482522628095106LLU;
	int16_t x295 = INT16_MIN;
	volatile uint64_t t53 = 1553LLU;

    t53 = ((x293*x294)/(x295!=x296));

    if (t53 != 14146863880583774208LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x301 = 186U;
	int8_t x303 = 1;
	volatile int32_t t54 = 922;

    t54 = ((x301*x302)/(x303!=x304));

    if (t54 != 290346) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x305 = UINT16_MAX;
	int64_t x306 = -1LL;
	int64_t t55 = 0LL;

    t55 = ((x305*x306)/(x307!=x308));

    if (t55 != -65535LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x309 = 41;

    t56 = ((x309*x310)/(x311!=x312));

    if (t56 != -1343488) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x313 = UINT8_MAX;
	static volatile int16_t x314 = -6612;
	int8_t x315 = -1;
	static volatile int32_t x316 = 30311445;
	volatile int32_t t57 = 2112;

    t57 = ((x313*x314)/(x315!=x316));

    if (t57 != -1686060) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x321 = INT8_MIN;
	int8_t x322 = INT8_MIN;
	int16_t x323 = -1;
	int64_t x324 = -23714LL;

    t58 = ((x321*x322)/(x323!=x324));

    if (t58 != 16384) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x325 = 1U;
	int64_t x326 = -1LL;
	uint8_t x327 = 4U;
	volatile int64_t t59 = -110531742535LL;

    t59 = ((x325*x326)/(x327!=x328));

    if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x329 = INT8_MAX;
	static uint32_t x330 = 1560517U;
	int16_t x331 = -1;
	int64_t x332 = -1952LL;
	volatile uint32_t t60 = 25U;

    t60 = ((x329*x330)/(x331!=x332));

    if (t60 != 198185659U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x333 = INT64_MAX;
	static uint64_t x334 = 4378912904569LLU;
	static volatile int64_t x335 = INT64_MIN;
	static int64_t x336 = -7017369LL;
	static uint64_t t61 = 2271812591880057616LLU;

    t61 = ((x333*x334)/(x335!=x336));

    if (t61 != 9223367657941871239LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int64_t t62 = -6LL;

    t62 = ((x341*x342)/(x343!=x344));

    if (t62 != 962755LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x357 = INT32_MAX;
	uint8_t x359 = 45U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t63 = -6307;

    t63 = ((x357*x358)/(x359!=x360));

    if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	static uint16_t x366 = 1U;
	volatile int16_t x367 = INT16_MIN;
	volatile uint32_t t64 = UINT32_MAX;

    t64 = ((x365*x366)/(x367!=x368));

    if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x370 = 60U;
	int64_t x371 = -1LL;
	volatile uint32_t x372 = UINT32_MAX;
	uint32_t t65 = 137U;

    t65 = ((x369*x370)/(x371!=x372));

    if (t65 != 4294967236U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x373 = 885;
	int16_t x374 = INT16_MIN;
	int32_t t66 = -89;

    t66 = ((x373*x374)/(x375!=x376));

    if (t66 != -28999680) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x381 = 2323378783309303290LLU;
	uint64_t x383 = 3595758412257269LLU;
	uint16_t x384 = 9U;

    t67 = ((x381*x382)/(x383!=x384));

    if (t67 != 16123365290400248326LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x385 = 35007920U;
	volatile uint8_t x386 = UINT8_MAX;
	uint32_t x388 = 129U;
	static uint32_t t68 = 184U;

    t68 = ((x385*x386)/(x387!=x388));

    if (t68 != 337085008U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x389 = 15;
	static int16_t x390 = INT16_MAX;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = 68U;

    t69 = ((x389*x390)/(x391!=x392));

    if (t69 != 491505) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x393 = 57271867LLU;
	int8_t x395 = -1;
	uint64_t t70 = 121877287644962643LLU;

    t70 = ((x393*x394)/(x395!=x396));

    if (t70 != 18446743633575253721LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint8_t x397 = 9U;
	int8_t x398 = -1;
	int64_t x399 = 7717LL;
	int16_t x400 = 13;
	volatile int32_t t71 = -185;

    t71 = ((x397*x398)/(x399!=x400));

    if (t71 != -9) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x401 = UINT64_MAX;
	static volatile int8_t x402 = INT8_MAX;
	uint8_t x403 = 2U;
	uint64_t t72 = 1LLU;

    t72 = ((x401*x402)/(x403!=x404));

    if (t72 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x406 = 23U;
	uint8_t x407 = 114U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t73 = 3007;

    t73 = ((x405*x406)/(x407!=x408));

    if (t73 != -138713) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x410 = -1923;
	volatile int8_t x411 = 17;
	uint32_t x412 = 12717923U;
	volatile int32_t t74 = 47632;

    t74 = ((x409*x410)/(x411!=x412));

    if (t74 != -174993) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x414 = -1;
	int64_t x415 = INT64_MAX;
	volatile uint32_t t75 = 287U;

    t75 = ((x413*x414)/(x415!=x416));

    if (t75 != 4294967082U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x425 = INT8_MAX;
	static int16_t x426 = INT16_MAX;
	int32_t x427 = INT32_MIN;
	int64_t x428 = INT64_MIN;
	int32_t t76 = 45;

    t76 = ((x425*x426)/(x427!=x428));

    if (t76 != 4161409) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x429 = -1;
	int32_t x431 = -1;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t77 = 154815534;

    t77 = ((x429*x430)/(x431!=x432));

    if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x433 = 1028147282197LLU;
	int16_t x434 = -3;
	static int8_t x435 = -3;
	int16_t x436 = -1;
	volatile uint64_t t78 = 102132LLU;

    t78 = ((x433*x434)/(x435!=x436));

    if (t78 != 18446740989267705025LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x437 = -1;
	int16_t x438 = -1;
	volatile int16_t x439 = INT16_MIN;
	static int64_t x440 = INT64_MAX;
	int32_t t79 = 233686;

    t79 = ((x437*x438)/(x439!=x440));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x441 = UINT64_MAX;
	int8_t x443 = INT8_MIN;

    t80 = ((x441*x442)/(x443!=x444));

    if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x451 = UINT16_MAX;
	volatile int32_t x452 = -1700;
	volatile uint32_t t81 = 46338956U;

    t81 = ((x449*x450)/(x451!=x452));

    if (t81 != 4294934529U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x453 = INT8_MAX;
	static volatile uint8_t x454 = 3U;
	uint8_t x455 = 67U;

    t82 = ((x453*x454)/(x455!=x456));

    if (t82 != 381) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x457 = -1;
	static int64_t x459 = INT64_MAX;
	int32_t x460 = INT32_MIN;

    t83 = ((x457*x458)/(x459!=x460));

    if (t83 != -55) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x461 = INT16_MIN;
	static int32_t x462 = 84;
	volatile uint8_t x463 = 4U;
	uint8_t x464 = 2U;
	volatile int32_t t84 = -2167573;

    t84 = ((x461*x462)/(x463!=x464));

    if (t84 != -2752512) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x465 = UINT64_MAX;
	static int32_t x466 = -1;
	int32_t x467 = -671033;
	int16_t x468 = INT16_MAX;

    t85 = ((x465*x466)/(x467!=x468));

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x469 = -1;
	int16_t x470 = -1;
	int8_t x472 = -1;
	int32_t t86 = 87274457;

    t86 = ((x469*x470)/(x471!=x472));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x481 = 1511082U;
	volatile int64_t x483 = 3549336406563330LL;
	static int8_t x484 = INT8_MIN;
	volatile uint32_t t87 = 27U;

    t87 = ((x481*x482)/(x483!=x484));

    if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x485 = 0;
	uint8_t x486 = UINT8_MAX;
	int64_t x487 = INT64_MIN;
	static int32_t x488 = INT32_MAX;
	static int32_t t88 = -55;

    t88 = ((x485*x486)/(x487!=x488));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x489 = 0U;
	int8_t x490 = 14;
	int64_t x491 = -1LL;
	int8_t x492 = 59;

    t89 = ((x489*x490)/(x491!=x492));

    if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x494 = 478834;
	volatile int64_t t90 = 8190090626LL;

    t90 = ((x493*x494)/(x495!=x496));

    if (t90 != 31227642990757748LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x497 = INT16_MAX;
	int16_t x498 = -14098;
	uint32_t x499 = 117594U;
	int16_t x500 = -569;
	volatile int32_t t91 = 37669680;

    t91 = ((x497*x498)/(x499!=x500));

    if (t91 != -461949166) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x502 = 12382;
	static volatile int64_t x503 = INT64_MAX;
	uint64_t x504 = UINT64_MAX;
	volatile int32_t t92 = 1043086;

    t92 = ((x501*x502)/(x503!=x504));

    if (t92 != 1572514) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x506 = INT16_MIN;
	uint16_t x507 = 3786U;
	int32_t t93 = 3172;

    t93 = ((x505*x506)/(x507!=x508));

    if (t93 != -4161536) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint16_t x509 = UINT16_MAX;
	int8_t x510 = INT8_MAX;
	int8_t x511 = INT8_MIN;
	volatile int32_t t94 = -126523123;

    t94 = ((x509*x510)/(x511!=x512));

    if (t94 != 8322945) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x525 = 9158LL;
	static uint8_t x526 = 0U;
	uint16_t x527 = UINT16_MAX;
	static int16_t x528 = INT16_MIN;
	int64_t t95 = -66188LL;

    t95 = ((x525*x526)/(x527!=x528));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int8_t x535 = -1;
	static uint8_t x536 = 7U;
	volatile int32_t t96 = -1;

    t96 = ((x533*x534)/(x535!=x536));

    if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x537 = 20179202LL;
	uint64_t x539 = UINT64_MAX;
	volatile int8_t x540 = INT8_MIN;
	volatile int64_t t97 = -2206551439308536264LL;

    t97 = ((x537*x538)/(x539!=x540));

    if (t97 != 161433616LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x541 = UINT8_MAX;
	static uint64_t x542 = 16012307191706612LLU;
	static int64_t x543 = -264274128089873502LL;
	int8_t x544 = INT8_MAX;
	static volatile uint64_t t98 = 28266958725LLU;

    t98 = ((x541*x542)/(x543!=x544));

    if (t98 != 4083138333885186060LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x545 = INT8_MIN;
	uint32_t x546 = UINT32_MAX;
	static int8_t x547 = INT8_MIN;
	static uint64_t x548 = UINT64_MAX;
	volatile uint32_t t99 = 4U;

    t99 = ((x545*x546)/(x547!=x548));

    if (t99 != 128U) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x550 = -1;
	static volatile uint8_t x552 = 124U;
	volatile int32_t t100 = -17;

    t100 = ((x549*x550)/(x551!=x552));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x554 = 10;
	static uint64_t x555 = UINT64_MAX;
	volatile uint32_t t101 = 3U;

    t101 = ((x553*x554)/(x555!=x556));

    if (t101 != 4294967286U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x557 = -1;
	uint32_t x559 = UINT32_MAX;
	volatile uint8_t x560 = UINT8_MAX;
	int32_t t102 = -21;

    t102 = ((x557*x558)/(x559!=x560));

    if (t102 != -95) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x565 = 87U;
	volatile int64_t x566 = 500429777457807LL;
	static int8_t x567 = INT8_MAX;

    t103 = ((x565*x566)/(x567!=x568));

    if (t103 != 43537390638829209LL) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x569 = INT16_MAX;
	uint32_t x570 = UINT32_MAX;
	uint8_t x572 = UINT8_MAX;
	static uint32_t t104 = 36616985U;

    t104 = ((x569*x570)/(x571!=x572));

    if (t104 != 4294934529U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x577 = INT16_MIN;
	uint32_t x578 = UINT32_MAX;
	volatile uint8_t x579 = UINT8_MAX;
	int8_t x580 = INT8_MAX;
	uint32_t t105 = 214069538U;

    t105 = ((x577*x578)/(x579!=x580));

    if (t105 != 32768U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x582 = INT8_MIN;
	uint16_t x583 = UINT16_MAX;
	int32_t t106 = 43220751;

    t106 = ((x581*x582)/(x583!=x584));

    if (t106 != -8388480) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x589 = 3556696U;
	static int16_t x590 = INT16_MIN;
	int16_t x591 = INT16_MIN;
	volatile uint32_t t107 = 3073U;

    t107 = ((x589*x590)/(x591!=x592));

    if (t107 != 3713269760U) { NG(); } else { ; }
	
}

void f108(void) {
    	static uint8_t x593 = 0U;
	volatile int64_t x595 = INT64_MAX;
	int16_t x596 = INT16_MAX;
	int32_t t108 = -4;

    t108 = ((x593*x594)/(x595!=x596));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x597 = 182628244456LL;
	uint64_t x599 = 897414985553LLU;
	static int8_t x600 = INT8_MIN;
	static volatile int64_t t109 = -48821898785688LL;

    t109 = ((x597*x598)/(x599!=x600));

    if (t109 != -365256488912LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x601 = 2U;
	uint64_t x602 = 19877791LLU;
	int8_t x603 = -1;
	uint16_t x604 = 19292U;

    t110 = ((x601*x602)/(x603!=x604));

    if (t110 != 39755582LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x613 = 1083753838427LL;
	static int8_t x614 = -1;
	static int32_t x616 = -1;
	static int64_t t111 = 73554517LL;

    t111 = ((x613*x614)/(x615!=x616));

    if (t111 != -1083753838427LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x617 = 3;
	uint64_t x618 = UINT64_MAX;
	uint64_t x619 = UINT64_MAX;
	int8_t x620 = INT8_MAX;
	volatile uint64_t t112 = 1277633080356004222LLU;

    t112 = ((x617*x618)/(x619!=x620));

    if (t112 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x621 = 15494LLU;
	uint16_t x622 = UINT16_MAX;
	static uint32_t x624 = 49U;
	uint64_t t113 = 7179113LLU;

    t113 = ((x621*x622)/(x623!=x624));

    if (t113 != 1015399290LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x629 = -1LL;
	int32_t x630 = INT32_MIN;
	volatile int32_t x631 = INT32_MAX;
	uint32_t x632 = 63575U;
	volatile int64_t t114 = -73889LL;

    t114 = ((x629*x630)/(x631!=x632));

    if (t114 != 2147483648LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x633 = UINT8_MAX;
	volatile uint64_t x634 = UINT64_MAX;
	static volatile int8_t x635 = INT8_MIN;
	int64_t x636 = INT64_MAX;
	uint64_t t115 = 16754076502322136LLU;

    t115 = ((x633*x634)/(x635!=x636));

    if (t115 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x637 = 11;
	static int8_t x638 = -4;
	static uint8_t x639 = 2U;
	uint32_t x640 = UINT32_MAX;
	static int32_t t116 = -28608;

    t116 = ((x637*x638)/(x639!=x640));

    if (t116 != -44) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x641 = UINT32_MAX;
	uint64_t x643 = 580622914592LLU;
	static uint8_t x644 = UINT8_MAX;
	uint32_t t117 = 234U;

    t117 = ((x641*x642)/(x643!=x644));

    if (t117 != 1714U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x645 = -375992419026838877LL;
	int8_t x646 = -1;
	static int64_t x647 = INT64_MAX;
	volatile int32_t x648 = INT32_MIN;
	volatile int64_t t118 = 845336387175LL;

    t118 = ((x645*x646)/(x647!=x648));

    if (t118 != 375992419026838877LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x649 = UINT32_MAX;
	uint8_t x650 = UINT8_MAX;
	int16_t x651 = INT16_MAX;
	int16_t x652 = -146;
	uint32_t t119 = 1487733320U;

    t119 = ((x649*x650)/(x651!=x652));

    if (t119 != 4294967041U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x659 = INT32_MIN;
	int64_t x660 = -1LL;
	static volatile uint32_t t120 = 7672681U;

    t120 = ((x657*x658)/(x659!=x660));

    if (t120 != 32768U) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x665 = UINT32_MAX;
	int64_t x666 = -1LL;
	int8_t x667 = INT8_MAX;
	int64_t x668 = -939563605296LL;

    t121 = ((x665*x666)/(x667!=x668));

    if (t121 != -4294967295LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x669 = 7;
	int8_t x671 = -1;
	int16_t x672 = INT16_MAX;
	volatile int32_t t122 = -8436417;

    t122 = ((x669*x670)/(x671!=x672));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x674 = INT16_MAX;
	int64_t x675 = -12441LL;

    t123 = ((x673*x674)/(x675!=x676));

    if (t123 != -1073709056) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x680 = -371;
	uint32_t t124 = 11584776U;

    t124 = ((x677*x678)/(x679!=x680));

    if (t124 != 4294967284U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x681 = INT64_MIN;
	volatile uint64_t x682 = 688172140LLU;
	int8_t x683 = INT8_MIN;
	uint8_t x684 = 2U;

    t125 = ((x681*x682)/(x683!=x684));

    if (t125 != 0LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x685 = 1574;
	uint16_t x687 = 99U;
	volatile int32_t t126 = -1774973;

    t126 = ((x685*x686)/(x687!=x688));

    if (t126 != -1574) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x689 = INT8_MIN;
	uint8_t x690 = 0U;
	static int8_t x691 = -5;
	volatile int16_t x692 = INT16_MAX;
	int32_t t127 = -6;

    t127 = ((x689*x690)/(x691!=x692));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x693 = UINT8_MAX;
	static int8_t x695 = INT8_MIN;
	uint64_t x696 = 79LLU;
	volatile int32_t t128 = 516826;

    t128 = ((x693*x694)/(x695!=x696));

    if (t128 != -32640) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x698 = -1;
	uint8_t x699 = 117U;
	int8_t x700 = INT8_MIN;
	volatile int32_t t129 = 772215383;

    t129 = ((x697*x698)/(x699!=x700));

    if (t129 != 2603) { NG(); } else { ; }
	
}

void f130(void) {
    	static int32_t t130 = 409387777;

    t130 = ((x705*x706)/(x707!=x708));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x709 = 1U;
	int64_t x710 = -1LL;
	int32_t x711 = -29352;
	int64_t t131 = -41651220LL;

    t131 = ((x709*x710)/(x711!=x712));

    if (t131 != -1LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x713 = INT16_MAX;
	int64_t x716 = -1LL;
	volatile int32_t t132 = 43967;

    t132 = ((x713*x714)/(x715!=x716));

    if (t132 != 557039) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x722 = 49901LLU;
	uint8_t x723 = 18U;
	int8_t x724 = -1;

    t133 = ((x721*x722)/(x723!=x724));

    if (t133 != 18446744073709501715LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x726 = 1;
	static int64_t x727 = INT64_MIN;
	volatile int32_t t134 = 1177956;

    t134 = ((x725*x726)/(x727!=x728));

    if (t134 != -1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x729 = 16746278638LL;
	uint64_t x730 = 698345935LLU;
	static int16_t x732 = INT16_MIN;
	static uint64_t t135 = 58245LLU;

    t135 = ((x729*x730)/(x731!=x732));

    if (t135 != 11694695613224636530LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x734 = 31U;
	int32_t x735 = INT32_MIN;
	volatile int16_t x736 = INT16_MIN;
	volatile uint64_t t136 = 3LLU;

    t136 = ((x733*x734)/(x735!=x736));

    if (t136 != 27913735197714279LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x737 = 12;
	int8_t x738 = -1;
	int32_t x739 = INT32_MIN;
	int32_t t137 = 7522347;

    t137 = ((x737*x738)/(x739!=x740));

    if (t137 != -12) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x742 = 462U;
	static int16_t x743 = -90;
	static int32_t x744 = INT32_MIN;

    t138 = ((x741*x742)/(x743!=x744));

    if (t138 != 15138354) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x749 = 9U;
	int16_t x750 = -1;
	static int32_t x752 = 8104;
	int32_t t139 = 9160230;

    t139 = ((x749*x750)/(x751!=x752));

    if (t139 != -9) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x762 = UINT32_MAX;
	static volatile uint32_t x763 = 54U;
	uint64_t x764 = 1880093979274786262LLU;

    t140 = ((x761*x762)/(x763!=x764));

    if (t140 != 4294934529U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x765 = -1;
	int16_t x766 = INT16_MAX;
	static int8_t x768 = -1;
	int32_t t141 = -31043729;

    t141 = ((x765*x766)/(x767!=x768));

    if (t141 != -32767) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x769 = -1LL;
	int64_t x770 = INT64_MAX;
	volatile int32_t x771 = 0;
	volatile int16_t x772 = INT16_MIN;

    t142 = ((x769*x770)/(x771!=x772));

    if (t142 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x774 = 160U;
	int32_t x776 = INT32_MIN;
	volatile int32_t t143 = 4;

    t143 = ((x773*x774)/(x775!=x776));

    if (t143 != 40800) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x777 = 1750U;
	int16_t x778 = -489;
	volatile int16_t x780 = INT16_MIN;
	static volatile int32_t t144 = -13854;

    t144 = ((x777*x778)/(x779!=x780));

    if (t144 != -855750) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x781 = -65406506LL;
	int64_t x783 = 491576069520464LL;
	uint64_t x784 = 63417123381LLU;
	int64_t t145 = -11437334LL;

    t145 = ((x781*x782)/(x783!=x784));

    if (t145 != -80646221898LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x786 = INT8_MIN;
	volatile uint32_t x787 = UINT32_MAX;
	int32_t t146 = 33017018;

    t146 = ((x785*x786)/(x787!=x788));

    if (t146 != -4194176) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x797 = -1LL;
	volatile int32_t x798 = INT32_MAX;
	int64_t t147 = -217783221118362LL;

    t147 = ((x797*x798)/(x799!=x800));

    if (t147 != -2147483647LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x801 = -1;
	uint64_t x802 = UINT64_MAX;
	volatile int8_t x803 = INT8_MAX;
	static uint64_t t148 = 7140094LLU;

    t148 = ((x801*x802)/(x803!=x804));

    if (t148 != 1LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x810 = INT32_MAX;
	int64_t x811 = INT64_MIN;
	volatile int32_t t149 = -35;

    t149 = ((x809*x810)/(x811!=x812));

    if (t149 != -2147483647) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x813 = 69U;
	int8_t x814 = -8;
	volatile int64_t x815 = 82905851LL;
	uint8_t x816 = 7U;
	volatile int32_t t150 = 4;

    t150 = ((x813*x814)/(x815!=x816));

    if (t150 != -552) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x817 = 1138LL;
	int8_t x818 = INT8_MAX;
	int8_t x819 = -27;
	static volatile int32_t x820 = -164;
	int64_t t151 = -28LL;

    t151 = ((x817*x818)/(x819!=x820));

    if (t151 != 144526LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x821 = INT32_MAX;
	int8_t x822 = -1;
	volatile int64_t x823 = INT64_MAX;
	volatile int32_t t152 = -66;

    t152 = ((x821*x822)/(x823!=x824));

    if (t152 != -2147483647) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x829 = -1;
	int8_t x830 = -1;
	static uint32_t x831 = 4U;
	int64_t x832 = INT64_MIN;
	volatile int32_t t153 = 184256869;

    t153 = ((x829*x830)/(x831!=x832));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x833 = UINT64_MAX;
	int8_t x834 = INT8_MIN;
	uint32_t x835 = UINT32_MAX;
	uint64_t t154 = 303LLU;

    t154 = ((x833*x834)/(x835!=x836));

    if (t154 != 128LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x841 = 170;
	int32_t x842 = -38311;
	int64_t x843 = -1LL;
	volatile int32_t x844 = 1397;
	volatile int32_t t155 = -136;

    t155 = ((x841*x842)/(x843!=x844));

    if (t155 != -6512870) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint64_t x845 = 318LLU;
	uint32_t x846 = 3995141U;
	static int32_t x847 = -80;
	volatile uint64_t t156 = 3276772LLU;

    t156 = ((x845*x846)/(x847!=x848));

    if (t156 != 1270454838LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x854 = 28;
	int16_t x855 = 11;
	uint32_t x856 = 7481U;

    t157 = ((x853*x854)/(x855!=x856));

    if (t157 != 508536U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x861 = UINT64_MAX;
	uint8_t x862 = 10U;
	static int32_t x863 = INT32_MIN;
	volatile uint64_t t158 = 169544421LLU;

    t158 = ((x861*x862)/(x863!=x864));

    if (t158 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x870 = INT8_MIN;
	int8_t x871 = -10;

    t159 = ((x869*x870)/(x871!=x872));

    if (t159 != 128) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint16_t x873 = UINT16_MAX;
	int16_t x874 = INT16_MIN;
	volatile int32_t x875 = -1;
	uint32_t x876 = 352976490U;
	static int32_t t160 = 15;

    t160 = ((x873*x874)/(x875!=x876));

    if (t160 != -2147450880) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x878 = UINT32_MAX;
	volatile uint8_t x879 = 1U;
	uint64_t x880 = UINT64_MAX;

    t161 = ((x877*x878)/(x879!=x880));

    if (t161 != 4294967283U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint64_t x882 = 2LLU;
	int32_t x884 = 37;
	volatile uint64_t t162 = 954716LLU;

    t162 = ((x881*x882)/(x883!=x884));

    if (t162 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x893 = INT16_MIN;
	int16_t x894 = -1;
	static int8_t x895 = 0;
	int32_t x896 = INT32_MAX;
	volatile int32_t t163 = -172;

    t163 = ((x893*x894)/(x895!=x896));

    if (t163 != 32768) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x897 = -1;
	static volatile int8_t x898 = INT8_MIN;
	static int8_t x899 = INT8_MAX;
	int32_t x900 = 41818;
	int32_t t164 = 1;

    t164 = ((x897*x898)/(x899!=x900));

    if (t164 != 128) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x905 = 1390079LL;
	uint64_t x906 = 1144722067260238044LLU;
	uint8_t x907 = UINT8_MAX;
	uint16_t x908 = 5U;
	uint64_t t165 = 102907285488498LLU;

    t165 = ((x905*x906)/(x907!=x908));

    if (t165 != 1069248711098466084LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x909 = UINT16_MAX;
	uint8_t x910 = 1U;
	static volatile uint64_t x911 = 111070181255680LLU;

    t166 = ((x909*x910)/(x911!=x912));

    if (t166 != 65535) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x925 = INT8_MIN;
	int64_t x926 = -1LL;
	int64_t x928 = 1321492913039LL;
	int64_t t167 = -7LL;

    t167 = ((x925*x926)/(x927!=x928));

    if (t167 != 128LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x929 = INT16_MIN;
	static int8_t x931 = INT8_MIN;
	static volatile int16_t x932 = INT16_MAX;
	int64_t t168 = 75946795388589LL;

    t168 = ((x929*x930)/(x931!=x932));

    if (t168 != 32768LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x933 = 2;
	static volatile int64_t x934 = -1LL;
	uint32_t x935 = 391232341U;
	volatile int64_t x936 = -16330LL;

    t169 = ((x933*x934)/(x935!=x936));

    if (t169 != -2LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x938 = INT16_MIN;
	int32_t x939 = 337;
	static int8_t x940 = 3;

    t170 = ((x937*x938)/(x939!=x940));

    if (t170 != -55410688) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x949 = INT64_MAX;
	int64_t x950 = -1LL;
	int16_t x951 = INT16_MIN;
	uint32_t x952 = 1436862U;
	int64_t t171 = -3568268496LL;

    t171 = ((x949*x950)/(x951!=x952));

    if (t171 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x953 = 22U;
	static volatile uint8_t x954 = 4U;
	static uint8_t x955 = 33U;
	volatile int32_t x956 = -13490;
	uint32_t t172 = 67790235U;

    t172 = ((x953*x954)/(x955!=x956));

    if (t172 != 88U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x957 = 5U;
	volatile int16_t x958 = INT16_MIN;
	int32_t x960 = 176442;
	uint32_t t173 = 101365U;

    t173 = ((x957*x958)/(x959!=x960));

    if (t173 != 4294803456U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x965 = INT8_MIN;
	uint16_t x966 = 0U;
	volatile uint16_t x967 = UINT16_MAX;
	int32_t x968 = INT32_MIN;
	static int32_t t174 = -17146;

    t174 = ((x965*x966)/(x967!=x968));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x969 = 5U;
	int32_t x970 = INT32_MAX;
	volatile int32_t x971 = INT32_MIN;
	static uint32_t t175 = 1418U;

    t175 = ((x969*x970)/(x971!=x972));

    if (t175 != 2147483643U) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x975 = -2;
	volatile int32_t t176 = -1441;

    t176 = ((x973*x974)/(x975!=x976));

    if (t176 != -13312) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x977 = 1;
	static int8_t x979 = 7;
	int16_t x980 = INT16_MIN;
	uint32_t t177 = 38075U;

    t177 = ((x977*x978)/(x979!=x980));

    if (t177 != 8U) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile int64_t x985 = INT64_MIN;
	static uint64_t x986 = 1936LLU;
	int64_t x987 = INT64_MAX;
	static int8_t x988 = -1;

    t178 = ((x985*x986)/(x987!=x988));

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x989 = INT64_MIN;
	uint64_t x990 = UINT64_MAX;
	int8_t x991 = 3;
	int32_t x992 = INT32_MAX;

    t179 = ((x989*x990)/(x991!=x992));

    if (t179 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x994 = 13116;
	int8_t x995 = -1;
	int32_t t180 = -142;

    t180 = ((x993*x994)/(x995!=x996));

    if (t180 != 198772980) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x997 = -242;
	static int32_t x998 = 5842984;
	volatile int64_t x999 = INT64_MIN;
	int32_t x1000 = INT32_MAX;

    t181 = ((x997*x998)/(x999!=x1000));

    if (t181 != -1414002128) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1001 = INT16_MIN;
	int16_t x1002 = -871;
	int64_t x1003 = INT64_MAX;
	uint32_t x1004 = 34345694U;
	int32_t t182 = 161912;

    t182 = ((x1001*x1002)/(x1003!=x1004));

    if (t182 != 28540928) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x1005 = INT64_MAX;
	volatile uint64_t x1006 = 1084385884354461670LLU;
	int8_t x1007 = -3;
	static int16_t x1008 = INT16_MAX;
	static volatile uint64_t t183 = 11LLU;

    t183 = ((x1005*x1006)/(x1007!=x1008));

    if (t183 != 17362358189355089946LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1009 = INT16_MIN;
	uint32_t x1010 = 1552U;
	uint32_t x1011 = 362168U;
	volatile int8_t x1012 = -9;
	uint32_t t184 = 3887U;

    t184 = ((x1009*x1010)/(x1011!=x1012));

    if (t184 != 4244111360U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1013 = INT16_MAX;
	int8_t x1015 = INT8_MAX;
	static uint64_t x1016 = 233475260738707LLU;
	int32_t t185 = 2810626;

    t185 = ((x1013*x1014)/(x1015!=x1016));

    if (t185 != 8355585) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x1017 = INT16_MAX;
	uint64_t x1018 = 1745711636599LLU;

    t186 = ((x1017*x1018)/(x1019!=x1020));

    if (t186 != 57201733196439433LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x1021 = -1;
	static int8_t x1023 = 46;
	int64_t x1024 = INT64_MIN;
	int32_t t187 = 0;

    t187 = ((x1021*x1022)/(x1023!=x1024));

    if (t187 != -42) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x1033 = INT16_MAX;
	uint8_t x1034 = 0U;
	int64_t x1035 = -141059694013LL;
	static volatile int16_t x1036 = -76;

    t188 = ((x1033*x1034)/(x1035!=x1036));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1037 = 23;
	static uint32_t x1038 = UINT32_MAX;
	int16_t x1039 = INT16_MAX;
	volatile uint8_t x1040 = 16U;
	volatile uint32_t t189 = 23U;

    t189 = ((x1037*x1038)/(x1039!=x1040));

    if (t189 != 4294967273U) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1045 = INT8_MAX;
	static int8_t x1046 = INT8_MIN;
	int32_t x1047 = -417;
	int32_t x1048 = INT32_MIN;
	volatile int32_t t190 = 1;

    t190 = ((x1045*x1046)/(x1047!=x1048));

    if (t190 != -16256) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1069 = UINT32_MAX;
	volatile uint32_t x1070 = 45U;
	int64_t x1071 = -1LL;
	int32_t x1072 = 19508;
	uint32_t t191 = 8U;

    t191 = ((x1069*x1070)/(x1071!=x1072));

    if (t191 != 4294967251U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1082 = UINT16_MAX;
	int32_t x1083 = INT32_MIN;
	uint8_t x1084 = 3U;
	static volatile int32_t t192 = -87521945;

    t192 = ((x1081*x1082)/(x1083!=x1084));

    if (t192 != -65535) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1085 = INT8_MAX;
	int16_t x1086 = INT16_MAX;
	uint16_t x1088 = UINT16_MAX;

    t193 = ((x1085*x1086)/(x1087!=x1088));

    if (t193 != 4161409) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1090 = -1;
	uint16_t x1092 = 7U;
	volatile int32_t t194 = -1;

    t194 = ((x1089*x1090)/(x1091!=x1092));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x1097 = 78U;
	uint64_t x1098 = 121662217428406967LLU;
	static int8_t x1099 = INT8_MIN;
	uint64_t x1100 = 72580875366332LLU;
	uint64_t t195 = 19394101604850LLU;

    t195 = ((x1097*x1098)/(x1099!=x1100));

    if (t195 != 9489652959415743426LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1101 = INT16_MIN;
	static volatile int8_t x1102 = INT8_MIN;
	int64_t x1103 = -132603196LL;
	int32_t x1104 = INT32_MAX;

    t196 = ((x1101*x1102)/(x1103!=x1104));

    if (t196 != 4194304) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1105 = -1;
	uint64_t x1106 = 336370731925867LLU;
	int16_t x1107 = INT16_MIN;
	static volatile int8_t x1108 = INT8_MIN;

    t197 = ((x1105*x1106)/(x1107!=x1108));

    if (t197 != 18446407702977625749LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1113 = -1;
	volatile int8_t x1114 = -1;
	int16_t x1116 = -1;
	int32_t t198 = 5161213;

    t198 = ((x1113*x1114)/(x1115!=x1116));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1121 = 13;
	uint32_t x1123 = 2932U;
	uint8_t x1124 = 3U;

    t199 = ((x1121*x1122)/(x1123!=x1124));

    if (t199 != 32815835U) { NG(); } else { ; }
	
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

