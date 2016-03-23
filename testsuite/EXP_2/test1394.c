
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

uint32_t x1 = UINT32_MAX;
static volatile uint64_t x4 = UINT64_MAX;
int32_t x8 = INT32_MAX;
int16_t x10 = 1216;
int16_t x12 = -1;
int64_t x19 = 3939589LL;
volatile int32_t t4 = 1049;
uint32_t x22 = UINT32_MAX;
int16_t x26 = -274;
int16_t x27 = INT16_MIN;
int16_t x29 = -8;
int32_t t7 = -9;
volatile int32_t t10 = -40;
volatile int32_t t11 = 431;
int64_t x55 = -1LL;
uint8_t x65 = UINT8_MAX;
static uint16_t x67 = 4U;
uint64_t x68 = 37276080LLU;
int32_t t16 = 55125819;
static int8_t x80 = -1;
static int16_t x81 = INT16_MIN;
int8_t x83 = INT8_MAX;
uint64_t x84 = 607877590542LLU;
uint16_t x91 = 189U;
uint64_t x92 = 11LLU;
int32_t t21 = -7;
int8_t x98 = -1;
volatile uint16_t x99 = 4523U;
static int16_t x106 = INT16_MAX;
uint8_t x117 = UINT8_MAX;
uint32_t x118 = 89U;
volatile int32_t t28 = -1987;
static int8_t x124 = INT8_MIN;
volatile int32_t t29 = 1;
int64_t x125 = -277628LL;
int8_t x128 = INT8_MIN;
int32_t x133 = -48561057;
uint32_t x142 = 244696U;
static int16_t x146 = 37;
static volatile int32_t t35 = 218;
int32_t x154 = -1;
int16_t x158 = 5526;
int16_t x159 = -495;
int8_t x160 = INT8_MIN;
volatile int32_t t38 = 65916884;
int32_t x164 = -1;
volatile int64_t x165 = -2061967LL;
int64_t x169 = -1LL;
static int32_t x170 = INT32_MAX;
int64_t x173 = INT64_MAX;
int32_t x178 = -1;
int64_t x183 = INT64_MAX;
static int8_t x186 = INT8_MIN;
volatile int16_t x193 = 7;
uint64_t x194 = 1492039874216879LLU;
uint32_t x200 = 24917744U;
uint32_t x201 = 102177U;
int16_t x203 = 11;
volatile int32_t x205 = -1;
static int64_t x207 = -1LL;
volatile int16_t x223 = INT16_MAX;
int64_t x225 = 13LL;
uint64_t x229 = 4344565678616LLU;
int16_t x231 = 172;
int16_t x235 = -23;
int32_t x239 = -53130430;
uint64_t x242 = 8527169016LLU;
volatile int16_t x243 = INT16_MAX;
uint8_t x244 = 15U;
uint32_t x248 = 28359871U;
uint32_t x252 = UINT32_MAX;
static int16_t x259 = INT16_MIN;
int32_t x260 = INT32_MIN;
static int32_t x264 = 2107;
static int32_t t64 = 675832;
int32_t x268 = -10;
static volatile int32_t t65 = 209370725;
static int8_t x273 = INT8_MIN;
volatile uint8_t x276 = 92U;
static volatile int32_t t70 = 215;
int8_t x289 = INT8_MIN;
volatile int32_t t71 = 0;
uint16_t x294 = UINT16_MAX;
uint64_t x296 = UINT64_MAX;
volatile int32_t t72 = -1;
int32_t x297 = 777;
uint64_t x301 = UINT64_MAX;
static uint64_t x304 = 128684505624401764LLU;
int32_t x314 = -1;
int8_t x316 = INT8_MIN;
int32_t t77 = 3339029;
uint8_t x324 = 0U;
int32_t t81 = -230088;
int32_t t83 = -4182859;
uint8_t x341 = 0U;
int64_t x352 = INT64_MIN;
volatile int32_t x361 = -3;
int32_t x364 = INT32_MAX;
uint8_t x368 = UINT8_MAX;
int8_t x374 = -1;
int64_t x375 = -137LL;
static volatile int64_t x377 = -1LL;
static int64_t x380 = -3029195901LL;
int32_t t93 = -10;
static uint16_t x382 = UINT16_MAX;
int16_t x384 = -1;
static int32_t x394 = -49;
volatile int32_t t98 = -130235376;
int16_t x403 = INT16_MIN;
static int32_t t99 = -2396368;
uint64_t x407 = 1062192787770LLU;
volatile int32_t x410 = INT32_MIN;
uint32_t x413 = UINT32_MAX;
int32_t t103 = 7;
int32_t t104 = 0;
uint64_t x431 = 1578LLU;
volatile int32_t t108 = -4606;
static uint16_t x444 = 19U;
int32_t t109 = -2200848;
int8_t x445 = INT8_MIN;
int32_t x446 = 459485851;
int8_t x452 = INT8_MIN;
uint8_t x454 = 104U;
uint64_t x459 = 173050075LLU;
uint16_t x460 = 115U;
int32_t t113 = 111700230;
static volatile int8_t x464 = -1;
int8_t x465 = INT8_MIN;
int8_t x467 = INT8_MAX;
int16_t x475 = 2340;
int64_t x479 = 0LL;
static int64_t x482 = -479066923167LL;
static volatile int64_t x495 = -1LL;
int32_t t122 = 100;
uint64_t x501 = 111184599239035172LLU;
volatile int32_t x505 = 22;
uint64_t x509 = 112LLU;
int16_t x518 = -3;
int16_t x519 = INT16_MIN;
int32_t t130 = -1;
uint64_t x529 = 7597123403516182LLU;
int64_t x530 = INT64_MIN;
int64_t x532 = INT64_MIN;
static int8_t x533 = -1;
uint8_t x538 = UINT8_MAX;
int32_t x547 = INT32_MIN;
static uint64_t x548 = 50323272443915LLU;
int16_t x550 = INT16_MAX;
uint16_t x577 = 462U;
static uint16_t x581 = 1364U;
int8_t x589 = 3;
volatile uint32_t x594 = UINT32_MAX;
int64_t x599 = INT64_MAX;
volatile int32_t t151 = 9259423;
static int32_t t152 = 192059;
int64_t x618 = -83593368936LL;
volatile int32_t t154 = -162;
static uint32_t x629 = UINT32_MAX;
static int16_t x630 = -623;
volatile int32_t t156 = 5;
uint8_t x638 = 9U;
uint64_t x643 = UINT64_MAX;
uint32_t x645 = 255U;
int8_t x658 = INT8_MIN;
int64_t x670 = INT64_MIN;
static volatile int16_t x671 = -71;
static uint64_t x675 = 3413093LLU;
uint8_t x676 = 120U;
uint32_t x677 = 0U;
int16_t x687 = INT16_MAX;
int32_t t170 = -718;
static uint64_t x691 = 833073841LLU;
int64_t x695 = INT64_MAX;
int16_t x700 = -112;
int16_t x703 = INT16_MIN;
volatile int64_t x710 = INT64_MAX;
volatile int16_t x713 = INT16_MIN;
uint32_t x715 = 30U;
int16_t x716 = INT16_MIN;
uint32_t x718 = UINT32_MAX;
volatile int32_t t178 = -11536;
int8_t x727 = 26;
static volatile int32_t t180 = -127579;
int16_t x730 = INT16_MIN;
int16_t x741 = INT16_MAX;
uint8_t x742 = UINT8_MAX;
volatile int32_t x746 = INT32_MAX;
uint8_t x755 = 4U;
int64_t x758 = INT64_MIN;
uint16_t x762 = UINT16_MAX;
int8_t x767 = INT8_MIN;
static int32_t x779 = 3;
uint8_t x783 = 1U;
uint16_t x785 = 94U;
volatile int32_t x789 = 1124;
static int16_t x793 = INT16_MIN;
int32_t t197 = 98837872;
int64_t x798 = INT64_MIN;
int64_t x799 = 51219818444185433LL;
uint32_t x800 = UINT32_MAX;


