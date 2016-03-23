
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

int8_t x1 = -1;
volatile uint32_t x5 = 43U;
uint32_t x17 = 2U;
int32_t x21 = INT32_MIN;
int16_t x26 = INT16_MIN;
int16_t x28 = 0;
static uint16_t x29 = UINT16_MAX;
int32_t x35 = -1;
int32_t x43 = -5;
static uint32_t x50 = UINT32_MAX;
int64_t x51 = 20731969007LL;
volatile int64_t x53 = -1LL;
static uint64_t x54 = 37LLU;
int64_t x56 = INT64_MIN;
int32_t t14 = 2747309;
int8_t x63 = -1;
static volatile int32_t t15 = -17;
int16_t x68 = INT16_MAX;
int64_t x77 = -461554113LL;
uint16_t x78 = 2035U;
volatile int32_t x84 = 51204;
int64_t t20 = 4LL;
int64_t x87 = -3400970973LL;
int16_t x89 = INT16_MIN;
volatile uint8_t x96 = UINT8_MAX;
int64_t x104 = -1LL;
int32_t t25 = -1867;
static int8_t x110 = INT8_MIN;
volatile uint32_t x113 = 218U;
uint32_t t27 = 7233119U;
int8_t x118 = 3;
int16_t x119 = -1;
uint64_t x127 = UINT64_MAX;
uint64_t t31 = 628731442703032000LLU;
uint16_t x135 = 24U;
uint64_t x137 = 92LLU;
volatile int8_t x147 = INT8_MAX;
int32_t x149 = INT32_MIN;
static volatile int16_t x152 = INT16_MAX;
volatile int64_t x158 = 2104660045910949LL;
volatile uint32_t x160 = 23611505U;
volatile int32_t t39 = -4635862;
uint64_t x168 = 513561459673376LLU;
int64_t x170 = INT64_MAX;
volatile int32_t x174 = 67648;
int32_t x182 = -78;
int32_t t44 = 3452400;
int32_t x187 = 70;
volatile uint32_t t46 = 2742326U;
uint64_t x195 = 0LLU;
uint64_t x198 = 54017LLU;
uint8_t x210 = 21U;
static volatile int16_t x216 = 485;
int64_t t52 = -16926018LL;
uint8_t x217 = UINT8_MAX;
int32_t t53 = 631;
int8_t x224 = INT8_MAX;
uint16_t x227 = 13U;
static uint64_t x232 = UINT64_MAX;
int64_t x239 = INT64_MIN;
static int64_t x240 = 82459679363199LL;
static int16_t x249 = INT16_MIN;
uint16_t x250 = 38U;
int32_t t61 = 11256631;
volatile int32_t t62 = -8130;
int16_t x260 = INT16_MIN;
volatile int32_t t63 = -2;
int8_t x262 = 44;
volatile int64_t x264 = -1LL;
volatile int64_t t64 = -5624324LL;
int16_t x267 = INT16_MIN;
uint32_t x268 = 772203U;
int16_t x274 = 17;
int32_t t67 = -33;
static int32_t x277 = 1651096;
uint64_t x287 = UINT64_MAX;
int16_t x288 = -1;
int64_t x291 = INT64_MAX;
volatile uint32_t x292 = 31011266U;
int16_t x308 = -4652;
static volatile int32_t t75 = -21;
int32_t x309 = INT32_MIN;
int32_t t76 = 17157943;
uint8_t x319 = 0U;
int64_t x337 = -1LL;
volatile int32_t t83 = 53564;
int8_t x345 = 24;
uint8_t x347 = 45U;
volatile uint32_t x356 = UINT32_MAX;
static int16_t x367 = INT16_MIN;
int64_t t89 = 10887234441LL;
uint8_t x369 = UINT8_MAX;
int32_t x373 = INT32_MIN;
volatile int16_t x386 = INT16_MIN;
int64_t x387 = -1LL;
int64_t x394 = 44793280913508LL;
int16_t x399 = -10;
int64_t x404 = 0LL;
int16_t x411 = -23;
int64_t x416 = 10161293464352LL;
int8_t x422 = INT8_MAX;
int64_t x434 = 2521827LL;
int8_t x436 = INT8_MAX;
volatile int8_t x437 = INT8_MIN;
int16_t x439 = INT16_MAX;
uint8_t x441 = 1U;
int32_t x448 = INT32_MAX;
uint32_t x449 = 13U;
int16_t x455 = 29;
int32_t x458 = -1;
volatile int32_t t112 = -173;
volatile uint8_t x467 = 17U;
volatile uint64_t x469 = 125166518864LLU;
int64_t x473 = -233820006862LL;
int32_t x474 = 1882;
static int32_t x475 = INT32_MIN;
volatile uint32_t x479 = 50472U;
int16_t x482 = INT16_MAX;
uint8_t x484 = 0U;
uint64_t t118 = 1826432LLU;
volatile int64_t t119 = 1233842LL;
static uint32_t x498 = 20U;
int32_t x500 = -118;
int16_t x501 = -1;
int16_t x511 = 1;
volatile int16_t x519 = 57;
uint32_t x521 = 629249U;
uint8_t x522 = 63U;
uint8_t x524 = UINT8_MAX;
volatile int16_t x530 = -3097;
static volatile uint32_t t130 = 6536520U;
int16_t x534 = INT16_MIN;
uint32_t x535 = 151875283U;
int64_t x542 = 1685LL;
int64_t x544 = INT64_MAX;
volatile int32_t x545 = -27961;
static uint64_t x547 = 8955949LLU;
int16_t x552 = INT16_MIN;
int64_t x555 = INT64_MIN;
uint64_t x559 = UINT64_MAX;
int32_t t138 = -2868;
static int16_t x567 = INT16_MAX;
static volatile int64_t x568 = INT64_MAX;
static uint32_t x571 = 626860610U;
volatile int32_t t140 = 264470811;
uint32_t x573 = UINT32_MAX;
volatile int64_t x579 = -2187420501191LL;
int32_t x585 = INT32_MAX;
static int8_t x588 = INT8_MIN;
uint32_t x592 = UINT32_MAX;
static int32_t x598 = INT32_MIN;
int32_t t147 = 91400836;
uint8_t x601 = UINT8_MAX;
int64_t x615 = -1LL;
uint16_t x616 = UINT16_MAX;
volatile uint64_t t151 = 1154812065LLU;
int32_t x618 = 4142218;
uint32_t x623 = 3U;
volatile int32_t t153 = -355186;
uint64_t x626 = UINT64_MAX;
int64_t x630 = 469324545LL;
int16_t x631 = INT16_MIN;
uint16_t x632 = 7U;
int32_t x633 = INT32_MIN;
int8_t x634 = -9;
int32_t t156 = 29422;
volatile int8_t x639 = -1;
uint8_t x640 = UINT8_MAX;
uint8_t x642 = 1U;
uint32_t x643 = UINT32_MAX;
volatile uint64_t t159 = 1696130873717675659LLU;
uint64_t x653 = 4675686708005885LLU;
int32_t x654 = INT32_MIN;
int8_t x662 = INT8_MIN;
static uint8_t x672 = UINT8_MAX;
int16_t x673 = 14209;
uint8_t x677 = 13U;
volatile int8_t x687 = INT8_MAX;
static uint16_t x689 = UINT16_MAX;
int32_t x690 = 844008587;
volatile int32_t t170 = -1;
int32_t x693 = INT32_MIN;
uint64_t x694 = UINT64_MAX;
uint32_t x696 = 63374695U;
uint64_t t171 = 492LLU;
int8_t x700 = 26;
volatile int32_t t172 = 22073753;
int16_t x706 = INT16_MIN;
uint64_t x708 = 2620975511LLU;
int16_t x713 = INT16_MIN;
int32_t x715 = -1;
volatile int64_t t176 = -1359721417083856LL;
int32_t t177 = -16;
static volatile int8_t x727 = INT8_MIN;
static int64_t x728 = INT64_MAX;
volatile int32_t t178 = 66721384;
uint32_t x736 = 9738U;
int16_t x745 = -1;
int64_t x747 = -1LL;
uint64_t t183 = 121985430LLU;
volatile int8_t x752 = INT8_MAX;
int64_t x757 = 3631994506609LL;
static uint64_t x758 = 5191LLU;
int32_t x759 = INT32_MIN;
static int16_t x771 = INT16_MIN;
int64_t t190 = -821339406470LL;
int8_t x777 = -1;
volatile int32_t t193 = -444406058;
uint32_t x791 = UINT32_MAX;
uint64_t x792 = 54003372875973LLU;
uint8_t x797 = UINT8_MAX;
volatile int32_t x809 = INT32_MIN;
uint16_t x811 = 17438U;


