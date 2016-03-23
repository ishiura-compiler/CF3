
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

static uint64_t x2 = 944848933086400LLU;
static volatile uint64_t t0 = 292228476200335LLU;
static int16_t x5 = INT16_MAX;
uint8_t x8 = 0U;
static int16_t x16 = 897;
uint64_t t3 = 204716LLU;
int32_t x17 = -1;
int32_t x19 = INT32_MIN;
volatile int64_t x23 = INT64_MIN;
int8_t x24 = -1;
int64_t t5 = -17305368LL;
uint64_t x27 = 36748644520745LLU;
volatile uint64_t t6 = 42935LLU;
uint8_t x29 = 6U;
int32_t x31 = INT32_MAX;
static volatile uint64_t t8 = 24518LLU;
volatile int16_t x48 = INT16_MIN;
static volatile int32_t t9 = 39369569;
volatile int8_t x50 = INT8_MIN;
int64_t x60 = 6291519751LL;
int32_t t14 = 146511969;
int32_t x82 = -1;
int32_t x84 = -458;
volatile int32_t x95 = 793830242;
uint32_t x96 = UINT32_MAX;
int32_t x105 = 1043653908;
int8_t x110 = 61;
int16_t x118 = INT16_MIN;
int32_t t22 = -13214;
int16_t x121 = 0;
int16_t x128 = INT16_MIN;
int64_t x140 = INT64_MIN;
volatile int16_t x149 = 4006;
int64_t x150 = -1LL;
int64_t x171 = -297665540LL;
int64_t t33 = 12LL;
int32_t x173 = 144769915;
uint8_t x175 = UINT8_MAX;
int8_t x176 = INT8_MIN;
static volatile uint32_t x179 = UINT32_MAX;
static int8_t x189 = INT8_MIN;
uint8_t x190 = 13U;
volatile int64_t x193 = -2324108LL;
uint32_t t38 = UINT32_MAX;
volatile int64_t t40 = 2520209LL;
uint64_t t42 = 48589461931259835LLU;
uint64_t x233 = UINT64_MAX;
int8_t x241 = 0;
static int8_t x242 = 7;
int32_t x247 = 95335;
static int64_t x258 = 2583228LL;
static int32_t x272 = 3807442;
volatile int32_t x284 = -3787;
volatile uint64_t t53 = 83LLU;
int16_t x289 = 3;
uint64_t x304 = UINT64_MAX;
static int64_t x313 = -1LL;
volatile int64_t t57 = -226LL;
uint8_t x317 = 20U;
uint64_t t58 = UINT64_MAX;
int16_t x328 = 0;
int16_t x342 = -1;
uint64_t t61 = 5361871637445131LLU;
volatile int64_t t62 = -4447854LL;
volatile int16_t x356 = INT16_MAX;
volatile int64_t t63 = -139562898014147767LL;
volatile int8_t x361 = INT8_MAX;
volatile uint64_t t65 = UINT64_MAX;
int8_t x370 = INT8_MIN;
volatile uint8_t x371 = 6U;
uint8_t x393 = UINT8_MAX;
static int32_t t70 = 1053;
int16_t x401 = 0;
volatile int32_t t71 = -115354516;
static int8_t x408 = 12;
static volatile uint64_t t72 = 3041045023646LLU;
static int16_t x410 = 469;
uint32_t t73 = 65120218U;
int32_t x414 = -1;
volatile int64_t t74 = 6825092456LL;
uint16_t x417 = 971U;
static uint16_t x420 = 13U;
static uint8_t x421 = 1U;
int32_t x434 = INT32_MIN;
uint16_t x445 = 6U;
int32_t x453 = -1;
int8_t x460 = 29;
int32_t x471 = -1;
uint32_t x474 = 24955472U;
uint32_t x478 = 1142088U;
volatile int64_t t85 = 22442447312137798LL;
int16_t x490 = -2;
int64_t x491 = 12207817008732245LL;
volatile int64_t x492 = INT64_MIN;
int64_t t87 = 360303442LL;
int64_t t88 = 86244LL;
int16_t x510 = 10;
volatile int32_t t89 = 1803;
int64_t x521 = -5398LL;
int64_t t91 = -1LL;
volatile int8_t x526 = 49;
int32_t x536 = INT32_MIN;
volatile int16_t x543 = INT16_MIN;
static uint16_t x546 = 24U;
uint16_t x549 = UINT16_MAX;
int8_t x556 = INT8_MIN;
uint64_t t98 = 0LLU;
static int16_t x561 = 1;
uint64_t x565 = UINT64_MAX;
int64_t x570 = 3637018468059LL;
volatile uint8_t x573 = 2U;
uint32_t x575 = UINT32_MAX;
uint64_t t104 = 22LLU;
int64_t x593 = -1LL;
int64_t t105 = 1256033LL;
int64_t x602 = INT64_MIN;
static int32_t x609 = INT32_MAX;
uint64_t x610 = 1126LLU;
volatile uint64_t t107 = 3373016947LLU;
int32_t x623 = INT32_MAX;
uint64_t t109 = UINT64_MAX;
uint32_t x629 = 45313754U;
int8_t x631 = -1;
int16_t x632 = INT16_MAX;
uint32_t t110 = 1928U;
static uint32_t x646 = UINT32_MAX;
static int32_t x654 = -1;
int8_t x668 = INT8_MIN;
uint16_t x674 = UINT16_MAX;
static volatile uint16_t x675 = UINT16_MAX;
int64_t x678 = -1LL;
static uint32_t x686 = 885724U;
uint32_t x693 = UINT32_MAX;
int8_t x700 = 1;
static int32_t x718 = -1;
uint8_t x719 = UINT8_MAX;
volatile int32_t t126 = -1450440;
int8_t x743 = INT8_MIN;
static volatile int64_t x750 = INT64_MAX;
uint8_t x787 = 4U;
uint64_t t133 = 25LLU;
static uint64_t x789 = 295690LLU;
static uint64_t t135 = 7933457098LLU;
uint16_t x803 = 2548U;
uint16_t x814 = 238U;
uint64_t x821 = UINT64_MAX;
int64_t x823 = 15502LL;
int32_t x831 = -324;
static uint8_t x835 = 2U;
volatile int16_t x840 = 200;
int32_t x842 = -1;
int8_t x848 = -5;
volatile uint32_t x852 = 37107U;
uint32_t t147 = 64000U;
int16_t x861 = INT16_MIN;
int16_t x862 = INT16_MAX;
uint32_t x875 = 7651U;
static int16_t x876 = INT16_MAX;
volatile uint64_t x877 = 15245572265937LLU;
uint8_t x878 = 85U;
volatile uint64_t t152 = 192519744581LLU;
uint8_t x888 = 0U;
int32_t x896 = -630929543;
uint64_t t155 = 263014857LLU;
uint64_t t157 = 3LLU;
int8_t x910 = 45;
int32_t t159 = 9;
uint8_t x913 = 6U;
static uint16_t x925 = 62U;
uint32_t x926 = UINT32_MAX;
int8_t x929 = INT8_MAX;
static volatile int32_t t163 = 2170;
int64_t x933 = -52809769LL;
uint16_t x936 = 174U;
uint64_t x937 = 531254331074571962LLU;
int8_t x938 = -58;
volatile uint64_t t165 = 173846968LLU;
volatile uint32_t t167 = 401U;
int16_t x950 = -1;
static volatile uint32_t x957 = UINT32_MAX;
volatile int32_t x970 = -1;
uint64_t x973 = 118LLU;
int32_t x978 = -1;
int64_t x991 = INT64_MAX;
static uint8_t x995 = UINT8_MAX;
static volatile int32_t x998 = -177;
volatile int16_t x999 = -778;
volatile int32_t t180 = 185096597;
uint16_t x1009 = 3534U;
static uint8_t x1010 = 72U;
volatile int32_t x1021 = 61663;
int8_t x1033 = INT8_MIN;
volatile int64_t x1039 = 362663808LL;
volatile uint32_t x1074 = 7893013U;
int32_t x1077 = 1;
int16_t x1079 = INT16_MIN;
volatile uint8_t x1090 = 48U;
static int16_t x1091 = -7879;
volatile uint8_t x1092 = 0U;
int32_t t191 = 716003505;
int32_t x1104 = -3438;
static int16_t x1124 = -1;
int64_t x1129 = 1LL;


