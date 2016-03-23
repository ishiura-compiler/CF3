
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

static int32_t x1 = -1;
uint32_t x2 = 16328U;
static int64_t x6 = INT64_MAX;
volatile uint64_t x7 = 4448931016518LLU;
uint8_t x13 = 45U;
uint64_t x19 = 101886743799371805LLU;
int32_t x32 = INT32_MAX;
uint32_t x42 = 41U;
int64_t x47 = -1804803356LL;
uint16_t x49 = UINT16_MAX;
uint8_t x61 = 2U;
int64_t t10 = 1LL;
int32_t x67 = -1;
uint64_t t12 = 40941790519692130LLU;
int8_t x74 = INT8_MIN;
volatile int32_t t15 = -332933;
static int8_t x88 = -1;
volatile int32_t x91 = INT32_MAX;
int16_t x93 = -1;
volatile int8_t x95 = -1;
static int32_t x104 = INT32_MAX;
static volatile int64_t x110 = -1LL;
int64_t x111 = INT64_MIN;
static uint64_t t21 = 16LLU;
static uint64_t x125 = 725151LLU;
static uint16_t x136 = 16381U;
static int16_t x140 = INT16_MIN;
uint64_t x141 = 354LLU;
static int64_t x144 = INT64_MIN;
volatile int8_t x146 = -1;
uint16_t x149 = 1U;
int32_t x152 = INT32_MAX;
uint64_t x171 = UINT64_MAX;
static int64_t t33 = 6LL;
uint32_t t34 = 6323U;
int8_t x181 = INT8_MAX;
volatile uint64_t x182 = 275165LLU;
int64_t x183 = 252933402656LL;
volatile uint16_t x187 = 6U;
static uint8_t x199 = 42U;
static int32_t x201 = -180894;
volatile uint64_t t39 = 6855262889506812542LLU;
int64_t t41 = -15132307140LL;
uint64_t x235 = 330689323697LLU;
int8_t x236 = 4;
uint64_t t42 = 324LLU;
volatile uint64_t x238 = 9LLU;
volatile int32_t x240 = INT32_MAX;
static volatile uint64_t t43 = 1351618533250LLU;
int64_t t45 = -5266627273LL;
int64_t t47 = -81281775194LL;
int64_t x260 = INT64_MIN;
static uint64_t x274 = 46428906166LLU;
static int16_t x275 = 12198;
int32_t x286 = -1;
volatile int16_t x287 = 3;
uint8_t x288 = 9U;
int64_t x289 = INT64_MIN;
static int16_t x292 = INT16_MIN;
volatile int64_t x296 = 3576LL;
static uint64_t t55 = 3762370LLU;
uint64_t x301 = 82393044190746LLU;
int32_t x311 = INT32_MAX;
int64_t x326 = INT64_MAX;
volatile int32_t x329 = 11058;
int64_t x337 = 1083791LL;
uint32_t x356 = 40U;
static uint8_t x361 = UINT8_MAX;
uint8_t x362 = 6U;
static volatile int32_t t66 = 822;
volatile int64_t x368 = INT64_MIN;
volatile uint8_t x369 = 2U;
int16_t x371 = 2081;
static int8_t x373 = -1;
int32_t x379 = INT32_MAX;
uint64_t x397 = 211532LLU;
uint32_t x398 = UINT32_MAX;
static int8_t x405 = -1;
uint32_t t73 = 46U;
static uint64_t t75 = 253777674332LLU;
uint64_t x434 = 30LLU;
int8_t x437 = 4;
uint64_t x438 = 250LLU;
int16_t x439 = INT16_MIN;
uint64_t t78 = 128859018617252980LLU;
static int16_t x441 = -1;
int32_t x449 = INT32_MIN;
int32_t x451 = -1;
int32_t x456 = INT32_MIN;
static int16_t x478 = INT16_MIN;
static int8_t x479 = -1;
static uint64_t t87 = 602304LLU;
int64_t x500 = INT64_MAX;
static int64_t x518 = -5175315973591080LL;
int16_t x522 = -1;
static uint8_t x523 = 1U;
volatile int64_t x524 = 433773960242873934LL;
static int32_t x525 = INT32_MAX;
static int32_t x527 = INT32_MIN;
uint64_t t94 = 2604397105595LLU;
static int8_t x529 = INT8_MAX;
uint16_t x532 = 442U;
int8_t x537 = -7;
int8_t x549 = INT8_MAX;
static int32_t x550 = INT32_MIN;
uint64_t x552 = 21731LLU;
uint64_t x556 = UINT64_MAX;
int64_t t100 = -1089932487963825631LL;
int8_t x566 = INT8_MIN;
uint64_t x567 = 137595439890497732LLU;
int16_t x568 = INT16_MAX;
volatile uint64_t t102 = 6LLU;
uint8_t x574 = 83U;
volatile uint64_t t105 = 4158367LLU;
static uint16_t x582 = 9863U;
static volatile int32_t t107 = -1288788;
int64_t x594 = INT64_MIN;
uint64_t t108 = 431001233662935LLU;
int64_t x605 = INT64_MIN;
static int64_t x608 = INT64_MAX;
uint64_t x613 = 67641998960696LLU;
static volatile uint64_t x614 = UINT64_MAX;
static uint64_t t110 = 8LLU;
static int32_t x624 = INT32_MIN;
int64_t t111 = -30641731133997LL;
static int8_t x625 = 48;
volatile int64_t t112 = -7127113360LL;
static uint64_t x630 = 20464293465385LLU;
static uint64_t x631 = 547139483245088LLU;
int64_t x636 = 221878906468656697LL;
int64_t x637 = 73LL;
int16_t x640 = 629;
int32_t x645 = INT32_MAX;
static int32_t x660 = INT32_MAX;
volatile int8_t x666 = -1;
uint16_t x667 = 19U;
volatile int16_t x669 = INT16_MIN;
static volatile int16_t x674 = 267;
volatile int8_t x681 = 0;
int32_t x685 = INT32_MAX;
int32_t x686 = 81363;
int64_t x709 = INT64_MAX;
volatile uint16_t x711 = 889U;
int16_t x716 = -1;
uint8_t x724 = 3U;
static int16_t x728 = -8;
volatile uint32_t t132 = 2U;
uint64_t t133 = 4391791187508979LLU;
volatile int64_t t135 = -1491787LL;
int16_t x752 = INT16_MAX;
int16_t x760 = INT16_MAX;
uint32_t x769 = 241800U;
int8_t x770 = INT8_MIN;
volatile int64_t x772 = -1LL;
uint32_t t140 = 7028U;
static int32_t x784 = -533;
uint64_t x792 = 35594721260LLU;
static int32_t t145 = -1383;
int32_t x799 = -101396557;
uint32_t x800 = 5626701U;
int8_t x804 = INT8_MIN;
static int16_t x805 = INT16_MIN;
int32_t x829 = INT32_MAX;
uint32_t x840 = 333456169U;
int64_t x844 = INT64_MAX;
int32_t x854 = -1;
uint8_t x858 = 108U;
volatile uint64_t t158 = 549205717LLU;
int8_t x863 = -1;
uint64_t t159 = 8121425LLU;
static int64_t t160 = 3306291755LL;
static int8_t x879 = -1;
volatile int64_t x888 = 0LL;
volatile uint64_t t164 = 128412454141LLU;
int8_t x910 = INT8_MAX;
int32_t x913 = INT32_MIN;
int16_t x914 = 46;
static volatile int32_t t169 = 10204;
int32_t x917 = -110;
volatile int32_t x920 = INT32_MIN;
int16_t x921 = -1;
volatile int8_t x923 = 2;
volatile uint64_t t171 = 13201425178LLU;
int32_t x938 = -1;
int32_t x940 = INT32_MIN;
volatile uint64_t t174 = 34095771517LLU;
int64_t x948 = INT64_MIN;
static int32_t x949 = INT32_MAX;
int8_t x950 = INT8_MAX;
int8_t x970 = -1;
uint16_t x983 = UINT16_MAX;
uint32_t t183 = 888099274U;
static volatile int8_t x990 = -1;
volatile uint32_t x992 = 35023U;
volatile int64_t t186 = -975973233LL;
uint64_t t187 = 22349776LLU;
volatile uint64_t t188 = 100115356960LLU;
volatile int8_t x1015 = INT8_MIN;
int16_t x1016 = -1;
int64_t x1018 = -84005174561LL;
volatile uint64_t t193 = UINT64_MAX;
uint16_t x1036 = 25816U;
int8_t x1038 = -45;
int8_t x1039 = INT8_MAX;
uint64_t x1040 = 15235743LLU;
uint8_t x1044 = 14U;