void f0(void) {
    	uint16_t x2 = 75U;
	static uint8_t x3 = UINT8_MAX;
	int16_t x4 = INT16_MAX;
	volatile int32_t t0 = 3;

    t0 = (x1%(x2|(x3==x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = 3480;
	int64_t x7 = 28094034278883LL;
	uint8_t x8 = 24U;
	uint32_t t1 = 739736264U;

    t1 = (x5%(x6|(x7==x8)));

    if (t1 != 43U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MAX;
	volatile uint32_t x10 = 1U;
	static uint16_t x11 = 61U;
	int8_t x12 = INT8_MAX;
	volatile uint32_t t2 = 540U;

    t2 = (x9%(x10|(x11==x12)));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -55831721016897149LL;
	volatile int16_t x14 = -1;
	int32_t x15 = 4010605;
	uint32_t x16 = UINT32_MAX;
	int64_t t3 = 707405405908LL;

    t3 = (x13%(x14|(x15==x16)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x18 = 10136LL;
	int8_t x19 = -1;
	int32_t x20 = -1;
	volatile int64_t t4 = -1LL;

    t4 = (x17%(x18|(x19==x20)));

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = 113;
	int16_t x23 = -8;
	int16_t x24 = INT16_MIN;
	static int32_t t5 = 15;

    t5 = (x21%(x22|(x23==x24)));

    if (t5 != -8) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	volatile int16_t x27 = 1;
	int32_t t6 = 10;

    t6 = (x25%(x26|(x27==x28)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x30 = UINT64_MAX;
	volatile int8_t x31 = 1;
	static int16_t x32 = -61;
	uint64_t t7 = 1392121204446958779LLU;

    t7 = (x29%(x30|(x31==x32)));

    if (t7 != 65535LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 1;
	int8_t x34 = -1;
	volatile uint32_t x36 = 5384U;
	static volatile int32_t t8 = 5;

    t8 = (x33%(x34|(x35==x36)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 310979137U;
	int16_t x38 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	int64_t x40 = -4369993965649LL;
	uint32_t t9 = 1008731614U;

    t9 = (x37%(x38|(x39==x40)));

    if (t9 != 310979137U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = 3;
	uint16_t x42 = UINT16_MAX;
	static volatile int32_t x44 = 25061;
	int32_t t10 = 12369672;

    t10 = (x41%(x42|(x43==x44)));

    if (t10 != 3) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = 422693508235764LL;
	static volatile uint64_t x46 = UINT64_MAX;
	uint64_t x47 = 94392186877LLU;
	int32_t x48 = 83238;
	volatile uint64_t t11 = 437LLU;

    t11 = (x45%(x46|(x47==x48)));

    if (t11 != 422693508235764LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x49 = -34887;
	uint16_t x52 = 779U;
	volatile uint32_t t12 = 5303U;

    t12 = (x49%(x50|(x51==x52)));

    if (t12 != 4294932409U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x55 = UINT16_MAX;
	uint64_t t13 = 5439906LLU;

    t13 = (x53%(x54|(x55==x56)));

    if (t13 != 11LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 0;
	int16_t x58 = -4173;
	int64_t x59 = -1LL;
	int16_t x60 = 1;

    t14 = (x57%(x58|(x59==x60)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x61 = INT8_MIN;
	int32_t x62 = -31959022;
	static volatile int32_t x64 = 2329961;

    t15 = (x61%(x62|(x63==x64)));

    if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x65 = -1LL;
	volatile uint8_t x66 = 20U;
	volatile int64_t x67 = INT64_MIN;
	int64_t t16 = -1817LL;

    t16 = (x65%(x66|(x67==x68)));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 3471999311167792LL;
	static volatile int16_t x70 = 32;
	int32_t x71 = INT32_MIN;
	uint32_t x72 = 273U;
	int64_t t17 = 3LL;

    t17 = (x69%(x70|(x71==x72)));

    if (t17 != 16LL) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x73 = -1;
	int32_t x74 = -1;
	int64_t x75 = INT64_MAX;
	static uint64_t x76 = UINT64_MAX;
	int32_t t18 = 1894969;

    t18 = (x73%(x74|(x75==x76)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x79 = -1;
	int32_t x80 = -1;
	int64_t t19 = -5101600972LL;

    t19 = (x77%(x78|(x79==x80)));

    if (t19 != -1868LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = INT32_MAX;
	static int64_t x82 = INT64_MIN;
	int32_t x83 = 28582911;

    t20 = (x81%(x82|(x83==x84)));

    if (t20 != 2147483647LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	int8_t x86 = -1;
	int8_t x88 = INT8_MIN;
	int32_t t21 = -369;

    t21 = (x85%(x86|(x87==x88)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x90 = UINT16_MAX;
	int16_t x91 = INT16_MIN;
	int32_t x92 = 3;
	int32_t t22 = 411539313;

    t22 = (x89%(x90|(x91==x92)));

    if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x93 = INT64_MIN;
	uint8_t x94 = 125U;
	int16_t x95 = -1;
	int64_t t23 = 507895001LL;

    t23 = (x93%(x94|(x95==x96)));

    if (t23 != -58LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x97 = -1LL;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = -1;
	static volatile int16_t x100 = INT16_MIN;
	volatile uint64_t t24 = 1529205773LLU;

    t24 = (x97%(x98|(x99==x100)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x101 = -1;
	int32_t x102 = INT32_MIN;
	static int16_t x103 = INT16_MIN;

    t25 = (x101%(x102|(x103==x104)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x109 = INT32_MIN;
	int8_t x111 = -1;
	int64_t x112 = INT64_MIN;
	volatile int32_t t26 = 4815422;

    t26 = (x109%(x110|(x111==x112)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x114 = 242017;
	int64_t x115 = INT64_MAX;
	int64_t x116 = INT64_MIN;

    t27 = (x113%(x114|(x115==x116)));

    if (t27 != 218U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x117 = 26U;
	int64_t x120 = -6302LL;
	volatile int32_t t28 = -263;

    t28 = (x117%(x118|(x119==x120)));

    if (t28 != 2) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = 0;
	int64_t x122 = 15297LL;
	static uint64_t x123 = 696010779101658LLU;
	int8_t x124 = 0;
	int64_t t29 = 137612786036465176LL;

    t29 = (x121%(x122|(x123==x124)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x125 = 44;
	int8_t x126 = -1;
	uint16_t x128 = UINT16_MAX;
	static int32_t t30 = -10;

    t30 = (x125%(x126|(x127==x128)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x129 = 5LLU;
	volatile int64_t x130 = -1LL;
	int32_t x131 = INT32_MIN;
	int8_t x132 = INT8_MAX;

    t31 = (x129%(x130|(x131==x132)));

    if (t31 != 5LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	static int64_t x134 = -1LL;
	int16_t x136 = INT16_MAX;
	volatile int64_t t32 = 639LL;

    t32 = (x133%(x134|(x135==x136)));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint64_t x138 = 4020135175814857LLU;
	volatile uint8_t x139 = 0U;
	volatile int64_t x140 = INT64_MIN;
	volatile uint64_t t33 = 351LLU;

    t33 = (x137%(x138|(x139==x140)));

    if (t33 != 92LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x141 = INT32_MAX;
	int8_t x142 = INT8_MIN;
	int64_t x143 = INT64_MIN;
	static int8_t x144 = INT8_MAX;
	int32_t t34 = -36;

    t34 = (x141%(x142|(x143==x144)));

    if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	int8_t x148 = INT8_MIN;
	uint64_t t35 = 2691421514632LLU;

    t35 = (x145%(x146|(x147==x148)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x150 = 3U;
	uint8_t x151 = 2U;
	volatile int32_t t36 = -12477696;

    t36 = (x149%(x150|(x151==x152)));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x153 = -254320;
	int64_t x154 = INT64_MAX;
	static int32_t x155 = 15239471;
	volatile int64_t x156 = -1422706LL;
	int64_t t37 = -32043LL;

    t37 = (x153%(x154|(x155==x156)));

    if (t37 != -254320LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x157 = 32;
	volatile uint64_t x159 = 77212111555LLU;
	volatile int64_t t38 = 36LL;

    t38 = (x157%(x158|(x159==x160)));

    if (t38 != 32LL) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x161 = UINT8_MAX;
	static int32_t x162 = 57;
	int16_t x163 = 4996;
	volatile uint64_t x164 = UINT64_MAX;

    t39 = (x161%(x162|(x163==x164)));

    if (t39 != 27) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x166 = 4;
	int64_t x167 = -90720690182245022LL;
	int64_t t40 = -2045504731992811964LL;

    t40 = (x165%(x166|(x167==x168)));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x169 = 245757561LLU;
	int64_t x171 = -1LL;
	int64_t x172 = INT64_MAX;
	volatile uint64_t t41 = 128795LLU;

    t41 = (x169%(x170|(x171==x172)));

    if (t41 != 245757561LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x173 = 47;
	volatile uint8_t x175 = 0U;
	int32_t x176 = INT32_MAX;
	static int32_t t42 = 4826355;

    t42 = (x173%(x174|(x175==x176)));

    if (t42 != 47) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x177 = -1;
	int32_t x178 = INT32_MIN;
	int64_t x179 = 1170431516670820LL;
	volatile uint16_t x180 = 111U;
	volatile int32_t t43 = 73;

    t43 = (x177%(x178|(x179==x180)));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x181 = INT32_MIN;
	volatile uint32_t x183 = 5259679U;
	volatile int32_t x184 = INT32_MIN;

    t44 = (x181%(x182|(x183==x184)));

    if (t44 != -50) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MIN;
	static uint16_t x188 = 3274U;
	volatile uint64_t t45 = 78462141226LLU;

    t45 = (x185%(x186|(x187==x188)));

    if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static volatile uint32_t x189 = 10U;
	int8_t x190 = -1;
	uint8_t x191 = 0U;
	static volatile int64_t x192 = INT64_MIN;

    t46 = (x189%(x190|(x191==x192)));

    if (t46 != 10U) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x193 = INT8_MAX;
	uint32_t x194 = 162599U;
	int8_t x196 = -1;
	uint32_t t47 = 95320757U;

    t47 = (x193%(x194|(x195==x196)));

    if (t47 != 127U) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x197 = 280707;
	volatile int16_t x199 = INT16_MIN;
	uint8_t x200 = 14U;
	static uint64_t t48 = 168612574LLU;

    t48 = (x197%(x198|(x199==x200)));

    if (t48 != 10622LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x201 = -145;
	int8_t x202 = 9;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 7U;
	static volatile int32_t t49 = -379590104;

    t49 = (x201%(x202|(x203==x204)));

    if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x205 = 1678699486162452824LLU;
	static int8_t x206 = -49;
	uint16_t x207 = 8U;
	uint16_t x208 = 14U;
	volatile uint64_t t50 = 170835365235LLU;

    t50 = (x205%(x206|(x207==x208)));

    if (t50 != 1678699486162452824LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint32_t x209 = UINT32_MAX;
	int8_t x211 = -1;
	int64_t x212 = INT64_MAX;
	static volatile uint32_t t51 = 28059U;

    t51 = (x209%(x210|(x211==x212)));

    if (t51 != 3U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x213 = UINT32_MAX;
	static int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;

    t52 = (x213%(x214|(x215==x216)));

    if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x218 = INT16_MIN;
	static volatile int8_t x219 = 5;
	int16_t x220 = -1;

    t53 = (x217%(x218|(x219==x220)));

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x221 = INT8_MAX;
	uint64_t x222 = 6497LLU;
	int8_t x223 = INT8_MIN;
	uint64_t t54 = 250159396071466LLU;

    t54 = (x221%(x222|(x223==x224)));

    if (t54 != 127LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x225 = -1LL;
	int64_t x226 = INT64_MIN;
	volatile int64_t x228 = -1LL;
	static int64_t t55 = 31810432243LL;

    t55 = (x225%(x226|(x227==x228)));

    if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int16_t x229 = 5177;
	int16_t x230 = -1;
	static uint8_t x231 = 0U;
	volatile int32_t t56 = -6814834;

    t56 = (x229%(x230|(x231==x232)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x233 = -1;
	int64_t x234 = INT64_MIN;
	int16_t x235 = -13;
	static uint64_t x236 = 6712501048120LLU;
	volatile int64_t t57 = -30500140LL;

    t57 = (x233%(x234|(x235==x236)));

    if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = -1;
	int64_t x238 = INT64_MAX;
	volatile int64_t t58 = 1313130771780508LL;

    t58 = (x237%(x238|(x239==x240)));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x241 = 0U;
	static volatile uint32_t x242 = 503U;
	static int32_t x243 = 18768949;
	uint64_t x244 = 368362922361LLU;
	uint32_t t59 = 6475708U;

    t59 = (x241%(x242|(x243==x244)));

    if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x245 = 2857U;
	static int64_t x246 = 1017664663LL;
	volatile uint64_t x247 = UINT64_MAX;
	volatile uint32_t x248 = 0U;
	volatile int64_t t60 = -1435508564770443317LL;

    t60 = (x245%(x246|(x247==x248)));

    if (t60 != 2857LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint64_t x251 = 23LLU;
	int16_t x252 = INT16_MAX;

    t61 = (x249%(x250|(x251==x252)));

    if (t61 != -12) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x253 = 12;
	int32_t x254 = INT32_MIN;
	int8_t x255 = 7;
	uint16_t x256 = 1U;

    t62 = (x253%(x254|(x255==x256)));

    if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MAX;
	volatile int32_t x258 = INT32_MAX;
	volatile int8_t x259 = -1;

    t63 = (x257%(x258|(x259==x260)));

    if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int64_t x261 = INT64_MIN;
	int64_t x263 = -79LL;

    t64 = (x261%(x262|(x263==x264)));

    if (t64 != -8LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x265 = INT8_MIN;
	uint16_t x266 = UINT16_MAX;
	int32_t t65 = 132964703;

    t65 = (x265%(x266|(x267==x268)));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x269 = -971957630LL;
	uint64_t x270 = 1262588199253062LLU;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 4U;
	static uint64_t t66 = 11819254102773652LLU;

    t66 = (x269%(x270|(x271==x272)));

    if (t66 != 330481650358166LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x273 = INT8_MAX;
	int32_t x275 = INT32_MAX;
	uint8_t x276 = UINT8_MAX;

    t67 = (x273%(x274|(x275==x276)));

    if (t67 != 8) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x278 = -3661354;
	int32_t x279 = -1;
	volatile int8_t x280 = -6;
	static int32_t t68 = -3;

    t68 = (x277%(x278|(x279==x280)));

    if (t68 != 1651096) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x281 = -1;
	int16_t x282 = -7;
	int32_t x283 = -1;
	volatile uint64_t x284 = 938942784LLU;
	int32_t t69 = 0;

    t69 = (x281%(x282|(x283==x284)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x285 = UINT16_MAX;
	int32_t x286 = INT32_MIN;
	int32_t t70 = -39597;

    t70 = (x285%(x286|(x287==x288)));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x289 = -12394;
	int32_t x290 = INT32_MAX;
	int32_t t71 = 0;

    t71 = (x289%(x290|(x291==x292)));

    if (t71 != -12394) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x293 = UINT32_MAX;
	volatile uint64_t x294 = UINT64_MAX;
	int8_t x295 = -12;
	int64_t x296 = -52537876LL;
	volatile uint64_t t72 = 132534123LLU;

    t72 = (x293%(x294|(x295==x296)));

    if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint8_t x297 = 0U;
	uint64_t x298 = 61304LLU;
	volatile uint8_t x299 = 31U;
	static uint64_t x300 = 1120LLU;
	volatile uint64_t t73 = 12960791116649325LLU;

    t73 = (x297%(x298|(x299==x300)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x301 = 20;
	int8_t x302 = 14;
	int16_t x303 = 7094;
	uint16_t x304 = 0U;
	volatile int32_t t74 = 8;

    t74 = (x301%(x302|(x303==x304)));

    if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x305 = -38116962;
	int16_t x306 = 1;
	volatile int32_t x307 = INT32_MAX;

    t75 = (x305%(x306|(x307==x308)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x310 = INT8_MAX;
	static int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MAX;

    t76 = (x309%(x310|(x311==x312)));

    if (t76 != -8) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x317 = INT8_MIN;
	volatile int16_t x318 = -1;
	int8_t x320 = -1;
	static int32_t t77 = 1201839;

    t77 = (x317%(x318|(x319==x320)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x321 = -12LL;
	uint16_t x322 = 210U;
	uint64_t x323 = UINT64_MAX;
	volatile int16_t x324 = INT16_MIN;
	volatile int64_t t78 = 517946614865134LL;

    t78 = (x321%(x322|(x323==x324)));

    if (t78 != -12LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = INT16_MAX;
	uint64_t x326 = 1LLU;
	static int64_t x327 = 353725553416LL;
	int8_t x328 = -1;
	static volatile uint64_t t79 = 930619628LLU;

    t79 = (x325%(x326|(x327==x328)));

    if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x329 = INT64_MAX;
	uint32_t x330 = 3U;
	volatile int64_t x331 = INT64_MIN;
	uint32_t x332 = UINT32_MAX;
	static int64_t t80 = -1014LL;

    t80 = (x329%(x330|(x331==x332)));

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x333 = UINT8_MAX;
	int16_t x334 = INT16_MIN;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MIN;
	int32_t t81 = -7090;

    t81 = (x333%(x334|(x335==x336)));

    if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x338 = -1;
	static int64_t x339 = -1LL;
	uint32_t x340 = 94U;
	int64_t t82 = -5284LL;

    t82 = (x337%(x338|(x339==x340)));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x341 = 4U;
	uint16_t x342 = 19U;
	int8_t x343 = -2;
	volatile uint64_t x344 = 1363LLU;

    t83 = (x341%(x342|(x343==x344)));

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint8_t x346 = 117U;
	int64_t x348 = -4138305179119369LL;
	volatile int32_t t84 = 52493957;

    t84 = (x345%(x346|(x347==x348)));

    if (t84 != 24) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x349 = 1;
	int8_t x350 = INT8_MAX;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MAX;
	volatile int32_t t85 = 5;

    t85 = (x349%(x350|(x351==x352)));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x353 = 0U;
	int16_t x354 = INT16_MAX;
	int32_t x355 = INT32_MAX;
	int32_t t86 = 374814;

    t86 = (x353%(x354|(x355==x356)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = 12;
	int64_t x358 = -1LL;
	int32_t x359 = -1;
	volatile int8_t x360 = -2;
	int64_t t87 = 126511LL;

    t87 = (x357%(x358|(x359==x360)));

    if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x361 = 5432;
	volatile uint8_t x362 = 92U;
	volatile int32_t x363 = -1;
	static int8_t x364 = -1;
	static int32_t t88 = 1041;

    t88 = (x361%(x362|(x363==x364)));

    if (t88 != 38) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = -5;
	int64_t x366 = INT64_MAX;
	uint8_t x368 = 1U;

    t89 = (x365%(x366|(x367==x368)));

    if (t89 != -5LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x370 = 15564606779043576LLU;
	static int32_t x371 = 201;
	volatile int64_t x372 = 764616526043LL;
	uint64_t t90 = 22071665410437LLU;

    t90 = (x369%(x370|(x371==x372)));

    if (t90 != 255LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x374 = INT32_MIN;
	int16_t x375 = -5;
	volatile int64_t x376 = -11967LL;
	static int32_t t91 = -25;

    t91 = (x373%(x374|(x375==x376)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x377 = -1;
	static int32_t x378 = INT32_MIN;
	uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t92 = 449146;

    t92 = (x377%(x378|(x379==x380)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x381 = UINT16_MAX;
	uint16_t x382 = 15488U;
	int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	int32_t t93 = -1386;

    t93 = (x381%(x382|(x383==x384)));

    if (t93 != 3583) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x385 = INT32_MIN;
	int16_t x388 = INT16_MAX;
	static int32_t t94 = -56796;

    t94 = (x385%(x386|(x387==x388)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x389 = -3881LL;
	int8_t x390 = -1;
	int16_t x391 = 15;
	uint8_t x392 = 47U;
	volatile int64_t t95 = -1LL;

    t95 = (x389%(x390|(x391==x392)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = -9;
	uint32_t x395 = 865944U;
	static volatile uint32_t x396 = 6864U;
	int64_t t96 = 10464LL;

    t96 = (x393%(x394|(x395==x396)));

    if (t96 != -9LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x397 = 176;
	int16_t x398 = -807;
	uint8_t x400 = 14U;
	int32_t t97 = -5716;

    t97 = (x397%(x398|(x399==x400)));

    if (t97 != 176) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x401 = -7;
	uint8_t x402 = 77U;
	static int8_t x403 = INT8_MAX;
	volatile int32_t t98 = 2835083;

    t98 = (x401%(x402|(x403==x404)));

    if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = -1LL;
	int64_t x406 = INT64_MIN;
	int32_t x407 = -1;
	uint32_t x408 = 372U;
	volatile int64_t t99 = -391095619662219905LL;

    t99 = (x405%(x406|(x407==x408)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x409 = -1LL;
	int64_t x410 = 122649LL;
	static int16_t x412 = INT16_MAX;
	int64_t t100 = 506786145LL;

    t100 = (x409%(x410|(x411==x412)));

    if (t100 != -1LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int32_t x413 = -342567;
	uint16_t x414 = 88U;
	uint16_t x415 = 230U;
	int32_t t101 = 1;

    t101 = (x413%(x414|(x415==x416)));

    if (t101 != -71) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x417 = 0LL;
	uint64_t x418 = 54483LLU;
	volatile uint64_t x419 = UINT64_MAX;
	int8_t x420 = -1;
	volatile uint64_t t102 = 4424090744881598LLU;

    t102 = (x417%(x418|(x419==x420)));

    if (t102 != 0LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x421 = INT8_MIN;
	int8_t x423 = INT8_MIN;
	volatile int16_t x424 = INT16_MAX;
	volatile int32_t t103 = 46420;

    t103 = (x421%(x422|(x423==x424)));

    if (t103 != -1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x425 = 114;
	int32_t x426 = 3168;
	int16_t x427 = -13084;
	uint8_t x428 = UINT8_MAX;
	volatile int32_t t104 = -1;

    t104 = (x425%(x426|(x427==x428)));

    if (t104 != 114) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x429 = INT8_MIN;
	int32_t x430 = INT32_MIN;
	volatile int64_t x431 = INT64_MAX;
	uint64_t x432 = UINT64_MAX;
	int32_t t105 = 1;

    t105 = (x429%(x430|(x431==x432)));

    if (t105 != -128) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x433 = 5U;
	static volatile uint64_t x435 = 1269LLU;
	volatile int64_t t106 = 87462995513LL;

    t106 = (x433%(x434|(x435==x436)));

    if (t106 != 5LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x438 = UINT16_MAX;
	int16_t x440 = INT16_MAX;
	volatile int32_t t107 = 313612;

    t107 = (x437%(x438|(x439==x440)));

    if (t107 != -128) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x442 = INT32_MAX;
	int8_t x443 = 0;
	uint8_t x444 = 2U;
	volatile int32_t t108 = -999564838;

    t108 = (x441%(x442|(x443==x444)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x445 = INT32_MIN;
	uint64_t x446 = 2LLU;
	static volatile int64_t x447 = 73514327LL;
	static uint64_t t109 = 1125166LLU;

    t109 = (x445%(x446|(x447==x448)));

    if (t109 != 0LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x450 = -1;
	int32_t x451 = -1;
	volatile int8_t x452 = INT8_MAX;
	uint32_t t110 = 762448U;

    t110 = (x449%(x450|(x451==x452)));

    if (t110 != 13U) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x453 = INT8_MAX;
	uint16_t x454 = 14U;
	int16_t x456 = INT16_MAX;
	static int32_t t111 = -1744;

    t111 = (x453%(x454|(x455==x456)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = -1;
	static int64_t x459 = -1LL;
	int16_t x460 = 0;

    t112 = (x457%(x458|(x459==x460)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x461 = -1;
	uint16_t x462 = 3U;
	uint16_t x463 = UINT16_MAX;
	int8_t x464 = INT8_MIN;
	int32_t t113 = -7929196;

    t113 = (x461%(x462|(x463==x464)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x465 = INT16_MIN;
	volatile int64_t x466 = 13009LL;
	int8_t x468 = INT8_MIN;
	volatile int64_t t114 = -29126LL;

    t114 = (x465%(x466|(x467==x468)));

    if (t114 != -6750LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int16_t x470 = -6;
	int16_t x471 = -1;
	int16_t x472 = -469;
	uint64_t t115 = 1313155215327LLU;

    t115 = (x469%(x470|(x471==x472)));

    if (t115 != 125166518864LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x476 = 1;
	static volatile int64_t t116 = -29LL;

    t116 = (x473%(x474|(x475==x476)));

    if (t116 != -1276LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile int16_t x477 = INT16_MIN;
	volatile int8_t x478 = INT8_MIN;
	int32_t x480 = 127;
	volatile int32_t t117 = 313451;

    t117 = (x477%(x478|(x479==x480)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint64_t x481 = 7687734LLU;
	int16_t x483 = -1;

    t118 = (x481%(x482|(x483==x484)));

    if (t118 != 20256LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x485 = -1LL;
	int64_t x486 = INT64_MIN;
	static volatile int8_t x487 = 1;
	int64_t x488 = INT64_MAX;

    t119 = (x485%(x486|(x487==x488)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x489 = -3902471;
	static int8_t x490 = INT8_MIN;
	uint32_t x491 = 9214U;
	int16_t x492 = INT16_MIN;
	int32_t t120 = 186841;

    t120 = (x489%(x490|(x491==x492)));

    if (t120 != -7) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x493 = INT16_MIN;
	static int64_t x494 = INT64_MIN;
	static uint16_t x495 = 32590U;
	volatile int16_t x496 = -1;
	static volatile int64_t t121 = 11573056758685230LL;

    t121 = (x493%(x494|(x495==x496)));

    if (t121 != -32768LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x497 = -14165606552LL;
	uint16_t x499 = 1U;
	volatile int64_t t122 = -1551887748538779975LL;

    t122 = (x497%(x498|(x499==x500)));

    if (t122 != -12LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x502 = INT8_MIN;
	static uint8_t x503 = 1U;
	uint64_t x504 = UINT64_MAX;
	int32_t t123 = 18060029;

    t123 = (x501%(x502|(x503==x504)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint64_t x505 = 20172LLU;
	uint32_t x506 = 27U;
	int16_t x507 = -1;
	int64_t x508 = INT64_MIN;
	volatile uint64_t t124 = 10359LLU;

    t124 = (x505%(x506|(x507==x508)));

    if (t124 != 3LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x509 = 15296LLU;
	int64_t x510 = INT64_MAX;
	int16_t x512 = INT16_MIN;
	uint64_t t125 = 131734020LLU;

    t125 = (x509%(x510|(x511==x512)));

    if (t125 != 15296LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int32_t x513 = -1;
	static int16_t x514 = INT16_MIN;
	static int64_t x515 = 1315147LL;
	int8_t x516 = INT8_MAX;
	int32_t t126 = 63;

    t126 = (x513%(x514|(x515==x516)));

    if (t126 != -1) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x517 = INT8_MAX;
	uint64_t x518 = 6051LLU;
	volatile uint8_t x520 = 1U;
	volatile uint64_t t127 = 3875067920652LLU;

    t127 = (x517%(x518|(x519==x520)));

    if (t127 != 127LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x523 = 315763479LLU;
	static volatile uint32_t t128 = 10U;

    t128 = (x521%(x522|(x523==x524)));

    if (t128 != 5U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x525 = 3U;
	uint8_t x526 = UINT8_MAX;
	int16_t x527 = 1;
	int8_t x528 = -1;
	volatile int32_t t129 = 10863;

    t129 = (x525%(x526|(x527==x528)));

    if (t129 != 3) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x529 = 305242U;
	uint32_t x531 = 75U;
	volatile uint8_t x532 = UINT8_MAX;

    t130 = (x529%(x530|(x531==x532)));

    if (t130 != 305242U) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x533 = 1294LL;
	uint32_t x536 = UINT32_MAX;
	int64_t t131 = 117670064564223LL;

    t131 = (x533%(x534|(x535==x536)));

    if (t131 != 1294LL) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x537 = UINT32_MAX;
	volatile int32_t x538 = 31263;
	int16_t x539 = 881;
	uint32_t x540 = UINT32_MAX;
	uint32_t t132 = 113U;

    t132 = (x537%(x538|(x539==x540)));

    if (t132 != 25092U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = 6669U;
	volatile uint32_t x543 = 344837U;
	volatile int64_t t133 = 1LL;

    t133 = (x541%(x542|(x543==x544)));

    if (t133 != 1614LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x546 = INT16_MAX;
	static uint8_t x548 = UINT8_MAX;
	static volatile int32_t t134 = 7990;

    t134 = (x545%(x546|(x547==x548)));

    if (t134 != -27961) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x549 = INT16_MIN;
	int32_t x550 = INT32_MAX;
	int32_t x551 = -1;
	volatile int32_t t135 = 48078;

    t135 = (x549%(x550|(x551==x552)));

    if (t135 != -32768) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x553 = -1LL;
	int16_t x554 = -160;
	volatile uint32_t x556 = 1066U;
	volatile int64_t t136 = 429521794179075LL;

    t136 = (x553%(x554|(x555==x556)));

    if (t136 != -1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x557 = 0;
	volatile uint16_t x558 = 7U;
	static int32_t x560 = INT32_MIN;
	volatile int32_t t137 = -1072;

    t137 = (x557%(x558|(x559==x560)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile uint8_t x561 = UINT8_MAX;
	int16_t x562 = INT16_MAX;
	static int16_t x563 = INT16_MIN;
	volatile int64_t x564 = INT64_MIN;

    t138 = (x561%(x562|(x563==x564)));

    if (t138 != 255) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile int16_t x565 = 1;
	static int32_t x566 = 240;
	volatile int32_t t139 = -49567658;

    t139 = (x565%(x566|(x567==x568)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x569 = 41U;
	int8_t x570 = INT8_MIN;
	int32_t x572 = -26562439;

    t140 = (x569%(x570|(x571==x572)));

    if (t140 != 41) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x574 = INT8_MIN;
	int16_t x575 = -13;
	int8_t x576 = 11;
	volatile uint32_t t141 = 206885443U;

    t141 = (x573%(x574|(x575==x576)));

    if (t141 != 127U) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int64_t x577 = -1LL;
	uint32_t x578 = UINT32_MAX;
	volatile int16_t x580 = -132;
	static int64_t t142 = -125611774LL;

    t142 = (x577%(x578|(x579==x580)));

    if (t142 != -1LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x581 = 63565531U;
	volatile int8_t x582 = INT8_MIN;
	int64_t x583 = -5305323404046299LL;
	static int16_t x584 = -1;
	uint32_t t143 = 586576U;

    t143 = (x581%(x582|(x583==x584)));

    if (t143 != 63565531U) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x586 = 1;
	static uint16_t x587 = UINT16_MAX;
	int32_t t144 = -510807;

    t144 = (x585%(x586|(x587==x588)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x589 = UINT16_MAX;
	uint8_t x590 = UINT8_MAX;
	static int8_t x591 = INT8_MAX;
	static int32_t t145 = 12;

    t145 = (x589%(x590|(x591==x592)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x593 = -457;
	int16_t x594 = -12760;
	volatile uint8_t x595 = 103U;
	int16_t x596 = -1;
	volatile int32_t t146 = -3016;

    t146 = (x593%(x594|(x595==x596)));

    if (t146 != -457) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint16_t x597 = 7464U;
	uint16_t x599 = 1U;
	int64_t x600 = 1522364763806912967LL;

    t147 = (x597%(x598|(x599==x600)));

    if (t147 != 7464) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x602 = INT8_MIN;
	int64_t x603 = -1LL;
	volatile int64_t x604 = INT64_MAX;
	volatile int32_t t148 = 1;

    t148 = (x601%(x602|(x603==x604)));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x605 = INT64_MIN;
	static uint16_t x606 = UINT16_MAX;
	int64_t x607 = INT64_MIN;
	uint64_t x608 = UINT64_MAX;
	int64_t t149 = 244712017492LL;

    t149 = (x605%(x606|(x607==x608)));

    if (t149 != -32768LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint8_t x609 = UINT8_MAX;
	int8_t x610 = -1;
	uint8_t x611 = 3U;
	volatile uint64_t x612 = UINT64_MAX;
	int32_t t150 = 310521;

    t150 = (x609%(x610|(x611==x612)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x613 = 1U;
	uint64_t x614 = 784956231LLU;

    t151 = (x613%(x614|(x615==x616)));

    if (t151 != 1LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x617 = UINT64_MAX;
	volatile uint32_t x619 = 17827U;
	int16_t x620 = INT16_MAX;
	volatile uint64_t t152 = 94194LLU;

    t152 = (x617%(x618|(x619==x620)));

    if (t152 != 1643131LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x621 = INT8_MAX;
	static int8_t x622 = -56;
	int8_t x624 = INT8_MIN;

    t153 = (x621%(x622|(x623==x624)));

    if (t153 != 15) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x625 = 0;
	static volatile uint32_t x627 = UINT32_MAX;
	uint64_t x628 = 106967371LLU;
	static volatile uint64_t t154 = 38929LLU;

    t154 = (x625%(x626|(x627==x628)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x629 = INT64_MIN;
	int64_t t155 = 232314209155640LL;

    t155 = (x629%(x630|(x631==x632)));

    if (t155 != -453689033LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x635 = UINT64_MAX;
	static int16_t x636 = INT16_MIN;

    t156 = (x633%(x634|(x635==x636)));

    if (t156 != -2) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x637 = -1LL;
	uint16_t x638 = 9U;
	int64_t t157 = 600823850LL;

    t157 = (x637%(x638|(x639==x640)));

    if (t157 != -1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x641 = -1;
	int32_t x644 = INT32_MIN;
	int32_t t158 = 19;

    t158 = (x641%(x642|(x643==x644)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x645 = -1;
	uint64_t x646 = 12972147736LLU;
	static int64_t x647 = INT64_MAX;
	int16_t x648 = 43;

    t159 = (x645%(x646|(x647==x648)));

    if (t159 != 4571634335LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x649 = -223;
	static int32_t x650 = INT32_MIN;
	int64_t x651 = INT64_MIN;
	int64_t x652 = INT64_MIN;
	volatile int32_t t160 = 1811644;

    t160 = (x649%(x650|(x651==x652)));

    if (t160 != -223) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x655 = UINT8_MAX;
	static int8_t x656 = -37;
	uint64_t t161 = 3092942535803LLU;

    t161 = (x653%(x654|(x655==x656)));

    if (t161 != 4675686708005885LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x657 = 130U;
	static volatile uint8_t x658 = UINT8_MAX;
	volatile int64_t x659 = 572419LL;
	int32_t x660 = INT32_MAX;
	int32_t t162 = -1;

    t162 = (x657%(x658|(x659==x660)));

    if (t162 != 130) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x661 = UINT32_MAX;
	static uint16_t x663 = UINT16_MAX;
	volatile int8_t x664 = -1;
	uint32_t t163 = 6948614U;

    t163 = (x661%(x662|(x663==x664)));

    if (t163 != 127U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x665 = 101U;
	int8_t x666 = -1;
	static int16_t x667 = -30;
	static int8_t x668 = -7;
	volatile int32_t t164 = 758;

    t164 = (x665%(x666|(x667==x668)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x669 = 37;
	uint8_t x670 = 24U;
	int16_t x671 = INT16_MIN;
	int32_t t165 = -103;

    t165 = (x669%(x670|(x671==x672)));

    if (t165 != 13) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x674 = 238U;
	int32_t x675 = -3;
	int32_t x676 = -209607914;
	uint32_t t166 = 48363U;

    t166 = (x673%(x674|(x675==x676)));

    if (t166 != 167U) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint16_t x678 = UINT16_MAX;
	uint16_t x679 = UINT16_MAX;
	volatile uint64_t x680 = 2LLU;
	int32_t t167 = 419;

    t167 = (x677%(x678|(x679==x680)));

    if (t167 != 13) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x681 = 0;
	int64_t x682 = -9772306547970LL;
	int16_t x683 = 122;
	int16_t x684 = -12432;
	int64_t t168 = 24886294LL;

    t168 = (x681%(x682|(x683==x684)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint8_t x685 = 2U;
	int32_t x686 = INT32_MAX;
	volatile uint32_t x688 = 805U;
	int32_t t169 = 3303391;

    t169 = (x685%(x686|(x687==x688)));

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x691 = -1;
	int32_t x692 = INT32_MIN;

    t170 = (x689%(x690|(x691==x692)));

    if (t170 != 65535) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x695 = 131;

    t171 = (x693%(x694|(x695==x696)));

    if (t171 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x697 = INT32_MAX;
	volatile int8_t x698 = INT8_MIN;
	uint16_t x699 = 3773U;

    t172 = (x697%(x698|(x699==x700)));

    if (t172 != 127) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x705 = UINT16_MAX;
	int8_t x707 = INT8_MAX;
	int32_t t173 = 386;

    t173 = (x705%(x706|(x707==x708)));

    if (t173 != 32767) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x709 = 23U;
	volatile int16_t x710 = INT16_MIN;
	int16_t x711 = -1;
	uint16_t x712 = 15588U;
	static volatile int32_t t174 = -370691564;

    t174 = (x709%(x710|(x711==x712)));

    if (t174 != 23) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x714 = -1;
	uint16_t x716 = 112U;
	int32_t t175 = 49789;

    t175 = (x713%(x714|(x715==x716)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x717 = 0;
	volatile int64_t x718 = 30947361LL;
	int8_t x719 = INT8_MIN;
	int32_t x720 = INT32_MAX;

    t176 = (x717%(x718|(x719==x720)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x721 = INT32_MAX;
	int32_t x722 = INT32_MAX;
	int32_t x723 = INT32_MIN;
	volatile int16_t x724 = -1;

    t177 = (x721%(x722|(x723==x724)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x725 = UINT8_MAX;
	volatile int16_t x726 = -1;

    t178 = (x725%(x726|(x727==x728)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int8_t x729 = -1;
	volatile uint16_t x730 = 800U;
	int16_t x731 = INT16_MIN;
	int32_t x732 = INT32_MIN;
	volatile int32_t t179 = 234;

    t179 = (x729%(x730|(x731==x732)));

    if (t179 != -1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x733 = -2;
	volatile uint64_t x734 = 1409823803559962607LLU;
	static uint8_t x735 = UINT8_MAX;
	volatile uint64_t t180 = 288279472220969LLU;

    t180 = (x733%(x734|(x735==x736)));

    if (t180 != 119034627430037723LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = 112;
	static int8_t x738 = INT8_MAX;
	static volatile int64_t x739 = INT64_MAX;
	int8_t x740 = INT8_MIN;
	int32_t t181 = 21859004;

    t181 = (x737%(x738|(x739==x740)));

    if (t181 != 112) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x741 = INT8_MAX;
	volatile int16_t x742 = INT16_MIN;
	int32_t x743 = -4;
	static int8_t x744 = INT8_MIN;
	volatile int32_t t182 = 21;

    t182 = (x741%(x742|(x743==x744)));

    if (t182 != 127) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x746 = 267851657723LLU;
	static uint64_t x748 = UINT64_MAX;

    t183 = (x745%(x746|(x747==x748)));

    if (t183 != 223663202973LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x749 = INT8_MIN;
	int8_t x750 = -6;
	int32_t x751 = INT32_MIN;
	int32_t t184 = 338363812;

    t184 = (x749%(x750|(x751==x752)));

    if (t184 != -2) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x753 = INT32_MIN;
	int8_t x754 = -1;
	int64_t x755 = INT64_MIN;
	volatile int32_t x756 = INT32_MIN;
	static volatile int32_t t185 = 89915;

    t185 = (x753%(x754|(x755==x756)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x760 = UINT16_MAX;
	uint64_t t186 = 8907069753LLU;

    t186 = (x757%(x758|(x759==x760)));

    if (t186 != 4468LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x761 = -1;
	int32_t x762 = INT32_MAX;
	uint8_t x763 = UINT8_MAX;
	int8_t x764 = INT8_MIN;
	volatile int32_t t187 = 869;

    t187 = (x761%(x762|(x763==x764)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x765 = INT64_MIN;
	static int64_t x766 = 926LL;
	int64_t x767 = -45LL;
	static int32_t x768 = -11783;
	static int64_t t188 = -4418LL;

    t188 = (x765%(x766|(x767==x768)));

    if (t188 != -362LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x769 = -1LL;
	uint16_t x770 = 609U;
	volatile uint32_t x772 = 865U;
	int64_t t189 = -1998546081948199424LL;

    t189 = (x769%(x770|(x771==x772)));

    if (t189 != -1LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x773 = INT64_MAX;
	static volatile int32_t x774 = INT32_MAX;
	int8_t x775 = -31;
	volatile int32_t x776 = INT32_MIN;

    t190 = (x773%(x774|(x775==x776)));

    if (t190 != 1LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x778 = 52;
	static int8_t x779 = INT8_MAX;
	int16_t x780 = -1;
	int32_t t191 = 311;

    t191 = (x777%(x778|(x779==x780)));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x781 = 19U;
	uint8_t x782 = UINT8_MAX;
	int8_t x783 = -1;
	uint8_t x784 = 7U;
	uint32_t t192 = 4207198U;

    t192 = (x781%(x782|(x783==x784)));

    if (t192 != 19U) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x785 = -2398;
	volatile int8_t x786 = INT8_MAX;
	volatile int32_t x787 = 43748;
	volatile int16_t x788 = INT16_MAX;

    t193 = (x785%(x786|(x787==x788)));

    if (t193 != -112) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x789 = INT64_MIN;
	volatile uint16_t x790 = UINT16_MAX;
	int64_t t194 = -32186772656655LL;

    t194 = (x789%(x790|(x791==x792)));

    if (t194 != -32768LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x793 = 1010LL;
	uint64_t x794 = 59927088LLU;
	static volatile int32_t x795 = INT32_MIN;
	uint16_t x796 = UINT16_MAX;
	static uint64_t t195 = 1937738968LLU;

    t195 = (x793%(x794|(x795==x796)));

    if (t195 != 1010LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x798 = INT64_MIN;
	int16_t x799 = INT16_MIN;
	int64_t x800 = INT64_MIN;
	int64_t t196 = -174516674954LL;

    t196 = (x797%(x798|(x799==x800)));

    if (t196 != 255LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x801 = 91U;
	uint16_t x802 = UINT16_MAX;
	int16_t x803 = INT16_MIN;
	int64_t x804 = -7520LL;
	int32_t t197 = 3951;

    t197 = (x801%(x802|(x803==x804)));

    if (t197 != 91) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x805 = INT8_MIN;
	int16_t x806 = -1;
	volatile int16_t x807 = INT16_MAX;
	uint8_t x808 = UINT8_MAX;
	static int32_t t198 = 1;

    t198 = (x805%(x806|(x807==x808)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x810 = INT64_MIN;
	int64_t x812 = INT64_MIN;
	volatile int64_t t199 = 386781LL;

    t199 = (x809%(x810|(x811==x812)));

    if (t199 != -2147483648LL) { NG(); } else { ; }
	
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

