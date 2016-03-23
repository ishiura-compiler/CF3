
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

static uint16_t x4 = UINT16_MAX;
static int16_t x9 = INT16_MIN;
int16_t x16 = 8525;
int32_t x21 = INT32_MIN;
volatile uint32_t x25 = 312041224U;
uint32_t x26 = 69799U;
uint64_t x27 = 35989022370037LLU;
int32_t t7 = 251144;
int32_t x56 = 7;
int8_t x65 = -1;
int16_t x67 = INT16_MIN;
static int32_t x70 = 3160934;
volatile int32_t t13 = -8354427;
static uint64_t x81 = UINT64_MAX;
uint8_t x86 = UINT8_MAX;
volatile int64_t x87 = 4122LL;
int32_t t15 = 1;
static volatile uint32_t x96 = 162627U;
volatile int32_t x101 = INT32_MIN;
int32_t x111 = INT32_MAX;
volatile int8_t x112 = INT8_MAX;
static int8_t x122 = -1;
uint32_t x123 = 33800995U;
static int8_t x125 = -1;
static int32_t t25 = -1428305;
uint16_t x136 = UINT16_MAX;
int64_t x145 = INT64_MIN;
static int16_t x152 = INT16_MIN;
uint32_t x153 = UINT32_MAX;
uint32_t x162 = 4U;
volatile int32_t t33 = -11793003;
int8_t x165 = INT8_MIN;
int16_t x179 = -110;
static int32_t t36 = 0;
int8_t x193 = INT8_MIN;
volatile int32_t t39 = 19641010;
int64_t x206 = INT64_MIN;
int8_t x208 = INT8_MIN;
int32_t t42 = 84;
int32_t x227 = -1655;
int64_t x259 = 3LL;
volatile uint64_t x263 = 119562118LLU;
int64_t x264 = 655272364582370LL;
int32_t x268 = 708;
static int32_t t52 = -3864;
volatile int32_t x277 = 27510;
static int16_t x279 = -1;
int32_t x283 = INT32_MAX;
static int32_t t55 = -13663564;
volatile int32_t t56 = -27;
volatile uint32_t x298 = 1311417374U;
int32_t x300 = INT32_MIN;
int8_t x302 = INT8_MIN;
int64_t x305 = -1LL;
int8_t x306 = INT8_MAX;
uint64_t x319 = 6846122LLU;
uint64_t x322 = 7411882142256652029LLU;
int32_t t62 = 1204198;
static int64_t x326 = INT64_MIN;
int32_t x329 = -1;
uint8_t x332 = UINT8_MAX;
static int32_t x338 = -1;
static int32_t x339 = 818199;
int32_t t66 = 0;
static int16_t x355 = 22;
int32_t x362 = INT32_MIN;
int16_t x363 = INT16_MIN;
int32_t x364 = INT32_MAX;
uint32_t x371 = 100797U;
volatile int32_t t72 = -76946440;
uint32_t x388 = 463558346U;
uint8_t x393 = 61U;
volatile int32_t t75 = 10;
uint32_t x397 = 1U;
uint8_t x400 = 6U;
uint8_t x408 = 38U;
int16_t x409 = -1;
static int32_t t79 = -22;
static volatile uint32_t x414 = 5941U;
uint64_t x431 = 1734065497423890LLU;
int32_t t82 = -3920;
static int8_t x440 = INT8_MIN;
volatile int32_t t83 = -396;
int32_t t84 = -59;
int16_t x453 = INT16_MAX;
static uint64_t x454 = 0LLU;
volatile int8_t x469 = -1;
int32_t x472 = INT32_MIN;
uint8_t x482 = UINT8_MAX;
static int32_t x493 = -1;
uint64_t x494 = 28966768797LLU;
int8_t x495 = -1;
int32_t t93 = -536744967;
volatile uint32_t x499 = 14387851U;
int32_t t94 = 259384860;
volatile int32_t x507 = INT32_MIN;
static uint64_t x512 = 76150518LLU;
int16_t x532 = 214;
int64_t x535 = -1LL;
volatile int32_t t101 = -19733;
static int8_t x538 = INT8_MIN;
int16_t x546 = INT16_MAX;
volatile int32_t x547 = INT32_MAX;
volatile uint32_t x570 = UINT32_MAX;
int32_t x571 = -1830;
volatile int16_t x572 = INT16_MIN;
int8_t x577 = 0;
uint32_t x579 = 2275270U;
static int32_t x580 = 63;
int32_t t108 = -50482;
static uint16_t x599 = 1U;
static int8_t x608 = INT8_MIN;
static int32_t x612 = INT32_MIN;
int32_t t111 = -444166;
volatile int32_t x626 = INT32_MAX;
static uint64_t x627 = 9312104LLU;
static int32_t t114 = -21092;
int32_t x641 = INT32_MAX;
volatile int16_t x644 = INT16_MAX;
int32_t t116 = 251243141;
static int32_t x648 = -457941;
static int32_t x663 = -1;
static volatile int32_t t119 = 750848;
int64_t x672 = INT64_MIN;
volatile int32_t t120 = -2;
volatile int8_t x673 = INT8_MIN;
uint64_t x687 = UINT64_MAX;
static int16_t x688 = -3;
int32_t x690 = -12699826;
static uint8_t x702 = 41U;
int64_t x704 = INT64_MIN;
int32_t x708 = 505;
volatile int16_t x720 = INT16_MAX;
int32_t t128 = 108189;
volatile int32_t x731 = INT32_MIN;
static int32_t t130 = -22528;
uint8_t x736 = UINT8_MAX;
int32_t t132 = -6992943;
static uint32_t x753 = UINT32_MAX;
uint32_t x756 = UINT32_MAX;
uint16_t x770 = 1763U;
static uint16_t x783 = 12U;
static uint8_t x790 = UINT8_MAX;
uint32_t x795 = UINT32_MAX;
int64_t x814 = 4168277690922272252LL;
static volatile int32_t t142 = -1;
int32_t x817 = INT32_MIN;
volatile int32_t x826 = INT32_MIN;
int16_t x833 = 501;
int32_t x834 = -1027129091;
uint8_t x837 = 4U;
int32_t t148 = -1793;
static int32_t x841 = INT32_MIN;
volatile int32_t t150 = 16;
int64_t x871 = INT64_MAX;
int16_t x872 = INT16_MAX;
volatile int32_t t154 = 1321;
volatile int32_t t156 = -301612625;
int16_t x887 = -764;
static int8_t x890 = INT8_MIN;
uint64_t x891 = UINT64_MAX;
uint16_t x896 = 52U;
volatile int32_t t159 = 1084;
volatile uint8_t x897 = UINT8_MAX;
uint8_t x899 = 17U;
static volatile int64_t x904 = INT64_MIN;
static uint32_t x906 = 2607470U;
int64_t x907 = -1LL;
int16_t x909 = INT16_MIN;
int32_t x919 = -1;
volatile int32_t t164 = -7478662;
static int16_t x926 = INT16_MAX;
int16_t x933 = 1;
uint8_t x936 = 19U;
volatile uint32_t x939 = 363275077U;
int32_t t169 = 30;
int64_t x959 = INT64_MIN;
uint64_t x976 = 425556LLU;
int32_t x979 = -8;
int32_t x990 = 77;
volatile int32_t t181 = 164512968;
uint8_t x1028 = UINT8_MAX;
int32_t t183 = 1821;
uint8_t x1031 = 58U;
int32_t t185 = 565420;
volatile int32_t t186 = 379590;
uint32_t x1045 = 31U;
uint32_t x1046 = UINT32_MAX;
static volatile int16_t x1047 = INT16_MIN;
volatile int32_t t187 = -44536182;
int8_t x1050 = -1;
static uint8_t x1052 = 3U;
int8_t x1065 = INT8_MIN;
static int8_t x1086 = -1;
int32_t t194 = -34;
int16_t x1090 = INT16_MAX;
uint32_t x1105 = 46382U;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int16_t x2 = 141;
	volatile int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -768802;

    t0 = (x1!=(x2/(x3%x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x10 = -1;
	int32_t x11 = INT32_MIN;
	int8_t x12 = INT8_MAX;
	volatile int32_t t1 = -778;

    t1 = (x9!=(x10/(x11%x12)));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	volatile uint32_t x15 = 196U;
	static int32_t t2 = -2382413;

    t2 = (x13!=(x14/(x15%x16)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = -1;
	uint8_t x18 = 18U;
	int64_t x19 = INT64_MAX;
	int8_t x20 = 15;
	static volatile int32_t t3 = 284965658;

    t3 = (x17!=(x18/(x19%x20)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 0;

    t4 = (x21!=(x22/(x23%x24)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint8_t x28 = 54U;
	static volatile int32_t t5 = -14586;

    t5 = (x25!=(x26/(x27%x28)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = 2;
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = INT8_MAX;
	uint64_t x36 = 3275250792574LLU;
	volatile int32_t t6 = -1043;

    t6 = (x33!=(x34/(x35%x36)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MAX;
	int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	static volatile int32_t x44 = INT32_MIN;

    t7 = (x41!=(x42/(x43%x44)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x49 = INT8_MAX;
	int64_t x50 = INT64_MAX;
	int8_t x51 = INT8_MIN;
	uint16_t x52 = 16445U;
	volatile int32_t t8 = -455997;

    t8 = (x49!=(x50/(x51%x52)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x53 = 119294U;
	int64_t x54 = INT64_MIN;
	int32_t x55 = INT32_MAX;
	volatile int32_t t9 = 250233;

    t9 = (x53!=(x54/(x55%x56)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int64_t x57 = INT64_MAX;
	int64_t x58 = INT64_MIN;
	int64_t x59 = -251275LL;
	int8_t x60 = INT8_MAX;
	volatile int32_t t10 = -157059366;

    t10 = (x57!=(x58/(x59%x60)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x66 = -66751684LL;
	uint16_t x68 = 3U;
	volatile int32_t t11 = 96619;

    t11 = (x65!=(x66/(x67%x68)));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x69 = 222054U;
	int16_t x71 = INT16_MAX;
	static int64_t x72 = -215LL;
	volatile int32_t t12 = -687677;

    t12 = (x69!=(x70/(x71%x72)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = 0;
	static int32_t x79 = INT32_MAX;
	uint8_t x80 = UINT8_MAX;

    t13 = (x77!=(x78/(x79%x80)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x82 = UINT64_MAX;
	uint8_t x83 = UINT8_MAX;
	uint32_t x84 = 229945753U;
	static int32_t t14 = -256;

    t14 = (x81!=(x82/(x83%x84)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x85 = UINT8_MAX;
	uint32_t x88 = 279852917U;

    t15 = (x85!=(x86/(x87%x88)));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x89 = UINT16_MAX;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MAX;
	int16_t x92 = 14025;
	int32_t t16 = -659609727;

    t16 = (x89!=(x90/(x91%x92)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = -7LL;
	int16_t x94 = INT16_MIN;
	volatile int32_t x95 = INT32_MIN;
	volatile int32_t t17 = 29600764;

    t17 = (x93!=(x94/(x95%x96)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x97 = 686U;
	int64_t x98 = -3476386LL;
	int16_t x99 = 8;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t18 = 337;

    t18 = (x97!=(x98/(x99%x100)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x102 = -1;
	int32_t x103 = INT32_MAX;
	volatile uint32_t x104 = UINT32_MAX;
	int32_t t19 = 133;

    t19 = (x101!=(x102/(x103%x104)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x105 = -5540;
	volatile int8_t x106 = INT8_MIN;
	int16_t x107 = -3;
	uint8_t x108 = UINT8_MAX;
	static volatile int32_t t20 = 104228903;

    t20 = (x105!=(x106/(x107%x108)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x109 = 3639U;
	int64_t x110 = -4246414430078540LL;
	int32_t t21 = -248089334;

    t21 = (x109!=(x110/(x111%x112)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x113 = -3212141;
	static volatile int16_t x114 = -1;
	uint32_t x115 = 8676U;
	int16_t x116 = -1;
	int32_t t22 = -35201767;

    t22 = (x113!=(x114/(x115%x116)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x117 = 2;
	int32_t x118 = -1;
	int64_t x119 = 62394551LL;
	uint64_t x120 = UINT64_MAX;
	volatile int32_t t23 = -771;

    t23 = (x117!=(x118/(x119%x120)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x121 = INT8_MIN;
	int16_t x124 = -1;
	volatile int32_t t24 = 108145106;

    t24 = (x121!=(x122/(x123%x124)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x126 = INT32_MIN;
	int8_t x127 = -1;
	int64_t x128 = INT64_MIN;

    t25 = (x125!=(x126/(x127%x128)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x133 = 43U;
	int64_t x134 = INT64_MIN;
	int32_t x135 = -157234;
	int32_t t26 = -94;

    t26 = (x133!=(x134/(x135%x136)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x137 = INT32_MIN;
	static volatile int16_t x138 = 69;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MAX;
	int32_t t27 = 171618;

    t27 = (x137!=(x138/(x139%x140)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x141 = 608184LLU;
	int16_t x142 = 712;
	static volatile int64_t x143 = -1LL;
	static uint32_t x144 = 427U;
	int32_t t28 = -546393;

    t28 = (x141!=(x142/(x143%x144)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MIN;
	uint32_t x148 = UINT32_MAX;
	int32_t t29 = 187679;

    t29 = (x145!=(x146/(x147%x148)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x149 = INT16_MIN;
	int16_t x150 = -51;
	uint8_t x151 = 3U;
	int32_t t30 = 9166955;

    t30 = (x149!=(x150/(x151%x152)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x154 = INT32_MIN;
	volatile int64_t x155 = -1LL;
	static uint32_t x156 = 1634U;
	int32_t t31 = 107;

    t31 = (x153!=(x154/(x155%x156)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x157 = 155800113LLU;
	volatile int32_t x158 = INT32_MAX;
	uint16_t x159 = 89U;
	uint8_t x160 = 4U;
	static int32_t t32 = -1;

    t32 = (x157!=(x158/(x159%x160)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = INT16_MAX;
	uint64_t x163 = 601LLU;
	volatile uint64_t x164 = UINT64_MAX;

    t33 = (x161!=(x162/(x163%x164)));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x166 = INT16_MIN;
	int32_t x167 = 255116;
	volatile int8_t x168 = -6;
	volatile int32_t t34 = 42104601;

    t34 = (x165!=(x166/(x167%x168)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x173 = -1;
	int32_t x174 = 0;
	int8_t x175 = -1;
	static uint32_t x176 = 7062U;
	int32_t t35 = -1;

    t35 = (x173!=(x174/(x175%x176)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x177 = 14U;
	int8_t x178 = -1;
	volatile int32_t x180 = -37087437;

    t36 = (x177!=(x178/(x179%x180)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x181 = 308U;
	volatile int64_t x182 = -77431197603863011LL;
	volatile int32_t x183 = INT32_MIN;
	uint64_t x184 = 151829861682892805LLU;
	volatile int32_t t37 = -2058704;

    t37 = (x181!=(x182/(x183%x184)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x189 = 1U;
	int8_t x190 = -1;
	volatile int32_t x191 = 9078429;
	volatile int8_t x192 = INT8_MIN;
	static int32_t t38 = 8888;

    t38 = (x189!=(x190/(x191%x192)));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint64_t x194 = UINT64_MAX;
	static uint8_t x195 = 50U;
	static uint32_t x196 = 305558655U;

    t39 = (x193!=(x194/(x195%x196)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x197 = -5;
	int16_t x198 = INT16_MAX;
	int16_t x199 = 123;
	int16_t x200 = INT16_MAX;
	static volatile int32_t t40 = 545;

    t40 = (x197!=(x198/(x199%x200)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x201 = 10462632;
	uint32_t x202 = 28272571U;
	static volatile uint8_t x203 = 5U;
	int16_t x204 = INT16_MAX;
	volatile int32_t t41 = -20394234;

    t41 = (x201!=(x202/(x203%x204)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x205 = INT8_MAX;
	volatile uint32_t x207 = 1908843U;

    t42 = (x205!=(x206/(x207%x208)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x209 = INT16_MIN;
	volatile int32_t x210 = INT32_MIN;
	uint16_t x211 = 36U;
	int32_t x212 = INT32_MIN;
	int32_t t43 = -5949;

    t43 = (x209!=(x210/(x211%x212)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint8_t x217 = UINT8_MAX;
	uint16_t x218 = UINT16_MAX;
	static uint8_t x219 = 59U;
	int16_t x220 = INT16_MIN;
	int32_t t44 = 837295;

    t44 = (x217!=(x218/(x219%x220)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x225 = 481720552211253199LLU;
	static uint16_t x226 = UINT16_MAX;
	int32_t x228 = INT32_MIN;
	volatile int32_t t45 = 33342551;

    t45 = (x225!=(x226/(x227%x228)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x233 = INT32_MAX;
	volatile int32_t x234 = INT32_MIN;
	int64_t x235 = INT64_MIN;
	uint32_t x236 = UINT32_MAX;
	int32_t t46 = -1;

    t46 = (x233!=(x234/(x235%x236)));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint16_t x241 = 2185U;
	int64_t x242 = INT64_MIN;
	int16_t x243 = -3;
	uint8_t x244 = 57U;
	int32_t t47 = -113514;

    t47 = (x241!=(x242/(x243%x244)));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x249 = -1;
	int16_t x250 = 0;
	int32_t x251 = INT32_MIN;
	int32_t x252 = INT32_MAX;
	volatile int32_t t48 = -407302;

    t48 = (x249!=(x250/(x251%x252)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x253 = INT16_MIN;
	int64_t x254 = -68541599984LL;
	volatile uint64_t x255 = 3171891LLU;
	uint64_t x256 = UINT64_MAX;
	int32_t t49 = -18;

    t49 = (x253!=(x254/(x255%x256)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x257 = INT8_MIN;
	int32_t x258 = -11794360;
	uint8_t x260 = 62U;
	int32_t t50 = 68138895;

    t50 = (x257!=(x258/(x259%x260)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x261 = 2767019482LLU;
	int8_t x262 = INT8_MAX;
	volatile int32_t t51 = 198696;

    t51 = (x261!=(x262/(x263%x264)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x265 = UINT64_MAX;
	volatile int64_t x266 = -1LL;
	int64_t x267 = INT64_MIN;

    t52 = (x265!=(x266/(x267%x268)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x269 = UINT64_MAX;
	uint32_t x270 = 423830733U;
	int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MAX;
	volatile int32_t t53 = 0;

    t53 = (x269!=(x270/(x271%x272)));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x278 = INT16_MIN;
	static volatile int32_t x280 = INT32_MIN;
	int32_t t54 = 0;

    t54 = (x277!=(x278/(x279%x280)));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x281 = -758;
	static int64_t x282 = INT64_MAX;
	int64_t x284 = INT64_MAX;

    t55 = (x281!=(x282/(x283%x284)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x289 = -4150734116272691LL;
	int16_t x290 = INT16_MIN;
	static volatile uint64_t x291 = UINT64_MAX;
	static int16_t x292 = -15416;

    t56 = (x289!=(x290/(x291%x292)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint8_t x297 = 1U;
	int64_t x299 = -1LL;
	static int32_t t57 = -285;

    t57 = (x297!=(x298/(x299%x300)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x301 = -233625376235623654LL;
	int32_t x303 = -1;
	uint64_t x304 = 565153661507LLU;
	static volatile int32_t t58 = 37;

    t58 = (x301!=(x302/(x303%x304)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x307 = 2687U;
	uint8_t x308 = UINT8_MAX;
	volatile int32_t t59 = 4947508;

    t59 = (x305!=(x306/(x307%x308)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	uint64_t x309 = UINT64_MAX;
	int8_t x310 = INT8_MIN;
	uint64_t x311 = 416928901249610623LLU;
	int8_t x312 = -5;
	volatile int32_t t60 = -676189;

    t60 = (x309!=(x310/(x311%x312)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x317 = INT8_MAX;
	static int16_t x318 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	int32_t t61 = -632776;

    t61 = (x317!=(x318/(x319%x320)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x321 = INT16_MAX;
	uint16_t x323 = 7U;
	static int16_t x324 = INT16_MIN;

    t62 = (x321!=(x322/(x323%x324)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x325 = INT16_MAX;
	volatile int16_t x327 = INT16_MAX;
	static volatile uint8_t x328 = 2U;
	volatile int32_t t63 = 4035062;

    t63 = (x325!=(x326/(x327%x328)));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x330 = 2071557U;
	int8_t x331 = -1;
	static volatile int32_t t64 = -4;

    t64 = (x329!=(x330/(x331%x332)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x333 = 1090;
	int16_t x334 = INT16_MAX;
	uint16_t x335 = UINT16_MAX;
	int16_t x336 = -19;
	int32_t t65 = -6903671;

    t65 = (x333!=(x334/(x335%x336)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x337 = 126U;
	int32_t x340 = 311;

    t66 = (x337!=(x338/(x339%x340)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x353 = INT8_MIN;
	uint64_t x354 = 2689857LLU;
	volatile int64_t x356 = INT64_MIN;
	volatile int32_t t67 = 1803206;

    t67 = (x353!=(x354/(x355%x356)));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x361 = INT64_MIN;
	int32_t t68 = 89172;

    t68 = (x361!=(x362/(x363%x364)));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x365 = INT8_MAX;
	static volatile int8_t x366 = 3;
	volatile int8_t x367 = INT8_MAX;
	static uint8_t x368 = 50U;
	int32_t t69 = 208915;

    t69 = (x365!=(x366/(x367%x368)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x369 = 328401U;
	int32_t x370 = INT32_MAX;
	int32_t x372 = INT32_MAX;
	static volatile int32_t t70 = -1;

    t70 = (x369!=(x370/(x371%x372)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x373 = 0;
	int32_t x374 = 298935319;
	int8_t x375 = INT8_MIN;
	uint32_t x376 = 498961716U;
	int32_t t71 = -117;

    t71 = (x373!=(x374/(x375%x376)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x381 = -149243155656893LL;
	uint32_t x382 = 25173880U;
	int32_t x383 = -1;
	volatile int16_t x384 = INT16_MIN;

    t72 = (x381!=(x382/(x383%x384)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x385 = INT64_MIN;
	int64_t x386 = 9338177287LL;
	int32_t x387 = -1;
	volatile int32_t t73 = -163583;

    t73 = (x385!=(x386/(x387%x388)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x389 = UINT16_MAX;
	int64_t x390 = 365193370352LL;
	volatile uint16_t x391 = UINT16_MAX;
	int8_t x392 = INT8_MIN;
	volatile int32_t t74 = -18459;

    t74 = (x389!=(x390/(x391%x392)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x394 = UINT64_MAX;
	static int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;

    t75 = (x393!=(x394/(x395%x396)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x398 = 95;
	static uint16_t x399 = 7225U;
	volatile int32_t t76 = -705;

    t76 = (x397!=(x398/(x399%x400)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x401 = INT16_MAX;
	static uint32_t x402 = 239885U;
	uint8_t x403 = 2U;
	uint8_t x404 = 28U;
	volatile int32_t t77 = -925;

    t77 = (x401!=(x402/(x403%x404)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x405 = UINT64_MAX;
	int64_t x406 = INT64_MIN;
	static int32_t x407 = INT32_MIN;
	int32_t t78 = 1;

    t78 = (x405!=(x406/(x407%x408)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int32_t x410 = INT32_MIN;
	uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MIN;

    t79 = (x409!=(x410/(x411%x412)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x413 = -6471;
	int8_t x415 = -1;
	int32_t x416 = 24;
	int32_t t80 = -960;

    t80 = (x413!=(x414/(x415%x416)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x430 = INT8_MAX;
	uint16_t x432 = UINT16_MAX;
	volatile int32_t t81 = -1;

    t81 = (x429!=(x430/(x431%x432)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x433 = INT8_MIN;
	uint8_t x434 = 27U;
	uint64_t x435 = 207417646201631LLU;
	int16_t x436 = INT16_MIN;

    t82 = (x433!=(x434/(x435%x436)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x437 = INT8_MAX;
	volatile int64_t x438 = INT64_MIN;
	uint32_t x439 = UINT32_MAX;

    t83 = (x437!=(x438/(x439%x440)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x449 = 101451755U;
	static uint32_t x450 = 16201520U;
	uint32_t x451 = 1102U;
	static int32_t x452 = -1159;

    t84 = (x449!=(x450/(x451%x452)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x455 = 1646U;
	uint64_t x456 = 3625986LLU;
	static int32_t t85 = 1;

    t85 = (x453!=(x454/(x455%x456)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x465 = INT16_MAX;
	int32_t x466 = INT32_MAX;
	uint32_t x467 = UINT32_MAX;
	uint64_t x468 = UINT64_MAX;
	int32_t t86 = 17469439;

    t86 = (x465!=(x466/(x467%x468)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x470 = INT64_MIN;
	volatile int8_t x471 = INT8_MIN;
	volatile int32_t t87 = 1361781;

    t87 = (x469!=(x470/(x471%x472)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x473 = 49;
	static int32_t x474 = -1;
	volatile int32_t x475 = INT32_MAX;
	uint16_t x476 = 442U;
	static volatile int32_t t88 = -3108;

    t88 = (x473!=(x474/(x475%x476)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x477 = INT64_MAX;
	uint64_t x478 = 29464LLU;
	uint64_t x479 = 5731797647LLU;
	uint16_t x480 = 236U;
	volatile int32_t t89 = 13;

    t89 = (x477!=(x478/(x479%x480)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x481 = 0;
	static int16_t x483 = INT16_MAX;
	static uint16_t x484 = 19U;
	static volatile int32_t t90 = 107815;

    t90 = (x481!=(x482/(x483%x484)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x485 = INT32_MAX;
	int32_t x486 = INT32_MIN;
	int16_t x487 = INT16_MIN;
	uint32_t x488 = 2085193126U;
	static int32_t t91 = 589522;

    t91 = (x485!=(x486/(x487%x488)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x489 = 12620U;
	uint32_t x490 = UINT32_MAX;
	uint32_t x491 = 44U;
	static int32_t x492 = INT32_MIN;
	volatile int32_t t92 = -64051219;

    t92 = (x489!=(x490/(x491%x492)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x496 = 59351;

    t93 = (x493!=(x494/(x495%x496)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x497 = 4U;
	volatile uint8_t x498 = UINT8_MAX;
	static uint64_t x500 = 426156260870587LLU;

    t94 = (x497!=(x498/(x499%x500)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x505 = INT8_MIN;
	int64_t x506 = INT64_MIN;
	int64_t x508 = INT64_MIN;
	volatile int32_t t95 = -1;

    t95 = (x505!=(x506/(x507%x508)));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x509 = UINT16_MAX;
	int64_t x510 = -1LL;
	static int16_t x511 = INT16_MIN;
	int32_t t96 = 290;

    t96 = (x509!=(x510/(x511%x512)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile int64_t x517 = -1LL;
	static uint8_t x518 = 6U;
	volatile int8_t x519 = 4;
	int32_t x520 = INT32_MIN;
	int32_t t97 = 922;

    t97 = (x517!=(x518/(x519%x520)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x521 = INT64_MIN;
	static int16_t x522 = 96;
	int64_t x523 = INT64_MIN;
	volatile int8_t x524 = INT8_MAX;
	volatile int32_t t98 = 439937;

    t98 = (x521!=(x522/(x523%x524)));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x525 = INT16_MIN;
	int8_t x526 = INT8_MIN;
	int32_t x527 = INT32_MAX;
	volatile uint32_t x528 = UINT32_MAX;
	volatile int32_t t99 = 1;

    t99 = (x525!=(x526/(x527%x528)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x529 = UINT32_MAX;
	int8_t x530 = INT8_MIN;
	volatile int16_t x531 = INT16_MIN;
	volatile int32_t t100 = -62986;

    t100 = (x529!=(x530/(x531%x532)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x533 = 3024U;
	int16_t x534 = -2;
	int32_t x536 = 49;

    t101 = (x533!=(x534/(x535%x536)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint16_t x537 = 514U;
	uint8_t x539 = UINT8_MAX;
	int16_t x540 = 136;
	volatile int32_t t102 = 40;

    t102 = (x537!=(x538/(x539%x540)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int64_t x545 = INT64_MIN;
	uint8_t x548 = 6U;
	int32_t t103 = -6;

    t103 = (x545!=(x546/(x547%x548)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x553 = INT64_MAX;
	volatile int16_t x554 = -6762;
	int8_t x555 = INT8_MIN;
	int64_t x556 = INT64_MIN;
	int32_t t104 = 17;

    t104 = (x553!=(x554/(x555%x556)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile uint32_t x557 = UINT32_MAX;
	uint16_t x558 = 8780U;
	uint8_t x559 = 1U;
	uint16_t x560 = 2U;
	volatile int32_t t105 = 8870667;

    t105 = (x557!=(x558/(x559%x560)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x569 = UINT16_MAX;
	volatile int32_t t106 = 142872;

    t106 = (x569!=(x570/(x571%x572)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x578 = UINT64_MAX;
	volatile int32_t t107 = -8;

    t107 = (x577!=(x578/(x579%x580)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x589 = 1;
	uint32_t x590 = 0U;
	int32_t x591 = 1;
	int32_t x592 = INT32_MAX;

    t108 = (x589!=(x590/(x591%x592)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x597 = 2043038U;
	uint32_t x598 = 53311U;
	volatile int64_t x600 = INT64_MAX;
	volatile int32_t t109 = 156;

    t109 = (x597!=(x598/(x599%x600)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x605 = 0LLU;
	int32_t x606 = 16393416;
	volatile int64_t x607 = INT64_MAX;
	int32_t t110 = -7748;

    t110 = (x605!=(x606/(x607%x608)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x609 = INT32_MAX;
	volatile int16_t x610 = INT16_MIN;
	int64_t x611 = -1LL;

    t111 = (x609!=(x610/(x611%x612)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x617 = INT16_MIN;
	int64_t x618 = INT64_MIN;
	uint32_t x619 = 8596105U;
	volatile int16_t x620 = 3557;
	volatile int32_t t112 = 6720;

    t112 = (x617!=(x618/(x619%x620)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x625 = -7;
	volatile int32_t x628 = INT32_MAX;
	int32_t t113 = 64609;

    t113 = (x625!=(x626/(x627%x628)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x633 = UINT64_MAX;
	static uint32_t x634 = 23362U;
	int8_t x635 = -1;
	int16_t x636 = INT16_MIN;

    t114 = (x633!=(x634/(x635%x636)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x637 = INT16_MIN;
	int8_t x638 = 1;
	int64_t x639 = -9167LL;
	int8_t x640 = -11;
	int32_t t115 = 16171;

    t115 = (x637!=(x638/(x639%x640)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint8_t x642 = 2U;
	uint8_t x643 = UINT8_MAX;

    t116 = (x641!=(x642/(x643%x644)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x645 = -1;
	volatile int64_t x646 = -1LL;
	uint64_t x647 = 169288729234440LLU;
	volatile int32_t t117 = 1983058;

    t117 = (x645!=(x646/(x647%x648)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x653 = INT64_MIN;
	int64_t x654 = -9901607789915LL;
	uint32_t x655 = 594999306U;
	int8_t x656 = INT8_MIN;
	int32_t t118 = -1619822;

    t118 = (x653!=(x654/(x655%x656)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x661 = 272U;
	int32_t x662 = 351725;
	uint8_t x664 = 43U;

    t119 = (x661!=(x662/(x663%x664)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x669 = -191LL;
	int32_t x670 = INT32_MAX;
	int16_t x671 = -1;

    t120 = (x669!=(x670/(x671%x672)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x674 = -1;
	uint32_t x675 = 9U;
	uint32_t x676 = UINT32_MAX;
	volatile int32_t t121 = 114468181;

    t121 = (x673!=(x674/(x675%x676)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x685 = INT32_MIN;
	uint16_t x686 = 477U;
	volatile int32_t t122 = 463;

    t122 = (x685!=(x686/(x687%x688)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x689 = INT64_MIN;
	int32_t x691 = 5;
	static volatile uint8_t x692 = 111U;
	int32_t t123 = 61144;

    t123 = (x689!=(x690/(x691%x692)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x701 = -1;
	uint8_t x703 = UINT8_MAX;
	int32_t t124 = -10830;

    t124 = (x701!=(x702/(x703%x704)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int8_t x705 = 12;
	static volatile int8_t x706 = INT8_MIN;
	int32_t x707 = 12417;
	int32_t t125 = 532343298;

    t125 = (x705!=(x706/(x707%x708)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x709 = 28;
	static uint64_t x710 = 50076LLU;
	static int16_t x711 = INT16_MAX;
	static volatile int16_t x712 = -3;
	int32_t t126 = -2986578;

    t126 = (x709!=(x710/(x711%x712)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x717 = 283091196555LLU;
	int64_t x718 = -1LL;
	static uint8_t x719 = UINT8_MAX;
	volatile int32_t t127 = 5;

    t127 = (x717!=(x718/(x719%x720)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x721 = 36U;
	volatile int16_t x722 = INT16_MIN;
	int64_t x723 = INT64_MAX;
	static uint8_t x724 = UINT8_MAX;

    t128 = (x721!=(x722/(x723%x724)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x725 = 0;
	int8_t x726 = INT8_MIN;
	int8_t x727 = 12;
	int8_t x728 = INT8_MAX;
	int32_t t129 = -6273462;

    t129 = (x725!=(x726/(x727%x728)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x729 = 17;
	int64_t x730 = INT64_MAX;
	int16_t x732 = -3257;

    t130 = (x729!=(x730/(x731%x732)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint32_t x733 = 264632U;
	uint8_t x734 = 31U;
	int8_t x735 = INT8_MIN;
	int32_t t131 = 93904269;

    t131 = (x733!=(x734/(x735%x736)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x749 = -1;
	int64_t x750 = -1LL;
	int8_t x751 = 1;
	volatile int16_t x752 = INT16_MAX;

    t132 = (x749!=(x750/(x751%x752)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x754 = INT64_MAX;
	int8_t x755 = 2;
	int32_t t133 = 4167333;

    t133 = (x753!=(x754/(x755%x756)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x757 = UINT8_MAX;
	int64_t x758 = -1LL;
	volatile int8_t x759 = INT8_MIN;
	uint32_t x760 = 19436U;
	volatile int32_t t134 = 188633665;

    t134 = (x757!=(x758/(x759%x760)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile int32_t x769 = -1;
	static int32_t x771 = INT32_MIN;
	uint32_t x772 = UINT32_MAX;
	static volatile int32_t t135 = -36386114;

    t135 = (x769!=(x770/(x771%x772)));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x777 = INT8_MIN;
	uint16_t x778 = 1369U;
	uint16_t x779 = 64U;
	int64_t x780 = INT64_MIN;
	static volatile int32_t t136 = -350;

    t136 = (x777!=(x778/(x779%x780)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x781 = INT8_MAX;
	int32_t x782 = -288774;
	volatile uint16_t x784 = 1865U;
	int32_t t137 = 1959;

    t137 = (x781!=(x782/(x783%x784)));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x789 = UINT64_MAX;
	int8_t x791 = INT8_MIN;
	volatile int32_t x792 = -467110052;
	int32_t t138 = 1;

    t138 = (x789!=(x790/(x791%x792)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x793 = INT32_MAX;
	int64_t x794 = INT64_MIN;
	uint64_t x796 = UINT64_MAX;
	int32_t t139 = 2;

    t139 = (x793!=(x794/(x795%x796)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x801 = INT8_MIN;
	int16_t x802 = -1;
	int64_t x803 = -163231729LL;
	uint16_t x804 = UINT16_MAX;
	int32_t t140 = -20826664;

    t140 = (x801!=(x802/(x803%x804)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x809 = 26721U;
	int16_t x810 = INT16_MIN;
	int16_t x811 = 3271;
	int64_t x812 = INT64_MIN;
	static volatile int32_t t141 = 3836804;

    t141 = (x809!=(x810/(x811%x812)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile uint16_t x813 = UINT16_MAX;
	static int16_t x815 = INT16_MIN;
	uint8_t x816 = 47U;

    t142 = (x813!=(x814/(x815%x816)));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x818 = 27;
	uint16_t x819 = 202U;
	uint32_t x820 = UINT32_MAX;
	static volatile int32_t t143 = -337997;

    t143 = (x817!=(x818/(x819%x820)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x821 = INT32_MIN;
	uint64_t x822 = 38451094140746936LLU;
	int8_t x823 = -1;
	volatile uint8_t x824 = 3U;
	volatile int32_t t144 = -31;

    t144 = (x821!=(x822/(x823%x824)));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x825 = -1;
	uint32_t x827 = 63779U;
	volatile int8_t x828 = -2;
	int32_t t145 = 309402;

    t145 = (x825!=(x826/(x827%x828)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x829 = 586870495LLU;
	int32_t x830 = -1;
	static uint8_t x831 = 12U;
	volatile int8_t x832 = 8;
	int32_t t146 = -14139947;

    t146 = (x829!=(x830/(x831%x832)));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x835 = 455798407469553103LL;
	static int64_t x836 = INT64_MAX;
	volatile int32_t t147 = -724;

    t147 = (x833!=(x834/(x835%x836)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x838 = INT64_MIN;
	int64_t x839 = INT64_MAX;
	int32_t x840 = 1761815;

    t148 = (x837!=(x838/(x839%x840)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x842 = INT16_MIN;
	uint64_t x843 = UINT64_MAX;
	int64_t x844 = INT64_MAX;
	static int32_t t149 = -7813;

    t149 = (x841!=(x842/(x843%x844)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x849 = INT8_MIN;
	static int16_t x850 = INT16_MIN;
	int16_t x851 = INT16_MAX;
	uint32_t x852 = 392U;

    t150 = (x849!=(x850/(x851%x852)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x853 = INT8_MIN;
	int64_t x854 = 5399LL;
	int8_t x855 = -1;
	int64_t x856 = INT64_MIN;
	static volatile int32_t t151 = 8102;

    t151 = (x853!=(x854/(x855%x856)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x861 = UINT64_MAX;
	volatile uint64_t x862 = 22897653990LLU;
	uint16_t x863 = 1U;
	volatile int32_t x864 = 1814045;
	volatile int32_t t152 = -37477;

    t152 = (x861!=(x862/(x863%x864)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x865 = 6378U;
	int8_t x866 = INT8_MIN;
	volatile int64_t x867 = INT64_MAX;
	volatile int32_t x868 = INT32_MIN;
	int32_t t153 = -50888228;

    t153 = (x865!=(x866/(x867%x868)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x869 = 67U;
	volatile uint8_t x870 = 30U;

    t154 = (x869!=(x870/(x871%x872)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x873 = -1;
	int32_t x874 = -30302;
	static uint32_t x875 = 4692U;
	static int32_t x876 = INT32_MIN;
	int32_t t155 = 55793;

    t155 = (x873!=(x874/(x875%x876)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x881 = INT64_MAX;
	volatile int32_t x882 = -1;
	uint64_t x883 = UINT64_MAX;
	static int64_t x884 = INT64_MAX;

    t156 = (x881!=(x882/(x883%x884)));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x885 = INT8_MIN;
	static int32_t x886 = INT32_MIN;
	int8_t x888 = INT8_MIN;
	static int32_t t157 = 5897196;

    t157 = (x885!=(x886/(x887%x888)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int16_t x889 = 3646;
	int32_t x892 = INT32_MIN;
	int32_t t158 = 0;

    t158 = (x889!=(x890/(x891%x892)));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x893 = INT8_MAX;
	volatile int8_t x894 = -5;
	int8_t x895 = -33;

    t159 = (x893!=(x894/(x895%x896)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x898 = 17190U;
	static volatile int16_t x900 = INT16_MIN;
	int32_t t160 = -362;

    t160 = (x897!=(x898/(x899%x900)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x901 = UINT32_MAX;
	int64_t x902 = -1LL;
	static int32_t x903 = INT32_MIN;
	volatile int32_t t161 = -201;

    t161 = (x901!=(x902/(x903%x904)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x905 = 2112149907654472LLU;
	int64_t x908 = INT64_MAX;
	volatile int32_t t162 = -273;

    t162 = (x905!=(x906/(x907%x908)));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x910 = INT32_MIN;
	volatile uint64_t x911 = 3221LLU;
	static uint64_t x912 = 7272996707533LLU;
	int32_t t163 = 5;

    t163 = (x909!=(x910/(x911%x912)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x917 = UINT16_MAX;
	volatile uint64_t x918 = 6793LLU;
	static int8_t x920 = 2;

    t164 = (x917!=(x918/(x919%x920)));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x921 = 0;
	int8_t x922 = INT8_MIN;
	static uint32_t x923 = UINT32_MAX;
	static int16_t x924 = INT16_MIN;
	volatile int32_t t165 = 9843652;

    t165 = (x921!=(x922/(x923%x924)));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x925 = 17544U;
	uint8_t x927 = 2U;
	int16_t x928 = INT16_MAX;
	static int32_t t166 = 1985108;

    t166 = (x925!=(x926/(x927%x928)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x929 = INT32_MAX;
	volatile uint16_t x930 = 751U;
	static volatile int64_t x931 = 94678005184198LL;
	int16_t x932 = INT16_MIN;
	volatile int32_t t167 = 5414138;

    t167 = (x929!=(x930/(x931%x932)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x934 = INT8_MAX;
	static uint16_t x935 = 137U;
	volatile int32_t t168 = 60;

    t168 = (x933!=(x934/(x935%x936)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x937 = INT16_MIN;
	uint32_t x938 = 213069U;
	static int8_t x940 = INT8_MIN;

    t169 = (x937!=(x938/(x939%x940)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x941 = 888U;
	int64_t x942 = INT64_MAX;
	uint32_t x943 = UINT32_MAX;
	int16_t x944 = INT16_MIN;
	int32_t t170 = -1;

    t170 = (x941!=(x942/(x943%x944)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x945 = 0;
	int16_t x946 = 12;
	int16_t x947 = -1;
	int64_t x948 = INT64_MAX;
	int32_t t171 = 147485210;

    t171 = (x945!=(x946/(x947%x948)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x953 = 591974445403925LLU;
	int64_t x954 = 111LL;
	int64_t x955 = 183305419143091LL;
	int16_t x956 = INT16_MIN;
	static int32_t t172 = 49880338;

    t172 = (x953!=(x954/(x955%x956)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x957 = INT32_MIN;
	volatile int16_t x958 = -1419;
	uint32_t x960 = 839U;
	int32_t t173 = -3;

    t173 = (x957!=(x958/(x959%x960)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x973 = 0;
	uint32_t x974 = UINT32_MAX;
	volatile int64_t x975 = 5343728962278560LL;
	int32_t t174 = 275077499;

    t174 = (x973!=(x974/(x975%x976)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	static int32_t x977 = INT32_MAX;
	int16_t x978 = -1;
	int8_t x980 = INT8_MIN;
	int32_t t175 = 1184;

    t175 = (x977!=(x978/(x979%x980)));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x981 = INT8_MIN;
	int8_t x982 = INT8_MIN;
	int8_t x983 = -1;
	uint64_t x984 = 1946788259213267415LLU;
	volatile int32_t t176 = -145675;

    t176 = (x981!=(x982/(x983%x984)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint64_t x985 = 232988776618282552LLU;
	uint32_t x986 = 298371593U;
	int64_t x987 = -8LL;
	int32_t x988 = 119;
	int32_t t177 = -776309291;

    t177 = (x985!=(x986/(x987%x988)));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x989 = -4;
	int32_t x991 = INT32_MAX;
	int64_t x992 = INT64_MIN;
	int32_t t178 = -277721647;

    t178 = (x989!=(x990/(x991%x992)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x997 = INT32_MIN;
	int16_t x998 = -1;
	int16_t x999 = INT16_MIN;
	uint8_t x1000 = 12U;
	volatile int32_t t179 = -195557;

    t179 = (x997!=(x998/(x999%x1000)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint32_t x1005 = UINT32_MAX;
	uint64_t x1006 = 5438198353685LLU;
	volatile int16_t x1007 = INT16_MAX;
	static volatile int8_t x1008 = -5;
	int32_t t180 = 79009;

    t180 = (x1005!=(x1006/(x1007%x1008)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1009 = -1;
	int16_t x1010 = INT16_MAX;
	int16_t x1011 = INT16_MAX;
	static uint64_t x1012 = UINT64_MAX;

    t181 = (x1009!=(x1010/(x1011%x1012)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x1017 = -771179000479667225LL;
	int32_t x1018 = INT32_MIN;
	volatile int64_t x1019 = INT64_MAX;
	int16_t x1020 = INT16_MAX;
	int32_t t182 = 0;

    t182 = (x1017!=(x1018/(x1019%x1020)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x1025 = 643561097U;
	int8_t x1026 = 1;
	static int8_t x1027 = -1;

    t183 = (x1025!=(x1026/(x1027%x1028)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x1029 = 314;
	uint8_t x1030 = UINT8_MAX;
	static int16_t x1032 = INT16_MAX;
	int32_t t184 = -22229280;

    t184 = (x1029!=(x1030/(x1031%x1032)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x1033 = -1;
	static int16_t x1034 = INT16_MIN;
	int8_t x1035 = 6;
	uint16_t x1036 = 1928U;

    t185 = (x1033!=(x1034/(x1035%x1036)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1041 = INT16_MIN;
	int8_t x1042 = -4;
	static int32_t x1043 = 5;
	volatile int64_t x1044 = 2530LL;

    t186 = (x1041!=(x1042/(x1043%x1044)));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x1048 = 8018U;

    t187 = (x1045!=(x1046/(x1047%x1048)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1049 = 98U;
	static int16_t x1051 = 917;
	volatile int32_t t188 = -38;

    t188 = (x1049!=(x1050/(x1051%x1052)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1057 = 1;
	uint8_t x1058 = 1U;
	int8_t x1059 = INT8_MAX;
	uint8_t x1060 = 2U;
	volatile int32_t t189 = 496472;

    t189 = (x1057!=(x1058/(x1059%x1060)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1061 = INT8_MIN;
	static volatile uint16_t x1062 = 11116U;
	volatile uint16_t x1063 = UINT16_MAX;
	volatile uint32_t x1064 = UINT32_MAX;
	int32_t t190 = -473535109;

    t190 = (x1061!=(x1062/(x1063%x1064)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1066 = INT16_MIN;
	uint16_t x1067 = UINT16_MAX;
	int32_t x1068 = INT32_MAX;
	int32_t t191 = -9;

    t191 = (x1065!=(x1066/(x1067%x1068)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1073 = UINT16_MAX;
	static volatile int16_t x1074 = INT16_MAX;
	int8_t x1075 = -23;
	uint8_t x1076 = 110U;
	volatile int32_t t192 = 0;

    t192 = (x1073!=(x1074/(x1075%x1076)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint64_t x1077 = 10097672962903125LLU;
	uint64_t x1078 = 957946LLU;
	int8_t x1079 = -1;
	volatile uint8_t x1080 = UINT8_MAX;
	volatile int32_t t193 = 9892382;

    t193 = (x1077!=(x1078/(x1079%x1080)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1085 = 1;
	uint32_t x1087 = UINT32_MAX;
	uint8_t x1088 = 57U;

    t194 = (x1085!=(x1086/(x1087%x1088)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x1089 = INT64_MIN;
	static uint32_t x1091 = 2724028U;
	static int64_t x1092 = INT64_MIN;
	int32_t t195 = -4498805;

    t195 = (x1089!=(x1090/(x1091%x1092)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1093 = INT64_MIN;
	int32_t x1094 = -44;
	int8_t x1095 = 9;
	volatile int32_t x1096 = INT32_MIN;
	static int32_t t196 = 215180;

    t196 = (x1093!=(x1094/(x1095%x1096)));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1097 = INT8_MIN;
	volatile uint64_t x1098 = 2LLU;
	int8_t x1099 = INT8_MIN;
	static uint64_t x1100 = UINT64_MAX;
	int32_t t197 = 59;

    t197 = (x1097!=(x1098/(x1099%x1100)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1101 = -1;
	int16_t x1102 = INT16_MIN;
	uint16_t x1103 = 288U;
	int64_t x1104 = INT64_MAX;
	int32_t t198 = -14702217;

    t198 = (x1101!=(x1102/(x1103%x1104)));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x1106 = INT32_MAX;
	volatile int64_t x1107 = -3308050329312828726LL;
	int16_t x1108 = INT16_MAX;
	volatile int32_t t199 = -54;

    t199 = (x1105!=(x1106/(x1107%x1108)));

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

