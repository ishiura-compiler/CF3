
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

static int64_t x5 = INT64_MIN;
int16_t x9 = INT16_MAX;
volatile int32_t x10 = INT32_MIN;
static volatile int32_t x11 = INT32_MAX;
static int64_t x28 = INT64_MAX;
int64_t x29 = 197338229145584988LL;
int16_t x39 = 763;
static uint64_t x44 = UINT64_MAX;
int16_t x47 = INT16_MIN;
static volatile int32_t t8 = -894127;
int8_t x57 = -5;
int16_t x65 = INT16_MIN;
static volatile int16_t x90 = INT16_MAX;
uint32_t x92 = 123U;
int16_t x100 = -1;
uint32_t x106 = UINT32_MAX;
uint8_t x107 = UINT8_MAX;
static int16_t x108 = 0;
uint32_t x109 = 426U;
int8_t x113 = -30;
uint32_t x115 = 9577U;
int64_t x122 = INT64_MIN;
static int32_t t20 = 79;
uint32_t x133 = 1017973U;
uint16_t x134 = 727U;
int16_t x135 = INT16_MAX;
uint64_t x136 = 245964048789LLU;
int32_t t23 = 100039;
int64_t x139 = -1LL;
static int64_t x149 = INT64_MIN;
volatile int32_t x151 = -1;
int32_t t27 = 35;
uint16_t x157 = 801U;
volatile int64_t x160 = -1702339557LL;
volatile int8_t x168 = -1;
volatile int32_t t30 = -27;
static int16_t x169 = 4;
int16_t x172 = -15547;
static volatile int32_t t31 = 11;
static int32_t t32 = -27014662;
int8_t x179 = -1;
uint8_t x180 = 3U;
int8_t x183 = INT8_MIN;
int32_t t34 = 7832895;
volatile int64_t x187 = 51171904LL;
volatile uint8_t x192 = 0U;
static int64_t x201 = INT64_MAX;
static int8_t x203 = 4;
uint16_t x206 = 5910U;
volatile int32_t x209 = 1796;
static volatile uint64_t x210 = 2537140885604337LLU;
volatile int32_t t40 = -396733;
int64_t x214 = -1LL;
int8_t x216 = -1;
int32_t t41 = 159849;
volatile int16_t x233 = INT16_MIN;
int64_t x235 = -1986184986896220LL;
static int32_t x238 = -185;
int8_t x246 = -1;
int32_t x249 = -1;
uint32_t x252 = 1033U;
int16_t x262 = INT16_MAX;
static int8_t x265 = -1;
volatile int32_t t52 = -3656436;
static volatile uint64_t x281 = 6192028227865786435LLU;
static uint8_t x282 = 7U;
int16_t x283 = INT16_MIN;
volatile int8_t x292 = -1;
int32_t t55 = 6354672;
static volatile int32_t x299 = -41850735;
int32_t t57 = -204948187;
int32_t x312 = -650793;
uint32_t x326 = 1526915U;
volatile int32_t x331 = INT32_MIN;
int32_t t62 = 475442;
int64_t x336 = INT64_MIN;
volatile uint64_t x337 = 41115LLU;
int8_t x340 = INT8_MAX;
uint32_t x350 = 10360654U;
volatile int16_t x374 = 538;
volatile int32_t t68 = 260;
int8_t x378 = -18;
static volatile int32_t t71 = -46365924;
volatile uint16_t x397 = UINT16_MAX;
int32_t x398 = INT32_MAX;
static uint32_t x400 = 10U;
uint8_t x405 = 0U;
static uint8_t x407 = 89U;
int16_t x414 = INT16_MIN;
static volatile int8_t x416 = -1;
uint16_t x419 = 13U;
volatile int32_t t76 = -4;
int8_t x430 = INT8_MIN;
int8_t x431 = 1;
volatile int32_t x432 = -102070;
int8_t x440 = INT8_MIN;
int16_t x449 = -1;
uint64_t x450 = 932599991998LLU;
volatile int16_t x452 = 1759;
volatile int32_t t80 = -728577305;
static volatile uint64_t x460 = UINT64_MAX;
int8_t x462 = 35;
int64_t x478 = INT64_MAX;
uint32_t x479 = 53866312U;
uint64_t x482 = UINT64_MAX;
uint8_t x483 = UINT8_MAX;
int16_t x484 = -6;
int16_t x486 = -10;
volatile uint64_t x495 = 2456411049LLU;
static int16_t x499 = 1;
int32_t t90 = -24;
int32_t x504 = INT32_MAX;
uint32_t x506 = 188U;
static uint8_t x510 = 95U;
static volatile uint32_t x517 = UINT32_MAX;
static int32_t x520 = -6;
int32_t t95 = -960;
int32_t t97 = -32;
volatile uint8_t x530 = UINT8_MAX;
int64_t x531 = INT64_MIN;
volatile uint64_t x534 = 3860421638001LLU;
int32_t t99 = 607200;
int16_t x540 = 25;
static volatile int32_t x541 = 18768;
int16_t x543 = -1;
int64_t x545 = -1101LL;
volatile int8_t x556 = -19;
int16_t x559 = -319;
static int8_t x561 = -1;
uint16_t x562 = UINT16_MAX;
static volatile uint64_t x573 = 4485401038828368LLU;
int8_t x583 = 0;
static int16_t x585 = 5383;
int16_t x587 = INT16_MAX;
int16_t x600 = -1;
int8_t x606 = 17;
int8_t x614 = -1;
volatile uint64_t x619 = UINT64_MAX;
volatile uint32_t x622 = 1544386U;
volatile uint32_t x624 = 1949243632U;
int32_t t119 = -443928923;
uint32_t x633 = 25U;
volatile uint64_t x637 = 33707969071470981LLU;
uint8_t x645 = 11U;
volatile int32_t t122 = 2;
int32_t t123 = 3;
uint32_t x654 = UINT32_MAX;
int8_t x660 = INT8_MIN;
int32_t t126 = 970265588;
uint8_t x665 = 12U;
int16_t x669 = INT16_MAX;
static int64_t x682 = INT64_MIN;
uint32_t x685 = UINT32_MAX;
static int8_t x687 = INT8_MAX;
static volatile int64_t x689 = -1LL;
int8_t x690 = INT8_MIN;
int32_t t132 = -1;
int64_t x705 = -455LL;
volatile int8_t x709 = INT8_MAX;
volatile uint64_t x712 = 13993333661LLU;
int8_t x713 = 19;
uint64_t x714 = 128311193LLU;
uint32_t x715 = 2U;
int32_t t136 = 1370;
int8_t x720 = 1;
int64_t x723 = -1644942970196782LL;
int64_t x729 = -126343994085LL;
volatile int32_t t139 = 768260612;
uint16_t x734 = 284U;
uint8_t x735 = UINT8_MAX;
static int32_t x741 = -14279075;
int64_t x742 = 1036904110550LL;
int64_t x743 = INT64_MIN;
static uint32_t x753 = UINT32_MAX;
int32_t t142 = 776518510;
int8_t x761 = -1;
int32_t x762 = -87321;
uint32_t x791 = UINT32_MAX;
int64_t x801 = -1LL;
static volatile int16_t x804 = INT16_MAX;
static uint64_t x814 = 2610LLU;
static volatile int32_t t152 = -354654430;
static volatile int32_t x822 = INT32_MAX;
volatile int32_t t155 = 108;
int64_t x841 = INT64_MIN;
int32_t x845 = INT32_MIN;
int8_t x866 = -12;
volatile int32_t t161 = 1;
static int32_t t162 = 376458;
int64_t x889 = 178080277LL;
uint64_t x894 = 2901LLU;
int32_t t164 = 12219;
volatile int32_t t165 = 11641;
uint64_t x919 = UINT64_MAX;
volatile uint64_t x926 = 567986LLU;
static uint32_t x927 = 479468U;
int32_t t168 = -2750142;
int32_t x929 = INT32_MAX;
volatile int64_t x940 = 468249615582176LL;
static volatile int32_t x947 = 0;
volatile int16_t x952 = -1;
uint8_t x956 = 61U;
volatile int32_t t174 = -27584456;
int64_t x957 = INT64_MAX;
static uint64_t x959 = 1472160824982302LLU;
volatile int32_t t176 = -4;
int8_t x972 = -1;
int32_t t177 = 0;
volatile uint16_t x973 = 1U;
uint32_t x981 = UINT32_MAX;
int16_t x984 = INT16_MAX;
int8_t x988 = INT8_MAX;
volatile int32_t t181 = 192589;
int32_t x994 = INT32_MIN;
int16_t x995 = -1;
int64_t x1000 = INT64_MAX;
volatile int32_t t184 = 1784;
int64_t x1014 = INT64_MIN;
volatile int32_t t186 = -770895;
int32_t x1026 = INT32_MIN;
uint16_t x1031 = UINT16_MAX;
uint64_t x1035 = 536324LLU;
uint64_t x1036 = 16383441LLU;
int32_t t191 = -31176;
volatile int32_t x1041 = 1011541;
volatile int32_t x1047 = -1;
volatile uint8_t x1055 = 23U;
volatile int32_t t195 = 2064;
static uint16_t x1071 = 4333U;
volatile uint16_t x1078 = UINT16_MAX;
int32_t x1079 = INT32_MIN;


