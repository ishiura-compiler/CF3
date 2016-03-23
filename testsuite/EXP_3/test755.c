
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

static int8_t x8 = 1;
uint64_t t1 = 41643578066LLU;
volatile int64_t t2 = -308216278515529456LL;
int32_t x13 = -1;
uint32_t x17 = 7952U;
int64_t x19 = INT64_MIN;
volatile uint16_t x20 = UINT16_MAX;
int64_t t4 = 6LL;
static uint16_t x25 = 12254U;
static volatile uint64_t t7 = 3441347997752292216LLU;
int64_t t8 = 23442274967610578LL;
static volatile int8_t x37 = -1;
int16_t x39 = 675;
int64_t x51 = -1LL;
volatile int64_t t14 = 9645246201106LL;
volatile int64_t x82 = INT64_MIN;
static int64_t x86 = 1220510575600914198LL;
int16_t x92 = -4341;
volatile int32_t t23 = 611486;
int32_t x112 = INT32_MIN;
int64_t x121 = -133632732LL;
volatile uint8_t x122 = 8U;
volatile int32_t t29 = 239;
volatile uint16_t x131 = 1617U;
static volatile int64_t x138 = INT64_MIN;
uint16_t x143 = 6U;
uint32_t t36 = 2U;
volatile int32_t x160 = 20083;
uint64_t x164 = UINT64_MAX;
int64_t x167 = -123305946468324LL;
static uint64_t x168 = 640861LLU;
static int64_t t40 = 244604621212134631LL;
int64_t x173 = INT64_MIN;
volatile int8_t x175 = INT8_MIN;
int16_t x176 = -1;
int64_t x178 = INT64_MIN;
uint64_t x180 = 1LLU;
uint8_t x181 = UINT8_MAX;
int8_t x185 = INT8_MAX;
volatile int16_t x186 = -1;
static volatile int64_t t44 = -5311LL;
uint32_t x192 = 138U;
uint64_t x195 = 16LLU;
int64_t x199 = -1LL;
uint16_t x201 = 8764U;
int64_t x202 = INT64_MAX;
int16_t x208 = INT16_MIN;
uint32_t x213 = 24U;
static volatile int64_t x219 = INT64_MAX;
int16_t x220 = INT16_MIN;
static int8_t x223 = -1;
static uint8_t x228 = 54U;
volatile uint8_t x230 = UINT8_MAX;
uint64_t t55 = 535301LLU;
static int64_t x233 = INT64_MIN;
int8_t x234 = INT8_MIN;
volatile int32_t x238 = -122906155;
int8_t x241 = INT8_MIN;
volatile int32_t t58 = 50198824;
int32_t t60 = -153;
int32_t x253 = -63398;
int64_t x254 = 1631864296254928859LL;
uint32_t x257 = 10832376U;
uint32_t t63 = UINT32_MAX;
uint16_t x269 = 21U;
int16_t x274 = 0;
int64_t x276 = -1LL;
int8_t x281 = INT8_MAX;
int32_t x291 = -1;
uint16_t x302 = UINT16_MAX;
int8_t x314 = INT8_MAX;
int32_t x315 = INT32_MIN;
volatile int32_t t76 = -3151;
uint32_t x317 = UINT32_MAX;
volatile int16_t x318 = -2;
static int32_t x325 = 3509;
volatile uint64_t t86 = 81386160684369972LLU;
int16_t x358 = 1255;
volatile uint64_t x360 = 3859294023895738888LLU;
int8_t x365 = 15;
static int64_t x366 = -1LL;
static int16_t x367 = 23;
int16_t x370 = INT16_MIN;
volatile int32_t t90 = 272973573;
uint64_t x374 = UINT64_MAX;
int16_t x375 = -1;
uint64_t t91 = UINT64_MAX;
int64_t x379 = INT64_MIN;
int64_t x380 = INT64_MAX;
volatile int64_t x382 = -1LL;
static int64_t t93 = -1160691510LL;
uint16_t x395 = UINT16_MAX;
uint32_t t97 = 90308U;
int16_t x411 = INT16_MIN;
static uint64_t t99 = 27060787770067LLU;
static volatile uint32_t x418 = 4U;
int64_t x424 = -457267852314058656LL;
volatile int8_t x430 = INT8_MAX;
uint8_t x431 = UINT8_MAX;
int32_t t105 = 2187779;
int16_t x446 = INT16_MIN;
uint32_t x452 = 1011885U;
static int64_t x457 = -496358625480839LL;
int8_t x476 = -1;
int64_t x482 = INT64_MIN;
uint64_t x492 = 118208606437765610LLU;
volatile uint64_t t118 = 61335315285911824LLU;
uint32_t x496 = 635944049U;
int32_t x497 = INT32_MIN;
int8_t x500 = -1;
uint8_t x503 = 0U;
int64_t x505 = -1LL;
volatile int32_t t123 = 266;
volatile uint32_t x514 = 120782968U;
uint16_t x518 = 956U;
int8_t x519 = 33;
uint32_t x520 = 493068526U;
volatile uint32_t t125 = 93U;
static volatile int64_t t126 = 230710163148301923LL;
int8_t x528 = INT8_MIN;
uint16_t x531 = 104U;
volatile int64_t t128 = -248LL;
int32_t x533 = INT32_MIN;
int8_t x543 = INT8_MIN;
volatile uint16_t x544 = UINT16_MAX;
int32_t t132 = -299212058;
static uint16_t x566 = UINT16_MAX;
uint32_t x569 = 11U;
static int16_t x578 = -129;
uint16_t x579 = UINT16_MAX;
static int64_t x584 = 73461369677LL;
uint64_t x590 = UINT64_MAX;
volatile int16_t x592 = INT16_MIN;
uint64_t t143 = 1017159LLU;
uint64_t x606 = 183252745120LLU;
int16_t x607 = INT16_MAX;
int8_t x608 = INT8_MIN;
uint32_t x616 = UINT32_MAX;
int64_t x621 = INT64_MIN;
int32_t x642 = -1;
int32_t x643 = INT32_MIN;
int64_t x644 = INT64_MIN;
uint8_t x646 = UINT8_MAX;
int64_t x648 = 24741044497874827LL;
static int32_t x649 = 852351;
int8_t x650 = INT8_MIN;
uint32_t x659 = 123286U;
static int64_t x666 = 1246LL;
int64_t t162 = -137LL;
uint8_t x674 = UINT8_MAX;
volatile uint16_t x679 = 359U;
int32_t t164 = -64236127;
volatile int8_t x684 = 1;
static int64_t x685 = -13283437077321903LL;
static int32_t x688 = -10715010;
int32_t x689 = 18;
int64_t x691 = INT64_MIN;
int16_t x699 = -1;
int8_t x701 = -1;
static uint64_t x704 = UINT64_MAX;
static volatile int16_t x718 = -1;
volatile int64_t t173 = 4460918170920LL;
uint64_t x723 = UINT64_MAX;
static int8_t x724 = INT8_MAX;
uint8_t x728 = 19U;
int32_t t175 = 31;
volatile uint64_t t176 = 11LLU;
static int64_t x734 = -161LL;
static int16_t x739 = INT16_MIN;
static uint64_t x741 = 837552LLU;
int64_t x744 = -1369002380LL;
uint64_t x745 = 7LLU;
static uint16_t x747 = 250U;
uint64_t t180 = 65909280840LLU;
int32_t x749 = -2;
int8_t x757 = INT8_MIN;
int16_t x763 = INT16_MIN;
volatile int32_t t185 = -499;
static int64_t x781 = INT64_MAX;
uint16_t x785 = 265U;
uint16_t x786 = UINT16_MAX;
int16_t x796 = 4708;
int16_t x799 = -2994;
uint16_t x801 = 3U;
static int16_t x803 = INT16_MIN;
uint64_t x807 = 3229605587LLU;
uint64_t x818 = 2384LLU;
int16_t x820 = INT16_MIN;


