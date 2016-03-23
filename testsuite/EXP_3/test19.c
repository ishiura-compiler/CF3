
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

int16_t x1 = 13;
int16_t x3 = INT16_MIN;
volatile int32_t x7 = INT32_MAX;
int8_t x8 = -1;
uint8_t x9 = UINT8_MAX;
uint8_t x10 = UINT8_MAX;
int32_t x18 = INT32_MIN;
int64_t x24 = -26367442473LL;
int8_t x28 = -11;
int64_t x37 = -63713323885772386LL;
int8_t x46 = 1;
volatile int32_t t8 = -58918429;
uint16_t x52 = UINT16_MAX;
volatile int64_t t9 = 12647165LL;
int32_t x71 = 110;
int64_t x79 = -1LL;
volatile int16_t x83 = INT16_MIN;
uint32_t x85 = 25988869U;
volatile uint32_t t16 = 24450686U;
volatile int8_t x94 = -1;
uint64_t x95 = UINT64_MAX;
int8_t x98 = -1;
static uint64_t t20 = 27498122613256334LLU;
static volatile uint64_t x122 = 398513648168LLU;
int16_t x125 = -1;
uint32_t x129 = UINT32_MAX;
int32_t x132 = INT32_MIN;
static int32_t x140 = -1;
volatile int8_t x141 = 1;
int8_t x142 = INT8_MIN;
volatile int8_t x146 = INT8_MIN;
int32_t x148 = INT32_MIN;
int16_t x154 = 5164;
uint64_t x158 = UINT64_MAX;
static volatile uint64_t t31 = 3639953330589289LLU;
volatile uint16_t x165 = 3187U;
int16_t x174 = -5803;
static int8_t x179 = INT8_MIN;
int8_t x180 = 1;
volatile uint64_t t36 = 31704LLU;
static volatile int64_t t37 = 56LL;
static volatile uint32_t t38 = 26113296U;
volatile int64_t x195 = INT64_MIN;
static volatile int16_t x201 = INT16_MAX;
static int8_t x203 = -1;
int64_t x211 = 6182781537LL;
uint32_t x215 = UINT32_MAX;
volatile uint64_t t45 = 50LLU;
uint64_t x221 = 2586180LLU;
int8_t x227 = 1;
int64_t t49 = 28037082291700LL;
int8_t x241 = INT8_MIN;
static volatile int32_t t53 = -119655185;
uint64_t x249 = 270270932876658414LLU;
static uint16_t x251 = 1614U;
uint64_t t54 = 66856508LLU;
volatile uint32_t t55 = 11822907U;
uint16_t x259 = 286U;
int8_t x262 = 41;
volatile uint32_t t57 = 131U;
uint64_t x268 = 892304656LLU;
static int64_t t60 = -63LL;
volatile int8_t x280 = INT8_MIN;
volatile uint32_t x284 = 258111U;
static volatile int32_t t64 = -1627659;
int64_t x293 = -395189465209257386LL;
volatile uint8_t x314 = UINT8_MAX;
int16_t x320 = INT16_MAX;
uint64_t x323 = UINT64_MAX;
uint32_t x330 = 498U;
volatile uint8_t x344 = 126U;
static int8_t x354 = INT8_MAX;
int32_t x355 = INT32_MIN;
int16_t x358 = -1;
int8_t x360 = -1;
int64_t x363 = INT64_MAX;
volatile int32_t t84 = 2030;
volatile int16_t x386 = -1;
volatile int64_t t87 = 999913363558LL;
static int64_t x402 = 2231474674LL;
uint8_t x408 = UINT8_MAX;
volatile uint64_t t90 = 4522608LLU;
volatile uint64_t t91 = 5610044929LLU;
int8_t x419 = 10;
int64_t t93 = -50105001922493884LL;
uint16_t x424 = 31U;
uint8_t x429 = 14U;
volatile uint16_t x432 = 1U;
static uint8_t x441 = 56U;
static uint64_t x442 = UINT64_MAX;
volatile uint64_t t99 = 14962847373359LLU;
int16_t x450 = -1;
volatile uint32_t x465 = 58U;
int8_t x467 = -1;
volatile int8_t x468 = INT8_MIN;
static int64_t x481 = -1823712LL;
static uint16_t x486 = 603U;
volatile int32_t t107 = 13;
static int64_t x489 = -1LL;
volatile int8_t x491 = INT8_MIN;
volatile int64_t t108 = -14008149127504LL;
volatile int64_t x498 = 255423185322LL;
int64_t t109 = 738340297LL;
volatile uint64_t t110 = 108LLU;
int16_t x510 = INT16_MIN;
uint16_t x517 = 29U;
uint16_t x521 = UINT16_MAX;
int8_t x526 = 41;
uint8_t x530 = UINT8_MAX;
volatile int32_t t116 = 100357;
uint8_t x539 = 3U;
int16_t x554 = INT16_MIN;
uint16_t x563 = 9074U;
int64_t t123 = -534450197639LL;
int16_t x566 = 0;
static int16_t x570 = INT16_MIN;
static uint16_t x573 = UINT16_MAX;
int16_t x575 = INT16_MIN;
uint64_t x582 = 13738194477837LLU;
volatile int32_t x588 = -469289;
volatile uint64_t t130 = 791467269433802LLU;
int16_t x600 = -1;
int16_t x605 = INT16_MIN;
int32_t t133 = -3105;
volatile uint16_t x609 = 0U;
int8_t x612 = -3;
static uint64_t x617 = 1LLU;
uint64_t t136 = 199LLU;
static uint16_t x625 = 17U;
static int32_t t137 = -14496;
int64_t x634 = INT64_MIN;
int32_t x637 = INT32_MIN;
int64_t x640 = -1LL;
static int16_t x642 = -121;
volatile int64_t x644 = INT64_MIN;
int64_t x654 = INT64_MAX;
int32_t x655 = -1;
static int8_t x667 = INT8_MAX;
int16_t x668 = 0;
static volatile int32_t x669 = INT32_MAX;
volatile uint64_t x671 = 7803117540133LLU;
volatile uint8_t x679 = 90U;
static int8_t x683 = -1;
int16_t x695 = -423;
volatile uint64_t x699 = 2078048LLU;
volatile int8_t x700 = 1;
int16_t x704 = INT16_MAX;
int64_t x709 = -1LL;
uint32_t x714 = 5884U;
volatile int32_t x719 = INT32_MAX;
uint32_t t156 = 0U;
static volatile int16_t x725 = INT16_MAX;
volatile uint64_t t158 = 30616534LLU;
uint32_t x747 = UINT32_MAX;
static int16_t x748 = -15;
int16_t x764 = INT16_MAX;
uint8_t x765 = UINT8_MAX;
static int16_t x766 = INT16_MAX;
int16_t x770 = INT16_MIN;
int32_t t164 = 47442;
volatile int16_t x774 = INT16_MIN;
int8_t x781 = INT8_MAX;
int32_t x794 = INT32_MIN;
volatile int16_t x795 = -154;
int16_t x802 = INT16_MAX;
int64_t x808 = -1LL;
uint8_t x810 = 96U;
static int16_t x811 = -1009;
volatile uint16_t x818 = 136U;
volatile uint8_t x819 = 5U;
int16_t x820 = INT16_MIN;
volatile int32_t t172 = 630228819;
int32_t x824 = -1;
uint16_t x843 = 231U;
uint16_t x852 = UINT16_MAX;
volatile uint32_t t177 = 900427U;
uint8_t x856 = UINT8_MAX;
int8_t x873 = -1;
static int32_t x880 = -105090070;
uint64_t x882 = 3875510864890199LLU;
static volatile int8_t x890 = INT8_MIN;
static volatile uint64_t x895 = 10875657LLU;
uint64_t t186 = 202LLU;
uint8_t x911 = 9U;
uint64_t x914 = 19509796266951LLU;
uint64_t t190 = 10985463LLU;
uint64_t x926 = 109757827204392750LLU;
uint16_t x927 = 481U;
int16_t x930 = -1;
uint32_t x931 = 1773650453U;
volatile int64_t x953 = INT64_MAX;
volatile int32_t x955 = -127;


