
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

static uint8_t x4 = 1U;
uint32_t t0 = 0U;
static volatile uint8_t x6 = 2U;
uint8_t x8 = 73U;
volatile uint32_t x10 = 3096U;
int8_t x18 = INT8_MIN;
static uint16_t x22 = 1591U;
static uint32_t t4 = 36998731U;
volatile int8_t x28 = -21;
int64_t x29 = INT64_MIN;
volatile uint32_t x33 = UINT32_MAX;
volatile int64_t t7 = 1212LL;
int64_t t9 = -3186142596LL;
int16_t x45 = -1;
volatile uint64_t t11 = 961558842003629LLU;
volatile uint8_t x59 = 13U;
int32_t x61 = -12;
int64_t x69 = INT64_MIN;
uint64_t x71 = UINT64_MAX;
volatile uint64_t x75 = 16221125877780552LLU;
int16_t x83 = INT16_MAX;
static int32_t x84 = 3677;
static int64_t x92 = INT64_MAX;
volatile int64_t t20 = 106238988466607294LL;
static uint32_t x105 = UINT32_MAX;
uint64_t t22 = 24269550LLU;
int64_t t25 = 2LL;
volatile uint32_t x169 = 0U;
static uint64_t t36 = 12664190542749LLU;
static int32_t x173 = INT32_MIN;
static volatile int8_t x175 = INT8_MIN;
volatile int64_t x177 = -1LL;
static int32_t x178 = INT32_MIN;
uint32_t x182 = UINT32_MAX;
uint32_t x191 = UINT32_MAX;
static volatile uint8_t x210 = UINT8_MAX;
static volatile int16_t x213 = -1;
static int32_t x218 = 59068;
static int8_t x222 = INT8_MIN;
uint8_t x223 = 6U;
uint64_t t47 = 148201561994157419LLU;
int8_t x226 = -1;
int8_t x228 = INT8_MIN;
int64_t t49 = 1057376LL;
volatile uint32_t x240 = 55536712U;
int64_t x244 = -30742LL;
static volatile int64_t t51 = 870548319LL;
int32_t x249 = INT32_MIN;
uint16_t x250 = 17U;
int8_t x251 = -3;
int32_t x262 = -1;
volatile uint16_t x264 = 28160U;
volatile uint32_t t55 = 1376046109U;
int16_t x265 = -1;
uint64_t x266 = 9333878319131235LLU;
static volatile uint64_t t56 = 108853LLU;
volatile int8_t x272 = -1;
volatile uint64_t x275 = 3575022175LLU;
static volatile uint32_t x286 = UINT32_MAX;
int16_t x294 = -1;
int32_t x300 = -1;
int64_t x302 = -6250LL;
int64_t t64 = 812507LL;
uint16_t x313 = 0U;
static int32_t x319 = INT32_MIN;
static int16_t x330 = INT16_MAX;
uint64_t t67 = 347LLU;
int16_t x333 = 1;
uint16_t x334 = 38U;
int16_t x335 = INT16_MIN;
uint32_t t68 = 63909U;
int16_t x341 = -502;
int64_t x342 = INT64_MIN;
uint8_t x345 = 7U;
volatile int32_t t71 = 338349790;
int16_t x350 = INT16_MIN;
uint16_t x353 = 17417U;
int64_t x366 = -1LL;
int64_t x383 = INT64_MAX;
uint64_t x386 = 125984139535941454LLU;
int32_t x390 = INT32_MAX;
static int16_t x392 = -1;
static int8_t x396 = INT8_MAX;
volatile uint64_t t83 = 3773448247108LLU;
int8_t x410 = INT8_MAX;
int8_t x413 = INT8_MIN;
int64_t x414 = 1076815646768953LL;
int32_t x415 = INT32_MIN;
volatile uint32_t t87 = 125453381U;
int64_t x427 = -1LL;
volatile int64_t t89 = 7117171298775204LL;
volatile uint16_t x431 = 0U;
static volatile int32_t x439 = 63;
uint16_t x440 = 29U;
int32_t x446 = -4305;
static int8_t x450 = INT8_MIN;
static volatile int32_t t94 = 64676;
int16_t x458 = -142;
int64_t t95 = -3075299784636LL;
static uint64_t x462 = 288LLU;
int32_t x465 = 143526397;
int8_t x466 = INT8_MIN;
volatile int64_t x467 = 8401406006LL;
static volatile int32_t t99 = 8482;
int32_t x484 = INT32_MIN;
int8_t x490 = INT8_MIN;
static uint32_t x491 = 164244216U;
volatile int16_t x492 = INT16_MIN;
volatile int64_t t103 = 977507327861240LL;
int8_t x493 = 1;
int8_t x496 = -1;
volatile int8_t x505 = INT8_MAX;
int32_t x510 = INT32_MIN;
int8_t x519 = -1;
static volatile int32_t x522 = INT32_MIN;
int8_t x526 = INT8_MIN;
uint16_t x533 = 8U;
static uint8_t x534 = 32U;
static int8_t x536 = INT8_MIN;
uint8_t x542 = 6U;
volatile int8_t x546 = INT8_MIN;
int64_t x547 = INT64_MIN;
static volatile int64_t t117 = -3331LL;
uint64_t t118 = 807595LLU;
uint16_t x569 = 95U;
int64_t x577 = -1LL;
static volatile int8_t x609 = INT8_MIN;
uint8_t x618 = 21U;
volatile uint16_t x635 = 1745U;
uint16_t x657 = 16U;
int16_t x661 = INT16_MIN;
volatile uint64_t t140 = 0LLU;
static volatile int32_t x674 = INT32_MAX;
volatile int64_t t143 = 1779602297LL;
static int16_t x686 = INT16_MAX;
static int8_t x688 = -1;
int16_t x693 = 394;
int32_t t147 = 1;
int64_t x704 = -5344786453537949LL;
int64_t t149 = -2086676LL;
uint16_t x710 = UINT16_MAX;
uint64_t x713 = UINT64_MAX;
static int64_t x714 = 5621596784444LL;
static int64_t x715 = -1LL;
uint16_t x716 = UINT16_MAX;
volatile int16_t x717 = -1;
static int64_t t153 = 33004653653LL;
int8_t x731 = -1;
int64_t x756 = -1LL;
int32_t x763 = 2;
int8_t x778 = INT8_MIN;
volatile int32_t x783 = 10474;
uint64_t t162 = 74512LLU;
int32_t x787 = -1;
static uint8_t x791 = UINT8_MAX;
int64_t x793 = -2001756625411388057LL;
int32_t x795 = INT32_MAX;
int64_t x806 = INT64_MIN;
int16_t x808 = 390;
volatile uint64_t t167 = 62553549LLU;
uint64_t t168 = 135LLU;
uint64_t t169 = 2993761720337215LLU;
volatile uint64_t x819 = 382015755LLU;
static int64_t x822 = 247494LL;
volatile int64_t x829 = INT64_MIN;
static uint8_t x832 = 19U;
static volatile uint8_t x833 = 7U;
int16_t x837 = INT16_MIN;
int64_t x846 = INT64_MIN;
int8_t x850 = INT8_MIN;
int64_t x852 = 1102070102939531LL;
uint32_t x854 = 1392195462U;
uint32_t t179 = 1594368791U;
int16_t x866 = 12158;
uint8_t x868 = 45U;
int16_t x869 = INT16_MIN;
uint64_t x871 = 4584351251LLU;
int64_t x872 = -1LL;
static volatile uint64_t t182 = 8307120762185290LLU;
static int16_t x882 = INT16_MAX;
int32_t t185 = 422658103;
volatile int8_t x899 = INT8_MIN;
int32_t t187 = 14;
static uint32_t x908 = 11U;
uint16_t x914 = UINT16_MAX;
volatile uint64_t t190 = 4229197319LLU;
int16_t x917 = -107;
static volatile uint16_t x921 = 7U;
volatile int64_t x922 = INT64_MIN;
int8_t x924 = 1;
volatile int16_t x932 = INT16_MIN;
int64_t x945 = 57836LL;
static int64_t x948 = -196863137232344LL;
static uint8_t x950 = 85U;
int16_t x952 = -1;
uint8_t x957 = UINT8_MAX;
static uint64_t x960 = UINT64_MAX;
uint8_t x965 = 51U;
static int64_t x968 = 17943742LL;
volatile int64_t t199 = -160838LL;