void f0(void) {
    	int32_t x1 = -961828375;
	static int16_t x2 = -51;
	int32_t x3 = INT32_MIN;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 4303006LL;

    t0 = ((x1&x2)|(x3/x4));

    if (t0 != -961828407LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 57U;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = -163013461;

    t1 = ((x5&x6)|(x7/x8));

    if (t1 != 18446744073546538171LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int32_t x10 = INT32_MAX;
	int16_t x11 = -1466;
	uint32_t x12 = UINT32_MAX;

    t2 = ((x9&x10)|(x11/x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -1;
	int32_t x15 = 0;
	volatile int8_t x16 = -27;
	volatile int32_t t3 = 40045064;

    t3 = ((x13&x14)|(x15/x16));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x18 = INT32_MIN;

    t4 = ((x17&x18)|(x19/x20));

    if (t4 != -140739635871744LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = 3240512481598266824LL;
	volatile uint16_t x22 = 1U;
	static uint16_t x23 = 7U;
	int8_t x24 = INT8_MIN;
	int64_t t5 = -21686222LL;

    t5 = ((x21&x22)|(x23/x24));

    if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x26 = INT32_MIN;
	uint32_t x27 = UINT32_MAX;
	uint16_t x28 = 15U;
	uint32_t t6 = 15794U;

    t6 = ((x25&x26)|(x27/x28));

    if (t6 != 286331153U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	static int8_t x30 = INT8_MIN;
	volatile uint64_t x31 = UINT64_MAX;
	int8_t x32 = -1;

    t7 = ((x29&x30)|(x31/x32));

    if (t7 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int32_t x33 = INT32_MIN;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MAX;
	int8_t x36 = -7;

    t8 = ((x33&x34)|(x35/x36));

    if (t8 != -18LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int16_t x38 = INT16_MIN;
	int16_t x40 = -1;
	int32_t t9 = -155797;

    t9 = ((x37&x38)|(x39/x40));

    if (t9 != -675) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = 0;
	volatile int32_t x42 = -1;
	static volatile int64_t x43 = 4244401466LL;
	volatile int32_t x44 = 2;
	volatile int64_t t10 = -272503412040755LL;

    t10 = ((x41&x42)|(x43/x44));

    if (t10 != 2122200733LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x45 = INT16_MIN;
	static int32_t x46 = -1;
	int16_t x47 = -1;
	int16_t x48 = 1;
	volatile int32_t t11 = 3;

    t11 = ((x45&x46)|(x47/x48));

    if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x49 = 2964600U;
	volatile uint8_t x50 = 3U;
	int8_t x52 = -1;
	int64_t t12 = -10LL;

    t12 = ((x49&x50)|(x51/x52));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = -9550;
	static int64_t x58 = INT64_MAX;
	int16_t x59 = INT16_MAX;
	int32_t x60 = INT32_MAX;
	int64_t t13 = 123LL;

    t13 = ((x57&x58)|(x59/x60));

    if (t13 != 9223372036854766258LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x65 = -14;
	uint8_t x66 = UINT8_MAX;
	static uint32_t x67 = 59959467U;
	volatile int64_t x68 = -2517087693805LL;

    t14 = ((x65&x66)|(x67/x68));

    if (t14 != 242LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = 457;
	int8_t x70 = INT8_MIN;
	volatile int64_t x71 = INT64_MIN;
	static int32_t x72 = INT32_MIN;
	volatile int64_t t15 = 1844017824502LL;

    t15 = ((x69&x70)|(x71/x72));

    if (t15 != 4294967680LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x73 = INT8_MIN;
	uint64_t x74 = 55954232568327LLU;
	volatile int64_t x75 = INT64_MAX;
	int64_t x76 = -1LL;
	volatile uint64_t t16 = 3LLU;

    t16 = ((x73&x74)|(x75/x76));

    if (t16 != 9223427991087344129LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x77 = 125673222LLU;
	uint32_t x78 = 56918985U;
	int16_t x79 = -55;
	static uint64_t x80 = 451814041LLU;
	volatile uint64_t t17 = 1059292509LLU;

    t17 = ((x77&x78)|(x79/x80));

    if (t17 != 40868024110LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x81 = -1;
	int64_t x83 = -28967LL;
	volatile int64_t x84 = INT64_MIN;
	static volatile int64_t t18 = INT64_MIN;

    t18 = ((x81&x82)|(x83/x84));

    if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x85 = UINT32_MAX;
	int8_t x87 = 1;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t19 = 7134090373842LLU;

    t19 = ((x85&x86)|(x87/x88));

    if (t19 != 3880570646LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x89 = INT16_MIN;
	int64_t x90 = 787998175502455586LL;
	int16_t x91 = INT16_MIN;
	static volatile int64_t t20 = 7332005LL;

    t20 = ((x89&x90)|(x91/x92));

    if (t20 != 787998175502434311LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x93 = UINT16_MAX;
	int8_t x94 = INT8_MAX;
	int32_t x95 = -22691;
	int32_t x96 = INT32_MIN;
	volatile int32_t t21 = -2;

    t21 = ((x93&x94)|(x95/x96));

    if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 22034U;
	volatile int64_t t22 = 67435594694LL;

    t22 = ((x97&x98)|(x99/x100));

    if (t22 != 418597260454514LL) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x101 = UINT8_MAX;
	int32_t x102 = INT32_MIN;
	int32_t x103 = 185514;
	uint8_t x104 = 1U;

    t23 = ((x101&x102)|(x103/x104));

    if (t23 != 185514) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x105 = 3U;
	uint32_t x106 = 88167958U;
	int32_t x107 = INT32_MAX;
	static uint16_t x108 = UINT16_MAX;
	volatile uint32_t t24 = 719611805U;

    t24 = ((x105&x106)|(x107/x108));

    if (t24 != 32770U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x109 = INT32_MIN;
	volatile uint8_t x110 = 2U;
	static int8_t x111 = -1;
	int32_t t25 = -291737;

    t25 = ((x109&x110)|(x111/x112));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x113 = 246U;
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = -1;
	static int64_t x116 = INT64_MAX;
	volatile int64_t t26 = 20268918629204798LL;

    t26 = ((x113&x114)|(x115/x116));

    if (t26 != 246LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x117 = 108U;
	uint8_t x118 = 55U;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = 14951;
	uint64_t t27 = 2478129792477LLU;

    t27 = ((x117&x118)|(x119/x120));

    if (t27 != 1233813395338743LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x123 = UINT16_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile int64_t t28 = 1LL;

    t28 = ((x121&x122)|(x123/x124));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x125 = INT16_MIN;
	int16_t x126 = -1;
	int16_t x127 = -1;
	volatile int32_t x128 = INT32_MIN;

    t29 = ((x125&x126)|(x127/x128));

    if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x129 = -21773171LL;
	uint32_t x130 = UINT32_MAX;
	uint8_t x132 = UINT8_MAX;
	int64_t t30 = -3009826864819553LL;

    t30 = ((x129&x130)|(x131/x132));

    if (t30 != 4273194127LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x133 = INT32_MIN;
	volatile int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	int64_t x136 = -1LL;
	volatile int64_t t31 = 3653LL;

    t31 = ((x133&x134)|(x135/x136));

    if (t31 != -2147450880LL) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 16620U;
	static int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	volatile int64_t t32 = 9360244592LL;

    t32 = ((x137&x138)|(x139/x140));

    if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x141 = UINT64_MAX;
	volatile uint8_t x142 = 1U;
	static volatile int64_t x144 = 29LL;
	uint64_t t33 = 354729494774905LLU;

    t33 = ((x141&x142)|(x143/x144));

    if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = 6090716U;
	static int16_t x146 = INT16_MAX;
	uint64_t x147 = 3010476104570987237LLU;
	static int8_t x148 = -4;
	volatile uint64_t t34 = 1LLU;

    t34 = ((x145&x146)|(x147/x148));

    if (t34 != 28636LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x149 = INT32_MIN;
	int16_t x150 = INT16_MIN;
	volatile int8_t x151 = 6;
	volatile int64_t x152 = INT64_MIN;
	volatile int64_t t35 = 1838804892891LL;

    t35 = ((x149&x150)|(x151/x152));

    if (t35 != -2147483648LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static int32_t x153 = INT32_MIN;
	uint32_t x154 = 528689040U;
	uint16_t x155 = UINT16_MAX;
	int16_t x156 = 677;

    t36 = ((x153&x154)|(x155/x156));

    if (t36 != 96U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x157 = UINT64_MAX;
	volatile int16_t x158 = 1;
	volatile int64_t x159 = -1LL;
	static uint64_t t37 = 150LLU;

    t37 = ((x157&x158)|(x159/x160));

    if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x161 = INT64_MAX;
	int16_t x162 = INT16_MIN;
	static uint64_t x163 = 3828644072846598LLU;
	volatile uint64_t t38 = 64168801217714LLU;

    t38 = ((x161&x162)|(x163/x164));

    if (t38 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x165 = -1;
	int64_t x166 = -1LL;
	uint64_t t39 = UINT64_MAX;

    t39 = ((x165&x166)|(x167/x168));

    if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x169 = UINT16_MAX;
	volatile int16_t x170 = 2106;
	static volatile int16_t x171 = -1;
	volatile int64_t x172 = INT64_MIN;

    t40 = ((x169&x170)|(x171/x172));

    if (t40 != 2106LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int64_t x174 = INT64_MAX;
	volatile int64_t t41 = 3536668660LL;

    t41 = ((x173&x174)|(x175/x176));

    if (t41 != 128LL) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint64_t x177 = UINT64_MAX;
	uint64_t x179 = UINT64_MAX;
	volatile uint64_t t42 = UINT64_MAX;

    t42 = ((x177&x178)|(x179/x180));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x182 = INT64_MAX;
	int32_t x183 = -1;
	static volatile int64_t x184 = INT64_MIN;
	volatile int64_t t43 = 101883LL;

    t43 = ((x181&x182)|(x183/x184));

    if (t43 != 255LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t x187 = INT64_MIN;
	volatile uint32_t x188 = UINT32_MAX;

    t44 = ((x185&x186)|(x187/x188));

    if (t44 != -2147483521LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x189 = -1;
	int16_t x190 = INT16_MIN;
	int8_t x191 = -1;
	volatile uint32_t t45 = 2U;

    t45 = ((x189&x190)|(x191/x192));

    if (t45 != 4294960647U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int16_t x193 = INT16_MIN;
	static uint32_t x194 = 257U;
	int32_t x196 = INT32_MIN;
	static volatile uint64_t t46 = 3140286LLU;

    t46 = ((x193&x194)|(x195/x196));

    if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x197 = -1;
	volatile uint64_t x198 = 971LLU;
	uint32_t x200 = UINT32_MAX;
	uint64_t t47 = 95LLU;

    t47 = ((x197&x198)|(x199/x200));

    if (t47 != 971LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x203 = INT32_MIN;
	static int64_t x204 = 125951174LL;
	int64_t t48 = 1708564138903478043LL;

    t48 = ((x201&x202)|(x203/x204));

    if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint16_t x205 = 17476U;
	uint8_t x206 = UINT8_MAX;
	static volatile int8_t x207 = -1;
	volatile int32_t t49 = 4771958;

    t49 = ((x205&x206)|(x207/x208));

    if (t49 != 68) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x209 = 5639560520539783417LLU;
	int32_t x210 = -2384468;
	static uint32_t x211 = 2243640U;
	static uint16_t x212 = UINT16_MAX;
	static volatile uint64_t t50 = 5LLU;

    t50 = ((x209&x210)|(x211/x212));

    if (t50 != 5639560520539504810LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x214 = 5070U;
	uint64_t x215 = 980697921182834LLU;
	static uint32_t x216 = 3378U;
	static volatile uint64_t t51 = 3542661LLU;

    t51 = ((x213&x214)|(x215/x216));

    if (t51 != 290319100409LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x217 = INT16_MIN;
	uint32_t x218 = 1432924U;
	volatile int64_t t52 = -3638715464608645422LL;

    t52 = ((x217&x218)|(x219/x220));

    if (t52 != -281474975301631LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x221 = -100151455LL;
	static int8_t x222 = INT8_MAX;
	volatile int64_t x224 = INT64_MIN;
	int64_t t53 = 0LL;

    t53 = ((x221&x222)|(x223/x224));

    if (t53 != 97LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x225 = 3LLU;
	static int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MAX;
	volatile uint64_t t54 = 891251338685945196LLU;

    t54 = ((x225&x226)|(x227/x228));

    if (t54 != 2LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x229 = INT8_MAX;
	uint64_t x231 = 3815301020LLU;
	int32_t x232 = INT32_MIN;

    t55 = ((x229&x230)|(x231/x232));

    if (t55 != 127LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x235 = INT8_MAX;
	static int16_t x236 = INT16_MIN;
	volatile int64_t t56 = INT64_MIN;

    t56 = ((x233&x234)|(x235/x236));

    if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x237 = 1701223;
	volatile uint32_t x239 = UINT32_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t57 = 173148833LLU;

    t57 = ((x237&x238)|(x239/x240));

    if (t57 != 561477LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x242 = -3;
	uint8_t x243 = UINT8_MAX;
	static int16_t x244 = INT16_MIN;

    t58 = ((x241&x242)|(x243/x244));

    if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x245 = 3174U;
	int8_t x246 = -3;
	volatile int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MAX;
	int64_t t59 = -3LL;

    t59 = ((x245&x246)|(x247/x248));

    if (t59 != 3172LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x249 = INT16_MIN;
	int32_t x250 = 7;
	int16_t x251 = -1;
	volatile int32_t x252 = INT32_MIN;

    t60 = ((x249&x250)|(x251/x252));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x255 = INT64_MIN;
	static int16_t x256 = INT16_MIN;
	volatile int64_t t61 = 740240562193987657LL;

    t61 = ((x253&x254)|(x255/x256));

    if (t61 != 1631864296254865498LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x258 = UINT16_MAX;
	static uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile uint64_t t62 = 199668481947010LLU;

    t62 = ((x257&x258)|(x259/x260));

    if (t62 != 18937LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x261 = 3068U;
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	int8_t x264 = INT8_MAX;

    t63 = ((x261&x262)|(x263/x264));

    if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MIN;
	int8_t x266 = 6;
	uint16_t x267 = 35U;
	static volatile int8_t x268 = 30;
	int32_t t64 = -5632;

    t64 = ((x265&x266)|(x267/x268));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x270 = INT16_MIN;
	static int32_t x271 = INT32_MIN;
	volatile int32_t x272 = INT32_MIN;
	static volatile int32_t t65 = -230;

    t65 = ((x269&x270)|(x271/x272));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x273 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	int64_t t66 = 220LL;

    t66 = ((x273&x274)|(x275/x276));

    if (t66 != 32768LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = -618LL;
	int64_t x278 = INT64_MAX;
	static volatile int64_t x279 = 10050LL;
	static int64_t x280 = 362780780932LL;
	volatile int64_t t67 = -1007784005LL;

    t67 = ((x277&x278)|(x279/x280));

    if (t67 != 9223372036854775190LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x282 = INT32_MIN;
	uint32_t x283 = 2078789U;
	uint16_t x284 = UINT16_MAX;
	uint32_t t68 = 6U;

    t68 = ((x281&x282)|(x283/x284));

    if (t68 != 31U) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = INT32_MAX;
	uint32_t x286 = 15U;
	int64_t x287 = 2141243291753LL;
	static int32_t x288 = -1;
	volatile int64_t t69 = -57782763LL;

    t69 = ((x285&x286)|(x287/x288));

    if (t69 != -2141243291745LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MAX;
	int64_t x292 = -1LL;
	volatile int64_t t70 = -1432021295108283LL;

    t70 = ((x289&x290)|(x291/x292));

    if (t70 != 32767LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x293 = INT64_MIN;
	uint16_t x294 = 77U;
	int32_t x295 = INT32_MIN;
	int8_t x296 = INT8_MAX;
	static int64_t t71 = 5821347LL;

    t71 = ((x293&x294)|(x295/x296));

    if (t71 != -16909320LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x297 = INT32_MAX;
	volatile int64_t x298 = INT64_MIN;
	int64_t x299 = -1LL;
	int32_t x300 = -20767;
	int64_t t72 = 4342561397114LL;

    t72 = ((x297&x298)|(x299/x300));

    if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x301 = INT32_MAX;
	static int8_t x303 = 0;
	int16_t x304 = 72;
	int32_t t73 = 6444438;

    t73 = ((x301&x302)|(x303/x304));

    if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int8_t x305 = INT8_MIN;
	int32_t x306 = INT32_MIN;
	volatile int64_t x307 = INT64_MIN;
	int16_t x308 = -8110;
	volatile int64_t t74 = 261086828675851236LL;

    t74 = ((x305&x306)|(x307/x308));

    if (t74 != -2013497616LL) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MIN;
	static volatile int8_t x311 = 56;
	volatile uint64_t x312 = UINT64_MAX;
	static uint64_t t75 = 3657404664625LLU;

    t75 = ((x309&x310)|(x311/x312));

    if (t75 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x313 = -1;
	static uint8_t x316 = UINT8_MAX;

    t76 = ((x313&x314)|(x315/x316));

    if (t76 != -8421377) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x319 = 116U;
	int16_t x320 = -14;
	volatile uint32_t t77 = 33265U;

    t77 = ((x317&x318)|(x319/x320));

    if (t77 != 4294967294U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x321 = -1;
	uint16_t x322 = 921U;
	int32_t x323 = 151200156;
	int16_t x324 = INT16_MAX;
	volatile int32_t t78 = -6;

    t78 = ((x321&x322)|(x323/x324));

    if (t78 != 5023) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x326 = 8222LLU;
	int16_t x327 = INT16_MIN;
	volatile uint8_t x328 = 15U;
	volatile uint64_t t79 = 4520LLU;

    t79 = ((x325&x326)|(x327/x328));

    if (t79 != 18446744073709549436LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x329 = 93577LLU;
	int16_t x330 = -1;
	int16_t x331 = -1;
	int16_t x332 = INT16_MAX;
	volatile uint64_t t80 = 64LLU;

    t80 = ((x329&x330)|(x331/x332));

    if (t80 != 93577LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x333 = INT16_MIN;
	int8_t x334 = 43;
	volatile int32_t x335 = 268;
	int64_t x336 = 12794275130083614LL;
	static int64_t t81 = -83642170552LL;

    t81 = ((x333&x334)|(x335/x336));

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = -1263;
	volatile int32_t x338 = INT32_MIN;
	static uint16_t x339 = UINT16_MAX;
	static uint32_t x340 = 148U;
	volatile uint32_t t82 = 1675619U;

    t82 = ((x337&x338)|(x339/x340));

    if (t82 != 2147484090U) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x341 = INT32_MAX;
	int8_t x342 = INT8_MAX;
	int64_t x343 = INT64_MAX;
	uint32_t x344 = UINT32_MAX;
	int64_t t83 = -11534170782LL;

    t83 = ((x341&x342)|(x343/x344));

    if (t83 != 2147483775LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x345 = -15136;
	int8_t x346 = INT8_MIN;
	int32_t x347 = -1;
	int32_t x348 = 4;
	volatile int32_t t84 = 0;

    t84 = ((x345&x346)|(x347/x348));

    if (t84 != -15232) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x349 = INT32_MIN;
	int32_t x350 = -936636;
	static volatile uint32_t x351 = UINT32_MAX;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t85 = -1521134169842LL;

    t85 = ((x349&x350)|(x351/x352));

    if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint8_t x353 = 15U;
	uint64_t x354 = UINT64_MAX;
	int64_t x355 = INT64_MAX;
	int16_t x356 = -1;

    t86 = ((x353&x354)|(x355/x356));

    if (t86 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x357 = 3;
	int64_t x359 = -1LL;
	uint64_t t87 = 28438363532LLU;

    t87 = ((x357&x358)|(x359/x360));

    if (t87 != 7LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x361 = -1;
	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;
	volatile int64_t x364 = 77438127904113646LL;
	int64_t t88 = -529118455653LL;

    t88 = ((x361&x362)|(x363/x364));

    if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x368 = 865LLU;
	static volatile uint64_t t89 = 42060184971228LLU;

    t89 = ((x365&x366)|(x367/x368));

    if (t89 != 15LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x369 = INT32_MIN;
	uint16_t x371 = 1193U;
	int16_t x372 = -1;

    t90 = ((x369&x370)|(x371/x372));

    if (t90 != -1193) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x373 = -1;
	static uint64_t x376 = UINT64_MAX;

    t91 = ((x373&x374)|(x375/x376));

    if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x377 = INT64_MIN;
	int8_t x378 = INT8_MAX;
	int64_t t92 = -49LL;

    t92 = ((x377&x378)|(x379/x380));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x381 = INT32_MIN;
	int8_t x383 = INT8_MAX;
	int64_t x384 = INT64_MIN;

    t93 = ((x381&x382)|(x383/x384));

    if (t93 != -2147483648LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x385 = 15U;
	int64_t x386 = -1LL;
	uint64_t x387 = UINT64_MAX;
	int32_t x388 = INT32_MIN;
	static volatile uint64_t t94 = 5659109651998LLU;

    t94 = ((x385&x386)|(x387/x388));

    if (t94 != 15LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x389 = INT64_MIN;
	int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 7244U;
	volatile int64_t t95 = 386953122116841899LL;

    t95 = ((x389&x390)|(x391/x392));

    if (t95 != -296449LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static volatile int32_t x393 = INT32_MAX;
	uint8_t x394 = 1U;
	static int64_t x396 = INT64_MIN;
	int64_t t96 = -9363831087518LL;

    t96 = ((x393&x394)|(x395/x396));

    if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static int16_t x401 = INT16_MAX;
	uint32_t x402 = UINT32_MAX;
	volatile int16_t x403 = 0;
	static int8_t x404 = INT8_MIN;

    t97 = ((x401&x402)|(x403/x404));

    if (t97 != 32767U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x409 = 8128811467302LL;
	int64_t x410 = 233685613096LL;
	volatile int64_t x412 = INT64_MIN;
	int64_t t98 = -241149129741005889LL;

    t98 = ((x409&x410)|(x411/x412));

    if (t98 != 155166900768LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x413 = 17;
	volatile uint32_t x414 = UINT32_MAX;
	uint16_t x415 = 6314U;
	volatile uint64_t x416 = 37LLU;

    t99 = ((x413&x414)|(x415/x416));

    if (t99 != 187LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x417 = -1;
	volatile int16_t x419 = INT16_MAX;
	uint32_t x420 = 277U;
	volatile uint32_t t100 = 2U;

    t100 = ((x417&x418)|(x419/x420));

    if (t100 != 118U) { NG(); } else { ; }
	
}

void f101(void) {
    	static uint32_t x421 = UINT32_MAX;
	int16_t x422 = 1861;
	static int32_t x423 = 1552;
	volatile int64_t t101 = -91LL;

    t101 = ((x421&x422)|(x423/x424));

    if (t101 != 1861LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x425 = INT16_MAX;
	int32_t x426 = 366;
	int16_t x427 = INT16_MIN;
	static int16_t x428 = INT16_MIN;
	volatile int32_t t102 = -10939627;

    t102 = ((x425&x426)|(x427/x428));

    if (t102 != 367) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x429 = UINT8_MAX;
	int32_t x432 = INT32_MAX;
	volatile int32_t t103 = 877255730;

    t103 = ((x429&x430)|(x431/x432));

    if (t103 != 127) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x433 = INT8_MIN;
	volatile uint32_t x434 = 5129U;
	uint16_t x435 = 12500U;
	volatile int16_t x436 = 4195;
	static volatile uint32_t t104 = 692U;

    t104 = ((x433&x434)|(x435/x436));

    if (t104 != 5122U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x437 = -4;
	static uint16_t x438 = 11504U;
	int32_t x439 = 370984378;
	int8_t x440 = -1;

    t105 = ((x437&x438)|(x439/x440));

    if (t105 != -370983178) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x441 = INT64_MAX;
	int64_t x442 = -2025LL;
	volatile int8_t x443 = INT8_MIN;
	volatile int64_t x444 = INT64_MAX;
	volatile int64_t t106 = 0LL;

    t106 = ((x441&x442)|(x443/x444));

    if (t106 != 9223372036854773783LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x445 = INT16_MIN;
	volatile int8_t x447 = -1;
	int64_t x448 = -1002270722881LL;
	static int64_t t107 = -7950054199178LL;

    t107 = ((x445&x446)|(x447/x448));

    if (t107 != -32768LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x449 = INT8_MIN;
	static int32_t x450 = INT32_MAX;
	int16_t x451 = 52;
	volatile uint32_t t108 = 29614U;

    t108 = ((x449&x450)|(x451/x452));

    if (t108 != 2147483520U) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x453 = INT8_MIN;
	int64_t x454 = -1LL;
	int16_t x455 = INT16_MIN;
	volatile int32_t x456 = -1;
	static int64_t t109 = -503977133556114LL;

    t109 = ((x453&x454)|(x455/x456));

    if (t109 != -128LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x458 = 14710314598408LL;
	int32_t x459 = INT32_MIN;
	int16_t x460 = 105;
	volatile int64_t t110 = 2506608848LL;

    t110 = ((x457&x458)|(x459/x460));

    if (t110 != -19403649LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x461 = INT16_MAX;
	uint16_t x462 = 1077U;
	volatile int8_t x463 = 18;
	int8_t x464 = -1;
	static int32_t t111 = -27649;

    t111 = ((x461&x462)|(x463/x464));

    if (t111 != -1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x465 = -1;
	volatile int32_t x466 = INT32_MAX;
	int64_t x467 = INT64_MAX;
	volatile int64_t x468 = -995921051992928095LL;
	int64_t t112 = -402051606740756408LL;

    t112 = ((x465&x466)|(x467/x468));

    if (t112 != -1LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x469 = 775LL;
	int32_t x470 = INT32_MIN;
	int64_t x471 = -1LL;
	int64_t x472 = -1LL;
	static int64_t t113 = -103520599114210212LL;

    t113 = ((x469&x470)|(x471/x472));

    if (t113 != 1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x473 = -6133556;
	int8_t x474 = INT8_MAX;
	volatile int32_t x475 = -1;
	int32_t t114 = 2713602;

    t114 = ((x473&x474)|(x475/x476));

    if (t114 != 77) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x477 = INT8_MIN;
	int64_t x478 = INT64_MIN;
	int32_t x479 = INT32_MIN;
	volatile uint64_t x480 = 6107841769LLU;
	static volatile uint64_t t115 = 232295633828999LLU;

    t115 = ((x477&x478)|(x479/x480));

    if (t115 != 9223372039874949671LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x481 = 639LL;
	int8_t x483 = -1;
	uint64_t x484 = UINT64_MAX;
	volatile uint64_t t116 = 1111698018LLU;

    t116 = ((x481&x482)|(x483/x484));

    if (t116 != 1LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x485 = INT16_MAX;
	volatile int16_t x486 = 3;
	volatile uint32_t x487 = 806959266U;
	int8_t x488 = -1;
	volatile uint32_t t117 = 46704U;

    t117 = ((x485&x486)|(x487/x488));

    if (t117 != 3U) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x489 = INT16_MIN;
	int32_t x490 = INT32_MAX;
	volatile int32_t x491 = INT32_MAX;

    t118 = ((x489&x490)|(x491/x492));

    if (t118 != 2147450880LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x493 = 4U;
	int8_t x494 = -18;
	int16_t x495 = INT16_MAX;
	uint32_t t119 = 116773U;

    t119 = ((x493&x494)|(x495/x496));

    if (t119 != 4U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x498 = INT32_MAX;
	uint16_t x499 = 235U;
	static volatile int32_t t120 = -522344;

    t120 = ((x497&x498)|(x499/x500));

    if (t120 != -235) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x501 = INT32_MIN;
	uint16_t x502 = 3U;
	static int16_t x504 = 60;
	static volatile int32_t t121 = 125216;

    t121 = ((x501&x502)|(x503/x504));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int8_t x506 = INT8_MAX;
	static uint64_t x507 = UINT64_MAX;
	int8_t x508 = -1;
	static uint64_t t122 = 23LLU;

    t122 = ((x505&x506)|(x507/x508));

    if (t122 != 127LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int16_t x509 = INT16_MIN;
	uint8_t x510 = 30U;
	int32_t x511 = -1;
	volatile uint16_t x512 = 7800U;

    t123 = ((x509&x510)|(x511/x512));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x513 = INT8_MIN;
	static uint64_t x515 = UINT64_MAX;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t124 = 126369410752352LLU;

    t124 = ((x513&x514)|(x515/x516));

    if (t124 != 281479392460801LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x517 = INT8_MAX;

    t125 = ((x517&x518)|(x519/x520));

    if (t125 != 60U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x521 = -993585387224LL;
	static uint8_t x522 = UINT8_MAX;
	int32_t x523 = 2471237;
	uint8_t x524 = 69U;

    t126 = ((x521&x522)|(x523/x524));

    if (t126 != 35823LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x525 = INT64_MIN;
	uint16_t x526 = UINT16_MAX;
	uint64_t x527 = 60471980241477LLU;
	static volatile uint64_t t127 = 3855225LLU;

    t127 = ((x525&x526)|(x527/x528));

    if (t127 != 0LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int64_t x529 = INT64_MIN;
	static uint32_t x530 = 244U;
	int32_t x532 = INT32_MIN;

    t128 = ((x529&x530)|(x531/x532));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x534 = INT8_MAX;
	int16_t x535 = -1;
	int32_t x536 = INT32_MIN;
	static volatile int32_t t129 = 6874050;

    t129 = ((x533&x534)|(x535/x536));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x537 = -1539388;
	volatile int32_t x538 = INT32_MIN;
	uint64_t x539 = 632160137044221835LLU;
	static volatile int8_t x540 = -3;
	volatile uint64_t t130 = 6827LLU;

    t130 = ((x537&x538)|(x539/x540));

    if (t130 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint16_t x541 = UINT16_MAX;
	volatile uint16_t x542 = 5U;
	int32_t t131 = -709803331;

    t131 = ((x541&x542)|(x543/x544));

    if (t131 != 5) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x545 = INT16_MIN;
	volatile int32_t x546 = 147255519;
	int32_t x547 = INT32_MIN;
	int8_t x548 = INT8_MIN;

    t132 = ((x545&x546)|(x547/x548));

    if (t132 != 164003840) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x549 = -1LL;
	static int16_t x550 = -2135;
	volatile int16_t x551 = -15;
	static volatile int32_t x552 = -1;
	int64_t t133 = -207792027972LL;

    t133 = ((x549&x550)|(x551/x552));

    if (t133 != -2129LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x553 = INT64_MAX;
	int16_t x554 = INT16_MIN;
	static int64_t x555 = INT64_MIN;
	int64_t x556 = 1034287439LL;
	volatile int64_t t134 = -14346310LL;

    t134 = ((x553&x554)|(x555/x556));

    if (t134 != -28203LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x557 = INT16_MIN;
	int64_t x558 = -1LL;
	int64_t x559 = INT64_MIN;
	int32_t x560 = INT32_MAX;
	volatile int64_t t135 = -563608571LL;

    t135 = ((x557&x558)|(x559/x560));

    if (t135 != -2LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x561 = UINT64_MAX;
	int16_t x562 = INT16_MAX;
	volatile uint64_t x563 = UINT64_MAX;
	int32_t x564 = -131501046;
	uint64_t t136 = 102169LLU;

    t136 = ((x561&x562)|(x563/x564));

    if (t136 != 32767LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint32_t x565 = 28U;
	int16_t x567 = -1;
	static int32_t x568 = -1;
	volatile uint32_t t137 = 57U;

    t137 = ((x565&x566)|(x567/x568));

    if (t137 != 29U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x570 = 6705U;
	static uint32_t x571 = 1690092U;
	static int32_t x572 = -115621875;
	volatile uint32_t t138 = 2U;

    t138 = ((x569&x570)|(x571/x572));

    if (t138 != 1U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x573 = -1;
	static int32_t x574 = 12197606;
	uint32_t x575 = UINT32_MAX;
	volatile uint16_t x576 = 55U;
	static volatile uint32_t t139 = 113U;

    t139 = ((x573&x574)|(x575/x576));

    if (t139 != 79666926U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x577 = INT16_MAX;
	int16_t x580 = -1;
	volatile int32_t t140 = 937373924;

    t140 = ((x577&x578)|(x579/x580));

    if (t140 != -32897) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x581 = 66122572157LLU;
	volatile int32_t x582 = -3528040;
	static volatile int16_t x583 = INT16_MAX;
	volatile uint64_t t141 = 124300094203302LLU;

    t141 = ((x581&x582)|(x583/x584));

    if (t141 != 66119147544LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x585 = -1;
	uint32_t x586 = 214U;
	uint32_t x587 = UINT32_MAX;
	int16_t x588 = INT16_MAX;
	uint32_t t142 = 15U;

    t142 = ((x585&x586)|(x587/x588));

    if (t142 != 131286U) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x589 = 292U;
	int16_t x591 = INT16_MIN;

    t143 = ((x589&x590)|(x591/x592));

    if (t143 != 293LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x597 = INT32_MIN;
	int16_t x598 = INT16_MIN;
	static uint8_t x599 = UINT8_MAX;
	volatile uint32_t x600 = 18U;
	uint32_t t144 = 1885373236U;

    t144 = ((x597&x598)|(x599/x600));

    if (t144 != 2147483662U) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x601 = -1;
	uint64_t x602 = 22133742LLU;
	int16_t x603 = -451;
	volatile int8_t x604 = INT8_MIN;
	static volatile uint64_t t145 = 23577LLU;

    t145 = ((x601&x602)|(x603/x604));

    if (t145 != 22133743LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x605 = 3U;
	volatile uint64_t t146 = 325127571825LLU;

    t146 = ((x605&x606)|(x607/x608));

    if (t146 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x609 = 220946006U;
	uint16_t x610 = 0U;
	uint64_t x611 = 1LLU;
	int64_t x612 = 2193675454328LL;
	uint64_t t147 = 55396891439LLU;

    t147 = ((x609&x610)|(x611/x612));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x613 = -1LL;
	uint16_t x614 = 7U;
	volatile int64_t x615 = 2795765892224LL;
	int64_t t148 = -1703488029LL;

    t148 = ((x613&x614)|(x615/x616));

    if (t148 != 655LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint8_t x617 = 116U;
	volatile int64_t x618 = INT64_MIN;
	int64_t x619 = 1367406294826487LL;
	static int64_t x620 = -1LL;
	int64_t t149 = -3886702944LL;

    t149 = ((x617&x618)|(x619/x620));

    if (t149 != -1367406294826487LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x622 = INT16_MIN;
	static int16_t x623 = 1;
	static int32_t x624 = -216329;
	volatile int64_t t150 = INT64_MIN;

    t150 = ((x621&x622)|(x623/x624));

    if (t150 != INT64_MIN) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x625 = -3;
	uint16_t x626 = 3U;
	int16_t x627 = INT16_MIN;
	int64_t x628 = INT64_MIN;
	static int64_t t151 = -5735886LL;

    t151 = ((x625&x626)|(x627/x628));

    if (t151 != 1LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x629 = 1;
	static int64_t x630 = INT64_MIN;
	static int64_t x631 = INT64_MIN;
	uint8_t x632 = 87U;
	volatile int64_t t152 = 414LL;

    t152 = ((x629&x630)|(x631/x632));

    if (t152 != -106015770538560641LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x633 = -1;
	int16_t x634 = 13378;
	uint8_t x635 = 7U;
	volatile int8_t x636 = INT8_MAX;
	int32_t t153 = -599417;

    t153 = ((x633&x634)|(x635/x636));

    if (t153 != 13378) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x637 = 1U;
	volatile int16_t x638 = 1866;
	int32_t x639 = -1;
	int16_t x640 = 32;
	volatile int32_t t154 = 0;

    t154 = ((x637&x638)|(x639/x640));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x641 = INT32_MAX;
	int64_t t155 = 19990372LL;

    t155 = ((x641&x642)|(x643/x644));

    if (t155 != 2147483647LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x645 = -314745423;
	uint16_t x647 = 49U;
	static int64_t t156 = -4012428108018453825LL;

    t156 = ((x645&x646)|(x647/x648));

    if (t156 != 177LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x651 = UINT16_MAX;
	int8_t x652 = -1;
	int32_t t157 = -493883;

    t157 = ((x649&x650)|(x651/x652));

    if (t157 != -65279) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x653 = 226170374;
	uint16_t x654 = 31U;
	volatile int32_t x655 = 0;
	static int64_t x656 = -4439932577895723LL;
	int64_t t158 = 8313473121259335LL;

    t158 = ((x653&x654)|(x655/x656));

    if (t158 != 6LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x657 = 3143U;
	static uint64_t x658 = 33649979432460LLU;
	uint32_t x660 = 331U;
	volatile uint64_t t159 = 2383LLU;

    t159 = ((x657&x658)|(x659/x660));

    if (t159 != 3444LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x661 = -5;
	int64_t x662 = INT64_MIN;
	int8_t x663 = 1;
	volatile int8_t x664 = -1;
	int64_t t160 = -16096311714386355LL;

    t160 = ((x661&x662)|(x663/x664));

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x665 = UINT8_MAX;
	uint16_t x667 = UINT16_MAX;
	uint64_t x668 = 26896039470LLU;
	volatile uint64_t t161 = 4LLU;

    t161 = ((x665&x666)|(x667/x668));

    if (t161 != 222LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x669 = 190U;
	int8_t x670 = -1;
	int8_t x671 = INT8_MIN;
	int64_t x672 = -1LL;

    t162 = ((x669&x670)|(x671/x672));

    if (t162 != 190LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x673 = -5147;
	volatile int16_t x675 = INT16_MAX;
	static int16_t x676 = -1;
	int32_t t163 = 95;

    t163 = ((x673&x674)|(x675/x676));

    if (t163 != -32539) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x677 = -1;
	uint16_t x678 = UINT16_MAX;
	int32_t x680 = -11385430;

    t164 = ((x677&x678)|(x679/x680));

    if (t164 != 65535) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x681 = 4741U;
	volatile int8_t x682 = 1;
	static volatile uint16_t x683 = UINT16_MAX;
	volatile uint32_t t165 = 321095618U;

    t165 = ((x681&x682)|(x683/x684));

    if (t165 != 65535U) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x686 = UINT64_MAX;
	int16_t x687 = -1;
	volatile uint64_t t166 = 962031907638706LLU;

    t166 = ((x685&x686)|(x687/x688));

    if (t166 != 18433460636632229713LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x690 = UINT64_MAX;
	static volatile uint8_t x692 = 108U;
	volatile uint64_t t167 = 2756688246715787680LLU;

    t167 = ((x689&x690)|(x691/x692));

    if (t167 != 18361342480775711102LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x693 = INT8_MIN;
	static int8_t x694 = INT8_MAX;
	uint16_t x695 = UINT16_MAX;
	int8_t x696 = INT8_MIN;
	volatile int32_t t168 = -1;

    t168 = ((x693&x694)|(x695/x696));

    if (t168 != -511) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int16_t x697 = -8;
	volatile int8_t x698 = INT8_MIN;
	int32_t x700 = -1;
	volatile int32_t t169 = -2;

    t169 = ((x697&x698)|(x699/x700));

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x702 = INT8_MIN;
	static volatile int16_t x703 = INT16_MIN;
	volatile uint64_t t170 = 2773773969LLU;

    t170 = ((x701&x702)|(x703/x704));

    if (t170 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x705 = INT8_MAX;
	static int64_t x706 = -1LL;
	int32_t x707 = -612593;
	volatile int64_t x708 = INT64_MIN;
	int64_t t171 = -680625LL;

    t171 = ((x705&x706)|(x707/x708));

    if (t171 != 127LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x709 = 14;
	volatile int64_t x710 = -1LL;
	volatile int32_t x711 = INT32_MIN;
	int16_t x712 = INT16_MAX;
	int64_t t172 = -112202120404787LL;

    t172 = ((x709&x710)|(x711/x712));

    if (t172 != -65538LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int16_t x717 = -1;
	int8_t x719 = -1;
	int64_t x720 = INT64_MIN;

    t173 = ((x717&x718)|(x719/x720));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x721 = INT8_MIN;
	uint16_t x722 = 74U;
	uint64_t t174 = 32684766725275LLU;

    t174 = ((x721&x722)|(x723/x724));

    if (t174 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x725 = INT16_MIN;
	uint16_t x726 = 1622U;
	volatile uint16_t x727 = 4U;

    t175 = ((x725&x726)|(x727/x728));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x729 = 60;
	volatile uint16_t x730 = 9U;
	static int32_t x731 = -1;
	volatile uint64_t x732 = 1025285960LLU;

    t176 = ((x729&x730)|(x731/x732));

    if (t176 != 17991804044LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x733 = 26499952;
	volatile int32_t x735 = INT32_MIN;
	int8_t x736 = -2;
	int64_t t177 = 7221914283707LL;

    t177 = ((x733&x734)|(x735/x736));

    if (t177 != 1100241744LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x737 = 16U;
	static volatile uint64_t x738 = UINT64_MAX;
	int16_t x740 = -12834;
	uint64_t t178 = 911494675146LLU;

    t178 = ((x737&x738)|(x739/x740));

    if (t178 != 18LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x742 = 4U;
	uint32_t x743 = UINT32_MAX;
	static uint64_t t179 = 80534LLU;

    t179 = ((x741&x742)|(x743/x744));

    if (t179 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x746 = -1;
	int64_t x748 = INT64_MIN;

    t180 = ((x745&x746)|(x747/x748));

    if (t180 != 7LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x750 = -6;
	int16_t x751 = INT16_MIN;
	static int16_t x752 = INT16_MAX;
	int32_t t181 = -868854370;

    t181 = ((x749&x750)|(x751/x752));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x753 = -1;
	volatile int32_t x754 = INT32_MIN;
	static int8_t x755 = -1;
	int16_t x756 = INT16_MIN;
	volatile int32_t t182 = INT32_MIN;

    t182 = ((x753&x754)|(x755/x756));

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x758 = 24;
	int64_t x759 = INT64_MIN;
	uint32_t x760 = UINT32_MAX;
	static int64_t t183 = 3722497596816843181LL;

    t183 = ((x757&x758)|(x759/x760));

    if (t183 != -2147483648LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x761 = 0;
	int16_t x762 = INT16_MAX;
	static int32_t x764 = INT32_MAX;
	volatile int32_t t184 = -2273;

    t184 = ((x761&x762)|(x763/x764));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint8_t x765 = 0U;
	int8_t x766 = INT8_MAX;
	int32_t x767 = INT32_MAX;
	static uint8_t x768 = UINT8_MAX;

    t185 = ((x765&x766)|(x767/x768));

    if (t185 != 8421504) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x769 = INT16_MIN;
	uint32_t x770 = 21833417U;
	uint64_t x771 = 3LLU;
	int32_t x772 = INT32_MAX;
	volatile uint64_t t186 = 3LLU;

    t186 = ((x769&x770)|(x771/x772));

    if (t186 != 21823488LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint32_t x777 = 1336437U;
	int64_t x778 = INT64_MIN;
	volatile int32_t x779 = INT32_MAX;
	uint8_t x780 = 3U;
	int64_t t187 = 6LL;

    t187 = ((x777&x778)|(x779/x780));

    if (t187 != 715827882LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x782 = INT32_MIN;
	volatile int8_t x783 = -1;
	uint8_t x784 = UINT8_MAX;
	volatile int64_t t188 = -765979450898918764LL;

    t188 = ((x781&x782)|(x783/x784));

    if (t188 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x787 = UINT16_MAX;
	int8_t x788 = 1;
	volatile int32_t t189 = -16465383;

    t189 = ((x785&x786)|(x787/x788));

    if (t189 != 65535) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x789 = 26;
	static uint64_t x790 = 59300970LLU;
	volatile uint32_t x791 = UINT32_MAX;
	int8_t x792 = -39;
	volatile uint64_t t190 = 204784630LLU;

    t190 = ((x789&x790)|(x791/x792));

    if (t190 != 11LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static int64_t x793 = INT64_MIN;
	uint8_t x794 = UINT8_MAX;
	uint32_t x795 = 505U;
	int64_t t191 = -11108064570328267LL;

    t191 = ((x793&x794)|(x795/x796));

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int32_t x797 = INT32_MIN;
	static uint16_t x798 = UINT16_MAX;
	int64_t x800 = INT64_MAX;
	volatile int64_t t192 = 628358LL;

    t192 = ((x797&x798)|(x799/x800));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint16_t x802 = 3904U;
	uint32_t x804 = 2693U;
	volatile uint32_t t193 = 7417U;

    t193 = ((x801&x802)|(x803/x804));

    if (t193 != 1594851U) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x805 = -1LL;
	uint64_t x806 = 1899LLU;
	int16_t x808 = INT16_MAX;
	uint64_t t194 = 25615727974914LLU;

    t194 = ((x805&x806)|(x807/x808));

    if (t194 != 100203LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x809 = 222U;
	int8_t x810 = INT8_MAX;
	uint64_t x811 = UINT64_MAX;
	uint64_t x812 = UINT64_MAX;
	volatile uint64_t t195 = 888120LLU;

    t195 = ((x809&x810)|(x811/x812));

    if (t195 != 95LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x813 = UINT8_MAX;
	int64_t x814 = INT64_MIN;
	uint8_t x815 = UINT8_MAX;
	uint8_t x816 = UINT8_MAX;
	int64_t t196 = 49286497119478LL;

    t196 = ((x813&x814)|(x815/x816));

    if (t196 != 1LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x817 = -1;
	int32_t x819 = -99892;
	uint64_t t197 = 123551LLU;

    t197 = ((x817&x818)|(x819/x820));

    if (t197 != 2387LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x821 = INT64_MAX;
	uint16_t x822 = 12U;
	volatile int64_t x823 = -1667597343448356LL;
	int32_t x824 = 812152390;
	volatile int64_t t198 = -252123935222226LL;

    t198 = ((x821&x822)|(x823/x824));

    if (t198 != -2053297LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x825 = 7178;
	int8_t x826 = INT8_MIN;
	static volatile int16_t x827 = INT16_MIN;
	int32_t x828 = INT32_MIN;
	volatile int32_t t199 = -36218;

    t199 = ((x825&x826)|(x827/x828));

    if (t199 != 7168) { NG(); } else { ; }
	
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