void f0(void) {
    	static uint8_t x1 = 8U;
	volatile int16_t x3 = 1;
	int32_t x4 = 7;

    t0 = (((x1*x2)-x3)|x4);

    if (t0 != 7558791464691199LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = UINT16_MAX;
	volatile int16_t x7 = INT16_MIN;
	static int32_t t1 = -627523;

    t1 = (((x5*x6)-x7)|x8);

    if (t1 != 2147418113) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x9 = INT64_MAX;
	volatile int16_t x10 = -1;
	int8_t x11 = -1;
	static volatile int32_t x12 = INT32_MIN;
	volatile int64_t t2 = 56LL;

    t2 = (((x9*x10)-x11)|x12);

    if (t2 != -2147483646LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	uint64_t x14 = 181542605136852LLU;
	uint16_t x15 = UINT16_MAX;

    t3 = (((x13*x14)-x15)|x16);

    if (t3 != 18423506620251969409LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x18 = UINT16_MAX;
	static uint8_t x20 = UINT8_MAX;
	volatile int32_t t4 = -185;

    t4 = (((x17*x18)-x19)|x20);

    if (t4 != 2147418367) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x21 = 10;
	int64_t x22 = -1LL;

    t5 = (((x21*x22)-x23)|x24);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	uint32_t x26 = 3U;
	static volatile uint32_t x28 = 10983U;

    t6 = (((x25*x26)-x27)|x28);

    if (t6 != 18446707329359900407LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x30 = 1;
	static volatile uint16_t x32 = UINT16_MAX;
	int32_t t7 = 73116;

    t7 = (((x29*x30)-x31)|x32);

    if (t7 != -2147418113) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x37 = 0U;
	uint8_t x38 = 57U;
	uint64_t x39 = 58145800LLU;
	volatile int32_t x40 = INT32_MIN;

    t8 = (((x37*x38)-x39)|x40);

    if (t8 != 18446744073651405816LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = UINT16_MAX;
	volatile int32_t x46 = 0;
	int16_t x47 = INT16_MIN;

    t9 = (((x45*x46)-x47)|x48);

    if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x49 = -1;
	uint32_t x51 = UINT32_MAX;
	static int16_t x52 = INT16_MAX;
	volatile uint32_t t10 = 49U;

    t10 = (((x49*x50)-x51)|x52);

    if (t10 != 32767U) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x53 = -1LL;
	int8_t x54 = 14;
	static int8_t x55 = -14;
	int8_t x56 = INT8_MIN;
	static int64_t t11 = -48857961268034LL;

    t11 = (((x53*x54)-x55)|x56);

    if (t11 != -128LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x57 = 827487LLU;
	uint16_t x58 = UINT16_MAX;
	volatile int16_t x59 = INT16_MIN;
	volatile uint64_t t12 = 1907062000LLU;

    t12 = (((x57*x58)-x59)|x60);

    if (t12 != 59983986599LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int64_t x65 = -1LL;
	int16_t x66 = -1;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = UINT16_MAX;
	volatile int64_t t13 = 753986730LL;

    t13 = (((x65*x66)-x67)|x68);

    if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x69 = 112991;
	uint16_t x70 = 1U;
	static volatile int32_t x71 = -1;
	int32_t x72 = INT32_MIN;

    t14 = (((x69*x70)-x71)|x72);

    if (t14 != -2147370656) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x73 = -1;
	int16_t x74 = -6757;
	uint64_t x75 = 3089912009570LLU;
	static uint8_t x76 = UINT8_MAX;
	static uint64_t t15 = 3751069519635223331LLU;

    t15 = (((x73*x74)-x75)|x76);

    if (t15 != 18446740983797549055LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x81 = 152593468231LLU;
	int8_t x83 = INT8_MAX;
	static volatile uint64_t t16 = 5171610385212285LLU;

    t16 = (((x81*x82)-x83)|x84);

    if (t16 != 18446744073709551166LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint32_t x93 = 20751361U;
	static int16_t x94 = INT16_MIN;
	static volatile uint32_t t17 = UINT32_MAX;

    t17 = (((x93*x94)-x95)|x96);

    if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x101 = UINT8_MAX;
	int8_t x102 = -1;
	static volatile int16_t x103 = INT16_MIN;
	uint8_t x104 = 123U;
	int32_t t18 = -1;

    t18 = (((x101*x102)-x103)|x104);

    if (t18 != 32635) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x106 = 2247U;
	int32_t x107 = -1;
	static uint16_t x108 = 22U;
	static uint32_t t19 = 4U;

    t19 = (((x105*x106)-x107)|x108);

    if (t19 != 38187679U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x109 = 346226649688LLU;
	uint32_t x111 = UINT32_MAX;
	int32_t x112 = 286839;
	uint64_t t20 = 89285860694704904LLU;

    t20 = (((x109*x110)-x111)|x112);

    if (t20 != 21115530671871LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x113 = UINT32_MAX;
	int64_t x114 = -1LL;
	volatile uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;
	uint64_t t21 = 362573909413LLU;

    t21 = (((x113*x114)-x115)|x116);

    if (t21 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x117 = 3714U;
	int8_t x119 = 29;
	static uint16_t x120 = 12255U;

    t22 = (((x117*x118)-x119)|x120);

    if (t22 != -121700353) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x122 = -1LL;
	uint64_t x123 = 941122171801656LLU;
	static int16_t x124 = -1;
	uint64_t t23 = UINT64_MAX;

    t23 = (((x121*x122)-x123)|x124);

    if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x125 = 46;
	uint8_t x126 = 1U;
	int32_t x127 = 94;
	int32_t t24 = -2429567;

    t24 = (((x125*x126)-x127)|x128);

    if (t24 != -48) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint8_t x137 = UINT8_MAX;
	volatile int8_t x138 = INT8_MIN;
	int64_t x139 = 135243LL;
	int64_t t25 = -77171034705LL;

    t25 = (((x137*x138)-x139)|x140);

    if (t25 != -167883LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x141 = 59;
	int8_t x142 = -1;
	volatile int32_t x143 = 23244811;
	int32_t x144 = INT32_MAX;
	volatile int32_t t26 = 0;

    t26 = (((x141*x142)-x143)|x144);

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x145 = -1;
	int16_t x146 = INT16_MAX;
	volatile int32_t x147 = 450959461;
	static int32_t x148 = -1;
	int32_t t27 = 9469;

    t27 = (((x145*x146)-x147)|x148);

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x151 = -4;
	static int64_t x152 = -1LL;
	volatile int64_t t28 = 1260394581LL;

    t28 = (((x149*x150)-x151)|x152);

    if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x153 = INT8_MAX;
	uint32_t x154 = 425U;
	int64_t x155 = INT64_MAX;
	int16_t x156 = INT16_MAX;
	volatile int64_t t29 = 99084020LL;

    t29 = (((x153*x154)-x155)|x156);

    if (t29 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x157 = INT16_MIN;
	static int64_t x158 = 1LL;
	int32_t x159 = -1;
	static int8_t x160 = INT8_MIN;
	int64_t t30 = -16542942554LL;

    t30 = (((x157*x158)-x159)|x160);

    if (t30 != -127LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint8_t x161 = UINT8_MAX;
	volatile int16_t x162 = INT16_MIN;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	int64_t t31 = INT64_MAX;

    t31 = (((x161*x162)-x163)|x164);

    if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x165 = INT8_MIN;
	static int32_t x166 = -870349;
	static uint16_t x167 = UINT16_MAX;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t32 = 12584;

    t32 = (((x165*x166)-x167)|x168);

    if (t32 != 111339263) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x169 = 7U;
	int64_t x170 = 7484LL;
	uint16_t x172 = 1U;

    t33 = (((x169*x170)-x171)|x172);

    if (t33 != 297717929LL) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x174 = -1LL;
	int64_t t34 = -15240394374315333LL;

    t34 = (((x173*x174)-x175)|x176);

    if (t34 != -122LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x177 = INT32_MAX;
	uint32_t x178 = 1159388U;
	int32_t x180 = 101609;
	volatile uint32_t t35 = 769366U;

    t35 = (((x177*x178)-x179)|x180);

    if (t35 != 4293906413U) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x191 = 178002987175LLU;
	volatile int16_t x192 = INT16_MIN;
	volatile uint64_t t36 = 26LLU;

    t36 = (((x189*x190)-x191)|x192);

    if (t36 != 18446744073709547737LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x194 = INT8_MAX;
	static int8_t x195 = INT8_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t37 = -281LL;

    t37 = (((x193*x194)-x195)|x196);

    if (t37 != -295161588LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x197 = INT16_MIN;
	int8_t x198 = 1;
	uint16_t x199 = 96U;
	uint32_t x200 = UINT32_MAX;

    t38 = (((x197*x198)-x199)|x200);

    if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int8_t x205 = INT8_MIN;
	uint64_t x206 = 551501688763156645LLU;
	volatile uint16_t x207 = 26741U;
	int16_t x208 = 1997;
	volatile uint64_t t39 = 1823084014554801452LLU;

    t39 = (((x205*x206)-x207)|x208);

    if (t39 != 3194760133154129871LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x209 = -3977160179LL;
	int16_t x210 = -13;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MAX;

    t40 = (((x209*x210)-x211)|x212);

    if (t40 != 53687091199LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x217 = INT8_MIN;
	int64_t x218 = -1LL;
	uint8_t x219 = UINT8_MAX;
	int32_t x220 = 1;
	int64_t t41 = 1110317588LL;

    t41 = (((x217*x218)-x219)|x220);

    if (t41 != -127LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x225 = -1253;
	int8_t x226 = -1;
	static int16_t x227 = INT16_MIN;
	uint64_t x228 = 9652643153703591LLU;

    t42 = (((x225*x226)-x227)|x228);

    if (t42 != 9652643153704679LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x229 = UINT32_MAX;
	static int16_t x230 = -1;
	int16_t x231 = INT16_MIN;
	uint16_t x232 = UINT16_MAX;
	static uint32_t t43 = 557U;

    t43 = (((x229*x230)-x231)|x232);

    if (t43 != 65535U) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x234 = INT8_MIN;
	int16_t x235 = INT16_MIN;
	int16_t x236 = 12;
	uint64_t t44 = 353745949LLU;

    t44 = (((x233*x234)-x235)|x236);

    if (t44 != 32908LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x237 = -1;
	volatile int32_t x238 = -1;
	int64_t x239 = INT64_MAX;
	int16_t x240 = -1;
	volatile int64_t t45 = 304786006LL;

    t45 = (((x237*x238)-x239)|x240);

    if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t46 = 6LL;

    t46 = (((x241*x242)-x243)|x244);

    if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x245 = UINT64_MAX;
	static uint64_t x246 = 357993586950LLU;
	int64_t x248 = -1152334206LL;
	volatile uint64_t t47 = 1571101320363299LLU;

    t47 = (((x245*x246)-x247)|x248);

    if (t47 != 18446744072635412115LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x249 = 11U;
	volatile uint64_t x250 = 14115439278779145LLU;
	uint8_t x251 = 3U;
	static int16_t x252 = INT16_MAX;
	uint64_t t48 = 1399LLU;

    t48 = (((x249*x250)-x251)|x252);

    if (t48 != 155269832066596863LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x257 = 42598LLU;
	static int32_t x259 = 885;
	volatile int16_t x260 = -1;
	uint64_t t49 = UINT64_MAX;

    t49 = (((x257*x258)-x259)|x260);

    if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x265 = INT16_MAX;
	uint16_t x266 = UINT16_MAX;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MIN;
	int32_t t50 = 7906;

    t50 = (((x265*x266)-x267)|x268);

    if (t50 != -32767) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x269 = INT8_MIN;
	uint64_t x270 = UINT64_MAX;
	volatile int32_t x271 = INT32_MIN;
	volatile uint64_t t51 = 113596LLU;

    t51 = (((x269*x270)-x271)|x272);

    if (t51 != 2151291090LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x281 = INT32_MAX;
	uint32_t x282 = 301272U;
	static uint16_t x283 = UINT16_MAX;
	static uint32_t t52 = 2U;

    t52 = (((x281*x282)-x283)|x284);

    if (t52 != 4294965053U) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x285 = 916886480415LL;
	uint16_t x286 = UINT16_MAX;
	uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = INT8_MAX;

    t53 = (((x285*x286)-x287)|x288);

    if (t53 != 60088155493997055LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x290 = 0U;
	int16_t x291 = INT16_MAX;
	static int8_t x292 = 38;
	int32_t t54 = -18805;

    t54 = (((x289*x290)-x291)|x292);

    if (t54 != -32729) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x297 = -1LL;
	uint64_t x298 = UINT64_MAX;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = -1LL;
	volatile uint64_t t55 = UINT64_MAX;

    t55 = (((x297*x298)-x299)|x300);

    if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x301 = INT8_MIN;
	static uint32_t x302 = 0U;
	uint32_t x303 = 1929U;
	static uint64_t t56 = UINT64_MAX;

    t56 = (((x301*x302)-x303)|x304);

    if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x314 = -1LL;
	int32_t x315 = -1;
	static int8_t x316 = INT8_MAX;

    t57 = (((x313*x314)-x315)|x316);

    if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x318 = UINT64_MAX;
	int8_t x319 = INT8_MIN;
	int16_t x320 = -1;

    t58 = (((x317*x318)-x319)|x320);

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	uint8_t x327 = UINT8_MAX;
	volatile int32_t t59 = -702;

    t59 = (((x325*x326)-x327)|x328);

    if (t59 != -2147451135) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x333 = 27966U;
	uint32_t x334 = 40552669U;
	uint64_t x335 = 20LLU;
	volatile uint8_t x336 = 8U;
	uint64_t t60 = 254229047LLU;

    t60 = (((x333*x334)-x335)|x336);

    if (t60 != 224575098LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x341 = 0;
	uint64_t x343 = UINT64_MAX;
	int16_t x344 = 222;

    t61 = (((x341*x342)-x343)|x344);

    if (t61 != 223LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x345 = 0;
	static int32_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = 1LL;

    t62 = (((x345*x346)-x347)|x348);

    if (t62 != -65535LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x353 = INT8_MIN;
	int16_t x354 = -1;
	volatile int64_t x355 = -1LL;

    t63 = (((x353*x354)-x355)|x356);

    if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x362 = -1;
	static int32_t x363 = INT32_MIN;
	static uint8_t x364 = 9U;
	volatile int32_t t64 = 3730213;

    t64 = (((x361*x362)-x363)|x364);

    if (t64 != 2147483529) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int8_t x366 = -29;
	static int8_t x367 = 3;
	uint64_t x368 = UINT64_MAX;

    t65 = (((x365*x366)-x367)|x368);

    if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x369 = 1U;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t66 = 124316122;

    t66 = (((x369*x370)-x371)|x372);

    if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x373 = 1;
	int64_t x374 = -60305313347LL;
	volatile uint16_t x375 = 17U;
	int64_t x376 = -1LL;
	int64_t t67 = 146LL;

    t67 = (((x373*x374)-x375)|x376);

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x385 = 237549174;
	static int64_t x386 = -8484LL;
	static volatile uint32_t x387 = 14819951U;
	uint64_t x388 = 515LLU;
	uint64_t t68 = 63575533LLU;

    t68 = (((x385*x386)-x387)|x388);

    if (t68 != 18446742058327539451LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint32_t x394 = 161822211U;
	int64_t x395 = -40246972654LL;
	int64_t x396 = INT64_MIN;
	static int64_t t69 = 734LL;

    t69 = (((x393*x394)-x395)|x396);

    if (t69 != -9223371993997845013LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x397 = UINT16_MAX;
	int16_t x398 = INT16_MAX;
	int32_t x399 = 15069;
	static uint8_t x400 = 24U;

    t70 = (((x397*x398)-x399)|x400);

    if (t70 != 2147370300) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x402 = INT16_MIN;
	static uint8_t x403 = UINT8_MAX;
	int16_t x404 = INT16_MAX;

    t71 = (((x401*x402)-x403)|x404);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x405 = -1LL;
	uint64_t x406 = 184958LLU;
	volatile int64_t x407 = -962685194573417119LL;

    t72 = (((x405*x406)-x407)|x408);

    if (t72 != 962685194573232173LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x409 = 951594479U;
	int32_t x411 = 26077734;
	int8_t x412 = INT8_MIN;

    t73 = (((x409*x410)-x411)|x412);

    if (t73 != 4294967221U) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x413 = INT16_MAX;
	static int64_t x415 = INT64_MIN;
	int32_t x416 = 143849193;

    t74 = (((x413*x414)-x415)|x416);

    if (t74 != 9223372036854773481LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x418 = -1;
	volatile int32_t x419 = 5250;
	int32_t t75 = 38007;

    t75 = (((x417*x418)-x419)|x420);

    if (t75 != -6209) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x422 = 760814188180LLU;
	volatile uint16_t x423 = 33U;
	uint32_t x424 = 16343U;
	volatile uint64_t t76 = 3242983894649LLU;

    t76 = (((x421*x422)-x423)|x424);

    if (t76 != 760814190583LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x433 = 0;
	int32_t x435 = 107841643;
	volatile int32_t x436 = -1;
	volatile int32_t t77 = 533;

    t77 = (((x433*x434)-x435)|x436);

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x437 = UINT8_MAX;
	uint8_t x438 = 3U;
	static uint64_t x439 = 16494363009005543LLU;
	uint8_t x440 = 92U;
	uint64_t t78 = 7725090574559190LLU;

    t78 = (((x437*x438)-x439)|x440);

    if (t78 != 18430249710700546910LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x446 = INT16_MIN;
	volatile uint8_t x447 = UINT8_MAX;
	int32_t x448 = -397153790;
	static volatile int32_t t79 = 2457;

    t79 = (((x445*x446)-x447)|x448);

    if (t79 != -253) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x454 = 92U;
	int64_t x455 = 14LL;
	int8_t x456 = INT8_MIN;
	int64_t t80 = -3LL;

    t80 = (((x453*x454)-x455)|x456);

    if (t80 != -106LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x457 = 16092050LLU;
	int64_t x458 = 6LL;
	int8_t x459 = 0;
	volatile uint64_t t81 = 5599500321239LLU;

    t81 = (((x457*x458)-x459)|x460);

    if (t81 != 96552317LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x465 = INT32_MIN;
	uint64_t x466 = 3153086LLU;
	uint8_t x467 = 0U;
	int8_t x468 = 63;
	uint64_t t82 = 1489802297149209258LLU;

    t82 = (((x465*x466)-x467)|x468);

    if (t82 != 18439972873083813951LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x469 = UINT8_MAX;
	uint16_t x470 = 3483U;
	int8_t x472 = 1;
	volatile int32_t t83 = 26555;

    t83 = (((x469*x470)-x471)|x472);

    if (t83 != 888167) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x473 = 0;
	uint16_t x475 = UINT16_MAX;
	volatile int8_t x476 = 1;
	volatile uint32_t t84 = 286311U;

    t84 = (((x473*x474)-x475)|x476);

    if (t84 != 4294901761U) { NG(); } else { ; }
	
}

void f85(void) {
    	static int64_t x477 = -38697369LL;
	int64_t x479 = 0LL;
	uint32_t x480 = 52U;

    t85 = (((x477*x478)-x479)|x480);

    if (t85 != -44195800766468LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x481 = 0;
	int8_t x482 = INT8_MIN;
	static int16_t x483 = -13;
	int64_t x484 = 13463924LL;
	volatile int64_t t86 = 87137880495947057LL;

    t86 = (((x481*x482)-x483)|x484);

    if (t86 != 13463933LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x489 = 10;

    t87 = (((x489*x490)-x491)|x492);

    if (t87 != -12207817008732265LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x497 = UINT8_MAX;
	int64_t x498 = 2175052LL;
	uint16_t x499 = 0U;
	uint16_t x500 = 1U;

    t88 = (((x497*x498)-x499)|x500);

    if (t88 != 554638261LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x509 = INT8_MIN;
	int8_t x511 = -1;
	volatile uint16_t x512 = UINT16_MAX;

    t89 = (((x509*x510)-x511)|x512);

    if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x513 = -1;
	int32_t x514 = 0;
	int16_t x515 = 10;
	uint64_t x516 = 2094417LLU;
	volatile uint64_t t90 = 133168535484272LLU;

    t90 = (((x513*x514)-x515)|x516);

    if (t90 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x522 = UINT16_MAX;
	static int8_t x523 = -1;
	volatile uint32_t x524 = UINT32_MAX;

    t91 = (((x521*x522)-x523)|x524);

    if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x525 = INT8_MIN;
	volatile int8_t x527 = 20;
	int64_t x528 = INT64_MIN;
	static int64_t t92 = -2494265381804852LL;

    t92 = (((x525*x526)-x527)|x528);

    if (t92 != -6292LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x533 = 1U;
	int32_t x534 = -22;
	static int32_t x535 = INT32_MIN;
	volatile int32_t t93 = -1065496347;

    t93 = (((x533*x534)-x535)|x536);

    if (t93 != -22) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x537 = -1;
	int64_t x538 = 3364728271614244LL;
	uint8_t x539 = UINT8_MAX;
	uint32_t x540 = 4869U;
	int64_t t94 = -687LL;

    t94 = (((x537*x538)-x539)|x540);

    if (t94 != -3364728271609891LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x541 = -198373;
	uint64_t x542 = 267424346435LLU;
	int8_t x544 = -5;
	uint64_t t95 = 109LLU;

    t95 = (((x541*x542)-x543)|x544);

    if (t95 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x545 = -599LL;
	volatile int8_t x547 = 2;
	int32_t x548 = INT32_MIN;
	volatile int64_t t96 = 53897571972465LL;

    t96 = (((x545*x546)-x547)|x548);

    if (t96 != -14378LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x550 = INT16_MIN;
	volatile int32_t x551 = -185;
	uint16_t x552 = 818U;
	static volatile int32_t t97 = -495295;

    t97 = (((x549*x550)-x551)|x552);

    if (t97 != -2147449925) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x553 = 25226U;
	volatile uint16_t x554 = UINT16_MAX;
	uint64_t x555 = UINT64_MAX;

    t98 = (((x553*x554)-x555)|x556);

    if (t98 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x562 = UINT16_MAX;
	static volatile uint32_t x563 = 2U;
	int8_t x564 = -8;
	uint32_t t99 = 2029283U;

    t99 = (((x561*x562)-x563)|x564);

    if (t99 != 4294967293U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x566 = INT16_MIN;
	uint32_t x567 = 6669354U;
	static uint8_t x568 = 14U;
	volatile uint64_t t100 = 1955430LLU;

    t100 = (((x565*x566)-x567)|x568);

    if (t100 != 18446744073702915038LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x569 = UINT64_MAX;
	int8_t x571 = -3;
	int32_t x572 = 3;
	static volatile uint64_t t101 = 95671795097606LLU;

    t101 = (((x569*x570)-x571)|x572);

    if (t101 != 18446740436691083563LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint8_t x574 = 4U;
	volatile int32_t x576 = -1;
	volatile uint32_t t102 = UINT32_MAX;

    t102 = (((x573*x574)-x575)|x576);

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x577 = 2500LL;
	uint32_t x578 = 31U;
	int32_t x579 = INT32_MIN;
	int16_t x580 = 240;
	int64_t t103 = 643232043449598LL;

    t103 = (((x577*x578)-x579)|x580);

    if (t103 != 2147561212LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x589 = 503U;
	uint64_t x590 = UINT64_MAX;
	int8_t x591 = -5;
	int64_t x592 = INT64_MIN;

    t104 = (((x589*x590)-x591)|x592);

    if (t104 != 18446744073709551118LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x594 = 26U;
	volatile int64_t x595 = -1LL;
	int32_t x596 = INT32_MIN;

    t105 = (((x593*x594)-x595)|x596);

    if (t105 != -25LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x601 = 0U;
	volatile int32_t x603 = INT32_MIN;
	int32_t x604 = 220427;
	int64_t t106 = 732879341651LL;

    t106 = (((x601*x602)-x603)|x604);

    if (t106 != 2147704075LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x611 = INT64_MIN;
	uint8_t x612 = 8U;

    t107 = (((x609*x610)-x611)|x612);

    if (t107 != 9223374454921362330LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x613 = INT16_MIN;
	int16_t x614 = INT16_MIN;
	int32_t x615 = INT32_MAX;
	static int16_t x616 = -1;
	int32_t t108 = 37772809;

    t108 = (((x613*x614)-x615)|x616);

    if (t108 != -1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x621 = 5661140709035516204LLU;
	uint16_t x622 = 0U;
	int8_t x624 = -1;

    t109 = (((x621*x622)-x623)|x624);

    if (t109 != UINT64_MAX) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x630 = INT16_MIN;

    t110 = (((x629*x630)-x631)|x632);

    if (t110 != 1217626111U) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x645 = -10;
	static uint8_t x647 = UINT8_MAX;
	int64_t x648 = -64342LL;
	int64_t t111 = 145047LL;

    t111 = (((x645*x646)-x647)|x648);

    if (t111 != -85LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x649 = 7211U;
	int16_t x650 = -1;
	uint16_t x651 = 0U;
	uint16_t x652 = UINT16_MAX;
	int32_t t112 = 3015;

    t112 = (((x649*x650)-x651)|x652);

    if (t112 != -1) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int16_t x653 = 29;
	int64_t x655 = INT64_MIN;
	int64_t x656 = 10814657957142864LL;
	volatile int64_t t113 = -652770718168LL;

    t113 = (((x653*x654)-x655)|x656);

    if (t113 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x665 = -14;
	uint8_t x666 = 44U;
	int16_t x667 = INT16_MIN;
	int32_t t114 = 35;

    t114 = (((x665*x666)-x667)|x668);

    if (t114 != -104) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x673 = UINT32_MAX;
	volatile int64_t x676 = INT64_MAX;
	static volatile int64_t t115 = INT64_MAX;

    t115 = (((x673*x674)-x675)|x676);

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x677 = -3;
	static int16_t x679 = -29;
	int64_t x680 = INT64_MIN;
	static volatile int64_t t116 = 2921628984265LL;

    t116 = (((x677*x678)-x679)|x680);

    if (t116 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x681 = INT16_MIN;
	int8_t x682 = 6;
	static int64_t x683 = 10452414076330885LL;
	int16_t x684 = -1;
	volatile int64_t t117 = -3511LL;

    t117 = (((x681*x682)-x683)|x684);

    if (t117 != -1LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x685 = 1LL;
	int16_t x687 = INT16_MAX;
	static uint64_t x688 = 2506LLU;
	volatile uint64_t t118 = 257598308711128529LLU;

    t118 = (((x685*x686)-x687)|x688);

    if (t118 != 855007LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x694 = INT32_MIN;
	int8_t x695 = -1;
	int8_t x696 = 28;
	uint32_t t119 = 233407U;

    t119 = (((x693*x694)-x695)|x696);

    if (t119 != 2147483677U) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x697 = -4318037826177LL;
	static uint8_t x698 = 11U;
	volatile int8_t x699 = INT8_MIN;
	volatile int64_t t120 = -313603287386LL;

    t120 = (((x697*x698)-x699)|x700);

    if (t120 != -47498416087819LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x701 = INT16_MIN;
	int64_t x702 = -1LL;
	int8_t x703 = -1;
	static int16_t x704 = 3;
	int64_t t121 = -39318858326LL;

    t121 = (((x701*x702)-x703)|x704);

    if (t121 != 32771LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x705 = 14774U;
	int16_t x706 = -1;
	static int32_t x707 = INT32_MAX;
	int32_t x708 = -1;
	static volatile uint32_t t122 = UINT32_MAX;

    t122 = (((x705*x706)-x707)|x708);

    if (t122 != UINT32_MAX) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x709 = -1;
	uint64_t x710 = 1956644LLU;
	volatile int32_t x711 = INT32_MAX;
	uint32_t x712 = UINT32_MAX;
	uint64_t t123 = UINT64_MAX;

    t123 = (((x709*x710)-x711)|x712);

    if (t123 != UINT64_MAX) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x717 = INT16_MIN;
	int64_t x720 = 60854327502LL;
	volatile int64_t t124 = 7LL;

    t124 = (((x717*x718)-x719)|x720);

    if (t124 != 60854337487LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x725 = INT16_MIN;
	volatile uint8_t x726 = 1U;
	uint64_t x727 = 389088LLU;
	uint16_t x728 = UINT16_MAX;
	volatile uint64_t t125 = 436000988183437162LLU;

    t125 = (((x725*x726)-x727)|x728);

    if (t125 != 18446744073709158399LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x729 = 25843U;
	int16_t x730 = -96;
	int16_t x731 = -1;
	int8_t x732 = INT8_MAX;

    t126 = (((x729*x730)-x731)|x732);

    if (t126 != -2480897) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x733 = -1;
	static uint8_t x734 = UINT8_MAX;
	static uint16_t x735 = 13211U;
	volatile uint16_t x736 = 8085U;
	int32_t t127 = 1917893;

    t127 = (((x733*x734)-x735)|x736);

    if (t127 != -8201) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x737 = 27180LLU;
	static int32_t x738 = -1;
	static volatile int8_t x739 = 15;
	int32_t x740 = 4012714;
	volatile uint64_t t128 = 1785714LLU;

    t128 = (((x737*x738)-x739)|x740);

    if (t128 != 18446744073709535215LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x741 = UINT8_MAX;
	static volatile uint32_t x742 = UINT32_MAX;
	volatile int32_t x744 = -124;
	uint32_t t129 = 6230U;

    t129 = (((x741*x742)-x743)|x744);

    if (t129 != 4294967173U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x749 = -1LL;
	int32_t x751 = -1;
	uint32_t x752 = 63U;
	int64_t t130 = -4031988LL;

    t130 = (((x749*x750)-x751)|x752);

    if (t130 != -9223372036854775745LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x761 = INT16_MIN;
	int8_t x762 = INT8_MIN;
	int64_t x763 = 704604LL;
	uint16_t x764 = 12U;
	int64_t t131 = -355288697LL;

    t131 = (((x761*x762)-x763)|x764);

    if (t131 != 3489708LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint8_t x769 = UINT8_MAX;
	uint64_t x770 = UINT64_MAX;
	int32_t x771 = 724520187;
	int32_t x772 = 90;
	static uint64_t t132 = 172LLU;

    t132 = (((x769*x770)-x771)|x772);

    if (t132 != 18446744072985031262LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint64_t x785 = 331378399LLU;
	int8_t x786 = -15;
	volatile int16_t x788 = 1;

    t133 = (((x785*x786)-x787)|x788);

    if (t133 != 18446744068738875627LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x790 = INT32_MAX;
	int64_t x791 = INT64_MIN;
	int8_t x792 = INT8_MIN;
	uint64_t t134 = 4086LLU;

    t134 = (((x789*x790)-x791)|x792);

    if (t134 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x793 = 0;
	volatile int64_t x794 = INT64_MIN;
	int16_t x795 = INT16_MIN;
	uint64_t x796 = 518575052519487571LLU;

    t135 = (((x793*x794)-x795)|x796);

    if (t135 != 518575052519487571LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x797 = UINT64_MAX;
	static volatile int16_t x798 = INT16_MAX;
	static volatile uint32_t x799 = 366U;
	int16_t x800 = -1;
	static volatile uint64_t t136 = UINT64_MAX;

    t136 = (((x797*x798)-x799)|x800);

    if (t136 != UINT64_MAX) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x801 = 1650915478916447LLU;
	volatile int32_t x802 = INT32_MIN;
	int16_t x804 = INT16_MIN;
	volatile uint64_t t137 = 30233632993LLU;

    t137 = (((x801*x802)-x803)|x804);

    if (t137 != 18446744073709549068LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x813 = -1;
	volatile int64_t x815 = -322735LL;
	volatile int32_t x816 = 0;
	volatile int64_t t138 = -3872599LL;

    t138 = (((x813*x814)-x815)|x816);

    if (t138 != 322497LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x817 = INT16_MAX;
	int8_t x818 = 0;
	static volatile uint8_t x819 = UINT8_MAX;
	volatile int32_t x820 = INT32_MIN;
	int32_t t139 = -164151;

    t139 = (((x817*x818)-x819)|x820);

    if (t139 != -255) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x822 = INT8_MIN;
	int64_t x824 = -1LL;
	volatile uint64_t t140 = UINT64_MAX;

    t140 = (((x821*x822)-x823)|x824);

    if (t140 != UINT64_MAX) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x825 = INT16_MIN;
	uint64_t x826 = 35840685545861360LLU;
	uint16_t x827 = 808U;
	volatile int64_t x828 = INT64_MIN;
	volatile uint64_t t141 = 73LLU;

    t141 = (((x825*x826)-x827)|x828);

    if (t141 != 15387408787481033944LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x829 = INT32_MIN;
	int64_t x830 = -519643LL;
	volatile int32_t x832 = 860701;
	volatile int64_t t142 = 4245244731651814852LL;

    t142 = (((x829*x830)-x831)|x832);

    if (t142 != 1115924846158685LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x833 = -1;
	uint32_t x834 = 326794408U;
	static volatile int16_t x836 = -1;
	uint32_t t143 = UINT32_MAX;

    t143 = (((x833*x834)-x835)|x836);

    if (t143 != UINT32_MAX) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x837 = -163597LL;
	volatile int8_t x838 = INT8_MAX;
	uint16_t x839 = UINT16_MAX;
	volatile int64_t t144 = 4041LL;

    t144 = (((x837*x838)-x839)|x840);

    if (t144 != -20842290LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x841 = -1;
	static int16_t x843 = 796;
	uint8_t x844 = 0U;
	int32_t t145 = -3960976;

    t145 = (((x841*x842)-x843)|x844);

    if (t145 != -795) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x845 = UINT64_MAX;
	int8_t x846 = INT8_MAX;
	static int8_t x847 = 12;
	uint64_t t146 = UINT64_MAX;

    t146 = (((x845*x846)-x847)|x848);

    if (t146 != UINT64_MAX) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x849 = 235243U;
	int16_t x850 = INT16_MAX;
	static volatile uint8_t x851 = 3U;

    t147 = (((x849*x850)-x851)|x852);

    if (t147 != 3413244403U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x853 = INT16_MIN;
	volatile int8_t x854 = INT8_MAX;
	int8_t x855 = INT8_MAX;
	int32_t x856 = INT32_MIN;
	int32_t t148 = -37;

    t148 = (((x853*x854)-x855)|x856);

    if (t148 != -4161663) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x863 = -1;
	volatile int16_t x864 = -511;
	static volatile int32_t t149 = 12637;

    t149 = (((x861*x862)-x863)|x864);

    if (t149 != -511) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x865 = INT16_MIN;
	uint16_t x866 = 169U;
	int64_t x867 = INT64_MIN;
	uint16_t x868 = UINT16_MAX;
	int64_t t150 = -4333783083911337LL;

    t150 = (((x865*x866)-x867)|x868);

    if (t150 != 9223372036849270783LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x873 = INT16_MIN;
	int8_t x874 = -26;
	static uint32_t t151 = 575U;

    t151 = (((x873*x874)-x875)|x876);

    if (t151 != 851967U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x879 = 9U;
	volatile uint32_t x880 = 186502U;

    t152 = (((x877*x878)-x879)|x880);

    if (t152 != 1295873642789086LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x881 = -1;
	volatile uint32_t x882 = 3096U;
	uint16_t x883 = 0U;
	uint64_t x884 = 4464218734LLU;
	volatile uint64_t t153 = 1735630LLU;

    t153 = (((x881*x882)-x883)|x884);

    if (t153 != 8589931502LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x885 = INT16_MIN;
	volatile uint32_t x886 = 237U;
	uint8_t x887 = 4U;
	volatile uint32_t t154 = 1441666U;

    t154 = (((x885*x886)-x887)|x888);

    if (t154 != 4287201276U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x893 = 21LLU;
	int8_t x894 = 3;
	static uint64_t x895 = UINT64_MAX;

    t155 = (((x893*x894)-x895)|x896);

    if (t155 != 18446744073078622073LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x897 = -1LL;
	int32_t x898 = INT32_MIN;
	int8_t x899 = 0;
	uint64_t x900 = 38387161610139LLU;
	uint64_t t156 = 15LLU;

    t156 = (((x897*x898)-x899)|x900);

    if (t156 != 38387161610139LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static int16_t x901 = INT16_MIN;
	static uint64_t x902 = UINT64_MAX;
	volatile int8_t x903 = 12;
	int8_t x904 = -22;

    t157 = (((x901*x902)-x903)|x904);

    if (t157 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x905 = UINT32_MAX;
	int16_t x906 = -4069;
	int32_t x907 = INT32_MIN;
	int32_t x908 = -14;
	uint32_t t158 = 14872U;

    t158 = (((x905*x906)-x907)|x908);

    if (t158 != 4294967287U) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x909 = INT16_MIN;
	int8_t x911 = INT8_MIN;
	static int8_t x912 = INT8_MAX;

    t159 = (((x909*x910)-x911)|x912);

    if (t159 != -1474305) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x914 = 63;
	int64_t x915 = INT64_MAX;
	int32_t x916 = -1;
	int64_t t160 = -13688283718223147LL;

    t160 = (((x913*x914)-x915)|x916);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x921 = -1LL;
	static uint64_t x922 = UINT64_MAX;
	int8_t x923 = INT8_MAX;
	volatile int8_t x924 = -30;
	uint64_t t161 = 205537LLU;

    t161 = (((x921*x922)-x923)|x924);

    if (t161 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x927 = INT16_MAX;
	volatile int16_t x928 = 21;
	uint32_t t162 = 36010U;

    t162 = (((x925*x926)-x927)|x928);

    if (t162 != 4294934487U) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x930 = -13;
	uint16_t x931 = 26U;
	int16_t x932 = -1;

    t163 = (((x929*x930)-x931)|x932);

    if (t163 != -1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x934 = INT8_MIN;
	int32_t x935 = INT32_MAX;
	volatile int64_t t164 = 6LL;

    t164 = (((x933*x934)-x935)|x936);

    if (t164 != 4612166831LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x939 = INT16_MAX;
	int16_t x940 = INT16_MIN;

    t165 = (((x937*x938)-x939)|x940);

    if (t165 != 18446744073709545949LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x941 = UINT8_MAX;
	static int16_t x942 = 4510;
	uint8_t x943 = 2U;
	uint8_t x944 = 50U;
	volatile int32_t t166 = -5986;

    t166 = (((x941*x942)-x943)|x944);

    if (t166 != 1150066) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint32_t x945 = UINT32_MAX;
	static volatile uint32_t x946 = 13U;
	int32_t x947 = -128069;
	uint8_t x948 = 2U;

    t167 = (((x945*x946)-x947)|x948);

    if (t167 != 128058U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x949 = 631482479209LLU;
	static uint16_t x951 = UINT16_MAX;
	static int16_t x952 = -1;
	uint64_t t168 = UINT64_MAX;

    t168 = (((x949*x950)-x951)|x952);

    if (t168 != UINT64_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x953 = UINT8_MAX;
	volatile int8_t x954 = -7;
	uint16_t x955 = 2U;
	int8_t x956 = 1;
	volatile int32_t t169 = 4382925;

    t169 = (((x953*x954)-x955)|x956);

    if (t169 != -1787) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x958 = INT16_MIN;
	static int8_t x959 = INT8_MAX;
	static uint16_t x960 = UINT16_MAX;
	volatile uint32_t t170 = 641106U;

    t170 = (((x957*x958)-x959)|x960);

    if (t170 != 65535U) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x961 = INT16_MIN;
	uint64_t x962 = UINT64_MAX;
	uint8_t x963 = 5U;
	int8_t x964 = 11;
	static uint64_t t171 = 2452990LLU;

    t171 = (((x961*x962)-x963)|x964);

    if (t171 != 32763LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile uint32_t x965 = 1262649321U;
	int16_t x966 = -1;
	int64_t x967 = 364394634LL;
	uint64_t x968 = UINT64_MAX;
	volatile uint64_t t172 = UINT64_MAX;

    t172 = (((x965*x966)-x967)|x968);

    if (t172 != UINT64_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x969 = 0;
	int16_t x971 = -1;
	int8_t x972 = -8;
	int32_t t173 = 5635665;

    t173 = (((x969*x970)-x971)|x972);

    if (t173 != -7) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x974 = 32617LLU;
	volatile int16_t x975 = INT16_MIN;
	static int64_t x976 = -50109LL;
	volatile uint64_t t174 = 7LLU;

    t174 = (((x973*x974)-x975)|x976);

    if (t174 != 18446744073709502055LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x977 = -6;
	int64_t x979 = 3181264273247337LL;
	int64_t x980 = 14336100829202LL;
	static volatile int64_t t175 = -5773114457LL;

    t175 = (((x977*x978)-x979)|x980);

    if (t175 != -3166963069158497LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x989 = 1U;
	static int32_t x990 = INT32_MAX;
	uint16_t x992 = 7U;
	int64_t t176 = 6406770540956LL;

    t176 = (((x989*x990)-x991)|x992);

    if (t176 != -9223372034707292153LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x993 = UINT8_MAX;
	uint64_t x994 = 172302036LLU;
	volatile int16_t x996 = -1;
	uint64_t t177 = UINT64_MAX;

    t177 = (((x993*x994)-x995)|x996);

    if (t177 != UINT64_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x997 = -44;
	int32_t x1000 = INT32_MIN;
	static volatile int32_t t178 = -6915;

    t178 = (((x997*x998)-x999)|x1000);

    if (t178 != -2147475082) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x1001 = 190U;
	int16_t x1002 = -2;
	int32_t x1003 = 79664;
	int8_t x1004 = 3;
	int32_t t179 = 160073;

    t179 = (((x1001*x1002)-x1003)|x1004);

    if (t179 != -80041) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x1005 = 0U;
	volatile int32_t x1006 = -91;
	int16_t x1007 = 14885;
	int32_t x1008 = 59;

    t180 = (((x1005*x1006)-x1007)|x1008);

    if (t180 != -14853) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1011 = INT8_MIN;
	int64_t x1012 = INT64_MIN;
	volatile int64_t t181 = -36399983869536LL;

    t181 = (((x1009*x1010)-x1011)|x1012);

    if (t181 != -9223372036854521232LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x1013 = INT16_MAX;
	uint16_t x1014 = 2U;
	int64_t x1015 = INT64_MAX;
	int16_t x1016 = -2574;
	volatile int64_t t182 = 167516403797LL;

    t182 = (((x1013*x1014)-x1015)|x1016);

    if (t182 != -1LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1022 = 2;
	static uint8_t x1023 = UINT8_MAX;
	int64_t x1024 = -17652673026644116LL;
	volatile int64_t t183 = 9652787LL;

    t183 = (((x1021*x1022)-x1023)|x1024);

    if (t183 != -17652673026594817LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1034 = 14U;
	uint64_t x1035 = UINT64_MAX;
	int16_t x1036 = -1;
	uint64_t t184 = UINT64_MAX;

    t184 = (((x1033*x1034)-x1035)|x1036);

    if (t184 != UINT64_MAX) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x1037 = -1LL;
	volatile uint16_t x1038 = UINT16_MAX;
	uint16_t x1040 = 6798U;
	volatile int64_t t185 = 51817396998000396LL;

    t185 = (((x1037*x1038)-x1039)|x1040);

    if (t185 != -362726769LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1045 = -122189;
	int64_t x1046 = -19274LL;
	static int32_t x1047 = 380360;
	static uint64_t x1048 = UINT64_MAX;
	uint64_t t186 = UINT64_MAX;

    t186 = (((x1045*x1046)-x1047)|x1048);

    if (t186 != UINT64_MAX) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x1061 = 45U;
	uint16_t x1062 = UINT16_MAX;
	volatile int32_t x1063 = -455532756;
	int8_t x1064 = INT8_MIN;
	volatile uint32_t t187 = 2127238874U;

    t187 = (((x1061*x1062)-x1063)|x1064);

    if (t187 != 4294967207U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1073 = 39;
	uint64_t x1075 = 418699739646011LLU;
	volatile uint32_t x1076 = UINT32_MAX;
	uint64_t t188 = 120339021LLU;

    t188 = (((x1073*x1074)-x1075)|x1076);

    if (t188 != 18446325374527733759LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x1078 = -1LL;
	int16_t x1080 = -12;
	static volatile int64_t t189 = -4192147LL;

    t189 = (((x1077*x1078)-x1079)|x1080);

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1081 = 45;
	static uint32_t x1082 = UINT32_MAX;
	volatile uint32_t x1083 = 13517284U;
	volatile int32_t x1084 = -1;
	uint32_t t190 = UINT32_MAX;

    t190 = (((x1081*x1082)-x1083)|x1084);

    if (t190 != UINT32_MAX) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1089 = 1U;

    t191 = (((x1089*x1090)-x1091)|x1092);

    if (t191 != 7927) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1097 = 222164256U;
	static int8_t x1098 = INT8_MIN;
	volatile uint8_t x1099 = 72U;
	static int8_t x1100 = -11;
	volatile uint32_t t192 = 50U;

    t192 = (((x1097*x1098)-x1099)|x1100);

    if (t192 != 4294967293U) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1101 = 126U;
	uint64_t x1102 = UINT64_MAX;
	int16_t x1103 = INT16_MIN;
	volatile uint64_t t193 = 4464599456767204LLU;

    t193 = (((x1101*x1102)-x1103)|x1104);

    if (t193 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1105 = -1;
	volatile uint32_t x1106 = UINT32_MAX;
	static int16_t x1107 = -1;
	static volatile int16_t x1108 = INT16_MAX;
	uint32_t t194 = 1106U;

    t194 = (((x1105*x1106)-x1107)|x1108);

    if (t194 != 32767U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint32_t x1117 = 19U;
	static uint16_t x1118 = 5U;
	int16_t x1119 = -6;
	static int8_t x1120 = 1;
	static volatile uint32_t t195 = 20065U;

    t195 = (((x1117*x1118)-x1119)|x1120);

    if (t195 != 101U) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1121 = 42761;
	int8_t x1122 = 0;
	uint8_t x1123 = UINT8_MAX;
	static volatile int32_t t196 = -480400;

    t196 = (((x1121*x1122)-x1123)|x1124);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1125 = -1LL;
	uint32_t x1126 = UINT32_MAX;
	volatile uint64_t x1127 = 6704069190786LLU;
	int64_t x1128 = -300840168795LL;
	uint64_t t197 = 13463864819972247LLU;

    t197 = (((x1125*x1126)-x1127)|x1128);

    if (t197 != 18446744073555893247LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1130 = INT64_MAX;
	static int8_t x1131 = 0;
	int16_t x1132 = 0;
	int64_t t198 = INT64_MAX;

    t198 = (((x1129*x1130)-x1131)|x1132);

    if (t198 != INT64_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1133 = 12U;
	int32_t x1134 = 3;
	static uint8_t x1135 = 0U;
	int16_t x1136 = -1;
	volatile uint32_t t199 = UINT32_MAX;

    t199 = (((x1133*x1134)-x1135)|x1136);

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
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