void f0(void) {
    	volatile uint32_t x1 = 128264U;
	int32_t x2 = -270403;
	uint8_t x3 = 1U;

    t0 = (((x1^x2)+x3)-x4);

    if (t0 != 4294585013U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	int16_t x7 = -1;
	int32_t t1 = -806;

    t1 = (((x5^x6)+x7)-x8);

    if (t1 != -200) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	volatile int16_t x11 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;
	static uint64_t t2 = 241307175462LLU;

    t2 = (((x9^x10)+x11)-x12);

    if (t2 != 18446744073709515752LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = 1423;
	volatile int32_t x19 = 0;
	static uint32_t x20 = 45775U;
	volatile uint32_t t3 = 33U;

    t3 = (((x17^x18)+x19)-x20);

    if (t3 != 4294920000U) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x21 = UINT32_MAX;
	uint32_t x23 = 386373U;
	volatile uint16_t x24 = 376U;

    t4 = (((x21^x22)+x23)-x24);

    if (t4 != 384405U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x25 = INT16_MIN;
	int64_t x26 = INT64_MAX;
	int16_t x27 = -1;
	volatile int64_t t5 = 236LL;

    t5 = (((x25^x26)+x27)-x28);

    if (t5 != -9223372036854743021LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x30 = 102U;
	uint64_t x31 = 5LLU;
	int8_t x32 = -1;
	uint64_t t6 = 29LLU;

    t6 = (((x29^x30)+x31)-x32);

    if (t6 != 9223372036854775916LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x34 = -1LL;
	int32_t x35 = -49821016;
	uint16_t x36 = 9U;

    t7 = (((x33^x34)+x35)-x36);

    if (t7 != -4344788321LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1;
	int8_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	static uint16_t x40 = UINT16_MAX;
	volatile int32_t t8 = 742;

    t8 = (((x37^x38)+x39)-x40);

    if (t8 != -65280) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = -894727068339287LL;
	int8_t x42 = INT8_MIN;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;

    t9 = (((x41^x42)+x43)-x44);

    if (t9 != 894727068404904LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x46 = -1;
	uint32_t x47 = 78389067U;
	int8_t x48 = INT8_MAX;
	uint32_t t10 = 1U;

    t10 = (((x45^x46)+x47)-x48);

    if (t10 != 78388940U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = INT32_MIN;
	int64_t x50 = -848798026LL;
	static uint64_t x51 = UINT64_MAX;
	static volatile int32_t x52 = 511859320;

    t11 = (((x49^x50)+x51)-x52);

    if (t11 != 786826301LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 14018U;
	static uint8_t x54 = 1U;
	int32_t x55 = INT32_MIN;
	uint8_t x56 = 21U;
	uint32_t t12 = 54393U;

    t12 = (((x53^x54)+x55)-x56);

    if (t12 != 2147497646U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x57 = 18216U;
	int32_t x58 = 431793471;
	int16_t x60 = INT16_MIN;
	volatile int32_t t13 = 42176;

    t13 = (((x57^x58)+x59)-x60);

    if (t13 != 431841828) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int32_t x62 = INT32_MAX;
	volatile int32_t x63 = 21;
	int64_t x64 = 1LL;
	int64_t t14 = -1642LL;

    t14 = (((x61^x62)+x63)-x64);

    if (t14 != -2147483617LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x65 = INT8_MIN;
	int64_t x66 = 6648042971116833LL;
	static int8_t x67 = INT8_MIN;
	static int8_t x68 = 1;
	int64_t t15 = -4LL;

    t15 = (((x65^x66)+x67)-x68);

    if (t15 != -6648042971117024LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x70 = INT64_MIN;
	int32_t x72 = -1;
	uint64_t t16 = 493881883124642LLU;

    t16 = (((x69^x70)+x71)-x72);

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x73 = 151671U;
	uint32_t x74 = 719978U;
	uint64_t x76 = 15LLU;
	static volatile uint64_t t17 = 34733885042877722LLU;

    t17 = (((x73^x74)+x75)-x76);

    if (t17 != 16221125878348886LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = -1;
	volatile int32_t x82 = -1065;
	int32_t t18 = 3619948;

    t18 = (((x81^x82)+x83)-x84);

    if (t18 != 30154) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x85 = 45103029324LLU;
	volatile int32_t x86 = -192692;
	uint32_t x87 = 202970U;
	int16_t x88 = 3;
	volatile uint64_t t19 = 1624591649LLU;

    t19 = (((x85^x86)+x87)-x88);

    if (t19 != 18446744028606606295LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x89 = -529654421382LL;
	int8_t x90 = -1;
	static uint32_t x91 = 49U;

    t20 = (((x89^x90)+x91)-x92);

    if (t20 != -9223371507200354377LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x101 = INT64_MIN;
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = -1LL;
	static int8_t x104 = INT8_MAX;
	volatile int64_t t21 = -303191516398LL;

    t21 = (((x101^x102)+x103)-x104);

    if (t21 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x106 = 57;
	int32_t x107 = INT32_MIN;
	static volatile uint64_t x108 = 13912814794024512LLU;

    t22 = (((x105^x106)+x107)-x108);

    if (t22 != 18432831261063010694LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x109 = 1;
	static int16_t x110 = -1;
	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = 1U;
	uint32_t t23 = 1458U;

    t23 = (((x109^x110)+x111)-x112);

    if (t23 != 4294967165U) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x113 = 448U;
	int64_t x114 = 459LL;
	volatile uint32_t x115 = 841162U;
	uint64_t x116 = 690856786404199LLU;
	uint64_t t24 = 13840732461781625LLU;

    t24 = (((x113^x114)+x115)-x116);

    if (t24 != 18446053216923988590LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MIN;
	int64_t x119 = -746685012322LL;
	int64_t x120 = 1708234862069947LL;

    t25 = (((x117^x118)+x119)-x120);

    if (t25 != -1708981547147678LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x121 = -2;
	int16_t x122 = -1;
	static uint8_t x123 = 1U;
	static volatile int16_t x124 = 94;
	volatile int32_t t26 = -3848;

    t26 = (((x121^x122)+x123)-x124);

    if (t26 != -92) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x125 = UINT16_MAX;
	uint64_t x126 = 28241577LLU;
	volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = 25392722863LLU;
	volatile uint64_t t27 = 263256304LLU;

    t27 = (((x125^x126)+x127)-x128);

    if (t27 != 18446744046197530023LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x129 = -1;
	int64_t x130 = -1066737503126LL;
	int64_t x131 = INT64_MIN;
	static int32_t x132 = INT32_MIN;
	int64_t t28 = -58551LL;

    t28 = (((x129^x130)+x131)-x132);

    if (t28 != -9223370967969789035LL) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint64_t x133 = 20260364483602002LLU;
	int32_t x134 = INT32_MAX;
	uint8_t x135 = UINT8_MAX;
	int64_t x136 = -1319LL;
	static uint64_t t29 = 340631LLU;

    t29 = (((x133^x134)+x135)-x136);

    if (t29 != 20260364884074451LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x141 = INT16_MIN;
	static int64_t x142 = -1LL;
	int32_t x143 = INT32_MAX;
	uint32_t x144 = UINT32_MAX;
	int64_t t30 = -90049693LL;

    t30 = (((x141^x142)+x143)-x144);

    if (t30 != -2147450881LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x145 = INT32_MIN;
	uint64_t x146 = UINT64_MAX;
	volatile uint16_t x147 = 8064U;
	volatile int8_t x148 = 0;
	uint64_t t31 = 48234648616601LLU;

    t31 = (((x145^x146)+x147)-x148);

    if (t31 != 2147491711LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MIN;
	int64_t x151 = 1509578731265LL;
	int8_t x152 = INT8_MIN;
	int64_t t32 = -8544510625759607LL;

    t32 = (((x149^x150)+x151)-x152);

    if (t32 != 1509578731392LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x153 = 35623140U;
	int16_t x154 = -1;
	int16_t x155 = INT16_MAX;
	uint64_t x156 = 10LLU;
	uint64_t t33 = 3861LLU;

    t33 = (((x153^x154)+x155)-x156);

    if (t33 != 4259376912LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int64_t x157 = -2064194062811170870LL;
	int32_t x158 = -55390;
	volatile int32_t x159 = 82948;
	static int8_t x160 = INT8_MAX;
	volatile int64_t t34 = 356510302LL;

    t34 = (((x157^x158)+x159)-x160);

    if (t34 != 2064194062811239405LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x165 = INT32_MIN;
	int64_t x166 = INT64_MIN;
	int8_t x167 = -1;
	int32_t x168 = 1;
	volatile int64_t t35 = -22837052229294LL;

    t35 = (((x165^x166)+x167)-x168);

    if (t35 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x170 = UINT16_MAX;
	uint64_t x171 = 3725098451513673LLU;
	static int8_t x172 = 4;

    t36 = (((x169^x170)+x171)-x172);

    if (t36 != 3725098451579204LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x174 = 23629708U;
	int8_t x176 = INT8_MIN;
	uint32_t t37 = 8382853U;

    t37 = (((x173^x174)+x175)-x176);

    if (t37 != 2171113356U) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x179 = -1LL;
	uint16_t x180 = UINT16_MAX;
	int64_t t38 = -650300LL;

    t38 = (((x177^x178)+x179)-x180);

    if (t38 != 2147418111LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x181 = -1053223399801LL;
	int8_t x183 = 11;
	volatile int32_t x184 = -94;
	volatile int64_t t39 = -5226124LL;

    t39 = (((x181^x182)+x183)-x184);

    if (t39 != -1055605542431LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x185 = -129;
	int16_t x186 = -1;
	int8_t x187 = INT8_MAX;
	static int16_t x188 = INT16_MIN;
	int32_t t40 = 229;

    t40 = (((x185^x186)+x187)-x188);

    if (t40 != 33023) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int64_t x189 = INT64_MIN;
	uint64_t x190 = 2518429803803LLU;
	int64_t x192 = INT64_MAX;
	uint64_t t41 = 11470244LLU;

    t41 = (((x189^x190)+x191)-x192);

    if (t41 != 2522724771099LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x197 = INT16_MIN;
	static uint64_t x198 = UINT64_MAX;
	volatile int32_t x199 = INT32_MIN;
	volatile uint8_t x200 = 20U;
	static uint64_t t42 = 282819924824402LLU;

    t42 = (((x197^x198)+x199)-x200);

    if (t42 != 18446744071562100715LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint8_t x201 = UINT8_MAX;
	volatile uint64_t x202 = 280786422LLU;
	int16_t x203 = -1;
	uint64_t x204 = 16434211779409619LLU;
	uint64_t t43 = 3412393619301383LLU;

    t43 = (((x201^x202)+x203)-x204);

    if (t43 != 18430309862210928181LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint8_t x209 = 12U;
	int32_t x211 = 7577;
	volatile uint64_t x212 = 115LLU;
	volatile uint64_t t44 = 2202864749822594625LLU;

    t44 = (((x209^x210)+x211)-x212);

    if (t44 != 7705LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	volatile int32_t x216 = 2;
	volatile int32_t t45 = -4;

    t45 = (((x213^x214)+x215)-x216);

    if (t45 != -32770) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x217 = UINT32_MAX;
	static volatile int32_t x219 = -1;
	volatile int64_t x220 = -24789465015628159LL;
	volatile int64_t t46 = -515370264945100LL;

    t46 = (((x217^x218)+x219)-x220);

    if (t46 != 24789469310536385LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int32_t x221 = -4;
	uint64_t x224 = UINT64_MAX;

    t47 = (((x221^x222)+x223)-x224);

    if (t47 != 131LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x225 = -1;
	int64_t x227 = -1LL;
	int64_t t48 = 19365101LL;

    t48 = (((x225^x226)+x227)-x228);

    if (t48 != 127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x233 = UINT16_MAX;
	int32_t x234 = 41133284;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;

    t49 = (((x233^x234)+x235)-x236);

    if (t49 != 41114395LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x237 = INT32_MIN;
	uint64_t x238 = 8505248254004666348LLU;
	volatile uint32_t x239 = UINT32_MAX;
	uint64_t t50 = 1899624024LLU;

    t50 = (((x237^x238)+x239)-x240);

    if (t50 != 9941495825369019299LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint8_t x241 = UINT8_MAX;
	uint32_t x242 = 729721986U;
	int8_t x243 = 0;

    t51 = (((x241^x242)+x243)-x244);

    if (t51 != 729752723LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x245 = INT32_MAX;
	static int8_t x246 = INT8_MIN;
	static uint64_t x247 = 1305LLU;
	uint16_t x248 = 21016U;
	static uint64_t t52 = 4423091460087LLU;

    t52 = (((x245^x246)+x247)-x248);

    if (t52 != 18446744071562048384LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x252 = INT32_MIN;
	static int32_t t53 = -1853;

    t53 = (((x249^x250)+x251)-x252);

    if (t53 != 14) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x253 = 2976405143LLU;
	volatile int8_t x254 = INT8_MAX;
	uint8_t x255 = 59U;
	int8_t x256 = INT8_MIN;
	volatile uint64_t t54 = 2LLU;

    t54 = (((x253^x254)+x255)-x256);

    if (t54 != 2976405411LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x261 = INT8_MIN;
	static volatile uint32_t x263 = UINT32_MAX;

    t55 = (((x261^x262)+x263)-x264);

    if (t55 != 4294939262U) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x267 = 1;
	uint32_t x268 = 1U;

    t56 = (((x265^x266)+x267)-x268);

    if (t56 != 18437410195390420380LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x269 = 1438;
	volatile int64_t x270 = -1LL;
	int8_t x271 = INT8_MIN;
	int64_t t57 = -4415193582030391159LL;

    t57 = (((x269^x270)+x271)-x272);

    if (t57 != -1566LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x273 = -1LL;
	int64_t x274 = INT64_MIN;
	static uint8_t x276 = UINT8_MAX;
	volatile uint64_t t58 = 5050221133LLU;

    t58 = (((x273^x274)+x275)-x276);

    if (t58 != 9223372040429797727LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x281 = INT32_MIN;
	uint8_t x282 = UINT8_MAX;
	int8_t x283 = -1;
	uint16_t x284 = 1U;
	volatile int32_t t59 = 165;

    t59 = (((x281^x282)+x283)-x284);

    if (t59 != -2147483395) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x285 = UINT8_MAX;
	int32_t x287 = INT32_MIN;
	uint32_t x288 = UINT32_MAX;
	volatile uint32_t t60 = 19307918U;

    t60 = (((x285^x286)+x287)-x288);

    if (t60 != 2147483393U) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int32_t x293 = INT32_MAX;
	volatile uint64_t x295 = 27LLU;
	volatile uint16_t x296 = 2010U;
	static uint64_t t61 = 146567LLU;

    t61 = (((x293^x294)+x295)-x296);

    if (t61 != 18446744071562065985LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x297 = INT8_MIN;
	static uint32_t x298 = 41U;
	int8_t x299 = INT8_MIN;
	volatile uint32_t t62 = 1343U;

    t62 = (((x297^x298)+x299)-x300);

    if (t62 != 4294967082U) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x301 = INT8_MIN;
	uint8_t x303 = 10U;
	int32_t x304 = -1039179;
	volatile int64_t t63 = -1309LL;

    t63 = (((x301^x302)+x303)-x304);

    if (t63 != 1045355LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x305 = INT8_MAX;
	int64_t x306 = 0LL;
	volatile int64_t x307 = INT64_MIN;
	int16_t x308 = -1;

    t64 = (((x305^x306)+x307)-x308);

    if (t64 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x314 = -1;
	int16_t x315 = -12004;
	uint16_t x316 = 3450U;
	volatile int32_t t65 = -4139;

    t65 = (((x313^x314)+x315)-x316);

    if (t65 != -15455) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x317 = UINT16_MAX;
	uint32_t x318 = UINT32_MAX;
	static uint16_t x320 = 282U;
	static uint32_t t66 = 215478122U;

    t66 = (((x317^x318)+x319)-x320);

    if (t66 != 2147417830U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x329 = -1;
	uint64_t x331 = UINT64_MAX;
	volatile int8_t x332 = INT8_MIN;

    t67 = (((x329^x330)+x331)-x332);

    if (t67 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x336 = 1U;

    t68 = (((x333^x334)+x335)-x336);

    if (t68 != 4294934566U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x337 = 1U;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;
	uint8_t x340 = 46U;
	volatile uint32_t t69 = 4738214U;

    t69 = (((x337^x338)+x339)-x340);

    if (t69 != 4294934610U) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x343 = -1LL;
	volatile int64_t x344 = 21895LL;
	int64_t t70 = 3LL;

    t70 = (((x341^x342)+x343)-x344);

    if (t70 != 9223372036854753410LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x346 = -1;
	static int16_t x347 = -1;
	int16_t x348 = -1;

    t71 = (((x345^x346)+x347)-x348);

    if (t71 != -8) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int16_t x349 = INT16_MAX;
	int64_t x351 = -3963842392251LL;
	int32_t x352 = 103379190;
	int64_t t72 = -7LL;

    t72 = (((x349^x350)+x351)-x352);

    if (t72 != -3963945771442LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x354 = INT64_MIN;
	volatile int32_t x355 = INT32_MAX;
	static int8_t x356 = INT8_MIN;
	int64_t t73 = -140164797176624405LL;

    t73 = (((x353^x354)+x355)-x356);

    if (t73 != -9223372034707274616LL) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x357 = INT32_MAX;
	uint16_t x358 = 398U;
	volatile int64_t x359 = -1LL;
	uint64_t x360 = 161557497230671LLU;
	volatile uint64_t t74 = 193346906LLU;

    t74 = (((x357^x358)+x359)-x360);

    if (t74 != 18446582518359804193LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x361 = 56;
	int64_t x362 = -40066286LL;
	static int64_t x363 = -1LL;
	static int32_t x364 = 269;
	int64_t t75 = 64741320LL;

    t75 = (((x361^x362)+x363)-x364);

    if (t75 != -40066532LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x365 = UINT64_MAX;
	int64_t x367 = -23045230032LL;
	uint32_t x368 = UINT32_MAX;
	uint64_t t76 = 329850607919968LLU;

    t76 = (((x365^x366)+x367)-x368);

    if (t76 != 18446744046369354289LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x369 = -486;
	uint64_t x370 = 17092890040988089LLU;
	uint64_t x371 = 4LLU;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t77 = 94301143879327LLU;

    t77 = (((x369^x370)+x371)-x372);

    if (t77 != 9206279146813788071LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x377 = UINT8_MAX;
	uint16_t x378 = UINT16_MAX;
	uint16_t x379 = 18629U;
	uint64_t x380 = 35612715231304LLU;
	volatile uint64_t t78 = 84776609985LLU;

    t78 = (((x377^x378)+x379)-x380);

    if (t78 != 18446708460994404221LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int8_t x381 = -1;
	static int16_t x382 = -1;
	uint64_t x384 = 2173083219572668LLU;
	uint64_t t79 = 112223LLU;

    t79 = (((x381^x382)+x383)-x384);

    if (t79 != 9221198953635203139LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x385 = UINT16_MAX;
	int16_t x387 = -2;
	uint64_t x388 = 9087075902877349LLU;
	uint64_t t80 = 3022LLU;

    t80 = (((x385^x386)+x387)-x388);

    if (t80 != 116897063633064458LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x389 = UINT8_MAX;
	int64_t x391 = -1LL;
	int64_t t81 = 18327LL;

    t81 = (((x389^x390)+x391)-x392);

    if (t81 != 2147483392LL) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x393 = 4;
	int8_t x394 = INT8_MAX;
	uint16_t x395 = 19U;
	volatile int32_t t82 = -267186170;

    t82 = (((x393^x394)+x395)-x396);

    if (t82 != 15) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x397 = INT16_MAX;
	uint64_t x398 = 1903603418296061815LLU;
	int64_t x399 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;

    t83 = (((x397^x398)+x399)-x400);

    if (t83 != 11126975450855895177LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x401 = INT64_MAX;
	volatile int8_t x402 = INT8_MIN;
	static uint64_t x403 = 7884197635LLU;
	static uint32_t x404 = 5863U;
	volatile uint64_t t84 = 40331833730515058LLU;

    t84 = (((x401^x402)+x403)-x404);

    if (t84 != 9223372044738967707LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x409 = INT32_MIN;
	int8_t x411 = -1;
	uint32_t x412 = 10449379U;
	uint32_t t85 = 1726615054U;

    t85 = (((x409^x410)+x411)-x412);

    if (t85 != 2137034395U) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x416 = INT16_MIN;
	int64_t t86 = -59814LL;

    t86 = (((x413^x414)+x415)-x416);

    if (t86 != -1076817794219847LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint32_t x417 = 82U;
	volatile int8_t x418 = -1;
	uint32_t x419 = 68987305U;
	static int32_t x420 = -1;

    t87 = (((x417^x418)+x419)-x420);

    if (t87 != 68987223U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x421 = 122328246176385LL;
	int8_t x422 = INT8_MIN;
	uint32_t x423 = 0U;
	int8_t x424 = INT8_MIN;
	int64_t t88 = -23LL;

    t88 = (((x421^x422)+x423)-x424);

    if (t88 != -122328246176383LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x425 = -1;
	uint32_t x426 = 443833U;
	volatile int8_t x428 = INT8_MAX;

    t89 = (((x425^x426)+x427)-x428);

    if (t89 != 4294523334LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x429 = INT8_MIN;
	int32_t x430 = -16500901;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t90 = -7106840;

    t90 = (((x429^x430)+x431)-x432);

    if (t90 != 16435420) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x437 = 69U;
	static int8_t x438 = INT8_MIN;
	static volatile int32_t t91 = -11868;

    t91 = (((x437^x438)+x439)-x440);

    if (t91 != -25) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x445 = 35;
	int32_t x447 = -1;
	uint32_t x448 = 15U;
	uint32_t t92 = 0U;

    t92 = (((x445^x446)+x447)-x448);

    if (t92 != 4294962940U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x449 = UINT64_MAX;
	int32_t x451 = INT32_MIN;
	int16_t x452 = INT16_MIN;
	uint64_t t93 = 882340651424LLU;

    t93 = (((x449^x450)+x451)-x452);

    if (t93 != 18446744071562100863LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int16_t x453 = INT16_MAX;
	int32_t x454 = INT32_MAX;
	static int16_t x455 = INT16_MIN;
	int16_t x456 = -996;

    t94 = (((x453^x454)+x455)-x456);

    if (t94 != 2147419108) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x457 = 5U;
	int64_t x459 = 294313785120693175LL;
	volatile int8_t x460 = INT8_MIN;

    t95 = (((x457^x458)+x459)-x460);

    if (t95 != 294313789415660462LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x461 = INT64_MIN;
	volatile int64_t x463 = -1LL;
	int32_t x464 = -96618;
	uint64_t t96 = 128344316LLU;

    t96 = (((x461^x462)+x463)-x464);

    if (t96 != 9223372036854872713LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x468 = -1;
	volatile int64_t t97 = 7687792927615723LL;

    t97 = (((x465^x466)+x467)-x468);

    if (t97 != 8257879732LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x469 = INT16_MAX;
	static int8_t x470 = 10;
	uint32_t x471 = UINT32_MAX;
	int8_t x472 = -1;
	uint32_t t98 = 2275018U;

    t98 = (((x469^x470)+x471)-x472);

    if (t98 != 32757U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = INT16_MIN;
	static int8_t x474 = INT8_MIN;
	int16_t x475 = INT16_MAX;
	static int8_t x476 = -1;

    t99 = (((x473^x474)+x475)-x476);

    if (t99 != 65408) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x477 = 1U;
	uint8_t x478 = 25U;
	uint16_t x479 = UINT16_MAX;
	volatile int16_t x480 = -1;
	int32_t t100 = 266234;

    t100 = (((x477^x478)+x479)-x480);

    if (t100 != 65560) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x481 = -1;
	int64_t x482 = 855361423293LL;
	int64_t x483 = INT64_MAX;
	int64_t t101 = 843613369667LL;

    t101 = (((x481^x482)+x483)-x484);

    if (t101 != 9223371183640836161LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x485 = 199645LLU;
	volatile int32_t x486 = INT32_MAX;
	int16_t x487 = INT16_MAX;
	int8_t x488 = INT8_MIN;
	volatile uint64_t t102 = 1292789834LLU;

    t102 = (((x485^x486)+x487)-x488);

    if (t102 != 2147316897LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x489 = -223LL;

    t103 = (((x489^x490)+x491)-x492);

    if (t103 != 164277145LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x494 = 57201282LL;
	int16_t x495 = INT16_MIN;
	static volatile int64_t t104 = 8682397335470LL;

    t104 = (((x493^x494)+x495)-x496);

    if (t104 != 57168516LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int32_t x497 = 14519;
	uint64_t x498 = UINT64_MAX;
	int32_t x499 = INT32_MIN;
	int64_t x500 = 24LL;
	uint64_t t105 = 3422532664045744796LLU;

    t105 = (((x497^x498)+x499)-x500);

    if (t105 != 18446744071562053424LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x501 = 1930;
	static int8_t x502 = 0;
	volatile int32_t x503 = INT32_MIN;
	volatile int32_t x504 = 126;
	int32_t t106 = -1;

    t106 = (((x501^x502)+x503)-x504);

    if (t106 != -2147481844) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x506 = INT32_MIN;
	uint8_t x507 = 66U;
	int8_t x508 = 0;
	volatile int32_t t107 = -1176;

    t107 = (((x505^x506)+x507)-x508);

    if (t107 != -2147483455) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x509 = 0U;
	int32_t x511 = INT32_MAX;
	int16_t x512 = INT16_MIN;
	static int32_t t108 = -38735;

    t108 = (((x509^x510)+x511)-x512);

    if (t108 != 32767) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x513 = 2494U;
	int8_t x514 = 0;
	uint64_t x515 = UINT64_MAX;
	uint32_t x516 = UINT32_MAX;
	volatile uint64_t t109 = 47931LLU;

    t109 = (((x513^x514)+x515)-x516);

    if (t109 != 18446744069414586814LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int8_t x517 = -1;
	int8_t x518 = 1;
	int32_t x520 = -1;
	static volatile int32_t t110 = 2580;

    t110 = (((x517^x518)+x519)-x520);

    if (t110 != -2) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x521 = 168547093U;
	int8_t x523 = INT8_MIN;
	uint64_t x524 = 1296567780059LLU;
	uint64_t t111 = 7LLU;

    t111 = (((x521^x522)+x523)-x524);

    if (t111 != 18446742779457802170LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x525 = UINT8_MAX;
	volatile int8_t x527 = INT8_MIN;
	volatile int16_t x528 = INT16_MAX;
	static volatile int32_t t112 = -299434411;

    t112 = (((x525^x526)+x527)-x528);

    if (t112 != -33024) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x529 = -1;
	static int8_t x530 = INT8_MAX;
	uint16_t x531 = 256U;
	uint32_t x532 = 255U;
	uint32_t t113 = 2847U;

    t113 = (((x529^x530)+x531)-x532);

    if (t113 != 4294967169U) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x535 = 53904289U;
	volatile uint32_t t114 = 1353365809U;

    t114 = (((x533^x534)+x535)-x536);

    if (t114 != 53904457U) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x537 = 19014U;
	static volatile int32_t x538 = -7764866;
	static int64_t x539 = INT64_MAX;
	uint8_t x540 = 11U;
	volatile int64_t t115 = 286003508970183883LL;

    t115 = (((x537^x538)+x539)-x540);

    if (t115 != 9223372036847029804LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x541 = 3U;
	int8_t x543 = -1;
	int16_t x544 = INT16_MIN;
	volatile int32_t t116 = 10133;

    t116 = (((x541^x542)+x543)-x544);

    if (t116 != 32772) { NG(); } else { ; }
	
}

void f117(void) {
    	static uint32_t x545 = UINT32_MAX;
	int8_t x548 = -28;

    t117 = (((x545^x546)+x547)-x548);

    if (t117 != -9223372036854775653LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = INT8_MIN;
	int16_t x551 = INT16_MIN;
	static uint64_t x552 = 55646107516925LLU;

    t118 = (((x549^x550)+x551)-x552);

    if (t118 != 18446688427602001923LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x553 = -1;
	uint16_t x554 = 6972U;
	int16_t x555 = INT16_MIN;
	int8_t x556 = 16;
	volatile int32_t t119 = 43671002;

    t119 = (((x553^x554)+x555)-x556);

    if (t119 != -39757) { NG(); } else { ; }
	
}

void f120(void) {
    	static int32_t x557 = 207008;
	int16_t x558 = INT16_MIN;
	int16_t x559 = 0;
	int16_t x560 = INT16_MIN;
	static int32_t t120 = -5656771;

    t120 = (((x557^x558)+x559)-x560);

    if (t120 != -186208) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x561 = 36U;
	int64_t x562 = -1LL;
	static uint32_t x563 = 2361U;
	static uint8_t x564 = UINT8_MAX;
	volatile int64_t t121 = 39290179542505107LL;

    t121 = (((x561^x562)+x563)-x564);

    if (t121 != 2069LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x565 = INT64_MAX;
	int16_t x566 = 9654;
	uint64_t x567 = UINT64_MAX;
	uint16_t x568 = UINT16_MAX;
	volatile uint64_t t122 = 4985LLU;

    t122 = (((x565^x566)+x567)-x568);

    if (t122 != 9223372036854700617LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x570 = 8663367148915446LL;
	int16_t x571 = INT16_MAX;
	uint16_t x572 = 17515U;
	int64_t t123 = -2423210023969735LL;

    t123 = (((x569^x570)+x571)-x572);

    if (t123 != 8663367148930621LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x573 = UINT64_MAX;
	int64_t x574 = -1LL;
	uint32_t x575 = 9994030U;
	int16_t x576 = INT16_MIN;
	volatile uint64_t t124 = 2057318335035223LLU;

    t124 = (((x573^x574)+x575)-x576);

    if (t124 != 10026798LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x578 = INT8_MIN;
	volatile uint16_t x579 = 0U;
	static int64_t x580 = -1LL;
	int64_t t125 = -476265962908675405LL;

    t125 = (((x577^x578)+x579)-x580);

    if (t125 != 128LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x581 = -1;
	uint64_t x582 = 16449320104537LLU;
	int64_t x583 = -1LL;
	int16_t x584 = -1;
	volatile uint64_t t126 = 3581843973LLU;

    t126 = (((x581^x582)+x583)-x584);

    if (t126 != 18446727624389447078LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x585 = INT8_MIN;
	uint32_t x586 = 1641U;
	volatile int8_t x587 = -5;
	volatile int64_t x588 = -1LL;
	int64_t t127 = -13688LL;

    t127 = (((x585^x586)+x587)-x588);

    if (t127 != 4294965733LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x605 = 53U;
	int64_t x606 = -1LL;
	int8_t x607 = INT8_MIN;
	volatile int16_t x608 = -29;
	int64_t t128 = 2085801LL;

    t128 = (((x605^x606)+x607)-x608);

    if (t128 != -153LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x610 = INT8_MIN;
	static int16_t x611 = INT16_MIN;
	uint8_t x612 = 13U;
	int32_t t129 = 66847;

    t129 = (((x609^x610)+x611)-x612);

    if (t129 != -32781) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint16_t x617 = 13207U;
	int8_t x619 = INT8_MAX;
	volatile int32_t x620 = 11533998;
	int32_t t130 = -223;

    t130 = (((x617^x618)+x619)-x620);

    if (t130 != -11520685) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x621 = INT64_MAX;
	volatile uint64_t x622 = 106926571698710113LLU;
	static volatile int16_t x623 = -33;
	volatile uint16_t x624 = 0U;
	volatile uint64_t t131 = 1311LLU;

    t131 = (((x621^x622)+x623)-x624);

    if (t131 != 9116445465156065661LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x625 = INT32_MAX;
	int16_t x626 = -2;
	uint16_t x627 = 16317U;
	int64_t x628 = 1221146828030LL;
	volatile int64_t t132 = 532883667948828LL;

    t132 = (((x625^x626)+x627)-x628);

    if (t132 != -1223294295360LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x629 = INT8_MAX;
	uint8_t x630 = UINT8_MAX;
	static uint16_t x631 = 4354U;
	int8_t x632 = INT8_MAX;
	volatile int32_t t133 = -324687;

    t133 = (((x629^x630)+x631)-x632);

    if (t133 != 4355) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x633 = 0U;
	static int16_t x634 = INT16_MIN;
	uint32_t x636 = UINT32_MAX;
	uint32_t t134 = 15U;

    t134 = (((x633^x634)+x635)-x636);

    if (t134 != 4294936274U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x637 = 4U;
	static int64_t x638 = INT64_MIN;
	int16_t x639 = INT16_MAX;
	int64_t x640 = -55556458063429LL;
	int64_t t135 = -252850418043LL;

    t135 = (((x637^x638)+x639)-x640);

    if (t135 != -9223316480396679608LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x641 = INT64_MIN;
	int8_t x642 = INT8_MIN;
	uint8_t x643 = 52U;
	uint64_t x644 = UINT64_MAX;
	volatile uint64_t t136 = 213775338607412340LLU;

    t136 = (((x641^x642)+x643)-x644);

    if (t136 != 9223372036854775733LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x649 = 33108271734986LLU;
	int32_t x650 = 6990;
	int32_t x651 = INT32_MIN;
	int32_t x652 = -576096;
	volatile uint64_t t137 = 437348555386245LLU;

    t137 = (((x649^x650)+x651)-x652);

    if (t137 != 33106124834276LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x653 = 30095515923076LLU;
	int16_t x654 = 0;
	int32_t x655 = INT32_MIN;
	uint32_t x656 = UINT32_MAX;
	uint64_t t138 = 4098684LLU;

    t138 = (((x653^x654)+x655)-x656);

    if (t138 != 30089073472133LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x658 = -1LL;
	static volatile uint16_t x659 = 10118U;
	static int8_t x660 = 1;
	volatile int64_t t139 = -839097530145601326LL;

    t139 = (((x657^x658)+x659)-x660);

    if (t139 != 10100LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x662 = 1948LLU;
	int64_t x663 = -4003301818447728822LL;
	int8_t x664 = INT8_MAX;

    t140 = (((x661^x662)+x663)-x664);

    if (t140 != 14443442255261791847LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x665 = 3643;
	int8_t x666 = INT8_MIN;
	uint64_t x667 = 3118LLU;
	volatile uint32_t x668 = 1017715231U;
	uint64_t t141 = 4712973677249940729LLU;

    t141 = (((x665^x666)+x667)-x668);

    if (t141 != 18446744072691835850LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x673 = 8U;
	uint64_t x675 = 1254086593211107LLU;
	uint16_t x676 = UINT16_MAX;
	volatile uint64_t t142 = 54816834LLU;

    t142 = (((x673^x674)+x675)-x676);

    if (t142 != 1254088740629211LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x677 = -31891648712515LL;
	volatile int32_t x678 = INT32_MIN;
	int8_t x679 = 0;
	static int32_t x680 = INT32_MIN;

    t143 = (((x677^x678)+x679)-x680);

    if (t143 != 31892910600381LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x681 = 75U;
	uint64_t x682 = UINT64_MAX;
	int32_t x683 = INT32_MIN;
	volatile int32_t x684 = -1;
	uint64_t t144 = 256295650LLU;

    t144 = (((x681^x682)+x683)-x684);

    if (t144 != 18446744071562067893LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x685 = 921639806328461LLU;
	static int64_t x687 = INT64_MIN;
	uint64_t t145 = 51565853LLU;

    t145 = (((x685^x686)+x687)-x688);

    if (t145 != 9224293676661088627LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint32_t x689 = 15U;
	int16_t x690 = -1;
	uint8_t x691 = 33U;
	uint8_t x692 = 30U;
	volatile uint32_t t146 = 1075448999U;

    t146 = (((x689^x690)+x691)-x692);

    if (t146 != 4294967283U) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x694 = -14;
	volatile int8_t x695 = INT8_MAX;
	volatile int16_t x696 = INT16_MIN;

    t147 = (((x693^x694)+x695)-x696);

    if (t147 != 32503) { NG(); } else { ; }
	
}

void f148(void) {
    	static int16_t x697 = INT16_MIN;
	volatile int8_t x698 = -3;
	uint64_t x699 = UINT64_MAX;
	int8_t x700 = 2;
	volatile uint64_t t148 = 3224LLU;

    t148 = (((x697^x698)+x699)-x700);

    if (t148 != 32762LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x701 = 754U;
	int16_t x702 = 18;
	int8_t x703 = INT8_MIN;

    t149 = (((x701^x702)+x703)-x704);

    if (t149 != 5344786453538557LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x709 = INT32_MIN;
	int64_t x711 = INT64_MAX;
	int32_t x712 = 43759896;
	volatile int64_t t150 = -244661903832853LL;

    t150 = (((x709^x710)+x711)-x712);

    if (t150 != 9223372034663597798LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t t151 = 277LLU;

    t151 = (((x713^x714)+x715)-x716);

    if (t151 != 18446738452112701635LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint32_t x718 = 208U;
	int64_t x719 = -810LL;
	int32_t x720 = INT32_MIN;
	volatile int64_t t152 = -564692LL;

    t152 = (((x717^x718)+x719)-x720);

    if (t152 != 6442449925LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x721 = 149;
	int16_t x722 = INT16_MIN;
	volatile int64_t x723 = 1LL;
	static int16_t x724 = 126;

    t153 = (((x721^x722)+x723)-x724);

    if (t153 != -32744LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x725 = INT16_MIN;
	static int8_t x726 = 28;
	int8_t x727 = -1;
	uint8_t x728 = 29U;
	int32_t t154 = 39488;

    t154 = (((x725^x726)+x727)-x728);

    if (t154 != -32770) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x729 = 14U;
	volatile uint64_t x730 = UINT64_MAX;
	static int16_t x732 = -212;
	volatile uint64_t t155 = 5045212442403LLU;

    t155 = (((x729^x730)+x731)-x732);

    if (t155 != 196LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x753 = INT16_MAX;
	volatile int64_t x754 = -9089109778903177LL;
	int32_t x755 = 0;
	volatile int64_t t156 = -606655060474153LL;

    t156 = (((x753^x754)+x755)-x756);

    if (t156 != -9089109778911095LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x757 = 107941;
	volatile int64_t x758 = 3228650988147348976LL;
	int8_t x759 = -59;
	int32_t x760 = -1;
	static volatile int64_t t157 = -2523683729794LL;

    t157 = (((x757^x758)+x759)-x760);

    if (t157 != 3228650988147388443LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x761 = INT16_MIN;
	uint64_t x762 = UINT64_MAX;
	static int64_t x764 = -156LL;
	uint64_t t158 = 775411982LLU;

    t158 = (((x761^x762)+x763)-x764);

    if (t158 != 32925LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x769 = INT64_MIN;
	uint64_t x770 = 668452833048348967LLU;
	int8_t x771 = -51;
	int8_t x772 = 1;
	volatile uint64_t t159 = 1015371LLU;

    t159 = (((x769^x770)+x771)-x772);

    if (t159 != 9891824869903124723LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x773 = -1LL;
	volatile int64_t x774 = INT64_MIN;
	int8_t x775 = -1;
	int16_t x776 = INT16_MAX;
	volatile int64_t t160 = 2LL;

    t160 = (((x773^x774)+x775)-x776);

    if (t160 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x777 = 3361;
	int8_t x779 = INT8_MIN;
	uint32_t x780 = 55301930U;
	uint32_t t161 = 221U;

    t161 = (((x777^x778)+x779)-x780);

    if (t161 != 4239661815U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x781 = 1914504U;
	int32_t x782 = INT32_MIN;
	static uint64_t x784 = 19711LLU;

    t162 = (((x781^x782)+x783)-x784);

    if (t162 != 2149388915LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x785 = -1;
	int16_t x786 = 1;
	int16_t x788 = INT16_MIN;
	static int32_t t163 = -1;

    t163 = (((x785^x786)+x787)-x788);

    if (t163 != 32765) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x789 = 290;
	int32_t x790 = INT32_MIN;
	int64_t x792 = -4187LL;
	volatile int64_t t164 = -22121655LL;

    t164 = (((x789^x790)+x791)-x792);

    if (t164 != -2147478916LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x794 = 12907;
	int8_t x796 = INT8_MAX;
	int64_t t165 = 369LL;

    t165 = (((x793^x794)+x795)-x796);

    if (t165 != -2001756623263891828LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x801 = 1;
	static volatile int8_t x802 = INT8_MIN;
	int8_t x803 = -1;
	uint8_t x804 = 20U;
	int32_t t166 = 144;

    t166 = (((x801^x802)+x803)-x804);

    if (t166 != -148) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x805 = 12000LLU;
	static int64_t x807 = INT64_MAX;

    t167 = (((x805^x806)+x807)-x808);

    if (t167 != 11609LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x809 = INT16_MIN;
	int64_t x810 = -38114505679LL;
	volatile uint64_t x811 = 68680993521LLU;
	volatile int16_t x812 = INT16_MIN;

    t168 = (((x809^x810)+x811)-x812);

    if (t168 != 106795538210LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint8_t x813 = 12U;
	static int16_t x814 = INT16_MIN;
	uint64_t x815 = 506LLU;
	volatile int64_t x816 = INT64_MIN;

    t169 = (((x813^x814)+x815)-x816);

    if (t169 != 9223372036854743558LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x817 = -1;
	uint16_t x818 = UINT16_MAX;
	int8_t x820 = INT8_MIN;
	volatile uint64_t t170 = 58705513945313LLU;

    t170 = (((x817^x818)+x819)-x820);

    if (t170 != 381950347LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x821 = 3U;
	volatile uint16_t x823 = 30U;
	int16_t x824 = -4;
	int64_t t171 = -748677LL;

    t171 = (((x821^x822)+x823)-x824);

    if (t171 != 247527LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x825 = 1;
	uint32_t x826 = 2336U;
	uint64_t x827 = UINT64_MAX;
	int64_t x828 = INT64_MAX;
	uint64_t t172 = 2300LLU;

    t172 = (((x825^x826)+x827)-x828);

    if (t172 != 9223372036854778145LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x830 = UINT32_MAX;
	uint32_t x831 = 22U;
	static int64_t t173 = -6LL;

    t173 = (((x829^x830)+x831)-x832);

    if (t173 != -9223372032559808510LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint8_t x834 = UINT8_MAX;
	uint16_t x835 = 0U;
	int16_t x836 = INT16_MAX;
	int32_t t174 = -423938;

    t174 = (((x833^x834)+x835)-x836);

    if (t174 != -32519) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x838 = 0U;
	int64_t x839 = -1LL;
	int16_t x840 = -1;
	int64_t t175 = -240316020764LL;

    t175 = (((x837^x838)+x839)-x840);

    if (t175 != -32768LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int8_t x841 = -1;
	int8_t x842 = INT8_MIN;
	int64_t x843 = -1LL;
	volatile int8_t x844 = 5;
	static volatile int64_t t176 = 6158LL;

    t176 = (((x841^x842)+x843)-x844);

    if (t176 != 121LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x845 = 7LLU;
	uint64_t x847 = 23956256LLU;
	int64_t x848 = INT64_MAX;
	volatile uint64_t t177 = 9082481642LLU;

    t177 = (((x845^x846)+x847)-x848);

    if (t177 != 23956264LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x849 = INT8_MIN;
	volatile int8_t x851 = -1;
	volatile int64_t t178 = -12LL;

    t178 = (((x849^x850)+x851)-x852);

    if (t178 != -1102070102939532LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x853 = UINT8_MAX;
	int32_t x855 = -1;
	static int32_t x856 = INT32_MAX;

    t179 = (((x853^x854)+x855)-x856);

    if (t179 != 3539679097U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x865 = -31;
	static int8_t x867 = -21;
	static int32_t t180 = -14;

    t180 = (((x865^x866)+x867)-x868);

    if (t180 != -12195) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x870 = 11551;
	volatile uint64_t t181 = 4102653043972333455LLU;

    t181 = (((x869^x870)+x871)-x872);

    if (t181 != 4584330035LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x873 = -1;
	static volatile int64_t x874 = INT64_MIN;
	static volatile uint64_t x875 = 170597118221343194LLU;
	int32_t x876 = INT32_MIN;

    t182 = (((x873^x874)+x875)-x876);

    if (t182 != 9393969157223602649LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x877 = -223;
	uint16_t x878 = UINT16_MAX;
	uint64_t x879 = UINT64_MAX;
	volatile int16_t x880 = INT16_MIN;
	volatile uint64_t t183 = 1160001003752LLU;

    t183 = (((x877^x878)+x879)-x880);

    if (t183 != 18446744073709519069LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x881 = -25700;
	static volatile uint16_t x883 = 1U;
	volatile int32_t x884 = INT32_MIN;
	int32_t t184 = -454;

    t184 = (((x881^x882)+x883)-x884);

    if (t184 != 2147476580) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x885 = -9243;
	int16_t x886 = -14897;
	int8_t x887 = 11;
	uint8_t x888 = UINT8_MAX;

    t185 = (((x885^x886)+x887)-x888);

    if (t185 != 7478) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x893 = INT32_MAX;
	int8_t x894 = INT8_MIN;
	uint16_t x895 = 17U;
	static int64_t x896 = -1LL;
	int64_t t186 = -3388912391155LL;

    t186 = (((x893^x894)+x895)-x896);

    if (t186 != -2147483503LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x897 = INT8_MAX;
	int8_t x898 = INT8_MIN;
	int32_t x900 = 2;

    t187 = (((x897^x898)+x899)-x900);

    if (t187 != -131) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x905 = INT32_MIN;
	uint16_t x906 = UINT16_MAX;
	uint16_t x907 = 2918U;
	volatile uint32_t t188 = 163U;

    t188 = (((x905^x906)+x907)-x908);

    if (t188 != 2147552090U) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x909 = 0;
	uint8_t x910 = UINT8_MAX;
	volatile int8_t x911 = INT8_MIN;
	int32_t x912 = INT32_MAX;
	volatile int32_t t189 = 2;

    t189 = (((x909^x910)+x911)-x912);

    if (t189 != -2147483520) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x913 = INT16_MIN;
	uint64_t x915 = 8186853118338LLU;
	uint32_t x916 = 439027034U;

    t190 = (((x913^x914)+x915)-x916);

    if (t190 != 8186414058535LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x918 = -1;
	int16_t x919 = -1;
	int16_t x920 = INT16_MAX;
	volatile int32_t t191 = 2823638;

    t191 = (((x917^x918)+x919)-x920);

    if (t191 != -32662) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x923 = 13LLU;
	static uint64_t t192 = 8LLU;

    t192 = (((x921^x922)+x923)-x924);

    if (t192 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	static int32_t x925 = -609857;
	uint8_t x926 = 4U;
	uint8_t x927 = 0U;
	int8_t x928 = -1;
	int32_t t193 = 1;

    t193 = (((x925^x926)+x927)-x928);

    if (t193 != -609860) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x929 = 0;
	volatile int8_t x930 = -1;
	uint64_t x931 = UINT64_MAX;
	uint64_t t194 = 98966365535LLU;

    t194 = (((x929^x930)+x931)-x932);

    if (t194 != 32766LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x946 = -19;
	static int8_t x947 = INT8_MIN;
	volatile int64_t t195 = 2611941122LL;

    t195 = (((x945^x946)+x947)-x948);

    if (t195 != 196863137174361LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int64_t x949 = INT64_MIN;
	int32_t x951 = -1;
	int64_t t196 = -8411324129907LL;

    t196 = (((x949^x950)+x951)-x952);

    if (t196 != -9223372036854775723LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x953 = INT16_MIN;
	static uint32_t x954 = 5493788U;
	int64_t x955 = INT64_MIN;
	volatile int64_t x956 = -1LL;
	int64_t t197 = 4671522909009615LL;

    t197 = (((x953^x954)+x955)-x956);

    if (t197 != -9223372032565292003LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x958 = INT16_MIN;
	volatile int8_t x959 = 10;
	uint64_t t198 = 29047LLU;

    t198 = (((x957^x958)+x959)-x960);

    if (t198 != 18446744073709519114LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x966 = -13203848837410732LL;
	int8_t x967 = INT8_MIN;

    t199 = (((x965^x966)+x967)-x968);

    if (t199 != -13203848855354583LL) { NG(); } else { ; }
	
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