void f0(void) {
    	uint64_t x6 = 15650918757LLU;
	volatile int16_t x7 = -7;
	uint8_t x8 = 0U;
	int32_t t0 = -134;

    t0 = ((x5<=x6)!=(x7*x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x12 = -1;
	volatile int32_t t1 = 75;

    t1 = ((x9<=x10)!=(x11*x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x25 = INT32_MAX;
	int32_t x26 = -1;
	uint16_t x27 = 1U;
	volatile int32_t t2 = 190575;

    t2 = ((x25<=x26)!=(x27*x28));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x30 = 4U;
	static volatile int16_t x31 = INT16_MIN;
	uint8_t x32 = 2U;
	volatile int32_t t3 = -55976962;

    t3 = ((x29<=x30)!=(x31*x32));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x37 = INT64_MIN;
	int16_t x38 = INT16_MIN;
	static volatile uint32_t x40 = 27933U;
	int32_t t4 = -175340929;

    t4 = ((x37<=x38)!=(x39*x40));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x41 = 0U;
	uint16_t x42 = 47U;
	uint32_t x43 = UINT32_MAX;
	static volatile int32_t t5 = -144589;

    t5 = ((x41<=x42)!=(x43*x44));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x45 = 12U;
	uint64_t x46 = 497156352LLU;
	uint16_t x48 = 22748U;
	volatile int32_t t6 = -182552403;

    t6 = ((x45<=x46)!=(x47*x48));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x49 = 0LLU;
	uint16_t x50 = UINT16_MAX;
	static volatile uint64_t x51 = UINT64_MAX;
	int16_t x52 = INT16_MIN;
	volatile int32_t t7 = -167;

    t7 = ((x49<=x50)!=(x51*x52));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x53 = INT8_MIN;
	uint8_t x54 = 0U;
	volatile uint64_t x55 = 8172828725892506999LLU;
	uint8_t x56 = 25U;

    t8 = ((x53<=x54)!=(x55*x56));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x58 = INT16_MAX;
	uint64_t x59 = 58081LLU;
	static int8_t x60 = INT8_MIN;
	int32_t t9 = -6195;

    t9 = ((x57<=x58)!=(x59*x60));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x66 = 13346568916843891LLU;
	int16_t x67 = 0;
	uint32_t x68 = UINT32_MAX;
	volatile int32_t t10 = -10;

    t10 = ((x65<=x66)!=(x67*x68));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x73 = INT32_MIN;
	static volatile uint32_t x74 = UINT32_MAX;
	volatile int64_t x75 = 700321762783LL;
	int8_t x76 = INT8_MIN;
	volatile int32_t t11 = -8061;

    t11 = ((x73<=x74)!=(x75*x76));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x77 = -498LL;
	int32_t x78 = INT32_MIN;
	volatile uint16_t x79 = 116U;
	int16_t x80 = INT16_MAX;
	volatile int32_t t12 = 56;

    t12 = ((x77<=x78)!=(x79*x80));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x89 = -1;
	volatile int32_t x91 = 147793;
	volatile int32_t t13 = 16;

    t13 = ((x89<=x90)!=(x91*x92));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x93 = INT8_MAX;
	uint16_t x94 = 29184U;
	int32_t x95 = -3027697;
	int8_t x96 = -1;
	static volatile int32_t t14 = -4091;

    t14 = ((x93<=x94)!=(x95*x96));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t t15 = -169;

    t15 = ((x97<=x98)!=(x99*x100));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x101 = INT8_MAX;
	int32_t x102 = -1;
	uint64_t x103 = UINT64_MAX;
	static int32_t x104 = INT32_MIN;
	int32_t t16 = -349;

    t16 = ((x101<=x102)!=(x103*x104));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x105 = -1;
	volatile int32_t t17 = -9;

    t17 = ((x105<=x106)!=(x107*x108));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x110 = 3015264831539LL;
	int64_t x111 = -1LL;
	static int32_t x112 = -1;
	volatile int32_t t18 = 21572;

    t18 = ((x109<=x110)!=(x111*x112));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint64_t x114 = 934343LLU;
	int16_t x116 = INT16_MIN;
	static int32_t t19 = 6374;

    t19 = ((x113<=x114)!=(x115*x116));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x121 = INT16_MIN;
	int32_t x123 = -1;
	uint8_t x124 = UINT8_MAX;

    t20 = ((x121<=x122)!=(x123*x124));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x125 = INT64_MAX;
	uint16_t x126 = 1U;
	static uint8_t x127 = 102U;
	int32_t x128 = 1212;
	volatile int32_t t21 = 1129029;

    t21 = ((x125<=x126)!=(x127*x128));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x129 = 32910U;
	int32_t x130 = -1;
	uint32_t x131 = 1215379348U;
	static int64_t x132 = -207533620LL;
	static volatile int32_t t22 = -113838;

    t22 = ((x129<=x130)!=(x131*x132));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    

    t23 = ((x133<=x134)!=(x135*x136));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x137 = 5626491392055331LLU;
	int64_t x138 = 7383LL;
	uint64_t x140 = 80461492075LLU;
	int32_t t24 = -1034223;

    t24 = ((x137<=x138)!=(x139*x140));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x145 = 25408U;
	static int32_t x146 = -1;
	static int64_t x147 = -170685414527605024LL;
	int16_t x148 = -1;
	volatile int32_t t25 = 257169032;

    t25 = ((x145<=x146)!=(x147*x148));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x150 = 16;
	uint16_t x152 = UINT16_MAX;
	int32_t t26 = 2525320;

    t26 = ((x149<=x150)!=(x151*x152));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = INT64_MIN;
	static int32_t x154 = INT32_MAX;
	volatile int64_t x155 = 1761645645331LL;
	volatile int32_t x156 = -13487;

    t27 = ((x153<=x154)!=(x155*x156));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x158 = -1;
	uint8_t x159 = UINT8_MAX;
	static volatile int32_t t28 = -2322068;

    t28 = ((x157<=x158)!=(x159*x160));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x161 = 5802118521845232592LLU;
	uint64_t x162 = 43639915LLU;
	uint8_t x163 = 110U;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t29 = 2524;

    t29 = ((x161<=x162)!=(x163*x164));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x165 = -1;
	static volatile int64_t x166 = INT64_MAX;
	static int32_t x167 = -49910;

    t30 = ((x165<=x166)!=(x167*x168));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x170 = INT8_MIN;
	uint64_t x171 = 1923569LLU;

    t31 = ((x169<=x170)!=(x171*x172));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x173 = UINT8_MAX;
	static int16_t x174 = INT16_MIN;
	static uint8_t x175 = UINT8_MAX;
	int8_t x176 = INT8_MAX;

    t32 = ((x173<=x174)!=(x175*x176));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x177 = 15892;
	int32_t x178 = INT32_MIN;
	volatile int32_t t33 = -47388;

    t33 = ((x177<=x178)!=(x179*x180));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	volatile int16_t x184 = -1;

    t34 = ((x181<=x182)!=(x183*x184));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x185 = 1;
	int16_t x186 = -3919;
	volatile uint16_t x188 = 269U;
	int32_t t35 = -59866564;

    t35 = ((x185<=x186)!=(x187*x188));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x189 = -2740332489201LL;
	uint64_t x190 = 5360995003207112768LLU;
	int16_t x191 = -1;
	int32_t t36 = -1085;

    t36 = ((x189<=x190)!=(x191*x192));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x193 = -538203091071627LL;
	uint64_t x194 = 154735789733710LLU;
	volatile int8_t x195 = INT8_MIN;
	static int32_t x196 = -3843348;
	static int32_t t37 = -165237;

    t37 = ((x193<=x194)!=(x195*x196));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x202 = -16985860441023394LL;
	volatile uint64_t x204 = 1184112262239319825LLU;
	int32_t t38 = -8979;

    t38 = ((x201<=x202)!=(x203*x204));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x205 = UINT8_MAX;
	uint64_t x207 = 151085973606260676LLU;
	volatile int8_t x208 = -13;
	volatile int32_t t39 = -235851437;

    t39 = ((x205<=x206)!=(x207*x208));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x211 = INT16_MIN;
	int32_t x212 = 1;

    t40 = ((x209<=x210)!=(x211*x212));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x213 = -55412768319547LL;
	uint64_t x215 = 121LLU;

    t41 = ((x213<=x214)!=(x215*x216));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x217 = INT32_MAX;
	static int8_t x218 = 28;
	int8_t x219 = -1;
	uint32_t x220 = 21U;
	int32_t t42 = 5233244;

    t42 = ((x217<=x218)!=(x219*x220));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x221 = INT16_MIN;
	volatile int16_t x222 = 12;
	uint64_t x223 = 6798360115777950LLU;
	uint64_t x224 = 1808546LLU;
	volatile int32_t t43 = 316;

    t43 = ((x221<=x222)!=(x223*x224));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	int8_t x230 = -1;
	volatile int8_t x231 = 2;
	volatile uint8_t x232 = 72U;
	volatile int32_t t44 = -1218423;

    t44 = ((x229<=x230)!=(x231*x232));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x234 = -1662363606291LL;
	static uint64_t x236 = 3614647040540LLU;
	int32_t t45 = -13565;

    t45 = ((x233<=x234)!=(x235*x236));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x237 = INT8_MIN;
	int32_t x239 = INT32_MIN;
	int32_t x240 = 0;
	int32_t t46 = 9034277;

    t46 = ((x237<=x238)!=(x239*x240));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint32_t x245 = UINT32_MAX;
	volatile int64_t x247 = 60335426743LL;
	int16_t x248 = 594;
	static volatile int32_t t47 = -15;

    t47 = ((x245<=x246)!=(x247*x248));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x250 = INT32_MAX;
	volatile uint16_t x251 = 15683U;
	static int32_t t48 = 448370691;

    t48 = ((x249<=x250)!=(x251*x252));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x257 = -7;
	static volatile uint64_t x258 = 94544135961LLU;
	uint64_t x259 = 8289295389LLU;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t49 = 42064;

    t49 = ((x257<=x258)!=(x259*x260));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x261 = 11724U;
	int8_t x263 = 2;
	int16_t x264 = INT16_MAX;
	static volatile int32_t t50 = -2875;

    t50 = ((x261<=x262)!=(x263*x264));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int64_t x266 = 482106268530708299LL;
	static volatile int32_t x267 = 0;
	uint8_t x268 = UINT8_MAX;
	static int32_t t51 = 60034;

    t51 = ((x265<=x266)!=(x267*x268));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x273 = -1;
	uint32_t x274 = 1804384U;
	int8_t x275 = 13;
	int8_t x276 = -1;

    t52 = ((x273<=x274)!=(x275*x276));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x277 = 33830876U;
	int16_t x278 = 1;
	static int64_t x279 = -214LL;
	static uint32_t x280 = 18U;
	volatile int32_t t53 = 6;

    t53 = ((x277<=x278)!=(x279*x280));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x284 = -33941771172638LL;
	int32_t t54 = 179;

    t54 = ((x281<=x282)!=(x283*x284));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x289 = UINT16_MAX;
	int8_t x290 = -29;
	int64_t x291 = 13015LL;

    t55 = ((x289<=x290)!=(x291*x292));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x293 = INT32_MIN;
	static int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = 3U;
	int32_t x296 = INT32_MAX;
	static int32_t t56 = -7081258;

    t56 = ((x293<=x294)!=(x295*x296));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x297 = 1;
	static int64_t x298 = INT64_MAX;
	volatile int64_t x300 = 2LL;

    t57 = ((x297<=x298)!=(x299*x300));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x301 = INT64_MIN;
	uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MIN;
	static uint64_t x304 = 29574644018949793LLU;
	volatile int32_t t58 = -115;

    t58 = ((x301<=x302)!=(x303*x304));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	uint32_t x311 = 3414U;
	volatile int32_t t59 = 15461966;

    t59 = ((x309<=x310)!=(x311*x312));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x317 = 4001;
	int16_t x318 = -1;
	uint32_t x319 = 2U;
	int16_t x320 = -1;
	volatile int32_t t60 = 12198;

    t60 = ((x317<=x318)!=(x319*x320));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x325 = 69;
	int64_t x327 = INT64_MIN;
	volatile uint64_t x328 = 118974065LLU;
	volatile int32_t t61 = 129819;

    t61 = ((x325<=x326)!=(x327*x328));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x329 = INT8_MAX;
	volatile int16_t x330 = INT16_MIN;
	static int8_t x332 = 1;

    t62 = ((x329<=x330)!=(x331*x332));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x333 = -2;
	int8_t x334 = INT8_MIN;
	uint64_t x335 = 20717367834738044LLU;
	volatile int32_t t63 = -184;

    t63 = ((x333<=x334)!=(x335*x336));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x338 = -1;
	uint64_t x339 = 3156LLU;
	volatile int32_t t64 = 598095;

    t64 = ((x337<=x338)!=(x339*x340));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x345 = 5U;
	static uint16_t x346 = UINT16_MAX;
	int32_t x347 = 84439;
	int64_t x348 = -12555124LL;
	int32_t t65 = 5115;

    t65 = ((x345<=x346)!=(x347*x348));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x349 = UINT16_MAX;
	int16_t x351 = INT16_MIN;
	int16_t x352 = -1;
	volatile int32_t t66 = -1;

    t66 = ((x349<=x350)!=(x351*x352));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x357 = INT8_MAX;
	volatile int32_t x358 = 477;
	int64_t x359 = 137041898425LL;
	int32_t x360 = 12728577;
	int32_t t67 = 254017800;

    t67 = ((x357<=x358)!=(x359*x360));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x373 = 6321387060035453925LLU;
	volatile uint8_t x375 = 33U;
	int32_t x376 = -1;

    t68 = ((x373<=x374)!=(x375*x376));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int64_t x377 = INT64_MIN;
	uint32_t x379 = 0U;
	volatile uint64_t x380 = 948020LLU;
	int32_t t69 = -78305222;

    t69 = ((x377<=x378)!=(x379*x380));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x381 = -1;
	static int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MAX;
	int32_t x384 = 15392;
	volatile int32_t t70 = 32940;

    t70 = ((x381<=x382)!=(x383*x384));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x385 = 2032227441U;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = 241;
	volatile uint8_t x388 = 1U;

    t71 = ((x385<=x386)!=(x387*x388));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x399 = -1;
	volatile int32_t t72 = -106866;

    t72 = ((x397<=x398)!=(x399*x400));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x406 = 7694LLU;
	volatile uint32_t x408 = 1394804917U;
	volatile int32_t t73 = -9706835;

    t73 = ((x405<=x406)!=(x407*x408));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x409 = -126545504829627LL;
	int8_t x410 = INT8_MAX;
	uint16_t x411 = UINT16_MAX;
	int32_t x412 = -1;
	static volatile int32_t t74 = -1957116;

    t74 = ((x409<=x410)!=(x411*x412));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int8_t x413 = -7;
	int8_t x415 = INT8_MAX;
	int32_t t75 = 23;

    t75 = ((x413<=x414)!=(x415*x416));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x417 = 63U;
	uint8_t x418 = 11U;
	int8_t x420 = -1;

    t76 = ((x417<=x418)!=(x419*x420));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x421 = INT8_MIN;
	static uint8_t x422 = 9U;
	volatile int32_t x423 = -1;
	static int64_t x424 = INT64_MAX;
	int32_t t77 = 217987328;

    t77 = ((x421<=x422)!=(x423*x424));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x429 = -411119813506105122LL;
	volatile int32_t t78 = -449751;

    t78 = ((x429<=x430)!=(x431*x432));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MIN;
	int8_t x439 = -1;
	int32_t t79 = 13517;

    t79 = ((x437<=x438)!=(x439*x440));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x451 = INT8_MIN;

    t80 = ((x449<=x450)!=(x451*x452));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MAX;
	int16_t x455 = 0;
	int32_t x456 = -1;
	static volatile int32_t t81 = 10;

    t81 = ((x453<=x454)!=(x455*x456));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint64_t x457 = 132174762LLU;
	static uint32_t x458 = UINT32_MAX;
	uint32_t x459 = 366115473U;
	int32_t t82 = -158;

    t82 = ((x457<=x458)!=(x459*x460));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x461 = -24;
	volatile int8_t x463 = 1;
	int8_t x464 = 0;
	int32_t t83 = -26943273;

    t83 = ((x461<=x462)!=(x463*x464));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint16_t x465 = UINT16_MAX;
	volatile int16_t x466 = -1;
	int8_t x467 = INT8_MIN;
	int16_t x468 = -1;
	static volatile int32_t t84 = 64040518;

    t84 = ((x465<=x466)!=(x467*x468));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	static volatile int8_t x477 = INT8_MIN;
	static uint64_t x480 = 733LLU;
	int32_t t85 = 6900929;

    t85 = ((x477<=x478)!=(x479*x480));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x481 = UINT32_MAX;
	int32_t t86 = 4;

    t86 = ((x481<=x482)!=(x483*x484));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x485 = 0;
	int8_t x487 = INT8_MIN;
	uint64_t x488 = UINT64_MAX;
	static int32_t t87 = 6388934;

    t87 = ((x485<=x486)!=(x487*x488));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x489 = -1;
	volatile uint64_t x490 = UINT64_MAX;
	static volatile uint64_t x491 = 2253123118387LLU;
	volatile int32_t x492 = INT32_MIN;
	volatile int32_t t88 = 4;

    t88 = ((x489<=x490)!=(x491*x492));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x493 = 18U;
	int64_t x494 = INT64_MIN;
	static int8_t x496 = 0;
	int32_t t89 = -144665426;

    t89 = ((x493<=x494)!=(x495*x496));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x497 = -1;
	int32_t x498 = 1;
	uint16_t x500 = 7489U;

    t90 = ((x497<=x498)!=(x499*x500));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x501 = 45529470U;
	int32_t x502 = INT32_MIN;
	int32_t x503 = -1;
	volatile int32_t t91 = -169;

    t91 = ((x501<=x502)!=(x503*x504));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x505 = INT16_MIN;
	uint16_t x507 = 1040U;
	int8_t x508 = INT8_MIN;
	volatile int32_t t92 = -1406;

    t92 = ((x505<=x506)!=(x507*x508));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x509 = -35;
	volatile int32_t x511 = -751887;
	static int8_t x512 = INT8_MIN;
	static volatile int32_t t93 = 6615;

    t93 = ((x509<=x510)!=(x511*x512));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x513 = UINT8_MAX;
	uint64_t x514 = UINT64_MAX;
	static int32_t x515 = 56520173;
	int8_t x516 = 2;
	volatile int32_t t94 = -14;

    t94 = ((x513<=x514)!=(x515*x516));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x518 = INT8_MIN;
	int8_t x519 = INT8_MIN;

    t95 = ((x517<=x518)!=(x519*x520));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x521 = INT8_MAX;
	int8_t x522 = INT8_MAX;
	uint64_t x523 = UINT64_MAX;
	int16_t x524 = -3130;
	int32_t t96 = -368412899;

    t96 = ((x521<=x522)!=(x523*x524));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x525 = 1001200LL;
	int32_t x526 = -1;
	int8_t x527 = INT8_MAX;
	static uint8_t x528 = 1U;

    t97 = ((x525<=x526)!=(x527*x528));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x529 = UINT32_MAX;
	uint64_t x532 = 112866330756LLU;
	int32_t t98 = -119817;

    t98 = ((x529<=x530)!=(x531*x532));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x533 = -1;
	static volatile int64_t x535 = -5413116880LL;
	int64_t x536 = -49118LL;

    t99 = ((x533<=x534)!=(x535*x536));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x537 = -2;
	int64_t x538 = -1LL;
	static uint8_t x539 = UINT8_MAX;
	int32_t t100 = 3;

    t100 = ((x537<=x538)!=(x539*x540));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x542 = 39;
	int8_t x544 = INT8_MAX;
	static volatile int32_t t101 = -5;

    t101 = ((x541<=x542)!=(x543*x544));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x546 = 13U;
	uint16_t x547 = 0U;
	int16_t x548 = INT16_MAX;
	volatile int32_t t102 = -1695;

    t102 = ((x545<=x546)!=(x547*x548));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x553 = -1LL;
	uint8_t x554 = 17U;
	int8_t x555 = INT8_MAX;
	static volatile int32_t t103 = 3652;

    t103 = ((x553<=x554)!=(x555*x556));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x557 = UINT32_MAX;
	int32_t x558 = 87;
	static uint16_t x560 = 17U;
	volatile int32_t t104 = 149792082;

    t104 = ((x557<=x558)!=(x559*x560));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x563 = INT16_MAX;
	volatile int16_t x564 = INT16_MIN;
	static volatile int32_t t105 = -10753;

    t105 = ((x561<=x562)!=(x563*x564));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x565 = INT16_MIN;
	static int32_t x566 = -14546;
	static int8_t x567 = -1;
	int8_t x568 = INT8_MIN;
	volatile int32_t t106 = -20136;

    t106 = ((x565<=x566)!=(x567*x568));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x574 = 2086652866897LL;
	uint8_t x575 = UINT8_MAX;
	static int16_t x576 = INT16_MAX;
	volatile int32_t t107 = -3;

    t107 = ((x573<=x574)!=(x575*x576));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x577 = INT32_MIN;
	volatile int16_t x578 = 129;
	volatile uint8_t x579 = 21U;
	static int16_t x580 = INT16_MAX;
	volatile int32_t t108 = -1532746;

    t108 = ((x577<=x578)!=(x579*x580));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x581 = INT16_MAX;
	uint16_t x582 = UINT16_MAX;
	static int64_t x584 = INT64_MAX;
	volatile int32_t t109 = -11521;

    t109 = ((x581<=x582)!=(x583*x584));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint16_t x586 = 0U;
	int8_t x588 = INT8_MIN;
	volatile int32_t t110 = 351;

    t110 = ((x585<=x586)!=(x587*x588));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x593 = INT32_MIN;
	int16_t x594 = INT16_MIN;
	int16_t x595 = INT16_MAX;
	volatile uint16_t x596 = 1U;
	static int32_t t111 = 484384155;

    t111 = ((x593<=x594)!=(x595*x596));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x597 = 1U;
	int8_t x598 = INT8_MIN;
	uint8_t x599 = 22U;
	static int32_t t112 = -809582698;

    t112 = ((x597<=x598)!=(x599*x600));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x601 = INT16_MAX;
	volatile int16_t x602 = -1;
	static uint16_t x603 = 754U;
	static int32_t x604 = -1;
	volatile int32_t t113 = -116875;

    t113 = ((x601<=x602)!=(x603*x604));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x605 = INT8_MIN;
	static int16_t x607 = -1;
	static uint16_t x608 = UINT16_MAX;
	static volatile int32_t t114 = 92810004;

    t114 = ((x605<=x606)!=(x607*x608));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int64_t x609 = -1LL;
	static uint64_t x610 = 5LLU;
	static int32_t x611 = -1;
	int8_t x612 = 2;
	volatile int32_t t115 = 275447;

    t115 = ((x609<=x610)!=(x611*x612));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x613 = -1LL;
	static int32_t x615 = -1;
	volatile int8_t x616 = -1;
	volatile int32_t t116 = 1635;

    t116 = ((x613<=x614)!=(x615*x616));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x617 = INT32_MAX;
	int32_t x618 = -176518;
	static int8_t x620 = -42;
	static int32_t t117 = 399136;

    t117 = ((x617<=x618)!=(x619*x620));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x621 = 1120033439014681LL;
	uint16_t x623 = 781U;
	static volatile int32_t t118 = 406620;

    t118 = ((x621<=x622)!=(x623*x624));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x629 = -1;
	static uint32_t x630 = UINT32_MAX;
	int32_t x631 = 2;
	int64_t x632 = -1LL;

    t119 = ((x629<=x630)!=(x631*x632));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x634 = -6567;
	uint8_t x635 = 9U;
	uint16_t x636 = 290U;
	int32_t t120 = -804553489;

    t120 = ((x633<=x634)!=(x635*x636));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x638 = 1;
	int16_t x639 = 204;
	int16_t x640 = -1;
	static int32_t t121 = -10857;

    t121 = ((x637<=x638)!=(x639*x640));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static int16_t x646 = INT16_MAX;
	static int8_t x647 = INT8_MIN;
	int8_t x648 = INT8_MIN;

    t122 = ((x645<=x646)!=(x647*x648));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x649 = UINT8_MAX;
	volatile int16_t x650 = INT16_MAX;
	int16_t x651 = 137;
	static uint64_t x652 = 2470633254782630LLU;

    t123 = ((x649<=x650)!=(x651*x652));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x653 = INT32_MIN;
	int8_t x655 = INT8_MIN;
	int8_t x656 = INT8_MAX;
	volatile int32_t t124 = 7059;

    t124 = ((x653<=x654)!=(x655*x656));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x657 = 358LLU;
	uint16_t x658 = 21273U;
	volatile int8_t x659 = INT8_MIN;
	int32_t t125 = -59621;

    t125 = ((x657<=x658)!=(x659*x660));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x661 = 377317LLU;
	volatile uint64_t x662 = 238731295379LLU;
	int16_t x663 = -1;
	static int64_t x664 = -94546177905LL;

    t126 = ((x661<=x662)!=(x663*x664));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x666 = INT32_MIN;
	int16_t x667 = INT16_MIN;
	int16_t x668 = 272;
	int32_t t127 = -814361;

    t127 = ((x665<=x666)!=(x667*x668));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x670 = INT32_MIN;
	uint64_t x671 = 24092889223768363LLU;
	int64_t x672 = INT64_MIN;
	int32_t t128 = -12888;

    t128 = ((x669<=x670)!=(x671*x672));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x677 = 2531256LL;
	uint16_t x678 = 5328U;
	uint32_t x679 = 38540U;
	int8_t x680 = -1;
	int32_t t129 = -1133463;

    t129 = ((x677<=x678)!=(x679*x680));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x681 = 37;
	int32_t x683 = -11227085;
	int32_t x684 = -1;
	volatile int32_t t130 = -14456519;

    t130 = ((x681<=x682)!=(x683*x684));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x686 = 2447408;
	uint16_t x688 = 12U;
	int32_t t131 = -1;

    t131 = ((x685<=x686)!=(x687*x688));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x691 = INT16_MAX;
	int8_t x692 = -7;

    t132 = ((x689<=x690)!=(x691*x692));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x693 = 82U;
	int64_t x694 = 1031885092LL;
	static int32_t x695 = -15702;
	volatile int16_t x696 = -3;
	static volatile int32_t t133 = 114;

    t133 = ((x693<=x694)!=(x695*x696));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x706 = -1;
	int16_t x707 = -1;
	uint8_t x708 = 16U;
	int32_t t134 = -202;

    t134 = ((x705<=x706)!=(x707*x708));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x710 = INT16_MIN;
	int8_t x711 = INT8_MAX;
	int32_t t135 = -470909545;

    t135 = ((x709<=x710)!=(x711*x712));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x716 = -1;

    t136 = ((x713<=x714)!=(x715*x716));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x717 = INT64_MIN;
	uint16_t x718 = 65U;
	int16_t x719 = INT16_MIN;
	static int32_t t137 = -2870;

    t137 = ((x717<=x718)!=(x719*x720));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x721 = -30;
	uint8_t x722 = 23U;
	int16_t x724 = 95;
	volatile int32_t t138 = -907;

    t138 = ((x721<=x722)!=(x723*x724));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x730 = UINT32_MAX;
	int16_t x731 = -55;
	int8_t x732 = INT8_MAX;

    t139 = ((x729<=x730)!=(x731*x732));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x733 = UINT64_MAX;
	uint64_t x736 = 66475947905LLU;
	static int32_t t140 = 3;

    t140 = ((x733<=x734)!=(x735*x736));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x744 = 2732713255991491LLU;
	int32_t t141 = -1;

    t141 = ((x741<=x742)!=(x743*x744));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x754 = 189;
	uint32_t x755 = UINT32_MAX;
	volatile uint16_t x756 = 555U;

    t142 = ((x753<=x754)!=(x755*x756));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x763 = 4U;
	int16_t x764 = INT16_MIN;
	static volatile int32_t t143 = -76960237;

    t143 = ((x761<=x762)!=(x763*x764));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x773 = INT16_MAX;
	int16_t x774 = -1;
	int16_t x775 = 1;
	int32_t x776 = INT32_MAX;
	int32_t t144 = 738;

    t144 = ((x773<=x774)!=(x775*x776));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x785 = -1;
	int64_t x786 = INT64_MIN;
	static int16_t x787 = 60;
	uint16_t x788 = UINT16_MAX;
	volatile int32_t t145 = 97;

    t145 = ((x785<=x786)!=(x787*x788));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x789 = INT64_MIN;
	static int32_t x790 = 3;
	int32_t x792 = INT32_MAX;
	static int32_t t146 = 59;

    t146 = ((x789<=x790)!=(x791*x792));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x793 = INT8_MIN;
	int16_t x794 = 957;
	uint64_t x795 = 1045721853LLU;
	uint8_t x796 = 26U;
	volatile int32_t t147 = -6;

    t147 = ((x793<=x794)!=(x795*x796));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int8_t x797 = 0;
	uint32_t x798 = 78296U;
	uint64_t x799 = UINT64_MAX;
	static int8_t x800 = INT8_MIN;
	volatile int32_t t148 = -199385627;

    t148 = ((x797<=x798)!=(x799*x800));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x802 = -1LL;
	static int16_t x803 = INT16_MIN;
	static int32_t t149 = -3;

    t149 = ((x801<=x802)!=(x803*x804));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x805 = UINT32_MAX;
	volatile int16_t x806 = -1;
	static uint16_t x807 = UINT16_MAX;
	int16_t x808 = INT16_MIN;
	volatile int32_t t150 = -78;

    t150 = ((x805<=x806)!=(x807*x808));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x809 = -1;
	int16_t x810 = -3836;
	int16_t x811 = -3822;
	int32_t x812 = -1;
	volatile int32_t t151 = -6;

    t151 = ((x809<=x810)!=(x811*x812));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x813 = 8119100398LLU;
	volatile int16_t x815 = INT16_MIN;
	uint32_t x816 = 3693U;

    t152 = ((x813<=x814)!=(x815*x816));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x821 = INT16_MIN;
	static uint8_t x823 = UINT8_MAX;
	int64_t x824 = 443626679374LL;
	static int32_t t153 = 31359140;

    t153 = ((x821<=x822)!=(x823*x824));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x829 = 4U;
	int8_t x830 = -1;
	uint16_t x831 = UINT16_MAX;
	int32_t x832 = -1;
	static int32_t t154 = -489;

    t154 = ((x829<=x830)!=(x831*x832));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint16_t x833 = 26U;
	uint32_t x834 = UINT32_MAX;
	volatile int16_t x835 = INT16_MAX;
	int64_t x836 = 24667532LL;

    t155 = ((x833<=x834)!=(x835*x836));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x842 = 1757U;
	int8_t x843 = INT8_MIN;
	volatile uint32_t x844 = 4U;
	volatile int32_t t156 = -14003;

    t156 = ((x841<=x842)!=(x843*x844));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x846 = 4866163854734LL;
	volatile int32_t x847 = -1;
	volatile int8_t x848 = -24;
	volatile int32_t t157 = 129373893;

    t157 = ((x845<=x846)!=(x847*x848));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x849 = 203U;
	uint16_t x850 = UINT16_MAX;
	int64_t x851 = -1LL;
	int8_t x852 = INT8_MIN;
	static volatile int32_t t158 = -3741813;

    t158 = ((x849<=x850)!=(x851*x852));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x865 = 14U;
	int8_t x867 = INT8_MIN;
	int8_t x868 = -1;
	static int32_t t159 = -38296;

    t159 = ((x865<=x866)!=(x867*x868));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int32_t x873 = 323;
	static int16_t x874 = -16;
	static volatile int8_t x875 = INT8_MAX;
	int8_t x876 = 1;
	int32_t t160 = 309;

    t160 = ((x873<=x874)!=(x875*x876));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x877 = 62U;
	uint8_t x878 = 27U;
	uint64_t x879 = UINT64_MAX;
	volatile uint16_t x880 = UINT16_MAX;

    t161 = ((x877<=x878)!=(x879*x880));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x881 = -6;
	int8_t x882 = -3;
	uint64_t x883 = UINT64_MAX;
	static int16_t x884 = 900;

    t162 = ((x881<=x882)!=(x883*x884));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x890 = 3352;
	int32_t x891 = -4220618;
	uint64_t x892 = 442159736901LLU;
	static volatile int32_t t163 = -795;

    t163 = ((x889<=x890)!=(x891*x892));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x893 = -57053810;
	volatile int16_t x895 = INT16_MIN;
	int8_t x896 = INT8_MIN;

    t164 = ((x893<=x894)!=(x895*x896));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x909 = INT64_MIN;
	volatile int16_t x910 = 1;
	uint64_t x911 = UINT64_MAX;
	int64_t x912 = INT64_MIN;

    t165 = ((x909<=x910)!=(x911*x912));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x913 = 112U;
	uint16_t x914 = 31685U;
	static int16_t x915 = 13;
	int16_t x916 = 1;
	static volatile int32_t t166 = 15662;

    t166 = ((x913<=x914)!=(x915*x916));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x917 = UINT32_MAX;
	int16_t x918 = INT16_MAX;
	int32_t x920 = INT32_MIN;
	volatile int32_t t167 = -48;

    t167 = ((x917<=x918)!=(x919*x920));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x925 = -8;
	static uint32_t x928 = 500532U;

    t168 = ((x925<=x926)!=(x927*x928));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x930 = UINT16_MAX;
	uint64_t x931 = 2766282LLU;
	int16_t x932 = INT16_MIN;
	volatile int32_t t169 = 25;

    t169 = ((x929<=x930)!=(x931*x932));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int8_t x933 = INT8_MAX;
	uint32_t x934 = 1071U;
	static uint8_t x935 = UINT8_MAX;
	int32_t x936 = 195817;
	static volatile int32_t t170 = -13;

    t170 = ((x933<=x934)!=(x935*x936));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x937 = UINT64_MAX;
	int16_t x938 = 5;
	int64_t x939 = -1LL;
	int32_t t171 = 1988927;

    t171 = ((x937<=x938)!=(x939*x940));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint32_t x945 = 138635146U;
	volatile int64_t x946 = INT64_MIN;
	static volatile int32_t x948 = 2;
	int32_t t172 = 213316;

    t172 = ((x945<=x946)!=(x947*x948));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x949 = 190U;
	int8_t x950 = INT8_MIN;
	uint16_t x951 = 5U;
	volatile int32_t t173 = -478621219;

    t173 = ((x949<=x950)!=(x951*x952));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x953 = INT32_MIN;
	uint16_t x954 = 64U;
	int16_t x955 = INT16_MIN;

    t174 = ((x953<=x954)!=(x955*x956));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x958 = -4;
	int8_t x960 = INT8_MIN;
	volatile int32_t t175 = 305180;

    t175 = ((x957<=x958)!=(x959*x960));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x965 = 483U;
	int64_t x966 = INT64_MIN;
	static volatile int16_t x967 = INT16_MIN;
	uint8_t x968 = 0U;

    t176 = ((x965<=x966)!=(x967*x968));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x969 = -1;
	static uint8_t x970 = 0U;
	volatile int8_t x971 = INT8_MAX;

    t177 = ((x969<=x970)!=(x971*x972));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x974 = INT64_MAX;
	volatile int64_t x975 = -1LL;
	uint8_t x976 = UINT8_MAX;
	static int32_t t178 = -470472;

    t178 = ((x973<=x974)!=(x975*x976));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x982 = INT32_MIN;
	int64_t x983 = -1LL;
	volatile int32_t t179 = 1797;

    t179 = ((x981<=x982)!=(x983*x984));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x985 = 117774LLU;
	static uint8_t x986 = 8U;
	uint32_t x987 = UINT32_MAX;
	static int32_t t180 = -1;

    t180 = ((x985<=x986)!=(x987*x988));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x989 = -3;
	static int16_t x990 = INT16_MAX;
	int16_t x991 = 20;
	int8_t x992 = INT8_MIN;

    t181 = ((x989<=x990)!=(x991*x992));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x993 = -1LL;
	int64_t x996 = -1LL;
	int32_t t182 = 73288625;

    t182 = ((x993<=x994)!=(x995*x996));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x997 = 62U;
	static volatile int8_t x998 = INT8_MIN;
	int64_t x999 = 1LL;
	int32_t t183 = -3;

    t183 = ((x997<=x998)!=(x999*x1000));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1005 = -1;
	static int32_t x1006 = INT32_MIN;
	volatile int16_t x1007 = 407;
	static uint8_t x1008 = UINT8_MAX;

    t184 = ((x1005<=x1006)!=(x1007*x1008));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1009 = -14092;
	int16_t x1010 = INT16_MIN;
	uint8_t x1011 = UINT8_MAX;
	static int16_t x1012 = -1;
	static volatile int32_t t185 = 12;

    t185 = ((x1009<=x1010)!=(x1011*x1012));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int8_t x1013 = INT8_MAX;
	int64_t x1015 = INT64_MIN;
	uint8_t x1016 = 0U;

    t186 = ((x1013<=x1014)!=(x1015*x1016));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1021 = 48;
	uint32_t x1022 = UINT32_MAX;
	uint8_t x1023 = 23U;
	volatile uint16_t x1024 = 12U;
	volatile int32_t t187 = 389275985;

    t187 = ((x1021<=x1022)!=(x1023*x1024));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1025 = UINT64_MAX;
	int64_t x1027 = INT64_MAX;
	volatile int16_t x1028 = -1;
	int32_t t188 = 463422;

    t188 = ((x1025<=x1026)!=(x1027*x1028));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x1029 = 367;
	int16_t x1030 = INT16_MIN;
	uint64_t x1032 = 162LLU;
	volatile int32_t t189 = 2771596;

    t189 = ((x1029<=x1030)!=(x1031*x1032));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1033 = INT64_MIN;
	int64_t x1034 = -1666LL;
	int32_t t190 = -431014399;

    t190 = ((x1033<=x1034)!=(x1035*x1036));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1037 = INT8_MIN;
	static int16_t x1038 = INT16_MIN;
	uint8_t x1039 = UINT8_MAX;
	uint32_t x1040 = 19U;

    t191 = ((x1037<=x1038)!=(x1039*x1040));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x1042 = -1;
	static int64_t x1043 = -2993972619799578402LL;
	static uint64_t x1044 = 31437475LLU;
	volatile int32_t t192 = 949073;

    t192 = ((x1041<=x1042)!=(x1043*x1044));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1045 = 12085301U;
	static uint8_t x1046 = 53U;
	int8_t x1048 = INT8_MAX;
	volatile int32_t t193 = 30295542;

    t193 = ((x1045<=x1046)!=(x1047*x1048));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1053 = 3;
	uint64_t x1054 = 1497557721991LLU;
	uint32_t x1056 = 204U;
	volatile int32_t t194 = -10087;

    t194 = ((x1053<=x1054)!=(x1055*x1056));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1065 = UINT8_MAX;
	int16_t x1066 = -2;
	int32_t x1067 = INT32_MIN;
	uint64_t x1068 = 348179165LLU;

    t195 = ((x1065<=x1066)!=(x1067*x1068));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile uint32_t x1069 = 1081U;
	int32_t x1070 = INT32_MAX;
	static uint8_t x1072 = 15U;
	volatile int32_t t196 = 4207541;

    t196 = ((x1069<=x1070)!=(x1071*x1072));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1073 = INT16_MIN;
	static uint16_t x1074 = 9U;
	uint64_t x1075 = UINT64_MAX;
	uint16_t x1076 = 2909U;
	static int32_t t197 = 879677715;

    t197 = ((x1073<=x1074)!=(x1075*x1076));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1077 = 2965538736889LL;
	int64_t x1080 = 660235LL;
	int32_t t198 = 140;

    t198 = ((x1077<=x1078)!=(x1079*x1080));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1081 = UINT8_MAX;
	volatile int64_t x1082 = INT64_MIN;
	int32_t x1083 = 2;
	volatile int32_t x1084 = -140933405;
	int32_t t199 = -51462192;

    t199 = ((x1081<=x1082)!=(x1083*x1084));

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

