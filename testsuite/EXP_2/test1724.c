
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

static volatile int16_t x2 = INT16_MAX;
static int16_t x7 = INT16_MIN;
uint8_t x31 = 84U;
int16_t x38 = INT16_MIN;
volatile int64_t x40 = INT64_MAX;
volatile int32_t t8 = 132608;
int8_t x52 = INT8_MIN;
volatile int32_t t9 = -333;
int32_t x58 = INT32_MIN;
static uint8_t x61 = 0U;
int32_t x73 = -200224;
int32_t x83 = -1;
int64_t x85 = INT64_MAX;
uint32_t x86 = 27785788U;
uint32_t x95 = UINT32_MAX;
int16_t x97 = -1;
int64_t t20 = 102476LL;
uint64_t x107 = 18707813977816364LLU;
int32_t t21 = -19;
volatile int32_t x110 = 811;
uint64_t x124 = 230279710575LLU;
int8_t x126 = -1;
int32_t t27 = 1550905;
uint32_t x138 = 3698U;
static volatile int16_t x142 = -4;
static int32_t t30 = 1;
int16_t x148 = -1;
volatile uint64_t t31 = 200167310LLU;
uint8_t x152 = UINT8_MAX;
int16_t x154 = 14;
int16_t x157 = 2494;
int64_t x163 = -1LL;
static uint32_t x165 = 76549U;
volatile int16_t x166 = -31;
int8_t x172 = INT8_MIN;
uint64_t x174 = UINT64_MAX;
volatile int32_t x186 = -371072;
int16_t x188 = INT16_MAX;
static volatile uint16_t x192 = UINT16_MAX;
uint8_t x204 = UINT8_MAX;
static volatile uint32_t x207 = 3049484U;
uint16_t x215 = UINT16_MAX;
int32_t t47 = -120938022;
volatile int64_t x223 = -2656800984738LL;
int32_t x227 = INT32_MIN;
int8_t x230 = INT8_MIN;
static uint16_t x232 = UINT16_MAX;
static int32_t x238 = -63915825;
int32_t x240 = INT32_MAX;
int32_t t53 = -11935;
volatile uint32_t t54 = 44586382U;
int64_t x251 = INT64_MAX;
volatile uint64_t x253 = 429481LLU;
int64_t x255 = INT64_MIN;
uint32_t x257 = 389589U;
uint8_t x259 = 96U;
uint32_t t57 = 631908091U;
int32_t t58 = -2804;
volatile uint16_t x269 = 7U;
uint32_t x274 = UINT32_MAX;
volatile int64_t t60 = 0LL;
static int8_t x287 = -7;
static int32_t t63 = -490;
int16_t x289 = -4;
volatile int64_t x293 = INT64_MIN;
volatile int32_t x294 = -16;
uint16_t x298 = 0U;
int32_t x299 = -853002912;
volatile int32_t x302 = -391044326;
volatile uint8_t x303 = 89U;
uint64_t x305 = UINT64_MAX;
volatile uint64_t t68 = 491256029LLU;
volatile int16_t x310 = INT16_MIN;
volatile int64_t t69 = 12634008LL;
volatile int16_t x317 = INT16_MAX;
volatile int8_t x318 = 1;
int16_t x321 = -21;
static int64_t x324 = -13385839LL;
volatile uint16_t x331 = UINT16_MAX;
static int32_t x334 = -14628;
uint64_t x345 = UINT64_MAX;
volatile uint64_t x358 = 27513279LLU;
uint8_t x360 = 10U;
uint32_t x361 = 5407296U;
int16_t x364 = -1;
static int8_t x374 = 0;
int16_t x381 = 1;
int64_t x386 = INT64_MIN;
int32_t x393 = INT32_MIN;
static volatile uint16_t x405 = 4U;
volatile int16_t x412 = INT16_MIN;
volatile uint64_t x419 = 24682770LLU;
int64_t x423 = INT64_MIN;
static int64_t x424 = INT64_MAX;
int64_t x430 = INT64_MIN;
uint16_t x431 = 3U;
static uint16_t x438 = 2U;
uint32_t x441 = 120485106U;
int8_t x443 = -1;
int32_t x448 = INT32_MIN;
static int64_t t101 = -624LL;
volatile uint16_t x450 = UINT16_MAX;
int8_t x457 = -1;
uint8_t x465 = 7U;
static uint32_t t108 = 1031U;
static uint8_t x481 = 3U;
volatile int32_t t109 = -17853;
static volatile uint16_t x488 = 4U;
static uint64_t x489 = 1LLU;
int8_t x490 = INT8_MAX;
int32_t t113 = -26363;
volatile int32_t t116 = 2;
volatile uint16_t x516 = 46U;
static uint8_t x518 = 6U;
volatile int8_t x519 = 7;
int32_t t118 = 6481467;
volatile uint64_t t119 = 1045565492LLU;
volatile int32_t x525 = 192136;
volatile int32_t t120 = -2645;
static uint8_t x535 = 3U;
uint64_t x536 = UINT64_MAX;
static int64_t x537 = INT64_MIN;
static int64_t t123 = -574431136042603LL;
volatile int32_t x545 = INT32_MIN;
volatile int64_t t125 = -7916LL;
static uint32_t x550 = 8442U;
int16_t x552 = INT16_MAX;
int64_t x556 = -1LL;
int32_t x557 = INT32_MAX;
volatile int8_t x560 = INT8_MIN;
int8_t x566 = INT8_MIN;
static volatile uint16_t x570 = UINT16_MAX;
static int64_t x580 = INT64_MAX;
uint32_t x581 = 38U;
int16_t x582 = INT16_MAX;
static uint32_t x585 = 13150U;
static uint32_t t133 = 21378U;
int16_t x597 = INT16_MIN;
int16_t x609 = INT16_MAX;
uint16_t x610 = 3217U;
static int64_t x612 = -2919032LL;
int64_t x616 = -1LL;
int64_t t140 = -4568805728364334844LL;
uint64_t x619 = UINT64_MAX;
int64_t x623 = INT64_MAX;
int64_t x632 = 2208315878658LL;
int8_t x641 = -1;
int16_t x649 = -2081;
volatile int64_t x653 = -297769950347051LL;
uint16_t x654 = 1U;
int16_t x655 = INT16_MIN;
int32_t x656 = -8351;
static uint32_t x657 = UINT32_MAX;
int64_t t152 = 2649897019513LL;
int8_t x671 = INT8_MAX;
static volatile int64_t t154 = -8277436482299LL;
int32_t t155 = -9048842;
uint32_t x682 = UINT32_MAX;
int16_t x686 = INT16_MIN;
int64_t x690 = INT64_MAX;
int16_t x697 = INT16_MIN;
int16_t x707 = 15800;
int8_t x711 = INT8_MAX;
int64_t t163 = 0LL;
int16_t x713 = INT16_MIN;
int64_t x714 = -3444LL;
int64_t x719 = -1LL;
volatile uint64_t t166 = 141431446153310LLU;
int16_t x734 = -1;
static int64_t x739 = INT64_MIN;
int16_t x744 = INT16_MIN;
uint64_t x752 = 20054483283LLU;
volatile uint64_t t171 = 90579998415448443LLU;
int64_t x759 = 31457730625LL;
int64_t x760 = -22964942250LL;
static uint32_t x761 = 18119U;
int16_t x763 = INT16_MIN;
uint32_t t174 = 1U;
volatile int8_t x770 = INT8_MIN;
volatile int16_t x773 = 42;
int8_t x774 = INT8_MAX;
static int8_t x780 = -1;
volatile uint64_t x782 = UINT64_MAX;
static int16_t x785 = INT16_MAX;
static uint64_t x787 = 1LLU;
uint32_t x788 = 17U;
volatile uint32_t t179 = 316545U;
volatile int64_t x790 = INT64_MIN;
uint64_t x797 = 165703633059870561LLU;
uint16_t x807 = 10U;
volatile int32_t t185 = -12;
int16_t x818 = INT16_MIN;
int64_t t186 = 16136086396680LL;
int16_t x829 = 12;
int16_t x830 = 4;
uint32_t x834 = 90197318U;
int16_t x840 = INT16_MIN;
int16_t x843 = 957;
int8_t x845 = 1;
uint64_t x850 = 133370843487948LLU;
volatile uint32_t x868 = 2U;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MAX;
	int32_t t0 = 259;

    t0 = ((x1&(x2>x3))-x4);

    if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MAX;
	int16_t x6 = INT16_MIN;
	int64_t x8 = -1LL;
	int64_t t1 = 10LL;

    t1 = ((x5&(x6>x7))-x8);

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int32_t x9 = -1;
	int64_t x10 = INT64_MAX;
	int16_t x11 = INT16_MIN;
	int16_t x12 = 1029;
	static int32_t t2 = -442157;

    t2 = ((x9&(x10>x11))-x12);

    if (t2 != -1028) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint8_t x17 = UINT8_MAX;
	int32_t x18 = INT32_MIN;
	int32_t x19 = -1;
	uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 30564030291LLU;

    t3 = ((x17&(x18>x19))-x20);

    if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x21 = INT8_MIN;
	int16_t x22 = -11;
	uint8_t x23 = 9U;
	uint32_t x24 = UINT32_MAX;
	uint32_t t4 = 29114U;

    t4 = ((x21&(x22>x23))-x24);

    if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = INT64_MAX;
	int64_t x30 = -2981646786885165LL;
	int32_t x32 = 7;
	static volatile int64_t t5 = -322833401220LL;

    t5 = ((x29&(x30>x31))-x32);

    if (t5 != -7LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = 1246457381114LL;
	int8_t x34 = INT8_MAX;
	uint8_t x35 = 2U;
	static uint64_t x36 = 169LLU;
	uint64_t t6 = 133416LLU;

    t6 = ((x33&(x34>x35))-x36);

    if (t6 != 18446744073709551447LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = 0;
	static int32_t x39 = INT32_MAX;
	volatile int64_t t7 = -10723913LL;

    t7 = ((x37&(x38>x39))-x40);

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = INT32_MIN;
	int64_t x46 = -1LL;
	int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MAX;

    t8 = ((x45&(x46>x47))-x48);

    if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint8_t x49 = 21U;
	int8_t x50 = -1;
	int16_t x51 = INT16_MAX;

    t9 = ((x49&(x50>x51))-x52);

    if (t9 != 128) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = 37646U;
	volatile int32_t x54 = INT32_MIN;
	volatile int64_t x55 = INT64_MIN;
	int64_t x56 = -1LL;
	int64_t t10 = 222LL;

    t10 = ((x53&(x54>x55))-x56);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x57 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	int8_t x60 = 0;
	int32_t t11 = -446;

    t11 = ((x57&(x58>x59))-x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x62 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t12 = -5342;

    t12 = ((x61&(x62>x63))-x64);

    if (t12 != -65535) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x74 = 615U;
	static int64_t x75 = -1LL;
	uint32_t x76 = 29U;
	static uint32_t t13 = 9858U;

    t13 = ((x73&(x74>x75))-x76);

    if (t13 != 4294967267U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x77 = INT8_MAX;
	int32_t x78 = -1;
	volatile uint16_t x79 = 1145U;
	int8_t x80 = -1;
	int32_t t14 = 905;

    t14 = ((x77&(x78>x79))-x80);

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x81 = 3LL;
	int32_t x82 = -1;
	static int16_t x84 = INT16_MAX;
	static volatile int64_t t15 = -9189LL;

    t15 = ((x81&(x82>x83))-x84);

    if (t15 != -32767LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint32_t x87 = UINT32_MAX;
	int64_t x88 = 197325347156990LL;
	static volatile int64_t t16 = -533804512225694LL;

    t16 = ((x85&(x86>x87))-x88);

    if (t16 != -197325347156990LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x89 = INT32_MIN;
	uint32_t x90 = UINT32_MAX;
	uint16_t x91 = UINT16_MAX;
	uint16_t x92 = 79U;
	static volatile int32_t t17 = -140;

    t17 = ((x89&(x90>x91))-x92);

    if (t17 != -79) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MIN;
	volatile uint8_t x94 = 0U;
	uint8_t x96 = 19U;
	int32_t t18 = -2930;

    t18 = ((x93&(x94>x95))-x96);

    if (t18 != -19) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x98 = UINT32_MAX;
	int8_t x99 = INT8_MIN;
	int16_t x100 = INT16_MIN;
	int32_t t19 = -354;

    t19 = ((x97&(x98>x99))-x100);

    if (t19 != 32769) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = INT32_MAX;
	static uint32_t x102 = 2199293U;
	volatile uint32_t x103 = 2111507U;
	static int64_t x104 = -3839115244LL;

    t20 = ((x101&(x102>x103))-x104);

    if (t20 != 3839115245LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x105 = INT16_MAX;
	static int16_t x106 = INT16_MIN;
	volatile uint8_t x108 = 2U;

    t21 = ((x105&(x106>x107))-x108);

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x109 = INT64_MIN;
	volatile uint16_t x111 = UINT16_MAX;
	int64_t x112 = -17LL;
	volatile int64_t t22 = 919058177266895LL;

    t22 = ((x109&(x110>x111))-x112);

    if (t22 != 17LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = UINT16_MAX;
	volatile int16_t x114 = -9;
	int32_t x115 = 109;
	uint16_t x116 = UINT16_MAX;
	static int32_t t23 = 193;

    t23 = ((x113&(x114>x115))-x116);

    if (t23 != -65535) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MAX;
	int32_t x119 = INT32_MAX;
	int8_t x120 = INT8_MIN;
	volatile int32_t t24 = -722490461;

    t24 = ((x117&(x118>x119))-x120);

    if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x121 = 1970046453085082955LLU;
	int64_t x122 = INT64_MAX;
	static int16_t x123 = 0;
	volatile uint64_t t25 = 677663768360LLU;

    t25 = ((x121&(x122>x123))-x124);

    if (t25 != 18446743843429841042LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x125 = 37436937U;
	int16_t x127 = 0;
	int16_t x128 = 3154;
	uint32_t t26 = 60U;

    t26 = ((x125&(x126>x127))-x128);

    if (t26 != 4294964142U) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x129 = -7;
	volatile int16_t x130 = -1;
	int32_t x131 = INT32_MAX;
	uint16_t x132 = 18920U;

    t27 = ((x129&(x130>x131))-x132);

    if (t27 != -18920) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x133 = 1069U;
	volatile uint8_t x134 = UINT8_MAX;
	static uint64_t x135 = 3676961045905304LLU;
	volatile int64_t x136 = -1LL;
	volatile int64_t t28 = -2851949968929342074LL;

    t28 = ((x133&(x134>x135))-x136);

    if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x137 = 1U;
	uint16_t x139 = 26U;
	int16_t x140 = INT16_MAX;
	volatile int32_t t29 = -330556949;

    t29 = ((x137&(x138>x139))-x140);

    if (t29 != -32766) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x141 = -54;
	int8_t x143 = -4;
	int32_t x144 = -1;

    t30 = ((x141&(x142>x143))-x144);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x145 = UINT64_MAX;
	int64_t x146 = INT64_MIN;
	static uint8_t x147 = 92U;

    t31 = ((x145&(x146>x147))-x148);

    if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x149 = 250450662LL;
	static uint64_t x150 = 361618747LLU;
	uint32_t x151 = 3753U;
	static volatile int64_t t32 = -32577644LL;

    t32 = ((x149&(x150>x151))-x152);

    if (t32 != -255LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x153 = UINT16_MAX;
	static volatile uint64_t x155 = UINT64_MAX;
	uint8_t x156 = 11U;
	static volatile int32_t t33 = 21;

    t33 = ((x153&(x154>x155))-x156);

    if (t33 != -11) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x158 = INT64_MIN;
	int64_t x159 = 478875074LL;
	int16_t x160 = -1;
	volatile int32_t t34 = -765248279;

    t34 = ((x157&(x158>x159))-x160);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x161 = INT64_MIN;
	static int16_t x162 = -1;
	int32_t x164 = -296974758;
	static int64_t t35 = -143296576LL;

    t35 = ((x161&(x162>x163))-x164);

    if (t35 != 296974758LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x167 = 10124124105474393LLU;
	static uint8_t x168 = 4U;
	uint32_t t36 = 489875948U;

    t36 = ((x165&(x166>x167))-x168);

    if (t36 != 4294967293U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = 291852LL;
	int16_t x170 = INT16_MIN;
	volatile int32_t x171 = -1;
	int64_t t37 = 1421LL;

    t37 = ((x169&(x170>x171))-x172);

    if (t37 != 128LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x173 = 9;
	static volatile int32_t x175 = INT32_MAX;
	int32_t x176 = -98;
	volatile int32_t t38 = 260782210;

    t38 = ((x173&(x174>x175))-x176);

    if (t38 != 99) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x181 = INT8_MIN;
	int64_t x182 = 141578648014202044LL;
	volatile int64_t x183 = INT64_MIN;
	int16_t x184 = -1;
	int32_t t39 = 5502788;

    t39 = ((x181&(x182>x183))-x184);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x185 = -1;
	volatile int8_t x187 = INT8_MIN;
	int32_t t40 = -483;

    t40 = ((x185&(x186>x187))-x188);

    if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x189 = -1LL;
	int8_t x190 = -1;
	int64_t x191 = INT64_MIN;
	volatile int64_t t41 = 409658896081LL;

    t41 = ((x189&(x190>x191))-x192);

    if (t41 != -65534LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = 84307900360652LL;
	uint16_t x194 = 0U;
	volatile int32_t x195 = -1;
	static volatile int16_t x196 = INT16_MAX;
	int64_t t42 = -3660974267LL;

    t42 = ((x193&(x194>x195))-x196);

    if (t42 != -32767LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x197 = 7U;
	static int8_t x198 = -1;
	static volatile int32_t x199 = -1;
	int64_t x200 = INT64_MAX;
	volatile int64_t t43 = 626567LL;

    t43 = ((x197&(x198>x199))-x200);

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x201 = 6U;
	int32_t x202 = -56732;
	volatile uint16_t x203 = 1U;
	volatile int32_t t44 = -11;

    t44 = ((x201&(x202>x203))-x204);

    if (t44 != -255) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x205 = INT64_MIN;
	volatile int32_t x206 = INT32_MIN;
	static int8_t x208 = INT8_MAX;
	volatile int64_t t45 = 252484626653373200LL;

    t45 = ((x205&(x206>x207))-x208);

    if (t45 != -127LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x209 = INT8_MAX;
	int8_t x210 = -1;
	uint32_t x211 = UINT32_MAX;
	int8_t x212 = -1;
	int32_t t46 = 2147867;

    t46 = ((x209&(x210>x211))-x212);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x213 = INT8_MIN;
	static uint64_t x214 = UINT64_MAX;
	int32_t x216 = -1;

    t47 = ((x213&(x214>x215))-x216);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x217 = 352684647LL;
	int64_t x218 = -1LL;
	int16_t x219 = -16;
	static int8_t x220 = INT8_MIN;
	volatile int64_t t48 = -899909694330430LL;

    t48 = ((x217&(x218>x219))-x220);

    if (t48 != 129LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x221 = -15;
	int16_t x222 = INT16_MAX;
	static uint16_t x224 = 3U;
	static int32_t t49 = 28544430;

    t49 = ((x221&(x222>x223))-x224);

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x225 = 40U;
	volatile int8_t x226 = INT8_MAX;
	static int16_t x228 = 383;
	int32_t t50 = -422268249;

    t50 = ((x225&(x226>x227))-x228);

    if (t50 != -383) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x229 = INT64_MAX;
	uint64_t x231 = 59936035345338058LLU;
	volatile int64_t t51 = -49120287652LL;

    t51 = ((x229&(x230>x231))-x232);

    if (t51 != -65534LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x237 = INT64_MIN;
	volatile int16_t x239 = INT16_MAX;
	int64_t t52 = 298995228512204070LL;

    t52 = ((x237&(x238>x239))-x240);

    if (t52 != -2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MIN;
	volatile int32_t x242 = -1;
	volatile int16_t x243 = 1;
	uint8_t x244 = 1U;

    t53 = ((x241&(x242>x243))-x244);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x245 = -11611041;
	int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MAX;
	uint32_t x248 = UINT32_MAX;

    t54 = ((x245&(x246>x247))-x248);

    if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x249 = UINT64_MAX;
	static volatile int32_t x250 = INT32_MAX;
	uint8_t x252 = 8U;
	uint64_t t55 = 133310231846596LLU;

    t55 = ((x249&(x250>x251))-x252);

    if (t55 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x254 = INT16_MIN;
	uint32_t x256 = UINT32_MAX;
	uint64_t t56 = 807749614297LLU;

    t56 = ((x253&(x254>x255))-x256);

    if (t56 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x258 = -1LL;
	int32_t x260 = -32;

    t57 = ((x257&(x258>x259))-x260);

    if (t57 != 32U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x265 = UINT8_MAX;
	volatile uint64_t x266 = 2377382LLU;
	volatile int16_t x267 = -854;
	volatile uint8_t x268 = 46U;

    t58 = ((x265&(x266>x267))-x268);

    if (t58 != -46) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x270 = 1928222059944LL;
	volatile int8_t x271 = INT8_MAX;
	volatile int8_t x272 = INT8_MIN;
	int32_t t59 = -18;

    t59 = ((x269&(x270>x271))-x272);

    if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = UINT8_MAX;
	static volatile uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MAX;

    t60 = ((x273&(x274>x275))-x276);

    if (t60 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x277 = UINT8_MAX;
	uint64_t x278 = 602883313444098264LLU;
	volatile int64_t x279 = 202006732857LL;
	static volatile uint64_t x280 = 7751773554700414784LLU;
	uint64_t t61 = 813124LLU;

    t61 = ((x277&(x278>x279))-x280);

    if (t61 != 10694970519009136833LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x281 = -461610450LL;
	volatile uint8_t x282 = UINT8_MAX;
	volatile int8_t x283 = INT8_MIN;
	int32_t x284 = INT32_MIN;
	volatile int64_t t62 = 7798398983LL;

    t62 = ((x281&(x282>x283))-x284);

    if (t62 != 2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint16_t x285 = 1641U;
	uint8_t x286 = UINT8_MAX;
	volatile int16_t x288 = -1;

    t63 = ((x285&(x286>x287))-x288);

    if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x290 = INT8_MAX;
	int32_t x291 = INT32_MIN;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t64 = 352376U;

    t64 = ((x289&(x290>x291))-x292);

    if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x295 = 1U;
	static int32_t x296 = -1;
	int64_t t65 = -110LL;

    t65 = ((x293&(x294>x295))-x296);

    if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x297 = 408;
	static uint32_t x300 = 59099316U;
	uint32_t t66 = 4765U;

    t66 = ((x297&(x298>x299))-x300);

    if (t66 != 4235867980U) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int16_t x301 = INT16_MIN;
	static int64_t x304 = 15279638LL;
	int64_t t67 = -243495156LL;

    t67 = ((x301&(x302>x303))-x304);

    if (t67 != -15279638LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x306 = 28330;
	volatile int16_t x307 = 1;
	volatile uint64_t x308 = 11690LLU;

    t68 = ((x305&(x306>x307))-x308);

    if (t68 != 18446744073709539927LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x309 = INT64_MIN;
	int64_t x311 = 274162052LL;
	static int16_t x312 = -1;

    t69 = ((x309&(x310>x311))-x312);

    if (t69 != 1LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint8_t x319 = 50U;
	uint16_t x320 = 740U;
	volatile int32_t t70 = 2939;

    t70 = ((x317&(x318>x319))-x320);

    if (t70 != -740) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int32_t x322 = 3263352;
	int16_t x323 = INT16_MAX;
	volatile int64_t t71 = 825232671LL;

    t71 = ((x321&(x322>x323))-x324);

    if (t71 != 13385840LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x325 = UINT32_MAX;
	volatile uint16_t x326 = UINT16_MAX;
	int32_t x327 = INT32_MIN;
	int8_t x328 = -11;
	volatile uint32_t t72 = 12U;

    t72 = ((x325&(x326>x327))-x328);

    if (t72 != 12U) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x329 = 4U;
	static int64_t x330 = INT64_MIN;
	volatile int8_t x332 = INT8_MAX;
	int32_t t73 = 4;

    t73 = ((x329&(x330>x331))-x332);

    if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x333 = 29287002974248LL;
	static uint64_t x335 = 13923032046LLU;
	int32_t x336 = 21;
	int64_t t74 = -2237582007LL;

    t74 = ((x333&(x334>x335))-x336);

    if (t74 != -21LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x337 = -1;
	static int32_t x338 = 0;
	int8_t x339 = INT8_MIN;
	int32_t x340 = -21074342;
	static int32_t t75 = -3528117;

    t75 = ((x337&(x338>x339))-x340);

    if (t75 != 21074343) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x341 = 29005U;
	int32_t x342 = INT32_MIN;
	uint32_t x343 = 0U;
	uint64_t x344 = 9377144940LLU;
	uint64_t t76 = 105LLU;

    t76 = ((x341&(x342>x343))-x344);

    if (t76 != 18446744064332406677LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x346 = INT32_MIN;
	volatile int16_t x347 = -1;
	int32_t x348 = INT32_MAX;
	static uint64_t t77 = 19293670LLU;

    t77 = ((x345&(x346>x347))-x348);

    if (t77 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = -1;
	int64_t x350 = INT64_MIN;
	volatile uint8_t x351 = 39U;
	volatile int8_t x352 = -53;
	int32_t t78 = -245519702;

    t78 = ((x349&(x350>x351))-x352);

    if (t78 != 53) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MAX;
	static int16_t x355 = 0;
	int32_t x356 = INT32_MAX;
	static volatile int32_t t79 = 169105;

    t79 = ((x353&(x354>x355))-x356);

    if (t79 != -2147483646) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x357 = INT64_MAX;
	static volatile int64_t x359 = INT64_MIN;
	static int64_t t80 = -6LL;

    t80 = ((x357&(x358>x359))-x360);

    if (t80 != -10LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x362 = 16;
	static int32_t x363 = -13155934;
	volatile uint32_t t81 = 23634204U;

    t81 = ((x361&(x362>x363))-x364);

    if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x365 = 18130991644456963LL;
	volatile uint32_t x366 = UINT32_MAX;
	uint64_t x367 = UINT64_MAX;
	volatile int64_t x368 = INT64_MAX;
	volatile int64_t t82 = -965426782000699510LL;

    t82 = ((x365&(x366>x367))-x368);

    if (t82 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x369 = 7936U;
	volatile int32_t x370 = -1;
	int64_t x371 = 360504209607LL;
	int32_t x372 = 25185;
	static int32_t t83 = 16;

    t83 = ((x369&(x370>x371))-x372);

    if (t83 != -25185) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x373 = 1146821U;
	static int64_t x375 = INT64_MAX;
	static int16_t x376 = INT16_MIN;
	static uint32_t t84 = 140886024U;

    t84 = ((x373&(x374>x375))-x376);

    if (t84 != 32768U) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x377 = -360389LL;
	volatile uint8_t x378 = 41U;
	uint8_t x379 = 22U;
	uint64_t x380 = UINT64_MAX;
	uint64_t t85 = 764372517009LLU;

    t85 = ((x377&(x378>x379))-x380);

    if (t85 != 2LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x382 = INT32_MIN;
	int32_t x383 = -1;
	uint16_t x384 = UINT16_MAX;
	static int32_t t86 = -14;

    t86 = ((x381&(x382>x383))-x384);

    if (t86 != -65535) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x385 = INT16_MAX;
	volatile uint8_t x387 = 1U;
	static volatile int64_t x388 = -1LL;
	int64_t t87 = -440677793448747LL;

    t87 = ((x385&(x386>x387))-x388);

    if (t87 != 1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x394 = -4;
	static volatile int64_t x395 = INT64_MAX;
	volatile int32_t x396 = -1;
	static volatile int32_t t88 = -1310428;

    t88 = ((x393&(x394>x395))-x396);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int64_t x397 = INT64_MAX;
	volatile int64_t x398 = INT64_MIN;
	uint8_t x399 = 0U;
	volatile uint8_t x400 = UINT8_MAX;
	static volatile int64_t t89 = 26744609LL;

    t89 = ((x397&(x398>x399))-x400);

    if (t89 != -255LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MAX;
	volatile uint8_t x403 = 1U;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t90 = -47554;

    t90 = ((x401&(x402>x403))-x404);

    if (t90 != -254) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x406 = -1;
	int16_t x407 = INT16_MIN;
	int8_t x408 = -1;
	static volatile int32_t t91 = -521;

    t91 = ((x405&(x406>x407))-x408);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint32_t x409 = UINT32_MAX;
	static int64_t x410 = INT64_MAX;
	uint32_t x411 = 168U;
	volatile uint32_t t92 = 330421258U;

    t92 = ((x409&(x410>x411))-x412);

    if (t92 != 32769U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x413 = -4;
	uint64_t x414 = UINT64_MAX;
	volatile int32_t x415 = -60633;
	int64_t x416 = INT64_MAX;
	static volatile int64_t t93 = -88708LL;

    t93 = ((x413&(x414>x415))-x416);

    if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x417 = 526;
	uint8_t x418 = 25U;
	static int16_t x420 = INT16_MIN;
	static int32_t t94 = -1544958;

    t94 = ((x417&(x418>x419))-x420);

    if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x421 = 61U;
	int64_t x422 = -2LL;
	int64_t t95 = -204040667LL;

    t95 = ((x421&(x422>x423))-x424);

    if (t95 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x425 = INT64_MIN;
	int32_t x426 = -780;
	int64_t x427 = 115780526LL;
	static uint64_t x428 = 16695760LLU;
	volatile uint64_t t96 = 2LLU;

    t96 = ((x425&(x426>x427))-x428);

    if (t96 != 18446744073692855856LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x429 = UINT64_MAX;
	int64_t x432 = -1LL;
	volatile uint64_t t97 = 2LLU;

    t97 = ((x429&(x430>x431))-x432);

    if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int32_t x433 = INT32_MIN;
	int16_t x434 = INT16_MAX;
	static uint32_t x435 = UINT32_MAX;
	int16_t x436 = -29;
	volatile int32_t t98 = -20;

    t98 = ((x433&(x434>x435))-x436);

    if (t98 != 29) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x437 = INT16_MIN;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = 71856461U;
	volatile uint32_t t99 = 467U;

    t99 = ((x437&(x438>x439))-x440);

    if (t99 != 4223110835U) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x442 = 0U;
	volatile uint64_t x444 = UINT64_MAX;
	uint64_t t100 = 40545407LLU;

    t100 = ((x441&(x442>x443))-x444);

    if (t100 != 1LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = -1LL;
	int64_t x446 = -1LL;
	static int64_t x447 = -15540LL;

    t101 = ((x445&(x446>x447))-x448);

    if (t101 != 2147483649LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x449 = 151;
	volatile int8_t x451 = -1;
	int8_t x452 = INT8_MIN;
	volatile int32_t t102 = 94531;

    t102 = ((x449&(x450>x451))-x452);

    if (t102 != 129) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint16_t x453 = 0U;
	uint64_t x454 = 379419144LLU;
	uint64_t x455 = 7125225261875LLU;
	uint64_t x456 = 1275829098379327LLU;
	uint64_t t103 = 110958233463257644LLU;

    t103 = ((x453&(x454>x455))-x456);

    if (t103 != 18445468244611172289LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile uint16_t x458 = 10971U;
	int64_t x459 = INT64_MAX;
	uint16_t x460 = 486U;
	volatile int32_t t104 = -155;

    t104 = ((x457&(x458>x459))-x460);

    if (t104 != -486) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x461 = INT8_MIN;
	int16_t x462 = INT16_MIN;
	volatile int32_t x463 = INT32_MIN;
	uint32_t x464 = 14610708U;
	static volatile uint32_t t105 = 90758137U;

    t105 = ((x461&(x462>x463))-x464);

    if (t105 != 4280356588U) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x466 = INT8_MIN;
	int64_t x467 = INT64_MIN;
	int64_t x468 = 1072093323390281309LL;
	int64_t t106 = -5970978LL;

    t106 = ((x465&(x466>x467))-x468);

    if (t106 != -1072093323390281308LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x473 = INT32_MIN;
	static uint8_t x474 = 39U;
	int16_t x475 = 970;
	int8_t x476 = -1;
	volatile int32_t t107 = 487;

    t107 = ((x473&(x474>x475))-x476);

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x477 = -129768;
	uint8_t x478 = UINT8_MAX;
	uint8_t x479 = UINT8_MAX;
	static uint32_t x480 = 869876473U;

    t108 = ((x477&(x478>x479))-x480);

    if (t108 != 3425090823U) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x482 = 965U;
	static uint16_t x483 = 926U;
	static int16_t x484 = -1;

    t109 = ((x481&(x482>x483))-x484);

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x485 = 0U;
	static int16_t x486 = -55;
	volatile uint16_t x487 = UINT16_MAX;
	int32_t t110 = 1479;

    t110 = ((x485&(x486>x487))-x488);

    if (t110 != -4) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x491 = -1;
	int16_t x492 = INT16_MAX;
	volatile uint64_t t111 = 2776LLU;

    t111 = ((x489&(x490>x491))-x492);

    if (t111 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x493 = UINT16_MAX;
	uint64_t x494 = 62168478011957LLU;
	volatile int16_t x495 = INT16_MAX;
	int64_t x496 = -209460376521LL;
	int64_t t112 = -15228LL;

    t112 = ((x493&(x494>x495))-x496);

    if (t112 != 209460376522LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x497 = INT16_MAX;
	uint8_t x498 = 1U;
	int8_t x499 = -1;
	static int8_t x500 = INT8_MIN;

    t113 = ((x497&(x498>x499))-x500);

    if (t113 != 129) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x501 = INT64_MIN;
	static int64_t x502 = INT64_MAX;
	static uint64_t x503 = 120LLU;
	static int16_t x504 = INT16_MIN;
	volatile int64_t t114 = 7972036LL;

    t114 = ((x501&(x502>x503))-x504);

    if (t114 != 32768LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x505 = UINT32_MAX;
	int16_t x506 = -16277;
	int8_t x507 = INT8_MAX;
	int8_t x508 = -11;
	volatile uint32_t t115 = 10573161U;

    t115 = ((x505&(x506>x507))-x508);

    if (t115 != 11U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x509 = INT32_MIN;
	uint64_t x510 = 3320715000292702066LLU;
	static int16_t x511 = -2132;
	uint16_t x512 = UINT16_MAX;

    t116 = ((x509&(x510>x511))-x512);

    if (t116 != -65535) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x513 = UINT8_MAX;
	int32_t x514 = -561924496;
	int64_t x515 = -131695147709090800LL;
	volatile int32_t t117 = -93471;

    t117 = ((x513&(x514>x515))-x516);

    if (t117 != -45) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x517 = INT8_MAX;
	int16_t x520 = -2988;

    t118 = ((x517&(x518>x519))-x520);

    if (t118 != 2988) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x521 = 1024065114344709LLU;
	static int64_t x522 = 258172LL;
	int64_t x523 = INT64_MAX;
	volatile int32_t x524 = INT32_MIN;

    t119 = ((x521&(x522>x523))-x524);

    if (t119 != 2147483648LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x526 = 110U;
	static uint16_t x527 = UINT16_MAX;
	int16_t x528 = INT16_MAX;

    t120 = ((x525&(x526>x527))-x528);

    if (t120 != -32767) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x529 = 58U;
	int16_t x530 = -1;
	uint64_t x531 = UINT64_MAX;
	uint8_t x532 = UINT8_MAX;
	volatile int32_t t121 = 16;

    t121 = ((x529&(x530>x531))-x532);

    if (t121 != -255) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x533 = -63912911LL;
	int8_t x534 = INT8_MAX;
	volatile uint64_t t122 = 145211920LLU;

    t122 = ((x533&(x534>x535))-x536);

    if (t122 != 2LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x538 = INT8_MIN;
	int16_t x539 = -3038;
	uint8_t x540 = 0U;

    t123 = ((x537&(x538>x539))-x540);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x541 = INT32_MIN;
	int64_t x542 = 508164103776433915LL;
	int8_t x543 = -1;
	volatile uint64_t x544 = 1LLU;
	volatile uint64_t t124 = UINT64_MAX;

    t124 = ((x541&(x542>x543))-x544);

    if (t124 != UINT64_MAX) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x546 = 775;
	volatile int32_t x547 = 705;
	int64_t x548 = -1LL;

    t125 = ((x545&(x546>x547))-x548);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint8_t x549 = 12U;
	uint8_t x551 = 2U;
	volatile int32_t t126 = -3;

    t126 = ((x549&(x550>x551))-x552);

    if (t126 != -32767) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x553 = INT8_MIN;
	int32_t x554 = -1;
	volatile int64_t x555 = -256649365LL;
	static volatile int64_t t127 = -2022LL;

    t127 = ((x553&(x554>x555))-x556);

    if (t127 != 1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x558 = 3;
	static uint32_t x559 = UINT32_MAX;
	int32_t t128 = 3;

    t128 = ((x557&(x558>x559))-x560);

    if (t128 != 128) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x565 = 7367353U;
	static uint64_t x567 = 35LLU;
	uint64_t x568 = 3046LLU;
	uint64_t t129 = 16388807LLU;

    t129 = ((x565&(x566>x567))-x568);

    if (t129 != 18446744073709548571LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x569 = 37;
	int64_t x571 = 56939122199902735LL;
	uint8_t x572 = 4U;
	static int32_t t130 = -19;

    t130 = ((x569&(x570>x571))-x572);

    if (t130 != -4) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x577 = 1LL;
	uint64_t x578 = 1719567LLU;
	uint64_t x579 = 137963LLU;
	volatile int64_t t131 = 18LL;

    t131 = ((x577&(x578>x579))-x580);

    if (t131 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x583 = 1444;
	int32_t x584 = -1;
	volatile uint32_t t132 = 0U;

    t132 = ((x581&(x582>x583))-x584);

    if (t132 != 1U) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x586 = -4829;
	static volatile int8_t x587 = INT8_MIN;
	volatile int32_t x588 = INT32_MAX;

    t133 = ((x585&(x586>x587))-x588);

    if (t133 != 2147483649U) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x589 = 389638054159057611LLU;
	static int8_t x590 = 10;
	int8_t x591 = INT8_MIN;
	static uint64_t x592 = UINT64_MAX;
	volatile uint64_t t134 = 27587754531LLU;

    t134 = ((x589&(x590>x591))-x592);

    if (t134 != 2LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x593 = INT64_MAX;
	int8_t x594 = INT8_MIN;
	int32_t x595 = -1;
	int16_t x596 = INT16_MIN;
	int64_t t135 = -4LL;

    t135 = ((x593&(x594>x595))-x596);

    if (t135 != 32768LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x598 = UINT16_MAX;
	volatile int64_t x599 = 174432813414934032LL;
	uint8_t x600 = 55U;
	volatile int32_t t136 = -1;

    t136 = ((x597&(x598>x599))-x600);

    if (t136 != -55) { NG(); } else { ; }
	
}

void f137(void) {
    	static volatile int32_t x601 = -24697;
	static uint8_t x602 = UINT8_MAX;
	uint32_t x603 = UINT32_MAX;
	int32_t x604 = -1;
	volatile int32_t t137 = -28;

    t137 = ((x601&(x602>x603))-x604);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x605 = INT32_MAX;
	uint8_t x606 = UINT8_MAX;
	uint8_t x607 = 1U;
	uint64_t x608 = 2389814325LLU;
	static uint64_t t138 = 1957260222290068546LLU;

    t138 = ((x605&(x606>x607))-x608);

    if (t138 != 18446744071319737292LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x611 = INT64_MIN;
	int64_t t139 = 224003LL;

    t139 = ((x609&(x610>x611))-x612);

    if (t139 != 2919033LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x613 = 1U;
	int32_t x614 = INT32_MAX;
	uint8_t x615 = 4U;

    t140 = ((x613&(x614>x615))-x616);

    if (t140 != 2LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x617 = -1;
	static uint16_t x618 = 284U;
	int16_t x620 = INT16_MIN;
	volatile int32_t t141 = -129540989;

    t141 = ((x617&(x618>x619))-x620);

    if (t141 != 32768) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x621 = -1;
	volatile int16_t x622 = INT16_MIN;
	int8_t x624 = INT8_MIN;
	volatile int32_t t142 = -431;

    t142 = ((x621&(x622>x623))-x624);

    if (t142 != 128) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x625 = 333U;
	int16_t x626 = 0;
	static int64_t x627 = INT64_MIN;
	int32_t x628 = INT32_MIN;
	volatile uint32_t t143 = 891187033U;

    t143 = ((x625&(x626>x627))-x628);

    if (t143 != 2147483649U) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x629 = 57568709LLU;
	uint16_t x630 = 313U;
	int16_t x631 = -1;
	uint64_t t144 = 201000060162726826LLU;

    t144 = ((x629&(x630>x631))-x632);

    if (t144 != 18446741865393672959LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x633 = INT8_MIN;
	int32_t x634 = INT32_MIN;
	int8_t x635 = INT8_MAX;
	int32_t x636 = -1;
	volatile int32_t t145 = -29259841;

    t145 = ((x633&(x634>x635))-x636);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint16_t x637 = 2U;
	uint8_t x638 = 3U;
	uint16_t x639 = UINT16_MAX;
	int16_t x640 = 0;
	static int32_t t146 = 4;

    t146 = ((x637&(x638>x639))-x640);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x642 = INT64_MAX;
	volatile int32_t x643 = INT32_MIN;
	static int8_t x644 = -1;
	int32_t t147 = -847;

    t147 = ((x641&(x642>x643))-x644);

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint8_t x645 = UINT8_MAX;
	static int16_t x646 = -1;
	static int32_t x647 = -1;
	uint32_t x648 = UINT32_MAX;
	uint32_t t148 = 496379U;

    t148 = ((x645&(x646>x647))-x648);

    if (t148 != 1U) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x650 = INT64_MAX;
	int8_t x651 = INT8_MIN;
	volatile uint16_t x652 = UINT16_MAX;
	volatile int32_t t149 = 11031718;

    t149 = ((x649&(x650>x651))-x652);

    if (t149 != -65534) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t t150 = -996184LL;

    t150 = ((x653&(x654>x655))-x656);

    if (t150 != 8352LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x658 = 1U;
	uint16_t x659 = UINT16_MAX;
	static int8_t x660 = -1;
	volatile uint32_t t151 = 26819U;

    t151 = ((x657&(x658>x659))-x660);

    if (t151 != 1U) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x661 = INT64_MIN;
	static volatile int32_t x662 = 89;
	static int8_t x663 = INT8_MIN;
	uint8_t x664 = 18U;

    t152 = ((x661&(x662>x663))-x664);

    if (t152 != -18LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x665 = 3402U;
	volatile int64_t x666 = INT64_MAX;
	int16_t x667 = INT16_MIN;
	uint32_t x668 = 8318973U;
	uint32_t t153 = 329U;

    t153 = ((x665&(x666>x667))-x668);

    if (t153 != 4286648323U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x669 = INT64_MIN;
	int64_t x670 = INT64_MAX;
	int64_t x672 = 56517LL;

    t154 = ((x669&(x670>x671))-x672);

    if (t154 != -56517LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x673 = -16039;
	int16_t x674 = INT16_MAX;
	int16_t x675 = INT16_MIN;
	int16_t x676 = INT16_MAX;

    t155 = ((x673&(x674>x675))-x676);

    if (t155 != -32766) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile uint8_t x677 = 0U;
	static volatile uint16_t x678 = 120U;
	int64_t x679 = 10607LL;
	uint64_t x680 = 26531LLU;
	uint64_t t156 = 4792515097LLU;

    t156 = ((x677&(x678>x679))-x680);

    if (t156 != 18446744073709525085LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x681 = INT64_MIN;
	int32_t x683 = INT32_MAX;
	int32_t x684 = INT32_MIN;
	int64_t t157 = 1749397LL;

    t157 = ((x681&(x682>x683))-x684);

    if (t157 != 2147483648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x685 = UINT16_MAX;
	int16_t x687 = -85;
	uint64_t x688 = 147LLU;
	volatile uint64_t t158 = 11414558LLU;

    t158 = ((x685&(x686>x687))-x688);

    if (t158 != 18446744073709551469LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x689 = INT32_MAX;
	int16_t x691 = 2199;
	volatile uint64_t x692 = UINT64_MAX;
	uint64_t t159 = 587LLU;

    t159 = ((x689&(x690>x691))-x692);

    if (t159 != 2LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x693 = UINT64_MAX;
	static uint8_t x694 = UINT8_MAX;
	int8_t x695 = -1;
	static int64_t x696 = INT64_MIN;
	volatile uint64_t t160 = 34594031494221417LLU;

    t160 = ((x693&(x694>x695))-x696);

    if (t160 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x698 = 3U;
	int16_t x699 = 14;
	int32_t x700 = INT32_MAX;
	static int32_t t161 = -112397981;

    t161 = ((x697&(x698>x699))-x700);

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x705 = -1;
	uint64_t x706 = UINT64_MAX;
	volatile int32_t x708 = 445531256;
	int32_t t162 = 12359;

    t162 = ((x705&(x706>x707))-x708);

    if (t162 != -445531255) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x709 = INT64_MIN;
	int8_t x710 = INT8_MAX;
	uint16_t x712 = UINT16_MAX;

    t163 = ((x709&(x710>x711))-x712);

    if (t163 != -65535LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x715 = INT64_MIN;
	volatile uint16_t x716 = 10210U;
	volatile int32_t t164 = -646;

    t164 = ((x713&(x714>x715))-x716);

    if (t164 != -10210) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x717 = INT64_MIN;
	int64_t x718 = -19333081LL;
	uint32_t x720 = UINT32_MAX;
	int64_t t165 = 839935069895LL;

    t165 = ((x717&(x718>x719))-x720);

    if (t165 != -4294967295LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x725 = INT32_MIN;
	int64_t x726 = INT64_MIN;
	uint32_t x727 = 1453280645U;
	uint64_t x728 = 12LLU;

    t166 = ((x725&(x726>x727))-x728);

    if (t166 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint16_t x729 = UINT16_MAX;
	static uint32_t x730 = 15564943U;
	static volatile int16_t x731 = INT16_MIN;
	volatile uint16_t x732 = 4U;
	int32_t t167 = -39893965;

    t167 = ((x729&(x730>x731))-x732);

    if (t167 != -4) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x733 = INT8_MAX;
	static uint8_t x735 = UINT8_MAX;
	uint64_t x736 = 55411LLU;
	volatile uint64_t t168 = 2LLU;

    t168 = ((x733&(x734>x735))-x736);

    if (t168 != 18446744073709496205LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x737 = INT16_MIN;
	volatile uint8_t x738 = UINT8_MAX;
	volatile int8_t x740 = INT8_MIN;
	volatile int32_t t169 = 44;

    t169 = ((x737&(x738>x739))-x740);

    if (t169 != 128) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x741 = -1;
	volatile uint32_t x742 = 37235U;
	volatile uint32_t x743 = 1337470U;
	volatile int32_t t170 = -16754107;

    t170 = ((x741&(x742>x743))-x744);

    if (t170 != 32768) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x749 = 1761U;
	volatile uint8_t x750 = 28U;
	uint64_t x751 = 4321833969737486067LLU;

    t171 = ((x749&(x750>x751))-x752);

    if (t171 != 18446744053655068333LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int32_t x753 = INT32_MAX;
	volatile uint64_t x754 = UINT64_MAX;
	int64_t x755 = INT64_MAX;
	int8_t x756 = INT8_MIN;
	int32_t t172 = -708694645;

    t172 = ((x753&(x754>x755))-x756);

    if (t172 != 129) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x757 = UINT64_MAX;
	volatile int8_t x758 = INT8_MIN;
	uint64_t t173 = 43634709LLU;

    t173 = ((x757&(x758>x759))-x760);

    if (t173 != 22964942250LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x762 = -4;
	int8_t x764 = -1;

    t174 = ((x761&(x762>x763))-x764);

    if (t174 != 2U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x769 = INT16_MIN;
	uint64_t x771 = 1120654150036LLU;
	static int8_t x772 = -1;
	int32_t t175 = -4909;

    t175 = ((x769&(x770>x771))-x772);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x775 = 34U;
	static volatile int64_t x776 = 466964LL;
	volatile int64_t t176 = 3191666LL;

    t176 = ((x773&(x774>x775))-x776);

    if (t176 != -466964LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x777 = -1;
	int32_t x778 = INT32_MIN;
	int64_t x779 = INT64_MIN;
	volatile int32_t t177 = 57820870;

    t177 = ((x777&(x778>x779))-x780);

    if (t177 != 2) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x781 = INT8_MAX;
	static uint32_t x783 = UINT32_MAX;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t178 = -12;

    t178 = ((x781&(x782>x783))-x784);

    if (t178 != 32769) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x786 = -204490478003644175LL;

    t179 = ((x785&(x786>x787))-x788);

    if (t179 != 4294967280U) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x789 = UINT32_MAX;
	static uint32_t x791 = UINT32_MAX;
	int16_t x792 = INT16_MIN;
	volatile uint32_t t180 = 274455U;

    t180 = ((x789&(x790>x791))-x792);

    if (t180 != 32768U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x798 = UINT32_MAX;
	static uint8_t x799 = UINT8_MAX;
	uint8_t x800 = 41U;
	volatile uint64_t t181 = 4326089332836856LLU;

    t181 = ((x797&(x798>x799))-x800);

    if (t181 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x801 = INT32_MAX;
	int32_t x802 = INT32_MIN;
	volatile int32_t x803 = INT32_MIN;
	static volatile int8_t x804 = INT8_MIN;
	volatile int32_t t182 = -4892439;

    t182 = ((x801&(x802>x803))-x804);

    if (t182 != 128) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x805 = UINT64_MAX;
	int32_t x806 = -1;
	int8_t x808 = INT8_MIN;
	uint64_t t183 = 4117952288LLU;

    t183 = ((x805&(x806>x807))-x808);

    if (t183 != 128LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x809 = UINT64_MAX;
	int64_t x810 = INT64_MIN;
	int16_t x811 = -1;
	static int32_t x812 = INT32_MAX;
	volatile uint64_t t184 = 25971468LLU;

    t184 = ((x809&(x810>x811))-x812);

    if (t184 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x813 = 34;
	int16_t x814 = -22;
	int8_t x815 = INT8_MAX;
	int32_t x816 = 1;

    t185 = ((x813&(x814>x815))-x816);

    if (t185 != -1) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x817 = -1LL;
	int32_t x819 = INT32_MAX;
	int8_t x820 = INT8_MAX;

    t186 = ((x817&(x818>x819))-x820);

    if (t186 != -127LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x821 = -1856;
	uint16_t x822 = 5U;
	static int16_t x823 = INT16_MIN;
	volatile int64_t x824 = -1LL;
	int64_t t187 = -12384606LL;

    t187 = ((x821&(x822>x823))-x824);

    if (t187 != 1LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x831 = INT8_MAX;
	static uint8_t x832 = UINT8_MAX;
	static volatile int32_t t188 = 6731660;

    t188 = ((x829&(x830>x831))-x832);

    if (t188 != -255) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x833 = UINT32_MAX;
	int8_t x835 = INT8_MIN;
	volatile int16_t x836 = -1;
	static uint32_t t189 = 2U;

    t189 = ((x833&(x834>x835))-x836);

    if (t189 != 1U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int8_t x837 = INT8_MIN;
	uint64_t x838 = UINT64_MAX;
	static uint32_t x839 = 25U;
	int32_t t190 = 37;

    t190 = ((x837&(x838>x839))-x840);

    if (t190 != 32768) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x841 = INT32_MIN;
	int16_t x842 = 701;
	volatile int8_t x844 = -1;
	static volatile int32_t t191 = -902;

    t191 = ((x841&(x842>x843))-x844);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x846 = -4;
	volatile uint8_t x847 = 3U;
	static uint32_t x848 = UINT32_MAX;
	static uint32_t t192 = 66931564U;

    t192 = ((x845&(x846>x847))-x848);

    if (t192 != 1U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x849 = INT64_MIN;
	static int32_t x851 = INT32_MIN;
	uint32_t x852 = 2U;
	volatile int64_t t193 = -123945276950818603LL;

    t193 = ((x849&(x850>x851))-x852);

    if (t193 != -2LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x853 = UINT64_MAX;
	static int16_t x854 = 0;
	static int64_t x855 = -8450864662333LL;
	volatile int64_t x856 = INT64_MAX;
	uint64_t t194 = 2034036LLU;

    t194 = ((x853&(x854>x855))-x856);

    if (t194 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x857 = 15572U;
	volatile int32_t x858 = 11;
	uint16_t x859 = UINT16_MAX;
	uint32_t x860 = 231879591U;
	volatile uint32_t t195 = 161U;

    t195 = ((x857&(x858>x859))-x860);

    if (t195 != 4063087705U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x861 = -1841515184920718321LL;
	int16_t x862 = -1;
	int32_t x863 = 229;
	int64_t x864 = INT64_MAX;
	volatile int64_t t196 = -28LL;

    t196 = ((x861&(x862>x863))-x864);

    if (t196 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x865 = INT64_MAX;
	volatile int8_t x866 = INT8_MAX;
	static int8_t x867 = INT8_MIN;
	volatile int64_t t197 = -55961849159359LL;

    t197 = ((x865&(x866>x867))-x868);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x869 = INT32_MIN;
	int16_t x870 = INT16_MIN;
	int64_t x871 = -1LL;
	int64_t x872 = -1LL;
	volatile int64_t t198 = -1007651769874859541LL;

    t198 = ((x869&(x870>x871))-x872);

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x873 = UINT32_MAX;
	uint16_t x874 = 1295U;
	int8_t x875 = 1;
	static int16_t x876 = 754;
	volatile uint32_t t199 = 4U;

    t199 = ((x873&(x874>x875))-x876);

    if (t199 != 4294966543U) { NG(); } else { ; }
	
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

