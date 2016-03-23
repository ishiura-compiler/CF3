
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

int8_t x4 = -1;
int32_t x5 = -1;
volatile int32_t x11 = -1;
uint32_t x12 = UINT32_MAX;
int64_t x17 = INT64_MIN;
static uint64_t t5 = 122471550200191LLU;
int32_t x27 = -932845939;
volatile uint64_t t8 = 5LLU;
volatile int64_t x42 = -1LL;
volatile uint64_t t11 = 13936LLU;
volatile int32_t t12 = -31;
uint64_t x54 = 722177LLU;
int16_t x58 = INT16_MIN;
uint64_t t14 = 126885LLU;
int8_t x65 = -1;
int64_t x72 = INT64_MIN;
static volatile uint64_t t16 = 599630575LLU;
static int16_t x74 = INT16_MAX;
int16_t x76 = INT16_MIN;
int32_t t17 = -866541;
int64_t x83 = 259LL;
int8_t x89 = 58;
static uint32_t x91 = 3911663U;
volatile int32_t x92 = INT32_MIN;
uint16_t x93 = 1884U;
int64_t x94 = -1LL;
static uint64_t x97 = UINT64_MAX;
int8_t x100 = INT8_MAX;
int8_t x104 = -1;
uint8_t x106 = 11U;
int64_t x107 = -1LL;
uint64_t t24 = 78480LLU;
static volatile int8_t x111 = -1;
int32_t x116 = -1;
volatile int16_t x120 = 6;
volatile int32_t t27 = -123503655;
volatile int16_t x136 = INT16_MAX;
int64_t t30 = 397767986400369182LL;
uint64_t x143 = 282049LLU;
static volatile uint8_t x146 = UINT8_MAX;
volatile int32_t x159 = -3;
int64_t x164 = -6690764095849283LL;
volatile int32_t x179 = -121529898;
static int32_t t41 = 1;
int32_t x187 = -489242;
static volatile int8_t x190 = -1;
int64_t x191 = INT64_MIN;
int64_t x192 = INT64_MIN;
uint16_t x193 = UINT16_MAX;
int16_t x198 = INT16_MIN;
static int8_t x217 = INT8_MIN;
int32_t x237 = -1;
int64_t x240 = INT64_MAX;
int16_t x241 = INT16_MIN;
int8_t x247 = -3;
uint32_t t55 = 79540886U;
uint16_t x252 = 0U;
uint64_t x253 = 11970366LLU;
volatile uint64_t t57 = 87129435005805740LLU;
static volatile uint16_t x267 = UINT16_MAX;
volatile uint64_t t62 = 81202LLU;
int64_t x282 = INT64_MAX;
int64_t x284 = INT64_MIN;
volatile int64_t t65 = -2232890549687LL;
int32_t x297 = INT32_MIN;
uint64_t x300 = 434645LLU;
static uint64_t x304 = 5184861140269029LLU;
int64_t t68 = 274278364053LL;
volatile int64_t t70 = -489081443321835LL;
int32_t x325 = -1;
int64_t x334 = -5413LL;
volatile int64_t t74 = -48730137731305LL;
volatile int32_t x337 = 12610;
uint8_t x342 = 3U;
uint64_t x350 = 14637952109453012LLU;
volatile int32_t x351 = INT32_MIN;
uint8_t x362 = 3U;
int8_t x363 = 4;
int32_t x366 = -1;
uint64_t x375 = 27467941906391825LLU;
uint64_t x376 = 764437LLU;
int16_t x377 = 40;
uint32_t x382 = 48U;
int16_t x384 = -96;
int64_t x386 = INT64_MIN;
static uint64_t t87 = 105895206912364LLU;
uint8_t x393 = UINT8_MAX;
int8_t x395 = INT8_MIN;
volatile uint32_t t89 = 112811U;
int16_t x400 = INT16_MIN;
uint32_t x404 = UINT32_MAX;
int16_t x411 = -1;
int16_t x419 = INT16_MIN;
int8_t x425 = 2;
static int64_t x428 = 49590231113196LL;
int64_t t97 = -6LL;
int32_t x437 = INT32_MAX;
uint64_t x438 = UINT64_MAX;
volatile int64_t t100 = -111300LL;
volatile uint32_t x447 = UINT32_MAX;
int32_t x449 = -1904;
volatile int64_t x464 = INT64_MAX;
uint32_t x466 = 7851950U;
int32_t x469 = INT32_MAX;
volatile int32_t t108 = -3204526;
static uint64_t x479 = UINT64_MAX;
int16_t x486 = -1;
int8_t x488 = -1;
static volatile uint32_t t111 = 121084378U;
uint32_t x501 = 175U;
uint16_t x504 = UINT16_MAX;
volatile uint8_t x506 = 2U;
static int64_t x518 = INT64_MAX;
static uint8_t x525 = 6U;
uint8_t x526 = UINT8_MAX;
static int8_t x528 = INT8_MIN;
static volatile uint16_t x533 = UINT16_MAX;
uint64_t x535 = UINT64_MAX;
volatile uint32_t x537 = 46000U;
volatile uint8_t x540 = 0U;
uint16_t x547 = 3U;
int64_t t126 = 123362762753823LL;
volatile uint64_t t127 = 828052451907LLU;
uint64_t x567 = 1468047LLU;
int64_t x568 = -1LL;
static uint64_t t128 = 692650LLU;
volatile int16_t x572 = INT16_MAX;
volatile uint16_t x579 = 4U;
uint32_t x602 = UINT32_MAX;
uint8_t x603 = UINT8_MAX;
volatile uint64_t t137 = 2LLU;
volatile uint8_t x606 = UINT8_MAX;
int16_t x617 = 764;
int32_t x619 = -1;
int64_t x623 = INT64_MIN;
static volatile uint32_t x625 = 4998U;
uint8_t x628 = 10U;
volatile int32_t x629 = INT32_MIN;
uint8_t x636 = 1U;
int8_t x640 = 0;
uint64_t x648 = 1968479LLU;
static uint64_t t148 = 2723957560952LLU;
int16_t x651 = 251;
volatile uint64_t t149 = 1415LLU;
int8_t x662 = -5;
uint16_t x668 = 8269U;
uint8_t x674 = UINT8_MAX;
int16_t x676 = -1;
uint32_t x681 = UINT32_MAX;
int8_t x687 = INT8_MIN;
int32_t x691 = INT32_MIN;
static int64_t x693 = 724138LL;
int32_t t161 = -99464;
int32_t x701 = -1;
volatile uint32_t x708 = UINT32_MAX;
int32_t x709 = INT32_MIN;
int32_t x711 = -206;
volatile int64_t t164 = -28102848084326LL;
int8_t x713 = 40;
int32_t x724 = -3226;
int16_t x732 = -1;
uint32_t t169 = 56103875U;
int32_t x738 = -1;
static int64_t x745 = 165617504595280LL;
int8_t x746 = INT8_MIN;
volatile int32_t x761 = INT32_MIN;
int32_t x763 = INT32_MIN;
int64_t t175 = -36680436687806LL;
volatile uint16_t x770 = 1U;
int8_t x777 = INT8_MIN;
static volatile int16_t x781 = -6;
int64_t x790 = INT64_MIN;
static int32_t x801 = -480;
volatile int64_t x806 = INT64_MIN;
int64_t t184 = -77939LL;
int16_t x811 = INT16_MAX;
uint8_t x814 = UINT8_MAX;
uint32_t x816 = 3415928U;
static uint64_t x817 = 4492076506810LLU;
static int8_t x818 = INT8_MIN;
volatile int64_t x820 = INT64_MAX;
int32_t x821 = -1;
int16_t x824 = -1;
int16_t x825 = -206;
int64_t x826 = -3LL;
int64_t x837 = -38052360387LL;
uint32_t x842 = UINT32_MAX;
int32_t x848 = -1;
static int32_t t195 = 349195197;
static int32_t x854 = INT32_MIN;
static int8_t x862 = 1;
int32_t x863 = INT32_MIN;
uint16_t x864 = 14439U;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	int32_t x2 = -22520;
	uint16_t x3 = 295U;
	int64_t t0 = -13703LL;

    t0 = ((x1|x2)-(x3^x4));

    if (t0 != 295LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int16_t x6 = -4;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = 9U;
	volatile int64_t t1 = -280036220610165583LL;

    t1 = ((x5|x6)-(x7^x8));

    if (t1 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = 6949178871763LL;
	volatile int64_t x10 = INT64_MIN;
	int64_t t2 = 6311319470LL;

    t2 = ((x9|x10)-(x11^x12));

    if (t2 != -9223365087675904045LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 892439U;
	uint8_t x14 = 23U;
	static int32_t x15 = -1;
	int64_t x16 = -1LL;
	int64_t t3 = -23888600LL;

    t3 = ((x13|x14)-(x15^x16));

    if (t3 != 892439LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 2046684319U;
	uint64_t x19 = 117LLU;
	int32_t x20 = 208168271;
	static uint64_t t4 = 34852443335004LLU;

    t4 = ((x17|x18)-(x19^x20));

    if (t4 != 9223372038693291877LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = UINT32_MAX;
	uint8_t x22 = 5U;
	int32_t x23 = -1870108;
	uint64_t x24 = 1712692321LLU;

    t5 = ((x21|x22)-(x23^x24));

    if (t5 != 6006838650LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int16_t x26 = INT16_MAX;
	static int16_t x28 = -1;
	volatile int32_t t6 = -20;

    t6 = ((x25|x26)-(x27^x28));

    if (t6 != -932845939) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = 12U;
	uint16_t x30 = 4U;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t7 = 84557017;

    t7 = ((x29|x30)-(x31^x32));

    if (t7 != 12) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x33 = 86552861LLU;
	int8_t x34 = -58;
	static uint32_t x35 = 0U;
	uint16_t x36 = UINT16_MAX;

    t8 = ((x33|x34)-(x35^x36));

    if (t8 != 18446744073709486048LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x37 = 26766701839186LL;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = 24U;
	uint32_t x40 = UINT32_MAX;
	volatile int64_t t9 = -227371674LL;

    t9 = ((x37|x38)-(x39^x40));

    if (t9 != -5976800405LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x41 = 801LLU;
	uint64_t x43 = UINT64_MAX;
	volatile int64_t x44 = INT64_MAX;
	volatile uint64_t t10 = 130783200872917LLU;

    t10 = ((x41|x42)-(x43^x44));

    if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x45 = 4467500818153659LLU;
	int16_t x46 = 55;
	volatile uint32_t x47 = UINT32_MAX;
	int8_t x48 = INT8_MIN;

    t11 = ((x45|x46)-(x47^x48));

    if (t11 != 4467500818153536LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -39;
	static volatile int32_t x50 = -847;
	uint16_t x51 = 250U;
	int16_t x52 = -253;

    t12 = ((x49|x50)-(x51^x52));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = -1;
	int16_t x55 = -1;
	volatile uint16_t x56 = 2884U;
	uint64_t t13 = 678LLU;

    t13 = ((x53|x54)-(x55^x56));

    if (t13 != 2884LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x57 = 46784U;
	uint64_t x59 = 1888785LLU;
	static int64_t x60 = INT64_MAX;

    t14 = ((x57|x58)-(x59^x60));

    if (t14 != 9223372041151613138LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x66 = -46610;
	int64_t x67 = 90018955LL;
	int32_t x68 = INT32_MIN;
	static volatile int64_t t15 = -1027160985371519957LL;

    t15 = ((x65|x66)-(x67^x68));

    if (t15 != 2057464692LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x69 = UINT8_MAX;
	int16_t x70 = -1;
	volatile uint64_t x71 = 13233LLU;

    t16 = ((x69|x70)-(x71^x72));

    if (t16 != 9223372036854762574LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x73 = -1;
	int16_t x75 = -1;

    t17 = ((x73|x74)-(x75^x76));

    if (t17 != -32768) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x77 = -1;
	uint16_t x78 = 6385U;
	volatile uint64_t x79 = UINT64_MAX;
	static int64_t x80 = -1LL;
	volatile uint64_t t18 = UINT64_MAX;

    t18 = ((x77|x78)-(x79^x80));

    if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 2733U;
	int64_t x82 = INT64_MIN;
	static int16_t x84 = -1;
	static volatile int64_t t19 = -29724565LL;

    t19 = ((x81|x82)-(x83^x84));

    if (t19 != -9223372036854772815LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x90 = -1;
	volatile uint32_t t20 = 1U;

    t20 = ((x89|x90)-(x91^x92));

    if (t20 != 2143571984U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x95 = 1068375017U;
	int32_t x96 = INT32_MIN;
	volatile int64_t t21 = 50225743632502119LL;

    t21 = ((x93|x94)-(x95^x96));

    if (t21 != -3215858666LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x98 = INT16_MIN;
	int8_t x99 = -4;
	volatile uint64_t t22 = 43962LLU;

    t22 = ((x97|x98)-(x99^x100));

    if (t22 != 124LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = 0;
	volatile int32_t x102 = -1;
	static uint8_t x103 = 0U;
	int32_t t23 = -63059;

    t23 = ((x101|x102)-(x103^x104));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x105 = 16322LLU;
	int8_t x108 = INT8_MAX;

    t24 = ((x105|x106)-(x107^x108));

    if (t24 != 16459LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x109 = 1;
	uint16_t x110 = 7U;
	volatile int8_t x112 = 0;
	static volatile int32_t t25 = 0;

    t25 = ((x109|x110)-(x111^x112));

    if (t25 != 8) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x113 = 0U;
	int32_t x114 = 103;
	volatile uint64_t x115 = UINT64_MAX;
	uint64_t t26 = 786606LLU;

    t26 = ((x113|x114)-(x115^x116));

    if (t26 != 103LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = -1;
	volatile int16_t x118 = 2;
	int32_t x119 = INT32_MIN;

    t27 = ((x117|x118)-(x119^x120));

    if (t27 != 2147483641) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x121 = 567U;
	uint32_t x122 = 545U;
	uint32_t x123 = 180920U;
	int64_t x124 = INT64_MIN;
	int64_t t28 = 57161LL;

    t28 = ((x121|x122)-(x123^x124));

    if (t28 != 9223372036854595455LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x125 = -1LL;
	static volatile int64_t x126 = -38985LL;
	volatile int32_t x127 = INT32_MIN;
	uint32_t x128 = 14U;
	volatile int64_t t29 = 44LL;

    t29 = ((x125|x126)-(x127^x128));

    if (t29 != -2147483663LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x133 = -1;
	volatile int64_t x134 = -1449001LL;
	int8_t x135 = 1;

    t30 = ((x133|x134)-(x135^x136));

    if (t30 != -32767LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x137 = INT16_MIN;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = UINT64_MAX;
	uint64_t t31 = 111LLU;

    t31 = ((x137|x138)-(x139^x140));

    if (t31 != 32767LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x141 = UINT16_MAX;
	uint16_t x142 = UINT16_MAX;
	int32_t x144 = -1;
	volatile uint64_t t32 = 33887712369173190LLU;

    t32 = ((x141|x142)-(x143^x144));

    if (t32 != 347585LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x145 = 883435;
	static int64_t x147 = -1LL;
	uint16_t x148 = 0U;
	volatile int64_t t33 = 59302973618218805LL;

    t33 = ((x145|x146)-(x147^x148));

    if (t33 != 883456LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x149 = 32U;
	int8_t x150 = -1;
	int8_t x151 = -1;
	int16_t x152 = -13;
	volatile int32_t t34 = 247367886;

    t34 = ((x149|x150)-(x151^x152));

    if (t34 != -13) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x157 = -1;
	int64_t x158 = 0LL;
	static volatile uint64_t x160 = 145051LLU;
	uint64_t t35 = 7709874162775LLU;

    t35 = ((x157|x158)-(x159^x160));

    if (t35 != 145049LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x161 = -4113545820LL;
	int8_t x162 = INT8_MIN;
	int32_t x163 = -6988;
	volatile int64_t t36 = 2LL;

    t36 = ((x161|x162)-(x163^x164));

    if (t36 != -6690764095854693LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = -1744LL;
	int8_t x166 = INT8_MAX;
	volatile int16_t x167 = -1;
	int8_t x168 = 1;
	volatile int64_t t37 = -197713LL;

    t37 = ((x165|x166)-(x167^x168));

    if (t37 != -1663LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile int16_t x170 = -29;
	uint64_t x171 = UINT64_MAX;
	uint16_t x172 = 981U;
	static volatile uint64_t t38 = 9902134685079LLU;

    t38 = ((x169|x170)-(x171^x172));

    if (t38 != 981LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x173 = 24U;
	uint64_t x174 = UINT64_MAX;
	int16_t x175 = -1;
	uint8_t x176 = 21U;
	uint64_t t39 = 544421550926936139LLU;

    t39 = ((x173|x174)-(x175^x176));

    if (t39 != 21LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x177 = 2253847U;
	volatile int64_t x178 = -425429398LL;
	int16_t x180 = -2032;
	volatile int64_t t40 = 953505188678377007LL;

    t40 = ((x177|x178)-(x179^x180));

    if (t40 != -546827079LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x181 = -1;
	int8_t x182 = INT8_MIN;
	static volatile int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MIN;

    t41 = ((x181|x182)-(x183^x184));

    if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x185 = -37514444316454LL;
	static uint32_t x186 = UINT32_MAX;
	static uint64_t x188 = UINT64_MAX;
	volatile uint64_t t42 = 377327346065144LLU;

    t42 = ((x185|x186)-(x187^x188));

    if (t42 != 18446706561464699110LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int16_t x189 = INT16_MIN;
	static volatile int64_t t43 = -4917265305LL;

    t43 = ((x189|x190)-(x191^x192));

    if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x194 = 69003284U;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = UINT32_MAX;
	volatile int64_t t44 = 112964864263399LL;

    t44 = ((x193|x194)-(x195^x196));

    if (t44 != -9223372032490799105LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x197 = 6U;
	int16_t x199 = INT16_MAX;
	volatile int64_t x200 = INT64_MIN;
	int64_t t45 = 500736956361793554LL;

    t45 = ((x197|x198)-(x199^x200));

    if (t45 != 9223372036854710279LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x201 = -1LL;
	int8_t x202 = INT8_MAX;
	uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MAX;
	int64_t t46 = 1LL;

    t46 = ((x201|x202)-(x203^x204));

    if (t46 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x205 = -1099LL;
	static int8_t x206 = -1;
	int64_t x207 = -1LL;
	static int32_t x208 = INT32_MIN;
	int64_t t47 = 1LL;

    t47 = ((x205|x206)-(x207^x208));

    if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x218 = INT64_MAX;
	int8_t x219 = INT8_MAX;
	volatile uint16_t x220 = 1U;
	volatile int64_t t48 = 46227LL;

    t48 = ((x217|x218)-(x219^x220));

    if (t48 != -127LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x221 = UINT8_MAX;
	int64_t x222 = INT64_MIN;
	volatile int8_t x223 = INT8_MIN;
	uint8_t x224 = 57U;
	static volatile int64_t t49 = -65022914LL;

    t49 = ((x221|x222)-(x223^x224));

    if (t49 != -9223372036854775482LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x225 = INT64_MIN;
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = -2;
	uint64_t x228 = 0LLU;
	volatile uint64_t t50 = 130LLU;

    t50 = ((x225|x226)-(x227^x228));

    if (t50 != 9223372036854841345LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x229 = UINT64_MAX;
	int32_t x230 = 0;
	uint8_t x231 = 41U;
	uint8_t x232 = UINT8_MAX;
	volatile uint64_t t51 = 275LLU;

    t51 = ((x229|x230)-(x231^x232));

    if (t51 != 18446744073709551401LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static int16_t x233 = 2101;
	static int16_t x234 = INT16_MIN;
	uint16_t x235 = UINT16_MAX;
	static int64_t x236 = -1LL;
	static int64_t t52 = -71323523786929451LL;

    t52 = ((x233|x234)-(x235^x236));

    if (t52 != 34869LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x238 = INT8_MIN;
	uint32_t x239 = 2883U;
	volatile int64_t t53 = 20776813267LL;

    t53 = ((x237|x238)-(x239^x240));

    if (t53 != -9223372036854772925LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x242 = INT8_MAX;
	int64_t x243 = -2LL;
	int32_t x244 = INT32_MAX;
	int64_t t54 = -1233LL;

    t54 = ((x241|x242)-(x243^x244));

    if (t54 != 2147451006LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x245 = 9;
	uint32_t x246 = 32305U;
	int16_t x248 = 111;

    t55 = ((x245|x246)-(x247^x248));

    if (t55 != 32423U) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x249 = -3885993999LL;
	static uint8_t x250 = 1U;
	volatile int16_t x251 = -1;
	volatile int64_t t56 = -1932015011604899904LL;

    t56 = ((x249|x250)-(x251^x252));

    if (t56 != -3885993998LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x254 = -50;
	uint16_t x255 = 2415U;
	int32_t x256 = 834104595;

    t57 = ((x253|x254)-(x255^x256));

    if (t57 != 18446744072875449218LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x257 = -1;
	int64_t x258 = INT64_MIN;
	volatile int32_t x259 = -13255;
	int8_t x260 = INT8_MIN;
	static int64_t t58 = -2772286LL;

    t58 = ((x257|x258)-(x259^x260));

    if (t58 != -13242LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x265 = 6475LLU;
	static uint16_t x266 = 20U;
	uint8_t x268 = 9U;
	uint64_t t59 = 372545317LLU;

    t59 = ((x265|x266)-(x267^x268));

    if (t59 != 18446744073709492585LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x269 = -1;
	int32_t x270 = INT32_MAX;
	int32_t x271 = 125;
	volatile uint64_t x272 = 29432154297LLU;
	volatile uint64_t t60 = 2040615148028029029LLU;

    t60 = ((x269|x270)-(x271^x272));

    if (t60 != 18446744044277397307LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	static int64_t x275 = -972162LL;
	int8_t x276 = INT8_MAX;
	volatile int64_t t61 = 1555993991829571LL;

    t61 = ((x273|x274)-(x275^x276));

    if (t61 != 972286LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x277 = 85228197425713028LLU;
	volatile uint16_t x278 = 40U;
	volatile uint8_t x279 = UINT8_MAX;
	uint32_t x280 = UINT32_MAX;

    t62 = ((x277|x278)-(x279^x280));

    if (t62 != 85228193130746028LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = INT32_MIN;
	uint8_t x283 = 8U;
	volatile int64_t t63 = 100359LL;

    t63 = ((x281|x282)-(x283^x284));

    if (t63 != 9223372036854775799LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int8_t x285 = INT8_MAX;
	volatile int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	int64_t x288 = 782LL;
	static int64_t t64 = 80081LL;

    t64 = ((x285|x286)-(x287^x288));

    if (t64 != -2147482738LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int8_t x289 = INT8_MIN;
	int64_t x290 = -2785637LL;
	int32_t x291 = -1739517;
	static int8_t x292 = INT8_MAX;

    t65 = ((x289|x290)-(x291^x292));

    if (t65 != 1739295LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint8_t x298 = UINT8_MAX;
	uint32_t x299 = UINT32_MAX;
	uint64_t t66 = 675723506LLU;

    t66 = ((x297|x298)-(x299^x300));

    if (t66 != 18446744067267535573LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = INT16_MIN;
	static uint16_t x302 = 0U;
	int64_t x303 = -823871306827LL;
	static uint64_t t67 = 2164767076374854LLU;

    t67 = ((x301|x302)-(x303^x304));

    if (t67 != 5184357798464432LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x305 = 14031U;
	static int64_t x306 = -1LL;
	int16_t x307 = INT16_MIN;
	static volatile int16_t x308 = -1;

    t68 = ((x305|x306)-(x307^x308));

    if (t68 != -32768LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x313 = UINT16_MAX;
	static volatile uint64_t x314 = 4141495743LLU;
	uint16_t x315 = 19U;
	int32_t x316 = INT32_MIN;
	volatile uint64_t t69 = 541LLU;

    t69 = ((x313|x314)-(x315^x316));

    if (t69 != 6289031148LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x317 = -69437482040LL;
	int8_t x318 = -47;
	int16_t x319 = INT16_MIN;
	volatile int16_t x320 = -1;

    t70 = ((x317|x318)-(x319^x320));

    if (t70 != -32806LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x321 = 396551521694LL;
	static uint64_t x322 = 1906883473709LLU;
	static uint32_t x323 = UINT32_MAX;
	int64_t x324 = 597115656365139744LL;
	static uint64_t t71 = 29LLU;

    t71 = ((x321|x322)-(x323^x324));

    if (t71 != 17849630617278651616LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x326 = INT8_MIN;
	int32_t x327 = -1;
	int8_t x328 = INT8_MIN;
	volatile int32_t t72 = -1;

    t72 = ((x325|x326)-(x327^x328));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = UINT8_MAX;
	volatile uint64_t x330 = UINT64_MAX;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = INT8_MAX;
	uint64_t t73 = 3602032094LLU;

    t73 = ((x329|x330)-(x331^x332));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	int8_t x335 = INT8_MIN;
	int32_t x336 = INT32_MIN;

    t74 = ((x333|x334)-(x335^x336));

    if (t74 != -2147483521LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x338 = INT16_MIN;
	static volatile uint64_t x339 = 780612263806834590LLU;
	volatile int64_t x340 = INT64_MAX;
	static volatile uint64_t t75 = 54770467063147LLU;

    t75 = ((x337|x338)-(x339^x340));

    if (t75 != 10003984300661590241LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x341 = INT64_MAX;
	uint64_t x343 = 4250LLU;
	int64_t x344 = 6587092153239LL;
	volatile uint64_t t76 = 10734744795LLU;

    t76 = ((x341|x342)-(x343^x344));

    if (t76 != 9223365449762626802LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = 4033;
	uint64_t t77 = 1170LLU;

    t77 = ((x345|x346)-(x347^x348));

    if (t77 != 4033LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = INT8_MAX;
	uint32_t x352 = 51U;
	volatile uint64_t t78 = 1959484LLU;

    t78 = ((x349|x350)-(x351^x352));

    if (t78 != 14637949961969356LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x353 = -1LL;
	static volatile int32_t x354 = 667708;
	int8_t x355 = 1;
	volatile int16_t x356 = -1;
	volatile int64_t t79 = 391455525LL;

    t79 = ((x353|x354)-(x355^x356));

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint8_t x357 = 16U;
	volatile uint8_t x358 = UINT8_MAX;
	static int8_t x359 = -1;
	int8_t x360 = INT8_MIN;
	int32_t t80 = 391435;

    t80 = ((x357|x358)-(x359^x360));

    if (t80 != 128) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x361 = -11;
	volatile int16_t x364 = -1;
	volatile int32_t t81 = 185888;

    t81 = ((x361|x362)-(x363^x364));

    if (t81 != -4) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x365 = INT64_MIN;
	volatile uint16_t x367 = 1485U;
	int16_t x368 = INT16_MIN;
	int64_t t82 = 0LL;

    t82 = ((x365|x366)-(x367^x368));

    if (t82 != 31282LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x369 = 51015602042470LLU;
	uint32_t x370 = UINT32_MAX;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 14289022U;
	volatile uint64_t t83 = 66495383136177LLU;

    t83 = ((x369|x370)-(x371^x372));

    if (t83 != 9223423052462028673LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x373 = INT32_MIN;
	volatile int16_t x374 = -2113;
	volatile uint64_t t84 = 1LLU;

    t84 = ((x373|x374)-(x375^x376));

    if (t84 != 18419276131803786939LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x378 = 338236U;
	uint8_t x379 = 0U;
	uint64_t x380 = UINT64_MAX;
	static volatile uint64_t t85 = 161938003LLU;

    t85 = ((x377|x378)-(x379^x380));

    if (t85 != 338237LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = INT8_MIN;
	static int64_t x383 = 251780976160LL;
	volatile int64_t t86 = 1132355034502LL;

    t86 = ((x381|x382)-(x383^x384));

    if (t86 != 256075943472LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x385 = 22539677561354175LLU;
	uint32_t x387 = UINT32_MAX;
	volatile int64_t x388 = -1LL;

    t87 = ((x385|x386)-(x387^x388));

    if (t87 != 9245911718711097279LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x389 = -1;
	int8_t x390 = INT8_MAX;
	static int64_t x391 = INT64_MIN;
	int8_t x392 = INT8_MIN;
	int64_t t88 = -3LL;

    t88 = ((x389|x390)-(x391^x392));

    if (t88 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x394 = INT8_MIN;
	uint32_t x396 = 150339U;

    t89 = ((x393|x394)-(x395^x396));

    if (t89 != 150332U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint8_t x397 = 1U;
	uint16_t x398 = 5U;
	int64_t x399 = -1LL;
	int64_t t90 = -1078098869643450LL;

    t90 = ((x397|x398)-(x399^x400));

    if (t90 != -32762LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x401 = INT16_MIN;
	int32_t x402 = INT32_MIN;
	int8_t x403 = INT8_MIN;
	uint32_t t91 = 115U;

    t91 = ((x401|x402)-(x403^x404));

    if (t91 != 4294934401U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x405 = UINT64_MAX;
	int8_t x406 = 0;
	volatile int8_t x407 = INT8_MAX;
	int64_t x408 = -208635925LL;
	uint64_t t92 = 17202474232191093LLU;

    t92 = ((x405|x406)-(x407^x408));

    if (t92 != 208636011LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x409 = -1;
	static int16_t x410 = INT16_MIN;
	static volatile int32_t x412 = INT32_MIN;
	volatile int32_t t93 = INT32_MIN;

    t93 = ((x409|x410)-(x411^x412));

    if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile uint64_t x413 = 68847LLU;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	uint64_t x416 = 1LLU;
	uint64_t t94 = 2055LLU;

    t94 = ((x413|x414)-(x415^x416));

    if (t94 != 68846LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x417 = 7U;
	static uint32_t x418 = UINT32_MAX;
	int8_t x420 = INT8_MIN;
	volatile uint32_t t95 = 1694745207U;

    t95 = ((x417|x418)-(x419^x420));

    if (t95 != 4294934655U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x421 = UINT8_MAX;
	volatile uint32_t x422 = 85738U;
	static int32_t x423 = INT32_MIN;
	static uint64_t x424 = 279280300621911719LLU;
	volatile uint64_t t96 = 6583096152469LLU;

    t96 = ((x421|x422)-(x423^x424));

    if (t96 != 279280301449672792LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x426 = 120U;
	int16_t x427 = INT16_MIN;

    t97 = ((x425|x426)-(x427^x428));

    if (t97 != 49590231130766LL) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x433 = -1;
	int16_t x434 = -1;
	static int8_t x435 = -1;
	int32_t x436 = -21095;
	volatile int32_t t98 = 21;

    t98 = ((x433|x434)-(x435^x436));

    if (t98 != -21095) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint64_t x439 = UINT64_MAX;
	int8_t x440 = -1;
	uint64_t t99 = UINT64_MAX;

    t99 = ((x437|x438)-(x439^x440));

    if (t99 != UINT64_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x441 = -1;
	uint32_t x442 = 981693U;
	static int64_t x443 = 678LL;
	int64_t x444 = 3083306LL;

    t100 = ((x441|x442)-(x443^x444));

    if (t100 != 4291883379LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x445 = 592950599U;
	static uint16_t x446 = UINT16_MAX;
	static int64_t x448 = -512LL;
	int64_t t101 = 1044876221795400LL;

    t101 = ((x445|x446)-(x447^x448));

    if (t101 != 4887936512LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x450 = 193495U;
	int16_t x451 = -137;
	static volatile int8_t x452 = 1;
	volatile uint32_t t102 = 1642U;

    t102 = ((x449|x450)-(x451^x452));

    if (t102 != 4294966369U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x453 = 4LLU;
	int8_t x454 = INT8_MAX;
	static uint32_t x455 = UINT32_MAX;
	int8_t x456 = 51;
	volatile uint64_t t103 = 208850LLU;

    t103 = ((x453|x454)-(x455^x456));

    if (t103 != 18446744069414584499LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint8_t x457 = 0U;
	int8_t x458 = -5;
	int8_t x459 = -25;
	volatile uint16_t x460 = UINT16_MAX;
	int32_t t104 = 6511293;

    t104 = ((x457|x458)-(x459^x460));

    if (t104 != 65507) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x461 = INT32_MIN;
	volatile uint64_t x462 = UINT64_MAX;
	int16_t x463 = 0;
	volatile uint64_t t105 = 126873377017163380LLU;

    t105 = ((x461|x462)-(x463^x464));

    if (t105 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x465 = INT32_MIN;
	int8_t x467 = INT8_MIN;
	static int32_t x468 = -1;
	volatile uint32_t t106 = 12U;

    t106 = ((x465|x466)-(x467^x468));

    if (t106 != 2155335471U) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x470 = 243U;
	int8_t x471 = INT8_MIN;
	int8_t x472 = -1;
	static volatile int32_t t107 = -13042;

    t107 = ((x469|x470)-(x471^x472));

    if (t107 != 2147483520) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x473 = INT8_MIN;
	volatile int8_t x474 = INT8_MAX;
	int16_t x475 = INT16_MIN;
	uint16_t x476 = 13U;

    t108 = ((x473|x474)-(x475^x476));

    if (t108 != 32754) { NG(); } else { ; }
	
}

void f109(void) {
    	uint64_t x477 = UINT64_MAX;
	static int64_t x478 = INT64_MIN;
	int64_t x480 = -84223411LL;
	volatile uint64_t t109 = 48375906786LLU;

    t109 = ((x477|x478)-(x479^x480));

    if (t109 != 18446744073625328205LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x481 = 1U;
	uint16_t x482 = 18722U;
	static volatile int16_t x483 = -3;
	static int64_t x484 = INT64_MIN;
	static volatile int64_t t110 = 127LL;

    t110 = ((x481|x482)-(x483^x484));

    if (t110 != -9223372036854757082LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint32_t x485 = 127159352U;
	int8_t x487 = INT8_MIN;

    t111 = ((x485|x486)-(x487^x488));

    if (t111 != 4294967168U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x493 = UINT64_MAX;
	volatile int16_t x494 = INT16_MIN;
	int16_t x495 = INT16_MIN;
	static int8_t x496 = 1;
	volatile uint64_t t112 = 43495378748524631LLU;

    t112 = ((x493|x494)-(x495^x496));

    if (t112 != 32766LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x497 = UINT8_MAX;
	uint64_t x498 = UINT64_MAX;
	uint8_t x499 = 8U;
	static int64_t x500 = -1LL;
	uint64_t t113 = 61950LLU;

    t113 = ((x497|x498)-(x499^x500));

    if (t113 != 8LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x502 = 1U;
	uint16_t x503 = 1U;
	volatile uint32_t t114 = 2394U;

    t114 = ((x501|x502)-(x503^x504));

    if (t114 != 4294901937U) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x505 = INT8_MAX;
	int16_t x507 = -1;
	uint16_t x508 = 4398U;
	int32_t t115 = -13;

    t115 = ((x505|x506)-(x507^x508));

    if (t115 != 4526) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x509 = INT8_MAX;
	int16_t x510 = INT16_MIN;
	int64_t x511 = 182472LL;
	static uint8_t x512 = 13U;
	int64_t t116 = 220303LL;

    t116 = ((x509|x510)-(x511^x512));

    if (t116 != -215110LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x513 = -1;
	static int8_t x514 = 0;
	int64_t x515 = INT64_MAX;
	volatile int8_t x516 = 0;
	static int64_t t117 = INT64_MIN;

    t117 = ((x513|x514)-(x515^x516));

    if (t117 != INT64_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x517 = 282LLU;
	int8_t x519 = -22;
	volatile int64_t x520 = INT64_MIN;
	static uint64_t t118 = 2439LLU;

    t118 = ((x517|x518)-(x519^x520));

    if (t118 != 21LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x527 = -40;
	int32_t t119 = -25470;

    t119 = ((x525|x526)-(x527^x528));

    if (t119 != 167) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x529 = INT16_MIN;
	volatile int16_t x530 = INT16_MIN;
	uint16_t x531 = 29U;
	volatile int8_t x532 = INT8_MAX;
	volatile int32_t t120 = -937;

    t120 = ((x529|x530)-(x531^x532));

    if (t120 != -32866) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x534 = INT16_MIN;
	int64_t x536 = INT64_MIN;
	volatile uint64_t t121 = 3154918860LLU;

    t121 = ((x533|x534)-(x535^x536));

    if (t121 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x538 = -1;
	static volatile uint8_t x539 = 3U;
	volatile uint32_t t122 = 8527362U;

    t122 = ((x537|x538)-(x539^x540));

    if (t122 != 4294967292U) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x541 = 6042078438471237LLU;
	uint16_t x542 = UINT16_MAX;
	volatile int32_t x543 = INT32_MIN;
	volatile int8_t x544 = -1;
	uint64_t t123 = 1244181073686LLU;

    t123 = ((x541|x542)-(x543^x544));

    if (t123 != 6042076291006464LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x545 = INT32_MIN;
	uint32_t x546 = 1361368U;
	static uint32_t x548 = 1934123U;
	static volatile uint32_t t124 = 91795958U;

    t124 = ((x545|x546)-(x547^x548));

    if (t124 != 2146910896U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x549 = -1;
	uint16_t x550 = 164U;
	uint32_t x551 = UINT32_MAX;
	static volatile int32_t x552 = INT32_MAX;
	static volatile uint32_t t125 = 184566U;

    t125 = ((x549|x550)-(x551^x552));

    if (t125 != 2147483647U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x557 = -1;
	volatile uint32_t x558 = 213U;
	int64_t x559 = INT64_MIN;
	static volatile int16_t x560 = INT16_MIN;

    t126 = ((x557|x558)-(x559^x560));

    if (t126 != -9223372032559775745LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x561 = 49142069U;
	uint64_t x562 = UINT64_MAX;
	int64_t x563 = -1LL;
	volatile int8_t x564 = INT8_MIN;

    t127 = ((x561|x562)-(x563^x564));

    if (t127 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x565 = -132691778892039LL;
	int8_t x566 = INT8_MIN;

    t128 = ((x565|x566)-(x567^x568));

    if (t128 != 1468041LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x569 = 31U;
	int64_t x570 = INT64_MAX;
	static uint64_t x571 = UINT64_MAX;
	volatile uint64_t t129 = 4193LLU;

    t129 = ((x569|x570)-(x571^x572));

    if (t129 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile int16_t x573 = INT16_MIN;
	int64_t x574 = INT64_MIN;
	int64_t x575 = -229311426600636LL;
	uint32_t x576 = UINT32_MAX;
	int64_t t130 = 104501353758LL;

    t130 = ((x573|x574)-(x575^x576));

    if (t130 != 229309476200773LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x577 = 1U;
	int32_t x578 = -8124880;
	int32_t x580 = INT32_MIN;
	volatile int32_t t131 = -1;

    t131 = ((x577|x578)-(x579^x580));

    if (t131 != 2139358765) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x581 = 1035509LL;
	static uint32_t x582 = 139U;
	int8_t x583 = INT8_MIN;
	volatile int32_t x584 = INT32_MIN;
	static volatile int64_t t132 = -647568671LL;

    t132 = ((x581|x582)-(x583^x584));

    if (t132 != -2146448001LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x585 = -1LL;
	volatile int64_t x586 = INT64_MIN;
	int64_t x587 = -1LL;
	int32_t x588 = INT32_MAX;
	int64_t t133 = 1249140LL;

    t133 = ((x585|x586)-(x587^x588));

    if (t133 != 2147483647LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x589 = -1;
	static int64_t x590 = INT64_MIN;
	static volatile uint64_t x591 = 1824256621LLU;
	static uint8_t x592 = 9U;
	uint64_t t134 = 287388601378671874LLU;

    t134 = ((x589|x590)-(x591^x592));

    if (t134 != 18446744071885295003LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x593 = 4;
	uint8_t x594 = UINT8_MAX;
	uint64_t x595 = UINT64_MAX;
	static volatile int64_t x596 = INT64_MIN;
	volatile uint64_t t135 = 2053381470192734LLU;

    t135 = ((x593|x594)-(x595^x596));

    if (t135 != 9223372036854776064LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x597 = -16609;
	volatile int8_t x598 = 4;
	uint32_t x599 = 1006U;
	uint8_t x600 = UINT8_MAX;
	static uint32_t t136 = 10U;

    t136 = ((x597|x598)-(x599^x600));

    if (t136 != 4294949902U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x601 = 1;
	uint64_t x604 = 2200622891LLU;

    t137 = ((x601|x602)-(x603^x604));

    if (t137 != 2094344235LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int16_t x605 = 1;
	uint32_t x607 = UINT32_MAX;
	int32_t x608 = INT32_MIN;
	volatile uint32_t t138 = 39125133U;

    t138 = ((x605|x606)-(x607^x608));

    if (t138 != 2147483904U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint8_t x609 = UINT8_MAX;
	int16_t x610 = INT16_MIN;
	static int16_t x611 = INT16_MIN;
	int64_t x612 = INT64_MIN;
	static int64_t t139 = 2LL;

    t139 = ((x609|x610)-(x611^x612));

    if (t139 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x613 = 1;
	int32_t x614 = -1;
	uint16_t x615 = UINT16_MAX;
	uint8_t x616 = 91U;
	static volatile int32_t t140 = -402;

    t140 = ((x613|x614)-(x615^x616));

    if (t140 != -65445) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x618 = INT16_MIN;
	int16_t x620 = -1;
	volatile int32_t t141 = 27735875;

    t141 = ((x617|x618)-(x619^x620));

    if (t141 != -32004) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x621 = -1;
	volatile int32_t x622 = -1;
	volatile uint64_t x624 = 2LLU;
	volatile uint64_t t142 = 23212122LLU;

    t142 = ((x621|x622)-(x623^x624));

    if (t142 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x626 = -1LL;
	uint8_t x627 = 18U;
	volatile int64_t t143 = -580373205793065LL;

    t143 = ((x625|x626)-(x627^x628));

    if (t143 != -25LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint8_t x630 = UINT8_MAX;
	uint16_t x631 = UINT16_MAX;
	int8_t x632 = -9;
	volatile int32_t t144 = 0;

    t144 = ((x629|x630)-(x631^x632));

    if (t144 != -2147417865) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile int16_t x633 = -648;
	volatile uint8_t x634 = UINT8_MAX;
	int64_t x635 = -618121729593478LL;
	volatile int64_t t145 = -7260961852LL;

    t145 = ((x633|x634)-(x635^x636));

    if (t145 != 618121729592964LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x637 = INT8_MIN;
	volatile uint64_t x638 = UINT64_MAX;
	volatile int64_t x639 = -1LL;
	static volatile uint64_t t146 = 7249161553101LLU;

    t146 = ((x637|x638)-(x639^x640));

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x641 = UINT32_MAX;
	uint32_t x642 = 937U;
	static uint8_t x643 = 42U;
	volatile int64_t x644 = INT64_MAX;
	volatile int64_t t147 = 30427454LL;

    t147 = ((x641|x642)-(x643^x644));

    if (t147 != -9223372032559808470LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x645 = -6238045;
	static volatile int16_t x646 = 20;
	uint64_t x647 = 17851LLU;

    t148 = ((x645|x646)-(x647^x648));

    if (t148 != 18446744073701327827LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x649 = 78819211LLU;
	int64_t x650 = INT64_MIN;
	static uint8_t x652 = UINT8_MAX;

    t149 = ((x649|x650)-(x651^x652));

    if (t149 != 9223372036933595015LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x653 = INT32_MAX;
	int64_t x654 = 8114701LL;
	int8_t x655 = INT8_MIN;
	uint32_t x656 = 623U;
	int64_t t150 = 1954190LL;

    t150 = ((x653|x654)-(x655^x656));

    if (t150 != -2147483120LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x657 = INT64_MIN;
	uint64_t x658 = 115964204678447LLU;
	static volatile int8_t x659 = INT8_MAX;
	static int32_t x660 = -1;
	static uint64_t t151 = 184961018317389430LLU;

    t151 = ((x657|x658)-(x659^x660));

    if (t151 != 9223488001059454383LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x661 = 1;
	int32_t x663 = INT32_MIN;
	int8_t x664 = 44;
	int32_t t152 = -76861;

    t152 = ((x661|x662)-(x663^x664));

    if (t152 != 2147483599) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x665 = INT8_MIN;
	uint32_t x666 = 13469U;
	static int32_t x667 = INT32_MIN;
	volatile uint32_t t153 = 1U;

    t153 = ((x665|x666)-(x667^x668));

    if (t153 != 2147475280U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x669 = INT64_MIN;
	int64_t x670 = 47428994211997629LL;
	volatile int16_t x671 = INT16_MIN;
	static int16_t x672 = -1;
	volatile int64_t t154 = -4209646049LL;

    t154 = ((x669|x670)-(x671^x672));

    if (t154 != -9175943042642810946LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x673 = 44U;
	uint16_t x675 = 3694U;
	volatile int32_t t155 = -10687093;

    t155 = ((x673|x674)-(x675^x676));

    if (t155 != 3950) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x677 = INT32_MAX;
	static int8_t x678 = INT8_MIN;
	uint64_t x679 = UINT64_MAX;
	volatile int64_t x680 = INT64_MIN;
	uint64_t t156 = 75419605174607LLU;

    t156 = ((x677|x678)-(x679^x680));

    if (t156 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x682 = -1;
	static int32_t x683 = -1;
	int16_t x684 = 12;
	uint32_t t157 = 130064678U;

    t157 = ((x681|x682)-(x683^x684));

    if (t157 != 12U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x685 = INT8_MIN;
	volatile uint8_t x686 = UINT8_MAX;
	int32_t x688 = -78;
	int32_t t158 = 49567960;

    t158 = ((x685|x686)-(x687^x688));

    if (t158 != -51) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x689 = INT32_MIN;
	uint64_t x690 = 6142916629LLU;
	int32_t x692 = -1;
	volatile uint64_t t159 = 4013056LLU;

    t159 = ((x689|x690)-(x691^x692));

    if (t159 != 18446744071262533654LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x694 = 2429025261LL;
	int64_t x695 = INT64_MIN;
	volatile int8_t x696 = -1;
	static int64_t t160 = 132309LL;

    t160 = ((x693|x694)-(x695^x696));

    if (t160 != -9223372034425225232LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int32_t x697 = -3;
	int32_t x698 = INT32_MAX;
	int16_t x699 = 1504;
	uint8_t x700 = 15U;

    t161 = ((x697|x698)-(x699^x700));

    if (t161 != -1520) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x702 = INT64_MIN;
	volatile int32_t x703 = INT32_MAX;
	int8_t x704 = 0;
	volatile int64_t t162 = 564600595045404LL;

    t162 = ((x701|x702)-(x703^x704));

    if (t162 != -2147483648LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x705 = -139;
	volatile int8_t x706 = 1;
	int32_t x707 = INT32_MIN;
	volatile uint32_t t163 = 28U;

    t163 = ((x705|x706)-(x707^x708));

    if (t163 != 2147483510U) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x710 = -32914250773882261LL;
	int32_t x712 = INT32_MIN;

    t164 = ((x709|x710)-(x711^x712));

    if (t164 != -2976703687LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x714 = 21381365LL;
	int8_t x715 = -1;
	int8_t x716 = INT8_MIN;
	static int64_t t165 = -911247215797883LL;

    t165 = ((x713|x714)-(x715^x716));

    if (t165 != 21381246LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x717 = 1;
	int64_t x718 = INT64_MIN;
	int64_t x719 = INT64_MIN;
	int32_t x720 = 0;
	int64_t t166 = 405LL;

    t166 = ((x717|x718)-(x719^x720));

    if (t166 != 1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x721 = 40776834LL;
	int32_t x722 = INT32_MAX;
	uint32_t x723 = 118U;
	int64_t t167 = 455686940972654LL;

    t167 = ((x721|x722)-(x723^x724));

    if (t167 != -2147480337LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x729 = 16;
	uint16_t x730 = 4949U;
	int8_t x731 = -2;
	int32_t t168 = 20;

    t168 = ((x729|x730)-(x731^x732));

    if (t168 != 4948) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x733 = 46949896U;
	int32_t x734 = INT32_MAX;
	static int8_t x735 = INT8_MIN;
	int16_t x736 = -12091;

    t169 = ((x733|x734)-(x735^x736));

    if (t169 != 2147471546U) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x737 = 867LLU;
	int64_t x739 = INT64_MIN;
	volatile int64_t x740 = 4765928422LL;
	uint64_t t170 = 31965402987575LLU;

    t170 = ((x737|x738)-(x739^x740));

    if (t170 != 9223372032088847385LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x741 = INT32_MAX;
	static int32_t x742 = INT32_MIN;
	int8_t x743 = INT8_MIN;
	uint32_t x744 = 127637396U;
	static volatile uint32_t t171 = 4U;

    t171 = ((x741|x742)-(x743^x744));

    if (t171 != 127637483U) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x747 = 614LLU;
	int8_t x748 = INT8_MAX;
	uint64_t t172 = 38861093024LLU;

    t172 = ((x745|x746)-(x747^x748));

    if (t172 != 18446744073709551031LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x749 = INT16_MIN;
	int64_t x750 = INT64_MIN;
	uint16_t x751 = 3U;
	uint32_t x752 = 1009953U;
	volatile int64_t t173 = -72602221755204LL;

    t173 = ((x749|x750)-(x751^x752));

    if (t173 != -1042722LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x757 = UINT16_MAX;
	uint32_t x758 = 2737U;
	uint8_t x759 = UINT8_MAX;
	int8_t x760 = -1;
	uint32_t t174 = 550667966U;

    t174 = ((x757|x758)-(x759^x760));

    if (t174 != 65791U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x762 = UINT32_MAX;
	int64_t x764 = -1LL;

    t175 = ((x761|x762)-(x763^x764));

    if (t175 != 2147483648LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x769 = UINT16_MAX;
	static int16_t x771 = INT16_MIN;
	uint64_t x772 = 27133770625097LLU;
	volatile uint64_t t176 = 14671230520293237LLU;

    t176 = ((x769|x770)-(x771^x772));

    if (t176 != 27133770665910LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x773 = INT64_MIN;
	int8_t x774 = -12;
	static uint16_t x775 = UINT16_MAX;
	uint16_t x776 = 74U;
	int64_t t177 = 1LL;

    t177 = ((x773|x774)-(x775^x776));

    if (t177 != -65473LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x778 = 5U;
	int32_t x779 = -1;
	volatile int8_t x780 = INT8_MIN;
	int32_t t178 = 1974;

    t178 = ((x777|x778)-(x779^x780));

    if (t178 != -250) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x782 = 23544U;
	volatile int32_t x783 = -1388099;
	uint32_t x784 = UINT32_MAX;
	uint32_t t179 = 32588U;

    t179 = ((x781|x782)-(x783^x784));

    if (t179 != 4293579192U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x789 = -12;
	volatile int32_t x791 = 3417445;
	uint64_t x792 = UINT64_MAX;
	static volatile uint64_t t180 = 1LLU;

    t180 = ((x789|x790)-(x791^x792));

    if (t180 != 3417434LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x793 = UINT8_MAX;
	int16_t x794 = INT16_MAX;
	volatile uint8_t x795 = 1U;
	volatile int64_t x796 = INT64_MAX;
	static int64_t t181 = 39268089LL;

    t181 = ((x793|x794)-(x795^x796));

    if (t181 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x797 = 6924429237LLU;
	static int8_t x798 = INT8_MIN;
	int32_t x799 = INT32_MIN;
	int64_t x800 = INT64_MIN;
	volatile uint64_t t182 = 73062LLU;

    t182 = ((x797|x798)-(x799^x800));

    if (t182 != 9223372039002259381LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x802 = 7;
	int8_t x803 = 0;
	uint8_t x804 = 2U;
	volatile int32_t t183 = 7101253;

    t183 = ((x801|x802)-(x803^x804));

    if (t183 != -475) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x805 = -1LL;
	int8_t x807 = INT8_MIN;
	int16_t x808 = 3708;

    t184 = ((x805|x806)-(x807^x808));

    if (t184 != 3587LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x809 = INT8_MAX;
	int32_t x810 = INT32_MIN;
	uint64_t x812 = 7258LLU;
	uint64_t t185 = 62919171LLU;

    t185 = ((x809|x810)-(x811^x812));

    if (t185 != 18446744071562042586LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x813 = UINT8_MAX;
	uint16_t x815 = 7545U;
	uint32_t t186 = 0U;

    t186 = ((x813|x814)-(x815^x816));

    if (t186 != 4291559166U) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x819 = -1;
	volatile uint64_t t187 = 47944408173LLU;

    t187 = ((x817|x818)-(x819^x820));

    if (t187 != 9223372036854775738LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x822 = INT32_MAX;
	int64_t x823 = INT64_MIN;
	volatile int64_t t188 = INT64_MIN;

    t188 = ((x821|x822)-(x823^x824));

    if (t188 != INT64_MIN) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x827 = INT32_MIN;
	uint32_t x828 = UINT32_MAX;
	int64_t t189 = -54898LL;

    t189 = ((x825|x826)-(x827^x828));

    if (t189 != -2147483648LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x829 = INT16_MIN;
	volatile int16_t x830 = INT16_MIN;
	int8_t x831 = INT8_MAX;
	int16_t x832 = -1;
	volatile int32_t t190 = 3;

    t190 = ((x829|x830)-(x831^x832));

    if (t190 != -32640) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x833 = INT32_MIN;
	int64_t x834 = INT64_MIN;
	uint8_t x835 = 3U;
	int16_t x836 = INT16_MAX;
	int64_t t191 = -1821350417297LL;

    t191 = ((x833|x834)-(x835^x836));

    if (t191 != -2147516412LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x838 = -2;
	int8_t x839 = INT8_MIN;
	int16_t x840 = 6248;
	int64_t t192 = -153288LL;

    t192 = ((x837|x838)-(x839^x840));

    if (t192 != 6167LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint64_t x841 = 7027890466116429136LLU;
	int8_t x843 = -1;
	int32_t x844 = 7389;
	volatile uint64_t t193 = 8LLU;

    t193 = ((x841|x842)-(x843^x844));

    if (t193 != 7027890467169639645LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x845 = 14271LLU;
	int8_t x846 = 7;
	uint64_t x847 = UINT64_MAX;
	volatile uint64_t t194 = 123864LLU;

    t194 = ((x845|x846)-(x847^x848));

    if (t194 != 14271LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int32_t x849 = INT32_MIN;
	int8_t x850 = INT8_MAX;
	int8_t x851 = 0;
	int16_t x852 = 39;

    t195 = ((x849|x850)-(x851^x852));

    if (t195 != -2147483560) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x853 = INT8_MAX;
	int8_t x855 = INT8_MAX;
	static uint64_t x856 = 14353452191437LLU;
	static volatile uint64_t t196 = 3633538389LLU;

    t196 = ((x853|x854)-(x855^x856));

    if (t196 != 18446729718109876685LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x857 = -1967;
	uint32_t x858 = UINT32_MAX;
	uint32_t x859 = 24349827U;
	volatile int8_t x860 = INT8_MAX;
	uint32_t t197 = 5863058U;

    t197 = ((x857|x858)-(x859^x860));

    if (t197 != 4270617347U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x861 = INT32_MIN;
	int32_t t198 = 7;

    t198 = ((x861|x862)-(x863^x864));

    if (t198 != -14438) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x865 = INT32_MIN;
	static int64_t x866 = -1LL;
	uint8_t x867 = UINT8_MAX;
	uint16_t x868 = 69U;
	int64_t t199 = -3068227722467031LL;

    t199 = ((x865|x866)-(x867^x868));

    if (t199 != -187LL) { NG(); } else { ; }
	
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

