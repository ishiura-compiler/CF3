
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

static int16_t x2 = 0;
int8_t x7 = -1;
volatile int16_t x10 = -1;
static volatile int32_t t2 = 2665;
static uint64_t x14 = UINT64_MAX;
int64_t x19 = INT64_MIN;
volatile int8_t x20 = INT8_MIN;
static volatile int64_t x24 = -1261773439994655899LL;
static int32_t t5 = 132030428;
static int8_t x32 = 3;
uint32_t x37 = 51748526U;
int8_t x38 = 60;
volatile int64_t x43 = -1LL;
int8_t x57 = INT8_MAX;
int32_t x60 = INT32_MAX;
int16_t x63 = -409;
uint16_t x64 = 762U;
uint8_t x81 = 13U;
int8_t x85 = 0;
volatile int8_t x88 = 1;
int8_t x92 = INT8_MAX;
uint8_t x94 = UINT8_MAX;
volatile uint32_t x98 = 229U;
uint8_t x108 = 3U;
volatile uint16_t x121 = 0U;
volatile int16_t x124 = INT16_MIN;
int32_t t26 = 1;
int8_t x134 = 1;
int16_t x145 = INT16_MAX;
static uint32_t x146 = 1011612U;
static int32_t x147 = INT32_MIN;
volatile int8_t x164 = INT8_MIN;
int32_t t32 = 1629;
static int32_t x176 = INT32_MIN;
int16_t x179 = -1;
uint16_t x185 = 0U;
uint32_t x187 = 12002U;
uint16_t x192 = UINT16_MAX;
static uint16_t x194 = UINT16_MAX;
uint32_t x196 = 52U;
static int16_t x197 = -108;
int8_t x208 = -4;
int8_t x222 = INT8_MIN;
int8_t x223 = -3;
volatile int32_t t42 = 410692;
int16_t x228 = INT16_MAX;
int16_t x229 = 7;
uint8_t x232 = 7U;
int32_t t44 = 508999474;
int8_t x241 = -1;
static volatile int32_t t46 = -9;
int32_t x260 = -1;
int16_t x265 = INT16_MIN;
int32_t t49 = 664;
int32_t t50 = 87;
volatile uint32_t x283 = 673184U;
int16_t x284 = -10;
static volatile int64_t x288 = INT64_MIN;
int16_t x292 = -1;
uint64_t x299 = 103585154619LLU;
volatile int16_t x300 = INT16_MIN;
int16_t x302 = INT16_MIN;
int64_t x304 = INT64_MIN;
volatile int32_t t58 = 5718;
int32_t t59 = 169815695;
uint16_t x315 = 220U;
volatile int32_t t60 = -66822186;
uint8_t x318 = 2U;
int16_t x323 = -2587;
uint64_t x328 = 1350617571256LLU;
int32_t t65 = -563355308;
volatile int32_t t66 = -10;
uint32_t x350 = UINT32_MAX;
int32_t t68 = -4;
int16_t x357 = INT16_MIN;
int16_t x358 = 496;
volatile int32_t t71 = -101119;
uint32_t x369 = UINT32_MAX;
int32_t x370 = INT32_MIN;
volatile int32_t t73 = 6351;
int32_t x381 = -1;
int64_t x385 = INT64_MAX;
int16_t x386 = 7;
volatile int32_t t77 = -7302695;
static uint16_t x389 = UINT16_MAX;
int64_t x393 = -8311189970284LL;
uint32_t x399 = 32U;
int64_t x404 = INT64_MIN;
int8_t x410 = INT8_MIN;
int32_t x411 = -699571;
int32_t t84 = 1;
int32_t t88 = 2;
int32_t x437 = INT32_MAX;
static uint64_t x454 = 268472702101LLU;
volatile int32_t t97 = 15871600;
static volatile uint16_t x487 = UINT16_MAX;
int32_t x492 = -14;
uint64_t x505 = 2383810484448647533LLU;
static uint64_t x514 = UINT64_MAX;
int8_t x516 = -1;
int8_t x517 = INT8_MIN;
int8_t x536 = INT8_MAX;
int32_t t107 = -8053803;
int16_t x538 = -351;
int64_t x539 = 723039LL;
int8_t x542 = INT8_MAX;
uint8_t x543 = 18U;
uint16_t x544 = UINT16_MAX;
int16_t x550 = INT16_MIN;
int32_t t114 = 3545;
int32_t t115 = -7;
volatile int8_t x584 = 7;
uint32_t x585 = UINT32_MAX;
uint32_t x586 = 123011U;
uint32_t x592 = UINT32_MAX;
static volatile int32_t t121 = -74;
int8_t x600 = INT8_MIN;
static int32_t t122 = 7587;
int64_t x601 = INT64_MIN;
int32_t t123 = -169;
static uint32_t x605 = 42577U;
volatile uint16_t x609 = 57U;
int64_t x620 = INT64_MIN;
int8_t x639 = INT8_MAX;
static volatile uint64_t x645 = 12353916730LLU;
volatile int16_t x646 = -388;
int8_t x658 = INT8_MIN;
uint64_t x668 = 201LLU;
static int64_t x673 = INT64_MAX;
int8_t x675 = 2;
volatile int32_t t137 = 8847841;
int32_t x686 = INT32_MIN;
static volatile int32_t x692 = 1;
int8_t x694 = 2;
volatile uint64_t x696 = UINT64_MAX;
int16_t x697 = 33;
int8_t x699 = INT8_MIN;
int16_t x701 = 166;
int32_t x703 = INT32_MIN;
int32_t t143 = -167686187;
uint32_t x711 = 16330U;
uint16_t x712 = 2U;
volatile int8_t x720 = INT8_MIN;
int64_t x729 = -1LL;
static int64_t x738 = -658872063448LL;
int32_t x741 = INT32_MIN;
volatile int8_t x749 = -1;
static volatile int8_t x750 = INT8_MIN;
uint64_t x756 = UINT64_MAX;
static volatile int32_t t155 = -6;
static int16_t x757 = -1;
static int16_t x764 = -947;
volatile int16_t x768 = INT16_MIN;
int8_t x769 = INT8_MIN;
static volatile int32_t t159 = 53648527;
static int32_t x776 = INT32_MAX;
volatile int32_t t164 = -2353;
int32_t x810 = -1369;
int32_t x812 = -1;
volatile int32_t t165 = 1002;
static int64_t x818 = -1LL;
int64_t x820 = -13259LL;
uint16_t x822 = UINT16_MAX;
int8_t x824 = -1;
int8_t x825 = -7;
static uint16_t x826 = 78U;
static int64_t x827 = INT64_MIN;
static int16_t x829 = 297;
int8_t x837 = -1;
int16_t x841 = 353;
int64_t x844 = 70311935289059LL;
volatile int64_t x846 = -162596284791916LL;
int16_t x847 = INT16_MIN;
int64_t x848 = -60288711177995374LL;
static volatile int32_t x850 = 30970007;
uint16_t x856 = 8U;
int16_t x871 = -1;
static volatile int32_t t181 = 393576;
volatile uint8_t x882 = 0U;
int32_t t182 = -9;
uint32_t x885 = UINT32_MAX;
uint32_t x889 = 102984U;
int64_t x891 = -1LL;
volatile uint64_t x896 = UINT64_MAX;
int8_t x902 = INT8_MIN;
uint64_t x903 = UINT64_MAX;
volatile int16_t x908 = INT16_MAX;
int32_t x918 = INT32_MAX;
int64_t x921 = -1166728LL;
int64_t x923 = INT64_MAX;
uint64_t x935 = 21475201507LLU;
int32_t t193 = -54114433;
volatile int64_t x942 = INT64_MIN;
volatile int8_t x945 = -1;
volatile int32_t x947 = 3;
int32_t t195 = 25;
volatile int32_t t196 = -6;
int64_t x954 = INT64_MIN;
int8_t x965 = -60;
uint64_t x966 = UINT64_MAX;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int8_t x3 = -1;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -12;

    t0 = (((x1-x2)/x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x5 = INT32_MIN;
	volatile int64_t x6 = INT64_MIN;
	uint8_t x8 = 4U;
	volatile int32_t t1 = -360525;

    t1 = (((x5-x6)/x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -34;
	volatile int16_t x11 = -1;
	static int64_t x12 = 113440720592LL;

    t2 = (((x9-x10)/x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int64_t x13 = -34053309302LL;
	int32_t x15 = INT32_MAX;
	int16_t x16 = INT16_MAX;
	volatile int32_t t3 = -5;

    t3 = (((x13-x14)/x15)<=x16);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint8_t x18 = 78U;
	int32_t t4 = -1;

    t4 = (((x17-x18)/x19)<=x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int16_t x22 = 10967;
	int32_t x23 = INT32_MIN;

    t5 = (((x21-x22)/x23)<=x24);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = 108102969;
	uint8_t x30 = 54U;
	int16_t x31 = INT16_MAX;
	static volatile int32_t t6 = 1;

    t6 = (((x29-x30)/x31)<=x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int16_t x33 = INT16_MIN;
	static uint8_t x34 = UINT8_MAX;
	int8_t x35 = -9;
	int64_t x36 = INT64_MIN;
	static int32_t t7 = 1225329;

    t7 = (((x33-x34)/x35)<=x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x39 = UINT16_MAX;
	int32_t x40 = INT32_MIN;
	volatile int32_t t8 = -743574;

    t8 = (((x37-x38)/x39)<=x40);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	volatile uint16_t x42 = 3611U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 4134670;

    t9 = (((x41-x42)/x43)<=x44);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x45 = UINT32_MAX;
	int16_t x46 = 3779;
	int64_t x47 = INT64_MAX;
	volatile int32_t x48 = INT32_MIN;
	static volatile int32_t t10 = 1065271542;

    t10 = (((x45-x46)/x47)<=x48);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x58 = 9046U;
	uint64_t x59 = 46267700LLU;
	volatile int32_t t11 = 167773;

    t11 = (((x57-x58)/x59)<=x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = INT16_MAX;
	int32_t x62 = -688693141;
	volatile int32_t t12 = -1013384;

    t12 = (((x61-x62)/x63)<=x64);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x65 = 0;
	int32_t x66 = 3;
	int8_t x67 = -1;
	volatile uint8_t x68 = 48U;
	volatile int32_t t13 = 52;

    t13 = (((x65-x66)/x67)<=x68);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x69 = INT8_MIN;
	int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MAX;
	int8_t x72 = -1;
	int32_t t14 = 20891;

    t14 = (((x69-x70)/x71)<=x72);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x73 = INT64_MIN;
	static uint64_t x74 = UINT64_MAX;
	int16_t x75 = -25;
	static volatile uint64_t x76 = 18296202LLU;
	int32_t t15 = -66189214;

    t15 = (((x73-x74)/x75)<=x76);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	static uint16_t x84 = 1U;
	volatile int32_t t16 = 19377;

    t16 = (((x81-x82)/x83)<=x84);

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x86 = 43U;
	volatile int32_t x87 = INT32_MIN;
	volatile int32_t t17 = 63356221;

    t17 = (((x85-x86)/x87)<=x88);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t x89 = 434748LLU;
	static uint16_t x90 = 1U;
	static uint64_t x91 = 1030629497LLU;
	int32_t t18 = 644;

    t18 = (((x89-x90)/x91)<=x92);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x93 = INT8_MAX;
	int32_t x95 = INT32_MIN;
	static uint64_t x96 = 22LLU;
	static int32_t t19 = -105899733;

    t19 = (((x93-x94)/x95)<=x96);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x97 = -1;
	uint32_t x99 = 11285U;
	static int64_t x100 = INT64_MIN;
	static volatile int32_t t20 = -8599;

    t20 = (((x97-x98)/x99)<=x100);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x105 = INT8_MIN;
	static int16_t x106 = -233;
	int32_t x107 = -106078;
	int32_t t21 = 100817;

    t21 = (((x105-x106)/x107)<=x108);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int8_t x113 = INT8_MIN;
	int8_t x114 = 0;
	int8_t x115 = -1;
	int64_t x116 = -28281989245167632LL;
	static volatile int32_t t22 = -5554326;

    t22 = (((x113-x114)/x115)<=x116);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x117 = 797266;
	static uint32_t x118 = 109U;
	int64_t x119 = -34671433484637LL;
	int64_t x120 = INT64_MIN;
	int32_t t23 = 972679124;

    t23 = (((x117-x118)/x119)<=x120);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x122 = UINT32_MAX;
	uint64_t x123 = UINT64_MAX;
	int32_t t24 = 7972215;

    t24 = (((x121-x122)/x123)<=x124);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x125 = 30;
	uint64_t x126 = 6LLU;
	static int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MAX;
	static volatile int32_t t25 = -1449838;

    t25 = (((x125-x126)/x127)<=x128);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x129 = INT8_MAX;
	volatile int64_t x130 = -80022277LL;
	uint64_t x131 = UINT64_MAX;
	uint64_t x132 = 16591235325348644LLU;

    t26 = (((x129-x130)/x131)<=x132);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x133 = 9;
	int64_t x135 = INT64_MIN;
	int16_t x136 = -1;
	int32_t t27 = -7097;

    t27 = (((x133-x134)/x135)<=x136);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x137 = -10;
	static int32_t x138 = -1;
	int64_t x139 = -1LL;
	static uint32_t x140 = 1U;
	volatile int32_t t28 = -59;

    t28 = (((x137-x138)/x139)<=x140);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int16_t x141 = -267;
	uint8_t x142 = 1U;
	static uint32_t x143 = UINT32_MAX;
	uint8_t x144 = 31U;
	static int32_t t29 = -1639;

    t29 = (((x141-x142)/x143)<=x144);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x148 = 2852663221LL;
	volatile int32_t t30 = -31477;

    t30 = (((x145-x146)/x147)<=x148);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x157 = 29LL;
	int64_t x158 = -6361190647LL;
	int64_t x159 = 132480792944LL;
	int32_t x160 = -556;
	int32_t t31 = 923909848;

    t31 = (((x157-x158)/x159)<=x160);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 17652U;
	uint32_t x163 = 2066810U;

    t32 = (((x161-x162)/x163)<=x164);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x173 = UINT64_MAX;
	int8_t x174 = -22;
	volatile uint16_t x175 = UINT16_MAX;
	static int32_t t33 = -101840;

    t33 = (((x173-x174)/x175)<=x176);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static volatile int32_t x177 = -384;
	int8_t x178 = 1;
	static volatile int8_t x180 = 6;
	volatile int32_t t34 = -262502;

    t34 = (((x177-x178)/x179)<=x180);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x181 = UINT16_MAX;
	int64_t x182 = -1LL;
	static volatile int32_t x183 = INT32_MIN;
	int16_t x184 = -3;
	volatile int32_t t35 = -1056;

    t35 = (((x181-x182)/x183)<=x184);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x186 = -1;
	int8_t x188 = INT8_MAX;
	int32_t t36 = -213;

    t36 = (((x185-x186)/x187)<=x188);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x189 = -1;
	int16_t x190 = INT16_MIN;
	volatile int32_t x191 = INT32_MIN;
	int32_t t37 = -529911;

    t37 = (((x189-x190)/x191)<=x192);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x193 = -1;
	static int32_t x195 = -40330276;
	static volatile int32_t t38 = 2371;

    t38 = (((x193-x194)/x195)<=x196);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x198 = INT64_MIN;
	int32_t x199 = -1;
	static volatile int16_t x200 = 1;
	int32_t t39 = 5;

    t39 = (((x197-x198)/x199)<=x200);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x205 = 7;
	static int16_t x206 = -373;
	int64_t x207 = INT64_MIN;
	volatile int32_t t40 = -462;

    t40 = (((x205-x206)/x207)<=x208);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x213 = 1155613U;
	uint32_t x214 = 9U;
	volatile uint8_t x215 = 59U;
	volatile int64_t x216 = INT64_MIN;
	volatile int32_t t41 = 1;

    t41 = (((x213-x214)/x215)<=x216);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x221 = INT16_MAX;
	static int16_t x224 = -1;

    t42 = (((x221-x222)/x223)<=x224);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x225 = 22;
	uint32_t x226 = 7290U;
	int32_t x227 = INT32_MAX;
	volatile int32_t t43 = -24;

    t43 = (((x225-x226)/x227)<=x228);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x230 = INT8_MIN;
	static uint16_t x231 = 29281U;

    t44 = (((x229-x230)/x231)<=x232);

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	uint16_t x242 = 20U;
	int16_t x243 = INT16_MIN;
	static int16_t x244 = INT16_MIN;
	int32_t t45 = 8;

    t45 = (((x241-x242)/x243)<=x244);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x249 = INT16_MAX;
	uint64_t x250 = 3LLU;
	int16_t x251 = 379;
	int8_t x252 = 14;

    t46 = (((x249-x250)/x251)<=x252);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x253 = INT32_MIN;
	uint32_t x254 = 155669U;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	volatile int32_t t47 = 651183160;

    t47 = (((x253-x254)/x255)<=x256);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x257 = 6681LL;
	int32_t x258 = 31744518;
	static int16_t x259 = INT16_MIN;
	volatile int32_t t48 = -1106;

    t48 = (((x257-x258)/x259)<=x260);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x266 = 32969453U;
	int8_t x267 = -40;
	int64_t x268 = 790457052808LL;

    t49 = (((x265-x266)/x267)<=x268);

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x269 = INT32_MAX;
	uint32_t x270 = 37U;
	volatile uint8_t x271 = 1U;
	uint16_t x272 = 5146U;

    t50 = (((x269-x270)/x271)<=x272);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x273 = 109217472012LLU;
	volatile uint16_t x274 = 18U;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t51 = 600;

    t51 = (((x273-x274)/x275)<=x276);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x277 = 0;
	uint32_t x278 = 5453633U;
	static volatile int64_t x279 = -33097330964469LL;
	int64_t x280 = INT64_MAX;
	int32_t t52 = -10319847;

    t52 = (((x277-x278)/x279)<=x280);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x281 = -1;
	uint64_t x282 = 779LLU;
	volatile int32_t t53 = 923606501;

    t53 = (((x281-x282)/x283)<=x284);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x285 = 1455U;
	uint8_t x286 = 0U;
	int64_t x287 = INT64_MAX;
	volatile int32_t t54 = -6;

    t54 = (((x285-x286)/x287)<=x288);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x289 = UINT32_MAX;
	static int32_t x290 = INT32_MAX;
	int8_t x291 = 21;
	static volatile int32_t t55 = -398083;

    t55 = (((x289-x290)/x291)<=x292);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x297 = INT8_MAX;
	uint64_t x298 = 2227LLU;
	volatile int32_t t56 = -10358;

    t56 = (((x297-x298)/x299)<=x300);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x301 = 71U;
	int32_t x303 = INT32_MAX;
	int32_t t57 = -40956;

    t57 = (((x301-x302)/x303)<=x304);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int32_t x305 = 0;
	int32_t x306 = INT32_MAX;
	static uint64_t x307 = 27117342380268516LLU;
	int32_t x308 = 12542;

    t58 = (((x305-x306)/x307)<=x308);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t x309 = -1;
	int64_t x310 = INT64_MIN;
	volatile int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MIN;

    t59 = (((x309-x310)/x311)<=x312);

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x313 = -1;
	int16_t x314 = -1;
	volatile uint64_t x316 = 396LLU;

    t60 = (((x313-x314)/x315)<=x316);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x317 = 1;
	int16_t x319 = -1;
	int16_t x320 = INT16_MAX;
	int32_t t61 = -4969;

    t61 = (((x317-x318)/x319)<=x320);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x321 = -1;
	int16_t x322 = -1;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t62 = -102;

    t62 = (((x321-x322)/x323)<=x324);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x325 = INT32_MIN;
	volatile uint32_t x326 = 976820657U;
	uint32_t x327 = 8U;
	static volatile int32_t t63 = 4;

    t63 = (((x325-x326)/x327)<=x328);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int64_t x329 = INT64_MIN;
	volatile int64_t x330 = -1LL;
	int32_t x331 = -2398124;
	static uint8_t x332 = 7U;
	static volatile int32_t t64 = -361026633;

    t64 = (((x329-x330)/x331)<=x332);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x337 = INT16_MAX;
	volatile uint32_t x338 = 30U;
	uint16_t x339 = 72U;
	int8_t x340 = INT8_MIN;

    t65 = (((x337-x338)/x339)<=x340);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x341 = UINT16_MAX;
	int16_t x342 = -1;
	uint32_t x343 = 1891U;
	int8_t x344 = -1;

    t66 = (((x341-x342)/x343)<=x344);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x345 = 5509U;
	uint8_t x346 = 1U;
	static int64_t x347 = INT64_MIN;
	uint8_t x348 = 1U;
	volatile int32_t t67 = 873115;

    t67 = (((x345-x346)/x347)<=x348);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x349 = INT16_MIN;
	uint8_t x351 = UINT8_MAX;
	static int64_t x352 = 26533LL;

    t68 = (((x349-x350)/x351)<=x352);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static int8_t x353 = INT8_MIN;
	int16_t x354 = -143;
	uint16_t x355 = 3323U;
	int16_t x356 = -1;
	volatile int32_t t69 = -44;

    t69 = (((x353-x354)/x355)<=x356);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MAX;
	int32_t t70 = 49;

    t70 = (((x357-x358)/x359)<=x360);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x361 = INT8_MIN;
	int32_t x362 = -90481090;
	volatile uint16_t x363 = UINT16_MAX;
	int64_t x364 = 3LL;

    t71 = (((x361-x362)/x363)<=x364);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int64_t x365 = -2906782605549950LL;
	int64_t x366 = INT64_MIN;
	uint64_t x367 = 31434126888103484LLU;
	int32_t x368 = -1;
	static volatile int32_t t72 = -2;

    t72 = (((x365-x366)/x367)<=x368);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x371 = 338124U;
	uint8_t x372 = 109U;

    t73 = (((x369-x370)/x371)<=x372);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x373 = 10121U;
	int64_t x374 = 662LL;
	int32_t x375 = -1;
	uint64_t x376 = 90931875196704344LLU;
	volatile int32_t t74 = 821725;

    t74 = (((x373-x374)/x375)<=x376);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x377 = INT16_MIN;
	volatile int32_t x378 = -1;
	static volatile int8_t x379 = -1;
	volatile uint8_t x380 = 13U;
	volatile int32_t t75 = -125366481;

    t75 = (((x377-x378)/x379)<=x380);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x382 = 7;
	int8_t x383 = -52;
	volatile int16_t x384 = 322;
	volatile int32_t t76 = -31994;

    t76 = (((x381-x382)/x383)<=x384);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x387 = UINT16_MAX;
	uint16_t x388 = 719U;

    t77 = (((x385-x386)/x387)<=x388);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x390 = 0U;
	volatile int32_t x391 = 1;
	static int64_t x392 = INT64_MIN;
	int32_t t78 = -88;

    t78 = (((x389-x390)/x391)<=x392);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x394 = 1;
	static int8_t x395 = INT8_MIN;
	int8_t x396 = -1;
	int32_t t79 = -1;

    t79 = (((x393-x394)/x395)<=x396);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x397 = INT64_MIN;
	int8_t x398 = -3;
	volatile int16_t x400 = INT16_MIN;
	int32_t t80 = -6;

    t80 = (((x397-x398)/x399)<=x400);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x401 = -1LL;
	int16_t x402 = -10;
	uint16_t x403 = 26U;
	int32_t t81 = -178803894;

    t81 = (((x401-x402)/x403)<=x404);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x405 = INT16_MIN;
	volatile uint32_t x406 = 8911068U;
	volatile int16_t x407 = INT16_MIN;
	uint64_t x408 = 118273716677966LLU;
	static int32_t t82 = 1181563;

    t82 = (((x405-x406)/x407)<=x408);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x409 = INT16_MAX;
	int16_t x412 = -5588;
	volatile int32_t t83 = -108554;

    t83 = (((x409-x410)/x411)<=x412);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x413 = INT8_MIN;
	uint8_t x414 = 3U;
	int64_t x415 = INT64_MIN;
	volatile int8_t x416 = -1;

    t84 = (((x413-x414)/x415)<=x416);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x417 = 13102LLU;
	volatile int8_t x418 = INT8_MAX;
	int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MAX;
	int32_t t85 = -26;

    t85 = (((x417-x418)/x419)<=x420);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x421 = UINT32_MAX;
	int32_t x422 = -1;
	int16_t x423 = INT16_MAX;
	volatile int8_t x424 = 0;
	int32_t t86 = 33468781;

    t86 = (((x421-x422)/x423)<=x424);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x425 = 13;
	int64_t x426 = INT64_MAX;
	volatile int8_t x427 = INT8_MAX;
	volatile int64_t x428 = INT64_MIN;
	int32_t t87 = 3;

    t87 = (((x425-x426)/x427)<=x428);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x429 = -1;
	int32_t x430 = 76;
	int16_t x431 = -12812;
	int16_t x432 = INT16_MIN;

    t88 = (((x429-x430)/x431)<=x432);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint64_t x434 = UINT64_MAX;
	static uint16_t x435 = UINT16_MAX;
	uint16_t x436 = 41U;
	int32_t t89 = -45359998;

    t89 = (((x433-x434)/x435)<=x436);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x438 = -1LL;
	int64_t x439 = -84LL;
	int64_t x440 = INT64_MAX;
	volatile int32_t t90 = 1;

    t90 = (((x437-x438)/x439)<=x440);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x441 = -627;
	int16_t x442 = -56;
	static int16_t x443 = -141;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t91 = 795922691;

    t91 = (((x441-x442)/x443)<=x444);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x453 = INT16_MIN;
	int32_t x455 = INT32_MIN;
	static volatile int8_t x456 = INT8_MAX;
	volatile int32_t t92 = 236646;

    t92 = (((x453-x454)/x455)<=x456);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x457 = -1;
	uint64_t x458 = 3285LLU;
	int32_t x459 = INT32_MAX;
	volatile uint64_t x460 = UINT64_MAX;
	int32_t t93 = 22031;

    t93 = (((x457-x458)/x459)<=x460);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x461 = INT64_MAX;
	uint8_t x462 = 3U;
	int64_t x463 = INT64_MIN;
	int64_t x464 = INT64_MAX;
	int32_t t94 = -9249;

    t94 = (((x461-x462)/x463)<=x464);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x469 = -1;
	int32_t x470 = 343;
	int16_t x471 = 1392;
	volatile int16_t x472 = INT16_MAX;
	int32_t t95 = 3651;

    t95 = (((x469-x470)/x471)<=x472);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x473 = INT16_MAX;
	volatile int16_t x474 = -2;
	volatile int8_t x475 = -6;
	int16_t x476 = INT16_MAX;
	int32_t t96 = 242;

    t96 = (((x473-x474)/x475)<=x476);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint16_t x477 = UINT16_MAX;
	int8_t x478 = INT8_MAX;
	int64_t x479 = 3895010065598635520LL;
	int32_t x480 = -236640;

    t97 = (((x477-x478)/x479)<=x480);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x485 = 38;
	uint16_t x486 = 4091U;
	volatile uint8_t x488 = 2U;
	int32_t t98 = 149583828;

    t98 = (((x485-x486)/x487)<=x488);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int8_t x489 = INT8_MIN;
	uint64_t x490 = 671LLU;
	static int16_t x491 = INT16_MIN;
	volatile int32_t t99 = -3;

    t99 = (((x489-x490)/x491)<=x492);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x497 = -3;
	int16_t x498 = -2411;
	int16_t x499 = -1;
	int64_t x500 = INT64_MIN;
	int32_t t100 = -3;

    t100 = (((x497-x498)/x499)<=x500);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x501 = INT8_MIN;
	int64_t x502 = -1LL;
	volatile int16_t x503 = 3;
	uint16_t x504 = 332U;
	volatile int32_t t101 = 350136399;

    t101 = (((x501-x502)/x503)<=x504);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x506 = 30U;
	static volatile uint32_t x507 = UINT32_MAX;
	static uint32_t x508 = 68595737U;
	int32_t t102 = -164111862;

    t102 = (((x505-x506)/x507)<=x508);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x513 = -1;
	static volatile uint8_t x515 = UINT8_MAX;
	int32_t t103 = 1;

    t103 = (((x513-x514)/x515)<=x516);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x518 = INT16_MAX;
	int32_t x519 = INT32_MAX;
	static int16_t x520 = -1;
	static volatile int32_t t104 = 1232674;

    t104 = (((x517-x518)/x519)<=x520);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x521 = UINT64_MAX;
	uint8_t x522 = 2U;
	uint8_t x523 = 22U;
	uint32_t x524 = 162485384U;
	int32_t t105 = -1;

    t105 = (((x521-x522)/x523)<=x524);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x529 = INT16_MIN;
	static uint8_t x530 = UINT8_MAX;
	int32_t x531 = INT32_MAX;
	static int32_t x532 = INT32_MIN;
	volatile int32_t t106 = 0;

    t106 = (((x529-x530)/x531)<=x532);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x533 = 7041277616479LL;
	uint64_t x534 = 1LLU;
	uint64_t x535 = 6166LLU;

    t107 = (((x533-x534)/x535)<=x536);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x537 = INT16_MIN;
	int8_t x540 = INT8_MIN;
	static volatile int32_t t108 = -17;

    t108 = (((x537-x538)/x539)<=x540);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x541 = 3U;
	volatile int32_t t109 = 425312;

    t109 = (((x541-x542)/x543)<=x544);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x545 = INT32_MIN;
	volatile int16_t x546 = INT16_MIN;
	static int16_t x547 = -1;
	static int16_t x548 = INT16_MIN;
	volatile int32_t t110 = -64533064;

    t110 = (((x545-x546)/x547)<=x548);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x549 = 0;
	static int64_t x551 = INT64_MAX;
	volatile int32_t x552 = -1;
	static volatile int32_t t111 = -7218;

    t111 = (((x549-x550)/x551)<=x552);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x553 = -1LL;
	static int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MAX;
	static uint8_t x556 = 21U;
	int32_t t112 = 1;

    t112 = (((x553-x554)/x555)<=x556);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x561 = -1;
	int16_t x562 = -14424;
	uint16_t x563 = 240U;
	uint64_t x564 = UINT64_MAX;
	static volatile int32_t t113 = -1639;

    t113 = (((x561-x562)/x563)<=x564);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x565 = 1292170058011963950LL;
	volatile int32_t x566 = INT32_MIN;
	int8_t x567 = INT8_MIN;
	int32_t x568 = -1;

    t114 = (((x565-x566)/x567)<=x568);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x569 = 382LLU;
	volatile int8_t x570 = -3;
	volatile uint16_t x571 = UINT16_MAX;
	static int32_t x572 = -1;

    t115 = (((x569-x570)/x571)<=x572);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int8_t x573 = 0;
	static uint64_t x574 = 1788425985414LLU;
	volatile int32_t x575 = INT32_MIN;
	int8_t x576 = -1;
	int32_t t116 = 19;

    t116 = (((x573-x574)/x575)<=x576);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x577 = INT16_MIN;
	int16_t x578 = INT16_MIN;
	volatile int64_t x579 = INT64_MAX;
	static uint8_t x580 = UINT8_MAX;
	static int32_t t117 = 1149999;

    t117 = (((x577-x578)/x579)<=x580);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x581 = 124U;
	int16_t x582 = -1;
	uint32_t x583 = 20538327U;
	volatile int32_t t118 = -3274;

    t118 = (((x581-x582)/x583)<=x584);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x587 = INT8_MIN;
	volatile uint16_t x588 = UINT16_MAX;
	volatile int32_t t119 = 2739541;

    t119 = (((x585-x586)/x587)<=x588);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x589 = -1;
	int8_t x590 = 1;
	int8_t x591 = INT8_MAX;
	int32_t t120 = -29;

    t120 = (((x589-x590)/x591)<=x592);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x593 = INT8_MIN;
	int32_t x594 = INT32_MIN;
	uint64_t x595 = UINT64_MAX;
	uint16_t x596 = 378U;

    t121 = (((x593-x594)/x595)<=x596);

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x597 = -46;
	uint32_t x598 = 412300924U;
	int64_t x599 = -1LL;

    t122 = (((x597-x598)/x599)<=x600);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x602 = 21949LLU;
	int64_t x603 = INT64_MAX;
	int8_t x604 = INT8_MIN;

    t123 = (((x601-x602)/x603)<=x604);

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x606 = 159615562962663LL;
	static uint8_t x607 = UINT8_MAX;
	uint16_t x608 = 14U;
	int32_t t124 = 93;

    t124 = (((x605-x606)/x607)<=x608);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	static int16_t x610 = INT16_MIN;
	uint64_t x611 = UINT64_MAX;
	uint32_t x612 = 551378580U;
	int32_t t125 = 0;

    t125 = (((x609-x610)/x611)<=x612);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x613 = INT8_MAX;
	volatile uint16_t x614 = 577U;
	static uint32_t x615 = UINT32_MAX;
	uint8_t x616 = 31U;
	volatile int32_t t126 = 0;

    t126 = (((x613-x614)/x615)<=x616);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x617 = 148LL;
	uint64_t x618 = 11307851084882086LLU;
	volatile int8_t x619 = 6;
	int32_t t127 = 26;

    t127 = (((x617-x618)/x619)<=x620);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile int8_t x621 = INT8_MAX;
	int16_t x622 = -1;
	volatile uint64_t x623 = 332497337170316534LLU;
	int32_t x624 = INT32_MAX;
	volatile int32_t t128 = -1515449;

    t128 = (((x621-x622)/x623)<=x624);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x637 = -1;
	int64_t x638 = INT64_MAX;
	int16_t x640 = -1;
	int32_t t129 = 2;

    t129 = (((x637-x638)/x639)<=x640);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x641 = -1;
	int32_t x642 = -1;
	int64_t x643 = INT64_MIN;
	uint8_t x644 = 59U;
	volatile int32_t t130 = 134404584;

    t130 = (((x641-x642)/x643)<=x644);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x647 = -1LL;
	uint8_t x648 = 3U;
	volatile int32_t t131 = -85805754;

    t131 = (((x645-x646)/x647)<=x648);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x649 = 193U;
	volatile int8_t x650 = INT8_MIN;
	uint32_t x651 = 1618669141U;
	int32_t x652 = -1;
	volatile int32_t t132 = -3321;

    t132 = (((x649-x650)/x651)<=x652);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x653 = INT64_MAX;
	uint32_t x654 = 1529914240U;
	volatile uint32_t x655 = UINT32_MAX;
	static int8_t x656 = -1;
	volatile int32_t t133 = 28;

    t133 = (((x653-x654)/x655)<=x656);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x657 = INT16_MIN;
	volatile int32_t x659 = -1;
	int8_t x660 = 49;
	static volatile int32_t t134 = 1;

    t134 = (((x657-x658)/x659)<=x660);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x661 = INT8_MIN;
	int16_t x662 = -1;
	int8_t x663 = 2;
	uint16_t x664 = 4898U;
	volatile int32_t t135 = 0;

    t135 = (((x661-x662)/x663)<=x664);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x665 = 82U;
	int32_t x666 = INT32_MAX;
	volatile uint64_t x667 = 3204077501832911405LLU;
	int32_t t136 = 90182;

    t136 = (((x665-x666)/x667)<=x668);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x674 = INT8_MAX;
	int16_t x676 = -1;

    t137 = (((x673-x674)/x675)<=x676);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x677 = 6807724492LLU;
	int8_t x678 = -1;
	int64_t x679 = -1LL;
	int64_t x680 = INT64_MIN;
	int32_t t138 = -6698;

    t138 = (((x677-x678)/x679)<=x680);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x685 = UINT32_MAX;
	static uint16_t x687 = 6226U;
	int32_t x688 = INT32_MAX;
	static int32_t t139 = 3838;

    t139 = (((x685-x686)/x687)<=x688);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x689 = INT16_MIN;
	static uint16_t x690 = UINT16_MAX;
	uint32_t x691 = UINT32_MAX;
	static volatile int32_t t140 = -4855;

    t140 = (((x689-x690)/x691)<=x692);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x693 = INT16_MIN;
	uint64_t x695 = 25LLU;
	int32_t t141 = -2632;

    t141 = (((x693-x694)/x695)<=x696);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x698 = INT8_MAX;
	int64_t x700 = INT64_MIN;
	int32_t t142 = 157;

    t142 = (((x697-x698)/x699)<=x700);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint16_t x702 = 1U;
	uint64_t x704 = UINT64_MAX;

    t143 = (((x701-x702)/x703)<=x704);

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x705 = 1246445U;
	static int16_t x706 = -1;
	static int16_t x707 = -5;
	static volatile int8_t x708 = 3;
	static int32_t t144 = -753;

    t144 = (((x705-x706)/x707)<=x708);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x709 = 6305350937LLU;
	static int16_t x710 = 0;
	int32_t t145 = 7;

    t145 = (((x709-x710)/x711)<=x712);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int8_t x713 = 47;
	int8_t x714 = INT8_MIN;
	int64_t x715 = -6951159094LL;
	int64_t x716 = INT64_MIN;
	volatile int32_t t146 = -868181813;

    t146 = (((x713-x714)/x715)<=x716);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x717 = 1772812;
	volatile uint64_t x718 = 136814391607706LLU;
	static volatile uint8_t x719 = 39U;
	int32_t t147 = 15;

    t147 = (((x717-x718)/x719)<=x720);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x721 = 46742716186215LL;
	static int32_t x722 = -1;
	volatile int16_t x723 = INT16_MIN;
	static int32_t x724 = 6442;
	volatile int32_t t148 = -246;

    t148 = (((x721-x722)/x723)<=x724);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x725 = 3922945882951221207LLU;
	static int64_t x726 = INT64_MIN;
	uint8_t x727 = 6U;
	volatile int8_t x728 = -1;
	static int32_t t149 = 6;

    t149 = (((x725-x726)/x727)<=x728);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x730 = 127683477LLU;
	int16_t x731 = 2;
	uint16_t x732 = UINT16_MAX;
	volatile int32_t t150 = 3959;

    t150 = (((x729-x730)/x731)<=x732);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x733 = -7;
	uint32_t x734 = UINT32_MAX;
	int8_t x735 = -1;
	volatile int32_t x736 = -1;
	int32_t t151 = -1697;

    t151 = (((x733-x734)/x735)<=x736);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x737 = INT32_MIN;
	static uint8_t x739 = UINT8_MAX;
	uint8_t x740 = UINT8_MAX;
	volatile int32_t t152 = 110;

    t152 = (((x737-x738)/x739)<=x740);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x742 = UINT64_MAX;
	static volatile uint8_t x743 = UINT8_MAX;
	int16_t x744 = -2492;
	volatile int32_t t153 = 3989207;

    t153 = (((x741-x742)/x743)<=x744);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x751 = -1;
	volatile int8_t x752 = -1;
	volatile int32_t t154 = -1;

    t154 = (((x749-x750)/x751)<=x752);

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x753 = -4;
	int64_t x754 = -1LL;
	int16_t x755 = -1;

    t155 = (((x753-x754)/x755)<=x756);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x758 = INT8_MIN;
	uint32_t x759 = UINT32_MAX;
	int16_t x760 = INT16_MIN;
	volatile int32_t t156 = 19008781;

    t156 = (((x757-x758)/x759)<=x760);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x761 = -10713;
	int32_t x762 = INT32_MIN;
	int8_t x763 = -1;
	volatile int32_t t157 = -1;

    t157 = (((x761-x762)/x763)<=x764);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x765 = 9687LLU;
	uint32_t x766 = UINT32_MAX;
	int16_t x767 = -1;
	volatile int32_t t158 = 0;

    t158 = (((x765-x766)/x767)<=x768);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x770 = INT8_MIN;
	int8_t x771 = INT8_MAX;
	volatile int32_t x772 = INT32_MIN;

    t159 = (((x769-x770)/x771)<=x772);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	static int16_t x773 = INT16_MAX;
	int8_t x774 = 1;
	int16_t x775 = 25;
	volatile int32_t t160 = 220;

    t160 = (((x773-x774)/x775)<=x776);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x777 = 5206LL;
	volatile uint8_t x778 = 29U;
	int64_t x779 = -1LL;
	volatile int32_t x780 = INT32_MIN;
	volatile int32_t t161 = -222338994;

    t161 = (((x777-x778)/x779)<=x780);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x781 = 0U;
	static int32_t x782 = 46446331;
	volatile uint32_t x783 = UINT32_MAX;
	static volatile uint16_t x784 = 13U;
	volatile int32_t t162 = -126406;

    t162 = (((x781-x782)/x783)<=x784);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x793 = INT8_MAX;
	uint8_t x794 = UINT8_MAX;
	int16_t x795 = 165;
	int16_t x796 = 10;
	volatile int32_t t163 = 546422216;

    t163 = (((x793-x794)/x795)<=x796);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int8_t x805 = -60;
	int64_t x806 = -1LL;
	int8_t x807 = 2;
	uint16_t x808 = UINT16_MAX;

    t164 = (((x805-x806)/x807)<=x808);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x809 = 14;
	uint32_t x811 = 500724U;

    t165 = (((x809-x810)/x811)<=x812);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x813 = INT8_MIN;
	int64_t x814 = INT64_MIN;
	int16_t x815 = INT16_MIN;
	volatile int32_t x816 = INT32_MAX;
	volatile int32_t t166 = 28504661;

    t166 = (((x813-x814)/x815)<=x816);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint8_t x817 = 66U;
	volatile int32_t x819 = INT32_MIN;
	volatile int32_t t167 = -37119;

    t167 = (((x817-x818)/x819)<=x820);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x821 = -1;
	int64_t x823 = -554522357929862990LL;
	volatile int32_t t168 = -5744;

    t168 = (((x821-x822)/x823)<=x824);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x828 = INT16_MAX;
	int32_t t169 = -7791;

    t169 = (((x825-x826)/x827)<=x828);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x830 = 6;
	static uint32_t x831 = 31U;
	int64_t x832 = INT64_MIN;
	int32_t t170 = -411;

    t170 = (((x829-x830)/x831)<=x832);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int64_t x833 = -134423165191LL;
	int32_t x834 = -6854;
	uint64_t x835 = 1907152518583771822LLU;
	uint8_t x836 = 1U;
	int32_t t171 = -107;

    t171 = (((x833-x834)/x835)<=x836);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x838 = 6U;
	volatile uint32_t x839 = UINT32_MAX;
	static uint64_t x840 = 1310855712549332LLU;
	volatile int32_t t172 = 23908615;

    t172 = (((x837-x838)/x839)<=x840);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x842 = 1887;
	int64_t x843 = -1LL;
	volatile int32_t t173 = -816;

    t173 = (((x841-x842)/x843)<=x844);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x845 = 5;
	static int32_t t174 = 36305;

    t174 = (((x845-x846)/x847)<=x848);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x849 = -1;
	uint32_t x851 = UINT32_MAX;
	int32_t x852 = -15773671;
	int32_t t175 = -7326;

    t175 = (((x849-x850)/x851)<=x852);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int8_t x853 = -12;
	static int16_t x854 = INT16_MIN;
	uint64_t x855 = 62509484982LLU;
	static volatile int32_t t176 = 3;

    t176 = (((x853-x854)/x855)<=x856);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x857 = 6529U;
	volatile int8_t x858 = -1;
	int64_t x859 = 289LL;
	uint32_t x860 = UINT32_MAX;
	volatile int32_t t177 = 3776646;

    t177 = (((x857-x858)/x859)<=x860);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x861 = 5U;
	uint32_t x862 = 54433708U;
	volatile uint16_t x863 = UINT16_MAX;
	uint16_t x864 = UINT16_MAX;
	int32_t t178 = -11609;

    t178 = (((x861-x862)/x863)<=x864);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint64_t x865 = UINT64_MAX;
	static uint8_t x866 = UINT8_MAX;
	volatile int32_t x867 = INT32_MIN;
	int64_t x868 = -1LL;
	int32_t t179 = 254275443;

    t179 = (((x865-x866)/x867)<=x868);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x869 = -1;
	int64_t x870 = 2529021527LL;
	volatile int16_t x872 = INT16_MAX;
	int32_t t180 = -4531945;

    t180 = (((x869-x870)/x871)<=x872);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x877 = 9;
	uint32_t x878 = 2051950272U;
	int8_t x879 = -1;
	int16_t x880 = 2838;

    t181 = (((x877-x878)/x879)<=x880);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x881 = INT64_MIN;
	int32_t x883 = INT32_MIN;
	volatile int16_t x884 = INT16_MAX;

    t182 = (((x881-x882)/x883)<=x884);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint8_t x886 = 2U;
	int16_t x887 = INT16_MIN;
	uint32_t x888 = 19896563U;
	static int32_t t183 = -12909236;

    t183 = (((x885-x886)/x887)<=x888);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x890 = INT8_MIN;
	static uint32_t x892 = UINT32_MAX;
	volatile int32_t t184 = 1734480;

    t184 = (((x889-x890)/x891)<=x892);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x893 = 375278;
	static uint64_t x894 = UINT64_MAX;
	static int64_t x895 = INT64_MIN;
	volatile int32_t t185 = 128972116;

    t185 = (((x893-x894)/x895)<=x896);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x897 = 15;
	int32_t x898 = 2503173;
	static int8_t x899 = INT8_MAX;
	uint64_t x900 = 2180LLU;
	int32_t t186 = -18;

    t186 = (((x897-x898)/x899)<=x900);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x901 = INT8_MIN;
	int64_t x904 = 2852971LL;
	volatile int32_t t187 = 103197115;

    t187 = (((x901-x902)/x903)<=x904);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int64_t x905 = 1080LL;
	static uint64_t x906 = UINT64_MAX;
	uint64_t x907 = UINT64_MAX;
	volatile int32_t t188 = -1;

    t188 = (((x905-x906)/x907)<=x908);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x913 = -1;
	int8_t x914 = 1;
	uint32_t x915 = 148U;
	int8_t x916 = INT8_MIN;
	static volatile int32_t t189 = -1100;

    t189 = (((x913-x914)/x915)<=x916);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x917 = -1LL;
	int16_t x919 = -1;
	uint64_t x920 = 14742233LLU;
	int32_t t190 = 27;

    t190 = (((x917-x918)/x919)<=x920);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x922 = 608;
	uint32_t x924 = UINT32_MAX;
	int32_t t191 = -964;

    t191 = (((x921-x922)/x923)<=x924);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x925 = 59751373;
	uint64_t x926 = UINT64_MAX;
	uint16_t x927 = UINT16_MAX;
	int64_t x928 = -59463536275406614LL;
	int32_t t192 = 2;

    t192 = (((x925-x926)/x927)<=x928);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x933 = 17926032734806999LL;
	static uint64_t x934 = 13425655LLU;
	int8_t x936 = INT8_MIN;

    t193 = (((x933-x934)/x935)<=x936);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x941 = -39802375249502LL;
	static int16_t x943 = 2;
	uint16_t x944 = UINT16_MAX;
	volatile int32_t t194 = -238924;

    t194 = (((x941-x942)/x943)<=x944);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x946 = INT64_MIN;
	volatile int8_t x948 = -1;

    t195 = (((x945-x946)/x947)<=x948);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x949 = 2;
	int16_t x950 = INT16_MIN;
	uint8_t x951 = UINT8_MAX;
	volatile uint64_t x952 = UINT64_MAX;

    t196 = (((x949-x950)/x951)<=x952);

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x953 = -1;
	int8_t x955 = 25;
	static int32_t x956 = 17110323;
	int32_t t197 = -1;

    t197 = (((x953-x954)/x955)<=x956);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x961 = 272881571551259LLU;
	static uint32_t x962 = 126401429U;
	volatile uint16_t x963 = UINT16_MAX;
	int64_t x964 = -1LL;
	int32_t t198 = 2;

    t198 = (((x961-x962)/x963)<=x964);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x967 = -2152901590745LL;
	static int32_t x968 = INT32_MAX;
	static int32_t t199 = 98;

    t199 = (((x965-x966)/x967)<=x968);

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

