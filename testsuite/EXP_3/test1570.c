
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

static int8_t x4 = INT8_MIN;
uint8_t x8 = 26U;
int8_t x9 = -11;
static uint16_t x16 = 55U;
static uint64_t x17 = 59010075786891LLU;
uint8_t x21 = 0U;
int32_t x25 = 22391;
uint32_t x26 = UINT32_MAX;
int32_t x28 = -1;
volatile uint32_t t6 = 206U;
volatile int16_t x36 = 1;
static int64_t x37 = 117687025836974LL;
static int16_t x45 = INT16_MIN;
int64_t x50 = -1LL;
volatile uint64_t x54 = UINT64_MAX;
uint8_t x55 = 0U;
uint16_t x57 = UINT16_MAX;
static int16_t x65 = 42;
int16_t x66 = INT16_MIN;
int8_t x68 = INT8_MIN;
int32_t x75 = INT32_MIN;
int8_t x78 = -1;
int16_t x91 = INT16_MAX;
uint64_t x99 = 760127LLU;
static int8_t x105 = INT8_MAX;
static uint32_t x106 = 733459974U;
uint8_t x136 = UINT8_MAX;
int32_t x139 = INT32_MIN;
uint32_t x141 = 12U;
uint64_t x145 = 21074LLU;
int64_t x151 = INT64_MIN;
int8_t x153 = -3;
static int32_t t34 = 1892917;
int64_t x169 = INT64_MIN;
int64_t x170 = 193255003LL;
static uint16_t x177 = 5U;
volatile int32_t t38 = -41092;
int16_t x186 = INT16_MIN;
int16_t x187 = INT16_MIN;
volatile int32_t t40 = -146818403;
volatile int8_t x195 = -1;
static uint64_t x202 = 1800244052333663473LLU;
uint32_t x209 = 388295524U;
int32_t x210 = -1;
int32_t t45 = 13;
volatile int32_t x217 = -47527;
int8_t x225 = INT8_MIN;
static uint32_t t47 = 39811U;
int8_t x229 = -1;
static volatile int16_t x232 = -1;
int32_t x243 = 0;
int8_t x255 = 1;
int64_t x257 = -8164014360134831LL;
volatile int32_t t54 = 21;
volatile int8_t x272 = INT8_MIN;
int32_t t55 = 0;
static int16_t x276 = INT16_MIN;
int16_t x280 = -1;
int16_t x284 = INT16_MIN;
volatile uint8_t x288 = 47U;
int32_t x291 = INT32_MIN;
int64_t x298 = INT64_MIN;
int64_t x302 = -1LL;
int64_t x310 = -1LL;
int64_t x319 = INT64_MIN;
static int64_t x322 = 177109963684LL;
int8_t x328 = -2;
int32_t x329 = INT32_MAX;
static volatile uint64_t t69 = 1802297069805357LLU;
int32_t x347 = INT32_MIN;
int8_t x350 = INT8_MAX;
volatile int64_t t73 = 32145505630LL;
volatile int32_t t74 = 16692;
volatile int16_t x365 = INT16_MAX;
volatile int8_t x366 = INT8_MIN;
int8_t x368 = INT8_MAX;
uint32_t x377 = 0U;
int32_t x379 = INT32_MAX;
volatile int64_t t82 = -50528238116573676LL;
int64_t x413 = INT64_MIN;
static int32_t x419 = 2945127;
static volatile int32_t t86 = -4;
int8_t x426 = -1;
volatile int8_t x431 = INT8_MIN;
int8_t x435 = INT8_MIN;
volatile uint8_t x437 = UINT8_MAX;
uint64_t x440 = UINT64_MAX;
int16_t x441 = INT16_MIN;
int16_t x458 = -1;
int32_t t95 = 9;
volatile int64_t t96 = -93LL;
int32_t x476 = INT32_MIN;
uint16_t x482 = 17979U;
uint32_t t99 = 905010387U;
int16_t x485 = INT16_MIN;
static volatile int8_t x486 = INT8_MIN;
int16_t x491 = INT16_MIN;
uint32_t x492 = 4338U;
int8_t x496 = -25;
volatile int64_t x497 = INT64_MAX;
static volatile int64_t x499 = INT64_MIN;
int64_t x500 = INT64_MIN;
volatile uint32_t x509 = 417053397U;
static volatile uint8_t x511 = 51U;
uint32_t x513 = 15U;
volatile int16_t x514 = INT16_MIN;
int16_t x515 = -1;
uint8_t x526 = 65U;
uint64_t x533 = 3841349LLU;
volatile int32_t x534 = INT32_MIN;
static uint64_t t110 = 2811925456652337LLU;
uint64_t x537 = 15604602890752449LLU;
uint64_t x538 = UINT64_MAX;
int8_t x539 = 1;
volatile uint8_t x545 = 7U;
volatile uint16_t x555 = 1851U;
int64_t x562 = -1LL;
static int32_t x563 = INT32_MIN;
int64_t t117 = -9973257806103LL;
int8_t x567 = -14;
static int32_t x572 = -41425;
uint32_t x574 = UINT32_MAX;
uint8_t x576 = 8U;
int32_t t121 = 13672;
int16_t x584 = INT16_MAX;
int32_t x590 = 69;
uint8_t x591 = 31U;
uint64_t x597 = 21612LLU;
volatile uint64_t t125 = 13845897444LLU;
static uint64_t x603 = 327LLU;
volatile uint64_t x608 = UINT64_MAX;
volatile uint64_t t127 = 559382186LLU;
int16_t x611 = -116;
int64_t x625 = -1LL;
int16_t x628 = INT16_MIN;
uint64_t x630 = UINT64_MAX;
int64_t x632 = 794604855516239979LL;
static int16_t x636 = INT16_MIN;
volatile uint64_t t134 = 828643205LLU;
int8_t x648 = INT8_MAX;
static volatile int64_t x655 = -8581016LL;
volatile int16_t x657 = INT16_MIN;
int32_t t139 = -98810;
int32_t t140 = 1;
uint64_t x667 = UINT64_MAX;
int32_t x672 = 847;
uint32_t t145 = 14519U;
static uint8_t x686 = UINT8_MAX;
static volatile int32_t x687 = INT32_MIN;
volatile int32_t t146 = 72;
uint32_t t147 = 2569U;
static uint64_t x711 = UINT64_MAX;
volatile int64_t t151 = 158591LL;
volatile int32_t x716 = -1;
static int64_t x720 = -1LL;
static int32_t x721 = 0;
int32_t x731 = 1;
int32_t t156 = 1016755858;
int8_t x744 = INT8_MAX;
int64_t x750 = -1LL;
int16_t x751 = INT16_MIN;
volatile uint32_t t163 = 1918430305U;
volatile int16_t x761 = INT16_MIN;
int32_t x763 = INT32_MIN;
int64_t t165 = -18LL;
volatile uint16_t x770 = 113U;
static volatile int32_t x774 = INT32_MIN;
int16_t x777 = INT16_MIN;
int32_t t168 = 7245;
static int32_t x781 = -1;
static uint32_t x782 = 14835U;
static uint64_t x783 = 117LLU;
static uint8_t x784 = 3U;
int8_t x787 = -23;
static int8_t x789 = INT8_MIN;
uint8_t x792 = 15U;
uint16_t x795 = UINT16_MAX;
uint32_t x796 = 151156375U;
int32_t x804 = -16569871;
volatile int8_t x813 = 11;
int16_t x818 = INT16_MIN;
int64_t x839 = INT64_MIN;
volatile uint64_t t181 = 62831644LLU;
volatile uint8_t x843 = UINT8_MAX;
volatile uint64_t t183 = 762036LLU;
int64_t t185 = -1099687017716100449LL;
int16_t x858 = INT16_MIN;
int16_t x860 = INT16_MIN;
static int64_t x868 = INT64_MIN;
static int16_t x873 = INT16_MIN;
static int64_t x877 = 100907970131622094LL;
int32_t x880 = 46662;
int32_t t195 = 99662981;
int8_t x925 = -1;
int64_t x926 = -14053546120849338LL;
volatile int8_t x929 = 22;
int32_t x930 = INT32_MIN;
static uint32_t x931 = UINT32_MAX;
volatile int16_t x932 = 2;
volatile int8_t x938 = INT8_MAX;


