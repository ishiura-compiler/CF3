
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

int8_t x16 = -1;
int32_t x17 = INT32_MAX;
uint64_t x19 = 1726000961LLU;
static uint16_t x25 = 67U;
int16_t x27 = 7881;
int8_t x28 = INT8_MIN;
static volatile int32_t x40 = INT32_MAX;
int64_t x41 = -1LL;
int8_t x58 = INT8_MAX;
int16_t x59 = INT16_MAX;
int16_t x64 = 4594;
uint8_t x68 = 9U;
static volatile int32_t x73 = -33031178;
int16_t x84 = -2150;
uint64_t t12 = 3417223131617LLU;
int8_t x97 = -1;
uint8_t x98 = UINT8_MAX;
volatile int32_t t15 = -4119;
int8_t x101 = INT8_MIN;
uint32_t t16 = 412977U;
volatile uint64_t x108 = 10865076981LLU;
volatile int32_t x113 = -15262812;
int8_t x127 = 53;
int32_t x140 = -5524705;
int32_t t22 = -62;
int8_t x148 = 0;
volatile int8_t x150 = INT8_MAX;
int8_t x152 = INT8_MIN;
int64_t x154 = 319508LL;
static volatile int8_t x167 = -1;
int64_t x183 = INT64_MAX;
int16_t x184 = INT16_MAX;
uint64_t t30 = 39952311134LLU;
static volatile int8_t x189 = INT8_MAX;
int8_t x192 = -55;
uint64_t t31 = 340LLU;
int16_t x193 = INT16_MAX;
volatile uint64_t t34 = 93833LLU;
static uint32_t t39 = 53501U;
int16_t x242 = INT16_MAX;
int16_t x255 = INT16_MAX;
static volatile uint32_t t47 = 7346056U;
static int16_t x285 = INT16_MIN;
volatile int64_t x295 = 2LL;
uint64_t t50 = 1787904262938547LLU;
static uint64_t x298 = 48509LLU;
int32_t x300 = -188943838;
volatile uint64_t t51 = 8598455301447LLU;
uint16_t x302 = 4U;
volatile uint64_t t54 = 180351819549LLU;
volatile int8_t x329 = INT8_MIN;
uint8_t x330 = UINT8_MAX;
volatile int32_t t55 = 2;
int32_t x335 = INT32_MIN;
uint64_t x349 = 4042574LLU;
volatile int64_t x353 = INT64_MAX;
volatile int32_t x367 = INT32_MIN;
static uint64_t x390 = 434784508767465548LLU;
volatile uint32_t x391 = 0U;
volatile int64_t t62 = 1LL;
int16_t x401 = -1;
static volatile int32_t t63 = 473;
static uint64_t x418 = 2326LLU;
int64_t x420 = INT64_MIN;
volatile int16_t x433 = 346;
int8_t x441 = INT8_MIN;
int8_t x442 = 18;
volatile int32_t t68 = 14;
int32_t x452 = INT32_MIN;
int16_t x482 = 12579;
int16_t x493 = 14;
int16_t x495 = -1;
static uint32_t x496 = 358U;
int8_t x497 = -24;
int64_t x501 = -1LL;
int16_t x503 = INT16_MAX;
int16_t x504 = -1;
int16_t x517 = INT16_MIN;
int8_t x518 = 0;
static volatile int64_t x521 = -585946456899LL;
static uint8_t x579 = 23U;
volatile int32_t t84 = -1;
int32_t x583 = INT32_MAX;
uint64_t x589 = UINT64_MAX;
int64_t x590 = INT64_MAX;
static int16_t x592 = 1;
uint8_t x610 = 2U;
uint8_t x662 = 38U;
int32_t x663 = -5119907;
volatile int32_t t92 = -6038337;
volatile uint32_t x670 = 57488U;
int32_t t94 = 269;
static uint16_t x700 = 4U;
static volatile int32_t t96 = -22;
int16_t x706 = INT16_MAX;
static int32_t t98 = -1014923092;
volatile uint16_t x729 = UINT16_MAX;
uint32_t x731 = 103581788U;
uint64_t t99 = 273922029LLU;
int16_t x740 = -1;
uint8_t x753 = UINT8_MAX;
volatile int8_t x754 = 3;
int32_t t101 = 158945;
int64_t x767 = -282859404526919813LL;
int8_t x768 = INT8_MIN;
int8_t x781 = INT8_MIN;
int16_t x782 = 42;
int16_t x783 = INT16_MAX;
volatile int32_t t104 = 553142;
volatile uint32_t x800 = UINT32_MAX;
static int64_t x802 = 43416012LL;
uint64_t x807 = UINT64_MAX;
int64_t x808 = INT64_MIN;
volatile int64_t t109 = 3383861836364LL;
static volatile uint32_t x812 = 5969231U;
uint8_t x818 = UINT8_MAX;
int32_t x819 = INT32_MAX;
uint64_t x820 = UINT64_MAX;
static uint64_t x824 = 0LLU;
volatile int16_t x837 = 15842;
int8_t x839 = INT8_MIN;
volatile int32_t t115 = 358;
static int32_t x872 = -199;
volatile int32_t t117 = -1005047;
volatile int64_t x876 = 2010528565403197653LL;
static int16_t x880 = -1;
volatile int16_t x889 = -460;
uint16_t x892 = UINT16_MAX;
static volatile int32_t t120 = -2;
volatile uint8_t x893 = UINT8_MAX;
volatile int32_t t121 = -112932;
uint16_t x905 = UINT16_MAX;
uint32_t x932 = UINT32_MAX;
int8_t x933 = INT8_MAX;
uint64_t x934 = 3368180668502096LLU;
uint64_t x940 = 2605097650LLU;
int32_t x941 = INT32_MIN;
uint32_t t126 = 5151U;
volatile int64_t t128 = 92576674321789LL;
static int64_t x971 = INT64_MIN;
uint8_t x972 = UINT8_MAX;
static uint64_t x978 = UINT64_MAX;
volatile int8_t x979 = INT8_MIN;
uint8_t x980 = UINT8_MAX;
int16_t x991 = INT16_MIN;
int32_t x1011 = -16;
uint64_t t135 = 5264006490LLU;
uint8_t x1017 = UINT8_MAX;
static int64_t x1019 = -53026257LL;
volatile int8_t x1025 = 37;
uint64_t x1031 = 332336762LLU;
uint32_t x1032 = 852U;
int32_t t138 = -1;
int32_t x1037 = INT32_MAX;
int16_t x1040 = -1;
static int32_t x1047 = INT32_MIN;
int16_t x1052 = INT16_MAX;
volatile uint16_t x1059 = 4U;
uint8_t x1063 = UINT8_MAX;
static uint64_t x1064 = 27224798LLU;
volatile int64_t t143 = 6857415596LL;
uint32_t x1069 = UINT32_MAX;
volatile int16_t x1076 = -12;
volatile uint32_t t145 = 1744560674U;
volatile int8_t x1078 = INT8_MAX;
static int32_t x1097 = -1;
int8_t x1098 = INT8_MAX;
static volatile int32_t t147 = -96;
uint8_t x1102 = 76U;
volatile uint64_t x1104 = 12679328461715387LLU;
volatile uint64_t x1131 = 1363960461201217LLU;
int64_t x1132 = -87776800LL;
volatile uint64_t t153 = 127308LLU;
int32_t x1153 = INT32_MAX;
int32_t t155 = 14486;
uint8_t x1158 = 42U;
int32_t x1168 = -152;
static uint64_t x1175 = 90LLU;
int64_t x1190 = 779397719LL;
uint32_t x1198 = 30534462U;
int64_t x1200 = INT64_MAX;
volatile uint32_t t161 = 39773231U;
int8_t x1216 = INT8_MAX;
int64_t x1225 = -1LL;
int8_t x1227 = 1;
int8_t x1231 = -1;
uint8_t x1232 = 24U;
int16_t x1238 = INT16_MAX;
uint8_t x1240 = 4U;
volatile int32_t t167 = -1;
int32_t x1245 = -338;
int8_t x1246 = 6;
int16_t x1251 = INT16_MAX;
int32_t x1252 = 2156065;
volatile int8_t x1255 = INT8_MAX;
uint32_t x1258 = 42747180U;
uint8_t x1280 = 4U;
int16_t x1303 = -1;
int64_t x1343 = -1568273LL;
static uint8_t x1360 = 4U;
int8_t x1368 = INT8_MIN;
uint64_t t183 = 4365472321467117477LLU;
int16_t x1381 = INT16_MAX;
static volatile uint64_t t185 = 426LLU;
volatile uint64_t x1389 = 4315072468860306LLU;
uint32_t x1399 = 168U;
uint64_t t187 = 172302095295704874LLU;
int8_t x1401 = -1;
int32_t x1426 = 0;
volatile int8_t x1431 = INT8_MAX;
int32_t x1448 = -1;
volatile uint64_t x1458 = UINT64_MAX;
int32_t x1459 = INT32_MIN;
int8_t x1468 = -1;
uint16_t x1482 = 3U;
volatile int8_t x1484 = INT8_MIN;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	int32_t x4 = 6;
	volatile uint32_t t0 = 428356U;

    t0 = (x1-(x2<<(x3==x4)));

    if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 345U;
	int64_t x6 = 34890689612LL;
	static uint16_t x7 = UINT16_MAX;
	uint32_t x8 = 160060U;
	int64_t t1 = -7LL;

    t1 = (x5-(x6<<(x7==x8)));

    if (t1 != -34890689267LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	static int8_t x14 = INT8_MAX;
	uint16_t x15 = UINT16_MAX;
	int32_t t2 = -196528295;

    t2 = (x13-(x14<<(x15==x16)));

    if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x18 = 231350U;
	int16_t x20 = INT16_MAX;
	volatile uint32_t t3 = 4U;

    t3 = (x17-(x18<<(x19==x20)));

    if (t3 != 2147252297U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x26 = 93U;
	uint32_t t4 = 354278833U;

    t4 = (x25-(x26<<(x27==x28)));

    if (t4 != 4294967270U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int8_t x37 = 1;
	static uint16_t x38 = 1U;
	static volatile uint64_t x39 = 248642949LLU;
	volatile int32_t t5 = 1506810;

    t5 = (x37-(x38<<(x39==x40)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x42 = 3128LLU;
	volatile uint32_t x43 = UINT32_MAX;
	static int16_t x44 = 1;
	static uint64_t t6 = 16624335643885460LLU;

    t6 = (x41-(x42<<(x43==x44)));

    if (t6 != 18446744073709548487LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x45 = INT16_MAX;
	uint8_t x46 = UINT8_MAX;
	uint32_t x47 = 2U;
	static uint16_t x48 = 102U;
	static volatile int32_t t7 = 1;

    t7 = (x45-(x46<<(x47==x48)));

    if (t7 != 32512) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x57 = INT16_MIN;
	volatile int16_t x60 = -1;
	volatile int32_t t8 = -6937;

    t8 = (x57-(x58<<(x59==x60)));

    if (t8 != -32895) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x61 = 5U;
	uint16_t x62 = 10236U;
	static int64_t x63 = INT64_MIN;
	static volatile int32_t t9 = 0;

    t9 = (x61-(x62<<(x63==x64)));

    if (t9 != -10231) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x65 = 40800059288LLU;
	static uint32_t x66 = 61007U;
	static volatile int32_t x67 = INT32_MAX;
	static volatile uint64_t t10 = 21443LLU;

    t10 = (x65-(x66<<(x67==x68)));

    if (t10 != 40799998281LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x74 = INT8_MAX;
	static volatile uint32_t x75 = 514136U;
	int32_t x76 = -23;
	static int32_t t11 = -57309670;

    t11 = (x73-(x74<<(x75==x76)));

    if (t11 != -33031305) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x81 = 24238529434246006LLU;
	static volatile uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MAX;

    t12 = (x81-(x82<<(x83==x84)));

    if (t12 != 24238529434246007LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x85 = INT16_MIN;
	volatile int8_t x86 = 3;
	int64_t x87 = INT64_MIN;
	static uint32_t x88 = 2221U;
	static volatile int32_t t13 = -71298;

    t13 = (x85-(x86<<(x87==x88)));

    if (t13 != -32771) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x89 = 118;
	int16_t x90 = 143;
	int8_t x91 = -4;
	int8_t x92 = 44;
	int32_t t14 = -673;

    t14 = (x89-(x90<<(x91==x92)));

    if (t14 != -25) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x99 = 2U;
	uint32_t x100 = UINT32_MAX;

    t15 = (x97-(x98<<(x99==x100)));

    if (t15 != -256) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x102 = UINT32_MAX;
	volatile int64_t x103 = -1LL;
	uint16_t x104 = 10477U;

    t16 = (x101-(x102<<(x103==x104)));

    if (t16 != 4294967169U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int32_t x105 = -1;
	int32_t x106 = 3610246;
	uint64_t x107 = 18837052982LLU;
	volatile int32_t t17 = 51;

    t17 = (x105-(x106<<(x107==x108)));

    if (t17 != -3610247) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x109 = 9U;
	volatile uint8_t x110 = 70U;
	volatile uint8_t x111 = 7U;
	uint8_t x112 = UINT8_MAX;
	int32_t t18 = -157098;

    t18 = (x109-(x110<<(x111==x112)));

    if (t18 != -61) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x114 = 5U;
	uint64_t x115 = 61605764140924173LLU;
	int16_t x116 = -1;
	volatile int32_t t19 = -38;

    t19 = (x113-(x114<<(x115==x116)));

    if (t19 != -15262817) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x121 = INT16_MIN;
	uint8_t x122 = 39U;
	int64_t x123 = 384018855LL;
	int8_t x124 = INT8_MAX;
	volatile int32_t t20 = -18266;

    t20 = (x121-(x122<<(x123==x124)));

    if (t20 != -32807) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x125 = INT16_MAX;
	static int64_t x126 = INT64_MAX;
	int8_t x128 = INT8_MIN;
	int64_t t21 = 224935LL;

    t21 = (x125-(x126<<(x127==x128)));

    if (t21 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x137 = INT8_MAX;
	static int8_t x138 = 0;
	uint32_t x139 = 77919220U;

    t22 = (x137-(x138<<(x139==x140)));

    if (t22 != 127) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x141 = INT16_MAX;
	static int32_t x142 = 135685235;
	volatile int64_t x143 = INT64_MIN;
	int32_t x144 = -941;
	int32_t t23 = 110693251;

    t23 = (x141-(x142<<(x143==x144)));

    if (t23 != -135652468) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x145 = -181;
	static int8_t x146 = 0;
	int8_t x147 = -1;
	volatile int32_t t24 = -447786;

    t24 = (x145-(x146<<(x147==x148)));

    if (t24 != -181) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x149 = -1;
	int16_t x151 = INT16_MIN;
	int32_t t25 = -1976;

    t25 = (x149-(x150<<(x151==x152)));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x153 = -5;
	volatile int64_t x155 = -1LL;
	static uint8_t x156 = 3U;
	volatile int64_t t26 = 3142807972LL;

    t26 = (x153-(x154<<(x155==x156)));

    if (t26 != -319513LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x161 = INT16_MIN;
	uint16_t x162 = UINT16_MAX;
	int16_t x163 = INT16_MIN;
	int16_t x164 = 0;
	volatile int32_t t27 = 858;

    t27 = (x161-(x162<<(x163==x164)));

    if (t27 != -98303) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x165 = INT16_MAX;
	static int32_t x166 = 500752019;
	int8_t x168 = INT8_MAX;
	static int32_t t28 = 529168;

    t28 = (x165-(x166<<(x167==x168)));

    if (t28 != -500719252) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x173 = 60U;
	static int16_t x174 = INT16_MAX;
	int64_t x175 = 897469LL;
	uint16_t x176 = UINT16_MAX;
	uint32_t t29 = 80U;

    t29 = (x173-(x174<<(x175==x176)));

    if (t29 != 4294934589U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x181 = UINT32_MAX;
	static volatile uint64_t x182 = 21882975470166442LLU;

    t30 = (x181-(x182<<(x183==x184)));

    if (t30 != 18424861102534352469LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static volatile uint64_t x190 = 43177LLU;
	volatile int8_t x191 = 1;

    t31 = (x189-(x190<<(x191==x192)));

    if (t31 != 18446744073709508566LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x194 = 487218U;
	int32_t x195 = -630;
	uint32_t x196 = 2774383U;
	uint32_t t32 = 27144U;

    t32 = (x193-(x194<<(x195==x196)));

    if (t32 != 4294512845U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x201 = 520LLU;
	static int16_t x202 = INT16_MAX;
	volatile int16_t x203 = 539;
	int64_t x204 = INT64_MAX;
	static volatile uint64_t t33 = 20LLU;

    t33 = (x201-(x202<<(x203==x204)));

    if (t33 != 18446744073709519369LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int64_t x205 = INT64_MIN;
	uint64_t x206 = 1669156697176970152LLU;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = 445U;

    t34 = (x205-(x206<<(x207==x208)));

    if (t34 != 7554215339677805656LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x209 = 32219LL;
	volatile int32_t x210 = 3860;
	int16_t x211 = -4;
	static int64_t x212 = 11LL;
	static int64_t t35 = 0LL;

    t35 = (x209-(x210<<(x211==x212)));

    if (t35 != 28359LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x213 = -1;
	int64_t x214 = INT64_MAX;
	static int16_t x215 = 3;
	uint32_t x216 = 7574066U;
	int64_t t36 = INT64_MIN;

    t36 = (x213-(x214<<(x215==x216)));

    if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x225 = INT32_MAX;
	uint64_t x226 = 19LLU;
	int32_t x227 = INT32_MIN;
	int64_t x228 = INT64_MIN;
	uint64_t t37 = 76555291694354LLU;

    t37 = (x225-(x226<<(x227==x228)));

    if (t37 != 2147483628LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x229 = 281U;
	static uint64_t x230 = 46LLU;
	int32_t x231 = INT32_MIN;
	uint32_t x232 = UINT32_MAX;
	uint64_t t38 = 1175567309LLU;

    t38 = (x229-(x230<<(x231==x232)));

    if (t38 != 235LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x237 = 761U;
	int16_t x238 = INT16_MAX;
	static volatile int32_t x239 = -1;
	volatile uint8_t x240 = 3U;

    t39 = (x237-(x238<<(x239==x240)));

    if (t39 != 4294935290U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x241 = 7051LLU;
	static int16_t x243 = INT16_MAX;
	int8_t x244 = -9;
	static volatile uint64_t t40 = 1967911074942048408LLU;

    t40 = (x241-(x242<<(x243==x244)));

    if (t40 != 18446744073709525900LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x245 = -22803;
	uint32_t x246 = 46450963U;
	static int64_t x247 = INT64_MAX;
	volatile int16_t x248 = INT16_MAX;
	volatile uint32_t t41 = 1U;

    t41 = (x245-(x246<<(x247==x248)));

    if (t41 != 4248493530U) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x249 = INT8_MIN;
	static uint64_t x250 = 153023854600LLU;
	static int32_t x251 = -38414704;
	uint32_t x252 = UINT32_MAX;
	volatile uint64_t t42 = 991555LLU;

    t42 = (x249-(x250<<(x251==x252)));

    if (t42 != 18446743920685696888LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x253 = INT32_MIN;
	uint16_t x254 = 0U;
	int32_t x256 = INT32_MIN;
	volatile int32_t t43 = INT32_MIN;

    t43 = (x253-(x254<<(x255==x256)));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint32_t x257 = 11066288U;
	uint32_t x258 = 354U;
	uint8_t x259 = 30U;
	static int8_t x260 = -3;
	volatile uint32_t t44 = 2038868720U;

    t44 = (x257-(x258<<(x259==x260)));

    if (t44 != 11065934U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x265 = INT8_MIN;
	int8_t x266 = 1;
	int8_t x267 = 10;
	int64_t x268 = INT64_MAX;
	volatile int32_t t45 = 1419767;

    t45 = (x265-(x266<<(x267==x268)));

    if (t45 != -129) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x269 = 2U;
	static uint8_t x270 = UINT8_MAX;
	uint32_t x271 = 62833U;
	uint16_t x272 = UINT16_MAX;
	int32_t t46 = -412563;

    t46 = (x269-(x270<<(x271==x272)));

    if (t46 != -253) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x273 = INT8_MIN;
	uint32_t x274 = UINT32_MAX;
	static uint8_t x275 = UINT8_MAX;
	static uint8_t x276 = UINT8_MAX;

    t47 = (x273-(x274<<(x275==x276)));

    if (t47 != 4294967170U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x281 = -5;
	static volatile uint32_t x282 = UINT32_MAX;
	uint16_t x283 = 18U;
	int64_t x284 = INT64_MIN;
	uint32_t t48 = 1U;

    t48 = (x281-(x282<<(x283==x284)));

    if (t48 != 4294967292U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x286 = 716U;
	int16_t x287 = INT16_MIN;
	int32_t x288 = -449330300;
	int32_t t49 = 4792948;

    t49 = (x285-(x286<<(x287==x288)));

    if (t49 != -33484) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x293 = 21092320497431897LLU;
	int16_t x294 = INT16_MAX;
	int32_t x296 = 807;

    t50 = (x293-(x294<<(x295==x296)));

    if (t50 != 21092320497399130LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x297 = 0U;
	uint8_t x299 = 9U;

    t51 = (x297-(x298<<(x299==x300)));

    if (t51 != 18446744073709503107LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x301 = 4661U;
	static int16_t x303 = INT16_MIN;
	int16_t x304 = -1;
	volatile uint32_t t52 = 1026393537U;

    t52 = (x301-(x302<<(x303==x304)));

    if (t52 != 4657U) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x305 = INT8_MIN;
	uint8_t x306 = UINT8_MAX;
	volatile int64_t x307 = INT64_MIN;
	int32_t x308 = 6560886;
	int32_t t53 = 299558;

    t53 = (x305-(x306<<(x307==x308)));

    if (t53 != -383) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x313 = 1648LLU;
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = 8;
	int32_t x316 = INT32_MIN;

    t54 = (x313-(x314<<(x315==x316)));

    if (t54 != 18446744073709487729LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x331 = 2U;
	static uint64_t x332 = 3849427400537941757LLU;

    t55 = (x329-(x330<<(x331==x332)));

    if (t55 != -383) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x333 = 190U;
	uint64_t x334 = UINT64_MAX;
	static int32_t x336 = -1;
	static uint64_t t56 = 393300LLU;

    t56 = (x333-(x334<<(x335==x336)));

    if (t56 != 191LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x337 = 9U;
	int64_t x338 = INT64_MAX;
	int64_t x339 = INT64_MIN;
	int64_t x340 = -1LL;
	static volatile int64_t t57 = 216256903083LL;

    t57 = (x337-(x338<<(x339==x340)));

    if (t57 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	static uint8_t x352 = 2U;
	static volatile uint64_t t58 = 3523500LLU;

    t58 = (x349-(x350<<(x351==x352)));

    if (t58 != 18446744069418626895LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x354 = 4553U;
	int8_t x355 = INT8_MIN;
	int8_t x356 = INT8_MAX;
	int64_t t59 = -393LL;

    t59 = (x353-(x354<<(x355==x356)));

    if (t59 != 9223372036854771254LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint16_t x365 = UINT16_MAX;
	static int8_t x366 = INT8_MAX;
	uint16_t x368 = 25U;
	volatile int32_t t60 = -1;

    t60 = (x365-(x366<<(x367==x368)));

    if (t60 != 65408) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x389 = UINT32_MAX;
	uint8_t x392 = 18U;
	uint64_t t61 = 11057233469813LLU;

    t61 = (x389-(x390<<(x391==x392)));

    if (t61 != 18011959569237053363LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x393 = -194LL;
	int32_t x394 = 4;
	volatile int8_t x395 = INT8_MAX;
	int8_t x396 = INT8_MIN;

    t62 = (x393-(x394<<(x395==x396)));

    if (t62 != -198LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x402 = 1;
	uint8_t x403 = 24U;
	uint64_t x404 = 61834527LLU;

    t63 = (x401-(x402<<(x403==x404)));

    if (t63 != -2) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x409 = 756465306731LLU;
	int32_t x410 = 229298379;
	static int64_t x411 = INT64_MIN;
	static int16_t x412 = INT16_MIN;
	uint64_t t64 = 70LLU;

    t64 = (x409-(x410<<(x411==x412)));

    if (t64 != 756236008352LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x417 = 3764728782283LLU;
	static volatile uint32_t x419 = 23494754U;
	uint64_t t65 = 7144LLU;

    t65 = (x417-(x418<<(x419==x420)));

    if (t65 != 3764728779957LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x421 = 6;
	volatile int8_t x422 = 0;
	int64_t x423 = INT64_MIN;
	volatile uint32_t x424 = 2382635U;
	static int32_t t66 = 91130;

    t66 = (x421-(x422<<(x423==x424)));

    if (t66 != 6) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x434 = 221;
	uint32_t x435 = UINT32_MAX;
	static int8_t x436 = INT8_MIN;
	volatile int32_t t67 = 157;

    t67 = (x433-(x434<<(x435==x436)));

    if (t67 != 125) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x443 = 3U;
	uint8_t x444 = UINT8_MAX;

    t68 = (x441-(x442<<(x443==x444)));

    if (t68 != -146) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x449 = INT8_MIN;
	static int16_t x450 = 3048;
	uint16_t x451 = 1411U;
	int32_t t69 = -57748482;

    t69 = (x449-(x450<<(x451==x452)));

    if (t69 != -3176) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x461 = INT64_MAX;
	volatile int16_t x462 = 8818;
	int8_t x463 = INT8_MIN;
	int16_t x464 = INT16_MAX;
	volatile int64_t t70 = 3073LL;

    t70 = (x461-(x462<<(x463==x464)));

    if (t70 != 9223372036854766989LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x465 = 481593936;
	int32_t x466 = 10;
	static uint8_t x467 = UINT8_MAX;
	int16_t x468 = -1;
	static int32_t t71 = 1;

    t71 = (x465-(x466<<(x467==x468)));

    if (t71 != 481593926) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x481 = 2725945758LLU;
	uint8_t x483 = UINT8_MAX;
	volatile int8_t x484 = -1;
	static uint64_t t72 = 125LLU;

    t72 = (x481-(x482<<(x483==x484)));

    if (t72 != 2725933179LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x489 = 7U;
	static int32_t x490 = 861;
	uint32_t x491 = UINT32_MAX;
	int16_t x492 = -14138;
	volatile int32_t t73 = -1;

    t73 = (x489-(x490<<(x491==x492)));

    if (t73 != -854) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x494 = 6LLU;
	static uint64_t t74 = 3LLU;

    t74 = (x493-(x494<<(x495==x496)));

    if (t74 != 8LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x498 = 2336U;
	uint8_t x499 = 16U;
	volatile int16_t x500 = INT16_MIN;
	volatile int32_t t75 = 3828;

    t75 = (x497-(x498<<(x499==x500)));

    if (t75 != -2360) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x502 = 377801423;
	volatile int64_t t76 = 3218200090321LL;

    t76 = (x501-(x502<<(x503==x504)));

    if (t76 != -377801424LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x519 = UINT32_MAX;
	int8_t x520 = INT8_MAX;
	volatile int32_t t77 = 3866;

    t77 = (x517-(x518<<(x519==x520)));

    if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x522 = UINT8_MAX;
	static uint32_t x523 = UINT32_MAX;
	volatile uint32_t x524 = UINT32_MAX;
	volatile int64_t t78 = -1805LL;

    t78 = (x521-(x522<<(x523==x524)));

    if (t78 != -585946457409LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x537 = INT32_MAX;
	int16_t x538 = 0;
	static int32_t x539 = -1;
	static uint32_t x540 = 231U;
	volatile int32_t t79 = INT32_MAX;

    t79 = (x537-(x538<<(x539==x540)));

    if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x549 = 466792LL;
	uint32_t x550 = UINT32_MAX;
	int32_t x551 = INT32_MIN;
	static int32_t x552 = INT32_MIN;
	int64_t t80 = 5745842543863LL;

    t80 = (x549-(x550<<(x551==x552)));

    if (t80 != -4294500502LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x557 = UINT16_MAX;
	uint8_t x558 = UINT8_MAX;
	int64_t x559 = 83796LL;
	int64_t x560 = 79127412565939LL;
	volatile int32_t t81 = -6331;

    t81 = (x557-(x558<<(x559==x560)));

    if (t81 != 65280) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x561 = 26U;
	static uint8_t x562 = 5U;
	uint8_t x563 = 28U;
	int8_t x564 = -26;
	int32_t t82 = -2;

    t82 = (x561-(x562<<(x563==x564)));

    if (t82 != 21) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x565 = 6U;
	volatile uint32_t x566 = UINT32_MAX;
	volatile int32_t x567 = INT32_MIN;
	volatile int32_t x568 = INT32_MIN;
	volatile uint32_t t83 = 421U;

    t83 = (x565-(x566<<(x567==x568)));

    if (t83 != 8U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x577 = INT8_MIN;
	volatile uint16_t x578 = 4U;
	volatile int32_t x580 = -2286;

    t84 = (x577-(x578<<(x579==x580)));

    if (t84 != -132) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x581 = 5U;
	uint8_t x582 = 75U;
	volatile uint8_t x584 = 13U;
	static int32_t t85 = 4;

    t85 = (x581-(x582<<(x583==x584)));

    if (t85 != -70) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x585 = INT8_MIN;
	int64_t x586 = 3LL;
	volatile uint8_t x587 = UINT8_MAX;
	uint64_t x588 = 395686039335LLU;
	int64_t t86 = 5383012114LL;

    t86 = (x585-(x586<<(x587==x588)));

    if (t86 != -131LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x591 = -1;
	uint64_t t87 = 126LLU;

    t87 = (x589-(x590<<(x591==x592)));

    if (t87 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x601 = -9;
	uint16_t x602 = 778U;
	static uint32_t x603 = 1899U;
	static int8_t x604 = 0;
	volatile int32_t t88 = -38484126;

    t88 = (x601-(x602<<(x603==x604)));

    if (t88 != -787) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x605 = 1LL;
	volatile int8_t x606 = INT8_MAX;
	int16_t x607 = -1;
	int16_t x608 = -11;
	int64_t t89 = -58632754724LL;

    t89 = (x605-(x606<<(x607==x608)));

    if (t89 != -126LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x609 = INT64_MAX;
	static volatile uint32_t x611 = UINT32_MAX;
	uint32_t x612 = UINT32_MAX;
	static volatile int64_t t90 = -208LL;

    t90 = (x609-(x610<<(x611==x612)));

    if (t90 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x617 = INT16_MIN;
	int16_t x618 = 224;
	int8_t x619 = INT8_MAX;
	int64_t x620 = INT64_MIN;
	int32_t t91 = 47937;

    t91 = (x617-(x618<<(x619==x620)));

    if (t91 != -32992) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x661 = 156U;
	int16_t x664 = INT16_MAX;

    t92 = (x661-(x662<<(x663==x664)));

    if (t92 != 118) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x669 = 32329U;
	int16_t x671 = INT16_MIN;
	int16_t x672 = 0;
	uint32_t t93 = 120U;

    t93 = (x669-(x670<<(x671==x672)));

    if (t93 != 4294942137U) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x673 = -1;
	static volatile int8_t x674 = 9;
	uint32_t x675 = UINT32_MAX;
	volatile uint8_t x676 = UINT8_MAX;

    t94 = (x673-(x674<<(x675==x676)));

    if (t94 != -10) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x681 = -1;
	uint64_t x682 = 12087LLU;
	int64_t x683 = -1LL;
	int8_t x684 = -1;
	volatile uint64_t t95 = 1700050726675LLU;

    t95 = (x681-(x682<<(x683==x684)));

    if (t95 != 18446744073709527441LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x697 = 10951;
	static volatile uint16_t x698 = 93U;
	uint16_t x699 = 42U;

    t96 = (x697-(x698<<(x699==x700)));

    if (t96 != 10858) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x705 = 0U;
	int32_t x707 = 53216;
	volatile int64_t x708 = INT64_MIN;
	int32_t t97 = -185015;

    t97 = (x705-(x706<<(x707==x708)));

    if (t97 != -32767) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x725 = -7571;
	uint16_t x726 = 235U;
	volatile uint64_t x727 = 0LLU;
	uint32_t x728 = UINT32_MAX;

    t98 = (x725-(x726<<(x727==x728)));

    if (t98 != -7806) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x730 = 1873932793761979LLU;
	int32_t x732 = -1;

    t99 = (x729-(x730<<(x731==x732)));

    if (t99 != 18444870140915855172LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x737 = UINT64_MAX;
	static uint64_t x738 = 372343841527LLU;
	static int8_t x739 = INT8_MIN;
	static volatile uint64_t t100 = 2258354LLU;

    t100 = (x737-(x738<<(x739==x740)));

    if (t100 != 18446743701365710088LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x755 = 1U;
	int64_t x756 = INT64_MAX;

    t101 = (x753-(x754<<(x755==x756)));

    if (t101 != 252) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x765 = UINT64_MAX;
	int8_t x766 = INT8_MAX;
	static volatile uint64_t t102 = 64LLU;

    t102 = (x765-(x766<<(x767==x768)));

    if (t102 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x769 = UINT8_MAX;
	int32_t x770 = INT32_MAX;
	volatile uint16_t x771 = UINT16_MAX;
	uint8_t x772 = 10U;
	volatile int32_t t103 = -33;

    t103 = (x769-(x770<<(x771==x772)));

    if (t103 != -2147483392) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x784 = INT16_MAX;

    t104 = (x781-(x782<<(x783==x784)));

    if (t104 != -212) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x785 = 10977323LLU;
	static int16_t x786 = INT16_MAX;
	uint64_t x787 = 2072199104832827415LLU;
	volatile uint32_t x788 = 342837754U;
	volatile uint64_t t105 = 7854152421018016LLU;

    t105 = (x785-(x786<<(x787==x788)));

    if (t105 != 10944556LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x793 = INT64_MAX;
	int64_t x794 = INT64_MAX;
	int64_t x795 = INT64_MIN;
	volatile uint32_t x796 = 620U;
	static int64_t t106 = 5378LL;

    t106 = (x793-(x794<<(x795==x796)));

    if (t106 != 0LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x797 = INT32_MAX;
	uint64_t x798 = 108237LLU;
	uint8_t x799 = 24U;
	uint64_t t107 = 7291181628472905LLU;

    t107 = (x797-(x798<<(x799==x800)));

    if (t107 != 2147375410LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x801 = -1;
	int64_t x803 = 78LL;
	int8_t x804 = 1;
	volatile int64_t t108 = 1672791978032606353LL;

    t108 = (x801-(x802<<(x803==x804)));

    if (t108 != -43416013LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x805 = INT64_MAX;
	uint32_t x806 = 7215749U;

    t109 = (x805-(x806<<(x807==x808)));

    if (t109 != 9223372036847560058LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x809 = INT64_MAX;
	int8_t x810 = INT8_MAX;
	int8_t x811 = 0;
	volatile int64_t t110 = -50069921048793LL;

    t110 = (x809-(x810<<(x811==x812)));

    if (t110 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x817 = UINT16_MAX;
	volatile int32_t t111 = 6;

    t111 = (x817-(x818<<(x819==x820)));

    if (t111 != 65280) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x821 = 9U;
	int64_t x822 = INT64_MAX;
	uint32_t x823 = 8730743U;
	static volatile int64_t t112 = 98570925884693LL;

    t112 = (x821-(x822<<(x823==x824)));

    if (t112 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x825 = INT64_MAX;
	int32_t x826 = 0;
	volatile uint32_t x827 = 692310U;
	uint8_t x828 = 24U;
	volatile int64_t t113 = INT64_MAX;

    t113 = (x825-(x826<<(x827==x828)));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x829 = UINT32_MAX;
	uint16_t x830 = 138U;
	uint64_t x831 = UINT64_MAX;
	volatile uint8_t x832 = UINT8_MAX;
	uint32_t t114 = 36U;

    t114 = (x829-(x830<<(x831==x832)));

    if (t114 != 4294967157U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x838 = 5;
	volatile int16_t x840 = INT16_MAX;

    t115 = (x837-(x838<<(x839==x840)));

    if (t115 != 15837) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x853 = INT8_MIN;
	volatile uint16_t x854 = 10169U;
	int32_t x855 = INT32_MIN;
	static int16_t x856 = -1;
	volatile int32_t t116 = -486169;

    t116 = (x853-(x854<<(x855==x856)));

    if (t116 != -10297) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x869 = INT16_MIN;
	uint8_t x870 = UINT8_MAX;
	static uint64_t x871 = 2722274220404LLU;

    t117 = (x869-(x870<<(x871==x872)));

    if (t117 != -33023) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x873 = INT32_MAX;
	int8_t x874 = 41;
	int32_t x875 = -3;
	volatile int32_t t118 = 1758703;

    t118 = (x873-(x874<<(x875==x876)));

    if (t118 != 2147483606) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x877 = 4324861403692LLU;
	uint8_t x878 = 5U;
	volatile uint16_t x879 = UINT16_MAX;
	uint64_t t119 = 22815391410LLU;

    t119 = (x877-(x878<<(x879==x880)));

    if (t119 != 4324861403687LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int16_t x890 = 3;
	volatile int64_t x891 = 922LL;

    t120 = (x889-(x890<<(x891==x892)));

    if (t120 != -463) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint8_t x894 = 8U;
	int8_t x895 = INT8_MIN;
	volatile int32_t x896 = INT32_MAX;

    t121 = (x893-(x894<<(x895==x896)));

    if (t121 != 247) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint32_t x906 = 659483U;
	int64_t x907 = 5563361553868LL;
	volatile uint32_t x908 = 2743100U;
	volatile uint32_t t122 = 11180908U;

    t122 = (x905-(x906<<(x907==x908)));

    if (t122 != 4294373348U) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x929 = INT16_MIN;
	uint16_t x930 = 2U;
	int32_t x931 = 50151317;
	volatile int32_t t123 = -15179;

    t123 = (x929-(x930<<(x931==x932)));

    if (t123 != -32770) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x935 = INT32_MAX;
	int64_t x936 = -1LL;
	volatile uint64_t t124 = 4297497400143LLU;

    t124 = (x933-(x934<<(x935==x936)));

    if (t124 != 18443375893041049647LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint8_t x937 = UINT8_MAX;
	int32_t x938 = 15064;
	static int8_t x939 = INT8_MIN;
	int32_t t125 = 1445563;

    t125 = (x937-(x938<<(x939==x940)));

    if (t125 != -14809) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x942 = UINT32_MAX;
	static int8_t x943 = -1;
	volatile uint16_t x944 = 32386U;

    t126 = (x941-(x942<<(x943==x944)));

    if (t126 != 2147483649U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x957 = -1LL;
	static int32_t x958 = INT32_MAX;
	int32_t x959 = INT32_MAX;
	int16_t x960 = -219;
	int64_t t127 = -1LL;

    t127 = (x957-(x958<<(x959==x960)));

    if (t127 != -2147483648LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x965 = 596789168870271LL;
	int8_t x966 = 2;
	int8_t x967 = -6;
	static int64_t x968 = INT64_MIN;

    t128 = (x965-(x966<<(x967==x968)));

    if (t128 != 596789168870269LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x969 = UINT32_MAX;
	int32_t x970 = 109187;
	static uint32_t t129 = 7334U;

    t129 = (x969-(x970<<(x971==x972)));

    if (t129 != 4294858108U) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x977 = INT8_MIN;
	volatile uint64_t t130 = 131285LLU;

    t130 = (x977-(x978<<(x979==x980)));

    if (t130 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x985 = INT32_MIN;
	uint32_t x986 = 290702U;
	int32_t x987 = INT32_MIN;
	volatile int8_t x988 = INT8_MAX;
	volatile uint32_t t131 = 13005071U;

    t131 = (x985-(x986<<(x987==x988)));

    if (t131 != 2147192946U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x989 = INT64_MIN;
	uint64_t x990 = UINT64_MAX;
	static uint64_t x992 = UINT64_MAX;
	volatile uint64_t t132 = 82LLU;

    t132 = (x989-(x990<<(x991==x992)));

    if (t132 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint64_t x993 = UINT64_MAX;
	uint64_t x994 = 97813755LLU;
	int8_t x995 = INT8_MIN;
	volatile int32_t x996 = INT32_MIN;
	uint64_t t133 = 948LLU;

    t133 = (x993-(x994<<(x995==x996)));

    if (t133 != 18446744073611737860LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1009 = -365659012;
	uint16_t x1010 = 3442U;
	volatile int64_t x1012 = 60222794LL;
	int32_t t134 = 1289845;

    t134 = (x1009-(x1010<<(x1011==x1012)));

    if (t134 != -365662454) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1013 = INT64_MAX;
	static volatile uint64_t x1014 = 731624531LLU;
	uint8_t x1015 = 4U;
	int32_t x1016 = -1;

    t135 = (x1013-(x1014<<(x1015==x1016)));

    if (t135 != 9223372036123151276LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x1018 = 992568877975515757LL;
	uint16_t x1020 = 499U;
	static volatile int64_t t136 = -24179353516504024LL;

    t136 = (x1017-(x1018<<(x1019==x1020)));

    if (t136 != -992568877975515502LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x1026 = 4814404LLU;
	int8_t x1027 = -17;
	int64_t x1028 = INT64_MIN;
	volatile uint64_t t137 = 3790LLU;

    t137 = (x1025-(x1026<<(x1027==x1028)));

    if (t137 != 18446744073704737249LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x1029 = -64;
	volatile uint16_t x1030 = 0U;

    t138 = (x1029-(x1030<<(x1031==x1032)));

    if (t138 != -64) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x1038 = INT32_MAX;
	uint16_t x1039 = 672U;
	int32_t t139 = 0;

    t139 = (x1037-(x1038<<(x1039==x1040)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x1045 = -10;
	int32_t x1046 = 24;
	int64_t x1048 = 1LL;
	int32_t t140 = -7445;

    t140 = (x1045-(x1046<<(x1047==x1048)));

    if (t140 != -34) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x1049 = 3496099U;
	static uint8_t x1050 = UINT8_MAX;
	static int16_t x1051 = -1;
	volatile uint32_t t141 = 1U;

    t141 = (x1049-(x1050<<(x1051==x1052)));

    if (t141 != 3495844U) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x1057 = INT16_MIN;
	static uint64_t x1058 = 173987573828214789LLU;
	int32_t x1060 = INT32_MIN;
	volatile uint64_t t142 = 502123856623LLU;

    t142 = (x1057-(x1058<<(x1059==x1060)));

    if (t142 != 18272756499881304059LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x1061 = 8898328U;
	int64_t x1062 = INT64_MAX;

    t143 = (x1061-(x1062<<(x1063==x1064)));

    if (t143 != -9223372036845877479LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint64_t x1070 = 874LLU;
	int8_t x1071 = 2;
	uint64_t x1072 = 248040LLU;
	static volatile uint64_t t144 = 1052740043365004980LLU;

    t144 = (x1069-(x1070<<(x1071==x1072)));

    if (t144 != 4294966421LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x1073 = 26U;
	volatile uint16_t x1074 = 2013U;
	static uint64_t x1075 = 34117100494853LLU;

    t145 = (x1073-(x1074<<(x1075==x1076)));

    if (t145 != 4294965309U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1077 = INT8_MIN;
	volatile uint16_t x1079 = 3U;
	static uint8_t x1080 = UINT8_MAX;
	volatile int32_t t146 = 0;

    t146 = (x1077-(x1078<<(x1079==x1080)));

    if (t146 != -255) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1099 = -1;
	int64_t x1100 = INT64_MIN;

    t147 = (x1097-(x1098<<(x1099==x1100)));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int32_t x1101 = -20;
	volatile int64_t x1103 = INT64_MAX;
	volatile int32_t t148 = 122547918;

    t148 = (x1101-(x1102<<(x1103==x1104)));

    if (t148 != -96) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1113 = -27256;
	int32_t x1114 = 126092;
	int32_t x1115 = INT32_MIN;
	int8_t x1116 = -63;
	volatile int32_t t149 = 8;

    t149 = (x1113-(x1114<<(x1115==x1116)));

    if (t149 != -153348) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x1121 = INT16_MIN;
	uint32_t x1122 = UINT32_MAX;
	int64_t x1123 = 157538LL;
	int64_t x1124 = INT64_MIN;
	uint32_t t150 = 70351U;

    t150 = (x1121-(x1122<<(x1123==x1124)));

    if (t150 != 4294934529U) { NG(); } else { ; }
	
}

void f151(void) {
    	static int8_t x1125 = INT8_MAX;
	uint64_t x1126 = 99493740LLU;
	int8_t x1127 = INT8_MIN;
	static int16_t x1128 = -1;
	static uint64_t t151 = 42470260371709266LLU;

    t151 = (x1125-(x1126<<(x1127==x1128)));

    if (t151 != 18446744073610058003LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x1129 = UINT32_MAX;
	uint32_t x1130 = 0U;
	uint32_t t152 = UINT32_MAX;

    t152 = (x1129-(x1130<<(x1131==x1132)));

    if (t152 != UINT32_MAX) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1137 = 7446941088688182856LLU;
	static uint16_t x1138 = 3245U;
	static int16_t x1139 = INT16_MAX;
	static volatile int16_t x1140 = -1;

    t153 = (x1137-(x1138<<(x1139==x1140)));

    if (t153 != 7446941088688179611LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x1145 = 11U;
	int64_t x1146 = 1045971256803631LL;
	int16_t x1147 = -1;
	int64_t x1148 = INT64_MIN;
	volatile int64_t t154 = -1036010645883503LL;

    t154 = (x1145-(x1146<<(x1147==x1148)));

    if (t154 != -1045971256803620LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1154 = INT8_MAX;
	uint8_t x1155 = 9U;
	volatile int64_t x1156 = -57074615LL;

    t155 = (x1153-(x1154<<(x1155==x1156)));

    if (t155 != 2147483520) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1157 = INT8_MIN;
	uint16_t x1159 = 28U;
	uint8_t x1160 = 10U;
	int32_t t156 = -1;

    t156 = (x1157-(x1158<<(x1159==x1160)));

    if (t156 != -170) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x1165 = 7118361LLU;
	int16_t x1166 = INT16_MAX;
	volatile int8_t x1167 = -12;
	uint64_t t157 = 1002740LLU;

    t157 = (x1165-(x1166<<(x1167==x1168)));

    if (t157 != 7085594LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1169 = 124U;
	static uint16_t x1170 = UINT16_MAX;
	uint32_t x1171 = UINT32_MAX;
	int32_t x1172 = -1562300;
	int32_t t158 = -18;

    t158 = (x1169-(x1170<<(x1171==x1172)));

    if (t158 != -65411) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x1173 = 89171LLU;
	uint32_t x1174 = 11719077U;
	volatile int8_t x1176 = 1;
	static volatile uint64_t t159 = 4233141310019LLU;

    t159 = (x1173-(x1174<<(x1175==x1176)));

    if (t159 != 18446744073697921710LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1189 = INT8_MIN;
	static volatile int8_t x1191 = INT8_MAX;
	volatile int8_t x1192 = -1;
	int64_t t160 = 13324590443716LL;

    t160 = (x1189-(x1190<<(x1191==x1192)));

    if (t160 != -779397847LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x1197 = INT32_MAX;
	static uint8_t x1199 = 2U;

    t161 = (x1197-(x1198<<(x1199==x1200)));

    if (t161 != 2116949185U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x1213 = UINT8_MAX;
	uint32_t x1214 = 17555627U;
	static uint8_t x1215 = 15U;
	uint32_t t162 = 5172U;

    t162 = (x1213-(x1214<<(x1215==x1216)));

    if (t162 != 4277411924U) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x1217 = 86476645641849694LL;
	uint8_t x1218 = UINT8_MAX;
	int16_t x1219 = INT16_MIN;
	uint64_t x1220 = 579159LLU;
	int64_t t163 = -336976851966738LL;

    t163 = (x1217-(x1218<<(x1219==x1220)));

    if (t163 != 86476645641849439LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x1226 = UINT16_MAX;
	static volatile int64_t x1228 = -1LL;
	volatile int64_t t164 = -109897523916536729LL;

    t164 = (x1225-(x1226<<(x1227==x1228)));

    if (t164 != -65536LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x1229 = INT8_MAX;
	uint8_t x1230 = UINT8_MAX;
	int32_t t165 = -64;

    t165 = (x1229-(x1230<<(x1231==x1232)));

    if (t165 != -128) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x1233 = -1;
	int8_t x1234 = 23;
	volatile int16_t x1235 = INT16_MIN;
	int16_t x1236 = INT16_MIN;
	volatile int32_t t166 = -5218558;

    t166 = (x1233-(x1234<<(x1235==x1236)));

    if (t166 != -47) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x1237 = -43;
	volatile int16_t x1239 = -13;

    t167 = (x1237-(x1238<<(x1239==x1240)));

    if (t167 != -32810) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x1247 = 3330U;
	int32_t x1248 = INT32_MAX;
	volatile int32_t t168 = 91;

    t168 = (x1245-(x1246<<(x1247==x1248)));

    if (t168 != -344) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x1249 = UINT8_MAX;
	int8_t x1250 = INT8_MAX;
	static volatile int32_t t169 = 777;

    t169 = (x1249-(x1250<<(x1251==x1252)));

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint16_t x1253 = 17U;
	volatile uint8_t x1254 = 1U;
	uint8_t x1256 = UINT8_MAX;
	int32_t t170 = -4075601;

    t170 = (x1253-(x1254<<(x1255==x1256)));

    if (t170 != 16) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x1257 = INT16_MIN;
	int64_t x1259 = INT64_MIN;
	static int32_t x1260 = -1;
	volatile uint32_t t171 = 1892U;

    t171 = (x1257-(x1258<<(x1259==x1260)));

    if (t171 != 4252187348U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1277 = -1;
	static volatile uint16_t x1278 = 17U;
	uint32_t x1279 = UINT32_MAX;
	volatile int32_t t172 = 322029531;

    t172 = (x1277-(x1278<<(x1279==x1280)));

    if (t172 != -18) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1281 = 5570023U;
	int32_t x1282 = 13033;
	static int8_t x1283 = INT8_MIN;
	volatile int8_t x1284 = -1;
	volatile uint32_t t173 = 427043076U;

    t173 = (x1281-(x1282<<(x1283==x1284)));

    if (t173 != 5556990U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1285 = UINT64_MAX;
	int16_t x1286 = INT16_MAX;
	volatile int64_t x1287 = INT64_MIN;
	volatile uint16_t x1288 = 3U;
	static volatile uint64_t t174 = 25646533974LLU;

    t174 = (x1285-(x1286<<(x1287==x1288)));

    if (t174 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1301 = INT8_MIN;
	static uint8_t x1302 = 10U;
	int8_t x1304 = INT8_MIN;
	int32_t t175 = -399028;

    t175 = (x1301-(x1302<<(x1303==x1304)));

    if (t175 != -138) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x1305 = 5U;
	uint16_t x1306 = UINT16_MAX;
	int32_t x1307 = INT32_MIN;
	int32_t x1308 = INT32_MIN;
	volatile uint32_t t176 = 9868U;

    t176 = (x1305-(x1306<<(x1307==x1308)));

    if (t176 != 4294836231U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint8_t x1313 = 4U;
	volatile uint32_t x1314 = 115652516U;
	int16_t x1315 = INT16_MIN;
	volatile uint32_t x1316 = 28U;
	volatile uint32_t t177 = 59U;

    t177 = (x1313-(x1314<<(x1315==x1316)));

    if (t177 != 4179314784U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int16_t x1317 = INT16_MIN;
	volatile uint32_t x1318 = 445089U;
	static volatile uint32_t x1319 = 3U;
	int16_t x1320 = -182;
	volatile uint32_t t178 = 1U;

    t178 = (x1317-(x1318<<(x1319==x1320)));

    if (t178 != 4294489439U) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x1341 = 97U;
	uint16_t x1342 = UINT16_MAX;
	int16_t x1344 = INT16_MIN;
	static volatile int32_t t179 = 249071460;

    t179 = (x1341-(x1342<<(x1343==x1344)));

    if (t179 != -65438) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x1349 = INT8_MAX;
	static int8_t x1350 = 17;
	static uint32_t x1351 = UINT32_MAX;
	int16_t x1352 = -1;
	int32_t t180 = 227;

    t180 = (x1349-(x1350<<(x1351==x1352)));

    if (t180 != 93) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x1357 = INT32_MAX;
	uint8_t x1358 = 60U;
	static int32_t x1359 = INT32_MIN;
	static volatile int32_t t181 = 10661;

    t181 = (x1357-(x1358<<(x1359==x1360)));

    if (t181 != 2147483587) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x1365 = INT64_MAX;
	int32_t x1366 = 1412794;
	static int8_t x1367 = 21;
	int64_t t182 = -7046LL;

    t182 = (x1365-(x1366<<(x1367==x1368)));

    if (t182 != 9223372036853363013LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint64_t x1377 = UINT64_MAX;
	volatile int64_t x1378 = 85797LL;
	volatile int64_t x1379 = -1LL;
	uint8_t x1380 = 0U;

    t183 = (x1377-(x1378<<(x1379==x1380)));

    if (t183 != 18446744073709465818LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x1382 = 0LLU;
	int8_t x1383 = INT8_MIN;
	int32_t x1384 = INT32_MAX;
	volatile uint64_t t184 = 17434580LLU;

    t184 = (x1381-(x1382<<(x1383==x1384)));

    if (t184 != 32767LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x1385 = 9050298119732849LLU;
	volatile uint16_t x1386 = 15206U;
	static int16_t x1387 = INT16_MAX;
	volatile int16_t x1388 = INT16_MIN;

    t185 = (x1385-(x1386<<(x1387==x1388)));

    if (t185 != 9050298119717643LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x1390 = INT32_MAX;
	int8_t x1391 = INT8_MIN;
	int8_t x1392 = -1;
	static volatile uint64_t t186 = 55177173051272513LLU;

    t186 = (x1389-(x1390<<(x1391==x1392)));

    if (t186 != 4315070321376659LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int16_t x1397 = INT16_MIN;
	uint64_t x1398 = 72812815LLU;
	uint16_t x1400 = 276U;

    t187 = (x1397-(x1398<<(x1399==x1400)));

    if (t187 != 18446744073636706033LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1402 = 4813;
	int64_t x1403 = -1LL;
	volatile int32_t x1404 = INT32_MIN;
	volatile int32_t t188 = -8404452;

    t188 = (x1401-(x1402<<(x1403==x1404)));

    if (t188 != -4814) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1413 = -1;
	static uint16_t x1414 = 85U;
	int16_t x1415 = INT16_MIN;
	static volatile uint16_t x1416 = UINT16_MAX;
	int32_t t189 = -263;

    t189 = (x1413-(x1414<<(x1415==x1416)));

    if (t189 != -86) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1417 = -63;
	uint16_t x1418 = 5899U;
	uint64_t x1419 = UINT64_MAX;
	int16_t x1420 = 11;
	int32_t t190 = -228;

    t190 = (x1417-(x1418<<(x1419==x1420)));

    if (t190 != -5962) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x1421 = UINT32_MAX;
	uint64_t x1422 = UINT64_MAX;
	int64_t x1423 = INT64_MAX;
	int16_t x1424 = -1;
	uint64_t t191 = 29775485595LLU;

    t191 = (x1421-(x1422<<(x1423==x1424)));

    if (t191 != 4294967296LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1425 = UINT8_MAX;
	int8_t x1427 = INT8_MIN;
	int16_t x1428 = -1;
	volatile int32_t t192 = -3645370;

    t192 = (x1425-(x1426<<(x1427==x1428)));

    if (t192 != 255) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1429 = INT8_MIN;
	uint16_t x1430 = UINT16_MAX;
	int64_t x1432 = INT64_MIN;
	int32_t t193 = -22512;

    t193 = (x1429-(x1430<<(x1431==x1432)));

    if (t193 != -65663) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1437 = -1;
	uint32_t x1438 = UINT32_MAX;
	int64_t x1439 = -502430085489411LL;
	int64_t x1440 = INT64_MAX;
	uint32_t t194 = 46500U;

    t194 = (x1437-(x1438<<(x1439==x1440)));

    if (t194 != 0U) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1441 = 0LL;
	volatile int64_t x1442 = 3415590424272755LL;
	volatile int16_t x1443 = INT16_MAX;
	static int16_t x1444 = INT16_MIN;
	volatile int64_t t195 = 53886433LL;

    t195 = (x1441-(x1442<<(x1443==x1444)));

    if (t195 != -3415590424272755LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x1445 = -1LL;
	uint64_t x1446 = 81060039025343LLU;
	uint16_t x1447 = UINT16_MAX;
	static volatile uint64_t t196 = 93247741124476LLU;

    t196 = (x1445-(x1446<<(x1447==x1448)));

    if (t196 != 18446663013670526272LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1457 = 0U;
	volatile int8_t x1460 = INT8_MIN;
	static uint64_t t197 = 5LLU;

    t197 = (x1457-(x1458<<(x1459==x1460)));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static uint8_t x1465 = 17U;
	volatile uint32_t x1466 = UINT32_MAX;
	static volatile uint32_t x1467 = 7013817U;
	volatile uint32_t t198 = 2644U;

    t198 = (x1465-(x1466<<(x1467==x1468)));

    if (t198 != 18U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x1481 = 1U;
	int64_t x1483 = -3941302827602591LL;
	volatile int32_t t199 = -13710;

    t199 = (x1481-(x1482<<(x1483==x1484)));

    if (t199 != -2) { NG(); } else { ; }
	
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

