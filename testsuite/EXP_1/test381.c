
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

static int8_t x8 = -3;
uint32_t t0 = 4761U;
uint32_t x22 = 213539U;
int64_t x23 = -1LL;
volatile int64_t t3 = 4941533703782LL;
uint8_t x30 = 124U;
uint64_t x32 = 26250LLU;
int8_t x36 = INT8_MAX;
volatile uint64_t t6 = 0LLU;
int32_t x42 = INT32_MIN;
uint64_t x43 = 9387734212LLU;
static uint64_t t7 = 1058804202865LLU;
uint64_t x50 = UINT64_MAX;
uint64_t t8 = 8423102562109478LLU;
uint64_t x54 = 0LLU;
uint64_t t9 = 1836963810LLU;
int32_t x59 = 0;
int32_t t10 = 1;
static int16_t x81 = -1;
int16_t x88 = -1;
uint64_t t14 = 174406904LLU;
uint16_t x97 = 9U;
int8_t x116 = 1;
static uint64_t t19 = 214033695777104034LLU;
static uint16_t x119 = UINT16_MAX;
int16_t x120 = INT16_MIN;
uint32_t x121 = 3469U;
int8_t x125 = INT8_MIN;
volatile int64_t x128 = -1LL;
volatile int16_t x130 = 41;
uint16_t x144 = 0U;
int32_t x148 = 27139;
int16_t x149 = INT16_MIN;
uint16_t x162 = 385U;
volatile int8_t x163 = INT8_MAX;
volatile int64_t t29 = -858410140LL;
volatile int8_t x169 = INT8_MAX;
int8_t x195 = INT8_MAX;
volatile uint32_t x198 = 262318U;
static int16_t x200 = INT16_MIN;
int32_t x220 = -1;
static uint32_t x224 = UINT32_MAX;
static volatile int16_t x229 = -26;
volatile int32_t t39 = -939298;
int32_t x237 = -31720;
static uint8_t x243 = 3U;
int32_t x246 = -2;
static int32_t x248 = INT32_MIN;
int64_t t44 = -1057193943388067LL;
int32_t t45 = -850;
volatile uint32_t x277 = 11039U;
uint64_t x278 = UINT64_MAX;
int16_t x298 = -20;
uint64_t t52 = 94410LLU;
volatile int32_t x314 = -1;
volatile int32_t t53 = -4956465;
int32_t x319 = 17;
uint64_t x327 = 82717LLU;
static int8_t x328 = INT8_MAX;
volatile uint64_t t56 = 125LLU;
int16_t x330 = INT16_MAX;
static int8_t x331 = INT8_MIN;
static uint64_t x338 = 2975444LLU;
static uint32_t x339 = 50095858U;
int64_t x340 = INT64_MIN;
static volatile uint64_t x341 = UINT64_MAX;
static volatile int32_t x342 = INT32_MIN;
volatile uint64_t x346 = 711LLU;
int64_t x347 = INT64_MIN;
static uint32_t x348 = 1312861659U;
int32_t x361 = -15753019;
int16_t x363 = INT16_MIN;
volatile uint32_t x369 = 110355039U;
int16_t x371 = 27;
int16_t x372 = INT16_MIN;
static uint8_t x381 = UINT8_MAX;
int32_t x385 = INT32_MIN;
static uint64_t x386 = 286627668851831502LLU;
int32_t x407 = INT32_MIN;
uint64_t t70 = 1285178418583598201LLU;
uint16_t x414 = 0U;
static int16_t x416 = INT16_MIN;
static uint64_t x424 = UINT64_MAX;
int64_t x425 = -6236635952551LL;
int16_t x430 = -504;
static int32_t t76 = 1165456;
int16_t x438 = -1;
volatile uint32_t x440 = 7575U;
uint32_t t82 = 138626U;
int8_t x470 = INT8_MIN;
volatile int8_t x472 = -1;
int16_t x473 = 45;
int64_t x480 = -1LL;
int16_t x495 = INT16_MIN;
int8_t x497 = INT8_MIN;
int64_t x500 = INT64_MAX;
int16_t x501 = 1;
volatile uint64_t x510 = 21367LLU;
static uint64_t t90 = 62839856036141894LLU;
static volatile uint64_t t91 = 32140089987LLU;
static int64_t x522 = -12837LL;
static uint64_t t92 = 71627240544099797LLU;
int8_t x531 = -1;
static int64_t x536 = -1LL;
uint32_t x538 = UINT32_MAX;
uint16_t x548 = 0U;
int8_t x549 = -1;
uint16_t x560 = 859U;
int16_t x565 = INT16_MIN;
int32_t t99 = 89;
uint64_t x580 = 494315416107LLU;
int8_t x589 = -1;
static int32_t x592 = 349;
static uint64_t t103 = 241008366LLU;
uint8_t x596 = UINT8_MAX;
static volatile uint64_t t104 = 4226601802658110375LLU;
int32_t x597 = -1;
volatile uint8_t x598 = UINT8_MAX;
volatile int16_t x611 = 954;
int8_t x616 = INT8_MIN;
static int16_t x617 = INT16_MAX;
int32_t x642 = INT32_MIN;
uint32_t x643 = 2469859U;
volatile uint32_t t113 = 2720U;
volatile uint8_t x652 = 6U;
uint16_t x660 = 16U;
uint64_t x672 = 93519LLU;
volatile uint64_t t121 = 31337507LLU;
int16_t x690 = -1;
volatile int32_t x700 = INT32_MAX;
uint16_t x702 = 107U;
static int16_t x704 = -157;
int32_t x705 = INT32_MIN;
static int32_t x710 = INT32_MAX;
static volatile uint64_t t127 = 29975716218572510LLU;
uint32_t t128 = 96673U;
int8_t x721 = INT8_MIN;
uint64_t t129 = 2LLU;
int8_t x750 = -1;
int64_t x751 = -100023729617LL;
uint8_t x752 = UINT8_MAX;
int64_t t132 = -743601436817581LL;
static int8_t x758 = INT8_MAX;
uint32_t x759 = UINT32_MAX;
int8_t x763 = INT8_MIN;
int64_t x765 = INT64_MIN;
uint16_t x767 = 0U;
volatile int16_t x773 = INT16_MAX;
int32_t x776 = -1;
uint8_t x777 = 59U;
int16_t x778 = -1;
int16_t x780 = INT16_MAX;
int8_t x793 = INT8_MIN;
volatile uint64_t x795 = 1LLU;
static volatile int32_t x799 = -1;
volatile uint64_t t143 = 128485754LLU;
volatile uint8_t x806 = UINT8_MAX;
uint16_t x807 = UINT16_MAX;
static int16_t x815 = -1;
int64_t x816 = -1LL;
uint32_t x818 = 10U;
static int32_t t147 = 53404369;
int32_t x831 = INT32_MAX;
static volatile uint16_t x832 = 77U;
uint64_t t148 = 149849448486575922LLU;
uint8_t x834 = UINT8_MAX;
uint16_t x835 = UINT16_MAX;
static int8_t x849 = -33;
volatile int64_t t151 = -42493115LL;
static volatile uint16_t x881 = 7188U;
static int16_t x885 = -1;
uint8_t x902 = UINT8_MAX;
static int32_t x907 = -14;
static volatile uint32_t x922 = 30079661U;
static int64_t x923 = INT64_MIN;
uint64_t x930 = UINT64_MAX;
static volatile uint16_t x932 = 27U;
static uint8_t x938 = 12U;
static volatile int16_t x940 = -1;
uint16_t x983 = 11U;
volatile int64_t x999 = -1LL;
int32_t x1000 = -1;
volatile uint8_t x1004 = 22U;
volatile int64_t t171 = 132934348008LL;
int8_t x1010 = -1;
volatile int32_t x1012 = -1;
static uint64_t x1029 = 1351937910099106LLU;
int64_t x1031 = INT64_MIN;
int64_t x1034 = INT64_MAX;
volatile int16_t x1037 = INT16_MIN;
static uint8_t x1041 = 0U;
int8_t x1047 = INT8_MAX;
int8_t x1048 = -5;
static int32_t x1055 = INT32_MIN;
static volatile uint64_t t181 = 46407977012LLU;
int32_t x1059 = -434;
uint32_t x1061 = UINT32_MAX;
int16_t x1071 = INT16_MIN;
int8_t x1080 = -3;
volatile int64_t t187 = -31LL;
int8_t x1094 = -6;
int32_t x1095 = INT32_MIN;
uint64_t t190 = 112789278LLU;
uint32_t x1133 = UINT32_MAX;
volatile uint64_t x1137 = 58266660117700LLU;
volatile uint64_t x1140 = 1433535491665009374LLU;
uint64_t t193 = 13786LLU;
int16_t x1144 = INT16_MAX;
uint32_t t194 = 56202U;
int8_t x1155 = INT8_MIN;
volatile uint8_t x1160 = 5U;
int16_t x1167 = INT16_MIN;
uint16_t x1168 = 3397U;
volatile int32_t x1173 = -1;
uint64_t x1175 = 220139960109LLU;