void f0(void) {
    	volatile int16_t x1 = -164;
	int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	int32_t t0 = -275837303;

    t0 = ((x1+x2)-(x3>x4));

    if (t0 != -292) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MIN;
	int64_t x7 = -1LL;
	static int64_t t1 = 310LL;

    t1 = ((x5+x6)-(x7>x8));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x10 = 0U;
	uint16_t x11 = UINT16_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -962534533;

    t2 = ((x9+x10)-(x11>x12));

    if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 1;
	int8_t x14 = INT8_MAX;
	int8_t x15 = -1;
	int32_t t3 = 64780;

    t3 = ((x13+x14)-(x15>x16));

    if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x18 = 7U;
	int64_t x19 = INT64_MIN;
	static int8_t x20 = INT8_MIN;
	static uint64_t t4 = 252282LLU;

    t4 = ((x17+x18)-(x19>x20));

    if (t4 != 59010075786898LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x22 = 41;
	int16_t x23 = -493;
	volatile int64_t x24 = 1639421186948663LL;
	int32_t t5 = -61396;

    t5 = ((x21+x22)-(x23>x24));

    if (t5 != 41) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x27 = INT32_MIN;

    t6 = ((x25+x26)-(x27>x28));

    if (t6 != 22390U) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -50;
	int32_t x30 = 6;
	int8_t x31 = 0;
	static volatile int32_t x32 = -1;
	int32_t t7 = 68835040;

    t7 = ((x29+x30)-(x31>x32));

    if (t7 != -45) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = 33162289307721LL;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = -333143643880631LL;
	int64_t t8 = -1789628393676882779LL;

    t8 = ((x33+x34)-(x35>x36));

    if (t8 != 33166584275016LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x38 = INT32_MIN;
	int16_t x39 = 733;
	volatile uint16_t x40 = 6498U;
	static volatile int64_t t9 = -282624348594924252LL;

    t9 = ((x37+x38)-(x39>x40));

    if (t9 != 117684878353326LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static int16_t x41 = INT16_MAX;
	volatile int8_t x42 = 0;
	static int32_t x43 = INT32_MIN;
	static int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = 9991594;

    t10 = ((x41+x42)-(x43>x44));

    if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 0U;
	uint32_t x48 = UINT32_MAX;
	int32_t t11 = 55;

    t11 = ((x45+x46)-(x47>x48));

    if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MIN;
	static int8_t x51 = -1;
	volatile int16_t x52 = -1;
	volatile int64_t t12 = 161035199571LL;

    t12 = ((x49+x50)-(x51>x52));

    if (t12 != -129LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = 125U;
	int8_t x56 = INT8_MAX;
	static uint64_t t13 = 4884359743359658317LLU;

    t13 = ((x53+x54)-(x55>x56));

    if (t13 != 124LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x58 = 76U;
	volatile int16_t x59 = 14;
	static int32_t x60 = INT32_MAX;
	int32_t t14 = -17;

    t14 = ((x57+x58)-(x59>x60));

    if (t14 != 65611) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint16_t x67 = UINT16_MAX;
	volatile int32_t t15 = 25135;

    t15 = ((x65+x66)-(x67>x68));

    if (t15 != -32727) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x69 = UINT32_MAX;
	static int64_t x70 = INT64_MIN;
	int32_t x71 = INT32_MAX;
	volatile int8_t x72 = INT8_MIN;
	static volatile int64_t t16 = 130129544640564365LL;

    t16 = ((x69+x70)-(x71>x72));

    if (t16 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = 1096982868LL;
	int64_t x74 = INT64_MIN;
	int16_t x76 = INT16_MAX;
	int64_t t17 = -80229569109921LL;

    t17 = ((x73+x74)-(x75>x76));

    if (t17 != -9223372035757792940LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x77 = UINT8_MAX;
	uint32_t x79 = 18857U;
	uint16_t x80 = 948U;
	volatile int32_t t18 = 208977;

    t18 = ((x77+x78)-(x79>x80));

    if (t18 != 253) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 3561U;
	int16_t x90 = INT16_MIN;
	volatile int32_t x92 = 7035264;
	volatile uint32_t t19 = 1058683U;

    t19 = ((x89+x90)-(x91>x92));

    if (t19 != 4294938089U) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x93 = 356U;
	int16_t x94 = -1;
	int16_t x95 = 0;
	int8_t x96 = INT8_MIN;
	volatile int32_t t20 = 206967;

    t20 = ((x93+x94)-(x95>x96));

    if (t20 != 354) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x97 = 14U;
	int16_t x98 = -7;
	static volatile int16_t x100 = -1;
	int32_t t21 = 502;

    t21 = ((x97+x98)-(x99>x100));

    if (t21 != 7) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x107 = 140228516648648189LL;
	uint32_t x108 = UINT32_MAX;
	static uint32_t t22 = 2U;

    t22 = ((x105+x106)-(x107>x108));

    if (t22 != 733460100U) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x109 = 2;
	static int32_t x110 = 331;
	int8_t x111 = INT8_MAX;
	int32_t x112 = INT32_MIN;
	int32_t t23 = 842098;

    t23 = ((x109+x110)-(x111>x112));

    if (t23 != 332) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint64_t x113 = 1061730934LLU;
	static int32_t x114 = INT32_MAX;
	int16_t x115 = INT16_MAX;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t24 = 250805603389274034LLU;

    t24 = ((x113+x114)-(x115>x116));

    if (t24 != 3209214580LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x125 = -1;
	uint8_t x126 = 38U;
	uint64_t x127 = UINT64_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t25 = 187655;

    t25 = ((x125+x126)-(x127>x128));

    if (t25 != 36) { NG(); } else { ; }
	
}

void f26(void) {
    	uint8_t x133 = UINT8_MAX;
	int32_t x134 = -38;
	int16_t x135 = -1;
	int32_t t26 = 108;

    t26 = ((x133+x134)-(x135>x136));

    if (t26 != 217) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x137 = -1;
	volatile int8_t x138 = -1;
	int64_t x140 = INT64_MIN;
	int32_t t27 = 2066;

    t27 = ((x137+x138)-(x139>x140));

    if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x142 = 1;
	int16_t x143 = INT16_MIN;
	static volatile int8_t x144 = 0;
	volatile uint32_t t28 = 81U;

    t28 = ((x141+x142)-(x143>x144));

    if (t28 != 13U) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x146 = -54;
	uint8_t x147 = 36U;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t29 = 44684320LLU;

    t29 = ((x145+x146)-(x147>x148));

    if (t29 != 21019LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x149 = INT16_MIN;
	int32_t x150 = -1;
	int64_t x152 = 1258893378301466529LL;
	int32_t t30 = 121;

    t30 = ((x149+x150)-(x151>x152));

    if (t30 != -32769) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x154 = INT16_MIN;
	uint32_t x155 = 1916315U;
	static int16_t x156 = INT16_MIN;
	static int32_t t31 = -22;

    t31 = ((x153+x154)-(x155>x156));

    if (t31 != -32771) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint32_t x157 = 5164U;
	uint32_t x158 = 100163U;
	uint8_t x159 = 82U;
	uint64_t x160 = UINT64_MAX;
	uint32_t t32 = 469847U;

    t32 = ((x157+x158)-(x159>x160));

    if (t32 != 105327U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x161 = 239656069U;
	int8_t x162 = INT8_MAX;
	int32_t x163 = 489468524;
	int32_t x164 = 408;
	volatile uint32_t t33 = 2639U;

    t33 = ((x161+x162)-(x163>x164));

    if (t33 != 239656195U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x165 = -1;
	int16_t x166 = INT16_MIN;
	uint64_t x167 = UINT64_MAX;
	volatile int64_t x168 = INT64_MIN;

    t34 = ((x165+x166)-(x167>x168));

    if (t34 != -32770) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x171 = -13;
	int16_t x172 = INT16_MIN;
	int64_t t35 = -2886987LL;

    t35 = ((x169+x170)-(x171>x172));

    if (t35 != -9223372036661520806LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x173 = 978U;
	uint16_t x174 = 30U;
	int8_t x175 = 0;
	int16_t x176 = INT16_MIN;
	uint32_t t36 = 297U;

    t36 = ((x173+x174)-(x175>x176));

    if (t36 != 1007U) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x178 = -1LL;
	int8_t x179 = INT8_MIN;
	static uint64_t x180 = 1644653378810132LLU;
	int64_t t37 = -4906842LL;

    t37 = ((x177+x178)-(x179>x180));

    if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MIN;
	volatile int8_t x183 = INT8_MAX;
	volatile uint8_t x184 = 7U;

    t38 = ((x181+x182)-(x183>x184));

    if (t38 != -2147483522) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x185 = 23U;
	static uint32_t x188 = UINT32_MAX;
	volatile int32_t t39 = -3;

    t39 = ((x185+x186)-(x187>x188));

    if (t39 != -32745) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile int8_t x189 = -1;
	int16_t x190 = INT16_MIN;
	volatile int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;

    t40 = ((x189+x190)-(x191>x192));

    if (t40 != -32769) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x193 = -1718871;
	uint8_t x194 = 11U;
	int64_t x196 = -145239006103620873LL;
	int32_t t41 = -138;

    t41 = ((x193+x194)-(x195>x196));

    if (t41 != -1718861) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = INT32_MIN;
	static uint32_t x198 = 107U;
	static uint32_t x199 = UINT32_MAX;
	int32_t x200 = 8547540;
	static volatile uint32_t t42 = 1U;

    t42 = ((x197+x198)-(x199>x200));

    if (t42 != 2147483754U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = INT16_MAX;
	int8_t x203 = -3;
	uint64_t x204 = 6833181558116413539LLU;
	uint64_t t43 = 182829518LLU;

    t43 = ((x201+x202)-(x203>x204));

    if (t43 != 1800244052333696239LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x211 = INT16_MIN;
	volatile int32_t x212 = 6821235;
	volatile uint32_t t44 = 236U;

    t44 = ((x209+x210)-(x211>x212));

    if (t44 != 388295523U) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x213 = INT16_MIN;
	static volatile int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;

    t45 = ((x213+x214)-(x215>x216));

    if (t45 != -32896) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MAX;
	static int64_t x220 = INT64_MIN;
	volatile uint32_t t46 = 0U;

    t46 = ((x217+x218)-(x219>x220));

    if (t46 != 4294919767U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x226 = 69445477U;
	int64_t x227 = -3503552873763512LL;
	int8_t x228 = INT8_MIN;

    t47 = ((x225+x226)-(x227>x228));

    if (t47 != 69445349U) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x230 = 0;
	volatile uint16_t x231 = UINT16_MAX;
	static volatile int32_t t48 = 659;

    t48 = ((x229+x230)-(x231>x232));

    if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x233 = 21039;
	uint8_t x234 = 0U;
	uint32_t x235 = 4U;
	int16_t x236 = -1;
	int32_t t49 = 11654;

    t49 = ((x233+x234)-(x235>x236));

    if (t49 != 21039) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x241 = 25U;
	int16_t x242 = INT16_MIN;
	int32_t x244 = 5198;
	int32_t t50 = -3;

    t50 = ((x241+x242)-(x243>x244));

    if (t50 != -32743) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint64_t x245 = UINT64_MAX;
	uint32_t x246 = 59U;
	static int8_t x247 = INT8_MAX;
	uint8_t x248 = UINT8_MAX;
	uint64_t t51 = 5597904LLU;

    t51 = ((x245+x246)-(x247>x248));

    if (t51 != 58LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x253 = INT16_MIN;
	static int64_t x254 = INT64_MAX;
	int16_t x256 = INT16_MIN;
	volatile int64_t t52 = 88726559125127LL;

    t52 = ((x253+x254)-(x255>x256));

    if (t52 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x258 = 464040LLU;
	int32_t x259 = -1;
	int16_t x260 = INT16_MAX;
	volatile uint64_t t53 = 474715841585929458LLU;

    t53 = ((x257+x258)-(x259>x260));

    if (t53 != 18438580059349880825LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x265 = -50;
	uint8_t x266 = 61U;
	int32_t x267 = -1;
	int16_t x268 = -2270;

    t54 = ((x265+x266)-(x267>x268));

    if (t54 != 10) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x269 = 2906;
	int16_t x270 = INT16_MIN;
	volatile int32_t x271 = INT32_MAX;

    t55 = ((x269+x270)-(x271>x272));

    if (t55 != -29863) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x273 = -1;
	static uint8_t x274 = UINT8_MAX;
	int16_t x275 = INT16_MIN;
	volatile int32_t t56 = 317;

    t56 = ((x273+x274)-(x275>x276));

    if (t56 != 254) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x277 = -1880504;
	static int64_t x278 = -1LL;
	int16_t x279 = INT16_MIN;
	volatile int64_t t57 = -5LL;

    t57 = ((x277+x278)-(x279>x280));

    if (t57 != -1880505LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x281 = INT16_MIN;
	int8_t x282 = 1;
	int8_t x283 = -8;
	static volatile int32_t t58 = 3;

    t58 = ((x281+x282)-(x283>x284));

    if (t58 != -32768) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x285 = UINT64_MAX;
	int64_t x286 = -1LL;
	int8_t x287 = -2;
	static volatile uint64_t t59 = 6687208LLU;

    t59 = ((x285+x286)-(x287>x288));

    if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x289 = INT16_MAX;
	static uint32_t x290 = 921884411U;
	int64_t x292 = 37LL;
	volatile uint32_t t60 = 8894254U;

    t60 = ((x289+x290)-(x291>x292));

    if (t60 != 921917178U) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x297 = 488744329;
	int8_t x299 = 1;
	static int32_t x300 = -268;
	volatile int64_t t61 = 2982973796LL;

    t61 = ((x297+x298)-(x299>x300));

    if (t61 != -9223372036366031480LL) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x301 = 172U;
	int16_t x303 = -89;
	int16_t x304 = -1217;
	static int64_t t62 = 1911725LL;

    t62 = ((x301+x302)-(x303>x304));

    if (t62 != 170LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x309 = UINT16_MAX;
	static int64_t x311 = INT64_MIN;
	int16_t x312 = INT16_MIN;
	volatile int64_t t63 = 9007558166645260LL;

    t63 = ((x309+x310)-(x311>x312));

    if (t63 != 65534LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = -1;
	static int16_t x314 = INT16_MIN;
	int64_t x315 = 35738201907951LL;
	volatile int8_t x316 = 3;
	volatile int32_t t64 = 41182;

    t64 = ((x313+x314)-(x315>x316));

    if (t64 != -32770) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x317 = INT32_MIN;
	volatile uint16_t x318 = UINT16_MAX;
	volatile uint64_t x320 = UINT64_MAX;
	static int32_t t65 = 65036;

    t65 = ((x317+x318)-(x319>x320));

    if (t65 != -2147418113) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x321 = 124451;
	int32_t x323 = INT32_MIN;
	int64_t x324 = 54743145532LL;
	static int64_t t66 = 34070LL;

    t66 = ((x321+x322)-(x323>x324));

    if (t66 != 177110088135LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x325 = UINT8_MAX;
	static uint8_t x326 = UINT8_MAX;
	uint16_t x327 = UINT16_MAX;
	int32_t t67 = 0;

    t67 = ((x325+x326)-(x327>x328));

    if (t67 != 509) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x330 = INT8_MIN;
	int16_t x331 = -159;
	volatile int32_t x332 = 0;
	volatile int32_t t68 = 59606522;

    t68 = ((x329+x330)-(x331>x332));

    if (t68 != 2147483519) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x333 = 476107516942786LLU;
	uint16_t x334 = 16120U;
	uint64_t x335 = 18965735302182317LLU;
	int16_t x336 = -65;

    t69 = ((x333+x334)-(x335>x336));

    if (t69 != 476107516958906LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x337 = 76U;
	static volatile int8_t x338 = -3;
	uint32_t x339 = 122407837U;
	int8_t x340 = INT8_MIN;
	volatile int32_t t70 = -347267787;

    t70 = ((x337+x338)-(x339>x340));

    if (t70 != 73) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x345 = INT32_MAX;
	volatile uint32_t x346 = UINT32_MAX;
	int8_t x348 = INT8_MIN;
	uint32_t t71 = 47246269U;

    t71 = ((x345+x346)-(x347>x348));

    if (t71 != 2147483646U) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x349 = 215280782U;
	static int16_t x351 = 312;
	uint8_t x352 = 49U;
	static uint32_t t72 = 749983210U;

    t72 = ((x349+x350)-(x351>x352));

    if (t72 != 215280908U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x353 = 12;
	static volatile int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	static volatile uint64_t x356 = 16965622168LLU;

    t73 = ((x353+x354)-(x355>x356));

    if (t73 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x357 = -1563;
	int16_t x358 = 25;
	int16_t x359 = 6827;
	int8_t x360 = INT8_MIN;

    t74 = ((x357+x358)-(x359>x360));

    if (t74 != -1539) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x361 = INT8_MIN;
	static int8_t x362 = 5;
	uint8_t x363 = UINT8_MAX;
	volatile int64_t x364 = 2675LL;
	static int32_t t75 = -6284;

    t75 = ((x361+x362)-(x363>x364));

    if (t75 != -123) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint32_t x367 = 16233928U;
	int32_t t76 = 981;

    t76 = ((x365+x366)-(x367>x368));

    if (t76 != 32638) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x369 = -8586;
	uint32_t x370 = UINT32_MAX;
	int8_t x371 = -1;
	int16_t x372 = INT16_MIN;
	uint32_t t77 = 5178U;

    t77 = ((x369+x370)-(x371>x372));

    if (t77 != 4294958708U) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x373 = -7708295;
	volatile int32_t x374 = -40537145;
	volatile int32_t x375 = 2479;
	uint8_t x376 = 9U;
	int32_t t78 = -686;

    t78 = ((x373+x374)-(x375>x376));

    if (t78 != -48245441) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x378 = 24768248425113LL;
	volatile uint32_t x380 = 0U;
	int64_t t79 = -3LL;

    t79 = ((x377+x378)-(x379>x380));

    if (t79 != 24768248425112LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x381 = 27002U;
	uint32_t x382 = 13253506U;
	static int16_t x383 = INT16_MIN;
	volatile int8_t x384 = INT8_MIN;
	volatile uint32_t t80 = 64U;

    t80 = ((x381+x382)-(x383>x384));

    if (t80 != 13280508U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x385 = UINT64_MAX;
	static volatile int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MIN;
	static volatile int16_t x388 = -1;
	uint64_t t81 = 49075LLU;

    t81 = ((x385+x386)-(x387>x388));

    if (t81 != 2147483646LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x389 = UINT8_MAX;
	static int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MAX;
	int8_t x392 = INT8_MIN;

    t82 = ((x389+x390)-(x391>x392));

    if (t82 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x393 = -1LL;
	static volatile int64_t x394 = -103564LL;
	static uint32_t x395 = 1373738216U;
	uint32_t x396 = UINT32_MAX;
	volatile int64_t t83 = 119378LL;

    t83 = ((x393+x394)-(x395>x396));

    if (t83 != -103565LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x401 = 0U;
	int8_t x402 = 8;
	int16_t x403 = 1540;
	int64_t x404 = -1LL;
	volatile int32_t t84 = 185;

    t84 = ((x401+x402)-(x403>x404));

    if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x414 = 0;
	volatile int16_t x415 = INT16_MIN;
	int16_t x416 = INT16_MAX;
	volatile int64_t t85 = INT64_MIN;

    t85 = ((x413+x414)-(x415>x416));

    if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
    	uint8_t x417 = UINT8_MAX;
	uint16_t x418 = UINT16_MAX;
	uint16_t x420 = 626U;

    t86 = ((x417+x418)-(x419>x420));

    if (t86 != 65789) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint16_t x425 = 98U;
	volatile uint32_t x427 = 0U;
	int32_t x428 = -104369;
	volatile int32_t t87 = -1;

    t87 = ((x425+x426)-(x427>x428));

    if (t87 != 97) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x429 = -1LL;
	static uint8_t x430 = UINT8_MAX;
	int16_t x432 = INT16_MIN;
	int64_t t88 = 11LL;

    t88 = ((x429+x430)-(x431>x432));

    if (t88 != 253LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x433 = INT64_MIN;
	uint8_t x434 = UINT8_MAX;
	uint64_t x436 = 555318207593994LLU;
	int64_t t89 = 4239235167529003874LL;

    t89 = ((x433+x434)-(x435>x436));

    if (t89 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x438 = 923355LLU;
	uint8_t x439 = 30U;
	static volatile uint64_t t90 = 20420LLU;

    t90 = ((x437+x438)-(x439>x440));

    if (t90 != 923610LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x442 = 15U;
	static int8_t x443 = INT8_MIN;
	int16_t x444 = 1928;
	volatile int32_t t91 = -1293904;

    t91 = ((x441+x442)-(x443>x444));

    if (t91 != -32753) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint8_t x445 = UINT8_MAX;
	int64_t x446 = -1LL;
	int16_t x447 = 15015;
	uint16_t x448 = UINT16_MAX;
	int64_t t92 = 573LL;

    t92 = ((x445+x446)-(x447>x448));

    if (t92 != 254LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x449 = 6U;
	uint16_t x450 = 11U;
	static int32_t x451 = 7779961;
	int8_t x452 = -1;
	volatile uint32_t t93 = 516625U;

    t93 = ((x449+x450)-(x451>x452));

    if (t93 != 16U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x453 = -12990;
	static int8_t x454 = INT8_MAX;
	volatile int16_t x455 = -1;
	static uint64_t x456 = 222632459520LLU;
	volatile int32_t t94 = 6885447;

    t94 = ((x453+x454)-(x455>x456));

    if (t94 != -12864) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x457 = INT8_MIN;
	uint32_t x459 = UINT32_MAX;
	uint16_t x460 = 51U;

    t95 = ((x457+x458)-(x459>x460));

    if (t95 != -130) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x461 = -1LL;
	volatile int8_t x462 = INT8_MIN;
	int16_t x463 = -1;
	int32_t x464 = INT32_MIN;

    t96 = ((x461+x462)-(x463>x464));

    if (t96 != -130LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint8_t x469 = 11U;
	int32_t x470 = -1;
	uint32_t x471 = UINT32_MAX;
	static int64_t x472 = 0LL;
	volatile int32_t t97 = 24;

    t97 = ((x469+x470)-(x471>x472));

    if (t97 != 9) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x473 = -10;
	volatile int16_t x474 = INT16_MAX;
	int64_t x475 = INT64_MIN;
	int32_t t98 = 62447363;

    t98 = ((x473+x474)-(x475>x476));

    if (t98 != 32757) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x481 = 26611U;
	int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MIN;

    t99 = ((x481+x482)-(x483>x484));

    if (t99 != 44590U) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x487 = -1LL;
	volatile uint16_t x488 = UINT16_MAX;
	volatile int32_t t100 = -15692967;

    t100 = ((x485+x486)-(x487>x488));

    if (t100 != -32896) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x489 = INT16_MIN;
	int16_t x490 = INT16_MIN;
	int32_t t101 = -35;

    t101 = ((x489+x490)-(x491>x492));

    if (t101 != -65537) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = -42;
	static volatile uint64_t x495 = 321951497938700LLU;
	volatile int32_t t102 = -30716;

    t102 = ((x493+x494)-(x495>x496));

    if (t102 != -170) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x498 = -1;
	volatile int64_t t103 = -31LL;

    t103 = ((x497+x498)-(x499>x500));

    if (t103 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x505 = 2U;
	uint32_t x506 = 1U;
	int64_t x507 = INT64_MIN;
	uint64_t x508 = 7299779LLU;
	static uint32_t t104 = 3964U;

    t104 = ((x505+x506)-(x507>x508));

    if (t104 != 2U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x510 = 4U;
	int32_t x512 = INT32_MIN;
	volatile uint32_t t105 = 82431U;

    t105 = ((x509+x510)-(x511>x512));

    if (t105 != 417053400U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x516 = UINT32_MAX;
	static volatile uint32_t t106 = 29507U;

    t106 = ((x513+x514)-(x515>x516));

    if (t106 != 4294934543U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x517 = 2324516;
	static volatile uint32_t x518 = 2007U;
	int32_t x519 = -1;
	int16_t x520 = 0;
	static uint32_t t107 = 84U;

    t107 = ((x517+x518)-(x519>x520));

    if (t107 != 2326523U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x525 = 0U;
	int32_t x527 = -1;
	int32_t x528 = -6159;
	volatile int32_t t108 = -164297;

    t108 = ((x525+x526)-(x527>x528));

    if (t108 != 64) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x529 = 2;
	uint16_t x530 = 0U;
	int8_t x531 = -9;
	int8_t x532 = 4;
	volatile int32_t t109 = 30574;

    t109 = ((x529+x530)-(x531>x532));

    if (t109 != 2) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x535 = INT64_MIN;
	uint64_t x536 = UINT64_MAX;

    t110 = ((x533+x534)-(x535>x536));

    if (t110 != 18446744071565909317LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x540 = UINT16_MAX;
	uint64_t t111 = 10352002097339LLU;

    t111 = ((x537+x538)-(x539>x540));

    if (t111 != 15604602890752448LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x541 = INT8_MAX;
	int8_t x542 = INT8_MAX;
	int64_t x543 = 869335882119633LL;
	int32_t x544 = INT32_MAX;
	volatile int32_t t112 = 323146;

    t112 = ((x541+x542)-(x543>x544));

    if (t112 != 253) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int16_t x546 = 32;
	int64_t x547 = 2612411280LL;
	volatile uint32_t x548 = 125401668U;
	static volatile int32_t t113 = -100364;

    t113 = ((x545+x546)-(x547>x548));

    if (t113 != 38) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x549 = -1;
	int8_t x550 = 0;
	int64_t x551 = INT64_MAX;
	int32_t x552 = -1;
	static int32_t t114 = -1;

    t114 = ((x549+x550)-(x551>x552));

    if (t114 != -2) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x553 = 546U;
	uint16_t x554 = UINT16_MAX;
	static int32_t x556 = 326;
	int32_t t115 = 2;

    t115 = ((x553+x554)-(x555>x556));

    if (t115 != 66080) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x557 = 0;
	int16_t x558 = INT16_MIN;
	static volatile uint16_t x559 = 173U;
	uint8_t x560 = UINT8_MAX;
	static int32_t t116 = -2457869;

    t116 = ((x557+x558)-(x559>x560));

    if (t116 != -32768) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x561 = 469612464;
	volatile int8_t x564 = 0;

    t117 = ((x561+x562)-(x563>x564));

    if (t117 != 469612463LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int8_t x565 = 3;
	uint32_t x566 = 423780U;
	static uint8_t x568 = 4U;
	volatile uint32_t t118 = 289520U;

    t118 = ((x565+x566)-(x567>x568));

    if (t118 != 423783U) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x569 = -1LL;
	static volatile int32_t x570 = 5361994;
	uint8_t x571 = UINT8_MAX;
	volatile int64_t t119 = 1545LL;

    t119 = ((x569+x570)-(x571>x572));

    if (t119 != 5361992LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x573 = UINT32_MAX;
	uint8_t x575 = UINT8_MAX;
	volatile uint32_t t120 = 553U;

    t120 = ((x573+x574)-(x575>x576));

    if (t120 != 4294967293U) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x577 = -1;
	uint16_t x578 = UINT16_MAX;
	static uint8_t x579 = UINT8_MAX;
	static int16_t x580 = INT16_MIN;

    t121 = ((x577+x578)-(x579>x580));

    if (t121 != 65533) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x581 = UINT8_MAX;
	static int32_t x582 = 589;
	int32_t x583 = INT32_MAX;
	volatile int32_t t122 = -6930611;

    t122 = ((x581+x582)-(x583>x584));

    if (t122 != 843) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x589 = INT16_MAX;
	int32_t x592 = INT32_MIN;
	int32_t t123 = 4023;

    t123 = ((x589+x590)-(x591>x592));

    if (t123 != 32835) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x593 = 25U;
	uint16_t x594 = 123U;
	int32_t x595 = 116;
	int64_t x596 = INT64_MIN;
	static int32_t t124 = 68943078;

    t124 = ((x593+x594)-(x595>x596));

    if (t124 != 147) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x598 = INT64_MAX;
	uint32_t x599 = 3U;
	int32_t x600 = 388;

    t125 = ((x597+x598)-(x599>x600));

    if (t125 != 9223372036854797419LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint16_t x601 = UINT16_MAX;
	static int16_t x602 = 213;
	static uint64_t x604 = 153LLU;
	volatile int32_t t126 = 120090237;

    t126 = ((x601+x602)-(x603>x604));

    if (t126 != 65747) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint64_t x605 = 891LLU;
	int32_t x606 = INT32_MIN;
	volatile int32_t x607 = 5387739;

    t127 = ((x605+x606)-(x607>x608));

    if (t127 != 18446744071562068859LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x609 = 25U;
	int64_t x610 = INT64_MIN;
	int32_t x612 = -10455482;
	int64_t t128 = 0LL;

    t128 = ((x609+x610)-(x611>x612));

    if (t128 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x613 = -1;
	static volatile int16_t x614 = INT16_MIN;
	int16_t x615 = -1;
	int16_t x616 = -1;
	volatile int32_t t129 = -1;

    t129 = ((x613+x614)-(x615>x616));

    if (t129 != -32769) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x621 = 41;
	uint64_t x622 = UINT64_MAX;
	int32_t x623 = INT32_MAX;
	uint16_t x624 = UINT16_MAX;
	volatile uint64_t t130 = 6531LLU;

    t130 = ((x621+x622)-(x623>x624));

    if (t130 != 39LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x626 = INT8_MIN;
	static int64_t x627 = -11240363220LL;
	int64_t t131 = 1419LL;

    t131 = ((x625+x626)-(x627>x628));

    if (t131 != -129LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x629 = 1165U;
	int32_t x631 = INT32_MIN;
	volatile uint64_t t132 = 115LLU;

    t132 = ((x629+x630)-(x631>x632));

    if (t132 != 1164LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint8_t x633 = 0U;
	uint8_t x634 = UINT8_MAX;
	uint32_t x635 = UINT32_MAX;
	int32_t t133 = -68;

    t133 = ((x633+x634)-(x635>x636));

    if (t133 != 254) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint64_t x637 = UINT64_MAX;
	int8_t x638 = -5;
	uint8_t x639 = 14U;
	uint32_t x640 = UINT32_MAX;

    t134 = ((x637+x638)-(x639>x640));

    if (t134 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x641 = INT32_MAX;
	uint64_t x642 = UINT64_MAX;
	volatile uint64_t x643 = 36968098689135243LLU;
	int32_t x644 = INT32_MIN;
	uint64_t t135 = 2978LLU;

    t135 = ((x641+x642)-(x643>x644));

    if (t135 != 2147483646LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint8_t x645 = UINT8_MAX;
	int16_t x646 = INT16_MIN;
	int8_t x647 = -1;
	int32_t t136 = 10;

    t136 = ((x645+x646)-(x647>x648));

    if (t136 != -32513) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x649 = 337948;
	volatile int32_t x650 = INT32_MIN;
	static int64_t x651 = -929462404LL;
	int64_t x652 = INT64_MIN;
	static volatile int32_t t137 = -9462;

    t137 = ((x649+x650)-(x651>x652));

    if (t137 != -2147145701) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x653 = -1284377;
	int64_t x654 = -553299201041LL;
	static int16_t x656 = -1;
	int64_t t138 = -4176009304716LL;

    t138 = ((x653+x654)-(x655>x656));

    if (t138 != -553300485418LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x658 = INT16_MIN;
	int64_t x659 = INT64_MIN;
	int32_t x660 = INT32_MAX;

    t139 = ((x657+x658)-(x659>x660));

    if (t139 != -65536) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x661 = -15613;
	uint16_t x662 = 6544U;
	int8_t x663 = 30;
	int16_t x664 = 117;

    t140 = ((x661+x662)-(x663>x664));

    if (t140 != -9069) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x665 = -4;
	volatile int8_t x666 = -4;
	uint8_t x668 = UINT8_MAX;
	int32_t t141 = 622488;

    t141 = ((x665+x666)-(x667>x668));

    if (t141 != -9) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint8_t x669 = 7U;
	int32_t x670 = -1;
	static volatile int16_t x671 = INT16_MIN;
	static int32_t t142 = -36130;

    t142 = ((x669+x670)-(x671>x672));

    if (t142 != 6) { NG(); } else { ; }
	
}

void f143(void) {
    	static int16_t x673 = 593;
	static int8_t x674 = 1;
	volatile int8_t x675 = INT8_MIN;
	static volatile int64_t x676 = INT64_MIN;
	volatile int32_t t143 = 310;

    t143 = ((x673+x674)-(x675>x676));

    if (t143 != 593) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x677 = -1;
	int16_t x678 = INT16_MIN;
	uint16_t x679 = UINT16_MAX;
	uint64_t x680 = UINT64_MAX;
	volatile int32_t t144 = -12;

    t144 = ((x677+x678)-(x679>x680));

    if (t144 != -32769) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x681 = 254U;
	uint32_t x682 = UINT32_MAX;
	static uint16_t x683 = 5632U;
	static int64_t x684 = INT64_MAX;

    t145 = ((x681+x682)-(x683>x684));

    if (t145 != 253U) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x685 = -20;
	static volatile uint16_t x688 = 3U;

    t146 = ((x685+x686)-(x687>x688));

    if (t146 != 235) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x689 = 1427U;
	volatile int32_t x690 = INT32_MIN;
	int32_t x691 = INT32_MIN;
	int64_t x692 = INT64_MAX;

    t147 = ((x689+x690)-(x691>x692));

    if (t147 != 2147485075U) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x693 = 30U;
	static int64_t x694 = INT64_MIN;
	static int64_t x695 = INT64_MIN;
	volatile uint8_t x696 = 1U;
	int64_t t148 = -6527LL;

    t148 = ((x693+x694)-(x695>x696));

    if (t148 != -9223372036854775778LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x701 = INT16_MIN;
	volatile int64_t x702 = -1LL;
	uint8_t x703 = UINT8_MAX;
	int8_t x704 = INT8_MIN;
	volatile int64_t t149 = 379041003992938861LL;

    t149 = ((x701+x702)-(x703>x704));

    if (t149 != -32770LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile uint16_t x705 = 6U;
	volatile int16_t x706 = INT16_MAX;
	int64_t x707 = 70728171LL;
	uint8_t x708 = 31U;
	static int32_t t150 = 268228144;

    t150 = ((x705+x706)-(x707>x708));

    if (t150 != 32772) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x709 = INT64_MIN;
	int8_t x710 = INT8_MAX;
	static int16_t x712 = INT16_MIN;

    t151 = ((x709+x710)-(x711>x712));

    if (t151 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x713 = INT8_MAX;
	uint32_t x714 = 1U;
	int8_t x715 = 5;
	volatile uint32_t t152 = 440U;

    t152 = ((x713+x714)-(x715>x716));

    if (t152 != 127U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x717 = -12;
	int8_t x718 = INT8_MIN;
	int64_t x719 = -27047307574LL;
	volatile int32_t t153 = -41966305;

    t153 = ((x717+x718)-(x719>x720));

    if (t153 != -140) { NG(); } else { ; }
	
}

void f154(void) {
    	uint32_t x722 = 412869103U;
	static volatile int8_t x723 = 0;
	int16_t x724 = INT16_MAX;
	uint32_t t154 = 44U;

    t154 = ((x721+x722)-(x723>x724));

    if (t154 != 412869103U) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x725 = INT64_MIN;
	int32_t x726 = INT32_MAX;
	uint64_t x727 = 51808LLU;
	int64_t x728 = -326646027LL;
	volatile int64_t t155 = -62252144017431LL;

    t155 = ((x725+x726)-(x727>x728));

    if (t155 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x729 = INT32_MIN;
	static uint8_t x730 = UINT8_MAX;
	uint32_t x732 = 521621U;

    t156 = ((x729+x730)-(x731>x732));

    if (t156 != -2147483393) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x733 = INT64_MIN;
	int16_t x734 = 1;
	static uint64_t x735 = UINT64_MAX;
	volatile int32_t x736 = 9629647;
	volatile int64_t t157 = INT64_MIN;

    t157 = ((x733+x734)-(x735>x736));

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile uint8_t x737 = 11U;
	static uint64_t x738 = UINT64_MAX;
	static uint64_t x739 = 129272LLU;
	static int32_t x740 = -1;
	uint64_t t158 = 1414061732LLU;

    t158 = ((x737+x738)-(x739>x740));

    if (t158 != 10LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x741 = INT64_MAX;
	int8_t x742 = -1;
	uint8_t x743 = 40U;
	int64_t t159 = 0LL;

    t159 = ((x741+x742)-(x743>x744));

    if (t159 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x745 = -1;
	uint8_t x746 = UINT8_MAX;
	volatile int64_t x747 = 2211072267LL;
	volatile int16_t x748 = -1;
	static volatile int32_t t160 = -22615601;

    t160 = ((x745+x746)-(x747>x748));

    if (t160 != 253) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint32_t x749 = UINT32_MAX;
	uint8_t x752 = 4U;
	static int64_t t161 = -1LL;

    t161 = ((x749+x750)-(x751>x752));

    if (t161 != 4294967294LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x753 = 4634U;
	int32_t x754 = -1;
	uint16_t x755 = UINT16_MAX;
	uint32_t x756 = 1U;
	volatile int32_t t162 = 149641;

    t162 = ((x753+x754)-(x755>x756));

    if (t162 != 4632) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x757 = INT32_MAX;
	static volatile uint32_t x758 = 25630900U;
	static int8_t x759 = INT8_MAX;
	int8_t x760 = INT8_MIN;

    t163 = ((x757+x758)-(x759>x760));

    if (t163 != 2173114546U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x762 = 0U;
	uint64_t x764 = 181517582355099829LLU;
	volatile int32_t t164 = 762979;

    t164 = ((x761+x762)-(x763>x764));

    if (t164 != -32769) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x765 = INT64_MAX;
	int32_t x766 = INT32_MIN;
	int8_t x767 = INT8_MIN;
	int32_t x768 = 18607227;

    t165 = ((x765+x766)-(x767>x768));

    if (t165 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x769 = INT64_MIN;
	uint16_t x771 = 6U;
	static volatile int64_t x772 = INT64_MIN;
	volatile int64_t t166 = -13871814903926024LL;

    t166 = ((x769+x770)-(x771>x772));

    if (t166 != -9223372036854775696LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x773 = 19;
	static int16_t x775 = INT16_MAX;
	int64_t x776 = -1LL;
	int32_t t167 = 27600;

    t167 = ((x773+x774)-(x775>x776));

    if (t167 != -2147483630) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x778 = 7U;
	static int64_t x779 = -1LL;
	static int64_t x780 = INT64_MAX;

    t168 = ((x777+x778)-(x779>x780));

    if (t168 != -32761) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t t169 = 3870U;

    t169 = ((x781+x782)-(x783>x784));

    if (t169 != 14833U) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x785 = INT32_MIN;
	int16_t x786 = INT16_MAX;
	int64_t x788 = -1LL;
	volatile int32_t t170 = 3416;

    t170 = ((x785+x786)-(x787>x788));

    if (t170 != -2147450881) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x790 = UINT8_MAX;
	int8_t x791 = INT8_MIN;
	int32_t t171 = -3;

    t171 = ((x789+x790)-(x791>x792));

    if (t171 != 127) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x793 = 2U;
	static int64_t x794 = -57401006910159057LL;
	static int64_t t172 = 300029949LL;

    t172 = ((x793+x794)-(x795>x796));

    if (t172 != -57401006910159055LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x797 = INT8_MIN;
	static int8_t x798 = -1;
	static int16_t x799 = INT16_MIN;
	int64_t x800 = 104826148392LL;
	static int32_t t173 = -5;

    t173 = ((x797+x798)-(x799>x800));

    if (t173 != -129) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x801 = INT8_MIN;
	static int64_t x802 = 1395664277LL;
	int16_t x803 = INT16_MAX;
	volatile int64_t t174 = -882902206652LL;

    t174 = ((x801+x802)-(x803>x804));

    if (t174 != 1395664148LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x805 = -1LL;
	uint64_t x806 = 22222774245LLU;
	int8_t x807 = -1;
	volatile int16_t x808 = -1;
	volatile uint64_t t175 = 103LLU;

    t175 = ((x805+x806)-(x807>x808));

    if (t175 != 22222774244LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x809 = 167325564403661135LLU;
	static int64_t x810 = INT64_MIN;
	int8_t x811 = 1;
	volatile int8_t x812 = INT8_MAX;
	volatile uint64_t t176 = 2658009076326LLU;

    t176 = ((x809+x810)-(x811>x812));

    if (t176 != 9390697601258436943LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x814 = 455U;
	int8_t x815 = 1;
	volatile int16_t x816 = -1;
	volatile int32_t t177 = -778288;

    t177 = ((x813+x814)-(x815>x816));

    if (t177 != 465) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x817 = INT8_MIN;
	uint16_t x819 = 315U;
	volatile int16_t x820 = INT16_MAX;
	volatile int32_t t178 = -46;

    t178 = ((x817+x818)-(x819>x820));

    if (t178 != -32896) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x821 = 14174U;
	volatile uint32_t x822 = 0U;
	int16_t x823 = -1;
	static int32_t x824 = 363;
	uint32_t t179 = 10178132U;

    t179 = ((x821+x822)-(x823>x824));

    if (t179 != 14174U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x825 = INT32_MIN;
	static uint8_t x826 = 0U;
	int32_t x827 = INT32_MIN;
	int8_t x828 = -1;
	volatile int32_t t180 = INT32_MIN;

    t180 = ((x825+x826)-(x827>x828));

    if (t180 != INT32_MIN) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x837 = 6714820884268751188LLU;
	int16_t x838 = INT16_MIN;
	uint32_t x840 = UINT32_MAX;

    t181 = ((x837+x838)-(x839>x840));

    if (t181 != 6714820884268718420LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x841 = 0U;
	uint64_t x842 = UINT64_MAX;
	uint8_t x844 = UINT8_MAX;
	uint64_t t182 = UINT64_MAX;

    t182 = ((x841+x842)-(x843>x844));

    if (t182 != UINT64_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x845 = INT16_MAX;
	uint64_t x846 = 907LLU;
	int32_t x847 = -1;
	int8_t x848 = 1;

    t183 = ((x845+x846)-(x847>x848));

    if (t183 != 33674LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int32_t x849 = -1;
	uint16_t x850 = 28U;
	int8_t x851 = INT8_MIN;
	uint32_t x852 = 5U;
	volatile int32_t t184 = 63845915;

    t184 = ((x849+x850)-(x851>x852));

    if (t184 != 26) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x853 = 4;
	int64_t x854 = INT64_MIN;
	int32_t x855 = -7942;
	int16_t x856 = -2802;

    t185 = ((x853+x854)-(x855>x856));

    if (t185 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x857 = 349802U;
	int64_t x859 = -41438447LL;
	static uint32_t t186 = 1U;

    t186 = ((x857+x858)-(x859>x860));

    if (t186 != 317034U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x865 = 498U;
	int8_t x866 = -1;
	int16_t x867 = INT16_MAX;
	volatile int32_t t187 = 1;

    t187 = ((x865+x866)-(x867>x868));

    if (t187 != 496) { NG(); } else { ; }
	
}

void f188(void) {
    	static int32_t x869 = -1;
	volatile uint8_t x870 = 0U;
	static int16_t x871 = -70;
	int8_t x872 = INT8_MIN;
	int32_t t188 = 3;

    t188 = ((x869+x870)-(x871>x872));

    if (t188 != -2) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x874 = -8;
	uint64_t x875 = 17189990876LLU;
	int32_t x876 = INT32_MIN;
	volatile int32_t t189 = -356492;

    t189 = ((x873+x874)-(x875>x876));

    if (t189 != -32776) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x878 = INT8_MIN;
	static volatile int16_t x879 = INT16_MIN;
	volatile int64_t t190 = 2010120LL;

    t190 = ((x877+x878)-(x879>x880));

    if (t190 != 100907970131621966LL) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile uint32_t x881 = UINT32_MAX;
	static int8_t x882 = INT8_MIN;
	int32_t x883 = -1;
	uint16_t x884 = 51U;
	static volatile uint32_t t191 = 11480841U;

    t191 = ((x881+x882)-(x883>x884));

    if (t191 != 4294967167U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x885 = 977U;
	int8_t x886 = -1;
	int16_t x887 = INT16_MIN;
	int32_t x888 = -4303731;
	volatile int32_t t192 = 63180;

    t192 = ((x885+x886)-(x887>x888));

    if (t192 != 975) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x889 = INT64_MIN;
	uint16_t x890 = UINT16_MAX;
	static uint8_t x891 = 0U;
	int16_t x892 = -1667;
	volatile int64_t t193 = -16101LL;

    t193 = ((x889+x890)-(x891>x892));

    if (t193 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x897 = INT8_MIN;
	static int8_t x898 = INT8_MIN;
	int8_t x899 = INT8_MIN;
	int64_t x900 = 65156940719486034LL;
	volatile int32_t t194 = 3;

    t194 = ((x897+x898)-(x899>x900));

    if (t194 != -256) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x909 = 11;
	uint8_t x910 = UINT8_MAX;
	int8_t x911 = INT8_MIN;
	static int8_t x912 = INT8_MIN;

    t195 = ((x909+x910)-(x911>x912));

    if (t195 != 266) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x927 = INT8_MIN;
	int32_t x928 = -1;
	int64_t t196 = -4LL;

    t196 = ((x925+x926)-(x927>x928));

    if (t196 != -14053546120849339LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t t197 = 1026477326;

    t197 = ((x929+x930)-(x931>x932));

    if (t197 != -2147483627) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x933 = 1771376883514836LL;
	int64_t x934 = 4300153197896927LL;
	volatile uint8_t x935 = 0U;
	int16_t x936 = INT16_MIN;
	volatile int64_t t198 = 855591282LL;

    t198 = ((x933+x934)-(x935>x936));

    if (t198 != 6071530081411762LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x937 = INT16_MIN;
	static volatile int16_t x939 = INT16_MIN;
	volatile uint64_t x940 = 27404116173LLU;
	int32_t t199 = 15097;

    t199 = ((x937+x938)-(x939>x940));

    if (t199 != -32642) { NG(); } else { ; }
	
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

