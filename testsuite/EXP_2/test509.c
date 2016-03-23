
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

int8_t x3 = -1;
int32_t x13 = INT32_MIN;
uint32_t x17 = 1980625528U;
static uint64_t x20 = 5503783971977249122LLU;
int8_t x26 = 0;
uint8_t x27 = UINT8_MAX;
volatile uint16_t x32 = 4U;
int32_t t5 = 3616;
int8_t x37 = INT8_MAX;
uint64_t x53 = 85534276LLU;
uint8_t x61 = UINT8_MAX;
int16_t x62 = 19;
static int8_t x79 = -1;
int16_t x82 = -1;
uint64_t x83 = 95094032021466921LLU;
volatile int8_t x84 = INT8_MIN;
uint32_t x85 = UINT32_MAX;
int32_t x88 = 919552863;
int32_t x110 = -1;
uint32_t x112 = 27236732U;
uint32_t t16 = 849731U;
uint16_t x115 = 3785U;
uint64_t x118 = UINT64_MAX;
int32_t x119 = 62;
int32_t t18 = -115;
int8_t x133 = -1;
uint32_t x134 = 616983U;
int32_t x141 = -1;
static volatile uint8_t x146 = 114U;
volatile int64_t x149 = INT64_MIN;
volatile int32_t t26 = 14102301;
int8_t x162 = 0;
static uint8_t x163 = 2U;
int32_t x164 = INT32_MIN;
uint64_t x183 = UINT64_MAX;
static uint16_t x186 = 1983U;
int64_t x188 = -1LL;
int64_t t31 = -530802447435LL;
uint8_t x199 = UINT8_MAX;
static int8_t x202 = 0;
uint32_t x210 = 10375U;
int64_t x215 = -1LL;
int8_t x226 = INT8_MIN;
static uint8_t x232 = UINT8_MAX;
int64_t x235 = 101142LL;
uint16_t x242 = 7956U;
int32_t x253 = INT32_MIN;
volatile int32_t x259 = -1;
uint64_t x265 = UINT64_MAX;
uint8_t x267 = 72U;
volatile uint64_t x274 = 13394196639702475LLU;
int8_t x276 = -1;
static int32_t t47 = -3;
int32_t t48 = -8205388;
volatile uint32_t t49 = 661U;
int32_t t51 = -2615;
volatile int64_t t52 = -514990506557695353LL;
int64_t x308 = INT64_MIN;
int16_t x318 = INT16_MIN;
volatile int8_t x319 = INT8_MAX;
static volatile int32_t t58 = -11;
uint64_t x340 = 12840543855325LLU;
int8_t x346 = 1;
int64_t x348 = INT64_MIN;
int8_t x349 = INT8_MIN;
uint32_t x361 = 72U;
int8_t x363 = INT8_MIN;
volatile int64_t t66 = 50218877LL;
volatile int32_t t68 = 16857712;
int64_t x394 = -1LL;
volatile int16_t x405 = INT16_MIN;
static int32_t t73 = -1;
uint8_t x418 = 0U;
uint32_t x422 = 7U;
int64_t t76 = 105535197297LL;
int8_t x429 = INT8_MIN;
static int32_t x431 = INT32_MIN;
volatile uint32_t t79 = 49U;
volatile int16_t x444 = -1;
uint8_t x451 = 18U;
volatile int32_t t81 = -4204832;
static int16_t x455 = INT16_MAX;
static uint64_t x460 = 5LLU;
int16_t x467 = INT16_MIN;
uint16_t x472 = 3U;
volatile int64_t x474 = -1LL;
int8_t x478 = -1;
volatile int8_t x480 = 1;
int64_t x481 = INT64_MAX;
static volatile uint16_t x483 = UINT16_MAX;
volatile int16_t x485 = 0;
int16_t x488 = INT16_MAX;
static int8_t x489 = -6;
uint32_t x506 = 118U;
static volatile int32_t x519 = -15856012;
static int16_t x524 = -1;
uint8_t x527 = 0U;
int32_t t97 = 15122;
uint8_t x530 = UINT8_MAX;
int32_t x531 = -1;
uint16_t x532 = 409U;
volatile int16_t x537 = -1;
static int32_t x539 = 5756;
uint32_t x555 = 779918U;
uint16_t x558 = 22U;
volatile int32_t t105 = -16;
static volatile uint64_t x580 = 5035706091262LLU;
volatile int16_t x586 = INT16_MIN;
int32_t t108 = -974101719;
int8_t x601 = INT8_MIN;
uint8_t x603 = 0U;
int8_t x604 = INT8_MIN;
int64_t t112 = -77843767857496979LL;
int32_t x614 = -1;
volatile int32_t x615 = INT32_MAX;
volatile uint8_t x616 = 3U;
int16_t x624 = INT16_MIN;
int8_t x630 = INT8_MIN;
int16_t x633 = 0;
int64_t t118 = -8061611053LL;
int16_t x661 = INT16_MIN;
int32_t x662 = 59801;
int32_t x664 = INT32_MAX;
int16_t x667 = INT16_MIN;
static uint64_t x668 = 22851618589031LLU;
uint8_t x675 = 0U;
static int32_t x676 = -1996876;
static volatile int32_t t124 = 136532027;
volatile int8_t x677 = -3;
static uint64_t x689 = UINT64_MAX;
uint32_t x690 = 701029U;
static volatile int32_t t130 = -5520754;
int16_t x704 = INT16_MAX;
static int16_t x711 = INT16_MIN;
int32_t x714 = -1;
static uint8_t x737 = 13U;
static uint32_t x747 = 81U;
uint8_t x748 = UINT8_MAX;
volatile int32_t t141 = -19235;
int16_t x753 = -6;
volatile int16_t x754 = INT16_MAX;
int16_t x755 = -16060;
volatile int64_t x756 = -35583472119153LL;
uint64_t x760 = UINT64_MAX;
volatile uint64_t t144 = 55317LLU;
int32_t x763 = 828396;
static int32_t t145 = 446;
uint64_t x767 = 167388321725171813LLU;
uint32_t x772 = UINT32_MAX;
static int16_t x790 = -1;
static int32_t x791 = -1;
int8_t x804 = INT8_MAX;
static int32_t t150 = -7818;
volatile uint32_t x805 = UINT32_MAX;
int8_t x818 = INT8_MAX;
uint16_t x825 = 1U;
volatile int32_t t155 = -1;
uint16_t x847 = 5U;
int64_t x859 = 3681621LL;
volatile uint8_t x869 = 21U;
static volatile int16_t x873 = -1;
int16_t x874 = INT16_MIN;
int32_t x881 = INT32_MIN;
volatile int16_t x884 = INT16_MIN;
int32_t t162 = 87985176;
uint8_t x886 = 0U;
volatile int32_t t163 = -341849;
uint8_t x893 = 120U;
uint8_t x894 = UINT8_MAX;
static volatile int64_t x896 = 510329372407971LL;
uint16_t x897 = UINT16_MAX;
int8_t x904 = -1;
volatile int32_t t166 = 25;
int16_t x906 = -1;
uint64_t x907 = 136752113733LLU;
int32_t x914 = -1;
int32_t t169 = 3141;
int8_t x919 = INT8_MIN;
volatile uint32_t t170 = 2014U;
volatile uint8_t x925 = 13U;
volatile int32_t t172 = 7355;
uint32_t x941 = 913030U;
uint8_t x942 = UINT8_MAX;
static int16_t x943 = 63;
uint64_t x951 = 66297LLU;
volatile int16_t x963 = -1;
static volatile int16_t x970 = -14;
int32_t x972 = INT32_MIN;
static uint32_t x973 = 181940U;
static int32_t x980 = -2689962;
uint8_t x982 = 24U;
static volatile int32_t t181 = 1398;
volatile int32_t x993 = -8782117;
int8_t x994 = INT8_MIN;
uint16_t x997 = 4U;
static volatile int64_t t183 = 11119783975563LL;
static uint64_t t184 = 86183LLU;
volatile uint32_t x1010 = 85U;
volatile int16_t x1011 = -1;
static volatile uint32_t x1014 = 629164U;
static volatile int32_t t187 = -609;
volatile int32_t t189 = 2;
int16_t x1043 = -1;
uint64_t x1046 = 6LLU;
int16_t x1047 = INT16_MIN;
uint8_t x1048 = 32U;
uint64_t x1049 = 15648803899881653LLU;
int8_t x1052 = 2;
static uint32_t x1055 = 124672U;
int8_t x1066 = INT8_MIN;
uint16_t x1071 = 18U;
int8_t x1077 = INT8_MIN;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	volatile int8_t x2 = 57;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = -1;

    t0 = ((x1>(x2*x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MAX;
	volatile uint8_t x7 = 0U;
	volatile int8_t x8 = -1;
	int32_t t1 = 439;

    t1 = ((x5>(x6*x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x14 = INT8_MAX;
	static int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	static int32_t t2 = 4226;

    t2 = ((x13>(x14*x15))%x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	volatile uint64_t t3 = 4059280890084589LLU;

    t3 = ((x17>(x18*x19))%x20);

    if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x25 = -1;
	int8_t x28 = 1;
	int32_t t4 = -2353;

    t4 = ((x25>(x26*x27))%x28);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x29 = 698461LLU;
	int32_t x30 = INT32_MIN;
	volatile uint64_t x31 = UINT64_MAX;

    t5 = ((x29>(x30*x31))%x32);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 4596962U;
	int8_t x34 = 1;
	static volatile int64_t x35 = -1LL;
	static int16_t x36 = INT16_MAX;
	int32_t t6 = -120;

    t6 = ((x33>(x34*x35))%x36);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x38 = 36957LLU;
	uint8_t x39 = 7U;
	volatile uint16_t x40 = 6585U;
	int32_t t7 = 0;

    t7 = ((x37>(x38*x39))%x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = INT8_MAX;
	uint64_t x42 = UINT64_MAX;
	static int16_t x43 = -3;
	volatile uint64_t x44 = 191819953969363656LLU;
	uint64_t t8 = 6181925491470464243LLU;

    t8 = ((x41>(x42*x43))%x44);

    if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int16_t x54 = -1;
	uint64_t x55 = 63203829LLU;
	volatile uint8_t x56 = UINT8_MAX;
	int32_t t9 = 734;

    t9 = ((x53>(x54*x55))%x56);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int32_t x63 = -36888;
	static uint16_t x64 = 13U;
	volatile int32_t t10 = -208188100;

    t10 = ((x61>(x62*x63))%x64);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x65 = -1;
	uint8_t x66 = 14U;
	volatile uint32_t x67 = 65567960U;
	uint64_t x68 = 60383184925LLU;
	uint64_t t11 = 9897921204LLU;

    t11 = ((x65>(x66*x67))%x68);

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x77 = 7209U;
	volatile int16_t x78 = INT16_MIN;
	uint32_t x80 = 2U;
	static uint32_t t12 = 0U;

    t12 = ((x77>(x78*x79))%x80);

    if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x81 = 6U;
	int32_t t13 = 12362;

    t13 = ((x81>(x82*x83))%x84);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint64_t x86 = 27499287725LLU;
	int64_t x87 = INT64_MAX;
	volatile int32_t t14 = -1110;

    t14 = ((x85>(x86*x87))%x88);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x93 = INT32_MIN;
	uint8_t x94 = 11U;
	uint64_t x95 = UINT64_MAX;
	volatile int64_t x96 = -1LL;
	int64_t t15 = 126866784LL;

    t15 = ((x93>(x94*x95))%x96);

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x109 = 42777705LL;
	int8_t x111 = 3;

    t16 = ((x109>(x110*x111))%x112);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x113 = 29;
	int8_t x114 = INT8_MAX;
	static int16_t x116 = -2111;
	static int32_t t17 = -642338610;

    t17 = ((x113>(x114*x115))%x116);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint16_t x117 = UINT16_MAX;
	static int8_t x120 = INT8_MAX;

    t18 = ((x117>(x118*x119))%x120);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x121 = 1962U;
	uint8_t x122 = 1U;
	static uint16_t x123 = 2335U;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t19 = -4;

    t19 = ((x121>(x122*x123))%x124);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x135 = INT8_MIN;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t20 = -2255;

    t20 = ((x133>(x134*x135))%x136);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x137 = -395803;
	volatile uint64_t x138 = UINT64_MAX;
	volatile uint8_t x139 = 100U;
	int16_t x140 = -1;
	int32_t t21 = -32;

    t21 = ((x137>(x138*x139))%x140);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	int32_t t22 = -388363;

    t22 = ((x141>(x142*x143))%x144);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x145 = UINT8_MAX;
	static uint16_t x147 = 49U;
	uint16_t x148 = 71U;
	int32_t t23 = 498851;

    t23 = ((x145>(x146*x147))%x148);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x150 = UINT64_MAX;
	volatile int8_t x151 = 38;
	uint8_t x152 = 18U;
	static volatile int32_t t24 = 9;

    t24 = ((x149>(x150*x151))%x152);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x153 = -966;
	static volatile int8_t x154 = 1;
	volatile int64_t x155 = 698LL;
	volatile int64_t x156 = INT64_MIN;
	static int64_t t25 = -83512429950687319LL;

    t25 = ((x153>(x154*x155))%x156);

    if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x157 = INT8_MIN;
	uint64_t x158 = 711502174076LLU;
	volatile uint32_t x159 = 0U;
	volatile int8_t x160 = INT8_MIN;

    t26 = ((x157>(x158*x159))%x160);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x161 = UINT16_MAX;
	static int32_t t27 = -162668;

    t27 = ((x161>(x162*x163))%x164);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int64_t x173 = -1LL;
	int32_t x174 = INT32_MIN;
	uint32_t x175 = 1U;
	int32_t x176 = INT32_MAX;
	volatile int32_t t28 = 4323042;

    t28 = ((x173>(x174*x175))%x176);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x177 = -1;
	int16_t x178 = INT16_MIN;
	volatile uint8_t x179 = 58U;
	int64_t x180 = 4LL;
	int64_t t29 = -59312381389LL;

    t29 = ((x177>(x178*x179))%x180);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x181 = 17U;
	int8_t x182 = 0;
	int16_t x184 = 1;
	int32_t t30 = -157960892;

    t30 = ((x181>(x182*x183))%x184);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x185 = INT16_MIN;
	uint8_t x187 = 3U;

    t31 = ((x185>(x186*x187))%x188);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x193 = 0;
	volatile uint64_t x194 = UINT64_MAX;
	static volatile uint16_t x195 = UINT16_MAX;
	uint16_t x196 = 55U;
	int32_t t32 = -852;

    t32 = ((x193>(x194*x195))%x196);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x197 = -1;
	static volatile uint16_t x198 = 7U;
	int32_t x200 = INT32_MIN;
	static volatile int32_t t33 = -3587616;

    t33 = ((x197>(x198*x199))%x200);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x201 = -1LL;
	int16_t x203 = INT16_MIN;
	static int64_t x204 = -3706653241899603LL;
	volatile int64_t t34 = -6141531LL;

    t34 = ((x201>(x202*x203))%x204);

    if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x209 = -1;
	int16_t x211 = 495;
	uint8_t x212 = 7U;
	int32_t t35 = -6260;

    t35 = ((x209>(x210*x211))%x212);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x213 = 1;
	int64_t x214 = -1LL;
	int8_t x216 = INT8_MIN;
	int32_t t36 = -201457;

    t36 = ((x213>(x214*x215))%x216);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x221 = 1668465646U;
	volatile int16_t x222 = 6;
	int8_t x223 = 0;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t37 = -755;

    t37 = ((x221>(x222*x223))%x224);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x225 = INT8_MIN;
	volatile uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t38 = 4563;

    t38 = ((x225>(x226*x227))%x228);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x229 = INT8_MIN;
	int16_t x230 = -1;
	uint32_t x231 = UINT32_MAX;
	int32_t t39 = -2526199;

    t39 = ((x229>(x230*x231))%x232);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x233 = INT8_MIN;
	int16_t x234 = INT16_MIN;
	int8_t x236 = -1;
	int32_t t40 = 32533272;

    t40 = ((x233>(x234*x235))%x236);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = INT16_MIN;
	int8_t x243 = INT8_MIN;
	uint8_t x244 = 9U;
	int32_t t41 = 7719;

    t41 = ((x241>(x242*x243))%x244);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x245 = 139459346;
	static int16_t x246 = -7;
	static uint8_t x247 = 0U;
	static uint8_t x248 = 43U;
	int32_t t42 = 1;

    t42 = ((x245>(x246*x247))%x248);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x249 = 1;
	int32_t x250 = -14686519;
	int8_t x251 = -1;
	uint8_t x252 = 1U;
	volatile int32_t t43 = -3;

    t43 = ((x249>(x250*x251))%x252);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x254 = -1;
	volatile int8_t x255 = INT8_MIN;
	static volatile int64_t x256 = INT64_MIN;
	int64_t t44 = -7346704343212LL;

    t44 = ((x253>(x254*x255))%x256);

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x257 = INT64_MIN;
	uint16_t x258 = UINT16_MAX;
	int64_t x260 = -17096454100LL;
	int64_t t45 = -27061227008LL;

    t45 = ((x257>(x258*x259))%x260);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x266 = INT16_MAX;
	int16_t x268 = 1;
	int32_t t46 = -7459;

    t46 = ((x265>(x266*x267))%x268);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x273 = -465611365;
	int8_t x275 = INT8_MAX;

    t47 = ((x273>(x274*x275))%x276);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x281 = 1;
	int16_t x282 = INT16_MAX;
	volatile uint32_t x283 = 1714035581U;
	uint8_t x284 = 1U;

    t48 = ((x281>(x282*x283))%x284);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int64_t x285 = INT64_MIN;
	uint8_t x286 = 1U;
	int64_t x287 = -1LL;
	uint32_t x288 = UINT32_MAX;

    t49 = ((x285>(x286*x287))%x288);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint32_t x293 = 395U;
	uint64_t x294 = UINT64_MAX;
	volatile uint8_t x295 = UINT8_MAX;
	volatile int8_t x296 = 10;
	static volatile int32_t t50 = 20500;

    t50 = ((x293>(x294*x295))%x296);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int32_t x297 = INT32_MIN;
	uint8_t x298 = 15U;
	volatile int16_t x299 = -590;
	uint8_t x300 = 9U;

    t51 = ((x297>(x298*x299))%x300);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x301 = -1;
	volatile int8_t x302 = 0;
	volatile uint32_t x303 = 5U;
	volatile int64_t x304 = INT64_MAX;

    t52 = ((x301>(x302*x303))%x304);

    if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x305 = -82;
	uint16_t x306 = 18U;
	uint64_t x307 = 1278917962049566LLU;
	volatile int64_t t53 = 1822704939539952LL;

    t53 = ((x305>(x306*x307))%x308);

    if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x317 = INT16_MIN;
	static int32_t x320 = -5996478;
	int32_t t54 = 0;

    t54 = ((x317>(x318*x319))%x320);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x321 = 19342U;
	volatile int32_t x322 = -80296;
	int8_t x323 = 14;
	int8_t x324 = -5;
	static volatile int32_t t55 = 590200050;

    t55 = ((x321>(x322*x323))%x324);

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x325 = 1077;
	static int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	int32_t x328 = -626378;
	int32_t t56 = 13414505;

    t56 = ((x325>(x326*x327))%x328);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x329 = INT8_MIN;
	uint32_t x330 = 4U;
	volatile uint64_t x331 = 0LLU;
	uint64_t x332 = 31664LLU;
	uint64_t t57 = 311573756LLU;

    t57 = ((x329>(x330*x331))%x332);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x333 = 399U;
	uint16_t x334 = UINT16_MAX;
	int64_t x335 = 2050675369LL;
	static int16_t x336 = INT16_MIN;

    t58 = ((x333>(x334*x335))%x336);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x337 = UINT8_MAX;
	volatile int32_t x338 = 2895;
	uint8_t x339 = 79U;
	volatile uint64_t t59 = 3531116176096115LLU;

    t59 = ((x337>(x338*x339))%x340);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x341 = INT32_MAX;
	uint64_t x342 = UINT64_MAX;
	int8_t x343 = 1;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t60 = -710607933;

    t60 = ((x341>(x342*x343))%x344);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x345 = INT64_MAX;
	int8_t x347 = INT8_MIN;
	int64_t t61 = 6749855445968LL;

    t61 = ((x345>(x346*x347))%x348);

    if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x350 = 1U;
	int8_t x351 = INT8_MAX;
	int64_t x352 = INT64_MIN;
	int64_t t62 = -1028584705LL;

    t62 = ((x349>(x350*x351))%x352);

    if (t62 != 1LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x357 = UINT32_MAX;
	int16_t x358 = 132;
	volatile uint64_t x359 = 990209411094382LLU;
	static uint32_t x360 = 1107U;
	volatile uint32_t t63 = 67U;

    t63 = ((x357>(x358*x359))%x360);

    if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x362 = INT16_MIN;
	volatile int32_t x364 = -554791;
	volatile int32_t t64 = -13071;

    t64 = ((x361>(x362*x363))%x364);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x377 = INT32_MAX;
	int16_t x378 = INT16_MIN;
	uint16_t x379 = 0U;
	int64_t x380 = INT64_MIN;
	static volatile int64_t t65 = -1911526LL;

    t65 = ((x377>(x378*x379))%x380);

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int16_t x381 = INT16_MIN;
	static int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MIN;
	static volatile int64_t x384 = INT64_MIN;

    t66 = ((x381>(x382*x383))%x384);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x385 = INT32_MIN;
	volatile uint8_t x386 = UINT8_MAX;
	static int8_t x387 = INT8_MAX;
	int16_t x388 = -2;
	static volatile int32_t t67 = 2192;

    t67 = ((x385>(x386*x387))%x388);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x389 = 3U;
	volatile uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 8U;
	int32_t x392 = INT32_MIN;

    t68 = ((x389>(x390*x391))%x392);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint8_t x393 = 19U;
	int16_t x395 = -88;
	uint32_t x396 = 134U;
	volatile uint32_t t69 = 1937122U;

    t69 = ((x393>(x394*x395))%x396);

    if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint32_t x397 = 97U;
	int16_t x398 = 1405;
	volatile uint16_t x399 = 1932U;
	int64_t x400 = 6868LL;
	volatile int64_t t70 = -148919487LL;

    t70 = ((x397>(x398*x399))%x400);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int8_t x406 = -52;
	volatile uint32_t x407 = 198364U;
	int16_t x408 = INT16_MIN;
	volatile int32_t t71 = -13922;

    t71 = ((x405>(x406*x407))%x408);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x409 = 68U;
	int16_t x410 = INT16_MIN;
	int8_t x411 = 1;
	volatile int16_t x412 = -1;
	volatile int32_t t72 = -9;

    t72 = ((x409>(x410*x411))%x412);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x413 = 267212882003254754LLU;
	uint8_t x414 = 14U;
	int32_t x415 = -101;
	uint16_t x416 = 8679U;

    t73 = ((x413>(x414*x415))%x416);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x417 = INT32_MAX;
	uint8_t x419 = UINT8_MAX;
	int64_t x420 = INT64_MIN;
	int64_t t74 = -1LL;

    t74 = ((x417>(x418*x419))%x420);

    if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x421 = INT16_MIN;
	volatile int32_t x423 = 198015508;
	uint32_t x424 = 1793040U;
	volatile uint32_t t75 = 9U;

    t75 = ((x421>(x422*x423))%x424);

    if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint8_t x425 = 8U;
	int16_t x426 = -1;
	uint8_t x427 = UINT8_MAX;
	int64_t x428 = 74895479152LL;

    t76 = ((x425>(x426*x427))%x428);

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x430 = -19LL;
	static uint8_t x432 = 127U;
	volatile int32_t t77 = -106;

    t77 = ((x429>(x430*x431))%x432);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x433 = INT32_MAX;
	static uint64_t x434 = 656950468563613473LLU;
	int8_t x435 = 15;
	int32_t x436 = -141566184;
	int32_t t78 = 4197332;

    t78 = ((x433>(x434*x435))%x436);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x437 = INT32_MIN;
	int8_t x438 = INT8_MAX;
	static int16_t x439 = -117;
	volatile uint32_t x440 = UINT32_MAX;

    t79 = ((x437>(x438*x439))%x440);

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x441 = 13U;
	uint32_t x442 = 55U;
	int8_t x443 = INT8_MIN;
	int32_t t80 = 74157319;

    t80 = ((x441>(x442*x443))%x444);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x449 = 1;
	volatile int32_t x450 = 1828275;
	static uint16_t x452 = UINT16_MAX;

    t81 = ((x449>(x450*x451))%x452);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x453 = INT32_MAX;
	uint32_t x454 = UINT32_MAX;
	static uint16_t x456 = UINT16_MAX;
	volatile int32_t t82 = -40304722;

    t82 = ((x453>(x454*x455))%x456);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x457 = 52;
	uint32_t x458 = UINT32_MAX;
	volatile int8_t x459 = INT8_MAX;
	volatile uint64_t t83 = 1517895407891LLU;

    t83 = ((x457>(x458*x459))%x460);

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x461 = INT32_MIN;
	uint8_t x462 = 30U;
	uint32_t x463 = UINT32_MAX;
	int32_t x464 = 1234;
	volatile int32_t t84 = -4988;

    t84 = ((x461>(x462*x463))%x464);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x465 = INT32_MAX;
	static volatile int16_t x466 = -216;
	volatile int16_t x468 = INT16_MIN;
	volatile int32_t t85 = -48;

    t85 = ((x465>(x466*x467))%x468);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x469 = 1431U;
	static int32_t x470 = 46799;
	int16_t x471 = -1;
	int32_t t86 = -5;

    t86 = ((x469>(x470*x471))%x472);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x473 = -1LL;
	int16_t x475 = 71;
	static int32_t x476 = INT32_MIN;
	int32_t t87 = 0;

    t87 = ((x473>(x474*x475))%x476);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x477 = 0;
	int8_t x479 = 0;
	int32_t t88 = 100;

    t88 = ((x477>(x478*x479))%x480);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x482 = -1;
	int32_t x484 = INT32_MIN;
	int32_t t89 = -14101;

    t89 = ((x481>(x482*x483))%x484);

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x486 = 10288U;
	int32_t x487 = -637;
	volatile int32_t t90 = -24;

    t90 = ((x485>(x486*x487))%x488);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x490 = 61LLU;
	int64_t x491 = INT64_MIN;
	volatile uint8_t x492 = 1U;
	int32_t t91 = 3499997;

    t91 = ((x489>(x490*x491))%x492);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x505 = INT8_MAX;
	static volatile uint16_t x507 = UINT16_MAX;
	uint8_t x508 = UINT8_MAX;
	volatile int32_t t92 = 6506378;

    t92 = ((x505>(x506*x507))%x508);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x509 = 1U;
	uint32_t x510 = 11U;
	int16_t x511 = 752;
	volatile uint8_t x512 = 3U;
	volatile int32_t t93 = 93879;

    t93 = ((x509>(x510*x511))%x512);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x513 = INT32_MIN;
	static int32_t x514 = INT32_MAX;
	uint64_t x515 = UINT64_MAX;
	static int32_t x516 = INT32_MAX;
	int32_t t94 = -754232556;

    t94 = ((x513>(x514*x515))%x516);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x517 = 0U;
	int8_t x518 = INT8_MIN;
	int64_t x520 = 772885790LL;
	volatile int64_t t95 = -2724LL;

    t95 = ((x517>(x518*x519))%x520);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x521 = INT64_MAX;
	static volatile int8_t x522 = 1;
	int32_t x523 = -55;
	volatile int32_t t96 = 754877;

    t96 = ((x521>(x522*x523))%x524);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x525 = INT16_MAX;
	int64_t x526 = -4607LL;
	static int16_t x528 = -1;

    t97 = ((x525>(x526*x527))%x528);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x529 = 17550;
	static int32_t t98 = -110420;

    t98 = ((x529>(x530*x531))%x532);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x533 = INT32_MIN;
	static int16_t x534 = INT16_MAX;
	int8_t x535 = 1;
	uint8_t x536 = UINT8_MAX;
	static volatile int32_t t99 = 12804366;

    t99 = ((x533>(x534*x535))%x536);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x538 = 1526;
	uint16_t x540 = 13U;
	int32_t t100 = 1;

    t100 = ((x537>(x538*x539))%x540);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x545 = INT64_MIN;
	int32_t x546 = -4233;
	uint64_t x547 = UINT64_MAX;
	int8_t x548 = INT8_MIN;
	int32_t t101 = 32032;

    t101 = ((x545>(x546*x547))%x548);

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x553 = UINT8_MAX;
	uint32_t x554 = 26149U;
	static int32_t x556 = -86132;
	volatile int32_t t102 = -224;

    t102 = ((x553>(x554*x555))%x556);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x557 = INT64_MIN;
	static volatile uint8_t x559 = 52U;
	int8_t x560 = INT8_MIN;
	volatile int32_t t103 = 404693347;

    t103 = ((x557>(x558*x559))%x560);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x565 = INT64_MIN;
	int8_t x566 = -1;
	uint64_t x567 = UINT64_MAX;
	static uint32_t x568 = 13707432U;
	volatile uint32_t t104 = 64794U;

    t104 = ((x565>(x566*x567))%x568);

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x573 = INT64_MIN;
	static volatile int32_t x574 = 277;
	int8_t x575 = -1;
	int32_t x576 = 208;

    t105 = ((x573>(x574*x575))%x576);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x577 = 4U;
	int64_t x578 = -1LL;
	int16_t x579 = -89;
	uint64_t t106 = 65947500476361975LLU;

    t106 = ((x577>(x578*x579))%x580);

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint16_t x585 = 7U;
	int64_t x587 = -3675296LL;
	int32_t x588 = -1;
	volatile int32_t t107 = 117225;

    t107 = ((x585>(x586*x587))%x588);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	volatile uint16_t x590 = 268U;
	uint16_t x591 = 5074U;
	int32_t x592 = INT32_MAX;

    t108 = ((x589>(x590*x591))%x592);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x593 = 5U;
	static uint8_t x594 = UINT8_MAX;
	int16_t x595 = 141;
	static int32_t x596 = INT32_MIN;
	volatile int32_t t109 = 446562695;

    t109 = ((x593>(x594*x595))%x596);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x602 = 310872217U;
	static int32_t t110 = 108613;

    t110 = ((x601>(x602*x603))%x604);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x605 = 63650U;
	static int64_t x606 = INT64_MAX;
	static uint32_t x607 = 0U;
	volatile int64_t x608 = -246LL;
	int64_t t111 = -13441324972000894LL;

    t111 = ((x605>(x606*x607))%x608);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x609 = 11481U;
	int8_t x610 = -1;
	int64_t x611 = 62487371716705LL;
	int64_t x612 = INT64_MAX;

    t112 = ((x609>(x610*x611))%x612);

    if (t112 != 1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x613 = 0LL;
	int32_t t113 = 354725;

    t113 = ((x613>(x614*x615))%x616);

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x617 = UINT8_MAX;
	uint32_t x618 = UINT32_MAX;
	int16_t x619 = -1;
	int64_t x620 = INT64_MAX;
	int64_t t114 = 1LL;

    t114 = ((x617>(x618*x619))%x620);

    if (t114 != 1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x621 = -1LL;
	int32_t x622 = -1;
	int64_t x623 = 1997756989LL;
	volatile int32_t t115 = 3053;

    t115 = ((x621>(x622*x623))%x624);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int8_t x629 = INT8_MIN;
	uint64_t x631 = 140317991963588LLU;
	int16_t x632 = -1;
	volatile int32_t t116 = 26278185;

    t116 = ((x629>(x630*x631))%x632);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x634 = INT8_MAX;
	static uint64_t x635 = 22597775092690LLU;
	static volatile uint16_t x636 = UINT16_MAX;
	int32_t t117 = -7071;

    t117 = ((x633>(x634*x635))%x636);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x645 = 7951U;
	uint8_t x646 = 0U;
	uint32_t x647 = 631U;
	static int64_t x648 = -753957476458LL;

    t118 = ((x645>(x646*x647))%x648);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x649 = -1;
	volatile int16_t x650 = INT16_MAX;
	static uint32_t x651 = 1094U;
	int16_t x652 = INT16_MIN;
	static volatile int32_t t119 = 3;

    t119 = ((x649>(x650*x651))%x652);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x653 = INT16_MIN;
	int16_t x654 = -1;
	volatile uint16_t x655 = 75U;
	volatile int64_t x656 = INT64_MIN;
	int64_t t120 = 749LL;

    t120 = ((x653>(x654*x655))%x656);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x657 = 925U;
	int16_t x658 = -1;
	uint8_t x659 = UINT8_MAX;
	int8_t x660 = INT8_MAX;
	volatile int32_t t121 = -170;

    t121 = ((x657>(x658*x659))%x660);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x663 = -1395941093LL;
	int32_t t122 = -65238055;

    t122 = ((x661>(x662*x663))%x664);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x665 = -1;
	static uint16_t x666 = UINT16_MAX;
	volatile uint64_t t123 = 1433749490LLU;

    t123 = ((x665>(x666*x667))%x668);

    if (t123 != 1LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x673 = -3833;
	int64_t x674 = -16927650822862184LL;

    t124 = ((x673>(x674*x675))%x676);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int64_t x678 = -1LL;
	int16_t x679 = INT16_MIN;
	static int64_t x680 = -81208LL;
	volatile int64_t t125 = 3LL;

    t125 = ((x677>(x678*x679))%x680);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x681 = -1;
	int8_t x682 = 35;
	int8_t x683 = INT8_MIN;
	static int8_t x684 = INT8_MIN;
	int32_t t126 = -96615;

    t126 = ((x681>(x682*x683))%x684);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int16_t x685 = INT16_MAX;
	int16_t x686 = 0;
	uint64_t x687 = 8531224LLU;
	int8_t x688 = 33;
	static int32_t t127 = -68;

    t127 = ((x685>(x686*x687))%x688);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x691 = UINT16_MAX;
	int64_t x692 = -1LL;
	static int64_t t128 = -2190472LL;

    t128 = ((x689>(x690*x691))%x692);

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int32_t x693 = INT32_MIN;
	static int64_t x694 = -6LL;
	uint32_t x695 = 16283358U;
	volatile int16_t x696 = INT16_MIN;
	static int32_t t129 = 141;

    t129 = ((x693>(x694*x695))%x696);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x697 = INT8_MAX;
	uint64_t x698 = 1189243252624LLU;
	int64_t x699 = INT64_MAX;
	int32_t x700 = INT32_MAX;

    t130 = ((x697>(x698*x699))%x700);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x701 = 1U;
	uint32_t x702 = UINT32_MAX;
	static int8_t x703 = INT8_MIN;
	volatile int32_t t131 = 665612;

    t131 = ((x701>(x702*x703))%x704);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x705 = UINT16_MAX;
	volatile int8_t x706 = 0;
	int8_t x707 = 7;
	int16_t x708 = INT16_MAX;
	volatile int32_t t132 = 50;

    t132 = ((x705>(x706*x707))%x708);

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x709 = INT64_MAX;
	static int16_t x710 = -1;
	static volatile int16_t x712 = -1;
	volatile int32_t t133 = 136932898;

    t133 = ((x709>(x710*x711))%x712);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x713 = INT8_MIN;
	int64_t x715 = 55794018LL;
	static uint8_t x716 = UINT8_MAX;
	int32_t t134 = 14984236;

    t134 = ((x713>(x714*x715))%x716);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x717 = INT32_MIN;
	uint8_t x718 = 37U;
	int16_t x719 = INT16_MIN;
	static volatile int16_t x720 = -345;
	int32_t t135 = 24853789;

    t135 = ((x717>(x718*x719))%x720);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x725 = -1;
	int64_t x726 = -1504LL;
	int8_t x727 = -1;
	int64_t x728 = -2875427076107308964LL;
	int64_t t136 = -74684967980LL;

    t136 = ((x725>(x726*x727))%x728);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint64_t x729 = 349804LLU;
	uint64_t x730 = 1514062595057LLU;
	uint64_t x731 = 4107603258937229LLU;
	int16_t x732 = INT16_MIN;
	volatile int32_t t137 = 224433;

    t137 = ((x729>(x730*x731))%x732);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x733 = 33U;
	uint64_t x734 = UINT64_MAX;
	int32_t x735 = -1;
	int32_t x736 = -1147859;
	volatile int32_t t138 = 116;

    t138 = ((x733>(x734*x735))%x736);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x738 = -1749921;
	int8_t x739 = -1;
	int64_t x740 = 4LL;
	volatile int64_t t139 = 57921LL;

    t139 = ((x737>(x738*x739))%x740);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x741 = INT16_MIN;
	int8_t x742 = -9;
	int64_t x743 = -60044889083LL;
	int8_t x744 = INT8_MIN;
	int32_t t140 = -1735;

    t140 = ((x741>(x742*x743))%x744);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x745 = -4532;
	int64_t x746 = -1LL;

    t141 = ((x745>(x746*x747))%x748);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x749 = INT32_MIN;
	int32_t x750 = -21;
	volatile uint64_t x751 = 774965LLU;
	static int32_t x752 = INT32_MIN;
	int32_t t142 = 58105;

    t142 = ((x749>(x750*x751))%x752);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t t143 = 0LL;

    t143 = ((x753>(x754*x755))%x756);

    if (t143 != 1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x757 = INT32_MIN;
	int8_t x758 = -1;
	int8_t x759 = -1;

    t144 = ((x757>(x758*x759))%x760);

    if (t144 != 0LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint32_t x761 = 25U;
	static int8_t x762 = INT8_MIN;
	int8_t x764 = -1;

    t145 = ((x761>(x762*x763))%x764);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x765 = UINT64_MAX;
	int16_t x766 = 6939;
	uint32_t x768 = UINT32_MAX;
	uint32_t t146 = 2074277U;

    t146 = ((x765>(x766*x767))%x768);

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int32_t x769 = INT32_MIN;
	static uint16_t x770 = 5U;
	int16_t x771 = INT16_MIN;
	volatile uint32_t t147 = 1481U;

    t147 = ((x769>(x770*x771))%x772);

    if (t147 != 0U) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x777 = INT8_MIN;
	static int32_t x778 = -1;
	volatile uint16_t x779 = 15529U;
	volatile int16_t x780 = INT16_MAX;
	int32_t t148 = -7;

    t148 = ((x777>(x778*x779))%x780);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x789 = -1;
	static uint8_t x792 = 29U;
	int32_t t149 = -100599;

    t149 = ((x789>(x790*x791))%x792);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x801 = 7353U;
	int64_t x802 = 49409LL;
	uint16_t x803 = 61U;

    t150 = ((x801>(x802*x803))%x804);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x806 = -1124061383368728LL;
	volatile uint64_t x807 = 361037310202407999LLU;
	int16_t x808 = -8052;
	int32_t t151 = -77;

    t151 = ((x805>(x806*x807))%x808);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x809 = 17348LL;
	volatile int8_t x810 = 39;
	int16_t x811 = INT16_MAX;
	static volatile int16_t x812 = INT16_MIN;
	volatile int32_t t152 = 2;

    t152 = ((x809>(x810*x811))%x812);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x813 = UINT8_MAX;
	int32_t x814 = INT32_MIN;
	volatile uint32_t x815 = UINT32_MAX;
	static int16_t x816 = 15131;
	int32_t t153 = -13268528;

    t153 = ((x813>(x814*x815))%x816);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x817 = -1LL;
	int8_t x819 = 0;
	int8_t x820 = INT8_MIN;
	volatile int32_t t154 = 27;

    t154 = ((x817>(x818*x819))%x820);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x826 = -642033894154LL;
	int16_t x827 = INT16_MIN;
	int8_t x828 = INT8_MIN;

    t155 = ((x825>(x826*x827))%x828);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x837 = 0;
	int16_t x838 = -1;
	int8_t x839 = -1;
	uint16_t x840 = UINT16_MAX;
	static volatile int32_t t156 = 20;

    t156 = ((x837>(x838*x839))%x840);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x845 = INT32_MAX;
	uint8_t x846 = 118U;
	static uint32_t x848 = 1896156327U;
	volatile uint32_t t157 = 120603U;

    t157 = ((x845>(x846*x847))%x848);

    if (t157 != 1U) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x849 = 225845975U;
	int8_t x850 = INT8_MAX;
	int16_t x851 = INT16_MAX;
	static volatile int32_t x852 = INT32_MIN;
	volatile int32_t t158 = -8638646;

    t158 = ((x849>(x850*x851))%x852);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x857 = INT32_MIN;
	volatile int8_t x858 = INT8_MAX;
	static volatile uint32_t x860 = 363U;
	volatile uint32_t t159 = 20U;

    t159 = ((x857>(x858*x859))%x860);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x870 = 0;
	static int16_t x871 = -1;
	static uint32_t x872 = 218394007U;
	static uint32_t t160 = 3392U;

    t160 = ((x869>(x870*x871))%x872);

    if (t160 != 1U) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x875 = -1;
	volatile uint16_t x876 = 92U;
	static int32_t t161 = 56493906;

    t161 = ((x873>(x874*x875))%x876);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x882 = INT32_MIN;
	uint32_t x883 = 13U;

    t162 = ((x881>(x882*x883))%x884);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x885 = -1;
	int16_t x887 = INT16_MAX;
	volatile int8_t x888 = 19;

    t163 = ((x885>(x886*x887))%x888);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x895 = 28191886LL;
	volatile int64_t t164 = -8281480671847LL;

    t164 = ((x893>(x894*x895))%x896);

    if (t164 != 0LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x898 = UINT64_MAX;
	int64_t x899 = 96LL;
	int8_t x900 = INT8_MAX;
	static volatile int32_t t165 = -4006;

    t165 = ((x897>(x898*x899))%x900);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x901 = -1;
	volatile uint16_t x902 = 18838U;
	uint32_t x903 = 1658U;

    t166 = ((x901>(x902*x903))%x904);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x905 = 1;
	volatile int8_t x908 = -1;
	volatile int32_t t167 = -15603148;

    t167 = ((x905>(x906*x907))%x908);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x909 = -1;
	static uint16_t x910 = 23329U;
	int16_t x911 = -1;
	int32_t x912 = -1;
	volatile int32_t t168 = 39713871;

    t168 = ((x909>(x910*x911))%x912);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x913 = INT16_MIN;
	int16_t x915 = INT16_MIN;
	int32_t x916 = INT32_MIN;

    t169 = ((x913>(x914*x915))%x916);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x917 = INT16_MIN;
	uint32_t x918 = 246U;
	volatile uint32_t x920 = 2782983U;

    t170 = ((x917>(x918*x919))%x920);

    if (t170 != 0U) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x926 = -1;
	int64_t x927 = INT64_MAX;
	int64_t x928 = INT64_MAX;
	volatile int64_t t171 = -10LL;

    t171 = ((x925>(x926*x927))%x928);

    if (t171 != 1LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x933 = 10LLU;
	int64_t x934 = INT64_MIN;
	volatile uint16_t x935 = 1U;
	uint16_t x936 = UINT16_MAX;

    t172 = ((x933>(x934*x935))%x936);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x944 = 245LLU;
	volatile uint64_t t173 = 1415836382428LLU;

    t173 = ((x941>(x942*x943))%x944);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x945 = 55LLU;
	int16_t x946 = INT16_MIN;
	volatile uint16_t x947 = 133U;
	volatile int16_t x948 = -1;
	volatile int32_t t174 = -11948;

    t174 = ((x945>(x946*x947))%x948);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x949 = -3;
	int64_t x950 = -1LL;
	static uint64_t x952 = 192LLU;
	volatile uint64_t t175 = 28754369287209135LLU;

    t175 = ((x949>(x950*x951))%x952);

    if (t175 != 1LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x961 = -1;
	int32_t x962 = -101;
	uint8_t x964 = 95U;
	int32_t t176 = -30;

    t176 = ((x961>(x962*x963))%x964);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x965 = -1LL;
	static uint32_t x966 = UINT32_MAX;
	volatile int8_t x967 = INT8_MAX;
	int32_t x968 = INT32_MAX;
	int32_t t177 = -41;

    t177 = ((x965>(x966*x967))%x968);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint64_t x969 = UINT64_MAX;
	uint8_t x971 = 6U;
	int32_t t178 = 42;

    t178 = ((x969>(x970*x971))%x972);

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x974 = 0;
	volatile int8_t x975 = -1;
	int32_t x976 = INT32_MIN;
	static int32_t t179 = -20;

    t179 = ((x973>(x974*x975))%x976);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x977 = INT64_MAX;
	int32_t x978 = -1;
	volatile int8_t x979 = 28;
	volatile int32_t t180 = 9916;

    t180 = ((x977>(x978*x979))%x980);

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x981 = UINT32_MAX;
	volatile int16_t x983 = -1;
	uint8_t x984 = 22U;

    t181 = ((x981>(x982*x983))%x984);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x995 = -1;
	int64_t x996 = INT64_MIN;
	static int64_t t182 = -1353888908163199LL;

    t182 = ((x993>(x994*x995))%x996);

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int8_t x998 = INT8_MIN;
	uint32_t x999 = UINT32_MAX;
	int64_t x1000 = -1LL;

    t183 = ((x997>(x998*x999))%x1000);

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x1001 = INT16_MAX;
	int16_t x1002 = 108;
	volatile uint64_t x1003 = 4739757LLU;
	volatile uint64_t x1004 = 3136747LLU;

    t184 = ((x1001>(x1002*x1003))%x1004);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x1005 = -843343;
	int32_t x1006 = -29963;
	int16_t x1007 = -1;
	int32_t x1008 = INT32_MAX;
	volatile int32_t t185 = -2;

    t185 = ((x1005>(x1006*x1007))%x1008);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x1009 = -1;
	volatile int8_t x1012 = INT8_MIN;
	static int32_t t186 = -1;

    t186 = ((x1009>(x1010*x1011))%x1012);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1013 = -1;
	int64_t x1015 = -1LL;
	uint8_t x1016 = 61U;

    t187 = ((x1013>(x1014*x1015))%x1016);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile uint8_t x1017 = UINT8_MAX;
	uint8_t x1018 = 16U;
	static int32_t x1019 = -1;
	volatile int16_t x1020 = -1;
	int32_t t188 = 19;

    t188 = ((x1017>(x1018*x1019))%x1020);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1025 = 2022273477709388LLU;
	int16_t x1026 = 0;
	int32_t x1027 = INT32_MAX;
	uint16_t x1028 = 3U;

    t189 = ((x1025>(x1026*x1027))%x1028);

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1029 = UINT8_MAX;
	int8_t x1030 = -1;
	volatile uint64_t x1031 = UINT64_MAX;
	int16_t x1032 = -21;
	int32_t t190 = -1;

    t190 = ((x1029>(x1030*x1031))%x1032);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint8_t x1033 = 41U;
	static int16_t x1034 = -1;
	static int8_t x1035 = INT8_MIN;
	int8_t x1036 = INT8_MAX;
	static int32_t t191 = 187486390;

    t191 = ((x1033>(x1034*x1035))%x1036);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1041 = INT8_MIN;
	volatile uint8_t x1042 = UINT8_MAX;
	volatile int64_t x1044 = INT64_MAX;
	static int64_t t192 = 20LL;

    t192 = ((x1041>(x1042*x1043))%x1044);

    if (t192 != 1LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1045 = -160369669;
	int32_t t193 = -637;

    t193 = ((x1045>(x1046*x1047))%x1048);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x1050 = 508475U;
	uint32_t x1051 = 144528U;
	volatile int32_t t194 = -189518397;

    t194 = ((x1049>(x1050*x1051))%x1052);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1053 = UINT8_MAX;
	uint8_t x1054 = 0U;
	uint32_t x1056 = 1U;
	uint32_t t195 = 3U;

    t195 = ((x1053>(x1054*x1055))%x1056);

    if (t195 != 0U) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1057 = UINT16_MAX;
	uint32_t x1058 = UINT32_MAX;
	uint32_t x1059 = 57049202U;
	int8_t x1060 = INT8_MIN;
	volatile int32_t t196 = -456342063;

    t196 = ((x1057>(x1058*x1059))%x1060);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1065 = INT8_MAX;
	int8_t x1067 = INT8_MIN;
	int32_t x1068 = INT32_MAX;
	int32_t t197 = 7635;

    t197 = ((x1065>(x1066*x1067))%x1068);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1069 = 2289554546246981LL;
	int8_t x1070 = INT8_MIN;
	static int32_t x1072 = -157828105;
	volatile int32_t t198 = -345;

    t198 = ((x1069>(x1070*x1071))%x1072);

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint8_t x1078 = 1U;
	int64_t x1079 = INT64_MIN;
	int16_t x1080 = -6;
	int32_t t199 = 510785523;

    t199 = ((x1077>(x1078*x1079))%x1080);

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