void f0(void) {
    	uint16_t x5 = 488U;
	uint32_t x6 = 16158U;
	int8_t x7 = INT8_MIN;

    t0 = (((x5-x6)^x7)*x8);

    if (t0 != 4294920226U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = INT8_MIN;
	static uint16_t x10 = 21707U;
	int16_t x11 = -1;
	static uint32_t x12 = 62600052U;
	static volatile uint32_t t1 = 68U;

    t1 = (((x9-x10)^x11)*x12);

    if (t1 != 1009935240U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x13 = 800457393638LLU;
	static int8_t x14 = INT8_MIN;
	static uint8_t x15 = 124U;
	int64_t x16 = -1LL;
	uint64_t t2 = 13397LLU;

    t2 = (((x13-x14)^x15)*x16);

    if (t2 != 18446743273252157926LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x21 = -1;
	static uint8_t x24 = 0U;

    t3 = (((x21-x22)^x23)*x24);

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = INT16_MIN;
	uint32_t x26 = UINT32_MAX;
	int16_t x27 = -1;
	static int16_t x28 = 241;
	uint32_t t4 = 40770U;

    t4 = (((x25-x26)^x27)*x28);

    if (t4 != 7896606U) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint32_t x29 = UINT32_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile uint64_t t5 = 74225724170LLU;

    t5 = (((x29-x30)^x31)*x32);

    if (t5 != 3255000LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x33 = 2624U;
	static uint64_t x34 = 88287LLU;
	int32_t x35 = INT32_MIN;

    t6 = (((x33-x34)^x35)*x36);

    if (t6 != 272719544095LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x41 = -1LL;
	volatile uint64_t x44 = 0LLU;

    t7 = (((x41-x42)^x43)*x44);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x49 = INT64_MIN;
	int8_t x51 = 19;
	static int64_t x52 = INT64_MIN;

    t8 = (((x49-x50)^x51)*x52);

    if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x53 = -1;
	volatile int64_t x55 = INT64_MIN;
	volatile uint32_t x56 = UINT32_MAX;

    t9 = (((x53-x54)^x55)*x56);

    if (t9 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x57 = 862;
	int16_t x58 = -5417;
	static uint16_t x60 = 45U;

    t10 = (((x57-x58)^x59)*x60);

    if (t10 != 282555) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MAX;
	int64_t x63 = INT64_MAX;
	int8_t x64 = 1;
	int64_t t11 = 1LL;

    t11 = (((x61-x62)^x63)*x64);

    if (t11 != 9223372032559808639LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x73 = 6U;
	static volatile uint32_t x74 = 76748760U;
	volatile uint64_t x75 = 2LLU;
	int32_t x76 = 956;
	static uint64_t t12 = 14676089249959162LLU;

    t12 = (((x73-x74)^x75)*x76);

    if (t12 != 4032616924240LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x82 = 18;
	uint16_t x83 = UINT16_MAX;
	int16_t x84 = 19;
	static int32_t t13 = -1964842;

    t13 = (((x81-x82)^x83)*x84);

    if (t13 != -1244842) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x85 = 2414LLU;
	int32_t x86 = -240531181;
	int8_t x87 = INT8_MAX;

    t14 = (((x85-x86)^x87)*x88);

    if (t14 != 18446744073469018076LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x93 = 3U;
	volatile uint64_t x94 = 516260079610LLU;
	static uint16_t x95 = 3373U;
	uint64_t x96 = 17577797309LLU;
	volatile uint64_t t15 = 145065295LLU;

    t15 = (((x93-x94)^x95)*x96);

    if (t15 != 1083033179901211540LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x98 = 3U;
	int16_t x99 = INT16_MAX;
	uint64_t x100 = 1632402471944770LLU;
	uint64_t t16 = 1641434LLU;

    t16 = (((x97-x98)^x99)*x100);

    if (t16 != 16585649235963506738LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x101 = 20328U;
	uint64_t x102 = 1732008009625350537LLU;
	uint8_t x103 = UINT8_MAX;
	static uint16_t x104 = 15U;
	uint64_t t17 = 15LLU;

    t17 = (((x101-x102)^x103)*x104);

    if (t17 != 10913368003039147232LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x109 = 470;
	uint64_t x110 = 3128530044148711LLU;
	int64_t x111 = 609575049360732LL;
	volatile uint64_t x112 = 47LLU;
	volatile uint64_t t18 = 366155LLU;

    t18 = (((x109-x110)^x111)*x112);

    if (t18 != 18324836626470260957LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x113 = 3U;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 13165710437299892LLU;

    t19 = (((x113-x114)^x115)*x116);

    if (t19 != 13165710437299888LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x117 = -1LL;
	int32_t x118 = 0;
	static volatile int64_t t20 = -315957200514461LL;

    t20 = (((x117-x118)^x119)*x120);

    if (t20 != 2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x122 = UINT16_MAX;
	uint32_t x123 = 173951U;
	static uint32_t x124 = UINT32_MAX;
	static uint32_t t21 = 2U;

    t21 = (((x121-x122)^x123)*x124);

    if (t21 != 152847U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int64_t x126 = INT64_MIN;
	uint8_t x127 = 11U;
	volatile int64_t t22 = -3149339566724934157LL;

    t22 = (((x125-x126)^x127)*x128);

    if (t22 != -9223372036854775691LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x129 = UINT8_MAX;
	uint32_t x131 = 29244U;
	uint64_t x132 = 49LLU;
	uint64_t t23 = 128893LLU;

    t23 = (((x129-x130)^x131)*x132);

    if (t23 != 1441482LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x137 = 22706317LLU;
	volatile uint64_t x138 = UINT64_MAX;
	int64_t x139 = INT64_MIN;
	static volatile int32_t x140 = INT32_MIN;
	static uint64_t t24 = 233273286574205414LLU;

    t24 = (((x137-x138)^x139)*x140);

    if (t24 != 18397982627098263552LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x141 = INT8_MAX;
	int16_t x142 = -1;
	uint8_t x143 = UINT8_MAX;
	int32_t t25 = 1;

    t25 = (((x141-x142)^x143)*x144);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x145 = UINT32_MAX;
	uint16_t x146 = 12U;
	volatile uint16_t x147 = 3101U;
	uint32_t t26 = 6019U;

    t26 = (((x145-x146)^x147)*x148);

    if (t26 != 4211107786U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile uint16_t x150 = UINT16_MAX;
	volatile uint32_t x151 = 2U;
	static uint32_t x152 = 282493U;
	volatile uint32_t t27 = 23273U;

    t27 = (((x149-x150)^x151)*x152);

    if (t27 != 2295426679U) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x161 = INT16_MIN;
	int32_t x164 = -1;
	int32_t t28 = 4067;

    t28 = (((x161-x162)^x163)*x164);

    if (t28 != 33280) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x165 = INT8_MIN;
	uint32_t x166 = 4661U;
	static int64_t x167 = -1LL;
	int32_t x168 = 2783758;

    t29 = (((x165-x166)^x167)*x168);

    if (t29 != -11956136241345064LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x170 = UINT32_MAX;
	int32_t x171 = 637990;
	uint32_t x172 = 19U;
	volatile uint32_t t30 = 64656U;

    t30 = (((x169-x170)^x171)*x172);

    if (t30 != 12124242U) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint32_t x173 = 377313U;
	static volatile int32_t x174 = 74267328;
	volatile int32_t x175 = -19;
	int8_t x176 = 5;
	uint32_t t31 = 14U;

    t31 = (((x173-x174)^x175)*x176);

    if (t31 != 369449980U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x189 = -6286;
	uint16_t x190 = UINT16_MAX;
	uint8_t x191 = UINT8_MAX;
	volatile int8_t x192 = 63;
	int32_t t32 = 938901;

    t32 = (((x189-x190)^x191)*x192);

    if (t32 != -4523148) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x193 = -1;
	volatile int32_t x194 = -2;
	uint64_t x196 = 728481LLU;
	volatile uint64_t t33 = 2432LLU;

    t33 = (((x193-x194)^x195)*x196);

    if (t33 != 91788606LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x197 = 15;
	static int8_t x199 = -1;
	static volatile uint32_t t34 = 10171U;

    t34 = (((x197-x198)^x199)*x200);

    if (t34 != 4289789952U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x201 = 88U;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = UINT16_MAX;
	int16_t x204 = INT16_MIN;
	uint32_t t35 = 834656710U;

    t35 = (((x201-x202)^x203)*x204);

    if (t35 != 2154594304U) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int32_t x213 = INT32_MIN;
	int32_t x214 = -12;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MAX;
	static volatile uint32_t t36 = 8U;

    t36 = (((x213-x214)^x215)*x216);

    if (t36 != 2147481997U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x217 = INT16_MIN;
	uint16_t x218 = 41U;
	int32_t x219 = 18794383;
	static int32_t t37 = 6791900;

    t37 = (((x217-x218)^x219)*x220);

    if (t37 != 18761640) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x221 = 0U;
	int16_t x222 = -1;
	int32_t x223 = INT32_MIN;
	static volatile uint32_t t38 = 14936U;

    t38 = (((x221-x222)^x223)*x224);

    if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x230 = 81U;
	static int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MAX;

    t39 = (((x229-x230)^x231)*x232);

    if (t39 != 4147947) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x238 = 985U;
	uint8_t x239 = 6U;
	int16_t x240 = INT16_MIN;
	uint32_t t40 = 1859956U;

    t40 = (((x237-x238)^x239)*x240);

    if (t40 != 1071874048U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x241 = 63371352;
	static uint8_t x242 = UINT8_MAX;
	int64_t x244 = -46529861539LL;
	int64_t t41 = 380918LL;

    t41 = (((x241-x242)^x243)*x244);

    if (t41 != -2948648415514399822LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint32_t x245 = 1695U;
	int32_t x247 = -1;
	static uint32_t t42 = 8966U;

    t42 = (((x245-x246)^x247)*x248);

    if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x253 = INT16_MAX;
	uint8_t x254 = 9U;
	int32_t x255 = -42008621;
	static int64_t x256 = -1LL;
	volatile int64_t t43 = -74LL;

    t43 = (((x253-x254)^x255)*x256);

    if (t43 != 42041307LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x261 = UINT16_MAX;
	uint8_t x262 = UINT8_MAX;
	int64_t x263 = -1LL;
	static int32_t x264 = INT32_MIN;

    t44 = (((x261-x262)^x263)*x264);

    if (t44 != 140189880025088LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	volatile int32_t x271 = INT32_MAX;
	static int8_t x272 = -1;

    t45 = (((x269-x270)^x271)*x272);

    if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x273 = -611163;
	static uint64_t x274 = 85LLU;
	int32_t x275 = INT32_MIN;
	uint16_t x276 = 161U;
	uint64_t t46 = 2771598333375LLU;

    t46 = (((x273-x274)^x275)*x276);

    if (t46 != 345646456400LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x279 = 1491484036LL;
	uint8_t x280 = UINT8_MAX;
	volatile uint64_t t47 = 11771338366458536LLU;

    t47 = (((x277-x278)^x279)*x280);

    if (t47 != 380325891420LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x281 = -1LL;
	volatile uint32_t x282 = UINT32_MAX;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = 1;
	volatile int64_t t48 = 757296279LL;

    t48 = (((x281-x282)^x283)*x284);

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x289 = -3;
	int16_t x290 = INT16_MIN;
	uint64_t x291 = 4001410946687LLU;
	int8_t x292 = INT8_MAX;
	uint64_t t49 = 5131181231844LLU;

    t49 = (((x289-x290)^x291)*x292);

    if (t49 != 508179192928126LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x293 = 5663;
	uint64_t x294 = 387365096415097094LLU;
	int8_t x295 = INT8_MIN;
	int32_t x296 = 462038;
	uint64_t t50 = 366LLU;

    t50 = (((x293-x294)^x295)*x296);

    if (t50 != 7083414305908778982LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x297 = 0;
	uint8_t x299 = 1U;
	uint64_t x300 = 950001805343551LLU;
	uint64_t t51 = 42934966LLU;

    t51 = (((x297-x298)^x299)*x300);

    if (t51 != 19950037912214571LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x301 = -47;
	uint8_t x302 = UINT8_MAX;
	uint64_t x303 = 197842LLU;
	int8_t x304 = -1;

    t52 = (((x301-x302)^x303)*x304);

    if (t52 != 198144LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x313 = INT8_MIN;
	int8_t x315 = -1;
	uint16_t x316 = 0U;

    t53 = (((x313-x314)^x315)*x316);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint8_t x317 = UINT8_MAX;
	volatile uint16_t x318 = 5U;
	int64_t x320 = 5LL;
	volatile int64_t t54 = -30093516126661LL;

    t54 = (((x317-x318)^x319)*x320);

    if (t54 != 1175LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x321 = UINT64_MAX;
	static uint64_t x322 = UINT64_MAX;
	uint32_t x323 = 65274850U;
	int16_t x324 = -1;
	uint64_t t55 = 697764LLU;

    t55 = (((x321-x322)^x323)*x324);

    if (t55 != 18446744073644276766LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x325 = 29636787853551LLU;
	static uint8_t x326 = 10U;

    t56 = (((x325-x326)^x327)*x328);

    if (t56 != 3763872063741960LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x329 = INT8_MIN;
	int8_t x332 = -7;
	int32_t t57 = -4;

    t57 = (((x329-x330)^x331)*x332);

    if (t57 != -229383) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x337 = INT8_MAX;
	volatile uint64_t t58 = 1LLU;

    t58 = (((x337-x338)^x339)*x340);

    if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x343 = INT32_MAX;
	static uint16_t x344 = 15U;
	volatile uint64_t t59 = 38269594LLU;

    t59 = (((x341-x342)^x343)*x344);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x345 = 94U;
	static volatile uint64_t t60 = 4680648001010700LLU;

    t60 = (((x345-x346)^x347)*x348);

    if (t60 != 9223371226819132205LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x357 = INT8_MIN;
	int16_t x358 = INT16_MIN;
	volatile int64_t x359 = -865LL;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t61 = 604274LLU;

    t61 = (((x357-x358)^x359)*x360);

    if (t61 != 31969LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x362 = 7900913041LL;
	static int32_t x364 = -327;
	volatile int64_t t62 = -20056999LL;

    t62 = (((x361-x362)^x363)*x364);

    if (t62 != -2588750337900LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x365 = INT16_MIN;
	uint8_t x366 = 18U;
	static int8_t x367 = 1;
	static int16_t x368 = INT16_MIN;
	int32_t t63 = 32321;

    t63 = (((x365-x366)^x367)*x368);

    if (t63 != 1074298880) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x370 = -8;
	volatile uint32_t t64 = 28U;

    t64 = (((x369-x370)^x371)*x372);

    if (t64 != 247595008U) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x373 = 497LLU;
	volatile uint32_t x374 = UINT32_MAX;
	static int16_t x375 = INT16_MIN;
	static int8_t x376 = -4;
	static uint64_t t65 = 3739038974919146LLU;

    t65 = (((x373-x374)^x375)*x376);

    if (t65 != 18446744056529811512LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x377 = -1LL;
	uint32_t x378 = 29U;
	static int32_t x379 = INT32_MIN;
	static volatile uint16_t x380 = 0U;
	volatile int64_t t66 = 86112397LL;

    t66 = (((x377-x378)^x379)*x380);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x382 = 1476;
	volatile uint8_t x383 = 0U;
	volatile int16_t x384 = -3238;
	int32_t t67 = 4;

    t67 = (((x381-x382)^x383)*x384);

    if (t67 != 3953598) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x387 = INT32_MAX;
	int8_t x388 = INT8_MAX;
	uint64_t t68 = 6986154106LLU;

    t68 = (((x385-x386)^x387)*x388);

    if (t68 != 491773797173769139LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x401 = -1;
	volatile uint32_t x402 = UINT32_MAX;
	static uint8_t x403 = 7U;
	volatile uint16_t x404 = 6U;
	static uint32_t t69 = 257290U;

    t69 = (((x401-x402)^x403)*x404);

    if (t69 != 42U) { NG(); } else { ; }
	
}

void f70(void) {
    	static int8_t x405 = INT8_MAX;
	uint64_t x406 = 97LLU;
	int8_t x408 = INT8_MIN;

    t70 = (((x405-x406)^x407)*x408);

    if (t70 != 274877903104LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint32_t x409 = 412709U;
	volatile int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = UINT64_MAX;
	uint64_t t71 = 22053870260923990LLU;

    t71 = (((x409-x410)^x411)*x412);

    if (t71 != 18446744069414990683LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x413 = 11692U;
	int32_t x415 = 444;
	volatile uint32_t t72 = 224828782U;

    t72 = (((x413-x414)^x415)*x416);

    if (t72 != 3925344256U) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x417 = INT64_MIN;
	volatile uint64_t x418 = 591186094054624LLU;
	uint32_t x419 = UINT32_MAX;
	volatile int16_t x420 = -1;
	uint64_t t73 = 49050742LLU;

    t73 = (((x417-x418)^x419)*x420);

    if (t73 != 9223963225192538913LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x421 = 17810054016036390LL;
	static int64_t x422 = -205546943LL;
	static int64_t x423 = INT64_MAX;
	volatile uint64_t t74 = 3979821090499058446LLU;

    t74 = (((x421-x422)^x423)*x424);

    if (t74 != 9241182091076359142LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x426 = 4;
	static int32_t x427 = INT32_MIN;
	volatile int16_t x428 = -13466;
	volatile int64_t t75 = 493067684LL;

    t75 = (((x425-x426)^x427)*x428);

    if (t75 != -84002208259144482LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int8_t x429 = INT8_MIN;
	uint16_t x431 = UINT16_MAX;
	static int8_t x432 = 0;

    t76 = (((x429-x430)^x431)*x432);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x433 = -1;
	int8_t x434 = INT8_MAX;
	volatile uint32_t x435 = 103137U;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t77 = 525LLU;

    t77 = (((x433-x434)^x435)*x436);

    if (t77 != 18446744069414687391LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x437 = 23;
	int32_t x439 = -1;
	uint32_t t78 = 351698568U;

    t78 = (((x437-x438)^x439)*x440);

    if (t78 != 4294777921U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x445 = -30;
	static uint8_t x446 = 0U;
	volatile int16_t x447 = -1;
	volatile int64_t x448 = -2011LL;
	volatile int64_t t79 = 1586386LL;

    t79 = (((x445-x446)^x447)*x448);

    if (t79 != -58319LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x449 = -1;
	int16_t x450 = INT16_MIN;
	int32_t x451 = 0;
	uint8_t x452 = 126U;
	int32_t t80 = -32746;

    t80 = (((x449-x450)^x451)*x452);

    if (t80 != 4128642) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x453 = 87505485886342334LLU;
	uint8_t x454 = UINT8_MAX;
	uint64_t x455 = UINT64_MAX;
	volatile int32_t x456 = INT32_MIN;
	volatile uint64_t t81 = 2231902059231759LLU;

    t81 = (((x453-x454)^x455)*x456);

    if (t81 != 5553960748922699776LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x457 = 1001261U;
	int32_t x458 = INT32_MIN;
	int16_t x459 = INT16_MIN;
	int16_t x460 = -1;

    t82 = (((x457-x458)^x459)*x460);

    if (t82 != 2148481235U) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x465 = -59;
	volatile int32_t x466 = INT32_MIN;
	uint64_t x467 = 37LLU;
	uint64_t x468 = 151972LLU;
	volatile uint64_t t83 = 135925753461409339LLU;

    t83 = (((x465-x466)^x467)*x468);

    if (t83 != 326357380090752LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x469 = -391;
	uint16_t x471 = 0U;
	int32_t t84 = -19185714;

    t84 = (((x469-x470)^x471)*x472);

    if (t84 != 263) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int16_t x474 = -28;
	int64_t x475 = INT64_MIN;
	static uint8_t x476 = 0U;
	int64_t t85 = -28274561LL;

    t85 = (((x473-x474)^x475)*x476);

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x477 = -2994;
	int64_t x478 = INT64_MIN;
	volatile int32_t x479 = 165;
	int64_t t86 = 29674656LL;

    t86 = (((x477-x478)^x479)*x480);

    if (t86 != -9223372036854772971LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x493 = INT16_MIN;
	volatile int8_t x494 = INT8_MIN;
	int8_t x496 = -1;
	volatile int32_t t87 = 847684726;

    t87 = (((x493-x494)^x495)*x496);

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x498 = 0U;
	int8_t x499 = INT8_MIN;
	volatile int64_t t88 = 83132068758546LL;

    t88 = (((x497-x498)^x499)*x500);

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x502 = UINT8_MAX;
	volatile int64_t x503 = -1LL;
	int8_t x504 = INT8_MIN;
	volatile int64_t t89 = -1LL;

    t89 = (((x501-x502)^x503)*x504);

    if (t89 != -32384LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x509 = 3;
	static uint32_t x511 = 3390440U;
	volatile uint32_t x512 = UINT32_MAX;

    t90 = (((x509-x510)^x511)*x512);

    if (t90 != 18432133093188167836LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x517 = 7LLU;
	int16_t x518 = INT16_MIN;
	int32_t x519 = INT32_MAX;
	int16_t x520 = INT16_MIN;

    t91 = (((x517-x518)^x519)*x520);

    if (t91 != 18446673706039377920LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x521 = 8U;
	static uint16_t x523 = 1988U;
	uint64_t x524 = 9167282484LLU;

    t92 = (((x521-x522)^x523)*x524);

    if (t92 != 126517665561684LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x529 = INT32_MIN;
	static uint32_t x530 = UINT32_MAX;
	int64_t x532 = 16LL;
	static int64_t t93 = -111LL;

    t93 = (((x529-x530)^x531)*x532);

    if (t93 != 34359738336LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint32_t x533 = 8U;
	int64_t x534 = INT64_MAX;
	uint16_t x535 = 55U;
	volatile int64_t t94 = 34746075568357LL;

    t94 = (((x533-x534)^x535)*x536);

    if (t94 != 9223372036854775746LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static volatile int8_t x537 = INT8_MIN;
	static uint32_t x539 = UINT32_MAX;
	static uint16_t x540 = 1024U;
	uint32_t t95 = 55568U;

    t95 = (((x537-x538)^x539)*x540);

    if (t95 != 129024U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x545 = INT32_MIN;
	int8_t x546 = -60;
	uint16_t x547 = UINT16_MAX;
	int32_t t96 = 50252;

    t96 = (((x545-x546)^x547)*x548);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x550 = 318093LLU;
	static int64_t x551 = 178047095LL;
	volatile int32_t x552 = INT32_MIN;
	volatile uint64_t t97 = 217937221LLU;

    t97 = (((x549-x550)^x551)*x552);

    if (t97 != 381690503042695168LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x557 = -1043360;
	static uint64_t x558 = 5546644842498LLU;
	int64_t x559 = INT64_MAX;
	volatile uint64_t t98 = 3LLU;

    t98 = (((x557-x558)^x559)*x560);

    if (t98 != 9228136605670726971LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x566 = 4U;
	static int8_t x567 = -1;
	int8_t x568 = -1;

    t99 = (((x565-x566)^x567)*x568);

    if (t99 != -32771) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x573 = 15563131LL;
	uint8_t x574 = 26U;
	int32_t x575 = -119260;
	int8_t x576 = INT8_MAX;
	int64_t t100 = -1676LL;

    t100 = (((x573-x574)^x575)*x576);

    if (t100 != -1969730757LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x577 = 1U;
	uint8_t x578 = UINT8_MAX;
	int16_t x579 = -1;
	volatile uint64_t t101 = 70LLU;

    t101 = (((x577-x578)^x579)*x580);

    if (t101 != 125061800275071LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x585 = INT64_MIN;
	int8_t x586 = -1;
	uint32_t x587 = UINT32_MAX;
	uint64_t x588 = UINT64_MAX;
	volatile uint64_t t102 = 52LLU;

    t102 = (((x585-x586)^x587)*x588);

    if (t102 != 9223372032559808514LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x590 = INT64_MIN;
	uint64_t x591 = 885615403822218LLU;

    t103 = (((x589-x590)^x591)*x592);

    if (t103 != 8914292260920821377LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x593 = 467002755729637LLU;
	static uint8_t x594 = 111U;
	int16_t x595 = INT16_MIN;

    t104 = (((x593-x594)^x595)*x596);

    if (t104 != 18327658370999627146LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x599 = INT8_MIN;
	static int16_t x600 = INT16_MIN;
	static volatile int32_t t105 = -113;

    t105 = (((x597-x598)^x599)*x600);

    if (t105 != -4194304) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x601 = 12U;
	static int64_t x602 = 1LL;
	int8_t x603 = 41;
	uint32_t x604 = UINT32_MAX;
	volatile int64_t t106 = -1LL;

    t106 = (((x601-x602)^x603)*x604);

    if (t106 != 146028888030LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x605 = UINT64_MAX;
	int32_t x606 = INT32_MIN;
	int64_t x607 = 1594LL;
	static int8_t x608 = INT8_MAX;
	static volatile uint64_t t107 = 39171709254LLU;

    t107 = (((x605-x606)^x607)*x608);

    if (t107 != 272730220731LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x609 = INT16_MIN;
	static volatile uint16_t x610 = 11453U;
	uint64_t x612 = 71845488822325LLU;
	uint64_t t108 = 5LLU;

    t108 = (((x609-x610)^x611)*x612);

    if (t108 != 15227563256047635341LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x613 = 76LLU;
	uint32_t x614 = UINT32_MAX;
	uint32_t x615 = UINT32_MAX;
	static volatile uint64_t t109 = 17LLU;

    t109 = (((x613-x614)^x615)*x616);

    if (t109 != 9984LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x618 = UINT64_MAX;
	static volatile int64_t x619 = INT64_MIN;
	uint8_t x620 = 17U;
	volatile uint64_t t110 = 3075532379LLU;

    t110 = (((x617-x618)^x619)*x620);

    if (t110 != 9223372036855332864LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x625 = UINT32_MAX;
	static int32_t x626 = 213;
	volatile int32_t x627 = INT32_MIN;
	int32_t x628 = 35545;
	volatile uint32_t t111 = 1355453U;

    t111 = (((x625-x626)^x627)*x628);

    if (t111 != 2139877018U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x629 = 5966556622685LLU;
	static int64_t x630 = INT64_MIN;
	uint32_t x631 = UINT32_MAX;
	volatile int16_t x632 = -3640;
	volatile uint64_t t112 = 62498522754696LLU;

    t112 = (((x629-x630)^x631)*x632);

    if (t112 != 18425016340435402896LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x641 = -1;
	int32_t x644 = INT32_MIN;

    t113 = (((x641-x642)^x643)*x644);

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x645 = -1;
	int16_t x646 = INT16_MIN;
	int16_t x647 = INT16_MIN;
	int16_t x648 = -1;
	int32_t t114 = -27520;

    t114 = (((x645-x646)^x647)*x648);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x649 = 1856659927U;
	int32_t x650 = INT32_MAX;
	uint8_t x651 = UINT8_MAX;
	volatile uint32_t t115 = 2002054U;

    t115 = (((x649-x650)^x651)*x652);

    if (t115 != 2550023914U) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x653 = -1;
	static uint8_t x654 = 2U;
	static int8_t x655 = 10;
	volatile uint8_t x656 = 1U;
	static int32_t t116 = 959855;

    t116 = (((x653-x654)^x655)*x656);

    if (t116 != -9) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x657 = -1;
	int32_t x658 = -1043219;
	int32_t x659 = -52471;
	volatile int32_t t117 = -250693;

    t117 = (((x657-x658)^x659)*x660);

    if (t117 != -15892048) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x661 = INT8_MAX;
	volatile int64_t x662 = -1LL;
	uint8_t x663 = 32U;
	int8_t x664 = -8;
	int64_t t118 = 440422722752707913LL;

    t118 = (((x661-x662)^x663)*x664);

    if (t118 != -1280LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x669 = 974;
	volatile uint64_t x670 = 57027093987LLU;
	int8_t x671 = INT8_MIN;
	static uint64_t t119 = 829771476404254LLU;

    t119 = (((x669-x670)^x671)*x672);

    if (t119 != 5333116719525381LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int64_t x673 = -1LL;
	static int64_t x674 = -1LL;
	int16_t x675 = INT16_MAX;
	uint64_t x676 = 41682809849LLU;
	uint64_t t120 = 7853LLU;

    t120 = (((x673-x674)^x675)*x676);

    if (t120 != 1365820630322183LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x677 = -1;
	uint8_t x678 = 0U;
	volatile int8_t x679 = INT8_MIN;
	volatile uint64_t x680 = 213406252061LLU;

    t121 = (((x677-x678)^x679)*x680);

    if (t121 != 27102594011747LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x689 = INT8_MIN;
	uint64_t x691 = 17345567LLU;
	uint64_t x692 = 237371839LLU;
	static volatile uint64_t t122 = 813430730122182LLU;

    t122 = (((x689-x690)^x691)*x692);

    if (t122 != 18442626708668350690LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x693 = -1;
	static int16_t x694 = -1;
	static uint32_t x695 = 58U;
	static uint64_t x696 = UINT64_MAX;
	uint64_t t123 = 44723LLU;

    t123 = (((x693-x694)^x695)*x696);

    if (t123 != 18446744073709551558LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint64_t x697 = 3251430731719LLU;
	static uint8_t x698 = UINT8_MAX;
	static int16_t x699 = -109;
	volatile uint64_t t124 = 120619075955908134LLU;

    t124 = (((x697-x698)^x699)*x700);

    if (t124 != 8921678838893620901LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x701 = INT16_MAX;
	int32_t x703 = -1;
	volatile int32_t t125 = 0;

    t125 = (((x701-x702)^x703)*x704);

    if (t125 != 5127777) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x706 = INT16_MIN;
	uint64_t x707 = 1111091031667620108LLU;
	static int64_t x708 = INT64_MIN;
	uint64_t t126 = 4778617258757632518LLU;

    t126 = (((x705-x706)^x707)*x708);

    if (t126 != 0LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x709 = UINT64_MAX;
	int64_t x711 = INT64_MIN;
	int64_t x712 = INT64_MIN;

    t127 = (((x709-x710)^x711)*x712);

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint32_t x713 = 5U;
	int8_t x714 = INT8_MIN;
	int16_t x715 = INT16_MIN;
	static volatile int32_t x716 = -1;

    t128 = (((x713-x714)^x715)*x716);

    if (t128 != 32635U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x722 = UINT64_MAX;
	volatile int64_t x723 = INT64_MIN;
	static uint64_t x724 = 2068538508915LLU;

    t129 = (((x721-x722)^x723)*x724);

    if (t129 != 9223109332464143603LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x737 = 11933623561438330LLU;
	static int32_t x738 = -1;
	static uint32_t x739 = 55172630U;
	int64_t x740 = INT64_MIN;
	uint64_t t130 = 8LLU;

    t130 = (((x737-x738)^x739)*x740);

    if (t130 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x741 = 2007926933383292675LLU;
	int8_t x742 = 1;
	static int32_t x743 = -7;
	int64_t x744 = INT64_MIN;
	volatile uint64_t t131 = 172413392275036LLU;

    t131 = (((x741-x742)^x743)*x744);

    if (t131 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x749 = -23;

    t132 = (((x749-x750)^x751)*x752);

    if (t132 != 25506051049275LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int64_t x753 = INT64_MIN;
	static int8_t x754 = INT8_MIN;
	uint64_t x755 = 23LLU;
	static int16_t x756 = 0;
	uint64_t t133 = 190LLU;

    t133 = (((x753-x754)^x755)*x756);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x757 = 1;
	int64_t x760 = 1LL;
	static volatile int64_t t134 = 11063737LL;

    t134 = (((x757-x758)^x759)*x760);

    if (t134 != 125LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x761 = 9LLU;
	int64_t x762 = INT64_MIN;
	volatile int32_t x764 = INT32_MAX;
	volatile uint64_t t135 = 4561713LLU;

    t135 = (((x761-x762)^x763)*x764);

    if (t135 != 9223371781304221815LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x766 = UINT64_MAX;
	int16_t x768 = -1;
	static uint64_t t136 = 6LLU;

    t136 = (((x765-x766)^x767)*x768);

    if (t136 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x769 = UINT16_MAX;
	uint64_t x770 = 7712848LLU;
	int16_t x771 = -1;
	static uint32_t x772 = 22360449U;
	uint64_t t137 = 344992LLU;

    t137 = (((x769-x770)^x771)*x772);

    if (t137 != 170997329963088LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x774 = -233;
	uint32_t x775 = 25844358U;
	uint32_t t138 = 9106U;

    t138 = (((x773-x774)^x775)*x776);

    if (t138 != 4269090194U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x779 = 30;
	int32_t t139 = -30039;

    t139 = (((x777-x778)^x779)*x780);

    if (t139 != 1114078) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x785 = UINT64_MAX;
	int8_t x786 = INT8_MIN;
	static int32_t x787 = INT32_MAX;
	uint16_t x788 = UINT16_MAX;
	uint64_t t140 = 120LLU;

    t140 = (((x785-x786)^x787)*x788);

    if (t140 != 140735332483200LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x789 = -1;
	static uint16_t x790 = 1014U;
	int16_t x791 = -14;
	int32_t x792 = -774271;
	volatile int32_t t141 = -387678209;

    t141 = (((x789-x790)^x791)*x792);

    if (t141 != -788982149) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x794 = INT16_MIN;
	int8_t x796 = -6;
	static volatile uint64_t t142 = 1295401510LLU;

    t142 = (((x793-x794)^x795)*x796);

    if (t142 != 18446744073709355770LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint32_t x797 = 334U;
	int16_t x798 = INT16_MAX;
	static volatile uint64_t x800 = UINT64_MAX;

    t143 = (((x797-x798)^x799)*x800);

    if (t143 != 18446744073709519184LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x805 = 1U;
	uint64_t x808 = 1139117724976471315LLU;
	static uint64_t t144 = 68LLU;

    t144 = (((x805-x806)^x807)*x808);

    if (t144 != 12249665557935258567LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x813 = INT8_MIN;
	int64_t x814 = -5964259207LL;
	static int64_t t145 = -1990909019LL;

    t145 = (((x813-x814)^x815)*x816);

    if (t145 != 5964259080LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x817 = 636;
	uint32_t x819 = 192990068U;
	static uint64_t x820 = 27228158LLU;
	static uint64_t t146 = 993455638LLU;

    t146 = (((x817-x818)^x819)*x820);

    if (t146 != 5254747128020468LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x821 = 49U;
	volatile uint8_t x822 = 0U;
	uint8_t x823 = 62U;
	static int8_t x824 = -5;

    t147 = (((x821-x822)^x823)*x824);

    if (t147 != -75) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x829 = 74;
	uint64_t x830 = 4290121737792329123LLU;

    t148 = (((x829-x830)^x831)*x832);

    if (t148 != 1702019393503193976LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x833 = -1;
	int8_t x836 = INT8_MIN;
	static int32_t t149 = 2;

    t149 = (((x833-x834)^x835)*x836);

    if (t149 != 8355968) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x837 = INT16_MIN;
	static uint64_t x838 = 1563983717201LLU;
	volatile int8_t x839 = 1;
	int16_t x840 = INT16_MAX;
	uint64_t t150 = 5180018332LLU;

    t150 = (((x837-x838)^x839)*x840);

    if (t150 != 18395497018174284626LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x850 = 82U;
	static int64_t x851 = INT64_MIN;
	int8_t x852 = 0;

    t151 = (((x849-x850)^x851)*x852);

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x853 = INT32_MAX;
	volatile uint64_t x854 = UINT64_MAX;
	int32_t x855 = INT32_MIN;
	volatile int32_t x856 = -63889;
	volatile uint64_t t152 = 129096733092009LLU;

    t152 = (((x853-x854)^x855)*x856);

    if (t152 != 274401165574144LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int8_t x873 = -1;
	int64_t x874 = INT64_MIN;
	int32_t x875 = 14615;
	int16_t x876 = 0;
	int64_t t153 = 13LL;

    t153 = (((x873-x874)^x875)*x876);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint32_t x882 = 956U;
	static uint64_t x883 = 5689738792474LLU;
	uint32_t x884 = 5732468U;
	static volatile uint64_t t154 = 572006606967LLU;

    t154 = (((x881-x882)^x883)*x884);

    if (t154 != 14169501494475687400LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x886 = -4;
	static int32_t x887 = -1;
	int32_t x888 = -6256716;
	int32_t t155 = -93840816;

    t155 = (((x885-x886)^x887)*x888);

    if (t155 != 25026864) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint16_t x893 = 226U;
	int64_t x894 = -1LL;
	uint64_t x895 = UINT64_MAX;
	uint32_t x896 = 164U;
	volatile uint64_t t156 = 2957007LLU;

    t156 = (((x893-x894)^x895)*x896);

    if (t156 != 18446744073709514224LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x901 = 1307;
	uint16_t x903 = 3226U;
	static volatile int16_t x904 = INT16_MAX;
	volatile int32_t t157 = -232677;

    t157 = (((x901-x902)^x903)*x904);

    if (t157 != 71497594) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x905 = -1;
	uint32_t x906 = 704U;
	static int16_t x908 = -51;
	uint32_t t158 = 1U;

    t158 = (((x905-x906)^x907)*x908);

    if (t158 != 4294930729U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x917 = -1;
	static int16_t x918 = INT16_MAX;
	volatile uint16_t x919 = 47U;
	uint32_t x920 = 140317U;
	uint32_t t159 = 1522U;

    t159 = (((x917-x918)^x919)*x920);

    if (t159 != 3998622035U) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x921 = INT64_MAX;
	int16_t x924 = INT16_MIN;
	volatile int64_t t160 = 4629933470LL;

    t160 = (((x921-x922)^x923)*x924);

    if (t160 != 985650364416LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x925 = -1;
	volatile uint8_t x926 = 0U;
	uint64_t x927 = 90LLU;
	static int8_t x928 = INT8_MIN;
	static uint64_t t161 = 48769241598249704LLU;

    t161 = (((x925-x926)^x927)*x928);

    if (t161 != 11648LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x929 = INT32_MIN;
	int32_t x931 = INT32_MIN;
	static uint64_t t162 = 432840924LLU;

    t162 = (((x929-x930)^x931)*x932);

    if (t162 != 27LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x937 = 4;
	int32_t x939 = INT32_MIN;
	volatile int32_t t163 = 7331;

    t163 = (((x937-x938)^x939)*x940);

    if (t163 != -2147483640) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x953 = 10382U;
	int8_t x954 = INT8_MIN;
	uint64_t x955 = 4481803377099315LLU;
	static int64_t x956 = -34942LL;
	uint64_t t164 = 85094LLU;

    t164 = (((x953-x954)^x955)*x956);

    if (t164 != 9417523060414599162LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x965 = 791748LLU;
	static uint16_t x966 = 47U;
	static uint16_t x967 = UINT16_MAX;
	int32_t x968 = INT32_MIN;
	uint64_t t165 = 1031242456746721LLU;

    t165 = (((x965-x966)^x967)*x968);

    if (t165 != 18444925803599757312LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x981 = INT8_MAX;
	int16_t x982 = -1;
	uint16_t x984 = UINT16_MAX;
	int32_t t166 = 194705925;

    t166 = (((x981-x982)^x983)*x984);

    if (t166 != 9109365) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x985 = UINT64_MAX;
	int32_t x986 = 88329375;
	int32_t x987 = -1014115543;
	volatile uint64_t x988 = 661187269006788LLU;
	static uint64_t t167 = 28763LLU;

    t167 = (((x985-x986)^x987)*x988);

    if (t167 != 16594165440069383396LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint16_t x989 = 5587U;
	int8_t x990 = -18;
	uint8_t x991 = 79U;
	uint8_t x992 = 0U;
	volatile int32_t t168 = -14724;

    t168 = (((x989-x990)^x991)*x992);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x997 = 2086508252194437418LLU;
	uint16_t x998 = UINT16_MAX;
	uint64_t t169 = 32730LLU;

    t169 = (((x997-x998)^x999)*x1000);

    if (t169 != 2086508252194371884LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint8_t x1001 = UINT8_MAX;
	static uint64_t x1002 = 2116565823LLU;
	int8_t x1003 = INT8_MIN;
	volatile uint64_t t170 = 242063LLU;

    t170 = (((x1001-x1002)^x1003)*x1004);

    if (t170 != 46564442496LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x1005 = -1LL;
	int8_t x1006 = -23;
	uint8_t x1007 = 3U;
	int64_t x1008 = -137363810LL;

    t171 = (((x1005-x1006)^x1007)*x1008);

    if (t171 != -2884640010LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int16_t x1009 = -1;
	uint32_t x1011 = 45U;
	uint32_t t172 = 26807U;

    t172 = (((x1009-x1010)^x1011)*x1012);

    if (t172 != 4294967251U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1017 = 123U;
	volatile int64_t x1018 = -79954240LL;
	int64_t x1019 = -1LL;
	int16_t x1020 = 6627;
	volatile int64_t t173 = 2018756LL;

    t173 = (((x1017-x1018)^x1019)*x1020);

    if (t173 != -529857570228LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x1021 = 2667U;
	int64_t x1022 = -86LL;
	uint8_t x1023 = 1U;
	uint16_t x1024 = UINT16_MAX;
	volatile int64_t t174 = -1LL;

    t174 = (((x1021-x1022)^x1023)*x1024);

    if (t174 != 180352320LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1025 = INT64_MAX;
	volatile uint8_t x1026 = UINT8_MAX;
	uint32_t x1027 = UINT32_MAX;
	volatile uint64_t x1028 = UINT64_MAX;
	uint64_t t175 = 24578847LLU;

    t175 = (((x1025-x1026)^x1027)*x1028);

    if (t175 != 9223372041149742849LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x1030 = INT16_MAX;
	int8_t x1032 = -1;
	volatile uint64_t t176 = 253640626639LLU;

    t176 = (((x1029-x1030)^x1031)*x1032);

    if (t176 != 9222020098944709469LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1033 = INT16_MAX;
	static int32_t x1035 = -6;
	volatile int64_t x1036 = -1LL;
	int64_t t177 = 3217949LL;

    t177 = (((x1033-x1034)^x1035)*x1036);

    if (t177 != -9223372036854743034LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x1038 = INT32_MIN;
	int16_t x1039 = INT16_MAX;
	int8_t x1040 = -1;
	int32_t t178 = -59151;

    t178 = (((x1037-x1038)^x1039)*x1040);

    if (t178 != -2147483647) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x1042 = 3132406933460898170LLU;
	int64_t x1043 = INT64_MIN;
	uint16_t x1044 = 3U;
	volatile uint64_t t179 = 51788102862LLU;

    t179 = (((x1041-x1042)^x1043)*x1044);

    if (t179 != 18272895310181632914LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1045 = 407U;
	static uint8_t x1046 = 1U;
	int32_t t180 = -163;

    t180 = (((x1045-x1046)^x1047)*x1048);

    if (t180 != -2445) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1053 = 4201519836301246471LLU;
	uint8_t x1054 = 1U;
	uint8_t x1056 = 36U;

    t181 = (((x1053-x1054)^x1055)*x1056);

    if (t181 != 14765982575256207576LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1057 = UINT64_MAX;
	int32_t x1058 = 13760;
	int16_t x1060 = -380;
	uint64_t t182 = 7858LLU;

    t182 = (((x1057-x1058)^x1059)*x1060);

    if (t182 != 18446744073704450116LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1062 = -1;
	volatile uint8_t x1063 = UINT8_MAX;
	int16_t x1064 = INT16_MAX;
	volatile uint32_t t183 = 518157664U;

    t183 = (((x1061-x1062)^x1063)*x1064);

    if (t183 != 8355585U) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int16_t x1065 = INT16_MIN;
	int8_t x1066 = 1;
	static uint8_t x1067 = UINT8_MAX;
	int16_t x1068 = INT16_MIN;
	volatile int32_t t184 = 122986;

    t184 = (((x1065-x1066)^x1067)*x1068);

    if (t184 != 1082130432) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1069 = UINT16_MAX;
	uint8_t x1070 = 39U;
	uint16_t x1072 = 162U;
	int32_t t185 = -1;

    t185 = (((x1069-x1070)^x1071)*x1072);

    if (t185 != -5314896) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x1073 = UINT16_MAX;
	int32_t x1074 = 3213;
	int64_t x1075 = INT64_MIN;
	int64_t x1076 = -1LL;
	volatile int64_t t186 = -1251328753829310LL;

    t186 = (((x1073-x1074)^x1075)*x1076);

    if (t186 != 9223372036854713486LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1077 = UINT16_MAX;
	uint16_t x1078 = 27U;
	int64_t x1079 = -1LL;

    t187 = (((x1077-x1078)^x1079)*x1080);

    if (t187 != 196527LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x1085 = 473235235;
	static uint32_t x1086 = 64879U;
	static volatile uint64_t x1087 = UINT64_MAX;
	int32_t x1088 = INT32_MIN;
	uint64_t t188 = 2817973350234363829LLU;

    t188 = (((x1085-x1086)^x1087)*x1088);

    if (t188 != 1016125604375822336LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1093 = INT32_MIN;
	int32_t x1096 = -1;
	volatile int32_t t189 = 496951;

    t189 = (((x1093-x1094)^x1095)*x1096);

    if (t189 != -6) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1101 = 221U;
	static int8_t x1102 = 38;
	uint64_t x1103 = UINT64_MAX;
	int64_t x1104 = INT64_MIN;

    t190 = (((x1101-x1102)^x1103)*x1104);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int8_t x1125 = -1;
	static uint32_t x1126 = 224440U;
	int32_t x1127 = -1;
	volatile int8_t x1128 = 0;
	volatile uint32_t t191 = 748244951U;

    t191 = (((x1125-x1126)^x1127)*x1128);

    if (t191 != 0U) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile int64_t x1134 = -1LL;
	volatile uint64_t x1135 = 73669LLU;
	static uint16_t x1136 = UINT16_MAX;
	volatile uint64_t t192 = 707334464LLU;

    t192 = (((x1133-x1134)^x1135)*x1136);

    if (t192 != 281475509641275LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1138 = INT8_MIN;
	uint64_t x1139 = UINT64_MAX;

    t193 = (((x1137-x1138)^x1139)*x1140);

    if (t193 != 704301232166804522LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1141 = 6U;
	uint32_t x1142 = 3U;
	uint16_t x1143 = 0U;

    t194 = (((x1141-x1142)^x1143)*x1144);

    if (t194 != 98301U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1149 = 3647047U;
	int8_t x1150 = -1;
	volatile uint8_t x1151 = UINT8_MAX;
	uint16_t x1152 = 18U;
	volatile uint32_t t195 = 65947050U;

    t195 = (((x1149-x1150)^x1151)*x1152);

    if (t195 != 65648862U) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1153 = INT8_MAX;
	uint64_t x1154 = 51LLU;
	int32_t x1156 = -17032;
	volatile uint64_t t196 = 8LLU;

    t196 = (((x1153-x1154)^x1155)*x1156);

    if (t196 != 885664LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1157 = UINT16_MAX;
	static volatile uint32_t x1158 = 1U;
	int16_t x1159 = INT16_MAX;
	volatile uint32_t t197 = 11353U;

    t197 = (((x1157-x1158)^x1159)*x1160);

    if (t197 != 163845U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1165 = INT8_MAX;
	uint32_t x1166 = 6029516U;
	static volatile uint32_t t198 = 25U;

    t198 = (((x1165-x1166)^x1167)*x1168);

    if (t198 != 3412755007U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1174 = -8373;
	uint16_t x1176 = UINT16_MAX;
	static uint64_t t199 = 7587048LLU;

    t199 = (((x1173-x1174)^x1175)*x1176);

    if (t199 != 14426871755958375LLU) { NG(); } else { ; }
	
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