void f0(void) {
    	static volatile int8_t x2 = -58;
	static int8_t x3 = -27;
	static int32_t t0 = -836532449;

    t0 = ((x1-(x2==x3))==x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 22U;
	int64_t x6 = 6806484542364083LL;
	int8_t x7 = 1;
	int32_t t1 = -29;

    t1 = ((x5-(x6==x7))==x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x9 = 0;
	static uint16_t x11 = UINT16_MAX;
	int32_t t2 = 941629211;

    t2 = ((x9-(x10==x11))==x12);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	static uint64_t x14 = 249086155LLU;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -50;

    t3 = ((x13-(x14==x15))==x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x17 = 20247U;
	static uint32_t x18 = 40450U;
	uint64_t x20 = 15291729989879024LLU;

    t4 = ((x17-(x18==x19))==x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = INT8_MAX;
	int32_t x23 = -1;
	volatile uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -251;

    t5 = ((x21-(x22==x23))==x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x25 = UINT16_MAX;
	int16_t x28 = INT16_MAX;
	static int32_t t6 = -27898;

    t6 = ((x25-(x26==x27))==x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = 476;
	int8_t x31 = INT8_MAX;
	int64_t x32 = -1LL;

    t7 = ((x29-(x30==x31))==x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x33 = 87U;
	static uint64_t x34 = UINT64_MAX;
	int64_t x35 = -3LL;
	static int16_t x36 = INT16_MAX;
	int32_t t8 = -16100;

    t8 = ((x33-(x34==x35))==x36);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x37 = 47U;
	int16_t x38 = -8513;
	volatile int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MAX;
	int32_t t9 = 3976381;

    t9 = ((x37-(x38==x39))==x40);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x41 = -1LL;
	static int8_t x42 = INT8_MAX;
	uint32_t x43 = UINT32_MAX;
	static int8_t x44 = INT8_MIN;

    t10 = ((x41-(x42==x43))==x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x45 = UINT32_MAX;
	int64_t x46 = -1LL;
	int64_t x47 = 199748LL;
	volatile int16_t x48 = INT16_MIN;

    t11 = ((x45-(x46==x47))==x48);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 2U;
	int32_t x50 = -1;
	static uint32_t x51 = 2471U;
	static volatile uint8_t x52 = 7U;
	int32_t t12 = -25906;

    t12 = ((x49-(x50==x51))==x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x53 = UINT64_MAX;
	int32_t x54 = -63350;
	uint8_t x56 = UINT8_MAX;
	int32_t t13 = 83;

    t13 = ((x53-(x54==x55))==x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = 1855;
	volatile int64_t x58 = -1999209010138999LL;
	int64_t x59 = INT64_MIN;
	static int32_t x60 = -1;
	volatile int32_t t14 = -14;

    t14 = ((x57-(x58==x59))==x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = 0;
	int8_t x62 = INT8_MIN;
	static volatile int32_t x63 = INT32_MIN;
	static volatile int8_t x64 = INT8_MAX;
	volatile int32_t t15 = -250133375;

    t15 = ((x61-(x62==x63))==x64);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x66 = 0U;

    t16 = ((x65-(x66==x67))==x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -192;
	uint64_t x74 = 967LLU;
	int64_t x75 = INT64_MIN;
	static int32_t x76 = 0;
	volatile int32_t t17 = -3185;

    t17 = ((x73-(x74==x75))==x76);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x77 = 912715429U;
	static int16_t x78 = INT16_MIN;
	uint64_t x79 = UINT64_MAX;
	static int32_t t18 = -113588487;

    t18 = ((x77-(x78==x79))==x80);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x82 = UINT64_MAX;
	int32_t t19 = 12;

    t19 = ((x81-(x82==x83))==x84);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = INT32_MIN;
	static uint64_t x86 = UINT64_MAX;
	int64_t x87 = INT64_MAX;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t20 = 89507;

    t20 = ((x85-(x86==x87))==x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x89 = 1963660653U;
	volatile int32_t x90 = 970237;

    t21 = ((x89-(x90==x91))==x92);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x93 = 52U;
	uint64_t x94 = 213189244540LLU;
	int64_t x95 = INT64_MIN;
	uint8_t x96 = UINT8_MAX;
	static volatile int32_t t22 = 41049824;

    t22 = ((x93-(x94==x95))==x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x97 = -1;
	int64_t x100 = -1LL;
	volatile int32_t t23 = -1782;

    t23 = ((x97-(x98==x99))==x100);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x101 = 7U;
	uint64_t x102 = 90950690491874347LLU;
	uint16_t x103 = 34U;
	int16_t x104 = INT16_MIN;
	volatile int32_t t24 = 1663225;

    t24 = ((x101-(x102==x103))==x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x105 = 1021579321828636771LLU;
	int32_t x107 = 43;
	uint64_t x108 = 771124634762160806LLU;
	int32_t t25 = -232202;

    t25 = ((x105-(x106==x107))==x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x109 = 905860382U;
	uint16_t x110 = 27U;
	int16_t x111 = -1;
	volatile int16_t x112 = INT16_MIN;
	int32_t t26 = 477;

    t26 = ((x109-(x110==x111))==x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x113 = 2U;
	uint8_t x114 = 2U;
	int64_t x115 = -4634176971LL;
	int32_t x116 = INT32_MIN;
	int32_t t27 = 58570170;

    t27 = ((x113-(x114==x115))==x116);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int16_t x119 = 245;
	static int64_t x120 = INT64_MIN;

    t28 = ((x117-(x118==x119))==x120);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x121 = 10;
	int32_t x122 = INT32_MIN;
	volatile int8_t x123 = INT8_MIN;

    t29 = ((x121-(x122==x123))==x124);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x126 = INT64_MIN;
	int64_t x127 = 45489867616854631LL;
	volatile int32_t t30 = 73;

    t30 = ((x125-(x126==x127))==x128);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int64_t x129 = -116LL;
	int64_t x130 = 3039LL;
	uint16_t x131 = UINT16_MAX;
	static int16_t x132 = INT16_MAX;
	static volatile int32_t t31 = 3;

    t31 = ((x129-(x130==x131))==x132);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int64_t x134 = INT64_MAX;
	volatile int16_t x135 = INT16_MIN;
	volatile int64_t x136 = INT64_MIN;
	int32_t t32 = -56392729;

    t32 = ((x133-(x134==x135))==x136);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 1800327U;
	volatile uint8_t x138 = UINT8_MAX;
	int32_t x139 = 0;
	int16_t x140 = -1;
	volatile int32_t t33 = 531036152;

    t33 = ((x137-(x138==x139))==x140);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x141 = UINT16_MAX;
	volatile uint16_t x143 = 10401U;
	int16_t x144 = INT16_MAX;
	int32_t t34 = -195;

    t34 = ((x141-(x142==x143))==x144);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x145 = -1LL;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 821U;

    t35 = ((x145-(x146==x147))==x148);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x149 = 2723487U;
	int32_t x150 = -1;
	int8_t x151 = INT8_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile int32_t t36 = -12208455;

    t36 = ((x149-(x150==x151))==x152);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x153 = 1;
	uint64_t x155 = UINT64_MAX;
	int16_t x156 = INT16_MIN;
	static int32_t t37 = 1032223;

    t37 = ((x153-(x154==x155))==x156);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x157 = -83419;

    t38 = ((x157-(x158==x159))==x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x161 = 2LLU;
	int16_t x162 = INT16_MIN;
	int32_t x163 = -504557;
	static int32_t t39 = 1;

    t39 = ((x161-(x162==x163))==x164);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x166 = UINT16_MAX;
	static volatile uint32_t x167 = 65002U;
	volatile uint16_t x168 = 10678U;
	int32_t t40 = 516182;

    t40 = ((x165-(x166==x167))==x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile uint16_t x171 = 2774U;
	static int8_t x172 = -11;
	volatile int32_t t41 = -399474312;

    t41 = ((x169-(x170==x171))==x172);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x174 = -1;
	static int16_t x175 = INT16_MIN;
	int8_t x176 = -35;
	volatile int32_t t42 = 470512;

    t42 = ((x173-(x174==x175))==x176);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x177 = INT64_MIN;
	volatile int8_t x179 = 2;
	static uint8_t x180 = 63U;
	int32_t t43 = 1011;

    t43 = ((x177-(x178==x179))==x180);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x181 = INT16_MAX;
	uint8_t x182 = 13U;
	uint64_t x184 = 23672541919766LLU;
	int32_t t44 = -5008266;

    t44 = ((x181-(x182==x183))==x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x185 = -24;
	uint32_t x187 = UINT32_MAX;
	int64_t x188 = -45744494605134LL;
	volatile int32_t t45 = -10090;

    t45 = ((x185-(x186==x187))==x188);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = -1;
	int8_t x190 = -1;
	int32_t x191 = 946;
	int64_t x192 = INT64_MIN;
	int32_t t46 = -59932;

    t46 = ((x189-(x190==x191))==x192);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int64_t x195 = INT64_MIN;
	int32_t x196 = -509443;
	static volatile int32_t t47 = -7;

    t47 = ((x193-(x194==x195))==x196);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x197 = UINT32_MAX;
	volatile int16_t x198 = INT16_MIN;
	int32_t x199 = INT32_MIN;
	volatile int32_t t48 = -2102;

    t48 = ((x197-(x198==x199))==x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x202 = INT8_MIN;
	int64_t x204 = INT64_MIN;
	volatile int32_t t49 = -14148782;

    t49 = ((x201-(x202==x203))==x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x206 = UINT16_MAX;
	volatile uint64_t x208 = 29LLU;
	static int32_t t50 = -9693;

    t50 = ((x205-(x206==x207))==x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x209 = -14489423931673603LL;
	int8_t x210 = -1;
	volatile int8_t x211 = -2;
	uint32_t x212 = 0U;
	volatile int32_t t51 = 251368;

    t51 = ((x209-(x210==x211))==x212);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MAX;
	int16_t x215 = INT16_MAX;
	int64_t x216 = INT64_MAX;
	static int32_t t52 = -57554;

    t52 = ((x213-(x214==x215))==x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x217 = -1773981LL;
	int32_t x218 = INT32_MIN;
	int32_t x219 = INT32_MIN;
	int16_t x220 = 23;
	volatile int32_t t53 = 131549947;

    t53 = ((x217-(x218==x219))==x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x221 = INT64_MIN;
	int32_t x222 = -1;
	static volatile uint32_t x224 = 71293U;
	int32_t t54 = -489;

    t54 = ((x221-(x222==x223))==x224);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x226 = INT8_MIN;
	static int8_t x227 = -1;
	static volatile int8_t x228 = -27;
	int32_t t55 = 604718;

    t55 = ((x225-(x226==x227))==x228);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static int32_t x230 = -1;
	uint8_t x232 = UINT8_MAX;
	volatile int32_t t56 = -1;

    t56 = ((x229-(x230==x231))==x232);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile int16_t x233 = INT16_MIN;
	uint64_t x234 = UINT64_MAX;
	volatile uint8_t x236 = 0U;
	volatile int32_t t57 = 1;

    t57 = ((x233-(x234==x235))==x236);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = INT8_MIN;
	static uint32_t x238 = 379572233U;
	volatile int64_t x240 = -1LL;
	int32_t t58 = 0;

    t58 = ((x237-(x238==x239))==x240);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x241 = 460;
	volatile int32_t t59 = 88;

    t59 = ((x241-(x242==x243))==x244);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x245 = INT32_MIN;
	uint64_t x246 = 50708616319381230LLU;
	int64_t x247 = INT64_MAX;
	volatile int32_t t60 = -1640625;

    t60 = ((x245-(x246==x247))==x248);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x249 = INT64_MIN;
	static int64_t x250 = INT64_MIN;
	static int32_t x251 = INT32_MAX;
	int32_t t61 = -7902173;

    t61 = ((x249-(x250==x251))==x252);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x253 = -878798277LL;
	int8_t x254 = 0;
	int32_t x255 = INT32_MAX;
	int64_t x256 = -1LL;
	int32_t t62 = -1588;

    t62 = ((x253-(x254==x255))==x256);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x257 = -1;
	int16_t x258 = -4669;
	volatile int32_t t63 = -2;

    t63 = ((x257-(x258==x259))==x260);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x261 = INT64_MAX;
	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 201U;

    t64 = ((x261-(x262==x263))==x264);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x265 = INT32_MIN;
	uint16_t x266 = UINT16_MAX;
	static int8_t x267 = INT8_MIN;

    t65 = ((x265-(x266==x267))==x268);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = INT8_MAX;
	static uint8_t x270 = 17U;
	int16_t x271 = -1;
	volatile uint64_t x272 = 361117816097343LLU;
	static volatile int32_t t66 = -375;

    t66 = ((x269-(x270==x271))==x272);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static int64_t x274 = -1LL;
	uint64_t x275 = 5583969610392LLU;
	int32_t t67 = -350429091;

    t67 = ((x273-(x274==x275))==x276);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x277 = INT8_MIN;
	volatile uint64_t x278 = 252072588LLU;
	uint8_t x279 = 2U;
	int64_t x280 = INT64_MAX;
	int32_t t68 = -112716684;

    t68 = ((x277-(x278==x279))==x280);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 7U;
	volatile int16_t x283 = 2;
	uint32_t x284 = 215948U;
	int32_t t69 = -39434;

    t69 = ((x281-(x282==x283))==x284);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x285 = UINT8_MAX;
	static int8_t x286 = INT8_MAX;
	uint16_t x287 = 1411U;
	int8_t x288 = -1;

    t70 = ((x285-(x286==x287))==x288);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x290 = -38863510;
	uint32_t x291 = UINT32_MAX;
	int32_t x292 = INT32_MAX;

    t71 = ((x289-(x290==x291))==x292);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x293 = INT64_MAX;
	volatile int64_t x295 = 956676LL;

    t72 = ((x293-(x294==x295))==x296);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x298 = -1;
	static int16_t x299 = INT16_MIN;
	uint32_t x300 = UINT32_MAX;
	static int32_t t73 = -1;

    t73 = ((x297-(x298==x299))==x300);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x302 = 40U;
	int32_t x303 = INT32_MIN;
	volatile int32_t t74 = 1201;

    t74 = ((x301-(x302==x303))==x304);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x305 = 1U;
	int8_t x306 = -1;
	volatile int8_t x307 = INT8_MAX;
	volatile uint16_t x308 = UINT16_MAX;
	int32_t t75 = -128060;

    t75 = ((x305-(x306==x307))==x308);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x309 = 2;
	volatile int64_t x310 = INT64_MAX;
	int8_t x311 = 61;
	int8_t x312 = -19;
	int32_t t76 = 1;

    t76 = ((x309-(x310==x311))==x312);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x313 = -483020365293925LL;
	uint32_t x315 = 5U;

    t77 = ((x313-(x314==x315))==x316);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint16_t x317 = 52U;
	int16_t x318 = -202;
	static uint64_t x319 = 21741316712636LLU;
	uint8_t x320 = 91U;
	int32_t t78 = -17693;

    t78 = ((x317-(x318==x319))==x320);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x321 = -1;
	static int8_t x322 = 19;
	uint64_t x323 = 1573335455738518LLU;
	int32_t t79 = -27073949;

    t79 = ((x321-(x322==x323))==x324);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = INT8_MAX;
	int32_t x326 = -1393;
	uint8_t x327 = 122U;
	uint8_t x328 = 0U;
	volatile int32_t t80 = -1090823;

    t80 = ((x325-(x326==x327))==x328);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x329 = INT16_MIN;
	int32_t x330 = 1855;
	volatile int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MAX;

    t81 = ((x329-(x330==x331))==x332);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x333 = 532568LLU;
	int16_t x334 = INT16_MAX;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = -1;
	volatile int32_t t82 = 2444253;

    t82 = ((x333-(x334==x335))==x336);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = 1;
	volatile int16_t x338 = INT16_MIN;
	volatile int16_t x339 = INT16_MAX;
	static uint64_t x340 = 7419210854727073LLU;

    t83 = ((x337-(x338==x339))==x340);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x342 = -1LL;
	int64_t x343 = -1LL;
	static uint16_t x344 = 3454U;
	volatile int32_t t84 = 46177919;

    t84 = ((x341-(x342==x343))==x344);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x345 = 8338107LLU;
	uint64_t x346 = 1912LLU;
	int8_t x347 = INT8_MIN;
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t85 = 98857;

    t85 = ((x345-(x346==x347))==x348);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x349 = INT8_MIN;
	uint32_t x350 = 2266U;
	static int8_t x351 = 0;
	int32_t t86 = -3;

    t86 = ((x349-(x350==x351))==x352);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x353 = 2192LL;
	static int8_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int32_t x356 = INT32_MIN;
	static volatile int32_t t87 = -3;

    t87 = ((x353-(x354==x355))==x356);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint16_t x357 = 182U;
	int8_t x358 = INT8_MAX;
	static int16_t x359 = 11;
	volatile int8_t x360 = -1;
	volatile int32_t t88 = -30229543;

    t88 = ((x357-(x358==x359))==x360);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x362 = INT16_MIN;
	int32_t x363 = -3;
	static int32_t t89 = 206586;

    t89 = ((x361-(x362==x363))==x364);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x365 = 81U;
	uint16_t x366 = 3607U;
	static int32_t x367 = INT32_MAX;
	static int32_t t90 = 3968;

    t90 = ((x365-(x366==x367))==x368);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MIN;
	uint8_t x371 = UINT8_MAX;
	volatile int64_t x372 = INT64_MAX;
	volatile int32_t t91 = -4160;

    t91 = ((x369-(x370==x371))==x372);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x373 = 95922121;
	uint16_t x376 = UINT16_MAX;
	int32_t t92 = -5980049;

    t92 = ((x373-(x374==x375))==x376);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x378 = INT8_MIN;
	int64_t x379 = 921789837LL;

    t93 = ((x377-(x378==x379))==x380);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint8_t x381 = 106U;
	int16_t x383 = INT16_MIN;
	volatile int32_t t94 = -51509498;

    t94 = ((x381-(x382==x383))==x384);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x385 = INT64_MIN;
	static int8_t x386 = -1;
	uint32_t x387 = 28712468U;
	int16_t x388 = INT16_MIN;
	int32_t t95 = 2821;

    t95 = ((x385-(x386==x387))==x388);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x389 = INT8_MIN;
	uint32_t x390 = 8949U;
	uint64_t x391 = 783595662LLU;
	uint32_t x392 = 967846U;
	volatile int32_t t96 = 2734;

    t96 = ((x389-(x390==x391))==x392);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = 23446087;
	int16_t x395 = INT16_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t97 = 0;

    t97 = ((x393-(x394==x395))==x396);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	int16_t x399 = -4;
	int8_t x400 = 1;

    t98 = ((x397-(x398==x399))==x400);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x401 = -1LL;
	int32_t x402 = -13310;
	int16_t x404 = INT16_MIN;

    t99 = ((x401-(x402==x403))==x404);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int64_t x405 = INT64_MIN;
	static int16_t x406 = INT16_MIN;
	static uint8_t x408 = 16U;
	volatile int32_t t100 = -166;

    t100 = ((x405-(x406==x407))==x408);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x409 = INT8_MAX;
	int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	static int32_t t101 = -6660423;

    t101 = ((x409-(x410==x411))==x412);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int32_t x414 = -4837;
	static int8_t x415 = INT8_MAX;
	int64_t x416 = 389178756026588LL;
	volatile int32_t t102 = 8;

    t102 = ((x413-(x414==x415))==x416);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x417 = -50385768129312709LL;
	volatile int64_t x418 = INT64_MIN;
	uint64_t x419 = 10036450912LLU;
	int8_t x420 = 7;

    t103 = ((x417-(x418==x419))==x420);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int64_t x421 = INT64_MAX;
	static int32_t x422 = -1183;
	volatile int32_t x423 = 1335;
	volatile int8_t x424 = INT8_MAX;

    t104 = ((x421-(x422==x423))==x424);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x425 = 12LL;
	int8_t x426 = INT8_MIN;
	volatile int64_t x427 = INT64_MAX;
	int64_t x428 = INT64_MIN;
	volatile int32_t t105 = -4162047;

    t105 = ((x425-(x426==x427))==x428);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x429 = 2U;
	static int8_t x430 = -1;
	int32_t x432 = -1;
	int32_t t106 = -1991550;

    t106 = ((x429-(x430==x431))==x432);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x433 = UINT64_MAX;
	int32_t x434 = INT32_MAX;
	int16_t x435 = -1;
	static uint32_t x436 = 1415U;
	int32_t t107 = 1435;

    t107 = ((x433-(x434==x435))==x436);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x437 = INT16_MAX;
	int32_t x438 = 6;
	static volatile uint64_t x439 = UINT64_MAX;
	static volatile int32_t x440 = 2;

    t108 = ((x437-(x438==x439))==x440);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile uint32_t x441 = UINT32_MAX;
	uint32_t x442 = 0U;
	int64_t x443 = -1493777783399LL;

    t109 = ((x441-(x442==x443))==x444);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x447 = INT64_MIN;
	volatile uint8_t x448 = UINT8_MAX;
	static int32_t t110 = -1008551758;

    t110 = ((x445-(x446==x447))==x448);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x449 = UINT64_MAX;
	int64_t x450 = INT64_MIN;
	uint32_t x451 = 6012U;
	int32_t t111 = -21;

    t111 = ((x449-(x450==x451))==x452);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x453 = UINT32_MAX;
	int32_t x455 = 0;
	int64_t x456 = INT64_MIN;
	volatile int32_t t112 = 29819322;

    t112 = ((x453-(x454==x455))==x456);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x457 = 404;
	int16_t x458 = 0;

    t113 = ((x457-(x458==x459))==x460);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint64_t x461 = UINT64_MAX;
	int64_t x462 = INT64_MAX;
	int16_t x463 = -1;
	int32_t t114 = -6;

    t114 = ((x461-(x462==x463))==x464);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x466 = -428;
	static int16_t x468 = -188;
	int32_t t115 = 0;

    t115 = ((x465-(x466==x467))==x468);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x469 = -18433277;
	static uint8_t x470 = 27U;
	int64_t x471 = INT64_MIN;
	int8_t x472 = 0;
	volatile int32_t t116 = -3;

    t116 = ((x469-(x470==x471))==x472);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int8_t x473 = INT8_MAX;
	volatile uint8_t x474 = UINT8_MAX;
	int32_t x476 = -628;
	volatile int32_t t117 = -351182621;

    t117 = ((x473-(x474==x475))==x476);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x477 = INT32_MIN;
	int16_t x478 = INT16_MIN;
	int16_t x480 = -1;
	int32_t t118 = 43132;

    t118 = ((x477-(x478==x479))==x480);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x483 = -1121;
	static volatile uint64_t x484 = UINT64_MAX;
	int32_t t119 = -5;

    t119 = ((x481-(x482==x483))==x484);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x485 = 441U;
	static volatile int8_t x486 = -1;
	static int8_t x487 = 37;
	volatile int8_t x488 = INT8_MIN;
	volatile int32_t t120 = -256356799;

    t120 = ((x485-(x486==x487))==x488);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x489 = 25;
	int32_t x490 = INT32_MIN;
	int64_t x491 = INT64_MIN;
	uint16_t x492 = 38U;
	volatile int32_t t121 = 479;

    t121 = ((x489-(x490==x491))==x492);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x493 = 74464;
	static uint64_t x494 = UINT64_MAX;
	uint32_t x496 = UINT32_MAX;

    t122 = ((x493-(x494==x495))==x496);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x497 = -1;
	volatile int8_t x498 = -13;
	int64_t x499 = INT64_MIN;
	volatile uint64_t x500 = 33950630772LLU;
	volatile int32_t t123 = 34063999;

    t123 = ((x497-(x498==x499))==x500);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x502 = 13U;
	uint32_t x503 = UINT32_MAX;
	static int16_t x504 = INT16_MIN;
	volatile int32_t t124 = 57934616;

    t124 = ((x501-(x502==x503))==x504);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x506 = -3557720246760742719LL;
	static volatile int64_t x507 = 14992776359232142LL;
	int8_t x508 = -1;
	static volatile int32_t t125 = 61495;

    t125 = ((x505-(x506==x507))==x508);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x510 = INT32_MIN;
	int64_t x511 = -357825LL;
	int16_t x512 = -1;
	static volatile int32_t t126 = -37352784;

    t126 = ((x509-(x510==x511))==x512);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x513 = UINT64_MAX;
	int8_t x514 = INT8_MAX;
	int32_t x515 = INT32_MIN;
	int32_t x516 = 572050257;
	volatile int32_t t127 = -3;

    t127 = ((x513-(x514==x515))==x516);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x517 = UINT8_MAX;
	static int16_t x520 = INT16_MAX;
	volatile int32_t t128 = 106;

    t128 = ((x517-(x518==x519))==x520);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x521 = 0;
	static uint32_t x522 = 659334063U;
	int64_t x523 = 779571LL;
	static uint64_t x524 = 4749510722814LLU;
	int32_t t129 = -5;

    t129 = ((x521-(x522==x523))==x524);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x525 = 9325875764382881LL;
	volatile uint64_t x526 = UINT64_MAX;
	static int16_t x527 = 45;
	static int8_t x528 = -1;

    t130 = ((x525-(x526==x527))==x528);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint64_t x531 = 47LLU;
	static int32_t t131 = -5;

    t131 = ((x529-(x530==x531))==x532);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x534 = UINT64_MAX;
	int16_t x535 = -6293;
	static uint8_t x536 = 66U;
	volatile int32_t t132 = -625583382;

    t132 = ((x533-(x534==x535))==x536);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x537 = INT64_MIN;
	static uint64_t x539 = UINT64_MAX;
	int8_t x540 = INT8_MIN;
	static int32_t t133 = 26592;

    t133 = ((x537-(x538==x539))==x540);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x541 = INT64_MIN;
	uint16_t x542 = 85U;
	volatile uint32_t x543 = 906278217U;
	static uint32_t x544 = 25455946U;
	static int32_t t134 = 24705;

    t134 = ((x541-(x542==x543))==x544);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int8_t x545 = INT8_MIN;
	int64_t x546 = INT64_MIN;
	int32_t t135 = 520;

    t135 = ((x545-(x546==x547))==x548);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x549 = 229961302;
	int64_t x551 = INT64_MIN;
	int16_t x552 = INT16_MIN;
	int32_t t136 = 556379;

    t136 = ((x549-(x550==x551))==x552);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x553 = 133;
	int32_t x554 = INT32_MAX;
	int16_t x555 = -37;
	uint64_t x556 = UINT64_MAX;
	volatile int32_t t137 = -370857831;

    t137 = ((x553-(x554==x555))==x556);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x557 = 0;
	int64_t x558 = -1LL;
	uint32_t x559 = UINT32_MAX;
	static uint64_t x560 = 140908886191LLU;
	int32_t t138 = -845514591;

    t138 = ((x557-(x558==x559))==x560);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x561 = -1LL;
	volatile int32_t x562 = INT32_MIN;
	int16_t x563 = -1;
	static int32_t x564 = INT32_MAX;
	volatile int32_t t139 = 1909575;

    t139 = ((x561-(x562==x563))==x564);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x565 = 13U;
	int8_t x566 = INT8_MIN;
	int64_t x567 = 8311132606906LL;
	int64_t x568 = -9513616777LL;
	int32_t t140 = -63;

    t140 = ((x565-(x566==x567))==x568);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x569 = UINT64_MAX;
	uint32_t x570 = 15U;
	int32_t x571 = -1;
	int8_t x572 = -1;
	int32_t t141 = 30933108;

    t141 = ((x569-(x570==x571))==x572);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x573 = 4U;
	volatile uint8_t x574 = UINT8_MAX;
	uint32_t x575 = UINT32_MAX;
	int8_t x576 = INT8_MIN;
	int32_t t142 = 82840;

    t142 = ((x573-(x574==x575))==x576);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x578 = -6;
	int8_t x579 = INT8_MIN;
	uint32_t x580 = 21U;
	int32_t t143 = 30;

    t143 = ((x577-(x578==x579))==x580);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x582 = 12U;
	int8_t x583 = 0;
	int16_t x584 = INT16_MAX;
	int32_t t144 = 3554;

    t144 = ((x581-(x582==x583))==x584);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = -1;
	volatile int8_t x586 = INT8_MAX;
	int8_t x587 = -3;
	volatile int16_t x588 = -1;
	static volatile int32_t t145 = 6144;

    t145 = ((x585-(x586==x587))==x588);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x590 = 46U;
	static int32_t x591 = 39382470;
	int32_t x592 = INT32_MAX;
	volatile int32_t t146 = 165156249;

    t146 = ((x589-(x590==x591))==x592);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x593 = 1;
	uint8_t x595 = UINT8_MAX;
	int8_t x596 = 19;
	volatile int32_t t147 = -217421358;

    t147 = ((x593-(x594==x595))==x596);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x597 = -7;
	int16_t x598 = -31;
	int8_t x600 = -7;
	static int32_t t148 = -10;

    t148 = ((x597-(x598==x599))==x600);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x601 = 22;
	static int8_t x602 = 0;
	uint32_t x603 = 8U;
	int64_t x604 = -1LL;
	volatile int32_t t149 = 78;

    t149 = ((x601-(x602==x603))==x604);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x605 = 2751U;
	static int64_t x606 = 6723714150799LL;
	int16_t x607 = -1;
	static uint16_t x608 = 0U;
	int32_t t150 = -80625212;

    t150 = ((x605-(x606==x607))==x608);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x609 = -1;
	int64_t x610 = 2LL;
	static volatile uint16_t x611 = UINT16_MAX;
	volatile uint32_t x612 = 196053U;

    t151 = ((x609-(x610==x611))==x612);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x613 = -40219636852809098LL;
	int16_t x614 = -1;
	int64_t x615 = -1LL;
	static volatile int64_t x616 = INT64_MIN;

    t152 = ((x613-(x614==x615))==x616);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x617 = 283424U;
	int64_t x619 = 1072653755169LL;
	int64_t x620 = INT64_MIN;
	static int32_t t153 = -1;

    t153 = ((x617-(x618==x619))==x620);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x621 = -1LL;
	int32_t x622 = -80;
	int16_t x623 = INT16_MIN;
	uint8_t x624 = UINT8_MAX;

    t154 = ((x621-(x622==x623))==x624);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x625 = UINT32_MAX;
	int32_t x626 = INT32_MIN;
	uint8_t x627 = 1U;
	uint8_t x628 = 104U;
	volatile int32_t t155 = -3564188;

    t155 = ((x625-(x626==x627))==x628);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint64_t x631 = UINT64_MAX;
	volatile int16_t x632 = INT16_MAX;

    t156 = ((x629-(x630==x631))==x632);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x633 = INT8_MIN;
	int8_t x634 = 59;
	uint64_t x635 = UINT64_MAX;
	int8_t x636 = INT8_MAX;
	volatile int32_t t157 = -6;

    t157 = ((x633-(x634==x635))==x636);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x637 = 37276821U;
	uint8_t x639 = 2U;
	int32_t x640 = INT32_MIN;
	static volatile int32_t t158 = -5147;

    t158 = ((x637-(x638==x639))==x640);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int32_t x641 = 10719767;
	uint16_t x642 = 4311U;
	uint64_t x644 = UINT64_MAX;
	volatile int32_t t159 = 24647544;

    t159 = ((x641-(x642==x643))==x644);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x646 = -1LL;
	int8_t x647 = INT8_MIN;
	static int32_t x648 = INT32_MIN;
	int32_t t160 = -727447;

    t160 = ((x645-(x646==x647))==x648);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x649 = INT16_MIN;
	int16_t x650 = 84;
	volatile int32_t x651 = INT32_MIN;
	int32_t x652 = -8;
	volatile int32_t t161 = -19;

    t161 = ((x649-(x650==x651))==x652);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x653 = 0U;
	static volatile uint64_t x654 = UINT64_MAX;
	int64_t x655 = -63170590LL;
	static uint64_t x656 = 777806609993533385LLU;
	int32_t t162 = 6916;

    t162 = ((x653-(x654==x655))==x656);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x657 = INT64_MAX;
	volatile int8_t x659 = 25;
	int8_t x660 = 4;
	int32_t t163 = -88;

    t163 = ((x657-(x658==x659))==x660);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x661 = -1LL;
	uint64_t x662 = 482101441462LLU;
	int32_t x663 = INT32_MAX;
	uint16_t x664 = UINT16_MAX;
	volatile int32_t t164 = 15;

    t164 = ((x661-(x662==x663))==x664);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x665 = UINT8_MAX;
	int32_t x666 = INT32_MIN;
	volatile int16_t x667 = INT16_MIN;
	int64_t x668 = 324336LL;
	int32_t t165 = 12638;

    t165 = ((x665-(x666==x667))==x668);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int32_t x669 = 528470673;
	volatile int64_t x672 = INT64_MAX;
	static int32_t t166 = -6096932;

    t166 = ((x669-(x670==x671))==x672);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x673 = -1LL;
	int8_t x674 = -1;
	static volatile int32_t t167 = 40059604;

    t167 = ((x673-(x674==x675))==x676);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x678 = -26;
	static int32_t x679 = 28761;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t168 = 84630;

    t168 = ((x677-(x678==x679))==x680);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x681 = INT64_MAX;
	int64_t x682 = INT64_MIN;
	int16_t x683 = -1;
	uint64_t x684 = 546549024719671LLU;
	static volatile int32_t t169 = -5727;

    t169 = ((x681-(x682==x683))==x684);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x685 = INT32_MIN;
	volatile int32_t x686 = INT32_MIN;
	volatile int32_t x688 = -1;

    t170 = ((x685-(x686==x687))==x688);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x689 = UINT32_MAX;
	volatile int64_t x690 = INT64_MIN;
	uint8_t x692 = 49U;
	volatile int32_t t171 = -29456;

    t171 = ((x689-(x690==x691))==x692);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x693 = INT8_MIN;
	int64_t x694 = 7178721LL;
	int64_t x696 = -1LL;
	volatile int32_t t172 = 878314520;

    t172 = ((x693-(x694==x695))==x696);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x697 = -1;
	int8_t x698 = -1;
	static int8_t x699 = -1;
	static int32_t t173 = -205;

    t173 = ((x697-(x698==x699))==x700);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x701 = 13U;
	uint16_t x702 = UINT16_MAX;
	int64_t x704 = -1LL;
	volatile int32_t t174 = 842214;

    t174 = ((x701-(x702==x703))==x704);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x705 = UINT16_MAX;
	uint32_t x706 = 13159U;
	uint8_t x707 = 4U;
	static int16_t x708 = INT16_MIN;
	static volatile int32_t t175 = 6490;

    t175 = ((x705-(x706==x707))==x708);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x709 = 915279160467869LLU;
	int16_t x711 = INT16_MIN;
	uint64_t x712 = 550426752457249825LLU;
	int32_t t176 = 1;

    t176 = ((x709-(x710==x711))==x712);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x714 = -1;
	int32_t t177 = -141111053;

    t177 = ((x713-(x714==x715))==x716);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x717 = INT64_MIN;
	uint32_t x719 = 967822U;
	int16_t x720 = INT16_MAX;

    t178 = ((x717-(x718==x719))==x720);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x721 = 18443U;
	static uint64_t x722 = UINT64_MAX;
	int32_t x723 = INT32_MAX;
	int8_t x724 = INT8_MAX;
	volatile int32_t t179 = -15;

    t179 = ((x721-(x722==x723))==x724);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x725 = -1;
	uint64_t x726 = 1528022826496281068LLU;
	int32_t x728 = INT32_MIN;

    t180 = ((x725-(x726==x727))==x728);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int32_t x729 = INT32_MAX;
	static volatile int8_t x731 = INT8_MIN;
	uint32_t x732 = UINT32_MAX;
	int32_t t181 = 33962613;

    t181 = ((x729-(x730==x731))==x732);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x733 = INT64_MIN;
	int8_t x734 = -1;
	int8_t x735 = 13;
	int32_t x736 = -1;
	int32_t t182 = 36;

    t182 = ((x733-(x734==x735))==x736);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int32_t x737 = -22942440;
	uint32_t x738 = 293273823U;
	volatile int16_t x739 = INT16_MIN;
	volatile uint8_t x740 = 1U;
	int32_t t183 = 8014584;

    t183 = ((x737-(x738==x739))==x740);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x743 = INT16_MIN;
	uint64_t x744 = UINT64_MAX;
	static volatile int32_t t184 = 14196779;

    t184 = ((x741-(x742==x743))==x744);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x745 = -1;
	uint8_t x747 = 0U;
	volatile uint16_t x748 = 493U;
	int32_t t185 = -36;

    t185 = ((x745-(x746==x747))==x748);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x749 = 15U;
	uint32_t x750 = 1U;
	int8_t x751 = -7;
	static uint32_t x752 = UINT32_MAX;
	int32_t t186 = 11;

    t186 = ((x749-(x750==x751))==x752);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int16_t x753 = INT16_MIN;
	int64_t x754 = INT64_MIN;
	volatile int16_t x756 = INT16_MIN;
	volatile int32_t t187 = 167883;

    t187 = ((x753-(x754==x755))==x756);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint16_t x757 = 7U;
	static int32_t x759 = -1;
	int16_t x760 = INT16_MIN;
	volatile int32_t t188 = -26307;

    t188 = ((x757-(x758==x759))==x760);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x761 = -1628;
	uint8_t x763 = 1U;
	volatile uint16_t x764 = 7U;
	static volatile int32_t t189 = 1;

    t189 = ((x761-(x762==x763))==x764);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x765 = INT32_MAX;
	uint64_t x766 = UINT64_MAX;
	volatile int8_t x768 = 7;
	volatile int32_t t190 = 95856504;

    t190 = ((x765-(x766==x767))==x768);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x769 = -3815803915490589LL;
	int16_t x770 = 12;
	int32_t x771 = 17299155;
	int32_t x772 = INT32_MAX;
	int32_t t191 = 0;

    t191 = ((x769-(x770==x771))==x772);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x773 = INT16_MAX;
	uint64_t x774 = UINT64_MAX;
	int8_t x775 = -1;
	int8_t x776 = INT8_MIN;
	volatile int32_t t192 = -22853557;

    t192 = ((x773-(x774==x775))==x776);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x777 = INT32_MAX;
	volatile int8_t x778 = 2;
	int32_t x780 = -1;
	int32_t t193 = 27483;

    t193 = ((x777-(x778==x779))==x780);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x781 = INT64_MIN;
	int8_t x782 = -1;
	int16_t x784 = INT16_MAX;
	static int32_t t194 = -7812;

    t194 = ((x781-(x782==x783))==x784);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x786 = INT16_MIN;
	int8_t x787 = -1;
	static int64_t x788 = 1250837LL;
	int32_t t195 = 1275;

    t195 = ((x785-(x786==x787))==x788);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x790 = UINT16_MAX;
	uint8_t x791 = 7U;
	int32_t x792 = -3779107;
	volatile int32_t t196 = -133272;

    t196 = ((x789-(x790==x791))==x792);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x794 = 1;
	static uint16_t x795 = 0U;
	volatile int32_t x796 = -143080;

    t197 = ((x793-(x794==x795))==x796);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x797 = INT8_MIN;
	volatile int32_t t198 = 247156;

    t198 = ((x797-(x798==x799))==x800);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x801 = 28;
	static int64_t x802 = 201039LL;
	volatile int16_t x803 = 0;
	static uint32_t x804 = 1482540U;
	int32_t t199 = 3;

    t199 = ((x801-(x802==x803))==x804);

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

