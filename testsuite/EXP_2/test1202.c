
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

int16_t x2 = INT16_MIN;
uint32_t x5 = 141103U;
int32_t x16 = -1;
int16_t x17 = INT16_MIN;
uint8_t x18 = 1U;
volatile int32_t x19 = -129110522;
volatile uint32_t x21 = UINT32_MAX;
volatile int8_t x29 = INT8_MIN;
uint16_t x30 = UINT16_MAX;
volatile uint16_t x40 = UINT16_MAX;
volatile int8_t x46 = INT8_MIN;
int16_t x48 = INT16_MAX;
int8_t x52 = INT8_MIN;
int16_t x53 = 78;
int16_t x56 = INT16_MIN;
volatile int8_t x58 = INT8_MIN;
static int32_t x59 = 0;
int8_t x61 = 15;
volatile int32_t t15 = 3717250;
int32_t x67 = 8;
volatile int64_t x84 = 117747195LL;
uint64_t x90 = 811159120693833357LLU;
uint8_t x93 = 98U;
static int32_t x105 = -17268677;
volatile int16_t x108 = -1953;
int32_t t26 = 18699744;
uint8_t x119 = 125U;
int64_t x127 = -1LL;
int32_t x128 = 104;
static int64_t x131 = INT64_MIN;
int64_t x143 = INT64_MAX;
uint16_t x151 = 892U;
int16_t x169 = -1;
uint16_t x171 = UINT16_MAX;
volatile int8_t x177 = INT8_MIN;
volatile int8_t x178 = -1;
volatile int16_t x179 = INT16_MIN;
int32_t x185 = -9534;
int32_t t43 = -95;
int64_t x193 = 3149835913623103LL;
int8_t x194 = 1;
uint32_t x206 = 12479U;
int16_t x208 = -9636;
int16_t x209 = INT16_MIN;
int32_t x218 = -1;
volatile int64_t x227 = 1278570LL;
volatile int32_t t52 = 8026;
uint8_t x230 = UINT8_MAX;
int16_t x233 = INT16_MAX;
uint32_t x244 = UINT32_MAX;
int32_t x250 = INT32_MIN;
int64_t x253 = 40429997429829LL;
int16_t x255 = -1;
uint64_t t59 = 1012LLU;
volatile int64_t t60 = 155545431391LL;
volatile int64_t t61 = 35074935723483379LL;
int8_t x280 = INT8_MIN;
static uint32_t t62 = 964199539U;
uint16_t x288 = 29368U;
volatile uint64_t t64 = 5979814LLU;
volatile int64_t x302 = INT64_MAX;
int64_t t69 = 36773868605LL;
volatile int16_t x315 = -1;
static uint64_t x320 = 2559917847615140673LLU;
int64_t x324 = INT64_MAX;
int64_t x336 = INT64_MIN;
int8_t x347 = 1;
volatile int8_t x363 = INT8_MAX;
int8_t x364 = 0;
int32_t t80 = 228075770;
int8_t x366 = -1;
volatile int16_t x367 = -1;
static int16_t x369 = 0;
int16_t x379 = -1;
volatile uint64_t t84 = 138474995022571LLU;
uint16_t x385 = 9062U;
uint64_t x386 = 229204385LLU;
volatile int64_t x394 = 1257459477287129009LL;
volatile uint64_t t88 = 137LLU;
volatile uint64_t x397 = 1415499897151619050LLU;
uint32_t x408 = UINT32_MAX;
uint64_t x409 = 113545555615LLU;
int32_t x410 = INT32_MAX;
uint64_t t92 = 244LLU;
static volatile int32_t x413 = -42;
int64_t x415 = -3313LL;
static int16_t x426 = -141;
static volatile int32_t t97 = 49;
int32_t x439 = INT32_MIN;
static volatile int8_t x441 = INT8_MIN;
static uint32_t x442 = UINT32_MAX;
int16_t x455 = 5534;
static volatile uint32_t t105 = 58U;
static uint8_t x468 = 9U;
static int32_t t106 = -9817910;
static uint8_t x471 = 2U;
volatile int32_t t107 = -244;
static int8_t x490 = INT8_MAX;
volatile int16_t x492 = 1;
volatile int32_t t110 = 2;
int8_t x498 = -1;
uint64_t t112 = 4LLU;
int64_t t113 = INT64_MIN;
uint16_t x507 = UINT16_MAX;
int8_t x509 = INT8_MIN;
uint16_t x514 = UINT16_MAX;
int8_t x534 = 33;
int32_t t121 = 347983;
int32_t x544 = -4738705;
int16_t x548 = -25;
volatile int64_t x551 = -1LL;
uint16_t x559 = UINT16_MAX;
int16_t x564 = INT16_MIN;
volatile int32_t t129 = 5;
int64_t x578 = INT64_MIN;
uint64_t x580 = 727664LLU;
int8_t x583 = INT8_MIN;
static uint16_t x584 = 1U;
volatile int64_t t132 = 2908673LL;
static uint32_t x593 = 8698648U;
static uint64_t t135 = 64952028LLU;
int32_t x598 = -1;
int32_t t136 = -126638515;
int8_t x604 = -52;
int32_t t137 = 33229640;
volatile int32_t x605 = -1;
static int8_t x609 = INT8_MIN;
uint16_t x612 = 1474U;
volatile int32_t t139 = -72150859;
int8_t x614 = INT8_MIN;
volatile int32_t t143 = -29400058;
int16_t x629 = -1;
uint32_t x635 = 5600U;
int64_t t146 = 48708129891LL;
int32_t x643 = INT32_MIN;
uint8_t x644 = 1U;
volatile int8_t x646 = -1;
uint64_t x649 = 1431LLU;
volatile uint64_t t149 = 1629870468791995332LLU;
volatile int32_t t150 = -696817;
uint16_t x657 = UINT16_MAX;
int16_t x663 = INT16_MIN;
static uint8_t x664 = 4U;
int16_t x673 = INT16_MIN;
int64_t x676 = INT64_MIN;
volatile uint16_t x680 = UINT16_MAX;
int64_t x681 = 29LL;
int16_t x690 = INT16_MIN;
int8_t x696 = -1;
static volatile uint32_t t159 = 2082150U;
uint16_t x697 = 939U;
volatile int32_t t160 = 474;
int32_t t161 = -347269580;
volatile int32_t t162 = 864222865;
volatile int64_t x712 = INT64_MIN;
volatile uint64_t x714 = 5LLU;
int8_t x715 = -1;
int16_t x724 = -7306;
static int16_t x728 = 380;
static int8_t x729 = INT8_MIN;
static int16_t x731 = INT16_MAX;
volatile int32_t t168 = -157353392;
uint64_t x754 = UINT64_MAX;
uint16_t x758 = 2U;
int8_t x759 = INT8_MIN;
volatile int32_t x760 = INT32_MIN;
volatile int32_t t176 = 1583;
uint8_t x773 = UINT8_MAX;
uint16_t x774 = 7U;
uint16_t x777 = 23U;
int32_t x778 = INT32_MIN;
volatile uint8_t x782 = 31U;
volatile int64_t x783 = -238LL;
static volatile int32_t t179 = 1;
static int8_t x789 = INT8_MIN;
int32_t x790 = INT32_MIN;
uint16_t x804 = 15728U;
static volatile int32_t t185 = 1792891;
int8_t x823 = INT8_MAX;
int16_t x829 = INT16_MIN;
int64_t x831 = -1LL;
int64_t x833 = -1LL;
int16_t x835 = INT16_MIN;
int16_t x836 = INT16_MIN;
int64_t t189 = -221LL;
volatile int32_t t190 = 1230276;
int32_t x845 = -1;
volatile int16_t x846 = INT16_MIN;
int64_t x854 = INT64_MIN;
uint16_t x855 = UINT16_MAX;
volatile int16_t x864 = INT16_MAX;
static volatile int64_t x872 = 31814495LL;
volatile uint16_t x876 = 3634U;
int8_t x880 = INT8_MIN;
volatile int32_t t198 = 5601408;
int32_t x881 = -85;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	static int8_t x3 = INT8_MIN;
	static int64_t x4 = 11338LL;
	volatile int64_t t0 = 8652791LL;

    t0 = ((x1-(x2!=x3))&x4);

    if (t0 != 11338LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = -47448506;
	volatile uint16_t x7 = UINT16_MAX;
	int32_t x8 = 38;
	uint32_t t1 = 335463U;

    t1 = ((x5-(x6!=x7))&x8);

    if (t1 != 38U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = -1;
	volatile uint16_t x10 = 1U;
	int8_t x11 = INT8_MIN;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 53110681;

    t2 = ((x9-(x10!=x11))&x12);

    if (t2 != -32768) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint8_t x13 = UINT8_MAX;
	static volatile uint16_t x14 = 10U;
	int16_t x15 = 0;
	volatile int32_t t3 = 243137;

    t3 = ((x13-(x14!=x15))&x16);

    if (t3 != 254) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x20 = 108U;
	int32_t t4 = 191537748;

    t4 = ((x17-(x18!=x19))&x20);

    if (t4 != 108) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x22 = INT64_MIN;
	uint8_t x23 = 36U;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = -765742249722118674LL;

    t5 = ((x21-(x22!=x23))&x24);

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x25 = 1299370700221LLU;
	volatile uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	int16_t x28 = 295;
	volatile uint64_t t6 = 749616319999LLU;

    t6 = ((x25-(x26!=x27))&x28);

    if (t6 != 292LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x31 = 284695217074959LLU;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = 56233731894973LL;

    t7 = ((x29-(x30!=x31))&x32);

    if (t7 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = INT16_MIN;
	static int64_t x34 = -1LL;
	volatile uint32_t x35 = 122U;
	int16_t x36 = 1503;
	static volatile int32_t t8 = -882994031;

    t8 = ((x33-(x34!=x35))&x36);

    if (t8 != 1503) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x37 = 9U;
	volatile uint32_t x38 = 338159U;
	uint64_t x39 = 2052343584772948LLU;
	volatile uint32_t t9 = 118602U;

    t9 = ((x37-(x38!=x39))&x40);

    if (t9 != 8U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = INT16_MIN;
	int64_t x42 = INT64_MIN;
	int32_t x43 = -42030309;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -7161380;

    t10 = ((x41-(x42!=x43))&x44);

    if (t10 != -32896) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MIN;
	static int8_t x47 = INT8_MAX;
	int32_t t11 = 8;

    t11 = ((x45-(x46!=x47))&x48);

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	volatile uint64_t x50 = 1070526046559LLU;
	volatile uint16_t x51 = UINT16_MAX;
	static int32_t t12 = -1055749;

    t12 = ((x49-(x50!=x51))&x52);

    if (t12 != -256) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = 31133840723900662LL;
	volatile int32_t x55 = 1173489;
	volatile int32_t t13 = -8;

    t13 = ((x53-(x54!=x55))&x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int64_t x57 = -1LL;
	volatile uint16_t x60 = 3U;
	static int64_t t14 = 60308010207514041LL;

    t14 = ((x57-(x58!=x59))&x60);

    if (t14 != 2LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = INT16_MIN;
	int8_t x63 = 4;
	uint16_t x64 = 56U;

    t15 = ((x61-(x62!=x63))&x64);

    if (t15 != 8) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	uint32_t x66 = 21332212U;
	uint8_t x68 = UINT8_MAX;
	volatile int32_t t16 = 1500;

    t16 = ((x65-(x66!=x67))&x68);

    if (t16 != 254) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = 264366895867LLU;
	uint64_t x70 = UINT64_MAX;
	static int32_t x71 = INT32_MIN;
	int16_t x72 = 1483;
	uint64_t t17 = 308LLU;

    t17 = ((x69-(x70!=x71))&x72);

    if (t17 != 202LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x73 = UINT8_MAX;
	uint32_t x74 = UINT32_MAX;
	static int16_t x75 = INT16_MAX;
	static volatile uint32_t x76 = UINT32_MAX;
	static volatile uint32_t t18 = 4011623U;

    t18 = ((x73-(x74!=x75))&x76);

    if (t18 != 254U) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x81 = INT16_MAX;
	static int16_t x82 = 45;
	volatile int32_t x83 = INT32_MIN;
	int64_t t19 = 1950LL;

    t19 = ((x81-(x82!=x83))&x84);

    if (t19 != 11770LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x85 = 19U;
	uint16_t x86 = 31145U;
	int16_t x87 = -1;
	static int32_t x88 = INT32_MIN;
	int32_t t20 = -11;

    t20 = ((x85-(x86!=x87))&x88);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x89 = -1;
	uint16_t x91 = 403U;
	int8_t x92 = -1;
	volatile int32_t t21 = -381405;

    t21 = ((x89-(x90!=x91))&x92);

    if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile int32_t x94 = -1;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t22 = -34895;

    t22 = ((x93-(x94!=x95))&x96);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x97 = UINT16_MAX;
	int32_t x98 = -5087;
	int64_t x99 = INT64_MIN;
	static int32_t x100 = -226;
	int32_t t23 = 1;

    t23 = ((x97-(x98!=x99))&x100);

    if (t23 != 65310) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x101 = 10;
	uint32_t x102 = 4815U;
	uint8_t x103 = UINT8_MAX;
	int32_t x104 = 6400;
	volatile int32_t t24 = 477439;

    t24 = ((x101-(x102!=x103))&x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x106 = INT8_MIN;
	uint64_t x107 = 43150037030827LLU;
	volatile int32_t t25 = 4348611;

    t25 = ((x105-(x106!=x107))&x108);

    if (t25 != -17268710) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x109 = 9U;
	int64_t x110 = INT64_MIN;
	int16_t x111 = -1;
	static volatile int32_t x112 = -1;

    t26 = ((x109-(x110!=x111))&x112);

    if (t26 != 8) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x117 = 4772792U;
	uint8_t x118 = 2U;
	int32_t x120 = -13170;
	uint32_t t27 = 105U;

    t27 = ((x117-(x118!=x119))&x120);

    if (t27 != 4767878U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = UINT16_MAX;
	volatile int16_t x126 = -328;
	int32_t t28 = -493919685;

    t28 = ((x125-(x126!=x127))&x128);

    if (t28 != 104) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x129 = INT8_MIN;
	int8_t x130 = -30;
	int32_t x132 = -1194;
	volatile int32_t t29 = 1350778;

    t29 = ((x129-(x130!=x131))&x132);

    if (t29 != -1194) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x133 = 7;
	uint32_t x134 = 0U;
	volatile int16_t x135 = 0;
	int64_t x136 = 62179LL;
	volatile int64_t t30 = -30349139808329LL;

    t30 = ((x133-(x134!=x135))&x136);

    if (t30 != 3LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x137 = 0U;
	uint16_t x138 = 253U;
	int16_t x139 = INT16_MAX;
	int64_t x140 = INT64_MIN;
	volatile int64_t t31 = INT64_MIN;

    t31 = ((x137-(x138!=x139))&x140);

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x141 = INT32_MAX;
	uint64_t x142 = 77LLU;
	static int8_t x144 = 0;
	static int32_t t32 = 21;

    t32 = ((x141-(x142!=x143))&x144);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint16_t x145 = UINT16_MAX;
	int64_t x146 = 510035LL;
	uint64_t x147 = 30266807498LLU;
	uint8_t x148 = UINT8_MAX;
	int32_t t33 = 3440743;

    t33 = ((x145-(x146!=x147))&x148);

    if (t33 != 254) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x149 = 3520073;
	volatile uint64_t x150 = 39LLU;
	int32_t x152 = 56292809;
	volatile int32_t t34 = -1;

    t34 = ((x149-(x150!=x151))&x152);

    if (t34 != 1094728) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MAX;
	uint16_t x155 = 935U;
	uint64_t x156 = 1114236LLU;
	volatile uint64_t t35 = 36LLU;

    t35 = ((x153-(x154!=x155))&x156);

    if (t35 != 124LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 215U;
	uint16_t x159 = 1U;
	volatile int8_t x160 = INT8_MIN;
	static volatile int32_t t36 = 7;

    t36 = ((x157-(x158!=x159))&x160);

    if (t36 != 65408) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint16_t x161 = UINT16_MAX;
	static int64_t x162 = INT64_MIN;
	int32_t x163 = 206050;
	volatile int8_t x164 = INT8_MIN;
	int32_t t37 = 2;

    t37 = ((x161-(x162!=x163))&x164);

    if (t37 != 65408) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = 7041065;
	int32_t x166 = INT32_MIN;
	volatile int64_t x167 = INT64_MIN;
	int32_t x168 = 20294;
	static volatile int32_t t38 = -53608675;

    t38 = ((x165-(x166!=x167))&x168);

    if (t38 != 16384) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x170 = 4U;
	volatile uint64_t x172 = 526857895488780652LLU;
	volatile uint64_t t39 = 767460992660374LLU;

    t39 = ((x169-(x170!=x171))&x172);

    if (t39 != 526857895488780652LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x173 = INT64_MAX;
	static uint32_t x174 = 0U;
	int8_t x175 = INT8_MIN;
	static int8_t x176 = 21;
	volatile int64_t t40 = 76469LL;

    t40 = ((x173-(x174!=x175))&x176);

    if (t40 != 20LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x180 = INT32_MAX;
	int32_t t41 = -74373;

    t41 = ((x177-(x178!=x179))&x180);

    if (t41 != 2147483519) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint16_t x181 = 16205U;
	int64_t x182 = INT64_MAX;
	static int8_t x183 = INT8_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t42 = 78312193LLU;

    t42 = ((x181-(x182!=x183))&x184);

    if (t42 != 16204LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile int8_t x188 = -1;

    t43 = ((x185-(x186!=x187))&x188);

    if (t43 != -9535) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint64_t x189 = UINT64_MAX;
	uint16_t x190 = 968U;
	uint32_t x191 = 7806U;
	int64_t x192 = INT64_MAX;
	static volatile uint64_t t44 = 284639466LLU;

    t44 = ((x189-(x190!=x191))&x192);

    if (t44 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x195 = UINT64_MAX;
	int64_t x196 = INT64_MIN;
	int64_t t45 = 551696LL;

    t45 = ((x193-(x194!=x195))&x196);

    if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x197 = 1826U;
	uint32_t x198 = UINT32_MAX;
	int8_t x199 = INT8_MAX;
	uint64_t x200 = 15461LLU;
	static uint64_t t46 = 7281188184404LLU;

    t46 = ((x197-(x198!=x199))&x200);

    if (t46 != 1057LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x205 = 125859;
	int64_t x207 = -632974LL;
	static volatile int32_t t47 = -103849;

    t47 = ((x205-(x206!=x207))&x208);

    if (t47 != 117248) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x210 = 39U;
	int64_t x211 = INT64_MIN;
	int8_t x212 = INT8_MIN;
	volatile int32_t t48 = 2;

    t48 = ((x209-(x210!=x211))&x212);

    if (t48 != -32896) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x213 = 8865;
	int32_t x214 = -1;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	int32_t t49 = -1799728;

    t49 = ((x213-(x214!=x215))&x216);

    if (t49 != 8832) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x217 = INT8_MIN;
	static int8_t x219 = -2;
	static volatile int8_t x220 = -1;
	volatile int32_t t50 = -144720214;

    t50 = ((x217-(x218!=x219))&x220);

    if (t50 != -129) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x221 = 1728;
	int16_t x222 = INT16_MIN;
	int64_t x223 = -1698809LL;
	int32_t x224 = -999682207;
	int32_t t51 = 18433685;

    t51 = ((x221-(x222!=x223))&x224);

    if (t51 != 1569) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x225 = -1;
	static int64_t x226 = 322410376LL;
	uint8_t x228 = UINT8_MAX;

    t52 = ((x225-(x226!=x227))&x228);

    if (t52 != 254) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x229 = INT32_MAX;
	int16_t x231 = 152;
	int64_t x232 = -1673583LL;
	volatile int64_t t53 = -1932691LL;

    t53 = ((x229-(x230!=x231))&x232);

    if (t53 != 2145810064LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x234 = 2U;
	uint64_t x235 = 338092541402LLU;
	volatile uint64_t x236 = 2750LLU;
	volatile uint64_t t54 = 195LLU;

    t54 = ((x233-(x234!=x235))&x236);

    if (t54 != 2750LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x241 = -1;
	int64_t x242 = INT64_MIN;
	static int16_t x243 = -134;
	uint32_t t55 = 392U;

    t55 = ((x241-(x242!=x243))&x244);

    if (t55 != 4294967294U) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int32_t x249 = 7073;
	uint8_t x251 = 65U;
	int32_t x252 = INT32_MIN;
	static int32_t t56 = -142094454;

    t56 = ((x249-(x250!=x251))&x252);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x254 = INT64_MIN;
	uint16_t x256 = 1500U;
	static volatile int64_t t57 = -268128799455396096LL;

    t57 = ((x253-(x254!=x255))&x256);

    if (t57 != 1092LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x257 = -1;
	volatile uint64_t x258 = 20669901422962LLU;
	int32_t x259 = 29084;
	static int8_t x260 = -1;
	static int32_t t58 = 1;

    t58 = ((x257-(x258!=x259))&x260);

    if (t58 != -2) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x261 = UINT64_MAX;
	uint8_t x262 = 12U;
	uint32_t x263 = UINT32_MAX;
	static int64_t x264 = INT64_MIN;

    t59 = ((x261-(x262!=x263))&x264);

    if (t59 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x265 = INT64_MAX;
	static int16_t x266 = INT16_MAX;
	uint32_t x267 = 523016U;
	int32_t x268 = INT32_MIN;

    t60 = ((x265-(x266!=x267))&x268);

    if (t60 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x269 = 3U;
	volatile uint8_t x270 = UINT8_MAX;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = -1LL;

    t61 = ((x269-(x270!=x271))&x272);

    if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x277 = 926032089U;
	volatile int64_t x278 = 24963051060LL;
	int32_t x279 = -1;

    t62 = ((x277-(x278!=x279))&x280);

    if (t62 != 926032000U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x281 = 3U;
	int16_t x282 = INT16_MAX;
	uint64_t x283 = 2205085LLU;
	static int8_t x284 = INT8_MAX;
	static volatile uint32_t t63 = 1U;

    t63 = ((x281-(x282!=x283))&x284);

    if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint64_t x285 = 5LLU;
	volatile int16_t x286 = 196;
	int64_t x287 = -1LL;

    t64 = ((x285-(x286!=x287))&x288);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x289 = INT16_MAX;
	volatile uint16_t x290 = 3978U;
	int8_t x291 = -1;
	int32_t x292 = INT32_MAX;
	static volatile int32_t t65 = -27670290;

    t65 = ((x289-(x290!=x291))&x292);

    if (t65 != 32766) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x297 = UINT8_MAX;
	uint32_t x298 = 4U;
	volatile int8_t x299 = -6;
	int32_t x300 = 731;
	static int32_t t66 = -13340;

    t66 = ((x297-(x298!=x299))&x300);

    if (t66 != 218) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x301 = 259U;
	int16_t x303 = 7894;
	int8_t x304 = INT8_MIN;
	static volatile uint32_t t67 = 172U;

    t67 = ((x301-(x302!=x303))&x304);

    if (t67 != 256U) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = INT8_MAX;
	uint8_t x306 = 1U;
	static int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	static int32_t t68 = 25;

    t68 = ((x305-(x306!=x307))&x308);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x309 = INT32_MAX;
	uint8_t x310 = UINT8_MAX;
	int32_t x311 = INT32_MIN;
	volatile int64_t x312 = INT64_MAX;

    t69 = ((x309-(x310!=x311))&x312);

    if (t69 != 2147483646LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x313 = INT16_MIN;
	int64_t x314 = -1LL;
	static int8_t x316 = INT8_MIN;
	static volatile int32_t t70 = -918190244;

    t70 = ((x313-(x314!=x315))&x316);

    if (t70 != -32768) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x317 = INT64_MAX;
	static int32_t x318 = 44;
	int8_t x319 = INT8_MIN;
	static volatile uint64_t t71 = 63317LLU;

    t71 = ((x317-(x318!=x319))&x320);

    if (t71 != 2559917847615140672LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x321 = 1U;
	uint64_t x322 = 196024361307724311LLU;
	int32_t x323 = INT32_MIN;
	static volatile int64_t t72 = -1757LL;

    t72 = ((x321-(x322!=x323))&x324);

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x329 = -1;
	static int32_t x330 = INT32_MAX;
	static int8_t x331 = INT8_MAX;
	uint8_t x332 = 28U;
	int32_t t73 = 2;

    t73 = ((x329-(x330!=x331))&x332);

    if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x333 = -1;
	int16_t x334 = -46;
	uint64_t x335 = 3158228372640LLU;
	volatile int64_t t74 = INT64_MIN;

    t74 = ((x333-(x334!=x335))&x336);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint32_t x337 = UINT32_MAX;
	uint16_t x338 = 21U;
	int8_t x339 = INT8_MIN;
	volatile int16_t x340 = INT16_MAX;
	volatile uint32_t t75 = 8U;

    t75 = ((x337-(x338!=x339))&x340);

    if (t75 != 32766U) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x341 = 57U;
	int64_t x342 = INT64_MIN;
	int16_t x343 = 0;
	static int16_t x344 = INT16_MAX;
	int32_t t76 = 517851;

    t76 = ((x341-(x342!=x343))&x344);

    if (t76 != 56) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x345 = 98;
	static int16_t x346 = INT16_MIN;
	static int16_t x348 = INT16_MIN;
	int32_t t77 = 29281351;

    t77 = ((x345-(x346!=x347))&x348);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x349 = INT32_MAX;
	volatile uint64_t x350 = 30597005LLU;
	int16_t x351 = -1;
	uint64_t x352 = 272069775LLU;
	static uint64_t t78 = 54439794740842LLU;

    t78 = ((x349-(x350!=x351))&x352);

    if (t78 != 272069774LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x357 = 1316738548U;
	uint16_t x358 = 2U;
	uint8_t x359 = 16U;
	int32_t x360 = 184;
	volatile uint32_t t79 = 148219U;

    t79 = ((x357-(x358!=x359))&x360);

    if (t79 != 176U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x361 = INT16_MIN;
	static uint64_t x362 = 10430LLU;

    t80 = ((x361-(x362!=x363))&x364);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = 15269;
	static int32_t x368 = INT32_MAX;
	int32_t t81 = 1;

    t81 = ((x365-(x366!=x367))&x368);

    if (t81 != 15269) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x370 = -1;
	volatile int32_t x371 = -1;
	int16_t x372 = -1;
	int32_t t82 = -800632351;

    t82 = ((x369-(x370!=x371))&x372);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x373 = 3998390868LLU;
	uint8_t x374 = 12U;
	static int16_t x375 = INT16_MIN;
	int32_t x376 = -588252787;
	volatile uint64_t t83 = 6057042666290LLU;

    t83 = ((x373-(x374!=x375))&x376);

    if (t83 != 3426916353LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x377 = 608837172198LLU;
	int64_t x378 = -1LL;
	int64_t x380 = INT64_MIN;

    t84 = ((x377-(x378!=x379))&x380);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x381 = 0;
	volatile uint16_t x382 = UINT16_MAX;
	int64_t x383 = 1346594629466LL;
	int32_t x384 = 242777602;
	static int32_t t85 = -8233492;

    t85 = ((x381-(x382!=x383))&x384);

    if (t85 != 242777602) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x387 = INT16_MAX;
	int32_t x388 = 43766890;
	int32_t t86 = 33241915;

    t86 = ((x385-(x386!=x387))&x388);

    if (t86 != 96) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x389 = INT16_MIN;
	int16_t x390 = INT16_MIN;
	volatile int8_t x391 = 3;
	int8_t x392 = -2;
	volatile int32_t t87 = 3085872;

    t87 = ((x389-(x390!=x391))&x392);

    if (t87 != -32770) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x393 = 32770LLU;
	int8_t x395 = 1;
	int16_t x396 = INT16_MAX;

    t88 = ((x393-(x394!=x395))&x396);

    if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x398 = 50U;
	int16_t x399 = 2;
	int32_t x400 = -1;
	volatile uint64_t t89 = 4162347148749LLU;

    t89 = ((x397-(x398!=x399))&x400);

    if (t89 != 1415499897151619049LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x401 = 1943748;
	uint64_t x402 = 33096283914675362LLU;
	uint64_t x403 = 4989906LLU;
	int64_t x404 = -26342LL;
	volatile int64_t t90 = -2613877548LL;

    t90 = ((x401-(x402!=x403))&x404);

    if (t90 != 1935362LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x405 = -12083;
	int16_t x406 = INT16_MIN;
	volatile int16_t x407 = INT16_MAX;
	volatile uint32_t t91 = 117U;

    t91 = ((x405-(x406!=x407))&x408);

    if (t91 != 4294955212U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MAX;

    t92 = ((x409-(x410!=x411))&x412);

    if (t92 != 113545555614LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x414 = INT32_MIN;
	int32_t x416 = INT32_MAX;
	volatile int32_t t93 = 0;

    t93 = ((x413-(x414!=x415))&x416);

    if (t93 != 2147483605) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x417 = INT8_MAX;
	static int16_t x418 = 0;
	static uint32_t x419 = 51U;
	static volatile int16_t x420 = -1;
	volatile int32_t t94 = -7;

    t94 = ((x417-(x418!=x419))&x420);

    if (t94 != 126) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x421 = 924U;
	int64_t x422 = -1LL;
	int16_t x423 = -291;
	volatile uint32_t x424 = 0U;
	uint32_t t95 = 312074841U;

    t95 = ((x421-(x422!=x423))&x424);

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x425 = -1;
	uint64_t x427 = UINT64_MAX;
	volatile int32_t x428 = 3;
	volatile int32_t t96 = -21;

    t96 = ((x425-(x426!=x427))&x428);

    if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x429 = 2;
	uint64_t x430 = 5492580854875078979LLU;
	int16_t x431 = INT16_MIN;
	int32_t x432 = INT32_MIN;

    t97 = ((x429-(x430!=x431))&x432);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x433 = 2;
	static int32_t x434 = -1;
	volatile int32_t x435 = 3;
	int8_t x436 = -1;
	int32_t t98 = -428;

    t98 = ((x433-(x434!=x435))&x436);

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x437 = UINT8_MAX;
	static int32_t x438 = INT32_MIN;
	static int64_t x440 = -1LL;
	volatile int64_t t99 = -207203109565990875LL;

    t99 = ((x437-(x438!=x439))&x440);

    if (t99 != 255LL) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x443 = -1;
	uint32_t x444 = 53652177U;
	static uint32_t t100 = 190087841U;

    t100 = ((x441-(x442!=x443))&x444);

    if (t100 != 53652096U) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x445 = 2;
	uint8_t x446 = 1U;
	static int64_t x447 = INT64_MIN;
	uint64_t x448 = 15502413LLU;
	static volatile uint64_t t101 = 3241419518172LLU;

    t101 = ((x445-(x446!=x447))&x448);

    if (t101 != 1LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x449 = INT64_MAX;
	int32_t x450 = -1;
	static volatile int32_t x451 = 51793;
	int8_t x452 = 6;
	int64_t t102 = 933485984701757178LL;

    t102 = ((x449-(x450!=x451))&x452);

    if (t102 != 6LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x453 = 1;
	static volatile int16_t x454 = -8809;
	uint64_t x456 = 2582754816021555LLU;
	uint64_t t103 = 3861LLU;

    t103 = ((x453-(x454!=x455))&x456);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x457 = 199735842U;
	int16_t x458 = -999;
	int8_t x459 = -47;
	static uint16_t x460 = UINT16_MAX;
	static uint32_t t104 = 16U;

    t104 = ((x457-(x458!=x459))&x460);

    if (t104 != 47649U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x461 = 28U;
	uint16_t x462 = 44U;
	int32_t x463 = -1;
	int32_t x464 = -1;

    t105 = ((x461-(x462!=x463))&x464);

    if (t105 != 27U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x465 = UINT8_MAX;
	int32_t x466 = -1;
	uint32_t x467 = 762U;

    t106 = ((x465-(x466!=x467))&x468);

    if (t106 != 8) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x469 = INT8_MIN;
	static uint32_t x470 = UINT32_MAX;
	static int8_t x472 = -1;

    t107 = ((x469-(x470!=x471))&x472);

    if (t107 != -129) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x482 = INT16_MAX;
	static int64_t x483 = INT64_MAX;
	int8_t x484 = INT8_MAX;
	static int32_t t108 = -893162868;

    t108 = ((x481-(x482!=x483))&x484);

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int64_t x485 = -1LL;
	volatile int8_t x486 = INT8_MIN;
	int64_t x487 = INT64_MIN;
	volatile uint16_t x488 = UINT16_MAX;
	int64_t t109 = 124303107LL;

    t109 = ((x485-(x486!=x487))&x488);

    if (t109 != 65534LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x489 = UINT8_MAX;
	static int64_t x491 = INT64_MAX;

    t110 = ((x489-(x490!=x491))&x492);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x493 = 6;
	int64_t x494 = -92823407472LL;
	volatile int8_t x495 = INT8_MIN;
	int32_t x496 = INT32_MAX;
	int32_t t111 = 486820;

    t111 = ((x493-(x494!=x495))&x496);

    if (t111 != 5) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x497 = INT16_MIN;
	volatile uint64_t x499 = 518687793LLU;
	uint64_t x500 = UINT64_MAX;

    t112 = ((x497-(x498!=x499))&x500);

    if (t112 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x501 = INT16_MIN;
	static int8_t x502 = INT8_MIN;
	int8_t x503 = 24;
	int64_t x504 = INT64_MIN;

    t113 = ((x501-(x502!=x503))&x504);

    if (t113 != INT64_MIN) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x505 = INT32_MAX;
	volatile int8_t x506 = INT8_MIN;
	int64_t x508 = 99LL;
	static volatile int64_t t114 = 211240325064LL;

    t114 = ((x505-(x506!=x507))&x508);

    if (t114 != 98LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x510 = 7;
	int8_t x511 = INT8_MAX;
	uint64_t x512 = 430437959475562138LLU;
	uint64_t t115 = 977815751559936LLU;

    t115 = ((x509-(x510!=x511))&x512);

    if (t115 != 430437959475562010LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x513 = -1472254;
	uint64_t x515 = UINT64_MAX;
	int32_t x516 = 46592;
	static int32_t t116 = -162513503;

    t116 = ((x513-(x514!=x515))&x516);

    if (t116 != 32768) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x517 = UINT16_MAX;
	volatile int64_t x518 = -167LL;
	int32_t x519 = -1;
	static volatile int64_t x520 = 311LL;
	int64_t t117 = -4379592932LL;

    t117 = ((x517-(x518!=x519))&x520);

    if (t117 != 310LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x521 = INT64_MAX;
	int32_t x522 = -20;
	int32_t x523 = -1;
	uint32_t x524 = 6190562U;
	volatile int64_t t118 = -412347LL;

    t118 = ((x521-(x522!=x523))&x524);

    if (t118 != 6190562LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x525 = INT8_MIN;
	int32_t x526 = INT32_MIN;
	int64_t x527 = INT64_MAX;
	static int8_t x528 = INT8_MIN;
	int32_t t119 = 3;

    t119 = ((x525-(x526!=x527))&x528);

    if (t119 != -256) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x533 = -1;
	uint8_t x535 = UINT8_MAX;
	int16_t x536 = 1;
	int32_t t120 = 1;

    t120 = ((x533-(x534!=x535))&x536);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x537 = INT8_MIN;
	int64_t x538 = INT64_MIN;
	int8_t x539 = INT8_MAX;
	uint16_t x540 = 23U;

    t121 = ((x537-(x538!=x539))&x540);

    if (t121 != 23) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x541 = UINT64_MAX;
	int8_t x542 = INT8_MIN;
	static volatile int8_t x543 = 7;
	volatile uint64_t t122 = 45533808LLU;

    t122 = ((x541-(x542!=x543))&x544);

    if (t122 != 18446744073704812910LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint32_t x545 = 3668U;
	int16_t x546 = -1;
	uint8_t x547 = UINT8_MAX;
	static volatile uint32_t t123 = 14936U;

    t123 = ((x545-(x546!=x547))&x548);

    if (t123 != 3651U) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x549 = 1;
	uint8_t x550 = 2U;
	volatile uint32_t x552 = UINT32_MAX;
	static uint32_t t124 = 7715288U;

    t124 = ((x549-(x550!=x551))&x552);

    if (t124 != 0U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x553 = 16U;
	volatile int16_t x554 = INT16_MIN;
	static volatile int32_t x555 = INT32_MIN;
	static int8_t x556 = -60;
	static volatile int32_t t125 = -441911358;

    t125 = ((x553-(x554!=x555))&x556);

    if (t125 != 4) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x557 = -1;
	uint16_t x558 = 677U;
	volatile uint64_t x560 = 1562LLU;
	uint64_t t126 = 20LLU;

    t126 = ((x557-(x558!=x559))&x560);

    if (t126 != 1562LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x561 = 31033U;
	int8_t x562 = -2;
	int32_t x563 = -4645;
	static volatile int32_t t127 = 3;

    t127 = ((x561-(x562!=x563))&x564);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x565 = -1;
	uint32_t x566 = 7925U;
	uint64_t x567 = 10291288432107596LLU;
	int64_t x568 = INT64_MIN;
	int64_t t128 = INT64_MIN;

    t128 = ((x565-(x566!=x567))&x568);

    if (t128 != INT64_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x569 = -1;
	uint8_t x570 = UINT8_MAX;
	volatile uint16_t x571 = UINT16_MAX;
	static int32_t x572 = INT32_MAX;

    t129 = ((x569-(x570!=x571))&x572);

    if (t129 != 2147483646) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x573 = INT32_MAX;
	static uint16_t x574 = UINT16_MAX;
	volatile int8_t x575 = 0;
	static int16_t x576 = INT16_MAX;
	int32_t t130 = -161;

    t130 = ((x573-(x574!=x575))&x576);

    if (t130 != 32766) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x577 = UINT16_MAX;
	volatile int32_t x579 = -1;
	uint64_t t131 = 1029100LLU;

    t131 = ((x577-(x578!=x579))&x580);

    if (t131 != 6768LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x581 = INT64_MAX;
	int32_t x582 = INT32_MIN;

    t132 = ((x581-(x582!=x583))&x584);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x585 = INT16_MIN;
	int16_t x586 = INT16_MIN;
	volatile int32_t x587 = 7916607;
	uint32_t x588 = 62108233U;
	volatile uint32_t t133 = 471630U;

    t133 = ((x585-(x586!=x587))&x588);

    if (t133 != 62075465U) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x589 = 986LL;
	int32_t x590 = INT32_MIN;
	int32_t x591 = INT32_MIN;
	int32_t x592 = -283964;
	volatile int64_t t134 = -3559LL;

    t134 = ((x589-(x590!=x591))&x592);

    if (t134 != 704LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x594 = 14479756LLU;
	volatile int8_t x595 = INT8_MIN;
	uint64_t x596 = 4490058565106LLU;

    t135 = ((x593-(x594!=x595))&x596);

    if (t135 != 33042LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x597 = 87U;
	static uint8_t x599 = UINT8_MAX;
	int32_t x600 = INT32_MIN;

    t136 = ((x597-(x598!=x599))&x600);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x601 = 1;
	int32_t x602 = INT32_MAX;
	int32_t x603 = INT32_MIN;

    t137 = ((x601-(x602!=x603))&x604);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x606 = 1853U;
	int64_t x607 = 914LL;
	int8_t x608 = 39;
	int32_t t138 = 1;

    t138 = ((x605-(x606!=x607))&x608);

    if (t138 != 38) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x610 = INT64_MAX;
	static int64_t x611 = INT64_MIN;

    t139 = ((x609-(x610!=x611))&x612);

    if (t139 != 1346) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x613 = 1U;
	int64_t x615 = -1LL;
	volatile uint16_t x616 = 1982U;
	int32_t t140 = -1;

    t140 = ((x613-(x614!=x615))&x616);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x617 = INT16_MAX;
	int64_t x618 = INT64_MIN;
	int64_t x619 = INT64_MIN;
	volatile uint16_t x620 = 4075U;
	int32_t t141 = 1;

    t141 = ((x617-(x618!=x619))&x620);

    if (t141 != 4075) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x621 = 1756017LLU;
	volatile uint8_t x622 = UINT8_MAX;
	int16_t x623 = INT16_MIN;
	uint32_t x624 = 10067U;
	uint64_t t142 = 172408666067094413LLU;

    t142 = ((x621-(x622!=x623))&x624);

    if (t142 != 848LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x625 = 10U;
	int8_t x626 = 2;
	static int64_t x627 = -19LL;
	volatile int16_t x628 = -49;

    t143 = ((x625-(x626!=x627))&x628);

    if (t143 != 9) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x630 = INT64_MIN;
	int8_t x631 = 1;
	uint16_t x632 = 2880U;
	int32_t t144 = -482404146;

    t144 = ((x629-(x630!=x631))&x632);

    if (t144 != 2880) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int16_t x633 = INT16_MAX;
	uint32_t x634 = UINT32_MAX;
	int16_t x636 = 169;
	volatile int32_t t145 = 907481107;

    t145 = ((x633-(x634!=x635))&x636);

    if (t145 != 168) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x637 = UINT8_MAX;
	int8_t x638 = -5;
	uint64_t x639 = UINT64_MAX;
	int64_t x640 = INT64_MAX;

    t146 = ((x637-(x638!=x639))&x640);

    if (t146 != 254LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x641 = 23;
	uint32_t x642 = 1605U;
	static int32_t t147 = -383092990;

    t147 = ((x641-(x642!=x643))&x644);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x645 = 9586LL;
	int8_t x647 = INT8_MIN;
	uint8_t x648 = 2U;
	int64_t t148 = -1LL;

    t148 = ((x645-(x646!=x647))&x648);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x650 = 0U;
	int8_t x651 = -6;
	static volatile int16_t x652 = 2470;

    t149 = ((x649-(x650!=x651))&x652);

    if (t149 != 390LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x653 = -108;
	int16_t x654 = INT16_MIN;
	int64_t x655 = 7LL;
	uint8_t x656 = 114U;

    t150 = ((x653-(x654!=x655))&x656);

    if (t150 != 18) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x658 = -4045648310271LL;
	int8_t x659 = -1;
	uint16_t x660 = 144U;
	static volatile int32_t t151 = 47036086;

    t151 = ((x657-(x658!=x659))&x660);

    if (t151 != 144) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x661 = INT64_MAX;
	static uint16_t x662 = 41U;
	int64_t t152 = 16968LL;

    t152 = ((x661-(x662!=x663))&x664);

    if (t152 != 4LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x665 = 434;
	int16_t x666 = INT16_MIN;
	uint64_t x667 = 36974366LLU;
	int16_t x668 = INT16_MIN;
	int32_t t153 = 516643;

    t153 = ((x665-(x666!=x667))&x668);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x669 = INT8_MIN;
	int16_t x670 = INT16_MAX;
	int32_t x671 = INT32_MAX;
	int16_t x672 = -3;
	volatile int32_t t154 = 236566077;

    t154 = ((x669-(x670!=x671))&x672);

    if (t154 != -131) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x674 = 100623;
	uint64_t x675 = 12172599LLU;
	volatile int64_t t155 = INT64_MIN;

    t155 = ((x673-(x674!=x675))&x676);

    if (t155 != INT64_MIN) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x677 = 630040206830LLU;
	int64_t x678 = INT64_MIN;
	volatile uint8_t x679 = 59U;
	volatile uint64_t t156 = 8512968326LLU;

    t156 = ((x677-(x678!=x679))&x680);

    if (t156 != 40429LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int32_t x682 = INT32_MAX;
	int8_t x683 = 0;
	int64_t x684 = INT64_MIN;
	int64_t t157 = -30LL;

    t157 = ((x681-(x682!=x683))&x684);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x689 = UINT8_MAX;
	int32_t x691 = 7700;
	int64_t x692 = INT64_MAX;
	volatile int64_t t158 = 6379678331101LL;

    t158 = ((x689-(x690!=x691))&x692);

    if (t158 != 254LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x693 = UINT32_MAX;
	int16_t x694 = 1;
	static volatile int32_t x695 = INT32_MAX;

    t159 = ((x693-(x694!=x695))&x696);

    if (t159 != 4294967294U) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x698 = -1;
	uint64_t x699 = UINT64_MAX;
	int32_t x700 = 4350666;

    t160 = ((x697-(x698!=x699))&x700);

    if (t160 != 650) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint8_t x701 = 0U;
	int16_t x702 = 708;
	volatile uint8_t x703 = 1U;
	int16_t x704 = INT16_MIN;

    t161 = ((x701-(x702!=x703))&x704);

    if (t161 != -32768) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x705 = 3;
	uint16_t x706 = 1001U;
	volatile int16_t x707 = -1;
	uint16_t x708 = 60U;

    t162 = ((x705-(x706!=x707))&x708);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x709 = INT16_MIN;
	static int64_t x710 = INT64_MIN;
	volatile int16_t x711 = INT16_MAX;
	int64_t t163 = INT64_MIN;

    t163 = ((x709-(x710!=x711))&x712);

    if (t163 != INT64_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x713 = -1LL;
	volatile uint8_t x716 = 10U;
	static int64_t t164 = -72343976881554LL;

    t164 = ((x713-(x714!=x715))&x716);

    if (t164 != 10LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x721 = -4;
	int32_t x722 = INT32_MIN;
	int8_t x723 = -1;
	volatile int32_t t165 = 1332154;

    t165 = ((x721-(x722!=x723))&x724);

    if (t165 != -7310) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x725 = -1;
	int8_t x726 = -1;
	static uint16_t x727 = UINT16_MAX;
	volatile int32_t t166 = 20962140;

    t166 = ((x725-(x726!=x727))&x728);

    if (t166 != 380) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x730 = INT16_MIN;
	int8_t x732 = 1;
	volatile int32_t t167 = -4337;

    t167 = ((x729-(x730!=x731))&x732);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint16_t x733 = 10262U;
	static int32_t x734 = INT32_MAX;
	int16_t x735 = 105;
	volatile int16_t x736 = -1;

    t168 = ((x733-(x734!=x735))&x736);

    if (t168 != 10261) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x737 = INT16_MIN;
	int32_t x738 = 22585084;
	volatile int16_t x739 = 1023;
	int8_t x740 = INT8_MIN;
	volatile int32_t t169 = -3;

    t169 = ((x737-(x738!=x739))&x740);

    if (t169 != -32896) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x741 = 1;
	volatile int16_t x742 = -229;
	int16_t x743 = INT16_MAX;
	uint16_t x744 = 5719U;
	static int32_t t170 = -5529551;

    t170 = ((x741-(x742!=x743))&x744);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x745 = INT16_MAX;
	static int64_t x746 = -1LL;
	int16_t x747 = -1;
	static int16_t x748 = INT16_MAX;
	volatile int32_t t171 = -5397901;

    t171 = ((x745-(x746!=x747))&x748);

    if (t171 != 32767) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x749 = -1LL;
	int64_t x750 = INT64_MAX;
	int64_t x751 = 149286619811LL;
	volatile uint16_t x752 = 24459U;
	volatile int64_t t172 = -43386547285929LL;

    t172 = ((x749-(x750!=x751))&x752);

    if (t172 != 24458LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x753 = UINT64_MAX;
	int16_t x755 = INT16_MIN;
	int16_t x756 = -4;
	uint64_t t173 = 989660262LLU;

    t173 = ((x753-(x754!=x755))&x756);

    if (t173 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x757 = INT32_MAX;
	static int32_t t174 = -62710;

    t174 = ((x757-(x758!=x759))&x760);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x761 = INT8_MAX;
	static int16_t x762 = INT16_MIN;
	static int64_t x763 = INT64_MIN;
	volatile int16_t x764 = 1;
	volatile int32_t t175 = -12506;

    t175 = ((x761-(x762!=x763))&x764);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x769 = UINT16_MAX;
	uint8_t x770 = UINT8_MAX;
	int32_t x771 = INT32_MAX;
	int8_t x772 = INT8_MIN;

    t176 = ((x769-(x770!=x771))&x772);

    if (t176 != 65408) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x775 = INT64_MAX;
	static volatile int32_t x776 = 6;
	int32_t t177 = 109610;

    t177 = ((x773-(x774!=x775))&x776);

    if (t177 != 6) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x779 = INT16_MIN;
	volatile int8_t x780 = INT8_MAX;
	static volatile int32_t t178 = -117221;

    t178 = ((x777-(x778!=x779))&x780);

    if (t178 != 22) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x781 = -19;
	int8_t x784 = 2;

    t179 = ((x781-(x782!=x783))&x784);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x785 = INT16_MAX;
	int64_t x786 = 3LL;
	int64_t x787 = 2668856LL;
	uint8_t x788 = 3U;
	int32_t t180 = 101;

    t180 = ((x785-(x786!=x787))&x788);

    if (t180 != 2) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x791 = INT16_MIN;
	uint16_t x792 = 230U;
	int32_t t181 = -16752;

    t181 = ((x789-(x790!=x791))&x792);

    if (t181 != 102) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x793 = -1;
	uint64_t x794 = UINT64_MAX;
	static int64_t x795 = INT64_MIN;
	int64_t x796 = INT64_MAX;
	int64_t t182 = 1LL;

    t182 = ((x793-(x794!=x795))&x796);

    if (t182 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x801 = 17U;
	int64_t x802 = INT64_MIN;
	volatile int16_t x803 = INT16_MIN;
	volatile int32_t t183 = -2;

    t183 = ((x801-(x802!=x803))&x804);

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x805 = -1LL;
	uint32_t x806 = UINT32_MAX;
	uint16_t x807 = 2U;
	int32_t x808 = INT32_MIN;
	volatile int64_t t184 = -63625357LL;

    t184 = ((x805-(x806!=x807))&x808);

    if (t184 != -2147483648LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x813 = 348620;
	static uint64_t x814 = UINT64_MAX;
	uint8_t x815 = 13U;
	uint16_t x816 = UINT16_MAX;

    t185 = ((x813-(x814!=x815))&x816);

    if (t185 != 20939) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint16_t x817 = UINT16_MAX;
	uint16_t x818 = 464U;
	uint32_t x819 = UINT32_MAX;
	static uint8_t x820 = 6U;
	volatile int32_t t186 = 7834;

    t186 = ((x817-(x818!=x819))&x820);

    if (t186 != 6) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x821 = 0;
	uint64_t x822 = UINT64_MAX;
	volatile int64_t x824 = -1LL;
	static volatile int64_t t187 = 67861LL;

    t187 = ((x821-(x822!=x823))&x824);

    if (t187 != -1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int16_t x830 = -61;
	uint8_t x832 = 6U;
	int32_t t188 = -414743812;

    t188 = ((x829-(x830!=x831))&x832);

    if (t188 != 6) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x834 = 14;

    t189 = ((x833-(x834!=x835))&x836);

    if (t189 != -32768LL) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint16_t x837 = UINT16_MAX;
	static volatile int32_t x838 = INT32_MIN;
	uint16_t x839 = 3U;
	static int32_t x840 = INT32_MIN;

    t190 = ((x837-(x838!=x839))&x840);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x841 = UINT32_MAX;
	uint8_t x842 = 33U;
	uint64_t x843 = UINT64_MAX;
	int64_t x844 = INT64_MAX;
	volatile int64_t t191 = -11720LL;

    t191 = ((x841-(x842!=x843))&x844);

    if (t191 != 4294967294LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x847 = 1879801141618563292LLU;
	int64_t x848 = INT64_MAX;
	static volatile int64_t t192 = 292LL;

    t192 = ((x845-(x846!=x847))&x848);

    if (t192 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x853 = 9366U;
	int32_t x856 = INT32_MIN;
	int32_t t193 = 24638508;

    t193 = ((x853-(x854!=x855))&x856);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x861 = 3987756LLU;
	int8_t x862 = INT8_MIN;
	volatile int16_t x863 = INT16_MIN;
	uint64_t t194 = 16477306LLU;

    t194 = ((x861-(x862!=x863))&x864);

    if (t194 != 22827LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x865 = 485410208627116680LLU;
	static uint64_t x866 = 4207564246LLU;
	static uint64_t x867 = UINT64_MAX;
	int8_t x868 = INT8_MIN;
	uint64_t t195 = 52LLU;

    t195 = ((x865-(x866!=x867))&x868);

    if (t195 != 485410208627116672LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x869 = UINT32_MAX;
	int64_t x870 = INT64_MIN;
	int32_t x871 = INT32_MIN;
	volatile int64_t t196 = 17055344901487LL;

    t196 = ((x869-(x870!=x871))&x872);

    if (t196 != 31814494LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x873 = 58212;
	int32_t x874 = INT32_MAX;
	static uint16_t x875 = UINT16_MAX;
	int32_t t197 = 156763262;

    t197 = ((x873-(x874!=x875))&x876);

    if (t197 != 546) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x877 = INT8_MAX;
	volatile uint16_t x878 = UINT16_MAX;
	uint32_t x879 = 776370U;

    t198 = ((x877-(x878!=x879))&x880);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x882 = UINT8_MAX;
	static volatile uint32_t x883 = 1712U;
	int16_t x884 = INT16_MAX;
	int32_t t199 = 10281;

    t199 = ((x881-(x882!=x883))&x884);

    if (t199 != 32682) { NG(); } else { ; }
	
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