void f0(void) {
    	int8_t x3 = 3;
	int32_t x4 = INT32_MAX;
	static uint32_t t0 = 152858842U;

    t0 = (x1-(x2*(x3|x4)));

    if (t0 != 16327U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 3286U;
	int64_t x8 = INT64_MIN;
	uint64_t t1 = 51353417263505795LLU;

    t1 = (x5-(x6*(x7|x8)));

    if (t1 != 9223376485785795612LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x14 = 866;
	uint32_t x15 = 90U;
	static uint16_t x16 = UINT16_MAX;
	volatile uint32_t t2 = 297U;

    t2 = (x13-(x14*(x15|x16)));

    if (t2 != 4238214031U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -13135367908LL;
	static uint64_t x18 = UINT64_MAX;
	uint8_t x20 = UINT8_MAX;
	uint64_t t3 = 374132776298652LLU;

    t3 = (x17-(x18*(x19|x20)));

    if (t3 != 101886730664004123LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x29 = -1;
	uint32_t x30 = 530289066U;
	int8_t x31 = INT8_MAX;
	static volatile uint32_t t4 = 42U;

    t4 = (x29-(x30*(x31|x32)));

    if (t4 != 530289065U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MIN;
	volatile uint16_t x35 = 135U;
	int8_t x36 = -11;
	volatile int32_t t5 = 0;

    t5 = (x33-(x34*(x35|x36)));

    if (t5 != -33920) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint8_t x41 = 32U;
	int8_t x43 = INT8_MAX;
	uint64_t x44 = 13668140546066LLU;
	uint64_t t6 = 47858663354LLU;

    t6 = (x41-(x42*(x43|x44)));

    if (t6 != 18446183679947158473LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x45 = INT32_MIN;
	uint32_t x46 = UINT32_MAX;
	int8_t x48 = INT8_MIN;
	volatile int64_t t7 = -628592151308LL;

    t7 = (x45-(x46*(x47|x48)));

    if (t7 != 118111600612LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x50 = -1;
	int16_t x51 = INT16_MIN;
	volatile int32_t x52 = -67;
	int32_t t8 = 445386463;

    t8 = (x49-(x50*(x51|x52)));

    if (t8 != 65468) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x53 = 26U;
	int32_t x54 = -12;
	volatile int8_t x55 = INT8_MIN;
	volatile int16_t x56 = -1;
	int32_t t9 = 679;

    t9 = (x53-(x54*(x55|x56)));

    if (t9 != 14) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x62 = 1U;
	volatile int64_t x63 = -848150863LL;
	uint16_t x64 = UINT16_MAX;

    t10 = (x61-(x62*(x63|x64)));

    if (t10 != 848101379LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x65 = 1;
	static volatile int16_t x66 = INT16_MIN;
	uint16_t x68 = 376U;
	int32_t t11 = -21;

    t11 = (x65-(x66*(x67|x68)));

    if (t11 != -32767) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint64_t x69 = 21942812743826LLU;
	int8_t x70 = 16;
	int16_t x71 = 14350;
	int16_t x72 = 740;

    t12 = (x69-(x70*(x71|x72)));

    if (t12 != 21942812502450LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x73 = INT16_MAX;
	volatile uint16_t x75 = 23U;
	int64_t x76 = -1LL;
	int64_t t13 = -13857380815621LL;

    t13 = (x73-(x74*(x75|x76)));

    if (t13 != 32639LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x77 = 117848107U;
	int16_t x78 = INT16_MAX;
	static int8_t x79 = 0;
	int16_t x80 = INT16_MAX;
	uint32_t t14 = 216101U;

    t14 = (x77-(x78*(x79|x80)));

    if (t14 != 3339139114U) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	int32_t x83 = 258016876;
	volatile uint16_t x84 = 3U;

    t15 = (x81-(x82*(x83|x84)));

    if (t15 != 258016751) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x85 = UINT64_MAX;
	static int64_t x86 = INT64_MAX;
	int64_t x87 = INT64_MAX;
	volatile uint64_t t16 = 259128943433LLU;

    t16 = (x85-(x86*(x87|x88)));

    if (t16 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x89 = UINT32_MAX;
	int16_t x90 = 231;
	static uint32_t x92 = 108U;
	static volatile uint32_t t17 = 85281631U;

    t17 = (x89-(x90*(x91|x92)));

    if (t17 != 2147483878U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x94 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t18 = 3055464LL;

    t18 = (x93-(x94*(x95|x96)));

    if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int32_t x101 = INT32_MIN;
	int16_t x102 = -1;
	int16_t x103 = 6;
	volatile int32_t t19 = 1013929551;

    t19 = (x101-(x102*(x103|x104)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x105 = INT8_MAX;
	uint64_t x106 = 4189246640428927912LLU;
	uint8_t x107 = UINT8_MAX;
	uint64_t x108 = UINT64_MAX;
	uint64_t t20 = 16876717792794255LLU;

    t20 = (x105-(x106*(x107|x108)));

    if (t20 != 4189246640428928039LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x109 = 7LLU;
	uint64_t x112 = UINT64_MAX;

    t21 = (x109-(x110*(x111|x112)));

    if (t21 != 6LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x117 = INT32_MAX;
	int16_t x118 = -1;
	volatile int8_t x119 = INT8_MAX;
	int64_t x120 = 2036651724LL;
	static volatile int64_t t22 = -623765240985451804LL;

    t22 = (x117-(x118*(x119|x120)));

    if (t22 != 4184135422LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x126 = 33U;
	static int16_t x127 = -1;
	static uint8_t x128 = UINT8_MAX;
	static uint64_t t23 = 33210907324275356LLU;

    t23 = (x125-(x126*(x127|x128)));

    if (t23 != 725184LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x133 = 4765U;
	int8_t x134 = 0;
	uint8_t x135 = 15U;
	volatile uint32_t t24 = 0U;

    t24 = (x133-(x134*(x135|x136)));

    if (t24 != 4765U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x137 = 590566;
	int32_t x138 = -1;
	volatile int32_t x139 = -1;
	int32_t t25 = 3136941;

    t25 = (x137-(x138*(x139|x140)));

    if (t25 != 590565) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x142 = UINT32_MAX;
	static int16_t x143 = -4415;
	uint64_t t26 = 29005580002959LLU;

    t26 = (x141-(x142*(x143|x144)));

    if (t26 != 18962280607779LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x145 = 1;
	uint64_t x147 = 1474104LLU;
	int32_t x148 = INT32_MIN;
	volatile uint64_t t27 = 60LLU;

    t27 = (x145-(x146*(x147|x148)));

    if (t27 != 18446744071563542073LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x150 = 0U;
	int32_t x151 = INT32_MIN;
	int32_t t28 = 4608;

    t28 = (x149-(x150*(x151|x152)));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x153 = 34U;
	static volatile int16_t x154 = 16246;
	uint16_t x155 = 0U;
	static int16_t x156 = INT16_MIN;
	uint32_t t29 = 3268019U;

    t29 = (x153-(x154*(x155|x156)));

    if (t29 != 532348962U) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint32_t x157 = UINT32_MAX;
	int16_t x158 = -8;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = 579957LLU;
	static uint64_t t30 = 3345018LLU;

    t30 = (x157-(x158*(x159|x160)));

    if (t30 != 18446744060829289383LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	int8_t x167 = -1;
	uint32_t x168 = 242248U;
	int64_t t31 = -5232126LL;

    t31 = (x165-(x166*(x167|x168)));

    if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x169 = INT16_MIN;
	uint8_t x170 = 0U;
	int16_t x172 = INT16_MAX;
	static uint64_t t32 = 106319LLU;

    t32 = (x169-(x170*(x171|x172)));

    if (t32 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint16_t x173 = UINT16_MAX;
	static int64_t x174 = 87LL;
	uint32_t x175 = 120935U;
	static uint8_t x176 = UINT8_MAX;

    t33 = (x173-(x174*(x175|x176)));

    if (t33 != -10469034LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint16_t x177 = 65U;
	uint32_t x178 = UINT32_MAX;
	volatile int32_t x179 = 28793;
	int32_t x180 = -1;

    t34 = (x177-(x178*(x179|x180)));

    if (t34 != 64U) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint32_t x184 = UINT32_MAX;
	uint64_t t35 = 3758329062LLU;

    t35 = (x181-(x182*(x183|x184)));

    if (t35 != 18377016417825600348LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x185 = 64485007576LLU;
	static int64_t x186 = INT64_MAX;
	volatile int16_t x188 = -1;
	uint64_t t36 = 3929337LLU;

    t36 = (x185-(x186*(x187|x188)));

    if (t36 != 9223372101339783383LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static volatile int64_t x193 = INT64_MAX;
	static int8_t x194 = -1;
	volatile int32_t x195 = -1;
	uint32_t x196 = 8434741U;
	volatile int64_t t37 = 71244LL;

    t37 = (x193-(x194*(x195|x196)));

    if (t37 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x197 = -1;
	static uint64_t x198 = 310005058667LLU;
	static int8_t x200 = -1;
	uint64_t t38 = 1606763420585687LLU;

    t38 = (x197-(x198*(x199|x200)));

    if (t38 != 310005058666LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint32_t x202 = 7259U;
	uint32_t x203 = UINT32_MAX;
	uint64_t x204 = 450429292641647430LLU;

    t39 = (x201-(x202*(x203|x204)));

    if (t39 != 13854182595463305661LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static int8_t x205 = INT8_MIN;
	uint64_t x206 = 3400372790345LLU;
	uint32_t x207 = UINT32_MAX;
	volatile int8_t x208 = -1;
	static uint64_t t40 = 122LLU;

    t40 = (x205-(x206*(x207|x208)));

    if (t40 != 5331381038298112969LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x225 = INT16_MIN;
	int16_t x226 = 1;
	int64_t x227 = INT64_MIN;
	int32_t x228 = -17419;

    t41 = (x225-(x226*(x227|x228)));

    if (t41 != -15349LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x233 = INT32_MIN;
	int8_t x234 = INT8_MIN;

    t42 = (x233-(x234*(x235|x236)));

    if (t42 != 42326085950080LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int8_t x237 = INT8_MIN;
	uint64_t x239 = 118890LLU;

    t43 = (x237-(x238*(x239|x240)));

    if (t43 != 18446744054382198665LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x241 = -3294850;
	static int16_t x242 = 1;
	volatile uint64_t x243 = 4149LLU;
	uint8_t x244 = 2U;
	static uint64_t t44 = 8395897479178708572LLU;

    t44 = (x241-(x242*(x243|x244)));

    if (t44 != 18446744073706252615LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x245 = 85U;
	static volatile int8_t x246 = INT8_MIN;
	static int16_t x247 = INT16_MAX;
	int64_t x248 = -3275167LL;

    t45 = (x245-(x246*(x247|x248)));

    if (t45 != -415236139LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x249 = INT64_MIN;
	uint8_t x250 = 3U;
	static uint16_t x251 = 2628U;
	static int16_t x252 = INT16_MIN;
	volatile int64_t t46 = 10502LL;

    t46 = (x249-(x250*(x251|x252)));

    if (t46 != -9223372036854685388LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x253 = INT16_MAX;
	static int32_t x254 = -13520;
	uint16_t x255 = 19249U;
	static volatile int64_t x256 = 206214538111LL;

    t47 = (x253-(x254*(x255|x256)));

    if (t47 != 2788020804494127LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x257 = 24987U;
	int16_t x258 = INT16_MIN;
	int32_t x259 = -1;
	volatile int64_t t48 = 16LL;

    t48 = (x257-(x258*(x259|x260)));

    if (t48 != -7781LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x265 = UINT32_MAX;
	int64_t x266 = -1LL;
	int32_t x267 = 43;
	static volatile int32_t x268 = -1;
	volatile int64_t t49 = -17218484836021629LL;

    t49 = (x265-(x266*(x267|x268)));

    if (t49 != 4294967294LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x273 = -1487;
	volatile int64_t x276 = INT64_MAX;
	uint64_t t50 = 68138861739428LLU;

    t50 = (x273-(x274*(x275|x276)));

    if (t50 != 46428904679LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x277 = 1001930965470047884LL;
	uint16_t x278 = 0U;
	int64_t x279 = INT64_MIN;
	volatile int64_t x280 = INT64_MIN;
	static volatile int64_t t51 = 230432LL;

    t51 = (x277-(x278*(x279|x280)));

    if (t51 != 1001930965470047884LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x285 = -4;
	volatile int32_t t52 = 49850;

    t52 = (x285-(x286*(x287|x288)));

    if (t52 != 7) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x290 = UINT64_MAX;
	static int32_t x291 = 15407073;
	volatile uint64_t t53 = 755106012076415237LLU;

    t53 = (x289-(x290*(x291|x292)));

    if (t53 != 9223372036854749153LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x293 = INT64_MIN;
	uint64_t x294 = 57LLU;
	uint16_t x295 = 3U;
	static volatile uint64_t t54 = 433959491484LLU;

    t54 = (x293-(x294*(x295|x296)));

    if (t54 != 9223372036854571805LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int8_t x297 = 58;
	volatile int8_t x298 = INT8_MIN;
	static uint64_t x299 = 1839730LLU;
	volatile int16_t x300 = INT16_MIN;

    t55 = (x297-(x298*(x299|x300)));

    if (t55 != 18446744073705961786LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x302 = -1;
	int32_t x303 = INT32_MAX;
	uint32_t x304 = UINT32_MAX;
	uint64_t t56 = 406507580474816571LLU;

    t56 = (x301-(x302*(x303|x304)));

    if (t56 != 82393044190745LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x305 = INT32_MIN;
	volatile int32_t x306 = 1004823;
	uint32_t x307 = UINT32_MAX;
	uint64_t x308 = 829567165572485802LLU;
	volatile uint64_t t57 = 20477088673LLU;

    t57 = (x305-(x306*(x307|x308)));

    if (t57 != 3299368594463216919LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x309 = 6;
	int32_t x310 = 189459;
	uint64_t x312 = UINT64_MAX;
	uint64_t t58 = 246913492918976632LLU;

    t58 = (x309-(x310*(x311|x312)));

    if (t58 != 189465LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x313 = 15U;
	int32_t x314 = INT32_MIN;
	int32_t x315 = -900064;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t59 = -19113539LL;

    t59 = (x313-(x314*(x315|x316)));

    if (t59 != -1932872722153457LL) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x317 = UINT16_MAX;
	uint16_t x318 = 1261U;
	uint64_t x319 = UINT64_MAX;
	uint64_t x320 = 677226248577LLU;
	volatile uint64_t t60 = 514LLU;

    t60 = (x317-(x318*(x319|x320)));

    if (t60 != 66796LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x325 = INT16_MIN;
	int16_t x327 = 446;
	static volatile int64_t x328 = -1LL;
	volatile int64_t t61 = 133897085773805LL;

    t61 = (x325-(x326*(x327|x328)));

    if (t61 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint32_t x330 = UINT32_MAX;
	int32_t x331 = -151203;
	int8_t x332 = 1;
	uint32_t t62 = 166870U;

    t62 = (x329-(x330*(x331|x332)));

    if (t62 != 4294827151U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x333 = 379438339U;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MIN;
	volatile int64_t x336 = -39237LL;
	volatile int64_t t63 = -64LL;

    t63 = (x333-(x334*(x335|x336)));

    if (t63 != 168522011192254LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x338 = 119U;
	volatile int8_t x339 = INT8_MIN;
	volatile uint32_t x340 = UINT32_MAX;
	volatile int64_t t64 = 437583357LL;

    t64 = (x337-(x338*(x339|x340)));

    if (t64 != -4293883386LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x353 = -1LL;
	volatile int8_t x354 = -1;
	volatile int8_t x355 = INT8_MIN;
	int64_t t65 = -3105LL;

    t65 = (x353-(x354*(x355|x356)));

    if (t65 != -89LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x363 = -1;
	volatile int16_t x364 = INT16_MAX;

    t66 = (x361-(x362*(x363|x364)));

    if (t66 != 261) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x365 = UINT64_MAX;
	static uint64_t x366 = 1LLU;
	int32_t x367 = INT32_MAX;
	volatile uint64_t t67 = 1540699093954LLU;

    t67 = (x365-(x366*(x367|x368)));

    if (t67 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x370 = -1;
	volatile int64_t x372 = -1LL;
	volatile int64_t t68 = 123218LL;

    t68 = (x369-(x370*(x371|x372)));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x374 = INT8_MAX;
	volatile uint8_t x375 = 52U;
	uint32_t x376 = 2U;
	volatile uint32_t t69 = 38938328U;

    t69 = (x373-(x374*(x375|x376)));

    if (t69 != 4294960437U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x377 = 8U;
	uint32_t x378 = UINT32_MAX;
	static uint64_t x380 = 1638510LLU;
	uint64_t t70 = 1032524228980654750LLU;

    t70 = (x377-(x378*(x379|x380)));

    if (t70 != 9223372043297226759LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x393 = UINT16_MAX;
	static volatile int16_t x394 = 0;
	int64_t x395 = -680245938LL;
	uint64_t x396 = 7LLU;
	uint64_t t71 = 15161LLU;

    t71 = (x393-(x394*(x395|x396)));

    if (t71 != 65535LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static int8_t x399 = -1;
	uint64_t x400 = UINT64_MAX;
	uint64_t t72 = 49784139362501864LLU;

    t72 = (x397-(x398*(x399|x400)));

    if (t72 != 4295178827LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x406 = 141U;
	volatile uint16_t x407 = 240U;
	static uint8_t x408 = UINT8_MAX;

    t73 = (x405-(x406*(x407|x408)));

    if (t73 != 4294931340U) { NG(); } else { ; }
	
}

void f74(void) {
    	static int8_t x413 = INT8_MIN;
	static int64_t x414 = -1LL;
	uint8_t x415 = 1U;
	uint32_t x416 = 142U;
	int64_t t74 = -44839472096463LL;

    t74 = (x413-(x414*(x415|x416)));

    if (t74 != 15LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x417 = 1;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = UINT64_MAX;
	static int16_t x420 = INT16_MIN;

    t75 = (x417-(x418*(x419|x420)));

    if (t75 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x421 = -400LL;
	volatile int32_t x422 = 1684691;
	volatile int64_t x423 = INT64_MIN;
	int8_t x424 = INT8_MIN;
	static volatile int64_t t76 = -3LL;

    t76 = (x421-(x422*(x423|x424)));

    if (t76 != 215640048LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x433 = -1LL;
	int16_t x435 = INT16_MIN;
	uint64_t x436 = 1452284575192406198LLU;
	volatile uint64_t t77 = 1LLU;

    t77 = (x433-(x434*(x435|x436)));

    if (t77 != 301739LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x440 = UINT32_MAX;

    t78 = (x437-(x438*(x439|x440)));

    if (t78 != 18446742999967727870LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x442 = 3486LLU;
	int16_t x443 = 2;
	static uint16_t x444 = UINT16_MAX;
	uint64_t t79 = 10784LLU;

    t79 = (x441-(x442*(x443|x444)));

    if (t79 != 18446744073481096605LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x450 = INT32_MAX;
	volatile int16_t x452 = INT16_MIN;
	static int32_t t80 = -11;

    t80 = (x449-(x450*(x451|x452)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x453 = 7U;
	int16_t x454 = INT16_MAX;
	int32_t x455 = INT32_MAX;
	static volatile int32_t t81 = 58759;

    t81 = (x453-(x454*(x455|x456)));

    if (t81 != 32774) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x457 = 12119LL;
	static uint8_t x458 = UINT8_MAX;
	int8_t x459 = INT8_MIN;
	volatile int32_t x460 = INT32_MIN;
	static volatile int64_t t82 = -62597675LL;

    t82 = (x457-(x458*(x459|x460)));

    if (t82 != 44759LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x461 = -1LL;
	volatile uint64_t x462 = 164LLU;
	uint16_t x463 = 2U;
	int8_t x464 = INT8_MAX;
	static uint64_t t83 = 79LLU;

    t83 = (x461-(x462*(x463|x464)));

    if (t83 != 18446744073709530787LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x473 = -1;
	int8_t x474 = -1;
	int16_t x475 = -3;
	static int8_t x476 = INT8_MAX;
	int32_t t84 = -1;

    t84 = (x473-(x474*(x475|x476)));

    if (t84 != -2) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x477 = UINT32_MAX;
	volatile int64_t x480 = INT64_MIN;
	volatile int64_t t85 = -9494281844LL;

    t85 = (x477-(x478*(x479|x480)));

    if (t85 != 4294934527LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x481 = 9830764;
	int64_t x482 = INT64_MIN;
	static uint64_t x483 = 3955LLU;
	int8_t x484 = INT8_MAX;
	volatile uint64_t t86 = 90554178184748LLU;

    t86 = (x481-(x482*(x483|x484)));

    if (t86 != 9223372036864606572LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x485 = INT64_MIN;
	uint64_t x486 = 1841672LLU;
	int32_t x487 = INT32_MAX;
	volatile uint8_t x488 = 2U;

    t87 = (x485-(x486*(x487|x488)));

    if (t87 != 9219417076351638024LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x493 = -20;
	int16_t x494 = 5086;
	static int8_t x495 = INT8_MIN;
	volatile int64_t x496 = 9513LL;
	int64_t t88 = -3930614556127LL;

    t88 = (x493-(x494*(x495|x496)));

    if (t88 != 442462LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x497 = -80;
	uint32_t x498 = 2764661U;
	volatile int8_t x499 = -1;
	int64_t t89 = 87LL;

    t89 = (x497-(x498*(x499|x500)));

    if (t89 != 2764581LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x501 = INT64_MIN;
	int8_t x502 = 4;
	int64_t x503 = INT64_MAX;
	int32_t x504 = -1725741;
	volatile int64_t t90 = -435930LL;

    t90 = (x501-(x502*(x503|x504)));

    if (t90 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x509 = 1;
	volatile int32_t x510 = INT32_MAX;
	volatile int64_t x511 = 123761217305032LL;
	int32_t x512 = INT32_MIN;
	static volatile int64_t t91 = -86472768404LL;

    t91 = (x509-(x510*(x511|x512)));

    if (t91 != 886508857531365833LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x517 = 1;
	uint8_t x519 = 1U;
	static int8_t x520 = INT8_MAX;
	int64_t t92 = 16457156620LL;

    t92 = (x517-(x518*(x519|x520)));

    if (t92 != 657265128646067161LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x521 = UINT8_MAX;
	volatile int64_t t93 = -24209352231LL;

    t93 = (x521-(x522*(x523|x524)));

    if (t93 != 433773960242874190LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint16_t x526 = UINT16_MAX;
	uint64_t x528 = 6571LLU;

    t94 = (x525-(x526*(x527|x528)));

    if (t94 != 140737057724842LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x530 = UINT32_MAX;
	int16_t x531 = 0;
	static volatile uint32_t t95 = 1626367U;

    t95 = (x529-(x530*(x531|x532)));

    if (t95 != 569U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x533 = UINT8_MAX;
	static uint32_t x534 = 1638499756U;
	int8_t x535 = 22;
	volatile uint32_t x536 = UINT32_MAX;
	static volatile uint32_t t96 = 26511U;

    t96 = (x533-(x534*(x535|x536)));

    if (t96 != 1638500011U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint8_t x538 = 50U;
	static int64_t x539 = INT64_MIN;
	static int64_t x540 = -592708LL;
	int64_t t97 = 43LL;

    t97 = (x537-(x538*(x539|x540)));

    if (t97 != 29635393LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x551 = -1;
	uint64_t t98 = 247LLU;

    t98 = (x549-(x550*(x551|x552)));

    if (t98 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x553 = -1;
	int8_t x554 = 2;
	int8_t x555 = 6;
	uint64_t t99 = 2196481816026611LLU;

    t99 = (x553-(x554*(x555|x556)));

    if (t99 != 1LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int8_t x557 = -38;
	int16_t x558 = 9;
	int32_t x559 = INT32_MIN;
	int64_t x560 = INT64_MIN;

    t100 = (x557-(x558*(x559|x560)));

    if (t100 != 19327352794LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x561 = 2U;
	volatile uint32_t x562 = UINT32_MAX;
	static int16_t x563 = INT16_MIN;
	static int16_t x564 = INT16_MIN;
	uint32_t t101 = 1636487127U;

    t101 = (x561-(x562*(x563|x564)));

    if (t101 != 4294934530U) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x565 = INT32_MIN;

    t102 = (x565-(x566*(x567|x568)));

    if (t102 != 17612216303840395136LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x569 = INT32_MAX;
	volatile int8_t x570 = 0;
	int16_t x571 = -61;
	int32_t x572 = -85203;
	volatile int32_t t103 = INT32_MAX;

    t103 = (x569-(x570*(x571|x572)));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x573 = 5;
	static int16_t x575 = INT16_MIN;
	uint16_t x576 = 312U;
	int32_t t104 = 890;

    t104 = (x573-(x574*(x575|x576)));

    if (t104 != 2693853) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x577 = INT8_MIN;
	int32_t x578 = INT32_MAX;
	int32_t x579 = INT32_MAX;
	uint64_t x580 = UINT64_MAX;

    t105 = (x577-(x578*(x579|x580)));

    if (t105 != 2147483519LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x581 = 283;
	uint16_t x583 = 756U;
	int16_t x584 = -2525;
	static int32_t t106 = 427145;

    t106 = (x581-(x582*(x583|x584)));

    if (t106 != 22813402) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x585 = -1;
	uint8_t x586 = 6U;
	uint16_t x587 = UINT16_MAX;
	uint8_t x588 = 3U;

    t107 = (x585-(x586*(x587|x588)));

    if (t107 != -393211) { NG(); } else { ; }
	
}

void f108(void) {
    	static int8_t x593 = INT8_MIN;
	static int16_t x595 = -116;
	uint64_t x596 = 722175341994029114LLU;

    t108 = (x593-(x594*(x595|x596)));

    if (t108 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x606 = 4099U;
	int32_t x607 = INT32_MIN;
	volatile int64_t t109 = 63708011LL;

    t109 = (x605-(x606*(x607|x608)));

    if (t109 != -9223372036854771709LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int32_t x615 = INT32_MIN;
	int32_t x616 = INT32_MIN;

    t110 = (x613-(x614*(x615|x616)));

    if (t110 != 67639851477048LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int64_t x621 = -120103912776240546LL;
	static volatile int64_t x622 = -1LL;
	int64_t x623 = INT64_MAX;

    t111 = (x621-(x622*(x623|x624)));

    if (t111 != -120103912776240547LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x626 = 162;
	int32_t x627 = INT32_MIN;
	int64_t x628 = INT64_MIN;

    t112 = (x625-(x626*(x627|x628)));

    if (t112 != 347892351024LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int32_t x629 = INT32_MIN;
	volatile int8_t x632 = INT8_MIN;
	volatile uint64_t t113 = 107LLU;

    t113 = (x629-(x630*(x631|x632)));

    if (t113 != 1964570025193312LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x633 = UINT16_MAX;
	int8_t x634 = INT8_MIN;
	int16_t x635 = -1;
	int64_t t114 = -6LL;

    t114 = (x633-(x634*(x635|x636)));

    if (t114 != 65407LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x638 = INT32_MAX;
	int64_t x639 = -1LL;
	volatile int64_t t115 = -229LL;

    t115 = (x637-(x638*(x639|x640)));

    if (t115 != 2147483720LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint16_t x646 = 4U;
	uint32_t x647 = 143U;
	volatile uint64_t x648 = 5310781952232LLU;
	volatile uint64_t t116 = 7249499782911LLU;

    t116 = (x645-(x646*(x647|x648)));

    if (t116 != 18446722832729226307LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int32_t x649 = INT32_MAX;
	uint64_t x650 = 236LLU;
	uint64_t x651 = UINT64_MAX;
	static int8_t x652 = 34;
	static volatile uint64_t t117 = 337292708213036405LLU;

    t117 = (x649-(x650*(x651|x652)));

    if (t117 != 2147483883LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x653 = -1;
	int64_t x654 = INT64_MAX;
	int32_t x655 = -1;
	int16_t x656 = INT16_MIN;
	int64_t t118 = -554450LL;

    t118 = (x653-(x654*(x655|x656)));

    if (t118 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f119(void) {
    	uint8_t x657 = 2U;
	static int16_t x658 = -1;
	static int8_t x659 = -1;
	volatile int32_t t119 = 0;

    t119 = (x657-(x658*(x659|x660)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x661 = 906;
	uint8_t x662 = 4U;
	int8_t x663 = INT8_MAX;
	uint16_t x664 = 315U;
	volatile int32_t t120 = -35426508;

    t120 = (x661-(x662*(x663|x664)));

    if (t120 != -626) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int64_t x665 = -518665199899504LL;
	int8_t x668 = INT8_MAX;
	int64_t t121 = -410220371975543LL;

    t121 = (x665-(x666*(x667|x668)));

    if (t121 != -518665199899377LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x670 = INT64_MAX;
	uint8_t x671 = 63U;
	int64_t x672 = -1LL;
	volatile int64_t t122 = 447861LL;

    t122 = (x669-(x670*(x671|x672)));

    if (t122 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x673 = INT32_MIN;
	volatile int32_t x675 = 37;
	int64_t x676 = -1LL;
	static volatile int64_t t123 = 7352384LL;

    t123 = (x673-(x674*(x675|x676)));

    if (t123 != -2147483381LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x677 = INT16_MAX;
	int16_t x678 = 1348;
	static int16_t x679 = INT16_MIN;
	static volatile int32_t x680 = 333;
	int32_t t124 = -1;

    t124 = (x677-(x678*(x679|x680)));

    if (t124 != 43755147) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x682 = 505601U;
	volatile uint16_t x683 = 14U;
	int16_t x684 = -26;
	uint32_t t125 = 1108U;

    t125 = (x681-(x682*(x683|x684)));

    if (t125 != 9100818U) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x687 = UINT32_MAX;
	uint8_t x688 = 49U;
	volatile uint32_t t126 = 5629551U;

    t126 = (x685-(x686*(x687|x688)));

    if (t126 != 2147565010U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x693 = INT64_MIN;
	uint16_t x694 = 1U;
	volatile int16_t x695 = -1;
	int16_t x696 = 3;
	int64_t t127 = -8903LL;

    t127 = (x693-(x694*(x695|x696)));

    if (t127 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x705 = 15U;
	int16_t x706 = INT16_MIN;
	static volatile uint32_t x707 = 9U;
	volatile int16_t x708 = INT16_MIN;
	uint32_t t128 = 587054U;

    t128 = (x705-(x706*(x707|x708)));

    if (t128 != 3221520399U) { NG(); } else { ; }
	
}

void f129(void) {
    	static int8_t x710 = -1;
	int64_t x712 = -3948830029358010LL;
	static volatile int64_t t129 = 68LL;

    t129 = (x709-(x710*(x711|x712)));

    if (t129 != 9219423206825418622LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x713 = 70765714942774910LL;
	int16_t x714 = -381;
	uint32_t x715 = UINT32_MAX;
	int64_t t130 = 52470401790LL;

    t130 = (x713-(x714*(x715|x716)));

    if (t130 != 70765714942774529LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x721 = INT32_MAX;
	volatile uint8_t x722 = UINT8_MAX;
	uint64_t x723 = 361479LLU;
	volatile uint64_t t131 = 488661677956LLU;

    t131 = (x721-(x722*(x723|x724)));

    if (t131 != 2055306502LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x725 = UINT8_MAX;
	int8_t x726 = 8;
	uint32_t x727 = 752891U;

    t132 = (x725-(x726*(x727|x728)));

    if (t132 != 295U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x729 = INT64_MAX;
	uint64_t x730 = UINT64_MAX;
	uint32_t x731 = 6804390U;
	uint16_t x732 = UINT16_MAX;

    t133 = (x729-(x730*(x731|x732)));

    if (t133 != 9223372036861591550LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x733 = -1;
	uint8_t x734 = 1U;
	int32_t x735 = INT32_MIN;
	int64_t x736 = INT64_MIN;
	int64_t t134 = -21LL;

    t134 = (x733-(x734*(x735|x736)));

    if (t134 != 2147483647LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x737 = 1U;
	int8_t x738 = INT8_MIN;
	volatile uint16_t x739 = UINT16_MAX;
	int64_t x740 = -1LL;

    t135 = (x737-(x738*(x739|x740)));

    if (t135 != -127LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x741 = -1;
	static int8_t x742 = INT8_MIN;
	static uint8_t x743 = UINT8_MAX;
	static volatile uint8_t x744 = 8U;
	int32_t t136 = 954;

    t136 = (x741-(x742*(x743|x744)));

    if (t136 != 32639) { NG(); } else { ; }
	
}

void f137(void) {
    	static int16_t x749 = 1;
	uint16_t x750 = 21U;
	int16_t x751 = INT16_MIN;
	int32_t t137 = 0;

    t137 = (x749-(x750*(x751|x752)));

    if (t137 != 22) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x757 = UINT16_MAX;
	uint32_t x758 = 2U;
	static volatile uint8_t x759 = 119U;
	volatile uint32_t t138 = 6960U;

    t138 = (x757-(x758*(x759|x760)));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x771 = INT16_MIN;
	int64_t t139 = 1183756197LL;

    t139 = (x769-(x770*(x771|x772)));

    if (t139 != 241672LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x773 = INT16_MAX;
	static int32_t x774 = INT32_MAX;
	volatile uint16_t x775 = UINT16_MAX;
	uint32_t x776 = 9834U;

    t140 = (x773-(x774*(x775|x776)));

    if (t140 != 2147581950U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x777 = INT32_MAX;
	int16_t x778 = INT16_MIN;
	uint64_t x779 = 3821LLU;
	volatile int64_t x780 = -218479LL;
	static volatile uint64_t t141 = 426158539571332LLU;

    t141 = (x777-(x778*(x779|x780)));

    if (t141 != 18446744068735008767LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x781 = INT64_MAX;
	int16_t x782 = -1754;
	uint16_t x783 = UINT16_MAX;
	volatile int64_t t142 = 1985150127LL;

    t142 = (x781-(x782*(x783|x784)));

    if (t142 != 9223372036854774053LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x785 = -29LL;
	int32_t x786 = -1;
	volatile int64_t x787 = -1LL;
	uint32_t x788 = UINT32_MAX;
	volatile int64_t t143 = -7326797916209671LL;

    t143 = (x785-(x786*(x787|x788)));

    if (t143 != -30LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x789 = -6715;
	uint16_t x790 = 1660U;
	uint64_t x791 = 332873LLU;
	volatile uint64_t t144 = 19932038135745164LLU;

    t144 = (x789-(x790*(x791|x792)));

    if (t144 != 18446684986363461881LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x793 = -5700;
	uint8_t x794 = 51U;
	int32_t x795 = -1;
	uint8_t x796 = 24U;

    t145 = (x793-(x794*(x795|x796)));

    if (t145 != -5649) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x797 = UINT16_MAX;
	volatile int8_t x798 = INT8_MAX;
	volatile uint32_t t146 = 999596833U;

    t146 = (x797-(x798*(x799|x800)));

    if (t146 != 4278640766U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x801 = -1;
	int16_t x802 = INT16_MIN;
	int64_t x803 = 0LL;
	volatile int64_t t147 = 3563LL;

    t147 = (x801-(x802*(x803|x804)));

    if (t147 != -4194305LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x806 = 1U;
	uint16_t x807 = UINT16_MAX;
	uint16_t x808 = UINT16_MAX;
	uint32_t t148 = 387709U;

    t148 = (x805-(x806*(x807|x808)));

    if (t148 != 4294868993U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x813 = -1893082244LL;
	uint8_t x814 = 12U;
	uint32_t x815 = 85471U;
	uint16_t x816 = 11U;
	volatile int64_t t149 = 34972298439LL;

    t149 = (x813-(x814*(x815|x816)));

    if (t149 != -1894107896LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x821 = 62142;
	int16_t x822 = -1;
	int32_t x823 = INT32_MIN;
	static uint16_t x824 = 672U;
	volatile int32_t t150 = 3954;

    t150 = (x821-(x822*(x823|x824)));

    if (t150 != -2147420834) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x830 = 1U;
	int32_t x831 = INT32_MIN;
	int64_t x832 = -1LL;
	int64_t t151 = 345648034547090706LL;

    t151 = (x829-(x830*(x831|x832)));

    if (t151 != 2147483648LL) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x833 = 235542LLU;
	int8_t x834 = 0;
	static uint16_t x835 = 16U;
	int16_t x836 = -1;
	static volatile uint64_t t152 = 6577160651267LLU;

    t152 = (x833-(x834*(x835|x836)));

    if (t152 != 235542LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint8_t x837 = 53U;
	volatile int32_t x838 = INT32_MIN;
	static int32_t x839 = INT32_MAX;
	uint32_t t153 = 1U;

    t153 = (x837-(x838*(x839|x840)));

    if (t153 != 2147483701U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x841 = 433LLU;
	int16_t x842 = INT16_MAX;
	uint64_t x843 = 6714177399961891LLU;
	volatile uint64_t t154 = 2017838041445LLU;

    t154 = (x841-(x842*(x843|x844)));

    if (t154 != 9223372036854809008LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x845 = INT8_MIN;
	uint8_t x846 = 3U;
	uint16_t x847 = UINT16_MAX;
	int16_t x848 = -119;
	volatile int32_t t155 = 1;

    t155 = (x845-(x846*(x847|x848)));

    if (t155 != -125) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x849 = INT8_MIN;
	static int8_t x850 = INT8_MAX;
	int16_t x851 = -1;
	volatile int32_t x852 = -1;
	static int32_t t156 = -457228708;

    t156 = (x849-(x850*(x851|x852)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	static int32_t x853 = -117;
	volatile int64_t x855 = -1LL;
	uint8_t x856 = 2U;
	volatile int64_t t157 = -54LL;

    t157 = (x853-(x854*(x855|x856)));

    if (t157 != -118LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x857 = 60U;
	static volatile int8_t x859 = INT8_MAX;
	uint64_t x860 = 462828983LLU;

    t158 = (x857-(x858*(x859|x860)));

    if (t158 != 18446744023724013736LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x861 = 84843LLU;
	int16_t x862 = INT16_MAX;
	int8_t x864 = INT8_MIN;

    t159 = (x861-(x862*(x863|x864)));

    if (t159 != 117610LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x865 = -1;
	static uint16_t x866 = UINT16_MAX;
	static int8_t x867 = -25;
	volatile int64_t x868 = -1LL;

    t160 = (x865-(x866*(x867|x868)));

    if (t160 != 65534LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x869 = -29;
	volatile int16_t x870 = -1;
	uint64_t x871 = 2LLU;
	uint8_t x872 = 42U;
	volatile uint64_t t161 = 1837446575159LLU;

    t161 = (x869-(x870*(x871|x872)));

    if (t161 != 13LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x877 = 1;
	uint64_t x878 = 39732LLU;
	volatile int64_t x880 = 394LL;
	static volatile uint64_t t162 = 154158545442204510LLU;

    t162 = (x877-(x878*(x879|x880)));

    if (t162 != 39733LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x885 = -57416283123838LL;
	static int16_t x886 = -1;
	static int64_t x887 = -660539LL;
	int64_t t163 = 13395LL;

    t163 = (x885-(x886*(x887|x888)));

    if (t163 != -57416283784377LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x889 = 750U;
	int32_t x890 = -14;
	int64_t x891 = -1LL;
	static uint64_t x892 = UINT64_MAX;

    t164 = (x889-(x890*(x891|x892)));

    if (t164 != 736LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x897 = -1LL;
	int64_t x898 = -1LL;
	uint32_t x899 = UINT32_MAX;
	static uint64_t x900 = 1061718954188LLU;
	volatile uint64_t t165 = 19125669692632LLU;

    t165 = (x897-(x898*(x899|x900)));

    if (t165 != 1065151889406LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x901 = INT32_MIN;
	static volatile uint32_t x902 = 950845094U;
	int16_t x903 = INT16_MAX;
	int32_t x904 = INT32_MIN;
	uint32_t t166 = 505524U;

    t166 = (x901-(x902*(x903|x904)));

    if (t166 != 1499053734U) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x905 = -73041949172150LL;
	uint16_t x906 = 2U;
	static int8_t x907 = -1;
	int64_t x908 = INT64_MAX;
	int64_t t167 = 1480LL;

    t167 = (x905-(x906*(x907|x908)));

    if (t167 != -73041949172148LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x909 = -1;
	int16_t x911 = INT16_MIN;
	int8_t x912 = INT8_MIN;
	volatile int32_t t168 = -10;

    t168 = (x909-(x910*(x911|x912)));

    if (t168 != 16255) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x915 = -1;
	static uint8_t x916 = UINT8_MAX;

    t169 = (x913-(x914*(x915|x916)));

    if (t169 != -2147483602) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x918 = -1;
	int16_t x919 = INT16_MAX;
	volatile int32_t t170 = -200088866;

    t170 = (x917-(x918*(x919|x920)));

    if (t170 != -2147450991) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x922 = 1289131502402LLU;
	int64_t x924 = -1LL;

    t171 = (x921-(x922*(x923|x924)));

    if (t171 != 1289131502401LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x925 = -26295700902694LL;
	uint16_t x926 = 6966U;
	uint32_t x927 = 0U;
	int16_t x928 = 3;
	int64_t t172 = 4316147300325LL;

    t172 = (x925-(x926*(x927|x928)));

    if (t172 != -26295700923592LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x933 = -1;
	volatile int64_t x934 = -1LL;
	volatile uint16_t x935 = 39U;
	int16_t x936 = -1;
	static int64_t t173 = -27LL;

    t173 = (x933-(x934*(x935|x936)));

    if (t173 != -2LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x937 = 10598955LLU;
	uint64_t x939 = UINT64_MAX;

    t174 = (x937-(x938*(x939|x940)));

    if (t174 != 10598954LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x941 = -1LL;
	uint32_t x942 = 195U;
	int8_t x943 = 44;
	static int32_t x944 = INT32_MIN;
	volatile int64_t t175 = -111697428134LL;

    t175 = (x941-(x942*(x943|x944)));

    if (t175 != -2147492229LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x945 = 15139LLU;
	int32_t x946 = INT32_MIN;
	static int8_t x947 = INT8_MIN;
	volatile uint64_t t176 = 14017922361712LLU;

    t176 = (x945-(x946*(x947|x948)));

    if (t176 != 18446743798831659811LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x951 = 23575145U;
	uint64_t x952 = 148LLU;
	uint64_t t177 = 717409680904LLU;

    t177 = (x949-(x950*(x951|x952)));

    if (t177 != 18446744072862973052LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	static int64_t x953 = -1LL;
	int8_t x954 = 9;
	int8_t x955 = INT8_MAX;
	int32_t x956 = 230468497;
	volatile int64_t t178 = -4LL;

    t178 = (x953-(x954*(x955|x956)));

    if (t178 != -2074217464LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x961 = -542;
	int32_t x962 = 29205360;
	uint64_t x963 = 12738LLU;
	volatile int8_t x964 = 0;
	volatile uint64_t t179 = 10724463219396LLU;

    t179 = (x961-(x962*(x963|x964)));

    if (t179 != 18446743701691675394LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x969 = 248741470834199583LL;
	static int16_t x971 = -1;
	uint16_t x972 = 14U;
	int64_t t180 = -199LL;

    t180 = (x969-(x970*(x971|x972)));

    if (t180 != 248741470834199582LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x973 = 68698618906LLU;
	int16_t x974 = INT16_MIN;
	int16_t x975 = INT16_MIN;
	volatile int32_t x976 = -12;
	uint64_t t181 = 8619983440115877LLU;

    t181 = (x973-(x974*(x975|x976)));

    if (t181 != 68698225690LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x977 = -1;
	uint16_t x978 = 349U;
	volatile int16_t x979 = -1375;
	int64_t x980 = -39799303098925470LL;
	volatile int64_t t182 = -463810311LL;

    t182 = (x977-(x978*(x979|x980)));

    if (t182 != 99464LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x981 = INT32_MIN;
	static uint32_t x982 = UINT32_MAX;
	uint32_t x984 = UINT32_MAX;

    t183 = (x981-(x982*(x983|x984)));

    if (t183 != 2147483647U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x985 = UINT8_MAX;
	static uint16_t x986 = 9432U;
	static int64_t x987 = INT64_MAX;
	static int32_t x988 = -1;
	static volatile int64_t t184 = 134411686099328998LL;

    t184 = (x985-(x986*(x987|x988)));

    if (t184 != 9687LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x989 = INT16_MIN;
	static int32_t x991 = INT32_MIN;
	uint32_t t185 = 15096067U;

    t185 = (x989-(x990*(x991|x992)));

    if (t185 != 2147485903U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x993 = 25U;
	volatile uint8_t x994 = 14U;
	int8_t x995 = INT8_MIN;
	static int64_t x996 = INT64_MIN;

    t186 = (x993-(x994*(x995|x996)));

    if (t186 != 1817LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x997 = -1LL;
	uint64_t x998 = 757127693108LLU;
	uint32_t x999 = 1U;
	volatile int32_t x1000 = 168405898;

    t187 = (x997-(x998*(x999|x1000)));

    if (t187 != 1622438700318017219LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1001 = 2LLU;
	static uint16_t x1002 = 2U;
	int32_t x1003 = 67843;
	int16_t x1004 = INT16_MAX;

    t188 = (x1001-(x1002*(x1003|x1004)));

    if (t188 != 18446744073709355012LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile uint64_t x1009 = 1002119362020LLU;
	int8_t x1010 = -1;
	int8_t x1011 = INT8_MIN;
	static int64_t x1012 = INT64_MIN;
	volatile uint64_t t189 = 8871486LLU;

    t189 = (x1009-(x1010*(x1011|x1012)));

    if (t189 != 1002119361892LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1013 = INT8_MIN;
	int64_t x1014 = INT64_MAX;
	volatile int64_t t190 = 36LL;

    t190 = (x1013-(x1014*(x1015|x1016)));

    if (t190 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1017 = INT16_MIN;
	static uint64_t x1019 = 32LLU;
	int16_t x1020 = 1;
	static volatile uint64_t t191 = 256010358004LLU;

    t191 = (x1017-(x1018*(x1019|x1020)));

    if (t191 != 2772170727745LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1021 = -1;
	uint8_t x1022 = 29U;
	int64_t x1023 = 14599910935796LL;
	int8_t x1024 = -1;
	int64_t t192 = 28301LL;

    t192 = (x1021-(x1022*(x1023|x1024)));

    if (t192 != 28LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x1025 = 0U;
	uint64_t x1026 = UINT64_MAX;
	int32_t x1027 = -6027379;
	volatile int32_t x1028 = INT32_MAX;

    t193 = (x1025-(x1026*(x1027|x1028)));

    if (t193 != UINT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1029 = -21;
	uint32_t x1030 = 10506212U;
	int32_t x1031 = INT32_MIN;
	int32_t x1032 = INT32_MAX;
	uint32_t t194 = 19786338U;

    t194 = (x1029-(x1030*(x1031|x1032)));

    if (t194 != 10506191U) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int64_t x1033 = -1LL;
	volatile int8_t x1034 = -1;
	volatile int8_t x1035 = INT8_MIN;
	int64_t t195 = 12797039LL;

    t195 = (x1033-(x1034*(x1035|x1036)));

    if (t195 != -41LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x1037 = 29U;
	static volatile uint64_t t196 = 381813594LLU;

    t196 = (x1037-(x1038*(x1039|x1040)));

    if (t196 != 685612784LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1041 = INT32_MIN;
	int16_t x1042 = -11;
	uint32_t x1043 = 63350573U;
	static uint32_t t197 = 412478U;

    t197 = (x1041-(x1042*(x1043|x1044)));

    if (t197 != 2844339973U) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1045 = INT16_MAX;
	static uint16_t x1046 = 8038U;
	int8_t x1047 = INT8_MIN;
	static int64_t x1048 = INT64_MIN;
	int64_t t198 = -35093198890849LL;

    t198 = (x1045-(x1046*(x1047|x1048)));

    if (t198 != 1061631LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile uint16_t x1049 = 371U;
	static volatile int8_t x1050 = -1;
	static volatile int8_t x1051 = INT8_MAX;
	int32_t x1052 = 3835;
	static volatile int32_t t199 = 58587;

    t199 = (x1049-(x1050*(x1051|x1052)));

    if (t199 != 4210) { NG(); } else { ; }
	
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