void f0(void) {
    	static int64_t x2 = 2885550LL;
	static uint8_t x4 = UINT8_MAX;
	int64_t t0 = 5326LL;

    t0 = ((x1-x2)%(x3+x4));

    if (t0 != -24393LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MIN;
	static uint16_t x6 = UINT16_MAX;
	int32_t t1 = -1;

    t1 = ((x5-x6)%(x7+x8));

    if (t1 != -98303) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x11 = -10454;
	uint32_t x12 = UINT32_MAX;
	uint32_t t2 = 19328065U;

    t2 = ((x9-x10)%(x11+x12));

    if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = 39646559106730LL;
	volatile uint32_t x19 = 586705166U;
	uint16_t x20 = UINT16_MAX;
	volatile int64_t t3 = -283036000674640850LL;

    t3 = ((x17-x18)%(x19+x20));

    if (t3 != 23553107LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = -1;
	static volatile int32_t x22 = INT32_MIN;
	int16_t x23 = 204;
	int64_t t4 = -55LL;

    t4 = ((x21-x22)%(x23+x24));

    if (t4 != 2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint32_t x25 = 2586413U;
	static volatile uint8_t x26 = UINT8_MAX;
	int64_t x27 = 1LL;
	static volatile int64_t t5 = 370876LL;

    t5 = ((x25-x26)%(x27+x28));

    if (t5 != 8LL) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x38 = 5655U;
	uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile int64_t t6 = -2LL;

    t6 = ((x37-x38)%(x39+x40));

    if (t6 != -1681764312LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x41 = UINT64_MAX;
	static uint64_t x42 = 253216214LLU;
	uint32_t x43 = UINT32_MAX;
	int32_t x44 = INT32_MIN;
	volatile uint64_t t7 = 126595087258085910LLU;

    t7 = ((x41-x42)%(x43+x44));

    if (t7 != 1894267436LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x45 = INT32_MAX;
	int16_t x47 = -1;
	int8_t x48 = -10;

    t8 = ((x45-x46)%(x47+x48));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x49 = -202;
	int16_t x50 = 0;
	int64_t x51 = 43LL;

    t9 = ((x49-x50)%(x51+x52));

    if (t9 != -202LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 518657U;
	int16_t x54 = 267;
	int16_t x55 = -1;
	volatile int16_t x56 = INT16_MIN;
	static volatile uint32_t t10 = 5639U;

    t10 = ((x53-x54)%(x55+x56));

    if (t10 != 518390U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x57 = UINT8_MAX;
	int16_t x58 = INT16_MIN;
	uint16_t x59 = 6U;
	volatile int32_t x60 = -1;
	int32_t t11 = -107941295;

    t11 = ((x57-x58)%(x59+x60));

    if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x65 = -61552;
	static int64_t x66 = INT64_MIN;
	volatile int16_t x67 = INT16_MIN;
	volatile int8_t x68 = -1;
	static volatile int64_t t12 = 4598189788218356629LL;

    t12 = ((x65-x66)%(x67+x68));

    if (t12 != 3994LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = -835149802752896442LL;
	int32_t x70 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t13 = 1LL;

    t13 = ((x69-x70)%(x71+x72));

    if (t13 != -835149800605412794LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x77 = INT16_MIN;
	static int64_t x78 = INT64_MIN;
	int32_t x80 = -442336265;
	static int64_t t14 = 25223550434443667LL;

    t14 = ((x77-x78)%(x79+x80));

    if (t14 != 120738834LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x81 = -2;
	int8_t x82 = -1;
	static uint16_t x84 = UINT16_MAX;
	int32_t t15 = 1;

    t15 = ((x81-x82)%(x83+x84));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x86 = -1;
	int8_t x87 = INT8_MAX;
	static int8_t x88 = -1;

    t16 = ((x85-x86)%(x87+x88));

    if (t16 != 110U) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x89 = 127200859U;
	int16_t x90 = INT16_MIN;
	int8_t x91 = INT8_MIN;
	int8_t x92 = -1;
	uint32_t t17 = 4186396U;

    t17 = ((x89-x90)%(x91+x92));

    if (t17 != 127233627U) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = INT16_MIN;
	volatile int32_t x96 = 3852;
	static volatile uint64_t t18 = 5302078791LLU;

    t18 = ((x93-x94)%(x95+x96));

    if (t18 != 2027LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x97 = UINT64_MAX;
	volatile int16_t x99 = -1;
	volatile int16_t x100 = INT16_MIN;
	uint64_t t19 = 4032542001905073LLU;

    t19 = ((x97-x98)%(x99+x100));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x105 = 28U;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = 13;
	int32_t x108 = INT32_MIN;

    t20 = ((x105-x106)%(x107+x108));

    if (t20 != 29LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = 6;
	int16_t x110 = -1;
	volatile int32_t x111 = -1;
	static int16_t x112 = -30;
	int32_t t21 = 114132;

    t21 = ((x109-x110)%(x111+x112));

    if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
    	static int8_t x117 = INT8_MIN;
	uint32_t x118 = 3U;
	int32_t x119 = INT32_MIN;
	uint32_t x120 = UINT32_MAX;
	uint32_t t22 = 10U;

    t22 = ((x117-x118)%(x119+x120));

    if (t22 != 2147483518U) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x121 = -1LL;
	int8_t x123 = -62;
	int16_t x124 = -1;
	uint64_t t23 = 184169418666002LLU;

    t23 = ((x121-x122)%(x123+x124));

    if (t23 != 18446743675195903447LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x126 = 1627;
	int8_t x127 = INT8_MIN;
	int64_t x128 = -1LL;
	static volatile int64_t t24 = 251222279334072682LL;

    t24 = ((x125-x126)%(x127+x128));

    if (t24 != -80LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x130 = 30150533306264LLU;
	int8_t x131 = 24;
	uint64_t t25 = 497744395711963LLU;

    t25 = ((x129-x130)%(x131+x132));

    if (t25 != 18446713927471212647LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x133 = INT64_MIN;
	static int64_t x134 = INT64_MIN;
	uint32_t x135 = UINT32_MAX;
	volatile int32_t x136 = -95;
	static int64_t t26 = 6699579073786LL;

    t26 = ((x133-x134)%(x135+x136));

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x137 = INT16_MIN;
	static volatile uint64_t x138 = 545008LLU;
	uint16_t x139 = UINT16_MAX;
	uint64_t t27 = 1407695328230776LLU;

    t27 = ((x137-x138)%(x139+x140));

    if (t27 != 12046LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x143 = 132266U;
	int8_t x144 = 7;
	volatile uint32_t t28 = 8404088U;

    t28 = ((x141-x142)%(x143+x144));

    if (t28 != 129U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x145 = INT32_MIN;
	static int32_t x147 = 7247650;
	volatile int32_t t29 = -17363;

    t29 = ((x145-x146)%(x147+x148));

    if (t29 != -7247522) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x153 = 15047U;
	volatile uint32_t x155 = 1U;
	static uint64_t x156 = 22312792LLU;
	volatile uint64_t t30 = 409723870362067148LLU;

    t30 = ((x153-x154)%(x155+x156));

    if (t30 != 9883LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x157 = UINT16_MAX;
	volatile uint32_t x159 = 2143663U;
	volatile int8_t x160 = INT8_MIN;

    t31 = ((x157-x158)%(x159+x160));

    if (t31 != 65536LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	volatile uint16_t x164 = 2U;
	volatile int32_t t32 = 15;

    t32 = ((x161-x162)%(x163+x164));

    if (t32 != 3) { NG(); } else { ; }
	
}

void f33(void) {
    	static volatile int64_t x166 = INT64_MAX;
	static uint64_t x167 = 244489733902519LLU;
	int16_t x168 = INT16_MIN;
	static volatile uint64_t t33 = 84546673601954LLU;

    t33 = ((x165-x166)%(x167+x168));

    if (t33 != 241316352292272LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x169 = UINT64_MAX;
	int32_t x170 = -54045045;
	uint64_t x171 = 80404101LLU;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t34 = 5810182640492LLU;

    t34 = ((x169-x170)%(x171+x172));

    if (t34 != 54045044LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile int16_t x173 = -1;
	volatile int8_t x175 = 10;
	uint8_t x176 = 48U;
	volatile int32_t t35 = 1585588;

    t35 = ((x173-x174)%(x175+x176));

    if (t35 != 2) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x177 = UINT64_MAX;
	int8_t x178 = 42;

    t36 = ((x177-x178)%(x179+x180));

    if (t36 != 84LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x181 = -450;
	static uint32_t x182 = 4173958U;
	int32_t x183 = -1;
	volatile int64_t x184 = INT64_MAX;

    t37 = ((x181-x182)%(x183+x184));

    if (t37 != 4290792888LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x185 = -89417114;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = UINT32_MAX;
	uint16_t x188 = UINT16_MAX;

    t38 = ((x185-x186)%(x187+x188));

    if (t38 != 36673U) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x189 = INT8_MIN;
	uint16_t x190 = UINT16_MAX;
	volatile int32_t x191 = -1;
	int16_t x192 = INT16_MIN;
	int32_t t39 = 27394083;

    t39 = ((x189-x190)%(x191+x192));

    if (t39 != -125) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x193 = 26U;
	int8_t x194 = 1;
	static int32_t x196 = 930238;
	int64_t t40 = 99956561200LL;

    t40 = ((x193-x194)%(x195+x196));

    if (t40 != 25LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int8_t x197 = -1;
	uint32_t x198 = 231U;
	volatile int64_t x199 = -402570906701LL;
	uint8_t x200 = 1U;
	volatile int64_t t41 = 139725389014030LL;

    t41 = ((x197-x198)%(x199+x200));

    if (t41 != 4294967064LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x202 = 37657U;
	static volatile int8_t x204 = -1;
	static volatile uint32_t t42 = 72491U;

    t42 = ((x201-x202)%(x203+x204));

    if (t42 != 4294962406U) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x205 = 4U;
	static int8_t x206 = 0;
	int8_t x207 = INT8_MIN;
	static volatile int32_t x208 = INT32_MAX;
	volatile int32_t t43 = -309;

    t43 = ((x205-x206)%(x207+x208));

    if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x209 = UINT8_MAX;
	int8_t x210 = -2;
	int8_t x212 = INT8_MIN;
	static volatile int64_t t44 = -1118305147066LL;

    t44 = ((x209-x210)%(x211+x212));

    if (t44 != 257LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int8_t x213 = -2;
	volatile uint64_t x214 = 934821955LLU;
	volatile uint32_t x216 = 7U;

    t45 = ((x213-x214)%(x215+x216));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x217 = 66479358U;
	uint64_t x218 = 871614850985219LLU;
	uint64_t x219 = 982878032LLU;
	static volatile int64_t x220 = INT64_MAX;
	static uint64_t t46 = 241LLU;

    t46 = ((x217-x218)%(x219+x220));

    if (t46 != 9222500421087391916LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x222 = INT8_MAX;
	int32_t x223 = 302689347;
	uint16_t x224 = 2153U;
	uint64_t t47 = 183657676LLU;

    t47 = ((x221-x222)%(x223+x224));

    if (t47 != 2586053LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x225 = -734557693;
	uint8_t x226 = 31U;
	int8_t x228 = -19;
	static int32_t t48 = 34;

    t48 = ((x225-x226)%(x227+x228));

    if (t48 != -8) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x229 = UINT32_MAX;
	int64_t x230 = 564173LL;
	int8_t x231 = -18;
	int8_t x232 = INT8_MAX;

    t49 = ((x229-x230)%(x231+x232));

    if (t49 != 85LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x233 = UINT64_MAX;
	int32_t x234 = -933444203;
	uint16_t x235 = UINT16_MAX;
	int16_t x236 = 3;
	volatile uint64_t t50 = 13707701005376LLU;

    t50 = ((x233-x234)%(x235+x236));

    if (t50 != 52006LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x237 = 1U;
	int8_t x238 = -1;
	volatile int16_t x239 = -1;
	static uint32_t x240 = 896776U;
	volatile uint32_t t51 = 18U;

    t51 = ((x237-x238)%(x239+x240));

    if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x242 = 62LLU;
	int16_t x243 = -1;
	uint16_t x244 = 840U;
	uint64_t t52 = 41LLU;

    t52 = ((x241-x242)%(x243+x244));

    if (t52 != 722LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x245 = -13;
	int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	static int32_t x248 = INT32_MAX;

    t53 = ((x245-x246)%(x247+x248));

    if (t53 != 2147483635) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x250 = 3291U;
	uint32_t x252 = UINT32_MAX;

    t54 = ((x249-x250)%(x251+x252));

    if (t54 != 1120LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x253 = INT32_MAX;
	uint8_t x254 = 93U;
	volatile uint32_t x255 = UINT32_MAX;
	int16_t x256 = INT16_MIN;

    t55 = ((x253-x254)%(x255+x256));

    if (t55 != 2147483554U) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x257 = 460;
	uint8_t x258 = UINT8_MAX;
	uint8_t x260 = UINT8_MAX;
	int32_t t56 = 1;

    t56 = ((x257-x258)%(x259+x260));

    if (t56 != 205) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x261 = INT8_MIN;
	int16_t x263 = 1;
	uint32_t x264 = 1900U;

    t57 = ((x261-x262)%(x263+x264));

    if (t57 != 1708U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x265 = 3U;
	int64_t x266 = -31391140711LL;
	int64_t x267 = INT64_MIN;
	volatile uint64_t t58 = 19101732874037LLU;

    t58 = ((x265-x266)%(x267+x268));

    if (t58 != 31391140714LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x269 = UINT16_MAX;
	uint8_t x270 = 27U;
	uint64_t x271 = UINT64_MAX;
	static int8_t x272 = -5;
	static volatile uint64_t t59 = 669156822707LLU;

    t59 = ((x269-x270)%(x271+x272));

    if (t59 != 65508LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x273 = INT64_MAX;
	uint32_t x274 = UINT32_MAX;
	int32_t x275 = INT32_MIN;
	int64_t x276 = 3LL;

    t60 = ((x273-x274)%(x275+x276));

    if (t60 != 12LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x277 = 1;
	int64_t x278 = -1LL;
	uint32_t x279 = 145726178U;
	int64_t t61 = 8204049LL;

    t61 = ((x277-x278)%(x279+x280));

    if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x281 = INT8_MAX;
	uint16_t x282 = UINT16_MAX;
	static volatile uint16_t x283 = 104U;
	volatile uint32_t t62 = 23264402U;

    t62 = ((x281-x282)%(x283+x284));

    if (t62 != 11793U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x285 = 0;
	int16_t x286 = INT16_MAX;
	volatile int64_t x287 = -1LL;
	int8_t x288 = INT8_MAX;
	volatile int64_t t63 = 13472234LL;

    t63 = ((x285-x286)%(x287+x288));

    if (t63 != -7LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x289 = -1;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = 1;
	int16_t x292 = INT16_MAX;

    t64 = ((x289-x290)%(x291+x292));

    if (t64 != -256) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x294 = 0;
	static int64_t x295 = -1LL;
	static uint64_t x296 = 718139403249LLU;
	volatile uint64_t t65 = 1581215158175287361LLU;

    t65 = ((x293-x294)%(x295+x296));

    if (t65 != 410392747350LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x297 = -1;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	static uint16_t x300 = UINT16_MAX;
	int64_t t66 = -189993LL;

    t66 = ((x297-x298)%(x299+x300));

    if (t66 != 7LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x301 = INT32_MIN;
	uint32_t x302 = 317770U;
	int64_t x303 = INT64_MAX;
	static uint64_t x304 = 48625969LLU;
	volatile uint64_t t67 = 127523152LLU;

    t67 = ((x301-x302)%(x303+x304));

    if (t67 != 2147165878LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x305 = 0U;
	uint64_t x306 = 0LLU;
	volatile int16_t x307 = INT16_MAX;
	volatile int8_t x308 = INT8_MIN;
	uint64_t t68 = 103LLU;

    t68 = ((x305-x306)%(x307+x308));

    if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = -1LL;
	volatile int32_t x310 = INT32_MIN;
	uint64_t x311 = 141636LLU;
	uint8_t x312 = UINT8_MAX;
	uint64_t t69 = 506LLU;

    t69 = ((x309-x310)%(x311+x312));

    if (t69 != 105253LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = -3166988946315LL;
	int8_t x315 = INT8_MIN;
	int64_t x316 = INT64_MAX;
	int64_t t70 = -9246064137067028LL;

    t70 = ((x313-x314)%(x315+x316));

    if (t70 != -3166988946570LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x317 = -373;
	int16_t x318 = INT16_MAX;
	static volatile uint8_t x319 = 80U;
	volatile int32_t t71 = 2026;

    t71 = ((x317-x318)%(x319+x320));

    if (t71 != -293) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x321 = INT16_MIN;
	int16_t x322 = -1;
	int64_t x324 = -2LL;
	static volatile uint64_t t72 = 400498987LLU;

    t72 = ((x321-x322)%(x323+x324));

    if (t72 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x325 = 13;
	uint32_t x326 = 1515096U;
	uint32_t x327 = 28385U;
	int64_t x328 = 33157206205704LL;
	int64_t t73 = -13327122686LL;

    t73 = ((x325-x326)%(x327+x328));

    if (t73 != 4293452213LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x329 = UINT16_MAX;
	int64_t x331 = -42139620444077574LL;
	volatile int8_t x332 = 3;
	int64_t t74 = 2564LL;

    t74 = ((x329-x330)%(x331+x332));

    if (t74 != 65037LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x341 = 4133654U;
	int64_t x342 = 1039344LL;
	int32_t x343 = INT32_MIN;
	volatile int64_t t75 = -1322340591892365LL;

    t75 = ((x341-x342)%(x343+x344));

    if (t75 != 3094310LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x345 = INT16_MIN;
	static int16_t x346 = INT16_MIN;
	int16_t x347 = INT16_MAX;
	int8_t x348 = -1;
	volatile int32_t t76 = -566611986;

    t76 = ((x345-x346)%(x347+x348));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x349 = 3549U;
	int32_t x350 = -1;
	int8_t x351 = 0;
	int32_t x352 = -18054;
	static int32_t t77 = 903623;

    t77 = ((x349-x350)%(x351+x352));

    if (t77 != 3550) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x353 = 46557460LLU;
	int32_t x356 = INT32_MAX;
	volatile uint64_t t78 = 526LLU;

    t78 = ((x353-x354)%(x355+x356));

    if (t78 != 46557333LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x357 = INT8_MAX;
	volatile int64_t x359 = -1LL;
	volatile int64_t t79 = 177462633248987LL;

    t79 = ((x357-x358)%(x359+x360));

    if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x361 = INT8_MIN;
	uint32_t x362 = 22U;
	int32_t x364 = -5741;
	volatile int64_t t80 = -116LL;

    t80 = ((x361-x362)%(x363+x364));

    if (t80 != 4294967146LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x365 = 227543LLU;
	int16_t x366 = 365;
	int16_t x367 = -4;
	int16_t x368 = INT16_MAX;
	uint64_t t81 = 87LLU;

    t81 = ((x365-x366)%(x367+x368));

    if (t81 != 30600LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x369 = 1;
	int64_t x370 = INT64_MAX;
	int64_t x371 = INT64_MAX;
	int32_t x372 = -1;
	int64_t t82 = 16LL;

    t82 = ((x369-x370)%(x371+x372));

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint16_t x373 = 14102U;
	volatile int64_t x374 = INT64_MAX;
	int64_t x375 = INT64_MAX;
	int8_t x376 = -1;
	volatile int64_t t83 = 657002700153185880LL;

    t83 = ((x373-x374)%(x375+x376));

    if (t83 != -9223372036854761705LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = -57;
	int32_t x382 = INT32_MIN;
	uint16_t x383 = 2472U;
	int32_t x384 = 153486;

    t84 = ((x381-x382)%(x383+x384));

    if (t84 != 97889) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint16_t x385 = 9U;
	int16_t x387 = INT16_MAX;
	int16_t x388 = 6;
	static volatile int32_t t85 = -52658;

    t85 = ((x385-x386)%(x387+x388));

    if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x389 = -10581;
	volatile uint8_t x390 = 39U;
	volatile int64_t x391 = 6650943LL;
	static int8_t x392 = INT8_MAX;
	int64_t t86 = 2LL;

    t86 = ((x389-x390)%(x391+x392));

    if (t86 != -10620LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x393 = UINT8_MAX;
	int64_t x394 = -1LL;
	int32_t x395 = 3250;
	int64_t x396 = INT64_MIN;

    t87 = ((x393-x394)%(x395+x396));

    if (t87 != 256LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x397 = 4U;
	int8_t x398 = INT8_MAX;
	volatile int32_t x399 = INT32_MIN;
	int8_t x400 = 0;
	volatile int32_t t88 = 2827;

    t88 = ((x397-x398)%(x399+x400));

    if (t88 != -123) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x401 = -1;
	static int64_t x403 = INT64_MAX;
	int8_t x404 = INT8_MIN;
	int64_t t89 = -453LL;

    t89 = ((x401-x402)%(x403+x404));

    if (t89 != -2231474675LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x405 = 7;
	uint64_t x406 = UINT64_MAX;
	static uint8_t x407 = 21U;

    t90 = ((x405-x406)%(x407+x408));

    if (t90 != 8LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int8_t x409 = INT8_MIN;
	int32_t x410 = -139719079;
	int8_t x411 = INT8_MIN;
	static uint64_t x412 = UINT64_MAX;

    t91 = ((x409-x410)%(x411+x412));

    if (t91 != 139718951LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x413 = INT64_MIN;
	volatile uint8_t x414 = 0U;
	uint32_t x415 = 392253031U;
	static uint8_t x416 = 0U;
	int64_t t92 = -69LL;

    t92 = ((x413-x414)%(x415+x416));

    if (t92 != -75963819LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x417 = 318658LL;
	volatile int16_t x418 = INT16_MIN;
	int64_t x420 = INT64_MIN;

    t93 = ((x417-x418)%(x419+x420));

    if (t93 != 351426LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x421 = -28;
	uint16_t x422 = UINT16_MAX;
	static int16_t x423 = INT16_MIN;
	volatile int32_t t94 = 5463;

    t94 = ((x421-x422)%(x423+x424));

    if (t94 != -89) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x425 = INT64_MIN;
	static int8_t x426 = INT8_MIN;
	int64_t x427 = -305739LL;
	int8_t x428 = INT8_MAX;
	volatile int64_t t95 = 3809382837LL;

    t95 = ((x425-x426)%(x427+x428));

    if (t95 != -105692LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x430 = INT8_MAX;
	int16_t x431 = INT16_MIN;
	volatile int32_t t96 = 269203473;

    t96 = ((x429-x430)%(x431+x432));

    if (t96 != -113) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x433 = 40326U;
	int32_t x434 = -1;
	int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MAX;
	static int64_t t97 = -2830241187828852LL;

    t97 = ((x433-x434)%(x435+x436));

    if (t97 != 40327LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x437 = 536037942LLU;
	volatile int64_t x438 = INT64_MIN;
	volatile uint32_t x439 = 11338U;
	int8_t x440 = INT8_MIN;
	volatile uint64_t t98 = 1184234429985LLU;

    t98 = ((x437-x438)%(x439+x440));

    if (t98 != 7870LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x443 = UINT32_MAX;
	static int64_t x444 = -5987752048985067LL;

    t99 = ((x441-x442)%(x443+x444));

    if (t99 != 57LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x445 = UINT8_MAX;
	int16_t x446 = -1;
	uint16_t x447 = 0U;
	int8_t x448 = -1;
	volatile int32_t t100 = -1;

    t100 = ((x445-x446)%(x447+x448));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x449 = UINT32_MAX;
	static int32_t x451 = -1;
	uint32_t x452 = 3U;
	volatile uint32_t t101 = 523126U;

    t101 = ((x449-x450)%(x451+x452));

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int64_t x453 = -1LL;
	volatile int16_t x454 = -43;
	uint32_t x455 = 1U;
	volatile uint16_t x456 = 3U;
	int64_t t102 = 29848731457LL;

    t102 = ((x453-x454)%(x455+x456));

    if (t102 != 2LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x466 = 0U;
	volatile uint32_t t103 = 13692897U;

    t103 = ((x465-x466)%(x467+x468));

    if (t103 != 58U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x473 = 0U;
	volatile uint8_t x474 = UINT8_MAX;
	uint64_t x475 = UINT64_MAX;
	volatile int8_t x476 = 3;
	uint64_t t104 = 13590LLU;

    t104 = ((x473-x474)%(x475+x476));

    if (t104 != 1LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x477 = INT64_MAX;
	volatile uint8_t x478 = 68U;
	int32_t x479 = -3;
	volatile uint32_t x480 = 3908183U;
	volatile int64_t t105 = -1822324LL;

    t105 = ((x477-x478)%(x479+x480));

    if (t105 != 2359619LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x482 = INT32_MAX;
	int8_t x483 = INT8_MAX;
	int16_t x484 = -1;
	volatile int64_t t106 = 2329528118LL;

    t106 = ((x481-x482)%(x483+x484));

    if (t106 != -115LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x485 = UINT8_MAX;
	uint8_t x487 = 2U;
	static int16_t x488 = INT16_MIN;

    t107 = ((x485-x486)%(x487+x488));

    if (t107 != -348) { NG(); } else { ; }
	
}

void f108(void) {
    	static int64_t x490 = INT64_MIN;
	uint8_t x492 = 4U;

    t108 = ((x489-x490)%(x491+x492));

    if (t108 != 7LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x497 = -5;
	static int32_t x499 = 5417913;
	volatile int16_t x500 = INT16_MAX;

    t109 = ((x497-x498)%(x499+x500));

    if (t109 != -4320527LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x501 = 14284LLU;
	volatile int8_t x502 = -1;
	uint8_t x503 = UINT8_MAX;
	int64_t x504 = -57473850831LL;

    t110 = ((x501-x502)%(x503+x504));

    if (t110 != 14285LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int16_t x509 = 3;
	uint32_t x511 = 870U;
	int64_t x512 = -1LL;
	volatile int64_t t111 = -897879234248LL;

    t111 = ((x509-x510)%(x511+x512));

    if (t111 != 618LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x513 = INT8_MIN;
	uint16_t x514 = 460U;
	static volatile int16_t x515 = -1;
	uint16_t x516 = UINT16_MAX;
	volatile int32_t t112 = -45852;

    t112 = ((x513-x514)%(x515+x516));

    if (t112 != -588) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint16_t x518 = 3171U;
	int64_t x519 = 65LL;
	int8_t x520 = INT8_MAX;
	volatile int64_t t113 = -1696683574899LL;

    t113 = ((x517-x518)%(x519+x520));

    if (t113 != -70LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x522 = INT64_MAX;
	int8_t x523 = -21;
	static uint64_t x524 = 8250368942505915309LLU;
	static uint64_t t114 = 511100204076145LLU;

    t114 = ((x521-x522)%(x523+x524));

    if (t114 != 973003094348926056LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x525 = 375U;
	static volatile int16_t x527 = INT16_MIN;
	static int8_t x528 = -1;
	volatile int32_t t115 = 419129;

    t115 = ((x525-x526)%(x527+x528));

    if (t115 != 334) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x529 = 1;
	int16_t x531 = 4;
	uint8_t x532 = UINT8_MAX;

    t116 = ((x529-x530)%(x531+x532));

    if (t116 != -254) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x533 = -1LL;
	int16_t x534 = INT16_MAX;
	uint32_t x535 = UINT32_MAX;
	int64_t x536 = -1LL;
	volatile int64_t t117 = 81309652188LL;

    t117 = ((x533-x534)%(x535+x536));

    if (t117 != -32768LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x537 = UINT16_MAX;
	int16_t x538 = INT16_MIN;
	uint16_t x540 = 2U;
	int32_t t118 = 776966693;

    t118 = ((x537-x538)%(x539+x540));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x545 = INT16_MIN;
	uint64_t x546 = 99895819045LLU;
	uint16_t x547 = 0U;
	static int16_t x548 = INT16_MIN;
	volatile uint64_t t119 = 1850484238LLU;

    t119 = ((x545-x546)%(x547+x548));

    if (t119 != 18446743973813699803LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x549 = INT64_MIN;
	static int64_t x550 = INT64_MIN;
	uint64_t x551 = 5731LLU;
	uint16_t x552 = UINT16_MAX;
	volatile uint64_t t120 = 14494661927685LLU;

    t120 = ((x549-x550)%(x551+x552));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x553 = INT8_MIN;
	int64_t x555 = -1LL;
	uint32_t x556 = 16130U;
	volatile int64_t t121 = -1674892333020LL;

    t121 = ((x553-x554)%(x555+x556));

    if (t121 != 382LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x557 = INT8_MAX;
	uint64_t x558 = 37LLU;
	static volatile int16_t x559 = -1;
	static volatile uint16_t x560 = UINT16_MAX;
	volatile uint64_t t122 = 4170815652LLU;

    t122 = ((x557-x558)%(x559+x560));

    if (t122 != 90LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x561 = INT64_MAX;
	int64_t x562 = 3892675658301LL;
	uint8_t x564 = 3U;

    t123 = ((x561-x562)%(x563+x564));

    if (t123 != 5062LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int64_t x565 = INT64_MIN;
	int32_t x567 = -28450187;
	int64_t x568 = 33691938418LL;
	static volatile int64_t t124 = 179159781812368LL;

    t124 = ((x565-x566)%(x567+x568));

    if (t124 != -17550627636LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x569 = INT32_MIN;
	volatile int32_t x571 = INT32_MIN;
	int8_t x572 = INT8_MAX;
	int32_t t125 = -3072705;

    t125 = ((x569-x570)%(x571+x572));

    if (t125 != -2147450880) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x574 = -9;
	static int8_t x576 = INT8_MAX;
	static volatile int32_t t126 = 26289602;

    t126 = ((x573-x574)%(x575+x576));

    if (t126 != 262) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x577 = 2238699669330809476LLU;
	uint16_t x578 = 9U;
	int64_t x579 = -1LL;
	uint16_t x580 = 121U;
	volatile uint64_t t127 = 3754868LLU;

    t127 = ((x577-x578)%(x579+x580));

    if (t127 != 67LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x581 = 53U;
	static volatile int64_t x583 = -1LL;
	uint8_t x584 = 9U;
	volatile uint64_t t128 = 53500506614540LLU;

    t128 = ((x581-x582)%(x583+x584));

    if (t128 != 0LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x585 = 1039LL;
	uint8_t x586 = 24U;
	int64_t x587 = 36LL;
	int64_t t129 = -24215LL;

    t129 = ((x585-x586)%(x587+x588));

    if (t129 != 1015LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x593 = INT16_MAX;
	uint32_t x594 = 90414739U;
	uint64_t x595 = 93877LLU;
	int8_t x596 = -17;

    t130 = ((x593-x594)%(x595+x596));

    if (t130 != 32764LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x597 = -1;
	volatile int8_t x598 = INT8_MIN;
	uint8_t x599 = UINT8_MAX;
	int32_t t131 = 32090986;

    t131 = ((x597-x598)%(x599+x600));

    if (t131 != 127) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x601 = INT16_MAX;
	static int16_t x602 = INT16_MIN;
	volatile int64_t x603 = -138054880LL;
	uint8_t x604 = UINT8_MAX;
	static int64_t t132 = 219770046599979678LL;

    t132 = ((x601-x602)%(x603+x604));

    if (t132 != 65535LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile uint8_t x606 = 87U;
	int16_t x607 = -4911;
	int8_t x608 = INT8_MIN;

    t133 = ((x605-x606)%(x607+x608));

    if (t133 != -2621) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x610 = 13U;
	static int8_t x611 = INT8_MAX;
	int32_t t134 = -9287487;

    t134 = ((x609-x610)%(x611+x612));

    if (t134 != -13) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x613 = -1;
	int64_t x614 = -30699447946116LL;
	int8_t x615 = -1;
	volatile int8_t x616 = INT8_MIN;
	int64_t t135 = 12LL;

    t135 = ((x613-x614)%(x615+x616));

    if (t135 != 71LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x618 = 4028U;
	static volatile int64_t x619 = INT64_MIN;
	uint16_t x620 = 0U;

    t136 = ((x617-x618)%(x619+x620));

    if (t136 != 9223372036854771781LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint8_t x626 = UINT8_MAX;
	int32_t x627 = INT32_MIN;
	uint16_t x628 = UINT16_MAX;

    t137 = ((x625-x626)%(x627+x628));

    if (t137 != -238) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x633 = -1540;
	volatile int16_t x635 = -1;
	static uint32_t x636 = UINT32_MAX;
	volatile int64_t t138 = -1679045381315LL;

    t138 = ((x633-x634)%(x635+x636));

    if (t138 != 4294965756LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x638 = -1LL;
	int8_t x639 = -1;
	static int64_t t139 = 441240869001723LL;

    t139 = ((x637-x638)%(x639+x640));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x641 = 0U;
	uint32_t x643 = UINT32_MAX;
	volatile int64_t t140 = -1786346268LL;

    t140 = ((x641-x642)%(x643+x644));

    if (t140 != 121LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x645 = INT32_MIN;
	int32_t x646 = -1;
	int8_t x647 = -1;
	uint64_t x648 = 12608699LLU;
	uint64_t t141 = 0LLU;

    t141 = ((x645-x646)%(x647+x648));

    if (t141 != 11307743LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x649 = 150;
	uint16_t x650 = UINT16_MAX;
	static volatile uint16_t x651 = 2U;
	static int16_t x652 = 3;
	volatile int32_t t142 = 26087481;

    t142 = ((x649-x650)%(x651+x652));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x653 = 7360762174519LLU;
	static volatile int64_t x656 = INT64_MAX;
	uint64_t t143 = 346970LLU;

    t143 = ((x653-x654)%(x655+x656));

    if (t143 != 7360762174522LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x665 = -1LL;
	int64_t x666 = INT64_MAX;
	volatile int64_t t144 = 14LL;

    t144 = ((x665-x666)%(x667+x668));

    if (t144 != -1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x670 = 11;
	int16_t x672 = -1;
	volatile uint64_t t145 = 49195LLU;

    t145 = ((x669-x670)%(x671+x672));

    if (t145 != 2147483636LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x677 = -1LL;
	int32_t x678 = -41096301;
	uint16_t x680 = 2601U;
	int64_t t146 = 678102LL;

    t146 = ((x677-x678)%(x679+x680));

    if (t146 != 2039LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x681 = 49;
	int64_t x682 = 2786LL;
	int32_t x684 = 18;
	int64_t t147 = 5307510087LL;

    t147 = ((x681-x682)%(x683+x684));

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x685 = 6052LLU;
	static volatile int8_t x686 = INT8_MIN;
	uint8_t x687 = 8U;
	static int64_t x688 = 91102LL;
	static volatile uint64_t t148 = 205618990990860LLU;

    t148 = ((x685-x686)%(x687+x688));

    if (t148 != 6180LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x689 = INT64_MAX;
	static uint64_t x690 = 2261916806LLU;
	int16_t x691 = INT16_MIN;
	static int16_t x692 = 2;
	uint64_t t149 = 2149LLU;

    t149 = ((x689-x690)%(x691+x692));

    if (t149 != 9223372034592859001LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x693 = INT64_MIN;
	volatile int64_t x694 = -53LL;
	uint16_t x696 = UINT16_MAX;
	static volatile int64_t t150 = 6648LL;

    t150 = ((x693-x694)%(x695+x696));

    if (t150 != -13539LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x697 = -1;
	uint32_t x698 = 11209U;
	uint64_t t151 = 3197422LLU;

    t151 = ((x697-x698)%(x699+x700));

    if (t151 != 1706852LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x701 = 3080LLU;
	int64_t x702 = 14940916423274912LL;
	volatile int8_t x703 = INT8_MAX;
	uint64_t t152 = 14713420LLU;

    t152 = ((x701-x702)%(x703+x704));

    if (t152 != 25400LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x705 = -126062LL;
	static int16_t x706 = -1;
	static int64_t x707 = -1592292466459262681LL;
	int8_t x708 = 0;
	volatile int64_t t153 = -551LL;

    t153 = ((x705-x706)%(x707+x708));

    if (t153 != -126061LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x710 = 22U;
	int16_t x711 = INT16_MIN;
	volatile uint64_t x712 = 58232LLU;
	static volatile uint64_t t154 = 1171963397496LLU;

    t154 = ((x709-x710)%(x711+x712));

    if (t154 != 13169LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x713 = 0U;
	volatile int32_t x715 = -1;
	uint8_t x716 = 77U;
	uint32_t t155 = 414U;

    t155 = ((x713-x714)%(x715+x716));

    if (t155 != 12U) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x717 = INT8_MIN;
	uint32_t x718 = 224675439U;
	int32_t x720 = INT32_MIN;

    t156 = ((x717-x718)%(x719+x720));

    if (t156 != 4070291729U) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x726 = INT64_MAX;
	uint16_t x727 = 27310U;
	int8_t x728 = -18;
	volatile int64_t t157 = 284LL;

    t157 = ((x725-x726)%(x727+x728));

    if (t157 != -20272LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint64_t x737 = 1841217761317LLU;
	int64_t x738 = INT64_MAX;
	static int64_t x739 = INT64_MIN;
	uint8_t x740 = 2U;

    t158 = ((x737-x738)%(x739+x740));

    if (t158 != 1841217761316LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int32_t x745 = INT32_MAX;
	uint64_t x746 = 266068371073961LLU;
	uint64_t t159 = 1085296LLU;

    t159 = ((x745-x746)%(x747+x748));

    if (t159 != 2704438662LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint64_t x749 = UINT64_MAX;
	uint64_t x750 = 3987018150508480598LLU;
	uint8_t x751 = 9U;
	int16_t x752 = INT16_MIN;
	static volatile uint64_t t160 = 1LLU;

    t160 = ((x749-x750)%(x751+x752));

    if (t160 != 14459725923201071017LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x753 = INT16_MAX;
	int16_t x754 = 253;
	int32_t x755 = 35779637;
	uint64_t x756 = 3LLU;
	static uint64_t t161 = 1LLU;

    t161 = ((x753-x754)%(x755+x756));

    if (t161 != 32514LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x761 = UINT8_MAX;
	int16_t x762 = INT16_MIN;
	static volatile int64_t x763 = -1LL;
	int64_t t162 = -26708020LL;

    t162 = ((x761-x762)%(x763+x764));

    if (t162 != 257LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x767 = 42;
	int32_t x768 = -1;
	static int32_t t163 = -6002;

    t163 = ((x765-x766)%(x767+x768));

    if (t163 != -40) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x769 = -15;
	int8_t x771 = -9;
	static int16_t x772 = INT16_MAX;

    t164 = ((x769-x770)%(x771+x772));

    if (t164 != 32753) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x773 = -51890963;
	volatile int32_t x775 = INT32_MIN;
	volatile uint64_t x776 = 1880823LLU;
	uint64_t t165 = 1870132257132LLU;

    t165 = ((x773-x774)%(x775+x776));

    if (t165 != 2093744630LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint16_t x782 = 28757U;
	volatile uint8_t x783 = 3U;
	int64_t x784 = -8539LL;
	int64_t t166 = 625489128LL;

    t166 = ((x781-x782)%(x783+x784));

    if (t166 != -3022LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x789 = -1;
	volatile int16_t x790 = 9281;
	volatile int16_t x791 = -1;
	int8_t x792 = 0;
	volatile int32_t t167 = 648;

    t167 = ((x789-x790)%(x791+x792));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x793 = INT16_MIN;
	uint8_t x796 = UINT8_MAX;
	volatile int32_t t168 = -7;

    t168 = ((x793-x794)%(x795+x796));

    if (t168 != 91) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x801 = -120LL;
	uint32_t x803 = 2951998U;
	volatile int8_t x804 = 1;
	int64_t t169 = -578LL;

    t169 = ((x801-x802)%(x803+x804));

    if (t169 != -32887LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x805 = INT8_MIN;
	int8_t x806 = INT8_MIN;
	int32_t x807 = 600;
	volatile int64_t t170 = 117045828148213LL;

    t170 = ((x805-x806)%(x807+x808));

    if (t170 != 0LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x809 = INT16_MIN;
	int16_t x812 = 4474;
	int32_t t171 = 5;

    t171 = ((x809-x810)%(x811+x812));

    if (t171 != -1679) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x817 = INT8_MIN;

    t172 = ((x817-x818)%(x819+x820));

    if (t172 != -264) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x821 = UINT32_MAX;
	static volatile int64_t x822 = -1LL;
	volatile uint32_t x823 = 13297U;
	volatile int64_t t173 = 34379354841589LL;

    t173 = ((x821-x822)%(x823+x824));

    if (t173 != 304LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int64_t x829 = 1LL;
	int32_t x830 = INT32_MIN;
	int64_t x831 = 139129079397178820LL;
	uint8_t x832 = 5U;
	volatile int64_t t174 = -918160402602386LL;

    t174 = ((x829-x830)%(x831+x832));

    if (t174 != 2147483649LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x837 = 44;
	volatile int16_t x838 = -1;
	uint64_t x839 = 133387589279369LLU;
	volatile uint8_t x840 = 97U;
	uint64_t t175 = 7668367290LLU;

    t175 = ((x837-x838)%(x839+x840));

    if (t175 != 45LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint32_t x841 = UINT32_MAX;
	static int16_t x842 = INT16_MIN;
	int32_t x844 = INT32_MIN;
	volatile uint32_t t176 = 6257U;

    t176 = ((x841-x842)%(x843+x844));

    if (t176 != 32767U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x849 = INT32_MIN;
	int32_t x850 = -1;
	uint32_t x851 = 812682876U;

    t177 = ((x849-x850)%(x851+x852));

    if (t177 != 521986827U) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x853 = -1;
	int16_t x854 = -1;
	int16_t x855 = INT16_MAX;
	int32_t t178 = -47;

    t178 = ((x853-x854)%(x855+x856));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x857 = -1LL;
	uint64_t x858 = 2131784434024090LLU;
	static uint32_t x859 = 1994842404U;
	static uint64_t x860 = UINT64_MAX;
	volatile uint64_t t179 = 155775496LLU;

    t179 = ((x857-x858)%(x859+x860));

    if (t179 != 1303152419LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x874 = INT8_MIN;
	static int32_t x875 = -1;
	int8_t x876 = INT8_MAX;
	int32_t t180 = 1182;

    t180 = ((x873-x874)%(x875+x876));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x877 = 26267U;
	static int16_t x878 = INT16_MAX;
	int16_t x879 = 6;
	volatile int32_t t181 = 2;

    t181 = ((x877-x878)%(x879+x880));

    if (t181 != -6500) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x881 = INT8_MIN;
	int16_t x883 = INT16_MIN;
	volatile uint8_t x884 = 60U;
	uint64_t t182 = 17496455702677LLU;

    t182 = ((x881-x882)%(x883+x884));

    if (t182 != 18442868562844661289LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x885 = 129170LLU;
	int32_t x886 = INT32_MAX;
	int16_t x887 = INT16_MIN;
	static int16_t x888 = INT16_MIN;
	volatile uint64_t t183 = 30015780LLU;

    t183 = ((x885-x886)%(x887+x888));

    if (t183 != 18446744071562197139LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile int8_t x889 = -1;
	static int8_t x891 = -1;
	static int32_t x892 = -1;
	volatile int32_t t184 = 228;

    t184 = ((x889-x890)%(x891+x892));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x893 = INT64_MAX;
	static int16_t x894 = 5666;
	uint16_t x896 = 2214U;
	uint64_t t185 = 924807403LLU;

    t185 = ((x893-x894)%(x895+x896));

    if (t185 != 5516525LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x897 = -1;
	uint64_t x898 = UINT64_MAX;
	static int64_t x899 = -1LL;
	int16_t x900 = -204;

    t186 = ((x897-x898)%(x899+x900));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x901 = -1;
	int64_t x902 = -3LL;
	int8_t x903 = INT8_MIN;
	int64_t x904 = -1LL;
	static int64_t t187 = -4157LL;

    t187 = ((x901-x902)%(x903+x904));

    if (t187 != 2LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x905 = -13865;
	volatile int16_t x906 = INT16_MAX;
	uint64_t x907 = 442205955528545629LLU;
	static int8_t x908 = -1;
	uint64_t t188 = 89001232084LLU;

    t188 = ((x905-x906)%(x907+x908));

    if (t188 != 316299897039134236LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x909 = -3468127;
	int64_t x910 = 225LL;
	int32_t x912 = -1039113465;
	int64_t t189 = 3952584629171440244LL;

    t189 = ((x909-x910)%(x911+x912));

    if (t189 != -3468352LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x913 = 3691942260876789LLU;
	static volatile int16_t x915 = -351;
	volatile int64_t x916 = -1LL;

    t190 = ((x913-x914)%(x915+x916));

    if (t190 != 3672432464609838LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x917 = -62518942LL;
	uint16_t x918 = 12U;
	int8_t x919 = 6;
	static uint32_t x920 = UINT32_MAX;
	int64_t t191 = -292929353838574176LL;

    t191 = ((x917-x918)%(x919+x920));

    if (t191 != -4LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x925 = 1U;
	int64_t x928 = 10661790368322LL;
	uint64_t t192 = 3669170251839901443LLU;

    t192 = ((x925-x926)%(x927+x928));

    if (t192 != 7550588992833LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x929 = -1;
	static uint16_t x932 = UINT16_MAX;
	volatile uint32_t t193 = 1905113U;

    t193 = ((x929-x930)%(x931+x932));

    if (t193 != 0U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x933 = 1108986U;
	volatile int32_t x934 = 59827;
	uint32_t x935 = UINT32_MAX;
	uint8_t x936 = 4U;
	volatile uint32_t t194 = 32U;

    t194 = ((x933-x934)%(x935+x936));

    if (t194 != 2U) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x941 = -3696357;
	static volatile uint8_t x942 = 3U;
	uint16_t x943 = 1U;
	int32_t x944 = 298;
	int32_t t195 = -273157;

    t195 = ((x941-x942)%(x943+x944));

    if (t195 != -122) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint8_t x945 = UINT8_MAX;
	int16_t x946 = INT16_MAX;
	static int16_t x947 = INT16_MAX;
	int8_t x948 = -1;
	int32_t t196 = -28682;

    t196 = ((x945-x946)%(x947+x948));

    if (t196 != -32512) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x954 = 1U;
	uint32_t x956 = UINT32_MAX;
	static int64_t t197 = -25LL;

    t197 = ((x953-x954)%(x955+x956));

    if (t197 != 8190LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x961 = 7;
	static int64_t x962 = -19888346517356461LL;
	volatile uint32_t x963 = 116575U;
	int32_t x964 = 62430578;
	int64_t t198 = -4608LL;

    t198 = ((x961-x962)%(x963+x964));

    if (t198 != 43385171LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x965 = -1;
	volatile uint16_t x966 = 95U;
	int32_t x967 = INT32_MAX;
	uint64_t x968 = UINT64_MAX;
	uint64_t t199 = 269LLU;

    t199 = ((x965-x966)%(x967+x968));

    if (t199 != 2147483566LLU) { NG(); } else { ; }
	
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

